#pragma once
// sdk/libfios/fios_caching.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071aef4; /* 0x71aef4 */
extern undefined4 DAT_0071aef8; /* 0x71aef8 */
extern pointer PTR_DAT_0071aef0; /* 0x71aef0 */
extern pointer PTR_DAT_0071af00; /* 0x71af00 */
extern pointer PTR_DAT_0071af38; /* 0x71af38 */
extern pointer PTR_DAT_0071afd8; /* 0x71afd8 */
extern pointer PTR_PTR_0071aefc; /* 0x71aefc */
extern pointer PTR_PTR_0071af14; /* 0x71af14 */
extern pointer PTR_PTR_0071af24; /* 0x71af24 */
extern pointer PTR_PTR_0071af58; /* 0x71af58 */
extern pointer PTR_PTR_0071af84; /* 0x71af84 */
extern pointer PTR_s_FIOS_cache_got_a_write_error_clo_0071afd4; /* 0x71afd4 */
extern pointer PTR_s_FIOS_cache_got_a_write_error_dur_0071afd0; /* 0x71afd0 */
extern pointer PTR_s_FIOS_cache_index_mass_flush_fail_0071af74; /* 0x71af74 */
extern pointer PTR_s_FIOS_cache_lookup_no_existing_de_0071af28; /* 0x71af28 */
extern pointer PTR_s_FIOS_cache_lookup_no_existing_de_0071af2c; /* 0x71af2c */
extern pointer PTR_s_FIOS_failed_deleting_invalid_cac_0071af9c; /* 0x71af9c */
extern pointer PTR_s_FIOS_failed_reading_cache_header_0071af94; /* 0x71af94 */
extern pointer PTR_s_FIOS_failed_writing_cache_header_0071af90; /* 0x71af90 */
extern pointer PTR_s_HDD_cache_0071af30; /* 0x71af30 */
extern pointer PTR_s_RAM_cache_0071af34; /* 0x71af34 */
extern pointer PTR_s_Scheduler_cache_0071af88; /* 0x71af88 */
extern pointer PTR_s_cache_0071af04; /* 0x71af04 */
extern pointer PTR_s_cache_fillFunnel_0071af0c; /* 0x71af0c */
extern pointer PTR_s_cache_rwlock_0071af08; /* 0x71af08 */
extern pointer PTR_s_creation_date_changed_0071afb8; /* 0x71afb8 */
extern pointer PTR_s_mod_date_changed_0071afb4; /* 0x71afb4 */
extern pointer PTR_s_schedulercache_0071afa0; /* 0x71afa0 */
extern pointer PTR_s_stat_failed_0071afb0; /* 0x71afb0 */
extern undefined1 stack0xfffffd94[16]; /* stack slot, not a real global */
extern undefined1 stack0xfffffe64[16]; /* stack slot, not a real global */
extern undefined1 stack0xffffff14[16]; /* stack slot, not a real global */
extern undefined1 stack0xffffff24[16]; /* stack slot, not a real global */

// ---- functions
undefined4 * FUN_005309c8(int param_1,int param_2,int param_3,undefined4 *param_4);
bool FUN_00530ac4(undefined8 param_1,int param_2,int param_3,int param_4);
void FUN_00530b14(void);
ulonglong FUN_00530b18(undefined8 param_1,int param_2);
int FUN_00530b28(int param_1,int param_2);
uint FUN_00530b80(int param_1,int param_2);
void FUN_00530d30(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4);
uint FUN_00530efc(int param_1,int *param_2);
undefined4 FUN_00530f80(undefined8 param_1,int param_2,longlong param_3);
int FUN_00531144(int *param_1,undefined8 param_2);
void FUN_0053126c(undefined4 *param_1);
void FUN_00531338(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4);
void FUN_005314e0(undefined4 *param_1);
void FUN_0053159c(undefined4 *param_1);
undefined4 FUN_00531658(int param_1,char *param_2);
void FUN_00531798(int param_1,uint param_2);
void FUN_00531a30(int param_1);
void FUN_00531b40(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4);
void FUN_00531ce8(int *param_1,uint param_2,undefined4 param_3);
int FUN_00531e64(int param_1,int *param_2);
int FUN_00531f64(int param_1,int *param_2);
void FUN_00532080(undefined4 *param_1);
void FUN_00532134(undefined4 *param_1);
void FUN_005321e8(int param_1,int param_2);
void FUN_00532468(int *param_1,int param_2,longlong param_3,longlong param_4);
undefined4 FUN_00532660(int *param_1,undefined4 param_2);
undefined1 FUN_00532848(undefined4 param_1,undefined8 param_2);
void FUN_005328c0(int *param_1);
int FUN_0053299c(undefined8 param_1,undefined8 param_2);
void FUN_00532b9c(int *param_1,longlong param_2);
void FUN_00532d1c(int param_1,undefined4 param_2);
void FUN_00532e54(undefined4 *param_1);
void FUN_00532f40(undefined4 *param_1);
void FUN_00532ff4(undefined4 *param_1);
undefined8 FUN_005330a8(int param_1,undefined4 param_2,int param_3,void *param_4,int param_5);
void FUN_00533140(int param_1);
undefined4 FUN_005337e8(int *param_1,int param_2,uint param_3,longlong param_4,int param_5);
void FUN_00533ae0(int param_1);
void FUN_00533e7c(int param_1,uint param_2);
void FUN_005342d4(undefined4 *param_1);
undefined4 FUN_005344e8(int param_1);
void FUN_00534d38(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,longlong param_5, undefined1 param_6,undefined1 param_7,undefined8 param_8);
void FUN_005350b0(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,longlong param_5, undefined1 param_6,undefined1 param_7,undefined8 param_8);
void FUN_00535428(undefined4 *param_1);
void FUN_0053562c(undefined4 *param_1);
undefined4 FUN_00535840(int param_1,int param_2,uint param_3,int param_4,int param_5);
undefined4 FUN_00535d38(int *param_1,int param_2,undefined4 *param_3,uint param_4);
undefined4 FUN_0053713c(int param_1,int param_2,uint param_3,int param_4,int param_5);
undefined1 FUN_0053750c(int *param_1,int param_2,undefined4 *param_3,int param_4);
void FUN_00537bc4(int *param_1,int param_2);
