#pragma once
// game/update/moby1225.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00766a40; /* 0x766a40 */
extern undefined4 DAT_00766a44; /* 0x766a44 */
extern undefined4 DAT_00766a48; /* 0x766a48 */
extern undefined4 DAT_00766a58; /* 0x766a58 */
extern undefined4 DAT_00766a5c; /* 0x766a5c */
extern undefined4 DAT_00766b0c; /* 0x766b0c */
extern undefined4 DAT_007682dc; /* 0x7682dc */
extern undefined4 DAT_0076833c; /* 0x76833c */
extern undefined4 DAT_0076839c; /* 0x76839c */
extern undefined4 DAT_00f08e50; /* 0xf08e50 */
extern undefined4 DAT_00f08e54; /* 0xf08e54 */
extern pointer PTR_DAT_00768280; /* 0x768280 */
extern pointer32 PTR_M1225_0020e950_00709540; /* 0x709540 */

// ---- functions
void M1225_0020e108(int param_1);
void M1225_0020e910(void);
void M1225_0020e950(void);
void UpdateMoby_1225(MobyInstance *moby);
