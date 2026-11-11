#pragma once
// game/crt0.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071a32c; /* 0x71a32c */
extern undefined4 DAT_0071a364; /* 0x71a364 */
extern undefined4 DAT_0071a374; /* 0x71a374 */
extern pointer PTR_DAT_0071a328; /* 0x71a328 */
extern pointer PTR_DAT_0071a358; /* 0x71a358 */
extern pointer PTR_DAT_0071a36c; /* 0x71a36c */
extern pointer PTR_DAT_0071a370; /* 0x71a370 */
extern pointer PTR_DAT_0071a378; /* 0x71a378 */
extern pointer PTR_PTR_0071a35c; /* 0x71a35c */
extern pointer PTR_PTR_0071a360; /* 0x71a360 */
extern pointer PTR_PTR_0071a368; /* 0x71a368 */

// ---- functions
undefined4 GetArgc(void);
undefined4 GetArgv(void);
namespace idol { void ExitToSystem(void); } 
void _libc_cleanup(void);
void crt0_exit(void);
void _exit(int status);
void entry(ulonglong param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4, undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
