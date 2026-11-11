//==== 00391c14  ns=mobyupdate_helpers  size=0x14
// sig: undefined M459_00391c14(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M459_00391c14(void)

{
  DAT_00842270 = 0x10000;
  return;
}



//==== 00391c48  ns=mobyupdate_helpers  size=0x420
// sig: undefined M46_00391c48(void)
// callers(1): 00392910 mobyupdate_unsorted::UpdateMoby_46
// callees(5): 000fc620 mobyutil::MB_randInt; 001009b0 mobyutil::MB_MoveAndCollide; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M46_00391c48(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *unused;
  longlong lVar17;
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
  ulonglong in_f27;
  double dVar21;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x110;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x24] = in_LR;
  puVar9[0x1d] = in_f27;
  puVar9[0x1e] = in_f28;
  puVar9[0x1f] = in_f29;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1b] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar9[0x1a] = unaff_r29;
  fVar2 = *(float *)(param_1 + 0x10);
  iVar14 = *(int *)(iVar6 + 0x100);
  iVar7 = *(int *)(iVar6 + 0x120);
  fVar3 = *(float *)(param_1 + 0x14);
  puVar9[0x1c] = unaff_r31;
  pSVar8 = Splines[iVar14];
  dVar25 = (double)pSVar8->points[iVar7].x;
  dVar24 = (double)pSVar8->points[iVar7].y;
  fVar2 = (float)(dVar25 - (double)fVar2);
  dVar23 = (double)pSVar8->points[iVar7].z;
  fVar3 = (float)(dVar24 - (double)fVar3);
  fVar1 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar9 + 0x10) = fVar2;
  *(float *)((int)puVar9 + 0x84) = fVar3;
  *(float *)(puVar9 + 0x11) = fVar1 - fVar5;
  dVar21 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
  unused = (float *)(uVar15 << 2);
  fVar2 = ABS(*(float *)(puVar9 + 0x10));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = unused[0x1cd640];
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar9 + 0x84));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar10 = fVar1;
  }
  puVar9[0x19] = unaff_r28;
  puVar9[0x18] = unaff_r27;
  puVar9[0x17] = unaff_r26;
  dVar19 = dVar21;
  if (0.0 < fVar2) {
    lVar12 = uVar11 - 0x100;
    lVar16 = uVar11 - 0x84;
    lVar17 = uVar11 - 0x74;
    lVar18 = 2;
    fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar9 + 0x13) = fVar2;
    *(float *)(puVar9 + 0x12) = fVar2;
    *(float *)((int)puVar9 + 0x94) = fVar2;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar1;
    *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar2;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar2 * fVar1;
    do {
      *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x7c) * fVar2 * fVar2;
      iVar14 = (int)lVar16;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar17 = uVar11 - 0x84;
    unused = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar12 = lVar13;
    lVar16 = lVar17;
    do {
      fVar2 = *unused;
      fVar1 = unused[1];
      unused = unused + 2;
      *(float *)((int)lVar12 + 0x8c) = *(float *)((int)lVar12 + 0x8c) * fVar2;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar1;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    do {
      iVar14 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar7 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar7 + 4)
                        + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar3);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar19,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
             mobyutil::g_FrameTime * 6.2831855,(float *)(param_1 + 0x48),(int)unused,
             (float *)(iVar6 + 0x128));
  dVar22 = (double)(DAT_00842294 * mobyutil::g_FrameTime);
  dVar19 = (double)fastfunc::FastSubRots((float)dVar19,*(float *)(param_1 + 0x48));
  if (0.2617993950843811 < dVar19) {
    dVar22 = (double)mobyutil::g_FrameTime;
  }
  mobyutil::Delt((float)dVar22,DAT_0071f418,(float *)(iVar6 + 300));
  fVar2 = *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(param_1 + 0xc0);
  fVar5 = *(float *)(param_1 + 200);
  dVar19 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar19 == dVar21) {
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    dVar19 = dVar21;
    dVar22 = dVar21;
    dVar20 = dVar21;
  }
  else {
    fVar1 = (float)((double)*(float *)(iVar6 + 300) / dVar19);
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    dVar20 = (double)(fVar3 * fVar1);
    dVar22 = (double)(fVar2 * fVar1);
    dVar19 = (double)(fVar5 * fVar1);
  }
  *(float *)(puVar9 + 0xe) = (float)dVar20;
  *(float *)((int)puVar9 + 0x74) = (float)dVar22;
  *(float *)(puVar9 + 0xf) = (float)dVar19;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar4;
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar21,param_1,uVar11 - 0xa0);
  fVar2 = (float)((double)*(float *)(param_1 + 0x14) - dVar24);
  fVar3 = (float)((double)*(float *)(param_1 + 0x10) - dVar25);
  fVar5 = (float)((double)*(float *)(param_1 + 0x18) - dVar23);
  if (SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 1.0) {
    iVar14 = mobyutil::MB_randInt(Splines[*(int *)(iVar6 + 0x100)]->cnt + -1);
    iVar14 = *(int *)(iVar6 + 0x120) + iVar14 + 1;
    *(int *)(iVar6 + 0x120) =
         iVar14 - (iVar14 / Splines[*(int *)(iVar6 + 0x100)]->cnt) *
                  Splines[*(int *)(iVar6 + 0x100)]->cnt;
  }
  return;
}



//==== 003920c0  ns=mobyupdate_helpers  size=0x80c
// sig: undefined M46_003920c0(void)
// callers(1): 00392910 mobyupdate_unsorted::UpdateMoby_46
// callees(12): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010a2e0 mobyutil::OrganicDeltAng; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M46_003920c0(MobyInstance *param_1)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  undefined4 uVar17;
  int iVar18;
  longlong lVar16;
  float *pfVar20;
  longlong lVar19;
  undefined4 *unused;
  MobyInstance *pMVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar24 = uVar15 - 400;
  puVar11 = (ulonglong *)lVar24;
  *puVar11 = uVar15;
  puVar11[0x34] = in_LR;
  puVar11[0x2d] = in_f27;
  puVar11[0x2e] = in_f28;
  puVar11[0x2f] = in_f29;
  puVar11[0x30] = in_f30;
  puVar11[0x31] = in_f31;
  puVar11[0x2c] = unaff_r31;
  puVar11[0x2b] = unaff_r30;
  puVar11[0x2a] = unaff_r29;
  puVar11[0x29] = unaff_r28;
  puVar11[0x28] = unaff_r27;
  pvVar10 = param_1->pVar;
  uVar25 = ZEXT48(pvVar10);
  uVar17 = mobyutil::MB_damage(param_1,0x330000,0);
  mobyutil::MB_HandleDamage(param_1,uVar17,uVar25 + 0x20,0,puVar11 + 0x1c,(int)puVar11 + 0xe4,0,4);
  if ((*(int *)(puVar11 + 0x1c) != 1) && (param_1->state != '\0')) {
    fVar1 = *(float *)((int)pvVar10 + 0x20) - *(float *)((int)puVar11 + 0xe4);
    *(float *)((int)pvVar10 + 0x20) = fVar1;
    if (fVar1 <= 0.0) {
      fVar2 = (param_1->pos).y;
      *(f32 *)(puVar11 + 0x1a) = (param_1->pos).x;
      fVar3 = (param_1->pos).w;
      *(f32 *)((int)puVar11 + 0xd4) = fVar2;
      *(f32 *)((int)puVar11 + 0xdc) = fVar3;
      fVar1 = (param_1->pos).z;
      puVar11[0x12] = 0xffffffffffffffff;
      puVar11[0x14] = 1;
      puVar11[0x15] = 1;
      puVar11[0x16] = 0xffffffffffffffff;
      puVar11[0x17] = 0;
      *(float *)(puVar11 + 0x1b) = fVar1 + 1.0;
      mobyutil::MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,param_1,uVar25 + 0x40,uVar15 - 0xc0,&DAT_00392068,1,0x14,8,0x14)
      ;
      mobyfunc::DeleteMoby(param_1);
      return;
    }
    *(undefined1 *)((int)pvVar10 + 0x67) = 0x78;
    mobyutil::MB_UpdateLightsTransition(param_1,uVar25 + 0x60);
  }
  pMVar21 = (MobyInstance *)0xff;
  param_1->damage = -1;
  dVar33 = 30.0;
  iVar18 = mobyutil::MB_getTarget(0x403e000000000000,param_1,0xff,uVar25 + 0x70);
  pMVar14 = g_heroMobyPtr;
  if (iVar18 != 2) {
    fVar1 = (param_1->pos).y - g_heroPosition.y;
    fVar9 = (param_1->pos).x - g_heroPosition.x;
    pMVar21 = (MobyInstance *)&DAT_00392068;
    dVar27 = (double)SQRT(fVar9 * fVar9 + fVar1 * fVar1);
    if (10.0 <= dVar27) {
      if (dVar33 < dVar27) {
        *(undefined4 *)((int)pvVar10 + 0xb4) = 2;
      }
    }
    else {
      *(MobyInstance **)((int)pvVar10 + 0xb0) = g_heroMobyPtr;
      pMVar21 = g_heroMobyPtr;
      *(f32 *)((int)pvVar10 + 0x70) = (g_heroMobyPtr->pos).x;
      *(f32 *)((int)pvVar10 + 0x74) = (pMVar21->pos).y;
      *(f32 *)((int)pvVar10 + 0x78) = (pMVar21->pos).z;
      *(f32 *)((int)pvVar10 + 0x7c) = (pMVar21->pos).w;
      pMVar21 = pMVar14;
    }
  }
  if (*(int *)((int)pvVar10 + 0xb4) == 2) {
    dVar27 = 12.566370964050293;
    dVar33 = 9.42477798461914;
    mobyutil::OrganicDeltAng
              ((param_1->rotation).z,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 9.424778,(float *)((int)pvVar10 + 0x110),(int)pMVar21,
               (float *)((int)pvVar10 + 0x114));
    mobyutil::OrganicDeltAng
              (0.0,(float)((double)DAT_0071f418 * dVar27),(float)((double)DAT_0071f418 * dVar27),
               (float)((double)mobyutil::g_FrameTime * dVar33),(float *)((int)pvVar10 + 0x118),
               (int)pMVar21,(float *)((int)pvVar10 + 0x11c));
  }
  else {
    dVar32 = (double)(*(float *)((int)pvVar10 + 0x74) - (param_1->pos).y);
    dVar34 = (double)(*(float *)((int)pvVar10 + 0x70) - (param_1->pos).x);
    dVar31 = (double)((*(float *)((int)pvVar10 + 0x78) - (param_1->pos).z) - 3.0);
    dVar28 = (double)(float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32));
    dVar33 = dVar32;
    dVar27 = dVar34;
    if (*(float *)((int)pvVar10 + 0x130) < SQRT((float)(dVar31 * dVar31 + dVar28))) {
      fVar1 = (float)SQRT(dVar28);
      dVar33 = 0.0;
      dVar27 = dVar33;
      if (fVar1 != 0.0) {
        dVar27 = (double)(*(float *)((int)pvVar10 + 0x130) / fVar1);
        dVar33 = (double)(float)(dVar27 * dVar32);
        dVar27 = (double)(float)(dVar27 * dVar34);
      }
    }
    fVar1 = *(float *)((int)pvVar10 + 0x134);
    fVar9 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar9 = fVar1;
    }
    *(float *)((int)puVar11 + 0xf4) = (float)dVar27;
    *(float *)(puVar11 + 0x1f) = (float)dVar33;
    *(float *)((int)puVar11 + 0xfc) = (float)(ABS(dVar27) - ABS(dVar33));
    dVar28 = 0.0;
    fVar7 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar9 < 0.0) {
      fVar7 = fVar9;
    }
    fVar1 = fVar7 * fVar7;
    uVar23 = (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1d) & 4;
    dVar32 = ABS((double)*(float *)((int)puVar11 + 0xf4));
    if (*(float *)((int)puVar11 + 0xfc) - 0.0 < 0.0) {
      dVar32 = ABS(dVar33);
    }
    fVar8 = fVar1 * fVar1 * fVar7;
    fVar12 = fVar1 * fVar8;
    dVar30 = 0.7853981852531433;
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar34 = ABS((double)*(float *)(puVar11 + 0x1f));
    if (*(float *)((int)puVar11 + 0xfc) - 0.0 < 0.0) {
      dVar34 = ABS(dVar27);
    }
    fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar29 = dVar28;
    if (0.0 < dVar32) {
      lVar16 = uVar15 - 0x180;
      lVar22 = uVar15 - 0x60;
      lVar19 = uVar15 - 0x70;
      lVar26 = 2;
      fVar5 = (float)(dVar34 - dVar32) / (float)(dVar34 + dVar32);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 300) = fVar5;
      *(float *)((int)puVar11 + 0x124) = fVar5;
      *(float *)(puVar11 + 0x25) = fVar5;
      *(float *)(puVar11 + 0x24) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x124) = *(float *)((int)puVar11 + 0x124) * fVar6;
      *(float *)(puVar11 + 0x25) = *(float *)(puVar11 + 0x25) * fVar5;
      *(float *)((int)puVar11 + 300) = *(float *)((int)puVar11 + 300) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x110) * fVar5 * fVar5;
        iVar18 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar22 = uVar15 - 0x70;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar24;
      lVar19 = lVar22;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x120) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar19 = 2;
      lVar16 = lVar24;
      dVar32 = dVar28;
      do {
        iVar18 = (int)lVar16;
        iVar13 = (int)lVar22;
        lVar16 = lVar16 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar18 + 0x120)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar29 = (double)((float)(dVar32 + 0.7853981852531433) * fVar9 + fVar4);
    }
    dVar32 = (double)fastfunc::FastWrapRot
                               ((float)dVar29,
                                (fVar1 * fVar12 * 2.601887e-06 +
                                fVar12 * -0.0001980741 +
                                fVar8 * 0.0083330255 + fVar1 * fVar7 * -0.16666657 + fVar7) *
                                0.08726646);
    *(float *)((int)puVar11 + 0xec) = (float)dVar31;
    fVar1 = SQRT((float)(dVar27 * dVar27 + (double)(float)(dVar33 * dVar33)));
    dVar27 = ABS((double)fVar1);
    *(float *)(puVar11 + 0x1d) = fVar1;
    *(float *)(puVar11 + 0x1e) = (float)(dVar27 - ABS(dVar31));
    uVar23 = (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1d) & 4;
    dVar33 = ABS((double)*(float *)(puVar11 + 0x1d));
    if ((double)*(float *)(puVar11 + 0x1e) - dVar28 < 0.0) {
      dVar33 = ABS(dVar31);
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar31 = ABS((double)*(float *)((int)puVar11 + 0xec));
    if ((double)*(float *)(puVar11 + 0x1e) - dVar28 < 0.0) {
      dVar31 = dVar27;
    }
    fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    if (dVar28 < dVar33) {
      lVar16 = uVar15 - 0x180;
      lVar22 = uVar15 - 0x80;
      lVar19 = uVar15 - 0x90;
      lVar26 = 2;
      fVar7 = (float)(dVar31 - dVar33) / (float)(dVar31 + dVar33);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar11 + 0x10c) = fVar7;
      *(float *)((int)puVar11 + 0x104) = fVar7;
      *(float *)(puVar11 + 0x21) = fVar7;
      *(float *)(puVar11 + 0x20) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar11 + 0x104) = *(float *)((int)puVar11 + 0x104) * fVar8;
      *(float *)(puVar11 + 0x21) = *(float *)(puVar11 + 0x21) * fVar7;
      *(float *)((int)puVar11 + 0x10c) = *(float *)((int)puVar11 + 0x10c) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0xf0) * fVar7 * fVar7;
        iVar18 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar22 = uVar15 - 0x90;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar24;
      lVar19 = lVar22;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0x100) * fVar7;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar8;
        lVar19 = lVar19 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar24;
        iVar13 = (int)lVar22;
        lVar24 = lVar24 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x100)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + dVar30) * fVar1 + fVar9);
    }
    dVar28 = -dVar28;
    dVar33 = 0.3490658402442932;
    if ((dVar28 <= 0.3490658402442932) && (dVar33 = dVar28, dVar28 < -0.7853981852531433)) {
      dVar33 = -0.7853981852531433;
    }
    unused = &DAT_00392068;
    dVar28 = 12.566370964050293;
    dVar27 = 9.42477798461914;
    mobyutil::OrganicDeltAng
              ((float)dVar32,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 9.424778,(float *)((int)pvVar10 + 0x110),0x392068,
               (float *)((int)pvVar10 + 0x114));
    mobyutil::OrganicDeltAng
              ((float)dVar33,(float)((double)DAT_0071f418 * dVar28),
               (float)((double)DAT_0071f418 * dVar28),
               (float)((double)mobyutil::g_FrameTime * dVar27),(float *)((int)pvVar10 + 0x118),
               (int)unused,(float *)((int)pvVar10 + 0x11c));
  }
  fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar10 + 0x118),uVar15 - 0xd0,1);
  lVar24 = uVar25 + 0xd0;
  fastfunc::FastDiffRots((double)*(float *)((int)pvVar10 + 0x110),(double)(param_1->rotation).z);
  fastfunc::FastQuaternionToEuler(lVar24,2);
  fastfunc::FastQuaternionMult(lVar24,uVar15 - 0xd0,lVar24);
  mobyutil::MB_ColorDyingMoby(param_1,uVar25 + 0x60);
  return;
}



//==== 00392910  ns=mobyupdate_unsorted  size=0x500
// sig: undefined UpdateMoby_46(MobyInstance * moby)
// callers(0): 
// callees(10): 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 00109af0 mobyutil::Delt; 00113e88 mobyutil::MB_MayaFrameTrigger; 00366190 FUN_00366190; 00391c48 mobyupdate_helpers::M46_00391c48; 003920c0 mobyupdate_helpers::M46_003920c0; 00502578 fastfunc::FastWrapRot

/* Moby 46 */

void mobyupdate_unsorted::UpdateMoby_46(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 in_LR;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 local_60 [16];
  undefined1 auStack_50 [40];
  
  pvVar2 = moby->pVar;
  mobyupdate_helpers::M46_003920c0();
  bVar1 = moby->state;
  if (bVar1 == 0) {
    mobyfunc::AttachManipulator(moby,0,(int)pvVar2 + 0xc0);
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    *(undefined4 *)((int)pvVar2 + 0x20) = 0x40c00000;
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    *(undefined2 *)((int)pvVar2 + 0x24) = 6;
    *(undefined1 *)((int)pvVar2 + 0x28) = 3;
    fVar4 = animationSpeed;
    auVar8 = loadVectorLeftIndexed(in_LR,0x3928cc);
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,
                       ZEXT48(pvVar2));
    *(undefined4 *)((int)pvVar2 + 0x124U & 0xfffffffc) = uVar3;
    *(undefined4 *)((int)pvVar2 + 0x120) = 0;
    if (moby->animationId != '\x01') {
      mobyutil::MB_SetAnimation(moby,1,0,(int)(fVar4 * 10.5));
    }
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    mobyupdate_helpers::M46_00391c48(moby);
    if (*(int *)((int)pvVar2 + 0xb4) != 2) {
      *(undefined4 *)((int)pvVar2 + 0x130) = 0x41200000;
      *(undefined4 *)((int)pvVar2 + 0x134) = 0;
      if (moby->animationId != '\x02') {
        mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    mobyupdate_helpers::M46_00391c48(moby);
    mobyutil::Delt(30.0,mobyutil::g_FrameTime * 6.0,(float *)((int)pvVar2 + 0x130));
    dVar7 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)pvVar2 + 0x134),mobyutil::g_FrameTime * 6.2831855);
    *(float *)((int)pvVar2 + 0x134) = (float)dVar7;
    iVar6 = mobyutil::MB_MayaFrameTrigger(4.0,moby);
    if ((iVar6 != 0) || (iVar6 = mobyutil::MB_MayaFrameTrigger(10.0,moby), iVar6 != 0)) {
      dVar7 = (double)mobyfunc::BlendAnimFrame(moby);
      if (7.0 <= dVar7) {
        mobyfunc::GetBonePosition(moby,2,auStack_50);
      }
      else {
        mobyfunc::GetBonePosition(moby,1,auStack_50);
      }
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) <= 10.0) {
        FUN_00366190(moby,auStack_50,local_60,1);
      }
      else {
        FUN_00366190(moby,auStack_50,local_60,0);
      }
    }
    if (*(int *)((int)pvVar2 + 0xb4) == 2) {
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x01';
    }
  }
  return;
}



//==== 00392e10  ns=mobyupdate_helpers  size=0x14
// sig: undefined M460_00392e10(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M460_00392e10(void)

{
  DAT_008422e8 = 0x10000;
  return;
}



//==== 00392e28  ns=mobyupdate_helpers  size=0x2c
// sig: undefined M460_00392e28(void)
// callers(0): 
// callees(1): 0017e558 water::SubmitZone

void mobyupdate_helpers::M460_00392e28(void)

{
  water::SubmitZone(&OCEAN_UMBRIS);
  return;
}



//==== 00392e58  ns=mobyupdate_unsorted  size=0x88
// sig: undefined UpdateMoby_460(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d760 draw::RegisterOceanUpdate; 0017e31c water::OceanPlane_SetDepth

/* Moby 460 */

void mobyupdate_unsorted::UpdateMoby_460(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    water::OceanPlane_SetDepth(1.0,&OCEAN_UMBRIS,ZEXT48(&DAT_00392e54),0x80);
  }
  else if (moby->state < 2) {
    draw::RegisterOceanUpdate(&PTR_M460_00392e28_0070cd80,moby);
  }
  return;
}



//==== 00392ee8  ns=mobyupdate_helpers  size=0x16c
// sig: undefined M462_00392ee8(void)
// callers(1): 003935e8 mobyupdate_unsorted::UpdateMoby_462
// callees(1): 003849b8 mobyupdate_helpers::M465_003849b8

void mobyupdate_helpers::M462_00392ee8(int param_1)

{
  int iVar1;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(iVar1 + 0x60) = param_1;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  uVar3 = M465_003849b8(param_1,0x1c0,1,0);
  *(undefined4 *)(iVar1 + 0x90) = uVar3;
  *(int *)(iVar1 + 0x94) = param_1;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0x98) = 1;
  iVar4 = M465_003849b8(param_1,0x1bd,0,2);
  *(int *)(iVar1 + 0x70) = iVar4;
  *(int *)(iVar1 + 0x74) = param_1;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 2;
  *(float *)(iVar4 + 0x2c) = *(float *)(*(int *)(iVar4 + 0x24) + 0x24) * 0.75;
  uVar2 = M465_003849b8(param_1,0x1ba,1,1);
  *(int *)(iVar1 + 0x80) = (int)uVar2;
  *(int *)(iVar1 + 0x84) = param_1;
  *(undefined4 *)(iVar1 + 0x88) = 1;
  *(undefined4 *)(iVar1 + 0x8c) = 1;
  uVar3 = M465_003849b8(uVar2,0x1b9,0,0);
  *(undefined4 *)(iVar1 + 0xa0) = uVar3;
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  iVar4 = iVar1;
  do {
    iVar5 = iVar6 + 2;
    uVar3 = M465_003849b8(*(undefined4 *)(iVar1 + 0x90),0x1bb,0,iVar5);
    *(undefined4 *)(iVar4 + 0xb0) = uVar3;
    uVar3 = *(undefined4 *)(iVar1 + 0x90);
    iVar6 = iVar6 + 1;
    *(int *)(iVar4 + 0xbc) = iVar5;
    *(undefined4 *)(iVar4 + 0xb4) = uVar3;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    iVar4 = iVar4 + 0x10;
  } while (iVar6 < 8);
  return;
}



//==== 00393068  ns=mobyupdate_helpers  size=0x3b4
// sig: undefined M462_00393068(void)
// callers(1): 003935e8 mobyupdate_unsorted::UpdateMoby_462
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0015d12c sound::PlayMobySound; 00502758 fastfunc::FastDoubleToInt

ulonglong mobyupdate_helpers::M462_00393068(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar14;
  ulonglong uVar13;
  short sVar17;
  uint uVar15;
  int iVar16;
  void *pvVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  lVar20 = 0;
  pvVar2 = param_1->pVar;
  iVar16 = -1;
  lVar21 = 0;
  lVar19 = 0;
  pvVar18 = pvVar2;
  do {
    if ((*(int *)((int)pvVar18 + 0x60) != 0) &&
       (iVar14 = mobyutil::MB_damage(*(int *)((int)pvVar18 + 0x60),0x10000,0), iVar14 != 0)) {
      iVar14 = (int)lVar20;
      if ((int)lVar21 < 3) {
        if (iVar14 < 1) {
          lVar20 = 1;
          iVar16 = 1;
        }
      }
      else if ((int)lVar21 < 5) {
        if (iVar14 < 2) {
          iVar16 = 1;
          lVar20 = 2;
        }
      }
      else if (iVar14 < 4) {
        lVar20 = lVar20 + 4;
        iVar16 = 2;
        lVar19 = lVar21;
      }
      *(undefined1 *)(*(int *)((int)pvVar18 + 0x60) + 0xa4) = 0xff;
    }
    lVar21 = lVar21 + 1;
    pvVar18 = (void *)((int)pvVar18 + 0x10);
  } while ((int)lVar21 < 0xd);
  uVar13 = (ulonglong)*(ushort *)((int)pvVar2 + 0x13c) + lVar20;
  sVar17 = (short)uVar13;
  *(short *)((int)pvVar2 + 0x13c) = sVar17;
  if (7 < sVar17) {
    *(ushort *)((int)pvVar2 + 0x13c) =
         sVar17 + ((sVar17 >> 3) + (ushort)(sVar17 < 0 && (uVar13 & 7) != 0)) * -8;
    if ((int)lVar19 != 0) {
      iVar4 = (int)(lVar19 << 4);
      iVar16 = *(int *)((int)pvVar2 + iVar4 + 0x60);
      pfVar3 = *(float **)(iVar16 + 0x78);
      mobyutil::MB_SpawnExplosionSparks
                (0x4000000000000000,0x402a000000000000,param_1,iVar16 + 0x10,iVar16,
                 0xffffffffffffffff);
      iVar16 = *(int *)((int)pvVar2 + iVar4 + 0x60);
      iVar14 = *(int *)((int)pvVar2 + iVar4 + 100);
      fVar5 = *(float *)(iVar16 + 0x10) - *(float *)(iVar14 + 0x10);
      *pfVar3 = fVar5;
      fVar6 = *(float *)(iVar16 + 0x14) - *(float *)(iVar14 + 0x14);
      pfVar3[1] = fVar6;
      fVar7 = *(float *)(iVar16 + 0x18) - *(float *)(iVar14 + 0x18);
      pfVar3[2] = fVar7;
      pfVar3[3] = *(float *)(iVar16 + 0x1c);
      fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      fVar1 = 0.0;
      fVar9 = (mobyutil::g_FrameTime * 10.0) / fVar8;
      fVar11 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar11 = fVar5 * fVar9;
      }
      fVar10 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar10 = fVar6 * fVar9;
      }
      if (0.0 - fVar8 < 0.0) {
        fVar1 = fVar7 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar11 = fVar5 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar10 = fVar6 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar1 = fVar7 * fVar9;
      }
      *pfVar3 = fVar11;
      pfVar3[1] = fVar10;
      pfVar3[2] = fVar1;
      *(undefined1 *)(*(int *)((int)pvVar2 + iVar4 + 0x60) + 0x20) = 1;
      *(undefined4 *)((int)pvVar2 + iVar4 + 0x60) = 0;
      return 1;
    }
    dVar26 = 0.0;
    mobyutil::MB_randRangeFloat(0.0,23.0);
    uVar15 = fastfunc::FastDoubleToInt();
    iVar14 = 0;
    do {
      iVar12 = uVar15 + (((int)uVar15 >> 3) + (uint)((int)uVar15 < 0 && (uVar15 & 7) != 0)) * -8 + 5
      ;
      iVar4 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
      if (iVar4 != 0) {
        pfVar3 = *(float **)(iVar4 + 0x78);
        mobyutil::MB_SpawnExplosionSparks
                  (0x4000000000000000,0x402a000000000000,param_1,iVar4 + 0x10,iVar4,
                   0xffffffffffffffff);
        iVar16 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
        iVar14 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 100);
        fVar5 = *(float *)(iVar16 + 0x10) - *(float *)(iVar14 + 0x10);
        *pfVar3 = fVar5;
        fVar6 = *(float *)(iVar16 + 0x14) - *(float *)(iVar14 + 0x14);
        pfVar3[1] = fVar6;
        fVar7 = *(float *)(iVar16 + 0x18) - *(float *)(iVar14 + 0x18);
        pfVar3[2] = fVar7;
        pfVar3[3] = *(float *)(iVar16 + 0x1c);
        dVar24 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
        fVar1 = (float)((double)(mobyutil::g_FrameTime * 10.0) / dVar24);
        dVar22 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar22 = (double)(fVar5 * fVar1);
        }
        dVar23 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar23 = (double)(fVar6 * fVar1);
        }
        dVar25 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar25 = (double)(fVar7 * fVar1);
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar22 = (double)(fVar5 * fVar1);
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar23 = (double)(fVar6 * fVar1);
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar25 = (double)(fVar7 * fVar1);
        }
        *pfVar3 = (float)dVar22;
        pfVar3[1] = (float)dVar23;
        pfVar3[2] = (float)dVar25;
        *(undefined1 *)(*(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60) + 0x20) = 1;
        *(undefined4 *)((int)pvVar2 + iVar12 * 0x10 + 0x60) = 0;
        return 1;
      }
      iVar14 = iVar14 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar14 < 8);
    uVar13 = 99;
    param_1->state = 'c';
  }
  if (-1 < iVar16) {
    iVar16 = sound::PlayMobySound(iVar16,0,param_1);
    uVar13 = (ulonglong)iVar16;
  }
  return uVar13;
}



//==== 00393420  ns=mobyupdate_helpers  size=0x174
// sig: undefined M462_00393420(void)
// callers(1): 003935e8 mobyupdate_unsorted::UpdateMoby_462
// callees(3): 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M462_00393420(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar4 = 1;
  iVar2 = iVar5 + 0x10;
  iVar3 = iVar2;
  do {
    iVar1 = *(int *)(iVar3 + 0x60);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      mobyfunc::GetBonePosition(iVar1,*(undefined4 *)(iVar3 + 0x68),&local_60);
      mobyfunc::GetBonePosition
                (*(undefined4 *)(iVar3 + 100),*(undefined4 *)(iVar3 + 0x6c),&local_50);
      *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + (local_50 - local_60);
      *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) + (local_4c - local_5c);
      *(float *)(iVar1 + 0x18) = *(float *)(iVar1 + 0x18) + (local_48 - local_58);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0xd);
  if (*(int *)(iVar5 + 0x90) != 0) {
    dVar6 = (double)fastfunc::FastWrapRot
                              (*(float *)(*(int *)(iVar5 + 0x90) + 0x40),
                               DAT_00842b84 * 0.017453292 * mobyutil::g_FrameTime);
    *(float *)(*(int *)(iVar5 + 0x90) + 0x40) = (float)dVar6;
  }
  iVar5 = 1;
  do {
    if (*(MobyInstance **)(iVar2 + 0x60) != (MobyInstance *)0x0) {
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar2 + 0x60));
    }
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar5 < 0xd);
  return;
}



//==== 003935e8  ns=mobyupdate_unsorted  size=0x1610
// sig: undefined UpdateMoby_462(MobyInstance * moby)
// callers(0): 
// callees(16): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 00375430 FUN_00375430; 00392ee8 mobyupdate_helpers::M462_00392ee8; 00393068 mobyupdate_helpers::M462_00393068; 00393420 mobyupdate_helpers::M462_00393420; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 462 */

