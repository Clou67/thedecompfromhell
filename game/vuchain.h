#pragma once
// game/vuchain.h
#include "types.h"

// ---- types
typedef unsigned long long    qword;

// ---- globals
extern undefined4 DAT_0073a768; /* 0x73a768 */
extern u32 *g_D1Chcr; /* 0x159b368: the PS2 DMA channel 1 CHCR register, printed on a bus error */ /* type set in global_types.tsv */
extern u32 *g_D1Tadr; /* 0x159b36c: channel 1 TADR */ /* type set in global_types.tsv */
extern u8 *g_VifBuffers[2]; /* 0xa108dc: the two chain buffers' memory (copied into vu1_DmaBuffers) */ /* type set in global_types.tsv */
extern u8 *vu1_DmaBuffers[2]; /* 0xe5aa50: the two VU1 chain buffers, built and sent in turn (DL name) */ /* type set in global_types.tsv */
extern int vu1_bufId; /* 0xe5aa68: which of vu1_DmaBuffers is being built (DL name) */ /* type set in global_types.tsv */
extern u8 *vu1_bufLimit; /* 0xa10738: end of the chain buffer being built, less g_Vu1Reserve (DL name, role guessed) */ /* type set in global_types.tsv */
extern u8 *vu1_bufLimitSafe; /* 0xa10740: 0x2000 before vu1_bufLimit (invented name) */ /* type set in global_types.tsv */
extern int vu1_buf_table[19]; /* 0x735524: vu1_bufSize per level (DL name) */ /* type set in global_types.tsv */
extern u8 *vu1_chainEnd; /* 0xe5aa5c: where the chain just finished ends (the swap keeps it; invented name) */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_VUCHAIN(void);
int VU0_loadMicroProgram(u64 *program, u64 *dest);
void STUB_00174bd8(...);
void VU1_setBufSizeByLevel(void);
void VU1_initChain(void);
void VU1_swapChain(void);
void STUB_00174cf0(...);
void STUB_00174cf4(...);
void VU1_addDataRef(void *data, int qwc);
void VU1_addDataRefToLoc(int vuAddr, void *data, int qwc);
void VU1_addDataDirect(int vuAddr, void *data, int qwc);
void VU1_skipData(int vuAddr, int qwc);
void VU1_addVIFcode(u32 code);
void SetGSReg(int id, u64 value);
void VU1_addDataInLine(int qwc);
void VU1_setScissor(int left, int right, int top, int bot);
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
u64 STUB_001754e4_RET_0(...);
void DMAC_BEIS_Handler(void);
void STUB_00175554(...);
