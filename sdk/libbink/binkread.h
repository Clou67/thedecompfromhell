#pragma once
// sdk/libbink/binkread.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071a3c0; /* 0x71a3c0 */
extern undefined4 DAT_0071a3ec; /* 0x71a3ec */
extern undefined4 DAT_0071a3f0; /* 0x71a3f0 */
extern undefined4 DAT_0071a460; /* 0x71a460 */
extern undefined4 DAT_0071a464; /* 0x71a464 */
extern undefined4 DAT_0071a468; /* 0x71a468 */
extern undefined4 DAT_0071a490; /* 0x71a490 */
extern pointer PTR_DAT_0071a3c4; /* 0x71a3c4 */
extern pointer PTR_DAT_0071a3e8; /* 0x71a3e8 */
extern pointer PTR_DAT_0071a3f4; /* 0x71a3f4 */
extern pointer PTR_DAT_0071a3f8; /* 0x71a3f8 */
extern pointer PTR_DAT_0071a40c; /* 0x71a40c */
extern pointer PTR_DAT_0071a410; /* 0x71a410 */
extern pointer PTR_DAT_0071a414; /* 0x71a414 */
extern pointer PTR_DAT_0071a4a0; /* 0x71a4a0 */
extern pointer PTR_PTR_0071a3c8; /* 0x71a3c8 */
extern pointer PTR_PTR_0071a3cc; /* 0x71a3cc */
extern pointer PTR_PTR_0071a3d0; /* 0x71a3d0 */
extern pointer PTR_PTR_0071a3d4; /* 0x71a3d4 */
extern pointer PTR_PTR_0071a3d8; /* 0x71a3d8 */
extern pointer PTR_PTR_0071a3dc; /* 0x71a3dc */
extern pointer PTR_PTR_0071a3e0; /* 0x71a3e0 */
extern pointer PTR_PTR_0071a3e4; /* 0x71a3e4 */
extern pointer PTR_PTR_0071a4d0; /* 0x71a4d0 */
extern pointer PTR_PTR_0071a4d4; /* 0x71a4d4 */
extern pointer PTR_PTR_0071a4d8; /* 0x71a4d8 */
extern pointer PTR_PTR_0071a4dc; /* 0x71a4dc */
extern pointer PTR_s_Bink_IO_0071a494; /* 0x71a494 */
extern pointer PTR_s_Bink_Snd_0071a44c; /* 0x71a44c */
extern pointer PTR_s_Bink_global_IO_mutex_0071a43c; /* 0x71a43c */
extern pointer PTR_s_Bink_global_sound_mutex_0071a440; /* 0x71a440 */
extern pointer PTR_s_Bink_instance_io_mutex_0071a420; /* 0x71a420 */
extern pointer PTR_s_Bink_instance_priority_io_mutex_0071a434; /* 0x71a434 */
extern pointer PTR_s_Bink_instance_sound_mutex_0071a438; /* 0x71a438 */
extern pointer PTR_s_Bink_list_mutex_0071a444; /* 0x71a444 */
extern pointer PTR_s_Data_rate_0071a48c; /* 0x71a48c */
extern pointer PTR_s_IO_buffer_0071a470; /* 0x71a470 */
extern pointer PTR_s_Percent_Full_0071a484; /* 0x71a484 */
extern pointer PTR_s_ratemem_0071a478; /* 0x71a478 */

