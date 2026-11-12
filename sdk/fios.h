#pragma once
// sdk/fios.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00903000; /* 0x903000 */
extern undefined1 DAT_0159c360; /* 0x159c360 */
extern pointer32 PTR_FUN_007121c0; /* 0x7121c0 */
extern undefined4 _DAT_005086e0; /* direct read */
extern undefined4 _DAT_005086f0; /* direct read */
extern undefined4 _DAT_00508700; /* direct read */
extern undefined4 _DAT_00508710; /* direct read */

// ---- functions
undefined8 read_file_sync(longlong param_1,undefined8 param_2);
void FUN_0050813c(undefined4 *param_1);
void load_engine_vram_pair(undefined4 *param_1,undefined8 param_2,undefined8 param_3);
void FUN_005083fc(undefined4 *param_1);
void FUN_005084b8(void *param_1);
void FUN_005084bc(void);
void FUN_005084c0(undefined4 *param_1);
void FUN_0050851c(undefined4 *param_1);
void FUN_00508578(void *param_1,void *param_2,void *param_3);
void LoadAssetAsync(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4);
void FUN_005086b0(void);
void FUN_00508738(int param_1,undefined4 *param_2);
