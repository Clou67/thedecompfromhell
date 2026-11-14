#pragma once
// sdk/libc.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071c3bc; /* 0x71c3bc */
extern pointer PTR_DAT_0071c3c4; /* 0x71c3c4 */
extern pointer PTR_PTR_0071c3c0; /* 0x71c3c0 */
extern pointer PTR_PTR_0071c3c8; /* 0x71c3c8 */
extern pointer PTR_PTR_0071c3cc; /* 0x71c3cc */
extern pointer PTR_PTR_0071c3d0; /* 0x71c3d0 */
extern undefined1 stack0x00000048[16]; /* stack slot, not a real global */

// ---- functions
uint _FPrintfWrite(uint param_1,undefined8 param_2,uint param_3);
uint _FPrintfWrite_2(uint param_1,undefined8 param_2,uint param_3);
int * _SnprintfWrite(int *param_1,void *param_2,uint param_3);
int _SprintfWrite(void *param_1,void *param_2,size_t param_3);
