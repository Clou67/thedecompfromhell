#pragma once
// game/update/moby578.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003cbfc0; /* 0x3cbfc0 */
extern undefined4 DAT_008461f4; /* 0x8461f4 */
extern undefined4 DAT_00846218; /* 0x846218 */
extern undefined4 DAT_0084621c; /* 0x84621c */
extern undefined4 DAT_00846220; /* 0x846220 */
extern undefined4 DAT_00846224; /* 0x846224 */
extern undefined4 DAT_00846228; /* 0x846228 */
extern undefined4 DAT_0084622c; /* 0x84622c */
extern undefined4 DAT_00846230; /* 0x846230 */
extern undefined4 DAT_00846234; /* 0x846234 */
extern undefined4 DAT_0084623c; /* 0x84623c */
extern undefined4 DAT_00846240; /* 0x846240 */

// ---- functions
void M578_003cafa4(MobyInstance *param_1);
void M578_003caffc(int param_1);
undefined8 M578_003cb054 (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4);
void M578_003cb124(int param_1);
longlong M578_003cb15c(int param_1);
void M578_003cb19c(void);
void M578_003cb1b8(MobyInstance *param_1);
void UpdateMoby_578(MobyInstance *moby);
