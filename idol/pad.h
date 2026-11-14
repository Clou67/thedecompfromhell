#pragma once
// idol/pad.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0065aab0; /* no defined data */
extern char *DAT_008fabd0; /* 0x8fabd0: &Cheats[4] */ /* type set in global_types.tsv */
extern undefined4 DAT_009664ac; /* no defined data */
extern pointer32 PTR_FUN_00710138; /* 0x710138 */

// ---- functions
void PadDriver_UpdateStickState(int param_1);
void Pad_Initialize(void);
void Pad_Terminate(void);
void PadDriver_Update(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
namespace idol { void Pad_PS_Update(int param_1,ulonglong param_2,int param_3); } 
ulonglong PadDriver_IsConnected(void);
