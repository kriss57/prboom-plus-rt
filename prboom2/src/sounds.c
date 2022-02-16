/* Emacs style mode select   -*- C++ -*-
 *-----------------------------------------------------------------------------
 *
 *
 *  PrBoom: a Doom port merged with LxDoom and LSDLDoom
 *  based on BOOM, a modified and improved DOOM engine
 *  Copyright (C) 1999 by
 *  id Software, Chi Hoang, Lee Killough, Jim Flynn, Rand Phares, Ty Halderman
 *  Copyright (C) 1999-2000 by
 *  Jess Haas, Nicolas Kalkhof, Colin Phipps, Florian Schulze
 *  Copyright 2005, 2006 by
 *  Florian Schulze, Colin Phipps, Neil Stevens, Andrey Budko
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 *  02111-1307, USA.
 *
 * DESCRIPTION:
 *      Created by a sound utility.
 *      Kept as a sample, DOOM2 sounds.
 *
 *-----------------------------------------------------------------------------*/

// killough 5/3/98: reformatted

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "doomtype.h"
#include "sounds.h"

//
// Information about all the music
//

musicinfo_t S_music[] = {
  { 0 },
  { "e1m1", 0 },
  { "e1m2", 0 },
  { "e1m3", 0 },
  { "e1m4", 0 },
  { "e1m5", 0 },
  { "e1m6", 0 },
  { "e1m7", 0 },
  { "e1m8", 0 },
  { "e1m9", 0 },
  { "e2m1", 0 },
  { "e2m2", 0 },
  { "e2m3", 0 },
  { "e2m4", 0 },
  { "e2m5", 0 },
  { "e2m6", 0 },
  { "e2m7", 0 },
  { "e2m8", 0 },
  { "e2m9", 0 },
  { "e3m1", 0 },
  { "e3m2", 0 },
  { "e3m3", 0 },
  { "e3m4", 0 },
  { "e3m5", 0 },
  { "e3m6", 0 },
  { "e3m7", 0 },
  { "e3m8", 0 },
  { "e3m9", 0 },
  { "inter", 0 },
  { "intro", 0 },
  { "bunny", 0 },
  { "victor", 0 },
  { "introa", 0 },
  { "runnin", 0 },
  { "stalks", 0 },
  { "countd", 0 },
  { "betwee", 0 },
  { "doom", 0 },
  { "the_da", 0 },
  { "shawn", 0 },
  { "ddtblu", 0 },
  { "in_cit", 0 },
  { "dead", 0 },
  { "stlks2", 0 },
  { "theda2", 0 },
  { "doom2", 0 },
  { "ddtbl2", 0 },
  { "runni2", 0 },
  { "dead2", 0 },
  { "stlks3", 0 },
  { "romero", 0 },
  { "shawn2", 0 },
  { "messag", 0 },
  { "count2", 0 },
  { "ddtbl3", 0 },
  { "ampie", 0 },
  { "theda3", 0 },
  { "adrian", 0 },
  { "messg2", 0 },
  { "romer2", 0 },
  { "tense", 0 },
  { "shawn3", 0 },
  { "openin", 0 },
  { "evil", 0 },
  { "ultima", 0 },
  { "read_m", 0 },
  { "dm2ttl", 0 },
  { "dm2int", 0 },

  // custom music from MUSINFO lump
  { "musinfo", 0 }
};


//
// Information about all the sfx
//

