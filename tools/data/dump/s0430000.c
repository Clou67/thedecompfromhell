//==== 00431548  ns=mobyupdate_helpers  size=0x44
// sig: undefined M714_00431548(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M714_00431548(void)

{
  DAT_00859e2c = 0x10000;
  DAT_010ccd04 = mobyutil::g_FrameTime * 6.0;
  DAT_010ccd08 = mobyutil::g_FrameTime * 3.1415927;
  return;
}



//==== 00431590  ns=mobyupdate_unsorted  size=0x224
// sig: undefined UpdateMoby_714(MobyInstance * moby)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

/* Moby 714 */

void mobyupdate_unsorted::UpdateMoby_714(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (moby->pos).y - g_heroPosition.y;
  bVar1 = moby->state;
  fVar3 = (moby->pos).x - g_heroPosition.x;
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (fVar2 < DAT_00859e50) {
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(moby,1,0,10);
        }
        moby->state = '\x01';
      }
    }
    else if (bVar1 < 2) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(moby,3,0,10);
        }
        moby->state = '\x03';
      }
    }
    else if (DAT_00859e54 < fVar2) {
      if (moby->animationId != '\a') {
        mobyutil::MB_SetAnimation(moby,7,0,10);
      }
      moby->state = '\a';
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 6) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(moby,2,0,10);
        }
        moby->state = '\x02';
      }
    }
    else if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x02') {
        mobyutil::MB_SetAnimation(moby,2,0,10);
      }
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 8) && ((moby->field43_0x70 & 2U) != 0)) {
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(moby,0,0,10);
    }
    moby->state = '\0';
  }
  return;
}



//==== 004317b4  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M716_004317b4(void)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M716_004317b4(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 < 1) {
      if ((-1 < param_2) && (*(char *)(param_1 + 0x20) == '\x02')) {
        if (*(char *)(param_1 + 0x53) != '\x05') {
          mobyutil::MB_SetAnimation(param_1,5,0,10);
        }
        *(undefined1 *)(param_1 + 0x20) = 5;
      }
    }
    else if (((param_2 < 3) && (1 < param_2)) && (*(char *)(param_1 + 0x20) == '\x02')) {
      if (*(char *)(param_1 + 0x53) != '\x06') {
        mobyutil::MB_SetAnimation(param_1,6,0,10);
      }
      *(undefined1 *)(param_1 + 0x20) = 6;
    }
  }
  return;
}



//==== 00431880  ns=mobyupdate_helpers  size=0x14
// sig: undefined M716_00431880(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M716_00431880(void)

{
  DAT_00859ea4 = 0x10000;
  return;
}



//==== 004318a8  ns=mobyupdate_unsorted  size=0x164
// sig: undefined UpdateMoby_716(MobyInstance * moby)
// callers(0): 
// callees(1): 004fff60 fastfunc::FastDecTimerS32

/* Moby 716 */

void mobyupdate_unsorted::UpdateMoby_716(MobyInstance *moby)

{
  void *pvVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  pvVar1 = moby->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (moby->state == 0) {
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (iVar6 = fastfunc::FastDecTimerS32(uVar7 + 8), iVar6 != 0)) &&
          (fVar3 = g_heroPosition.y - (moby->pos).y, fVar4 = g_heroPosition.x - (moby->pos).x,
          fVar5 = g_heroPosition.z - (moby->pos).z,
          SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < DAT_00859ec8)) {
    auVar8 = loadVectorLeftIndexed(in_LR,uVar7);
    auVar10 = ZEXT416(0xffffffff);
    auVar11 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar9 = loadVectorRightIndexed(0x10,uVar7);
    auVar10 = loadVectorLeftIndexed(in_LR,0x431898);
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = vectorConvertFromSignedFixedPointWord(auVar8 | auVar9,0);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorAddFloatingPoint
                        (auVar8,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
    auVar11 = loadVectorLeftIndexed(0x864,0x969ce0);
    auVar9 = loadVectorLeftIndexed(4,0x431898);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar13,auVar10,auVar12);
    auVar10 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar14 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8._0_4_ = auVar11._0_4_ + auVar10._0_4_;
    auVar8._8_8_ = auVar10._8_8_;
    auVar8._4_4_ = auVar11._4_4_ + auVar10._4_4_;
    auVar9._0_8_ = auVar8._0_8_;
    auVar9._12_4_ = auVar10._12_4_;
    auVar9._8_4_ = auVar11._8_4_ + auVar10._8_4_;
    auVar10._0_12_ = auVar9._0_12_;
    auVar10._12_4_ = auVar11._12_4_ + auVar9._12_4_;
    auVar8 = vectorCompareGreaterThanSignedWord(auVar10,auVar12);
    auVar10 = vectorConditionalSelect(auVar10,auVar12,auVar8);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_0096a544 = storeVectorElementWordIndexed
                             (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x864,
                              0x969ce0);
    auVar10 = loadVectorLeftIndexed(8,0x431898);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar14);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,8,uVar7);
    *(undefined4 *)((int)pvVar1 + 8U & 0xfffffffc) = uVar2;
  }
  return;
}



//==== 00431a0c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M717_00431a0c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M717_00431a0c(void)

{
  DAT_00859f18 = 0x10000;
  return;
}



//==== 00431a30  ns=mobyupdate_helpers  size=0x248
// sig: undefined M717_00431a30(void)
// callers(2): 00431c90 mobyupdate_helpers::M717_00431c90; 00433450 mobyupdate_unsorted::UpdateMoby_717
// callees(1): 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M717_00431a30(int param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar14;
  longlong lVar13;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong in_LR;
  longlong lVar18;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xa0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar10;
  puVar8[0x16] = in_LR;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar14 = (int)param_2 + 1;
  iVar9 = *(int *)(iVar6 + 0x244) + (int)(param_2 << 4);
  fVar1 = *(float *)(iVar9 + 0x10);
  *param_3 = fVar1;
  fVar2 = *(float *)(iVar9 + 0x14);
  param_3[1] = fVar2;
  param_3[2] = *(float *)(iVar9 + 0x18);
  param_3[3] = *(float *)(iVar9 + 0x1c);
  piVar7 = *(int **)(iVar6 + 0x244);
  iVar14 = iVar14 - (iVar14 / *piVar7) * *piVar7;
  fVar1 = (float)piVar7[iVar14 * 4 + 4] - fVar1;
  fVar2 = (float)piVar7[iVar14 * 4 + 5] - fVar2;
  fVar3 = ABS(fVar1);
  fVar5 = ABS(fVar2);
  *(float *)(puVar8 + 0xe) = fVar1;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar3 - fVar5;
  fVar1 = 0.0;
  uVar11 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar11 << 2));
  fVar4 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar16 = uVar10 - 0x90;
    lVar15 = uVar10 - 0x24;
    lVar13 = uVar10 - 0x14;
    lVar18 = 2;
    fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar8 + 0x11) = fVar2;
    *(float *)(puVar8 + 0x10) = fVar2;
    *(float *)((int)puVar8 + 0x84) = fVar2;
    *(float *)((int)puVar8 + 0x7c) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar4;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar2;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar2 * fVar2;
      iVar6 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar10 - 0x24;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar13 = lVar16;
    lVar15 = lVar12;
    do {
      fVar2 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar13 = 2;
    do {
      iVar6 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar9 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar6 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
              *(float *)(iVar9 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
  }
  fastfunc::FastWrapRot(fVar1,1.5707964);
  return;
}



//==== 00431c90  ns=mobyupdate_helpers  size=0x5a0
// sig: undefined M717_00431c90(void)
// callers(1): 00433450 mobyupdate_unsorted::UpdateMoby_717
// callees(6): 000fc620 mobyutil::MB_randInt; 0010cd94 mobyutil::MB_PathStepIndex; 001367d0 path::PathFindClosestPnt; 00431a30 mobyupdate_helpers::M717_00431a30; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M717_00431c90(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  int iVar7;
  Spline *pSVar8;
  Spline *spline;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  float *pfVar17;
  longlong lVar16;
  short sVar19;
  longlong lVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x120;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar12;
  puVar9[0x26] = in_LR;
  puVar9[0x21] = in_f29;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r31;
  puVar9[0x1d] = unaff_r28;
  puVar9[0x1c] = unaff_r27;
  puVar9[0x1f] = unaff_r30;
  iVar7 = *(int *)(param_1 + 0x78);
  uVar6 = *(undefined2 *)(iVar7 + 600);
  puVar9[0x1e] = unaff_r29;
  M717_00431a30(param_1,uVar6,uVar12 - 0xb0);
  fVar5 = *(float *)(puVar9 + 0xe) - *(float *)(param_1 + 0x10);
  fVar2 = *(float *)((int)puVar9 + 0x74) - *(float *)(param_1 + 0x14);
  fVar3 = ABS(fVar5);
  fVar4 = ABS(fVar2);
  *(float *)((int)puVar9 + 0x8c) = fVar5;
  *(float *)(puVar9 + 0x12) = fVar2;
  *(float *)((int)puVar9 + 0x94) = fVar3 - fVar4;
  dVar23 = 0.0;
  dVar25 = 0.7853981852531433;
  uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)((int)puVar9 + 0x8c));
  if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar11 = ABS(*(float *)(puVar9 + 0x12));
  if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
    fVar11 = fVar3;
  }
  dVar21 = dVar23;
  if (0.0 < fVar5) {
    lVar13 = uVar12 - 0x110;
    lVar16 = uVar12 - 0x68;
    lVar18 = uVar12 - 0x58;
    lVar20 = 2;
    fVar5 = (fVar11 - fVar5) / (fVar11 + fVar5);
    fVar3 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar5;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)((int)puVar9 + 0xc4) = fVar5;
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar5;
    *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar5 * fVar3;
    do {
      *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xa8) * fVar5 * fVar5;
      iVar14 = (int)lVar16;
      lVar13 = lVar13 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar12 - 0x68;
    pfVar17 = (float *)&DAT_007358e0;
    lVar13 = lVar1;
    lVar16 = lVar18;
    do {
      fVar5 = *pfVar17;
      fVar3 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xb8) * fVar5;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar13 = lVar1;
    do {
      iVar14 = (int)lVar13;
      iVar10 = (int)lVar18;
      lVar13 = lVar13 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar14 + 0xb8)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar4 + fVar2);
  }
  while( true ) {
    M717_00431a30(param_1,*(undefined2 *)(iVar7 + 600),uVar12 - 0xb0);
    fVar5 = *(float *)((int)puVar9 + 0x74) - *(float *)(iVar7 + 0x204);
    fVar2 = *(float *)(puVar9 + 0xe) - *(float *)(iVar7 + 0x200);
    dVar24 = (double)SQRT(fVar2 * fVar2 + fVar5 * fVar5);
    dVar21 = (double)fastfunc::FastSubRots((float)dVar21,*(float *)(param_1 + 0x48));
    if (((dVar21 < 1.5707963705062866) || (4.0 < dVar24)) && (2.0 < dVar24)) break;
    pSVar8 = *(Spline **)(iVar7 + 0x244);
    iVar14 = *(short *)(iVar7 + 600) + 1;
    sVar19 = (short)iVar14 - (short)(iVar14 / pSVar8->cnt) * (short)pSVar8->cnt;
    *(short *)(iVar7 + 600) = sVar19;
    spline = Splines[*(int *)(iVar7 + 0x220)];
    if (pSVar8 == spline) {
      if (0 < *(int *)((int)&pSVar8->points[0].w + (int)((longlong)sVar19 << 4))) {
        iVar14 = mobyutil::MB_randInt(100);
        sVar19 = *(short *)(iVar7 + 600);
        if (0 < iVar14) {
          iVar14 = fastfunc::FastDoubleToInt
                             ((double)*(float *)(*(int *)(iVar7 + 0x244) +
                                                 (int)((longlong)sVar19 << 4) + 0x1c));
          sVar19 = 0;
          iVar14 = *(int *)(iVar7 + (iVar14 + -1) * 4 + 0x224);
          *(undefined2 *)(iVar7 + 600) = 0;
          *(Spline **)(iVar7 + 0x244) = Splines[iVar14];
        }
      }
    }
    else if ((int)sVar19 == pSVar8->cnt + -1) {
      *(Spline **)(iVar7 + 0x244) = spline;
      iVar14 = path::PathFindClosestPnt((float)dVar23,(Vec4 *)(iVar7 + 0x200),spline);
      *(short *)(iVar7 + 600) = (short)iVar14;
      iVar14 = mobyutil::MB_PathStepIndex(*(int **)(iVar7 + 0x244),(int)(short)iVar14,5,1);
      sVar19 = (short)iVar14;
      *(short *)(iVar7 + 600) = sVar19;
    }
    M717_00431a30(param_1,sVar19,uVar12 - 0xb0);
    fVar5 = *(float *)(puVar9 + 0xe) - *(float *)(param_1 + 0x10);
    fVar2 = *(float *)((int)puVar9 + 0x74) - *(float *)(param_1 + 0x14);
    dVar21 = ABS((double)fVar5);
    dVar22 = ABS((double)fVar2);
    *(float *)(puVar9 + 0x10) = fVar5;
    *(float *)((int)puVar9 + 0x84) = fVar2;
    *(float *)(puVar9 + 0x11) = (float)(dVar21 - dVar22);
    uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
    dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)(puVar9 + 0x11) - dVar23 < 0.0) {
      dVar24 = dVar22;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar9 + 0x84));
    if ((double)*(float *)(puVar9 + 0x11) - dVar23 < 0.0) {
      dVar22 = dVar21;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    dVar21 = dVar23;
    if (dVar23 < dVar24) {
      lVar13 = uVar12 - 0x110;
      lVar18 = uVar12 - 0x78;
      lVar16 = uVar12 - 0x88;
      lVar20 = 2;
      fVar4 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x13) = fVar4;
      *(float *)((int)puVar9 + 0x9c) = fVar4;
      *(float *)(puVar9 + 0x14) = fVar4;
      *(float *)((int)puVar9 + 0xa4) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x88) * fVar4 * fVar4;
        iVar14 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar12 - 0x88;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar1;
      lVar16 = lVar18;
      do {
        fVar4 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x98) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      lVar13 = lVar1;
      do {
        iVar14 = (int)lVar13;
        iVar10 = (int)lVar18;
        lVar13 = lVar13 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar14 + 0x98)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar21 = (double)((float)(dVar21 + dVar25) * fVar5 + fVar2);
    }
  }
  return;
}



//==== 00432258  ns=mobyupdate_helpers  size=0x4c0
// sig: undefined M717_00432258(void)
// callers(1): 00433450 mobyupdate_unsorted::UpdateMoby_717
// callees(5): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 004fff60 fastfunc::FastDecTimerS32; 00500af8 fastfunc::FastMtx4Identity; 005010c0 fastfunc::FastNormalizeRMtx4

MobyInstance * mobyupdate_helpers::M717_00432258(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  MobyInstance *group;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  MobyInstance *local_a0;
  MobyInstance *local_9c;
  longlong local_98;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar5 = (ulonglong)uVar1;
  local_98 = (longlong)(int)(animationSpeed * 180.5);
  group = g_RaceTime;
  if ((int)(animationSpeed * 180.5) <= (int)g_RaceTime) {
    group = (MobyInstance *)fastfunc::FastDecTimerS32(uVar5 + 0x264);
    if ((group != (MobyInstance *)0x0) && (hero::g_heroBoardMoby != 0)) {
      iVar2 = *(int *)(hero::g_heroBoardMoby + 0x78);
      group = *(MobyInstance **)(iVar2 + 0x44);
      if (group != (MobyInstance *)0xffffffff) {
        mobyutil::MB_GetFirstMobyInGroup(&local_a0,(int)group,'\0','\0');
        group = local_a0;
        if (local_a0 != (MobyInstance *)0x0) {
          dVar7 = 0.800000011920929;
          dVar8 = 8.0;
          dVar9 = 0.5;
          dVar10 = 2.5;
          auVar20 = loadVectorLeftIndexed(0x14,0x432230);
          auVar22 = loadVectorLeftIndexed(0x18,0x432230);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar20 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          do {
            if (local_a0->oClass == HOVERBOARD_RING) {
              dVar12 = (double)((local_a0->pos).y - *(float *)(uVar1 + 0x204));
              dVar11 = (double)((local_a0->pos).x - *(float *)(uVar1 + 0x200));
              dVar13 = (double)((local_a0->pos).z -
                               (float)((double)*(float *)(uVar1 + 0x208) + dVar7));
              dVar6 = (double)(local_a0->pos).w;
              if ((double)SQRT((float)(dVar13 * dVar13 +
                                      (double)(float)(dVar11 * dVar11 +
                                                     (double)(float)(dVar12 * dVar12)))) <= dVar8) {
                fastfunc::FastMtx4Identity(&local_120);
                fastfunc::FastNormalizeRMtx4(&local_120,&local_a0->transform);
                if (((ABS((double)(float)((double)local_f0 * dVar6 +
                                         (double)(float)((double)local_100 * dVar13 +
                                                        (double)(float)((double)local_120 * dVar11 +
                                                                       (double)(float)((double)
                                                  local_110 * dVar12))))) < dVar9) &&
                    (ABS((double)(float)((double)local_ec * dVar6 +
                                        (double)(float)((double)local_fc * dVar13 +
                                                       (double)(float)((double)local_11c * dVar11 +
                                                                      (double)(float)((double)
                                                  local_10c * dVar12))))) < dVar10)) &&
                   (ABS((double)(float)((double)local_e8 * dVar6 +
                                       (double)(float)((double)local_f8 * dVar13 +
                                                      (double)(float)((double)local_118 * dVar11 +
                                                                     (double)(float)((double)
                                                  local_108 * dVar12))))) < dVar10)) {
                  auVar22 = ZEXT416(0xffffffff);
                  auVar14 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = ZEXT416(0xffffffff);
                  auVar16 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = ZEXT416(0xfffffff0);
                  auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
                  auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
                  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar19 = loadVectorLeftIndexed(0x25a,uVar5);
                  auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar14);
                  auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar20,auVar16);
                  auVar17 = loadVectorRightIndexed(0x26a,uVar5);
                  auVar18 = vectorShiftRightWord
                                      (auVar19 | auVar17,
                                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                                      );
                  auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
                  auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
                  auVar16._0_4_ = auVar18._0_4_ + auVar22._0_4_;
                  auVar16._8_8_ = auVar22._8_8_;
                  auVar16._4_4_ = auVar18._4_4_ + auVar22._4_4_;
                  auVar17._0_8_ = auVar16._0_8_;
                  auVar17._12_4_ = auVar22._12_4_;
                  auVar17._8_4_ = auVar18._8_4_ + auVar22._8_4_;
                  auVar14._0_12_ = auVar17._0_12_;
                  auVar14._12_4_ = auVar18._12_4_ + auVar17._12_4_;
                  auVar22 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
                  auVar14 = vectorSplatHalfWord(auVar14,1);
                  uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x25a,uVar5);
                  *(undefined2 *)(uVar1 + 0x25a) = uVar3;
                  uVar4 = storeVectorElementWordIndexed
                                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                     0x264,uVar5);
                  *(undefined4 *)(uVar1 + 0x264 & 0xfffffffc) = uVar4;
                }
              }
            }
            mobyutil::MB_GetNextMobyInGroup(&local_a0,local_a0,'\0','\0');
            group = local_a0;
          } while (local_a0 != (MobyInstance *)0x0);
        }
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      if (iVar2 != -1) {
        group = (MobyInstance *)mobyutil::MB_GetFirstMobyInGroup(&local_9c,iVar2,'\0','\0');
        if (local_9c != (MobyInstance *)0x0) {
          dVar7 = 8.0;
          dVar8 = 2.799999952316284;
          dVar9 = 1.399999976158142;
          dVar10 = 0.5;
          auVar20 = loadVectorLeftIndexed(0x14,0x432230);
          auVar22 = loadVectorLeftIndexed(0x18,0x432230);
          auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar20 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          do {
            if (local_9c->oClass == HOVERBOARD_BOOST_PAD) {
              dVar12 = (double)((local_9c->pos).y - *(float *)(uVar1 + 0x204));
              dVar11 = (double)((local_9c->pos).x - *(float *)(uVar1 + 0x200));
              dVar13 = (double)((local_9c->pos).z - *(float *)(uVar1 + 0x208));
              dVar6 = (double)(local_9c->pos).w;
              if ((double)SQRT((float)(dVar13 * dVar13 +
                                      (double)(float)(dVar11 * dVar11 +
                                                     (double)(float)(dVar12 * dVar12)))) <= dVar7) {
                fastfunc::FastMtx4Identity(&local_e0);
                fastfunc::FastNormalizeRMtx4(&local_e0,&local_9c->transform);
                if (((ABS((double)(float)((double)local_b0 * dVar6 +
                                         (double)(float)((double)local_c0 * dVar13 +
                                                        (double)(float)((double)local_e0 * dVar11 +
                                                                       (double)(float)((double)
                                                  local_d0 * dVar12))))) < dVar8) &&
                    (ABS((double)(float)((double)local_ac * dVar6 +
                                        (double)(float)((double)local_bc * dVar13 +
                                                       (double)(float)((double)local_dc * dVar11 +
                                                                      (double)(float)((double)
                                                  local_cc * dVar12))))) < dVar9)) &&
                   (ABS((double)(float)((double)local_a8 * dVar6 +
                                       (double)(float)((double)local_b8 * dVar13 +
                                                      (double)(float)((double)local_d8 * dVar11 +
                                                                     (double)(float)((double)
                                                  local_c8 * dVar12))))) < dVar10)) {
                  auVar22 = ZEXT416(0xffffffff);
                  auVar14 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = ZEXT416(0xffffffff);
                  auVar16 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = vectorShiftLeftIntegerWord(auVar14,auVar14);
                  auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
                  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar22);
                  auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar20,auVar16);
                  auVar17 = loadVectorLeftIndexed(0x25a,uVar5);
                  auVar22 = ZEXT416(0xfffffff0);
                  auVar19 = loadVectorRightIndexed(0x26a,uVar5);
                  auVar17 = vectorShiftRightWord
                                      (auVar17 | auVar19,
                                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                                      );
                  auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
                  auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
                  auVar15._0_4_ = auVar17._0_4_ + auVar22._0_4_;
                  auVar15._8_8_ = auVar22._8_8_;
                  auVar15._4_4_ = auVar17._4_4_ + auVar22._4_4_;
                  auVar18._0_8_ = auVar15._0_8_;
                  auVar18._12_4_ = auVar22._12_4_;
                  auVar18._8_4_ = auVar17._8_4_ + auVar22._8_4_;
                  auVar19._0_12_ = auVar18._0_12_;
                  auVar19._12_4_ = auVar17._12_4_ + auVar18._12_4_;
                  auVar22 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
                  auVar14 = vectorSplatHalfWord(auVar19,1);
                  uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x25a,uVar5);
                  *(undefined2 *)(uVar1 + 0x25a) = uVar3;
                  uVar4 = storeVectorElementWordIndexed
                                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                     0x264,uVar5);
                  *(undefined4 *)(uVar1 + 0x264 & 0xfffffffc) = uVar4;
                }
              }
            }
            group = (MobyInstance *)mobyutil::MB_GetNextMobyInGroup(&local_9c,local_9c,'\0','\0');
          } while (local_9c != (MobyInstance *)0x0);
        }
      }
    }
  }
  return group;
}



//==== 00432718  ns=mobyupdate_helpers  size=0x110
// sig: undefined M717_00432718(void)
// callers(1): 00433450 mobyupdate_unsorted::UpdateMoby_717
// callees(1): 0010cd94 mobyutil::MB_PathStepIndex

void mobyupdate_helpers::M717_00432718(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Spline *path;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x78);
  path = *(Spline **)(iVar2 + 0x244);
  if (((path != Splines[*(int *)(iVar2 + 0x220)]) && (*(int *)(iVar2 + 0x24c) < 1)) &&
     (lVar5 = (longlong)*(short *)(iVar2 + 600),
     *(int *)((int)&path->points[0].w + (int)(lVar5 << 4)) == 0x3f800000)) {
    do {
      iVar4 = mobyutil::MB_PathStepIndex(&path->cnt,(int)lVar5,1,1);
      lVar5 = (longlong)iVar4;
      path = *(Spline **)(iVar2 + 0x244);
    } while (*(int *)((int)&path->points[0].w + (int)(lVar5 << 4)) != 0x40000000);
    iVar3 = (int)(lVar5 << 4);
    *(int *)(iVar2 + 0x27c) = iVar4;
    *(undefined4 *)(iVar2 + 0x210) = *(undefined4 *)((int)&path->points[0].x + iVar3);
    *(undefined4 *)(iVar2 + 0x214) = *(undefined4 *)((int)&path->points[0].y + iVar3);
    *(undefined4 *)(iVar2 + 0x218) = *(undefined4 *)((int)&path->points[0].z + iVar3);
    uVar1 = *(undefined4 *)((int)&path->points[0].w + iVar3);
    *(undefined4 *)(iVar2 + 0x26c) = 1;
    *(undefined4 *)(iVar2 + 0x21c) = uVar1;
  }
  return;
}



//==== 00432828  ns=mobyupdate_helpers  size=0x28
// sig: undefined M717_00432828(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M717_00432828(longlong param_1)

{
  return param_1 + ((LZCOUNT(5 - (int)param_1) << 0x3a) >> 0x3f & 6U - param_1);
}



//==== 00432858  ns=mobyupdate_helpers  size=0x1cc
// sig: undefined M717_00432858(void)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M717_00432858
               (undefined8 param_1,longlong param_2,int param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte in_cr6;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar4 = 0x70;
  auVar6._0_4_ = param_3;
  auVar6._4_4_ = param_3;
  auVar6._8_4_ = param_3;
  auVar6._12_4_ = param_3;
  mobyutil::MB_SetAnimation();
  uVar2 = *(uint *)(*(int *)((int)param_1 + 0x78) + 0x268);
  if (uVar2 != 0) {
    auVar7 = ZEXT416(0xffffffff);
    auVar9 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = ZEXT416(0xffffffff);
    auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar5 = loadVectorLeftIndexed(0x5c,param_1);
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar9 = vectorReciprocalEstimateFloatingPoint(auVar5);
    auVar7 = loadVectorLeftIndexed(uVar4,0x432850);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar7 = ZEXT416(0xffffffff);
    auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = ZEXT416(0xffffffff);
    auVar14 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = ZEXT416(0xfffffff8);
    auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    param_2 = param_2 + ((LZCOUNT(5 - (int)param_2) << 0x3a) >> 0x3f & 6U - param_2);
    auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar5,auVar8);
    auVar15 = vectorConvertFromSignedFixedPointWord(auVar6,0);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar9,auVar11,auVar10);
    auVar10 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar2);
    auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar5,auVar8);
    uVar3 = *(uint *)(*(int *)(uVar2 + 0x24) + (int)param_2 * 4 + 0x48);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar6,auVar9,auVar12);
    auVar6 = ZEXT416(0xffffffff);
    auVar11 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    auVar6 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar5,auVar8);
    auVar8 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar5 = loadVectorLeftIndexed(0x10,(ulonglong)uVar3);
    auVar7 = vectorShiftRightWord(auVar5,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar9,auVar6,auVar13);
    auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar7,0);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar6,auVar10,auVar14);
    auVar6 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    fVar1 = (float)(longlong)param_3 * (*(float *)(uVar2 + 0x5c) / *(float *)((int)param_1 + 0x5c));
    auVar7 = vectorMultiplyAddFloatingPoint(auVar15,auVar7,auVar8);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    vectorCompareGreaterThanFloatingPoint
              (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar6 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        fVar1 = 0.0;
      }
    }
    else {
      fVar1 = (float)*(byte *)(uVar3 + 0x10);
    }
    mobyutil::MB_SetAnimation((ulonglong)uVar2,param_2,(int)fVar1,param_4);
  }
  return;
}



//==== 00432a70  ns=mobyupdate_helpers  size=0x930
// sig: undefined M717_00432a70(void)
// callers(1): 00433450 mobyupdate_unsorted::UpdateMoby_717
// callees(5): 000efe40 mobyfunc::BlendAnimFrame; 000fcb40 mobyutil::MB_SolveQuad; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M717_00432a70(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  short sVar8;
  longlong lVar9;
  byte in_cr6;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
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
  float local_50;
  
  pMVar6 = (MobyInstance *)param_1;
  pvVar3 = pMVar6->pVar;
  if (*(int *)((int)pvVar3 + 0x26c) == 0) {
    pMVar6->unk58 = 1.0;
    if (((pMVar6->field43_0x70 & 2U) != 0) && (pMVar6->animationId != '\0')) {
      fVar2 = animationSpeed * 8.5;
      mobyutil::MB_SetAnimation(param_1,0,0,(int)fVar2);
      iVar7 = *(int *)((int)pMVar6->pVar + 0x268);
      if (iVar7 != 0) {
        auVar15 = ZEXT416(0xfffffff8);
        auVar17 = ZEXT416(0);
        uVar4 = *(uint *)(*(int *)(iVar7 + 0x24) + 0x48);
        auVar14 = loadVectorLeftIndexed(0x10,(ulonglong)uVar4);
        auVar15 = vectorShiftRightWord
                            (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
        auVar15 = vectorConvertFromUnsignedFixedPointWord(auVar15,0);
        fVar1 = 0.0;
        auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanFloatingPoint
                  (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                   auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          fVar1 = (float)*(byte *)(uVar4 + 0x10);
        }
        mobyutil::MB_SetAnimation(iVar7,0,(int)fVar1,(int)fVar2);
      }
    }
  }
  else {
    if (pMVar6->animationId != '\x05') {
      if (*(int *)((int)pvVar3 + 0x26c) <= (int)(animationSpeed * 3.5)) {
        fVar2 = animationSpeed * 5.5;
        mobyutil::MB_SetAnimation(param_1,5,1,(int)fVar2);
        uVar4 = *(uint *)((int)pMVar6->pVar + 0x268);
        if (uVar4 != 0) {
          auVar15 = ZEXT416(0xffffffff);
          auVar17 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(0x5c,param_1);
          auVar14 = vectorReciprocalEstimateFloatingPoint(auVar17);
          auVar15 = loadVectorLeftIndexed(8,0x432a24);
          auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar16 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
          auVar15 = ZEXT416(0xffffffff);
          auVar21 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar22 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar15,auVar18);
          auVar19 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar4);
          auVar18 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          auVar15 = ZEXT416(0xfffffff8);
          uVar5 = *(uint *)(*(int *)(uVar4 + 0x24) + 0x60);
          auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          auVar24 = loadVectorLeftIndexed(0x10,(ulonglong)uVar5);
          fVar1 = *(float *)(uVar4 + 0x5c) / pMVar6->frameSpeed;
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar21,auVar20);
          auVar15 = vectorShiftRightWord
                              (auVar24,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                              );
          auVar15 = vectorConvertFromUnsignedFixedPointWord(auVar15,0);
          auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar17 = vectorMultiplyAddFloatingPoint(auVar14,auVar17,auVar18);
          auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar22);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          vectorCompareGreaterThanFloatingPoint
                    (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
          if ((bool)(in_cr6 >> 1 & 1)) {
            auVar15 = ZEXT416(0);
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              fVar1 = 0.0;
            }
          }
          else {
            fVar1 = (float)*(byte *)(uVar5 + 0x10);
          }
          mobyutil::MB_SetAnimation((ulonglong)uVar4,6,(int)fVar1,(int)fVar2);
        }
        *(undefined2 *)((int)pvVar3 + 0x272) = 0xffff;
      }
    }
    dVar10 = (double)(DAT_0071f418 * 21.0 * -0.5);
    iVar7 = mobyutil::MB_SolveQuad
                      (dVar10,(double)(float)((double)*(float *)((int)pvVar3 + 0x24c) - dVar10),
                       (double)(*(float *)((int)pvVar3 + 0x208) - *(float *)((int)pvVar3 + 0x218)));
    dVar13 = 30.0;
    dVar10 = dVar13;
    if (0 < iVar7) {
      if (0 < (int)local_50) {
        iVar7 = fastfunc::FastDoubleToInt((double)local_50);
        dVar10 = (double)(longlong)iVar7;
      }
    }
    dVar12 = 7.5;
    if ((((int)(animationSpeed * 7.5) < *(int *)((int)pvVar3 + 0x26c)) &&
        (*(int *)((int)pvVar3 + 0x26c) < (int)(animationSpeed * 11.5))) &&
       (pMVar6->animationId == '\x05')) {
      if ((double)(longlong)(animationSpeed * 27.5) < dVar10) {
        sVar8 = mobyutil::MB_randRange(0,3);
        sVar8 = sVar8 + 1;
        dVar11 = (double)animationSpeed;
        *(short *)((int)pvVar3 + 0x272) = sVar8;
        dVar11 = dVar11 * dVar12;
        lVar9 = (longlong)sVar8;
        mobyutil::MB_SetAnimation(param_1,lVar9,1,(int)dVar11);
        uVar4 = *(uint *)((int)pMVar6->pVar + 0x268);
        if (uVar4 != 0) {
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar17 = loadVectorLeftIndexed(0x5c,param_1);
          auVar18 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar14 = vectorReciprocalEstimateFloatingPoint(auVar17);
          auVar15 = loadVectorLeftIndexed(8,0x432a24);
          auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar16 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar20 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
          auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar22 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          lVar9 = lVar9 + ((LZCOUNT(5 - sVar8) << 0x3a) >> 0x3f & 6U - lVar9);
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar15,auVar18);
          auVar18 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar4);
          auVar15 = ZEXT416(0xfffffff8);
          auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          uVar5 = *(uint *)(*(int *)(uVar4 + 0x24) + (int)lVar9 * 4 + 0x48);
          fVar2 = *(float *)(uVar4 + 0x5c) / pMVar6->frameSpeed;
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar21,auVar19);
          auVar19 = loadVectorLeftIndexed(0x10,(ulonglong)uVar5);
          auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          auVar15 = vectorShiftRightWord
                              (auVar19,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                              );
          auVar15 = vectorConvertFromUnsignedFixedPointWord(auVar15,0);
          auVar17 = vectorMultiplyAddFloatingPoint(auVar14,auVar17,auVar20);
          auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar22);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          vectorCompareGreaterThanFloatingPoint
                    (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
          if ((bool)(in_cr6 >> 1 & 1)) {
            auVar15 = ZEXT416(0);
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              fVar2 = 0.0;
            }
          }
          else {
            fVar2 = (float)*(byte *)(uVar5 + 0x10);
          }
          mobyutil::MB_SetAnimation((ulonglong)uVar4,lVar9,(int)fVar2,(int)dVar11);
        }
      }
    }
    if ((*(short *)((int)pvVar3 + 0x272) != -1) && (pMVar6->updateId == pMVar6->animationId)) {
      dVar11 = (double)mobyfunc::BlendAnimFrame(pMVar6);
      if ((7.0 < dVar11) && ((dVar11 < 20.0 && (dVar10 != 0.0)))) {
        fVar2 = (float)(dVar13 / dVar10);
        if (1.7 - (float)(dVar13 / dVar10) < 0.0) {
          fVar2 = 1.7;
        }
        if (fVar2 - 0.3 < 0.0) {
          fVar2 = 0.3;
        }
        pMVar6->unk58 = fVar2;
      }
    }
    if (*(short *)((int)pvVar3 + 0x272) != -1) {
      dVar13 = (double)animationSpeed;
      if ((double)(longlong)(dVar13 * 9.5) <= dVar10) {
        if ((pMVar6->field43_0x70 & 2U) != 0) {
          mobyutil::MB_SetAnimation(param_1,5,2,(int)(dVar13 * dVar12));
          uVar4 = *(uint *)((int)pMVar6->pVar + 0x268);
          if (uVar4 != 0) {
            auVar15 = ZEXT416(0xffffffff);
            auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
            auVar14 = loadVectorLeftIndexed(0x5c,param_1);
            auVar19 = vectorShiftLeftIntegerWord(auVar15,auVar15);
            auVar16 = vectorReciprocalEstimateFloatingPoint(auVar14);
            auVar15 = loadVectorLeftIndexed(8,0x432a24);
            auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar18 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
            auVar15 = ZEXT416(0xffffffff);
            auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
            auVar21 = vectorShiftLeftIntegerWord(auVar15,auVar15);
            auVar15 = ZEXT416(0xfffffff8);
            auVar17 = ZEXT416(0xffffffff);
            auVar24 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar14,auVar18);
            auVar22 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar4);
            uVar5 = *(uint *)(*(int *)(uVar4 + 0x24) + 0x60);
            auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar19);
            auVar17 = ZEXT416(0xffffffff);
            auVar19 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            auVar17 = ZEXT416(0xffffffff);
            auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
            auVar20 = vectorShiftLeftIntegerWord(auVar17,auVar17);
            auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar14,auVar18);
            auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar21);
            auVar21 = loadVectorLeftIndexed(0x10,(ulonglong)uVar5);
            auVar16 = vectorShiftLeftIntegerWord(auVar24,auVar24);
            auVar21 = vectorShiftRightWord
                                (auVar21,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 |
                                         auVar15 << 0x60);
            auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar18);
            fVar2 = (*(float *)(uVar4 + 0x5c) / pMVar6->frameSpeed) * 2.0;
            auVar15 = vectorMultiplyAddFloatingPoint(auVar17,auVar15,auVar19);
            auVar14 = vectorConvertFromUnsignedFixedPointWord(auVar21,0);
            auVar17 = vectorMultiplyAddFloatingPoint(auVar15,auVar22,auVar20);
            auVar15 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar16);
            auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            vectorCompareGreaterThanFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              auVar15 = ZEXT416(0);
              vectorCompareGreaterThanOrEqualToFloatingPoint
                        (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
              if ((bool)(in_cr6 >> 1 & 1)) {
                fVar2 = 0.0;
              }
            }
            else {
              fVar2 = (float)*(byte *)(uVar5 + 0x10);
            }
            mobyutil::MB_SetAnimation((ulonglong)uVar4,6,(int)fVar2,(int)(dVar13 * dVar12));
          }
          *(undefined2 *)((int)pvVar3 + 0x272) = 0xffff;
        }
      }
      else {
        mobyutil::MB_SetAnimation(param_1,5,3,(int)(dVar13 * dVar12));
        uVar4 = *(uint *)((int)pMVar6->pVar + 0x268);
        if (uVar4 != 0) {
          auVar15 = ZEXT416(0xffffffff);
          auVar17 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar16 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar14 = loadVectorLeftIndexed(0x5c,param_1);
          auVar17 = vectorReciprocalEstimateFloatingPoint(auVar14);
          auVar15 = loadVectorLeftIndexed(8,0x432a24);
          auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar18 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar21 = vectorShiftLeftIntegerWord(auVar19,auVar19);
          auVar15 = ZEXT416(0xffffffff);
          auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar20 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar23 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar22 = vectorShiftLeftIntegerWord(auVar19,auVar19);
          auVar15 = ZEXT416(0xfffffff8);
          auVar24 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar18);
          auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar16);
          auVar19 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar4);
          auVar17 = loadVectorLeftIndexed(0x3c,0x432a24);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = *(uint *)(*(int *)(uVar4 + 0x24) + 0x60);
          auVar20 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar14,auVar18);
          auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar20,auVar21);
          auVar21 = loadVectorLeftIndexed(0x10,(ulonglong)uVar5);
          auVar20 = vectorShiftLeftIntegerWord(auVar23,auVar23);
          auVar21 = vectorShiftRightWord
                              (auVar21,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                              );
          auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar14,auVar18);
          auVar18 = vectorConvertFromUnsignedFixedPointWord(auVar21,0);
          fVar2 = (*(float *)(uVar4 + 0x5c) / pMVar6->frameSpeed) * 3.0;
          auVar14 = vectorMultiplyAddFloatingPoint(auVar16,auVar15,auVar22);
          auVar15 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar19,auVar24);
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar14,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar20);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          vectorCompareGreaterThanFloatingPoint
                    (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
          if ((bool)(in_cr6 >> 1 & 1)) {
            auVar15 = ZEXT416(0);
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              fVar2 = 0.0;
            }
          }
          else {
            fVar2 = (float)*(byte *)(uVar5 + 0x10);
          }
          mobyutil::MB_SetAnimation((ulonglong)uVar4,6,(int)fVar2,(int)(dVar13 * dVar12),0x10);
        }
        *(undefined2 *)((int)pvVar3 + 0x272) = 0xffff;
      }
    }
    if ((pMVar6->updateId == pMVar6->animationId && pMVar6->animationId == '\x05') &&
       (dVar10 != 0.0)) {
      dVar13 = (double)mobyfunc::BlendAnimFrame(pMVar6);
      pMVar6->unk58 = (float)(25.0 - dVar13) / (float)(dVar10 * 0.5);
    }
  }
  if (*(int *)((int)pvVar3 + 0x268) != 0) {
    *(float *)(*(int *)((int)pvVar3 + 0x268) + 0x58) = pMVar6->unk58;
  }
  return;
}



