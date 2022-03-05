#include <stdio.h>

#include "rt_textures.h"

#include "lprintf.h"
#include "m_misc.h"
#include "z_zone.h"


#define RT_TEXTURE_METAINFO_FILE RG_RESOURCES_FOLDER"textures_metainfo.txt"


#define member_size(type, member) sizeof(((type *)0)->member)


#define MAX_METAINFO_COUNT 1024
static rt_texture_metainfo_t rt_metainfo[MAX_METAINFO_COUNT];
static int rt_metainfo_count = 0;


void RT_TextureMetaInfo_Init(void)
{
  rt_metainfo_count = 0;


  byte *buffer = NULL;
  int length = M_ReadFile(RT_TEXTURE_METAINFO_FILE, &buffer);

  if (length <= 0 || buffer == NULL)
  {
    Z_Free(buffer);

    if (length == 0)
    {
      lprintf(LO_WARN, RT_TEXTURE_METAINFO_FILE" is empty. Textures won't have RT effects.\n");
    }
    else
    {
      I_Error("Couldn't read file %s. %s", RT_TEXTURE_METAINFO_FILE, "Textures won't have RT effects.");
    }
    return;
  }


  enum state_t
  {
    STATE_NONE,
    STATE_WATER,
    STATE_RASTERIZED_WITH_LIGHT,
    STATE_EMISSIVE,
    STATE_EMISSIVE_WITHOUT_INDIRECT_ILLUMINATION,
  };
  enum state_t state = STATE_NONE;


  const char *text = (const char *)buffer;
  int text_iter = 0;
  char curr_line[256];

  while (true)
  {
    {
      dboolean found_end = text_iter >= length || text[text_iter] == '\0';
      if (found_end)
      {
        break;
      }
    }

    {
      int i = 0;

      while (text_iter < length && text[text_iter] != '\r' && text[text_iter] != '\n' && text[text_iter] != '\0')
      {
        if (i >= (int)sizeof(curr_line) - 1)
        {
          lprintf(LO_WARN, RT_TEXTURE_METAINFO_FILE" contains line with >=255 characters (char id: %d).\n", text_iter);
          break;
        }

        curr_line[i] = text[text_iter];
        i++;
        text_iter++;
      }

      curr_line[i] = '\0';
      text_iter++;
    }

    if (curr_line[0] == '\0')
    {
      continue;
    }

    if (strcmp(curr_line, "@WATER") == 0)
    {
      state = STATE_WATER;
      continue;
    }
    else if (strcmp(curr_line, "@RASTERIZED_WITH_LIGHT") == 0)
    {
      state = STATE_RASTERIZED_WITH_LIGHT;
      continue;
    }
    else if (strcmp(curr_line, "@EMISSIVE") == 0)
    {
      state = STATE_EMISSIVE;
      continue;
    }
    else if (strcmp(curr_line, "@EMISSIVE_WITHOUT_INDIRECT_ILLUMINATION") == 0)
    {
      state = STATE_EMISSIVE_WITHOUT_INDIRECT_ILLUMINATION;
      continue;
    }


    dboolean valid = false;
    char name[256];
    RgFloat3D light_color = { 0 };
    rt_texture_flags_t additional_flags = 0;
    float geom_emission = 0;


    switch (state)
    {
      case STATE_WATER:
      {
        int c = sscanf(curr_line, "%s", name);
        if (c == 1)
        {
          valid = true;
        }
        break;
      }
      case STATE_RASTERIZED_WITH_LIGHT:
      {
        char str_hexcolor[32];
        int c = sscanf(curr_line, "%s %s", name, str_hexcolor);
        if (c == 2)
        {
          const char red[] = { str_hexcolor[0], str_hexcolor[1], '\0' };
          uint32_t ir = strtoul(red, NULL, 16);

          const char green[] = { str_hexcolor[2], str_hexcolor[3], '\0' };
          uint32_t ig = strtoul(green, NULL, 16);

          const char blue[] = { str_hexcolor[4], str_hexcolor[5], '\0' };
          uint32_t ib = strtoul(blue, NULL, 16);

          light_color.data[0] = (float)ir / 255.0f;
          light_color.data[1] = (float)ig / 255.0f;
          light_color.data[2] = (float)ib / 255.0f;

          valid = true;
        }
        break;
      }
      case STATE_EMISSIVE:
      case STATE_EMISSIVE_WITHOUT_INDIRECT_ILLUMINATION:
      {
        int c = sscanf(curr_line, "%s %f", name, &geom_emission);
        if (c == 2)
        {
          geom_emission = max(geom_emission, 0.0f);
          valid = true;
        }
        break;
      }
      default:
      {
        state = STATE_NONE;
        break;
      }
    }

    if (valid && name[0] == '#')
    {
      // comment
      continue;
    }

    if (!valid)
    {
      if (state == STATE_NONE)
      {
        lprintf(LO_WARN, RT_TEXTURE_METAINFO_FILE": ignoring %s: state (that starts with @) was not specified\n", curr_line);
      }
      else
      {
        lprintf(LO_WARN, RT_TEXTURE_METAINFO_FILE": ignoring %s\n", curr_line);
      }
      continue;
    }

    if (strnlen(name, sizeof(name)) + 1 > (int)member_size(rt_texture_t, name))
    {
      name[sizeof(name) - 1] = '\0';
      lprintf(LO_WARN, RT_TEXTURE_METAINFO_FILE": texture name \'%s\' has more than %d characters. Ignoring.\n", name, (int)member_size(rt_texture_t, name));
      continue;
    }

    {
      rt_texture_metainfo_t *dst = &rt_metainfo[rt_metainfo_count];
      memset(dst, 0, sizeof(*dst));

      memcpy(dst->name, name, sizeof(dst->name));
      dst->name[sizeof(dst->name) - 1] = '\0';

      switch (state)
      {
      case STATE_WATER: 
        dst->additional_flags = RT_TEXTURE_FLAG_IS_WATER_BIT;
        break;

      case STATE_RASTERIZED_WITH_LIGHT:
        dst->additional_flags = RT_TEXTURE_FLAG_WITH_LIGHTSOURCE_BIT;
        dst->light_color = light_color;
        break;

      case STATE_EMISSIVE:
        dst->additional_flags = RT_TEXTURE_FLAG_IS_EMISSIVE_BIT;
        dst->geom_emission = geom_emission;
        break;

      case STATE_EMISSIVE_WITHOUT_INDIRECT_ILLUMINATION: 
        dst->additional_flags = RT_TEXTURE_FLAG_IS_EMISSIVE_BIT | RT_TEXTURE_FLAG_WITHOUT_INDIR_ILLUMINATION_BIT;
        dst->geom_emission = geom_emission;
        break;

      default: 
        continue;
      }
    }
    rt_metainfo_count++;

    if (rt_metainfo_count >= (int)RG_ARRAY_SIZE(rt_metainfo))
    {
      break;
    }
  }
}


const rt_texture_metainfo_t *RT_TextureMetaInfo_Find(const char *name)
{
  if (name == NULL || name[0] == '\0')
  {
    return NULL;
  }

  for (int i = 0; i < rt_metainfo_count; i++)
  {
    if (strnicmp(rt_metainfo[i].name, name, sizeof(rt_metainfo[i].name)) == 0)
    {
      return &rt_metainfo[i];
    }
  }

  return NULL;
}