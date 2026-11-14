#pragma once
// sdk/libscream/common/loader.h
#include "types.h"

// ---- globals
extern pointer PTR_PTR_0071b010; /* 0x71b010 */
extern pointer PTR_PTR_0071b014; /* 0x71b014 */
extern pointer PTR_PTR_0071b018; /* 0x71b018 */

// ---- functions
void snd_ExtMemAlloc(void);
undefined8 snd_ExtMemFree(void);
int FUN_00617870(int param_1);
void FUN_00617938(int param_1,int param_2,int param_3);
void snd_FindBankStart(int param_1);
undefined4 FUN_00617cac(int param_1);
uint FUN_00617d50(int param_1);
undefined4 FUN_00617e14(int param_1);
void FUN_00617ea8(int param_1,int *param_2);
undefined8 FUN_00617f6c(int param_1);
int snd_CheckBankFile(int *param_1,undefined8 param_2,undefined8 param_3);
short FUN_00618098(int *param_1,int param_2,ulonglong param_3,int *param_4);
void snd_FindSoundIndexByName(undefined4 param_1,undefined8 param_2,undefined4 param_3);
undefined4 FUN_006183e4(int param_1,undefined1 *param_2);
int FUN_00618548(int param_1);
int FUN_00618640(char *param_1);
void FUN_0061870c(void);
void FUN_006187c8(int param_1,int *param_2);
void snd_UnloadBlock(int param_1);
void FUN_00618a28(void);
void FUN_00618aa8(int *param_1);
int snd_LoaderReadError(undefined4 param_1,int param_2);
undefined4 FUN_00618cb0(int param_1);
int snd_CheckBankFormat(void);
int snd_LoaderAlloc(void);
void FUN_00618fac(void);
undefined4 snd_LoaderOpenFile(undefined8 param_1,undefined4 param_2);
ushort FUN_006190b8(void);
ulonglong FUN_00619150(void);
void FUN_00619180(uint param_1);
void FUN_00619264(undefined4 param_1);
undefined4 FUN_0061927c(void);
void FUN_00619298(longlong param_1);
void FUN_006192cc(undefined4 param_1);
undefined4 FUN_006192e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_00619370(undefined8 param_1,undefined8 param_2);
undefined4 FUN_006193e0(void);
void FUN_00619424(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void snd_Printf(char asdf);
void snd_ReportError(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, ulonglong param_5);
char * snd_StrCat(char *param_1,uint param_2,undefined4 param_3);
int snd_StrCpy(int param_1,int param_2,undefined4 param_3);
int32_t snd_DefaultPrint(char *param_1);
ulonglong snd_CountStreams(byte *param_1);
ulonglong snd_GetStreamChild(uint *param_1,ulonglong param_2);
undefined4 snd_GetHandlerBlockCount(void);
undefined4 snd_HandlerBlock_CountUsed(int param_1);
undefined4 snd_FindStreamChild(int param_1);
int * snd_FindSoundTypeHandler(int param_1);
undefined4 snd_GetSoundTypeHandler(int param_1);
void snd_GetHandlerParams130(int param_1,undefined4 *param_2);
void snd_GetHandlerParams144(int param_1,undefined4 *param_2);
void snd_GetHandlerParams154(int param_1,undefined4 *param_2);
void snd_GetHandler3DParams(int param_1,float *param_2);
