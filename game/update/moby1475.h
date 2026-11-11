#pragma once
// game/update/moby1475.h
#include "types.h"

// ---- globals
extern undefined4 DAT_000eb650; /* 0xeb650 */
extern undefined4 DAT_00728ee0; /* 0x728ee0 */
extern undefined4 DAT_00728f50; /* 0x728f50 */

// ---- functions
void SECTION_HEADER_MOBY1475(void);
void Spawn_Moby1475_KaleboRocket (double param_1,double param_2,undefined4 param_3,f32 *param_4,undefined4 param_5);
void UpdateMoby_1475_KaleboRace_Rocket(MobyInstance *moby);
void M1475_000ec248(void);
undefined4 M1475_000ec260(MobyInstance *param_1);
uint M1475_000ec290(MobyInstance *param_1,uint param_2,uint param_3);
