#pragma once
// sdk/libfios/fios_op.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071aae8; /* 0x71aae8 */
extern pointer PTR_DAT_0071aaec; /* 0x71aaec */
extern pointer PTR_DAT_0071aaf0; /* 0x71aaf0 */
extern pointer PTR_DAT_0071aaf8; /* 0x71aaf8 */
extern pointer PTR_DAT_0071aafc; /* 0x71aafc */
extern pointer PTR_s_opWait_0071aaf4; /* 0x71aaf4 */

// ---- functions
longlong FUN_0051b750(longlong param_1);
void FUN_0051b784(int *param_1,int param_2,undefined4 *param_3,char param_4);
void FUN_0051b8c4(void);
void _ZN4cell4fios2op17initializeStaticsEPPNS0_8platform5mutexEPPNS2_4condE(int *param_1,int *param_2);
void FUN_0051bd00(int param_1,undefined4 param_2);
void _ZN4cell4fios2op5resetEv(int param_1);
void FUN_0051be00(int param_1,undefined4 param_2);
int _ZN4cell4fios2op16waitListDeadlineEjPKPS1_x(int param_1,int *param_2,longlong param_3);
undefined4 _ZN4cell4fios2op8syncWaitEPx(int param_1,undefined8 *param_2);
int FUN_0051c0ec(undefined8 param_1,int param_2,int param_3);
undefined4 FUN_0051c20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined4 FUN_0051c260(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined4 FUN_0051c2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined8 FUN_0051c304(int param_1);
undefined4 _ZN4cell4fios2op8callbackEhPv(int param_1,char param_2,undefined4 param_3);
uint FUN_0051c554(int param_1,int param_2);
