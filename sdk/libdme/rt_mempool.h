#pragma once
// sdk/libdme/rt_mempool.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071c1f0; /* 0x71c1f0 */
extern pointer PTR_DAT_0071c1fc; /* 0x71c1fc */
extern pointer PTR_PTR_0071c1f4; /* 0x71c1f4 */
extern pointer PTR_PTR_0071c208; /* 0x71c208 */
extern pointer PTR_PTR_0071c20c; /* 0x71c20c */
extern pointer PTR_PTR_0071c210; /* 0x71c210 */
extern pointer PTR_PTR_0071c214; /* 0x71c214 */
extern pointer PTR_PTR_0071c218; /* 0x71c218 */
extern pointer PTR_PTR_0071c21c; /* 0x71c21c */
extern pointer PTR_PTR_0071c220; /* 0x71c220 */
extern pointer PTR_PTR_0071c224; /* 0x71c224 */
extern pointer PTR_PTR_0071c228; /* 0x71c228 */
extern pointer PTR_PTR_0071c22c; /* 0x71c22c */
extern pointer PTR_PTR_0071c230; /* 0x71c230 */
extern pointer PTR_PTR_0071c234; /* 0x71c234 */
extern pointer PTR_PTR_0071c238; /* 0x71c238 */
extern pointer PTR_s_rt_mempool_check_integrity__0071c204; /* 0x71c204 */

// ---- functions
undefined8 rt_mempool_Alloc(int param_1,undefined8 param_2,undefined8 param_3);
undefined8 rt_mempool_Free(undefined4 param_1,int param_2);
undefined8 rt_mempool_Realloc(undefined4 param_1,undefined4 param_2,int param_3);
undefined8 rt_mempool_Calloc(undefined4 param_1,int param_2,undefined8 param_3);
undefined8 rt_mempool_Lock(undefined4 param_1,int param_2);
undefined8 rt_mempool_Unlock(undefined4 param_1,undefined4 param_2,int param_3);
undefined8 rt_mempool_AllocAligned(undefined4 param_1,int param_2,undefined8 param_3);
void FUN_005c1d00(void);
void FUN_005c1d04(void);
void FUN_005c1d08(void);
void FUN_005c1d0c(void);
void FUN_005c1d10(void);
void FUN_005c1d14(void);
undefined8 FUN_005c1d18(undefined8 param_1,undefined8 param_2);
undefined8 FUN_005c1d20(undefined8 param_1,undefined8 param_2);
undefined8 FUN_005c1d28(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void rt_mempool_Push(int param_1,undefined4 param_2,undefined4 param_3);
void rt_mempool_Pop(int param_1);
undefined8 FUN_005c1e28(undefined4 *param_1);
undefined8 FUN_005c1e6c(undefined4 *param_1);
undefined8 FUN_005c1eb0(undefined4 *param_1);
undefined8 FUN_005c1ef4(undefined4 *param_1);
undefined1 FUN_005c1f38(int param_1);
undefined8 FUN_005c1f40(undefined4 *param_1);
undefined4 FUN_005c1f8c(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_005c2028(int param_1,int param_2);
undefined8 FUN_005c20c8(undefined4 *param_1);
undefined8 FUN_005c20f0(int param_1,undefined4 *param_2);
undefined8 FUN_005c2118(uint *param_1,uint *param_2);
undefined8 FUN_005c2178(int param_1,int *param_2);
undefined8 FUN_005c21a8(uint *param_1,int *param_2);
int FUN_005c2218(int param_1,int param_2);
int FUN_005c22c0(int param_1,int param_2);
undefined8 FUN_005c2368(uint *param_1,undefined4 *param_2);
undefined8 FUN_005c23c8(int param_1,undefined4 param_2);
ulonglong FUN_005c23e4(void *param_1,int *param_2,int param_3);
int FUN_005c2544(int param_1,void *param_2,int param_3);
int FUN_005c26e4(int *param_1,int param_2,int param_3);
undefined8 FUN_005c282c(int param_1,int param_2);
int FUN_005c2880(int param_1,int param_2);
int FUN_005c299c(int *param_1,int param_2);
undefined8 FUN_005c2ab8(undefined4 *param_1);
undefined8 FUN_005c2b28(undefined4 *param_1,int param_2,undefined4 param_3);
bool FUN_005c2bec(char *param_1,char *param_2);
bool FUN_005c2c34(byte *param_1,byte *param_2);
bool FUN_005c2c70(short *param_1,short *param_2);
bool FUN_005c2cb8(ushort *param_1,ushort *param_2);
bool FUN_005c2cf4(int *param_1,int *param_2);
bool FUN_005c2d30(uint *param_1,uint *param_2);
bool FUN_005c2d6c(longlong *param_1,longlong *param_2);
bool FUN_005c2da8(ulonglong *param_1,ulonglong *param_2);
bool FUN_005c2de4(float *param_1,float *param_2);
bool FUN_005c2e20(double *param_1,double *param_2);
bool FUN_005c2e5c(undefined8 param_1,uint *param_2);
undefined8 FUN_005c2ec4(int *param_1,int *param_2);
void FUN_005c2fb8(int *param_1);
undefined8 FUN_005c3030(uint *param_1,uint param_2);
undefined8 FUN_005c306c(int *param_1,int *param_2,int param_3,size_t param_4);
undefined8 FUN_005c3344(int *param_1,int param_2,int param_3);
void FUN_005c35d8(undefined8 param_1,undefined8 param_2);
void FUN_005c35e4(int *param_1);
undefined8 FUN_005c3660(uint *param_1,uint param_2,uint param_3);
undefined8 FUN_005c36a8(int param_1,int *param_2);
undefined8 FUN_005c3720(int param_1,undefined4 *param_2);
undefined8 FUN_005c37b4(int param_1,int param_2);
undefined8 FUN_005c37f0(int param_1,longlong param_2);
undefined4 FUN_005c380c(int param_1);
void rt_mempool_PrintAbort(int param_1,int param_2,undefined8 param_3);
void rt_mempool_check_integrity(int param_1,int param_2);
void FUN_005c39fc(int param_1);
undefined8 FUN_005c3a44(int param_1,undefined4 param_2);
undefined8 FUN_005c3aa0(int param_1,int param_2);
undefined8 FUN_005c3b5c(int param_1,int param_2);
undefined8 FUN_005c3c64(int param_1,int param_2);
undefined8 FUN_005c3d54(int param_1);
undefined4 FUN_005c3e40(int param_1);
int FUN_005c3f8c(int param_1,uint param_2);
ulonglong FUN_005c4188(undefined4 *param_1,undefined4 *param_2);
int FUN_005c4370(int param_1,uint param_2);
undefined8 FUN_005c4494(int param_1,int param_2);
undefined8 FUN_005c4528(int param_1,int *param_2);
undefined8 FUN_005c4590(undefined4 *param_1);
ulonglong FUN_005c4620(uint *param_1,undefined4 *param_2);
