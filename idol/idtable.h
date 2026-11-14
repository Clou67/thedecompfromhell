#pragma once
// idol/idtable.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00902ec4; /* 0x902ec4 */

// ---- functions
void IdTable_Init(int param_1);
Localizer *Locale_GetInstance(void);
void IdTable_Init_2(int param_1);
void IdTable_Load(int param_1,char *param_2);
void Locale_Load(Localizer *param_1,void *param_2,int param_3,int (*param_4)(void),const char *param_5);
int IdTable_FindIndex(int param_1,int param_2);
undefined8 FUN_00503b10(undefined4 *param_1,int param_2);
char *Locale_GetString(Localizer *param_1,int param_2);
int IdTable_GetValue(int param_1,int param_2);
char *Locale_Convert(Localizer *param_1,char *param_2,int param_3,char *param_4,int param_5,int *param_6);
void STUB_00503df8(void);
void STUB_00503dfc(void);
