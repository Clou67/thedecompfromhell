#pragma once
// sdk/libscream/common/grains.h
#include "types.h"

// ---- globals
extern pointer PTR_PTR_0071b000; /* 0x71b000 */
extern pointer PTR_PTR_0071b004; /* 0x71b004 */
extern pointer PTR_PTR_0071b00c; /* 0x71b00c */

// ---- functions
uint FUN_006104e8(int param_1);
undefined8 FUN_00610754(undefined8 param_1,undefined8 param_2,undefined1 *param_3);
int FUN_00610790(int param_1,int param_2);
ulonglong FUN_0061085c(int param_1,int param_2);
char FUN_00610adc(int param_1,char param_2);
byte FUN_00610bb4(int param_1,byte param_2);
void FUN_00610c74(int param_1,int param_2,uint *param_3,int *param_4);
void FUN_0061122c(void);
undefined8 FUN_006112a4(undefined8 param_1);
undefined8 FUN_006112d8(int param_1,undefined8 param_2,uint *param_3);
undefined8 FUN_006113e4(int param_1,undefined8 param_2,uint *param_3);
undefined4 FUN_00611604(int param_1,undefined8 param_2,uint *param_3);
undefined8 FUN_0061183c(int param_1,undefined8 param_2,uint *param_3);
undefined8 FUN_00611d48(int param_1);
undefined8 FUN_00611f88(undefined8 param_1);
undefined8 FUN_00611fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00612130(int param_1,undefined8 param_2,uint *param_3);
undefined4 FUN_006125e4(undefined4 *param_1,undefined8 param_2,uint *param_3);
undefined8 FUN_00612688(int param_1,undefined8 param_2,int param_3);
undefined8 FUN_006127f4(int param_1,int param_2);
undefined8 FUN_00612858(int param_1);
undefined8 FUN_006128ec(int param_1);
undefined8 FUN_00612980(int param_1,undefined8 param_2,int param_3);
undefined4 FUN_00612ac4(int param_1,undefined8 param_2,int param_3);
undefined4 FUN_00612bc4(int param_1);
undefined4 FUN_00612c5c(int param_1,int param_2,uint *param_3);
undefined4 FUN_006131fc(int param_1,int param_2,int param_3);
undefined4 FUN_006133fc(int param_1,int param_2,int param_3);
undefined8 FUN_006135c8(undefined8 param_1);
undefined8 FUN_006135fc(int param_1,undefined8 param_2,int param_3);
undefined8 FUN_0061373c(int param_1,undefined8 param_2,int param_3);
undefined8 FUN_00613850(int param_1,undefined8 param_2,int param_3);
undefined8 FUN_00613964(int param_1,undefined8 param_2,int param_3);
undefined8 FUN_00613a74(int param_1,undefined8 param_2,int param_3);
undefined8 FUN_00613b4c(int param_1,undefined8 param_2,int param_3);
undefined8 FUN_00613c80(int param_1,undefined8 param_2,int param_3);
undefined8 FUN_00613da8(int param_1,undefined8 param_2,int param_3);
int FUN_00613eb8(int param_1,undefined8 param_2,uint *param_3);
int FUN_006140c0(undefined8 param_1,undefined8 param_2,uint *param_3);
undefined4 FUN_00614140(int param_1,undefined4 param_2,uint *param_3);
undefined4 FUN_00614608(int param_1,undefined4 param_2,int param_3);
undefined8 FUN_00614798(undefined8 param_1);
undefined4 FUN_006147cc(int param_1,int param_2);
undefined4 FUN_006148dc(int param_1,undefined4 param_2);
undefined8 FUN_006149f8(undefined8 param_1);
undefined8 FUN_00614a2c(int param_1,undefined8 param_2,uint *param_3);
undefined8 FUN_00614aa0(int param_1,undefined8 param_2,uint *param_3);
undefined8 FUN_00614ff4(undefined8 param_1);
undefined8 FUN_00615028(undefined8 param_1);
undefined8 FUN_0061505c(undefined8 param_1);
undefined8 FUN_00615090(undefined8 param_1);
int FUN_006150c4(void);
undefined4 FUN_00615138(uint param_1,int *param_2);
int FUN_006151b0(int param_1);
void FUN_00615218(void);
void FUN_00615258(double param_1,float *param_2,float *param_3);
void FUN_006152a4(void);
double FUN_006153e4(void);
void FUN_006153fc(int param_1);
undefined4 snd_gmxGetActiveSnapshotCount(void);
void FUN_006154a8(double param_1);
void FUN_00615928(undefined4 param_1,int param_2,undefined1 *param_3);
void FUN_00615a18(double param_1,double param_2,double param_3,undefined4 param_4,undefined8 param_5 ,float param_6);
undefined4 snd_gmxDeactivateSnapshotByIndex(double param_1,uint param_2);
undefined4 snd_gmxActivateSnapshotByIndex(double param_1,double param_2,int param_3);
void FUN_00615ef4(double param_1,double param_2);
void snd_gmxDeactivateAllSnapshots(double param_1);
void FUN_00615ff4(void);
undefined4 snd_gmxLoadServerDummyFile(void);
undefined4 snd_gmxLoadFileFromMem(char *param_1);
undefined4 snd_InitGroupMixer(undefined4 param_1,uint param_2,uint param_3);
void FUN_00616540(void);
uint FUN_00616608(undefined4 param_1);
undefined8 FUN_006166f4(void);
undefined8 snd_gmxDeactivateSnapshotByName(undefined8 param_1,undefined4 param_2);
undefined8 snd_gmxActivateSnapshotByName(undefined8 param_1,undefined8 param_2,undefined4 param_3);
ulonglong FUN_00616884(uint param_1,int param_2,ulonglong param_3);
uint FUN_006168e8(byte *param_1,uint param_2);
undefined8 FUN_00616934(void);
int FUN_0061693c(undefined8 param_1,ulonglong param_2);
undefined4 snd_LFO_TYPE_SQUARE(int param_1,int param_2);
int snd_LFO_TYPE_TRIANGLE(undefined8 param_1,int param_2);
int snd_LFO_TYPE_SAW(undefined8 param_1,int param_2);
int FUN_00616acc(ushort *param_1,int param_2);
void FUN_00616b74(int param_1);
void FUN_00616c14(int param_1);
undefined4 FUN_00616c60(int param_1);
void FUN_00616cfc(int param_1,int param_2);
void FUN_00617084(void);
undefined4 snd_LFO_TYPE_RAND(int param_1,int param_2);
bool FUN_006173e8(short *param_1);
undefined8 FUN_006174b0(int param_1,byte *param_2);
void FUN_00617644(uint param_1);
void FUN_0061768c(void);
void FUN_006176ec(void);
uint FUN_006176f0(char *param_1);
int snd_AllocBankToken(int param_1);
