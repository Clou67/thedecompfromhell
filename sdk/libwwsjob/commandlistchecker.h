#pragma once
// sdk/libwwsjob/commandlistchecker.h
#include "types.h"

// ---- globals
extern undefined * PTR_DAT_0071a654; /* 0x71a654 */
extern undefined * PTR_DAT_0071a7b0; /* 0x71a7b0 */
extern undefined * PTR_s_false_0071a690; /* 0x71a690 */
extern pointer PTR_s_validSpuReadLoadCommands_0071a648; /* 0x71a648 */

// ---- functions
void CommandListChecker_Check(ulonglong *param_1,uint param_2,uint param_3);
void CommandListChecker_Fail(ulonglong param_1);