// ---- functions
void BinkSnd_SetVolume(int param_1,int param_2);
undefined8 BinkSnd_SetUnk8c(int param_1,undefined8 param_2);
undefined * BinkSnd_SelectBufferMode(uint param_1);
int BinkSnd_Reset(int param_1,int param_2);
void BinkSnd_SetTaps(int param_1,int param_2,uint param_3);
undefined4 BinkSnd_Init(int param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5, undefined4 param_6);
void BinkSnd_Clear(int param_1);
void BinkSnd_SetDecay(int param_1,int param_2);
undefined8 BinkSnd_Process(void);
void BinkSetError(char *param_1);
undefined * BinkGetError(void);
void BinkSetFrameRate(undefined4 param_1,undefined4 param_2);
void BinkCfg_SetUnk108(undefined8 param_1);
void BinkCfg_SetUnk4(undefined4 param_1);
void BinkCfg_SetUnk110(undefined4 param_1);
void BinkCfg_SetUnk8(undefined4 param_1);
void BinkSetSoundTrack(uint param_1,undefined4 *param_2);
void FUN_005ea3e8(int param_1,undefined4 *param_2);
void Bink_SetUnkD0(int param_1,int param_2);
ulonglong FUN_005ea4f8(int param_1,ulonglong param_2,uint param_3);
undefined4 FUN_005ea708(int *param_1,longlong param_2,uint param_3,uint *param_4);
int FUN_005ea9b0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 param_5);
void FUN_005eac3c(int param_1,int param_2,undefined4 param_3);
undefined4 Bink_TrackUnk174(int param_1,int param_2);
int Bink_TrackData(int param_1,int param_2);
undefined4 Bink_TrackUnk178(int param_1,int param_2);
undefined4 Bink_SetUnk114(int param_1,undefined4 param_2);
void Bink_SetFlag80(int param_1,int param_2);
void FUN_005eae04(u8 *param_1,u8 *param_2);
undefined4 BinkMutexLock(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 );
undefined8 BinkIoLock(int param_1);
void BinkMutexWait(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void BinkIoWait(int param_1);
void BinkMutexUnlock(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void BinkIoUnlock(int param_1);
void BinkIoWait_2(int param_1);
void BinkWaitFrameIO(int param_1);
void FUN_005eb650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
int FUN_005eb740(int param_1,undefined2 *param_2);
void FUN_005eb970(int param_1);
ulonglong FUN_005eb9ac(int *param_1);
void BinkMixInstanceSound(int param_1);
void BinkServiceInstanceSound(int param_1);
undefined4 FUN_005ec00c(void);
uint FUN_005ec034(int param_1,undefined4 param_2);
void BinkGlobalIoLock(void);
void BinkGlobalSoundLock(void);
undefined4 FUN_005ec2c8(void);
void FUN_005ec2f0(int param_1,ulonglong param_2,int param_3);
void BinkInitGlobalMutexes(void);
u32 FUN_005ec620(u8 *param_1,u32 param_2);
undefined8 BinkSoundThreadProc(void);
void BinkByteSwap(uint *param_1,longlong param_2);
void thunk_FUN_005ecc80(uint *param_1,longlong param_2);
undefined4 FUN_005ece64(undefined8 param_1,int param_2,int param_3);
void FUN_005eced8(int param_1,undefined4 *param_2,ulonglong param_3);
void FUN_005ed184(undefined4 *param_1,undefined4 *param_2);
void FUN_005ed3a0(int param_1,int param_2,int param_3,int param_4,uint param_5);
void FUN_005ed898(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_005ed994(int param_1,undefined4 param_2);
void BinkRegisterStats(int param_1,longlong param_2);
undefined4 FUN_005edea0(int param_1);
undefined8 FUN_005ee120(int param_1,uint param_2);
undefined4 FUN_005ee3a8(int param_1,int param_2);
void BinkClose(int param_1);
undefined8 BinkIoThreadProc(void);
int FUN_005ef740(int param_1);
void BinkServiceGlobalSound(void);
undefined4 FUN_005efad8(int param_1,uint param_2);
void FUN_005efeb0(int param_1);
int FUN_005f01d8(int param_1,int param_2);
undefined4 BinkDoFrame(uint param_1,ulonglong param_2);
void BinkDoFrameAll(undefined8 param_1);
void FUN_005f0aa0(int param_1,ulonglong param_2,uint param_3);
uint * FUN_005f0f38(uint param_1,uint param_2);
uint FUN_005f1198(uint *param_1,ulonglong param_2);
void * BinkOpen(int param_1,ulonglong *param_2,ulonglong param_3);
void * thunk_FUN_005f1788(int param_1,ulonglong *param_2,ulonglong param_3);
