#pragma once
// idol/hwsystem_ps3.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00905738; /* no defined data */
extern undefined4 DAT_01111580; /* no defined data */
extern pointer PTR_DAT_008fa624; /* 0x8fa624 */

// ---- functions
void HWSystem_InitMainHeap(int param_1);
void HWSystem_GetSystemTime(void);
int HWSystem_GetSystemLanguage(int param_1);
void HWSystem_GetVideoModeName(ulonglong param_1);
undefined8 FUN_004e63c8(void);
undefined8 FUN_004e63d0(void);
int32_t HWSystem_PrintMemInfo(undefined8 param_1,undefined8 param_2);
undefined4 FUN_004e642c(void);
void HWSystem_GetHeap(int *param_1,int *param_2,int *param_3);
void HWSystem_InitSpurs(void);
void HWSystem_InitNetwork(void);
void HWSystem_ShutdownSpurs(void);
void HWSystem_MapMemory(int param_1);
void HWSystem_AllocAddressSpace(u8 *param_1,int param_2,int param_3,int param_4);
void HWSystem_FreeTempMemory(int param_1);
undefined4 HWSystem_CreateMemContainer(int param_1,int param_2);
void HWSystem_DestroyMemContainer(int param_1,int param_2);
