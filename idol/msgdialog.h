#pragma once
// idol/msgdialog.h
#include "types.h"

// ---- globals
extern undefined4 DAT_01111644; /* 0x1111644 */
extern undefined4 DAT_0159b38c; /* no defined data */
extern pointer32 PTR_FUN_007100b0; /* 0x7100b0 */
extern undefined * PTR_PTR_00661910; /* 0x661910 */

// ---- functions
undefined8 MsgDialog_Update(double param_1,int *param_2);
undefined4 * MsgDialog_GetInstance(undefined8 param_1);
void SaveSystem_MessageCallback(int param_1);
void MsgDialog_OpenText(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8, undefined8 param_9);
undefined8 MsgDialog_Open(double param_1,int param_2,undefined8 param_3,int param_4,int param_5, undefined8 param_6,char param_7,undefined4 param_8,undefined4 param_9);
void MsgDialog_Abort(int param_1);
undefined8 MsgDialog_Close(int *param_1);
void StringTable_Init(int param_1,int param_2);
undefined4 StringTable_Get(int param_1,longlong param_2);
void MsgDialog_ExpandText(int *param_1);
