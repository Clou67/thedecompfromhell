#pragma once
// sdk/libedgelzma/edgelzma_inflate_queue.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071a9b4; /* 0x71a9b4 */
extern pointer PTR_DAT_0071a9b8; /* 0x71a9b8 */

// ---- functions
undefined8 FUN_0050fb6c(void);
void FUN_0050fb74(void);
int edgeLzmaGetInflateQueueSize(int param_1);
undefined4 FUN_0050fbfc(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,undefined4 param_6 ,ushort param_7,int param_8);
undefined1 FUN_0051001c(void);
void FUN_0051007c(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5, undefined4 param_6,ushort param_7,int param_8);
void FUN_00510478(void);
uint edgeLzmaInitInflateQueue(uint param_1,ulonglong param_2,uint param_3,int param_4);
undefined4 edgeLzmaInflateTaskContextCheck(undefined4 param_1,undefined4 param_2);
void FUN_005106cc(undefined4 *param_1);
void FUN_005106e8(undefined4 *param_1);
