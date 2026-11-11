#pragma once
// game/update/moby211.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007febdc; /* 0x7febdc */
extern undefined4 DAT_007fec00; /* 0x7fec00 */
extern undefined4 DAT_007fec04; /* 0x7fec04 */
extern undefined4 DAT_007fec0c; /* 0x7fec0c */
extern undefined4 DAT_007fec10; /* 0x7fec10 */
extern undefined4 DAT_007fec14; /* 0x7fec14 */
extern undefined4 DAT_007fec18; /* 0x7fec18 */
extern undefined4 DAT_007fec1c; /* 0x7fec1c */
extern undefined4 DAT_007fec20; /* 0x7fec20 */
extern undefined4 DAT_007fec24; /* 0x7fec24 */
extern undefined4 DAT_007fec28; /* 0x7fec28 */
extern undefined4 DAT_007fec2c; /* 0x7fec2c */
extern undefined4 DAT_007fec30; /* no defined data */
extern undefined4 DAT_007fec34; /* 0x7fec34 */
extern pointer32 PTR_M1412_002effe0_0070b7b8; /* 0x70b7b8 */

// ---- functions
void M211_002ed724(void);
void M211_002ed768(void *param_1);
void M211_002edb38(int param_1);
void M211_002eefd8(int param_1);
longlong M211_002ef040(int param_1);
void M211_002ef158(int param_1);
void UpdateMoby_211(MobyInstance *moby);
