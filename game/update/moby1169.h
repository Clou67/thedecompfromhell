#pragma once
// game/update/moby1169.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00765b60; /* 0x765b60 */
extern undefined4 DAT_00765b64; /* 0x765b64 */
extern undefined4 DAT_00765b80; /* 0x765b80 */
extern undefined4 DAT_00765b84; /* 0x765b84 */
extern undefined4 DAT_00765b88; /* 0x765b88 */
extern undefined4 DAT_00765b8c; /* 0x765b8c */
extern undefined4 DAT_00765b90; /* 0x765b90 */
extern undefined4 DAT_00765b94; /* 0x765b94 */
extern undefined4 DAT_00765b98; /* 0x765b98 */
extern undefined4 DAT_00765b9c; /* 0x765b9c */
extern undefined4 DAT_00765bec; /* 0x765bec */
extern undefined4 DAT_00765c10; /* 0x765c10 */
extern undefined4 DAT_00765c18; /* 0x765c18 */
extern undefined4 DAT_00765c1c; /* 0x765c1c */
extern undefined4 DAT_00765c20; /* 0x765c20 */
extern undefined4 DAT_00765c24; /* 0x765c24 */
extern undefined4 DAT_00765c28; /* 0x765c28 */
extern undefined4 DAT_00765c2c; /* 0x765c2c */
extern undefined4 DAT_00765c30; /* 0x765c30 */
extern undefined4 DAT_00765c3c; /* 0x765c3c */
extern undefined4 DAT_00765c40; /* 0x765c40 */
extern undefined4 DAT_00f08e10; /* 0xf08e10 */
extern undefined4 DAT_00f08e14; /* 0xf08e14 */

// ---- functions
void M1169_001ea390(int param_1);
void M1169_001ea89c(void);
void M1169_001ea8b8(longlong param_1);
void M1169_001ea988(MobyInstance *param_1,float *param_2);
void M1169_001eaca0(longlong param_1);
void M1169_001ead68(MobyInstance *param_1);
void UpdateMoby_1169(MobyInstance *moby);