void mobyupdate_unsorted::UpdateMoby_462(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  int *piVar10;
  int *piVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar17;
  undefined2 uVar18;
  longlong lVar15;
  longlong lVar16;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  void *pvVar25;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar26;
  int iVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar39;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x260;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar14;
  puVar12[0x4e] = in_LR;
  puVar12[0x44] = in_f24;
  puVar12[0x45] = in_f25;
  puVar12[0x46] = in_f26;
  puVar12[0x47] = in_f27;
  puVar12[0x48] = in_f28;
  puVar12[0x49] = in_f29;
  puVar12[0x4a] = in_f30;
  puVar12[0x4b] = in_f31;
  puVar12[0x43] = unaff_r31;
  puVar12[0x42] = unaff_r30;
  iVar17 = DAT_010c9240;
  piVar10 = (int *)moby->pVar;
  puVar12[0x41] = unaff_r29;
  puVar12[0x40] = unaff_r28;
  puVar12[0x3f] = unaff_r27;
  puVar12[0x3e] = unaff_r26;
  puVar12[0x3d] = unaff_r25;
  if (iVar17 == 0) {
    iVar17 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)piVar10 + 0x13e));
    if (iVar17 == 0) {
      iVar17 = sound::PlayMobySound(3,4,moby);
      *(short *)((int)piVar10 + 0x13e) = (short)iVar17;
    }
    uVar1 = moby->state;
    if (uVar1 == 'c') {
      iVar17 = 1;
      uVar35 = 0x4008000000000000;
      uVar33 = 0x402a000000000000;
      dVar30 = 5.0;
      dVar44 = 0.0;
      do {
        iVar22 = piVar10[0x1c];
        if (iVar22 != 0) {
          pfVar21 = *(float **)(iVar22 + 0x78);
          mobyutil::MB_SpawnExplosionSparks(uVar35,uVar33,lVar15,iVar22 + 0x10);
          fVar4 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
          *pfVar21 = fVar4;
          fVar9 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
          pfVar21[1] = fVar9;
          fVar5 = *(float *)(iVar22 + 0x18) - (moby->pos).z;
          pfVar21[2] = fVar5;
          pfVar21[3] = *(float *)(iVar22 + 0x1c);
          dVar37 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar9 * fVar9);
          fVar3 = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar30) / dVar37);
          dVar36 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar36 = (double)(fVar4 * fVar3);
          }
          dVar38 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar38 = (double)(fVar9 * fVar3);
          }
          dVar43 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar43 = (double)(fVar5 * fVar3);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar36 = (double)(fVar4 * fVar3);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar38 = (double)(fVar9 * fVar3);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar43 = (double)(fVar5 * fVar3);
          }
          *pfVar21 = (float)dVar36;
          pfVar21[1] = (float)dVar38;
          pfVar21[2] = (float)dVar43;
          *(undefined1 *)(iVar22 + 0x20) = 1;
          piVar10[0x1c] = 0;
        }
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 4;
      } while (iVar17 < 0xd);
      mobyutil::MB_SpawnExplosionSparks(dVar30,uVar33,lVar15,lVar15 + 0x10);
      mobyfunc::DeleteMoby(moby);
    }
    else {
      dVar44 = 0.7853981852531433;
      if (uVar1 == '\x03') {
        moby->state = '\x01';
        iVar17 = piVar10[4];
        fVar3 = *(float *)(iVar17 + 0x10);
        (moby->pos).x = fVar3;
        fVar4 = *(float *)(iVar17 + 0x14);
        (moby->pos).y = fVar4;
        (moby->pos).z = *(f32 *)(iVar17 + 0x18);
        (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
        fVar3 = *(float *)(iVar17 + 0x20) - fVar3;
        fVar4 = *(float *)(iVar17 + 0x24) - fVar4;
        fVar5 = ABS(fVar3);
        fVar9 = ABS(fVar4);
        *(float *)(puVar12 + 0x16) = fVar3;
        *(float *)((int)puVar12 + 0xb4) = fVar4;
        *(float *)(puVar12 + 0x17) = fVar5 - fVar9;
        fVar3 = 0.0;
        uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar12 + 0x16));
        if (*(float *)(puVar12 + 0x17) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)((int)puVar12 + 0xb4));
        if (*(float *)(puVar12 + 0x17) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar19 = uVar14 - 0x250;
          lVar24 = uVar14 - 0x15c;
          lVar28 = uVar14 - 0x14c;
          lVar29 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x22) = fVar4;
          *(float *)(puVar12 + 0x21) = fVar4;
          *(float *)((int)puVar12 + 0x10c) = fVar4;
          *(float *)((int)puVar12 + 0x104) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar5;
          *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar4;
          *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar19 + 0x104) = *(float *)((int)lVar19 + 0xf4) * fVar4 * fVar4;
            iVar17 = (int)lVar24;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar28 = uVar14 - 0x15c;
          pfVar21 = (float *)&DAT_007358e0;
          lVar19 = lVar16;
          lVar24 = lVar28;
          do {
            fVar4 = *pfVar21;
            fVar5 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar19 + 0x104) = *(float *)((int)lVar19 + 0x104) * fVar4;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar22 = (int)lVar28;
            lVar16 = lVar16 + 0x10;
            lVar28 = lVar28 + 0x10;
            fVar3 = fVar3 + *(float *)(iVar17 + 0x104) + *(float *)(iVar22 + 4) +
                    *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          fVar3 = (fVar3 + 0.7853982) * fVar6 + fVar9;
        }
        (moby->rotation).z = fVar3;
        mobyupdate_helpers::M462_00393420(lVar15);
      }
      else if (uVar1 == '\x02') {
        if ((((g_gameMode == GAME_MODE_SCENE) && (*(short *)(piVar10 + 0x4e) != 0)) &&
            (update::g_SceneId == 0)) && (boot::g_SpaceSceneFrame == 2)) {
          iVar17 = piVar10[0x10];
          (moby->pos).x = *(f32 *)(iVar17 + 0x100);
          (moby->pos).y = *(f32 *)(iVar17 + 0x104);
          (moby->pos).z = *(f32 *)(iVar17 + 0x108);
          (moby->pos).w = *(f32 *)(iVar17 + 0x10c);
          piVar10[0xc] = 0xf;
          fVar3 = *(float *)(piVar10[0x10] + 0xc0) - (moby->pos).x;
          fVar4 = *(float *)(piVar10[0x10] + 0xc4) - (moby->pos).y;
          fVar5 = ABS(fVar3);
          *(float *)((int)puVar12 + 0xd4) = fVar3;
          fVar9 = ABS(fVar4);
          *(float *)(puVar12 + 0x1b) = fVar4;
          *(float *)((int)puVar12 + 0xdc) = fVar5 - fVar9;
          fVar3 = 0.0;
          uVar23 = (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)((int)puVar12 + 0xd4));
          if (*(float *)((int)puVar12 + 0xdc) - 0.0 < 0.0) {
            fVar4 = fVar9;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar7 = ABS(*(float *)(puVar12 + 0x1b));
          if (*(float *)((int)puVar12 + 0xdc) - 0.0 < 0.0) {
            fVar7 = fVar5;
          }
          if (0.0 < fVar4) {
            lVar19 = uVar14 - 0x250;
            lVar24 = uVar14 - 0xfc;
            lVar28 = uVar14 - 0xec;
            lVar29 = 2;
            fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x2e) = fVar4;
            *(float *)(puVar12 + 0x2d) = fVar4;
            *(float *)((int)puVar12 + 0x16c) = fVar4;
            *(float *)((int)puVar12 + 0x164) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x2d) = *(float *)(puVar12 + 0x2d) * fVar5;
            *(float *)((int)puVar12 + 0x16c) = *(float *)((int)puVar12 + 0x16c) * fVar4;
            *(float *)(puVar12 + 0x2e) = *(float *)(puVar12 + 0x2e) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar19 + 0x164) = *(float *)((int)lVar19 + 0x154) * fVar4 * fVar4;
              iVar17 = (int)lVar24;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
              lVar28 = lVar28 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar28 = uVar14 - 0xfc;
            pfVar21 = (float *)&DAT_007358e0;
            lVar19 = lVar16;
            lVar24 = lVar28;
            do {
              fVar4 = *pfVar21;
              fVar5 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar19 + 0x164) = *(float *)((int)lVar19 + 0x164) * fVar4;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar24 = 2;
            lVar19 = lVar16;
            do {
              iVar17 = (int)lVar19;
              iVar22 = (int)lVar28;
              lVar19 = lVar19 + 0x10;
              lVar28 = lVar28 + 0x10;
              fVar3 = fVar3 + *(float *)(iVar17 + 0x164) + *(float *)(iVar22 + 4) +
                      *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar3 = (fVar3 + 0.7853982) * fVar6 + fVar9;
          }
          (moby->rotation).z = fVar3;
        }
        piVar11 = (int *)piVar10[0x10];
        iVar17 = piVar10[0xc];
        iVar22 = *piVar11;
        iVar27 = (iVar17 + 1) - ((iVar17 + 1) / iVar22) * iVar22;
        fVar3 = (float)piVar11[iVar27 * 4 + 4];
        fVar4 = (float)piVar11[iVar27 * 4 + 5];
        fVar9 = fVar3 - (float)piVar11[iVar17 * 4 + 4];
        fVar5 = fVar4 - (float)piVar11[iVar17 * 4 + 5];
        fVar7 = ABS(fVar9);
        *(float *)(puVar12 + 0x19) = fVar9;
        fVar6 = ABS(fVar5);
        *(float *)((int)puVar12 + 0xcc) = fVar5;
        iVar17 = (iVar17 + 2) - ((iVar17 + 2) / iVar22) * iVar22;
        *(float *)(puVar12 + 0x1a) = fVar7 - fVar6;
        dVar44 = 0.0;
        uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1d) & 4;
        fVar9 = ABS(*(float *)(puVar12 + 0x19));
        if (*(float *)(puVar12 + 0x1a) - 0.0 < 0.0) {
          fVar9 = fVar6;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar6 = ABS(*(float *)((int)puVar12 + 0xcc));
        if (*(float *)(puVar12 + 0x1a) - 0.0 < 0.0) {
          fVar6 = fVar7;
        }
        fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        dVar30 = dVar44;
        if (0.0 < fVar9) {
          lVar19 = uVar14 - 0x250;
          lVar28 = uVar14 - 0x10c;
          lVar24 = uVar14 - 0x11c;
          lVar29 = 2;
          fVar9 = (fVar6 - fVar9) / (fVar6 + fVar9);
          fVar6 = fVar9 * fVar9;
          *(float *)(puVar12 + 0x2a) = fVar9;
          *(float *)(puVar12 + 0x29) = fVar9;
          *(float *)((int)puVar12 + 0x14c) = fVar9;
          *(float *)((int)puVar12 + 0x144) = fVar9;
          fVar9 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x29) = *(float *)(puVar12 + 0x29) * fVar6;
          *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar9;
          *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar9 * fVar6;
          do {
            *(float *)((int)lVar19 + 0x144) = *(float *)((int)lVar19 + 0x134) * fVar9 * fVar9;
            iVar22 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar28 = uVar14 - 0x11c;
          pfVar21 = (float *)&DAT_007358e0;
          lVar19 = lVar16;
          lVar24 = lVar28;
          do {
            fVar9 = *pfVar21;
            fVar6 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar19 + 0x144) = *(float *)((int)lVar19 + 0x144) * fVar9;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar24 = 2;
          lVar19 = lVar16;
          do {
            iVar22 = (int)lVar19;
            iVar13 = (int)lVar28;
            lVar19 = lVar19 + 0x10;
            lVar28 = lVar28 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x144)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar7);
        }
        fVar3 = (float)piVar11[iVar17 * 4 + 4] - fVar3;
        fVar4 = (float)piVar11[iVar17 * 4 + 5] - fVar4;
        fVar5 = ABS(fVar3);
        fVar9 = ABS(fVar4);
        *(float *)((int)puVar12 + 0xbc) = fVar3;
        *(float *)(puVar12 + 0x18) = fVar4;
        *(float *)((int)puVar12 + 0xc4) = fVar5 - fVar9;
        uVar23 = (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar12 + 0xbc));
        if (*(float *)((int)puVar12 + 0xc4) - 0.0 < 0.0) {
          fVar3 = fVar9;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar9 = ABS(*(float *)(puVar12 + 0x18));
        if (*(float *)((int)puVar12 + 0xc4) - 0.0 < 0.0) {
          fVar9 = fVar5;
        }
        fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        dVar36 = dVar44;
        if (0.0 < fVar3) {
          lVar19 = uVar14 - 0x250;
          lVar28 = uVar14 - 300;
          lVar24 = uVar14 - 0x13c;
          lVar29 = 2;
          fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
          fVar9 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x26) = fVar3;
          *(float *)(puVar12 + 0x25) = fVar3;
          *(float *)((int)puVar12 + 300) = fVar3;
          *(float *)((int)puVar12 + 0x124) = fVar3;
          fVar3 = fVar9 * fVar9;
          *(float *)(puVar12 + 0x25) = *(float *)(puVar12 + 0x25) * fVar9;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar3;
          *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar3 * fVar9;
          do {
            *(float *)((int)lVar19 + 0x124) = *(float *)((int)lVar19 + 0x114) * fVar3 * fVar3;
            iVar17 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar28 = uVar14 - 0x13c;
          pfVar21 = (float *)&DAT_007358e0;
          lVar19 = lVar16;
          lVar24 = lVar28;
          do {
            fVar3 = *pfVar21;
            fVar9 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar19 + 0x124) = *(float *)((int)lVar19 + 0x124) * fVar3;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar9;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar22 = (int)lVar28;
            lVar16 = lVar16 + 0x10;
            lVar28 = lVar28 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar17 + 0x124)) +
                              *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                             *(float *)(iVar22 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar4 + fVar5);
        }
        dVar30 = (double)fastfunc::FastDiffRots(dVar30,dVar36);
        iVar17 = piVar10[0x10] + iVar27 * 0x10;
        iVar22 = piVar10[0x10] + piVar10[0xc] * 0x10;
        fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14);
        fVar9 = (moby->pos).x - *(float *)(iVar17 + 0x10);
        fVar4 = *(float *)(iVar22 + 0x14) - *(float *)(iVar17 + 0x14);
        fVar5 = *(float *)(iVar22 + 0x10) - *(float *)(iVar17 + 0x10);
        fVar6 = (moby->pos).z - *(float *)(iVar17 + 0x18);
        fVar7 = *(float *)(iVar22 + 0x18) - *(float *)(iVar17 + 0x18);
        dVar30 = (double)fastfunc::FastWrapRot
                                   ((float)(dVar30 * (double)(SQRT(fVar6 * fVar6 +
                                                                   fVar9 * fVar9 + fVar3 * fVar3) /
                                                             SQRT(fVar7 * fVar7 +
                                                                  fVar5 * fVar5 + fVar4 * fVar4))),
                                    (float)dVar36);
        (moby->rotation).z = (float)dVar30;
        dVar36 = (double)(moby->pos).y;
        iVar17 = piVar10[0x10] + iVar27 * 0x10;
        dVar30 = (double)(moby->pos).x;
        fVar5 = *(float *)(iVar17 + 0x14);
        fVar6 = *(float *)(iVar17 + 0x10);
        fVar3 = (float)(dVar36 - (double)fVar5);
        dVar37 = (double)(moby->pos).z;
        fVar4 = (float)(dVar30 - (double)fVar6);
        fVar7 = *(float *)(iVar17 + 0x18);
        fVar9 = (float)(dVar37 - (double)fVar7);
        dVar38 = (double)*(float *)(iVar17 + 0x1c);
        if (SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
          piVar10[0xc] = iVar27;
          dVar30 = (double)(moby->pos).x;
          dVar36 = (double)(moby->pos).y;
          dVar37 = (double)(moby->pos).z;
        }
        dVar39 = (double)(float)((double)fVar5 - dVar36);
        dVar41 = (double)(float)((double)fVar6 - dVar30);
        dVar31 = (double)(float)((double)fVar7 - dVar37);
        dVar32 = (double)SQRT((float)(dVar31 * dVar31 +
                                     (double)(float)(dVar41 * dVar41 +
                                                    (double)(float)(dVar39 * dVar39))));
        dVar43 = dVar31;
        dVar40 = dVar39;
        dVar34 = dVar41;
        if (((double)(DAT_00842b80 * mobyutil::g_FrameTime) < dVar32) &&
           (dVar43 = dVar44, dVar40 = dVar44, dVar34 = dVar44, dVar32 != dVar44)) {
          dVar34 = (double)(float)((double)(DAT_00842b80 * mobyutil::g_FrameTime) / dVar32);
          dVar43 = (double)(float)(dVar31 * dVar34);
          dVar40 = (double)(float)(dVar39 * dVar34);
          dVar34 = (double)(float)(dVar41 * dVar34);
        }
        (moby->pos).x = (float)(dVar30 + dVar34);
        (moby->pos).y = (float)(dVar36 + dVar40);
        (moby->pos).z = (float)(dVar37 + dVar43);
        mobyupdate_helpers::M462_00393420(lVar15);
        iVar17 = fastfunc::FastDecTimerS16((int)piVar10 + 0x13a);
        if (iVar17 != 0) {
          dVar30 = (double)mobyutil::MB_randRangeFloat(300.0,600.0);
          uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
          *(undefined2 *)((int)piVar10 + 0x13a) = uVar18;
          mobyfunc::GetBonePosition(piVar10[0x28],1,uVar14 - 0x1d0);
          uVar33 = mobyutil::MB_randRangeFloat(-0.5235988,-0.2617994);
          uVar35 = mobyutil::MB_randRot();
          fVar4 = mobyutil::g_FrameTime;
          fVar3 = DAT_00842b80 * 2.0;
          dVar37 = (double)SQRT((float)(dVar43 * dVar43 +
                                       (double)(float)(dVar34 * dVar34 +
                                                      (double)(float)(dVar40 * dVar40))));
          *(float *)((int)puVar12 + 0xac) = (float)dVar38;
          dVar36 = (double)(float)((double)(fVar3 * fVar4) / dVar37);
          dVar30 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar30 = (double)(float)(dVar34 * dVar36);
          }
          dVar38 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar38 = (double)(float)(dVar40 * dVar36);
          }
          dVar32 = dVar44;
          if (dVar44 - dVar37 < 0.0) {
            dVar32 = (double)(float)(dVar43 * dVar36);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar30 = (double)(float)(dVar34 * dVar36);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar38 = (double)(float)(dVar40 * dVar36);
          }
          if (dVar37 - dVar44 < 0.0) {
            dVar32 = (double)(float)(dVar43 * dVar36);
          }
          *(float *)(puVar12 + 0x14) = (float)dVar30;
          *(float *)((int)puVar12 + 0xa4) = (float)dVar38;
          *(float *)(puVar12 + 0x15) = (float)dVar32;
          iVar17 = FUN_00375430(uVar33,uVar35,uVar14 - 0x1d0,0);
          if (iVar17 != 0) {
            uVar8 = *(undefined4 *)(piVar10[0x28] + 0x48);
            *(undefined4 *)(iVar17 + 0x44) = 0;
            *(undefined4 *)(iVar17 + 0x48) = uVar8;
            *(undefined1 *)(iVar17 + 0x20) = 5;
          }
        }
      }
      else if (uVar1 == '\x01') {
        piVar11 = (int *)piVar10[4];
        iVar17 = *piVar11;
        iVar22 = *piVar10 + iVar17 + (int)*(char *)(piVar10 + 1);
        iVar22 = iVar22 - (iVar22 / iVar17) * iVar17;
        iVar17 = piVar10[0x4c];
        fVar3 = (float)piVar11[iVar22 * 4 + 4] - (moby->pos).x;
        fVar4 = (float)piVar11[iVar22 * 4 + 5] - (moby->pos).y;
        fVar5 = ABS(fVar3);
        fVar9 = ABS(fVar4);
        *(float *)((int)puVar12 + 0xec) = fVar3;
        *(float *)(puVar12 + 0x1e) = fVar4;
        pMVar26 = MobyInstance + iVar17;
        *(float *)((int)puVar12 + 0xf4) = fVar5 - fVar9;
        dVar30 = 0.0;
        uVar23 = (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1d) & 4;
        uVar20 = uVar23 << 2 | 0x735900;
        fVar3 = ABS(*(float *)((int)puVar12 + 0xec));
        if (*(float *)((int)puVar12 + 0xf4) - 0.0 < 0.0) {
          fVar3 = fVar9;
        }
        fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar4 = *(float *)((int)uVar20 + 4);
        fVar6 = ABS(*(float *)(puVar12 + 0x1e));
        if (*(float *)((int)puVar12 + 0xf4) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        dVar36 = dVar30;
        if (0.0 < fVar3) {
          lVar19 = uVar14 - 0x250;
          lVar24 = uVar14 - 0xbc;
          lVar28 = uVar14 - 0xac;
          lVar29 = 2;
          fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x36) = fVar3;
          *(float *)(puVar12 + 0x35) = fVar3;
          *(float *)((int)puVar12 + 0x1ac) = fVar3;
          *(float *)((int)puVar12 + 0x1a4) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x35) = *(float *)(puVar12 + 0x35) * fVar5;
          *(float *)((int)puVar12 + 0x1ac) = *(float *)((int)puVar12 + 0x1ac) * fVar3;
          *(float *)(puVar12 + 0x36) = *(float *)(puVar12 + 0x36) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar19 + 0x1a4) = *(float *)((int)lVar19 + 0x194) * fVar3 * fVar3;
            iVar17 = (int)lVar24;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar28 = uVar14 - 0xbc;
          uVar20 = ZEXT48(&DAT_007358e0);
          lVar19 = lVar16;
          lVar24 = lVar28;
          do {
            pfVar21 = (float *)uVar20;
            fVar3 = pfVar21[1];
            uVar20 = uVar20 + 8;
            *(float *)((int)lVar19 + 0x1a4) = *(float *)((int)lVar19 + 0x1a4) * *pfVar21;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar24 = 2;
          lVar19 = lVar16;
          do {
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 0x10;
            iVar27 = (int)lVar28;
            lVar28 = lVar28 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar17 + 0x1a4)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar9 + fVar4);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar36,0x3f70624de0000000,0x3fd3333340000000,0x3f947ae140000000,lVar15,uVar20,
                   piVar10 + 0x4d);
        mobyupdate_helpers::M462_00393068(lVar15);
        mobyupdate_helpers::M462_00393420(lVar15);
        dVar37 = (double)(moby->pos).y;
        iVar17 = piVar10[4] + iVar22 * 0x10;
        dVar36 = (double)(moby->pos).x;
        fVar5 = *(float *)(iVar17 + 0x14);
        fVar6 = *(float *)(iVar17 + 0x10);
        fVar3 = (float)(dVar37 - (double)fVar5);
        fVar4 = (float)(dVar36 - (double)fVar6);
        dVar38 = (double)(moby->pos).z;
        fVar7 = *(float *)(iVar17 + 0x18);
        fVar9 = (float)(dVar38 - (double)fVar7);
        dVar43 = (double)*(float *)(iVar17 + 0x1c);
        if (SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
          *piVar10 = iVar22;
          dVar36 = (double)(moby->pos).x;
          dVar37 = (double)(moby->pos).y;
          dVar38 = (double)(moby->pos).z;
        }
        dVar41 = (double)(float)((double)fVar5 - dVar37);
        dVar42 = (double)(float)((double)fVar6 - dVar36);
        dVar39 = (double)(float)((double)fVar7 - dVar38);
        dVar31 = (double)SQRT((float)(dVar39 * dVar39 +
                                     (double)(float)(dVar42 * dVar42 +
                                                    (double)(float)(dVar41 * dVar41))));
        dVar40 = dVar39;
        dVar34 = dVar41;
        dVar32 = dVar42;
        if (((double)(DAT_00842b80 * mobyutil::g_FrameTime) < dVar31) &&
           (dVar40 = dVar30, dVar34 = dVar30, dVar32 = dVar30, dVar31 != dVar30)) {
          dVar32 = (double)(float)((double)(DAT_00842b80 * mobyutil::g_FrameTime) / dVar31);
          dVar40 = (double)(float)(dVar39 * dVar32);
          dVar34 = (double)(float)(dVar41 * dVar32);
          dVar32 = (double)(float)(dVar42 * dVar32);
        }
        cVar2 = moby->setByGroup;
        (moby->pos).x = (float)(dVar36 + dVar32);
        (moby->pos).y = (float)(dVar37 + dVar34);
        (moby->pos).z = (float)(dVar38 + dVar40);
        if (cVar2 != '\0') {
          moby->setByGroup = '\0';
          mobyfunc::GetBonePosition(piVar10[0x28],1,uVar14 - 0x1f0);
          uVar33 = mobyutil::MB_randRangeFloat(0.17453292,0.5235988);
          fVar3 = (pMVar26->pos).x - (moby->pos).x;
          fVar4 = (pMVar26->pos).y - (moby->pos).y;
          dVar38 = ABS((double)fVar3);
          dVar37 = ABS((double)fVar4);
          *(float *)(puVar12 + 0x1c) = fVar3;
          *(float *)((int)puVar12 + 0xe4) = fVar4;
          *(float *)(puVar12 + 0x1d) = (float)(dVar38 - dVar37);
          uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1d) & 4;
          dVar36 = ABS((double)*(float *)(puVar12 + 0x1c));
          if ((double)*(float *)(puVar12 + 0x1d) - dVar30 < 0.0) {
            dVar36 = dVar37;
          }
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar37 = ABS((double)*(float *)((int)puVar12 + 0xe4));
          if ((double)*(float *)(puVar12 + 0x1d) - dVar30 < 0.0) {
            dVar37 = dVar38;
          }
          dVar38 = dVar30;
          if (dVar30 < dVar36) {
            lVar15 = uVar14 - 0x250;
            lVar19 = uVar14 - 0xdc;
            lVar24 = uVar14 - 0xcc;
            lVar28 = 2;
            fVar9 = (float)(dVar37 - dVar36) / (float)(dVar37 + dVar36);
            fVar5 = fVar9 * fVar9;
            *(float *)(puVar12 + 0x32) = fVar9;
            *(float *)(puVar12 + 0x31) = fVar9;
            *(float *)((int)puVar12 + 0x18c) = fVar9;
            *(float *)((int)puVar12 + 0x184) = fVar9;
            fVar9 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x31) = *(float *)(puVar12 + 0x31) * fVar5;
            *(float *)((int)puVar12 + 0x18c) = *(float *)((int)puVar12 + 0x18c) * fVar9;
            *(float *)(puVar12 + 0x32) = *(float *)(puVar12 + 0x32) * fVar9 * fVar5;
            do {
              *(float *)((int)lVar15 + 0x184) = *(float *)((int)lVar15 + 0x174) * fVar9 * fVar9;
              iVar17 = (int)lVar19;
              lVar15 = lVar15 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar17 + 4) * fVar9 * fVar9;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar24 = uVar14 - 0xdc;
            pfVar21 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            lVar19 = lVar24;
            do {
              fVar9 = *pfVar21;
              fVar5 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar15 + 0x184) = *(float *)((int)lVar15 + 0x184) * fVar9;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
              lVar19 = lVar19 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar15 = 2;
            dVar36 = dVar30;
            do {
              iVar17 = (int)lVar16;
              lVar16 = lVar16 + 0x10;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar17 + 0x184)) +
                                *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                               *(float *)(iVar22 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar38 = (double)((float)(dVar36 + dVar44) * fVar4 + fVar3);
          }
          dVar36 = (double)fastfunc::FastWrapRot((float)dVar38,3.1415927);
          dVar44 = (double)mobyutil::MB_randRangeFloat(-0.2617994,(float)dVar44);
          dVar44 = (double)fastfunc::FastWrapRot((float)dVar36,(float)dVar44);
          fVar4 = DAT_00842b80;
          fVar3 = mobyutil::g_FrameTime;
          if ((((dVar44 <= dVar30) || (dVar36 = 0.3400000035762787, 0.3400000035762787 <= dVar44))
              && (dVar36 = dVar44, dVar44 <= dVar30)) && (-0.3400000035762787 < dVar44)) {
            dVar36 = -0.3400000035762787;
          }
          *(float *)((int)puVar12 + 0x8c) = (float)dVar43;
          dVar38 = (double)SQRT((float)(dVar40 * dVar40 +
                                       (double)(float)(dVar32 * dVar32 +
                                                      (double)(float)(dVar34 * dVar34))));
          dVar37 = (double)(float)((double)(fVar4 * 2.0 * fVar3) / dVar38);
          dVar44 = dVar30;
          if (dVar30 - dVar38 < 0.0) {
            dVar44 = (double)(float)(dVar32 * dVar37);
          }
          dVar43 = dVar30;
          if (dVar30 - dVar38 < 0.0) {
            dVar43 = (double)(float)(dVar34 * dVar37);
          }
          dVar31 = dVar30;
          if (dVar30 - dVar38 < 0.0) {
            dVar31 = (double)(float)(dVar40 * dVar37);
          }
          if (dVar38 - dVar30 < 0.0) {
            dVar44 = (double)(float)(dVar32 * dVar37);
          }
          if (dVar38 - dVar30 < 0.0) {
            dVar43 = (double)(float)(dVar34 * dVar37);
          }
          if (dVar38 - dVar30 < 0.0) {
            dVar31 = (double)(float)(dVar40 * dVar37);
          }
          *(float *)(puVar12 + 0x10) = (float)dVar44;
          *(float *)((int)puVar12 + 0x84) = (float)dVar43;
          *(float *)(puVar12 + 0x11) = (float)dVar31;
          iVar17 = FUN_00375430(uVar33,dVar36,uVar14 - 0x1f0,pMVar26);
          iVar22 = 0;
          *(float *)(iVar17 + 0x2c) = *(float *)(*(int *)(iVar17 + 0x24) + 0x24) * 0.2;
          pvVar25 = pMVar26->pVar;
          do {
            if (*(int *)((int)pvVar25 + 0x60) == 0) {
              *(int *)((int)pMVar26->pVar + iVar22 * 4 + 0x60) = iVar17;
              return;
            }
            iVar22 = iVar22 + 1;
            pvVar25 = (void *)((int)pvVar25 + 4);
          } while (iVar22 < 8);
        }
      }
      else if (uVar1 == '\0') {
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          mobyfunc::DeleteMoby(moby);
        }
        else {
          piVar10[4] = (int)Splines[piVar10[5]];
          piVar10[0x10] = (int)Splines[piVar10[0x11]];
          dVar30 = (double)mobyutil::MB_randRangeFloat(300.0,600.0);
          uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
          *(undefined2 *)((int)piVar10 + 0x13a) = uVar18;
          iVar17 = piVar10[0x10];
          moby->modeBits = moby->modeBits | CAN_BE_DAMAGED;
          (moby->pos).x = *(f32 *)(iVar17 + 0x10);
          (moby->pos).y = *(f32 *)(iVar17 + 0x14);
          (moby->pos).z = *(f32 *)(iVar17 + 0x18);
          (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
          mobyupdate_helpers::M462_00392ee8(lVar15);
          fVar3 = (moby->pos).x;
          fVar4 = (moby->pos).y;
          moby->state = '\x02';
          fVar3 = *(float *)(piVar10[0x10] + 0x20) - fVar3;
          fVar4 = *(float *)(piVar10[0x10] + 0x24) - fVar4;
          fVar5 = ABS(fVar3);
          fVar9 = ABS(fVar4);
          *(float *)(puVar12 + 0x1f) = fVar3;
          *(float *)((int)puVar12 + 0xfc) = fVar4;
          *(float *)(puVar12 + 0x20) = fVar5 - fVar9;
          dVar30 = 0.0;
          uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x20) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xfc) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar12 + 0x1f));
          if (*(float *)(puVar12 + 0x20) - 0.0 < 0.0) {
            fVar3 = fVar9;
          }
          fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar6 = ABS(*(float *)((int)puVar12 + 0xfc));
          if (*(float *)(puVar12 + 0x20) - 0.0 < 0.0) {
            fVar6 = fVar5;
          }
          if (0.0 < fVar3) {
            lVar15 = uVar14 - 0x250;
            lVar24 = uVar14 - 0x8c;
            lVar19 = uVar14 - 0x9c;
            lVar28 = 2;
            fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x3a) = fVar3;
            *(float *)(puVar12 + 0x39) = fVar3;
            *(float *)((int)puVar12 + 0x1cc) = fVar3;
            *(float *)((int)puVar12 + 0x1c4) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x39) = *(float *)(puVar12 + 0x39) * fVar5;
            *(float *)((int)puVar12 + 0x1cc) = *(float *)((int)puVar12 + 0x1cc) * fVar3;
            *(float *)(puVar12 + 0x3a) = *(float *)(puVar12 + 0x3a) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar15 + 0x1c4) = *(float *)((int)lVar15 + 0x1b4) * fVar3 * fVar3;
              iVar17 = (int)lVar19;
              lVar19 = lVar19 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar24 = uVar14 - 0x9c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            lVar19 = lVar24;
            do {
              fVar3 = *pfVar21;
              fVar5 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar15 + 0x1c4) = *(float *)((int)lVar15 + 0x1c4) * fVar3;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
              lVar19 = lVar19 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar15 = 2;
            do {
              iVar17 = (int)lVar16;
              iVar22 = (int)lVar24;
              lVar16 = lVar16 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar17 + 0x1c4)) +
                                *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                               *(float *)(iVar22 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar30 = (double)((float)(dVar30 + dVar44) * fVar9 + fVar4);
          }
          (moby->rotation).z = (float)dVar30;
        }
      }
    }
  }
  return;
}



//==== 00394bf8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M463_00394bf8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M463_00394bf8(void)

{
  DAT_00842bd8 = 0x10000;
  return;
}



//==== 00394c18  ns=mobyupdate_helpers  size=0x238
// sig: undefined M463_00394c18(void)
// callers(1): 00395438 mobyupdate_unsorted::UpdateMoby_463
// callees(1): 003849b8 mobyupdate_helpers::M465_003849b8

void mobyupdate_helpers::M463_00394c18(int param_1)

{
  int iVar1;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(iVar1 + 0x60) = param_1;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  uVar3 = M465_003849b8(param_1,0x1c0,0,0);
  *(undefined4 *)(iVar1 + 0x90) = uVar3;
  *(int *)(iVar1 + 0x94) = param_1;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  iVar4 = M465_003849b8(param_1,0x1bd,0,2);
  *(int *)(iVar1 + 0x70) = iVar4;
  *(int *)(iVar1 + 0x74) = param_1;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 2;
  *(float *)(iVar4 + 0x2c) = *(float *)(*(int *)(iVar4 + 0x24) + 0x24) * 0.75;
  uVar2 = M465_003849b8(*(undefined4 *)(iVar1 + 0x90),0x1ba,1,1);
  *(int *)(iVar1 + 0x80) = (int)uVar2;
  *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(iVar1 + 0x90);
  *(undefined4 *)(iVar1 + 0x88) = 1;
  *(undefined4 *)(iVar1 + 0x8c) = 1;
  uVar3 = M465_003849b8(uVar2,0x1b9,0,0);
  *(undefined4 *)(iVar1 + 0xa0) = uVar3;
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  uVar3 = M465_003849b8(param_1,0x1d0,0,1);
  *(undefined4 *)(iVar1 + 0xb0) = uVar3;
  *(int *)(iVar1 + 0xb4) = param_1;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xbc) = 1;
  iVar4 = M465_003849b8(param_1,0x1d0,0,1);
  *(int *)(iVar1 + 0xc0) = iVar4;
  *(int *)(iVar1 + 0xc4) = param_1;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 1;
  *(ushort *)(iVar4 + 0x34) = *(ushort *)(iVar4 + 0x34) | 0x8000;
  uVar3 = M465_003849b8(*(undefined4 *)(iVar1 + 0x80),0x1d1,0,0);
  *(undefined4 *)(iVar1 + 0xd0) = uVar3;
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  iVar4 = M465_003849b8(*(undefined4 *)(iVar1 + 0x80),0x1d1,0,0);
  *(int *)(iVar1 + 0xe0) = iVar4;
  *(undefined4 *)(iVar1 + 0xe4) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  *(ushort *)(iVar4 + 0x34) = *(ushort *)(iVar4 + 0x34) | 0x8000;
  iVar4 = iVar1;
  do {
    iVar5 = iVar6 + 2;
    uVar3 = M465_003849b8(*(undefined4 *)(iVar1 + 0x90),0x1bb,0,iVar5);
    *(undefined4 *)(iVar4 + 0xf0) = uVar3;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar1 + 0x90);
    *(undefined4 *)(iVar4 + 0xf8) = 0;
    *(int *)(iVar4 + 0xfc) = iVar5;
    iVar4 = iVar4 + 0x10;
  } while (iVar6 < 8);
  return;
}



//==== 00394e68  ns=mobyupdate_helpers  size=0x3cc
// sig: undefined M463_00394e68(void)
// callers(1): 00395438 mobyupdate_unsorted::UpdateMoby_463
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0015d12c sound::PlayMobySound; 00502758 fastfunc::FastDoubleToInt

longlong mobyupdate_helpers::M463_00394e68(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  short sVar16;
  uint uVar14;
  int iVar15;
  void *pvVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  lVar19 = 0;
  pvVar2 = param_1->pVar;
  iVar15 = -1;
  lVar20 = 0;
  lVar18 = 0;
  pvVar17 = pvVar2;
  do {
    if ((*(int *)((int)pvVar17 + 0x60) != 0) &&
       (iVar13 = mobyutil::MB_damage(*(int *)((int)pvVar17 + 0x60),0x10000,0), iVar13 != 0)) {
      iVar13 = (int)lVar19;
      if ((int)lVar20 < 3) {
        if (iVar13 < 1) {
          lVar19 = 1;
          iVar15 = 1;
        }
      }
      else if ((int)lVar20 < 9) {
        if (iVar13 < 2) {
          iVar15 = 1;
          lVar19 = 2;
        }
      }
      else if (iVar13 < 4) {
        lVar19 = lVar19 + 4;
        iVar15 = 2;
        lVar18 = lVar20;
      }
      *(undefined1 *)(*(int *)((int)pvVar17 + 0x60) + 0xa4) = 0xff;
    }
    lVar20 = lVar20 + 1;
    pvVar17 = (void *)((int)pvVar17 + 0x10);
  } while ((int)lVar20 < 0x11);
  lVar19 = (ulonglong)*(ushort *)((int)pvVar2 + 0x17c) + lVar19;
  sVar16 = (short)lVar19;
  *(short *)((int)pvVar2 + 0x17c) = sVar16;
  if (0xb < sVar16) {
    *(short *)((int)pvVar2 + 0x17c) = sVar16 % 0xc;
    if ((int)lVar18 != 0) {
      iVar4 = (int)(lVar18 << 4);
      iVar15 = *(int *)((int)pvVar2 + iVar4 + 0x60);
      pfVar3 = *(float **)(iVar15 + 0x78);
      mobyutil::MB_SpawnExplosionSparks
                (0x4000000000000000,0x402a000000000000,param_1,iVar15 + 0x10,iVar15,
                 0xffffffffffffffff);
      iVar15 = *(int *)((int)pvVar2 + iVar4 + 0x60);
      iVar13 = *(int *)((int)pvVar2 + iVar4 + 100);
      fVar5 = *(float *)(iVar15 + 0x10) - *(float *)(iVar13 + 0x10);
      *pfVar3 = fVar5;
      fVar6 = *(float *)(iVar15 + 0x14) - *(float *)(iVar13 + 0x14);
      pfVar3[1] = fVar6;
      fVar7 = *(float *)(iVar15 + 0x18) - *(float *)(iVar13 + 0x18);
      pfVar3[2] = fVar7;
      pfVar3[3] = *(float *)(iVar15 + 0x1c);
      fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      fVar1 = 0.0;
      fVar9 = (mobyutil::g_FrameTime * 10.0) / fVar8;
      fVar11 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar11 = fVar5 * fVar9;
      }
      fVar10 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar10 = fVar6 * fVar9;
      }
      if (0.0 - fVar8 < 0.0) {
        fVar1 = fVar7 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar11 = fVar5 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar10 = fVar6 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar1 = fVar7 * fVar9;
      }
      *pfVar3 = fVar11;
      pfVar3[1] = fVar10;
      pfVar3[2] = fVar1;
      *(undefined1 *)(*(int *)((int)pvVar2 + iVar4 + 0x60) + 0x20) = 1;
      *(undefined4 *)((int)pvVar2 + iVar4 + 0x60) = 0;
      return 1;
    }
    dVar25 = 0.0;
    mobyutil::MB_randRangeFloat(0.0,23.0);
    uVar14 = fastfunc::FastDoubleToInt();
    iVar13 = 0;
    do {
      iVar12 = uVar14 + (((int)uVar14 >> 3) + (uint)((int)uVar14 < 0 && (uVar14 & 7) != 0)) * -8 + 9
      ;
      iVar4 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
      if (iVar4 != 0) {
        pfVar3 = *(float **)(iVar4 + 0x78);
        mobyutil::MB_SpawnExplosionSparks
                  (0x4000000000000000,0x402a000000000000,param_1,iVar4 + 0x10,iVar4,
                   0xffffffffffffffff);
        iVar15 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
        iVar13 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 100);
        fVar5 = *(float *)(iVar15 + 0x10) - *(float *)(iVar13 + 0x10);
        *pfVar3 = fVar5;
        fVar6 = *(float *)(iVar15 + 0x14) - *(float *)(iVar13 + 0x14);
        pfVar3[1] = fVar6;
        fVar7 = *(float *)(iVar15 + 0x18) - *(float *)(iVar13 + 0x18);
        pfVar3[2] = fVar7;
        pfVar3[3] = *(float *)(iVar15 + 0x1c);
        dVar23 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
        fVar1 = (float)((double)(mobyutil::g_FrameTime * 10.0) / dVar23);
        dVar21 = dVar25;
        if (dVar25 - dVar23 < 0.0) {
          dVar21 = (double)(fVar5 * fVar1);
        }
        dVar22 = dVar25;
        if (dVar25 - dVar23 < 0.0) {
          dVar22 = (double)(fVar6 * fVar1);
        }
        dVar24 = dVar25;
        if (dVar25 - dVar23 < 0.0) {
          dVar24 = (double)(fVar7 * fVar1);
        }
        if (dVar23 - dVar25 < 0.0) {
          dVar21 = (double)(fVar5 * fVar1);
        }
        if (dVar23 - dVar25 < 0.0) {
          dVar22 = (double)(fVar6 * fVar1);
        }
        if (dVar23 - dVar25 < 0.0) {
          dVar24 = (double)(fVar7 * fVar1);
        }
        *pfVar3 = (float)dVar21;
        pfVar3[1] = (float)dVar22;
        pfVar3[2] = (float)dVar24;
        *(undefined1 *)(*(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60) + 0x20) = 1;
        *(undefined4 *)((int)pvVar2 + iVar12 * 0x10 + 0x60) = 0;
        return 1;
      }
      iVar13 = iVar13 + 1;
      uVar14 = uVar14 + 1;
    } while (iVar13 < 8);
    lVar19 = 99;
    param_1->state = 'c';
  }
  if (-1 < iVar15) {
    iVar15 = sound::PlayMobySound(iVar15,0,param_1);
    lVar19 = (longlong)iVar15;
  }
  return lVar19;
}