//==== 00433450  ns=mobyupdate_unsorted  size=0x1008
// sig: undefined UpdateMoby_717(MobyInstance * moby)
// callers(0): 
// callees(19): 0005e598 collproc::CollMobySphere; 000fcc68 mobyutil::MB_randRot; 000ffb70 mobyutil::GetGroundZ; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010a050 mobyutil::AccelDeltAng; 0010af88 mobyutil::MB_isCrate; 0010cd94 mobyutil::MB_PathStepIndex; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119ac0 mobyutil::MB_SetScaleCheat; 0037afa8 FUN_0037afa8; 00431a30 mobyupdate_helpers::M717_00431a30; 00431c90 mobyupdate_helpers::M717_00431c90; 00432258 mobyupdate_helpers::M717_00432258; 00432718 mobyupdate_helpers::M717_00432718; 00432a70 mobyupdate_helpers::M717_00432a70; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot

/* Moby 717 */

void mobyupdate_unsorted::UpdateMoby_717(MobyInstance *moby)

{
  char cVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  Spline *pSVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar19;
  short sVar21;
  int iVar20;
  bool bVar22;
  undefined8 uVar18;
  longlong lVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  int *path;
  ulonglong unaff_r25;
  undefined4 *puVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f20;
  double dVar34;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  ulonglong in_f27;
  double dVar40;
  ulonglong in_f28;
  double in_f29;
  ulonglong in_f30;
  double dVar41;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x1b0;
  puVar13 = (ulonglong *)lVar17;
  *puVar13 = uVar15;
  puVar13[0x38] = in_LR;
  puVar13[0x2a] = in_f20;
  puVar13[0x2b] = in_f21;
  puVar13[0x2c] = in_f22;
  puVar13[0x2d] = in_f23;
  puVar13[0x2e] = in_f24;
  puVar13[0x2f] = in_f25;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = (ulonglong)in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  puVar13[0x29] = unaff_r31;
  cVar1 = moby->enabled;
  puVar13[0x28] = unaff_r30;
  pvVar8 = moby->pVar;
  uVar29 = ZEXT48(pvVar8);
  puVar13[0x27] = unaff_r29;
  puVar13[0x26] = unaff_r28;
  puVar13[0x25] = unaff_r27;
  puVar13[0x24] = unaff_r26;
  puVar13[0x23] = unaff_r25;
  if ((cVar1 != '\0') &&
     (fVar53 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar53 * fVar53) < 29.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar16);
    moby->shadow = '\x17';
  }
  bVar2 = moby->state;
  if (bVar2 == 0) {
    moby->updateDistance = '\x18';
    iVar20 = *(int *)((int)pvVar8 + 0x234);
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    pSVar9 = Splines[iVar20];
    *(Spline **)((int)pvVar8 + 0x244) = pSVar9;
    mobyupdate_helpers::M717_00431a30(lVar16,0,uVar15 - 0x130);
    fVar3 = *(f32 *)(puVar13 + 0x11);
    (moby->pos).y = *(f32 *)((int)puVar13 + 0x84);
    (moby->pos).z = fVar3;
    fVar3 = *(f32 *)(puVar13 + 0x10);
    (moby->pos).w = *(f32 *)((int)puVar13 + 0x8c);
    (moby->pos).x = fVar3;
    *(f32 *)((int)pvVar8 + 0x200) = fVar3;
    *(f32 *)((int)pvVar8 + 0x204) = (moby->pos).y;
    *(f32 *)((int)pvVar8 + 0x208) = (moby->pos).z;
    *(f32 *)((int)pvVar8 + 0x20c) = (moby->pos).w;
    fVar6 = 0.0;
    (moby->rotation).x = 0.0;
    (moby->rotation).y = 0.0;
    fVar53 = pSVar9->points[1].x - pSVar9->points[0].x;
    fVar4 = pSVar9->points[1].y - pSVar9->points[0].y;
    fVar5 = ABS(fVar53);
    fVar7 = ABS(fVar4);
    *(float *)((int)puVar13 + 0xbc) = fVar53;
    *(float *)(puVar13 + 0x18) = fVar4;
    *(float *)((int)puVar13 + 0xc4) = fVar5 - fVar7;
    uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0xbc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x18) >> 0x1d) & 4;
    fVar53 = ABS(*(float *)((int)puVar13 + 0xbc));
    if (*(float *)((int)puVar13 + 0xc4) - 0.0 < 0.0) {
      fVar53 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
    fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    fVar14 = ABS(*(float *)(puVar13 + 0x18));
    if (*(float *)((int)puVar13 + 0xc4) - 0.0 < 0.0) {
      fVar14 = fVar5;
    }
    if (0.0 < fVar53) {
      lVar16 = uVar15 - 0x1a0;
      lVar26 = uVar15 - 0xb8;
      lVar23 = uVar15 - 200;
      lVar30 = 2;
      fVar53 = (fVar14 - fVar53) / (fVar14 + fVar53);
      fVar5 = fVar53 * fVar53;
      *(float *)((int)puVar13 + 0xf4) = fVar53;
      *(float *)((int)puVar13 + 0xec) = fVar53;
      *(float *)(puVar13 + 0x1e) = fVar53;
      *(float *)(puVar13 + 0x1d) = fVar53;
      fVar53 = fVar5 * fVar5;
      *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar5;
      *(float *)(puVar13 + 0x1e) = *(float *)(puVar13 + 0x1e) * fVar53;
      *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar53 * fVar5;
      do {
        *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xd8) * fVar53 * fVar53;
        iVar20 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar53 * fVar53;
        lVar26 = lVar26 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar26 = uVar15 - 200;
      pfVar24 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar23 = lVar26;
      do {
        fVar53 = *pfVar24;
        fVar5 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xe8) * fVar53;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
        lVar23 = lVar23 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar16 = 2;
      do {
        iVar20 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar28 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar20 + 0xe8) + *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8)
                + *(float *)(iVar28 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar6 = (fVar6 + 0.7853982) * fVar7 + fVar4;
    }
    (moby->rotation).z = fVar6;
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar47 = loadVectorLeftIndexed(0x250,uVar29);
    auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar48 = loadVectorRightIndexed(0x260,uVar29);
    auVar50 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
    auVar51 = loadVectorLeftIndexed(0x10,0x4333a0);
    auVar45 = ZEXT416(0xffffffff);
    auVar49 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar45 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar47 = vectorConvertFromSignedFixedPointWord(auVar47 | auVar48,0);
    auVar48 = vectorShiftLeftIntegerWord(auVar49,auVar49);
    auVar46 = vectorMultiplyAddFloatingPoint
                        (auVar50,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar46);
    auVar45 = loadVectorLeftIndexed(0xc,0x4333a0);
    auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar47 = vectorMultiplyAddFloatingPoint(auVar46,auVar47,auVar48);
    auVar46 = vectorMultiplyAddFloatingPoint
                        (auVar50,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar47);
    auVar45 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x238,uVar29);
    *(undefined4 *)((int)pvVar8 + 0x238U & 0xfffffffc) = uVar12;
    auVar45 = loadVectorLeftIndexed(0x14,0x4333a0);
    auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar47 = vectorMultiplyAddFloatingPoint
                        (auVar50,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar47);
    auVar45 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x23c,uVar29);
    *(undefined4 *)((int)pvVar8 + 0x23cU & 0xfffffffc) = uVar12;
    if (MiscLevelFlags.Zoomerator == false) {
      auVar45 = ZEXT416(4);
      auVar48 = ZEXT416(0xffffffff);
      auVar52 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
      auVar48 = loadVectorLeftIndexed(0x548,0xa10000);
      auVar48 = vectorSubtractUnsignedWordModulo
                          (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60);
      auVar45 = ZEXT416(0);
      auVar50 = vectorConvertFromSignedFixedPointWord(auVar48,0);
      auVar48 = loadVectorLeftIndexed(0x18,0x4333a0);
      auVar49 = loadVectorLeftIndexed(0x1c,0x4333a0);
      auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar51 = loadVectorLeftIndexed(0x20,0x4333a0);
      auVar45 = vectorCompareGreaterThanFloatingPoint
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,auVar50);
      auVar50 = vectorLogicalAndWithComplement(auVar50,auVar45);
      auVar45 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar51 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar48 = vectorNegativeMultiplySubtractFloatingPoint
                          (auVar50,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                           auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60);
      auVar49 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar50 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar45 = vectorCompareGreaterThanFloatingPoint(auVar51,auVar48);
      auVar48 = vectorConditionalSelect(auVar48,auVar51,auVar45);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar48,auVar49);
      auVar46 = vectorMultiplyAddFloatingPoint(auVar47,auVar48,auVar50);
      auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x238,uVar29
                         );
      *(undefined4 *)((int)pvVar8 + 0x238U & 0xfffffffc) = uVar12;
      uVar12 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x23c,uVar29
                         );
      *(undefined4 *)((int)pvVar8 + 0x23cU & 0xfffffffc) = uVar12;
    }
    dVar32 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar8 + 0x274) = (float)dVar32;
    moby->state = '\x01';
  }
  else if (bVar2 < 2) {
    if (hero::g_heroStateType == 0x16) {
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      moby->updateDistance = -1;
      auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      *(undefined2 *)((int)pvVar8 + 600) = 0;
      auVar45 = loadVectorLeftIndexed(0x24,0x4333a0);
      auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar45 = vectorMultiplyAddFloatingPoint
                          (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                           auVar46);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      auVar45 = vectorSplatHalfWord(auVar45,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar45,0x25a,uVar29);
      *(undefined2 *)((int)pvVar8 + 0x25a) = uVar11;
      *(undefined4 *)((int)pvVar8 + 0x24c) = 0;
      *(undefined4 *)((int)pvVar8 + 0x248) = 0;
      *(undefined4 *)((int)pvVar8 + 0x26c) = 0;
      *(undefined4 *)((int)pvVar8 + 0x264) = 0;
      *(undefined4 *)((int)pvVar8 + 0x240) = 0;
      if (*(int *)((int)pvVar8 + 0x268) == 0) {
        iVar20 = FUN_0037afa8(lVar16);
        *(int *)((int)pvVar8 + 0x268) = iVar20;
        if (iVar20 != 0) {
          *(undefined4 *)(*(int *)(iVar20 + 0x78) + 0x50) = 1;
        }
      }
      uVar10 = *(uint *)((int)pvVar8 + 0x250);
      if (uVar10 + (((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0)) * -2 == 1) {
        iVar20 = *(int *)((int)pvVar8 + 0x268);
        moby->modeBits = moby->modeBits | MIRROR;
        if (iVar20 != 0) {
          *(ushort *)(iVar20 + 0x34) = *(ushort *)(iVar20 + 0x34) | 0x8000;
        }
      }
      moby->state = '\x02';
    }
  }
  else if (bVar2 < 3) {
    if (hero::g_heroStateType == 0x16) {
      mobyupdate_helpers::M717_00431c90(lVar16);
      mobyupdate_helpers::M717_00432258(lVar16);
      dVar32 = (double)mobyupdate_helpers::M717_00432718(lVar16);
      if (*(int *)((int)pvVar8 + 0x26c) != 0) {
        iVar20 = *(int *)((int)pvVar8 + 0x26c) + 1;
        *(int *)((int)pvVar8 + 0x26c) = iVar20;
        dVar32 = (double)(longlong)(int)(animationSpeed * 17.5);
        puVar13[0x21] = (ulonglong)dVar32;
        if (iVar20 < *(int *)((int)puVar13 + 0x10c)) {
          dVar43 = 0.0;
          sVar21 = *(short *)((int)pvVar8 + 600);
          iVar20 = *(int *)((int)pvVar8 + 0x27c);
          lVar23 = (longlong)sVar21;
          path = *(int **)((int)pvVar8 + 0x244);
          dVar32 = dVar43;
          if (sVar21 < iVar20) {
            do {
              iVar19 = mobyutil::MB_PathStepIndex(path,(int)lVar23,1,1);
              path = *(int **)((int)pvVar8 + 0x244);
              iVar20 = (int)(lVar23 << 4);
              iVar28 = (int)((longlong)iVar19 << 4);
              fVar53 = *(float *)((int)path + iVar20 + 0x14) - *(float *)((int)path + iVar28 + 0x14)
              ;
              fVar4 = *(float *)((int)path + iVar20 + 0x10) - *(float *)((int)path + iVar28 + 0x10);
              iVar20 = *(int *)((int)pvVar8 + 0x27c);
              dVar32 = (double)(float)(dVar32 + (double)SQRT(fVar4 * fVar4 + fVar53 * fVar53));
              lVar23 = (longlong)iVar19;
            } while (iVar19 < iVar20);
            sVar21 = *(short *)((int)pvVar8 + 600);
          }
          fVar7 = DAT_0071f418;
          fVar53 = (float)(dVar32 / (double)*(float *)((int)pvVar8 + 0x240));
          fVar4 = (float)path[iVar20 * 4 + 6];
          fVar6 = *(float *)((int)path + (int)((longlong)sVar21 << 4) + 0x18);
          fVar5 = DAT_0071f418 * 21.0;
          uVar10 = (int)*(uint *)((int)pvVar8 + 0x24c) >> 0x1f;
          if ((int)((uVar10 >> 1 ^ *(uint *)((int)pvVar8 + 0x24c)) - uVar10) < 0) {
            *(float *)((int)pvVar8 + 0x24c) = (float)dVar43;
          }
          fVar53 = mobyutil::Delt(fVar5 * fVar53 * 0.5 + (fVar4 - fVar6) / fVar53,fVar7 * 110.0,
                                  (float *)((int)pvVar8 + 0x24c));
          dVar32 = (double)fVar53;
        }
      }
      mobyupdate_helpers::M717_00432a70(dVar32,lVar16);
      mobyupdate_helpers::M717_00431a30(lVar16,*(undefined2 *)((int)pvVar8 + 600),uVar15 - 0x140);
      fVar53 = *(float *)(puVar13 + 0xe) - (moby->pos).x;
      fVar4 = *(float *)((int)puVar13 + 0x74) - (moby->pos).y;
      fVar5 = ABS(fVar53);
      fVar6 = ABS(fVar4);
      *(float *)(puVar13 + 0x16) = fVar53;
      *(float *)((int)puVar13 + 0xb4) = fVar4;
      *(float *)(puVar13 + 0x17) = fVar5 - fVar6;
      dVar32 = 0.0;
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1d) & 4;
      fVar53 = ABS(*(float *)(puVar13 + 0x16));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar53 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar13 + 0xb4));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      dVar43 = dVar32;
      if (0.0 < fVar53) {
        lVar23 = uVar15 - 0x1a0;
        lVar26 = uVar15 - 0xe8;
        lVar30 = uVar15 - 0xd8;
        lVar31 = 2;
        fVar53 = (fVar7 - fVar53) / (fVar7 + fVar53);
        fVar5 = fVar53 * fVar53;
        *(float *)((int)puVar13 + 0xd4) = fVar53;
        *(float *)((int)puVar13 + 0xcc) = fVar53;
        *(float *)(puVar13 + 0x1a) = fVar53;
        *(float *)(puVar13 + 0x19) = fVar53;
        fVar53 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar5;
        *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar53;
        *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar53 * fVar5;
        do {
          *(float *)((int)lVar23 + 200) = *(float *)((int)lVar23 + 0xb8) * fVar53 * fVar53;
          iVar20 = (int)lVar26;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar20 + 4) * fVar53 * fVar53;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar15 - 0xe8;
        pfVar24 = (float *)&DAT_007358e0;
        lVar23 = lVar17;
        lVar26 = lVar30;
        do {
          fVar53 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar23 + 200) = *(float *)((int)lVar23 + 200) * fVar53;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar23 = 2;
        do {
          iVar20 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar28 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar20 + 200)) +
                            *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                           *(float *)(iVar28 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar43 = (double)((float)(dVar43 + 0.7853981852531433) * fVar6 + fVar4);
      }
      dVar40 = 0.30000001192092896;
      mobyutil::AccelDeltAng
                (dVar43,(double)(DAT_0071f40c * 0.035),(double)(DAT_0071f40c * 0.3),
                 (double)(mobyutil::g_FrameTime * 6.981317),lVar16 + 0x48,&DAT_00720000,
                 uVar29 + 0x248);
      fVar53 = *(float *)(puVar13 + 0xf);
      fVar4 = *(float *)((int)pvVar8 + 0x208);
      if (*(float *)((int)pvVar8 + 0x208) < fVar53 - 5.0) {
        *(float *)((int)pvVar8 + 0x208) = fVar53;
        fVar4 = fVar53;
      }
      fVar53 = (moby->rotation).z;
      dVar39 = 3.141592502593994;
      fVar5 = fVar53 + 1.5707963;
      dVar38 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar43 = 2.601886990305502e-06;
      fVar6 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar6 = fVar5;
      }
      fVar7 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar6 = 3.1415925 - fVar53;
      if (fVar53 - (3.1415925 - fVar53) < 0.0) {
        fVar6 = fVar53;
      }
      fVar5 = fVar7 * fVar7;
      fVar14 = -3.1415925 - fVar53;
      if ((-3.1415925 - fVar53) - fVar6 < 0.0) {
        fVar14 = fVar6;
      }
      fVar53 = fVar5 * fVar5 * fVar7;
      fVar6 = fVar5 * fVar53;
      dVar44 = (double)((fVar5 * fVar6 * 2.601887e-06 +
                        fVar6 * -0.0001980741 +
                        fVar53 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) *
                       *(float *)((int)pvVar8 + 0x240));
      fVar6 = fVar14 * fVar14;
      *(float *)((int)pvVar8 + 0x208) = fVar4;
      *(float *)((int)pvVar8 + 0x200) = (float)((double)*(float *)((int)pvVar8 + 0x200) + dVar44);
      fVar53 = fVar6 * fVar6 * fVar14;
      fVar4 = fVar6 * fVar53;
      dVar41 = (double)((fVar6 * fVar4 * 2.601887e-06 +
                        fVar4 * -0.0001980741 +
                        fVar53 * 0.0083330255 + fVar6 * fVar14 * -0.16666657 + fVar14) *
                       *(float *)((int)pvVar8 + 0x240));
      *(float *)((int)pvVar8 + 0x204) = (float)((double)*(float *)((int)pvVar8 + 0x204) + dVar41);
      *(undefined4 *)(puVar13 + 0x13) = 0;
      *(float *)((int)puVar13 + 0x9c) = (float)in_f29;
      *(float *)(puVar13 + 0x12) = (float)(dVar44 * 4.0);
      *(float *)((int)puVar13 + 0x94) = (float)(dVar41 * 4.0);
      *(float *)(puVar13 + 0x12) = (float)(dVar44 * 4.0) + *(float *)((int)pvVar8 + 0x200);
      *(float *)((int)puVar13 + 0x94) = (float)(dVar41 * 4.0) + *(float *)((int)pvVar8 + 0x204);
      *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)((int)pvVar8 + 0x208);
      dVar34 = 1.0;
      lVar17 = lVar16;
      iVar20 = collproc::CollMobySphere(0x3ff0000000000000,uVar15 - 0x120,&DAT_004333a0,0,lVar16,0);
      if (iVar20 != 0) {
        *(float *)((int)puVar13 + 0xac) = (float)in_f29;
        *(undefined4 *)(puVar13 + 0x15) = 0;
        *(float *)(puVar13 + 0x14) = (float)(dVar44 * 7.0);
        *(float *)((int)puVar13 + 0xa4) = (float)(dVar41 * 7.0);
        if (0 < iVar20) {
          puVar27 = &DAT_00a14a00;
          iVar28 = 0;
          do {
            bVar22 = mobyutil::MB_isCrate(*puVar27);
            if (bVar22) {
              mobyutil::CollDamageMobyDirect
                        ((float)dVar34,(MobyInstance *)*puVar27,moby,0x30000,(int)lVar17,
                         (float *)((int)pvVar8 + 0x200),(float *)(puVar13 + 0x14));
            }
            iVar28 = iVar28 + 1;
            puVar27 = puVar27 + 1;
          } while (iVar28 < iVar20);
        }
      }
      dVar42 = 0.5;
      dVar41 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar29 + 0x200,0);
      dVar34 = (double)*(float *)((int)pvVar8 + 0x208);
      dVar44 = (double)(float)(dVar34 - dVar41);
      if ((dVar32 < dVar44) || (0 < *(int *)((int)pvVar8 + 0x24c))) {
        dVar33 = -(double)(DAT_0071f418 * 21.0 - *(float *)((int)pvVar8 + 0x24c));
        *(float *)((int)pvVar8 + 0x24c) = (float)dVar33;
      }
      else {
        dVar33 = (double)*(float *)((int)pvVar8 + 0x24c);
        if (ABS(dVar44) < dVar42) {
          *(undefined4 *)((int)pvVar8 + 0x24c) = 0;
          *(undefined4 *)((int)pvVar8 + 0x26c) = 0;
          dVar34 = dVar41;
          dVar33 = dVar32;
        }
      }
      *(float *)((int)pvVar8 + 0x208) = (float)(dVar34 + dVar33);
      iVar19 = fastfunc::FastDecTimerS16(uVar29 + 0x25a);
      iVar28 = DAT_0096a5a0;
      iVar20 = g_RaceTime;
      fVar53 = mobyutil::g_FrameTime;
      if (iVar19 == 0) {
        mobyutil::Delt(*(float *)((int)pvVar8 + 0x23c),DAT_0071f418 * 20.0,
                       (float *)((int)pvVar8 + 0x240));
      }
      else {
        fVar4 = *(float *)((int)pvVar8 + 0x238);
        if (dVar41 - (double)*(float *)((int)pvVar8 + 0x208) < 0.0) {
          fVar4 = mobyutil::g_FrameTime * 19.0;
        }
        puVar13[0x21] = (longlong)(int)(animationSpeed * 700.5);
        if (iVar20 < *(int *)((int)puVar13 + 0x10c)) {
          fVar4 = fVar53 * 3.0 + fVar4;
        }
        fVar6 = fVar53 + fVar4;
        if ((short)(&DAT_0096a4a0)[*(int *)((int)pvVar8 + 0x250)] < iVar28) {
          fVar6 = -(fVar53 * 1.5 - fVar4);
        }
        if (*(float *)((int)pvVar8 + 0x240) <= fVar6) {
          mobyutil::Delt(fVar6,DAT_0071f418 * 15.0,(float *)((int)pvVar8 + 0x240));
        }
        else {
          mobyutil::Delt(fVar6,DAT_0071f418 * 7.0,(float *)((int)pvVar8 + 0x240));
        }
      }
      if ((dVar44 < 0.20000000298023224) && (*(int *)((int)pvVar8 + 0x24c) < 0)) {
        *(float *)((int)pvVar8 + 0x208) = (float)dVar41;
        *(undefined4 *)((int)pvVar8 + 0x26c) = 0;
      }
      mobyutil::MB_SetScaleCheat(0x4008000000000000,uVar29 + 0x180);
      fVar53 = *(float *)((int)pvVar8 + 0x248);
      fVar4 = mobyutil::g_FrameTime * 2.6179938;
      dVar32 = (double)DAT_0071f40c;
      if ((fVar53 <= fVar4) && (fVar4 = fVar53, fVar53 < mobyutil::g_FrameTime * -2.6179938)) {
        fVar4 = mobyutil::g_FrameTime * -2.6179938;
      }
      if ((moby->modeBits & MIRROR) != NONE) {
        fVar4 = -fVar4;
      }
      *(float *)((int)pvVar8 + 0x1e8) = fVar4 * 30.0;
      *(float *)((int)pvVar8 + 0x68) = fVar4 * 20.0;
      *(float *)((int)pvVar8 + 0x168) = fVar4 * 50.0;
      *(float *)((int)pvVar8 + 0xe4) = fVar4 * 40.0;
      dVar34 = 0.019999999552965164;
      mobyutil::MB_UpdateManipulatorRot
                ((double)(float)(dVar32 * 0.019999999552965164),(double)(float)(dVar32 * dVar40),
                 lVar16,uVar29 + 0x180,3);
      mobyutil::MB_UpdateManipulatorRot
                ((double)(float)((double)DAT_0071f40c * dVar34),
                 (double)(float)((double)DAT_0071f40c * dVar40),lVar16,uVar29,0);
      mobyutil::MB_UpdateManipulatorRot
                ((double)(float)((double)DAT_0071f40c * dVar34),
                 (double)(float)((double)DAT_0071f40c * dVar40),lVar16,uVar29 + 0x100,1);
      mobyutil::MB_UpdateManipulatorRot
                ((double)(float)((double)DAT_0071f40c * 0.014999999664723873),
                 (double)(float)((double)DAT_0071f40c * dVar40),lVar16,uVar29 + 0x80,2);
      (moby->pos).x = *(f32 *)((int)pvVar8 + 0x200);
      (moby->pos).y = *(f32 *)((int)pvVar8 + 0x204);
      fVar53 = *(float *)((int)pvVar8 + 0x208);
      (moby->pos).z = fVar53;
      (moby->pos).w = *(f32 *)((int)pvVar8 + 0x20c);
      (moby->pos).z = fVar53 + 0.25;
      dVar40 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar8 + 0x274),mobyutil::g_FrameTime * 6.108652);
      *(float *)((int)pvVar8 + 0x274) = (float)dVar40;
      dVar32 = (double)(float)(dVar39 - dVar40);
      if (dVar40 - (double)(float)(dVar39 - dVar40) < 0.0) {
        dVar32 = dVar40;
      }
      dVar39 = (double)(float)(dVar38 - dVar40);
      if ((double)(float)(dVar38 - dVar40) - dVar32 < 0.0) {
        dVar39 = dVar32;
      }
      uVar18 = *(undefined8 *)&moby->color;
      iVar20 = *(int *)((int)pvVar8 + 0x268);
      dVar32 = (double)(float)(dVar39 * dVar39);
      dVar38 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar39));
      dVar40 = (double)(float)(dVar32 * dVar38);
      (moby->pos).z =
           (float)((double)(float)(dVar32 * dVar40) * dVar43 +
                  (double)(float)(dVar40 * dVar35 +
                                 (double)(float)(dVar38 * dVar36 +
                                                (double)(float)((double)(float)(dVar32 * dVar39) *
                                                                dVar37 + dVar39)))) * 0.08 +
           (moby->pos).z;
      if (iVar20 != 0) {
        *(undefined8 *)(iVar20 + 0x38) = uVar18;
        iVar20 = *(int *)((int)pvVar8 + 0x268);
        *(f32 *)(iVar20 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar20 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar20 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar20 + 0x1c) = (moby->pos).w;
        iVar20 = *(int *)((int)pvVar8 + 0x268);
        *(f32 *)(iVar20 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar20 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar20 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar20 + 0x4c) = (moby->rotation).w;
        if (*(short *)((int)pvVar8 + 0x25a) != 0) {
          *(undefined1 *)(*(int *)((int)pvVar8 + 0x268) + 0xbc) = 1;
        }
      }
    }
    else {
      moby->state = '\0';
    }
  }
  return;
}



//==== 00434458  ns=mobyupdate_helpers  size=0x14
// sig: undefined M721_00434458(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M721_00434458(void)

{
  DAT_00859f88 = 0x10000;
  return;
}



//==== 004344a0  ns=mobyupdate_unsorted  size=0x3e4
// sig: undefined UpdateMoby_721(MobyInstance * moby)
// callers(0): 
// callees(3): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001206e8 partupd::SpawnPart_2

/* Moby 721 */

