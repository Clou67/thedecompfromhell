#pragma once
// idol/mUnk2.h
#include "types.h"
#include "game/mobyutil.h"

// ---- globals
extern undefined4 DAT_008fac2c; /* 0x8fac2c */
extern undefined4 DAT_008fac50; /* 0x8fac50 */
extern undefined4 DAT_008fac54; /* 0x8fac54 */
extern pointer32 PTR_FUN_00710360; /* 0x710360 */
extern pointer32 PTR_FUN_00710368; /* 0x710368 */
extern pointer32 PTR_FUN_00710370; /* 0x710370 */

// ---- functions
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
void Packet_Init(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void Packet_Init_2(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void Packet_Rewind(int param_1);
void Packet_Align16(int param_1);
void Packet_Align128(int param_1);
void Packet_MarkC(int param_1);
void Packet_Mark10(int param_1);
int Packet_Alloc8(int param_1);
int Packet_Alloc(int param_1,int param_2);
void Packet_WriteCode0c(int param_1);
void Packet_WriteCode02(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4, ulonglong param_5);
void Packet_WriteZero(int param_1);
void Packet_WriteCode08(int param_1,undefined4 param_2);
void Packet_WriteCode04Ref(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6,ulonglong param_7);
void Packet_WriteCode04Cnt(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
void Packet_WriteCode04(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
void Packet_WriteCode06(int param_1,undefined4 param_2);
ulonglong * Packet_CloseTagEnd(ulonglong *param_1,int param_2);
ulonglong * Packet_CloseTag(ulonglong *param_1,int param_2);
void Packet_WriteCode0aAlign(int param_1,ulonglong param_2,ulonglong param_3);
void Packet_SetHeaderWord(int param_1,ulonglong param_2,undefined4 param_3);
void Packet_CopyQwords(int param_1,int param_2,uint param_3);
void Packet_WriteCode04_2(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
void Packet_WriteCode04CntPair(int param_1,ulonglong param_2,ulonglong param_3,uint *param_4,ulonglong param_5);
void Packet_WriteCode04Cnt_2(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,ulonglong param_5 ,ulonglong param_6);
undefined4 Packet_End(int param_1);
void Packet_Reset(undefined4 *param_1);
void ResetChannelRegs(int *param_1);
