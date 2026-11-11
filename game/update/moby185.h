#pragma once
// game/update/moby185.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002c72ec; /* 0x2c72ec */
extern undefined4 DAT_007bd348; /* 0x7bd348 */
extern undefined4 DAT_007bd34c; /* 0x7bd34c */
extern undefined4 DAT_007bd350; /* 0x7bd350 */
extern undefined4 DAT_007bd354; /* 0x7bd354 */
extern undefined4 DAT_007bd358; /* 0x7bd358 */
extern undefined4 DAT_007bd360; /* 0x7bd360 */
extern undefined4 DAT_007bd364; /* 0x7bd364 */
extern undefined4 DAT_007bd368; /* 0x7bd368 */
extern undefined4 DAT_007bd37c; /* 0x7bd37c */
extern undefined4 DAT_007bd380; /* 0x7bd380 */
extern undefined4 DAT_007bd384; /* 0x7bd384 */
extern undefined4 DAT_007bd38c; /* 0x7bd38c */
extern undefined4 DAT_007bd390; /* 0x7bd390 */
extern undefined4 DAT_007bd398; /* 0x7bd398 */
extern undefined4 DAT_007bd3a0; /* 0x7bd3a0 */
extern undefined4 DAT_007bd3a8; /* 0x7bd3a8 */
extern undefined4 DAT_007bd3ac; /* 0x7bd3ac */
extern undefined4 DAT_007bd3b0; /* 0x7bd3b0 */
extern undefined4 DAT_007bd3b8; /* 0x7bd3b8 */
extern undefined4 DAT_010a10a0; /* 0x10a10a0 */
extern undefined4 DAT_010a10a4; /* 0x10a10a4 */
extern undefined4 DAT_010a10a8; /* 0x10a10a8 */
extern undefined4 DAT_010a10ac; /* 0x10a10ac */
extern undefined4 DAT_010a10b8; /* 0x10a10b8 */
extern undefined4 DAT_010a10c0; /* 0x10a10c0 */
extern undefined4 DAT_010a10c4; /* 0x10a10c4 */
extern undefined4 DAT_010a10c8; /* 0x10a10c8 */
extern undefined4 DAT_010a10cc; /* 0x10a10cc */
extern undefined4 DAT_010a10d0; /* 0x10a10d0 */
extern undefined4 DAT_010a10d4; /* 0x10a10d4 */
extern undefined4 DAT_010a10d8; /* 0x10a10d8 */
extern undefined4 DAT_010a10dc; /* 0x10a10dc */
extern undefined4 DAT_010a1180; /* 0x10a1180 */
extern undefined4 DAT_010a1184; /* 0x10a1184 */
extern undefined4 DAT_010a1188; /* 0x10a1188 */
extern undefined4 DAT_010a118c; /* 0x10a118c */
extern undefined4 DAT_010a1230; /* 0x10a1230 */
extern undefined4 DAT_010a1234; /* 0x10a1234 */
extern undefined4 DAT_010a1238; /* 0x10a1238 */
extern undefined4 DAT_010a123c; /* 0x10a123c */
extern undefined4 DAT_010a1240; /* 0x10a1240 */
extern undefined4 DAT_010a1244; /* 0x10a1244 */
extern undefined4 DAT_010a1248; /* 0x10a1248 */
extern undefined4 DAT_010a124c; /* 0x10a124c */
extern undefined4 DAT_010a12f0; /* 0x10a12f0 */
extern undefined4 DAT_010a12f4; /* 0x10a12f4 */
extern undefined4 DAT_010a12f8; /* 0x10a12f8 */
extern undefined4 DAT_010a12fc; /* 0x10a12fc */
extern undefined4 DAT_010a1300; /* 0x10a1300 */
extern undefined4 DAT_010a1304; /* 0x10a1304 */
extern undefined4 DAT_010a2220; /* 0x10a2220 */
extern undefined4 DAT_010a2224; /* 0x10a2224 */
extern undefined4 DAT_010a2228; /* 0x10a2228 */
extern undefined4 DAT_010a222c; /* 0x10a222c */
extern undefined4 DAT_010a2250; /* 0x10a2250 */
extern undefined4 DAT_010a2254; /* 0x10a2254 */
extern undefined4 DAT_010a2258; /* 0x10a2258 */
extern undefined4 DAT_010a225c; /* 0x10a225c */
extern undefined4 DAT_010a2280; /* no defined data */
extern undefined4 DAT_010a228c; /* no defined data */
extern undefined4 DAT_010a2298; /* no defined data */
extern undefined4 DAT_010a22a4; /* no defined data */
extern undefined1 DAT_010a22b0; /* 0x10a22b0 */
extern undefined4 DAT_010a22b4; /* 0x10a22b4 */
extern pointer32 PTR_Draw_Moby185Meter_00705748; /* 0x705748 */
extern pointer32 PTR_M1850_002c8ff8_0070b0f8; /* 0x70b0f8 */
extern pointer32 PTR_Moby185Hud_Init_00705738; /* 0x705738 */
extern pointer32 PTR_Moby185Hud_Update_00705740; /* 0x705740 */

// ---- functions
void M1849_002c5db8(int param_1);
void M185_002c5f88(void *param_1);
void UpdateMoby_185(MobyInstance *moby);