void mobyupdate_unsorted::UpdateMoby_721(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 local_c0 [16];
  undefined1 local_b0 [40];
  
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (iVar2 = 0, 0 < DAT_00859fdc)) {
    dVar4 = 0.0;
    dVar5 = 1.0;
    dVar6 = 0.5;
    do {
      if (iVar2 != 0) {
        mobyutil::MB_randRangeFloat((float)dVar4,(float)dVar5);
      }
      iVar1 = mobyutil::MB_randInt(2);
      uVar3 = DAT_00859fb8;
      if (iVar1 != 0) {
        uVar3 = DAT_00859fb4;
      }
      mobyutil::MB_randInt(2);
      partupd::SpawnPart_2
                (local_b0,local_c0,local_c0,uVar3,uVar3,
                 (int)(animationSpeed * (float)((double)(longlong)DAT_00859fc8 + dVar6)),
                 (int)(animationSpeed * (float)((double)(longlong)DAT_00859fcc + dVar6)),
                 (int)(animationSpeed * (float)((double)(longlong)DAT_00859fd0 + dVar6)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00859fdc);
  }
  return;
}



//==== 00434898  ns=Global  size=0x1c0
// sig: undefined FUN_00434898(void)
// callers(2): 0038f550 mobyupdate_unsorted::UpdateMoby_459; 0046aec0 mobyupdate_unsorted::UpdateMoby_808
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcc68 mobyutil::MB_randRot; 00127ea8 partupd::SpawnPart_26

MobyInstance *
FUN_00434898(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 in_stack_00000074;
  
  pMVar3 = mobyfunc::CreateMoby(0x2d2);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->drawDistance = 0x7f;
    fVar1 = pMVar3->scale;
    puVar2[4] = param_1;
    pMVar3->updateDistance = '\x7f';
    pMVar3->enabled = '\x01';
    pMVar3->scale = fVar1 * 0.5;
    mobyfunc::SetColorOfMoby(pMVar3,0x7f,0x7f,0x7f);
    dVar4 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).x = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).y = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).z = (float)dVar4;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    uStack00000054 = (undefined4)param_5;
    uStack0000005c = (undefined4)param_6;
    puVar2[5] = in_stack_00000074;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    uStack00000050 = (undefined4)((ulonglong)param_5 >> 0x20);
    uStack00000058 = (undefined4)((ulonglong)param_6 >> 0x20);
    *puVar2 = uStack00000050;
    puVar2[1] = uStack00000054;
    puVar2[2] = uStack00000058;
    puVar2[3] = uStack0000005c;
    partupd::SpawnPart_26(0x4109a28000000000,pMVar3);
    partupd::SpawnPart_26(0x40fc32c000000000,pMVar3);
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 00434a88  ns=mobyupdate_helpers  size=0x3d4
// sig: undefined M722_00434a88(void)
// callers(1): 00434e70 mobyupdate_unsorted::UpdateMoby_722
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00123390 partupd::SpawnPart_11; 0015d12c sound::PlayMobySound; 001d4d88 FUN_001d4d88; 003fda38 FUN_003fda38

uint mobyupdate_helpers::M722_00434a88
               (double param_1,double param_2,MobyInstance *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
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
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined1 local_100 [16];
  undefined4 local_f0 [12];
  longlong local_c0;
  
  dVar10 = 0.0;
  iVar7 = 0;
  dVar11 = 8.0;
  dVar12 = 10.0;
  dVar13 = (double)(float)(param_1 * 400000.0);
  dVar14 = 15.5;
  dVar15 = 20.5;
  dVar16 = 25.5;
  dVar17 = 30.5;
  uStack00000040 = param_5;
  uStack00000048 = param_6;
  do {
    dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    local_f0[0] = 0x4f008fff;
    local_f0[1] = 0x4f008fff;
    local_f0[3] = 0x4f006fff;
    dVar9 = (double)(float)(dVar8 * (double)mobyutil::g_FrameTime);
    local_f0[2] = 0x4f007fff;
    local_f0[4] = 0x2fffffff;
    local_f0[5] = 0x2fffffff;
    local_f0[6] = 0x2f005f7f;
    local_f0[7] = 0x2f004f7f;
    local_f0[8] = 0x2f003f7f;
    local_f0[9] = 0x2f00004f;
    local_f0[10] = 0x2f000000;
    local_f0[0xb] = 0x3f000000;
    lVar5 = mobyutil::MB_randInt(dVar8,(double)mobyutil::g_FrameTime,6);
    uVar3 = *(undefined4 *)((int)local_f0 + (int)(lVar5 << 2));
    lVar5 = mobyutil::MB_randInt(6);
    uVar4 = *(undefined4 *)((int)local_f0 + (int)(lVar5 << 2) + 0x18);
    iVar1 = (int)((double)animationSpeed * dVar15);
    local_c0 = (longlong)iVar1;
    mobyutil::MB_randRange((int)((double)animationSpeed * dVar14),iVar1);
    iVar1 = (int)((double)animationSpeed * dVar17);
    local_c0 = (longlong)iVar1;
    mobyutil::MB_randRange((int)((double)animationSpeed * dVar16),iVar1);
    uVar6 = partupd::SpawnPart_11
                      (dVar13,(double)(float)(dVar9 * param_1),&stack0x00000040,local_100,uVar3,
                       uVar4);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  if (param_3 != (MobyInstance *)0x0) {
    local_c0 = (longlong)(int)((double)animationSpeed * dVar15);
    FUN_001d4d88((double)(float)(param_1 * 2.0),param_3,&stack0x00000040,local_100,0x30,
                 (int)((double)animationSpeed * dVar15),0x7f,0,0x40);
    local_c0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88((double)(float)(param_1 * 1.5),param_3,&stack0x00000040,local_100);
    bVar2 = param_3->state;
    uVar6 = (uint)bVar2;
    if ((bVar2 != 0xfd && bVar2 != 0xfe) && (param_8 != -1)) {
      uVar6 = sound::PlayMobySound(param_8,0,param_3);
    }
  }
  if (param_2 != dVar10) {
    dVar11 = 13.0;
    if (dVar10 - param_2 < 0.0) {
      dVar11 = param_2;
    }
    DAT_0085a004 = (float)dVar11;
    DAT_0085a008 = (float)dVar11;
    DAT_0085a000 = (float)dVar11;
    uVar6 = FUN_003fda38(&DAT_00859fe0,&stack0x00000040,0,0);
  }
  return uVar6;
}



//==== 00434e70  ns=mobyupdate_unsorted  size=0x300
// sig: undefined UpdateMoby_722(MobyInstance * moby)
// callers(0): 
// callees(5): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 00434a88 mobyupdate_helpers::M722_00434a88; 004fff60 fastfunc::FastDecTimerS32

/* Moby 722 */

void mobyupdate_unsorted::UpdateMoby_722(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  
  lVar6 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  pfVar1[2] = pfVar1[2] - 2.0 / (animationSpeed * 10.0 * animationSpeed * 10.0);
  fVar2 = (moby->pos).x + *pfVar1;
  (moby->pos).x = fVar2;
  fVar3 = (moby->pos).y + pfVar1[1];
  (moby->pos).y = fVar3;
  fVar4 = (moby->pos).z + pfVar1[2];
  (moby->pos).z = fVar4;
  uVar9 = 0;
  if (((fVar3 < 0.0 || fVar2 < 0.0) || (fVar4 < 0.0)) ||
     (64.0 < SQRT((fVar2 - GameCamera.posX) * (fVar2 - GameCamera.posX) +
                  (fVar3 - GameCamera.posY) * (fVar3 - GameCamera.posY)))) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  iVar7 = fastfunc::FastDecTimerS32(pfVar1 + 5);
  if (iVar7 != 0) {
    mobyupdate_helpers::M722_00434a88(0x3fe0000000000000,uVar9,lVar6);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  iVar7 = collproc::CollLine(local_70,lVar6 + 0x10,0,pfVar1[4],local_60);
  fVar2 = CollOutput.ip.x;
  if (iVar7 != 0) {
    (moby->pos).x = CollOutput.ip.x;
    fVar3 = CollOutput.ip.y;
    (moby->pos).y = CollOutput.ip.y;
    fVar4 = CollOutput.ip.z;
    (moby->pos).z = CollOutput.ip.z;
    fVar5 = CollOutput.ip.w;
    (moby->pos).w = CollOutput.ip.w;
    mobyupdate_helpers::M722_00434a88
              (0x3fe0000000000000,uVar9,lVar6,&DAT_00434e5c,CONCAT44(fVar2,fVar3),
               CONCAT44(fVar4,fVar5));
    mobyfunc::DeleteMoby(moby);
    return;
  }
  uVar8 = 0x3fe0000000000000;
  iVar7 = collproc::CollMobySphere
                    (0x3fe0000000000000,lVar6 + 0x10,&DAT_00434e5c,0x10,pfVar1[4],local_60);
  if (iVar7 == 0) {
    return;
  }
  mobyupdate_helpers::M722_00434a88(uVar8,uVar9,lVar6);
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 00435170  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1141_00435170(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1141_00435170(void)

{
  DAT_0085a07c = 0x10000;
  return;
}



//==== 004351b8  ns=mobyupdate_unsorted  size=0x964
// sig: undefined UpdateMoby_{726_1082_1141}(MobyInstance * moby)
// callers(0): 
// callees(9): 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 00117c60 mobyutil::MB_HeroStandingOnMoby; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 726
   Moby 1082
   Moby 1141 */

void mobyupdate_unsorted::UpdateMoby__726_1082_1141_(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  ushort uVar8;
  void *pvVar9;
  u16 *puVar10;
  Spline *pSVar11;
  uint uVar12;
  undefined2 uVar13;
  Vec4 *pVVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  bool bVar18;
  int iVar19;
  uint32_t uVar20;
  longlong lVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  Vec4 local_60;
  
  pvVar9 = moby->pVar;
  uVar22 = ZEXT48(pvVar9);
  bVar18 = false;
  if (*(int *)((int)pvVar9 + 0xb4) == -1) {
    return;
  }
  pSVar11 = Splines[*(int *)((int)pvVar9 + 0xb4)];
  if (*(int *)((int)pvVar9 + 0xcc) != -1) {
    iVar19 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xcc));
    if (iVar19 == 0) {
      moby->updateDistance = -1;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      return;
    }
    iVar19 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xcc));
    if (iVar19 != 0) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      puVar10 = moby->pClass->collision;
      *(undefined4 *)((int)pvVar9 + 0xcc) = 0xffffffff;
      moby->collision = puVar10;
    }
  }
  if ((((*(int *)((int)pvVar9 + 0xc0) == -1) ||
       (iVar19 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xc0)),
       iVar19 != 0)) || (uVar8 = moby->uid, (&DAT_00a545c4)[(short)uVar8] != '\0')) ||
     ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar8 >> 5) << 2)) &
      1 << (uVar8 & 0x1f)) != 0)) {
    if (*(int *)((int)pvVar9 + 0xc0) != -1) {
      uVar8 = moby->uid;
      iVar17 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      iVar19 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      uVar12 = *(uint *)(&DAT_00a54dd0 + iVar19);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar17) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar17) | 1 << (uVar8 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar19) = uVar12 | 1 << (uVar8 & 0x1f);
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0xffffffff;
    }
    bVar18 = true;
  }
  dVar25 = (double)(moby->pos).x;
  dVar26 = (double)(moby->pos).y;
  dVar27 = (double)(moby->pos).z;
  fastfunc::FastDecTimerS16(uVar22 + 0xba);
  if (moby->state == '\0') {
    uVar12 = *(uint *)((int)pvVar9 + 0xa0);
    uVar2 = 0;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0;
    *(undefined2 *)((int)pvVar9 + 0x24) = 0;
    *(undefined1 *)((int)pvVar9 + 0x28) = 4;
    *(undefined2 *)((int)pvVar9 + 0x3e) = 5;
    moby->setByGroup = (char)uVar12;
    if ((uVar12 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    lVar21 = 0;
    *(undefined4 *)((int)pvVar9 + 0xa4) = uVar2;
    iVar19 = fastfunc::FastDoubleToInt();
    if (iVar19 != 0) {
      lVar21 = (ulonglong)(uint)pSVar11->cnt - 1;
    }
    iVar19 = (int)(lVar21 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar11->points[0].x + iVar19);
    (moby->pos).y = *(f32 *)((int)&pSVar11->points[0].y + iVar19);
    (moby->pos).z = *(f32 *)((int)&pSVar11->points[0].z + iVar19);
    (moby->pos).w = *(f32 *)((int)&pSVar11->points[0].w + iVar19);
    *(undefined2 *)((int)pvVar9 + 0xba) = 0;
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar9 + 0xbc) = 0;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 == 0) {
    if ((bVar18) &&
       (((*(short *)((int)pvVar9 + 0xb8) != 0 &&
         (uVar20 = mobyutil::MB_HeroStandingOnMoby(moby), uVar20 != 0)) ||
        (pVVar14 = pSVar11->points + pSVar11->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar11->points[0].y, fVar4 = g_heroPosition.y - pVVar14->y,
        fVar5 = g_heroPosition.x - pVVar14->x, fVar6 = g_heroPosition.x - pSVar11->points[0].x,
        fVar15 = g_heroPosition.z - pVVar14->z, fVar16 = g_heroPosition.z - pSVar11->points[0].z,
        SQRT(fVar16 * fVar16 + fVar6 * fVar6 + fVar3 * fVar3) <
        SQRT(fVar15 * fVar15 + fVar5 * fVar5 + fVar4 * fVar4))))) {
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
      *(float *)((int)pvVar9 + 0xac) = -1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 2) {
    if ((bVar18) &&
       (((*(short *)((int)pvVar9 + 0xb8) != 0 &&
         (uVar20 = mobyutil::MB_HeroStandingOnMoby(moby), uVar20 != 0)) ||
        (pVVar14 = pSVar11->points + pSVar11->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar11->points[0].y,
        fVar5 = g_heroPosition.x - pSVar11->points[0].x, fVar4 = g_heroPosition.y - pVVar14->y,
        fVar6 = g_heroPosition.x - pVVar14->x, fVar15 = g_heroPosition.z - pSVar11->points[0].z,
        fVar16 = g_heroPosition.z - pVVar14->z,
        SQRT(fVar16 * fVar16 + fVar6 * fVar6 + fVar4 * fVar4) <
        SQRT(fVar15 * fVar15 + fVar5 * fVar5 + fVar3 * fVar3))))) {
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
      *(float *)((int)pvVar9 + 0xac) = 1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 3) {
    if ((*(int *)((int)pvVar9 + 200) == 0) &&
       (uVar20 = mobyutil::MB_HeroStandingOnMoby(moby), uVar20 != 0)) {
      DAT_00969ed2 = 4;
      DAT_00969ed4 = 4;
    }
    if (*(short *)((int)pvVar9 + 0xba) == 0) {
      dVar24 = 0.0;
      if ((((-1 < *(int *)((int)pvVar9 + 0xbc)) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           2.83 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
          (fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3))) ||
         (fVar3 - g_heroPosition.z <= 0.9)) {
        iVar19 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar9 + 0xc4));
        if (iVar19 == 0) {
          iVar19 = sound::PlayMobySound(0,4,moby);
          *(int *)((int)pvVar9 + 0xc4) = iVar19;
        }
        fVar3 = *(float *)((int)pvVar9 + 0xac);
        fVar4 = fVar3 * mobyutil::g_FrameTime + *(float *)((int)pvVar9 + 0xa8);
        *(float *)((int)pvVar9 + 0xa8) = fVar4;
        if (ABS(fVar3) < ABS(fVar4)) {
          *(float *)((int)pvVar9 + 0xa8) = fVar3;
          fVar4 = fVar3;
        }
        fVar4 = *(float *)((int)pvVar9 + 0xa4) + fVar4;
        *(float *)((int)pvVar9 + 0xa4) = fVar4;
        if (0.5 < ABS(fVar4 - 0.5)) {
          if (*(int *)((int)pvVar9 + 0xac) < 1) {
            moby->setByGroup = '\x01';
          }
          else {
            moby->setByGroup = '\0';
            dVar24 = 1.0;
          }
          *(float *)((int)pvVar9 + 0xa4) = (float)dVar24;
          auVar28 = ZEXT416(0xffffffff);
          auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
          auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar28 = loadVectorLeftIndexed(0x24,0x435188);
          auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar19 = *(int *)((int)pvVar9 + 0xc4);
          auVar28 = vectorMultiplyAddFloatingPoint
                              (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60
                               ,auVar29);
          auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
          auVar28 = vectorSplatHalfWord(auVar28,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar28,0xba,uVar22);
          *(undefined2 *)((int)pvVar9 + 0xba) = uVar13;
          if (((iVar19 != -1) && (sound::g_SoundChannels[iVar19].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar19].state != '\0')) {
            sound::sound_Kill(iVar19);
          }
          *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
        }
        dVar24 = (double)fastfunc::FastIntToDouble(pSVar11->cnt + -1);
        lVar21 = fastfunc::FastDoubleToInt
                           ((double)(float)(dVar24 * (double)*(float *)((int)pvVar9 + 0xa4)));
        dVar24 = (double)fastfunc::FastIntToDouble();
        dVar23 = (double)fastfunc::FastIntToDouble(pSVar11->cnt + -1);
        fVar3 = (float)(dVar23 * (double)*(float *)((int)pvVar9 + 0xa4) - dVar24);
        iVar19 = (int)(lVar21 << 4);
        if ((int)lVar21 == pSVar11->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar11->points[0].x + iVar19);
          fVar5 = *(float *)((int)&pSVar11->points[0].y + iVar19);
          fVar6 = *(float *)((int)&pSVar11->points[0].z + iVar19);
          fVar7 = *(f32 *)((int)&pSVar11->points[0].w + iVar19);
        }
        else {
          fVar4 = *(float *)((int)&pSVar11->points[0].x + iVar19);
          fVar5 = *(float *)((int)&pSVar11->points[0].y + iVar19);
          fVar6 = *(float *)((int)&pSVar11->points[0].z + iVar19);
          fVar7 = *(f32 *)((int)&pSVar11->points[1].w + iVar19);
          fVar4 = fVar3 * (*(float *)((int)&pSVar11->points[1].x + iVar19) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar11->points[1].y + iVar19) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar11->points[1].z + iVar19) - fVar6) + fVar6;
        }
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar7;
        *(float *)((int)pvVar9 + 0xbc) = (float)((double)fVar6 - dVar27);
        goto LAB_00435a34;
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(0x1c,0x435188);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                           auVar29);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = vectorSplatHalfWord(auVar28,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar28,0xba,uVar22);
      *(undefined2 *)((int)pvVar9 + 0xba) = uVar13;
    }
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    iVar19 = *(int *)((int)pvVar9 + 0xc4);
    if (((iVar19 != -1) && (sound::g_SoundChannels[iVar19].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar19].state != '\0')) {
      sound::sound_Kill(iVar19);
    }
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
  }
LAB_00435a34:
  local_60.x = (float)((double)(moby->pos).x - dVar25);
  local_60.y = (float)((double)(moby->pos).y - dVar26);
  local_60.w = (moby->pos).w;
  local_60.z = (float)((double)(moby->pos).z - dVar27);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x60),&local_60,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  uVar20 = mobyutil::MB_HeroStandingOnMoby(moby);
  if (((uVar20 == 0) &&
      (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) && (*(short *)((int)pvVar9 + 0xba) == 0)) {
    *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
  }
  return;
}



//==== 00435b1c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1141_00435b1c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1141_00435b1c(void)

{
  DAT_0085a0ec = 0x10000;
  return;
}



//==== 00435b88  ns=mobyupdate_unsorted  size=0x750
// sig: undefined UpdateMoby_729(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 00126dd8 partupd::SpawnPart_22; 0015d12c sound::PlayMobySound; 00425540 FUN_00425540

/* Moby 729 */

void mobyupdate_unsorted::UpdateMoby_729(MobyInstance *moby)

{
  float fVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  longlong lVar5;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
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
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined4 local_120 [4];
  ulonglong local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  longlong local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  
  uVar2 = moby->uid;
  if (((&DAT_00a545c4)[(short)uVar2] == '\0') &&
     (local_110 = ZEXT48(&DAT_00a0cd1c),
     (*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
     1 << (uVar2 & 0x1f)) == 0)) {
    iVar6 = mobyutil::MB_damage(moby,0x800000,0);
    if (iVar6 != 0) {
      sound::PlayMobySound(0,0,moby);
      iVar6 = 0;
      dVar27 = 0.0;
      dVar25 = -1.0;
      dVar26 = 1.0;
      dVar19 = 3.141592502593994;
      dVar20 = -3.141592502593994;
      dVar21 = -0.16666656732559204;
      dVar22 = 0.008333025500178337;
      dVar23 = -0.0001980741071747616;
      dVar24 = 2.601886990305502e-06;
      local_f0 = -4.0;
      local_f8 = 4.0;
      local_100 = 1.570796251296997;
      dVar31 = 1.5;
      dVar30 = 3.5;
      dVar29 = 210000.0;
      dVar28 = 0.5;
      local_108 = 8.0;
      do {
        mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
        mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
        mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
        mobyutil::MB_randRangeFloat((float)local_f0,(float)local_f8);
        mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
        mobyutil::MB_randRangeFloat((float)dVar27,(float)local_108);
        mobyutil::MB_randRangeFloat((float)dVar31,(float)dVar30);
        dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar31,(float)dVar30);
        dVar8 = (double)(float)(dVar8 * dVar29);
        iVar7 = mobyutil::MB_randRange(0x78,0xf0);
        local_e8 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar7 + dVar28));
        partupd::SpawnPart_22(dVar8,local_130,local_140,0x5f787878,0x181818);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 500);
      iVar6 = 0;
      dVar28 = 5.0;
      dVar29 = 0.05000000074505806;
      uVar18 = 0x3fe8000000000000;
      fVar1 = 0.15;
      do {
        dVar17 = (double)fVar1;
        dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
        dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
        dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
        dVar10 = (double)mobyutil::MB_randRangeFloat((float)local_f0,(float)local_f8);
        dVar12 = (double)(float)((double)(moby->rotation).z + local_100);
        local_d4 = (float)dVar24;
        dVar30 = (double)(float)(dVar19 - dVar12);
        if (dVar12 - (double)(float)(dVar19 - dVar12) < 0.0) {
          dVar30 = dVar12;
        }
        dVar13 = (double)(float)(dVar20 - dVar12);
        if ((double)(float)(dVar20 - dVar12) - dVar30 < 0.0) {
          dVar13 = dVar30;
        }
        dVar30 = (double)(float)(dVar13 * dVar13);
        dVar16 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar13));
        dVar12 = (double)(float)(dVar30 * dVar16);
        dVar16 = (double)(float)((double)(float)(dVar30 * dVar12) * dVar24 +
                                (double)(float)(dVar12 * dVar23 +
                                               (double)(float)(dVar16 * dVar22 +
                                                              (double)(float)((double)(float)(dVar30
                                                                                             * 
                                                  dVar13) * dVar21 + dVar13))));
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
        dVar13 = (double)(moby->rotation).z;
        local_c4 = (float)dVar19;
        local_d8 = (float)dVar20;
        dVar30 = (double)(float)(dVar19 - dVar13);
        if (dVar13 - (double)(float)(dVar19 - dVar13) < 0.0) {
          dVar30 = dVar13;
        }
        dVar19 = (double)(float)(dVar20 - dVar13);
        if ((double)(float)(dVar20 - dVar13) - dVar30 < 0.0) {
          dVar19 = dVar30;
        }
        local_c8 = (float)dVar21;
        local_cc = (float)dVar22;
        local_d0 = (float)dVar23;
        dVar20 = (double)(float)(dVar19 * dVar19);
        dVar13 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar19));
        dVar30 = (double)(float)(dVar20 * dVar13);
        dVar13 = (double)(float)((double)(float)(dVar20 * dVar30) * dVar24 +
                                (double)(float)(dVar30 * dVar23 +
                                               (double)(float)(dVar13 * dVar22 +
                                                              (double)(float)((double)(float)(dVar20
                                                                                             * 
                                                  dVar19) * dVar21 + dVar19))));
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)local_108);
        dVar30 = (double)(moby->pos).x;
        dVar24 = (double)(moby->pos).y;
        dVar23 = (double)(moby->pos).z;
        dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar28);
        dVar22 = (double)SQRT((float)(dVar9 * dVar9 +
                                     (double)(float)(dVar31 * dVar31 +
                                                    (double)(float)(dVar8 * dVar8))));
        dVar21 = (double)(float)((double)(float)(dVar19 * (double)mobyutil::g_FrameTime) / dVar22);
        dVar19 = dVar27;
        if (dVar27 - dVar22 < 0.0) {
          dVar19 = (double)(float)(dVar9 * dVar21);
        }
        dVar14 = dVar27;
        if (dVar27 - dVar22 < 0.0) {
          dVar14 = (double)(float)(dVar8 * dVar21);
        }
        dVar15 = dVar27;
        if (dVar27 - dVar22 < 0.0) {
          dVar15 = (double)(float)(dVar31 * dVar21);
        }
        if (dVar22 - dVar27 < 0.0) {
          dVar19 = (double)(float)(dVar9 * dVar21);
        }
        if (dVar22 - dVar27 < 0.0) {
          dVar14 = (double)(float)(dVar8 * dVar21);
        }
        if (dVar22 - dVar27 < 0.0) {
          dVar15 = (double)(float)(dVar31 * dVar21);
        }
        lVar5 = mobyutil::MB_randInt(3);
        local_120[2] = 0x2ba;
        local_120[1] = 0x2b9;
        local_120[0] = 0x2b8;
        uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar5 << 2));
        local_c0 = (float)dVar17;
        uVar11 = mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar17);
        mobyutil::MB_randRange(0x3c,0xb4);
        FUN_00425540(uVar11,dVar26,dVar26,uVar18,
                     CONCAT44((float)(dVar10 * dVar16 + dVar30),(float)(dVar12 * dVar13 + dVar24)),
                     CONCAT44((float)(dVar20 + dVar23),(float)dVar27),
                     CONCAT44((float)dVar15,(float)dVar14),CONCAT44((float)dVar19,(float)dVar27),
                     uVar3);
        dVar20 = (double)local_d8;
        iVar6 = iVar6 + 1;
        dVar24 = (double)local_d4;
        dVar23 = (double)local_d0;
        dVar22 = (double)local_cc;
        dVar21 = (double)local_c8;
        dVar19 = (double)local_c4;
        fVar1 = local_c0;
      } while (iVar6 < 100);
      uVar2 = moby->uid;
      iVar6 = (int)((longlong)((int)(short)uVar2 >> 5) << 2) + (int)local_110;
      iVar7 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
      uVar4 = *(uint *)(&DAT_00a54dd0 + iVar7);
      *(uint *)(iVar6 + Level * 0x100) = *(uint *)(iVar6 + Level * 0x100) | 1 << (uVar2 & 0x1f);
      MiscLevelFlags.field14_0xe = 1;
      *(uint *)(&DAT_00a54dd0 + iVar7) = uVar4 | 1 << (uVar2 & 0x1f);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004362d8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M790_004362d8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M790_004362d8(void)

{
  DAT_0085a15c = 0x10000;
  return;
}



//==== 004362f0  ns=mobyupdate_helpers  size=0xdc
// sig: undefined M790_004362f0(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M790_004362f0(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == AGNOGG_BUCKWASH) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}



//==== 004363f0  ns=mobyupdate_unsorted  size=0x1018
// sig: undefined UpdateMoby_{730_731_790}(MobyInstance * moby)
// callers(0): 
// callees(15): 000e8aa4 memcard::memcard_Save; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 00110b70 mobyutil::MB_IsPntInCuboid; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 00151e70 respawn::SetSpawnPoint; 001523d8 respawn::SaveCheckpointMobyVar; 0015e2c4 space::Space_DisableShip; 0015e400 space::Space_EnableShip; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 004fffb4 fastfunc::FastDecTimerS16
// strings: 0096c074: 'None'

/* Moby 730
   Moby 731
   Moby 790 */

