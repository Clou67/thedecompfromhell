#pragma once
// game/update/moby600.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00846844; /* 0x846844 */
extern undefined4 DAT_00846870; /* 0x846870 */
extern undefined4 DAT_00846874; /* 0x846874 */
extern undefined4 DAT_00846878; /* 0x846878 */
extern undefined4 DAT_00846880; /* 0x846880 */
extern undefined4 DAT_00846884; /* 0x846884 */
extern undefined4 DAT_00846888; /* 0x846888 */
extern undefined4 DAT_0084688c; /* no defined data */
extern undefined4 DAT_00846890; /* no defined data */
extern undefined4 DAT_008468a4; /* no defined data */
extern undefined4 DAT_008468a8; /* no defined data */
extern undefined4 DAT_008468b4; /* 0x8468b4 */
extern undefined4 DAT_008468b8; /* 0x8468b8 */
extern undefined4 DAT_008468bc; /* no defined data */
extern undefined4 DAT_008468c0; /* no defined data */
extern undefined4 DAT_008468c4; /* 0x8468c4 */
extern undefined4 DAT_008468c8; /* 0x8468c8 */
extern undefined4 DAT_008492b8; /* 0x8492b8 */
extern undefined4 DAT_0084db68; /* 0x84db68 */
extern undefined1 DAT_010c9ff0; /* 0x10c9ff0 */
extern undefined4 DAT_010c9ff4; /* 0x10c9ff4 */
extern undefined4 DAT_010c9ff8; /* 0x10c9ff8 */
extern undefined4 DAT_010c9ffc; /* 0x10c9ffc */
extern undefined4 DAT_010ca000; /* 0x10ca000 */
extern undefined4 DAT_010ca004; /* 0x10ca004 */
extern undefined4 DAT_010ca008; /* 0x10ca008 */
extern undefined4 DAT_010ca00c; /* 0x10ca00c */
extern undefined4 DAT_010ca010; /* 0x10ca010 */
extern undefined4 DAT_010ca014; /* 0x10ca014 */
extern undefined4 DAT_010ca018; /* 0x10ca018 */
extern undefined4 DAT_010ca01c; /* 0x10ca01c */
extern undefined4 DAT_010ca020; /* 0x10ca020 */
extern undefined4 DAT_010ca024; /* 0x10ca024 */
extern undefined4 DAT_010ca028; /* 0x10ca028 */
extern undefined4 DAT_010ca02c; /* 0x10ca02c */
extern undefined4 DAT_010ca030; /* no defined data */
extern undefined * PTR_DAT_00849238; /* 0x849238 */
extern pointer PTR_DAT_00849258; /* 0x849258 */
extern undefined * PTR_DAT_00849298; /* 0x849298 */
extern undefined * PTR_DAT_0084dab8; /* 0x84dab8 */
extern pointer PTR_DAT_0084dae4; /* 0x84dae4 */
extern undefined * PTR_DAT_0084db3c; /* 0x84db3c */
extern undefined * PTR_DAT_00853520; /* 0x853520 */
extern pointer PTR_DAT_00853554; /* 0x853554 */
extern undefined * PTR_DAT_008535bc; /* 0x8535bc */
extern pointer32 PTR_M600_003d5d30_0070d800; /* 0x70d800 */

// ---- functions
void M600_003d5a48(void);
void M600_003d5a60(int param_1);
void M600_003d5b50(int param_1);
void M600_003d5c40(int param_1);
void M600_003d5d30(void);
void M600_003d6340 (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6, int *param_7);
void M600_003d6588 (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5, undefined8 param_6,float *param_7);
void M600_003d66e0(longlong param_1);
void M600_003d67a0(longlong param_1);
void M600_003d6860(longlong param_1);
void UpdateMoby_600(MobyInstance *moby);
