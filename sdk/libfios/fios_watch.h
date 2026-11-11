#pragma once
// sdk/libfios/fios_watch.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071abf8; /* 0x71abf8 */
extern undefined4 DAT_0071abfc; /* 0x71abfc */
extern pointer PTR_DAT_0071abf4; /* 0x71abf4 */
extern pointer PTR_DAT_0071ac04; /* 0x71ac04 */
extern pointer PTR_DAT_0071ac14; /* 0x71ac14 */
extern pointer PTR_DAT_0071ac9c; /* 0x71ac9c */
extern pointer PTR_PTR_0071acb8; /* 0x71acb8 */
extern pointer PTR_s_CELL_FIOS_ERROR_ACCESS_0071ac84; /* 0x71ac84 */
extern pointer PTR_s_CELL_FIOS_ERROR_BADCALLBACK_0071ac7c; /* 0x71ac7c */
extern pointer PTR_s_CELL_FIOS_ERROR_BADHANDLE_0071ac64; /* 0x71ac64 */
extern pointer PTR_s_CELL_FIOS_ERROR_BADOFFSET_0071ac78; /* 0x71ac78 */
extern pointer PTR_s_CELL_FIOS_ERROR_BADPARAM_0071ac68; /* 0x71ac68 */
extern pointer PTR_s_CELL_FIOS_ERROR_BADPATH_0071ac60; /* 0x71ac60 */
extern pointer PTR_s_CELL_FIOS_ERROR_CANCELLED_0071ac6c; /* 0x71ac6c */
extern pointer PTR_s_CELL_FIOS_ERROR_CANTIMMED_0071ac44; /* 0x71ac44 */
extern pointer PTR_s_CELL_FIOS_ERROR_DECOMPRESSION_0071ac88; /* 0x71ac88 */
extern pointer PTR_s_CELL_FIOS_ERROR_EOF_0071ac70; /* 0x71ac70 */
extern pointer PTR_s_CELL_FIOS_ERROR_INPROGRESS_0071ac50; /* 0x71ac50 */
extern pointer PTR_s_CELL_FIOS_ERROR_MEDIAGONE_0071ac98; /* 0x71ac98 */
extern pointer PTR_s_CELL_FIOS_ERROR_NOBLOCK_0071ac90; /* 0x71ac90 */
extern pointer PTR_s_CELL_FIOS_ERROR_NOMEM_0071ac74; /* 0x71ac74 */
extern pointer PTR_s_CELL_FIOS_ERROR_NOPATH_0071ac94; /* 0x71ac94 */
extern pointer PTR_s_CELL_FIOS_ERROR_NOTREADY_0071ac58; /* 0x71ac58 */
extern pointer PTR_s_CELL_FIOS_ERROR_PLATFORM_0071ac80; /* 0x71ac80 */
extern pointer PTR_s_CELL_FIOS_ERROR_READONLY_0071ac8c; /* 0x71ac8c */
extern pointer PTR_s_CELL_FIOS_ERROR_TIMEOUT_0071ac5c; /* 0x71ac5c */
extern pointer PTR_s_CELL_FIOS_ERROR_UNKNOWNCALLBACKE_0071ac54; /* 0x71ac54 */
extern pointer PTR_s_CELL_FIOS_NOERROR_0071ac4c; /* 0x71ac4c */
extern pointer PTR_s_UNKNOWN_0071acb4; /* 0x71acb4 */
extern pointer PTR_s_UNKNOWN_ERROR_0071ac48; /* 0x71ac48 */
extern pointer PTR_s_accept_0071acc4; /* 0x71acc4 */
extern pointer PTR_s_completed_0071aca4; /* 0x71aca4 */
extern pointer PTR_s_execute_0071acc0; /* 0x71acc0 */

// ---- functions
void FUN_005260ac(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4, undefined4 param_5);
void FUN_005261c4(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4);
void FUN_005262e4(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4);
void FUN_00526404(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0052651c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0052663c(int param_1);
void FUN_00526774(int param_1,undefined8 param_2,undefined8 param_3);
void FUN_005268b4(int param_1,undefined8 param_2,undefined8 param_3);
void FUN_005269f4(int param_1,undefined8 param_2,undefined8 param_3);
void FUN_00526b34(int param_1);
void FUN_00526c44(int param_1,undefined4 param_2);
void FUN_00526d58(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
void FUN_00526e80(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
void _ZN4cell4fios5watch22ReportEventOpCompletedEPKNS0_2opE(int param_1);
void FUN_005272e4(int param_1,undefined4 param_2);
void FUN_0052757c(undefined8 param_1);
void FUN_00527584(undefined8 param_1);
void FUN_0052758c(int param_1,undefined8 param_2,undefined8 param_3);
void FUN_005276cc(int param_1,undefined8 param_2,undefined8 param_3);
void FUN_0052780c(int param_1);
void FUN_00527944(int param_1);
void FUN_00527a7c(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
void FUN_00527ba4(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
void FUN_00527ccc(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
void FUN_00527e3c(undefined8 *param_1);