void mobyupdate_unsorted::UpdateMoby__730_731_790_(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  int iVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  gameMode_t gVar17;
  MobyInstance *pMVar18;
  Cuboid *pCVar19;
  int iVar20;
  short sVar23;
  longlong lVar21;
  longlong lVar22;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  float *pfVar27;
  float *pfVar28;
  ulonglong unaff_r26;
  undefined4 *puVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar22 = uVar26 - 0x160;
  puVar14 = (ulonglong *)lVar22;
  *puVar14 = uVar26;
  puVar14[0x2e] = in_LR;
  puVar14[0x2b] = unaff_r31;
  puVar14[0x2a] = unaff_r30;
  gVar17 = g_gameMode;
  pfVar27 = (float *)moby->pVar;
  uVar30 = ZEXT48(pfVar27);
  puVar14[0x29] = unaff_r29;
  puVar14[0x28] = unaff_r28;
  puVar14[0x27] = unaff_r27;
  puVar14[0x26] = unaff_r26;
  if ((gVar17 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar20 = 0;
    puVar29 = &DAT_0095cd50;
    sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar29[0x5e])->oClass == AGNOGG_BUCKWASH) && (DAT_00a1bf81 == '\0'))
        {
          mobyfunc::AttachManipulator((MobyInstance *)puVar29[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar20 = iVar20 + 1;
        puVar29 = puVar29 + 1;
      } while (iVar20 < sVar23);
    }
  }
  fastfunc::FastDecTimerS16(uVar30 + 8);
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        moby->updateDistance = -1;
        moby->state = '\x01';
        fVar9 = (moby->pos).z;
        fVar3 = *pfVar27;
        *(undefined2 *)(pfVar27 + 2) = 0;
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        pfVar27[3] = fVar9 - 0.75;
        (moby->pos).z = (moby->pos).z + fVar3;
      }
      else if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        if (moby->animationId != '\x02') {
          puVar14[0x24] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x124));
        }
        moby->state = '\n';
        moby->drawDistance = 0xff;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
      }
      else {
        if ((g_gameMode == GAME_MODE_NORMAL) && (MiscLevelFlags.field15_0xf == 0)) {
          update::mode_sceneInit(5);
          MiscLevelFlags.field15_0xf = 1;
        }
        space::Space_DisableShip();
        iVar20 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar27[4]);
        if (iVar20 != 0) {
          fVar9 = pfVar27[1];
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          moby->collision = moby->pClass->collision;
          pMVar18 = MobyInstance;
          if (fVar9 != -NAN) {
            auVar32 = ZEXT416(0xffffffff);
            auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
            auVar32 = loadVectorLeftIndexed(8,0x4363cc);
            auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar32 = vectorMultiplyAddFloatingPoint
                                (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60,auVar33);
            pvVar10 = MobyInstance[(int)fVar9].pVar;
            auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
            auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar13 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x2c,
                                ZEXT48(pvVar10));
            *(undefined4 *)((int)pvVar10 + 0x2cU & 0xfffffffc) = uVar13;
            pMVar18[(int)pfVar27[1]].setByGroup = '\x01';
            pCVar19 = Cuboids;
            iVar20 = *(int *)((int)pvVar10 + 0x24);
            fVar9 = 0.0;
            Cuboids[iVar20].rot.w = 0.0;
            pCVar19[iVar20].rot.z = 0.0;
            pCVar19[iVar20].rot.y = 0.0;
            pCVar19[iVar20].rot.x = 0.0;
            iVar20 = *(int *)((int)pvVar10 + 0x24);
            *(undefined4 *)((int)pvVar10 + 0x1c) = 0;
            *(undefined4 *)((int)pvVar10 + 0x18) = 0;
            *(undefined4 *)((int)pvVar10 + 0x14) = 0;
            *(undefined4 *)((int)pvVar10 + 0x10) = 0;
            fVar3 = (moby->pos).y;
            fVar4 = (moby->pos).x;
            fVar6 = pCVar19[iVar20].pos.y - fVar3;
            fVar7 = pCVar19[iVar20].pos.x - fVar4;
            fVar5 = (moby->pos).z - pCVar19[iVar20].pos.z;
            fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
            *(float *)(puVar14 + 0x13) = fVar5;
            fVar5 = ABS(fVar5);
            fVar7 = ABS(fVar6);
            *(float *)((int)puVar14 + 0x94) = fVar6;
            *(float *)((int)puVar14 + 0x9c) = fVar7 - fVar5;
            uVar30 = (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1d) & 4;
            fVar6 = ABS(*(float *)((int)puVar14 + 0x94));
            if (*(float *)((int)puVar14 + 0x9c) - 0.0 < 0.0) {
              fVar6 = fVar5;
            }
            fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
            fVar5 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
            fVar15 = ABS(*(float *)(puVar14 + 0x13));
            if (*(float *)((int)puVar14 + 0x9c) - 0.0 < 0.0) {
              fVar15 = fVar7;
            }
            fVar7 = fVar9;
            if (0.0 < fVar6) {
              lVar21 = uVar26 - 0x150;
              lVar24 = uVar26 - 0x60;
              lVar25 = uVar26 - 0x50;
              lVar31 = 2;
              fVar6 = (fVar15 - fVar6) / (fVar15 + fVar6);
              fVar7 = fVar6 * fVar6;
              *(float *)((int)puVar14 + 0x10c) = fVar6;
              *(float *)((int)puVar14 + 0x104) = fVar6;
              *(float *)(puVar14 + 0x21) = fVar6;
              *(float *)(puVar14 + 0x20) = fVar6;
              fVar6 = fVar7 * fVar7;
              *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar7;
              *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar6;
              *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar6 * fVar7;
              do {
                *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0xf0) * fVar6 * fVar6;
                iVar11 = (int)lVar24;
                lVar21 = lVar21 + 8;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar25 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
                lVar25 = lVar25 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar31 = 4;
              lVar25 = uVar26 - 0x60;
              pfVar27 = (float *)&DAT_007358e0;
              lVar21 = lVar22;
              lVar24 = lVar25;
              do {
                fVar6 = *pfVar27;
                fVar7 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0x100) * fVar6;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
                lVar24 = lVar24 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar24 = 2;
              lVar21 = lVar22;
              fVar6 = fVar9;
              do {
                iVar11 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                iVar16 = (int)lVar25;
                lVar25 = lVar25 + 0x10;
                fVar6 = fVar6 + *(float *)(iVar11 + 0x100) + *(float *)(iVar16 + 4) +
                        *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              fVar7 = (fVar6 + 0.7853982) * fVar8 + fVar5;
            }
            pCVar19[iVar20].rot.y = -fVar7;
            iVar20 = *(int *)((int)pvVar10 + 0x24);
            fVar4 = fVar4 - pCVar19[iVar20].pos.x;
            fVar3 = fVar3 - pCVar19[iVar20].pos.y;
            fVar6 = ABS(fVar4);
            fVar7 = ABS(fVar3);
            *(float *)(puVar14 + 0x11) = fVar4;
            *(float *)((int)puVar14 + 0x8c) = fVar3;
            *(float *)(puVar14 + 0x12) = fVar6 - fVar7;
            uVar30 = (ulonglong)(*(uint *)(puVar14 + 0x11) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0x8c) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)(puVar14 + 0x11));
            if (*(float *)(puVar14 + 0x12) - 0.0 < 0.0) {
              fVar3 = fVar7;
            }
            fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
            fVar7 = ABS(*(float *)((int)puVar14 + 0x8c));
            if (*(float *)(puVar14 + 0x12) - 0.0 < 0.0) {
              fVar7 = fVar6;
            }
            fVar6 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
            if (0.0 < fVar3) {
              lVar21 = uVar26 - 0x150;
              lVar25 = uVar26 - 0x70;
              lVar24 = uVar26 - 0x80;
              lVar31 = 2;
              fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
              fVar7 = fVar3 * fVar3;
              *(float *)((int)puVar14 + 0xec) = fVar3;
              *(float *)((int)puVar14 + 0xe4) = fVar3;
              *(float *)(puVar14 + 0x1d) = fVar3;
              *(float *)(puVar14 + 0x1c) = fVar3;
              fVar3 = fVar7 * fVar7;
              *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xe4) * fVar7;
              *(float *)(puVar14 + 0x1d) = *(float *)(puVar14 + 0x1d) * fVar3;
              *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar3 * fVar7;
              do {
                *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xd0) * fVar3 * fVar3;
                iVar11 = (int)lVar24;
                lVar24 = lVar24 + 8;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar25 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
                lVar25 = lVar25 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar31 = 4;
              lVar25 = uVar26 - 0x80;
              pfVar27 = (float *)&DAT_007358e0;
              lVar21 = lVar22;
              lVar24 = lVar25;
              do {
                fVar3 = *pfVar27;
                fVar7 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xe0) * fVar3;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
                lVar24 = lVar24 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar21 = 2;
              do {
                iVar11 = (int)lVar22;
                lVar22 = lVar22 + 0x10;
                iVar16 = (int)lVar25;
                lVar25 = lVar25 + 0x10;
                fVar9 = fVar9 + *(float *)(iVar11 + 0xe0) + *(float *)(iVar16 + 4) +
                        *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              fVar9 = (fVar9 + 0.7853982) * fVar4 + fVar6;
            }
            pCVar19[iVar20].rot.z = fVar9;
          }
          moby->state = '\x02';
        }
      }
    }
    else if (bVar1 < 3) {
      fVar3 = pfVar27[1];
      fVar9 = -(mobyutil::g_FrameTime * 5.0 - (moby->pos).z);
      (moby->pos).z = fVar9;
      pCVar19 = Cuboids;
      if (fVar3 != -NAN) {
        pvVar10 = MobyInstance[(int)fVar3].pVar;
        iVar20 = *(int *)((int)pvVar10 + 0x24);
        fVar3 = Cuboids[iVar20].pos.y - (moby->pos).y;
        fVar4 = Cuboids[iVar20].pos.x - (moby->pos).x;
        fVar9 = fVar9 - Cuboids[iVar20].pos.z;
        fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        *(float *)(puVar14 + 0x10) = fVar9;
        fVar9 = ABS(fVar9);
        fVar6 = ABS(fVar3);
        *(float *)((int)puVar14 + 0x7c) = fVar3;
        *(float *)((int)puVar14 + 0x84) = fVar6 - fVar9;
        fVar3 = 0.0;
        uVar30 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar14 + 0x7c));
        if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
        fVar7 = ABS(*(float *)(puVar14 + 0x10));
        if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
          fVar7 = fVar6;
        }
        fVar6 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
        fVar5 = fVar3;
        if (0.0 < fVar4) {
          lVar21 = uVar26 - 0x150;
          lVar25 = uVar26 - 0x90;
          lVar24 = uVar26 - 0xa0;
          lVar31 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar14 + 0xcc) = fVar4;
          *(float *)((int)puVar14 + 0xc4) = fVar4;
          *(float *)(puVar14 + 0x19) = fVar4;
          *(float *)(puVar14 + 0x18) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar14 + 0xc4) = *(float *)((int)puVar14 + 0xc4) * fVar7;
          *(float *)(puVar14 + 0x19) = *(float *)(puVar14 + 0x19) * fVar4;
          *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar21 + 0xc0) = *(float *)((int)lVar21 + 0xb0) * fVar4 * fVar4;
            iVar11 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar11 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar25 = uVar26 - 0xa0;
          pfVar28 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar24 = lVar25;
          do {
            fVar4 = *pfVar28;
            fVar7 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar21 + 0xc0) = *(float *)((int)lVar21 + 0xc0) * fVar4;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
            lVar24 = lVar24 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar24 = 2;
          lVar21 = lVar22;
          fVar4 = fVar3;
          do {
            iVar11 = (int)lVar21;
            iVar16 = (int)lVar25;
            lVar21 = lVar21 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar4 = fVar4 + *(float *)(iVar11 + 0xc0) + *(float *)(iVar16 + 4) +
                    *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          fVar5 = (fVar4 + 0.7853982) * fVar9 + fVar6;
        }
        *(float *)((int)pvVar10 + 0x14) = -fVar5;
        fVar9 = (moby->pos).x - pCVar19[iVar20].pos.x;
        fVar7 = (moby->pos).y - pCVar19[iVar20].pos.y;
        fVar4 = ABS(fVar9);
        fVar6 = ABS(fVar7);
        *(float *)(puVar14 + 0xe) = fVar9;
        *(float *)((int)puVar14 + 0x74) = fVar7;
        *(float *)(puVar14 + 0xf) = fVar4 - fVar6;
        uVar30 = (ulonglong)(*(uint *)(puVar14 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x74) >> 0x1d) & 4;
        fVar9 = ABS(*(float *)(puVar14 + 0xe));
        if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
          fVar9 = fVar6;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
        fVar7 = ABS(*(float *)((int)puVar14 + 0x74));
        if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
          fVar7 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
        if (0.0 < fVar9) {
          lVar21 = uVar26 - 0x150;
          lVar24 = uVar26 - 0xc0;
          lVar25 = uVar26 - 0xb0;
          lVar31 = 2;
          fVar9 = (fVar7 - fVar9) / (fVar7 + fVar9);
          fVar7 = fVar9 * fVar9;
          *(float *)((int)puVar14 + 0xac) = fVar9;
          *(float *)((int)puVar14 + 0xa4) = fVar9;
          *(float *)(puVar14 + 0x15) = fVar9;
          *(float *)(puVar14 + 0x14) = fVar9;
          fVar9 = fVar7 * fVar7;
          *(float *)((int)puVar14 + 0xa4) = *(float *)((int)puVar14 + 0xa4) * fVar7;
          *(float *)(puVar14 + 0x15) = *(float *)(puVar14 + 0x15) * fVar9;
          *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar9 * fVar7;
          do {
            *(float *)((int)lVar21 + 0xa0) = *(float *)((int)lVar21 + 0x90) * fVar9 * fVar9;
            iVar20 = (int)lVar24;
            lVar21 = lVar21 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar9 * fVar9;
            lVar25 = lVar25 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar25 = uVar26 - 0xc0;
          pfVar28 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar24 = lVar25;
          do {
            fVar9 = *pfVar28;
            fVar7 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar21 + 0xa0) = *(float *)((int)lVar21 + 0xa0) * fVar9;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
            lVar24 = lVar24 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar21 = 2;
          do {
            iVar20 = (int)lVar22;
            iVar11 = (int)lVar25;
            lVar22 = lVar22 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar3 = fVar3 + *(float *)(iVar20 + 0xa0) + *(float *)(iVar11 + 4) +
                    *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          fVar3 = (fVar3 + 0.7853982) * fVar6 + fVar4;
        }
        *(float *)((int)pvVar10 + 0x18) = fVar3;
        fVar9 = (moby->pos).z;
      }
      if ((moby->animationId == '\0') && (fVar9 - pfVar27[3] <= 0.0)) {
        mobyutil::MB_SetAnimationNoBlend(moby,1,0);
        fVar9 = (moby->pos).z;
      }
      if (fVar9 <= pfVar27[3]) {
        (moby->pos).z = pfVar27[3];
        moby->state = '\x03';
      }
    }
    else if (bVar1 < 4) {
      if ((moby->updateId == '\x01') && ((moby->field43_0x70 & 2U) != 0)) {
        if (moby->animationId != '\x02') {
          puVar14[0x24] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x124));
        }
        moby->state = ((byte)((LZCOUNT(0x2da - (uint)moby->oClass) << 0x3a) >> 0x3f) & 6) + 4;
      }
    }
    else {
      iVar20 = 0;
      uVar26 = uVar30;
      do {
        iVar11 = *(int *)((int)uVar26 + 0x14);
        if (((iVar11 != -1) && (MobyInstance + iVar11 != (MobyInstance *)0x0)) &&
           (uVar2 = MobyInstance[iVar11].state, uVar2 != 0xfd && uVar2 != 0xfe)) {
          return;
        }
        iVar20 = iVar20 + 1;
        uVar26 = uVar26 + 4;
      } while (iVar20 < 3);
      if ((hero::g_heroStateType != 7) && (hero::g_heroStateType != 0x14)) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0x18,0x4363cc);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar32,8,uVar30);
        *(undefined2 *)(pfVar27 + 2) = uVar12;
        moby->state = '\x05';
      }
    }
  }
  else if (bVar1 == 10) {
    (moby->pos).z = pfVar27[3];
  }
  else if (bVar1 == 8) {
    if (g_gameMode != GAME_MODE_SCENE) {
      mobyutil::MB_UnlockLevel(Kerwan);
      mobyutil::MB_ToastMessageByIndex(3);
      fVar9 = pfVar27[1];
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      pMVar18 = MobyInstance;
      if (fVar9 != -NAN) {
        (&DAT_00a53964)[(short)MobyInstance[(int)fVar9].uid] =
             MobyInstance[(int)fVar9].levelFlagIdx + '\x02';
        bVar1 = pMVar18[(int)pfVar27[1]].levelFlagIdx;
        if ((bVar1 == 0xff) ||
           (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
          (&DAT_00a545c4)[(short)pMVar18[(int)pfVar27[1]].uid] = bVar1 + 2;
        }
      }
      pMVar18 = MobyInstance;
      if (pfVar27[0xf] != -NAN) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0x1c,0x4363cc);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x2c,
                            ZEXT48(MobyInstance[(int)pfVar27[0xf]].pVar));
        *(undefined4 *)((int)MobyInstance[(int)pfVar27[0xf]].pVar + 0x2cU & 0xfffffffc) = uVar13;
        pMVar18[(int)pfVar27[0xf]].setByGroup = '\x01';
        if ((pfVar27[0xd] != -NAN) && (pfVar27[0xe] != -NAN)) {
          MobyInstance[(int)pfVar27[0xd]].setByGroup = '\x02';
          MobyInstance[(int)pfVar27[0xe]].setByGroup = '\x02';
          respawn::SaveCheckpointMobyVar
                    (&MobyInstance[(int)pfVar27[0xd]].setByGroup,1,MobyInstance + (int)pfVar27[0xd],
                     1,(int *)&DAT_00a53560);
          respawn::SaveCheckpointMobyVar
                    (&MobyInstance[(int)pfVar27[0xe]].setByGroup,1,MobyInstance + (int)pfVar27[0xe],
                     1,(int *)&DAT_00a53560);
        }
      }
      mobyfunc::SetLevelFlag(moby->levelFlagIdx);
      fVar9 = pfVar27[0xc];
      if (fVar9 != -NAN) {
        respawn::SetSpawnPoint((Vec4 *)&Cuboids[(int)fVar9].pos,(Vec4 *)&Cuboids[(int)fVar9].rot);
      }
      memcard::memcard_Save(0,-1);
      space::Space_EnableShip();
      moby->state = '\n';
    }
  }
  else if (bVar1 == 7) {
    if (g_gameMode != GAME_MODE_SCENE) {
      update::mode_sceneInit(4);
      moby->state = '\b';
    }
  }
  else if (bVar1 == 6) {
    if (g_gameMode != GAME_MODE_SCENE) {
      update::PlayInfobotMovie(3);
      moby->state = '\a';
    }
  }
  else if ((bVar1 == 5) && (*(short *)(pfVar27 + 2) == 0)) {
    *(short *)((int)pfVar27 + 10) = moby->drawDistance;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    update::mode_sceneInit(3);
    moby->state = '\x06';
  }
  return;
}



//==== 00437408  ns=mobyupdate_helpers  size=0x14
// sig: undefined M790_00437408(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M790_00437408(void)

{
  DAT_0085a1cc = 0x10000;
  return;
}



//==== 00437430  ns=mobyupdate_unsorted  size=0x348
// sig: undefined UpdateMoby_732(MobyInstance * moby)
// callers(0): 
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00500060 fastfunc::FastDecTimerS8; 00502758 fastfunc::FastDoubleToInt

/* Moby 732 */

void mobyupdate_unsorted::UpdateMoby_732(MobyInstance *moby)

{
  u8 uVar1;
  int *piVar2;
  longlong lVar3;
  char cVar6;
  int iVar5;
  ulonglong uVar4;
  double dVar7;
  
  lVar3 = (longlong)(int)moby;
  uVar1 = moby->animationId;
  piVar2 = (int *)moby->pVar;
  moby->unk58 = DAT_0085a1f0;
  if (uVar1 != '\x05' && uVar1 != '\a') {
    if (uVar1 == '\x04') {
      iVar5 = fastfunc::FastDecTimerS8(lVar3 + 0xbc);
      if (iVar5 == 0) {
        return;
      }
      if (moby->animationId != '\x05') {
        mobyutil::MB_SetAnimation(lVar3,5,0,(int)(animationSpeed * 10.5));
      }
      moby->setByGroup = '\x02';
      iVar5 = sound::PlayMobySound(0,4,moby);
      *piVar2 = iVar5;
      return;
    }
    if (uVar1 != '\x03') {
      if (uVar1 == '\x02') {
        iVar5 = fastfunc::FastDecTimerS8(lVar3 + 0xbc);
        if (iVar5 == 0) {
          return;
        }
        uVar4 = mobyutil::MB_randInt(0xff);
        if ((uVar4 & 1) == 0) {
          if (moby->animationId != '\a') {
            mobyutil::MB_SetAnimation(lVar3,7,0,(int)(animationSpeed * 10.5));
          }
          moby->setByGroup = '\0';
        }
        else {
          if (moby->animationId != '\x03') {
            mobyutil::MB_SetAnimation(lVar3,3,0,(int)(animationSpeed * 10.5));
          }
          moby->setByGroup = '\x04';
        }
        iVar5 = sound::PlayMobySound(0,4,moby);
        *piVar2 = iVar5;
        return;
      }
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return;
        }
        iVar5 = fastfunc::FastDecTimerS8(lVar3 + 0xbc);
        if (iVar5 == 0) {
          return;
        }
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(lVar3,1,0,(int)(animationSpeed * 10.5));
        }
        moby->setByGroup = '\x02';
        iVar5 = sound::PlayMobySound(0,4,moby);
        *piVar2 = iVar5;
        return;
      }
    }
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    moby->animationBlend = 0.0;
    if (uVar1 != moby->setByGroup) {
      mobyutil::MB_SetAnimation(lVar3,moby->setByGroup,0,0);
    }
    iVar5 = *piVar2;
    if (((iVar5 != -1) && (sound::g_SoundChannels[iVar5].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar5].state != '\0')) {
      sound::sound_Kill(iVar5);
    }
    *piVar2 = -1;
    sound::PlayMobySound(1,0,moby);
    dVar7 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    cVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
    moby->setByGroup = cVar6;
  }
  return;
}



//==== 00437780  ns=mobyupdate_helpers  size=0x208
// sig: undefined M733_00437780(void)
// callers(1): 004379b8 mobyupdate_unsorted::UpdateMoby_733
// callees(3): 0015d12c sound::PlayMobySound; 0015d710 sound::sound_SetVol; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M733_00437780(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int handle;
  int handle_00;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  
  pvVar1 = param_1->pVar;
  if (-1 < *(int *)((int)pvVar1 + 0x10)) {
    fVar3 = GameCamera.posY - (param_1->pos).y;
    fVar4 = GameCamera.posX - (param_1->pos).x;
    fVar5 = GameCamera.posZ - (param_1->pos).z;
    fVar2 = DAT_0085a208 * mobyutil::g_FrameTime + *(float *)((int)pvVar1 + 0x10);
    dVar11 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    *(float *)((int)pvVar1 + 0x10) = fVar2;
    if ((dVar11 < (double)fVar2) && (g_heroState != MOVEMENT_LOCKED)) {
      handle = sound::PlayMobySound(0,0x10,param_1);
      handle_00 = sound::PlayMobySound(1,0x10,param_1);
      dVar10 = 1024.0;
      lVar8 = fastfunc::FastDoubleToInt
                        ((double)((1.0 - (float)(dVar11 - (double)DAT_010ccd0c) /
                                         (float)((double)DAT_0085a210 - (double)DAT_010ccd0c)) *
                                 1024.0));
      lVar9 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)((float)(dVar11 - (double)DAT_0085a214) /
                                                 (float)((double)DAT_010ccd10 - (double)DAT_0085a214
                                                        )) * dVar10));
      iVar6 = (int)lVar8 + ((uint)(lVar8 >> 0x3f) & -(int)lVar8);
      iVar7 = (int)lVar9 + ((uint)(lVar9 >> 0x3f) & -(int)lVar9);
      sound::sound_SetVol(handle,iVar6 + ((uint)(0x400 - lVar8 >> 0x3f) & 0x400U - iVar6));
      sound::sound_SetVol(handle_00,iVar7 + ((uint)(0x400 - lVar9 >> 0x3f) & 0x400U - iVar7));
      *(undefined4 *)((int)pvVar1 + 0x10) = 0xbf800000;
    }
  }
  return;
}



//==== 004379b8  ns=mobyupdate_unsorted  size=0x43c
// sig: undefined UpdateMoby_733(MobyInstance * moby)
// callers(0): 
// callees(15): 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 001ffaf0 FUN_001ffaf0; 00437780 mobyupdate_helpers::M733_00437780; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Moby 733 */

undefined4 * mobyupdate_unsorted::UpdateMoby_733(MobyInstance *moby)

{
  byte bVar1;
  short sVar2;
  float *speed;
  float accel;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  double extraout_f1;
  double dVar7;
  undefined8 uVar8;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  
  speed = (float *)moby->pVar;
  mobyupdate_helpers::M733_00437780();
  bVar1 = moby->state;
  puVar3 = (undefined4 *)(uint)bVar1;
  if (bVar1 == 0) {
    puVar3 = (undefined4 *)fastfunc::FastDecTimerS16(speed + 2);
    if (puVar3 != (undefined4 *)0x0) {
      dVar6 = (double)mobyutil::MB_randRangeFloat(0.0,3.14159);
      speed[1] = (float)dVar6;
      moby->state = '\x01';
      puVar3 = (undefined4 *)sound::PlayMobySound(4,0,moby);
    }
  }
  else if (bVar1 < 2) {
    dVar6 = 0.01745329238474369;
    accel = DAT_0085a1f8 * 0.017453292 * DAT_0071f418;
    mobyutil::OrganicDeltAng
              (speed[1],accel,accel,DAT_0085a1fc * 0.017453292 * mobyutil::g_FrameTime,
               &(moby->rotation).z,0x860000,speed);
    iVar4 = sound::IsMobyPlayingSound(moby,(int)*(short *)(speed + 3));
    if (iVar4 == 0) {
      iVar4 = sound::PlayMobySound(2,4,moby);
      *(short *)(speed + 3) = (short)iVar4;
    }
    puVar3 = (undefined4 *)fastfunc::FastSubRots((moby->rotation).z,speed[1]);
    if (extraout_f1 < dVar6) {
      puVar3 = &DAT_00437988;
      uVar8 = 0;
      if (*speed == 0.0) {
        sVar2 = *(short *)(speed + 3);
        if (((sVar2 != -1) &&
            (iVar4 = (int)((longlong)sVar2 << 7) - (int)((longlong)sVar2 << 4),
            *(MobyInstance **)((int)sound::g_SoundChannels + iVar4 + 0x18) == moby)) &&
           (*(char *)((int)sound::g_SoundChannels + iVar4 + 4) != '\0')) {
          sound::sound_Kill((int)sVar2);
        }
        *(undefined2 *)(speed + 3) = 0xffff;
        sound::PlayMobySound(3,0,moby);
        speed[4] = DAT_0085a20c;
        moby->state = '\x02';
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(moby,1,0,1);
        }
        mobyfunc::GetBonePosition(moby,1,local_30);
        mobyfunc::GetBonePosition(moby,0,local_40);
        mobyutil::MB_genericExplosion
                  (uVar8,uVar8,0x401c000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x4008000000000000,0x403e000000000000,moby,local_40,local_30,1,&DAT_00437988,0,6,
                   0x20);
        puVar3 = (undefined4 *)FUN_001ffaf0(moby,local_30,local_40);
      }
    }
  }
  else if (bVar1 < 3) {
    moby->modeBits = moby->modeBits | HAS_GLOW;
    dVar7 = (double)mobyfunc::BlendAnimFrame(moby);
    dVar6 = (double)(float)(dVar7 * 0.10000000149011612);
    if (1.0 - (double)(float)(dVar7 * 0.10000000149011612) < 0.0) {
      dVar6 = 1.0;
    }
    uVar5 = fastfunc::FastLerpColor(dVar6,DAT_0085a200,DAT_0085a204);
    moby->field60_0x90 = uVar5;
    puVar3 = (undefined4 *)((byte)moby->field43_0x70 & 2);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(moby,0,0,1);
      }
      moby->state = '\0';
      dVar6 = (double)mobyutil::MB_randRangeFloat(60.0,180.0);
      puVar3 = (undefined4 *)
               fastfunc::FastDoubleToInt((double)(float)(dVar6 * (double)animationSpeed));
      *(short *)(speed + 2) = (short)puVar3;
    }
  }
  return puVar3;
}



//==== 00437df4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M734_00437df4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M734_00437df4(void)

{
  DAT_0085a264 = 0x10000;
  return;
}



//==== 00437e10  ns=mobyupdate_unsorted  size=0x9c
// sig: undefined UpdateMoby_734(MobyInstance * moby)
// callers(0): 
// callees(2): 00112900 mobyutil::MB_GetOrientation; 00502578 fastfunc::FastWrapRot

/* Moby 734 */

void mobyupdate_unsorted::UpdateMoby_734(MobyInstance *moby)

{
  void *pvVar1;
  double dVar2;
  Vec4 VStack_30;
  f32 local_20;
  f32 local_1c;
  float local_18;
  f32 local_14;
  
  pvVar1 = moby->pVar;
  VStack_30.w = 0.0;
  VStack_30.z = 0.0;
  VStack_30.y = 0.0;
  VStack_30.x = 0.0;
  local_20 = (moby->rotation).x;
  local_1c = (moby->rotation).y;
  local_18 = (moby->rotation).z;
  local_14 = (moby->rotation).w;
  dVar2 = (double)fastfunc::FastWrapRot(local_18,mobyutil::g_FrameTime * 0.08726646);
  (moby->rotation).z = (float)dVar2;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar1 + 0x20),&VStack_30,ZEXT48(&stack0x00000000) - 0x20,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 00437ec0  ns=mobyupdate_unsorted  size=0x2e0
// sig: undefined UpdateMoby_{735_736}(MobyInstance * moby)
// callers(0): 
// callees(5): 0010a2e0 mobyutil::OrganicDeltAng; 005017c4 fastfunc::FastQuaternionMult; 00501848 fastfunc::FastSlerp; 00501980 fastfunc::FastQuaternionToEuler; 00501ab0 fastfunc::FastQuaternionToMtx4

/* Moby 735
   Moby 736 */

void mobyupdate_unsorted::UpdateMoby__735_736_(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  f32 *pfVar4;
  double dVar5;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  
  pfVar4 = (f32 *)moby->pVar;
  if ((g_gameMode == GAME_MODE_SCENE) && (moby->setByGroup == '\0')) {
    moby->modeBits = moby->modeBits | DISABLED;
    moby->enabled = '\0';
  }
  else {
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->enabled = '\x01';
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    *pfVar4 = (moby->rotation).x;
    pfVar4[1] = (moby->rotation).y;
    fVar2 = (moby->rotation).z;
    pfVar4[3] = 0.0;
    pfVar4[2] = fVar2;
    dVar5 = 0.01745329238474369;
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      (moby->rotation).x = pfVar4[4] * 0.017453292;
      (moby->rotation).y = pfVar4[5] * 0.017453292;
      fVar3 = pfVar4[6];
      moby->state = '\x03';
      (moby->rotation).z = fVar3 * 0.017453292;
    }
    else {
      moby->state = '\x01';
      fVar3 = pfVar4[4];
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
      fastfunc::FastQuaternionToEuler((double)(fVar3 * 0.017453292),auStack_a0,0);
      fastfunc::FastQuaternionToEuler((double)(float)((double)pfVar4[5] * dVar5),auStack_90,1);
      fastfunc::FastQuaternionToEuler((double)(float)((double)pfVar4[6] * dVar5),auStack_80,2);
      fastfunc::FastQuaternionMult(auStack_70,auStack_a0,auStack_90);
      fastfunc::FastQuaternionMult(pfVar4 + 4,auStack_70,auStack_80);
      fastfunc::FastQuaternionToEuler((double)(moby->rotation).x,auStack_a0,0);
      fastfunc::FastQuaternionToEuler((double)(moby->rotation).y,auStack_90,1);
      fastfunc::FastQuaternionToEuler((double)(moby->rotation).z,auStack_80,2);
      fastfunc::FastQuaternionMult(auStack_60,auStack_a0,auStack_90);
      fastfunc::FastQuaternionMult(pfVar4,auStack_60,auStack_80);
    }
  }
  else if (bVar1 < 2) {
    if (moby->setByGroup != '\0') {
      moby->state = '\x02';
      pfVar4[8] = 0.0;
      pfVar4[9] = 0.0;
    }
  }
  else if (bVar1 < 3) {
    mobyutil::OrganicDeltAng
              (1.0,DAT_0071f418 * 0.5,DAT_0071f418 * 0.5,mobyutil::g_FrameTime,pfVar4 + 9,0x720000,
               pfVar4 + 8);
    fastfunc::FastSlerp((double)pfVar4[9],auStack_50,pfVar4,pfVar4 + 4);
    fastfunc::FastQuaternionToMtx4(auStack_50,(longlong)(int)moby + 0xc0);
  }
  return;
}



//==== 004381a0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M737_004381a0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M737_004381a0(void)

{
  DAT_0085a2d8 = 0x10000;
  return;
}



//==== 004381b8  ns=mobyupdate_helpers  size=0xe8
// sig: undefined M737_004381b8(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M737_004381b8(void)

{
  MOBY_OCLASSES MVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar3 = 0;
    puVar4 = &DAT_0095cd50;
    sVar2 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        MVar1 = ((MobyInstance *)puVar4[0x5e])->oClass;
        if (((MVar1 == QUARK_0398) || (MVar1 == QUARK_01BF)) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar4[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40066666;
          DAT_00a1bfa4 = 0x40066666;
          DAT_00a1bfa8 = 0x40066666;
          sVar2 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar2);
    }
  }
  return;
}



//==== 004382a8  ns=mobyupdate_unsorted  size=0x490
// sig: undefined UpdateMoby_737(MobyInstance * moby)
// callers(0): 
// callees(11): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000a0c38 hero::Hero_Warp; 000a2560 hero::Hero_TransitionToDefault; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 00110b70 mobyutil::MB_IsPntInCuboid; 004fff60 fastfunc::FastDecTimerS32; 005cd098 libc::printf
// strings: 0096c074: 'None' | 00657de0: 'cutscene moby class %d maya instance %d: cutsceneCameraInitPos INVALID\nDeleting Cutscene!\n'

/* Moby 737 */

void mobyupdate_unsorted::UpdateMoby_737(MobyInstance *moby)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  ushort uVar3;
  float *pos;
  float fVar4;
  undefined4 uVar5;
  Cuboid *pCVar6;
  short sVar8;
  int iVar7;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 in_LR;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  pos = (float *)moby->pVar;
  uVar10 = ZEXT48(pos);
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar7 = 0;
    puVar9 = &DAT_0095cd50;
    sVar8 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        MVar2 = ((MobyInstance *)puVar9[0x5e])->oClass;
        if (((MVar2 == QUARK_0398) || (MVar2 == QUARK_01BF)) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar9[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40066666;
          DAT_00a1bfa4 = 0x40066666;
          DAT_00a1bfa8 = 0x40066666;
          sVar8 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar7 < sVar8);
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (pos[9] == -NAN) {
        libc::printf("cutscene moby class %d maya instance %d: cutsceneCameraInitPos INVALID\nDeleting Cutscene!\n"
                     ,moby->oClass,(ulonglong)(uint)moby->field71_0xa8 & 0xffff);
        mobyfunc::DeleteMoby(moby);
      }
      else {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar11 = loadVectorLeftIndexed(0x2c,uVar10);
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar12 = loadVectorRightIndexed(0x3c,uVar10);
        auVar13 = loadVectorLeftIndexed(in_LR,0x4382a0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar11 = vectorConvertFromSignedFixedPointWord(auVar11 | auVar12,0);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorAddFloatingPoint
                            (auVar11,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
        auVar13 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x2c,uVar10
                          );
        *(undefined4 *)((uint)(pos + 0xb) & 0xfffffffc) = uVar5;
        moby->drawDistance = 0xff;
        moby->updateDistance = -1;
        moby->state = '\x01';
      }
    }
    else {
      uVar3 = moby->uid;
      if (((&DAT_00a545c4)[(short)uVar3] == '\0') &&
         ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
          & 1 << (uVar3 & 0x1f)) == 0)) {
        iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pos[8]);
        if ((iVar7 != 0) || (moby->setByGroup == '\x01')) {
          fVar4 = pos[10];
          if (fVar4 == -NAN) {
            hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,1);
          }
          else {
            hero::Hero_Warp(&Cuboids[(int)fVar4].pos.x,&Cuboids[(int)fVar4].rot.x,0x72,1);
          }
          if (pos[0xc] == 0.0) {
            camera::SetCameraPosition(&Cuboids[(int)pos[9]].pos,&Cuboids[(int)pos[9]].rot,0,0,0);
          }
          else {
            camera::SetCameraPosition(local_50,local_40,2,pos[0xd],0);
          }
          draw::LetterBoxOn = 1;
          moby->setByGroup = '\x01';
          moby->state = '\x02';
          pCVar6 = Cuboids;
          fVar4 = pos[9];
          *pos = Cuboids[(int)fVar4].pos.x;
          pos[1] = pCVar6[(int)fVar4].pos.y;
          pos[2] = pCVar6[(int)fVar4].pos.z;
          pos[3] = pCVar6[(int)fVar4].pos.w;
          pos[4] = pCVar6[(int)fVar4].rot.x;
          pos[5] = pCVar6[(int)fVar4].rot.y;
          pos[6] = pCVar6[(int)fVar4].rot.z;
          pos[7] = pCVar6[(int)fVar4].rot.w;
        }
      }
      else {
        moby->state = '\x01';
      }
    }
  }
  else if (bVar1 < 3) {
    iVar7 = fastfunc::FastDecTimerS32(uVar10 + 0x2c);
    if ((iVar7 == 0) && (moby->setByGroup == '\x01')) {
      camera::camera5::Camera_SetMobyDrivenTargetPos(pos);
      camera::camera5::Camera_SetMobyDrivenTargetRot(pos + 4);
    }
    else {
      if (pos[0xc] == 0.0) {
        camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      }
      else {
        camera::camera5::Camera_DeactivateMobyDrivenCam(2);
      }
      hero::Hero_TransitionToDefault();
      draw::LetterBoxOn = 0;
      moby->state = '\x03';
      moby->setByGroup = '\0';
    }
  }
  else if ((bVar1 < 4) && (moby->setByGroup == '\x01')) {
    moby->state = '\x01';
  }
  return;
}



//==== 00438738  ns=mobyupdate_helpers  size=0x14
// sig: undefined M738_00438738(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M738_00438738(void)

{
  DAT_0085a348 = 0x10000;
  return;
}