//==== 00395238  ns=mobyupdate_helpers  size=0x1ac
// sig: undefined M463_00395238(void)
// callers(1): 00395438 mobyupdate_unsorted::UpdateMoby_463
// callees(3): 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M463_00395238(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar4 = 1;
  iVar2 = iVar5 + 0x10;
  iVar3 = iVar2;
  do {
    iVar1 = *(int *)(iVar3 + 0x60);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      mobyfunc::GetBonePosition(iVar1,*(undefined4 *)(iVar3 + 0x68),&local_60);
      mobyfunc::GetBonePosition
                (*(undefined4 *)(iVar3 + 100),*(undefined4 *)(iVar3 + 0x6c),&local_50);
      *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + (local_50 - local_60);
      *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) + (local_4c - local_5c);
      *(float *)(iVar1 + 0x18) = *(float *)(iVar1 + 0x18) + (local_48 - local_58);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x11);
  if (*(int *)(iVar5 + 0x90) != 0) {
    dVar6 = (double)fastfunc::FastWrapRot
                              (*(float *)(*(int *)(iVar5 + 0x90) + 0x40),
                               DAT_00842c00 * 0.017453292 * mobyutil::g_FrameTime);
    *(float *)(*(int *)(iVar5 + 0x90) + 0x40) = (float)dVar6;
  }
  iVar5 = 1;
  do {
    if (*(MobyInstance **)(iVar2 + 0x60) != (MobyInstance *)0x0) {
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar2 + 0x60));
      iVar3 = *(int *)(iVar2 + 0x60);
      if ((*(ushort *)(iVar3 + 0x34) & 0x8000) != 0) {
        *(float *)(iVar3 + 0xd0) = -*(float *)(iVar3 + 0xd0);
        *(float *)(iVar3 + 0xd4) = -*(float *)(iVar3 + 0xd4);
        *(float *)(iVar3 + 0xd8) = -*(float *)(iVar3 + 0xd8);
      }
    }
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar5 < 0x11);
  return;
}



//==== 00395438  ns=mobyupdate_unsorted  size=0x1418
// sig: undefined UpdateMoby_463(MobyInstance * moby)
// callers(0): 
// callees(16): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 00375430 FUN_00375430; 00394c18 mobyupdate_helpers::M463_00394c18; 00394e68 mobyupdate_helpers::M463_00394e68; 00395238 mobyupdate_helpers::M463_00395238; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 463 */

void mobyupdate_unsorted::UpdateMoby_463(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  int *piVar9;
  int *piVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  int iVar17;
  longlong lVar15;
  longlong lVar16;
  longlong lVar18;
  ulonglong uVar19;
  float *pfVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  void *pvVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar25;
  int iVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x230;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar14;
  puVar11[0x48] = in_LR;
  puVar11[0x3f] = in_f25;
  puVar11[0x40] = in_f26;
  puVar11[0x41] = in_f27;
  puVar11[0x42] = in_f28;
  puVar11[0x43] = in_f29;
  puVar11[0x44] = in_f30;
  puVar11[0x45] = in_f31;
  puVar11[0x3e] = unaff_r31;
  puVar11[0x3d] = unaff_r30;
  iVar17 = DAT_010c9244;
  piVar9 = (int *)moby->pVar;
  puVar11[0x3c] = unaff_r29;
  puVar11[0x3b] = unaff_r28;
  puVar11[0x3a] = unaff_r27;
  puVar11[0x39] = unaff_r26;
  puVar11[0x38] = unaff_r25;
  if (iVar17 == 0) {
    iVar17 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)piVar9 + 0x17e));
    if (iVar17 == 0) {
      iVar17 = sound::PlayMobySound(3,4,moby);
      *(short *)((int)piVar9 + 0x17e) = (short)iVar17;
    }
    uVar1 = moby->state;
    if (uVar1 == 'c') {
      iVar17 = 1;
      uVar33 = 0x4008000000000000;
      uVar32 = 0x402a000000000000;
      dVar34 = 5.0;
      dVar29 = 0.0;
      do {
        iVar21 = piVar9[0x1c];
        if (iVar21 != 0) {
          pfVar20 = *(float **)(iVar21 + 0x78);
          mobyutil::MB_SpawnExplosionSparks(uVar33,uVar32,lVar15,iVar21 + 0x10);
          fVar3 = *(float *)(iVar21 + 0x10) - (moby->pos).x;
          *pfVar20 = fVar3;
          fVar4 = *(float *)(iVar21 + 0x14) - (moby->pos).y;
          pfVar20[1] = fVar4;
          fVar8 = *(float *)(iVar21 + 0x18) - (moby->pos).z;
          pfVar20[2] = fVar8;
          pfVar20[3] = *(float *)(iVar21 + 0x1c);
          dVar37 = (double)SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar4 * fVar4);
          fVar2 = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar34) / dVar37);
          dVar36 = dVar29;
          if (dVar29 - dVar37 < 0.0) {
            dVar36 = (double)(fVar3 * fVar2);
          }
          dVar42 = dVar29;
          if (dVar29 - dVar37 < 0.0) {
            dVar42 = (double)(fVar4 * fVar2);
          }
          dVar35 = dVar29;
          if (dVar29 - dVar37 < 0.0) {
            dVar35 = (double)(fVar8 * fVar2);
          }
          if (dVar37 - dVar29 < 0.0) {
            dVar36 = (double)(fVar3 * fVar2);
          }
          if (dVar37 - dVar29 < 0.0) {
            dVar42 = (double)(fVar4 * fVar2);
          }
          if (dVar37 - dVar29 < 0.0) {
            dVar35 = (double)(fVar8 * fVar2);
          }
          *pfVar20 = (float)dVar36;
          pfVar20[1] = (float)dVar42;
          pfVar20[2] = (float)dVar35;
          *(undefined1 *)(iVar21 + 0x20) = 1;
          piVar9[0x1c] = 0;
        }
        iVar17 = iVar17 + 1;
        piVar9 = piVar9 + 4;
      } while (iVar17 < 0x11);
      mobyutil::MB_SpawnExplosionSparks(dVar34,uVar32,lVar15,lVar15 + 0x10);
      mobyfunc::DeleteMoby(moby);
    }
    else if (uVar1 == '\x03') {
      moby->state = '\x01';
      iVar17 = piVar9[4];
      fVar2 = *(float *)(iVar17 + 0x10);
      (moby->pos).x = fVar2;
      fVar3 = *(float *)(iVar17 + 0x14);
      (moby->pos).y = fVar3;
      (moby->pos).z = *(f32 *)(iVar17 + 0x18);
      (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
      fVar2 = *(float *)(iVar17 + 0x20) - fVar2;
      fVar3 = *(float *)(iVar17 + 0x24) - fVar3;
      fVar4 = ABS(fVar2);
      fVar8 = ABS(fVar3);
      *(float *)(puVar11 + 0x16) = fVar2;
      *(float *)((int)puVar11 + 0xb4) = fVar3;
      *(float *)(puVar11 + 0x17) = fVar4 - fVar8;
      fVar3 = 0.0;
      uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar11 + 0x16));
      if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
        fVar2 = fVar8;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar8 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)((int)puVar11 + 0xb4));
      if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      if (0.0 < fVar2) {
        lVar18 = uVar14 - 0x220;
        lVar27 = uVar14 - 0x128;
        lVar23 = uVar14 - 0x138;
        lVar28 = 2;
        fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar11 + 0x104) = fVar2;
        *(float *)((int)puVar11 + 0xfc) = fVar2;
        *(float *)(puVar11 + 0x20) = fVar2;
        *(float *)(puVar11 + 0x1f) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0xfc) = *(float *)((int)puVar11 + 0xfc) * fVar4;
        *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar2;
        *(float *)((int)puVar11 + 0x104) = *(float *)((int)puVar11 + 0x104) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar18 + 0xf8) = *(float *)((int)lVar18 + 0xe8) * fVar2 * fVar2;
          iVar17 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar14 - 0x138;
        pfVar20 = (float *)&DAT_007358e0;
        lVar18 = lVar16;
        lVar23 = lVar27;
        do {
          fVar2 = *pfVar20;
          fVar4 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0xf8) = *(float *)((int)lVar18 + 0xf8) * fVar2;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar17 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          iVar21 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar17 + 0xf8) + *(float *)(iVar21 + 4) +
                  *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar5 + fVar8;
      }
      (moby->rotation).z = fVar3;
      mobyupdate_helpers::M463_00395238(lVar15);
    }
    else if (uVar1 == '\x02') {
      piVar10 = (int *)piVar9[0x10];
      iVar17 = piVar9[0xc];
      iVar21 = *piVar10;
      iVar26 = (iVar17 + 1) - ((iVar17 + 1) / iVar21) * iVar21;
      fVar2 = (float)piVar10[iVar26 * 4 + 4];
      fVar3 = (float)piVar10[iVar26 * 4 + 5];
      fVar4 = fVar2 - (float)piVar10[iVar17 * 4 + 4];
      fVar8 = fVar3 - (float)piVar10[iVar17 * 4 + 5];
      fVar6 = ABS(fVar4);
      fVar5 = ABS(fVar8);
      *(float *)(puVar11 + 0x19) = fVar4;
      *(float *)((int)puVar11 + 0xcc) = fVar8;
      iVar17 = (iVar17 + 2) - ((iVar17 + 2) / iVar21) * iVar21;
      *(float *)(puVar11 + 0x1a) = fVar6 - fVar5;
      dVar29 = 0.0;
      uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xcc) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar11 + 0x19));
      if (*(float *)(puVar11 + 0x1a) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar8 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      fVar13 = ABS(*(float *)((int)puVar11 + 0xcc));
      if (*(float *)(puVar11 + 0x1a) - 0.0 < 0.0) {
        fVar13 = fVar6;
      }
      dVar34 = dVar29;
      if (0.0 < fVar4) {
        lVar18 = uVar14 - 0x220;
        lVar23 = uVar14 - 0xf8;
        lVar27 = uVar14 - 0xe8;
        lVar28 = 2;
        fVar4 = (fVar13 - fVar4) / (fVar13 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x144) = fVar4;
        *(float *)((int)puVar11 + 0x13c) = fVar4;
        *(float *)(puVar11 + 0x28) = fVar4;
        *(float *)(puVar11 + 0x27) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar6;
        *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar4;
        *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x138) = *(float *)((int)lVar18 + 0x128) * fVar4 * fVar4;
          iVar21 = (int)lVar23;
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar14 - 0xf8;
        pfVar20 = (float *)&DAT_007358e0;
        lVar18 = lVar16;
        lVar23 = lVar27;
        do {
          fVar4 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0x138) = *(float *)((int)lVar18 + 0x138) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar23 = 2;
        lVar18 = lVar16;
        do {
          iVar21 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar12 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar21 + 0x138)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar5 + fVar8);
      }
      fVar2 = (float)piVar10[iVar17 * 4 + 4] - fVar2;
      fVar3 = (float)piVar10[iVar17 * 4 + 5] - fVar3;
      fVar8 = ABS(fVar2);
      fVar4 = ABS(fVar3);
      *(float *)((int)puVar11 + 0xbc) = fVar2;
      *(float *)(puVar11 + 0x18) = fVar3;
      *(float *)((int)puVar11 + 0xc4) = fVar8 - fVar4;
      uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar11 + 0xbc));
      if (*(float *)((int)puVar11 + 0xc4) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar4 = ABS(*(float *)(puVar11 + 0x18));
      if (*(float *)((int)puVar11 + 0xc4) - 0.0 < 0.0) {
        fVar4 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar36 = dVar29;
      if (0.0 < fVar2) {
        lVar18 = uVar14 - 0x220;
        lVar27 = uVar14 - 0x108;
        lVar23 = uVar14 - 0x118;
        lVar28 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar11 + 0x124) = fVar2;
        *(float *)((int)puVar11 + 0x11c) = fVar2;
        *(float *)(puVar11 + 0x24) = fVar2;
        *(float *)(puVar11 + 0x23) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x11c) = *(float *)((int)puVar11 + 0x11c) * fVar4;
        *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x24) * fVar2;
        *(float *)((int)puVar11 + 0x124) = *(float *)((int)puVar11 + 0x124) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar18 + 0x118) = *(float *)((int)lVar18 + 0x108) * fVar2 * fVar2;
          iVar17 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar14 - 0x118;
        pfVar20 = (float *)&DAT_007358e0;
        lVar18 = lVar16;
        lVar23 = lVar27;
        do {
          fVar2 = *pfVar20;
          fVar4 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0x118) = *(float *)((int)lVar18 + 0x118) * fVar2;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar17 = (int)lVar16;
          iVar21 = (int)lVar27;
          lVar16 = lVar16 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar17 + 0x118)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar3 + fVar8);
      }
      dVar34 = (double)fastfunc::FastDiffRots(dVar34,dVar36);
      iVar17 = piVar9[0x10] + iVar26 * 0x10;
      iVar21 = piVar9[0x10] + piVar9[0xc] * 0x10;
      fVar2 = (moby->pos).y - *(float *)(iVar17 + 0x14);
      fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10);
      fVar3 = *(float *)(iVar21 + 0x14) - *(float *)(iVar17 + 0x14);
      fVar8 = *(float *)(iVar21 + 0x10) - *(float *)(iVar17 + 0x10);
      fVar5 = (moby->pos).z - *(float *)(iVar17 + 0x18);
      fVar6 = *(float *)(iVar21 + 0x18) - *(float *)(iVar17 + 0x18);
      dVar34 = (double)fastfunc::FastWrapRot
                                 ((float)(dVar34 * (double)(SQRT(fVar5 * fVar5 +
                                                                 fVar4 * fVar4 + fVar2 * fVar2) /
                                                           SQRT(fVar6 * fVar6 +
                                                                fVar8 * fVar8 + fVar3 * fVar3))),
                                  (float)dVar36);
      (moby->rotation).z = (float)dVar34;
      dVar36 = (double)(moby->pos).y;
      iVar17 = piVar9[0x10] + iVar26 * 0x10;
      dVar34 = (double)(moby->pos).x;
      dVar37 = (double)(moby->pos).z;
      fVar8 = *(float *)(iVar17 + 0x14);
      fVar5 = *(float *)(iVar17 + 0x10);
      fVar2 = (float)(dVar36 - (double)fVar8);
      fVar6 = *(float *)(iVar17 + 0x18);
      fVar3 = (float)(dVar34 - (double)fVar5);
      fVar4 = (float)(dVar37 - (double)fVar6);
      dVar42 = (double)*(float *)(iVar17 + 0x1c);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 0.5) {
        piVar9[0xc] = iVar26;
        dVar34 = (double)(moby->pos).x;
        dVar36 = (double)(moby->pos).y;
        dVar37 = (double)(moby->pos).z;
      }
      dVar39 = (double)(float)((double)fVar8 - dVar36);
      dVar41 = (double)(float)((double)fVar5 - dVar34);
      dVar38 = (double)(float)((double)fVar6 - dVar37);
      dVar30 = (double)SQRT((float)(dVar38 * dVar38 +
                                   (double)(float)(dVar41 * dVar41 +
                                                  (double)(float)(dVar39 * dVar39))));
      dVar35 = dVar38;
      dVar40 = dVar39;
      dVar31 = dVar41;
      if (((double)(DAT_00842bfc * mobyutil::g_FrameTime) < dVar30) &&
         (dVar35 = dVar29, dVar40 = dVar29, dVar31 = dVar29, dVar30 != dVar29)) {
        dVar31 = (double)(float)((double)(DAT_00842bfc * mobyutil::g_FrameTime) / dVar30);
        dVar35 = (double)(float)(dVar38 * dVar31);
        dVar40 = (double)(float)(dVar39 * dVar31);
        dVar31 = (double)(float)(dVar41 * dVar31);
      }
      (moby->pos).x = (float)(dVar34 + dVar31);
      (moby->pos).y = (float)(dVar36 + dVar40);
      (moby->pos).z = (float)(dVar37 + dVar35);
      mobyupdate_helpers::M463_00395238(lVar15);
      iVar17 = fastfunc::FastDecTimerS32(piVar9 + 0x5e);
      if (iVar17 != 0) {
        dVar34 = (double)mobyutil::MB_randRangeFloat(300.0,600.0);
        iVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar34 * (double)animationSpeed));
        piVar9[0x5e] = iVar17;
        mobyfunc::GetBonePosition(piVar9[0x28],1,uVar14 - 0x1a0);
        uVar32 = mobyutil::MB_randRangeFloat(-0.5235988,-0.2617994);
        uVar33 = mobyutil::MB_randRot();
        fVar3 = mobyutil::g_FrameTime;
        fVar2 = DAT_00842bfc * 2.0;
        dVar37 = (double)SQRT((float)(dVar35 * dVar35 +
                                     (double)(float)(dVar31 * dVar31 +
                                                    (double)(float)(dVar40 * dVar40))));
        *(float *)((int)puVar11 + 0xac) = (float)dVar42;
        dVar36 = (double)(float)((double)(fVar2 * fVar3) / dVar37);
        dVar34 = dVar29;
        if (dVar29 - dVar37 < 0.0) {
          dVar34 = (double)(float)(dVar31 * dVar36);
        }
        dVar42 = dVar29;
        if (dVar29 - dVar37 < 0.0) {
          dVar42 = (double)(float)(dVar40 * dVar36);
        }
        dVar30 = dVar29;
        if (dVar29 - dVar37 < 0.0) {
          dVar30 = (double)(float)(dVar35 * dVar36);
        }
        if (dVar37 - dVar29 < 0.0) {
          dVar34 = (double)(float)(dVar31 * dVar36);
        }
        if (dVar37 - dVar29 < 0.0) {
          dVar42 = (double)(float)(dVar40 * dVar36);
        }
        if (dVar37 - dVar29 < 0.0) {
          dVar30 = (double)(float)(dVar35 * dVar36);
        }
        *(float *)(puVar11 + 0x14) = (float)dVar34;
        *(float *)((int)puVar11 + 0xa4) = (float)dVar42;
        *(float *)(puVar11 + 0x15) = (float)dVar30;
        iVar17 = FUN_00375430(uVar32,uVar33,uVar14 - 0x1a0,0);
        if (iVar17 != 0) {
          uVar7 = *(undefined4 *)(piVar9[0x28] + 0x48);
          *(undefined4 *)(iVar17 + 0x44) = 0;
          *(undefined4 *)(iVar17 + 0x48) = uVar7;
          *(undefined1 *)(iVar17 + 0x20) = 5;
        }
      }
    }
    else if (uVar1 == '\x01') {
      piVar10 = (int *)piVar9[4];
      iVar17 = *piVar10;
      iVar21 = *piVar9 + iVar17 + (int)*(char *)(piVar9 + 1);
      iVar21 = iVar21 - (iVar21 / iVar17) * iVar17;
      iVar17 = piVar9[0x5c];
      fVar2 = (float)piVar10[iVar21 * 4 + 4] - (moby->pos).x;
      fVar3 = (float)piVar10[iVar21 * 4 + 5] - (moby->pos).y;
      fVar8 = ABS(fVar2);
      fVar4 = ABS(fVar3);
      *(float *)(puVar11 + 0x1c) = fVar2;
      *(float *)((int)puVar11 + 0xe4) = fVar3;
      pMVar25 = MobyInstance + iVar17;
      *(float *)(puVar11 + 0x1d) = fVar8 - fVar4;
      dVar29 = 0.0;
      uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1d) & 4;
      uVar19 = uVar22 << 2 | 0x735900;
      fVar2 = ABS(*(float *)(puVar11 + 0x1c));
      if (*(float *)(puVar11 + 0x1d) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar3 = *(float *)((int)uVar19 + 4);
      fVar5 = ABS(*(float *)((int)puVar11 + 0xe4));
      if (*(float *)(puVar11 + 0x1d) - 0.0 < 0.0) {
        fVar5 = fVar8;
      }
      dVar34 = dVar29;
      if (0.0 < fVar2) {
        lVar18 = uVar14 - 0x220;
        lVar23 = uVar14 - 0xb8;
        lVar27 = uVar14 - 0xa8;
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar8 = fVar2 * fVar2;
        *(float *)((int)puVar11 + 0x184) = fVar2;
        *(float *)((int)puVar11 + 0x17c) = fVar2;
        *(float *)(puVar11 + 0x30) = fVar2;
        *(float *)(puVar11 + 0x2f) = fVar2;
        fVar2 = fVar8 * fVar8;
        *(float *)((int)puVar11 + 0x17c) = *(float *)((int)puVar11 + 0x17c) * fVar8;
        *(float *)(puVar11 + 0x30) = *(float *)(puVar11 + 0x30) * fVar2;
        *(float *)((int)puVar11 + 0x184) = *(float *)((int)puVar11 + 0x184) * fVar2 * fVar8;
        do {
          *(float *)((int)lVar18 + 0x178) = *(float *)((int)lVar18 + 0x168) * fVar2 * fVar2;
          iVar17 = (int)lVar23;
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar14 - 0xb8;
        uVar19 = ZEXT48(&DAT_007358e0);
        lVar18 = lVar16;
        lVar23 = lVar27;
        do {
          pfVar20 = (float *)uVar19;
          fVar2 = pfVar20[1];
          uVar19 = uVar19 + 8;
          *(float *)((int)lVar18 + 0x178) = *(float *)((int)lVar18 + 0x178) * *pfVar20;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar2;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar23 = 2;
        lVar18 = lVar16;
        do {
          iVar17 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar26 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar17 + 0x178)) +
                            *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                           *(float *)(iVar26 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar4 + fVar3);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar34,0x3f70624de0000000,0x3fd3333340000000,0x3f947ae140000000,lVar15,uVar19,
                 piVar9 + 0x5d);
      dVar36 = (double)(moby->pos).y;
      iVar17 = piVar9[4] + iVar21 * 0x10;
      dVar34 = (double)(moby->pos).x;
      dVar37 = (double)(moby->pos).z;
      fVar8 = *(float *)(iVar17 + 0x14);
      fVar5 = *(float *)(iVar17 + 0x10);
      fVar2 = (float)(dVar36 - (double)fVar8);
      fVar3 = (float)(dVar34 - (double)fVar5);
      fVar6 = *(float *)(iVar17 + 0x18);
      fVar4 = (float)(dVar37 - (double)fVar6);
      dVar42 = (double)*(float *)(iVar17 + 0x1c);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 0.5) {
        *piVar9 = iVar21;
        dVar34 = (double)(moby->pos).x;
        dVar36 = (double)(moby->pos).y;
        dVar37 = (double)(moby->pos).z;
      }
      dVar39 = (double)(float)((double)fVar8 - dVar36);
      dVar41 = (double)(float)((double)fVar5 - dVar34);
      dVar38 = (double)(float)((double)fVar6 - dVar37);
      dVar30 = (double)SQRT((float)(dVar38 * dVar38 +
                                   (double)(float)(dVar41 * dVar41 +
                                                  (double)(float)(dVar39 * dVar39))));
      dVar35 = dVar38;
      dVar40 = dVar39;
      dVar31 = dVar41;
      if (((double)(DAT_00842bfc * mobyutil::g_FrameTime) < dVar30) &&
         (dVar35 = dVar29, dVar40 = dVar29, dVar31 = dVar29, dVar30 != dVar29)) {
        dVar31 = (double)(float)((double)(DAT_00842bfc * mobyutil::g_FrameTime) / dVar30);
        dVar35 = (double)(float)(dVar38 * dVar31);
        dVar40 = (double)(float)(dVar39 * dVar31);
        dVar31 = (double)(float)(dVar41 * dVar31);
      }
      (moby->pos).x = (float)(dVar34 + dVar31);
      (moby->pos).y = (float)(dVar36 + dVar40);
      (moby->pos).z = (float)(dVar37 + dVar35);
      mobyupdate_helpers::M463_00394e68(lVar15);
      mobyupdate_helpers::M463_00395238(lVar15);
      if (moby->setByGroup != '\0') {
        moby->setByGroup = '\0';
        mobyfunc::GetBonePosition(piVar9[0x28],1,uVar14 - 0x1c0);
        uVar32 = mobyutil::MB_randRangeFloat(0.17453292,0.5235988);
        fVar2 = (pMVar25->pos).x - (moby->pos).x;
        fVar3 = (pMVar25->pos).y - (moby->pos).y;
        dVar37 = ABS((double)fVar2);
        dVar36 = ABS((double)fVar3);
        *(float *)((int)puVar11 + 0xd4) = fVar2;
        *(float *)(puVar11 + 0x1b) = fVar3;
        *(float *)((int)puVar11 + 0xdc) = (float)(dVar37 - dVar36);
        uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0xd4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xdc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1b) >> 0x1d) & 4;
        dVar34 = ABS((double)*(float *)((int)puVar11 + 0xd4));
        if ((double)*(float *)((int)puVar11 + 0xdc) - dVar29 < 0.0) {
          dVar34 = dVar36;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar36 = ABS((double)*(float *)(puVar11 + 0x1b));
        if ((double)*(float *)((int)puVar11 + 0xdc) - dVar29 < 0.0) {
          dVar36 = dVar37;
        }
        fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar37 = dVar29;
        if (dVar29 < dVar34) {
          lVar15 = uVar14 - 0x220;
          lVar23 = uVar14 - 200;
          lVar18 = uVar14 - 0xd8;
          lVar27 = 2;
          fVar4 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
          fVar8 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0x164) = fVar4;
          *(float *)((int)puVar11 + 0x15c) = fVar4;
          *(float *)(puVar11 + 0x2c) = fVar4;
          *(float *)(puVar11 + 0x2b) = fVar4;
          fVar4 = fVar8 * fVar8;
          *(float *)((int)puVar11 + 0x15c) = *(float *)((int)puVar11 + 0x15c) * fVar8;
          *(float *)(puVar11 + 0x2c) = *(float *)(puVar11 + 0x2c) * fVar4;
          *(float *)((int)puVar11 + 0x164) = *(float *)((int)puVar11 + 0x164) * fVar4 * fVar8;
          do {
            *(float *)((int)lVar15 + 0x158) = *(float *)((int)lVar15 + 0x148) * fVar4 * fVar4;
            iVar17 = (int)lVar18;
            lVar18 = lVar18 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar23 = uVar14 - 0xd8;
          pfVar20 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar18 = lVar23;
          do {
            fVar4 = *pfVar20;
            fVar8 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar15 + 0x158) = *(float *)((int)lVar15 + 0x158) * fVar4;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar8;
            lVar18 = lVar18 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar15 = 2;
          dVar34 = dVar29;
          do {
            iVar17 = (int)lVar16;
            iVar21 = (int)lVar23;
            lVar16 = lVar16 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar17 + 0x158)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar37 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar3);
        }
        dVar34 = (double)fastfunc::FastWrapRot((float)dVar37,3.1415927);
        dVar36 = (double)mobyutil::MB_randRangeFloat(-0.2617994,0.7853982);
        dVar34 = (double)fastfunc::FastWrapRot((float)dVar34,(float)dVar36);
        fVar2 = mobyutil::g_FrameTime;
        if ((((dVar34 <= dVar29) || (dVar36 = 0.3400000035762787, 0.3400000035762787 <= dVar34)) &&
            (dVar36 = dVar34, dVar34 <= dVar29)) && (-0.3400000035762787 < dVar34)) {
          dVar36 = -0.3400000035762787;
        }
        fVar3 = DAT_00842bfc * 2.0;
        dVar30 = (double)SQRT((float)(dVar35 * dVar35 +
                                     (double)(float)(dVar31 * dVar31 +
                                                    (double)(float)(dVar40 * dVar40))));
        *(float *)((int)puVar11 + 0x8c) = (float)dVar42;
        dVar37 = (double)(float)((double)(fVar3 * fVar2) / dVar30);
        dVar34 = dVar29;
        if (dVar29 - dVar30 < 0.0) {
          dVar34 = (double)(float)(dVar31 * dVar37);
        }
        dVar42 = dVar29;
        if (dVar29 - dVar30 < 0.0) {
          dVar42 = (double)(float)(dVar40 * dVar37);
        }
        dVar38 = dVar29;
        if (dVar29 - dVar30 < 0.0) {
          dVar38 = (double)(float)(dVar35 * dVar37);
        }
        if (dVar30 - dVar29 < 0.0) {
          dVar34 = (double)(float)(dVar31 * dVar37);
        }
        if (dVar30 - dVar29 < 0.0) {
          dVar42 = (double)(float)(dVar40 * dVar37);
        }
        if (dVar30 - dVar29 < 0.0) {
          dVar38 = (double)(float)(dVar35 * dVar37);
        }
        *(float *)(puVar11 + 0x10) = (float)dVar34;
        *(float *)((int)puVar11 + 0x84) = (float)dVar42;
        *(float *)(puVar11 + 0x11) = (float)dVar38;
        iVar17 = FUN_00375430(uVar32,dVar36,uVar14 - 0x1c0,pMVar25);
        iVar21 = 0;
        *(float *)(iVar17 + 0x2c) = *(float *)(*(int *)(iVar17 + 0x24) + 0x24) * 0.2;
        pvVar24 = pMVar25->pVar;
        do {
          if (*(int *)((int)pvVar24 + 0x60) == 0) {
            *(int *)((int)pMVar25->pVar + iVar21 * 4 + 0x60) = iVar17;
            return;
          }
          iVar21 = iVar21 + 1;
          pvVar24 = (void *)((int)pvVar24 + 4);
        } while (iVar21 < 8);
      }
    }
    else if (uVar1 == '\0') {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        piVar9[4] = (int)Splines[piVar9[5]];
        piVar9[0x10] = (int)Splines[piVar9[0x11]];
        dVar29 = (double)mobyutil::MB_randRangeFloat(300.0,600.0);
        iVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
        piVar9[0x5e] = iVar17;
        iVar17 = piVar9[0x10];
        moby->modeBits = moby->modeBits | CAN_BE_DAMAGED;
        (moby->pos).x = *(f32 *)(iVar17 + 0x10);
        (moby->pos).y = *(f32 *)(iVar17 + 0x14);
        (moby->pos).z = *(f32 *)(iVar17 + 0x18);
        (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
        mobyupdate_helpers::M463_00394c18(lVar15);
        fVar2 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        moby->state = '\x02';
        fVar2 = *(float *)(piVar9[0x10] + 0x20) - fVar2;
        fVar3 = *(float *)(piVar9[0x10] + 0x24) - fVar3;
        fVar4 = ABS(fVar2);
        fVar8 = ABS(fVar3);
        *(float *)((int)puVar11 + 0xec) = fVar2;
        *(float *)(puVar11 + 0x1e) = fVar3;
        *(float *)((int)puVar11 + 0xf4) = fVar4 - fVar8;
        fVar2 = 0.0;
        uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar11 + 0xec));
        if (*(float *)((int)puVar11 + 0xf4) - 0.0 < 0.0) {
          fVar3 = fVar8;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar5 = ABS(*(float *)(puVar11 + 0x1e));
        if (*(float *)((int)puVar11 + 0xf4) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (0.0 < fVar3) {
          lVar15 = uVar14 - 0x220;
          lVar18 = uVar14 - 0x98;
          lVar23 = uVar14 - 0x88;
          lVar27 = 2;
          fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0x1a4) = fVar3;
          *(float *)((int)puVar11 + 0x19c) = fVar3;
          *(float *)(puVar11 + 0x34) = fVar3;
          *(float *)(puVar11 + 0x33) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)((int)puVar11 + 0x19c) = *(float *)((int)puVar11 + 0x19c) * fVar5;
          *(float *)(puVar11 + 0x34) = *(float *)(puVar11 + 0x34) * fVar3;
          *(float *)((int)puVar11 + 0x1a4) = *(float *)((int)puVar11 + 0x1a4) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar15 + 0x198) = *(float *)((int)lVar15 + 0x188) * fVar3 * fVar3;
            iVar17 = (int)lVar18;
            lVar15 = lVar15 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar23 = uVar14 - 0x98;
          pfVar20 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar18 = lVar23;
          do {
            fVar3 = *pfVar20;
            fVar5 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar15 + 0x198) = *(float *)((int)lVar15 + 0x198) * fVar3;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
            lVar18 = lVar18 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar15 = 2;
          do {
            iVar17 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            iVar21 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar17 + 0x198) + *(float *)(iVar21 + 4) +
                    *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar4;
        }
        (moby->rotation).z = fVar2;
      }
    }
  }
  return;
}



//==== 00396850  ns=mobyupdate_helpers  size=0x14
// sig: undefined M553_00396850(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M553_00396850(void)

{
  DAT_00842c54 = 0x10000;
  return;
}



//==== 003968d8  ns=mobyupdate_unsorted  size=0x19e4
// sig: undefined UpdateMoby_a_lot_3(MobyInstance * moby)
// callers(0): 
// callees(23): 0005e598 collproc::CollMobySphere; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011b728 mobyutil::MB_UnlockSkillPoint; 0015d12c sound::PlayMobySound; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf; 005e7e98 FUN_005e7e98
// strings: 00656928: 'WARNING moby class %d instance %d has no path!\n'

/* Moby 466
   Moby 480
   Moby 485
   Moby 486
   Moby 488
   Moby 490
   Moby 493
   Moby 494
   Moby 495
   Moby 498
   Moby 555 */

