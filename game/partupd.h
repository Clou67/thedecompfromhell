#pragma once
// game/partupd.h
#include "types.h"

// ---- types
struct PartInstance {
    char iClass;
    byte type;
    byte tex;
    byte gsAlpha;
    uint color;
    char rot;
    char drawDist;
    short timer;
    float scale;
    struct Vec4 pos;
    int update[8];
};

struct partupd { /* PlaceHolder Class Structure */
};

// ---- globals
extern undefined4 DAT_00120ef4; /* 0x120ef4 */
extern undefined4 DAT_0012b0f0; /* 0x12b0f0 */
extern undefined4 DAT_00132d58; /* 0x132d58 */
extern undefined4 DAT_0071f408; /* 0x71f408 */
extern undefined4 DAT_00729698; /* 0x729698 */
extern undefined4 DAT_007296bc; /* 0x7296bc */
extern undefined4 DAT_007296c0; /* 0x7296c0 */
extern undefined4 DAT_007296c4; /* 0x7296c4 */
extern undefined4 DAT_007296c8; /* 0x7296c8 */
extern undefined4 DAT_007296cc; /* 0x7296cc */
extern undefined4 DAT_007296d0; /* 0x7296d0 */
extern undefined4 DAT_007296d4; /* 0x7296d4 */
extern undefined4 DAT_007296d8; /* 0x7296d8 */
extern undefined4 DAT_007296dc; /* 0x7296dc */
extern undefined4 DAT_007296e0; /* 0x7296e0 */
extern undefined4 DAT_007296e4; /* 0x7296e4 */
extern undefined4 DAT_007296e8; /* 0x7296e8 */
extern undefined4 DAT_007296ec; /* 0x7296ec */
extern undefined4 DAT_007296f0; /* 0x7296f0 */
extern undefined4 DAT_007296f4; /* 0x7296f4 */
extern undefined4 DAT_007296f8; /* 0x7296f8 */
extern undefined4 DAT_007296fc; /* 0x7296fc */
extern undefined4 DAT_00729700; /* 0x729700 */
extern undefined4 DAT_00729704; /* 0x729704 */
extern undefined4 DAT_00729708; /* 0x729708 */
extern undefined4 DAT_00729718; /* 0x729718 */
extern undefined4 DAT_0072971c; /* 0x72971c */
extern undefined4 DAT_00729720; /* 0x729720 */
extern undefined4 DAT_00729724; /* 0x729724 */
extern undefined4 DAT_0072973c; /* 0x72973c */
extern undefined4 DAT_00729740; /* 0x729740 */
extern undefined4 DAT_00729744; /* 0x729744 */
extern undefined4 DAT_00729748; /* 0x729748 */
extern undefined4 DAT_0072974c; /* 0x72974c */
extern undefined4 DAT_00729750; /* 0x729750 */
extern undefined4 DAT_00729754; /* 0x729754 */
extern undefined4 DAT_00729758; /* 0x729758 */
extern undefined4 DAT_007f7f7f; /* no defined data */
extern undefined4 DAT_00806040; /* no defined data */
extern undefined4 DAT_00810001; /* no defined data */
extern undefined4 DAT_008fafff; /* no defined data */
extern undefined4 DAT_00a52744; /* 0xa52744 */
extern undefined4 DAT_00a52808; /* 0xa52808 */
extern undefined4 DAT_00a52810; /* 0xa52810 */
extern undefined4 DAT_00a52814; /* 0xa52814 */
extern undefined4 DAT_00a52818; /* 0xa52818 */
extern undefined4 DAT_00a52820; /* 0xa52820 */
extern undefined4 DAT_00a52824; /* 0xa52824 */
extern undefined4 DAT_00a52828; /* 0xa52828 */
extern undefined4 DAT_00a52830; /* 0xa52830 */
extern undefined4 DAT_00a52834; /* 0xa52834 */
extern undefined4 DAT_00a52838; /* 0xa52838 */
extern undefined4 DAT_00a5283c; /* 0xa5283c */
extern undefined4 DAT_00a52840; /* 0xa52840 */
extern undefined4 DAT_00a52844; /* 0xa52844 */
extern undefined4 DAT_00a5284c; /* 0xa5284c */
extern undefined4 DAT_00a52850; /* 0xa52850 */
extern undefined4 DAT_00a52858; /* 0xa52858 */
extern undefined4 DAT_00a5285c; /* 0xa5285c */
extern undefined4 DAT_00a52860; /* 0xa52860 */
extern undefined4 DAT_00a52864; /* 0xa52864 */
extern undefined4 DAT_00a52868; /* 0xa52868 */
extern undefined4 DAT_00a5286c; /* 0xa5286c */
extern undefined4 DAT_00a52870; /* 0xa52870 */
extern undefined4 DAT_00a52874; /* 0xa52874 */
extern undefined4 DAT_00a52878; /* 0xa52878 */
extern undefined4 DAT_00a5287c; /* 0xa5287c */
extern undefined4 DAT_00a5288c; /* 0xa5288c */
extern undefined4 DAT_00a52890; /* 0xa52890 */
extern undefined4 DAT_00a52894; /* 0xa52894 */
extern undefined4 DAT_00a52898; /* 0xa52898 */
extern undefined4 DAT_00a5289c; /* 0xa5289c */
extern undefined4 DAT_00a528a0; /* 0xa528a0 */
extern undefined4 DAT_00a528a8; /* 0xa528a8 */
extern undefined4 DAT_00a528b0; /* 0xa528b0 */
extern undefined4 DAT_00a528b4; /* 0xa528b4 */
extern undefined4 DAT_00a528b8; /* 0xa528b8 */
extern undefined4 DAT_00a528bc; /* 0xa528bc */
extern undefined4 DAT_00a528c0; /* 0xa528c0 */
extern undefined4 DAT_00a528c4; /* 0xa528c4 */
extern undefined4 DAT_00a528cc; /* 0xa528cc */
extern undefined4 DAT_00a528d0; /* 0xa528d0 */
extern undefined4 DAT_00a528d4; /* 0xa528d4 */
extern undefined4 DAT_00a528d8; /* 0xa528d8 */
extern undefined4 DAT_00a528e0; /* 0xa528e0 */
extern undefined4 DAT_00a528e4; /* 0xa528e4 */
extern undefined4 DAT_00a528e8; /* 0xa528e8 */
extern undefined4 DAT_00a528ec; /* 0xa528ec */
extern undefined4 DAT_00a528f4; /* 0xa528f4 */
extern undefined4 DAT_00a528f8; /* 0xa528f8 */
extern undefined4 DAT_00a528fc; /* 0xa528fc */
extern undefined4 DAT_00a52904; /* 0xa52904 */
extern undefined4 DAT_00a5290c; /* 0xa5290c */
extern undefined4 DAT_00a52910; /* 0xa52910 */
extern undefined4 DAT_00a52914; /* 0xa52914 */
extern undefined4 DAT_00a52918; /* 0xa52918 */
extern undefined4 DAT_00a5291c; /* 0xa5291c */
extern undefined4 DAT_00a52924; /* 0xa52924 */
extern undefined4 DAT_00a52928; /* 0xa52928 */
extern undefined4 DAT_00a5292c; /* 0xa5292c */
extern undefined4 DAT_00a52930; /* 0xa52930 */
extern undefined4 DAT_00a52938; /* 0xa52938 */
extern undefined4 DAT_00a5293c; /* 0xa5293c */
extern undefined4 DAT_00a52b90; /* 0xa52b90 */
extern undefined4 DAT_00a52b94; /* 0xa52b94 */
extern undefined4 DAT_00a52b98; /* 0xa52b98 */
extern undefined4 DAT_00a52ba0; /* 0xa52ba0 */
extern undefined4 DAT_00a52ba4; /* 0xa52ba4 */
extern undefined4 DAT_00a52ba8; /* 0xa52ba8 */
extern pointer PTR_UpdatePart_0_00706ea8; /* 0x706ea8 */
extern pointer PTR_UpdatePart_10_00706f48; /* 0x706f48 */
extern pointer PTR_UpdatePart_11_00706f58; /* 0x706f58 */
extern pointer PTR_UpdatePart_12_00706f68; /* 0x706f68 */
extern pointer PTR_UpdatePart_13_00706f78; /* 0x706f78 */
extern pointer PTR_UpdatePart_14_00706f88; /* 0x706f88 */
extern pointer PTR_UpdatePart_15_00706f98; /* 0x706f98 */
extern pointer PTR_UpdatePart_16_00706fa8; /* 0x706fa8 */
extern pointer PTR_UpdatePart_17_00706fb8; /* 0x706fb8 */
extern pointer PTR_UpdatePart_18_00706fc8; /* 0x706fc8 */
extern pointer PTR_UpdatePart_19_00706fd8; /* 0x706fd8 */
extern pointer PTR_UpdatePart_1_00706eb8; /* 0x706eb8 */
extern pointer PTR_UpdatePart_20_00706fe8; /* 0x706fe8 */
extern pointer PTR_UpdatePart_21_00706ff8; /* 0x706ff8 */
extern pointer PTR_UpdatePart_22_00706e80; /* 0x706e80 */
extern pointer PTR_UpdatePart_23_00707010; /* 0x707010 */
extern pointer PTR_UpdatePart_24_00707020; /* 0x707020 */
extern pointer PTR_UpdatePart_25_00707030; /* 0x707030 */
extern pointer PTR_UpdatePart_26_00707040; /* 0x707040 */
extern pointer PTR_UpdatePart_27_00707050; /* 0x707050 */
extern pointer PTR_UpdatePart_28_00707060; /* 0x707060 */
extern pointer PTR_UpdatePart_29_00707070; /* 0x707070 */
extern pointer PTR_UpdatePart_2_00706ec8; /* 0x706ec8 */
extern pointer PTR_UpdatePart_30_00707080; /* 0x707080 */
extern pointer PTR_UpdatePart_31_00707090; /* 0x707090 */
extern pointer PTR_UpdatePart_32_007070a0; /* 0x7070a0 */
extern pointer PTR_UpdatePart_33_007070b0; /* 0x7070b0 */
extern pointer PTR_UpdatePart_34_007070c0; /* 0x7070c0 */
extern pointer PTR_UpdatePart_35_007070e0; /* 0x7070e0 */
extern pointer PTR_UpdatePart_36_007070f8; /* 0x7070f8 */
extern pointer PTR_UpdatePart_37_00707108; /* 0x707108 */
extern pointer PTR_UpdatePart_38_00707118; /* 0x707118 */
extern pointer PTR_UpdatePart_39_00707128; /* 0x707128 */
extern pointer PTR_UpdatePart_3_00706ed8; /* 0x706ed8 */
extern pointer PTR_UpdatePart_40_00707138; /* 0x707138 */
extern pointer PTR_UpdatePart_41_00707148; /* 0x707148 */
extern pointer PTR_UpdatePart_42_00707158; /* 0x707158 */
extern pointer PTR_UpdatePart_43_00707168; /* 0x707168 */
extern pointer PTR_UpdatePart_44_00707178; /* 0x707178 */
extern pointer PTR_UpdatePart_45_00707180; /* 0x707180 */
extern pointer PTR_UpdatePart_46_00707190; /* 0x707190 */
extern pointer PTR_UpdatePart_47_007071a0; /* 0x7071a0 */
extern pointer PTR_UpdatePart_48_007071b0; /* 0x7071b0 */
extern pointer PTR_UpdatePart_49_007071c0; /* 0x7071c0 */
extern pointer PTR_UpdatePart_4_00706ee8; /* 0x706ee8 */
extern pointer PTR_UpdatePart_50_007071d0; /* 0x7071d0 */
extern pointer PTR_UpdatePart_51_007071e0; /* 0x7071e0 */
extern pointer PTR_UpdatePart_52_007071f0; /* 0x7071f0 */
extern pointer PTR_UpdatePart_53_00707200; /* 0x707200 */
extern pointer PTR_UpdatePart_54_00707210; /* 0x707210 */
extern pointer PTR_UpdatePart_55_00707220; /* 0x707220 */
extern pointer PTR_UpdatePart_56_00707230; /* 0x707230 */
extern pointer PTR_UpdatePart_57_00707240; /* 0x707240 */
extern pointer PTR_UpdatePart_58_00707250; /* 0x707250 */
extern pointer PTR_UpdatePart_59_00707260; /* 0x707260 */
extern pointer PTR_UpdatePart_5_00706ef8; /* 0x706ef8 */
extern pointer PTR_UpdatePart_60_00707270; /* 0x707270 */
extern pointer PTR_UpdatePart_61_00707280; /* 0x707280 */
extern pointer PTR_UpdatePart_62_00707290; /* 0x707290 */
extern pointer PTR_UpdatePart_63_007072a0; /* 0x7072a0 */
extern pointer PTR_UpdatePart_64_007072b0; /* 0x7072b0 */
extern pointer PTR_UpdatePart_65_007072c0; /* 0x7072c0 */
extern pointer PTR_UpdatePart_66_007072c8; /* 0x7072c8 */
extern pointer PTR_UpdatePart_67_007072d8; /* 0x7072d8 */
extern pointer PTR_UpdatePart_68_007072e8; /* 0x7072e8 */
extern pointer PTR_UpdatePart_69_007072f8; /* 0x7072f8 */
extern pointer PTR_UpdatePart_6_00706f08; /* 0x706f08 */
extern pointer PTR_UpdatePart_70_00707308; /* 0x707308 */
extern pointer PTR_UpdatePart_71_00707318; /* 0x707318 */
extern pointer PTR_UpdatePart_72_00707328; /* 0x707328 */
extern pointer PTR_UpdatePart_73_00707338; /* 0x707338 */
extern pointer PTR_UpdatePart_74_00707348; /* 0x707348 */
extern pointer PTR_UpdatePart_75_00707358; /* 0x707358 */
extern pointer PTR_UpdatePart_76_00707360; /* 0x707360 */
extern pointer PTR_UpdatePart_77_00707378; /* 0x707378 */
extern pointer PTR_UpdatePart_78_00707388; /* 0x707388 */
extern pointer PTR_UpdatePart_79_00707398; /* 0x707398 */
extern pointer PTR_UpdatePart_7_00706f18; /* 0x706f18 */
extern pointer PTR_UpdatePart_8_00706f28; /* 0x706f28 */
extern pointer PTR_UpdatePart_9_00706f38; /* 0x706f38 */
extern PartInstance * PartUpdates[80]; /* 0xa52604 */
extern undefined4 g_PartTexFrames; /* 0xa52804 */

