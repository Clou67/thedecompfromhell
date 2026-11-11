#pragma once
// game/update/moby994.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00658dd8; /* 0x658dd8 */
extern undefined4 DAT_00658ddc; /* 0x658ddc */
extern undefined4 DAT_008f53fc; /* 0x8f53fc */
extern undefined4 DAT_008f9040; /* no defined data */
extern undefined4 DAT_00900000; /* no defined data */
extern pointer32 PTR_M994_004cef50_0070f960; /* 0x70f960 */

// ---- functions
void M994_004ceb48(void);
void M994_004ceb50(int param_1);
void M994_004cef38(void);
void M994_004cef50(void);
void UpdateMoby_994(MobyInstance *moby);
