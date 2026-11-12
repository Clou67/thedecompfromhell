#pragma once
// game/sUnk.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00734adc; /* 0x734adc */
extern undefined4 DAT_00a56eb0; /* 0xa56eb0 */
extern undefined4 DAT_00a56eb4; /* 0xa56eb4 */
extern undefined4 DAT_00a56ebc; /* 0xa56ebc */
extern undefined4 DAT_00a56ec0; /* 0xa56ec0 */
extern undefined4 DAT_00a56ec8; /* 0xa56ec8 */
extern undefined4 DAT_00a56ecc; /* no defined data */
extern undefined4 DAT_00a572c4; /* no defined data */
extern undefined4 g_IndexedBufferSlots; /* 0xa56ec4 */

// ---- functions
void SECTION_HEADER_UNKNOWN(void);
void STUB_001655a0(...);
void InitIndexedBuffers(void);
int AllocIndexedBuffer (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4);
undefined8 WriteIndexedBuffer(undefined8 param_1,longlong param_2,int param_3,int param_4);
undefined4 GetIndexedBufferSize(longlong param_1);
undefined8 ReadIndexedBuffer(void *param_1,longlong param_2,int param_3,int param_4);
void STUB_001658d4(...);