//==== 00438760  ns=mobyupdate_helpers  size=0x544
// sig: undefined M738_00438760(void)
// callers(1): 00438d20 mobyupdate_unsorted::UpdateMoby_738
// callees(1): 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M738_00438760(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar17;
  longlong lVar15;
  longlong lVar16;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined4 uVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x120;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar13;
  puVar11[0x26] = in_LR;
  puVar11[0x1e] = in_f26;
  puVar11[0x1f] = in_f27;
  puVar11[0x20] = in_f28;
  puVar11[0x21] = in_f29;
  puVar11[0x22] = in_f30;
  puVar11[0x23] = in_f31;
  puVar11[0x1c] = unaff_r30;
  puVar11[0x1d] = unaff_r31;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar11[0x1a] = unaff_r28;
  dVar30 = 0.0;
  iVar17 = *(int *)(iVar8 + 0x150);
  iVar9 = *(int *)(iVar8 + 0x1ac);
  puVar11[0x1b] = unaff_r29;
  if (iVar9 == 0) {
    uVar20 = 0;
    uVar14 = 0;
    *(undefined4 *)(iVar8 + 0x150) = 0;
    dVar29 = dVar30;
    dVar31 = dVar30;
    do {
      if ((int)uVar14 != iVar17) {
        fVar4 = *(float *)(param_1 + 0x10);
        iVar9 = *(int *)(iVar8 + 0x160) + (int)((uVar14 & 0xffffffff) << 4);
        fVar5 = *(float *)(param_1 + 0x14);
        dVar28 = (double)*(float *)(iVar9 + 0x10);
        dVar27 = (double)*(float *)(iVar9 + 0x14);
        fVar2 = (float)(dVar28 - (double)fVar4);
        dVar26 = (double)*(float *)(iVar9 + 0x18);
        fVar3 = (float)(dVar27 - (double)fVar5);
        dVar23 = ABS((double)fVar2);
        dVar24 = ABS((double)fVar3);
        *(float *)((int)puVar11 + 0x7c) = fVar2;
        *(float *)(puVar11 + 0x10) = fVar3;
        *(float *)((int)puVar11 + 0x84) = (float)(dVar23 - dVar24);
        uVar14 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
        dVar22 = ABS((double)*(float *)((int)puVar11 + 0x7c));
        if ((double)*(float *)((int)puVar11 + 0x84) - dVar30 < 0.0) {
          dVar22 = dVar24;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
        dVar24 = ABS((double)*(float *)(puVar11 + 0x10));
        if ((double)*(float *)((int)puVar11 + 0x84) - dVar30 < 0.0) {
          dVar24 = dVar23;
        }
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        dVar23 = dVar30;
        if (dVar30 < dVar22) {
          lVar16 = uVar13 - 0x110;
          lVar15 = uVar13 - 0x78;
          lVar18 = uVar13 - 0x68;
          lVar21 = 2;
          fVar6 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar11 + 0xb4) = fVar6;
          *(float *)((int)puVar11 + 0xac) = fVar6;
          *(float *)(puVar11 + 0x16) = fVar6;
          *(float *)(puVar11 + 0x15) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar7;
          *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar6;
          *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar6 * fVar6;
            iVar9 = (int)lVar15;
            lVar16 = lVar16 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar6 * fVar6;
            lVar18 = lVar18 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar18 = uVar13 - 0x78;
          pfVar19 = (float *)&DAT_007358e0;
          lVar16 = lVar1;
          lVar15 = lVar18;
          do {
            fVar6 = *pfVar19;
            fVar7 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar6;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar7;
            lVar15 = lVar15 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar15 = 2;
          lVar16 = lVar1;
          dVar22 = dVar30;
          do {
            iVar9 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            iVar12 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar9 + 0xa8)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar23 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
        }
        fVar2 = (float)((double)g_heroPosition.x - (double)fVar4);
        fVar3 = (float)((double)g_heroPosition.y - (double)fVar5);
        dVar25 = ABS((double)fVar2);
        dVar24 = ABS((double)fVar3);
        *(float *)(puVar11 + 0xe) = fVar2;
        *(float *)((int)puVar11 + 0x74) = fVar3;
        *(float *)(puVar11 + 0xf) = (float)(dVar25 - dVar24);
        uVar14 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
        dVar22 = ABS((double)*(float *)(puVar11 + 0xe));
        if ((double)*(float *)(puVar11 + 0xf) - dVar30 < 0.0) {
          dVar22 = dVar24;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
        dVar24 = ABS((double)*(float *)((int)puVar11 + 0x74));
        if ((double)*(float *)(puVar11 + 0xf) - dVar30 < 0.0) {
          dVar24 = dVar25;
        }
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        dVar25 = dVar30;
        if (dVar30 < dVar22) {
          lVar16 = uVar13 - 0x110;
          lVar18 = uVar13 - 0x88;
          lVar15 = uVar13 - 0x98;
          lVar21 = 2;
          fVar4 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0x94) = fVar4;
          *(float *)((int)puVar11 + 0x8c) = fVar4;
          *(float *)(puVar11 + 0x12) = fVar4;
          *(float *)(puVar11 + 0x11) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar11 + 0x8c) = *(float *)((int)puVar11 + 0x8c) * fVar5;
          *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) * fVar4;
          *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x78) * fVar4 * fVar4;
            iVar9 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
            lVar18 = lVar18 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar18 = uVar13 - 0x98;
          pfVar19 = (float *)&DAT_007358e0;
          lVar16 = lVar1;
          lVar15 = lVar18;
          do {
            fVar4 = *pfVar19;
            fVar5 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x88) * fVar4;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
            lVar15 = lVar15 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar15 = 2;
          lVar16 = lVar1;
          dVar22 = dVar30;
          do {
            iVar9 = (int)lVar16;
            iVar12 = (int)lVar18;
            lVar16 = lVar16 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar9 + 0x88)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar25 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
        }
        dVar22 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar25);
        fVar2 = (float)((double)*(float *)(param_1 + 0x14) - dVar27);
        fVar3 = (float)((double)*(float *)(param_1 + 0x10) - dVar28);
        fVar4 = (float)((double)*(float *)(param_1 + 0x18) - dVar26);
        dVar23 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        if (1.5707963705062866 <= dVar22) {
          if (((12.0 <= dVar23) && ((dVar23 < dVar31 || (dVar31 < 12.0)))) ||
             ((12.0 > dVar23 && (dVar31 < dVar23)))) {
            uVar20 = *(undefined4 *)(iVar8 + 0x150);
            dVar29 = dVar22;
            dVar31 = dVar23;
          }
        }
        else if (dVar29 < dVar22) {
          uVar20 = *(undefined4 *)(iVar8 + 0x150);
          dVar29 = dVar22;
          dVar31 = dVar23;
        }
      }
      uVar10 = **(uint **)(iVar8 + 0x160);
      lVar16 = (ulonglong)*(uint *)(iVar8 + 0x150) + (ulonglong)uVar10 +
               (longlong)*(char *)(iVar8 + 0x154);
      uVar14 = lVar16 - (longlong)((int)lVar16 / (int)uVar10) * (longlong)(int)uVar10;
      *(int *)(iVar8 + 0x150) = (int)uVar14;
    } while ((int)uVar14 != 0);
    *(undefined4 *)(iVar8 + 0x150) = uVar20;
  }
  else {
    iVar9 = **(int **)(iVar8 + 0x160);
    if (iVar17 < iVar9 + -1) {
      iVar17 = iVar17 + iVar9 + (int)*(char *)(iVar8 + 0x154);
      *(int *)(iVar8 + 0x150) = iVar17 - (iVar17 / iVar9) * iVar9;
    }
  }
  return;
}



//==== 00438d20  ns=mobyupdate_unsorted  size=0x13d0
// sig: undefined UpdateMoby_738(MobyInstance * moby)
// callers(0): 
// callees(21): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 00110488 mobyutil::ClampVec3Magnitude; 003bbc08 FUN_003bbc08; 00438760 mobyupdate_helpers::M738_00438760; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots; 005e8338 FUN_005e8338

/* Moby 738 */

void mobyupdate_unsorted::UpdateMoby_738(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  int *piVar10;
  f32 fVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar27;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  double in_f30;
  double dVar35;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  lVar24 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar1 = uVar23 - 0x140;
  puVar15 = (ulonglong *)lVar1;
  *puVar15 = uVar23;
  puVar15[0x2a] = in_LR;
  puVar15[0x22] = in_f26;
  puVar15[0x23] = in_f27;
  puVar15[0x24] = in_f28;
  puVar15[0x25] = in_f29;
  puVar15[0x26] = (ulonglong)in_f30;
  puVar15[0x27] = in_f31;
  puVar15[0x21] = unaff_r31;
  puVar15[0x20] = unaff_r30;
  puVar15[0x1f] = unaff_r29;
  puVar15[0x1e] = unaff_r28;
  pvVar9 = moby->pVar;
  uVar28 = ZEXT48(pvVar9);
  iVar25 = mobyutil::MB_damage(lVar24,0x210000,0);
  fastfunc::FastDecTimerS16(uVar28 + 0x26);
  if ((iVar25 != 0) && (*(short *)((int)pvVar9 + 0x26) == 0)) {
    fVar3 = *(float *)((int)pvVar9 + 0x20) - *(float *)(iVar25 + 0x2c);
    *(float *)((int)pvVar9 + 0x20) = fVar3;
    if (fVar3 <= 0.0) {
      *(undefined4 *)((int)pvVar9 + 0x80) = 0x3c03126f;
      *(undefined4 *)((int)pvVar9 + 0x84) = 0x3a03126f;
      fVar3 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar9 + 0x88) = mobyutil::g_FrameTime * 15.0;
      *(undefined1 *)((int)pvVar9 + 0xad) = 0;
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40a00000;
      *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41200000;
      *(undefined4 *)((int)pvVar9 + 0x94) = 1;
      *(float *)((int)pvVar9 + 0x8c) = fVar3 * 10.0;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      mobyutil::MB_StartKick(lVar24,uVar28 + 0x70);
      *(undefined1 *)((int)pvVar9 + 0x67) = 0xb4;
      moby->state = '\x0e';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
    }
    else {
      *(undefined1 *)((int)pvVar9 + 0x67) = 0x78;
      sVar7 = *(short *)(*(int *)(iVar25 + 0x20) + 0xa6);
      if ((sVar7 == 0xb0) || (sVar7 == 0xb1)) {
        auVar39 = loadVectorLeftIndexed(4,0x438ca4);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      }
      else {
        auVar40 = loadVectorLeftIndexed(8,0x438ca4);
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,auVar40,
                           auVar41);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorSplatHalfWord(auVar39,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x26,uVar28);
      *(undefined2 *)((int)pvVar9 + 0x26) = uVar13;
      *(undefined4 *)((int)pvVar9 + 0x80) = 0x3c03126f;
      *(undefined4 *)((int)pvVar9 + 0x84) = 0x3a03126f;
      fVar3 = mobyutil::g_FrameTime;
      *(undefined1 *)((int)pvVar9 + 0xad) = 0;
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40a00000;
      *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41200000;
      *(undefined4 *)((int)pvVar9 + 0x94) = 1;
      *(float *)((int)pvVar9 + 0x88) = fVar3 * 5.0;
      *(float *)((int)pvVar9 + 0x8c) = fVar3 * 5.0;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      mobyutil::MB_StartKick(lVar24,uVar28 + 0x70);
      if (moby->animationId != '\v') {
        mobyutil::MB_SetAnimation(lVar24,0xb,0,6);
      }
      moby->state = '\f';
    }
    mobyutil::MB_UpdateLightsTransition(lVar24,uVar28 + 0x60);
  }
  bVar2 = moby->state;
  moby->damage = -1;
  if (bVar2 < 8) {
    if (bVar2 == 7) {
      uVar29 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24,
                 &DAT_00438ca4,uVar28 + 0x194);
      if ((moby->field43_0x70 & 2U) != 0) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if ((8.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) ||
           (6.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar24,0,0,0);
          }
          moby->state = '\x01';
        }
        else {
          mobyupdate_helpers::M738_00438760(lVar24);
          if (moby->animationId != '\b') {
            mobyutil::MB_SetAnimation(lVar24,8,0,0);
          }
          moby->unk58 = 3.0;
          moby->state = '\t';
        }
      }
    }
    else if (bVar2 == 6) {
      dVar37 = (double)mobyfunc::BlendAnimFrame(moby);
      iVar25 = *(int *)((int)pvVar9 + 0x1a4);
      dVar30 = 0.0;
      if (dVar37 == 0.0) {
        mobyfunc::GetBonePosition(lVar24,0,uVar23 - 0x80);
        fVar3 = (moby->pos).x;
        *(float *)((int)pvVar9 + 0x180) = fVar3;
        fVar4 = (moby->pos).y;
        *(float *)((int)pvVar9 + 0x184) = fVar4;
        fVar5 = (moby->pos).z;
        *(float *)((int)pvVar9 + 0x188) = fVar5;
        *(f32 *)((int)pvVar9 + 0x18c) = (moby->pos).w;
        fVar6 = (moby->rotation).z + 1.5707963;
        fVar16 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar16 = fVar6;
        }
        fVar18 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar16 < 0.0) {
          fVar18 = fVar16;
        }
        fVar6 = fVar18 * fVar18;
        fVar16 = fVar6 * fVar6 * fVar18;
        fVar19 = fVar6 * fVar16;
        *(float *)((int)pvVar9 + 0x180) =
             (fVar6 * fVar19 * 2.601887e-06 +
             fVar19 * -0.0001980741 + fVar16 * 0.0083330255 + fVar6 * fVar18 * -0.16666657 + fVar18)
             * *(float *)((int)pvVar9 + 0x198) + fVar3;
        fVar3 = (moby->rotation).z;
        fVar6 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar6 = fVar3;
        }
        *(float *)((int)pvVar9 + 0x188) = fVar5 + *(float *)((int)pvVar9 + 0x19c);
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar3 = fVar5 * fVar5;
        fVar6 = fVar3 * fVar3 * fVar5;
        fVar16 = fVar3 * fVar6;
        *(float *)((int)pvVar9 + 0x184) =
             (fVar3 * fVar16 * 2.601887e-06 +
             fVar16 * -0.0001980741 + fVar6 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5) *
             *(float *)((int)pvVar9 + 0x198) + fVar4;
        uVar29 = 0x3fd0000000000000;
        mobyutil::Delt(0.25,1.0,(float *)((int)pvVar9 + 0x19c));
        fVar4 = *(float *)((int)pvVar9 + 0x180) - *(float *)(puVar15 + 0x18);
        *(float *)(puVar15 + 0x1a) = fVar4;
        fVar5 = *(float *)((int)pvVar9 + 0x184) - *(float *)((int)puVar15 + 0xc4);
        fVar3 = DAT_0085a36c * mobyutil::g_FrameTime;
        *(float *)((int)puVar15 + 0xd4) = fVar5;
        auVar39 = loadVectorLeftIndexed(0x188,uVar28);
        auVar40 = loadVectorRightIndexed(0x198,uVar28);
        auVar42 = loadVectorLeftIndexed(200,lVar1);
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar40 = vectorSubtractFloatingPoint(auVar39 | auVar40,auVar42);
        dVar35 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
        auVar39 = ZEXT416(0xffffffff);
        auVar42 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar43 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar39 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        uVar14 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xd8,lVar1
                           );
        *(undefined4 *)(puVar15 + 0x1b) = uVar14;
        *(undefined4 *)((int)puVar15 + 0xdc) = *(undefined4 *)((int)pvVar9 + 0x18c);
        auVar39 = ZEXT416(0xffffffff);
        auVar43 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar45 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar46 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        fVar3 = (float)((double)fVar3 / dVar35);
        dVar31 = (double)(fVar4 * fVar3);
        dVar32 = (double)(fVar5 * fVar3);
        dVar37 = dVar30;
        if (dVar30 - dVar35 < 0.0) {
          dVar37 = dVar31;
        }
        dVar33 = dVar30;
        if (dVar30 - dVar35 < 0.0) {
          dVar33 = dVar32;
        }
        if (dVar35 - dVar30 < 0.0) {
          dVar37 = dVar31;
        }
        if (dVar35 - dVar30 < 0.0) {
          dVar33 = dVar32;
        }
        *(float *)(puVar15 + 0x1a) = (float)dVar37;
        *(float *)((int)puVar15 + 0xd4) = (float)dVar33;
        auVar46 = loadVectorLeftIndexed(0x68,0x438ca4);
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar42);
        auVar41 = loadVectorLeftIndexed(0x6c,0x438ca4);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar46 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar41,0);
        auVar42 = vectorReciprocalEstimateFloatingPoint(auVar41);
        auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar41,auVar46);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar42,auVar47,auVar39);
        auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar41,auVar46);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar39,auVar42,auVar44);
        auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar41,auVar46);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar42,auVar39,auVar43);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar45);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xd8,lVar1
                           );
        *(undefined4 *)(puVar15 + 0x1b) = uVar14;
        FUN_003bbc08(uVar29,uVar23 - 0x70,uVar23 - 0x80,lVar24,10);
        iVar25 = *(int *)((int)pvVar9 + 0x1a4) + 1;
        *(int *)((int)pvVar9 + 0x1a4) = iVar25;
      }
      if (((3 < iVar25) ||
          (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
          fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3), *(float *)((int)pvVar9 + 0x1a0) < fVar3)) ||
         (fVar4 = ABS((moby->pos).z - g_heroPosition.z), 6.0 < fVar4)) {
        if (moby->animationId != '\x05') {
          mobyutil::MB_SetAnimation(lVar24,5,0,0);
        }
        moby->state = '\a';
      }
      else if (((fVar3 < 4.0) && (fVar4 < 6.0)) &&
              ((*(int *)((int)pvVar9 + 0x1ac) == 0 ||
               (*(int *)((int)pvVar9 + 0x150) < **(int **)((int)pvVar9 + 0x160) + -1)))) {
        if (moby->animationId != '\b') {
          mobyutil::MB_SetAnimation(lVar24,8,0,0);
        }
        fVar3 = DAT_0085a378;
        moby->state = '\t';
        moby->unk58 = fVar3;
      }
    }
    else if (bVar2 == 3) {
      piVar10 = *(int **)((int)pvVar9 + 0x130);
      if (piVar10 == (int *)0x0) {
        dVar37 = 0.0;
        dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar24 + 0x10,0);
        dVar35 = (double)(moby->pos).z;
        in_f30 = (double)(float)(dVar30 - dVar35);
        if (in_f30 - (double)(mobyutil::g_FrameTime * -10.0) < 0.0) {
          in_f30 = (double)(mobyutil::g_FrameTime * -10.0);
        }
        (moby->pos).z = (float)(dVar35 + in_f30);
      }
      else {
        iVar25 = *piVar10;
        iVar27 = *(int *)((int)pvVar9 + 0x120) + iVar25 + (int)*(char *)((int)pvVar9 + 0x124);
        iVar27 = iVar27 - (iVar27 / iVar25) * iVar25;
        dVar37 = in_f30;
        uVar29 = FUN_005e8338((double)((float)piVar10[iVar27 * 4 + 4] - (moby->pos).x),
                              (double)((float)piVar10[iVar27 * 4 + 5] - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar29,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24,
                   &DAT_00438ca4,uVar28 + 0x194);
        piVar10 = *(int **)((int)pvVar9 + 0x130);
        if (*(int *)((int)pvVar9 + 0x120) == *piVar10 + -1) {
          moby->state = '\x01';
        }
        else {
          fVar3 = (moby->pos).y;
          fVar4 = (moby->pos).x;
          fVar20 = (float)piVar10[iVar27 * 4 + 5] - fVar3;
          fVar16 = (float)piVar10[iVar27 * 4 + 4] - fVar4;
          fVar5 = (moby->pos).z;
          fVar18 = (float)piVar10[iVar27 * 4 + 6] - fVar5;
          fVar6 = 0.0;
          fVar22 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar20 * fVar20);
          fVar21 = (mobyutil::g_FrameTime * 5.0) / fVar22;
          fVar19 = fVar6;
          if (0.0 - fVar22 < 0.0) {
            fVar19 = fVar20 * fVar21;
          }
          fVar17 = fVar6;
          if (0.0 - fVar22 < 0.0) {
            fVar17 = fVar16 * fVar21;
          }
          if (0.0 - fVar22 < 0.0) {
            fVar6 = fVar18 * fVar21;
          }
          if (fVar22 - 0.0 < 0.0) {
            fVar19 = fVar20 * fVar21;
          }
          if (fVar22 - 0.0 < 0.0) {
            fVar17 = fVar16 * fVar21;
          }
          if (fVar22 - 0.0 < 0.0) {
            fVar6 = fVar18 * fVar21;
          }
          fVar3 = fVar3 + fVar19;
          fVar4 = fVar4 + fVar17;
          fVar5 = fVar5 + fVar6;
          fVar18 = (float)piVar10[iVar27 * 4 + 5] - fVar3;
          fVar6 = (float)piVar10[iVar27 * 4 + 4] - fVar4;
          fVar16 = (float)piVar10[iVar27 * 4 + 6] - fVar5;
          (moby->pos).x = fVar4;
          (moby->pos).y = fVar3;
          (moby->pos).z = fVar5;
          if (SQRT(fVar16 * fVar16 + fVar6 * fVar6 + fVar18 * fVar18) < 0.5) {
            *(int *)((int)pvVar9 + 0x120) = iVar27;
          }
        }
      }
      if (SQRT((float)(in_f30 * in_f30 +
                      (double)(float)(dVar37 * dVar37 + (double)(float)(dVar37 * dVar37)))) <
          mobyutil::g_FrameTime) {
        moby->state = '\x01';
      }
    }
    else if (bVar2 == 2) {
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 25.0) {
        moby->state = '\x03';
      }
    }
    else if (bVar2 == 1) {
      uVar29 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24,
                 &DAT_00438ca4,uVar28 + 0x194);
      fastfunc::FastDecTimerS32(uVar28 + 400);
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      if (((SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                 (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)) <
            *(float *)((int)pvVar9 + 0x1a0)) &&
          (dVar37 = 4.0, ABS((moby->pos).z - g_heroPosition.z) < 4.0)) &&
         ((moby->enabled != '\0' && (*(int *)((int)pvVar9 + 400) == 0)))) {
        dVar35 = (double)(moby->rotation).z;
        dVar30 = (double)FUN_005e8338((double)(g_heroPosition.x - fVar4),
                                      (double)(g_heroPosition.y - fVar3));
        dVar30 = (double)fastfunc::FastSubRots((float)dVar35,(float)dVar30);
        fVar4 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        if (dVar30 < 0.0872664600610733) {
          *(undefined4 *)((int)pvVar9 + 0x198) = 0x40800000;
          fVar3 = DAT_00969f88 - (moby->pos).z;
          *(undefined4 *)((int)pvVar9 + 0x1a4) = 0;
          *(float *)((int)pvVar9 + 0x19c) = (float)((double)fVar3 - dVar37);
          moby->state = '\x06';
          if (moby->animationId != '\x04') {
            mobyutil::MB_SetAnimation(lVar24,4,10,6);
          }
          *(undefined4 *)((int)pvVar9 + 400) = 0;
          goto LAB_0043a0a8;
        }
      }
      if (((SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                 (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)) < 4.0) &&
          (ABS((moby->pos).z - g_heroPosition.z) < 6.0)) &&
         ((*(int *)((int)pvVar9 + 0x1ac) == 0 ||
          (*(int *)((int)pvVar9 + 0x150) < **(int **)((int)pvVar9 + 0x160) + -1)))) {
        if (moby->animationId != '\b') {
          mobyutil::MB_SetAnimation(lVar24,8,0,0);
        }
        fVar3 = DAT_0085a378;
        moby->state = '\t';
        moby->unk58 = fVar3;
      }
    }
    else if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar9 + 0x150) = 0;
      *(Spline **)((int)pvVar9 + 0x160) = Splines[*(int *)((int)pvVar9 + 0x164)];
      if (*(int *)((int)pvVar9 + 0x134) < 0) {
        *(undefined4 *)((int)pvVar9 + 0x130) = 0;
        fVar3 = (moby->pos).z + 20.0;
      }
      else {
        pSVar12 = Splines[*(int *)((int)pvVar9 + 0x134)];
        *(undefined4 *)((int)pvVar9 + 0x120) = 0;
        *(Spline **)((int)pvVar9 + 0x130) = pSVar12;
        (moby->pos).x = pSVar12->points[0].x;
        (moby->pos).y = pSVar12->points[0].y;
        fVar3 = pSVar12->points[0].z;
        (moby->pos).w = pSVar12->points[0].w;
      }
      MVar8 = moby->modeBits;
      (moby->pos).z = fVar3;
      moby->modeBits = MVar8 | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar9 + 0x29) = 0;
      uVar26 = g_heroMobyPtr->light;
      moby->color = g_heroMobyPtr->color;
      moby->light = uVar26;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
      *(undefined4 *)((int)pvVar9 + 0x10c) = 0x3cf5c28f;
      *(undefined4 *)((int)pvVar9 + 0x110) = 0x3e99999a;
      *(undefined4 *)((int)pvVar9 + 0x114) = 0x3e800000;
      *(float *)((int)pvVar9 + 0xec) = DAT_0071f418 * 5.0;
      fVar4 = DAT_0085a370;
      fVar3 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar9 + 0xdc) = 0x40000000;
      *(undefined4 *)((int)pvVar9 + 0xd8) = 0x40000000;
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
      *(undefined1 *)((int)pvVar9 + 0x28) = 1;
      *(undefined4 *)((int)pvVar9 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar9 + 0x48) = 0;
      *(undefined4 *)((int)pvVar9 + 0x44) = 0;
      *(undefined4 *)((int)pvVar9 + 0x40) = 0;
      *(float *)((int)pvVar9 + 0xf4) = fVar4 * fVar3;
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar24,0,0,0);
      }
      moby->state = '\x02';
    }
  }
  else if (bVar2 == 0xe) {
    uVar26 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar26 & 6) != 0) {
      puVar15[0x12] = 0xffffffffffffffff;
      puVar15[0x14] = 1;
      puVar15[0x15] = 1;
      puVar15[0x16] = 0xffffffffffffffff;
      puVar15[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar24,uVar28 + 0x40,lVar24 + 0x10,1,0xffffffffffffffff,5,2,4);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar11 = (moby->pos).x;
    uVar26 = (int)fVar11 >> 0x1f;
    iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26;
    if ((((iVar25 < 0x40000000) || (0x447f4000 < iVar25)) ||
        (fVar11 = (moby->pos).y, uVar26 = (int)fVar11 >> 0x1f,
        iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26, 0x447f4000 < iVar25 || iVar25 < 0x40000000))
       || ((fVar11 = (moby->pos).z, uVar26 = (int)fVar11 >> 0x1f,
           iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26, iVar25 < 0x40000000 ||
           (0x447f4000 < iVar25)))) {
      puVar15[0x12] = 0xffffffffffffffff;
      puVar15[0x14] = 1;
      puVar15[0x15] = 1;
      puVar15[0x16] = 0xffffffffffffffff;
      puVar15[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar24,uVar28 + 0x40,lVar24 + 0x10,1,0xffffffffffffffff,5,2,4);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar2 == 0xc) {
    uVar26 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar26 & 0x40) != 0) {
      moby->state = '\b';
      if (moby->animationId == '\x06') {
        return;
      }
      mobyutil::MB_SetAnimation(lVar24,6,0,3);
      return;
    }
    fVar11 = (moby->pos).x;
    uVar26 = (int)fVar11 >> 0x1f;
    iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26;
    if (((iVar25 < 0x40000000) || (0x447f4000 < iVar25)) ||
       ((fVar11 = (moby->pos).y, uVar26 = (int)fVar11 >> 0x1f,
        iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26, 0x447f4000 < iVar25 || iVar25 < 0x40000000
        || ((fVar11 = (moby->pos).z, uVar26 = (int)fVar11 >> 0x1f,
            iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26, iVar25 < 0x40000000 ||
            (0x447f4000 < iVar25)))))) {
      puVar15[0x12] = 0xffffffffffffffff;
      puVar15[0x14] = 1;
      puVar15[0x15] = 1;
      puVar15[0x16] = 0xffffffffffffffff;
      puVar15[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar24,uVar28 + 0x40,lVar24 + 0x10,1,0xffffffffffffffff,5,2,4);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar2 == 0xb) {
    uVar29 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24,&DAT_00438ca4,
               uVar28 + 0x194);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar24,0,0,6);
      }
      moby->state = '\x01';
    }
  }
  else if (bVar2 == 10) {
    iVar25 = *(int *)((int)pvVar9 + 0x160) + *(int *)((int)pvVar9 + 0x150) * 0x10;
    dVar32 = (double)*(float *)(iVar25 + 0x10);
    dVar33 = (double)*(float *)(iVar25 + 0x14);
    dVar34 = (double)*(float *)(iVar25 + 0x18);
    dVar36 = (double)*(float *)(iVar25 + 0x1c);
    uVar29 = FUN_005e8338((double)(float)(dVar32 - (double)(moby->pos).x),
                          (double)(float)(dVar33 - (double)(moby->pos).y));
    dVar38 = 0.10000000149011612;
    mobyutil::OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24);
    dVar30 = (double)(moby->rotation).z;
    dVar37 = (double)FUN_005e8338((double)(float)(dVar32 - (double)(moby->pos).x),
                                  (double)(float)(dVar33 - (double)(moby->pos).y));
    dVar37 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar37);
    dVar31 = (double)(moby->pos).x;
    dVar35 = (double)(moby->pos).y;
    dVar30 = (double)(moby->pos).z;
    if (dVar37 < 0.1745329201221466) {
      *(float *)((int)puVar15 + 0xec) = (float)dVar36;
      fVar3 = DAT_0085a370 * mobyutil::g_FrameTime;
      *(float *)(puVar15 + 0x1c) = (float)(dVar32 - dVar31);
      *(float *)((int)puVar15 + 0xe4) = (float)(dVar33 - dVar35);
      *(float *)(puVar15 + 0x1d) = (float)(dVar34 - dVar30);
      mobyutil::ClampVec3Magnitude((double)fVar3,(Vec4 *)(puVar15 + 0x1c));
      fVar3 = (moby->pos).x + *(float *)(puVar15 + 0x1c);
      dVar31 = (double)fVar3;
      fVar4 = (moby->pos).y + *(float *)((int)puVar15 + 0xe4);
      dVar35 = (double)fVar4;
      fVar5 = (moby->pos).z + *(float *)(puVar15 + 0x1d);
      dVar30 = (double)fVar5;
      (moby->pos).x = fVar3;
      (moby->pos).y = fVar4;
      (moby->pos).z = fVar5;
    }
    if ((double)SQRT((float)(dVar30 - dVar34) * (float)(dVar30 - dVar34) +
                     (float)(dVar31 - dVar32) * (float)(dVar31 - dVar32) +
                     (float)(dVar35 - dVar33) * (float)(dVar35 - dVar33)) < dVar38) {
      if (moby->animationId != '\n') {
        mobyutil::MB_SetAnimation(lVar24,10,0,0);
      }
      moby->state = '\v';
    }
  }
  else if (bVar2 == 9) {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\b') {
        mobyutil::MB_SetAnimation(lVar24,8,0,0);
      }
      mobyupdate_helpers::M738_00438760(lVar24);
      moby->unk58 = 1.0;
      moby->state = '\n';
    }
  }
  else if ((bVar2 == 8) && ((moby->field43_0x70 & 2U) != 0)) {
    if (moby->animationId != '\a') {
      mobyutil::MB_SetAnimation(lVar24,7,0,0);
    }
    fVar3 = DAT_0085a378;
    moby->state = '\t';
    moby->unk58 = fVar3;
  }
LAB_0043a0a8:
  mobyutil::MB_ColorDyingMoby(lVar24,uVar28 + 0x60);
  return;
}



//==== 0043a0f0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M739_0043a0f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M739_0043a0f0(void)

{
  DAT_0085a3c8 = 0x10000;
  return;
}



//==== 0043a188  ns=mobyupdate_unsorted  size=0x232c
// sig: undefined UpdateMoby_739(MobyInstance * moby)
// callers(0): 
// callees(43): 00055ac0 stub::STUB_00055ac0_RET_0; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 001385d0 path::Path_PickNextNode; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005c8318 rand; 005e7e18 idol::GetAnimDuration; 005e7e70 FUN_005e7e70; 005e7e98 FUN_005e7e98; 005e7f54 FUN_005e7f54; 005e7f98 FUN_005e7f98; 005e8030 FUN_005e8030; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128

/* Moby 739 */

