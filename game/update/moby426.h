#pragma once
// game/update/moby426.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0036b874; /* 0x36b874 */
extern undefined4 DAT_00841140; /* 0x841140 */
extern undefined4 DAT_00841144; /* 0x841144 */
extern undefined4 DAT_00841148; /* 0x841148 */
extern undefined4 DAT_0084114c; /* 0x84114c */
extern undefined4 DAT_00841150; /* 0x841150 */
extern undefined4 DAT_00841154; /* 0x841154 */
extern undefined4 DAT_00841158; /* 0x841158 */
extern undefined4 DAT_0084115c; /* 0x84115c */
extern undefined4 DAT_00841160; /* 0x841160 */
extern undefined4 DAT_00841164; /* 0x841164 */
extern undefined4 DAT_00841168; /* 0x841168 */
extern undefined4 DAT_0084116c; /* 0x84116c */
extern undefined4 DAT_00841170; /* 0x841170 */
extern undefined4 DAT_00841174; /* 0x841174 */
extern undefined4 DAT_00841178; /* 0x841178 */
extern undefined4 DAT_0084117c; /* 0x84117c */
extern undefined4 DAT_00841180; /* 0x841180 */
extern undefined4 DAT_00841184; /* 0x841184 */
extern undefined4 DAT_00841188; /* 0x841188 */
extern undefined4 DAT_0084118c; /* 0x84118c */
extern undefined4 DAT_00841190; /* 0x841190 */
extern undefined4 DAT_00841194; /* 0x841194 */
extern undefined4 DAT_00841198; /* 0x841198 */
extern undefined4 DAT_0084119c; /* 0x84119c */
extern undefined4 DAT_008411a0; /* 0x8411a0 */
extern undefined4 DAT_008411a4; /* 0x8411a4 */
extern undefined4 DAT_008411a8; /* 0x8411a8 */
extern undefined4 DAT_008411ac; /* 0x8411ac */
extern undefined4 DAT_008411b0; /* 0x8411b0 */
extern undefined4 DAT_008411b4; /* 0x8411b4 */
extern undefined4 DAT_008411b8; /* 0x8411b8 */
extern undefined4 DAT_008411bc; /* 0x8411bc */
extern undefined4 DAT_008411c0; /* 0x8411c0 */
extern undefined4 DAT_008411c4; /* 0x8411c4 */
extern undefined4 DAT_008411c8; /* 0x8411c8 */
extern undefined4 DAT_008411cc; /* 0x8411cc */
extern undefined4 DAT_008411d0; /* 0x8411d0 */
extern undefined4 DAT_008411d4; /* 0x8411d4 */
extern undefined4 DAT_008411d8; /* 0x8411d8 */
extern undefined4 DAT_008411dc; /* 0x8411dc */
extern undefined4 DAT_008411e0; /* 0x8411e0 */
extern undefined4 DAT_008411e4; /* 0x8411e4 */
extern undefined4 DAT_008411e8; /* 0x8411e8 */
extern undefined4 DAT_008411ec; /* 0x8411ec */
extern undefined4 DAT_008411f0; /* 0x8411f0 */
extern undefined4 DAT_008411f4; /* 0x8411f4 */
extern undefined4 DAT_008411f8; /* 0x8411f8 */
extern undefined4 DAT_008411fc; /* 0x8411fc */
extern undefined4 DAT_00841200; /* 0x841200 */
extern undefined4 DAT_00841204; /* 0x841204 */
extern undefined4 DAT_00841208; /* 0x841208 */
extern undefined4 DAT_0084120c; /* 0x84120c */
extern undefined4 DAT_00841210; /* 0x841210 */
extern undefined4 DAT_00841214; /* 0x841214 */
extern undefined4 DAT_00841218; /* 0x841218 */
extern undefined4 DAT_0084121c; /* 0x84121c */
extern undefined4 DAT_00841220; /* 0x841220 */
extern undefined4 DAT_00841224; /* 0x841224 */
extern undefined4 DAT_00841228; /* 0x841228 */
extern undefined4 DAT_0084122c; /* 0x84122c */
extern undefined4 DAT_00841234; /* 0x841234 */
extern undefined4 DAT_00841238; /* 0x841238 */
extern undefined4 DAT_0084123c; /* 0x84123c */
extern undefined4 DAT_00841240; /* 0x841240 */
extern undefined4 DAT_00841244; /* 0x841244 */
extern undefined4 DAT_00841248; /* 0x841248 */
extern undefined4 DAT_0084124c; /* 0x84124c */
extern undefined4 DAT_00841250; /* 0x841250 */
extern undefined4 DAT_00841254; /* 0x841254 */
extern undefined4 DAT_00841258; /* 0x841258 */
extern undefined4 DAT_010c5134; /* 0x10c5134 */
extern undefined4 DAT_010c5138; /* 0x10c5138 */
extern undefined4 DAT_010c513c; /* 0x10c513c */
extern undefined4 DAT_010c5140; /* 0x10c5140 */
extern undefined4 DAT_010c5144; /* 0x10c5144 */
extern undefined4 DAT_010c5148; /* 0x10c5148 */
extern undefined4 DAT_010c514c; /* 0x10c514c */
extern undefined4 DAT_010c5150; /* 0x10c5150 */
extern pointer PTR_DAT_00840000; /* 0x840000 */

// ---- functions
void M426_0036ad20(double param_1,double param_2,undefined8 param_3,int param_4);
void M426_0036ae68(longlong param_1,int param_2);
MobyInstance * M426_0036b008 (double param_1,double param_2,double param_3,float *param_4,int param_5);
void M426_0036b630(MobyInstance *param_1,longlong param_2);
void M426_0036b8c8(MobyInstance *param_1,float *param_2);
void UpdateMoby_426(MobyInstance *moby);
