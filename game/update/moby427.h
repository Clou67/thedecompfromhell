#pragma once
// game/update/moby427.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008412a8; /* 0x8412a8 */
extern undefined4 DAT_008412dc; /* no defined data */
extern undefined4 DAT_00841450; /* 0x841450 */
extern undefined4 DAT_00841454; /* 0x841454 */
extern undefined4 DAT_0084145c; /* 0x84145c */
extern undefined4 DAT_00841460; /* 0x841460 */
extern undefined4 DAT_00841464; /* 0x841464 */
extern undefined4 DAT_00841468; /* 0x841468 */
extern undefined4 DAT_0084146c; /* 0x84146c */
extern undefined4 DAT_00841470; /* 0x841470 */
extern undefined4 DAT_00841474; /* 0x841474 */
extern undefined4 DAT_00841478; /* 0x841478 */
extern undefined4 DAT_0084147c; /* 0x84147c */

// ---- functions
void M427_0036da54(void);
void M427_0036dac0 (double param_1,double param_2,undefined8 param_3,undefined4 param_4, undefined4 param_5,undefined8 param_6,undefined8 param_7,int param_8);
void M427_0036e080 (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4);
void M427_0036e218(undefined8 param_1);
void M427_0036e3c4(MobyInstance *param_1);
void UpdateMoby_427(MobyInstance *moby);
