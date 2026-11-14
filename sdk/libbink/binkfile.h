#pragma once
// sdk/libbink/binkfile.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071a51c; /* 0x71a51c */
extern pointer PTR_DAT_0071a520; /* 0x71a520 */
extern pointer PTR_DAT_0071a540; /* 0x71a540 */
extern pointer PTR_DAT_0071a544; /* 0x71a544 */
extern pointer PTR_DAT_0071a558; /* 0x71a558 */
extern pointer PTR_PTR_0071a500; /* 0x71a500 */
extern pointer PTR_PTR_0071a504; /* 0x71a504 */
extern pointer PTR_PTR_0071a508; /* 0x71a508 */
extern pointer PTR_PTR_0071a50c; /* 0x71a50c */
extern pointer PTR_PTR_0071a510; /* 0x71a510 */
extern pointer PTR_PTR_0071a514; /* 0x71a514 */
extern pointer PTR_PTR_0071a518; /* 0x71a518 */
extern pointer PTR_s_Loop_Seek_Period_0071a524; /* 0x71a524 */

// ---- functions
undefined4 FUN_005f3984(undefined8 param_1,undefined8 param_2);
uint BinkFileIoBufferSize(undefined8 param_1,int param_2);
void BinkFileSetBuffer(int param_1,int param_2,int param_3,undefined4 param_4);
undefined4 BinkFileOpen(undefined4 *param_1,undefined4 param_2,ulonglong param_3);
void BinkFileClose(int param_1);
int BinkFileBackgroundRead(int param_1);
undefined4 FUN_005f43d0(int param_1,uint param_2);
int BinkFileReadHeader(int param_1,int param_2,undefined4 param_3,int param_4);
int BinkFileReadFrame(int param_1,uint param_2,uint param_3,void *param_4,uint param_5);
