#pragma once
// game/update/moby1212.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007666c0; /* 0x7666c0 */
extern undefined4 DAT_00766740; /* 0x766740 */
extern undefined4 DAT_00766744; /* 0x766744 */
extern undefined4 DAT_00766748; /* 0x766748 */
extern undefined4 DAT_0076674c; /* 0x76674c */
extern undefined4 DAT_00766760; /* 0x766760 */
extern undefined4 DAT_00766764; /* 0x766764 */
extern undefined4 DAT_00766768; /* 0x766768 */
extern undefined4 DAT_0076676c; /* 0x76676c */
extern undefined4 DAT_00766770; /* 0x766770 */
extern undefined4 DAT_00766774; /* 0x766774 */
extern undefined4 DAT_00766778; /* 0x766778 */
extern undefined4 DAT_0076677c; /* 0x76677c */
extern undefined4 DAT_00766780; /* 0x766780 */
extern undefined4 DAT_00766784; /* 0x766784 */
extern undefined4 DAT_00766788; /* 0x766788 */
extern undefined4 DAT_0076678c; /* 0x76678c */
extern undefined4 DAT_00766790; /* 0x766790 */
extern pointer32 PTR_M1212_00204ad0_00709400; /* 0x709400 */
extern ShipsKilledStruct ShipsKilledCounts; /* 0x96c9dc */

// ---- functions
void M1212_00204ab4(void);
void M1212_00204ad0(int param_1);
void M1212_00204be8(MobyInstance *param_1);
void M1212_00204cd8(undefined4 param_1);
void UpdateMoby_1212(MobyInstance *moby);
