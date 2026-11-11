#pragma once
// game/update/moby1158.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00764f10; /* 0x764f10 */
extern undefined4 DAT_00ef2800; /* no defined data */
extern undefined4 DAT_00ef2940; /* 0xef2940 */
extern undefined4 DAT_00ef2944; /* 0xef2944 */
extern undefined4 DAT_00ef2948; /* no defined data */
extern undefined4 DAT_00ef294c; /* no defined data */
extern undefined4 DAT_00ef294d; /* no defined data */
extern undefined4 DAT_00ef294e; /* no defined data */
extern undefined4 DAT_00ef294f; /* no defined data */
extern undefined4 DAT_00ef2950; /* no defined data */
extern undefined4 DAT_00ef2951; /* no defined data */
extern undefined4 DAT_00ef2952; /* no defined data */
extern undefined4 DAT_00ef2953; /* no defined data */
extern undefined4 DAT_00ef2954; /* no defined data */
extern undefined4 DAT_00ef2958; /* no defined data */
extern undefined4 DAT_00ef295c; /* no defined data */
extern undefined4 DAT_00ef295d; /* no defined data */
extern undefined2 DAT_00ef295e; /* 0xef295e */
extern pointer32 PTR_M1159_001e40d8_00709050; /* 0x709050 */
extern undefined4 u_WaterTileCnt; /* 0xeef940 */

// ---- functions
ulonglong FUN_001e348c(int param_1);
void M1158_001e34a0(void);
void M1158_001e34b8(int param_1);
void M1158_001e3538(int param_1);
void UpdateMoby_1158(MobyInstance *moby);
