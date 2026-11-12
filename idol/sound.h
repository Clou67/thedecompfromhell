#pragma once
// idol/sound.h
#include "types.h"

// ---- types
typedef void (*SndCompleteProc)(u32 retVal, u64 userData);   /* Scream completion callback (DL's SndCompleteProc) */

// ---- globals
extern undefined4 DAT_0159bb18; /* 0x159bb18 */
extern undefined4 DAT_0159bb1c; /* no defined data */
extern undefined8 DAT_015af420; /* 0x15af420 */

// ---- functions
void sound_SetMasterVolume(int which,int vol);
void FUN_00505fa8(undefined8 param_1,undefined8 param_2);
void STUB_00506040(...);
void STUB_00506044(...);
void FUN_00506048(void);
void STUB_00506074(...);
void FUN_00506090(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
void FUN_00506294(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6);
void FUN_005062f4(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8);
void snd_SetSoundParams_CB(u32 param_1,u32 param_2,int param_3,int param_4,int param_5,int param_6,SndCompleteProc param_7,u64 param_8);
void snd_PlayVAGStreamByNameEx_CB(const char *param_1,const char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,SndCompleteProc param_10,u64 param_11);
void FUN_005065d8(void);
void snd_SoundIsStillPlaying_CB(u32 param_1,SndCompleteProc param_2,u64 param_3);
void FUN_00506634(void);
void snd_StopVAGStream(u32 param_1);
void snd_StreamSafeCdBreak(void);
void snd_StreamSafeCdCallback(void (*param_1)(int));
int snd_StreamSafeCdGetError(void);
undefined8 FUN_005066b4(void);
undefined8 STUB_005066bc_RET_0(...);
void FUN_005066c4(int param_1);
undefined8 FUN_005066c8(void);
undefined8 FUN_005066d0(void);
undefined8 FUN_005066d8(void);
void FUN_005066e0(void);
undefined8 FUN_00506704(undefined8 param_1,undefined4 *param_2);
undefined8 FUN_005067a8(undefined8 param_1,undefined8 param_2,int param_3);
undefined8 FUN_00506854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4);
undefined8 FUN_00506928(undefined8 param_1);
longlong FUN_005069b0(longlong param_1);
undefined8 FUN_00506a38(char param_1);
undefined8 FUN_00506a70(undefined8 param_1,int *param_2);
undefined8 FUN_00506c10(undefined8 param_1,undefined8 param_2,longlong param_3);
undefined8 FUN_00506d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 FUN_00506ebc(undefined8 param_1);
undefined8 FUN_00506f68(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4);
undefined8 FUN_00507084(void);
undefined8 FUN_0050708c(undefined8 param_1,undefined8 param_2,longlong param_3);
void FUN_0050712c(void);
void * FUN_00507148(undefined4 *param_1);
void FUN_00507460(int param_1);
void * FUN_005075f0(undefined4 *param_1);
void FUN_0050795c(int param_1);
void FUN_00507b6c(undefined4 *param_1);
void FUN_00507df8(undefined4 *param_1);
