#pragma once
// game/update/moby71.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0042c08c; /* 0x42c08c */
extern undefined4 DAT_0096a6d0; /* 0x96a6d0 */
extern undefined4 DAT_0096a6d4; /* 0x96a6d4 */
extern undefined4 DAT_0096a6d8; /* 0x96a6d8 */
extern undefined4 DAT_0096a6dc; /* 0x96a6dc */
extern undefined4 DAT_0096a6e0; /* 0x96a6e0 */
extern undefined4 DAT_0096a6e4; /* 0x96a6e4 */
extern undefined4 DAT_0096a6e8; /* 0x96a6e8 */
extern undefined4 DAT_0096a6ec; /* 0x96a6ec */
extern undefined4 DAT_0096a6f0; /* 0x96a6f0 */
extern undefined4 DAT_0096a6f4; /* 0x96a6f4 */
extern undefined4 DAT_0096a6f8; /* 0x96a6f8 */
extern undefined4 DAT_0096a6fc; /* 0x96a6fc */
extern undefined4 DAT_0096a700; /* 0x96a700 */
extern undefined4 DAT_0096a704; /* 0x96a704 */
extern undefined4 DAT_0096a708; /* 0x96a708 */
extern undefined4 DAT_0096a70c; /* 0x96a70c */
extern undefined4 DAT_0096befc; /* 0x96befc */
extern pointer32 PTR_M711_0042ab78_0070e310; /* 0x70e310 */

// ---- functions
void M71_0042b640(int param_1);
void M71_ClosestMobyDistance(int param_1);
void M71_0042be08(float *param_1);
ulonglong UpdateMoby_71(MobyInstance *moby);
