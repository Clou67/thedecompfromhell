#pragma once
// sdk/libscream/common/snd_fios.h
#include "types.h"

// ---- functions
uint check_magic2(uint *param_1);
undefined8 _ZN4cell4fios11mediafilter14readIdentifierEv(int param_1);
void _ZN4cell4fios11mediafilter13registerMediaEv(int param_1);
void _ZN4cell4fios5media12speculateIOPEPNS0_13mediaioparamsE(int *param_1,int param_2);
undefined4 _ZNK4cell4fios11mediafilter15getVariableNameEj(int param_1,undefined4 param_2);
uint snd_IsFiosHandle(int param_1);
uint check_magic(int param_1);
uint check_magic(uint *param_1);
uint snd_IsFiosHandle_2(int param_1);
uint snd_IsFiosHandle_3(int param_1);
uint snd_IsFiosHeader(uint *param_1);
uint snd_IsFiosHeader_2(uint *param_1);
uint snd_IsFiosHeader_3(uint *param_1);
uint snd_IsFiosHeader_4(uint *param_1);
void _ZN4cell4fios5cache9flushFileEPKc(int *param_1,undefined8 param_2);
void STUB_006048c4(void);
void STUB_006048c8(void);
void STUB_006048cc(void);
void STUB_006048d4(void);
void STUB_006048dc(void);
uint snd_IsInitialized(void);
undefined4 FUN_00604918(void);
undefined8 FUN_00604930(void);
undefined4 FUN_0060493c(void);
undefined4 FUN_00604954(void);
undefined4 FUN_0060496c(void);
undefined2 FUN_00604984(void);
void snd_SetTickRate(double param_1);
double FUN_006049e0(undefined4 *param_1);
undefined4 FUN_00604a0c(void);
void FUN_00604a28(uint param_1);
void FUN_00604a50(uint param_1);
bool snd_SetPaused(void);
bool snd_ClearPaused(void);
undefined4 snd_IsPaused(void);
undefined4 snd_GetSoundRegsLocked(undefined4 param_1,undefined1 *param_2);
void snd_StopSoundTree(undefined4 param_1);
int snd_GetSoundGrainIndex(undefined4 param_1);
undefined1 FUN_00604cac(undefined4 param_1);
ushort snd_IsStreamLooped(ulonglong param_1);
undefined4 snd_SoundIsAlive(undefined4 param_1);
undefined4 snd_SetSoundRegsNoLock(undefined4 param_1,undefined1 *param_2);
undefined4 FUN_00604e98(undefined4 param_1,uint param_2,undefined2 param_3,undefined1 *param_4);
undefined8 snd_StopAllSoundsDeferred(void);
void FUN_00605144(undefined8 param_1);
void FUN_00605178(undefined8 param_1);
int snd_ConvertToDb(double param_1,undefined8 param_2);
