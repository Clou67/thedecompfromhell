#pragma once
// idol/9Unk.h
#include "types.h"

// ---- globals
extern pointer PTR_PTR_0071b068; /* 0x71b068 */

// ---- functions
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
