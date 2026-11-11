//==== 004e0d50  ns=Global  size=0xc20
// sig: undefined FUN_004e0d50(void)
// callers(1): 004e1b80 FUN_004e1b80
// callees(1): 005e9008 FUN_005e9008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e0d50(double param_1,double param_2,int param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined1 in_vs34 [16];
  undefined1 auVar17 [16];
  undefined1 in_vs35 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack00000060 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined4 local_150 [16];
  undefined1 local_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  
  auVar18 = ZEXT416(0);
  auVar21._0_4_ = (float)param_2;
  auVar21._4_4_ = (float)param_2;
  auVar21._8_4_ = (float)param_2;
  auVar21._12_4_ = (float)param_2;
  iVar9 = *(int *)((int)&DepthPass + (int)(param_4 << 2));
  auVar22._0_4_ = (float)param_1;
  auVar22._4_4_ = (float)param_1;
  auVar22._8_4_ = (float)param_1;
  auVar22._12_4_ = (float)param_1;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (in_vs35,auVar22,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60
                      );
  puVar14 = local_150;
  lVar16 = 8;
  auVar18 = vectorSubtractFloatingPoint(in_vs34,auVar18);
  auVar17 = *(undefined1 (*) [16])(param_3 + 0xe0U & 0xfffffff0);
  auVar19 = *(undefined1 (*) [16])(param_3 + 0x100U & 0xfffffff0);
  auVar20 = *(undefined1 (*) [16])(param_3 + 0xf0U & 0xfffffff0);
  auVar23 = vectorMergeHighWord(auVar17,auVar19);
  auVar24 = *(undefined1 (*) [16])(param_3 + 0x110U & 0xfffffff0);
  auVar17 = vectorMergeLowWord(auVar17,auVar19);
  auVar19 = vectorMergeHighWord(auVar20,auVar24);
  auVar20 = vectorMergeLowWord(auVar20,auVar24);
  vectorMergeHighWord(auVar23,auVar19);
  vectorMergeLowWord(auVar23,auVar19);
  vectorMergeHighWord(auVar17,auVar20);
  vectorMergeLowWord(auVar17,auVar20);
  **(undefined4 **)(iVar9 + 8) = 0x441efc;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  puVar15 = (undefined4 *)(*(int *)(iVar9 + 8) + 8);
  *(undefined4 **)(iVar9 + 8) = puVar15;
  do {
    *puVar15 = *puVar14;
    iVar7 = *(int *)(iVar9 + 8);
    *(int *)(iVar9 + 8) = iVar7 + 4;
    puVar15 = puVar14 + 1;
    puVar14 = puVar14 + 2;
    *(undefined4 *)(iVar7 + 4) = *puVar15;
    puVar15 = (undefined4 *)(*(int *)(iVar9 + 8) + 4);
    *(undefined4 **)(iVar9 + 8) = puVar15;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  auVar17 = ZEXT416(0);
  auVar33 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar19 = loadVectorLeftIndexed(0x120,0x4e0c80);
  auVar17 = in_vs35 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60) ^
            (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60);
  auVar20 = vectorPermute(in_vs35,in_vs35,_DAT_004e0c90);
  auVar19 = vectorPermute(in_vs35,auVar17,_DAT_004e0cb0);
  auVar24 = vectorPermute(in_vs35,in_vs35,_DAT_004e0ca0);
  auVar17 = vectorPermute(auVar17,in_vs35,_DAT_004e0cc0);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar20,auVar19,auVar33);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar17,auVar19);
  auVar30 = loadVectorLeftIndexed(0x70,0x4e0c80);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar19,auVar33);
  auVar23 = vectorPermute(auVar19,auVar19,_DAT_004e0cd0);
  auVar29 = vectorPermute(auVar19,auVar19,_DAT_004e0ce0);
  puVar15 = (undefined4 *)local_110;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar23,auVar17);
  auVar17 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar30 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = loadVectorLeftIndexed(0x74,0x4e0c80);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = vectorMultiplyAddFloatingPoint(auVar29,auVar29,auVar23);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar23 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar17);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar23,auVar17,auVar33);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar23,auVar30,auVar33);
  auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar23,auVar17,auVar32);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar29,auVar23);
  auVar29 = vectorCompareEqualToFloatingPoint(auVar17,auVar17);
  auVar17 = vectorConditionalSelect(auVar23,auVar17,auVar29);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar17,auVar33);
  auVar19 = vectorPermute(auVar17,auVar17,_DAT_004e0c90);
  auVar17 = vectorPermute(auVar17,auVar17,_DAT_004e0ca0);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar24,auVar33);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar20,auVar19);
  auVar20 = vectorMultiplyAddFloatingPoint(auVar19,auVar19,auVar33);
  auVar17 = vectorPermute(auVar19,auVar19,_DAT_004e0cd0);
  auVar23 = vectorPermute(auVar19,auVar19,_DAT_004e0ce0);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar17,auVar20);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar23,auVar23,auVar17);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar20 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar17);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar20,auVar17,auVar33);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar20,auVar30,auVar33);
  auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar20,auVar17,auVar32);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar23,auVar20);
  auVar23 = vectorCompareEqualToFloatingPoint(auVar17,auVar17);
  auVar17 = vectorConditionalSelect(auVar20,auVar17,auVar23);
  vectorMultiplyAddFloatingPoint(auVar19,auVar17,auVar33);
  auStack00000060 = in_vs35;
  FUN_005e9008(puVar15,auStack_170,&stack0x00000040,auStack_160);
  auVar17 = ZEXT416(0xffffffff);
  auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = auStack00000060 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar19 = vectorAddFloatingPoint
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar32);
  auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
  auVar18 = auVar18 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar17 = loadVectorLeftIndexed(0x78,0x4e0c80);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = vectorSubtractFloatingPoint
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,auVar21);
  auVar18 = vectorMultiplyAddFloatingPoint(auVar22,auVar19,auVar20);
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar21
                      );
  auVar30 = vectorMultiplyAddFloatingPoint(local_110,auVar33,auVar33);
  auVar18 = vectorPermute(auVar22,auVar18,_DAT_004e0d00);
  auVar18 = vectorPermute(auVar18,auStack_180,_DAT_004e0d10);
  auVar20 = vectorLogicalAnd(auVar18,_DAT_004e0d20);
  auVar23 = vectorLogicalAnd(auVar18,_DAT_004e0d30);
  auVar24 = vectorLogicalAnd(auVar18,_DAT_004e0d40);
  auVar18 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = auVar20 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar22 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar23 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar19 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (local_110,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar33);
  auVar18 = auVar24 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar25 = vectorMultiplyAddFloatingPoint
                      (auStack_100,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                       auVar33);
  auVar26 = vectorMultiplyAddFloatingPoint
                      (local_110,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                       auVar33);
  auVar21 = auVar20 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auStack_100,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                       auVar33);
  auVar20 = auVar20 & (undefined1  [16])0xffffffff;
  auVar19 = vectorMultiplyAddFloatingPoint
                      (local_110,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                       auVar33);
  auVar22 = auVar24 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auStack_100,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar33);
  auVar18 = auVar23 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint(auStack_100,auVar33,auVar33);
  auVar23 = auVar23 & (undefined1  [16])0xffffffff;
  auVar24 = auVar24 & (undefined1  [16])0xffffffff;
  auVar17 = vectorMultiplyAddFloatingPoint
                      (auStack_f0,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                       auVar29);
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auStack_e0,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                       auVar25);
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auStack_f0,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar26);
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auStack_e0,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                       auVar27);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auStack_f0,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                       auVar19);
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auStack_e0,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                       auVar31);
  auVar23 = vectorMultiplyAddFloatingPoint(auStack_f0,auVar33,auVar30);
  auVar24 = vectorMultiplyAddFloatingPoint(auStack_e0,auVar32,auVar28);
  lVar16 = 8;
  auVar21 = vectorAddFloatingPoint(auVar17,auVar21);
  auVar22 = vectorAddFloatingPoint(auVar29,auVar20);
  auVar18 = vectorAddFloatingPoint(auVar19,auVar18);
  auVar17 = vectorAddFloatingPoint(auVar23,auVar24);
  auVar19 = vectorMergeHighWord(auVar21,auVar18);
  auVar18 = vectorMergeLowWord(auVar21,auVar18);
  auVar20 = vectorMergeHighWord(auVar22,auVar17);
  auVar21 = vectorMergeLowWord(auVar22,auVar17);
  vectorMergeHighWord(auVar19,auVar20);
  vectorMergeLowWord(auVar19,auVar20);
  vectorMergeHighWord(auVar18,auVar21);
  vectorMergeLowWord(auVar18,auVar21);
  **(undefined4 **)(iVar9 + 8) = &DAT_00041834;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x901;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_00041830;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x404;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_0004183c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 1;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40324;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40328;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 1;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0xc0330;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x207;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0xff;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0xff;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x10;
  *(undefined4 *)(iVar7 + 0x10) = 0x4032c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0xff;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0xc033c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x1e00;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0x1e01;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x10;
  *(undefined4 *)(iVar7 + 0x10) = 0x441efc;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 4;
  puVar14 = (undefined4 *)(*(int *)(iVar9 + 8) + 8);
  *(undefined4 **)(iVar9 + 8) = puVar14;
  do {
    *puVar14 = *puVar15;
    iVar7 = *(int *)(iVar9 + 8);
    *(int *)(iVar9 + 8) = iVar7 + 4;
    puVar14 = puVar15 + 1;
    puVar15 = puVar15 + 2;
    *(undefined4 *)(iVar7 + 4) = *puVar14;
    iVar7 = *(int *)(iVar9 + 8);
    puVar14 = (undefined4 *)(iVar7 + 4);
    *(undefined4 **)(iVar9 + 8) = puVar14;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  *(undefined4 *)(iVar7 + 4) = 0x41740;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0xc32;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  uVar10 = *(uint *)(param_3 + 0x1859c);
  *(undefined4 *)(iVar7 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar9 + 8) + 4) = uVar10 | 0x80000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  uVar11 = *(undefined4 *)(param_3 + 0x185a0);
  *(undefined4 *)(iVar7 + 8) = 0x8181c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar11;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0x11;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 *)(iVar7 + 0xc) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0x10) = 0x41808;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0x14) = 8;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x1c;
  *(undefined4 *)(iVar7 + 0x18) = 0x40041824;
  puVar14 = *(undefined4 **)(iVar9 + 8);
  *(undefined4 **)(iVar9 + 8) = puVar14 + 1;
  *puVar14 = 0x17000000;
  **(undefined4 **)(iVar9 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0xc0330;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x202;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0xff;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0xff;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x10;
  *(undefined4 *)(iVar7 + 0x10) = 0x40324;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x1000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a0c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x80000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a08;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x40030404;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a14;
  *(undefined **)(*(int *)(iVar9 + 8) + 4) = &DAT_01012000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a1c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0xffffffff;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a2c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x80000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a28;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x40030505;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a34;
  *(undefined **)(*(int *)(iVar9 + 8) + 4) = &DAT_01012000;
  *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 8;
  uVar12 = (ulonglong)*(byte *)(param_3 + 0x1b08) & 0xffffffffffffffbf;
  bVar1 = *(byte *)(param_3 + 0x1b16);
  uVar11 = *(undefined4 *)(param_3 + 0x1b1c);
  *(char *)(param_3 + 0x1b08) = (char)uVar12;
  *(byte *)(param_3 + 0x220c) = *(byte *)(param_3 + 0x220c) & 0xbf;
  bVar2 = *(byte *)(param_3 + 0x1b09);
  bVar3 = *(byte *)(param_3 + 0x1b0b);
  bVar4 = *(byte *)(param_3 + 0x1b0a);
  uVar13 = *(undefined4 *)(param_3 + 0x1b10);
  uVar8 = *(undefined4 *)(param_3 + 0x1b0c);
  uVar10 = *(uint *)(param_3 + 0x1b18);
  uVar6 = *(ushort *)(param_3 + 0x1b14);
  **(undefined4 **)(iVar9 + 8) = &DAT_00081a00;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar11;
  *(uint *)(*(int *)(iVar9 + 8) + 8) =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)(uVar12 << 8) |
       (uint)bVar3 << 2 | (uint)bVar4 << 4;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 *)(iVar7 + 0xc) = 0x41a18;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar13;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_00041840;
  *(uint *)(*(int *)(iVar9 + 8) + 4) = uVar10 | (uint)uVar6 << 0x14;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a10;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar8;
  iVar7 = *(int *)(iVar9 + 8);
  uVar11 = *(undefined4 *)(param_3 + 0x2220);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  bVar1 = *(byte *)(param_3 + 0x221a);
  bVar2 = *(byte *)(param_3 + 0x220d);
  bVar3 = *(byte *)(param_3 + 0x220c);
  bVar4 = *(byte *)(param_3 + 0x220f);
  bVar5 = *(byte *)(param_3 + 0x220e);
  uVar13 = *(undefined4 *)(param_3 + 0x2214);
  uVar8 = *(undefined4 *)(param_3 + 0x2210);
  uVar10 = *(uint *)(param_3 + 0x221c);
  uVar6 = *(ushort *)(param_3 + 0x2218);
  *(undefined4 *)(iVar7 + 8) = 0x81a20;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar11;
  *(uint *)(*(int *)(iVar9 + 8) + 8) =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 *)(iVar7 + 0xc) = 0x41a38;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar13;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_00041844;
  *(uint *)(*(int *)(iVar9 + 8) + 4) = uVar10 | (uint)uVar6 << 0x14;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a30;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar8;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40320;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x80068006;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x80314;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x10001;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0x10001;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 **)(iVar7 + 0xc) = &DAT_00041830;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x405;
  iVar7 = *(int *)(iVar9 + 8);
  uVar10 = *(uint *)(param_3 + 0x1859c);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar9 + 8) + 4) = uVar10 | 0x80000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  uVar11 = *(undefined4 *)(param_3 + 0x185a0);
  *(undefined4 *)(iVar7 + 8) = 0x8181c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar11;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0x11;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 *)(iVar7 + 0xc) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0x10) = 0x41808;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0x14) = 8;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x1c;
  *(undefined4 *)(iVar7 + 0x18) = 0x40041824;
  puVar14 = *(undefined4 **)(iVar9 + 8);
  *(undefined4 **)(iVar9 + 8) = puVar14 + 1;
  *puVar14 = 0x17000000;
  **(undefined4 **)(iVar9 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40328;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_0004183c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40324;
  *(undefined **)(*(int *)(iVar9 + 8) + 4) = &DAT_01010101;
  *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 8;
  return;
}



//==== 004e1970  ns=Global  size=0xf0
// sig: undefined FUN_004e1970(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

void FUN_004e1970(int param_1,longlong param_2,undefined4 param_3,undefined4 param_4,void *param_5,
                 longlong param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(uint *)(param_1 + 0x1a6c) & 1) == 0) {
    iVar3 = (int)(param_2 << 2);
    piVar4 = (int *)(param_1 + iVar3 + 0x184e0);
    iVar2 = param_1 + (int)(param_2 << 0xd) + *piVar4 * 0x20;
    *(undefined4 *)(iVar2 + 0x24f8) = param_3;
    *(undefined4 *)(iVar2 + 0x24f0) = param_4;
    *(char *)(iVar2 + 0x24fc) = (char)param_6;
    libc::memcpy((void *)(iVar2 + 0x24e0),param_5,(size_t)(param_6 << 2));
    piVar1 = *(int **)((int)&DepthPass + iVar3);
    *(int *)(iVar2 + 0x24f4) = piVar1[2] - *piVar1;
    *piVar4 = *piVar4 + 1;
  }
  return;
}



//==== 004e1b80  ns=Global  size=0xca8
// sig: undefined FUN_004e1b80(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(7): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004dd6f0 idol_draw::Gfx_SubmitHudDrawCommands; 004e0d50 FUN_004e0d50; 0050f434 FUN_0050f434; 0050f6e4 FUN_0050f6e4; 005cc784 FUN_005cc784
// strings: 00659358: 'ViewToShadow0' | 00659368: 'ViewToShadow1' | 00659378: 'ViewToShadow2' | 00659388: 'ViewToShadow3' | 00659398: 'Stereo3dParams'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e1b80(undefined8 param_1,undefined8 param_2,int *param_3,int param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  RsxCmd *pRVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  RenderingStep *pRVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_180 [16];
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar13 = uVar15 - 0x70;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  (*(code *)**(undefined4 **)(*param_3 + 0x10))(param_3,ShadowPass,param_3[1],param_3[2]);
  pRVar12 = ShadowPass;
  *ShadowPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar12->command[1] = *(byte *)(param_3 + 0x84e) + 0xfeed0000;
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar12->command[1] = *(byte *)((int)param_3 + 0x2139) + 0xfeed0000;
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar12->command[1] = *(byte *)((int)param_3 + 0x213a) + 0xfeed0000;
  pRVar12->command[2] = *(byte *)((int)param_3 + 0x213b) + 0xfeed0000;
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 3;
  pRVar5[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar12->command[1] = *(byte *)((int)param_3 + 0x215d) + 0xfeed0000;
  pRVar5 = pRVar12->command;
  uVar3 = *(ushort *)(param_3 + 0x85a);
  pRVar12->command = pRVar5 + 2;
  uVar4 = *(ushort *)((int)param_3 + 0x216a);
  pRVar5[2] = (RsxCmd)&DAT_00180208;
  pRVar12->command[1] =
       (uint)*(byte *)((int)param_3 + 0x2136) | (uint)*(byte *)(param_3 + 0x857) << 5 |
       (uint)*(byte *)(param_3 + 0x84d) << 8 | (uint)*(byte *)((int)param_3 + 0x2135) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar3) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar4) & 0xffffffff) << 0x18);
  pRVar12->command[2] = param_3[0x853];
  pRVar12->command[3] = param_3[0x84f];
  pRVar12->command[4] = param_3[0x858];
  pRVar12->command[5] = param_3[0x850];
  pRVar12->command[6] = param_3[0x854];
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 7;
  pRVar5[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar12->command[1] = param_3[0x859];
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar12->command[1] = param_3[0x855];
  pRVar12->command[2] = param_3[0x856];
  pRVar12->command[3] = param_3[0x851];
  pRVar12->command[4] = param_3[0x852];
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 5;
  pRVar5[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar12->command[1] = (uint)*(byte *)((int)param_3 + 0x2137);
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar12->command[1] =
       CONCAT22(*(undefined2 *)((int)param_3 + 0x216e),*(undefined2 *)(param_3 + 0x85b));
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar12->command[1] = CONCAT22(*(undefined2 *)(param_3 + 0x85a),*(undefined2 *)(param_3 + 0x85b));
  pRVar12->command[2] =
       CONCAT22(*(undefined2 *)((int)param_3 + 0x216a),*(undefined2 *)((int)param_3 + 0x216e));
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 3;
  pRVar5[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar12->command[1] =
       (uint)*(ushort *)((int)param_3 + 0x216a) - (*(ushort *)((int)param_3 + 0x216a) >> 0xc & 1) |
       0x1000;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ShadowPass;
  auVar29 = ZEXT416(0);
  auVar37 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  *ShadowPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ShadowPass;
  *ShadowPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ShadowPass;
  *ShadowPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar12->command[1] = 0x10101;
  auVar21 = *(undefined1 (*) [16])((uint)(param_3 + 0x28) & 0xfffffff0);
  auVar22 = *(undefined1 (*) [16])((uint)(param_3 + 0x2c) & 0xfffffff0);
  auVar23 = *(undefined1 (*) [16])((uint)(param_3 + 0x30) & 0xfffffff0);
  auVar24 = *(undefined1 (*) [16])((uint)(param_3 + 0x34) & 0xfffffff0);
  pRVar12->command = pRVar12->command + 2;
  auVar27 = vectorMergeLowWord(auVar21,auVar22);
  auVar28 = vectorMergeLowWord(auVar23,auVar24);
  auVar25 = vectorMergeHighWord(auVar21,auVar22);
  auVar26 = vectorMergeHighWord(auVar23,auVar24);
  auVar29 = vectorPermute(auVar23,auVar21,_DAT_004e1a60);
  auVar31 = vectorPermute(auVar24,auVar22,_DAT_004e1a90);
  auVar33 = vectorPermute(auVar27,auVar28,_DAT_004e1aa0);
  auVar34 = vectorPermute(auVar28,auVar27,_DAT_004e1ab0);
  auVar41 = vectorPermute(auVar23,auVar21,_DAT_004e1ac0);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar29,auVar31,auVar37);
  auVar29 = vectorPermute(auVar24,auVar22,_DAT_004e1af0);
  auVar38 = vectorPermute(auVar25,auVar26,_DAT_004e1aa0);
  auVar31 = vectorPermute(auVar26,auVar25,_DAT_004e1ab0);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar37);
  auVar6._0_16_ = auVar34;
  auVar6._16_16_ = auVar34;
  auVar35 = vectorMultiplyAddFloatingPoint(auVar41,auVar29,auVar37);
  auVar42 = vectorMultiplyAddFloatingPoint(auVar38,auVar31,auVar37);
  auVar7._0_16_ = auVar33;
  auVar7._16_16_ = auVar33;
  auVar33 = vectorPermute(auVar23,auVar21,_DAT_004e1a80);
  auVar38 = vectorPermute(auVar24,auVar22,_DAT_004e1a70);
  auVar29 = vectorPermute(auVar26,auVar25,_DAT_004e1aa0);
  auVar31 = vectorPermute(auVar25,auVar26,_DAT_004e1ab0);
  auVar34 = vectorPermute(auVar23,auVar21,_DAT_004e1ae0);
  auVar39 = vectorPermute(auVar24,auVar22,_DAT_004e1ad0);
  auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar33,auVar30);
  auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar7._8_16_,auVar6._8_16_,auVar32);
  auVar32 = vectorPermute(auVar23,auVar21,_DAT_004e1a70);
  auVar36 = vectorPermute(auVar22,auVar24,_DAT_004e1a80);
  auVar33 = vectorPermute(auVar22,auVar24,_DAT_004e1a60);
  auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar34,auVar35);
  auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar31,auVar42);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar32,auVar36,auVar37);
  auVar43 = vectorPermute(auVar23,auVar21,_DAT_004e1ad0);
  auVar34 = vectorPermute(auVar23,auVar21,_DAT_004e1a90);
  auVar31 = vectorPermute(auVar23,auVar21,_DAT_004e1af0);
  auVar21 = vectorMergeHighWord(auVar38,auVar41);
  auVar39 = vectorPermute(auVar38,auVar41,_DAT_004e1b40);
  auVar29 = vectorPermute(auVar35,auVar30,_DAT_004e1b20);
  auVar23 = vectorPermute(auVar35,auVar30,_DAT_004e1b30);
  auVar42 = vectorPermute(auVar25,auVar26,_DAT_004e1b10);
  auVar32 = vectorPermute(auVar27,auVar28,_DAT_004e1b10);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar21,auVar37);
  auVar40 = vectorPermute(auVar22,auVar24,_DAT_004e1ae0);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar34,auVar36);
  auVar21 = vectorPermute(auVar22,auVar24,_DAT_004e1ac0);
  auVar8._0_16_ = auVar42;
  auVar8._16_16_ = auVar42;
  auVar22 = vectorPermute(auVar25,auVar26,_DAT_004e1b00);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar43,auVar40,auVar37);
  auVar40 = vectorPermute(auVar26,auVar25,_DAT_004e1b00);
  auVar26 = vectorPermute(auVar26,auVar25,_DAT_004e1b10);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar22,auVar38,auVar37);
  auVar9._0_16_ = auVar22;
  auVar9._16_16_ = auVar22;
  auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar39,auVar29);
  auVar29 = vectorPermute(auVar27,auVar28,_DAT_004e1b00);
  auVar10._0_16_ = auVar32;
  auVar10._16_16_ = auVar32;
  auVar39 = vectorMultiplyAddFloatingPoint(auVar8._4_16_,auVar41,auVar37);
  auVar11._0_16_ = auVar29;
  auVar11._16_16_ = auVar29;
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar21,auVar31,auVar24);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar29,auVar35,auVar37);
  auVar24 = vectorPermute(auVar28,auVar27,_DAT_004e1b00);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar10._4_16_,auVar30,auVar37);
  auVar27 = vectorPermute(auVar28,auVar27,_DAT_004e1b10);
  auVar29 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = auVar25 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar21 = auVar25 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar38,auVar39);
  auVar31 = vectorSubtractFloatingPoint
                      (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                       auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
  auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar11._4_16_,auVar30,auVar22);
  auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar35,auVar34);
  auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar9._4_16_,auVar41,auVar36);
  auVar34 = loadVectorLeftIndexed(0xf0,0x4e1a60);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar26,auVar33,auVar25);
  auVar22 = vectorSubtractFloatingPoint
                      (auVar31,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar23,auVar28);
  auVar31 = vectorMultiplyAddFloatingPoint(auVar27,auVar23,auVar29);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar40,auVar33,auVar30);
  auVar29 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = *(undefined1 (*) [16])((uint)(param_3 + param_4 * 0x10 + 0x88) & 0xfffffff0);
  auVar38 = *(undefined1 (*) [16])((uint)(param_3 + param_4 * 0x10 + 0x8c) & 0xfffffff0);
  auVar41 = *(undefined1 (*) [16])((uint)(param_3 + param_4 * 0x10 + 0x90) & 0xfffffff0);
  auVar30 = vectorReciprocalEstimateFloatingPoint(auVar22);
  auVar29 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar22,auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                      );
  auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar30);
  auVar28 = *(undefined1 (*) [16])((uint)(param_3 + param_4 * 0x10 + 0x94) & 0xfffffff0);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar29,auVar37);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar37);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar21,auVar29,auVar37);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar31,auVar29,auVar37);
  auVar29 = auVar23 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar31 = auVar24 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar21 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar30 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar35 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar37
                      );
  auVar29 = auVar32 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar22 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar37
                      );
  auVar31 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,auVar37
                      );
  auVar21 = auVar25 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar26 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar37
                      );
  auVar42 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar37
                      );
  auVar29 = auVar23 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar37
                      );
  auVar23 = auVar23 & (undefined1  [16])0xffffffff;
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar37
                      );
  auVar31 = auVar24 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,auVar37
                      );
  auVar24 = auVar24 & (undefined1  [16])0xffffffff;
  auVar21 = auVar32 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar32 = auVar32 & (undefined1  [16])0xffffffff;
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar35
                      );
  auVar30 = auVar25 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar25 = auVar25 & (undefined1  [16])0xffffffff;
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar39
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar27
                      );
  auVar26 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,auVar26
                      );
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar42
                      );
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar36
                      );
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar34
                      );
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar38
                      );
  auVar30 = vectorAddFloatingPoint(auVar22,auVar33);
  auVar31 = vectorAddFloatingPoint(auVar26,auVar21);
  auVar22 = vectorAddFloatingPoint(auVar32,auVar23);
  auVar29 = vectorAddFloatingPoint(auVar24,auVar29);
  auVar23 = vectorMergeHighWord(auVar30,auVar31);
  auVar31 = vectorMergeLowWord(auVar30,auVar31);
  auVar21 = vectorMergeHighWord(auVar22,auVar29);
  auVar29 = vectorMergeLowWord(auVar22,auVar29);
  vectorMergeHighWord(auVar23,auVar21);
  vectorMergeLowWord(auVar23,auVar21);
  vectorMergeHighWord(auVar31,auVar29);
  vectorMergeLowWord(auVar31,auVar29);
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      FUN_0050f6e4(&DAT_010eef28,uVar19,uVar15 - 0x240,uVar15 - 0x160);
      iVar17 = FUN_005cc784("ViewToShadow0",uVar15 - 0x240);
      uVar18 = uVar19;
      if (iVar17 == 0) break;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)(int)uVar20;
      uVar18 = 0xffffffffffffffff;
    } while (uVar20 < uVar16);
  }
  idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 0x1c0,4)
  ;
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      FUN_0050f6e4(&DAT_010eef28,uVar19,uVar15 - 0x2c0,uVar15 - 0x164);
      iVar17 = FUN_005cc784("ViewToShadow1",uVar15 - 0x2c0);
      uVar18 = uVar19;
      if (iVar17 == 0) break;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)(int)uVar20;
      uVar18 = 0xffffffffffffffff;
    } while (uVar20 < uVar16);
  }
  idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 0x1b0,4)
  ;
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      FUN_0050f6e4(&DAT_010eef28,uVar19,uVar15 - 0x340,uVar15 - 0x168);
      iVar17 = FUN_005cc784("ViewToShadow2",uVar15 - 0x340);
      uVar18 = uVar19;
      if (iVar17 == 0) break;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)(int)uVar20;
      uVar18 = 0xffffffffffffffff;
    } while (uVar20 < uVar16);
  }
  idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 0x1a0,4)
  ;
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      FUN_0050f6e4(&DAT_010eef28,uVar19,uVar15 - 0x3c0,uVar15 - 0x16c);
      iVar17 = FUN_005cc784("ViewToShadow3",uVar15 - 0x3c0);
      uVar18 = uVar19;
      if (iVar17 == 0) break;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)(int)uVar20;
      uVar18 = 0xffffffffffffffff;
    } while (uVar20 < uVar16);
  }
  idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 400,4);
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      uVar18 = uVar19;
      FUN_0050f6e4(&DAT_010eef28,uVar18,uVar15 - 0x440,uVar15 - 0x170);
      iVar17 = FUN_005cc784("Stereo3dParams",uVar15 - 0x440);
      if (iVar17 == 0) break;
      uVar20 = (int)uVar18 + 1;
      uVar18 = 0xffffffffffffffff;
      uVar19 = (longlong)(int)uVar20;
    } while (uVar20 < uVar16);
  }
  fVar1 = (float)param_3[0x69e];
  fVar2 = (float)param_3[0x69f];
  if (*(char *)(param_3 + 4) == '\0') {
    uVar18 = uVar18 & 0xffffffff;
    idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18,uVar15 - 0x13c,4);
    if (param_3[0x6a2] == 1) {
      idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18,uVar15 - 0x15c,4);
    }
    else if (param_3[0x6a2] == 2) {
      idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18,uVar15 - 0x14c,4);
    }
  }
  else {
    if ((param_3[0x69b] & 1U) == 0) {
      iVar17 = param_3[0x613d];
      param_3[iVar17 * 8 + 0x313e] = 0x16;
      param_3[iVar17 * 8 + 0x313c] = (int)uVar18;
      *(undefined1 *)(param_3 + iVar17 * 8 + 0x313f) = 4;
      param_3[iVar17 * 8 + 0x3138] = (int)-fVar1;
      param_3[iVar17 * 8 + 0x3139] = (int)(fVar1 * fVar2);
      param_3[iVar17 * 8 + 0x313a] = 0;
      param_3[iVar17 * 8 + 0x313b] = 0;
      param_3[iVar17 * 8 + 0x313d] = (int)ShadowPass->command - *(int *)ShadowPass;
      param_3[0x613d] = param_3[0x613d] + 1;
    }
    idol_draw::Gfx_SubmitHudDrawCommands
              (param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 0x14c,4);
  }
  idol_draw::BindVertexProgram(param_3,ShadowPass,0xf);
  idol_draw::BindFragmentProgram(param_3,ShadowPass,0x16);
  auVar29 = loadVectorLeftIndexed(lVar13,param_5);
  auVar31 = loadVectorLeftIndexed(4,param_5);
  auVar21 = loadVectorLeftIndexed(8,param_5);
  auVar29 = vectorPermute(auVar29,auVar31,_DAT_004e1b60);
  auVar31 = vectorPermute(auVar21,auStack_180,_DAT_004e1b60);
  vectorPermute(auVar29,auVar31,_DAT_004e1b70);
  FUN_004e0d50(param_1,param_2,param_3,5);
  return;
}



//==== 004e2860  ns=Global  size=0x18c
// sig: undefined FUN_004e2860(void)
// callers(1): 004e2de0 FUN_004e2de0
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2860(double param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  undefined4 in_r8;
  longlong lVar8;
  undefined1 in_vs34 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_70 [88];
  
  uVar2 = *(uint *)(param_2 + 0x185f4);
  auVar9._0_4_ = (float)param_1;
  auVar9._4_4_ = (float)param_1;
  auVar9._8_4_ = (float)param_1;
  auVar9._12_4_ = (float)param_1;
  if (uVar2 < *(int *)(param_2 + 0x185f0) - 4U) {
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(0x70,0x4e2830);
    auVar13 = *(undefined1 (*) [16])(param_2 + 0xa0U & 0xfffffff0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar14 = *(undefined1 (*) [16])(param_2 + 0xd0U & 0xfffffff0);
    auVar15 = *(undefined1 (*) [16])(param_2 + 0xb0U & 0xfffffff0);
    auVar16 = *(undefined1 (*) [16])(param_2 + 0xc0U & 0xfffffff0);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar9,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar11 = vectorPermute(auVar13,auVar16,_DAT_004e2840);
    auVar12 = vectorPermute(auVar15,auVar14,_DAT_004e2840);
    auVar9 = ZEXT416(0);
    auVar17 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = vectorMergeHighWord(auVar11,auVar12);
    auVar11 = vectorPermute(auVar13,auVar16,_DAT_004e2850);
    auVar12 = vectorPermute(auVar15,auVar14,_DAT_004e2850);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar17);
    auVar11 = vectorMergeHighWord(auVar11,auVar12);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar17);
    uVar1 = *(uint *)(param_2 + *(int *)(param_2 + 0x1a6c) * 4 + 0x185f8);
    auVar11 = vectorSubtractFloatingPoint(in_vs34,auVar9);
    auVar9 = vectorAddFloatingPoint(in_vs34,auVar9);
    *(uint *)(param_2 + 0x185f4) = uVar2 + 4;
    uVar7 = (ulonglong)uVar1 + ((ulonglong)uVar2 & 0xfffffff) * 0x10 & 0xffffffff;
    pauVar6 = (undefined1 (*) [16])local_70;
    lVar5 = uVar7 + 4;
    lVar4 = uVar7 + 8;
    lVar8 = 4;
    vectorSubtractFloatingPoint(auVar11,auVar10);
    vectorSubtractFloatingPoint(auVar9,auVar10);
    vectorAddFloatingPoint(auVar9,auVar10);
    vectorAddFloatingPoint(auVar11,auVar10);
    do {
      auVar11 = *pauVar6;
      pauVar6 = pauVar6 + 1;
      auVar9 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = auVar11 >> 0x40 & (undefined1  [16])0xffffffff;
      auVar11 = auVar11 >> 0x20 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar7);
      *(undefined4 *)((uint)uVar7 & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0,lVar5);
      *(undefined4 *)((uint)lVar5 & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0,lVar4);
      *(undefined4 *)((uint)lVar4 & 0xfffffffc) = uVar3;
      lVar5 = lVar5 + 0x10;
      *(undefined4 *)((uint)uVar7 + 0xc) = in_r8;
      lVar4 = lVar4 + 0x10;
      uVar7 = uVar7 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



//==== 004e2a60  ns=Global  size=0x2e0
// sig: undefined FUN_004e2a60(void)
// callers(1): 004e2de0 FUN_004e2de0
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2a60(double param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  undefined4 in_r10;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_90 [128];
  
  uVar1 = *(uint *)(param_2 + 0x185f4);
  auVar10._0_4_ = (float)param_1;
  auVar10._4_4_ = (float)param_1;
  auVar10._8_4_ = (float)param_1;
  auVar10._12_4_ = (float)param_1;
  if (uVar1 < *(int *)(param_2 + 0x185f0) - 4U) {
    auVar11 = vectorSubtractFloatingPoint(in_vs35,in_vs34);
    auVar13 = vectorSubtractFloatingPoint(in_vs34,in_vs35);
    auVar14 = ZEXT416(0);
    auVar12 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = vectorMultiplyAddFloatingPoint(auVar11,auVar11,auVar12);
    auVar15 = vectorPermute(auVar11,auVar11,_DAT_004e2a00);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar12);
    auVar17 = vectorPermute(auVar13,auVar13,_DAT_004e2a00);
    auVar8 = vectorPermute(auVar11,auVar11,_DAT_004e2a10);
    auVar9 = vectorPermute(auVar13,auVar13,_DAT_004e2a10);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar15,auVar14);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar17,auVar16);
    auVar14 = loadVectorLeftIndexed(0x30,0x4e29f0);
    auVar18 = loadVectorLeftIndexed(0x34,0x4e29f0);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar17 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar19 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar18 = *(undefined1 (*) [16])(param_2 + 0xa0U & 0xfffffff0);
    auVar20 = *(undefined1 (*) [16])(param_2 + 0xb0U & 0xfffffff0);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar8,auVar8,auVar15);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar16);
    auVar22 = *(undefined1 (*) [16])(param_2 + 0xc0U & 0xfffffff0);
    auVar25 = *(undefined1 (*) [16])(param_2 + 0xd0U & 0xfffffff0);
    auVar23 = vectorPermute(auVar22,auVar18,_DAT_004e29f0);
    auVar24 = vectorPermute(auVar20,auVar25,_DAT_004e29f0);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar9);
    auVar8 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar15);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar14,auVar9,auVar12);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar8,auVar15,auVar12);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar14,auVar17,auVar12);
    auVar21 = vectorMultiplyAddFloatingPoint(auVar8,auVar17,auVar12);
    pauVar5 = (undefined1 (*) [16])local_90;
    lVar7 = 4;
    auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar9,auVar19);
    auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar15,auVar19);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar16,auVar14);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar21,auVar8);
    auVar21 = vectorPermute(auVar23,auVar24,_DAT_004e2a50);
    auVar16 = vectorCompareEqualToFloatingPoint(auVar9,auVar9);
    auVar9 = vectorConditionalSelect(auVar14,auVar9,auVar16);
    auVar14 = vectorCompareEqualToFloatingPoint(auVar15,auVar15);
    auVar15 = vectorConditionalSelect(auVar8,auVar15,auVar14);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar12);
    auVar9 = vectorPermute(auVar20,auVar22,_DAT_004e29f0);
    auVar14 = vectorPermute(auVar18,auVar25,_DAT_004e29f0);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar15,auVar12);
    auVar13 = vectorPermute(auVar9,auVar14,_DAT_004e2a50);
    auVar14 = vectorPermute(auVar8,auVar8,_DAT_004e2a30);
    auVar9 = vectorPermute(auVar8,auVar8,_DAT_004e2a40);
    auVar8 = vectorPermute(auVar11,auVar11,_DAT_004e2a30);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar21,auVar12);
    auVar11 = vectorPermute(auVar11,auVar11,_DAT_004e2a40);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar21,auVar12);
    auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar13,auVar14);
    auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar13,auVar8);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar12);
    auVar16 = vectorPermute(auVar9,auVar9,_DAT_004e2a00);
    auVar8 = vectorPermute(auVar9,auVar9,_DAT_004e2a10);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar11,auVar11,auVar12);
    auVar13 = vectorPermute(auVar11,auVar11,_DAT_004e2a00);
    auVar18 = vectorPermute(auVar11,auVar11,_DAT_004e2a10);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar16,auVar16,auVar15);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar14);
    auVar14 = ZEXT416(0xffffffff);
    auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    uVar6 = (ulonglong)*(uint *)(param_2 + *(int *)(param_2 + 0x1a6c) * 4 + 0x185f8) +
            ((ulonglong)uVar1 & 0xfffffff) * 0x10 & 0xffffffff;
    auVar15 = vectorMultiplyAddFloatingPoint(auVar8,auVar8,auVar15);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar18,auVar18,auVar13);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar10,auVar17,auVar14);
    lVar4 = uVar6 + 4;
    auVar10 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar10 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar15 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar13);
    auVar16 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar8);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar13,auVar12);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar15,auVar17,auVar12);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar16,auVar8,auVar12);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar12);
    auVar13 = vectorNegativeMultiplySubtractFloatingPoint(auVar15,auVar13,auVar19);
    auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar8,auVar19);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar13,auVar10,auVar15);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar8,auVar17,auVar16);
    auVar8 = vectorCompareEqualToFloatingPoint(auVar13,auVar13);
    auVar13 = vectorConditionalSelect(auVar15,auVar13,auVar8);
    auVar8 = vectorCompareEqualToFloatingPoint(auVar10,auVar10);
    auVar8 = vectorConditionalSelect(auVar16,auVar10,auVar8);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar9,auVar13,auVar12);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar11,auVar8,auVar12);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar10,auVar14,auVar12);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar9,auVar14,auVar12);
    vectorAddFloatingPoint(in_vs34,auVar8);
    vectorSubtractFloatingPoint(in_vs34,auVar8);
    vectorSubtractFloatingPoint(in_vs35,auVar10);
    vectorAddFloatingPoint(in_vs35,auVar10);
    *(uint *)(param_2 + 0x185f4) = uVar1 + 4;
    lVar3 = uVar6 + 8;
    do {
      auVar8 = *pauVar5;
      pauVar5 = pauVar5 + 1;
      auVar10 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = auVar8 >> 0x40 & (undefined1  [16])0xffffffff;
      auVar8 = auVar8 >> 0x20 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0,uVar6);
      *(undefined4 *)((uint)uVar6 & 0xfffffffc) = uVar2;
      uVar2 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,lVar4);
      *(undefined4 *)((uint)lVar4 & 0xfffffffc) = uVar2;
      uVar2 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0,lVar3);
      *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
      *(undefined4 *)((uint)uVar6 + 0xc) = in_r10;
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + 0x10;
      uVar6 = uVar6 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



//==== 004e2de0  ns=Global  size=0x334
// sig: undefined FUN_004e2de0(void)
// callers(0): 
// callees(3): 004e2860 FUN_004e2860; 004e2a60 FUN_004e2a60; 005dd914 mathfunc::SinCos

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2de0(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 in_vs34 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float local_180;
  float local_17c;
  float local_178;
  undefined4 uStack_174;
  
  if (*(uint *)(param_4 + 0x185f4) < *(int *)(param_4 + 0x185f0) - 4U) {
    auVar21 = in_vs34;
    FUN_004e2860(param_2,param_4);
    puVar3 = &DAT_004e2d40;
    dVar8 = 0.0;
    vectorAddFloatingPoint(in_vs34,_DAT_004e2d40);
    dVar7 = 6.2831854820251465;
    dVar6 = 0.39269909262657166;
    vectorAddFloatingPoint(in_vs34,_DAT_004e2d50);
    dVar9 = dVar8;
    auVar13 = _DAT_004e2d70;
    auVar15 = _DAT_004e2d80;
    auVar17 = _DAT_004e2da0;
    auVar18 = _DAT_004e2db0;
    auVar19 = _DAT_004e2dc0;
    auVar20 = _DAT_004e2dd0;
    auVar23 = _DAT_004e2d90;
    do {
      uVar2 = mathfunc::SinCos(dVar9,puVar3,1);
      dVar5 = (double)(float)(extraout_f1 * param_1);
      dVar4 = (double)mathfunc::SinCos(dVar9,uVar2,0);
      fVar1 = (float)(dVar4 * param_1);
      dVar4 = (double)fVar1;
      auVar16._0_4_ = local_180;
      auVar16._4_4_ = local_17c;
      auVar16._8_4_ = local_178;
      auVar16._12_4_ = uStack_174;
      auVar22._0_4_ = fVar1;
      auVar22._4_4_ = fVar1;
      auVar22._8_4_ = fVar1;
      auVar22._12_4_ = fVar1;
      auVar12._0_4_ = (float)dVar5;
      auVar12._4_4_ = (float)dVar5;
      auVar12._8_4_ = (float)dVar5;
      auVar12._12_4_ = (float)dVar5;
      auVar10 = vectorPermute(auVar22,auVar12,auVar13);
      auVar11 = ZEXT416(0);
      auVar14 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = vectorPermute(auVar10,auVar14,auVar15);
      auVar16 = vectorPermute(auVar11,auVar16,auVar23);
      vectorAddFloatingPoint(auVar16,auVar21);
      FUN_004e2a60(param_3,param_4);
      auVar11 = vectorPermute(auVar22,auVar12,auVar17);
      auVar11 = vectorPermute(auVar11,auVar14,auVar18);
      auVar16 = vectorPermute(auVar11,auVar16,auVar23);
      vectorAddFloatingPoint(auVar16,auVar21);
      FUN_004e2a60(param_3,param_4);
      auVar11 = vectorPermute(auVar22,auVar12,auVar19);
      local_180 = (float)dVar8;
      auVar11 = vectorPermute(auVar11,auVar14,auVar20);
      local_17c = (float)dVar5;
      local_178 = (float)dVar4;
      auVar11 = vectorPermute(auVar11,auVar16,auVar23);
      vectorAddFloatingPoint(auVar11,in_vs34);
      puVar3 = (undefined *)FUN_004e2a60(param_3,param_4);
      dVar9 = (double)(float)(dVar9 + dVar6);
    } while (dVar9 < dVar7);
  }
  return;
}



//==== 004e3114  ns=Global  size=0x64
// sig: undefined FUN_004e3114(void)
// callers(1): 004eda68 idol_draw::Insert_WaitCmd_Marker
// callees(0): 

void FUN_004e3114(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0x1a6c) & 1) == 0) {
    iVar3 = (int)(param_2 << 2);
    iVar2 = param_1 + iVar3;
    piVar1 = *(int **)((int)&DepthPass + iVar3);
    *(int *)(param_1 + (int)(param_2 << 5) + *(int *)(iVar2 + 0x2354) * 4 + 0x2380) =
         piVar1[2] - *piVar1;
    *(int *)(iVar2 + 0x2354) = *(int *)(iVar2 + 0x2354) + 1;
  }
  return;
}



//==== 004e3178  ns=Global  size=0x50
// sig: undefined FUN_004e3178(void)
// callers(1): 0006e740 draw::Sprite_DrawRotated
// callees(0): 

void FUN_004e3178(int param_1)

{
  RsxCmd *pRVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1858c);
  pRVar1 = HUD_Pass->command;
  iVar2 = *(int *)HUD_Pass;
  *(int *)(param_1 + 0x1858c) = iVar3 + 1;
  *(int *)(param_1 + iVar3 * 4 + 0x1850c) = (int)pRVar1 + (4 - iVar2);
  return;
}



//==== 004e31c8  ns=Global  size=0x174
// sig: undefined FUN_004e31c8(void)
// callers(0): 
// callees(7): 004fe098 idol::AllocateMemAlign; 0050f130 FUN_0050f130; 0050f300 FUN_0050f300; 0050f3ac FUN_0050f3ac; 0050f3b8 FUN_0050f3b8; 005c5ad0 libc::memcpy; 0064f2a4 cell::cellGcmAddressToOffset

void FUN_004e31c8(void)

{
  void *__src;
  size_t __n;
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 local_50 [4];
  
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_008fa448;
  puVar4 = &DAT_010ee630;
  puVar5 = &DAT_010ee330;
  do {
    FUN_0050f130(*ppuVar3,*puVar4,puVar5);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x30;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_008fa488;
  puVar4 = &DAT_010ef438;
  puVar5 = &DAT_010eeb08;
  puVar6 = &DAT_010ee670;
  do {
    FUN_0050f130(*ppuVar3,*puVar4,puVar5);
    __src = (void *)FUN_0050f3b8(puVar5);
    __n = FUN_0050f3ac(puVar5);
    uVar1 = idol::AllocateMemAlign(ZEXT48(boot::g_pGame) + 0x7c,__n,0x40);
    libc::memcpy((void *)uVar1,__src,__n);
    cell::cellGcmAddressToOffset(uVar1,local_50);
    FUN_0050f300(puVar5,puVar6);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    *puVar6 = local_50[0];
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x30;
    puVar6 = puVar6 + 6;
  } while (iVar2 < 0x31);
  return;
}



//==== 004e3348  ns=Global  size=0x1f0
// sig: undefined FUN_004e3348(void)
// callers(0): 
// callees(0): 

void FUN_004e3348(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar4 = ZEXT416(0xffffffff);
  auVar9 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar3._0_4_ = param_4;
  auVar3._4_4_ = param_4;
  auVar3._8_4_ = param_4;
  auVar3._12_4_ = param_4;
  auVar4 = loadVectorLeftIndexed(0x30,0x4e333c);
  auVar6 = loadVectorLeftIndexed(4,0x4e333c);
  auVar8 = loadVectorLeftIndexed(8,0x4e333c);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar4 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar3 = vectorLogicalAnd(auVar3,auVar5);
  auVar4._0_4_ = param_3;
  auVar4._4_4_ = param_3;
  auVar4._8_4_ = param_3;
  auVar4._12_4_ = param_3;
  **(undefined4 **)(param_2 + 8) = &DAT_00080a00;
  auVar6 = vectorLogicalAnd(auVar4,auVar5);
  auVar4 = ZEXT416(0xffffffff);
  auVar9 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar3,0);
  auVar3 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  *(int *)(*(int *)(param_2 + 8) + 4) = param_3 << 0x10;
  auVar4 = vectorConvertFromUnsignedFixedPointWord(auVar6,0);
  auVar6 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  *(int *)(*(int *)(param_2 + 8) + 8) = param_4 << 0x10;
  iVar1 = *(int *)(param_2 + 8);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar4,auVar7,auVar6);
  *(int *)(param_2 + 8) = iVar1 + 0xc;
  *(undefined4 *)(iVar1 + 0xc) = 0x80394;
  auVar7 = vectorMultiplyAddFloatingPoint(auVar5,auVar7,auVar10);
  auVar4 = ZEXT416(0xffffffff);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0;
  auVar4 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  *(undefined4 *)(*(int *)(param_2 + 8) + 8) = 0x3f800000;
  auVar4 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar1 + 0xc;
  *(undefined4 *)(iVar1 + 0xc) = 0x200a20;
  uVar2 = storeVectorElementWordIndexed(auVar6,4,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 4 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar7,8,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 8 & 0xfffffffc) = uVar2;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x10) = 0;
  uVar2 = storeVectorElementWordIndexed(auVar6,0x14,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 0x14 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar4,0x18,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 0x18 & 0xfffffffc) = uVar2;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x1c) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar1 + 0x24;
  *(undefined4 *)(iVar1 + 0x24) = 0x200a20;
  uVar2 = storeVectorElementWordIndexed(auVar6,4,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 4 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar7,8,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 8 & 0xfffffffc) = uVar2;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x10) = 0;
  uVar2 = storeVectorElementWordIndexed(auVar6,0x14,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 0x14 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar4,0x18,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 0x18 & 0xfffffffc) = uVar2;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x1c) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar1 + 0x24;
  *(undefined4 *)(iVar1 + 0x24) = 0x808c0;
  *(int *)(*(int *)(param_2 + 8) + 4) = param_3 << 0x10;
  *(int *)(*(int *)(param_2 + 8) + 8) = param_4 << 0x10;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xc;
  return;
}



//==== 004e3538  ns=Global  size=0x160
// sig: undefined FUN_004e3538(void)
// callers(0): 
// callees(8): 004debdc FUN_004debdc; 004fe098 idol::AllocateMemAlign; 004ffc9c print_tty2; 005c4f10 FUN_005c4f10; 005c52f0 FUN_005c52f0; 005c5364 FUN_005c5364; 005c5568 FUN_005c5568; 005c55dc FUN_005c55dc
// strings: 00659340: 'ERROR: open file %s\n' | 006593a8: 'ERROR: memory allocation failed\n'

longlong FUN_004e3538(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_3 = 0;
  uVar2 = FUN_005c52f0(param_2,&DAT_00659338);
  if ((int)uVar2 == 0) {
    print_tty2("ERROR: open file %s\n",param_2);
    lVar3 = 0;
  }
  else {
    FUN_005c5568(uVar2,0,2);
    uVar4 = FUN_005c55dc(uVar2);
    uVar4 = uVar4 & 0xffffffff;
    FUN_005c5568(uVar2,0,0);
    uVar1 = (undefined4)(uVar4 << 1);
    lVar3 = idol::AllocateMemAlign(param_4,uVar1,0x100000);
    if ((int)lVar3 == 0) {
      print_tty2("ERROR: memory allocation failed\n");
      lVar3 = 0;
    }
    else {
      *param_3 = uVar1;
      FUN_005c5364(lVar3,1,uVar4,uVar2);
      FUN_005c4f10(uVar2);
      FUN_004debdc(param_1,lVar3,lVar3 + uVar4 & 0xffffffff,0x200,0x200);
    }
  }
  return lVar3;
}



//==== 004e3698  ns=Global  size=0x4
// sig: undefined FUN_004e3698(void)
// callers(0): 
// callees(0): 

void FUN_004e3698(void)

{
  return;
}



//==== 004e369c  ns=Global  size=0x4c
// sig: undefined FUN_004e369c(void)
// callers(0): 
// callees(1): 004edccc FUN_004edccc

void FUN_004e369c(void)

{
  int iVar1;
  
  iVar1 = DAT_008fa568 + 1;
  if (DAT_008fa568 == 1) {
    FUN_004edccc(&DAT_01111700);
    iVar1 = 0;
  }
  DAT_008fa568 = iVar1;
  return;
}



//==== 004e36e8  ns=Global  size=0x62c
// sig: undefined FUN_004e36e8(void)
// callers(0): 
// callees(0): 

void FUN_004e36e8(void)

{
  DAT_010ee630 = DAT_00901bb8 - DAT_00901b18;
  DAT_010ee634 = DAT_00901d81 - DAT_00901bb8;
  DAT_010ee638 = DAT_00901f80 - DAT_00901d81;
  DAT_010ee63c = DAT_00902430 - DAT_00902319;
  DAT_010ee640 = DAT_00902621 - DAT_00902430;
  DAT_010ee644 = DAT_0090283f - DAT_00902621;
  DAT_010ee648 = DAT_00902b46 - DAT_0090283f;
  DAT_010ee64c = DAT_009018e8 - DAT_0090171a;
  DAT_010ee650 = DAT_00902319 - DAT_009020eb;
  DAT_010ee654 = DAT_00901b18 - DAT_009019a1;
  DAT_010ee658 = DAT_00902d01 - DAT_00902b46;
  DAT_010ee65c = DAT_009019a1 - DAT_009018e8;
  DAT_010ee660 = DAT_009020eb - DAT_00902013;
  DAT_010ee664 = DAT_00902013 - DAT_00901f80;
  DAT_010ee668 = DAT_0090171a - DAT_0090165d;
  DAT_010ee66c = DAT_00902e8f - DAT_00902d01;
  DAT_010ef438 = DAT_008fda8a - DAT_008fda12;
  DAT_010ef43c = DAT_008fda12 - DAT_008fd931;
  DAT_010ef440 = DAT_0090154f - DAT_009014f6;
  DAT_010ef444 = DAT_008ff8ba - DAT_008ff841;
  DAT_010ef448 = DAT_008ffc0d - DAT_008ffaa6;
  DAT_010ef44c = DAT_008fd862 - DAT_008fd778;
  DAT_010ef450 = DAT_0090018b - DAT_009000c1;
  DAT_010ef454 = DAT_0090027a - DAT_0090018b;
  DAT_010ef458 = DAT_008ffdd4 - DAT_008ffd1a;
  DAT_010ef45c = DAT_00900304 - DAT_0090027a;
  DAT_010ef460 = DAT_0090034a - DAT_00900304;
  DAT_010ef464 = DAT_0090165d - DAT_0090154f;
  DAT_010ef468 = DAT_008ffaa6 - DAT_008ffa1c;
  DAT_010ef46c = DAT_008ffa1c - DAT_008ff8ba;
  DAT_010ef470 = DAT_008ffd1a - DAT_008ffc0d;
  DAT_010ef474 = DAT_008fd931 - DAT_008fd8a8;
  DAT_010ef478 = DAT_008fdbcc - DAT_008fda8a;
  DAT_010ef47c = DAT_008fdd0e - DAT_008fdbcc;
  DAT_010ef480 = DAT_008fd8a8 - DAT_008fd862;
  DAT_010ef484 = DAT_008fd629 - DAT_008fd4a0;
  DAT_010ef488 = DAT_008fd778 - DAT_008fd629;
  DAT_010ef48c = DAT_009014f6 - DAT_0090034a;
  DAT_010ef490 = DAT_009000c1 - DAT_008ffdd4;
  DAT_010ef494 = DAT_008fde2b - DAT_008fdd0e;
  DAT_010ef498 = DAT_008fdf48 - DAT_008fde2b;
  DAT_010ef49c = DAT_008fe065 - DAT_008fdf48;
  DAT_010ef4a0 = DAT_008fe1a2 - DAT_008fe065;
  DAT_010ef4a4 = DAT_008fe2bf - DAT_008fe1a2;
  DAT_010ef4a8 = DAT_008fe636 - DAT_008fe519;
  DAT_010ef4ac = DAT_008fe753 - DAT_008fe636;
  DAT_010ef4b0 = DAT_008fe860 - DAT_008fe753;
  DAT_010ef4b4 = DAT_008fe3dc - DAT_008fe2bf;
  DAT_010ef4b8 = DAT_008fe519 - DAT_008fe3dc;
  DAT_010ef4bc = DAT_008ff332 - DAT_008ff215;
  DAT_010ef4c0 = DAT_008ff45f - DAT_008ff332;
  DAT_010ef4c4 = DAT_008fe96d - DAT_008fe860;
  DAT_010ef4c8 = DAT_008fea6a - DAT_008fe96d;
  DAT_010ef4cc = DAT_008feb87 - DAT_008fea6a;
  DAT_010ef4d0 = DAT_008feca4 - DAT_008feb87;
  DAT_010ef4d4 = DAT_008fedc1 - DAT_008feca4;
  DAT_010ef4d8 = DAT_008feebe - DAT_008fedc1;
  DAT_010ef4dc = DAT_008fefdb - DAT_008feebe;
  DAT_010ef4e0 = DAT_008ff0f8 - DAT_008fefdb;
  DAT_010ef4e4 = DAT_008ff215 - DAT_008ff0f8;
  DAT_010ef4e8 = DAT_008ff519 - DAT_008ff45f;
  DAT_010ef4ec = DAT_008ff5e3 - DAT_008ff519;
  DAT_010ef4f0 = DAT_008ff6ad - DAT_008ff5e3;
  DAT_010ef4f4 = DAT_008ff777 - DAT_008ff6ad;
  DAT_010ef4f8 = DAT_008ff841 - DAT_008ff777;
  return;
}



//==== 004e3d20  ns=Global  size=0x54
// sig: undefined FUN_004e3d20(void)
// callers(0): 
// callees(0): 

void FUN_004e3d20(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 < 4) {
    if (2 < param_1) {
      *param_2 = 2;
      *param_3 = 1;
      return;
    }
  }
  else if (param_1 < 6) {
    *param_2 = 2;
    *param_3 = 2;
    return;
  }
  *param_2 = 1;
  *param_3 = 1;
  return;
}



//==== 004e3d74  ns=Global  size=0x78
// sig: undefined FUN_004e3d74(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 0050436c FUN_0050436c

void FUN_004e3d74(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_0050436c(boot::g_pGame);
  iVar2 = (param_2 - (param_2 & 0xfffff)) + 0x100000;
  idol::AllocateMemAlign
            (uVar1,iVar2 + ((uint)((LZCOUNT(-(param_2 & 0xfffff)) << 0x3a) >> 0x3f) &
                           param_2 - iVar2),0x10000);
  return;
}



//==== 004e3dec  ns=Global  size=0x38
// sig: undefined FUN_004e3dec(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004e3dec(int param_1)

{
  if (param_1 < 2) {
    if (0 < param_1) {
      return 2;
    }
  }
  else if (param_1 < 3) {
    return 4;
  }
  return 1;
}



//==== 004e3e24  ns=Global  size=0xc4
// sig: undefined FUN_004e3e24(void)
// callers(0): 
// callees(3): 004fe098 idol::AllocateMemAlign; 0064f2a4 cell::cellGcmAddressToOffset; 0064f3c4 cell::cellGcmSetTile

undefined8
FUN_004e3e24(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined1 param_4,
            undefined1 param_5,uint *param_6)

{
  undefined8 uVar1;
  
  uVar1 = idol::AllocateMemAlign(ZEXT48(boot::g_pGame) + 0x7c,(int)(param_2 >> 0x20),0x10000);
  cell::cellGcmAddressToOffset(uVar1,param_6);
  cell::cellGcmSetTile
            (param_4,0,*param_6,param_2 >> 0x20,param_2 & 0xffffffff,param_3 >> 0x20 & 0xff,
             *param_6 >> 0x10,param_5);
  return uVar1;
}



//==== 004e3ee8  ns=Global  size=0x144
// sig: undefined FUN_004e3ee8(void)
// callers(5): 004e40d8 FUN_004e40d8; 004e47cc FUN_004e47cc; 004e4d3c FUN_004e4d3c; 004e54e8 FUN_004e54e8; 004e5a34 FUN_004e5a34
// callees(1): 0064f244 cell::cellGcmGetTiledPitchSize

void FUN_004e3ee8(uint *param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 2;
  if (param_6 < 4) {
    if (2 < param_6) {
      iVar3 = 2;
      iVar4 = 1;
      uVar2 = 7;
      goto LAB_004e3f74;
    }
  }
  else {
    if (param_6 < 5) {
      uVar2 = 8;
      iVar3 = 2;
      goto LAB_004e3f74;
    }
    if (param_6 < 6) {
      uVar2 = 8;
      iVar3 = 2;
      goto LAB_004e3f74;
    }
  }
  iVar3 = 1;
  uVar2 = 0;
  iVar4 = 1;
LAB_004e3f74:
  uVar2 = (uint)((LZCOUNT(8 - param_5) << 0x3a) >> 0x3f) & uVar2;
  uVar1 = cell::cellGcmGetTiledPitchSize(param_7 * (param_3 + 0x3fU & 0xffffffc0) * iVar3);
  param_1[1] = uVar1;
  *param_1 = uVar1 * (param_4 + 0x3fU & 0xffffffc0) * iVar4 + 0xffff & 0xffff0000;
  param_1[2] = uVar2 + ((uint)((LZCOUNT(2 - param_5) << 0x3a) >> 0x3f) & -uVar2);
  return;
}



//==== 004e402c  ns=Global  size=0xac
// sig: undefined FUN_004e402c(void)
// callers(5): 004e40d8 FUN_004e40d8; 004e47cc FUN_004e47cc; 004e4d3c FUN_004e4d3c; 004e54e8 FUN_004e54e8; 004e5a34 FUN_004e5a34
// callees(0): 

undefined8 FUN_004e402c(int param_1)

{
  if (param_1 < 10) {
    if (param_1 < 6) {
      if (0 < param_1) {
        if (param_1 < 4) {
          return 2;
        }
        return 3;
      }
    }
    else if (7 < param_1) {
      if (8 < param_1) {
        return 1;
      }
      return 4;
    }
  }
  else {
    if (param_1 < 0xd) {
      if (param_1 < 0xb) {
        return 2;
      }
      if (0xb < param_1) {
        return 0x10;
      }
      return 8;
    }
    if (param_1 < 0x10) {
      if (0xd < param_1) {
        return 3;
      }
      return 4;
    }
    if (param_1 < 0x11) {
      return 4;
    }
  }
  return 0;
}



//==== 004e40d8  ns=Global  size=0x6f4
// sig: undefined FUN_004e40d8(void)
// callers(1): 004d7464 FUN_004d7464
// callees(8): 004e3ee8 FUN_004e3ee8; 004e402c FUN_004e402c; 004fe098 idol::AllocateMemAlign; 0050436c FUN_0050436c; 0064f2a4 cell::cellGcmAddressToOffset; 0064f344 cell::cellGcmSetDisplayBuffer; 0064f3c4 cell::cellGcmSetTile; 0064f3e4 cell::cellGcmSetZcull

void FUN_004e40d8(undefined4 *param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                 int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  longlong lVar16;
  char in_stack_00000077;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 uStack_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 uStack_79;
  
  param_1[0x4a] = param_2;
  param_1[0x4c] = param_3;
  uVar13 = param_2 + 0x3fU & 0xffffffc0;
  uVar3 = param_3 + 0x3fU & 0xffffffc0;
  iVar11 = (int)param_5;
  param_1[0x4e] = uVar13;
  param_1[0x50] = uVar3;
  if (iVar11 == 0) {
    param_1[0x52] = 0x40;
    param_1[0x47] = 0;
    param_1[0x3c] = 0;
  }
  else {
    if (param_4 == 0) {
      uVar4 = FUN_004e402c(param_5);
      FUN_004e3ee8(&local_90,param_1,uVar13,uVar3,param_5,param_8,uVar4);
      param_1[0x52] = local_8c;
      param_1[0x47] = local_90;
      uVar13 = DAT_010ef528;
      uVar5 = ZEXT48(boot::g_pGame);
      uVar3 = DAT_010ef528 + 1;
      param_1[0x43] = DAT_010ef528;
      DAT_010ef528 = uVar3;
      uVar4 = idol::AllocateMemAlign(uVar5 + 0x7c,local_90,0x10000);
      cell::cellGcmAddressToOffset(uVar4,param_1 + 0x3e);
      cell::cellGcmSetTile
                (uVar13 & 0xff,0,param_1[0x3e],local_90,local_8c,uStack_85,
                 (uint)param_1[0x3e] >> 0x10,0);
    }
    else {
      iVar6 = FUN_004e402c(param_5);
      uVar13 = param_1[0x4e] * iVar6 * param_1[0x50];
      param_1[0x52] = param_1[0x4e] * iVar6;
      param_1[0x47] = uVar13;
      pvVar2 = boot::g_pGame;
      param_1[0x43] = 0xffffffff;
      uVar4 = FUN_0050436c(pvVar2);
      iVar6 = (uVar13 - (uVar13 & 0xfffff)) + 0x100000;
      uVar4 = idol::AllocateMemAlign
                        (uVar4,iVar6 + ((uint)((LZCOUNT(-(uVar13 & 0xfffff)) << 0x3a) >> 0x3f) &
                                       uVar13 - iVar6),0x10000);
    }
    param_1[0x3c] = (int)uVar4;
    if (in_stack_00000077 != '\0') {
      uVar13 = DAT_010ef530 & 0xff;
      uVar3 = DAT_010ef530 + 1;
      param_1[0x46] = DAT_010ef530;
      DAT_010ef530 = uVar3;
      cell::cellGcmSetDisplayBuffer(uVar13,param_1[0x3e],param_1[0x52],param_1[0x4a],param_1[0x4c]);
    }
  }
  iVar14 = (int)param_7;
  iVar6 = (int)param_8;
  if (iVar14 == 0) {
    param_1[0x54] = 0x40;
    param_1[0x49] = 0;
    param_1[0x3d] = 0;
  }
  else if (param_6 == 0) {
    if (iVar14 < 2) {
      if (iVar14 < 1) {
LAB_004e433c:
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      if (2 < iVar14) goto LAB_004e433c;
      uVar4 = 4;
    }
    FUN_004e3ee8(&local_84,param_1,param_1[0x4e],param_1[0x50],param_7,param_8,uVar4);
    param_1[0x54] = local_80;
    param_1[0x49] = local_84;
    iVar7 = DAT_010ef52c + 1;
    param_1[0x45] = DAT_010ef52c;
    DAT_010ef52c = iVar7;
    uVar13 = DAT_010ef528;
    if ((iVar6 == 5) || (iVar6 == 4)) {
      uVar1 = 0xc;
    }
    else if (iVar6 == 3) {
      uVar1 = 0xb;
    }
    else {
      uVar1 = uStack_79;
      if (iVar6 == 0) {
        uVar1 = 9;
      }
    }
    if (iVar14 == 0) {
      uVar1 = 0;
    }
    uVar5 = ZEXT48(boot::g_pGame);
    uVar3 = DAT_010ef528 + 1;
    param_1[0x44] = DAT_010ef528;
    DAT_010ef528 = uVar3;
    uVar4 = idol::AllocateMemAlign(uVar5 + 0x7c,local_84,0x10000);
    cell::cellGcmAddressToOffset(uVar4,param_1 + 0x42);
    cell::cellGcmSetTile
              (uVar13 & 0xff,0,param_1[0x42],local_84,local_80,uVar1,(uint)param_1[0x42] >> 0x10,2);
    param_1[0x3d] = (int)uVar4;
    cell::cellGcmSetZcull
              (param_1[0x45] & 0xff,param_1[0x42],param_1[0x4e],param_1[0x50],DAT_008fa620,2,param_8
               ,0);
    DAT_008fa620 = DAT_008fa620 + param_1[0x4e] * param_1[0x50];
  }
  else {
    if (iVar14 < 2) {
      if (iVar14 < 1) {
LAB_004e44f0:
        iVar7 = 1;
      }
      else {
        iVar7 = 2;
      }
    }
    else {
      if (2 < iVar14) goto LAB_004e44f0;
      iVar7 = 4;
    }
    uVar13 = param_1[0x4e] * iVar7 * param_1[0x50];
    param_1[0x54] = param_1[0x4e] * iVar7;
    pvVar2 = boot::g_pGame;
    param_1[0x49] = uVar13;
    param_1[0x45] = 0xffffffff;
    param_1[0x44] = 0xffffffff;
    uVar4 = FUN_0050436c(pvVar2);
    iVar7 = (uVar13 - (uVar13 & 0xfffff)) + 0x100000;
    uVar8 = idol::AllocateMemAlign
                      (uVar4,iVar7 + ((uint)((LZCOUNT(-(uVar13 & 0xfffff)) << 0x3a) >> 0x3f) &
                                     uVar13 - iVar7),0x10000);
    param_1[0x3d] = uVar8;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar16 = 3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(byte *)((int)param_1 + 2) =
       (char)param_5 + ((byte)((LZCOUNT(-iVar11) << 0x3a) >> 0x3f) & 8U - (char)param_5);
  *(char *)(param_1 + 1) = (char)param_4;
  *(byte *)((int)param_1 + 3) = (byte)((ulonglong)(LZCOUNT(iVar11) << 0x20) >> 0x25) ^ 1;
  iVar7 = (int)param_1 + 1;
  param_1[2] = param_1[0x3e];
  puVar10 = param_1 + 1;
  param_1[6] = param_1[0x52];
  do {
    *(undefined1 *)(iVar7 + 4) = 0;
    puVar10[2] = 0;
    iVar7 = iVar7 + 1;
    puVar10[6] = 0x40;
    puVar10 = puVar10 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  if (iVar14 == 0) {
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    uVar12 = 0x40;
    *(undefined1 *)(param_1 + 10) = 1;
    uVar8 = param_1[0x42];
  }
  else {
    uVar8 = param_1[0x42];
    *(char *)(param_1 + 10) = (char)param_7;
    uVar12 = param_1[0x54];
    *(char *)((int)param_1 + 0x29) = (char)param_6;
    param_1[0xb] = uVar8;
  }
  param_1[0xc] = uVar12;
  *(undefined1 *)param_1 = 1;
  *(char *)((int)param_1 + 1) = (char)param_8;
  *(short *)(param_1 + 0xd) = (short)param_2;
  *(short *)((int)param_1 + 0x36) = (short)param_3;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  if (iVar6 < 4) {
    if (2 < iVar6) {
      sVar15 = 2;
      sVar9 = 1;
      goto LAB_004e46cc;
    }
  }
  else if (iVar6 < 6) {
    sVar15 = 2;
    sVar9 = 2;
    goto LAB_004e46cc;
  }
  sVar15 = 1;
  sVar9 = 1;
LAB_004e46cc:
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  sVar15 = (short)param_2 * sVar15;
  sVar9 = (short)param_3 * sVar9;
  *(undefined1 *)((int)param_1 + 0x7a) = 2;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  *(short *)(param_1 + 0x20) = sVar15;
  param_1[0x1f] = 0xaae4;
  *(byte *)(param_1 + 0x1e) = ((byte)((LZCOUNT(9 - iVar11) << 0x3a) >> 0x3f) & 0xfc) + 0xa5;
  *(short *)((int)param_1 + 0x82) = sVar9;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  param_1[0x22] = param_1[0x52];
  param_1[0x23] = param_1[0x3e];
  if (iVar14 != 0) {
    *(undefined1 *)(param_1 + 0x36) = 0xa5;
    param_1[0x37] = 0xa993;
    *(undefined1 *)((int)param_1 + 0xd9) = 1;
    *(undefined1 *)((int)param_1 + 0xda) = 2;
    *(undefined1 *)((int)param_1 + 0xdb) = 0;
    *(short *)(param_1 + 0x38) = sVar15;
    *(short *)((int)param_1 + 0xe2) = sVar9;
    *(undefined2 *)(param_1 + 0x39) = 1;
    *(undefined1 *)((int)param_1 + 0xe6) = 0;
    param_1[0x3a] = param_1[0x54];
    param_1[0x3b] = uVar8;
  }
  return;
}



//==== 004e47cc  ns=Global  size=0x3ec
// sig: undefined FUN_004e47cc(void)
// callers(0): 
// callees(6): 004e3ee8 FUN_004e3ee8; 004e402c FUN_004e402c; 004fe098 idol::AllocateMemAlign; 0064f2a4 cell::cellGcmAddressToOffset; 0064f344 cell::cellGcmSetDisplayBuffer; 0064f3c4 cell::cellGcmSetTile

void FUN_004e47cc(undefined4 *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 int param_6,undefined8 param_7,char param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  longlong lVar13;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 uStack_65;
  
  param_1[0x4a] = param_2;
  uVar4 = param_2 + 0x3fU & 0xffffffc0;
  param_1[0x4c] = param_3;
  uVar5 = param_3 + 0x3fU & 0xffffffc0;
  iVar9 = (int)param_5;
  param_1[0x4e] = uVar4;
  param_1[0x50] = uVar5;
  if (iVar9 == 0) {
    param_1[0x52] = 0x40;
    param_1[0x47] = 0;
    param_1[0x3c] = 0;
  }
  else {
    uVar6 = FUN_004e402c(param_5);
    FUN_004e3ee8(&local_70,param_1,uVar4,uVar5,param_5,param_7,uVar6);
    param_1[0x52] = local_6c;
    param_1[0x47] = local_70;
    uVar4 = DAT_010ef528;
    uVar7 = ZEXT48(boot::g_pGame);
    uVar5 = DAT_010ef528 + 1;
    param_1[0x43] = DAT_010ef528;
    DAT_010ef528 = uVar5;
    uVar6 = idol::AllocateMemAlign(uVar7 + 0x7c,local_70,0x10000);
    cell::cellGcmAddressToOffset(uVar6,param_1 + 0x3e);
    cell::cellGcmSetTile
              (uVar4 & 0xff,0,param_1[0x3e],local_70,local_6c,uStack_65,(uint)param_1[0x3e] >> 0x10,
               0);
    param_1[0x3c] = (int)uVar6;
    if (param_8 != '\0') {
      uVar4 = DAT_010ef530 & 0xff;
      uVar5 = DAT_010ef530 + 1;
      param_1[0x46] = DAT_010ef530;
      DAT_010ef530 = uVar5;
      cell::cellGcmSetDisplayBuffer(uVar4,param_1[0x3e],param_1[0x52],param_1[0x4e],param_1[0x50]);
    }
  }
  if (param_6 == 0) {
    param_1[0x54] = 0x40;
    param_1[0x49] = 0;
    param_1[0x3d] = 0;
  }
  else {
    param_1[0x54] = *(undefined4 *)(param_6 + 0x150);
    param_1[0x49] = *(undefined4 *)(param_6 + 0x124);
    uVar1 = *(undefined4 *)(param_6 + 0xf4);
    param_1[0x45] = *(undefined4 *)(param_6 + 0x114);
    uVar2 = *(undefined4 *)(param_6 + 0x110);
    param_1[0x3d] = uVar1;
    param_1[0x44] = uVar2;
    param_1[0x42] = *(undefined4 *)(param_6 + 0x108);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar13 = 3;
  param_1[0xe] = 0;
  *(byte *)((int)param_1 + 2) =
       (char)param_5 + ((byte)((LZCOUNT(-iVar9) << 0x3a) >> 0x3f) & 8U - (char)param_5);
  *(byte *)((int)param_1 + 3) = (byte)((ulonglong)(LZCOUNT(iVar9) << 0x20) >> 0x25) ^ 1;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar10 = (int)param_1 + 1;
  param_1[2] = param_1[0x3e];
  puVar8 = param_1 + 1;
  param_1[6] = param_1[0x52];
  do {
    *(undefined1 *)(iVar10 + 4) = 0;
    puVar8[2] = 0;
    puVar8[6] = 0x40;
    iVar10 = iVar10 + 1;
    puVar8 = puVar8 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if (param_6 == 0) {
    *(undefined1 *)(param_1 + 10) = 1;
    param_1[0xc] = 0x40;
  }
  else {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_6 + 0x28);
    param_1[0xb] = param_1[0x42];
    param_1[0xc] = param_1[0x54];
    uVar1 = *(undefined4 *)(param_6 + 0xdc);
    uVar2 = *(undefined4 *)(param_6 + 0xe0);
    uVar3 = *(undefined4 *)(param_6 + 0xe4);
    param_1[0x36] = *(undefined4 *)(param_6 + 0xd8);
    param_1[0x37] = uVar1;
    param_1[0x38] = uVar2;
    param_1[0x39] = uVar3;
    uVar1 = *(undefined4 *)(param_6 + 0xec);
    param_1[0x3a] = *(undefined4 *)(param_6 + 0xe8);
    param_1[0x3b] = uVar1;
  }
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(char *)((int)param_1 + 1) = (char)param_7;
  *(undefined1 *)param_1 = 1;
  *(short *)(param_1 + 0xd) = (short)param_2;
  iVar10 = (int)param_7;
  *(short *)((int)param_1 + 0x36) = (short)param_3;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  if (iVar10 < 4) {
    if (2 < iVar10) {
      sVar12 = 1;
      sVar11 = 2;
      goto LAB_004e4b14;
    }
  }
  else if (iVar10 < 6) {
    sVar12 = 2;
    sVar11 = 2;
    goto LAB_004e4b14;
  }
  sVar11 = 1;
  sVar12 = 1;
LAB_004e4b14:
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  *(undefined1 *)((int)param_1 + 0x7a) = 2;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  *(short *)(param_1 + 0x20) = (short)param_2 * sVar11;
  param_1[0x1f] = 0xaae4;
  *(byte *)(param_1 + 0x1e) = ((byte)((LZCOUNT(9 - iVar9) << 0x3a) >> 0x3f) & 0xfc) + 0xa5;
  *(short *)((int)param_1 + 0x82) = (short)param_3 * sVar12;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  param_1[0x22] = param_1[0x52];
  param_1[0x23] = param_1[0x3e];
  return;
}



//==== 004e4bb8  ns=Global  size=0x184
// sig: undefined FUN_004e4bb8(void)
// callers(1): 004e4d3c FUN_004e4d3c
// callees(2): 004fe098 idol::AllocateMemAlign; 0064f2a4 cell::cellGcmAddressToOffset

undefined8
FUN_004e4bb8(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,int param_5,
            undefined8 param_6,int *param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar6;
  undefined8 uVar5;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uStack00000038;
  
  lVar3 = 0;
  iVar6 = 0;
  *param_7 = 0;
  lVar8 = (longlong)(int)param_2 * (longlong)param_5;
  if (1 < param_8) {
    lVar10 = (param_2 & 0x1fffffff) * 8;
    piVar7 = param_7 + 1;
    iVar9 = param_8 - 1;
    do {
      uVar4 = lVar3 + lVar8;
      uVar11 = uVar4 & lVar10 - 1U;
      iVar9 = iVar9 + -1;
      lVar3 = uVar4 + (lVar10 - uVar11);
      lVar3 = lVar3 + ((LZCOUNT(-(int)uVar11) << 0x3a) >> 0x3f & uVar4 - lVar3);
      iVar6 = (int)lVar3;
      *piVar7 = iVar6;
      piVar7 = piVar7 + 1;
    } while (0 < iVar9);
  }
  uVar2 = (int)lVar8 + iVar6;
  iVar6 = (int)param_2 * 0x20;
  uVar1 = uVar2 & iVar6 - 1U;
  iVar6 = uVar2 + (iVar6 - uVar1);
  uVar1 = iVar6 + ((uint)((LZCOUNT(-uVar1) << 0x3a) >> 0x3f) & uVar2 - iVar6);
  iVar6 = (uVar1 - (uVar1 & 0xffff)) + 0x10000;
  uStack00000038 = param_2;
  uVar5 = idol::AllocateMemAlign
                    (ZEXT48(boot::g_pGame) + 0x7c,
                     iVar6 + ((uint)((LZCOUNT(-(uVar1 & 0xffff)) << 0x3a) >> 0x3f) & uVar1 - iVar6),
                     0x10000);
  cell::cellGcmAddressToOffset(uVar5,param_7);
  if (1 < param_8) {
    piVar7 = param_7 + 1;
    iVar6 = param_8 - 1;
    do {
      iVar6 = iVar6 + -1;
      *piVar7 = *piVar7 + *param_7;
      piVar7 = piVar7 + 1;
    } while (0 < iVar6);
  }
  return uVar5;
}



//==== 004e4d3c  ns=Global  size=0x620
// sig: undefined FUN_004e4d3c(void)
// callers(0): 
// callees(8): 004e3ee8 FUN_004e3ee8; 004e402c FUN_004e402c; 004e4bb8 FUN_004e4bb8; 004fe098 idol::AllocateMemAlign; 0050436c FUN_0050436c; 0064f2a4 cell::cellGcmAddressToOffset; 0064f3c4 cell::cellGcmSetTile; 0064f3e4 cell::cellGcmSetZcull

void FUN_004e4d3c(undefined4 *param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                 int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  ulonglong uVar5;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  int in_stack_00000074;
  undefined4 uStack_dc;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  
  param_1[0x4a] = param_2;
  param_1[0x4c] = param_3;
  uVar11 = param_2 + 0x3fU & 0xffffffc0;
  uVar12 = param_3 + 0x3fU & 0xffffffc0;
  iVar10 = (int)param_5;
  param_1[0x4e] = uVar11;
  param_1[0x50] = uVar12;
  if ((iVar10 != 0) && (param_4 == 0)) {
    uVar4 = FUN_004e402c(param_5);
    FUN_004e3ee8(&local_90,param_1,uVar11,uVar12,param_5,param_8,uVar4);
    param_1[0x47] = local_90;
    param_1[0x52] = local_8c;
    uVar11 = DAT_010ef528;
    uVar12 = DAT_010ef528 + 1;
    param_1[0x43] = DAT_010ef528;
    DAT_010ef528 = uVar12;
    uVar6 = FUN_004e4bb8(param_1,CONCAT44(local_90,local_8c),CONCAT44(local_88,uStack_dc),
                         param_1[0x50],uVar11,0,param_1 + 0x3e,in_stack_00000074);
    param_1[0x3c] = uVar6;
    uVar11 = param_1[0x4e];
    uVar12 = param_1[0x50];
  }
  iVar13 = (int)param_7;
  if (iVar13 == 0) {
    param_1[0x54] = 0x40;
    param_1[0x49] = 0;
    param_1[0x3d] = 0;
    goto LAB_004e50b4;
  }
  if (param_6 != 0) {
    if (iVar13 < 2) {
      if (iVar13 < 1) {
LAB_004e5028:
        iVar7 = 1;
      }
      else {
        iVar7 = 2;
      }
    }
    else {
      if (2 < iVar13) goto LAB_004e5028;
      iVar7 = 4;
    }
    uVar12 = uVar11 * iVar7 * uVar12;
    param_1[0x54] = uVar11 * iVar7;
    param_1[0x49] = uVar12;
    param_1[0x45] = 0xffffffff;
    pvVar3 = boot::g_pGame;
    param_1[0x44] = 0xffffffff;
    uVar4 = FUN_0050436c(pvVar3);
    iVar7 = (uVar12 - (uVar12 & 0xfffff)) + 0x100000;
    uVar6 = idol::AllocateMemAlign
                      (uVar4,iVar7 + ((uint)((LZCOUNT(-(uVar12 & 0xfffff)) << 0x3a) >> 0x3f) &
                                     uVar12 - iVar7),0x10000);
    param_1[0x3d] = uVar6;
    goto LAB_004e50b4;
  }
  if (iVar13 < 2) {
    if (iVar13 < 1) {
LAB_004e4ea4:
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    if (2 < iVar13) goto LAB_004e4ea4;
    uVar4 = 4;
  }
  FUN_004e3ee8(&local_84,param_1,uVar11,uVar12,param_7,param_8,uVar4);
  param_1[0x54] = local_80;
  param_1[0x49] = local_84;
  iVar7 = DAT_010ef52c + 1;
  param_1[0x45] = DAT_010ef52c;
  DAT_010ef52c = iVar7;
  uVar11 = DAT_010ef528;
  uVar5 = ZEXT48(boot::g_pGame);
  uVar12 = DAT_010ef528 + 1;
  param_1[0x44] = DAT_010ef528;
  DAT_010ef528 = uVar12;
  uVar4 = idol::AllocateMemAlign(uVar5 + 0x7c,local_84,0x10000);
  cell::cellGcmAddressToOffset(uVar4,param_1 + 0x42);
  cell::cellGcmSetTile
            (uVar11 & 0xff,0,param_1[0x42],local_84,local_80,
             ((uint)((LZCOUNT(-iVar10) << 0x3a) >> 0x3f) & 0xfffffff7) + 9 & 0xff,
             (uint)param_1[0x42] >> 0x10,2);
  param_1[0x3d] = (int)uVar4;
  cell::cellGcmSetZcull
            (param_1[0x45] & 0xff,param_1[0x42],param_1[0x4e],param_1[0x50],DAT_008fa620,2,param_8,0
            );
  DAT_008fa620 = DAT_008fa620 + param_1[0x4e] * param_1[0x50];
LAB_004e50b4:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(byte *)((int)param_1 + 2) =
       (char)param_5 + ((byte)((LZCOUNT(-iVar10) << 0x3a) >> 0x3f) & 8U - (char)param_5);
  if (in_stack_00000074 == 2) {
    *(undefined1 *)((int)param_1 + 3) = 0x13;
  }
  else if (in_stack_00000074 == 3) {
    *(undefined1 *)((int)param_1 + 3) = 0x17;
  }
  else if (in_stack_00000074 == 4) {
    *(undefined1 *)((int)param_1 + 3) = 0x1f;
  }
  puVar8 = param_1;
  puVar9 = param_1;
  iVar10 = in_stack_00000074;
  if (0 < in_stack_00000074) {
    do {
      uVar6 = puVar9[0x3e];
      *(char *)(puVar8 + 1) = (char)param_4;
      iVar10 = iVar10 + -1;
      uVar1 = param_1[0x52];
      puVar9[2] = uVar6;
      puVar9[6] = uVar1;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = puVar9 + 1;
    } while (0 < iVar10);
  }
  if (in_stack_00000074 < 4) {
    iVar10 = in_stack_00000074 + (int)param_1;
    puVar8 = param_1 + in_stack_00000074;
    iVar7 = 4 - in_stack_00000074;
    do {
      iVar7 = iVar7 + -1;
      *(undefined1 *)(iVar10 + 4) = 0;
      puVar8[2] = 0;
      puVar8[6] = 0x40;
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (0 < iVar7);
  }
  if (iVar13 == 0) {
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    uVar6 = 0x40;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  else {
    *(char *)(param_1 + 10) = (char)param_7;
    uVar6 = param_1[0x54];
    param_1[0xb] = param_1[0x42];
    *(char *)((int)param_1 + 0x29) = (char)param_6;
  }
  param_1[0xc] = uVar6;
  *(char *)((int)param_1 + 1) = (char)param_8;
  uVar15 = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0xd) = uVar15;
  uVar14 = (undefined2)param_3;
  *(undefined2 *)((int)param_1 + 0x36) = uVar14;
  *(undefined1 *)param_1 = 1;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0xa5;
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  *(undefined1 *)((int)param_1 + 0x7a) = 2;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  param_1[0x1f] = 0xaae4;
  *(undefined2 *)(param_1 + 0x20) = uVar15;
  *(undefined2 *)((int)param_1 + 0x82) = uVar14;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  param_1[0x22] = param_1[0x52];
  param_1[0x23] = param_1[0x3e];
  if (1 < in_stack_00000074) {
    puVar8 = param_1 + 6;
    puVar9 = param_1 + 1;
    in_stack_00000074 = in_stack_00000074 + -1;
    do {
      *(undefined1 *)(puVar8 + 0x1e) = 0xa5;
      in_stack_00000074 = in_stack_00000074 + -1;
      *(undefined1 *)((int)puVar8 + 0x79) = 1;
      *(undefined1 *)((int)puVar8 + 0x7a) = 2;
      *(undefined1 *)((int)puVar8 + 0x7b) = 0;
      puVar8[0x1f] = 0xaae4;
      *(undefined2 *)(puVar8 + 0x20) = uVar15;
      *(undefined2 *)((int)puVar8 + 0x82) = uVar14;
      *(undefined2 *)(puVar8 + 0x21) = 1;
      *(undefined1 *)((int)puVar8 + 0x86) = 0;
      puVar8[0x22] = param_1[0x52];
      puVar2 = puVar9 + 0x3e;
      puVar9 = puVar9 + 1;
      puVar8[0x23] = *puVar2;
      puVar8 = puVar8 + 6;
    } while (0 < in_stack_00000074);
  }
  if (iVar13 != 0) {
    *(undefined1 *)(param_1 + 0x36) = 0xa5;
    *(undefined1 *)((int)param_1 + 0xd9) = 1;
    *(undefined1 *)((int)param_1 + 0xda) = 2;
    *(undefined1 *)((int)param_1 + 0xdb) = 0;
    param_1[0x37] = 0xa993;
    *(undefined2 *)(param_1 + 0x38) = uVar15;
    *(undefined2 *)((int)param_1 + 0xe2) = uVar14;
    *(undefined2 *)(param_1 + 0x39) = 1;
    *(undefined1 *)((int)param_1 + 0xe6) = 0;
    param_1[0x3a] = param_1[0x54];
    param_1[0x3b] = param_1[0x42];
  }
  return;
}



//==== 004e535c  ns=Global  size=0xfc
// sig: undefined FUN_004e535c(void)
// callers(1): 004dc99c idol_draw::Gfx_ReconfigureVideoOut
// callees(5): 005cd098 libc::printf; 0064f2e4 cell::cellGcmBindTile; 0064f344 cell::cellGcmSetDisplayBuffer; 0064f3a4 cell::cellGcmSetTileInfo; 0064f424 cell::cellGcmUnbindTile
// strings: 006593cc: 'cellGcmSetTileInfo() failed.\n' | 006593ec: 'cellGcmBindTile() failed.\n' | 0065940c: 'cellGcmSetDisplayBuffer() failed.\n'

ulonglong FUN_004e535c(int param_1,char param_2)

{
  int iVar2;
  int32_t iVar3;
  ulonglong uVar1;
  
  if (param_2 != '\0') {
    cell::cellGcmUnbindTile(*(uint *)(param_1 + 0x10c) & 0xff);
  }
  iVar2 = cell::cellGcmSetTileInfo
                    (*(uint *)(param_1 + 0x10c) & 0xff,0,*(undefined4 *)(param_1 + 0xf8),
                     *(undefined4 *)(param_1 + 0x11c),*(undefined4 *)(param_1 + 0x148),0,0,0);
  if (iVar2 == 0) {
    iVar2 = cell::cellGcmBindTile(*(uint *)(param_1 + 0x10c) & 0xff);
    if (iVar2 == 0) {
      iVar2 = cell::cellGcmSetDisplayBuffer
                        (*(uint *)(param_1 + 0x118) & 0xff,*(undefined4 *)(param_1 + 0xf8),
                         *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x128),
                         *(undefined4 *)(param_1 + 0x130));
      if (iVar2 == 0) {
        uVar1 = (ulonglong)*(uint *)(param_1 + 0x148);
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x148);
      }
      else {
        iVar3 = libc::printf("cellGcmSetDisplayBuffer() failed.\n");
        uVar1 = (ulonglong)iVar3;
      }
    }
    else {
      iVar3 = libc::printf("cellGcmBindTile() failed.\n");
      uVar1 = (ulonglong)iVar3;
    }
  }
  else {
    iVar3 = libc::printf("cellGcmSetTileInfo() failed.\n");
    uVar1 = (ulonglong)iVar3;
  }
  return uVar1;
}



//==== 004e5458  ns=Global  size=0x90
// sig: undefined FUN_004e5458(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 0064f2a4 cell::cellGcmAddressToOffset

undefined8 FUN_004e5458(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (param_2 - (param_2 & 0xfffff)) + 0x100000;
  uVar1 = idol::AllocateMemAlign
                    (ZEXT48(boot::g_pGame) + 0x7c,
                     iVar2 + ((uint)((LZCOUNT(-(param_2 & 0xfffff)) << 0x3a) >> 0x3f) &
                             param_2 - iVar2),0x10000);
  cell::cellGcmAddressToOffset(uVar1,param_3);
  return uVar1;
}



//==== 004e54e8  ns=Global  size=0x324
// sig: undefined FUN_004e54e8(void)
// callers(1): 004d7464 FUN_004d7464
// callees(8): 004e3ee8 FUN_004e3ee8; 004e402c FUN_004e402c; 004fe098 idol::AllocateMemAlign; 005cd098 libc::printf; 0064f2a4 cell::cellGcmAddressToOffset; 0064f2e4 cell::cellGcmBindTile; 0064f344 cell::cellGcmSetDisplayBuffer; 0064f3a4 cell::cellGcmSetTileInfo
// strings: 006593cc: 'cellGcmSetTileInfo() failed.\n' | 006593ec: 'cellGcmBindTile() failed.\n' | 0065940c: 'cellGcmSetDisplayBuffer() failed.\n'

ulonglong FUN_004e54e8(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                      undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar6;
  int32_t iVar7;
  ulonglong uVar5;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_44;
  undefined4 local_40;
  
  param_1[0x4a] = param_2;
  param_1[0x4e] = param_2 + 0x3fU & 0xffffffc0;
  param_1[0x50] = param_3 + 0x3fU & 0xffffffc0;
  param_1[0x4c] = param_3;
  param_1[0x4b] = param_4;
  param_1[0x4d] = param_5;
  param_1[0x4f] = param_4 + 0x3fU & 0xffffffc0;
  param_1[0x51] = param_5 + 0x3fU & 0xffffffc0;
  iVar6 = DAT_010ef530 + 1;
  param_1[0x46] = DAT_010ef530;
  DAT_010ef530 = iVar6;
  uVar1 = param_1[0x4e];
  uVar2 = param_1[0x50];
  uVar4 = FUN_004e402c(param_6);
  FUN_004e3ee8(&local_50,param_1,uVar1,uVar2,param_6,0,uVar4);
  param_1[0x52] = local_4c;
  param_1[0x47] = local_50;
  iVar6 = DAT_010ef528 + 1;
  param_1[0x43] = DAT_010ef528;
  DAT_010ef528 = iVar6;
  uVar1 = param_1[0x4f];
  uVar2 = param_1[0x51];
  uVar4 = FUN_004e402c(param_6);
  FUN_004e3ee8(&local_44,param_1,uVar1,uVar2,param_6,0,uVar4);
  uVar3 = local_44 +
          ((uint)((longlong)((ulonglong)local_44 - (ulonglong)(uint)param_1[0x47]) >> 0x3f) &
          param_1[0x47] - local_44);
  param_1[0x48] = local_44;
  param_1[0x53] = local_40;
  iVar6 = (uVar3 - (uVar3 & 0xfffff)) + 0x100000;
  uVar4 = idol::AllocateMemAlign
                    (ZEXT48(boot::g_pGame) + 0x7c,
                     iVar6 + ((uint)((LZCOUNT(-(uVar3 & 0xfffff)) << 0x3a) >> 0x3f) & uVar3 - iVar6)
                     ,0x10000);
  cell::cellGcmAddressToOffset(uVar4,param_1 + 0x3e);
  param_1[0x3c] = (int)uVar4;
  *param_1 = 0;
  iVar6 = (int)param_1 + 1;
  param_1[1] = 0;
  puVar8 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar9 = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((int)param_1 + 2) = 8;
  *(undefined1 *)((int)param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_1[0x3e];
  do {
    *(undefined1 *)(iVar6 + 4) = 0;
    puVar8[2] = 0;
    puVar8[6] = 0x40;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xc] = 0x40;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((int)param_1 + 1) = 0;
  *(short *)(param_1 + 0xd) = (short)param_2;
  *(short *)((int)param_1 + 0x36) = (short)param_3;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  iVar6 = cell::cellGcmSetTileInfo
                    (param_1[0x43] & 0xff,0,param_1[0x3e],param_1[0x47],param_1[0x52],0,0,0);
  if (iVar6 == 0) {
    iVar6 = cell::cellGcmBindTile(param_1[0x43] & 0xff);
    if (iVar6 == 0) {
      iVar6 = cell::cellGcmSetDisplayBuffer
                        (param_1[0x46] & 0xff,param_1[0x3e],param_1[0x52],param_1[0x4a],
                         param_1[0x4c]);
      if (iVar6 == 0) {
        uVar5 = (ulonglong)(uint)param_1[0x52];
        param_1[6] = param_1[0x52];
      }
      else {
        iVar7 = libc::printf("cellGcmSetDisplayBuffer() failed.\n");
        uVar5 = (ulonglong)iVar7;
      }
    }
    else {
      iVar7 = libc::printf("cellGcmBindTile() failed.\n");
      uVar5 = (ulonglong)iVar7;
    }
  }
  else {
    iVar7 = libc::printf("cellGcmSetTileInfo() failed.\n");
    uVar5 = (ulonglong)iVar7;
  }
  return uVar5;
}



//==== 004e580c  ns=Global  size=0x228
// sig: undefined FUN_004e580c(void)
// callers(1): 004d7464 FUN_004d7464
// callees(4): 004fe098 idol::AllocateMemAlign; 0064f244 cell::cellGcmGetTiledPitchSize; 0064f2a4 cell::cellGcmAddressToOffset; 0064f3c4 cell::cellGcmSetTile

void FUN_004e580c(undefined4 *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  undefined2 uVar7;
  
  iVar6 = (int)param_2;
  param_1[0x4a] = iVar6;
  param_1[0x4e] = iVar6;
  param_1[0x4c] = iVar6;
  param_1[0x50] = iVar6;
  iVar5 = cell::cellGcmGetTiledPitchSize((param_2 & 0x3fffffff) << 2);
  param_1[0x54] = iVar5;
  param_1[0x49] = iVar5 * (iVar6 + 0x1fU & 0xffffffe0) + 0xffff & 0xffff0000;
  iVar5 = DAT_010ef528 + 1;
  param_1[0x44] = DAT_010ef528;
  DAT_010ef528 = iVar5;
  uVar1 = param_1[0x49];
  iVar5 = (uVar1 - (uVar1 & 0xfffff)) + 0x100000;
  uVar4 = idol::AllocateMemAlign
                    (ZEXT48(boot::g_pGame) + 0x7c,
                     iVar5 + ((uint)((LZCOUNT(-(uVar1 & 0xfffff)) << 0x3a) >> 0x3f) & uVar1 - iVar5)
                     ,0x10000);
  cell::cellGcmAddressToOffset(uVar4,param_1 + 0x42);
  param_1[0x3d] = (int)uVar4;
  cell::cellGcmSetTile(param_1[0x44] & 0xff,0,param_1[0x42],param_1[0x49],param_1[0x54],10,0,2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((int)param_1 + 2) = 8;
  *(undefined1 *)((int)param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[6] = 0x40;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[7] = 0x40;
  *(undefined1 *)((int)param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[8] = 0x40;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[9] = 0x40;
  uVar2 = param_1[0x42];
  *(undefined1 *)(param_1 + 10) = 2;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  uVar3 = param_1[0x54];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((int)param_1 + 1) = 0;
  uVar7 = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0xd) = uVar7;
  *(undefined2 *)((int)param_1 + 0x36) = uVar7;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0xb0;
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  *(undefined1 *)((int)param_1 + 0x7a) = 2;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  param_1[0x1f] = 0xaae4;
  *(undefined2 *)(param_1 + 0x20) = uVar7;
  *(undefined2 *)((int)param_1 + 0x82) = uVar7;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar2;
  *(undefined1 *)(param_1 + 0x36) = 0xa5;
  *(undefined1 *)((int)param_1 + 0xd9) = 1;
  *(undefined1 *)((int)param_1 + 0xda) = 2;
  *(undefined1 *)((int)param_1 + 0xdb) = 0;
  param_1[0x37] = 0xa993;
  *(short *)(param_1 + 0x38) = (short)param_1[0x4a];
  *(short *)((int)param_1 + 0xe2) = (short)param_1[0x4c];
  *(undefined2 *)(param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  param_1[0x3a] = uVar3;
  param_1[0x3b] = uVar2;
  return;
}



//==== 004e5a34  ns=Global  size=0x228
// sig: undefined FUN_004e5a34(void)
// callers(0): 
// callees(2): 004e3ee8 FUN_004e3ee8; 004e402c FUN_004e402c

void FUN_004e5a34(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar2 = *(uint *)(param_2 + 0x128) >> 1;
  param_1[0x4a] = uVar2;
  uVar2 = uVar2 + 0x3f & 0xffffffc0;
  uVar3 = *(uint *)(param_2 + 0x130) >> 1;
  param_1[0x4e] = uVar2;
  uVar4 = uVar3 + 0x3f & 0xffffffc0;
  param_1[0x4c] = uVar3;
  param_1[0x50] = uVar4;
  uVar5 = FUN_004e402c(8);
  FUN_004e3ee8(&local_40,param_1,uVar2,uVar4,8,4,uVar5);
  uVar8 = *(undefined4 *)(param_2 + 0xf0);
  param_1[0x47] = local_40;
  param_1[0x52] = local_3c;
  uVar6 = *(undefined4 *)(param_2 + 0xf8);
  param_1[0x3c] = uVar8;
  param_1[0x3e] = uVar6;
  uVar8 = 0;
  uVar10 = 0;
  if (*(int *)(param_2 + 0x124) != 0) {
    FUN_004e3ee8(&local_34,param_1,param_1[0x4e],param_1[0x50],2,4,4);
    uVar6 = param_1[0x3e];
    uVar8 = local_30;
    uVar10 = local_34;
  }
  param_1[0x54] = uVar8;
  param_1[0x49] = uVar10;
  uVar8 = *(undefined4 *)(param_2 + 0xf4);
  param_1[0x45] = *(undefined4 *)(param_2 + 0x114);
  uVar10 = *(undefined4 *)(param_2 + 0x108);
  param_1[0x3d] = uVar8;
  *param_1 = 0;
  param_1[0x42] = uVar10;
  param_1[1] = 0;
  iVar9 = (int)param_1 + 1;
  param_1[3] = 0;
  lVar11 = 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((int)param_1 + 2) = 8;
  *(undefined1 *)((int)param_1 + 3) = 1;
  param_1[2] = uVar6;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[6] = local_3c;
  puVar7 = param_1 + 1;
  do {
    *(undefined1 *)(iVar9 + 4) = 0;
    puVar7[2] = 0;
    iVar9 = iVar9 + 1;
    puVar7[6] = 0x40;
    puVar7 = puVar7 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x28);
  uVar8 = *(undefined4 *)(param_2 + 0x2c);
  param_1[0xc] = param_1[0x54];
  param_1[0xb] = uVar8;
  uVar1 = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((int)param_1 + 0x29) = uVar1;
  *(undefined1 *)((int)param_1 + 1) = 4;
  *(short *)(param_1 + 0xd) = (short)param_1[0x4a];
  *(short *)((int)param_1 + 0x36) = (short)param_1[0x4c];
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0xa5;
  *(undefined1 *)((int)param_1 + 0xd9) = 1;
  *(undefined1 *)((int)param_1 + 0xda) = 2;
  *(undefined1 *)((int)param_1 + 0xdb) = 0;
  param_1[0x37] = 0xa993;
  *(short *)(param_1 + 0x38) = (short)param_1[0x4a];
  *(short *)((int)param_1 + 0xe2) = (short)param_1[0x4c];
  *(undefined2 *)(param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  param_1[0x3a] = param_1[0x54];
  param_1[0x3b] = param_1[0x42];
  return;
}



//==== 004e5c5c  ns=Global  size=0x78
// sig: undefined FUN_004e5c5c(void)
// callers(0): 
// callees(0): 

void FUN_004e5c5c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  uVar3 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  return;
}



//==== 004e5cd4  ns=Global  size=0x64
// sig: undefined FUN_004e5cd4(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 0064f2a4 cell::cellGcmAddressToOffset

undefined8 FUN_004e5cd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_r8;
  
  uVar1 = idol::AllocateMemAlign
                    (ZEXT48(boot::g_pGame) + 0x7c,(int)((ulonglong)param_2 >> 0x20),0x10000);
  cell::cellGcmAddressToOffset(uVar1,in_r8);
  return uVar1;
}



//==== 004e5d38  ns=Global  size=0x38
// sig: undefined FUN_004e5d38(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004e5d38(int param_1)

{
  if (param_1 < 3) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if (param_1 < 6) {
    return 2;
  }
  return 1;
}



//==== 004e5d70  ns=Global  size=0x40
// sig: undefined FUN_004e5d70(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004e5d70(int param_1)

{
  if (param_1 < 3) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else {
    if (param_1 < 4) {
      return 1;
    }
    if (param_1 < 6) {
      return 2;
    }
  }
  return 1;
}



//==== 004e5db0  ns=Global  size=0x190
// sig: undefined FUN_004e5db0(void)
// callers(1): 004dcb80 idol_draw::Gfx_EnableSpecialVideoOutMode
// callees(5): 005cd098 libc::printf; 0064f2e4 cell::cellGcmBindTile; 0064f344 cell::cellGcmSetDisplayBuffer; 0064f3a4 cell::cellGcmSetTileInfo; 0064f424 cell::cellGcmUnbindTile
// strings: 006593cc: 'cellGcmSetTileInfo() failed.\n' | 006593ec: 'cellGcmBindTile() failed.\n' | 0065940c: 'cellGcmSetDisplayBuffer() failed.\n'

ulonglong FUN_004e5db0(undefined4 *param_1,int param_2,undefined2 param_3)

{
  int iVar2;
  int32_t iVar3;
  ulonglong uVar1;
  
  cell::cellGcmUnbindTile(param_1[0x43] & 0xff);
  iVar2 = cell::cellGcmSetTileInfo
                    (param_1[0x43] & 0xff,0,param_1[0x3e],param_1[0x48],param_1[0x53],0,
                     (uint)param_1[0x3e] >> 0x10,0);
  if (iVar2 == 0) {
    iVar2 = cell::cellGcmBindTile(param_1[0x43] & 0xff);
    if (iVar2 == 0) {
      iVar2 = cell::cellGcmSetDisplayBuffer
                        (param_1[0x46] & 0xff,param_1[0x3e],param_1[0x53],param_1[0x4b],
                         param_1[0x4d]);
      if (iVar2 == 0) {
        param_1[6] = param_1[0x53];
        param_1[0xf] = *param_1;
        param_1[0x11] = param_1[2];
        param_1[0x10] = param_1[1];
        param_1[0x12] = param_1[3];
        param_1[0x13] = param_1[4];
        param_1[0x14] = param_1[5];
        param_1[0x16] = param_1[7];
        param_1[0x17] = param_1[8];
        param_1[0x18] = param_1[9];
        param_1[0x15] = param_1[6];
        uVar1 = (ulonglong)(uint)param_1[0xc];
        param_1[0x19] = param_1[10];
        param_1[0x1a] = param_1[0xb];
        param_1[0x1b] = param_1[0xc];
        param_1[0x1d] = param_1[0xe];
        param_1[0x1c] = param_1[0xd];
        param_1[0x11] = param_1[0x3e] + param_2;
        *(undefined2 *)((int)param_1 + 0x76) = param_3;
      }
      else {
        iVar3 = libc::printf("cellGcmSetDisplayBuffer() failed.\n");
        uVar1 = (ulonglong)iVar3;
      }
    }
    else {
      iVar3 = libc::printf("cellGcmBindTile() failed.\n");
      uVar1 = (ulonglong)iVar3;
    }
  }
  else {
    iVar3 = libc::printf("cellGcmSetTileInfo() failed.\n");
    uVar1 = (ulonglong)iVar3;
  }
  return uVar1;
}



//==== 004e5f40  ns=Global  size=0xd4
// sig: undefined FUN_004e5f40(void)
// callers(0): 
// callees(2): 004fe39c FUN_004fe39c; 004fe778 FUN_004fe778
// strings: 00659430: 'MainMem' | 00659438: 'From Startup Heap'

void FUN_004e5f40(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c [3];
  
  *(undefined4 *)(param_1 + 0xc4) = DAT_00902e9c;
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*boot::g_pHWSystem + 0x14))(boot::g_pHWSystem,local_1c,&local_20);
  param_1 = param_1 + 0x58;
  FUN_004fe39c(param_1,local_1c[0],local_20,"MainMem",1,0);
  FUN_004fe778(param_1,"From Startup Heap");
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*boot::g_pHWSystem + 0x18))(boot::g_pHWSystem,param_1);
  return;
}



//==== 004e6014  ns=Global  size=0x24
// sig: undefined FUN_004e6014(void)
// callers(0): 
// callees(1): 00650684 sys::sys_time_get_system_time

void FUN_004e6014(void)

{
  sys::sys_time_get_system_time();
  return;
}



//==== 004e6038  ns=Global  size=0x1bc
// sig: undefined FUN_004e6038(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 0064f584 cell::cellSysutilGetSystemParamInt
// strings: 0065944c: 'cellSysutilGetSystemParamInt() get language error 0x%x\n'

/* WARNING: Removing unreachable block (ram,0x004e61bc) */
/* WARNING: Removing unreachable block (ram,0x004e61b0) */
/* WARNING: Removing unreachable block (ram,0x004e60dc) */
/* WARNING: Removing unreachable block (ram,0x004e60e4) */
/* WARNING: Removing unreachable block (ram,0x004e61c8) */
/* WARNING: Removing unreachable block (ram,0x004e60ec) */
/* WARNING: Removing unreachable block (ram,0x004e60f4) */
/* WARNING: Removing unreachable block (ram,0x004e60fc) */
/* WARNING: Removing unreachable block (ram,0x004e61a4) */
/* WARNING: Removing unreachable block (ram,0x004e6104) */
/* WARNING: Removing unreachable block (ram,0x004e610c) */
/* WARNING: Removing unreachable block (ram,0x004e618c) */
/* WARNING: Removing unreachable block (ram,0x004e6114) */
/* WARNING: Removing unreachable block (ram,0x004e611c) */
/* WARNING: Removing unreachable block (ram,0x004e6180) */
/* WARNING: Removing unreachable block (ram,0x004e6198) */
/* WARNING: Removing unreachable block (ram,0x004e6120) */
/* WARNING: Removing unreachable block (ram,0x004e6138) */
/* WARNING: Removing unreachable block (ram,0x004e6150) */
/* WARNING: Removing unreachable block (ram,0x004e6168) */
/* WARNING: Removing unreachable block (ram,0x004e615c) */
/* WARNING: Removing unreachable block (ram,0x004e6144) */
/* WARNING: Removing unreachable block (ram,0x004e612c) */
/* WARNING: Removing unreachable block (ram,0x004e6174) */

int FUN_004e6038(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_10 [8];
  
  iVar2 = *(int *)(param_1 + 0xcc);
  if (iVar2 == -1) {
    uVar1 = cell::cellSysutilGetSystemParamInt(0x111,local_10);
    if ((int)uVar1 < 0) {
      print_tty("cellSysutilGetSystemParamInt() get language error 0x%x\n",uVar1);
    }
    iVar2 = 1;
    *(undefined4 *)(param_1 + 0xcc) = 1;
  }
  return iVar2;
}



//==== 004e61f4  ns=Global  size=0x1d4
// sig: undefined FUN_004e61f4(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 0064f6a4 cell::cellVideoOutGetResolution
// strings: 00659488: '1080' (raw) | 00659490: '1600x1080' | 006594a0: '1440x1080' | 006594b0: '1280x1080' | 006594c0: '960x1080' | 006594e8: 'I - ' (raw) | 006594f0: 'P - ' (raw) | 006594f8: '%dx%d - ' | 00659508: '4:3\n' (raw) | 00659510: '16:9\n'

void FUN_004e61f4(ulonglong param_1)

{
  uint uVar1;
  char cVar2;
  ushort local_20;
  ushort local_1e;
  
  cVar2 = (char)(param_1 >> 0x38);
  if (cVar2 == '\r') {
    print_tty2("960x1080");
  }
  else if (cVar2 == '\f') {
    print_tty2("1280x1080");
  }
  else if (cVar2 == '\v') {
    print_tty2("1440x1080");
  }
  else if (cVar2 == '\n') {
    print_tty2("1600x1080");
  }
  else if (cVar2 == '\x05') {
    print_tty2("576");
  }
  else if (cVar2 == '\x04') {
    print_tty2("480");
  }
  else if (cVar2 == '\x02') {
    print_tty2("720");
  }
  else if (cVar2 == '\x01') {
    print_tty2("1080");
  }
  if ((param_1 & 0xff000000000000) == 0) {
    print_tty2("I - ");
  }
  else if (((ushort)(param_1 >> 0x30) & 0xff) < 2) {
    print_tty2("P - ");
  }
  cell::cellVideoOutGetResolution(param_1 >> 0x38,&local_20);
  print_tty2("%dx%d - ",(ulonglong)local_20,(ulonglong)local_1e);
  uVar1 = (uint)(param_1 >> 0x20) & 0xff;
  if (uVar1 < 2) {
    if ((param_1 & 0xff00000000) != 0) {
      print_tty2("4:3\n");
    }
  }
  else if (uVar1 < 3) {
    print_tty2("16:9\n");
  }
  return;
}



//==== 004e63c8  ns=Global  size=0x8
// sig: undefined FUN_004e63c8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004e63c8(void)

{
  return 0xac00000;
}



//==== 004e63d0  ns=Global  size=0x8
// sig: undefined FUN_004e63d0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004e63d0(void)

{
  return 0x80000;
}



//==== 004e63d8  ns=Global  size=0x54
// sig: undefined FUN_004e63d8(void)
// callers(0): 
// callees(2): 005cd098 libc::printf; 08000160 syscall::syscall_sys_memory_get_user_memory_size
// strings: 00659518: '~~~~~~~~~~~~~~~~~~~mem_info - total %9d, available %9d - %s ~~~~~~~~~~~~~~~~~~~~~~\n'

int32_t FUN_004e63d8(undefined8 param_1,undefined8 param_2)

{
  int32_t iVar1;
  uint local_10;
  uint local_c;
  
  syscall::syscall_sys_memory_get_user_memory_size(&local_10);
  iVar1 = libc::printf("~~~~~~~~~~~~~~~~~~~mem_info - total %9d, available %9d - %s ~~~~~~~~~~~~~~~~~~~~~~\n"
                       ,(ulonglong)local_10,(ulonglong)local_c,param_2);
  return iVar1;
}



//==== 004e642c  ns=Global  size=0x10
// sig: undefined FUN_004e642c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_004e642c(void)

{
  return DAT_0159b388;
}



//==== 004e643c  ns=Global  size=0x78
// sig: undefined FUN_004e643c(void)
// callers(0): 
// callees(0): 
// strings: 0065956c: 'GetHeap'

void FUN_004e643c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  (*(code *)**(undefined4 **)(*param_1 + 0x24))(param_1,"GetHeap");
  iVar1 = param_1[1];
  *param_2 = param_1[2];
  *param_3 = iVar1;
  return;
}



//==== 004e64b4  ns=Global  size=0x1d8
// sig: undefined FUN_004e64b4(void)
// callers(0): 
// callees(11): 004ff6d0 print_tty; 004ffd4c FUN_004ffd4c; 005c8510 libc::strlen; 0064f4a4 cell::cellSysmoduleLoadModule; 0064f9e4 cell::cellSpursAttributeSetNamePrefix; 0064fb24 cell::_cellSpursEventFlagInitialize; 0064fba4 cell::cellSpursEventFlagAttachLv2EventQueue; 0064fbc4 cell::_cellSpursAttributeInitialize; 0064fc44 cell::cellSpursInitializeWithAttribute; 006505c4 sys::sys_ppu_thread_get_id; 08000030 syscall::syscall_sys_ppu_thread_get_priority
// strings: 00659594: "Couldn't initialize SPU units.\n" | 00659574: 'MainSpurs' | 006595b4: 'ERROR: cellSpursEventFlagInitializeIWL failed: 0x%x\n' | 006595ec: 'ERROR: cellSpursEventFlagAttachLv2EventQueue failed: 0x%x\n' | 00659584: 'GhettoSpurs'

void FUN_004e64b4(void)

{
  int iVar2;
  size_t sVar3;
  undefined8 uVar1;
  undefined8 local_230;
  undefined1 auStack_228 [512];
  int local_28 [4];
  
  iVar2 = syscall::syscall_sys_ppu_thread_get_priority(6,0);
  if (iVar2 == 0) {
    cell::cellSysmoduleLoadModule(10);
    sys::sys_ppu_thread_get_id(&local_230);
    syscall::syscall_sys_ppu_thread_get_priority(local_230,local_28);
    cell::_cellSpursAttributeInitialize(auStack_228,2,0x330000,DAT_008fa628,0x7f,local_28[0] + -2,0)
    ;
    sVar3 = libc::strlen("MainSpurs");
    cell::cellSpursAttributeSetNamePrefix(auStack_228,"MainSpurs",sVar3);
    cell::cellSpursInitializeWithAttribute(PTR_DAT_008fa624,auStack_228);
    uVar1 = cell::_cellSpursEventFlagInitialize(PTR_DAT_008fa624,0,&DAT_01111580,0,1);
    if ((int)uVar1 != 0) {
      print_tty("ERROR: cellSpursEventFlagInitializeIWL failed: 0x%x\n",uVar1);
    }
    uVar1 = cell::cellSpursEventFlagAttachLv2EventQueue(&DAT_01111580);
    if ((int)uVar1 != 0) {
      print_tty("ERROR: cellSpursEventFlagAttachLv2EventQueue failed: 0x%x\n",uVar1);
    }
    cell::_cellSpursAttributeInitialize(auStack_228,2,0x330000,1,0x80,local_28[0] + -1,0);
    sVar3 = libc::strlen("GhettoSpurs");
    cell::cellSpursAttributeSetNamePrefix(auStack_228,"GhettoSpurs",sVar3);
    cell::cellSpursInitializeWithAttribute(PTR_DAT_008fa62c,auStack_228);
  }
  else {
    FUN_004ffd4c(4,"Couldn\'t initialize SPU units.\n");
  }
  return;
}



//==== 004e668c  ns=Global  size=0xa8
// sig: undefined FUN_004e668c(void)
// callers(0): 
// callees(5): 004ff6d0 print_tty; 004ffc9c print_tty2; 005c18d0 FUN_005c18d0; 0064fd84 cell::cellNetCtlGetState; 0064fda4 cell::cellNetCtlInit
// strings: 00659628: 'ERROR: CHWSystem_PS::InitNetwork failed\n' | 00659658: '*** init_network succeeded! ***\n'

/* WARNING: Removing unreachable block (ram,0x004e66d0) */
/* WARNING: Removing unreachable block (ram,0x004e6704) */
/* WARNING: Removing unreachable block (ram,0x004e66f0) */

void FUN_004e668c(void)

{
  undefined1 local_20 [16];
  
  cell::cellNetCtlInit();
  cell::cellNetCtlGetState(local_20);
  return;
}



//==== 004e6734  ns=Global  size=0x3c
// sig: undefined FUN_004e6734(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 0064fca4 cell::cellSpursFinalize
// strings: 0065967c: 'Shutting down SPURS\n'

void FUN_004e6734(void)

{
  print_tty2("Shutting down SPURS\n");
  cell::cellSpursFinalize(PTR_DAT_008fa624);
  return;
}



//==== 004e6770  ns=Global  size=0x14c
// sig: undefined FUN_004e6770(void)
// callers(1): 004e68bc FUN_004e68bc
// callees(3): 005ccf90 FUN_005ccf90; 00650764 sys::sys_mmapper_allocate_memory; 006507c4 sys::sys_mmapper_map_memory
// strings: 00659694: 'sys_mmapper_allocate_memory() failed: %d\n' | 006596c4: 'sys_mmapper_map_memory() failed: %d\n'

void FUN_004e6770(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0xc4) != '\x01') {
    uVar2 = *(uint *)(param_1 + 0x104);
    uVar5 = 0;
    uVar3 = 0;
    iVar4 = param_1;
    if (uVar2 != 0) {
      do {
        uVar1 = sys::sys_mmapper_allocate_memory
                          (*(undefined4 *)(param_1 + 0x108),0x400,iVar4 + 0xd0);
        if ((int)uVar1 != 0) {
          FUN_005ccf90(&DAT_00905738,"sys_mmapper_allocate_memory() failed: %d\n",uVar1);
        }
        uVar3 = uVar3 + 1;
        uVar2 = *(uint *)(param_1 + 0x104);
        iVar4 = iVar4 + 4;
      } while (uVar3 < uVar2);
    }
    iVar4 = param_1;
    if (uVar2 != 0) {
      do {
        uVar1 = sys::sys_mmapper_map_memory
                          (*(int *)(param_1 + 200) + *(int *)(param_1 + 0x100) +
                           *(int *)(param_1 + 0x108) * uVar5,*(undefined4 *)(iVar4 + 0xd0),0x40000);
        if ((int)uVar1 != 0) {
          FUN_005ccf90(&DAT_00905738,"sys_mmapper_map_memory() failed: %d\n",uVar1);
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0x104));
    }
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}



//==== 004e68bc  ns=Global  size=0x22c
// sig: undefined FUN_004e68bc(void)
// callers(1): 0001401c boot::boot
// callees(7): 004e6770 FUN_004e6770; 005ccf90 FUN_005ccf90; 005cd098 libc::printf; 0064f4a4 cell::cellSysmoduleLoadModule; 00650764 sys::sys_mmapper_allocate_memory; 006507c4 sys::sys_mmapper_map_memory; 0800014a syscall::syscall_sys_mmapper_allocate_address
// strings: 006596ec: 'Allocating a new 256MB address space.\n' | 00659714: 'sys_mmapper_allocate_address() failed: %d\n' | 00659744: 'Allocating physical memory blocks.\n' | 00659694: 'sys_mmapper_allocate_memory() failed: %d\n' | 0065976c: 'Mapping the physical memory blocks to the address space.\n' | 006596c4: 'sys_mmapper_map_memory() failed: %d\n'

void FUN_004e68bc(int param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_20 [4];
  uint local_1c;
  
  *(int *)(param_1 + 0x104) = param_2;
  *(int *)(param_1 + 0x108) = (int)((param_3 & 0xffffffff) << 0x14);
  libc::printf("Allocating a new 256MB address space.\n");
  iVar2 = syscall::syscall_sys_mmapper_allocate_address(0x10000000,0x400,0,param_1 + 200);
  if (iVar2 != 0) {
    FUN_005ccf90(&DAT_00905738,"sys_mmapper_allocate_address() failed: %d\n",iVar2);
  }
  libc::printf("Allocating physical memory blocks.\n");
  syscall::syscall_sys_mmapper_allocate_address(auStack_20);
  uVar5 = (ulonglong)local_1c & 0xfff00000;
  uVar5 = (uVar5 + ((longlong)(0x10000000 - uVar5) >> 0x3f & 0x10000000 - uVar5) +
          (param_4 & 0xfff) * -0x100000) - (longlong)param_2 * (longlong)*(int *)(param_1 + 0x108);
  iVar2 = (int)uVar5;
  *(int *)(param_1 + 0x100) = iVar2;
  uVar1 = sys::sys_mmapper_allocate_memory(uVar5 & 0xffffffff,0x400,param_1 + 0xcc);
  if ((int)uVar1 != 0) {
    FUN_005ccf90(&DAT_00905738,"sys_mmapper_allocate_memory() failed: %d\n",uVar1);
  }
  libc::printf("Mapping the physical memory blocks to the address space.\n");
  uVar1 = sys::sys_mmapper_map_memory
                    (*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc),0x40000);
  if ((int)uVar1 != 0) {
    FUN_005ccf90(&DAT_00905738,"sys_mmapper_map_memory() failed: %d\n",uVar1);
  }
  lVar6 = 3;
  iVar3 = param_1;
  iVar4 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x11c) = 0;
    *(undefined1 *)(iVar4 + 0x110) = 0;
    *(undefined4 *)(iVar3 + 0x120) = 0;
    *(undefined1 *)(iVar4 + 0x111) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(undefined1 *)(iVar4 + 0x112) = 0;
    *(undefined4 *)(iVar3 + 0x128) = 0;
    *(undefined1 *)(iVar4 + 0x113) = 0;
    iVar3 = iVar3 + 0x10;
    iVar4 = iVar4 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined1 *)(param_1 + 0xc4) = 0;
  FUN_004e6770(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 200);
  *(int *)(param_1 + 4) = iVar2 + *(int *)(param_1 + 0x108) * param_2;
  cell::cellSysmoduleLoadModule(0x3e);
  cell::cellSysmoduleLoadModule(0x33);
  cell::cellSysmoduleLoadModule(0x45);
  cell::cellSysmoduleLoadModule(0x3a);
  cell::cellSysmoduleLoadModule(9);
  cell::cellSysmoduleLoadModule(0x1e);
  return;
}



//==== 004e6ae8  ns=Global  size=0x158
// sig: undefined FUN_004e6ae8(void)
// callers(0): 
// callees(4): 005ccf90 FUN_005ccf90; 005cd098 libc::printf; 006505e4 sys::sys_mmapper_free_memory; 00650624 sys::sys_mmapper_unmap_memory
// strings: 006597a8: 'Unmapping the temporary memory blocks from the address space.\n' | 006597e8: 'sys_mmapper_unmap_memory() failed: %d\n' | 00659810: 'Freeing the temporary physical memory block.\n' | 00659840: 'sys_mmapper_free_memory() failed: %d\n'

void FUN_004e6ae8(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_40 [16];
  
  if (*(char *)(param_1 + 0xc4) != '\0') {
    libc::printf("Unmapping the temporary memory blocks from the address space.\n");
    uVar2 = 0;
    if (*(int *)(param_1 + 0x104) != 0) {
      do {
        uVar1 = sys::sys_mmapper_unmap_memory
                          (*(int *)(param_1 + 200) + *(int *)(param_1 + 0x100) +
                           *(int *)(param_1 + 0x108) * uVar2,auStack_40);
        if ((int)uVar1 != 0) {
          FUN_005ccf90(&DAT_00905738,"sys_mmapper_unmap_memory() failed: %d\n",uVar1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x104));
    }
    libc::printf("Freeing the temporary physical memory block.\n");
    uVar2 = 0;
    iVar3 = param_1;
    if (*(int *)(param_1 + 0x104) != 0) {
      do {
        uVar1 = sys::sys_mmapper_free_memory(*(undefined4 *)(iVar3 + 0xd0));
        if ((int)uVar1 != 0) {
          FUN_005ccf90(&DAT_00905738,"sys_mmapper_free_memory() failed: %d\n",uVar1);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < *(uint *)(param_1 + 0x104));
    }
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  return;
}



//==== 004e6c40  ns=Global  size=0x1b0
// sig: undefined FUN_004e6c40(void)
// callers(0): 
// callees(2): 005ccf90 FUN_005ccf90; 005cd098 libc::printf
// strings: 00659868: 'Creating a memory container.\n' | 00659888: 'sys_memory_container_create() failed: %d\n'

undefined4 FUN_004e6c40(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 0;
  uVar1 = *(uint *)(param_1 + 0x104);
  uVar7 = ((param_2 + *(uint *)(param_1 + 0x108)) - 1) / *(uint *)(param_1 + 0x108);
  uVar5 = uVar7;
  iVar6 = param_1;
  if (uVar1 != 0) {
    do {
      if (*(char *)(iVar6 + 0x110) == '\0') {
        uVar2 = uVar8;
        iVar3 = iVar6;
        if (uVar1 < uVar5) {
          return 0;
        }
        for (; (uVar2 < uVar5 && (*(char *)(iVar3 + 0x110) == '\0')); iVar3 = iVar3 + 1) {
          uVar2 = uVar2 + 1;
        }
        if (uVar2 == uVar5) {
          if ((int)uVar8 < 0) {
            return 0;
          }
          uVar7 = uVar8 + uVar7;
          if (uVar1 < uVar7) {
            return 0;
          }
          libc::printf("Creating a memory container.\n");
          iVar6 = param_1 + uVar8 * 4;
          syscall();
          if (iVar6 + 0x11c == 0) {
            if (uVar8 < uVar7) {
              iVar4 = uVar8 + param_1;
              iVar9 = uVar7 - uVar8;
              iVar3 = iVar6;
              do {
                *(undefined1 *)(iVar4 + 0x110) = 1;
                iVar9 = iVar9 + -1;
                iVar4 = iVar4 + 1;
                *(undefined4 *)(iVar3 + 0x11c) = *(undefined4 *)(uVar8 * 4 + param_1 + 0x11c);
                iVar3 = iVar3 + 4;
              } while (0 < iVar9);
            }
            return *(undefined4 *)(iVar6 + 0x11c);
          }
          FUN_005ccf90(&DAT_00905738,"sys_memory_container_create() failed: %d\n",iVar6 + 0x11c);
          return 0;
        }
      }
      uVar8 = uVar8 + 1;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (uVar8 < uVar1);
  }
  return 0;
}



//==== 004e6df0  ns=Global  size=0xbc
// sig: undefined FUN_004e6df0(void)
// callers(0): 
// callees(2): 005ccf90 FUN_005ccf90; 005cd098 libc::printf
// strings: 006598b4: 'Destroying a memory container.\n' | 006598d4: 'sys_memory_container_destroy() failed: %d\n'

void FUN_004e6df0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x104);
  uVar2 = 0;
  iVar3 = param_1;
  iVar4 = param_1;
  if (uVar1 != 0) {
    do {
      if ((*(char *)(iVar4 + 0x110) != '\0') && (*(int *)(iVar3 + 0x11c) == param_2)) {
        *(undefined1 *)(iVar4 + 0x110) = 0;
        uVar1 = *(uint *)(param_1 + 0x104);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (uVar2 < uVar1);
  }
  libc::printf("Destroying a memory container.\n");
  syscall();
  if (param_2 != 0) {
    FUN_005ccf90(&DAT_00905738,"sys_memory_container_destroy() failed: %d\n",param_2);
  }
  return;
}



//==== 004e6eac  ns=Global  size=0x12c
// sig: undefined FUN_004e6eac(void)
// callers(3): 004e8714 idol::SaveSystem_PS::SaveGameData; 004e8d7c idol::SaveSystem_PS::LoadGameData; 004e903c idol::thr_SaveSystem_CheckExisting
// callees(1): 005cd098 libc::printf
// strings: 006599d8: '### CELL_SAVEDATA_ERROR_BROKEN Error Occurred!  Setting ErrorState to PS3_SAVETYPE_ERR_CORRUPTION\n' | 00659a40: '### CELL_SAVEDATA_ERROR_FAILURE Error Occurred!  Setting ErrorState to PS3_SAVETYPE_ERR_CORRUPTION\n'

int32_t FUN_004e6eac(int param_1,int param_2)

{
  int32_t iVar1;
  
  if (param_1 < -0x7ffd4bfd) {
    if (param_1 < -0x7ffd4bff) {
      return param_2;
    }
    if (-0x7ffd4bff < param_1) {
      *(undefined4 *)(param_2 + 0x468) = 0xc;
      return param_2;
    }
  }
  else if (param_1 < -0x7ffd4bf9) {
    if (param_1 < -0x7ffd4bfb) {
      if (param_1 < -0x7ffd4bfc) {
        *(undefined4 *)(param_2 + 0x468) = 0xc;
        return param_2;
      }
    }
    else if (param_1 < -0x7ffd4bfa) {
      return param_2;
    }
  }
  else {
    if (param_1 < -0x7ffd4bf7) {
      if (-0x7ffd4bf9 < param_1) {
        return param_2;
      }
      *(undefined4 *)(param_2 + 0x468) = 0xc;
      iVar1 = libc::printf(
                          "### CELL_SAVEDATA_ERROR_FAILURE Error Occurred!  Setting ErrorState to PS3_SAVETYPE_ERR_CORRUPTION\n"
                          );
      return iVar1;
    }
    if (-0x7ffd4bf4 < param_1) {
      return param_2;
    }
  }
  *(undefined4 *)(param_2 + 0x468) = 0xc;
  iVar1 = libc::printf(
                      "### CELL_SAVEDATA_ERROR_BROKEN Error Occurred!  Setting ErrorState to PS3_SAVETYPE_ERR_CORRUPTION\n"
                      );
  return iVar1;
}



//==== 004e6fd8  ns=Global  size=0xcc
// sig: undefined FUN_004e6fd8(void)
// callers(3): 004e8714 idol::SaveSystem_PS::SaveGameData; 004e8d7c idol::SaveSystem_PS::LoadGameData; 004e903c idol::thr_SaveSystem_CheckExisting
// callees(1): 005cd098 libc::printf
// strings: 00659aa4: 'CELL_SAVEDATA_ERROR_NOSPACE Occurred\n' | 00659acc: 'PS3_SAVETYPE_ERR_NO_SPACE Occurred\n'

void FUN_004e6fd8(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3;
  if (*param_2 != 0) {
    if (*param_2 == 1) {
      memcard::g_memcardSaveSysState = 6;
      iVar2 = memcard::g_memcardSaveSysState;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x468);
      iVar2 = memcard::g_memcardSaveSysState;
      if (iVar1 < 0xc) {
        if (10 < iVar1) {
          libc::printf("PS3_SAVETYPE_ERR_NO_SPACE Occurred\n");
          *param_2 = -0x7ffd4bfb;
          memcard::g_memcardSaveSysState = 0xb;
          iVar2 = memcard::g_memcardSaveSysState;
        }
      }
      else if (iVar1 < 0xd) {
        libc::printf("CELL_SAVEDATA_ERROR_NOSPACE Occurred\n");
        *param_2 = -0x7ffd4bfa;
        memcard::g_memcardSaveSysState = 0xc;
        iVar2 = memcard::g_memcardSaveSysState;
      }
    }
  }
  memcard::g_memcardSaveSysState = iVar2;
  return;
}



//==== 004e70a4  ns=Global  size=0xcc
// sig: undefined FUN_004e70a4(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 00659af0: 'Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n' | 00659b60: '\tget->dirNum : %d\n' | 00659b78: '\tget->dirListNum: %d\n' | 00659b90: '\t%4d  DIRNAME: %s\t\tPARAM: %s\n'

void FUN_004e70a4(uint *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  print_tty2(
            "Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n"
            );
  print_tty2("\tget->dirNum : %d\n",(ulonglong)*param_1);
  print_tty2("\tget->dirListNum: %d\n",(ulonglong)param_1[1]);
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      uVar1 = (ulonglong)param_1[2] + uVar2 * 0x30;
      print_tty2("\t%4d  DIRNAME: %s\t\tPARAM: %s\n",uVar2,uVar1 & 0xffffffff,
                 uVar1 + 0x20 & 0xffffffff);
      uVar2 = uVar2 + 1 & 0xffffffff;
    } while (uVar2 < param_1[1]);
  }
  return;
}



//==== 004e7170  ns=Global  size=0x218
// sig: undefined FUN_004e7170(void)
// callers(1): 004ea320 idol::cb_data_status_load
// callees(1): 004ffc9c print_tty2
// strings: 00659bb0: 'Dump CellSaveDataStatGet in CellSaveDataStatCallback--------------------\n' | 00659c00: '\tget->dir.dirName : %s\n' | 00659c18: '\tget->isNewData: %d\n' | 00659c30: '\tget->hddFreeSizeKB 0x%x\n' | 00659c50: '\tget->sizeKB : 0x%x\n' | 00659c68: '\tget->sysSizeKB : 0x%x\n' | 00659c80: '\tget->bind : %d\n' | 00659c98: '\tget->dir : dirName : %s  atime : %lld mtime : %lld ctime : %lld\n' | 00659ce0: '\tget->fileListNum: %d\n' | 00659cf8: '\t%3d  FILENAME: %s   type : %d  size : %lld  atime : %lld mtime : %lld ctime : %lld\n' | 00659d50: '\tget->fileNum: %d\n' | 00659d70: '\tPARAM.SFO:TITLE: %s\n' | 00659d88: '\tPARAM.SFO:SUB_TITLE: %s\n' | 00659da8: '\tPARAM.SFO:DETAIL: %s\n' | 00659dc0: '\tPARAM.SFO:ATTRIBUTE: %d\n' | 00659de0: '\tPARAM.SFO:LIST_PARAM: %s\n'

void FUN_004e7170(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  print_tty2("Dump CellSaveDataStatGet in CellSaveDataStatCallback--------------------\n");
  print_tty2("\tget->dir.dirName : %s\n",param_1 + 8);
  print_tty2("\tget->isNewData: %d\n",(ulonglong)(uint)param_1[1]);
  print_tty2("\tget->hddFreeSizeKB 0x%x\n",*param_1);
  print_tty2("\tget->sizeKB : 0x%x\n",param_1[0x195]);
  print_tty2("\tget->sysSizeKB : 0x%x\n",param_1[0x196]);
  print_tty2("\tget->bind : %d\n",(ulonglong)(uint)param_1[0x194]);
  print_tty2("\tget->dir : dirName : %s  atime : %lld mtime : %lld ctime : %lld\n",param_1 + 8,
             *(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6))
  ;
  print_tty2("\tget->fileListNum: %d\n",(ulonglong)(uint)param_1[0x198]);
  uVar2 = 0;
  if (param_1[0x198] != 0) {
    do {
      iVar1 = param_1[0x199] + uVar2 * 0x38;
      print_tty2("\t%3d  FILENAME: %s   type : %d  size : %lld  atime : %lld mtime : %lld ctime : %lld\n"
                 ,uVar2,iVar1 + 0x28,(ulonglong)*(uint *)(param_1[0x199] + uVar2 * 0x38),
                 *(undefined8 *)(iVar1 + 8),*(undefined8 *)(iVar1 + 0x10),
                 *(undefined8 *)(iVar1 + 0x18),*(undefined8 *)(iVar1 + 0x20));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x198]);
  }
  print_tty2("\tget->fileNum: %d\n",(ulonglong)(uint)param_1[0x197]);
  print_tty2("\n");
  print_tty2("\tPARAM.SFO:TITLE: %s\n",param_1 + 0x10);
  print_tty2("\tPARAM.SFO:SUB_TITLE: %s\n",param_1 + 0x30);
  print_tty2("\tPARAM.SFO:DETAIL: %s\n",param_1 + 0x50);
  print_tty2("\tPARAM.SFO:ATTRIBUTE: %d\n",(ulonglong)(uint)param_1[0x150]);
  print_tty2("\tPARAM.SFO:LIST_PARAM: %s\n",param_1 + 0x152);
  print_tty2("\n");
  return;
}



//==== 004e7388  ns=Global  size=0x7c
// sig: undefined FUN_004e7388(void)
// callers(1): 000148f8 boot::StaticInit_BootGlobals
// callees(0): 

void FUN_004e7388(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_PTR_006618d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x114] = 0;
  param_1[0x116] = 0;
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined1 *)((int)param_1 + 0x45d) = 0;
  param_1[0x118] = 1;
  param_1[0x115] = 4;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



//==== 004e7404  ns=idol  size=0x130
// sig: undefined GetSaveData(void)
// callers(10): 00012ec8 boot::GameStart; 00013a20 boot::GameShutDown; 0001401c boot::boot; 000e76cc memcard::memcard_Update; 000e7ac8 memcard::memcard_InitSaveMsg; 000e87f8 memcard::memcard_SetSaveDialogStrings; 000e8888 memcard::memcard_PerformOperation; 000e8ca0 memcard::memcard_RestoreSaveGame; 000e8fd8 memcard::memcard_PollSaveResult; 004f06ac FUN_004f06ac
// callees(2): 005d0140 libc::memset; 005e38b0 FUN_005e38b0

SaveDataInfo * idol::GetSaveData(void)

{
  SaveDataInfo *puVar1;
  SaveDataInfo *pSVar1;
  
  pSVar1 = GameSavePtr;
  if (GameSavePtr == (SaveDataInfo *)0x0) {
    pSVar1 = (SaveDataInfo *)0x0;
    puVar1 = (SaveDataInfo *)FUN_005e38b0(0x478);
    if (puVar1 != (SaveDataInfo *)0x0) {
      puVar1->field1_0x4 = 0;
      puVar1->field0_0x0 = &PTR_PTR_006618d0;
      puVar1->field2_0x8 = 0;
      puVar1->field3_0xc = 0;
      puVar1->field4_0x10 = 0;
      puVar1->field5_0x14 = 0;
      puVar1->field6_0x18 = 0;
      puVar1->field1080_0x450 = 0;
      puVar1->field1082_0x458 = 0;
      puVar1->field1083_0x45c = 0;
      puVar1->field1084_0x45d = 0;
      puVar1->field1087_0x460 = 1;
      puVar1->field1081_0x454 = 4;
      libc::memset(&puVar1->field1051_0x430,0,0x20);
      puVar1->field11_0x20 = 0;
      puVar1->field12_0x21 = 0;
      puVar1->field13_0x22 = 0;
      puVar1->field14_0x23 = 0;
      puVar1->field15_0x24 = 0;
      puVar1->field16_0x25 = 0;
      puVar1->field17_0x26 = 0;
      puVar1->field18_0x27 = 0;
      puVar1->field19_0x28 = 0;
      puVar1->field20_0x29 = 0;
      puVar1->field21_0x2a = 0;
      puVar1->field22_0x2b = 0;
      puVar1->field23_0x2c = 0;
      puVar1->field24_0x2d = 0;
      puVar1->field25_0x2e = 0;
      puVar1->field26_0x2f = 0;
      pSVar1 = puVar1;
    }
  }
  GameSavePtr = pSVar1;
  return pSVar1;
}



//==== 004e7534  ns=Global  size=0x160
// sig: undefined FUN_004e7534(void)
// callers(0): 
// callees(4): 005d0140 libc::memset; 005e38b0 FUN_005e38b0; 0064f724 cell::cellGameContentErrorDialog; 00650744 sys::sys_ppu_thread_exit

void FUN_004e7534(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  cell::cellGameContentErrorDialog(param_1,0x2cf,0);
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005e38b0(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      libc::memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  memcard::g_memcardSaveBusy = 0;
  DAT_01111604 = 0;
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 004e7694  ns=Global  size=0x7c
// sig: undefined FUN_004e7694(void)
// callers(0): 
// callees(0): 

void FUN_004e7694(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_PTR_006618d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x114] = 0;
  param_1[0x116] = 0;
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined1 *)((int)param_1 + 0x45d) = 0;
  param_1[0x118] = 1;
  param_1[0x115] = 4;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



//==== 004e7710  ns=Global  size=0x28
// sig: undefined FUN_004e7710(void)
// callers(1): 00013a20 boot::GameShutDown
// callees(1): 0064f484 cell::cellSysmoduleUnloadModule

void FUN_004e7710(void)

{
  cell::cellSysmoduleUnloadModule(0x33);
  return;
}



//==== 004e7738  ns=Global  size=0x34
// sig: undefined FUN_004e7738(void)
// callers(1): 00014854 boot::StaticDestroy_BootGlobals
// callees(1): 0064f484 cell::cellSysmoduleUnloadModule

void FUN_004e7738(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006618d0;
  cell::cellSysmoduleUnloadModule(0x33);
  return;
}



//==== 004e776c  ns=Global  size=0x54
// sig: undefined FUN_004e776c(void)
// callers(0): 
// callees(2): 005e387c FUN_005e387c; 0064f484 cell::cellSysmoduleUnloadModule

void FUN_004e776c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006618d0;
    cell::cellSysmoduleUnloadModule(0x33);
    FUN_005e387c(param_1);
  }
  return;
}



//==== 004e77c0  ns=Global  size=0x34
// sig: undefined FUN_004e77c0(void)
// callers(0): 
// callees(1): 0064f484 cell::cellSysmoduleUnloadModule

void FUN_004e77c0(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006618d0;
  cell::cellSysmoduleUnloadModule(0x33);
  return;
}



//==== 004e77f4  ns=Global  size=0x68
// sig: undefined FUN_004e77f4(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 0064f484 cell::cellSysmoduleUnloadModule
// strings: 00659dfc: '%s failed: status = 0x%x\n'

undefined8 FUN_004e77f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\0') {
    cell::cellSysmoduleUnloadModule(0x33);
  }
  print_tty2("%s failed: status = 0x%x\n",param_2,param_3);
  return param_3;
}



//==== 004e785c  ns=Global  size=0x94
// sig: undefined FUN_004e785c(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 00650524 sys::sys_ppu_thread_create
// strings: 00659e18: '****SaveSystem_PS::Auto Save Game Data ****\n' | 00659e48: 'SaveSystem_PS::AutoSaveGameData(void*)' | 00659dfc: '%s failed: status = 0x%x\n' | 00659e70: 'GameSave_PS::thr_SaveSystem_AutoSave'

void FUN_004e785c(void)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  print_tty2("****SaveSystem_PS::Auto Save Game Data ****\n");
  DAT_01111604 = 1;
  memcard::g_memcardSaveBusy = 3;
  iVar1 = sys::sys_ppu_thread_create
                    (auStack_10,&PTR_AutoSaveGameData_00710038,0,0x3e9,0x4000,0,
                     "SaveSystem_PS::AutoSaveGameData(void*)");
  if (iVar1 != 0) {
    print_tty2("%s failed: status = 0x%x\n","GameSave_PS::thr_SaveSystem_AutoSave",
               0xffffffffffffffff);
  }
  return;
}



//==== 004e78f0  ns=Global  size=0x30
// sig: undefined FUN_004e78f0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004e78f0(int param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (memcard::g_memcardSaveBusy == 0) {
    if (param_3 != 0) {
      *(int *)(param_1 + 0x450) = param_3;
    }
    *(undefined4 *)(param_1 + 0x458) = param_2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 004e7920  ns=Global  size=0x84
// sig: undefined FUN_004e7920(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 00650524 sys::sys_ppu_thread_create
// strings: 00659e98: 'SavesSystem_PS::LoadGameData(void*)' | 00659dfc: '%s failed: status = 0x%x\n' | 00659ec0: 'list load thread create failed %d\n'

void FUN_004e7920(void)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  DAT_01111604 = 1;
  memcard::g_memcardSaveBusy = 2;
  iVar1 = sys::sys_ppu_thread_create
                    (auStack_10,&PTR_LoadGameData_00710048,0,0x3e9,0x4000,0,
                     "SavesSystem_PS::LoadGameData(void*)");
  if (iVar1 != 0) {
    print_tty2("%s failed: status = 0x%x\n","list load thread create failed %d\n",0xffffffffffffffff
              );
  }
  return;
}



//==== 004e79a4  ns=Global  size=0x90
// sig: undefined FUN_004e79a4(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 00650524 sys::sys_ppu_thread_create
// strings: 00659ee4: '****SaveSystem_PS::Save Game Data ****\n' | 00659f0c: 'SaveSystem_PS::SaveGameData(void*)' | 00659dfc: '%s failed: status = 0x%x\n' | 00659f34: 'GameSave_PS::thr_SaveSystem_Save'

void FUN_004e79a4(void)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  print_tty2("****SaveSystem_PS::Save Game Data ****\n");
  DAT_01111604 = 1;
  memcard::g_memcardSaveBusy = 1;
  iVar1 = sys::sys_ppu_thread_create
                    (auStack_10,&PTR_SaveGameData_00710030,0,0x3e9,0x4000,0,
                     "SaveSystem_PS::SaveGameData(void*)");
  if (iVar1 != 0) {
    print_tty2("%s failed: status = 0x%x\n","GameSave_PS::thr_SaveSystem_Save",0xffffffffffffffff);
  }
  return;
}



//==== 004e7a34  ns=idol::SaveSystem_PS  size=0x268
// sig: undefined RunSaveSystem(undefined4 param_1, undefined4 saveArg, undefined8 param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
// callers(1): 000e8888 memcard::memcard_PerformOperation
// callees(3): 004ffc9c print_tty2; 005d0140 libc::memset; 00650524 sys::sys_ppu_thread_create
// strings: 00659ee4: '****SaveSystem_PS::Save Game Data ****\n' | 00659f0c: 'SaveSystem_PS::SaveGameData(void*)' | 00659dfc: '%s failed: status = 0x%x\n' | 00659f34: 'GameSave_PS::thr_SaveSystem_Save' | 00659e98: 'SavesSystem_PS::LoadGameData(void*)' | 00659ec0: 'list load thread create failed %d\n' | 00659e18: '****SaveSystem_PS::Auto Save Game Data ****\n' | 00659e48: 'SaveSystem_PS::AutoSaveGameData(void*)' | 00659e70: 'GameSave_PS::thr_SaveSystem_AutoSave'

void idol::SaveSystem_PS::RunSaveSystem
               (int param_1,int saveArg,undefined8 param_3,undefined8 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  if ((memcard::g_memcardSaveBusy == 0) && (DAT_01111604 == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = param_5;
    *(undefined4 *)(param_1 + 0x14) = param_6;
    *(undefined4 *)(param_1 + 0x10) = param_7;
    *(undefined4 *)(param_1 + 0x18) = param_8;
    uVar2 = (undefined4)param_4;
    iVar1 = (int)param_3;
    if (saveArg < 2) {
      if (-1 < saveArg) {
        if (saveArg < 1) {
          if (memcard::g_memcardSaveBusy == 0) {
            if (iVar1 != 0) {
              *(int *)(param_1 + 0x450) = iVar1;
            }
            *(undefined4 *)(param_1 + 0x458) = uVar2;
          }
          print_tty2("****SaveSystem_PS::Save Game Data ****\n");
          DAT_01111604 = '\x01';
          memcard::g_memcardSaveBusy = 1;
          iVar1 = sys::sys_ppu_thread_create
                            (auStack_20,&PTR_SaveGameData_00710030,0,0x3e9,0x4000,0,
                             "SaveSystem_PS::SaveGameData(void*)");
          if (iVar1 != 0) {
            print_tty2("%s failed: status = 0x%x\n","GameSave_PS::thr_SaveSystem_Save",
                       0xffffffffffffffff);
          }
        }
        else {
          libc::memset(param_3,0xf,param_4);
          if (memcard::g_memcardSaveBusy == 0) {
            if (iVar1 != 0) {
              *(int *)(param_1 + 0x450) = iVar1;
            }
            *(undefined4 *)(param_1 + 0x458) = uVar2;
          }
          DAT_01111604 = '\x01';
          memcard::g_memcardSaveBusy = 2;
          iVar1 = sys::sys_ppu_thread_create
                            (auStack_28,&PTR_LoadGameData_00710048,0,0x3e9,0x4000,0,
                             "SavesSystem_PS::LoadGameData(void*)");
          if (iVar1 != 0) {
            print_tty2("%s failed: status = 0x%x\n","list load thread create failed %d\n",
                       0xffffffffffffffff);
          }
        }
      }
    }
    else if (saveArg == 3) {
      if (memcard::g_memcardSaveBusy == 0) {
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x450) = iVar1;
        }
        *(undefined4 *)(param_1 + 0x458) = uVar2;
      }
      print_tty2("****SaveSystem_PS::Auto Save Game Data ****\n");
      DAT_01111604 = '\x01';
      memcard::g_memcardSaveBusy = 3;
      iVar1 = sys::sys_ppu_thread_create
                        (auStack_30,&PTR_AutoSaveGameData_00710038,0,0x3e9,0x4000,0,
                         "SaveSystem_PS::AutoSaveGameData(void*)");
      if (iVar1 != 0) {
        print_tty2("%s failed: status = 0x%x\n","GameSave_PS::thr_SaveSystem_AutoSave",
                   0xffffffffffffffff);
      }
    }
  }
  return;
}



//==== 004e7c9c  ns=idol  size=0x78
// sig: undefined registerSavesystemCallback(void)
// callers(1): 0001401c boot::boot
// callees(2): 005cd098 libc::printf; 00650524 sys::sys_ppu_thread_create
// strings: 00659f58: 'thr_SaveSystem_CheckExisting()' | 00659f78: 'Really fatal error trying to spawn off fatal error thread\n'

int idol::registerSavesystemCallback(void)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  DAT_01111604 = 1;
  memcard::g_memcardSaveBusy = 2;
  iVar1 = sys::sys_ppu_thread_create
                    (auStack_10,&PTR_thr_SaveSystem_CheckExisting_00710050,0,0x3e9,0x4000,0,
                     "thr_SaveSystem_CheckExisting()");
  if (iVar1 != 0) {
    iVar1 = libc::printf("Really fatal error trying to spawn off fatal error thread\n");
  }
  return iVar1;
}



//==== 004e7d14  ns=Global  size=0x4
// sig: undefined FUN_004e7d14(void)
// callers(0): 
// callees(0): 

void FUN_004e7d14(void)

{
  return;
}



//==== 004e7d18  ns=Global  size=0x7c
// sig: undefined FUN_004e7d18(void)
// callers(1): 000e76cc memcard::memcard_Update
// callees(2): 005cd098 libc::printf; 00650524 sys::sys_ppu_thread_create
// strings: 00659fb4: 'SaveSystem_PS::Fatalexit_memcardThread()' | 00659f78: 'Really fatal error trying to spawn off fatal error thread\n'

int FUN_004e7d18(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  DAT_01111604 = 1;
  memcard::g_memcardSaveBusy = 4;
  iVar1 = sys::sys_ppu_thread_create
                    (auStack_10,&PTR_FUN_0070ff48,param_2,0x3e9,0x4000,0,
                     "SaveSystem_PS::Fatalexit_memcardThread()");
  if (iVar1 != 0) {
    iVar1 = libc::printf("Really fatal error trying to spawn off fatal error thread\n");
  }
  return iVar1;
}



//==== 004e7d94  ns=Global  size=0x70
// sig: undefined FUN_004e7d94(void)
// callers(1): 000e8fd8 memcard::memcard_PollSaveResult
// callees(1): 004ffc9c print_tty2
// strings: 00659fe0: 'GameSaveSystem::OnSave Callback about to occur\n'

undefined4 FUN_004e7d94(int param_1)

{
  undefined4 uVar1;
  
  print_tty2("GameSaveSystem::OnSave Callback about to occur\n");
  if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}



//==== 004e7e04  ns=Global  size=0x68
// sig: undefined FUN_004e7e04(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 0065a010: 'GameSaveSystem::OnSaving Callback about to occur\n'

undefined4 FUN_004e7e04(int param_1)

{
  undefined4 uVar1;
  
  print_tty2("GameSaveSystem::OnSaving Callback about to occur\n");
  if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x14))();
  }
  return uVar1;
}



//==== 004e7e6c  ns=Global  size=0x78
// sig: undefined FUN_004e7e6c(void)
// callers(1): 000e8fd8 memcard::memcard_PollSaveResult
// callees(1): 004ffc9c print_tty2
// strings: 0065a044: 'GameSaveSystem::OnLoad Callback about to occur\n'

undefined4 FUN_004e7e6c(int param_1)

{
  undefined4 uVar1;
  
  print_tty2("GameSaveSystem::OnLoad Callback about to occur\n");
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x450);
  if (*(undefined4 **)(param_1 + 0x10) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}



//==== 004e7ee4  ns=Global  size=0x70
// sig: undefined FUN_004e7ee4(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 0065a074: 'GameSaveSystem::OnLoading Callback about to occur\n'

undefined4 FUN_004e7ee4(int param_1)

{
  undefined4 uVar1;
  
  print_tty2("GameSaveSystem::OnLoading Callback about to occur\n");
  if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}



//==== 004e7f54  ns=Global  size=0x48
// sig: undefined FUN_004e7f54(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy

void FUN_004e7f54(int param_1,undefined8 param_2)

{
  libc::strcpy(param_1 + 0x430,param_2,0x20);
  *(undefined1 *)(param_1 + 0x44f) = 0;
  *(undefined1 *)(param_1 + 0x45c) = 1;
  return;
}



//==== 004e7f9c  ns=Global  size=0x13c
// sig: undefined FUN_004e7f9c(void)
// callers(1): 0001401c boot::boot
// callees(5): 004ffc9c print_tty2; 00504c58 FUN_00504c58; 005c5ad0 libc::memcpy; 005cccec libc::strcpy; 005cd2a8 libc::snprintf
// strings: 0065a0b0: '---###---Invalid File ID for SaveGame Utility!---###---\n' | 0065a0f0: '%s%s' (raw)

void FUN_004e7f9c(int param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00504c58(boot::g_pHWSystem);
  *(int *)(param_1 + 0x454) = (int)param_2;
  if ((int)param_2 == 0) {
    PTR_Elf64_Ehdr_008fa648 = DAT_008fa64c;
    libc::snprintf((char *)(param_1 + 0x464),"rc1");
    if (*(int *)(param_1 + 0x454) != 4) {
      libc::memcpy((void *)(param_1 + 0x20),(void *)((int)&PTR_DAT_00659900 + (int)(param_2 << 4)),
                   0x10);
      DAT_008fa6a4 = PTR_Elf64_Ehdr_008fa648;
      *(undefined1 *)(param_1 + 0x45d) = 1;
      *(undefined **)(param_1 + 0x46c) = DAT_008fa6a4;
      libc::snprintf(&DAT_008fa6c8,"%s%s",uVar1,
                     (ulonglong)*(uint *)((int)&PTR_s__RC1_SAVEDATA_006599c8 + (int)(param_2 << 2)))
      ;
      libc::strcpy(&DAT_008fa708,&DAT_008fa6c8,0x20);
    }
  }
  else {
    print_tty2("---###---Invalid File ID for SaveGame Utility!---###---\n");
    *(undefined4 *)(param_1 + 0x454) = 4;
  }
  return;
}



//==== 004e80d8  ns=Global  size=0x70
// sig: undefined FUN_004e80d8(void)
// callers(1): 000e8888 memcard::memcard_PerformOperation
// callees(2): 005cccec libc::strcpy; 005d0140 libc::memset

void FUN_004e80d8(int param_1,undefined8 param_2)

{
  libc::memset(param_1 + 0x30,0,0x400);
  libc::strcpy(param_1 + 0x30,param_2,0x400);
  *(undefined1 *)(param_1 + 0x42f) = 0;
  return;
}



//==== 004e8148  ns=Global  size=0x6c
// sig: undefined FUN_004e8148(void)
// callers(4): 000e7ac8 memcard::memcard_InitSaveMsg; 000e87f8 memcard::memcard_SetSaveDialogStrings; 000e8888 memcard::memcard_PerformOperation; 000e8ca0 memcard::memcard_RestoreSaveGame
// callees(2): 005cccec libc::strcpy; 005d0140 libc::memset
// strings: 008fa728: 'Ratchet & Clank Save'

void FUN_004e8148(int param_1,undefined4 param_2,undefined8 param_3)

{
  DAT_008fa63c = param_2;
  *(int *)(param_1 + 0x474) = (int)param_3;
  libc::memset(s_Ratchet___Clank_Save_008fa728,0,0x400);
  libc::strcpy(s_Ratchet___Clank_Save_008fa728,param_3,0x400);
  return;
}



//==== 004e81b4  ns=Global  size=0x20
// sig: undefined FUN_004e81b4(void)
// callers(0): 
// callees(0): 

void FUN_004e81b4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_2 = param_1;
  param_2[0xb] = param_3;
  param_2[10] = param_4;
  param_2[9] = param_4;
  param_2[2] = param_5;
  param_2[1] = 0;
  return;
}



//==== 004e81d4  ns=Global  size=0x18
// sig: undefined FUN_004e81d4(void)
// callers(0): 
// callees(0): 

void FUN_004e81d4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  return;
}



//==== 004e81ec  ns=idol  size=0x1f4
// sig: undefined fileAllocLoad(void)
// callers(2): 004e92dc idol::SaveDataListCallback; 004e9da0 FUN_004e9da0
// callees(7): 004ffc9c print_tty2; 005cd098 libc::printf; 005d0140 libc::memset; 0064f1c4 cell::cellFsClose; 0064f1e4 cell::cellFsRead; 0064f204 cell::cellFsOpen; 0064f224 cell::cellFsFstat
// strings: 0065a0f8: 'file %s open error : 0x%x\n' | 0065a118: 'file %s get stat error : 0x%x\n' | 0065a138: 'file %s read error : 0x%x\n' | 0065a158: 'file %s close error : 0x%x\n' | 0065a178: 'made it through fileAllocLoad --- file is %s\n'

undefined8 idol::fileAllocLoad(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong local_70;
  undefined1 auStack_68 [36];
  longlong local_44;
  undefined4 local_34 [3];
  
  iVar2 = *param_3;
  *param_3 = 0;
  uVar1 = cell::cellFsOpen(param_1,0,local_34,0,0);
  if ((int)uVar1 == 0) {
    uVar1 = cell::cellFsFstat(local_34[0],auStack_68);
    if ((int)uVar1 == 0) {
      uVar1 = cell::cellFsRead(local_34[0],param_2,local_44,&local_70);
      if (((int)uVar1 == 0) && (local_44 == local_70)) {
        uVar1 = cell::cellFsClose(local_34[0]);
        if ((int)uVar1 == 0) {
          if (iVar2 == 0x20000) {
            libc::memset(param_2 + local_44 & 0xffffffff,0,0x20000U - local_44 & 0xffffffff);
            iVar2 = 0x20000;
          }
          else {
            iVar2 = (int)local_44;
          }
          *param_3 = iVar2;
          libc::printf("made it through fileAllocLoad --- file is %s\n",param_1);
          uVar1 = 0;
        }
        else {
          print_tty2("file %s close error : 0x%x\n",param_1,uVar1);
          uVar1 = 0xffffffffffffffff;
        }
      }
      else {
        print_tty2("file %s read error : 0x%x\n",param_1,uVar1);
        cell::cellFsClose(local_34[0]);
        uVar1 = 0xffffffffffffffff;
      }
    }
    else {
      print_tty2("file %s get stat error : 0x%x\n",param_1,uVar1);
      cell::cellFsClose(local_34[0]);
      uVar1 = 0xffffffffffffffff;
    }
  }
  else {
    print_tty2("file %s open error : 0x%x\n",param_1,uVar1);
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



//==== 004e83e0  ns=Global  size=0x90
// sig: undefined FUN_004e83e0(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 005d5838 FUN_005d5838
// strings: 0065a1a8: 'Allocation failed for save game buffer!\n'

bool FUN_004e83e0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 5;
  param_1[1] = 3;
  param_1[7] = 0;
  param_1[8] = 0xf0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar1 = FUN_005d5838(0xf0);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    print_tty2("Allocation failed for save game buffer!\n");
  }
  return iVar1 != 0;
}



//==== 004e8470  ns=idol  size=0x130
// sig: undefined NewSaveData(void)
// callers(1): 004e9848 idol::SaveDataStatusListCallback
// callees(2): 005cccec libc::strcpy; 005d0140 libc::memset

void idol::NewSaveData(int param_1,int *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x500) = 0;
  libc::memset(iVar1,0,0x80);
  libc::strcpy(iVar1,DAT_008fa63c,0x80);
  iVar1 = *param_2 + 0x80;
  *(undefined1 *)(*param_2 + 0x7f) = 0;
  libc::memset(iVar1,0,0x80);
  libc::strcpy(iVar1,*(undefined4 *)(param_1 + 0x474),0x80);
  iVar1 = *param_2 + 0x100;
  *(undefined1 *)(*param_2 + 0xff) = 0;
  libc::memset(iVar1,0,0x400);
  libc::strcpy(iVar1,param_3 + 0xa0,0x400);
  iVar1 = *param_2;
  *(undefined1 *)(iVar1 + 0x4ff) = 0;
  libc::strcpy(iVar1 + 0x508,param_3 + 0x4a0,8);
  iVar1 = *param_2;
  *(undefined1 *)(iVar1 + 0x50f) = 0;
  *(undefined1 *)(iVar1 + 0x504) = 0;
  *(undefined1 *)(iVar1 + 0x505) = 0;
  *(undefined1 *)(iVar1 + 0x506) = 0;
  *(undefined1 *)(iVar1 + 0x507) = 0;
  return;
}



//==== 004e85a0  ns=Global  size=0x174
// sig: undefined FUN_004e85a0(void)
// callers(4): 004e8714 idol::SaveSystem_PS::SaveGameData; 004e8a70 idol::SaveSystem_PS::AutoSaveGameData; 004e8d7c idol::SaveSystem_PS::LoadGameData; 004e903c idol::thr_SaveSystem_CheckExisting
// callees(4): 004ffc9c print_tty2; 005d0140 libc::memset; 005d580c FUN_005d580c; 005e38b0 FUN_005e38b0
// strings: 0065a1d4: '**** thr_SaveSystem_AutoSave() Finished ****\n'

void FUN_004e85a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005e38b0(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      libc::memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_005d580c(*(int *)(param_1 + 0x24));
  }
  print_tty2("**** thr_SaveSystem_AutoSave() Finished ****\n");
  memcard::g_memcardSaveBusy = 0;
  DAT_01111604 = 0;
  return;
}



//==== 004e8714  ns=idol::SaveSystem_PS  size=0x35c
// sig: undefined SaveGameData(void)
// callers(0): 
// callees(10): 004e6eac FUN_004e6eac; 004e6fd8 FUN_004e6fd8; 004e85a0 FUN_004e85a0; 004ffc9c print_tty2; 005cccec libc::strcpy; 005d0140 libc::memset; 005d5838 FUN_005d5838; 005e38b0 FUN_005e38b0; 0064f4e4 cell::cellSaveDataUserListSave; 00650744 sys::sys_ppu_thread_exit
// strings: 0065a1a8: 'Allocation failed for save game buffer!\n' | 0065a204: '-----------------Result of SaveDataList2 %d-----------------\n'

void idol::SaveSystem_PS::SaveGameData(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_160 [256];
  uint local_60;
  undefined1 local_5c [16];
  undefined1 local_4c [52];
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005e38b0(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      libc::memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  puVar1 = GameSavePtr;
  local_60 = 0xffffffff;
  if ((GameSavePtr[0x118] & 2) == 0) {
    if ((GameSavePtr[0x118] & 1) != 0) {
      libc::strcpy(auStack_160,&DAT_008fa6c8,0x20);
    }
  }
  else if ((*(char *)(GameSavePtr + 0x117) != '\0') && (GameSavePtr + 0x10c != (undefined4 *)0x0)) {
    libc::strcpy(auStack_160,GameSavePtr + 0x10c,0x20);
  }
  DAT_01111610 = 2;
  DAT_01111614 = 4;
  DAT_01111618 = 0;
  iVar3 = FUN_005d5838(0xf0);
  if (iVar3 == 0) {
    print_tty2("Allocation failed for save game buffer!\n");
  }
  else {
    memcard::g_memcardSaveSysState = 5;
    local_60 = cell::cellSaveDataUserListSave
                         (0,0,local_5c,local_4c,&PTR_SaveDataListCallback_00710058,
                          &PTR_SaveDataStatusListCallback_00710060,&PTR_FUN_00710068,0xffffffff);
    print_tty2("-----------------Result of SaveDataList2 %d-----------------\n",(ulonglong)local_60)
    ;
  }
  puVar1[2] = local_60;
  FUN_004e6eac(local_60,puVar1);
  FUN_004e6fd8(puVar1,&local_60,0);
  puVar1[2] = local_60;
  FUN_004e85a0(local_4c);
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 004e8a70  ns=idol::SaveSystem_PS  size=0x2a8
// sig: undefined AutoSaveGameData(void)
// callers(0): 
// callees(9): 004e85a0 FUN_004e85a0; 004ffc9c print_tty2; 005cccec libc::strcpy; 005cd098 libc::printf; 005d0140 libc::memset; 005d5838 FUN_005d5838; 005e38b0 FUN_005e38b0; 0064f5c4 cell::cellSaveDataUserAutoSave; 00650744 sys::sys_ppu_thread_exit
// strings: 0065a1a8: 'Allocation failed for save game buffer!\n' | 0065a244: '####### ERROR FROM AUTO SAVE #### Error Code %#x\n'

void idol::SaveSystem_PS::AutoSaveGameData(void)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar2;
  undefined1 local_60 [40];
  undefined1 auStack_38 [32];
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_005e38b0(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      *puVar3 = &PTR_PTR_006618d0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[0x114] = 0;
      puVar3[0x116] = 0;
      *(undefined1 *)(puVar3 + 0x117) = 0;
      *(undefined1 *)((int)puVar3 + 0x45d) = 0;
      puVar3[0x118] = 1;
      puVar3[0x115] = 4;
      libc::memset(puVar3 + 0x10c,0,0x20);
      *(undefined1 *)(puVar3 + 8) = 0;
      *(undefined1 *)((int)puVar3 + 0x21) = 0;
      *(undefined1 *)((int)puVar3 + 0x22) = 0;
      *(undefined1 *)((int)puVar3 + 0x23) = 0;
      *(undefined1 *)(puVar3 + 9) = 0;
      *(undefined1 *)((int)puVar3 + 0x25) = 0;
      *(undefined1 *)((int)puVar3 + 0x26) = 0;
      *(undefined1 *)((int)puVar3 + 0x27) = 0;
      *(undefined1 *)(puVar3 + 10) = 0;
      *(undefined1 *)((int)puVar3 + 0x29) = 0;
      *(undefined1 *)((int)puVar3 + 0x2a) = 0;
      *(undefined1 *)((int)puVar3 + 0x2b) = 0;
      *(undefined1 *)(puVar3 + 0xb) = 0;
      *(undefined1 *)((int)puVar3 + 0x2d) = 0;
      *(undefined1 *)((int)puVar3 + 0x2e) = 0;
      *(undefined1 *)((int)puVar3 + 0x2f) = 0;
      puVar1 = puVar3;
    }
  }
  GameSavePtr = puVar1;
  puVar1 = GameSavePtr;
  DAT_01111610 = 4;
  DAT_01111614 = 4;
  DAT_01111618 = 0;
  if ((*(char *)(GameSavePtr + 0x117) == '\0') || (GameSavePtr + 0x10c == (undefined4 *)0x0)) {
    memcard::g_memcardSaveSysState = 5;
  }
  else {
    libc::strcpy(auStack_38,GameSavePtr + 0x10c,0x20);
    iVar4 = FUN_005d5838(0xf0);
    if (iVar4 == 0) {
      print_tty2("Allocation failed for save game buffer!\n");
      memcard::g_memcardSaveSysState = 5;
    }
    else {
      memcard::g_memcardSaveSysState = 5;
      uVar2 = cell::cellSaveDataUserAutoSave
                        (0,0,auStack_38,1,local_60,&PTR_SaveDataStatusListCallback_00710060,
                         &PTR_FUN_00710068,0xffffffff);
      iVar4 = (int)uVar2;
      puVar1[2] = iVar4;
      if (iVar4 == 0) {
        memcard::g_memcardSaveSysState = 3;
      }
      else if (iVar4 == 1) {
        memcard::g_memcardSaveSysState = 6;
      }
      else {
        libc::printf("####### ERROR FROM AUTO SAVE #### Error Code %#x\n",uVar2);
      }
    }
  }
  FUN_004e85a0(local_60);
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 004e8d18  ns=Global  size=0x64
// sig: undefined FUN_004e8d18(void)
// callers(0): 
// callees(0): 

void FUN_004e8d18(int param_1,undefined4 *param_2)

{
  if ((((param_1 == 4) || (param_1 == 6)) || (param_1 == 5)) ||
     ((param_1 == 10 || (param_1 == 0xb)))) {
    DAT_008fabb8 = 0x10;
    *param_2 = &DAT_008fabb8;
    DAT_008fabbc = 1;
    DAT_008fabc8 = 0;
    DAT_008fabc4 = 0;
    DAT_008fabcc = 0;
  }
  else {
    *param_2 = 0;
  }
  return;
}



//==== 004e8d7c  ns=idol::SaveSystem_PS  size=0x2c0
// sig: undefined LoadGameData(void)
// callers(0): 
// callees(11): 004e6eac FUN_004e6eac; 004e6fd8 FUN_004e6fd8; 004e85a0 FUN_004e85a0; 004ffc9c print_tty2; 005cccec libc::strcpy; 005cd098 libc::printf; 005d0140 libc::memset; 005d5838 FUN_005d5838; 005e38b0 FUN_005e38b0; 0064f564 cell::cellSaveDataUserListLoad; 00650744 sys::sys_ppu_thread_exit
// strings: 0065a5e0: '*---- Starting GameSave_PS::thr_SaveSystem_Load() ----*\n' | 0065a1a8: 'Allocation failed for save game buffer!\n' | 0065a620: '####Alloc failed in GameSave_PS::thr_SaveSystem_Load()####\n' | 0065a660: 'cellSaveDataListLoad2() : 0x%x\n'

void idol::SaveSystem_PS::LoadGameData(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_160 [4];
  undefined1 local_15c [16];
  undefined1 local_14c [44];
  undefined1 auStack_120 [256];
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005e38b0(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      libc::memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  puVar1 = GameSavePtr;
  print_tty2("*---- Starting GameSave_PS::thr_SaveSystem_Load() ----*\n");
  libc::strcpy(auStack_120,&DAT_008fa6c8,0x100);
  iVar3 = FUN_005d5838(0xf0);
  if (iVar3 == 0) {
    print_tty2("Allocation failed for save game buffer!\n");
    libc::printf("####Alloc failed in GameSave_PS::thr_SaveSystem_Load()####\n");
  }
  else {
    memcard::g_memcardSaveSysState = 5;
    DAT_01111614 = 4;
    DAT_01111618 = 0;
    DAT_01111610 = 3;
    uVar4 = cell::cellSaveDataUserListLoad
                      (0,0,local_15c,local_14c,&PTR_FUN_00710070,&PTR_cb_data_status_load_00710078,
                       &PTR_cb_file_operation_load_00710080,0xffffffff);
    puVar1[2] = uVar4;
    puVar1[1] = puVar1[0x114];
    FUN_004e6eac(uVar4,puVar1);
    FUN_004e6fd8(puVar1,local_160,1);
    puVar1[2] = uVar4;
    print_tty2("cellSaveDataListLoad2() : 0x%x\n",(ulonglong)uVar4);
  }
  FUN_004e85a0(local_14c);
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 004e903c  ns=idol  size=0x2a0
// sig: undefined thr_SaveSystem_CheckExisting(void)
// callers(0): 
// callees(11): 004e6eac FUN_004e6eac; 004e6fd8 FUN_004e6fd8; 004e85a0 FUN_004e85a0; 004ffc9c print_tty2; 005cccec libc::strcpy; 005cd098 libc::printf; 005d0140 libc::memset; 005d5838 FUN_005d5838; 005e38b0 FUN_005e38b0; 0064f544 cell::cellSaveDataListAutoLoad; 00650744 sys::sys_ppu_thread_exit
// strings: 0065a930: '*---- Starting GameSave_PS::thr_SaveSystem_CheckExisting() ----*\n' | 0065a1a8: 'Allocation failed for save game buffer!\n' | 0065a978: '####Alloc failed in GameSave_PS::thr_SaveSystem_CheckExisting()####\n'

void idol::thr_SaveSystem_CheckExisting(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_160 [4];
  undefined1 local_15c [16];
  undefined1 local_14c [44];
  undefined1 auStack_120 [256];
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005e38b0(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      libc::memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  puVar1 = GameSavePtr;
  print_tty2("*---- Starting GameSave_PS::thr_SaveSystem_CheckExisting() ----*\n");
  libc::strcpy(auStack_120,&DAT_008fa6c8,0x100);
  iVar3 = FUN_005d5838(0xf0);
  if (iVar3 == 0) {
    print_tty2("Allocation failed for save game buffer!\n");
    libc::printf("####Alloc failed in GameSave_PS::thr_SaveSystem_CheckExisting()####\n");
  }
  else {
    memcard::g_memcardSaveSysState = 5;
    DAT_01111614 = 4;
    DAT_01111618 = 0;
    DAT_01111610 = 7;
    uVar4 = cell::cellSaveDataListAutoLoad
                      (0,0,local_15c,local_14c,&PTR_FUN_00710088,&PTR_FUN_00710090,
                       &PTR_cb_file_operation_load_00710080,0xffffffff);
    FUN_004e6eac(uVar4,puVar1);
    FUN_004e6fd8(puVar1,local_160,5);
    puVar1[2] = uVar4;
  }
  FUN_004e85a0(local_14c);
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 004e92dc  ns=idol  size=0x56c
// sig: undefined SaveDataListCallback(void)
// callers(0): 
// callees(8): 004e81ec idol::fileAllocLoad; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 004ffc9c print_tty2; 005cc784 FUN_005cc784; 005cd2a8 libc::snprintf; 005d0140 libc::memset; 005e38b0 FUN_005e38b0
// strings: 0065a278: '\n***Inside SaveDataListCallback***\n' | 0065a2a0: 'FOUND TOO MUCH DATA! (Hard to believe!)' | 00659af0: 'Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n' | 00659b60: '\tget->dirNum : %d\n' | 00659b78: '\tget->dirListNum: %d\n' | 00659b90: '\t%4d  DIRNAME: %s\t\tPARAM: %s\n' | 0065a2c8: '%s%s' (raw) | 0065a2d0: '/%s/ps3data/SAVEDATA/maps/map[%d].png' | 0065a2f8: '/%s/ps3data/SAVEDATA/ICON0.PNG' | 0065a318: '***End of SaveDataListCallback***\n'

void idol::SaveDataListCallback(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar6;
  ulonglong uVar4;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar5;
  ulonglong uVar10;
  undefined **ppuVar11;
  uint uVar12;
  undefined1 auStack_190 [128];
  undefined1 local_110 [8];
  char acStack_108 [32];
  char acStack_e8 [96];
  
  puVar3 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_005e38b0(0x478);
    puVar3 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0;
      *puVar6 = &PTR_PTR_006618d0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[0x114] = 0;
      puVar6[0x116] = 0;
      *(undefined1 *)(puVar6 + 0x117) = 0;
      *(undefined1 *)((int)puVar6 + 0x45d) = 0;
      puVar6[0x118] = 1;
      puVar6[0x115] = 4;
      libc::memset(puVar6 + 0x10c,0,0x20);
      *(undefined1 *)(puVar6 + 8) = 0;
      *(undefined1 *)((int)puVar6 + 0x21) = 0;
      *(undefined1 *)((int)puVar6 + 0x22) = 0;
      *(undefined1 *)((int)puVar6 + 0x23) = 0;
      *(undefined1 *)(puVar6 + 9) = 0;
      *(undefined1 *)((int)puVar6 + 0x25) = 0;
      *(undefined1 *)((int)puVar6 + 0x26) = 0;
      *(undefined1 *)((int)puVar6 + 0x27) = 0;
      *(undefined1 *)(puVar6 + 10) = 0;
      *(undefined1 *)((int)puVar6 + 0x29) = 0;
      *(undefined1 *)((int)puVar6 + 0x2a) = 0;
      *(undefined1 *)((int)puVar6 + 0x2b) = 0;
      *(undefined1 *)(puVar6 + 0xb) = 0;
      *(undefined1 *)((int)puVar6 + 0x2d) = 0;
      *(undefined1 *)((int)puVar6 + 0x2e) = 0;
      *(undefined1 *)((int)puVar6 + 0x2f) = 0;
      puVar3 = puVar6;
    }
  }
  GameSavePtr = puVar3;
  uVar2 = DAT_008fabb4;
  puVar3 = GameSavePtr;
  uVar1 = GameSavePtr[0x118];
  DAT_01111620 = 0;
  DAT_01111624 = (undefined *)0x0;
  DAT_01111628 = (undefined4 *)0x0;
  DAT_0111162c = 0;
  DAT_01111630 = 0;
  DAT_01111634 = 0;
  DAT_01111638 = 0;
  DAT_0111163c = 0;
  print_tty2("\n***Inside SaveDataListCallback***\n");
  uVar4 = (ulonglong)param_2[1];
  if (uVar4 < *param_2) {
    print_tty2("FOUND TOO MUCH DATA! (Hard to believe!)");
    uVar4 = (ulonglong)param_2[1];
  }
  param_3[3] = param_2[2];
  *param_3 = 1;
  param_3[1] = 0;
  param_3[2] = (int)uVar4 + ((uint)((longlong)(0x800 - uVar4) >> 0x3f) & 0x800U - (int)uVar4);
  param_3[5] = 0;
  print_tty2(
            "Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n"
            );
  print_tty2("\tget->dirNum : %d\n",(ulonglong)*param_2);
  print_tty2("\tget->dirListNum: %d\n",(ulonglong)param_2[1]);
  uVar7 = param_2[1];
  if (uVar7 != 0) {
    uVar4 = 0;
    do {
      uVar10 = (ulonglong)param_2[2] + uVar4 * 0x30;
      print_tty2("\t%4d  DIRNAME: %s\t\tPARAM: %s\n",uVar4,uVar10 & 0xffffffff,
                 uVar10 + 0x20 & 0xffffffff);
      uVar7 = param_2[1];
      uVar4 = uVar4 + 1 & 0xffffffff;
    } while (uVar4 < uVar7);
  }
  if (4 < uVar7) {
    param_3[4] = 0;
    goto LAB_004e97e0;
  }
  ppuVar11 = &PTR_DAT_0065996c;
  uVar7 = 0;
  do {
    libc::snprintf(acStack_108,"%s%s",&DAT_008fa6c8,ZEXT48(*ppuVar11));
    uVar12 = 0;
    if (param_2[1] != 0) {
      iVar9 = 0;
      uVar12 = 0;
      do {
        iVar8 = FUN_005cc784(acStack_108,param_2[2] + iVar9);
        if (iVar8 == 0) break;
        uVar12 = uVar12 + 1;
        iVar9 = iVar9 + 0x30;
      } while (uVar12 < param_2[1]);
    }
    if (uVar12 == param_2[1]) break;
    uVar7 = uVar7 + 1;
    ppuVar11 = ppuVar11 + 1;
  } while (uVar7 < 5);
  if ((4 < uVar7) || ((uVar1 & 1) == 0)) {
    param_3[4] = 0;
    goto LAB_004e97e0;
  }
  param_3[4] = &DAT_01111620;
  libc::memset(&DAT_008fa6e8,0,0x20);
  libc::snprintf(&DAT_008fa6e8,"%s%s",&DAT_008fa6c8,ZEXT48((&PTR_DAT_0065996c)[uVar7]));
  DAT_01111624 = &DAT_008fa6e8;
  libc::memset(acStack_e8,0,0x60);
  iVar9 = puVar3[7];
  iVar8 = puVar3[0x115];
  if (iVar8 < 1) {
    if ((-1 < iVar8) && ((iVar9 < 0 || (0x12 < iVar9)))) goto LAB_004e975c;
LAB_004e973c:
    iVar9 = libc::snprintf(acStack_e8,"/%s/ps3data/SAVEDATA/maps/map[%d].png",puVar3 + 0x119,iVar9);
  }
  else {
    if (iVar8 < 2) {
      if ((iVar9 < 0) || (0x1a < iVar9)) goto LAB_004e975c;
      goto LAB_004e973c;
    }
    if (3 < iVar8) goto LAB_004e973c;
LAB_004e975c:
    iVar9 = libc::snprintf(acStack_e8,"/%s/ps3data/SAVEDATA/ICON0.PNG",puVar3 + 0x119);
  }
  uVar5 = FUN_004ef34c(iVar9);
  FUN_004ef4d0(uVar5,acStack_e8,auStack_190);
  DAT_0111162c = 0;
  DAT_01111628 = &DAT_01111630;
  DAT_01111620 = 0;
  DAT_01111630 = DAT_008fa63c;
  fileAllocLoad(auStack_190,DAT_008fabb4,local_110);
  DAT_01111634 = 0;
  DAT_01111638 = uVar2;
  DAT_0111163c = 0;
LAB_004e97e0:
  print_tty2("***End of SaveDataListCallback***\n");
  *param_1 = 0;
  return;
}



//==== 004e9848  ns=idol  size=0x558
// sig: undefined SaveDataStatusListCallback(void)
// callers(0): 
// callees(6): 004e8470 idol::NewSaveData; 004ffc9c print_tty2; 005cc784 FUN_005cc784; 005cccec libc::strcpy; 005d0140 libc::memset; 005e38b0 FUN_005e38b0
// strings: 0065a33c: '\n***Inside SaveDataStatusListCallback***\n' | 0065a36c: 'Data %s is already exist.\n' | 0065a38c: 'checking size of %s ...\n' | 008fa660: 'ICON0.PNG' | 008fa684: 'PIC1.PNG' | 0065a3ac: '    file %s already exists. DIFF_SIZEKB : %d\n' | 0065a3dc: '    file %s is not exist. DIFF_SIZEKB : %d\n' | 0065a40c: '***HDD size check error. needs %d KB disc space more.\n' | 0065a444: '-------- NEW SAVE DATA ------------' | 0065a46c: 'HDD size check error. needs %d KB disc space more.\n' | 0065a4a4: '***End SaveDataStatusListCallback***\n'

void idol::SaveDataStatusListCallback(undefined4 *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar5;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  print_tty2("\n***Inside SaveDataStatusListCallback***\n");
  puVar4 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_005e38b0(0x478);
    puVar4 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0;
      *puVar6 = &PTR_PTR_006618d0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[0x114] = 0;
      puVar6[0x116] = 0;
      *(undefined1 *)(puVar6 + 0x117) = 0;
      *(undefined1 *)((int)puVar6 + 0x45d) = 0;
      puVar6[0x118] = 1;
      puVar6[0x115] = 4;
      libc::memset(puVar6 + 0x10c,0,0x20);
      *(undefined1 *)(puVar6 + 8) = 0;
      *(undefined1 *)((int)puVar6 + 0x21) = 0;
      *(undefined1 *)((int)puVar6 + 0x22) = 0;
      *(undefined1 *)((int)puVar6 + 0x23) = 0;
      *(undefined1 *)(puVar6 + 9) = 0;
      *(undefined1 *)((int)puVar6 + 0x25) = 0;
      *(undefined1 *)((int)puVar6 + 0x26) = 0;
      *(undefined1 *)((int)puVar6 + 0x27) = 0;
      *(undefined1 *)(puVar6 + 10) = 0;
      *(undefined1 *)((int)puVar6 + 0x29) = 0;
      *(undefined1 *)((int)puVar6 + 0x2a) = 0;
      *(undefined1 *)((int)puVar6 + 0x2b) = 0;
      *(undefined1 *)(puVar6 + 0xb) = 0;
      *(undefined1 *)((int)puVar6 + 0x2d) = 0;
      *(undefined1 *)((int)puVar6 + 0x2e) = 0;
      *(undefined1 *)((int)puVar6 + 0x2f) = 0;
      puVar4 = puVar6;
    }
  }
  GameSavePtr = puVar4;
  puVar4 = GameSavePtr;
  piVar1 = (int *)param_1[4];
  uVar11 = GameSavePtr[0x118];
  iVar2 = *piVar1;
  if (((iVar2 == 6) || (iVar2 == 4)) || (iVar2 == 2)) {
    param_3[1] = 1;
    uVar3 = param_2[1];
    *param_3 = (uint)(param_2 + 0x10);
    if (uVar3 == 0) {
      if ((uVar11 & 1) != 0) {
        param_3[1] = 3;
      }
      print_tty2("Data %s is already exist.\n",param_2 + 8);
      uVar11 = 0;
      DAT_01111608 = 0;
      uVar13 = (ulonglong)*param_2;
      iVar8 = 0;
      uVar14 = uVar13;
      do {
        print_tty2("checking size of %s ...\n",PTR_DAT_008fabb0 + iVar8 + 4);
        uVar12 = 0;
        if (param_2[0x198] != 0) {
          iVar10 = 0;
          do {
            iVar7 = FUN_005cc784(PTR_DAT_008fabb0 + iVar8 + 4,param_2[0x199] + iVar10 + 0x28);
            if (iVar7 == 0) break;
            uVar12 = uVar12 + 1;
            iVar10 = iVar10 + 0x38;
          } while ((uVar12 & 0xffffffff) < (ulonglong)param_2[0x198]);
        }
        if ((uVar12 & 0xffffffff) < (ulonglong)param_2[0x198]) {
          uVar12 = (ulonglong)
                   (int)((*(int *)(PTR_DAT_008fabb0 + iVar8) + 0x3ffU >> 10) -
                        (int)(*(longlong *)
                               (param_2[0x199] + ((int)(uVar12 << 6) - (int)(uVar12 << 3)) + 8) +
                              0x3ffU >> 10));
          print_tty2("    file %s already exists. DIFF_SIZEKB : %d\n",PTR_DAT_008fabb0 + iVar8 + 4,
                     uVar12);
        }
        else {
          uVar12 = ((ulonglong)*(uint *)(PTR_DAT_008fabb0 + iVar8) + 0x3ff << 0x20) >> 0x2a;
          print_tty2("    file %s is not exist. DIFF_SIZEKB : %d\n",PTR_DAT_008fabb0 + iVar8 + 4,
                     uVar12);
          DAT_01111608 = 1;
        }
        uVar14 = uVar14 - uVar12;
        uVar11 = uVar11 + 1;
        iVar8 = iVar8 + 0x24;
        uVar13 = uVar13 + ((longlong)(int)uVar14 - (longlong)(int)uVar13 >> 0x3f & uVar14 - uVar13);
      } while (uVar11 < 3);
      iVar8 = (int)uVar13;
      if (iVar8 < 0) {
        param_1[2] = iVar8;
        puVar4[0x11a] = 0xb;
        *param_1 = 0xffffffff;
        print_tty2("***HDD size check error. needs %d KB disc space more.\n",-iVar8);
        return;
      }
    }
    else {
      print_tty2("-------- NEW SAVE DATA ------------");
      NewSaveData(puVar4,param_3,&DAT_008fa708);
      lVar5 = 0;
      lVar15 = 3;
      puVar9 = (uint *)PTR_DAT_008fabb0;
      do {
        uVar11 = *puVar9;
        puVar9 = puVar9 + 9;
        lVar5 = lVar5 + (((ulonglong)uVar11 + 0x3ff << 0x20) >> 0x2a);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      iVar8 = *param_2 - ((int)lVar5 + param_2[0x196]);
      if (iVar8 < 0) {
        param_1[2] = iVar8;
        *param_1 = 0xffffffff;
        puVar4[0x11a] = 0xb;
        print_tty2("HDD size check error. needs %d KB disc space more.\n",-iVar8);
        return;
      }
      DAT_01111608 = 0;
    }
    if (((iVar2 == 4) || (iVar2 == 6)) || ((iVar2 == 5 || ((iVar2 == 10 || (iVar2 == 0xb)))))) {
      puVar6 = &DAT_008fabb8;
      DAT_008fabb8 = 0x10;
      DAT_008fabbc = 1;
      DAT_008fabc8 = 0;
      DAT_008fabc4 = 0;
      DAT_008fabcc = 0;
    }
    else {
      puVar6 = (undefined4 *)0x0;
    }
    uVar11 = *param_3;
    param_3[2] = (uint)puVar6;
    libc::memset((ulonglong)uVar11 + 0x100,0,0x400);
    libc::strcpy((ulonglong)uVar11 + 0x100,puVar4 + 0xc,0x400);
    *(undefined1 *)(*param_3 + 0x4ff) = 0;
    if (*piVar1 != 10) {
      libc::strcpy(puVar4 + 0x10c,param_2 + 8,0x20);
      *(undefined1 *)((int)puVar4 + 0x44f) = 0;
      *(undefined1 *)(puVar4 + 0x117) = 1;
    }
    param_1[4] = &DAT_008fa708;
    print_tty2("***End SaveDataStatusListCallback***\n");
    *param_1 = 0;
  }
  else {
    *param_1 = 0xfffffffe;
  }
  return;
}



//==== 004e9da0  ns=Global  size=0x440
// sig: undefined FUN_004e9da0(void)
// callers(0): 
// callees(8): 004e81ec idol::fileAllocLoad; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 004ffc9c print_tty2; 005c5ad0 libc::memcpy; 005cd2a8 libc::snprintf; 005d0140 libc::memset; 005e38b0 FUN_005e38b0
// strings: 0065a4cc: '\n***Inside SaveFileOpListCallback***\n' | 0065a010: 'GameSaveSystem::OnSaving Callback about to occur\n' | 0065a4f4: '*--- Saving Icon0.png ---*\n' | 0065a2d0: '/%s/ps3data/SAVEDATA/maps/map[%d].png' | 0065a514: '####User was dumb enough to eject disk -- file load error. File: %s\n' | 0065a55c: '*--- Saving Pic1.png ---*\n' | 0065a57c: '/%s/ps3data/SAVEDATA/%s' | 0065a594: '*--- Saving Application Save Data ...\n' | 0065a5bc: '***End SaveFilOpListCallback***\n'

void FUN_004e9da0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar3;
  undefined1 local_840 [8];
  char acStack_838 [1024];
  undefined1 auStack_438 [1040];
  
  print_tty2("\n***Inside SaveFileOpListCallback***\n");
  puVar2 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_005e38b0(0x478);
    puVar2 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 0;
      *puVar4 = &PTR_PTR_006618d0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[0x114] = 0;
      puVar4[0x116] = 0;
      *(undefined1 *)(puVar4 + 0x117) = 0;
      *(undefined1 *)((int)puVar4 + 0x45d) = 0;
      puVar4[0x118] = 1;
      puVar4[0x115] = 4;
      libc::memset(puVar4 + 0x10c,0,0x20);
      *(undefined1 *)(puVar4 + 8) = 0;
      *(undefined1 *)((int)puVar4 + 0x21) = 0;
      *(undefined1 *)((int)puVar4 + 0x22) = 0;
      *(undefined1 *)((int)puVar4 + 0x23) = 0;
      *(undefined1 *)(puVar4 + 9) = 0;
      *(undefined1 *)((int)puVar4 + 0x25) = 0;
      *(undefined1 *)((int)puVar4 + 0x26) = 0;
      *(undefined1 *)((int)puVar4 + 0x27) = 0;
      *(undefined1 *)(puVar4 + 10) = 0;
      *(undefined1 *)((int)puVar4 + 0x29) = 0;
      *(undefined1 *)((int)puVar4 + 0x2a) = 0;
      *(undefined1 *)((int)puVar4 + 0x2b) = 0;
      *(undefined1 *)(puVar4 + 0xb) = 0;
      *(undefined1 *)((int)puVar4 + 0x2d) = 0;
      *(undefined1 *)((int)puVar4 + 0x2e) = 0;
      *(undefined1 *)((int)puVar4 + 0x2f) = 0;
      puVar2 = puVar4;
    }
  }
  GameSavePtr = puVar2;
  puVar2 = GameSavePtr;
  *param_1 = 0;
  iVar5 = param_1[4];
  if (DAT_01111608 < 1) {
    if (DAT_01111608 < 0) {
LAB_004ea180:
      param_1[1] = 0x21;
      *param_1 = 1;
      print_tty2("***End SaveFilOpListCallback***\n");
      return;
    }
    print_tty2("*--- Saving Pic1.png ---*\n");
    iVar5 = libc::snprintf(acStack_838,"/%s/ps3data/SAVEDATA/%s",puVar2 + 0x119,
                           (ulonglong)*(uint *)(iVar5 + 0x4a8) + 0x28);
    uVar3 = FUN_004ef34c(iVar5);
    FUN_004ef4d0(uVar3,acStack_838,auStack_438);
    iVar5 = idol::fileAllocLoad(auStack_438,DAT_008fabb4,local_840);
    uVar1 = DAT_008fabb4;
    if (iVar5 == 0) {
      *param_3 = 1;
      param_3[0xb] = uVar1;
      param_3[10] = 0;
      param_3[9] = 0;
      param_3[2] = 4;
      param_3[1] = 0;
    }
    else {
      print_tty2("####User was dumb enough to eject disk -- file load error. File: %s\n",acStack_838
                );
      *param_3 = 1;
      param_3[0xb] = 0;
      param_3[10] = 0;
      param_3[9] = 0;
      param_3[2] = 4;
      param_3[1] = 0;
    }
  }
  else if (DAT_01111608 < 2) {
    print_tty2("GameSaveSystem::OnSaving Callback about to occur\n");
    if ((undefined4 *)puVar2[5] != (undefined4 *)0x0) {
      (**(code **)puVar2[5])();
    }
    print_tty2("*--- Saving Icon0.png ---*\n");
    iVar5 = libc::snprintf(acStack_838,"/%s/ps3data/SAVEDATA/maps/map[%d].png",puVar2 + 0x119,
                           puVar2[7]);
    uVar3 = FUN_004ef34c(iVar5);
    FUN_004ef4d0(uVar3,acStack_838,auStack_438);
    iVar5 = idol::fileAllocLoad(auStack_438,DAT_008fabb4,local_840);
    uVar1 = DAT_008fabb4;
    if (iVar5 == 0) {
      *param_3 = 1;
      param_3[0xb] = uVar1;
      param_3[10] = 0x20000;
      param_3[9] = 0x20000;
      param_3[2] = 2;
      param_3[1] = 0;
    }
    else {
      print_tty2("####User was dumb enough to eject disk -- file load error. File: %s\n",acStack_838
                );
      *param_3 = 1;
      param_3[0xb] = 0;
      param_3[10] = 0;
      param_3[9] = 0;
      param_3[2] = 2;
      param_3[1] = 0;
    }
  }
  else {
    if (2 < DAT_01111608) goto LAB_004ea180;
    print_tty2("*--- Saving Application Save Data ...\n");
    *param_3 = 1;
    param_3[0xb] = puVar2[0x114];
    param_3[10] = *(undefined4 *)(*(int *)(iVar5 + 0x4a8) + 0x48);
    param_3[9] = *(undefined4 *)(*(int *)(iVar5 + 0x4a8) + 0x48);
    iVar5 = *(int *)(iVar5 + 0x4a8);
    param_3[8] = 0;
    param_3[2] = 0;
    param_3[7] = iVar5 + 0x4c;
    libc::memcpy(param_3 + 3,puVar2 + 8,0x10);
    param_3[1] = 0;
  }
  param_1[1] = 0x21;
  DAT_01111608 = DAT_01111608 + 1;
  return;
}



//==== 004ea1e0  ns=Global  size=0x140
// sig: undefined FUN_004ea1e0(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 0065a680: '*---- Starting GameSave_PS::LoadDataListCallback() ---*' | 00659af0: 'Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n' | 00659b60: '\tget->dirNum : %d\n' | 00659b78: '\tget->dirListNum: %d\n' | 00659b90: '\t%4d  DIRNAME: %s\t\tPARAM: %s\n'

void FUN_004ea1e0(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  print_tty2("*---- Starting GameSave_PS::LoadDataListCallback() ---*");
  print_tty2(
            "Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n"
            );
  print_tty2("\tget->dirNum : %d\n",(ulonglong)*param_2);
  print_tty2("\tget->dirListNum: %d\n",(ulonglong)param_2[1]);
  uVar1 = (ulonglong)param_2[1];
  uVar2 = 0;
  if (param_2[1] != 0) {
    do {
      uVar1 = (ulonglong)param_2[2] + uVar2 * 0x30;
      print_tty2("\t%4d  DIRNAME: %s\t\tPARAM: %s\n",uVar2,uVar1 & 0xffffffff,
                 uVar1 + 0x20 & 0xffffffff);
      uVar1 = (ulonglong)param_2[1];
      uVar2 = uVar2 + 1 & 0xffffffff;
    } while (uVar2 < uVar1);
  }
  param_3[3] = param_2[2];
  *param_3 = 1;
  param_3[1] = 0;
  param_3[5] = 0;
  param_3[2] = (int)uVar1 + ((uint)((longlong)(0x800 - uVar1) >> 0x3f) & 0x800U - (int)uVar1);
  param_3[4] = 0;
  *param_1 = 0;
  return;
}



//==== 004ea320  ns=idol  size=0x5bc
// sig: undefined cb_data_status_load(void)
// callers(0): 
// callees(8): 004e7170 FUN_004e7170; 004ffc9c print_tty2; 005cc784 FUN_005cc784; 005cccec libc::strcpy; 005cd098 libc::printf; 005cd2a8 libc::snprintf; 005d0140 libc::memset; 005e38b0 FUN_005e38b0
// strings: 0065a6b8: 'cb_data_status_load() start\n' | 0065a6d8: '############## USER THAT CREATED SAVE IS NOT THE SAME AS THE ONE WHO IS LOADING IT!!! Disabling Trophies!!!!!\n' | 0065a748: '############## SAVE DATA HAS NO OWNER INFORMATION  Disabling Trophies!!!!!!\n' | 0065a798: '############## LOCALLY OWNED FILE. NO ACCT ID IN OWNER INFO.\n' | 0065a2c8: '%s%s' (raw) | 0065a7d8: '#### list load error. Past our marker for folders ####\n' | 0065a810: 'unknown userdata value : %d\n' | 0065a830: 'Data %s is not found.\n' | 008fa6a8: 'USR-DATA' | 0065a848: 'found [%s]\n' | 0065a858: '    size mismatch : expected[%u] != listed[%llu]\n' | 0065a890: '%s is not found\n'

void idol::cb_data_status_load(undefined4 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  char acStack_90 [40];
  
  bVar3 = false;
  puVar4 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_005e38b0(0x478);
    puVar4 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[1] = 0;
      *puVar5 = &PTR_PTR_006618d0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[0x114] = 0;
      puVar5[0x116] = 0;
      *(undefined1 *)(puVar5 + 0x117) = 0;
      *(undefined1 *)((int)puVar5 + 0x45d) = 0;
      puVar5[0x118] = 1;
      puVar5[0x115] = 4;
      libc::memset(puVar5 + 0x10c,0,0x20);
      *(undefined1 *)(puVar5 + 8) = 0;
      *(undefined1 *)((int)puVar5 + 0x21) = 0;
      *(undefined1 *)((int)puVar5 + 0x22) = 0;
      *(undefined1 *)((int)puVar5 + 0x23) = 0;
      *(undefined1 *)(puVar5 + 9) = 0;
      *(undefined1 *)((int)puVar5 + 0x25) = 0;
      *(undefined1 *)((int)puVar5 + 0x26) = 0;
      *(undefined1 *)((int)puVar5 + 0x27) = 0;
      *(undefined1 *)(puVar5 + 10) = 0;
      *(undefined1 *)((int)puVar5 + 0x29) = 0;
      *(undefined1 *)((int)puVar5 + 0x2a) = 0;
      *(undefined1 *)((int)puVar5 + 0x2b) = 0;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      *(undefined1 *)((int)puVar5 + 0x2d) = 0;
      *(undefined1 *)((int)puVar5 + 0x2e) = 0;
      *(undefined1 *)((int)puVar5 + 0x2f) = 0;
      puVar4 = puVar5;
    }
  }
  GameSavePtr = puVar4;
  iVar9 = TrophyMgr;
  puVar4 = GameSavePtr;
  print_tty2("cb_data_status_load() start\n");
  uVar1 = *(uint *)(param_2 + 0x650);
  if (((uVar1 & 0x10) == 0) && ((uVar1 & 0x200) == 0)) {
    if ((uVar1 & 0x100) == 0) {
      if ((uVar1 & 0x400) == 0) {
        *(undefined1 *)(iVar9 + 0x18c) = 1;
        puVar4[0x118] = 1;
      }
      else {
        libc::printf("############## LOCALLY OWNED FILE. NO ACCT ID IN OWNER INFO.\n");
        puVar4[0x118] = 1;
      }
    }
    else {
      libc::printf("############## SAVE DATA HAS NO OWNER INFORMATION  Disabling Trophies!!!!!!\n");
      *(undefined1 *)(iVar9 + 0x18c) = 0;
      puVar4[0x118] = 2;
    }
  }
  else {
    libc::printf(
                "############## USER THAT CREATED SAVE IS NOT THE SAME AS THE ONE WHO IS LOADING IT!!! Disabling Trophies!!!!!\n"
                );
    *(undefined1 *)(iVar9 + 0x18c) = 0;
    puVar4[0x118] = 2;
  }
  FUN_004e7170(param_2);
  piVar2 = (int *)param_1[4];
  if (*piVar2 == 3) {
    iVar9 = param_2 + 0x20;
    iVar11 = 0;
    ppuVar8 = &PTR_DAT_0065996c;
    do {
      libc::snprintf(acStack_90,"%s%s",&DAT_008fa6c8,ZEXT48(*ppuVar8));
      iVar6 = FUN_005cc784(acStack_90,iVar9);
      if (iVar6 == 0) break;
      iVar11 = iVar11 + 1;
      ppuVar8 = ppuVar8 + 1;
    } while (iVar11 < 5);
    if (4 < iVar11) {
      libc::printf("#### list load error. Past our marker for folders ####\n");
    }
    if (*(int *)(param_2 + 4) == 0) {
      iVar11 = (&DAT_008fa64c)[puVar4[0x115]];
      if (*(uint *)(param_2 + 0x660) < *(uint *)(param_2 + 0x65c)) {
        *param_1 = 0xfffffffd;
      }
      else {
        uVar10 = 0;
        if (*(uint *)(param_2 + 0x660) != 0) {
          iVar6 = 0;
          do {
            if ((!bVar3) &&
               (iVar7 = FUN_005cc784(*(int *)(param_2 + 0x664) + iVar6 + 0x28,
                                     ZEXT48(PTR_DAT_008fabb0) + 0x4c), iVar7 == 0)) {
              print_tty2("found [%s]\n",*(int *)(param_2 + 0x664) + iVar6 + 0x28);
              bVar3 = true;
              if (*(longlong *)(*(int *)(param_2 + 0x664) + iVar6 + 8) != (longlong)iVar11) {
                print_tty2("    size mismatch : expected[%u] != listed[%llu]\n",(longlong)iVar11,
                           *(undefined8 *)
                            (*(int *)(param_2 + 0x664) + ((int)(uVar10 << 6) - (int)(uVar10 << 3)) +
                            8));
                *param_1 = 0xfffffffd;
                return;
              }
            }
            uVar10 = uVar10 + 1;
            iVar6 = iVar6 + 0x38;
          } while ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 0x660));
          if (bVar3) {
            puVar4 = GameSavePtr;
            if (GameSavePtr == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)FUN_005e38b0(0x478);
              puVar4 = (undefined4 *)0x0;
              if (puVar5 != (undefined4 *)0x0) {
                puVar5[1] = 0;
                *puVar5 = &PTR_PTR_006618d0;
                puVar5[2] = 0;
                puVar5[3] = 0;
                puVar5[4] = 0;
                puVar5[5] = 0;
                puVar5[6] = 0;
                puVar5[0x114] = 0;
                puVar5[0x116] = 0;
                *(undefined1 *)(puVar5 + 0x117) = 0;
                *(undefined1 *)((int)puVar5 + 0x45d) = 0;
                puVar5[0x118] = 1;
                puVar5[0x115] = 4;
                libc::memset(puVar5 + 0x10c,0,0x20);
                *(undefined1 *)(puVar5 + 8) = 0;
                *(undefined1 *)((int)puVar5 + 0x21) = 0;
                *(undefined1 *)((int)puVar5 + 0x22) = 0;
                *(undefined1 *)((int)puVar5 + 0x23) = 0;
                *(undefined1 *)(puVar5 + 9) = 0;
                *(undefined1 *)((int)puVar5 + 0x25) = 0;
                *(undefined1 *)((int)puVar5 + 0x26) = 0;
                *(undefined1 *)((int)puVar5 + 0x27) = 0;
                *(undefined1 *)(puVar5 + 10) = 0;
                *(undefined1 *)((int)puVar5 + 0x29) = 0;
                *(undefined1 *)((int)puVar5 + 0x2a) = 0;
                *(undefined1 *)((int)puVar5 + 0x2b) = 0;
                *(undefined1 *)(puVar5 + 0xb) = 0;
                *(undefined1 *)((int)puVar5 + 0x2d) = 0;
                *(undefined1 *)((int)puVar5 + 0x2e) = 0;
                *(undefined1 *)((int)puVar5 + 0x2f) = 0;
                puVar4 = puVar5;
              }
            }
            GameSavePtr = puVar4;
            puVar4 = GameSavePtr;
            libc::strcpy(GameSavePtr + 0x10c,iVar9,0x20);
            *(undefined1 *)((int)puVar4 + 0x44f) = 0;
            *(undefined1 *)(puVar4 + 0x117) = 1;
            piVar2[2] = (int)&DAT_008fa708;
            *piVar2 = 0;
            piVar2[1] = 4;
            param_3[1] = 1;
            *param_3 = param_2 + 0x40;
            *param_1 = 0;
            param_1[4] = piVar2;
            DAT_01111608 = 2;
            return;
          }
        }
        print_tty2("%s is not found\n",ZEXT48(PTR_DAT_008fabb0) + 0x4c);
        *param_1 = 0xfffffffd;
      }
    }
    else {
      print_tty2("Data %s is not found.\n",iVar9);
      *param_1 = 0xfffffffc;
    }
  }
  else {
    print_tty2("unknown userdata value : %d\n",*piVar2);
    *param_1 = 0xfffffffe;
  }
  return;
}



//==== 004ea8dc  ns=idol  size=0x274
// sig: undefined cb_file_operation_load(void)
// callers(0): 
// callees(5): 004ffc9c print_tty2; 005c5ad0 libc::memcpy; 005cd098 libc::printf; 005d0140 libc::memset; 005e38b0 FUN_005e38b0
// strings: 0065a8a4: 'cb_file_operation_load() start\n' | 0065a8c4: 'FAILURE TO LOAD Saved Game!!\n' | 0065a8e4: 'SAVE_OPERATION_STEP_END\n' | 0065a904: '*---- Finished File Operation Step ----*\n'

void idol::cb_file_operation_load(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)FUN_005e38b0(0x478);
    puVar7 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar8[1] = 0;
      *puVar8 = &PTR_PTR_006618d0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[0x114] = 0;
      puVar8[0x116] = 0;
      *(undefined1 *)(puVar8 + 0x117) = 0;
      *(undefined1 *)((int)puVar8 + 0x45d) = 0;
      puVar8[0x118] = 1;
      puVar8[0x115] = 4;
      libc::memset(puVar8 + 0x10c,0,0x20);
      *(undefined1 *)(puVar8 + 8) = 0;
      *(undefined1 *)((int)puVar8 + 0x21) = 0;
      *(undefined1 *)((int)puVar8 + 0x22) = 0;
      *(undefined1 *)((int)puVar8 + 0x23) = 0;
      *(undefined1 *)(puVar8 + 9) = 0;
      *(undefined1 *)((int)puVar8 + 0x25) = 0;
      *(undefined1 *)((int)puVar8 + 0x26) = 0;
      *(undefined1 *)((int)puVar8 + 0x27) = 0;
      *(undefined1 *)(puVar8 + 10) = 0;
      *(undefined1 *)((int)puVar8 + 0x29) = 0;
      *(undefined1 *)((int)puVar8 + 0x2a) = 0;
      *(undefined1 *)((int)puVar8 + 0x2b) = 0;
      *(undefined1 *)(puVar8 + 0xb) = 0;
      *(undefined1 *)((int)puVar8 + 0x2d) = 0;
      *(undefined1 *)((int)puVar8 + 0x2e) = 0;
      *(undefined1 *)((int)puVar8 + 0x2f) = 0;
      puVar7 = puVar8;
    }
  }
  GameSavePtr = puVar7;
  iVar6 = DAT_01111608;
  puVar7 = GameSavePtr;
  print_tty2("cb_file_operation_load() start\n");
  bVar5 = false;
  piVar1 = (int *)param_1[4];
  iVar2 = piVar1[2];
  *param_1 = 0;
  if (iVar6 == 2) {
    if ((*piVar1 != 0) || (piVar1[1] != 4)) {
      *param_1 = 0xfffffffe;
      DAT_01111604 = 0;
      libc::printf("FAILURE TO LOAD Saved Game!!\n");
      return;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x4a8) + 0x48);
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    libc::memcpy(param_3 + 3,puVar7 + 8,0x10);
    *param_3 = 0;
    uVar4 = puVar7[0x114];
    param_3[10] = uVar3;
    param_3[0xb] = uVar4;
    iVar2 = *(int *)(iVar2 + 0x4a8);
    param_3[9] = uVar3;
    param_3[2] = 0;
    param_3[1] = 0;
    param_3[7] = iVar2 + 0x4c;
  }
  else {
    print_tty2("SAVE_OPERATION_STEP_END\n");
    bVar5 = true;
    *param_1 = 1;
  }
  param_1[1] = 0x21;
  DAT_01111608 = DAT_01111608 + 1;
  print_tty2("*---- Finished File Operation Step ----*\n");
  if (bVar5) {
    DAT_01111604 = 0;
  }
  return;
}



//==== 004eab50  ns=Global  size=0x168
// sig: undefined FUN_004eab50(void)
// callers(0): 
// callees(3): 004ffc9c print_tty2; 005d0140 libc::memset; 005e38b0 FUN_005e38b0
// strings: 0065a9c0: 'Found %d existing saves...'

void FUN_004eab50(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  print_tty2("Found %d existing saves...",(ulonglong)*param_2);
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005e38b0(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      libc::memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  GameSavePtr[0x11c] = *param_2;
  *param_1 = 1;
  return;
}



//==== 004eacb8  ns=Global  size=0x4
// sig: undefined FUN_004eacb8(void)
// callers(0): 
// callees(0): 

void FUN_004eacb8(void)

{
  return;
}



//==== 004eacbc  ns=Global  size=0x18
// sig: undefined FUN_004eacbc(void)
// callers(0): 
// callees(0): 

void FUN_004eacbc(void)

{
  DAT_008fa6a4 = PTR_Elf64_Ehdr_008fa648;
  return;
}



//==== 004eacd4  ns=Global  size=0x108
// sig: undefined FUN_004eacd4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004eacd4(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 1) != '\0') {
    fVar1 = (float)param_2[6];
    param_2[6] = (int)(float)((double)fVar1 + param_1);
    if (0 < param_2[7] && (float)param_2[7] <= (float)((double)fVar1 + param_1)) {
      (*(code *)**(undefined4 **)(*param_2 + 0x14))(param_2);
      if ((undefined4 *)param_2[4] != (undefined4 *)0x0) {
        (**(code **)param_2[4])(2);
      }
    }
    else if (((undefined4 *)param_2[5] != (undefined4 *)0x0) &&
            (iVar2 = (**(code **)param_2[5])(), iVar2 != 0)) {
      (*(code *)**(undefined4 **)(*param_2 + 0x14))(param_2);
    }
  }
  return 0;
}



//==== 004eaddc  ns=Global  size=0x88
// sig: undefined FUN_004eaddc(void)
// callers(1): 00504468 FUN_00504468
// callees(1): 004fe218 FUN_004fe218

undefined4 * FUN_004eaddc(undefined8 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_01111640 == (undefined4 *)0x0) {
    DAT_01111644 = (undefined4)param_1;
    puVar1 = (undefined4 *)FUN_004fe218(0x20,param_1);
    DAT_01111640 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_PTR_00661910;
      DAT_01111640 = puVar1;
    }
  }
  return DAT_01111640;
}



//==== 004eae64  ns=Global  size=0x134
// sig: undefined FUN_004eae64(void)
// callers(0): 
// callees(1): 004ffc9c print_tty2
// strings: 0065a9dc: 'In CSystemMessage_PS::messageCallback\n'

void FUN_004eae64(int param_1)

{
  print_tty2("In CSystemMessage_PS::messageCallback\n");
  *(undefined1 *)(DAT_01111640 + 4) = 0;
  if (param_1 < 2) {
    if (0 < param_1) {
      if (*(undefined4 **)(DAT_01111640 + 0x10) == (undefined4 *)0x0) {
        return;
      }
      (*(code *)**(undefined4 **)(DAT_01111640 + 0x10))(0);
      return;
    }
  }
  else {
    if (param_1 < 3) {
      if (*(undefined4 **)(DAT_01111640 + 0x10) == (undefined4 *)0x0) {
        return;
      }
      (*(code *)**(undefined4 **)(DAT_01111640 + 0x10))(1);
      return;
    }
    if (param_1 < 4) {
      if (*(undefined4 **)(DAT_01111640 + 0x10) == (undefined4 *)0x0) {
        return;
      }
      (*(code *)**(undefined4 **)(DAT_01111640 + 0x10))(4);
      return;
    }
  }
  if (*(undefined4 **)(DAT_01111640 + 0x10) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(DAT_01111640 + 0x10))(3);
  }
  return;
}



//==== 004eaf98  ns=Global  size=0xf0
// sig: undefined FUN_004eaf98(void)
// callers(0): 
// callees(1): 005051d8 FUN_005051d8

void FUN_004eaf98(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*param_2 + 0x20))();
  uVar1 = FUN_005051d8(&DAT_0159b38c,uVar1);
  (*(code *)**(undefined4 **)(*param_2 + 0x10))
            (param_1,param_2,uVar1,param_4,param_5,*(undefined4 **)(*param_2 + 0x10),param_7,param_8
             ,param_9);
  return;
}



//==== 004eb088  ns=Global  size=0x124
// sig: undefined FUN_004eb088(void)
// callers(0): 
// callees(1): 0064f604 cell::cellMsgDialogOpen2

undefined8
FUN_004eb088(double param_1,int param_2,undefined8 param_3,int param_4,int param_5,
            undefined8 param_6,char param_7,undefined4 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_2 + 4) == '\0') {
    uVar2 = 0;
    if ((0 < param_4) && (param_4 < 2)) {
      uVar2 = 3;
    }
    uVar3 = uVar2;
    if (param_5 < 2) {
      if (-1 < param_5) {
        if (param_5 < 1) {
          uVar3 = uVar2 | 0xa0;
        }
        else {
          uVar3 = uVar2 | 0x90;
          if (param_7 == '\0') {
            uVar3 = uVar2 | 400;
          }
        }
      }
    }
    else if (param_5 < 3) {
      uVar3 = uVar2 | 0x80;
    }
    uVar1 = cell::cellMsgDialogOpen2(uVar3,param_3,&PTR_FUN_007100b0,0,0);
    if (-1 < (int)uVar1) {
      *(float *)(param_2 + 0x1c) = (float)param_1;
      uVar1 = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x10) = param_8;
      *(undefined4 *)(param_2 + 0x14) = param_9;
      *(undefined1 *)(param_2 + 4) = 1;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



//==== 004eb1ac  ns=Global  size=0x38
// sig: undefined FUN_004eb1ac(void)
// callers(0): 
// callees(1): 0064f5e4 cell::cellMsgDialogAbort

void FUN_004eb1ac(int param_1)

{
  cell::cellMsgDialogAbort();
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



//==== 004eb1e4  ns=Global  size=0x40
// sig: undefined FUN_004eb1e4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_004eb1e4(int *param_1)

{
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))();
  return 0;
}



//==== 004eb224  ns=Global  size=0x104
// sig: undefined FUN_004eb224(void)
// callers(0): 
// callees(0): 

void FUN_004eb224(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = *(ushort *)(param_2 + 0xc);
  *(int *)(param_1 + 8) = param_2 + 0x10;
  pvVar3 = boot::g_pGame;
  *(uint *)(param_1 + 0xc) = (uint)uVar1;
                    /* WARNING: Load size is inaccurate */
  lVar4 = (*(code *)**(undefined4 **)(*pvVar3 + 0xc))(pvVar3);
  iVar5 = (int)lVar4;
  if ((*(int *)((int)boot::g_pHWSystem + 0xc0) == 0) &&
     (((iVar5 == 0 || (iVar5 == 4)) || (iVar5 == 5)))) {
    lVar4 = 1;
  }
  else if (*(int *)((int)boot::g_pHWSystem + 0xc0) == 1 && iVar5 == 0) {
    lVar4 = 1;
  }
  uVar7 = (uint)*(ushort *)(param_2 + 0xc);
  iVar5 = 0;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    iVar6 = param_2 + (int)(lVar4 << 2);
    iVar8 = param_2;
    do {
      iVar2 = *(int *)(iVar8 + 0x10);
      if (iVar2 != 0) {
        if ((int)lVar4 != 0) {
          iVar2 = *(int *)(iVar6 + 0x10);
        }
        *(int *)(iVar8 + 0x10) = iVar2 + param_2;
        uVar7 = (uint)*(ushort *)(param_2 + 0xc);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x80;
      iVar8 = iVar8 + 0x80;
    } while (iVar5 < (int)uVar7);
  }
  return;
}



//==== 004eb328  ns=Global  size=0x30
// sig: undefined FUN_004eb328(void)
// callers(0): 
// callees(0): 

undefined4 FUN_004eb328(int param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xc) < (int)param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + (int)(param_2 << 7));
  }
  return uVar1;
}



//==== 004eb358  ns=Global  size=0x5c
// sig: undefined FUN_004eb358(void)
// callers(0): 
// callees(1): 005051d8 FUN_005051d8

void FUN_004eb358(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*param_1 + 0x20))();
  FUN_005051d8(&DAT_0159b38c,uVar1);
  return;
}



//==== 004eb3b8  ns=Global  size=0x22c
// sig: undefined FUN_004eb3b8(void)
// callers(1): 004eb6e8 FUN_004eb6e8
// callees(0): 

void FUN_004eb3b8(int param_1)

{
  if ((*(float *)(param_1 + 8) == 0.0) && (*(float *)(param_1 + 0xc) == 0.0)) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 1;
  }
  if (*(float *)(param_1 + 8) < 0.0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x8000;
  }
  if (0.0 < *(float *)(param_1 + 8)) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x2000;
  }
  if (*(float *)(param_1 + 0xc) < 0.0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x1000;
  }
  if (0.0 < *(float *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x4000;
  }
  return;
}



//==== 004eb5e4  ns=Global  size=0x94
// sig: undefined FUN_004eb5e4(void)
// callers(0): 
// callees(4): 004ff6d0 print_tty; 005d0140 libc::memset; 0064f944 cell::cellPadInit; 0064f9a4 cell::cellPadGetData
// strings: 0065aa1c: 'ERROR: (CPad_PS::Initialize) cellPadInit() 0x%x\n'

void FUN_004eb5e4(void)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = cell::cellPadInit(4);
  if ((int)uVar1 != 0) {
    print_tty("ERROR: (CPad_PS::Initialize) cellPadInit() 0x%x\n",uVar1);
  }
  iVar2 = 0;
  do {
    libc::memset(&DAT_009664ac,0,0x84);
    cell::cellPadGetData(0,&DAT_009664ac);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



//==== 004eb678  ns=Global  size=0x40
// sig: undefined FUN_004eb678(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 0064f964 cell::cellPadEnd
// strings: 0065aa50: 'ERROR: (CPad_PS::Terminate) cellPadEnd() 0x%x\n'

void FUN_004eb678(void)

{
  undefined8 uVar1;
  
  uVar1 = cell::cellPadEnd();
  if ((int)uVar1 != 0) {
    print_tty("ERROR: (CPad_PS::Terminate) cellPadEnd() 0x%x\n",uVar1);
  }
  return;
}



//==== 004eb6e8  ns=Global  size=0xa6c
// sig: undefined FUN_004eb6e8(void)
// callers(1): 004ec160 idol::Pad_PS_Update
// callees(2): 004eb3b8 FUN_004eb3b8; 005026a0 fastfunc::FastSubRots

void FUN_004eb6e8(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float *pfVar9;
  char *pcVar10;
  ulonglong uVar11;
  float fVar12;
  short sVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined4 *puVar17;
  longlong lVar16;
  int iVar18;
  char cVar19;
  float fVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar25;
  ulonglong unaff_r29;
  float fVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  undefined4 in_stack_000000c0;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar29 = uVar11 - 0x140;
  puVar8 = (ulonglong *)lVar29;
  *puVar8 = uVar11;
  puVar8[0x2a] = in_LR;
  puVar8[0x25] = in_f29;
  puVar8[0x26] = in_f30;
  puVar8[0x27] = in_f31;
  puVar8[0x24] = unaff_r31;
  puVar8[0x23] = unaff_r30;
  pfVar9 = (float *)param_2;
  fVar26 = pfVar9[0x92];
  puVar8[0x22] = unaff_r29;
  fVar3 = pfVar9[0x2c];
  puVar8[0x21] = unaff_r28;
  pfVar9[0x2b] = fVar26;
  pfVar9[0x2f] = fVar3;
  puVar8[0x20] = unaff_r27;
  fVar26 = (float)((uint)(param_4 >> 0x20) & 0xffff | (uint)((param_4 >> 0x30) << 8));
  iVar23 = 0;
  pfVar9[0x28] = fVar26;
  lVar27 = 2;
  pfVar9[0x2c] = fVar26;
  dVar34 = 0.0;
  puVar8[0x1f] = unaff_r26;
  lVar16 = param_2;
  do {
    puVar17 = (undefined4 *)lVar16;
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    lVar16 = lVar16 + 0x20;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  auVar35 = ZEXT416(0xfffffff0);
  auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = ZEXT416(0);
  auVar40 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = loadVectorLeftIndexed(8,0x4eb6b8);
  iVar18 = 0;
  auVar37 = loadVectorLeftIndexed(4,0x4eb6b8);
  auVar39 = loadVectorLeftIndexed(0xc,0x4eb6b8);
  auVar41 = loadVectorLeftIndexed(0x10,0x4eb6b8);
  uVar14 = uVar11 + 0x4c & 0xffffffff;
  auVar42 = loadVectorLeftIndexed(0x14,0x4eb6b8);
  auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar37 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar39 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar41 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar21 = uVar14;
  lVar16 = param_2;
  do {
    auVar42 = loadVectorLeftIndexed(in_LR,uVar21);
    uVar2 = *(ushort *)uVar21;
    auVar42 = vectorShiftRightWord(auVar42,auVar38);
    lVar27 = (ulonglong)uVar2 - 0x7f;
    auVar42 = vectorSubtractUnsignedWordModulo
                        (auVar42,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60);
    iVar25 = (int)lVar27;
    auVar43 = vectorSubtractUnsignedWordModulo(auVar40,auVar42);
    auVar44 = vectorCompareGreaterThanSignedWord(auVar40,auVar42);
    auVar42 = vectorConditionalSelect(auVar42,auVar43,auVar44);
    if (0x2f < (int)(iVar25 + ((uint)(lVar27 >> 0x3f) & iVar25 * -2))) {
      auVar43 = vectorSubtractUnsignedWordModulo
                          (auVar42,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60);
      auVar42 = ZEXT416(0xffffffff);
      auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar42 = vectorConvertFromSignedFixedPointWord(auVar43,0);
      auVar43 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar42 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar43);
      auVar43 = vectorCompareGreaterThanFloatingPoint(auVar36,auVar42);
      auVar43 = vectorConditionalSelect(auVar36,auVar42,auVar43);
      auVar42 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar7 = storeVectorElementWordIndexed
                        (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0,lVar16);
      *(undefined4 *)((uint)lVar16 & 0xfffffffc) = uVar7;
      if (uVar2 < 0x7f) {
        auVar42 = ((auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60) ^ auVar43) >>
                  0x60 & (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0,lVar16);
        *(undefined4 *)((uint)lVar16 & 0xfffffffc) = uVar7;
      }
    }
    iVar18 = iVar18 + 1;
    uVar21 = uVar21 + 2;
    lVar16 = lVar16 + 4;
  } while (iVar18 < 0x10);
  lVar27 = uVar14 + 8;
  lVar16 = param_2 + 0x10;
  lVar28 = 6;
  auVar35 = loadVectorLeftIndexed(0x18,0x4eb6b8);
  auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  do {
    auVar41 = loadVectorLeftIndexed(in_LR,lVar27);
    auVar37 = ZEXT416(0xffffffff);
    auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
    auVar36 = loadVectorRightIndexed(0x10,lVar27);
    auVar42 = loadVectorLeftIndexed(in_LR,lVar27 + 2);
    auVar40 = loadVectorRightIndexed(0x10,lVar27 + 2);
    lVar22 = lVar16 + 4;
    auVar39 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar41 = vectorShiftRightWord(auVar41 | auVar36,auVar38);
    lVar27 = lVar27 + 4;
    auVar37 = ZEXT416(0xffffffff);
    auVar43 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
    auVar36 = vectorShiftRightWord(auVar42 | auVar40,auVar38);
    auVar37 = vectorConvertFromUnsignedFixedPointWord(auVar41,0);
    auVar40 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar41 = vectorConvertFromUnsignedFixedPointWord(auVar36,0);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar39);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar35,auVar40);
    auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0,lVar16);
    *(undefined4 *)((uint)lVar16 & 0xfffffffc) = uVar7;
    lVar16 = lVar16 + 8;
    uVar7 = storeVectorElementWordIndexed
                      (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0,lVar22);
    *(undefined4 *)((uint)lVar22 & 0xfffffffc) = uVar7;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  if (*DAT_008fabd0 != '\0') {
    fVar26 = pfVar9[0x28];
    pfVar9[2] = -pfVar9[2];
    *pfVar9 = -*pfVar9;
    if (((uint)fVar26 & 0x8000) == 0) {
      if (((uint)fVar26 & 0x2000) != 0) {
        fVar26 = (float)((uint)fVar26 & 0xffffdfff | 0x8000);
        pfVar9[0x28] = fVar26;
      }
    }
    else {
      fVar26 = (float)((uint)fVar26 & 0xffff7fff | 0x2000);
      pfVar9[0x28] = fVar26;
    }
    pfVar9[0x2c] = fVar26;
  }
  lVar27 = 4;
  lVar16 = param_2;
  do {
    puVar17 = (undefined4 *)lVar16;
    puVar17[0x10] = *puVar17;
    puVar17[0x11] = puVar17[1];
    puVar17[0x12] = puVar17[2];
    puVar17[0x13] = puVar17[3];
    lVar16 = lVar16 + 0x10;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  lVar22 = 8;
  lVar27 = uVar11 + 0x40;
  lVar28 = uVar11 + 0x44;
  lVar16 = lVar29;
  do {
    uVar7 = *(undefined4 *)lVar28;
    uVar4 = ((undefined4 *)lVar27)[2];
    iVar18 = (int)lVar16;
    *(undefined4 *)(iVar18 + 0x38) = *(undefined4 *)lVar27;
    lVar27 = lVar27 + 0x10;
    uVar5 = ((undefined4 *)lVar28)[2];
    *(undefined4 *)(iVar18 + 0x3c) = uVar7;
    *(undefined4 *)(iVar18 + 0x40) = uVar4;
    lVar28 = lVar28 + 0x10;
    *(undefined4 *)(iVar18 + 0x44) = uVar5;
    lVar16 = lVar16 + 0x10;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  *(undefined4 *)(puVar8 + 0x17) = in_stack_000000c0;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_004eb3b8(param_2,puVar8[7],puVar8[8],puVar8[9],puVar8[10],puVar8[0xb],puVar8[0xc],puVar8[0xd])
  ;
  fVar26 = pfVar9[0x28];
  fVar20 = (float)((uint)fVar26 & ~(uint)pfVar9[0x2b]);
  fVar3 = pfVar9[0x2c];
  fVar12 = (float)((uint)pfVar9[0x2b] & ~(uint)fVar26);
  pfVar9[0x29] = fVar20;
  pfVar9[0x2a] = fVar12;
  pfVar9[0x34] = (float)((uint)LZCOUNT(fVar26) >> 5);
  pfVar9[0x2d] = (float)((uint)fVar3 & ~(uint)pfVar9[0x2f]);
  pfVar9[0x30] = fVar26;
  pfVar9[0x35] = (float)((uint)LZCOUNT((uint)fVar26 & 0xf000) >> 5);
  pfVar9[0x2e] = (float)((uint)pfVar9[0x2f] & ~(uint)fVar3);
  pcVar10 = DAT_008fabd0;
  pfVar9[0x31] = fVar20;
  pfVar9[0x32] = fVar12;
  pfVar9[0x92] = fVar26;
  if (*pcVar10 != '\0') {
    pfVar9[0x12] = -pfVar9[0x12];
    pfVar9[0x10] = -pfVar9[0x10];
    if (((uint)fVar26 & 0x8000) == 0) {
      if (((uint)fVar26 & 0x2000) != 0) {
        pfVar9[0x30] = (float)((uint)fVar26 & 0xffffdfff | 0x8000);
      }
    }
    else {
      pfVar9[0x30] = (float)((uint)fVar26 & 0xffff7fff | 0x2000);
    }
    if (((uint)fVar20 & 0x8000) == 0) {
      if (((uint)fVar20 & 0x2000) != 0) {
        pfVar9[0x31] = (float)((uint)fVar20 & 0xffffdfff | 0x8000);
      }
    }
    else {
      pfVar9[0x31] = (float)((uint)fVar20 & 0xffff7fff | 0x2000);
    }
    if (((uint)fVar12 & 0x8000) == 0) {
      if (((uint)fVar12 & 0x2000) != 0) {
        pfVar9[0x32] = (float)((uint)fVar12 & 0xffffdfff | 0x8000);
      }
    }
    else {
      pfVar9[0x32] = (float)((uint)fVar12 & 0xffff7fff | 0x2000);
    }
  }
  if (pfVar9[0x33] == 1.4013e-45) {
    *pfVar9 = 0.0;
    pfVar9[0x28] = (float)((uint)fVar26 & 0xffffafcf);
    pfVar9[0x29] = (float)((uint)fVar20 & 0xffffafcf);
    pfVar9[0x2a] = (float)((uint)fVar12 & 0xffffafcf);
    pfVar9[1] = 0.0;
    pfVar9[0x33] = 0.0;
  }
  else if (pfVar9[0x33] == 2.8026e-45) {
    pfVar9[0x28] = (float)((uint)fVar26 & 0x900);
    pfVar9[0x2c] = (float)((uint)fVar3 & 0x900);
    pfVar9[2] = 0.0;
    pfVar9[0x29] = (float)((uint)fVar20 & 0x900);
    pfVar9[0x2a] = (float)((uint)fVar12 & 0x900);
    pfVar9[3] = 0.0;
    pfVar9[0x35] = 1.4013e-45;
    pfVar9[0x33] = 0.0;
  }
  fVar26 = pfVar9[2];
  fVar3 = pfVar9[3];
  dVar30 = (double)pfVar9[2];
  dVar31 = (double)pfVar9[3];
  dVar33 = ABS(dVar30);
  dVar32 = ABS(dVar31);
  *(float *)(puVar8 + 0x18) = (float)(dVar33 - dVar32);
  fVar12 = SQRT((float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31)));
  uVar14 = (ulonglong)((uint)fVar26 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x18) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4;
  dVar30 = dVar33;
  if ((double)*(float *)(puVar8 + 0x18) - dVar34 < 0.0) {
    dVar30 = dVar32;
  }
  fVar26 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  if ((double)*(float *)(puVar8 + 0x18) - dVar34 < 0.0) {
    dVar32 = dVar33;
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (dVar34 < dVar30) {
    lVar16 = uVar11 - 0x130;
    lVar22 = 2;
    lVar27 = uVar11 - 0x7c;
    lVar28 = uVar11 - 0x6c;
    fVar20 = (float)(dVar32 - dVar30) / (float)(dVar32 + dVar30);
    fVar1 = fVar20 * fVar20;
    *(float *)(puVar8 + 0x1a) = fVar20;
    *(float *)(puVar8 + 0x19) = fVar20;
    *(float *)((int)puVar8 + 0xcc) = fVar20;
    *(float *)((int)puVar8 + 0xc4) = fVar20;
    fVar20 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) * fVar1;
    *(float *)((int)puVar8 + 0xcc) = *(float *)((int)puVar8 + 0xcc) * fVar20;
    *(float *)(puVar8 + 0x1a) = *(float *)(puVar8 + 0x1a) * fVar20 * fVar1;
    do {
      *(float *)((int)lVar16 + 0xc4) = *(float *)((int)lVar16 + 0xb4) * fVar20 * fVar20;
      iVar18 = (int)lVar27;
      lVar16 = lVar16 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar18 + 4) * fVar20 * fVar20;
      lVar28 = lVar28 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar28 = uVar11 - 0x7c;
    pfVar15 = (float *)&DAT_007358e0;
    lVar16 = lVar29;
    lVar27 = lVar28;
    do {
      fVar20 = *pfVar15;
      fVar1 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar16 + 0xc4) = *(float *)((int)lVar16 + 0xc4) * fVar20;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar1;
      lVar27 = lVar27 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar29;
      iVar25 = (int)lVar28;
      lVar29 = lVar29 + 0x10;
      lVar28 = lVar28 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar18 + 0xc4)) + *(float *)(iVar25 + 4)
                        + *(float *)(iVar25 + 8) + *(float *)(iVar25 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar26 + fVar3);
  }
  sVar13 = *(short *)((int)pfVar9 + 0x8e);
  *(float *)((int)pfVar9 + (int)((longlong)sVar13 << 2) + 0x1d0) = fVar12;
  *(float *)((int)pfVar9 + (int)((longlong)sVar13 << 2) + 0x158) = (float)dVar34;
  if (0.9 < fVar12) {
    sVar13 = *(short *)((int)pfVar9 + 0x8e);
    iVar18 = 1;
    fVar26 = pfVar9[0x29];
    iVar25 = 1;
    puVar8[0x1d] = (longlong)(int)(animationSpeed * 4.5);
    if (1 < *(int *)((int)puVar8 + 0xec)) {
      do {
        uVar6 = (int)pfVar9[(((sVar13 - iVar18) + 0x1e) / 0x1e) * -0x1e + (sVar13 - iVar18) + 0x92]
                >> 0x1f;
        iVar24 = (uVar6 >> 1 ^
                 (uint)pfVar9[(((sVar13 - iVar18) + 0x1e) / 0x1e) * -0x1e + (sVar13 - iVar18) + 0x92
                             ]) - uVar6;
        if (0x3f666666 < iVar24) break;
        if (iVar24 < 0x3e800000) {
          fVar26 = (float)((uint)fVar26 | 0x10000);
          pfVar9[0x29] = fVar26;
          break;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)((int)puVar8 + 0xec));
    }
    if (((uint)fVar26 & 0x10000) == 0) {
      dVar30 = 5.5;
      dVar32 = 0.9599310755729675;
      for (; puVar8[0x1d] = (longlong)(int)((double)animationSpeed * dVar30),
          iVar25 < *(int *)((int)puVar8 + 0xec); iVar25 = iVar25 + 1) {
        dVar31 = (double)fastfunc::FastSubRots
                                   (pfVar9[(((sVar13 - iVar25) + 0x1e) / 0x1e) * -0x1e +
                                           (sVar13 - iVar25) + 0x74],(float)dVar34);
        if (dVar32 < dVar31) {
          pfVar9[0x29] = (float)((uint)pfVar9[0x29] | 0x10000);
          break;
        }
        sVar13 = *(short *)((int)pfVar9 + 0x8e);
      }
    }
  }
  fVar26 = pfVar9[0x93];
  lVar29 = 0x10;
  fVar3 = pfVar9[0x28];
  pfVar9[(int)pfVar9[0x11a] + 0x9c] = pfVar9[0x2c];
  pfVar9[(int)fVar26 + 0x95] = fVar3;
  do {
    puVar17 = (undefined4 *)param_2;
    param_2 = param_2 + 4;
    iVar18 = iVar23 + (int)pfVar9[0x11a] * 0x40 + 0x28c;
    iVar23 = iVar23 + 4;
    *(undefined4 *)((int)pfVar9 + iVar18) = *puVar17;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  fVar26 = pfVar9[0x11a];
  iVar23 = *(short *)((int)pfVar9 + 0x8e) + 1;
  fVar3 = pfVar9[0x24];
  sVar13 = (short)(iVar23 >> 0x1f);
  pfVar9[0x94] = (float)((int)fVar26 +
                        ((uint)((longlong)((int)pfVar9[0x94] + 1) - (longlong)(int)fVar26 >> 0x3f) &
                        ((int)pfVar9[0x94] + 1) - (int)fVar26));
  pfVar9[0x93] = (float)(((int)pfVar9[0x93] + 1) % 7);
  *(float *)((int)pfVar9 + (int)((longlong)*(short *)((int)pfVar9 + 0x8e) << 2) + 0xe0) =
       pfVar9[0x29];
  fVar26 = pfVar9[0x28];
  *(short *)((int)pfVar9 + 0x8e) =
       (short)iVar23 +
       (((short)(iVar23 / 0x1e) + sVar13) - ((short)((short)(iVar23 / 0x1e0000) + sVar13) >> 0xf)) *
       -0x1e;
  pfVar9[0x24] = (float)(((uint)((longlong)((int)fVar3 + 1) + -0x1e >> 0x3f) & (int)fVar3 - 0x1dU) +
                        0x1e);
  if (*(char *)((int)pfVar9 + 0x44e) != '\0') {
    if ((fVar26 == 0.0) || (fVar26 != pfVar9[0x2b])) {
      *(undefined1 *)((int)pfVar9 + 0x44f) = *(undefined1 *)((int)pfVar9 + 0x44d);
    }
    else {
      cVar19 = *(char *)((int)pfVar9 + 0x44f) + -1;
      *(char *)((int)pfVar9 + 0x44f) = cVar19;
      if ((cVar19 == '\0') || (cVar19 == -1)) {
        *(char *)((int)pfVar9 + 0x44f) = *(char *)((int)pfVar9 + 0x44e);
        pfVar9[0x29] = fVar26;
      }
    }
  }
  return;
}



//==== 004ec160  ns=idol  size=0x3e4
// sig: undefined Pad_PS_Update(void)
// callers(0): 
// callees(8): 004eb6e8 FUN_004eb6e8; 004ff6d0 print_tty; 0050544c FUN_0050544c; 005055e8 FUN_005055e8; 005c5ad0 libc::memcpy; 0064f984 cell::cellPadSetPortSetting; 0064f9a4 cell::cellPadGetData; 0064f9c4 cell::cellPadGetInfo2
// strings: 0065aa80: 'ERROR: (pad.cpp) cellPadGetInfo() error 0x%x\n' | 0065aab8: 'ERROR: (Pad_PS::Update) 0x%x\n'

void idol::Pad_PS_Update(int param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar10;
  int iVar11;
  longlong lVar9;
  longlong lVar12;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar13;
  int iVar14;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar15;
  longlong lVar16;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar15 = uVar6 - 0x1f0;
  puVar4 = (ulonglong *)lVar15;
  *puVar4 = uVar6;
  puVar4[0x40] = in_LR;
  puVar4[0x3c] = unaff_r30;
  puVar4[0x3d] = unaff_r31;
  puVar4[0x3a] = unaff_r28;
  puVar4[0x3b] = unaff_r29;
  uVar8 = cell::cellPadGetInfo2(uVar6 - 0x120);
  uVar7 = puVar4[5];
  if ((int)uVar8 == 0) {
    iVar10 = 0;
    uVar13 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    do {
      iVar14 = (int)((uVar13 & 0xffffffff) << 2);
      if ((*(uint *)((int)puVar4 + iVar14 + 0xdc) & 1) != 0) {
        iVar10 = iVar10 + 1;
        *(int *)(param_1 + 4) = iVar10;
      }
      if ((*(uint *)((int)puVar4 + iVar14 + 0x114) & 4) != 0) {
        cell::cellPadSetPortSetting(uVar13,6);
        uVar7 = puVar4[5];
        iVar10 = *(int *)(param_1 + 4);
      }
      piVar5 = DAT_01111640;
      iVar14 = (int)uVar13 + 1;
      uVar13 = (ulonglong)iVar14;
    } while (iVar14 < 4);
    puVar4[5] = uVar7;
    (*(code *)**(undefined4 **)(*piVar5 + 8))(0x3f90624de0000000);
    uVar7 = puVar4[5];
    if (*(int *)(param_1 + 4) == 0) {
      FUN_0050544c(&DAT_0159b38c,1,&DAT_0065aab0);
      piVar5 = DAT_01111640;
      iVar10 = *DAT_01111640;
      puVar4[5] = uVar7;
      (*(code *)**(undefined4 **)(iVar10 + 0xc))
                (0,piVar5,7,0,2,*(undefined4 **)(iVar10 + 0xc),1,0,&PTR_FUN_00710138);
    }
    iVar10 = (int)(param_2 << 2);
    uVar1 = *(uint *)((int)puVar4 + iVar10 + 0xdc);
    if (uVar1 == 0) {
      *(undefined4 *)(param_3 + 0x9c) = 0;
      *(undefined1 *)(param_3 + 0x458) = 0;
      FUN_005055e8(param_1,param_3);
    }
    else if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(param_3 + 0x9c) = 0;
        FUN_005055e8(param_1,param_3);
      }
    }
    else {
      *(undefined4 *)(param_3 + 0x9c) = 1;
      *(undefined1 *)(param_3 + 0x458) = 1;
      uVar8 = cell::cellPadGetData(param_2 & 0xffffffff,uVar6 - 0xa4);
      if ((int)uVar8 != 0) {
        print_tty("ERROR: (Pad_PS::Update) 0x%x\n",uVar8);
        *(undefined4 *)(param_3 + 0x9c) = 3;
      }
      if (*(int *)((int)puVar4 + 0x14c) == 0) {
        lVar15 = 0x10;
        iVar14 = 0;
        do {
          iVar11 = iVar14;
          uVar2 = *(undefined4 *)(iVar11 + param_3 + 0x4e0);
          *(undefined4 *)((int)puVar4 + iVar11 + 0x40) = *(undefined4 *)(iVar11 + param_3 + 0x4dc);
          *(undefined4 *)((int)puVar4 + iVar11 + 0x44) = uVar2;
          lVar15 = lVar15 + -1;
          iVar14 = iVar11 + 8;
        } while (lVar15 != 0);
        *(undefined4 *)((int)puVar4 + iVar11 + 0x48) = *(undefined4 *)(param_3 + iVar11 + 8 + 0x4dc)
        ;
        FUN_004eb6e8(param_1,param_3,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],
                     puVar4[0xd]);
      }
      else {
        lVar12 = uVar6 - 0xa4;
        lVar9 = uVar6 - 0xa0;
        lVar16 = 8;
        do {
          iVar14 = (int)lVar15;
          uVar2 = *(undefined4 *)((int)lVar12 + 8);
          *(undefined4 *)(iVar14 + 0x40) = *(undefined4 *)(iVar14 + 0x14c);
          uVar3 = *(undefined4 *)((int)lVar9 + 8);
          lVar12 = lVar12 + 0x10;
          *(undefined4 *)(iVar14 + 0x44) = *(undefined4 *)(iVar14 + 0x150);
          lVar9 = lVar9 + 0x10;
          *(undefined4 *)(iVar14 + 0x48) = uVar2;
          *(undefined4 *)(iVar14 + 0x4c) = uVar3;
          lVar15 = lVar15 + 0x10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        *(undefined4 *)(puVar4 + 0x18) = *(undefined4 *)((int)puVar4 + 0x1cc);
        FUN_004eb6e8(param_1,param_3,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],
                     puVar4[0xd]);
        lVar15 = 0x10;
        iVar14 = 0;
        do {
          iVar11 = iVar14;
          uVar2 = *(undefined4 *)((int)puVar4 + iVar11 + 0x150);
          *(undefined4 *)(iVar11 + param_3 + 0x4dc) = *(undefined4 *)((int)puVar4 + iVar11 + 0x14c);
          *(undefined4 *)(iVar11 + param_3 + 0x4e0) = uVar2;
          lVar15 = lVar15 + -1;
          iVar14 = iVar11 + 8;
        } while (lVar15 != 0);
        *(undefined4 *)(param_3 + iVar11 + 8 + 0x4dc) =
             *(undefined4 *)((int)puVar4 + iVar11 + 0x154);
        libc::memcpy((void *)(param_3 + 0x474),puVar4 + 0x2a,0x28);
      }
    }
    if ((puVar4[0x1b] & 0x100000000) == 0) {
      *(undefined1 *)(param_3 + 0x560) = 0;
      *(undefined1 *)(param_3 + 0x88) = 0;
      *(undefined1 *)(param_3 + 0x89) = 0;
    }
    else {
      if ((*(uint *)((int)puVar4 + iVar10 + 0xdc) & 1) != 0) {
        FUN_005055e8(param_1,param_3);
      }
      *(undefined1 *)(param_3 + 0x560) = 1;
    }
  }
  else {
    print_tty("ERROR: (pad.cpp) cellPadGetInfo() error 0x%x\n",uVar8);
  }
  return;
}



//==== 004ec544  ns=Global  size=0x20
// sig: undefined FUN_004ec544(void)
// callers(0): 
// callees(0): 

ulonglong FUN_004ec544(void)

{
  return (ulonglong)-(longlong)*(int *)(pad::g_pPadDriver + 4) >> 0x3f;
}



//==== 004ec568  ns=Global  size=0x184
// sig: undefined FUN_004ec568(void)
// callers(1): 0001401c boot::boot
// callees(3): 004f1c18 FUN_004f1c18; 004f4d1c FUN_004f4d1c; 0064f464 cell::cellGcmGetLabelAddress
// strings: 0065aad8: 'WwsLightTfrag'

void FUN_004ec568(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  undefined1 local_30 [16];
  
  puVar1 = param_1 + 0x120208;
  *param_1 = 0;
  FUN_004f4d1c(puVar1,param_1 + 0x20,0x80000,"WwsLightTfrag");
  if (DAT_01592384 == '\0') {
    FUN_004f1c18(puVar1,PTR_DAT_008fa624,local_30,DAT_008fa628,0x10,0);
  }
  else {
    FUN_004f1c18(puVar1,PTR_DAT_008fa624,local_30,1,0x10,0);
  }
  iVar3 = 0;
  cVar4 = '@';
  param_1[0x120317] = 0;
  param_1[0x120316] = 0;
  param_1[0x120318] = 0;
  do {
    puVar1 = (undefined4 *)cell::cellGcmGetLabelAddress(cVar4);
    param_1[0x12002a] = puVar1;
    *puVar1 = 1;
    puVar1 = (undefined4 *)cell::cellGcmGetLabelAddress(cVar4 + '\x05');
    iVar3 = iVar3 + 1;
    puVar2 = param_1 + 0x12002f;
    cVar4 = cVar4 + '\x01';
    param_1 = param_1 + 1;
    *puVar2 = puVar1;
    *puVar1 = 1;
  } while (iVar3 < 5);
  return;
}



//==== 004ec6ec  ns=idol_draw  size=0x158
// sig: undefined InitFrameRenderState(void)
// callers(2): 0006bb78 draw::DefaultDraw; 0006c558 draw::InitLevelRenderState
// callees(1): 005c5ad0 libc::memcpy

void * idol_draw::InitFrameRenderState
                 (int param_1,void *param_2,int param_3,void *param_4,int param_5,void *param_6,
                 longlong param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(int *)(param_1 + 0x480810) = param_3;
  *(int *)(param_1 + 0x480814) = param_5;
  if (param_3 != 0) {
    libc::memcpy((void *)(param_1 + 0x4800d0),param_2,param_3 << 6);
  }
  if (param_5 != 0) {
    libc::memcpy((void *)((int)&DAT_004804d0 + param_1),param_4,param_5 << 5);
  }
  puVar1 = (undefined4 *)(param_1 + 0x4806b0U & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x4806c0U & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  iVar3 = DAT_00902e9c;
  puVar1 = (undefined4 *)(DAT_00902e9c + 0x20U & 0xfffffff0);
  uVar7 = puVar1[2];
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x480700U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar7;
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar1 = (undefined4 *)(iVar3 + 0x30U & 0xfffffff0);
  uVar7 = puVar1[2];
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x4806d0U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar7;
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar1 = (undefined4 *)(iVar3 + 0x40U & 0xfffffff0);
  uVar7 = puVar1[2];
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x4806e0U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar7;
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar1 = (undefined4 *)(iVar3 + 0x50U & 0xfffffff0);
  uVar7 = puVar1[2];
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x4806f0U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar7;
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  pvVar4 = libc::memcpy((void *)(param_1 + 0x480710),param_6,(size_t)(param_7 << 4));
  return pvVar4;
}



//==== 004ec844  ns=Global  size=0x60
// sig: undefined FUN_004ec844(void)
// callers(0): 
// callees(0): 

void FUN_004ec844(int *param_1,longlong param_2)

{
  if ((*(char *)(g_viewMtxPtr + 0x10) == '\0') || ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) == 0)) {
    **(undefined4 **)((int)param_1 + (int)(param_2 << 2) + *param_1 * 0x14 + 0x4800a8) = 0;
  }
  return;
}



//==== 004ec8a4  ns=Global  size=0x3e0
// sig: undefined FUN_004ec8a4(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(11): 004f0e44 FUN_004f0e44; 004f0e94 FUN_004f0e94; 004f0f10 FUN_004f0f10; 004f1018 FUN_004f1018; 004f1074 FUN_004f1074; 004f10c8 FUN_004f10c8; 004f1144 FUN_004f1144; 004f1198 FUN_004f1198; 004f121c FUN_004f121c; 004f12bc FUN_004f12bc; 004f5308 FUN_004f5308

void FUN_004ec8a4(int *param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_a0 [32];
  undefined8 local_80;
  undefined1 auStack_78 [32];
  
  bVar1 = *(char *)(g_viewMtxPtr + 0x10) == '\0';
  if ((bVar1) || ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) == 0)) {
    if (param_3 == 0) {
      if ((bVar1) || ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) == 0)) {
        *(undefined4 *)param_1[*param_1 * 5 + 0x12002a] = 0;
      }
    }
    else {
      FUN_004f0e44(auStack_78,
                   param_1 + *param_1 * 0x80000 + param_1[*param_1 + 0x120316] * 0x4000 + 0x20020,
                   0x10000);
      lVar8 = FUN_004f5308(&DAT_01111680);
      lVar9 = ((ulonglong)param_3 & 0xfffffff) * 0x10;
      uVar4 = lVar9 + ((ulonglong)param_3 & 0x3f) * -0x10 + 0x400 & 0xffffffff;
      uVar5 = lVar8 + 0x10U & 0xffffffff;
      lVar9 = uVar4 + ((LZCOUNT(-(param_3 & 0x3f)) << 0x3a) >> 0x3f & lVar9 - uVar4);
      uVar6 = uVar5 + 2 & 0xffffffff;
      uVar4 = (ulonglong)(lVar9 << 0x20) >> 0x2a;
      param_1[*param_1 * 5 + 0x120020] = 1;
      FUN_004f0e94(auStack_78);
      FUN_004f0f10(auStack_78,0,1,0x10,lVar8);
      FUN_004f0f10(auStack_78,1,1,uVar5,2);
      FUN_004f0f10(auStack_78,2,1,uVar6,uVar4);
      FUN_004f0f10(auStack_78,3,1,uVar6 + uVar4 & 0xffffffff,0x50);
      FUN_004f12bc(auStack_78,0,0,&DAT_01111680,0);
      FUN_004f1018(auStack_78,1,0,param_1 + 0x120034,0x750,0);
      FUN_004f1018(auStack_78,2,0,param_2,lVar9,0);
      FUN_004f1074(auStack_78,3,0,0,0,0);
      FUN_004f10c8(auStack_78,0xf);
      FUN_004f1198(auStack_78,0,0);
      FUN_004f121c(auStack_78,local_a0,0x20);
      FUN_004f1144(&local_80,auStack_78);
      *(undefined8 *)(param_1 + *param_1 * 0x80 + param_1[*param_1 + 0x120316] * 4 + 0x120216) =
           local_80;
      uVar7 = DAT_01592381;
      iVar2 = *param_1;
      iVar3 = param_1[iVar2 + 0x120316];
      param_1[iVar2 + 0x120316] = iVar3 + 1;
      *(undefined1 *)(param_1 + iVar2 * 0x80 + iVar3 * 4 + 0x120218) = uVar7;
    }
  }
  return;
}



//==== 004ecc84  ns=Global  size=0x4c0
// sig: undefined FUN_004ecc84(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(11): 004f0e44 FUN_004f0e44; 004f0e94 FUN_004f0e94; 004f0f10 FUN_004f0f10; 004f1018 FUN_004f1018; 004f1074 FUN_004f1074; 004f10c8 FUN_004f10c8; 004f1144 FUN_004f1144; 004f1198 FUN_004f1198; 004f121c FUN_004f121c; 004f12bc FUN_004f12bc; 004f5308 FUN_004f5308

void FUN_004ecc84(int *param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_f0 [32];
  undefined8 local_d0;
  undefined1 auStack_c8 [56];
  
  bVar1 = *(char *)(g_viewMtxPtr + 0x10) == '\0';
  if ((bVar1) || ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) == 0)) {
    if ((int)param_3 == 0) {
      if ((bVar1) || ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) == 0)) {
        *(undefined4 *)param_1[*param_1 * 5 + 0x12002b] = 0;
      }
    }
    else {
      lVar10 = FUN_004f5308(&DAT_01111688);
      uVar11 = (int)param_3 + 0x3ff;
      uVar13 = ((int)uVar11 >> 10) + (uint)((int)uVar11 < 0 && (uVar11 & 0x3ff) != 0);
      uVar11 = 0;
      uVar5 = lVar10 + 0x10U & 0xffffffff;
      param_1[*param_1 * 5 + 0x120021] = uVar13;
      if (uVar13 != 0) {
        uVar12 = (param_3 & 0xffffffff) / (ulonglong)uVar13 + 1;
        uVar6 = uVar5 + 2 & 0xffffffff;
        do {
          FUN_004f0e44(auStack_c8,
                       param_1 + *param_1 * 0x80000 +
                                 param_1[*param_1 + 0x120316] * 0x4000 + 0x20020,0x10000);
          lVar15 = uVar12 + ((longlong)((param_3 & 0xffffffff) - (uVar12 & 0xffffffff)) >> 0x3f &
                            param_3 - uVar12);
          uVar4 = lVar15 * 0x50 & 0xffffffff;
          uVar7 = lVar15 * 0x50 & 0x3ff;
          uVar8 = (uVar4 - uVar7) + 0x400 & 0xffffffff;
          lVar14 = uVar8 + ((LZCOUNT(-(int)uVar7) << 0x3a) >> 0x3f & uVar4 - uVar8);
          uVar4 = (ulonglong)(lVar14 << 0x20) >> 0x2a;
          uVar7 = uVar4 + uVar6 & 0xffffffff;
          FUN_004f0e94(auStack_c8);
          FUN_004f0f10(auStack_c8,0,1,0x10,lVar10);
          FUN_004f0f10(auStack_c8,1,1,uVar5,2);
          FUN_004f0f10(auStack_c8,2,1,uVar6,uVar4);
          FUN_004f0f10(auStack_c8,3,1,uVar7,0xf8 - uVar7 & 0xffffffff);
          FUN_004f12bc(auStack_c8,0,0,&DAT_01111688,0);
          FUN_004f1018(auStack_c8,1,0,param_1 + 0x120034,0x750,0);
          FUN_004f1018(auStack_c8,2,0,param_2,lVar14,0);
          FUN_004f1074(auStack_c8,3,0,0,0,0);
          FUN_004f10c8(auStack_c8,0xf);
          FUN_004f1198(auStack_c8,0,0);
          FUN_004f121c(auStack_c8,local_f0,0x20);
          FUN_004f1144(&local_d0,auStack_c8);
          uVar11 = uVar11 + 1;
          param_3 = param_3 - lVar15;
          *(undefined8 *)(param_1 + *param_1 * 0x80 + param_1[*param_1 + 0x120316] * 4 + 0x120216) =
               local_d0;
          uVar9 = DAT_01592380;
          iVar2 = *param_1;
          iVar3 = param_1[iVar2 + 0x120316];
          param_1[iVar2 + 0x120316] = iVar3 + 1;
          *(undefined1 *)(param_1 + iVar2 * 0x80 + iVar3 * 4 + 0x120218) = uVar9;
          param_2 = param_2 + lVar15 * 0x50 & 0xffffffff;
        } while (uVar11 < uVar13);
      }
    }
  }
  return;
}



//==== 004ed144  ns=Global  size=0x3e8
// sig: undefined FUN_004ed144(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(11): 004f0e44 FUN_004f0e44; 004f0e94 FUN_004f0e94; 004f0f10 FUN_004f0f10; 004f1018 FUN_004f1018; 004f1074 FUN_004f1074; 004f10c8 FUN_004f10c8; 004f1144 FUN_004f1144; 004f1198 FUN_004f1198; 004f121c FUN_004f121c; 004f12bc FUN_004f12bc; 004f5308 FUN_004f5308

void FUN_004ed144(int *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_a0 [32];
  undefined8 local_80;
  undefined1 auStack_78 [32];
  
  bVar1 = *(char *)(g_viewMtxPtr + 0x10) == '\0';
  if ((bVar1) || ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) == 0)) {
    if ((int)param_3 == 0) {
      if ((bVar1) || ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) == 0)) {
        *(undefined4 *)param_1[*param_1 * 5 + 0x12002c] = 0;
      }
    }
    else {
      FUN_004f0e44(auStack_78,
                   param_1 + *param_1 * 0x80000 + param_1[*param_1 + 0x120316] * 0x4000 + 0x20020,
                   0x10000);
      lVar9 = FUN_004f5308(&DAT_01111698);
      uVar4 = param_3 * 0x50 & 0xffffffff;
      uVar5 = param_3 * 0x50 & 0x3ff;
      uVar6 = lVar9 + 0x10U & 0xffffffff;
      uVar7 = (uVar4 - uVar5) + 0x400 & 0xffffffff;
      lVar10 = uVar7 + ((LZCOUNT(-(int)uVar5) << 0x3a) >> 0x3f & uVar4 - uVar7);
      uVar5 = uVar6 + 2 & 0xffffffff;
      uVar4 = (ulonglong)(lVar10 << 0x20) >> 0x2a;
      param_1[*param_1 * 5 + 0x120022] = 1;
      FUN_004f0e94(auStack_78);
      FUN_004f0f10(auStack_78,0,1,0x10,lVar9);
      FUN_004f0f10(auStack_78,1,1,uVar6,2);
      FUN_004f0f10(auStack_78,2,1,uVar5,uVar4);
      FUN_004f0f10(auStack_78,3,1,uVar5 + uVar4 & 0xffffffff,0x50);
      FUN_004f12bc(auStack_78,0,0,&DAT_01111698,0);
      FUN_004f1018(auStack_78,1,0,param_1 + 0x120034,0x750,0);
      FUN_004f1018(auStack_78,2,0,param_2,lVar10,0);
      FUN_004f1074(auStack_78,3,0,0,0,0);
      FUN_004f10c8(auStack_78,0xf);
      FUN_004f1198(auStack_78,0,0);
      FUN_004f121c(auStack_78,local_a0,0x20);
      FUN_004f1144(&local_80,auStack_78);
      *(undefined8 *)(param_1 + *param_1 * 0x80 + param_1[*param_1 + 0x120316] * 4 + 0x120216) =
           local_80;
      uVar8 = DAT_01592383;
      iVar2 = *param_1;
      iVar3 = param_1[iVar2 + 0x120316];
      param_1[iVar2 + 0x120316] = iVar3 + 1;
      *(undefined1 *)(param_1 + iVar2 * 0x80 + iVar3 * 4 + 0x120218) = uVar8;
    }
  }
  return;
}



//==== 004ed52c  ns=Global  size=0x53c
// sig: undefined FUN_004ed52c(void)
// callers(1): 000f7a44 mobyfunc::MB_DrawEntryList
// callees(11): 004f0e44 FUN_004f0e44; 004f0e94 FUN_004f0e94; 004f0f10 FUN_004f0f10; 004f1018 FUN_004f1018; 004f1074 FUN_004f1074; 004f10c8 FUN_004f10c8; 004f1144 FUN_004f1144; 004f1198 FUN_004f1198; 004f121c FUN_004f121c; 004f12bc FUN_004f12bc; 004f5308 FUN_004f5308

void FUN_004ed52c(int *param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_110 [32];
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  ulonglong local_d0;
  
  bVar1 = *(char *)(g_viewMtxPtr + 0x10) == '\0';
  if ((bVar1) || ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) == 0)) {
    if ((int)param_3 == 0) {
      if ((bVar1) || ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) == 0)) {
        *(undefined4 *)param_1[*param_1 * 5 + 0x12002d] = 0;
      }
    }
    else {
      lVar7 = FUN_004f5308(&DAT_01111690);
      uVar9 = ((longlong)(4 - param_3) >> 0x3f & 4U) + 1;
      uVar11 = (param_3 & 0xffffffff) / uVar9;
      iVar10 = (int)uVar9;
      uVar13 = (longlong)(int)uVar11 * (longlong)iVar10;
      uVar12 = 0;
      param_1[*param_1 * 5 + 0x120023] = iVar10;
      if (iVar10 != 0) {
        uVar3 = (lVar7 + 0x10U & 0xffffffff) + 2 & 0xffffffff;
        uVar14 = param_3;
        local_d0 = param_2;
        do {
          FUN_004f0e44(auStack_e8,
                       param_1 + *param_1 * 0x80000 +
                                 param_1[*param_1 + 0x120316] * 0x4000 + 0x20020,0x10000);
          uVar8 = uVar11 + ((longlong)((uVar13 & 0xffffffff) - (param_3 & 0xffffffff)) >> 0x3f & 1U)
          ;
          lVar16 = uVar8 + ((longlong)((uVar14 & 0xffffffff) - (uVar8 & 0xffffffff)) >> 0x3f &
                           uVar14 - uVar8);
          uVar8 = lVar16 * 0xb0 & 0xffffffff;
          uVar4 = lVar16 * 0xb0 & 0x3ff;
          uVar5 = (uVar8 - uVar4) + 0x400 & 0xffffffff;
          lVar15 = uVar5 + ((LZCOUNT(-(int)uVar4) << 0x3a) >> 0x3f & uVar8 - uVar5);
          uVar8 = (ulonglong)(lVar15 << 0x20) >> 0x2a;
          uVar4 = uVar8 + uVar3 & 0xffffffff;
          FUN_004f0e94(auStack_e8);
          FUN_004f0f10(auStack_e8,0,1,0x10,lVar7);
          FUN_004f0f10(auStack_e8,1,1,(int)(lVar7 + 0x10U),2);
          FUN_004f0f10(auStack_e8,2,1,uVar3,uVar8);
          FUN_004f0f10(auStack_e8,3,1,uVar4,0xf8 - uVar4 & 0xffffffff);
          FUN_004f12bc(auStack_e8,0,0,&DAT_01111690,0);
          FUN_004f1018(auStack_e8,1,0,param_1 + 0x120034,0x750,0);
          FUN_004f1018(auStack_e8,2,0,local_d0,lVar15,0);
          FUN_004f1074(auStack_e8,3,0,0,0,0);
          FUN_004f10c8(auStack_e8,0xf);
          FUN_004f1198(auStack_e8,0,0);
          FUN_004f121c(auStack_e8,local_110,0x20);
          FUN_004f1144(&local_f0,auStack_e8);
          uVar12 = uVar12 + 1;
          *(undefined8 *)(param_1 + *param_1 * 0x80 + param_1[*param_1 + 0x120316] * 4 + 0x120216) =
               local_f0;
          uVar6 = DAT_01592382;
          iVar10 = *param_1;
          uVar14 = uVar14 - lVar16;
          iVar2 = param_1[iVar10 + 0x120316];
          param_1[iVar10 + 0x120316] = iVar2 + 1;
          *(undefined1 *)(param_1 + iVar10 * 0x80 + iVar2 * 4 + 0x120218) = uVar6;
          local_d0 = local_d0 + lVar16 * 0xb0 & 0xffffffff;
          uVar13 = uVar13 + ((longlong)((uVar13 & 0xffffffff) - (param_3 & 0xffffffff)) >> 0x3f & 1U
                            );
        } while ((uVar12 & 0xffffffff) < uVar9);
      }
    }
  }
  return;
}



//==== 004eda68  ns=idol_draw  size=0x200
// sig: undefined Insert_WaitCmd_Marker(void)
// callers(6): 000f1850 mobyfunc::DrawMobyDepth; 000f1a78 mobyfunc::DrawMobys; 00508c10 shrubfunc::DrawShrub; 0050b0bc tfragfunc::DrawTfrag; 0050c5e0 tiefunc::DrawTie; 0050d240 FUN_0050d240
// callees(4): 004e3114 FUN_004e3114; 004ff6d0 print_tty; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 0065aae8: 'TfragWait' | 0065aaf8: 'TieWait' | 0065ab00: 'ShrubWait' | 0065ab10: 'MobyWait' | 0065ab20: 'Assertion failed at %s(%d): %s\n' | 0065ab40: 'j:/Ratchet/Source/CommonRC1/PS3/Ratchet_PS/LightSetup.cpp'

void idol_draw::Insert_WaitCmd_Marker(uint *param_1,RenderingStep *param_2,longlong param_3)

{
  undefined4 uVar1;
  RsxCmd *pRVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 in_LR;
  
  if ((*(char *)(g_viewMtxPtr + 0x10) != '\0') && ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) != 0)) {
    return;
  }
  uVar4 = param_3 + (ulonglong)*param_1 * 5 + 0x40;
  uVar3 = (uint)uVar4 & 0xff;
  if (uVar3 == 0x48) {
LAB_004edb54:
    RsxCmd_DebugStr_Marker(param_2,"MobyWait");
  }
  else {
    if (uVar3 == 0x47) {
LAB_004edb3c:
      RsxCmd_DebugStr_Marker(param_2,"ShrubWait");
      goto LAB_004edba0;
    }
    if (uVar3 == 0x46) {
LAB_004edb24:
      RsxCmd_DebugStr_Marker(param_2,"TieWait");
      goto LAB_004edba0;
    }
    if (uVar3 != 0x45) {
      if (uVar3 == 0x43) goto LAB_004edb54;
      if (uVar3 == 0x42) goto LAB_004edb3c;
      if (uVar3 == 0x41) goto LAB_004edb24;
      if (uVar3 != 0x40) {
        print_tty("Assertion failed at %s(%d): %s\n",
                  "j:/Ratchet/Source/CommonRC1/PS3/Ratchet_PS/LightSetup.cpp",0x212,&DAT_0065ab80);
        trapWord(0x1f,in_LR,in_LR);
        goto LAB_004edba0;
      }
    }
    RsxCmd_DebugStr_Marker(param_2,"TfragWait");
  }
LAB_004edba0:
  uVar1._0_1_ = param_2[0xc].field0_0x0;
  uVar1._1_1_ = param_2[0xc].field1_0x1;
  uVar1._2_1_ = param_2[0xc].field2_0x2;
  uVar1._3_1_ = param_2[0xc].field3_0x3;
  FUN_004e3114(g_viewMtxPtr,uVar1);
  *param_2->command = 0x40064;
  param_2->command[1] = (RsxCmd)((uVar4 & 0xffffffff) << 4) & 0xff0;
  pRVar2 = param_2->command;
  param_2->command = pRVar2 + 2;
  pRVar2[2] = 0x40068;
  param_2->command[1] = 0;
  uVar3 = *param_1;
  param_2->command = param_2->command + 2;
  **(undefined4 **)((int)param_1 + (int)(param_3 << 2) + uVar3 * 0x14 + 0x4800a8) = 1;
  RsxCmd_WritePass(param_2);
  return;
}



//==== 004edc68  ns=Global  size=0x64
// sig: undefined FUN_004edc68(void)
// callers(1): 004ddba8 idol_draw::BuildAndFlipFrame
// callees(0): 

void FUN_004edc68(int param_1,int param_2)

{
  int iVar1;
  
  **(undefined4 **)(param_2 + 8) = 0x40064;
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0x440;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar1 + 8;
  *(undefined4 *)(iVar1 + 8) = 0x40068;
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 8;
  **(undefined4 **)(param_1 + 0x4800b8) = 1;
  return;
}



//==== 004edccc  ns=Global  size=0x18
// sig: undefined FUN_004edccc(void)
// callers(1): 004e369c FUN_004e369c
// callees(0): 

void FUN_004edccc(int param_1)

{
  **(undefined4 **)(param_1 + 0x4800b8) = 0;
  return;
}



//==== 004edce4  ns=Global  size=0x18
// sig: undefined FUN_004edce4(void)
// callers(1): 0013abcc pause::BeginMenu
// callees(0): 

void FUN_004edce4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x480c60) = *(int *)(param_1 + 0x480c60) + param_2;
  return;
}



//==== 004edcfc  ns=Global  size=0x34
// sig: undefined FUN_004edcfc(void)
// callers(3): 0006dad0 draw::FadeToBlack; 0006e068 draw::Draw_FlushAndPresent; 004ddba8 idol_draw::BuildAndFlipFrame
// callees(1): 004f4ac8 idol_draw::CmdQueue_WaitForSpaceAndSync

void FUN_004edcfc(int param_1)

{
  idol_draw::CmdQueue_WaitForSpaceAndSync(param_1 + 0x480820);
  return;
}



//==== 004edd30  ns=Global  size=0x94
// sig: undefined FUN_004edd30(void)
// callers(0): 
// callees(1): 004f4ac8 idol_draw::CmdQueue_WaitForSpaceAndSync

void FUN_004edd30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  idol_draw::CmdQueue_WaitForSpaceAndSync(param_1 + 0x480820);
  lVar4 = 5;
  iVar1 = param_1;
  do {
    puVar2 = (undefined4 *)(iVar1 + 0x4800a8);
    puVar3 = (undefined4 *)(iVar1 + 0x4800bc);
    iVar1 = iVar1 + 4;
    puVar3 = (undefined4 *)*puVar3;
    *(undefined4 *)*puVar2 = 0;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(int *)(param_1 + 0x480c60) = *(int *)(param_1 + 0x480c60) + -1;
  return;
}



//==== 004eddc4  ns=idol_draw  size=0x270
// sig: undefined Spurs_FlushAndSwapQueue(void)
// callers(3): 00068560 draw::Render_DispatchJob; 0006dad0 draw::FadeToBlack; 0006e068 draw::Draw_FlushAndPresent
// callees(5): 004f1bb8 idol_draw::CmdQueue_Submit; 004f3bbc idol_draw::CmdQueue_Reset; 004f3f2c idol_draw::CmdQueue_PushEntry_Blocking; 004f3f80 idol_draw::CmdQueue_PushEntry; 004f4ac8 idol_draw::CmdQueue_WaitForSpaceAndSync

void idol_draw::Spurs_FlushAndSwapQueue(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(char *)(g_viewMtxPtr + 0x10) != '\0') && ((*(uint *)(g_viewMtxPtr + 0x1a6c) & 1) != 0)) {
    return;
  }
  if (param_1[0x120318] != 0) {
    CmdQueue_WaitForSpaceAndSync(param_1 + 0x120208);
    lVar10 = 5;
    puVar5 = param_1;
    do {
      puVar6 = puVar5 + 0x12002a;
      puVar7 = puVar5 + 0x12002f;
      puVar5 = puVar5 + 1;
      *(undefined4 *)*puVar6 = 0;
      *(undefined4 *)*puVar7 = 0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    param_1[0x120318] = param_1[0x120318] - 1;
  }
  puVar5 = param_1 + 0x120208;
  CmdQueue_WaitForSpaceAndSync(puVar5);
  CmdQueue_Reset(puVar5);
  if (param_1 + 0x120316 != (uint *)0x0) {
    uVar8 = 0;
    uVar1 = *param_1;
    bVar2 = false;
    if (param_1[uVar1 + 0x120316] != 0) {
      iVar9 = 0;
      do {
        iVar3 = iVar9 + uVar1 * 0x200;
        puVar4 = (undefined8 *)((int)param_1 + iVar3 + 0x480858);
        if (*(char *)((int)param_1 + iVar3 + 0x480860) == '\0') {
          CmdQueue_PushEntry(auStack_38,puVar5,*puVar4);
        }
        else {
          CmdQueue_PushEntry_Blocking(auStack_40,puVar5,*puVar4);
          bVar2 = true;
        }
        uVar1 = *param_1;
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0x10;
      } while (uVar8 < (param_1 + 0x120316)[uVar1]);
      if (bVar2) {
        CmdQueue_Submit(puVar5,1);
        CmdQueue_WaitForSpaceAndSync(puVar5);
        goto LAB_004edfdc;
      }
    }
    CmdQueue_Submit(puVar5,DAT_008fa628);
  }
LAB_004edfdc:
  uVar1 = *param_1;
  *param_1 = (uint)(1 - (ulonglong)uVar1);
  *(undefined4 *)((int)param_1 + (int)((1 - (ulonglong)uVar1 & 0xffffffff) << 2) + 0x480c58) = 0;
  return;
}



//==== 004ee034  ns=Global  size=0x6c
// sig: undefined FUN_004ee034(void)
// callers(0): 
// callees(1): 004f539c FUN_004f539c

void FUN_004ee034(void)

{
  FUN_004f539c(&DAT_01111698,2);
  FUN_004f539c(&DAT_01111690,2);
  FUN_004f539c(&DAT_01111688,2);
  FUN_004f539c(&DAT_01111680,2);
  return;
}



//==== 004ee0a8  ns=Global  size=0x138
// sig: undefined FUN_004ee0a8(void)
// callers(0): 
// callees(1): 004f5898 FUN_004f5898
// strings: 0065ab84: 'JobLightTfrag' | 0065ab94: 'JobLightTie' | 0065aba4: 'JobSkinLightMoby' | 0065abbc: 'JobLightShrubs'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ee0a8(void)

{
  undefined8 in_LR;
  undefined1 auVar1 [16];
  
  FUN_004f5898(&DAT_01111680,&DAT_0090a180,0x1690,"JobLightTfrag");
  FUN_004f5898(&DAT_01111688,&DAT_0090b880,0x1e10,"JobLightTie");
  FUN_004f5898(&DAT_01111690,&DAT_00907080,0x3090,"JobSkinLightMoby");
  FUN_004f5898(&DAT_01111698,&DAT_00905900,0x1710,"JobLightShrubs");
  uRam011116ac = 0;
  uRam011116a8 = 0;
  uRam011116a4 = 0;
  _DAT_011116a0 = 0;
  auVar1 = loadVectorLeftIndexed(in_LR,0x4ee0a0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  _DAT_011116b0 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = loadVectorLeftIndexed(4,0x4ee0a0);
  DAT_01591f20 = 0;
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_01591f24 = 0;
  DAT_01591f28 = 0xffffffff;
  DAT_01591f2c = 0xffffffff;
  _DAT_011116c0 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_01591f40 = 0;
  return;
}



//==== 004ee1e0  ns=Global  size=0x18c
// sig: undefined FUN_004ee1e0(void)
// callers(2): 000148f8 boot::StaticInit_BootGlobals; 004ee36c FUN_004ee36c
// callees(1): 005d0140 libc::memset

void FUN_004ee1e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[9] = 0;
  param_1[0x130] = 0;
  DAT_008fabd4 = param_1;
  libc::memset((int)param_1 + 0x29,0,0x80);
  libc::memset((int)param_1 + 0xa9,0,0x80);
  libc::memset((int)param_1 + 0x129,0,0x80);
  libc::memset((int)param_1 + 0x1a9,0,0x80);
  libc::memset((int)param_1 + 0x229,0,0x80);
  libc::memset((int)param_1 + 0x2a9,0,0x80);
  libc::memset((int)param_1 + 0x329,0,0x80);
  libc::memset((int)param_1 + 0x3a9,0,0x80);
  *(undefined1 *)((int)param_1 + 0x429) = 0;
  *(undefined1 *)((int)param_1 + 0x42a) = 0;
  *(undefined1 *)((int)param_1 + 0x42b) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  *(undefined1 *)((int)param_1 + 0x42d) = 0;
  *(undefined1 *)((int)param_1 + 0x42e) = 0;
  *(undefined1 *)((int)param_1 + 0x42f) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)((int)param_1 + 0x431) = 0;
  *(undefined1 *)((int)param_1 + 0x432) = 0;
  libc::memset((int)param_1 + 0x433,0,0x80);
  *(undefined1 *)((int)param_1 + 0x4b3) = 0;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  *(undefined1 *)((int)param_1 + 0x4b5) = 0;
  *(undefined1 *)((int)param_1 + 0x4b6) = 0;
  *(undefined1 *)((int)param_1 + 0x4b7) = 0;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  return;
}



//==== 004ee36c  ns=Global  size=0x20
// sig: undefined FUN_004ee36c(void)
// callers(0): 
// callees(1): 004ee1e0 FUN_004ee1e0

void FUN_004ee36c(void)

{
  FUN_004ee1e0();
  return;
}



//==== 004ee38c  ns=Global  size=0x70
// sig: undefined FUN_004ee38c(void)
// callers(0): 
// callees(2): 004ff6d0 print_tty; 00650524 sys::sys_ppu_thread_create
// strings: 0065abcc: 'GameContent' | 0065abdc: 'gamecontent thread create failed %d\n'

undefined8 FUN_004ee38c(undefined4 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_10 [16];
  
  uVar1 = sys::sys_ppu_thread_create
                    (auStack_10,&PTR_FUN_00710298,param_1,0x3e9,0x4000,0,"GameContent");
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    print_tty("gamecontent thread create failed %d\n",uVar1);
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



//==== 004ee3fc  ns=Global  size=0x198
// sig: undefined FUN_004ee3fc(void)
// callers(2): 004ee594 FUN_004ee594; 004ee5e8 FUN_004ee5e8
// callees(3): 004ff6d0 print_tty; 0064f504 cell::cellSysutilCheckCallback; 00650524 sys::sys_ppu_thread_create
// strings: 0065abcc: 'GameContent' | 0065abdc: 'gamecontent thread create failed %d\n'

undefined8 FUN_004ee3fc(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_10 [8];
  
  iVar1 = *param_1;
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      cell::cellSysutilCheckCallback();
    }
  }
  else if (iVar1 < 2) {
    uVar2 = sys::sys_ppu_thread_create
                      (auStack_10,&PTR_FUN_00710298,param_1,0x3e9,0x4000,0,"GameContent");
    if ((int)uVar2 == 0) {
      param_1[2] = 1;
    }
    else {
      print_tty("gamecontent thread create failed %d\n",uVar2);
    }
    *param_1 = 2;
  }
  else if ((iVar1 < 3) && (cell::cellSysutilCheckCallback(), param_1[2] == 0)) {
    *param_1 = 0;
  }
  if (*param_1 == 0) {
    iVar1 = param_1[1];
    if (iVar1 == 5) {
      param_1[1] = 6;
      *param_1 = 1;
    }
    else if (iVar1 == 4) {
      param_1[1] = 6;
      *param_1 = 1;
    }
    else if (iVar1 == 3) {
      param_1[1] = 6;
      *param_1 = 0;
    }
    else if (iVar1 == 2) {
      param_1[1] = 4;
      *param_1 = 1;
    }
    else if (iVar1 == 1) {
      param_1[1] = 4;
      *param_1 = 1;
    }
    else if (iVar1 == 0) {
      param_1[1] = 1;
      *param_1 = 1;
    }
  }
  syscall();
  return 0x640;
}



//==== 004ee594  ns=Global  size=0x54
// sig: undefined FUN_004ee594(void)
// callers(1): 0001401c boot::boot
// callees(1): 004ee3fc FUN_004ee3fc

void FUN_004ee594(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined1 *)(param_1 + 0x28) = param_4;
  while (iVar1 != 6) {
    FUN_004ee3fc(param_1);
    iVar1 = *(int *)(param_1 + 4);
  }
  return;
}



//==== 004ee5e8  ns=Global  size=0x58
// sig: undefined FUN_004ee5e8(void)
// callers(0): 
// callees(1): 004ee3fc FUN_004ee3fc

void FUN_004ee5e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[0x131] = param_2;
  param_1[1] = 3;
  *param_1 = 1;
  param_1[7] = param_3;
  param_1[8] = param_4;
  do {
    FUN_004ee3fc(param_1);
  } while (param_1[1] != 6);
  return;
}



//==== 004ee640  ns=Global  size=0x1c
// sig: undefined FUN_004ee640(void)
// callers(0): 
// callees(0): 

int FUN_004ee640(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    param_1 = param_1 + 0xa9;
  }
  else {
    param_1 = param_1 + 0x2a9;
  }
  return param_1;
}



//==== 004ee65c  ns=Global  size=0x1bc
// sig: undefined FUN_004ee65c(void)
// callers(1): 004f06ac FUN_004f06ac
// callees(5): 004ff6d0 print_tty; 004ffc9c print_tty2; 0064f704 cell::cellGameContentPermit; 0064f724 cell::cellGameContentErrorDialog; 0064f7a4 cell::cellGameBootCheck
// strings: 0065ac04: 'cellGameBootCheck() Error: 0x%x\n' | 0065ac2c: '  get_type = [%d] get_attributes = [0x%08x] dirName = [%s]\n' | 0065ac6c: '  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n' | 0065aca4: 'cellGameContentPermit() Error: 0x%x\n' | 0065accc: '*********************Error, you requested %d kbytes, there were only %d free\n'

bool FUN_004ee65c(int param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_48 [40];
  
  if (param_3 != '\0') {
    uVar4 = cell::cellGameBootCheck(&local_60,&local_5c,&local_58,auStack_48);
    if ((int)uVar4 < 0) {
      print_tty("cellGameBootCheck() Error: 0x%x\n",uVar4);
      return (bool)2;
    }
    print_tty2("  get_type = [%d] get_attributes = [0x%08x] dirName = [%s]\n",(ulonglong)local_60,
               (ulonglong)local_5c,auStack_48);
    print_tty2("  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n",local_58,local_54,local_50)
    ;
    *(undefined4 *)(param_1 + 0x4c0) = local_58;
    uVar4 = cell::cellGameContentPermit(param_1 + 0x29,param_1 + 0xa9);
    if ((int)uVar4 < 0) {
      print_tty("cellGameContentPermit() Error: 0x%x\n",uVar4);
      return (bool)2;
    }
    *(undefined4 *)(param_1 + 0x4c0) = local_58;
  }
  uVar1 = *(uint *)(param_1 + 0x4c0);
  if (uVar1 < param_2) {
    print_tty("*********************Error, you requested %d kbytes, there were only %d free\n",
              param_2,uVar1);
    uVar3 = param_2 - uVar1;
    iVar2 = (uVar3 - (uVar3 & 0x3ff)) + 0x400;
    print_tty("*********************Error, you requested %d kbytes, there were only %d free\n",
              param_2,uVar1);
    cell::cellGameContentErrorDialog
              (0x66,iVar2 + ((uint)((LZCOUNT(-(uVar3 & 0x3ff)) << 0x3a) >> 0x3f) & uVar3 - iVar2),0)
    ;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  }
  return uVar1 < param_2;
}



//==== 004ee818  ns=Global  size=0x13c
// sig: undefined FUN_004ee818(void)
// callers(1): 004ef178 FUN_004ef178
// callees(5): 004ff6d0 print_tty; 004ffc9c print_tty2; 00504d48 FUN_00504d48; 0064f704 cell::cellGameContentPermit; 0064f764 cell::cellGameDataCheck
// strings: 0065ad1c: 'GetHddGameParameters() Error: 0x%x\n' | 0065ad44: 'Trying as game data\n' | 0065ad5c: 'GetHddGameParameters() as GameData Error: 0x%x\n' | 0065ad8c: 'cellGameDataCheck() hdd game is not found\n' | 0065adbc: 'cellGameContentPermit() HddGame Error: 0x%x\n' | 0065adec: '  m_hddGamePath:[%s]\n' | 0065ae04: '  m_hddGameUserPath:[%s]\n'

void FUN_004ee818(longlong param_1)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = FUN_00504d48(boot::g_pHWSystem);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(iVar3 + 4);
    uVar2 = cell::cellGameDataCheck(2,uVar1,0);
    if ((int)uVar2 < 0) {
      print_tty("GetHddGameParameters() Error: 0x%x\n",uVar2);
      print_tty("Trying as game data\n");
      uVar2 = cell::cellGameDataCheck(3,uVar1,0);
      if ((int)uVar2 < 0) {
        print_tty("GetHddGameParameters() as GameData Error: 0x%x\n",uVar2);
        return;
      }
    }
    if ((int)uVar2 == 2) {
      print_tty("cellGameDataCheck() hdd game is not found\n");
    }
    uVar2 = cell::cellGameContentPermit(param_1 + 0x329,param_1 + 0x3a9);
    if ((int)uVar2 < 0) {
      print_tty("cellGameContentPermit() HddGame Error: 0x%x\n",uVar2);
    }
    else {
      print_tty2("  m_hddGamePath:[%s]\n",param_1 + 0x329);
      print_tty2("  m_hddGameUserPath:[%s]\n",param_1 + 0x3a9);
    }
  }
  return;
}



//==== 004ee954  ns=Global  size=0x4
// sig: undefined FUN_004ee954(void)
// callers(0): 
// callees(0): 

void FUN_004ee954(void)

{
  return;
}



//==== 004ee958  ns=Global  size=0x2a4
// sig: undefined FUN_004ee958(void)
// callers(1): 004ef178 FUN_004ef178
// callees(12): 004ff6d0 print_tty; 004ffc9c print_tty2; 00504c58 FUN_00504c58; 00504d90 FUN_00504d90; 005cc44c FUN_005cc44c; 005cc8d8 libc::strcpy; 005cccec libc::strcpy; 005d0140 libc::memset; 0064f6e4 cell::cellGameCreateGameData; 0064f704 cell::cellGameContentPermit; 0064f724 cell::cellGameContentErrorDialog; 0064f764 cell::cellGameDataCheck
// strings: 0065ae20: 'DATA' (raw) | 0065ae28: 'CreateGameData Error: 0x%x\n' | 0065ae48: 'GameData exists\n' | 0065ae60: 'Creating new gamedata\n' | 0065accc: '*********************Error, you requested %d kbytes, there were only %d free\n' | 0065ae78: '01.00' | 0065ae80: 'cellGameCreateGameData() Error: 0x%x\n' | 0065aea8: 'cellGameCreateGameData() OK\n' | 0065aca4: 'cellGameContentPermit() Error: 0x%x\n' | 0065aec8: 'cellGameContentPermit() OK\n' | 0065aee8: '  m_gameDataPath:[%s]\n' | 0065af00: '  m_gameDataUserPath:[%s]\n'

void FUN_004ee958(int param_1)

{
  char *__src;
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  undefined1 local_180 [16];
  char acStack_170 [128];
  undefined1 auStack_f0 [128];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [76];
  
  __src = (char *)FUN_00504c58(boot::g_pHWSystem);
  libc::strcpy(acStack_170,__src);
  iVar2 = FUN_00504d90(boot::g_pHWSystem);
  if (iVar2 == 0) {
    FUN_005cc44c(acStack_170,&DAT_0065ae20);
  }
  uVar1 = cell::cellGameDataCheck(3,acStack_170,local_180);
  if ((int)uVar1 < 0) {
    print_tty("CreateGameData Error: 0x%x\n",uVar1);
  }
  else {
    if ((int)uVar1 == 2) {
      print_tty2("Creating new gamedata\n");
      uVar3 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20);
      if (0 < (int)uVar3) {
        iVar2 = (uVar3 - (uVar3 & 0x3ff)) + 0x400;
        iVar2 = iVar2 + ((uint)((LZCOUNT(-(uVar3 & 0x3ff)) << 0x3a) >> 0x3f) & uVar3 - iVar2);
        print_tty("*********************Error, you requested %d kbytes, there were only %d free\n",
                  iVar2,0);
        cell::cellGameContentErrorDialog(0x66,iVar2,0);
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
        return;
      }
      libc::memset(auStack_f0,0,0xd4);
      libc::strcpy(auStack_f0,param_1 + 0x433,0x7f);
      libc::strcpy(auStack_70,param_1 + 0x429,9);
      libc::strcpy(auStack_64,"01.00",5);
      uVar1 = cell::cellGameCreateGameData(auStack_f0,param_1 + 0x229,param_1 + 0x2a9);
      if ((int)uVar1 < 0) {
        print_tty("cellGameCreateGameData() Error: 0x%x\n",uVar1);
      }
      else {
        print_tty2("cellGameCreateGameData() OK\n");
        *(undefined1 *)(param_1 + 0x19) = 1;
      }
    }
    else {
      print_tty2("GameData exists\n");
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
    uVar1 = cell::cellGameContentPermit(param_1 + 0x229,param_1 + 0x2a9);
    if ((int)uVar1 < 0) {
      print_tty("cellGameContentPermit() Error: 0x%x\n",uVar1);
    }
    else {
      print_tty2("cellGameContentPermit() OK\n");
      print_tty2("  m_gameDataPath:[%s]\n",param_1 + 0x229);
      print_tty2("  m_gameDataUserPath:[%s]\n",param_1 + 0x2a9);
    }
  }
  return;
}



//==== 004eebfc  ns=Global  size=0x1cc
// sig: undefined FUN_004eebfc(void)
// callers(1): 004ef178 FUN_004ef178
// callees(9): 004ff6d0 print_tty; 004ffc9c print_tty2; 00504c58 FUN_00504c58; 00504d90 FUN_00504d90; 005cc44c FUN_005cc44c; 005cc8d8 libc::strcpy; 0064f704 cell::cellGameContentPermit; 0064f764 cell::cellGameDataCheck; 0064f784 cell::cellGameGetSizeKB
// strings: 0065ae20: 'DATA' (raw) | 0065ae28: 'CreateGameData Error: 0x%x\n' | 0065ae48: 'GameData exists\n' | 0065af1c: 'cellGameGetSizeKB() Error: 0x%x\n' | 0065ac6c: '  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n' | 0065aca4: 'cellGameContentPermit() Error: 0x%x\n' | 0065aec8: 'cellGameContentPermit() OK\n' | 0065aee8: '  m_gameDataPath:[%s]\n' | 0065af00: '  m_gameDataUserPath:[%s]\n'

/* WARNING: Removing unreachable block (ram,0x004eecd8) */
/* WARNING: Removing unreachable block (ram,0x004eed10) */
/* WARNING: Removing unreachable block (ram,0x004eecf4) */

void FUN_004eebfc(int param_1)

{
  char *__src;
  int iVar2;
  undefined8 uVar1;
  undefined1 local_ac [12];
  char acStack_a0 [136];
  
  __src = (char *)FUN_00504c58(boot::g_pHWSystem);
  libc::strcpy(acStack_a0,__src);
  iVar2 = FUN_00504d90(boot::g_pHWSystem);
  if (iVar2 == 0) {
    FUN_005cc44c(acStack_a0,&DAT_0065ae20);
  }
  uVar1 = cell::cellGameDataCheck(3,acStack_a0,local_ac);
  if ((int)uVar1 < 0) {
    print_tty("CreateGameData Error: 0x%x\n",uVar1);
  }
  else {
    if ((int)uVar1 == 0) {
      print_tty2("GameData exists\n");
      *(undefined1 *)(param_1 + 0x19) = 1;
      print_tty2("  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n",0,0,0);
    }
    uVar1 = cell::cellGameContentPermit(param_1 + 0x229,param_1 + 0x2a9);
    if ((int)uVar1 < 0) {
      print_tty("cellGameContentPermit() Error: 0x%x\n",uVar1);
    }
    else {
      print_tty2("cellGameContentPermit() OK\n");
      print_tty2("  m_gameDataPath:[%s]\n",param_1 + 0x229);
      print_tty2("  m_gameDataUserPath:[%s]\n",param_1 + 0x2a9);
    }
  }
  return;
}



//==== 004eedc8  ns=Global  size=0x138
// sig: undefined FUN_004eedc8(void)
// callers(1): 004eef00 FUN_004eef00
// callees(5): 004ff6d0 print_tty; 004ffc9c print_tty2; 005cc8d8 libc::strcpy; 0064f6c4 cell::cellGameGetParamString; 0064f744 cell::cellGameGetParamInt
// strings: 0065af40: 'Error getting Title 0x%x\n' | 0065af60: 'Error getting Title ID 0x%x\n' | 0065af80: 'Error getting version 0x%x\n' | 0065afa0: 'Error getting parental level 0x%x\n' | 0065afc8: 'Overriding titleId, setting to %s\n'

void FUN_004eedc8(int param_1)

{
  char *__src;
  undefined8 uVar1;
  char *__dest;
  
  uVar1 = cell::cellGameGetParamString(1,param_1 + 0x433,0x80);
  if ((int)uVar1 < 0) {
    print_tty("Error getting Title 0x%x\n",uVar1);
  }
  __dest = (char *)(param_1 + 0x429);
  uVar1 = cell::cellGameGetParamString(100,__dest,10);
  if ((int)uVar1 < 0) {
    print_tty("Error getting Title ID 0x%x\n",uVar1);
  }
  uVar1 = cell::cellGameGetParamString(0x65,param_1 + 0x4b3,6);
  if ((int)uVar1 < 0) {
    print_tty("Error getting version 0x%x\n",uVar1);
  }
  uVar1 = cell::cellGameGetParamInt(0x66,param_1 + 0x4bc);
  if ((int)uVar1 < 0) {
    print_tty("Error getting parental level 0x%x\n",uVar1);
  }
  __src = *(char **)(param_1 + 0x14);
  if (((__src != (char *)0x0) && (*__src != '\0')) && (*(char *)(param_1 + 0x429) == '\0')) {
    libc::strcpy(__dest,__src);
    print_tty2("Overriding titleId, setting to %s\n",__dest);
  }
  return;
}



//==== 004eef00  ns=Global  size=0x278
// sig: undefined FUN_004eef00(void)
// callers(1): 004ef178 FUN_004ef178
// callees(12): 004eedc8 FUN_004eedc8; 004ef34c FUN_004ef34c; 004ef3bc FUN_004ef3bc; 004ff6d0 print_tty; 004ffc9c print_tty2; 005c8510 libc::strlen; 005cc44c FUN_005cc44c; 005cc8d8 libc::strcpy; 005ccb28 FUN_005ccb28; 005cd2a8 libc::snprintf; 0064f704 cell::cellGameContentPermit; 0064f7a4 cell::cellGameBootCheck
// strings: 0065ac04: 'cellGameBootCheck() Error: 0x%x\n' | 0065ac2c: '  get_type = [%d] get_attributes = [0x%08x] dirName = [%s]\n' | 0065ac6c: '  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n' | 0065aca4: 'cellGameContentPermit() Error: 0x%x\n' | 0065afec: '  contentInfoPath:[%s]\n' | 0065b004: '  usrdirPath:[%s]\n' | 0065b01c: '/app_home' | 0065b02c: '/dev_hdd0/game/%s/USRDIR' | 0065b04c: '/dev_hdd0/game/%s' | 0065b064: '/dev_bdvd/PS3_GAME/USRDIR' | 0065b084: '/dev_bdvd/PS3_GAME' | 0065b09c: '/EBOOT.BIN'

undefined8 FUN_004eef00(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  size_t sVar3;
  int iVar4;
  char *__dest;
  char *__dest_00;
  uint local_470;
  uint local_46c;
  undefined1 local_468 [16];
  undefined1 auStack_458 [32];
  char acStack_438 [1032];
  
  uVar1 = cell::cellGameBootCheck(&local_470,&local_46c,local_468,auStack_458);
  if ((int)uVar1 < 0) {
    print_tty("cellGameBootCheck() Error: 0x%x\n",uVar1);
    return uVar1;
  }
  print_tty2("  get_type = [%d] get_attributes = [0x%08x] dirName = [%s]\n",(ulonglong)local_470,
             (ulonglong)local_46c,auStack_458);
  print_tty2("  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n",0,0,0);
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  FUN_004eedc8(param_1);
  __dest = (char *)(param_1 + 0x29);
  __dest_00 = (char *)(param_1 + 0xa9);
  uVar1 = cell::cellGameContentPermit(__dest,__dest_00);
  if ((int)uVar1 < 0) {
    print_tty("cellGameContentPermit() Error: 0x%x\n",uVar1);
    return uVar1;
  }
  print_tty2("  contentInfoPath:[%s]\n",__dest);
  print_tty2("  usrdirPath:[%s]\n",__dest_00);
  uVar2 = FUN_004ef34c();
  sVar3 = libc::strlen("/app_home");
  iVar4 = FUN_005ccb28(__dest_00,"/app_home",sVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        libc::snprintf(__dest_00,"/dev_hdd0/game/%s/USRDIR",(ulonglong)*(uint *)(param_1 + 0x14));
        libc::snprintf(__dest,"/dev_hdd0/game/%s",(ulonglong)*(uint *)(param_1 + 0x14));
        libc::strcpy(acStack_438,__dest_00);
      }
      else if (iVar4 == 2) {
        libc::strcpy(acStack_438,"/dev_bdvd/PS3_GAME/USRDIR");
        libc::strcpy(__dest_00,"/dev_bdvd/PS3_GAME/USRDIR");
        libc::strcpy(__dest,"/dev_bdvd/PS3_GAME");
      }
      goto LAB_004ef128;
    }
  }
  libc::strcpy(acStack_438,__dest_00);
LAB_004ef128:
  FUN_005cc44c(acStack_438,"/EBOOT.BIN");
  FUN_004ef3bc(uVar2,acStack_438);
  return uVar1;
}



//==== 004ef178  ns=Global  size=0xa0
// sig: undefined FUN_004ef178(void)
// callers(1): 004ef218 FUN_004ef218
// callees(5): 004ee818 FUN_004ee818; 004ee958 FUN_004ee958; 004eebfc FUN_004eebfc; 004eef00 FUN_004eef00; 00650744 sys::sys_ppu_thread_exit

void FUN_004ef178(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 < 3) {
    if (0 < iVar1) {
      if (iVar1 < 2) {
        FUN_004eef00(param_1);
      }
      else {
        FUN_004eebfc(param_1);
      }
    }
  }
  else if (iVar1 < 4) {
    FUN_004ee958(param_1);
  }
  else if (iVar1 < 5) {
    FUN_004ee818(param_1);
  }
  param_1[2] = 0;
  *param_1 = 0;
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 004ef218  ns=Global  size=0x30
// sig: undefined FUN_004ef218(void)
// callers(0): 
// callees(2): 004ef178 FUN_004ef178; 00650744 sys::sys_ppu_thread_exit

void FUN_004ef218(undefined4 param_1)

{
  FUN_004ef178(param_1);
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 004ef248  ns=Global  size=0xac
// sig: undefined FUN_004ef248(void)
// callers(0): 
// callees(2): 005c8700 FUN_005c8700; 005d0218 libc::memcmp

longlong FUN_004ef248(longlong param_1)

{
  int iVar1;
  
  iVar1 = libc::memcmp(&DAT_0065b0a8,(void *)param_1,3);
  if (iVar1 == 0) {
    param_1 = FUN_005c8700(param_1 + 3,&DAT_0065b0b0);
    param_1 = param_1 + 1;
  }
  else {
    iVar1 = libc::memcmp(&DAT_0065b0b8,(void *)param_1,3);
    if (iVar1 == 0) {
      param_1 = FUN_005c8700(param_1 + 3,&DAT_0065b0c0);
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}



//==== 004ef2f4  ns=Global  size=0x2c
// sig: undefined FUN_004ef2f4(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void FUN_004ef2f4(undefined8 param_1)

{
  libc::memset(param_1,0,0x300);
  return;
}



//==== 004ef320  ns=Global  size=0x2c
// sig: undefined FUN_004ef320(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void FUN_004ef320(undefined8 param_1)

{
  libc::memset(param_1,0,0x300);
  return;
}



//==== 004ef34c  ns=Global  size=0x70
// sig: undefined FUN_004ef34c(void)
// callers(16): 00010238 boot::PlayLogoMovie; 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 001643e0 space::PlaySpaceMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie; 004d525c FUN_004d525c; 004d5310 FUN_004d5310; 004e92dc idol::SaveDataListCallback; 004e9da0 FUN_004e9da0; 004eef00 FUN_004eef00; 00505bac FUN_00505bac; 00505c6c FUN_00505c6c
// callees(1): 005d0140 libc::memset

void FUN_004ef34c(void)

{
  if (DAT_01592400 == '\0') {
    libc::memset(&DAT_01592408,0,0x300);
    DAT_01592400 = '\x01';
  }
  if (DAT_008fabd8 == (undefined *)0x0) {
    DAT_008fabd8 = &DAT_01592408;
  }
  return;
}



//==== 004ef3bc  ns=Global  size=0x114
// sig: undefined FUN_004ef3bc(void)
// callers(1): 004eef00 FUN_004eef00
// callees(4): 004ffc9c print_tty2; 005c8510 libc::strlen; 005cc8d8 libc::strcpy; 005ccb28 FUN_005ccb28
// strings: 0065b0c4: 'Executing %s\n' | 0065b0d4: '/app_home' | 0065b0e4: '/dev_bdvd'

char * FUN_004ef3bc(char *param_1,undefined8 param_2)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  
  print_tty2("Executing %s\n");
  pcVar4 = (char *)param_2;
  sVar1 = libc::strlen(pcVar4);
  sVar2 = libc::strlen("/app_home");
  iVar3 = FUN_005ccb28(param_2,"/app_home",sVar2);
  if (iVar3 == 0) {
    pcVar4 = libc::strcpy(param_1,"/app_home");
  }
  else {
    sVar2 = libc::strlen("/dev_bdvd");
    iVar3 = FUN_005ccb28(param_2,"/dev_bdvd",sVar2);
    if (iVar3 == 0) {
      libc::strcpy(param_1,pcVar4);
      pcVar4 = (char *)0x0;
      param_1[sVar1 - 10] = '\0';
    }
    else {
      libc::strcpy(param_1,pcVar4);
      pcVar4 = (char *)0x0;
      param_1[sVar1 - 10] = '\0';
    }
  }
  return pcVar4;
}



//==== 004ef4d0  ns=Global  size=0x214
// sig: undefined FUN_004ef4d0(void)
// callers(16): 00010238 boot::PlayLogoMovie; 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 001643e0 space::PlaySpaceMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie; 004d525c FUN_004d525c; 004d5310 FUN_004d5310; 004e92dc idol::SaveDataListCallback; 004e9da0 FUN_004e9da0; 004ef6e4 FUN_004ef6e4; 00505bac FUN_00505bac; 00505c6c FUN_00505c6c
// callees(4): 005c8700 FUN_005c8700; 005cc44c FUN_005cc44c; 005cc8d8 libc::strcpy; 005d0218 libc::memcmp
// strings: 0065b0f0: '/dev_hdd0' | 0065b100: '/dev_hdd1' | 0065b0d4: '/app_home' | 0065b0e4: '/dev_bdvd'

char * FUN_004ef4d0(char *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *__dest;
  
  if (param_2 != (char *)0x0) {
    iVar1 = libc::memcmp(param_2,"/dev_hdd0",9);
    __dest = (char *)param_3;
    if (iVar1 == 0) {
      param_1 = libc::strcpy(__dest,param_2);
    }
    else {
      iVar1 = libc::memcmp(param_2,"/dev_hdd1",9);
      if (iVar1 == 0) {
        param_1 = libc::strcpy(__dest,param_2);
      }
      else {
        iVar1 = libc::memcmp(param_2,"/app_home",9);
        if (iVar1 == 0) {
          param_1 = libc::strcpy(__dest,param_2);
        }
        else {
          iVar1 = libc::memcmp(param_2,"/dev_bdvd",9);
          if (iVar1 == 0) {
            param_1 = libc::strcpy(__dest,param_2);
          }
          else if (*param_2 == '/') {
            libc::strcpy(__dest,param_1);
            FUN_005cc44c(param_3,&DAT_0065b0c0);
            param_1 = (char *)FUN_005cc44c(param_3,param_2 + 1);
          }
          else {
            iVar1 = libc::memcmp(&DAT_0065b0a8,param_2,3);
            if (iVar1 == 0) {
              iVar1 = FUN_005c8700(param_2 + 3,&DAT_0065b0b0);
              param_2 = (char *)(iVar1 + 1);
            }
            else {
              iVar1 = libc::memcmp(&DAT_0065b0b8,param_2,3);
              if (iVar1 == 0) {
                iVar1 = FUN_005c8700(param_2 + 3,&DAT_0065b0c0);
                param_2 = (char *)(iVar1 + 1);
              }
            }
            libc::strcpy(__dest,param_1);
            FUN_005cc44c(param_3,&DAT_0065b0c0);
            param_1 = (char *)FUN_005cc44c(param_3,param_2);
          }
        }
      }
    }
  }
  return param_1;
}



//==== 004ef6e4  ns=Global  size=0x4c
// sig: undefined FUN_004ef6e4(void)
// callers(0): 
// callees(2): 004ef4d0 FUN_004ef4d0; 005cc8d8 libc::strcpy

char * FUN_004ef6e4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char acStack_50 [64];
  
  FUN_004ef4d0(param_1,param_2,acStack_50);
  pcVar1 = libc::strcpy((char *)param_2,acStack_50);
  return pcVar1;
}



//==== 004ef730  ns=Global  size=0x448
// sig: undefined FUN_004ef730(void)
// callers(1): 004efb80 FUN_004efb80
// callees(0): 
// strings: 0065b10c: 'NPWR02335' (raw) | 0065b10d: 'PWR02335' (raw) | 0065b10e: 'WR02335' (raw) | 0065b10f: 'R02335' (raw) | 0065b110: '02335' (raw) | 0065b111: '2335' (raw) | 0065b118: 'NPWR02346' (raw) | 0065b119: 'PWR02346' (raw) | 0065b11a: 'WR02346' (raw) | 0065b11b: 'R02346' (raw) | 0065b11c: '02346' (raw) | 0065b11d: '2346' (raw) | 0065b124: 'NPWR02347' (raw) | 0065b125: 'PWR02347' (raw) | 0065b126: 'WR02347' (raw) | 0065b127: 'R02347' (raw) | 0065b128: '02347' (raw) | 0065b129: '2347' (raw) | 0065b130: 'NPWR02348' (raw) | 0065b131: 'PWR02348' (raw) | 0065b132: 'WR02348' (raw) | 0065b133: 'R02348' (raw) | 0065b134: '02348' (raw) | 0065b135: '2348' (raw)

void FUN_004ef730(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 < 2) {
    if (-1 < param_2) {
      if (param_2 < 1) {
        *(undefined1 *)(param_1 + 4) = 0x4e;
        *(undefined1 *)(param_1 + 5) = 0x50;
        *(undefined1 *)(param_1 + 6) = 0x57;
        *(undefined1 *)(param_1 + 7) = 0x52;
        *(undefined1 *)(param_1 + 8) = 0x30;
        *(undefined1 *)(param_1 + 9) = 0x32;
        *(undefined1 *)(param_1 + 10) = 0x33;
        *(undefined1 *)(param_1 + 0xb) = 0x33;
        lVar4 = 0x50;
        *(undefined1 *)(param_1 + 0xc) = 0x35;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        iVar3 = 0;
        do {
          uVar1 = (&DAT_0065b33d)[iVar3];
          *(undefined1 *)(iVar3 + param_1 + 0x10) = (&DAT_0065b33c)[iVar3];
          *(undefined1 *)(iVar3 + param_1 + 0x11) = uVar1;
          lVar4 = lVar4 + -1;
          iVar3 = iVar3 + 2;
        } while (lVar4 != 0);
        iVar2 = 0x40;
        iVar3 = 0;
        do {
          iVar2 = iVar2 + -1;
          uVar1 = (&DAT_0065b13d)[iVar3];
          *(undefined1 *)(param_1 + iVar3 + 0xb0) = (&DAT_0065b13c)[iVar3];
          *(undefined1 *)(param_1 + iVar3 + 0xb1) = uVar1;
          iVar3 = iVar3 + 2;
        } while (iVar2 != 0);
      }
      else {
        *(undefined1 *)(param_1 + 4) = 0x4e;
        *(undefined1 *)(param_1 + 5) = 0x50;
        *(undefined1 *)(param_1 + 6) = 0x57;
        *(undefined1 *)(param_1 + 7) = 0x52;
        *(undefined1 *)(param_1 + 8) = 0x30;
        *(undefined1 *)(param_1 + 9) = 0x32;
        *(undefined1 *)(param_1 + 10) = 0x33;
        *(undefined1 *)(param_1 + 0xb) = 0x34;
        lVar4 = 0x50;
        *(undefined1 *)(param_1 + 0xc) = 0x36;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        iVar3 = 0;
        do {
          uVar1 = (&DAT_0065b3dd)[iVar3];
          *(undefined1 *)(iVar3 + param_1 + 0x10) = (&DAT_0065b3dc)[iVar3];
          *(undefined1 *)(iVar3 + param_1 + 0x11) = uVar1;
          lVar4 = lVar4 + -1;
          iVar3 = iVar3 + 2;
        } while (lVar4 != 0);
        iVar2 = 0x40;
        iVar3 = 0;
        do {
          iVar2 = iVar2 + -1;
          uVar1 = (&DAT_0065b1bd)[iVar3];
          *(undefined1 *)(param_1 + iVar3 + 0xb0) = (&DAT_0065b1bc)[iVar3];
          *(undefined1 *)(param_1 + iVar3 + 0xb1) = uVar1;
          iVar3 = iVar3 + 2;
        } while (iVar2 != 0);
      }
    }
  }
  else if (param_2 < 3) {
    *(undefined1 *)(param_1 + 4) = 0x4e;
    *(undefined1 *)(param_1 + 5) = 0x50;
    *(undefined1 *)(param_1 + 6) = 0x57;
    *(undefined1 *)(param_1 + 7) = 0x52;
    *(undefined1 *)(param_1 + 8) = 0x30;
    *(undefined1 *)(param_1 + 9) = 0x32;
    *(undefined1 *)(param_1 + 10) = 0x33;
    *(undefined1 *)(param_1 + 0xb) = 0x34;
    lVar4 = 0x50;
    *(undefined1 *)(param_1 + 0xc) = 0x37;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    iVar3 = 0;
    do {
      uVar1 = (&DAT_0065b47d)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0x10) = (&DAT_0065b47c)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0x11) = uVar1;
      lVar4 = lVar4 + -1;
      iVar3 = iVar3 + 2;
    } while (lVar4 != 0);
    iVar2 = 0x40;
    iVar3 = 0;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = (&DAT_0065b23d)[iVar3];
      *(undefined1 *)(param_1 + iVar3 + 0xb0) = (&DAT_0065b23c)[iVar3];
      *(undefined1 *)(param_1 + iVar3 + 0xb1) = uVar1;
      iVar3 = iVar3 + 2;
    } while (iVar2 != 0);
  }
  else if (param_2 < 4) {
    *(undefined1 *)(param_1 + 4) = 0x4e;
    *(undefined1 *)(param_1 + 5) = 0x50;
    *(undefined1 *)(param_1 + 6) = 0x57;
    *(undefined1 *)(param_1 + 7) = 0x52;
    *(undefined1 *)(param_1 + 8) = 0x30;
    *(undefined1 *)(param_1 + 9) = 0x32;
    *(undefined1 *)(param_1 + 10) = 0x33;
    *(undefined1 *)(param_1 + 0xb) = 0x34;
    lVar4 = 0x50;
    *(undefined1 *)(param_1 + 0xc) = 0x38;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    iVar3 = 0;
    do {
      uVar1 = (&DAT_0065b51d)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0x10) = (&DAT_0065b51c)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0x11) = uVar1;
      lVar4 = lVar4 + -1;
      iVar3 = iVar3 + 2;
    } while (lVar4 != 0);
    lVar4 = 0x40;
    iVar3 = 0;
    do {
      uVar1 = (&DAT_0065b2bd)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0xb0) = (&DAT_0065b2bc)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0xb1) = uVar1;
      lVar4 = lVar4 + -1;
      iVar3 = iVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



//==== 004efb80  ns=Global  size=0x244
// sig: undefined FUN_004efb80(void)
// callers(0): 
// callees(12): 004ef730 FUN_004ef730; 004f5b40 FUN_004f5b40; 004f5be4 FUN_004f5be4; 004f75d8 FUN_004f75d8; 004f7d7c FUN_004f7d7c; 004fe52c idol::kalloc; 004ffd4c FUN_004ffd4c; 0064eda4 cell::cellHttpInit; 0064edc4 cell::cellHttpsInit; 0064ede4 cell::cellSslCertificateLoader; 0064ee04 cell::cellSslInit; 0064f4a4 cell::cellSysmoduleLoadModule
// strings: 0065b5bb: '4ERROR: (CNetwork_PS::Initialize()) SSL Failed to Initialize' | 0065b5fc: 'ERROR: (CNetwork_PS::Initialize()) Unable to create http client... (0x%x)\n' | 0065b64c: 'ERROR: (CNetwork_PS::Initialize()) cellSSLCertificationLoader... (0x%x)\n' | 0065b69c: 'ERROR: (CNetwork_PS::Initialize()) creating cellSSLCertificationLoader... (0x%x)\n' | 0065b6f4: 'ERROR: (CNetwork_PS::Initialize()) Unable to create https client... (0x%x)\n'

undefined1
FUN_004efb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 local_30;
  undefined1 local_2c [12];
  
  FUN_004ef730(param_1,param_3);
  cell::cellSysmoduleLoadModule(4);
  cell::cellSysmoduleLoadModule(0x16);
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*boot::g_pHWSystem + 0x1c))(boot::g_pHWSystem,1);
  uVar1 = idol::kalloc(param_2,0x40000);
  iVar3 = cell::cellSslInit(uVar1,0x40000);
  if (iVar3 < 0) {
    FUN_004ffd4c(6,"ERROR: (CNetwork_PS::Initialize()) SSL Failed to Initialize");
    *param_4 = 1;
  }
  uVar1 = idol::kalloc(param_2,0x10000);
  uVar1 = cell::cellHttpInit(uVar1,0x10000);
  if ((int)uVar1 != 0) {
    FUN_004ffd4c(6,"ERROR: (CNetwork_PS::Initialize()) Unable to create http client... (0x%x)\n",
                 uVar1);
    *param_4 = 1;
  }
  uVar1 = cell::cellSslCertificateLoader(0x7fbb7fffff,0,0,&local_30);
  if ((int)uVar1 != 0) {
    FUN_004ffd4c(6,"ERROR: (CNetwork_PS::Initialize()) cellSSLCertificationLoader... (0x%x)\n",uVar1
                );
    *param_4 = 1;
  }
  uVar1 = idol::kalloc(param_2,local_30);
  uVar1 = cell::cellSslCertificateLoader(0x7fbb7fffff,uVar1,local_30,0);
  if ((int)uVar1 != 0) {
    FUN_004ffd4c(6,
                 "ERROR: (CNetwork_PS::Initialize()) creating cellSSLCertificationLoader... (0x%x)\n"
                 ,uVar1);
    *param_4 = 1;
  }
  uVar1 = cell::cellHttpsInit(1,local_2c);
  if ((int)uVar1 != 0) {
    FUN_004ffd4c(6,"ERROR: (CNetwork_PS::Initialize()) Unable to create https client... (0x%x)\n",
                 uVar1);
    *param_4 = 1;
  }
  uVar1 = FUN_004f75d8(param_2);
  uVar2 = FUN_004f5b40(param_2);
  FUN_004f7d7c(uVar1,1);
  FUN_004f5be4(uVar2);
  return *param_4;
}



//==== 004efdc8  ns=Global  size=0x2c
// sig: undefined FUN_004efdc8(void)
// callers(0): 
// callees(1): 00013a20 boot::GameShutDown

void FUN_004efdc8(int param_1)

{
  if (param_1 == 0) {
    boot::GameShutDown();
  }
  return;
}



//==== 004efdf4  ns=sce  size=0x90
// sig: undefined sceNpTrophyDestroyHandle(void)
// callers(1): 00013a20 boot::GameShutDown
// callees(3): 004ffc9c print_tty2; 0064f824 sce::sceNpTrophyDestroyContext; 0064f884 sce::sceNpTrophyDestroyHandle
// strings: 0065b760: 'sceNpTrophyDestroyHandle() failed. status = 0x%x\n' | 0065b798: 'sceNpTrophyDestroyContext() failed. status = 0x%x\n'

void sce::sceNpTrophyDestroyHandle(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x1b0) != 0) && (uVar1 = sceNpTrophyDestroyHandle(), (int)uVar1 < 0)) {
    print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar1);
  }
  if ((*(int *)(param_1 + 0x1ac) != 0) && (uVar1 = sceNpTrophyDestroyContext(), (int)uVar1 < 0)) {
    print_tty2("sceNpTrophyDestroyContext() failed. status = 0x%x\n",uVar1);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



//==== 004efe84  ns=Global  size=0xd0
// sig: undefined FUN_004efe84(void)
// callers(0): 
// callees(3): 004ffc9c print_tty2; 0064f824 sce::sceNpTrophyDestroyContext; 0064f884 sce::sceNpTrophyDestroyHandle
// strings: 0065b760: 'sceNpTrophyDestroyHandle() failed. status = 0x%x\n' | 0065b798: 'sceNpTrophyDestroyContext() failed. status = 0x%x\n' | 0065b7cc: '%s failed: status = 0x%x\n'

undefined8 FUN_004efe84(int param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  
  if (param_4 != '\0') {
    if ((*(int *)(param_1 + 0x1b0) != 0) &&
       (uVar1 = sce::sceNpTrophyDestroyHandle(), (int)uVar1 < 0)) {
      print_tty2("sceNpTrophyDestroyHandle() failed. status = 0x%x\n",uVar1);
    }
    if ((*(int *)(param_1 + 0x1ac) != 0) &&
       (uVar1 = sce::sceNpTrophyDestroyContext(), (int)uVar1 < 0)) {
      print_tty2("sceNpTrophyDestroyContext() failed. status = 0x%x\n",uVar1);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  print_tty2("%s failed: status = 0x%x\n",param_2,param_3);
  return param_3;
}



//==== 004eff54  ns=idol  size=0x140
// sig: undefined RegisterTrophyCtxHandle(void)
// callers(1): 0001401c boot::boot
// callees(5): 004ffc9c print_tty2; 0064f7e4 sce::sceNpTrophyCreateHandle; 0064f844 sce::sceNpTrophyInit; 0064f8c4 sce::sceNpTrophyCreateContext; 00650524 sys::sys_ppu_thread_create
// strings: 0065b7cc: '%s failed: status = 0x%x\n' | 0065b7e8: 'sceNpTrophyInit' | 0065b7f8: 'sceNpTrophyCreateContext' | 0065b818: 'sceNpTrophyCreateHandle' | 0065b830: 'NPTrophyRegister' | 0065b848: 'thr_npTrophy_register'

void idol::RegisterTrophyCtxHandle(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_20 [16];
  
  uVar3 = (ulonglong)DAT_009030e4;
  uVar1 = sce::sceNpTrophyInit(0,0,0xffffffff,0);
  if ((int)uVar1 < 0) {
    print_tty2("%s failed: status = 0x%x\n","sceNpTrophyInit",uVar1);
  }
  uVar1 = sce::sceNpTrophyCreateContext(param_1 + 0x1ac,uVar3 + 4,uVar3 + 0x10,0);
  if ((int)uVar1 < 0) {
    print_tty2("%s failed: status = 0x%x\n","sceNpTrophyCreateContext",uVar1);
  }
  uVar1 = sce::sceNpTrophyCreateHandle(param_1 + 0x1b0);
  if ((int)uVar1 < 0) {
    print_tty2("%s failed: status = 0x%x\n","sceNpTrophyCreateHandle",uVar1);
  }
  iVar2 = sys::sys_ppu_thread_create
                    (auStack_20,&PTR_FUN_00710360,0,0x3e9,0x4000,0,"NPTrophyRegister");
  if (iVar2 != 0) {
    print_tty2("%s failed: status = 0x%x\n","thr_npTrophy_register",0xffffffffffffffff);
  }
  return;
}



