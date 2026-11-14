#pragma once
// idol/linearheap.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071a904; /* 0x71a904 */
extern pointer PTR_DAT_0071a908; /* 0x71a908 */

// ---- functions
undefined4 LinearHeap_CurrentCursor(void);
void LinearHeap_SetDefaultUnk0c(undefined4 param_1);
void LinearHeap_InitDefault(int param_1,uint param_2);
void LinearHeap_Init(int *param_1,int param_2,uint param_3,int param_4);