void mobyupdate_unsorted::UpdateMoby_739(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  short sVar3;
  float *pfVar4;
  MobyInstance *pMVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined2 uVar13;
  int iVar10;
  short sVar14;
  uint uVar11;
  float fVar12;
  ulonglong uVar9;
  vec4 *pvVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  f32 local_1e0;
  f32 local_1dc;
  undefined1 auStack_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  float local_160;
  float local_15c;
  undefined4 local_158;
  Vec4 local_150;
  undefined1 auStack_140 [16];
  float local_130;
  float local_12c;
  undefined4 local_128;
  f32 local_120;
  f32 local_11c;
  float local_118;
  f32 local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  Vec4 local_100;
  undefined1 auStack_f0 [16];
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  Vec4 local_d0;
  undefined1 auStack_c0 [16];
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  f32 local_a0;
  f32 local_9c;
  float local_98;
  f32 local_94;
  undefined1 auStack_90 [4];
  undefined4 local_8c [3];
  longlong local_80;
  
  lVar8 = (longlong)(int)moby;
  lVar16 = lVar8 + 0x10;
  pfVar4 = (float *)moby->pVar;
  uVar18 = ZEXT48(pfVar4);
  FUN_005e7e98(&local_1e0,lVar16);
  if (pfVar4[6] != 0.0) {
    uVar13 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)(pfVar4 + 0x7d) = uVar13;
  }
  pfVar4[6] = 0.0;
  fastfunc::FastDecTimerS16(uVar18 + 0x1e8);
  iVar10 = fastfunc::FastDecTimerS16(uVar18 + 500);
  fVar12 = 20.0;
  if (iVar10 != 0) {
    fVar12 = 12.0;
  }
  pfVar4[0x77] = fVar12;
  dVar25 = 0.0;
  local_8c[0] = 0;
  iVar10 = mobyutil::MB_damage(lVar8,0x330000,0);
  mobyutil::MB_HandleDamage(moby,iVar10,uVar18,0,auStack_90,local_8c,0,4);
  fastfunc::FastDecTimerS16(uVar18 + 6);
  sVar3 = *(short *)((int)pfVar4 + 6);
  sVar14 = idol::GetAnimDuration(0x2d);
  if (((sVar3 < sVar14) && (iVar10 != 0)) && (moby->state != 'c')) {
    sVar3 = *(short *)(*(int *)(iVar10 + 0x20) + 0xa6);
    if (((sVar3 == 0xb0) || (sVar3 == 0xb1)) && (*(short *)((int)pfVar4 + 6) != 0)) {
      *(undefined4 *)(iVar10 + 0x2c) = 0;
    }
    if (moby->group != -1) {
      mobyutil::MB_SetGroupField(moby->group,1);
    }
    if (*(int *)(iVar10 + 0x2c) != 0) {
      fVar12 = *pfVar4 - *(float *)(iVar10 + 0x2c);
      pfVar4[0x44] = 0.008;
      pfVar4[0x45] = 0.0005;
      *pfVar4 = fVar12;
      fVar7 = DAT_0085a3f0;
      fVar6 = mobyutil::g_FrameTime;
      pfVar4[0x49] = 1.26117e-44;
      pfVar4[0x46] = fVar7 * fVar6;
      fVar7 = DAT_0085a3ec;
      *(undefined1 *)((int)pfVar4 + 0x13d) = 0;
      pfVar4[0x47] = fVar7 * fVar6;
      fVar6 = mobyutil::g_FrameTime;
      if (dVar25 < (double)fVar12) {
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        mobyutil::MB_StartKick(lVar8,uVar18 + 0x100);
        pfVar4[0x54] = 5.0;
        pfVar4[0x55] = 10.0;
        moby->state = '\x06';
        *(undefined1 *)((int)pfVar4 + 0xf7) = 0xfa;
        uVar13 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pfVar4 + 6) = uVar13;
        mobyutil::MB_UpdateLightsTransition(lVar8,uVar18 + 0xf0);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        pfVar4[0x46] = fVar6 * 8.0;
        pfVar4[0x47] = fVar6 * 10.0;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        mobyutil::MB_StartKick(lVar8,uVar18 + 0x100);
        pfVar4[0x54] = 11.0;
        pfVar4[0x55] = 18.0;
        moby->state = 'c';
        *(undefined1 *)((int)pfVar4 + 0xf7) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar8,uVar18 + 0xf0);
      }
    }
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 10) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        FUN_005e7e98(uVar18 + 0x1b0,lVar16);
        if (*(short *)((int)pfVar4 + 0x1ea) == 0) {
          fVar12 = (moby->pos).z;
          moby->state = '\x0e';
          (moby->pos).z = fVar12 + 6.0;
        }
        else {
          moby->state = '\x01';
        }
        *pfVar4 = 1.0;
        *(undefined2 *)(pfVar4 + 1) = 1;
        *(undefined2 *)(pfVar4 + 0x7d) = 0;
        *(undefined2 *)(pfVar4 + 0x7a) = 0;
        mobyutil::MB_InitDefaultParams(pfVar4 + 0x58);
        pfVar4[0x5b] = 2.0;
        pfVar4[0x5a] = 2.0;
        fVar12 = mobyutil::g_FrameTime;
        pfVar4[0x58] = 1.27378e-42;
        pfVar4[0x61] = pfVar4[0x79] * fVar12;
        uVar11 = rand();
        if ((uVar11 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        pfVar4[0x2c] = (float)&DAT_0085a3fc;
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar8,2,0,0);
        }
      }
      else if (bVar1 < 2) {
        FUN_005e81f0(auStack_1a0,&g_heroPosition,lVar16);
        dVar25 = (double)FUN_005e8030(auStack_1a0);
        if ((((double)(pfVar4[0x77] + 4.0) <= dVar25) ||
            (8.0 <= ABS((moby->pos).z - g_heroPosition.z))) ||
           (iVar10 = mobyutil::MB_randInt(0x13), iVar10 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar10 = mobyutil::MB_randInt(0x13), iVar10 == 0)) {
            uVar9 = mobyutil::MB_randInt(0x100);
            fVar12 = pfVar4[0x76];
            if ((uVar9 & 1) != 0) {
              fVar12 = -fVar12;
              pfVar4[0x76] = fVar12;
            }
            pfVar4[0x75] = fVar12 * 0.017453292;
            dVar25 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            pfVar4[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar25 + 0.5));
            moby->state = '\x03';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar25 = (double)FUN_005e8030(auStack_1a0);
            if (((double)(pfVar4[0x77] + 6.0) < dVar25) &&
               ((*(short *)((int)pfVar4 + 0x1ea) == 0 &&
                (moby->state = '\x10', moby->animationId != '\x02')))) {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar8,2,0,(int)(animationSpeed * 3.5));
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x05') {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 3.5));
          }
        }
      }
      else if (bVar1 < 3) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar8,
                   &DAT_0043a108,uVar18 + 0x1d0);
        FUN_005e81f0(auStack_170,&g_heroPosition,lVar16);
        dVar25 = (double)FUN_005e8030(auStack_170);
        if ((((double)pfVar4[0x77] <= dVar25) || (8.0 <= ABS((moby->pos).z - g_heroPosition.z))) ||
           (iVar10 = mobyutil::MB_randInt(0x13), iVar10 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar10 = mobyutil::MB_randInt(0x13), iVar10 == 0)) {
            uVar9 = mobyutil::MB_randInt(0x100);
            fVar12 = pfVar4[0x76];
            if ((uVar9 & 1) != 0) {
              fVar12 = -fVar12;
              pfVar4[0x76] = fVar12;
            }
            pfVar4[0x75] = fVar12 * 0.017453292;
            dVar25 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            pfVar4[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar25 + 0.5));
            moby->state = '\x03';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          uVar9 = mobyutil::MB_randInt(0x100);
          fVar12 = pfVar4[0x76];
          if ((uVar9 & 1) != 0) {
            fVar12 = -fVar12;
            pfVar4[0x76] = fVar12;
          }
          pfVar4[0x75] = fVar12 * 0.017453292;
          dVar25 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          pfVar4[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar25 + 0.5));
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x05') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x02')) {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar8,2,0,(int)(animationSpeed * 3.5));
        }
      }
      else {
        dVar26 = ABS((double)((moby->pos).z - (g_heroMobyPtr->pos).z));
        dVar25 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        dVar25 = (double)(float)(dVar26 / dVar25);
        if (pfVar4[0x7f] == -NAN) {
          local_150.x = g_heroPosition.x;
          local_150.y = g_heroPosition.y;
          local_150.z = g_heroPosition.z;
          local_150.w = g_heroPosition.w;
        }
        else {
          path::Path_PickNextNode
                    (moby,Splines[(int)pfVar4[0x7f]],(Vec4 *)&g_heroPosition,&local_150);
        }
        dVar26 = (double)FUN_005e8338((double)(local_150.x - (moby->pos).x),
                                      (double)(local_150.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  ((double)(float)(dVar26 + (double)pfVar4[0x75]),0x3fa99999a0000000,
                   0x3fd3333340000000,0x3fc99999a0000000,lVar8);
        dVar26 = (double)mathfunc::cosf((moby->rotation).z);
        dVar23 = 2.0;
        local_160 = (float)(dVar26 * 2.0);
        dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_15c = (float)(dVar26 * dVar23);
        local_158 = 0;
        dVar26 = 1.0;
        uVar9 = mobyutil::MB_UpdateNavMove
                          (0x3ff0000000000000,moby,(MobyInstance *)(pfVar4 + 0x58),&local_160,
                           &local_150);
        iVar10 = fastfunc::FastDecTimerS32(uVar18 + 0x1f0);
        if (iVar10 != 0) {
          dVar23 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          fVar12 = animationSpeed;
          pfVar4[0x75] = -pfVar4[0x75];
          pfVar4[0x7c] = (float)(int)(fVar12 * ((float)(longlong)dVar23 + 0.5));
        }
        FUN_005e81f0(auStack_140,&g_heroPosition,uVar18 + 0x1b0);
        dVar23 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        uVar2 = moby->animationId;
        if ((1.5 <= dVar23) || ((uVar9 & 2) != 0)) {
          if ((dVar26 < dVar25) || ((uVar9 & 2) != 0)) {
            (moby->pos).x = local_1e0;
            (moby->pos).y = local_1dc;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 3.5));
            }
          }
          else {
            dVar25 = (double)FUN_005e8030(auStack_140);
            if (((double)(pfVar4[0x77] + 4.0) <= dVar25) ||
               (8.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
              if (moby->setByGroup != '\x01') {
                moby->state = '\x05';
              }
            }
            else if (moby->group != -1) {
              mobyutil::MB_SetGroupField(moby->group,1);
            }
          }
        }
        else {
          moby->state = '\x04';
          if (uVar2 != '\x01') {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 3.5));
          }
        }
        moby->setByGroup = '\0';
      }
    }
    else if (bVar1 < 7) {
      if (bVar1 < 5) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        dVar25 = 0.20000000298023224;
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar8,
                   &DAT_0043a108,uVar18 + 0x1d0);
        if (((moby->updateId == moby->animationId) &&
            (dVar26 = (double)mobyfunc::BlendAnimFrame(moby), dVar26 == 13.0)) &&
           ((ABS((moby->pos).z - g_heroPosition.z) < 0.5 &&
            (dVar26 = (double)FUN_005e8588(lVar16,&g_heroPosition), dVar26 < 2.0)))) {
          dVar26 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          dVar26 = (double)fastfunc::FastSubRots((float)dVar26,(moby->rotation).z);
          if (dVar26 < 0.2617993950843811) {
            dVar26 = (double)mathfunc::cosf((moby->rotation).z);
            local_130 = (float)(dVar26 * dVar25);
            dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_12c = (float)(dVar26 * dVar25);
            local_128 = 0;
            local_120 = (g_heroMobyPtr->pos).x;
            local_11c = (g_heroMobyPtr->pos).y;
            local_114 = (g_heroMobyPtr->pos).w;
            local_118 = (g_heroMobyPtr->pos).z + 0.75;
            mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x43a108,&local_120,&local_130);
          }
        }
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (dVar25 = (double)FUN_005e8588(lVar16,&g_heroPosition), 1.5 < dVar25)) &&
           (moby->state = '\x03', moby->animationId != '\0')) {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
        }
        dVar25 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar16,0);
        fVar12 = -(DAT_0071f418 * 9.8 - pfVar4[0x5e]);
        pfVar4[0x5e] = fVar12;
        fVar12 = (moby->pos).z + fVar12;
        (moby->pos).z = fVar12;
        if ((double)fVar12 < dVar25) {
          pfVar4[0x5e] = 0.0;
          (moby->pos).z = (float)dVar25;
        }
      }
      else if (bVar1 < 6) {
        if (pfVar4[0x7f] == -NAN) {
          local_100.x = pfVar4[0x6c];
          local_100.y = pfVar4[0x6d];
          local_100.z = pfVar4[0x6e];
          local_100.w = pfVar4[0x6f];
        }
        else {
          path::Path_PickNextNode
                    (moby,Splines[(int)pfVar4[0x7f]],(Vec4 *)(pfVar4 + 0x6c),&local_100);
        }
        uVar19 = FUN_005e8338((double)(local_100.x - (moby->pos).x),
                              (double)(local_100.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar8);
        dVar25 = (double)mathfunc::cosf((moby->rotation).z);
        dVar26 = 2.0;
        local_110 = (float)(dVar25 * 2.0);
        dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_10c = (float)(dVar25 * dVar26);
        local_108 = 0;
        uVar9 = mobyutil::MB_UpdateNavMove
                          (0x3ff0000000000000,moby,(MobyInstance *)(pfVar4 + 0x58),&local_110,
                           &local_100);
        dVar25 = (double)FUN_005e8588(lVar16,uVar18 + 0x1b0);
        if ((dVar25 < dVar26) && (moby->state = '\x01', moby->animationId != '\x02')) {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar8,2,0,(int)(animationSpeed * 3.5));
        }
        FUN_005e81f0(auStack_f0,&g_heroPosition,uVar18 + 0x1b0);
        dVar25 = (double)FUN_005e8030(auStack_f0);
        if ((double)pfVar4[0x77] <= dVar25) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x03';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
            }
          }
          else if ((uVar9 & 2) != 0) {
            (moby->pos).x = local_1e0;
            uVar2 = moby->animationId;
            (moby->pos).y = local_1dc;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 3.5));
            }
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
          }
        }
        moby->setByGroup = '\0';
      }
      else {
        uVar11 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar4 + 0x40));
        if ((uVar11 & 1) != 0) {
          moby->state = '\t';
          if (moby->animationId == '\x04') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar8,4,8,(int)(animationSpeed * 3.5));
          return;
        }
        if ((int)(moby->pos).z < 0) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar1 < 8) {
      iVar10 = FUN_0048c188(lVar8,uVar18 + 0x100);
      if (iVar10 != 0) {
        moby->state = '\0';
        *(undefined2 *)(pfVar4 + 0x2a) = 0;
      }
    }
    else if (bVar1 < 9) {
      FUN_005e81f0(auStack_190,&g_heroPosition,lVar16);
      dVar25 = (double)FUN_005e8030(auStack_190);
      if (((dVar25 < (double)(pfVar4[0x77] - 4.0)) && (ABS((moby->pos).z - g_heroPosition.z) < 8.0))
         && (iVar10 = mobyutil::MB_randInt(0x13), iVar10 == 0)) {
        fVar12 = (moby->pos).z;
        uVar2 = moby->animationId;
        moby->state = '\x02';
        (moby->pos).z = fVar12 + 1.0;
        if (uVar2 != '\x05') {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 3.5));
        }
      }
    }
    else {
      dVar25 = (double)mobyfunc::BlendAnimFrame(moby);
      if (29.0 < dVar25) {
        moby->state = '\x03';
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
        return;
      }
    }
    goto LAB_0043c460;
  }
  if (0xe < bVar1) {
    if (bVar1 < 0x12) {
      if (bVar1 < 0x10) {
        uVar19 = FUN_005e8338((double)(pfVar4[0x70] - (moby->pos).x),
                              (double)(pfVar4[0x71] - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar8);
        lVar17 = uVar18 + 0x20;
        FUN_005e81f0(lVar17,uVar18 + 0x1c0,lVar16);
        mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 4.0),(Vec4 *)lVar17);
        FUN_005e7f54(auStack_1b0,lVar17,lVar16);
        iVar10 = stub::STUB_00055ac0_RET_0(auStack_1b0,400,0,lVar8,0);
        if (iVar10 == 0) {
          FUN_005e7e98(lVar16,auStack_1b0);
        }
        else {
          FUN_005e7e70(lVar17);
          moby->state = '\x0e';
        }
        dVar26 = (double)FUN_005e8030(lVar17);
        if (dVar26 == dVar25) {
          moby->state = '\x0e';
        }
      }
      else if (bVar1 < 0x11) {
        dVar25 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar16,0);
        mobyutil::Delt(mobyutil::g_FrameTime * 8.0,DAT_0071f418 * 10.8,pfVar4 + 10);
        fVar12 = (moby->pos).z + pfVar4[10];
        (moby->pos).z = fVar12;
        if ((float)(dVar25 + 6.0) <= fVar12) {
          (moby->pos).z = (float)(dVar25 + 6.0);
          moby->state = '\x0e';
          FUN_005e7e70(uVar18 + 0x20);
          if (moby->animationId != '\x02') {
            uVar19 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar8,2,0,uVar19);
          }
        }
      }
      else {
        dVar25 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar16,0);
        mobyutil::Delt(mobyutil::g_FrameTime * -8.0,DAT_0071f418 * 10.8,pfVar4 + 10);
        fVar12 = (moby->pos).z + pfVar4[10];
        (moby->pos).z = fVar12;
        if ((double)fVar12 <= dVar25) {
          (moby->pos).z = (float)dVar25;
          uVar9 = mobyutil::MB_randInt(0x100);
          fVar12 = pfVar4[0x76];
          if ((uVar9 & 1) != 0) {
            fVar12 = -fVar12;
            pfVar4[0x76] = fVar12;
          }
          pfVar4[0x75] = fVar12 * 0.017453292;
          dVar25 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_80 = (longlong)(int)dVar25;
          fVar12 = (float)idol::GetAnimDuration((int)dVar25);
          pfVar4[0x7c] = fVar12;
          moby->state = '\x03';
          FUN_005e7e70(uVar18 + 0x20);
          if (moby->animationId != '\0') {
            uVar19 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar8,0,0,uVar19);
          }
        }
      }
    }
    else if (bVar1 == 99) {
      uVar11 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar4 + 0x40));
      if ((uVar11 & 0x40) != 0) {
        mobyutil::MB_SpawnExplosionSparks
                  (0x3fe0000000000000,0x402a000000000000,lVar8,lVar16,&DAT_0043a108,6);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_0043c460;
  }
  if (bVar1 < 0xc) {
    if (bVar1 < 0xb) {
      uVar19 = FUN_005e8338((double)(pfVar4[0x6c] - (moby->pos).x),
                            (double)(pfVar4[0x6d] - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar8,&DAT_0043a108
                 ,uVar18 + 0x1d0);
      FUN_005e81f0(auStack_180,&g_heroPosition,uVar18 + 0x1b0);
      dVar25 = (double)FUN_005e8030(auStack_180);
      if (((dVar25 < (double)pfVar4[0x77]) && (ABS(pfVar4[0x6e] - g_heroPosition.z) < 8.0)) ||
         (moby->setByGroup == '\x02')) {
        if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,2);
        }
        if (moby->animationId != '\a') {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar8,7,0,(int)(animationSpeed * 3.5));
        }
        fVar12 = DAT_0085a3f8;
        dVar25 = (double)DAT_0085a3f8;
        pfVar4[0x45] = 0.0;
        pfVar4[0x44] = fVar12;
        fVar12 = DAT_0085a3f4 * mobyutil::g_FrameTime;
        pfVar4[0x46] = fVar12;
        dVar25 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)fVar12,-dVar25,lVar16,uVar18 + 0x1b0);
        pfVar4[0x47] = (float)dVar25;
        *(undefined1 *)((int)pfVar4 + 0x13d) = 0;
        fVar12 = (moby->rotation).z;
        pfVar4[0x49] = 1.82169e-44;
        mobyutil::MB_StartKick((double)fVar12,lVar8,uVar18 + 0x100,0xd,7,1,0);
        pfVar4[0x54] = 5.0;
        pfVar4[0x55] = 10.0;
        moby->state = '\v';
      }
    }
    else {
      uVar11 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar4 + 0x40));
      if ((uVar11 & 1) != 0) {
        moby->state = '\x03';
        uVar18 = mobyutil::MB_randInt(0x100);
        fVar12 = pfVar4[0x76];
        if ((uVar18 & 1) != 0) {
          fVar12 = -fVar12;
          pfVar4[0x76] = fVar12;
        }
        pfVar4[0x75] = fVar12 * 0.017453292;
        dVar25 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        fVar12 = animationSpeed;
        pfVar4[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar25 + 0.5));
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(fVar12 * 3.5);
        mobyutil::MB_SetAnimation(lVar8,0,8,(int)(fVar12 * 3.5));
        return;
      }
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_0043c460;
  }
  if (bVar1 < 0xd) {
    dVar26 = ABS((double)((moby->pos).z - (g_heroMobyPtr->pos).z));
    dVar25 = (double)FUN_005e8588(lVar16,&g_heroPosition);
    dVar25 = (double)(float)(dVar26 / dVar25);
    if (pfVar4[0x7f] == -NAN) {
      local_d0.x = pfVar4[0x6c];
      local_d0.y = pfVar4[0x6d];
      local_d0.z = pfVar4[0x6e];
      local_d0.w = pfVar4[0x6f];
    }
    else {
      path::Path_PickNextNode(moby,Splines[(int)pfVar4[0x7f]],(Vec4 *)(pfVar4 + 0x6c),&local_d0);
    }
    uVar19 = FUN_005e8338((double)(local_d0.x - (moby->pos).x),(double)(local_d0.y - (moby->pos).y))
    ;
    mobyutil::OrganicDeltAngSpeed
              (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar8);
    dVar26 = (double)mathfunc::cosf((moby->rotation).z);
    dVar23 = 2.0;
    local_e0 = (float)(dVar26 * 2.0);
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_dc = (float)(dVar26 * dVar23);
    local_d8 = 0;
    dVar23 = 1.0;
    uVar9 = mobyutil::MB_UpdateNavMove
                      (0x3ff0000000000000,moby,(MobyInstance *)(pfVar4 + 0x58),&local_e0,&local_d0);
    FUN_005e81f0(auStack_c0,&g_heroPosition,uVar18 + 0x1b0);
    dVar26 = (double)FUN_005e8588(lVar16,&g_heroPosition);
    if ((1.5 <= dVar26) || (dVar23 < dVar25)) {
      if ((dVar23 < dVar25) || ((uVar9 & 2) != 0)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          mobyutil::MB_randInt(4);
          iVar10 = mobyutil::MB_randInt(4);
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation
                    (lVar8,((LZCOUNT(-iVar10) << 0x3a) >> 0x3f & 3U) + 2,0,
                     (int)(animationSpeed * 3.5));
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\0') {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
        }
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x01') {
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 3.5));
      }
    }
    moby->setByGroup = '\0';
    goto LAB_0043c460;
  }
  if (0xd < bVar1) {
    FUN_005e81f0(auStack_1d0,&g_heroPosition,lVar16);
    dVar26 = (double)FUN_005e8030(auStack_1d0);
    if ((((double)(pfVar4[0x77] + 4.0) <= dVar26) || (8.0 <= ABS((moby->pos).z - g_heroPosition.z)))
       || (iVar10 = mobyutil::MB_randInt(0x13), iVar10 != 0)) {
      if ((moby->setByGroup == '\x01') && (iVar10 = mobyutil::MB_randInt(0x13), iVar10 == 0)) {
        uVar9 = mobyutil::MB_randInt(0x100);
        fVar12 = pfVar4[0x76];
        if ((uVar9 & 1) != 0) {
          fVar12 = -fVar12;
          pfVar4[0x76] = fVar12;
        }
        pfVar4[0x75] = fVar12 * 0.017453292;
        dVar25 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        local_80 = (longlong)(int)dVar25;
        fVar12 = (float)idol::GetAnimDuration((int)dVar25);
        pfVar4[0x7c] = fVar12;
        moby->state = '\x11';
        FUN_005e7e70(uVar18 + 0x20);
        if (moby->animationId != '\x02') {
          uVar19 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar8,2,0,uVar19);
        }
        moby->setByGroup = '\0';
      }
      else {
        iVar10 = fastfunc::FastDecTimerS32(uVar18 + 0x1ec);
        if (iVar10 != 0) {
          fVar12 = (float)idol::GetAnimDuration(0x78);
          pfVar4[0x7b] = fVar12;
          mobyutil::MB_randRangeFloat((float)dVar25,3.0);
          dVar25 = (double)mobyutil::MB_randRot();
          mathfunc::cosf((float)dVar25);
          FUN_005e8128(dVar25);
          mobyutil::MB_randRangeFloat(5.0,7.0);
          FUN_005e7f54(uVar18 + 0x1c0,local_1c0,uVar18 + 0x1b0);
          moby->state = '\x0f';
        }
      }
    }
    else {
      moby->state = '\x11';
      if (moby->animationId != '\x02') {
        uVar19 = idol::GetAnimDuration(3);
        mobyutil::MB_SetAnimation(lVar8,2,0,uVar19);
      }
    }
    goto LAB_0043c460;
  }
  if ((moby->updateId != '\0') && (moby->animationId != '\0')) {
    local_80 = (longlong)(int)(animationSpeed * 3.5);
    mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
  }
  dVar26 = (double)mathfunc::cosf((moby->rotation).z);
  local_b0 = (float)((double)(pfVar4[0x79] * mobyutil::g_FrameTime) * dVar26);
  dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_a8 = 0;
  local_ac = (float)((double)(pfVar4[0x79] * mobyutil::g_FrameTime) * dVar26);
  FUN_005e7f54(&local_a0,lVar16,&local_b0);
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar22 = 2.0;
    dVar23 = 1.5707963705062866;
    dVar26 = -1.5707963705062866;
    pMVar5 = MobyUpdateChainStart;
    do {
      if (((pMVar5 != moby) && (pMVar5->state < 0x80)) &&
         ((pMVar5->oClass == RATCHET || (pMVar5->oClass == 0x2e3)))) {
        pvVar15 = &pMVar5->pos;
        dVar20 = (double)FUN_005e8588(&local_a0,pvVar15);
        if (dVar20 < dVar22) {
          dVar20 = (double)(moby->rotation).z;
          dVar24 = (double)(moby->pos).z;
          uVar19 = FUN_005e8338((double)((pMVar5->pos).x - (moby->pos).x),
                                (double)((pMVar5->pos).y - (moby->pos).y));
          dVar21 = (double)fastfunc::FastDiffRots(dVar20,uVar19);
          dVar20 = dVar26;
          if (dVar25 < dVar21) {
            dVar20 = dVar23;
          }
          dVar20 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)mobyutil::g_FrameTime * dVar20));
          (moby->rotation).z = (float)dVar20;
          FUN_005e81f0(&local_a0,lVar16,pvVar15);
          FUN_005e7f98(dVar22,&local_a0,&local_a0);
          FUN_005e7f54(&local_a0,&local_a0,pvVar15);
          local_98 = (float)dVar24;
        }
      }
      pMVar5 = (MobyInstance *)pMVar5->pChain;
    } while (pMVar5 != (MobyInstance *)0x0);
  }
  (moby->pos).x = local_a0;
  (moby->pos).y = local_9c;
  (moby->pos).z = local_98;
  (moby->pos).w = local_94;
  dVar25 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar16,0);
  fVar12 = -(DAT_0071f418 * 9.8 - pfVar4[0x5e]);
  pfVar4[0x5e] = fVar12;
  fVar12 = (moby->pos).z + fVar12;
  (moby->pos).z = fVar12;
  if ((double)fVar12 < dVar25) {
    pfVar4[0x5e] = 0.0;
    (moby->pos).z = (float)dVar25;
  }
  if (pfVar4[0x7e] == 0.0) {
LAB_0043c408:
    moby->state = '\x05';
    if (moby->animationId != '\0') {
      local_80 = (longlong)(int)(animationSpeed * 3.5);
      mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
    }
  }
  else {
    dVar25 = (double)FUN_005e8588(lVar16,(ulonglong)(uint)pfVar4[0x7e] + 0x10);
    dVar26 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pfVar4 + 0x1f6));
    if (dVar26 < dVar25) goto LAB_0043c408;
  }
  moby->setByGroup = '\0';
LAB_0043c460:
  mobyutil::MB_ColorDyingMoby(lVar8,uVar18 + 0xf0);
  return;
}



//==== 0043c4b4  ns=mobyupdate_helpers  size=0x58
// sig: undefined M739_0043c4b4(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M739_0043c4b4(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}



//==== 0043c50c  ns=mobyupdate_helpers  size=0x58
// sig: undefined M739_0043c50c(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M739_0043c50c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}



//==== 0043c564  ns=mobyupdate_helpers  size=0x58
// sig: undefined M739_0043c564(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M739_0043c564(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}



//==== 0043c5bc  ns=mobyupdate_helpers  size=0x38
// sig: undefined M739_0043c5bc(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M739_0043c5bc(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}



//==== 0043c5f4  ns=mobyupdate_helpers  size=0x40
// sig: undefined M739_0043c5f4(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M739_0043c5f4(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x40;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 0043c634  ns=mobyupdate_helpers  size=0x14
// sig: undefined M739_0043c634(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M739_0043c634(void)

{
  DAT_0085a454 = 0x10000;
  return;
}



//==== 0043c668  ns=mobyupdate_helpers  size=0x624
// sig: undefined M739_0043c668(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M739_0043c668(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r26;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x230;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0x48] = in_LR;
  puVar10[0x44] = in_f30;
  puVar10[0x45] = in_f31;
  puVar10[0x43] = unaff_r31;
  gVar13 = g_gameMode;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar10[0x42] = unaff_r30;
  puVar10[0x41] = unaff_r29;
  puVar10[0x40] = unaff_r28;
  puVar10[0x3f] = unaff_r27;
  puVar10[0x3e] = unaff_r26;
  if (gVar13 != GAME_MODE_SCENE) {
    uVar20 = 0;
    do {
      uVar8 = *(uint *)(iVar7 + 0x24);
      fVar6 = ABS(*(float *)(iVar7 + 0x24));
      fVar3 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                   *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
      fVar2 = ABS(fVar3);
      *(float *)((int)puVar10 + 0x194) = fVar3;
      *(float *)(puVar10 + 0x33) = fVar2 - fVar6;
      dVar25 = 0.0;
      dVar26 = 0.7853981852531433;
      uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x194) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x33) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar10 + 0x194));
      if (*(float *)(puVar10 + 0x33) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      if (*(float *)(puVar10 + 0x33) - 0.0 < 0.0) {
        fVar6 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar22 = dVar25;
      if (0.0 < fVar3) {
        lVar19 = uVar14 - 0x220;
        lVar16 = uVar14 - 0x74;
        lVar18 = uVar14 - 100;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x39) = fVar3;
        *(float *)(puVar10 + 0x38) = fVar3;
        *(float *)((int)puVar10 + 0x1c4) = fVar3;
        *(float *)((int)puVar10 + 0x1bc) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x38) = *(float *)(puVar10 + 0x38) * fVar6;
        *(float *)((int)puVar10 + 0x1c4) = *(float *)((int)puVar10 + 0x1c4) * fVar3;
        *(float *)(puVar10 + 0x39) = *(float *)(puVar10 + 0x39) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x1bc) = *(float *)((int)lVar19 + 0x1ac) * fVar3 * fVar3;
          iVar11 = (int)lVar16;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x74;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar3 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1bc) = *(float *)((int)lVar19 + 0x1bc) * fVar3;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar11 + 0x1bc)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar22 = (double)fastfunc::FastWrapRot((float)-dVar22,1.5707964);
      *(float *)(puVar10 + 0xe) = (float)dVar22;
      uVar8 = *(uint *)(iVar7 + 0x28);
      uVar9 = *(uint *)(iVar7 + 0x20);
      dVar23 = ABS((double)*(float *)(iVar7 + 0x28));
      dVar22 = ABS((double)*(float *)(iVar7 + 0x20));
      *(float *)(puVar10 + 0x32) = (float)(dVar23 - dVar22);
      uVar15 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x32) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      dVar24 = dVar23;
      if ((double)*(float *)(puVar10 + 0x32) - dVar25 < 0.0) {
        dVar24 = dVar22;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if ((double)*(float *)(puVar10 + 0x32) - dVar25 < 0.0) {
        dVar22 = dVar23;
      }
      if (dVar25 < dVar24) {
        lVar19 = uVar14 - 0x220;
        lVar18 = uVar14 - 0x84;
        lVar16 = uVar14 - 0x94;
        lVar21 = 2;
        fVar2 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar10 + 0x35) = fVar2;
        *(float *)(puVar10 + 0x34) = fVar2;
        *(float *)((int)puVar10 + 0x1a4) = fVar2;
        *(float *)((int)puVar10 + 0x19c) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x34) = *(float *)(puVar10 + 0x34) * fVar5;
        *(float *)((int)puVar10 + 0x1a4) = *(float *)((int)puVar10 + 0x1a4) * fVar2;
        *(float *)(puVar10 + 0x35) = *(float *)(puVar10 + 0x35) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x19c) = *(float *)((int)lVar19 + 0x18c) * fVar2 * fVar2;
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x94;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x19c) = *(float *)((int)lVar19 + 0x19c) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          iVar12 = (int)lVar18;
          lVar19 = lVar19 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar11 + 0x19c)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar6 + fVar3);
      }
      *(float *)((int)puVar10 + 0x74) = (float)dVar25;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)((int)puVar10 + 0x7c) = 0;
      iVar11 = worldUpdateTime;
      DAT_010ccd30 = 0;
      puVar10[0x3c] = (longlong)(int)(animationSpeed * 180.5);
      dVar25 = (double)fastfunc::FastIntToDouble
                                 (iVar11 - (iVar11 / *(int *)((int)puVar10 + 0x1e4)) *
                                           *(int *)((int)puVar10 + 0x1e4));
      dVar26 = (double)fastfunc::FastAddRots
                                 ((float)(dVar25 * 6.2831854820251465) / (animationSpeed * 180.0));
      dVar22 = 1.0;
      dVar25 = dVar22;
      if ((uVar20 & 1) != 0) {
        dVar25 = -1.0;
      }
      DAT_010ccd34 = (float)(dVar26 * dVar25);
      DAT_010ccd38 = 0;
      DAT_010ccd3c = 0;
      fastfunc::FastEulerToMtx1(uVar14 - 0x170);
      lVar19 = uVar14 - 0x1b0;
      fastfunc::FastEulerToMtx1(lVar19,uVar14 - 0x1c0);
      fastfunc::FastVecMtx4Mul(lVar19,lVar19,uVar14 - 0x170);
      *(undefined4 *)(puVar10 + 0x16) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)((int)puVar10 + 0xb4) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)(puVar10 + 0x17) = *(undefined4 *)(iVar7 + 0x18);
      uVar4 = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)(puVar10 + 0x28) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0xbc) = uVar4;
      *(undefined4 *)((int)puVar10 + 0x144) = 0x80808080;
      *(undefined4 *)(puVar10 + 0x29) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0x14c) = 0x80808080;
      uVar15 = draw::GetEffectTex(((LZCOUNT(-(uVar20 & 1)) << 0x3a) >> 0x3f) + 0x12);
      puVar10[0x2f] = uVar15;
      uVar15 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      puVar10[0x30] = uVar15;
      uVar15 = FUN_00502f08(0,0,0,0,0,0);
      puVar10[0x2e] = uVar15;
      uVar15 = idol_draw::PackCmd(0,2,0,1,0x80);
      puVar10[0x31] = uVar15;
      *(undefined4 *)((int)puVar10 + 0x104) = 0;
      *(undefined4 *)(puVar10 + 0x20) = 0xbf800000;
      *(float *)(puVar10 + 0x21) = (float)dVar22;
      *(float *)((int)puVar10 + 0x10c) = (float)dVar22;
      *(float *)(puVar10 + 0x22) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x114) = 0;
      *(float *)(puVar10 + 0x23) = (float)dVar22;
      *(float *)((int)puVar10 + 0x11c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x24) = 0xbf800000;
      *(undefined4 *)((int)puVar10 + 0x124) = 0;
      *(undefined4 *)(puVar10 + 0x25) = 0xbf800000;
      *(float *)((int)puVar10 + 300) = (float)dVar22;
      *(float *)(puVar10 + 0x26) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x134) = 0;
      *(undefined4 *)(puVar10 + 0x27) = 0xbf800000;
      *(float *)((int)puVar10 + 0x13c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2a) = 0;
      *(float *)((int)puVar10 + 0x154) = (float)dVar22;
      *(float *)(puVar10 + 0x2b) = (float)dVar22;
      *(float *)((int)puVar10 + 0x15c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2c) = 0;
      *(undefined4 *)((int)puVar10 + 0x164) = 0;
      *(float *)(puVar10 + 0x2d) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x16c) = 0;
      draw::FastDrawQuad(uVar14 - 0x130,lVar19,1,EffectTexHeaders,9);
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < 2);
  }
  return;
}



//==== 0043cc98  ns=Global  size=0x16c
// sig: undefined Spawn_Moby74_MineBall(void)
// callers(1): 002d2780 mobyupdate_unsorted::UpdateMoby_190
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * Spawn_Moby74_MineBall(undefined4 param_1,f32 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pMVar3 = mobyfunc::CreateMoby(MINE_004A);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0x7f;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    puVar1 = (undefined4 *)pMVar3->pVar;
    pMVar3->scale = pMVar3->scale * 0.5;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    puVar1[0xc] = param_1;
    puVar1[0x1e] = 0;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    dVar6 = 1.0471975803375244;
    dVar5 = 3.1415927410125732;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * 1.0471976,mobyutil::g_FrameTime * 3.1415927);
    puVar1[0xe] = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar6),
                               (float)((double)mobyutil::g_FrameTime * dVar5));
    puVar1[0xf] = (float)dVar4;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    uVar2 = worldUpdateTime;
    puVar1[0x1d] = 0;
    puVar1[0x17] = uVar2;
    puVar1[0x1a] = 0xffffffff;
    pMVar3->collision = (ushort *)0x0;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 0043ce28  ns=Global  size=0x400
// sig: undefined FUN_0043ce28(void)
// callers(1): 002d2780 mobyupdate_unsorted::UpdateMoby_190
// callees(4): 00057820 collproc::CollLine; 000fcbe8 mobyutil::MB_randRangeFloat; 001122ac mobyutil::MB_GetPlatformParent; 00500608 fastfunc::FastVecNormalize

