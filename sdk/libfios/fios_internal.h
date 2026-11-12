#pragma once
// sdk/libfios/fios_internal.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071aaa8; /* 0x71aaa8 */
extern undefined4 DAT_0071aaac; /* 0x71aaac */
extern undefined4 DAT_0071aab4; /* 0x71aab4 */
extern pointer PTR_DAT_0071aaa0; /* 0x71aaa0 */
extern pointer PTR_DAT_0071aaa4; /* 0x71aaa4 */
extern pointer PTR_PTR_0071aab0; /* 0x71aab0 */
extern pointer PTR_PTR_0071aac4; /* 0x71aac4 */
extern pointer PTR_PTR_0071aacc; /* 0x71aacc */

// ---- functions
ulonglong _ZN4cell4fios11getDataHashEPKcj(byte *param_1,uint param_2);
void FUN_00519150(ulonglong param_1,float *param_2,undefined4 *param_3);
void FUN_00519204(undefined8 param_1);
char * FUN_0051923c(char *param_1,char *param_2,uint param_3);
int FUN_00519310(char *param_1,char *param_2,uint param_3);
size_t FUN_005193cc(undefined4 param_1,char *param_2,int param_3);
void FUN_00519444(void);
void FUN_005194f0(u8 *param_1);
void FUN_005196b0(void);
int FUN_0051970c(char *param_1,char *param_2,longlong param_3);
int FUN_005197dc(char *param_1,char *param_2);
