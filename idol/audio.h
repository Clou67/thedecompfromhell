#pragma once
// idol/audio.h
#include "types.h"
#include "idol/sound.h"

// ---- globals
extern undefined4 DAT_0159bb0c; /* 0x159bb0c */
extern undefined4 DAT_0159bb10; /* 0x159bb10 */
extern undefined1 DAT_0159c320; /* 0x159c320 */
extern undefined4 DAT_0159c328; /* 0x159c328 */

// ---- functions
void FUN_005055e8(undefined8 param_1,undefined4 *param_2);
void AudioInit(u8 *param_1);
void AudioShutdown(void);
undefined4 AudioGetChannelCount(void);
void AudioAllocSized(undefined4 param_1);
void STUB_00505808(void);
void FUN_00505810(void);
void FUN_005058a0(void);
int snd_InitVAGStreamingEx(int param_1,int param_2,int param_3,int param_4);
void FUN_00505acc(void);
undefined8 STUB_00505af0_RET_0(void);
void snd_AutoReverb(int param_1,int param_2,int param_3,int param_4);
undefined8 STUB_00505afc_RET_0(void);
undefined8 STUB_00505b04_RET_0(void);
void SndBankLoadFromMem(void);
void Sound_LoadBank(u8 *param_1,u8 *param_2,u32 *param_3);
void SndBankLoadWithCallback(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4);
int snd_BankLoadByPath(const char *param_1,int param_2);
void STUB_00505cf8(void);
void snd_ContinueVAGStream(u32 param_1);
undefined8 STUB_00505d20(...);
int snd_GetDopplerPitchMod(int param_1);
void FUN_00505d78(undefined4 param_1,undefined4 *param_2,undefined8 param_3);
void snd_GetVAGStreamTimeRemaining_CB(u32 param_1,SndCompleteProc param_2,u64 param_3);
void snd_IsVAGStreamBuffered_CB(u32 param_1,SndCompleteProc param_2,u64 param_3);
void snd_PauseVAGStream(u32 param_1);
void STUB_00505f3c(...);
void STUB_00505f40(...);
void STUB_00505f44(...);
void STUB_00505f48(...);
void STUB_00505f4c(...);
void STUB_00505f50(...);
