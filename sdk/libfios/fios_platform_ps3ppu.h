#pragma once
// sdk/libfios/fios_platform_ps3ppu.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071ae24; /* 0x71ae24 */
extern undefined4 DAT_0071aeb4; /* 0x71aeb4 */
extern pointer PTR_DAT_0071ae20; /* 0x71ae20 */
extern pointer PTR_DAT_0071ae28; /* 0x71ae28 */
extern pointer PTR_DAT_0071ae2c; /* 0x71ae2c */
extern pointer PTR_DAT_0071ae64; /* 0x71ae64 */
extern pointer PTR_PTR_0071ae84; /* 0x71ae84 */
extern pointer PTR_s_sys_ppu_thread_join_failed_for_t_0071ae50; /* 0x71ae50 */
extern pointer PTR_s_sys_rwlock_create_failed_while_c_0071aeb0; /* 0x71aeb0 */
extern pointer PTR_s_sys_rwlock_destroy_failed_while_d_0071ae54; /* 0x71ae54 */
extern pointer PTR_s_sys_rwlock_rlock_failed_while_re_0071ae48; /* 0x71ae48 */
extern pointer PTR_s_sys_rwlock_runlock_failed_while_r_0071ae40; /* 0x71ae40 */
extern pointer PTR_s_sys_rwlock_wlock_failed_while_wr_0071ae38; /* 0x71ae38 */
extern pointer PTR_s_sys_rwlock_wunlock_failed_while_w_0071ae30; /* 0x71ae30 */

// ---- functions
longlong FUN_0052c8c4(void);
ulonglong FUN_0052c908(int param_1);
uint FUN_0052c91c(uint param_1,uint param_2);
undefined4 FUN_0052c93c(int param_1,longlong *param_2);
void FUN_0052ca3c(int param_1,int param_2);
void FUN_0052cb50(void);
void FUN_0052cb60(undefined4 param_1,undefined4 param_2);
void _ZN4cell4fios8platform10FIOSprintfEPKcz(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void FUN_0052cc20(int param_1);
void _ZN4cell4fios8platform6rwlock9writeLockEv(int param_1);
void FUN_0052cd7c(int param_1);
void FUN_0052ce28(int param_1);
void FUN_0052ced8(int param_1);
void FUN_0052cf74(int param_1);
void FUN_0052d018(int param_1);
void FUN_0052d080(int param_1);
void FUN_0052d0e8(int param_1);
void FUN_0052d19c(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0052d2c0(int param_1);
void FUN_0052d370(int param_1,undefined4 param_2);
void FUN_0052d478(int param_1,undefined4 param_2);
int FUN_0052d580(void);
undefined4 FUN_0052d654(ulonglong param_1);
undefined4 FUN_0052d728(void);
void FUN_0052d79c(void);
void FUN_0052d7c4(int param_1);
void FUN_0052d814(int param_1);
void FUN_0052d90c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6);
int FUN_0052da68(longlong param_1,undefined4 *param_2);
void FUN_0052db8c(int param_1);
void FUN_0052dc40(int param_1);
void FUN_0052dcf0(int param_1);
void lwmutex_unlock_checked(int param_1);
void lwmutex_lock_checked(int param_1);
void FUN_0052df14(int param_1);
void FUN_0052dfc4(int param_1,undefined4 param_2);
void FUN_0052e0b8(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0052e1dc(int param_1,undefined4 param_2);
uint FUN_0052e2d0(ulonglong param_1,longlong *param_2);
undefined4 FUN_0052e49c(int param_1,undefined8 param_2,longlong param_3);
void FUN_0052e5f8(int param_1);
undefined8 FUN_0052e69c(longlong param_1,longlong *param_2);
void FUN_0052e828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6);
longlong FUN_0052e984(longlong param_1);
