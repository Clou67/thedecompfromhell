#pragma once
// game/update/moby1405.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0079deec; /* 0x79deec */
extern undefined4 DAT_0079df10; /* 0x79df10 */
extern undefined4 DAT_0079ee58; /* 0x79ee58 */
extern undefined4 DAT_0079ee5c; /* 0x79ee5c */
extern undefined4 DAT_0079ee60; /* 0x79ee60 */
extern undefined4 DAT_0079ee64; /* 0x79ee64 */
extern undefined4 DAT_0079ee68; /* 0x79ee68 */
extern undefined4 DAT_0079ee6c; /* 0x79ee6c */
extern undefined4 DAT_0079ee70; /* 0x79ee70 */
extern pointer PTR_DAT_0079ee28; /* 0x79ee28 */
extern pointer PTR_DAT_0079ee30; /* 0x79ee30 */
extern pointer PTR_DAT_0079ee38; /* 0x79ee38 */
extern pointer PTR_DAT_0079ee40; /* 0x79ee40 */
extern undefined * PTR_DAT_0079ee48; /* 0x79ee48 */
extern pointer32 PTR_M1405_0026e3e0_0070a3b0; /* 0x70a3b0 */

// ---- functions
void M1405_0026e3a4(void);
void M1405_0026e3e0(int param_1);
void UpdateMoby_1405(MobyInstance *moby);
