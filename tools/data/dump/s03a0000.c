//==== 003a01e0  ns=Global  size=0x45c
// sig: undefined FUN_003a01e0(void)
// callers(4): 0020fda8 mobyupdate_unsorted::UpdateMoby_1226; 00303818 mobyupdate_helpers::M234_00303818; 0039dbd0 mobyupdate_unsorted::UpdateMoby_48; 003fc1c0 mobyupdate_unsorted::UpdateMoby_638
// callees(1): 000efa28 mobyfunc::CreateMoby

void FUN_003a01e0(float param_1,float *param_2,f32 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
  longlong lVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar16 = uVar12 - 0xe0;
  puVar8 = (ulonglong *)lVar16;
  *puVar8 = uVar12;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x19] = unaff_r29;
  puVar8[0x1a] = unaff_r30;
  pMVar13 = mobyfunc::CreateMoby(ROCKET_0031);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    uVar14 = *(undefined8 *)((int)param_1 + 0x38);
    pMVar13->state = '\0';
    pMVar13->color = (int)((ulonglong)uVar14 >> 0x20);
    pMVar13->light = (int)uVar14;
    pfVar19 = (float *)pMVar13->pVar;
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    pMVar13->scale = pMVar13->scale * 3.0;
    (pMVar13->pos).x = *param_3;
    (pMVar13->pos).y = param_3[1];
    (pMVar13->pos).z = param_3[2];
    (pMVar13->pos).w = param_3[3];
    *pfVar19 = *param_2;
    pfVar19[1] = param_2[1];
    pfVar19[2] = param_2[2];
    pfVar19[3] = param_2[3];
    auVar22 = loadVectorLeftIndexed(4,0x3a01cc);
    auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                         auVar23);
    auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x14,
                       ZEXT48(pfVar19));
    *(undefined4 *)((uint)(pfVar19 + 5) & 0xfffffffc) = uVar7;
    pfVar19[6] = param_1;
    pfVar19[4] = 0.0;
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar2 = ABS(*param_2);
    fVar9 = ABS(param_2[1]);
    *(float *)(puVar8 + 0xf) = fVar2 - fVar9;
    fVar1 = 0.0;
    MVar4 = pMVar13->modeBits;
    uVar17 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = fVar2;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar9;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar9 = fVar2;
    }
    fVar2 = fVar1;
    if (0.0 < fVar5) {
      lVar15 = uVar12 - 0xd0;
      lVar18 = uVar12 - 0x44;
      lVar20 = uVar12 - 0x34;
      lVar21 = 2;
      fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x15) = fVar5;
      *(float *)(puVar8 + 0x14) = fVar5;
      *(float *)((int)puVar8 + 0xa4) = fVar5;
      *(float *)((int)puVar8 + 0x9c) = fVar5;
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar2;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar5;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar5 * fVar2;
      do {
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x8c) * fVar5 * fVar5;
        iVar10 = (int)lVar18;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar20 = uVar12 - 0x44;
      pfVar19 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar15 = lVar16;
      lVar18 = lVar20;
      do {
        fVar5 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x9c) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar2;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = 2;
      lVar15 = lVar16;
      fVar5 = fVar1;
      do {
        iVar10 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar11 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar10 + 0x9c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar2 = (fVar5 + 0.7853982) * fVar3 + fVar6;
    }
    (pMVar13->rotation).z = fVar2;
    fVar5 = param_2[2];
    fVar2 = ABS(param_2[2]);
    fVar6 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    fVar9 = ABS(fVar6);
    *(float *)(puVar8 + 0xe) = fVar6;
    *(float *)((int)puVar8 + 0x74) = fVar9 - fVar2;
    uVar17 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar5 >> 0x1d) & 4;
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar6 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar9;
    }
    if (0.0 < fVar6) {
      lVar15 = uVar12 - 0xd0;
      lVar18 = uVar12 - 100;
      lVar20 = uVar12 - 0x54;
      lVar21 = 2;
      fVar6 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x11) = fVar6;
      *(float *)(puVar8 + 0x10) = fVar6;
      *(float *)((int)puVar8 + 0x84) = fVar6;
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar2;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar6;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar6 * fVar2;
      do {
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x6c) * fVar6 * fVar6;
        iVar10 = (int)lVar18;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar20 = uVar12 - 100;
      pfVar19 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar15 = lVar16;
      lVar18 = lVar20;
      do {
        fVar6 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar6;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar2;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar10 = (int)lVar16;
        iVar11 = (int)lVar20;
        lVar16 = lVar16 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
    }
    pMVar13->modeBits = MVar4 | DISABLED;
    pMVar13->enabled = '\0';
    (pMVar13->rotation).y = -fVar1;
  }
  return;
}



//==== 003a063c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M491_003a063c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M491_003a063c(void)

{
  DAT_008432f8 = 0x10000;
  return;
}



//==== 003a0678  ns=mobyupdate_helpers  size=0x648
// sig: undefined M491_003a0678(void)
// callers(1): 003a14a8 mobyupdate_unsorted::UpdateMoby_491
// callees(1): 001118d8 mobyutil::MB_getTarget

double mobyupdate_helpers::M491_003a0678(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x150;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2c] = in_LR;
  puVar9[0x27] = in_f29;
  puVar9[0x28] = in_f30;
  puVar9[0x29] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x24] = unaff_r29;
  puVar9[0x25] = unaff_r30;
  mobyutil::MB_getTarget(param_1,param_2,uVar13 - 0xe0);
  fVar2 = *(float *)((int)puVar9 + 0x74);
  dVar23 = 0.0;
  fVar6 = *(float *)(param_1 + 0x14) - fVar2;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(puVar9 + 0xe);
  bVar12 = true;
  param_2[3] = 0.0;
  iVar8 = MobyUpdateChainStart;
  fVar3 = fVar3 - fVar4;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  fVar5 = *(float *)(puVar9 + 0xf);
  fVar3 = SQRT(fVar3 * fVar3 + fVar6 * fVar6);
  dVar24 = dVar23;
  dVar25 = dVar23;
  dVar26 = dVar23;
  dVar27 = dVar23;
  if (iVar8 != 0) {
    do {
      if ((iVar8 != param_1) && (*(short *)(iVar8 + 0xa6) == *(short *)(param_1 + 0xa6))) {
        fVar6 = *(float *)(iVar8 + 0x14);
        fVar7 = *(float *)(iVar8 + 0x10);
        fVar1 = fVar6 - *(float *)(param_1 + 0x14);
        fVar10 = fVar7 - *(float *)(param_1 + 0x10);
        if (SQRT(fVar10 * fVar10 + fVar1 * fVar1) < 3.0) {
          dVar27 = (double)(float)(dVar27 + 6.0);
          fVar7 = (float)((double)(*(float *)(param_1 + 0x10) - fVar7) * 6.0 + dVar24);
          dVar24 = (double)fVar7;
          fVar6 = (float)((double)(*(float *)(param_1 + 0x14) - fVar6) * 6.0 + dVar25);
          dVar25 = (double)fVar6;
          fVar1 = (float)((double)(*(float *)(param_1 + 0x18) - *(float *)(iVar8 + 0x18)) * 6.0 +
                         dVar26);
          dVar26 = (double)fVar1;
          *param_2 = fVar7;
          param_2[1] = fVar6;
          param_2[2] = fVar1;
          fVar7 = *(float *)(iVar8 + 0x10);
          fVar6 = *(float *)(iVar8 + 0x14);
        }
        if (SQRT((fVar7 - fVar4) * (fVar7 - fVar4) + (fVar6 - fVar2) * (fVar6 - fVar2)) < fVar3) {
          bVar12 = false;
        }
      }
      iVar8 = *(int *)(iVar8 + 0x28);
    } while (iVar8 != 0);
    if (!bVar12) {
      fVar6 = *(float *)(param_1 + 0x14) - fVar2;
      fVar7 = *(float *)(param_1 + 0x10) - fVar4;
      fVar5 = *(float *)(param_1 + 0x18) - fVar5;
      dVar22 = dVar23;
      if (10.5 - fVar3 < 0.0) {
        dVar22 = -10.0;
      }
      if (fVar3 - 9.5 < 0.0) {
        dVar22 = 10.0;
      }
      fVar1 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
      param_2[3] = 0.0;
      fVar3 = 1.0 / (float)(dVar27 + 10.0);
      fVar10 = (float)(dVar22 * 10.0) / fVar1;
      dVar27 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar27 = (double)(fVar10 * fVar5);
      }
      dVar22 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar22 = (double)(fVar10 * fVar6);
      }
      dVar21 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar21 = (double)(fVar10 * fVar7);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar27 = (double)(fVar10 * fVar5);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar22 = (double)(fVar10 * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar21 = (double)(fVar10 * fVar7);
      }
      fVar5 = (float)(dVar26 + dVar27) * fVar3;
      fVar6 = (float)(dVar25 + dVar22) * fVar3;
      fVar3 = (float)(dVar24 + dVar21) * fVar3;
      param_2[2] = fVar5;
      param_2[1] = fVar6;
      *param_2 = fVar3;
      fVar3 = fVar3 + *(float *)(param_1 + 0x10);
      *param_2 = fVar3;
      fVar6 = fVar6 + *(float *)(param_1 + 0x14);
      param_2[1] = fVar6;
      fVar5 = fVar5 + *(float *)(param_1 + 0x18);
      goto LAB_003a08f4;
    }
  }
  *param_2 = fVar4;
  param_2[1] = fVar2;
  param_2[3] = *(float *)((int)puVar9 + 0x7c);
  fVar6 = fVar2;
  fVar3 = fVar4;
LAB_003a08f4:
  param_2[2] = fVar5;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14) - fVar6;
  if (1.0 <= SQRT((fVar5 - fVar3) * (fVar5 - fVar3) + fVar7 * fVar7)) {
    fVar6 = fVar6 - *(float *)(param_1 + 0x14);
    fVar7 = ABS(fVar3 - fVar5);
    fVar4 = ABS(fVar6);
    *(float *)(puVar9 + 0x18) = fVar3 - fVar5;
    *(float *)((int)puVar9 + 0xc4) = fVar6;
    *(float *)(puVar9 + 0x19) = fVar7 - fVar4;
    uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x18));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = ABS(*(float *)((int)puVar9 + 0xc4));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar19 = uVar13 - 0x68;
      lVar16 = uVar13 - 0x78;
      lVar20 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0xe4) = fVar2;
      *(float *)((int)puVar9 + 0xdc) = fVar2;
      *(float *)(puVar9 + 0x1c) = fVar2;
      *(float *)(puVar9 + 0x1b) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar4;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar2;
      *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar13 - 0x78;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0xd8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar5);
    }
  }
  else {
    *param_2 = fVar5;
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    fVar4 = fVar4 - *(float *)(param_1 + 0x10);
    fVar2 = fVar2 - *(float *)(param_1 + 0x14);
    fVar5 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)((int)puVar9 + 0xcc) = fVar4;
    *(float *)(puVar9 + 0x1a) = fVar2;
    *(float *)((int)puVar9 + 0xd4) = fVar5 - fVar3;
    uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0xcc));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = ABS(*(float *)(puVar9 + 0x1a));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar16 = uVar13 - 0x58;
      lVar19 = uVar13 - 0x48;
      lVar20 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0x104) = fVar2;
      *(float *)((int)puVar9 + 0xfc) = fVar2;
      *(float *)(puVar9 + 0x20) = fVar2;
      *(float *)(puVar9 + 0x1f) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xfc) = *(float *)((int)puVar9 + 0xfc) * fVar4;
      *(float *)(puVar9 + 0x20) = *(float *)(puVar9 + 0x20) * fVar2;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xe8) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar13 - 0x58;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xf8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0xf8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar5);
    }
  }
  return dVar23;
}



//==== 003a0ce8  ns=mobyupdate_helpers  size=0x710
// sig: undefined M491_003a0ce8(void)
// callers(1): 003a14a8 mobyupdate_unsorted::UpdateMoby_491
// callees(13): 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 001158b0 mobyutil::MB_SetupJumpArc; 0015d204 sound::sound_MobyPlay_oClass; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M491_003a0ce8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  MobyClass *pMVar6;
  void *pvVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  int iVar10;
  MobyInstance *pMVar11;
  ulonglong uVar12;
  int iVar15;
  undefined4 uVar16;
  longlong lVar13;
  longlong lVar14;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  CollDamageOut *pCVar21;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x150;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x2c] = in_LR;
  puVar9[0x29] = in_f31;
  puVar9[0x28] = unaff_r31;
  puVar9[0x24] = unaff_r27;
  puVar9[0x23] = unaff_r26;
  pMVar6 = param_1->pClass;
  puVar9[0x26] = unaff_r29;
  fVar2 = DAT_00843348;
  puVar9[0x27] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar22 = ZEXT48(pvVar7);
  iVar15 = 0;
  pCVar21 = CollDamage;
  fVar1 = pMVar6->gScale;
  dVar27 = 0.0;
  *(undefined4 *)((int)pvVar7 + 0x1c8) = 0;
  *(undefined4 *)((int)puVar9 + 0xe4) = 0;
  puVar9[0x25] = unaff_r28;
  pMVar11 = g_heroMobyPtr;
  param_1->scale = fVar2 * fVar1;
  do {
    if ((pCVar21->pVictimMoby == param_1) && ((pCVar21->damageFlags & 0xa0000) != 0)) {
      if ((pCVar21->pDamager != pMVar11) || ((pCVar21->damageFlags & 0x80000) != 0))
      goto LAB_003a0db8;
      pCVar21->pVictimMoby = (MobyInstance *)0x0;
    }
    iVar15 = iVar15 + 1;
    pCVar21 = pCVar21 + 1;
  } while (iVar15 < 0x40);
  pCVar21 = (CollDamageOut *)0x0;
LAB_003a0db8:
  iVar15 = mobyutil::MB_HandleDamage
                     (param_1,pCVar21,uVar22 + 0x20,0,puVar9 + 0x1c,(int)puVar9 + 0xe4,0,4);
  if (pCVar21 != (CollDamageOut *)0x0) {
    if (((*(int *)(puVar9 + 0x1c) != 1) && (param_1->state != '@' && param_1->state != '\n')) &&
       (pCVar21->pDamager->oClass != (DOOR_LEFT|TRESPASSER_0050))) {
      fVar1 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0xe4);
      *(float *)((int)pvVar7 + 0x20) = fVar1;
      iVar15 = iVar15 + ((uint)((LZCOUNT(0x100 - (uint)pCVar21->damageIndex) << 0x3a) >> 0x3f) &
                        9U - iVar15);
      iVar15 = iVar15 + ((uint)((LZCOUNT(2 - (uint)param_1->state) << 0x3a) >> 0x3f) & 9U - iVar15);
      if ((double)fVar1 <= dVar27) {
        iVar15 = 1;
      }
      uVar16 = fastfunc::FastDoubleToInt(0x40a4000000000000);
      *(undefined4 *)((int)pvVar7 + 0x98) = 0x40200000;
      fVar2 = DAT_0084331c;
      fVar1 = DAT_0071f418;
      *(undefined4 *)((int)pvVar7 + 0x90) = uVar16;
      *(undefined1 *)((int)pvVar7 + 0xad) = 0;
      *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
      *(undefined4 *)((int)pvVar7 + 0x94) = 9;
      *(float *)((int)pvVar7 + 0x80) = fVar2 * fVar1;
      fVar1 = mobyutil::g_FrameTime;
      if (iVar15 < 3) {
        if ((-1 < iVar15) && (0 < iVar15)) {
          MVar5 = param_1->modeBits;
          *(undefined4 *)(puVar9 + 0x18) = 0;
          *(undefined4 *)((int)puVar9 + 0xc4) = 0;
          *(undefined4 *)(puVar9 + 0x19) = 0;
          *(undefined4 *)((int)puVar9 + 0xcc) = 0;
          param_1->modeBits =
               MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          mobyfunc::GetBonePosition(param_1,7,uVar12 - 0x80);
          puVar9[0x12] = 0xffffffffffffffff;
          puVar9[0x14] = 1;
          puVar9[0x15] = 0x10;
          puVar9[0x16] = 0xffffffffffffffff;
          puVar9[0x17] = 0;
          mobyutil::MB_genericExplosion
                    (dVar27,dVar27,0x4030000000000000,0x4020000000000000,0x4022000000000000,
                     0x4010000000000000,0x4040000000000000,param_1,uVar12 - 0x90,uVar12 - 0x80,1,
                     &DAT_003a0cc0,0x14,6,0x20);
          sound::sound_MobyPlay_oClass(0,0,param_1,0x79);
          param_1->state = '\n';
          *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
          mobyutil::MB_SpawnBoltsFromCrate(param_1,0x200,0xffffffffffffffff);
        }
      }
      else if (iVar15 < 0xb) {
        if (iVar15 < 9) {
          fVar2 = DAT_00843324 * mobyutil::g_FrameTime;
          *(undefined4 *)((int)pvVar7 + 0x1c8) = 1;
          *(float *)((int)pvVar7 + 0x88) = fVar2;
          *(float *)((int)pvVar7 + 0x8c) = DAT_00843320 * fVar1;
          mobyutil::MB_SetupJumpArc
                    (0x4010000000000000,0x3ff0000000000000,1,&DAT_003a0cc0,uVar22 + 0x70);
          *(undefined4 *)((int)pvVar7 + 0xc0) = 0x41400000;
          *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41800000;
          fVar1 = (param_1->pos).x - (pCVar21->pDamager->pos).x;
          fVar2 = (param_1->pos).y - (pCVar21->pDamager->pos).y;
          dVar24 = ABS((double)fVar1);
          dVar25 = ABS((double)fVar2);
          *(float *)((int)puVar9 + 0xec) = fVar1;
          *(float *)(puVar9 + 0x1e) = fVar2;
          *(float *)((int)puVar9 + 0xf4) = (float)(dVar24 - dVar25);
          uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0xec) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1d) & 4;
          dVar26 = ABS((double)*(float *)((int)puVar9 + 0xec));
          if ((double)*(float *)((int)puVar9 + 0xf4) - dVar27 < 0.0) {
            dVar26 = dVar25;
          }
          fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          dVar25 = ABS((double)*(float *)(puVar9 + 0x1e));
          if ((double)*(float *)((int)puVar9 + 0xf4) - dVar27 < 0.0) {
            dVar25 = dVar24;
          }
          fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if (dVar27 < dVar26) {
            lVar13 = uVar12 - 0x140;
            lVar17 = uVar12 - 0x58;
            lVar20 = uVar12 - 0x48;
            lVar23 = 2;
            fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar9 + 0x104) = fVar3;
            *(float *)((int)puVar9 + 0xfc) = fVar3;
            *(float *)(puVar9 + 0x20) = fVar3;
            *(float *)(puVar9 + 0x1f) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar9 + 0xfc) = *(float *)((int)puVar9 + 0xfc) * fVar4;
            *(float *)(puVar9 + 0x20) = *(float *)(puVar9 + 0x20) * fVar3;
            *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar13 + 0xf8) = *(float *)((int)lVar13 + 0xe8) * fVar3 * fVar3;
              iVar15 = (int)lVar17;
              lVar13 = lVar13 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar20 = uVar12 - 0x58;
            pfVar18 = (float *)&DAT_007358e0;
            lVar23 = 4;
            lVar13 = lVar14;
            lVar17 = lVar20;
            do {
              fVar3 = *pfVar18;
              fVar4 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar13 + 0xf8) = *(float *)((int)lVar13 + 0xf8) * fVar3;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
              lVar17 = lVar17 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar13 = 2;
            do {
              iVar15 = (int)lVar14;
              iVar10 = (int)lVar20;
              lVar14 = lVar14 + 0x10;
              lVar20 = lVar20 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xf8)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
          }
          *(float *)(puVar9 + 0x1d) = (float)dVar27;
          fVar1 = (pCVar21->impact).z;
          *(float *)(puVar9 + 6) = (pCVar21->impact).x;
          *(float *)(puVar9 + 7) = fVar1;
          fVar1 = (pCVar21->impact).w;
          *(float *)((int)puVar9 + 0x34) = (pCVar21->impact).y;
          *(float *)((int)puVar9 + 0x3c) = fVar1;
          mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x68,uVar22 + 0x88,uVar22 + 0x8c)
          ;
          mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0x1d),param_1,uVar22 + 0x70);
          sound::sound_MobyPlay_oClass(0,0,param_1,0x79);
          param_1->state = '\t';
          *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
        }
        else {
          *(undefined4 *)((int)pvVar7 + 0x1c8) = 1;
          *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
        }
      }
      mobyutil::MB_UpdateLightsTransition(param_1,uVar22 + 0x60);
    }
    if (pCVar21 != (CollDamageOut *)0x0) {
      pCVar21->pVictimMoby = (MobyInstance *)0x0;
    }
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar22 + 0x60);
  fVar2 = DAT_0084334c;
  pMVar6 = param_1->pClass;
  fVar1 = pMVar6->gScale;
  *(undefined4 *)((int)pvVar7 + 0x164) = 0;
  param_1->scale = fVar1 * fVar2;
  if ((param_1->state == '\x01') || (*(int *)((int)pvVar7 + 0x1d0) == -1)) {
    if (param_1->state == '\x01') {
      uVar16 = *(undefined4 *)((int)pvVar7 + 0x174);
    }
    else {
      uVar16 = *(undefined4 *)((int)pvVar7 + 0x178);
    }
    *(undefined4 *)((int)pvVar7 + 0x1b8) = uVar16;
    mobyutil::MB_getTarget(param_1,pMVar6,uVar22 + 0x120);
  }
  else {
    *(undefined4 *)((int)pvVar7 + 0x1b8) = *(undefined4 *)((int)pvVar7 + 0x178);
    pSVar8 = Splines[*(int *)((int)pvVar7 + 0x1d0)];
    mobyutil::MB_getTargetInArea(param_1,uVar22 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  }
  fVar1 = (param_1->pos).y - *(float *)((int)pvVar7 + 0x124);
  fVar2 = (param_1->pos).x - *(float *)((int)pvVar7 + 0x120);
  fVar3 = (param_1->pos).z - *(float *)((int)pvVar7 + 0x128);
  if (*(float *)((int)pvVar7 + 0x1b8) < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    *(undefined4 *)((int)pvVar7 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar7 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 003a14a8  ns=mobyupdate_unsorted  size=0x2284
// sig: undefined UpdateMoby_491(MobyInstance * moby)
// callers(0): 
// callees(52): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 00065468 stub::STUB_00065468; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 000ffcd0 mobyutil::CollMovingSphere; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00104e44 mobyutil::PointInsideComplexPoly; 0010581c mobyutil::SetCollDamIn; 00105870 mobyutil::DamageSphereAtPos; 00105d58 mobyutil::MB_CollLineMulti; 00108180 mobyutil::MB_computeLobVelocity; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010d7a0 mobyutil::MB_PathFollowToPos; 00110b70 mobyutil::MB_IsPntInCuboid; 00113e88 mobyutil::MB_MayaFrameTrigger; 001162a0 mobyutil::???_MB_SpawnRingPartFx; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011aa78 mobyutil::MB_SpawnDebris; 00126dd8 partupd::SpawnPart_22; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 003a0678 mobyupdate_helpers::M491_003a0678; 003a0ce8 mobyupdate_helpers::M491_003a0ce8; 00470690 FUN_00470690; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf
// strings: 003a1b20: 'Td 6cc' (raw)

/* WARNING: Type propagation algorithm not settling */
/* Moby 491 */

void mobyupdate_unsorted::UpdateMoby_491(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  Spline *pSVar6;
  longlong lVar7;
  uint uVar9;
  int iVar10;
  u8 uVar13;
  undefined4 uVar11;
  ulonglong uVar8;
  int iVar12;
  MobyModeBit MVar14;
  Spline *pSVar16;
  longlong lVar15;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  byte in_cr6;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auStack_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  Vec4 local_1a0;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 auStack_170 [16];
  float local_160;
  float local_15c;
  undefined4 local_158;
  f32 local_150;
  f32 local_14c;
  float local_148;
  f32 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [48];
  float local_c0;
  int local_bc;
  longlong local_b8;
  
  lVar7 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar19 = ZEXT48(pvVar5);
  mobyupdate_helpers::M491_003a0ce8();
  iVar10 = *(int *)((int)pvVar5 + 0x160);
  if (((moby->state != '\0') && (moby->state != '@')) && (g_heroType != '\x02')) {
    iVar10 = *(int *)((int)pvVar5 + 0x1e0);
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    if (((iVar10 != -1) && (sound::g_SoundChannels[iVar10].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar10].state != '\0')) {
      sound::sound_Kill(iVar10);
    }
    MVar14 = moby->modeBits;
    *(undefined4 *)((int)pvVar5 + 0x1e0) = 0xffffffff;
    moby->modeBits =
         MVar14 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                   DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                   TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar5 + 0x58) = 0;
    moby->state = '\x01';
    return;
  }
  uVar32 = 0x4004000000000000;
  mobyfunc::DoManipulator(0x4004000000000000,moby,6,(Manipulator *)((int)pvVar5 + 0x200));
  bVar2 = moby->state;
  if (5 < bVar2) {
    if (bVar2 == 0x40) {
      moby->collision = (ushort *)0x0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      *(undefined1 *)((int)pvVar5 + 0x58) = 0;
      uVar3 = moby->uid;
      (&DAT_00a53964)[(short)uVar3] = 0;
      (&DAT_00a545c4)[(short)uVar3] = 0;
      iVar18 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      uVar4 = moby->uid;
      iVar10 = (int)((longlong)((int)(short)uVar4 >> 5) << 2);
      uVar9 = *(uint *)(&DAT_00a54dd0 + iVar10);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) & ~(1 << (uVar3 & 0x1f));
      bVar1 = g_heroType != '\x02';
      *(uint *)(&DAT_00a54dd0 + iVar10) = uVar9 & ~(1 << (uVar4 & 0x1f));
      if (bVar1) {
        moby->state = '\0';
      }
    }
    else {
      if (bVar2 == 10) {
        fVar36 = DAT_00843354 * DAT_0071f408;
        local_114 = (moby->transform).v0.w;
        lVar15 = lVar7 + 0x10;
        lVar17 = lVar7 + 0x40;
        local_120 = (moby->transform).v0.x * fVar36;
        local_11c = (moby->transform).v0.y * fVar36;
        local_118 = DAT_00843358 * DAT_0071f408 + (moby->transform).v0.z * fVar36;
        dVar31 = 90.5;
        local_b8 = (longlong)(int)(animationSpeed * 90.5);
        dVar21 = 12.0;
        mobyutil::MB_SpawnDebrisMoby
                  ((double)(DAT_0071f418 * 12.0),lVar7,0x64a,lVar15,lVar17,
                   (int)(animationSpeed * 90.5),0);
        local_b8 = (longlong)(int)((double)animationSpeed * dVar31);
        mobyutil::MB_SpawnDebrisMoby
                  ((double)(float)((double)DAT_0071f418 * dVar21),lVar7,0x64b,lVar15,lVar17,
                   (int)((double)animationSpeed * dVar31),0);
        mobyutil::MB_SpawnDebrisMoby(0,lVar7,0x64c,lVar15,lVar17,0,0);
        mobyutil::MB_SpawnDebris(lVar7,0x7a9,1,0x7a9,2,4,2);
        moby->state = '@';
        return;
      }
      if (bVar2 == 9) {
        uVar9 = 0;
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          uVar9 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
        }
        else {
          moby->unk58 = 1.0;
        }
        if (((uVar9 & 0x40) != 0) ||
           ((*(int *)((int)pvVar5 + 0x1d8) != 0 && ((moby->field43_0x70 & 2U) != 0)))) {
          if (*(int *)((int)pvVar5 + 0x1d4) == 0) {
            moby->state = '\x03';
            *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
            uVar9 = *(int *)((int)pvVar5 + 0x1b0) + 1;
            iVar10 = *(int *)((int)pvVar5 + 0x1b4);
            iVar18 = *(int *)((int)pvVar5 + (uVar9 * 4 & 4) + 0x180);
            *(uint *)((int)pvVar5 + 0x1b0) = uVar9 & 1;
            pSVar6 = Splines[iVar18];
            local_130 = pSVar6->points[iVar10].x;
            local_12c = pSVar6->points[iVar10].y;
            local_128 = pSVar6->points[iVar10].z;
            local_124 = pSVar6->points[iVar10].w;
            dVar21 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_130,0);
            local_128 = (float)dVar21;
            if (moby->animationId != '\x03') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              mobyutil::MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 20.5));
            }
            lVar17 = uVar19 + 0x40;
            FUN_005e81f0(lVar17,&local_130,lVar7 + 0x10);
            FUN_005e84c0((double)(DAT_00843330 * mobyutil::g_FrameTime),lVar17,lVar17);
            dVar21 = (double)mobyutil::MB_computeLobVelocity
                                       ((double)(DAT_00843330 * mobyutil::g_FrameTime),
                                        -(double)(DAT_00843334 * DAT_0071f418),lVar7 + 0x10,
                                        &local_130);
            *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
          }
          else {
            moby->state = '\x04';
            if (moby->animationId != '\0') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              mobyutil::MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
            }
          }
        }
      }
      else if (bVar2 == 8) {
        dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
        fVar36 = mobyutil::OrganicDeltAng
                           ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                            mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar5 + 0x1bc));
        if ((moby->field43_0x70 & 2U) == 0) {
          dVar21 = (double)mobyfunc::BlendAnimFrame(moby);
          mobyfunc::GetBonePosition(lVar7,1,&local_140);
          if ((17.0 <= dVar21) && (dVar21 <= 24.0)) {
            local_150 = (moby->pos).x;
            local_14c = (moby->pos).y;
            local_144 = (moby->pos).w;
            local_148 = (moby->pos).z + 0.5;
            dVar21 = (double)mathfunc::cosf((moby->rotation).z);
            local_160 = (float)dVar21;
            dVar21 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_15c = (float)dVar21;
            local_158 = 0x3f800000;
            mobyutil::SetCollDamIn(0x4010000000000000,auStack_f0,lVar7,0x10007);
            collproc::CollMobySphere(uVar32,&local_140);
            collproc::CollLine(&local_150,&local_140,0,lVar7,auStack_f0);
            mobyutil::MB_CollLineMulti
                      (&local_150,&local_140,&local_150,uVar19 + 0x1a0,lVar7,auStack_f0,5);
            stub::STUB_00065468(&local_150,&local_140);
            *(undefined4 *)((int)pvVar5 + 0x1a0) = local_140;
            *(undefined4 *)((int)pvVar5 + 0x1a4) = local_13c;
            *(undefined4 *)((int)pvVar5 + 0x1a8) = local_138;
            *(undefined4 *)((int)pvVar5 + 0x1ac) = local_134;
          }
        }
        else {
          lVar17 = lVar7 + 0x10;
          dVar21 = (double)FUN_005e8588((double)fVar36,lVar17,iVar10 + 0x10);
          if ((((double)DAT_00843344 <= dVar21) || (*(int *)((int)pvVar5 + 0x1d4) != 0)) ||
             (Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->cnt + -1
              <= *(int *)((int)pvVar5 + 0x1b4))) {
            dVar21 = (double)FUN_005e8588(lVar17,iVar10 + 0x10);
            if (((double)DAT_00843344 < dVar21) && (moby->state = '\x04', moby->animationId != '\0')
               ) {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              mobyutil::MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
            }
          }
          else {
            moby->state = '\x03';
            *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
            iVar10 = *(int *)((int)pvVar5 + 0x1b4) + 1;
            *(int *)((int)pvVar5 + 0x1b4) = iVar10;
            if (moby->animationId != '\x03') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              mobyutil::MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 20.5));
              iVar10 = *(int *)((int)pvVar5 + 0x1b4);
            }
            lVar15 = uVar19 + 0x40;
            FUN_005e81f0(lVar15,Splines[*(int *)((int)pvVar5 +
                                                *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->points
                                + iVar10,lVar17);
            FUN_005e84c0((double)(DAT_00843330 * mobyutil::g_FrameTime),lVar15,lVar15);
            dVar21 = (double)mobyutil::MB_computeLobVelocity
                                       ((double)(DAT_00843330 * mobyutil::g_FrameTime),
                                        -(double)(DAT_00843334 * DAT_0071f418),lVar17,
                                        Splines[*(int *)((int)pvVar5 +
                                                        *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]
                                        ->points + *(int *)((int)pvVar5 + 0x1b4),
                                        *(int *)((int)pvVar5 + 0x1b4) * 0x10,&DAT_00720000,0);
            *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
          }
        }
      }
      else if (bVar2 == 7) {
        uVar29 = FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
        if (*(int *)((int)pvVar5 + 0x164) == 2) {
          moby->state = '\x04';
          if (moby->animationId != '\0') {
            local_b8 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          uVar29 = mobyupdate_helpers::M491_003a0678
                             ((double)*(float *)((int)pvVar5 + 0x1b8),lVar7,&local_190);
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10);
          if ((dVar21 < (double)DAT_00843344) && (moby->state = '\b', moby->animationId != '\x02'))
          {
            local_b8 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar7,2,0,(int)(animationSpeed * 10.5));
          }
        }
        mobyutil::OrganicDeltAngSpeed
                  (uVar29,(double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
                   (double)(mobyutil::g_FrameTime * 3.1415927),lVar7);
        local_1a0.x = (moby->pos).x;
        local_1a0.y = (moby->pos).y;
        local_1a0.z = (moby->pos).z;
        local_1a0.w = (moby->pos).w;
        fastfunc::FastVecSub(&local_180,&local_190,lVar7 + 0x10);
        local_190 = local_180;
        local_18c = local_17c;
        local_188 = local_178;
        local_184 = local_174;
        FUN_005e7f98((double)(mobyutil::g_FrameTime * 6.5),&local_190,&local_190);
        fastfunc::FastVecAddSelf(auStack_170,&local_190,lVar7 + 0x10);
        iVar10 = mobyutil::CollMovingSphere
                           (0x4002000000000000,0x3ffc000000000000,0x3fe0000000000000,
                            0x3fe0c15240000000,lVar7,&local_1a0,&local_190);
        if ((iVar10 == 0) ||
           (iVar10 = mobyutil::PointInsideComplexPoly
                               (&local_1a0,(Vec4 *)Splines[*(int *)((int)pvVar5 + 0x1b0)]->points,
                                Splines[*(int *)((int)pvVar5 + 0x1b0)]->cnt), iVar10 != 0)) {
          (moby->pos).x = local_1a0.x;
          (moby->pos).y = local_1a0.y;
          (moby->pos).z = local_1a0.z;
          uVar13 = moby->animationId;
          (moby->pos).w = local_1a0.w;
          moby->state = '\x04';
          if (uVar13 != '\0') {
            local_b8 = (longlong)(int)(animationSpeed * 12.5);
            mobyutil::MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 12.5));
          }
        }
        else {
          (moby->pos).x = local_1a0.x;
          (moby->pos).y = local_1a0.y;
          (moby->pos).z = local_1a0.z;
          (moby->pos).w = local_1a0.w;
        }
      }
      else if (bVar2 == 6) {
        if (*(int *)((int)pvVar5 + 0x164) == 2) {
          moby->state = '\x04';
          if (moby->animationId != '\0') {
            local_b8 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                                        (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
          fVar36 = mobyutil::OrganicDeltAng
                             ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                              mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                              (float *)((int)pvVar5 + 0x1bc));
          if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
            lVar17 = lVar7 + 0x10;
            dVar21 = (double)FUN_005e8588((double)fVar36,lVar17,iVar10 + 0x10);
            if (((dVar21 < 8.0) && (*(int *)((int)pvVar5 + 0x1d4) == 0)) &&
               (*(int *)((int)pvVar5 + 0x1b4) <
                Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->cnt + -1
               )) {
              moby->state = '\x03';
              *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
              iVar10 = *(int *)((int)pvVar5 + 0x1b4) + 1;
              *(int *)((int)pvVar5 + 0x1b4) = iVar10;
              if (moby->animationId != '\x03') {
                local_b8 = (longlong)(int)(animationSpeed * 20.5);
                mobyutil::MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 20.5));
                iVar10 = *(int *)((int)pvVar5 + 0x1b4);
              }
              lVar15 = uVar19 + 0x40;
              FUN_005e81f0(lVar15,Splines[*(int *)((int)pvVar5 +
                                                  *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->
                                  points + iVar10,lVar17);
              FUN_005e84c0((double)(DAT_00843330 * mobyutil::g_FrameTime),lVar15,lVar15);
              dVar21 = (double)mobyutil::MB_computeLobVelocity
                                         ((double)(DAT_00843330 * mobyutil::g_FrameTime),
                                          -(double)(DAT_00843334 * DAT_0071f418),lVar17,
                                          Splines[*(int *)((int)pvVar5 +
                                                          *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)
                                                 ]->points + *(int *)((int)pvVar5 + 0x1b4),
                                          *(int *)((int)pvVar5 + 0x1b4) * 0x10,&DAT_00720000,0);
              *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
              goto LAB_003a340c;
            }
          }
          iVar10 = fastfunc::FastDecTimerS32(uVar19 + 0x1c0);
          if (iVar10 != 0) {
            moby->state = '\x05';
            if (moby->animationId != '\x06') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              mobyutil::MB_SetAnimation(lVar7,6,0,(int)(animationSpeed * 20.5));
            }
            *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
          }
        }
      }
    }
    goto LAB_003a340c;
  }
  if (bVar2 == 5) {
    uVar13 = moby->animationId;
    if ((uVar13 == '\x06') && ((moby->field43_0x70 & 2U) != 0)) {
      local_b8 = (longlong)(int)(animationSpeed * 5.5);
      mobyutil::MB_SetAnimation(lVar7,7,0,(int)(animationSpeed * 5.5));
      uVar13 = moby->animationId;
      moby->unk58 = DAT_00843350;
    }
    if (*(int *)((int)pvVar5 + 0x164) == 2) {
      moby->state = '\x04';
      if (uVar13 != '\0') {
        local_b8 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar5 + 0x1bc));
      uVar13 = moby->animationId;
      if (uVar13 == '\a') {
        iVar18 = mobyutil::MB_MayaFrameTrigger(0.0,moby);
        uVar13 = moby->animationId;
        if (iVar18 != 0) {
          mobyfunc::GetBonePosition(lVar7,0,local_1d0);
          FUN_005e81f0(auStack_1c0,iVar10 + 0x10,local_1d0);
          dVar21 = 0.5;
          FUN_005e7f98((double)(DAT_0084333c * mobyutil::g_FrameTime),auStack_1c0,auStack_1c0);
          iVar18 = (int)(animationSpeed * (float)((double)(longlong)DAT_00843338 + dVar21));
          local_b8 = (longlong)iVar18;
          uVar29 = 0x4008000000000000;
          FUN_00470690(0x4008000000000000,auStack_1c0,local_1d0,lVar7,iVar10,iVar18);
          FUN_005e7f98(uVar29,auStack_1c0,auStack_1c0);
          fastfunc::FastVecAddSelf(auStack_1b0,local_1d0,auStack_1c0);
          mobyutil::____MB_SpawnRingPartFx(lVar7);
          *(int *)((int)pvVar5 + 0x1c4) = *(int *)((int)pvVar5 + 0x1c4) + 1;
          goto LAB_003a340c;
        }
      }
      auVar34 = loadVectorLeftIndexed(0x1c4,uVar19);
      auVar35 = loadVectorRightIndexed(0x1d4,uVar19);
      auVar33 = loadVectorLeftIndexed(0x50,0x3a13f8);
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = vectorConvertFromSignedFixedPointWord(auVar34 | auVar35,0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                 auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
      if (((bool)(in_cr6 >> 1 & 1)) || ((moby->field43_0x70 & 2U) == 0)) {
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10,0x1d4,0x50);
          if (dVar21 < (double)DAT_00843340) {
            moby->state = '\a';
            if (moby->animationId != '\x01') {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar7,1,0,(int)(animationSpeed * 10.5));
            }
            goto LAB_003a340c;
          }
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10);
          if (dVar21 < (double)DAT_00843344) {
            moby->state = '\b';
            if (moby->animationId != '\x02') {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar7,2,0,(int)(animationSpeed * 10.5));
            }
            goto LAB_003a340c;
          }
        }
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          lVar17 = lVar7 + 0x10;
          dVar21 = (double)FUN_005e8588(lVar17,iVar10 + 0x10);
          if (((10.0 < dVar21) && (*(int *)((int)pvVar5 + 0x1c8) != 0)) &&
             (*(int *)((int)pvVar5 + 0x1d4) == 0)) {
            moby->state = '\x03';
            *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
            uVar8 = (ulonglong)*(uint *)((int)pvVar5 + 0x1b0) + 1 & 1;
            *(int *)((int)pvVar5 + 0x1b0) = (int)uVar8;
            if (moby->animationId != '\x03') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              mobyutil::MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 20.5));
              uVar8 = (ulonglong)*(uint *)((int)pvVar5 + 0x1b0);
            }
            lVar15 = uVar19 + 0x40;
            FUN_005e81f0(lVar15,Splines[*(int *)((int)pvVar5 + (int)(uVar8 << 2) + 0x180)]->points +
                                *(int *)((int)pvVar5 + 0x1b4),lVar17);
            FUN_005e84c0((double)(DAT_00843330 * mobyutil::g_FrameTime),lVar15,lVar15);
            dVar21 = (double)mobyutil::MB_computeLobVelocity
                                       ((double)(DAT_00843330 * mobyutil::g_FrameTime),
                                        -(double)(DAT_00843334 * DAT_0071f418),lVar17,
                                        Splines[*(int *)((int)pvVar5 +
                                                        *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]
                                        ->points + *(int *)((int)pvVar5 + 0x1b4),
                                        *(int *)((int)pvVar5 + 0x1b4) * 0x10,&DAT_00720000,0);
            *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
          }
        }
      }
      else {
        moby->state = '\x06';
        if (uVar13 != '\0') {
          local_b8 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 10.5));
        }
        uVar11 = fastfunc::FastDoubleToInt
                           ((double)(animationSpeed * *(float *)((int)pvVar5 + 0x188) * 60.0));
        *(undefined4 *)((int)pvVar5 + 0x1c0) = uVar11;
      }
    }
    goto LAB_003a340c;
  }
  if (bVar2 == 4) {
    if ((moby->animationId != '\0') && ((moby->field43_0x70 & 2U) != 0)) {
      local_b8 = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
    }
    if (*(int *)((int)pvVar5 + 0x164) != 2) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
      fVar36 = mobyutil::OrganicDeltAng
                         ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                          mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x1bc));
      iVar18 = fastfunc::FastDecTimerS32((double)fVar36,uVar19 + 0x1c0);
      if (iVar18 != 0) {
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10);
          if (dVar21 < (double)DAT_00843340) {
            moby->state = '\a';
            if (moby->animationId != '\x01') {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar7,1,0,(int)(animationSpeed * 10.5));
            }
            goto LAB_003a340c;
          }
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10);
          if (dVar21 < (double)DAT_00843344) {
            moby->state = '\b';
            if (moby->animationId != '\x02') {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar7,2,0,(int)(animationSpeed * 10.5));
            }
            goto LAB_003a340c;
          }
        }
        moby->state = '\x05';
        if (moby->animationId != '\x06') {
          local_b8 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar7,6,0,(int)(animationSpeed * 20.5));
        }
        *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
      }
    }
    goto LAB_003a340c;
  }
  if (bVar2 == 3) {
    if (((moby->animationId == '\x03') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\x04')) {
      local_b8 = (longlong)(int)(animationSpeed * 6.5);
      mobyutil::MB_SetAnimation(lVar7,4,0,(int)(animationSpeed * 6.5));
    }
    FUN_005e7f54(lVar7 + 0x10,lVar7 + 0x10,uVar19 + 0x40);
    fVar36 = -(DAT_00843334 * DAT_0071f418 - *(float *)((int)pvVar5 + 0x48));
    *(float *)((int)pvVar5 + 0x48) = fVar36;
    if (fVar36 < 0.0) {
      dVar26 = 0.5;
      dVar21 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_1e0,0);
      dVar31 = (double)(moby->pos).z;
      fVar36 = animationSpeed * 26.0;
      if (((float)(dVar31 - dVar21) <
           fVar36 * *(float *)((int)pvVar5 + 0x48) +
           (float)((double)(DAT_00843334 * DAT_0071f418) * dVar26) * fVar36 * fVar36) &&
         (moby->animationId != '\x05')) {
        local_b8 = (longlong)(int)(animationSpeed * 6.5);
        mobyutil::MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 6.5));
        dVar31 = (double)(moby->pos).z;
      }
      if (dVar31 < dVar21) {
        (moby->pos).z = (float)dVar21;
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        moby->state = '\x04';
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(0x20,0x3a13f8);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1c0,
                            uVar19);
        *(undefined4 *)((int)pvVar5 + 0x1c0U & 0xfffffffc) = uVar11;
      }
    }
LAB_003a33d4:
    iVar10 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x1e0));
    if (iVar10 == 0) {
      iVar10 = sound::PlayMobySound(7,4,moby);
      *(int *)((int)pvVar5 + 0x1e0) = iVar10;
    }
    iVar10 = 0;
    do {
      dVar30 = 1.0;
      iVar18 = 2;
      dVar27 = -1.0;
      dVar25 = 20.0;
      dVar24 = 0.800000011920929;
      dVar23 = 1.2000000476837158;
      dVar22 = -20.0;
      dVar28 = 1.5;
      dVar26 = 3.0;
      dVar31 = 210000.0;
      dVar21 = 0.5;
      do {
        local_110 = 0.0;
        local_10c = 0.0;
        local_108 = 0.0;
        local_104 = 0;
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar27);
        local_110 = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar25) * dVar20);
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar27);
        local_10c = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar25) * dVar20);
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar23);
        local_108 = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar22) * dVar20);
        uVar9 = mobyutil::MB_randInt(100);
        mobyfunc::GetBonePosition(lVar7,iVar18,auStack_100);
        FUN_005e7d64(&local_110,&local_110,lVar7 + 0xc0);
        dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar26);
        dVar20 = (double)(float)(dVar20 * dVar31);
        if ((uVar9 & 1) == 0) {
          iVar12 = mobyutil::MB_randRange(0x14,0x1e);
        }
        else {
          iVar12 = mobyutil::MB_randRange(10,0xf);
        }
        local_b8 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar12 + dVar21));
        partupd::SpawnPart_22
                  (dVar20,auStack_100,&local_110,
                   ((LZCOUNT(-(uVar9 & 1)) << 0x3a) >> 0x3f & 0x707000U) + 0x400f0f7f,0x272727);
        iVar18 = iVar18 + 1;
      } while (iVar18 < 6);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 10);
    return;
  }
  if (bVar2 == 2) {
    lVar17 = lVar7 + 0x10;
    dVar28 = (double)(mobyutil::g_FrameTime * 12.0);
    pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
    mobyutil::MB_PathFollowToPos
              (0x408f380000000000,0x4014000000000000,0,pSVar6,lVar17,local_1f0,&local_bc,&local_c0);
    dVar21 = (double)fastfunc::FastIntToDouble(local_bc);
    dVar31 = (double)pSVar6->points[0].w;
    dVar26 = (double)((float)(dVar21 * dVar31 + (double)local_c0) + 2.0);
    local_bc = fastfunc::FastDoubleToInt((double)(float)(dVar26 / dVar31));
    dVar21 = (double)fastfunc::FastIntToDouble();
    dVar31 = (double)pSVar6->points[0].w;
    local_c0 = (float)(-(double)(float)(dVar21 * dVar31 - dVar26) / dVar31);
    if (local_bc < pSVar6->cnt + -1) {
      dVar21 = (double)FUN_005e8548(lVar17,pSVar6->points + pSVar6->cnt + -1);
      if ((dVar21 < (double)(float)(dVar28 / (double)(animationSpeed * 26.0))) &&
         (moby->animationId != '\x05')) {
        local_b8 = (longlong)(int)(animationSpeed * 6.5);
        mobyutil::MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 6.5));
      }
      FUN_005e81f0(local_1f0,pSVar6->points + local_bc + 1,pSVar6->points + local_bc);
      FUN_005e7f54(local_1f0,local_1f0,pSVar6->points + local_bc);
      if (local_bc + 1 < pSVar6->cnt + -8) {
        dVar21 = (double)(moby->rotation).z;
        uVar32 = FUN_005e8338((double)(pSVar6->points[local_bc + 1].x - (moby->pos).x),
                              (double)(pSVar6->points[local_bc + 1].y - (moby->pos).y));
        dVar21 = (double)mobyutil::MB_DeltAngSpeed
                                   (dVar21,uVar32,0x3f847ae140000000,0x3fd3333340000000,
                                    0x3fb99999a0000000);
        (moby->rotation).z = (float)dVar21;
      }
      FUN_005e81f0(auStack_200,local_1f0,lVar17);
      dVar21 = (double)FUN_005e8030(auStack_200);
      if (dVar28 - dVar21 < 0.0) {
        dVar21 = dVar28;
      }
      FUN_005e7f98(dVar21,auStack_200,auStack_200);
      FUN_005e7f54(lVar17,lVar17,auStack_200);
      goto LAB_003a33d4;
    }
    dVar21 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar17,0);
    if ((double)(moby->pos).z < dVar21) {
      (moby->pos).z = (float)dVar21;
    }
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    moby->state = '\x04';
    auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar33 = loadVectorLeftIndexed(0x20,0x3a13f8);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar33 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar34);
    auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1c0,uVar19);
    *(undefined4 *)((int)pvVar5 + 0x1c0U & 0xfffffffc) = uVar11;
    goto LAB_003a340c;
  }
  if (bVar2 != 1) {
    if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar5 + 0x20) = 0x41400000;
      *(undefined2 *)((int)pvVar5 + 0x24) = 0xc;
      *(undefined1 *)((int)pvVar5 + 0x28) = 3;
      *(undefined4 *)((int)pvVar5 + 0x30) = 0x40c00000;
      *(ushort *)((int)pvVar5 + 0x3e) = *(ushort *)((int)pvVar5 + 0x3e) | 2;
      *(undefined1 *)((int)pvVar5 + 0x29) = 0;
      moby->drawDistance = 0xff;
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar5 + 0x1e0) = 0xffffffff;
      *(undefined4 *)((int)pvVar5 + 0x174) = 0x42b40000;
      *(undefined4 *)((int)pvVar5 + 0x1bc) = 0;
      uVar9 = rand();
      MVar14 = moby->modeBits | MIRROR;
      iVar10 = *(int *)((int)pvVar5 + 0x180);
      moby->collision = (ushort *)0x0;
      moby->modeBits =
           MVar14 + ((ushort)((LZCOUNT(-(uVar9 & 1)) << 0x3a) >> 0x3f) & moby->modeBits - MVar14) &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      if ((iVar10 == -1) || (*(int *)((int)pvVar5 + 0x184) == -1)) {
        *(undefined4 *)((int)pvVar5 + 0x1d4) = 1;
      }
      if (*(int *)((int)pvVar5 + 0x170) != -1) {
        pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
        (moby->pos).x = pSVar6->points[0].x;
        (moby->pos).y = pSVar6->points[0].y;
        (moby->pos).z = pSVar6->points[0].z;
        (moby->pos).w = pSVar6->points[0].w;
      }
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar7,0,0,5);
      }
    }
    goto LAB_003a340c;
  }
  iVar10 = *(int *)((int)pvVar5 + 0x1cc);
  if (iVar10 == -1) {
    iVar10 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x1dc));
    if (iVar10 != 0) {
      iVar10 = *(int *)((int)pvVar5 + 0x1cc);
      goto LAB_003a17b8;
    }
  }
  else {
LAB_003a17b8:
    if ((iVar10 != -1) && (iVar10 = mobyutil::MB_CountActiveMobysByGroup(iVar10,0x40), iVar10 != 0))
    goto LAB_003a340c;
    if (g_heroType == '\x02') {
      moby->collision = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    }
  }
  if ((((*(int *)((int)pvVar5 + 0x164) != 2) && (*(int *)((int)pvVar5 + 0x170) != -1)) &&
      (g_heroType == '\x02')) && ((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
    if ((*(int *)((int)pvVar5 + 0x1d0) == -1) ||
       (iVar10 = mobyutil::PointInsideComplexPoly
                           (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar5 + 0x1d0)]->points,
                            Splines[*(int *)((int)pvVar5 + 0x1d0)]->cnt), iVar10 != 0)) {
      moby->state = '\x02';
      if (moby->animationId != '\x04') {
        local_b8 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar7,4,0,(int)(animationSpeed * 20.5));
      }
      iVar18 = 0;
      pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
      iVar10 = pSVar6->cnt;
      pSVar16 = pSVar6;
      if (0 < iVar10 + -2) {
        do {
          dVar21 = (double)FUN_005e8548(pSVar16->points,pSVar16->points + 1);
          pSVar16->points[0].w = (float)dVar21;
          iVar10 = pSVar6->cnt;
          iVar18 = iVar18 + 1;
          pSVar16 = (Spline *)pSVar16->points;
        } while (iVar18 < iVar10 + -2);
      }
      lVar17 = uVar19 + 0x40;
      (moby->pos).x = pSVar6->points[0].x;
      (moby->pos).y = pSVar6->points[0].y;
      (moby->pos).z = pSVar6->points[0].z;
      (moby->pos).w = pSVar6->points[0].w;
      FUN_005e81f0(lVar17,pSVar6->points + iVar10 + -1,lVar7 + 0x10);
      FUN_005e84c0((double)(DAT_00843330 * mobyutil::g_FrameTime),lVar17,lVar17);
      dVar21 = (double)mobyutil::MB_computeLobVelocity
                                 ((double)(DAT_00843330 * mobyutil::g_FrameTime),
                                  -(double)(DAT_00843334 * DAT_0071f418),lVar7 + 0x10,
                                  pSVar6->points + pSVar6->cnt + -1,&DAT_00720000,pSVar6->cnt * 0x10
                                  ,0);
      *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
    }
    else {
      moby->collision = (ushort *)0x0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    }
  }
LAB_003a340c:
  iVar10 = *(int *)((int)pvVar5 + 0x1e0);
  if (((iVar10 != -1) && (sound::g_SoundChannels[iVar10].pMoby == moby)) &&
     (sound::g_SoundChannels[iVar10].state != '\0')) {
    sound::sound_Kill(iVar10);
  }
  *(undefined4 *)((int)pvVar5 + 0x1e0) = 0xffffffff;
  if ((1 < moby->state) && (moby->state != 0x40)) {
    fVar36 = DAT_0071f418 * 30.0 + *(float *)((int)pvVar5 + 0xe8);
    *(float *)((int)pvVar5 + 0xe8) = fVar36;
    dVar31 = 2.0;
    (moby->pos).z = (moby->pos).z - (fVar36 - 2.0);
    dVar21 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar7 + 0x10,0);
    fVar36 = (float)((double)(moby->pos).z - dVar31);
    (moby->pos).z = fVar36;
    if ((double)fVar36 < dVar21) {
      (moby->pos).z = (float)dVar21;
      *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
    }
    mobyutil::DamageSphereAtPos(uVar32,0x4044000000000000,0x3ff0000000000000,lVar7,lVar7 + 0x10);
  }
  return;
}



//==== 003a372c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1782_003a372c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1782_003a372c(void)

{
  DAT_008433a8 = 0x10000;
  return;
}



//==== 003a3750  ns=mobyupdate_unsorted  size=0x164
// sig: undefined UpdateMoby_a_lot_23(MobyInstance * moby)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

/* Moby 492
   Moby 724
   Moby 725
   Moby 766
   Moby 767
   Moby 1781
   Moby 1782 */

void mobyupdate_unsorted::UpdateMoby_a_lot_23(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = g_heroPosition.y - (moby->pos).y;
  fVar2 = g_heroPosition.x - (moby->pos).x;
  fVar3 = g_heroPosition.z - (moby->pos).z;
  if (((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 1.0) &&
      (mobyutil::g_FrameTime * 2.0 <
       SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4)
      )) && (moby->animationId != '\x01')) {
    mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 6.5));
  }
  if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId == '\x01')) {
    mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 6.5));
  }
  return;
}



//==== 003a38b4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1782_003a38b4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1782_003a38b4(void)

{
  DAT_00843418 = 0x10000;
  return;
}



//==== 003a38c8  ns=Global  size=0xdc
// sig: undefined FUN_003a38c8(void)
// callers(3): 00331598 mobyupdate_helpers::M294_00331598; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 0036e680 mobyupdate_unsorted::UpdateMoby_427
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_003a38c8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  f32 fVar1;
  short sVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar3 = mobyfunc::CreateMoby(GUN_01F3);
  if (pMVar3 != (MobyInstance *)0x0) {
    sVar2 = *(short *)(param_1 + 0x32);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = sVar2;
    pMVar3->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = 0.0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    (pMVar3->rotation).z = fVar1;
    pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar3->light = (int)uVar4;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 003a39a4  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_499(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 499 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_499(MobyInstance *moby)

{
  return moby;
}



//==== 003a39a8  ns=mobyupdate_helpers  size=0x238
// sig: undefined M499_003a39a8(void)
// callers(0): 
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M499_003a39a8(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  mobyutil::MB_randSphere
            ((double)(DAT_0084346c * mobyutil::g_FrameTime),
             (double)(DAT_0084346c * mobyutil::g_FrameTime),local_50);
  mobyutil::MB_randSphere
            ((double)(DAT_00843470 * mobyutil::g_FrameTime),
             (double)(DAT_00843470 * mobyutil::g_FrameTime),local_50);
  dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_00843454,DAT_00843458);
  uVar1 = fastfunc::FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_0084345c,DAT_00843460);
  uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_00843464,DAT_00843468);
  uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  partupd::SpawnPart_2(param_1 + 0x10,local_40,local_30,DAT_00843444,DAT_00843448,uVar1,uVar2,uVar3)
  ;
  return;
}



//==== 003a3c08  ns=mobyupdate_unsorted  size=0xc40
// sig: undefined UpdateMoby_50(MobyInstance * moby)
// callers(0): 
// callees(13): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 000fea60 mobyutil::MB_randSphere; 00105870 mobyutil::DamageSphereAtPos; 0010e030 mobyutil::MB_genericExplosion; 001206e8 partupd::SpawnPart_2; 0015d204 sound::sound_MobyPlay_oClass; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 50 */

void mobyupdate_unsorted::UpdateMoby_50(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  f32 fVar8;
  float fVar9;
  float *pfVar10;
  float fVar11;
  ulonglong *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar23;
  longlong lVar21;
  longlong lVar22;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  float *pfVar28;
  longlong lVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar22 = uVar16 - 0x220;
  puVar12 = (ulonglong *)lVar22;
  *puVar12 = uVar16;
  puVar12[0x46] = in_LR;
  puVar12[0x3e] = in_f26;
  puVar12[0x3f] = in_f27;
  puVar12[0x40] = in_f28;
  puVar12[0x41] = in_f29;
  puVar12[0x42] = in_f30;
  puVar12[0x43] = in_f31;
  puVar12[0x3c] = unaff_r30;
  puVar12[0x3d] = unaff_r31;
  pfVar10 = (float *)moby->pVar;
  puVar12[0x3b] = unaff_r29;
  fVar11 = pfVar10[0xd];
  puVar12[0x3a] = unaff_r28;
  puVar12[0x39] = unaff_r27;
  pfVar28 = pfVar10;
  if ((fVar11 == 0.0) &&
     (fVar11 = (moby->pos).y - GameCamera.posY, fVar1 = (moby->pos).x - GameCamera.posX,
     fVar4 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar11 * fVar11) < 15.0)) {
    pfVar10[0xd] = 1.4013e-45;
    sound::sound_MobyPlay_oClass(5,0,moby,0x54c);
    pfVar28 = (float *)moby->pVar;
  }
  fVar11 = DAT_010c925c;
  if (moby->state == '\0') {
    fVar1 = DAT_0084346c * mobyutil::g_FrameTime;
    *(float *)(puVar12 + 0x1e) = *pfVar28 * DAT_010c925c;
    *(float *)((int)puVar12 + 0xf4) = pfVar28[1] * fVar11;
    *(float *)(puVar12 + 0x1f) = pfVar28[2] * fVar11;
    *(float *)((int)puVar12 + 0xfc) = pfVar28[3];
    mobyutil::MB_randSphere((double)fVar1,(double)fVar1,uVar16 - 0x140);
    fVar1 = DAT_010c9260;
    *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) + *(float *)(puVar12 + 0x1c);
    *(float *)((int)puVar12 + 0xf4) =
         *(float *)((int)puVar12 + 0xf4) + *(float *)((int)puVar12 + 0xe4);
    *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) + *(float *)(puVar12 + 0x1d);
    fVar11 = DAT_00843470 * mobyutil::g_FrameTime;
    *(float *)(puVar12 + 0x20) = *pfVar28 * fVar1;
    *(float *)((int)puVar12 + 0x104) = pfVar28[1] * fVar1;
    *(float *)(puVar12 + 0x21) = pfVar28[2] * fVar1;
    *(float *)((int)puVar12 + 0x10c) = pfVar28[3];
    mobyutil::MB_randSphere((double)fVar11,(double)fVar11,uVar16 - 0x140);
    uVar14 = DAT_00843450;
    *(undefined4 *)((int)puVar12 + 0xfc) = DAT_0084344c;
    *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) + *(float *)(puVar12 + 0x1c);
    fVar11 = DAT_00843454;
    *(float *)((int)puVar12 + 0x104) =
         *(float *)((int)puVar12 + 0x104) + *(float *)((int)puVar12 + 0xe4);
    *(undefined4 *)((int)puVar12 + 0x10c) = uVar14;
    fVar1 = DAT_00843458;
    *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) + *(float *)(puVar12 + 0x1d);
    dVar30 = (double)mobyutil::MB_randRangeFloat(fVar11,fVar1);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    dVar30 = (double)mobyutil::MB_randRangeFloat(DAT_0084345c,DAT_00843460);
    uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    dVar30 = (double)mobyutil::MB_randRangeFloat(DAT_00843464,DAT_00843468);
    uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    uVar15 = DAT_00843448;
    uVar14 = DAT_00843444;
    lVar27 = lVar17 + 0x10;
    puVar12[0xe] = (longlong)DAT_00843478;
    partupd::SpawnPart_2(lVar27,uVar16 - 0x130,uVar16 - 0x120,uVar14,uVar15,uVar18,uVar19,uVar20);
    fVar4 = pfVar10[4] - (moby->pos).x;
    fVar11 = pfVar10[6];
    fVar5 = pfVar10[5] - (moby->pos).y;
    *(float *)((int)puVar12 + 0x134) = fVar4;
    *(float *)(puVar12 + 0x27) = fVar5;
    fVar11 = fVar11 - (moby->pos).z;
    dVar39 = (double)fVar11;
    *(float *)((int)puVar12 + 0x13c) = ABS(fVar4) - ABS(fVar5);
    dVar30 = 0.0;
    uVar25 = (ulonglong)(*(uint *)((int)puVar12 + 0x134) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x13c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x27) >> 0x1d) & 4;
    fVar1 = pfVar10[10];
    fVar6 = ABS(*(float *)((int)puVar12 + 0x134));
    if (*(float *)((int)puVar12 + 0x13c) - 0.0 < 0.0) {
      fVar6 = ABS(fVar5);
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
    fVar2 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    fVar3 = ABS(*(float *)(puVar12 + 0x27));
    if (*(float *)((int)puVar12 + 0x13c) - 0.0 < 0.0) {
      fVar3 = ABS(fVar4);
    }
    dVar38 = 0.7853981852531433;
    dVar32 = dVar30;
    if (0.0 < fVar6) {
      lVar21 = uVar16 - 0x210;
      lVar26 = uVar16 - 0x70;
      lVar24 = uVar16 - 0x80;
      lVar29 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0x1ac) = fVar6;
      *(float *)((int)puVar12 + 0x1a4) = fVar6;
      *(float *)(puVar12 + 0x35) = fVar6;
      *(float *)(puVar12 + 0x34) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x1a4) = *(float *)((int)puVar12 + 0x1a4) * fVar3;
      *(float *)(puVar12 + 0x35) = *(float *)(puVar12 + 0x35) * fVar6;
      *(float *)((int)puVar12 + 0x1ac) = *(float *)((int)puVar12 + 0x1ac) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar21 + 0x1a0) = *(float *)((int)lVar21 + 400) * fVar6 * fVar6;
        iVar23 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar16 - 0x80;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar24 = lVar26;
      do {
        fVar6 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0x1a0) = *(float *)((int)lVar21 + 0x1a0) * fVar6;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar24 = 2;
      lVar21 = lVar22;
      do {
        iVar23 = (int)lVar21;
        iVar13 = (int)lVar26;
        lVar21 = lVar21 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar23 + 0x1a0)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar9 + fVar2);
    }
    *(float *)((int)puVar12 + 300) = fVar11;
    dVar37 = (double)(fVar4 * fVar4 + fVar5 * fVar5);
    dVar35 = ABS((double)(float)SQRT(dVar37));
    *(float *)(puVar12 + 0x25) = (float)SQRT(dVar37);
    *(float *)(puVar12 + 0x26) = (float)(dVar35 - ABS(dVar39));
    uVar25 = (ulonglong)(*(uint *)(puVar12 + 0x25) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x26) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 300) >> 0x1d) & 4;
    dVar31 = ABS((double)*(float *)(puVar12 + 0x25));
    if (*(float *)(puVar12 + 0x26) - 0.0 < 0.0) {
      dVar31 = ABS(dVar39);
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
    dVar33 = ABS((double)*(float *)((int)puVar12 + 300));
    if (*(float *)(puVar12 + 0x26) - 0.0 < 0.0) {
      dVar33 = dVar35;
    }
    fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    dVar35 = dVar30;
    if (0.0 < dVar31) {
      lVar21 = uVar16 - 0x210;
      lVar26 = uVar16 - 0x90;
      lVar24 = uVar16 - 0xa0;
      lVar29 = 2;
      fVar5 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar12 + 0x18c) = fVar5;
      *(float *)((int)puVar12 + 0x184) = fVar5;
      *(float *)(puVar12 + 0x31) = fVar5;
      *(float *)(puVar12 + 0x30) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0x184) = *(float *)((int)puVar12 + 0x184) * fVar6;
      *(float *)(puVar12 + 0x31) = *(float *)(puVar12 + 0x31) * fVar5;
      *(float *)((int)puVar12 + 0x18c) = *(float *)((int)puVar12 + 0x18c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x180) = *(float *)((int)lVar21 + 0x170) * fVar5 * fVar5;
        iVar23 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar5 * fVar5;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar16 - 0xa0;
      pfVar28 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar24 = lVar26;
      do {
        fVar5 = *pfVar28;
        fVar6 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar21 + 0x180) = *(float *)((int)lVar21 + 0x180) * fVar5;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar24 = 2;
      lVar21 = lVar22;
      dVar31 = dVar30;
      do {
        iVar23 = (int)lVar21;
        iVar13 = (int)lVar26;
        lVar21 = lVar21 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x180)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar35 = (double)((float)(dVar31 + 0.7853981852531433) * fVar11 + fVar4);
    }
    dVar31 = (double)fastfunc::FastWrapRot((float)dVar32,fVar1);
    dVar35 = (double)fastfunc::FastWrapRot((float)dVar35,pfVar10[0xb]);
    dVar32 = 1.2217304706573486;
    if ((dVar35 <= 1.2217304706573486) && (dVar32 = dVar35, dVar35 < -1.2217304706573486)) {
      dVar32 = -1.2217304706573486;
    }
    mobyutil::MB_SphericalToVector(pfVar10[9],(float)dVar31,(float)dVar32,(float *)(puVar12 + 0x18))
    ;
    iVar23 = fastfunc::FastDecTimerS32(pfVar10 + 8);
    if (iVar23 == 0) {
      dVar32 = (double)fastfunc::FastIntToDouble(pfVar10[8]);
      dVar31 = (double)fastfunc::FastIntToDouble(pfVar10[0xc]);
      fVar11 = (float)(dVar32 / dVar31);
      fVar1 = *pfVar10;
      fVar4 = pfVar10[1];
      fVar5 = pfVar10[2];
      fVar6 = (moby->pos).x;
      fVar2 = (moby->pos).y;
      fVar9 = (moby->pos).z;
      *(f32 *)((int)puVar12 + 0xdc) = (moby->pos).w;
      fVar3 = fVar11 * (fVar1 - *(float *)(puVar12 + 0x18)) + *(float *)(puVar12 + 0x18);
      dVar31 = (double)fVar3;
      fVar1 = fVar11 * (fVar4 - *(float *)((int)puVar12 + 0xc4)) + *(float *)((int)puVar12 + 0xc4);
      dVar35 = (double)fVar1;
      fVar11 = fVar11 * (fVar5 - *(float *)(puVar12 + 0x19)) + *(float *)(puVar12 + 0x19);
      dVar33 = (double)fVar11;
      *(float *)((int)puVar12 + 0x11c) = fVar3;
      *(float *)(puVar12 + 0x24) = fVar1;
      *(float *)(puVar12 + 0x1a) = (float)((double)fVar6 + dVar31);
      *(float *)((int)puVar12 + 0x124) = (float)(ABS(dVar31) - ABS(dVar35));
      *(float *)((int)puVar12 + 0xd4) = (float)((double)fVar2 + dVar35);
      *(float *)(puVar12 + 0x1b) = (float)((double)fVar9 + dVar33);
      uVar25 = (ulonglong)(*(uint *)((int)puVar12 + 0x11c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1d) & 4;
      dVar32 = ABS((double)*(float *)((int)puVar12 + 0x11c));
      if ((double)*(float *)((int)puVar12 + 0x124) - dVar30 < 0.0) {
        dVar32 = ABS(dVar35);
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      dVar36 = ABS((double)*(float *)(puVar12 + 0x24));
      if ((double)*(float *)((int)puVar12 + 0x124) - dVar30 < 0.0) {
        dVar36 = ABS(dVar31);
      }
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar34 = dVar30;
      if (dVar30 < dVar32) {
        lVar21 = uVar16 - 0x210;
        lVar24 = uVar16 - 0xc0;
        lVar26 = uVar16 - 0xb0;
        lVar29 = 2;
        fVar5 = (float)(dVar36 - dVar32) / (float)(dVar36 + dVar32);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x16c) = fVar5;
        *(float *)((int)puVar12 + 0x164) = fVar5;
        *(float *)(puVar12 + 0x2d) = fVar5;
        *(float *)(puVar12 + 0x2c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0x164) = *(float *)((int)puVar12 + 0x164) * fVar6;
        *(float *)(puVar12 + 0x2d) = *(float *)(puVar12 + 0x2d) * fVar5;
        *(float *)((int)puVar12 + 0x16c) = *(float *)((int)puVar12 + 0x16c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar21 + 0x160) = *(float *)((int)lVar21 + 0x150) * fVar5 * fVar5;
          iVar23 = (int)lVar24;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar26 = uVar16 - 0xc0;
        pfVar28 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar24 = lVar26;
        do {
          fVar5 = *pfVar28;
          fVar6 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar21 + 0x160) = *(float *)((int)lVar21 + 0x160) * fVar5;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar24 = 2;
        lVar21 = lVar22;
        dVar32 = dVar30;
        do {
          iVar23 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar13 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar23 + 0x160)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar34 = (double)((float)(dVar32 + dVar38) * fVar1 + fVar4);
      }
      *(float *)((int)puVar12 + 0x114) = fVar11;
      (moby->rotation).z = (float)dVar34;
      dVar33 = ABS(dVar33);
      fVar11 = SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar35 * dVar35)));
      dVar31 = ABS((double)fVar11);
      *(float *)(puVar12 + 0x22) = fVar11;
      *(float *)(puVar12 + 0x23) = (float)(dVar31 - dVar33);
      uVar25 = (ulonglong)(*(uint *)(puVar12 + 0x22) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x23) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x114) >> 0x1d) & 4;
      dVar32 = ABS((double)*(float *)(puVar12 + 0x22));
      if ((double)*(float *)(puVar12 + 0x23) - dVar30 < 0.0) {
        dVar32 = dVar33;
      }
      fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      dVar35 = ABS((double)*(float *)((int)puVar12 + 0x114));
      if ((double)*(float *)(puVar12 + 0x23) - dVar30 < 0.0) {
        dVar35 = dVar31;
      }
      fVar1 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      if (dVar30 < dVar32) {
        lVar21 = uVar16 - 0x210;
        lVar24 = uVar16 - 0xe0;
        lVar26 = uVar16 - 0xd0;
        lVar29 = 2;
        fVar4 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x14c) = fVar4;
        *(float *)((int)puVar12 + 0x144) = fVar4;
        *(float *)(puVar12 + 0x29) = fVar4;
        *(float *)(puVar12 + 0x28) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar12 + 0x144) = *(float *)((int)puVar12 + 0x144) * fVar5;
        *(float *)(puVar12 + 0x29) = *(float *)(puVar12 + 0x29) * fVar4;
        *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar21 + 0x140) = *(float *)((int)lVar21 + 0x130) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar26 = uVar16 - 0xe0;
        pfVar28 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar28;
          fVar5 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar21 + 0x140) = *(float *)((int)lVar21 + 0x140) * fVar4;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar21 = 2;
        do {
          iVar23 = (int)lVar22;
          iVar13 = (int)lVar26;
          lVar22 = lVar22 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0x140)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar30 = (double)((float)(dVar30 + dVar38) * fVar11 + fVar1);
      }
      dVar32 = -dVar30;
    }
    else {
      fVar11 = (moby->pos).x;
      fVar1 = *(float *)(puVar12 + 0x18);
      fVar4 = (moby->pos).y;
      fVar5 = *(float *)((int)puVar12 + 0xc4);
      fVar6 = (moby->pos).z;
      fVar2 = *(float *)(puVar12 + 0x19);
      fVar7 = (moby->pos).w;
      (moby->rotation).z = (float)dVar31;
      *(f32 *)((int)puVar12 + 0xdc) = fVar7;
      *(float *)(puVar12 + 0x1a) = fVar11 + fVar1;
      *(float *)((int)puVar12 + 0xd4) = fVar4 + fVar5;
      *(float *)(puVar12 + 0x1b) = fVar6 + fVar2;
    }
    (moby->rotation).y = (float)dVar32;
    iVar23 = collproc::CollLine(lVar27,uVar16 - 0x150,0,lVar17,0);
    if ((iVar23 != 0) || (SQRT((float)(dVar39 * dVar39 + dVar37)) < pfVar10[9])) {
      uVar18 = 0x3ff0000000000000;
      uVar19 = 0x4000000000000000;
      if (g_heroType == '\x02') {
        puVar12[0xe] = 0;
        mobyutil::DamageSphereAtPos
                  (0x4000000000000000,0x4000000000000000,0x3ff0000000000000,lVar17,lVar27,0,3);
      }
      sound::sound_MobyPlay_oClass(4,0,moby,0x54c);
      puVar12[0x12] = 0xffffffffffffffff;
      puVar12[0x14] = 1;
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0x4010000000000000,0x4010000000000000,0x4010000000000000,uVar19,0x4022000000000000,
                 uVar18,0x402e000000000000,lVar17,pfVar10,lVar27,1,0xffffffffffffffff,10,3,0x10);
      mobyfunc::DeleteMoby(moby);
    }
    else {
      fVar7 = *(f32 *)((int)puVar12 + 0xd4);
      (moby->pos).x = *(f32 *)(puVar12 + 0x1a);
      fVar8 = *(f32 *)(puVar12 + 0x1b);
      (moby->pos).y = fVar7;
      fVar7 = *(f32 *)((int)puVar12 + 0xdc);
      (moby->pos).z = fVar8;
      (moby->pos).w = fVar7;
    }
  }
  return;
}



//==== 003a4858  ns=Global  size=0x4f0
// sig: undefined FUN_003a4858(void)
// callers(1): 00258c50 mobyupdate_unsorted::UpdateMoby_1356
// callees(2): 000efa28 mobyfunc::CreateMoby; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * FUN_003a4858(int param_1,float *param_2,f32 *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  MobyInstance *pMVar11;
  undefined8 uVar10;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *pfVar16;
  longlong lVar15;
  longlong lVar17;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar13 = uVar9 - 0x110;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar9;
  puVar6[0x24] = in_LR;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  puVar6[0x1f] = unaff_r31;
  puVar6[0x1b] = unaff_r27;
  puVar6[0x1d] = unaff_r29;
  puVar6[0x1c] = unaff_r28;
  puVar6[0x1e] = unaff_r30;
  puVar6[0x1a] = unaff_r26;
  puVar6[0x19] = unaff_r25;
  puVar6[0x18] = unaff_r24;
  pMVar11 = mobyfunc::CreateMoby(ROCKET_0032);
  if (pMVar11 != (MobyInstance *)0x0) {
    pMVar11->updateDistance = -1;
    pMVar11->drawDistance = 0xff;
    pMVar11->enabled = '\x01';
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    pMVar11->state = '\0';
    pMVar11->color = (int)((ulonglong)uVar10 >> 0x20);
    pMVar11->light = (int)uVar10;
    pfVar16 = (float *)pMVar11->pVar;
    pMVar11->scale = pMVar11->scale * 3.0;
    (pMVar11->pos).x = *param_3;
    (pMVar11->pos).y = param_3[1];
    (pMVar11->pos).z = param_3[2];
    (pMVar11->pos).w = param_3[3];
    *pfVar16 = *param_2;
    pfVar16[1] = param_2[1];
    pfVar16[2] = param_2[2];
    pfVar16[3] = param_2[3];
    pfVar16[4] = *param_4;
    pfVar16[5] = param_4[1];
    pfVar16[6] = param_4[2];
    fVar1 = param_4[3];
    pfVar16[0xc] = param_5;
    pfVar16[7] = fVar1;
    pfVar16[8] = param_5;
    pfVar16[9] = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
    dVar19 = (double)mobyutil::MB_randRangeFloat(-DAT_0084343c,DAT_0084343c);
    dVar21 = 0.01745329238474369;
    pfVar16[10] = (float)(dVar19 * 0.01745329238474369);
    dVar22 = 0.0;
    dVar19 = (double)mobyutil::MB_randRangeFloat(0.0,DAT_00843440);
    pfVar16[0xd] = 0.0;
    pfVar16[0xb] = (float)(dVar19 * dVar21);
    fVar1 = *param_2;
    fVar5 = param_2[1];
    dVar20 = ABS((double)*param_2);
    dVar19 = ABS((double)param_2[1]);
    *(float *)(puVar6 + 0xf) = (float)(dVar20 - dVar19);
    MVar4 = pMVar11->modeBits;
    uVar14 = (ulonglong)((uint)fVar1 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    dVar21 = dVar20;
    if ((double)*(float *)(puVar6 + 0xf) - dVar22 < 0.0) {
      dVar21 = dVar19;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    if ((double)*(float *)(puVar6 + 0xf) - dVar22 < 0.0) {
      dVar19 = dVar20;
    }
    fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    dVar20 = dVar22;
    if (dVar22 < dVar21) {
      lVar12 = uVar9 - 0x100;
      lVar15 = uVar9 - 0x74;
      lVar17 = uVar9 - 100;
      lVar18 = 2;
      fVar2 = (float)(dVar19 - dVar21) / (float)(dVar19 + dVar21);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x15) = fVar2;
      *(float *)(puVar6 + 0x14) = fVar2;
      *(float *)((int)puVar6 + 0xa4) = fVar2;
      *(float *)((int)puVar6 + 0x9c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar3;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar2;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x8c) * fVar2 * fVar2;
        iVar7 = (int)lVar15;
        lVar12 = lVar12 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar17 = uVar9 - 0x74;
      pfVar16 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar12 = lVar13;
      lVar15 = lVar17;
      do {
        fVar2 = *pfVar16;
        fVar3 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar2;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar15 = 2;
      lVar12 = lVar13;
      dVar19 = dVar22;
      do {
        iVar7 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar8 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0x9c)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar20 = (double)((float)(dVar19 + 0.7853981852531433) * fVar1 + fVar5);
    }
    (pMVar11->rotation).z = (float)dVar20;
    fVar1 = param_2[2];
    dVar19 = ABS((double)param_2[2]);
    fVar5 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    dVar20 = ABS((double)fVar5);
    *(float *)(puVar6 + 0xe) = fVar5;
    *(float *)((int)puVar6 + 0x74) = (float)(dVar20 - dVar19);
    uVar14 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar1 >> 0x1d) & 4;
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    dVar21 = ABS((double)*(float *)(puVar6 + 0xe));
    if ((double)*(float *)((int)puVar6 + 0x74) - dVar22 < 0.0) {
      dVar21 = dVar19;
    }
    fVar5 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar6 + 0x74) - dVar22 < 0.0) {
      dVar19 = dVar20;
    }
    if (dVar22 < dVar21) {
      lVar12 = uVar9 - 0x100;
      lVar15 = uVar9 - 0x94;
      lVar17 = uVar9 - 0x84;
      lVar18 = 2;
      fVar2 = (float)(dVar19 - dVar21) / (float)(dVar19 + dVar21);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x11) = fVar2;
      *(float *)(puVar6 + 0x10) = fVar2;
      *(float *)((int)puVar6 + 0x84) = fVar2;
      *(float *)((int)puVar6 + 0x7c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar3;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar2;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x6c) * fVar2 * fVar2;
        iVar7 = (int)lVar15;
        lVar12 = lVar12 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar17 = uVar9 - 0x94;
      pfVar16 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar12 = lVar13;
      lVar15 = lVar17;
      do {
        fVar2 = *pfVar16;
        fVar3 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar2;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        iVar8 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar7 + 0x7c)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar1 + fVar5);
    }
    pMVar11->modeBits = MVar4 | DISABLED;
    pMVar11->enabled = '\0';
    (pMVar11->rotation).y = (float)-dVar22;
  }
  return pMVar11;
}



//==== 003a4d48  ns=mobyupdate_helpers  size=0x14
// sig: undefined M511_003a4d48(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M511_003a4d48(void)

{
  DAT_008434c8 = 0x10000;
  return;
}



//==== 003a4da0  ns=mobyupdate_helpers  size=0x63c
// sig: undefined M511_003a4da0(void)
// callers(2): 003a6d40 mobyupdate_helpers::M511_003a6d40; 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate
// callees(8): 000fc668 mobyutil::MB_DropAmmo; 000fc948 mobyutil::MB_SplineIntersect; 000fcb40 mobyutil::MB_SolveQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 001122e0 mobyutil::MB_PlatformLocalToWorld; 002ea758 FUN_002ea758

void mobyupdate_helpers::M511_003a4da0(int param_1)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  double dVar32;
  double dVar33;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 local_100 [16];
  float local_f0;
  float local_ec;
  undefined4 local_e0;
  float local_dc;
  
  iVar5 = *(int *)(param_1 + 0x78);
  fVar3 = *(float *)(param_1 + 0x10);
  bVar1 = *(short *)(param_1 + 0xa6) != 0x1f5;
  fVar4 = *(float *)(param_1 + 0x14);
  if ((bVar1) && (*(short *)(iVar5 + 0xc6) == 0)) {
    iVar8 = *(int *)(iVar5 + 0xf0);
    if (iVar8 != 0) {
      if (param_1 != 0) {
        *(undefined2 *)(param_1 + 0x36) = 0x7f80;
        iVar8 = *(int *)(iVar5 + 0xf0);
      }
      mobyutil::MB_PlatformLocalToWorld
                (param_1,iVar8,param_1 + 0x10,param_1 + 0x40,auStack_120,auStack_110);
      fVar3 = *(float *)(param_1 + 0x10);
      fVar4 = *(float *)(param_1 + 0x14);
    }
    uVar7 = g_boltMiningActive;
    if (((Level == Quartu) && (ABS(fVar3 - 166.0) < 6.0)) && (ABS(fVar4 - 193.0) < 6.0)) {
      g_boltMiningActive = 0;
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0x100,0xffffffffffffffff);
      g_boltMiningActive = uVar7;
      return;
    }
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0x100,*(undefined4 *)(iVar5 + 0xc0));
    return;
  }
  if (!bVar1) goto LAB_003a5344;
  bVar2 = *(byte *)(iVar5 + 0xcb);
  if (bVar2 < 6) {
    if (bVar2 < 3) {
      if (bVar2 == 0) {
LAB_003a5020:
        local_e0 = 0xffffffff;
      }
      else if (bVar2 < 2) {
        local_e0 = 10;
      }
      else {
        local_e0 = 0x10;
      }
    }
    else if (bVar2 < 4) {
      local_e0 = 0xf;
    }
    else if (bVar2 < 5) {
      local_e0 = 0x14;
    }
    else {
      local_e0 = 0x11;
    }
  }
  else if (bVar2 == 0xb) {
    local_e0 = 0x17;
  }
  else if (bVar2 == 10) {
    local_e0 = 0x13;
  }
  else if (bVar2 == 9) {
    local_e0 = 0x19;
  }
  else if (bVar2 == 8) {
    local_e0 = 0xd;
  }
  else if (bVar2 == 7) {
    local_e0 = 0x18;
  }
  else {
    if (bVar2 != 6) goto LAB_003a5020;
    local_e0 = 0xb;
  }
  iVar8 = mobyutil::MB_DropAmmo(param_1,&local_e0);
  iVar11 = 0;
  if (0 < iVar8) {
    dVar22 = 0.0;
    dVar23 = 1.570796251296997;
    dVar24 = 3.141592502593994;
    dVar25 = -3.141592502593994;
    dVar26 = -0.16666656732559204;
    dVar27 = 0.008333025500178337;
    dVar28 = -0.0001980741071747616;
    dVar29 = 2.601886990305502e-06;
    dVar30 = 10.800000190734863;
    dVar31 = -0.5;
    dVar32 = 1.0;
    dVar33 = 0.25;
    do {
      iVar9 = FUN_002ea758(param_1 + 0x10,local_e0,0xffffffffffffffff,0);
      if (iVar9 == 0) break;
      iVar6 = *(int *)(iVar9 + 0x78);
      *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(iVar5 + 0xc4);
      dVar12 = (double)mobyutil::MB_randRot();
      dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar22,DAT_008434f0);
      fVar4 = DAT_008434f8;
      fVar3 = DAT_008434f4;
      dVar15 = (double)(float)(dVar12 + dVar23);
      dVar14 = (double)(float)(dVar24 - dVar12);
      if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
        dVar14 = dVar12;
      }
      dVar16 = (double)(float)(dVar24 - dVar15);
      if (dVar15 - (double)(float)(dVar24 - dVar15) < 0.0) {
        dVar16 = dVar15;
      }
      dVar20 = (double)(float)(dVar25 - dVar12);
      if ((double)(float)(dVar25 - dVar12) - dVar14 < 0.0) {
        dVar20 = dVar14;
      }
      dVar12 = (double)mobyutil::g_FrameTime;
      dVar14 = (double)(float)(dVar25 - dVar15);
      if ((double)(float)(dVar25 - dVar15) - dVar16 < 0.0) {
        dVar14 = dVar16;
      }
      dVar16 = (double)(float)(dVar20 * dVar20);
      dVar15 = (double)(float)(dVar14 * dVar14);
      dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar20));
      dVar19 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar14));
      dVar17 = (double)(float)(dVar16 * dVar18);
      *(undefined4 *)(iVar6 + 0x18) = 0;
      dVar21 = (double)(float)(dVar15 * dVar19);
      *(float *)(iVar6 + 0x14) =
           (float)((double)(float)(dVar16 * dVar17) * dVar29 +
                  (double)(float)(dVar17 * dVar28 +
                                 (double)(float)(dVar18 * dVar27 +
                                                (double)(float)((double)(float)(dVar16 * dVar20) *
                                                                dVar26 + dVar20)))) *
           (float)(dVar13 * dVar12);
      *(float *)(iVar6 + 0x10) =
           (float)((double)(float)(dVar15 * dVar21) * dVar29 +
                  (double)(float)(dVar21 * dVar28 +
                                 (double)(float)(dVar19 * dVar27 +
                                                (double)(float)((double)(float)(dVar15 * dVar14) *
                                                                dVar26 + dVar14)))) *
           (float)(dVar13 * dVar12);
      dVar14 = (double)mobyutil::MB_randRangeFloat(fVar3,fVar4);
      dVar12 = (double)mobyutil::g_FrameTime;
      *(float *)(iVar6 + 0x18) = (float)(dVar14 * dVar12);
      if (-1 < *(int *)(iVar5 + 0xc0)) {
        dVar13 = (double)(float)((double)(float)((double)DAT_0071f418 * dVar30) * dVar31);
        iVar10 = mobyutil::MB_SolveQuad
                           (dVar13,(double)(float)((double)(float)(dVar14 * dVar12) - dVar13),
                            (double)(*(float *)(iVar9 + 0x18) -
                                    Splines[*(int *)(iVar5 + 0xc0)]->points[0].z));
        if (((double)(longlong)iVar10 < dVar32) ||
           (fVar3 = local_dc,
           (int)local_dc < 1 ||
           0x42efffff <
           (int)(((uint)((int)local_dc >> 0x1f) >> 1 ^ (uint)local_dc) - ((int)local_dc >> 0x1f))))
        {
          fVar3 = 120.0;
        }
        dVar17 = (double)fVar3;
        mobyutil::MB_SplineIntersect
                  (*(undefined4 *)(iVar5 + 0xc0),param_1 + 0x10,local_100,&local_f0);
        dVar12 = (double)(local_f0 - *(float *)(iVar9 + 0x10));
        dVar13 = (double)(local_ec - *(float *)(iVar9 + 0x14));
        dVar15 = (double)SQRT((float)(dVar12 * dVar12 + (double)(float)(dVar13 * dVar13)));
        dVar20 = (double)(float)(dVar13 * (double)(float)(dVar33 / dVar15));
        dVar16 = (double)(float)(dVar12 * (double)(float)(dVar33 / dVar15));
        dVar14 = dVar22;
        if (dVar22 - dVar15 < 0.0) {
          dVar14 = dVar20;
        }
        dVar18 = dVar22;
        if (dVar22 - dVar15 < 0.0) {
          dVar18 = dVar16;
        }
        if (dVar15 - dVar22 < 0.0) {
          dVar14 = dVar20;
        }
        if (dVar15 - dVar22 < 0.0) {
          dVar18 = dVar16;
        }
        *(float *)(iVar6 + 0x10) = (float)(dVar12 - dVar18) * (float)(dVar32 / dVar17);
        *(float *)(iVar6 + 0x14) = (float)(dVar13 - dVar14) * (float)(dVar32 / dVar17);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar8);
  }
LAB_003a5344:
  if (*(short *)(param_1 + 0xb4) != 0) {
    *(undefined2 *)(param_1 + 0xb4) = 0;
  }
  mobyutil::MB_SpawnBoltsFromCrate(param_1,0x100,0xffffffffffffffff);
  return;
}



//==== 003a5468  ns=mobyupdate_helpers  size=0xf14
// sig: undefined M511_003a5468(void)
// callers(2): 003a6d40 mobyupdate_helpers::M511_003a6d40; 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate
// callees(18): 000f31a8 mobyfunc::UpdateMobyTransform; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 0010af88 mobyutil::MB_isCrate; 00123390 partupd::SpawnPart_11; 001246b8 partupd::SpawnPart_13; 0015d12c sound::PlayMobySound; 0015d204 sound::sound_MobyPlay_oClass; 001d4d88 FUN_001d4d88; 0028cce0 mobyupdate_helpers::M1488_0028cce0; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502648 fastfunc::FastAddRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M511_003a5468(undefined8 param_1,char param_2)

{
  bool bVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MOBY_OCLASSES MVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  undefined1 uVar14;
  ulonglong *puVar15;
  MobyInstance *pMoby;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar25;
  ulonglong uVar19;
  longlong lVar20;
  int iVar22;
  MobyInstance *pMVar23;
  int iVar24;
  longlong lVar21;
  longlong lVar26;
  int iVar28;
  longlong lVar27;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  f32 *pfVar29;
  ulonglong unaff_r21;
  float *pfVar30;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar31;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f22;
  double dVar39;
  ulonglong in_f23;
  double dVar40;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  undefined8 uVar41;
  ulonglong in_f28;
  undefined8 uVar42;
  ulonglong in_f29;
  undefined8 uVar43;
  double dVar44;
  ulonglong in_f30;
  undefined8 uVar45;
  double dVar46;
  ulonglong in_f31;
  undefined8 uVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x280;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar18;
  puVar15[0x52] = in_LR;
  puVar15[0x46] = in_f22;
  puVar15[0x47] = in_f23;
  puVar15[0x48] = in_f24;
  puVar15[0x49] = in_f25;
  puVar15[0x4a] = in_f26;
  puVar15[0x4b] = in_f27;
  puVar15[0x4c] = in_f28;
  puVar15[0x4d] = in_f29;
  puVar15[0x4e] = in_f30;
  puVar15[0x4f] = in_f31;
  puVar15[0x45] = unaff_r31;
  puVar15[0x44] = unaff_r30;
  puVar15[0x42] = unaff_r28;
  iVar24 = worldUpdateTime;
  puVar15[0x43] = unaff_r29;
  iVar28 = DAT_010c9264;
  pMoby = (MobyInstance *)param_1;
  pvVar10 = pMoby->pVar;
  puVar15[0x3c] = unaff_r22;
  iVar28 = iVar24 - iVar28;
  puVar15[0x41] = unaff_r27;
  puVar15[0x40] = unaff_r26;
  puVar15[0x3f] = unaff_r25;
  puVar15[0x3e] = unaff_r24;
  puVar15[0x3d] = unaff_r23;
  puVar15[0x3b] = unaff_r21;
  puVar15[0x3a] = unaff_r20;
  puVar15[0x39] = unaff_r19;
  if (1 < iVar28 + (iVar28 >> 0x1f & iVar28 * -2)) {
    if (pMoby->oClass == (GRAB_HELICOPTER|BOLT_CIRCLENUT|CLANK_000A)) {
      sound::sound_MobyPlay_oClass(0,0,pMoby,500);
    }
    else {
      sound::PlayMobySound(0,0,pMoby);
    }
    DAT_010c9264 = worldUpdateTime;
    iVar24 = worldUpdateTime;
  }
  iVar28 = iVar24 - DAT_010c9268;
  bVar1 = iVar28 + (iVar28 >> 0x1f & iVar28 * -2) < 2;
  if (!bVar1) {
    DAT_010c9268 = iVar24;
  }
  if (*(int *)((int)pvVar10 + 0xa0) != 0) {
    *(undefined4 *)(*(int *)(*(int *)((int)pvVar10 + 0xa0) + 0x78) + 0xa4) =
         *(undefined4 *)((int)pvVar10 + 0xa4);
    iVar24 = *(int *)(*(int *)((int)pvVar10 + 0xa0) + 0x78);
    *(uint *)(iVar24 + 0xac) = *(uint *)(iVar24 + 0xac) | 4;
  }
  if (*(int *)((int)pvVar10 + 0xa4) != 0) {
    bVar25 = mobyutil::MB_isCrate
                       (*(undefined4 *)(*(int *)(*(int *)((int)pvVar10 + 0xa4) + 0x78) + 0xa0));
    trapWord(4,(longlong)bVar25,0);
    *(undefined4 *)(*(int *)(*(int *)((int)pvVar10 + 0xa4) + 0x78) + 0xa0) =
         *(undefined4 *)((int)pvVar10 + 0xa0);
    iVar24 = *(int *)(*(int *)((int)pvVar10 + 0xa4) + 0x78);
    *(uint *)(iVar24 + 0xac) = *(uint *)(iVar24 + 0xac) | 4;
  }
  fVar2 = (pMoby->pos).y;
  *(f32 *)(puVar15 + 0x10) = (pMoby->pos).x;
  fVar3 = (pMoby->pos).w;
  *(f32 *)((int)puVar15 + 0x84) = fVar2;
  *(f32 *)((int)puVar15 + 0x8c) = fVar3;
  uVar47 = 0x3fd3333340000000;
  *(float *)(puVar15 + 0x11) = (pMoby->pos).z + 0.3;
  uVar45 = 0x3ff028f5c0000000;
  uVar43 = 0x3fa99999a0000000;
  uVar42 = 0x40e86a0000000000;
  partupd::SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff1333340000000,0x3fa99999a0000000,
             0x40e86a0000000000,uVar18 - 0x200);
  iVar24 = 0;
  uVar41 = 0x3ff11eb860000000;
  do {
    partupd::SpawnPart_13(uVar47,uVar45,uVar41,uVar43,uVar42,uVar18 - 0x200);
    iVar24 = iVar24 + 1;
  } while (iVar24 < 5);
  MVar9 = pMoby->oClass;
  if ((short)MVar9 < 0x1f8) {
    if (500 < (short)MVar9) {
      if ((short)MVar9 < 0x1f6) {
        lVar31 = 0x15c;
      }
      else if ((short)MVar9 < 0x1f7) {
        lVar31 = 0x162;
      }
      else {
        lVar31 = 0x15f;
      }
      goto LAB_003a5778;
    }
    if ((short)MVar9 < 500) {
LAB_003a5774:
      lVar31 = 0x95;
      goto LAB_003a5778;
    }
  }
  else {
    if ((short)MVar9 < 0x1fb) {
      if ((short)MVar9 < 0x1f9) {
        lVar31 = 0x168;
      }
      else if ((short)MVar9 < 0x1fa) {
        lVar31 = 0x16b;
      }
      else {
        lVar31 = 0x16e;
      }
      goto LAB_003a5778;
    }
    if ((short)MVar9 < 0x1ff) {
      lVar31 = 0x171;
      goto LAB_003a5778;
    }
    if (0x1ff < (short)MVar9) goto LAB_003a5774;
  }
  lVar31 = 0x165;
LAB_003a5778:
  if (numSpawnableMobys < 0xc9) {
    if (numSpawnableMobys < 0x97) {
      if (numSpawnableMobys < 0x65) {
        if (numSpawnableMobys < 0x33) {
          iVar28 = 1;
          iVar24 = 0;
        }
        else {
          iVar28 = 1;
          iVar24 = 0;
        }
      }
      else {
        iVar28 = 2;
        iVar24 = 1;
      }
    }
    else {
      iVar28 = 2;
      iVar24 = 2;
    }
  }
  else {
    iVar28 = 4;
    iVar24 = 4;
  }
  fVar5 = GameCamera.posX - (pMoby->pos).x;
  fVar4 = GameCamera.posY - (pMoby->pos).y;
  fVar6 = ABS(fVar5);
  fVar8 = ABS(fVar4);
  *(float *)(puVar15 + 0x2a) = fVar5;
  *(float *)((int)puVar15 + 0x154) = fVar4;
  *(float *)(puVar15 + 0x2b) = fVar6 - fVar8;
  dVar40 = 0.0;
  uVar19 = (ulonglong)(*(uint *)(puVar15 + 0x2a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x2b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x154) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar15 + 0x2a));
  if (*(float *)(puVar15 + 0x2b) - 0.0 < 0.0) {
    fVar5 = fVar8;
  }
  fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar7 = ABS(*(float *)((int)puVar15 + 0x154));
  if (*(float *)(puVar15 + 0x2b) - 0.0 < 0.0) {
    fVar7 = fVar6;
  }
  dVar33 = dVar40;
  if (0.0 < fVar5) {
    lVar20 = uVar18 - 0x270;
    lVar27 = uVar18 - 0xe4;
    lVar26 = uVar18 - 0xf4;
    lVar32 = 2;
    fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar15 + 0x33) = fVar5;
    *(float *)(puVar15 + 0x32) = fVar5;
    *(float *)((int)puVar15 + 0x194) = fVar5;
    *(float *)((int)puVar15 + 0x18c) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar15 + 0x32) = *(float *)(puVar15 + 0x32) * fVar6;
    *(float *)((int)puVar15 + 0x194) = *(float *)((int)puVar15 + 0x194) * fVar5;
    *(float *)(puVar15 + 0x33) = *(float *)(puVar15 + 0x33) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x17c) * fVar5 * fVar5;
      iVar22 = (int)lVar26;
      lVar26 = lVar26 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
      lVar27 = lVar27 + 8;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    lVar32 = 4;
    lVar27 = uVar18 - 0xf4;
    pfVar30 = (float *)&DAT_007358e0;
    lVar20 = lVar21;
    lVar26 = lVar27;
    do {
      fVar5 = *pfVar30;
      fVar6 = pfVar30[1];
      pfVar30 = pfVar30 + 2;
      *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x18c) * fVar5;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
      lVar26 = lVar26 + 8;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    lVar20 = 2;
    do {
      iVar22 = (int)lVar21;
      iVar16 = (int)lVar27;
      lVar21 = lVar21 + 0x10;
      lVar27 = lVar27 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar22 + 0x18c)) +
                        *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar8 + fVar4);
  }
  dVar33 = (double)fastfunc::FastDiffRots(dVar33,(double)(pMoby->rotation).z);
  iVar22 = fastfunc::FastDoubleToInt((double)((float)(dVar33 + 3.141592502593994) * 0.6369426));
  puVar15[0x36] = (longlong)iVar22;
  dVar33 = (double)fastfunc::FastAddRots((float)(longlong)puVar15[0x36] * 1.57);
  *(undefined4 *)((int)puVar15 + 0x9c) = 0;
  *(undefined4 *)((int)puVar15 + 0x94) = 0;
  *(undefined4 *)(puVar15 + 0x12) = 0;
  *(float *)(puVar15 + 0x13) = (float)dVar33;
  fastfunc::FastEulerToMtx(uVar18 - 0x160,uVar18 - 0x1f0);
  iVar22 = 0;
  if (iVar28 != 0) {
    pfVar30 = (float *)&DAT_00843500;
    pfVar29 = (f32 *)&DAT_00843560;
    dVar48 = 1.0;
    dVar46 = 5.0;
    dVar44 = 4.0;
    dVar33 = 9.0;
    do {
      fVar5 = pfVar30[1];
      fVar4 = *pfVar30;
      fVar8 = pfVar30[2];
      *(float *)((int)puVar15 + 0xbc) =
           *(float *)((int)puVar15 + 0x14c) * fVar8 +
           *(float *)((int)puVar15 + 300) * fVar4 + *(float *)((int)puVar15 + 0x13c) * fVar5 +
           pfVar30[3];
      fVar6 = (pMoby->pos).y;
      fVar7 = (pMoby->pos).z;
      *(float *)(puVar15 + 0x16) =
           *(float *)(puVar15 + 0x28) * fVar8 +
           *(float *)(puVar15 + 0x24) * fVar4 + *(float *)(puVar15 + 0x26) * fVar5 + (pMoby->pos).x;
      *(float *)((int)puVar15 + 0xb4) =
           *(float *)((int)puVar15 + 0x144) * fVar8 +
           *(float *)((int)puVar15 + 0x124) * fVar4 + *(float *)((int)puVar15 + 0x134) * fVar5 +
           fVar6;
      *(float *)(puVar15 + 0x17) =
           *(float *)(puVar15 + 0x29) * fVar8 +
           *(float *)(puVar15 + 0x25) * fVar4 + *(float *)(puVar15 + 0x27) * fVar5 + fVar7;
      *(f32 *)(puVar15 + 0x18) = *pfVar29;
      *(f32 *)((int)puVar15 + 0xc4) = pfVar29[1];
      fVar5 = pfVar29[2];
      *(float *)(puVar15 + 0x19) = fVar5;
      *(f32 *)((int)puVar15 + 0xcc) = pfVar29[3];
      dVar34 = (double)fastfunc::FastWrapRot(fVar5,*(float *)(puVar15 + 0x13));
      fVar5 = (pMoby->pos).x;
      fVar4 = (pMoby->pos).y;
      *(float *)(puVar15 + 0x19) = (float)dVar34;
      *(undefined4 *)(puVar15 + 0x15) = 0;
      *(undefined4 *)((int)puVar15 + 0xac) = *(undefined4 *)((int)puVar15 + 0xbc);
      *(float *)(puVar15 + 0x14) = *(float *)(puVar15 + 0x16) - fVar5;
      *(float *)((int)puVar15 + 0xa4) = *(float *)((int)puVar15 + 0xb4) - fVar4;
      dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar48,(float)dVar46);
      fVar4 = *(float *)((int)puVar15 + 0xa4);
      fVar8 = *(float *)(puVar15 + 0x14);
      fVar6 = *(float *)(puVar15 + 0x15);
      dVar38 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar4 * fVar4);
      fVar5 = (float)((double)(float)(dVar34 * (double)mobyutil::g_FrameTime) / dVar38);
      dVar34 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar34 = (double)(fVar8 * fVar5);
      }
      dVar35 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar35 = (double)(fVar4 * fVar5);
      }
      dVar36 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar36 = (double)(fVar6 * fVar5);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar34 = (double)(fVar8 * fVar5);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar35 = (double)(fVar4 * fVar5);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar36 = (double)(fVar6 * fVar5);
      }
      *(float *)(puVar15 + 0x14) = (float)dVar34;
      *(float *)((int)puVar15 + 0xa4) = (float)dVar35;
      *(float *)(puVar15 + 0x15) = (float)dVar36;
      dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar33);
      *(float *)(puVar15 + 0x15) = (float)(dVar34 * (double)mobyutil::g_FrameTime);
      mobyutil::MB_randInt(2);
      pMVar23 = (MobyInstance *)
                M1488_0028cce0(dVar48,dVar48,param_1,uVar18 - 0x1e0,uVar18 - 0x1d0,uVar18 - 0x1c0,
                               lVar31);
      if (pMVar23 != (MobyInstance *)0x0) {
        (pMVar23->rotation).x = *pfVar29;
        (pMVar23->rotation).y = pfVar29[1];
        fVar5 = pfVar29[2];
        (pMVar23->rotation).z = fVar5;
        (pMVar23->rotation).w = pfVar29[3];
        dVar34 = (double)fastfunc::FastWrapRot(fVar5,*(float *)(puVar15 + 0x13));
        (pMVar23->rotation).z = (float)dVar34;
        mobyfunc::UpdateMobyTransform(pMVar23);
      }
      iVar22 = iVar22 + 1;
      pfVar30 = pfVar30 + 4;
      pfVar29 = pfVar29 + 4;
    } while (iVar22 < iVar28);
  }
  iVar28 = 0;
  if (iVar24 != 0) {
    dVar38 = -0.5;
    dVar34 = 0.5;
    dVar48 = 1.0;
    dVar46 = 6.0;
    dVar44 = 12.0;
    dVar33 = 3.0;
    uVar41 = 0x3fd0000000000000;
    do {
      dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar34);
      *(float *)(puVar15 + 0x1c) = (float)dVar35;
      dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar34);
      *(float *)((int)puVar15 + 0xe4) = (float)dVar35;
      dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar48);
      fVar5 = (pMoby->pos).y;
      fVar4 = (pMoby->pos).z;
      *(float *)(puVar15 + 0x1c) = *(float *)(puVar15 + 0x1c) + (pMoby->pos).x;
      *(float *)((int)puVar15 + 0xe4) = *(float *)((int)puVar15 + 0xe4) + fVar5;
      *(float *)(puVar15 + 0x1d) = (float)(dVar35 + (double)fVar4);
      dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar46,(float)dVar44);
      mobyutil::MB_randSphere
                ((double)(float)(dVar35 * (double)mobyutil::g_FrameTime),
                 (double)(float)(dVar35 * (double)mobyutil::g_FrameTime),uVar18 - 0x1b0);
      if (*(int *)(puVar15 + 0x1b) < 0) {
        *(float *)(puVar15 + 0x1b) = -*(float *)(puVar15 + 0x1b);
      }
      dVar35 = (double)mobyutil::MB_randRot();
      *(float *)(puVar15 + 0x1e) = (float)dVar35;
      *(undefined4 *)((int)puVar15 + 0xf4) = 0;
      dVar35 = (double)mobyutil::MB_randRot();
      *(float *)(puVar15 + 0x1f) = (float)dVar35;
      iVar22 = mobyutil::MB_randInt(6);
      if (iVar22 == 0) {
        mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar46);
        fastfunc::FastDoubleToInt();
      }
      M1488_0028cce0(uVar41,dVar34,param_1,uVar18 - 0x1b0,uVar18 - 0x1a0,uVar18 - 400,lVar31 + 1);
      iVar28 = iVar28 + 1;
    } while (iVar28 < iVar24);
  }
  auVar49 = ZEXT416(0xffffffff);
  auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  pMoby->state = '\x03';
  pMoby->collision = (ushort *)0x0;
  auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
  pMoby->modeBits = pMoby->modeBits | DISABLED;
  auVar49 = loadVectorLeftIndexed(0x54,0x3a53dc);
  auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  dVar33 = 15.5;
  auVar49 = vectorMultiplyAddFloatingPoint
                      (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,auVar50
                      );
  auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
  auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xff;
  cVar13 = storeVectorElementByteIndexed
                     (auVar49 | auVar49 << 8 | auVar49 << 0x10 | auVar49 << 0x18 | auVar49 << 0x20 |
                      auVar49 << 0x28 | auVar49 << 0x30 | auVar49 << 0x38 | auVar49 << 0x40 |
                      auVar49 << 0x48 | auVar49 << 0x50 | auVar49 << 0x58 | auVar49 << 0x60 |
                      auVar49 << 0x68 | auVar49 << 0x70 | auVar49 << 0x78,0xbc,param_1);
  pMoby->setByGroup = cVar13;
  if (param_2 != '\0') {
    auVar49 = ZEXT416(1);
    auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
    if (hero::g_heroStateType == 0x16) {
      auVar49 = ZEXT416(0xffffffff);
      auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
      auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar49 = loadVectorLeftIndexed(0x58,0x3a53dc);
      auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = vectorMultiplyAddFloatingPoint
                          (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                           auVar50);
      auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
    }
    auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xff;
    uVar14 = storeVectorElementByteIndexed
                       (auVar49 | auVar49 << 8 | auVar49 << 0x10 | auVar49 << 0x18 | auVar49 << 0x20
                        | auVar49 << 0x28 | auVar49 << 0x30 | auVar49 << 0x38 | auVar49 << 0x40 |
                        auVar49 << 0x48 | auVar49 << 0x50 | auVar49 << 0x58 | auVar49 << 0x60 |
                        auVar49 << 0x68 | auVar49 << 0x70 | auVar49 << 0x78,0xca,ZEXT48(pvVar10));
    *(undefined1 *)((int)pvVar10 + 0xca) = uVar14;
    fVar5 = (pMoby->transform).v2.y;
    fVar4 = (pMoby->transform).v2.x;
    fVar8 = (pMoby->transform).v2.z;
    dVar44 = (double)(pMoby->pos).x;
    dVar46 = (double)(pMoby->pos).y;
    dVar48 = (double)(pMoby->pos).z;
    dVar34 = (double)SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5);
    if (dVar34 == dVar40) {
      fVar7 = (pMoby->transform).v2.w;
      dVar34 = dVar40;
      dVar38 = dVar40;
      dVar35 = dVar40;
    }
    else {
      fVar6 = (float)(0.5 / dVar34);
      fVar7 = (pMoby->transform).v2.w;
      dVar35 = (double)(fVar4 * fVar6);
      dVar34 = (double)(fVar5 * fVar6);
      dVar38 = (double)(fVar8 * fVar6);
    }
    fVar5 = (float)((double)GameCamera.posY - dVar46);
    fVar4 = (float)((double)GameCamera.posX - dVar44);
    fVar8 = (float)((double)GameCamera.posZ - dVar48);
    *(float *)((int)puVar15 + 0x10c) = fVar7;
    iVar24 = 10;
    *(float *)(puVar15 + 0x20) = (float)(dVar35 + dVar44);
    *(float *)((int)puVar15 + 0x104) = (float)(dVar34 + dVar46);
    *(float *)(puVar15 + 0x21) = (float)(dVar38 + dVar48);
    *(undefined4 *)((int)puVar15 + 0x11c) = 0;
    *(undefined4 *)(puVar15 + 0x23) = 0;
    *(undefined4 *)((int)puVar15 + 0x114) = 0;
    *(undefined4 *)(puVar15 + 0x22) = 0;
    dVar44 = 8.0;
    dVar46 = (double)SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5);
    if (dVar46 < 8.0) {
      iVar24 = fastfunc::FastDoubleToInt(dVar46);
      iVar24 = iVar24 + 2;
    }
    if (dVar46 - 7.0 < 0.0) {
      dVar40 = (double)(float)(7.0 - dVar46);
    }
    if ((bVar1) && (6 < iVar24)) {
      iVar24 = 6;
    }
    iVar28 = 0;
    if (0 < iVar24) {
      dVar35 = 10.0;
      uVar41 = 0x41186a0000000000;
      dVar38 = 20.5;
      dVar34 = 25.5;
      dVar48 = 30.5;
      do {
        dVar36 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar35);
        dVar37 = (double)mobyutil::g_FrameTime;
        *(undefined4 *)((int)puVar15 + 0x15c) = 0x4f008fff;
        *(undefined4 *)(puVar15 + 0x2c) = 0x4f008fff;
        *(undefined4 *)((int)puVar15 + 0x164) = 0x4f007fff;
        *(undefined4 *)(puVar15 + 0x2d) = 0x4f006fff;
        *(undefined4 *)((int)puVar15 + 0x16c) = 0x2fffffff;
        *(undefined4 *)(puVar15 + 0x2e) = 0x2fffffff;
        dVar39 = (double)(float)(dVar36 * dVar37 - (double)(float)(dVar37 * dVar40));
        *(undefined4 *)((int)puVar15 + 0x174) = 0x2f005f7f;
        *(undefined4 *)(puVar15 + 0x2f) = 0x2f004f7f;
        *(undefined4 *)((int)puVar15 + 0x17c) = 0x2f003f7f;
        *(undefined4 *)(puVar15 + 0x30) = 0x2f00004f;
        *(undefined4 *)((int)puVar15 + 0x184) = 0x2f000000;
        *(undefined4 *)(puVar15 + 0x31) = 0x3f000000;
        lVar21 = mobyutil::MB_randInt(dVar36,dVar37,(double)(float)(dVar37 * dVar40),6);
        uVar11 = *(undefined4 *)((int)puVar15 + (int)(lVar21 << 2) + 0x15c);
        lVar21 = mobyutil::MB_randInt(6);
        dVar36 = (double)animationSpeed;
        uVar12 = *(undefined4 *)((int)puVar15 + (int)(lVar21 << 2) + 0x174);
        puVar15[0x36] = (longlong)(int)(dVar36 * dVar33);
        puVar15[0x36] = (longlong)(int)(dVar36 * dVar38);
        mobyutil::MB_randRange
                  (*(undefined4 *)((int)puVar15 + 0x1b4),*(undefined4 *)((int)puVar15 + 0x1b4));
        dVar36 = (double)animationSpeed;
        puVar15[0x36] = (longlong)(int)(dVar36 * dVar34);
        puVar15[0x36] = (longlong)(int)(dVar36 * dVar48);
        mobyutil::MB_randRange
                  (*(undefined4 *)((int)puVar15 + 0x1b4),*(undefined4 *)((int)puVar15 + 0x1b4));
        puVar15[0xe] = 0;
        puVar15[0xf] = 0;
        partupd::SpawnPart_11(uVar41,dVar39,uVar18 - 0x180,uVar18 - 0x170,uVar11,uVar12);
        iVar28 = iVar28 + 1;
      } while (iVar28 < iVar24);
    }
    uVar17 = (uint)((int)DAT_00a10714 >> 0x1f) >> 1;
    if (((int)((uVar17 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f)) < 0x3f733333) &&
       (!bVar1 && 9.0 < dVar46)) {
      dVar40 = (double)animationSpeed;
      lVar31 = uVar18 - 0x180;
      lVar21 = uVar18 - 0x170;
      uVar41 = 0x4010000000000000;
      puVar15[0xe] = 0x20;
      puVar15[0x36] = (longlong)(int)(dVar40 * dVar33);
      FUN_001d4d88(0x4010000000000000,param_1,lVar31,lVar21,uVar17,
                   *(undefined4 *)((int)puVar15 + 0x1b4),0x7f,0x7f,0x7f);
      fVar5 = animationSpeed;
      puVar15[0xe] = 0x20;
      puVar15[0x36] = (longlong)(int)(fVar5 * 24.5);
      FUN_001d4d88(uVar41,param_1,lVar31,lVar21);
      fVar5 = animationSpeed * 20.5;
      puVar15[0xe] = 0x30;
      puVar15[0x36] = (longlong)(int)fVar5;
      FUN_001d4d88(uVar41,param_1,lVar31,lVar21,0x30,*(undefined4 *)((int)puVar15 + 0x1b4),0x7f,0x40
                   ,0);
    }
    fVar5 = animationSpeed * 27.5;
    puVar15[0xe] = 0x40;
    puVar15[0x36] = (longlong)(int)fVar5;
    FUN_001d4d88(0x400c000000000000,param_1,uVar18 - 0x180,uVar18 - 0x170);
    fVar5 = animationSpeed * 29.5;
    puVar15[0xe] = 0x20;
    puVar15[0x36] = (longlong)(int)fVar5;
    FUN_001d4d88(0x4008000000000000,param_1,uVar18 - 0x180,uVar18 - 0x170,0x20,
                 *(undefined4 *)((int)puVar15 + 0x1b4),0x20,0,0);
  }
  return;
}



//==== 003a6388  ns=mobyupdate_helpers  size=0x994
// sig: undefined M511_003a6388(void)
// callers(1): 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate
// callees(9): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0010af88 mobyutil::MB_isCrate; 001122ac mobyutil::MB_GetPlatformParent; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00502578 fastfunc::FastWrapRot

MobyInstance * mobyupdate_helpers::M511_003a6388(MobyInstance *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  Spline *pSVar7;
  MobyInstance *pMVar8;
  int iVar9;
  MobyInstance *pMVar10;
  bool bVar11;
  int iVar12;
  undefined8 in_LR;
  double dVar13;
  double dVar14;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  MobyInstance *local_50;
  MobyInstance *local_4c;
  MobyInstance *local_48 [2];
  
  pvVar4 = param_1->pVar;
  bVar1 = param_1->group;
  *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 4;
  local_50 = param_1;
  if (bVar1 == 0xff) {
    if ((((param_1->oClass == BOLT_CRATE) && (iVar9 = mobyutil::MB_randInt(2), iVar9 != 0)) &&
        ((local_50->rotation).x == 0.0)) && ((local_50->rotation).y == 0.0)) {
      dVar13 = (double)fastfunc::FastWrapRot((local_50->rotation).z,1.5707964);
      (local_50->rotation).z = (float)dVar13;
    }
    if (((local_50->oClass == NANOTECH_CRATE) && (local_50->levelFlagIdx != 0xff)) &&
       ((int)(&DAT_00a0fcd4)[(byte)local_50->levelFlagIdx] < *(int *)((int)pvVar4 + 0xf8))) {
      pMVar10 = (MobyInstance *)mobyfunc::DeleteMoby(local_50);
    }
    else {
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0x3f800000;
      *(short *)((int)pvVar4 + 0xc4) = (short)local_50->field71_0xa8;
      *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 1;
      iVar9 = collproc::CollLine(local_90,local_80,2,0,0);
      fVar3 = CollOutput.ip.z;
      if (iVar9 == 0) {
        *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        pMVar10 = (MobyInstance *)0x0;
      }
      else if (CollOutput.pMoby == (MobyInstance *)0x0) {
        *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        (local_50->pos).z = fVar3;
        pMVar10 = (MobyInstance *)0x0;
      }
      else {
        bVar11 = mobyutil::MB_isCrate(CollOutput.pMoby);
        pMVar10 = (MobyInstance *)(int)bVar11;
        if (!bVar11) {
          *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
          pMVar10 = CollOutput.pMoby;
          *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 8;
          iVar9 = mobyutil::MB_GetPlatformParent(pMVar10);
          pMVar10 = CollOutput.pMoby;
          if (iVar9 != 0) {
            if (local_50 != (MobyInstance *)0x0) {
              local_50->occlIndex = 0x7f80;
            }
            mobyutil::MB_PlatformWorldToLocal
                      (local_4c,pMVar10,&local_50->pos,&local_50->rotation,(int)pvVar4 + 0xd0,
                       (int)pvVar4 + 0xe0);
            pMVar10 = (MobyInstance *)0x0;
            *(MobyInstance **)((int)pvVar4 + 0xf0) = CollOutput.pMoby;
            *(undefined4 *)((int)pvVar4 + 0xf4) = 0;
          }
        }
      }
    }
  }
  else {
    mobyutil::MB_GetFirstMobyInGroup(&local_50,(uint)bVar1,'\0','\0');
    if (local_50 != (MobyInstance *)0x0) {
      dVar13 = 1.5707963705062866;
      do {
        pvVar4 = local_50->pVar;
        bVar11 = mobyutil::MB_isCrate(local_50);
        if (bVar11) {
          if ((((local_50->oClass == BOLT_CRATE) && (iVar9 = mobyutil::MB_randInt(2), iVar9 != 0))
              && ((local_50->rotation).x == 0.0)) && ((local_50->rotation).y == 0.0)) {
            dVar14 = (double)fastfunc::FastWrapRot((local_50->rotation).z,(float)dVar13);
            (local_50->rotation).z = (float)dVar14;
          }
          if (((local_50->oClass == NANOTECH_CRATE) && (local_50->levelFlagIdx != 0xff)) &&
             ((int)(&DAT_00a0fcd4)[(byte)local_50->levelFlagIdx] < *(int *)((int)pvVar4 + 0xf8))) {
            mobyfunc::DeleteMoby(local_50);
          }
          else {
            *(undefined4 *)((int)pvVar4 + 0xb0) = 0x3f800000;
            *(short *)((int)pvVar4 + 0xc4) = (short)local_50->field71_0xa8;
            *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 1;
            iVar9 = collproc::CollLine(local_90,local_80,2,0,0);
            fVar3 = CollOutput.ip.z;
            if (iVar9 == 0) {
              *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
            }
            else if (CollOutput.pMoby == (MobyInstance *)0x0) {
              *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
              (local_50->pos).z = fVar3;
            }
            else {
              bVar11 = mobyutil::MB_isCrate(CollOutput.pMoby);
              if ((bVar11) ||
                 ((CollOutput.pMoby)->oClass == 0x129 ||
                  (CollOutput.pMoby)->oClass == CONVEYOR_BELT_0128)) {
                if ((CollOutput.pMoby)->pVar == (void *)0x0) {
                  *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
                }
                else if ((CollOutput.pMoby)->group == local_50->group) {
                  bVar11 = mobyutil::MB_isCrate(CollOutput.pMoby);
                  if (bVar11) {
                    *(MobyInstance **)((int)pvVar4 + 0xa4) = CollOutput.pMoby;
                    pMVar10 = CollOutput.pMoby;
                    (local_50->pos).x = ((CollOutput.pMoby)->pos).x;
                    (local_50->pos).y = (pMVar10->pos).y;
                    (local_50->pos).z = (pMVar10->pos).z;
                    (local_50->pos).w = (pMVar10->pos).w;
                    pvVar4 = pMVar10->pVar;
                    (local_50->pos).x = (local_50->pos).x + (pMVar10->transform).v2.x;
                    (local_50->pos).y = (local_50->pos).y + (pMVar10->transform).v2.y;
                    (local_50->pos).z = (local_50->pos).z + (pMVar10->transform).v2.z;
                    bVar11 = mobyutil::MB_isCrate(local_50);
                    if (bVar11) {
                      *(MobyInstance **)((int)pvVar4 + 0xa0) = local_50;
                    }
                    else {
                      trapWord(0x1f,in_LR,in_LR);
                      *(undefined4 *)((int)pvVar4 + 0xa0) = 0;
                    }
                  }
                  else {
                    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
                    *(undefined4 *)((int)pvVar4 + 0xcc) = 0;
                    (local_50->pos).z = CollOutput.ip.z;
                  }
                }
                else {
                  *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
                }
              }
              else {
                *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
                local_50->updateDistance = -1;
                *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 8;
              }
            }
          }
        }
        mobyutil::MB_GetNextMobyInGroup(&local_50,local_50,'\0','\0');
      } while (local_50 != (MobyInstance *)0x0);
    }
    mobyutil::MB_GetFirstMobyInGroup(&local_4c,(uint)bVar1,'\0','\0');
    while (local_4c != (MobyInstance *)0x0) {
      pvVar4 = local_4c->pVar;
      bVar11 = mobyutil::MB_isCrate(local_4c);
      if ((bVar11) && (*(int *)((int)pvVar4 + 0xa4) == 0)) {
        iVar9 = collproc::CollLine(local_70,local_60,2,0,0);
        pMVar10 = local_4c;
        if ((iVar9 != 0) &&
           ((pMVar10 = local_4c, CollOutput.pMoby != (MobyInstance *)0x0 &&
            (iVar9 = mobyutil::MB_GetPlatformParent(), pMVar8 = CollOutput.pMoby, pMVar10 = local_4c
            , iVar9 != 0)))) {
          if (local_50 != (MobyInstance *)0x0) {
            local_50->occlIndex = 0x7f80;
          }
          mobyutil::MB_PlatformWorldToLocal
                    (local_4c,pMVar8,&local_4c->pos,&local_4c->rotation,(int)pvVar4 + 0xd0,
                     (int)pvVar4 + 0xe0);
          *(MobyInstance **)((int)pvVar4 + 0xf0) = CollOutput.pMoby;
          *(undefined4 *)((int)pvVar4 + 0xf4) = 0;
          *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 8;
          pMVar10 = local_4c;
        }
        while (local_50 = pMVar10, local_50 != (MobyInstance *)0x0) {
          pvVar4 = local_50->pVar;
          if (((*(int *)((int)pvVar4 + 0xa4) != 0) &&
              (iVar9 = *(int *)(*(int *)((int)pvVar4 + 0xa4) + 0x78), iVar9 != 0)) &&
             (*(undefined4 *)((int)pvVar4 + 0xcc) = *(undefined4 *)(iVar9 + 0xcc),
             *(int *)(iVar9 + 0xf0) != 0)) {
            local_50->updateDistance = -1;
            *(undefined4 *)((int)pvVar4 + 0xd0) = *(undefined4 *)(iVar9 + 0xd0);
            *(undefined4 *)((int)pvVar4 + 0xd4) = *(undefined4 *)(iVar9 + 0xd4);
            *(undefined4 *)((int)pvVar4 + 0xd8) = *(undefined4 *)(iVar9 + 0xd8);
            *(undefined4 *)((int)pvVar4 + 0xdc) = *(undefined4 *)(iVar9 + 0xdc);
            *(undefined4 *)((int)pvVar4 + 0xe0) = *(undefined4 *)(iVar9 + 0xe0);
            *(undefined4 *)((int)pvVar4 + 0xe4) = *(undefined4 *)(iVar9 + 0xe4);
            *(undefined4 *)((int)pvVar4 + 0xe8) = *(undefined4 *)(iVar9 + 0xe8);
            uVar2 = *(undefined4 *)(iVar9 + 0xec);
            *(uint *)((int)pvVar4 + 0xac) = *(uint *)((int)pvVar4 + 0xac) | 8;
            *(undefined4 *)((int)pvVar4 + 0xec) = uVar2;
            fVar3 = *(float *)(iVar9 + 0xf4);
            *(undefined4 *)((int)pvVar4 + 0xf0) = *(undefined4 *)(iVar9 + 0xf0);
            *(float *)((int)pvVar4 + 0xf4) = fVar3 + 1.0;
          }
          if (((*(short *)((int)pvVar4 + 0xc6) != 0) || (local_50->oClass == NANOTECH_CRATE)) &&
             ((*(int *)((int)pvVar4 + 0xa0) != 0 && (*(int *)((int)pvVar4 + 0xc0) != -1)))) {
            pSVar7 = Splines[*(int *)((int)pvVar4 + 0xc0)];
            if (pSVar7->cnt == 0) {
              *(undefined4 *)((int)pvVar4 + 0xc0) = 0xffffffff;
            }
            else {
              fVar3 = pSVar7->points[0].w;
              if ((fVar3 == 1.4013e-45) || (fVar3 == 4.2039e-45)) {
                *(undefined4 *)((int)pvVar4 + 0xc0) = 0xffffffff;
              }
              else if (fVar3 == 3.82554e-43) {
                *(undefined4 *)((int)pvVar4 + 0xc0) = 0xffffffff;
              }
              else if (((int)fVar3 < 0x11) || (0x110 < (int)fVar3)) {
                pSVar7->points[0].w = 2.38221e-44;
                iVar9 = 0;
                if (0 < Splines[*(int *)((int)pvVar4 + 0xc0)]->cnt) {
                  iVar5 = *(int *)((int)pvVar4 + 0xc0);
                  iVar12 = 0;
                  do {
                    iVar9 = iVar9 + 1;
                    iVar6 = *(int *)((int)pvVar4 + 0xc0);
                    pSVar7 = Splines[iVar6];
                    *(undefined4 *)((int)&Splines[iVar5]->points[0].w + iVar12) = 0;
                    iVar5 = iVar6;
                    iVar12 = iVar12 + 0x10;
                  } while (iVar9 < pSVar7->cnt);
                }
              }
              else if ((int)fVar3 + -0x10 < pSVar7->cnt) {
                pSVar7->points[0].w = (float)((int)fVar3 + 1);
              }
              else {
                *(undefined4 *)((int)pvVar4 + 0xc0) = 0xffffffff;
              }
            }
          }
          pMVar10 = *(MobyInstance **)((int)pvVar4 + 0xa0);
        }
      }
      mobyutil::MB_GetNextMobyInGroup(&local_4c,local_4c,'\0','\0');
    }
    pMVar10 = (MobyInstance *)mobyutil::MB_GetFirstMobyInGroup(&local_50,(uint)bVar1,'\0','\0');
    if (local_50 != (MobyInstance *)0x0) {
      do {
        bVar11 = mobyutil::MB_isCrate(local_50);
        if (bVar11) {
          mobyutil::MB_GetNextMobyInGroup(local_48,local_50,'\0','\0');
          while (local_48[0] != (MobyInstance *)0x0) {
            mobyutil::MB_isCrate(local_48[0]);
            mobyutil::MB_GetNextMobyInGroup(local_48,local_48[0],'\0','\0');
          }
        }
        pMVar10 = (MobyInstance *)mobyutil::MB_GetNextMobyInGroup(&local_50,local_50,'\0','\0');
      } while (local_50 != (MobyInstance *)0x0);
    }
  }
  return pMVar10;
}



//==== 003a6d40  ns=mobyupdate_helpers  size=0x5e0
// sig: undefined M511_003a6d40(void)
// callers(1): 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate
// callees(8): 00057820 collproc::CollLine; 00109af0 mobyutil::Delt; 0010af88 mobyutil::MB_isCrate; 001122ac mobyutil::MB_GetPlatformParent; 00112678 mobyutil::MB_PlatformGetDelta; 00112900 mobyutil::MB_GetOrientation; 003a4da0 mobyupdate_helpers::M511_003a4da0; 003a5468 mobyupdate_helpers::M511_003a5468

void mobyupdate_helpers::M511_003a6d40(ulonglong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int moby;
  float fVar9;
  ulonglong uVar10;
  bool bVar12;
  int iVar11;
  ulonglong uVar13;
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
  float fVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  if (*(int *)(*(int *)((int)param_1 + 0x78) + 0xb4) != worldUpdateTime) {
    do {
      uVar13 = param_1;
      uVar6 = *(uint *)(*(int *)((int)uVar13 + 0x78) + 0xa4);
      param_1 = (ulonglong)uVar6;
    } while (uVar6 != 0);
    dVar24 = 0.550000011920929;
    dVar23 = 0.0;
    dVar22 = 9.800000190734863;
    dVar21 = -0.30000001192092896;
    dVar20 = 0.30000001192092896;
    dVar19 = 10.0;
    dVar18 = 1.0;
    dVar17 = 0.5;
    do {
      moby = (int)uVar13;
      iVar7 = *(int *)(moby + 0x78);
      uVar6 = *(uint *)(iVar7 + 0xac);
      uVar8 = *(uint *)(iVar7 + 0xa0);
      *(uint *)(iVar7 + 0xac) =
           uVar6 + ((uint)((LZCOUNT(-(uVar6 & 4)) << 0x3a) >> 0x3f) & (uVar6 & 0xffffffef) - uVar6)
           & 0xfffffffb;
      bVar12 = mobyutil::MB_isCrate(moby);
      if (!bVar12) {
        return;
      }
      if ((*(uint *)(iVar7 + 0xac) & 2) != 0) {
        return;
      }
      *(int *)(iVar7 + 0xb4) = worldUpdateTime;
      cVar1 = *(char *)(moby + 0x20);
      if (cVar1 != '\0') {
        fVar25 = g_heroPosition.y - *(float *)(moby + 0x14);
        fVar5 = g_heroPosition.x - *(float *)(moby + 0x10);
        fVar9 = g_heroPosition.z - *(float *)(moby + 0x18);
        dVar15 = (double)(*(float *)(moby + 0xe8) * fVar9 +
                         *(float *)(moby + 200) * fVar5 + *(float *)(moby + 0xd8) * fVar25);
        if (((((ABS((double)(*(float *)(moby + 0xe0) * fVar9 +
                            *(float *)(moby + 0xc0) * fVar5 + *(float *)(moby + 0xd0) * fVar25)) <
                dVar24) &&
              (ABS((double)(*(float *)(moby + 0xe4) * fVar9 +
                           *(float *)(moby + 0xc4) * fVar5 + *(float *)(moby + 0xd4) * fVar25)) <
               dVar24)) && (dVar15 < dVar23)) &&
            (-(double)(hero::g_heroCollTop + hero::g_heroCollRadius) < dVar15)) &&
           ((cVar1 == '\x01' || (cVar1 == '\x05')))) {
          M511_003a5468(uVar13,(ulonglong)(LZCOUNT(*(ushort *)(moby + 0xa6) - 0x1f9) << 0x20) >>
                               0x25,0);
          M511_003a4da0(uVar13);
        }
        dVar14 = (double)DAT_0071f418;
        dVar15 = -(double)(float)(dVar14 * dVar22 - (double)*(float *)(iVar7 + 0x48));
        if (dVar15 - dVar21 < 0.0) {
          dVar15 = dVar21;
        }
        if (dVar20 - dVar15 < 0.0) {
          dVar15 = dVar20;
        }
        *(float *)(iVar7 + 0x48) = (float)dVar15;
        if (*(int *)(iVar7 + 0xf0) == 0) {
          if (*(int *)(iVar7 + 0xa4) == 0) {
            iVar11 = collproc::CollLine(uVar10 - 0xd0,uVar10 - 0xc0,2,0,0);
            fVar25 = CollOutput.ip.z;
          }
          else {
            iVar11 = 0;
            fVar25 = (float)((double)*(float *)(*(int *)(iVar7 + 0xa4) + 0x18) + dVar18);
            if ((float)((double)*(float *)(moby + 0x18) + dVar15) < fVar25) {
              iVar11 = 1;
            }
          }
          if (iVar11 == 0) {
            *(uint *)(iVar7 + 0xac) = *(uint *)(iVar7 + 0xac) | 4;
            *(float *)(moby + 0x10) = *(float *)(moby + 0x10) + *(float *)(iVar7 + 0x40);
            *(float *)(moby + 0x14) = *(float *)(moby + 0x14) + *(float *)(iVar7 + 0x44);
            *(float *)(moby + 0x18) = *(float *)(moby + 0x18) + *(float *)(iVar7 + 0x48);
          }
          else {
            if ((float)((double)mobyutil::g_FrameTime * dVar17) <
                SQRT(*(float *)(iVar7 + 0x48) * *(float *)(iVar7 + 0x48) +
                     *(float *)(iVar7 + 0x40) * *(float *)(iVar7 + 0x40) +
                     *(float *)(iVar7 + 0x44) * *(float *)(iVar7 + 0x44))) {
              if ((*(short *)(moby + 0xa6) == 0x1f9) && (*(char *)(moby + 0x20) == '\x01')) {
                *(undefined1 *)(moby + 0x20) = 5;
                *(undefined1 *)(moby + 0xbc) = 0;
              }
              else {
                iVar11 = *(int *)(iVar7 + 0xa4);
                if ((iVar11 != 0) &&
                   ((*(short *)(iVar11 + 0xa6) == 0x1f9 && (*(char *)(iVar11 + 0x20) == '\x01')))) {
                  *(undefined1 *)(iVar11 + 0x20) = 5;
                  *(undefined1 *)(*(int *)(iVar7 + 0xa4) + 0xbc) = 0;
                }
              }
            }
            *(float *)(moby + 0x18) = fVar25;
            *(undefined4 *)(iVar7 + 0x48) = 0;
          }
        }
        else {
          if (*(int *)(iVar7 + 0xa4) == 0) {
            fVar25 = -(float)(dVar14 * dVar19 - (double)*(float *)(iVar7 + 0x4c));
            *(float *)(iVar7 + 0x4c) = fVar25;
            fVar25 = mobyutil::Delt((float)dVar23,ABS(fVar25),(float *)(iVar7 + 0xf4));
            if ((double)fVar25 == dVar23) {
              *(undefined4 *)(iVar7 + 0x4c) = 0;
            }
          }
          else {
            fVar25 = -(float)(dVar14 * dVar19 - (double)*(float *)(iVar7 + 0x4c));
            *(float *)(iVar7 + 0x4c) = fVar25;
            fVar25 = mobyutil::Delt((float)((double)*(float *)(*(int *)(*(int *)(iVar7 + 0xa4) +
                                                                       0x78) + 0xf4) + dVar18),
                                    ABS(fVar25),(float *)(iVar7 + 0xf4));
            if ((double)fVar25 == dVar23) {
              *(undefined4 *)(iVar7 + 0x4c) = 0;
            }
          }
          uVar2 = *(undefined4 *)(iVar7 + 0xd0);
          uVar3 = *(undefined4 *)(iVar7 + 0xd4);
          uVar4 = *(undefined4 *)(iVar7 + 0xdc);
          fVar25 = *(float *)(iVar7 + 0xd8) + *(float *)(iVar7 + 0xf4);
          dVar16 = (double)*(float *)(moby + 0x10);
          dVar14 = (double)*(float *)(moby + 0x14);
          dVar15 = (double)*(float *)(moby + 0x18);
          if (moby != 0) {
            *(undefined2 *)(moby + 0x36) = 0x7f80;
          }
          mobyutil::MB_PlatformGetDelta
                    (uVar13,*(undefined4 *)(iVar7 + 0xf0),uVar10 - 0xb0,iVar7 + 0xe0,uVar13 + 0x10,
                     uVar13 + 0x40);
          iVar11 = mobyutil::MB_GetPlatformParent(*(undefined4 *)(iVar7 + 0xf0));
          if ((*(uint *)(iVar11 + 0x3c) & 4) != 0) {
            *(undefined4 *)(iVar7 + 0xd0) = uVar2;
            *(undefined4 *)(iVar7 + 0xd4) = uVar3;
            *(float *)(iVar7 + 0xd8) = fVar25;
            *(undefined4 *)(iVar7 + 0xdc) = uVar4;
            *(float *)(iVar7 + 0xd8) = fVar25 - *(float *)(iVar7 + 0xf4);
          }
          fVar25 = *(float *)(moby + 0x14);
          fVar5 = *(float *)(moby + 0x18);
          *(float *)(iVar7 + 0x40) = (float)((double)*(float *)(moby + 0x10) - dVar16);
          *(float *)(iVar7 + 0x44) = (float)((double)fVar25 - dVar14);
          *(float *)(iVar7 + 0x48) = (float)((double)fVar5 - dVar15);
          mobyutil::MB_GetOrientation
                    ((MobyInstance *)(iVar7 + 0x60),(Vec4 *)(iVar7 + 0x40),uVar10 - 0xa0,
                     uVar13 + 0x40);
        }
      }
      uVar13 = (ulonglong)uVar8;
    } while (uVar8 != 0);
  }
  return;
}



//==== 003a7360  ns=mobyupdate_unsorted  size=0xd00
// sig: undefined UpdateMoby_500_Crate(MobyInstance * moby)
// callers(0): 
// callees(23): 0005e598 collproc::CollMobySphere; 000ef74c mobyfunc::UpdateMobyFrameData; 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000ffb70 mobyutil::GetGroundZ; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010af88 mobyutil::MB_isCrate; 0015d12c sound::PlayMobySound; 003a4da0 mobyupdate_helpers::M511_003a4da0; 003a5468 mobyupdate_helpers::M511_003a5468; 003a6388 mobyupdate_helpers::M511_003a6388; 003a6d40 mobyupdate_helpers::M511_003a6d40; 004660c4 Spawn_Moby806_NanotechBall; 00500060 fastfunc::FastDecTimerS8; 005000b4 fastfunc::FastDecTimerU8; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 500
   Moby 501
   Moby 502
   Moby 503
   Moby 504
   Moby 505
   Moby 506
   Moby 507
   Moby 508
   Moby 509
   Moby 510
   Moby 511 */

void mobyupdate_unsorted::UpdateMoby_500_Crate(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  short sVar3;
  MobyModeBit MVar4;
  void *pvVar5;
  void *pvVar6;
  u16 *puVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  LevelId LVar11;
  longlong lVar12;
  bool bVar16;
  ushort uVar14;
  int iVar13;
  char cVar17;
  MOBY_OCLASSES MVar15;
  undefined1 uVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  undefined8 uVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [48];
  int local_70;
  int local_6c;
  undefined1 auStack_68 [4];
  MobyInstance *local_64;
  longlong local_60;
  
  lVar12 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  if ((*(int *)((int)pvVar5 + 0xa0) != 0) &&
     (bVar16 = mobyutil::MB_isCrate(*(int *)((int)pvVar5 + 0xa0)), !bVar16)) {
    *(undefined4 *)((int)pvVar5 + 0xa0) = 0;
  }
  if ((*(int *)((int)pvVar5 + 0xa4) != 0) &&
     (bVar16 = mobyutil::MB_isCrate(*(int *)((int)pvVar5 + 0xa4)), !bVar16)) {
    *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
  }
  iVar13 = worldUpdateTime;
  *(int *)((int)pvVar5 + 0xfc) = worldUpdateTime;
  if (*(int *)((int)pvVar5 + 0xa0) == 0) {
    uVar14 = *(ushort *)((int)pvVar5 + 0x3e) | 1;
  }
  else {
    uVar14 = *(ushort *)((int)pvVar5 + 0x3e) & 0xfffe;
  }
  *(ushort *)((int)pvVar5 + 0x3e) = uVar14;
  if (((*(int *)((int)pvVar5 + 0xb4) != iVar13) && (moby->state != '\0')) &&
     ((*(uint *)((int)pvVar5 + 0xac) & 0xc) != 0)) {
    mobyupdate_helpers::M511_003a6d40(lVar12);
  }
  bVar16 = false;
  iVar13 = mobyutil::MB_damage(lVar12,0x1830000,0);
  if ((iVar13 != 0) && (*(int *)(iVar13 + 0x24) == 0x1000000)) {
    iVar13 = 0;
    bVar16 = true;
  }
  if ((short)moby->oClass < 0x1fe && 0x1fa < (short)moby->oClass) {
    mobyutil::MB_HandleDamage(moby,iVar13,ZEXT48(pvVar5) + 0x20,0,&local_70,auStack_68,&local_6c,4);
  }
  uVar1 = moby->state;
  bVar19 = (uVar1 == '\x04') << 1;
  if (uVar1 == '\x06') {
    uVar25 = 0x3fe0000000000000;
    local_60 = (longlong)(int)moby->drawDistance;
    dVar27 = 1.0;
    iVar13 = fastfunc::FastCheckBsphereInView((double)local_60,local_b0);
    if ((iVar13 == -1) && (iVar13 = fastfunc::FastDecTimerU8(ZEXT48(pvVar5) + 0xc9), iVar13 != 0)) {
      if (moby->group == 0xff) {
        moby->state = '\x01';
        moby->enabled = '\x01';
        moby->collision = moby->pClass->collision;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      }
      else {
        if (Level == Veldin2) {
          auVar29 = ZEXT416(0xfffffff0);
          iVar20 = 0;
          uVar22 = 0;
          auVar30 = loadVectorLeftIndexed(0x28,0x3a7320);
          iVar13 = 0;
          auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          do {
            if ((&UnlockableItems.field0_0x0)[(int)uVar22] != '\0') {
              iVar20 = iVar20 + 1;
              iVar23 = (int)(uVar22 << 3) * 3;
              auVar32 = loadVectorLeftIndexed((longlong)iVar23,0x737d3e);
              auVar31 = loadVectorRightIndexed((longlong)iVar23 + 0x10,0x737d3e);
              auVar32 = vectorShiftRightWord
                                  (auVar32 | auVar31,
                                   auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
              if (*(short *)((int)&DAT_00737d3e + iVar23) != 0) {
                auVar31 = vectorConvertFromUnsignedFixedPointWord(auVar32,0);
                auVar32 = ZEXT416(0xffffffff);
                auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
                lVar24 = (longlong)(int)((uVar22 & 0xffffffff) << 2);
                auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
                auVar33 = loadVectorLeftIndexed(lVar24,0x96c0ac);
                auVar34 = loadVectorRightIndexed(lVar24 + 0x10,0x96c0ac);
                auVar32 = vectorMultiplyAddFloatingPoint
                                    (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                             auVar30 << 0x60,auVar32);
                auVar31 = vectorConvertFromSignedFixedPointWord(auVar33 | auVar34,0);
                auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
                vectorCompareGreaterThanOrEqualToFloatingPoint
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
                if ((bool)(bVar19 >> 1 & 1)) {
                  iVar13 = iVar13 + 1;
                }
              }
            }
            iVar23 = (int)uVar22 + 1;
            uVar22 = (ulonglong)iVar23;
          } while (iVar23 < 0x25);
          if (((iVar13 < 3) && (2 < iVar20)) || ((iVar20 < 3 && (iVar13 != iVar20))))
          goto LAB_003a8024;
        }
        mobyutil::MB_GetFirstMobyInGroup(&local_64,(uint)(byte)moby->group,'\0','\0');
        if (local_64 != (MobyInstance *)0x0) {
          dVar28 = 0.10000000149011612;
          do {
            if ((((moby != local_64) &&
                 (fVar8 = (moby->pos).y - (local_64->pos).y, fVar2 = (local_64->pos).x,
                 fVar9 = (moby->pos).x - fVar2,
                 (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8) <= dVar28)) &&
                (local_64->state == '\x01')) &&
               (pvVar6 = local_64->pVar, *(int *)((int)pvVar6 + 0xa0) == 0)) {
              (moby->pos).x = fVar2;
              (moby->pos).y = (local_64->pos).y;
              fVar2 = (local_64->pos).z;
              (moby->pos).z = fVar2;
              (moby->pos).w = (local_64->pos).w;
              (moby->pos).z = (float)((double)fVar2 + dVar27);
              *(MobyInstance **)((int)pvVar6 + 0xa0) = moby;
              *(MobyInstance **)((int)pvVar5 + 0xa4) = local_64;
              *(undefined4 *)((int)pvVar5 + 0xa0) = 0;
              moby->state = '\x01';
              moby->enabled = '\x01';
              uVar26 = *(uint *)((int)pvVar5 + 0xac);
              puVar7 = moby->pClass->collision;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
              moby->collision = puVar7;
              *(uint *)((int)pvVar5 + 0xac) = uVar26 | 4;
              break;
            }
            mobyutil::MB_GetNextMobyInGroup(&local_64,local_64,'\0','\0');
          } while (local_64 != (MobyInstance *)0x0);
        }
        if (moby->state != '\x01') {
          dVar27 = (double)mobyutil::GetGroundZ(uVar25,lVar12 + 0x10,0);
          moby->state = '\x01';
          *(undefined4 *)((int)pvVar5 + 0xa0) = 0;
          *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
          MVar4 = moby->modeBits;
          (moby->pos).z = (float)dVar27;
          moby->enabled = '\x01';
          puVar7 = moby->pClass->collision;
          moby->modeBits =
               MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                        HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
               CAN_BE_AUTO_TARGETED;
          moby->collision = puVar7;
        }
      }
    }
  }
  else if (uVar1 == '\x05') {
    bVar19 = moby->setByGroup;
    if (bVar19 == 0) {
      auVar29 = ZEXT416(0xffffffff);
      auVar30 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = ZEXT416(0);
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x30,0x3a7320);
      auVar32 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = ZEXT416(1);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar31);
      auVar32 = ZEXT416(3);
      auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xfffffff0);
      auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar35 = vectorRotateLeftIntegerWord(auVar33,auVar34);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = vectorMultiplySumSignedHalfWordModulo
                          (auVar32,auVar35,
                           auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
      auVar29 = vectorMultiplyOddUnsignedHalfWord(auVar32,auVar33);
      auVar33 = vectorShiftLeftIntegerWord(auVar31,auVar34);
      auVar31._0_4_ = auVar33._0_4_ + auVar29._0_4_;
      auVar31._8_8_ = auVar29._8_8_;
      auVar31._4_4_ = auVar33._4_4_ + auVar29._4_4_;
      auVar32._0_8_ = auVar31._0_8_;
      auVar32._12_4_ = auVar29._12_4_;
      auVar32._8_4_ = auVar33._8_4_ + auVar29._8_4_;
      auVar29._0_12_ = auVar32._0_12_;
      auVar29._12_4_ = auVar33._12_4_ + auVar32._12_4_;
      auVar29 = vectorSubtractUnsignedWordModulo
                          (auVar29,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
      auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xff;
      cVar17 = storeVectorElementByteIndexed
                         (auVar29 | auVar29 << 8 | auVar29 << 0x10 | auVar29 << 0x18 |
                          auVar29 << 0x20 | auVar29 << 0x28 | auVar29 << 0x30 | auVar29 << 0x38 |
                          auVar29 << 0x40 | auVar29 << 0x48 | auVar29 << 0x50 | auVar29 << 0x58 |
                          auVar29 << 0x60 | auVar29 << 0x68 | auVar29 << 0x70 | auVar29 << 0x78,0xbc
                          ,lVar12);
      moby->setByGroup = cVar17;
      *(undefined8 *)((int)pvVar5 + 0xb8) = *(undefined8 *)&moby->color;
      bVar19 = moby->setByGroup;
    }
    else {
      local_60 = (longlong)(int)(animationSpeed * 15.5);
      if ((int)(animationSpeed * 15.5) < (int)(uint)bVar19 && iVar13 != 0) {
        dVar27 = (double)mobyutil::MB_randRangeFloat(5.0,15.0);
        bVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
        moby->setByGroup = bVar19;
      }
    }
    dVar27 = (double)animationSpeed;
    dVar28 = 60.5;
    uVar21 = (uint)bVar19;
    uVar26 = (uint)(dVar27 * 60.5);
    if ((uVar21 - ((int)uVar21 / (int)uVar26) * uVar26 == uVar26 - 3) ||
       (uVar26 = (uint)(dVar27 * 13.5), uVar21 == uVar26)) {
      local_60 = (longlong)(int)uVar26;
      sound::PlayMobySound(1,0x20,moby);
      bVar19 = moby->setByGroup;
      dVar27 = (double)animationSpeed;
    }
    uVar26 = (uint)bVar19;
    local_60 = (longlong)(int)(dVar27 * 40.5);
    if (((int)(dVar27 * 40.5) <
         (int)(uVar26 - ((int)uVar26 / (int)(dVar27 * dVar28)) * (int)(dVar27 * dVar28))) ||
       (local_60 = (longlong)(int)(dVar27 * 15.5), (int)uVar26 < (int)(dVar27 * 15.5))) {
      mobyfunc::SetColorOfMoby(moby,200,0x40,0x40);
      uVar26 = (uint)(byte)moby->setByGroup;
    }
    else {
      uVar25 = *(undefined8 *)((int)pvVar5 + 0xb8);
      moby->color = (int)((ulonglong)uVar25 >> 0x20);
      moby->light = (int)uVar25;
    }
    cVar17 = (char)uVar26;
    if ((uVar26 == 1) || (hero::g_heroStateType == 0x16)) {
      uVar25 = *(undefined8 *)((int)pvVar5 + 0xb8);
      moby->color = (int)((ulonglong)uVar25 >> 0x20);
      moby->light = (int)uVar25;
      mobyupdate_helpers::M511_003a5468(lVar12,1,0);
      mobyupdate_helpers::M511_003a4da0(lVar12);
      cVar17 = moby->setByGroup;
    }
    moby->setByGroup = cVar17 + -1;
  }
  else if (uVar1 == '\x04') {
    iVar13 = fastfunc::FastDecTimerS8(lVar12 + 0xbc);
    if (iVar13 != 0) {
      moby->state = '\x01';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
  }
  else if (uVar1 == '\x03') {
    if ((moby->oClass == EXPLOSIVE_CRATE) &&
       (local_60 = (longlong)(int)(animationSpeed * 20.5),
       (int)(uint)*(byte *)((int)pvVar5 + 0xca) <= (int)(animationSpeed * 20.5))) {
      dVar28 = 2.0;
      dVar27 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pvVar5 + 0xca));
      dVar27 = (double)(float)(dVar27 / (double)(animationSpeed * 20.0));
      collproc::CollMobySphere((double)(float)(dVar27 * dVar28),local_c0);
      collproc::CollMobySphere
                ((double)(float)(dVar27 * 3.0),local_c0,&hero::g_heroMtx,0x10,g_heroMobyPtr,local_a0
                );
      *(char *)((int)pvVar5 + 0xca) = *(char *)((int)pvVar5 + 0xca) + '\x01';
    }
    else {
      if (*(char *)((int)pvVar5 + 200) == '\0') {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      sVar3._0_1_ = moby->field76_0xb4;
      sVar3._1_1_ = moby->field77_0xb5;
      moby->collision = (ushort *)0x0;
      moby->enabled = '\0';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | DISABLED;
      if (1 < sVar3) {
        moby->field76_0xb4 = '\0';
        moby->field77_0xb5 = '\x01';
      }
      moby->state = '\x06';
      if (Level == Veldin2) {
        uVar18 = mobyutil::MB_randRange(300,0x2d0);
      }
      else {
        uVar18 = mobyutil::MB_randRange(0x1e,0x3c);
      }
      *(undefined1 *)((int)pvVar5 + 0xc9) = uVar18;
    }
  }
  else if (uVar1 == '\x02') {
    cVar17 = moby->setByGroup;
    moby->setByGroup = cVar17 + -1;
    if (cVar17 == '\0') {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x01') {
    MVar15 = moby->oClass;
    if ((MVar15 == EXPLOSIVE_CRATE) &&
       ((((DAT_00969f20 == moby || (DAT_00969f1c == moby)) ||
         ((g_standingOnMoby == moby && (g_framesNotGrounded == 0)))) ||
        ((DAT_0096a1d8 == moby || (bVar16)))))) {
      moby->state = '\x05';
      moby->setByGroup = '\0';
    }
    else if ((iVar13 != 0) && (0 < *(int *)(iVar13 + 0x2c))) {
      bVar16 = true;
      if ((MVar15 == METAL_CRATE) && ((*(uint *)(iVar13 + 0x24) & 0x20000) == 0)) {
        bVar16 = false;
      }
      if (MVar15 == EXPLOSIVE_CRATE) {
        cVar17 = '\x01';
        moby->state = '\x05';
        if ((*(uint *)(iVar13 + 0x24) & 0x20000) == 0) {
          dVar27 = (double)mobyutil::MB_randRangeFloat(5.0,15.0);
          cVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
        }
        moby->setByGroup = cVar17;
        bVar16 = false;
        *(undefined8 *)((int)pvVar5 + 0xb8) = *(undefined8 *)&moby->color;
        MVar15 = moby->oClass;
      }
      uVar22 = (ulonglong)MVar15;
      uVar26 = (uint)MVar15;
      if ((short)MVar15 < 0x1fe && 0x1fa < (short)MVar15) {
        uVar21 = *(uint *)(iVar13 + 0x24);
        if ((uVar21 & 0x20000) != 0) {
          uVar22 = 0x1fe;
          moby->oClass = GRAB_HELICOPTER|MACHINEGUN_TURRET_001E;
        }
        if (local_70 == 3) {
          uVar22 = 0x1fe;
          moby->oClass = GRAB_HELICOPTER|MACHINEGUN_TURRET_001E;
        }
        uVar26 = (uint)uVar22;
        if ((((uVar21 & 0x100000) != 0) || ((uVar21 & 0x400000) != 0)) || (local_6c == 0xb4)) {
          lVar24 = uVar22 + 1 +
                   (0x1fe - ((longlong)(short)uVar22 + 1) >> 0x3f & 0x1fe - (uVar22 + 1));
          uVar26 = (uint)lVar24;
          moby->oClass = (MOBY_OCLASSES)lVar24;
        }
        if ((uVar26 & 0xffff) != 0x1fe) {
          MVar15 = (short)uVar26 + 1;
          moby->oClass = MVar15;
          bVar19 = (&MobyClassLookup)[(short)MVar15];
          moby->mClass = bVar19;
          moby->pClass = MobyClasses[bVar19];
          mobyfunc::UpdateMobyFrameData(moby);
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          moby->state = '\x02';
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = loadVectorLeftIndexed(8,0x3a7320);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = vectorMultiplyAddFloatingPoint
                              (auVar32,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                               ,auVar30);
          auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xff;
          cVar17 = storeVectorElementByteIndexed
                             (auVar29 | auVar29 << 8 | auVar29 << 0x10 | auVar29 << 0x18 |
                              auVar29 << 0x20 | auVar29 << 0x28 | auVar29 << 0x30 | auVar29 << 0x38
                              | auVar29 << 0x40 | auVar29 << 0x48 | auVar29 << 0x50 |
                              auVar29 << 0x58 | auVar29 << 0x60 | auVar29 << 0x68 | auVar29 << 0x70
                              | auVar29 << 0x78,0xbc,lVar12);
          moby->setByGroup = cVar17;
          goto LAB_003a8024;
        }
      }
      if (bVar16) {
        mobyupdate_helpers::M511_003a5468
                  (lVar12,(ulonglong)(LZCOUNT((uVar26 & 0xffff) - 0x1f9) << 0x20) >> 0x25,iVar13);
        if (*(char *)((int)pvVar5 + 200) == '\0') {
          mobyupdate_helpers::M511_003a4da0(lVar12);
        }
        else if ((*(int *)(iVar13 + 0x20) == 0) ||
                ((sVar3 = *(short *)(*(int *)(iVar13 + 0x20) + 0xa6), sVar3 != 0x2cd &&
                 (sVar3 != 0x22c)))) {
          mobyupdate_helpers::M511_003a4da0(lVar12);
        }
        else {
          cVar17 = moby->field76_0xb4;
          cVar10 = moby->field77_0xb5;
          moby->field76_0xb4 = '\0';
          moby->field77_0xb5 = '\0';
          mobyupdate_helpers::M511_003a4da0(lVar12);
          moby->field76_0xb4 = cVar17;
          moby->field77_0xb5 = cVar10;
        }
      }
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar5 + 0x4c) = 0;
    LVar11 = Level;
    *(undefined4 *)((int)pvVar5 + 0x48) = 0;
    *(undefined4 *)((int)pvVar5 + 0x44) = 0;
    *(undefined4 *)((int)pvVar5 + 0x40) = 0;
    if (((LVar11 == Veldin2) && (moby->oClass == AMMO_CRATE)) &&
       (*(char *)((int)pvVar5 + 200) != '\0')) {
      moby->collision = (ushort *)0x0;
      moby->state = '\x06';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    }
    else {
      moby->state = '\x01';
    }
    uVar26 = *(uint *)((int)pvVar5 + 0xac);
    *(undefined4 *)((int)pvVar5 + 0xa8) = 0;
    if ((uVar26 & 1) == 0) {
      mobyupdate_helpers::M511_003a6388(lVar12);
      uVar26 = *(uint *)((int)pvVar5 + 0xac);
    }
    MVar15 = moby->oClass;
    *(uint *)((int)pvVar5 + 0xac) = uVar26 | 0x14;
    if (MVar15 == AMMO_CRATE) {
      *(undefined2 *)((int)pvVar5 + 0xc6) = 100;
    }
    else if (MVar15 == NANOTECH_CRATE) {
      Spawn_Moby806_NanotechBall(lVar12);
    }
  }
LAB_003a8024:
  moby->damage = -1;
  return;
}



//==== 003a8068  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M1340_003a8068(void)
// callers(0): 
// callees(1): 0010af88 mobyutil::MB_isCrate

int mobyupdate_helpers::M1340_003a8068(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar1 = *(int *)(param_1 + 0x78);
  bVar5 = mobyutil::MB_isCrate(param_1);
  if (bVar5) {
    iVar2 = *(int *)(iVar1 + 0xa0);
    iVar6 = 0;
    if (iVar2 != 0) {
      dVar8 = 0.5;
      dVar9 = 0.05000000074505806;
      do {
        iVar3 = iVar2;
        dVar7 = (double)*(float *)(iVar1 + 0xb0);
        fVar4 = *(float *)(iVar3 + 0x18) - *(float *)(param_1 + 0x18);
        if (fVar4 < (float)(dVar7 * dVar8)) {
          return iVar6;
        }
        if ((float)(dVar7 + dVar9) < fVar4) {
          return iVar6;
        }
        bVar5 = mobyutil::MB_isCrate(param_1);
        if (!bVar5) {
          return iVar6;
        }
        iVar6 = iVar6 + 1;
        iVar2 = *(int *)(*(int *)(iVar3 + 0x78) + 0xa0);
        param_1 = iVar3;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}



//==== 003a8148  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1340_003a8148(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1340_003a8148(void)

{
  DAT_0084360c = 0x10000;
  return;
}



//==== 003a8168  ns=mobyupdate_helpers  size=0xe4
// sig: undefined M1340_003a8168(void)
// callers(1): 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10
// callees(1): 00500ca4 fastfunc::FastEulerToMtx1

void mobyupdate_helpers::M1340_003a8168(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar3 + 0x130) != 0) || (*(int *)(iVar3 + 0x134) != 0)) {
    fastfunc::FastEulerToMtx1(&local_50,param_1 + 0x40);
    fVar1 = *(float *)(iVar3 + 0x130);
    fVar5 = local_50 * local_4c - local_4c * local_50;
    fVar4 = (local_48 - 1.0) * local_50 - local_50 * local_48;
    fVar6 = local_4c * local_48 - (local_48 - 1.0) * local_4c;
    fVar2 = *(float *)(iVar3 + 0x134);
    param_2[2] = (fVar6 * local_4c - fVar4 * local_50) * fVar2 + fVar5 * fVar1 + param_2[2];
    *param_2 = (fVar4 * local_48 - fVar5 * local_4c) * fVar2 + fVar6 * fVar1 + *param_2;
    param_2[1] = (fVar5 * local_50 - fVar6 * local_48) * fVar2 + fVar4 * fVar1 + param_2[1];
  }
  return;
}



//==== 003a82b8  ns=mobyupdate_unsorted  size=0x17ec
// sig: undefined UpdateMoby_a_lot_10(MobyInstance * moby)
// callers(8): 003968d8 mobyupdate_unsorted::UpdateMoby_a_lot_3; 003b5d10 mobyupdate_unsorted::UpdateMoby_557_Hoverboat; 00407f28 mobyupdate_unsorted::UpdateMoby_660; 004091a0 mobyupdate_unsorted::UpdateMoby_666; 0040c11c mobyupdate_unsorted::UpdateMoby_670; 00415f18 mobyupdate_helpers::M688_00415f18; 00476cb0 mobyupdate_helpers::M822_00476cb0; 00477b98 mobyupdate_unsorted::UpdateMoby_822
// callees(32): 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000ff190 mobyutil::MB_DeltAngSpeed; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0010675c mobyutil::MB_damage; 0010de78 mobyutil::MB_WrapRot; 0010e030 mobyutil::MB_genericExplosion; 001129d0 mobyutil::MB_ScaledVecWrapper; 00123048 partupd::SpawnPart_10; 00136724 path::InitFollower; 001367d0 path::PathFindClosestPnt; 00139ef8 path::PathFollower_WrapIdx; 00139f58 path::PathFollower_Advance; 00139fc0 path::Spline_CalcTan; 0013a290 path::Spline_Hermite; 0013a440 path::Spline_CalcLen; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 003a8168 mobyupdate_helpers::M1340_003a8168; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub; 005cd098 libc::printf; 005e8338 FUN_005e8338
// strings: 006569d0: 'WARNING moby class %d instance %d has no path!\n'

/* Moby 42
   Moby 51
   Moby 60
   Moby 330
   Moby 797
   Moby 845
   Moby 1330
   Moby 1339
   Moby 1340 */

void mobyupdate_unsorted::UpdateMoby_a_lot_10(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  MOBY_OCLASSES MVar8;
  short sVar9;
  void *pvVar10;
  void *pvVar11;
  u16 *puVar12;
  Spline *pSVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  Vec4 *pVVar18;
  float *pfVar19;
  MobyInstance *pMVar20;
  bool bVar21;
  longlong lVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  PathFollower *follower;
  uint uVar27;
  int iVar28;
  double dVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar44 [16];
  float fVar45;
  float local_170;
  float local_16c;
  float local_168;
  f32 local_164;
  MobyInstance *local_e0 [2];
  longlong local_d8;
  
  lVar25 = (longlong)(int)moby;
  uVar24 = ZEXT48(&stack0x00000000);
  lVar22 = uVar24 - 0xc0;
  puVar23 = (undefined4 *)lVar22;
  puVar23[3] = in_vr31_32_3;
  puVar23[2] = in_vr31_32_2;
  puVar23[1] = in_vr31_32_1;
  *puVar23 = in_vr31_32_0;
  bVar21 = false;
  pvVar10 = moby->pVar;
  uVar31 = ZEXT48(pvVar10);
  if (moby->oClass != TRAIN_LOCOMOTIVE) {
    fastfunc::FastIntToDouble(moby->drawDistance);
    iVar26 = mobyutil::MB_ScaledVecWrapper(lVar25);
    if (iVar26 == -1) {
      bVar21 = true;
    }
  }
  if (pvVar10 == (void *)0x0) {
    return;
  }
  if (DAT_010c926c != 0) {
    return;
  }
  if ((moby->group != 0xff) && (moby->state != '\x03' && moby->state != '\0')) {
    mobyutil::MB_GetFirstMobyInGroup(local_e0,(uint)(byte)moby->group,'\0','\0');
    if (local_e0[0] == moby) {
      while (pMVar20 = local_e0[0], local_e0[0] != (MobyInstance *)0x0) {
        fastfunc::FastIntToDouble(local_e0[0]->drawDistance);
        iVar26 = mobyutil::MB_ScaledVecWrapper(pMVar20);
        if (iVar26 != -1) goto LAB_003a84a4;
        mobyutil::MB_GetNextMobyInGroup(local_e0,local_e0[0],'\0','\0');
      }
      mobyutil::MB_GetFirstMobyInGroup(local_e0,(uint)(byte)moby->group,'\0','\0');
      if (local_e0[0] != (MobyInstance *)0x0) {
        auVar44 = loadVectorLeftIndexed(lVar22,0x3a824c);
        auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
        do {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          local_e0[0]->state = '\x03';
          auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar42);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x11c,ZEXT48(local_e0[0]->pVar));
          *(undefined2 *)((int)local_e0[0]->pVar + 0x11c) = uVar15;
          mobyutil::MB_GetNextMobyInGroup(local_e0,local_e0[0],'\0','\0');
        } while (local_e0[0] != (MobyInstance *)0x0);
      }
    }
  }
LAB_003a84a4:
  MVar8 = moby->oClass;
  if ((((((MVar8 == BATALIA_COMMANDO || MVar8 == 0x33) || (MVar8 == HOVERBOARD_RING)) ||
        (MVar8 == HOVERBOARD_BOOST_PAD)) &&
       ((((worldUpdateTime ^ (int)moby >> 8) & 7) == 0 && (*(short *)((int)pvVar10 + 0x13a) < 1))))
      && (moby->state != '\0')) &&
     (iVar26 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar10 + 0x11e)), iVar26 == 0))
  {
    iVar26 = sound::PlayMobySound(0,4,moby);
    *(short *)((int)pvVar10 + 0x11e) = (short)iVar26;
  }
  MVar8 = moby->oClass;
  if (MVar8 != MINE_004A) {
    if ((MVar8 == SUCKCANNON_0044) || (MVar8 == 0x40)) {
      if (*(short *)((int)pvVar10 + 0x138) == -1) {
        iVar26 = mobyutil::MB_randRange
                           ((longlong)*(short *)((int)pvVar10 + 0x13c),
                            (longlong)*(short *)((int)pvVar10 + 0x13c) +
                            (longlong)*(short *)((int)pvVar10 + 0x13e));
        iVar26 = (int)(animationSpeed * ((float)(longlong)iVar26 + 0.5));
        local_d8 = (longlong)iVar26;
        *(short *)((int)pvVar10 + 0x138) = (short)iVar26;
      }
      else {
        iVar26 = fastfunc::FastDecTimerS16(uVar31 + 0x138);
        if (iVar26 != 0) {
          uVar27 = mobyutil::MB_randInt(100);
          sound::PlayMobySound(((uint)((LZCOUNT(-(uVar27 & 1)) << 0x3a) >> 0x3f) & 1) + 1,0,moby);
          iVar26 = mobyutil::MB_randRange
                             ((longlong)*(short *)((int)pvVar10 + 0x13c),
                              (longlong)*(short *)((int)pvVar10 + 0x13c) +
                              (longlong)*(short *)((int)pvVar10 + 0x13e));
          iVar26 = (int)(animationSpeed * ((float)(longlong)iVar26 + 0.5));
          local_d8 = (longlong)iVar26;
          *(short *)((int)pvVar10 + 0x138) = (short)iVar26;
        }
      }
      goto LAB_003a87d8;
    }
    if ((MVar8 != 0x3c) && (MVar8 != 0x33)) goto LAB_003a87d8;
  }
  if (*(short *)((int)pvVar10 + 0x138) == -1) {
    iVar26 = mobyutil::MB_randRange
                       ((longlong)*(short *)((int)pvVar10 + 0x13c),
                        (longlong)*(short *)((int)pvVar10 + 0x13c) +
                        (longlong)*(short *)((int)pvVar10 + 0x13e));
    iVar26 = (int)(animationSpeed * ((float)(longlong)iVar26 + 0.5));
    local_d8 = (longlong)iVar26;
    *(short *)((int)pvVar10 + 0x138) = (short)iVar26;
  }
  else {
    iVar26 = fastfunc::FastDecTimerS16(uVar31 + 0x138);
    if (iVar26 != 0) {
      fVar45 = (moby->pos).y - GameCamera.posY;
      fVar16 = (moby->pos).x - GameCamera.posX;
      fVar17 = (moby->pos).z - GameCamera.posZ;
      if (SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar45 * fVar45) < 30.0) {
        sound::PlayMobySound(1,0,moby);
      }
      iVar26 = mobyutil::MB_randRange
                         ((longlong)*(short *)((int)pvVar10 + 0x13c),
                          (longlong)*(short *)((int)pvVar10 + 0x13c) +
                          (longlong)*(short *)((int)pvVar10 + 0x13e));
      iVar26 = (int)(animationSpeed * ((float)(longlong)iVar26 + 0.5));
      local_d8 = (longlong)iVar26;
      *(short *)((int)pvVar10 + 0x138) = (short)iVar26;
    }
  }
LAB_003a87d8:
  bVar3 = moby->state;
  follower = (PathFollower *)((int)pvVar10 + 0x60);
  if (bVar3 < 2) {
    if (-1 < (int)(uint)bVar3) {
      if (bVar3 == 0) {
        if (*(int *)((int)pvVar10 + 0x74) == -1) {
          uVar27 = (int)moby - (int)MobyInstance;
          local_d8 = (longlong)
                     (int)(((int)uVar27 >> 8) + (uint)((int)uVar27 < 0 && (uVar27 & 0xff) != 0));
          MVar8 = moby->oClass;
          uVar32 = fastfunc::FastDoubleToInt((double)local_d8);
          libc::printf("WARNING moby class %d instance %d has no path!\n",MVar8,uVar32);
        }
        else {
          pSVar13 = Splines[*(int *)((int)pvVar10 + 0x74)];
          pVVar18 = pSVar13->points + pSVar13->cnt + -1;
          fVar45 = pSVar13->points[0].y - pVVar18->y;
          fVar16 = pSVar13->points[0].x - pVVar18->x;
          fVar17 = pSVar13->points[0].z - pVVar18->z;
          if (SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar45 * fVar45) < 0.5) {
            pSVar13->cnt = pSVar13->cnt + -1;
          }
        }
        moby->updateDistance = -1;
        *(undefined2 *)((int)pvVar10 + 0x11e) = 0xffff;
        uVar27 = (int)*(uint *)((int)pvVar10 + 0x130) >> 0x1f;
        if (0x43fa0000 < (int)((uVar27 >> 1 ^ *(uint *)((int)pvVar10 + 0x130)) - uVar27)) {
          dVar29 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
          *(float *)((int)pvVar10 + 0x130) =
               (float)(dVar29 * (double)*(float *)((int)pvVar10 + 0x130)) * 0.001;
        }
        uVar27 = (int)*(uint *)((int)pvVar10 + 0x134) >> 0x1f;
        if (0x43fa0000 < (int)((uVar27 >> 1 ^ *(uint *)((int)pvVar10 + 0x134)) - uVar27)) {
          dVar29 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
          *(float *)((int)pvVar10 + 0x134) =
               (float)(dVar29 * (double)*(float *)((int)pvVar10 + 0x134)) * 0.001;
        }
        if (*(int *)((int)pvVar10 + 0x74) == -1) {
          moby->state = '\x02';
        }
        else {
          uVar27 = (int)moby - (int)MobyInstance;
          uVar27 = ((int)uVar27 >> 8) + (uint)((int)uVar27 < 0 && (uVar27 & 0xff) != 0);
          uVar27 = ((int)uVar27 >> 1) + (uint)((int)uVar27 < 0 && (uVar27 & 1) != 0);
          lVar22 = (longlong)((int)uVar27 / 7 + ((int)uVar27 >> 0x1f)) + (ulonglong)(uVar27 >> 0x1f)
          ;
          dVar29 = (double)(lVar22 * 8);
          *(char *)((int)pvVar10 + 0x121) = (char)uVar27 - (SUB81(dVar29,0) - (char)lVar22);
          path::InitFollower(follower);
          if (*(char *)((int)pvVar10 + 0x65) == '\0') {
            uVar31 = (ulonglong)*(uint *)((int)pvVar10 + 0x60);
            if ((int)*(uint *)((int)pvVar10 + 0x60) < 1) {
              iVar26 = path::PathFindClosestPnt
                                 (0.0,(Vec4 *)&moby->pos,*(Spline **)((int)pvVar10 + 0x70));
              uVar31 = (ulonglong)iVar26;
              *(int *)((int)pvVar10 + 0x60) = iVar26;
              iVar28 = 0;
              if (-1 < *(char *)((int)pvVar10 + 100)) {
                iVar28 = **(int **)((int)pvVar10 + 0x70) + -1;
              }
              if (iVar26 == iVar28) {
                uVar31 = 0;
                *(undefined4 *)((int)pvVar10 + 0x60) = 0;
              }
            }
            iVar26 = *(int *)((int)pvVar10 + 0x70) + (int)((uVar31 & 0xffffffff) << 4);
            fVar45 = (moby->pos).y - *(float *)(iVar26 + 0x14);
            fVar17 = (moby->pos).x - *(float *)(iVar26 + 0x10);
            fVar16 = (moby->pos).z - *(float *)(iVar26 + 0x18);
            iVar26 = *(int *)((int)pvVar10 + 0x70) + (int)(uVar31 << 4);
            *(float *)((int)pvVar10 + 0x6c) =
                 SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar45 * fVar45);
            dVar40 = (double)FUN_005e8338((double)(*(float *)(iVar26 + 0x10) - (moby->pos).x),
                                          (double)(*(float *)(iVar26 + 0x14) - (moby->pos).y));
            *(float *)((int)pvVar10 + 0x78) = (float)dVar40;
            *(undefined4 *)((int)pvVar10 + 0x68) = 0;
            *(undefined4 *)((int)pvVar10 + 0x7c) = 0;
            *(undefined1 *)((int)pvVar10 + 0x65) = 2;
          }
          iVar26 = *(int *)((int)pvVar10 + 0x70) + *(int *)((int)pvVar10 + 0x60) * 0x10;
          *(undefined4 *)((int)pvVar10 + 0xe0) = *(undefined4 *)(iVar26 + 0x10);
          *(undefined4 *)((int)pvVar10 + 0xe4) = *(undefined4 *)(iVar26 + 0x14);
          *(undefined4 *)((int)pvVar10 + 0xe8) = *(undefined4 *)(iVar26 + 0x18);
          *(undefined4 *)((int)pvVar10 + 0xec) = *(undefined4 *)(iVar26 + 0x1c);
          dVar36 = 1.0;
          *(undefined4 *)((int)pvVar10 + 0xf0) = 0x3f800000;
          path::Spline_CalcTan
                    (*(float *)((int)pvVar10 + 0xf4),*(float *)((int)pvVar10 + 0xf8),
                     (Vec4 *)((int)pvVar10 + 0xa0),follower,0x3f800000,(float)dVar29,0);
          iVar26 = *(int *)((int)pvVar10 + 0x70) + *(int *)((int)pvVar10 + 0x60) * 0x10;
          uVar4 = *(undefined4 *)(iVar26 + 0x10);
          *(undefined4 *)((int)pvVar10 + 0xc0) = uVar4;
          uVar5 = *(undefined4 *)(iVar26 + 0x14);
          *(undefined4 *)((int)pvVar10 + 0xc4) = uVar5;
          uVar6 = *(undefined4 *)(iVar26 + 0x18);
          *(undefined4 *)((int)pvVar10 + 200) = uVar6;
          uVar7 = *(undefined4 *)(iVar26 + 0x1c);
          *(undefined4 *)((int)pvVar10 + 0xb0) = uVar4;
          *(undefined4 *)((int)pvVar10 + 0xcc) = uVar7;
          *(undefined4 *)((int)pvVar10 + 0xb4) = uVar5;
          *(undefined4 *)((int)pvVar10 + 0xb8) = uVar6;
          *(undefined4 *)((int)pvVar10 + 0xbc) = uVar7;
          dVar40 = 0.0;
          (moby->rotation).x = 0.0;
          dVar29 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar10 + 0xa0) *
                                                     *(float *)((int)pvVar10 + 0xa0) +
                                                     *(float *)((int)pvVar10 + 0xa4) *
                                                     *(float *)((int)pvVar10 + 0xa4)),
                                        (double)*(float *)((int)pvVar10 + 0xa8));
          (moby->rotation).y = (float)-dVar29;
          dVar29 = (double)FUN_005e8338((double)*(float *)((int)pvVar10 + 0xa0),
                                        (double)*(float *)((int)pvVar10 + 0xa4));
          (moby->rotation).z = (float)dVar29;
          *(undefined4 *)((int)pvVar10 + 0x104) = 0;
          *(undefined4 *)((int)pvVar10 + 0x10c) = 0;
          (moby->pos).x = *(f32 *)((int)pvVar10 + 0xe0);
          (moby->pos).y = *(f32 *)((int)pvVar10 + 0xe4);
          (moby->pos).z = *(f32 *)((int)pvVar10 + 0xe8);
          (moby->pos).w = *(f32 *)((int)pvVar10 + 0xec);
          mobyupdate_helpers::M1340_003a8168(lVar25,lVar25 + 0x10);
          uVar27 = *(uint *)((int)pvVar10 + 300);
          uVar32 = 7;
          *(undefined1 *)((int)pvVar10 + 0x121) = 7;
          uVar31 = (ulonglong)((uint)((int)uVar27 >> 0x1f) >> 1 ^ uVar27) -
                   (longlong)((int)uVar27 >> 0x1f);
          if ((int)uVar31 < 0x40c90fdc) {
            uVar31 = (ulonglong)*(uint *)((int)pvVar10 + 0x124);
            if ((*(uint *)((int)pvVar10 + 0x124) != 0) &&
               (uVar31 = 0xffffffffbf800000, uVar27 == 0xbf800000)) {
              dVar29 = (double)mobyutil::MB_randRot();
              *(float *)((int)pvVar10 + 300) = (float)dVar29;
            }
          }
          else {
            *(float *)((int)pvVar10 + 300) = *(float *)((int)pvVar10 + 300) * 0.017453292;
          }
          *(undefined4 *)((int)pvVar10 + 0xd0) = *(undefined4 *)((int)pvVar10 + 0xc0);
          *(undefined4 *)((int)pvVar10 + 0xd4) = *(undefined4 *)((int)pvVar10 + 0xc4);
          *(undefined4 *)((int)pvVar10 + 0xd8) = *(undefined4 *)((int)pvVar10 + 200);
          *(undefined4 *)((int)pvVar10 + 0xdc) = *(undefined4 *)((int)pvVar10 + 0xcc);
          path::Spline_CalcLen
                    ((double)*(float *)((int)pvVar10 + 0xf4),(double)*(float *)((int)pvVar10 + 0xf8)
                     ,follower,uVar31,uVar32,(ulonglong)*(byte *)((int)pvVar10 + 0x120) & 0x20,
                     lVar25);
          if (((*(byte *)((int)pvVar10 + 0x120) & 0x1e) != 0) &&
             ((*(byte *)((int)pvVar10 + 0x120) & 1) == 0)) {
            uVar31 = 0;
            dVar29 = 0.5;
            do {
              if ((((((uint)*(byte *)((int)pvVar10 + 0x120) & 2 << ((uint)uVar31 & 0x3f)) != 0) &&
                   (iVar26 = *(int *)((int)pvVar10 + (int)((uVar31 & 0xffffffff) << 2) + 0x140),
                   iVar26 != -1)) &&
                  (pMVar20 = MobyInstance + iVar26, pMVar20 != (MobyInstance *)0x0)) &&
                 (pvVar11 = pMVar20->pVar, pvVar11 != (void *)0x0)) {
                uVar30 = (uVar31 & 0xfffffff) * 0x10 + (uVar24 - 0x120);
                *(uint *)((int)pvVar11 + 0x70) = *(uint *)((int)pvVar11 + 0x70) | 0x1000;
                mobyfunc::GetBonePosition(lVar25,uVar31,uVar30 & 0xffffffff);
                pfVar19 = (float *)uVar30;
                fVar16 = pfVar19[1] - (moby->pos).y;
                fVar17 = *pfVar19 - (moby->pos).x;
                fVar2 = pfVar19[2] - (moby->pos).z;
                fVar45 = pfVar19[3];
                dVar35 = (double)(fVar2 * fVar2 + fVar17 * fVar17 + fVar16 * fVar16);
                dVar37 = dVar40;
                dVar38 = dVar40;
                dVar34 = dVar40;
                if ((double)(float)SQRT(dVar35) != dVar40) {
                  dVar37 = 1.0 / SQRT(dVar35);
                  dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar37) *
                                                            dVar37 - dVar36) *
                                           (double)(float)(dVar37 * dVar29) + dVar37);
                  dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar37) *
                                                            dVar37 - dVar36) *
                                           (double)(float)(dVar37 * dVar29) + dVar37);
                  fVar1 = (float)(-(double)(float)((double)(float)(dVar35 * dVar37) * dVar37 -
                                                  dVar36) * (double)(float)(dVar37 * dVar29) +
                                 dVar37);
                  dVar37 = (double)(fVar17 * fVar1);
                  dVar38 = (double)(fVar16 * fVar1);
                  dVar34 = (double)(fVar2 * fVar1);
                }
                (pMVar20->pos).x = *pfVar19;
                (pMVar20->pos).y = pfVar19[1];
                (pMVar20->pos).z = pfVar19[2];
                (pMVar20->pos).w = pfVar19[3];
                *(float *)((int)pvVar11 + 0x80) = (float)dVar37;
                *(float *)((int)pvVar11 + 0x84) = (float)dVar38;
                *(float *)((int)pvVar11 + 0x88) = (float)dVar34;
                *(float *)((int)pvVar11 + 0x8c) = fVar45;
              }
              iVar26 = (uint)uVar31 + 1;
              uVar31 = (ulonglong)iVar26;
            } while (iVar26 < 4);
          }
          if (*(short *)((int)pvVar10 + 0x11c) < 1) {
            if ((Level == Kerwan) || (Level == Gaspar)) {
              *(undefined2 *)((int)pvVar10 + 0x13a) = 0;
            }
            moby->state = '\x01';
          }
          else {
            moby->state = '\x03';
          }
        }
      }
      else {
        dVar29 = 5.26354424712089e-315;
        uVar27 = (int)*(uint *)((int)pvVar10 + 0xf0) >> 0x1f;
        lVar22 = (longlong)(int)uVar27;
        dVar40 = 1.0;
        if (0x3f7fffff < (int)((uVar27 >> 1 ^ *(uint *)((int)pvVar10 + 0xf0)) - uVar27)) {
          *(float *)((int)pvVar10 + 0xf0) = *(float *)((int)pvVar10 + 0xf0) - 1.0;
          iVar26 = path::PathFollower_Advance(follower);
          *(undefined4 *)((int)pvVar10 + 0x90) = *(undefined4 *)((int)pvVar10 + 0xa0);
          *(undefined4 *)((int)pvVar10 + 0x94) = *(undefined4 *)((int)pvVar10 + 0xa4);
          *(undefined4 *)((int)pvVar10 + 0x98) = *(undefined4 *)((int)pvVar10 + 0xa8);
          *(undefined4 *)((int)pvVar10 + 0x9c) = *(undefined4 *)((int)pvVar10 + 0xac);
          path::Spline_CalcTan
                    (*(float *)((int)pvVar10 + 0xf4),*(float *)((int)pvVar10 + 0xf8),
                     (Vec4 *)((int)pvVar10 + 0xa0),follower,lVar22,(float)dVar29,1);
          *(undefined4 *)((int)pvVar10 + 0xb0) = *(undefined4 *)((int)pvVar10 + 0xc0);
          *(undefined4 *)((int)pvVar10 + 0xb4) = *(undefined4 *)((int)pvVar10 + 0xc4);
          *(undefined4 *)((int)pvVar10 + 0xb8) = *(undefined4 *)((int)pvVar10 + 200);
          *(undefined4 *)((int)pvVar10 + 0xbc) = *(undefined4 *)((int)pvVar10 + 0xcc);
          lVar22 = path::PathFollower_WrapIdx(follower,iVar26 + 1);
          iVar26 = *(int *)((int)pvVar10 + 0x70) + (int)(lVar22 << 4);
          *(undefined4 *)((int)pvVar10 + 0xc0) = *(undefined4 *)(iVar26 + 0x10);
          *(undefined4 *)((int)pvVar10 + 0xc4) = *(undefined4 *)(iVar26 + 0x14);
          *(undefined4 *)((int)pvVar10 + 200) = *(undefined4 *)(iVar26 + 0x18);
          *(undefined4 *)((int)pvVar10 + 0xcc) = *(undefined4 *)(iVar26 + 0x1c);
        }
        fVar45 = *(float *)((int)pvVar10 + 300);
        fVar16 = 3.1415925 - fVar45;
        if (fVar45 - (3.1415925 - fVar45) < 0.0) {
          fVar16 = fVar45;
        }
        fVar17 = -3.1415925 - fVar45;
        if ((-3.1415925 - fVar45) - fVar16 < 0.0) {
          fVar17 = fVar16;
        }
        fVar1 = fVar17 * fVar17;
        fVar16 = fVar1 * fVar1 * fVar17;
        fVar2 = fVar1 * fVar16;
        dVar38 = (double)(*(float *)((int)pvVar10 + 0x124) * DAT_0071f408 *
                          (fVar1 * fVar2 * 2.601887e-06 +
                          fVar2 * -0.0001980741 +
                          fVar16 * 0.0083330255 + fVar1 * fVar17 * -0.16666657 + fVar17) *
                          DAT_0071f408 + *(float *)((int)pvVar10 + 0xfc));
        dVar36 = 0.01745329238474369;
        dVar37 = (double)(float)(dVar38 / (double)*(float *)((int)pvVar10 + 0xbc));
        dVar29 = (double)fastfunc::FastWrapRot
                                   (fVar45,*(float *)((int)pvVar10 + 0x128) * DAT_0071f408 *
                                           0.017453292);
        *(float *)((int)pvVar10 + 300) = (float)dVar29;
        *(undefined4 *)((int)pvVar10 + 0xe0) = *(undefined4 *)((int)pvVar10 + 0xd0);
        *(undefined4 *)((int)pvVar10 + 0xe4) = *(undefined4 *)((int)pvVar10 + 0xd4);
        *(undefined4 *)((int)pvVar10 + 0xe8) = *(undefined4 *)((int)pvVar10 + 0xd8);
        *(undefined4 *)((int)pvVar10 + 0xec) = *(undefined4 *)((int)pvVar10 + 0xdc);
        path::Spline_Hermite
                  ((float)((double)*(float *)((int)pvVar10 + 0xf0) + dVar37),
                   (Vec4 *)((int)pvVar10 + 0xd0U),(Vec4 *)((int)pvVar10 + 0xb0U),
                   (Vec4 *)((int)pvVar10 + 0xc0U),(Vec4 *)((int)pvVar10 + 0x90U),
                   (Vec4 *)((int)pvVar10 + 0xa0U));
        if (((*(byte *)((int)pvVar10 + 0x120) & 0x40) == 0) &&
           (fVar45 = *(float *)((int)pvVar10 + 0xe4) - *(float *)((int)pvVar10 + 0xd4),
           fVar16 = *(float *)((int)pvVar10 + 0xe0) - *(float *)((int)pvVar10 + 0xd0),
           fVar17 = *(float *)((int)pvVar10 + 0xe8) - *(float *)((int)pvVar10 + 0xd8),
           dVar29 = (double)SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar45 * fVar45), dVar29 != 0.0
           )) {
          dVar37 = (double)(float)(dVar37 * (double)(float)(dVar38 / dVar29));
          path::Spline_Hermite
                    ((float)((double)*(float *)((int)pvVar10 + 0xf0) + dVar37),
                     (Vec4 *)((int)pvVar10 + 0xd0U),(Vec4 *)((int)pvVar10 + 0xb0U),
                     (Vec4 *)((int)pvVar10 + 0xc0U),(Vec4 *)((int)pvVar10 + 0x90U),
                     (Vec4 *)((int)pvVar10 + 0xa0U));
        }
        if (bVar21) {
          (moby->rotation).w = 0.0;
          (moby->rotation).z = 0.0;
          (moby->rotation).y = 0.0;
          (moby->rotation).x = 0.0;
          dVar29 = (double)FUN_005e8338((double)(*(float *)((int)pvVar10 + 0xd0) -
                                                *(float *)((int)pvVar10 + 0xe0)),
                                        (double)(*(float *)((int)pvVar10 + 0xd4) -
                                                *(float *)((int)pvVar10 + 0xe4)));
          (moby->rotation).z = (float)dVar29;
        }
        else {
          local_d8 = (longlong)(int)*(short *)((int)pvVar10 + 0x122);
          dVar38 = (double)(float)((double)local_d8 * dVar36);
          fastfunc::FastDiffRots((double)(moby->rotation).z,dVar38);
          dVar29 = (double)FUN_005e8338((double)(*(float *)((int)pvVar10 + 0xd0) -
                                                *(float *)((int)pvVar10 + 0xe0)),
                                        (double)(*(float *)((int)pvVar10 + 0xd4) -
                                                *(float *)((int)pvVar10 + 0xe4)));
          uVar32 = fastfunc::FastWrapRot((float)dVar29,(float)dVar38);
          dVar29 = (double)fastfunc::FastDiffRots(uVar32,(double)(moby->rotation).z);
          fVar45 = (float)((double)((float)(dVar40 / (double)*(float *)((int)pvVar10 + 0x110)) *
                                   DAT_0071f408) * dVar29);
          dVar39 = (double)fVar45;
          dVar29 = (double)fastfunc::FastWrapRot(fVar45,(moby->rotation).z);
          (moby->rotation).z = (float)dVar29;
          fVar45 = *(float *)((int)pvVar10 + 0xd4) - *(float *)((int)pvVar10 + 0xe4);
          fVar16 = *(float *)((int)pvVar10 + 0xd0) - *(float *)((int)pvVar10 + 0xe0);
          dVar29 = (double)FUN_005e8338((double)SQRT(fVar16 * fVar16 + fVar45 * fVar45),
                                        (double)(*(float *)((int)pvVar10 + 0xd8) -
                                                *(float *)((int)pvVar10 + 0xe8)));
          dVar38 = (double)*(float *)((int)pvVar10 + 0x108);
          dVar35 = 10.0;
          dVar34 = 5.0;
          dVar29 = (double)mobyutil::MB_DeltAngSpeed
                                     ((double)(moby->rotation).y,-dVar29,
                                      (double)((float)((double)(float)(dVar38 * 10.0) * dVar36) *
                                              DAT_0071f418),
                                      (double)((float)((double)(float)(dVar38 * 5.0) * dVar36) *
                                              DAT_0071f418),
                                      (double)((float)(dVar38 * dVar36) * mobyutil::g_FrameTime));
          (moby->rotation).y = (float)dVar29;
          fVar45 = mobyutil::MB_WrapRot((float)(dVar39 * (double)*(float *)((int)pvVar10 + 0x114)));
          dVar29 = (double)fastfunc::FastDiffRots((double)(moby->rotation).x,(double)fVar45);
          fVar45 = mobyutil::MB_WrapRot((float)(dVar29 * (double)*(float *)((int)pvVar10 + 0x118)));
          dVar29 = (double)*(float *)((int)pvVar10 + 0x100);
          dVar29 = (double)mobyutil::MB_DeltAngSpeed
                                     ((double)(moby->rotation).x,(double)fVar45,
                                      (double)((float)((double)(float)(dVar29 * dVar35) * dVar36) *
                                              DAT_0071f418),
                                      (double)((float)((double)(float)(dVar29 * dVar34) * dVar36) *
                                              DAT_0071f418),
                                      (double)((float)(dVar29 * dVar36) * mobyutil::g_FrameTime));
          (moby->rotation).x = (float)dVar29;
        }
        *(float *)((int)pvVar10 + 0xf0) = (float)((double)*(float *)((int)pvVar10 + 0xf0) + dVar37);
        (moby->pos).x = *(f32 *)((int)pvVar10 + 0xe0);
        (moby->pos).y = *(f32 *)((int)pvVar10 + 0xe4);
        (moby->pos).z = *(f32 *)((int)pvVar10 + 0xe8);
        (moby->pos).w = *(f32 *)((int)pvVar10 + 0xec);
        if (!bVar21) {
          mobyupdate_helpers::M1340_003a8168(lVar25,lVar25 + 0x10);
        }
        if ((*(byte *)((int)pvVar10 + 0x120) & 0x1f) != 0) {
          uVar27 = 0;
          iVar26 = 0;
          dVar38 = 0.0;
          dVar37 = 0.5;
          dVar36 = 0.01600000075995922;
          dVar29 = 0.03099999949336052;
          uVar30 = uVar31;
          do {
            if (((uint)*(byte *)((int)pvVar10 + 0x120) & 1 << (uVar27 & 0x3f)) != 0) {
              mobyfunc::GetBonePosition(lVar25,iVar26,uVar24 - 0x170);
              iVar26 = iVar26 + 1;
              fVar45 = local_170 - (moby->pos).x;
              fVar16 = local_16c - (moby->pos).y;
              fVar17 = local_168 - (moby->pos).z;
              if ((*(byte *)((int)pvVar10 + 0x120) & 1) == 0) {
                iVar28 = *(int *)((int)uVar30 + 0x13c);
                if (((iVar28 != -1) &&
                    (pMVar20 = MobyInstance + iVar28, pMVar20 != (MobyInstance *)0x0)) &&
                   (pvVar11 = pMVar20->pVar, pvVar11 != (void *)0x0)) {
                  dVar33 = (double)(fVar17 * fVar17 + fVar45 * fVar45 + fVar16 * fVar16);
                  dVar34 = dVar38;
                  dVar35 = dVar38;
                  dVar39 = dVar38;
                  if ((double)(float)SQRT(dVar33) != dVar38) {
                    dVar34 = 1.0 / SQRT(dVar33);
                    dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar34) *
                                                              dVar34 - dVar40) *
                                             (double)(float)(dVar34 * dVar37) + dVar34);
                    dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar34) *
                                                              dVar34 - dVar40) *
                                             (double)(float)(dVar34 * dVar37) + dVar34);
                    fVar2 = (float)(-(double)(float)((double)(float)(dVar33 * dVar34) * dVar34 -
                                                    dVar40) * (double)(float)(dVar34 * dVar37) +
                                   dVar34);
                    dVar39 = (double)(fVar45 * fVar2);
                    dVar35 = (double)(fVar16 * fVar2);
                    dVar34 = (double)(fVar17 * fVar2);
                  }
                  *(uint *)((int)pvVar11 + 0x70) = *(uint *)((int)pvVar11 + 0x70) | 0x1000;
                  (pMVar20->pos).x = local_170;
                  (pMVar20->pos).y = local_16c;
                  (pMVar20->pos).z = local_168;
                  (pMVar20->pos).w = local_164;
                  *(float *)((int)pvVar11 + 0x80) = (float)dVar39;
                  *(float *)((int)pvVar11 + 0x84) = (float)dVar35;
                  *(float *)((int)pvVar11 + 0x88) = (float)dVar34;
                  *(f32 *)((int)pvVar11 + 0x8c) = local_164;
                }
              }
              else if (*(char *)((int)pvVar10 + 0x121) == '\0') {
                mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar29);
                partupd::SpawnPart_10(uVar24 - 0x170,uVar24 - 0x160);
                mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar29);
                partupd::SpawnPart_10(uVar24 - 0x170,uVar24 - 0x160);
              }
            }
            uVar27 = uVar27 + 1;
            uVar30 = uVar30 + 4;
          } while ((int)uVar27 < 5);
          auVar44 = ZEXT416(0xfffffff8);
          auVar42 = loadVectorLeftIndexed(0x121,uVar31);
          auVar44 = vectorShiftRightWord
                              (auVar42,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60
                              );
          if (*(char *)((int)pvVar10 + 0x121) == '\0') {
            auVar44 = ZEXT416(0xffffffff);
            auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
            auVar42 = vectorShiftLeftIntegerWord(auVar44,auVar44);
            auVar44 = loadVectorLeftIndexed(0x48,0x3a824c);
            auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar44 = vectorMultiplyAddFloatingPoint
                                (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 |
                                         auVar44 << 0x60,auVar42);
            auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
          }
          auVar42 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar44 = ZEXT416(1);
          auVar44 = vectorSubtractUnsignedWordModulo
                              (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                               auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
          auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xff;
          uVar14 = storeVectorElementByteIndexed
                             (auVar44 | auVar44 << 8 | auVar44 << 0x10 | auVar44 << 0x18 |
                              auVar44 << 0x20 | auVar44 << 0x28 | auVar44 << 0x30 | auVar44 << 0x38
                              | auVar44 << 0x40 | auVar44 << 0x48 | auVar44 << 0x50 |
                              auVar44 << 0x58 | auVar44 << 0x60 | auVar44 << 0x68 | auVar44 << 0x70
                              | auVar44 << 0x78,0x121,uVar31);
          *(undefined1 *)((int)pvVar10 + 0x121) = uVar14;
        }
        if ((Level == Kerwan) || (Level == Gaspar)) {
          iVar26 = mobyutil::MB_damage(lVar25,0x210000,0);
          if ((iVar26 != 0) &&
             ((*(char *)(iVar26 + 0x28) != '\x02' || (*(char *)(iVar26 + 0x29) != '\x01')))) {
            uVar41 = 0;
            fastfunc::FastVecSub(uVar24 - 0x130,lVar25 + 0x10,uVar24 - 0x180);
            auVar44 = ZEXT416(0xffffffff);
            auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
            auVar42 = vectorShiftLeftIntegerWord(auVar44,auVar44);
            auVar44 = loadVectorLeftIndexed(0x54,0x3a824c);
            auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar32 = 0xffffffffffffffff;
            auVar44 = vectorMultiplyAddFloatingPoint
                                (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 |
                                         auVar44 << 0x60,auVar42);
            auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
            auVar44 = vectorSplatHalfWord(auVar44,1);
            uVar15 = storeVectorElementHalfWordIndexed(auVar44,0x13a,uVar31);
            *(undefined2 *)((int)pvVar10 + 0x13a) = uVar15;
            MVar8 = moby->oClass;
            if ((MVar8 == (PLANETBUSTER_MAXIMUS_PART_0500|ROCKET_0032)) ||
               ((MVar8 == 0x53b || (MVar8 == 0x53c)))) {
              uVar32 = 1;
            }
            mobyutil::MB_genericExplosion
                      (uVar41,uVar41,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,
                       0x4008000000000000,0x402e000000000000,lVar25,uVar24 - 0x140,uVar24 - 0x150,
                       uVar32,0xffffffffffffffff,0x14,3,4);
          }
          DAT_00735d00 = &PTR_UpdateMoby_a_lot_10_0070d058;
          moby->damage = -1;
          if (*(short *)((int)pvVar10 + 0x13a) != 0) {
            iVar26 = fastfunc::FastDecTimerS16(uVar31 + 0x13a);
            if ((iVar26 == 0) || (!bVar21)) {
              moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
              sVar9 = *(short *)((int)pvVar10 + 0x11e);
              moby->collision = (ushort *)0x0;
              if ((sVar9 != -1) &&
                 ((iVar26 = (int)((longlong)sVar9 << 7) - (int)((longlong)sVar9 << 4),
                  *(MobyInstance **)((int)sound::g_SoundChannels + iVar26 + 0x18) == moby &&
                  (*(char *)((int)sound::g_SoundChannels + iVar26 + 4) != '\0')))) {
                sound::sound_Kill((int)sVar9);
              }
              *(undefined2 *)((int)pvVar10 + 0x11e) = 0xffff;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            }
            else {
              puVar12 = moby->pClass->collision;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                    HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
              moby->collision = puVar12;
            }
          }
        }
      }
    }
  }
  else if (bVar3 < 3) {
    if (*(int *)((int)pvVar10 + 0x74) != -1) {
      moby->state = '\0';
      sVar9 = *(short *)((int)pvVar10 + 0x11e);
      if (((sVar9 != -1) &&
          (iVar26 = (int)((longlong)sVar9 << 7) - (int)((longlong)sVar9 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar26 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar26 + 4) != '\0')) {
        sound::sound_Kill((int)sVar9);
      }
      *(undefined2 *)((int)pvVar10 + 0x11e) = 0xffff;
    }
  }
  else if ((bVar3 < 4) && (iVar26 = fastfunc::FastDecTimerS16(uVar31 + 0x11c), iVar26 != 0)) {
    *(undefined2 *)((int)pvVar10 + 0x11c) = 0;
    moby->state = '\x01';
  }
  return;
}



//==== 003a9aa4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1340_003a9aa4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1340_003a9aa4(void)

{
  DAT_0084367c = 0x10000;
  return;
}



//==== 003a9af8  ns=mobyupdate_helpers  size=0xa68
// sig: undefined M52_003a9af8(void)
// callers(1): 003aa5f0 mobyupdate_unsorted::UpdateMoby_52
// callees(15): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 00104298 mobyutil::MB_SetGroupField; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M52_003a9af8(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar11;
  longlong lVar12;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x120;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar10;
  puVar8[0x26] = in_LR;
  puVar8[0x23] = in_f31;
  puVar8[0x22] = unaff_r31;
  uVar1 = param_1->state;
  puVar8[0x21] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar20 = ZEXT48(pvVar6);
  puVar8[0x20] = unaff_r29;
  puVar8[0x1f] = unaff_r28;
  puVar8[0x1e] = unaff_r27;
  if (uVar1 != '\0') {
    param_1->scale =
         (param_1->pClass->gScale * DAT_008436b4 - param_1->scale) * 0.1 + param_1->scale;
    iVar13 = fastfunc::FastDecTimerS32(uVar20 + 0x184);
    fVar5 = animationSpeed;
    if (iVar13 == 2) {
      param_1->state = '\a';
    }
    else {
      iVar13 = *(int *)((int)pvVar6 + 0x184);
      puVar8[0x1b] = (longlong)(int)(animationSpeed * 10.5);
      if (((((iVar13 == *(int *)((int)puVar8 + 0xdc)) ||
            (puVar8[0x1b] = (longlong)(int)(fVar5 * 20.5), iVar13 == *(int *)((int)puVar8 + 0xdc)))
           || (puVar8[0x1b] = (longlong)(int)(fVar5 * 40.5), iVar13 == *(int *)((int)puVar8 + 0xdc))
           ) || ((puVar8[0x1b] = (longlong)(int)(fVar5 * 60.5),
                 iVar13 == *(int *)((int)puVar8 + 0xdc) ||
                 (puVar8[0x1b] = (longlong)(int)(fVar5 * 120.5),
                 iVar13 == *(int *)((int)puVar8 + 0xdc))))) ||
         (puVar8[0x1b] = (longlong)(int)(fVar5 * 179.5), iVar13 == *(int *)((int)puVar8 + 0xdc))) {
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
      }
      dVar25 = 0.0;
      *(undefined4 *)((int)puVar8 + 0x74) = 0;
      iVar13 = mobyutil::MB_damage(param_1,0x330000,0);
      iVar14 = mobyutil::MB_HandleDamage
                         (param_1,iVar13,uVar20 + 0x20,0,puVar8 + 0xe,(int)puVar8 + 0x74,0,4);
      if ((*(int *)(puVar8 + 0xe) != 1) && (param_1->state != '\x06')) {
        fVar5 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar8 + 0x74);
        *(float *)((int)pvVar6 + 0x20) = fVar5;
        if ((double)fVar5 <= dVar25) {
          iVar14 = 1;
        }
        uVar15 = fastfunc::FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar6 + 0x98) = 0;
        fVar2 = DAT_008436a0;
        fVar5 = DAT_0071f418;
        *(undefined4 *)((int)pvVar6 + 0x90) = uVar15;
        *(float *)((int)pvVar6 + 0x80) = fVar2 * fVar5;
        *(undefined1 *)((int)pvVar6 + 0xad) = 0;
        *(undefined4 *)((int)pvVar6 + 0x94) = 1;
        *(float *)((int)pvVar6 + 0x84) = fVar5 * 30.0;
        sound::PlayMobySound(8,0,param_1);
        fVar2 = DAT_008436a8;
        fVar5 = mobyutil::g_FrameTime;
        if (iVar14 < 3) {
          if ((-1 < iVar14) && (0 < iVar14)) {
            fVar5 = DAT_008436a0 * DAT_0071f418;
            param_1->modeBits =
                 param_1->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            *(float *)((int)pvVar6 + 0x80) = fVar5;
            fVar5 = mobyutil::g_FrameTime;
            *(float *)((int)pvVar6 + 0x88) = DAT_008436b0 * mobyutil::g_FrameTime;
            fVar2 = DAT_008436ac;
            *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41600000;
            *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41e00000;
            *(float *)((int)pvVar6 + 0x8c) = fVar2 * fVar5;
            fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
            fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
            dVar22 = ABS((double)fVar5);
            dVar23 = ABS((double)fVar2);
            *(float *)(puVar8 + 0x10) = fVar5;
            *(float *)((int)puVar8 + 0x84) = fVar2;
            *(float *)(puVar8 + 0x11) = (float)(dVar22 - dVar23);
            uVar18 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
            dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
            if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
              dVar24 = dVar23;
            }
            fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
            dVar23 = ABS((double)*(float *)((int)puVar8 + 0x84));
            if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
              dVar23 = dVar22;
            }
            fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            if (dVar25 < dVar24) {
              lVar11 = uVar10 - 0x110;
              lVar19 = uVar10 - 0x78;
              lVar16 = uVar10 - 0x88;
              lVar21 = 2;
              fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar8 + 0xa4) = fVar3;
              *(float *)((int)puVar8 + 0x9c) = fVar3;
              *(float *)(puVar8 + 0x14) = fVar3;
              *(float *)(puVar8 + 0x13) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar4;
              *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
              *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar3 * fVar3;
                iVar14 = (int)lVar16;
                lVar16 = lVar16 + 8;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                lVar19 = lVar19 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar21 = 4;
              lVar19 = uVar10 - 0x88;
              pfVar17 = (float *)&DAT_007358e0;
              lVar11 = lVar12;
              lVar16 = lVar19;
              do {
                fVar3 = *pfVar17;
                fVar4 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar3;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
                lVar16 = lVar16 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar11 = 2;
              do {
                iVar14 = (int)lVar12;
                iVar9 = (int)lVar19;
                lVar12 = lVar12 + 0x10;
                lVar19 = lVar19 + 0x10;
                dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x98)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
            }
            *(float *)((int)puVar8 + 0x7c) = (float)dVar25;
            uVar15 = *(undefined4 *)(iVar13 + 0x18);
            *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
            *(undefined4 *)(puVar8 + 7) = uVar15;
            uVar15 = *(undefined4 *)(iVar13 + 0x1c);
            *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
            *(undefined4 *)((int)puVar8 + 0x3c) = uVar15;
            mobyutil::MB_VecAtan2Angles
                      (puVar8[6],puVar8[7],uVar10 - 0xa4,uVar20 + 0x88,uVar20 + 0x8c);
            mobyutil::MB_StartKick((double)*(float *)((int)puVar8 + 0x7c),param_1,uVar20 + 0x70);
            mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
            param_1->state = '\x06';
            *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
          }
        }
        else if (iVar14 < 0xb) {
          if (iVar14 < 9) {
            *(undefined4 *)((int)pvVar6 + 0x8c) = 0;
            *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40400000;
            *(undefined4 *)((int)pvVar6 + 0xc4) = 0x40c00000;
            *(float *)((int)pvVar6 + 0x88) = fVar2 * fVar5;
            fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
            fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
            dVar22 = ABS((double)fVar5);
            dVar23 = ABS((double)fVar2);
            *(float *)((int)puVar8 + 0x8c) = fVar5;
            *(float *)(puVar8 + 0x12) = fVar2;
            *(float *)((int)puVar8 + 0x94) = (float)(dVar22 - dVar23);
            uVar18 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
            dVar24 = ABS((double)*(float *)((int)puVar8 + 0x8c));
            if ((double)*(float *)((int)puVar8 + 0x94) - dVar25 < 0.0) {
              dVar24 = dVar23;
            }
            fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
            dVar23 = ABS((double)*(float *)(puVar8 + 0x12));
            if ((double)*(float *)((int)puVar8 + 0x94) - dVar25 < 0.0) {
              dVar23 = dVar22;
            }
            fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            if (dVar25 < dVar24) {
              lVar11 = uVar10 - 0x110;
              lVar16 = uVar10 - 0x68;
              lVar19 = uVar10 - 0x58;
              lVar21 = 2;
              fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar8 + 0xc4) = fVar3;
              *(float *)((int)puVar8 + 0xbc) = fVar3;
              *(float *)(puVar8 + 0x18) = fVar3;
              *(float *)(puVar8 + 0x17) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar4;
              *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar3;
              *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar3 * fVar3;
                iVar14 = (int)lVar16;
                lVar11 = lVar11 + 8;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                lVar19 = lVar19 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar21 = 4;
              lVar19 = uVar10 - 0x68;
              pfVar17 = (float *)&DAT_007358e0;
              lVar11 = lVar12;
              lVar16 = lVar19;
              do {
                fVar3 = *pfVar17;
                fVar4 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar3;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
                lVar16 = lVar16 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar11 = 2;
              do {
                iVar14 = (int)lVar12;
                iVar9 = (int)lVar19;
                lVar12 = lVar12 + 0x10;
                lVar19 = lVar19 + 0x10;
                dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0xb8)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
            }
            *(float *)(puVar8 + 0xf) = (float)dVar25;
            uVar15 = *(undefined4 *)(iVar13 + 0x18);
            *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
            *(undefined4 *)(puVar8 + 7) = uVar15;
            uVar15 = *(undefined4 *)(iVar13 + 0x1c);
            *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
            *(undefined4 *)((int)puVar8 + 0x3c) = uVar15;
            mobyutil::MB_VecAtan2Angles
                      (puVar8[6],puVar8[7],uVar10 - 0xa8,uVar20 + 0x88,uVar20 + 0x8c);
            mobyutil::MB_StartKick((double)*(float *)(puVar8 + 0xf),param_1,uVar20 + 0x70);
            param_1->state = '\x05';
            if (param_1->group != -1) {
              mobyutil::MB_SetGroupField(param_1->group,1);
            }
            *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
          }
          else {
            *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
          }
        }
        mobyutil::MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
      }
      param_1->damage = -1;
      mobyutil::MB_ColorDyingMoby(param_1,uVar20 + 0x60);
      if ((*(int *)((int)pvVar6 + 0x38) != 0) || (param_1->setByGroup == '\x01')) {
        dVar25 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
        uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar6 + 400) = uVar15;
        *(undefined4 *)((int)pvVar6 + 0x38) = 0;
        param_1->setByGroup = '\0';
      }
      fastfunc::FastDecTimerS32(uVar20 + 400);
      iVar13 = mobyutil::MB_randInt(4);
      if (iVar13 == 0) {
        if (*(int *)((int)pvVar6 + 400) == 0) {
          *(undefined4 *)((int)pvVar6 + 0x188) = 0x41400000;
          pSVar7 = Splines[*(int *)((int)pvVar6 + 0x180)];
          iVar13 = mobyutil::MB_getTargetInArea
                             (0x4028000000000000,param_1,uVar20 + 0x120,pSVar7,0,0,pSVar7->points,
                              pSVar7->cnt);
          if (((iVar13 != 2) && (*(int *)((int)pvVar6 + 400) == 0)) &&
             ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
              fVar2 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
              *(float *)((int)pvVar6 + 0x188) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
              (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
            *(undefined4 *)((int)pvVar6 + 0x164) = 2;
          }
        }
        else {
          *(undefined4 *)((int)pvVar6 + 0x188) = 0x41c00000;
          iVar13 = mobyutil::MB_getTarget(0x4038000000000000,param_1,&DAT_003a9ab8,uVar20 + 0x120);
          if (((iVar13 != 2) && (*(int *)((int)pvVar6 + 400) == 0)) &&
             ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
              fVar2 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
              *(float *)((int)pvVar6 + 0x188) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
              (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
            *(undefined4 *)((int)pvVar6 + 0x164) = 2;
          }
        }
      }
      else {
        iVar13 = *(int *)((int)pvVar6 + 0x160);
        if ((iVar13 == 0) || (*(char *)(iVar13 + 0x20) == -3 || *(char *)(iVar13 + 0x20) == -2)) {
          *(undefined4 *)((int)pvVar6 + 0x160) = 0;
          *(undefined4 *)((int)pvVar6 + 0x164) = 2;
        }
        else {
          *(undefined4 *)((int)pvVar6 + 0x120) = *(undefined4 *)(iVar13 + 0x10);
          *(undefined4 *)((int)pvVar6 + 0x124) = *(undefined4 *)(iVar13 + 0x14);
          *(undefined4 *)((int)pvVar6 + 0x128) = *(undefined4 *)(iVar13 + 0x18);
          *(undefined4 *)((int)pvVar6 + 300) = *(undefined4 *)(iVar13 + 0x1c);
        }
      }
      if (*(int *)((int)pvVar6 + 0x160) == 0) {
        *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
      }
    }
  }
  return;
}



//==== 003aa5f0  ns=mobyupdate_unsorted  size=0xea8
// sig: undefined UpdateMoby_52(MobyInstance * moby)
// callers(0): 
// callees(21): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ffb70 mobyutil::GetGroundZ; 001009b0 mobyutil::MB_MoveAndCollide; 00100f8c mobyutil::MB_InitDefaultParams; 00104298 mobyutil::MB_SetGroupField; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00119a18 mobyfunc::DoManipulator; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 003a9af8 mobyupdate_helpers::M52_003a9af8; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00656a08: 'Kamikaze with an invalid boundPath. UID = %d'

/* Moby 52 */

void mobyupdate_unsorted::UpdateMoby_52(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar15;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte bVar25;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar20 = uVar13 - 0x1a0;
  puVar7 = (ulonglong *)lVar20;
  *puVar7 = uVar13;
  puVar7[0x36] = in_LR;
  puVar7[0x32] = in_f30;
  puVar7[0x33] = in_f31;
  puVar7[0x31] = unaff_r31;
  puVar7[0x2f] = unaff_r29;
  puVar7[0x30] = unaff_r30;
  puVar7[0x2e] = unaff_r28;
  pvVar6 = moby->pVar;
  mobyupdate_helpers::M52_003a9af8(lVar14);
  iVar17 = *(int *)((int)pvVar6 + 0x160);
  mobyfunc::DoManipulator(0x40059999a0000000,moby,0,(Manipulator *)((int)pvVar6 + 0x280));
  if ((moby->enabled != '\0') &&
     (fVar37 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar2 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar37 * fVar37) < 29.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar14);
    moby->shadow = '\x17';
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    return;
  }
  uVar1 = moby->state;
  bVar25 = (uVar1 == '\x05') << 1;
  if (uVar1 == '\a') {
    mobyutil::MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
    iVar17 = *(int *)((int)pvVar6 + 0x194);
    if (((iVar17 != -1) && (sound::g_SoundChannels[iVar17].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar17].state != '\0')) {
      sound::sound_Kill(iVar17);
    }
    *(undefined4 *)((int)pvVar6 + 0x194) = 0xffffffff;
    *(undefined4 *)((int)puVar7 + 0xec) = 0;
    *(undefined4 *)(puVar7 + 0x1d) = 0;
    *(undefined4 *)((int)puVar7 + 0xe4) = 0;
    *(undefined4 *)(puVar7 + 0x1c) = 0;
    puVar7[0x12] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0xffffffffffffffff;
    puVar7[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar14,uVar13 - 0xc0,
               lVar14 + 0x10,0xffffffffffffffff,0,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x06') {
    iVar17 = *(int *)((int)pvVar6 + 0x194);
    if (((iVar17 != -1) && (sound::g_SoundChannels[iVar17].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar17].state != '\0')) {
      sound::sound_Kill(iVar17);
    }
    *(undefined4 *)((int)pvVar6 + 0x194) = 0xffffffff;
    uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar18 & 0x121) == 0) {
      return;
    }
    mobyutil::MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar14,lVar14 + 0x10,&DAT_003aa560,0);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x05') {
    dVar27 = (double)(moby->pos).z;
    mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    (moby->pos).z = (float)dVar27;
    *(undefined4 *)((int)pvVar6 + 0x78) = 0;
    if (mobyutil::g_FrameTime * 2.0 <=
        SQRT(*(float *)((int)pvVar6 + 0x70) * *(float *)((int)pvVar6 + 0x70) +
             *(float *)((int)pvVar6 + 0x74) * *(float *)((int)pvVar6 + 0x74))) {
      return;
    }
    if (*(int *)((int)pvVar6 + 0x194) == -1) {
      iVar17 = sound::PlayMobySound(1,4,moby);
      *(int *)((int)pvVar6 + 0x194) = iVar17;
    }
    *(undefined4 *)((int)pvVar6 + 0x198) = 1;
    moby->state = '\x04';
    if (*(int *)((int)pvVar6 + 0x184) != 0) {
      return;
    }
    auVar36 = ZEXT416(0xffffffff);
    auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar29 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar36 = loadVectorLeftIndexed(0x34,0x3aa560);
    auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar36 = vectorMultiplyAddFloatingPoint
                        (auVar31,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                         auVar29);
    auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
    auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar16 = storeVectorElementWordIndexed
                       (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x184,
                        ZEXT48(pvVar6));
    *(undefined4 *)((int)pvVar6 + 0x184U & 0xfffffffc) = uVar16;
    return;
  }
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      if (moby->group != -1) {
        mobyutil::MB_SetGroupField(moby->group,1);
      }
      *(undefined4 *)((int)pvVar6 + 0x198) = 1;
      moby->state = '\x04';
      if (*(int *)((int)pvVar6 + 0x194) == -1) {
        iVar17 = sound::PlayMobySound(1,4,moby);
        *(int *)((int)pvVar6 + 0x194) = iVar17;
      }
      if (moby->animationId != '\x04') {
        puVar7[0x29] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,4,0,*(undefined4 *)((int)puVar7 + 0x14c));
      }
      if (*(int *)((int)pvVar6 + 0x184) != 0) {
        return;
      }
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x34,0x3aa560);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar29);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x184,
                          ZEXT48(pvVar6));
      *(undefined4 *)((int)pvVar6 + 0x184U & 0xfffffffc) = uVar16;
      return;
    }
    if (uVar1 != '\x02') {
      if (uVar1 == '\x01') {
        dVar28 = 0.5;
        dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar14 + 0x10,0);
        fVar37 = (moby->pos).z;
        (moby->pos).z = ((float)(dVar27 + dVar28) - fVar37) * 0.1 + fVar37;
        fVar37 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
        fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
        fVar2 = ABS(fVar37);
        fVar5 = ABS(fVar3);
        *(float *)((int)puVar7 + 0xfc) = fVar37;
        *(float *)(puVar7 + 0x20) = fVar3;
        *(float *)((int)puVar7 + 0x104) = fVar2 - fVar5;
        fVar37 = 0.0;
        uVar23 = (ulonglong)(*(uint *)((int)puVar7 + 0xfc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x20) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar7 + 0xfc));
        if (*(float *)((int)puVar7 + 0x104) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar4 = ABS(*(float *)(puVar7 + 0x20));
        if (*(float *)((int)puVar7 + 0x104) - 0.0 < 0.0) {
          fVar4 = fVar2;
        }
        fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        if (0.0 < fVar3) {
          lVar19 = uVar13 - 400;
          lVar21 = uVar13 - 0x78;
          lVar24 = uVar13 - 0x68;
          lVar26 = 2;
          fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0x134) = fVar3;
          *(float *)((int)puVar7 + 300) = fVar3;
          *(float *)(puVar7 + 0x26) = fVar3;
          *(float *)(puVar7 + 0x25) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar7 + 300) = *(float *)((int)puVar7 + 300) * fVar4;
          *(float *)(puVar7 + 0x26) = *(float *)(puVar7 + 0x26) * fVar3;
          *(float *)((int)puVar7 + 0x134) = *(float *)((int)puVar7 + 0x134) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar19 + 0x128) = *(float *)((int)lVar19 + 0x118) * fVar3 * fVar3;
            iVar17 = (int)lVar21;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar24 = uVar13 - 0x78;
          pfVar22 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar21 = lVar24;
          do {
            fVar3 = *pfVar22;
            fVar4 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar19 + 0x128) = *(float *)((int)lVar19 + 0x128) * fVar3;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
            lVar21 = lVar21 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar20;
            iVar8 = (int)lVar24;
            lVar20 = lVar20 + 0x10;
            lVar24 = lVar24 + 0x10;
            fVar37 = fVar37 + *(float *)(iVar17 + 0x128) + *(float *)(iVar8 + 4) +
                     *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          fVar37 = (fVar37 + 0.7853982) * fVar5 + fVar2;
        }
        fVar37 = mobyutil::OrganicDeltAng
                           (fVar37,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                            mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x3aa560,
                            (float *)((int)pvVar6 + 0x18c));
        if ((moby->field43_0x70 & 2U) != 0) {
          iVar17 = mobyutil::MB_randInt((double)fVar37,0x13);
          if (iVar17 == 0) {
            if (moby->animationId != '\x02') {
              uVar15 = mobyutil::MB_randRange(7,0xc);
              mobyutil::MB_SetAnimation(lVar14,2,0,uVar15);
            }
          }
          else if (moby->animationId != '\x01') {
            uVar15 = mobyutil::MB_randRange(7,0xe);
            mobyutil::MB_SetAnimation(lVar14,1,0,uVar15);
          }
          dVar27 = (double)mobyutil::MB_randRangeFloat(0.95,1.05);
          moby->unk58 = (float)dVar27;
        }
        if (*(int *)((int)pvVar6 + 0x164) == 2) {
          return;
        }
        if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,1);
        }
        if (*(int *)((int)pvVar6 + 0x194) == -1) {
          iVar17 = sound::PlayMobySound(1,4,moby);
          *(int *)((int)pvVar6 + 0x194) = iVar17;
        }
        *(undefined4 *)((int)pvVar6 + 0x198) = 1;
        moby->state = '\x02';
        return;
      }
      if (uVar1 != '\0') {
        return;
      }
      *(undefined4 *)((int)pvVar6 + 0x20) = 0x40400000;
      *(undefined2 *)((int)pvVar6 + 0x24) = 3;
      *(undefined1 *)((int)pvVar6 + 0x28) = 2;
      *(undefined1 *)((int)pvVar6 + 0x5a) = 6;
      *(undefined1 *)((int)pvVar6 + 0x58) = 8;
      if (*(int *)((int)pvVar6 + 0x180) == -1) {
        libc::printf("Kamikaze with an invalid boundPath. UID = %d",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
      *(undefined4 *)((int)pvVar6 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar6 + 0xd8) = 0x3f000000;
      uVar16 = fastfunc::FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar6 + 0xd0) = uVar16;
      *(float *)((int)pvVar6 + 0xf4) = mobyutil::g_FrameTime * 7.75;
      moby->state = '\x01';
      if (moby->animationId != '\x01') {
        puVar7[0x29] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,1,0,*(undefined4 *)((int)puVar7 + 0x14c));
      }
      *(undefined4 *)((int)pvVar6 + 0x194) = 0xffffffff;
      return;
    }
  }
  fVar37 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
  fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
  fVar5 = ABS(fVar37);
  fVar2 = ABS(fVar3);
  *(float *)(puVar7 + 0x1e) = fVar37;
  *(float *)((int)puVar7 + 0xf4) = fVar3;
  *(float *)(puVar7 + 0x1f) = fVar5 - fVar2;
  dVar27 = 0.0;
  auVar36 = loadVectorLeftIndexed(0x18,lVar14);
  uVar23 = (ulonglong)(*(uint *)(puVar7 + 0x1e) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x1f) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0xf4) >> 0x1d) & 4;
  fVar37 = ABS(*(float *)(puVar7 + 0x1e));
  if (*(float *)(puVar7 + 0x1f) - 0.0 < 0.0) {
    fVar37 = fVar2;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)((int)puVar7 + 0xf4));
  if (*(float *)(puVar7 + 0x1f) - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  dVar28 = dVar27;
  if (0.0 < fVar37) {
    lVar19 = uVar13 - 400;
    lVar21 = uVar13 - 0x98;
    lVar24 = uVar13 - 0x88;
    lVar26 = 2;
    fVar37 = (fVar4 - fVar37) / (fVar4 + fVar37);
    fVar5 = fVar37 * fVar37;
    *(float *)((int)puVar7 + 0x114) = fVar37;
    *(float *)((int)puVar7 + 0x10c) = fVar37;
    *(float *)(puVar7 + 0x22) = fVar37;
    *(float *)(puVar7 + 0x21) = fVar37;
    fVar37 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x10c) = *(float *)((int)puVar7 + 0x10c) * fVar5;
    *(float *)(puVar7 + 0x22) = *(float *)(puVar7 + 0x22) * fVar37;
    *(float *)((int)puVar7 + 0x114) = *(float *)((int)puVar7 + 0x114) * fVar37 * fVar5;
    do {
      *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0xf8) * fVar37 * fVar37;
      iVar8 = (int)lVar21;
      lVar19 = lVar19 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar8 + 4) * fVar37 * fVar37;
      lVar24 = lVar24 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar24 = uVar13 - 0x98;
    pfVar22 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar21 = lVar24;
    do {
      fVar37 = *pfVar22;
      fVar5 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0x108) * fVar37;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar21 = 2;
    lVar19 = lVar20;
    do {
      iVar8 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      iVar9 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar8 + 0x108)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar28,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
             mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
             (float *)((int)pvVar6 + 0x18c));
  fVar37 = (moby->pos).y - *(float *)(iVar17 + 0x14);
  fVar3 = (moby->pos).x - *(float *)(iVar17 + 0x10);
  iVar17 = *(int *)((int)pvVar6 + 0x198);
  dVar28 = (double)SQRT(fVar3 * fVar3 + fVar37 * fVar37);
  if (1.899999976158142 < dVar28) {
    iVar17 = 1;
    *(undefined4 *)((int)pvVar6 + 0x198) = 1;
  }
  if (1.399999976158142 <= dVar28) {
    if (iVar17 != 0) {
      fVar37 = (moby->rotation).z;
      fVar3 = fVar37 + 1.5707963;
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      fVar2 = 3.1415925 - fVar37;
      if (fVar37 - (3.1415925 - fVar37) < 0.0) {
        fVar2 = fVar37;
      }
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      fVar5 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar5 = fVar3;
      }
      auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      fVar4 = -3.1415925 - fVar37;
      if ((-3.1415925 - fVar37) - fVar2 < 0.0) {
        fVar4 = fVar2;
      }
      fVar37 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
        fVar37 = fVar5;
      }
      fVar3 = fVar4 * fVar4;
      fVar2 = fVar37 * fVar37;
      fVar11 = fVar3 * fVar3 * fVar4;
      fVar5 = fVar2 * fVar2 * fVar37;
      fVar12 = fVar3 * fVar11;
      fVar10 = fVar2 * fVar5;
      *(float *)(puVar7 + 0x18) =
           (fVar2 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar37 * -0.16666657 + fVar37) *
           *(float *)((int)pvVar6 + 0xf4);
      fVar37 = *(float *)((int)pvVar6 + 0xf4);
      *(undefined4 *)(puVar7 + 0x19) = 0;
      auVar33 = loadVectorLeftIndexed(0x18,lVar14);
      *(float *)((int)puVar7 + 0xc4) =
           (fVar3 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4) *
           fVar37;
      auVar30 = loadVectorLeftIndexed(0x5c,0x3aa560);
      auVar34 = loadVectorLeftIndexed(0x88,0x969ce0);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = loadVectorLeftIndexed(0x18,0x3aa560);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = vectorAddFloatingPoint
                          (auVar34,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
      auVar30 = loadVectorLeftIndexed(0x60,0x3aa560);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = vectorSubtractFloatingPoint(auVar34,auVar36);
      auVar36 = vectorCompareGreaterThanFloatingPoint(auVar34,auVar33);
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
      auVar36 = vectorConditionalSelect
                          (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar36,auVar29);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar29 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      uVar16 = storeVectorElementWordIndexed(auVar29,200,lVar20);
      *(undefined4 *)(puVar7 + 0x19) = uVar16;
      auVar36 = loadVectorLeftIndexed(100,0x3aa560);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar31);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar29,auVar36);
      if ((bool)(bVar25 >> 1 & 1)) {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar31 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = loadVectorLeftIndexed(0x68,0x3aa560);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar31);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        vectorCompareGreaterThanOrEqualToFloatingPoint(auVar29,auVar36);
        if ((bool)(bVar25 >> 1 & 1)) {
          uVar16 = storeVectorElementWordIndexed(auVar36,200,lVar20);
          *(undefined4 *)(puVar7 + 0x19) = uVar16;
        }
      }
      else {
        uVar16 = storeVectorElementWordIndexed(auVar36,200,lVar20);
        *(undefined4 *)(puVar7 + 0x19) = uVar16;
      }
      mobyutil::MB_MoveAndCollide(dVar27,0x3fe0000000000000,dVar27,lVar14,uVar13 - 0xe0);
      goto LAB_003ab190;
    }
  }
  else {
    *(undefined4 *)((int)pvVar6 + 0x198) = 0;
  }
  auVar29 = ZEXT416(0xffffffff);
  auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  *(undefined4 *)((int)puVar7 + 0xdc) = 0;
  *(undefined4 *)(puVar7 + 0x1b) = 0;
  *(undefined4 *)((int)puVar7 + 0xd4) = 0;
  *(undefined4 *)(puVar7 + 0x1a) = 0;
  auVar29 = loadVectorLeftIndexed(0x6c,0x3aa560);
  auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = loadVectorLeftIndexed(0x88,0x969ce0);
  auVar30 = vectorAddFloatingPoint
                      (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
  auVar29 = loadVectorLeftIndexed(0x18,0x3aa560);
  auVar32 = loadVectorLeftIndexed(0x18,lVar14);
  auVar31 = loadVectorLeftIndexed(0x60,0x3aa560);
  auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = vectorSubtractFloatingPoint(auVar30,auVar36);
  auVar36 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar32);
  auVar32 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
  auVar30 = vectorShiftLeftIntegerWord(auVar33,auVar33);
  auVar29 = vectorConditionalSelect
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                       auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar36);
  auVar36 = ZEXT416(0xffffffff);
  auVar31 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar29,auVar30);
  auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar29 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  uVar16 = storeVectorElementWordIndexed(auVar29,0xd8,lVar20);
  *(undefined4 *)(puVar7 + 0x1b) = uVar16;
  auVar36 = loadVectorLeftIndexed(100,0x3aa560);
  auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar31
                      );
  auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  vectorCompareGreaterThanFloatingPoint(auVar29,auVar36);
  if ((bool)(bVar25 >> 1 & 1)) {
    auVar36 = ZEXT416(0xffffffff);
    auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar31 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar36 = loadVectorLeftIndexed(0x68,0x3aa560);
    auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                         auVar31);
    auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    vectorCompareGreaterThanOrEqualToFloatingPoint(auVar29,auVar36);
    if ((bool)(bVar25 >> 1 & 1)) {
      uVar16 = storeVectorElementWordIndexed(auVar36,0xd8,lVar20);
      *(undefined4 *)(puVar7 + 0x1b) = uVar16;
    }
  }
  else {
    uVar16 = storeVectorElementWordIndexed(auVar36,0xd8,lVar20);
    *(undefined4 *)(puVar7 + 0x1b) = uVar16;
  }
  mobyutil::MB_MoveAndCollide(dVar27,0x3fe0000000000000,dVar27,lVar14,uVar13 - 0xd0);
LAB_003ab190:
  if (((dVar28 < 6.0) && (moby->state == '\x02')) &&
     (moby->state = '\x03', moby->animationId != '\x03')) {
    puVar7[0x29] = (longlong)(int)(animationSpeed * 10.5);
    mobyutil::MB_SetAnimation(lVar14,3,0,*(undefined4 *)((int)puVar7 + 0x14c));
  }
  return;
}



//==== 003ab498  ns=mobyupdate_helpers  size=0x14
// sig: undefined M520_003ab498(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M520_003ab498(void)

{
  DAT_00843704 = 0x10000;
  return;
}



//==== 003ab4e8  ns=mobyupdate_helpers  size=0x38c
// sig: undefined M520_003ab4e8(void)
// callers(1): 003ab940 mobyupdate_unsorted::UpdateMoby_520
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001246b8 partupd::SpawnPart_13; 0015d12c sound::PlayMobySound; 0028cce0 mobyupdate_helpers::M1488_0028cce0
// strings: 003ab4e0: '?333Ax'

void mobyupdate_helpers::M520_003ab4e8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  MobyInstance *pMoby;
  undefined8 in_r8;
  undefined8 in_r9;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  pMoby = (MobyInstance *)param_1;
  sound::PlayMobySound(0,0,pMoby);
  uVar12 = 0x3fd3333340000000;
  uVar4 = 0x3ff028f5c0000000;
  uVar6 = 0x3fa99999a0000000;
  uVar8 = 0x40e86a0000000000;
  partupd::SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff1333340000000,0x3fa99999a0000000,
             0x40e86a0000000000,local_90);
  iVar3 = 0;
  uVar10 = 0x3ff11eb860000000;
  do {
    partupd::SpawnPart_13(uVar12,uVar4,uVar10,uVar6,uVar8,local_90);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  iVar3 = 0;
  dVar5 = 0.0;
  dVar7 = -0.625;
  dVar9 = 0.625;
  dVar11 = 1.25;
  uVar4 = 0x3fe3333340000000;
  do {
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar9);
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar9);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar11);
    M1488_0028cce0(uVar12,uVar4,param_1,local_80,local_70,&DAT_00a15d30,0x165,in_r8,in_r9,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  uVar4 = 0x3fd99999a0000000;
  uVar6 = 0x3fe6666660000000;
  do {
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar9);
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar9);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar11);
    iVar2 = mobyutil::MB_randInt(2);
    M1488_0028cce0(uVar4,uVar6,param_1,local_80,local_60,&DAT_00a15d30,iVar2 + 0x166,in_r8,in_r9,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  auVar13 = ZEXT416(0xffffffff);
  auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
  pMoby->state = '\x02';
  pMoby->collision = (ushort *)0x0;
  auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
  pMoby->modeBits = pMoby->modeBits | DISABLED;
  auVar13 = loadVectorLeftIndexed(0x34,0x3ab4b0);
  auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,auVar14
                      );
  auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
  auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xff;
  cVar1 = storeVectorElementByteIndexed
                    (auVar13 | auVar13 << 8 | auVar13 << 0x10 | auVar13 << 0x18 | auVar13 << 0x20 |
                     auVar13 << 0x28 | auVar13 << 0x30 | auVar13 << 0x38 | auVar13 << 0x40 |
                     auVar13 << 0x48 | auVar13 << 0x50 | auVar13 << 0x58 | auVar13 << 0x60 |
                     auVar13 << 0x68 | auVar13 << 0x70 | auVar13 << 0x78,0xbc,param_1);
  pMoby->setByGroup = cVar1;
  return;
}



//==== 003ab874  ns=mobyupdate_helpers  size=0xb4
// sig: undefined M520_003ab874(void)
// callers(0): 
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * mobyupdate_helpers::M520_003ab874(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  MobyModeBit MVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  
  pMVar4 = mobyfunc::CreateMoby(0x208);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    MVar3 = pMVar4->modeBits;
    pMVar4->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).x = 0.0;
    (pMVar4->rotation).y = 0.0;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).z = fVar1;
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar4->modeBits = MVar3 | CAN_BE_AUTO_TARGETED;
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = fVar2;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 003ab940  ns=mobyupdate_unsorted  size=0xe8
// sig: undefined UpdateMoby_520(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 001246b8 partupd::SpawnPart_13; 003ab4e8 mobyupdate_helpers::M520_003ab4e8; 00500060 fastfunc::FastDecTimerS8

/* Moby 520 */

void mobyupdate_unsorted::UpdateMoby_520(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (longlong)(int)moby;
  iVar3 = mobyutil::MB_damage(lVar2,0x10000,0);
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if (iVar3 != 0) {
      mobyupdate_helpers::M520_003ab4e8(lVar2);
    }
  }
  else if (bVar1 < 3) {
    partupd::SpawnPart_13
              (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff11eb860000000,0x3fa99999a0000000,
               0x40e86a0000000000,lVar2 + 0x10);
    iVar3 = fastfunc::FastDecTimerS8(lVar2 + 0xbc);
    if (iVar3 != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 003aba28  ns=mobyupdate_helpers  size=0x14
// sig: undefined M529_003aba28(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M529_003aba28(void)

{
  DAT_00843774 = 0x10000;
  return;
}



//==== 003aba40  ns=mobyupdate_unsorted  size=0x40
// sig: undefined UpdateMoby_529(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 529 */

void mobyupdate_unsorted::UpdateMoby_529(MobyInstance *moby)

{
  moby->updateDistance = '\b';
  moby->oClass = PURPLE_SHIP_0215;
  RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,moby);
  return;
}



//==== 003aba98  ns=mobyupdate_unsorted  size=0x1e8
// sig: undefined UpdateMoby_53(MobyInstance * moby)
// callers(0): 
// callees(2): 00105c08 mobyutil::CollDamageMobyDirect; 00502578 fastfunc::FastWrapRot

/* Moby 53 */

void mobyupdate_unsorted::UpdateMoby_53(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  double dVar6;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  pfVar4 = (float *)moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    pfVar4[1] = *pfVar4 * 0.017453292 * mobyutil::g_FrameTime;
  }
  else if (moby->state < 2) {
    dVar6 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar4[1] * DAT_00843798);
    (moby->rotation).x = (float)dVar6;
  }
  if ((DAT_00969f1c == moby) || (DAT_00969f20 == moby)) {
    fVar1 = (moby->transform).v0.y;
    fVar2 = (moby->transform).v0.x;
    fVar3 = (moby->transform).v0.z;
    local_20 = 0.0;
    local_18 = local_20;
    local_1c = local_20;
    if ((g_heroPosition.z - (moby->pos).z) * fVar3 +
        (g_heroPosition.x - (moby->pos).x) * fVar2 + (g_heroPosition.y - (moby->pos).y) * fVar1 <=
        0.0) {
      fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar5 == 0.0) {
        local_14 = (moby->transform).v0.w;
      }
      else {
        fVar5 = -2.0 / fVar5;
        local_20 = fVar2 * fVar5;
        local_14 = (moby->transform).v0.w;
        local_18 = fVar3 * fVar5;
        local_1c = fVar1 * fVar5;
      }
    }
    else {
      fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar5 == 0.0) {
        local_14 = (moby->transform).v0.w;
      }
      else {
        local_18 = 2.0 / fVar5;
        local_20 = fVar2 * local_18;
        local_1c = fVar1 * local_18;
        local_14 = (moby->transform).v0.w;
        local_18 = fVar3 * local_18;
      }
    }
    mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x3aba80,&(moby->pos).x,&local_20);
  }
  return;
}



//==== 003abc80  ns=mobyupdate_helpers  size=0x14
// sig: undefined M530_003abc80(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M530_003abc80(void)

{
  DAT_008437e8 = 0x10000;
  return;
}



//==== 003abcb8  ns=mobyupdate_helpers  size=0x88c
// sig: undefined M530_003abcb8(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M530_003abcb8(int param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  short sVar18;
  float *pfVar19;
  ulonglong *puVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float *pfVar25;
  undefined4 *puVar26;
  longlong lVar24;
  undefined4 *puVar28;
  longlong lVar27;
  float *pfVar29;
  undefined4 *puVar30;
  short *psVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  int iVar37;
  ulonglong unaff_r27;
  short *psVar38;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  undefined4 *puVar39;
  ulonglong unaff_r31;
  int iVar40;
  ulonglong in_LR;
  longlong lVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar50;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  puVar20 = (ulonglong *)(uVar22 - 0x1f0);
  *puVar20 = uVar22;
  puVar20[0x40] = in_LR;
  puVar20[0x2c] = in_f14;
  puVar20[0x2d] = in_f15;
  puVar20[0x2e] = in_f16;
  puVar20[0x2f] = in_f17;
  puVar20[0x30] = in_f18;
  puVar20[0x31] = in_f19;
  puVar20[0x32] = in_f20;
  puVar20[0x33] = in_f21;
  puVar20[0x34] = in_f22;
  puVar20[0x35] = in_f23;
  puVar20[0x36] = in_f24;
  puVar20[0x37] = in_f25;
  puVar20[0x38] = in_f26;
  puVar20[0x39] = in_f27;
  puVar20[0x3a] = in_f28;
  puVar20[0x3b] = in_f29;
  puVar20[0x3c] = in_f30;
  puVar20[0x3d] = in_f31;
  puVar20[0x2a] = unaff_r30;
  puVar20[0x2b] = unaff_r31;
  puVar20[0x29] = unaff_r29;
  uVar17 = DAT_0084550c;
  pfVar19 = *(float **)(param_1 + 0x78);
  puVar20[0x28] = unaff_r28;
  puVar20[0x27] = unaff_r27;
  uVar23 = draw::GetEffectTex(uVar17);
  puVar20[0x1d] = uVar23;
  uVar23 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar20[0x1e] = uVar23;
  uVar23 = FUN_00502f08(0,0,0,0,0,0);
  puVar20[0x1c] = uVar23;
  uVar23 = idol_draw::PackCmd(DAT_010c9f30,DAT_00845500,DAT_010c9f34,DAT_00845504,DAT_00845508);
  puVar20[0x1f] = uVar23;
  uVar17 = DAT_00845510;
  fVar1 = *(float *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar20 + 0xbc) = DAT_00845510;
  *(undefined4 *)(puVar20 + 0x17) = uVar17;
  *(undefined4 *)((int)puVar20 + 0xb4) = uVar17;
  *(undefined4 *)(puVar20 + 0x16) = uVar17;
  iVar40 = 0;
  if (((ABS(GameCamera.posX - fVar1) < 16.0) &&
      (ABS(GameCamera.posY - *(float *)(param_1 + 0x14)) < 16.0)) ||
     (*(char *)(param_1 + 0x20) == '\x01')) {
    *(undefined1 *)(param_1 + 0xbc) = 1;
    fastfunc::FastDecTimerS32(ZEXT48(pfVar19) + 0x40);
    dVar42 = (double)fastfunc::FastIntToDouble(pfVar19[0x10]);
    puVar20[0x24] = (longlong)(int)(animationSpeed * 60.5);
    dVar43 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar20 + 0x124));
    dVar50 = 0.0;
    dVar44 = (double)GameCamera.posX;
    dVar45 = (double)GameCamera.posY;
    pfVar25 = (float *)&DAT_010c9c00;
    pfVar34 = (float *)&DAT_010c98d0;
    iVar37 = 0;
    puVar20[0x20] = (ulonglong)(double)GameCamera.posZ;
    puVar20[0x22] = (ulonglong)dVar44;
    pfVar33 = (float *)&DAT_010c9270;
    puVar20[0x21] = (ulonglong)dVar45;
    pfVar35 = (float *)&DAT_00843810;
    pfVar36 = (float *)&DAT_00844a00;
    puVar20[0x23] = 0x3fb99999a0000000;
    pfVar29 = (float *)&DAT_010c9c04;
    pfVar32 = (float *)&DAT_010c98d4;
    do {
      fVar2 = pfVar35[1];
      fVar3 = *pfVar35;
      fVar4 = pfVar35[2];
      fVar5 = pfVar35[3];
      fVar6 = pfVar19[6];
      fVar7 = pfVar19[2];
      fVar8 = pfVar19[10];
      fVar9 = pfVar19[0xe];
      fVar10 = pfVar19[3];
      fVar11 = pfVar19[7];
      fVar12 = pfVar19[0xb];
      fVar14 = pfVar19[0xc] * fVar5 + pfVar19[8] * fVar4 + *pfVar19 * fVar3 + pfVar19[4] * fVar2;
      fVar1 = pfVar19[0xd] * fVar5 + pfVar19[9] * fVar4 + pfVar19[1] * fVar3 + pfVar19[5] * fVar2;
      fVar13 = pfVar19[0xf];
      *pfVar33 = fVar14;
      pfVar33[1] = fVar1;
      fVar1 = (float)((double)fVar1 - (double)puVar20[0x21]);
      fVar8 = fVar9 * fVar5 + fVar8 * fVar4 + fVar7 * fVar3 + fVar6 * fVar2;
      fVar6 = (float)((double)fVar14 - (double)puVar20[0x22]);
      fVar7 = (float)((double)fVar8 - (double)puVar20[0x20]);
      pfVar33[2] = fVar8;
      fVar8 = fVar7 * fVar7 + fVar6 * fVar6 + fVar1 * fVar1;
      pfVar33[3] = fVar13 * fVar5 + fVar12 * fVar4 + fVar10 * fVar3 + fVar11 * fVar2;
      dVar44 = dVar50;
      dVar45 = dVar50;
      dVar51 = dVar50;
      if (SQRT(fVar8) != 0.0) {
        fVar2 = 1.0 / SQRT(fVar8);
        fVar2 = -(fVar8 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
        fVar2 = -(fVar8 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
        fVar2 = -(fVar8 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
        dVar51 = (double)(fVar6 * fVar2);
        dVar44 = (double)(fVar1 * fVar2);
        dVar45 = (double)(fVar7 * fVar2);
      }
      fVar1 = pfVar36[1];
      fVar6 = *pfVar36;
      fVar7 = pfVar36[2];
      fVar2 = pfVar36[3];
      fVar4 = pfVar19[0xd] * fVar2 + pfVar19[9] * fVar7 + pfVar19[1] * fVar6 + pfVar19[5] * fVar1;
      fVar3 = pfVar19[0xc] * fVar2 + pfVar19[8] * fVar7 + *pfVar19 * fVar6 + pfVar19[4] * fVar1;
      fVar6 = pfVar19[0xe] * fVar2 + pfVar19[10] * fVar7 + pfVar19[2] * fVar6 + pfVar19[6] * fVar1;
      dVar46 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
      fVar1 = (float)((double)puVar20[0x23] / dVar46);
      dVar47 = dVar50;
      if (0.0 - dVar46 < 0.0) {
        dVar47 = (double)(fVar4 * fVar1);
      }
      dVar48 = dVar50;
      if (0.0 - dVar46 < 0.0) {
        dVar48 = (double)(fVar3 * fVar1);
      }
      dVar49 = dVar50;
      if (0.0 - dVar46 < 0.0) {
        dVar49 = (double)(fVar6 * fVar1);
      }
      if (dVar46 - 0.0 < 0.0) {
        dVar47 = (double)(fVar4 * fVar1);
      }
      if (dVar46 - 0.0 < 0.0) {
        dVar48 = (double)(fVar3 * fVar1);
      }
      if (dVar46 - 0.0 < 0.0) {
        dVar49 = (double)(fVar6 * fVar1);
      }
      dVar46 = (double)((float)(dVar49 * dVar45 +
                               (double)(float)(dVar48 * dVar51 + (double)(float)(dVar47 * dVar44)))
                       * 2.0);
      fVar1 = -(float)(dVar47 * dVar46 - dVar44);
      fVar2 = -(float)(dVar48 * dVar46 - dVar51);
      fVar6 = -(float)(dVar49 * dVar46 - dVar45);
      fVar7 = fVar6 * fVar6 + fVar2 * fVar2 + fVar1 * fVar1;
      dVar44 = dVar50;
      dVar45 = dVar50;
      dVar51 = dVar50;
      if (SQRT(fVar7) != 0.0) {
        fVar3 = 1.0 / SQRT(fVar7);
        fVar3 = -(fVar7 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar7 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar7 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        dVar45 = (double)(fVar3 * fVar2);
        dVar44 = (double)(fVar3 * fVar1);
        dVar51 = (double)(fVar3 * fVar6);
      }
      dVar51 = (double)(SQRT((float)(dVar51 + 1.0) * 2.0) * 2.0);
      fVar1 = (float)(dVar45 / dVar51) + 0.5;
      fVar6 = (float)(dVar44 / dVar51) + 0.5;
      if ((*(char *)(param_1 + 0x20) == '\x01') || (pfVar19[0x10] == 0.0)) {
        *pfVar34 = fVar1;
        *pfVar32 = fVar6;
      }
      else {
        fVar7 = *pfVar29;
        *pfVar34 = (*pfVar25 - fVar1) * (float)(dVar42 / dVar43) + fVar1;
        *pfVar32 = (fVar7 - fVar6) * (float)(dVar42 / dVar43) + fVar6;
      }
      iVar37 = iVar37 + 1;
      pfVar33 = pfVar33 + 4;
      pfVar35 = pfVar35 + 4;
      pfVar36 = pfVar36 + 4;
      pfVar25 = pfVar25 + 2;
      pfVar34 = pfVar34 + 2;
      pfVar29 = pfVar29 + 2;
      pfVar32 = pfVar32 + 2;
    } while (iVar37 < 0x66);
    if (*(char *)(param_1 + 0x20) == '\x01') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    if (*(char *)(param_1 + 0xbc) == '\x01') {
      *(undefined1 *)(param_1 + 0xbc) = 0;
      puVar39 = &DAT_010c98d0;
      puVar26 = &DAT_010c9c00;
      iVar37 = 0;
      pfVar25 = (float *)&DAT_010c9270;
      pfVar34 = (float *)&DAT_00843810;
      puVar28 = &DAT_010c98d4;
      puVar30 = &DAT_010c9c04;
      do {
        uVar17 = *puVar28;
        *puVar26 = *puVar39;
        *puVar30 = uVar17;
        fVar1 = pfVar34[1];
        fVar6 = pfVar19[5];
        fVar7 = *pfVar34;
        fVar2 = pfVar19[6];
        fVar3 = pfVar19[1];
        fVar4 = pfVar19[7];
        fVar5 = pfVar19[2];
        iVar37 = iVar37 + 1;
        puVar39 = puVar39 + 2;
        fVar8 = pfVar34[2];
        fVar9 = pfVar19[3];
        fVar10 = pfVar19[9];
        fVar11 = pfVar19[10];
        fVar12 = pfVar34[3];
        puVar26 = puVar26 + 2;
        fVar13 = pfVar19[0xb];
        puVar28 = puVar28 + 2;
        fVar14 = pfVar19[0xd];
        puVar30 = puVar30 + 2;
        pfVar34 = pfVar34 + 4;
        fVar15 = pfVar19[0xe];
        fVar16 = pfVar19[0xf];
        *pfVar25 = pfVar19[0xc] * fVar12 +
                   pfVar19[8] * fVar8 + *pfVar19 * fVar7 + pfVar19[4] * fVar1;
        pfVar25[1] = fVar14 * fVar12 + fVar10 * fVar8 + fVar3 * fVar7 + fVar6 * fVar1;
        pfVar25[2] = fVar15 * fVar12 + fVar11 * fVar8 + fVar5 * fVar7 + fVar2 * fVar1;
        pfVar25[3] = fVar16 * fVar12 + fVar13 * fVar8 + fVar9 * fVar7 + fVar4 * fVar1;
        pfVar25 = pfVar25 + 4;
      } while (iVar37 < 0x66);
    }
    else {
      pfVar25 = (float *)&DAT_010c9270;
      pfVar34 = (float *)&DAT_00843810;
      lVar24 = 0x66;
      do {
        fVar1 = pfVar34[1];
        fVar6 = pfVar19[5];
        fVar7 = *pfVar34;
        fVar2 = pfVar19[6];
        fVar3 = pfVar19[1];
        fVar4 = pfVar19[7];
        fVar5 = pfVar19[2];
        fVar8 = pfVar34[2];
        fVar9 = pfVar19[3];
        fVar10 = pfVar19[9];
        fVar11 = pfVar19[10];
        fVar12 = pfVar34[3];
        fVar13 = pfVar19[0xb];
        pfVar34 = pfVar34 + 4;
        fVar14 = pfVar19[0xd];
        fVar15 = pfVar19[0xe];
        fVar16 = pfVar19[0xf];
        *pfVar25 = pfVar19[0xc] * fVar12 +
                   pfVar19[8] * fVar8 + *pfVar19 * fVar7 + pfVar19[4] * fVar1;
        pfVar25[1] = fVar14 * fVar12 + fVar10 * fVar8 + fVar3 * fVar7 + fVar6 * fVar1;
        pfVar25[2] = fVar15 * fVar12 + fVar11 * fVar8 + fVar5 * fVar7 + fVar2 * fVar1;
        pfVar25[3] = fVar16 * fVar12 + fVar13 * fVar8 + fVar9 * fVar7 + fVar4 * fVar1;
        pfVar25 = pfVar25 + 4;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    auVar52 = ZEXT416(0xffffffff);
    auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
    auVar52 = loadVectorLeftIndexed(4,0x3abc98);
    auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar52 = vectorMultiplyAddFloatingPoint
                        (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                         auVar53);
    auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
    auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar17 = storeVectorElementWordIndexed
                       (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x40,
                        ZEXT48(pfVar19));
    *(undefined4 *)((uint)(pfVar19 + 0x10) & 0xfffffffc) = uVar17;
  }
  psVar38 = &DAT_00843e70;
  do {
    lVar27 = uVar22 - 0x180;
    lVar41 = 4;
    lVar24 = uVar22 - 0x1f0;
    psVar31 = psVar38;
    do {
      sVar18 = *psVar31;
      psVar31 = psVar31 + 3;
      iVar21 = (int)((longlong)sVar18 << 4);
      iVar37 = (int)((longlong)sVar18 << 3);
      puVar26 = (undefined4 *)lVar27;
      *puVar26 = *(undefined4 *)((int)&DAT_010c9270 + iVar21);
      puVar26[1] = *(undefined4 *)((int)&DAT_010c9274 + iVar21);
      puVar26[2] = *(undefined4 *)((int)&DAT_010c9278 + iVar21);
      puVar26[3] = *(undefined4 *)((int)&DAT_010c927c + iVar21);
      uVar17 = *(undefined4 *)((int)&DAT_010c98d4 + iVar37);
      lVar27 = lVar27 + 0x10;
      *(undefined4 *)((int)lVar24 + 0xc0) = *(undefined4 *)((int)&DAT_010c98d0 + iVar37);
      *(undefined4 *)((int)lVar24 + 0xc4) = uVar17;
      lVar24 = lVar24 + 8;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
    draw::FastDrawQuad(uVar22 - 0x180,0,0,EffectTexHeaders,9);
    iVar40 = iVar40 + 1;
    psVar38 = psVar38 + 0xc;
  } while (iVar40 < 0x4a);
  return;
}



//==== 003ac544  ns=mobyupdate_unsorted  size=0xd8
// sig: undefined UpdateMoby_530(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d7e0 draw::RegisterPostDraw; 000f1038 mobyfunc::GetBoneTransformations

/* Moby 530 */

void mobyupdate_unsorted::UpdateMoby_530(MobyInstance *moby)

{
  void *pvVar1;
  
  pvVar1 = moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x01';
    moby->setByGroup = '\x01';
    *(undefined4 *)((int)pvVar1 + 0x40) = 0;
  }
  if ((g_gameMode == GAME_MODE_SCENE) && ((update::g_SceneId < 3 || (update::g_SceneId == 4)))) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  mobyfunc::GetBoneTransformations(moby,0,pvVar1);
  if (moby->enabled != '\0') {
    draw::RegisterPostDraw(&PTR_M530_003abcb8_0070d0b8,moby);
  }
  return;
}



//==== 003ac61c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M531_003ac61c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M531_003ac61c(void)

{
  DAT_00845560 = 0x10000;
  return;
}



//==== 003ac630  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_531(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 531 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_531(MobyInstance *moby)

{
  return moby;
}



//==== 003ac634  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_532(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 532 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_532(MobyInstance *moby)

{
  return moby;
}



//==== 003ac638  ns=mobyupdate_unsorted  size=0x28
// sig: undefined UpdateMoby_533(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 533 */

void mobyupdate_unsorted::UpdateMoby_533(MobyInstance *moby)

{
  if (g_SpaceshipPtr != moby) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (NO_UPDATE|DISABLED);
  }
  return;
}



//==== 003ac678  ns=mobyupdate_helpers  size=0x1e0
// sig: undefined M541_003ac678(void)
// callers(1): 003ad150 mobyupdate_unsorted::UpdateMoby_541
// callees(2): 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng

undefined8
mobyupdate_helpers::M541_003ac678
          (double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  float target;
  undefined8 uVar3;
  int unused;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float local_60 [2];
  
  unused = 0xd0;
  iVar1 = *(int *)(param_2 + 0x78);
  _fStack00000040 = param_4;
  _fStack00000048 = param_5;
  mobyutil::OrganicDeltAng
            ((float)param_1,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 25.132742,(float *)(param_2 + 0x48),0xd0,
             (float *)(iVar1 + 0x100));
  dVar12 = (double)(fStack00000044 - *(float *)(param_2 + 0x14));
  dVar11 = (double)(fStack00000040 - *(float *)(param_2 + 0x10));
  dVar10 = (double)(fStack00000048 - *(float *)(param_2 + 0x18));
  dVar8 = 0.0;
  local_60[0] = 0.0;
  target = SQRT((float)(dVar10 * dVar10 +
                       (double)(float)(dVar11 * dVar11 + (double)(float)(dVar12 * dVar12))));
  dVar9 = (double)target;
  mobyutil::OrganicDelt
            (target,DAT_0071f418 * 12.0,DAT_0071f418 * 12.0,mobyutil::g_FrameTime * 6.0,local_60,
             unused,(float *)(iVar1 + 0xfc));
  dVar4 = (double)(float)((double)*(float *)(iVar1 + 0xfc) / dVar9);
  dVar6 = dVar8;
  if (dVar8 - dVar9 < 0.0) {
    dVar6 = (double)(float)(dVar10 * dVar4);
  }
  dVar7 = dVar8;
  if (dVar8 - dVar9 < 0.0) {
    dVar7 = (double)(float)(dVar12 * dVar4);
  }
  dVar5 = dVar8;
  if (dVar8 - dVar9 < 0.0) {
    dVar5 = (double)(float)(dVar11 * dVar4);
  }
  if (dVar9 - dVar8 < 0.0) {
    dVar6 = (double)(float)(dVar10 * dVar4);
  }
  if (dVar9 - dVar8 < 0.0) {
    dVar7 = (double)(float)(dVar12 * dVar4);
  }
  if (dVar9 - dVar8 < 0.0) {
    dVar5 = (double)(float)(dVar11 * dVar4);
  }
  *(float *)(param_2 + 0x18) = (float)((double)*(float *)(param_2 + 0x18) + dVar6);
  *(float *)(param_2 + 0x14) = (float)((double)*(float *)(param_2 + 0x14) + dVar7);
  *(float *)(param_2 + 0x10) = (float)((double)*(float *)(param_2 + 0x10) + dVar5);
  if ((0.05000000074505806 <= dVar9) ||
     (uVar2 = (int)*(uint *)(iVar1 + 0xfc) >> 0x1f,
     0x3ba3d709 < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0xfc)) - uVar2))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



//==== 003ac860  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M541_003ac860(void)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M541_003ac860(MobyInstance *param_1)

{
  ushort uVar1;
  void *pvVar2;
  ushort *puVar3;
  double dVar4;
  double dVar5;
  
  if (param_1->group != 0xff) {
    puVar3 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
    dVar5 = (double)(DAT_008455a0 * 0.017453292 * mobyutil::g_FrameTime);
    do {
      do {
      } while (MobyInstance[*puVar3 & 0x7fff].oClass != TEST_DUMMY);
      pvVar2 = MobyInstance[*puVar3 & 0x7fff].pVar;
      *(undefined4 *)((int)pvVar2 + 0x118) = worldUpdateTime;
      dVar4 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar2 + 0x11c),(float)dVar5);
      *(float *)((int)pvVar2 + 0x11c) = (float)dVar4;
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
    RegisterFuncForMoby(&PTR_M542_003aefd0_0070d110,param_1);
  }
  return;
}



//==== 003ac968  ns=mobyupdate_helpers  size=0x780
// sig: undefined M541_003ac968(void)
// callers(1): 003ad150 mobyupdate_unsorted::UpdateMoby_541
// callees(13): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00500fa8 fastfunc::FastApplyTransform; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M541_003ac968(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iVar16;
  undefined4 uVar17;
  longlong lVar14;
  longlong lVar15;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ushort *puVar22;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar31 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x130;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x28] = in_LR;
  puVar9[0x25] = in_f31;
  puVar9[0x24] = unaff_r31;
  puVar12 = (undefined4 *)(uVar13 - 0x40);
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  uVar1 = param_1->state;
  puVar9[0x23] = unaff_r30;
  puVar9[0x22] = unaff_r29;
  puVar9[0x21] = unaff_r28;
  puVar9[0x20] = unaff_r27;
  if (uVar1 != '\x01') {
    pvVar7 = param_1->pVar;
    uVar23 = ZEXT48(pvVar7);
    if (*(char *)((int)pvVar7 + 0x2e) == '\x02') {
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      *(undefined1 *)((int)pvVar7 + 0x2e) = 1;
      *(undefined4 *)((int)pvVar7 + 0x20) = 0x40000000;
      auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar29 = loadVectorLeftIndexed(uVar13 - 0x40,0x3ac950);
      auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar31,auVar30);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar17 = storeVectorElementWordIndexed
                         (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xf0,uVar23)
      ;
      *(undefined4 *)((int)pvVar7 + 0xf0U & 0xfffffffc) = uVar17;
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      iVar16 = *(int *)((int)pvVar7 + 200);
      *(int *)((int)pvVar7 + 200) = iVar16 + -1;
      if (iVar16 == 0) {
        if (*(MobyInstance **)((int)pvVar7 + 0x104) != (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar7 + 0x104));
        }
        mobyfunc::DeleteMoby(param_1);
      }
      else {
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        param_1->state = '\v';
        auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        (param_1->pos).x = *(f32 *)((int)pvVar7 + 0xe0);
        (param_1->pos).y = *(f32 *)((int)pvVar7 + 0xe4);
        (param_1->pos).z = *(f32 *)((int)pvVar7 + 0xe8);
        (param_1->pos).w = *(f32 *)((int)pvVar7 + 0xec);
        auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar31,auVar29);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar17 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xf0,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0xf0U & 0xfffffffc) = uVar17;
      }
    }
    else {
      if ((*(int *)((int)pvVar7 + 0x118) != worldUpdateTime) && (param_1->group != 0xff)) {
        puVar22 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
        dVar27 = (double)(DAT_008455a0 * 0.017453292 * mobyutil::g_FrameTime);
        iVar16 = worldUpdateTime;
        do {
          do {
          } while (MobyInstance[*puVar22 & 0x7fff].oClass != TEST_DUMMY);
          pvVar8 = MobyInstance[*puVar22 & 0x7fff].pVar;
          *(int *)((int)pvVar8 + 0x118) = iVar16;
          dVar25 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar8 + 0x11c),(float)dVar27);
          *(float *)((int)pvVar8 + 0x11c) = (float)dVar25;
          uVar6 = *puVar22;
          puVar22 = puVar22 + 1;
          iVar16 = worldUpdateTime;
        } while (-1 < (short)uVar6);
        RegisterFuncForMoby(&PTR_M542_003aefd0_0070d110,param_1);
      }
      dVar27 = 0.0;
      *(undefined4 *)((int)puVar9 + 0xb4) = 0;
      uVar17 = mobyutil::MB_damage(param_1,0x330000,0);
      mobyutil::MB_HandleDamage(param_1,uVar17,uVar23 + 0x20,0,puVar9 + 0x16,(int)puVar9 + 0xb4,0,4)
      ;
      if ((*(int *)(puVar9 + 0x16) != 1) && (param_1->state != '\v' && param_1->state != '\n')) {
        fVar3 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0xb4);
        *(float *)((int)pvVar7 + 0x20) = fVar3;
        if (dVar27 < (double)fVar3) {
          if (param_1->state != 9) {
            *(uint *)((int)pvVar7 + 0x110) = (uint)param_1->state;
            *(uint *)((int)pvVar7 + 0x114) = (uint)param_1->animationId;
          }
          fVar3 = g_heroPosition.x - (param_1->pos).x;
          fVar4 = g_heroPosition.y - (param_1->pos).y;
          dVar28 = ABS((double)fVar3);
          dVar26 = ABS((double)fVar4);
          *(float *)(puVar9 + 0x17) = fVar3;
          *(float *)((int)puVar9 + 0xbc) = fVar4;
          *(float *)(puVar9 + 0x18) = (float)(dVar28 - dVar26);
          uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
          dVar25 = ABS((double)*(float *)(puVar9 + 0x17));
          if ((double)*(float *)(puVar9 + 0x18) - dVar27 < 0.0) {
            dVar25 = dVar26;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar26 = ABS((double)*(float *)((int)puVar9 + 0xbc));
          if ((double)*(float *)(puVar9 + 0x18) - dVar27 < 0.0) {
            dVar26 = dVar28;
          }
          fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          dVar28 = dVar27;
          if (dVar27 < dVar25) {
            lVar14 = uVar13 - 0x120;
            lVar21 = uVar13 - 0x5c;
            lVar18 = uVar13 - 0x6c;
            lVar24 = 2;
            fVar5 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
            fVar2 = fVar5 * fVar5;
            *(float *)(puVar9 + 0x1a) = fVar5;
            *(float *)(puVar9 + 0x19) = fVar5;
            *(float *)((int)puVar9 + 0xcc) = fVar5;
            *(float *)((int)puVar9 + 0xc4) = fVar5;
            fVar5 = fVar2 * fVar2;
            *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar2;
            *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar5;
            *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar5 * fVar2;
            do {
              *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar5 * fVar5;
              iVar16 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar5 * fVar5;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar13 - 0x6c;
            pfVar19 = (float *)&DAT_007358e0;
            lVar14 = lVar15;
            lVar18 = lVar21;
            do {
              fVar5 = *pfVar19;
              fVar2 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar5;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar2;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar14 = 2;
            dVar25 = dVar27;
            do {
              iVar16 = (int)lVar15;
              iVar10 = (int)lVar21;
              lVar15 = lVar15 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0xc4)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            dVar28 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar4);
          }
          *(float *)((int)pvVar7 + 0x10c) = (float)dVar28;
          param_1->state = '\t';
          if (param_1->animationId != '\b') {
            mobyutil::MB_SetAnimation(param_1,8,2,1);
          }
          *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
          mobyutil::MB_UpdateLightsTransition(param_1,uVar23 + 0x60);
        }
        else {
          param_1->state = '\n';
        }
      }
      param_1->damage = -1;
      mobyutil::MB_ColorDyingMoby(param_1,uVar23 + 0x60);
      if (*(uint *)((int)pvVar7 + 0x104) != 0) {
        mobyfunc::GetBonePosition
                  (param_1,DAT_010c9f40,(ulonglong)*(uint *)((int)pvVar7 + 0x104) + 0x10);
        mobyfunc::GetBoneTransformations(param_1,DAT_010c9f40,uVar13 - 0xc0);
        fastfunc::FastApplyTransform
                  ((Vec4 *)(*(int *)((int)pvVar7 + 0x104) + 0xc0),(Vec4 *)(uVar13 - 0xc0));
        iVar16 = *(int *)((int)pvVar7 + 0x104);
        fVar3 = *(float *)(iVar16 + 0xc4);
        fVar4 = *(float *)(iVar16 + 0xc0);
        fVar5 = *(float *)(iVar16 + 200);
        fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
        if ((double)SQRT(fVar2) == dVar27) {
          uVar17 = *(undefined4 *)(iVar16 + 0xcc);
          dVar25 = dVar27;
          dVar28 = dVar27;
          dVar26 = dVar27;
        }
        else {
          fVar11 = 1.0 / SQRT(fVar2);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          uVar17 = *(undefined4 *)(iVar16 + 0xcc);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          dVar26 = (double)(fVar4 * fVar11);
          dVar28 = (double)(fVar3 * fVar11);
          dVar25 = (double)(fVar5 * fVar11);
        }
        *(float *)(iVar16 + 0xc0) = (float)dVar26;
        *(float *)(iVar16 + 0xc4) = (float)dVar28;
        *(float *)(iVar16 + 200) = (float)dVar25;
        *(undefined4 *)(iVar16 + 0xcc) = uVar17;
        iVar16 = *(int *)((int)pvVar7 + 0x104);
        fVar3 = *(float *)(iVar16 + 0xd4);
        fVar4 = *(float *)(iVar16 + 0xd0);
        fVar5 = *(float *)(iVar16 + 0xd8);
        fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
        if ((double)SQRT(fVar2) == dVar27) {
          uVar17 = *(undefined4 *)(iVar16 + 0xdc);
          dVar25 = dVar27;
          dVar28 = dVar27;
          dVar26 = dVar27;
        }
        else {
          fVar11 = 1.0 / SQRT(fVar2);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          uVar17 = *(undefined4 *)(iVar16 + 0xdc);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          dVar26 = (double)(fVar4 * fVar11);
          dVar28 = (double)(fVar3 * fVar11);
          dVar25 = (double)(fVar5 * fVar11);
        }
        *(float *)(iVar16 + 0xd0) = (float)dVar26;
        *(float *)(iVar16 + 0xd4) = (float)dVar28;
        *(float *)(iVar16 + 0xd8) = (float)dVar25;
        *(undefined4 *)(iVar16 + 0xdc) = uVar17;
        iVar16 = *(int *)((int)pvVar7 + 0x104);
        fVar3 = *(float *)(iVar16 + 0xe4);
        fVar4 = *(float *)(iVar16 + 0xe0);
        fVar5 = *(float *)(iVar16 + 0xe8);
        fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
        if ((double)SQRT(fVar2) == dVar27) {
          uVar17 = *(undefined4 *)(iVar16 + 0xec);
          dVar25 = dVar27;
          dVar28 = dVar27;
        }
        else {
          fVar11 = 1.0 / SQRT(fVar2);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          uVar17 = *(undefined4 *)(iVar16 + 0xec);
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar2 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          dVar25 = (double)(fVar4 * fVar11);
          dVar27 = (double)(fVar3 * fVar11);
          dVar28 = (double)(fVar5 * fVar11);
        }
        *(float *)(iVar16 + 0xe0) = (float)dVar25;
        *(float *)(iVar16 + 0xe4) = (float)dVar27;
        *(float *)(iVar16 + 0xe8) = (float)dVar28;
        *(undefined4 *)(iVar16 + 0xec) = uVar17;
        mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0x104));
      }
      mobyutil::MB_ColorDyingMoby(param_1,uVar23 + 0x60);
    }
  }
  return;
}



//==== 003ad150  ns=mobyupdate_unsorted  size=0x1de0
// sig: undefined UpdateMoby_541(MobyInstance * moby)
// callers(0): 
// callees(29): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 0010581c mobyutil::SetCollDamIn; 00105870 mobyutil::DamageSphereAtPos; 00108180 mobyutil::MB_computeLobVelocity; 0010a2e0 mobyutil::OrganicDeltAng; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 00111ba0 mobyutil::MB_getTargetInArea; 00113e88 mobyutil::MB_MayaFrameTrigger; 00119a18 mobyfunc::DoManipulator; 00119ae8 mobyutil::MB_InitDebrisList; 00119b38 mobyutil::MB_UpdateDebris; 0011a018 mobyutil::MB_DebrisCollide; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound; 0032ca80 FUN_0032ca80; 003ac678 mobyupdate_helpers::M541_003ac678; 003ac968 mobyupdate_helpers::M541_003ac968; 00401f88 FUN_00401f88; 00402050 FUN_00402050; 004fff60 fastfunc::FastDecTimerS32

/* Moby 541 */

void mobyupdate_unsorted::UpdateMoby_541(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  short sVar12;
  MOBY_OCLASSES MVar13;
  MobyModeBit MVar14;
  void *pvVar15;
  Spline *pSVar16;
  ulonglong *puVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  Cuboid *pCVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined2 uVar32;
  int iVar28;
  undefined4 uVar29;
  MobyInstance *pMVar30;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar31;
  longlong lVar33;
  longlong lVar34;
  float *pfVar35;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar36;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  
  lVar24 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar27 = uVar23 - 0x2e0;
  puVar17 = (ulonglong *)lVar27;
  *puVar17 = uVar23;
  puVar17[0x5e] = in_LR;
  puVar17[0x59] = in_f29;
  puVar17[0x5a] = in_f30;
  puVar17[0x5b] = in_f31;
  puVar17[0x58] = unaff_r31;
  puVar17[0x56] = unaff_r29;
  puVar17[0x57] = unaff_r30;
  puVar17[0x55] = unaff_r28;
  puVar17[0x54] = unaff_r27;
  puVar17[0x53] = unaff_r26;
  pvVar15 = moby->pVar;
  uVar36 = ZEXT48(pvVar15);
  mobyupdate_helpers::M541_003ac968();
  pSVar16 = Splines[*(int *)((int)pvVar15 + 0xc4)];
  mobyfunc::DoManipulator(0x4004000000000000,moby,2,(Manipulator *)((int)pvVar15 + 0x140));
  pCVar22 = Cuboids;
  fVar4 = DAT_00845594;
  bVar1 = moby->state;
  fVar48 = (moby->pos).z;
  fVar2 = (moby->pos).w;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      if (moby->animationId == '\n') {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\v')) {
          mobyutil::MB_SetAnimation(lVar24,0xb,0,1);
        }
      }
      else {
        iVar28 = *(int *)((int)pvVar15 + 0xdc);
        fVar3 = (moby->pos).y;
        *(float *)(puVar17 + 0x16) = pSVar16->points[iVar28].x - (moby->pos).x;
        fVar4 = fVar4 * mobyutil::g_FrameTime;
        *(float *)((int)puVar17 + 0xb4) = pSVar16->points[iVar28].y - fVar3;
        *(float *)(puVar17 + 0x17) = pSVar16->points[iVar28].z - fVar48;
        *(float *)((int)puVar17 + 0xbc) = pSVar16->points[iVar28].w;
        mobyutil::ClampVec3Magnitude((double)fVar4,(Vec4 *)(puVar17 + 0x16));
        uVar29 = DAT_010c9f40;
        fVar48 = *(float *)((int)puVar17 + 0xb4);
        fVar4 = *(float *)(puVar17 + 0x17);
        (moby->pos).x = (moby->pos).x + *(float *)(puVar17 + 0x16);
        (moby->pos).y = (moby->pos).y + fVar48;
        (moby->pos).z = (moby->pos).z + fVar4;
        mobyfunc::GetBonePosition(lVar24,uVar29,uVar23 - 0x220);
        puVar17[0xe] = 0;
        mobyutil::DamageSphereAtPos
                  (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar24,uVar23 - 0x220,
                   &DAT_003ad0e8,1);
        if ((CollOutput.pMoby == g_heroMobyPtr) && (DAT_00969ea0 == 0)) {
          sound::PlayMobySound(6,0,moby);
        }
        if (SQRT(*(float *)(puVar17 + 0x17) * *(float *)(puVar17 + 0x17) +
                 *(float *)(puVar17 + 0x16) * *(float *)(puVar17 + 0x16) +
                 *(float *)((int)puVar17 + 0xb4) * *(float *)((int)puVar17 + 0xb4)) < 0.0001) {
          if (moby->animationId != '\t') {
            puVar17[0x4d] = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar24,9,0,*(undefined4 *)((int)puVar17 + 0x26c));
          }
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          moby->state = '\x06';
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x34,0x3ad0e8);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar28 = *(int *)((int)pvVar15 + 0xdc);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar29 = storeVectorElementWordIndexed
                             (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,
                              uVar36);
          *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
          if (iVar28 == 0) {
            *(undefined4 *)((int)pvVar15 + 0x108) = 1;
          }
          else if (iVar28 == pSVar16->cnt + -1) {
            *(undefined4 *)((int)pvVar15 + 0x108) = 0xffffffff;
          }
        }
      }
    }
    else if (bVar1 == 4) {
      if (*(int *)((int)pvVar15 + 0xb4) == 2) {
        iVar28 = *(int *)((int)pvVar15 + *(int *)((int)pvVar15 + 0xdc) * 4 + 0xd0);
        *(float *)(puVar17 + 0x10) = Cuboids[iVar28].pos.x;
        *(float *)((int)puVar17 + 0x84) = pCVar22[iVar28].pos.y;
        *(float *)(puVar17 + 0x11) = pCVar22[iVar28].pos.z;
        fVar48 = pCVar22[iVar28].pos.w;
      }
      else {
        *(undefined4 *)(puVar17 + 0x10) = *(undefined4 *)((int)pvVar15 + 0x70);
        *(undefined4 *)((int)puVar17 + 0x84) = *(undefined4 *)((int)pvVar15 + 0x74);
        *(undefined4 *)(puVar17 + 0x11) = *(undefined4 *)((int)pvVar15 + 0x78);
        fVar48 = *(float *)((int)pvVar15 + 0x7c);
      }
      *(float *)((int)puVar17 + 0x8c) = fVar48;
      dVar38 = 15.0;
      iVar28 = mobyutil::MB_MayaFrameTrigger(15.0,moby);
      if ((iVar28 == 0) || (*(int *)((int)pvVar15 + 0x104) == 0)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          *(uint *)((int)pvVar15 + 0xdc) = *(int *)((int)pvVar15 + 0xdc) + 1U & 1;
          moby->state = '\x03';
          if (moby->animationId != '\x17') {
            puVar17[0x4d] = (longlong)(int)(animationSpeed * 30.5);
            mobyutil::MB_SetAnimation(lVar24,0x17,0,*(undefined4 *)((int)puVar17 + 0x26c));
          }
        }
      }
      else {
        dVar41 = (double)(float)((double)DAT_00845590 * (double)mobyutil::g_FrameTime);
        dVar40 = (double)(float)((double)DAT_0071f418 * 10.0);
        dVar39 = (double)mobyutil::GetGroundZ
                                   (0x3fe0000000000000,0x4024000000000000,
                                    (double)mobyutil::g_FrameTime,(double)DAT_0071f418,
                                    uVar23 - 0x260,0);
        uVar29 = *(undefined4 *)((int)pvVar15 + 0x104);
        lVar26 = uVar23 - 0x250;
        *(float *)(puVar17 + 0x11) = (float)dVar39;
        mobyfunc::GetBonePosition(uVar29,0,lVar26);
        fVar48 = *(float *)((int)puVar17 + 0x84) - *(float *)((int)puVar17 + 0x94);
        fVar4 = *(float *)(puVar17 + 0x10) - *(float *)(puVar17 + 0x12);
        dVar39 = (double)SQRT(fVar4 * fVar4 + fVar48 * fVar48);
        *(undefined4 *)((int)puVar17 + 0xac) = *(undefined4 *)((int)puVar17 + 0x8c);
        *(undefined4 *)(puVar17 + 0x15) = 0;
        fVar4 = fVar4 * (float)(dVar41 / dVar39);
        fVar48 = fVar48 * (float)(dVar41 / dVar39);
        fVar3 = 0.0;
        if (0.0 - dVar39 < 0.0) {
          fVar3 = fVar4;
        }
        fVar11 = 0.0;
        if (0.0 - dVar39 < 0.0) {
          fVar11 = fVar48;
        }
        if (dVar39 - 0.0 < 0.0) {
          fVar3 = fVar4;
        }
        if (dVar39 - 0.0 < 0.0) {
          fVar11 = fVar48;
        }
        *(float *)(puVar17 + 0x14) = fVar3;
        *(float *)((int)puVar17 + 0xa4) = fVar11;
        dVar39 = (double)mobyutil::MB_computeLobVelocity(dVar41,-dVar40,lVar26,uVar23 - 0x260);
        *(float *)(puVar17 + 0x15) = (float)dVar39;
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 300.5);
        FUN_0032ca80(dVar40,lVar24,lVar26,uVar23 - 0x240);
      }
      dVar39 = (double)mobyfunc::BlendAnimFrame(moby);
      fVar2 = (moby->pos).z;
      fVar6 = (moby->pos).w;
      if (dVar38 <= dVar39) {
        fVar48 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        uVar20 = (uint)(((ulonglong)*(uint *)((int)pvVar15 + 0xdc) + 1 & 0xffffffff) << 4) & 0x10;
        fVar3 = *(float *)((int)&pSVar16->points[0].x + uVar20) - fVar48;
        fVar11 = *(float *)((int)&pSVar16->points[0].y + uVar20) - fVar4;
        pfVar35 = (float *)&mobyutil::g_atanQuadrantTable;
        fVar7 = ABS(fVar3);
        fVar5 = ABS(fVar11);
        *(float *)(puVar17 + 0x2c) = fVar3;
        *(float *)((int)puVar17 + 0x164) = fVar11;
        *(float *)(puVar17 + 0x2d) = fVar7 - fVar5;
        dVar38 = 0.0;
        uVar36 = (ulonglong)(*(uint *)(puVar17 + 0x2c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x2d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x164) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)(puVar17 + 0x2c));
        if (*(float *)(puVar17 + 0x2d) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar36 << 2));
        fVar11 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        fVar8 = ABS(*(float *)((int)puVar17 + 0x164));
        if (*(float *)(puVar17 + 0x2d) - 0.0 < 0.0) {
          fVar8 = fVar7;
        }
        if (0.0 < fVar3) {
          lVar26 = uVar23 - 0x2d0;
          lVar33 = uVar23 - 0xdc;
          lVar34 = uVar23 - 0xcc;
          lVar37 = 2;
          fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
          fVar7 = fVar3 * fVar3;
          *(float *)(puVar17 + 0x42) = fVar3;
          *(float *)(puVar17 + 0x41) = fVar3;
          *(float *)((int)puVar17 + 0x20c) = fVar3;
          *(float *)((int)puVar17 + 0x204) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)(puVar17 + 0x41) = *(float *)(puVar17 + 0x41) * fVar7;
          *(float *)((int)puVar17 + 0x20c) = *(float *)((int)puVar17 + 0x20c) * fVar3;
          *(float *)(puVar17 + 0x42) = *(float *)(puVar17 + 0x42) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar26 + 0x204) = *(float *)((int)lVar26 + 500) * fVar3 * fVar3;
            iVar28 = (int)lVar33;
            lVar26 = lVar26 + 8;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar23 - 0xdc;
          pfVar35 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar33 = lVar34;
          do {
            fVar3 = *pfVar35;
            fVar7 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar26 + 0x204) = *(float *)((int)lVar26 + 0x204) * fVar3;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar7;
            lVar33 = lVar33 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar26 = 2;
          do {
            iVar28 = (int)lVar27;
            iVar31 = (int)lVar34;
            lVar27 = lVar27 + 0x10;
            lVar34 = lVar34 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar28 + 0x204)) +
                              *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                             *(float *)(iVar31 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar5 + fVar11);
        }
        *(float *)(puVar17 + 8) = fVar48;
        *(f32 *)(puVar17 + 9) = fVar2;
        *(float *)((int)puVar17 + 0x44) = fVar4;
        *(f32 *)((int)puVar17 + 0x4c) = fVar6;
        mobyupdate_helpers::M541_003ac678(dVar38,lVar24,pfVar35,puVar17[8],puVar17[9]);
      }
      else {
        fVar48 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar3 = *(float *)(puVar17 + 0x10) - fVar48;
        fVar11 = *(float *)((int)puVar17 + 0x84) - fVar4;
        pfVar35 = (float *)&mobyutil::g_atanQuadrantTable;
        fVar7 = ABS(fVar3);
        fVar5 = ABS(fVar11);
        *(float *)((int)puVar17 + 0x16c) = fVar3;
        *(float *)(puVar17 + 0x2e) = fVar11;
        *(float *)((int)puVar17 + 0x174) = fVar7 - fVar5;
        dVar38 = 0.0;
        uVar36 = (ulonglong)(*(uint *)((int)puVar17 + 0x16c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x174) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar17 + 0x2e) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar17 + 0x16c));
        if (*(float *)((int)puVar17 + 0x174) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar36 << 2));
        fVar11 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        fVar8 = ABS(*(float *)(puVar17 + 0x2e));
        if (*(float *)((int)puVar17 + 0x174) - 0.0 < 0.0) {
          fVar8 = fVar7;
        }
        if (0.0 < fVar3) {
          lVar26 = uVar23 - 0x2d0;
          lVar33 = uVar23 - 0xbc;
          lVar34 = uVar23 - 0xac;
          lVar37 = 2;
          fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
          fVar7 = fVar3 * fVar3;
          *(float *)(puVar17 + 0x46) = fVar3;
          *(float *)(puVar17 + 0x45) = fVar3;
          *(float *)((int)puVar17 + 0x22c) = fVar3;
          *(float *)((int)puVar17 + 0x224) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)(puVar17 + 0x45) = *(float *)(puVar17 + 0x45) * fVar7;
          *(float *)((int)puVar17 + 0x22c) = *(float *)((int)puVar17 + 0x22c) * fVar3;
          *(float *)(puVar17 + 0x46) = *(float *)(puVar17 + 0x46) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar26 + 0x224) = *(float *)((int)lVar26 + 0x214) * fVar3 * fVar3;
            iVar28 = (int)lVar33;
            lVar26 = lVar26 + 8;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar23 - 0xbc;
          pfVar35 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar33 = lVar34;
          do {
            fVar3 = *pfVar35;
            fVar7 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar26 + 0x224) = *(float *)((int)lVar26 + 0x224) * fVar3;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar7;
            lVar33 = lVar33 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar26 = 2;
          do {
            iVar28 = (int)lVar27;
            iVar31 = (int)lVar34;
            lVar27 = lVar27 + 0x10;
            lVar34 = lVar34 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar28 + 0x224)) +
                              *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                             *(float *)(iVar31 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar5 + fVar11);
        }
        *(float *)(puVar17 + 8) = fVar48;
        *(f32 *)(puVar17 + 9) = fVar2;
        *(float *)((int)puVar17 + 0x44) = fVar4;
        *(f32 *)((int)puVar17 + 0x4c) = fVar6;
        mobyupdate_helpers::M541_003ac678(dVar38,lVar24,pfVar35,puVar17[8],puVar17[9]);
      }
    }
    else if (bVar1 == 3) {
      iVar28 = fastfunc::FastDecTimerS32(uVar36 + 0xf0);
      if (iVar28 != 0) {
        iVar28 = *(int *)((int)pvVar15 + 0xdc);
        fVar48 = pSVar16->points[iVar28].x;
        fVar4 = fVar48 - (moby->pos).x;
        fVar3 = pSVar16->points[iVar28].y - (moby->pos).y;
        pfVar35 = (float *)&mobyutil::g_atanQuadrantTable;
        fVar5 = ABS(fVar4);
        fVar11 = ABS(fVar3);
        *(float *)(puVar17 + 0x2f) = fVar4;
        *(float *)((int)puVar17 + 0x17c) = fVar3;
        *(float *)(puVar17 + 0x30) = fVar5 - fVar11;
        dVar38 = 0.0;
        uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x2f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x30) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x17c) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar17 + 0x2f));
        if (*(float *)(puVar17 + 0x30) - 0.0 < 0.0) {
          fVar4 = fVar11;
        }
        fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)((int)puVar17 + 0x17c));
        if (*(float *)(puVar17 + 0x30) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar26 = uVar23 - 0x2d0;
          lVar34 = uVar23 - 0x8c;
          lVar33 = uVar23 - 0x9c;
          lVar37 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar17 + 0x4a) = fVar4;
          *(float *)(puVar17 + 0x49) = fVar4;
          *(float *)((int)puVar17 + 0x24c) = fVar4;
          *(float *)((int)puVar17 + 0x244) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar17 + 0x49) = *(float *)(puVar17 + 0x49) * fVar5;
          *(float *)((int)puVar17 + 0x24c) = *(float *)((int)puVar17 + 0x24c) * fVar4;
          *(float *)(puVar17 + 0x4a) = *(float *)(puVar17 + 0x4a) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar26 + 0x244) = *(float *)((int)lVar26 + 0x234) * fVar4 * fVar4;
            iVar31 = (int)lVar33;
            lVar33 = lVar33 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar31 + 4) * fVar4 * fVar4;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar34 = uVar23 - 0x9c;
          pfVar35 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar33 = lVar34;
          do {
            fVar4 = *pfVar35;
            fVar5 = pfVar35[1];
            pfVar35 = pfVar35 + 2;
            *(float *)((int)lVar26 + 0x244) = *(float *)((int)lVar26 + 0x244) * fVar4;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar5;
            lVar33 = lVar33 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar26 = 2;
          do {
            iVar31 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            iVar19 = (int)lVar34;
            lVar34 = lVar34 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar31 + 0x244)) +
                              *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                             *(float *)(iVar19 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar11 + fVar3);
        }
        *(float *)(puVar17 + 8) = fVar48;
        *(float *)(puVar17 + 9) = pSVar16->points[iVar28].z;
        fVar48 = pSVar16->points[iVar28].w;
        *(float *)((int)puVar17 + 0x44) = pSVar16->points[iVar28].y;
        *(float *)((int)puVar17 + 0x4c) = fVar48;
        iVar28 = mobyupdate_helpers::M541_003ac678(dVar38,lVar24,pfVar35,puVar17[8],puVar17[9]);
        if (iVar28 != 0) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(4,0x3ad0e8);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar29 = storeVectorElementWordIndexed
                             (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,
                              uVar36);
          *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
          moby->state = '\x04';
          if (moby->animationId != '\x15') {
            puVar17[0x4d] = (longlong)(int)(animationSpeed * 30.5);
            mobyutil::MB_SetAnimation(lVar24,0x15,0,*(undefined4 *)((int)puVar17 + 0x26c));
          }
          iVar28 = mobyutil::MB_randInt(2);
          if (iVar28 == 0) {
            *(undefined4 *)((int)pvVar15 + 0xb4) = 2;
          }
          else {
            pSVar16 = Splines[*(int *)((int)pvVar15 + 0xd8)];
            mobyutil::MB_getTargetInArea
                      (0x4028000000000000,lVar24,uVar36 + 0x70,pSVar16,0,0,pSVar16->points,
                       pSVar16->cnt);
          }
        }
      }
    }
    else if (bVar1 == 2) {
      FUN_00402050(*(undefined4 *)((int)pvVar15 + 0xf8));
      fVar48 = pSVar16->points[0].z;
      *(float *)(puVar17 + 8) = pSVar16->points[0].x;
      *(float *)(puVar17 + 9) = fVar48;
      fVar48 = (moby->rotation).z;
      *(float *)((int)puVar17 + 0x44) = pSVar16->points[0].y;
      *(float *)((int)puVar17 + 0x4c) = pSVar16->points[0].w;
      iVar28 = mobyupdate_helpers::M541_003ac678((double)fVar48,lVar24);
      if (iVar28 != 0) {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(4,0x3ad0e8);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        iVar28 = *(int *)((int)pvVar15 + 0xc0);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        cVar18 = ((byte)((LZCOUNT(1 - iVar28) << 0x3a) >> 0x3f) & 0xfe) + 7;
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar29 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,
                            uVar36);
        *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
        *(undefined4 *)((int)pvVar15 + 0xdc) = 1;
        *(undefined4 *)((int)pvVar15 + 0x108) = 1;
        moby->state = cVar18 + ((byte)((LZCOUNT(-iVar28) << 0x3a) >> 0x3f) & 3U - cVar18);
      }
    }
    else if ((bVar1 != 1) && (bVar1 == 0)) {
      *(undefined1 *)((int)pvVar15 + 0x2e) = 1;
      if (0 < *(int *)((int)pvVar15 + 200)) {
        sVar12._0_1_ = moby->field76_0xb4;
        sVar12._1_1_ = moby->field77_0xb5;
        uVar32 = (undefined2)((int)sVar12 / *(int *)((int)pvVar15 + 200));
        moby->field76_0xb4 = (char)((ushort)uVar32 >> 8);
        moby->field77_0xb5 = (char)uVar32;
      }
      moby->state = '\x01';
      moby->modeBits = moby->modeBits | DISABLED;
      moby->enabled = '\0';
      iVar28 = mobyutil::MB_randInt(2);
      if (iVar28 != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      *(undefined4 *)((int)pvVar15 + 0x20) = 0x40000000;
      *(undefined2 *)((int)pvVar15 + 0x24) = 2;
      *(undefined1 *)((int)pvVar15 + 0x28) = 1;
      dVar38 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar15 + 0x11c) = (float)dVar38;
      uVar29 = FUN_00401f88(*(undefined4 *)((int)pvVar15 + 0xcc),lVar24 + 0x10);
      *(f32 *)((int)pvVar15 + 0xe0) = (moby->pos).x;
      fVar2 = (moby->pos).y;
      *(undefined4 *)((int)pvVar15 + 0xf8) = uVar29;
      *(f32 *)((int)pvVar15 + 0xe4) = fVar2;
      *(f32 *)((int)pvVar15 + 0xe8) = (moby->pos).z;
      iVar28 = *(int *)((int)pvVar15 + 0xc0);
      *(f32 *)((int)pvVar15 + 0xec) = (moby->pos).w;
      if (iVar28 < 1) {
        if (-1 < iVar28) {
          pMVar30 = mobyfunc::CreateMoby(TEST_DUMMY_BOMB_GLOVE);
          *(MobyInstance **)((int)pvVar15 + 0x104) = pMVar30;
        }
      }
      else if (iVar28 < 2) {
        pMVar30 = mobyfunc::CreateMoby(TEST_DUMMY_WALLOPER);
        *(MobyInstance **)((int)pvVar15 + 0x104) = pMVar30;
      }
      else if (iVar28 < 3) {
        pMVar30 = mobyfunc::CreateMoby(TEST_DUMMY_PYROCITOR);
        *(MobyInstance **)((int)pvVar15 + 0x104) = pMVar30;
        mobyutil::MB_InitDebrisList(uVar36 + 0x120);
      }
      iVar28 = *(int *)((int)pvVar15 + 0x104);
      if (iVar28 != 0) {
        *(ushort *)(iVar28 + 0x34) = *(ushort *)(iVar28 + 0x34) | 0x100;
        *(undefined2 *)(*(int *)((int)pvVar15 + 0x104) + 0x32) = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar15 + 0x104) + 0x30) = 0;
        *(undefined1 *)(*(int *)((int)pvVar15 + 0x104) + 0x31) = 1;
      }
    }
  }
  else if (bVar1 == 0xb) {
    iVar28 = fastfunc::FastDecTimerS32(uVar36 + 0xf0);
    if (iVar28 != 0) {
      *(undefined4 *)((int)pvVar15 + 0xfc) = 0;
      moby->state = '\x02';
      if (moby->animationId != '\t') {
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar24,9,0,*(undefined4 *)((int)puVar17 + 0x26c));
      }
      MVar14 = moby->modeBits;
      *(undefined4 *)((int)pvVar15 + 0x20) = 0x40000000;
      moby->modeBits = MVar14 | CAN_BE_AUTO_TARGETED;
    }
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(100,0x3ad0e8);
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
    auVar45 = loadVectorLeftIndexed(0xf0,uVar36);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar46 = loadVectorRightIndexed(0x100,uVar36);
    auVar47 = loadVectorLeftIndexed(0xe8,uVar36);
    auVar42 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                         auVar44);
    auVar44 = loadVectorRightIndexed(0xf8,uVar36);
    auVar43 = vectorConvertFromSignedFixedPointWord(auVar45 | auVar46,0);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar47 | auVar44);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar29 = storeVectorElementWordIndexed
                       (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x18,lVar24);
    *(undefined4 *)((uint)&(moby->pos).z & 0xfffffffc) = uVar29;
  }
  else if (bVar1 == 10) {
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    *(undefined4 *)((int)pvVar15 + 0x20) = 0x40000000;
    auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(0x34,0x3ad0e8);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar42,auVar44,auVar43);
    lVar26 = lVar24 + 0x10;
    lVar27 = lVar24 + 0x40;
    auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar29 = storeVectorElementWordIndexed
                       (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,uVar36);
    *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
    fVar48 = DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    dVar38 = (double)(fVar48 * 12.0);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(dVar38,lVar24,0x655,lVar26,lVar27,0,0,0xf0,&DAT_00a15d30);
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(dVar38,lVar24,0x656,lVar26,lVar27,0,0);
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(dVar38,lVar24,0x657,lVar26,lVar27,0,0);
    fVar2 = (moby->pos).y;
    *(f32 *)(puVar17 + 0x1e) = (moby->pos).x;
    fVar6 = (moby->pos).w;
    *(f32 *)((int)puVar17 + 0xf4) = fVar2;
    *(f32 *)((int)puVar17 + 0xfc) = fVar6;
    *(float *)(puVar17 + 0x1f) = (moby->pos).z + 1.2;
    mobyutil::MB_SpawnExplosionSparks(0x3fe0000000000000,0x4024000000000000,lVar24,uVar23 - 0x1f0);
    mobyutil::MB_SpawnBoltsFromCrate(lVar24,0,0xffffffffffffffff);
    sound::PlayMobySound(7,0,moby);
    iVar28 = *(int *)((int)pvVar15 + 200);
    *(int *)((int)pvVar15 + 200) = iVar28 + -1;
    if (iVar28 == 0) {
      if (*(MobyInstance **)((int)pvVar15 + 0x104) != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar15 + 0x104));
      }
      mobyfunc::DeleteMoby(moby);
    }
    else {
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      moby->state = '\v';
      auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      (moby->pos).x = *(f32 *)((int)pvVar15 + 0xe0);
      (moby->pos).y = *(f32 *)((int)pvVar15 + 0xe4);
      (moby->pos).z = *(f32 *)((int)pvVar15 + 0xe8);
      (moby->pos).w = *(f32 *)((int)pvVar15 + 0xec);
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar42);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar29 = storeVectorElementWordIndexed
                         (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,uVar36)
      ;
      *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
    }
  }
  else if (bVar1 == 9) {
    iVar28 = *(int *)((int)pvVar15 + 0xdc);
    fVar48 = *(float *)((int)pvVar15 + 0x10c);
    fVar4 = pSVar16->points[iVar28].z;
    *(float *)(puVar17 + 8) = pSVar16->points[iVar28].x;
    *(float *)(puVar17 + 9) = fVar4;
    fVar4 = pSVar16->points[iVar28].w;
    *(float *)((int)puVar17 + 0x44) = pSVar16->points[iVar28].y;
    *(float *)((int)puVar17 + 0x4c) = fVar4;
    mobyupdate_helpers::M541_003ac678((double)fVar48,lVar24);
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = (u8)*(undefined4 *)((int)pvVar15 + 0x110);
      uVar20 = *(uint *)((int)pvVar15 + 0x114);
      if (moby->animationId != uVar20) {
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar24,uVar20,0,*(undefined4 *)((int)puVar17 + 0x26c));
      }
    }
  }
  else if (bVar1 == 8) {
    if (*(int *)((int)pvVar15 + 0xb4) != 2) {
      fVar4 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar11 = *(float *)((int)pvVar15 + 0x70) - fVar4;
      fVar5 = *(float *)((int)pvVar15 + 0x74) - fVar3;
      pfVar35 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar8 = ABS(fVar11);
      fVar7 = ABS(fVar5);
      *(float *)(puVar17 + 0x29) = fVar11;
      *(float *)((int)puVar17 + 0x14c) = fVar5;
      *(float *)(puVar17 + 0x2a) = fVar8 - fVar7;
      dVar38 = 0.0;
      uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x29) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x2a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x14c) >> 0x1d) & 4;
      fVar11 = ABS(*(float *)(puVar17 + 0x29));
      if (*(float *)(puVar17 + 0x2a) - 0.0 < 0.0) {
        fVar11 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)((int)puVar17 + 0x14c));
      if (*(float *)(puVar17 + 0x2a) - 0.0 < 0.0) {
        fVar9 = fVar8;
      }
      if (0.0 < fVar11) {
        lVar26 = uVar23 - 0x2d0;
        lVar33 = uVar23 - 0x11c;
        lVar34 = uVar23 - 0x10c;
        lVar37 = 2;
        fVar11 = (fVar9 - fVar11) / (fVar9 + fVar11);
        fVar8 = fVar11 * fVar11;
        *(float *)(puVar17 + 0x3a) = fVar11;
        *(float *)(puVar17 + 0x39) = fVar11;
        *(float *)((int)puVar17 + 0x1cc) = fVar11;
        *(float *)((int)puVar17 + 0x1c4) = fVar11;
        fVar11 = fVar8 * fVar8;
        *(float *)(puVar17 + 0x39) = *(float *)(puVar17 + 0x39) * fVar8;
        *(float *)((int)puVar17 + 0x1cc) = *(float *)((int)puVar17 + 0x1cc) * fVar11;
        *(float *)(puVar17 + 0x3a) = *(float *)(puVar17 + 0x3a) * fVar11 * fVar8;
        do {
          *(float *)((int)lVar26 + 0x1c4) = *(float *)((int)lVar26 + 0x1b4) * fVar11 * fVar11;
          iVar28 = (int)lVar33;
          lVar26 = lVar26 + 8;
          lVar33 = lVar33 + 8;
          *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar11 * fVar11;
          lVar34 = lVar34 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar37 = 4;
        lVar34 = uVar23 - 0x11c;
        pfVar35 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar33 = lVar34;
        do {
          fVar11 = *pfVar35;
          fVar8 = pfVar35[1];
          pfVar35 = pfVar35 + 2;
          *(float *)((int)lVar26 + 0x1c4) = *(float *)((int)lVar26 + 0x1c4) * fVar11;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar8;
          lVar33 = lVar33 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar33 = 2;
        lVar26 = lVar27;
        do {
          iVar28 = (int)lVar26;
          iVar31 = (int)lVar34;
          lVar26 = lVar26 + 0x10;
          lVar34 = lVar34 + 0x10;
          dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar28 + 0x1c4)) +
                            *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                           *(float *)(iVar31 + 0xc));
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar7 + fVar5);
      }
      *(float *)(puVar17 + 8) = fVar4;
      *(float *)(puVar17 + 9) = fVar48;
      *(float *)((int)puVar17 + 0x44) = fVar3;
      *(f32 *)((int)puVar17 + 0x4c) = fVar2;
      mobyupdate_helpers::M541_003ac678(dVar38,lVar24,pfVar35,puVar17[8],puVar17[9]);
    }
    if (*(int *)((int)pvVar15 + 0x104) != 0) {
      mobyfunc::GetBonePosition(*(int *)((int)pvVar15 + 0x104),0,uVar23 - 0x210);
      fVar4 = *(float *)(puVar17 + 0x1a) - (moby->pos).x;
      fVar3 = *(float *)((int)puVar17 + 0xd4) - (moby->pos).y;
      fVar5 = ABS(fVar4);
      fVar8 = ABS(fVar3);
      *(float *)((int)puVar17 + 0x13c) = fVar4;
      *(float *)(puVar17 + 0x28) = fVar3;
      *(float *)((int)puVar17 + 0x144) = fVar5 - fVar8;
      fVar11 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0x13c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x144) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x28) >> 0x1d) & 4;
      fVar48 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar7 = ABS(*(float *)((int)puVar17 + 0x13c));
      if (*(float *)((int)puVar17 + 0x144) - 0.0 < 0.0) {
        fVar7 = fVar8;
      }
      fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)(puVar17 + 0x28));
      if (*(float *)((int)puVar17 + 0x144) - 0.0 < 0.0) {
        fVar10 = fVar5;
      }
      fVar21 = fVar11;
      if (0.0 < fVar7) {
        lVar26 = uVar23 - 0x2d0;
        lVar34 = uVar23 - 300;
        lVar33 = uVar23 - 0x13c;
        lVar37 = 2;
        fVar7 = (fVar10 - fVar7) / (fVar10 + fVar7);
        fVar10 = fVar7 * fVar7;
        *(float *)(puVar17 + 0x36) = fVar7;
        *(float *)(puVar17 + 0x35) = fVar7;
        *(float *)((int)puVar17 + 0x1ac) = fVar7;
        *(float *)((int)puVar17 + 0x1a4) = fVar7;
        fVar7 = fVar10 * fVar10;
        *(float *)(puVar17 + 0x35) = *(float *)(puVar17 + 0x35) * fVar10;
        *(float *)((int)puVar17 + 0x1ac) = *(float *)((int)puVar17 + 0x1ac) * fVar7;
        *(float *)(puVar17 + 0x36) = *(float *)(puVar17 + 0x36) * fVar7 * fVar10;
        do {
          *(float *)((int)lVar26 + 0x1a4) = *(float *)((int)lVar26 + 0x194) * fVar7 * fVar7;
          iVar28 = (int)lVar33;
          lVar33 = lVar33 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar7 * fVar7;
          lVar34 = lVar34 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar37 = 4;
        lVar34 = uVar23 - 0x13c;
        pfVar35 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar33 = lVar34;
        do {
          fVar7 = *pfVar35;
          fVar10 = pfVar35[1];
          pfVar35 = pfVar35 + 2;
          *(float *)((int)lVar26 + 0x1a4) = *(float *)((int)lVar26 + 0x1a4) * fVar7;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar10;
          lVar33 = lVar33 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar33 = 2;
        lVar26 = lVar27;
        fVar7 = fVar11;
        do {
          iVar28 = (int)lVar26;
          iVar31 = (int)lVar34;
          lVar26 = lVar26 + 0x10;
          lVar34 = lVar34 + 0x10;
          fVar7 = fVar7 + *(float *)(iVar28 + 0x1a4) + *(float *)(iVar31 + 4) +
                  *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc);
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        fVar21 = (fVar7 + 0.7853982) * fVar48 + fVar9;
      }
      fVar21 = fVar21 + 1.5707963;
      fVar48 = 3.1415925 - fVar21;
      if (fVar21 - (3.1415925 - fVar21) < 0.0) {
        fVar48 = fVar21;
      }
      *(float *)(puVar17 + 0x26) = fVar4;
      *(float *)(puVar17 + 0x27) = fVar5 - fVar8;
      *(float *)((int)puVar17 + 0x134) = fVar3;
      fVar4 = -3.1415925 - fVar21;
      if ((-3.1415925 - fVar21) - fVar48 < 0.0) {
        fVar4 = fVar48;
      }
      fVar3 = fVar4 * fVar4;
      fVar48 = ABS(*(float *)(puVar17 + 0x26));
      if (*(float *)(puVar17 + 0x27) - 0.0 < 0.0) {
        fVar48 = fVar8;
      }
      uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x26) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x27) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x134) >> 0x1d) & 4;
      fVar8 = fVar3 * fVar3 * fVar4;
      fVar9 = fVar3 * fVar8;
      fVar7 = ABS(*(float *)((int)puVar17 + 0x134));
      if (*(float *)(puVar17 + 0x27) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      *(float *)(puVar17 + 0x1c) =
           fVar3 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4;
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      if (0.0 < fVar48) {
        lVar26 = uVar23 - 0x2d0;
        lVar33 = uVar23 - 0x15c;
        lVar34 = uVar23 - 0x14c;
        lVar37 = 2;
        fVar48 = (fVar7 - fVar48) / (fVar7 + fVar48);
        fVar5 = fVar48 * fVar48;
        *(float *)(puVar17 + 0x32) = fVar48;
        *(float *)(puVar17 + 0x31) = fVar48;
        *(float *)((int)puVar17 + 0x18c) = fVar48;
        *(float *)((int)puVar17 + 0x184) = fVar48;
        fVar48 = fVar5 * fVar5;
        *(float *)(puVar17 + 0x31) = *(float *)(puVar17 + 0x31) * fVar5;
        *(float *)((int)puVar17 + 0x18c) = *(float *)((int)puVar17 + 0x18c) * fVar48;
        *(float *)(puVar17 + 0x32) = *(float *)(puVar17 + 0x32) * fVar48 * fVar5;
        do {
          *(float *)((int)lVar26 + 0x184) = *(float *)((int)lVar26 + 0x174) * fVar48 * fVar48;
          iVar28 = (int)lVar33;
          lVar26 = lVar26 + 8;
          lVar33 = lVar33 + 8;
          *(float *)((int)lVar34 + 4) = *(float *)(iVar28 + 4) * fVar48 * fVar48;
          lVar34 = lVar34 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar37 = 4;
        lVar34 = uVar23 - 0x15c;
        pfVar35 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar33 = lVar34;
        do {
          fVar48 = *pfVar35;
          fVar5 = pfVar35[1];
          pfVar35 = pfVar35 + 2;
          *(float *)((int)lVar26 + 0x184) = *(float *)((int)lVar26 + 0x184) * fVar48;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar5;
          lVar33 = lVar33 + 8;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        lVar26 = 2;
        do {
          iVar28 = (int)lVar27;
          iVar31 = (int)lVar34;
          lVar27 = lVar27 + 0x10;
          lVar34 = lVar34 + 0x10;
          fVar11 = fVar11 + *(float *)(iVar28 + 0x184) + *(float *)(iVar31 + 4) +
                   *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar11 = (fVar11 + 0.7853982) * fVar3 + fVar4;
      }
      *(undefined4 *)(puVar17 + 0x1d) = 0;
      dVar38 = (double)DAT_00845598;
      fVar48 = 3.1415925 - fVar11;
      if (fVar11 - (3.1415925 - fVar11) < 0.0) {
        fVar48 = fVar11;
      }
      fVar4 = -3.1415925 - fVar11;
      if ((-3.1415925 - fVar11) - fVar48 < 0.0) {
        fVar4 = fVar48;
      }
      fVar48 = fVar4 * fVar4;
      fVar3 = fVar48 * fVar48 * fVar4;
      fVar11 = fVar48 * fVar3;
      *(float *)((int)puVar17 + 0xe4) =
           fVar48 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar3 * 0.0083330255 + fVar48 * fVar4 * -0.16666657 + fVar4;
      mobyutil::MB_UpdateDebris(dVar38,uVar36 + 0x120,uVar23 - 0x210,uVar23 - 0x200);
      *(undefined4 *)(puVar17 + 0x1d) = 0x3f800000;
      *(undefined4 *)((int)puVar17 + 0xec) = 0x45afdf66;
      mobyutil::SetCollDamIn
                (0x3ff0000000000000,uVar23 - 0x1e0,lVar24,0x10001,0x10000,uVar23 - 0x200);
      MVar13 = moby->oClass;
      *(undefined1 *)(puVar17 + 0x23) = 5;
      *(undefined1 *)((int)puVar17 + 0x119) = 1;
      *(MOBY_OCLASSES *)((int)puVar17 + 0x11a) = MVar13;
      mobyutil::MB_DebrisCollide(uVar36 + 0x120,lVar24,uVar23 - 0x1e0);
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      *(uint *)((int)pvVar15 + 0xdc) = *(int *)((int)pvVar15 + 0xdc) + 1U & 1;
      moby->state = '\a';
      if (moby->animationId != '\x03') {
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 30.5);
        mobyutil::MB_SetAnimation(lVar24,3,0,*(undefined4 *)((int)puVar17 + 0x26c));
      }
    }
  }
  else if (bVar1 == 7) {
    iVar28 = fastfunc::FastDecTimerS32(uVar36 + 0xf0);
    if (iVar28 != 0) {
      iVar28 = *(int *)((int)pvVar15 + 0xdc);
      fVar48 = (moby->rotation).z;
      fVar4 = pSVar16->points[iVar28].z;
      *(float *)(puVar17 + 8) = pSVar16->points[iVar28].x;
      *(float *)(puVar17 + 9) = fVar4;
      fVar4 = pSVar16->points[iVar28].w;
      *(float *)((int)puVar17 + 0x44) = pSVar16->points[iVar28].y;
      *(float *)((int)puVar17 + 0x4c) = fVar4;
      iVar28 = mobyupdate_helpers::M541_003ac678((double)fVar48,lVar24);
      if (iVar28 != 0) {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(4,0x3ad0e8);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar29 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xf0,
                            uVar36);
        *(undefined4 *)((int)pvVar15 + 0xf0U & 0xfffffffc) = uVar29;
        moby->state = '\b';
        if (moby->animationId != '\x01') {
          puVar17[0x4d] = (longlong)(int)(animationSpeed * 30.5);
          mobyutil::MB_SetAnimation(lVar24,1,0,*(undefined4 *)((int)puVar17 + 0x26c));
        }
        iVar28 = mobyutil::MB_randInt(2);
        if (iVar28 == 0) {
          *(undefined4 *)((int)pvVar15 + 0xb4) = 2;
        }
        else {
          pSVar16 = Splines[*(int *)((int)pvVar15 + 0xd8)];
          mobyutil::MB_getTargetInArea
                    (0x4028000000000000,lVar24,uVar36 + 0x70,pSVar16,0,0,pSVar16->points,
                     pSVar16->cnt);
        }
      }
    }
  }
  else if (bVar1 == 6) {
    iVar28 = *(int *)((int)pvVar15 + 0xdc) + *(int *)((int)pvVar15 + 0x108);
    fVar48 = pSVar16->points[iVar28].x - (moby->pos).x;
    fVar4 = pSVar16->points[iVar28].y - (moby->pos).y;
    fVar3 = ABS(fVar48);
    fVar11 = ABS(fVar4);
    *(float *)((int)puVar17 + 0x154) = fVar48;
    *(float *)(puVar17 + 0x2b) = fVar4;
    *(float *)((int)puVar17 + 0x15c) = fVar3 - fVar11;
    fVar48 = 0.0;
    uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0x154) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar17 + 0x15c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar17 + 0x2b) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar17 + 0x154));
    if (*(float *)((int)puVar17 + 0x15c) - 0.0 < 0.0) {
      fVar4 = fVar11;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
    fVar11 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar17 + 0x2b));
    if (*(float *)((int)puVar17 + 0x15c) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    if (0.0 < fVar4) {
      lVar26 = uVar23 - 0x2d0;
      lVar34 = uVar23 - 0xec;
      lVar33 = uVar23 - 0xfc;
      lVar37 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar17 + 0x3e) = fVar4;
      *(float *)(puVar17 + 0x3d) = fVar4;
      *(float *)((int)puVar17 + 0x1ec) = fVar4;
      *(float *)((int)puVar17 + 0x1e4) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar17 + 0x3d) = *(float *)(puVar17 + 0x3d) * fVar3;
      *(float *)((int)puVar17 + 0x1ec) = *(float *)((int)puVar17 + 0x1ec) * fVar4;
      *(float *)(puVar17 + 0x3e) = *(float *)(puVar17 + 0x3e) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar26 + 0x1e4) = *(float *)((int)lVar26 + 0x1d4) * fVar4 * fVar4;
        iVar31 = (int)lVar33;
        lVar33 = lVar33 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar34 + 4) = *(float *)(iVar31 + 4) * fVar4 * fVar4;
        lVar34 = lVar34 + 8;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      lVar37 = 4;
      lVar34 = uVar23 - 0xfc;
      pfVar35 = (float *)&DAT_007358e0;
      lVar26 = lVar27;
      lVar33 = lVar34;
      do {
        fVar4 = *pfVar35;
        fVar3 = pfVar35[1];
        pfVar35 = pfVar35 + 2;
        *(float *)((int)lVar26 + 0x1e4) = *(float *)((int)lVar26 + 0x1e4) * fVar4;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar3;
        lVar33 = lVar33 + 8;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      lVar26 = 2;
      do {
        iVar31 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        iVar19 = (int)lVar34;
        lVar34 = lVar34 + 0x10;
        fVar48 = fVar48 + *(float *)(iVar31 + 0x1e4) + *(float *)(iVar19 + 4) +
                 *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc);
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      fVar48 = (fVar48 + 0.7853982) * fVar5 + fVar11;
    }
    fVar48 = mobyutil::OrganicDeltAng
                       (fVar48,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                        mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,0x3ad0e8,
                        (float *)((int)pvVar15 + 0xfc));
    iVar31 = fastfunc::FastDecTimerS32((double)fVar48,uVar36 + 0xf0);
    if (iVar31 != 0) {
      *(int *)((int)pvVar15 + 0xdc) = iVar28;
      if (moby->animationId != '\n') {
        puVar17[0x4d] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar24,10,0,*(undefined4 *)((int)puVar17 + 0x26c));
      }
      moby->state = '\x05';
    }
  }
  return;
}



//==== 003aef30  ns=Global  size=0x74
// sig: undefined FUN_003aef30(void)
// callers(1): 004030c8 mobyupdate_unsorted::UpdateMoby_654
// callees(0): 

void FUN_003aef30(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 != (ushort *)0x0) {
    do {
      do {
        pMVar4 = MobyInstance;
        uVar3 = *puVar5 & 0x7fff;
      } while (MobyInstance[uVar3].oClass != TEST_DUMMY);
      MVar1 = MobyInstance[uVar3].modeBits;
      MobyInstance[uVar3].state = '\x02';
      pMVar4[uVar3].enabled = '\x01';
      pMVar4[uVar3].modeBits =
           MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}



//==== 003aefd0  ns=mobyupdate_helpers  size=0x45c
// sig: undefined M542_003aefd0(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M542_003aefd0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  MobyInstance *pMVar6;
  ushort *puVar7;
  longlong lVar8;
  double dVar9;
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
  undefined1 local_150 [64];
  float local_110 [36];
  
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  pfVar5 = local_110;
  pfVar4 = (float *)&DAT_008455b0;
  dVar13 = 1.0;
  lVar8 = 4;
  bVar1 = *(byte *)(param_1 + 0x21);
  do {
    *pfVar5 = *pfVar4 * 0.2;
    pfVar5[1] = pfVar4[1] * 0.2;
    pfVar5[2] = pfVar4[2] * 0.2;
    pfVar3 = pfVar4 + 3;
    pfVar4 = pfVar4 + 4;
    pfVar5[3] = *pfVar3;
    pfVar5 = pfVar5 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar7 = (ushort *)(&mobyutil::g_MobyGroups)[bVar1];
  dVar14 = 3.141592502593994;
  dVar15 = -3.141592502593994;
  dVar16 = -0.16666656732559204;
  dVar17 = 0.008333025500178337;
  dVar18 = -0.0001980741071747616;
  dVar19 = 2.601886990305502e-06;
  dVar20 = 0.5;
  do {
    pMVar6 = MobyInstance + (*puVar7 & 0x7fff);
    dVar9 = (double)*(float *)((int)pMVar6->pVar + 0x11c);
    dVar11 = (double)(float)(dVar14 - dVar9);
    if (dVar9 - (double)(float)(dVar14 - dVar9) < 0.0) {
      dVar11 = dVar9;
    }
    dVar10 = (double)(float)(dVar15 - dVar9);
    if ((double)(float)(dVar15 - dVar9) - dVar11 < 0.0) {
      dVar10 = dVar11;
    }
    dVar11 = (double)(float)(dVar10 * dVar10);
    dVar12 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar10));
    dVar9 = (double)(float)(dVar11 * dVar12);
    fastfunc::FastLerpColor
              ((double)(float)((double)(float)((double)(float)((double)(float)(dVar11 * dVar9) *
                                                               dVar19 + (double)(float)(dVar9 * 
                                                  dVar18 + (double)(float)(dVar12 * dVar17 +
                                                                          (double)(float)((double)(
                                                  float)(dVar11 * dVar10) * dVar16 + dVar10)))) +
                                              dVar13) * dVar20),DAT_008455a4,DAT_008455a8);
    if (((pMVar6 != (MobyInstance *)0x0) && (pMVar6->oClass == TEST_DUMMY)) &&
       (pMVar6->state != 0xfd && pMVar6->state != 0xfe)) {
      draw::FastDrawQuad(local_110,local_150,0,EffectTexHeaders,9);
    }
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
  } while (-1 < (short)uVar2);
  return;
}



//==== 003af42c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M542_003af42c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M542_003af42c(void)

{
  DAT_0084563c = 0x10000;
  return;
}



//==== 003af440  ns=mobyupdate_helpers  size=0x90
// sig: undefined M542_003af440(void)
// callers(0): 
// callees(1): 000f31a8 mobyfunc::UpdateMobyTransform

void mobyupdate_helpers::M542_003af440(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x78);
  do {
    iVar2 = 0;
    puVar3 = puVar4;
    do {
      if (iVar2 != 0 || iVar1 != 0) {
        mobyfunc::UpdateMobyTransform((MobyInstance *)*puVar3);
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 3);
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 3;
  } while (iVar1 < 4);
  return;
}



//==== 003af4f0  ns=mobyupdate_helpers  size=0x390
// sig: undefined M542_003af4f0(void)
// callers(1): 003af8a0 mobyupdate_unsorted::UpdateMoby_542
// callees(1): 00502648 fastfunc::FastAddRots

void mobyupdate_helpers::M542_003af4f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
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
  
  piVar5 = *(int **)(param_1 + 0x78);
  uVar8 = 0;
  dVar18 = 1.5707963705062866;
  dVar19 = 0.7853981852531433;
  dVar20 = 3.0;
  dVar21 = 0.0;
  dVar22 = 0.375;
  dVar23 = 1.5;
  piVar9 = piVar5;
  do {
    fVar1 = 1.0;
    if (1 < (int)uVar8) {
      fVar1 = -1.0;
    }
    uVar7 = uVar8 & 1;
    iVar6 = *piVar9;
    fVar2 = (float)piVar5[uVar7 * 4 + 0x14];
    fVar3 = (float)piVar5[uVar7 * 4 + 0x15];
    fVar4 = (float)piVar5[uVar7 * 4 + 0x16];
    *(int *)(iVar6 + 0x10) = piVar5[0x1c];
    dVar17 = (double)(fVar3 * fVar1);
    dVar16 = (double)(fVar2 * fVar1);
    dVar15 = (double)(fVar4 * fVar1);
    *(int *)(iVar6 + 0x14) = piVar5[0x1d];
    *(int *)(iVar6 + 0x18) = piVar5[0x1e];
    *(int *)(iVar6 + 0x1c) = piVar5[0x1f];
    dVar11 = (double)fastfunc::FastAddRots
                               ((float)((double)(longlong)(int)uVar8 * dVar18 +
                                       (double)(float)((double)(float)piVar5[0x10] * dVar19)));
    *(float *)(*piVar9 + 0x40) = (float)dVar11;
    dVar12 = (double)SQRT((float)(dVar15 * dVar15 +
                                 (double)(float)(dVar16 * dVar16 + (double)(float)(dVar17 * dVar17))
                                 ));
    uVar8 = uVar8 + 1;
    iVar6 = *piVar9;
    dVar13 = (double)(float)((double)(float)((double)(float)piVar5[0x12] * dVar20) / dVar12);
    dVar11 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar14 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    dVar10 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar11);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar14);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
    iVar6 = piVar9[1];
    *(int *)(iVar6 + 0x10) = piVar5[0x1c];
    *(int *)(iVar6 + 0x14) = piVar5[0x1d];
    *(int *)(iVar6 + 0x18) = piVar5[0x1e];
    *(int *)(iVar6 + 0x1c) = piVar5[0x1f];
    iVar6 = piVar9[1];
    dVar13 = (double)(float)((double)(float)((double)(float)piVar5[0xe] * dVar22) / dVar12);
    dVar11 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar14 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    dVar10 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar11);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar14);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
    iVar6 = piVar9[1];
    dVar13 = (double)(float)((double)(float)((double)(float)piVar5[0x12] * dVar23) / dVar12);
    dVar11 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar14 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    dVar10 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar11);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar14);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
    iVar6 = piVar9[2];
    *(int *)(iVar6 + 0x10) = piVar5[0x1c];
    *(int *)(iVar6 + 0x14) = piVar5[0x1d];
    *(int *)(iVar6 + 0x18) = piVar5[0x1e];
    *(int *)(iVar6 + 0x1c) = piVar5[0x1f];
    iVar6 = piVar9[2];
    piVar9 = piVar9 + 3;
    dVar13 = (double)(float)((double)(float)((double)(float)piVar5[0x12] * dVar23) / dVar12);
    dVar11 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar14 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    dVar10 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar11);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar14);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
  } while ((int)uVar8 < 4);
  return;
}



//==== 003af8a0  ns=mobyupdate_unsorted  size=0x6dc
// sig: undefined UpdateMoby_542(MobyInstance * moby)
// callers(0): 
// callees(6): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00109c30 mobyutil::OrganicDelt; 003af4f0 mobyupdate_helpers::M542_003af4f0; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 542 */

void mobyupdate_unsorted::UpdateMoby_542(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  MobyInstance *pMVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  
  uVar1 = moby->state;
  puVar8 = (undefined4 *)moby->pVar;
  uVar12 = ZEXT48(puVar8);
  if (uVar1 == '\x04') {
    iVar7 = fastfunc::FastDecTimerS32(uVar12 + 0x34);
    if (iVar7 != 0) {
      fVar19 = mobyutil::OrganicDelt
                         (1.0,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,mobyutil::g_FrameTime * 4.0,
                          (float *)(puVar8 + 0x12),0x720000,(float *)(puVar8 + 0x13));
      uVar3 = (int)puVar8[0x12] >> 0x1f;
      if (0x3f7fffff < (int)((uVar3 >> 1 ^ puVar8[0x12]) - uVar3)) {
        moby->state = '\x05';
      }
      mobyupdate_helpers::M542_003af4f0((double)fVar19,moby);
      puVar8 = (undefined4 *)moby->pVar;
      iVar7 = 0;
      do {
        iVar13 = 0;
        puVar11 = puVar8;
        do {
          if (iVar13 != 0 || iVar7 != 0) {
            mobyfunc::UpdateMobyTransform((MobyInstance *)*puVar11);
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar13 < 3);
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 3;
      } while (iVar7 < 4);
    }
  }
  else if (uVar1 == '\x03') {
    iVar7 = fastfunc::FastDecTimerS32(uVar12 + 0x34);
    if (iVar7 != 0) {
      fVar19 = mobyutil::OrganicDelt
                         (1.0,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,mobyutil::g_FrameTime * 4.0,
                          (float *)(puVar8 + 0x10),0x3af880,(float *)(puVar8 + 0x11));
      uVar3 = (int)puVar8[0x10] >> 0x1f;
      if (0x3f7fffff < (int)((uVar3 >> 1 ^ puVar8[0x10]) - uVar3)) {
        auVar16 = ZEXT416(0xffffffff);
        auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
        moby->state = '\x04';
        auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
        auVar16 = loadVectorLeftIndexed(0x14,0x3af880);
        auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar16 = vectorMultiplyAddFloatingPoint
                            (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                             auVar17);
        auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
        auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x34,uVar12
                          );
        *(undefined4 *)((uint)(puVar8 + 0xd) & 0xfffffffc) = uVar4;
      }
      mobyupdate_helpers::M542_003af4f0((double)fVar19,moby);
      puVar8 = (undefined4 *)moby->pVar;
      iVar7 = 0;
      do {
        iVar13 = 0;
        puVar11 = puVar8;
        do {
          if (iVar13 != 0 || iVar7 != 0) {
            mobyfunc::UpdateMobyTransform((MobyInstance *)*puVar11);
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar13 < 3);
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 3;
      } while (iVar7 < 4);
    }
  }
  else if (uVar1 == '\x02') {
    fVar19 = mobyutil::OrganicDelt
                       (1.0,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 8.0,
                        (float *)(puVar8 + 0xe),0x720000,(float *)(puVar8 + 0xf));
    uVar3 = (int)puVar8[0xe] >> 0x1f;
    if (0x3f7fffff < (int)((uVar3 >> 1 ^ puVar8[0xe]) - uVar3)) {
      auVar16 = ZEXT416(0xffffffff);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      moby->state = '\x03';
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = loadVectorLeftIndexed(0x14,0x3af880);
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar16 = vectorMultiplyAddFloatingPoint
                          (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                           auVar17);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x34,uVar12);
      *(undefined4 *)((uint)(puVar8 + 0xd) & 0xfffffffc) = uVar4;
    }
    mobyupdate_helpers::M542_003af4f0((double)fVar19,moby);
    puVar8 = (undefined4 *)moby->pVar;
    iVar7 = 0;
    do {
      iVar13 = 0;
      puVar11 = puVar8;
      do {
        if (iVar13 != 0 || iVar7 != 0) {
          mobyfunc::UpdateMobyTransform((MobyInstance *)*puVar11);
        }
        iVar13 = iVar13 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar13 < 3);
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar7 < 4);
  }
  else if (uVar1 == '\x01') {
    fVar19 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar2 * fVar2 + fVar19 * fVar19) < 3.0) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    (moby->rotation).x = 0.0;
    puVar8[0x1c] = (moby->pos).x;
    puVar8[0x1d] = (moby->pos).y;
    puVar8[0x1e] = (moby->pos).z;
    puVar8[0x1f] = (moby->pos).w;
    iVar7 = 1;
    puVar8[0x14] = (moby->transform).v1.x + (moby->transform).v2.x;
    puVar8[0x15] = (moby->transform).v1.y + (moby->transform).v2.y;
    fVar19 = (moby->transform).v1.z;
    fVar2 = (moby->transform).v2.z;
    *puVar8 = moby;
    puVar8[0x16] = fVar19 + fVar2;
    puVar8[0x17] = (moby->transform).v1.w;
    puVar8[0x18] = (moby->transform).v2.x - (moby->transform).v1.x;
    puVar8[0x19] = (moby->transform).v2.y - (moby->transform).v1.y;
    puVar8[0x1a] = (moby->transform).v2.z - (moby->transform).v1.z;
    puVar8[0x1b] = (moby->transform).v2.w;
    dVar15 = 1.5707963705062866;
    uVar9 = uVar12;
    do {
      uVar9 = uVar9 + 0xc;
      pMVar6 = mobyfunc::CreateMoby(0x21e);
      piVar10 = (int *)uVar9;
      *piVar10 = (int)pMVar6;
      pMVar6->drawDistance = 0x40;
      *(ushort *)(*piVar10 + 0x34) = *(ushort *)(*piVar10 + 0x34) | 2;
      iVar13 = *piVar10;
      *(f32 *)(iVar13 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar13 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar13 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar13 + 0x1c) = (moby->pos).w;
      iVar13 = *piVar10;
      *(f32 *)(iVar13 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar13 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar13 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar13 + 0x4c) = (moby->rotation).w;
      dVar14 = (double)fastfunc::FastWrapRot
                                 (*(float *)(*piVar10 + 0x40),
                                  (float)((double)(longlong)iVar7 * dVar15));
      iVar7 = iVar7 + 1;
      *(float *)(*piVar10 + 0x40) = (float)dVar14;
    } while (iVar7 < 4);
    iVar7 = 0;
    uVar9 = uVar12;
    do {
      pMVar6 = mobyfunc::CreateMoby(0x21f);
      iVar5 = (int)uVar9;
      *(MobyInstance **)(iVar5 + 4) = pMVar6;
      pMVar6->drawDistance = 0x40;
      *(ushort *)(*(int *)(iVar5 + 4) + 0x34) = *(ushort *)(*(int *)(iVar5 + 4) + 0x34) | 2;
      iVar13 = *(int *)(iVar5 + 4);
      *(f32 *)(iVar13 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar13 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar13 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar13 + 0x1c) = (moby->pos).w;
      iVar13 = *(int *)(iVar5 + 4);
      *(f32 *)(iVar13 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar13 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar13 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar13 + 0x4c) = (moby->rotation).w;
      dVar14 = (double)fastfunc::FastWrapRot
                                 (*(float *)(*(int *)(iVar5 + 4) + 0x40),
                                  (float)((double)(longlong)iVar7 * dVar15));
      iVar7 = iVar7 + 1;
      uVar9 = uVar9 + 0xc;
      *(float *)(*(int *)(iVar5 + 4) + 0x40) = (float)dVar14;
    } while (iVar7 < 4);
    iVar7 = 0;
    do {
      pMVar6 = mobyfunc::CreateMoby(0x220);
      iVar5 = (int)uVar12;
      *(MobyInstance **)(iVar5 + 8) = pMVar6;
      pMVar6->drawDistance = 0x40;
      *(ushort *)(*(int *)(iVar5 + 8) + 0x34) = *(ushort *)(*(int *)(iVar5 + 8) + 0x34) | 2;
      iVar13 = *(int *)(iVar5 + 8);
      *(f32 *)(iVar13 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar13 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar13 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar13 + 0x1c) = (moby->pos).w;
      iVar13 = *(int *)(iVar5 + 8);
      *(f32 *)(iVar13 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar13 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar13 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar13 + 0x4c) = (moby->rotation).w;
      dVar14 = (double)fastfunc::FastWrapRot
                                 (*(float *)(*(int *)(iVar5 + 8) + 0x40),
                                  (float)((double)(longlong)iVar7 * dVar15));
      iVar7 = iVar7 + 1;
      uVar12 = uVar12 + 0xc;
      *(float *)(*(int *)(iVar5 + 8) + 0x40) = (float)dVar14;
    } while (iVar7 < 4);
    iVar7 = 0;
    puVar8 = (undefined4 *)moby->pVar;
    do {
      iVar13 = 0;
      puVar11 = puVar8;
      do {
        if (iVar13 != 0 || iVar7 != 0) {
          mobyfunc::UpdateMobyTransform((MobyInstance *)*puVar11);
        }
        iVar13 = iVar13 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar13 < 3);
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar7 < 4);
    moby->state = '\x01';
  }
  return;
}



//==== 003aff7c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M545_003aff7c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M545_003aff7c(void)

{
  DAT_008456ac = 0x10000;
  return;
}



//==== 003affa0  ns=Global  size=0x1a0
// sig: undefined FUN_003affa0(void)
// callers(1): 0038a628 mobyupdate_unsorted::UpdateMoby_455
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance *
FUN_003affa0(undefined4 param_1,f32 *param_2,undefined4 *param_3,undefined2 param_4,
            undefined4 param_5)

{
  short sVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  MobyInstance *pMVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pMVar4 = mobyfunc::CreateMoby(BOMB_0221);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar4->pVar;
    puVar2[4] = param_1;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
    dVar7 = -3.1415927410125732;
    dVar6 = 3.1415927410125732;
    dVar5 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    (pMVar4->rotation).x = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar6);
    (pMVar4->rotation).y = (float)dVar5;
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    puVar2[6] = 0;
    auVar10 = loadVectorLeftIndexed(8,0x3aff90);
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar8,0x14,ZEXT48(puVar2));
    *(undefined2 *)(puVar2 + 5) = uVar3;
    *(undefined2 *)((int)puVar2 + 0x16) = param_4;
    pMVar4->updateDistance = *(char *)(puVar2[4] + 0x30);
    sVar1 = *(short *)(puVar2[4] + 0x32);
    pMVar4->enabled = '\x01';
    pMVar4->drawDistance = sVar1;
    pMVar4->state = '\0';
    pMVar4->scale = pMVar4->pClass->gScale * 0.001;
    puVar2[8] = 0;
    puVar2[7] = param_5;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



