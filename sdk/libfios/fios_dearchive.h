#pragma once
// sdk/libfios/fios_dearchive.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071a9d4; /* 0x71a9d4 */
extern pointer PTR_DAT_0071a9d8; /* 0x71a9d8 */
extern pointer PTR_DAT_0071a9e0; /* 0x71a9e0 */
extern pointer PTR_DAT_0071aa0c; /* 0x71aa0c */
extern pointer PTR_DAT_0071aa1c; /* 0x71aa1c */
extern pointer PTR_DAT_0071aa88; /* 0x71aa88 */
extern pointer PTR_DAT_0071aa90; /* 0x71aa90 */
extern pointer PTR_PTR_0071a9f4; /* 0x71a9f4 */
extern pointer PTR_PTR_0071aa14; /* 0x71aa14 */
extern pointer PTR_s_PSARC_DECOMPRESS1_64K_0071a9cc; /* 0x71a9cc */
extern pointer PTR_s_PSARC_DECOMPRESS2_64K_0071a9d0; /* 0x71a9d0 */
extern pointer PTR_s_PSARC_DECOMPRESS3_64K_0071a9c4; /* 0x71a9c4 */
extern pointer PTR_s_PSARC_DECOMPRESS4_64K_0071a9c8; /* 0x71a9c8 */
extern pointer PTR_s_allocating_tracker_0071aa7c; /* 0x71aa7c */
extern pointer PTR_s_close_for_reopen_0071aa74; /* 0x71aa74 */
extern pointer PTR_s_closing_file_0071aa8c; /* 0x71aa8c */
extern pointer PTR_s_dearchiver_0071a9f0; /* 0x71a9f0 */
extern pointer PTR_s_dearchiver_bufferCond_0071aa08; /* 0x71aa08 */
extern pointer PTR_s_dearchiver_bufferLock_0071aa04; /* 0x71aa04 */
extern pointer PTR_s_dearchiver_lookupCacheLock_0071aa10; /* 0x71aa10 */
extern pointer PTR_s_dearchiver_manifests_lock_0071a9fc; /* 0x71a9fc */
extern pointer PTR_s_dearchiver_readgroup_0071aa00; /* 0x71aa00 */
extern pointer PTR_s_dearchiver_rwlock_0071a9f8; /* 0x71a9f8 */
extern pointer PTR_s_reading_header_0071aa70; /* 0x71aa70 */
extern pointer PTR_s_reopen_0071aa78; /* 0x71aa78 */
extern undefined1 stack0x00000004[16]; /* stack slot, not a real global */
extern undefined1 stack0x00000060[16]; /* stack slot, not a real global */

// ---- functions
undefined * FUN_005109bc(int param_1,int param_2);
void FUN_00510a80(int param_1);
int FUN_00510ac4(undefined4 *param_1,undefined4 *param_2);
uint FUN_00510b8c(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_00510cec(int param_1,ulonglong param_2,undefined4 param_3);
undefined4 FUN_00510d54(int param_1,undefined8 param_2,void *param_3);
size_t FUN_00510e6c(int param_1,char *param_2);
undefined4 FUN_00510f38(int param_1,ulonglong param_2,undefined8 param_3,int param_4);
uint FUN_005110d8(int param_1,ulonglong param_2,char *param_3);
int FUN_005111e4(int param_1,undefined4 param_2);
longlong FUN_005113b4(undefined8 param_1,int param_2,undefined4 param_3,int param_4);
void FUN_00511524(int param_1,uint param_2,int param_3,uint param_4,int param_5);
undefined4 FUN_0051179c(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6);
void FUN_005118e8(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4, uint param_5,undefined4 param_6);
void FUN_00511a80(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8);
void FUN_00511c34(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8);
void FUN_00511de8(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,uint param_6,undefined4 param_7);
void FUN_00511f8c(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,uint param_6,undefined4 param_7);
void FUN_00512130(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4, uint param_5,undefined4 param_6);
undefined4 FUN_005122c8(int param_1,char *param_2);
undefined4 FUN_005123b8(int param_1);
void FUN_005126c8(int param_1,uint param_2);
undefined4 FUN_00512750(int param_1,undefined4 param_2);
void FUN_00512820(int param_1,int param_2);
void FUN_005128f4(int param_1,int param_2,char param_3);
void FUN_00512a34(undefined8 param_1,undefined4 *param_2,undefined8 param_3);
void FUN_00512ab0(int param_1,int param_2);
int FUN_00512bac(int param_1,char param_2,char param_3,uint param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined1 *param_8);
undefined4 FUN_00512e10(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 ,undefined4 param_6);
void FUN_00512ec0(int param_1);
void FUN_00512fb4(int param_1);
void FUN_005130cc(int *param_1);
void FUN_00513220(int param_1);
void FUN_00513320(int *param_1);
void FUN_0051345c(int *param_1);
void FUN_00513598(int param_1,int param_2,int param_3,int param_4);
void FUN_0051399c(uint param_1,int param_2);
undefined4 FUN_00513cc4(undefined4 param_1,int param_2,int param_3);
void FUN_00513fa8(int param_1,undefined4 param_2,int param_3);
void FUN_00514124(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_0051514c(undefined4 param_1,int param_2,int param_3);
uint FUN_005155c4(int param_1,int param_2,uint *param_3,int *param_4);
uint FUN_00515a1c(int param_1,int param_2,undefined4 param_3,longlong *param_4,longlong *param_5);
void FUN_00515ed4(int param_1,int param_2);
void FUN_00516634(int param_1,int param_2);
void FUN_005168a8(int *param_1,int param_2);
void FUN_00516bcc(int param_1,int param_2);
void FUN_00516fb8(int param_1,int param_2);
void FUN_00517398(undefined4 param_1,int param_2,undefined4 param_3);
void FUN_00517560(int param_1,int param_2);
void FUN_005177d8(int *param_1,int param_2);
void FUN_00517d4c(int *param_1,int param_2);
void FUN_005189a8(int *param_1,int param_2);
undefined1 FUN_00518fcc(void);
undefined4 FUN_00518fd8(void);