void mobyupdate_unsorted::UpdateMoby_a_lot_3(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  u8 uVar5;
  byte bVar6;
  f32 fVar7;
  f32 fVar8;
  float fVar9;
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  u16 *puVar12;
  Spline *pSVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  Vec4 *pVVar18;
  ulonglong uVar19;
  uint uVar22;
  int iVar23;
  int iVar24;
  longlong lVar20;
  longlong lVar21;
  MobyModeBit MVar25;
  float *pfVar26;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong uVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMoby;
  longlong lVar29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f28;
  undefined8 uVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  undefined8 uVar41;
  ulonglong in_f31;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x220;
  puVar17 = (ulonglong *)lVar21;
  *puVar17 = uVar19;
  puVar17[0x46] = in_LR;
  puVar17[0x40] = in_f28;
  puVar17[0x41] = in_f29;
  puVar17[0x42] = in_f30;
  puVar17[0x43] = in_f31;
  puVar17[0x3f] = unaff_r31;
  puVar17[0x3a] = unaff_r26;
  lVar27 = lVar20 + 0x10;
  puVar17[0x3e] = unaff_r30;
  puVar17[0x3c] = unaff_r28;
  pvVar11 = moby->pVar;
  uVar30 = ZEXT48(pvVar11);
  puVar17[0x3d] = unaff_r29;
  puVar17[0x3b] = unaff_r27;
  puVar17[0x39] = unaff_r25;
  puVar17[0x38] = unaff_r24;
  uVar5 = moby->state;
  FUN_005e7e98(uVar19 - 0x160,lVar27);
  if (pvVar11 == (void *)0x0) {
    return;
  }
  if (moby->state == '\0') {
    if (*(int *)((int)pvVar11 + 0x74) == -1) {
      uVar22 = (int)moby - (int)MobyInstance;
      puVar17[0x36] =
           (longlong)(int)(((int)uVar22 >> 8) + (uint)((int)uVar22 < 0 && (uVar22 & 0xff) != 0));
      MVar10 = moby->oClass;
      uVar39 = fastfunc::FastDoubleToInt((double)(longlong)puVar17[0x36]);
      libc::printf("WARNING moby class %d instance %d has no path!\n",MVar10,uVar39);
    }
    else {
      pSVar13 = Splines[*(int *)((int)pvVar11 + 0x74)];
      pVVar18 = pSVar13->points + pSVar13->cnt + -1;
      fVar1 = pSVar13->points[0].y - pVVar18->y;
      fVar2 = pSVar13->points[0].x - pVVar18->x;
      fVar3 = pSVar13->points[0].z - pVVar18->z;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
        pSVar13->cnt = pSVar13->cnt + -1;
      }
    }
    moby->drawDistance = 0x7f;
    moby->updateDistance = -1;
    *(undefined4 *)((int)pvVar11 + 0x138) = *(undefined4 *)((int)pvVar11 + 0xfc);
    *(int *)((int)pvVar11 + 0x178) = (int)moby->drawDistance;
  }
  UpdateMoby_a_lot_10(moby);
  dVar40 = 0.0;
  if (moby->oClass != TRANSPORT_SHIP) {
    fastfunc::FastDecTimerS16(uVar30 + 0x14a);
    bVar6 = *(byte *)((int)pvVar11 + 0x149);
    if (bVar6 < 2) {
      if (bVar6 == 0) {
        uVar22 = (int)*(uint *)((int)pvVar11 + 0xfc) >> 0x1f;
        uVar14 = (int)*(uint *)((int)pvVar11 + 0x138) >> 0x1f;
        if (((int)((uVar22 >> 1 ^ *(uint *)((int)pvVar11 + 0xfc)) - uVar22) <
             (int)((uVar14 >> 1 ^ *(uint *)((int)pvVar11 + 0x138)) - uVar14)) &&
           (fVar1 = DAT_0071f418 * 20.0 + *(float *)((int)pvVar11 + 0xfc),
           *(float *)((int)pvVar11 + 0xfc) = fVar1, *(float *)((int)pvVar11 + 0x138) < fVar1)) {
          *(float *)((int)pvVar11 + 0xfc) = *(float *)((int)pvVar11 + 0x138);
        }
        iVar24 = 0;
        uVar28 = uVar30;
        do {
          if (((*(short *)((int)pvVar11 + 0x14a) == 0) &&
              (iVar23 = *(int *)((int)uVar28 + 0x150), iVar23 != -1)) &&
             (iVar23 = mobyutil::MB_IsPntInCuboid((Vec4 *)lVar27,(longlong)iVar23), iVar23 != 0)) {
            auVar42 = ZEXT416(0xffffffff);
            auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
            *(f32 *)((int)pvVar11 + 0x160) = (moby->pos).x;
            *(f32 *)((int)pvVar11 + 0x164) = (moby->pos).y;
            auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
            uVar16 = *(undefined4 *)((int)pvVar11 + iVar24 * 4 + 0x150);
            *(f32 *)((int)pvVar11 + 0x168) = (moby->pos).z;
            fVar7 = (moby->pos).w;
            *(char *)((int)pvVar11 + 0x148) = (char)uVar16;
            *(f32 *)((int)pvVar11 + 0x16c) = fVar7;
            *(undefined1 *)((int)pvVar11 + 0x149) = 1;
            fVar7 = (moby->rotation).z;
            *(undefined4 *)((int)pvVar11 + 0x7c) = 0;
            *(f32 *)((int)pvVar11 + 0x14c) = fVar7;
            moby->state = '\x03';
            auVar42 = loadVectorLeftIndexed(0xc,0x396868);
            auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar42 = vectorMultiplyAddFloatingPoint
                                (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 |
                                         auVar42 << 0x60,auVar43);
            auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
            auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar16 = storeVectorElementWordIndexed
                               (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x11c,
                                uVar30);
            *(undefined4 *)((int)pvVar11 + 0x11cU & 0xfffffffc) = uVar16;
            break;
          }
          iVar24 = iVar24 + 1;
          uVar28 = uVar28 + 4;
        } while (iVar24 < 4);
      }
      else {
        mobyutil::OrganicDeltAngSpeed
                  ((double)Cuboids[*(byte *)((int)pvVar11 + 0x148)].rot.z,
                   (double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
                   (double)(mobyutil::g_FrameTime * 3.1415927),lVar20,&DAT_00720000,uVar30 + 0x7c);
        bVar6 = *(byte *)((int)pvVar11 + 0x148);
        fVar1 = (moby->pos).y - Cuboids[bVar6].pos.y;
        fVar2 = (moby->pos).x - Cuboids[bVar6].pos.x;
        if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 1.0) &&
           (dVar32 = (double)fastfunc::FastSubRots((moby->rotation).z,Cuboids[bVar6].rot.z),
           dVar32 < 0.1745329201221466)) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          *(undefined1 *)((int)pvVar11 + 0x149) = 2;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x20,0x396868);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x14a,uVar30);
          *(undefined2 *)((int)pvVar11 + 0x14a) = uVar15;
        }
        bVar6 = *(byte *)((int)pvVar11 + 0x148);
        dVar33 = (double)(moby->pos).y;
        dVar35 = (double)(moby->pos).x;
        fVar2 = (float)((double)Cuboids[bVar6].pos.y - dVar33);
        fVar3 = (float)((double)Cuboids[bVar6].pos.x - dVar35);
        dVar37 = (double)(moby->pos).z;
        fVar4 = (float)((double)Cuboids[bVar6].pos.z - dVar37);
        dVar38 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(mobyutil::g_FrameTime * 3.0) / dVar38);
        dVar32 = dVar40;
        if (dVar40 - dVar38 < 0.0) {
          dVar32 = (double)(fVar4 * fVar1);
        }
        dVar34 = dVar40;
        if (dVar40 - dVar38 < 0.0) {
          dVar34 = (double)(fVar2 * fVar1);
        }
        dVar36 = dVar40;
        if (dVar40 - dVar38 < 0.0) {
          dVar36 = (double)(fVar3 * fVar1);
        }
        if (dVar38 - dVar40 < 0.0) {
          dVar32 = (double)(fVar4 * fVar1);
        }
        if (dVar38 - dVar40 < 0.0) {
          dVar34 = (double)(fVar2 * fVar1);
        }
        if (dVar38 - dVar40 < 0.0) {
          dVar36 = (double)(fVar3 * fVar1);
        }
        (moby->pos).z = (float)(dVar37 + dVar32);
        (moby->pos).y = (float)(dVar33 + dVar34);
        (moby->pos).x = (float)(dVar35 + dVar36);
      }
    }
    else if (bVar6 < 3) {
      if (*(short *)((int)pvVar11 + 0x14a) == 0) {
        *(undefined1 *)((int)pvVar11 + 0x149) = 3;
        *(undefined4 *)((int)pvVar11 + 0x7c) = 0;
      }
    }
    else if (bVar6 < 4) {
      mobyutil::OrganicDeltAngSpeed
                ((double)*(float *)((int)pvVar11 + 0x14c),(double)(DAT_0071f418 * 1.0471976),
                 (double)(DAT_0071f418 * 3.1415927),(double)(mobyutil::g_FrameTime * 3.1415927),
                 lVar20,&DAT_00720000,uVar30 + 0x7c);
      fVar1 = (moby->pos).y - *(float *)((int)pvVar11 + 0x164);
      fVar2 = (moby->pos).x - *(float *)((int)pvVar11 + 0x160);
      if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 1.0) &&
         (dVar32 = (double)fastfunc::FastSubRots
                                     ((moby->rotation).z,*(float *)((int)pvVar11 + 0x14c)),
         dVar32 < 0.03490658476948738)) {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        *(undefined1 *)((int)pvVar11 + 0x149) = 0;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x2c,0x396868);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = vectorSplatHalfWord(auVar42,1);
        uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x14a,uVar30);
        *(undefined2 *)((int)pvVar11 + 0x14a) = uVar15;
        *(undefined4 *)((int)pvVar11 + 0xfc) = 0;
        *(undefined4 *)((int)pvVar11 + 0x11c) = 0;
        *(undefined4 *)((int)pvVar11 + 0x7c) = 0;
      }
      dVar33 = (double)(moby->pos).y;
      fVar1 = (float)((double)*(float *)((int)pvVar11 + 0x164) - dVar33);
      dVar35 = (double)(moby->pos).x;
      fVar2 = (float)((double)*(float *)((int)pvVar11 + 0x160) - dVar35);
      dVar37 = (double)(moby->pos).z;
      fVar3 = (float)((double)*(float *)((int)pvVar11 + 0x168) - dVar37);
      dVar38 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      dVar32 = (double)(mobyutil::g_FrameTime * 3.0);
      if (dVar38 - (double)(mobyutil::g_FrameTime * 3.0) < 0.0) {
        dVar32 = dVar38;
      }
      fVar4 = (float)(dVar32 / dVar38);
      dVar32 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar32 = (double)(fVar3 * fVar4);
      }
      dVar34 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar34 = (double)(fVar1 * fVar4);
      }
      dVar36 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar36 = (double)(fVar2 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar32 = (double)(fVar3 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar34 = (double)(fVar1 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar36 = (double)(fVar2 * fVar4);
      }
      (moby->pos).z = (float)(dVar37 + dVar32);
      (moby->pos).y = (float)(dVar33 + dVar34);
      (moby->pos).x = (float)(dVar35 + dVar36);
    }
  }
  if (uVar5 == '\0') {
    MVar10 = moby->oClass;
    if ((short)MVar10 < 0x1e5) {
      if ((short)MVar10 < 0x1d3) {
        if (0x1d1 < (short)MVar10) {
LAB_00397000:
          mobyfunc::AttachManipulator(moby,0,(int)pvVar11 + 0x180);
          *(undefined4 *)((int)pvVar11 + 0x140) = 0;
        }
      }
      else if (MVar10 == GRAB_HELICOPTER) goto LAB_00397000;
    }
    else if ((short)MVar10 < 0x1ee) {
      if ((short)MVar10 < 0x1e7) goto LAB_00397000;
      if ((short)MVar10 < 0x1e9) {
        if (0x1e7 < (short)MVar10) {
LAB_00397020:
          mobyfunc::AttachManipulator(moby,0,(int)pvVar11 + 0x180);
          *(undefined4 *)((int)pvVar11 + 0x140) = 0;
          mobyfunc::AttachManipulator(moby,1,(int)pvVar11 + 0x1c0);
          *(undefined4 *)((int)pvVar11 + 0x144) = 0;
        }
      }
      else if (0x1ec < (short)MVar10) goto LAB_00397020;
    }
    else if ((short)MVar10 < 499) {
      if (((short)MVar10 < 0x1f0) || (0x1f1 < (short)MVar10)) goto LAB_00397000;
    }
    else if (MVar10 == LOG_SHIP_END) goto LAB_00397000;
  }
  else {
    MVar10 = moby->oClass;
    if ((short)MVar10 < 0x1e5) {
      if ((short)MVar10 < 0x1d3) {
        if (0x1d1 < (short)MVar10) {
LAB_003970e0:
          dVar32 = (double)fastfunc::FastWrapRot
                                     (*(float *)((int)pvVar11 + 0x140),
                                      mobyutil::g_FrameTime * 12.566371);
          *(float *)((int)pvVar11 + 0x140) = (float)dVar32;
          fastfunc::FastQuaternionToEuler(uVar30 + 400,0);
        }
      }
      else if (MVar10 == GRAB_HELICOPTER) goto LAB_003970e0;
    }
    else if ((short)MVar10 < 0x1ee) {
      if ((short)MVar10 < 0x1e7) goto LAB_0039711c;
      if ((short)MVar10 < 0x1e9) {
        if (0x1e7 < (short)MVar10) {
LAB_00397158:
          dVar33 = 12.566370964050293;
          dVar32 = (double)fastfunc::FastWrapRot
                                     (*(float *)((int)pvVar11 + 0x140),
                                      mobyutil::g_FrameTime * 12.566371);
          *(float *)((int)pvVar11 + 0x140) = (float)dVar32;
          fastfunc::FastQuaternionToEuler(uVar30 + 400,2);
          dVar32 = (double)fastfunc::FastWrapRot
                                     (*(float *)((int)pvVar11 + 0x144),
                                      (float)((double)mobyutil::g_FrameTime * dVar33));
          *(float *)((int)pvVar11 + 0x144) = (float)dVar32;
          fastfunc::FastQuaternionToEuler(uVar30 + 0x1d0,2);
        }
      }
      else if (0x1ec < (short)MVar10) goto LAB_00397158;
    }
    else if ((short)MVar10 < 499) {
      if (((short)MVar10 < 0x1f0) || (0x1f1 < (short)MVar10)) {
LAB_0039711c:
        dVar32 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pvVar11 + 0x140),
                                    mobyutil::g_FrameTime * 12.566371);
        *(float *)((int)pvVar11 + 0x140) = (float)dVar32;
        fastfunc::FastQuaternionToEuler(uVar30 + 400,2);
      }
    }
    else if (MVar10 == LOG_SHIP_END) goto LAB_0039711c;
  }
  if (*(int *)((int)pvVar11 + 0x17c) != -1) {
    pMoby = MobyInstance + *(int *)((int)pvVar11 + 0x17c);
    pMoby->drawDistance = 0x7f;
    MVar10 = moby->oClass;
    if ((short)MVar10 < 0x1e1) {
      if (0x1df < (short)MVar10) {
        fVar1 = (moby->transform).v0.y;
        fVar2 = (moby->transform).v2.y;
        fVar3 = (moby->transform).v0.z;
        fVar4 = (moby->transform).v2.z;
        (pMoby->pos).x =
             (moby->pos).x + (moby->transform).v2.x * -5.0 + (moby->transform).v0.x * 0.5;
        (pMoby->pos).y = (moby->pos).y + fVar2 * -5.0 + fVar1 * 0.5;
        (pMoby->pos).z = (moby->pos).z + fVar4 * -5.0 + fVar3 * 0.5;
        (pMoby->pos).w = (moby->pos).w;
        (pMoby->rotation).x = (moby->rotation).x;
        fVar1 = (moby->rotation).y;
        (pMoby->rotation).y = fVar1;
        (pMoby->rotation).z = (moby->rotation).z;
        (pMoby->rotation).w = (moby->rotation).w;
        dVar32 = (double)fastfunc::FastWrapRot(fVar1,1.5707964);
        (pMoby->rotation).y = (float)dVar32;
        mobyfunc::UpdateMobyAnimFrame(pMoby);
        mobyfunc::UpdateMobyTransform(pMoby);
        mobyfunc::PostUpdateMobyLockTransform(pMoby);
        pMoby->modeBits = pMoby->modeBits | (NO_POST_UPDATE|NO_UPDATE);
      }
    }
    else if (MVar10 == LOG_SHIP_1) {
      fVar1 = (moby->transform).v2.y;
      fVar2 = (moby->transform).v2.z;
      (pMoby->pos).x = (moby->transform).v2.x * -2.0 + (moby->pos).x;
      (pMoby->pos).y = fVar1 * -2.0 + (moby->pos).y;
      (pMoby->pos).z = fVar2 * -2.0 + (moby->pos).z;
      (pMoby->pos).w = (moby->pos).w;
      (pMoby->rotation).x = (moby->rotation).x;
      (pMoby->rotation).y = (moby->rotation).y;
      (pMoby->rotation).z = (moby->rotation).z;
      (pMoby->rotation).w = (moby->rotation).w;
      mobyfunc::UpdateMobyAnimFrame(pMoby);
      mobyfunc::UpdateMobyTransform(pMoby);
      mobyfunc::PostUpdateMobyLockTransform(pMoby);
      pMoby->modeBits = pMoby->modeBits | (NO_POST_UPDATE|NO_UPDATE);
    }
  }
  iVar24 = mobyutil::MB_damage(lVar20,0x210000,0);
  if (iVar24 == 0) goto LAB_00397fb8;
  ShipsKilledCounts.Eudora = ShipsKilledCounts.Eudora + 1;
  if (9 < ShipsKilledCounts.Eudora) {
    mobyutil::MB_UnlockSkillPoint(6);
  }
  MVar10 = moby->oClass;
  if (0x1ec < (short)MVar10) {
    if ((short)MVar10 < 0x1f2) {
      if ((short)MVar10 < 0x1ee) {
        lVar29 = uVar19 - 0x120;
        dVar32 = 0.75;
        *(undefined4 *)((int)puVar17 + 0x11c) = 0;
        *(undefined4 *)(puVar17 + 0x23) = 0;
        *(undefined4 *)((int)puVar17 + 0x114) = 0;
        *(undefined4 *)(puVar17 + 0x22) = 0;
        mobyfunc::GetBonePosition(lVar20,0,lVar29);
        *(float *)(puVar17 + 0x21) = (float)((double)*(float *)(puVar17 + 0x21) + dVar32);
        uVar41 = 0x3ff0000000000000;
        uVar39 = 0x402a000000000000;
        mobyutil::MB_SpawnExplosionSparks(0x3ff0000000000000,0x402a000000000000,lVar20,lVar29);
        mobyfunc::GetBonePosition(lVar20,1,lVar29);
        *(float *)(puVar17 + 0x21) = (float)((double)*(float *)(puVar17 + 0x21) + dVar32);
        mobyutil::MB_SpawnExplosionSparks(uVar41,uVar39,lVar20,lVar29);
        fVar1 = (moby->pos).z;
        fVar7 = (moby->pos).y;
        *(f32 *)(puVar17 + 0x20) = (moby->pos).x;
        *(f32 *)((int)puVar17 + 0x104) = fVar7;
        *(undefined4 *)((int)puVar17 + 0x10c) = 0;
        puVar17[0x12] = 0xffffffffffffffff;
        puVar17[0x14] = 1;
        puVar17[0x15] = 1;
        *(float *)(puVar17 + 0x21) = (float)(dVar32 + (double)fVar1);
        puVar17[0x16] = 0xffffffffffffffff;
        puVar17[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (dVar40,dVar40,0x4000000000000000,uVar41,0x40f86a0000000000,0x4008000000000000,
                   0x402e000000000000,lVar20,uVar19 - 0x110,lVar29);
        sound::PlayMobySound(1,0,moby);
        *(MobyInstance **)(puVar17 + 0x2c) = moby;
        *(undefined4 *)((int)puVar17 + 0x15c) = 0;
        *(undefined4 *)(puVar17 + 0x2b) = 0;
        *(undefined **)((int)puVar17 + 0x164) = &DAT_00810000;
        *(undefined4 *)((int)puVar17 + 0x16c) = 0x40000000;
        *(undefined4 *)((int)puVar17 + 0x154) = 0;
        *(undefined4 *)(puVar17 + 0x2a) = 0;
        *(undefined4 *)(puVar17 + 0x2e) = 0;
        collproc::CollMobySphere(0x4018000000000000,lVar27,0x40000000,0x10,lVar20,uVar19 - 0xd0);
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x2c,0x396868);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x170,
                            uVar30);
        *(undefined4 *)((int)pvVar11 + 0x170U & 0xfffffffc) = uVar16;
        *(undefined4 *)((int)pvVar11 + 0x174) = 1;
      }
      else if ((short)MVar10 < 0x1f0) goto LAB_00397498;
    }
    else if ((short)MVar10 < 0x22b) {
      if ((short)MVar10 < 499) goto LAB_00397498;
    }
    else if ((short)MVar10 < 0x22c) goto LAB_00397498;
    goto LAB_00397770;
  }
  if ((short)MVar10 < 0x1e5) {
    if ((short)MVar10 < 0x1d3) {
      if (0x1d1 < (short)MVar10) goto LAB_00397498;
    }
    else if (MVar10 == GRAB_HELICOPTER) goto LAB_00397498;
  }
  else {
    if ((short)MVar10 < 0x1e9) {
      if ((short)MVar10 < 0x1e7) {
        *(MobyInstance **)(puVar17 + 0x26) = moby;
        *(undefined **)((int)puVar17 + 0x134) = &DAT_00810000;
        *(undefined4 *)((int)puVar17 + 0x13c) = 0x3f800000;
        *(undefined4 *)((int)puVar17 + 300) = 0;
        *(undefined4 *)(puVar17 + 0x25) = 0;
        *(undefined4 *)((int)puVar17 + 0x124) = 0;
        *(undefined4 *)(puVar17 + 0x24) = 0;
        *(undefined4 *)(puVar17 + 0x28) = 0;
        collproc::CollMobySphere(0x4010000000000000,lVar27,&DAT_00396868,0x10,lVar20,uVar19 - 0x100)
        ;
      }
      else if ((short)MVar10 < 0x1e8) goto LAB_00397770;
    }
    else if (MVar10 != CHAINSAW_SHIP) goto LAB_00397770;
LAB_00397498:
    fVar1 = (moby->pos).z;
    *(undefined4 *)((int)puVar17 + 0xec) = 0;
    *(undefined4 *)((int)puVar17 + 0xfc) = 0;
    *(undefined4 *)(puVar17 + 0x1f) = 0;
    fVar7 = (moby->pos).x;
    *(undefined4 *)((int)puVar17 + 0xf4) = 0;
    *(undefined4 *)(puVar17 + 0x1e) = 0;
    fVar8 = (moby->pos).y;
    *(f32 *)(puVar17 + 0x1c) = fVar7;
    *(f32 *)((int)puVar17 + 0xe4) = fVar8;
    puVar17[0x12] = 0xffffffffffffffff;
    puVar17[0x14] = 1;
    puVar17[0x15] = 1;
    *(float *)(puVar17 + 0x1d) = fVar1 + 0.75;
    puVar17[0x16] = 0xffffffffffffffff;
    puVar17[0x17] = 0;
    mobyutil::MB_genericExplosion
              (dVar40,dVar40,0x4000000000000000,0x3ff0000000000000,0x40f86a0000000000,
               0x4008000000000000,0x402e000000000000,lVar20,uVar19 - 0x130,uVar19 - 0x140,
               &DAT_00396868,0,10,3,4);
    MVar10 = moby->oClass;
    if ((MVar10 == LOG_SHIP_CARRIER) || (MVar10 == LOG_SHIP_END)) {
      sound::PlayMobySound(0,0,moby);
    }
    else if (MVar10 != BALL_SHIP_2) {
      sound::PlayMobySound(1,0,moby);
    }
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(0x2c,0x396868);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar42 = vectorMultiplyAddFloatingPoint
                        (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                         auVar43);
    auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar16 = storeVectorElementWordIndexed
                       (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x170,uVar30);
    *(undefined4 *)((int)pvVar11 + 0x170U & 0xfffffffc) = uVar16;
    *(undefined4 *)((int)pvVar11 + 0x174) = 1;
  }
LAB_00397770:
  fVar9 = DAT_0071f408;
  lVar29 = lVar20 + 0x40;
  fVar1 = (moby->transform).v0.x;
  fVar4 = DAT_0071f408 * 0.075;
  fVar2 = (moby->transform).v0.y;
  fVar3 = (moby->transform).v0.z;
  *(float *)((int)puVar17 + 0xdc) = (moby->transform).v0.w;
  MVar10 = moby->oClass;
  fVar3 = fVar3 * fVar4;
  *(float *)(puVar17 + 0x1a) = fVar1 * fVar4;
  *(float *)((int)puVar17 + 0xd4) = fVar2 * fVar4;
  *(float *)(puVar17 + 0x1b) = fVar3;
  *(float *)(puVar17 + 0x1b) = fVar9 * 0.08 + fVar3;
  fVar1 = DAT_0071f418;
  dVar33 = 90.5;
  dVar32 = 12.0;
  if (MVar10 == SNOW_PLOW) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x63f,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x641,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x642,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == GRAB_HELICOPTER) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x642,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x643,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x644,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == BALL_SHIP_2) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x645,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    iVar24 = 0;
    do {
      dVar35 = (double)animationSpeed;
      dVar37 = (double)DAT_0071f418;
      puVar17[0xe] = ZEXT48(&DAT_00a15d30);
      puVar17[0xf] = ZEXT48(&DAT_00a15d30);
      puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)(dVar37 * dVar32),lVar20,0x646,lVar27,lVar29,
                 *(undefined4 *)((int)puVar17 + 0x1b4),0);
      iVar24 = iVar24 + 1;
    } while (iVar24 < 6);
  }
  else if (MVar10 == CHAINSAW_SHIP) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x647,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x648,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x649,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == LOG_SHIP_1) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x64d,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x64e,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == LOG_SHIP_2) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x64f,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x650,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x651,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x658,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == LOG_SHIP_CARRIER) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x652,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x653,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x654,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
  }
  else if (MVar10 == TANK_SHIP) {
    fVar2 = animationSpeed * 90.5;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)fVar2;
    mobyutil::MB_SpawnDebrisMoby
              ((double)(fVar1 * 12.0),lVar20,0x793,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    dVar35 = (double)animationSpeed;
    dVar37 = (double)DAT_0071f418;
    puVar17[0xe] = ZEXT48(&DAT_00a15d30);
    puVar17[0xf] = ZEXT48(&DAT_00a15d30);
    puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
    mobyutil::MB_SpawnDebrisMoby
              ((double)(float)(dVar37 * dVar32),lVar20,0x794,lVar27,lVar29,
               *(undefined4 *)((int)puVar17 + 0x1b4),0);
    iVar23 = 0;
    iVar24 = 0;
    do {
      dVar35 = (double)animationSpeed;
      dVar37 = (double)DAT_0071f418;
      puVar17[0xe] = ZEXT48(&DAT_00a15d30);
      puVar17[0xf] = ZEXT48(&DAT_00a15d30);
      puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)(dVar37 * dVar32),lVar20,0x795,lVar27,lVar29,
                 *(undefined4 *)((int)puVar17 + 0x1b4),0);
      iVar23 = iVar23 + 1;
    } while (iVar23 < 3);
    do {
      dVar35 = (double)animationSpeed;
      dVar37 = (double)DAT_0071f418;
      puVar17[0xe] = ZEXT48(&DAT_00a15d30);
      puVar17[0xf] = ZEXT48(&DAT_00a15d30);
      puVar17[0x36] = (longlong)(int)(dVar35 * dVar33);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)(dVar37 * dVar32),lVar20,0x796,lVar27,lVar29,
                 *(undefined4 *)((int)puVar17 + 0x1b4),0);
      iVar24 = iVar24 + 1;
    } while (iVar24 < 3);
  }
LAB_00397fb8:
  moby->damage = -1;
  if (*(int *)((int)pvVar11 + 0x174) != 0) {
    iVar24 = fastfunc::FastDecTimerS32(uVar30 + 0x170);
    if (iVar24 != 0) {
      fVar1 = (moby->pos).x - GameCamera.posX;
      fVar2 = (moby->pos).y - GameCamera.posY;
      dVar33 = ABS((double)fVar1);
      dVar35 = ABS((double)fVar2);
      *(float *)(puVar17 + 0x30) = fVar1;
      *(float *)((int)puVar17 + 0x184) = fVar2;
      fVar1 = GameCamera.rot.radius;
      *(float *)(puVar17 + 0x31) = (float)(dVar33 - dVar35);
      uVar30 = (ulonglong)(*(uint *)(puVar17 + 0x30) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x31) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x184) >> 0x1d) & 4;
      dVar32 = ABS((double)*(float *)(puVar17 + 0x30));
      if ((double)*(float *)(puVar17 + 0x31) - dVar40 < 0.0) {
        dVar32 = dVar35;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
      dVar35 = ABS((double)*(float *)((int)puVar17 + 0x184));
      if ((double)*(float *)(puVar17 + 0x31) - dVar40 < 0.0) {
        dVar35 = dVar33;
      }
      fVar3 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      if (dVar40 < dVar32) {
        lVar20 = uVar19 - 0x210;
        lVar27 = uVar19 - 0x94;
        lVar29 = uVar19 - 0x84;
        lVar31 = 2;
        fVar4 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
        fVar9 = fVar4 * fVar4;
        *(float *)(puVar17 + 0x33) = fVar4;
        *(float *)(puVar17 + 0x32) = fVar4;
        *(float *)((int)puVar17 + 0x194) = fVar4;
        *(float *)((int)puVar17 + 0x18c) = fVar4;
        fVar4 = fVar9 * fVar9;
        *(float *)(puVar17 + 0x32) = *(float *)(puVar17 + 0x32) * fVar9;
        *(float *)((int)puVar17 + 0x194) = *(float *)((int)puVar17 + 0x194) * fVar4;
        *(float *)(puVar17 + 0x33) = *(float *)(puVar17 + 0x33) * fVar4 * fVar9;
        do {
          *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x17c) * fVar4 * fVar4;
          iVar24 = (int)lVar27;
          lVar20 = lVar20 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
          lVar29 = lVar29 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar29 = uVar19 - 0x94;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar27 = lVar29;
        do {
          fVar4 = *pfVar26;
          fVar9 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x18c) * fVar4;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
          lVar27 = lVar27 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar20 = 2;
        do {
          iVar24 = (int)lVar21;
          iVar23 = (int)lVar29;
          lVar21 = lVar21 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar24 + 0x18c)) +
                            *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                           *(float *)(iVar23 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar40 = (double)fastfunc::FastSubRots(fVar1,(float)dVar40);
      if (1.5707963705062866 < dVar40) {
        MVar25 = moby->modeBits;
        puVar12 = moby->pClass->collision;
        *(undefined4 *)((int)pvVar11 + 0x174) = 0;
        moby->collision = puVar12;
        iVar24 = *(int *)((int)pvVar11 + 0x17c);
        moby->modeBits =
             MVar25 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                       DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                       HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        if (iVar24 != -1) {
          MobyInstance[iVar24].modeBits =
               MobyInstance[iVar24].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        return;
      }
    }
    iVar24 = *(int *)((int)pvVar11 + 0x17c);
    moby->collision = (ushort *)0x0;
    MVar25 = moby->modeBits | (UNK_40|DISABLED);
    moby->modeBits = MVar25;
    if (iVar24 != -1) {
      MobyInstance[iVar24].modeBits = MobyInstance[iVar24].modeBits | (UNK_40|DISABLED);
      MVar25 = moby->modeBits;
    }
    moby->modeBits =
         MVar25 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                   DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                   TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  }
  return;
}



//==== 003982bc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M553_003982bc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M553_003982bc(void)

{
  DAT_00842cc4 = 0x10000;
  return;
}



//==== 003982d8  ns=mobyupdate_unsorted  size=0x238
// sig: undefined UpdateMoby_{467_472}(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 00109af0 mobyutil::Delt; 0015d12c sound::PlayMobySound

/* Moby 467
   Moby 472 */

void mobyupdate_unsorted::UpdateMoby__467_472_(MobyInstance *moby)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  float *pfVar3;
  float fVar4;
  MobyInstance *moby_00;
  ushort *puVar5;
  
  pfVar3 = (float *)moby->pVar;
  bVar1 = moby->state;
  if ((MiscLevelFlags.field46_0x2e == 0) || (-1 < (int)pfVar3[2])) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        pfVar3[1] = (moby->pos).z;
        moby->state = '\x01';
      }
      else {
        fVar4 = pfVar3[2];
        if (-1 < (int)fVar4) {
          if ((MobyInstance[(int)fVar4].oClass == TRESSPASSER_PAD) ||
             (MobyInstance[(int)fVar4].oClass == 0x23f)) {
            if (MobyInstance[(int)fVar4].state == '\x04') {
              MiscLevelFlags.field53_0x35 = 1;
              sound::PlayMobySound(0,0,moby);
              moby->state = '\x02';
            }
          }
          else {
                    /* WARNING: Load size is inaccurate */
            mobyutil::Delt((*pfVar3 - pfVar3[1]) * *MobyInstance[(int)fVar4].pVar + pfVar3[1],
                           mobyutil::g_FrameTime * 10.0,&(moby->pos).z);
          }
        }
      }
    }
    else if (bVar1 < 3) {
      mobyutil::Delt(*pfVar3,mobyutil::g_FrameTime * 10.0,&(moby->pos).z);
    }
  }
  else {
    puVar5 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
    if (puVar5 != (ushort *)0x0) {
      moby_00 = MobyInstance + (*puVar5 & 0x7fff);
      while( true ) {
        if ((moby_00->state < 0x7f) && (moby_00 != moby)) {
          MVar2 = moby_00->oClass;
          if ((short)MVar2 < 599 && 0x24b < (short)MVar2) {
            mobyfunc::DeleteMoby(moby_00);
          }
          else if (MVar2 == (WATER_RESERVOIR|TRESPASSER_0050|BLARG_HEAVY_INTERCEPTOR_0008)) {
            mobyfunc::DeleteMoby(moby_00);
          }
        }
        if ((short)*puVar5 < -1) break;
        moby_00 = MobyInstance + (puVar5[1] & 0x7fff);
        puVar5 = puVar5 + 1;
      }
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00398510  ns=mobyupdate_helpers  size=0x14
// sig: undefined M472_00398510(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M472_00398510(void)

{
  DAT_00842d34 = 0x10000;
  return;
}



//==== 00398538  ns=mobyupdate_unsorted  size=0x39c
// sig: undefined UpdateMoby_{468_469}(MobyInstance * moby)
// callers(0): 
// callees(8): 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0015d710 sound::sound_SetVol; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

/* Moby 468
   Moby 469 */

void mobyupdate_unsorted::UpdateMoby__468_469_(MobyInstance *moby)

{
  f32 fVar1;
  MOBY_OCLASSES MVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_90 [32];
  float local_70;
  float local_6c;
  float local_68;
  
  piVar3 = (int *)moby->pVar;
  dVar9 = 0.0;
  dVar10 = 30.0;
  fVar1 = (moby->pos).x;
                    /* WARNING: Load size is inaccurate */
  fVar4 = *MobyInstance[*piVar3].pVar;
                    /* WARNING: Load size is inaccurate */
  dVar8 = (double)*MobyInstance[*piVar3].pVar;
  if (g_gameMode == GAME_MODE_SCENE) {
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
  if (moby->state == '\0') {
    moby->state = '\x01';
    piVar3[4] = (int)fVar1;
    piVar3[5] = (int)(moby->pos).y;
    piVar3[6] = (int)(moby->pos).z;
    piVar3[7] = (int)(moby->pos).w;
  }
  else if (moby->state == '\x01') {
    dVar7 = 0.01745329238474369;
    dVar6 = (double)fastfunc::FastDiffRots
                              ((double)((float)piVar3[1] * 0.017453292),
                               (double)((float)piVar3[2] * 0.017453292));
    dVar8 = (double)fastfunc::FastWrapRot
                              ((float)(dVar6 * dVar8),(float)((double)(float)piVar3[2] * dVar7));
    dVar6 = (double)fastfunc::FastSubRots((moby->rotation).y,(float)dVar8);
    if (dVar6 == dVar9) {
      if ((moby->oClass == (WATER_RESERVOIR|HOVERBOARD_0054)) &&
         (iVar5 = sound::IsMobyPlayingSound(moby,piVar3[8]), iVar5 != 0)) {
        iVar5 = piVar3[8];
        if (sound::g_SoundChannels[iVar5].vol < 0x100) {
          sound::sound_Kill(iVar5);
          piVar3[8] = -1;
        }
        else {
          sound::sound_SetVol(iVar5,sound::g_SoundChannels[iVar5].vol -
                                    0x400 / (int)(animationSpeed * 60.5));
        }
      }
    }
    else {
      MVar2 = moby->oClass;
      (moby->rotation).y = (float)dVar8;
      if (MVar2 == (WATER_RESERVOIR|HOVERBOARD_0054)) {
        iVar5 = sound::IsMobyPlayingSound(moby,piVar3[8]);
        if (iVar5 == 0) {
          iVar5 = sound::PlayMobySound(0,4,moby);
          piVar3[8] = iVar5;
          sound::sound_SetVol(iVar5,1);
        }
        else if (sound::g_SoundChannels[piVar3[8]].vol < 0x400) {
          sound::sound_SetVol(piVar3[8],
                              sound::g_SoundChannels[piVar3[8]].vol +
                              0x400 / (int)(animationSpeed * 60.5));
        }
      }
    }
    fastfunc::FastEulerToMtx1(auStack_90,(longlong)(int)moby + 0x40);
    (moby->pos).x = (float)((double)local_70 * dVar10 + (double)(float)piVar3[4]);
    (moby->pos).y = (float)((double)local_6c * dVar10 + (double)(float)piVar3[5]);
    (moby->pos).z = (float)((double)local_68 * dVar10 + (double)(float)piVar3[6]);
    (moby->pos).w = (f32)piVar3[7];
    if ((fVar4 == 1.0) && (moby->oClass == (WATER_RESERVOIR|HOVERBOARD_0054))) {
      (&MiscLevelFlags.field48_0x30)[piVar3[3]] = 1;
      moby->state = '\x02';
      sound::PlayMobySound(1,0,moby);
      if ((moby->oClass == (WATER_RESERVOIR|HOVERBOARD_0054)) &&
         (iVar5 = sound::IsMobyPlayingSound(moby,piVar3[8]), iVar5 != 0)) {
        sound::sound_Kill(piVar3[8]);
      }
    }
  }
  return;
}



//==== 003988d4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M469_003988d4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M469_003988d4(void)

{
  DAT_00842da4 = 0x10000;
  return;
}



//==== 003988e8  ns=mobyupdate_helpers  size=0x1cc
// sig: undefined M47_003988e8(void)
// callers(1): 00398ed8 mobyupdate_unsorted::UpdateMoby_47
// callees(4): 00109c30 mobyutil::OrganicDelt; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

bool mobyupdate_helpers::M47_003988e8(int param_1,int *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  float local_40 [2];
  longlong local_38;
  
  iVar10 = *(int *)(param_1 + 0x78);
  local_38 = (longlong)*(int *)(iVar10 + 0xe8);
  dVar13 = (double)((float)local_38 + *(float *)(iVar10 + 0xec) +
                   *(float *)(iVar10 + 0xf0) / *(float *)(iVar10 + 0xf4));
  lVar11 = fastfunc::FastDoubleToInt(dVar13);
  iVar12 = (int)lVar11;
  local_38 = (longlong)iVar12;
  *(int *)(iVar10 + 0xe8) = iVar12;
  bVar1 = *param_2 + -2 <= iVar12;
  fVar2 = (float)(dVar13 - (double)local_38);
  *(float *)(iVar10 + 0xec) = fVar2;
  if (!bVar1) {
    iVar12 = (int)(lVar11 << 4);
    fVar3 = *(float *)((int)param_2 + iVar12 + 0x10);
    fVar4 = *(float *)((int)param_2 + iVar12 + 0x14);
    fVar5 = *(float *)((int)param_2 + iVar12 + 0x18);
    fVar6 = *(float *)((int)param_2 + iVar12 + 0x20);
    fVar7 = *(float *)((int)param_2 + iVar12 + 0x24);
    fVar8 = *(float *)((int)param_2 + iVar12 + 0x28);
    dVar14 = (double)*(float *)((int)param_2 + iVar12 + 0x1c);
    fVar9 = *(float *)((int)param_2 + iVar12 + 0x2c);
    *(float *)(param_1 + 0x1c) = fVar9;
    *(float *)(param_1 + 0x10) = fVar2 * (fVar6 - fVar3) + fVar3;
    *(float *)(param_1 + 0x14) = fVar2 * (fVar7 - fVar4) + fVar4;
    *(float *)(param_1 + 0x18) = fVar2 * (fVar8 - fVar5) + fVar5;
    dVar13 = (double)fastfunc::FastDiffRots((double)fVar9,dVar14);
    dVar13 = (double)fastfunc::FastWrapRot
                               ((float)(dVar13 * (double)*(float *)(iVar10 + 0xec)),(float)dVar14);
    iVar12 = *param_2;
    *(float *)(param_1 + 0x48) = (float)dVar13;
    local_40[0] = 0.0;
    fVar2 = *(float *)(param_1 + 0x14) - (float)param_2[iVar12 * 4 + -3];
    fVar3 = *(float *)(param_1 + 0x10) - (float)param_2[iVar12 * 4 + -4];
    fVar4 = *(float *)(param_1 + 0x18) - (float)param_2[iVar12 * 4 + -2];
    mobyutil::OrganicDelt
              (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2),DAT_00842ddc * DAT_0071f418,
               DAT_00842ddc * DAT_0071f418,DAT_00842dd8 * mobyutil::g_FrameTime,local_40,0x720000,
               (float *)(iVar10 + 0xf0));
  }
  return bVar1;
}



//==== 00398ac0  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M47_00398ac0(void)
// callers(1): 00398ed8 mobyupdate_unsorted::UpdateMoby_47
// callees(0): 

void mobyupdate_helpers::M47_00398ac0(int *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x60;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  iVar13 = *param_1;
  iVar12 = 0;
  piVar11 = param_1;
  if (0 < iVar13 + -1) {
    do {
      fVar2 = (float)piVar11[9];
      fVar3 = (float)piVar11[5];
      fVar5 = ABS((float)piVar11[8] - (float)piVar11[4]);
      fVar4 = ABS(fVar2 - fVar3);
      *(float *)(puVar7 + 6) = (float)piVar11[8] - (float)piVar11[4];
      *(float *)((int)puVar7 + 0x34) = fVar2 - fVar3;
      *(float *)(puVar7 + 7) = fVar5 - fVar4;
      fVar2 = 0.0;
      uVar15 = (ulonglong)(*(uint *)(puVar7 + 6) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 7) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x34) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar7 + 6));
      if (*(float *)(puVar7 + 7) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar7 + 0x34));
      if (*(float *)(puVar7 + 7) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar10 - 0x50;
        lVar14 = uVar10 - 0x14;
        lVar16 = uVar10 - 0x24;
        lVar19 = 2;
        fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar7 + 9) = fVar3;
        *(float *)(puVar7 + 8) = fVar3;
        *(float *)((int)puVar7 + 0x44) = fVar3;
        *(float *)((int)puVar7 + 0x3c) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar7 + 8) = *(float *)(puVar7 + 8) * fVar5;
        *(float *)((int)puVar7 + 0x44) = *(float *)((int)puVar7 + 0x44) * fVar3;
        *(float *)(puVar7 + 9) = *(float *)(puVar7 + 9) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar17 + 0x3c) = *(float *)((int)lVar17 + 0x2c) * fVar3 * fVar3;
          iVar13 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar17 = uVar10 - 0x24;
        lVar19 = 4;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar17;
        lVar16 = lVar1;
        do {
          fVar3 = *pfVar18;
          fVar5 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x3c) = *(float *)((int)lVar16 + 0x3c) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar16 = 2;
        lVar14 = lVar1;
        do {
          iVar13 = (int)lVar14;
          iVar9 = (int)lVar17;
          lVar14 = lVar14 + 0x10;
          lVar17 = lVar17 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar13 + 0x3c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8)
                  + *(float *)(iVar9 + 0xc);
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar4;
      }
      iVar13 = *param_1;
      iVar12 = iVar12 + 1;
      piVar11[7] = (int)fVar2;
      piVar11 = piVar11 + 4;
    } while (iVar12 < iVar13 + -1);
  }
  if (1 < iVar13) {
    param_1[iVar13 * 4 + 3] = param_1[iVar13 * 4 + -1];
  }
  return;
}



