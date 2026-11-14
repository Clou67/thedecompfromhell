#pragma once
// sdk/libscream/common/snd_stream_parsing.h
#include "types.h"

// ---- globals
extern pointer PTR_PTR_0071b060; /* 0x71b060 */
extern pointer PTR_PTR_0071b068; /* 0x71b068 */

// ---- functions
undefined4 FUN_0063c564(int param_1);
undefined4 FUN_0063c8a0(int param_1,int param_2);
int FUN_0063d08c(int param_1);
byte * FUN_0063e9c4(byte *param_1);
byte * FUN_0063ea18(byte *param_1);
void FUN_0063ea68(void);
void FUN_0063eaac(void);
void FUN_0063eaf0(int param_1,int param_2,uint param_3);
void FUN_0063ed38(int param_1);
void FUN_0063ed9c(int *param_1);
void FUN_0063ee28(int param_1,int param_2,uint param_3);
void FUN_0063f0a8(int param_1,byte *param_2,undefined1 param_3);
void FUN_0063f15c(int *param_1);
void FUN_0063f4c8(int *param_1);
undefined4 FUN_0063f5a8(undefined4 *param_1,int *param_2,undefined4 param_3);
void FUN_0063f720(int param_1);
void FUN_0063f868(int param_1,ulonglong param_2);
void FUN_0063f8c4(void);
undefined4 FUN_0063f8e0(int param_1);
undefined4 FUN_0063f8ec(uint param_1);
int FUN_0063f928(uint param_1,uint param_2);
undefined4 FUN_0063f99c(void);
undefined4 FUN_0063f9c4(undefined8 param_1);
longlong FUN_0063fa08(int param_1);
undefined4 FUN_0063fa4c(undefined4 *param_1);
namespace idol { undefined4 CreateSndParsingThread(undefined4 *param_1); } 
undefined4 ThreadMutexDestroy(void);
void ThreadExit(int param_1,undefined8 param_2);
undefined4 ThreadMutexLock(void);
undefined4 ThreadCondWait(undefined4 *param_1,undefined4 param_2);
undefined4 ThreadMutexUnlock(void);
undefined4 FsAioErrorString(int param_1);
undefined8 STUB_0063fe54_RET_1(void);
undefined8 STUB_0063fe5c_RET_0(void);
undefined8 STUB_0063fe64_RET_0(void);
void FsAioReadDone(int param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined4 FsAioCancelRead(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4);
