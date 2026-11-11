#pragma once
// game/update/moby303.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00810abc; /* 0x810abc */
extern undefined4 DAT_00810ae0; /* 0x810ae0 */
extern undefined2 DAT_00810e70; /* 0x810e70 */
extern undefined4 DAT_00811110; /* no defined data */
extern undefined4 DAT_00811114; /* no defined data */
extern undefined4 DAT_008112e0; /* 0x8112e0 */
extern undefined4 DAT_008112e4; /* 0x8112e4 */
extern undefined4 DAT_008112e8; /* 0x8112e8 */
extern undefined4 DAT_00811580; /* 0x811580 */
extern undefined4 DAT_00811910; /* 0x811910 */
extern undefined4 DAT_00811914; /* 0x811914 */
extern undefined4 DAT_00811918; /* 0x811918 */
extern undefined4 DAT_0081191c; /* 0x81191c */
extern undefined4 DAT_00811bb0; /* 0x811bb0 */
extern undefined4 DAT_00811bb4; /* 0x811bb4 */
extern undefined4 DAT_00811bb8; /* 0x811bb8 */
extern undefined4 DAT_00811bbc; /* 0x811bbc */
extern undefined4 DAT_00811bc0; /* 0x811bc0 */
extern undefined4 DAT_00811bc4; /* 0x811bc4 */
extern undefined4 DAT_00811bc8; /* 0x811bc8 */
extern undefined4 DAT_00811c18; /* 0x811c18 */
extern undefined4 DAT_010bcab0; /* 0x10bcab0 */
extern undefined4 DAT_010bcab4; /* 0x10bcab4 */
extern undefined4 DAT_010bcc80; /* 0x10bcc80 */
extern undefined4 DAT_010bcc84; /* 0x10bcc84 */
extern undefined4 DAT_010bcc88; /* 0x10bcc88 */
extern undefined4 DAT_010bcc8c; /* 0x10bcc8c */
extern undefined4 DAT_010bd010; /* 0x10bd010 */
extern pointer32 PTR_M303_00339188_0070c130; /* 0x70c130 */

// ---- functions
void FUN_00338150(longlong param_1);
undefined8 FUN_003381c0(longlong param_1);
undefined8 FUN_00338438(longlong param_1);
void M303_003384f0(void);
void M303_00338568(undefined8 param_1,int param_2);
MobyInstance * FUN_00338ea8(int param_1);
void M303_00338f90(MobyInstance *moby);
void M303_00339188(int param_1);
void M303_003398f8(void);
MobyInstance * FUN_00339910(MobyInstance *param_1);
void UpdateMoby_303(MobyInstance *moby);
