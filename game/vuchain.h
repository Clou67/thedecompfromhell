#pragma once
// game/vuchain.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00735524; /* no defined data */
extern undefined4 DAT_0073a768; /* 0x73a768 */
extern undefined4 DAT_00a10738; /* 0xa10738 */
extern undefined4 DAT_00a10740; /* 0xa10740 */
extern undefined4 DAT_00a108dc; /* 0xa108dc */
extern undefined4 DAT_00a108e0; /* 0xa108e0 */
extern undefined4 DAT_00e5aa50; /* 0xe5aa50 */
extern undefined4 DAT_00e5aa54; /* 0xe5aa54 */
extern undefined4 DAT_00e5aa5c; /* 0xe5aa5c */
extern undefined4 DAT_00e5aa68; /* 0xe5aa68 */
extern undefined8 DAT_010ee310; /* 0x10ee310 */
extern undefined4 DAT_0159b368; /* 0x159b368 */
extern undefined4 DAT_0159b36c; /* 0x159b36c */

// ---- functions
void ____Unused_VuChain_SetBufSize_10000(void);
int VU0_loadMicroProgram(int *param_1,undefined8 *param_2);
void STUB_00174bd8(...);
void VU1_setBufSizeByLevel(void);
void VU1_initChain(void);
void VU1_swapChain(void);
void STUB_00174cf0(...);
void STUB_00174cf4(...);
void VU1_addDataRef(undefined1 param_1,undefined1 param_2);
void VU1_addDataRefToLoc(undefined8 param_1,undefined1 param_2,undefined8 param_3);
void VU1_addDataDirect(undefined8 param_1,undefined8 param_2,ulonglong param_3);
void VU1_skipData(undefined8 param_1,longlong param_2);
void VU1_addVIFcode(undefined1 param_1);
void SetGSReg(int param_1,longlong param_2);
void VU1_addDataInLine(longlong param_1);
void VU1_setScissor(int left,int right,int top,int bot);
void VU1_dumpChain(void);
void STUB_001754c0(...);
void STUB_001754c4(...);
void STUB_001754c8(...);
void STUB_001754cc(...);
void STUB_001754d0(...);
void STUB_001754d4(...);
void STUB_001754d8(...);
void STUB_001754dc(...);
void STUB_001754e0(...);
undefined8 STUB_001754e4_RET_0(...);
void DMAC_BEIS_Handler(void);
void STUB_00175554(...);
