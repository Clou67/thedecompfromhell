#pragma once
// game/rUnk.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007317dc; /* 0x7317dc */
extern undefined4 DAT_00731800; /* 0x731800 */
extern undefined4 DAT_00731804; /* 0x731804 */
extern undefined8 DAT_00731810; /* 0x731810 */
extern undefined8 DAT_00731820; /* 0x731820 */
extern undefined8 DAT_00731840; /* 0x731840 */
extern undefined8 DAT_00731850; /* 0x731850 */
extern undefined8 DAT_00731870; /* 0x731870 */
extern undefined8 DAT_00731880; /* 0x731880 */
extern undefined8 DAT_007318a0; /* 0x7318a0 */
extern undefined8 DAT_007318b0; /* 0x7318b0 */
extern undefined8 DAT_007318d0; /* 0x7318d0 */
extern undefined8 DAT_007318f0; /* 0x7318f0 */
extern undefined8 DAT_00731900; /* 0x731900 */
extern undefined8 DAT_00731910; /* 0x731910 */
extern undefined8 DAT_00731920; /* 0x731920 */
extern undefined8 DAT_00731930; /* 0x731930 */
extern undefined8 DAT_00731940; /* 0x731940 */
extern undefined8 DAT_00731960; /* 0x731960 */
extern undefined8 DAT_00731970; /* 0x731970 */
extern undefined8 DAT_00731980; /* 0x731980 */
extern undefined8 DAT_00731990; /* 0x731990 */
extern undefined8 DAT_007319a0; /* 0x7319a0 */
extern undefined4 DAT_007319fc; /* 0x7319fc */
extern undefined4 DAT_00a54ed0; /* 0xa54ed0 */
extern undefined4 DAT_00a54ed4; /* 0xa54ed4 */
extern undefined4 DAT_00a54ed8; /* 0xa54ed8 */
extern undefined4 DAT_00a54edc; /* 0xa54edc */
extern undefined4 DAT_00a54ee0; /* 0xa54ee0 */
extern undefined4 DAT_00a54ee4; /* 0xa54ee4 */
extern undefined4 DAT_00a54ee8; /* 0xa54ee8 */
extern undefined4 DAT_00a54eec; /* 0xa54eec */
extern undefined4 DAT_00a54ef0; /* 0xa54ef0 */
extern undefined4 DAT_00a54ef4; /* 0xa54ef4 */
extern undefined4 DAT_00a54ef8; /* 0xa54ef8 */
extern undefined4 DAT_00a54f00; /* 0xa54f00 */
extern u8 *g_pPacket; /* 0xe5aa58: write position in the GIF/VIF packet being built */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_S_UNKNOWN_STUBBED(void);
void ____DrawScreenEffect_BuildPacketA(double param_1,undefined8 param_2,undefined8 param_3);
short * ____DrawScreenEffect_DispatchCmd(short *param_1);
void ____DrawScreenEffect_WriteGifTag(undefined8 param_1,longlong param_2,longlong param_3);
void ____DrawScreenEffect_BuildPacketB(void);
void ____DrawScreenEffect_BuildBlendPacket(undefined8 param_1);
void DrawScreenEffect_152df8(int *param_1);
void InitGsRegPresets_153194(void);
void STUB_001534e8(...);
void STUB_001534ec(...);
void STUB_001534f0(...);
void STUB_001534f4(...);
void STUB_001534f8(...);
void STUB_001534fc(...);
void STUB_00153500(...);
void STUB_00153504(...);
void STUB_00153508(...);