sfxinfo_t S_sfx[] = {
  // S_sfx[0] needs to be a dummy for odd reasons.
  { "none", false,  0, 0, -1, -1, 0 },

  { "pistol", false, 64, 0, -1, -1, 0 },
  { "shotgn", false, 64, 0, -1, -1, 0 },
  { "sgcock", false, 64, 0, -1, -1, 0 },
  { "dshtgn", false, 64, 0, -1, -1, 0 },
  { "dbopn", false, 64, 0, -1, -1, 0 },
  { "dbcls", false, 64, 0, -1, -1, 0 },
  { "dbload", false, 64, 0, -1, -1, 0 },
  { "plasma", false, 64, 0, -1, -1, 0 },
  { "bfg", false, 64, 0, -1, -1, 0 },
  { "sawup", false, 64, 0, -1, -1, 0 },
  { "sawidl", false, 118, 0, -1, -1, 0 },
  { "sawful", false, 64, 0, -1, -1, 0 },
  { "sawhit", false, 64, 0, -1, -1, 0 },
  { "rlaunc", false, 64, 0, -1, -1, 0 },
  { "rxplod", false, 70, 0, -1, -1, 0 },
  { "firsht", false, 70, 0, -1, -1, 0 },
  { "firxpl", false, 70, 0, -1, -1, 0 },
  { "pstart", false, 100, 0, -1, -1, 0 },
  { "pstop", false, 100, 0, -1, -1, 0 },
  { "doropn", false, 100, 0, -1, -1, 0 },
  { "dorcls", false, 100, 0, -1, -1, 0 },
  { "stnmov", false, 119, 0, -1, -1, 0 },
  { "swtchn", false, 78, 0, -1, -1, 0 },
  { "swtchx", false, 78, 0, -1, -1, 0 },
  { "plpain", false, 96, 0, -1, -1, 0 },
  { "dmpain", false, 96, 0, -1, -1, 0 },
  { "popain", false, 96, 0, -1, -1, 0 },
  { "vipain", false, 96, 0, -1, -1, 0 },
  { "mnpain", false, 96, 0, -1, -1, 0 },
  { "pepain", false, 96, 0, -1, -1, 0 },
  { "slop", false, 78, 0, -1, -1, 0 },
  { "itemup", true, 78, 0, -1, -1, 0 },
  { "wpnup", true, 78, 0, -1, -1, 0 },
  { "oof", false, 96, 0, -1, -1, 0 },
  { "telept", false, 32, 0, -1, -1, 0 },
  { "posit1", true, 98, 0, -1, -1, 0 },
  { "posit2", true, 98, 0, -1, -1, 0 },
  { "posit3", true, 98, 0, -1, -1, 0 },
  { "bgsit1", true, 98, 0, -1, -1, 0 },
  { "bgsit2", true, 98, 0, -1, -1, 0 },
  { "sgtsit", true, 98, 0, -1, -1, 0 },
  { "cacsit", true, 98, 0, -1, -1, 0 },
  { "brssit", true, 94, 0, -1, -1, 0 },
  { "cybsit", true, 92, 0, -1, -1, 0 },
  { "spisit", true, 90, 0, -1, -1, 0 },
  { "bspsit", true, 90, 0, -1, -1, 0 },
  { "kntsit", true, 90, 0, -1, -1, 0 },
  { "vilsit", true, 90, 0, -1, -1, 0 },
  { "mansit", true, 90, 0, -1, -1, 0 },
  { "pesit", true, 90, 0, -1, -1, 0 },
  { "sklatk", false, 70, 0, -1, -1, 0 },
  { "sgtatk", false, 70, 0, -1, -1, 0 },
  { "skepch", false, 70, 0, -1, -1, 0 },
  { "vilatk", false, 70, 0, -1, -1, 0 },
  { "claw", false, 70, 0, -1, -1, 0 },
  { "skeswg", false, 70, 0, -1, -1, 0 },
  { "pldeth", false, 32, 0, -1, -1, 0 },
  { "pdiehi", false, 32, 0, -1, -1, 0 },
  { "podth1", false, 70, 0, -1, -1, 0 },
  { "podth2", false, 70, 0, -1, -1, 0 },
  { "podth3", false, 70, 0, -1, -1, 0 },
  { "bgdth1", false, 70, 0, -1, -1, 0 },
  { "bgdth2", false, 70, 0, -1, -1, 0 },
  { "sgtdth", false, 70, 0, -1, -1, 0 },
  { "cacdth", false, 70, 0, -1, -1, 0 },
  { "skldth", false, 70, 0, -1, -1, 0 },
  { "brsdth", false, 32, 0, -1, -1, 0 },
  { "cybdth", false, 32, 0, -1, -1, 0 },
  { "spidth", false, 32, 0, -1, -1, 0 },
  { "bspdth", false, 32, 0, -1, -1, 0 },
  { "vildth", false, 32, 0, -1, -1, 0 },
  { "kntdth", false, 32, 0, -1, -1, 0 },
  { "pedth", false, 32, 0, -1, -1, 0 },
  { "skedth", false, 32, 0, -1, -1, 0 },
  { "posact", true, 120, 0, -1, -1, 0 },
  { "bgact", true, 120, 0, -1, -1, 0 },
  { "dmact", true, 120, 0, -1, -1, 0 },
  { "bspact", true, 100, 0, -1, -1, 0 },
  { "bspwlk", true, 100, 0, -1, -1, 0 },
  { "vilact", true, 100, 0, -1, -1, 0 },
  { "noway", false, 78, 0, -1, -1, 0 },
  { "barexp", false, 60, 0, -1, -1, 0 },
  { "punch", false, 64, 0, -1, -1, 0 },
  { "hoof", false, 70, 0, -1, -1, 0 },
  { "metal", false, 70, 0, -1, -1, 0 },
  { "chgun", false, 64, &S_sfx[sfx_pistol], 150, 0, 0 },
  { "tink", false, 60, 0, -1, -1, 0 },
  { "bdopn", false, 100, 0, -1, -1, 0 },
  { "bdcls", false, 100, 0, -1, -1, 0 },
  { "itmbk", false, 100, 0, -1, -1, 0 },
  { "flame", false, 32, 0, -1, -1, 0 },
  { "flamst", false, 32, 0, -1, -1, 0 },
  { "getpow", false, 60, 0, -1, -1, 0 },
  { "bospit", false, 70, 0, -1, -1, 0 },
  { "boscub", false, 70, 0, -1, -1, 0 },
  { "bossit", false, 70, 0, -1, -1, 0 },
  { "bospn", false, 70, 0, -1, -1, 0 },
  { "bosdth", false, 70, 0, -1, -1, 0 },
  { "manatk", false, 70, 0, -1, -1, 0 },
  { "mandth", false, 70, 0, -1, -1, 0 },
  { "sssit", false, 70, 0, -1, -1, 0 },
  { "ssdth", false, 70, 0, -1, -1, 0 },
  { "keenpn", false, 70, 0, -1, -1, 0 },
  { "keendt", false, 70, 0, -1, -1, 0 },
  { "skeact", false, 70, 0, -1, -1, 0 },
  { "skesit", false, 70, 0, -1, -1, 0 },
  { "skeatk", false, 70, 0, -1, -1, 0 },
  { "radio", false, 60, 0, -1, -1, 0 },
  
  // killough 11/98: dog sounds
  { "dgsit",  false,   98, 0, -1, -1, 0 },
  { "dgatk",  false,   70, 0, -1, -1, 0 },
  { "dgact",  false,  120, 0, -1, -1, 0 },
  { "dgdth",  false,   70, 0, -1, -1, 0 },
  { "dgpain", false,   96, 0, -1, -1, 0 },

  //e6y
#if RT_CUSTOM_MENU
  // RT: instead of the secret sound
  { "swtchn", false, 60, &S_sfx[sfx_swtchn], 25, 0, 0 },
#else
  { "secret", false, 60, 0, -1, -1, 0 },
#endif
  { "gibdth", false, 60, 0, -1, -1, 0 },
  // Everything from here up to 500 is reserved for future use.

  // Free slots for DEHEXTRA. Priorities should be overridden by user.
  // There is a gap present to accomodate Eternity Engine - see their commit
  // @ https://github.com/team-eternity/eternity/commit/b8fb8f71 - which  means
  // I must use desginated initializers, or else supply an exact number of dummy
  // entries to pad it out. Not sure which would be uglier to maintain. -SH
  [500] = { "fre000", false, 127, 0, -1, -1, 0 },
  [501] = { "fre001", false, 127, 0, -1, -1, 0 },
  [502] = { "fre002", false, 127, 0, -1, -1, 0 },
  [503] = { "fre003", false, 127, 0, -1, -1, 0 },
  [504] = { "fre004", false, 127, 0, -1, -1, 0 },
  [505] = { "fre005", false, 127, 0, -1, -1, 0 },
  [506] = { "fre006", false, 127, 0, -1, -1, 0 },
  [507] = { "fre007", false, 127, 0, -1, -1, 0 },
  [508] = { "fre008", false, 127, 0, -1, -1, 0 },
  [509] = { "fre009", false, 127, 0, -1, -1, 0 },
  [510] = { "fre010", false, 127, 0, -1, -1, 0 },
  [511] = { "fre011", false, 127, 0, -1, -1, 0 },
  [512] = { "fre012", false, 127, 0, -1, -1, 0 },
  [513] = { "fre013", false, 127, 0, -1, -1, 0 },
  [514] = { "fre014", false, 127, 0, -1, -1, 0 },
  [515] = { "fre015", false, 127, 0, -1, -1, 0 },
  [516] = { "fre016", false, 127, 0, -1, -1, 0 },
  [517] = { "fre017", false, 127, 0, -1, -1, 0 },
  [518] = { "fre018", false, 127, 0, -1, -1, 0 },
  [519] = { "fre019", false, 127, 0, -1, -1, 0 },
  [520] = { "fre020", false, 127, 0, -1, -1, 0 },
  [521] = { "fre021", false, 127, 0, -1, -1, 0 },
  [522] = { "fre022", false, 127, 0, -1, -1, 0 },
  [523] = { "fre023", false, 127, 0, -1, -1, 0 },
  [524] = { "fre024", false, 127, 0, -1, -1, 0 },
  [525] = { "fre025", false, 127, 0, -1, -1, 0 },
  [526] = { "fre026", false, 127, 0, -1, -1, 0 },
  [527] = { "fre027", false, 127, 0, -1, -1, 0 },
  [528] = { "fre028", false, 127, 0, -1, -1, 0 },
  [529] = { "fre029", false, 127, 0, -1, -1, 0 },
  [530] = { "fre030", false, 127, 0, -1, -1, 0 },
  [531] = { "fre031", false, 127, 0, -1, -1, 0 },
  [532] = { "fre032", false, 127, 0, -1, -1, 0 },
  [533] = { "fre033", false, 127, 0, -1, -1, 0 },
  [534] = { "fre034", false, 127, 0, -1, -1, 0 },
  [535] = { "fre035", false, 127, 0, -1, -1, 0 },
  [536] = { "fre036", false, 127, 0, -1, -1, 0 },
  [537] = { "fre037", false, 127, 0, -1, -1, 0 },
  [538] = { "fre038", false, 127, 0, -1, -1, 0 },
  [539] = { "fre039", false, 127, 0, -1, -1, 0 },
  [540] = { "fre040", false, 127, 0, -1, -1, 0 },
  [541] = { "fre041", false, 127, 0, -1, -1, 0 },
  [542] = { "fre042", false, 127, 0, -1, -1, 0 },
  [543] = { "fre043", false, 127, 0, -1, -1, 0 },
  [544] = { "fre044", false, 127, 0, -1, -1, 0 },
  [545] = { "fre045", false, 127, 0, -1, -1, 0 },
  [546] = { "fre046", false, 127, 0, -1, -1, 0 },
  [547] = { "fre047", false, 127, 0, -1, -1, 0 },
  [548] = { "fre048", false, 127, 0, -1, -1, 0 },
  [549] = { "fre049", false, 127, 0, -1, -1, 0 },
  [550] = { "fre050", false, 127, 0, -1, -1, 0 },
  [551] = { "fre051", false, 127, 0, -1, -1, 0 },
  [552] = { "fre052", false, 127, 0, -1, -1, 0 },
  [553] = { "fre053", false, 127, 0, -1, -1, 0 },
  [554] = { "fre054", false, 127, 0, -1, -1, 0 },
  [555] = { "fre055", false, 127, 0, -1, -1, 0 },
  [556] = { "fre056", false, 127, 0, -1, -1, 0 },
  [557] = { "fre057", false, 127, 0, -1, -1, 0 },
  [558] = { "fre058", false, 127, 0, -1, -1, 0 },
  [559] = { "fre059", false, 127, 0, -1, -1, 0 },
  [560] = { "fre060", false, 127, 0, -1, -1, 0 },
  [561] = { "fre061", false, 127, 0, -1, -1, 0 },
  [562] = { "fre062", false, 127, 0, -1, -1, 0 },
  [563] = { "fre063", false, 127, 0, -1, -1, 0 },
  [564] = { "fre064", false, 127, 0, -1, -1, 0 },
  [565] = { "fre065", false, 127, 0, -1, -1, 0 },
  [566] = { "fre066", false, 127, 0, -1, -1, 0 },
  [567] = { "fre067", false, 127, 0, -1, -1, 0 },
  [568] = { "fre068", false, 127, 0, -1, -1, 0 },
  [569] = { "fre069", false, 127, 0, -1, -1, 0 },
  [570] = { "fre070", false, 127, 0, -1, -1, 0 },
  [571] = { "fre071", false, 127, 0, -1, -1, 0 },
  [572] = { "fre072", false, 127, 0, -1, -1, 0 },
  [573] = { "fre073", false, 127, 0, -1, -1, 0 },
  [574] = { "fre074", false, 127, 0, -1, -1, 0 },
  [575] = { "fre075", false, 127, 0, -1, -1, 0 },
  [576] = { "fre076", false, 127, 0, -1, -1, 0 },
  [577] = { "fre077", false, 127, 0, -1, -1, 0 },
  [578] = { "fre078", false, 127, 0, -1, -1, 0 },
  [579] = { "fre079", false, 127, 0, -1, -1, 0 },
  [580] = { "fre080", false, 127, 0, -1, -1, 0 },
  [581] = { "fre081", false, 127, 0, -1, -1, 0 },
  [582] = { "fre082", false, 127, 0, -1, -1, 0 },
  [583] = { "fre083", false, 127, 0, -1, -1, 0 },
  [584] = { "fre084", false, 127, 0, -1, -1, 0 },
  [585] = { "fre085", false, 127, 0, -1, -1, 0 },
  [586] = { "fre086", false, 127, 0, -1, -1, 0 },
  [587] = { "fre087", false, 127, 0, -1, -1, 0 },
  [588] = { "fre088", false, 127, 0, -1, -1, 0 },
  [589] = { "fre089", false, 127, 0, -1, -1, 0 },
  [590] = { "fre090", false, 127, 0, -1, -1, 0 },
  [591] = { "fre091", false, 127, 0, -1, -1, 0 },
  [592] = { "fre092", false, 127, 0, -1, -1, 0 },
  [593] = { "fre093", false, 127, 0, -1, -1, 0 },
  [594] = { "fre094", false, 127, 0, -1, -1, 0 },
  [595] = { "fre095", false, 127, 0, -1, -1, 0 },
  [596] = { "fre096", false, 127, 0, -1, -1, 0 },
  [597] = { "fre097", false, 127, 0, -1, -1, 0 },
  [598] = { "fre098", false, 127, 0, -1, -1, 0 },
  [599] = { "fre099", false, 127, 0, -1, -1, 0 },
  [600] = { "fre100", false, 127, 0, -1, -1, 0 },
  [601] = { "fre101", false, 127, 0, -1, -1, 0 },
  [602] = { "fre102", false, 127, 0, -1, -1, 0 },
  [603] = { "fre103", false, 127, 0, -1, -1, 0 },
  [604] = { "fre104", false, 127, 0, -1, -1, 0 },
  [605] = { "fre105", false, 127, 0, -1, -1, 0 },
  [606] = { "fre106", false, 127, 0, -1, -1, 0 },
  [607] = { "fre107", false, 127, 0, -1, -1, 0 },
  [608] = { "fre108", false, 127, 0, -1, -1, 0 },
  [609] = { "fre109", false, 127, 0, -1, -1, 0 },
  [610] = { "fre110", false, 127, 0, -1, -1, 0 },
  [611] = { "fre111", false, 127, 0, -1, -1, 0 },
  [612] = { "fre112", false, 127, 0, -1, -1, 0 },
  [613] = { "fre113", false, 127, 0, -1, -1, 0 },
  [614] = { "fre114", false, 127, 0, -1, -1, 0 },
  [615] = { "fre115", false, 127, 0, -1, -1, 0 },
  [616] = { "fre116", false, 127, 0, -1, -1, 0 },
  [617] = { "fre117", false, 127, 0, -1, -1, 0 },
  [618] = { "fre118", false, 127, 0, -1, -1, 0 },
  [619] = { "fre119", false, 127, 0, -1, -1, 0 },
  [620] = { "fre120", false, 127, 0, -1, -1, 0 },
  [621] = { "fre121", false, 127, 0, -1, -1, 0 },
  [622] = { "fre122", false, 127, 0, -1, -1, 0 },
  [623] = { "fre123", false, 127, 0, -1, -1, 0 },
  [624] = { "fre124", false, 127, 0, -1, -1, 0 },
  [625] = { "fre125", false, 127, 0, -1, -1, 0 },
  [626] = { "fre126", false, 127, 0, -1, -1, 0 },
  [627] = { "fre127", false, 127, 0, -1, -1, 0 },
  [628] = { "fre128", false, 127, 0, -1, -1, 0 },
  [629] = { "fre129", false, 127, 0, -1, -1, 0 },
  [630] = { "fre130", false, 127, 0, -1, -1, 0 },
  [631] = { "fre131", false, 127, 0, -1, -1, 0 },
  [632] = { "fre132", false, 127, 0, -1, -1, 0 },
  [633] = { "fre133", false, 127, 0, -1, -1, 0 },
  [634] = { "fre134", false, 127, 0, -1, -1, 0 },
  [635] = { "fre135", false, 127, 0, -1, -1, 0 },
  [636] = { "fre136", false, 127, 0, -1, -1, 0 },
  [637] = { "fre137", false, 127, 0, -1, -1, 0 },
  [638] = { "fre138", false, 127, 0, -1, -1, 0 },
  [639] = { "fre139", false, 127, 0, -1, -1, 0 },
  [640] = { "fre140", false, 127, 0, -1, -1, 0 },
  [641] = { "fre141", false, 127, 0, -1, -1, 0 },
  [642] = { "fre142", false, 127, 0, -1, -1, 0 },
  [643] = { "fre143", false, 127, 0, -1, -1, 0 },
  [644] = { "fre144", false, 127, 0, -1, -1, 0 },
  [645] = { "fre145", false, 127, 0, -1, -1, 0 },
  [646] = { "fre146", false, 127, 0, -1, -1, 0 },
  [647] = { "fre147", false, 127, 0, -1, -1, 0 },
  [648] = { "fre148", false, 127, 0, -1, -1, 0 },
  [649] = { "fre149", false, 127, 0, -1, -1, 0 },
  [650] = { "fre150", false, 127, 0, -1, -1, 0 },
  [651] = { "fre151", false, 127, 0, -1, -1, 0 },
  [652] = { "fre152", false, 127, 0, -1, -1, 0 },
  [653] = { "fre153", false, 127, 0, -1, -1, 0 },
  [654] = { "fre154", false, 127, 0, -1, -1, 0 },
  [655] = { "fre155", false, 127, 0, -1, -1, 0 },
  [656] = { "fre156", false, 127, 0, -1, -1, 0 },
  [657] = { "fre157", false, 127, 0, -1, -1, 0 },
  [658] = { "fre158", false, 127, 0, -1, -1, 0 },
  [659] = { "fre159", false, 127, 0, -1, -1, 0 },
  [660] = { "fre160", false, 127, 0, -1, -1, 0 },
  [661] = { "fre161", false, 127, 0, -1, -1, 0 },
  [662] = { "fre162", false, 127, 0, -1, -1, 0 },
  [663] = { "fre163", false, 127, 0, -1, -1, 0 },
  [664] = { "fre164", false, 127, 0, -1, -1, 0 },
  [665] = { "fre165", false, 127, 0, -1, -1, 0 },
  [666] = { "fre166", false, 127, 0, -1, -1, 0 },
  [667] = { "fre167", false, 127, 0, -1, -1, 0 },
  [668] = { "fre168", false, 127, 0, -1, -1, 0 },
  [669] = { "fre169", false, 127, 0, -1, -1, 0 },
  [670] = { "fre170", false, 127, 0, -1, -1, 0 },
  [671] = { "fre171", false, 127, 0, -1, -1, 0 },
  [672] = { "fre172", false, 127, 0, -1, -1, 0 },
  [673] = { "fre173", false, 127, 0, -1, -1, 0 },
  [674] = { "fre174", false, 127, 0, -1, -1, 0 },
  [675] = { "fre175", false, 127, 0, -1, -1, 0 },
  [676] = { "fre176", false, 127, 0, -1, -1, 0 },
  [677] = { "fre177", false, 127, 0, -1, -1, 0 },
  [678] = { "fre178", false, 127, 0, -1, -1, 0 },
  [679] = { "fre179", false, 127, 0, -1, -1, 0 },
  [680] = { "fre180", false, 127, 0, -1, -1, 0 },
  [681] = { "fre181", false, 127, 0, -1, -1, 0 },
  [682] = { "fre182", false, 127, 0, -1, -1, 0 },
  [683] = { "fre183", false, 127, 0, -1, -1, 0 },
  [684] = { "fre184", false, 127, 0, -1, -1, 0 },
  [685] = { "fre185", false, 127, 0, -1, -1, 0 },
  [686] = { "fre186", false, 127, 0, -1, -1, 0 },
  [687] = { "fre187", false, 127, 0, -1, -1, 0 },
  [688] = { "fre188", false, 127, 0, -1, -1, 0 },
  [689] = { "fre189", false, 127, 0, -1, -1, 0 },
  [690] = { "fre190", false, 127, 0, -1, -1, 0 },
  [691] = { "fre191", false, 127, 0, -1, -1, 0 },
  [692] = { "fre192", false, 127, 0, -1, -1, 0 },
  [693] = { "fre193", false, 127, 0, -1, -1, 0 },
  [694] = { "fre194", false, 127, 0, -1, -1, 0 },
  [695] = { "fre195", false, 127, 0, -1, -1, 0 },
  [696] = { "fre196", false, 127, 0, -1, -1, 0 },
  [697] = { "fre197", false, 127, 0, -1, -1, 0 },
  [698] = { "fre198", false, 127, 0, -1, -1, 0 },
  [699] = { "fre199", false, 127, 0, -1, -1, 0 },
};
