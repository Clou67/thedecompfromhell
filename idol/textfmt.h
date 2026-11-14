#pragma once
// idol/textfmt.h
#include "types.h"

// ---- globals
extern undefined1 DAT_0159b84c; /* 0x159b84c */
extern undefined1 DAT_0159b88b; /* 0x159b88b */

// ---- functions
void TextFmt_Init(int param_1);
void TextFmt_Init_2(int param_1);
byte * TextFmt_ParseEscape(undefined8 param_1,int param_2,undefined1 *param_3);
ulonglong TextFmt_IsEscape(undefined8 param_1,byte *param_2);
undefined8 TextFmt_IsShortEscape(undefined8 param_1,char *param_2);
undefined8 TextFmt_IsEscapeCommand(undefined8 param_1,char *param_2,char param_3);
undefined8 TextFmt_IsEscape4(undefined8 param_1,char *param_2);
longlong TextFmt_Splice(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5);
char * TextFmt_Expand(int param_1,char *param_2);
undefined8 TextFmt_CallHandler(int param_1,byte *param_2);
undefined8 TextFmt_GetFloat(int param_1,undefined8 param_2,float *param_3);
void TextFmt_SetParamStr(int param_1,uint param_2,undefined8 param_3);
void TextFmt_SetParamInt(int param_1,uint param_2,int param_3);
void TextFmt_InitGlobal(void);
