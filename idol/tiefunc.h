#pragma once
// idol/tiefunc.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00903004; /* no defined data */
extern undefined4 DAT_00903008; /* no defined data */
extern undefined1 DAT_0159c369; /* 0x159c369 */
extern undefined1 DAT_0159c36a; /* 0x159c36a */
extern RenderingStep * DepthPass; /* 0x8fa414 */
extern RenderingStep * ForwardPass; /* 0x8fa41c */
extern pointer PTR_DAT_0071a904; /* 0x71a904 */
extern pointer PTR_DAT_0071a908; /* 0x71a908 */
extern undefined4 _DAT_0050c5c0; /* direct read */
extern undefined4 _DAT_0050c5d0; /* direct read */
extern undefined4 _DAT_0050d220; /* direct read */
extern undefined4 _DAT_0050d230; /* direct read */

// ---- functions
void DrawTie(int param_1,int *param_2);
void DrawTies(int param_1,int *param_2,longlong param_3);
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
undefined4 LinearHeap_CurrentCursor(void);
void LinearHeap_SetDefaultUnk0c(undefined4 param_1);
void LinearHeap_InitDefault(int param_1,uint param_2);
void LinearHeap_Init(int *param_1,int param_2,uint param_3,int param_4);
