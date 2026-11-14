#pragma once
// sdk/libdme/rt_cert.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071c188; /* 0x71c188 */
extern pointer PTR_DAT_0071c18c; /* 0x71c18c */
extern pointer PTR_DAT_0071c190; /* 0x71c190 */
extern pointer PTR_DAT_0071c194; /* 0x71c194 */
extern pointer PTR_DAT_0071c19c; /* 0x71c19c */
extern pointer PTR_DAT_0071c1a0; /* 0x71c1a0 */
extern pointer PTR_DAT_0071c1a4; /* 0x71c1a4 */
extern pointer PTR_DAT_0071c1a8; /* 0x71c1a8 */
extern pointer PTR_DAT_0071c1ac; /* 0x71c1ac */
extern pointer PTR_DAT_0071c1b4; /* 0x71c1b4 */
extern pointer PTR_DAT_0071c1b8; /* 0x71c1b8 */
extern pointer PTR_DAT_0071c1bc; /* 0x71c1bc */
extern pointer PTR_DAT_0071c1c0; /* 0x71c1c0 */
extern pointer PTR_DAT_0071c1c4; /* 0x71c1c4 */
extern pointer PTR_DAT_0071c1c8; /* 0x71c1c8 */
extern pointer PTR_DAT_0071c1d0; /* 0x71c1d0 */
extern pointer PTR_DAT_0071c1d4; /* 0x71c1d4 */
extern undefined * PTR_DAT_0071c1d8; /* 0x71c1d8 */
extern pointer PTR_PTR_0071c1b0; /* 0x71c1b0 */
extern pointer PTR_PTR_0071c1cc; /* 0x71c1cc */

