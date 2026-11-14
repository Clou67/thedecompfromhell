#pragma once
// sdk/libwwsjob/audit.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071a614; /* 0x71a614 */
extern pointer PTR_PTR_0071a5e4; /* 0x71a5e4 */
extern pointer PTR_s_WwsJob__0071a5e0; /* 0x71a5e0 */

// ---- functions
void SpuAudit_Ctor(undefined4 *param_1);
void SpuAudit_Init(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5);
void SpuAudit_SetHeader0(undefined4 *param_1,undefined4 param_2);
void SpuAudit_SetHeader10(int *param_1,undefined4 param_2);
void SpuAudit_SetSize(int *param_1,int param_2);
void SpuAudit_ClearSlot(int *param_1,int param_2,longlong param_3);
void SpuAudit_WaitClearSlot(int *param_1,int param_2,longlong param_3);
int SpuAudit_SlotIndex(int *param_1,int param_2,int param_3);
undefined4 SpuAudit_GetSlot(int *param_1,int param_2,longlong param_3);
void SpuAudit_WaitSlot(int *param_1,int param_2,longlong param_3);
void SpuAudit_ClearSpu(int *param_1,int param_2);
uint SpuAudit_RegisterId(int param_1,int param_2);
void SpuAudit_AddFormat(int param_1,undefined2 param_2,short param_3,undefined4 param_4,undefined4 param_5 );
void SpuAudit_FindFormat(int param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4);
void TextBuf_PutChar(int param_1,undefined1 param_2);
void TextBuf_PutHex(int param_1,uint param_2);
void TextBuf_PutPadding(int param_1,int param_2);
void SpuAudit_FormatEntry(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined4 *param_4);
void SpuAudit_AddHandler(int param_1,int param_2);
void SpuAudit_CheckOverflow(uint *param_1,int param_2,ulonglong param_3,int param_4,undefined4 *param_5, int param_6);
void SpuAudit_Process(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4, undefined4 param_5);
void TextBuf_Flush(int param_1);
void SpuAudit_PrintfThunk(void);
int TextBuf_Printf(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void SpuAudit_ResetSpu(int *param_1,int param_2);
void SpuAudit_ProcessAll(int *param_1,undefined4 param_2,undefined4 param_3);
uint SpuAudit_RegisterIdWithFormat(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void SpuAudit_FormatEntry_2(ulonglong param_1,undefined4 param_2,ulonglong param_3,undefined4 *param_4);
void SpuAudit_Init_2(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5);
void SpuAudit_Init_3(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5);
void SpuAudit_Reset(undefined4 *param_1);
void SpuAudit_Reset_2(undefined4 *param_1);
void SpuAudit_Reset_3(undefined4 *param_1);
void SpuAudit_Print(int param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,uint param_5, ushort param_6,uint param_7,ulonglong *param_8);
