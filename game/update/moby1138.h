#pragma once
// game/update/moby1138.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007649fc; /* 0x7649fc */
extern undefined4 DAT_00764a00; /* 0x764a00 */
extern undefined4 DAT_00764a04; /* 0x764a04 */
extern undefined4 DAT_00764a08; /* 0x764a08 */
extern undefined4 DAT_00764a0c; /* 0x764a0c */
extern undefined4 DAT_00764a10; /* 0x764a10 */
extern undefined4 DAT_00764a2c; /* 0x764a2c */
extern undefined4 DAT_00764a84; /* 0x764a84 */
extern undefined4 DAT_00ef26e8; /* 0xef26e8 */
extern undefined4 DAT_00ef26ec; /* 0xef26ec */
extern undefined4 DAT_00ef26f0; /* 0xef26f0 */

// ---- functions
void M1138_001db948(int param_1);
void FUN_001dbce8(MobyInstance *param_1);
undefined8 FUN_001dbd38(int param_1);
void M1138_001dbd90(void);
void UpdateMoby_1138(MobyInstance *moby);
