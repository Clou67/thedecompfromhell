#pragma once
// sdk/libwwsjob/spumodule.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071a3b8; /* 0x71a3b8 */
extern pointer PTR_s_No_name_0071a3bc; /* 0x71a3bc */

// ---- functions
void SpuModule_Init(undefined4 *param_1);
void SpuModule_Init_2(undefined4 *param_1);
int SpuModule_End(int *param_1);
uint SpuModule_IsValid(int *param_1);
void STUB_004f4f84(void);
ulonglong SpuModule_Guid(int *param_1);
int * SpuModuleCache_Find(int param_1);
int * SpuModuleCache_FindByGuid(ulonglong param_1);
int * SpuModuleCache_FindFree(void);
void SpuModuleCache_Release(int param_1);
void SpuModuleCache_Register(int param_1,undefined *param_2);
undefined4 SpuModuleCache_Load(uint param_1,ulonglong *param_2,undefined1 *param_3,undefined4 param_4,int *param_5);
ulonglong SpuModule_SizeKB(int *param_1);
void SpuModule_Release(int *param_1);
void SpuModule_Release_2(int *param_1);
uint * SpuModuleCache_Lock(ulonglong param_1);
undefined4 SpuModuleCache_GetName(ulonglong param_1,undefined1 *param_2,undefined4 param_3);
int * SpuModule_Assign(int *param_1,int *param_2);
void SpuModule_Copy(int *param_1,int *param_2);
void SpuModule_Copy_2(int *param_1,int *param_2);
void SpuModule_Create(int *param_1,int param_2,int param_3,undefined *param_4);
void SpuModule_Create_2(int *param_1,int param_2,int param_3,undefined *param_4);
