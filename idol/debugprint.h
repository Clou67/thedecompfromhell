#pragma once
// idol/debugprint.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0065f620; /* no defined data */
extern undefined4 DAT_00902ea0; /* 0x902ea0 */
extern undefined4 DAT_00902ea4; /* 0x902ea4 */
extern undefined4 DAT_00902eb8; /* 0x902eb8 */
extern undefined4 DAT_01593358; /* no defined data */
extern pointer PTR_PTR_00902ea8; /* 0x902ea8 */
extern pointer PTR_PTR_00902eac; /* 0x902eac */
extern pointer PTR_PTR_00902eb0; /* 0x902eb0 */
extern pointer PTR_PTR_00902eb4; /* 0x902eb4 */

// ---- functions
int32_t Debug_PostBreak(void);
void Debug_VPrintLevel1(undefined8 param_1,undefined8 param_2);
namespace idol { int32_t print_mem_error (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8); } 
void Debug_SetAssertHandler(undefined4 param_1);
void Debug_SetHandlerEb4(undefined *param_1);
void Debug_SetHandlerEb0(undefined *param_1);
void Debug_SetHandlerEac(undefined *param_1);
void Debug_SetPrintHandler(undefined *param_1);
void Debug_SetHandlers(undefined *param_1,undefined *param_2,undefined *param_3,undefined4 param_4);
void Debug_SetHandlers_2(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4, undefined4 param_5);
void Debug_CallAssertHandler(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void print_tty(const char *param_1,...);
void Debug_Printf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void Debug_VPrintLevel3(undefined8 param_1,undefined8 param_2);
void Debug_PrintfLevel3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
int32_t Idol_Break(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void Debug_VPrintEb0(undefined8 param_1);
int32_t Debug_BreakPrintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void Debug_VPrintEb4(undefined1 param_1);
void Debug_PrintfEb4(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void print_tty2(char *format,...);
void Debug_PrintfEb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void Debug_PrintfEb0_2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined4 Debug_GetLevelA0(void);
undefined4 Debug_GetLevelA4(void);
void Debug_SetLevelA0(undefined4 param_1);
void Debug_SetLevelA4(undefined4 param_1);
int32_t Debug_PutsA(undefined8 param_1,char *param_2);
int32_t Debug_PutsB(undefined8 param_1,char *param_2);
