#pragma once
// sdk/libfios/fios_media_ps3ppu.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071ad58; /* 0x71ad58 */
extern undefined4 DAT_0071adb8; /* 0x71adb8 */
extern undefined * PTR_DAT_0071ace8; /* 0x71ace8 */
extern pointer PTR_DAT_0071ad28; /* 0x71ad28 */
extern pointer PTR_DAT_0071ad2c; /* 0x71ad2c */
extern pointer PTR_DAT_0071ad30; /* 0x71ad30 */
extern pointer PTR_DAT_0071ad38; /* 0x71ad38 */
extern pointer PTR_DAT_0071ad40; /* 0x71ad40 */
extern pointer PTR_DAT_0071ad50; /* 0x71ad50 */
extern pointer PTR_DAT_0071ad80; /* 0x71ad80 */
extern pointer PTR_DAT_0071ad94; /* 0x71ad94 */
extern pointer PTR_DAT_0071ad98; /* 0x71ad98 */
extern pointer PTR_DAT_0071ade0; /* 0x71ade0 */
extern pointer PTR_PTR_0071ad6c; /* 0x71ad6c */
extern pointer PTR_PTR_0071ad90; /* 0x71ad90 */
extern pointer PTR_s_cellFsClosedir_0071ad9c; /* 0x71ad9c */
extern pointer PTR_s_cellFsOpen_0071ad44; /* 0x71ad44 */
extern undefined * PTR_s_cellFsOpendir_0071ada0; /* 0x71ada0 */
extern pointer PTR_s_cellFsSdataOpenByFd_0071ad4c; /* 0x71ad4c */
extern pointer PTR_s_cellFsSdataOpen_0071ad48; /* 0x71ad48 */
extern pointer PTR_s_cellFsStat_0071ad3c; /* 0x71ad3c */
extern pointer PTR_s_ps3HDDLock_0071ad34; /* 0x71ad34 */
extern pointer PTR_s_ps3media_g_fdIndirectionRWLock_0071ad8c; /* 0x71ad8c */
extern pointer PTR_s_ps3media_m_dirLock_0071ad70; /* 0x71ad70 */
extern pointer PTR_s_ps3media_m_fdLock_0071ad74; /* 0x71ad74 */

// ---- functions
int FUN_00527e54(undefined8 param_1,undefined8 param_2,uint param_3);
undefined8 FUN_00527e78(undefined8 param_1,uint param_2);
uint FUN_00527f58(ulonglong param_1);
int FUN_00527fc0(undefined8 param_1,int param_2);
undefined * FUN_00528140(void);
int * FUN_005281b4(int param_1);
void FUN_00528240(int param_1,int param_2);
void FUN_005282d8(void);
void FUN_005282e8(void);
void FUN_005282f8(int param_1);
void FUN_0052835c(int param_1,undefined4 param_2);
uint FUN_005283d4(int param_1);
int FUN_00528454(int param_1,char *param_2,int param_3);
undefined4 FUN_00528598(undefined8 param_1,undefined4 *param_2,undefined8 param_3);
void FUN_00528914(undefined4 *param_1,undefined8 param_2);
void FUN_00528b98(void);
void FUN_00528c7c(undefined4 *param_1,undefined8 param_2);
void FUN_00528f00(int param_1);
uint FUN_00528fc8(int param_1,int param_2,undefined4 param_3);
void FUN_00529580(undefined4 *param_1);
void FUN_00529628(undefined4 *param_1);
void FUN_005296b8(undefined4 *param_1);
void FUN_00529748(int param_1,undefined4 param_2);
undefined4 FUN_00529808(int param_1,undefined4 param_2,int param_3,undefined4 param_4);
void FUN_0052a048(int param_1,int param_2);
