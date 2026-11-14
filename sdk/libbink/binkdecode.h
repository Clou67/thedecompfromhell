#pragma once
// sdk/libbink/binkdecode.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071a5d0; /* 0x71a5d0 */
extern undefined4 DAT_0071a5d4; /* 0x71a5d4 */
extern undefined4 DAT_0071a5d8; /* 0x71a5d8 */
extern pointer PTR_PTR_0071a5dc; /* 0x71a5dc */
extern undefined1 stack0xffffffa0[16]; /* stack slot, not a real global */
extern undefined1 stack0xffffffb0[16]; /* stack slot, not a real global */

// ---- functions
void BinkAudioFft_Pass(int param_1,longlong param_2,int param_3);
void BinkAudioFft_Pass_2(int param_1,float *param_2,int param_3);
void BinkAudioFft_Butterfly32(float *param_1,int param_2);
void BinkAudioFft_Butterfly32_2(float *param_1,int param_2);
void BinkAudioFft_Butterfly16(float *param_1,int param_2);
void BinkAudioFft_Butterfly16_2(float *param_1,int param_2);
void BinkAudioFft_Leaf(int param_1,int param_2,int param_3,int param_4);
void BinkAudioFft_Leaf_2(int param_1,int param_2,int param_3,int param_4);
void BinkAudioFft_Recurse(int param_1,int param_2,int param_3,int param_4);
void BinkAudioFft_Forward(uint param_1,int param_2,int param_3,int param_4);
void BinkAudioFft_Inverse(uint param_1,int param_2,int param_3,int param_4);
void BinkAudioDct(int param_1,ulonglong param_2,uint param_3,int param_4);
void BinkAudioWindow(int param_1,float *param_2,ulonglong param_3,ulonglong param_4);
void FUN_00601cd8(undefined1 *param_1,int param_2,short *param_3,int *param_4);
void FUN_00602080(void);
void FUN_00602094(void);
void FUN_006020b0(uint *param_1,int param_2,short *param_3,int param_4);
void FUN_006024a8(char *param_1,int param_2,short *param_3,int param_4,char *param_5,int param_6);
void FUN_006028b8(int param_1,uint *param_2,int param_3);
void FUN_00602ec8(char *param_1,int param_2,undefined8 param_3,undefined8 param_4,char *param_5, int param_6);
void FUN_006033fc(undefined2 *param_1);
void FUN_00603598(int param_1,uint *param_2);
