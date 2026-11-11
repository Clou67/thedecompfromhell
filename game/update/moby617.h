#pragma once
// game/update/moby617.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00850000; /* no defined data */
extern undefined4 DAT_00853b70; /* 0x853b70 */
extern undefined4 DAT_00853b84; /* 0x853b84 */
extern undefined4 DAT_00853b88; /* 0x853b88 */
extern undefined4 DAT_00853b8c; /* 0x853b8c */
extern undefined4 DAT_00853b90; /* 0x853b90 */
extern undefined4 DAT_00853b94; /* 0x853b94 */
extern undefined4 DAT_00853b98; /* 0x853b98 */
extern undefined4 DAT_00853b9c; /* 0x853b9c */
extern undefined4 DAT_00853ba0; /* 0x853ba0 */
extern undefined4 DAT_00853ba4; /* 0x853ba4 */
extern undefined4 DAT_00853ba8; /* 0x853ba8 */
extern undefined4 DAT_00853bac; /* 0x853bac */
extern undefined4 DAT_00853bb0; /* 0x853bb0 */
extern undefined4 DAT_00853bb4; /* 0x853bb4 */
extern undefined4 DAT_00853bb8; /* 0x853bb8 */
extern undefined4 DAT_00853c90; /* 0x853c90 */
extern undefined4 DAT_00853c94; /* 0x853c94 */
extern undefined4 DAT_00853ca0; /* 0x853ca0 */
extern undefined4 DAT_00853ca4; /* 0x853ca4 */
extern undefined4 DAT_00853ca8; /* 0x853ca8 */
extern undefined4 DAT_00853cac; /* 0x853cac */
extern undefined4 DAT_00853cb0; /* 0x853cb0 */
extern undefined4 DAT_00853d00; /* 0x853d00 */

// ---- functions
void M617_003deb50 (double param_1,undefined8 param_2,double param_3,double param_4);
void M617_003def78(double param_1,double param_2);
void M617_003df398(double param_1,double param_2,double param_3);
void M617_003df8dc(void);
void M617_003dfa30(int param_1);
void M617_003e12b0(double param_1,double param_2,double param_3);
void M617_003e15f0(double param_1,double param_2,double param_3);
void M617_003e19a0(double param_1,double param_2);
void M617_003e2010(void);
void UpdateMoby_617(MobyInstance *moby);