//==== 00398ce8  ns=mobyupdate_helpers  size=0x1d8
// sig: undefined M47_00398ce8(void)
// callers(1): 00398ed8 mobyupdate_unsorted::UpdateMoby_47
// callees(5): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M47_00398ce8(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  uVar5 = ZEXT48(pvVar1);
  param_1->scale = param_1->pClass->gScale * DAT_00842dd0;
  dVar6 = 0.0;
  local_1c = 0.0;
  uVar3 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar4 = mobyutil::MB_HandleDamage(param_1,uVar3,uVar5 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 != 1) && (param_1->state != '\a')) {
    fVar2 = *(float *)((int)pvVar1 + 0x20) - local_1c;
    *(float *)((int)pvVar1 + 0x20) = fVar2;
    if ((double)fVar2 <= dVar6) {
      iVar4 = 1;
    }
    if (iVar4 < 3) {
      if (0 < iVar4) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        param_1->state = '\a';
        auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        auVar7 = loadVectorLeftIndexed(4,0x398cdc);
        auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8)
        ;
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0xe0,uVar5);
        *(undefined4 *)((int)pvVar1 + 0xe0U & 0xfffffffc) = uVar3;
        *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
      }
    }
    else if (iVar4 < 9) {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar5 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar5 + 0x60);
  mobyutil::MB_getTargetInArea
            (0x4060000000000000,param_1,uVar5 + 0x70,&DAT_00398cdc,0,0,
             Splines[*(int *)((int)pvVar1 + 0xd0)]->points,
             Splines[*(int *)((int)pvVar1 + 0xd0)]->cnt);
  if (*(int *)((int)pvVar1 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0xb0) = g_heroMobyPtr;
  }
  return;
}



//==== 00398ed8  ns=mobyupdate_unsorted  size=0x5d0
// sig: undefined UpdateMoby_47(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 00104e44 mobyutil::PointInsideComplexPoly; 00109c30 mobyutil::OrganicDelt; 003988e8 mobyupdate_helpers::M47_003988e8; 00398ac0 mobyupdate_helpers::M47_00398ac0; 00398ce8 mobyupdate_helpers::M47_00398ce8; 0039e8f4 FUN_0039e8f4; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots

/* Moby 47 */

void mobyupdate_unsorted::UpdateMoby_47(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  void *pvVar3;
  Spline *pSVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  pvVar3 = moby->pVar;
  uVar9 = ZEXT48(pvVar3);
  mobyupdate_helpers::M47_00398ce8();
  uVar1 = moby->state;
  if (uVar1 == '\a') {
    fVar2 = (moby->rotation).x;
    (moby->pos).z = -(mobyutil::g_FrameTime * 2.0 - (moby->pos).z);
    (moby->rotation).x = mobyutil::g_FrameTime * 0.2617994 + fVar2;
    iVar8 = fastfunc::FastDecTimerS32(uVar9 + 0xe0);
    if (iVar8 != 0) {
      iVar8 = 0;
      do {
        if (-1 < *(int *)((int)uVar9 + 0xc0)) {
          FUN_0039e8f4(MobyInstance + *(int *)((int)uVar9 + 0xc0),local_40);
        }
        iVar8 = iVar8 + 1;
        uVar9 = uVar9 + 4;
      } while (iVar8 < 4);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x06') {
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    moby->state = '\x05';
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(8,0x398ec0);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0xe4,uVar9);
    *(undefined4 *)((int)pvVar3 + 0xe4U & 0xfffffffc) = uVar5;
  }
  else if (uVar1 == '\x05') {
    iVar8 = fastfunc::FastDecTimerS32(uVar9 + 0xe4);
    if ((iVar8 != 0) && (*(int *)((int)pvVar3 + 0xb4) != 2)) {
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    iVar8 = mobyupdate_helpers::M47_003988e8(moby,Splines[*(int *)((int)pvVar3 + 0xdc)]);
    if (iVar8 != 0) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    fVar2 = Splines[*(int *)((int)pvVar3 + 0xd8)]->points[0].w;
    dVar10 = (double)fVar2;
    mobyutil::OrganicDelt
              (fVar2,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,
               (int)Splines[*(int *)((int)pvVar3 + 0xd8)],(float *)((int)pvVar3 + 0xf8));
    dVar10 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar10);
    if (dVar10 < 0.009999999776482582) {
      moby->state = '\x04';
      *(undefined4 *)((int)pvVar3 + 0xe8) = 0;
      *(undefined4 *)((int)pvVar3 + 0xec) = 0;
    }
  }
  else if (uVar1 == '\x02') {
    iVar8 = mobyupdate_helpers::M47_003988e8(moby,Splines[*(int *)((int)pvVar3 + 0xd8)]);
    if (iVar8 != 0) {
      iVar8 = 0;
      do {
        if (-1 < *(int *)((int)uVar9 + 0xc0)) {
          FUN_0039e8f4(MobyInstance + *(int *)((int)uVar9 + 0xc0),local_50);
        }
        iVar8 = iVar8 + 1;
        uVar9 = uVar9 + 4;
      } while (iVar8 < 4);
      moby->state = ((byte)((LZCOUNT(-1 - *(int *)((int)pvVar3 + 0xdc)) << 0x3a) >> 0x3f) & 2) + 3;
    }
  }
  else if (uVar1 == '\x01') {
    iVar8 = mobyutil::PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar3 + 0xd4)]->points,
                       Splines[*(int *)((int)pvVar3 + 0xd4)]->cnt);
    if (iVar8 != 0) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar3 + 0x20) = 0x41400000;
    *(undefined2 *)((int)pvVar3 + 0x24) = 0xc;
    *(undefined1 *)((int)pvVar3 + 0x28) = 3;
    if (((*(int *)((int)pvVar3 + 0xd8) == -1) || (*(int *)((int)pvVar3 + 0xd0) == -1)) ||
       (*(int *)((int)pvVar3 + 0xd4) == -1)) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      mobyupdate_helpers::M47_00398ac0(Splines[*(int *)((int)pvVar3 + 0xd8)]);
      if (*(int *)((int)pvVar3 + 0xdc) != -1) {
        mobyupdate_helpers::M47_00398ac0(Splines[*(int *)((int)pvVar3 + 0xdc)]);
      }
      *(undefined4 *)((int)pvVar3 + 0xec) = 0;
      fVar6 = DAT_00842dd8;
      fVar2 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar3 + 0xe8) = 0;
      pSVar4 = Splines[*(int *)((int)pvVar3 + 0xd8)];
      *(float *)((int)pvVar3 + 0xf0) = fVar6 * fVar2;
      fVar2 = pSVar4->points[0].y - pSVar4->points[1].y;
      fVar6 = pSVar4->points[0].x - pSVar4->points[1].x;
      fVar7 = pSVar4->points[0].z - pSVar4->points[1].z;
      *(float *)((int)pvVar3 + 0xf4) = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar2 * fVar2);
      (moby->pos).x = pSVar4->points[0].x;
      (moby->pos).y = pSVar4->points[0].y;
      (moby->pos).z = pSVar4->points[0].z;
      fVar2 = pSVar4->points[0].w;
      moby->state = '\x01';
      (moby->pos).w = fVar2;
    }
  }
  return;
}



//==== 003994a8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M470_003994a8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M470_003994a8(void)

{
  DAT_00842e6c = 0x10000;
  return;
}



//==== 003994d8  ns=mobyupdate_helpers  size=0x314
// sig: undefined M470_003994d8(void)
// callers(1): 00399930 mobyupdate_unsorted::UpdateMoby_470
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M470_003994d8(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined1 uVar5;
  undefined8 in_r9;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_90 [56];
  
  dVar11 = 0.0;
  iVar6 = 0;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x78);
  *(float *)(param_1 + 0x18) = (*(float *)(param_1 + 0x18) + 0.1) - 0.1;
  lVar9 = uVar7 + 0x20;
  dVar12 = 255.0;
  auVar17 = loadVectorLeftIndexed(0x10,0x3994c0);
  dVar13 = 255.5;
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  dVar14 = 0.5;
  do {
    pfVar8 = (float *)uVar7;
    dVar10 = (double)(*pfVar8 + pfVar8[4]);
    *pfVar8 = *pfVar8 + pfVar8[4];
    if (dVar10 < dVar12) {
      if (dVar10 <= dVar11) {
        *pfVar8 = (float)(dVar10 + dVar12);
      }
    }
    else {
      *pfVar8 = (float)(dVar10 - dVar12);
    }
    iVar4 = fastfunc::FastDecTimerS32(uVar7 + 0x20);
    fVar1 = pfVar8[8];
    dVar10 = (double)animationSpeed;
    auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar4 != 0) {
      auVar16 = ZEXT416(0xffffffff);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar17,auVar16);
      fVar1 = (float)(int)(dVar10 * dVar13);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0,lVar9);
      *(undefined4 *)((uint)lVar9 & 0xfffffffc) = uVar2;
    }
    dVar10 = (double)fastfunc::FastIntToDouble((int)(dVar10 * dVar13) - (int)fVar1);
    uVar3 = fastfunc::FastLerpColor
                      (ABS((double)(float)(dVar14 - (double)(float)(dVar10 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar13)))),0x4040ffff,0x1040ffff)
    ;
    uVar5 = fastfunc::FastDoubleToInt((double)*pfVar8);
    partupd::SpawnPart_59((double)pfVar8[0xc],local_90,uVar3,uVar5,0x35,1,2,in_r9,0);
    iVar6 = iVar6 + 1;
    lVar9 = lVar9 + 4;
    uVar7 = uVar7 + 4;
  } while (iVar6 < 4);
  return;
}



//==== 003997f8  ns=mobyupdate_helpers  size=0x124
// sig: undefined M470_003997f8(void)
// callers(1): 00399930 mobyupdate_unsorted::UpdateMoby_470
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M470_003997f8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = mobyutil::MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)uVar5 = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x14) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x18) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x1c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x3997ec);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x20;
  auVar8 = loadVectorLeftIndexed(4,0x3997ec);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x3997ec);
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7._0_4_ = iVar4 + auVar9._0_4_;
    auVar7._8_8_ = in_vs39._8_8_;
    auVar7._4_4_ = iVar10 + auVar9._4_4_;
    auVar16._0_8_ = auVar7._0_8_;
    auVar16._8_4_ = iVar11 + auVar9._8_4_;
    auVar16._12_4_ = iVar12 + auVar9._12_4_;
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8._0_4_;
    iVar10 = iVar10 + auVar8._4_4_;
    iVar11 = iVar11 + auVar8._8_4_;
    iVar12 = iVar12 + auVar8._12_4_;
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x30) = 0x40600000;
  *(undefined4 *)(uVar1 + 0x34) = 0x40866666;
  *(undefined4 *)(uVar1 + 0x38) = 0x40866666;
  *(undefined4 *)(uVar1 + 0x3c) = 0x40600000;
  return;
}



//==== 00399930  ns=mobyupdate_unsorted  size=0xf0
// sig: undefined UpdateMoby_470(MobyInstance * moby)
// callers(0): 
// callees(4): 000ffb70 mobyutil::GetGroundZ; 003994d8 mobyupdate_helpers::M470_003994d8; 003997f8 mobyupdate_helpers::M470_003997f8; 00502578 fastfunc::FastWrapRot
// strings: 0039991c: '?fff?' (raw)

/* Moby 470 */

void mobyupdate_unsorted::UpdateMoby_470(MobyInstance *moby)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = (longlong)(int)moby;
  if (moby->state == 0) {
    mobyupdate_helpers::M470_003997f8(lVar1);
    dVar3 = 0.8999999761581421;
    moby->scale = moby->scale * 0.9;
    dVar2 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar1 + 0x10,0);
    if (ABS((float)(dVar2 - (double)(moby->pos).z)) < 1.0) {
      (moby->pos).z = (float)(dVar2 + dVar3);
    }
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    dVar2 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 4.1887903);
    (moby->rotation).z = (float)dVar2;
    mobyupdate_helpers::M470_003994d8(lVar1);
  }
  return;
}



//==== 00399a30  ns=mobyupdate_helpers  size=0x2f0
// sig: undefined M471_00399a30(void)
// callers(1): 00399dc8 mobyupdate_unsorted::UpdateMoby_471
// callees(1): 0015d12c sound::PlayMobySound

void mobyupdate_helpers::M471_00399a30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ushort uVar9;
  int iVar10;
  float fVar11;
  MobyInstance *pMoby;
  int iVar12;
  ushort *puVar13;
  MobyInstance *pMVar14;
  
  fVar1 = 1024.0;
  iVar10 = *(int *)(param_1 + 0x78);
  puVar13 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar13 != (ushort *)0x0) {
    pMoby = (MobyInstance *)0x0;
    do {
      pMVar14 = MobyInstance + (*puVar13 & 0x7fff);
      if ((pMVar14->oClass == CONVEYOR_BELT_01D7) &&
         (fVar3 = GameCamera.posY - (pMVar14->pos).y, fVar2 = GameCamera.posX - (pMVar14->pos).x,
         fVar4 = GameCamera.posZ - (pMVar14->pos).z,
         fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3), fVar2 < fVar1)) {
        fVar1 = fVar2;
        pMoby = pMVar14;
      }
      uVar9 = *puVar13;
      puVar13 = puVar13 + 1;
    } while (-1 < (short)uVar9);
    fVar1 = (pMoby->pos).y;
    fVar2 = (pMoby->pos).x;
    fVar3 = (pMoby->pos).z;
    fVar5 = fVar1 - GameCamera.posY;
    fVar4 = fVar2 - GameCamera.posX;
    fVar6 = fVar3 - GameCamera.posZ;
    if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < 64.0) {
      iVar12 = *(int *)(iVar10 + 0x74);
      if (-1 < iVar12) {
        if ((sound::g_SoundChannels[iVar12].pMoby != (MobyInstance *)0x0) &&
           ((sound::g_SoundChannels[iVar12].pMoby)->oClass == CONVEYOR_BELT_01D7)) {
          fVar4 = (pMoby->transform).v2.y;
          fVar5 = (pMoby->transform).v2.x;
          fVar6 = (pMoby->transform).v2.z;
          fVar7 = 0.0;
          fVar11 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
          if (fVar11 == 0.0) {
            fVar5 = (pMoby->transform).v2.w;
            fVar4 = fVar7;
            fVar6 = fVar7;
          }
          else {
            fVar11 = 2.5 / fVar11;
            fVar7 = fVar5 * fVar11;
            fVar4 = fVar4 * fVar11;
            fVar5 = (pMoby->transform).v2.w;
            fVar6 = fVar6 * fVar11;
          }
          sound::g_SoundChannels[iVar12].pos[3] = fVar5;
          sound::g_SoundChannels[iVar12].pos[0] = fVar7 + fVar2;
          sound::g_SoundChannels[iVar12].pos[1] = fVar4 + fVar1;
          sound::g_SoundChannels[iVar12].pos[2] = fVar6 + fVar3;
          sound::g_SoundChannels[*(int *)(iVar10 + 0x74)].pMoby = pMoby;
          return;
        }
      }
      iVar12 = sound::PlayMobySound(0,0xd,pMoby);
      fVar1 = *(float *)(param_1 + 0x10);
      *(int *)(iVar10 + 0x74) = iVar12;
      fVar2 = *(float *)(param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 0x18);
      if (-1 < iVar12) {
        fVar4 = *(float *)(param_1 + 0xe4);
        fVar5 = *(float *)(param_1 + 0xe0);
        fVar6 = *(float *)(param_1 + 0xe8);
        fVar7 = 0.0;
        fVar11 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        if (fVar11 == 0.0) {
          uVar8 = *(undefined4 *)(param_1 + 0xec);
          fVar4 = fVar7;
          fVar6 = fVar7;
        }
        else {
          fVar11 = 2.5 / fVar11;
          fVar7 = fVar5 * fVar11;
          fVar4 = fVar4 * fVar11;
          uVar8 = *(undefined4 *)(param_1 + 0xec);
          fVar6 = fVar6 * fVar11;
        }
        iVar10 = (int)((longlong)iVar12 << 7) - (int)((longlong)iVar12 << 4);
        *(float *)((int)sound::g_SoundChannels + iVar10 + 0x20) = fVar7 + fVar1;
        *(float *)((int)sound::g_SoundChannels + iVar10 + 0x24) = fVar4 + fVar2;
        *(undefined4 *)((int)sound::g_SoundChannels + iVar10 + 0x2c) = uVar8;
        *(float *)((int)sound::g_SoundChannels + iVar10 + 0x28) = fVar6 + fVar3;
      }
    }
  }
  return;
}



//==== 00399d20  ns=mobyupdate_helpers  size=0xa0
// sig: undefined M471_00399d20(void)
// callers(0): 
// callees(1): 00112900 mobyutil::MB_GetOrientation

void mobyupdate_helpers::M471_00399d20(longlong param_1,Vec4 *param_2)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar2 = MobyInstance + (*puVar3 & 0x7fff);
      if (pMVar2->oClass == CONVEYOR_BELT_01D7) {
        mobyutil::MB_GetOrientation
                  ((MobyInstance *)((int)pMVar2->pVar + 0x20),param_2,ZEXT48(pMVar2) + 0x40,
                   ZEXT48(pMVar2) + 0x40);
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 00399dc8  ns=mobyupdate_unsorted  size=0x380
// sig: undefined UpdateMoby_471(MobyInstance * moby)
// callers(0): 
// callees(5): 0006d720 RegisterFuncForMoby; 00109af0 mobyutil::Delt; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 00399a30 mobyupdate_helpers::M471_00399a30

/* Moby 471 */

void mobyupdate_unsorted::UpdateMoby_471(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  MobyModeBit MVar3;
  ushort uVar4;
  void *pvVar5;
  float fVar6;
  MobyInstance *pMVar7;
  int iVar8;
  ushort *puVar9;
  Vec4 local_40;
  Vec4 local_30;
  
  bVar1 = moby->state;
  pvVar5 = moby->pVar;
  if (bVar1 == 0) {
    MVar3 = moby->modeBits;
    *(uint *)((int)pvVar5 + 0x5c) = *(uint *)((int)pvVar5 + 0x5c) | 4;
    moby->enabled = '\0';
    iVar8 = *(int *)((int)pvVar5 + 0x60);
    moby->modeBits = MVar3 | DISABLED;
    if (iVar8 == -1) {
      moby->modeBits = MVar3 | (NO_UPDATE|DISABLED);
    }
    else {
      moby->state = '\x02';
    }
    *(undefined4 *)((int)pvVar5 + 0x74) = 0xffffffff;
  }
  else if (bVar1 < 2) {
    if (*(float *)((int)pvVar5 + 0x6c) != DAT_00842e90 * mobyutil::g_FrameTime) {
      mobyutil::Delt(DAT_00842e90 * mobyutil::g_FrameTime,DAT_0071f418 * 12.0,
                     (float *)((int)pvVar5 + 0x6c));
      local_30.y = (moby->transform).v0.y;
      fVar2 = (moby->transform).v0.x;
      local_30.z = (moby->transform).v0.z;
      local_30.x = 0.0;
      fVar6 = SQRT(local_30.z * local_30.z + fVar2 * fVar2 + local_30.y * local_30.y);
      if (fVar6 == 0.0) {
        local_30.w = (moby->transform).v0.w;
        local_30.z = local_30.x;
        local_30.y = local_30.x;
      }
      else {
        fVar6 = *(float *)((int)pvVar5 + 0x6c) / fVar6;
        local_30.w = (moby->transform).v0.w;
        local_30.y = local_30.y * fVar6;
        local_30.x = fVar2 * fVar6;
        local_30.z = local_30.z * fVar6;
      }
      puVar9 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
      if (puVar9 != (ushort *)0x0) {
        do {
          pMVar7 = MobyInstance + (*puVar9 & 0x7fff);
          if (pMVar7->oClass == CONVEYOR_BELT_01D7) {
            mobyutil::MB_GetOrientation
                      ((MobyInstance *)((int)pMVar7->pVar + 0x20),&local_30,ZEXT48(pMVar7) + 0x40,
                       ZEXT48(pMVar7) + 0x40);
          }
          uVar4 = *puVar9;
          puVar9 = puVar9 + 1;
        } while (-1 < (short)uVar4);
      }
    }
    iVar8 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 100));
    if (iVar8 != 0) {
      moby->state = '\x02';
    }
    RegisterFuncForMoby(&PTR_M475_0039a180_0070ce70,moby);
  }
  else if (bVar1 < 3) {
    if (*(float *)((int)pvVar5 + 0x6c) != -(DAT_00842e90 * mobyutil::g_FrameTime)) {
      mobyutil::Delt(-(DAT_00842e90 * mobyutil::g_FrameTime),DAT_0071f418 * 12.0,
                     (float *)((int)pvVar5 + 0x6c));
      local_40.y = (moby->transform).v0.y;
      fVar2 = (moby->transform).v0.x;
      local_40.z = (moby->transform).v0.z;
      local_40.x = 0.0;
      fVar6 = SQRT(local_40.z * local_40.z + fVar2 * fVar2 + local_40.y * local_40.y);
      if (fVar6 == 0.0) {
        local_40.w = (moby->transform).v0.w;
        local_40.z = local_40.x;
        local_40.y = local_40.x;
      }
      else {
        fVar6 = *(float *)((int)pvVar5 + 0x6c) / fVar6;
        local_40.w = (moby->transform).v0.w;
        local_40.y = local_40.y * fVar6;
        local_40.x = fVar2 * fVar6;
        local_40.z = local_40.z * fVar6;
      }
      puVar9 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
      if (puVar9 != (ushort *)0x0) {
        do {
          pMVar7 = MobyInstance + (*puVar9 & 0x7fff);
          if (pMVar7->oClass == CONVEYOR_BELT_01D7) {
            mobyutil::MB_GetOrientation
                      ((MobyInstance *)((int)pMVar7->pVar + 0x20),&local_40,ZEXT48(pMVar7) + 0x40,
                       ZEXT48(pMVar7) + 0x40);
          }
          uVar4 = *puVar9;
          puVar9 = puVar9 + 1;
        } while (-1 < (short)uVar4);
      }
    }
    iVar8 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x68));
    if (iVar8 != 0) {
      moby->state = '\x01';
    }
    RegisterFuncForMoby(&PTR_M475_0039a180_0070ce70,moby);
  }
  if (moby->state != '\0') {
    mobyupdate_helpers::M471_00399a30(moby);
  }
  return;
}



//==== 0039a180  ns=mobyupdate_helpers  size=0x540
// sig: undefined M475_0039a180(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M475_0039a180(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong *puVar7;
  Cuboid *pCVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar13;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  float *pfVar22;
  undefined4 *puVar23;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  undefined4 *puVar25;
  ulonglong unaff_r27;
  longlong lVar26;
  undefined4 *puVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar28;
  double dVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar30;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x200;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar12;
  puVar7[0x42] = in_LR;
  puVar7[0x3e] = in_f30;
  puVar7[0x3f] = in_f31;
  puVar7[0x3d] = unaff_r31;
  iVar6 = *(int *)(param_1 + 0x78);
  pCVar8 = Cuboids + *(int *)(iVar6 + 0x60);
  fVar2 = (pCVar8->matrix).v0.y;
  fVar3 = (pCVar8->matrix).v0.x;
  fVar4 = (pCVar8->matrix).v0.z;
  puVar7[0x3b] = unaff_r29;
  dVar30 = (double)(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * 2.001);
  puVar7[0x3c] = unaff_r30;
  puVar7[0x3a] = unaff_r28;
  puVar7[0x39] = unaff_r27;
  puVar7[0x38] = unaff_r26;
  puVar7[0x37] = unaff_r25;
  puVar7[0x36] = unaff_r24;
  puVar7[0x35] = unaff_r23;
  iVar14 = fastfunc::FastDoubleToInt(dVar30);
  fVar2 = *(float *)(iVar6 + 0x70) + *(float *)(iVar6 + 0x6c);
  dVar30 = (double)(float)(2.0 / dVar30);
  *(float *)(iVar6 + 0x70) = fVar2;
  if (fVar2 <= 1.0) {
    if (fVar2 < 0.0) {
      *(float *)(iVar6 + 0x70) = fVar2 + 1.0;
    }
  }
  else {
    *(float *)(iVar6 + 0x70) = fVar2 - 1.0;
  }
  iVar9 = worldUpdateTime;
  puVar7[0x32] = (longlong)(int)(animationSpeed * 120.5);
  iVar16 = *(int *)((int)puVar7 + 0x194);
  dVar28 = (double)fastfunc::FastIntToDouble(iVar9 - (iVar9 / iVar16) * iVar16);
  dVar29 = (double)fastfunc::FastIntToDouble(iVar16);
  fVar2 = (float)(dVar28 / dVar29) * 6.28318 - 3.14159;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar2 = fVar4 * fVar4;
  fVar3 = fVar2 * fVar2 * fVar4;
  fVar10 = fVar2 * fVar3;
  uVar15 = fastfunc::FastLerpColor
                     ((double)((fVar2 * fVar10 * 2.601887e-06 +
                               fVar10 * -0.0001980741 +
                               fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) * 0.5 +
                              0.5),DAT_00842ea4,DAT_00842ea8);
  uVar11 = DAT_00842eac;
  uVar13 = draw::GetEffectTex(DAT_00842e94);
  puVar7[0x1d] = uVar13;
  uVar13 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x1e] = uVar13;
  uVar13 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x1c] = uVar13;
  uVar13 = idol_draw::PackCmd(DAT_010c9248,DAT_00842e9c,DAT_010c924c,DAT_00842ea0,0x80);
  puVar7[0x1f] = uVar13;
  uVar13 = draw::GetEffectTex(DAT_00842e98);
  puVar7[0x2f] = uVar13;
  uVar13 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x30] = uVar13;
  uVar13 = FUN_00502f08(0,0,0,0,0,0);
  uVar5 = DAT_010c9248;
  puVar7[0x2e] = uVar13;
  uVar13 = idol_draw::PackCmd(uVar5,DAT_00842e9c,DAT_010c924c,DAT_00842ea0,0x80);
  puVar7[0x31] = uVar13;
  iVar16 = 0;
  puVar23 = &DAT_00842ed4;
  lVar26 = uVar12 - 400;
  puVar25 = &DAT_00842ef0;
  puVar20 = &DAT_00842eb0;
  puVar21 = &DAT_00842eb4;
  lVar24 = uVar12 - 0x100;
  pfVar22 = (float *)&DAT_00842ed0;
  lVar17 = lVar1;
  lVar18 = lVar1;
  lVar19 = lVar1;
  do {
    uVar5 = *puVar21;
    iVar9 = (int)lVar17;
    *(undefined4 *)(iVar9 + 0xc0) = *puVar20;
    *(undefined4 *)(iVar9 + 0xc4) = uVar5;
    fVar2 = *pfVar22;
    fVar3 = *(float *)(iVar6 + 0x70);
    uVar5 = *puVar23;
    *(undefined4 *)((int)lVar18 + 0xb0) = uVar15;
    *(undefined4 *)(iVar9 + 0x154) = uVar5;
    *(undefined4 *)((int)lVar18 + 0x140) = uVar11;
    *(float *)(iVar9 + 0x150) = fVar2 - fVar3;
    puVar27 = (undefined4 *)lVar26;
    *puVar27 = *puVar25;
    puVar27[1] = puVar25[1];
    puVar27[2] = puVar25[2];
    puVar27[3] = puVar25[3];
    puVar27 = (undefined4 *)lVar24;
    *puVar27 = *puVar25;
    puVar27[1] = puVar25[1];
    puVar27[2] = puVar25[2];
    puVar27[3] = puVar25[3];
    if (iVar16 < 2) {
      iVar9 = (int)lVar19;
      *(float *)(iVar9 + 0x70) = (float)((double)*(float *)(iVar9 + 0x70) - dVar30);
      *(float *)(iVar9 + 0x100) = (float)((double)*(float *)(iVar9 + 0x100) - dVar30);
    }
    iVar16 = iVar16 + 1;
    puVar20 = puVar20 + 2;
    lVar24 = lVar24 + 0x10;
    puVar21 = puVar21 + 2;
    lVar17 = lVar17 + 8;
    pfVar22 = pfVar22 + 2;
    lVar18 = lVar18 + 4;
    puVar23 = puVar23 + 2;
    lVar26 = lVar26 + 0x10;
    puVar25 = puVar25 + 4;
    lVar19 = lVar19 + 0x10;
  } while (iVar16 < 4);
  iVar16 = 0;
  if (0 < iVar14 + 2) {
    do {
      if (iVar16 == 0) {
        *(undefined4 *)((int)puVar7 + 0xb4) = 0;
        *(undefined4 *)(puVar7 + 0x16) = 0;
        *(undefined4 *)((int)puVar7 + 0x144) = 0;
        *(undefined4 *)(puVar7 + 0x28) = 0;
      }
      else if (iVar16 == iVar14 + 1) {
        *(undefined4 *)((int)puVar7 + 0xbc) = 0;
        *(undefined4 *)(puVar7 + 0x17) = 0;
        *(undefined4 *)((int)puVar7 + 0x14c) = 0;
        *(undefined4 *)(puVar7 + 0x29) = 0;
      }
      else if (iVar16 == 1) {
        *(undefined4 *)((int)puVar7 + 0xb4) = uVar15;
        *(undefined4 *)(puVar7 + 0x16) = uVar15;
        *(undefined4 *)((int)puVar7 + 0x144) = uVar11;
        *(undefined4 *)(puVar7 + 0x28) = uVar11;
      }
      draw::FastDrawQuad(uVar12 - 400,Cuboids + *(int *)(iVar6 + 0x60),0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar12 - 0x100,Cuboids + *(int *)(iVar6 + 0x60),0,EffectTexHeaders,9);
      lVar18 = 4;
      lVar17 = lVar1;
      do {
        iVar9 = (int)lVar17;
        *(float *)(iVar9 + 0x70) = (float)((double)*(float *)(iVar9 + 0x70) + dVar30);
        *(float *)(iVar9 + 0x100) = (float)((double)*(float *)(iVar9 + 0x100) + dVar30);
        lVar17 = lVar17 + 0x10;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar14 + 2);
  }
  return;
}



//==== 0039a6c0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M475_0039a6c0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M475_0039a6c0(void)

{
  DAT_00842f7c = 0x10000;
  return;
}



//==== 0039a6d8  ns=mobyupdate_unsorted  size=0x24
// sig: undefined UpdateMoby_475(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 475 */

void mobyupdate_unsorted::UpdateMoby_475(MobyInstance *moby)

{
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0039a708  ns=mobyupdate_helpers  size=0x4e4
// sig: undefined SpawnMoby_479_DroneDevice(void)
// callers(1): 0039ac10 mobyupdate_helpers::M479_0039ac10
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::SpawnMoby_479_DroneDevice(undefined4 param_1,f32 *param_2)

{
  f32 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar15;
  longlong lVar13;
  longlong lVar14;
  short sVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xe0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar12;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x1a] = unaff_r30;
  puVar8[0x19] = unaff_r29;
  pMVar15 = mobyfunc::CreateMoby(DRONE);
  if (pMVar15 != (MobyInstance *)0x0) {
    pMVar15->updateDistance = -1;
    pMVar15->enabled = '\x01';
    pMVar15->state = '\x02';
    pMVar15->setByGroup = '\0';
    pvVar7 = pMVar15->pVar;
    (pMVar15->pos).x = *param_2;
    fVar1 = param_2[1];
    pMVar15->drawDistance = 0xff;
    (pMVar15->pos).y = fVar1;
    (pMVar15->pos).z = param_2[2];
    fVar1 = param_2[3];
    *(undefined4 *)((int)pvVar7 + 0x44) = param_1;
    (pMVar15->pos).w = fVar1;
    DAT_0096bcd6 = DAT_0096bcd6 + '\x01';
    mobyfunc::UpdateMobyTransform(pMVar15);
    mobyutil::MB_CopyHeroLights(pMVar15);
    fVar2 = (pMVar15->pos).x - g_heroPosition.x;
    fVar4 = (pMVar15->pos).y - g_heroPosition.y;
    fVar3 = ABS(fVar2);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar8 + 0x7c) = fVar2;
    *(float *)(puVar8 + 0x10) = fVar4;
    *(float *)((int)puVar8 + 0x84) = fVar3 - fVar6;
    fVar2 = 0.0;
    uVar20 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar8 + 0x7c));
    if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = ABS(*(float *)(puVar8 + 0x10));
    if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar9 = fVar2;
    if (0.0 < fVar4) {
      lVar13 = uVar12 - 0xd0;
      lVar17 = uVar12 - 0x38;
      lVar18 = uVar12 - 0x28;
      lVar21 = 2;
      fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0xb4) = fVar4;
      *(float *)((int)puVar8 + 0xac) = fVar4;
      *(float *)(puVar8 + 0x16) = fVar4;
      *(float *)(puVar8 + 0x15) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar5;
      *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar4;
      *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar18 = uVar12 - 0x38;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      fVar4 = fVar2;
      do {
        iVar10 = (int)lVar13;
        iVar11 = (int)lVar18;
        lVar13 = lVar13 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar10 + 0xa8) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar9 = (fVar4 + 0.7853982) * fVar6 + fVar3;
    }
    *(float *)((int)pvVar7 + 0x28) = fVar9;
    fVar4 = g_heroPosition.y - (pMVar15->pos).y;
    fVar3 = g_heroPosition.x - (pMVar15->pos).x;
    fVar6 = (pMVar15->pos).z - g_heroPosition.z;
    fVar4 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    *(float *)((int)puVar8 + 0x74) = fVar6;
    fVar6 = ABS(fVar6);
    fVar3 = ABS(fVar4);
    *(float *)(puVar8 + 0xe) = fVar4;
    *(float *)(puVar8 + 0xf) = fVar3 - fVar6;
    uVar20 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = ABS(*(float *)((int)puVar8 + 0x74));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar13 = uVar12 - 0xd0;
      lVar17 = uVar12 - 0x58;
      lVar18 = uVar12 - 0x48;
      lVar21 = 2;
      fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0x94) = fVar4;
      *(float *)((int)puVar8 + 0x8c) = fVar4;
      *(float *)(puVar8 + 0x12) = fVar4;
      *(float *)(puVar8 + 0x11) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar5;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar18 = uVar12 - 0x58;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar13 = 2;
      do {
        iVar10 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar11 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar10 + 0x88) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
    }
    *(float *)((int)pvVar7 + 0x24) = fVar2;
    fVar2 = (pMVar15->pos).y - g_heroPosition.y;
    fVar4 = (pMVar15->pos).x - g_heroPosition.x;
    sVar16 = 0;
    *(undefined2 *)((int)pvVar7 + 0x54) = 0;
    *(float *)((int)pvVar7 + 0x20) = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
    *(float *)((int)pvVar7 + 0x3c) = g_heroPosition.z;
    do {
      iVar10 = (int)((longlong)sVar16 << 2);
      if (*(int *)((int)&DAT_0096bd00 + iVar10) == 0) {
        *(MobyInstance **)((int)&DAT_0096bd00 + iVar10) = pMVar15;
        break;
      }
      sVar16 = sVar16 + 1;
      *(short *)((int)pvVar7 + 0x54) = sVar16;
    } while (sVar16 < 6);
    *(undefined2 *)((int)pvVar7 + 0x56) = 100;
    pMVar15->collision = (ushort *)0x0;
  }
  return pMVar15;
}



