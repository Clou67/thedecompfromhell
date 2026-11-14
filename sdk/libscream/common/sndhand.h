#pragma once
// sdk/libscream/common/sndhand.h
#include "types.h"

// ---- globals
extern pointer PTR_PTR_0071b01c; /* 0x71b01c */
extern pointer PTR_PTR_0071b020; /* 0x71b020 */

// ---- functions
void snd_HandlerList_Release(int *param_1,int param_2);
uint * snd_HandlerList_FindByFlags(int param_1,uint param_2);
void snd_HandlerList_ClearChain(undefined4 *param_1);
undefined4 snd_HandlerList_DecRef(int *param_1,int *param_2);
void snd_HandlerPool_Init(uint *param_1,int param_2,uint param_3,int param_4);
void snd_InitHandlers(void);
void snd_UnregisterSoundType(int param_1,undefined8 param_2);
void snd_RegisterSoundType(int param_1,undefined8 param_2);
void snd_HandlerList_Remove(int *param_1,uint *param_2);
void snd_HandlerList_RemoveByFlags(int *param_1,int param_2);
uint * snd_HandlerPool_FindFree(uint *param_1,uint param_2,int param_3);
int snd_CountActiveHandlers(void);
uint snd_HandlerPool_Get(int param_1,uint param_2);
int snd_CountChildren(int param_1,int param_2);
ulonglong snd_GetHandlerPtr(ulonglong param_1);
void snd_MakeChild(int param_1,int param_2);
void snd_AddHandlerToList(uint *param_1);
void FUN_0061ac6c(int *param_1);
void FUN_0061ad24(int *param_1);
void FUN_0061addc(int *param_1);
void FUN_0061ae90(int *param_1);
void FUN_0061af44(byte *param_1,int param_2,uint param_3);
void FUN_0061b0c8(byte *param_1,int param_2,uint param_3);
void snd_UnlinkHandler(uint *param_1,int param_2);
void snd_StopHandler(int *param_1,int param_2,int param_3,int param_4);
void snd_StopHandlersByOwner(uint param_1);
void snd_UpdateActiveHandlers(void);
undefined4 FUN_0061be80(int *param_1,int param_2);
void snd_DeactivateHandlersByOwner(int param_1,undefined4 param_2,undefined4 param_3);
void snd_DeactivateWaitingHandlers(void);
uint * snd_ActivateHandler(double param_1,uint *param_2,int param_3,uint param_4,int param_5,uint param_6, undefined8 param_7,uint param_8,byte param_9);
void snd_UpdateHandlerTree(int param_1,int param_2);
void snd_SetTickHook(undefined4 param_1);
undefined8 snd_Tick(int param_1);
void snd_SetTickCallback(undefined4 param_1);
void snd_VoiceShutdown(void);
undefined4 snd_VoiceGetOwner(int param_1);
undefined1 snd_VoiceGetPriority(int param_1);
void snd_VoiceClearFlags(void);
undefined4 FUN_0061cef8(int param_1);
undefined4 FUN_0061cf18(int param_1);
int FUN_0061cf38(int param_1);
undefined4 FUN_0061cf68(int param_1);
void snd_VoiceLockInc(void);
void snd_VoiceLockDec(void);
void snd_VoiceLock2Inc(void);
void FUN_0061cff0(void);
undefined4 FUN_0061d018(int param_1);
undefined4 FUN_0061d08c(int param_1);
void FUN_0061d100(void);
void FUN_0061d348(int param_1);
double FUN_0061d388(void);
