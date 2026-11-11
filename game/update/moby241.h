#pragma once
// game/update/moby241.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0030d048; /* 0x30d048 */
extern undefined4 DAT_007ff6bc; /* 0x7ff6bc */
extern undefined4 DAT_007ff6f0; /* 0x7ff6f0 */
extern undefined4 DAT_007ff6f4; /* 0x7ff6f4 */
extern undefined4 DAT_007ff6f8; /* 0x7ff6f8 */
extern undefined4 DAT_007ff6fc; /* 0x7ff6fc */
extern undefined4 DAT_007ff700; /* 0x7ff700 */
extern undefined4 DAT_007ff704; /* 0x7ff704 */
extern undefined4 DAT_007ff708; /* 0x7ff708 */

// ---- functions
void M241_0030d034(void);
void UpdateMoby_241(MobyInstance *moby);
