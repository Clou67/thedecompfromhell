#pragma once
// game/update/moby984.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004ccce4; /* 0x4ccce4 */
extern undefined4 DAT_008f4f24; /* 0x8f4f24 */
extern undefined4 DAT_008f4f28; /* 0x8f4f28 */
extern undefined4 DAT_008f4f2c; /* 0x8f4f2c */
extern undefined4 DAT_008f4f3c; /* 0x8f4f3c */
extern undefined4 DAT_008f4f4c; /* 0x8f4f4c */
extern undefined4 DAT_008f4f50; /* 0x8f4f50 */
extern undefined4 DAT_008f4f70; /* 0x8f4f70 */
extern undefined4 DAT_008f51a8; /* 0x8f51a8 */
extern undefined4 DAT_008f51b0; /* 0x8f51b0 */
extern undefined4 DAT_008f51bc; /* 0x8f51bc */
extern undefined4 DAT_008f51c8; /* 0x8f51c8 */
extern undefined4 DAT_008f51cc; /* 0x8f51cc */
extern undefined4 DAT_008f51d0; /* 0x8f51d0 */
extern undefined4 DAT_008f51d4; /* 0x8f51d4 */
extern undefined4 DAT_008f51d8; /* 0x8f51d8 */
extern undefined4 DAT_008f51dc; /* 0x8f51dc */
extern undefined4 DAT_008f5200; /* 0x8f5200 */
extern undefined4 DAT_008f5204; /* 0x8f5204 */
extern undefined4 DAT_008f5208; /* 0x8f5208 */
extern undefined4 DAT_008f520c; /* 0x8f520c */
extern undefined4 DAT_008f5210; /* 0x8f5210 */
extern undefined4 DAT_008f5250; /* 0x8f5250 */
extern undefined4 DAT_008f5254; /* 0x8f5254 */
extern undefined4 DAT_008f5270; /* 0x8f5270 */
extern undefined4 DAT_008f5278; /* 0x8f5278 */
extern undefined4 DAT_008f527c; /* 0x8f527c */
extern undefined4 DAT_008f52cc; /* 0x8f52cc */
extern undefined4 DAT_008f52f0; /* 0x8f52f0 */
extern undefined4 DAT_008f52f4; /* 0x8f52f4 */
extern undefined4 DAT_008f52f8; /* 0x8f52f8 */
extern undefined4 DAT_008f52fc; /* 0x8f52fc */
extern undefined4 DAT_008f5300; /* 0x8f5300 */
extern undefined4 DAT_008f5304; /* 0x8f5304 */
extern undefined4 DAT_008f5308; /* 0x8f5308 */
extern undefined4 DAT_008f5320; /* 0x8f5320 */
extern undefined4 DAT_008f5324; /* 0x8f5324 */
extern undefined4 DAT_008f5328; /* 0x8f5328 */
extern undefined4 DAT_008f532c; /* 0x8f532c */
extern undefined4 DAT_008f5334; /* 0x8f5334 */
extern undefined4 DAT_008f5338; /* 0x8f5338 */
extern undefined4 DAT_008f5388; /* 0x8f5388 */
extern undefined4 DAT_010e4c64; /* 0x10e4c64 */
extern undefined4 DAT_010e4cc0; /* no defined data */
extern undefined4 DAT_010e4d10; /* no defined data */
extern undefined4 DAT_010e4d60; /* no defined data */
extern undefined2 DAT_010e4dba; /* 0x10e4dba */
extern undefined2 DAT_010e4dbc; /* 0x10e4dbc */
extern undefined2 DAT_010e4dbe; /* 0x10e4dbe */

// ---- functions
void FUN_004caa88(undefined4 param_1,f32 *param_2,undefined4 param_3);
void FUN_004cab28(double param_1,int param_2,undefined4 *param_3,undefined4 *param_4, undefined8 param_5,int param_6);
void M984_004cabd8(int param_1);
void M984_004cb3e8(int param_1);
void M984_004cb930(void);
void M984_004cc120(undefined8 param_1);
void M984_004cc2f0(void);
void UpdateMoby_984(MobyInstance *moby);
void M984_004cc4a8(MobyInstance *param_1);
void M984_004ccd48(MobyInstance *moby);
void M984_004cdb40(void);
MobyInstance * M984_004cdb60(int param_1);