// ---- functions
undefined * rt_cert_GetVersion(void);
int * FUN_005b272c(int *param_1);
int * FUN_005b2968(int *param_1);
int FUN_005b2b30(void *param_1,void *param_2);
int FUN_005b2b9c(undefined4 param_1);
int FUN_005b2cd0(uint *param_1,byte *param_2);
int FUN_005b2f34(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_005b3128(int param_1);
void FUN_005b31d0(void);
undefined4 FUN_005b3280(int param_1,int param_2,undefined4 param_3);
uint FUN_005b38a4(int param_1,byte *param_2,uint param_3);
uint FUN_005b45f4(undefined4 param_1,int param_2,uint param_3);
undefined4 rt_cert_FormatTime(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 rt_cert_FormatTime_2(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_005b51d0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_005b54f4(int param_1);
int FUN_005b552c(int param_1,undefined4 param_2,int param_3);
undefined4 FUN_005b5610(int param_1);
uint FUN_005b5a80(int param_1,undefined4 *param_2);
undefined4 FUN_005b5c88(int param_1,void *param_2);
int FUN_005b5d4c(int param_1);
int FUN_005b5d80(void *param_1,size_t param_2);
int FUN_005b5e60(void *param_1,int param_2);
undefined8 FUN_005b5fd0(undefined4 *param_1,int param_2);
undefined8 FUN_005b60b0(int *param_1,int param_2,longlong param_3);
undefined8 FUN_005b6140(int *param_1,int param_2,longlong param_3);
void * FUN_005b61d0(void *param_1,undefined4 param_2,void *param_3,void *param_4);
void * FUN_005b6378(void *param_1,void *param_2,void *param_3,void *param_4);
int FUN_005b65d4(undefined4 param_1,int param_2,int param_3,int param_4);
int FUN_005b6898(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5);
void * FUN_005b6b6c(void *param_1,void *param_2);
void FUN_005b6c40(undefined4 param_1,void *param_2);
void FUN_005b6d80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
void FUN_005b6f34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
void FUN_005b7188(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_005b7274(int param_1,int param_2);
void FUN_005b732c(int param_1,int param_2);
undefined4 FUN_005b73ac(int param_1,int param_2);
undefined4 FUN_005b7454(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_005b7754(void *param_1,undefined4 param_2,int param_3);
void * FUN_005b7b4c(void *param_1,void *param_2);
void FUN_005b7fcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4, undefined4 param_5);
void FUN_005b8120(undefined4 param_1,void *param_2,undefined4 param_3,void *param_4,void *param_5);
undefined * FUN_005b872c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_005b89bc(void *param_1);
void * FUN_005b8a38(undefined1 *param_1,undefined1 *param_2,uint param_3);
void FUN_005b8ec4(undefined4 *param_1,int param_2,uint param_3);
void FUN_005b9178(undefined4 *param_1);
void FUN_005b91e0(void);
void FUN_005b91e8(int param_1,int param_2,uint param_3);
undefined8 FUN_005b9210(int param_1);
void FUN_005ba040(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_005ba0e4(undefined4 *param_1);
void * FUN_005ba178(int param_1,void *param_2,uint param_3);
void FUN_005ba31c(undefined4 *param_1,undefined1 *param_2);
void FUN_005ba4d0(undefined1 *param_1,int param_2);
void FUN_005ba8b8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_005ba95c(undefined4 *param_1);
void * FUN_005ba9f8(int param_1,void *param_2,uint param_3);
void FUN_005bac08(int param_1,undefined4 param_2);
void FUN_005bad38(int *param_1,undefined4 param_2);
void FUN_005bbb08(int param_1,int param_2,uint param_3);
void FUN_005bbc50(int param_1,int param_2,uint param_3);
void FUN_005bbd60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_005bbe04(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_005bbefc(undefined4 *param_1);
void * FUN_005bbf98(int param_1,undefined1 *param_2,uint param_3);
void FUN_005bc36c(undefined4 param_1,int param_2);
void FUN_005bc4d8(int param_1,int param_2,uint param_3);
undefined8 FUN_005bc508(longlong param_1);
void FUN_005bd0b8(undefined4 *param_1);
void FUN_005bd188(undefined4 param_1,undefined4 param_2);
int FUN_005bd288(undefined4 param_1,undefined4 param_2);
void FUN_005bd324(undefined1 *param_1,undefined1 *param_2);
void FUN_005bd46c(undefined1 *param_1,undefined4 param_2,undefined1 *param_3);
void FUN_005bd638(int param_1,int param_2,uint param_3);
ulonglong FUN_005bd668(uint *param_1,uint *param_2,int param_3);
ulonglong FUN_005bd7c0(uint *param_1,longlong param_2,longlong param_3);
ulonglong FUN_005bd940(uint *param_1,uint *param_2,int param_3);
undefined4 FUN_005bda98(undefined4 param_1);
void FUN_005bdae0(byte *param_1,int *param_2,uint param_3);
void FUN_005bdbfc(undefined4 *param_1,undefined1 *param_2,uint param_3);
void FUN_005bdd00(byte *param_1,int param_2,uint param_3);
void FUN_005bde60(int param_1,undefined1 *param_2,uint param_3);
void FUN_005bdf90(undefined4 *param_1,undefined4 param_2);
bool FUN_005be004(uint *param_1);
undefined4 FUN_005be064(int param_1);
undefined4 FUN_005be0e8(int *param_1);
bool FUN_005be18c(int param_1);
undefined4 FUN_005be1e0(int param_1,int param_2);
ulonglong FUN_005be29c(int param_1,uint param_2);
void FUN_005be33c(int param_1,uint param_2);
void FUN_005be3d8(int param_1,uint param_2);
void FUN_005be478(uint *param_1,uint param_2);
void FUN_005be554(uint *param_1,uint param_2);
void * FUN_005be678(void *param_1,void *param_2,undefined4 param_3);
void * FUN_005be74c(void *param_1,void *param_2,undefined4 param_3);
void * FUN_005be820(void *param_1,void *param_2,undefined4 param_3);
void FUN_005be8f4(void *param_1,undefined4 param_2,undefined4 param_3);
void * FUN_005beb7c(void *param_1,void *param_2);
void * FUN_005bf0e8(void *param_1,undefined4 param_2,void *param_3);
void * FUN_005bf89c(void *param_1,undefined4 param_2,void *param_3,void *param_4);
void * FUN_005bfc70(void *param_1,void *param_2,int param_3,void *param_4);
undefined4 FUN_005bff34(void *param_1,undefined4 param_2);
void FUN_005c01d8(int param_1,uint param_2);
int FUN_005c032c(undefined4 param_1,undefined4 param_2);
void FUN_005c04f8(uint *param_1,uint param_2);
void * FUN_005c07f4(void *param_1,void *param_2,int param_3,uint *param_4);
void FUN_005c0c8c(void *param_1,void *param_2,undefined4 param_3,uint param_4);
void FUN_005c0ed4(undefined4 param_1,void *param_2);
undefined8 FUN_005c10d0(int param_1,int param_2);
undefined8 FUN_005c1118(int param_1,int param_2);
undefined8 FUN_005c1160(int param_1,int param_2);
undefined8 FUN_005c11a8(int param_1,int param_2);
void FUN_005c11f0(int param_1,ulonglong param_2);
void FUN_005c1278(int param_1,ulonglong param_2);
void FUN_005c1300(int param_1,int param_2);
void FUN_005c1338(int param_1,int param_2);
longlong FUN_005c1378(int param_1);
void FUN_005c13d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
longlong FUN_005c1500(int param_1,ulonglong param_2,ulonglong param_3);
undefined8 FUN_005c1540(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4, longlong param_5);
undefined8 FUN_005c16d8(void);
undefined8 FUN_005c16e0(void);
undefined4 FUN_005c1788(char *param_1);
undefined4 FUN_005c18d0(undefined4 param_1,int param_2);
