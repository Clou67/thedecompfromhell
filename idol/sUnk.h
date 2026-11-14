#pragma once
// idol/sUnk.h
#include "types.h"

// ---- globals
extern pointer PTR_PTR_0071b08c; /* 0x71b08c */
extern pointer PTR_PTR_0071b090; /* 0x71b090 */
extern pointer PTR_PTR_0071b094; /* 0x71b094 */
extern pointer PTR_PTR_0071b098; /* 0x71b098 */
extern pointer PTR_PTR_0071b09c; /* 0x71b09c */
extern pointer PTR_PTR_0071b0a0; /* 0x71b0a0 */
extern pointer PTR_PTR_0071b0a4; /* 0x71b0a4 */
extern pointer PTR_PTR_0071b0a8; /* 0x71b0a8 */
extern pointer PTR_PTR_0071b0b4; /* 0x71b0b4 */
extern pointer PTR_PTR_0071c774; /* 0x71c774 */
extern pointer PTR_s_bad_allocation_0071c768; /* 0x71c768 */

// ---- functions
namespace idol { undefined4 brbVoice_ConnectPort(int param_1,int param_2,int param_3); } 
undefined8 FUN_00648d8c(int param_1,int param_2,int param_3,int param_4,undefined8 param_5,undefined4 param_6, undefined4 param_7,longlong param_8);
undefined8 FUN_00648e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,longlong param_4, longlong param_5,longlong param_6);
undefined8 brbThread_SetParams(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5);
undefined8 brbThread_ClearRunning(uint *param_1);
undefined8 brbThread_Reset(undefined4 *param_1);
int PluginRegistry_FindIndex(int *param_1,int *param_2);
void PluginRegistry_SetSlot(int *param_1,int param_2,ulonglong param_3);
void PluginRegistry_ClearSlot(int *param_1,ulonglong param_2);
undefined4 UnregisterPluginClassByIndex(int param_1,uint param_2);
int FindFreeSlot(int param_1);
undefined4 RegisterPluginClass(int *param_1,void *param_2,int *param_3);
void PluginRegistry_Clear(undefined8 param_1);
undefined8 PluginRegistry_Init(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4);
undefined4 UnregisterPluginClass(undefined8 param_1,int param_2);
undefined4 CheckPluginClass(undefined8 param_1,int param_2);
void BrbTrace_Reset(int param_1,int param_2);
void BrbTrace_ResetAll(void);
undefined8 BrbTrace_Begin(undefined8 param_1,undefined8 param_2,uint param_3);
void BrbTrace_Record(int param_1,undefined4 param_2,int param_3);
void BrbTrace_Flush(int param_1,int *param_2);
undefined8 BrbAudit_CheckBufferSize(undefined8 param_1,undefined8 param_2,int param_3);
uint BrbTrace_Push(undefined4 param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4, undefined1 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8);
uint BrbAudioOutConfigure(undefined8 param_1,int param_2,uint param_3,uint param_4);
undefined8 brbThread_Stop(uint *param_1);
undefined4 brbDriver_Shutdown(int param_1);
void brbDriver_ThreadProc(uint *param_1);
undefined4 brbDriver_Initialize(int param_1,undefined8 param_2,uint *param_3);
int brbThread_Create(int param_1,undefined8 param_2,undefined8 param_3,int param_4);
void brbClient_ThreadProc(uint *param_1);
undefined8 brbRegistry_List(int param_1,int *param_2,int param_3,int *param_4);
ulonglong brbGuid_Pack(uint *param_1);
int * brbTable_Find(int *param_1,int param_2);
int * brbTable_FindByGuid(int *param_1,longlong param_2);
uint brbRegistry_HasGuid(int param_1);
void brbTable_FindFree(undefined8 param_1);
void brbTable_Release(undefined4 param_1,int param_2);
uint brbTable_HasModule(undefined4 param_1,undefined8 param_2);
undefined4 brbTable_GetModule(void);
undefined4 brbTable_GetName(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined4 param_4);
int FindFreeFileSlot(int param_1);
undefined4 RegisterPluginPack(undefined4 param_1,undefined8 param_2,int param_3,undefined8 param_4);
undefined4 brbPluginRegistry_GetClassInfo(int param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5);
int brbPluginRegistry_RegisterClass(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 UnregisterPluginPack(int param_1,char *param_2);
undefined4 UnregisterPluginPackBySlot(int param_1,uint param_2);
int RegisterPluginPackFromMem(int param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4);
int RegisterPluginPackFromFile(int param_1,int param_2,undefined4 param_3,int *param_4);
undefined8 brbPluginRegistry_Initialize(int param_1,undefined4 param_2);
void brbPluginRegistry_Shutdown(int param_1);
void brbRack_Reset(undefined4 *param_1);
uint brbPlugin_StateSize(int param_1);
int brbPlugin_BufferSize(int param_1,uint param_2,int param_3,int param_4);
longlong brbBufferBytes(int param_1,int param_2);
int brbSampleBytes(int param_1,int param_2);
undefined8 brbRack_SetUserData(int param_1,undefined4 param_2);
undefined8 brbRack_ClearUserData(int param_1);
undefined8 brbRack_SetNextTiming(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void brbRack_BeginJob(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4, undefined8 param_5);
void brbRack_EndJob(int param_1);
void brbRack_Kick(int param_1,undefined4 param_2);
undefined8 brbRack_Shutdown(int *param_1);
undefined4 brbRack_Initialize(uint *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,uint param_5, uint param_6,uint param_7,uint param_8);
void brbRack_WaitIdle(int param_1,undefined4 param_2);
void brbRack_Reset_2(undefined4 *param_1);
void brbRack_BuildJobs(int param_1,int param_2,int *param_3,ulonglong param_4);
undefined4 PrepareRackUnit(int param_1,int param_2,longlong param_3,int param_4);
undefined4 CheckPluginClassProcFootprint(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4);
void brbAtomicDec(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4);
longlong brbFile_Close(undefined4 *param_1);
longlong brbFile_ReadAsync(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4, undefined8 param_5);
longlong brbFile_Open(int param_1,undefined4 param_2,uint param_3);
longlong brbFile_AioFinish(void);
longlong brbFile_AioInit(void);
longlong brbFile_ReadAsync_2(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4, undefined8 param_5);
undefined8 BitPool_Init(uint *param_1,uint param_2);
ulonglong BitPool_CountFree(int param_1);
uint BitPool_Alloc(uint *param_1);
void BitPool_Free(uint *param_1,uint param_2);
uint BitPool_AllocAtomic(uint *param_1);
longlong BitPool_SizeFor(longlong param_1);
void BitPool_FreeAtomic(longlong param_1,ulonglong param_2);
void brbFormat_Set(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4);
undefined4 brbFormat_Compatible(int param_1,uint *param_2,int param_3);
undefined8 brbClock_Init(int *param_1,longlong param_2,longlong param_3);
void brbClock_Reset(undefined4 *param_1);
undefined * bad_alloc_what(void);
void bad_alloc_Throw(void);
void bad_alloc_DeletingDtor(undefined4 *param_1);
void bad_alloc_Dtor(undefined4 *param_1);
void CallGlobalDtors(void);