//==== 0039ac10  ns=mobyupdate_helpers  size=0x29c
// sig: undefined M479_0039ac10(void)
// callers(1): 00085b30 hero::Hero_HandleGadgetSwitching
// callees(3): 0008e0f4 hero::Hero_GetWeaponAmmo; 000aa258 hero::hero_ConsumeAmmo; 0039a708 mobyupdate_helpers::SpawnMoby_479_DroneDevice
// strings: 00a0fdc4: 'None'

void mobyupdate_helpers::M479_0039ac10(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  int iVar11;
  MobyInstance *pMVar12;
  uint uVar13;
  double extraout_f1;
  double dVar14;
  double dVar15;
  undefined1 local_40 [40];
  
  DAT_0096bcd5 = 0;
  iVar11 = hero::Hero_GetWeaponAmmo(0x18);
  if (iVar11 != 0) {
    fVar2 = g_heroRotation.z + 1.5707963;
    fVar3 = 3.1415925 - g_heroRotation.z;
    if (g_heroRotation.z - (3.1415925 - g_heroRotation.z) < 0.0) {
      fVar3 = g_heroRotation.z;
    }
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar4 = -3.1415925 - g_heroRotation.z;
    if ((-3.1415925 - g_heroRotation.z) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar3 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar3 = fVar5;
    }
    fVar2 = fVar4 * fVar4;
    fVar5 = fVar3 * fVar3;
    fVar8 = fVar2 * fVar2 * fVar4;
    fVar6 = fVar5 * fVar5 * fVar3;
    fVar9 = fVar2 * fVar8;
    fVar7 = fVar5 * fVar6;
    dVar15 = (double)((fVar2 * fVar9 * 2.601887e-06 +
                      fVar9 * -0.0001980741 +
                      fVar8 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) * 0.25);
    dVar14 = (double)((fVar5 * fVar7 * 2.601887e-06 +
                      fVar7 * -0.0001980741 +
                      fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) * 0.25);
    if (DAT_0096bcd6 < 6) {
      hero::hero_ConsumeAmmo(0x18,1);
      if (CHAR_ARRAY_00a0fdc4._32_2_ != -1) {
        CHAR_ARRAY_00a0fdc4._32_2_ = CHAR_ARRAY_00a0fdc4._32_2_ + 1;
      }
      iVar11 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0fdc4._34_2_ < iVar11 / 600) {
        sVar10 = (short)(iVar11 >> 0x1f);
        CHAR_ARRAY_00a0fdc4._34_2_ =
             ((short)(iVar11 / 600) + sVar10) -
             ((short)((short)(iVar11 / 0x2580000) + sVar10) >> 0xf);
      }
      CHAR_ARRAY_00a0fdc4._36_4_ = CHAR_ARRAY_00a0fdc4._36_4_ | 1 << (Level & 0x3f) | 0x80000000;
      uVar13 = (uint)DAT_0096bcd6;
      pMVar12 = g_heroMobyPtr;
      if (DAT_0096bcd6 < 6) {
        do {
          pMVar12 = (MobyInstance *)SpawnMoby_479_DroneDevice(pMVar12,local_40);
          if (pMVar12 != (MobyInstance *)0x0) {
            pfVar1 = (float *)pMVar12->pVar;
            *pfVar1 = (float)dVar14;
            pfVar1[1] = (float)dVar15;
            pfVar1[2] = 0.25;
            pfVar1[3] = (float)extraout_f1;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < 6);
      }
    }
  }
  return;
}



//==== 0039aeb8  ns=mobyupdate_helpers  size=0xb4
// sig: undefined M479_0039aeb8(void)
// callers(0): 
// callees(1): 001300d0 partupd::SpawnPart_55

void mobyupdate_helpers::M479_0039aeb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_r7;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar1 + 0x4c) == 0) {
    uVar2 = partupd::SpawnPart_55
                      (0x3fa99999a0000000,0x3f847ae140000000,param_1,0,&DAT_0039aeac,
                       0xffffffff80808080,in_r7,0x10808080);
    *(undefined4 *)(iVar1 + 0x4c) = uVar2;
  }
  if (*(int *)(iVar1 + 0x50) == 0) {
    uVar2 = partupd::SpawnPart_55
                      (0x3fa99999a0000000,0x3f847ae140000000,param_1,1,&DAT_0039aeac,
                       0xffffffff80808080,in_r7,0x10808080);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return;
}



//==== 0039af88  ns=mobyupdate_helpers  size=0x348
// sig: undefined M479_0039af88(void)
// callers(1): 0039b390 mobyupdate_unsorted::UpdateMoby_479
// callees(3): 00057820 collproc::CollLine; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 00486828 FUN_00486828
// strings: 0039af6c: 'Nnk(' (raw)

MobyInstance * mobyupdate_helpers::M479_0039af88(float *param_1,int *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  MobyInstance *moby;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar14;
  int iVar13;
  int *piVar15;
  MobyInstance *pMVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 local_60 [16];
  
  pMVar16 = (MobyInstance *)0x0;
  bVar1 = MobyUpdateChainStart != (MobyInstance *)0x0;
  dVar18 = 1000000000.0;
  moby = MobyUpdateChainStart;
  do {
    if (!bVar1) {
      return pMVar16;
    }
    uVar14 = 0;
    if (moby->pClass != (MobyClass *)0x0) {
      uVar14 = (ushort)moby->pClass->mode_bits;
    }
    uVar14 = uVar14 & 0xff;
    if ((moby->state != 0xfd && moby->state != 0xfe) &&
       (((uVar14 == 5 || (uVar14 == 7)) || (uVar14 == 8)))) {
      if (param_2 != (int *)0x0) {
        iVar13 = 0;
        piVar15 = param_2;
        do {
          if ((MobyInstance *)*piVar15 == moby) goto LAB_0039b288;
          iVar13 = iVar13 + 1;
          piVar15 = piVar15 + 1;
        } while (iVar13 < 9);
      }
      if (((uVar14 != 5) || ((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) &&
         ((moby->enabled != '\0' ||
          ((moby->oClass == (DOOR_LEFT|TRESPASSER_0050) || (moby->oClass == ROCKET_0031)))))) {
        fVar3 = (moby->pos).y;
        fVar2 = param_1[1] - fVar3;
        fVar4 = (moby->pos).x;
        fVar7 = *param_1 - fVar4;
        fVar5 = (moby->pos).z;
        fVar6 = param_1[2] - fVar5;
        dVar19 = (double)SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar2 * fVar2);
        if (moby->oClass == 0x4d6) {
          pfVar9 = (float *)moby->pVar;
          fVar6 = pfVar9[1];
          fVar7 = *pfVar9;
          fVar8 = pfVar9[2];
          fVar11 = 0.0;
          dVar17 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
          fVar2 = (float)(dVar19 / dVar17);
          fVar10 = fVar11;
          if (0.0 - dVar17 < 0.0) {
            fVar10 = fVar6 * fVar2;
          }
          fVar12 = fVar11;
          if (0.0 - dVar17 < 0.0) {
            fVar12 = fVar7 * fVar2;
          }
          if (0.0 - dVar17 < 0.0) {
            fVar11 = fVar8 * fVar2;
          }
          if (dVar17 - 0.0 < 0.0) {
            fVar10 = fVar6 * fVar2;
          }
          if (dVar17 - 0.0 < 0.0) {
            fVar12 = fVar7 * fVar2;
          }
          if (dVar17 - 0.0 < 0.0) {
            fVar11 = fVar8 * fVar2;
          }
          fVar3 = param_1[1] - (fVar10 + fVar3);
          fVar2 = *param_1 - (fVar12 + fVar4);
          fVar4 = param_1[2] - (fVar11 + fVar5);
          if ((double)SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) <= dVar19)
          goto LAB_0039b1dc;
        }
        else if (uVar14 < 7) {
          if ((uVar14 != 5) || (dVar19 <= 4.0)) goto LAB_0039b1dc;
        }
        else if (uVar14 < 8) {
          if (dVar19 <= 5.300000190734863) goto LAB_0039b1dc;
        }
        else if ((8 < uVar14) || (dVar19 <= 6.0)) {
LAB_0039b1dc:
          if ((dVar19 < dVar18) &&
             ((iVar13 = FUN_00486828(moby), iVar13 == 0 || (*(short *)(iVar13 + 0x68) < 1)))) {
            mobyutil::MB_GetPvarsIfMobyHasThem(moby);
            iVar13 = collproc::CollLine(param_1,local_60,6,moby,0);
            if (iVar13 == 0) {
              dVar18 = dVar19;
              pMVar16 = moby;
            }
          }
        }
      }
    }
LAB_0039b288:
    moby = (MobyInstance *)moby->pChain;
    bVar1 = moby != (MobyInstance *)0x0;
  } while( true );
}



//==== 0039b390  ns=mobyupdate_unsorted  size=0x1a38
// sig: undefined UpdateMoby_479(MobyInstance * moby)
// callers(0): 
// callees(20): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000ff190 mobyutil::MB_DeltAngSpeed; 001009b0 mobyutil::MB_MoveAndCollide; 001057f4 mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 001300d0 partupd::SpawnPart_55; 0015d12c sound::PlayMobySound; 0039af88 mobyupdate_helpers::M479_0039af88; 004fffb4 fastfunc::FastDecTimerS16; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 479 */

void mobyupdate_unsorted::UpdateMoby_479(MobyInstance *moby)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyModeBit MVar11;
  short sVar12;
  int iVar13;
  u16 *puVar14;
  void *pvVar15;
  float fVar16;
  undefined2 uVar17;
  ulonglong *puVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  byte bVar25;
  gameMode_t gVar26;
  ulonglong uVar27;
  int iVar31;
  longlong lVar28;
  MobyInstance *pMVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  undefined4 uVar36;
  short sVar37;
  longlong lVar29;
  longlong lVar30;
  byte bVar38;
  longlong lVar39;
  ulonglong uVar40;
  float *pfVar41;
  ulonglong uVar42;
  float *pfVar43;
  int *piVar44;
  int *piVar45;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar46;
  ulonglong unaff_r30;
  ushort uVar47;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  ulonglong in_f24;
  double dVar54;
  ulonglong in_f25;
  double dVar55;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar56;
  undefined8 uVar57;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  lVar29 = (longlong)(int)moby;
  uVar27 = ZEXT48(&stack0x00000000);
  lVar30 = uVar27 - 0x2d0;
  puVar18 = (ulonglong *)lVar30;
  *puVar18 = uVar27;
  puVar18[0x5c] = in_LR;
  puVar18[0x52] = in_f24;
  puVar18[0x53] = in_f25;
  puVar18[0x54] = in_f26;
  puVar18[0x55] = in_f27;
  puVar18[0x56] = in_f28;
  puVar18[0x57] = in_f29;
  puVar18[0x58] = in_f30;
  puVar18[0x59] = in_f31;
  puVar18[0x51] = unaff_r31;
  puVar18[0x4d] = unaff_r27;
  gVar26 = g_gameMode;
  pfVar43 = (float *)moby->pVar;
  bVar2 = g_gameMode == GAME_MODE_VENDOR;
  bVar1 = g_gameMode == GAME_MODE_SCENE;
  MVar11 = moby->modeBits;
  puVar18[0x50] = unaff_r30;
  puVar18[0x4f] = unaff_r29;
  puVar18[0x4e] = unaff_r28;
  puVar18[0x4c] = unaff_r26;
  puVar18[0x4b] = unaff_r25;
  if (((bVar2 || bVar1) || (gVar26 == GAME_MODE_SPACE)) || (g_heroState == TURRET_PLANE_UI)) {
    moby->modeBits = MVar11 | (UNK_40|DISABLED);
  }
  else {
    moby->modeBits =
         MVar11 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                   DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                   HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    if (moby->state < 5) {
      DAT_0096bcd4 = DAT_0096bcd4 + 1;
      if (DAT_0096bcd6 < DAT_0096bcd4) {
        iVar35 = 0;
        DAT_0096bcd4 = 1;
        DAT_0096bcd7 = '\0';
        dVar48 = (double)fastfunc::FastWrapRot(DAT_0096bcd8,DAT_0071f408 * 0.05);
        iVar31 = 0;
        DAT_0096bcd8 = (float)dVar48;
        piVar44 = &DAT_0096bd00;
        iVar33 = 0;
        dVar48 = 1000000.0;
        lVar46 = 0;
        piVar45 = piVar44;
        do {
          iVar13 = *piVar45;
          if (iVar13 != 0) {
            if ((*(short *)(iVar13 + 0xa6) == 0x1df) &&
               (bVar38 = *(byte *)(iVar13 + 0x20), bVar38 != 0xfd && bVar38 != 0xfe)) {
              lVar46 = lVar46 + 1;
              *(undefined4 *)(&DAT_0096bcdc + iVar31) =
                   *(undefined4 *)(*(int *)(iVar13 + 0x78) + 0x30);
              if (bVar38 < 4) {
                DAT_0096bcd7 = DAT_0096bcd7 + '\x01';
              }
              iVar31 = iVar31 + 4;
              if (8 < (int)lVar46) break;
            }
            else {
              *piVar45 = 0;
            }
          }
          iVar33 = iVar33 + 1;
          piVar45 = piVar45 + 1;
        } while (iVar33 < 6);
        if ((int)lVar46 < 9) {
          lVar28 = lVar46 << 2;
          lVar39 = 9 - lVar46;
          do {
            iVar31 = (int)lVar28;
            lVar39 = lVar39 + -1;
            lVar28 = lVar28 + 4;
            *(undefined4 *)(&DAT_0096bcdc + iVar31) = 0;
          } while (0 < (int)lVar39);
        }
        pMVar32 = (MobyInstance *)mobyupdate_helpers::M479_0039af88(&g_heroPosition,&DAT_0096bcdc);
        if (pMVar32 != (MobyInstance *)0x0) {
          mobyutil::MB_GetPvarsIfMobyHasThem(pMVar32);
          iVar31 = 0;
          do {
            iVar33 = *piVar44;
            if ((iVar33 != 0) &&
               ((((iVar13 = *(int *)(*(int *)(iVar33 + 0x78) + 0x30), iVar13 == 0 ||
                  (cVar3 = *(char *)(iVar13 + 0x20), cVar3 == -2)) || (cVar3 == -3)) &&
                (fVar7 = *(float *)(iVar33 + 0x14) - (pMVar32->pos).y,
                fVar4 = *(float *)(iVar33 + 0x10) - (pMVar32->pos).x,
                dVar49 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7), dVar49 < dVar48)))) {
              dVar48 = dVar49;
              iVar35 = iVar33;
            }
            iVar31 = iVar31 + 1;
            piVar44 = piVar44 + 1;
          } while (iVar31 < 6);
          if (iVar35 != 0) {
            iVar31 = *(int *)(iVar35 + 0x78);
            *(MobyInstance **)(iVar31 + 0x30) = pMVar32;
            *(int *)(iVar31 + 0x48) = (int)(short)pMVar32->oClass;
            iVar33 = mobyutil::MB_GetPvarsIfMobyHasThem(pMVar32);
            fVar4 = (pMVar32->pos).z;
            fVar5 = (pMVar32->pos).y;
            fVar6 = (pMVar32->pos).w;
            if (iVar33 != 0) {
              fVar4 = fVar4 + *(float *)(iVar33 + 0x10);
            }
            *(f32 *)(iVar31 + 0x10) = (pMVar32->pos).x;
            *(f32 *)(iVar31 + 0x14) = fVar5;
            *(float *)(iVar31 + 0x18) = fVar4;
            *(f32 *)(iVar31 + 0x1c) = fVar6;
            *(undefined1 *)(iVar35 + 0x20) = 3;
            iVar33 = rand();
            iVar35 = iVar33 / 3 + (iVar33 >> 0x1f);
            iVar33 = iVar33 + (iVar35 - (iVar35 >> 0x1f)) * -3;
            sound::PlayMobySound(iVar33 + ((uint)(-(longlong)iVar33 >> 0x3f) & 1),0,moby);
            *(undefined4 *)(&DAT_0096bcdc + (int)(lVar46 << 2)) = *(undefined4 *)(iVar31 + 0x30);
          }
        }
      }
      bVar25 = DAT_0096bcd6;
      bVar38 = DAT_0096bcd4;
      uVar42 = (ulonglong)DAT_0096bcd6;
      uVar24 = (uint)DAT_0096bcd6;
      uVar21 = (uint)DAT_0096bcd6;
      uVar34 = (uint)DAT_0096bcd6;
      dVar48 = (double)fastfunc::FastIntToDouble(DAT_0096bcd4);
      puVar18[0x48] =
           (longlong)(int)(uVar34 + ((uint)((longlong)(uVar42 - 1) >> 0x3f) & 1 - uVar21));
      uVar34 = (uint)bVar38 * ((bVar25 + 2) * 0x33 >> 8);
      dVar58 = (double)(longlong)puVar18[0x48];
      dVar49 = 6.2831854820251465;
      dVar50 = 3.1415927410125732;
      pfVar43[0x10] = (float)(dVar48 / dVar58) * 6.2831855 - 3.1415927;
      dVar48 = (double)fastfunc::FastIntToDouble(uVar34 - (uVar34 / (uVar24 + 1)) * (uVar24 + 1));
      pfVar43[0xd] = (float)((double)(float)(dVar48 / dVar58) * dVar49 - dVar50) * 0.25;
      iVar35 = mobyutil::MB_damage(lVar29,1,0);
      if (((((iVar35 != 0) && (iVar35 = *(int *)(iVar35 + 0x20), iVar35 != 0)) &&
           (*(int *)(iVar35 + 0x24) != 0)) &&
          ((sVar12 = *(short *)(*(int *)(iVar35 + 0x24) + 0x46), 4 < sVar12 && (sVar12 < 9)))) &&
         ((*(short *)(iVar35 + 0xa6) != 0x4d6 ||
          (iVar35 = fastfunc::FastDecTimerS16((int)pfVar43 + 0x56), iVar35 != 0)))) {
        moby->state = '\x04';
      }
    }
    bVar38 = moby->state;
    if (bVar38 < 4) {
      if (1 < bVar38) {
        if (bVar38 < 3) {
          pvVar15 = moby->pVar;
          moby->collision = (ushort *)0x0;
          dVar50 = (double)(moby->pos).x;
          dVar49 = (double)(moby->pos).y;
          dVar48 = (double)(moby->pos).z;
          if (*(int *)((int)pvVar15 + 0x4c) == 0) {
            uVar36 = partupd::SpawnPart_55
                               (0x3fa99999a0000000,0x3f847ae140000000,lVar29,0,&DAT_0039b2d0,
                                0xffffffff80808080);
            *(undefined4 *)((int)pvVar15 + 0x4c) = uVar36;
          }
          if (*(int *)((int)pvVar15 + 0x50) == 0) {
            uVar36 = partupd::SpawnPart_55
                               (0x3fa99999a0000000,0x3f847ae140000000,lVar29,1,&DAT_0039b2d0,
                                0xffffffff80808080);
            *(undefined4 *)((int)pvVar15 + 0x50) = uVar36;
          }
          dVar52 = 0.05000000074505806;
          moby->scale = DAT_0071f408 * 0.05 * (moby->pClass->gScale - moby->scale) + moby->scale;
          dVar56 = 1.0;
          dVar51 = (double)pfVar43[10];
          pfVar43[8] = DAT_0071f408 * 0.05 * (1.0 - pfVar43[8]) + pfVar43[8];
          uVar57 = fastfunc::FastWrapRot(pfVar43[0x10],DAT_0096bcd8);
          dVar58 = (double)fastfunc::FastDiffRots(uVar57,(double)pfVar43[10]);
          dVar58 = (double)fastfunc::FastWrapRot
                                     ((float)dVar51,
                                      (float)((double)(float)((double)DAT_0071f408 * dVar52) *
                                             dVar58));
          dVar51 = (double)pfVar43[9];
          pfVar43[10] = (float)dVar58;
          dVar58 = (double)fastfunc::FastDiffRots((double)pfVar43[0xd],dVar51);
          dVar58 = (double)fastfunc::FastWrapRot
                                     ((float)dVar51,(float)((double)(DAT_0071f408 * 0.01) * dVar58))
          ;
          fVar4 = pfVar43[10];
          fVar7 = fVar4 + 1.5707963;
          fVar8 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar8 = fVar4;
          }
          fVar16 = 3.1415925 - fVar7;
          if (fVar7 - (3.1415925 - fVar7) < 0.0) {
            fVar16 = fVar7;
          }
          fVar10 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar8 < 0.0) {
            fVar10 = fVar8;
          }
          fVar4 = pfVar43[8];
          dVar51 = 0.0;
          pfVar43[9] = (float)dVar58;
          *(undefined4 *)(puVar18 + 0x1a) = 0;
          fVar8 = -3.1415925 - fVar7;
          if ((-3.1415925 - fVar7) - fVar16 < 0.0) {
            fVar8 = fVar16;
          }
          fVar16 = fVar10 * fVar10;
          fVar9 = fVar8 * fVar8;
          fVar22 = fVar16 * fVar16 * fVar10;
          fVar19 = fVar9 * fVar9 * fVar8;
          fVar23 = fVar16 * fVar22;
          fVar20 = fVar9 * fVar19;
          fVar7 = pfVar43[9];
          *(undefined4 *)(puVar18 + 0x1b) = 0;
          *(float *)((int)puVar18 + 0xd4) = fVar7;
          *(undefined4 *)((int)puVar18 + 0xdc) = 0;
          dVar55 = (double)((fVar16 * fVar23 * 2.601887e-06 +
                            fVar23 * -0.0001980741 +
                            fVar22 * 0.0083330255 + fVar16 * fVar10 * -0.16666657 + fVar10) * fVar4)
          ;
          dVar54 = (double)((fVar9 * fVar20 * 2.601887e-06 +
                            fVar20 * -0.0001980741 +
                            fVar19 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) * fVar4);
          fastfunc::FastEulerToMtx1(uVar27 - 0x180,uVar27 - 0x200);
          pMVar32 = g_heroMobyPtr;
          fVar20 = g_heroPosition.w;
          fVar9 = g_heroPosition.z;
          fVar19 = g_heroPosition.y;
          dVar58 = (double)*(float *)(puVar18 + 0x2a);
          fVar10 = g_heroPosition.x + (g_heroMobyPtr->transform).v2.x;
          fVar4 = *(float *)(puVar18 + 0x2d);
          *(float *)(puVar18 + 0x1c) = fVar10;
          fVar7 = *(float *)(puVar18 + 0x2b);
          fVar19 = fVar19 + (pMVar32->transform).v2.y;
          dVar53 = (double)DAT_0071f408;
          fVar8 = *(float *)(puVar18 + 0x31);
          *(float *)((int)puVar18 + 0xe4) = fVar19;
          fVar16 = (pMVar32->transform).v2.z;
          *(float *)((int)puVar18 + 0xec) = fVar20;
          fVar9 = fVar9 + fVar16;
          *(float *)(puVar18 + 0x1c) =
               fVar10 + (float)((double)*(float *)(puVar18 + 0x30) * dVar58 +
                               (double)(float)(dVar58 * dVar54 +
                                              (double)(float)((double)*(float *)(puVar18 + 0x2c) *
                                                             dVar55)));
          *(float *)((int)puVar18 + 0xe4) =
               fVar19 + (float)((double)*(float *)((int)puVar18 + 0x184) * dVar58 +
                               (double)(float)((double)*(float *)((int)puVar18 + 0x154) * dVar54 +
                                              (double)(float)((double)*(float *)((int)puVar18 +
                                                                                0x164) * dVar55)));
          *(float *)(puVar18 + 0x1d) = fVar9;
          fVar9 = (float)(dVar53 * dVar52) * (fVar9 - pfVar43[0xf]) + pfVar43[0xf];
          pfVar43[0xf] = fVar9;
          fVar16 = *(float *)((int)puVar18 + 0xe4) - (moby->pos).y;
          fVar10 = *(float *)(puVar18 + 0x1c) - (moby->pos).x;
          fVar4 = (fVar9 + (float)((double)fVar8 * dVar58 +
                                  (double)(float)((double)fVar7 * dVar54 +
                                                 (double)(float)((double)fVar4 * dVar55)))) -
                  (moby->pos).z;
          *(float *)(puVar18 + 0x1c) = fVar10;
          *(float *)((int)puVar18 + 0xe4) = fVar16;
          *(float *)(puVar18 + 0x1d) = fVar4;
          fVar7 = SQRT(fVar4 * fVar4 + fVar10 * fVar10 + fVar16 * fVar16);
          if (mobyutil::g_FrameTime * 10.0 < fVar7) {
            fVar7 = (mobyutil::g_FrameTime * 10.0) / fVar7;
            *(float *)(puVar18 + 0x1c) = fVar10 * fVar7;
            *(float *)((int)puVar18 + 0xe4) = fVar16 * fVar7;
            *(float *)(puVar18 + 0x1d) = fVar4 * fVar7;
          }
          uVar42 = mobyutil::MB_MoveAndCollide
                             (dVar51,0x3fc70a3d80000000,dVar51,lVar29,uVar27 - 0x1f0);
          if (((uVar42 & 1) != 0) && (moby->enabled == '\0')) {
            fVar4 = GameCamera.posX + GameCamera.orientMtx.up.x;
            fVar7 = GameCamera.posY + GameCamera.orientMtx.up.y;
            fVar8 = GameCamera.posZ + GameCamera.orientMtx.up.z;
            (moby->pos).w = (f32)GameCamera.field8_0x14c;
            (moby->pos).x = fVar4 - GameCamera.orientMtx.forward.x;
            (moby->pos).y = fVar7 - GameCamera.orientMtx.forward.y;
            (moby->pos).z = fVar8 - GameCamera.orientMtx.forward.z;
          }
          fVar5 = (moby->pos).y;
          *(f32 *)(puVar18 + 0x18) = (moby->pos).x;
          fVar6 = (moby->pos).z;
          *(f32 *)((int)puVar18 + 0xc4) = fVar5;
          fVar5 = (moby->pos).w;
          *(f32 *)(puVar18 + 0x19) = fVar6;
          *(f32 *)((int)puVar18 + 0xcc) = fVar5;
          uVar57 = 0x3fc99999a0000000;
          iVar35 = collproc::CollSphere(0x3fc99999a0000000,uVar27 - 0x210);
          if ((iVar35 != 0) &&
             ((((bVar1 = CollOutput.pMoby == (MobyInstance *)0x0, bVar1 ||
                ((CollOutput.pMoby)->oClass != RATCHET)) || ((CollOutput.pMoby)->state == 0xfe)) ||
              ((CollOutput.pMoby)->state == 0xfd)))) {
            uVar47 = 0;
            if (!bVar1) {
              uVar47 = 0;
              if ((CollOutput.pMoby)->pClass != (MobyClass *)0x0) {
                uVar47 = (ushort)(CollOutput.pMoby)->pClass->mode_bits;
              }
            }
            uVar47 = uVar47 & 0xff;
            if (((!bVar1) &&
                ((CollOutput.pMoby)->state != 0xfd && (CollOutput.pMoby)->state != 0xfe)) &&
               ((uVar47 == 5 || ((uVar47 == 7 || (uVar47 == 8)))))) {
              mobyutil::SetCollDamIn(dVar56,uVar27 - 0x1e0,lVar29,0x10000);
              pMVar32 = CollOutput.pMoby;
              fVar4 = *pfVar43;
              auVar59 = ZEXT416(0xfffffff0);
              auVar60 = loadVectorLeftIndexed(0xa6,lVar29);
              dVar58 = (double)(fVar4 * fVar4 + pfVar43[1] * pfVar43[1]);
              auVar59 = vectorShiftRightWord
                                  (auVar60,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60);
              if ((double)(float)SQRT(dVar58) == dVar51) {
                *(undefined4 *)((int)puVar18 + 0xf4) = 0;
                *(undefined4 *)(puVar18 + 0x1e) = 0;
              }
              else {
                dVar52 = 1.0 / SQRT(dVar58);
                dVar52 = (double)(float)(-(double)(float)((double)(float)(dVar58 * dVar52) * dVar52
                                                         - dVar56) * (double)(float)(dVar52 * 0.5) +
                                        dVar52);
                dVar52 = (double)(float)(-(double)(float)((double)(float)(dVar58 * dVar52) * dVar52
                                                         - dVar56) * (double)(float)(dVar52 * 0.5) +
                                        dVar52);
                fVar7 = (float)(-(double)(float)((double)(float)(dVar58 * dVar52) * dVar52 - dVar56)
                                * (double)(float)(dVar52 * 0.5) + dVar52);
                *(float *)(puVar18 + 0x1e) = fVar4 * fVar7;
                *(float *)((int)puVar18 + 0xf4) = pfVar43[1] * fVar7;
              }
              auVar60 = vectorSplatHalfWord(auVar59,1);
              *(undefined4 *)(puVar18 + 0x1f) = 0x3f800000;
              *(undefined4 *)((int)puVar18 + 0xfc) = 0x45afdf66;
              *(undefined1 *)(puVar18 + 0x21) = 1;
              *(undefined1 *)((int)puVar18 + 0x109) = 2;
              uVar17 = storeVectorElementHalfWordIndexed(auVar60,0x10a,lVar30);
              *(undefined2 *)((int)puVar18 + 0x10a) = uVar17;
              auVar60 = loadVectorLeftIndexed(0x70,0x39b2d0);
              auVar60 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar61 = vectorPermute(*(undefined1 (*) [16])(puVar18 + 0x1e),_DAT_0039b320,
                                      _DAT_0039b330);
              auVar59 = vectorPermute(auVar59,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                              auVar60 << 0x60,_DAT_0039b350);
              auVar59 = vectorPermute(auVar59,*(undefined1 (*) [16])(puVar18 + 0x20),_DAT_0039b360);
              *(undefined1 (*) [16])(puVar18 + 8) = auVar61;
              *(undefined4 *)((int)puVar18 + 0x6c) = *(undefined4 *)((int)puVar18 + 0x11c);
              *(undefined4 *)(puVar18 + 0xd) = *(undefined4 *)(puVar18 + 0x23);
              *(undefined4 *)((int)puVar18 + 100) = *(undefined4 *)((int)puVar18 + 0x114);
              *(undefined4 *)(puVar18 + 0xc) = *(undefined4 *)(puVar18 + 0x22);
              *(undefined1 (*) [16])(puVar18 + 10) = auVar59;
              mobyutil::CollDamageMobyDirect
                        (pMVar32,puVar18[9],puVar18[8],puVar18[9],puVar18[10],puVar18[0xb],
                         puVar18[0xc],puVar18[0xd]);
              if (uVar47 == 5) {
                if (((CollOutput.pMoby == (MobyInstance *)0x0) ||
                    ((CollOutput.pMoby)->oClass != 0x4d6)) ||
                   (sVar12 = *(short *)((int)pfVar43 + 0x56), sVar12 < 1)) {
                  puVar18[0x12] = 1;
                  puVar18[0x14] = 1;
                  puVar18[0x15] = 1;
                  puVar18[0x16] = 0xffffffffffffffff;
                  puVar18[0x17] = 0;
                  mobyutil::MB_genericExplosion
                            (dVar51,dVar51,0x3fd99999a0000000,uVar57,0x4010000000000000,dVar56,
                             0x4020000000000000,lVar29,pfVar43,0,0xffffffffffffffff,0,0,1,1);
                  moby->state = '\x04';
                }
                else {
                  iVar35 = fastfunc::FastDoubleToInt((double)*(float *)((int)puVar18 + 0x10c));
                  sVar37 = 1;
                  if (0 < iVar35) {
                    sVar37 = fastfunc::FastDoubleToInt((double)*(float *)((int)puVar18 + 0x10c));
                  }
                  *(short *)((int)pfVar43 + 0x56) = sVar12 - sVar37;
                }
              }
            }
          }
          *pfVar43 = (float)((double)(moby->pos).x - dVar50);
          pfVar43[1] = (float)((double)(moby->pos).y - dVar49);
          pfVar43[2] = (float)((double)(moby->pos).z - dVar48);
          pfVar43[3] = (moby->pos).w;
          dVar56 = (double)(moby->pos).x;
          dVar53 = (double)(moby->pos).y;
          fVar4 = (float)(dVar56 - dVar50);
          fVar7 = (float)(dVar53 - dVar49);
          dVar52 = ABS((double)fVar4);
          dVar54 = ABS((double)fVar7);
          *(float *)((int)puVar18 + 0x1b4) = fVar4;
          *(float *)(puVar18 + 0x37) = fVar7;
          *(float *)((int)puVar18 + 0x1bc) = (float)(dVar52 - dVar54);
          fVar4 = (moby->pos).z;
          fVar7 = (moby->rotation).z;
          uVar42 = (ulonglong)(*(uint *)((int)puVar18 + 0x1b4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x1bc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar18 + 0x37) >> 0x1d) & 4;
          dVar58 = ABS((double)*(float *)((int)puVar18 + 0x1b4));
          if ((double)*(float *)((int)puVar18 + 0x1bc) - dVar51 < 0.0) {
            dVar58 = dVar54;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar42 << 2));
          dVar54 = ABS((double)*(float *)(puVar18 + 0x37));
          if ((double)*(float *)((int)puVar18 + 0x1bc) - dVar51 < 0.0) {
            dVar54 = dVar52;
          }
          fVar16 = *(float *)(((uint)(uVar42 << 2) | 0x735900) + 4);
          dVar52 = dVar51;
          if (dVar51 < dVar58) {
            lVar29 = uVar27 - 0x2c0;
            lVar46 = uVar27 - 0xb0;
            lVar28 = uVar27 - 0xa0;
            lVar39 = 2;
            fVar10 = (float)(dVar54 - dVar58) / (float)(dVar54 + dVar58);
            fVar9 = fVar10 * fVar10;
            *(float *)((int)puVar18 + 0x22c) = fVar10;
            *(float *)((int)puVar18 + 0x224) = fVar10;
            *(float *)(puVar18 + 0x45) = fVar10;
            *(float *)(puVar18 + 0x44) = fVar10;
            fVar10 = fVar9 * fVar9;
            *(float *)((int)puVar18 + 0x224) = *(float *)((int)puVar18 + 0x224) * fVar9;
            *(float *)(puVar18 + 0x45) = *(float *)(puVar18 + 0x45) * fVar10;
            *(float *)((int)puVar18 + 0x22c) = *(float *)((int)puVar18 + 0x22c) * fVar10 * fVar9;
            do {
              *(float *)((int)lVar29 + 0x220) = *(float *)((int)lVar29 + 0x210) * fVar10 * fVar10;
              iVar35 = (int)lVar46;
              lVar29 = lVar29 + 8;
              lVar46 = lVar46 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar35 + 4) * fVar10 * fVar10;
              lVar28 = lVar28 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar28 = uVar27 - 0xb0;
            pfVar41 = (float *)&DAT_007358e0;
            lVar29 = lVar30;
            lVar46 = lVar28;
            do {
              fVar10 = *pfVar41;
              fVar9 = pfVar41[1];
              pfVar41 = pfVar41 + 2;
              *(float *)((int)lVar29 + 0x220) = *(float *)((int)lVar29 + 0x220) * fVar10;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar46 + 4) = *(float *)((int)lVar46 + 4) * fVar9;
              lVar46 = lVar46 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar46 = 2;
            lVar29 = lVar30;
            dVar58 = dVar51;
            do {
              iVar35 = (int)lVar29;
              lVar29 = lVar29 + 0x10;
              iVar31 = (int)lVar28;
              lVar28 = lVar28 + 0x10;
              dVar58 = (double)((float)(dVar58 + (double)*(float *)(iVar35 + 0x220)) +
                                *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                               *(float *)(iVar31 + 0xc));
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
            dVar52 = (double)((float)(dVar58 + 0.7853981852531433) * fVar8 + fVar16);
          }
          fVar8 = (float)(dVar49 - dVar53);
          fVar16 = (float)(dVar50 - dVar56);
          fVar4 = (float)((double)fVar4 - dVar48);
          fVar8 = SQRT(fVar16 * fVar16 + fVar8 * fVar8);
          *(float *)((int)puVar18 + 0x1ac) = fVar4;
          dVar50 = ABS((double)fVar4);
          dVar49 = ABS((double)fVar8);
          *(float *)(puVar18 + 0x35) = fVar8;
          *(float *)(puVar18 + 0x36) = (float)(dVar49 - dVar50);
          uVar40 = (ulonglong)(*(uint *)(puVar18 + 0x35) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar18 + 0x36) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x1ac) >> 0x1d) & 4;
          uVar42 = uVar40 << 2;
          dVar48 = ABS((double)*(float *)(puVar18 + 0x35));
          if ((double)*(float *)(puVar18 + 0x36) - dVar51 < 0.0) {
            dVar48 = dVar50;
          }
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar42);
          dVar50 = ABS((double)*(float *)((int)puVar18 + 0x1ac));
          if ((double)*(float *)(puVar18 + 0x36) - dVar51 < 0.0) {
            dVar50 = dVar49;
          }
          fVar8 = *(float *)(((uint)(uVar40 << 2) | 0x735900) + 4);
          if (dVar51 < dVar48) {
            lVar29 = uVar27 - 0x2c0;
            lVar28 = uVar27 - 0xc0;
            lVar46 = uVar27 - 0xd0;
            lVar39 = 2;
            fVar16 = (float)(dVar50 - dVar48) / (float)(dVar50 + dVar48);
            fVar10 = fVar16 * fVar16;
            *(float *)((int)puVar18 + 0x20c) = fVar16;
            *(float *)((int)puVar18 + 0x204) = fVar16;
            *(float *)(puVar18 + 0x41) = fVar16;
            *(float *)(puVar18 + 0x40) = fVar16;
            fVar16 = fVar10 * fVar10;
            *(float *)((int)puVar18 + 0x204) = *(float *)((int)puVar18 + 0x204) * fVar10;
            *(float *)(puVar18 + 0x41) = *(float *)(puVar18 + 0x41) * fVar16;
            *(float *)((int)puVar18 + 0x20c) = *(float *)((int)puVar18 + 0x20c) * fVar16 * fVar10;
            do {
              *(float *)((int)lVar29 + 0x200) = *(float *)((int)lVar29 + 0x1f0) * fVar16 * fVar16;
              iVar35 = (int)lVar46;
              lVar46 = lVar46 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar35 + 4) * fVar16 * fVar16;
              lVar28 = lVar28 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar28 = uVar27 - 0xd0;
            uVar42 = ZEXT48(&DAT_007358e0);
            lVar29 = lVar30;
            lVar46 = lVar28;
            do {
              pfVar41 = (float *)uVar42;
              fVar16 = pfVar41[1];
              uVar42 = uVar42 + 8;
              *(float *)((int)lVar29 + 0x200) = *(float *)((int)lVar29 + 0x200) * *pfVar41;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar46 + 4) = *(float *)((int)lVar46 + 4) * fVar16;
              lVar46 = lVar46 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar29 = 2;
            do {
              iVar35 = (int)lVar30;
              iVar31 = (int)lVar28;
              lVar30 = lVar30 + 0x10;
              lVar28 = lVar28 + 0x10;
              dVar51 = (double)((float)(dVar51 + (double)*(float *)(iVar35 + 0x200)) +
                                *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                               *(float *)(iVar31 + 0xc));
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            dVar51 = (double)((float)(dVar51 + 0.7853981852531433) * fVar4 + fVar8);
          }
          dVar51 = -dVar51;
          dVar50 = 6.2831854820251465;
          dVar49 = 3.1415927410125732;
          dVar48 = (double)mobyutil::MB_DeltAngSpeed
                                     ((double)fVar7,dVar52,(double)(DAT_0071f418 * 6.2831855),
                                      (double)(DAT_0071f418 * 3.1415927),
                                      (double)(mobyutil::g_FrameTime * 6.2831855),&DAT_0039b2d0,
                                      uVar42,pfVar43 + 0x16);
          (moby->rotation).z = (float)dVar48;
          dVar48 = (double)mobyutil::MB_DeltAngSpeed
                                     ((double)(moby->rotation).y,dVar51,
                                      (double)(float)((double)DAT_0071f418 * dVar50),
                                      (double)(float)((double)DAT_0071f418 * dVar49),
                                      (double)(float)((double)mobyutil::g_FrameTime * dVar50));
          (moby->rotation).y = (float)dVar48;
        }
        else {
          puVar14 = moby->pClass->collision;
          moby->collision = puVar14;
          uVar57 = 0x3fa99999a0000000;
          fVar4 = moby->pClass->gScale;
          fVar7 = DAT_0071f408 * 0.05;
          dVar50 = (double)(moby->pos).x;
          dVar49 = (double)(moby->pos).y;
          dVar48 = (double)(moby->pos).z;
          pvVar15 = moby->pVar;
          moby->collision = puVar14;
          moby->scale = fVar7 * (fVar4 - moby->scale) + moby->scale;
          if (*(int *)((int)pvVar15 + 0x4c) == 0) {
            uVar36 = partupd::SpawnPart_55
                               (0x3fa99999a0000000,0x3f847ae140000000,lVar29,0,&DAT_00720000,
                                0xffffffff80808080);
            *(undefined4 *)((int)pvVar15 + 0x4c) = uVar36;
          }
          if (*(int *)((int)pvVar15 + 0x50) == 0) {
            uVar36 = partupd::SpawnPart_55(uVar57,0x3f847ae140000000,lVar29,1);
            *(undefined4 *)((int)pvVar15 + 0x50) = uVar36;
          }
          pMVar32 = (MobyInstance *)pfVar43[0xc];
          if (((pMVar32 == (MobyInstance *)0x0) ||
              ((float)(int)(short)pMVar32->oClass != pfVar43[0x12])) ||
             (pMVar32->state == 0xfd || pMVar32->state == 0xfe)) {
            moby->state = '\x02';
            pfVar43[0xc] = 0.0;
            pfVar43[0x12] = -NAN;
          }
          else {
            iVar35 = mobyutil::MB_GetPvarsIfMobyHasThem(pMVar32);
            fVar10 = DAT_0071f408;
            fVar16 = pfVar43[0xc];
            fVar4 = *(float *)((int)fVar16 + 0x18);
            fVar7 = *(float *)((int)fVar16 + 0x10);
            fVar8 = *(float *)((int)fVar16 + 0x14);
            fVar16 = *(float *)((int)fVar16 + 0x1c);
            if (iVar35 != 0) {
              fVar4 = fVar4 + *(float *)(iVar35 + 0x10);
            }
            fVar19 = ((fVar7 - pfVar43[4]) * 3.1 + fVar7) - (moby->pos).x;
            *pfVar43 = fVar19;
            fVar20 = ((fVar8 - pfVar43[5]) * 3.1 + fVar8) - (moby->pos).y;
            pfVar43[1] = fVar20;
            fVar9 = (moby->pos).z;
            pfVar43[3] = fVar16;
            dVar58 = 1.0;
            fVar10 = fVar10 * -0.8 + 1.0;
            fVar19 = fVar19 * fVar10;
            pfVar43[1] = fVar20 * fVar10;
            *pfVar43 = fVar19;
            pfVar43[2] = (((fVar4 - pfVar43[6]) * 3.1 + fVar4) - fVar9) * fVar10;
            (moby->pos).x = (moby->pos).x + fVar19;
            (moby->pos).y = (moby->pos).y + pfVar43[1];
            (moby->pos).z = (moby->pos).z + pfVar43[2];
            pfVar43[4] = fVar7;
            pfVar43[5] = fVar8;
            pfVar43[6] = fVar4;
            pfVar43[7] = fVar16;
            fVar5 = (moby->pos).y;
            *(f32 *)(puVar18 + 0x18) = (moby->pos).x;
            *(f32 *)((int)puVar18 + 0xc4) = fVar5;
            *(f32 *)((int)puVar18 + 0xcc) = (moby->pos).w;
            *(f32 *)(puVar18 + 0x19) = (moby->pos).z;
            iVar35 = collproc::CollSphere(0x3fd0000000000000,uVar27 - 0x210,&DAT_0039b2d0,0,lVar29);
            if (iVar35 != 0) {
              if (((CollOutput.pMoby == (MobyInstance *)0x0) ||
                  ((CollOutput.pMoby)->state == 0xfd || (CollOutput.pMoby)->state == 0xfe)) ||
                 ((CollOutput.pMoby != (MobyInstance *)pfVar43[0xc] ||
                  ((CollOutput.pMoby)->oClass == RATCHET)))) {
                (moby->pos).x = CollOutput.push.x;
                (moby->pos).y = CollOutput.push.y;
                (moby->pos).z = CollOutput.push.z;
                (moby->pos).w = CollOutput.push.w;
              }
              else {
                uVar47 = 0;
                if ((CollOutput.pMoby)->pClass != (MobyClass *)0x0) {
                  uVar47 = (ushort)(CollOutput.pMoby)->pClass->mode_bits;
                }
                mobyutil::SetCollDamIn(dVar58,uVar27 - 0x1b0,lVar29,0x10000);
                pMVar32 = CollOutput.pMoby;
                fVar4 = *pfVar43;
                auVar59 = ZEXT416(0xfffffff0);
                dVar52 = (double)(fVar4 * fVar4 + pfVar43[1] * pfVar43[1]);
                uVar57 = 0;
                auVar60 = loadVectorLeftIndexed(0xa6,lVar29);
                auVar59 = vectorShiftRightWord
                                    (auVar60,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                             auVar59 << 0x60);
                if ((float)SQRT(dVar52) == 0.0) {
                  *(undefined4 *)((int)puVar18 + 0x124) = 0;
                  *(undefined4 *)(puVar18 + 0x24) = 0;
                }
                else {
                  dVar51 = 1.0 / SQRT(dVar52);
                  dVar51 = (double)(float)(-(double)(float)((double)(float)(dVar52 * dVar51) *
                                                            dVar51 - dVar58) *
                                           (double)(float)(dVar51 * 0.5) + dVar51);
                  dVar51 = (double)(float)(-(double)(float)((double)(float)(dVar52 * dVar51) *
                                                            dVar51 - dVar58) *
                                           (double)(float)(dVar51 * 0.5) + dVar51);
                  fVar7 = (float)(-(double)(float)((double)(float)(dVar52 * dVar51) * dVar51 -
                                                  dVar58) * (double)(float)(dVar51 * 0.5) + dVar51);
                  *(float *)(puVar18 + 0x24) = fVar4 * fVar7;
                  *(float *)((int)puVar18 + 0x124) = pfVar43[1] * fVar7;
                }
                auVar60 = vectorSplatHalfWord(auVar59,1);
                *(undefined4 *)(puVar18 + 0x25) = 0x3f800000;
                *(undefined4 *)((int)puVar18 + 300) = 0x45afdf66;
                *(undefined1 *)(puVar18 + 0x27) = 1;
                *(undefined1 *)((int)puVar18 + 0x139) = 2;
                uVar17 = storeVectorElementHalfWordIndexed(auVar60,0x13a,lVar30);
                *(undefined2 *)((int)puVar18 + 0x13a) = uVar17;
                auVar60 = loadVectorLeftIndexed(0x70,0x39b2d0);
                auVar60 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar61 = vectorPermute(*(undefined1 (*) [16])(puVar18 + 0x24),_DAT_0039b320,
                                        _DAT_0039b330);
                auVar59 = vectorPermute(auVar59,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                                auVar60 << 0x60,_DAT_0039b350);
                auVar59 = vectorPermute(auVar59,*(undefined1 (*) [16])(puVar18 + 0x26),_DAT_0039b360
                                       );
                *(undefined1 (*) [16])(puVar18 + 8) = auVar61;
                *(undefined4 *)((int)puVar18 + 0x6c) = *(undefined4 *)((int)puVar18 + 0x14c);
                *(undefined4 *)(puVar18 + 0xd) = *(undefined4 *)(puVar18 + 0x29);
                *(undefined4 *)((int)puVar18 + 100) = *(undefined4 *)((int)puVar18 + 0x144);
                *(undefined4 *)(puVar18 + 0xc) = *(undefined4 *)(puVar18 + 0x28);
                *(undefined1 (*) [16])(puVar18 + 10) = auVar59;
                mobyutil::CollDamageMobyDirect
                          (pMVar32,0x50,puVar18[8],puVar18[9],puVar18[10],puVar18[0xb],puVar18[0xc],
                           puVar18[0xd]);
                if ((uVar47 & 0xff) == 5) {
                  if (((CollOutput.pMoby == (MobyInstance *)0x0) ||
                      ((CollOutput.pMoby)->oClass != 0x4d6)) ||
                     (sVar12 = *(short *)((int)pfVar43 + 0x56), sVar12 < 1)) {
                    puVar18[0x12] = 1;
                    puVar18[0x14] = 1;
                    puVar18[0x15] = 1;
                    puVar18[0x16] = 0xffffffffffffffff;
                    puVar18[0x17] = 0;
                    mobyutil::MB_genericExplosion
                              (uVar57,uVar57,0x3fd99999a0000000,0x3fc99999a0000000,
                               0x4010000000000000,dVar58,0x4020000000000000,lVar29,pfVar43,0,
                               &DAT_0039b2d0,0xffffffffffffffff,0,1,1);
                    moby->state = '\x04';
                  }
                  else {
                    iVar35 = fastfunc::FastDoubleToInt((double)*(float *)((int)puVar18 + 0x13c));
                    sVar37 = 1;
                    if (0 < iVar35) {
                      sVar37 = fastfunc::FastDoubleToInt((double)*(float *)((int)puVar18 + 0x13c));
                    }
                    *(short *)((int)pfVar43 + 0x56) = sVar12 - sVar37;
                  }
                }
              }
            }
          }
          dVar58 = (double)(moby->pos).x;
          dVar52 = (double)(moby->pos).y;
          fVar4 = (float)(dVar58 - dVar50);
          fVar7 = (float)(dVar52 - dVar49);
          fVar8 = ABS(fVar4);
          fVar16 = ABS(fVar7);
          *(float *)((int)puVar18 + 0x19c) = fVar4;
          *(float *)(puVar18 + 0x34) = fVar7;
          *(float *)((int)puVar18 + 0x1a4) = fVar8 - fVar16;
          fVar4 = 0.0;
          uVar42 = (ulonglong)(*(uint *)((int)puVar18 + 0x19c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x1a4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar18 + 0x34) >> 0x1d) & 4;
          fVar7 = ABS(*(float *)((int)puVar18 + 0x19c));
          if (*(float *)((int)puVar18 + 0x1a4) - 0.0 < 0.0) {
            fVar7 = fVar16;
          }
          fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar42 << 2));
          fVar16 = *(float *)(((uint)(uVar42 << 2) | 0x735900) + 4);
          fVar9 = ABS(*(float *)(puVar18 + 0x34));
          if (*(float *)((int)puVar18 + 0x1a4) - 0.0 < 0.0) {
            fVar9 = fVar8;
          }
          fVar8 = fVar4;
          if (0.0 < fVar7) {
            lVar29 = uVar27 - 0x2c0;
            lVar28 = uVar27 - 0xe0;
            lVar46 = uVar27 - 0xf0;
            lVar39 = 2;
            fVar7 = (fVar9 - fVar7) / (fVar9 + fVar7);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar18 + 0x1ec) = fVar7;
            *(float *)((int)puVar18 + 0x1e4) = fVar7;
            *(float *)(puVar18 + 0x3d) = fVar7;
            *(float *)(puVar18 + 0x3c) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar18 + 0x1e4) = *(float *)((int)puVar18 + 0x1e4) * fVar8;
            *(float *)(puVar18 + 0x3d) = *(float *)(puVar18 + 0x3d) * fVar7;
            *(float *)((int)puVar18 + 0x1ec) = *(float *)((int)puVar18 + 0x1ec) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar29 + 0x1e0) = *(float *)((int)lVar29 + 0x1d0) * fVar7 * fVar7;
              iVar35 = (int)lVar46;
              lVar46 = lVar46 + 8;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar35 + 4) * fVar7 * fVar7;
              lVar28 = lVar28 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar28 = uVar27 - 0xf0;
            pfVar43 = (float *)&DAT_007358e0;
            lVar29 = lVar30;
            lVar46 = lVar28;
            do {
              fVar7 = *pfVar43;
              fVar8 = pfVar43[1];
              pfVar43 = pfVar43 + 2;
              *(float *)((int)lVar29 + 0x1e0) = *(float *)((int)lVar29 + 0x1e0) * fVar7;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar46 + 4) = *(float *)((int)lVar46 + 4) * fVar8;
              lVar46 = lVar46 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar46 = 2;
            lVar29 = lVar30;
            fVar7 = fVar4;
            do {
              iVar35 = (int)lVar29;
              iVar31 = (int)lVar28;
              lVar29 = lVar29 + 0x10;
              lVar28 = lVar28 + 0x10;
              fVar7 = fVar7 + *(float *)(iVar35 + 0x1e0) + *(float *)(iVar31 + 4) +
                      *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc);
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
            fVar8 = (fVar7 + 0.7853982) * fVar10 + fVar16;
          }
          fVar7 = (float)(dVar49 - dVar52);
          fVar16 = (float)(dVar50 - dVar58);
          (moby->rotation).z = fVar8;
          fVar8 = (float)((double)(moby->pos).z - dVar48);
          fVar7 = SQRT(fVar16 * fVar16 + fVar7 * fVar7);
          *(float *)((int)puVar18 + 0x194) = fVar8;
          fVar8 = ABS(fVar8);
          fVar16 = ABS(fVar7);
          *(float *)(puVar18 + 0x32) = fVar7;
          *(float *)(puVar18 + 0x33) = fVar16 - fVar8;
          uVar42 = (ulonglong)(*(uint *)(puVar18 + 0x32) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar18 + 0x33) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar18 + 0x194) >> 0x1d) & 4;
          fVar7 = ABS(*(float *)(puVar18 + 0x32));
          if (*(float *)(puVar18 + 0x33) - 0.0 < 0.0) {
            fVar7 = fVar8;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar42 << 2));
          fVar10 = ABS(*(float *)((int)puVar18 + 0x194));
          if (*(float *)(puVar18 + 0x33) - 0.0 < 0.0) {
            fVar10 = fVar16;
          }
          fVar16 = *(float *)(((uint)(uVar42 << 2) | 0x735900) + 4);
          if (0.0 < fVar7) {
            lVar29 = uVar27 - 0x2c0;
            lVar46 = uVar27 - 0x110;
            lVar28 = uVar27 - 0x100;
            lVar39 = 2;
            fVar7 = (fVar10 - fVar7) / (fVar10 + fVar7);
            fVar10 = fVar7 * fVar7;
            *(float *)((int)puVar18 + 0x1cc) = fVar7;
            *(float *)((int)puVar18 + 0x1c4) = fVar7;
            *(float *)(puVar18 + 0x39) = fVar7;
            *(float *)(puVar18 + 0x38) = fVar7;
            fVar7 = fVar10 * fVar10;
            *(float *)((int)puVar18 + 0x1c4) = *(float *)((int)puVar18 + 0x1c4) * fVar10;
            *(float *)(puVar18 + 0x39) = *(float *)(puVar18 + 0x39) * fVar7;
            *(float *)((int)puVar18 + 0x1cc) = *(float *)((int)puVar18 + 0x1cc) * fVar7 * fVar10;
            do {
              *(float *)((int)lVar29 + 0x1c0) = *(float *)((int)lVar29 + 0x1b0) * fVar7 * fVar7;
              iVar35 = (int)lVar46;
              lVar29 = lVar29 + 8;
              lVar46 = lVar46 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar35 + 4) * fVar7 * fVar7;
              lVar28 = lVar28 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar28 = uVar27 - 0x110;
            pfVar43 = (float *)&DAT_007358e0;
            lVar29 = lVar30;
            lVar46 = lVar28;
            do {
              fVar7 = *pfVar43;
              fVar10 = pfVar43[1];
              pfVar43 = pfVar43 + 2;
              *(float *)((int)lVar29 + 0x1c0) = *(float *)((int)lVar29 + 0x1c0) * fVar7;
              lVar29 = lVar29 + 8;
              *(float *)((int)lVar46 + 4) = *(float *)((int)lVar46 + 4) * fVar10;
              lVar46 = lVar46 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar29 = 2;
            do {
              iVar35 = (int)lVar30;
              iVar31 = (int)lVar28;
              lVar30 = lVar30 + 0x10;
              lVar28 = lVar28 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar35 + 0x1c0) + *(float *)(iVar31 + 4) +
                      *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc);
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar16;
          }
          (moby->rotation).y = -fVar4;
        }
      }
    }
    else if (bVar38 < 5) {
      pMVar32 = (MobyInstance *)pfVar43[0xc];
      if (((pMVar32 == (MobyInstance *)0x0) || ((float)(int)(short)pMVar32->oClass != pfVar43[0x12])
          ) || (pMVar32->state == 0xfd || pMVar32->state == 0xfe)) {
        pfVar43[0xc] = 0.0;
      }
      else {
        iVar35 = mobyutil::MB_GetPvarsIfMobyHasThem(pMVar32);
        fVar16 = pfVar43[0xc];
        fVar4 = *(float *)((int)fVar16 + 0x18);
        fVar7 = *(float *)((int)fVar16 + 0x14);
        fVar8 = *(float *)((int)fVar16 + 0x1c);
        if (iVar35 != 0) {
          fVar4 = fVar4 + *(float *)(iVar35 + 0x10);
        }
        fVar10 = *(float *)((int)fVar16 + 0x10) - (moby->pos).x;
        *pfVar43 = fVar10;
        fVar7 = fVar7 - (moby->pos).y;
        pfVar43[1] = fVar7;
        fVar16 = (moby->pos).z;
        pfVar43[3] = fVar8;
        fVar9 = DAT_0071f408;
        fVar8 = DAT_0071f408 * -0.8 + 1.0;
        fVar7 = fVar7 * fVar8;
        fVar10 = fVar10 * fVar8;
        fVar8 = (fVar4 - fVar16) * fVar8;
        *pfVar43 = fVar10;
        pfVar43[1] = fVar7;
        pfVar43[2] = fVar8;
        fVar4 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar7 * fVar7);
        if (fVar9 * 0.9 < fVar4) {
          fVar4 = (fVar9 * 0.9) / fVar4;
          fVar10 = fVar10 * fVar4;
          *pfVar43 = fVar10;
          pfVar43[1] = fVar7 * fVar4;
          pfVar43[2] = fVar8 * fVar4;
        }
        (moby->pos).x = (moby->pos).x + fVar10;
        (moby->pos).y = (moby->pos).y + pfVar43[1];
        (moby->pos).z = (moby->pos).z + pfVar43[2];
      }
      bVar38 = moby->alpha - 4;
      moby->alpha = bVar38;
      if (bVar38 < 6) {
        moby->state = '\x05';
      }
    }
    else if (bVar38 < 6) {
      DAT_0096bcd6 = DAT_0096bcd6 - 1;
      *(undefined4 *)((int)&DAT_0096bd00 + (int)((longlong)*(short *)(pfVar43 + 0x15) << 2)) = 0;
      mobyfunc::DeleteMoby(moby);
      return;
    }
    mobyutil::MB_RegisterLameShadow(0.17,moby);
  }
                    /* WARNING: Read-only address (ram,0x0039b320) is written */
                    /* WARNING: Read-only address (ram,0x0039b330) is written */
                    /* WARNING: Read-only address (ram,0x0039b350) is written */
                    /* WARNING: Read-only address (ram,0x0039b360) is written */
  return;
}



