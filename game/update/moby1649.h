#pragma once
// game/update/moby1649.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007acb50; /* 0x7acb50 */
extern undefined4 DAT_007acb54; /* 0x7acb54 */
extern undefined4 DAT_007acb58; /* 0x7acb58 */
extern undefined4 DAT_007acb60; /* 0x7acb60 */
extern undefined4 DAT_007acb64; /* 0x7acb64 */
extern undefined4 DAT_007acb68; /* 0x7acb68 */
extern undefined4 DAT_007acb6c; /* no defined data */
extern undefined4 DAT_007acb70; /* no defined data */
extern undefined4 DAT_007acb84; /* no defined data */
extern undefined4 DAT_007acb88; /* no defined data */
extern undefined4 DAT_007acb94; /* 0x7acb94 */
extern undefined4 DAT_007acb98; /* 0x7acb98 */
extern undefined4 DAT_007acb9c; /* no defined data */
extern undefined4 DAT_007acba0; /* no defined data */
extern undefined4 DAT_007acba4; /* 0x7acba4 */
extern undefined4 DAT_007acba8; /* 0x7acba8 */
extern undefined4 DAT_007ad5d8; /* 0x7ad5d8 */
extern undefined4 DAT_007b2058; /* 0x7b2058 */
extern undefined4 DAT_007b597c; /* 0x7b597c */
extern undefined1 DAT_00fae870; /* 0xfae870 */
extern undefined4 DAT_00fae874; /* 0xfae874 */
extern undefined4 DAT_00fae878; /* 0xfae878 */
extern undefined4 DAT_00fae87c; /* 0xfae87c */
extern undefined4 DAT_00fae880; /* 0xfae880 */
extern undefined4 DAT_00fae884; /* 0xfae884 */
extern undefined4 DAT_00fae888; /* 0xfae888 */
extern undefined4 DAT_00fae88c; /* 0xfae88c */
extern undefined4 DAT_00fae890; /* 0xfae890 */
extern undefined4 DAT_00fae894; /* 0xfae894 */
extern undefined4 DAT_00fae898; /* 0xfae898 */
extern undefined4 DAT_00fae89c; /* 0xfae89c */
extern undefined4 DAT_00fae8a0; /* 0xfae8a0 */
extern undefined4 DAT_00fae8a4; /* 0xfae8a4 */
extern undefined4 DAT_00fae8a8; /* 0xfae8a8 */
extern undefined4 DAT_00fae8ac; /* 0xfae8ac */
extern undefined4 DAT_00fae8b0; /* no defined data */
extern pointer PTR_DAT_007ad5b8; /* 0x7ad5b8 */
extern pointer PTR_DAT_007ad5c0; /* 0x7ad5c0 */
extern pointer PTR_DAT_007ad5d0; /* 0x7ad5d0 */
extern undefined * PTR_DAT_007b1ff8; /* 0x7b1ff8 */
extern pointer PTR_DAT_007b2010; /* 0x7b2010 */
extern undefined * PTR_DAT_007b2040; /* 0x7b2040 */
extern undefined * PTR_DAT_007b58b0; /* 0x7b58b0 */
extern pointer PTR_DAT_007b58d0; /* 0x7b58d0 */
extern undefined * PTR_DAT_007b5910; /* 0x7b5910 */
extern pointer32 PTR_M1649_DrawScrollingTexLayers_0070ac70; /* 0x70ac70 */

// ---- functions
void M1649_002a6bd0(int param_1);
void M1649_002a6cc0(int param_1);
void M1649_002a6db0(int param_1);
void M1649_DrawScrollingTexLayers(void);
void M1649_002a74b0 (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6, int *param_7);
void M1649_002a76f8 (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5, undefined8 param_6,float *param_7);
void M1649_002a7850(longlong param_1);
void M1649_002a7910(longlong param_1);
void M1649_002a79d0(longlong param_1);
void UpdateMoby_1649(MobyInstance *moby);
void M1649_002a7df0(void);
