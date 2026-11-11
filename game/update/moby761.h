#pragma once
// game/update/moby761.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00871d80; /* 0x871d80 */
extern undefined4 DAT_00871d84; /* 0x871d84 */
extern undefined4 DAT_00871d90; /* no defined data */
extern undefined4 DAT_00871d94; /* no defined data */
extern undefined4 DAT_00871d98; /* no defined data */
extern undefined1 DAT_00871dd0; /* 0x871dd0 */
extern undefined4 DAT_00871dd4; /* no defined data */
extern undefined4 DAT_00871dd8; /* no defined data */
extern undefined4 DAT_00871e00; /* no defined data */
extern undefined4 DAT_00871e04; /* no defined data */
extern undefined4 DAT_00871e08; /* no defined data */
extern undefined4 DAT_00871f80; /* 0x871f80 */
extern undefined4 DAT_00871fe0; /* no defined data */
extern undefined4 DAT_00871fe4; /* no defined data */
extern undefined4 DAT_00872040; /* no defined data */
extern undefined4 DAT_008720a0; /* no defined data */
extern undefined4 DAT_00872124; /* 0x872124 */
extern undefined4 DAT_008732ec; /* 0x8732ec */
extern undefined4 DAT_0087333c; /* 0x87333c */
extern undefined4 DAT_0087339c; /* 0x87339c */
extern undefined4 DAT_008733fc; /* 0x8733fc */
extern undefined4 DAT_0087345c; /* 0x87345c */
extern undefined4 DAT_010ccec4; /* 0x10ccec4 */
extern undefined4 DAT_010d5810; /* no defined data */
extern undefined4 DAT_010d7d90; /* no defined data */
extern undefined4 DAT_010d86f0; /* no defined data */
extern undefined4 DAT_010d99b8; /* 0x10d99b8 */
extern undefined4 DAT_010d99bc; /* 0x10d99bc */
extern undefined4 DAT_010d99c0; /* 0x10d99c0 */
extern pointer PTR_DAT_008732e0; /* 0x8732e0 */
extern pointer32 PTR_M761_00450c28_0070e850; /* 0x70e850 */

// ---- functions
void M761_0044fea8(ulonglong param_1);
void M761_00450c14(void);
void M761_00450c28(void);
void UpdateMoby_761(MobyInstance *moby);