//==== 0039cdcc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M479_0039cdcc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M479_0039cdcc(void)

{
  DAT_00842fec = 0x10000;
  return;
}



//==== 0039cdf0  ns=mobyupdate_helpers  size=0x3d8
// sig: undefined M48_0039cdf0(void)
// callers(1): 0039dbd0 mobyupdate_unsorted::UpdateMoby_48
// callees(2): 001009b0 mobyutil::MB_MoveAndCollide; 0010a2e0 mobyutil::OrganicDeltAng

double mobyupdate_helpers::M48_0039cdf0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  ulonglong in_f31;
  double dVar20;
  double dVar21;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xd0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x1c] = in_LR;
  puVar7[0x19] = in_f31;
  puVar7[0x17] = unaff_r30;
  puVar7[0x18] = unaff_r31;
  puVar7[0x16] = unaff_r29;
  iVar6 = *(int *)(param_1 + 0x78);
  if (param_3 == 0) {
    fVar2 = *param_2 - *(float *)(param_1 + 0x10);
    fVar3 = param_2[1] - *(float *)(param_1 + 0x14);
    fVar1 = ABS(fVar2);
    fVar5 = ABS(fVar3);
    *(float *)(puVar7 + 0x10) = fVar2;
    *(float *)((int)puVar7 + 0x84) = fVar3;
    *(float *)(puVar7 + 0x11) = fVar1 - fVar5;
    dVar20 = 0.0;
    uVar12 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar7 + 0x10));
    if (*(float *)(puVar7 + 0x11) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
    fVar3 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar7 + 0x84));
    if (*(float *)(puVar7 + 0x11) - 0.0 < 0.0) {
      fVar8 = fVar1;
    }
    dVar19 = dVar20;
    if (0.0 < fVar2) {
      lVar16 = uVar11 - 0xc0;
      lVar15 = uVar11 - 0x44;
      lVar14 = uVar11 - 0x34;
      lVar18 = 2;
      fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
      fVar1 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x13) = fVar2;
      *(float *)(puVar7 + 0x12) = fVar2;
      *(float *)((int)puVar7 + 0x94) = fVar2;
      *(float *)((int)puVar7 + 0x8c) = fVar2;
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar1;
      *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar2;
      *(float *)(puVar7 + 0x13) = *(float *)(puVar7 + 0x13) * fVar2 * fVar1;
      do {
        *(float *)((int)lVar16 + 0x8c) = *(float *)((int)lVar16 + 0x7c) * fVar2 * fVar2;
        iVar9 = (int)lVar15;
        lVar16 = lVar16 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar11 - 0x44;
      pfVar17 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar14 = lVar16;
      lVar15 = lVar13;
      do {
        fVar2 = *pfVar17;
        fVar1 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x8c) = *(float *)((int)lVar15 + 0x8c) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar1;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar14 = 2;
      do {
        iVar9 = (int)lVar13;
        iVar10 = (int)lVar16;
        lVar13 = lVar13 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar9 + 0x8c)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar3);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar19,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 12.566371,(float *)(param_1 + 0x48),0x39cde0,
               (float *)(iVar6 + 0x134));
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xc0);
    fVar5 = *(float *)(param_1 + 200);
    dVar19 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar19 == dVar20) {
      uVar4 = *(undefined4 *)(param_1 + 0xcc);
      dVar19 = dVar20;
      dVar21 = dVar20;
    }
    else {
      fVar1 = (float)((double)(DAT_00843028 * mobyutil::g_FrameTime) / dVar19);
      uVar4 = *(undefined4 *)(param_1 + 0xcc);
      dVar21 = (double)(fVar3 * fVar1);
      dVar19 = (double)(fVar5 * fVar1);
      dVar20 = (double)(fVar2 * fVar1);
    }
    *(undefined4 *)((int)puVar7 + 0x7c) = uVar4;
  }
  else {
    fVar3 = param_2[1] - *(float *)(param_1 + 0x14);
    fVar5 = *param_2 - *(float *)(param_1 + 0x10);
    fVar1 = param_2[2] - *(float *)(param_1 + 0x18);
    fVar8 = DAT_0084302c * mobyutil::g_FrameTime;
    *(float *)(puVar7 + 0xe) = fVar5;
    *(float *)((int)puVar7 + 0x74) = fVar3;
    fVar2 = param_2[3];
    *(float *)(puVar7 + 0xf) = fVar1;
    *(float *)((int)puVar7 + 0x7c) = fVar2;
    dVar19 = 0.0;
    fVar2 = SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar3 * fVar3);
    fVar8 = fVar8 / fVar2;
    dVar21 = dVar19;
    if (0.0 - fVar2 < 0.0) {
      dVar21 = (double)(fVar5 * fVar8);
    }
    dVar20 = dVar19;
    if (0.0 - fVar2 < 0.0) {
      dVar20 = (double)(fVar3 * fVar8);
    }
    if (0.0 - fVar2 < 0.0) {
      dVar19 = (double)(fVar1 * fVar8);
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar21 = (double)(fVar5 * fVar8);
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar20 = (double)(fVar3 * fVar8);
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar19 = (double)(fVar1 * fVar8);
    }
  }
  *(float *)(puVar7 + 0xe) = (float)dVar21;
  *(float *)((int)puVar7 + 0x74) = (float)dVar20;
  *(float *)(puVar7 + 0xf) = (float)dVar19;
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,0,param_1,uVar11 - 0x60);
  fVar2 = *(float *)(param_1 + 0x14) - param_2[1];
  fVar3 = *(float *)(param_1 + 0x10) - *param_2;
  fVar5 = *(float *)(param_1 + 0x18) - param_2[2];
  return (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
}



//==== 0039d1c8  ns=mobyupdate_helpers  size=0x140
// sig: undefined M479_0039d1c8(void)
// callers(0): 
// callees(2): 000fcbe8 mobyutil::MB_randRangeFloat; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M479_0039d1c8(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  ushort *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    iVar2 = *(int *)(param_1 + 0x78);
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)(longlong)param_2,(float)(longlong)param_3);
    uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar6 * (double)animationSpeed));
    *(undefined4 *)(iVar2 + 0x13c) = uVar4;
  }
  else {
    puVar5 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    dVar6 = (double)(longlong)param_2;
    dVar8 = (double)(longlong)param_3;
    do {
      if (MobyInstance[*puVar5 & 0x7fff].state < 0x80) {
        pvVar3 = MobyInstance[*puVar5 & 0x7fff].pVar;
        dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar8);
        uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar3 + 0x13c) = uVar4;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 0039d328  ns=mobyupdate_helpers  size=0x880
// sig: undefined M48_0039d328(void)
// callers(1): 0039dbd0 mobyupdate_unsorted::UpdateMoby_48
// callees(11): 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M48_0039d328(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  MobyClass *pMVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar12;
  longlong lVar13;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar21;
  ulonglong unaff_r28;
  ushort *puVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x120;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x26] = in_LR;
  puVar9[0x21] = in_f29;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r31;
  pMVar6 = param_1->pClass;
  puVar9[0x1c] = unaff_r27;
  pvVar7 = param_1->pVar;
  uVar21 = ZEXT48(pvVar7);
  param_1->scale = pMVar6->gScale * DAT_00843010;
  dVar27 = 0.0;
  puVar9[0x1f] = unaff_r30;
  puVar9[0x1e] = unaff_r29;
  puVar9[0x1d] = unaff_r28;
  puVar9[0x1b] = unaff_r26;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar14 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar15 = mobyutil::MB_HandleDamage
                     (param_1,iVar14,uVar21 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\b')) {
    if (param_1->group == 0xff) {
      pvVar8 = param_1->pVar;
      dVar24 = (double)mobyutil::MB_randRangeFloat(300.0,360.0);
      uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
      *(undefined4 *)((int)pvVar8 + 0x13c) = uVar16;
    }
    else {
      puVar22 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
      dVar25 = 300.0;
      dVar24 = 360.0;
      do {
        if (MobyInstance[*puVar22 & 0x7fff].state < 0x80) {
          pvVar8 = MobyInstance[*puVar22 & 0x7fff].pVar;
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar24);
          uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar8 + 0x13c) = uVar16;
        }
        uVar5 = *puVar22;
        puVar22 = puVar22 + 1;
      } while (-1 < (short)uVar5);
    }
    fVar4 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar27) {
      iVar15 = 1;
    }
    uVar16 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar7 + 0x98) = 0x3f000000;
    fVar1 = DAT_00843014;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar7 + 0x90) = uVar16;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 9;
    *(float *)((int)pvVar7 + 0x80) = fVar1 * fVar4;
    fVar4 = mobyutil::g_FrameTime;
    if (iVar15 < 3) {
      if ((-1 < iVar15) && (0 < iVar15)) {
        fVar4 = DAT_00843014 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar7 + 0x80) = fVar4;
        fVar4 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar7 + 0x88) = DAT_00843024 * mobyutil::g_FrameTime;
        fVar1 = DAT_00843020;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar7 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar4);
        dVar26 = ABS((double)fVar1);
        *(float *)(puVar9 + 0x10) = fVar4;
        *(float *)((int)puVar9 + 0x84) = fVar1;
        *(float *)(puVar9 + 0x11) = (float)(dVar25 - dVar26);
        uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar24 = dVar26;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar26 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar12 = uVar11 - 0x110;
          lVar17 = uVar11 - 0x88;
          lVar20 = uVar11 - 0x78;
          lVar23 = 2;
          fVar2 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xa4) = fVar2;
          *(float *)((int)puVar9 + 0x9c) = fVar2;
          *(float *)(puVar9 + 0x14) = fVar2;
          *(float *)(puVar9 + 0x13) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar2;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar2 * fVar2;
            iVar15 = (int)lVar17;
            lVar12 = lVar12 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
            lVar20 = lVar20 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar20 = uVar11 - 0x88;
          pfVar18 = (float *)&DAT_007358e0;
          lVar12 = lVar13;
          lVar17 = lVar20;
          do {
            fVar2 = *pfVar18;
            fVar3 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar2;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
            lVar17 = lVar17 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar12 = 2;
          do {
            iVar15 = (int)lVar13;
            iVar10 = (int)lVar20;
            lVar13 = lVar13 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x98)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar9 + 0x7c) = (float)dVar27;
        uVar16 = *(undefined4 *)(iVar14 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar16;
        uVar16 = *(undefined4 *)(iVar14 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar16;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar11 - 0xa4,uVar21 + 0x88,uVar21 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)((int)puVar9 + 0x7c),param_1,uVar21 + 0x70);
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar15 < 0xb) {
      if (iVar15 < 9) {
        *(float *)((int)pvVar7 + 0x88) = DAT_0084301c * mobyutil::g_FrameTime;
        fVar1 = DAT_00843018;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar7 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar4);
        dVar26 = ABS((double)fVar1);
        *(float *)((int)puVar9 + 0x8c) = fVar4;
        *(float *)(puVar9 + 0x12) = fVar1;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar25 - dVar26);
        uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar24 = dVar26;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar26 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar12 = uVar11 - 0x110;
          lVar17 = uVar11 - 0x68;
          lVar20 = uVar11 - 0x58;
          lVar23 = 2;
          fVar2 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xc4) = fVar2;
          *(float *)((int)puVar9 + 0xbc) = fVar2;
          *(float *)(puVar9 + 0x18) = fVar2;
          *(float *)(puVar9 + 0x17) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar2;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar2 * fVar2;
            iVar15 = (int)lVar17;
            lVar12 = lVar12 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
            lVar20 = lVar20 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar20 = uVar11 - 0x68;
          pfVar18 = (float *)&DAT_007358e0;
          lVar12 = lVar13;
          lVar17 = lVar20;
          do {
            fVar2 = *pfVar18;
            fVar3 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar2;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
            lVar17 = lVar17 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar12 = 2;
          do {
            iVar15 = (int)lVar13;
            iVar10 = (int)lVar20;
            lVar13 = lVar13 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xb8)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar9 + 0xf) = (float)dVar27;
        uVar16 = *(undefined4 *)(iVar14 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar16;
        uVar16 = *(undefined4 *)(iVar14 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar16;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar11 - 0xa8,uVar21 + 0x88,uVar21 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar21 + 0x70);
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar21 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar21 + 0x60);
  fastfunc::FastDecTimerS32(uVar21 + 0x13c);
  iVar14 = *(int *)((int)pvVar7 + 0x13c);
  if (*(int *)((int)pvVar7 + 0x38) != 0) {
    dVar27 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    iVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(int *)((int)pvVar7 + 0x13c) = iVar14;
  }
  *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  if (iVar14 == 0) {
    iVar14 = mobyutil::MB_getTarget((double)*(float *)((int)pvVar7 + 0x124),param_1,0,uVar21 + 0xd0)
    ;
    if ((iVar14 != 2) &&
       (fVar4 = (param_1->pos).y - *(float *)(*(int *)((int)pvVar7 + 0x110) + 0x14),
       fVar1 = (param_1->pos).x - *(float *)(*(int *)((int)pvVar7 + 0x110) + 0x10),
       *(float *)((int)pvVar7 + 0x124) < SQRT(fVar1 * fVar1 + fVar4 * fVar4))) {
      *(undefined4 *)((int)pvVar7 + 0x114) = 2;
    }
  }
  else {
    mobyutil::MB_getTarget(0x4000000000000000,param_1,&DAT_0039d308,uVar21 + 0xd0);
  }
  if (*(int *)((int)pvVar7 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x110) = g_heroMobyPtr;
  }
  return;
}



//==== 0039dbd0  ns=mobyupdate_unsorted  size=0xd24
// sig: undefined UpdateMoby_48(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00113e88 mobyutil::MB_MayaFrameTrigger; 0039cdf0 mobyupdate_helpers::M48_0039cdf0; 0039d328 mobyupdate_helpers::M48_0039d328; 003a01e0 FUN_003a01e0; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 48 */

