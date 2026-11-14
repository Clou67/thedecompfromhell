#pragma once
// sdk/libwwsjob/jobapi.h
#include "types.h"

// ---- globals
extern undefined * PTR_s_Application_thinks_baseAddr_is_0_0071a390; /* 0x71a390 */
extern pointer PTR_s_no_name_0071a3a0; /* 0x71a3a0 */

// ---- functions
namespace idol_draw { void CmdQueue_ResetCounters(int *param_1,int param_2); } 
void JobList_WaitForProgress(int *param_1,ulonglong param_2,uint param_3);
ushort JobList_GetProgress(int *param_1,ulonglong param_2);
namespace idol_draw { bool CmdQueue_HasCapacity(int *param_1,ulonglong param_2,uint param_3); } 
uint JobList_CountJobs(int *param_1,int param_2);
uint JobList_CountJobs_2(int *param_1,int param_2);
uint JobList_RaiseReadyCount(int *param_1,int param_2,uint param_3);
ulonglong JobArrayContainer_AddJob(int *param_1,ulonglong param_2,undefined4 param_3);
void JobWorkload_Shutdown(int param_1);
void JobWorkload_SetPriorities(int param_1,undefined8 param_2);
uint JobWorkload_IsIdle(int param_1);
undefined1 JobWorkload_InfoE0(int param_1);
undefined1 JobWorkload_InfoDD(int param_1);
namespace idol_draw { void CmdQueue_Submit(int param_1,undefined8 param_2); } 
void JobWorkload_SetName(int param_1,undefined8 param_2);
void Job_CheckBaseAddr(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5,undefined4 *param_6);
void JobList_ResetArray(int *param_1,ulonglong param_2,undefined4 *param_3);
void JobList_ResetArray_2(int *param_1,ulonglong param_2,undefined4 *param_3);
void JobList_CountToEnd(int *param_1,int param_2);
void JobList_Init(int *param_1,undefined4 *param_2,int param_3);
namespace idol_draw { void Spurs_WaitWorkloadIdle(int param_1); } 
uint JobList_IsArrayDone(int *param_1,uint param_2);
void JobList_WaitArrayDone(int *param_1,uint param_2);
void JobList_SubmitArray(int *param_1,ulonglong param_2,undefined4 param_3);
void JobList_SubmitArray_2(int *param_1,ulonglong param_2,undefined4 param_3);
void JobArray_Reset(undefined4 *param_1);
namespace idol_draw { ulonglong CmdQueue_ZeroCacheLines(uint *param_1); } 
namespace idol_draw { int RingBuffer_PushEntry(int *param_1,undefined8 param_2); } 
int JobArray_Push(int *param_1,undefined8 param_2);
void JobArray_SetRange(int param_1,undefined4 param_2,undefined4 param_3);
void JobArray_ClearRange(int param_1);
void JobArray_Reset_2(undefined4 *param_1);
ulonglong MemRegion_ZeroCacheLines(uint *param_1);
int JobArray_TryInsert(int *param_1,undefined8 param_2,int param_3);
int JobArray_TryInsert_2(int *param_1,undefined8 param_2,int param_3);
int JobArray_FindEnd(int *param_1,int param_2);
void JobArray_SetRange_2(int param_1,undefined4 param_2,undefined4 param_3);
void JobArray_ClearRange_2(int param_1);
ulonglong JobArray_AppendAtomic(uint *param_1,undefined8 param_2,ulonglong param_3);
int JobArray_AddJob(int *param_1,ulonglong param_2,ulonglong param_3);
int JobArray_AddCmd5(int *param_1,longlong param_2);
int JobArray_AddCmd2(int *param_1,ulonglong param_2);
int JobArray_AddJobFlagged(int *param_1,ulonglong param_2,ulonglong param_3);
int JobArray_AddRaw10(int *param_1,ulonglong param_2);
int JobArray_AddCmd4(int *param_1,ulonglong param_2);
int JobArray_AddEnd(int *param_1);
int JobArray_InsertJob(int *param_1,ulonglong param_2,ulonglong param_3,int param_4);
int JobArray_InsertCmd5(int *param_1,longlong param_2,int param_3);
int JobArray_InsertCmd2(int *param_1,ulonglong param_2,int param_3);
int JobArray_InsertCmd4(int *param_1,ulonglong param_2,int param_3);
int JobArray_InsertEnd(int *param_1,int param_2);
void JobArray_Init(undefined4 *param_1,longlong param_2,longlong param_3);
void JobArray_Init_2(undefined4 *param_1,longlong param_2,longlong param_3);
ulonglong JobArray_AppendAtomic_2(uint *param_1,ulonglong param_2);
ulonglong JobArray_AppendAtomic_3(uint *param_1,undefined8 param_2,ulonglong param_3);
ulonglong JobArray_AppendAtomic_4(uint *param_1,ulonglong param_2,ulonglong param_3);
ulonglong JobArray_AppendAtomic_5(uint *param_1,longlong param_2,ulonglong param_3);
ulonglong JobArray_AppendAtomic_6(uint *param_1,ulonglong param_2,ulonglong param_3);
ulonglong JobArray_AppendAtomic_7(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4);
ulonglong JobArray_AppendAtomic_8(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4);
ulonglong JobArray_AppendAtomic_9(uint *param_1,ulonglong param_2,ulonglong param_3);
undefined2 * JobHandle_Make(undefined2 *param_1,int param_2);
void JobList_CountActive(undefined8 param_1);
void JobList_CountActive_2(undefined8 param_1);
void JobList_WaitActive(undefined8 param_1);
undefined1 JobList_IsActiveDone(undefined8 param_1);
undefined2 * JobList_AddEnd(undefined2 *param_1,int param_2);
undefined2 * JobList_AddJobFlagged(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
namespace idol_draw { void CmdQueue_Reset(int param_1); } 
void JobList_ResetPacket(void);
void JobList_Disassemble(undefined4 *param_1,uint param_2);
undefined2 * JobList_EndHandle(undefined2 *param_1,int *param_2);
undefined2 * JobList_InsertCmd2(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
undefined2 * JobList_AppendJob(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4);
undefined2 * JobList_AddCmd5(undefined2 *param_1,int param_2,undefined8 param_3);
undefined2 * JobList_AddCmd2(undefined2 *param_1,int param_2,undefined8 param_3);
namespace idol_draw { undefined2 * CmdQueue_PushEntry_Blocking(undefined2 *param_1,int param_2,undefined8 param_3); } 
namespace idol_draw { undefined2 * CmdQueue_PushEntry(undefined2 *param_1,int param_2,undefined8 param_3); } 
undefined2 * JobList_AppendAtomic(undefined2 *param_1,int *param_2);
undefined2 * JobList_AppendAtomic5(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * JobList_AppendAtomic6(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * JobList_AppendAtomic7Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * JobList_AppendAtomic9(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * JobList_AppendAtomic3(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * JobList_AppendAtomic7(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4);
undefined2 * JobList_TryInsert(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
undefined2 * JobList_InsertJob(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
undefined2 * JobList_InsertEnd(undefined2 *param_1,int param_2,undefined8 param_3);
undefined2 * JobList_InsertCmd5(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
undefined1 JobList_HasCapacity(int param_1);
undefined2 * JobList_AppendJobKick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * JobList_AddCmd5Kick(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AddCmd2Kick(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AddRaw10Kick(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_PushEntryKick(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AddJobFlaggedKick(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * JobList_AddJobKick(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * JobList_AppendAtomic5Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AppendAtomic6Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AppendAtomic9Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AppendAtomic3Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
void JobList_ResetActive(int param_1);
namespace idol_draw { void CmdQueue_WaitForSpaceAndSync(int param_1); } 
void JobList_Reset(int param_1);
void JobList_Reset_2(int param_1);
int JobList_AllocCommands(int param_1,int param_2);
void JobList_Create(int *param_1,int param_2,int param_3,undefined8 param_4);
void JobList_Create_2(int *param_1,int param_2,int param_3,undefined8 param_4);
void SpuAudit_DefaultPrintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