// ---- functions
void SECTION_HEADER_PARTUPD(void);
void FillPartUpdateTable(void);
void SpawnPart_0 (double param_1,float *param_2,int param_3,undefined8 param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7);
void UpdatePart_0(PartInstance *part);
void SpawnPart_1(PartInstance *param_1,undefined8 param_2);
void UpdatePart_1(PartInstance *part);
PartInstance * SpawnPart_2 (float *param_1,float *param_2,float *param_3,uint param_4,int param_5,short param_6, undefined2 param_7,undefined2 param_8);
void UpdatePart_2(PartInstance *part);
undefined8 SpawnPart_3 (float *param_1,undefined1 *param_2,uint param_3,ulonglong param_4,ulonglong param_5);
void UpdatePart_3(PartInstance *part);
void SpawnPart_4 (float *param_1,int *param_2,uint param_3,int param_4,int param_5,undefined2 param_6, undefined2 param_7,int param_8);
void UpdatePart_4(PartInstance *part);
void SpawnPart_5 (double param_1,double param_2,float *param_3,uint param_4,ulonglong param_5, ulonglong param_6,undefined8 param_7,undefined8 param_8);
void UpdatePart_5(PartInstance *part);
void SpawnPart_6 (double param_1,double param_2,double param_3,double param_4,double param_5, double param_6,double param_7,double param_8,double param_9,int param_10, undefined8 param_11,undefined8 param_12,undefined8 param_13);
void UpdatePart_6(PartInstance *part);
void SpawnPart_7 (double param_1,float *param_2,uint param_3,ulonglong param_4,ulonglong param_5, undefined8 param_6,undefined8 param_7);
void UpdatePart_7(PartInstance *part);
void SpawnPart_8 (double param_1,float *param_2,int *param_3,uint param_4,int param_5, undefined8 param_6,undefined8 param_7);
void UpdatePart_8(PartInstance *part);
longlong SpawnPart_9 (double param_1,double param_2,int param_3,float *param_4,undefined8 param_5, int param_6,longlong param_7);
void UpdatePart_9(PartInstance *part);
void SpawnPart_10(float *param_1,int *param_2);
void UpdatePart_10(PartInstance *part);
void SpawnPart_11 (double param_1,double param_2,float *param_3,float *param_4,uint param_5,int param_6 ,undefined8 param_7,int param_8,undefined1 param_9);
void UpdatePart_11(PartInstance *part);
PartInstance * SpawnPart_12(double param_1,float *param_2,int *param_3,undefined8 param_4,byte param_5);
void UpdatePart_12(PartInstance *part);
longlong SpawnPart_13 (undefined8 param_1,double param_2,double param_3,double param_4,double param_5, float *param_6);
void UpdatePart_13(PartInstance *part);
longlong SpawnPart_14(int param_1,int param_2);
void UpdatePart_14(PartInstance *part);
PartInstance * SpawnPart_15 (double param_1,float *param_2,int *param_3,uint param_4,int param_5,undefined8 param_6, int param_7,undefined2 param_8,uint param_9);
void UpdatePart_15(PartInstance *part);
PartInstance * SpawnPart_16 (double param_1,float *param_2,int *param_3,uint param_4,int param_5,undefined8 param_6, int param_7,int param_8);
void UpdatePart_16(PartInstance *part);
void STUB_0012598c(...);
PartInstance * UpdatePart_17(PartInstance *part);
void SpawnPart_18(float *param_1,float *param_2);
void UpdatePart_18(PartInstance *part);
void SpawnPart_19(float *param_1,float *param_2);
void UpdatePart_19(PartInstance *part);
void SpawnPart_20 (double param_1,double param_2,double param_3,double param_4,float *param_5, float *param_6);
void UpdatePart_20(PartInstance *part);
PartInstance * SpawnPart_21 (double param_1,float *param_2,int *param_3,uint param_4,int param_5,undefined8 param_6, int param_7,undefined2 param_8);
void UpdatePart_21(PartInstance *part);
void SpawnPart_22 (double param_1,float *param_2,int *param_3,uint param_4,int param_5, undefined8 param_6,undefined8 param_7);
longlong SpawnPart_23 (undefined8 param_1,double param_2,double param_3,double param_4,float *param_5);
void UpdatePart_23(PartInstance *part);
PartInstance * SpawnPart_24 (double param_1,double param_2,double param_3,double param_4,double param_5,int param_6);
void UpdatePart_24(PartInstance *part);
void SpawnPart_25(float *param_1,int *param_2,int param_3);
void UpdatePart_25(PartInstance *part);
PartInstance * SpawnPart_26 (double param_1,int param_2,undefined8 param_3,uint param_4,int param_5,short param_6);
void UpdatePart_26(PartInstance *part);
PartInstance * SpawnPart_27(double param_1,float *param_2,int *param_3,uint param_4,int param_5);
void UpdatePart_27(PartInstance *part);
void SpawnPart_28(double param_1,float *param_2,undefined8 param_3);
void UpdatePart_28(PartInstance *part);
longlong SpawnPart_29(double param_1,double param_2,int param_3,undefined2 param_4);
void UpdatePart_29(PartInstance *part);
PartInstance * SpawnPart_30(float *param_1,int param_2);
void UpdatePart_30(PartInstance *part);
void SpawnPart_31 (uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, longlong param_5);
void UpdatePart_31(PartInstance *part);
PartInstance * SpawnPart_32(int param_1);
void UpdatePart_32(PartInstance *part);
void SpawnPart_33(float *param_1,int *param_2,uint param_3,float param_4,short param_5);
void UpdatePart_33(PartInstance *part);
PartInstance * SpawnPart_34(double param_1,double param_2,Vec4 *param_3,int *param_4);
void UpdatePart_34(PartInstance *part);
void SpawnPart_35(Vec4 *param_1,int *param_2,int param_3,int param_4);
PartInstance * SpawnPart_66(double param_1,double param_2,float *param_3,undefined8 param_4,uint param_5);
PartInstance * SpawnPart_45 (double param_1,double param_2,float *param_3,undefined8 param_4,int param_5,uint param_6);
void UpdatePart_35(PartInstance *part);
longlong SpawnPart_36(float *param_1,int param_2);
void SpawnPart_36_Tinted(double param_1,undefined8 param_2,undefined8 param_3);
void UpdatePart_36(PartInstance *part);
longlong SpawnPart_37(float *param_1);
void UpdatePart_37(PartInstance *part);
longlong SpawnPart_38(double param_1,double param_2,float *param_3,int *param_4);
void UpdatePart_38(PartInstance *part);
longlong SpawnPart_39(int param_1);
void UpdatePart_39(PartInstance *part);
longlong SpawnPart_40(float *param_1,int *param_2,byte param_3,int param_4);
void UpdatePart_40(PartInstance *part);
PartInstance * SpawnPart_41 (float param_1,float *param_2,int param_3,int param_4,uint param_5,undefined8 param_6, uint param_7,short param_8,byte param_9);
void UpdatePart_41(PartInstance *part);
longlong SpawnPart_42(float *param_1,int *param_2,byte param_3,int param_4);
void UpdatePart_42(PartInstance *part);
longlong SpawnPart_43 (double param_1,int param_2,float *param_3,int *param_4,undefined8 param_5, undefined4 param_6,byte param_7,byte param_8,byte param_9);
void UpdatePart_43(PartInstance *part);
PartInstance * SpawnPart_44 (double param_1,double param_2,double param_3,double param_4,double param_5,float *param_6 ,int *param_7,short param_8,ulonglong param_9,uint param_10,int param_11);
void UpdatePart_44(PartInstance *part);
void UpdatePart_45(PartInstance *part);
PartInstance * SpawnPart_46 (double param_1,double param_2,float *param_3,int *param_4,undefined8 param_5, undefined8 param_6,int param_7);
void UpdatePart_46(PartInstance *part);
PartInstance * SpawnPart_47(double param_1,float *param_2,int *param_3);
void UpdatePart_47(PartInstance *part);
PartInstance * SpawnPart_48 (double param_1,float *param_2,int *param_3,undefined8 param_4,undefined8 param_5, undefined2 param_6,uint param_7);
void UpdatePart_48(PartInstance *part);
void SpawnPart_49(int param_1,int *param_2,float *param_3,int *param_4,short param_5);
void UpdatePart_49(PartInstance *part);
longlong SpawnPart_50 (double param_1,double param_2,double param_3,float *param_4,int *param_5, undefined8 param_6,undefined8 param_7,uint param_8,int param_9);
void UpdatePart_50(PartInstance *part);
PartInstance * SpawnPart_51(float *param_1,int *param_2);
void UpdatePart_51(PartInstance *part);
PartInstance * SpawnPart_52 (double param_1,double param_2,float *param_3,uint param_4,int param_5,undefined8 param_6, undefined8 param_7,undefined8 param_8);
void UpdatePart_52(PartInstance *part);
PartInstance * SpawnPart_53 (double param_1,double param_2,double param_3,float *param_4,short param_5, undefined8 param_6,undefined8 param_7,uint param_8,int param_9,undefined1 param_10, int *param_11);
void UpdatePart_53(PartInstance *part);
longlong SpawnPart_54 (double param_1,double param_2,double param_3,int param_4,float *param_5, int param_6);
void UpdatePart_54(void *this_,PartInstance *part);
longlong SpawnPart_55 (double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5, uint param_6,undefined8 param_7,float param_8);
void UpdatePart_55(PartInstance *part);
PartInstance * SpawnPart_56(double param_1,float *param_2,int *param_3);
void UpdatePart_56(PartInstance *part);
PartInstance * SpawnPart_57(double param_1,double param_2,float *param_3,int *param_4);
void UpdatePart_57(PartInstance *part);
PartInstance * SpawnPart_58 (double param_1,double param_2,float *param_3,byte param_4,byte param_5,undefined1 param_6 ,undefined1 param_7,byte param_8,int param_9);
void UpdatePart_58(PartInstance *part);
PartInstance * SpawnPart_59 (double param_1,float *param_2,uint param_3,char param_4,longlong param_5,int param_6, short param_7,undefined8 param_8,int param_9);
void UpdatePart_59(PartInstance *part);
PartInstance * SpawnPart_60 (double param_1,float *param_2,int *param_3,uint param_4,undefined8 param_5,ushort param_6 ,char param_7,int param_8);
void UpdatePart_60(PartInstance *part);
longlong SpawnPart_61(double param_1,double param_2,int param_3,undefined2 param_4);
void UpdatePart_61(PartInstance *part);
PartInstance * SpawnPart_62(float *param_1,undefined8 param_2,longlong param_3);
void UpdatePart_62(PartInstance *part);
PartInstance * SpawnPart_63 (double param_1,float *param_2,uint param_3,char param_4,longlong param_5,int param_6, short param_7);
void UpdatePart_63(PartInstance *part);
PartInstance * SpawnPart_64 (double param_1,double param_2,double param_3,float *param_4,int *param_5,short param_6, undefined8 param_7,undefined8 param_8,uint param_9,int param_10,int param_11);
void UpdatePart_64(PartInstance *part);
void SpawnPart_65(float *param_1,int *param_2);
void UpdatePart_65(PartInstance *part);
void UpdatePart_66(PartInstance *part);
PartInstance * SpawnPart_67 (double param_1,double param_2,int param_3,float *param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7,int param_8,uint param_9,int *param_10);
void UpdatePart_67(PartInstance *part);
longlong SpawnPart_68 (double param_1,double param_2,double param_3,int param_4,undefined1 param_5, undefined8 param_6,uint param_7,undefined8 param_8,float param_9, undefined8 param_10,undefined1 param_11);
void UpdatePart_68(PartInstance *part);
PartInstance * SpawnPart_69(float *param_1,int *param_2,int param_3,int param_4);
void UpdatePart_69(PartInstance *part);
longlong SpawnPart_70(double param_1,float *param_2,int param_3);
void UpdatePart_70(PartInstance *part);
PartInstance * SpawnPart_71 (float *param_1,float *param_2,float *param_3,uint param_4,int param_5,short param_6, undefined2 param_7,undefined2 param_8);
void UpdatePart_71(PartInstance *part);
PartInstance * SpawnPart_72(double param_1,float *param_2,int *param_3,int param_4);
void UpdatePart_72(PartInstance *part);
void SpawnPart_73 (double param_1,float *param_2,int param_3,undefined8 param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7);
void UpdatePart_73(PartInstance *part);
PartInstance * SpawnPart_74(int param_1,float *param_2,int *param_3,uint *param_4,int param_5);
void UpdatePart_74(PartInstance *part);
longlong SpawnPart_75 (double param_1,double param_2,float *param_3,int *param_4,undefined2 param_5, int param_6,undefined8 param_7,undefined8 param_8,ulonglong param_9);
void UpdatePart_75(PartInstance *part);
void UpdatePart_76(PartInstance *part);
PartInstance * SpawnPart_76(float *param_1,int *param_2);
void SpawnPart_77(double param_1,float *param_2,int *param_3,int param_4);
void UpdatePart_77(PartInstance *part);
PartInstance * SpawnPart_78 (double param_1,double param_2,float *param_3,short param_4,undefined8 param_5, undefined8 param_6,uint param_7,int param_8,undefined1 param_9,int *param_10);
void UpdatePart_78(PartInstance *part);
PartInstance * SpawnPart_79(int param_1,float *param_2,int *param_3);
void UpdatePart_79(PartInstance *part);
PartInstance * SpawnPart_80(float *param_1,int param_2,int param_3);
void ____UpdatePart_FadeOut(int param_1);
