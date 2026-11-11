#pragma once
// game/update/moby491.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003a0cc0; /* 0x3a0cc0 */
extern undefined4 DAT_008432f8; /* 0x8432f8 */
extern undefined4 DAT_0084331c; /* 0x84331c */
extern undefined4 DAT_00843320; /* 0x843320 */
extern undefined4 DAT_00843324; /* 0x843324 */
extern undefined4 DAT_00843330; /* 0x843330 */
extern undefined4 DAT_00843334; /* 0x843334 */
extern undefined4 DAT_00843338; /* 0x843338 */
extern undefined4 DAT_0084333c; /* 0x84333c */
extern undefined4 DAT_00843340; /* 0x843340 */
extern undefined4 DAT_00843344; /* 0x843344 */
extern undefined4 DAT_00843348; /* 0x843348 */
extern undefined4 DAT_0084334c; /* 0x84334c */
extern undefined4 DAT_00843350; /* 0x843350 */
extern undefined4 DAT_00843354; /* 0x843354 */
extern undefined4 DAT_00843358; /* 0x843358 */

// ---- functions
void FUN_003a01e0(float param_1,float *param_2,f32 *param_3);
void M491_003a063c(void);
double M491_003a0678(int param_1,float *param_2);
void M491_003a0ce8(MobyInstance *param_1);
void UpdateMoby_491(MobyInstance *moby);
