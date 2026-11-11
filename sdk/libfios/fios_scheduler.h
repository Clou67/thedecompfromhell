#pragma once
// sdk/libfios/fios_scheduler.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071ab28; /* 0x71ab28 */
extern undefined4 DAT_0071ab2c; /* 0x71ab2c */
extern undefined4 DAT_0071ab78; /* 0x71ab78 */
extern undefined4 DAT_0071abac; /* 0x71abac */
extern undefined4 DAT_0071abb0; /* 0x71abb0 */
extern undefined4 DAT_0071abb4; /* 0x71abb4 */
extern undefined4 DAT_0071abb8; /* 0x71abb8 */
extern pointer PTR_DAT_0071ab10; /* 0x71ab10 */
extern pointer PTR_DAT_0071ab14; /* 0x71ab14 */
extern pointer PTR_DAT_0071ab1c; /* 0x71ab1c */
extern pointer PTR_DAT_0071ab30; /* 0x71ab30 */
extern pointer PTR_DAT_0071ab58; /* 0x71ab58 */
extern pointer PTR_DAT_0071aba4; /* 0x71aba4 */
extern pointer PTR_DAT_0071abc8; /* 0x71abc8 */
extern pointer PTR_PTR_0071ab34; /* 0x71ab34 */
extern pointer PTR_PTR_0071ab4c; /* 0x71ab4c */
extern pointer PTR_PTR_0071ab70; /* 0x71ab70 */
extern pointer PTR_PTR_0071ab7c; /* 0x71ab7c */
extern pointer PTR_PTR_0071aba0; /* 0x71aba0 */
extern pointer PTR_PTR_0071aba8; /* 0x71aba8 */
extern pointer PTR_s_Filehandle_path_too_long_or_inva_0071ab98; /* 0x71ab98 */
extern pointer PTR_s_Must_call_FIOSInit_before_fios__0071ab74; /* 0x71ab74 */
extern pointer PTR_s_Scheduler_shutting_down_0071ab80; /* 0x71ab80 */
extern pointer PTR_s_fios_mediathread_0071ab6c; /* 0x71ab6c */
extern pointer PTR_s_fios_scheduler_0071ab48; /* 0x71ab48 */
extern pointer PTR_s_fios_worker_cond_0071ab68; /* 0x71ab68 */

// ---- functions
int FUN_0051cb74(uint param_1);
int FUN_0051cba4(int param_1);
uint FUN_0051cbc8(int param_1);
uint FUN_0051cbec(int param_1);
undefined4 get_default_fs(void);
void FUN_0051cc60(longlong param_1,int *param_2,longlong param_3);
void FUN_0051cda4(undefined8 param_1,int param_2);
void FUN_0051ce2c(int param_1,int param_2);
void FUN_0051ce5c(int param_1,undefined4 param_2);
void FUN_0051ced4(int param_1);
undefined4 FUN_0051cf28(int param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined1 param_5, undefined4 param_6);
uint * _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(uint param_1,undefined8 *param_2);
void FUN_0051d300(int param_1,int param_2);
void FUN_0051d32c(void);
undefined4 FUN_0051d33c(int param_1,int param_2,char *param_3,int *param_4,longlong *param_5,undefined4 param_6 );
void FUN_0051d588(int param_1,uint *param_2);
void FUN_0051da34(int param_1,undefined4 param_2);
undefined4 FUN_0051daac(int param_1,int param_2);
void FUN_0051dcc4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void FUN_0051e584(int param_1,ulonglong param_2);
void FUN_0051e6cc(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * FUN_0051ef8c(undefined4 param_1,undefined8 *param_2);
undefined4 FUN_0051f1ac(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4, undefined8 param_5,undefined4 param_6);
void FUN_0051f1f4(undefined4 *param_1);
void FUN_0051f3e0(undefined4 *param_1);
int FUN_0051fa5c(int param_1,uint param_2,undefined4 param_3);
void FUN_0051fd24(int param_1,undefined4 *param_2);
undefined4 * _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(int param_1,undefined4 *param_2);
ulonglong FUN_0051ff58(int param_1,ulonglong param_2);
undefined8 FUN_005202c8(undefined8 param_1,int param_2,int param_3,ulonglong param_4,undefined8 param_5, ulonglong param_6,int param_7);
undefined8 FUN_0052046c(undefined8 param_1,int param_2,int param_3,int param_4);
undefined8 FUN_005205b4(int param_1,undefined8 param_2,int param_3);
undefined8 _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(undefined4 param_1,int param_2,byte *param_3,ulonglong param_4,int *param_5);
undefined8 FUN_00520a28(undefined8 param_1,int param_2,byte *param_3,longlong param_4,undefined4 param_5);
undefined8 FUN_00520bd8(undefined8 param_1,int param_2,int param_3,undefined4 param_4);
undefined1 FUN_00520d80(undefined4 param_1,undefined4 param_2,char *param_3,undefined8 param_4, undefined8 param_5);
undefined8 FUN_00520e78(undefined8 param_1,int param_2,byte *param_3,longlong param_4,longlong param_5);
undefined8 FUN_005210c4(undefined8 param_1,int param_2,byte *param_3);
undefined8 FUN_00521228(undefined8 param_1,int param_2,byte *param_3);
undefined8 FUN_0052138c(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,longlong param_5, longlong param_6);
undefined8 FUN_0052157c(undefined8 param_1,int param_2,byte *param_3,undefined4 param_4,longlong param_5, longlong param_6);
undefined8 _ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE(undefined8 param_1,int param_2,byte *param_3,int param_4,uint param_5);
void filehandle_release(int param_1,int param_2);
undefined8 filehandle_close_setup(int param_1,undefined8 param_2,int param_3);
void FUN_00521d8c(int param_1,undefined4 *param_2,int param_3);
void FUN_00522104(int param_1);
void FUN_005224a4(int param_1,undefined4 *param_2,int *param_3);
void FUN_00522b14(int param_1,undefined4 *param_2);
void * FUN_00522c50(void *param_1);
void FUN_00522e78(int param_1,undefined4 *param_2,undefined4 param_3);
void FUN_005231cc(undefined8 param_1,undefined1 param_2);
void FUN_00523238(int param_1,int param_2);
void FUN_005237cc(undefined8 param_1,undefined8 param_2);
void FUN_005237dc(int param_1,undefined4 param_2);
void FUN_005238c0(undefined4 *param_1);
undefined4 FUN_00523f54(int param_1,undefined8 param_2,int param_3,int param_4);
void FUN_005240e4(int param_1);
void FUN_005241b8(int param_1);
void FUN_00525048(undefined8 param_1,undefined8 param_2);
void FUN_00525050(int param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4);
undefined8 FUN_00525184(int param_1,int param_2);
undefined4 read_req_setup (int param_1,int param_2,int param_3,undefined4 param_4,longlong param_5,longlong param_6);
undefined4 FUN_00525524(int param_1,undefined8 param_2,int param_3,undefined4 param_4,longlong param_5, longlong param_6);
void FUN_005257f8(int param_1,undefined4 param_2);
void FUN_005258cc(undefined4 *param_1);
void FUN_00525f48(int param_1);
