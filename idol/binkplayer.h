#pragma once
// idol/binkplayer.h
#include "types.h"

// ---- globals
extern undefined4 DAT_010ee118; /* 0x10ee118 */
extern undefined4 DAT_010ee11c; /* 0x10ee11c */
extern undefined4 DAT_010ee120; /* 0x10ee120 */
extern undefined4 DAT_010ee124; /* 0x10ee124 */
extern undefined4 DAT_010ee128; /* 0x10ee128 */
extern undefined4 DAT_010ee12c; /* 0x10ee12c */
extern undefined4 DAT_010ee130; /* 0x10ee130 */
extern undefined4 DAT_010ee134; /* 0x10ee134 */
extern undefined4 DAT_010ee138; /* 0x10ee138 */
extern undefined4 DAT_010ee13c; /* 0x10ee13c */
extern undefined4 DAT_010ee140; /* 0x10ee140 */
extern undefined4 DAT_010ee144; /* 0x10ee144 */
extern undefined4 DAT_010ee148; /* 0x10ee148 */
extern undefined4 DAT_010ee14c; /* 0x10ee14c */
extern undefined4 DAT_010ee150; /* 0x10ee150 */
extern undefined4 DAT_010ee154; /* 0x10ee154 */
extern undefined4 DAT_010ee158; /* 0x10ee158 */
extern undefined4 DAT_010ee15c; /* 0x10ee15c */
extern undefined4 DAT_010ee1c0; /* 0x10ee1c0 */
extern undefined4 DAT_010ee1e4; /* 0x10ee1e4 */
extern undefined4 DAT_010ee208; /* 0x10ee208 */
extern undefined * PTR_DAT_008fa400; /* 0x8fa400 */

// ---- functions
void BinkPlayer_SetupTexHeader(byte *param_1,undefined4 *param_2);
bool BinkPlayer_InitTexture(undefined2 param_1,int param_2,undefined4 *param_3,int param_4,int param_5);
void BinkPlayer_GetFrameBufferSizes(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,uint *param_6, int *param_7);
undefined8 BinkPlayer_AllocTextures(int param_1,undefined8 param_2,int *param_3);
void BinkPlayer_FreeTextures(int param_1);
void BinkPlayer_ReleaseTextures(undefined4 *param_1);
void BinkPlayer_FreeAllTextures(undefined4 *param_1);
int BinkPlayer_Open(BinkPlayer *param_1,char *param_2,int param_3);
void BinkPlayer_OpenMovie(int param_1,undefined8 param_2,ulonglong param_3);
undefined4 BinkPlayer_OpenMovieTrack(int param_1,undefined8 param_2,int param_3,ulonglong param_4);
int BinkPlayer_Start(BinkPlayer *param_1,char *param_2,int param_3,int param_4);
undefined4 BinkPlayer_GetBink(int param_1);
int BinkPlayer_GetState(BinkPlayer *param_1);
void BinkPlayer_Close(undefined8 param_1,undefined8 param_2);
undefined4 * BinkPlayer_FrameTexture(undefined8 param_1,int param_2);
void BinkPlayer_DrawFrame(undefined8 param_1,uint param_2);
void BinkPlayer_Draw(undefined8 param_1);
void BinkPlayer_Draw_2(undefined8 param_1);
int BinkPlayer_DrawFrame(BinkPlayer *param_1);
void BinkPlayer_Stop(BinkPlayer *param_1);
void BinkPlayer_Init(BinkPlayer *param_1);
void BinkPlayer_InitScreen(int param_1);
void STUB_004d5da4(BinkPlayer *param_1,int param_2);
void STUB_004d5da8(void);
void BinkPlayer_ClearTexUnit(undefined8 param_1,uint param_2);
void WaitForRsxIdle(void);
void WaitForRsxLabel(int param_1);