void mobyupdate_unsorted::UpdateMoby_48(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar23 = uVar17 - 0x180;
  puVar9 = (ulonglong *)lVar23;
  *puVar9 = uVar17;
  puVar9[0x32] = in_LR;
  puVar9[0x2b] = in_f27;
  puVar9[0x2c] = in_f28;
  puVar9[0x2d] = in_f29;
  puVar9[0x2e] = in_f30;
  puVar9[0x2f] = in_f31;
  puVar9[0x2a] = unaff_r31;
  puVar9[0x29] = unaff_r30;
  puVar9[0x28] = unaff_r29;
  pvVar7 = moby->pVar;
  mobyupdate_helpers::M48_0039d328();
  iVar18 = *(int *)((int)pvVar7 + 0x110);
  bVar1 = moby->state;
  dVar28 = (double)(moby->pos).x;
  dVar29 = (double)(moby->pos).y;
  fVar2 = DAT_00969dac;
  fVar4 = DAT_00969da8;
  fVar5 = DAT_00969da4;
  fVar3 = DAT_00969da0;
  if (*(short *)(iVar18 + 0xa6) != 0) {
    fVar2 = *(float *)(iVar18 + 0x1c);
    fVar4 = *(float *)(iVar18 + 0x18);
    fVar5 = *(float *)(iVar18 + 0x14);
    fVar3 = *(float *)(iVar18 + 0x10);
  }
  dVar33 = (double)fVar3;
  dVar32 = (double)fVar5;
  dVar31 = (double)fVar4;
  dVar30 = (double)fVar2;
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      *(undefined1 *)((int)pvVar7 + 0x28) = 2;
      *(undefined4 *)((int)pvVar7 + 0x20) = 0x40400000;
      *(undefined2 *)((int)pvVar7 + 0x24) = 3;
      pSVar8 = Splines[*(int *)((int)pvVar7 + 0x120)];
      *(float *)(puVar9 + 0xe) = pSVar8->points[0].x;
      *(float *)((int)puVar9 + 0x74) = pSVar8->points[0].y;
      fVar2 = pSVar8->points[0].z;
      dVar29 = (double)fVar2;
      *(float *)(puVar9 + 0xf) = fVar2;
      *(float *)((int)puVar9 + 0x7c) = pSVar8->points[0].w;
      dVar28 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar17 - 0x110,0);
      if ((double)(float)(dVar28 + 2.0) < dVar29) {
        *(undefined1 *)((int)pvVar7 + 0x12f) = 1;
      }
      if (*(int *)((int)pvVar7 + 0x128) == 0) {
        moby->state = '\x02';
      }
      else {
        moby->state = '\t';
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
    else if (bVar1 < 2) {
      dVar28 = (double)mobyupdate_helpers::M48_0039cdf0
                                 (moby,ZEXT48(Splines[*(int *)((int)pvVar7 + 0x120)]) + 0x10,1);
      if ((dVar28 < 1.0) && (moby->state = '\x02', moby->animationId != '\0')) {
        puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 300));
      }
    }
    else if (bVar1 < 3) {
      fastfunc::FastDecTimerS32((int)pvVar7 + 0x138);
      if (((*(int *)((int)pvVar7 + 0x114) != 2) && (*(int *)((int)pvVar7 + 0x138) == 0)) &&
         (moby->state = '\x03', moby->animationId != '\x04')) {
        puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar9 + 300));
      }
    }
    else {
      fVar4 = ABS((float)(dVar33 - dVar28));
      fVar3 = ABS((float)(dVar32 - dVar29));
      *(float *)(puVar9 + 0x17) = (float)(dVar33 - dVar28);
      *(float *)((int)puVar9 + 0xbc) = (float)(dVar32 - dVar29);
      *(float *)(puVar9 + 0x18) = fVar4 - fVar3;
      fVar2 = 0.0;
      uVar21 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar9 + 0x17));
      if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)((int)puVar9 + 0xbc));
      if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
        fVar10 = fVar4;
      }
      if (0.0 < fVar5) {
        lVar22 = uVar17 - 0x170;
        lVar24 = uVar17 - 0x7c;
        lVar26 = uVar17 - 0x6c;
        lVar27 = 2;
        fVar4 = (fVar10 - fVar5) / (fVar10 + fVar5);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x22) = fVar4;
        *(float *)(puVar9 + 0x21) = fVar4;
        *(float *)((int)puVar9 + 0x10c) = fVar4;
        *(float *)((int)puVar9 + 0x104) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar5;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar4;
        *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0xf4) * fVar4 * fVar4;
          iVar18 = (int)lVar24;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar17 - 0x7c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0x104) * fVar4;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        do {
          iVar18 = (int)lVar23;
          iVar11 = (int)lVar26;
          lVar23 = lVar23 + 0x10;
          lVar26 = lVar26 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar18 + 0x104) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
      }
      mobyutil::OrganicDeltAng
                (fVar2,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x39dba8,
                 (float *)((int)pvVar7 + 0x134));
      if ((moby->field43_0x70 & 2U) != 0) {
        *(undefined1 *)((int)pvVar7 + 0x12e) = 0;
        moby->state = '\x04';
        if (moby->animationId != '\x05') {
          puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar9 + 300));
        }
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      fVar5 = ABS((float)(dVar33 - dVar28));
      fVar4 = ABS((float)(dVar32 - dVar29));
      *(float *)((int)puVar9 + 0xac) = (float)(dVar33 - dVar28);
      *(float *)(puVar9 + 0x16) = (float)(dVar32 - dVar29);
      *(float *)((int)puVar9 + 0xb4) = fVar5 - fVar4;
      dVar28 = 0.0;
      uVar21 = (ulonglong)(*(uint *)((int)puVar9 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar9 + 0xac));
      if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar9 + 0x16));
      if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      dVar29 = dVar28;
      if (0.0 < fVar2) {
        lVar22 = uVar17 - 0x170;
        lVar24 = uVar17 - 0x9c;
        lVar26 = uVar17 - 0x8c;
        lVar27 = 2;
        fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar9 + 0x1e) = fVar2;
        *(float *)(puVar9 + 0x1d) = fVar2;
        *(float *)((int)puVar9 + 0xec) = fVar2;
        *(float *)((int)puVar9 + 0xe4) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar5;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar2;
        *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar22 + 0xe4) = *(float *)((int)lVar22 + 0xd4) * fVar2 * fVar2;
          iVar18 = (int)lVar24;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar2 * fVar2;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar17 - 0x9c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar24 = lVar26;
        do {
          fVar2 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0xe4) = *(float *)((int)lVar22 + 0xe4) * fVar2;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        do {
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar11 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0xe4)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar4);
      }
      mobyutil::OrganicDeltAng
                ((float)dVar29,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar7 + 0x134));
      iVar18 = mobyutil::MB_MayaFrameTrigger(5.0,moby);
      if (iVar18 == 0) {
        if (((2 < *(byte *)((int)pvVar7 + 0x12e)) && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->state = '\x05', moby->animationId != '\x06')) {
          puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar9 + 300));
        }
      }
      else {
        *(char *)((int)pvVar7 + 0x12e) = *(char *)((int)pvVar7 + 0x12e) + '\x01';
        fVar2 = (moby->transform).v1.y * DAT_00843034;
        fVar4 = (moby->transform).v1.x * DAT_00843034;
        fVar3 = (moby->transform).v0.y * DAT_00843030;
        fVar5 = (moby->transform).v1.z * DAT_00843034;
        fVar6 = (moby->transform).v0.x * DAT_00843030;
        fVar12 = (moby->transform).v2.y * DAT_00843038;
        fVar10 = (moby->transform).v0.z * DAT_00843030;
        fVar13 = (moby->transform).v2.x * DAT_00843038;
        fVar14 = (moby->transform).v2.z * DAT_00843038;
        *(float *)((int)puVar9 + 0x8c) =
             (moby->transform).v2.w * DAT_00843038 +
             (moby->transform).v0.w * DAT_00843030 + (moby->transform).v1.w * DAT_00843034 +
             DAT_0084303c;
        fVar16 = DAT_00843040;
        fVar15 = mobyutil::g_FrameTime;
        fVar2 = fVar12 + fVar3 + fVar2 + (moby->pos).y;
        fVar6 = fVar13 + fVar6 + fVar4 + (moby->pos).x;
        fVar10 = fVar14 + fVar10 + fVar5 + (moby->pos).z;
        fVar4 = (float)(dVar32 - (double)fVar2);
        fVar5 = (float)(dVar33 - (double)fVar6);
        fVar3 = (float)(dVar31 - (double)fVar10);
        *(float *)(puVar9 + 0x10) = fVar6;
        *(float *)((int)puVar9 + 0x84) = fVar2;
        *(float *)(puVar9 + 0x11) = fVar10;
        *(float *)(puVar9 + 0x12) = fVar5;
        *(float *)((int)puVar9 + 0x94) = fVar4;
        *(float *)(puVar9 + 0x13) = fVar3;
        *(float *)((int)puVar9 + 0x9c) = (float)dVar30;
        dVar30 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar2 = (float)((double)(fVar16 * fVar15) / dVar30);
        dVar29 = dVar28;
        if (dVar28 - dVar30 < 0.0) {
          dVar29 = (double)(fVar5 * fVar2);
        }
        dVar31 = dVar28;
        if (dVar28 - dVar30 < 0.0) {
          dVar31 = (double)(fVar4 * fVar2);
        }
        dVar32 = dVar28;
        if (dVar28 - dVar30 < 0.0) {
          dVar32 = (double)(fVar3 * fVar2);
        }
        if (dVar30 - dVar28 < 0.0) {
          dVar29 = (double)(fVar5 * fVar2);
        }
        if (dVar30 - dVar28 < 0.0) {
          dVar31 = (double)(fVar4 * fVar2);
        }
        if (dVar30 - dVar28 < 0.0) {
          dVar32 = (double)(fVar3 * fVar2);
        }
        *(float *)(puVar9 + 0x12) = (float)dVar29;
        *(float *)((int)puVar9 + 0x94) = (float)dVar31;
        *(float *)(puVar9 + 0x13) = (float)dVar32;
        FUN_003a01e0(moby,uVar17 - 0xf0,uVar17 - 0x100);
      }
    }
    else if (bVar1 < 6) {
      fVar4 = ABS((float)(dVar33 - dVar28));
      fVar3 = ABS((float)(dVar32 - dVar29));
      *(float *)(puVar9 + 0x14) = (float)(dVar33 - dVar28);
      *(float *)((int)puVar9 + 0xa4) = (float)(dVar32 - dVar29);
      *(float *)(puVar9 + 0x15) = fVar4 - fVar3;
      fVar2 = 0.0;
      uVar21 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar9 + 0x14));
      if (*(float *)(puVar9 + 0x15) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)((int)puVar9 + 0xa4));
      if (*(float *)(puVar9 + 0x15) - 0.0 < 0.0) {
        fVar10 = fVar4;
      }
      if (0.0 < fVar5) {
        lVar22 = uVar17 - 0x170;
        lVar26 = uVar17 - 0xac;
        lVar24 = uVar17 - 0xbc;
        lVar27 = 2;
        fVar4 = (fVar10 - fVar5) / (fVar10 + fVar5);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x1a) = fVar4;
        *(float *)(puVar9 + 0x19) = fVar4;
        *(float *)((int)puVar9 + 0xcc) = fVar4;
        *(float *)((int)puVar9 + 0xc4) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar5;
        *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar4;
        *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar22 + 0xc4) = *(float *)((int)lVar22 + 0xb4) * fVar4 * fVar4;
          iVar18 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar17 - 0xbc;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0xc4) = *(float *)((int)lVar22 + 0xc4) * fVar4;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        do {
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar11 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar18 + 0xc4) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
      }
      mobyutil::OrganicDeltAng
                (fVar2,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar7 + 0x134));
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x06';
        if (moby->animationId != '\x02') {
          puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar9 + 300));
        }
        *(ushort *)((int)pvVar7 + 300) = *(short *)((int)pvVar7 + 300) + 1U & 1;
        dVar28 = (double)mobyutil::MB_randRangeFloat(60.0,90.0);
        uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar7 + 0x138) = uVar19;
      }
    }
    else {
      dVar28 = (double)mobyupdate_helpers::M48_0039cdf0
                                 (moby,Splines[*(int *)((int)pvVar7 + 0x120)]->points +
                                       *(short *)((int)pvVar7 + 300),
                                  *(undefined1 *)((int)pvVar7 + 0x12f));
      fastfunc::FastDecTimerS32((int)pvVar7 + 0x138);
      if (((dVar28 < 1.0) || (*(int *)((int)pvVar7 + 0x138) == 0)) &&
         (moby->state = '\x02', moby->animationId != '\0')) {
        puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 300));
      }
    }
  }
  else if (bVar1 < 8) {
    uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar20 & 0x40) == 0) {
      if ((uVar20 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x02';
      if (moby->animationId != '\0') {
        puVar9[0x25] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 300));
      }
    }
  }
  else if ((bVar1 < 9) &&
          (uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70)),
          (uVar20 & 0x160) != 0)) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0039e8f4  ns=Global  size=0x54
// sig: undefined FUN_0039e8f4(void)
// callers(1): 00398ed8 mobyupdate_unsorted::UpdateMoby_47
// callees(0): 

void FUN_0039e8f4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\t') {
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = param_2[1];
    *(undefined4 *)(param_1 + 0x18) = param_2[2];
    uVar1 = param_2[3];
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  }
  return;
}



//==== 0039e948  ns=mobyupdate_helpers  size=0x14
// sig: undefined M481_0039e948(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M481_0039e948(void)

{
  DAT_00843090 = 0x10000;
  return;
}



//==== 0039e9a8  ns=mobyupdate_unsorted  size=0x328
// sig: undefined UpdateMoby_481(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00112900 mobyutil::MB_GetOrientation; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots

/* Moby 481 */

void mobyupdate_unsorted::UpdateMoby_481(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  longlong lVar7;
  ulonglong uVar8;
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
  double dVar20;
  Vec4 local_90;
  
  pvVar2 = moby->pVar;
  uVar10 = ZEXT48(pvVar2);
  dVar15 = (double)(moby->pos).x;
  dVar16 = (double)(moby->pos).y;
  dVar17 = (double)(moby->pos).z;
  if (pvVar2 == (void *)0x0) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    if (moby->state == 0) {
      dVar11 = (double)mobyutil::MB_randRangeFloat(0.5,0.8);
      moby->unk58 = (float)dVar11;
      fVar1 = (moby->pos).z;
      iVar9 = 0;
      moby->state = '\x01';
      *(float *)((int)pvVar2 + 0x220) = fVar1 + 15.0;
      moby->updateDistance = -1;
      *(undefined2 *)((int)pvVar2 + 0x3e) = 0xd;
      do {
        dVar11 = (double)mobyutil::MB_randRot();
        iVar9 = iVar9 + 1;
        *(float *)((int)uVar10 + 0x224) = (float)dVar11;
        uVar10 = uVar10 + 4;
      } while (iVar9 < 3);
    }
    else if (moby->state < 2) {
      dVar11 = (double)mobyfunc::BlendAnimFrame(moby);
      dVar11 = (double)fastfunc::FastAddRots((float)(dVar11 * 6.2831854820251465) * 0.008474576);
      fVar1 = (float)(dVar11 + 1.570796251296997);
      uVar8 = 0;
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar13 = 0.75;
      dVar14 = 0.0;
      dVar18 = 0.01745329238474369;
      dVar19 = 0.029999999329447746;
      dVar20 = 0.30000001192092896;
      fVar1 = fVar4 * fVar4;
      fVar3 = fVar1 * fVar1 * fVar4;
      fVar5 = fVar1 * fVar3;
      dVar11 = (double)(fVar1 * fVar5 * 2.601887e-06 +
                       fVar5 * -0.0001980741 +
                       fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4);
      do {
        pfVar6 = (float *)((int)pvVar2 + (int)((uVar8 & 0xffffffff) << 2) + 0x224);
        dVar12 = (double)fastfunc::FastWrapRot
                                   (*pfVar6,(float)((double)DAT_008430c0 * dVar18) *
                                            mobyutil::g_FrameTime);
        lVar7 = (uVar8 & 0x1ffffff) * 0x80;
        *pfVar6 = (float)dVar12;
        *(float *)((int)pvVar2 + (int)lVar7 + 0x108) = (float)dVar12;
        mobyutil::MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * dVar19),
                   (double)(float)((double)DAT_0071f40c * dVar20),(longlong)(int)moby,
                   lVar7 + uVar10 + 0xa0 & 0xffffffff,uVar8);
        iVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)iVar9;
      } while (iVar9 < 3);
      iVar9 = *(int *)((int)pvVar2 + 0x230);
      if (iVar9 == -1) {
        dVar14 = 15.0;
      }
      else if (MobyInstance[iVar9].oClass == BOLT_CRANK) {
                    /* WARNING: Load size is inaccurate */
        dVar14 = (double)(*MobyInstance[iVar9].pVar * 15.0);
      }
      (moby->pos).z =
           (float)((double)(float)(dVar11 * dVar13 + (double)*(float *)((int)pvVar2 + 0x220)) -
                  dVar14);
    }
    lVar7 = (longlong)(int)moby + 0x40;
    local_90.x = (float)((double)(moby->pos).x - dVar15);
    local_90.y = (float)((double)(moby->pos).y - dVar16);
    local_90.w = (moby->pos).w;
    local_90.z = (float)((double)(moby->pos).z - dVar17);
    mobyutil::MB_GetOrientation((MobyInstance *)((int)pvVar2 + 0x60),&local_90,lVar7,lVar7);
  }
  return;
}



//==== 0039ecd0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M482_0039ecd0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M482_0039ecd0(void)

{
  DAT_00843110 = 0x10000;
  return;
}



//==== 0039ece8  ns=mobyupdate_unsorted  size=0x24
// sig: undefined UpdateMoby_482(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 482 */

void mobyupdate_unsorted::UpdateMoby_482(MobyInstance *moby)

{
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0039ed0c  ns=mobyupdate_unsorted  size=0x24
// sig: undefined UpdateMoby_484(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 484 */

void mobyupdate_unsorted::UpdateMoby_484(MobyInstance *moby)

{
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0039ed30  ns=mobyupdate_helpers  size=0x14
// sig: undefined M487_0039ed30(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M487_0039ed30(void)

{
  DAT_0084318c = 0x10000;
  return;
}



//==== 0039ed48  ns=Global  size=0xe4
// sig: undefined FUN_0039ed48(void)
// callers(1): 0038b850 mobyupdate_unsorted::UpdateMoby_456
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_0039ed48(undefined4 *param_1,f32 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = mobyfunc::CreateMoby(0x1e7);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->drawDistance = 0xff;
    puVar2 = (undefined4 *)pMVar4->pVar;
    uVar3 = g_heroMobyPtr->light;
    pMVar4->color = g_heroMobyPtr->color;
    pMVar4->light = uVar3;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    uVar1 = param_1[3];
    puVar2[4] = param_3;
    puVar2[3] = uVar1;
    pMVar4->state = '\x01';
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 0039ee38  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M487_0039ee38(void)
// callers(1): 0039ef28 mobyupdate_unsorted::UpdateMoby_487
// callees(0): 

void mobyupdate_helpers::M487_0039ee38(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_00969de8;
  fVar5 = DAT_00969de4;
  pfVar1 = *(float **)(param_1 + 0x78);
  fVar2 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
  fVar3 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
  fVar4 = *(float *)(param_1 + 0x18) - g_heroPosition.z;
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) /
          (SQRT(pfVar1[2] * pfVar1[2] + *pfVar1 * *pfVar1 + pfVar1[1] * pfVar1[1]) + 1e-05);
  *param_2 = DAT_00969de0 * fVar2 + g_heroPosition.x;
  param_2[1] = fVar5 * fVar2 + g_heroPosition.y;
  fVar2 = fVar6 * fVar2 + g_heroPosition.z;
  param_2[2] = fVar2;
  param_2[3] = g_heroPosition.w;
  fVar2 = fVar2 + 0.75;
  param_2[2] = fVar2;
  if (fVar2 < DAT_00969f88) {
    param_2[2] = DAT_00969f88;
  }
  return;
}



//==== 0039ef28  ns=mobyupdate_unsorted  size=0xa6c
// sig: undefined UpdateMoby_487(MobyInstance * moby)
// callers(0): 
// callees(11): 00055ac0 stub::STUB_00055ac0_RET_0; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010581c mobyutil::SetCollDamIn; 00105c08 mobyutil::CollDamageMobyDirect; 0010e030 mobyutil::MB_genericExplosion; 00121740 partupd::SpawnPart_4; 0039ee38 mobyupdate_helpers::M487_0039ee38; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

/* Moby 487 */

void mobyupdate_unsorted::UpdateMoby_487(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *impact;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar18;
  undefined8 uVar17;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  float fVar23;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar35;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar24 = uVar14 - 0x1f0;
  puVar9 = (ulonglong *)lVar24;
  *puVar9 = uVar14;
  puVar9[0x40] = in_LR;
  puVar9[0x3b] = in_f29;
  puVar9[0x3c] = in_f30;
  puVar9[0x3d] = in_f31;
  puVar9[0x3a] = unaff_r31;
  bVar1 = moby->state;
  puVar9[0x39] = unaff_r30;
  impact = (float *)moby->pVar;
  puVar9[0x38] = unaff_r29;
  puVar9[0x37] = unaff_r28;
  puVar9[0x36] = unaff_r27;
  puVar9[0x35] = unaff_r26;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return;
    }
    mobyupdate_helpers::M487_0039ee38(lVar15,uVar14 - 0x130);
    fVar7 = *(float *)((int)puVar9 + 0xc4) - (moby->pos).y;
    fVar5 = *(float *)(puVar9 + 0x18) - (moby->pos).x;
    fVar3 = *(float *)(puVar9 + 0x19) - (moby->pos).z;
    fVar2 = DAT_0084212c * mobyutil::g_FrameTime;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)((int)puVar9 + 0xc4) = fVar7;
    *(float *)(puVar9 + 0x19) = fVar3;
    fVar23 = 0.0;
    fVar10 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar7 * fVar7);
    fVar4 = DAT_00842130 * DAT_0071f418;
    fVar2 = fVar2 / fVar10;
    fVar6 = fVar23;
    if (0.0 - fVar10 < 0.0) {
      fVar6 = fVar5 * fVar2;
    }
    fVar12 = fVar23;
    if (0.0 - fVar10 < 0.0) {
      fVar12 = fVar7 * fVar2;
    }
    fVar11 = fVar23;
    if (0.0 - fVar10 < 0.0) {
      fVar11 = fVar3 * fVar2;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar6 = fVar5 * fVar2;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar12 = fVar7 * fVar2;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar11 = fVar3 * fVar2;
    }
    *(float *)(puVar9 + 0x18) = fVar6;
    *(float *)((int)puVar9 + 0xc4) = fVar12;
    *(float *)(puVar9 + 0x19) = fVar11;
    fVar6 = fVar6 - *impact;
    *(float *)(puVar9 + 0x18) = fVar6;
    fVar12 = fVar12 - impact[1];
    *(float *)((int)puVar9 + 0xc4) = fVar12;
    fVar11 = fVar11 - impact[2];
    *(float *)(puVar9 + 0x19) = fVar11;
    fVar5 = SQRT(fVar11 * fVar11 + fVar6 * fVar6 + fVar12 * fVar12);
    fVar4 = fVar4 / fVar5;
    fVar7 = fVar23;
    if (0.0 - fVar5 < 0.0) {
      fVar7 = fVar12 * fVar4;
    }
    fVar3 = fVar23;
    if (0.0 - fVar5 < 0.0) {
      fVar3 = fVar6 * fVar4;
    }
    fVar2 = fVar23;
    if (0.0 - fVar5 < 0.0) {
      fVar2 = fVar11 * fVar4;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar7 = fVar12 * fVar4;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar3 = fVar6 * fVar4;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar2 = fVar11 * fVar4;
    }
    *(float *)((int)puVar9 + 0xc4) = fVar7;
    *(float *)(puVar9 + 0x18) = fVar3;
    *(float *)(puVar9 + 0x19) = fVar2;
    fVar3 = *impact + fVar3;
    *impact = fVar3;
    fVar4 = impact[1] + *(float *)((int)puVar9 + 0xc4);
    impact[1] = fVar4;
    impact[2] = impact[2] + *(float *)(puVar9 + 0x19);
    fVar7 = g_heroPosition.x - (moby->pos).x;
    fVar6 = g_heroPosition.y - (moby->pos).y;
    fVar5 = ABS(fVar7);
    fVar2 = ABS(fVar6);
    *(float *)(puVar9 + 0x24) = fVar7;
    *(float *)((int)puVar9 + 0x124) = fVar6;
    *(float *)(puVar9 + 0x25) = fVar5 - fVar2;
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x24) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x25) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x124) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar9 + 0x24));
    if (*(float *)(puVar9 + 0x25) - 0.0 < 0.0) {
      fVar7 = fVar2;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x124));
    if (*(float *)(puVar9 + 0x25) - 0.0 < 0.0) {
      fVar10 = fVar5;
    }
    fVar5 = fVar23;
    if (0.0 < fVar7) {
      lVar16 = uVar14 - 0x1e0;
      lVar19 = uVar14 - 0x84;
      lVar21 = uVar14 - 0x74;
      lVar25 = 2;
      fVar7 = (fVar10 - fVar7) / (fVar10 + fVar7);
      fVar5 = fVar7 * fVar7;
      *(float *)(puVar9 + 0x2f) = fVar7;
      *(float *)(puVar9 + 0x2e) = fVar7;
      *(float *)((int)puVar9 + 0x174) = fVar7;
      *(float *)((int)puVar9 + 0x16c) = fVar7;
      fVar7 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x2e) = *(float *)(puVar9 + 0x2e) * fVar5;
      *(float *)((int)puVar9 + 0x174) = *(float *)((int)puVar9 + 0x174) * fVar7;
      *(float *)(puVar9 + 0x2f) = *(float *)(puVar9 + 0x2f) * fVar7 * fVar5;
      do {
        *(float *)((int)lVar16 + 0x16c) = *(float *)((int)lVar16 + 0x15c) * fVar7 * fVar7;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar21 = uVar14 - 0x84;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar24;
      lVar19 = lVar21;
      do {
        fVar7 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0x16c) = *(float *)((int)lVar16 + 0x16c) * fVar7;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar19 = 2;
      lVar16 = lVar24;
      fVar7 = fVar23;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar13 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        fVar7 = fVar7 + *(float *)(iVar18 + 0x16c) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar5 = (fVar7 + 0.7853982) * fVar6 + fVar2;
    }
    *(float *)((int)puVar9 + 0x114) = fVar3;
    *(float *)(puVar9 + 0x23) = fVar4;
    *(float *)((int)puVar9 + 0x11c) = ABS(fVar3) - ABS(fVar4);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x114) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x11c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x23) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)((int)puVar9 + 0x114));
    if (*(float *)((int)puVar9 + 0x11c) - 0.0 < 0.0) {
      fVar7 = ABS(fVar4);
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar4 = ABS(*(float *)(puVar9 + 0x23));
    if (*(float *)((int)puVar9 + 0x11c) - 0.0 < 0.0) {
      fVar4 = ABS(fVar3);
    }
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (0.0 < fVar7) {
      lVar16 = uVar14 - 0x1e0;
      lVar21 = uVar14 - 0x94;
      lVar19 = uVar14 - 0xa4;
      lVar25 = 2;
      fVar7 = (fVar4 - fVar7) / (fVar4 + fVar7);
      fVar4 = fVar7 * fVar7;
      *(float *)(puVar9 + 0x2b) = fVar7;
      *(float *)(puVar9 + 0x2a) = fVar7;
      *(float *)((int)puVar9 + 0x154) = fVar7;
      *(float *)((int)puVar9 + 0x14c) = fVar7;
      fVar7 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar4;
      *(float *)((int)puVar9 + 0x154) = *(float *)((int)puVar9 + 0x154) * fVar7;
      *(float *)(puVar9 + 0x2b) = *(float *)(puVar9 + 0x2b) * fVar7 * fVar4;
      do {
        *(float *)((int)lVar16 + 0x14c) = *(float *)((int)lVar16 + 0x13c) * fVar7 * fVar7;
        iVar18 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar21 = uVar14 - 0xa4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar24;
      lVar19 = lVar21;
      do {
        fVar7 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0x14c) = *(float *)((int)lVar16 + 0x14c) * fVar7;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar19 = 2;
      lVar16 = lVar24;
      do {
        iVar18 = (int)lVar16;
        iVar13 = (int)lVar21;
        lVar16 = lVar16 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar23 = fVar23 + *(float *)(iVar18 + 0x14c) + *(float *)(iVar13 + 4) +
                 *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar23 = (fVar23 + 0.7853982) * fVar2 + fVar3;
    }
    dVar26 = (double)fastfunc::FastSubRots(fVar5,fVar23);
    if (1.5707963705062866 < dVar26) {
      moby->state = '\x02';
    }
  }
  else if (2 < bVar1) {
    if (3 < bVar1) {
      return;
    }
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar15,impact,lVar15 + 0x10,1,0xffffffffffffffff,5,2,4);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  (moby->pos).x = (moby->pos).x + *impact;
  (moby->pos).y = (moby->pos).y + impact[1];
  (moby->pos).z = (moby->pos).z + impact[2];
  fVar23 = *impact;
  fVar7 = impact[1];
  fVar3 = ABS(*impact);
  fVar5 = ABS(impact[1]);
  *(float *)(puVar9 + 0x22) = fVar3 - fVar5;
  dVar26 = 0.0;
  uVar20 = (ulonglong)((uint)fVar23 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x22) >> 0x1e) & 2 | (ulonglong)((uint)fVar7 >> 0x1d) & 4;
  fVar23 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar7 = fVar3;
  if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
    fVar7 = fVar5;
  }
  if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar27 = dVar26;
  if (0.0 < fVar7) {
    lVar16 = uVar14 - 0x1e0;
    lVar21 = uVar14 - 0xb4;
    lVar19 = uVar14 - 0xc4;
    lVar25 = 2;
    fVar7 = (fVar5 - fVar7) / (fVar5 + fVar7);
    fVar5 = fVar7 * fVar7;
    *(float *)(puVar9 + 0x27) = fVar7;
    *(float *)(puVar9 + 0x26) = fVar7;
    *(float *)((int)puVar9 + 0x134) = fVar7;
    *(float *)((int)puVar9 + 300) = fVar7;
    fVar7 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar5;
    *(float *)((int)puVar9 + 0x134) = *(float *)((int)puVar9 + 0x134) * fVar7;
    *(float *)(puVar9 + 0x27) = *(float *)(puVar9 + 0x27) * fVar7 * fVar5;
    do {
      *(float *)((int)lVar16 + 300) = *(float *)((int)lVar16 + 0x11c) * fVar7 * fVar7;
      iVar18 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar7 * fVar7;
      lVar21 = lVar21 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar21 = uVar14 - 0xc4;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar24;
    lVar19 = lVar21;
    do {
      fVar7 = *pfVar22;
      fVar5 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 300) = *(float *)((int)lVar16 + 300) * fVar7;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar24;
      iVar13 = (int)lVar21;
      lVar24 = lVar24 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 300)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar23 + fVar3);
  }
  (moby->rotation).z = (float)dVar27;
  dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 12.566371);
  (moby->rotation).x = (float)dVar27;
  *(undefined4 *)(puVar9 + 0x1a) = 0;
  *(undefined4 *)((int)puVar9 + 0xd4) = 0;
  *(undefined4 *)(puVar9 + 0x1b) = 0;
  *(undefined4 *)((int)puVar9 + 0xdc) = 0;
  dVar34 = -1.0;
  dVar35 = 1.0;
  dVar27 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
  *(float *)(puVar9 + 0x1a) = (float)dVar27;
  dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar35);
  *(float *)((int)puVar9 + 0xd4) = (float)dVar27;
  dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar35);
  dVar29 = (double)*(float *)((int)puVar9 + 0xd4);
  dVar31 = (double)*(float *)(puVar9 + 0x1a);
  *(float *)(puVar9 + 0x1b) = (float)dVar34;
  lVar24 = lVar15 + 0x10;
  dVar32 = (double)SQRT((float)(dVar34 * dVar34 +
                               (double)(float)(dVar31 * dVar31 + (double)(float)(dVar29 * dVar29))))
  ;
  dVar33 = (double)(float)((double)(mobyutil::g_FrameTime * 0.25) / dVar32);
  dVar27 = dVar26;
  if (dVar26 - dVar32 < 0.0) {
    dVar27 = (double)(float)(dVar31 * dVar33);
  }
  dVar30 = dVar26;
  if (dVar26 - dVar32 < 0.0) {
    dVar30 = (double)(float)(dVar29 * dVar33);
  }
  dVar28 = dVar26;
  if (dVar26 - dVar32 < 0.0) {
    dVar28 = (double)(float)(dVar34 * dVar33);
  }
  if (dVar32 - dVar26 < 0.0) {
    dVar27 = (double)(float)(dVar31 * dVar33);
  }
  if (dVar32 - dVar26 < 0.0) {
    dVar30 = (double)(float)(dVar29 * dVar33);
  }
  if (dVar32 - dVar26 < 0.0) {
    dVar28 = (double)(float)(dVar34 * dVar33);
  }
  *(float *)(puVar9 + 0x1a) = (float)dVar27;
  *(float *)((int)puVar9 + 0xd4) = (float)dVar30;
  *(float *)(puVar9 + 0x1b) = (float)dVar28;
  iVar18 = mobyutil::MB_randRange(0x1e,0x2d);
  puVar9[0x32] = (longlong)iVar18;
  dVar27 = 0.5;
  puVar9[0x32] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar9[0x32] + 0.5));
  uVar8 = *(undefined4 *)((int)puVar9 + 0x194);
  uVar17 = mobyutil::MB_randRange(0x28,0x46);
  partupd::SpawnPart_4(lVar24,uVar14 - 0x120,0x6f00afff,0xff,uVar8,0x28,uVar17,1);
  iVar18 = mobyutil::MB_randRange(0x3c,0x78);
  puVar9[0x32] = (longlong)iVar18;
  puVar9[0x32] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar9[0x32] + dVar27));
  uVar8 = *(undefined4 *)((int)puVar9 + 0x194);
  uVar17 = mobyutil::MB_randRange(100,0x96);
  partupd::SpawnPart_4(lVar24,uVar14 - 0x120,0x1fffffff,0x4f4f4f,uVar8,0x28,uVar17,0);
  mobyutil::SetCollDamIn(dVar26,uVar14 - 0x110,lVar15,0);
  fVar23 = impact[4];
  iVar18 = stub::STUB_00055ac0_RET_0(lVar24,0x80,0,fVar23,uVar14 - 0x110);
  if (iVar18 != 0) {
    if (CollOutput.pMoby != (MobyInstance *)0x0) {
      mobyutil::CollDamageMobyDirect
                ((float)dVar35,CollOutput.pMoby,moby,0x10001,(int)fVar23,&CollOutput.ip.x,impact);
    }
    moby->state = '\x03';
  }
  return;
}



//==== 0039f994  ns=mobyupdate_helpers  size=0x14
// sig: undefined M487_0039f994(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M487_0039f994(void)

{
  DAT_0084323c = 0x10000;
  return;
}



//==== 0039f9a8  ns=mobyupdate_helpers  size=0x238
// sig: undefined M487_0039f9a8(void)
// callers(0): 
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M487_0039f9a8(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  mobyutil::MB_randSphere
            ((double)(DAT_00843288 * mobyutil::g_FrameTime),
             (double)(DAT_00843288 * mobyutil::g_FrameTime),local_50);
  mobyutil::MB_randSphere
            ((double)(DAT_0084328c * mobyutil::g_FrameTime),
             (double)(DAT_0084328c * mobyutil::g_FrameTime),local_50);
  dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_00843270,DAT_00843274);
  uVar1 = fastfunc::FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_00843278,DAT_0084327c);
  uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_00843280,DAT_00843284);
  uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  partupd::SpawnPart_2(param_1 + 0x10,local_40,local_30,DAT_00843260,DAT_00843264,uVar1,uVar2,uVar3)
  ;
  return;
}



//==== 0039fbe8  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M487_0039fbe8(void)
// callers(0): 
// callees(1): 001d4d88 FUN_001d4d88

void mobyupdate_helpers::M487_0039fbe8(longlong param_1)

{
  FUN_001d4d88((double)DAT_00843298,param_1,param_1 + 0x10,&DAT_00a15d30,DAT_008432a0 & 0xff,
               (int)(animationSpeed * ((float)(longlong)DAT_0084329c + 0.5)),DAT_008432a4 & 0xff,
               DAT_008432a8 & 0xff,DAT_010c9258 & 0xff);
  return;
}



//==== 0039fcb8  ns=mobyupdate_unsorted  size=0x514
// sig: undefined UpdateMoby_49(MobyInstance * moby)
// callers(0): 
// callees(12): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0010581c mobyutil::SetCollDamIn; 001206e8 partupd::SpawnPart_2; 0015d204 sound::sound_MobyPlay_oClass; 001d4d88 FUN_001d4d88; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 49 */

void mobyupdate_unsorted::UpdateMoby_49(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar12;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar13;
  undefined8 uVar14;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 auStack_70 [72];
  
  lVar9 = (longlong)(int)moby;
  pfVar8 = (float *)moby->pVar;
  if ((pfVar8[4] == 0.0) &&
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 15.0)) {
    sound::sound_MobyPlay_oClass(9,0,moby,0x27e);
    pfVar8[4] = 1.4013e-45;
  }
  if (moby->state == '\0') {
    dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 6.2831855);
    (moby->rotation).x = (float)dVar13;
    fVar1 = (moby->pos).x;
    fVar2 = *pfVar8;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar5 = (moby->pos).w;
    fVar6 = pfVar8[1];
    fVar7 = pfVar8[2];
    uVar14 = 0x3ff0000000000000;
    if ((g_heroType == '\x02') && (iVar12 = mobyutil::MB_randInt(5), iVar12 != 0)) {
      uVar14 = 0;
    }
    mobyutil::SetCollDamIn(uVar14,auStack_70,lVar9,0x10003);
    iVar12 = collproc::CollLine(local_b0,local_c0,0x10,lVar9,auStack_70);
    if (((iVar12 == 0) && (iVar12 = fastfunc::FastDecTimerS32(pfVar8 + 5), iVar12 == 0)) ||
       (CollOutput.pMoby == (MobyInstance *)pfVar8[6])) {
      (moby->pos).x = fVar1 + fVar2;
      (moby->pos).y = fVar3 + fVar6;
      (moby->pos).z = fVar4 + fVar7;
      (moby->pos).w = fVar5;
      mobyutil::MB_randSphere
                ((double)(DAT_00843288 * mobyutil::g_FrameTime),
                 (double)(DAT_00843288 * mobyutil::g_FrameTime),local_a0);
      mobyutil::MB_randSphere
                ((double)(DAT_0084328c * mobyutil::g_FrameTime),
                 (double)(DAT_0084328c * mobyutil::g_FrameTime),local_a0);
      dVar13 = (double)mobyutil::MB_randRangeFloat(DAT_00843270,DAT_00843274);
      uVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
      dVar13 = (double)mobyutil::MB_randRangeFloat(DAT_00843278,DAT_0084327c);
      uVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
      dVar13 = (double)mobyutil::MB_randRangeFloat(DAT_00843280,DAT_00843284);
      uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
      partupd::SpawnPart_2
                (lVar9 + 0x10,local_90,local_80,DAT_00843260,DAT_00843264,uVar14,uVar10,uVar11);
    }
    else {
      sound::sound_MobyPlay_oClass(8,0,moby,0x27e);
      FUN_001d4d88((double)DAT_00843298,lVar9,lVar9 + 0x10,&DAT_00a15d30,DAT_008432a0 & 0xff,
                   (int)(animationSpeed * ((float)(longlong)DAT_0084329c + 0.5)),DAT_008432a4 & 0xff
                   ,DAT_008432a8 & 0xff,DAT_010c9258 & 0xff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



