#pragma once
// sdk/libbink/binkaudio.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071a574; /* 0x71a574 */
extern undefined8 DAT_0071a580; /* 0x71a580 */
extern undefined8 DAT_0071a588; /* 0x71a588 */
extern undefined4 DAT_0071a590; /* 0x71a590 */
extern pointer PTR_DAT_0071a55c; /* 0x71a55c */
extern pointer PTR_DAT_0071a560; /* 0x71a560 */
extern pointer PTR_DAT_0071a568; /* 0x71a568 */
extern pointer PTR_DAT_0071a56c; /* 0x71a56c */
extern pointer PTR_DAT_0071a570; /* 0x71a570 */
extern pointer PTR_DAT_0071a578; /* 0x71a578 */
extern pointer PTR_DAT_0071a598; /* 0x71a598 */
extern pointer PTR_DAT_0071a5a8; /* 0x71a5a8 */
extern pointer PTR_PTR_0071a5a0; /* 0x71a5a0 */
extern pointer PTR_PTR_0071a5a4; /* 0x71a5a4 */

// ---- functions
ulonglong BinkGetMilliseconds(void);
void BinkSetMemory(undefined4 param_1,undefined4 param_2);
void radfree(int param_1);
int radmalloc(int param_1);
longlong BinkSndBufferSize(uint param_1,int param_2);
undefined4 FUN_005f5384(int param_1);
undefined4 FUN_005f538c(int param_1);
void FUN_005f5398(undefined4 *param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4, ulonglong param_5,uint *param_6,undefined4 param_7,ulonglong param_8);
int * BinkAudioDecodeOpen(int *param_1,ulonglong param_2,int param_3,uint param_4);
void FUN_005f5f70(int *param_1,uint *param_2,uint *param_3);
void FUN_005f6258(int *param_1,uint *param_2,int param_3,uint *param_4);
void FUN_005f6620(int *param_1,uint *param_2,int param_3,uint *param_4);
void FUN_005f6a08(uint *param_1,uint *param_2,uint *param_3);
void FUN_005f6d90(int *param_1,uint *param_2,uint *param_3);
void FUN_005f7140(uint *param_1,undefined4 *param_2,uint *param_3,undefined1 *param_4);
void BinkAudioBufferSizes(uint *param_1,uint param_2);
uint * FUN_005f87d0(uint param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6, uint *param_7);
ulonglong FUN_005fb780(int param_1,ulonglong param_2,ulonglong param_3,int *param_4,int param_5, int param_6,int *param_7,ulonglong param_8);
