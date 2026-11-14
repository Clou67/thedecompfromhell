#pragma once
// idol/idm.h
#include "types.h"

// ---- functions
void IdmHeader_Init(undefined1 *param_1);
void IdmHeader_Init_2(undefined1 *param_1);
void IdmHeader_Init_3(undefined1 *param_1);
void IdmHeader_Set(undefined1 *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
void IdmHeader_Set_2(undefined1 *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
int IdmHeader_Data(int param_1);
int IdmHeader_DataSize(int param_1);
undefined8 IdmHeader_IsValid(char *param_1);
undefined2 IdmHeader_Type(int param_1);
ulonglong IdmHeader_IsType(int param_1,int param_2);
undefined4 IdmHeader_Size(int param_1);
void IdmRef_Init(undefined4 *param_1);
void IdmRef_Init_2(undefined4 *param_1);
undefined4 IdmRef_Get(undefined4 *param_1);
undefined8 IdmRef_Set(undefined4 *param_1,undefined8 param_2);
int IdmRef_Next(int *param_1);
int IdmIter_Prev(int *param_1);
undefined4 IdmIter_SeekLast(undefined4 *param_1,ulonglong param_2);
