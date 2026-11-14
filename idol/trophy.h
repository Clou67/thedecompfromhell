#pragma once
// idol/trophy.h
#include "types.h"
#include "game/mobyutil.h"

// ---- globals
extern undefined4 DAT_008fac2c; /* 0x8fac2c */
extern undefined4 DAT_008fac50; /* 0x8fac50 */
extern undefined4 DAT_008fac54; /* 0x8fac54 */
extern pointer32 PTR_FUN_00710360; /* 0x710360 */
extern pointer32 PTR_FUN_00710368; /* 0x710368 */
extern pointer32 PTR_FUN_00710370; /* 0x710370 */
extern undefined4 TrophyMgr; /* 0x8fabdc */

// ---- functions
void sceNpTrophyDestroyHandle(u32 param_1);
undefined8 TrophyMgr_DestroyContext(int param_1,undefined8 param_2,undefined8 param_3,char param_4);
namespace idol { void RegisterTrophyCtxHandle(u32 param_1); } 
void TrophyMgr_LoadGameInfo(int param_1);
namespace idol { void NPTrophyUnlock(int param_1,TROPHIES_ENUM param_2); } 
void TrophyMgr_Unlock(int param_1,undefined8 param_2);
undefined1 TrophyMgr_GetTrophyInfo(int param_1,undefined8 param_2);
ulonglong TrophyMgr_PopPending(longlong param_1);
void STUB_004f06a4(void);
void STUB_004f06a8(void);
void thr_npTrophy_register(void);
void thr_NPTrophyUnlock(void);
undefined8 TrophyMgr_StatusCallback(undefined8 param_1,int param_2,int param_3,int param_4);
void SECTION_HEADER_TROPHY(void);
void TrophyQueue_Init(u8 *param_1);
void TrophyQueue_Init_2(int param_1);
void TrophyQueue_Push(int param_1,undefined1 param_2);
ulonglong TrophyQueue_At(longlong param_1,longlong param_2);
void TrophyQueue_Remove(int param_1,int param_2);
undefined4 TrophyQueue_Count(int param_1);
void TrophyQueue_Reset(u8 *param_1);