void FUN_0043ce28(undefined4 *param_1,int param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  undefined2 uVar4;
  MobyInstance *pMVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 local_60 [16];
  
  dVar18 = -1.0;
  dVar17 = 1.0;
  dVar19 = 0.0;
  pfVar3 = *(float **)(param_2 + 0x78);
  uVar10 = ZEXT48(pfVar3);
  dVar11 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
  dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
  dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
  *(undefined1 *)(param_2 + 0x20) = 1;
  *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) * 1.5384616;
  dVar17 = (double)mobyutil::MB_randRangeFloat
                             (mobyutil::g_FrameTime * 0.01,mobyutil::g_FrameTime * 0.1);
  bVar1 = g_standingOnMoby != 0;
  dVar15 = (double)SQRT((float)(dVar18 * dVar18 +
                               (double)(float)(dVar11 * dVar11 + (double)(float)(dVar12 * dVar12))))
  ;
  dVar13 = (double)(float)(dVar17 / dVar15);
  dVar17 = dVar19;
  if (dVar19 - dVar15 < 0.0) {
    dVar17 = (double)(float)(dVar11 * dVar13);
  }
  dVar16 = dVar19;
  if (dVar19 - dVar15 < 0.0) {
    dVar16 = (double)(float)(dVar12 * dVar13);
  }
  dVar14 = dVar19;
  if (dVar19 - dVar15 < 0.0) {
    dVar14 = (double)(float)(dVar18 * dVar13);
  }
  if (dVar15 - dVar19 < 0.0) {
    dVar17 = (double)(float)(dVar11 * dVar13);
  }
  if (dVar15 - dVar19 < 0.0) {
    dVar16 = (double)(float)(dVar12 * dVar13);
  }
  if (dVar15 - dVar19 < 0.0) {
    dVar14 = (double)(float)(dVar18 * dVar13);
  }
  *pfVar3 = (float)(dVar17 + (double)*param_3);
  pfVar3[1] = (float)(dVar16 + (double)param_3[1]);
  fVar2 = param_3[2];
  pfVar3[3] = 0.0;
  pfVar3[2] = (float)(dVar14 + (double)fVar2);
  if ((bVar1) && (iVar6 = mobyutil::MB_GetPlatformParent(), iVar6 != 0)) {
    *pfVar3 = *pfVar3 + DAT_00969de0;
    pfVar3[1] = pfVar3[1] + DAT_00969de4;
    pfVar3[2] = pfVar3[2] + DAT_00969de8;
  }
  iVar6 = MobyUpdateChainStart;
  auVar20 = ZEXT416(0xffffffff);
  auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
  auVar20 = loadVectorLeftIndexed(0x18,0x43ce04);
  auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  iVar7 = 0;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar21
                      );
  iVar9 = 0;
  bVar1 = MobyUpdateChainStart != 0;
  auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
  auVar20 = vectorSplatHalfWord(auVar20,1);
  uVar4 = storeVectorElementHalfWordIndexed(auVar20,0x34,uVar10);
  *(undefined2 *)(pfVar3 + 0xd) = uVar4;
  if (bVar1) {
    iVar8 = 0;
    do {
      if (((*(char *)(iVar6 + 0x20) != -3 && *(char *)(iVar6 + 0x20) != -2) &&
          (*(short *)(iVar6 + 0xa6) == *(short *)(param_2 + 0xa6))) && (iVar6 != param_2)) {
        if ((iVar8 == 0) || (*(int *)(*(int *)(iVar6 + 0x78) + 0x5c) < iVar7)) {
          iVar7 = *(int *)(*(int *)(iVar6 + 0x78) + 0x5c);
          iVar8 = iVar6;
        }
        iVar9 = iVar9 + 1;
      }
      iVar6 = *(int *)(iVar6 + 0x28);
    } while (iVar6 != 0);
    if (7 < iVar9) {
      *(undefined4 *)(*(int *)(iVar8 + 0x78) + 0x5c) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_2 + 0x10) = *param_1;
  pMVar5 = g_heroMobyPtr;
  *(undefined4 *)(param_2 + 0x14) = param_1[1];
  *(undefined4 *)(param_2 + 0x18) = param_1[2];
  *(undefined4 *)(param_2 + 0x1c) = param_1[3];
  iVar6 = collproc::CollLine(local_60,param_1,0,pMVar5,0);
  if (iVar6 != 0) {
    dVar11 = (double)CollOutput.ip.x;
    *(float *)(param_2 + 0x10) = CollOutput.ip.x;
    dVar12 = (double)CollOutput.ip.y;
    *(float *)(param_2 + 0x14) = CollOutput.ip.y;
    dVar18 = (double)CollOutput.ip.z;
    *(float *)(param_2 + 0x18) = CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = CollOutput.ip.w;
    dVar13 = (double)SQRT(CollOutput.normal.z * CollOutput.normal.z +
                          CollOutput.normal.x * CollOutput.normal.x +
                          CollOutput.normal.y * CollOutput.normal.y);
    fVar2 = (float)((double)(DAT_0071f418 * 9.7) / dVar13);
    dVar17 = dVar19;
    if (dVar19 - dVar13 < 0.0) {
      dVar17 = (double)(CollOutput.normal.z * fVar2);
    }
    dVar15 = dVar19;
    if (dVar19 - dVar13 < 0.0) {
      dVar15 = (double)(CollOutput.normal.y * fVar2);
    }
    dVar16 = dVar19;
    if (dVar19 - dVar13 < 0.0) {
      dVar16 = (double)(CollOutput.normal.x * fVar2);
    }
    if (dVar13 - dVar19 < 0.0) {
      dVar17 = (double)(CollOutput.normal.z * fVar2);
    }
    if (dVar13 - dVar19 < 0.0) {
      dVar15 = (double)(CollOutput.normal.y * fVar2);
    }
    if (dVar13 - dVar19 < 0.0) {
      dVar16 = (double)(CollOutput.normal.x * fVar2);
    }
    *(float *)(param_2 + 0x18) = (float)(dVar18 + dVar17);
    *(float *)(param_2 + 0x14) = (float)(dVar12 + dVar15);
    *(float *)(param_2 + 0x10) = (float)(dVar11 + dVar16);
    fastfunc::FastVecNormalize(uVar10,uVar10,0xa10980);
    *pfVar3 = *pfVar3 * 0.6;
    pfVar3[1] = pfVar3[1] * 0.6;
    pfVar3[2] = pfVar3[2] * 0.6;
  }
  return;
}



//==== 0043d268  ns=mobyupdate_helpers  size=0x878
// sig: undefined M74_0043d268(void)
// callers(1): 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(6): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 0006d720 RegisterFuncForMoby; 001122ac mobyutil::MB_GetPlatformParent; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot
// strings: 0043d260: '?s33`'

undefined8 mobyupdate_helpers::M74_0043d268(float *param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  MobyInstance *pMVar17;
  PlayerState PVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  ulonglong in_f23;
  double dVar33;
  ulonglong in_f24;
  double dVar34;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar28 = uVar19 - 0x170;
  puVar13 = (ulonglong *)lVar28;
  *puVar13 = uVar19;
  puVar13[0x30] = in_LR;
  puVar13[0x24] = in_f22;
  puVar13[0x25] = in_f23;
  puVar13[0x26] = in_f24;
  puVar13[0x27] = in_f25;
  puVar13[0x28] = in_f26;
  puVar13[0x29] = in_f27;
  puVar13[0x2a] = in_f28;
  puVar13[0x2b] = in_f29;
  puVar13[0x2c] = in_f30;
  puVar13[0x2d] = in_f31;
  puVar13[0x1e] = unaff_r26;
  puVar13[0x23] = unaff_r31;
  puVar13[0x1f] = unaff_r27;
  puVar13[0x22] = unaff_r30;
  puVar13[0x21] = unaff_r29;
  PVar18 = g_heroState;
  puVar13[0x20] = unaff_r28;
  if ((PVar18 == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    uVar20 = 0;
  }
  else {
    fVar4 = (param_2->pos).x;
    fVar5 = (param_2->pos).y;
    *(f32 *)(puVar13 + 0x10) = fVar4;
    fVar6 = (param_2->pos).z;
    *(f32 *)((int)puVar13 + 0x84) = fVar5;
    fVar7 = (param_2->pos).w;
    uVar3 = param_2->state;
    *(f32 *)(puVar13 + 0x11) = fVar6;
    *(f32 *)((int)puVar13 + 0x8c) = fVar7;
    fVar2 = DAT_0096a350;
    if (uVar3 == '\0') {
      fVar8 = ABS(DAT_0096a350);
      fVar10 = ABS(DAT_0096a354);
      dVar41 = -0.3619680106639862;
      uVar15 = (uint)DAT_0096a354 >> 0x1d;
      *(float *)(puVar13 + 0x15) = fVar8 - fVar10;
      dVar32 = 0.0;
      dVar33 = 0.7853981852531433;
      uVar23 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
      fVar2 = fVar8;
      if (*(float *)(puVar13 + 0x15) - 0.0 < 0.0) {
        fVar2 = fVar10;
      }
      fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      if (*(float *)(puVar13 + 0x15) - 0.0 < 0.0) {
        fVar10 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar29 = dVar32;
      if (0.0 < fVar2) {
        lVar21 = uVar19 - 0x160;
        lVar26 = uVar19 - 0x94;
        lVar24 = uVar19 - 0xa4;
        lVar27 = 2;
        fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
        fVar10 = fVar2 * fVar2;
        *(float *)(puVar13 + 0x1b) = fVar2;
        *(float *)(puVar13 + 0x1a) = fVar2;
        *(float *)((int)puVar13 + 0xd4) = fVar2;
        *(float *)((int)puVar13 + 0xcc) = fVar2;
        fVar2 = fVar10 * fVar10;
        *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar10;
        *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar2;
        *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar2 * fVar10;
        do {
          *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xbc) * fVar2 * fVar2;
          iVar22 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar19 - 0xa4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar28;
        lVar24 = lVar26;
        do {
          fVar2 = *pfVar25;
          fVar10 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xcc) * fVar2;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar21 = lVar28;
        do {
          iVar22 = (int)lVar21;
          iVar14 = (int)lVar26;
          lVar21 = lVar21 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0xcc)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar9 + fVar8);
      }
      dVar29 = (double)fastfunc::FastWrapRot(-0.361968,(float)dVar29);
      fVar8 = DAT_0096a350;
      dVar40 = 3.141592502593994;
      fVar2 = (float)(dVar29 + 1.570796251296997);
      dVar39 = -3.141592502593994;
      dVar31 = ABS((double)DAT_0096a350);
      dVar38 = -0.16666656732559204;
      dVar29 = ABS((double)DAT_0096a354);
      dVar37 = 0.008333025500178337;
      dVar36 = -0.0001980741071747616;
      dVar35 = 2.601886990305502e-06;
      dVar34 = 0.8590390086174011;
      uVar15 = (uint)DAT_0096a354 >> 0x1d;
      fVar10 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar10 = fVar2;
      }
      *(float *)((int)puVar13 + 0xa4) = (float)(dVar31 - dVar29);
      fVar9 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
        fVar9 = fVar10;
      }
      fVar16 = fVar9 * fVar9;
      uVar23 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
      fVar2 = fVar16 * fVar16 * fVar9;
      fVar10 = fVar16 * fVar2;
      dVar30 = dVar31;
      if ((double)*(float *)((int)puVar13 + 0xa4) - dVar32 < 0.0) {
        dVar30 = dVar29;
      }
      if ((double)*(float *)((int)puVar13 + 0xa4) - dVar32 < 0.0) {
        dVar29 = dVar31;
      }
      *(float *)(puVar13 + 0xe) =
           (fVar16 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar2 * 0.0083330255 + fVar16 * fVar9 * -0.16666657 + fVar9) *
           0.859039;
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (dVar32 < dVar30) {
        lVar21 = uVar19 - 0x160;
        lVar26 = uVar19 - 0xb4;
        lVar24 = uVar19 - 0xc4;
        lVar27 = 2;
        fVar8 = (float)(dVar29 - dVar30) / (float)(dVar29 + dVar30);
        fVar9 = fVar8 * fVar8;
        *(float *)(puVar13 + 0x17) = fVar8;
        *(float *)(puVar13 + 0x16) = fVar8;
        *(float *)((int)puVar13 + 0xb4) = fVar8;
        *(float *)((int)puVar13 + 0xac) = fVar8;
        fVar8 = fVar9 * fVar9;
        *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar9;
        *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar8;
        *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar8 * fVar9;
        do {
          *(float *)((int)lVar21 + 0xac) = *(float *)((int)lVar21 + 0x9c) * fVar8 * fVar8;
          iVar22 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar8 * fVar8;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar19 - 0xc4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar28;
        lVar24 = lVar26;
        do {
          fVar8 = *pfVar25;
          fVar9 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0xac) = *(float *)((int)lVar21 + 0xac) * fVar8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar9;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar21 = lVar28;
        do {
          iVar22 = (int)lVar21;
          iVar14 = (int)lVar26;
          lVar21 = lVar21 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar22 + 0xac)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar32 = (double)((float)(dVar32 + dVar33) * fVar10 + fVar2);
      }
      dVar33 = (double)fastfunc::FastWrapRot((float)dVar41,(float)dVar32);
      fVar2 = g_heroPosition.y;
      dVar32 = (double)(float)(dVar40 - dVar33);
      if (dVar33 - (double)(float)(dVar40 - dVar33) < 0.0) {
        dVar32 = dVar33;
      }
      dVar29 = (double)(float)(dVar39 - dVar33);
      if ((double)(float)(dVar39 - dVar33) - dVar32 < 0.0) {
        dVar29 = dVar32;
      }
      fVar10 = *(float *)(puVar13 + 0xe) + g_heroPosition.x;
      *(undefined4 *)(puVar13 + 0xf) = 0;
      dVar31 = (double)(float)(dVar29 * dVar29);
      *(float *)(puVar13 + 0xe) = fVar10;
      fVar8 = g_heroPosition.z;
      dVar32 = (double)*param_1;
      dVar41 = (double)param_1[1];
      dVar33 = (double)param_1[2];
      dVar40 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar29));
      dVar39 = (double)(float)(dVar31 * dVar40);
      bVar1 = g_standingOnMoby != 0;
      fVar10 = (float)((double)(float)((double)(float)(dVar31 * dVar39) * dVar35 +
                                      (double)(float)(dVar39 * dVar36 +
                                                     (double)(float)(dVar40 * dVar37 +
                                                                    (double)(float)((double)(float)(
                                                  dVar31 * dVar29) * dVar38 + dVar29)))) * dVar34);
      *(float *)((int)puVar13 + 0x74) = fVar10;
      *(float *)((int)puVar13 + 0x74) = fVar10 + fVar2;
      *(float *)(puVar13 + 0xf) = fVar8 + 0.49082;
      if (((bVar1) && (iVar22 = mobyutil::MB_GetPlatformParent(), iVar22 != 0)) && (param_3 != 0)) {
        dVar32 = (double)(float)(dVar32 + (double)DAT_00969de0);
        dVar41 = (double)(float)(dVar41 + (double)DAT_00969de4);
        dVar33 = (double)(float)(dVar33 + (double)DAT_00969de8);
      }
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(0x30,0x43d228);
      auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                           auVar43);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xa0,lVar28)
      ;
      *(undefined4 *)(puVar13 + 0x14) = uVar12;
    }
    else {
      sVar11 = *(short *)(param_1 + 0xd);
      dVar32 = (double)*param_1;
      iVar22 = *(int *)((int)param_1[0xc] + 0x78);
      *(f32 *)(puVar13 + 0xe) = fVar4;
      *(f32 *)((int)puVar13 + 0x74) = fVar5;
      *(f32 *)(puVar13 + 0xf) = fVar6;
      *(f32 *)((int)puVar13 + 0x7c) = fVar7;
      dVar41 = (double)param_1[1];
      dVar33 = (double)param_1[2];
      *(int *)(puVar13 + 0x14) = (int)sVar11;
      if (*(int *)(iVar22 + 0x50) != 0) {
        *(undefined2 *)((int)param_1 + 0x36) = 1;
      }
    }
    pMVar17 = g_heroMobyPtr;
    *(f32 *)(puVar13 + 0x12) = (g_heroMobyPtr->pos).x;
    *(f32 *)((int)puVar13 + 0x94) = (pMVar17->pos).y;
    *(f32 *)(puVar13 + 0x13) = (pMVar17->pos).z;
    fVar4 = (pMVar17->pos).w;
    *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)(puVar13 + 0xf);
    *(f32 *)((int)puVar13 + 0x9c) = fVar4;
    iVar22 = collproc::CollLine(uVar19 - 0xe0,uVar19 - 0x100,0x10,pMVar17,0);
    if (((iVar22 != 0) && (iVar22 = collproc::CollHotspot(), iVar22 != 0)) && (0 < CollOutput.poly))
    {
      param_1[4] = CollOutput.ip.x;
      param_1[5] = CollOutput.ip.y;
      param_1[6] = CollOutput.ip.z;
      param_1[7] = CollOutput.ip.w;
    }
    do {
      iVar22 = fastfunc::FastDecTimerS32(uVar19 - 0xd0);
      if (iVar22 != 0) goto LAB_0043d96c;
      fVar2 = *(float *)(puVar13 + 0xe);
      fVar10 = *(float *)((int)puVar13 + 0x74);
      fVar8 = *(float *)(puVar13 + 0xf);
      lVar28 = 10;
      *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0x7c);
      *(float *)(puVar13 + 0x10) = fVar2;
      *(float *)((int)puVar13 + 0x84) = fVar10;
      *(float *)(puVar13 + 0x11) = fVar8;
      do {
        fVar2 = (float)((double)fVar2 + dVar32);
        fVar10 = (float)((double)fVar10 + dVar41);
        fVar8 = (float)((double)fVar8 + dVar33);
        dVar33 = -(double)(float)((double)DAT_0071f418 * 9.800000190734863 - dVar33);
        *(float *)(puVar13 + 0xe) = fVar2;
        *(float *)((int)puVar13 + 0x74) = fVar10;
        *(float *)(puVar13 + 0xf) = fVar8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      iVar22 = collproc::CollLine(uVar19 - 0xf0,uVar19 - 0x100,0x12,param_2,0);
    } while (((iVar22 == 0) || ((iVar22 = collproc::CollHotspot(), iVar22 == 0 && (0.0 < dVar33))))
            || (CollOutput.poly < 1));
    param_1[4] = CollOutput.ip.x;
    param_1[5] = CollOutput.ip.y;
    param_1[6] = CollOutput.ip.z;
    param_1[7] = CollOutput.ip.w;
LAB_0043d96c:
    if ((*(int *)(puVar13 + 0x14) == 0) ||
       ((param_3 == 0 &&
        ((CollOutput.pMoby == (MobyInstance *)0x0 ||
         (iVar22 = mobyutil::MB_GetPlatformParent(), iVar22 == 0)))))) {
      uVar20 = 0;
    }
    else {
      if (((param_3 != 2) || (CollOutput.pMoby == (MobyInstance *)0x0)) ||
         (iVar22 = mobyutil::MB_GetPlatformParent(), iVar22 == 0)) {
        RegisterFuncForMoby(&PTR_M739_0043c668_0070e5b0,param_2);
      }
      param_1[8] = CollOutput.normal.x;
      param_1[9] = CollOutput.normal.y;
      param_1[10] = CollOutput.normal.z;
      param_1[0xb] = CollOutput.normal.w;
      fVar9 = GameCamera.posX;
      fVar2 = param_1[4] - GameCamera.posX;
      fVar10 = param_1[5] - GameCamera.posY;
      uVar20 = 1;
      *(float *)((int)puVar13 + 0x8c) = param_1[7];
      fVar8 = param_1[6] - GameCamera.posZ;
      *(float *)(puVar13 + 0x10) = fVar2;
      *(float *)((int)puVar13 + 0x84) = fVar10;
      fVar2 = fVar2 * (float)0x3f733333;
      fVar10 = fVar10 * (float)0x3f733333;
      fVar8 = fVar8 * (float)0x3f733333;
      *(float *)(puVar13 + 0x10) = fVar2;
      *(float *)((int)puVar13 + 0x84) = fVar10;
      *(float *)(puVar13 + 0x11) = fVar8;
      param_1[4] = fVar2 + fVar9;
      param_1[5] = fVar10 + GameCamera.posY;
      param_1[6] = fVar8 + GameCamera.posZ;
    }
  }
  return uVar20;
}



//==== 0043dc00  ns=mobyupdate_unsorted  size=0x2760
// sig: undefined UpdateMoby_74(MobyInstance * moby)
// callers(0): 
// callees(68): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 000ffc18 mobyutil::GetGroundZNoWater; 000ffcd0 mobyutil::CollMovingSphere; 0010581c mobyutil::SetCollDamIn; 00105f40 mobyutil::CollWaterHeight; 00106150 mobyutil::MB_RegisterLameShadow; 00106738 mobyutil::TweenColor; 0010675c mobyutil::MB_damage; 00107860 mobyutil::MB_DamageMobyList; 0010a668 mobyutil::ReorderRGB; 0010af88 mobyutil::MB_isCrate; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110798 mobyutil::MB_DeleteMobyFromDynamicGroup; 001122ac mobyutil::MB_GetPlatformParent; 001122e0 mobyutil::MB_PlatformLocalToWorld; 00116b70 mobyutil::MB_SwingMotion; 00124e10 partupd::SpawnPart_15; 00125350 partupd::SpawnPart_16; 0012a440 partupd::SpawnPart_34; 0012ab08 partupd::SpawnPart_35; 00131e50 partupd::SpawnPart_64; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0017bd90 water::WaterTile_PutDrop; 003fda38 FUN_003fda38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 74 */

void mobyupdate_unsorted::UpdateMoby_74(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  MOBY_OCLASSES MVar3;
  undefined4 *puVar4;
  MobyInstance *moby_00;
  uint uVar5;
  undefined2 uVar6;
  MobyModeBit MVar16;
  int iVar9;
  Vec4 *pos;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar17;
  int iVar12;
  undefined8 uVar7;
  int iVar13;
  int iVar14;
  longlong lVar8;
  int iVar15;
  ulonglong uVar18;
  vec4 *pvVar19;
  longlong lVar20;
  MobyInstance *pMVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  double dVar30;
  double in_f5;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 local_4b0 [16];
  undefined1 auStack_4a0 [16];
  undefined1 local_490 [16];
  undefined1 local_480 [16];
  float afStack_470 [4];
  Vec4 local_460;
  float local_450;
  float local_44c;
  float local_448;
  undefined1 auStack_440 [16];
  float local_430;
  float local_42c;
  float local_428;
  undefined1 auStack_420 [16];
  undefined1 auStack_410 [16];
  f32 local_400;
  f32 local_3fc;
  float local_3f8;
  f32 local_3f4;
  undefined1 auStack_3f0 [16];
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  f32 local_390;
  f32 local_38c;
  float local_388;
  f32 local_384;
  float local_380;
  float local_37c;
  float local_378;
  undefined4 local_374;
  float local_370;
  float local_36c;
  float local_368;
  undefined4 local_364;
  float local_360;
  float local_35c;
  float local_358;
  f32 local_350;
  f32 local_34c;
  float local_348;
  f32 local_344;
  float local_340;
  float local_33c;
  float local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  float local_320;
  float local_31c;
  float local_318;
  undefined4 local_314;
  float local_310;
  float local_30c;
  float local_308;
  undefined1 auStack_300 [8];
  undefined4 local_2f8;
  undefined4 local_2f4;
  MobyInstance *local_2f0;
  undefined *local_2ec;
  undefined1 local_2e8;
  undefined1 local_2e7;
  MOBY_OCLASSES local_2e6;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined1 auStack_2d0 [48];
  Vec4 aVStack_2a0 [4];
  undefined1 auStack_260 [64];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float local_180 [4];
  double local_170;
  double local_168;
  double local_160;
  float local_158;
  double local_150;
  float local_148;
  float local_144;
  longlong local_140;
  float local_130;
  float local_12c;
  
  lVar8 = (longlong)(int)moby;
  uStack_214 = uRam0085a50c;
  uStack_218 = uRam0085a508;
  uStack_21c = uRam0085a504;
  uStack_220 = _DAT_0085a500;
  uStack_204 = uRam0085a51c;
  uStack_208 = uRam0085a518;
  uStack_20c = uRam0085a514;
  uStack_210 = _DAT_0085a510;
  uStack_1f4 = uRam0085a52c;
  uStack_1f8 = uRam0085a528;
  uStack_1fc = uRam0085a524;
  uStack_200 = _DAT_0085a520;
  uStack_1e4 = uRam0085a53c;
  uStack_1e8 = uRam0085a538;
  uStack_1ec = uRam0085a534;
  uStack_1f0 = _DAT_0085a530;
  uStack_1d4 = uRam0085a54c;
  uStack_1d8 = uRam0085a548;
  uStack_1dc = uRam0085a544;
  uStack_1e0 = _DAT_0085a540;
  uStack_1c4 = uRam0085a55c;
  uStack_1c8 = uRam0085a558;
  uStack_1cc = uRam0085a554;
  uStack_1d0 = _DAT_0085a550;
  uStack_1b4 = uRam0085a56c;
  uStack_1b8 = uRam0085a568;
  uStack_1bc = uRam0085a564;
  uStack_1c0 = _DAT_0085a560;
  uStack_1a4 = uRam0085a57c;
  uStack_1a8 = uRam0085a578;
  uStack_1ac = uRam0085a574;
  uStack_1b0 = _DAT_0085a570;
  uStack_194 = uRam0085a58c;
  uStack_198 = uRam0085a588;
  uStack_19c = uRam0085a584;
  uStack_1a0 = _DAT_0085a580;
  uStack_184 = uRam0085a59c;
  uStack_188 = uRam0085a598;
  uStack_18c = uRam0085a594;
  uStack_190 = _DAT_0085a590;
  dVar43 = 2.0;
  puVar4 = (undefined4 *)moby->pVar;
  uVar22 = ZEXT48(puVar4);
  bVar17 = moby->state != '\0';
  local_150 = 0.0;
  dVar31 = 1.0;
  if (((hero::g_heroInvisible == '\0') && (DAT_0096bd8f == '\0')) || (bVar17)) {
    MVar16 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
  }
  else {
    MVar16 = moby->modeBits | (UNK_40|DISABLED);
  }
  moby->modeBits = MVar16;
  if (((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_currentWeaponMoby->oClass != MINE_GLOVE))
     && (!bVar17)) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if ((g_heroType != '\0') && (!bVar17)) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  iVar9 = puVar4[0xc];
  if ((((iVar9 != 0) && (*(char *)(iVar9 + 0x20) != -3 && *(char *)(iVar9 + 0x20) != -2)) &&
      (*(short *)(iVar9 + 0xa6) == 0xbe)) &&
     ((*(short *)((int)puVar4 + 0x36) == 0 &&
      (dVar23 = (double)FUN_005e8030(uVar22), local_150 < dVar23)))) {
    if ((g_standingOnMoby == 0) || (iVar9 = mobyutil::MB_GetPlatformParent(), iVar9 == 0)) {
      mobyupdate_helpers::M74_0043d268(uVar22,lVar8,1);
    }
    else {
      iVar9 = mobyupdate_helpers::M74_0043d268(uVar22,lVar8,0);
      if (iVar9 == 0) {
        mobyupdate_helpers::M74_0043d268(uVar22,lVar8,2);
      }
    }
  }
  if (moby->state == '\0') {
    if ((g_currentWeaponMoby != (MobyInstance *)0x0) && (g_currentWeaponMoby->oClass == MINE_GLOVE))
    {
      fastfunc::FastEulerToMtx1(aVStack_2a0,local_480);
      mobyfunc::GetBoneTransformations(puVar4[0xc],0,auStack_260);
      fastfunc::FastVecMtx4Mul(aVStack_2a0,auStack_260,aVStack_2a0);
      fastfunc::FastApplyTransform(&(moby->transform).v0,aVStack_2a0);
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
      return;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  lVar20 = lVar8 + 0x10;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  FUN_005e7e98(auStack_4a0,lVar20);
  pos = (Vec4 *)lVar20;
  if ((moby->state & 4) == 0) {
    FUN_005e7f54(lVar20,lVar20,uVar22);
    if (*(short *)(puVar4 + 0x14) == 0) {
      puVar4[2] = -(DAT_0071f418 * 9.8 - (float)puVar4[2]);
    }
    else {
      dVar23 = 0.10000000149011612;
      puVar4[2] = -(DAT_0071f418 * 9.8 * 0.1 - (float)puVar4[2]);
      local_140 = (longlong)(int)(animationSpeed * 6.5);
      iVar9 = mobyutil::MB_randInt((int)(animationSpeed * 6.5) + -1);
      if (iVar9 == 0) {
        fVar49 = mobyutil::CollWaterHeight(&pos->x,afStack_470);
        dVar34 = (double)fVar49;
        FUN_005e822c(0x3fd0000000000000,afStack_470,uVar22);
        dVar23 = (double)mobyutil::MB_randRangeFloat(0.05,(float)dVar23);
        partupd::SpawnPart_34((double)(float)(dVar23 * 210000.0),dVar34,pos,afStack_470);
      }
    }
  }
  local_2ec = &DAT_00830000;
  dVar42 = 3.0;
  local_2e4 = 0x40400000;
  local_2e0 = 1;
  local_2f0 = moby;
  FUN_005e7e98(auStack_300,uVar22);
  FUN_005e84c0(dVar31,auStack_300,auStack_300);
  local_2e6 = moby->oClass;
  local_2e8 = 2;
  local_2f8 = 0x3f800000;
  local_2f4 = 0x45afdf66;
  local_2e7 = 1;
  dVar34 = 0.4000000059604645;
  iVar9 = worldUpdateTime - puVar4[0x1d];
  (moby->pos).z = (moby->pos).z - 0.4;
  dVar23 = (double)fastfunc::FastIntToDouble(iVar9);
  dVar40 = (double)(moby->pos).z;
  dVar37 = (double)(float)(dVar23 / (double)(DAT_0085a480 * animationSpeed));
  dVar23 = dVar31;
  if ((dVar37 <= dVar31) && (dVar23 = dVar37, dVar37 < local_150)) {
    dVar23 = local_150;
  }
  dVar37 = (double)FUN_005e8128((double)(float)puVar4[0x1c]);
  bVar1 = moby->state;
  (moby->pos).z = -(float)((double)(float)((double)(float)puVar4[0x1b] * dVar37) * dVar23 - dVar40);
  if ((bVar1 & 4) == 0) {
    iVar9 = collproc::CollLine(auStack_4a0,lVar20,0x10,lVar8,auStack_300);
    bVar1 = moby->state;
    if (iVar9 != 0) {
      if (((*(short *)(puVar4 + 0x14) == 0) && (iVar9 = collproc::CollHotspot(), iVar9 == 0)) &&
         ((int)puVar4[2] < 0)) {
        water::WaterTile_PutDrop
                  ((moby->pos).x,(moby->pos).y,0.5,-0.35,WaterTiles,WaterTileCnt,(float)in_f5);
        *(undefined2 *)(puVar4 + 0x14) = 1;
        FUN_005e7e70(uVar22);
        puVar4[2] = mobyutil::g_FrameTime * -1.5;
        local_460.x = (moby->pos).x;
        local_460.y = (moby->pos).y;
        local_460.z = CollOutput.ip.z;
        iVar9 = FUN_00456478(dVar43,&local_460);
        if (iVar9 != 0) {
          *(undefined1 *)(iVar9 + 0x23) = 0x70;
        }
        iVar9 = 0;
        dVar23 = 6.5;
        do {
          dVar37 = (double)mobyutil::MB_randRot();
          dVar40 = (double)mobyutil::MB_randRangeFloat
                                     ((float)local_150,
                                      (float)((double)mobyutil::g_FrameTime * dVar42));
          dVar24 = (double)mathfunc::cosf((float)dVar37);
          local_450 = (float)(dVar24 * dVar40);
          dVar37 = (double)FUN_005e8128(dVar37);
          local_44c = (float)(dVar37 * dVar40);
          dVar37 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)mobyutil::g_FrameTime * dVar42),
                                      (float)((double)mobyutil::g_FrameTime * dVar23));
          local_448 = (float)dVar37;
          uVar10 = mobyutil::MB_randRange(0x5a,0x78);
          uVar11 = mobyutil::MB_randInt(2);
          partupd::SpawnPart_35(&local_460,&local_450,uVar11,uVar10);
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x10);
        goto LAB_0043f0a4;
      }
      if ((*(short *)(puVar4 + 0x14) == 0) && (iVar9 = collproc::CollHotspot(), iVar9 == 0))
      goto LAB_0043f0a4;
      if (CollOutput.pMoby != (MobyInstance *)0x0) {
        bVar17 = mobyutil::MB_isCrate(CollOutput.pMoby);
        if ((((bVar17) ||
             (((CollOutput.pMoby)->modeBits & (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED)) != NONE)) &&
            (CollOutput.pMoby != g_heroMobyPtr && (CollOutput.pMoby)->oClass != moby->oClass)) &&
           (CollOutput.pMoby != (MobyInstance *)puVar4[0xc])) {
          moby->setByGroup = '\x01';
          if (moby->state != '\x01') {
            FUN_005e7e98(lVar20,0xa10960);
            dVar23 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar20,0);
            (moby->pos).z = (float)dVar23;
          }
          goto LAB_0043f0a4;
        }
      }
      if (CollOutput.pMoby == (MobyInstance *)0x0) {
LAB_0043e670:
        if (CollOutput.poly < 1) goto LAB_0043f0a4;
      }
      else {
        if ((CollOutput.pMoby)->oClass == moby->oClass) {
          FUN_005e81f0(0xa10980,lVar20,&(CollOutput.pMoby)->pos);
          if (mobyutil::g_FrameTime * -9.8 <= (float)puVar4[2]) {
            FUN_005e7e98(lVar20,0xa10960);
            FUN_005e7f98((double)(DAT_0071f418 * 9.7),auStack_440,0xa10980);
            FUN_005e7f54(lVar20,lVar20,auStack_440);
            fastfunc::FastVecNormalize(uVar22,uVar22,0xa10980);
            FUN_005e822c(dVar34,uVar22,uVar22);
            FUN_005e7f98(dVar31,auStack_440,0xa10980);
            FUN_005e81c0(auStack_440,local_490);
            FUN_005e7e98(&local_430,0xa10980);
            dVar23 = (double)mathfunc::cosf((moby->rotation).z);
            dVar40 = (double)local_430;
            dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
            dVar36 = (double)(float)(dVar40 * dVar23 + (double)(float)((double)local_42c * dVar37));
            dVar23 = (double)mathfunc::cosf((moby->rotation).z);
            dVar35 = (double)local_42c;
            dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
            dVar24 = (double)local_428;
            dVar40 = (double)(moby->rotation).x;
            dVar23 = (double)FUN_005e8338((double)SQRT((float)(dVar36 * dVar36 +
                                                              (double)(float)(dVar24 * dVar24))),
                                          (double)(float)(dVar35 * dVar23 -
                                                         (double)(float)((double)local_430 * dVar37)
                                                         ));
            uVar29 = 0x3faaceea00000000;
            dVar23 = (double)FUN_004d04e0(dVar40,-dVar23,0x3faaceea00000000);
            (moby->rotation).x = (float)dVar23;
            dVar23 = (double)(moby->rotation).y;
            uVar28 = FUN_005e8338(dVar24,dVar36);
            dVar23 = (double)FUN_004d04e0(dVar23,uVar28,uVar29);
            (moby->rotation).y = (float)dVar23;
          }
          else {
            moby->setByGroup = '\x01';
            FUN_005e7e98(lVar20,0xa10960);
            fastfunc::FastVecNormalize(local_4b0,uVar22,0xa10980);
            FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar43),local_4b0,local_4b0
                        );
            FUN_005e7f98(dVar31,local_490,0xa10980);
          }
          goto LAB_0043f0a4;
        }
        if ((CollOutput.pMoby == g_heroMobyPtr) || (CollOutput.pMoby == (MobyInstance *)puVar4[0xc])
           ) goto LAB_0043e670;
      }
      if (((*(short *)(puVar4 + 0x14) != 0) || (iVar9 = collproc::CollHotspot(), iVar9 == 0)) ||
         ((float)puVar4[2] < mobyutil::g_FrameTime * -9.8)) {
        moby->setByGroup = '\x01';
        FUN_005e7e98(lVar20,0xa10960);
        fastfunc::FastVecNormalize(local_4b0,uVar22,0xa10980);
        FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar43),local_4b0,local_4b0);
        FUN_005e7f98(dVar31,local_490,0xa10980);
      }
      else {
        iVar9 = 0;
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          iVar9 = mobyutil::MB_GetPlatformParent();
        }
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        FUN_005e7f98((double)(DAT_0071f418 * 9.7),auStack_420,0xa10980);
        FUN_005e7f54(lVar20,lVar20,auStack_420);
        iVar12 = puVar4[2];
        dVar37 = (double)(float)puVar4[2];
        fastfunc::FastVecNormalize(uVar22,uVar22,0xa10980);
        FUN_005e822c(0x3fe3333340000000,uVar22,uVar22);
        iVar14 = worldUpdateTime;
        dVar23 = 0.5;
        puVar4[2] = (float)puVar4[2] * 0.5;
        if (puVar4[0x1b] == 0) {
          puVar4[0x1b] = (float)(ABS(dVar37) * dVar43);
          puVar4[0x1d] = iVar14;
          uVar10 = 0xc016cbe4;
          if (local_150 - dVar37 < 0.0) {
            uVar10 = 0x3f490fdb;
          }
          puVar4[0x1c] = uVar10;
        }
        FUN_005e7f98(dVar31,auStack_420,0xa10980);
        dVar37 = (double)FUN_005e81c0(auStack_420,local_490);
        if ((0.7070000171661377 < dVar37) && (iVar12 < 0)) {
          dVar37 = (double)mobyutil::GetGroundZ(dVar23,lVar20,0);
          if ((double)(moby->pos).z < dVar37) {
            (moby->pos).z = (float)dVar37;
          }
          puVar4[2] = -(float)puVar4[2];
          dVar37 = (double)FUN_005e8030(uVar22);
          if ((dVar37 < (double)(float)((double)mobyutil::g_FrameTime * dVar23)) || (iVar9 != 0)) {
            puVar4[3] = 0;
            puVar4[2] = 0;
            puVar4[1] = 0;
            *puVar4 = 0;
            moby->state = moby->state | 4;
            moby->collision = moby->pClass->collision;
            if (iVar9 != 0 && CollOutput.pMoby != (MobyInstance *)0x0) {
              puVar4[0x13] = CollOutput.pMoby;
            }
          }
        }
        dVar36 = (double)CollOutput.normal.x;
        dVar35 = (double)CollOutput.normal.y;
        dVar24 = (double)CollOutput.normal.z;
        dVar23 = (double)mathfunc::cosf((moby->rotation).z);
        dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
        dVar40 = (double)(float)(dVar36 * dVar23 + (double)(float)(dVar35 * dVar37));
        dVar23 = (double)mathfunc::cosf((moby->rotation).z);
        dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
        dVar38 = (double)(moby->rotation).x;
        dVar23 = (double)FUN_005e8338((double)SQRT((float)(dVar40 * dVar40 +
                                                          (double)(float)(dVar24 * dVar24))),
                                      (double)(float)(dVar35 * dVar23 -
                                                     (double)(float)(dVar36 * dVar37)));
        uVar29 = 0x3faaceea00000000;
        dVar23 = (double)FUN_004d04e0(dVar38,-dVar23,0x3faaceea00000000);
        (moby->rotation).x = (float)dVar23;
        dVar23 = (double)(moby->rotation).y;
        uVar28 = FUN_005e8338(dVar24,dVar40);
        dVar23 = (double)FUN_004d04e0(dVar23,uVar28,uVar29);
        (moby->rotation).y = (float)dVar23;
      }
      goto LAB_0043f0a4;
    }
  }
  if ((bVar1 & 4) == 0) goto LAB_0043f0a4;
  dVar23 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar20,0);
  if (puVar4[0x13] == 0) {
    if ((moby->state & 0x10) == 0) {
      if (DAT_0071f418 * 40.0 <= (float)((double)(moby->pos).z - dVar23)) {
        moby->state = '\x01';
        iVar9 = puVar4[0x1a];
        if (((iVar9 != -1) && (sound::g_SoundChannels[iVar9].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar9].state != '\0')) {
          sound::sound_Kill(iVar9);
        }
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        puVar4[0x1a] = 0xffffffff;
        puVar4[2] = 0;
        auVar45 = loadVectorLeftIndexed(0x54,0x43dae0);
        auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                             auVar47);
        auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
        auVar45 = vectorSplatHalfWord(auVar45,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar45,0x34,uVar22);
        *(undefined2 *)(puVar4 + 0xd) = uVar6;
      }
      else {
        (moby->pos).z = (float)dVar23;
        *(undefined2 *)(puVar4 + 0xd) = 0;
        if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
           (iVar9 = mobyutil::MB_GetPlatformParent(), iVar9 != 0)) {
          puVar4[0x13] = CollOutput.pMoby;
        }
      }
    }
  }
  else {
    cVar2 = *(char *)(puVar4[0x13] + 0x20);
    if ((cVar2 == -2) || (cVar2 == -3)) {
      moby->setByGroup = '\x01';
      puVar4[0x13] = 0;
    }
    else if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
            (iVar9 = mobyutil::MB_GetPlatformParent(CollOutput.pMoby), iVar9 != 0)) {
      mobyutil::MB_PlatformLocalToWorld(lVar8,puVar4[0x13],lVar20,lVar8 + 0x40,lVar20,lVar8 + 0x40);
      goto LAB_0043ec14;
    }
    moby->state = '\x01';
    iVar9 = puVar4[0x1a];
    if (((iVar9 != -1) && (sound::g_SoundChannels[iVar9].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar9].state != '\0')) {
      sound::sound_Kill(iVar9);
    }
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    puVar4[0x1a] = 0xffffffff;
    puVar4[2] = 0;
    auVar45 = loadVectorLeftIndexed(0x54,0x43dae0);
    auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar45 = vectorMultiplyAddFloatingPoint
                        (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar47);
    auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
    auVar45 = vectorSplatHalfWord(auVar45,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar45,0x34,uVar22);
    *(undefined2 *)(puVar4 + 0xd) = uVar6;
    puVar4[0x13] = 0;
  }
