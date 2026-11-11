#pragma once
// game/update/moby654.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00854904; /* 0x854904 */
extern undefined4 DAT_0085490c; /* 0x85490c */
extern undefined4 DAT_00854910; /* 0x854910 */
extern undefined4 DAT_00854914; /* 0x854914 */
extern undefined4 DAT_00854918; /* 0x854918 */
extern undefined4 DAT_0085491c; /* 0x85491c */
extern undefined4 DAT_00854924; /* 0x854924 */
extern undefined4 DAT_00854928; /* 0x854928 */
extern undefined4 DAT_0085492c; /* 0x85492c */
extern undefined4 DAT_00854994; /* 0x854994 */
extern undefined4 DAT_008549b8; /* 0x8549b8 */
extern undefined4 DAT_010cbbe4; /* 0x10cbbe4 */
extern undefined4 DAT_010cbbe8; /* 0x10cbbe8 */

// ---- functions
void M654_00402750(int param_1);
void M654_00402f0c(void);
void M654_00402f30(int param_1,float *param_2,undefined4 *param_3);
MobyInstance * UpdateMoby_654(MobyInstance *moby);
