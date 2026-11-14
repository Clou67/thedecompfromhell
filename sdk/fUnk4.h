#pragma once
// sdk/fUnk4.h
#include "types.h"

// ---- globals
extern pointer PTR_DAT_0071af38; /* 0x71af38 */
extern pointer PTR_DAT_0071afd8; /* 0x71afd8 */
extern pointer PTR_DAT_0071afe4; /* 0x71afe4 */
extern pointer PTR_s_FIOS_cache_got_a_write_error_clo_0071afd4; /* 0x71afd4 */
extern pointer PTR_s_FIOS_cache_got_a_write_error_dur_0071afd0; /* 0x71afd0 */
extern pointer PTR_s_creation_date_changed_0071afb8; /* 0x71afb8 */
extern pointer PTR_s_mod_date_changed_0071afb4; /* 0x71afb4 */
extern pointer PTR_s_stat_failed_0071afb0; /* 0x71afb0 */
extern undefined1 stack0xfffffd94[16]; /* stack slot, not a real global */
extern undefined1 stack0xfffffe64[16]; /* stack slot, not a real global */
extern undefined1 stack0xffffff14[16]; /* stack slot, not a real global */

// ---- functions
void fios_SchedulerCacheInit(undefined4 *param_1);
undefined4 _ZN4cell4fios14schedulercache13getCacheBlockEPNS0_13mediaioparamsEiPhPNS0_5cache12blockrequestE(int param_1,int param_2,uint param_3,int param_4,int param_5);
undefined4 _ZN4cell4fios14schedulercache19fillCacheAndCopyOutEPNS0_13mediaioparamsEPNS0_5cache12blockrequestEPh(int *param_1,int param_2,undefined4 *param_3,uint param_4);
undefined4 _ZN4cell4fios8ramcache13getCacheBlockEPNS0_13mediaioparamsEiPhPNS0_5cache12blockrequestE(int param_1,int param_2,uint param_3,int param_4,int param_5);
undefined1 _ZN4cell4fios8ramcache19fillCacheAndCopyOutEPNS0_13mediaioparamsEPNS0_5cache12blockrequestEPh(int *param_1,int param_2,undefined4 *param_3,int param_4);
void FUN_00537bc4(int *param_1,int param_2);
void handle_destroy(undefined8 param_1);
void FUN_005390e8(undefined8 param_1);
void FUN_00539124(int param_1,undefined4 param_2);
void FUN_005391f4(int param_1,undefined4 param_2);