LAB_0043ec14:
  iVar9 = puVar4[0x15];
  if ((((iVar9 == 0) || (*(char *)(iVar9 + 0x20) == -3 || *(char *)(iVar9 + 0x20) == -2)) ||
      ((*(ushort *)(iVar9 + 0x34) & 0x1000) == 0)) && ((moby->state & 0x10) != 0)) {
    moby->state = '\x01';
    iVar9 = puVar4[0x1a];
    if (((iVar9 != -1) && (sound::g_SoundChannels[iVar9].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar9].state != '\0')) {
      sound::sound_Kill(iVar9);
    }
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    puVar4[0x1a] = 0xffffffff;
    puVar4[2] = 0;
    puVar4[0x15] = 0;
    auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar45 = loadVectorLeftIndexed(0x54,0x43dae0);
    auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar45 = vectorMultiplyAddFloatingPoint
                        (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar47);
    auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
    auVar45 = vectorSplatHalfWord(auVar45,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar45,0x34,uVar22);
    *(undefined2 *)(puVar4 + 0xd) = uVar6;
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(lVar8,0,0,10);
      iVar9 = puVar4[0x15];
      goto LAB_0043ed14;
    }
  }
  else {
LAB_0043ed14:
    if ((iVar9 != 0) && ((moby->state & 0x10) != 0)) {
      if (((moby->field43_0x70 & 2U) != 0) &&
         ((moby->updateId == '\x01' && (moby->animationId != '\x02')))) {
        mobyutil::MB_SetAnimation(lVar8,2,0,10);
      }
      iVar9 = sound::IsMobyPlayingSound(moby,puVar4[0x1a]);
      if (iVar9 == 0) {
        iVar9 = sound::PlayMobySound(1,4,moby);
        puVar4[0x1a] = iVar9;
      }
      fVar49 = DAT_0071f418 * 15.0 + (float)puVar4[0x10];
      puVar4[0x10] = fVar49;
      if (mobyutil::g_FrameTime * 4.0 < fVar49) {
        puVar4[0x10] = mobyutil::g_FrameTime * 4.0;
      }
      if (*(short *)((int)puVar4 + 0x52) == 1) {
        (moby->pos).z = DAT_0071f408 * 0.05 + (moby->pos).z;
        iVar9 = fastfunc::FastDecTimerS32(uVar22 + 0x48);
        if (iVar9 != 0) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = loadVectorLeftIndexed(100,0x43dae0);
          auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar45 = vectorMultiplyAddFloatingPoint
                              (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60
                               ,auVar47);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x48,
                              uVar22);
          *(undefined4 *)((uint)(puVar4 + 0x12) & 0xfffffffc) = uVar10;
          *(undefined2 *)((int)puVar4 + 0x52) = 2;
        }
      }
      else if (*(short *)((int)puVar4 + 0x52) == 2) {
        (moby->pos).z = -(DAT_0071f408 * 0.05 - (moby->pos).z);
        iVar9 = fastfunc::FastDecTimerS32(uVar22 + 0x48);
        if (iVar9 != 0) {
          *(undefined2 *)((int)puVar4 + 0x52) = 0;
        }
      }
      FUN_005e81f0(auStack_410,(ulonglong)(uint)puVar4[0x15] + 0x10,lVar20);
      FUN_005e7f98((double)(float)puVar4[0x10],auStack_410,auStack_410);
      FUN_005e7f54(lVar20,lVar20,auStack_410);
      mobyutil::SetCollDamIn(dVar31,auStack_2d0,lVar8,0x10000);
      local_400 = (moby->pos).x;
      local_3fc = (moby->pos).y;
      local_3f4 = (moby->pos).w;
      local_3f8 = (moby->pos).z + 0.35;
      iVar9 = collproc::CollMobySphere(&local_400);
      local_400 = (moby->pos).x;
      local_3fc = (moby->pos).y;
      local_3f8 = (moby->pos).z;
      local_3f4 = (moby->pos).w;
      if (((((iVar9 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
           (MVar3 = (CollOutput.pMoby)->oClass, MVar3 != MINE_004A && MVar3 != 0x363)) &&
          ((MVar3 != MINE_0458 && (MVar3 != 0x365)))) &&
         (MVar3 != BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR)) {
        moby->setByGroup = '\x01';
      }
      local_3f8 = local_3f8 + 0.25;
      iVar9 = collproc::CollSphere(&local_400);
      if (iVar9 != 0) {
        FUN_005e81f0(auStack_3f0,0xa10970,&local_400);
        FUN_005e7f54(lVar20,lVar20,auStack_3f0);
      }
      iVar9 = fastfunc::FastDecTimerS32(uVar22 + 0x58);
      if (iVar9 != 0) {
        moby->setByGroup = '\x01';
      }
    }
  }
  mobyutil::MB_SwingMotion
            (0x3fe0c15240000000,(double)(mobyutil::g_FrameTime * 0.5235988),
             (double)(mobyutil::g_FrameTime * 0.29670596),lVar8,uVar22 + 0x60,uVar22 + 100);
  if ((moby->state & 4) != 0) {
    fastfunc::FastVecSub(&local_3e0,lVar20,auStack_4a0);
    *puVar4 = local_3e0;
    puVar4[1] = local_3dc;
    puVar4[2] = local_3d8;
    puVar4[3] = local_3d4;
  }
LAB_0043f0a4:
  if (((moby->state & 2) == 0) && (iVar9 = fastfunc::FastDecTimerS16(uVar22 + 0x34), iVar9 != 0)) {
    moby->state = moby->state | 2;
    puVar4[0x15] = 0;
  }
  iVar9 = mobyutil::MB_damage(lVar8,&DAT_00830000,0);
  uVar18 = ZEXT48(g_heroMobyPtr);
  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x20) != 0)) &&
     (*(MOBY_OCLASSES *)(*(int *)(iVar9 + 0x20) + 0xa6) != moby->oClass)) {
    moby->setByGroup = '\x01';
  }
  moby->damage = -1;
  if ((moby->state & 2) != 0) {
    if ((moby->state & 4) == 0) {
      moby->setByGroup = '\x01';
    }
    else {
      dVar23 = (double)FUN_005e8588(uVar18 + 0x10,lVar20);
      dVar37 = 0.75;
      if (((0.75 <= dVar23) || (0.25 <= ABS((moby->pos).z - g_heroPosition.z))) ||
         ((moby->state & 0x10) == 0)) {
        dVar23 = (double)FUN_005e8548(ZEXT48(g_heroMobyPtr) + 0x10,lVar20);
        if (dVar37 <= dVar23) {
          dVar37 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.mineGlove);
          dVar23 = dVar31;
          if (puVar4[0x1e] != 0) {
            dVar23 = dVar42;
          }
          pMVar21 = (MobyInstance *)0x0;
          if (DAT_00a49344 != (MobyInstance *)0x0) {
            dVar36 = 30.0;
            dVar35 = 1.5;
            dVar24 = 0.125;
            dVar40 = 3.5;
            auVar45 = loadVectorLeftIndexed(0x88,0x43dae0);
            auVar47 = loadVectorLeftIndexed(100,0x43dae0);
            auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar48 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
            auVar45 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
            dVar23 = (double)(float)((double)((float)(dVar37 + dVar31) * 4.0) * dVar23);
            iVar9 = 0;
            moby_00 = DAT_00a49344;
            do {
              pvVar19 = &moby_00->pos;
              dVar38 = (double)FUN_005e8548(lVar20,pvVar19);
              dVar37 = dVar23;
              if (dVar38 <= dVar36) {
                dVar37 = (double)FUN_005e8548(lVar20,pvVar19);
                if (dVar37 < dVar35) {
                  moby->setByGroup = '\x01';
                  break;
                }
                bVar17 = mobyutil::MB_isCrate(moby_00);
                dVar37 = dVar23;
                if (!bVar17) {
                  iVar12 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
                  if (iVar12 != 0) {
                    dVar38 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(iVar12 + 10));
                    dVar23 = (double)(float)(dVar38 * dVar24 + dVar23);
                  }
                  dVar38 = (double)FUN_005e8588(lVar20,pvVar19);
                  if (((dVar38 < dVar23) &&
                      (ABS((double)((moby_00->pos).z - (moby->pos).z)) < dVar43)) &&
                     ((puVar4[0x15] == 0 ||
                      ((cVar2 = *(char *)(puVar4[0x15] + 0x20), cVar2 == -2 || (cVar2 == -3)))))) {
                    if (pMVar21 != (MobyInstance *)0x0) {
                      dVar23 = (double)FUN_005e8588(lVar20,pvVar19);
                      dVar38 = (double)FUN_005e8588(lVar20,&pMVar21->pos);
                      if (dVar38 <= dVar23) goto LAB_0043f4c8;
                    }
                    moby->state = moby->state | 0x10;
                    local_140 = (longlong)(int)((double)animationSpeed * dVar40);
                    mobyutil::MB_SetAnimation(lVar8,1,0,(int)((double)animationSpeed * dVar40));
                    sound::PlayMobySound(0,0,moby);
                    auVar47 = ZEXT416(0xffffffff);
                    auVar44 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
                    auVar47 = ZEXT416(0xffffffff);
                    auVar46 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
                    puVar4[0x10] = 0;
                    auVar47 = vectorShiftLeftIntegerWord(auVar44,auVar44);
                    auVar44 = vectorShiftLeftIntegerWord(auVar46,auVar46);
                    auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                    auVar47 = vectorMultiplyAddFloatingPoint(auVar46,auVar48,auVar47);
                    auVar44 = vectorMultiplyAddFloatingPoint(auVar46,auVar45,auVar44);
                    auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
                    auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
                    auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
                    auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
                    uVar10 = storeVectorElementWordIndexed
                                       (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                        auVar47 << 0x60,0x58,uVar22);
                    *(undefined4 *)((uint)(puVar4 + 0x16) & 0xfffffffc) = uVar10;
                    *(undefined2 *)((int)puVar4 + 0x52) = 1;
                    uVar10 = storeVectorElementWordIndexed
                                       (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 |
                                        auVar44 << 0x60,0x48,uVar22);
                    *(undefined4 *)((uint)(puVar4 + 0x12) & 0xfffffffc) = uVar10;
                    pMVar21 = moby_00;
                  }
                }
              }
LAB_0043f4c8:
              moby_00 = *(MobyInstance **)((int)&DAT_00a49348 + iVar9);
              dVar23 = dVar37;
              iVar9 = iVar9 + 4;
            } while (moby_00 != (MobyInstance *)0x0);
            if (pMVar21 != (MobyInstance *)0x0) {
              puVar4[0x15] = pMVar21;
            }
          }
        }
        else {
          fastfunc::FastVecSub(&local_3b0,lVar20,ZEXT48(g_heroMobyPtr) + 0x10);
          local_3d0 = local_3b0;
          local_3cc = local_3ac;
          local_3c8 = local_3a8;
          local_3c4 = local_3a4;
          FUN_005e7f98(dVar37,&local_3d0,&local_3d0);
          fastfunc::FastVecAdd(&local_3a0,ZEXT48(g_heroMobyPtr) + 0x10,&local_3d0);
          local_3c0 = local_3a0;
          local_3bc = local_39c;
          local_3b8 = local_398;
          local_3b4 = local_394;
          mobyutil::CollMovingSphere
                    (dVar34,0x3fd0000000000000,0x3fd0000000000000,0x3fe0c15240000000,lVar8,lVar20,
                     &local_3c0);
        }
      }
      else {
        moby->setByGroup = '\x01';
      }
    }
  }
  puVar4[0x1e] = 0;
  if (((int)puVar4[0x17] < 0) || (DAT_010ccd20 != 0)) {
    mobyutil::MB_SpawnExplosionSparks
              (0x3fd51eb860000000,0x402a000000000000,lVar8,lVar20,&DAT_0043dae0,0xffffffffffffffff);
    mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
    mobyfunc::DeleteMoby(moby);
  }
  uVar5 = (int)puVar4[0x1b] >> 0x1f;
  dVar23 = 0.05000000074505806;
  if ((0x3d4ccccd < (int)((uVar5 >> 1 ^ puVar4[0x1b]) - uVar5)) &&
     (fVar49 = (float)puVar4[0x1b] * (float)((double)DAT_0071f408 * -0.012000024318695068 + dVar31),
     puVar4[0x1b] = fVar49, fVar49 < 0.05)) {
    puVar4[0x1b] = 0x3d4ccccd;
  }
  dVar37 = (double)fastfunc::FastIntToDouble(worldUpdateTime - puVar4[0x1d]);
  dVar40 = (double)(float)(dVar37 / (double)(DAT_0085a480 * animationSpeed));
  dVar37 = dVar31;
  if ((dVar40 <= dVar31) && (dVar37 = dVar40, dVar40 < local_150)) {
    dVar37 = local_150;
  }
  local_144 = (float)dVar34;
  dVar40 = (double)fastfunc::FastWrapRot((float)puVar4[0x1c],mobyutil::g_FrameTime * 6.2831855);
  puVar4[0x1c] = (float)dVar40;
  dVar24 = (double)(moby->pos).z;
  dVar40 = (double)FUN_005e8128();
  cVar2 = moby->setByGroup;
  (moby->pos).z =
       (float)((double)(float)((double)(float)((double)(float)puVar4[0x1b] * dVar40) * dVar37 +
                              dVar24) + dVar34);
  if (cVar2 == '\0') {
    mobyutil::MB_RegisterLameShadow(0.25,moby);
  }
  else {
    dVar34 = (double)FUN_005e8588(lVar20,0x951500);
    if (*(short *)(puVar4 + 0x14) == 0) {
      dVar37 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.mineGlove);
      uVar7 = collproc::CollMobySphere
                        ((double)(float)((double)(float)(dVar37 * 0.5 + dVar31) * dVar43),lVar20);
      uVar28._0_4_ = (moby->pos).x;
      uVar28._4_4_ = (moby->pos).y;
      uVar29._0_4_ = (moby->pos).z;
      uVar29._4_4_ = (moby->pos).w;
      mobyutil::MB_DamageMobyList
                (dVar42,0x3fd0000000000000,0x3ff8000000000000,lVar8,4,uVar28,uVar29,&DAT_00a14a00,
                 uVar7,0,&DAT_00810000);
    }
    dVar37 = (double)mobyutil::GetGroundZNoWater(lVar20);
    if (*(short *)(puVar4 + 0x14) == 0) {
      if ((moby->pos).z <= (float)(dVar37 + dVar43)) {
        dVar43 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.mineGlove);
        iVar9 = 0x96;
        dVar23 = 0.5;
        dVar43 = (double)(float)(dVar43 * 0.5 + dVar31);
        local_148 = (float)dVar34;
        if (dVar34 < 10.0 != 0xffffffce) {
          local_148 = (float)dVar34;
          iVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar34 * 15.0));
        }
        local_158 = (float)dVar31;
        iVar12 = 0;
        if (0 < iVar9) {
          dVar41 = -0.5;
          dVar31 = 4.0;
          dVar34 = 0.785398006439209;
          dVar37 = 8.0;
          dVar25 = 180.5;
          dVar24 = (double)(float)(dVar43 * 150000.0);
          dVar32 = 200000.0;
          dVar26 = 300000.0;
          local_160 = 14.0;
          local_168 = 22.0;
          local_170 = 12.0;
          dVar27 = 240.5;
          dVar40 = 50000.0;
          dVar42 = 100000.0;
          dVar35 = 30.5;
          dVar36 = 45.5;
          dVar39 = 0.25;
          dVar38 = 300.5;
          do {
            lVar8 = mobyutil::MB_randInt(4);
            dVar30 = (double)mobyutil::g_FrameTime;
            local_180[0] = (float)(dVar30 * local_160);
            local_180[3] = 0.0;
            local_180[1] = (float)(dVar30 * local_168);
            local_320 = 0.0;
            local_180[2] = (float)(dVar30 * local_170);
            local_31c = 0.0;
            local_318 = 0.0;
            local_314 = 0;
            dVar30 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(dVar30 * dVar41),(float)(dVar30 * dVar23));
            local_320 = (float)(dVar30 * dVar43);
            dVar30 = (double)mobyutil::MB_randRangeFloat
                                       ((float)((double)mobyutil::g_FrameTime * dVar41),
                                        (float)((double)mobyutil::g_FrameTime * dVar23));
            local_31c = (float)(dVar30 * dVar43);
            dVar30 = (double)mobyutil::MB_randRangeFloat
                                       ((float)((double)mobyutil::g_FrameTime * dVar31),
                                        *(float *)((int)local_180 + (int)(lVar8 << 2)));
            local_318 = (float)(dVar30 * dVar43);
            iVar14 = (int)lVar8;
            dVar30 = dVar39;
            if (iVar14 == 1) {
              dVar30 = dVar23;
            }
            local_130 = (float)dVar38;
            dVar38 = (double)mobyutil::MB_randRangeFloat((float)local_150,(float)dVar30);
            dVar33 = (double)(float)(dVar38 * dVar43);
            dVar38 = (double)mobyutil::MB_randRot();
            dVar30 = (double)mathfunc::cosf((float)dVar38);
            local_310 = (float)(dVar30 * dVar33);
            local_12c = (float)dVar38;
            dVar38 = (double)FUN_005e8128(dVar38);
            local_30c = (float)(dVar38 * dVar33);
            local_308 = 0.0;
            FUN_005e7f54(&local_310,&local_310,lVar20);
            dVar30 = (double)local_308;
            dVar38 = (double)mathfunc::cosf((float)dVar34);
            local_308 = -(float)(dVar33 * dVar38 - dVar30);
            local_318 = -(float)((double)(float)((double)mobyutil::g_FrameTime * dVar33) * dVar37 -
                                (double)local_318);
            dVar38 = (double)local_130;
            dVar30 = (double)local_12c;
            if (iVar14 < 2) {
              if (-1 < iVar14) {
                if (iVar14 < 1) {
                  iVar13 = mobyutil::ReorderRGB(0x1f101820,(uint)g_goldWeaponsArray.mineGlove);
                  dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar26);
                  dVar30 = (double)(float)(dVar30 * dVar43);
                  iVar14 = (int)((double)animationSpeed * dVar27);
                  local_140 = (longlong)iVar14;
                  mobyutil::MB_randRange((int)((double)animationSpeed * dVar25),iVar14);
                  partupd::SpawnPart_16(dVar30,&local_310,&local_320,iVar13,&DAT_00101010);
                }
                else {
                  iVar14 = mobyutil::ReorderRGB(0x3f081020,(uint)g_goldWeaponsArray.mineGlove);
                  iVar13 = mobyutil::ReorderRGB(0xf081020,(uint)g_goldWeaponsArray.mineGlove);
                  dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar42);
                  local_140 = (longlong)(int)((double)animationSpeed * dVar25);
                  partupd::SpawnPart_16
                            ((double)(float)(dVar30 * dVar43),&local_310,&local_320,iVar14,iVar13);
                }
              }
            }
            else if (iVar14 < 3) {
              lVar8 = mobyutil::MB_randInt(100);
              iVar13 = mobyutil::ReorderRGB
                                 (((uint)(lVar8 + -0x28 >> 0x3f) & 0x30b09880) + 0x2f486078,
                                  (uint)g_goldWeaponsArray.mineGlove);
              iVar15 = mobyutil::ReorderRGB(0xf000020,(uint)g_goldWeaponsArray.mineGlove);
              iVar14 = (int)((double)animationSpeed * dVar36);
              local_140 = (longlong)iVar14;
              mobyutil::MB_randRange((int)((double)animationSpeed * dVar35),iVar14);
              partupd::SpawnPart_16(dVar24,&local_310,&local_320,iVar13,iVar15);
            }
            else if (iVar14 < 4) {
              local_130 = (float)dVar39;
              dVar33 = (double)local_158;
              dVar39 = (double)mobyutil::MB_randRangeFloat((float)dVar39,local_158);
              iVar14 = 0x7f000000;
              mobyutil::TweenColor((float)dVar39,0x7f000000,0x7f182030);
              dVar39 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar33);
              iVar13 = 0;
              mobyutil::TweenColor((float)dVar39,0,0x5f5f5f);
              iVar15 = mobyutil::ReorderRGB(iVar14,(uint)g_goldWeaponsArray.mineGlove);
              iVar13 = mobyutil::ReorderRGB(iVar13,(uint)g_goldWeaponsArray.mineGlove);
              dVar39 = (double)mobyutil::MB_randRangeFloat((float)local_150,(float)dVar33);
              dVar33 = (double)(float)(dVar39 * (double)mobyutil::g_FrameTime);
              dVar39 = (double)mobyutil::MB_randRot();
              mobyutil::MB_SphericalToVector((float)dVar33,(float)dVar30,(float)dVar39,&local_320);
              dVar39 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar26);
              dVar39 = (double)(float)(dVar39 * dVar43);
              iVar14 = (int)((double)animationSpeed * dVar38);
              local_140 = (longlong)iVar14;
              mobyutil::MB_randRange((int)((double)animationSpeed * dVar27),iVar14);
              partupd::SpawnPart_16(dVar39,&local_310,&local_320,iVar15,iVar13);
              dVar39 = (double)local_130;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar9);
        }
      }
      else {
        local_324 = 0;
        local_328 = 0;
        local_32c = 0;
        local_330 = 0;
        local_148 = (float)dVar34;
        mobyutil::MB_genericExplosion
                  (local_150,local_150,dVar43,dVar31,0x4010000000000000,dVar31,0x401c000000000000,
                   lVar8,&local_330,0,g_goldWeaponsArray.mineGlove,&DAT_0043dae0,3,3,5);
      }
    }
    else {
      local_390 = (moby->pos).x;
      local_38c = (moby->pos).y;
      local_384 = (moby->pos).w;
      local_158 = (float)dVar31;
      local_388 = (moby->pos).z + 3.5;
      dVar41 = 0.5;
      dVar31 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_390,0);
      dVar35 = -1.0;
      iVar9 = 0;
      dVar24 = -0.5;
      dVar40 = -2.0;
      dVar38 = 4.0;
      dVar36 = 8.0;
      dVar37 = 0.10000000149011612;
      dVar43 = 210000.0;
      do {
        local_380 = 0.0;
        local_37c = 0.0;
        local_378 = 0.0;
        local_374 = 0;
        dVar32 = (double)local_158;
        dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar35,local_158);
        local_380 = (float)dVar25;
        dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar32);
        local_37c = (float)dVar25;
        dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar40);
        local_378 = (float)dVar25;
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar38),
                   (float)((double)mobyutil::g_FrameTime * dVar36));
        FUN_005e7f98(&local_380,&local_380);
        dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar37);
        partupd::SpawnPart_34((double)(float)(dVar25 * dVar43),dVar31,pos,&local_380);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x96);
      dVar37 = (double)(float)(dVar41 + dVar31);
      iVar9 = 0;
      dVar25 = -0.75;
      dVar35 = 0.75;
      dVar24 = 16.0;
      dVar40 = 0.3499999940395355;
      dVar23 = 1.25;
      dVar43 = 20.0;
      do {
        local_370 = 0.0;
        local_36c = 0.0;
        local_368 = 0.0;
        local_364 = 0;
        dVar32 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar25),
                                    (float)((double)mobyutil::g_FrameTime * dVar35));
        local_370 = (float)dVar32;
        dVar32 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar25),
                                    (float)((double)mobyutil::g_FrameTime * dVar35));
        local_36c = (float)dVar32;
        dVar32 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar38),
                                    (float)((double)mobyutil::g_FrameTime * dVar24));
        local_368 = (float)dVar32;
        dVar32 = (double)mobyutil::MB_randRangeFloat((float)local_150,(float)dVar40);
        dVar26 = (double)mobyutil::MB_randRot();
        dVar27 = (double)mathfunc::cosf((float)dVar26);
        local_360 = (float)(dVar27 * dVar32);
        dVar26 = (double)FUN_005e8128(dVar26);
        local_35c = (float)(dVar26 * dVar32);
        local_358 = 0.0;
        FUN_005e7f54(&local_360,&local_360,lVar20);
        local_358 = (float)dVar37;
        local_368 = -(float)((double)(float)((double)mobyutil::g_FrameTime * dVar32) * dVar36 -
                            (double)local_368);
        uVar28 = mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar23);
        partupd::SpawnPart_64
                  (uVar28,dVar31,(double)(float)((double)DAT_0071f418 * dVar43),&local_360,
                   &local_370,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x96);
      iVar9 = 0;
      dVar26 = 0.25;
      dVar32 = -3.0;
      dVar25 = 14.0;
      dVar36 = 1.5;
      dVar35 = 6.0;
      dVar24 = 31500.001953125;
      dVar40 = 52500.0;
      dVar37 = 90.5;
      dVar23 = 150.5;
      dVar43 = (double)local_158;
      do {
        local_148 = (float)dVar34;
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar43);
        iVar12 = 0x7f000000;
        mobyutil::TweenColor((float)dVar27,0x7f000000,0x7f7f6060);
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar41,(float)dVar43);
        iVar14 = 0;
        mobyutil::TweenColor((float)dVar27,0,0x3f3030);
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar42);
        local_340 = (float)dVar27;
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar42);
        local_33c = (float)dVar27;
        dVar27 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar38),
                                    (float)((double)mobyutil::g_FrameTime * dVar25));
        local_338 = (float)dVar27;
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar42);
        FUN_005e7f98((double)(float)(dVar27 * (double)mobyutil::g_FrameTime),&local_340,&local_340);
        dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar42,(float)dVar35);
        local_338 = (float)(dVar27 * (double)mobyutil::g_FrameTime);
        local_350 = (moby->pos).x;
        local_34c = (moby->pos).y;
        local_344 = (moby->pos).w;
        local_348 = (float)dVar31;
        iVar13 = mobyutil::ReorderRGB(iVar12,(uint)g_goldWeaponsArray.mineGlove);
        iVar14 = mobyutil::ReorderRGB(iVar14,(uint)g_goldWeaponsArray.mineGlove);
        uVar29 = mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar40);
        iVar12 = (int)((double)animationSpeed * dVar23);
        local_140 = (longlong)iVar12;
        uVar28 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar37),iVar12);
        partupd::SpawnPart_15
                  (uVar29,&local_350,&local_340,iVar13,iVar14,0xffffffffffffffff,uVar28,1,
                   *DAT_00a52830);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x14);
    }
    moby->setByGroup = '\0';
    if (g_goldWeaponsArray.mineGlove == '\0') {
      sound::PlayMobySound(2,0,moby);
    }
    else {
      sound::PlayMobySound(3,0,moby);
    }
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    fVar49 = 0.35;
    if (local_148 - 20.0 < 0.0) {
      fVar49 = local_148 * 0.0175;
    }
    GameCamera.offset0.amp = local_144 - fVar49;
    auVar48 = loadVectorLeftIndexed(0x118,0x43dae0);
    auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar45 = vectorMultiplyAddFloatingPoint
                        (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                         auVar45);
    auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
    auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    GameCamera.offset0.total =
         storeVectorElementWordIndexed
                   (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x168,0x9513c0);
    FUN_005e8548(lVar20,&g_heroPosition);
    if (g_goldWeaponsArray.mineGlove == '\0') {
      FUN_003fda38(&uStack_220,lVar20,0,0);
    }
    else {
      FUN_003fda38(&uStack_1d0,lVar20,0,0);
    }
    mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



