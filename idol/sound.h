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
void snd_SetPlaybackMode(int param_1);
void snd_SetReverbEx(int param_1,int param_2,int param_3,int param_4,int param_5);
void SndInitParams(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
void SndSubmitParams(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6);
void snd_PlaySoundVolPanPMPB_CB(int param_1,short param_2,int param_3,int param_4,int param_5,int param_6,SndCompleteProc param_7,u64 param_8);
void snd_SetSoundParams_CB(u32 param_1,u32 param_2,int param_3,int param_4,int param_5,int param_6,SndCompleteProc param_7,u64 param_8);
void snd_PlayVAGStreamByNameEx_CB(const char *param_1,const char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,SndCompleteProc param_10,u64 param_11);
void STUB_005065d8(void);
void snd_SoundIsStillPlaying_CB(u32 param_1,SndCompleteProc param_2,u64 param_3);
void STUB_00506634(void);
void snd_StopVAGStream(u32 param_1);
void snd_StreamSafeCdBreak(void);
void snd_StreamSafeCdCallback(void (*param_1)(int));
int snd_StreamSafeCdGetError(void);
undefined8 STUB_005066b4_RET_0(void);
undefined8 STUB_005066bc_RET_0(...);
void STUB_005066c4(int param_1);
undefined8 STUB_005066c8_RET_0(void);
undefined8 STUB_005066d0_RET_0(void);
undefined8 STUB_005066d8_RET_0(void);
void SndShutdownThunk(void);
undefined8 SndFileOpen(undefined8 param_1,undefined4 *param_2);
undefined8 SndFileSeek(undefined8 param_1,undefined8 param_2,int param_3);
undefined8 SndFileRead(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4);
undefined8 SndFileClose(undefined8 param_1);
longlong SndTimebaseAfterMs(longlong param_1);
undefined8 FUN_00506a38(char param_1);
undefined8 SndFileOpenAsync(undefined8 param_1,int *param_2);
undefined8 SndFileWaitOpen(undefined8 param_1,undefined8 param_2,longlong param_3);
undefined8 SndFileReadAsync(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 SndFileClose_2(undefined8 param_1);
undefined8 SndFileWaitRead(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4);
undefined8 STUB_00507084_RET_0(void);
undefined8 SndFileCancelAll(undefined8 param_1,undefined8 param_2,longlong param_3);
void SndCopyFsConfig(void);
void * ResolveTieInstances(undefined4 *param_1);
void InitTieClassTable(int param_1);
void * ResolveShrubInstances(undefined4 *param_1);
void InitShrubClassTable(int param_1);
void RelocateWorldBlock3c(undefined4 *param_1);
void RelocateWorldBlock10(undefined4 *param_1);
