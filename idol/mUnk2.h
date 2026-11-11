#pragma once
// idol/mUnk2.h
#include "types.h"
#include "game/mobyutil.h"

// ---- globals
extern undefined4 DAT_008fac2c; /* 0x8fac2c */
extern undefined4 DAT_008fac50; /* 0x8fac50 */
extern undefined4 DAT_008fac54; /* 0x8fac54 */
extern pointer32 PTR_FUN_00710360; /* 0x710360 */
extern pointer32 PTR_FUN_00710368; /* 0x710368 */
extern pointer32 PTR_FUN_00710370; /* 0x710370 */

// ---- functions
namespace idol { void RegisterTrophyCtxHandle(longlong param_1); } 
void FUN_004f0094(int param_1);
namespace idol { void NPTrophyUnlock(int param_1,TROPHIES_ENUM param_2); } 
void FUN_004f03dc(int param_1,undefined8 param_2);
undefined1 FUN_004f04fc(int param_1,undefined8 param_2);
ulonglong FUN_004f0620(longlong param_1);
void FUN_004f06a4(void);
void FUN_004f06a8(void);
void FUN_004f06ac(void);
void FUN_004f0828(void);
undefined8 FUN_004f0ac8(undefined8 param_1,int param_2,int param_3,int param_4);
void FUN_004f0c84(void);
void FUN_004f0c98(int param_1);
void FUN_004f0cc0(int param_1);
void FUN_004f0ce8(int param_1,undefined1 param_2);
ulonglong FUN_004f0d50(longlong param_1,longlong param_2);
void FUN_004f0d9c(int param_1,int param_2);
undefined4 FUN_004f0de8(int param_1);
void FUN_004f0df4(int param_1);
void FUN_004f0e28(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void FUN_004f0e44(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void FUN_004f0e60(int param_1);
void FUN_004f0e6c(int param_1);
void FUN_004f0e80(int param_1);
void FUN_004f0e94(int param_1);
void FUN_004f0ea8(int param_1);
int FUN_004f0ebc(int param_1);
int FUN_004f0ed4(int param_1,int param_2);
void FUN_004f0eec(int param_1);
void FUN_004f0f10(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4, ulonglong param_5);
void FUN_004f0f4c(int param_1);
void FUN_004f0f68(int param_1,undefined4 param_2);
void FUN_004f0f98(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6,ulonglong param_7);
void FUN_004f1018(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
void FUN_004f1074(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
void FUN_004f10c8(int param_1,undefined4 param_2);
ulonglong * FUN_004f10f0(ulonglong *param_1,int param_2);
ulonglong * FUN_004f1144(ulonglong *param_1,int param_2);
void FUN_004f1198(int param_1,ulonglong param_2,ulonglong param_3);
void FUN_004f11d8(int param_1,ulonglong param_2,undefined4 param_3);
void FUN_004f121c(int param_1,int param_2,uint param_3);
void FUN_004f1268(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
void FUN_004f12bc(int param_1,ulonglong param_2,ulonglong param_3,uint *param_4,ulonglong param_5);
void FUN_004f1320(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
undefined4 FUN_004f137c(int param_1);
void FUN_004f13c8(undefined4 *param_1);
void FUN_004f13dc(int *param_1);
