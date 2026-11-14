#pragma once
// sdk/libbink/rrthreads.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00989680; /* no defined data */
extern pointer PTR_DAT_0071a5b0; /* 0x71a5b0 */
extern pointer PTR_DAT_0071a5b8; /* 0x71a5b8 */
extern pointer PTR_DAT_0071a5c4; /* 0x71a5c4 */
extern pointer PTR_DAT_0071a5c8; /* 0x71a5c8 */

// ---- functions
void rrAtomicMemoryBarrier(void);
undefined4 rrAtomicLoadAcquire32(undefined4 *param_1);
undefined8 rrAtomicLoadAcquire64(undefined8 *param_1);
void rrAtomicStoreRelease32(undefined4 *param_1,undefined4 param_2);
void rrAtomicStoreRelease64(undefined8 *param_1,undefined8 param_2);
undefined4 rrAtomicCmpXchg32(ulonglong param_1,int *param_2,undefined8 param_3);
undefined4 rrAtomicCmpXchg64(ulonglong param_1,longlong *param_2,undefined8 param_3);
undefined4 rrAtomicExchange32(undefined8 param_1,undefined8 param_2);
undefined8 rrAtomicExchange64(undefined8 param_1,undefined8 param_2);
longlong rrAtomicAddExchange64(undefined8 param_1,longlong param_2);
uint rrAtomicAddExchange32(undefined8 param_1,longlong param_2);
void rrAtomicCmpXchg64_2(undefined8 param_1,undefined8 param_2,longlong param_3);
int rrAtomicAddExchange32_2(undefined8 param_1,undefined8 param_2,int param_3);
undefined4 FUN_005fbf64(void);
void STUB_005fbf70(void);
void rrThreadSleep(int param_1);
void rrThreadYield(void);
void STUB_005fbfc8(void);
bool FUN_005fbfd4(int param_1,undefined4 param_2,int param_3);
int rrSemaphoreDestroy(int param_1);
uint rrSemaphoreDecrementOrWait(int param_1,int param_2);
undefined4 * rrSemaphoreIncrement(undefined4 *param_1);
void rrMutexLock(int param_1);
uint rrMutexLockTimeout(int param_1,int param_2);
void rrMutexUnlock(int param_1);
undefined4 rrSemaphoreCreate(int param_1,int param_2,uint *param_3);
void rrMutexDestroy(int param_1);
bool rrMutexCreate(int param_1);
undefined8 rrThreadGetCurrentID(void);
void rrThreadSetPriority(void);
undefined4 rrThreadGetPriority(undefined8 param_1);
undefined4 rrThreadCreate(int param_1,undefined4 param_2,int param_3,undefined4 param_4,ulonglong param_5, undefined4 param_6);
undefined4 * rrSignalSet(undefined4 *param_1);
int rrSignalDestroy(int param_1);
undefined8 rrThreadGetUnk50(int param_1);
bool rrSignalCreate(int param_1);
void rrSignalDrain(int param_1);
uint rrSignalWait(int param_1,int param_2);
undefined4 rrThreadGetUnk50_2(int param_1,undefined8 *param_2);
void rrThreadSetPriorityLevel(int param_1,int param_2);
void rrThreadResume(int param_1);
undefined4 rrThreadGetCurrent(void);
undefined4 rrThreadGetName(int param_1);
undefined8 rrThreadGetHandle(int param_1);
undefined4 rrThreadGetProcessor(int param_1,ulonglong param_2,undefined4 *param_3);
undefined4 rrThreadSetProcessor(int param_1,int param_2,undefined4 param_3);
undefined4 rrThreadGetUnk64(int param_1);
ulonglong rrThreadCleanup(int param_1);
void rrThreadWaitDone(int param_1);
void rrThreadEntry(int param_1);
void rrArena_Init(int *param_1,int param_2);
void rrArena_Push(int param_1,undefined4 param_2,longlong param_3);
undefined4 rrArena_Size(int param_1);
int rrArena_Alloc(int param_1,int param_2);
void Telemetry_CheckVersion(uint param_1);
void Telemetry_CheckVersion_2(undefined4 *param_1);
