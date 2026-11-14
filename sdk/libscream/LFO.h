#pragma once
// sdk/libscream/LFO.h
#include "types.h"

// ---- globals
extern pointer PTR_PTR_0071b00c; /* 0x71b00c */

// ---- functions
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
