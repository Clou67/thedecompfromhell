#pragma once
// game/update/moby625.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00853e88; /* 0x853e88 */
extern undefined4 DAT_00853ed8; /* 0x853ed8 */
extern undefined4 DAT_00853edc; /* 0x853edc */
extern undefined4 DAT_00853ee4; /* 0x853ee4 */
extern undefined4 DAT_00853ee8; /* 0x853ee8 */
extern undefined4 DAT_00853eec; /* 0x853eec */
extern undefined4 DAT_00853ef0; /* 0x853ef0 */
extern undefined4 DAT_00853ef4; /* 0x853ef4 */
extern undefined4 DAT_00853f10; /* 0x853f10 */
extern undefined4 DAT_00853f14; /* 0x853f14 */
extern undefined4 DAT_00853f18; /* 0x853f18 */
extern undefined4 DAT_00853f1c; /* 0x853f1c */
extern undefined4 DAT_00853f20; /* 0x853f20 */
extern undefined4 DAT_00853f24; /* 0x853f24 */
extern undefined4 DAT_00853f8c; /* 0x853f8c */
extern undefined4 DAT_00853fb0; /* 0x853fb0 */
extern undefined4 DAT_00853fb4; /* 0x853fb4 */
extern undefined4 DAT_00853fb8; /* 0x853fb8 */
extern undefined4 DAT_00853fcc; /* 0x853fcc */
extern undefined4 DAT_00853fd0; /* 0x853fd0 */
extern undefined4 DAT_00853fd4; /* 0x853fd4 */
extern undefined4 DAT_00853fd8; /* 0x853fd8 */
extern undefined4 DAT_00853fdc; /* 0x853fdc */
extern undefined4 DAT_00853fe0; /* 0x853fe0 */
extern undefined4 DAT_00853fe4; /* 0x853fe4 */
extern undefined4 DAT_00853fe8; /* 0x853fe8 */
extern undefined4 DAT_00853fec; /* 0x853fec */
extern undefined4 DAT_00853ff0; /* 0x853ff0 */
extern undefined4 DAT_00853ff4; /* 0x853ff4 */
extern undefined4 DAT_00853ff8; /* 0x853ff8 */
extern undefined4 DAT_00853ffc; /* 0x853ffc */
extern undefined4 DAT_00854000; /* 0x854000 */
extern undefined4 DAT_00854004; /* 0x854004 */
extern undefined4 DAT_00854008; /* 0x854008 */
extern undefined4 DAT_0085400c; /* 0x85400c */
extern undefined4 DAT_00854010; /* 0x854010 */
extern undefined4 DAT_00854014; /* 0x854014 */
extern undefined4 DAT_00854018; /* 0x854018 */
extern undefined4 DAT_0085401c; /* 0x85401c */
extern undefined4 DAT_00854020; /* 0x854020 */
extern undefined4 DAT_00854024; /* 0x854024 */
extern undefined4 DAT_00854028; /* 0x854028 */
extern undefined4 DAT_0085402c; /* 0x85402c */
extern undefined4 DAT_00854038; /* 0x854038 */
extern undefined4 DAT_0085403c; /* 0x85403c */
extern undefined4 DAT_010cbbb0; /* 0x10cbbb0 */
extern undefined4 DAT_010cbbb4; /* 0x10cbbb4 */

// ---- functions
void FUN_003e7fc8(double param_1,double param_2,f32 *param_3,float *param_4,undefined8 param_5, undefined8 param_6,float param_7);
ulonglong M625_003e82b0(int param_1);
void M625_003e8884(void);
void M625_003e88a8(int param_1);
void M625_003e8a88(MobyInstance *param_1);
void UpdateMoby_625(MobyInstance *moby);
