#pragma once
// game/update/moby435.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00373200; /* 0x373200 */
extern undefined4 DAT_0037369c; /* 0x37369c */
extern undefined4 DAT_00841728; /* 0x841728 */
extern undefined4 DAT_0084174c; /* 0x84174c */
extern undefined4 DAT_00841750; /* 0x841750 */
extern undefined4 DAT_00841754; /* 0x841754 */
extern undefined4 DAT_00841758; /* 0x841758 */
extern undefined4 DAT_00841760; /* 0x841760 */
extern undefined4 DAT_0084176c; /* 0x84176c */
extern undefined4 DAT_00841770; /* 0x841770 */
extern undefined4 DAT_00841774; /* 0x841774 */
extern undefined4 DAT_00841778; /* 0x841778 */
extern undefined4 DAT_0084177c; /* 0x84177c */

// ---- functions
void M435_003731e8(void);
void M435_00373230(int param_1,longlong param_2,int param_3,int param_4);
Spline * UpdateMoby_435(MobyInstance *moby);
