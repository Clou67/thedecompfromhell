#pragma once
// game/update/moby1523.h
#include "types.h"

// ---- globals
extern undefined4 DAT_000ec2d0; /* 0xec2d0 */
extern undefined4 DAT_000ec414; /* 0xec414 */
extern undefined4 DAT_00728f74; /* 0x728f74 */
extern undefined4 DAT_0095cf24; /* 0x95cf24 */
extern undefined8 DAT_0095cf28; /* 0x95cf28 */
extern undefined4 DAT_0095cf34; /* 0x95cf34 */
extern undefined8 DAT_0095cf38; /* 0x95cf38 */

// ---- functions
MobyInstance * Spawn_Moby1523_Blueball2(undefined8 param_1,Vec4 *param_2);
void Spawn_Moby1523_GC_Blueball (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void M1523_Blueball_HandleDeletion(void);
void UpdateMoby_1523_GC_Blueball(MobyInstance *moby);
