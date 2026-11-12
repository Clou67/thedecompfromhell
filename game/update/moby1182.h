#pragma once
// game/update/moby1182.h
#include "types.h"
#include "game/mobyfunc.h"

// ---- globals
extern undefined4 DAT_001f08c8; /* 0x1f08c8 */
extern undefined4 DAT_00765f68; /* 0x765f68 */
extern undefined4 DAT_00765f8c; /* 0x765f8c */
extern undefined4 DAT_00765f90; /* 0x765f90 */
extern undefined4 DAT_00765f94; /* 0x765f94 */
extern undefined4 DAT_00765fa8; /* 0x765fa8 */
extern undefined4 DAT_00765fac; /* 0x765fac */
extern undefined4 DAT_00765fb0; /* 0x765fb0 */
extern undefined4 DAT_00765fbc; /* 0x765fbc */
extern undefined4 DAT_00765fc0; /* 0x765fc0 */
extern undefined4 DAT_00765fc4; /* 0x765fc4 */
extern undefined4 DAT_00765fc8; /* 0x765fc8 */
extern undefined4 DAT_00765fcc; /* 0x765fcc */
extern undefined4 DAT_00765fd0; /* 0x765fd0 */
extern undefined4 DAT_00765fd4; /* 0x765fd4 */
extern undefined4 DAT_00765fd8; /* 0x765fd8 */
extern undefined4 DAT_00765fdc; /* 0x765fdc */
extern undefined4 DAT_00765fe0; /* 0x765fe0 */
extern undefined4 DAT_00765fe4; /* 0x765fe4 */
extern undefined4 DAT_00765fe8; /* 0x765fe8 */

// ---- functions
void M1189_001f0658(void);
MobyInstance * M1189_001f0670(int param_1,float *param_2,MOBY_OCLASSES param_3);
int M1189_001f0830(float *param_1,short param_2,float *param_3);
void UpdateMoby_1182(MobyInstance *moby);
