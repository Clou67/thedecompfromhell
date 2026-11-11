//==== 00350984  ns=mobyupdate_helpers  size=0x14
// sig: undefined M343_00350984(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M343_00350984(void)

{
  DAT_00840190 = 0x10000;
  return;
}



//==== 00350998  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_343(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 343 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_343(MobyInstance *moby)

{
  return moby;
}



//==== 003509b0  ns=Global  size=0x134
// sig: undefined FUN_003509b0(void)
// callers(4): 0031a728 mobyupdate_helpers::M253_0031a728; 00373230 mobyupdate_helpers::M435_00373230; 00373720 mobyupdate_unsorted::UpdateMoby_435; 00484300 mobyupdate_unsorted::UpdateMoby_846
// callees(1): 000fcbe8 mobyutil::MB_randRangeFloat

void FUN_003509b0(int param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  auVar9 = ZEXT416(0xffffffff);
  auVar7 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  auVar9._0_4_ = param_5;
  auVar9._4_4_ = param_5;
  auVar9._8_4_ = param_5;
  auVar9._12_4_ = param_5;
  *(undefined1 *)(param_1 + 0x20) = 1;
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar9,0);
  *(undefined4 *)(uVar1 + 0x30) = *param_3;
  *(undefined4 *)(uVar1 + 0x34) = param_3[1];
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  *(undefined4 *)(uVar1 + 0x38) = param_3[2];
  *(undefined4 *)(uVar1 + 0x3c) = param_3[3];
  *(undefined4 *)(uVar1 + 0x10) = *param_4;
  *(undefined4 *)(uVar1 + 0x14) = param_4[1];
  *(undefined4 *)(uVar1 + 0x18) = param_4[2];
  *(undefined4 *)(uVar1 + 0x1c) = param_4[3];
  fVar3 = mobyutil::g_FrameTime;
  auVar9 = loadVectorLeftIndexed(0x70,0x3509a0);
  auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = vectorAddFloatingPoint(auVar8,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar9,auVar7);
  auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
  auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,(ulonglong)uVar1);
  *(undefined4 *)(uVar1 & 0xfffffffc) = uVar2;
  dVar6 = -4.188790321350098;
  dVar5 = 4.188790321350098;
  dVar4 = (double)mobyutil::MB_randRangeFloat(fVar3 * -4.1887903,fVar3 * 4.1887903);
  *(float *)(uVar1 + 0x20) = (float)dVar4;
  dVar4 = (double)mobyutil::MB_randRangeFloat
                            ((float)((double)mobyutil::g_FrameTime * dVar6),
                             (float)((double)mobyutil::g_FrameTime * dVar5));
  *(float *)(uVar1 + 0x24) = (float)dVar4;
  dVar4 = (double)mobyutil::MB_randRangeFloat
                            ((float)((double)mobyutil::g_FrameTime * dVar6),
                             (float)((double)mobyutil::g_FrameTime * dVar5));
  *(float *)(uVar1 + 0x28) = (float)dVar4;
  return;
}



//==== 00350b08  ns=mobyupdate_unsorted  size=0x598
// sig: undefined UpdateMoby_a_lot_13(MobyInstance * moby)
// callers(0): 
// callees(9): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

/* Moby 344
   Moby 547
   Moby 548
   Moby 549
   Moby 550
   Moby 551
   Moby 588
   Moby 589
   Moby 590
   Moby 591
   Moby 592
   Moby 593
   Moby 594
   Moby 595
   Moby 596
   Moby 597
   Moby 598
   Moby 782
   Moby 783
   Moby 784
   Moby 785
   Moby 980
   Moby 981 */

void mobyupdate_unsorted::UpdateMoby_a_lot_13(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  s8 sVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  Vec4 VStack_90;
  float local_80;
  float local_7c;
  float local_78;
  
  lVar7 = (longlong)(int)moby;
  bVar1 = moby->state;
  puVar5 = (undefined4 *)moby->pVar;
  bVar9 = (bVar1 == 0xffffffff) << 1;
  if (bVar1 == 0) {
    if (-1 < (int)(uint)bVar1) {
      if ((moby->drawDistance & 1U) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 2) {
    if ((int)puVar5[1] < 1) {
      fVar4 = (float)puVar5[5];
      fVar2 = (float)puVar5[4];
      fVar3 = (float)puVar5[6];
      local_b0 = (moby->transform).v2.x * fVar3 +
                 (moby->transform).v0.x * fVar2 + (moby->transform).v1.x * fVar4;
      local_ac = (moby->transform).v2.y * fVar3 +
                 (moby->transform).v0.y * fVar2 + (moby->transform).v1.y * fVar4;
      local_a8 = (moby->transform).v2.z * fVar3 +
                 (moby->transform).v0.z * fVar2 + (moby->transform).v1.z * fVar4;
      dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).x,(float)puVar5[8]);
      (moby->rotation).x = (float)dVar10;
      dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).y,(float)puVar5[9]);
      (moby->rotation).y = (float)dVar10;
      dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)puVar5[10]);
      (moby->rotation).z = (float)dVar10;
      fastfunc::FastEulerToMtx1(&VStack_90,lVar7 + 0x40);
      if ((moby->modeBits & MIRROR) != NONE) {
        local_80 = -local_80;
        local_7c = -local_7c;
        local_78 = -local_78;
      }
      fastfunc::FastApplyTransform(&(moby->transform).v0,&VStack_90);
      fVar4 = (float)puVar5[5];
      fVar2 = (float)puVar5[4];
      fVar3 = (float)puVar5[6];
      dVar16 = (double)((moby->transform).v2.x * fVar3 +
                       (moby->transform).v0.x * fVar2 + (moby->transform).v1.x * fVar4);
      dVar14 = (double)((moby->transform).v2.y * fVar3 +
                       (moby->transform).v0.y * fVar2 + (moby->transform).v1.y * fVar4);
      dVar10 = (double)((moby->transform).v2.z * fVar3 +
                       (moby->transform).v0.z * fVar2 + (moby->transform).v1.z * fVar4);
    }
    else {
      mobyfunc::GetBonePosition(lVar7,puVar5[1],&local_b0);
      dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).x,(float)puVar5[8]);
      (moby->rotation).x = (float)dVar10;
      dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).y,(float)puVar5[9]);
      (moby->rotation).y = (float)dVar10;
      dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)puVar5[10]);
      (moby->rotation).z = (float)dVar10;
      fastfunc::FastEulerToMtx1(&VStack_90,lVar7 + 0x40);
      fastfunc::FastApplyTransform(&(moby->transform).v0,&VStack_90);
      mobyfunc::GetBonePosition(lVar7,puVar5[1],&local_a0);
      dVar16 = (double)local_a0;
      dVar14 = (double)local_9c;
      dVar10 = (double)local_98;
    }
    dVar15 = (double)local_b0;
    dVar13 = (double)local_ac;
    dVar12 = (double)local_a8;
    dVar11 = (double)fastfunc::FastIntToDouble(puVar5[3]);
    iVar8 = collproc::CollSphere
                      ((double)(float)(dVar11 * 0.0009765625),&local_a0,&DAT_00350ae4,0,lVar7);
    if ((iVar8 != 0) &&
       (((CollOutput.pMoby == (MobyInstance *)0x0 || (CollOutput.pMoby != (MobyInstance *)puVar5[2])
         ) && (*puVar5 = 0,
              (float)puVar5[0xe] * CollOutput.normal.z +
              (float)puVar5[0xc] * CollOutput.normal.x + (float)puVar5[0xd] * CollOutput.normal.y <
              0.0)))) {
      fastfunc::FastVecNormalize(puVar5 + 0xc,puVar5 + 0xc,0xa10980);
      puVar5[0xc] = (float)puVar5[0xc] * 0.5;
      puVar5[0xd] = (float)puVar5[0xd] * 0.5;
      puVar5[0xe] = (float)puVar5[0xe] * 0.5;
    }
    iVar8 = fastfunc::FastDecTimerS32(puVar5);
    if (iVar8 != 0) {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0xc,0x350ae4);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar18 = vectorMultiplyAddFloatingPoint
                          (auVar20,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar18);
      auVar17 = ZEXT416(0xffffffff);
      auVar26 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = ZEXT416(0xffffffff);
      auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = loadVectorLeftIndexed(0x14,0x350ae4);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar21 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar17 = ZEXT416(0xffffffff);
      auVar22 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = ZEXT416(0xffffffff);
      auVar23 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = ZEXT416(0xfffffff8);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar18 = loadVectorLeftIndexed(0x10,0x350ae4);
      auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
      *puVar5 = 0;
      auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
      auVar24 = vectorReciprocalEstimateFloatingPoint(auVar20);
      auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar20,auVar21);
      auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar19);
      auVar25 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar19 = loadVectorLeftIndexed(0x23,lVar7);
      auVar19 = vectorShiftRightWord
                          (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
      auVar26 = vectorConvertFromUnsignedFixedPointWord(auVar19,0);
      auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar20,auVar21);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar24,auVar17,auVar22);
      auVar17 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar20 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar20,auVar21);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar22,auVar20,auVar23);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                           auVar25);
      auVar18 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                 auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
      if ((bool)(bVar9 >> 1 & 1)) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        auVar17 = vectorConvertToUnsignedFixedPointWordSaturate(auVar20,0);
        auVar17 = vectorSubtractUnsignedWordModulo(auVar19,auVar17);
        auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xff;
        sVar6 = storeVectorElementByteIndexed
                          (auVar17 | auVar17 << 8 | auVar17 << 0x10 | auVar17 << 0x18 |
                           auVar17 << 0x20 | auVar17 << 0x28 | auVar17 << 0x30 | auVar17 << 0x38 |
                           auVar17 << 0x40 | auVar17 << 0x48 | auVar17 << 0x50 | auVar17 << 0x58 |
                           auVar17 << 0x60 | auVar17 << 0x68 | auVar17 << 0x70 | auVar17 << 0x78,
                           0x23,lVar7);
        moby->alpha = sVar6;
      }
    }
    puVar5[0xe] = -(DAT_0071f418 * 10.8 - (float)puVar5[0xe]);
    fVar2 = (moby->pos).x + (float)puVar5[0xc];
    (moby->pos).x = fVar2;
    fVar3 = (moby->pos).y + (float)puVar5[0xd];
    (moby->pos).y = fVar3;
    fVar4 = (float)puVar5[0xe];
    (moby->pos).x = fVar2 + (float)(dVar15 - dVar16);
    (moby->pos).y = fVar3 + (float)(dVar13 - dVar14);
    fVar4 = (moby->pos).z + fVar4 + (float)(dVar12 - dVar10);
    (moby->pos).z = fVar4;
    if (fVar4 < 5.0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 003510a0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_345(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 345 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_345(MobyInstance *moby)

{
  return moby;
}



//==== 003510b0  ns=mobyupdate_helpers  size=0x318
// sig: undefined M346_003510b0(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M346_003510b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar12;
  longlong lVar11;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong unaff_r24;
  int iVar16;
  ulonglong unaff_r25;
  int iVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 in_vr31_32_0;
  int iVar27;
  undefined4 in_vr31_32_1;
  int iVar28;
  undefined4 in_vr31_32_2;
  int iVar29;
  undefined4 in_vr31_32_3;
  int iVar30;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar20 = uVar7 - 0x1c0;
  puVar3 = (ulonglong *)lVar20;
  *puVar3 = uVar7;
  puVar3[0x3a] = in_LR;
  lVar5 = uVar7 - 0x50;
  puVar6 = (undefined4 *)lVar5;
  puVar6[3] = in_vr31_32_3;
  puVar6[2] = in_vr31_32_2;
  puVar6[1] = in_vr31_32_1;
  *puVar6 = in_vr31_32_0;
  puVar3[0x36] = unaff_r30;
  puVar6 = *(undefined4 **)(param_1 + 0x78);
  puVar3[0x33] = unaff_r27;
  puVar3[0x37] = unaff_r31;
  puVar3[0x35] = unaff_r29;
  puVar3[0x34] = unaff_r28;
  puVar3[0x32] = unaff_r26;
  puVar3[0x31] = unaff_r25;
  puVar3[0x30] = unaff_r24;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar3[0x26] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar3[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar3[0x27] = uVar8;
  uVar8 = draw::GetEffectTex(0x29);
  puVar3[0x25] = uVar8;
  pfVar9 = (float *)(uVar7 - 0x150);
  fastfunc::FastMtx4Identity(pfVar9);
  *(undefined4 *)((int)puVar3 + 0xac) = 0x3f800000;
  puVar10 = &DAT_008401c0;
  lVar18 = uVar7 - 0x110;
  *(undefined4 *)(puVar3 + 0x15) = *puVar6;
  puVar13 = &DAT_00840240;
  puVar6 = &DAT_00840244;
  lVar19 = 4;
  lVar11 = lVar18;
  lVar14 = lVar20;
  lVar15 = lVar20;
  do {
    *(undefined4 *)((int)lVar15 + 0xf0) = 0x40808080;
    lVar15 = lVar15 + 4;
    puVar12 = (undefined4 *)lVar11;
    *puVar12 = *puVar10;
    puVar12[1] = puVar10[1];
    puVar12[2] = puVar10[2];
    puVar4 = puVar10 + 3;
    puVar10 = puVar10 + 4;
    puVar12[3] = *puVar4;
    uVar1 = *puVar13;
    lVar11 = lVar11 + 0x10;
    uVar2 = *puVar6;
    puVar13 = puVar13 + 2;
    *(undefined4 *)((int)lVar14 + 0x100) = uVar1;
    puVar6 = puVar6 + 2;
    *(undefined4 *)((int)lVar14 + 0x104) = uVar2;
    lVar14 = lVar14 + 8;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  auVar24 = loadVectorLeftIndexed(lVar5,0x3510a8);
  iVar16 = 0x82;
  iVar30 = 2;
  iVar28 = 2;
  iVar29 = 2;
  iVar27 = 2;
  auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  do {
    auVar26 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    iVar17 = 0x154;
    auVar22 = loadVectorLeftIndexed(4,0x3510a8);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    do {
      uVar1 = DAT_008401c4;
      auVar21 = vectorConvertFromSignedFixedPointWord(auVar22,0);
      *(undefined4 *)(puVar3 + 0x16) = DAT_008401c0;
      uVar2 = DAT_008401c8;
      *(undefined4 *)((int)puVar3 + 0xb4) = uVar1;
      uVar1 = DAT_008401cc;
      *(undefined4 *)(puVar3 + 0x17) = uVar2;
      uVar2 = DAT_008401d0;
      *(undefined4 *)((int)puVar3 + 0xbc) = uVar1;
      uVar1 = DAT_008401d4;
      *(undefined4 *)(puVar3 + 0x18) = uVar2;
      uVar2 = DAT_008401d8;
      *(undefined4 *)((int)puVar3 + 0xc4) = uVar1;
      uVar1 = DAT_008401dc;
      *(undefined4 *)(puVar3 + 0x19) = uVar2;
      uVar2 = DAT_008401e0;
      *(undefined4 *)((int)puVar3 + 0xcc) = uVar1;
      uVar1 = DAT_008401e4;
      *(undefined4 *)(puVar3 + 0x1a) = uVar2;
      uVar2 = DAT_008401e8;
      *(undefined4 *)((int)puVar3 + 0xd4) = uVar1;
      uVar1 = DAT_008401ec;
      *(undefined4 *)(puVar3 + 0x1b) = uVar2;
      uVar2 = DAT_008401f0;
      *(undefined4 *)((int)puVar3 + 0xdc) = uVar1;
      uVar1 = DAT_008401f4;
      *(undefined4 *)(puVar3 + 0x1c) = uVar2;
      uVar2 = DAT_008401f8;
      *(undefined4 *)((int)puVar3 + 0xe4) = uVar1;
      uVar1 = DAT_008401fc;
      *(undefined4 *)(puVar3 + 0x1d) = uVar2;
      *(undefined4 *)((int)puVar3 + 0xec) = uVar1;
      uVar1 = storeVectorElementWordIndexed(auVar26,0xa0,lVar20);
      *(undefined4 *)(puVar3 + 0x14) = uVar1;
      uVar2 = EffectTexHeaders;
      uVar1 = storeVectorElementWordIndexed(auVar21,0xa4,lVar20);
      *(undefined4 *)((int)puVar3 + 0xa4) = uVar1;
      draw::FastDrawQuad(uVar7 - 0x110,uVar7 - 0x150,0,uVar2,9);
      iVar17 = iVar17 + 2;
      auVar21._0_4_ = auVar22._0_4_ + iVar27;
      auVar21._8_8_ = auVar22._8_8_;
      auVar21._4_4_ = auVar22._4_4_ + iVar28;
      auVar23._0_8_ = auVar21._0_8_;
      auVar23._12_4_ = auVar22._12_4_;
      auVar23._8_4_ = auVar22._8_4_ + iVar29;
      auVar22._0_12_ = auVar23._0_12_;
      auVar22._12_4_ = auVar23._12_4_ + iVar30;
    } while (iVar17 < 0x18b);
    iVar16 = iVar16 + 2;
    auVar26._0_4_ = auVar24._0_4_ + iVar27;
    auVar26._8_8_ = auVar24._8_8_;
    auVar26._4_4_ = auVar24._4_4_ + iVar28;
    auVar25._0_8_ = auVar26._0_8_;
    auVar25._12_4_ = auVar24._12_4_;
    auVar25._8_4_ = auVar24._8_4_ + iVar29;
    auVar24._0_12_ = auVar25._0_12_;
    auVar24._12_4_ = auVar25._12_4_ + iVar30;
  } while (iVar16 < 0xb9);
  fastfunc::FastMtx4Identity(pfVar9);
  lVar20 = 4;
  puVar6 = &DAT_00840200;
  do {
    puVar13 = (undefined4 *)lVar18;
    *puVar13 = *puVar6;
    puVar13[1] = puVar6[1];
    puVar13[2] = puVar6[2];
    puVar10 = puVar6 + 3;
    puVar6 = puVar6 + 4;
    puVar13[3] = *puVar10;
    lVar18 = lVar18 + 0x10;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  return;
}



//==== 003513c8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_346(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 346 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_346(MobyInstance *moby)

{
  return moby;
}



//==== 003513cc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M347_003513cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M347_003513cc(void)

{
  DAT_008402ac = 0x10000;
  return;
}



//==== 003513e0  ns=mobyupdate_helpers  size=0x160
// sig: undefined M347_003513e0(void)
// callers(1): 003516d0 mobyupdate_unsorted::UpdateMoby_347
// callees(0): 

void mobyupdate_helpers::M347_003513e0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  Spline *pSVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  short sVar11;
  ushort *puVar10;
  MobyInstance *pMVar12;
  longlong lVar13;
  
  lVar9 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  sVar11 = (short)*(undefined4 *)(iVar2 + 0x80);
  if (sVar11 != -1) {
    iVar3 = (int)((longlong)sVar11 << 2);
    puVar10 = *(ushort **)((int)&mobyutil::g_MobyGroups + iVar3);
    if (puVar10 != (ushort *)0x0) {
      lVar13 = 0;
      do {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        lVar13 = lVar13 + ((LZCOUNT(0x733 - (uint)MobyInstance[uVar1 & 0x7fff].oClass) << 0x3a) >>
                           0x3f & (short)((short)lVar13 + 1) - lVar13);
      } while (-1 < (short)uVar1);
      pSVar6 = Splines[*(int *)(iVar2 + 0x84)];
      puVar10 = *(ushort **)((int)&mobyutil::g_MobyGroups + iVar3);
      iVar3 = pSVar6->cnt;
      pMVar12 = MobyInstance;
      do {
        uVar7 = *puVar10 & 0x7fff;
        if (pMVar12[uVar7].oClass == BLARG_SHIP_0733) {
          iVar8 = (int)(lVar9 << 4);
          pvVar4 = pMVar12[uVar7].pVar;
          pMVar12[uVar7].pos.x = *(f32 *)((int)&pSVar6->points[0].x + iVar8);
          pMVar12[uVar7].pos.y = *(f32 *)((int)&pSVar6->points[0].y + iVar8);
          pMVar12[uVar7].pos.z = *(f32 *)((int)&pSVar6->points[0].z + iVar8);
          pMVar12[uVar7].pos.w = *(f32 *)((int)&pSVar6->points[0].w + iVar8);
          uVar5 = *(undefined4 *)(iVar2 + 0x84);
          *(int *)((int)pvVar4 + 100) = (int)lVar9;
          *(undefined4 *)((int)pvVar4 + 0x60) = uVar5;
          lVar9 = (longlong)(short)((short)lVar9 + (short)(iVar3 / (int)lVar13));
          *(undefined4 *)((int)pvVar4 + 0x68) = 0;
          pMVar12 = MobyInstance;
        }
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}



//==== 00351548  ns=mobyupdate_helpers  size=0x13c
// sig: undefined M347_00351548(void)
// callers(1): 003516d0 mobyupdate_unsorted::UpdateMoby_347
// callees(4): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M347_00351548(MobyInstance *param_1)

{
  short sVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  if (param_1->state != '\0') {
    dVar7 = 0.0;
    local_1c = 0.0;
    iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
    if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
       (sVar1 = *(short *)(*(int *)(iVar5 + 0x20) + 0xa6), sVar1 != 0x127 && sVar1 != 0x3f1)) {
      iVar5 = 0;
    }
    mobyutil::MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
    if ((local_20 != 1) && (param_1->state != '\x04')) {
      MVar2 = param_1->modeBits;
      fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
      *(float *)((int)pvVar3 + 0x20) = fVar4;
      if ((double)fVar4 <= dVar7) {
        param_1->state = '\x04';
        param_1->modeBits =
             MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      *(undefined1 *)((int)pvVar3 + 0x67) = 0xf0;
      mobyutil::MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  }
  return;
}



//==== 003516d0  ns=mobyupdate_unsorted  size=0x1758
// sig: undefined UpdateMoby_347(MobyInstance * moby)
// callers(0): 
// callees(19): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000f1238 mobyfunc::GetMobyJointsWorldPos; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0010a2e0 mobyutil::OrganicDeltAng; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001118d8 mobyutil::MB_getTarget; 001167c8 mobyutil::MB_UpdateManipulatorRot; 0011a560 mobyutil::MB_SpawnDebrisMoby; 00128248 partupd::SpawnPart_27; 0015d12c sound::PlayMobySound; 0025c7f8 FUN_0025c7f8; 002c4728 FUN_002c4728; 003513e0 mobyupdate_helpers::M347_003513e0; 00351548 mobyupdate_helpers::M347_00351548; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 00351688: '?fff?' (raw)

/* Moby 347 */

void mobyupdate_unsorted::UpdateMoby_347(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  float fVar12;
  Cuboid *pCVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar18;
  longlong lVar16;
  longlong lVar17;
  char cVar19;
  longlong lVar20;
  ulonglong uVar21;
  float *pfVar23;
  longlong lVar22;
  undefined8 in_r9;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  Cuboid *pCVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar29;
  ulonglong in_f24;
  double dVar30;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  undefined8 uVar39;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x370;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar14;
  puVar11[0x70] = in_LR;
  puVar11[100] = in_f22;
  puVar11[0x65] = in_f23;
  puVar11[0x66] = in_f24;
  puVar11[0x67] = in_f25;
  puVar11[0x68] = in_f26;
  puVar11[0x69] = in_f27;
  puVar11[0x6a] = in_f28;
  puVar11[0x6b] = in_f29;
  puVar11[0x6c] = in_f30;
  puVar11[0x6d] = in_f31;
  puVar11[99] = unaff_r31;
  puVar11[0x62] = unaff_r30;
  puVar11[0x61] = unaff_r29;
  puVar11[0x60] = unaff_r28;
  puVar11[0x5f] = unaff_r27;
  pvVar8 = moby->pVar;
  mobyupdate_helpers::M347_00351548();
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    lVar17 = lVar15 + 0x10;
    uVar39 = 0;
    puVar11[0xe] = ZEXT48(&DAT_00a15d30);
    puVar11[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(0,lVar15,0x63a,lVar17,lVar15 + 0x40,0,0,in_r9,&DAT_00a15d30);
    puVar11[0xe] = ZEXT48(&DAT_00a15d30);
    puVar11[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar39,lVar15,0x63b,lVar17,lVar15 + 0x40,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnExplosionSparks(0x4024000000000000,0x402a000000000000,lVar15,lVar17);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == '\x03') {
    if (((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) &&
       (*(short *)(DAT_0096b2d0 + 0xa6) == 0x563)) {
      mobyfunc::GetMobyJointsWorldPos(lVar15,2,&DAT_00840340,uVar14 - 0x260);
      mobyutil::MB_getTarget(0x4080000000000000,lVar15,0x350000,uVar14 - 0x240);
      dVar36 = (double)(*(float *)(puVar11 + 0x26) - *(float *)(puVar11 + 0x22));
      fVar2 = *(float *)((int)puVar11 + 0x134) - *(float *)((int)puVar11 + 0x114);
      dVar35 = (double)fVar2;
      *(undefined4 *)(puVar11 + 0x18) = *(undefined4 *)(puVar11 + 0x24);
      *(float *)((int)puVar11 + 0x1a4) = *(float *)(puVar11 + 0x26) - *(float *)(puVar11 + 0x22);
      *(undefined4 *)((int)puVar11 + 0xc4) = *(undefined4 *)((int)puVar11 + 0x124);
      *(undefined4 *)(puVar11 + 0x19) = *(undefined4 *)(puVar11 + 0x25);
      *(undefined4 *)((int)puVar11 + 0xcc) = *(undefined4 *)((int)puVar11 + 300);
      *(float *)(puVar11 + 0x35) = fVar2;
      dVar33 = (double)(*(float *)(puVar11 + 0x27) - *(float *)(puVar11 + 0x23));
      *(float *)((int)puVar11 + 0x1ac) = (float)(ABS(dVar36) - ABS(dVar35));
      dVar30 = 0.0;
      uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x1a4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)((int)puVar11 + 0x1a4));
      if (*(float *)((int)puVar11 + 0x1ac) - 0.0 < 0.0) {
        dVar26 = ABS(dVar35);
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar37 = ABS((double)*(float *)(puVar11 + 0x35));
      if (*(float *)((int)puVar11 + 0x1ac) - 0.0 < 0.0) {
        dVar37 = ABS(dVar36);
      }
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar38 = dVar30;
      if (0.0 < dVar26) {
        lVar16 = uVar14 - 0x360;
        lVar22 = uVar14 - 0x120;
        lVar20 = uVar14 - 0x130;
        lVar25 = 2;
        fVar5 = (float)(dVar37 - dVar26) / (float)(dVar37 + dVar26);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x24c) = fVar5;
        *(float *)((int)puVar11 + 0x244) = fVar5;
        *(float *)(puVar11 + 0x49) = fVar5;
        *(float *)(puVar11 + 0x48) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x244) = *(float *)((int)puVar11 + 0x244) * fVar6;
        *(float *)(puVar11 + 0x49) = *(float *)(puVar11 + 0x49) * fVar5;
        *(float *)((int)puVar11 + 0x24c) = *(float *)((int)puVar11 + 0x24c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar16 + 0x240) = *(float *)((int)lVar16 + 0x230) * fVar5 * fVar5;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x130;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x240) = *(float *)((int)lVar16 + 0x240) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        dVar26 = dVar30;
        do {
          iVar18 = (int)lVar16;
          iVar9 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x240)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar38 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
      }
      mobyutil::OrganicDeltAng
                ((float)dVar38,DAT_0071f418 * 0.5235988,DAT_0071f418 * 0.5235988,
                 mobyutil::g_FrameTime * 1.0471976,&(moby->rotation).z,0x351684,
                 (float *)((int)pvVar8 + 0x78));
      *(float *)((int)puVar11 + 0x19c) = (float)dVar33;
      dVar37 = ABS(dVar33);
      fVar2 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar35 * dVar35)));
      dVar38 = (double)fVar2;
      dVar36 = ABS(dVar38);
      *(float *)(puVar11 + 0x33) = fVar2;
      dVar35 = (double)(float)(dVar36 - dVar37);
      *(float *)(puVar11 + 0x34) = (float)(dVar36 - dVar37);
      uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x33) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x34) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x19c) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)(puVar11 + 0x33));
      if ((double)*(float *)(puVar11 + 0x34) - dVar30 < 0.0) {
        dVar26 = dVar37;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar29 = ABS((double)*(float *)((int)puVar11 + 0x19c));
      if ((double)*(float *)(puVar11 + 0x34) - dVar30 < 0.0) {
        dVar29 = dVar36;
      }
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar31 = dVar30;
      if (dVar30 < dVar26) {
        lVar16 = uVar14 - 0x360;
        lVar20 = uVar14 - 0x150;
        lVar22 = uVar14 - 0x140;
        lVar25 = 2;
        fVar5 = (float)(dVar29 - dVar26) / (float)(dVar29 + dVar26);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x22c) = fVar5;
        *(float *)((int)puVar11 + 0x224) = fVar5;
        *(float *)(puVar11 + 0x45) = fVar5;
        *(float *)(puVar11 + 0x44) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x224) = *(float *)((int)puVar11 + 0x224) * fVar6;
        *(float *)(puVar11 + 0x45) = *(float *)(puVar11 + 0x45) * fVar5;
        *(float *)((int)puVar11 + 0x22c) = *(float *)((int)puVar11 + 0x22c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar16 + 0x220) = *(float *)((int)lVar16 + 0x210) * fVar5 * fVar5;
          iVar18 = (int)lVar20;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x150;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x220) = *(float *)((int)lVar16 + 0x220) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        dVar26 = dVar30;
        do {
          iVar18 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          iVar9 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x220)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar31 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
      }
      *(float *)((int)pvVar8 + 0xf4) = (float)-dVar31;
      mobyutil::MB_UpdateManipulatorRot
                ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),lVar15,
                 (int)pvVar8 + 0x90,0);
      fVar2 = *(float *)((int)pvVar8 + 0xd4);
      *(float *)((int)puVar11 + 0x18c) = (float)dVar38;
      *(float *)((int)puVar11 + 0x194) = (float)dVar35;
      *(float *)(puVar11 + 0x32) = (float)dVar33;
      uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x18c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x194) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x32) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)((int)puVar11 + 0x18c));
      if ((double)*(float *)((int)puVar11 + 0x194) - dVar30 < 0.0) {
        dVar26 = dVar37;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar33 = ABS((double)*(float *)(puVar11 + 0x32));
      if ((double)*(float *)((int)puVar11 + 0x194) - dVar30 < 0.0) {
        dVar33 = dVar36;
      }
      dVar35 = dVar30;
      if (dVar30 < dVar26) {
        lVar16 = uVar14 - 0x360;
        lVar22 = uVar14 - 0x160;
        lVar20 = uVar14 - 0x170;
        lVar25 = 2;
        fVar6 = (float)(dVar33 - dVar26) / (float)(dVar33 + dVar26);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x20c) = fVar6;
        *(float *)((int)puVar11 + 0x204) = fVar6;
        *(float *)(puVar11 + 0x41) = fVar6;
        *(float *)(puVar11 + 0x40) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar11 + 0x204) = *(float *)((int)puVar11 + 0x204) * fVar7;
        *(float *)(puVar11 + 0x41) = *(float *)(puVar11 + 0x41) * fVar6;
        *(float *)((int)puVar11 + 0x20c) = *(float *)((int)puVar11 + 0x20c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar16 + 0x200) = *(float *)((int)lVar16 + 0x1f0) * fVar6 * fVar6;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x170;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar6 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x200) = *(float *)((int)lVar16 + 0x200) * fVar6;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        dVar26 = dVar30;
        do {
          iVar18 = (int)lVar16;
          iVar9 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x200)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar35 = (double)((float)(dVar26 + 0.7853981852531433) * fVar5 + fVar3);
      }
      dVar26 = (double)fastfunc::FastSubRots(fVar2,(float)-dVar35);
      iVar18 = fastfunc::FastDecTimerS32((int)pvVar8 + 0x74);
      if ((iVar18 != 0) && (dVar33 = 0.03490658476948738, dVar26 < 0.03490658476948738)) {
        fVar2 = *(float *)(puVar11 + 0x26) - (moby->pos).x;
        fVar3 = *(float *)((int)puVar11 + 0x134) - (moby->pos).y;
        dVar35 = ABS((double)fVar2);
        dVar36 = ABS((double)fVar3);
        *(float *)(puVar11 + 0x30) = fVar2;
        *(float *)((int)puVar11 + 0x184) = fVar3;
        fVar2 = (moby->rotation).z;
        *(float *)(puVar11 + 0x31) = (float)(dVar35 - dVar36);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x30) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x31) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x184) >> 0x1d) & 4;
        dVar26 = ABS((double)*(float *)(puVar11 + 0x30));
        if ((double)*(float *)(puVar11 + 0x31) - dVar30 < 0.0) {
          dVar26 = dVar36;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar36 = ABS((double)*(float *)((int)puVar11 + 0x184));
        if ((double)*(float *)(puVar11 + 0x31) - dVar30 < 0.0) {
          dVar36 = dVar35;
        }
        fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar35 = dVar30;
        if (dVar30 < dVar26) {
          lVar16 = uVar14 - 0x360;
          lVar20 = uVar14 - 400;
          lVar22 = uVar14 - 0x180;
          lVar25 = 2;
          fVar6 = (float)(dVar36 - dVar26) / (float)(dVar36 + dVar26);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar11 + 0x1ec) = fVar6;
          *(float *)((int)puVar11 + 0x1e4) = fVar6;
          *(float *)(puVar11 + 0x3d) = fVar6;
          *(float *)(puVar11 + 0x3c) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0x1e4) = *(float *)((int)puVar11 + 0x1e4) * fVar7;
          *(float *)(puVar11 + 0x3d) = *(float *)(puVar11 + 0x3d) * fVar6;
          *(float *)((int)puVar11 + 0x1ec) = *(float *)((int)puVar11 + 0x1ec) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar16 + 0x1e0) = *(float *)((int)lVar16 + 0x1d0) * fVar6 * fVar6;
            iVar18 = (int)lVar20;
            lVar16 = lVar16 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar22 = uVar14 - 400;
          pfVar23 = (float *)&DAT_007358e0;
          lVar16 = lVar17;
          lVar20 = lVar22;
          do {
            fVar6 = *pfVar23;
            fVar7 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar16 + 0x1e0) = *(float *)((int)lVar16 + 0x1e0) * fVar6;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar16 = 2;
          dVar26 = dVar30;
          do {
            iVar18 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            iVar9 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x1e0)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar35 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar5);
        }
        dVar26 = (double)fastfunc::FastSubRots(fVar2,(float)dVar35);
        if ((dVar26 < dVar33) &&
           (iVar18 = collproc::CollLine(uVar14 - 0x2b0,uVar14 - 0x240,2,DAT_0096b2d0,0), iVar18 == 0
           )) {
          *(undefined4 *)((int)puVar11 + 0xdc) = 0;
          *(undefined4 *)(puVar11 + 0x1b) = 0;
          *(undefined4 *)((int)puVar11 + 0xd4) = 0;
          *(undefined4 *)(puVar11 + 0x1a) = 0;
          fVar3 = (float)((double)*(float *)((int)puVar11 + 0x124) -
                         (double)*(float *)((int)puVar11 + 0x114));
          fVar5 = (float)((double)*(float *)(puVar11 + 0x24) - (double)*(float *)(puVar11 + 0x22));
          fVar6 = (float)((double)*(float *)(puVar11 + 0x25) - (double)*(float *)(puVar11 + 0x23));
          *(undefined4 *)((int)puVar11 + 0xec) = *(undefined4 *)((int)puVar11 + 300);
          dVar33 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
          fVar2 = (float)(250.0 / dVar33);
          dVar26 = dVar30;
          if (dVar30 - dVar33 < 0.0) {
            dVar26 = (double)(fVar6 * fVar2);
          }
          dVar35 = dVar30;
          if (dVar30 - dVar33 < 0.0) {
            dVar35 = (double)(fVar3 * fVar2);
          }
          dVar36 = dVar30;
          if (dVar30 - dVar33 < 0.0) {
            dVar36 = (double)(fVar5 * fVar2);
          }
          if (dVar33 - dVar30 < 0.0) {
            dVar26 = (double)(fVar6 * fVar2);
          }
          if (dVar33 - dVar30 < 0.0) {
            dVar35 = (double)(fVar3 * fVar2);
          }
          if (dVar33 - dVar30 < 0.0) {
            dVar36 = (double)(fVar5 * fVar2);
          }
          *(float *)(puVar11 + 0x1d) = (float)(dVar26 + (double)*(float *)(puVar11 + 0x25));
          *(float *)((int)puVar11 + 0xe4) =
               (float)(dVar35 + (double)*(float *)((int)puVar11 + 0x124));
          *(float *)(puVar11 + 0x1c) = (float)(dVar36 + (double)*(float *)(puVar11 + 0x24));
          iVar18 = partupd::SpawnPart_27
                             (0x413339e000000000,uVar14 - 0x250,uVar14 - 0x2a0,0xffffffff80ff8f6f,3)
          ;
          if (iVar18 != 0) {
            cVar19 = fastfunc::FastDoubleToInt(0x4010000000000000);
            *(char *)(iVar18 + 9) = cVar19 + 'p';
          }
          puVar11[0x5c] = (longlong)(int)(animationSpeed * 90.5);
          uVar10 = *(uint *)((int)puVar11 + 0x2e4);
          *(uint *)((int)pvVar8 + 0x74) =
               ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0);
          sound::PlayMobySound(0,0,moby);
          FUN_0025c7f8((double)(mobyutil::g_FrameTime * 60.0),lVar15,&DAT_00720000,uVar14 - 0x2b0,
                       uVar14 - 0x290);
        }
      }
      if ((*(int *)((int)pvVar8 + 0x7c) != 0) && (iVar18 = mobyutil::MB_randInt(500), iVar18 == 0))
      {
        FUN_002c4728(*(undefined4 *)((int)pvVar8 + 0x7c));
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x02') {
    if (g_onMagnerail == 0) {
      moby->state = '\x01';
    }
    mobyfunc::GetMobyJointsWorldPos(lVar15,2,&DAT_00840340,uVar14 - 0x280);
    dVar30 = 0.0;
    dVar37 = 1.0;
    pCVar24 = Cuboids + *(int *)((int)pvVar8 + 0x70);
    dVar26 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
    pCVar13 = Cuboids;
    iVar18 = *(int *)((int)pvVar8 + 0x70);
    dVar38 = (double)(pCVar24->matrix).v0.w;
    dVar36 = (double)(float)((double)(pCVar24->matrix).v0.x * dVar26 + (double)Cuboids[iVar18].pos.x
                            );
    dVar35 = (double)(float)((double)(pCVar24->matrix).v0.y * dVar26 + (double)Cuboids[iVar18].pos.y
                            );
    dVar33 = (double)(float)((double)(pCVar24->matrix).v0.z * dVar26 + (double)Cuboids[iVar18].pos.z
                            );
    dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar37);
    pCVar24 = Cuboids;
    dVar36 = (double)(float)((double)pCVar13[iVar18].matrix.v1.x * dVar26 + dVar36);
    iVar9 = *(int *)((int)pvVar8 + 0x70);
    dVar35 = (double)(float)((double)pCVar13[iVar18].matrix.v1.y * dVar26 + dVar35);
    dVar33 = (double)(float)((double)pCVar13[iVar18].matrix.v1.z * dVar26 + dVar33);
    dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar37);
    fVar2 = pCVar24[iVar9].matrix.v2.z;
    fVar3 = (float)((double)pCVar24[iVar9].matrix.v2.x * dVar26 + dVar36) -
            *(float *)(puVar11 + 0x1e);
    dVar36 = (double)fVar3;
    fVar5 = (float)((double)pCVar24[iVar9].matrix.v2.y * dVar26 + dVar35) -
            *(float *)((int)puVar11 + 0xf4);
    dVar35 = (double)fVar5;
    *(float *)((int)puVar11 + 0x1d4) = fVar3;
    *(float *)(puVar11 + 0x3b) = fVar5;
    dVar33 = (double)((float)((double)fVar2 * dVar26 + dVar33) - *(float *)(puVar11 + 0x1f));
    *(float *)((int)puVar11 + 0x1dc) = (float)(ABS(dVar36) - ABS(dVar35));
    *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(puVar11 + 0x20);
    *(undefined4 *)((int)puVar11 + 0xa4) = *(undefined4 *)((int)puVar11 + 0x104);
    *(undefined4 *)(puVar11 + 0x15) = *(undefined4 *)(puVar11 + 0x21);
    *(undefined4 *)((int)puVar11 + 0xac) = *(undefined4 *)((int)puVar11 + 0x10c);
    uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x1d4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x1dc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x3b) >> 0x1d) & 4;
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar26 = ABS((double)*(float *)((int)puVar11 + 0x1d4));
    if ((double)*(float *)((int)puVar11 + 0x1dc) - dVar30 < 0.0) {
      dVar26 = ABS(dVar35);
    }
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar37 = ABS((double)*(float *)(puVar11 + 0x3b));
    if ((double)*(float *)((int)puVar11 + 0x1dc) - dVar30 < 0.0) {
      dVar37 = ABS(dVar36);
    }
    dVar29 = dVar30;
    if (dVar30 < dVar26) {
      lVar16 = uVar14 - 0x360;
      lVar22 = uVar14 - 0xa0;
      lVar20 = uVar14 - 0xb0;
      lVar25 = 2;
      fVar5 = (float)(dVar37 - dVar26) / (float)(dVar37 + dVar26);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0x2cc) = fVar5;
      *(float *)((int)puVar11 + 0x2c4) = fVar5;
      *(float *)(puVar11 + 0x59) = fVar5;
      *(float *)(puVar11 + 0x58) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x2c4) = *(float *)((int)puVar11 + 0x2c4) * fVar6;
      *(float *)(puVar11 + 0x59) = *(float *)(puVar11 + 0x59) * fVar5;
      *(float *)((int)puVar11 + 0x2cc) = *(float *)((int)puVar11 + 0x2cc) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x2c0) = *(float *)((int)lVar16 + 0x2b0) * fVar5 * fVar5;
        iVar18 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar14 - 0xb0;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar22;
      do {
        fVar5 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x2c0) = *(float *)((int)lVar16 + 0x2c0) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      lVar16 = lVar17;
      dVar26 = dVar30;
      do {
        iVar18 = (int)lVar16;
        iVar9 = (int)lVar22;
        lVar16 = lVar16 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x2c0)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar29 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar29,DAT_0071f418 * 0.5235988,DAT_0071f418 * 0.5235988,
               mobyutil::g_FrameTime * 1.0471976,&(moby->rotation).z,0x351684,
               (float *)((int)pvVar8 + 0x78));
    *(float *)((int)puVar11 + 0x1cc) = (float)dVar33;
    dVar31 = ABS(dVar33);
    dVar29 = (double)(float)(dVar36 * dVar36 + (double)(float)(dVar35 * dVar35));
    dVar34 = (double)(float)SQRT(dVar29);
    dVar32 = ABS(dVar34);
    *(float *)(puVar11 + 0x39) = (float)SQRT(dVar29);
    dVar37 = (double)(float)(dVar32 - dVar31);
    *(float *)(puVar11 + 0x3a) = (float)(dVar32 - dVar31);
    uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x39) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x3a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x1cc) >> 0x1d) & 4;
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar26 = ABS((double)*(float *)(puVar11 + 0x39));
    if ((double)*(float *)(puVar11 + 0x3a) - dVar30 < 0.0) {
      dVar26 = dVar31;
    }
    dVar28 = ABS((double)*(float *)((int)puVar11 + 0x1cc));
    if ((double)*(float *)(puVar11 + 0x3a) - dVar30 < 0.0) {
      dVar28 = dVar32;
    }
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar27 = dVar30;
    if (dVar30 < dVar26) {
      lVar16 = uVar14 - 0x360;
      lVar22 = uVar14 - 0xc0;
      lVar20 = uVar14 - 0xd0;
      lVar25 = 2;
      fVar5 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0x2ac) = fVar5;
      *(float *)((int)puVar11 + 0x2a4) = fVar5;
      *(float *)(puVar11 + 0x55) = fVar5;
      *(float *)(puVar11 + 0x54) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x2a4) = *(float *)((int)puVar11 + 0x2a4) * fVar6;
      *(float *)(puVar11 + 0x55) = *(float *)(puVar11 + 0x55) * fVar5;
      *(float *)((int)puVar11 + 0x2ac) = *(float *)((int)puVar11 + 0x2ac) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x2a0) = *(float *)((int)lVar16 + 0x290) * fVar5 * fVar5;
        iVar18 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar14 - 0xd0;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar22;
      do {
        fVar5 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x2a0) = *(float *)((int)lVar16 + 0x2a0) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      lVar16 = lVar17;
      dVar26 = dVar30;
      do {
        iVar18 = (int)lVar16;
        iVar9 = (int)lVar22;
        lVar16 = lVar16 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x2a0)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar27 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
    }
    *(float *)((int)pvVar8 + 0xf4) = (float)-dVar27;
    mobyutil::MB_UpdateManipulatorRot
              ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),lVar15,(int)pvVar8 + 0x90,
               0);
    fVar2 = *(float *)((int)pvVar8 + 0xd4);
    *(float *)((int)puVar11 + 0x1bc) = (float)dVar34;
    *(float *)((int)puVar11 + 0x1c4) = (float)dVar37;
    *(float *)(puVar11 + 0x38) = (float)dVar33;
    uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x1bc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x1c4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x38) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)((int)puVar11 + 0x1bc));
    if ((double)*(float *)((int)puVar11 + 0x1c4) - dVar30 < 0.0) {
      dVar26 = dVar31;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar37 = ABS((double)*(float *)(puVar11 + 0x38));
    if ((double)*(float *)((int)puVar11 + 0x1c4) - dVar30 < 0.0) {
      dVar37 = dVar32;
    }
    fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar31 = dVar30;
    if (dVar30 < dVar26) {
      lVar16 = uVar14 - 0x360;
      lVar20 = uVar14 - 0xf0;
      lVar22 = uVar14 - 0xe0;
      lVar25 = 2;
      fVar6 = (float)(dVar37 - dVar26) / (float)(dVar37 + dVar26);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x28c) = fVar6;
      *(float *)((int)puVar11 + 0x284) = fVar6;
      *(float *)(puVar11 + 0x51) = fVar6;
      *(float *)(puVar11 + 0x50) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar11 + 0x284) = *(float *)((int)puVar11 + 0x284) * fVar7;
      *(float *)(puVar11 + 0x51) = *(float *)(puVar11 + 0x51) * fVar6;
      *(float *)((int)puVar11 + 0x28c) = *(float *)((int)puVar11 + 0x28c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar16 + 0x280) = *(float *)((int)lVar16 + 0x270) * fVar6 * fVar6;
        iVar18 = (int)lVar20;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar14 - 0xf0;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar22;
      do {
        fVar6 = *pfVar23;
        fVar7 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x280) = *(float *)((int)lVar16 + 0x280) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      lVar16 = lVar17;
      dVar26 = dVar30;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar9 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x280)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar31 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar5);
    }
    dVar26 = (double)fastfunc::FastSubRots(fVar2,(float)-dVar31);
    iVar9 = worldUpdateTime;
    iVar18 = *(int *)((int)pvVar8 + 0x74);
    puVar11[0x5c] = (longlong)(int)(animationSpeed * 90.5);
    if ((iVar9 - (iVar9 / *(int *)((int)puVar11 + 0x2e4)) * *(int *)((int)puVar11 + 0x2e4) == iVar18
        ) && (dVar37 = 0.03490658476948738, dVar26 < 0.03490658476948738)) {
      fVar2 = Cuboids[*(int *)((int)pvVar8 + 0x70)].pos.x - (moby->pos).x;
      fVar3 = Cuboids[*(int *)((int)pvVar8 + 0x70)].pos.y - (moby->pos).y;
      dVar31 = ABS((double)fVar2);
      dVar32 = ABS((double)fVar3);
      *(float *)(puVar11 + 0x36) = fVar2;
      *(float *)((int)puVar11 + 0x1b4) = fVar3;
      fVar2 = (moby->rotation).z;
      *(float *)(puVar11 + 0x37) = (float)(dVar31 - dVar32);
      uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x36) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x37) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x1b4) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)(puVar11 + 0x36));
      if ((double)*(float *)(puVar11 + 0x37) - dVar30 < 0.0) {
        dVar26 = dVar32;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar32 = ABS((double)*(float *)((int)puVar11 + 0x1b4));
      if ((double)*(float *)(puVar11 + 0x37) - dVar30 < 0.0) {
        dVar32 = dVar31;
      }
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar31 = dVar30;
      if (dVar30 < dVar26) {
        lVar16 = uVar14 - 0x360;
        lVar22 = uVar14 - 0x100;
        lVar20 = uVar14 - 0x110;
        lVar25 = 2;
        fVar6 = (float)(dVar32 - dVar26) / (float)(dVar32 + dVar26);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x26c) = fVar6;
        *(float *)((int)puVar11 + 0x264) = fVar6;
        *(float *)(puVar11 + 0x4d) = fVar6;
        *(float *)(puVar11 + 0x4c) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar11 + 0x264) = *(float *)((int)puVar11 + 0x264) * fVar7;
        *(float *)(puVar11 + 0x4d) = *(float *)(puVar11 + 0x4d) * fVar6;
        *(float *)((int)puVar11 + 0x26c) = *(float *)((int)puVar11 + 0x26c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar16 + 0x260) = *(float *)((int)lVar16 + 0x250) * fVar6 * fVar6;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x110;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar6 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x260) = *(float *)((int)lVar16 + 0x260) * fVar6;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        dVar26 = dVar30;
        do {
          iVar18 = (int)lVar17;
          iVar9 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0x260)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar31 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar5);
      }
      dVar26 = (double)fastfunc::FastSubRots(fVar2,(float)dVar31);
      fVar2 = mobyutil::g_FrameTime;
      if (dVar26 < dVar37) {
        dVar31 = 60.0;
        dVar37 = (double)SQRT((float)(dVar33 * dVar33 + dVar29));
        *(float *)((int)puVar11 + 0xfc) = (float)dVar38;
        *(float *)((int)puVar11 + 0x10c) = (float)dVar38;
        dVar38 = (double)(float)((double)(fVar2 * 60.0) / dVar37);
        dVar26 = dVar30;
        if (dVar30 - dVar37 < 0.0) {
          dVar26 = (double)(float)(dVar38 * dVar36);
        }
        dVar29 = dVar30;
        if (dVar30 - dVar37 < 0.0) {
          dVar29 = (double)(float)(dVar38 * dVar35);
        }
        dVar32 = dVar30;
        if (dVar30 - dVar37 < 0.0) {
          dVar32 = (double)(float)(dVar38 * dVar33);
        }
        if (dVar37 - dVar30 < 0.0) {
          dVar26 = (double)(float)(dVar38 * dVar36);
        }
        if (dVar37 - dVar30 < 0.0) {
          dVar29 = (double)(float)(dVar38 * dVar35);
        }
        if (dVar37 - dVar30 < 0.0) {
          dVar32 = (double)(float)(dVar38 * dVar33);
        }
        *(float *)(puVar11 + 0x1e) = (float)dVar26;
        *(float *)((int)puVar11 + 0xf4) = (float)dVar29;
        *(float *)(puVar11 + 0x1f) = (float)dVar32;
        *(float *)(puVar11 + 0x20) = (float)(dVar26 + (double)*(float *)(puVar11 + 0x20));
        *(float *)((int)puVar11 + 0x104) =
             (float)(dVar29 + (double)*(float *)((int)puVar11 + 0x104));
        *(float *)(puVar11 + 0x21) = (float)(dVar32 + (double)*(float *)(puVar11 + 0x21));
        *(undefined4 *)((int)puVar11 + 0xbc) = 0;
        *(undefined4 *)(puVar11 + 0x17) = 0;
        *(undefined4 *)((int)puVar11 + 0xb4) = 0;
        *(undefined4 *)(puVar11 + 0x16) = 0;
        iVar18 = partupd::SpawnPart_27
                           (0x413339e000000000,uVar14 - 0x270,uVar14 - 0x2c0,0xffffffff80ff8f6f,3);
        if (iVar18 != 0) {
          cVar19 = fastfunc::FastDoubleToInt(0x4010000000000000);
          *(char *)(iVar18 + 9) = cVar19 + 'p';
        }
        sound::PlayMobySound(0,0,moby);
        FUN_0025c7f8((double)(float)((double)mobyutil::g_FrameTime * dVar31),lVar15,
                     Cuboids + *(int *)((int)pvVar8 + 0x70),uVar14 - 0x2d0,
                     &Cuboids[*(int *)((int)pvVar8 + 0x70)].pos);
      }
    }
  }
  else if (uVar1 == '\x01') {
    if (g_onMagnerail == 0) {
      if ((((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) &&
          (*(short *)(DAT_0096b2d0 + 0xa6) == 0x563)) &&
         (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
         SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 254.0)) {
        moby->state = '\x03';
      }
    }
    else {
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      *(float *)(puVar11 + 0x10) = fVar2;
      fVar4 = (moby->pos).w;
      *(float *)((int)puVar11 + 0x84) = fVar3;
      *(f32 *)((int)puVar11 + 0x8c) = fVar4;
      pCVar13 = Cuboids;
      iVar18 = *(int *)((int)pvVar8 + 0x70);
      fVar5 = (moby->pos).z + 10.0;
      *(float *)(puVar11 + 0x11) = fVar5;
      fVar6 = pCVar13[iVar18].pos.x - fVar2;
      *(float *)(puVar11 + 0x12) = fVar6;
      fVar12 = pCVar13[iVar18].pos.y - fVar3;
      *(float *)((int)puVar11 + 0x94) = fVar12;
      fVar7 = pCVar13[iVar18].pos.z - fVar5;
      *(float *)(puVar11 + 0x13) = fVar7;
      *(float *)((int)puVar11 + 0x9c) = pCVar13[iVar18].pos.w;
      *(float *)(puVar11 + 0x12) = fVar6 * 0.9 + fVar2;
      *(float *)((int)puVar11 + 0x94) = fVar12 * 0.9 + fVar3;
      *(float *)(puVar11 + 0x13) = fVar7 * 0.9 + fVar5 + 0.5;
      iVar18 = collproc::CollLine(uVar14 - 0x2f0,uVar14 - 0x2e0,2,lVar15,0);
      if (iVar18 == 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar8 + 0x20) = 0x41700000;
    *(undefined2 *)((int)pvVar8 + 0x24) = 0xf;
    mobyupdate_helpers::M347_003513e0(lVar15);
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00352e28  ns=mobyupdate_helpers  size=0x14
// sig: undefined M347_00352e28(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M347_00352e28(void)

{
  DAT_0084031c = 0x10000;
  return;
}



//==== 00352e88  ns=mobyupdate_helpers  size=0x314
// sig: undefined M35_00352e88(void)
// callers(1): 00353470 mobyupdate_unsorted::UpdateMoby_35
// callees(9): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 0012ab08 partupd::SpawnPart_35; 0012e8c8 partupd::SpawnPart_46; 00456478 FUN_00456478; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M35_00352e88(undefined8 param_1,Vec4 *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  
  dVar17 = 3.0;
  iVar2 = FUN_00456478(0x4008000000000000,param_2);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x23) = 0x70;
  }
  dVar18 = 0.0;
  dVar19 = 1.570796251296997;
  iVar2 = 0;
  dVar20 = 3.141592502593994;
  dVar21 = -3.141592502593994;
  dVar22 = -0.16666656732559204;
  dVar23 = 0.008333025500178337;
  dVar24 = -0.0001980741071747616;
  dVar25 = 2.601886990305502e-06;
  dVar26 = 6.5;
  do {
    dVar7 = (double)mobyutil::MB_randRot();
    dVar8 = (double)mobyutil::MB_randRangeFloat
                              ((float)dVar18,(float)((double)mobyutil::g_FrameTime * dVar17));
    dVar11 = (double)(float)(dVar7 + dVar19);
    dVar9 = (double)(float)(dVar20 - dVar7);
    if (dVar7 - (double)(float)(dVar20 - dVar7) < 0.0) {
      dVar9 = dVar7;
    }
    dVar13 = (double)(float)(dVar20 - dVar11);
    if (dVar11 - (double)(float)(dVar20 - dVar11) < 0.0) {
      dVar13 = dVar11;
    }
    dVar12 = (double)(float)(dVar21 - dVar7);
    if ((double)(float)(dVar21 - dVar7) - dVar9 < 0.0) {
      dVar12 = dVar9;
    }
    dVar9 = (double)(float)(dVar21 - dVar11);
    if ((double)(float)(dVar21 - dVar11) - dVar13 < 0.0) {
      dVar9 = dVar13;
    }
    dVar7 = (double)(float)(dVar12 * dVar12);
    dVar11 = (double)(float)(dVar9 * dVar9);
    dVar15 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar12));
    dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar9));
    dVar14 = (double)(float)(dVar7 * dVar15);
    dVar16 = (double)(float)(dVar11 * dVar13);
    local_ac = (float)((double)(float)((double)(float)(dVar7 * dVar14) * dVar25 +
                                      (double)(float)(dVar14 * dVar24 +
                                                     (double)(float)(dVar15 * dVar23 +
                                                                    (double)(float)((double)(float)(
                                                  dVar7 * dVar12) * dVar22 + dVar12)))) * dVar8);
    local_b0 = (float)((double)(float)((double)(float)(dVar11 * dVar16) * dVar25 +
                                      (double)(float)(dVar16 * dVar24 +
                                                     (double)(float)(dVar13 * dVar23 +
                                                                    (double)(float)((double)(float)(
                                                  dVar11 * dVar9) * dVar22 + dVar9)))) * dVar8);
    dVar9 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar17),
                               (float)((double)mobyutil::g_FrameTime * dVar26));
    local_a8 = (float)dVar9;
    uVar3 = mobyutil::MB_randRange(0x5a,0x78);
    uVar4 = mobyutil::MB_randInt(2);
    partupd::SpawnPart_35(param_2,&local_b0,uVar4,uVar3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  dVar17 = 1.0;
  dVar18 = 0.05000000074505806;
  dVar19 = 0.699999988079071;
  dVar20 = 30.0;
  dVar21 = 60.0;
  do {
    mobyutil::MB_randSphere(dVar17,dVar17,&local_a0);
    local_a0 = local_a0 + param_2->x;
    local_9c = local_9c + param_2->y;
    local_98 = (float)((double)DAT_00e5aa98 + dVar18);
    uVar10 = mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar17);
    fVar1 = -2.0;
    if (iVar2 == 0) {
      fVar1 = 2.0;
    }
    iVar5 = partupd::SpawnPart_46(uVar10,(double)fVar1,&local_a0,&DAT_00a15d30);
    if (iVar5 != 0) {
      dVar22 = (double)mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar21);
      uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
      *(undefined2 *)(iVar5 + 10) = uVar6;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}



//==== 003531d0  ns=mobyupdate_helpers  size=0x250
// sig: undefined M35_003531d0(void)
// callers(1): 00353470 mobyupdate_unsorted::UpdateMoby_35
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 0012e8c8 partupd::SpawnPart_46; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M35_003531d0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 local_b0 [32];
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar4 = fastfunc::FastDecTimerS32(iVar2 + 0x84);
  if (iVar4 != 0) {
    dVar9 = 3.1415927410125732;
    dVar10 = -0.785398006439209;
    dVar11 = 0.785398006439209;
    dVar12 = -0.5;
    dVar13 = 0.5;
    iVar4 = 0;
    dVar14 = 0.699999988079071;
    dVar15 = 1.0;
    dVar16 = 3.0;
    auVar20 = loadVectorLeftIndexed(0x20,0x35319c);
    dVar17 = 5.0;
    auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    do {
      dVar6 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),(float)dVar9);
      dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      fastfunc::FastWrapRot((float)dVar6,(float)dVar7);
      mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar13);
      uVar8 = mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
      fVar1 = -2.0;
      if (iVar4 == 0) {
        fVar1 = 2.0;
      }
      uVar8 = partupd::SpawnPart_46(uVar8,(double)fVar1,local_b0,&DAT_00a15d30);
      if ((int)uVar8 != 0) {
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar20,auVar18);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar18 = vectorSplatHalfWord(auVar18,1);
        uVar3 = storeVectorElementHalfWordIndexed(auVar18,10,uVar8);
        *(undefined2 *)((int)uVar8 + 10) = uVar3;
      }
      mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
      uVar5 = fastfunc::FastDoubleToInt();
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar2 + 0x84) = uVar5;
    } while (iVar4 < 2);
  }
  return;
}



//==== 00353470  ns=mobyupdate_unsorted  size=0xcd8
// sig: undefined UpdateMoby_35(MobyInstance * moby)
// callers(0): 
// callees(15): 00047f74 camera::SetCameraPosition; 00083950 hero::HandleHeroDeath; 000a0c38 hero::Hero_Warp; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00104e44 mobyutil::PointInsideComplexPoly; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0015d12c sound::PlayMobySound; 00352e88 mobyupdate_helpers::M35_00352e88; 003531d0 mobyupdate_helpers::M35_003531d0; 004fff60 fastfunc::FastDecTimerS32; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot

/* Moby 35 */

double mobyupdate_unsorted::UpdateMoby_35(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  f32 fVar10;
  Spline *pSVar11;
  uint uVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double extraout_f1;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar25 = uVar19 - 0x120;
  puVar13 = (ulonglong *)lVar25;
  *puVar13 = uVar19;
  puVar13[0x26] = in_LR;
  puVar13[0x20] = in_f28;
  puVar13[0x21] = in_f29;
  puVar13[0x22] = in_f30;
  puVar13[0x23] = in_f31;
  puVar13[0x1f] = unaff_r31;
  puVar13[0x1e] = unaff_r30;
  bVar4 = moby->state;
  pvVar9 = moby->pVar;
  uVar29 = ZEXT48(pvVar9);
  fVar42 = (moby->pos).x;
  fVar5 = (moby->pos).y;
  dVar31 = (double)fVar5;
  fVar6 = (moby->pos).w;
  puVar13[0x1d] = unaff_r29;
  puVar13[0x1c] = unaff_r28;
  puVar13[0x1b] = unaff_r27;
  fVar2 = g_heroPosition.z;
  fVar7 = g_heroPosition.y;
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      if (*(int *)((int)pvVar9 + 100) == 0) {
        if (*(int *)((int)pvVar9 + 0x60) == -1) {
          dVar31 = (double)mobyfunc::DeleteMoby(moby);
        }
        else {
          uVar21 = mobyutil::MB_randInt(Splines[*(int *)((int)pvVar9 + 0x60)]->cnt);
          *(undefined4 *)((int)pvVar9 + 0x68) = uVar21;
          fVar42 = animationSpeed;
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(4,0x353420);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar21 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x6c,
                              uVar29);
          *(undefined4 *)((int)pvVar9 + 0x6cU & 0xfffffffc) = uVar21;
          if (moby->animationId != '\x01') {
            puVar13[0x18] = (longlong)(int)(fVar42 * 10.5);
            mobyutil::MB_SetAnimation(lVar20,1,0,*(undefined4 *)((int)puVar13 + 0xc4));
          }
          fVar42 = Splines[*(int *)((int)pvVar9 + 0x60)]->points[0].z - DAT_00840348;
          dVar31 = (double)fVar42;
          (moby->pos).z = fVar42;
          *(float *)((int)pvVar9 + 0x80) = fVar42;
          moby->state = '\x01';
        }
      }
      else {
        MVar8 = moby->modeBits;
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        moby->state = '\x02';
        fVar42 = (moby->pos).z;
        dVar31 = (double)fVar42;
        moby->updateDistance = -1;
        *(float *)((int)pvVar9 + 0x74) = fVar42;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        moby->modeBits = MVar8 | DISABLED;
        auVar39 = loadVectorLeftIndexed(in_LR,0x353420);
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar21 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x7c,
                            uVar29);
        *(undefined4 *)((int)pvVar9 + 0x7cU & 0xfffffffc) = uVar21;
      }
    }
    else {
      iVar22 = *(int *)((int)pvVar9 + 0x68);
      pSVar11 = Splines[*(int *)((int)pvVar9 + 0x60)];
      dVar38 = (double)pSVar11->points[iVar22].x;
      dVar37 = (double)pSVar11->points[iVar22].y;
      fVar42 = (float)(dVar38 - (double)fVar42);
      dVar36 = (double)pSVar11->points[iVar22].z;
      fVar6 = ABS(fVar42);
      fVar5 = ABS((float)(dVar37 - dVar31));
      *(float *)(puVar13 + 0x12) = fVar42;
      *(float *)((int)puVar13 + 0x94) = (float)(dVar37 - dVar31);
      *(float *)(puVar13 + 0x13) = fVar6 - fVar5;
      dVar31 = 0.0;
      uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
      fVar42 = ABS(*(float *)(puVar13 + 0x12));
      if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
        fVar42 = fVar5;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar2 = ABS(*(float *)((int)puVar13 + 0x94));
      if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
        fVar2 = fVar6;
      }
      dVar34 = dVar31;
      if (0.0 < fVar42) {
        lVar24 = uVar19 - 0x110;
        lVar26 = uVar19 - 0x84;
        lVar28 = uVar19 - 0x74;
        lVar30 = 2;
        fVar42 = (fVar2 - fVar42) / (fVar2 + fVar42);
        fVar6 = fVar42 * fVar42;
        *(float *)(puVar13 + 0x15) = fVar42;
        *(float *)(puVar13 + 0x14) = fVar42;
        *(float *)((int)puVar13 + 0xa4) = fVar42;
        *(float *)((int)puVar13 + 0x9c) = fVar42;
        fVar42 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar6;
        *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar42;
        *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar42 * fVar6;
        do {
          *(float *)((int)lVar24 + 0x9c) = *(float *)((int)lVar24 + 0x8c) * fVar42 * fVar42;
          iVar22 = (int)lVar26;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar22 + 4) * fVar42 * fVar42;
          lVar28 = lVar28 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar28 = uVar19 - 0x84;
        pfVar27 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar26 = lVar28;
        do {
          fVar42 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar24 + 0x9c) = *(float *)((int)lVar24 + 0x9c) * fVar42;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar24 = 2;
        do {
          iVar22 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          iVar14 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar22 + 0x9c)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar5);
      }
      mobyutil::OrganicDeltAng
                ((float)dVar34,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
                 mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x70));
      fVar5 = (moby->transform).v0.y;
      fVar6 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.z;
      dVar35 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar42 = (float)((double)(mobyutil::g_FrameTime * 3.0) / dVar35);
      dVar34 = dVar31;
      if (dVar31 - dVar35 < 0.0) {
        dVar34 = (double)(fVar5 * fVar42);
      }
      dVar32 = dVar31;
      if (dVar31 - dVar35 < 0.0) {
        dVar32 = (double)(fVar6 * fVar42);
      }
      dVar33 = dVar31;
      if (dVar31 - dVar35 < 0.0) {
        dVar33 = (double)(fVar7 * fVar42);
      }
      if (dVar35 - dVar31 < 0.0) {
        dVar34 = (double)(fVar5 * fVar42);
      }
      if (dVar35 - dVar31 < 0.0) {
        dVar32 = (double)(fVar6 * fVar42);
      }
      if (dVar35 - dVar31 < 0.0) {
        dVar33 = (double)(fVar7 * fVar42);
      }
      fVar42 = (float)((double)(moby->pos).y + dVar34);
      fVar5 = (float)((double)(moby->pos).x + dVar32);
      fVar6 = (float)((double)(moby->pos).z + dVar33);
      fVar7 = (float)((double)fVar42 - dVar37);
      fVar2 = (float)((double)fVar5 - dVar38);
      fVar3 = (float)((double)fVar6 - dVar36);
      (moby->pos).x = fVar5;
      (moby->pos).y = fVar42;
      (moby->pos).z = fVar6;
      if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar7 * fVar7) < 3.0) ||
         (iVar22 = fastfunc::FastDecTimerS32(uVar29 + 0x6c), iVar22 != 0)) {
        iVar22 = mobyutil::MB_randInt(Splines[*(int *)((int)pvVar9 + 0x60)]->cnt);
        iVar22 = *(int *)((int)pvVar9 + 0x68) + iVar22;
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        *(int *)((int)pvVar9 + 0x68) =
             iVar22 - (iVar22 / Splines[*(int *)((int)pvVar9 + 0x60)]->cnt) *
                      Splines[*(int *)((int)pvVar9 + 0x60)]->cnt;
        auVar39 = loadVectorLeftIndexed(4,0x353420);
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar21 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x6c,
                            uVar29);
        *(undefined4 *)((int)pvVar9 + 0x6cU & 0xfffffffc) = uVar21;
      }
      if (((hero::g_heroStateType != 0x12) && (g_heroState != WATER_JUMP)) ||
         (fVar42 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
         8.0 <= SQRT(fVar5 * fVar5 + fVar42 * fVar42))) {
        dVar37 = 0.5;
        dVar31 = (double)DAT_00e5aa98;
        dVar36 = (double)DAT_00840348;
        mobyupdate_helpers::M35_003531d0(lVar20);
      }
      else {
        dVar31 = (double)DAT_00e5aa98;
        dVar36 = (double)DAT_00840348;
        dVar37 = 2.0;
      }
      fVar42 = mobyutil::OrganicDelt
                         ((float)((double)(float)(dVar31 - dVar36) - dVar37),DAT_0071f418 * 2.0,
                          DAT_0071f418 * 2.0,mobyutil::g_FrameTime * 2.0,&(moby->pos).z,0x720000,
                          (float *)((int)pvVar9 + 0x78));
      dVar31 = (double)fVar42;
    }
  }
  else if (bVar4 < 3) {
    fastfunc::FastDecTimerS32(uVar29 + 0x7c);
    dVar31 = ABS((double)(hero::g_heroWaterZ - *(float *)((int)pvVar9 + 0x74)));
    if ((0.33000001311302185 <= dVar31) || (hero::g_heroStateType != 0x12)) {
      if (g_heroState != WATER_JUMP) {
        iVar22 = mobyutil::PointInsideComplexPoly
                           (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar9 + 0x60)]->points,
                            Splines[*(int *)((int)pvVar9 + 0x60)]->cnt);
        if (iVar22 == 0) {
          auVar39 = loadVectorLeftIndexed(0x38,0x353420);
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        }
        else {
          auVar39 = loadVectorLeftIndexed(4,0x353420);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        }
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,auVar39,
                             auVar41);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        uVar21 = storeVectorElementWordIndexed(auVar39,0x7c,uVar29);
        *(undefined4 *)((int)pvVar9 + 0x7cU & 0xfffffffc) = uVar21;
        dVar31 = extraout_f1;
      }
    }
    else if (*(int *)((int)pvVar9 + 0x7c) == 0) {
      (moby->rotation).y = -1.553343;
      dVar31 = (double)fastfunc::FastWrapRot(GameCamera.rot.radius,1.5707964);
      (moby->rotation).z = (float)dVar31;
      fastfunc::FastEulerToMtx(lVar20 + 0xc0,lVar20 + 0x40);
      fVar16 = g_heroPosition.x;
      fVar42 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.x;
      fVar6 = (moby->transform).v2.z;
      (moby->pos).x = g_heroPosition.x;
      fVar17 = g_heroPosition.y;
      (moby->pos).y = g_heroPosition.y;
      fVar18 = g_heroPosition.z;
      (moby->pos).z = g_heroPosition.z;
      (moby->pos).w = g_heroPosition.w;
      fVar2 = 0.0;
      fVar7 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar42 * fVar42);
      fVar1 = DAT_00840348 / fVar7;
      fVar3 = fVar2;
      if (0.0 - fVar7 < 0.0) {
        fVar3 = fVar42 * fVar1;
      }
      fVar15 = fVar2;
      if (0.0 - fVar7 < 0.0) {
        fVar15 = fVar5 * fVar1;
      }
      if (0.0 - fVar7 < 0.0) {
        fVar2 = fVar6 * fVar1;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar3 = fVar42 * fVar1;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar15 = fVar5 * fVar1;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar2 = fVar6 * fVar1;
      }
      (moby->pos).y = fVar17 - fVar3;
      (moby->pos).x = fVar16 - fVar15;
      (moby->pos).z = (fVar18 - fVar2) - 2.0;
      *(float *)((int)pvVar9 + 0x78) = mobyutil::g_FrameTime * 10.0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      if (moby->animationId != '\x02') {
        puVar13[0x18] = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(lVar20,2,0,*(undefined4 *)((int)puVar13 + 0xc4));
      }
      moby->state = '\x03';
      moby->setByGroup = '\0';
      dVar31 = (double)camera::SetCameraPosition(0x951500,0x951510,0,0,0);
    }
  }
  else if (bVar4 < 4) {
    fVar10 = (moby->pos).z;
    fVar3 = (moby->pos).z;
    uVar12 = (int)fVar10 >> 0x1f;
    if (((int)(((uint)((int)hero::g_heroWaterZ >> 0x1f) >> 1 ^ (uint)hero::g_heroWaterZ) -
              ((int)hero::g_heroWaterZ >> 0x1f)) < (int)((uVar12 >> 1 ^ (uint)fVar10) - uVar12)) ||
       (*(int *)((int)pvVar9 + 0x78) < 0)) {
      dVar31 = 20.0;
      if (g_heroState == MOVEMENT_LOCKED) {
        g_heroPosition.z = fVar3 + 20.0;
        hero::g_heroInvisible = 1;
        g_heroPosition.x = fVar42;
        g_heroPosition.y = fVar5;
        g_heroPosition.w = fVar6;
      }
      else {
        *(float *)(puVar13 + 0xe) = g_heroPosition.x;
        *(float *)((int)puVar13 + 0x74) = fVar7;
        fVar42 = g_heroPosition.w;
        *(float *)(puVar13 + 0xf) = fVar2;
        fVar5 = hero::g_heroWaterZ;
        *(float *)((int)puVar13 + 0x7c) = fVar42;
        *(float *)(puVar13 + 0xf) = fVar5;
        mobyupdate_helpers::M35_00352e88(lVar20,uVar19 - 0xb0);
        hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,0);
        g_heroPosition.z = (float)((double)g_heroPosition.z + dVar31);
        hero::g_heroInvisible = 1;
        fVar3 = (moby->pos).z;
      }
    }
    (moby->pos).z = fVar3 + *(float *)((int)pvVar9 + 0x78);
    fVar5 = DAT_0071f418;
    dVar31 = -(double)(DAT_0071f418 * 10.0 - *(float *)((int)pvVar9 + 0x78));
    *(float *)((int)pvVar9 + 0x78) = (float)dVar31;
    fVar42 = (moby->pos).z;
    if (dVar31 < (double)(mobyutil::g_FrameTime * 2.0)) {
      fVar42 = (moby->transform).v2.y;
      fVar6 = (moby->transform).v2.x;
      fVar7 = (moby->transform).v2.z;
      dVar36 = 0.0;
      fVar2 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar42 * fVar42);
      fVar3 = DAT_00840348 / fVar2;
      dVar31 = dVar36;
      if (0.0 - fVar2 < 0.0) {
        dVar31 = (double)(fVar7 * fVar3);
      }
      dVar37 = dVar36;
      if (0.0 - fVar2 < 0.0) {
        dVar37 = (double)(fVar42 * fVar3);
      }
      dVar38 = dVar36;
      if (0.0 - fVar2 < 0.0) {
        dVar38 = (double)(fVar6 * fVar3);
      }
      if (fVar2 - 0.0 < 0.0) {
        dVar31 = (double)(fVar7 * fVar3);
      }
      if (fVar2 - 0.0 < 0.0) {
        dVar37 = (double)(fVar42 * fVar3);
      }
      if (fVar2 - 0.0 < 0.0) {
        dVar38 = (double)(fVar6 * fVar3);
      }
      fVar42 = mobyutil::OrganicDeltAng
                         (1.553343,fVar5 * 12.566371,fVar5 * 12.566371,
                          mobyutil::g_FrameTime * 25.132742,&(moby->rotation).y,0x353420,
                          (float *)((int)pvVar9 + 0x70));
      fastfunc::FastEulerToMtx((double)fVar42,lVar20 + 0xc0,lVar20 + 0x40);
      fVar5 = (moby->transform).v2.y;
      fVar6 = (moby->transform).v2.x;
      fVar7 = (moby->transform).v2.z;
      dVar35 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar42 = (float)((double)DAT_00840348 / dVar35);
      dVar34 = dVar36;
      if (dVar36 - dVar35 < 0.0) {
        dVar34 = (double)(fVar7 * fVar42);
      }
      dVar32 = dVar36;
      if (dVar36 - dVar35 < 0.0) {
        dVar32 = (double)(fVar5 * fVar42);
      }
      dVar33 = dVar36;
      if (dVar36 - dVar35 < 0.0) {
        dVar33 = (double)(fVar6 * fVar42);
      }
      if (dVar35 - dVar36 < 0.0) {
        dVar34 = (double)(fVar7 * fVar42);
      }
      if (dVar35 - dVar36 < 0.0) {
        dVar32 = (double)(fVar5 * fVar42);
      }
      if (dVar35 - dVar36 < 0.0) {
        dVar33 = (double)(fVar6 * fVar42);
      }
      fVar42 = (moby->pos).z - (float)(dVar34 - dVar31);
      (moby->pos).z = fVar42;
      (moby->pos).y = (moby->pos).y - (float)(dVar32 - dVar37);
      (moby->pos).x = (moby->pos).x - (float)(dVar33 - dVar38);
      dVar31 = (double)*(float *)((int)pvVar9 + 0x78);
    }
    dVar36 = (double)fVar42;
    dVar37 = 0.0;
    if (((dVar31 < 0.0) && (dVar36 < (double)hero::g_heroWaterZ)) && (moby->setByGroup == '\0')) {
      moby->setByGroup = '\x01';
      sound::PlayMobySound(0,0,moby);
      fVar42 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.x;
      fVar6 = (moby->transform).v2.z;
      fVar7 = (moby->pos).x;
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).z;
      dVar31 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar42 * fVar42);
      if (dVar31 == dVar37) {
        fVar42 = (moby->transform).v2.w;
        dVar31 = dVar37;
        dVar36 = dVar37;
        dVar38 = dVar37;
      }
      else {
        fVar1 = (float)((double)DAT_00840348 / dVar31);
        dVar36 = (double)(fVar42 * fVar1);
        dVar31 = (double)(fVar5 * fVar1);
        fVar42 = (moby->transform).v2.w;
        dVar38 = (double)(fVar6 * fVar1);
      }
      *(float *)((int)puVar13 + 0x8c) = fVar42;
      fVar42 = hero::g_heroWaterZ;
      *(float *)(puVar13 + 0x10) = (float)(dVar31 + (double)fVar7);
      *(float *)((int)puVar13 + 0x84) = (float)(dVar36 + (double)fVar2);
      *(float *)(puVar13 + 0x11) = (float)(dVar38 + (double)fVar3);
      *(float *)(puVar13 + 0x11) = fVar42;
      mobyupdate_helpers::M35_00352e88(lVar20,uVar19 - 0xa0);
      dVar31 = (double)*(float *)((int)pvVar9 + 0x78);
      dVar36 = (double)(moby->pos).z;
    }
    if ((dVar31 < dVar37) &&
       (dVar31 = (double)(*(float *)((int)pvVar9 + 0x74) - 8.0), dVar36 < dVar31)) {
      dVar31 = (double)hero::HandleHeroDeath();
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x01')) {
      puVar13[0x18] = (longlong)(int)(animationSpeed * 10.5);
      dVar31 = (double)mobyutil::MB_SetAnimation(lVar20,1,0,*(undefined4 *)((int)puVar13 + 0xc4));
    }
  }
  return dVar31;
}



//==== 00354148  ns=mobyupdate_helpers  size=0x14
// sig: undefined M352_00354148(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M352_00354148(void)

{
  DAT_00840398 = 0x10000;
  return;
}



//==== 00354160  ns=mobyupd::update352  size=0xcc
// sig: undefined Spawn_Moby352(void)
// callers(2): 0023be70 mobyupdate_unsorted::UpdateMoby_1284; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupd::update352::Spawn_Moby352(int param_1)

{
  f32 fVar1;
  MobyModeBit MVar2;
  int *piVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = mobyfunc::CreateMoby(0x160);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    piVar3 = (int *)pMVar4->pVar;
    (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
    fVar1 = *(f32 *)(param_1 + 0x14);
    pMVar4->drawDistance = 0x3ff;
    (pMVar4->pos).y = fVar1;
    MVar2 = pMVar4->modeBits;
    (pMVar4->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    *piVar3 = param_1;
    (pMVar4->pos).w = fVar1;
    piVar3[1] = 0;
    pMVar4->modeBits = MVar2 | DRAW_TRANSPARENT_WEIRD;
    mobyfunc::UpdateMobyTransform(pMVar4);
    mobyutil::MB_CopyHeroLights(pMVar4);
    pMVar4->scale = pMVar4->pClass->gScale;
  }
  return pMVar4;
}



//==== 00354248  ns=mobyupdate_unsorted  size=0x228
// sig: undefined UpdateMoby_352(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 000f0838 mobyfunc::MB_AddShortPairOffset; 00502758 fastfunc::FastDoubleToInt

/* Moby 352 */

void mobyupdate_unsorted::UpdateMoby_352(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  int *piVar4;
  u16 *puVar5;
  int iVar6;
  s8 sVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  if (uVar1 == '\x04') {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    if (uVar1 == '\x03') {
      moby->scale = (moby->pClass->gScale - moby->scale) * 0.1 + moby->scale;
      fVar3 = -(DAT_0071f408 * 0.02 - (float)piVar4[1]);
      piVar4[1] = (int)fVar3;
      if (fVar3 <= 0.0) {
        piVar4[1] = 0;
        moby->state = '\x04';
        fVar3 = (float)piVar4[1];
      }
      sVar7 = fastfunc::FastDoubleToInt((double)(fVar3 * 60.0));
      moby->alpha = sVar7;
    }
    else if (uVar1 == '\x02') {
      iVar6 = *piVar4;
      moby->scale = (moby->pClass->gScale * 4.0 - moby->scale) * 0.1 + moby->scale;
      if (((iVar6 == 0) || (cVar2 = *(char *)(iVar6 + 0x20), cVar2 == -2)) || (cVar2 == -3)) {
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      moby->scale = (moby->pClass->gScale * 4.0 - moby->scale) * 0.1 + moby->scale;
      fVar3 = DAT_0071f408 * 0.02 + (float)piVar4[1];
      piVar4[1] = (int)fVar3;
      if (1.0 <= fVar3) {
        piVar4[1] = 0x3f800000;
        moby->state = '\x02';
        fVar3 = (float)piVar4[1];
      }
      sVar7 = fastfunc::FastDoubleToInt((double)(fVar3 * 60.0));
      moby->alpha = sVar7;
    }
    else if (uVar1 == '\0') {
      puVar5 = moby->pClass->collision;
      moby->state = '\x01';
      moby->collision = puVar5;
    }
    iVar6 = piVar4[2];
    uVar8 = 0xffffffffffffffc0;
    iVar9 = iVar6 + -0x40;
    piVar4[2] = iVar9;
    if (iVar9 < 0x1001) {
      if (iVar9 < 0) {
        uVar8 = 0xfc0;
        piVar4[2] = iVar6 + 0xfc0;
      }
    }
    else {
      uVar8 = 0xffffffffffffefc0;
      piVar4[2] = iVar6 + -0x1040;
    }
    mobyfunc::MB_AddShortPairOffset(moby->pClass,0,uVar8);
  }
  return;
}



//==== 00354478  ns=mobyupdate_unsorted  size=0x1a8
// sig: undefined UpdateMoby_353(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 353 */

void mobyupdate_unsorted::UpdateMoby_353(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  f32 *pfVar3;
  float fVar4;
  
  bVar1 = moby->state;
  pfVar3 = (f32 *)moby->pVar;
  if (bVar1 == 0) {
    *pfVar3 = (moby->pos).x;
    pfVar3[1] = (moby->pos).y;
    pfVar3[2] = (moby->pos).z;
    pfVar3[3] = (moby->pos).w;
    uVar2 = moby->uid;
    if (((&DAT_00a545c4)[(short)uVar2] != '\0') ||
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
        1 << (uVar2 & 0x1f)) != 0)) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    fVar4 = (moby->pos).y + -mobyutil::g_FrameTime;
    (moby->pos).y = fVar4;
    if (fVar4 <= pfVar3[1] + -3.75) {
      bVar1 = moby->levelFlagIdx;
      uVar2 = moby->uid;
      (&DAT_00a53964)[(short)uVar2] = bVar1 + 2;
      if ((bVar1 == 0xff) || (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1))))
      {
        (&DAT_00a545c4)[(short)uVar2] = bVar1 + 2;
      }
      moby->state = '\x02';
      if (Level == Orxon) {
        MiscLevelFlags.field80_0x50 = 1;
      }
    }
  }
  else if (bVar1 < 3) {
    (moby->pos).y = pfVar3[1] + -3.75;
  }
  return;
}



//==== 00354620  ns=mobyupdate_helpers  size=0x14
// sig: undefined M353_00354620(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M353_00354620(void)

{
  DAT_00840408 = 0x10000;
  return;
}



//==== 00354638  ns=Global  size=0x11c
// sig: undefined FUN_00354638(void)
// callers(1): 0032e9e0 mobyupdate_unsorted::UpdateMoby_29
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * FUN_00354638(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int *piVar5;
  MobyClass *pMVar6;
  int iVar7;
  int iVar8;
  MobyInstance *pMVar9;
  
  pMVar9 = mobyfunc::CreateMoby(BLARG_GUNNER);
  if (pMVar9 != (MobyInstance *)0x0) {
    piVar5 = (int *)pMVar9->pVar;
    piVar5[0x1c] = param_1;
    *piVar5 = (int)(piVar5 + 8);
    piVar5[3] = (int)(piVar5 + 0x18);
    pMVar9->updateDistance = *(char *)(param_1 + 0x30);
    pMVar6 = pMVar9->pClass;
    sVar4 = *(short *)(piVar5[0x1c] + 0x32);
    pMVar9->enabled = '\x01';
    pMVar9->state = '\0';
    pMVar9->setByGroup = '\0';
    iVar7 = piVar5[0x1c];
    iVar8 = *(int *)(param_1 + 0x24);
    (pMVar9->pos).x = *(f32 *)(iVar7 + 0x10);
    (pMVar9->pos).y = *(f32 *)(iVar7 + 0x14);
    (pMVar9->pos).z = *(f32 *)(iVar7 + 0x18);
    (pMVar9->pos).w = *(f32 *)(iVar7 + 0x1c);
    fVar1 = pMVar6->gScale;
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar3 = *(float *)(iVar8 + 0x24);
    pMVar9->drawDistance = sVar4;
    pMVar9->modeBits = pMVar9->modeBits | HAS_SPECIAL_VARS;
    *(undefined2 *)(piVar5 + 9) = 1;
    pMVar9->scale = (fVar1 * fVar2) / fVar3;
    piVar5[8] = 0x3f800000;
    *(undefined1 *)(piVar5 + 10) = 0;
    *(undefined1 *)((int)piVar5 + 0x29) = 1;
    *(undefined1 *)((int)piVar5 + 0x2a) = 3;
    piVar5[0xc] = 0x3f333333;
    mobyfunc::UpdateMobyTransform(pMVar9);
    mobyutil::MB_CopyHeroLights(pMVar9);
  }
  return pMVar9;
}



//==== 00354768  ns=mobyupdate_helpers  size=0x448
// sig: undefined M36_00354768(void)
// callers(1): 00354bd0 mobyupdate_unsorted::UpdateMoby_36
// callees(7): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M36_00354768(MobyInstance *param_1,longlong param_2)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar19;
  int iVar20;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0xc0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x1a] = in_LR;
  puVar12[0x16] = unaff_r30;
  puVar12[0x15] = unaff_r29;
  uVar1 = param_1->state;
  puVar12[0x17] = unaff_r31;
  puVar12[0x14] = unaff_r28;
  if (uVar1 != '\x02') {
    iVar19 = mobyutil::MB_damage(param_1,0x330000,0);
    iVar20 = mobyutil::MB_HandleDamage(param_1,iVar19,param_2 + 0x20,0,puVar12 + 0xe,0,0,4);
    iVar15 = (int)param_2;
    if ((iVar19 != 0) && ((*(uint *)(iVar19 + 0x24) & 0x800000) != 0)) {
      iVar8 = *(int *)(iVar19 + 0x20);
      if (iVar8 == 0) {
        *(undefined4 *)(iVar19 + 0x2c) = 0;
        *(undefined4 *)(puVar12 + 0xe) = 1;
      }
      else {
        fVar2 = *(float *)(iVar8 + 0x10) - (param_1->pos).x;
        fVar4 = *(float *)(iVar8 + 0x14) - (param_1->pos).y;
        fVar5 = ABS(fVar2);
        fVar3 = ABS(fVar4);
        *(float *)((int)puVar12 + 0x74) = fVar2;
        *(float *)(puVar12 + 0xf) = fVar4;
        *(float *)((int)puVar12 + 0x7c) = fVar5 - fVar3;
        fVar2 = 0.0;
        uVar17 = (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar12 + 0x74));
        if (*(float *)((int)puVar12 + 0x7c) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)(puVar12 + 0xf));
        if (*(float *)((int)puVar12 + 0x7c) - 0.0 < 0.0) {
          fVar13 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar23 = uVar16 - 0xb0;
          lVar22 = uVar16 - 0x40;
          lVar21 = uVar16 - 0x30;
          lVar25 = 2;
          fVar4 = (fVar13 - fVar4) / (fVar13 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar12 + 0x8c) = fVar4;
          *(float *)((int)puVar12 + 0x84) = fVar4;
          *(float *)(puVar12 + 0x11) = fVar4;
          *(float *)(puVar12 + 0x10) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 0x84) = *(float *)((int)puVar12 + 0x84) * fVar5;
          *(float *)(puVar12 + 0x11) = *(float *)(puVar12 + 0x11) * fVar4;
          *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar23 + 0x80) = *(float *)((int)lVar23 + 0x70) * fVar4 * fVar4;
            iVar8 = (int)lVar22;
            lVar23 = lVar23 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar23 = uVar16 - 0x40;
          pfVar24 = (float *)&DAT_007358e0;
          lVar25 = 4;
          lVar21 = lVar23;
          lVar22 = lVar18;
          do {
            fVar4 = *pfVar24;
            fVar5 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar22 + 0x80) = *(float *)((int)lVar22 + 0x80) * fVar4;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar21 = 2;
          do {
            iVar8 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar14 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar8 + 0x80) + *(float *)(iVar14 + 4) +
                    *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
        }
        dVar26 = (double)fastfunc::FastSubRots
                                   (fVar2,*(float *)(*(int *)(*(int *)(iVar15 + 0x70) + 0x78) + 0x54
                                                    ));
        if (dVar26 < 1.6580628156661987) {
          *(undefined4 *)(iVar19 + 0x2c) = 0;
          *(undefined4 *)(puVar12 + 0xe) = 1;
        }
      }
    }
    if ((0 < iVar20) && (iVar20 < 3)) {
      *(undefined4 *)(iVar15 + 0x20) = 0;
    }
    if (1 < *(int *)(puVar12 + 0xe)) {
      uVar9 = (int)*(uint *)(iVar15 + 0x20) >> 0x1f;
      uVar10 = (int)*(uint *)(iVar19 + 0x2c) >> 0x1f;
      fVar2 = *(float *)(iVar19 + 0x2c);
      if ((int)((uVar10 >> 1 ^ *(uint *)(iVar19 + 0x2c)) - uVar10) <
          (int)((uVar9 >> 1 ^ *(uint *)(iVar15 + 0x20)) - uVar9)) {
        auVar27 = ZEXT416(0xffffffff);
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        *(undefined1 *)(iVar15 + 0x67) = 0xfa;
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        *(float *)(iVar15 + 0x20) = *(float *)(iVar15 + 0x20) - fVar2;
        auVar27 = loadVectorLeftIndexed(0xc,0x354754);
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                             auVar28);
        auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
        auVar27 = vectorSplatHalfWord(auVar27,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar27,0x26,param_2);
        *(undefined2 *)(iVar15 + 0x26) = uVar11;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
      }
      else {
        MVar7 = param_1->modeBits;
        iVar19 = *(int *)(iVar15 + 0x70);
        *(undefined4 *)(iVar15 + 0x20) = 0;
        param_1->modeBits =
             MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (((iVar19 != 0) && (*(short *)(iVar19 + 0xa6) == 0x1d)) &&
           (*(char *)(iVar19 + 0x20) != -3 && *(char *)(iVar19 + 0x20) != -2)) {
          *(undefined1 *)(iVar19 + 0x20) = 4;
        }
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar15 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        if (param_1->animationId != '\x03') {
          mobyutil::MB_SetAnimation(param_1,3,1,0);
        }
        param_1->state = '\x02';
      }
    }
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 00354bd0  ns=mobyupdate_unsorted  size=0x288
// sig: undefined UpdateMoby_36(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 0010e030 mobyutil::MB_genericExplosion; 00354768 mobyupdate_helpers::M36_00354768

/* Moby 36 */

void mobyupdate_unsorted::UpdateMoby_36(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  undefined1 local_40 [16];
  undefined1 auStack_30 [24];
  
  bVar2 = moby->state;
  pvVar3 = moby->pVar;
  if (bVar2 == 0) {
    *(undefined1 *)((int)pvVar3 + 0x29) = 1;
    moby->state = '\x01';
    *(undefined1 *)((int)pvVar3 + 0x5a) = 6;
    *(undefined1 *)((int)pvVar3 + 0x58) = 8;
  }
  else if (bVar2 < 2) {
    if (*(char *)(*(int *)((int)pvVar3 + 0x70) + 0x20) == '\x03') {
      bVar1 = moby->animationId != '\x02';
      if ((bVar1) && (bVar1)) {
        uVar4 = mobyutil::MB_randRange(0,3);
        uVar5 = mobyutil::MB_randRange(7,0xc);
        mobyutil::MB_SetAnimation(moby,2,uVar4,uVar5);
      }
    }
    else if ((1 < moby->animationId) || ((moby->field43_0x70 & 2U) != 0)) {
      iVar6 = mobyutil::MB_randInt(7);
      if (iVar6 == 0) {
        if (moby->animationId != '\x01') {
          uVar4 = mobyutil::MB_randRange(7,0xd);
          mobyutil::MB_SetAnimation(moby,1,0,uVar4);
        }
      }
      else if (moby->animationId != '\0') {
        uVar4 = mobyutil::MB_randRange(7,0xd);
        mobyutil::MB_SetAnimation(moby,0,0,uVar4);
      }
      dVar7 = (double)mobyutil::MB_randRangeFloat(0.8,1.2);
      moby->unk58 = (float)dVar7;
    }
    mobyupdate_helpers::M36_00354768(moby,pvVar3);
  }
  else if ((bVar2 < 3) && ((moby->field43_0x70 & 2U) != 0)) {
    mobyfunc::GetBonePosition(moby,0,auStack_30);
    mobyutil::MB_genericExplosion
              (0,0,0x4024000000000000,0x401c000000000000,0x4034000000000000,0x4000000000000000,
               0x4044000000000000,moby,local_40,auStack_30,0,1,0x14,9,0x20);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00354e58  ns=mobyupdate_unsorted  size=0xb0
// sig: undefined UpdateMoby_361(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 361 */

void mobyupdate_unsorted::UpdateMoby_361(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
                    /* WARNING: Load size is inaccurate */
    if (*moby->pVar == -1) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (((moby->state < 2) &&
           (0x43420000 <
            (int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                 ((int)g_heroPosition.z >> 0x1f)))) && (g_heroState != TURRET_PLANE_UI)) {
                    /* WARNING: Load size is inaccurate */
    DAT_0096bfba = (undefined2)*moby->pVar;
  }
  return;
}



//==== 00354f08  ns=mobyupdate_helpers  size=0x14
// sig: undefined M367_00354f08(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M367_00354f08(void)

{
  DAT_00840478 = 0x10000;
  return;
}



//==== 00354f30  ns=mobyupdate_unsorted  size=0x1ec
// sig: undefined UpdateMoby_367(MobyInstance * moby)
// callers(0): 
// callees(1): 00109c30 mobyutil::OrganicDelt

/* Moby 367 */

void mobyupdate_unsorted::UpdateMoby_367(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  
  pfVar7 = (float *)moby->pVar;
  if (moby->state == '\0') {
    *pfVar7 = (moby->pos).x;
    pfVar7[1] = (moby->pos).y;
    pfVar7[2] = (moby->pos).z;
    pfVar7[3] = (moby->pos).w;
    fVar1 = (moby->transform).v1.y;
    fVar2 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    fVar4 = 0.0;
    fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    if (fVar1 == 0.0) {
      pfVar7[4] = fVar2;
      pfVar7[5] = (moby->transform).v1.y;
      pfVar7[6] = (moby->transform).v1.z;
      fVar1 = (moby->transform).v1.w;
      pfVar7[6] = 0.0;
      pfVar7[5] = 0.0;
      pfVar7[4] = 0.0;
      fVar3 = fVar4;
      fVar2 = fVar4;
    }
    else {
      fVar4 = 11.0 / fVar1;
      fVar2 = fVar2 * fVar4;
      pfVar7[4] = fVar2;
      fVar3 = (moby->transform).v1.y * fVar4;
      pfVar7[5] = fVar3;
      fVar4 = (moby->transform).v1.z * fVar4;
      pfVar7[6] = fVar4;
      fVar1 = (moby->transform).v1.w;
    }
    pfVar7[7] = fVar1;
    pfVar7[4] = fVar2 + (moby->pos).x;
    pfVar7[5] = fVar3 + (moby->pos).y;
    pfVar7[6] = fVar4 + (moby->pos).z;
    moby->state = '\x01';
  }
  else if (moby->state == '\x02') {
    mobyutil::OrganicDelt
              (pfVar7[10],DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,mobyutil::g_FrameTime * 20.0,
               pfVar7 + 8,0x720000,pfVar7 + 9);
    fVar1 = pfVar7[8];
    fVar2 = pfVar7[5];
    fVar3 = pfVar7[1];
    fVar4 = pfVar7[6];
    fVar5 = pfVar7[2];
    fVar6 = pfVar7[7];
    (moby->pos).x = fVar1 * (pfVar7[4] - *pfVar7) + *pfVar7;
    (moby->pos).y = fVar1 * (fVar2 - fVar3) + pfVar7[1];
    fVar2 = pfVar7[2];
    (moby->pos).w = fVar6;
    (moby->pos).z = fVar1 * (fVar4 - fVar5) + fVar2;
    if (pfVar7[8] == pfVar7[10]) {
      moby->state = '\x01';
    }
  }
  return;
}



//==== 0035511c  ns=Global  size=0x6c
// sig: undefined FUN_0035511c(void)
// callers(1): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051
// callees(0): 

void FUN_0035511c(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  puVar4 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      uVar2 = *puVar4 & 0x7fff;
      if (MobyInstance[uVar2].oClass == 0x16f) {
        pMVar3 = MobyInstance + uVar2;
        MobyInstance[uVar2].state = '\x02';
        *(undefined4 *)((int)pMVar3->pVar + 0x28) = 0x3f800000;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 00355188  ns=Global  size=0x6c
// sig: undefined FUN_00355188(void)
// callers(1): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051
// callees(0): 

void FUN_00355188(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  puVar4 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      uVar2 = *puVar4 & 0x7fff;
      if (MobyInstance[uVar2].oClass == 0x16f) {
        pMVar3 = MobyInstance + uVar2;
        MobyInstance[uVar2].state = '\x02';
        *(undefined4 *)((int)pMVar3->pVar + 0x28) = 0;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 00355200  ns=mobyupdate_unsorted  size=0xf0
// sig: undefined UpdateMoby_37(MobyInstance * moby)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 005cd2a8 libc::snprintf
// strings: 00656574: 'Raritanium Acquired'

/* Moby 37 */

void mobyupdate_unsorted::UpdateMoby_37(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  fVar1 = (moby->pos).y - g_heroPosition.y;
  fVar2 = (moby->pos).x - g_heroPosition.x;
  fVar3 = (moby->pos).z - g_heroPosition.z;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 2.0) {
    MiscLevelFlags.Raritanium = true;
    libc::snprintf(&g_toastMsgBuff,"Raritanium Acquired");
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    auVar4 = loadVectorLeftIndexed(4,0x3551f8);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    g_toastMsgTimer =
         storeVectorElementWordIndexed
                   (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x5c80,0xa10000);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 003552f0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M372_003552f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M372_003552f0(void)

{
  DAT_008404e8 = 0x10000;
  return;
}



//==== 00355370  ns=mobyupdate_unsorted  size=0x11a4
// sig: undefined UpdateMoby_372(MobyInstance * moby)
// callers(0): 
// callees(17): 00055ab8 stub::STUB_00055ab8_RET_0; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 005c8318 rand; 005e8338 FUN_005e8338

/* Moby 372 */

void mobyupdate_unsorted::UpdateMoby_372(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined1 auStack_80 [16];
  float local_70;
  float local_6c;
  undefined4 local_68;
  f32 local_60;
  f32 local_5c;
  float local_58;
  f32 local_54;
  undefined1 auStack_50 [16];
  MobyInstance *local_40;
  undefined4 local_3c;
  undefined4 local_30;
  
  pfVar6 = (float *)moby->pVar;
  uVar16 = ZEXT48(pfVar6);
  iVar14 = mobyutil::MB_damage(moby,0x210000,0);
  fastfunc::FastDecTimerS32(uVar16 + 0x184);
  if (((iVar14 != 0) && (moby->state != '\x05' && moby->state != 'c')) && (pfVar6[0x61] == 0.0)) {
    pfVar6[0x18] = 0.008;
    pfVar6[0x19] = 0.0005;
    fVar8 = DAT_0084051c;
    fVar4 = mobyutil::g_FrameTime;
    fVar3 = DAT_0084051c * mobyutil::g_FrameTime;
    pfVar6[0x1d] = 1.26117e-44;
    pfVar6[0x1a] = fVar3;
    fVar3 = DAT_00840518;
    *(undefined1 *)((int)pfVar6 + 0x8d) = 0;
    pfVar6[0x1b] = fVar3 * fVar4;
    fVar3 = *pfVar6 - *(float *)(iVar14 + 0x2c);
    *pfVar6 = fVar3;
    if (fVar3 <= 0.0) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(undefined1 *)((int)pfVar6 + 0x47) = 0xfa;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      mobyutil::MB_StartKick(moby,uVar16 + 0x50);
      pfVar6[0x28] = 2.0;
      pfVar6[0x29] = 8.0;
      moby->state = 'c';
    }
    else {
      uVar15 = *(uint *)(iVar14 + 0x2c);
      if ((int)(((uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15) - ((int)uVar15 >> 0x1f)) < 0x3f800000) {
        *(undefined1 *)((int)pfVar6 + 0x47) = 0x78;
      }
      else if (uVar15 == 0x3f800000) {
        sVar5 = *(short *)(*(int *)(iVar14 + 0x20) + 0xa6);
        if ((sVar5 == 0xb0) || (sVar5 == 0xb1)) {
          auVar20 = ZEXT416(0xffffffff);
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          *(undefined1 *)((int)pfVar6 + 0x47) = 0x78;
          auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar20 = loadVectorLeftIndexed(4,0x355308);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar20 = vectorMultiplyAddFloatingPoint
                              (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60
                               ,auVar21);
          auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x184,
                             uVar16);
          *(undefined4 *)((uint)(pfVar6 + 0x61) & 0xfffffffc) = uVar7;
        }
        else {
          *(undefined1 *)((int)pfVar6 + 0x47) = 0x78;
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          mobyutil::MB_StartKick(moby,uVar16 + 0x50);
          auVar20 = ZEXT416(0xffffffff);
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          pfVar6[0x28] = 4.0;
          auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          pfVar6[0x29] = 9.0;
          moby->state = '\x05';
          auVar20 = loadVectorLeftIndexed(4,0x355308);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar20 = vectorMultiplyAddFloatingPoint
                              (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60
                               ,auVar21);
          auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x184,
                             uVar16);
          *(undefined4 *)((uint)(pfVar6 + 0x61) & 0xfffffffc) = uVar7;
        }
      }
      else {
        fVar4 = fVar8 * 2.0 * fVar4;
        if (uVar15 == 0x40000000) {
          auVar20 = ZEXT416(0xffffffff);
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar20 = loadVectorLeftIndexed(4,0x355308);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar20 = vectorMultiplyAddFloatingPoint
                              (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60
                               ,auVar21);
          auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x184,
                             uVar16);
          *(undefined4 *)((uint)(pfVar6 + 0x61) & 0xfffffffc) = uVar7;
          *(undefined1 *)((int)pfVar6 + 0x47) = 200;
          pfVar6[0x1a] = fVar4;
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          mobyutil::MB_StartKick(moby,uVar16 + 0x50);
          pfVar6[0x28] = 2.0;
          pfVar6[0x29] = 8.0;
          moby->state = '\x06';
        }
        else {
          auVar20 = ZEXT416(0xffffffff);
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar20 = loadVectorLeftIndexed(4,0x355308);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar20 = vectorMultiplyAddFloatingPoint
                              (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60
                               ,auVar21);
          auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x184,
                             uVar16);
          *(undefined4 *)((uint)(pfVar6 + 0x61) & 0xfffffffc) = uVar7;
          *(undefined1 *)((int)pfVar6 + 0x47) = 0xfa;
          pfVar6[0x1a] = fVar4;
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          mobyutil::MB_StartKick(moby,uVar16 + 0x50);
          pfVar6[0x28] = 2.0;
          pfVar6[0x29] = 8.0;
          moby->state = '\a';
        }
      }
    }
    mobyutil::MB_UpdateLightsTransition(moby,uVar16 + 0x40);
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        moby->state = '\x01';
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        mobyutil::MB_InitDefaultParams(pfVar6 + 0x2c);
        uVar15 = g_heroMobyPtr->light;
        moby->color = g_heroMobyPtr->color;
        moby->light = uVar15;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        pfVar6[0x2f] = 2.0;
        pfVar6[0x2e] = 2.0;
        auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        pfVar6[0x35] = 0.1199;
        *pfVar6 = 5.0;
        pfVar6[0x61] = 0.0;
        fVar3 = (moby->pos).x;
        pfVar6[0x2c] = 1.27378e-42;
        pfVar6[0x40] = fVar3;
        pfVar6[0x41] = (moby->pos).y;
        pfVar6[0x42] = (moby->pos).z;
        pfVar6[0x43] = (moby->pos).w;
        auVar20 = loadVectorLeftIndexed(4,0x355308);
        auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar20 = vectorMultiplyAddFloatingPoint
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x170,
                           uVar16);
        *(undefined4 *)((uint)(pfVar6 + 0x5c) & 0xfffffffc) = uVar7;
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(moby,0,0,3);
        }
      }
      else {
        uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,
                   &DAT_00355308,uVar16 + 0x174);
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        if ((((pfVar6[0x5e] <= fVar3) && ((pfVar6[0x5e] + 8.0 <= fVar3 || (pfVar6[6] == 0.0)))) ||
            (fVar3 < 2.0)) ||
           ((iVar14 = fastfunc::FastDecTimerS32(uVar16 + 0x170), iVar14 == 0 ||
            (8.0 <= ABS((moby->pos).z - g_heroPosition.z))))) {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 2.0) &&
             (moby->state = '\x04', moby->animationId != '\x01')) {
            mobyutil::MB_SetAnimation(moby,1,0,3);
          }
        }
        else {
          local_3c = 0;
          local_30 = 0;
          local_40 = moby;
          iVar14 = stub::STUB_00055ab8_RET_0(local_b0,local_a0,0,moby,auStack_50);
          if (((iVar14 != 0) && (CollOutput.pMoby == g_heroMobyPtr)) &&
             (moby->state = '\x03', moby->animationId != '\a')) {
            mobyutil::MB_SetAnimation(moby,7,0,3);
          }
        }
      }
    }
    else if (2 < bVar1) {
      if (bVar1 < 4) {
        if (pfVar6[99] == 0.0) {
          uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                (double)(g_heroPosition.y - (moby->pos).y));
          mobyutil::OrganicDeltAngSpeed
                    (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,
                     &DAT_00355308,uVar16 + 0x174);
        }
        else {
          dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          mobyutil::OrganicDeltAngSpeed
                    ((double)(float)(dVar18 + 0.7853981852531433),0x3f947ae140000000,
                     0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_00355308,uVar16 + 0x174);
        }
        fVar3 = (moby->rotation).z;
        fVar4 = fVar3 + 1.5707963;
        fVar8 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar8 = fVar3;
        }
        fVar10 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar10 = fVar4;
        }
        fVar9 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
          fVar9 = fVar8;
        }
        fVar3 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar10 < 0.0) {
          fVar3 = fVar10;
        }
        fVar4 = fVar9 * fVar9;
        fVar8 = fVar3 * fVar3;
        fVar12 = fVar4 * fVar4 * fVar9;
        dVar19 = 2.0;
        local_88 = 0;
        fVar10 = fVar8 * fVar8 * fVar3;
        fVar13 = fVar4 * fVar12;
        fVar11 = fVar8 * fVar10;
        local_8c = (fVar4 * fVar13 * 2.601887e-06 +
                   fVar13 * -0.0001980741 +
                   fVar12 * 0.0083330255 + fVar4 * fVar9 * -0.16666657 + fVar9) * 2.0;
        local_90 = (fVar8 * fVar11 * 2.601887e-06 +
                   fVar11 * -0.0001980741 +
                   fVar10 * 0.0083330255 + fVar8 * fVar3 * -0.16666657 + fVar3) * 2.0;
        mobyutil::MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)(pfVar6 + 0x2c),&local_90,auStack_80);
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        dVar18 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        if (dVar19 <= dVar18) {
          if (((double)(pfVar6[0x5e] + 8.0) < dVar18) &&
             (moby->state = '\x01', moby->animationId != '\0')) {
            mobyutil::MB_SetAnimation(moby,0,0,3);
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,3);
          }
        }
      }
      else {
        uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,
                   &DAT_00355308,uVar16 + 0x174);
        if ((((moby->updateId == moby->animationId) &&
             (dVar18 = (double)mobyfunc::BlendAnimFrame(moby), 12.0 <= dVar18)) &&
            (dVar18 = (double)mobyfunc::BlendAnimFrame(moby), dVar18 < 13.0)) &&
           (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) {
          fVar3 = (moby->pos).y;
          fVar4 = (moby->pos).x;
          fVar8 = fVar3 - g_heroPosition.y;
          fVar10 = fVar4 - g_heroPosition.x;
          if (SQRT(fVar10 * fVar10 + fVar8 * fVar8) < 2.5) {
            dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - fVar4),
                                          (double)(g_heroPosition.y - fVar3));
            dVar18 = (double)fastfunc::FastSubRots((float)dVar18,(moby->rotation).z);
            if (dVar18 < 0.2617993950843811) {
              fVar3 = (moby->rotation).z;
              fVar4 = fVar3 + 1.5707963;
              fVar8 = 3.1415925 - fVar3;
              if (fVar3 - (3.1415925 - fVar3) < 0.0) {
                fVar8 = fVar3;
              }
              fVar10 = 3.1415925 - fVar4;
              if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                fVar10 = fVar4;
              }
              fVar9 = -3.1415925 - fVar3;
              if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
                fVar9 = fVar8;
              }
              fVar3 = -3.1415925 - fVar4;
              if ((-3.1415925 - fVar4) - fVar10 < 0.0) {
                fVar3 = fVar10;
              }
              fVar4 = fVar9 * fVar9;
              fVar8 = fVar3 * fVar3;
              fVar12 = fVar4 * fVar4 * fVar9;
              local_68 = 0;
              fVar10 = fVar8 * fVar8 * fVar3;
              fVar13 = fVar4 * fVar12;
              fVar11 = fVar8 * fVar10;
              local_6c = (fVar4 * fVar13 * 2.601887e-06 +
                         fVar13 * -0.0001980741 +
                         fVar12 * 0.0083330255 + fVar4 * fVar9 * -0.16666657 + fVar9) * 0.2;
              local_70 = (fVar8 * fVar11 * 2.601887e-06 +
                         fVar11 * -0.0001980741 +
                         fVar10 * 0.0083330255 + fVar8 * fVar3 * -0.16666657 + fVar3) * 0.2;
              local_60 = (g_heroMobyPtr->pos).x;
              local_5c = (g_heroMobyPtr->pos).y;
              local_54 = (g_heroMobyPtr->pos).w;
              local_58 = (g_heroMobyPtr->pos).z + 0.75;
              mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x355308,&local_60,&local_70);
            }
          }
        }
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\0')) {
          mobyutil::MB_SetAnimation(moby,0,0,3);
        }
      }
    }
  }
  else if (bVar1 == 99) {
    uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar6 + 0x14));
    if ((uVar15 & 0x40) != 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 8) {
    dVar18 = (double)mobyfunc::BlendAnimFrame(moby);
    uVar2 = moby->animationId;
    if (dVar18 == 20.0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      fVar3 = (moby->pos).z;
      fVar4 = SQRT(fVar8 * fVar8 + fVar4 * fVar4);
      if ((fVar4 < 2.0) && (ABS(fVar3 - g_heroPosition.z) < 4.0)) {
        moby->state = '\x04';
        if (uVar2 == '\x01') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((fVar4 < 8.0) && (ABS(fVar3 - g_heroPosition.z) < 4.0)) {
        moby->state = '\x03';
        if (uVar2 == '\a') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,7,5,3);
        return;
      }
      moby->state = '\x01';
      if (uVar2 == '\0') {
        return;
      }
      mobyutil::MB_SetAnimation(moby,0,5,3);
      return;
    }
  }
  else if (bVar1 == 7) {
    uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar6 + 0x14));
    if ((uVar15 & 0x40) == 0) {
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      moby->state = '\b';
      if (moby->animationId != '\x11') {
        mobyutil::MB_SetAnimation(moby,0x11,0,3);
      }
    }
  }
  else if (bVar1 == 6) {
    uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar6 + 0x14));
    uVar2 = moby->animationId;
    if ((uVar15 & 0x40) != 0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      fVar3 = (moby->pos).z;
      fVar4 = SQRT(fVar8 * fVar8 + fVar4 * fVar4);
      if ((fVar4 < 2.0) && (ABS(fVar3 - g_heroPosition.z) < 4.0)) {
        moby->state = '\x04';
        if (uVar2 == '\x01') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((fVar4 < 8.0) && (ABS(fVar3 - g_heroPosition.z) < 4.0)) {
        moby->state = '\x03';
        if (uVar2 == '\a') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,7,5,3);
        return;
      }
      moby->state = '\x01';
      if (uVar2 == '\0') {
        return;
      }
      mobyutil::MB_SetAnimation(moby,0,5,3);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 5) {
    uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar6 + 0x14));
    uVar2 = moby->animationId;
    if ((uVar15 & 1) != 0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      fVar3 = (moby->pos).z;
      fVar4 = SQRT(fVar8 * fVar8 + fVar4 * fVar4);
      if ((fVar4 < 5.0) && (ABS(fVar3 - g_heroPosition.z) < 2.0)) {
        moby->state = '\x04';
        if (uVar2 == '\x01') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((fVar4 < 8.0) && (ABS(fVar3 - g_heroPosition.z) < 2.0)) {
        moby->state = '\x03';
        if (uVar2 == '\a') {
          return;
        }
        mobyutil::MB_SetAnimation(moby,7,5,3);
        return;
      }
      moby->state = '\x01';
      if (uVar2 == '\0') {
        return;
      }
      mobyutil::MB_SetAnimation(moby,0,5,3);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  mobyutil::MB_ColorDyingMoby(moby,uVar16 + 0x40);
  if (pfVar6[6] != 0.0) {
    pfVar6[6] = 0.0;
  }
  return;
}



//==== 00356514  ns=mobyupdate_helpers  size=0x14
// sig: undefined M375_00356514(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M375_00356514(void)

{
  DAT_00840570 = 0x10000;
  return;
}



//==== 00356528  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M375_00356528(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::M375_00356528(int param_1)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(ROCKET_0100|GREEN_SHIP_0077);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    piVar2 = (int *)pMVar3->pVar;
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    fVar1 = *(f32 *)(param_1 + 0x48);
    *piVar2 = param_1;
    (pMVar3->rotation).z = fVar1;
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::UpdateMobyTransform(pMVar3);
    mobyutil::MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}



//==== 00356628  ns=mobyupdate_unsorted  size=0xccc
// sig: undefined UpdateMoby_375(MobyInstance * moby)
// callers(0): 
// callees(15): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 003487b8 FUN_003487b8; 004fffb4 fastfunc::FastDecTimerS16; 005001fc fastfunc::FastMemSet; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 005cd098 libc::printf
// strings: 00656598: 'error, GunpVar was NULL!\n'

/* Moby 375 */

void mobyupdate_unsorted::UpdateMoby_375(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  short sVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f26;
  double dVar24;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x1d0;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar11;
  puVar7[0x3c] = in_LR;
  puVar7[0x34] = in_f26;
  puVar7[0x35] = in_f27;
  puVar7[0x36] = in_f28;
  puVar7[0x37] = in_f29;
  puVar7[0x38] = in_f30;
  puVar7[0x39] = in_f31;
  puVar7[0x33] = unaff_r31;
  puVar7[0x32] = unaff_r30;
  puVar7[0x31] = unaff_r29;
  puVar7[0x30] = unaff_r28;
  puVar7[0x2f] = unaff_r27;
  if ((moby != (MobyInstance *)0x0) && (piVar6 = (int *)moby->pVar, piVar6 != (int *)0x0)) {
    iVar15 = *(int *)(*piVar6 + 0x78);
    if (iVar15 == 0) {
      libc::printf("error, GunpVar was NULL!\n");
    }
    uVar1 = moby->state;
    if (uVar1 == '\x05') {
      if (*(char *)((int)piVar6 + 0x11) != '\0') {
        mobyfunc::DetachManipulator(moby,piVar6 + 4);
        fastfunc::FastMemSet(piVar6 + 4,0,0x40);
      }
      mobyfunc::DeleteMoby(moby);
    }
    else if (uVar1 == '\x04') {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->unk58 = 0.0;
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      dVar22 = (double)mobyfunc::BlendAnimFrame(moby);
      dVar23 = (double)(moby->pos).x;
      dVar27 = (double)(moby->pos).y;
      dVar25 = (double)g_heroPosition.y;
      fVar2 = ABS((float)((double)g_heroPosition.x - dVar23));
      fVar4 = ABS((float)(dVar25 - dVar27));
      *(float *)((int)puVar7 + 0xbc) = (float)((double)g_heroPosition.x - dVar23);
      *(float *)(puVar7 + 0x18) = (float)(dVar25 - dVar27);
      dVar21 = (double)((moby->pos).z + 0.3);
      *(float *)((int)puVar7 + 0xc4) = fVar2 - fVar4;
      dVar26 = 0.0;
      dVar25 = (double)(moby->rotation).z;
      uVar12 = (ulonglong)(*(uint *)((int)puVar7 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x18) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar7 + 0xbc));
      if (*(float *)((int)puVar7 + 0xc4) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
      fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)(puVar7 + 0x18));
      if (*(float *)((int)puVar7 + 0xc4) - 0.0 < 0.0) {
        fVar10 = fVar2;
      }
      dVar24 = dVar26;
      if (0.0 < fVar5) {
        lVar13 = uVar11 - 0x1c0;
        lVar17 = uVar11 - 0xd0;
        lVar19 = uVar11 - 0xc0;
        lVar20 = 2;
        fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
        fVar2 = fVar5 * fVar5;
        *(float *)((int)puVar7 + 0x10c) = fVar5;
        *(float *)((int)puVar7 + 0x104) = fVar5;
        *(float *)(puVar7 + 0x21) = fVar5;
        *(float *)(puVar7 + 0x20) = fVar5;
        fVar5 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0x104) = *(float *)((int)puVar7 + 0x104) * fVar2;
        *(float *)(puVar7 + 0x21) = *(float *)(puVar7 + 0x21) * fVar5;
        *(float *)((int)puVar7 + 0x10c) = *(float *)((int)puVar7 + 0x10c) * fVar5 * fVar2;
        do {
          *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0xf0) * fVar5 * fVar5;
          iVar8 = (int)lVar17;
          lVar13 = lVar13 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar5 * fVar5;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xd0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar5 = *pfVar18;
          fVar2 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0x100) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = 2;
        lVar13 = lVar14;
        do {
          iVar8 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar9 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar8 + 0x100)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar4);
      }
      dVar24 = (double)fastfunc::FastDiffRots(dVar24,dVar25);
      dVar25 = (double)fastfunc::FastWrapRot
                                 ((float)dVar25,(float)((double)(DAT_0071f408 * 0.05) * dVar24));
      (moby->rotation).z = (float)dVar25;
      dVar25 = (double)g_heroPosition.z;
      fVar5 = SQRT((float)(dVar23 - (double)g_heroPosition.x) *
                   (float)(dVar23 - (double)g_heroPosition.x) +
                   (float)(dVar27 - (double)g_heroPosition.y) *
                   (float)(dVar27 - (double)g_heroPosition.y));
      *(float *)((int)puVar7 + 0xb4) = (float)(dVar25 - dVar21);
      dVar23 = ABS((double)(float)(dVar25 - dVar21));
      dVar27 = ABS((double)fVar5);
      *(float *)(puVar7 + 0x16) = fVar5;
      *(float *)(puVar7 + 0x17) = (float)(dVar27 - dVar23);
      dVar21 = (double)(float)piVar6[0x15];
      uVar12 = (ulonglong)(*(uint *)(puVar7 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xb4) >> 0x1d) & 4;
      dVar25 = ABS((double)*(float *)(puVar7 + 0x16));
      if ((double)*(float *)(puVar7 + 0x17) - dVar26 < 0.0) {
        dVar25 = dVar23;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar7 + 0xb4));
      if ((double)*(float *)(puVar7 + 0x17) - dVar26 < 0.0) {
        dVar23 = dVar27;
      }
      fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      if (dVar26 < dVar25) {
        lVar13 = uVar11 - 0x1c0;
        lVar19 = uVar11 - 0xe0;
        lVar17 = uVar11 - 0xf0;
        lVar20 = 2;
        fVar2 = (float)(dVar23 - dVar25) / (float)(dVar23 + dVar25);
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0xec) = fVar2;
        *(float *)((int)puVar7 + 0xe4) = fVar2;
        *(float *)(puVar7 + 0x1d) = fVar2;
        *(float *)(puVar7 + 0x1c) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar7 + 0xe4) = *(float *)((int)puVar7 + 0xe4) * fVar3;
        *(float *)(puVar7 + 0x1d) = *(float *)(puVar7 + 0x1d) * fVar2;
        *(float *)((int)puVar7 + 0xec) = *(float *)((int)puVar7 + 0xec) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xd0) * fVar2 * fVar2;
          iVar8 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xf0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xe0) * fVar2;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar13 = 2;
        do {
          iVar8 = (int)lVar14;
          iVar9 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar8 + 0xe0)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar25 = (double)fastfunc::FastDiffRots(-dVar26,dVar21);
      dVar25 = (double)fastfunc::FastWrapRot
                                 ((float)dVar21,(float)((double)(DAT_0071f408 * 0.01) * dVar25));
      piVar6[0x15] = (int)(float)dVar25;
      fastfunc::FastQuaternionToEuler(piVar6 + 8,1);
      if (dVar22 == 11.0) {
        mobyutil::MB_SphericalToVector
                  (mobyutil::g_FrameTime * 25.0,(moby->rotation).z,-(float)piVar6[0x15],
                   (float *)(puVar7 + 0x12));
        *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) + *(float *)(iVar15 + 0x30);
        *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) + *(float *)(iVar15 + 0x34);
        *(float *)(puVar7 + 0x13) = *(float *)(puVar7 + 0x13) + *(float *)(iVar15 + 0x38);
        mobyfunc::GetBonePosition(moby,1,uVar11 - 0x130);
        fVar5 = *(float *)(puVar7 + 0x14) + *(float *)(puVar7 + 0x12);
        fVar2 = *(float *)((int)puVar7 + 0xa4) + *(float *)((int)puVar7 + 0x94);
        fVar4 = *(float *)(puVar7 + 0x15) + *(float *)(puVar7 + 0x13);
        *(float *)(puVar7 + 0x14) = fVar5;
        *(float *)((int)puVar7 + 0xa4) = fVar2;
        *(float *)(puVar7 + 0x15) = fVar4;
        *(float *)(puVar7 + 8) = fVar5;
        *(float *)(puVar7 + 9) = fVar4;
        *(float *)(puVar7 + 10) = *(float *)(puVar7 + 0x12);
        *(float *)(puVar7 + 0xb) = *(float *)(puVar7 + 0x13);
        *(float *)((int)puVar7 + 0x44) = fVar2;
        *(undefined4 *)((int)puVar7 + 0x4c) = *(undefined4 *)((int)puVar7 + 0xac);
        *(float *)((int)puVar7 + 0x54) = *(float *)((int)puVar7 + 0x94);
        *(undefined4 *)((int)puVar7 + 0x5c) = *(undefined4 *)((int)puVar7 + 0x9c);
        puVar7[0xe] = 0;
        FUN_003487b8(0x3fd0000000000000,0xbff0000000000000,0x3fb99999a0000000,0x3fc99999a0000000,
                     moby,0,puVar7[8],puVar7[9],puVar7[10],puVar7[0xb],3);
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\x02') {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
        puVar7[0x2c] = (longlong)(int)(animationSpeed * 0.5);
        mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar7 + 0x164));
      }
      dVar26 = (double)(moby->pos).x;
      dVar25 = (double)(moby->pos).y;
      dVar22 = (double)g_heroPosition.y;
      fVar2 = ABS((float)((double)g_heroPosition.x - dVar26));
      fVar4 = ABS((float)(dVar22 - dVar25));
      *(float *)((int)puVar7 + 0xd4) = (float)((double)g_heroPosition.x - dVar26);
      *(float *)(puVar7 + 0x1b) = (float)(dVar22 - dVar25);
      dVar27 = (double)((moby->pos).z + 0.3);
      *(float *)((int)puVar7 + 0xdc) = fVar2 - fVar4;
      dVar22 = 0.0;
      uVar12 = (ulonglong)(*(uint *)((int)puVar7 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x1b) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar7 + 0xd4));
      if (*(float *)((int)puVar7 + 0xdc) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
      fVar3 = ABS(*(float *)(puVar7 + 0x1b));
      if (*(float *)((int)puVar7 + 0xdc) - 0.0 < 0.0) {
        fVar3 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      dVar23 = dVar22;
      if (0.0 < fVar5) {
        lVar13 = uVar11 - 0x1c0;
        lVar19 = uVar11 - 0x80;
        lVar17 = uVar11 - 0x90;
        lVar20 = 2;
        fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
        fVar3 = fVar5 * fVar5;
        *(float *)((int)puVar7 + 0x14c) = fVar5;
        *(float *)((int)puVar7 + 0x144) = fVar5;
        *(float *)(puVar7 + 0x29) = fVar5;
        *(float *)(puVar7 + 0x28) = fVar5;
        fVar5 = fVar3 * fVar3;
        *(float *)((int)puVar7 + 0x144) = *(float *)((int)puVar7 + 0x144) * fVar3;
        *(float *)(puVar7 + 0x29) = *(float *)(puVar7 + 0x29) * fVar5;
        *(float *)((int)puVar7 + 0x14c) = *(float *)((int)puVar7 + 0x14c) * fVar5 * fVar3;
        do {
          *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x130) * fVar5 * fVar5;
          iVar15 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0x90;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar5 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x140) * fVar5;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar17 = 2;
        lVar13 = lVar14;
        do {
          iVar15 = (int)lVar13;
          iVar8 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar15 + 0x140)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar2);
      }
      dVar24 = (double)(moby->rotation).z;
      dVar21 = (double)fastfunc::FastDiffRots(dVar23,dVar24);
      dVar21 = (double)fastfunc::FastWrapRot
                                 ((float)dVar24,(float)((double)(DAT_0071f408 * 0.05) * dVar21));
      (moby->rotation).z = (float)dVar21;
      dVar21 = (double)g_heroPosition.z;
      fVar5 = SQRT((float)(dVar26 - (double)g_heroPosition.x) *
                   (float)(dVar26 - (double)g_heroPosition.x) +
                   (float)(dVar25 - (double)g_heroPosition.y) *
                   (float)(dVar25 - (double)g_heroPosition.y));
      *(float *)((int)puVar7 + 0xcc) = (float)(dVar21 - dVar27);
      dVar27 = ABS((double)(float)(dVar21 - dVar27));
      dVar26 = ABS((double)fVar5);
      *(float *)(puVar7 + 0x19) = fVar5;
      *(float *)(puVar7 + 0x1a) = (float)(dVar26 - dVar27);
      dVar21 = (double)(float)piVar6[0x15];
      uVar12 = (ulonglong)(*(uint *)(puVar7 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0xcc) >> 0x1d) & 4;
      dVar25 = ABS((double)*(float *)(puVar7 + 0x19));
      if ((double)*(float *)(puVar7 + 0x1a) - dVar22 < 0.0) {
        dVar25 = dVar27;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
      dVar27 = ABS((double)*(float *)((int)puVar7 + 0xcc));
      if ((double)*(float *)(puVar7 + 0x1a) - dVar22 < 0.0) {
        dVar27 = dVar26;
      }
      fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      if (dVar22 < dVar25) {
        lVar13 = uVar11 - 0x1c0;
        lVar17 = uVar11 - 0xb0;
        lVar19 = uVar11 - 0xa0;
        lVar20 = 2;
        fVar2 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 300) = fVar2;
        *(float *)((int)puVar7 + 0x124) = fVar2;
        *(float *)(puVar7 + 0x25) = fVar2;
        *(float *)(puVar7 + 0x24) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar7 + 0x124) = *(float *)((int)puVar7 + 0x124) * fVar3;
        *(float *)(puVar7 + 0x25) = *(float *)(puVar7 + 0x25) * fVar2;
        *(float *)((int)puVar7 + 300) = *(float *)((int)puVar7 + 300) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x110) * fVar2 * fVar2;
          iVar15 = (int)lVar17;
          lVar13 = lVar13 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar11 - 0xb0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x120) * fVar2;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          iVar8 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar15 + 0x120)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar22 = -dVar22;
      dVar25 = (double)fastfunc::FastDiffRots(dVar22,dVar21);
      dVar25 = (double)fastfunc::FastWrapRot
                                 ((float)dVar21,(float)((double)(DAT_0071f408 * 0.01) * dVar25));
      piVar6[0x15] = (int)(float)dVar25;
      fastfunc::FastQuaternionToEuler(piVar6 + 8,1);
      iVar15 = fastfunc::FastDecTimerS16(piVar6 + 0x14);
      if (iVar15 != 0) {
        dVar25 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar23);
        dVar26 = 0.20000000298023224;
        if (((dVar25 < 0.20000000298023224) &&
            (dVar22 = (double)fastfunc::FastSubRots((float)piVar6[0x15],(float)dVar22),
            dVar22 < dVar26)) && (moby->enabled != '\0')) {
          moby->state = '\x03';
          if (moby->animationId != '\x01') {
            puVar7[0x2c] = (longlong)(int)(animationSpeed * 0.5);
            mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar7 + 0x164));
          }
          sVar16 = *(short *)((int)piVar6 + 0x52) + 1;
          *(short *)((int)piVar6 + 0x52) = sVar16;
          if (sVar16 == 3) {
            *(undefined2 *)(piVar6 + 0x14) = 0xf0;
            *(undefined2 *)((int)piVar6 + 0x52) = 0;
          }
          else {
            *(undefined2 *)(piVar6 + 0x14) = 0x1e;
          }
        }
      }
    }
    else if (uVar1 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x03') {
          puVar7[0x2c] = (longlong)(int)(animationSpeed * 0.5);
          mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar7 + 0x164));
        }
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      fastfunc::FastMemSet(piVar6 + 4,0,0x40);
      mobyfunc::AttachManipulator(moby,0,piVar6 + 4);
      moby->state = '\x01';
      piVar6[0x15] = 0;
    }
  }
  return;
}



//==== 003572f4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M376_003572f4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M376_003572f4(void)

{
  DAT_008405e0 = 0x10000;
  return;
}



//==== 00357308  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M376_00357308(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::M376_00357308(int param_1)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(ROCKET_0100|BEIGE_SHIP);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    piVar2 = (int *)pMVar3->pVar;
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    fVar1 = *(f32 *)(param_1 + 0x48);
    *piVar2 = param_1;
    (pMVar3->rotation).z = fVar1;
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::UpdateMobyTransform(pMVar3);
    mobyutil::MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}



//==== 003573f0  ns=mobyupdate_unsorted  size=0x550
// sig: undefined UpdateMoby_376(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 00362820 FUN_00362820; 004fffb4 fastfunc::FastDecTimerS16

/* Moby 376 */

void mobyupdate_unsorted::UpdateMoby_376(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  short sVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x100;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar11;
  puVar10[0x22] = in_LR;
  puVar10[0x1b] = in_f27;
  puVar10[0x1c] = in_f28;
  puVar10[0x1d] = in_f29;
  puVar10[0x1e] = in_f30;
  puVar10[0x1f] = in_f31;
  puVar10[0x1a] = unaff_r31;
  puVar10[0x19] = unaff_r30;
  puVar10[0x18] = unaff_r29;
  if (moby != (MobyInstance *)0x0) {
    piVar7 = (int *)moby->pVar;
    if (piVar7 != (int *)0x0) {
      uVar4 = moby->state;
      if (uVar4 == '\x05') {
        mobyfunc::DeleteMoby(moby);
      }
      else if (uVar4 == '\x04') {
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->unk58 = 0.0;
          moby->state = '\x05';
        }
      }
      else if (uVar4 == '\x03') {
        moby->state = '\x02';
      }
      else if (uVar4 == '\x02') {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
          puVar10[0x16] = (longlong)(int)(animationSpeed * 0.5);
          mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar10 + 0xb4));
        }
        dVar29 = (double)(moby->pos).x;
        dVar30 = (double)(moby->pos).y;
        dVar31 = 0.0;
        fVar2 = ABS((float)((double)g_heroPosition.x - dVar29));
        fVar6 = ABS((float)((double)g_heroPosition.y - dVar30));
        dVar27 = (double)((moby->pos).z + 0.6);
        dVar28 = (double)(moby->pos).w;
        fVar5 = fVar2;
        if ((fVar2 - fVar6) - 0.0 < 0.0) {
          fVar5 = fVar6;
        }
        if ((fVar2 - fVar6) - 0.0 < 0.0) {
          fVar6 = fVar2;
        }
        if (0.0 < fVar5) {
          lVar17 = uVar11 - 0xf0;
          lVar12 = uVar11 - 0x60;
          lVar15 = uVar11 - 0x70;
          lVar19 = 2;
          fVar5 = (fVar6 - fVar5) / (fVar6 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar10 + 0x9c) = fVar5;
          *(float *)((int)puVar10 + 0x94) = fVar5;
          *(float *)(puVar10 + 0x13) = fVar5;
          *(float *)(puVar10 + 0x12) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) * fVar6;
          *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar5;
          *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x80) * fVar5 * fVar5;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar12 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
            lVar12 = lVar12 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          pfVar16 = (float *)&DAT_007358e0;
          lVar15 = uVar11 - 0x70;
          lVar17 = 4;
          lVar12 = lVar1;
          do {
            fVar5 = *pfVar16;
            fVar6 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar12 + 0x90) = *(float *)((int)lVar12 + 0x90) * fVar5;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        iVar13 = fastfunc::FastDecTimerS16(piVar7 + 1);
        if (iVar13 != 0) {
          iVar13 = *(int *)(*piVar7 + 0x78);
          if ((DAT_0071f408 * 0.05 <
               SQRT(*(float *)(iVar13 + 0x38) * *(float *)(iVar13 + 0x38) +
                    *(float *)(iVar13 + 0x30) * *(float *)(iVar13 + 0x30) +
                    *(float *)(iVar13 + 0x34) * *(float *)(iVar13 + 0x34))) &&
             (moby->enabled != '\0')) {
            *(undefined4 *)((int)puVar10 + 0x7c) = 0;
            *(undefined4 *)(puVar10 + 0xf) = 0;
            *(undefined4 *)((int)puVar10 + 0x74) = 0;
            *(undefined4 *)(puVar10 + 0xe) = 0;
            fVar5 = mobyutil::g_FrameTime * 7.0;
            *(float *)(puVar10 + 0xf) = fVar5;
            uVar8 = *(uint *)(*piVar7 + 0x78);
            uVar18 = (ulonglong)uVar8;
            auVar32 = loadVectorLeftIndexed(0x30,uVar18);
            auVar33 = loadVectorRightIndexed(0x40,uVar18);
            dVar22 = (double)*(float *)(uVar8 + 0x30);
            auVar32 = (auVar32 | auVar33) >> 0x60 & (undefined1  [16])0xffffffff;
            uVar9 = storeVectorElementWordIndexed
                              (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x70,
                               lVar1);
            *(undefined4 *)(puVar10 + 0xe) = uVar9;
            dVar21 = (double)*(float *)(uVar8 + 0x34);
            auVar32 = loadVectorLeftIndexed(0x34,uVar18);
            auVar33 = loadVectorRightIndexed(0x44,uVar18);
            auVar32 = (auVar32 | auVar33) >> 0x60 & (undefined1  [16])0xffffffff;
            uVar9 = storeVectorElementWordIndexed
                              (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x74,
                               lVar1);
            *(undefined4 *)((int)puVar10 + 0x74) = uVar9;
            fVar5 = fVar5 + *(float *)(uVar8 + 0x38);
            dVar20 = (double)fVar5;
            *(float *)(puVar10 + 0xf) = fVar5;
            if (SQRT((float)(dVar20 * dVar20 +
                            (double)(float)(dVar22 * dVar22 + (double)(float)(dVar21 * dVar21)))) <
                DAT_0071f408 * 0.3) {
              fVar6 = (float)((double)g_heroPosition.y - dVar30);
              fVar2 = (float)((double)g_heroPosition.x - dVar29);
              fVar3 = (float)((double)g_heroPosition.z - dVar27);
              dVar26 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar6 * fVar6);
              fVar5 = (float)((double)(DAT_0071f408 * 0.4) / dVar26);
              dVar25 = dVar31;
              if (dVar31 - dVar26 < 0.0) {
                dVar25 = (double)(fVar5 * fVar3);
              }
              dVar24 = dVar31;
              if (dVar31 - dVar26 < 0.0) {
                dVar24 = (double)(fVar5 * fVar6);
              }
              dVar23 = dVar31;
              if (dVar31 - dVar26 < 0.0) {
                dVar23 = (double)(fVar5 * fVar2);
              }
              if (dVar26 - dVar31 < 0.0) {
                dVar25 = (double)(fVar5 * fVar3);
              }
              if (dVar26 - dVar31 < 0.0) {
                dVar24 = (double)(fVar5 * fVar6);
              }
              if (dVar26 - dVar31 < 0.0) {
                dVar23 = (double)(fVar5 * fVar2);
              }
              dVar25 = dVar20 + dVar25;
              dVar20 = (double)(float)dVar25;
              dVar24 = dVar21 + dVar24;
              dVar21 = (double)(float)dVar24;
              dVar23 = dVar22 + dVar23;
              dVar22 = (double)(float)dVar23;
              *(float *)(puVar10 + 0xf) = (float)dVar25;
              *(float *)((int)puVar10 + 0x74) = (float)dVar24;
              *(float *)(puVar10 + 0xe) = (float)dVar23;
            }
            *(float *)((int)puVar10 + 0x8c) = (float)dVar28;
            *(float *)(puVar10 + 0x10) = (float)(dVar29 + dVar22);
            *(float *)((int)puVar10 + 0x84) = (float)(dVar30 + dVar21);
            *(float *)(puVar10 + 0x11) = (float)(dVar27 + dVar20);
            iVar13 = FUN_00362820(moby,uVar11 - 0x80,uVar11 - 0x90);
            if (iVar13 != 0) {
              moby->state = '\x03';
              if (moby->animationId != '\x01') {
                puVar10[0x16] = (longlong)(int)(animationSpeed * 0.5);
                mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar10 + 0xb4));
              }
              sVar14 = *(short *)((int)piVar7 + 6) + 1;
              *(short *)((int)piVar7 + 6) = sVar14;
              if (sVar14 == 3) {
                *(undefined2 *)(piVar7 + 1) = 0xb4;
                *(undefined2 *)((int)piVar7 + 6) = 0;
              }
              else {
                *(undefined2 *)(piVar7 + 1) = 0x3c;
              }
            }
          }
        }
      }
      else if (uVar4 == '\x01') {
        if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\x03') {
            puVar10[0x16] = (longlong)(int)(animationSpeed * 0.5);
            mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar10 + 0xb4));
          }
          moby->state = '\x02';
        }
      }
      else if (uVar4 == '\0') {
        moby->state = '\x01';
      }
    }
  }
  return;
}



//==== 00357940  ns=mobyupdate_helpers  size=0x14
// sig: undefined M377_00357940(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M377_00357940(void)

{
  DAT_00840650 = 0x10000;
  return;
}



//==== 00357958  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M377_00357958(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::M377_00357958(int param_1)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(0x179);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    piVar2 = (int *)pMVar3->pVar;
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    fVar1 = *(f32 *)(param_1 + 0x48);
    *piVar2 = param_1;
    (pMVar3->rotation).z = fVar1;
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::UpdateMobyTransform(pMVar3);
    mobyutil::MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}



//==== 00357a40  ns=mobyupdate_unsorted  size=0x6a8
// sig: undefined UpdateMoby_377(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 00344150 FUN_00344150; 004fffb4 fastfunc::FastDecTimerS16; 005cd098 libc::printf
// strings: 006565c4: 'M377 error! could not find a free ski!\n'

/* Moby 377 */

ulonglong mobyupdate_unsorted::UpdateMoby_377(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int32_t iVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  uint *puVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar17 = (ulonglong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0xf0;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x20] = in_LR;
  puVar12[0x1d] = unaff_r31;
  puVar12[0x1c] = unaff_r30;
  puVar12[0x1b] = unaff_r29;
  uVar18 = uVar17;
  if ((moby != (MobyInstance *)0x0) && (puVar8 = (uint *)moby->pVar, puVar8 != (uint *)0x0)) {
    bVar2 = moby->state;
    uVar18 = (ulonglong)bVar2;
    if (bVar2 == 7) {
      uVar18 = mobyfunc::DeleteMoby(moby);
    }
    else if (bVar2 == 6) {
      uVar18 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar18 != 0) {
        uVar18 = 0;
        moby->unk58 = 0.0;
        moby->state = '\a';
        puVar24 = puVar8;
        do {
          uVar9 = puVar24[4];
          if (((uVar9 != 0) && (*(short *)(uVar9 + 0xa6) == 0x149)) &&
             (*(char *)(uVar9 + 0x20) != -3 && *(char *)(uVar9 + 0x20) != -2)) {
            uVar9 = *(uint *)((int)puVar8 + (int)((uVar18 & 0xffffffff) << 2) + 0x10);
            *(undefined1 *)(uVar9 + 0x20) = 5;
            return (ulonglong)uVar9;
          }
          uVar18 = uVar18 + 1;
          puVar24 = puVar24 + 1;
        } while ((int)uVar18 < 3);
      }
    }
    else if (bVar2 == 5) {
      uVar18 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar18 != 0) {
        if (moby->animationId != '\x04') {
          puVar12[0x18] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(uVar17,4,0,*(undefined4 *)((int)puVar12 + 0xc4));
        }
        uVar18 = 2;
        moby->state = '\x02';
      }
    }
    else if (bVar2 == 4) {
      uVar18 = fastfunc::FastDecTimerS16(puVar8 + 3);
      if ((int)uVar18 != 0) {
        if (moby->animationId != '\x03') {
          puVar12[0x18] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(uVar17,3,0,*(undefined4 *)((int)puVar12 + 0xc4));
        }
        uVar18 = 5;
        moby->state = '\x05';
      }
    }
    else if (bVar2 == 3) {
      uVar18 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar18 != 0) {
        fVar3 = g_heroPosition.x - (moby->pos).x;
        fVar6 = g_heroPosition.y - (moby->pos).y;
        auVar27 = loadVectorLeftIndexed(0x10,(ulonglong)*puVar8);
        auVar28 = loadVectorLeftIndexed(0x14,(ulonglong)*puVar8);
        fVar5 = ABS(fVar3);
        fVar4 = ABS(fVar6);
        *(float *)(puVar12 + 0x12) = fVar3;
        *(float *)((int)puVar12 + 0x94) = fVar6;
        fVar3 = (moby->pos).z;
        *(float *)(puVar12 + 0x13) = fVar5 - fVar4;
        dVar26 = 0.0;
        uVar18 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)(puVar12 + 0x12));
        if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
          fVar6 = fVar4;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar15 = ABS(*(float *)((int)puVar12 + 0x94));
        if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
          fVar15 = fVar5;
        }
        if (0.0 < fVar6) {
          lVar19 = uVar16 - 0xe0;
          lVar23 = uVar16 - 0x44;
          lVar21 = uVar16 - 0x54;
          lVar25 = 2;
          fVar6 = (fVar15 - fVar6) / (fVar15 + fVar6);
          fVar5 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x15) = fVar6;
          *(float *)(puVar12 + 0x14) = fVar6;
          *(float *)((int)puVar12 + 0xa4) = fVar6;
          *(float *)((int)puVar12 + 0x9c) = fVar6;
          fVar6 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar5;
          *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar6;
          *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar6 * fVar5;
          do {
            *(float *)((int)lVar19 + 0x9c) = *(float *)((int)lVar19 + 0x8c) * fVar6 * fVar6;
            iVar13 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar16 - 0x54;
          pfVar22 = (float *)&DAT_007358e0;
          lVar19 = lVar1;
          lVar21 = lVar23;
          do {
            fVar6 = *pfVar22;
            fVar5 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar19 + 0x9c) = *(float *)((int)lVar19 + 0x9c) * fVar6;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar21 = 2;
          lVar19 = lVar1;
          do {
            iVar13 = (int)lVar19;
            lVar19 = lVar19 + 0x10;
            iVar14 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 0x9c)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar7 + fVar4);
        }
        *(undefined4 *)((int)puVar12 + 0x7c) = 0;
        *(undefined4 *)(puVar12 + 0xf) = 0;
        *(undefined4 *)((int)puVar12 + 0x74) = 0;
        *(undefined4 *)(puVar12 + 0xe) = 0;
        fVar4 = mobyutil::g_FrameTime * 6.0;
        *(float *)(puVar12 + 0xf) = fVar4;
        uVar9 = *(uint *)(*puVar8 + 0x78);
        uVar18 = (ulonglong)uVar9;
        auVar29 = loadVectorLeftIndexed(0x30,uVar18);
        auVar30 = loadVectorRightIndexed(0x40,uVar18);
        auVar11 = (auVar29 | auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        auVar27 = vectorAddFloatingPoint(auVar27,auVar29 | auVar30);
        uVar10 = storeVectorElementWordIndexed
                           (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x70,lVar1
                           );
        *(undefined4 *)(puVar12 + 0xe) = uVar10;
        auVar29 = loadVectorLeftIndexed(0x34,uVar18);
        auVar30 = loadVectorRightIndexed(0x44,uVar18);
        auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar11 = (auVar29 | auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
        auVar28 = vectorAddFloatingPoint(auVar28,auVar29 | auVar30);
        uVar10 = storeVectorElementWordIndexed
                           (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x74,lVar1
                           );
        *(undefined4 *)((int)puVar12 + 0x74) = uVar10;
        fVar6 = *(float *)(uVar9 + 0x38);
        uVar10 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x80,lVar1
                           );
        *(undefined4 *)(puVar12 + 0x10) = uVar10;
        fVar4 = fVar4 + fVar6;
        uVar18 = 0;
        auVar27 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x84,lVar1
                           );
        *(undefined4 *)((int)puVar12 + 0x84) = uVar10;
        *(float *)(puVar12 + 0xf) = fVar4;
        *(float *)((int)puVar12 + 0x8c) = fVar7;
        *(float *)(puVar12 + 0x11) = fVar3 + 0.2 + fVar4;
        puVar24 = puVar8;
        do {
          uVar9 = puVar24[4];
          if (((uVar9 == 0) || (*(short *)(uVar9 + 0xa6) != 0x149)) ||
             (*(char *)(uVar9 + 0x20) == -3 || *(char *)(uVar9 + 0x20) == -2)) break;
          uVar18 = uVar18 + 1;
          puVar24 = puVar24 + 1;
        } while ((int)uVar18 < 3);
        if ((int)uVar18 == 3) {
          iVar20 = libc::printf("M377 error! could not find a free ski!\n");
          uVar18 = (ulonglong)iVar20;
        }
        else {
          iVar13 = (int)((uVar18 & 0xffffffff) << 2);
          uVar18 = FUN_00344150(-dVar26,uVar17,uVar16 - 0x70,uVar16 - 0x80,uVar16 - 0x70,
                                *(undefined4 *)(*(int *)(*puVar8 + 0x78) + iVar13 + 0x20),
                                (short)uVar18);
          *(int *)((int)puVar8 + iVar13 + 0x10) = (int)uVar18;
          if ((int)uVar18 != 0) {
            *(undefined2 *)(puVar8 + 1) = 0xf0;
            *(undefined2 *)(puVar8 + 3) = 0x1e;
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            if (moby->animationId != '\x02') {
              puVar12[0x18] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(uVar17,2,0,*(undefined4 *)((int)puVar12 + 0xc4));
            }
            uVar18 = 4;
            moby->state = '\x04';
          }
        }
      }
    }
    else if (bVar2 == 2) {
      uVar18 = (ulonglong)*(short *)((int)puVar8 + 0xe);
      if ((*(short *)((int)puVar8 + 0xe) < 3) &&
         (uVar18 = fastfunc::FastDecTimerS16(puVar8 + 1), (int)uVar18 != 0)) {
        uVar18 = 3;
        *(short *)((int)puVar8 + 0xe) = *(short *)((int)puVar8 + 0xe) + 1;
        moby->state = '\x03';
        if (moby->animationId != '\x01') {
          puVar12[0x18] = (longlong)(int)(animationSpeed * 10.5);
          uVar18 = mobyutil::MB_SetAnimation(uVar17,1,0,*(undefined4 *)((int)puVar12 + 0xc4));
        }
      }
    }
    else if (bVar2 == 1) {
      uVar18 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar18 != 0) {
        if (moby->animationId != '\x04') {
          puVar12[0x18] = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(uVar17,4,0,*(undefined4 *)((int)puVar12 + 0xc4));
        }
        uVar18 = 2;
        moby->state = '\x02';
      }
    }
    else if (bVar2 == 0) {
      uVar18 = 1;
      moby->state = '\x01';
    }
  }
  return uVar18;
}



//==== 003580e8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M378_003580e8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M378_003580e8(void)

{
  DAT_008406c0 = 0x10000;
  return;
}



//==== 00358108  ns=mobyupdate_helpers  size=0x114
// sig: undefined M378_00358108(void)
// callers(0): 
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::M378_00358108(int param_1)

{
  int *piVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = mobyfunc::CreateMoby(0x17a);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    pMVar2->setByGroup = '\0';
    (pMVar2->pos).x = *(f32 *)(param_1 + 0x10);
    piVar1 = (int *)pMVar2->pVar;
    (pMVar2->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar2->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar2->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar2->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar2->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar2->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar2->rotation).w = *(f32 *)(param_1 + 0x4c);
    *piVar1 = param_1;
    mobyfunc::UpdateMobyTransform(pMVar2);
    mobyutil::MB_CopyHeroLights(pMVar2);
    if (pMVar2->animationId != '\0') {
      mobyutil::MB_SetAnimation(pMVar2,0,0,(int)(animationSpeed * 0.5));
    }
  }
  return pMVar2;
}



//==== 00358220  ns=mobyupdate_unsorted  size=0x1e0
// sig: undefined UpdateMoby_378(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 00358494 mobyupdate_helpers::M378_00358494; 00500fa8 fastfunc::FastApplyTransform

/* Moby 378 */

void mobyupdate_unsorted::UpdateMoby_378(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  Vec4 aVStack_70 [5];
  
  if ((moby != (MobyInstance *)0x0) && (pvVar2 = moby->pVar, pvVar2 != (void *)0x0)) {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar3 = *(int *)((int)pvVar2 + 4);
        if (iVar3 == 0) {
          iVar3 = mobyupdate_helpers::M378_00358494(moby);
          *(int *)((int)pvVar2 + 4) = iVar3;
        }
        if (iVar3 != 0) {
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 0.5));
          }
          moby->state = '\x01';
        }
      }
      else if (((moby->field43_0x70 & 2U) != 0) &&
              (moby->state = '\x02', moby->animationId != '\x01')) {
        mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 0.5));
      }
    }
    else if (((2 < bVar1) && (bVar1 < 4)) && ((moby->field43_0x70 & 2U) != 0)) {
      if (*(MobyInstance **)((int)pvVar2 + 4) != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar2 + 4));
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (*(uint *)((int)pvVar2 + 4) != 0) {
      mobyfunc::GetBonePosition(moby,0,(ulonglong)*(uint *)((int)pvVar2 + 4) + 0x10);
      mobyfunc::GetBoneTransformations(moby,0,aVStack_70);
      fastfunc::FastApplyTransform((Vec4 *)(*(int *)((int)pvVar2 + 4) + 0xc0),aVStack_70);
    }
  }
  return;
}



//==== 00358400  ns=mobyupdate_helpers  size=0x94
// sig: undefined M379_00358400(void)
// callers(0): 
// callees(1): 000fcbe8 mobyutil::MB_randRangeFloat

void mobyupdate_helpers::M379_00358400(double param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = -param_1;
  dVar1 = (double)mobyutil::MB_randRangeFloat((float)dVar2,(float)param_1);
  *param_2 = (float)((double)*param_2 + dVar1);
  dVar1 = (double)mobyutil::MB_randRangeFloat((float)dVar2,(float)param_1);
  param_2[1] = (float)((double)param_2[1] + dVar1);
  dVar1 = (double)mobyutil::MB_randRangeFloat((float)dVar2,(float)param_1);
  param_2[2] = (float)((double)param_2[2] + dVar1);
  return;
}



//==== 00358494  ns=mobyupdate_helpers  size=0x164
// sig: undefined M378_00358494(void)
// callers(1): 00358220 mobyupdate_unsorted::UpdateMoby_378
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::M378_00358494(int param_1)

{
  f32 fVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(ROCKET_0100|SPIDERBOT);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    pvVar2 = pMVar3->pVar;
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    fVar1 = *(f32 *)(param_1 + 0x14);
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).y = fVar1;
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    *(undefined1 *)&(pMVar3->rotation).x = 0;
    (pMVar3->pos).w = fVar1;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).y = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).z = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).w = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 3) = 0;
    *(undefined4 *)((int)pvVar2 + 0x20) = 0x41a00000;
    *(undefined2 *)((int)pvVar2 + 0x24) = 0x14;
    *(undefined1 *)((int)pvVar2 + 0x28) = 3;
    *(undefined1 *)((int)pvVar2 + 0x66) = 0x80;
    *(undefined1 *)((int)pvVar2 + 0x65) = 0x80;
    *(undefined1 *)((int)pvVar2 + 100) = 0x80;
    *(undefined1 *)((int)pvVar2 + 0x67) = 0x80;
    *(undefined1 *)((int)pvVar2 + 0x69) = 0;
    *(undefined1 *)((int)pvVar2 + 0x68) = 0;
    *(undefined2 *)((int)pvVar2 + 0x6c) = 0xf;
    *(int *)((int)pvVar2 + 0x70) = param_1;
    mobyfunc::UpdateMobyTransform(pMVar3);
    pMVar3->modeBits = pMVar3->modeBits | LOCK_ROTATION;
    mobyutil::MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}



//==== 00358628  ns=mobyupdate_unsorted  size=0x424
// sig: undefined UpdateMoby_379(MobyInstance * moby)
// callers(0): 
// callees(10): 000f1ec8 mobyfunc::SetColorOfMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32

/* Moby 379 */

void mobyupdate_unsorted::UpdateMoby_379(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 local_50 [16];
  int local_40;
  int local_3c;
  longlong local_38;
  
  if (moby != (MobyInstance *)0x0) {
    pvVar2 = moby->pVar;
    uVar8 = ZEXT48(pvVar2);
    if (pvVar2 != (void *)0x0) {
      iVar6 = mobyutil::MB_damage(moby,0xffffffffffffffff,0);
      local_3c = -1;
      iVar7 = mobyutil::MB_HandleDamage(moby,iVar6,uVar8 + 0x20,0,&local_40,0,&local_3c,4);
      if ((((moby->state == '\x02') || (moby->state == '\x03')) && (iVar6 != 0)) &&
         (local_3c != 0x192)) {
        if ((0 < iVar7) && (iVar7 < 3)) {
          *(undefined4 *)((int)pvVar2 + 0x20) = 0;
        }
        if (1 < local_40) {
          uVar3 = (int)*(uint *)((int)pvVar2 + 0x20) >> 0x1f;
          uVar4 = (int)*(uint *)(iVar6 + 0x2c) >> 0x1f;
          if ((int)((uVar4 >> 1 ^ *(uint *)(iVar6 + 0x2c)) - uVar4) <
              (int)((uVar3 >> 1 ^ *(uint *)((int)pvVar2 + 0x20)) - uVar3)) {
            *(float *)((int)pvVar2 + 0x20) =
                 *(float *)((int)pvVar2 + 0x20) - *(float *)(iVar6 + 0x2c);
            sound::PlayMobySound(0,0,moby);
          }
          else {
            *(undefined4 *)((int)pvVar2 + 0x20) = 0;
            sound::PlayMobySound(1,0,moby);
          }
        }
      }
      moby->damage = -1;
      puVar5 = (undefined4 *)((uint)&moby->rotation & 0xfffffff0);
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      uVar1 = moby->state;
      if (uVar1 == '\x04') {
        mobyfunc::SetColorOfMoby(moby,0,0,0);
      }
      else if (uVar1 == '\x03') {
        iVar6 = fastfunc::FastDecTimerS32(uVar8 + 0x74);
        if (iVar6 == 0) {
          dVar11 = -0.05000000074505806;
          dVar10 = 0.05000000074505806;
          dVar9 = (double)mobyutil::MB_randRangeFloat(-0.05,0.05);
          (moby->pos).x = (float)((double)(moby->pos).x + dVar9);
          dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar10);
          (moby->pos).y = (float)((double)(moby->pos).y + dVar9);
          dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar10);
          (moby->pos).z = (float)((double)(moby->pos).z + dVar9);
          dVar11 = -0.009999999776482582;
          dVar10 = 0.009999999776482582;
          dVar9 = (double)mobyutil::MB_randRangeFloat(-0.01,0.01);
          (moby->rotation).x = (float)((double)(moby->rotation).x + dVar9);
          dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar10);
          (moby->rotation).y = (float)((double)(moby->rotation).y + dVar9);
          dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar10);
          (moby->rotation).z = (float)((double)(moby->rotation).z + dVar9);
        }
        else if (*(int *)((int)pvVar2 + 0x20) < 1) {
          mobyutil::MB_genericExplosion
                    (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,moby,local_50,0,0,1,10,3,0x10);
          if (moby->animationId != '\0') {
            local_38 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x04';
        }
        else {
          moby->state = '\0';
        }
      }
      else if (uVar1 == '\x02') {
        if (1 < local_40) {
          mobyutil::MB_UpdateLightsTransition(moby,uVar8 + 0x60);
          *(undefined4 *)((int)pvVar2 + 0x74) = 0x1e;
          moby->state = '\x03';
        }
      }
      else if (uVar1 == '\x01') {
        moby->state = '\x02';
        if (moby->animationId != '\x01') {
          local_38 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
        }
      }
      else if (uVar1 == '\0') {
        moby->state = '\x01';
      }
      mobyutil::MB_ColorDyingMoby(moby,uVar8 + 0x60);
    }
  }
  return;
}



//==== 00358a50  ns=mobyupdate_helpers  size=0x58
// sig: undefined M379_00358a50(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M379_00358a50(int param_1)

{
  if ((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}



//==== 00358ad0  ns=mobyupdate_unsorted  size=0x7a4
// sig: undefined UpdateMoby_38(MobyInstance * moby)
// callers(0): 
// callees(9): 000a2560 hero::Hero_TransitionToDefault; 000b72b0 hero::TransitionMovement; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 38 */

void mobyupdate_unsorted::UpdateMoby_38(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  void *pvVar8;
  uint uVar9;
  Spline *pSVar10;
  undefined2 uVar11;
  MobyInstance *pMVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  Vec4 local_50;
  
  pvVar8 = moby->pVar;
  uVar15 = ZEXT48(pvVar8);
  if (*(int *)((int)pvVar8 + 0xb4) == -1) {
    return;
  }
  dVar19 = (double)(moby->pos).x;
  dVar20 = (double)(moby->pos).y;
  dVar21 = (double)(moby->pos).z;
  pSVar10 = Splines[*(int *)((int)pvVar8 + 0xb4)];
  fastfunc::FastDecTimerS16(uVar15 + 0xba);
  if (moby->state == '\0') {
    *(undefined4 *)((int)pvVar8 + 0x20) = 0;
    *(undefined2 *)((int)pvVar8 + 0x24) = 0;
    *(undefined1 *)((int)pvVar8 + 0x28) = 4;
    uVar9 = *(uint *)((int)pvVar8 + 0xa0);
    *(undefined2 *)((int)pvVar8 + 0x3e) = 5;
    moby->setByGroup = (char)uVar9;
    uVar2 = 0;
    if ((uVar9 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)((int)pvVar8 + 0xa4) = uVar2;
    iVar14 = fastfunc::FastDoubleToInt();
    lVar13 = 0;
    if (iVar14 != 0) {
      lVar13 = (ulonglong)(uint)pSVar10->cnt - 1;
    }
    iVar14 = (int)(lVar13 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar10->points[0].x + iVar14);
    (moby->pos).y = *(f32 *)((int)&pSVar10->points[0].y + iVar14);
    (moby->pos).z = *(f32 *)((int)&pSVar10->points[0].z + iVar14);
    (moby->pos).w = *(f32 *)((int)&pSVar10->points[0].w + iVar14);
    *(undefined2 *)((int)pvVar8 + 0xba) = 0;
    *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar8 + 0xbc) = 0;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 == 0) {
    fVar3 = moby->pClass->gScale;
    fVar4 = -(fVar3 * 0.016666668 - moby->scale);
    moby->scale = fVar4;
    if (fVar4 < 0.0) {
      moby->scale = fVar3;
      (moby->pos).x = pSVar10->points[0].x;
      (moby->pos).y = pSVar10->points[0].y;
      (moby->pos).z = pSVar10->points[0].z;
      fVar3 = pSVar10->points[0].w;
      moby->setByGroup = '\x01';
      (moby->pos).w = fVar3;
      *(undefined4 *)((int)pvVar8 + 0xa4) = 0;
    }
  }
  else if (bVar1 < 2) {
    if (((*(short *)((int)pvVar8 + 0xb8) != 0) &&
        (((pMVar12 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
         (pMVar12 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar12 == moby)) {
      if ((*(int *)((int)pvVar8 + 200) == 0) &&
         ((((pMVar12 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar12 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar12 == moby)))) {
        hero::TransitionMovement(0x72,1);
      }
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed * *(float *)((int)pvVar8 + 0xb0) * 60.0;
      *(undefined2 *)((int)pvVar8 + 0xb8) = 0;
      *(float *)((int)pvVar8 + 0xac) = 1.0 / fVar3;
    }
  }
  else if (bVar1 < 3) {
    if (*(short *)((int)pvVar8 + 0xba) == 0) {
      dVar18 = 0.0;
      if (((-1 < *(int *)((int)pvVar8 + 0xbc)) ||
          (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
          2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
         ((fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3) ||
          (fVar3 - g_heroPosition.z <= 1.0)))) {
        iVar14 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar8 + 0xc4));
        if (iVar14 == 0) {
          iVar14 = sound::PlayMobySound(0,4,moby);
          *(int *)((int)pvVar8 + 0xc4) = iVar14;
        }
        dVar16 = (double)*(float *)((int)pvVar8 + 0xac);
        fVar3 = (float)(dVar16 * (double)mobyutil::g_FrameTime +
                       (double)*(float *)((int)pvVar8 + 0xa8));
        dVar17 = (double)fVar3;
        *(float *)((int)pvVar8 + 0xa8) = fVar3;
        if (ABS(dVar16) < ABS(dVar17)) {
          *(float *)((int)pvVar8 + 0xa8) = *(float *)((int)pvVar8 + 0xac);
          dVar17 = dVar16;
        }
        fVar3 = (float)((double)*(float *)((int)pvVar8 + 0xa4) + dVar17);
        *(float *)((int)pvVar8 + 0xa4) = fVar3;
        if (0.5 < ABS(fVar3 - 0.5)) {
          if ((*(int *)((int)pvVar8 + 200) == 0) &&
             ((((pMVar12 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP))
               || (pMVar12 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar12 == moby)))) {
            hero::Hero_TransitionToDefault();
            dVar16 = (double)*(float *)((int)pvVar8 + 0xac);
          }
          if (dVar16 <= dVar18) {
            moby->setByGroup = '\x01';
          }
          else {
            moby->setByGroup = '\0';
            dVar18 = 1.0;
          }
          *(float *)((int)pvVar8 + 0xa4) = (float)dVar18;
          auVar22 = ZEXT416(0xffffffff);
          auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
          *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
          auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
          auVar22 = loadVectorLeftIndexed(0x20,0x358aa8);
          auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar14 = *(int *)((int)pvVar8 + 0xc4);
          auVar22 = vectorMultiplyAddFloatingPoint
                              (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                               ,auVar23);
          auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
          auVar22 = vectorSplatHalfWord(auVar22,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar22,0xba,uVar15);
          *(undefined2 *)((int)pvVar8 + 0xba) = uVar11;
          if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar14].state != '\0')) {
            sound::sound_Kill(iVar14);
          }
          *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
        }
        dVar18 = (double)fastfunc::FastIntToDouble(pSVar10->cnt + -1);
        lVar13 = fastfunc::FastDoubleToInt
                           ((double)(float)(dVar18 * (double)*(float *)((int)pvVar8 + 0xa4)));
        dVar18 = (double)fastfunc::FastIntToDouble();
        dVar17 = (double)fastfunc::FastIntToDouble(pSVar10->cnt + -1);
        fVar3 = (float)(dVar17 * (double)*(float *)((int)pvVar8 + 0xa4) - dVar18);
        iVar14 = (int)(lVar13 << 4);
        if ((int)lVar13 == pSVar10->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar14);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar14);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar14);
          fVar7 = *(f32 *)((int)&pSVar10->points[0].w + iVar14);
        }
        else {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar14);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar14);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar14);
          fVar7 = *(f32 *)((int)&pSVar10->points[1].w + iVar14);
          fVar4 = fVar3 * (*(float *)((int)&pSVar10->points[1].x + iVar14) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar10->points[1].y + iVar14) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar10->points[1].z + iVar14) - fVar6) + fVar6;
        }
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar7;
        *(float *)((int)pvVar8 + 0xbc) = (float)((double)fVar6 - dVar21);
        goto LAB_00359168;
      }
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar22 = loadVectorLeftIndexed(0x18,0x358aa8);
      auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar22 = vectorMultiplyAddFloatingPoint
                          (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                           auVar23);
      auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
      auVar22 = vectorSplatHalfWord(auVar22,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar22,0xba,uVar15);
      *(undefined2 *)((int)pvVar8 + 0xba) = uVar11;
    }
    iVar14 = *(int *)((int)pvVar8 + 0xc4);
    *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
    if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar14].state != '\0')) {
      sound::sound_Kill(iVar14);
    }
    *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
  }
LAB_00359168:
  local_50.x = (float)((double)(moby->pos).x - dVar19);
  local_50.y = (float)((double)(moby->pos).y - dVar20);
  local_50.w = (moby->pos).w;
  local_50.z = (float)((double)(moby->pos).z - dVar21);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar8 + 0x60),&local_50,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  pMVar12 = DAT_0096a1d8;
  if (((((hero::g_heroStateType != 3) && (g_heroState != EDGE_JUMP)) &&
       (pMVar12 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar12 != moby)) &&
     ((fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3) && (*(short *)((int)pvVar8 + 0xba) == 0)))) {
    *(undefined2 *)((int)pvVar8 + 0xb8) = 1;
  }
  return;
}



//==== 00359274  ns=mobyupdate_helpers  size=0x14
// sig: undefined M380_00359274(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M380_00359274(void)

{
  DAT_00840730 = 0x10000;
  return;
}



//==== 00359288  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M380_00359288(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::M380_00359288(int param_1)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(0x17c);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    piVar2 = (int *)pMVar3->pVar;
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    fVar1 = *(f32 *)(param_1 + 0x48);
    *piVar2 = param_1;
    (pMVar3->rotation).z = fVar1;
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::UpdateMobyTransform(pMVar3);
    mobyutil::MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}



//==== 00359354  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_380(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 380 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_380(MobyInstance *moby)

{
  return moby;
}



//==== 00359358  ns=mobyupdate_helpers  size=0x78
// sig: undefined M381_00359358(void)
// callers(0): 
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * mobyupdate_helpers::M381_00359358(void)

{
  uint uVar1;
  MobyInstance *pMVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(0x17d);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar2 = g_heroMobyPtr;
    pMVar3->drawDistance = 0x7f;
    uVar1 = pMVar2->light;
    pMVar3->color = pMVar2->color;
    pMVar3->light = uVar1;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 003593d0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_381(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 381 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_381(MobyInstance *moby)

{
  return moby;
}



//==== 003593d4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M384_003593d4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M384_003593d4(void)

{
  DAT_008407a0 = 0x10000;
  return;
}



//==== 00359408  ns=mobyupdate_unsorted  size=0x690
// sig: undefined UpdateMoby_384(MobyInstance * moby)
// callers(0): 
// callees(9): 0006d720 RegisterFuncForMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fea60 mobyutil::MB_randSphere; 00109af0 mobyutil::Delt; 001206e8 partupd::SpawnPart_2; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble
// strings: 008407f8: '@@@@' (raw)

/* Moby 384 */

void mobyupdate_unsorted::UpdateMoby_384(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar13;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar17 [16];
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x110;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar10;
  puVar6[0x24] = in_LR;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  puVar6[0x1f] = unaff_r31;
  bVar3 = moby->state;
  puVar6[0x1e] = unaff_r30;
  pfVar4 = (float *)moby->pVar;
  uVar13 = ZEXT48(pfVar4);
  puVar6[0x1d] = unaff_r29;
  puVar6[0x1c] = unaff_r28;
  if (bVar3 == 0) {
    moby->state = '\x01';
    moby->setByGroup = '\x02';
    dVar14 = (double)mobyutil::MB_randRot();
    *pfVar4 = (float)dVar14;
    pfVar4[2] = 5.0;
  }
  else if (bVar3 < 2) {
    auVar29 = loadVectorLeftIndexed(in_LR,0x3593e8);
    auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
    if ((moby->setByGroup & 8U) == 0) {
      if ((moby->setByGroup & 4U) != 0) {
        auVar17 = ZEXT416(0xffffffff);
        auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        moby->setByGroup = '\x02';
        auVar20 = vectorShiftLeftIntegerWord(auVar17,auVar17);
        auVar17 = loadVectorLeftIndexed(0x7d4,0x840000);
        auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
        auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorAddFloatingPoint(auVar17,auVar29);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar18,auVar29,auVar20);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,4,uVar13);
        *(undefined4 *)((uint)(pfVar4 + 1) & 0xfffffffc) = uVar5;
      }
    }
    else {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      moby->setByGroup = '\x01';
      auVar20 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0x7d4,0x840000);
      auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
      auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorAddFloatingPoint(auVar17,auVar29);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar18,auVar29,auVar20);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,4,uVar13);
      *(undefined4 *)((uint)(pfVar4 + 1) & 0xfffffffc) = uVar5;
    }
    dVar14 = (double)fastfunc::FastWrapRot
                               (*pfVar4,DAT_008407d0 * 0.017453292 * mobyutil::g_FrameTime);
    *pfVar4 = (float)dVar14;
  }
  dVar14 = 0.0;
  if (boot::SceneScreenFade == 0.0) {
    iVar12 = fastfunc::FastDecTimerS32(uVar13 + 4);
    if (iVar12 == 0) {
      if ((moby->setByGroup & 1U) == 0) {
        dVar15 = (double)fastfunc::FastIntToDouble(pfVar4[1]);
        dVar16 = (double)fastfunc::FastIntToDouble(DAT_008407d4);
        fVar2 = (float)(dVar15 / dVar16);
      }
      else {
        dVar15 = (double)fastfunc::FastIntToDouble(pfVar4[1]);
        dVar16 = (double)fastfunc::FastIntToDouble(DAT_008407d4);
        fVar2 = 1.0 - (float)(dVar15 / dVar16);
      }
      dVar16 = (double)fVar2;
      dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar14,1.0);
      if (dVar15 < dVar16) {
        mobyutil::MB_randSphere(dVar14,(double)DAT_008407d8,uVar10 - 0x90);
        mobyutil::MB_randSphere(dVar14,(double)DAT_008407d8,uVar10 - 0x80);
        mobyutil::MB_randSphere(dVar14,(double)DAT_008407d8,uVar10 - 0x70);
        auVar19 = loadVectorLeftIndexed(0x80,lVar1);
        auVar20 = loadVectorLeftIndexed(0x90,lVar1);
        auVar21 = loadVectorLeftIndexed(0x88,lVar1);
        auVar22 = loadVectorLeftIndexed(0x98,lVar1);
        auVar25 = loadVectorLeftIndexed(0x84,lVar1);
        auVar23 = vectorSubtractFloatingPoint(auVar19,auVar20);
        auVar26 = loadVectorLeftIndexed(0x94,lVar1);
        auVar24 = vectorSubtractFloatingPoint(auVar21,auVar22);
        auVar28 = vectorSubtractFloatingPoint(auVar25,auVar26);
        auVar27 = loadVectorLeftIndexed(0x804,0x840000);
        auVar29 = loadVectorLeftIndexed(0x800,0x840000);
        auVar30 = vectorSubtractFloatingPoint(auVar27,auVar29);
        auVar17 = loadVectorLeftIndexed(0xa0,lVar1);
        auVar29 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar18 = vectorSubtractFloatingPoint(auVar20,auVar17);
        auVar17 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar20 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xb0,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x16) = uVar5;
        auVar30 = vectorAddFloatingPoint(auVar24,auVar30);
        auVar29 = loadVectorLeftIndexed(0xa4,lVar1);
        uVar5 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0xb4,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0xb4) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0xb8,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x17) = uVar5;
        auVar26 = vectorSubtractFloatingPoint(auVar26,auVar29);
        auVar29 = loadVectorLeftIndexed(0xa8,lVar1);
        auVar22 = vectorSubtractFloatingPoint(auVar22,auVar29);
        *(undefined4 *)((int)puVar6 + 0xbc) = *(undefined4 *)((int)puVar6 + 0x8c);
        auVar29 = loadVectorLeftIndexed(0x7f0,0x840000);
        auVar17 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = vectorConvertFromSignedFixedPointWord(auVar29,0);
        auVar20 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = ZEXT416(0xffffffff);
        auVar24 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0xb8,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x17) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0xc0,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x18) = uVar5;
        auVar17 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xc4,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0xc4) = uVar5;
        auVar32 = vectorReciprocalEstimateFloatingPoint(auVar31);
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        uVar5 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,200,lVar1);
        *(undefined4 *)(puVar6 + 0x19) = uVar5;
        *(undefined4 *)((int)puVar6 + 0xcc) = *(undefined4 *)((int)puVar6 + 0x9c);
        auVar20 = loadVectorLeftIndexed(0x10,0x3593e8);
        auVar17 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar24 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = ZEXT416(0xffffffff);
        auVar36 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = ZEXT416(0xffffffff);
        auVar35 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = ZEXT416(0xffffffff);
        auVar38 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar31,auVar24);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar17);
        auVar17 = loadVectorLeftIndexed(0x808,0x840000);
        auVar29 = ZEXT416(0xffffffff);
        auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar20 = vectorSubtractFloatingPoint(auVar17,auVar27);
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar17 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar31,auVar24);
        auVar22 = vectorAddFloatingPoint(auVar22,auVar20);
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar27 = vectorMultiplyAddFloatingPoint(auVar32,auVar27,auVar34);
        auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar37 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = ZEXT416(0xffffffff);
        auVar20 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar35 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar31,auVar24);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar29,auVar33);
        auVar31 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar29 = loadVectorLeftIndexed(0x10,lVar11);
        auVar32 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar29 = vectorAddFloatingPoint(auVar19,auVar29);
        auVar19 = loadVectorLeftIndexed(0x14,lVar11);
        auVar20 = loadVectorLeftIndexed(0x18,lVar11);
        auVar19 = vectorAddFloatingPoint(auVar25,auVar19);
        auVar25 = vectorAddFloatingPoint(auVar21,auVar20);
        bVar3 = moby->setByGroup;
        auVar20 = vectorMultiplyAddFloatingPoint(auVar27,auVar24,auVar17);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar17 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar19 = vectorMultiplyAddFloatingPoint(auVar23,auVar20,auVar34);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar20,auVar36);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar20,auVar35);
        auVar21 = vectorMultiplyAddFloatingPoint(auVar18,auVar20,auVar37);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar26,auVar20,auVar31);
        auVar23 = vectorMultiplyAddFloatingPoint(auVar22,auVar20,auVar32);
        auVar20 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar18 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar19 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar22 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0xb0,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x16) = uVar5;
        auVar18 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0xb4,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0xb4) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0xb8,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x17) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xc0,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x18) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0xc4,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0xc4) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,200,lVar1);
        *(undefined4 *)(puVar6 + 0x19) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x80,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x10) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x84,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0x84) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x11) = uVar5;
        if ((bVar3 & 1) == 0) {
          auVar29 = loadVectorLeftIndexed(0x800,0x840000);
        }
        else {
          auVar29 = loadVectorLeftIndexed(0x14,0x3593e8);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar20 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar29 = loadVectorLeftIndexed(0x808,0x840000);
          auVar17 = (auVar20 ^ auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
          auVar20 = (auVar20 ^ auVar23) >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0xb8,
                             lVar1);
          *(undefined4 *)(puVar6 + 0x17) = uVar5;
          uVar5 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,200,lVar1
                            );
          *(undefined4 *)(puVar6 + 0x19) = uVar5;
        }
        fVar7 = DAT_008407e8;
        fVar2 = DAT_008407e4;
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = vectorAddFloatingPoint
                            (auVar25,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x11) = uVar5;
        dVar14 = (double)mobyutil::MB_randRangeFloat(fVar2,fVar7);
        fVar2 = DAT_008407e4;
        *(float *)((int)puVar6 + 0xbc) = (float)dVar14;
        dVar14 = (double)mobyutil::MB_randRangeFloat(fVar2,DAT_008407e8);
        *(float *)((int)puVar6 + 0xcc) = (float)dVar14;
        puVar6[0x1a] = (longlong)DAT_008407f0;
        uVar9 = DAT_008407f8;
        uVar8 = DAT_008407f4;
        uVar5 = DAT_008407ec;
        fVar2 = animationSpeed;
        puVar6[0xe] = (longlong)DAT_008407fc;
        puVar6[0x1a] = (longlong)(int)(fVar2 * ((float)(longlong)puVar6[0x1a] + 0.5));
        partupd::SpawnPart_2
                  (uVar10 - 0x90,uVar10 - 0x60,uVar10 - 0x50,uVar9,uVar9,uVar5,
                   *(undefined4 *)((int)puVar6 + 0xd4),uVar8);
      }
    }
    if (((moby->setByGroup & 1U) == 0) || (pfVar4[1] != 0.0)) {
      if ((moby->setByGroup & 2U) != 0) {
        mobyutil::Delt(3.0,DAT_0084080c * mobyutil::g_FrameTime,pfVar4 + 2);
      }
    }
    else {
      mobyutil::Delt(-1.0,DAT_0084080c * mobyutil::g_FrameTime,pfVar4 + 2);
    }
  }
  RegisterFuncForMoby(&PTR_M386_00359ad0_0070c680,moby);
  return;
}



//==== 00359ad0  ns=mobyupdate_helpers  size=0x400
// sig: undefined M386_00359ad0(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500f6c fastfunc::FastMtxCopyNoTranslate; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M386_00359ad0(int param_1)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f21;
  double dVar26;
  ulonglong in_f22;
  double dVar27;
  ulonglong in_f23;
  double dVar28;
  ulonglong in_f24;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar15 = uVar9 - 0x1b0;
  puVar4 = (ulonglong *)lVar15;
  *puVar4 = uVar9;
  puVar4[0x38] = in_LR;
  puVar4[0x2b] = in_f21;
  puVar4[0x2c] = in_f22;
  puVar4[0x2d] = in_f23;
  puVar4[0x2e] = in_f24;
  puVar4[0x2f] = in_f25;
  puVar4[0x30] = in_f26;
  puVar4[0x31] = in_f27;
  puVar4[0x32] = in_f28;
  puVar4[0x33] = in_f29;
  puVar4[0x34] = in_f30;
  puVar4[0x35] = in_f31;
  puVar4[0x2a] = unaff_r31;
  puVar4[0x29] = unaff_r30;
  puVar4[0x28] = unaff_r29;
  pfVar3 = *(float **)(param_1 + 0x78);
  fastfunc::FastMtxCopyNoTranslate(uVar9 - 0x140,param_1 + 0xc0);
  uVar11 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar4 + 0xa4) = uVar11;
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar4 + 0x15) = fVar2;
  *(undefined4 *)((int)puVar4 + 0xac) = uVar11;
  *(float *)(puVar4 + 0x15) = fVar2 + pfVar3[2];
  dVar18 = 1.0;
  *(undefined4 *)((int)puVar4 + 0xac) = 0x3f800000;
  uVar10 = draw::GetEffectTex(0x3ff0000000000000,0x10);
  puVar4[0x25] = uVar10;
  uVar10 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar4[0x26] = uVar10;
  uVar10 = FUN_00502f08(0,0,0,0,0,0);
  puVar4[0x24] = uVar10;
  uVar10 = idol_draw::PackCmd(DAT_010c5114,DAT_00840810,DAT_010c5118,DAT_00840814,0x80);
  puVar4[0x27] = uVar10;
  dVar26 = 3.141592502593994;
  fVar2 = *pfVar3;
  dVar27 = -3.141592502593994;
  dVar28 = -0.16666656732559204;
  dVar29 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  dVar31 = 2.601886990305502e-06;
  fVar6 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar6 = fVar2;
  }
  fVar7 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
    fVar7 = fVar6;
  }
  fVar8 = fVar7 * fVar7;
  fVar2 = fVar8 * fVar8 * fVar7;
  fVar6 = fVar8 * fVar2;
  uVar11 = fastfunc::FastLerpColor
                     ((double)((float)((double)(fVar8 * fVar6 * 2.601887e-06 +
                                               fVar6 * -0.0001980741 +
                                               fVar2 * 0.0083330255 +
                                               fVar8 * fVar7 * -0.16666657 + fVar7) + dVar18) * 0.5)
                      ,DAT_00840818,DAT_0084081c);
  lVar13 = uVar9 - 0x100;
  puVar12 = &DAT_00840830;
  lVar17 = 4;
  lVar16 = lVar15;
  do {
    *(undefined4 *)((int)lVar16 + 0x100) = 0x3f000000;
    *(undefined4 *)((int)lVar16 + 0x104) = 0x3f000000;
    *(undefined4 *)((int)lVar15 + 0xf0) = uVar11;
    lVar16 = lVar16 + 8;
    lVar15 = lVar15 + 4;
    puVar14 = (undefined4 *)lVar13;
    *puVar14 = *puVar12;
    puVar14[1] = puVar12[1];
    puVar14[2] = puVar12[2];
    puVar5 = puVar12 + 3;
    puVar12 = puVar12 + 4;
    puVar14[3] = *puVar5;
    lVar13 = lVar13 + 0x10;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  dVar18 = -0.4000000059604645;
  dVar32 = 0.36000001430511475;
  dVar34 = 0.10000000149011612;
  dVar35 = 1.570796251296997;
  dVar36 = 2.0;
  do {
    fVar2 = (float)(dVar18 + dVar34);
    dVar33 = (double)fVar2;
    bVar1 = *(byte *)(param_1 + 0xbc);
    *(float *)((int)puVar4 + 0xd4) = (float)dVar18;
    *(float *)((int)puVar4 + 0xb4) = (float)dVar18;
    *(float *)((int)puVar4 + 0xe4) = fVar2;
    *(float *)((int)puVar4 + 0xc4) = fVar2;
    if ((bVar1 & 1) == 0) {
      dVar19 = (double)(float)((double)DAT_00840820 * dVar18 + dVar35);
      dVar21 = (double)(float)(dVar33 * (double)DAT_00840820 + dVar35);
      dVar18 = (double)(float)(dVar26 - dVar19);
      if (dVar19 - (double)(float)(dVar26 - dVar19) < 0.0) {
        dVar18 = dVar19;
      }
      dVar22 = (double)(float)(dVar26 - dVar21);
      if (dVar21 - (double)(float)(dVar26 - dVar21) < 0.0) {
        dVar22 = dVar21;
      }
      dVar20 = (double)(float)(dVar27 - dVar19);
      if ((double)(float)(dVar27 - dVar19) - dVar18 < 0.0) {
        dVar20 = dVar18;
      }
      dVar18 = (double)(float)(dVar27 - dVar21);
      if ((double)(float)(dVar27 - dVar21) - dVar22 < 0.0) {
        dVar18 = dVar22;
      }
      dVar19 = (double)(float)(dVar20 * dVar20);
      dVar21 = (double)(float)(dVar18 * dVar18);
      dVar24 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar20));
      dVar22 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar18));
      dVar23 = (double)(float)(dVar19 * dVar24);
      dVar25 = (double)(float)(dVar21 * dVar22);
      dVar18 = (double)(float)(dVar21 * dVar25) * dVar31 +
               (double)(float)(dVar25 * dVar30 +
                              (double)(float)(dVar22 * dVar29 +
                                             (double)(float)((double)(float)(dVar21 * dVar18) *
                                                             dVar28 + dVar18)));
      *(float *)(puVar4 + 0x17) =
           (float)((double)(float)(dVar19 * dVar23) * dVar31 +
                  (double)(float)(dVar23 * dVar30 +
                                 (double)(float)(dVar24 * dVar29 +
                                                (double)(float)((double)(float)(dVar19 * dVar20) *
                                                                dVar28 + dVar20))));
    }
    else {
      dVar19 = (double)(float)((double)DAT_00840820 * dVar18 + dVar35);
      dVar18 = (double)(float)(dVar26 - dVar19);
      if (dVar19 - (double)(float)(dVar26 - dVar19) < 0.0) {
        dVar18 = dVar19;
      }
      dVar21 = (double)(float)(dVar27 - dVar19);
      if ((double)(float)(dVar27 - dVar19) - dVar18 < 0.0) {
        dVar21 = dVar18;
      }
      dVar18 = (double)(float)(dVar21 * dVar21);
      dVar22 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar21));
      dVar19 = (double)(float)(dVar18 * dVar22);
      *(float *)(puVar4 + 0x17) =
           (float)(dVar36 - (double)(float)((double)(float)(dVar18 * dVar19) * dVar31 +
                                           (double)(float)(dVar19 * dVar30 +
                                                          (double)(float)(dVar22 * dVar29 +
                                                                         (double)(float)((double)(
                                                  float)(dVar18 * dVar21) * dVar28 + dVar21)))));
      dVar19 = (double)(float)(dVar33 * (double)DAT_00840820 + dVar35);
      dVar18 = (double)(float)(dVar26 - dVar19);
      if (dVar19 - (double)(float)(dVar26 - dVar19) < 0.0) {
        dVar18 = dVar19;
      }
      dVar21 = (double)(float)(dVar27 - dVar19);
      if ((double)(float)(dVar27 - dVar19) - dVar18 < 0.0) {
        dVar21 = dVar18;
      }
      dVar18 = (double)(float)(dVar21 * dVar21);
      dVar22 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar21));
      dVar19 = (double)(float)(dVar18 * dVar22);
      dVar18 = dVar36 - (double)(float)((double)(float)(dVar18 * dVar19) * dVar31 +
                                       (double)(float)(dVar19 * dVar30 +
                                                      (double)(float)(dVar22 * dVar29 +
                                                                     (double)(float)((double)(float)
                                                  (dVar18 * dVar21) * dVar28 + dVar21))));
    }
    uVar11 = EffectTexHeaders;
    *(float *)(puVar4 + 0x19) = (float)dVar18;
    dVar18 = dVar33;
    draw::FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,0,uVar11,9);
  } while (dVar18 < dVar32);
  return;
}



//==== 00359f28  ns=mobyupdate_helpers  size=0x4d0
// sig: undefined M386_00359f28(void)
// callers(1): 0035a6b8 mobyupdate_unsorted::UpdateMoby_386
// callees(6): 0006d7e0 draw::RegisterPostDraw; 000fe4f0 mobyutil::MB_randRangeSigned; 0010de78 mobyutil::MB_WrapRot; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble
// strings: 00359ed8: '=Vwp?' (raw) | 00359f14: '>Vwp?@' (raw)

void mobyupdate_helpers::M386_00359f28(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar43;
  undefined1 auVar35 [16];
  undefined1 auVar42 [16];
  
  uVar1 = *(uint *)((int)param_1 + 0x78);
  uVar8 = (ulonglong)uVar1;
  dVar10 = (double)fastfunc::FastWrapRot(*(float *)(uVar1 + 0x1e0),0.17453292);
  *(float *)(uVar1 + 0x1e0) = (float)dVar10;
  dVar10 = (double)fastfunc::FastDiffRots((double)*(float *)(uVar1 + 0x1e4),0x3fe9b0f580000000);
  *(float *)(uVar1 + 0x1e4) = (float)dVar10;
  dVar10 = (double)fastfunc::FastWrapRot(*(float *)(uVar1 + 0x1e8),0.05236);
  *(float *)(uVar1 + 0x1e8) = (float)dVar10;
  dVar10 = (double)fastfunc::FastIntToDouble(10);
  dVar25 = 0.5;
  dVar26 = 3.141592502593994;
  uVar6 = 0;
  dVar27 = -3.141592502593994;
  dVar28 = -0.16666656732559204;
  dVar29 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  dVar31 = 2.601886990305502e-06;
  dVar24 = 0.10000000149011612;
  uVar32 = 0x3fc99999a0000000;
  auVar39 = ZEXT416(0);
  auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  auVar39 = loadVectorLeftIndexed(0x3c,0x359ed0);
  auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  dVar23 = (double)((360.0 / (float)(dVar10 * 0.5)) * 0.017453292);
  dVar10 = 0.0;
  do {
    fastfunc::FastIntToDouble(uVar6);
    fastfunc::FastIntToDouble(10);
    iVar7 = (int)uVar6;
    dVar13 = dVar10;
    if (iVar7 != 0) {
      fVar43 = mobyutil::MB_WrapRot
                         ((float)((double)(longlong)iVar7 * dVar23 +
                                 (double)*(float *)(uVar1 + 0x1e0)));
      dVar14 = (double)fVar43;
      dVar13 = (double)(float)(dVar26 - dVar14);
      if (dVar14 - (double)(float)(dVar26 - dVar14) < 0.0) {
        dVar13 = dVar14;
      }
      dVar22 = (double)(float)(dVar27 - dVar14);
      if ((double)(float)(dVar27 - dVar14) - dVar13 < 0.0) {
        dVar22 = dVar13;
      }
      dVar13 = (double)(float)(dVar22 * dVar22);
      dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar22));
      dVar14 = (double)(float)(dVar13 * dVar16);
      dVar14 = (double)(float)((double)(float)(dVar13 * dVar14) * dVar31 +
                              (double)(float)(dVar14 * dVar30 +
                                             (double)(float)(dVar16 * dVar29 +
                                                            (double)(float)((double)(float)(dVar13 *
                                                                                           dVar22) *
                                                                            dVar28 + dVar22))));
      dVar13 = dVar10;
      dVar10 = (double)mobyutil::MB_randRangeSigned(dVar10,uVar32);
      dVar10 = (double)(float)(dVar14 * dVar24 + dVar10);
    }
    auVar33 = vectorConvertFromSignedFixedPointWord(auVar38,0);
    iVar5 = (int)((uVar6 & 0xfffffff) << 4);
    auVar36 = loadVectorLeftIndexed(0x1f0,uVar8);
    auVar37 = loadVectorRightIndexed(0x200,uVar8);
    uVar6 = (ulonglong)(iVar7 + 1);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar36 | auVar37,auVar33,auVar39);
    *(float *)(iVar5 + uVar1 + 8) = (float)dVar10;
    *(undefined4 *)(iVar5 + uVar1 + 4) = 0;
    auVar37._0_4_ = auVar38._0_4_ + 1;
    auVar37._8_8_ = auVar38._8_8_;
    auVar37._4_4_ = auVar38._4_4_ + 1;
    auVar36._0_8_ = auVar37._0_8_;
    auVar36._12_4_ = auVar38._12_4_;
    auVar36._8_4_ = auVar38._8_4_ + 1;
    auVar38._0_12_ = auVar36._0_12_;
    auVar38._12_4_ = auVar36._12_4_ + 1;
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,(longlong)iVar5
                       ,uVar8);
    *(undefined4 *)(iVar5 + uVar1 & 0xfffffffc) = uVar2;
    *(undefined4 *)(iVar5 + uVar1 + 0xc) = 0x3f800000;
    dVar10 = dVar13;
  } while (iVar7 + 1 < 5);
  iVar7 = 5;
  lVar4 = uVar8 + 0x50;
  auVar38 = ZEXT416(5);
  auVar33 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  lVar9 = 5;
  do {
    auVar38 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    iVar5 = 9 - iVar7;
    iVar7 = iVar7 + 1;
    auVar36 = loadVectorLeftIndexed(0x1f0,uVar8);
    auVar37 = loadVectorRightIndexed(0x200,uVar8);
    uVar3 = (uint)lVar4;
    *(undefined4 *)(uVar3 + 4) = 0;
    auVar38 = vectorMultiplyAddFloatingPoint(auVar36 | auVar37,auVar38,auVar39);
    *(undefined4 *)(uVar3 + 8) = *(undefined4 *)(iVar5 * 0x10 + uVar1 + 8);
    auVar34._0_4_ = auVar33._0_4_ + 1;
    auVar34._8_8_ = auVar33._8_8_;
    auVar34._4_4_ = auVar33._4_4_ + 1;
    auVar35._0_8_ = auVar34._0_8_;
    auVar35._12_4_ = auVar33._12_4_;
    auVar35._8_4_ = auVar33._8_4_ + 1;
    auVar33._0_12_ = auVar35._0_12_;
    auVar33._12_4_ = auVar35._12_4_ + 1;
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0,lVar4);
    *(undefined4 *)(uVar3 & 0xfffffffc) = uVar2;
    *(undefined4 *)(uVar3 + 0xc) = 0x3f800000;
    lVar4 = lVar4 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  auVar39 = ZEXT416(0);
  auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  iVar7 = 0;
  lVar4 = uVar8 + 0xa0;
  dVar10 = 0.9948376417160034;
  dVar23 = 0.20943999290466309;
  dVar24 = 0.75;
  dVar14 = 1.570796251296997;
  auVar39 = loadVectorLeftIndexed(0x50,0x359ed0);
  auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  do {
    auVar38 = vectorConvertFromSignedFixedPointWord(auVar40,0);
    iVar5 = (int)uVar8;
    *(undefined4 *)(iVar5 + 0xa8) = 0;
    dVar22 = (double)(longlong)iVar7;
    fVar43 = mobyutil::MB_WrapRot((float)(dVar22 * dVar10 + (double)*(float *)(uVar1 + 0x1e4)));
    dVar16 = (double)fVar43;
    fVar43 = mobyutil::MB_WrapRot((float)(dVar22 * dVar23 + (double)*(float *)(uVar1 + 0x1e8)));
    dVar15 = (double)fVar43;
    dVar22 = (double)(float)(dVar26 - dVar15);
    if (dVar15 - (double)(float)(dVar26 - dVar15) < 0.0) {
      dVar22 = dVar15;
    }
    dVar12 = (double)(float)(dVar27 - dVar15);
    if ((double)(float)(dVar27 - dVar15) - dVar22 < 0.0) {
      dVar12 = dVar22;
    }
    dVar22 = (double)(float)(dVar12 * dVar12);
    dVar17 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar12));
    dVar15 = (double)(float)(dVar22 * dVar17);
    dVar17 = (double)(float)((double)(float)((double)(float)(dVar22 * dVar15) * dVar31 +
                                            (double)(float)(dVar15 * dVar30 +
                                                           (double)(float)(dVar17 * dVar29 +
                                                                          (double)(float)((double)(
                                                  float)(dVar22 * dVar12) * dVar28 + dVar12)))) *
                            dVar24);
    dVar15 = (double)mobyutil::MB_randRangeSigned(dVar13,uVar32);
    dVar12 = (double)(float)(dVar16 + dVar14);
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    iVar7 = iVar7 + 1;
    auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar41._0_4_ = auVar40._0_4_ + 1;
    auVar41._8_8_ = auVar40._8_8_;
    auVar41._4_4_ = auVar40._4_4_ + 1;
    auVar42._0_8_ = auVar41._0_8_;
    auVar42._12_4_ = auVar40._12_4_;
    auVar42._8_4_ = auVar40._8_4_ + 1;
    auVar40._0_12_ = auVar42._0_12_;
    auVar40._12_4_ = auVar42._12_4_ + 1;
    auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar39,auVar33);
    dVar22 = (double)(float)(dVar26 - dVar16);
    if (dVar16 - (double)(float)(dVar26 - dVar16) < 0.0) {
      dVar22 = dVar16;
    }
    dVar18 = (double)(float)(dVar26 - dVar12);
    if (dVar12 - (double)(float)(dVar26 - dVar12) < 0.0) {
      dVar18 = dVar12;
    }
    dVar11 = (double)(float)(dVar27 - dVar16);
    if ((double)(float)(dVar27 - dVar16) - dVar22 < 0.0) {
      dVar11 = dVar22;
    }
    dVar16 = (double)(float)(dVar11 * dVar11);
    dVar22 = (double)(float)(dVar27 - dVar12);
    if ((double)(float)(dVar27 - dVar12) - dVar18 < 0.0) {
      dVar22 = dVar18;
    }
    fVar43 = *(float *)(iVar5 + 0xa8);
    uVar2 = storeVectorElementWordIndexed(auVar38,0,lVar4);
    *(undefined4 *)((uint)lVar4 & 0xfffffffc) = uVar2;
    *(undefined4 *)(iVar5 + 0xac) = 0x3f800000;
    lVar4 = lVar4 + 0x10;
    dVar18 = (double)(float)(dVar22 * dVar22);
    dVar19 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar11));
    dVar21 = (double)(float)(dVar16 * dVar19);
    dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar22));
    dVar12 = (double)(float)(dVar18 * dVar20);
    *(float *)(iVar5 + 0xa8) =
         (float)(dVar17 * (double)(float)((double)(float)(dVar16 * dVar21) * dVar31 +
                                         (double)(float)(dVar21 * dVar30 +
                                                        (double)(float)(dVar19 * dVar29 +
                                                                       (double)(float)((double)(
                                                  float)(dVar16 * dVar11) * dVar28 + dVar11)))) +
                dVar15) + fVar43;
    *(float *)(iVar5 + 0xa4) =
         (float)((double)(float)((double)(float)(dVar18 * dVar12) * dVar31 +
                                (double)(float)(dVar12 * dVar30 +
                                               (double)(float)(dVar20 * dVar29 +
                                                              (double)(float)((double)(float)(dVar18
                                                                                             * 
                                                  dVar22) * dVar28 + dVar22)))) * dVar25);
    uVar8 = uVar8 + 0x10;
  } while (iVar7 < 0x13);
  draw::RegisterPostDraw(&PTR_M388_0035b698_0070c6b8,param_1);
  return;
}



//==== 0035a450  ns=mobyupdate_helpers  size=0x10c
// sig: undefined M386_0035a450(void)
// callers(0): 
// callees(2): 00105ab4 mobyutil::CollDamageMobyDirect; 00110b70 mobyutil::MB_IsPntInCuboid

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mobyupdate_helpers::M386_0035a450(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_30 [16];
  
  iVar1 = (int)param_1;
  iVar2 = mobyutil::MB_IsPntInCuboid
                    (&g_heroPosition,(longlong)*(int *)(*(int *)(iVar1 + 0x78) + 0x200));
  if (iVar2 != 0) {
    auVar5 = ZEXT416(0xfffffff0);
    auVar3 = ZEXT416(1);
    auVar4 = loadVectorLeftIndexed(0xa6,param_1);
    g_heroHealth = 0;
    auVar4 = vectorShiftRightWord(auVar4,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60);
    auVar3 = vectorPermute(auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auStack_30,
                           _DAT_0035a440);
    auVar5._0_4_ = iVar1;
    auVar5._4_4_ = iVar1;
    auVar5._8_4_ = iVar1;
    auVar5._12_4_ = iVar1;
    auVar5 = vectorPermute(auVar5,auVar4,_DAT_0035a420);
    auVar5 = vectorPermute(auVar5,_DAT_0035a410,_DAT_0035a430);
    local_60 = auVar3._0_8_;
    local_70 = auVar5._0_8_;
    local_68 = auVar5._8_8_;
    local_58 = auVar3._8_8_;
    mobyutil::CollDamageMobyDirect
              (g_heroMobyPtr,g_heroMobyPtr,0,0x3f80000045afdf66,local_70,local_68,local_60,local_58)
    ;
  }
  return;
}



//==== 0035a560  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M386_0035a560(void)
// callers(1): 0035a6b8 mobyupdate_unsorted::UpdateMoby_386
// callees(0): 

void mobyupdate_helpers::M386_0035a560(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 in_r0;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar5 = (ulonglong)uVar1;
  auVar9 = ZEXT416(0);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  lVar7 = 10;
  uVar6 = uVar5;
  do {
    auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar12 = ZEXT416(0xffffffff);
    auVar11 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    auVar13 = loadVectorLeftIndexed(0x1f0,uVar5);
    auVar12._0_4_ = auVar9._0_4_ + 1;
    auVar12._8_8_ = auVar9._8_8_;
    auVar12._4_4_ = auVar9._4_4_ + 1;
    auVar14._0_8_ = auVar12._0_8_;
    auVar14._12_4_ = auVar9._12_4_;
    auVar14._8_4_ = auVar9._8_4_ + 1;
    auVar9._0_12_ = auVar14._0_12_;
    auVar9._12_4_ = auVar14._12_4_ + 1;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar14 = loadVectorRightIndexed(0x200,uVar5);
    auVar12 = vectorMultiplyAddFloatingPoint(auVar13 | auVar14,auVar10,auVar12);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = (uint)uVar6;
    uVar2 = storeVectorElementWordIndexed
                      (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0,uVar6);
    *(undefined4 *)(uVar3 & 0xfffffffc) = uVar2;
    *(undefined4 *)(uVar3 + 8) = 0;
    *(undefined4 *)(uVar3 + 4) = 0;
    *(undefined4 *)(uVar3 + 0xc) = 0x3f800000;
    uVar6 = uVar6 + 0x10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auVar9 = ZEXT416(0);
  auVar10 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  lVar7 = uVar5 + 0xa0;
  lVar8 = 0x14;
  auVar9 = loadVectorLeftIndexed(in_r0,0x35a55c);
  auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  do {
    auVar14 = vectorConvertFromSignedFixedPointWord(auVar10,0);
    auVar12 = ZEXT416(0xffffffff);
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    auVar13._0_4_ = auVar10._0_4_ + 1;
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._4_4_ = auVar10._4_4_ + 1;
    auVar11._0_8_ = auVar13._0_8_;
    auVar11._12_4_ = auVar10._12_4_;
    auVar11._8_4_ = auVar10._8_4_ + 1;
    auVar10._0_12_ = auVar11._0_12_;
    auVar10._12_4_ = auVar11._12_4_ + 1;
    auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar12 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar12);
    uVar2 = storeVectorElementWordIndexed(auVar12,0,lVar7);
    *(undefined4 *)((uint)lVar7 & 0xfffffffc) = uVar2;
    iVar4 = (int)uVar5;
    *(undefined4 *)(iVar4 + 0xa8) = 0;
    lVar7 = lVar7 + 0x10;
    *(undefined4 *)(iVar4 + 0xa4) = 0;
    *(undefined4 *)(iVar4 + 0xac) = 0x3f800000;
    uVar5 = uVar5 + 0x10;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(undefined4 *)(uVar1 + 0x1e0) = 0;
  *(undefined4 *)(uVar1 + 0x1e4) = 0;
  *(undefined4 *)(uVar1 + 0x1e8) = 0;
  *(undefined4 *)(uVar1 + 0x1ec) = 0;
  return;
}



//==== 0035a6b8  ns=mobyupdate_unsorted  size=0x3dc
// sig: undefined UpdateMoby_386(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 00105ab4 mobyutil::CollDamageMobyDirect; 00110b70 mobyutil::MB_IsPntInCuboid; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d204 sound::sound_MobyPlay_oClass; 00359f28 mobyupdate_helpers::M386_00359f28; 0035a560 mobyupdate_helpers::M386_0035a560; 00502910 fastfunc::FastCheckBsphereInView

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 386 */

void mobyupdate_unsorted::UpdateMoby_386(MobyInstance *moby)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [48];
  undefined1 auStack_40 [16];
  
  lVar2 = (longlong)(int)moby;
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    if (((*(int *)((int)pvVar1 + 500) == -1) || (*(int *)((int)pvVar1 + 0x1f8) == -1)) ||
       (*(int *)((int)pvVar1 + 0x1fc) == -1)) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (*(int *)((int)pvVar1 + 0x200) < 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    mobyupdate_helpers::M386_0035a560(lVar2);
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar1 + 0x204) = 0xffffffff;
  }
  else if ((moby->state < 2) &&
          (((hero::g_heroStateType == 0xf &&
            (((DAT_0096a240 == *(int *)(DAT_00a1a85c + *(int *)((int)pvVar1 + 500) * 0x20 + 0x10) ||
              (DAT_0096a240 == *(int *)(DAT_00a1a85c + *(int *)((int)pvVar1 + 0x1f8) * 0x20 + 0x10))
              ) || (DAT_0096a240 ==
                    *(int *)(DAT_00a1a85c + *(int *)((int)pvVar1 + 0x1fc) * 0x20 + 0x10))))) ||
           ((ABS(g_heroPosition.x - (moby->pos).x) <= 16.0 &&
            (ABS(g_heroPosition.y - (moby->pos).y) <= 16.0)))))) {
    iVar3 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar1 + 0x204));
    if (iVar3 == 0) {
      iVar3 = sound::sound_MobyPlay_oClass(6,4,moby,0xd3);
      *(int *)((int)pvVar1 + 0x204) = iVar3;
    }
    iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)moby->pVar + 0x200));
    if (iVar3 != 0) {
      auVar5 = ZEXT416(0xfffffff0);
      auVar6 = ZEXT416(1);
      g_heroHealth = 0;
      auVar4 = loadVectorLeftIndexed(0xa6,lVar2);
      auVar4 = vectorShiftRightWord
                         (auVar4,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60);
      auVar6 = vectorPermute(auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auStack_40,
                             _DAT_0035a680);
      auVar5._0_4_ = moby;
      auVar5._4_4_ = moby;
      auVar5._8_4_ = moby;
      auVar5._12_4_ = moby;
      auVar5 = vectorPermute(auVar5,auVar4,_DAT_0035a660);
      auVar5 = vectorPermute(auVar5,_DAT_0035a650,_DAT_0035a670);
      local_80 = auVar6._0_8_;
      local_78 = auVar6._8_8_;
      local_90 = auVar5._0_8_;
      local_88 = auVar5._8_8_;
      mobyutil::CollDamageMobyDirect
                (g_heroMobyPtr,0x50,0,0x3f80000045afdf66,local_90,local_88,local_80,local_78);
    }
    iVar3 = fastfunc::FastCheckBsphereInView(0x4050000000000000,local_70);
    if (iVar3 < 0) {
      return;
    }
    mobyupdate_helpers::M386_00359f28(lVar2);
    return;
  }
  iVar3 = *(int *)((int)pvVar1 + 0x204);
  if (-1 < iVar3) {
    if (((iVar3 != -1) && (sound::g_SoundChannels[iVar3].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar3].state != '\0')) {
      sound::sound_Kill(iVar3);
    }
    *(undefined4 *)((int)pvVar1 + 0x204) = 0xffffffff;
  }
                    /* WARNING: Read-only address (ram,0x0035a650) is written */
                    /* WARNING: Read-only address (ram,0x0035a660) is written */
                    /* WARNING: Read-only address (ram,0x0035a670) is written */
                    /* WARNING: Read-only address (ram,0x0035a680) is written */
  return;
}



//==== 0035aac0  ns=mobyupdate_helpers  size=0xbc8
// sig: undefined M388_0035aac0(void)
// callers(1): 0035b698 mobyupdate_helpers::M388_0035b698
// callees(9): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fec94 mobyutil::MB_catmullRom; 00500ca4 fastfunc::FastEulerToMtx1; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0; 005e825c FUN_005e825c

void mobyupdate_helpers::M388_0035aac0
               (int param_1,longlong param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float local_260 [4];
  float local_250 [4];
  undefined1 local_240 [48];
  undefined1 local_210 [16];
  undefined1 auStack_200 [64];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [96];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [96];
  
  draw::GetEffectTex(0x2d);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  draw::GetEffectTex(0x2c);
  uVar9 = 0x3ff0000000000000;
  uVar8 = 0;
  fastfunc::FastEulerToMtx1(auStack_200,param_1 + 0x40);
  FUN_005e825c(local_260,param_2,auStack_200);
  FUN_005e825c(local_250,param_2 + 0x10,auStack_200);
  FUN_005e825c(local_1c0,local_1c0,local_240);
  FUN_005e825c(local_1b0,local_1b0,local_240);
  FUN_005e825c(local_130,local_130,local_240);
  FUN_005e825c(local_120,local_120,local_240);
  iVar4 = (int)param_5;
  uVar2 = 1;
  if (1 < iVar4) {
    uVar7 = 0xbff0000000000000;
    do {
      iVar3 = (int)uVar2;
      if (iVar3 == iVar4 + -1) {
        FUN_005e825c(local_210,(uVar2 & 0xfffffff) * 0x10 + param_2 & 0xffffffff,auStack_200);
      }
      else {
        lVar1 = (uVar2 & 0xfffffff) * 0x10;
        FUN_005e825c(local_260,lVar1 + param_2 & 0xffffffff,auStack_200);
        FUN_005e825c(local_250,lVar1 + param_2 + 0x10 & 0xffffffff,auStack_200);
      }
      FUN_005e825c(local_1a0,local_1a0,local_240);
      FUN_005e825c(local_190,local_190,local_240);
      FUN_005e825c(local_110,local_110,local_240);
      FUN_005e825c(local_100,local_100,local_240);
      if ((iVar3 == 1) && (param_4 == 0x10)) {
        draw::FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
        draw::FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
      }
      else if ((iVar3 == iVar4 + -2) && (param_4 == 0x10)) {
        draw::FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
        draw::FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
      }
      else {
        draw::FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
        draw::FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
      }
      dVar5 = (double)fastfunc::FastIntToDouble(uVar2);
      dVar6 = (double)fastfunc::FastIntToDouble(param_5);
      mobyutil::MB_catmullRom(uVar7,uVar8,uVar9,uVar8,(double)(float)(dVar5 / dVar6));
      uVar2 = (ulonglong)(iVar3 + 1);
    } while (iVar3 + 1 < iVar4);
  }
  return;
}



//==== 0035b698  ns=mobyupdate_helpers  size=0xdc
// sig: undefined M388_0035b698(void)
// callers(0): 
// callees(3): 00174f80 vuchain::SetGSReg; 0035aac0 mobyupdate_helpers::M388_0035aac0; 00502f98 FUN_00502f98

void mobyupdate_helpers::M388_0035b698(int param_1)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  fVar2 = -(DAT_0071f408 * 0.2 - *(float *)(iVar1 + 0x1ec));
  *(float *)(iVar1 + 0x1ec) = fVar2;
  if (fVar2 <= -8.0) {
    *(float *)(iVar1 + 0x1ec) = fVar2 + 8.0;
  }
  uVar3 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar3);
  M388_0035aac0(param_1,iVar1,0x80,0x40,10);
  M388_0035aac0(param_1,iVar1 + 0xa0,0x30,0x10,0x14);
  return;
}



//==== 0035b774  ns=mobyupdate_helpers  size=0x14
// sig: undefined M388_0035b774(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M388_0035b774(void)

{
  DAT_008408bc = 0x10000;
  return;
}



//==== 0035b790  ns=mobyupdate_helpers  size=0x204
// sig: undefined M388_0035b790(void)
// callers(4): 0035d338 mobyupdate_helpers::M388_0035d338; 0035d950 mobyupdate_helpers::M388_0035d950; 0035f670 mobyupdate_helpers::M388_0035f670; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(2): 000fc620 mobyutil::MB_randInt; 005c8318 rand

undefined8 mobyupdate_helpers::M388_0035b790(undefined8 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = rand();
  iVar3 = iVar3 - (iVar3 / param_4) * param_4;
  bVar1 = (&DAT_008409e8)[param_3 + iVar3];
  uVar5 = (uint)bVar1;
  if (param_3 < 0x1d) {
    if (param_3 < 0xc) {
      if (*(char *)(param_2 + 0x148) != '\0') {
        return 0;
      }
      if (0 < *(short *)(param_2 + 0x144)) {
        return 0;
      }
    }
    else {
      if (0 < *(short *)(param_2 + 0x146)) {
        return 0;
      }
      if (((*(char *)(param_2 + 0x148) != '\0') && (0x16 < param_3)) && (param_3 < 0x1b)) {
        return 0;
      }
    }
  }
  if (((music::g_SpeechPlaying.handle == 0) && (music::g_PendingSpeech == -1)) || (0x1c < param_3))
  {
    if (0x1c < param_3) {
      music::g_PendingSpeech = bVar1 + 50000;
      *(undefined1 *)(param_2 + 0x13a) = 1;
      return 1;
    }
    if (0 < param_4) {
      iVar6 = 0;
      uVar5 = (uint)bVar1;
      do {
        uVar2 = 1 << (uVar5 & 0x3f);
        if ((*(uint *)(param_2 + 0x13c) & uVar2) == 0) {
          music::g_PendingSpeech = uVar5 + 50000;
          *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) | uVar2;
          *(undefined1 *)(param_2 + 0x13a) = 1;
          return 1;
        }
        if ((param_3 < 0xc) && (iVar4 = mobyutil::MB_randInt(4), iVar4 == 0)) {
          *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) & ~uVar2;
        }
        iVar6 = iVar6 + 1;
        iVar3 = (iVar3 + 1) - ((iVar3 + 1) / param_4) * param_4;
        uVar5 = (uint)(byte)(&DAT_008409e8)[param_3 + iVar3];
      } while (iVar6 < param_4);
    }
    if (param_3 < 0xc) {
      *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) & ~(1 << (uVar5 & 0x3f));
    }
  }
  return 0;
}



//==== 0035b9b0  ns=mobyupdate_helpers  size=0x318
// sig: undefined M388_0035b9b0(void)
// callers(1): 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(6): 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00121740 partupd::SpawnPart_4; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M388_0035b9b0(int param_1,int param_2)

{
  float fVar1;
  int iVar4;
  undefined8 uVar2;
  longlong lVar3;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_b0 [16];
  undefined1 local_a0 [40];
  
  iVar5 = 0;
  dVar10 = 4.0;
  piVar7 = &DAT_00840998;
  dVar11 = 0.5;
  dVar12 = 350.0;
  dVar13 = 600.0;
  puVar6 = &DAT_008409b0;
  dVar14 = 100.0;
  dVar15 = 250.0;
  do {
    if (*(int *)(*piVar7 * 4 + param_2 + 0xc4) != 0) {
      dVar8 = (double)(float)((double)*(float *)(*(int *)(param_1 + 0x24) + 0x24) * dVar10);
      dVar9 = (double)(float)((double)*(float *)(param_1 + 0x2c) / dVar8);
      mobyfunc::GetBonePosition(dVar8,param_1,*puVar6,auStack_b0);
      if ((worldUpdateTime & 1) == 0) {
        if (((*(byte *)(param_1 + 0xbc) == 0) ||
            (*(int *)(&DAT_0084090c + (uint)*(byte *)(param_1 + 0xbc) * 4) != *piVar7)) ||
           (iVar4 = mobyutil::MB_randInt(9), iVar4 == 0)) {
          iVar4 = mobyutil::MB_randRange(0xf,0x16);
          fVar1 = animationSpeed * (float)((double)(longlong)iVar4 + dVar11);
          uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar9 * dVar13));
          partupd::SpawnPart_4
                    (auStack_b0,local_a0,0x6000ffff,0x80,(int)fVar1,uVar2,0xffffffffffffff9c,1);
        }
      }
      else {
        iVar4 = mobyutil::MB_randRange(0xf,0x14);
        fVar1 = animationSpeed * (float)((double)(longlong)iVar4 + dVar11);
        uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar9 * dVar12));
        partupd::SpawnPart_4
                  (auStack_b0,local_a0,0xffffffffcf0000ff,0xcf,(int)fVar1,uVar2,0xffffffffffffff9c,1
                  );
      }
      dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
      lVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * dVar9));
      iVar4 = mobyutil::MB_randRange(8,0xc);
      partupd::SpawnPart_4
                (auStack_b0,local_a0,0xffffffffefff7f4f,0xff0000,
                 (int)(animationSpeed * (float)((double)(longlong)iVar4 + dVar11)),lVar3,-lVar3,1);
    }
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar5 < 6);
  return;
}



//==== 0035bcf0  ns=mobyupdate_helpers  size=0x2b8
// sig: undefined M388_0035bcf0(void)
// callers(1): 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(7): 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00110950 mobyutil::MB_RandomizeVector; 00121740 partupd::SpawnPart_4; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M388_0035bcf0(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float afStack_b0 [4];
  undefined1 local_a0 [32];
  
  puVar6 = &DAT_008409c8;
  if (DAT_008409c8 != -1) {
    dVar9 = 4.0;
    dVar10 = 0.800000011920929;
    dVar11 = 1.100000023841858;
    dVar12 = 1.399999976158142;
    dVar13 = 0.5;
    dVar14 = 450.0;
    dVar15 = 550.0;
    dVar16 = 600.0;
    dVar17 = 800.0;
    iVar5 = 0;
    do {
      dVar8 = (double)(*(float *)(param_1 + 0x2c) /
                      (float)((double)*(float *)(*(int *)(param_1 + 0x24) + 0x24) * dVar9));
      dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
      dVar7 = (double)(float)(dVar8 * dVar7);
      mobyfunc::GetBonePosition(param_1,*puVar6,afStack_b0);
      mobyutil::MB_RandomizeVector((float)(dVar7 * dVar12),afStack_b0);
      if ((worldUpdateTime & 1) == 0) {
        if ((*(char *)(param_1 + 0xbc) == '\0') || (iVar4 = mobyutil::MB_randInt(0xc), iVar4 == 0))
        {
          iVar4 = mobyutil::MB_randRange(0x14,0x32);
          fVar1 = animationSpeed * (float)((double)(longlong)iVar4 + dVar13);
          dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
          uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * dVar7));
          partupd::SpawnPart_4
                    (afStack_b0,local_a0,0xffffffff8000ffff,0x80,(int)fVar1,uVar3,0xffffffffffffff9c
                     ,1);
        }
      }
      else {
        iVar4 = mobyutil::MB_randRange(0x14,0x3c);
        fVar1 = animationSpeed * (float)((double)(longlong)iVar4 + dVar13);
        dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
        uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * dVar7));
        partupd::SpawnPart_4
                  (afStack_b0,local_a0,0xffffffffdf000fff,0xcf,(int)fVar1,uVar3,0xffffffffffffff9c,1
                  );
      }
      puVar6 = puVar6 + 1;
      piVar2 = (int *)(iVar5 + 0x8409cc);
      iVar5 = iVar5 + 4;
    } while (*piVar2 != -1);
  }
  return;
}



//==== 0035bfb0  ns=mobyupdate_helpers  size=0x3f8
// sig: undefined M388_0035bfb0(void)
// callers(1): 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(3): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 003621c8 mobyupdate_helpers::M388_003621c8

void mobyupdate_helpers::M388_0035bfb0(int param_1,int param_2)

{
  MobyInstance *moby;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  uVar8 = 0;
  uVar7 = param_1 + 0xc0;
  dVar12 = 22.0;
  dVar11 = 1001.0;
  do {
    iVar9 = *(int *)((int)((uVar8 & 0xffffffff) << 2) + param_2 + 0xc4);
    if (iVar9 != 0) {
      mobyfunc::GetBonePosition(param_1,uVar8,iVar9 + 0x10);
      uVar1 = (int)*(uint *)(iVar9 + 0x10) >> 0x1f;
      uVar2 = (int)*(uint *)(iVar9 + 0x14) >> 0x1f;
      uVar3 = (int)*(uint *)(iVar9 + 0x18) >> 0x1f;
      dVar10 = (double)*(float *)(iVar9 + 0x10);
      if ((int)((uVar1 >> 1 ^ *(uint *)(iVar9 + 0x10)) - uVar1) < 0x41b00000) {
        *(undefined4 *)(iVar9 + 0x10) = 0x41b00000;
        dVar10 = dVar12;
      }
      if (dVar11 < dVar10) {
        *(undefined4 *)(iVar9 + 0x10) = 0x447a4000;
      }
      dVar10 = (double)*(float *)(iVar9 + 0x14);
      if ((int)((uVar2 >> 1 ^ *(uint *)(iVar9 + 0x14)) - uVar2) < 0x41b00000) {
        *(undefined4 *)(iVar9 + 0x14) = 0x41b00000;
        dVar10 = dVar12;
      }
      if (dVar11 < dVar10) {
        *(undefined4 *)(iVar9 + 0x14) = 0x447a4000;
      }
      dVar10 = (double)*(float *)(iVar9 + 0x18);
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar9 + 0x18)) - uVar3) < 0x41b00000) {
        *(undefined4 *)(iVar9 + 0x18) = 0x41b00000;
        dVar10 = dVar12;
      }
      if (dVar11 < dVar10) {
        *(undefined4 *)(iVar9 + 0x18) = 0x447a4000;
      }
      *(undefined4 *)(iVar9 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(iVar9 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(iVar9 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      puVar4 = (undefined4 *)(uVar7 & 0xfffffff0);
      uVar15 = puVar4[2];
      uVar14 = puVar4[1];
      uVar13 = *puVar4;
      puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
      uVar19 = puVar5[3];
      uVar18 = puVar5[2];
      uVar17 = puVar5[1];
      uVar16 = *puVar5;
      puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
      uVar23 = puVar5[3];
      uVar22 = puVar5[2];
      uVar21 = puVar5[1];
      uVar20 = *puVar5;
      puVar5 = (undefined4 *)(iVar9 + 0xc0U & 0xfffffff0);
      puVar5[3] = puVar4[3];
      puVar5[2] = uVar15;
      puVar5[1] = uVar14;
      *puVar5 = uVar13;
      puVar4 = (undefined4 *)(iVar9 + 0xd0U & 0xfffffff0);
      puVar4[3] = uVar19;
      puVar4[2] = uVar18;
      puVar4[1] = uVar17;
      *puVar4 = uVar16;
      puVar4 = (undefined4 *)(iVar9 + 0xe0U & 0xfffffff0);
      puVar4[3] = uVar23;
      puVar4[2] = uVar22;
      puVar4[1] = uVar21;
      *puVar4 = uVar20;
    }
    iVar9 = (int)uVar8 + 1;
    uVar8 = (ulonglong)iVar9;
  } while (iVar9 < 10);
  iVar9 = *(int *)(&DAT_0084093c + (uint)*(byte *)(param_1 + 0xbc) * 4);
  if ((*(char *)(param_1 + 0x20) == '\x05') || (iVar9 == -1)) {
    moby = *(MobyInstance **)(param_2 + 0xf0);
    if ((moby != (MobyInstance *)0x0) && (moby->state != 0xfd && moby->state != 0xfe)) {
      mobyfunc::DeleteMoby(moby);
      *(undefined4 *)(param_2 + 0xf0) = 0;
    }
  }
  else {
    iVar6 = *(int *)(param_2 + 0xf0);
    if (((iVar6 == 0) || (*(char *)(iVar6 + 0x20) == -2)) || (*(char *)(iVar6 + 0x20) == -3)) {
      iVar6 = M388_003621c8(param_1,iVar9,0x191);
      *(int *)(param_2 + 0xf0) = iVar6;
    }
    if (iVar6 != 0) {
      if (*(char *)(iVar6 + 0x20) != -3 && *(char *)(iVar6 + 0x20) != -2) {
        mobyfunc::GetBonePosition(param_1,iVar9,iVar6 + 0x10);
        uVar1 = (int)*(uint *)(iVar6 + 0x10) >> 0x1f;
        uVar2 = (int)*(uint *)(iVar6 + 0x14) >> 0x1f;
        uVar3 = (int)*(uint *)(iVar6 + 0x18) >> 0x1f;
        dVar10 = (double)*(float *)(iVar6 + 0x10);
        if ((int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x10)) - uVar1) < 0x41b00000) {
          *(undefined4 *)(iVar6 + 0x10) = 0x41b00000;
          dVar10 = dVar12;
        }
        if (dVar11 < dVar10) {
          *(undefined4 *)(iVar6 + 0x10) = 0x447a4000;
        }
        dVar10 = (double)*(float *)(iVar6 + 0x14);
        if ((int)((uVar2 >> 1 ^ *(uint *)(iVar6 + 0x14)) - uVar2) < 0x41b00000) {
          *(undefined4 *)(iVar6 + 0x14) = 0x41b00000;
          dVar10 = dVar12;
        }
        if (dVar11 < dVar10) {
          *(undefined4 *)(iVar6 + 0x14) = 0x447a4000;
        }
        dVar10 = (double)*(float *)(iVar6 + 0x18);
        if ((int)((uVar3 >> 1 ^ *(uint *)(iVar6 + 0x18)) - uVar3) < 0x41b00000) {
          *(undefined4 *)(iVar6 + 0x18) = 0x41b00000;
          dVar10 = dVar12;
        }
        if (dVar11 < dVar10) {
          *(undefined4 *)(iVar6 + 0x18) = 0x447a4000;
        }
        *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
        puVar4 = (undefined4 *)(uVar7 & 0xfffffff0);
        uVar15 = puVar4[2];
        uVar14 = puVar4[1];
        uVar13 = *puVar4;
        puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
        uVar19 = puVar5[3];
        uVar18 = puVar5[2];
        uVar17 = puVar5[1];
        uVar16 = *puVar5;
        puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
        uVar23 = puVar5[3];
        uVar22 = puVar5[2];
        uVar21 = puVar5[1];
        uVar20 = *puVar5;
        puVar5 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
        puVar5[3] = puVar4[3];
        puVar5[2] = uVar15;
        puVar5[1] = uVar14;
        *puVar5 = uVar13;
        puVar4 = (undefined4 *)(iVar6 + 0xd0U & 0xfffffff0);
        puVar4[3] = uVar19;
        puVar4[2] = uVar18;
        puVar4[1] = uVar17;
        *puVar4 = uVar16;
        puVar4 = (undefined4 *)(iVar6 + 0xe0U & 0xfffffff0);
        puVar4[3] = uVar23;
        puVar4[2] = uVar22;
        puVar4[1] = uVar21;
        *puVar4 = uVar20;
      }
    }
  }
  iVar9 = *(int *)(param_2 + 0x110);
  if (iVar9 != 0) {
    *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar9 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar9 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar9 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    puVar4 = (undefined4 *)(uVar7 & 0xfffffff0);
    uVar15 = puVar4[2];
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar19 = puVar5[3];
    uVar18 = puVar5[2];
    uVar17 = puVar5[1];
    uVar16 = *puVar5;
    puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar23 = puVar5[3];
    uVar22 = puVar5[2];
    uVar21 = puVar5[1];
    uVar20 = *puVar5;
    puVar5 = (undefined4 *)(iVar9 + 0xc0U & 0xfffffff0);
    puVar5[3] = puVar4[3];
    puVar5[2] = uVar15;
    puVar5[1] = uVar14;
    *puVar5 = uVar13;
    puVar4 = (undefined4 *)(iVar9 + 0xd0U & 0xfffffff0);
    puVar4[3] = uVar19;
    puVar4[2] = uVar18;
    puVar4[1] = uVar17;
    *puVar4 = uVar16;
    puVar4 = (undefined4 *)(iVar9 + 0xe0U & 0xfffffff0);
    puVar4[3] = uVar23;
    puVar4[2] = uVar22;
    puVar4[1] = uVar21;
    *puVar4 = uVar20;
  }
  return;
}



//==== 0035c3c8  ns=mobyupdate_helpers  size=0x120
// sig: undefined M388_0035c3c8(void)
// callers(2): 0035c4f8 mobyupdate_helpers::M388_0035c4f8; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(3): 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010de78 mobyutil::MB_WrapRot

double mobyupdate_helpers::M388_0035c3c8
                 (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  dVar2 = 3.1415927410125732;
  dVar1 = 6.2831854820251465;
  mobyutil::OrganicDeltAngSpeed
            (param_1,(double)(DAT_0071f418 * 3.1415927),(double)(DAT_0071f418 * 6.2831855),
             (double)(mobyutil::g_FrameTime * 6.2831855),param_3,param_4,param_4 + 0xa8);
  dVar1 = (double)mobyutil::MB_DeltAngSpeed
                            ((double)*(float *)(param_3 + 0x44),param_2,
                             (double)(float)((double)DAT_0071f418 * dVar2),
                             (double)(float)((double)DAT_0071f418 * dVar1),
                             (double)(float)((double)mobyutil::g_FrameTime * dVar1));
  *(float *)(param_3 + 0x44) = (float)dVar1;
  fVar3 = *(float *)(param_4 + 0xa8) * (1.5707964 - ABS(*(float *)(param_3 + 0x40))) * 0.63661975 *
          -0.5 + *(float *)(param_3 + 0x40);
  if (1.5707964 - fVar3 < 0.0) {
    fVar3 = 1.5707964;
  }
  if (fVar3 - -1.5707964 < 0.0) {
    fVar3 = -1.5707964;
  }
  *(float *)(param_3 + 0x40) = fVar3 * 0.985;
  fVar3 = mobyutil::MB_WrapRot(fVar3 * 0.985);
  return (double)fVar3;
}



//==== 0035c4f8  ns=mobyupdate_helpers  size=0x998
// sig: undefined M388_0035c4f8(void)
// callers(2): 0035ceb0 mobyupdate_helpers::M388_0035ceb0; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(1): 0035c3c8 mobyupdate_helpers::M388_0035c3c8

bool mobyupdate_helpers::M388_0035c4f8(int param_1,int param_2,longlong param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  short sVar18;
  longlong lVar17;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong unaff_r31;
  bool bVar23;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x180;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar14;
  puVar12[0x32] = in_LR;
  puVar12[0x26] = in_f22;
  puVar12[0x27] = in_f23;
  puVar12[0x28] = in_f24;
  puVar12[0x29] = in_f25;
  puVar12[0x2a] = in_f26;
  puVar12[0x2b] = in_f27;
  puVar12[0x2c] = in_f28;
  puVar12[0x2d] = in_f29;
  puVar12[0x2e] = in_f30;
  puVar12[0x2f] = in_f31;
  iVar10 = (int)((longlong)*(short *)(param_2 + 0x9e) << 4);
  sVar18 = *(short *)(param_2 + 0x9c);
  pSVar11 = Splines[*(int *)(param_2 + (int)(param_3 << 2) + 0xb0)];
  dVar30 = (double)*(float *)(param_1 + 0x14);
  dVar29 = (double)*(float *)(param_1 + 0x10);
  iVar22 = (int)((longlong)sVar18 << 4);
  dVar26 = (double)*(float *)((int)&pSVar11->points[0].y + iVar10);
  dVar27 = (double)*(float *)((int)&pSVar11->points[0].x + iVar10);
  dVar32 = (double)*(float *)((int)&pSVar11->points[0].z + iVar10);
  fVar1 = (float)(dVar26 - dVar30);
  fVar2 = (float)(dVar27 - dVar29);
  fVar3 = (float)(dVar26 - (double)*(float *)((int)&pSVar11->points[0].y + iVar22));
  fVar4 = (float)(dVar27 - (double)*(float *)((int)&pSVar11->points[0].x + iVar22));
  dVar26 = (double)*(float *)(param_1 + 0x18);
  fVar5 = (float)(dVar32 - dVar26);
  fVar6 = (float)(dVar32 - (double)*(float *)((int)&pSVar11->points[0].z + iVar22));
  dVar27 = 0.0;
  puVar12[0x25] = unaff_r31;
  bVar23 = false;
  fVar2 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar1 = *(float *)(param_2 + 0xac);
  fVar3 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar4 = fVar3 - fVar2;
  if (fVar1 <= fVar4 || fVar4 < 0.0) {
    dVar32 = (double)(fVar2 / fVar3);
  }
  else {
    *(short *)(param_2 + 0x9e) = sVar18;
    iVar10 = pSVar11->cnt;
    sVar18 = sVar18 + *(char *)(param_2 + 0x10c);
    iVar22 = (int)sVar18;
    *(short *)(param_2 + 0x9c) = sVar18;
    if (iVar10 <= iVar22) {
      sVar18 = 0;
      *(undefined2 *)(param_2 + 0x9c) = 0;
    }
    bVar23 = sVar18 < 0;
    if (bVar23) {
      sVar18 = (short)iVar10 + -1;
      *(short *)(param_2 + 0x9c) = sVar18;
    }
    bVar23 = bVar23 || iVar10 <= iVar22;
    dVar32 = dVar27;
  }
  iVar10 = (int)((longlong)sVar18 << 4);
  fVar2 = (float)((double)*(float *)((int)&pSVar11->points[0].y + iVar10) - dVar30);
  fVar3 = (float)((double)*(float *)((int)&pSVar11->points[0].x + iVar10) - dVar29);
  fVar4 = (float)((double)*(float *)((int)&pSVar11->points[0].z + iVar10) - dVar26);
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar32 - 0.05000000074505806 < 0.0) {
    dVar32 = 0.05000000074505806;
  }
  if (1.0 - dVar32 < 0.0) {
    dVar32 = 1.0;
  }
  fVar6 = (float)(1.0 - dVar32);
  fVar9 = fVar1 / fVar5;
  dVar25 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar2 * fVar9);
  }
  dVar28 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar3 * fVar9);
  }
  dVar31 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar31 = (double)(fVar4 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar2 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar3 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar31 = (double)(fVar4 * fVar9);
  }
  fVar2 = (float)(dVar25 * dVar32);
  fVar3 = (float)(dVar28 * dVar32);
  fVar4 = (float)(dVar31 * dVar32);
  fVar7 = *(float *)(param_2 + 0x74) * fVar6 + fVar2;
  fVar9 = *(float *)(param_2 + 0x70) * fVar6 + fVar3;
  fVar6 = *(float *)(param_2 + 0x78) * fVar6 + fVar4;
  *(float *)((int)puVar12 + 0x94) = fVar3;
  *(float *)(puVar12 + 0x13) = fVar2;
  *(float *)((int)puVar12 + 0x9c) = ABS(fVar3) - ABS(fVar2);
  fVar5 = SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar7 * fVar7);
  fVar1 = fVar1 / fVar5;
  uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1d) & 4;
  fVar8 = ABS(*(float *)(puVar12 + 0x13));
  if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
    fVar8 = ABS(fVar3);
  }
  fVar13 = ABS(*(float *)((int)puVar12 + 0x94));
  if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
    fVar13 = ABS(fVar2);
  }
  dVar32 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar32 = (double)(fVar9 * fVar1);
  }
  dVar25 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar7 * fVar1);
  }
  dVar28 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar6 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar32 = (double)(fVar9 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar7 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar6 * fVar1);
  }
  fVar1 = (float)(dVar29 + dVar32);
  fVar5 = (float)(dVar30 + dVar25);
  *(float *)(param_2 + 0x70) = (float)dVar32;
  *(float *)(param_2 + 0x74) = (float)dVar25;
  *(float *)(param_2 + 0x78) = (float)dVar28;
  *(float *)(param_1 + 0x10) = fVar1;
  *(float *)(param_1 + 0x14) = fVar5;
  *(float *)(param_1 + 0x18) = (float)(dVar26 + dVar28);
  fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  dVar29 = dVar27;
  if (0.0 < fVar13) {
    lVar15 = uVar14 - 0x170;
    lVar17 = uVar14 - 0x80;
    lVar19 = uVar14 - 0x70;
    lVar24 = 2;
    fVar8 = (fVar8 - fVar13) / (fVar8 + fVar13);
    fVar7 = fVar8 * fVar8;
    *(float *)(puVar12 + 0x20) = fVar8;
    *(float *)((int)puVar12 + 0x104) = fVar8;
    *(float *)(puVar12 + 0x21) = fVar8;
    *(float *)((int)puVar12 + 0x10c) = fVar8;
    fVar8 = fVar7 * fVar7;
    *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar7;
    *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar8;
    *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar8 * fVar7;
    do {
      *(float *)((int)lVar15 + 0x100) = *(float *)((int)lVar15 + 0xf0) * fVar8 * fVar8;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar19 = uVar14 - 0x80;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar19;
    do {
      fVar8 = *pfVar20;
      fVar7 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0x100) = *(float *)((int)lVar15 + 0x100) * fVar8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar7;
      lVar17 = lVar17 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0x100)) +
                        *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar9 + fVar6);
  }
  *(float *)((int)puVar12 + 0x8c) = fVar4;
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  fVar3 = ABS(fVar2);
  *(float *)(puVar12 + 0x11) = fVar2;
  *(float *)(puVar12 + 0x12) = fVar3 - ABS(fVar4);
  uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar2 = ABS(fVar4);
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar9 = fVar3;
  }
  dVar30 = dVar27;
  if (0.0 < fVar2) {
    lVar15 = uVar14 - 0x170;
    lVar17 = uVar14 - 0xa0;
    lVar19 = uVar14 - 0x90;
    lVar24 = 2;
    fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar12 + 0x1c) = fVar2;
    *(float *)((int)puVar12 + 0xe4) = fVar2;
    *(float *)(puVar12 + 0x1d) = fVar2;
    *(float *)((int)puVar12 + 0xec) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar3;
    *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar2;
    *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar15 + 0xe0) = *(float *)((int)lVar15 + 0xd0) * fVar2 * fVar2;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar19 = uVar14 - 0xa0;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar19;
    do {
      fVar2 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0xe0) = *(float *)((int)lVar15 + 0xe0) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
      lVar17 = lVar17 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar10 + 0xe0)) + *(float *)(iVar22 + 4)
                        + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar4);
  }
  fVar3 = g_heroPosition.y;
  fVar2 = g_heroPosition.x;
  if (*(char *)(param_1 + 0x20) == '\x05') {
    fVar4 = g_heroPosition.y - fVar5;
    fVar9 = ABS(g_heroPosition.x - fVar1);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar12 + 0x7c) = g_heroPosition.x - fVar1;
    *(float *)(puVar12 + 0x10) = fVar4;
    *(float *)((int)puVar12 + 0x84) = fVar9 - fVar6;
    uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar12 + 0x7c));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar8 = ABS(*(float *)(puVar12 + 0x10));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar8 = fVar9;
    }
    fVar9 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar29 = dVar27;
    if (0.0 < fVar4) {
      lVar15 = uVar14 - 0x170;
      lVar17 = uVar14 - 0xc0;
      lVar19 = uVar14 - 0xb0;
      lVar24 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar8 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x18) = fVar4;
      *(float *)((int)puVar12 + 0xc4) = fVar4;
      *(float *)(puVar12 + 0x19) = fVar4;
      *(float *)((int)puVar12 + 0xcc) = fVar4;
      fVar4 = fVar8 * fVar8;
      *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar8;
      *(float *)(puVar12 + 0x19) = *(float *)(puVar12 + 0x19) * fVar4;
      *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar4 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xc0) = *(float *)((int)lVar15 + 0xb0) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar19 = uVar14 - 0xc0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar4 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xc0) = *(float *)((int)lVar15 + 0xc0) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar10 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar22 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xc0)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar9);
    }
    fVar4 = g_heroPosition.z - (float)(dVar26 + dVar28);
    fVar1 = SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + (fVar5 - fVar3) * (fVar5 - fVar3));
    *(float *)((int)puVar12 + 0x74) = fVar4;
    fVar4 = ABS(fVar4);
    fVar2 = ABS(fVar1);
    *(float *)(puVar12 + 0xe) = fVar1;
    *(float *)(puVar12 + 0xf) = fVar2 - fVar4;
    uVar21 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar12 + 0xe));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar12 + 0x74));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    dVar30 = dVar27;
    if (0.0 < fVar1) {
      lVar24 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar12 + 0x14) = fVar1;
      *(float *)((int)puVar12 + 0xa4) = fVar1;
      *(float *)(puVar12 + 0x15) = fVar1;
      *(float *)((int)puVar12 + 0xac) = fVar1;
      lVar19 = uVar14 - 0x170;
      fVar1 = fVar2 * fVar2;
      lVar15 = uVar14 - 0xe0;
      lVar17 = uVar14 - 0xd0;
      *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar2;
      *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar1;
      *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar1 * fVar2;
      do {
        *(float *)((int)lVar19 + 0xa0) = *(float *)((int)lVar19 + 0x90) * fVar1 * fVar1;
        iVar10 = (int)lVar15;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar1 * fVar1;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar19 = uVar14 - 0xe0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar2 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xa0) = *(float *)((int)lVar15 + 0xa0) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar15 = 2;
      do {
        iVar10 = (int)lVar16;
        iVar22 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0xa0)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar30 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar3);
    }
  }
  if (param_4 != '\0') {
    M388_0035c3c8(dVar29,-dVar30);
  }
  return bVar23;
}



//==== 0035ceb0  ns=mobyupdate_helpers  size=0x2b8
// sig: undefined M388_0035ceb0(void)
// callers(1): 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(1): 0035c4f8 mobyupdate_helpers::M388_0035c4f8

longlong mobyupdate_helpers::M388_0035ceb0
                   (int param_1,int param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  short sVar2;
  Spline *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  uVar10 = 0;
  pSVar3 = Splines[*(int *)(param_2 + (int)(param_3 << 2) + 0xb0)];
  if (pSVar3 != (Spline *)0x0) {
    sVar2 = *(short *)(param_2 + 0x9c);
    uVar10 = (longlong)sVar2 + 1;
    lVar12 = (longlong)sVar2 + -1;
    iVar11 = (int)(((longlong)(uVar10 - (longlong)pSVar3->cnt) >> 0x3f & uVar10) << 4);
    iVar9 = (int)lVar12;
    iVar9 = iVar9 + ((uint)(lVar12 >> 0x3f) & (pSVar3->cnt + -1) - iVar9);
    fVar1 = *(float *)((int)&pSVar3->points[0].y + iVar11) - g_heroPosition.y;
    fVar7 = *(float *)((int)&pSVar3->points[0].x + iVar11) - g_heroPosition.x;
    fVar5 = *(float *)((int)&pSVar3->points[0].z + iVar11) - g_heroPosition.z;
    fVar4 = pSVar3->points[iVar9].y - g_heroPosition.y;
    fVar8 = pSVar3->points[iVar9].x - g_heroPosition.x;
    fVar6 = pSVar3->points[iVar9].z - g_heroPosition.z;
    iVar11 = -1;
    fVar1 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar1 * fVar1);
    fVar4 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar4 * fVar4);
    if ((fVar4 <= fVar1) && (iVar11 = 1, fVar1 <= fVar4)) {
      iVar11 = ((uint)((LZCOUNT(1 - (uint)*(byte *)(param_2 + 0x10c)) << 0x3a) >> 0x3f) & 2) - 1;
    }
    if (iVar11 == *(char *)(param_2 + 0x10c)) {
      fVar4 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
      fVar6 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
      fVar5 = *(float *)(param_1 + 0x18) - g_heroPosition.z;
      fVar1 = 1.0;
      if (*(char *)(param_1 + 0xbc) == '\x04') {
        fVar1 = 3.0;
      }
      fVar1 = DAT_0071f408 * 0.12 *
              ((fVar1 * 30.0) / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) -
              *(float *)(param_2 + 0xac)) + *(float *)(param_2 + 0xac);
      *(float *)(param_2 + 0xac) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_2 + 0xac) = 0;
      }
    }
    else {
      fVar1 = *(float *)(param_2 + 0xac) * (DAT_0071f408 * -0.100000024 + 1.0);
      *(float *)(param_2 + 0xac) = fVar1;
      if (fVar1 < DAT_0071f408 * 0.15) {
        *(char *)(param_2 + 0x10c) = (char)iVar11;
        *(undefined2 *)(param_2 + 0x9c) = *(undefined2 *)(param_2 + 0x9e);
        *(short *)(param_2 + 0x9e) = sVar2;
      }
    }
    uVar10 = M388_0035c4f8(param_1,param_2,param_3,param_4);
  }
  return uVar10 + (-(longlong)
                    *(int *)((int)&pSVar3->points[0].w +
                            (int)((longlong)*(short *)(param_2 + 0x9c) << 4)) >> 0x3f &
                  (uVar10 | 2) - uVar10);
}



//==== 0035d190  ns=mobyupdate_helpers  size=0x190
// sig: undefined M388_0035d190(void)
// callers(2): 0035d950 mobyupdate_helpers::M388_0035d950; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110950 mobyutil::MB_RandomizeVector

void mobyupdate_helpers::M388_0035d190(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = param_2 + (int)(param_3 << 2);
  iVar1 = *(int *)(iVar3 + 0xc4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x78);
    mobyutil::MB_SpawnExplosionSparks
              (0x4000000000000000,0x402a000000000000,param_1,iVar1 + 0x10,param_3 << 2,
               0xffffffffffffffff);
    *(float *)(iVar2 + 0x10) = *(float *)(param_2 + 0x70) * 0.95;
    *(float *)(iVar2 + 0x14) = *(float *)(param_2 + 0x74) * 0.95;
    *(float *)(iVar2 + 0x18) = *(float *)(param_2 + 0x78) * 0.95;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x7c);
    mobyutil::MB_RandomizeVector(mobyutil::g_FrameTime * 30.0,(float *)(iVar2 + 0x10));
    *(undefined1 *)(iVar1 + 0x20) = 3;
    *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + *(float *)(iVar2 + 0x10);
    *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) + *(float *)(iVar2 + 0x14);
    *(float *)(iVar1 + 0x18) = *(float *)(iVar1 + 0x18) + *(float *)(iVar2 + 0x18);
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -0.34906584,
                               mobyutil::g_FrameTime * 0.34906584);
    *(float *)(iVar2 + 0x30) = (float)dVar4;
    dVar6 = -3.1415927410125732;
    dVar5 = 3.1415927410125732;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -3.1415927,mobyutil::g_FrameTime * 3.1415927)
    ;
    *(float *)(iVar2 + 0x34) = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar6),
                               (float)((double)mobyutil::g_FrameTime * dVar5));
    *(float *)(iVar2 + 0x38) = (float)dVar4;
    *(undefined1 *)(iVar1 + 0xa4) = 0xff;
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    *(undefined8 *)(iVar1 + 0x38) = 0x40404000000000;
  }
  return;
}



//==== 0035d338  ns=mobyupdate_helpers  size=0x5f8
// sig: undefined M388_0035d338(void)
// callers(1): 0035d950 mobyupdate_helpers::M388_0035d950
// callees(5): 0003fba8 camera::camera19::Cam19_Enable; 000c8b28 hud::Hud_SetEntryValueById; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010c808 mobyutil::MB_UpdateLightsTransition; 0035b790 mobyupdate_helpers::M388_0035b790

void mobyupdate_helpers::M388_0035d338(int param_1,longlong param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  uint uVar7;
  int importIdx;
  int iVar8;
  Spline *pSVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  Cuboid *pCVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0xf0;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar16;
  puVar11[0x20] = in_LR;
  puVar11[0x1d] = in_f31;
  puVar11[0x1c] = unaff_r31;
  puVar11[0x1a] = unaff_r29;
  puVar11[0x19] = unaff_r28;
  puVar11[0x1b] = unaff_r30;
  uVar6 = *(ushort *)(param_1 + 0x34);
  dVar27 = 0.0;
  *param_3 = 0;
  *(ushort *)(param_1 + 0x34) = uVar6 & 0xefff;
  mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  iVar12 = (int)param_2;
  *(undefined1 *)(iVar12 + 0x67) = 0x78;
  mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
  *(undefined1 *)(iVar12 + 0x13b) = 4;
  pCVar13 = Cuboids + *(int *)(iVar12 + 0x130);
  fVar1 = (pCVar13->matrix).v0.y;
  fVar2 = (pCVar13->matrix).v0.x;
  fVar3 = (pCVar13->matrix).v0.z;
  *(undefined2 *)(iVar12 + 0x9c) = 0;
  uVar7 = *(uint *)(iVar12 + 0x134);
  importIdx = *(int *)(iVar12 + 300);
  iVar8 = *(int *)(iVar12 + 0xc0);
  dVar24 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (dVar24 == dVar27) {
    fVar4 = (pCVar13->matrix).v0.w;
    dVar24 = dVar27;
    dVar25 = dVar27;
    dVar26 = dVar27;
  }
  else {
    fVar5 = (float)((double)(mobyutil::g_FrameTime * 10.0) / dVar24);
    fVar4 = (pCVar13->matrix).v0.w;
    dVar26 = (double)(fVar2 * fVar5);
    dVar25 = (double)(fVar1 * fVar5);
    dVar24 = (double)(fVar3 * fVar5);
  }
  *(float *)(iVar12 + 0x70) = (float)dVar26;
  *(float *)(iVar12 + 0x74) = (float)dVar25;
  *(float *)(iVar12 + 0x78) = (float)dVar24;
  pSVar9 = Splines[iVar8];
  *(float *)(iVar12 + 0x7c) = fVar4;
  *(float *)(param_1 + 0x10) = pSVar9->points[0].x;
  *(float *)(param_1 + 0x14) = pSVar9->points[0].y;
  *(float *)(param_1 + 0x18) = pSVar9->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar9->points[0].w;
  fVar1 = pSVar9->points[1].x - pSVar9->points[0].x;
  fVar2 = pSVar9->points[1].y - pSVar9->points[0].y;
  dVar25 = ABS((double)fVar1);
  dVar26 = ABS((double)fVar2);
  *(float *)((int)puVar11 + 0x7c) = fVar1;
  *(float *)(puVar11 + 0x10) = fVar2;
  *(float *)((int)puVar11 + 0x84) = (float)(dVar25 - dVar26);
  uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)((int)puVar11 + 0x7c));
  if ((double)*(float *)((int)puVar11 + 0x84) - dVar27 < 0.0) {
    dVar24 = dVar26;
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar26 = ABS((double)*(float *)(puVar11 + 0x10));
  if ((double)*(float *)((int)puVar11 + 0x84) - dVar27 < 0.0) {
    dVar26 = dVar25;
  }
  fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar25 = dVar27;
  if (dVar27 < dVar24) {
    lVar17 = uVar16 - 0xe0;
    lVar20 = uVar16 - 0x38;
    lVar19 = uVar16 - 0x48;
    lVar23 = 2;
    fVar3 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar11 + 0xb4) = fVar3;
    *(float *)((int)puVar11 + 0xac) = fVar3;
    *(float *)(puVar11 + 0x16) = fVar3;
    *(float *)(puVar11 + 0x15) = fVar3;
    fVar3 = fVar5 * fVar5;
    *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar5;
    *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar3;
    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar3 * fVar5;
    do {
      *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0x98) * fVar3 * fVar3;
      iVar14 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar20 = uVar16 - 0x48;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar20;
    do {
      fVar3 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0xa8) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar24 = dVar27;
    do {
      iVar14 = (int)lVar17;
      iVar15 = (int)lVar20;
      lVar17 = lVar17 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0xa8)) + *(float *)(iVar15 + 4)
                        + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar25 = (double)((float)(dVar24 + 0.7853981852531433) * fVar1 + fVar2);
  }
  pSVar9 = Splines[iVar8];
  *(float *)(param_1 + 0x48) = (float)dVar25;
  fVar1 = pSVar9->points[0].y - pSVar9->points[1].y;
  fVar2 = pSVar9->points[0].x - pSVar9->points[1].x;
  fVar3 = pSVar9->points[1].z - pSVar9->points[0].z;
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)((int)puVar11 + 0x74) = fVar3;
  dVar26 = ABS((double)fVar3);
  dVar25 = ABS((double)fVar1);
  *(float *)(puVar11 + 0xe) = fVar1;
  *(float *)(puVar11 + 0xf) = (float)(dVar25 - dVar26);
  uVar22 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)(puVar11 + 0xe));
  if ((double)*(float *)(puVar11 + 0xf) - dVar27 < 0.0) {
    dVar24 = dVar26;
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar26 = ABS((double)*(float *)((int)puVar11 + 0x74));
  if ((double)*(float *)(puVar11 + 0xf) - dVar27 < 0.0) {
    dVar26 = dVar25;
  }
  fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  if (dVar27 < dVar24) {
    lVar17 = uVar16 - 0xe0;
    lVar20 = uVar16 - 0x58;
    lVar19 = uVar16 - 0x68;
    lVar23 = 2;
    fVar3 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar11 + 0x94) = fVar3;
    *(float *)((int)puVar11 + 0x8c) = fVar3;
    *(float *)(puVar11 + 0x12) = fVar3;
    *(float *)(puVar11 + 0x11) = fVar3;
    fVar3 = fVar5 * fVar5;
    *(float *)((int)puVar11 + 0x8c) = *(float *)((int)puVar11 + 0x8c) * fVar5;
    *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) * fVar3;
    *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar3 * fVar5;
    do {
      *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x78) * fVar3 * fVar3;
      iVar8 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar20 = uVar16 - 0x68;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar20;
    do {
      fVar3 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x88) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar17 = 2;
    do {
      iVar8 = (int)lVar18;
      iVar14 = (int)lVar20;
      lVar18 = lVar18 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar8 + 0x88)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
  }
  *(float *)(param_1 + 0x44) = (float)-dVar27;
  *(undefined1 *)(iVar12 + 0x10c) = 1;
  iVar8 = (int)(((ulonglong)uVar7 & 0xffffff) << 8);
  *(ushort *)((int)&MobyInstance->modeBits + iVar8) =
       *(ushort *)((int)&MobyInstance->modeBits + iVar8) | 2;
  *(ushort *)((int)&MobyInstance->modeBits + iVar8) =
       *(ushort *)((int)&MobyInstance->modeBits + iVar8) | 1;
  (&MobyInstance->enabled)[iVar8] = '\0';
  camera::camera19::Cam19_Enable(importIdx);
  auVar28 = ZEXT416(0xffffffff);
  auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
  *(undefined1 *)(param_1 + 0x20) = 7;
  auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
  *(float *)(iVar12 + 0xac) = mobyutil::g_FrameTime * 80.0;
  auVar28 = loadVectorLeftIndexed(0x10,0x35d320);
  auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar29
                      );
  auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
  auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar10 = storeVectorElementWordIndexed
                     (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xf8,param_2);
  *(undefined4 *)(iVar12 + 0xf8U & 0xfffffffc) = uVar10;
  M388_0035b790(param_1,param_2,0x22,1);
  *(undefined2 *)(iVar12 + 0x138) = 0;
  *(undefined1 *)(iVar12 + 0x148) = 0;
  if (*(int *)(iVar12 + 0x104) != -1) {
    hud::Hud_SetEntryValueById(*(int *)(iVar12 + 0x104),0);
    *(undefined4 *)(iVar12 + 0x104) = 0xffffffff;
  }
  *(undefined4 *)(iVar12 + 0x13c) = 0xffffffff;
  return;
}



//==== 0035d950  ns=mobyupdate_helpers  size=0x94c
// sig: undefined M388_0035d950(void)
// callers(1): 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(10): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0035b790 mobyupdate_helpers::M388_0035b790; 0035d190 mobyupdate_helpers::M388_0035d190; 0035d338 mobyupdate_helpers::M388_0035d338; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M388_0035d950(MobyInstance *param_1,longlong param_2)

{
  char cVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  byte bVar14;
  longlong lVar15;
  undefined4 *puVar16;
  int iVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int local_90 [2];
  longlong local_88;
  
  if (5 < param_1->state) goto LAB_0035e244;
  iVar8 = (int)param_2;
  iVar12 = 0;
  local_88 = (longlong)(int)*(short *)(iVar8 + 0x24);
  lVar18 = param_2 + 0x20;
  bVar9 = false;
  dVar22 = (double)((float)local_88 * 0.16666667);
  dVar19 = (double)fastfunc::FastIntToDouble(param_1->setByGroup);
  dVar20 = 6.0;
  if (4 < (byte)param_1->setByGroup) {
    dVar19 = (double)fastfunc::FastIntToDouble((ulonglong)(byte)param_1->setByGroup - 1);
  }
  dVar21 = 0.30000001192092896;
  dVar19 = (double)(float)((double)(float)(dVar20 - dVar19) * dVar22);
  dVar20 = (double)(float)(dVar22 * 0.30000001192092896 + dVar19);
  if (*(int *)(iVar8 + 0xf0) != 0) {
    iVar10 = mobyutil::MB_damage(*(int *)(iVar8 + 0xf0),0x230000,0);
    mobyutil::MB_HandleDamage(param_1,iVar10,lVar18,0,local_90,0,0,4);
    cVar1 = param_1->setByGroup;
    fVar3 = *(float *)(iVar8 + 0x20);
    if ((iVar10 != 0) && (*(int *)(iVar10 + 0x20) != 0)) {
      sVar5 = *(short *)(*(int *)(iVar10 + 0x20) + 0xa6);
      if ((sVar5 == 0x53 || sVar5 == 0x52) || (sVar5 == 0xd4)) {
        *(undefined1 *)(*(int *)(iVar8 + 0xf0) + 0xa4) = 0xff;
        goto LAB_0035dd4c;
      }
    }
    if (1 < local_90[0]) {
      dVar22 = (double)*(float *)(iVar10 + 0x2c);
      if ((0 < *(int *)(iVar10 + 0x2c)) && (*(short *)(iVar10 + 0x2a) == 0x3f1)) {
        *(undefined4 *)(iVar10 + 0x2c) = 0x3e99999a;
        dVar22 = dVar21;
      }
      if ((iVar10 != 0) && (cVar1 == '\a')) {
        dVar21 = dVar22 * 1.5;
        dVar22 = (double)(float)dVar21;
        *(float *)(iVar10 + 0x2c) = (float)dVar21;
      }
      if (dVar22 < (double)fVar3) {
        auVar23 = ZEXT416(0xffffffff);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        *(undefined1 *)(iVar8 + 0x67) = 0xfa;
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        iVar12 = 1;
        *(float *)(iVar8 + 0x20) = (float)((double)fVar3 - dVar22);
        auVar23 = loadVectorLeftIndexed(0x10,0x35d930);
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar23 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                             auVar24);
        auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
        auVar23 = vectorSplatHalfWord(auVar23,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x26,param_2);
        *(undefined2 *)(iVar8 + 0x26) = uVar6;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        *(undefined1 *)(*(int *)(iVar8 + 0xf0) + 0xa4) = 0xff;
      }
      else {
        M388_0035d338(param_1,param_2,lVar18,iVar10);
        iVar12 = 3;
        *(undefined1 *)(*(int *)(iVar8 + 0xf0) + 0xa4) = 0xff;
      }
      uVar2 = param_1->state;
      if (uVar2 == '\a') {
        bVar9 = true;
        param_1->setByGroup = param_1->setByGroup + '\x01';
        iVar10 = *(int *)(DAT_0096b2d0 + 0x78);
        *(undefined4 *)(iVar10 + 0x88) = 0;
        *(undefined4 *)(iVar10 + 0xec) = 0;
        *(undefined4 *)(iVar10 + 0x8c) = 0;
        *(undefined4 *)(iVar10 + 0x118) = 0;
      }
      else if (dVar19 <= (double)*(float *)(iVar8 + 0x20)) {
        if ((double)*(float *)(iVar8 + 0x20) < dVar20) {
          *(undefined1 *)(iVar8 + 0x148) = 1;
        }
      }
      else {
        bVar14 = param_1->setByGroup;
        iVar12 = *(int *)(&DAT_0084090c + (uint)bVar14 * 4);
        if (iVar12 != -1) {
          sound::PlayMobySound(7,0,param_1);
          M388_0035d190(param_1,param_2,iVar12);
          uVar2 = param_1->state;
          bVar14 = param_1->setByGroup;
        }
        if (uVar2 == '\x05') {
          param_1->state = '\x04';
        }
        param_1->setByGroup = bVar14 + 1;
        iVar12 = *(int *)(iVar8 + 0x11c);
        if (iVar12 != -1) {
          if (((iVar12 != -1) && (sound::g_SoundChannels[iVar12].pMoby == param_1)) &&
             (sound::g_SoundChannels[iVar12].state != '\0')) {
            sound::sound_Kill(iVar12);
          }
          *(undefined4 *)(iVar8 + 0x11c) = 0xffffffff;
        }
        iVar12 = 2;
        bVar9 = true;
        iVar10 = *(int *)(DAT_0096b2d0 + 0x78);
        *(undefined4 *)(iVar10 + 0x88) = 0;
        *(undefined4 *)(iVar10 + 0xec) = 0;
        *(undefined4 *)(iVar10 + 0x8c) = 0;
        *(undefined4 *)(iVar10 + 0x118) = 0;
        *(undefined2 *)(iVar8 + 0x138) = 0;
        *(undefined1 *)(iVar8 + 0x148) = 0;
        if (param_1->setByGroup == 7) {
          iVar10 = (byte)param_1->setByGroup - 1;
          if (iVar10 < 10) {
            puVar16 = (undefined4 *)(&DAT_00840910 + iVar10 * 4);
            do {
              M388_0035d190(param_1,param_2,*puVar16);
              iVar10 = iVar10 + 1;
              puVar16 = puVar16 + 1;
            } while (iVar10 < 10);
          }
          sound::PlayMobySound(7,0,param_1);
        }
      }
    }
  }
LAB_0035dd4c:
  iVar10 = 0;
  lVar15 = param_2;
  do {
    if (iVar12 != 0) break;
    iVar17 = (int)lVar15;
    if (*(int *)(iVar17 + 0xc4) != 0) {
      iVar11 = mobyutil::MB_damage(*(int *)(iVar17 + 0xc4),0x230000,0);
      mobyutil::MB_HandleDamage(param_1,iVar11,lVar18,0,local_90,0,0,4);
      cVar1 = param_1->setByGroup;
      fVar3 = *(float *)(iVar8 + 0x20);
      if ((iVar11 != 0) && (*(int *)(iVar11 + 0x20) != 0)) {
        sVar5 = *(short *)(*(int *)(iVar11 + 0x20) + 0xa6);
        if ((sVar5 == 0x53 || sVar5 == 0x52) || (sVar5 == 0xd4)) {
          *(undefined1 *)(*(int *)(iVar17 + 0xc4) + 0xa4) = 0xff;
          goto LAB_0035e0b4;
        }
      }
      if (1 < local_90[0]) {
        fVar4 = *(float *)(iVar11 + 0x2c);
        if (0 < *(int *)(iVar11 + 0x2c)) {
          uVar13 = *(ushort *)(iVar11 + 0x2a);
          if (uVar13 < 0x128) {
            if (0x126 < uVar13) {
              fVar4 = fVar4 * 0.5;
              *(float *)(iVar11 + 0x2c) = fVar4;
            }
          }
          else if (uVar13 == 0x3f1) {
            *(undefined4 *)(iVar11 + 0x2c) = 0x3dcccccd;
            fVar4 = 0.1;
          }
        }
        if ((iVar11 != 0) && (cVar1 == '\a')) {
          fVar4 = fVar4 * 1.5;
          *(float *)(iVar11 + 0x2c) = fVar4;
        }
        if (fVar4 < fVar3) {
          auVar23 = ZEXT416(0xffffffff);
          auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
          *(undefined1 *)(iVar8 + 0x67) = 0xfa;
          auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
          iVar12 = 1;
          *(float *)(iVar8 + 0x20) = fVar3 - fVar4;
          auVar23 = loadVectorLeftIndexed(0x10,0x35d930);
          auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar23 = vectorMultiplyAddFloatingPoint
                              (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60
                               ,auVar24);
          auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
          auVar23 = vectorSplatHalfWord(auVar23,1);
          uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x26,param_2);
          *(undefined2 *)(iVar8 + 0x26) = uVar6;
          mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
          *(undefined1 *)(*(int *)(iVar17 + 0xc4) + 0xa4) = 0xff;
        }
        else {
          M388_0035d338(param_1,param_2,lVar18,iVar11);
          iVar12 = 3;
          *(undefined1 *)(*(int *)(iVar17 + 0xc4) + 0xa4) = 0xff;
        }
        if (param_1->state == '\a') {
          bVar9 = true;
          param_1->setByGroup = param_1->setByGroup + '\x01';
          iVar17 = *(int *)(DAT_0096b2d0 + 0x78);
          *(undefined4 *)(iVar17 + 0x88) = 0;
          *(undefined4 *)(iVar17 + 0xec) = 0;
          *(undefined4 *)(iVar17 + 0x8c) = 0;
          *(undefined4 *)(iVar17 + 0x118) = 0;
        }
        else if (dVar19 <= (double)*(float *)(iVar8 + 0x20)) {
          if ((double)*(float *)(iVar8 + 0x20) < dVar20) {
            *(undefined1 *)(iVar8 + 0x148) = 1;
          }
        }
        else {
          if (*(int *)(&DAT_0084090c + (uint)(byte)param_1->setByGroup * 4) != -1) {
            M388_0035d190(param_1,param_2,
                          *(int *)(&DAT_0084090c + (uint)(byte)param_1->setByGroup * 4));
          }
          sound::PlayMobySound(7,0,param_1);
          iVar12 = *(int *)(iVar8 + 0x11c);
          if (param_1->state == '\x05') {
            param_1->state = '\x04';
          }
          param_1->setByGroup = param_1->setByGroup + '\x01';
          if (iVar12 != -1) {
            if (((iVar12 != -1) && (sound::g_SoundChannels[iVar12].pMoby == param_1)) &&
               (sound::g_SoundChannels[iVar12].state != '\0')) {
              sound::sound_Kill(iVar12);
            }
            *(undefined4 *)(iVar8 + 0x11c) = 0xffffffff;
          }
          bVar9 = true;
          iVar12 = 2;
          iVar17 = *(int *)(DAT_0096b2d0 + 0x78);
          *(undefined4 *)(iVar17 + 0x88) = 0;
          *(undefined4 *)(iVar17 + 0xec) = 0;
          *(undefined4 *)(iVar17 + 0x8c) = 0;
          *(undefined4 *)(iVar17 + 0x118) = 0;
          *(undefined2 *)(iVar8 + 0x138) = 0;
          *(undefined1 *)(iVar8 + 0x148) = 0;
          if (param_1->setByGroup == 7) {
            iVar17 = (byte)param_1->setByGroup - 1;
            if (iVar17 < 10) {
              puVar16 = (undefined4 *)(&DAT_00840910 + iVar17 * 4);
              do {
                M388_0035d190(param_1,param_2,*puVar16);
                iVar17 = iVar17 + 1;
                puVar16 = puVar16 + 1;
              } while (iVar17 < 10);
            }
            sound::PlayMobySound(7,0,param_1);
          }
        }
      }
    }
LAB_0035e0b4:
    iVar10 = iVar10 + 1;
    lVar15 = lVar15 + 4;
  } while (iVar10 < 0xb);
  if (iVar12 != 0) {
    if (bVar9) {
      cVar1 = param_1->setByGroup;
      if (cVar1 != '\b') {
        if (cVar1 == '\a') {
          M388_0035b790(param_1,param_2,0x16,1);
        }
        else if (cVar1 == '\x06') {
          M388_0035b790(param_1,param_2,0x13,1);
        }
        else if (cVar1 != '\x05') {
          if (cVar1 == '\x04') {
            M388_0035b790(param_1,param_2,0x11,1);
          }
          else if (cVar1 == '\x03') {
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar25 = loadVectorLeftIndexed(0x18,0x35d930);
            auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar23 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar23 = vectorMultiplyAddFloatingPoint
                                (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 |
                                         auVar23 << 0x60,auVar24);
            auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
            auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar7 = storeVectorElementWordIndexed
                              (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x100,
                               param_2);
            *(undefined4 *)(iVar8 + 0x100U & 0xfffffffc) = uVar7;
            M388_0035b790(param_1,param_2,0x10,1);
          }
          else if (cVar1 == '\x02') {
            M388_0035b790(param_1,param_2,0xc,4);
          }
        }
      }
    }
    else if ((param_1->setByGroup == '\a') && (*(char *)(iVar8 + 0x148) != '\0')) {
      uVar13 = *(ushort *)(iVar8 + 0x138);
      if ((uVar13 & 1) == 0) {
        iVar12 = M388_0035b790(param_1,param_2,0x14,2);
        uVar13 = *(ushort *)(iVar8 + 0x138);
        if (iVar12 != 0) {
          uVar13 = uVar13 | 1;
          *(ushort *)(iVar8 + 0x138) = uVar13;
        }
      }
      if (((uVar13 & 2) == 0) && (iVar12 = M388_0035b790(param_1,param_2,0x14,2), iVar12 != 0)) {
        *(ushort *)(iVar8 + 0x138) = *(ushort *)(iVar8 + 0x138) | 2;
      }
    }
  }
LAB_0035e244:
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 0035e29c  ns=mobyupdate_helpers  size=0x120
// sig: undefined M388_0035e29c(void)
// callers(2): 0035e3c8 mobyupdate_helpers::M388_0035e3c8; 0035ed70 mobyupdate_helpers::M388_0035ed70
// callees(2): 000fe610 mobyutil::MB_SphericalToVector; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M388_0035e29c(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = *(int *)(DAT_0096b2d0 + 0x78);
  dVar5 = (double)fastfunc::FastWrapRot(*(float *)(DAT_0096b2d0 + 0x48),*(float *)(iVar3 + 0x90));
  dVar6 = (double)fastfunc::FastWrapRot(*(float *)(DAT_0096b2d0 + 0x44),*(float *)(iVar3 + 0x94));
  fVar1 = param_3[1] - *(float *)(DAT_0096b2d0 + 0x14);
  fVar2 = *param_3 - *(float *)(DAT_0096b2d0 + 0x10);
  fVar4 = param_3[2] - *(float *)(DAT_0096b2d0 + 0x18);
  mobyutil::MB_SphericalToVector
            ((float)((double)(SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar1 * fVar1) /
                             (float)((double)*(float *)(iVar3 + 100) + param_1)) *
                    (double)*(float *)(iVar3 + 100)),(float)dVar5,(float)-dVar6,param_2);
  fVar1 = *(float *)(DAT_0096b2d0 + 0x14);
  fVar2 = *(float *)(DAT_0096b2d0 + 0x18);
  *param_2 = *param_2 + *(float *)(DAT_0096b2d0 + 0x10);
  param_2[1] = param_2[1] + fVar1;
  param_2[2] = param_2[2] + fVar2;
  return;
}



//==== 0035e3c8  ns=mobyupdate_helpers  size=0x7dc
// sig: undefined M388_0035e3c8(void)
// callers(1): 0035ebb8 mobyupdate_helpers::M388_0035ebb8
// callees(1): 0035e29c mobyupdate_helpers::M388_0035e29c

void mobyupdate_helpers::M388_0035e3c8
               (double param_1,float *param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar20;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x150;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x2c] = in_LR;
  puVar10[0x29] = in_f31;
  puVar10[0x28] = unaff_r31;
  puVar10[0x27] = unaff_r30;
  puVar10[0x26] = unaff_r29;
  iVar11 = DAT_0096b2d0;
  fVar3 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar9 = g_heroPosition.x - fVar4;
    fVar6 = g_heroPosition.y - fVar5;
    fVar8 = ABS(fVar9);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar10 + 0x8c) = fVar9;
    *(float *)(puVar10 + 0x12) = fVar6;
    *(float *)((int)puVar10 + 0x94) = fVar8 - fVar7;
    dVar26 = 0.0;
    uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
    fVar9 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
      fVar9 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar13 = ABS(*(float *)(puVar10 + 0x12));
    if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
      fVar13 = fVar8;
    }
    dVar24 = dVar26;
    if (0.0 < fVar9) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x80;
      lVar19 = uVar14 - 0x70;
      lVar21 = 2;
      fVar9 = (fVar13 - fVar9) / (fVar13 + fVar9);
      fVar8 = fVar9 * fVar9;
      *(float *)((int)puVar10 + 0xdc) = fVar9;
      *(float *)((int)puVar10 + 0xd4) = fVar9;
      *(float *)(puVar10 + 0x1b) = fVar9;
      *(float *)(puVar10 + 0x1a) = fVar9;
      fVar9 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar8;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar9;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar9 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xd0) = *(float *)((int)lVar15 + 0xc0) * fVar9 * fVar9;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x80;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar9 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xd0) = *(float *)((int)lVar15 + 0xd0) * fVar9;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar11 + 0xd0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar7 + fVar6);
    }
    fVar5 = fVar5 - fVar2;
    fVar4 = fVar4 - fVar1;
    fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    fVar2 = ABS(fVar3 - param_2[2]);
    *(float *)((int)puVar10 + 0x84) = fVar3 - param_2[2];
    fVar3 = ABS(fVar1);
    *(float *)(puVar10 + 0x10) = fVar1;
    *(float *)(puVar10 + 0x11) = fVar3 - fVar2;
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar10 + 0x10));
    if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar10 + 0x84));
    if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (0.0 < fVar1) {
      lVar15 = uVar14 - 0x140;
      lVar19 = uVar14 - 0x90;
      lVar17 = uVar14 - 0xa0;
      lVar21 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar10 + 0xbc) = fVar1;
      *(float *)((int)puVar10 + 0xb4) = fVar1;
      *(float *)(puVar10 + 0x17) = fVar1;
      *(float *)(puVar10 + 0x16) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar3;
      *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar1;
      *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xa0) * fVar1 * fVar1;
        iVar11 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar1 * fVar1;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0xa0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xb0) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xb0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar2);
    }
  }
  else {
    dVar26 = 0.0;
    if (param_1 <= 0.0) {
      fVar1 = *(float *)(DAT_0096b2d0 + 0x10);
      *(float *)(puVar10 + 0xe) = fVar1;
      fVar2 = *(float *)(iVar11 + 0x14);
      *(float *)((int)puVar10 + 0x74) = fVar2;
      fVar3 = *(float *)(iVar11 + 0x18);
      *(float *)(puVar10 + 0xf) = fVar3;
      *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)(iVar11 + 0x1c);
    }
    else {
      M388_0035e29c(param_1,uVar14 - 0xe0,param_2);
      fVar1 = *(float *)(puVar10 + 0xe);
      fVar2 = *(float *)((int)puVar10 + 0x74);
      fVar3 = *(float *)(puVar10 + 0xf);
    }
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar9 = fVar1 - fVar4;
    fVar6 = fVar2 - fVar5;
    dVar24 = ABS((double)fVar9);
    dVar25 = ABS((double)fVar6);
    *(float *)((int)puVar10 + 0xa4) = fVar9;
    *(float *)(puVar10 + 0x15) = fVar6;
    *(float *)((int)puVar10 + 0xac) = (float)(dVar24 - dVar25);
    uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)((int)puVar10 + 0xa4));
    if ((double)*(float *)((int)puVar10 + 0xac) - dVar26 < 0.0) {
      dVar23 = dVar25;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar25 = ABS((double)*(float *)(puVar10 + 0x15));
    if ((double)*(float *)((int)puVar10 + 0xac) - dVar26 < 0.0) {
      dVar25 = dVar24;
    }
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar24 = dVar26;
    if (dVar26 < dVar23) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x40;
      lVar19 = uVar14 - 0x30;
      lVar21 = 2;
      fVar7 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0x11c) = fVar7;
      *(float *)((int)puVar10 + 0x114) = fVar7;
      *(float *)(puVar10 + 0x23) = fVar7;
      *(float *)(puVar10 + 0x22) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar8;
      *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar7;
      *(float *)((int)puVar10 + 0x11c) = *(float *)((int)puVar10 + 0x11c) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar15 + 0x110) = *(float *)((int)lVar15 + 0x100) * fVar7 * fVar7;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar7 * fVar7;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x40;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0x110) = *(float *)((int)lVar15 + 0x110) * fVar7;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar11 + 0x110)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar9 + fVar6);
    }
    fVar5 = fVar5 - fVar2;
    fVar4 = fVar4 - fVar1;
    fVar1 = param_2[2];
    fVar2 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    *(float *)((int)puVar10 + 0x9c) = fVar3 - fVar1;
    dVar22 = ABS((double)(fVar3 - fVar1));
    dVar25 = ABS((double)fVar2);
    *(float *)(puVar10 + 0x13) = fVar2;
    *(float *)(puVar10 + 0x14) = (float)(dVar25 - dVar22);
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)(puVar10 + 0x13));
    if ((double)*(float *)(puVar10 + 0x14) - dVar26 < 0.0) {
      dVar23 = dVar22;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar10 + 0x9c));
    if ((double)*(float *)(puVar10 + 0x14) - dVar26 < 0.0) {
      dVar22 = dVar25;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (dVar26 < dVar23) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x60;
      lVar19 = uVar14 - 0x50;
      lVar21 = 2;
      fVar3 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xfc) = fVar3;
      *(float *)((int)puVar10 + 0xf4) = fVar3;
      *(float *)(puVar10 + 0x1f) = fVar3;
      *(float *)(puVar10 + 0x1e) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar4;
      *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar3;
      *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar15 + 0xf0) = *(float *)((int)lVar15 + 0xe0) * fVar3 * fVar3;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x60;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xf0) = *(float *)((int)lVar15 + 0xf0) * fVar3;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xf0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  if (param_5 != (float *)0x0) {
    *param_5 = (float)dVar24;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)-dVar26;
  }
  return;
}



//==== 0035ebb8  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M388_0035ebb8(void)
// callers(1): 0035f670 mobyupdate_helpers::M388_0035f670
// callees(5): 000f1114 mobyfunc::GetBonePosition; 0015d12c sound::PlayMobySound; 0035e3c8 mobyupdate_helpers::M388_0035e3c8; 00471930 mobyupdate_helpers::M819_00471930; 005c8318 rand

undefined8 mobyupdate_helpers::M388_0035ebb8(MobyInstance *param_1,int param_2)

{
  uint uVar1;
  uint uVar3;
  byte bVar4;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [32];
  
  bVar4 = *(byte *)(param_2 + 0xfc);
  uVar1 = (uint)bVar4;
  if (param_1->setByGroup == '\x06') {
    uVar3 = rand();
    if ((uVar3 & 1) == 0) goto LAB_0035ec34;
    bVar4 = *(byte *)(param_2 + 0xfc);
  }
  *(byte *)(param_2 + 0xfc) = bVar4 ^ 1;
LAB_0035ec34:
  mobyfunc::GetBonePosition
            (param_1,((LZCOUNT(-(uVar1 & 1)) << 0x3a) >> 0x3f & 0xfffffffffffffffeU) + 0x12,
             auStack_50);
  if (param_1->state == '\x05') {
    M388_0035e3c8(0xbff0000000000000,auStack_50,&DAT_0035eba4,local_3c,local_38);
  }
  else {
    M388_0035e3c8((double)(mobyutil::g_FrameTime * 17.0),auStack_50,&DAT_00720000,local_3c,local_38)
    ;
  }
  uVar2 = M819_00471930((double)(mobyutil::g_FrameTime * 18.0 + *(float *)(param_2 + 0xac)),
                        (double)(mobyutil::g_FrameTime * 18.0),param_1,auStack_50,DAT_0096b2d0,
                        local_40);
  if ((int)uVar2 != 0) {
    sound::PlayMobySound(2,0,param_1);
  }
  return uVar2;
}



//==== 0035ed70  ns=mobyupdate_helpers  size=0x36c
// sig: undefined M388_0035ed70(void)
// callers(1): 0035f670 mobyupdate_helpers::M388_0035f670
// callees(6): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0015d12c sound::PlayMobySound; 0035e29c mobyupdate_helpers::M388_0035e29c; 0047df40 mobyupdate_helpers::M829_0047df40

undefined8 mobyupdate_helpers::M388_0035ed70(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined4 local_90 [4];
  undefined1 local_80 [16];
  undefined4 local_70 [6];
  
  mobyfunc::GetBonePosition(param_1,0xe,local_90);
  dVar3 = 30.0;
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    mobyutil::MB_randSphere(0,(double)(mobyutil::g_FrameTime * 30.0),local_80);
  }
  else {
    M388_0035e29c((double)(mobyutil::g_FrameTime * 20.0),local_70,local_90);
    dVar2 = -30.0;
    mobyutil::MB_randRangeFloat
              ((float)((double)mobyutil::g_FrameTime * -30.0),
               (float)((double)mobyutil::g_FrameTime * dVar3));
    mobyutil::MB_randRangeFloat
              ((float)((double)mobyutil::g_FrameTime * dVar2),
               (float)((double)mobyutil::g_FrameTime * dVar3));
    mobyutil::MB_randRangeFloat
              ((float)((double)mobyutil::g_FrameTime * 5.0),
               (float)((double)mobyutil::g_FrameTime * dVar3));
  }
  uVar1 = M829_0047df40(param_1,local_90,local_80);
  if ((int)uVar1 != 0) {
    sound::PlayMobySound(3,0,(MobyInstance *)param_1);
  }
  return uVar1;
}



//==== 0035f100  ns=mobyupdate_helpers  size=0x548
// sig: undefined M388_0035f100(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M388_0035f100(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float local_150;
  float local_14c;
  float local_148;
  undefined1 local_140 [152];
  
  iVar1 = *(int *)(param_1 + 0x78);
  draw::GetEffectTex(0x34);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,1,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  dVar9 = 0.0;
  dVar7 = 1.0;
  mobyfunc::GetBonePosition(param_1,0x13,&local_150);
  fVar3 = *(float *)(iVar1 + 0x84) - local_14c;
  fVar4 = *(float *)(iVar1 + 0x80) - local_150;
  fVar5 = *(float *)(iVar1 + 0x88) - local_148;
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar6 = 100.0 / fVar2;
  if (100.0 - fVar2 < 0.0) {
    fVar3 = fVar3 * fVar6;
  }
  if (100.0 - fVar2 < 0.0) {
    fVar4 = fVar4 * fVar6;
  }
  if (100.0 - fVar2 < 0.0) {
    fVar5 = fVar5 * fVar6;
  }
  dVar8 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  dVar12 = (double)(float)(dVar8 * 0.009999999776482582);
  if ((double)(float)(dVar8 * 0.009999999776482582) - dVar7 < 0.0) {
    dVar12 = dVar7;
  }
  fastfunc::FastIntToDouble(worldUpdateTime % 0x14);
  if (dVar9 < dVar8) {
    dVar7 = 10.0;
    dVar11 = 6.400000095367432;
    dVar10 = (double)(float)(dVar8 - 10.0);
    do {
      if ((dVar7 < dVar8) && (dVar10 < dVar9)) {
        fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar8 - dVar9) * dVar11));
      }
      draw::FastDrawQuad(local_140,0,1,EffectTexHeaders,9);
      dVar9 = (double)(float)(dVar9 + dVar12);
    } while (dVar9 < dVar8);
  }
  return;
}



//==== 0035f670  ns=mobyupdate_helpers  size=0x8dc
// sig: undefined M388_0035f670(void)
// callers(1): 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(9): 000f1114 mobyfunc::GetBonePosition; 000fe484 mobyutil::MB_randRange; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0035b790 mobyupdate_helpers::M388_0035b790; 0035ebb8 mobyupdate_helpers::M388_0035ebb8; 0035ed70 mobyupdate_helpers::M388_0035ed70; 004fff60 fastfunc::FastDecTimerS32; 005000b4 fastfunc::FastDecTimerU8

undefined * mobyupdate_helpers::M388_0035f670(MobyInstance *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined8 in_LR;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  bVar7 = param_1->setByGroup;
  iVar2 = (int)param_2;
  if (bVar7 < 3) {
    if (bVar7 == 0) {
      return (undefined *)(uint)bVar7;
    }
    if (bVar7 < 2) {
      if (param_1->state != '\x04') {
        iVar5 = fastfunc::FastDecTimerS32(param_2 + 0xf8);
        if (iVar5 == 0) {
          return (undefined *)0x0;
        }
        if (((*(ushort *)(iVar2 + 0x138) & 1) == 0) &&
           (iVar5 = M388_0035b790(param_1,param_2,1,2), iVar5 != 0)) {
          *(ushort *)(iVar2 + 0x138) = *(ushort *)(iVar2 + 0x138) | 1;
        }
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(8,0x35f648);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        param_1->state = '\x04';
        return (undefined *)0xf8;
      }
      iVar5 = fastfunc::FastDecTimerS32(param_2 + 0xf8);
      if (iVar5 == 0) {
        return (undefined *)0x0;
      }
      M388_0035ebb8(param_1,param_2);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      bVar7 = *(char *)(iVar2 + 0xfd) + 1;
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
      *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
      *(byte *)(iVar2 + 0xfd) = bVar7;
      if (bVar7 < 0xb) {
        return (undefined *)0xf8;
      }
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      *(undefined1 *)(iVar2 + 0xfd) = 0;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      param_1->state = '\x03';
      auVar8 = loadVectorLeftIndexed(4,0x35f648);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
      *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
      return (undefined *)0xf8;
    }
  }
  else {
    if (bVar7 < 7) {
      if (bVar7 == 4) {
        param_1->state = '\x03';
        if (*(byte *)(iVar2 + 0x10e) != 0) {
          return (undefined *)(uint)*(byte *)(iVar2 + 0x10e);
        }
        param_1->setByGroup = '\x05';
        M388_0035b790(param_1,param_2,0x1b,2);
        puVar4 = *(undefined **)(DAT_0096b2d0 + 0x78);
        *(undefined4 *)(puVar4 + 0x88) = 0;
        *(undefined4 *)(puVar4 + 0xec) = 0;
        *(undefined4 *)(puVar4 + 0x8c) = 0;
        *(undefined4 *)(puVar4 + 0x118) = 0;
        return puVar4;
      }
      fastfunc::FastDecTimerS32(param_2 + 0x124);
      fastfunc::FastDecTimerS32(param_2 + 0x100);
      fastfunc::FastDecTimerS32(param_2 + 0xf8);
      if (param_1->state == '\x05') {
        if (*(int *)(iVar2 + 0x100) == 0) {
          if (*(undefined **)(iVar2 + 0x124) != (undefined *)0x0) {
            return *(undefined **)(iVar2 + 0x124);
          }
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          auVar8 = loadVectorLeftIndexed(0x14,0x35f648);
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar9 = vectorMultiplyAddFloatingPoint
                             (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar9);
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar1 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x100,param_2
                            );
          *(undefined4 *)(iVar2 + 0x100U & 0xfffffffc) = uVar1;
          auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
          auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar8 = vectorMultiplyAddFloatingPoint
                             (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar10);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar1 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2)
          ;
          *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
          param_1->state = '\x04';
          puVar4 = (undefined *)sound::PlayMobySound(5,0,param_1);
          return puVar4;
        }
        if (*(byte *)(iVar2 + 0xff) != 1) {
          return (undefined *)(uint)*(byte *)(iVar2 + 0xff);
        }
        if (*(undefined **)(iVar2 + 0xf8) != (undefined *)0x0) {
          return *(undefined **)(iVar2 + 0xf8);
        }
        M388_0035ebb8(param_1,param_2);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,param_2);
        *(undefined4 *)(iVar2 + 0x124U & 0xfffffffc) = uVar1;
        return &DAT_0035f648;
      }
      iVar5 = *(int *)(iVar2 + 0x11c);
      if (iVar5 != -1) {
        if (((iVar5 != -1) && (sound::g_SoundChannels[iVar5].pMoby == param_1)) &&
           (sound::g_SoundChannels[iVar5].state != '\0')) {
          sound::sound_Kill(iVar5);
        }
        *(undefined4 *)(iVar2 + 0x11c) = 0xffffffff;
      }
      mobyfunc::GetBonePosition(param_1,0x13,&local_20);
      puVar4 = *(undefined **)(iVar2 + 0xf8);
      fVar3 = SQRT((local_18 - g_heroPosition.z) * (local_18 - g_heroPosition.z) +
                   (local_20 - g_heroPosition.x) * (local_20 - g_heroPosition.x) +
                   (local_1c - g_heroPosition.y) * (local_1c - g_heroPosition.y));
      if (((*(int *)(iVar2 + 0x100) == 0) && (fVar3 < 100.0)) && (60.0 < fVar3)) {
        if (puVar4 != (undefined *)0x0) {
          return puVar4;
        }
        if (*(undefined **)(iVar2 + 0x124) != (undefined *)0x0) {
          return *(undefined **)(iVar2 + 0x124);
        }
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(0x14,0x35f648);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x100,param_2);
        *(undefined4 *)(iVar2 + 0x100U & 0xfffffffc) = uVar1;
        *(float *)(iVar2 + 0x80) = local_20;
        *(float *)(iVar2 + 0x84) = local_1c;
        *(float *)(iVar2 + 0x88) = local_18;
        *(undefined4 *)(iVar2 + 0x8c) = local_14;
        *(undefined1 *)(iVar2 + 0xff) = 0;
        param_1->state = '\x05';
        return (undefined *)0x100;
      }
      if (param_1->setByGroup == '\x03') {
        param_1->state = '\x04';
        if (puVar4 != (undefined *)0x0) {
          return puVar4;
        }
        M388_0035ebb8(param_1,param_2);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,param_2);
        *(undefined4 *)(iVar2 + 0x124U & 0xfffffffc) = uVar1;
        return &DAT_0035f648;
      }
      if (puVar4 != (undefined *)0x0) {
        return puVar4;
      }
      iVar5 = fastfunc::FastDecTimerU8(param_2 + 0xfd);
      if ((iVar5 != 0) && (*(int *)(iVar2 + 0x124) == 0)) {
        bVar7 = *(byte *)(iVar2 + 0xfe) ^ 1;
        *(byte *)(iVar2 + 0xfe) = bVar7;
        if (bVar7 == 0) {
          uVar6 = mobyutil::MB_randRange(4,6);
          *(undefined1 *)(iVar2 + 0xfd) = uVar6;
          param_1->state = '\x04';
        }
        else {
          uVar6 = mobyutil::MB_randRange(0x14,0x32);
          *(undefined1 *)(iVar2 + 0xfd) = uVar6;
          param_1->state = '\x03';
        }
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        return (undefined *)0xf8;
      }
      if (*(byte *)(iVar2 + 0xfe) == 0) {
        M388_0035ebb8(param_1,param_2);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,param_2);
        *(undefined4 *)(iVar2 + 0x124U & 0xfffffffc) = uVar1;
        return &DAT_0035f648;
      }
      M388_0035ed70(param_1,param_2);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = loadVectorLeftIndexed(0x1c,0x35f648);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
      *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
      auVar8 = loadVectorLeftIndexed(0x20,0x35f648);
      auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,param_2);
      *(undefined4 *)(iVar2 + 0x124U & 0xfffffffc) = uVar1;
      return &DAT_0035f648;
    }
    if (7 < bVar7) {
      return (undefined *)(uint)bVar7;
    }
  }
  puVar4 = (undefined *)fastfunc::FastDecTimerS32(param_2 + 0xf8);
  if (puVar4 != (undefined *)0x0) {
    if (param_1->setByGroup == '\x02') {
      iVar5 = fastfunc::FastDecTimerU8(param_2 + 0xfd);
      if (iVar5 == 0) {
        if (*(char *)(iVar2 + 0xfe) == '\0') {
          M388_0035ebb8(param_1,param_2);
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
          auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          puVar4 = (undefined *)0xf8;
          auVar8 = vectorMultiplyAddFloatingPoint
                             (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar9);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar1 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2)
          ;
          *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        }
        else {
          M388_0035ed70(param_1,param_2);
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          auVar8 = loadVectorLeftIndexed(0x1c,0x35f648);
          puVar4 = (undefined *)0xf8;
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = vectorMultiplyAddFloatingPoint
                             (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar9);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar1 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2)
          ;
          *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        }
      }
      else {
        bVar7 = *(byte *)(iVar2 + 0xfe) ^ 1;
        *(byte *)(iVar2 + 0xfe) = bVar7;
        if (bVar7 == 0) {
          uVar6 = mobyutil::MB_randRange(4,6);
          *(undefined1 *)(iVar2 + 0xfd) = uVar6;
          param_1->state = '\x04';
        }
        else {
          uVar6 = mobyutil::MB_randRange(0x14,0x32);
          *(undefined1 *)(iVar2 + 0xfd) = uVar6;
          param_1->state = '\x03';
        }
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        puVar4 = (undefined *)0xf8;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
      }
    }
    else {
      param_1->state = '\x03';
      M388_0035ed70(param_1,param_2);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = loadVectorLeftIndexed(0x1c,0x35f648);
      puVar4 = (undefined *)0xf8;
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
      *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
    }
  }
  return puVar4;
}



//==== 0035ffd8  ns=mobyupdate_unsorted  size=0x21d4
// sig: undefined UpdateMoby_388(MobyInstance * moby)
// callers(0): 
// callees(53): 0003fbd4 camera::camera19::Cam19_Disable; 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010de78 mobyutil::MB_WrapRot; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0011c830 music::music_PlayPreseekedSpeech; 001367d0 path::PathFindClosestPnt; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00354160 mobyupd::update352::Spawn_Moby352; 0035b790 mobyupdate_helpers::M388_0035b790; 0035b9b0 mobyupdate_helpers::M388_0035b9b0; 0035bcf0 mobyupdate_helpers::M388_0035bcf0; 0035bfb0 mobyupdate_helpers::M388_0035bfb0; 0035c3c8 mobyupdate_helpers::M388_0035c3c8; 0035c4f8 mobyupdate_helpers::M388_0035c4f8; 0035ceb0 mobyupdate_helpers::M388_0035ceb0; 0035d190 mobyupdate_helpers::M388_0035d190; 0035d950 mobyupdate_helpers::M388_0035d950; 0035f670 mobyupdate_helpers::M388_0035f670; 003621c8 mobyupdate_helpers::M388_003621c8; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0065660c: 'M388_bossStartTime: %d (%d -> %d)\n' | 00656634: '40 min adj\n' | 00656644: '25s min adj\n' | 00656654: 'tractor off screen, abort\n' | 00656674: 'tractor too long, abort\n'

/* Moby 388 */

void mobyupdate_unsorted::UpdateMoby_388(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  void *pvVar3;
  u16 *puVar4;
  MobyInstance *pMVar5;
  f32 fVar6;
  Spline *pSVar7;
  float fVar8;
  MobyInstance *pMVar9;
  longlong lVar10;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  short sVar16;
  longlong lVar11;
  undefined2 uVar17;
  int iVar18;
  int iVar19;
  short sVar21;
  uint uVar20;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  Vec4 VStack_b0;
  longlong local_a0;
  
  lVar10 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  uVar24 = ZEXT48(pvVar3);
  dVar32 = 16.0;
  uVar12 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0x20) * 16.0));
  local_a0 = (longlong)(int)*(short *)((int)pvVar3 + 0x24);
  *(uint *)((int)pvVar3 + 0x108) = uVar12 & 0xfff0;
  dVar27 = 0.5;
  iVar13 = fastfunc::FastDoubleToInt
                     ((double)(float)((double)(float)((double)local_a0 - 0.5) * dVar32));
  uVar20 = (int)*(uint *)((int)pvVar3 + 0x20) >> 0x1f;
  if (iVar13 <= (int)(uVar12 & 0xfff0)) {
    *(uint *)((int)pvVar3 + 0x108) = *(uint *)((int)pvVar3 + 0x108) | 0xf;
  }
  iVar13 = 0;
  if (0x3f000000 < (int)((uVar20 >> 1 ^ *(uint *)((int)pvVar3 + 0x20)) - uVar20)) {
    iVar14 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar3 + 0x20));
    iVar18 = (int)*(short *)((int)pvVar3 + 0x24);
    iVar13 = iVar18 >> 0x1f;
    iVar19 = (int)*(short *)((int)pvVar3 + 0x24);
    iVar13 = ((iVar14 - (iVar14 / ((iVar18 / 6 + iVar13) - (iVar18 / 6 + iVar13 >> 0x1f))) *
                        ((iVar18 / 6 + iVar13) - (iVar18 / 6 + iVar13 >> 0x1f))) * 0x10) /
             ((iVar19 / 6 + (iVar19 >> 0x1f)) - (iVar19 / 6 + (iVar19 >> 0x1f) >> 0x1f));
    iVar13 = *(int *)((int)pvVar3 + 0x108) + (iVar13 + (iVar13 >> 0x1f & -iVar13) & 0xfU);
  }
  *(int *)((int)pvVar3 + 0x108) = iVar13;
  iVar14 = DAT_0096b2d0;
  iVar13 = DAT_008409e4;
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 == 0) {
      if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      uVar23 = 0;
      moby->scale = moby->pClass->gScale * 4.0;
      do {
        iVar13 = (int)((uVar23 & 0xffffffff) << 2);
        uVar15 = mobyupdate_helpers::M388_003621c8
                           (lVar10,uVar23,*(undefined4 *)(&DAT_0084096c + iVar13));
        iVar14 = (int)uVar23 + 1;
        uVar23 = (ulonglong)iVar14;
        *(undefined4 *)((int)pvVar3 + iVar13 + 0xc4) = uVar15;
      } while (iVar14 < 10);
      *(MobyInstance **)((int)pvVar3 + 0xec) = moby;
      iVar13 = 0;
      uVar23 = uVar24;
      do {
        pSVar7 = Splines[*(int *)((int)uVar23 + 0xb0)];
        dVar32 = (double)FUN_005e8548(pSVar7->points,pSVar7->points + pSVar7->cnt + -1);
        if (dVar32 < dVar27) {
          pSVar7->cnt = pSVar7->cnt + -1;
        }
        iVar13 = iVar13 + 1;
        uVar23 = uVar23 + 4;
      } while (iVar13 < 5);
      *(float *)((int)pvVar3 + 0xac) = mobyutil::g_FrameTime * 42.0 * 0.1;
      dVar32 = (double)mathfunc::cosf((moby->rotation).z);
      *(float *)((int)pvVar3 + 0x70) = (float)(dVar32 * (double)*(float *)((int)pvVar3 + 0xac));
      dVar32 = (double)FUN_005e8128((double)(moby->rotation).z);
      *(undefined4 *)((int)pvVar3 + 0x78) = 0;
      pSVar7 = Splines[*(int *)((int)pvVar3 + 0xb0)];
      *(float *)((int)pvVar3 + 0x74) = (float)(dVar32 * (double)*(float *)((int)pvVar3 + 0xac));
      FUN_005e7e98(lVar10 + 0x10,ZEXT48(pSVar7) + 0x10);
      *(undefined2 *)((int)pvVar3 + 0x9e) = 0;
      auVar35 = ZEXT416(0xfffffff0);
      *(undefined2 *)((int)pvVar3 + 0x9c) = 1;
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      *(undefined1 *)((int)pvVar3 + 0xfe) = 0;
      *(undefined1 *)((int)pvVar3 + 0xfc) = 0;
      *(undefined1 *)((int)pvVar3 + 0x10c) = 1;
      moby->state = '\x01';
      auVar34 = loadVectorLeftIndexed(0x24,uVar24);
      auVar36 = loadVectorRightIndexed(0x34,uVar24);
      *(undefined4 *)((int)pvVar3 + 0x110) = 0;
      *(undefined1 *)((int)pvVar3 + 0x10e) = 8;
      *(undefined4 *)((int)pvVar3 + 0x114) = 0xffffffff;
      auVar35 = vectorShiftRightAlgebraicWord
                          (auVar34 | auVar36,
                           auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
      *(undefined4 *)((int)pvVar3 + 0x118) = 0xffffffff;
      *(undefined4 *)((int)pvVar3 + 0x11c) = 0xffffffff;
      *(undefined4 *)((int)pvVar3 + 0x120) = 0xffffffff;
      auVar35 = vectorConvertFromSignedFixedPointWord(auVar35,0);
      *(undefined2 *)((int)pvVar3 + 0x138) = 0;
      *(undefined1 *)((int)pvVar3 + 0x148) = 0;
      *(undefined4 *)((int)pvVar3 + 0x13c) = 0;
      iVar13 = *(int *)((int)pvVar3 + 0x104);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x20,uVar24)
      ;
      *(undefined4 *)((int)pvVar3 + 0x20U & 0xfffffffc) = uVar15;
      if (iVar13 != -1) {
        hud::Hud_SetEntryValueById(iVar13,0);
        *(undefined4 *)((int)pvVar3 + 0x104) = 0xffffffff;
      }
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    else if (bVar1 < 2) {
      if ((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        puVar4 = moby->pClass->collision;
        moby->drawDistance = 0x3ff;
        moby->collision = puVar4;
        iVar14 = *(int *)(iVar14 + 0x78);
        if (iVar13 == -1) {
          DAT_008409e4 = update::g_GameFrameCount;
          libc::printf("M388_bossStartTime: %d (%d -> %d)\n",update::g_GameFrameCount,
                       update::g_GameFrameCount / 0x3c,update::g_GameFrameCount / 0x168);
          iVar13 = DAT_008409e4;
        }
        uVar20 = (uint)(update::g_GameFrameCount - iVar13) / 0x168;
        if (uVar20 < 0x29) {
          if (0x19 < uVar20) {
            libc::printf("25s min adj\n");
            *(undefined2 *)((int)pvVar3 + 0x24) = 0x78;
            auVar35 = loadVectorLeftIndexed(0x18,0x35ff4c);
            auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x20,
                                uVar24);
            *(undefined4 *)((int)pvVar3 + 0x20U & 0xfffffffc) = uVar15;
            *(undefined4 *)(iVar14 + 0x138) = 0x234;
          }
        }
        else {
          libc::printf("40 min adj\n");
          *(undefined2 *)((int)pvVar3 + 0x24) = 0x66;
          auVar35 = loadVectorLeftIndexed(0x14,0x35ff4c);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x20,
                              uVar24);
          *(undefined4 *)((int)pvVar3 + 0x20U & 0xfffffffc) = uVar15;
          *(undefined4 *)(iVar14 + 0x138) = 0x221;
        }
        moby->state = '\x02';
      }
    }
    else if (bVar1 < 3) {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      iVar13 = hud::RegisterHUDCallback
                         (0x11,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                          &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                          (int *)((int)pvVar3 + 0x108),
                          (int)((longlong)*(short *)((int)pvVar3 + 0x24) << 4) + 0xf);
      *(int *)((int)pvVar3 + 0x104) = iVar13;
      *(float *)((int)pvVar3 + 0xac) =
           (mobyutil::g_FrameTime * 42.0 - *(float *)((int)pvVar3 + 0xac)) * 0.1 +
           *(float *)((int)pvVar3 + 0xac);
      iVar13 = mobyupdate_helpers::M388_0035c4f8(lVar10,uVar24,0,1);
      if (iVar13 != 0) {
        moby->setByGroup = '\x01';
        iVar13 = *(int *)(DAT_0096b2d0 + 0x78);
        *(undefined4 *)(iVar13 + 0x88) = 0;
        *(undefined4 *)(iVar13 + 0xec) = 0;
        *(undefined4 *)(iVar13 + 0x8c) = 0;
        *(undefined4 *)(iVar13 + 0x118) = 0;
        *(char *)((int)pvVar3 + 0x13b) =
             (char)*(undefined4 *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4);
        uVar15 = idol::GetAnimDuration(0x14);
        *(undefined4 *)((int)pvVar3 + 0xf8) = uVar15;
        moby->state = '\x03';
        iVar13 = path::PathFindClosestPnt
                           (0.0,(Vec4 *)&moby->pos,
                            Splines[*(int *)((int)pvVar3 +
                                            (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]);
        *(short *)((int)pvVar3 + 0x9c) = (short)iVar13;
        sVar16 = mobyutil::MB_randRange(3,7);
        bVar1 = *(byte *)((int)pvVar3 + 0x13b);
        sVar16 = *(short *)((int)pvVar3 + 0x9c) + sVar16;
        iVar13 = *(int *)((int)pvVar3 + (uint)bVar1 * 4 + 0xb0);
        *(short *)((int)pvVar3 + 0x9c) = sVar16;
        sVar16 = sVar16 - (short)((int)sVar16 / Splines[iVar13]->cnt) *
                          (short)Splines[*(int *)((int)pvVar3 + (uint)bVar1 * 4 + 0xb0)]->cnt;
        sVar21 = sVar16 + -1;
        *(short *)((int)pvVar3 + 0x9c) = sVar16;
        *(short *)((int)pvVar3 + 0x9e) = sVar21;
        if (sVar21 < 0) {
          *(short *)((int)pvVar3 + 0x9e) =
               (short)Splines[*(int *)((int)pvVar3 + (uint)bVar1 * 4 + 0xb0)]->cnt + -1;
        }
      }
    }
    else {
      iVar13 = hud::RegisterHUDCallback
                         (0x11,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                          &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                          (int *)((int)pvVar3 + 0x108),
                          (int)((longlong)*(short *)((int)pvVar3 + 0x24) << 4) + 0xf);
      *(int *)((int)pvVar3 + 0x104) = iVar13;
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      mobyupdate_helpers::M388_0035f670(lVar10,uVar24);
      uVar23 = mobyupdate_helpers::M388_0035ceb0
                         (lVar10,uVar24,*(undefined1 *)((int)pvVar3 + 0x13b),1);
      if (((uVar23 & 2) != 0) &&
         ((uint)*(byte *)((int)pvVar3 + 0x13b) !=
          *(uint *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4))) {
        *(char *)((int)pvVar3 + 0x13b) =
             (char)*(undefined4 *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4);
        iVar13 = path::PathFindClosestPnt
                           (0.0,(Vec4 *)&moby->pos,
                            Splines[*(int *)((int)pvVar3 +
                                            *(int *)(&DAT_008408e0 +
                                                    (uint)(byte)moby->setByGroup * 4) * 4 + 0xb0)]);
        *(short *)((int)pvVar3 + 0x9c) = (short)iVar13;
        sVar16 = mobyutil::MB_randRange(3,7);
        sVar16 = *(short *)((int)pvVar3 + 0x9c) + sVar16;
        *(short *)((int)pvVar3 + 0x9c) = sVar16;
        sVar16 = sVar16 - (short)((int)sVar16 /
                                 Splines[*(int *)((int)pvVar3 +
                                                 *(int *)(&DAT_008408e0 +
                                                         (uint)(byte)moby->setByGroup * 4) * 4 +
                                                 0xb0)]->cnt) *
                          (short)Splines[*(int *)((int)pvVar3 +
                                                 *(int *)(&DAT_008408e0 +
                                                         (uint)(byte)moby->setByGroup * 4) * 4 +
                                                 0xb0)]->cnt;
        sVar21 = sVar16 + -1;
        *(short *)((int)pvVar3 + 0x9c) = sVar16;
        *(short *)((int)pvVar3 + 0x9e) = sVar21;
        if (sVar21 < 0) {
          *(short *)((int)pvVar3 + 0x9e) =
               (short)Splines[*(int *)((int)pvVar3 +
                                      *(int *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4) * 4
                                      + 0xb0)]->cnt + -1;
        }
      }
      if (moby->setByGroup == '\x04') {
        mobyutil::MB_ColorDyingMoby(lVar10,uVar24 + 0x60);
      }
      else {
        mobyupdate_helpers::M388_0035d950(lVar10,uVar24);
      }
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 < 6) {
      iVar13 = hud::RegisterHUDCallback
                         (0x11,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                          &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                          (int *)((int)pvVar3 + 0x108),
                          (int)((longlong)*(short *)((int)pvVar3 + 0x24) << 4) + 0xf);
      *(int *)((int)pvVar3 + 0x104) = iVar13;
      mobyupdate_helpers::M388_0035f670(lVar10,uVar24);
      mobyfunc::GetBonePosition(lVar10,0x13,auStack_120);
      lVar11 = uVar24 + 0x80;
      dVar32 = (double)FUN_005e8548(lVar11,&g_heroPosition);
      iVar13 = *(int *)((int)pvVar3 + 0x11c);
      if (((iVar13 == -1) || (sound::g_SoundChannels[iVar13].pMoby != moby)) ||
         (sound::g_SoundChannels[iVar13].state == '\0')) {
        *(undefined4 *)((int)pvVar3 + 0x11c) = 0xffffffff;
        iVar13 = sound::PlayMobySound(4,4,moby);
        *(int *)((int)pvVar3 + 0x11c) = iVar13;
      }
      if (*(char *)((int)pvVar3 + 0xff) == '\0') {
        if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
          *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
        }
        fVar37 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar3 + 0xac) =
             (mobyutil::g_FrameTime * 30.0 - *(float *)((int)pvVar3 + 0xac)) * 0.1 +
             *(float *)((int)pvVar3 + 0xac);
        dVar29 = 40.0;
        if (dVar32 <= (double)(fVar37 * 40.0)) {
          FUN_005e7e98(auStack_130,&g_heroPosition);
          uVar15 = idol::GetAnimDuration(0x78);
          *(undefined4 *)((int)pvVar3 + 0xf8) = uVar15;
          if (((*(ushort *)((int)pvVar3 + 0x138) & 4) == 0) &&
             (iVar13 = mobyupdate_helpers::M388_0035b790(lVar10,uVar24,0x17,4), iVar13 != 0)) {
            *(ushort *)((int)pvVar3 + 0x138) = *(ushort *)((int)pvVar3 + 0x138) | 4;
          }
          *(undefined1 *)((int)pvVar3 + 0xff) = 1;
        }
        else {
          FUN_005e81f0(auStack_130,&g_heroPosition,lVar11);
          FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar29),auStack_130,
                       auStack_130);
          FUN_005e7f54(lVar11,lVar11,auStack_130);
        }
        uVar23 = mobyupdate_helpers::M388_0035c4f8
                           (lVar10,uVar24,*(undefined1 *)((int)pvVar3 + 0x13b),1);
        if (((uVar23 & 2) != 0) &&
           ((uint)*(byte *)((int)pvVar3 + 0x13b) !=
            *(uint *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4))) {
          *(char *)((int)pvVar3 + 0x13b) =
               (char)*(undefined4 *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4);
          iVar13 = path::PathFindClosestPnt
                             (0.0,(Vec4 *)&moby->pos,
                              Splines[*(int *)((int)pvVar3 +
                                              *(int *)(&DAT_008408e0 +
                                                      (uint)(byte)moby->setByGroup * 4) * 4 + 0xb0)]
                             );
          *(short *)((int)pvVar3 + 0x9c) = (short)iVar13;
          sVar16 = mobyutil::MB_randRange(3,7);
          sVar16 = *(short *)((int)pvVar3 + 0x9c) + sVar16;
          *(short *)((int)pvVar3 + 0x9c) = sVar16;
          sVar16 = sVar16 - (short)((int)sVar16 /
                                   Splines[*(int *)((int)pvVar3 +
                                                   *(int *)(&DAT_008408e0 +
                                                           (uint)(byte)moby->setByGroup * 4) * 4 +
                                                   0xb0)]->cnt) *
                            (short)Splines[*(int *)((int)pvVar3 +
                                                   *(int *)(&DAT_008408e0 +
                                                           (uint)(byte)moby->setByGroup * 4) * 4 +
                                                   0xb0)]->cnt;
          sVar21 = sVar16 + -1;
          *(short *)((int)pvVar3 + 0x9c) = sVar16;
          *(short *)((int)pvVar3 + 0x9e) = sVar21;
          if (sVar21 < 0) {
            *(short *)((int)pvVar3 + 0x9e) =
                 (short)Splines[*(int *)((int)pvVar3 +
                                        *(int *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4) *
                                        4 + 0xb0)]->cnt + -1;
          }
        }
        FUN_005e81f0(auStack_110,lVar11,auStack_120);
        FUN_005e7f98(0x4020000000000000,auStack_110,auStack_110);
        FUN_005e7f54(auStack_110,auStack_110,auStack_120);
        iVar13 = collproc::CollLine(auStack_110,lVar11,0,lVar10,0);
        if ((iVar13 != 0) &&
           ((CollOutput.pMoby == (MobyInstance *)0x0 ||
            ((CollOutput.pMoby)->oClass == ASTEROID_00D4)))) {
          *(undefined4 *)((int)pvVar3 + 0x100) = 0;
        }
        FUN_005e7e98(auStack_100,lVar11);
        dVar32 = 100.0;
        iVar13 = fastfunc::FastCheckBsphereInView(0x4059000000000000,auStack_100);
        if ((iVar13 < 1) && (moby->enabled == '\0')) {
          libc::printf("tractor off screen, abort\n");
          *(undefined4 *)((int)pvVar3 + 0x100) = 0;
        }
        dVar29 = (double)FUN_005e8548(auStack_110,&g_heroPosition);
        if (dVar32 < dVar29) {
          libc::printf("tractor too long, abort\n");
          *(undefined4 *)((int)pvVar3 + 0x100) = 0;
        }
      }
      else {
        uVar25 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        lVar22 = lVar10 + 0x10;
        uVar26 = FUN_005e8588(lVar22,&g_heroPosition);
        dVar32 = (double)FUN_005e8338(uVar26,(double)(g_heroPosition.z - (moby->pos).z));
        mobyupdate_helpers::M388_0035c3c8(uVar25,-dVar32,lVar10,uVar24);
        if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
          *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 1;
        }
        *(float *)((int)pvVar3 + 0xac) = *(float *)((int)pvVar3 + 0xac) * 0.8;
        FUN_005e8548(lVar22,&g_heroPosition);
        mobyfunc::GetBonePosition(lVar10,0x13,auStack_e0);
        FUN_005e81f0(auStack_f0,lVar11,auStack_e0);
        dVar29 = 30.0;
        FUN_005e7f98(0x403e000000000000,auStack_f0,auStack_f0);
        FUN_005e7f54(auStack_f0,auStack_f0,auStack_e0);
        FUN_005e81f0(auStack_130,auStack_f0,lVar11);
        dVar32 = (double)FUN_005e8548(auStack_f0,&g_heroPosition);
        if (dVar32 != dVar29) {
          if ((double)(mobyutil::g_FrameTime * 15.0) - dVar32 < 0.0) {
            dVar32 = (double)(mobyutil::g_FrameTime * 15.0);
          }
          FUN_005e7f98(dVar32,auStack_130,auStack_130);
          FUN_005e7f54(lVar11,lVar11,auStack_130);
        }
        if (DAT_0096b2d0 != 0) {
          FUN_005e7e98(DAT_0096b2d0 + 0x10,lVar11);
          iVar13 = *(int *)(DAT_0096b2d0 + 0x78);
          uVar25 = FUN_005e8338((double)((moby->pos).x - *(float *)(DAT_0096b2d0 + 0x10)),
                                (double)((moby->pos).y - *(float *)(DAT_0096b2d0 + 0x14)));
          dVar32 = (double)fastfunc::FastDiffRots(uVar25,(double)*(float *)(iVar13 + 0x38));
          dVar31 = ABS(dVar32);
          uVar25 = FUN_005e8588(DAT_0096b2d0 + 0x10,lVar22);
          dVar29 = (double)FUN_005e8338(uVar25,(double)((moby->pos).z -
                                                       *(float *)(DAT_0096b2d0 + 0x18)));
          dVar29 = (double)fastfunc::FastDiffRots(-dVar29,(double)*(float *)(iVar13 + 0x34));
          dVar33 = 0.3839724361896515;
          dVar30 = 5.729578018188477;
          dVar28 = ABS(dVar29);
          if (0.3839724361896515 < dVar31) {
            fVar37 = mobyutil::MB_WrapRot
                               ((float)((double)((float)(dVar31 - 0.3839724361896515) * 5.729578) *
                                       dVar32));
            dVar32 = (double)fastfunc::FastWrapRot(*(float *)(iVar13 + 0x38),fVar37);
            *(float *)(iVar13 + 0x38) = (float)dVar32;
          }
          if (dVar33 < dVar28) {
            fVar37 = mobyutil::MB_WrapRot
                               ((float)((double)(float)((double)(float)(dVar28 - dVar33) * dVar30) *
                                       dVar29));
            dVar32 = (double)fastfunc::FastWrapRot(*(float *)(iVar13 + 0x34),fVar37);
            *(float *)(iVar13 + 0x34) = (float)dVar32;
          }
        }
      }
      if (moby->setByGroup == '\x04') {
        mobyutil::MB_ColorDyingMoby(lVar10,uVar24 + 0x60);
      }
      else {
        mobyupdate_helpers::M388_0035d950(lVar10,uVar24);
      }
      dVar29 = (double)(moby->rotation).z;
      dVar32 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar32 = (double)fastfunc::FastSubRots((float)dVar29,(float)dVar32);
      if (dVar32 < 1.0471975803375244) {
        RegisterFuncForMoby(&PTR_M388_0035f100_0070c738,moby);
      }
    }
    else if (bVar1 < 7) {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      mobyupdate_helpers::M388_0035c4f8(lVar10,uVar24,*(undefined1 *)((int)pvVar3 + 0x13b),1);
      if ((((music::g_SpeechPlaying.handle == 0) && (music::g_PendingSpeech == -1)) &&
          (*(short *)((int)pvVar3 + 0x138) < 1)) &&
         (iVar13 = mobyupdate_helpers::M388_0035b790(lVar10,uVar24,DAT_010c511c + 0x1d,1),
         iVar13 != 0)) {
        uVar20 = DAT_010c511c + 1;
        *(short *)((int)pvVar3 + 0x138) = *(short *)((int)pvVar3 + 0x138) + 1;
        DAT_010c511c = uVar20 + (((int)uVar20 >> 2) + (uint)((int)uVar20 < 0 && (uVar20 & 3) != 0))
                                * -4;
      }
    }
    else {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      if (*(int *)((int)pvVar3 + 0xf8) == 1) {
        mobyupdate_helpers::M388_0035d190(lVar10,uVar24,8);
        sound::PlayMobySound(7,0,moby);
      }
      fastfunc::FastDecTimerS32(uVar24 + 0xf8);
      iVar13 = mobyupdate_helpers::M388_0035c4f8
                         (lVar10,uVar24,*(undefined1 *)((int)pvVar3 + 0x13b),0);
      if ((iVar13 != 0) ||
         (Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt + -1
          <= (int)*(short *)((int)pvVar3 + 0x9c))) {
        uVar15 = idol::GetAnimDuration(0xb4);
        *(undefined4 *)((int)pvVar3 + 0xf8) = uVar15;
        moby->state = '\b';
      }
      dVar32 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 4.1887903);
      (moby->rotation).x = (float)dVar32;
      lVar22 = (longlong)*(short *)((int)pvVar3 + 0x9c) + 3;
      pSVar7 = Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)];
      iVar13 = pSVar7->cnt + -1;
      lVar11 = lVar22;
      if (iVar13 <= (int)lVar22) {
        lVar11 = (ulonglong)
                 (uint)Splines[*(int *)((int)pvVar3 +
                                       (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt - 1;
      }
      iVar14 = (int)((longlong)*(short *)((int)pvVar3 + 0x9c) << 4);
      uVar25 = FUN_005e8338((double)(*(float *)((int)&Splines[*(int *)((int)pvVar3 +
                                                                      (uint)*(byte *)((int)pvVar3 +
                                                                                     0x13b) * 4 +
                                                                      0xb0)]->points[0].x +
                                               (int)(lVar11 << 4)) -
                                    *(float *)((int)&pSVar7->points[0].x + iVar14)),
                            (double)(pSVar7->points
                                     [((uint)(lVar22 - iVar13 >> 0x3f) & (int)lVar22 - iVar13) +
                                      pSVar7->cnt + -1].y -
                                    *(float *)((int)&pSVar7->points[0].y + iVar14)));
      iVar13 = *(short *)((int)pvVar3 + 0x9c) + 3;
      if (Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt + -1
          <= iVar13) {
        iVar13 = Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->
                 cnt + -1;
      }
      uVar26 = FUN_005e8588(Splines[*(int *)((int)pvVar3 +
                                            (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->
                            points + *(short *)((int)pvVar3 + 0x9c),
                            Splines[*(int *)((int)pvVar3 +
                                            (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->
                            points + iVar13);
      lVar11 = (longlong)*(short *)((int)pvVar3 + 0x9c) + 3;
      if (Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt + -1
          <= (int)lVar11) {
        lVar11 = (ulonglong)
                 (uint)Splines[*(int *)((int)pvVar3 +
                                       (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt - 1;
      }
      dVar32 = (double)FUN_005e8338(uVar26,(double)(*(float *)((int)&Splines[*(int *)((int)pvVar3 +
                                                                                     (uint)*(byte *)
                                                  ((int)pvVar3 + 0x13b) * 4 + 0xb0)]->points[0].z +
                                                  (int)(lVar11 << 4)) -
                                                  *(float *)((int)&Splines[*(int *)((int)pvVar3 +
                                                                                   (uint)*(byte *)((
                                                  int)pvVar3 + 0x13b) * 4 + 0xb0)]->points[0].z +
                                                  (int)((longlong)*(short *)((int)pvVar3 + 0x9c) <<
                                                       4))));
      dVar32 = -dVar32;
      dVar30 = 3.1415927410125732;
      dVar29 = 6.2831854820251465;
      mobyutil::OrganicDeltAngSpeed
                (uVar25,(double)(DAT_0071f418 * 3.1415927),(double)(DAT_0071f418 * 6.2831855),
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar10);
      dVar32 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,dVar32,
                                  (double)(float)((double)DAT_0071f418 * dVar30),
                                  (double)(float)((double)DAT_0071f418 * dVar29),
                                  (double)(float)((double)mobyutil::g_FrameTime * dVar29));
      (moby->rotation).y = (float)dVar32;
      moby->scale = moby->scale * 0.99925;
      *(float *)((int)pvVar3 + 0xac) = *(float *)((int)pvVar3 + 0xac) * 0.9992;
      iVar13 = mobyutil::MB_randInt(0x11);
      if (iVar13 == 0) {
        dVar33 = (double)(moby->scale / (moby->pClass->gScale * 3.0));
        dVar32 = (double)mobyutil::MB_randRangeFloat(-5.0,5.0);
        FUN_005e7f98((double)(float)(dVar32 * dVar33),auStack_c0,lVar10 + 0xc0);
        FUN_005e7f54(auStack_d0,lVar10 + 0x10,auStack_c0);
        dVar30 = -4.0;
        dVar29 = 4.0;
        dVar32 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
        FUN_005e7f98((double)(float)(dVar32 * dVar33),auStack_c0,lVar10 + 0xd0);
        FUN_005e7f54(auStack_d0,auStack_d0,auStack_c0);
        dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar29);
        FUN_005e7f98((double)(float)(dVar32 * dVar33),auStack_c0,lVar10 + 0xe0);
        FUN_005e7f54(auStack_d0,auStack_d0,auStack_c0);
        mobyutil::MB_SpawnExplosionSparks
                  ((double)(float)(dVar33 * 1.600000023841858),0x402a000000000000,lVar10,auStack_d0)
        ;
      }
      mobyupdate_helpers::M388_0035bcf0(lVar10,uVar24);
      if ((music::g_SpeechPlaying.handle == 0) && (music::g_PendingSpeech == -1)) {
        iVar13 = *(int *)((int)pvVar3 + 0xf8);
        iVar14 = idol::GetAnimDuration(0x1a4);
        if ((iVar13 < iVar14) && ((*(uint *)((int)pvVar3 + 0x13c) & 0x80000000) != 0)) {
          iVar13 = mobyupdate_helpers::M388_0035b790(lVar10,uVar24,0x23,1);
          if (iVar13 != 0) {
            *(uint *)((int)pvVar3 + 0x13c) = *(uint *)((int)pvVar3 + 0x13c) & 0x7fffffff;
          }
        }
        else {
          iVar13 = *(int *)((int)pvVar3 + 0xf8);
          iVar14 = idol::GetAnimDuration(0xb4);
          if (((iVar13 < iVar14) && ((*(uint *)((int)pvVar3 + 0x13c) & 0x40000000) != 0)) &&
             (iVar13 = mobyupdate_helpers::M388_0035b790(lVar10,uVar24,0x24,1), iVar13 != 0)) {
            *(uint *)((int)pvVar3 + 0x13c) = *(uint *)((int)pvVar3 + 0x13c) & 0xbfffffff;
          }
        }
      }
    }
  }
  else if (bVar1 < 9) {
    if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
      *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
    }
    dVar32 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 4.1887903);
    (moby->rotation).x = (float)dVar32;
    fVar37 = moby->scale;
    (moby->rotation).z = GameCamera.rot.radius;
    (moby->rotation).y = GameCamera.rot.elevation;
    moby->scale = fVar37 * 0.98;
    iVar13 = *(int *)((int)pvVar3 + 0xf8);
    iVar14 = idol::GetAnimDuration(0x1e);
    if (iVar13 == iVar14) {
      mobyutil::MB_genericExplosion
                (0,0,0x4014000000000000,0x4008000000000000,0,0x3ff0000000000000,0,lVar10,
                 uVar24 + 0x70,0,0xffffffffffffffff,7,0x1e,8,0x20);
    }
    mobyupdate_helpers::M388_0035bcf0(lVar10,uVar24);
    iVar13 = fastfunc::FastDecTimerS32(uVar24 + 0xf8);
    pMVar5 = MobyInstance;
    if (iVar13 != 0) {
      iVar13 = *(int *)((int)pvVar3 + 0x134);
      pMVar9 = MobyInstance + iVar13;
      MobyInstance[iVar13].state = '\b';
      pMVar5[iVar13].modeBits = pMVar9->modeBits | NO_UPDATE;
      if (*(int *)((int)pvVar3 + 0x120) != -1) {
        lights::DeletePointLight(*(int *)((int)pvVar3 + 0x120));
      }
      camera::camera19::Cam19_Disable(*(int *)((int)pvVar3 + 300));
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 < 10) {
    if (*(MobyInstance **)((int)pvVar3 + 0xf0) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0xf0));
      *(undefined4 *)((int)pvVar3 + 0xf0) = 0;
    }
    if (*(MobyInstance **)((int)pvVar3 + 0x110) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x110));
      *(undefined4 *)((int)pvVar3 + 0x110) = 0;
    }
    iVar13 = 0;
    do {
      pMVar5 = *(MobyInstance **)((int)uVar24 + 0xc4);
      if (pMVar5 != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(pMVar5);
        *(undefined4 *)((int)uVar24 + 0xc4) = 0;
      }
      iVar13 = iVar13 + 1;
      uVar24 = uVar24 + 4;
    } while (iVar13 < 10);
    iVar13 = *(int *)((int)pvVar3 + 0x118);
    if (iVar13 != -1) {
      if (((iVar13 != -1) && (sound::g_SoundChannels[iVar13].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar13].state != '\0')) {
        sound::sound_Kill(iVar13);
      }
      *(undefined4 *)((int)pvVar3 + 0x118) = 0xffffffff;
    }
    iVar13 = *(int *)((int)pvVar3 + 0x114);
    if (iVar13 != -1) {
      if (((iVar13 != -1) && (sound::g_SoundChannels[iVar13].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar13].state != '\0')) {
        sound::sound_Kill(iVar13);
      }
      *(undefined4 *)((int)pvVar3 + 0x114) = 0xffffffff;
    }
    iVar13 = *(int *)((int)pvVar3 + 0x11c);
    if (iVar13 != -1) {
      if (((iVar13 != -1) && (sound::g_SoundChannels[iVar13].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar13].state != '\0')) {
        sound::sound_Kill(iVar13);
      }
      *(undefined4 *)((int)pvVar3 + 0x11c) = 0xffffffff;
    }
    if (*(int *)((int)pvVar3 + 0x120) != -1) {
      lights::DeletePointLight(*(int *)((int)pvVar3 + 0x120));
    }
    if (*(int *)((int)pvVar3 + 0x104) != -1) {
      hud::Hud_SetEntryValueById(*(int *)((int)pvVar3 + 0x104),0);
      *(undefined4 *)((int)pvVar3 + 0x104) = 0xffffffff;
    }
    FUN_005e7e98(lVar10 + 0x10,ZEXT48(Splines[*(int *)((int)pvVar3 + 0xb0)]) + 0x10);
    dVar27 = (double)FUN_005e8338((double)(Splines[*(int *)((int)pvVar3 + 0xb0)]->points[1].x -
                                          (moby->pos).x),
                                  (double)(Splines[*(int *)((int)pvVar3 + 0xb0)]->points[1].y -
                                          (moby->pos).y));
    (moby->rotation).z = (float)dVar27;
    *(undefined2 *)((int)pvVar3 + 0x9c) = 0;
    *(undefined2 *)((int)pvVar3 + 0x9e) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa0) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar3 + 0xac) = 0;
    *(undefined4 *)((int)pvVar3 + 0xf4) = 0;
    *(undefined4 *)((int)pvVar3 + 0xf8) = 0;
    *(undefined1 *)((int)pvVar3 + 0xfc) = 0;
    *(undefined1 *)((int)pvVar3 + 0xfd) = 0;
    *(undefined1 *)((int)pvVar3 + 0xfe) = 0;
    *(undefined1 *)((int)pvVar3 + 0xff) = 0;
    *(undefined4 *)((int)pvVar3 + 0x100) = 0;
    *(undefined1 *)((int)pvVar3 + 0x10c) = 1;
    *(undefined1 *)((int)pvVar3 + 0x10d) = 0;
    *(undefined1 *)((int)pvVar3 + 0x10e) = 0;
    *(undefined1 *)((int)pvVar3 + 0x10f) = 0;
    *(undefined4 *)((int)pvVar3 + 0x124) = 0;
    *(undefined2 *)((int)pvVar3 + 0x138) = 0;
    *(undefined1 *)((int)pvVar3 + 0x13a) = 0;
    *(undefined1 *)((int)pvVar3 + 0x13b) = 0;
    *(undefined4 *)((int)pvVar3 + 0x13c) = 0;
    *(undefined2 *)((int)pvVar3 + 0x144) = 0;
    *(undefined2 *)((int)pvVar3 + 0x146) = 0;
    *(undefined1 *)((int)pvVar3 + 0x148) = 0;
    moby->setByGroup = '\0';
    *(undefined1 *)((int)pvVar3 + 0x70) = 0;
    *(undefined1 *)((int)pvVar3 + 0x71) = 0;
    *(undefined1 *)((int)pvVar3 + 0x72) = 0;
    *(undefined1 *)((int)pvVar3 + 0x73) = 0;
    *(undefined1 *)((int)pvVar3 + 0x74) = 0;
    *(undefined1 *)((int)pvVar3 + 0x75) = 0;
    *(undefined1 *)((int)pvVar3 + 0x76) = 0;
    *(undefined1 *)((int)pvVar3 + 0x77) = 0;
    *(undefined1 *)((int)pvVar3 + 0x78) = 0;
    *(undefined1 *)((int)pvVar3 + 0x79) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7a) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7b) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7c) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7d) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7e) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7f) = 0;
    *(undefined1 *)((int)pvVar3 + 0x80) = 0;
    *(undefined1 *)((int)pvVar3 + 0x81) = 0;
    *(undefined1 *)((int)pvVar3 + 0x82) = 0;
    *(undefined1 *)((int)pvVar3 + 0x83) = 0;
    *(undefined1 *)((int)pvVar3 + 0x84) = 0;
    *(undefined1 *)((int)pvVar3 + 0x85) = 0;
    *(undefined1 *)((int)pvVar3 + 0x86) = 0;
    *(undefined1 *)((int)pvVar3 + 0x87) = 0;
    *(undefined1 *)((int)pvVar3 + 0x88) = 0;
    *(undefined1 *)((int)pvVar3 + 0x89) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8a) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8b) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8c) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8d) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8e) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8f) = 0;
    moby->state = '\0';
    return;
  }
  fVar6 = (moby->pos).x;
  uVar20 = (int)fVar6 >> 0x1f;
  fVar8 = 22.0;
  fVar37 = (moby->pos).x;
  if ((int)((uVar20 >> 1 ^ (uint)fVar6) - uVar20) < 0x41b00000) {
    (moby->pos).x = 22.0;
    fVar37 = fVar8;
  }
  if (1001.0 < fVar37) {
    (moby->pos).x = 1001.0;
  }
  fVar6 = (moby->pos).y;
  uVar20 = (int)fVar6 >> 0x1f;
  fVar37 = (moby->pos).y;
  if ((int)((uVar20 >> 1 ^ (uint)fVar6) - uVar20) < 0x41b00000) {
    (moby->pos).y = 22.0;
    fVar37 = fVar8;
  }
  if (1001.0 < fVar37) {
    (moby->pos).y = 1001.0;
  }
  fVar6 = (moby->pos).z;
  uVar20 = (int)fVar6 >> 0x1f;
  fVar37 = (moby->pos).z;
  if ((int)((uVar20 >> 1 ^ (uint)fVar6) - uVar20) < 0x41b00000) {
    (moby->pos).z = 22.0;
    fVar37 = fVar8;
  }
  if (1001.0 < fVar37) {
    (moby->pos).z = 1001.0;
  }
  if (moby->setByGroup == '\x04') {
    iVar13 = *(int *)((int)pvVar3 + 0x110);
    if (iVar13 == 0) {
      uVar15 = mobyupd::update352::Spawn_Moby352(lVar10);
      *(undefined4 *)((int)pvVar3 + 0x110) = uVar15;
    }
    else if (2 < *(byte *)(iVar13 + 0x20)) {
      *(undefined1 *)(iVar13 + 0x20) = 1;
    }
    iVar13 = *(int *)((int)pvVar3 + 0x118);
    if (((iVar13 == -1) || (sound::g_SoundChannels[iVar13].pMoby != moby)) ||
       (sound::g_SoundChannels[iVar13].state == '\0')) {
      *(undefined4 *)((int)pvVar3 + 0x118) = 0xffffffff;
      iVar13 = sound::PlayMobySound(6,4,moby);
      *(int *)((int)pvVar3 + 0x118) = iVar13;
    }
  }
  else {
    iVar13 = *(int *)((int)pvVar3 + 0x110);
    if (iVar13 != 0) {
      iVar14 = *(int *)((int)pvVar3 + 0x118);
      if (iVar14 != -1) {
        if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar14].state != '\0')) {
          sound::sound_Kill(iVar14);
          iVar13 = *(int *)((int)pvVar3 + 0x110);
        }
        *(undefined4 *)((int)pvVar3 + 0x118) = 0xffffffff;
      }
      if ((iVar13 != 0) && (*(short *)(iVar13 + 0xa6) == 0x160)) {
        bVar1 = *(byte *)(iVar13 + 0x20);
        if ((bVar1 != 0xfe) && (bVar1 != 0xfd)) {
          if (bVar1 < 3) {
            *(undefined1 *)(iVar13 + 0x20) = 3;
          }
          goto LAB_00361e30;
        }
      }
      *(undefined4 *)((int)pvVar3 + 0x110) = 0;
    }
  }
LAB_00361e30:
  if (1 < moby->state) {
    mobyupdate_helpers::M388_0035bfb0(lVar10,uVar24);
    if ((moby->state != '\b') ||
       (iVar13 = *(int *)((int)pvVar3 + 0xf8), iVar14 = idol::GetAnimDuration(0x78), iVar14 < iVar13
       )) {
      mobyupdate_helpers::M388_0035b9b0(lVar10,uVar24);
    }
    iVar13 = *(int *)((int)pvVar3 + 0x114);
    if (((iVar13 == -1) || (sound::g_SoundChannels[iVar13].pMoby != moby)) ||
       (sound::g_SoundChannels[iVar13].state == '\0')) {
      *(undefined4 *)((int)pvVar3 + 0x114) = 0xffffffff;
      iVar13 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 0x114) = iVar13;
    }
    FUN_005e7d64(&VStack_b0,&DAT_007350a0,lVar10 + 0xc0);
    FUN_005e7f98(0x401c000000000000,&VStack_b0,&VStack_b0);
    FUN_005e81f0(&VStack_b0,lVar10 + 0x10,&VStack_b0);
    VStack_b0.w = 50.0;
    if (*(int *)((int)pvVar3 + 0x120) == -1) {
      uVar15 = lights::CreatePointLight2
                         (50.0,0,0x4008000000000000,dVar27,0x3f847ae140000000,&VStack_b0);
      *(undefined4 *)((int)pvVar3 + 0x120) = uVar15;
    }
    else {
      FUN_005e7e98(&PointLights[*(int *)((int)pvVar3 + 0x120)].pos,&VStack_b0);
    }
  }
  *(undefined1 *)((int)pvVar3 + 0x10f) = 0;
  pMVar5 = MobyInstance + *(int *)((int)pvVar3 + 0x134);
  if ((moby->state != '\x06') &&
     (((pMVar5 == (MobyInstance *)0x0 || (pMVar5->oClass != FIGHTER_JET_0045)) ||
      ((uVar2 = pMVar5->state, uVar2 == 0xfd || uVar2 == 0xfe || (uVar2 == '\a')))))) {
    moby->state = '\x06';
    iVar13 = mobyupdate_helpers::M388_0035b790(lVar10,uVar24,DAT_010c511c + 0x1d,1);
    if (iVar13 == 0) {
      *(undefined2 *)((int)pvVar3 + 0x138) = 0;
    }
    else {
      *(undefined2 *)((int)pvVar3 + 0x138) = 1;
      uVar20 = DAT_010c511c + 1;
      DAT_010c511c = uVar20 + (((int)uVar20 >> 2) + (uint)((int)uVar20 < 0 && (uVar20 & 3) != 0)) *
                              -4;
    }
  }
  if (*(char *)((int)pvVar3 + 0x13a) == '\0') {
    if (((moby->state != '\x06') && (g_heroState == TURRET_PLANE_UI)) &&
       ((DAT_0096b2d0 != 0 &&
        (((*(short *)(DAT_0096b2d0 + 0xa6) == 0x45 &&
          (iVar13 = *(int *)(*(int *)(DAT_0096b2d0 + 0x78) + 0x120), 0 < iVar13 && iVar13 < 10000))
         && (iVar13 = mobyutil::MB_randInt(2), iVar13 == 0)))))) {
      mobyupdate_helpers::M388_0035b790(lVar10,uVar24,3,9);
    }
  }
  else if (music::g_SpeechPlaying.status == 3) {
    music::music_PlayPreseekedSpeech();
    uVar17 = idol::GetAnimDuration(0x168);
    *(undefined2 *)((int)pvVar3 + 0x144) = uVar17;
    uVar17 = idol::GetAnimDuration(0x3c);
    *(undefined2 *)((int)pvVar3 + 0x146) = uVar17;
    *(undefined1 *)((int)pvVar3 + 0x13a) = 0;
  }
  fastfunc::FastDecTimerS16(uVar24 + 0x144);
  fastfunc::FastDecTimerS16(uVar24 + 0x146);
  if (((1 < moby->state) && (moby->state < 6)) && ((DAT_0096b2ef & 1) != 0)) {
    moby->state = '\t';
  }
  return;
}



