//==== 002d0610  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1888(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1888 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1888(MobyInstance *moby)

{
  return moby;
}



//==== 002d0630  ns=mobyupdate_helpers  size=0x624
// sig: undefined M1888_002d0630(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance *
mobyupdate_helpers::M1888_002d0630
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  MobyInstance *pMVar17;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  float *pfVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  f32 fStack00000030;
  f32 fStack00000034;
  f32 fStack00000038;
  f32 fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x140;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x2a] = in_LR;
  puVar10[0x21] = in_f25;
  puVar10[0x22] = in_f26;
  puVar10[0x23] = in_f27;
  puVar10[0x24] = in_f28;
  puVar10[0x25] = in_f29;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x20] = unaff_r31;
  puVar10[0x1e] = unaff_r29;
  puVar10[0x1f] = unaff_r30;
  puVar10[0x1d] = unaff_r28;
  _fStack00000030 = param_1;
  _fStack00000038 = param_2;
  _fStack00000048 = param_4;
  pMVar17 = mobyfunc::CreateMoby(0xbd);
  if (pMVar17 != (MobyInstance *)0x0) {
    pMVar17->updateDistance = '\x7f';
    pMVar17->drawDistance = 0x7f;
    pMVar17->enabled = '\x01';
    fStack00000044 = (float)param_3;
    pfVar8 = (float *)pMVar17->pVar;
    fStack00000040 = (float)(param_3 >> 0x20);
    fVar5 = ABS(fStack00000044);
    fVar7 = ABS(fStack00000040);
    uVar18 = (param_3 << 0x20) >> 0x3d & 4;
    pMVar17->scale = pMVar17->scale * 0.1;
    *(float *)(puVar10 + 0xf) = fVar7 - fVar5;
    fVar1 = 0.0;
    uVar21 = ((param_3 >> 0x20) << 0x20) >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 | uVar18;
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar4 = fVar7;
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar3 = fVar5;
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    fVar11 = fVar1;
    if (0.0 < fVar4) {
      lVar15 = uVar14 - 0x130;
      lVar20 = uVar14 - 0x74;
      lVar19 = uVar14 - 0x84;
      lVar23 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar10 + 0x19) = fVar4;
      *(float *)(puVar10 + 0x18) = fVar4;
      *(float *)((int)puVar10 + 0xc4) = fVar4;
      *(float *)((int)puVar10 + 0xbc) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar3;
      *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar4;
      *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar15 + 0xbc) = *(float *)((int)lVar15 + 0xac) * fVar4 * fVar4;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar20 = uVar14 - 0x84;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar20;
      do {
        fVar4 = *pfVar22;
        fVar3 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0xbc) = *(float *)((int)lVar15 + 0xbc) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      fVar4 = fVar1;
      do {
        iVar12 = (int)lVar15;
        iVar13 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar12 + 0xbc) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar11 = (fVar4 + 0.7853982) * fVar6 + fVar2;
    }
    (pMVar17->rotation).x = fVar11;
    *(float *)((int)puVar10 + 0x74) = fVar7 - fVar5;
    uVar18 = ((param_3 >> 0x20) << 0x20) >> 0x3c & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1e) & 2 | uVar18;
    fVar6 = fVar7;
    if (*(float *)((int)puVar10 + 0x74) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar10 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar7;
    }
    fVar7 = fVar1;
    if (0.0 < fVar6) {
      lVar15 = uVar14 - 0x130;
      lVar19 = uVar14 - 0xa4;
      lVar20 = uVar14 - 0x94;
      lVar23 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x15) = fVar6;
      *(float *)(puVar10 + 0x14) = fVar6;
      *(float *)((int)puVar10 + 0xa4) = fVar6;
      *(float *)((int)puVar10 + 0x9c) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5;
      *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar6;
      *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x8c) * fVar6 * fVar6;
        iVar12 = (int)lVar19;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar20 = uVar14 - 0xa4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar20;
      do {
        fVar6 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x9c) * fVar6;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      fVar6 = fVar1;
      do {
        iVar12 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar13 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar12 + 0x9c) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar7 = (fVar6 + 0.7853982) * fVar2 + fVar4;
    }
    fVar4 = ABS(fStack00000040);
    (pMVar17->rotation).y = fVar7;
    fVar5 = ABS(fStack00000044);
    *(float *)(puVar10 + 0xe) = fVar4 - fVar5;
    uVar18 = (ulonglong)((uint)fStack00000040 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1e) & 2 |
             (ulonglong)((uint)fStack00000044 >> 0x1d) & 4;
    fVar6 = fVar4;
    if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar6) {
      lVar15 = uVar14 - 0x130;
      lVar20 = uVar14 - 0xb4;
      lVar19 = uVar14 - 0xc4;
      lVar23 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x11) = fVar6;
      *(float *)(puVar10 + 0x10) = fVar6;
      *(float *)((int)puVar10 + 0x84) = fVar6;
      *(float *)((int)puVar10 + 0x7c) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar5;
      *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar6;
      *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x6c) * fVar6 * fVar6;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar20 = uVar14 - 0xc4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar20;
      do {
        fVar6 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar6;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar15 = 2;
      do {
        iVar12 = (int)lVar16;
        iVar13 = (int)lVar20;
        lVar16 = lVar16 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar12 + 0x7c) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar7 + fVar4;
    }
    (pMVar17->rotation).z = fVar1;
    (pMVar17->pos).x = fStack00000030;
    (pMVar17->pos).y = fStack00000034;
    (pMVar17->pos).z = fStack00000038;
    (pMVar17->pos).w = fStack0000003c;
    *pfVar8 = fStack00000040;
    pfVar8[1] = fStack00000044;
    pfVar8[2] = fStack00000048;
    pfVar8[3] = fStack0000004c;
    dVar26 = -6.2831854820251465;
    dVar25 = 6.2831854820251465;
    dVar24 = (double)mobyutil::MB_randRangeFloat
                               (mobyutil::g_FrameTime * -6.2831855,mobyutil::g_FrameTime * 6.2831855
                               );
    pfVar8[4] = (float)dVar24;
    dVar24 = (double)mobyutil::MB_randRangeFloat
                               ((float)((double)mobyutil::g_FrameTime * dVar26),
                                (float)((double)mobyutil::g_FrameTime * dVar25));
    auVar27 = ZEXT416(0xffffffff);
    auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    pfVar8[5] = (float)dVar24;
    auVar29 = loadVectorLeftIndexed(0x14,0x2d0618);
    auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar27 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                         auVar28);
    auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
    auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x1c,
                       ZEXT48(pfVar8));
    *(undefined4 *)((uint)(pfVar8 + 7) & 0xfffffffc) = uVar9;
    mobyfunc::UpdateMobyTransform(pMVar17);
  }
  return pMVar17;
}



//==== 002d0c98  ns=mobyupdate_unsorted  size=0x618
// sig: undefined UpdateMoby_189(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00128248 partupd::SpawnPart_27; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots

/* Moby 189 */

void mobyupdate_unsorted::UpdateMoby_189(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar5;
  undefined8 uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 local_a0 [16];
  undefined4 local_90 [8];
  
  pfVar2 = (float *)moby->pVar;
  fVar1 = (moby->rotation).x;
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  dVar6 = (double)fastfunc::FastWrapRot(fVar1,pfVar2[4]);
  (moby->rotation).x = (float)dVar6;
  dVar6 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar2[5]);
  (moby->rotation).y = (float)dVar6;
  dVar6 = 0.0;
  if (((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) || ((int)(moby->pos).z < 0)) ||
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     64.0 < SQRT(fVar3 * fVar3 + fVar1 * fVar1))) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    fVar1 = pfVar2[2];
    if (SQRT(fVar1 * fVar1 + *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1]) != 0.0) {
      pfVar2[2] = -(DAT_0071f418 * 9.8 - fVar1);
    }
    iVar5 = fastfunc::FastDecTimerS32(pfVar2 + 7);
    if (iVar5 == 0) {
      iVar5 = collproc::CollLine(local_a0,(longlong)(int)moby + 0x10,0,g_heroMobyPtr,0);
      if (iVar5 != 0) {
        dVar9 = (double)SQRT(CollOutput.normal.z * CollOutput.normal.z +
                             CollOutput.normal.x * CollOutput.normal.x +
                             CollOutput.normal.y * CollOutput.normal.y);
        dVar7 = dVar6;
        dVar8 = dVar6;
        if (dVar9 != dVar6) {
          fVar1 = (float)(0.009999999776482582 / dVar9);
          dVar6 = (double)(CollOutput.normal.y * fVar1);
          dVar7 = (double)(CollOutput.normal.x * fVar1);
          dVar8 = (double)(CollOutput.normal.z * fVar1);
        }
        (moby->pos).x = (float)((double)CollOutput.ip.x + dVar7);
        (moby->pos).y = (float)((double)CollOutput.ip.y + dVar6);
        (moby->pos).z = (float)((double)CollOutput.ip.z + dVar8);
        (moby->pos).w = CollOutput.ip.w;
        fastfunc::FastVecNormalize(pfVar2,pfVar2,0xa10980);
        dVar6 = (double)mobyutil::MB_randRangeFloat(0.45,0.65);
        *pfVar2 = (float)((double)*pfVar2 * dVar6);
        pfVar2[1] = (float)((double)pfVar2[1] * dVar6);
        pfVar2[2] = (float)((double)pfVar2[2] * dVar6) * 0.5;
        dVar8 = -0.5;
        dVar7 = -1.5;
        dVar6 = (double)mobyutil::MB_randRangeFloat(-0.5,-1.5);
        dVar6 = (double)fastfunc::FastAddRots((float)((double)pfVar2[4] * dVar6));
        pfVar2[4] = (float)dVar6;
        dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar7);
        dVar6 = (double)fastfunc::FastAddRots((float)((double)pfVar2[5] * dVar6));
        pfVar2[5] = (float)dVar6;
        if (SQRT(pfVar2[2] * pfVar2[2] + *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1]) <
            DAT_0071f418 * 9.8) {
          pfVar2[3] = 0.0;
          pfVar2[2] = 0.0;
          pfVar2[1] = 0.0;
          *pfVar2 = 0.0;
          pfVar2[4] = 0.0;
          pfVar2[5] = 0.0;
        }
      }
    }
    else {
      iVar5 = 0;
      dVar7 = -1.0;
      dVar8 = 1.0;
      dVar9 = 0.25;
      dVar10 = 0.5;
      dVar11 = 2.0;
      dVar12 = 10.5;
      dVar13 = 15.5;
      uVar14 = 0x40b3880000000000;
      do {
        mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
        mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
        mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
        if ((double)SQRT(pfVar2[2] * pfVar2[2] + *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1]) != dVar6
           ) {
          mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
        }
        mobyutil::MB_randRangeFloat
                  (mobyutil::g_FrameTime,(float)((double)mobyutil::g_FrameTime * dVar11));
        uVar4 = mobyutil::MB_randRange
                          ((int)((double)animationSpeed * dVar12),
                           (int)((double)animationSpeed * dVar13));
        partupd::SpawnPart_27(uVar14,(longlong)(int)moby + 0x10,local_90,0x7f2f4f6f,uVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 002d12b0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1891_002d12b0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1891_002d12b0(void)

{
  DAT_007bd660 = 0x10000;
  return;
}



//==== 002d12d0  ns=mobyupdate_unsorted  size=0xb0
// sig: undefined UpdateMoby_1891(MobyInstance * moby)
// callers(0): 
// callees(1): 00502578 fastfunc::FastWrapRot

/* Moby 1891 */

void mobyupdate_unsorted::UpdateMoby_1891(MobyInstance *moby)

{
  float fVar1;
  double dVar2;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->drawDistance = 0x200;
    fVar1 = moby->scale;
    (moby->pos).z = 160.0;
    moby->state = '\x01';
    moby->scale = fVar1 * 4.0;
  }
  else if (moby->state < 2) {
    dVar2 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * -0.2617994);
    (moby->rotation).z = (float)dVar2;
  }
  return;
}



//==== 002d1388  ns=mobyupdate_unsorted  size=0xb4
// sig: undefined UpdateMoby_1898(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby

/* Moby 1898 */

void mobyupdate_unsorted::UpdateMoby_1898(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  
  pfVar2 = (float *)moby->pVar;
  if (moby->state == 0) {
    mobyfunc::DeleteMoby(moby);
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1898_002d1540_0070b2b8,moby);
    fVar1 = *pfVar2;
    *pfVar2 = fVar1 + pfVar2[1];
    if (2.0 < fVar1 + pfVar2[1]) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 002d1440  ns=Global  size=0xec
// sig: undefined FUN_002d1440(void)
// callers(3): 001caf98 mobyupdate_helpers::M1109_001caf98; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 004c8510 mobyupdate_helpers::M983_004c8510
// callees(2): 000efa28 mobyfunc::CreateMoby; 00502730 fastfunc::FastIntToDouble

void FUN_002d1440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  double dVar3;
  f32 fStack00000030;
  f32 fStack00000034;
  f32 fStack00000038;
  f32 fStack0000003c;
  
  pMVar2 = mobyfunc::CreateMoby(0x76a);
  if (pMVar2 != (MobyInstance *)0x0) {
    pvVar1 = pMVar2->pVar;
    fStack00000034 = (f32)param_1;
    fStack0000003c = (f32)param_2;
    (pMVar2->pos).y = fStack00000034;
    (pMVar2->pos).w = fStack0000003c;
    fStack00000030 = (f32)((ulonglong)param_1 >> 0x20);
    fStack00000038 = (f32)((ulonglong)param_2 >> 0x20);
    (pMVar2->pos).x = fStack00000030;
    (pMVar2->pos).z = fStack00000038;
    dVar3 = (double)fastfunc::FastIntToDouble(param_3);
    *(undefined4 *)((int)pvVar1 + 8) = param_4;
    *(undefined4 *)((int)pvVar1 + 0xc) = param_5;
    *(float *)((int)pvVar1 + 4) = (float)(2.0 / dVar3);
    pMVar2->updateDistance = -1;
    pMVar2->state = '\x01';
  }
  return;
}



//==== 002d1540  ns=mobyupdate_helpers  size=0x2ac
// sig: undefined M1898_002d1540(void)
// callers(0): 
// callees(7): 00065490 draw::ScreenPosFromWorldSpace; 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud; 00174f80 vuchain::SetGSReg; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502f7c idol_draw::Blend

void mobyupdate_helpers::M1898_002d1540(int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 local_a0 [16];
  float local_90;
  float local_8c;
  undefined1 local_80 [32];
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  pfVar1 = *(float **)(param_1 + 0x78);
  dVar3 = 1.0;
  dVar5 = (double)*pfVar1;
  dVar4 = (double)(float)(dVar5 - 1.0);
  if (1.0 - dVar5 < 0.0) {
    dVar5 = dVar3;
  }
  if ((dVar4 <= 1.0) && (dVar3 = dVar4, dVar4 < 0.0)) {
    dVar3 = 0.0;
  }
  uVar2 = idol_draw::Blend(1,5,0x80,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar2);
  draw::ScreenPosFromWorldSpace(&local_90,local_a0);
  fastfunc::FastDoubleToInt((double)(local_90 - (float)(longlong)SCREEN_PROJECTION_MAP_X));
  fastfunc::FastDoubleToInt((double)(local_8c - (float)(longlong)SCREEN_PROJECTION_MAP_X));
  fastfunc::FastLerpColor(dVar3,pfVar1[2],pfVar1[3]);
  fastfunc::FastDoubleToInt((double)(float)((double)(longlong)(DAT_007bd68c << 4) * dVar5));
  uVar2 = draw::GetEffectTex(DAT_007bd688);
  draw::DrawTexturedQuadHud(local_80,local_50,local_60,uVar2,1);
  uVar2 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar2);
  return;
}



//==== 002d17f0  ns=mobyupdate_helpers  size=0x78
// sig: undefined M1898_002d17f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1898_002d17f0(int param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar2 = MobyInstance;
  do {
    iVar3 = (int)(((ulonglong)*puVar4 & 0x7fff) << 8);
    *(undefined4 *)((int)&(pMVar2->pos).z + iVar3) = *(undefined4 *)(param_1 + 0x18);
    pMVar2 = MobyInstance;
    *(undefined4 *)
     (&DAT_010a2448 + *(int *)(*(int *)((int)&MobyInstance->pVar + iVar3) + 0xc) * 0x11a0) =
         *(undefined4 *)(param_1 + 0x18);
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}



//==== 002d1870  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M19_002d1870(void)
// callers(1): 002d1a58 mobyupdate_unsorted::UpdateMoby_19
// callees(0): 

void mobyupdate_helpers::M19_002d1870(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_010a2440;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_010a2444;
  (&DAT_010a244c)[iVar5] = 0xff;
  (&DAT_010a244e)[iVar5] = 0xff;
  (&DAT_010a244d)[iVar5] = 0xff;
  (&DAT_010a244f)[iVar5] = 0xff;
  (&DAT_010a2450)[iVar5] = 0xff;
  (&DAT_010a2451)[iVar5] = 0xff;
  (&DAT_010a2452)[iVar5] = 0xff;
  (&DAT_010a2453)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_010a2440)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_010a2444)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_010a2450)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_010a2452)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_010a2451)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_010a2453)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_010a244d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_010a244f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_010a244c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_010a244e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x11);
  return;
}



//==== 002d1a58  ns=mobyupdate_unsorted  size=0x838
// sig: undefined UpdateMoby_19(MobyInstance * moby)
// callers(0): 
// callees(13): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 001129d0 mobyutil::MB_ScaledVecWrapper; 0017b230 water::WaterTile_InitAll; 0017b4b0 water::WaterTile_CalcGridBSphere; 0017b780 water::WaterWave_ScaleTable; 0017b8b8 water::WaterTile_UpdateWaves; 0017bd90 water::WaterTile_PutDrop; 002d1870 mobyupdate_helpers::M19_002d1870; 005cd098 libc::printf
// strings: 00655be8: "I'm really sorry, but you can't have more than 128 water tiles in this level"

/* Moby 19 */

void mobyupdate_unsorted::UpdateMoby_19(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  ushort uVar8;
  int *piVar9;
  int iVar10;
  MobyInstance *pMVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined2 *puVar20;
  ulonglong uVar18;
  longlong lVar19;
  ushort *puVar21;
  int iVar22;
  undefined2 uVar23;
  longlong lVar24;
  float *pfVar25;
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
  double in_f5;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  double dVar32;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0xe0;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar17;
  puVar12[0x1e] = in_LR;
  puVar12[0x1a] = in_f30;
  puVar12[0x1b] = in_f31;
  puVar12[0x19] = unaff_r31;
  bVar1 = moby->state;
  puVar12[0x18] = unaff_r30;
  piVar9 = (int *)moby->pVar;
  puVar12[0x17] = unaff_r29;
  puVar12[0x16] = unaff_r28;
  puVar12[0x15] = unaff_r27;
  puVar12[0x14] = unaff_r26;
  if (bVar1 == 0) {
    piVar9[3] = u_WaterTileCnt;
    u_WaterTileCnt = u_WaterTileCnt + 1;
    if (0x7f < u_WaterTileCnt) {
      libc::printf("I\'m really sorry, but you can\'t have more than 128 water tiles in this level")
      ;
    }
    fVar2 = moby->pClass->gScale;
    *piVar9 = 3;
    moby->updateDistance = -1;
    iVar22 = piVar9[3];
    moby->modeBits = moby->modeBits | DISABLED;
    moby->scale = fVar2 * 2.0;
    if (iVar22 == 0) {
      puVar20 = &DAT_010a245e;
      lVar27 = 0x11;
      do {
        *puVar20 = 0;
        puVar20 = puVar20 + 0x8d0;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      water::WaterTile_InitAll((WaterTile *)&DAT_010a2440,0x11);
      water::WaterWave_ScaleTable(1.0);
      fVar7 = DirectionalLights[0].direction1.x;
      fVar4 = ABS(DirectionalLights[0].direction1.x);
      fVar5 = ABS(DirectionalLights[0].direction1.y);
      WaterTileConsts.TileSize.x = 16.0;
      WaterTileConsts.TileSize.y = 16.0;
      WaterTileConsts.TileOffset.x = -8.0;
      WaterTileConsts.TileOffset.y = -8.0;
      WaterTileConsts.TileGridSize.x = 1.0;
      WaterTileConsts.TileGridSize.y = 1.0;
      WaterTileConsts.texScale = 0.9;
      WaterTileConsts.waveInc = 0.1;
      uVar16 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
      *(float *)(puVar12 + 0xe) = fVar4 - fVar5;
      fVar2 = 0.0;
      uVar18 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar16 & 4;
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar13 = fVar4;
      if (*(float *)(puVar12 + 0xe) - 0.0 < 0.0) {
        fVar13 = fVar5;
      }
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      if (*(float *)(puVar12 + 0xe) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      if (0.0 < fVar13) {
        lVar27 = uVar17 - 0xd0;
        lVar24 = uVar17 - 0x6c;
        lVar26 = uVar17 - 0x5c;
        lVar28 = 2;
        fVar4 = (fVar5 - fVar13) / (fVar5 + fVar13);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x10) = fVar4;
        *(float *)(puVar12 + 0xf) = fVar4;
        *(float *)((int)puVar12 + 0x7c) = fVar4;
        *(float *)((int)puVar12 + 0x74) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar12 + 0xf) = *(float *)(puVar12 + 0xf) * fVar5;
        *(float *)((int)puVar12 + 0x7c) = *(float *)((int)puVar12 + 0x7c) * fVar4;
        *(float *)(puVar12 + 0x10) = *(float *)(puVar12 + 0x10) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 100) * fVar4 * fVar4;
          iVar22 = (int)lVar24;
          lVar27 = lVar27 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar17 - 0x6c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar27 = lVar19;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 0x74) * fVar4;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar27 = 2;
        do {
          iVar22 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar22 + 0x74) + *(float *)(iVar10 + 4) +
                  *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc);
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar7 + fVar3;
      }
      fVar7 = fVar2 + 1.5707963;
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = 3.1415925 - fVar7;
      if (fVar7 - (3.1415925 - fVar7) < 0.0) {
        fVar5 = fVar7;
      }
      fVar13 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar13 = fVar4;
      }
      fVar2 = -3.1415925 - fVar7;
      if ((-3.1415925 - fVar7) - fVar5 < 0.0) {
        fVar2 = fVar5;
      }
      fVar7 = fVar13 * fVar13;
      fVar4 = fVar2 * fVar2;
      fVar14 = fVar7 * fVar7 * fVar13;
      WaterTileConsts.tex0 = *piVar9 + 0x28;
      fVar5 = fVar4 * fVar4 * fVar2;
      fVar15 = fVar7 * fVar14;
      WaterTileConsts.lightDir.z = -0.57735;
      WaterTileConsts.tex1 = piVar9[1] + 0x28;
      fVar3 = fVar4 * fVar5;
      WaterTileConsts.alpha0 = 0x1c;
      WaterTileConsts.alpha1 = 0x40;
      WaterTileConsts.lightDir.y =
           (fVar7 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar7 * fVar13 * -0.16666657 + fVar13) *
           0.57735;
      WaterTileConsts.lightDir.x =
           (fVar4 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) *
           0.57735;
      WaterTiles = (WaterTile *)&DAT_010a2440;
      WaterTileBoxes = (WaterTileBox *)&DAT_010a2300;
      WaterTileCnt = 0x11;
      WaterFogNearDist = 0;
      WaterFogFarDist = 0x47000000;
      WaterFogNearIntensity = 0x437f0000;
      iVar22 = piVar9[3];
      WaterFogFarIntensity = 0x42400000;
    }
    iVar10 = piVar9[3];
    (&DAT_010a2440)[iVar22 * 0x468] = (moby->pos).x;
    iVar22 = *piVar9;
    (&DAT_010a2444)[iVar10 * 0x468] = (moby->pos).y;
    fVar6 = (moby->pos).z;
    *(int *)(&DAT_010a2454 + iVar10 * 0x11a0) = iVar22 + 0x28;
    *(int *)(&DAT_010a2458 + piVar9[3] * 0x11a0) = piVar9[1] + 0x28;
    (&DAT_010a245c)[piVar9[3] * 0x11a0] = 0x1c;
    (&DAT_010a245d)[piVar9[3] * 0x11a0] = 0x44;
    *(f32 *)(&DAT_010a2448 + iVar10 * 0x11a0) = fVar6;
    iVar22 = piVar9[3];
    (&DAT_010a245e)[iVar22 * 0x8d0] = 0xffff;
    water::WaterTile_CalcGridBSphere
              ((WaterTile *)(&DAT_010a2440 + iVar22 * 0x468),
               (BSphere *)(&DAT_010a2300 + iVar22 * 0x10));
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    u_WaterTileCnt = 0;
    mobyupdate_helpers::M19_002d1870(piVar9[3]);
    fVar6 = (moby->pos).z;
    moby->state = '\x02';
    piVar9[4] = (int)fVar6;
  }
  else if (bVar1 < 3) {
    if ((moby->setByGroup & 4U) != 0) {
      piVar9[5] = 1;
      piVar9[4] = (int)((float)piVar9[4] + 5.0);
    }
    moby->setByGroup = '\x01';
    if (piVar9[5] != 0) {
      mobyutil::OrganicDelt
                ((float)piVar9[4],DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,(float *)(piVar9 + 2));
      puVar21 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
      pMVar11 = MobyInstance;
      do {
        iVar22 = (int)(((ulonglong)*puVar21 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar11->pos).z + iVar22) = (moby->pos).z;
        pMVar11 = MobyInstance;
        *(f32 *)(&DAT_010a2448 +
                *(int *)(*(int *)((int)&MobyInstance->pVar + iVar22) + 0xc) * 0x11a0) =
             (moby->pos).z;
        uVar8 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (-1 < (short)uVar8);
    }
    if ((ABS(g_heroPosition.x - (moby->pos).x) <= 8.0) ||
       (ABS(g_heroPosition.y - (moby->pos).y) <= 8.0)) {
      hero::g_heroWaterZ = (moby->pos).z;
    }
    iVar22 = mobyutil::MB_randInt(200);
    if (iVar22 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_010a2440)[piVar9[3] * 0x468] + dVar32);
      dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar31);
      water::WaterTile_PutDrop
                ((float)dVar29,(float)((double)(float)(&DAT_010a2444)[piVar9[3] * 0x468] + dVar32),
                 1.0,-0.05,(WaterTile *)(&DAT_010a2440 + piVar9[3] * 0x468),1,(float)in_f5);
    }
  }
  if (-1 < piVar9[3]) {
    dVar31 = 0.0;
    dVar32 = dVar31;
    iVar22 = mobyutil::MB_ScaledVecWrapper(0x4050000000000000,moby);
    if (iVar22 != -1) {
      dVar32 = 1.0;
    }
    if ((piVar9[6] != -1) &&
       (iVar22 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar9[6]),
       iVar22 == 0)) {
      dVar32 = dVar31;
    }
    uVar23 = 0xffff;
    if (dVar32 == dVar31) {
      uVar23 = 0;
    }
    iVar22 = piVar9[3];
    (&DAT_010a245e)[iVar22 * 0x8d0] = uVar23;
    if (iVar22 == 0) {
      water::WaterTile_UpdateWaves((WaterTile *)&DAT_010a2440,0x11);
      RegisterFuncForMoby(&PTR_M190_002d2290_0070b2d8,moby);
    }
  }
  return;
}



//==== 002d2290  ns=mobyupdate_helpers  size=0x30
// sig: undefined M190_002d2290(void)
// callers(0): 
// callees(1): 0017cfdc water::WaterTile_DrawAll

void mobyupdate_helpers::M190_002d2290(void)

{
  water::WaterTile_DrawAll(&DAT_010a2440,0x11);
  return;
}



//==== 002d22c0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M190_002d22c0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M190_002d22c0(void)

{
  DAT_007bd6e8 = 0x10000;
  return;
}



//==== 002d2308  ns=mobyupdate_helpers  size=0x400
// sig: undefined M190_002d2308(void)
// callers(1): 002d2780 mobyupdate_unsorted::UpdateMoby_190
// callees(0): 

void mobyupdate_helpers::M190_002d2308
               (double param_1,double param_2,double param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  double dVar27;
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
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar20 = uVar19 - 0xc0;
  puVar8 = (ulonglong *)lVar20;
  *puVar8 = uVar19;
  puVar8[0xc] = in_f20;
  puVar8[0xd] = in_f21;
  puVar8[0xe] = in_f22;
  puVar8[0xf] = in_f23;
  puVar8[0x10] = in_f24;
  puVar8[0x11] = in_f25;
  puVar8[0x12] = in_f26;
  puVar8[0x13] = in_f27;
  puVar8[0x14] = in_f28;
  puVar8[0x15] = in_f29;
  puVar8[0x16] = in_f30;
  puVar8[0x17] = in_f31;
  fVar1 = param_4[1];
  fVar2 = param_5[1];
  fVar3 = *param_4;
  fVar9 = fVar2 - fVar1;
  fVar4 = *param_5;
  fVar5 = param_4[2];
  fVar13 = fVar4 - fVar3;
  fVar6 = param_5[2];
  fVar11 = fVar6 - fVar5;
  fVar7 = 0.0;
  fVar15 = SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar9 * fVar9);
  dVar28 = (double)SQRT((fVar5 - fVar6) * (fVar5 - fVar6) +
                        (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2));
  fVar14 = (float)(param_3 - 0.009999999776482582) / fVar15;
  fVar16 = (float)(param_1 * param_3) * 0.5;
  fVar10 = fVar7;
  if (0.0 - fVar15 < 0.0) {
    fVar10 = fVar14 * fVar9;
  }
  fVar12 = fVar7;
  if (0.0 - fVar15 < 0.0) {
    fVar12 = fVar14 * fVar13;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar10 = fVar14 * fVar9;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar12 = fVar14 * fVar13;
  }
  if (param_3 - dVar28 < 0.0) {
    fVar2 = fVar10 + fVar1;
  }
  if (param_3 - dVar28 < 0.0) {
    fVar4 = fVar12 + fVar3;
  }
  fVar9 = fVar7;
  if (0.0 - fVar15 < 0.0) {
    fVar9 = fVar14 * fVar11;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar9 = fVar14 * fVar11;
  }
  fVar11 = ABS(fVar2 - fVar1);
  fVar10 = ABS(fVar4 - fVar3);
  *(float *)(puVar8 + 6) = fVar4 - fVar3;
  *(float *)((int)puVar8 + 0x34) = fVar2 - fVar1;
  if (param_3 - dVar28 < 0.0) {
    fVar6 = fVar9 + fVar5;
  }
  *(float *)(puVar8 + 7) = fVar10 - fVar11;
  dVar28 = (double)SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2));
  uVar22 = (ulonglong)(*(uint *)(puVar8 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x34) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 6));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar1 = fVar11;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar3 = ABS(*(float *)((int)puVar8 + 0x34));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar3 = fVar10;
  }
  fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar24 = uVar19 - 0xb0;
    lVar21 = uVar19 - 0x74;
    lVar23 = uVar19 - 0x84;
    lVar26 = 2;
    fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
    fVar3 = fVar1 * fVar1;
    *(float *)(puVar8 + 9) = fVar1;
    *(float *)(puVar8 + 8) = fVar1;
    *(float *)((int)puVar8 + 0x44) = fVar1;
    *(float *)((int)puVar8 + 0x3c) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)(puVar8 + 8) = *(float *)(puVar8 + 8) * fVar3;
    *(float *)((int)puVar8 + 0x44) = *(float *)((int)puVar8 + 0x44) * fVar1;
    *(float *)(puVar8 + 9) = *(float *)(puVar8 + 9) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar24 + 0x3c) = *(float *)((int)lVar24 + 0x2c) * fVar1 * fVar1;
      iVar17 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar24 = uVar19 - 0x84;
    lVar26 = 4;
    pfVar25 = (float *)&DAT_007358e0;
    lVar21 = lVar24;
    lVar23 = lVar20;
    do {
      fVar1 = *pfVar25;
      fVar3 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar23 + 0x3c) = *(float *)((int)lVar23 + 0x3c) * fVar1;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar21 = 2;
    do {
      iVar17 = (int)lVar20;
      iVar18 = (int)lVar24;
      lVar20 = lVar20 + 0x10;
      lVar24 = lVar24 + 0x10;
      fVar7 = fVar7 + *(float *)(iVar17 + 0x3c) + *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
              *(float *)(iVar18 + 0xc);
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    fVar7 = (fVar7 + 0.7853982) * fVar2 + fVar4;
  }
  if (dVar28 - param_2 < 0.0) {
    dVar28 = param_2;
  }
  dVar27 = (double)(float)(dVar28 - 0.009999999776482582);
  if ((double)(fVar6 - fVar5) - dVar28 < 0.0) {
    dVar27 = (double)(fVar6 - fVar5);
  }
  fVar1 = fVar7 + 1.5707963;
  fVar3 = (float)((double)(float)(dVar28 * param_1) * dVar28) / ((float)(dVar28 - dVar27) * 2.0);
  fVar2 = 3.1415925 - fVar7;
  if (fVar7 - (3.1415925 - fVar7) < 0.0) {
    fVar2 = fVar7;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = -3.1415925 - fVar7;
  if ((-3.1415925 - fVar7) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  fVar2 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar2 = fVar4;
  }
  fVar1 = fVar5 * fVar5;
  fVar4 = fVar2 * fVar2;
  if (fVar16 - fVar3 < 0.0) {
    fVar3 = fVar16;
  }
  fVar3 = SQRT(fVar3);
  fVar6 = fVar4 * fVar4 * fVar2;
  fVar9 = fVar1 * fVar1 * fVar5;
  fVar7 = fVar4 * fVar6;
  fVar10 = fVar1 * fVar9;
  param_6[2] = fVar3;
  *param_6 = (fVar4 * fVar7 * 2.601887e-06 +
             fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) *
             fVar3;
  param_6[1] = (fVar1 * fVar10 * 2.601887e-06 +
               fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5)
               * fVar3;
  return;
}



//==== 002d2780  ns=mobyupdate_unsorted  size=0x1608
// sig: undefined UpdateMoby_190(MobyInstance * moby)
// callers(0): 
// callees(18): 00057820 collproc::CollLine; 000816ec hero::Hero_PlaySound; 0008e0f4 hero::Hero_GetWeaponAmmo; 000aa258 hero::hero_ConsumeAmmo; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000fe610 mobyutil::MB_SphericalToVector; 00110724 mobyutil::MB_AddMobyToDynamicGroup; 002d2308 mobyupdate_helpers::M190_002d2308; 0043cc98 Spawn_Moby74_MineBall; 0043ce28 FUN_0043ce28; 004fff60 fastfunc::FastDecTimerS32; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 190 */

void mobyupdate_unsorted::UpdateMoby_190(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong *puVar13;
  short sVar14;
  char acVar15 [4];
  bool bVar16;
  float fVar17;
  MobyInstance *pMVar18;
  ushort uVar19;
  ulonglong uVar20;
  int iVar22;
  int iVar23;
  longlong lVar21;
  undefined4 uVar24;
  PlayerState PVar26;
  float *pfVar27;
  longlong lVar25;
  CONTROLLER_INPUT CVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar40;
  ulonglong in_f19;
  double dVar41;
  ulonglong in_f20;
  double dVar42;
  ulonglong in_f21;
  double dVar43;
  ulonglong in_f22;
  double dVar44;
  ulonglong in_f23;
  double dVar45;
  ulonglong in_f24;
  double dVar46;
  ulonglong in_f25;
  double dVar47;
  ulonglong in_f26;
  double dVar48;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar49;
  ulonglong in_f29;
  double dVar50;
  ulonglong in_f30;
  double dVar51;
  double dVar52;
  ulonglong in_f31;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar21 = uVar20 - 0x350;
  puVar13 = (ulonglong *)lVar21;
  *puVar13 = uVar20;
  puVar13[0x6c] = in_LR;
  puVar13[0x5b] = in_f17;
  puVar13[0x5c] = in_f18;
  puVar13[0x5d] = in_f19;
  puVar13[0x5e] = in_f20;
  puVar13[0x5f] = in_f21;
  puVar13[0x60] = in_f22;
  puVar13[0x61] = in_f23;
  puVar13[0x62] = in_f24;
  puVar13[99] = in_f25;
  puVar13[100] = in_f26;
  puVar13[0x65] = in_f27;
  puVar13[0x66] = in_f28;
  puVar13[0x67] = in_f29;
  puVar13[0x68] = in_f30;
  puVar13[0x69] = in_f31;
  puVar13[0x5a] = unaff_r31;
  puVar13[0x59] = unaff_r30;
  puVar13[0x58] = unaff_r29;
  puVar13[0x57] = unaff_r28;
  puVar13[0x56] = unaff_r27;
  puVar13[0x55] = unaff_r26;
  puVar13[0x54] = unaff_r25;
  puVar13[0x53] = unaff_r24;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar11 = moby->pVar;
  uVar32 = ZEXT48(pvVar11);
  if (*(int *)((int)pvVar11 + 0x5c) < 3) {
    *(int *)((int)pvVar11 + 0x5c) = *(int *)((int)pvVar11 + 0x5c) + 1;
    return;
  }
  dVar53 = -0.09000000357627869;
  dVar51 = -0.019999999552965164;
  fastfunc::FastApplyTransform((Vec4 *)(uVar20 - 0x280),(Vec4 *)&GameCamera);
  fastfunc::FastNormalizeRMtx4(uVar20 - 0x210,uVar20 - 0x280);
  if (pvVar11 == (void *)0x0) {
    return;
  }
  mobyfunc::GetBonePosition(moby,0,uVar20 - 0x2e0);
  mobyfunc::GetBoneTransformations(moby,0,uVar20 - 0x250);
  fVar2 = *(float *)((int)puVar13 + 0x124);
  fVar3 = *(float *)((int)puVar13 + 0x114);
  fVar4 = *(float *)(puVar13 + 0x25);
  fVar5 = *(float *)(puVar13 + 0x23);
  iVar23 = *(int *)((int)pvVar11 + 0x50);
  *(float *)((int)pvVar11 + 0x40) =
       *(float *)(puVar13 + 0xe) +
       (float)((double)*(float *)(puVar13 + 0x22) * dVar53 +
              (double)(float)((double)*(float *)(puVar13 + 0x24) * dVar51));
  *(float *)((int)pvVar11 + 0x44) =
       *(float *)((int)puVar13 + 0x74) +
       (float)((double)fVar3 * dVar53 + (double)(float)((double)fVar2 * dVar51));
  *(float *)((int)pvVar11 + 0x48) =
       *(float *)(puVar13 + 0xf) +
       (float)((double)fVar5 * dVar53 + (double)(float)((double)fVar4 * dVar51));
  *(undefined4 *)((int)pvVar11 + 0x4c) = *(undefined4 *)((int)puVar13 + 0x7c);
  if (iVar23 != 0) {
    *(undefined4 *)(iVar23 + 0x98) = 1;
    iVar23 = *(int *)((int)pvVar11 + 0x50);
  }
  if (((iVar23 == 0) || (*(char *)(iVar23 + 0x20) == -2)) || (*(char *)(iVar23 + 0x20) == -3)) {
    *(undefined4 *)((int)pvVar11 + 0x50) = 0;
  }
  if (g_heroState == FIRST_PERSON_VIEW) {
    hero::TransitionMovement(0x1e,1);
  }
  iVar22 = fastfunc::FastDecTimerS32(uVar32 + 0x58);
  PVar26 = g_heroState;
  CVar28 = DAT_0096ad80;
  iVar23 = DAT_00969e9c;
  if (((iVar22 != 0) && (DAT_0096bd8c == '\0')) &&
     ((((DAT_0096bd88 != '\0' &&
        (puVar13[0x50] = (longlong)(int)(animationSpeed * 17.5),
        iVar23 == *(int *)((int)puVar13 + 0x284))) ||
       ((PVar26 == WEAPON_FIRST_PERSON_VIEW && (g_buttonsPressedThisFrame & CVar28) != 0 &&
        (iVar23 = hero::Hero_GetWeaponAmmo(-1), PVar26 = g_heroState, iVar23 != 0)))) ||
      ((iVar23 = hero::g_heroStateTimer, PVar26 == THROWING_ITEM &&
       (puVar13[0x50] = (longlong)(int)(animationSpeed * 16.5),
       iVar23 == *(int *)((int)puVar13 + 0x284))))))) {
    hero::Hero_PlaySound(0x1a,0);
    hero::hero_ConsumeAmmo(-1,1);
    moby->state = '\x03';
  }
  fVar2 = DAT_0096a350;
  if ((*(int *)((int)pvVar11 + 0x50) != 0) && (DAT_0096bd8c == '\0')) {
    uVar24 = *(undefined4 *)(*(int *)((int)pvVar11 + 0x50) + 0x78);
    dVar51 = 0.0;
    if (g_goldWeaponsArray.mineGlove == '\0') {
      fVar3 = 4.0;
      if ((g_downButtons & (L1|L2)) != 0) {
        fVar3 = 6.0;
      }
    }
    else {
      fVar3 = 4.0;
      if ((g_downButtons & (L1|L2)) != 0) {
        fVar3 = 12.0;
      }
    }
    fVar5 = ABS(DAT_0096a350);
    fVar4 = ABS(DAT_0096a354);
    uVar12 = (uint)DAT_0096a354 >> 0x1d;
    dVar48 = -0.3619680106639862;
    fVar3 = mobyutil::g_FrameTime * fVar3;
    dVar54 = (double)(DAT_0096a320 * fVar3);
    dVar52 = (double)(DAT_0096a324 * fVar3);
    *(float *)((int)puVar13 + 0x19c) = fVar5 - fVar4;
    dVar50 = (double)(DAT_0096a328 * fVar3);
    dVar53 = 0.7853981852531433;
    dVar49 = (double)(DAT_0096a32c * fVar3);
    uVar29 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x19c) >> 0x1e) & 2 | (ulonglong)uVar12 & 4;
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
    fVar3 = fVar5;
    if (*(float *)((int)puVar13 + 0x19c) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    if (*(float *)((int)puVar13 + 0x19c) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
    dVar34 = dVar51;
    if (0.0 < fVar3) {
      lVar25 = uVar20 - 0x340;
      lVar30 = uVar20 - 0xf0;
      lVar31 = uVar20 - 0xe0;
      lVar33 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar13 + 0x26c) = fVar3;
      *(float *)((int)puVar13 + 0x264) = fVar3;
      *(float *)(puVar13 + 0x4d) = fVar3;
      *(float *)(puVar13 + 0x4c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0x264) = *(float *)((int)puVar13 + 0x264) * fVar4;
      *(float *)(puVar13 + 0x4d) = *(float *)(puVar13 + 0x4d) * fVar3;
      *(float *)((int)puVar13 + 0x26c) = *(float *)((int)puVar13 + 0x26c) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x260) = *(float *)((int)lVar25 + 0x250) * fVar3 * fVar3;
        iVar23 = (int)lVar30;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar31 = uVar20 - 0xf0;
      pfVar27 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar30 = lVar31;
      do {
        fVar3 = *pfVar27;
        fVar4 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x260) = *(float *)((int)lVar25 + 0x260) * fVar3;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar4;
        lVar30 = lVar30 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar30 = 2;
      lVar25 = lVar21;
      do {
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar22 = (int)lVar31;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar23 + 0x260)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar5);
    }
    dVar34 = (double)fastfunc::FastWrapRot(-0.361968,(float)dVar34);
    fVar4 = DAT_0096a350;
    dVar47 = 1.570796251296997;
    dVar46 = 3.141592502593994;
    fVar2 = (float)(dVar34 + 1.570796251296997);
    dVar45 = -3.141592502593994;
    dVar37 = ABS((double)DAT_0096a350);
    dVar44 = -0.16666656732559204;
    dVar34 = ABS((double)DAT_0096a354);
    dVar43 = 0.008333025500178337;
    dVar42 = -0.0001980741071747616;
    dVar41 = 2.601886990305502e-06;
    dVar40 = 0.8590390086174011;
    uVar12 = (uint)DAT_0096a354 >> 0x1d;
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    *(float *)(puVar13 + 0x33) = (float)(dVar37 - dVar34);
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = fVar5 * fVar5;
    uVar29 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x33) >> 0x1e) & 2 | (ulonglong)uVar12 & 4;
    fVar2 = fVar6 * fVar6 * fVar5;
    fVar3 = fVar6 * fVar2;
    dVar39 = dVar37;
    if ((double)*(float *)(puVar13 + 0x33) - dVar51 < 0.0) {
      dVar39 = dVar34;
    }
    if ((double)*(float *)(puVar13 + 0x33) - dVar51 < 0.0) {
      dVar34 = dVar37;
    }
    *(float *)(puVar13 + 0x10) =
         (fVar6 * fVar3 * 2.601887e-06 +
         fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
         0.859039;
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
    fVar2 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
    dVar37 = dVar51;
    if (dVar51 < dVar39) {
      lVar25 = uVar20 - 0x340;
      lVar31 = uVar20 - 0x100;
      lVar30 = uVar20 - 0x110;
      lVar33 = 2;
      fVar4 = (float)(dVar34 - dVar39) / (float)(dVar34 + dVar39);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0x24c) = fVar4;
      *(float *)((int)puVar13 + 0x244) = fVar4;
      *(float *)(puVar13 + 0x49) = fVar4;
      *(float *)(puVar13 + 0x48) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar13 + 0x244) = *(float *)((int)puVar13 + 0x244) * fVar5;
      *(float *)(puVar13 + 0x49) = *(float *)(puVar13 + 0x49) * fVar4;
      *(float *)((int)puVar13 + 0x24c) = *(float *)((int)puVar13 + 0x24c) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar25 + 0x240) = *(float *)((int)lVar25 + 0x230) * fVar4 * fVar4;
        iVar23 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar31 = uVar20 - 0x110;
      pfVar27 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar30 = lVar31;
      do {
        fVar4 = *pfVar27;
        fVar5 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x240) = *(float *)((int)lVar25 + 0x240) * fVar4;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar5;
        lVar30 = lVar30 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar30 = 2;
      lVar25 = lVar21;
      dVar34 = dVar51;
      do {
        iVar23 = (int)lVar25;
        iVar22 = (int)lVar31;
        lVar25 = lVar25 + 0x10;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar23 + 0x240)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      dVar37 = (double)((float)(dVar34 + dVar53) * fVar3 + fVar2);
    }
    dVar37 = (double)fastfunc::FastWrapRot((float)dVar48,(float)dVar37);
    fVar2 = g_heroPosition.y;
    fVar3 = g_heroPosition.x;
    dVar39 = ABS(dVar54);
    dVar34 = ABS(dVar52);
    dVar48 = (double)(float)(dVar46 - dVar37);
    if (dVar37 - (double)(float)(dVar46 - dVar37) < 0.0) {
      dVar48 = dVar37;
    }
    dVar38 = dVar39;
    if ((double)(float)(dVar39 - dVar34) - dVar51 < 0.0) {
      dVar38 = dVar34;
    }
    dVar35 = (double)(float)(dVar45 - dVar37);
    if ((double)(float)(dVar45 - dVar37) - dVar48 < 0.0) {
      dVar35 = dVar48;
    }
    fVar5 = *(float *)(puVar13 + 0x10);
    *(undefined4 *)(puVar13 + 0x11) = 0;
    dVar37 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar35));
    dVar48 = (double)(float)(dVar37 * dVar36);
    *(float *)(puVar13 + 0x10) = fVar5 + fVar3;
    fVar17 = g_heroPosition.z;
    bVar16 = g_goldWeaponsArray.mineGlove;
    fVar6 = *(float *)(puVar13 + 0x2c);
    fVar7 = *(float *)((int)puVar13 + 0x164);
    fVar8 = *(float *)(puVar13 + 0x2d);
    fVar9 = *(float *)((int)puVar13 + 0x16c);
    fVar4 = (float)((double)(float)((double)(float)(dVar37 * dVar48) * dVar41 +
                                   (double)(float)(dVar48 * dVar42 +
                                                  (double)(float)(dVar36 * dVar43 +
                                                                 (double)(float)((double)(float)(
                                                  dVar37 * dVar35) * dVar44 + dVar35)))) * dVar40);
    fVar2 = fVar4 + fVar2;
    if ((double)(float)(dVar39 - dVar34) - dVar51 < 0.0) {
      dVar34 = dVar39;
    }
    *(float *)((int)puVar13 + 0x84) = fVar4;
    *(float *)((int)puVar13 + 0x84) = fVar2;
    *(float *)(puVar13 + 0x11) = fVar17 + 0.49082;
    if (dVar51 < dVar38) {
      lVar25 = uVar20 - 0x340;
      lVar30 = uVar20 - 0x130;
      lVar31 = uVar20 - 0x120;
      lVar33 = 2;
      fVar4 = (float)(dVar34 - dVar38) / (float)(dVar34 + dVar38);
      fVar10 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0x22c) = fVar4;
      *(float *)((int)puVar13 + 0x224) = fVar4;
      *(float *)(puVar13 + 0x45) = fVar4;
      *(float *)(puVar13 + 0x44) = fVar4;
      fVar4 = fVar10 * fVar10;
      *(float *)((int)puVar13 + 0x224) = *(float *)((int)puVar13 + 0x224) * fVar10;
      *(float *)(puVar13 + 0x45) = *(float *)(puVar13 + 0x45) * fVar4;
      *(float *)((int)puVar13 + 0x22c) = *(float *)((int)puVar13 + 0x22c) * fVar4 * fVar10;
      do {
        *(float *)((int)lVar25 + 0x220) = *(float *)((int)lVar25 + 0x210) * fVar4 * fVar4;
        iVar23 = (int)lVar30;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pfVar27 = (float *)&DAT_007358e0;
      lVar30 = uVar20 - 0x130;
      lVar31 = 4;
      lVar25 = lVar21;
      do {
        fVar4 = *pfVar27;
        fVar10 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x220) = *(float *)((int)lVar25 + 0x220) * fVar4;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar10;
        lVar30 = lVar30 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
    }
    fVar4 = animationSpeed;
    *(float *)((int)puVar13 + 0x9c) = (float)dVar49;
    dVar48 = (double)(fVar4 * 60.0);
    CVar28 = g_downButtons & (L1|L2);
    *(float *)(puVar13 + 0x12) = (float)(dVar54 * dVar48 + (double)(fVar5 + fVar3));
    *(float *)((int)puVar13 + 0x94) = (float)(dVar52 * dVar48 + (double)fVar2);
    *(float *)(puVar13 + 0x13) = (float)(dVar50 * dVar48 + (double)(fVar17 + 0.49082));
    pMVar18 = g_heroMobyPtr;
    if (CVar28 != 0) {
      if (bVar16 == '\0') {
        fVar2 = 6.0;
      }
      else {
        fVar2 = 12.0;
      }
      fVar6 = fVar6 * fVar2;
      fVar7 = fVar7 * fVar2;
      *(float *)(puVar13 + 0x14) = fVar6;
      *(float *)((int)puVar13 + 0xa4) = fVar7;
      *(float *)(puVar13 + 0x15) = fVar8 * fVar2;
      *(float *)((int)puVar13 + 0xac) = fVar9 * fVar2;
      fVar2 = (pMVar18->rotation).z;
      *(float *)((int)puVar13 + 0x18c) = fVar6;
      *(float *)(puVar13 + 0x32) = fVar7;
      *(float *)((int)puVar13 + 0x194) = (float)(ABS((double)fVar6) - ABS((double)fVar7));
      uVar29 = (ulonglong)(*(uint *)((int)puVar13 + 0x18c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x194) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x32) >> 0x1d) & 4;
      dVar48 = ABS((double)*(float *)((int)puVar13 + 0x18c));
      if ((double)*(float *)((int)puVar13 + 0x194) - dVar51 < 0.0) {
        dVar48 = ABS((double)fVar7);
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar49 = ABS((double)*(float *)(puVar13 + 0x32));
      if ((double)*(float *)((int)puVar13 + 0x194) - dVar51 < 0.0) {
        dVar49 = ABS((double)fVar6);
      }
      fVar4 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar50 = dVar51;
      if (dVar51 < dVar48) {
        lVar25 = uVar20 - 0x340;
        lVar31 = uVar20 - 0x140;
        lVar30 = uVar20 - 0x150;
        lVar33 = 2;
        fVar5 = (float)(dVar49 - dVar48) / (float)(dVar49 + dVar48);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0x20c) = fVar5;
        *(float *)((int)puVar13 + 0x204) = fVar5;
        *(float *)(puVar13 + 0x41) = fVar5;
        *(float *)(puVar13 + 0x40) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x204) = *(float *)((int)puVar13 + 0x204) * fVar6;
        *(float *)(puVar13 + 0x41) = *(float *)(puVar13 + 0x41) * fVar5;
        *(float *)((int)puVar13 + 0x20c) = *(float *)((int)puVar13 + 0x20c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar25 + 0x200) = *(float *)((int)lVar25 + 0x1f0) * fVar5 * fVar5;
          iVar23 = (int)lVar30;
          lVar30 = lVar30 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar5 * fVar5;
          lVar31 = lVar31 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar31 = uVar20 - 0x150;
        pfVar27 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar30 = lVar31;
        do {
          fVar5 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar25 + 0x200) = *(float *)((int)lVar25 + 0x200) * fVar5;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar6;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar30 = 2;
        lVar25 = lVar21;
        dVar48 = dVar51;
        do {
          iVar23 = (int)lVar25;
          iVar22 = (int)lVar31;
          lVar25 = lVar25 + 0x10;
          lVar31 = lVar31 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar23 + 0x200)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        dVar50 = (double)((float)(dVar48 + dVar53) * fVar3 + fVar4);
      }
      fastfunc::FastDiffRots((double)fVar2,dVar50);
      dVar50 = (double)*(float *)(puVar13 + 0x14);
      dVar52 = (double)*(float *)((int)puVar13 + 0xa4);
      dVar54 = ABS(dVar50);
      dVar48 = ABS(dVar52);
      uVar12 = *(uint *)(puVar13 + 0x15);
      *(float *)(puVar13 + 0x31) = (float)(dVar54 - dVar48);
      bVar16 = g_goldWeaponsArray.mineGlove;
      CVar28 = g_downButtons;
      fVar2 = *(float *)(puVar13 + 0x15);
      uVar29 = (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x31) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1d) & 4;
      dVar49 = dVar54;
      if ((double)*(float *)(puVar13 + 0x31) - dVar51 < 0.0) {
        dVar49 = dVar48;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      if ((double)*(float *)(puVar13 + 0x31) - dVar51 < 0.0) {
        dVar48 = dVar54;
      }
      fVar4 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar54 = dVar51;
      if (dVar51 < dVar49) {
        lVar25 = uVar20 - 0x340;
        lVar30 = uVar20 - 0x170;
        lVar31 = uVar20 - 0x160;
        lVar33 = 2;
        fVar5 = (float)(dVar48 - dVar49) / (float)(dVar48 + dVar49);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0x1ec) = fVar5;
        *(float *)((int)puVar13 + 0x1e4) = fVar5;
        *(float *)(puVar13 + 0x3d) = fVar5;
        *(float *)(puVar13 + 0x3c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x1e4) = *(float *)((int)puVar13 + 0x1e4) * fVar6;
        *(float *)(puVar13 + 0x3d) = *(float *)(puVar13 + 0x3d) * fVar5;
        *(float *)((int)puVar13 + 0x1ec) = *(float *)((int)puVar13 + 0x1ec) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar25 + 0x1e0) = *(float *)((int)lVar25 + 0x1d0) * fVar5 * fVar5;
          iVar23 = (int)lVar30;
          lVar25 = lVar25 + 8;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar5 * fVar5;
          lVar31 = lVar31 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar31 = uVar20 - 0x170;
        pfVar27 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar30 = lVar31;
        do {
          fVar5 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar25 + 0x1e0) = *(float *)((int)lVar25 + 0x1e0) * fVar5;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar6;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar30 = 2;
        lVar25 = lVar21;
        dVar48 = dVar51;
        do {
          iVar23 = (int)lVar25;
          iVar22 = (int)lVar31;
          lVar25 = lVar25 + 0x10;
          lVar31 = lVar31 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar23 + 0x1e0)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        dVar54 = (double)((float)(dVar48 + dVar53) * fVar3 + fVar4);
      }
      dVar48 = ABS((double)fVar2);
      fVar2 = SQRT((float)(dVar50 * dVar50 + (double)(float)(dVar52 * dVar52)));
      dVar50 = ABS((double)fVar2);
      *(float *)(puVar13 + 0x30) = fVar2;
      *(float *)((int)puVar13 + 0x184) = (float)(dVar50 - dVar48);
      uVar29 = (ulonglong)(*(uint *)(puVar13 + 0x30) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x184) >> 0x1e) & 2 |
               (ulonglong)(uVar12 >> 0x1d) & 4;
      dVar49 = ABS((double)*(float *)(puVar13 + 0x30));
      if ((double)*(float *)((int)puVar13 + 0x184) - dVar51 < 0.0) {
        dVar49 = dVar48;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      if ((double)*(float *)((int)puVar13 + 0x184) - dVar51 < 0.0) {
        dVar48 = dVar50;
      }
      fVar3 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar50 = dVar51;
      if (dVar51 < dVar49) {
        lVar25 = uVar20 - 0x340;
        lVar30 = uVar20 - 400;
        lVar31 = uVar20 - 0x180;
        lVar33 = 2;
        fVar4 = (float)(dVar48 - dVar49) / (float)(dVar48 + dVar49);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 0x1cc) = fVar4;
        *(float *)((int)puVar13 + 0x1c4) = fVar4;
        *(float *)(puVar13 + 0x39) = fVar4;
        *(float *)(puVar13 + 0x38) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0x1c4) = *(float *)((int)puVar13 + 0x1c4) * fVar5;
        *(float *)(puVar13 + 0x39) = *(float *)(puVar13 + 0x39) * fVar4;
        *(float *)((int)puVar13 + 0x1cc) = *(float *)((int)puVar13 + 0x1cc) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar25 + 0x1c0) = *(float *)((int)lVar25 + 0x1b0) * fVar4 * fVar4;
          iVar23 = (int)lVar30;
          lVar25 = lVar25 + 8;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar31 = lVar31 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar31 = uVar20 - 400;
        pfVar27 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar30 = lVar31;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar25 + 0x1c0) = *(float *)((int)lVar25 + 0x1c0) * fVar4;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar5;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar30 = 2;
        lVar25 = lVar21;
        dVar48 = dVar51;
        do {
          iVar23 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          iVar22 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar23 + 0x1c0)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        dVar50 = (double)((float)(dVar48 + dVar53) * fVar2 + fVar3);
      }
      if (0.593411922454834 - dVar50 < 0.0) {
        dVar50 = 0.593411922454834;
      }
      if (dVar50 - -1.3962633609771729 < 0.0) {
        dVar50 = -1.3962633609771729;
      }
      if (bVar16 == '\0') {
        fVar2 = 4.0;
        if ((CVar28 & (L1|L2)) != 0) {
          fVar2 = 6.0;
        }
      }
      else {
        fVar2 = 4.0;
        if ((CVar28 & (L1|L2)) != 0) {
          fVar2 = 12.0;
        }
      }
      mobyutil::MB_SphericalToVector(fVar2,(float)dVar54,(float)dVar50,(float *)(puVar13 + 0x14));
      dVar48 = (double)SQRT(*(float *)(puVar13 + 0x14) * *(float *)(puVar13 + 0x14) +
                            *(float *)((int)puVar13 + 0xa4) * *(float *)((int)puVar13 + 0xa4));
      dVar53 = 0.009999999776482582;
      if (dVar51 - dVar48 < 0.0) {
        dVar53 = dVar48;
      }
      if (dVar48 - dVar51 < 0.0) {
        dVar53 = dVar48;
      }
      if (g_goldWeaponsArray.mineGlove == '\0') {
        fVar2 = 4.0;
        if ((g_downButtons & (L1|L2)) != 0) {
          fVar2 = 6.0;
        }
      }
      else {
        fVar2 = 4.0;
        if ((g_downButtons & (L1|L2)) != 0) {
          fVar2 = 12.0;
        }
      }
      fVar2 = SQRT(DAT_0071f418 * 9.8 * fVar2 * 0.5);
      dVar48 = (double)((fVar2 * 2.0 * fVar2 *
                        (float)(1.0 - (double)(float)((double)*(float *)(puVar13 + 0x15) / dVar53)))
                       / (DAT_0071f418 * 9.8));
      fVar2 = (float)((double)(float)((double)*(float *)(puVar13 + 0x15) / dVar53) * dVar48);
      dVar53 = (double)fVar2;
      if (dVar51 < dVar48) {
        dVar50 = (double)(float)(dVar54 + dVar47);
        dVar49 = (double)(float)(dVar46 - dVar54);
        if (dVar54 - (double)(float)(dVar46 - dVar54) < 0.0) {
          dVar49 = dVar54;
        }
        dVar52 = (double)(float)(dVar46 - dVar50);
        if (dVar50 - (double)(float)(dVar46 - dVar50) < 0.0) {
          dVar52 = dVar50;
        }
        dVar34 = (double)(float)(dVar45 - dVar54);
        if ((double)(float)(dVar45 - dVar54) - dVar49 < 0.0) {
          dVar34 = dVar49;
        }
        dVar49 = (double)(float)(dVar45 - dVar50);
        if ((double)(float)(dVar45 - dVar50) - dVar52 < 0.0) {
          dVar49 = dVar52;
        }
        dVar52 = (double)(float)(dVar34 * dVar34);
        dVar37 = (double)(float)(dVar49 * dVar49);
        dVar47 = (double)(float)(dVar52 * (double)(float)(dVar52 * dVar34));
        dVar40 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar49));
        dVar46 = (double)(float)(dVar52 * dVar47);
        dVar39 = (double)(float)(dVar37 * dVar40);
        dVar45 = (double)GameCamera.posX;
        dVar50 = (double)GameCamera.posY;
        dVar54 = (double)GameCamera.posZ;
        *(float *)(puVar13 + 0x15) = fVar2;
        acVar15 = GameCamera.field8_0x14c;
        fVar2 = (float)((double)(float)((double)(float)(dVar52 * dVar46) * dVar41 +
                                       (double)(float)(dVar46 * dVar42 +
                                                      (double)(float)(dVar47 * dVar43 +
                                                                     (double)(float)((double)(float)
                                                  (dVar52 * dVar34) * dVar44 + dVar34)))) * dVar48);
        dVar52 = (double)fVar2;
        fVar3 = (float)((double)(float)((double)(float)(dVar37 * dVar39) * dVar41 +
                                       (double)(float)(dVar39 * dVar42 +
                                                      (double)(float)(dVar40 * dVar43 +
                                                                     (double)(float)((double)(float)
                                                  (dVar37 * dVar49) * dVar44 + dVar49)))) * dVar48);
        dVar48 = (double)fVar3;
        *(float *)((int)puVar13 + 0xa4) = fVar2;
        *(float *)(puVar13 + 0x17) = (float)(dVar54 + dVar53);
        *(char (*) [4])((int)puVar13 + 0xbc) = acVar15;
        *(float *)(puVar13 + 0x14) = fVar3;
        *(float *)((int)puVar13 + 0xb4) = (float)(dVar50 + dVar52);
        *(float *)(puVar13 + 0x16) = (float)(dVar45 + dVar48);
        iVar23 = collproc::CollLine(0x951500,uVar20 - 0x2a0,2,moby,0);
        fVar2 = CollOutput.ip.y;
        if ((iVar23 == 0) || (CollOutput.pMoby == g_heroMobyPtr)) {
          fVar2 = (float)(dVar48 * 5.0) + GameCamera.posX;
          fVar3 = (float)(dVar52 * 5.0) + GameCamera.posY;
          fVar4 = (float)(dVar53 * 5.0) + GameCamera.posZ;
          *(float *)(puVar13 + 0x12) = (float)(dVar48 * 5.0);
          *(float *)((int)puVar13 + 0x94) = (float)(dVar52 * 5.0);
          *(float *)(puVar13 + 0x13) = (float)(dVar53 * 5.0);
          *(float *)(puVar13 + 0x12) = fVar2;
          *(float *)((int)puVar13 + 0x94) = fVar3;
          *(float *)(puVar13 + 0x13) = fVar4;
        }
        else {
          fVar3 = CollOutput.ip.x - *(float *)(puVar13 + 0x10);
          *(float *)(puVar13 + 0x12) = CollOutput.ip.x;
          fVar4 = CollOutput.ip.z;
          *(float *)((int)puVar13 + 0x94) = fVar2;
          fVar5 = CollOutput.ip.w;
          *(float *)(puVar13 + 0x13) = fVar4;
          *(float *)((int)puVar13 + 0x9c) = fVar5;
          dVar49 = ABS((double)fVar3);
          dVar53 = ABS((double)(fVar2 - *(float *)((int)puVar13 + 0x84)));
          dVar48 = dVar49;
          if ((double)(float)(dVar49 - dVar53) - dVar51 < 0.0) {
            dVar48 = dVar53;
          }
          if ((double)(float)(dVar49 - dVar53) - dVar51 < 0.0) {
            dVar53 = dVar49;
          }
          if (dVar51 < dVar48) {
            lVar25 = uVar20 - 0x340;
            lVar30 = uVar20 - 0x1b0;
            lVar31 = uVar20 - 0x1a0;
            lVar33 = 2;
            fVar2 = (float)(dVar53 - dVar48) / (float)(dVar53 + dVar48);
            fVar3 = fVar2 * fVar2;
            *(float *)((int)puVar13 + 0x1ac) = fVar2;
            *(float *)((int)puVar13 + 0x1a4) = fVar2;
            *(float *)(puVar13 + 0x35) = fVar2;
            *(float *)(puVar13 + 0x34) = fVar2;
            fVar2 = fVar3 * fVar3;
            *(float *)((int)puVar13 + 0x1a4) = *(float *)((int)puVar13 + 0x1a4) * fVar3;
            *(float *)(puVar13 + 0x35) = *(float *)(puVar13 + 0x35) * fVar2;
            *(float *)((int)puVar13 + 0x1ac) = *(float *)((int)puVar13 + 0x1ac) * fVar2 * fVar3;
            do {
              *(float *)((int)lVar25 + 0x1a0) = *(float *)((int)lVar25 + 400) * fVar2 * fVar2;
              iVar23 = (int)lVar30;
              lVar25 = lVar25 + 8;
              lVar30 = lVar30 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar2 * fVar2;
              lVar31 = lVar31 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            pfVar27 = (float *)&DAT_007358e0;
            lVar25 = uVar20 - 0x1b0;
            lVar30 = 4;
            do {
              fVar2 = *pfVar27;
              fVar3 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar21 + 0x1a0) = *(float *)((int)lVar21 + 0x1a0) * fVar2;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
              lVar25 = lVar25 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
          }
        }
      }
    }
    if (g_goldWeaponsArray.mineGlove == '\0') {
      dVar51 = 4.0;
      if ((g_downButtons & (L1|L2)) != 0) {
        dVar51 = 6.0;
      }
    }
    else {
      fVar2 = 4.0;
      if ((g_downButtons & (L1|L2)) != 0) {
        fVar2 = 12.0;
      }
      dVar51 = (double)fVar2;
    }
    mobyupdate_helpers::M190_002d2308
              ((double)(DAT_0071f418 * 9.8),0x3ff0000000000000,dVar51,uVar20 - 0x2d0,uVar20 - 0x2c0,
               uVar24);
  }
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    if (*(MobyInstance **)((int)pvVar11 + 0x50) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar11 + 0x50));
      *(undefined4 *)((int)pvVar11 + 0x50) = 0;
    }
  }
  else if (uVar1 == '\x05') {
    moby->state = '\x06';
  }
  else if (uVar1 == '\x04') {
    if ((g_heroState != THROWING_ITEM) && (DAT_0096bd88 == '\0')) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    iVar23 = *(int *)((int)pvVar11 + 0x50);
    if (iVar23 != 0) {
      FUN_0043ce28(uVar20 - 0x2d0,iVar23,*(undefined4 *)(iVar23 + 0x78));
      uVar19 = DAT_00a0fdae;
      if (DAT_00a0fdac != -1) {
        DAT_00a0fdac = DAT_00a0fdac + 1;
      }
      puVar13[0x50] = (longlong)update::g_GameFrameCount;
      puVar13[0x50] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x50] + 0.5));
      iVar23 = *(int *)((int)puVar13 + 0x284);
      if ((int)(uint)uVar19 < iVar23 / 600) {
        sVar14 = (short)(iVar23 >> 0x1f);
        DAT_00a0fdae = ((short)(iVar23 / 600) + sVar14) -
                       ((short)((short)(iVar23 / 0x2580000) + sVar14) >> 0xf);
      }
      DAT_00a0fdb0 = DAT_00a0fdb0 | 1 << (Level & 0x3f) | 0x80000000;
      mobyutil::MB_AddMobyToDynamicGroup(*(MobyInstance **)((int)pvVar11 + 0x50),&DAT_00a51ee8,0x3f)
      ;
      auVar55 = ZEXT416(0xffffffff);
      auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      *(undefined4 *)((int)pvVar11 + 0x50) = 0;
      auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      auVar55 = loadVectorLeftIndexed(0x70,0x2d2708);
      auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar55 = vectorMultiplyAddFloatingPoint
                          (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                           auVar56);
      auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
      auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar24 = storeVectorElementWordIndexed
                         (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0x54,uVar32)
      ;
      *(undefined4 *)((int)pvVar11 + 0x54U & 0xfffffffc) = uVar24;
    }
    auVar55 = ZEXT416(0xffffffff);
    auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
    moby->state = '\x04';
    auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar55 = loadVectorLeftIndexed(0x74,0x2d2708);
    auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar55 = vectorMultiplyAddFloatingPoint
                        (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                         auVar56);
    auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
    auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar24 = storeVectorElementWordIndexed
                       (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0x58,uVar32);
    *(undefined4 *)((int)pvVar11 + 0x58U & 0xfffffffc) = uVar24;
  }
  else if (uVar1 != '\x02') {
    if (uVar1 != '\x01') {
      if (uVar1 != '\0') goto LAB_002d3c9c;
      *(undefined4 *)((int)pvVar11 + 0x50) = 0;
      moby->state = (char)((LZCOUNT(-((byte)moby->field43_0x70 & 2)) << 0x3a) >> 0x3f) + '\x02';
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x02';
    }
  }
LAB_002d3c9c:
  fastfunc::FastDecTimerS32(uVar32 + 0x54);
  iVar23 = *(int *)((int)pvVar11 + 0x50);
  if (iVar23 == 0) {
    if ((*(int *)((int)pvVar11 + 0x54) == 0) && (iVar23 = hero::Hero_GetWeaponAmmo(-1), iVar23 != 0)
       ) {
      *(undefined4 *)((int)puVar13 + 0xcc) = 0;
      *(undefined4 *)(puVar13 + 0x19) = 0;
      *(undefined4 *)((int)puVar13 + 0xc4) = 0;
      *(undefined4 *)(puVar13 + 0x18) = 0;
      uVar24 = Spawn_Moby74_MineBall(moby,uVar32 + 0x40,uVar20 - 0x290);
      *(undefined4 *)((int)pvVar11 + 0x50) = uVar24;
    }
  }
  else {
    *(undefined4 *)(iVar23 + 0x10) = *(undefined4 *)((int)pvVar11 + 0x40);
    *(undefined4 *)(iVar23 + 0x14) = *(undefined4 *)((int)pvVar11 + 0x44);
    *(undefined4 *)(iVar23 + 0x18) = *(undefined4 *)((int)pvVar11 + 0x48);
    *(undefined4 *)(iVar23 + 0x1c) = *(undefined4 *)((int)pvVar11 + 0x4c);
  }
  return;
}



//==== 002d3d88  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1901_002d3d88(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1901_002d3d88(void)

{
  DAT_007bd758 = 0x10000;
  return;
}



//==== 002d3da8  ns=mobyupdate_helpers  size=0x220
// sig: undefined M1901_002d3da8(void)
// callers(1): 002d4550 mobyupdate_unsorted::UpdateMoby_1901
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1901_002d3da8
               (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6,
               int *param_7)

{
  uint uVar1;
  int iVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar6 = 0;
  if (0 < param_6) {
    iVar10 = 0;
    dVar15 = 255.0;
    piVar9 = param_7;
    do {
      iVar7 = 0;
      if (0 < *piVar9) {
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(*(int *)(param_5 + iVar10) + iVar8);
          if (in_r10 == 0) {
            dVar11 = (double)fastfunc::FastIntToDouble(uVar1 & 0xff);
            dVar12 = (double)fastfunc::FastIntToDouble(uVar1 >> 8 & 0xff);
            dVar13 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x10 & 0xff);
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
          }
          else {
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
            dVar12 = dVar15;
            dVar13 = dVar15;
            dVar11 = dVar15;
          }
          dVar14 = (double)(float)(dVar14 * param_4);
          dVar13 = (double)(float)(dVar13 * param_3);
          dVar12 = (double)(float)(dVar12 * param_2);
          iVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * param_1));
          uVar2 = fastfunc::FastDoubleToInt(dVar14);
          uVar3 = fastfunc::FastDoubleToInt(dVar13);
          uVar4 = fastfunc::FastDoubleToInt(dVar12);
          iVar7 = iVar7 + 1;
          *(int *)(*(int *)(param_5 + iVar10) + iVar8) =
               (int)((uVar2 & 0xffffffff) << 0x18) + (int)((uVar3 & 0xffffffff) << 0x10) +
               (int)((uVar4 & 0xffffffff) << 8) + iVar5;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)((int)param_7 + iVar10));
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar6 < param_6);
  }
  return;
}



//==== 002d3fc8  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1901_002d3fc8(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1901_002d3fc8(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007ca50c;
  ppuVar4 = &PTR_DAT_007ca4f8;
  puVar3 = &DAT_007c74f0;
  ppuVar5 = &PTR_DAT_007ca534;
  do {
    mesh::AddUVOffsets(&DAT_010b5050,*ppuVar2,*puVar3,&DAT_010b5ff0 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b5050,0x98);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 5);
  return;
}



//==== 002d40b8  ns=mobyupdate_helpers  size=0x47c
// sig: undefined M1901_002d40b8(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets; 00110b70 mobyutil::MB_IsPntInCuboid; 00174f80 vuchain::SetGSReg; 004d5fe4 idol_draw::DrawDepth; 004d676c FUN_004d676c; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1901_002d40b8(int param_1)

{
  int *piVar1;
  RenderingStep *pRVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  
  piVar1 = *(int **)(param_1 + 0x78);
  stub::STUB_00071170();
  uVar3 = idol_draw::PackCmd(0,1,2,1,0x7f);
  vuchain::SetGSReg(3,uVar3);
  uVar3 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar3);
  uVar3 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar3);
  uVar3 = idol_draw::Blend(0,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar3);
  idol_draw::DrawDepth(DL_DepthPass,0);
  pRVar2 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  idol_draw::DrawDepth(DL_Pass,0);
  pRVar2 = DL_Pass;
  *DL_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar2->command[1] = 0;
  iVar4 = *piVar1;
  pRVar2->command = pRVar2->command + 2;
  iVar4 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)iVar4);
  if (iVar4 != 0) {
    uVar3 = draw::GetEffectTex(0x2c);
    vuchain::SetGSReg(0x18,uVar3);
    iVar4 = EffectTexHeaders;
    pRVar2 = DL_DepthPass;
    iVar5 = draw::GetEffectTex(0x2c);
    FUN_004d676c(pRVar2,0,iVar4 + iVar5 * 0x24,1,1);
    iVar4 = EffectTexHeaders;
    pRVar2 = DL_Pass;
    iVar5 = draw::GetEffectTex(0x2c);
    FUN_004d676c(pRVar2,0,iVar4 + iVar5 * 0x24,1,1);
    iVar4 = 0;
    ppuVar7 = &PTR_DAT_007c7478;
    ppuVar11 = &PTR_DAT_007c7450;
    ppuVar12 = &PTR_DAT_007c74c8;
    puVar9 = &DAT_007bd7a0;
    do {
      mesh::AddUVOffsets(&DAT_010b5050,*ppuVar7,*puVar9,&DAT_010b6000);
      draw::DrawMeshSet(*puVar9,*ppuVar11,*ppuVar12,&DAT_010b5050,0x89);
      iVar4 = iVar4 + 1;
      ppuVar7 = ppuVar7 + 1;
      puVar9 = puVar9 + 1;
      ppuVar11 = ppuVar11 + 1;
      ppuVar12 = ppuVar12 + 1;
    } while (iVar4 < 10);
  }
  uVar3 = draw::GetEffectTex(0x2f);
  vuchain::SetGSReg(0x18,uVar3);
  ppuVar13 = &PTR_DAT_007ca50c;
  ppuVar10 = &PTR_DAT_007ca4f8;
  puVar6 = &DAT_007c74f0;
  ppuVar8 = &PTR_DAT_007ca534;
  iVar4 = 0;
  ppuVar7 = ppuVar13;
  ppuVar11 = ppuVar10;
  ppuVar12 = ppuVar8;
  puVar9 = puVar6;
  do {
    mesh::AddUVOffsets(&DAT_010b5050,*ppuVar7,*puVar9,&DAT_010b5ff0);
    draw::DrawMeshSet(*puVar9,*ppuVar11,*ppuVar12,&DAT_010b5050,0x98);
    iVar4 = iVar4 + 1;
    ppuVar7 = ppuVar7 + 1;
    puVar9 = puVar9 + 1;
    ppuVar11 = ppuVar11 + 1;
    ppuVar12 = ppuVar12 + 1;
  } while (iVar4 < 5);
  uVar3 = idol_draw::PackCmd(0,2,2,1,DAT_007bd784);
  vuchain::SetGSReg(3,uVar3);
  uVar3 = draw::GetEffectTex(0x30);
  vuchain::SetGSReg(0x18,uVar3);
  iVar4 = 0;
  do {
    mesh::AddUVOffsets(&DAT_010b5050,*ppuVar13,*puVar6,&DAT_010b5ff8);
    draw::DrawMeshSet(*puVar6,*ppuVar10,*ppuVar8,&DAT_010b5050,0x98);
    iVar4 = iVar4 + 1;
    ppuVar13 = ppuVar13 + 1;
    puVar6 = puVar6 + 1;
    ppuVar10 = ppuVar10 + 1;
    ppuVar8 = ppuVar8 + 1;
  } while (iVar4 < 5);
  return;
}



//==== 002d4550  ns=mobyupdate_unsorted  size=0x298
// sig: undefined UpdateMoby_1901(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d760 draw::RegisterOceanUpdate; 002d3da8 mobyupdate_helpers::M1901_002d3da8

/* Moby 1901 */

void mobyupdate_unsorted::UpdateMoby_1901(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  fVar2 = DAT_0071f424;
  if (moby->state == 0) {
    if (DAT_010b5040 == 0) {
      uVar12 = 0x3fb99999a0000000;
      uVar11 = 0x3fd99999a0000000;
      uVar10 = 0x3fe0000000000000;
      mobyupdate_helpers::M1901_002d3da8
                (0x3fb99999a0000000,0x3fe0000000000000,0x3fd99999a0000000,0x3fe0000000000000,
                 &PTR_DAT_007ca534,5,&DAT_007c74f0);
      mobyupdate_helpers::M1901_002d3da8
                (uVar12,0x3fe3333340000000,uVar11,uVar10,&PTR_DAT_007c74c8,10,&DAT_007bd7a0);
      DAT_010b5040 = 1;
    }
    iVar3 = 0;
    moby->state = '\x01';
    puVar6 = &DAT_010b5ff0;
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    puVar4 = &DAT_010b5ff4;
    do {
      iVar3 = iVar3 + 1;
      *puVar6 = 0;
      *puVar4 = 0;
      puVar6 = puVar6 + 2;
      puVar4 = puVar4 + 2;
    } while (iVar3 < 2);
  }
  else if (moby->state < 2) {
    pfVar8 = (float *)&DAT_010b5ff0;
    iVar3 = 0;
    pfVar9 = (float *)&DAT_007bd790;
    pfVar5 = (float *)&DAT_010b5ff4;
    pfVar7 = (float *)&DAT_007bd794;
    do {
      fVar1 = *pfVar9 * fVar2 + *pfVar8;
      *pfVar8 = fVar1;
      if (1.0 < fVar1) {
        fVar1 = fVar1 - 1.0;
        *pfVar8 = fVar1;
      }
      if (fVar1 < -1.0) {
        *pfVar8 = fVar1 + 1.0;
      }
      fVar1 = *pfVar7 * fVar2 + *pfVar5;
      *pfVar5 = fVar1;
      if (1.0 < fVar1) {
        fVar1 = fVar1 - 1.0;
        *pfVar5 = fVar1;
      }
      if (fVar1 < -1.0) {
        *pfVar5 = fVar1 + 1.0;
      }
      iVar3 = iVar3 + 1;
      pfVar9 = pfVar9 + 2;
      pfVar8 = pfVar8 + 2;
      pfVar7 = pfVar7 + 2;
      pfVar5 = pfVar5 + 2;
    } while (iVar3 < 2);
    DAT_010b6000 = DAT_007bd788 * fVar2 + DAT_010b6000;
    if (1.0 < DAT_010b6000) {
      DAT_010b6000 = DAT_010b6000 - 1.0;
    }
    if (DAT_010b6000 < -1.0) {
      DAT_010b6000 = DAT_010b6000 + 1.0;
    }
    DAT_010b6004 = DAT_007bd78c * fVar2 + DAT_010b6004;
    if (1.0 < DAT_010b6004) {
      DAT_010b6004 = DAT_010b6004 - 1.0;
    }
    if (DAT_010b6004 < -1.0) {
      DAT_010b6004 = DAT_010b6004 + 1.0;
    }
    draw::RegisterOceanUpdate(&PTR_M1901_002d40b8_0070b310,moby);
  }
  return;
}



//==== 002d47e8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1903_002d47e8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1903_002d47e8(void)

{
  DAT_007ca594 = 0x10000;
  return;
}



//==== 002d4800  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1903_002d4800(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1903_002d4800(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007cdac0;
  ppuVar4 = &PTR_DAT_007cdab0;
  puVar3 = &DAT_007ca618;
  ppuVar5 = &PTR_DAT_007cdae0;
  do {
    mesh::AddUVOffsets(&DAT_010b6050,*ppuVar2,*puVar3,&DAT_010b6018 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b6050,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 4);
  return;
}



//==== 002d48f0  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1903_002d48f0(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1903_002d48f0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007d87d0;
  ppuVar4 = &PTR_DAT_007d87b0;
  puVar3 = &DAT_007d2b78;
  ppuVar5 = &PTR_PTR_007d8810;
  do {
    mesh::AddUVOffsets(&DAT_010b6050,*ppuVar2,*puVar3,&DAT_010b6030 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b6050,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 8);
  return;
}



//==== 002d49e0  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1903_002d49e0(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1903_002d49e0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007d2af4;
  ppuVar4 = &PTR_DAT_007d2ac8;
  puVar3 = &DAT_007cdaf0;
  ppuVar5 = &PTR_PTR_007d2b4c;
  do {
    mesh::AddUVOffsets(&DAT_010b6050,*ppuVar2,*puVar3,&DAT_010b6040 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b6050,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 0xb);
  return;
}



//==== 002d4ad0  ns=mobyupdate_helpers  size=0x698
// sig: undefined M1903_002d4ad0(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets; 00174f80 vuchain::SetGSReg; 004d6bb0 FUN_004d6bb0; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1903_002d4ad0(void)

{
  RenderingStep *pRVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined **ppuVar12;
  int iVar13;
  
  uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar2);
  uVar2 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar2);
  uVar2 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar2);
  uVar2 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar2);
  iVar11 = EffectTexHeaders;
  pRVar1 = ForwardPass;
  lVar3 = draw::GetEffectTex(0x16);
  FUN_004d6bb0(pRVar1,0,iVar11 + (int)(lVar3 << 5) + (int)(lVar3 << 2));
  stub::STUB_00071170();
  uVar2 = draw::GetEffectTex(0x2c);
  vuchain::SetGSReg(0x18,uVar2);
  uVar2 = idol_draw::PackCmd(0,1,0,1,DAT_007ca5d0);
  vuchain::SetGSReg(3,uVar2);
  iVar13 = 0;
  ppuVar6 = &PTR_DAT_007cdab0;
  ppuVar5 = &PTR_DAT_007cdac0;
  puVar9 = &DAT_007ca618;
  ppuVar4 = &PTR_DAT_007cdae0;
  iVar11 = 0;
  ppuVar12 = ppuVar5;
  ppuVar8 = ppuVar6;
  ppuVar7 = ppuVar4;
  puVar10 = puVar9;
  do {
    mesh::AddUVOffsets(&DAT_010b6050,*ppuVar12,*puVar10,&DAT_010b6018);
    draw::DrawMeshSet(*puVar10,*ppuVar8,*ppuVar7,&DAT_010b6050,9);
    iVar13 = iVar13 + 1;
    ppuVar12 = ppuVar12 + 1;
    puVar10 = puVar10 + 1;
    ppuVar8 = ppuVar8 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar13 < 4);
  if (DAT_010b6010 != 0) {
    uVar2 = draw::GetEffectTex(0x29);
    vuchain::SetGSReg(0x18,uVar2);
    uVar2 = idol_draw::PackCmd(0,2,2,1,(int)(DAT_007ca5d4 * (uint)DAT_010b6010) >> 8);
    vuchain::SetGSReg(3,uVar2);
    iVar13 = 0;
    ppuVar12 = ppuVar5;
    ppuVar8 = ppuVar6;
    ppuVar7 = ppuVar4;
    puVar10 = puVar9;
    do {
      mesh::AddUVOffsets(&DAT_010b6050,*ppuVar12,*puVar10,&DAT_010b6020);
      draw::DrawMeshSet(*puVar10,*ppuVar8,*ppuVar7,&DAT_010b6050,9);
      iVar13 = iVar13 + 1;
      ppuVar12 = ppuVar12 + 1;
      puVar10 = puVar10 + 1;
      ppuVar8 = ppuVar8 + 1;
      ppuVar7 = ppuVar7 + 1;
    } while (iVar13 < 4);
    uVar2 = idol_draw::PackCmd(2,0,2,1,(int)(DAT_007ca5d4 * (uint)DAT_010b6010) >> 8);
    vuchain::SetGSReg(3,uVar2);
    iVar13 = 0;
    do {
      mesh::AddUVOffsets(&DAT_010b6050,*ppuVar5,*puVar9,&DAT_010b6028);
      draw::DrawMeshSet(*puVar9,*ppuVar6,*ppuVar4,&DAT_010b6050,9);
      iVar13 = iVar13 + 1;
      ppuVar5 = ppuVar5 + 1;
      puVar9 = puVar9 + 1;
      ppuVar6 = ppuVar6 + 1;
      ppuVar4 = ppuVar4 + 1;
    } while (iVar13 < 4);
  }
  uVar2 = draw::GetEffectTex(0x2a);
  vuchain::SetGSReg(0x18,uVar2);
  uVar2 = idol_draw::PackCmd(0,2,0,1,DAT_007ca604);
  vuchain::SetGSReg(3,uVar2);
  ppuVar6 = &PTR_DAT_007d87d0;
  ppuVar4 = &PTR_DAT_007d87b0;
  puVar9 = &DAT_007d2b78;
  ppuVar5 = &PTR_PTR_007d8810;
  iVar13 = 0;
  ppuVar12 = ppuVar6;
  ppuVar8 = ppuVar4;
  ppuVar7 = ppuVar5;
  puVar10 = puVar9;
  do {
    mesh::AddUVOffsets(&DAT_010b6050,*ppuVar12,*puVar10,&DAT_010b6030);
    draw::DrawMeshSet(*puVar10,*ppuVar8,*ppuVar7,&DAT_010b6050,9);
    iVar13 = iVar13 + 1;
    ppuVar12 = ppuVar12 + 1;
    puVar10 = puVar10 + 1;
    ppuVar8 = ppuVar8 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar13 < 8);
  uVar2 = idol_draw::PackCmd(0,2,0,1,DAT_007ca608);
  vuchain::SetGSReg(3,uVar2);
  iVar13 = 0;
  do {
    mesh::AddUVOffsets(&DAT_010b6050,*ppuVar6,*puVar9,&DAT_010b6038);
    draw::DrawMeshSet(*puVar9,*ppuVar4,*ppuVar5,&DAT_010b6050,9);
    iVar13 = iVar13 + 1;
    ppuVar6 = ppuVar6 + 1;
    puVar9 = puVar9 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar13 < 8);
  uVar2 = draw::GetEffectTex(0x2b);
  vuchain::SetGSReg(0x18,uVar2);
  uVar2 = idol_draw::PackCmd(0,2,0,1,DAT_007ca614);
  vuchain::SetGSReg(3,uVar2);
  ppuVar12 = &PTR_PTR_007d2b4c;
  ppuVar7 = &PTR_DAT_007d2af4;
  puVar10 = &DAT_007cdaf0;
  ppuVar8 = &PTR_DAT_007d2ac8;
  do {
    mesh::AddUVOffsets(&DAT_010b6050,*ppuVar7,*puVar10,&DAT_010b6040);
    draw::DrawMeshSet(*puVar10,*ppuVar8,*ppuVar12,&DAT_010b6050,9);
    iVar11 = iVar11 + 1;
    ppuVar7 = ppuVar7 + 1;
    puVar10 = puVar10 + 1;
    ppuVar8 = ppuVar8 + 1;
    ppuVar12 = ppuVar12 + 1;
  } while (iVar11 < 0xb);
  uVar2 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar2);
  return;
}



//==== 002d5170  ns=mobyupdate_helpers  size=0x220
// sig: undefined M1903_002d5170(void)
// callers(1): 002d5780 mobyupdate_unsorted::UpdateMoby_1903
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1903_002d5170
               (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6,
               int *param_7)

{
  uint uVar1;
  int iVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar6 = 0;
  if (0 < param_6) {
    iVar10 = 0;
    dVar15 = 255.0;
    piVar9 = param_7;
    do {
      iVar7 = 0;
      if (0 < *piVar9) {
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(*(int *)(param_5 + iVar10) + iVar8);
          if (in_r10 == 0) {
            dVar11 = (double)fastfunc::FastIntToDouble(uVar1 & 0xff);
            dVar12 = (double)fastfunc::FastIntToDouble(uVar1 >> 8 & 0xff);
            dVar13 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x10 & 0xff);
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
          }
          else {
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
            dVar12 = dVar15;
            dVar13 = dVar15;
            dVar11 = dVar15;
          }
          dVar14 = (double)(float)(dVar14 * param_4);
          dVar13 = (double)(float)(dVar13 * param_3);
          dVar12 = (double)(float)(dVar12 * param_2);
          iVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * param_1));
          uVar2 = fastfunc::FastDoubleToInt(dVar14);
          uVar3 = fastfunc::FastDoubleToInt(dVar13);
          uVar4 = fastfunc::FastDoubleToInt(dVar12);
          iVar7 = iVar7 + 1;
          *(int *)(*(int *)(param_5 + iVar10) + iVar8) =
               (int)((uVar2 & 0xffffffff) << 0x18) + (int)((uVar3 & 0xffffffff) << 0x10) +
               (int)((uVar4 & 0xffffffff) << 8) + iVar5;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)((int)param_7 + iVar10));
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar6 < param_6);
  }
  return;
}



//==== 002d53b8  ns=mobyupdate_helpers  size=0x14c
// sig: undefined M1903_002d53b8(void)
// callers(1): 002d5780 mobyupdate_unsorted::UpdateMoby_1903
// callees(0): 

void mobyupdate_helpers::M1903_002d53b8
               (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5,
               undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)((double)DAT_0071f424 * param_1 + (double)*param_7);
  *param_7 = fVar1;
  if (1.0 < fVar1) {
    fVar1 = fVar1 - 2.0;
    *param_7 = fVar1;
  }
  if (fVar1 < -1.0) {
    fVar1 = fVar1 + 2.0;
    *param_7 = fVar1;
  }
  fVar2 = (float)((double)DAT_0071f424 * param_2 + (double)param_7[1]);
  param_7[1] = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 2.0;
    param_7[1] = fVar2;
  }
  if (fVar2 < -1.0) {
    param_7[1] = fVar2 + 2.0;
  }
  fVar1 = fVar1 * 3.1415927;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  *param_4 = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3);
  fVar1 = param_7[1] * 3.1415927;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  param_4[1] = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                               fVar4 * -0.0001980741 +
                               fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3
                      );
  return;
}



//==== 002d5510  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M1903_002d5510(void)
// callers(1): 002d5780 mobyupdate_unsorted::UpdateMoby_1903
// callees(0): 

void mobyupdate_helpers::M1903_002d5510(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007ca5dc + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b6018 + iVar1);
  *(float *)((int)&DAT_010b6018 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6018 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6018 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007ca5e0 + iVar1) * fVar3 + *(float *)((int)&DAT_010b601c + iVar1);
  *(float *)((int)&DAT_010b601c + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b601c + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b601c + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 002d55d0  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M1903_002d55d0(void)
// callers(1): 002d5780 mobyupdate_unsorted::UpdateMoby_1903
// callees(0): 

void mobyupdate_helpers::M1903_002d55d0(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007ca5f4 + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b6030 + iVar1);
  *(float *)((int)&DAT_010b6030 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6030 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6030 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007ca5f8 + iVar1) * fVar3 + *(float *)((int)&DAT_010b6034 + iVar1);
  *(float *)((int)&DAT_010b6034 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6034 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6034 + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 002d5690  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M1903_002d5690(void)
// callers(1): 002d5780 mobyupdate_unsorted::UpdateMoby_1903
// callees(0): 

void mobyupdate_helpers::M1903_002d5690(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007ca60c + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b6040 + iVar1);
  *(float *)((int)&DAT_010b6040 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6040 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6040 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007ca610 + iVar1) * fVar3 + *(float *)((int)&DAT_010b6044 + iVar1);
  *(float *)((int)&DAT_010b6044 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6044 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6044 + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 002d5780  ns=mobyupdate_unsorted  size=0x350
// sig: undefined UpdateMoby_1903(MobyInstance * moby)
// callers(0): 
// callees(8): 0006d720 RegisterFuncForMoby; 002d5170 mobyupdate_helpers::M1903_002d5170; 002d53b8 mobyupdate_helpers::M1903_002d53b8; 002d5510 mobyupdate_helpers::M1903_002d5510; 002d55d0 mobyupdate_helpers::M1903_002d55d0; 002d5690 mobyupdate_helpers::M1903_002d5690; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView
// strings: 002d5750: '?fff?' (raw)

/* Moby 1903 */

void mobyupdate_unsorted::UpdateMoby_1903(MobyInstance *moby)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 local_40 [16];
  
  if (moby->state == 0) {
    if (DAT_010b6014 == 0) {
      uVar6 = 0x3fe6666660000000;
      uVar4 = 0x3ff0000000000000;
      uVar3 = 0x3fe0000000000000;
      mobyupdate_helpers::M1903_002d5170
                (0x3fe6666660000000,0x3ff0000000000000,0x3fecccccc0000000,0x3fe0000000000000,
                 &PTR_DAT_007cdae0,4,&DAT_007ca618);
      mobyupdate_helpers::M1903_002d5170
                (uVar3,uVar3,uVar3,uVar4,&PTR_PTR_007d2b4c,0xb,&DAT_007cdaf0);
      mobyupdate_helpers::M1903_002d5170
                (0x3fd0000000000000,0x3fd0000000000000,0x3fd0000000000000,uVar6,&PTR_PTR_007d8810,8,
                 &DAT_007d2b78);
      DAT_010b6014 = 1;
    }
    auVar9 = ZEXT416(0);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    moby->state = '\x01';
    DAT_010b6018 = 0;
    DAT_010b601c = 0;
    DAT_010b6020 = 0;
    DAT_010b6024 = 0;
    DAT_010b6028 = 0;
    DAT_010b602c = 0;
    DAT_010b6048 = 0;
    DAT_010b604c = 0;
    DAT_010b6030 = 0;
    DAT_010b6034 = storeVectorElementWordIndexed(auVar8,0x6034,0x10b0000);
    DAT_010b6038 = 0;
    auVar9 = loadVectorLeftIndexed(0x14,0x2d5748);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010b603c = storeVectorElementWordIndexed
                             (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,0x10b603c)
    ;
    DAT_010b6040 = 0;
    DAT_010b6044 = storeVectorElementWordIndexed(auVar8,0x6044,0x10b0000);
  }
  else if ((((moby->state < 2) &&
            (0x4329ffff <
             (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
                  ((int)GameCamera.posZ >> 0x1f)))) &&
           (iVar1 = fastfunc::FastCheckBsphereInView(0x408f400000000000,local_40), -1 < iVar1)) &&
          (0x43340000 <
           (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
                ((int)GameCamera.posZ >> 0x1f)))) {
    dVar7 = 35.0;
    dVar5 = (double)SQRT((GameCamera.posZ - DAT_007ca5c8) * (GameCamera.posZ - DAT_007ca5c8) +
                         (GameCamera.posX - DAT_007ca5c0) * (GameCamera.posX - DAT_007ca5c0) +
                         (GameCamera.posY - DAT_007ca5c4) * (GameCamera.posY - DAT_007ca5c4));
    uVar2 = DAT_010b6010;
    if (dVar5 <= 35.0) {
      mobyupdate_helpers::M1903_002d5510(0);
      mobyupdate_helpers::M1903_002d53b8
                (0x3fe0a3d700000000,0x3fe3d70a40000000,0x3faeb851e0000000,&DAT_010b6020);
      mobyupdate_helpers::M1903_002d5510(2);
      uVar2 = 0xff;
      if ((15.0 <= dVar5) && (uVar2 = 0, dVar5 < dVar7)) {
        uVar2 = fastfunc::FastDoubleToInt((double)(-((float)(dVar5 - 15.0) * 0.05 - 1.0) * 255.0));
      }
    }
    DAT_010b6010 = uVar2;
    mobyupdate_helpers::M1903_002d5690(0);
    mobyupdate_helpers::M1903_002d55d0(0);
    mobyupdate_helpers::M1903_002d55d0(1);
    RegisterFuncForMoby(&PTR_M1903_002d4ad0_0070b340,moby);
  }
  return;
}



//==== 002d5ad0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1906_002d5ad0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1906_002d5ad0(void)

{
  DAT_007d887c = 0x10000;
  return;
}



//==== 002d5b20  ns=mobyupdate_helpers  size=0x3f4
// sig: undefined M1906_002d5b20(void)
// callers(1): 002d6498 mobyupdate_unsorted::UpdateMoby_1906
// callees(5): 001009b0 mobyutil::MB_MoveAndCollide; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00502578 fastfunc::FastWrapRot

double mobyupdate_helpers::M1906_002d5b20(int param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined *unused;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  undefined8 uVar26;
  float fStack00000040;
  float fStack00000044;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar15 = uVar14 - 0x100;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar14;
  puVar7[0x22] = in_LR;
  puVar7[0x1d] = in_f29;
  puVar7[0x1e] = in_f30;
  puVar7[0x1f] = in_f31;
  fVar2 = *(float *)(param_1 + 0x10);
  puVar7[0x1c] = unaff_r31;
  fStack00000044 = (float)param_3;
  dVar24 = (double)fStack00000044;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  dVar23 = (double)fStack00000040;
  fVar1 = (float)(dVar24 - (double)*(float *)(param_1 + 0x14));
  fVar2 = (float)(dVar23 - (double)fVar2);
  unused = &mobyutil::g_atanQuadrantTable;
  fVar3 = ABS(fVar1);
  fVar5 = ABS(fVar2);
  *(float *)(puVar7 + 0x11) = fVar1;
  puVar7[0x1b] = unaff_r30;
  *(float *)((int)puVar7 + 0x84) = fVar2;
  iVar6 = *(int *)(param_1 + 0x78);
  *(float *)((int)puVar7 + 0x8c) = fVar5 - fVar3;
  dVar25 = 0.0;
  fVar1 = *(float *)(iVar6 + 0x1ec);
  uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1d) & 4;
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar4 = ABS(*(float *)((int)puVar7 + 0x84));
  if (*(float *)((int)puVar7 + 0x8c) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)(puVar7 + 0x11));
  if (*(float *)((int)puVar7 + 0x8c) - 0.0 < 0.0) {
    fVar10 = fVar5;
  }
  puVar7[0x1a] = unaff_r29;
  puVar7[0x19] = unaff_r28;
  puVar7[0x18] = unaff_r27;
  puVar7[0x17] = unaff_r26;
  dVar22 = dVar25;
  if (0.0 < fVar4) {
    lVar19 = uVar14 - 0xf0;
    lVar17 = uVar14 - 0x70;
    lVar16 = uVar14 - 0x60;
    lVar21 = 2;
    fVar4 = (fVar10 - fVar4) / (fVar10 + fVar4);
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    *(float *)((int)puVar7 + 0x94) = fVar4;
    *(float *)(puVar7 + 0x13) = fVar4;
    *(float *)(puVar7 + 0x12) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar5;
    *(float *)(puVar7 + 0x13) = *(float *)(puVar7 + 0x13) * fVar4;
    *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar19 + 0x90) = *(float *)((int)lVar19 + 0x80) * fVar4 * fVar4;
      iVar8 = (int)lVar17;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar19 = uVar14 - 0x70;
    pfVar20 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar16 = lVar19;
    lVar17 = lVar15;
    do {
      fVar4 = *pfVar20;
      fVar5 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x90) * fVar4;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    do {
      iVar8 = (int)lVar15;
      iVar9 = (int)lVar19;
      lVar15 = lVar15 + 0x10;
      lVar19 = lVar19 + 0x10;
      unused = (undefined *)lVar19;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0x90)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
  }
  _fStack00000040 = param_3;
  dVar22 = (double)fastfunc::FastWrapRot((float)dVar22,fVar1);
  mobyutil::OrganicDeltAng
            ((float)dVar22,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
             mobyutil::g_FrameTime * 6.2831855,(float *)(param_1 + 0x48),(int)unused,
             (float *)(iVar6 + 0x1e8));
  fVar1 = (float)((double)*(float *)(param_1 + 0x14) - dVar24);
  fVar2 = (float)((double)*(float *)(param_1 + 0x10) - dVar23);
  *(undefined4 *)(puVar7 + 0x10) = 0;
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  dVar23 = (double)fVar1;
  mobyutil::OrganicDelt
            (fVar1,DAT_0071f418 * 6.0,DAT_0071f418 * 6.0,mobyutil::g_FrameTime * 5.0,
             (float *)(puVar7 + 0x10),(int)unused,(float *)(iVar6 + 0x1f0));
  fVar3 = mobyutil::g_FrameTime;
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar10 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar10 = fVar4;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = fVar10 * fVar10;
  fVar4 = fVar1 * fVar1;
  fVar12 = fVar2 * fVar2 * fVar10;
  fVar5 = fVar4 * fVar4 * fVar1;
  fVar13 = fVar2 * fVar12;
  fVar11 = fVar4 * fVar5;
  *(float *)(puVar7 + 0xe) =
       (fVar4 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) *
       *(float *)(iVar6 + 0x1f0);
  fVar1 = *(float *)(iVar6 + 0x1f0);
  *(undefined4 *)(puVar7 + 0xf) = 0;
  *(float *)((int)puVar7 + 0x74) =
       (fVar2 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar2 * fVar10 * -0.16666657 + fVar10) *
       fVar1;
  *(float *)(puVar7 + 0xf) = fVar3 * -2.0;
  uVar26 = 0x3fe0000000000000;
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar25,param_1,uVar14 - 0x90);
  mobyutil::MB_PushOutOfSplineWalls(uVar26,*(undefined4 *)(iVar6 + 0x1e0));
  return dVar23;
}



//==== 002d5f48  ns=mobyupdate_helpers  size=0x514
// sig: undefined M1906_002d5f48(void)
// callers(1): 002d6498 mobyupdate_unsorted::UpdateMoby_1906
// callees(12): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1906_002d5f48(MobyInstance *param_1)

{
  bool bVar1;
  float fVar2;
  void *pvVar3;
  f32 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  u8 uVar12;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int local_50;
  float local_4c;
  float local_48 [2];
  longlong local_40;
  
  uVar12 = param_1->state;
  pvVar3 = param_1->pVar;
  uVar13 = ZEXT48(pvVar3);
  if ((uVar12 != '\0') && (uVar12 != '\b')) {
    if ((uVar12 != '\a') && (DAT_010b6ff4 != worldUpdateTime)) {
      DAT_010b6ff4 = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M1907_002d74b8_0070b3b0,param_1);
      uVar12 = param_1->state;
    }
    if ((uVar12 == '\x04') || (fVar2 = DAT_007d88b8, uVar12 == '\x05')) {
      fVar2 = DAT_007d88bc;
    }
    dVar14 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar3 + 0x1f8),
                                fVar2 * 0.017453292 * mobyutil::g_FrameTime);
    uVar6 = DAT_007d88b4;
    uVar5 = DAT_007d88b0;
    dVar15 = (double)(float)(3.141592502593994 - dVar14);
    if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
      dVar15 = dVar14;
    }
    dVar16 = (double)(float)(-3.141592502593994 - dVar14);
    if ((double)(float)(-3.141592502593994 - dVar14) - dVar15 < 0.0) {
      dVar16 = dVar15;
    }
    *(float *)((int)pvVar3 + 0x1f8) = (float)dVar14;
    dVar14 = (double)(float)(dVar16 * dVar16);
    dVar17 = (double)(float)(dVar14 * (double)(float)(dVar14 * dVar16));
    dVar15 = (double)(float)(dVar14 * dVar17);
    uVar8 = fastfunc::FastLerpColor
                      ((double)(((float)(dVar14 * dVar15) * 2.601887e-06 +
                                (float)(dVar15 * -0.0001980741071747616 +
                                       (double)(float)(dVar17 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar14 * 
                                                  dVar16) * -0.16666656732559204 + dVar16)))) * 0.5
                               + 0.5),uVar5,uVar6);
    fVar4 = (param_1->pos).z;
    param_1->field60_0x90 = uVar8;
    uVar8 = (int)fVar4 >> 0x1f;
    uVar12 = param_1->state;
    fVar2 = param_1->pClass->gScale;
    if (((int)((uVar8 >> 1 ^ (uint)fVar4) - uVar8) < 0x42c80000) && (uVar12 != '\a')) {
      uVar12 = '\x06';
      param_1->state = '\x06';
    }
    bVar1 = g_heroState == MOVEMENT_LOCKED;
    param_1->scale = fVar2 * DAT_007d88ac;
    if (((bVar1) || (g_gameMode == GAME_MODE_SCENE)) && (uVar12 != '\a')) {
      param_1->state = '\b';
      if (param_1->animationId != '\0') {
        local_40 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
      }
      param_1->collision = (ushort *)0x0;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    }
    else {
      dVar15 = 0.0;
      local_4c = 0.0;
      iVar9 = mobyutil::MB_damage(param_1,0x330000,0);
      mobyutil::MB_HandleDamage(param_1,iVar9,uVar13 + 0x20,0,&local_50,&local_4c,0,4);
      if (((local_50 != 1) && (param_1->state != '\x06')) && (local_4c != 0.0)) {
        fVar2 = *(float *)((int)pvVar3 + 0x20) - local_4c;
        *(float *)((int)pvVar3 + 0x20) = fVar2;
        if ((double)fVar2 <= dVar15) {
          iVar10 = mobyutil::MB_randInt(2);
          if (iVar10 == 0) {
            *(undefined4 *)((int)pvVar3 + 0x98) = 0x3f000000;
            fVar2 = DAT_0071f418;
            *(float *)((int)pvVar3 + 0x80) = DAT_007d88c0 * DAT_0071f418;
            fVar7 = DAT_007d88c4;
            *(undefined4 *)((int)pvVar3 + 0x90) = 0x200;
            *(float *)((int)pvVar3 + 0x84) = fVar7 * fVar2;
            fVar2 = mobyutil::g_FrameTime;
            *(float *)((int)pvVar3 + 0x88) = DAT_007d88c8 * mobyutil::g_FrameTime;
            fVar7 = DAT_007d88cc;
            *(undefined1 *)((int)pvVar3 + 0xad) = 0;
            *(float *)((int)pvVar3 + 0x8c) = fVar7 * fVar2;
            *(undefined4 *)((int)pvVar3 + 0x94) = 0x29;
            param_1->modeBits =
                 param_1->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            *(float *)((int)pvVar3 + 0xbc) = fVar2 * 2.0;
            mobyutil::MB_VecAtan2Angles
                      (*(undefined8 *)(iVar9 + 0x10),*(undefined8 *)(iVar9 + 0x18),local_48,
                       uVar13 + 0x88,uVar13 + 0x8c);
            mobyutil::MB_StartKick((double)local_48[0],param_1,uVar13 + 0x70);
            *(undefined4 *)((int)pvVar3 + 0xc0) = 0x40f00000;
            param_1->collision = (ushort *)0x0;
            *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41700000;
            param_1->state = '\x05';
            *(undefined1 *)((int)pvVar3 + 0x67) = 0x78;
            mobyutil::MB_UpdateLightsTransition(param_1,uVar13 + 0x60);
          }
          else {
            param_1->state = '\x06';
          }
        }
      }
      param_1->damage = -1;
      mobyutil::MB_ColorDyingMoby(param_1,uVar13 + 0x60);
      mobyutil::MB_getTargetInArea
                (0x4080000000000000,param_1,uVar13 + 0x180,&DAT_002d5f14,0,0,
                 Splines[*(int *)((int)pvVar3 + 0x1e0)]->points,
                 Splines[*(int *)((int)pvVar3 + 0x1e0)]->cnt);
      if (*(int *)((int)pvVar3 + 0x1c4) == 2) {
        if (hero::g_heroStateType == 0xf) {
          piVar11 = DAT_0096a240 + *DAT_0096a240 * 4;
          *(int *)((int)pvVar3 + 0x180) = *piVar11;
          *(int *)((int)pvVar3 + 0x184) = piVar11[1];
          *(int *)((int)pvVar3 + 0x188) = piVar11[2];
          *(int *)((int)pvVar3 + 0x18c) = piVar11[3];
        }
        else {
          *(float *)((int)pvVar3 + 0x180) = g_heroPosition.x;
          *(float *)((int)pvVar3 + 0x184) = g_heroPosition.y;
          *(float *)((int)pvVar3 + 0x188) = g_heroPosition.z;
          *(float *)((int)pvVar3 + 0x18c) = g_heroPosition.w;
        }
      }
      if (*(int *)((int)pvVar3 + 0x1c0) == 0) {
        *(MobyInstance **)((int)pvVar3 + 0x1c0) = g_heroMobyPtr;
      }
    }
  }
  return;
}



//==== 002d6498  ns=mobyupdate_unsorted  size=0xa7c
// sig: undefined UpdateMoby_1906(MobyInstance * moby)
// callers(0): 
// callees(15): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 001059f0 mobyutil::DamageSphereAtBone; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 00113e88 mobyutil::MB_MayaFrameTrigger; 002d5b20 mobyupdate_helpers::M1906_002d5b20; 002d5f48 mobyupdate_helpers::M1906_002d5f48; 0048c188 FUN_0048c188; 00500b64 fastfunc::FastEulerToMtx

/* Moby 1906 */

void mobyupdate_unsorted::UpdateMoby_1906(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  undefined4 uVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  void *pvVar13;
  ulonglong *puVar14;
  int iVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar21;
  MobyModeBit MVar23;
  f32 *val;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar22;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x150;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar17;
  puVar14[0x2c] = in_LR;
  puVar14[0x29] = unaff_r31;
  puVar14[0x28] = unaff_r30;
  puVar14[0x27] = unaff_r29;
  pvVar13 = moby->pVar;
  mobyupdate_helpers::M1906_002d5f48();
  uVar1 = moby->state;
  if (uVar1 == '\a') {
    iVar21 = FUN_0048c188(lVar18,(int)pvVar13 + 0x70);
    if (iVar21 != 0) {
      moby->state = '\x02';
      *(undefined2 *)((int)pvVar13 + 0x138) = 0;
    }
  }
  else if (uVar1 == '\x06') {
    fVar2 = (moby->pos).y;
    *(f32 *)(puVar14 + 0x1c) = (moby->pos).x;
    fVar4 = (moby->pos).w;
    *(f32 *)((int)puVar14 + 0xe4) = fVar2;
    *(f32 *)((int)puVar14 + 0xec) = fVar4;
    fVar5 = (moby->pos).z;
    puVar14[0x12] = 4;
    puVar14[0x14] = 0;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    *(float *)(puVar14 + 0x1d) = fVar5 + 0.5;
    mobyutil::MB_genericExplosion
              (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,0x3fe0000000000000,0,
               lVar18,(int)pvVar13 + 0x40,uVar17 - 0x70,&DAT_002d645c,4,5,2,4);
    moby->state = '\b';
    if (moby->animationId != '\0') {
      puVar14[0x24] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar18,0,0,*(undefined4 *)((int)puVar14 + 0x124));
    }
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
  }
  else if (uVar1 == '\x05') {
    uVar22 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar13 + 0x70));
    if ((uVar22 & 0x140) != 0) {
      fVar2 = (moby->pos).y;
      *(f32 *)(puVar14 + 0x1a) = (moby->pos).x;
      fVar4 = (moby->pos).w;
      *(f32 *)((int)puVar14 + 0xd4) = fVar2;
      *(f32 *)((int)puVar14 + 0xdc) = fVar4;
      fVar5 = (moby->pos).z;
      puVar14[0x12] = 4;
      puVar14[0x14] = 0;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      *(float *)(puVar14 + 0x1b) = fVar5 + 0.5;
      mobyutil::MB_genericExplosion
                (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,0x3fe0000000000000,0,
                 lVar18,(int)pvVar13 + 0x40,uVar17 - 0x80,&DAT_002d645c,4,5,2,4);
      moby->state = '\b';
      if (moby->animationId != '\0') {
        puVar14[0x24] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar18,0,0,*(undefined4 *)((int)puVar14 + 0x124));
      }
      moby->collision = (ushort *)0x0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    }
  }
  else if (uVar1 == '\x04') {
    fVar5 = *(float *)((int)pvVar13 + 0x180) - (moby->pos).x;
    fVar6 = *(float *)((int)pvVar13 + 0x184) - (moby->pos).y;
    val = &(moby->rotation).z;
    fVar7 = ABS(fVar5);
    fVar8 = ABS(fVar6);
    *(float *)(puVar14 + 0x1e) = fVar5;
    *(float *)((int)puVar14 + 0xf4) = fVar6;
    *(float *)(puVar14 + 0x1f) = fVar7 - fVar8;
    fVar5 = 0.0;
    uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar14 + 0x1e));
    if (*(float *)(puVar14 + 0x1f) - 0.0 < 0.0) {
      fVar6 = fVar8;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar8 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar14 + 0xf4));
    if (*(float *)(puVar14 + 0x1f) - 0.0 < 0.0) {
      fVar10 = fVar7;
    }
    if (0.0 < fVar6) {
      lVar26 = uVar17 - 0x140;
      lVar24 = uVar17 - 0x44;
      lVar25 = uVar17 - 0x54;
      lVar28 = 2;
      fVar6 = (fVar10 - fVar6) / (fVar10 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar14 + 0x21) = fVar6;
      *(float *)(puVar14 + 0x20) = fVar6;
      *(float *)((int)puVar14 + 0x104) = fVar6;
      *(float *)((int)puVar14 + 0xfc) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar7;
      *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar6;
      *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar26 + 0xfc) = *(float *)((int)lVar26 + 0xec) * fVar6 * fVar6;
        iVar21 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar26 = uVar17 - 0x54;
      lVar28 = 4;
      pfVar27 = (float *)&DAT_007358e0;
      lVar24 = lVar26;
      lVar25 = lVar20;
      do {
        fVar6 = *pfVar27;
        fVar7 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0xfc) = *(float *)((int)lVar25 + 0xfc) * fVar6;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar24 = 2;
      do {
        iVar21 = (int)lVar20;
        iVar15 = (int)lVar26;
        lVar20 = lVar20 + 0x10;
        lVar26 = lVar26 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar21 + 0xfc) + *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8)
                + *(float *)(iVar15 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      fVar5 = (fVar5 + 0.7853982) * fVar9 + fVar8;
    }
    mobyutil::OrganicDeltAng
              (fVar5,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               mobyutil::g_FrameTime * 6.2831855,val,(int)val,(float *)((int)pvVar13 + 0x1e8));
    iVar21 = mobyutil::MB_MayaFrameTrigger(14.0,moby);
    if (iVar21 != 0) {
      puVar14[0xe] = 0;
      mobyutil::DamageSphereAtBone
                (0x3fe0000000000000,0x3ff0000000000000,0x3ff0000000000000,lVar18,1,0,1);
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (*(int *)((int)pvVar13 + 0x1c4) == 2) {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          puVar14[0x24] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar18,0,0,*(undefined4 *)((int)puVar14 + 0x124));
        }
      }
      else {
        fVar5 = (moby->pos).y - *(float *)((int)pvVar13 + 0x184);
        fVar6 = (moby->pos).x - *(float *)((int)pvVar13 + 0x180);
        if ((2.5 < SQRT(fVar6 * fVar6 + fVar5 * fVar5)) &&
           (moby->state = '\x03', moby->animationId != '\x01')) {
          puVar14[0x24] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar18,1,0,*(undefined4 *)((int)puVar14 + 0x124));
        }
      }
    }
  }
  else if (uVar1 == '\x03') {
    uVar3 = *(undefined4 *)((int)pvVar13 + 0x188);
    *(undefined4 *)(puVar14 + 8) = *(undefined4 *)((int)pvVar13 + 0x180);
    *(undefined4 *)(puVar14 + 9) = uVar3;
    uVar3 = *(undefined4 *)((int)pvVar13 + 0x18c);
    *(undefined4 *)((int)puVar14 + 0x44) = *(undefined4 *)((int)pvVar13 + 0x184);
    *(undefined4 *)((int)puVar14 + 0x4c) = uVar3;
    dVar29 = (double)mobyupdate_helpers::M1906_002d5b20(lVar18,3,puVar14[8],puVar14[9]);
    if ((*(int *)((int)pvVar13 + 0x1c4) != 2) || (5.0 <= dVar29)) {
      if ((dVar29 < 1.5) &&
         (moby->state = '\x04', fVar5 = animationSpeed, moby->animationId != '\x02')) {
        puVar14[0x24] = (longlong)(int)DAT_010b6ff0;
        puVar14[0x24] = (longlong)(int)(fVar5 * 5.5);
        mobyutil::MB_SetAnimation
                  (lVar18,2,*(undefined4 *)((int)puVar14 + 0x124),
                   *(undefined4 *)((int)puVar14 + 0x124));
      }
    }
    else {
      moby->state = '\x02';
      if (moby->animationId != '\0') {
        puVar14[0x24] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar18,0,0,*(undefined4 *)((int)puVar14 + 0x124));
      }
    }
  }
  else if (uVar1 == '\x02') {
    if (((*(int *)((int)pvVar13 + 0x1c4) != 2) ||
        (fVar5 = (moby->pos).y - *(float *)((int)pvVar13 + 0x184),
        fVar6 = (moby->pos).x - *(float *)((int)pvVar13 + 0x180),
        10.0 < SQRT(fVar6 * fVar6 + fVar5 * fVar5))) &&
       (moby->state = '\x03', moby->animationId != '\x01')) {
      puVar14[0x24] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar18,1,0,*(undefined4 *)((int)puVar14 + 0x124));
    }
  }
  else if (uVar1 == '\x01') {
    *(float *)((int)pvVar13 + 0x1d8) = -(DAT_0071f418 * 10.0 - *(float *)((int)pvVar13 + 0x1d8));
    fVar7 = (moby->pos).x + *(float *)((int)pvVar13 + 0x1d0);
    fVar5 = (moby->pos).z;
    fVar2 = (moby->pos).w;
    (moby->pos).x = fVar7;
    fVar8 = (moby->pos).y + *(float *)((int)pvVar13 + 0x1d4);
    (moby->pos).y = fVar8;
    fVar6 = *(float *)((int)pvVar13 + 0x1d8);
    *(float *)(puVar14 + 0x18) = fVar7;
    fVar5 = fVar5 + fVar6;
    *(float *)((int)puVar14 + 0xc4) = fVar8;
    *(f32 *)((int)puVar14 + 0xcc) = fVar2;
    (moby->pos).z = fVar5;
    *(float *)(puVar14 + 0x19) = fVar5 + 1.0;
    dVar29 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar17 - 0x90,0);
    fVar2 = (moby->pos).z;
    uVar22 = (int)fVar2 >> 0x1f;
    if (dVar29 <= (double)(moby->pos).z) {
      if ((int)((uVar22 >> 1 ^ (uint)fVar2) - uVar22) < 0x41200000) {
        moby->state = '\x06';
      }
    }
    else {
      uVar1 = moby->animationId;
      (moby->pos).z = (float)dVar29;
      moby->state = '\x02';
      if (uVar1 != '\0') {
        puVar14[0x24] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar18,0,0,*(undefined4 *)((int)puVar14 + 0x124));
      }
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\b';
    iVar21 = mobyutil::MB_randInt(2);
    uVar3 = DAT_010b6ff8;
    if (iVar21 == 0) {
      MVar23 = moby->modeBits &
               (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    }
    else {
      MVar23 = moby->modeBits | MIRROR;
    }
    moby->modeBits = MVar23 | LOCK_ROTATION;
    moby->field46_0x73 = (char)uVar3;
    *(undefined4 *)((int)pvVar13 + 0x20) = 0x3f800000;
    *(undefined ***)((int)pvVar13 + 0x140) = &PTR_DAT_007d88a0;
    *(undefined2 *)((int)pvVar13 + 0x24) = 1;
    *(undefined1 *)((int)pvVar13 + 0x58) = 8;
    *(undefined1 *)((int)pvVar13 + 0x5c) = 1;
    *(undefined4 *)((int)pvVar13 + 0x30) = 0x3f000000;
    dVar29 = (double)mobyutil::MB_randRot();
    MVar23 = moby->modeBits;
    *(float *)((int)pvVar13 + 0x1f8) = (float)dVar29;
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         MVar23 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                   DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                   TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
  }
  fastfunc::FastEulerToMtx(lVar18 + 0xc0,lVar18 + 0x40);
  if (*(int *)((int)pvVar13 + 500) != 0) {
    mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,(float *)((int)pvVar13 + 500));
    fVar16 = *(float *)((int)pvVar13 + 500) + 1.0;
    fVar5 = (moby->transform).v2.y;
    fVar6 = (moby->transform).v2.z;
    fVar7 = (moby->transform).v0.x;
    fVar8 = (moby->transform).v0.y;
    fVar9 = (moby->transform).v0.z;
    fVar10 = (moby->transform).v1.x;
    fVar11 = (moby->transform).v1.y;
    fVar12 = (moby->transform).v1.z;
    (moby->transform).v2.x = (moby->transform).v2.x * fVar16;
    (moby->transform).v2.y = fVar5 * fVar16;
    (moby->transform).v2.z = fVar6 * fVar16;
    fVar5 = 1.0 - *(float *)((int)pvVar13 + 500);
    (moby->transform).v0.x = fVar7 * fVar5;
    (moby->transform).v0.y = fVar8 * fVar5;
    (moby->transform).v0.z = fVar9 * fVar5;
    (moby->transform).v1.x = fVar10 * fVar5;
    (moby->transform).v1.y = fVar11 * fVar5;
    (moby->transform).v1.z = fVar12 * fVar5;
    RegisterFuncForMoby(&PTR_M1907_002d7188_0070b3a8,moby);
  }
  return;
}



//==== 002d6f28  ns=Global  size=0x1d4
// sig: undefined FUN_002d6f28(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(2): 000fe4f0 mobyutil::MB_randRangeSigned; 00108180 mobyutil::MB_computeLobVelocity

undefined8 FUN_002d6f28(double param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  ushort *puVar10;
  double dVar11;
  
  pMVar9 = MobyInstance;
  puVar10 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_2 << 2));
  if (puVar10 != (ushort *)0x0) {
    do {
      uVar5 = *puVar10 & 0x7fff;
      if ((MobyInstance[uVar5].oClass == GADGEBOT_0772) && (MobyInstance[uVar5].state == '\b')) {
        pMVar8 = MobyInstance + uVar5;
        pvVar3 = MobyInstance[uVar5].pVar;
        MobyInstance[uVar5].collision = (MobyInstance[uVar5].pClass)->collision;
        pMVar9[uVar5].modeBits =
             pMVar8->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
        pMVar9[uVar5].pos.x = *param_3;
        pMVar9[uVar5].pos.y = param_3[1];
        pMVar9[uVar5].pos.z = param_3[2];
        fVar1 = param_3[3];
        pMVar9[uVar5].state = '\x01';
        pMVar9[uVar5].pos.w = fVar1;
        *(undefined4 *)((int)pvVar3 + 500) = 0x3f800000;
        fVar1 = *param_4 - *param_3;
        *(float *)((int)pvVar3 + 0x1d0) = fVar1;
        fVar4 = param_4[1] - param_3[1];
        *(float *)((int)pvVar3 + 0x1d4) = fVar4;
        dVar11 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4);
        *(float *)((int)pvVar3 + 0x1d8) = param_4[2] - param_3[2];
        *(float *)((int)pvVar3 + 0x1dc) = param_4[3];
        *(undefined4 *)((int)pvVar3 + 0x1d8) = 0;
        fVar1 = fVar1 * (float)(param_1 / dVar11);
        fVar4 = fVar4 * (float)(param_1 / dVar11);
        fVar6 = 0.0;
        if (0.0 - dVar11 < 0.0) {
          fVar6 = fVar1;
        }
        fVar7 = 0.0;
        if (0.0 - dVar11 < 0.0) {
          fVar7 = fVar4;
        }
        if (dVar11 - 0.0 < 0.0) {
          fVar6 = fVar1;
        }
        if (dVar11 - 0.0 < 0.0) {
          fVar7 = fVar4;
        }
        *(float *)((int)pvVar3 + 0x1d0) = fVar6;
        *(float *)((int)pvVar3 + 0x1d4) = fVar7;
        dVar11 = (double)mobyutil::MB_computeLobVelocity
                                   (param_1,(double)(DAT_0071f418 * -10.0),param_3,param_4,param_4,0
                                    ,0);
        *(float *)((int)pvVar3 + 0x1d8) = (float)dVar11;
        dVar11 = (double)mobyutil::MB_randRangeSigned(0x402e000000000000,0x4046800000000000);
        *(float *)((int)pvVar3 + 0x1ec) = (float)(dVar11 * 0.01745329238474369);
        return 1;
      }
      uVar2 = *puVar10;
      puVar10 = puVar10 + 1;
    } while (-1 < (short)uVar2);
  }
  return 0;
}



//==== 002d70fc  ns=Global  size=0x7c
// sig: undefined FUN_002d70fc(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

short FUN_002d70fc(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 == (ushort *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = 0;
    do {
      if ((MobyInstance[*puVar2 & 0x7fff].oClass == GADGEBOT_0772) &&
         (MobyInstance[*puVar2 & 0x7fff].state != '\b')) {
        sVar3 = sVar3 + 1;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return sVar3;
}



//==== 002d7188  ns=mobyupdate_helpers  size=0x328
// sig: undefined M1907_002d7188(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1907_002d7188(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  longlong lVar18;
  undefined4 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar22 = uVar16 - 0x160;
  puVar6 = (ulonglong *)lVar22;
  *puVar6 = uVar16;
  puVar6[0x2e] = in_LR;
  puVar6[0x2a] = in_f30;
  puVar6[0x2b] = in_f31;
  puVar6[0x29] = unaff_r31;
  fVar12 = DAT_007d88ec;
  iVar5 = *(int *)(param_1 + 0x78);
  dVar30 = 1.0;
  fVar1 = *(float *)(iVar5 + 500);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar8 = GameCamera.posX - fVar2;
  fVar7 = fVar1 + 1.0 + DAT_007d88e8;
  fVar9 = fVar7 * fVar8;
  fVar10 = fVar7 * (GameCamera.posY - fVar3);
  puVar6[0x28] = unaff_r30;
  fVar12 = (1.0 - fVar1) + fVar12;
  fVar11 = fVar7 * fVar9;
  fVar14 = -(fVar10 * fVar7);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar6 + 0x14) = fVar2;
  fVar2 = SQRT(fVar9 * fVar9 + --(fVar10 * fVar10));
  *(float *)((int)puVar6 + 0xa4) = fVar3;
  fVar15 = DAT_007d88e4;
  uVar19 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar6 + 0x15) = fVar1;
  *(undefined4 *)((int)puVar6 + 0xac) = uVar19;
  fVar3 = SQRT(fVar14 * fVar14 + --(fVar11 * fVar11));
  fVar14 = fVar12 / fVar2;
  *(float *)(puVar6 + 0x15) = fVar1 - fVar15;
  dVar31 = 0.0;
  *(undefined4 *)((int)puVar6 + 0x9c) = 0;
  *(undefined4 *)((int)puVar6 + 0x94) = 0;
  *(undefined4 *)(puVar6 + 0x12) = 0;
  *(float *)(puVar6 + 0x13) = fVar7;
  *(float *)(puVar6 + 0xe) = fVar8;
  *(undefined4 *)(puVar6 + 0x11) = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  *(undefined4 *)((int)puVar6 + 0x7c) = 0;
  *(undefined4 *)((int)puVar6 + 0x8c) = 0;
  uVar19 = DAT_007d88e0;
  fVar12 = fVar12 / fVar3;
  dVar29 = (double)(fVar9 * fVar14);
  dVar28 = -(double)(fVar10 * fVar14);
  dVar27 = dVar31;
  if (0.0 - fVar2 < 0.0) {
    dVar27 = dVar29;
  }
  dVar26 = dVar31;
  if (0.0 - fVar2 < 0.0) {
    dVar26 = dVar28;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar27 = dVar29;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  *(float *)((int)puVar6 + 0x84) = (float)dVar27;
  dVar29 = -(double)(fVar11 * fVar12);
  dVar28 = -(double)(fVar10 * fVar7 * fVar12);
  *(float *)(puVar6 + 0x10) = (float)dVar26;
  dVar27 = dVar31;
  if (0.0 - fVar3 < 0.0) {
    dVar27 = dVar29;
  }
  dVar26 = dVar31;
  if (0.0 - fVar3 < 0.0) {
    dVar26 = dVar28;
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar27 = dVar29;
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  *(float *)(puVar6 + 0xe) = (float)dVar27;
  *(float *)((int)puVar6 + 0x74) = (float)dVar26;
  uVar17 = draw::GetEffectTex(uVar19);
  puVar6[0x25] = uVar17;
  uVar17 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar17;
  uVar17 = idol_draw::PackCmd(DAT_010b6ffc,DAT_007d88d0,DAT_010b7000,DAT_007d88d4,0x80);
  puVar6[0x27] = uVar17;
  uVar19 = fastfunc::FastLerpColor((double)*(float *)(iVar5 + 500),DAT_007d88d8,DAT_007d88dc);
  lVar18 = uVar16 - 0xb0;
  uVar25 = 0;
  puVar21 = &DAT_007d88f0;
  puVar20 = &DAT_007d88f4;
  lVar23 = lVar22;
  lVar24 = lVar22;
  do {
    uVar4 = *puVar20;
    *(undefined4 *)((int)lVar24 + 0x100) = *puVar21;
    *(undefined4 *)((int)lVar24 + 0x104) = uVar4;
    puVar13 = (undefined4 *)lVar18;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[1] = 0;
    *puVar13 = 0;
    dVar27 = dVar31;
    if ((uVar25 & 1) != 0) {
      dVar27 = dVar30;
    }
    iVar5 = (int)lVar23;
    *(float *)(iVar5 + 0xb8) = (float)dVar27;
    dVar27 = -1.0;
    if ((int)uVar25 < 2) {
      dVar27 = dVar30;
    }
    *(float *)(iVar5 + 0xb4) = (float)dVar27;
    uVar25 = uVar25 + 1;
    puVar21 = puVar21 + 2;
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
    *(undefined4 *)((int)lVar22 + 0xf0) = uVar19;
    puVar20 = puVar20 + 2;
    lVar18 = lVar18 + 0x10;
    lVar24 = lVar24 + 8;
    lVar23 = lVar23 + 0x10;
    lVar22 = lVar22 + 4;
  } while ((int)uVar25 < 4);
  draw::FastDrawQuad(uVar16 - 0xb0,uVar16 - 0xf0,0,EffectTexHeaders,9);
  return;
}



//==== 002d74b8  ns=mobyupdate_helpers  size=0x128
// sig: undefined M1907_002d74b8(void)
// callers(0): 
// callees(2): 000f1114 mobyfunc::GetBonePosition; 00119028 mobyutil::MB_DrawGlowFX

void mobyupdate_helpers::M1907_002d74b8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  MobyInstance *pMVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [24];
  
  puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar4 != (ushort *)0x0) {
    uVar7 = 0x3fc6666660000000;
    uVar8 = 0x3fb47ae140000000;
    do {
      pMVar5 = MobyInstance + (*puVar4 & 0x7fff);
      if ((pMVar5->oClass == GADGEBOT_0772) && (pMVar5->state < 6 && pMVar5->state != 0)) {
        uVar2 = pMVar5->field60_0x90;
        iVar6 = 2;
        uVar3 = DAT_007d8910 << 0x18;
        do {
          mobyfunc::GetBonePosition(pMVar5,iVar6,auStack_50);
          mobyutil::MB_DrawGlowFX(uVar7,uVar8,auStack_50,uVar3 | uVar2 & 0xffffff);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 5);
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 002d75e0  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1907_002d75e0(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M1907_002d75e0(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x02';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}



//==== 002d7638  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1907_002d7638(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M1907_002d7638(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}



//==== 002d7690  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1907_002d7690(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M1907_002d7690(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}



//==== 002d76e8  ns=mobyupdate_helpers  size=0x38
// sig: undefined M1907_002d76e8(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M1907_002d76e8(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}



//==== 002d7720  ns=mobyupdate_helpers  size=0x40
// sig: undefined M1907_002d7720(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M1907_002d7720(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0xd0;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 002d7768  ns=mobyupdate_helpers  size=0x94
// sig: undefined M1907_002d7768(void)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M1907_002d7768(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 8;
  if (*(char *)(param_1 + 0x53) != '\0') {
    mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 1;
  return;
}



//==== 002d77fc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1907_002d77fc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1907_002d77fc(void)

{
  DAT_007d8960 = 0x10000;
  return;
}



//==== 002d7828  ns=mobyupdate_helpers  size=0x228
// sig: undefined M1907_002d7828(void)
// callers(1): 002d7a50 mobyupdate_helpers::M1907_002d7a50
// callees(0): 

void mobyupdate_helpers::M1907_002d7828
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 4.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 4.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002d7a50  ns=mobyupdate_helpers  size=0x19c
// sig: undefined M1907_002d7a50(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002d7828 mobyupdate_helpers::M1907_002d7828; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1907_002d7a50(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  uVar1 = draw::GetEffectTex(0x30);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_007d9120;
  puVar5 = &DAT_007d8990;
  ppuVar4 = &PTR_DAT_007d9118;
  ppuVar7 = &PTR_DAT_007d9128;
  ppuVar6 = &PTR_DAT_007d9110;
  do {
    M1907_002d7828(*puVar5,*ppuVar3,*ppuVar6,*ppuVar4,&DAT_010b7010);
    draw::DrawMeshSet(*puVar5,*ppuVar6,*ppuVar7,&DAT_010b7010,9);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar2 < 2);
  return;
}



//==== 002d7bec  ns=mobyupdate_unsorted  size=0x60
// sig: undefined UpdateMoby_1907(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1907 */

void mobyupdate_unsorted::UpdateMoby_1907(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1907_002d7a50_0070b3f8,moby);
  }
  return;
}



//==== 002d7c68  ns=mobyupdate_helpers  size=0x228
// sig: undefined M1908_002d7c68(void)
// callers(1): 002d7e90 mobyupdate_helpers::M1908_002d7e90
// callees(0): 

void mobyupdate_helpers::M1908_002d7c68
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 4.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 4.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002d7e90  ns=mobyupdate_helpers  size=0x150
// sig: undefined M1908_002d7e90(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002d7c68 mobyupdate_helpers::M1908_002d7c68; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1908_002d7e90(void)

{
  undefined8 uVar1;
  
  uVar1 = draw::GetEffectTex(0x30);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  M1908_002d7c68(DAT_007d9130,PTR_DAT_007d9aa8,PTR_DAT_007d9aa0,PTR_DAT_007d9aa4,&DAT_010b74c0);
  draw::DrawMeshSet(DAT_007d9130,PTR_DAT_007d9aa0,PTR_DAT_007d9aac,&DAT_010b74c0,9);
  return;
}



//==== 002d7fe0  ns=mobyupdate_unsorted  size=0x60
// sig: undefined UpdateMoby_1908(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1908 */

void mobyupdate_unsorted::UpdateMoby_1908(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1908_002d7e90_0070b410,moby);
  }
  return;
}



//==== 002d8058  ns=mobyupdate_unsorted  size=0x5a8
// sig: undefined UpdateMoby_{191_758_803_1429}(MobyInstance * moby)
// callers(0): 
// callees(7): 0004afb4 camera::CamZoomOfs_Reset; 0004b0e0 camera::???_Cam_NudgeTowardMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fc620 mobyutil::MB_randInt; 0010a2e0 mobyutil::OrganicDeltAng; 00131100 partupd::SpawnPart_60; 00502758 fastfunc::FastDoubleToInt

/* Moby 191
   Moby 758
   Moby 803
   Moby 1429 */

void mobyupdate_unsorted::UpdateMoby__191_758_803_1429_(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyModeBit MVar11;
  void *pvVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  f32 *val;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
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
  ulonglong in_f30;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x100;
  puVar13 = (ulonglong *)lVar20;
  *puVar13 = uVar17;
  puVar13[0x22] = in_LR;
  puVar13[0x1e] = in_f30;
  puVar13[0x1f] = in_f31;
  puVar13[0x1d] = unaff_r31;
  bVar2 = moby->state;
  pvVar12 = moby->pVar;
  MVar11 = moby->modeBits;
  puVar13[0x1c] = unaff_r30;
  puVar13[0x1b] = unaff_r29;
  if (bVar2 == 0) {
    if ((*(int *)((int)pvVar12 + 0x30) == -1) &&
       (((*(int *)((int)pvVar12 + 0x3c) == -1 ||
         (MobyInstance + *(int *)((int)pvVar12 + 0x3c) == (MobyInstance *)0x0)) ||
        ((uVar3 = MobyInstance[*(int *)((int)pvVar12 + 0x3c)].state, uVar3 == 0xfe ||
         (uVar3 == 0xfd)))))) {
      mobyfunc::SetColorOfMoby(moby,0xc0,0xc0,0xc0);
      camera::CamZoomOfs_Reset(moby);
      moby->state = '\x01';
    }
    else {
      moby->updateDistance = -1;
      moby->modeBits = MVar11 | (UNK_40|DISABLED);
      moby->state = '\x02';
    }
  }
  else if (bVar2 < 2) {
    if (moby->oClass == SWINGSHOT_SWING) {
      fVar5 = g_heroPosition.x - (moby->pos).x;
      fVar4 = g_heroPosition.y - (moby->pos).y;
      val = &(moby->rotation).z;
      fVar6 = ABS(fVar5);
      fVar10 = ABS(fVar4);
      *(float *)(puVar13 + 0x12) = fVar5;
      *(float *)((int)puVar13 + 0x94) = fVar4;
      *(float *)(puVar13 + 0x13) = fVar6 - fVar10;
      dVar34 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar13 + 0x12));
      if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
        fVar5 = fVar10;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar13 + 0x94));
      if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      dVar25 = dVar34;
      if (0.0 < fVar5) {
        lVar19 = uVar17 - 0xf0;
        lVar21 = uVar17 - 100;
        lVar23 = uVar17 - 0x54;
        lVar24 = 2;
        fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x15) = fVar5;
        *(float *)(puVar13 + 0x14) = fVar5;
        *(float *)((int)puVar13 + 0xa4) = fVar5;
        *(float *)((int)puVar13 + 0x9c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar6;
        *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar5;
        *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x9c) = *(float *)((int)lVar19 + 0x8c) * fVar5 * fVar5;
          iVar14 = (int)lVar21;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar23 = lVar23 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar23 = uVar17 - 100;
        pfVar22 = (float *)&DAT_007358e0;
        lVar24 = 4;
        lVar19 = lVar20;
        lVar21 = lVar23;
        do {
          fVar5 = *pfVar22;
          fVar6 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar19 + 0x9c) = *(float *)((int)lVar19 + 0x9c) * fVar5;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar19 = 2;
        do {
          iVar14 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar15 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x9c)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar10 + fVar4);
      }
      mobyutil::OrganicDeltAng
                ((float)dVar25,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 12.566371,val,(int)val,(float *)((int)pvVar12 + 0x38));
      fVar5 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar10 = (moby->pos).z;
      if (((worldUpdateTime & 1) != 0) && (moby->enabled != '\0')) {
        fVar6 = (moby->transform).v1.y;
        fVar7 = (moby->transform).v1.x;
        fVar8 = (moby->transform).v1.z;
        puVar13[0x18] =
             (longlong)(int)(((uint)((LZCOUNT(-(worldUpdateTime & 4)) << 0x3a) >> 0x3f) & 2) - 1);
        dVar25 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
        if (dVar25 == dVar34) {
          fVar9 = (moby->transform).v1.w;
          dVar25 = dVar34;
          dVar27 = dVar34;
          dVar29 = dVar34;
        }
        else {
          fVar1 = (float)((double)(DAT_007d9abc * (float)(longlong)puVar13[0x18]) / dVar25);
          fVar9 = (moby->transform).v1.w;
          dVar29 = (double)(fVar7 * fVar1);
          dVar27 = (double)(fVar6 * fVar1);
          dVar25 = (double)(fVar8 * fVar1);
        }
        *(float *)(puVar13 + 0xe) = (float)dVar29;
        *(float *)((int)puVar13 + 0x74) = (float)dVar27;
        *(float *)(puVar13 + 0xf) = (float)dVar25;
        *(float *)((int)puVar13 + 0x7c) = fVar9;
        fVar8 = DAT_007d9ab0;
        fVar7 = animationSpeed;
        fVar6 = DAT_007d9ab0 * animationSpeed;
        *(float *)((int)puVar13 + 0x8c) = fVar9;
        uVar16 = DAT_007d9ab4;
        dVar33 = (double)DAT_007d9ab8;
        *(float *)(puVar13 + 0xe) = (float)(dVar29 + (double)fVar5);
        *(float *)((int)puVar13 + 0x74) = (float)(dVar27 + (double)fVar4);
        *(float *)(puVar13 + 0xf) = (float)(dVar25 + (double)fVar10);
        dVar31 = (double)SQRT((float)(dVar25 * dVar25 +
                                     (double)(float)(dVar29 * dVar29 +
                                                    (double)(float)(dVar27 * dVar27))));
        dVar32 = (double)(float)((double)(-2.0 / fVar6) / dVar31);
        dVar30 = dVar34;
        if (dVar34 - dVar31 < 0.0) {
          dVar30 = (double)(float)(dVar29 * dVar32);
        }
        dVar28 = dVar34;
        if (dVar34 - dVar31 < 0.0) {
          dVar28 = (double)(float)(dVar27 * dVar32);
        }
        dVar26 = dVar34;
        if (dVar34 - dVar31 < 0.0) {
          dVar26 = (double)(float)(dVar25 * dVar32);
        }
        if (dVar31 - dVar34 < 0.0) {
          dVar30 = (double)(float)(dVar29 * dVar32);
        }
        if (dVar31 - dVar34 < 0.0) {
          dVar28 = (double)(float)(dVar27 * dVar32);
        }
        if (dVar31 - dVar34 < 0.0) {
          dVar26 = (double)(float)(dVar25 * dVar32);
        }
        *(float *)(puVar13 + 0x10) = (float)dVar30;
        *(float *)((int)puVar13 + 0x84) = (float)dVar28;
        *(float *)(puVar13 + 0x11) = (float)dVar26;
        fastfunc::FastDoubleToInt((double)(fVar8 * fVar7));
        mobyutil::MB_randInt(0xff);
        partupd::SpawnPart_60(dVar33,uVar17 - 0x90,uVar17 - 0x80,uVar16);
      }
    }
    if (g_heroState != SWINGING_YELLOW_SWINGSHOT) {
      camera::____Cam_NudgeTowardMoby(moby);
    }
  }
  else if ((bVar2 < 3) &&
          ((g_LevelFlags[Level][*(int *)((int)pvVar12 + 0x30)] != '\0' ||
           ((*(int *)((int)pvVar12 + 0x3c) != -1 &&
            (((MobyInstance + *(int *)((int)pvVar12 + 0x3c) == (MobyInstance *)0x0 ||
              (uVar3 = MobyInstance[*(int *)((int)pvVar12 + 0x3c)].state, uVar3 == 0xfe)) ||
             (uVar3 == 0xfd)))))))) {
    *(undefined4 *)((int)pvVar12 + 0x30) = 0xffffffff;
    moby->modeBits =
         MVar11 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                   DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                   HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    moby->state = '\0';
  }
  return;
}



//==== 002d8600  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1910_002d8600(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1910_002d8600(void)

{
  DAT_007d9b0c = 0x10000;
  return;
}



//==== 002d8630  ns=mobyupdate_helpers  size=0x228
// sig: undefined M1910_002d8630(void)
// callers(1): 002d8858 mobyupdate_helpers::M1910_002d8858
// callees(0): 

void mobyupdate_helpers::M1910_002d8630
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 4.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 4.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002d8858  ns=mobyupdate_helpers  size=0x19c
// sig: undefined M1910_002d8858(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002d8630 mobyupdate_helpers::M1910_002d8630; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1910_002d8858(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  uVar1 = draw::GetEffectTex(0x30);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_007da160;
  puVar5 = &DAT_007d9b30;
  ppuVar4 = &PTR_DAT_007da158;
  ppuVar7 = &PTR_DAT_007da168;
  ppuVar6 = &PTR_DAT_007da150;
  do {
    M1910_002d8630(*puVar5,*ppuVar3,*ppuVar6,*ppuVar4,&DAT_010b7970);
    draw::DrawMeshSet(*puVar5,*ppuVar6,*ppuVar7,&DAT_010b7970,9);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar2 < 2);
  return;
}



//==== 002d89f4  ns=mobyupdate_unsorted  size=0x60
// sig: undefined UpdateMoby_1910(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1910 */

void mobyupdate_unsorted::UpdateMoby_1910(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1910_002d8858_0070b438,moby);
  }
  return;
}



//==== 002d8a70  ns=mobyupdate_helpers  size=0x228
// sig: undefined M1911_002d8a70(void)
// callers(1): 002d8c98 mobyupdate_helpers::M1911_002d8c98
// callees(0): 

void mobyupdate_helpers::M1911_002d8a70
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 4.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 4.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002d8c98  ns=mobyupdate_helpers  size=0x150
// sig: undefined M1911_002d8c98(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002d8a70 mobyupdate_helpers::M1911_002d8a70; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1911_002d8c98(void)

{
  undefined8 uVar1;
  
  uVar1 = draw::GetEffectTex(0x30);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  M1911_002d8a70(DAT_007da170,PTR_DAT_007da818,PTR_DAT_007da810,PTR_DAT_007da814,&DAT_010b7e20);
  draw::DrawMeshSet(DAT_007da170,PTR_DAT_007da810,PTR_DAT_007da81c,&DAT_010b7e20,9);
  return;
}



//==== 002d8de8  ns=mobyupdate_unsorted  size=0x60
// sig: undefined UpdateMoby_1911(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1911 */

void mobyupdate_unsorted::UpdateMoby_1911(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1911_002d8c98_0070b450,moby);
  }
  return;
}



//==== 002d8e60  ns=mobyupdate_helpers  size=0x228
// sig: undefined M1913_002d8e60(void)
// callers(1): 002d9088 mobyupdate_helpers::M1913_002d9088
// callees(0): 

void mobyupdate_helpers::M1913_002d8e60
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = GameCamera.posY - param_3[1];
      fVar3 = GameCamera.posX - *param_3;
      fVar8 = GameCamera.posZ - param_3[2];
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 4.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 4.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002d9088  ns=mobyupdate_helpers  size=0x19c
// sig: undefined M1913_002d9088(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002d8e60 mobyupdate_helpers::M1913_002d8e60; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1913_002d9088(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  uVar1 = draw::GetEffectTex(0x30);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_007dc3f8;
  puVar5 = &DAT_007da820;
  ppuVar4 = &PTR_DAT_007dc3f0;
  ppuVar7 = &PTR_DAT_007dc400;
  ppuVar6 = &PTR_DAT_007dc3e8;
  do {
    M1913_002d8e60(*puVar5,*ppuVar3,*ppuVar6,*ppuVar4,&DAT_010b82d0);
    draw::DrawMeshSet(*puVar5,*ppuVar6,*ppuVar7,&DAT_010b82d0,9);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar2 < 2);
  return;
}



//==== 002d9224  ns=mobyupdate_unsorted  size=0x60
// sig: undefined UpdateMoby_1913(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1913 */

void mobyupdate_unsorted::UpdateMoby_1913(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1913_002d9088_0070b468,moby);
  }
  return;
}



//==== 002d92a0  ns=mobyupdate_helpers  size=0x228
// sig: undefined M1918_002d92a0(void)
// callers(1): 002d94c8 mobyupdate_helpers::M1918_002d94c8
// callees(0): 

void mobyupdate_helpers::M1918_002d92a0
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 4.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 4.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002d94c8  ns=mobyupdate_helpers  size=0x150
// sig: undefined M1918_002d94c8(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002d92a0 mobyupdate_helpers::M1918_002d92a0; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1918_002d94c8(void)

{
  undefined8 uVar1;
  
  uVar1 = draw::GetEffectTex(0x30);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  M1918_002d92a0(DAT_007dc410,PTR_DAT_007dcd88,PTR_DAT_007dcd80,PTR_DAT_007dcd84,&DAT_010b8780);
  draw::DrawMeshSet(DAT_007dc410,PTR_DAT_007dcd80,PTR_DAT_007dcd8c,&DAT_010b8780,9);
  return;
}



//==== 002d9618  ns=mobyupdate_unsorted  size=0x60
// sig: undefined UpdateMoby_1918(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1918 */

void mobyupdate_unsorted::UpdateMoby_1918(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1918_002d94c8_0070b480,moby);
  }
  return;
}



//==== 002d9678  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1919_002d9678(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1919_002d9678(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007f17b4;
  ppuVar4 = &PTR_DAT_007f1770;
  puVar3 = &DAT_007e3f90;
  ppuVar5 = &PTR_DAT_007f183c;
  do {
    mesh::AddUVOffsets(&DAT_010b8c70,*ppuVar2,*puVar3,&DAT_010b8c38 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b8c70,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 0x11);
  return;
}



//==== 002d9768  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1919_002d9768(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1919_002d9768(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007e3f24;
  ppuVar4 = &PTR_DAT_007e3f00;
  puVar3 = &DAT_007dcde8;
  ppuVar5 = &PTR_DAT_007e3f6c;
  do {
    mesh::AddUVOffsets(&DAT_010b8c70,*ppuVar2,*puVar3,&DAT_010b8c50 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b8c70,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 9);
  return;
}



//==== 002d9858  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1919_002d9858(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1919_002d9858(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007f3d0c;
  ppuVar4 = &PTR_DAT_007f3cf8;
  puVar3 = &DAT_007f1880;
  ppuVar5 = &PTR_DAT_007f3d34;
  do {
    mesh::AddUVOffsets(&DAT_010b8c70,*ppuVar2,*puVar3,&DAT_010b8c60 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b8c70,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 5);
  return;
}



//==== 002d9948  ns=mobyupdate_helpers  size=0x72c
// sig: undefined M1919_002d9948(void)
// callers(0): 
// callees(11): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets; 00110b70 mobyutil::MB_IsPntInCuboid; 00174f80 vuchain::SetGSReg; 004d6bb0 FUN_004d6bb0; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1919_002d9948(int param_1)

{
  int *piVar1;
  bool bVar2;
  RenderingStep *pRVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  undefined **ppuVar14;
  int iVar15;
  
  piVar1 = *(int **)(param_1 + 0x78);
  bVar2 = false;
  iVar15 = 0;
  uVar4 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar4);
  uVar4 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar4);
  uVar4 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar4);
  uVar4 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar4);
  iVar6 = EffectTexHeaders;
  pRVar3 = ForwardPass;
  lVar5 = draw::GetEffectTex(0x16);
  FUN_004d6bb0(pRVar3,0,iVar6 + (int)(lVar5 << 5) + (int)(lVar5 << 2));
  stub::STUB_00071170();
  if ((((0x437f0000 <
         (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
              ((int)GameCamera.posZ >> 0x1f))) ||
       (iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar1), iVar6 != 0))
      || (iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar1[1]),
         iVar6 != 0)) ||
     (iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar1[2]), iVar6 != 0))
  {
    bVar2 = true;
    uVar4 = draw::GetEffectTex(0x2c);
    vuchain::SetGSReg(0x18,uVar4);
    uVar4 = idol_draw::PackCmd(0,1,0,1,DAT_007dcda0);
    vuchain::SetGSReg(3,uVar4);
    iVar6 = 0;
    ppuVar12 = &PTR_DAT_007f1770;
    ppuVar14 = &PTR_DAT_007f17b4;
    ppuVar10 = &PTR_DAT_007f183c;
    puVar13 = &DAT_007e3f90;
    do {
      mesh::AddUVOffsets(&DAT_010b8c70,*ppuVar14,*puVar13,&DAT_010b8c38);
      draw::DrawMeshSet(*puVar13,*ppuVar12,*ppuVar10,&DAT_010b8c70,9);
      iVar6 = iVar6 + 1;
      ppuVar14 = ppuVar14 + 1;
      puVar13 = puVar13 + 1;
      ppuVar12 = ppuVar12 + 1;
      ppuVar10 = ppuVar10 + 1;
    } while (iVar6 < 0x11);
  }
  if (DAT_010b8c30 != 0 && bVar2) {
    uVar4 = draw::GetEffectTex(0x29);
    vuchain::SetGSReg(0x18,uVar4);
    uVar4 = idol_draw::PackCmd(0,2,2,1,(int)(DAT_007dcda4 * (uint)DAT_010b8c30) >> 8);
    vuchain::SetGSReg(3,uVar4);
    ppuVar9 = &PTR_DAT_007f1770;
    ppuVar7 = &PTR_DAT_007f17b4;
    ppuVar8 = &PTR_DAT_007f183c;
    puVar11 = &DAT_007e3f90;
    iVar6 = 0;
    ppuVar10 = ppuVar7;
    ppuVar12 = ppuVar9;
    ppuVar14 = ppuVar8;
    puVar13 = puVar11;
    do {
      mesh::AddUVOffsets(&DAT_010b8c70,*ppuVar10,*puVar13,&DAT_010b8c40);
      draw::DrawMeshSet(*puVar13,*ppuVar12,*ppuVar14,&DAT_010b8c70,9);
      iVar6 = iVar6 + 1;
      ppuVar10 = ppuVar10 + 1;
      puVar13 = puVar13 + 1;
      ppuVar12 = ppuVar12 + 1;
      ppuVar14 = ppuVar14 + 1;
    } while (iVar6 < 0x11);
    uVar4 = idol_draw::PackCmd(2,0,2,1,(int)(DAT_007dcda4 * (uint)DAT_010b8c30) >> 8);
    vuchain::SetGSReg(3,uVar4);
    iVar6 = 0;
    do {
      mesh::AddUVOffsets(&DAT_010b8c70,*ppuVar7,*puVar11,&DAT_010b8c48);
      draw::DrawMeshSet(*puVar11,*ppuVar9,*ppuVar8,&DAT_010b8c70,9);
      iVar6 = iVar6 + 1;
      ppuVar7 = ppuVar7 + 1;
      puVar11 = puVar11 + 1;
      ppuVar9 = ppuVar9 + 1;
      ppuVar8 = ppuVar8 + 1;
    } while (iVar6 < 0x11);
  }
  uVar4 = draw::GetEffectTex(0x2a);
  vuchain::SetGSReg(0x18,uVar4);
  uVar4 = idol_draw::PackCmd(0,2,0,1,DAT_007dcdd4);
  vuchain::SetGSReg(3,uVar4);
  ppuVar8 = &PTR_DAT_007e3f24;
  ppuVar7 = &PTR_DAT_007e3f00;
  puVar11 = &DAT_007dcde8;
  ppuVar9 = &PTR_DAT_007e3f6c;
  iVar6 = 0;
  ppuVar10 = ppuVar8;
  ppuVar12 = ppuVar7;
  ppuVar14 = ppuVar9;
  puVar13 = puVar11;
  do {
    mesh::AddUVOffsets(&DAT_010b8c70,*ppuVar10,*puVar13,&DAT_010b8c50);
    draw::DrawMeshSet(*puVar13,*ppuVar12,*ppuVar14,&DAT_010b8c70,9);
    iVar6 = iVar6 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar13 = puVar13 + 1;
    ppuVar12 = ppuVar12 + 1;
    ppuVar14 = ppuVar14 + 1;
  } while (iVar6 < 9);
  uVar4 = idol_draw::PackCmd(0,2,0,1,DAT_007dcdd8);
  vuchain::SetGSReg(3,uVar4);
  iVar6 = 0;
  do {
    mesh::AddUVOffsets(&DAT_010b8c70,*ppuVar8,*puVar11,&DAT_010b8c58);
    draw::DrawMeshSet(*puVar11,*ppuVar7,*ppuVar9,&DAT_010b8c70,9);
    iVar6 = iVar6 + 1;
    ppuVar8 = ppuVar8 + 1;
    puVar11 = puVar11 + 1;
    ppuVar7 = ppuVar7 + 1;
    ppuVar9 = ppuVar9 + 1;
  } while (iVar6 < 9);
  if (bVar2) {
    uVar4 = draw::GetEffectTex(0x2b);
    vuchain::SetGSReg(0x18,uVar4);
    uVar4 = idol_draw::PackCmd(0,2,0,1,DAT_007dcde4);
    vuchain::SetGSReg(3,uVar4);
    ppuVar14 = &PTR_DAT_007f3d0c;
    ppuVar10 = &PTR_DAT_007f3d34;
    puVar13 = &DAT_007f1880;
    ppuVar12 = &PTR_DAT_007f3cf8;
    do {
      mesh::AddUVOffsets(&DAT_010b8c70,*ppuVar14,*puVar13,&DAT_010b8c60);
      draw::DrawMeshSet(*puVar13,*ppuVar12,*ppuVar10,&DAT_010b8c70,9);
      iVar15 = iVar15 + 1;
      ppuVar14 = ppuVar14 + 1;
      puVar13 = puVar13 + 1;
      ppuVar12 = ppuVar12 + 1;
      ppuVar10 = ppuVar10 + 1;
    } while (iVar15 < 5);
  }
  return;
}



//==== 002da078  ns=mobyupdate_helpers  size=0x220
// sig: undefined M1919_002da078(void)
// callers(1): 002da688 mobyupdate_unsorted::UpdateMoby_1919
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1919_002da078
               (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6,
               int *param_7)

{
  uint uVar1;
  int iVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar6 = 0;
  if (0 < param_6) {
    iVar10 = 0;
    dVar15 = 255.0;
    piVar9 = param_7;
    do {
      iVar7 = 0;
      if (0 < *piVar9) {
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(*(int *)(param_5 + iVar10) + iVar8);
          if (in_r10 == 0) {
            dVar11 = (double)fastfunc::FastIntToDouble(uVar1 & 0xff);
            dVar12 = (double)fastfunc::FastIntToDouble(uVar1 >> 8 & 0xff);
            dVar13 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x10 & 0xff);
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
          }
          else {
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
            dVar12 = dVar15;
            dVar13 = dVar15;
            dVar11 = dVar15;
          }
          dVar14 = (double)(float)(dVar14 * param_4);
          dVar13 = (double)(float)(dVar13 * param_3);
          dVar12 = (double)(float)(dVar12 * param_2);
          iVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * param_1));
          uVar2 = fastfunc::FastDoubleToInt(dVar14);
          uVar3 = fastfunc::FastDoubleToInt(dVar13);
          uVar4 = fastfunc::FastDoubleToInt(dVar12);
          iVar7 = iVar7 + 1;
          *(int *)(*(int *)(param_5 + iVar10) + iVar8) =
               (int)((uVar2 & 0xffffffff) << 0x18) + (int)((uVar3 & 0xffffffff) << 0x10) +
               (int)((uVar4 & 0xffffffff) << 8) + iVar5;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)((int)param_7 + iVar10));
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar6 < param_6);
  }
  return;
}



//==== 002da2c0  ns=mobyupdate_helpers  size=0x14c
// sig: undefined M1919_002da2c0(void)
// callers(1): 002da688 mobyupdate_unsorted::UpdateMoby_1919
// callees(0): 

void mobyupdate_helpers::M1919_002da2c0
               (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5,
               undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)((double)DAT_0071f424 * param_1 + (double)*param_7);
  *param_7 = fVar1;
  if (1.0 < fVar1) {
    fVar1 = fVar1 - 2.0;
    *param_7 = fVar1;
  }
  if (fVar1 < -1.0) {
    fVar1 = fVar1 + 2.0;
    *param_7 = fVar1;
  }
  fVar2 = (float)((double)DAT_0071f424 * param_2 + (double)param_7[1]);
  param_7[1] = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 2.0;
    param_7[1] = fVar2;
  }
  if (fVar2 < -1.0) {
    param_7[1] = fVar2 + 2.0;
  }
  fVar1 = fVar1 * 3.1415927;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  *param_4 = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3);
  fVar1 = param_7[1] * 3.1415927;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  param_4[1] = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                               fVar4 * -0.0001980741 +
                               fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3
                      );
  return;
}



//==== 002da418  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M1919_002da418(void)
// callers(1): 002da688 mobyupdate_unsorted::UpdateMoby_1919
// callees(0): 

void mobyupdate_helpers::M1919_002da418(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007dcdac + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b8c38 + iVar1);
  *(float *)((int)&DAT_010b8c38 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c38 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c38 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007dcdb0 + iVar1) * fVar3 + *(float *)((int)&DAT_010b8c3c + iVar1);
  *(float *)((int)&DAT_010b8c3c + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c3c + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c3c + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 002da4d8  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M1919_002da4d8(void)
// callers(1): 002da688 mobyupdate_unsorted::UpdateMoby_1919
// callees(0): 

void mobyupdate_helpers::M1919_002da4d8(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007dcdc4 + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b8c50 + iVar1);
  *(float *)((int)&DAT_010b8c50 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c50 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c50 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007dcdc8 + iVar1) * fVar3 + *(float *)((int)&DAT_010b8c54 + iVar1);
  *(float *)((int)&DAT_010b8c54 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c54 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c54 + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 002da598  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M1919_002da598(void)
// callers(1): 002da688 mobyupdate_unsorted::UpdateMoby_1919
// callees(0): 

void mobyupdate_helpers::M1919_002da598(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007dcddc + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b8c60 + iVar1);
  *(float *)((int)&DAT_010b8c60 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c60 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c60 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007dcde0 + iVar1) * fVar3 + *(float *)((int)&DAT_010b8c64 + iVar1);
  *(float *)((int)&DAT_010b8c64 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c64 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c64 + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 002da688  ns=mobyupdate_unsorted  size=0x350
// sig: undefined UpdateMoby_1919(MobyInstance * moby)
// callers(0): 
// callees(8): 0006d720 RegisterFuncForMoby; 002da078 mobyupdate_helpers::M1919_002da078; 002da2c0 mobyupdate_helpers::M1919_002da2c0; 002da418 mobyupdate_helpers::M1919_002da418; 002da4d8 mobyupdate_helpers::M1919_002da4d8; 002da598 mobyupdate_helpers::M1919_002da598; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView
// strings: 002da658: '?fff?' (raw)

/* Moby 1919 */

void mobyupdate_unsorted::UpdateMoby_1919(MobyInstance *moby)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 local_40 [16];
  
  if (moby->state == 0) {
    if (DAT_010b8c34 == 0) {
      uVar6 = 0x3fe6666660000000;
      uVar4 = 0x3ff0000000000000;
      uVar3 = 0x3fe0000000000000;
      mobyupdate_helpers::M1919_002da078
                (0x3fe6666660000000,0x3ff0000000000000,0x3fecccccc0000000,0x3fe0000000000000,
                 &PTR_DAT_007f183c,0x11,&DAT_007e3f90);
      mobyupdate_helpers::M1919_002da078(uVar3,uVar3,uVar3,uVar4,&PTR_DAT_007f3d34,5,&DAT_007f1880);
      mobyupdate_helpers::M1919_002da078
                (0x3fd0000000000000,0x3fd0000000000000,0x3fd0000000000000,uVar6,&PTR_DAT_007e3f6c,9,
                 &DAT_007dcde8);
      DAT_010b8c34 = 1;
    }
    auVar9 = ZEXT416(0);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    moby->state = '\x01';
    DAT_010b8c38 = 0;
    DAT_010b8c3c = 0;
    DAT_010b8c40 = 0;
    DAT_010b8c44 = 0;
    DAT_010b8c48 = 0;
    DAT_010b8c4c = 0;
    DAT_010b8c68 = 0;
    DAT_010b8c6c = 0;
    DAT_010b8c50 = 0;
    DAT_010b8c54 = storeVectorElementWordIndexed(auVar8,0xffffffffffff8c54,0x10c0000);
    DAT_010b8c58 = 0;
    auVar9 = loadVectorLeftIndexed(0x14,0x2da650);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010b8c5c = storeVectorElementWordIndexed
                             (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,0x10b8c5c)
    ;
    DAT_010b8c60 = 0;
    DAT_010b8c64 = storeVectorElementWordIndexed(auVar8,0xffffffffffff8c64,0x10c0000);
  }
  else if ((((moby->state < 2) &&
            (0x4329ffff <
             (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
                  ((int)GameCamera.posZ >> 0x1f)))) &&
           (iVar1 = fastfunc::FastCheckBsphereInView(0x408f400000000000,local_40), -1 < iVar1)) &&
          (0x43340000 <
           (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
                ((int)GameCamera.posZ >> 0x1f)))) {
    dVar7 = 100.0;
    dVar5 = (double)SQRT((GameCamera.posZ - DAT_007dcd98) * (GameCamera.posZ - DAT_007dcd98) +
                         (GameCamera.posX - DAT_007dcd90) * (GameCamera.posX - DAT_007dcd90) +
                         (GameCamera.posY - DAT_007dcd94) * (GameCamera.posY - DAT_007dcd94));
    uVar2 = DAT_010b8c30;
    if (dVar5 <= 100.0) {
      mobyupdate_helpers::M1919_002da418(0);
      mobyupdate_helpers::M1919_002da2c0
                (0x3fe0a3d700000000,0x3fe3d70a40000000,0x3faeb851e0000000,&DAT_010b8c40);
      mobyupdate_helpers::M1919_002da418(2);
      uVar2 = 0xff;
      if ((80.0 <= dVar5) && (uVar2 = 0, dVar5 < dVar7)) {
        uVar2 = fastfunc::FastDoubleToInt((double)(-((float)(dVar5 - 80.0) * 0.05 - 1.0) * 255.0));
      }
    }
    DAT_010b8c30 = uVar2;
    mobyupdate_helpers::M1919_002da598(0);
    mobyupdate_helpers::M1919_002da4d8(0);
    mobyupdate_helpers::M1919_002da4d8(1);
    RegisterFuncForMoby(&PTR_M1919_002d9948_0070b4a8,moby);
  }
  return;
}



//==== 002da9d8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1919_002da9d8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1919_002da9d8(void)

{
  DAT_007f3d94 = 0x10000;
  return;
}



//==== 002daa30  ns=mobyupdate_helpers  size=0x574
// sig: undefined M192_002daa30(void)
// callers(2): 00200fd0 FUN_00200fd0; 002db020 mobyupdate_unsorted::UpdateMoby_192
// callees(3): 00108180 mobyutil::MB_computeLobVelocity; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M192_002daa30
               (double param_1,undefined8 param_2,double param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0xf0;
  puVar8 = (ulonglong *)lVar19;
  *puVar8 = uVar16;
  puVar8[0x20] = in_LR;
  puVar8[0x1a] = in_f28;
  puVar8[0x1b] = in_f29;
  puVar8[0x1c] = in_f30;
  puVar8[0x1d] = in_f31;
  fVar1 = param_4[1];
  fVar2 = param_5[1];
  fVar3 = *param_4;
  fVar4 = *param_5;
  fVar5 = param_4[2];
  fVar6 = param_5[2];
  puVar8[0x19] = unaff_r31;
  puVar8[0x18] = unaff_r30;
  puVar8[0x17] = unaff_r29;
  if ((double)SQRT((fVar5 - fVar6) * (fVar5 - fVar6) +
                   (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2)) <= param_3
     ) {
    fVar7 = param_5[3];
  }
  else {
    fVar2 = fVar2 - fVar1;
    fVar10 = fVar4 - fVar3;
    fVar11 = fVar6 - fVar5;
    fVar4 = 0.0;
    fVar7 = param_5[3];
    fVar13 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar2 * fVar2);
    fVar12 = (float)(param_3 - 0.009999999776482582) / fVar13;
    fVar6 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    fVar9 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (0.0 - fVar13 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    fVar6 = fVar6 + fVar5;
    fVar2 = fVar9 + fVar1;
    fVar4 = fVar4 + fVar3;
  }
  *(float *)((int)puVar8 + 0x7c) = fVar7;
  fVar7 = ABS(fVar4 - fVar3);
  fVar5 = ABS(fVar2 - fVar1);
  *(float *)(puVar8 + 0x10) = fVar4 - fVar3;
  *(float *)(puVar8 + 0xe) = fVar4;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar6;
  *(float *)((int)puVar8 + 0x84) = fVar2 - fVar1;
  *(float *)(puVar8 + 0x11) = fVar7 - fVar5;
  dVar30 = 0.0;
  uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 0x10));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar4 = fVar7;
  }
  dVar24 = dVar30;
  if (0.0 < fVar1) {
    lVar18 = uVar16 - 0xe0;
    lVar20 = uVar16 - 100;
    lVar22 = uVar16 - 0x54;
    lVar23 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x13) = fVar1;
    *(float *)(puVar8 + 0x12) = fVar1;
    *(float *)((int)puVar8 + 0x94) = fVar1;
    *(float *)((int)puVar8 + 0x8c) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar1;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x7c) * fVar1 * fVar1;
      iVar14 = (int)lVar20;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar14 + 4) * fVar1 * fVar1;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 100;
    pfVar21 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar20 = lVar22;
    do {
      fVar1 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x8c) * fVar1;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar18 = 2;
    do {
      iVar14 = (int)lVar19;
      iVar15 = (int)lVar22;
      lVar19 = lVar19 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar15 + 4)
                        + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar25 = (double)fastfunc::FastSubRots(g_heroRotation.z,(float)dVar24);
  dVar26 = (double)g_heroRotation.z;
  fVar1 = *param_4;
  if ((0.8726646304130554 < dVar25) ||
     (fVar3 = param_4[1] - *(float *)((int)puVar8 + 0x74), fVar2 = fVar1 - *(float *)(puVar8 + 0xe),
     SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 1.5)) {
    fVar2 = (float)(dVar26 + 1.570796251296997);
    dVar24 = (double)(float)(3.141592502593994 - dVar26);
    if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
      dVar24 = dVar26;
    }
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    dVar25 = (double)(float)(-3.141592502593994 - dVar26);
    if ((double)(float)(-3.141592502593994 - dVar26) - dVar24 < 0.0) {
      dVar25 = dVar24;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    dVar28 = (double)(float)(dVar25 * dVar25);
    fVar5 = fVar4 * fVar4;
    dVar24 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar25));
    fVar2 = fVar5 * fVar5 * fVar4;
    dVar27 = (double)(float)(dVar28 * dVar24);
    fVar3 = fVar5 * fVar2;
    *(float *)((int)puVar8 + 0x74) =
         ((float)(dVar28 * dVar27) * 2.601887e-06 +
         (float)(dVar27 * -0.0001980741071747616 +
                (double)(float)(dVar24 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar28 * dVar25) *
                                               -0.16666656732559204 + dVar25)))) * 1.5 + param_4[1];
    *(float *)(puVar8 + 0xe) =
         (fVar5 * fVar3 * 2.601887e-06 +
         fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * 1.5 +
         fVar1;
    dVar24 = dVar26;
  }
  fVar1 = (float)(dVar24 + 1.570796251296997);
  dVar25 = (double)(float)(3.141592502593994 - dVar24);
  if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
    dVar25 = dVar24;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar26 = (double)(float)(-3.141592502593994 - dVar24);
  if ((double)(float)(-3.141592502593994 - dVar24) - dVar25 < 0.0) {
    dVar26 = dVar25;
  }
  dVar24 = 8.5;
  dVar25 = (double)(mobyutil::g_FrameTime * 8.5);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar27 = (double)(float)(dVar26 * dVar26);
  fVar4 = fVar3 * fVar3;
  dVar29 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar26));
  param_6[2] = 0.0;
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar28 = (double)(float)(dVar27 * dVar29);
  fVar2 = fVar4 * fVar1;
  param_6[1] = (float)((double)((float)(dVar27 * dVar28) * 2.601887e-06 +
                               (float)(dVar28 * -0.0001980741071747616 +
                                      (double)(float)(dVar29 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar27 * dVar26
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar26))
                                      )) * dVar25);
  *param_6 = (float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                             fVar2 * -0.0001980741 +
                             fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) * dVar25);
  dVar26 = (double)mobyutil::MB_computeLobVelocity(dVar25,-param_1,param_4,uVar16 - 0x80);
  param_6[2] = (float)dVar26;
  if ((g_downButtons & (L1|L2)) != 0) {
    dVar30 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.bombGlove);
    dVar26 = (double)param_6[2];
    dVar30 = (double)(float)(dVar30 * 2.5);
  }
  fVar1 = (float)(param_1 * (double)(float)((double)(float)(dVar30 + dVar24) / dVar25)) * 0.5;
  if ((double)fVar1 < dVar26) {
    param_6[2] = fVar1;
  }
  return;
}



//==== 002db020  ns=mobyupdate_unsorted  size=0xd8c
// sig: undefined UpdateMoby_192(MobyInstance * moby)
// callers(0): 
// callees(22): 00057820 collproc::CollLine; 000816ec hero::Hero_PlaySound; 0008e0f4 hero::Hero_GetWeaponAmmo; 000aa258 hero::hero_ConsumeAmmo; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe610 mobyutil::MB_SphericalToVector; 00200c38 FUN_00200c38; 00200fd0 FUN_00200fd0; 002daa30 mobyupdate_helpers::M192_002daa30; 004fff60 fastfunc::FastDecTimerS32; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005e825c FUN_005e825c; 005e8338 FUN_005e8338

/* Moby 192 */

void mobyupdate_unsorted::UpdateMoby_192(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  void *pvVar3;
  MobyInstance *moby_00;
  float fVar4;
  float fVar5;
  short sVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  undefined1 local_200 [16];
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  char local_1a4 [4];
  float local_1a0;
  float local_19c;
  float local_198;
  f32 local_194;
  Vec4 aVStack_190 [3];
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  longlong local_e0;
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar3 = moby->pVar;
  uVar11 = ZEXT48(pvVar3);
  dVar24 = 0.0;
  fastfunc::FastApplyTransform(aVStack_190,(Vec4 *)&GameCamera);
  fastfunc::FastNormalizeRMtx4(auStack_120,aVStack_190);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)((int)pvVar3 + 0x58) < 3) {
    *(int *)((int)pvVar3 + 0x58) = *(int *)((int)pvVar3 + 0x58) + 1;
    return;
  }
  mobyfunc::GetBonePosition(moby,0,&local_210);
  mobyfunc::GetBoneTransformations(moby,0,auStack_160);
  FUN_005e825c(&local_1f0,local_200,auStack_160);
  iVar8 = *(int *)((int)pvVar3 + 0x50);
  *(float *)((int)pvVar3 + 0x40) = local_210 + local_1f0;
  *(float *)((int)pvVar3 + 0x44) = local_20c + local_1ec;
  *(float *)((int)pvVar3 + 0x48) = local_208 + local_1e8;
  *(undefined4 *)((int)pvVar3 + 0x4c) = local_204;
  if (iVar8 != 0) {
    *(undefined4 *)(iVar8 + 0x98) = 1;
    iVar8 = *(int *)((int)pvVar3 + 0x50);
  }
  if (((iVar8 == 0) || (*(char *)(iVar8 + 0x20) == -2)) || (*(char *)(iVar8 + 0x20) == -3)) {
    *(undefined4 *)((int)pvVar3 + 0x50) = 0;
  }
  if (g_heroState == FIRST_PERSON_VIEW) {
    hero::TransitionMovement(0x1e,1);
  }
  iVar8 = fastfunc::FastDecTimerS32(uVar11 + 0x54);
  if (((iVar8 != 0) && (DAT_0096bd8c == '\0')) &&
     ((((DAT_0096bd88 != '\0' &&
        (local_e0 = (longlong)(int)(animationSpeed * 17.5),
        DAT_00969e9c == (int)(animationSpeed * 17.5))) ||
       ((g_heroState == WEAPON_FIRST_PERSON_VIEW && (g_buttonsPressedThisFrame & DAT_0096ad80) != 0
        && (iVar8 = hero::Hero_GetWeaponAmmo(-1), iVar8 != 0)))) ||
      ((g_heroState == THROWING_ITEM &&
       (local_e0 = (longlong)(int)(animationSpeed * 16.5),
       hero::g_heroStateTimer == (int)(animationSpeed * 16.5))))))) {
    hero::Hero_PlaySound(0x1a,0);
    hero::hero_ConsumeAmmo(-1,1);
    moby->state = '\x03';
  }
  if (*(int *)((int)pvVar3 + 0x50) != 0) {
    uVar10 = *(undefined4 *)(*(int *)((int)pvVar3 + 0x50) + 0x78);
    dVar25 = -0.3619680106639862;
    dVar23 = 1.0;
    dVar29 = 15.0;
    dVar28 = (double)DAT_0096a320;
    dVar26 = (double)DAT_0096a324;
    dVar12 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
    dVar12 = (double)fastfunc::FastWrapRot((float)dVar25,(float)dVar12);
    dVar22 = 1.570796251296997;
    dVar21 = 3.141592502593994;
    fVar1 = (float)(dVar12 + 1.570796251296997);
    dVar20 = -3.141592502593994;
    dVar19 = -0.16666656732559204;
    dVar18 = 0.008333025500178337;
    dVar17 = -0.0001980741071747616;
    dVar16 = 2.601886990305502e-06;
    dVar12 = 0.8590390086174011;
    fVar5 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar5 = fVar1;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
      fVar4 = fVar5;
    }
    fVar7 = fVar4 * fVar4;
    fVar1 = fVar7 * fVar7 * fVar4;
    fVar5 = fVar7 * fVar1;
    dVar13 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
    dVar13 = (double)fastfunc::FastWrapRot((float)dVar25,(float)dVar13);
    dVar25 = (double)(float)(dVar21 - dVar13);
    if (dVar13 - (double)(float)(dVar21 - dVar13) < 0.0) {
      dVar25 = dVar13;
    }
    dVar27 = (double)(float)(dVar20 - dVar13);
    if ((double)(float)(dVar20 - dVar13) - dVar25 < 0.0) {
      dVar27 = dVar25;
    }
    fVar1 = (fVar7 * fVar5 * 2.601887e-06 +
            fVar5 * -0.0001980741 + fVar1 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4) *
            0.859039 + g_heroPosition.x;
    dVar25 = (double)(float)(dVar27 * dVar27);
    dVar13 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar27));
    dVar15 = (double)(float)(dVar25 * dVar13);
    fVar5 = (float)((double)(float)((double)(float)(dVar25 * dVar15) * dVar16 +
                                   (double)(float)(dVar15 * dVar17 +
                                                  (double)(float)(dVar13 * dVar18 +
                                                                 (double)(float)((double)(float)(
                                                  dVar25 * dVar27) * dVar19 + dVar27)))) * dVar12) +
            g_heroPosition.y;
    fVar4 = g_heroPosition.z + 0.49082;
    dVar12 = (double)FUN_005e8338(dVar28,dVar26);
    if ((g_downButtons & (L1|L2)) != 0) {
      fastfunc::FastIntToDouble(g_goldWeaponsArray.bombGlove);
    }
    dVar25 = 8.5;
    if (((g_downButtons & (L1|L2)) == 0) || (DAT_0096bd8c != '\0')) {
      DAT_0096a730 = (MobyInstance *)0x0;
      if (DAT_00a49344 != (MobyInstance *)0x0) {
        dVar20 = 0.7853981852531433;
        dVar19 = 4.0;
        dVar18 = 1.5707963705062866;
        dVar17 = 0.9599310755729675;
        dVar16 = 2.0;
        iVar8 = 0;
        moby_00 = DAT_00a49344;
        do {
          iVar9 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
          if (((moby_00->state < 0x80) && (iVar9 != 0)) &&
             ((moby_00->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
            local_1a0 = (moby_00->pos).x;
            local_19c = (moby_00->pos).y;
            local_194 = (moby_00->pos).w;
            local_198 = (moby_00->pos).z + *(float *)(iVar9 + 0x10);
            dVar26 = (double)SQRT((fVar1 - local_1a0) * (fVar1 - local_1a0) +
                                  (fVar5 - local_19c) * (fVar5 - local_19c));
            dVar21 = (double)FUN_005e8338((double)(local_1a0 - fVar1),(double)(local_19c - fVar5));
            dVar22 = (double)FUN_005e8338((double)SQRT((fVar1 - local_1a0) * (fVar1 - local_1a0) +
                                                       (fVar5 - local_19c) * (fVar5 - local_19c)),
                                          (double)(local_198 - fVar4));
            dVar23 = (double)fastfunc::FastSubRots((float)dVar12,(float)dVar21);
            if (((dVar23 < dVar20) || ((dVar26 < dVar19 && (dVar23 < dVar18)))) &&
               ((dVar26 < dVar29 &&
                (((dVar22 < dVar17 && ((double)(local_198 - fVar4) < dVar16)) &&
                 (iVar9 = collproc::CollLine(0x951500,&local_1a0,6,moby,0), iVar9 == 0)))))) {
              dVar12 = dVar21;
              dVar29 = dVar26;
              DAT_0096a730 = moby_00;
            }
          }
          moby_00 = *(MobyInstance **)((int)&DAT_00a49348 + iVar8);
          iVar8 = iVar8 + 4;
        } while (moby_00 != (MobyInstance *)0x0);
      }
    }
    else {
      local_1c0 = 0.0;
      local_1bc = 0.0;
      local_1b8 = 1.0;
      local_1b4 = 0;
      FUN_005e825c(&local_1c0,&local_1c0,auStack_120);
      dVar29 = (double)(g_heroMobyPtr->rotation).z;
      uVar14 = FUN_005e8338((double)local_1c0,(double)local_1bc);
      fastfunc::FastDiffRots(dVar29,uVar14);
      dVar12 = (double)FUN_005e8338((double)local_1c0,(double)local_1bc);
      dVar29 = (double)FUN_005e8338((double)SQRT(local_1c0 * local_1c0 + local_1bc * local_1bc),
                                    (double)local_1b8);
      if (0.593411922454834 - dVar29 < 0.0) {
        dVar29 = 0.593411922454834;
      }
      if (dVar29 - -1.3962633609771729 < 0.0) {
        dVar29 = -1.3962633609771729;
      }
      dVar26 = dVar24;
      if ((g_downButtons & (L1|L2)) != 0) {
        dVar24 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.bombGlove);
        dVar24 = (double)(float)(dVar24 * 2.5);
      }
      mobyutil::MB_SphericalToVector
                ((float)(dVar24 + dVar25),(float)dVar12,(float)dVar29,&local_1c0);
      dVar29 = (double)DAT_0071f418;
      dVar27 = 11.0;
      dVar13 = (double)(float)(dVar29 * 11.0);
      dVar28 = (double)SQRT(local_1c0 * local_1c0 + local_1bc * local_1bc);
      dVar24 = 0.009999999776482582;
      if (dVar26 - dVar28 < 0.0) {
        dVar24 = dVar28;
      }
      if (dVar28 - dVar26 < 0.0) {
        dVar24 = dVar28;
      }
      dVar28 = (double)(float)((double)local_1b8 / dVar24);
      dVar24 = dVar26;
      if ((g_downButtons & (L1|L2)) != 0) {
        dVar26 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.bombGlove);
        dVar29 = (double)DAT_0071f418;
        dVar26 = (double)(float)(dVar26 * 2.5);
      }
      fVar4 = SQRT((float)(dVar13 * (double)(float)(dVar26 + dVar25)) * 0.5);
      dVar29 = (double)((fVar4 * 2.0 * fVar4 * (float)(dVar23 - dVar28)) / (float)(dVar29 * dVar27))
      ;
      if (dVar24 < dVar29) {
        dVar23 = (double)(float)(dVar12 + dVar22);
        dVar22 = (double)(float)(dVar21 - dVar12);
        if (dVar12 - (double)(float)(dVar21 - dVar12) < 0.0) {
          dVar22 = dVar12;
        }
        dVar26 = (double)(float)(dVar21 - dVar23);
        if (dVar23 - (double)(float)(dVar21 - dVar23) < 0.0) {
          dVar26 = dVar23;
        }
        dVar21 = (double)(float)(dVar20 - dVar12);
        if ((double)(float)(dVar20 - dVar12) - dVar22 < 0.0) {
          dVar21 = dVar22;
        }
        dVar12 = (double)(float)(dVar20 - dVar23);
        if ((double)(float)(dVar20 - dVar23) - dVar26 < 0.0) {
          dVar12 = dVar26;
        }
        dVar20 = (double)(float)(dVar21 * dVar21);
        dVar22 = (double)(float)(dVar12 * dVar12);
        dVar13 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar21));
        dVar23 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar12));
        dVar26 = (double)(float)(dVar20 * dVar13);
        dVar27 = (double)(float)(dVar22 * dVar23);
        local_1a8 = GameCamera.posZ + (float)(dVar28 * dVar29);
        local_1bc = (float)((double)(float)((double)(float)(dVar20 * dVar26) * dVar16 +
                                           (double)(float)(dVar26 * dVar17 +
                                                          (double)(float)(dVar13 * dVar18 +
                                                                         (double)(float)((double)(
                                                  float)(dVar20 * dVar21) * dVar19 + dVar21)))) *
                           dVar29);
        local_1c0 = (float)((double)(float)((double)(float)(dVar22 * dVar27) * dVar16 +
                                           (double)(float)(dVar27 * dVar17 +
                                                          (double)(float)(dVar23 * dVar18 +
                                                                         (double)(float)((double)(
                                                  float)(dVar22 * dVar12) * dVar19 + dVar12)))) *
                           dVar29);
        local_1ac = GameCamera.posY + local_1bc;
        local_1a4[0] = GameCamera.field8_0x14c[0];
        local_1a4[1] = GameCamera.field8_0x14c[1];
        local_1a4[2] = GameCamera.field8_0x14c[2];
        local_1a4[3] = GameCamera.field8_0x14c[3];
        local_1b0 = GameCamera.posX + local_1c0;
        local_1b8 = (float)(dVar28 * dVar29);
        iVar8 = collproc::CollLine(0x951500,&local_1b0,2,moby,0);
        if ((iVar8 != 0) && (CollOutput.pMoby != g_heroMobyPtr)) {
          FUN_005e8338((double)(CollOutput.ip.x - fVar1),(double)(CollOutput.ip.y - fVar5));
        }
      }
    }
    uVar14 = 0x3ee4f8b580000000;
    dVar29 = (double)(DAT_0071f418 * 11.0);
    if ((g_downButtons & (L1|L2)) != 0) {
      dVar24 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.bombGlove);
      dVar24 = (double)(float)(dVar24 * 2.5);
    }
    mobyupdate_helpers::M192_002daa30
              (dVar29,uVar14,(double)(float)(dVar24 + dVar25),local_1e0,local_1d0,uVar10);
  }
  uVar2 = moby->state;
  if (uVar2 == '\x06') {
    if (*(MobyInstance **)((int)pvVar3 + 0x50) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x50));
    }
  }
  else if (uVar2 == '\x05') {
    moby->state = '\x06';
  }
  else if (uVar2 == '\x04') {
    if ((g_heroState != THROWING_ITEM) && (DAT_0096bd88 == '\0')) {
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\x03') {
    iVar8 = *(int *)((int)pvVar3 + 0x50);
    if (iVar8 == 0) {
      uVar10 = FUN_00200c38(moby,uVar11 + 0x40);
      *(undefined4 *)((int)pvVar3 + 0x50) = uVar10;
    }
    else {
      FUN_00200fd0(local_1e0,iVar8,*(undefined4 *)(iVar8 + 0x78));
      if (DAT_00a0fd74 != -1) {
        DAT_00a0fd74 = DAT_00a0fd74 + 1;
      }
      iVar8 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      local_e0 = (longlong)iVar8;
      if ((int)(uint)DAT_00a0fd76 < iVar8 / 600) {
        sVar6 = (short)(iVar8 >> 0x1f);
        DAT_00a0fd76 = ((short)(iVar8 / 600) + sVar6) -
                       ((short)((short)(iVar8 / 0x2580000) + sVar6) >> 0xf);
      }
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      DAT_00a0fd78 = DAT_00a0fd78 | 1 << (Level & 0x3f) | 0x80000000;
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
      moby->state = '\x04';
      auVar30 = loadVectorLeftIndexed(0x74,0x2dafa4);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x54,uVar11)
      ;
      *(undefined4 *)((int)pvVar3 + 0x54U & 0xfffffffc) = uVar10;
    }
  }
  else if (uVar2 != '\x02') {
    if (uVar2 != '\x01') {
      if (uVar2 != '\0') goto LAB_002dbcbc;
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
      moby->state = (char)((LZCOUNT(-((byte)moby->field43_0x70 & 2)) << 0x3a) >> 0x3f) + '\x02';
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x02';
    }
  }
LAB_002dbcbc:
  iVar8 = *(int *)((int)pvVar3 + 0x50);
  if (iVar8 == 0) {
    iVar8 = hero::Hero_GetWeaponAmmo(-1);
    if (iVar8 == 0) {
      if (DAT_0096bd88 != '\0') {
        uVar10 = FUN_00200c38(moby,uVar11 + 0x40);
        *(undefined4 *)((int)pvVar3 + 0x50) = uVar10;
      }
    }
    else {
      uVar10 = FUN_00200c38(moby,uVar11 + 0x40);
      *(undefined4 *)((int)pvVar3 + 0x50) = uVar10;
    }
  }
  else {
    *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)((int)pvVar3 + 0x40);
    *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)((int)pvVar3 + 0x44);
    *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)((int)pvVar3 + 0x48);
    *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)((int)pvVar3 + 0x4c);
  }
  return;
}



//==== 002dbdac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1921_002dbdac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1921_002dbdac(void)

{
  DAT_007f3e0c = 0x10000;
  return;
}



//==== 002dbdc0  ns=Global  size=0xb0
// sig: undefined FUN_002dbdc0(void)
// callers(1): 0019ebd8 mobyupdate_unsorted::UpdateMoby_1047
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_002dbdc0(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  f32 fVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  
  pMVar4 = mobyfunc::CreateMoby(0x781);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).x = 0.0;
    (pMVar4->rotation).y = 0.0;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).z = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    fVar2 = *(f32 *)(param_1 + 0x14);
    fVar3 = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).x = fVar1;
    (pMVar4->pos).y = fVar2;
    fVar1 = *(f32 *)(param_1 + 0x1c);
    (pMVar4->pos).z = fVar3;
    (pMVar4->pos).w = fVar1;
    (pMVar4->pos).z = 59.0;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 002dbe70  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1921(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1921 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1921(MobyInstance *moby)

{
  return moby;
}



//==== 002dbe78  ns=mobyupdate_helpers  size=0xa8
// sig: undefined M1923_002dbe78(void)
// callers(0): 
// callees(1): 00321970 FUN_00321970

MobyInstance * mobyupdate_helpers::M1923_002dbe78(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  MobyInstance *pMVar4;
  
  puVar3 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar4 = MobyInstance + (*puVar3 & 0x7fff);
      if ((pMVar4->oClass == MORPH_O_RAY_CHICKEN) && (iVar2 = FUN_00321970(pMVar4), iVar2 != 0)) {
        return pMVar4;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}



//==== 002dbf30  ns=mobyupdate_unsorted  size=0x374
// sig: undefined UpdateMoby_1923(MobyInstance * moby)
// callers(0): 
// callees(8): 000fe484 mobyutil::MB_randRange; 000ffb70 mobyutil::GetGroundZ; 00110b70 mobyutil::MB_IsPntInCuboid; 001dbce8 FUN_001dbce8; 001dbd38 FUN_001dbd38; 003216b8 FUN_003216b8; 00321970 FUN_00321970; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1923 */

void mobyupdate_unsorted::UpdateMoby_1923(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  MobyInstance *pMVar7;
  ushort *puVar8;
  MobyInstance *pMVar9;
  MobyInstance *pMVar10;
  undefined1 local_50 [40];
  
  piVar3 = (int *)moby->pVar;
  iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[2]);
  if (iVar6 != 0) {
    bVar1 = moby->state;
    pMVar10 = MobyInstance + piVar3[1];
    if (bVar1 == 0) {
      if (-1 < (int)(uint)bVar1) {
        moby->state = '\x01';
        iVar6 = mobyutil::MB_randRange(0xb4,0x168);
        piVar3[3] = (int)(animationSpeed * ((float)(longlong)iVar6 + 0.5));
      }
    }
    else if (bVar1 < 2) {
      fVar4 = g_heroPosition.y - (pMVar10->pos).y;
      fVar5 = g_heroPosition.x - (pMVar10->pos).x;
      if ((3.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) &&
         (puVar8 = (ushort *)(&mobyutil::g_MobyGroups)[*piVar3], pMVar7 = MobyInstance,
         puVar8 != (ushort *)0x0)) {
        do {
          pMVar9 = pMVar7 + (*puVar8 & 0x7fff);
          if ((pMVar9->oClass == MORPH_O_RAY_CHICKEN) &&
             (iVar6 = FUN_00321970(pMVar9), pMVar7 = MobyInstance, iVar6 != 0)) {
            if (pMVar9 == (MobyInstance *)0x0) {
              return;
            }
            iVar6 = fastfunc::FastDecTimerS32(piVar3 + 3);
            if (iVar6 == 0) {
              return;
            }
            moby->state = '\x02';
            FUN_001dbce8(pMVar10);
            iVar6 = mobyutil::MB_randRange(0xb4,0x168);
            piVar3[3] = (int)(animationSpeed * ((float)(longlong)iVar6 + 0.5));
            return;
          }
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
        } while (-1 < (short)uVar2);
      }
    }
    else if (bVar1 < 3) {
      iVar6 = FUN_001dbd38(pMVar10);
      if (iVar6 < 1) {
        if (-1 < iVar6) {
          moby->state = '\x01';
        }
      }
      else if (iVar6 == 2) {
        moby->state = '\x01';
        puVar8 = (ushort *)(&mobyutil::g_MobyGroups)[*piVar3];
        if (puVar8 != (ushort *)0x0) {
          do {
            pMVar10 = MobyInstance + (*puVar8 & 0x7fff);
            if ((pMVar10->oClass == MORPH_O_RAY_CHICKEN) &&
               (iVar6 = FUN_00321970(pMVar10), iVar6 != 0)) {
              if (pMVar10 == (MobyInstance *)0x0) {
                return;
              }
              mobyutil::GetGroundZ(0x3fe0000000000000,local_50,0);
              FUN_003216b8(pMVar10);
              return;
            }
            uVar2 = *puVar8;
            puVar8 = puVar8 + 1;
          } while (-1 < (short)uVar2);
        }
      }
    }
  }
  return;
}



//==== 002dc2a4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1923_002dc2a4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1923_002dc2a4(void)

{
  DAT_007f3e7c = 0x10000;
  return;
}



//==== 002dc2b8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1923_002dc2b8(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M1923_002dc2b8(MobyInstance *param_1)

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



//==== 002dc310  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1923_002dc310(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M1923_002dc310(int param_1)

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



//==== 002dc368  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1923_002dc368(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M1923_002dc368(int param_1)

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



//==== 002dc3c0  ns=mobyupdate_helpers  size=0x38
// sig: undefined M1923_002dc3c0(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M1923_002dc3c0(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}



//==== 002dc3f8  ns=mobyupdate_helpers  size=0x40
// sig: undefined M1923_002dc3f8(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M1923_002dc3f8(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 002dc438  ns=mobyupdate_helpers  size=0xa4
// sig: undefined M1923_002dc438(void)
// callers(0): 
// callees(1): 00104e44 mobyutil::PointInsideComplexPoly

undefined8 mobyupdate_helpers::M1923_002dc438(int param_1,undefined4 *param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 0x220);
  if ((iVar2 == -1) ||
     (iVar2 = mobyutil::PointInsideComplexPoly
                        ((Vec4 *)(param_1 + 0x10),(Vec4 *)Splines[iVar2]->points,Splines[iVar2]->cnt
                        ), iVar2 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = param_2[1];
    *(undefined4 *)(param_1 + 0x18) = param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  }
  return uVar1;
}



//==== 002dc568  ns=mobyupdate_unsorted  size=0x2208
// sig: undefined UpdateMoby_193(MobyInstance * moby)
// callers(0): 
// callees(37): 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001118d8 mobyutil::MB_getTarget; 00119a18 mobyfunc::DoManipulator; 001385d0 path::Path_PickNextNode; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005c8318 rand; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338

/* Moby 193 */

void mobyupdate_unsorted::UpdateMoby_193(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  u16 *puVar9;
  MobyInstance *pMVar10;
  undefined2 uVar11;
  float fVar12;
  longlong lVar13;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar14;
  ulonglong uVar18;
  undefined8 uVar19;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float local_160;
  float local_15c;
  undefined4 local_158;
  Vec4 local_150;
  float local_140;
  float local_13c;
  undefined4 local_138;
  float local_130;
  float local_12c;
  float local_128;
  f32 local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  Vec4 local_110;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  Vec4 local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  f32 local_d4;
  Vec4 local_d0 [4];
  MobyInstance *local_90;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  longlong local_78;
  
  lVar13 = (longlong)(int)moby;
  iVar15 = 2;
  pvVar8 = moby->pVar;
  uVar18 = ZEXT48(pvVar8);
  if (moby->state != '\a' && moby->state != 'c') {
    dVar32 = 0.0;
    local_7c = 0;
    iVar15 = mobyutil::MB_damage(lVar13,0x330000,0);
    mobyutil::MB_HandleDamage(moby,iVar15,uVar18 + 0x20,0,auStack_80,&local_7c,0,4);
    fastfunc::FastDecTimerS16(uVar18 + 0x26);
    local_78 = (longlong)(int)(animationSpeed * 45.5);
    if (((int)*(short *)((int)pvVar8 + 0x26) < (int)(animationSpeed * 45.5)) && (iVar15 != 0)) {
      sVar7 = *(short *)(*(int *)(iVar15 + 0x20) + 0xa6);
      if ((sVar7 == 0xb0) || (sVar7 == 0xb1)) {
        dVar30 = 1.0;
        if (*(short *)((int)pvVar8 + 0x26) != 0) {
          dVar30 = dVar32;
        }
        *(float *)(iVar15 + 0x2c) = (float)dVar30;
      }
      if (moby->group != -1) {
        mobyutil::MB_SetGroupField(moby->group,1);
      }
      if (*(int *)(iVar15 + 0x2c) != 0) {
        fVar4 = *(float *)((int)pvVar8 + 0x20) - *(float *)(iVar15 + 0x2c);
        *(undefined4 *)((int)pvVar8 + 0x130) = 0x3c03126f;
        *(undefined4 *)((int)pvVar8 + 0x134) = 0x3a03126f;
        *(float *)((int)pvVar8 + 0x20) = fVar4;
        fVar5 = DAT_007f3ea4;
        fVar12 = mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar8 + 0x144) = 9;
        fVar5 = fVar5 * fVar12;
        *(float *)((int)pvVar8 + 0x138) = fVar5;
        fVar6 = DAT_007f3ea0;
        *(undefined1 *)((int)pvVar8 + 0x15d) = 0;
        fVar6 = fVar6 * fVar12;
        *(float *)((int)pvVar8 + 0x13c) = fVar6;
        if (dVar32 < (double)fVar4) {
          if (*(short *)(iVar15 + 0x2a) == 0xb4) {
            *(float *)((int)pvVar8 + 0x138) = fVar5 * 1.35;
            *(float *)((int)pvVar8 + 0x13c) = fVar6 * 1.35;
          }
          FUN_005e8338((double)((moby->pos).x - local_d0[0].x),
                       (double)((moby->pos).y - local_d0[0].y));
          mobyutil::MB_StartKick(lVar13,uVar18 + 0x120);
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          *(undefined4 *)((int)pvVar8 + 0x170) = 0x40a00000;
          *(undefined4 *)((int)pvVar8 + 0x174) = 0x41200000;
          moby->state = '\x06';
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          *(undefined1 *)((int)pvVar8 + 0x117) = 0xfa;
          auVar33 = loadVectorLeftIndexed(0x18,0x2dc4dc);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorMultiplyAddFloatingPoint
                              (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                               ,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar33,0x26,uVar18);
          *(undefined2 *)((int)pvVar8 + 0x26) = uVar11;
          mobyutil::MB_UpdateLightsTransition(lVar13,uVar18 + 0x110);
        }
        else {
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          fVar5 = mobyutil::g_FrameTime;
          fVar4 = mobyutil::g_FrameTime * 8.0;
          *(float *)((int)pvVar8 + 0x138) = fVar4;
          *(float *)((int)pvVar8 + 0x13c) = fVar5 * 10.0;
          if (*(short *)(iVar15 + 0x2a) == 0xb4) {
            *(float *)((int)pvVar8 + 0x138) = fVar4 * 1.35;
            *(float *)((int)pvVar8 + 0x13c) = fVar5 * 10.0 * 1.35;
          }
          FUN_005e8338((double)((moby->pos).x - local_d0[0].x),
                       (double)((moby->pos).y - local_d0[0].y));
          mobyutil::MB_StartKick(lVar13,uVar18 + 0x120);
          *(undefined4 *)((int)pvVar8 + 0x170) = 0x41300000;
          *(undefined4 *)((int)pvVar8 + 0x174) = 0x41900000;
          if (g_heroType == '\x02') {
            mobyutil::MB_SpawnBoltsFromCrate(lVar13,0x200,0xffffffffffffffff);
          }
          else {
            mobyutil::MB_SpawnBoltsFromCrate(lVar13,0,0xffffffffffffffff);
          }
          moby->collision = (ushort *)0x0;
          moby->state = 'c';
          *(undefined1 *)((int)pvVar8 + 0x117) = 0x78;
          mobyutil::MB_UpdateLightsTransition(lVar13,uVar18 + 0x110);
        }
      }
    }
    moby->damage = -1;
    mobyfunc::DoManipulator(0x4000ccccc0000000,moby,0,(Manipulator *)((int)pvVar8 + 0x230));
    if ((moby->enabled != '\0') &&
       (fVar4 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
       fVar6 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 38.0)) {
      mobyutil::MB_SetZBoundsFromGround(lVar13);
      moby->shadow = '\x1e';
    }
    fVar4 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    if (40.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
      return;
    }
    if (*(int *)((int)pvVar8 + 0x228) != 0) {
      if (g_heroType != '\x02') {
        moby->collision = (ushort *)0x0;
        moby->updateDistance = -1;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        return;
      }
      if (g_heroType == '\x02') {
        puVar9 = moby->pClass->collision;
        moby->updateDistance = '@';
        moby->collision = puVar9;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      }
    }
    if (*(int *)((int)pvVar8 + 0x38) != 0) {
      auVar33 = ZEXT416(0xffffffff);
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x28,0x2dc4dc);
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar33 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                           auVar34);
      auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
      auVar33 = vectorSplatHalfWord(auVar33,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar33,0x214,uVar18);
      *(undefined2 *)((int)pvVar8 + 0x214) = uVar11;
    }
    *(undefined4 *)((int)pvVar8 + 0x38) = 0;
    fastfunc::FastDecTimerS32(uVar18 + 0x208);
    iVar15 = fastfunc::FastDecTimerS16(uVar18 + 0x214);
    uVar3 = 0x41a00000;
    if (iVar15 != 0) {
      uVar3 = 0x41400000;
    }
    *(undefined4 *)((int)pvVar8 + 0x1fc) = uVar3;
    iVar15 = mobyutil::MB_getTarget(lVar13,&DAT_002dc4dc,local_d0);
  }
  dVar28 = (double)(moby->pos).x;
  dVar25 = (double)(moby->pos).y;
  iVar16 = fastfunc::FastDecTimerS32(uVar18 + 0x224);
  fVar4 = (moby->pos).x;
  bVar1 = moby->state;
  dVar30 = -1.0;
  fVar5 = (moby->pos).y;
  dVar32 = dVar30;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
      if ((uVar17 & 1) != 0) {
        moby->state = '\t';
        if (moby->animationId == '\x03') {
          return;
        }
        iVar15 = mobyutil::MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        mobyutil::MB_SetAnimation(lVar13,3,0,iVar15);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      goto LAB_002de680;
    }
    if (bVar1 != 5) {
      if (bVar1 == 4) {
        uVar19 = FUN_005e8338((double)(local_d0[0].x - fVar4),(double)(local_d0[0].y - fVar5));
        dVar32 = 0.20000000298023224;
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar13,
                   &DAT_002dc4dc,uVar18 + 0x1f0);
        if (((moby->updateId == moby->animationId) &&
            (dVar25 = (double)mobyfunc::BlendAnimFrame(moby), dVar25 == 13.0)) &&
           (ABS((moby->pos).z - local_d0[0].z) < 0.5)) {
          fVar4 = (moby->pos).y;
          fVar5 = (moby->pos).x;
          fVar12 = fVar4 - local_d0[0].y;
          fVar6 = fVar5 - local_d0[0].x;
          if (SQRT(fVar6 * fVar6 + fVar12 * fVar12) < 2.0) {
            dVar25 = (double)FUN_005e8338((double)(local_d0[0].x - fVar5),
                                          (double)(local_d0[0].y - fVar4));
            dVar25 = (double)fastfunc::FastSubRots((float)dVar25,(moby->rotation).z);
            if (dVar25 < 0.2617993950843811) {
              dVar25 = (double)mathfunc::cosf((moby->rotation).z);
              local_140 = (float)(dVar25 * dVar32);
              dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
              local_13c = (float)(dVar25 * dVar32);
              local_138 = 0;
              local_130 = local_d0[0].x;
              local_12c = local_d0[0].y;
              local_124 = local_d0[0].w;
              local_128 = local_d0[0].z + 0.75;
              mobyutil::CollDamageMobyDirect(1.0,local_90,moby,1,0x2dc4dc,&local_130,&local_140);
            }
          }
        }
        dVar32 = dVar30;
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (local_d0[0].y = (moby->pos).y - local_d0[0].y,
            local_d0[0].x = (moby->pos).x - local_d0[0].x,
            1.5 < SQRT(local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y))) &&
           (moby->state = '\x03', moby->animationId != '\0')) {
          iVar15 = mobyutil::MB_randRange(10,0xd);
          iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
          local_78 = (longlong)iVar15;
          mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
          dVar32 = dVar30;
        }
        dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
        fVar4 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar8 + 0x198));
        *(float *)((int)pvVar8 + 0x198) = fVar4;
        fVar4 = (moby->pos).z + fVar4;
        (moby->pos).z = fVar4;
        if ((double)fVar4 < dVar30) {
          *(undefined4 *)((int)pvVar8 + 0x198) = 0;
          (moby->pos).z = (float)dVar30;
        }
        goto LAB_002de680;
      }
      if (bVar1 == 3) {
        dVar25 = (double)(ABS((moby->pos).z - local_d0[0].z) /
                         SQRT((fVar4 - local_d0[0].x) * (fVar4 - local_d0[0].x) +
                              (fVar5 - local_d0[0].y) * (fVar5 - local_d0[0].y)));
        if (*(int *)((int)pvVar8 + 0x21c) == -1) {
          local_150.x = local_d0[0].x;
          local_150.y = local_d0[0].y;
          local_150.z = local_d0[0].z;
          local_150.w = local_d0[0].w;
        }
        else {
          path::Path_PickNextNode(moby,Splines[*(int *)((int)pvVar8 + 0x21c)],local_d0,&local_150);
          fVar4 = (moby->pos).x;
          fVar5 = (moby->pos).y;
        }
        dVar28 = (double)FUN_005e8338((double)(local_150.x - fVar4),(double)(local_150.y - fVar5));
        mobyutil::OrganicDeltAngSpeed
                  ((double)(float)(dVar28 + (double)*(float *)((int)pvVar8 + 500)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar13);
        dVar28 = (double)mathfunc::cosf((moby->rotation).z);
        dVar26 = 2.0;
        local_160 = (float)(dVar28 * 2.0);
        dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_15c = (float)(dVar28 * dVar26);
        local_150.x = (moby->pos).x + local_160;
        local_150.z = (moby->pos).z;
        local_158 = 0;
        local_150.w = (moby->pos).w;
        local_150.y = (moby->pos).y + local_15c;
        dVar28 = 1.0;
        uVar14 = mobyutil::MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0x180),&local_150
                            ,&local_160);
        iVar15 = fastfunc::FastDecTimerS32(uVar18 + 0x210);
        if (iVar15 != 0) {
          dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          fVar4 = animationSpeed;
          *(float *)((int)pvVar8 + 500) = -*(float *)((int)pvVar8 + 500);
          *(int *)((int)pvVar8 + 0x210) = (int)(fVar4 * ((float)(longlong)dVar26 + 0.5));
        }
        fVar4 = local_d0[0].x - *(float *)((int)pvVar8 + 0x1d0);
        fVar5 = local_d0[0].y - *(float *)((int)pvVar8 + 0x1d4);
        fVar6 = local_d0[0].z - *(float *)((int)pvVar8 + 0x1d8);
        if (((uVar14 & 4) != 0) ||
           ((local_d0[0].y = (moby->pos).y - local_d0[0].y,
            local_d0[0].x = (moby->pos).x - local_d0[0].x,
            SQRT(local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y) < 1.5 &&
            ((uVar14 & 2) == 0)))) {
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            iVar15 = mobyutil::MB_randRange(10,0xd);
            iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
            local_78 = (longlong)iVar15;
            mobyutil::MB_SetAnimation(lVar13,1,0,iVar15);
          }
        }
        else {
          uVar17 = (int)*(uint *)((int)pvVar8 + 400) >> 0x1f;
          if ((((int)((uVar17 >> 1 ^ *(uint *)((int)pvVar8 + 400)) - uVar17) <
                (int)(((uint)((int)mobyutil::g_FrameTime >> 0x1f) >> 1 ^ (uint)mobyutil::g_FrameTime
                      ) - ((int)mobyutil::g_FrameTime >> 0x1f))) || (dVar28 < dVar25)) ||
             ((uVar14 & 2) != 0)) {
            auVar33 = ZEXT416(0xffffffff);
            auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = loadVectorLeftIndexed(0x68,0x2dc4dc);
            auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar33 = vectorMultiplyAddFloatingPoint
                                (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 |
                                         auVar33 << 0x60,auVar34);
            auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
            auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar3 = storeVectorElementWordIndexed
                              (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x224,
                               uVar18);
            *(undefined4 *)((int)pvVar8 + 0x224U & 0xfffffffc) = uVar3;
            moby->state = '\x05';
          }
          else if ((*(float *)((int)pvVar8 + 0x1fc) + 4.0 <=
                    SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5)) ||
                  (8.0 <= ABS((moby->pos).z - local_d0[0].z))) {
            if (moby->setByGroup != '\x01') {
              moby->state = '\x05';
            }
          }
          else if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
        }
        moby->setByGroup = '\0';
        goto LAB_002de680;
      }
      if (bVar1 != 2) {
        if (bVar1 == 1) {
          fVar6 = (moby->pos).z;
          fVar12 = local_d0[0].z - fVar6;
          if (((1 < iVar15) &&
              (*(float *)((int)pvVar8 + 0x1fc) + 4.0 <=
               SQRT(fVar12 * fVar12 +
                    (local_d0[0].x - fVar4) * (local_d0[0].x - fVar4) +
                    (local_d0[0].y - fVar5) * (local_d0[0].y - fVar5)))) ||
             ((8.0 <= ABS(fVar6 - local_d0[0].z) ||
              (iVar15 = mobyutil::MB_randInt(0x13), iVar15 != 0)))) {
            if ((moby->setByGroup == '\x01') && (iVar15 = mobyutil::MB_randInt(0x13), iVar15 == 0))
            {
              uVar14 = mobyutil::MB_randInt(0x100);
              fVar4 = *(float *)((int)pvVar8 + 0x1f8);
              if ((uVar14 & 1) != 0) {
                fVar4 = -fVar4;
                *(float *)((int)pvVar8 + 0x1f8) = fVar4;
              }
              *(float *)((int)pvVar8 + 500) = fVar4 * 0.017453292;
              dVar25 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
              dVar28 = 0.5;
              *(int *)((int)pvVar8 + 0x210) =
                   (int)(animationSpeed * (float)((double)(longlong)dVar25 + 0.5));
              moby->state = '\x03';
              if (moby->animationId != '\0') {
                iVar15 = mobyutil::MB_randRange(10,0xd);
                iVar15 = (int)(animationSpeed * (float)((double)(longlong)iVar15 + dVar28));
                local_78 = (longlong)iVar15;
                mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
              }
              moby->setByGroup = '\0';
            }
          }
          else {
            moby->state = '\x02';
            if (moby->animationId != '\x04') {
              iVar15 = mobyutil::MB_randRange(10,0xd);
              iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
              local_78 = (longlong)iVar15;
              mobyutil::MB_SetAnimation(lVar13,4,0,iVar15);
            }
          }
        }
        else if (bVar1 == 0) {
          *(float *)((int)pvVar8 + 0x1d0) = fVar4;
          *(f32 *)((int)pvVar8 + 0x1d4) = (moby->pos).y;
          *(f32 *)((int)pvVar8 + 0x1d8) = (moby->pos).z;
          *(f32 *)((int)pvVar8 + 0x1dc) = (moby->pos).w;
          moby->state = '\x01';
          *(undefined4 *)((int)pvVar8 + 0x20) = 0x3f800000;
          *(undefined2 *)((int)pvVar8 + 0x24) = 1;
          *(undefined1 *)((int)pvVar8 + 0x29) = 0;
          *(undefined1 *)((int)pvVar8 + 0x5a) = 2;
          *(undefined1 *)((int)pvVar8 + 0x58) = 8;
          *(undefined2 *)((int)pvVar8 + 0x214) = 0;
          *(undefined4 *)((int)pvVar8 + 0x208) = 0;
          mobyutil::MB_InitDefaultParams((float *)((int)pvVar8 + 0x180));
          *(undefined4 *)((int)pvVar8 + 0x18c) = 0x40000000;
          *(undefined4 *)((int)pvVar8 + 0x188) = 0x40000000;
          fVar4 = *(float *)((int)pvVar8 + 0x204) * mobyutil::g_FrameTime;
          *(undefined4 *)((int)pvVar8 + 0x180) = 0x38d;
          *(float *)((int)pvVar8 + 0x1a4) = fVar4;
          uVar17 = rand();
          if ((uVar17 & 1) != 0) {
            moby->modeBits = moby->modeBits | MIRROR;
          }
          *(undefined **)((int)pvVar8 + 0xd0) = &DAT_007f3eb0;
          dVar32 = dVar30;
          if (moby->animationId != '\x02') {
            iVar15 = mobyutil::MB_randRange(10,0xd);
            iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
            local_78 = (longlong)iVar15;
            mobyutil::MB_SetAnimation(lVar13,2,0,iVar15);
            dVar32 = dVar30;
          }
          dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
          (moby->pos).z = (float)dVar30;
        }
        goto LAB_002de680;
      }
      goto LAB_002dcf0c;
    }
    if (*(int *)((int)pvVar8 + 0x21c) == -1) {
      local_110.x = *(float *)((int)pvVar8 + 0x1d0);
      local_110.y = *(float *)((int)pvVar8 + 0x1d4);
      local_110.z = *(f32 *)((int)pvVar8 + 0x1d8);
      local_110.w = *(f32 *)((int)pvVar8 + 0x1dc);
    }
    else {
      path::Path_PickNextNode
                (moby,Splines[*(int *)((int)pvVar8 + 0x21c)],(Vec4 *)((int)pvVar8 + 0x1d0),
                 &local_110);
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
    }
    uVar19 = FUN_005e8338((double)(local_110.x - fVar4),(double)(local_110.y - fVar5));
    mobyutil::OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar13);
    dVar26 = (double)mathfunc::cosf((moby->rotation).z);
    dVar23 = 2.0;
    local_120 = (float)(dVar26 * 2.0);
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_11c = (float)(dVar26 * dVar23);
    local_110.x = (moby->pos).x + local_120;
    local_110.z = (moby->pos).z;
    local_118 = 0;
    local_110.w = (moby->pos).w;
    local_110.y = (moby->pos).y + local_11c;
    uVar14 = mobyutil::MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0x180),&local_110,
                        &local_120);
    fVar4 = (moby->pos).y - *(float *)((int)pvVar8 + 0x1d4);
    fVar5 = (moby->pos).x - *(float *)((int)pvVar8 + 0x1d0);
    if (((double)SQRT(fVar5 * fVar5 + fVar4 * fVar4) < dVar23) &&
       (moby->state = '\x01', moby->animationId != '\x02')) {
      iVar15 = mobyutil::MB_randRange(10,0xd);
      iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
      local_78 = (longlong)iVar15;
      mobyutil::MB_SetAnimation(lVar13,2,0,iVar15);
    }
    local_d0[0].x = local_d0[0].x - *(float *)((int)pvVar8 + 0x1d0);
    local_d0[0].y = local_d0[0].y - *(float *)((int)pvVar8 + 0x1d4);
    local_d0[0].z = local_d0[0].z - *(float *)((int)pvVar8 + 0x1d8);
    if (iVar16 == 0) {
LAB_002ddbe4:
      if ((uVar14 & 2) != 0) {
        uVar2 = moby->animationId;
        (moby->pos).x = (float)dVar28;
        (moby->pos).y = (float)dVar25;
        moby->state = '\f';
        if (uVar2 != '\x04') {
          iVar15 = mobyutil::MB_randRange(10,0xd);
          iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
          local_78 = (longlong)iVar15;
          mobyutil::MB_SetAnimation(lVar13,4,0,iVar15);
        }
      }
    }
    else if (*(float *)((int)pvVar8 + 0x1fc) <=
             SQRT(local_d0[0].z * local_d0[0].z +
                  local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y)) {
      if (moby->setByGroup != '\x01') goto LAB_002ddbe4;
      moby->state = '\x03';
      if (moby->animationId != '\0') {
        iVar15 = mobyutil::MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
      }
    }
    else {
      if (moby->group != -1) {
        mobyutil::MB_SetGroupField(moby->group,1);
      }
      moby->state = '\x03';
      if (moby->animationId != '\0') {
        iVar15 = mobyutil::MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
      }
    }
    moby->setByGroup = '\0';
    goto LAB_002de680;
  }
  if (bVar1 < 0xc) {
    if (bVar1 < 9) {
      if (bVar1 < 8) {
        iVar15 = FUN_0048c188(lVar13,uVar18 + 0x120);
        if (iVar15 != 0) {
          moby->state = '\x01';
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimation(lVar13,2,0,0);
          }
          *(undefined2 *)((int)pvVar8 + 200) = 0;
        }
        goto LAB_002de680;
      }
    }
    else if (bVar1 < 10) {
      dVar25 = (double)mobyfunc::BlendAnimFrame(moby);
      if (29.0 < dVar25) {
        moby->state = '\x03';
        if (moby->animationId == '\0') {
          return;
        }
        iVar15 = mobyutil::MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
        return;
      }
      goto LAB_002de680;
    }
LAB_002dcf0c:
    uVar19 = FUN_005e8338((double)(local_d0[0].x - fVar4),(double)(local_d0[0].y - fVar5));
    mobyutil::OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar13,&DAT_002dc4dc,
               uVar18 + 0x1f0);
    local_d0[0].x = local_d0[0].x - (moby->pos).x;
    fVar4 = (moby->pos).z;
    local_d0[0].y = local_d0[0].y - (moby->pos).y;
    fVar5 = local_d0[0].z - fVar4;
    if ((((1 < iVar15) &&
         (*(float *)((int)pvVar8 + 0x1fc) <=
          SQRT(fVar5 * fVar5 + local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y))) ||
        (8.0 <= ABS(fVar4 - local_d0[0].z))) || (iVar15 = mobyutil::MB_randInt(0x13), iVar15 != 0))
    {
      if ((moby->setByGroup == '\x01') && (iVar15 = mobyutil::MB_randInt(0x13), iVar15 == 0)) {
        uVar14 = mobyutil::MB_randInt(0x100);
        fVar4 = *(float *)((int)pvVar8 + 0x1f8);
        if ((uVar14 & 1) != 0) {
          fVar4 = -fVar4;
          *(float *)((int)pvVar8 + 0x1f8) = fVar4;
        }
        *(float *)((int)pvVar8 + 500) = fVar4 * 0.017453292;
        dVar25 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        dVar28 = 0.5;
        *(int *)((int)pvVar8 + 0x210) =
             (int)(animationSpeed * (float)((double)(longlong)dVar25 + 0.5));
        moby->state = '\x03';
        if (moby->animationId != '\0') {
          iVar15 = mobyutil::MB_randRange(10,0xd);
          iVar15 = (int)(animationSpeed * (float)((double)(longlong)iVar15 + dVar28));
          local_78 = (longlong)iVar15;
          mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
        }
        moby->setByGroup = '\0';
      }
    }
    else {
      if (moby->group != -1) {
        mobyutil::MB_SetGroupField(moby->group,1);
      }
      uVar14 = mobyutil::MB_randInt(0x100);
      fVar4 = *(float *)((int)pvVar8 + 0x1f8);
      if ((uVar14 & 1) != 0) {
        fVar4 = -fVar4;
        *(float *)((int)pvVar8 + 0x1f8) = fVar4;
      }
      *(float *)((int)pvVar8 + 500) = fVar4 * 0.017453292;
      dVar25 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
      dVar28 = 0.5;
      *(int *)((int)pvVar8 + 0x210) =
           (int)(animationSpeed * (float)((double)(longlong)dVar25 + 0.5));
      moby->state = '\x03';
      if (moby->animationId != '\0') {
        iVar15 = mobyutil::MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * (float)((double)(longlong)iVar15 + dVar28));
        local_78 = (longlong)iVar15;
        mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
      }
      moby->setByGroup = '\0';
    }
    if (((moby->animationId == '\x04') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\x02')) {
      iVar15 = mobyutil::MB_randRange(10,0xd);
      iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
      local_78 = (longlong)iVar15;
      mobyutil::MB_SetAnimation(lVar13,2,0,iVar15);
    }
    goto LAB_002de680;
  }
  if (0xd < bVar1) {
    if (bVar1 == 99) {
      uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
      if ((uVar17 & 0x40) != 0) {
        mobyutil::MB_SpawnExplosionSparks
                  (0x3fe0000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_002dc4dc,6);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_002de680;
  }
  if (bVar1 < 0xd) {
    dVar25 = (double)(ABS((moby->pos).z - local_d0[0].z) /
                     SQRT((fVar4 - local_d0[0].x) * (fVar4 - local_d0[0].x) +
                          (fVar5 - local_d0[0].y) * (fVar5 - local_d0[0].y)));
    if (*(int *)((int)pvVar8 + 0x21c) == -1) {
      local_f0.x = *(float *)((int)pvVar8 + 0x1d0);
      local_f0.y = *(float *)((int)pvVar8 + 0x1d4);
      local_f0.z = *(f32 *)((int)pvVar8 + 0x1d8);
      local_f0.w = *(f32 *)((int)pvVar8 + 0x1dc);
    }
    else {
      path::Path_PickNextNode
                (moby,Splines[*(int *)((int)pvVar8 + 0x21c)],(Vec4 *)((int)pvVar8 + 0x1d0),&local_f0
                );
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
    }
    uVar19 = FUN_005e8338((double)(local_f0.x - fVar4),(double)(local_f0.y - fVar5));
    mobyutil::OrganicDeltAngSpeed
              (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar13);
    dVar28 = (double)mathfunc::cosf((moby->rotation).z);
    dVar26 = 2.0;
    local_100 = (float)(dVar28 * 2.0);
    dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_fc = (float)(dVar28 * dVar26);
    local_f0.x = (moby->pos).x + local_100;
    local_f0.z = (moby->pos).z;
    local_f8 = 0;
    local_f0.w = (moby->pos).w;
    local_f0.y = (moby->pos).y + local_fc;
    dVar28 = 1.0;
    uVar14 = mobyutil::MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0x180),&local_f0,
                        &local_100);
    uVar2 = moby->animationId;
    if ((uVar14 & 4) == 0) {
      local_d0[0].y = (moby->pos).y - local_d0[0].y;
      local_d0[0].x = (moby->pos).x - local_d0[0].x;
      if ((1.5 <= SQRT(local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y)) ||
         (dVar28 < dVar25)) {
        if ((dVar28 < dVar25) || ((uVar14 & 2) != 0)) {
          if (((uVar14 & 2) == 0) || (iVar16 == 0)) {
            if ((moby->field43_0x70 & 2U) != 0) {
              mobyutil::MB_randInt(4);
              iVar16 = mobyutil::MB_randInt(4);
              iVar15 = mobyutil::MB_randRange(10,0xd);
              iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
              local_78 = (longlong)iVar15;
              mobyutil::MB_SetAnimation
                        (lVar13,((LZCOUNT(-iVar16) << 0x3a) >> 0x3f & 2U) + 2,0,iVar15);
            }
          }
          else {
            moby->state = '\x01';
            if (uVar2 != '\x02') {
              iVar15 = mobyutil::MB_randRange(10,0xd);
              iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
              local_78 = (longlong)iVar15;
              mobyutil::MB_SetAnimation(lVar13,2,0,iVar15);
            }
          }
        }
        else {
          moby->state = '\x05';
          if (uVar2 != '\0') {
            iVar15 = mobyutil::MB_randRange(10,0xd);
            iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
            local_78 = (longlong)iVar15;
            mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
          }
        }
      }
      else {
        moby->state = '\x04';
        if (uVar2 != '\x01') {
          iVar15 = mobyutil::MB_randRange(10,0xd);
          iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
          local_78 = (longlong)iVar15;
          mobyutil::MB_SetAnimation(lVar13,1,0,iVar15);
        }
      }
    }
    else {
      moby->state = '\x04';
      if (uVar2 != '\x01') {
        iVar15 = mobyutil::MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        mobyutil::MB_SetAnimation(lVar13,1,0,iVar15);
      }
    }
    moby->setByGroup = '\0';
    goto LAB_002de680;
  }
  if ((moby->updateId != '\0') && (moby->animationId != '\0')) {
    iVar15 = mobyutil::MB_randRange(10,0xd);
    iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
    local_78 = (longlong)iVar15;
    mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
    dVar32 = dVar30;
  }
  dVar30 = (double)mathfunc::cosf((moby->rotation).z);
  dVar28 = (double)(*(float *)((int)pvVar8 + 0x204) * mobyutil::g_FrameTime);
  dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
  dVar26 = (double)(moby->pos).x;
  dVar23 = (double)(moby->pos).y;
  local_e0 = (float)(dVar28 * dVar30 + dVar26);
  dVar28 = (double)local_e0;
  local_d8 = (moby->pos).z;
  dVar30 = (double)local_d8;
  local_d4 = (moby->pos).w;
  local_dc = (float)((double)(*(float *)((int)pvVar8 + 0x204) * mobyutil::g_FrameTime) * dVar25 +
                    dVar23);
  dVar25 = (double)local_dc;
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar31 = 2.0;
    dVar29 = 0.0;
    dVar27 = 1.5707963705062866;
    dVar24 = -1.5707963705062866;
    dVar22 = dVar30;
    pMVar10 = MobyUpdateChainStart;
    do {
      if (((pMVar10 != moby) && (pMVar10->state < 0x80)) &&
         ((pMVar10->oClass == RATCHET || (pMVar10->oClass == CHOMPER_00C1)))) {
        dVar21 = (double)(pMVar10->pos).y;
        dVar20 = (double)(pMVar10->pos).x;
        fVar4 = (float)(dVar25 - dVar21);
        fVar5 = (float)(dVar28 - dVar20);
        if ((double)SQRT(fVar5 * fVar5 + fVar4 * fVar4) < dVar31) {
          dVar30 = (double)(moby->rotation).z;
          uVar19 = FUN_005e8338((double)(float)(dVar20 - dVar26),(double)(float)(dVar21 - dVar23));
          dVar25 = (double)fastfunc::FastDiffRots(dVar30,uVar19);
          dVar30 = dVar24;
          if (dVar29 < dVar25) {
            dVar30 = dVar27;
          }
          dVar30 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)mobyutil::g_FrameTime * dVar30));
          (moby->rotation).z = (float)dVar30;
          local_e0 = (moby->pos).x - (pMVar10->pos).x;
          local_d4 = (moby->pos).w;
          local_dc = (moby->pos).y - (pMVar10->pos).y;
          local_d8 = (moby->pos).z - (pMVar10->pos).z;
          dVar30 = dVar22;
          FUN_005e7f98(dVar31,&local_e0,&local_e0);
          local_e0 = local_e0 + (pMVar10->pos).x;
          dVar28 = (double)local_e0;
          dVar26 = (double)(moby->pos).x;
          dVar23 = (double)(moby->pos).y;
          local_d8 = (float)dVar30;
          local_dc = local_dc + (pMVar10->pos).y;
          dVar25 = (double)local_dc;
          dVar22 = (double)(moby->pos).z;
        }
      }
      pMVar10 = (MobyInstance *)pMVar10->pChain;
    } while (pMVar10 != (MobyInstance *)0x0);
  }
  (moby->pos).x = (float)dVar28;
  (moby->pos).y = (float)dVar25;
  (moby->pos).z = (float)dVar30;
  (moby->pos).w = local_d4;
  dVar25 = 0.5;
  dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
  fVar4 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar8 + 0x198));
  *(float *)((int)pvVar8 + 0x198) = fVar4;
  fVar4 = (moby->pos).z + fVar4;
  (moby->pos).z = fVar4;
  if ((double)fVar4 < dVar30) {
    *(undefined4 *)((int)pvVar8 + 0x198) = 0;
    (moby->pos).z = (float)dVar30;
  }
  iVar15 = *(int *)((int)pvVar8 + 0x218);
  if (iVar15 == 0) {
LAB_002de60c:
    moby->state = '\x05';
    if (moby->animationId != '\0') {
      iVar15 = mobyutil::MB_randRange(10,0xd);
      iVar15 = (int)(animationSpeed * (float)((double)(longlong)iVar15 + dVar25));
      local_78 = (longlong)iVar15;
      mobyutil::MB_SetAnimation(lVar13,0,0,iVar15);
    }
  }
  else {
    fVar4 = (moby->pos).y - *(float *)(iVar15 + 0x14);
    fVar5 = (moby->pos).x - *(float *)(iVar15 + 0x10);
    dVar26 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
    dVar28 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar8 + 0x216));
    if (dVar28 < dVar26) goto LAB_002de60c;
  }
  moby->setByGroup = '\0';
LAB_002de680:
  if (dVar30 == dVar32) {
    dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
  }
  if (((dVar30 == 0.0) || (0.1 <= (float)((double)(moby->pos).z - dVar30))) ||
     (iVar15 = collproc::CollHotspot(), iVar15 != 1)) {
    mobyutil::MB_ColorDyingMoby(lVar13,uVar18 + 0x110);
  }
  else {
    mobyutil::MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_002dc4dc,6);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002de770  ns=mobyupdate_helpers  size=0x14
// sig: undefined M194_002de770(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M194_002de770(void)

{
  DAT_007f3f08 = 0x10000;
  return;
}



//==== 002de788  ns=mobyupdate_helpers  size=0xdc
// sig: undefined M194_002de788(void)
// callers(1): 002de920 mobyupdate_unsorted::UpdateMoby_194
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation

MobyInstance * mobyupdate_helpers::M194_002de788(f32 *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  f32 fVar2;
  MobyInstance *pMVar4;
  undefined8 uVar3;
  
  pMVar4 = mobyfunc::CreateMoby(0xc2);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0x7e;
    fVar2 = *(f32 *)(param_2 + 0x48);
    pMVar4->enabled = '\x01';
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    (pMVar4->rotation).z = fVar2;
    pMVar4->color = (int)((ulonglong)uVar3 >> 0x20);
    pMVar4->light = (int)uVar3;
    (pMVar4->pos).x = *param_1;
    bVar1 = pMVar4->animationId;
    (pMVar4->pos).y = param_1[1];
    (pMVar4->pos).z = param_1[2];
    (pMVar4->pos).w = param_1[3];
    if ((uint)bVar1 != (uint)param_3) {
      mobyutil::MB_SetAnimation(pMVar4,param_3,0,3);
    }
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 002de920  ns=mobyupdate_unsorted  size=0x4550
// sig: undefined UpdateMoby_194(MobyInstance * moby)
// callers(0): 
// callees(23): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00136724 path::InitFollower; 00299400 FUN_00299400; 002de788 mobyupdate_helpers::M194_002de788; 005026a0 fastfunc::FastSubRots; 005e7e18 idol::GetAnimDuration; 005e7e98 FUN_005e7e98; 005e7f54 FUN_005e7f54; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e81f0 FUN_005e81f0; 005e8338 FUN_005e8338; 005e8588 FUN_005e8588

/* Moby 194 */

ulonglong mobyupdate_unsorted::UpdateMoby_194(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  KickVars *kv;
  int *piVar5;
  undefined2 uVar6;
  int iVar8;
  ulonglong uVar7;
  int iVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  u8 uVar13;
  int in_r6;
  MobyClass *pMVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  undefined8 in_LR;
  undefined8 uVar19;
  double dVar20;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double extraout_f1_04;
  double dVar21;
  double extraout_f1_05;
  double extraout_f1_06;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float local_2e0;
  float local_2dc;
  undefined4 local_2d8;
  float afStack_2d0 [2];
  float local_2c8;
  undefined1 auStack_2c0 [8];
  float local_2b8;
  float local_2b0;
  float local_2ac;
  undefined4 local_2a8;
  undefined1 auStack_2a0 [16];
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  float local_280;
  float local_27c;
  undefined4 local_278;
  float local_270;
  float local_26c;
  undefined4 local_268;
  float afStack_260 [2];
  float local_258;
  float local_250;
  float local_24c;
  undefined4 local_248;
  float local_240;
  float local_23c;
  undefined4 local_238;
  float afStack_230 [2];
  float local_228;
  float local_220;
  float local_21c;
  undefined4 local_218;
  float local_210;
  float local_20c;
  undefined4 local_208;
  float local_200;
  float local_1fc;
  undefined4 local_1f8;
  float afStack_1f0 [2];
  float local_1e8;
  float local_1e0;
  float local_1dc;
  undefined4 local_1d8;
  undefined1 auStack_1d0 [8];
  float local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined1 auStack_1a0 [8];
  float local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined1 auStack_170 [8];
  float local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  float local_150 [4];
  float afStack_140 [2];
  float local_138;
  float local_130;
  float local_12c;
  undefined4 local_128;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_110;
  float local_10c;
  undefined4 local_108;
  float afStack_100 [2];
  float local_f8;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float afStack_c0 [2];
  float local_b8;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  longlong local_a0;
  
  lVar17 = (longlong)(int)moby;
  kv = (KickVars *)moby->pVar;
  uVar15 = ZEXT48(kv);
  iVar8 = mobyutil::MB_damage(lVar17,0x10000,0);
  sVar12 = *(short *)((int)&kv[1].drag + 2);
  if (sVar12 < 5) {
    if (sVar12 < 2) {
      if (-1 < sVar12) {
        if (sVar12 < 1) {
          if ((iVar8 != 0) && (moby->state < 0x7f && moby->state != 3)) {
            FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                         (double)((moby->pos).y - g_heroPosition.y));
            in_r6 = 6;
            mobyutil::MB_StartKick(lVar17,uVar15);
            moby->state = '\x7f';
          }
        }
        else if ((iVar8 != 0) && (moby->state < 0x7f)) {
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          in_r6 = 6;
          mobyutil::MB_StartKick(lVar17,uVar15);
          moby->state = '\x7f';
        }
      }
    }
    else if (sVar12 < 3) {
      if ((iVar8 != 0) && (uVar13 = moby->state, uVar13 != '\x7f' && uVar13 != '\x18')) {
        if (uVar13 == '\x19') {
          *(undefined2 *)&kv[1].drag = 0;
        }
        else {
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          in_r6 = 6;
          mobyutil::MB_StartKick(lVar17,uVar15);
          sVar12 = *(short *)&kv[1].xySpeed + -1;
          *(short *)&kv[1].xySpeed = sVar12;
          if (sVar12 == 0) {
            moby->state = '\x7f';
          }
          else {
            moby->state = '\x18';
            *(undefined2 *)&kv[1].drag = 0;
          }
        }
      }
    }
    else if (sVar12 < 4) {
      if ((iVar8 != 0) && (moby->state != '\x7f' && moby->state != '\"')) {
        sVar12 = *(short *)&kv[1].xySpeed + -1;
        *(short *)&kv[1].xySpeed = sVar12;
        if (sVar12 == 0) {
          moby->state = '\x7f';
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          in_r6 = 6;
          mobyutil::MB_StartKick(lVar17,uVar15);
        }
        else {
          moby->state = '\"';
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          in_r6 = 5;
          mobyutil::MB_StartKick(lVar17,uVar15);
        }
      }
    }
    else if (((iVar8 != 0) && (uVar13 = moby->state, uVar13 != ',' && uVar13 != '-')) &&
            (uVar13 != '\x7f')) {
      sVar12 = *(short *)&kv[1].xySpeed + -1;
      *(short *)&kv[1].xySpeed = sVar12;
      if (sVar12 == 0) {
        moby->state = '\x7f';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 6;
        mobyutil::MB_StartKick(lVar17,uVar15);
      }
      else {
        moby->state = ',';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 5;
        mobyutil::MB_StartKick(lVar17,uVar15);
      }
    }
  }
  else if (sVar12 == 10) {
    if ((iVar8 != 0) && (moby->state != '\x7f' && moby->state != 'h')) {
      sVar12 = *(short *)&kv[1].xySpeed + -1;
      *(short *)&kv[1].xySpeed = sVar12;
      if (sVar12 == 0) {
        kv->flag = 1;
        kv->xySpeed = 0.15;
        kv->grav = 0.008;
        kv->drag = 0.0005;
        kv->zSpeed = 0.125;
        kv->type = '\0';
        moby->state = '\x7f';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 6;
        mobyutil::MB_StartKick(lVar17,uVar15);
      }
      else {
        kv->flag = 1;
        kv->grav = 0.008;
        kv->zSpeed = 0.125;
        kv->drag = 0.0005;
        kv->xySpeed = 0.15;
        kv->type = '\0';
        moby->state = 'h';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 5;
        mobyutil::MB_StartKick(lVar17,uVar15);
      }
    }
  }
  else if (sVar12 == 9) {
    if (((iVar8 != 0) && (uVar13 = moby->state, uVar13 != '\x7f' && uVar13 != ']')) &&
       ((g_heroState != WRENCH_ATTACK || (uVar13 != '\\')))) {
      sVar12 = *(short *)&kv[1].xySpeed + -1;
      *(short *)&kv[1].xySpeed = sVar12;
      if (sVar12 == 0) {
        fVar3 = (moby->pos).z;
        moby->state = '\x7f';
        (moby->pos).z = fVar3 + 0.25;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 6;
        mobyutil::MB_StartKick(lVar17,uVar15);
      }
      else {
        fVar3 = (moby->pos).z;
        moby->state = ']';
        (moby->pos).z = fVar3 + 0.25;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 5;
        mobyutil::MB_StartKick(lVar17,uVar15);
      }
    }
  }
  else if (sVar12 == 8) {
    if ((iVar8 != 0) && (moby->state != '\x7f' && moby->state != 'S')) {
      sVar12 = *(short *)&kv[1].xySpeed + -1;
      *(short *)&kv[1].xySpeed = sVar12;
      if (sVar12 == 0) {
        moby->state = '\x7f';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 6;
        mobyutil::MB_StartKick(lVar17,uVar15);
      }
      else {
        moby->state = 'S';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 5;
        mobyutil::MB_StartKick(lVar17,uVar15);
      }
    }
  }
  else if (sVar12 == 7) {
    if ((iVar8 != 0) && (moby->state != '\x7f')) {
      moby->state = '\x7f';
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      in_r6 = 6;
      mobyutil::MB_StartKick(lVar17,uVar15);
    }
  }
  else if (sVar12 == 6) {
    if ((iVar8 != 0) && (moby->state < 0x7f)) {
      fVar3 = (moby->pos).x;
      fVar2 = (moby->pos).y;
      moby->scale = moby->pClass->gScale;
      FUN_005e8338((double)(fVar3 - g_heroPosition.x),(double)(fVar2 - g_heroPosition.y));
      in_r6 = 6;
      mobyutil::MB_StartKick(lVar17,uVar15);
      moby->state = '\x7f';
    }
  }
  else if (((sVar12 == 5) && (iVar8 != 0)) && (moby->state < 0x7f)) {
    (moby->pos).z = (moby->pos).z + 2.0;
    FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                 (double)((moby->pos).y - g_heroPosition.y));
    in_r6 = 6;
    mobyutil::MB_StartKick(lVar17,uVar15);
    moby->state = '\x7f';
  }
  bVar1 = moby->state;
  uVar7 = (ulonglong)bVar1;
  moby->damage = -1;
  bVar18 = (bVar1 == 10) << 1;
  if (0x32 < bVar1) {
    if (0x52 < bVar1) {
      if (0x65 < bVar1) {
        if (bVar1 == 0x7f) {
          uVar10 = mobyutil::MB_UpdateKick(moby,kv);
          if ((int)((ulonglong)uVar10 & 0x40) == 0) {
            return (ulonglong)uVar10 & 0x40;
          }
          uVar15 = mobyfunc::DeleteMoby(moby);
          return uVar15;
        }
        if (bVar1 == 0x69) {
          dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
          bVar18 = moby->animationId;
          if ((12.0 <= dVar20) && (dVar20 <= 40.0)) {
            local_a0 = (longlong)(int)*(short *)((int)&kv[1].xySpeed + 2);
            dVar23 = 1.0471975803375244;
            dVar20 = (double)mathfunc::cosf((float)((double)local_a0 * 1.0471975803375244 +
                                                   (double)(moby->rotation).z));
            dVar25 = 0.10000000149011612;
            local_a0 = (longlong)(int)*(short *)((int)&kv[1].xySpeed + 2);
            local_b0 = (float)((double)(DAT_0071f408 * 0.1) * dVar20);
            dVar20 = (double)FUN_005e8128((double)(float)((double)local_a0 * dVar23 +
                                                         (double)(moby->rotation).z));
            local_a8 = 0;
            local_ac = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
            uVar15 = FUN_005e7f54(lVar17 + 0x10,lVar17 + 0x10,&local_b0);
            return uVar15;
          }
          if (dVar20 < 40.0) {
            return (ulonglong)bVar18;
          }
          moby->state = 'e';
          if (bVar18 == 3) {
            return (ulonglong)bVar18;
          }
          uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
          return uVar15;
        }
        if (bVar1 == 0x68) {
          uVar10 = mobyutil::MB_UpdateKick(moby,kv);
          if ((int)((ulonglong)uVar10 & 0x40) == 0) {
            return (ulonglong)uVar10 & 0x40;
          }
          uVar15 = mobyupdate_helpers::M194_002de788(lVar17 + 0x10,lVar17,2);
          iVar8 = (int)uVar15;
          if (iVar8 == 0) {
            return uVar15;
          }
          iVar9 = *(int *)(iVar8 + 0x78);
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimation(lVar17,2,10,3);
          }
          moby->state = 'i';
          *(undefined1 *)(iVar8 + 0x20) = 0x69;
          uVar6 = *(undefined2 *)&kv[1].xySpeed;
          *(undefined2 *)(iVar9 + 0x76) = 10;
          *(undefined2 *)(iVar9 + 0x78) = uVar6;
          if (*(short *)&kv[1].xySpeed == 2) {
            fVar3 = moby->pClass->gScale * 0.6666667;
            moby->scale = fVar3;
            *(float *)(iVar8 + 0x2c) = fVar3;
          }
          else if (*(short *)&kv[1].xySpeed == 1) {
            fVar3 = moby->pClass->gScale * 0.5;
            moby->scale = fVar3;
            *(float *)(iVar8 + 0x2c) = fVar3;
          }
          uVar15 = mobyutil::MB_randInt(0x100);
          if ((uVar15 & 1) != 0) {
            *(undefined2 *)((int)&kv[1].xySpeed + 2) = 1;
            *(undefined2 *)(iVar9 + 0x7a) = 0xffff;
            return 1;
          }
          *(undefined2 *)((int)&kv[1].xySpeed + 2) = 0xffff;
          *(undefined2 *)(iVar9 + 0x7a) = 1;
          return 0xffffffffffffffff;
        }
        if (bVar1 == 0x67) {
          dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
          if (((((moby->updateId == moby->animationId) &&
                (dVar25 = (double)mobyfunc::BlendAnimFrame(moby), 16.0 <= dVar25)) &&
               (dVar25 = (double)mobyfunc::BlendAnimFrame(moby), dVar25 < 21.0)) &&
              (ABS((moby->pos).z - g_heroPosition.z) < 0.2)) &&
             ((((dVar20 < 4.0 && (*(short *)&kv[1].xySpeed == 3)) ||
               ((dVar20 < 3.0 && (*(short *)&kv[1].xySpeed == 2)))) ||
              ((dVar20 < 2.0 && (*(short *)&kv[1].xySpeed == 1)))))) {
            dVar25 = (double)GameCamera.rot.radius;
            dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                          (double)((moby->pos).y - GameCamera.posY));
            dVar20 = (double)fastfunc::FastSubRots((float)dVar25,(float)dVar20);
            if (dVar20 < 36.0) {
              dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                            (double)(g_heroPosition.y - (moby->pos).y));
              dVar20 = (double)fastfunc::FastSubRots((float)dVar20,(moby->rotation).z);
              if (dVar20 < 0.10471975803375244) {
                dVar20 = (double)mathfunc::cosf((moby->rotation).z);
                local_d0 = (float)dVar20;
                dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
                local_cc = (float)dVar20;
                local_c8 = 0;
                FUN_005e7e98(afStack_c0,&g_heroMobyPtr->pos);
                local_b8 = local_b8 + 0.75;
                mobyutil::CollDamageMobyDirect
                          (1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_c0,&local_d0);
              }
            }
          }
          uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
          if ((int)uVar15 == 0) {
            return uVar15;
          }
          moby->state = 'e';
          if (moby->animationId == '\x03') {
            return 0x65;
          }
          uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
          return uVar15;
        }
        if (bVar1 != 0x66) {
          return uVar7;
        }
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar23 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        dVar20 = (double)mathfunc::cosf((moby->rotation).z);
        local_a0 = (longlong)(int)*(short *)&kv[1].xySpeed;
        dVar25 = 0.05000000074505806;
        local_e0 = (float)((double)((float)((double)local_a0 * 0.05000000074505806) * DAT_0071f408)
                          * dVar20);
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_a0 = (longlong)(int)*(short *)&kv[1].xySpeed;
        local_d8 = 0;
        lVar16 = lVar17 + 0x10;
        local_dc = (float)((double)((float)((double)local_a0 * dVar25) * DAT_0071f408) * dVar20);
        FUN_005e7f54(lVar16,lVar16,&local_e0);
        dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        if (((((dVar20 < 4.0) && (*(short *)&kv[1].xySpeed == 3)) ||
             ((dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition), dVar20 < 3.0 &&
              (*(short *)&kv[1].xySpeed == 2)))) ||
            ((dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition), dVar20 < 2.0 &&
             (*(short *)&kv[1].xySpeed == 1)))) &&
           ((dVar23 < 0.20000000298023224 && (-0.20000000298023224 < dVar23)))) {
          moby->state = 'g';
          if (moby->animationId == '\x04') {
            return 0x67;
          }
          uVar15 = mobyutil::MB_SetAnimation(lVar17,4,0,3);
          return uVar15;
        }
        dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        if (dVar20 <= 16.0) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = 'e';
        if (moby->animationId == '\x03') {
          return 0x65;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (bVar1 == 0x65) {
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (15.0 <= extraout_f1_06) {
          return uVar15;
        }
        if (0.20000000298023224 <= dVar20) {
          return ZEXT48(&DAT_002de864);
        }
        if (dVar20 <= -0.20000000298023224) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = 'f';
        if (moby->animationId == '\x01') {
          return 0x66;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,1,0,3);
        return uVar15;
      }
      if (bVar1 == 0x5d) {
        uVar10 = mobyutil::MB_UpdateKick(moby,kv);
        if ((int)((ulonglong)uVar10 & 0x40) == 0) {
          return (ulonglong)uVar10 & 0x40;
        }
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(lVar17,3,0,3);
        }
        uVar15 = idol::GetAnimDuration(0x1e);
        *(short *)&kv[1].drag = (short)uVar15;
        moby->state = '[';
        return uVar15;
      }
      if (bVar1 == 0x5c) {
        lVar16 = lVar17 + 0x10;
        dVar20 = (double)FUN_005e8588(lVar16,uVar15 + 0x60);
        dVar25 = 4.0;
        if ((double)(mobyutil::g_FrameTime * 4.0) < dVar20) {
          dVar20 = (double)FUN_005e8338((double)(kv[1].kickVel[0] - (moby->pos).x),
                                        (double)(kv[1].kickVel[1] - (moby->pos).y));
          dVar20 = (double)mathfunc::cosf((float)dVar20);
          local_120 = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar25) * dVar20);
          FUN_005e8338((double)(kv[1].kickVel[0] - (moby->pos).x),
                       (double)(kv[1].kickVel[1] - (moby->pos).y));
          dVar20 = (double)FUN_005e8128();
          in_r6 = 0;
          local_118 = 0;
          local_11c = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar25) * dVar20);
          FUN_005e7f54(lVar16,&local_120,lVar16);
        }
        dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        if ((dVar20 < dVar25) && (g_heroState != TAKING_DAMAGE)) {
          dVar20 = (double)mathfunc::cosf((moby->rotation).z);
          dVar25 = 2.0;
          local_110 = (float)(dVar20 * 2.0);
          dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_10c = (float)(dVar20 * dVar25);
          local_108 = 0;
          FUN_005e7e98(afStack_100,&g_heroMobyPtr->pos);
          local_f8 = local_f8 + 0.75;
          mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,in_r6,afStack_100,&local_110);
          dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          dVar20 = (double)mathfunc::cosf((float)dVar20);
          local_f0 = (float)dVar20;
          FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                       (double)(g_heroPosition.y - (moby->pos).y));
          dVar20 = (double)FUN_005e8128();
          local_ec = (float)dVar20;
          local_e8 = 0;
          FUN_005e7f54(uVar15 + 0x60,lVar16,&local_f0);
          auVar26 = ZEXT416(0xffffffff);
          auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = ZEXT416(0xfffffff0);
          auVar29 = loadVectorLeftIndexed(0x1c,0x2de864);
          auVar27 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
          auVar28 = ZEXT416(0xffffffff);
          auVar31 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar29 = vectorMultiplyAddFloatingPoint
                              (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                               ,auVar27);
          auVar27 = loadVectorLeftIndexed(in_LR,0x2de864);
          auVar28 = ZEXT416(0xffffffff);
          auVar30 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar28 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar27 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar32 = loadVectorLeftIndexed(0x74,uVar15);
          auVar33 = loadVectorRightIndexed(0x84,uVar15);
          auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          auVar28 = ZEXT416(0xffffffff);
          auVar34 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar28 = vectorReciprocalEstimateFloatingPoint(auVar29);
          auVar26 = vectorShiftRightAlgebraicWord
                              (auVar32 | auVar33,
                               auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
          auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar29,auVar27);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar32,auVar30);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
          auVar32 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar29,auVar27);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar30 = vectorMultiplyAddFloatingPoint(auVar28,auVar30,auVar31);
          auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar29,auVar27);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar28,auVar32);
          auVar28 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                     auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
          if (!(bool)(bVar18 >> 1 & 1)) {
            return 0x74;
          }
          auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar26 = vectorSplatHalfWord(auVar26,1);
          uVar6 = storeVectorElementHalfWordIndexed(auVar26,0x74,uVar15);
          *(undefined2 *)&kv[1].drag = uVar6;
          return 0x74;
        }
        dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        if ((dVar20 <= 14.0) || ((moby->field43_0x70 & 2U) == 0)) {
          uVar15 = (ulonglong)*(ushort *)&kv[1].drag - 1;
          sVar12 = (short)uVar15;
          *(short *)&kv[1].drag = sVar12;
          if (sVar12 != 0) {
            return uVar15;
          }
        }
        moby->state = '[';
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(lVar17,3,0,3);
        }
        fVar3 = (moby->pos).z;
        *(undefined2 *)&kv[1].drag = 0x78;
        (moby->pos).z = fVar3 + 2.5;
        return ZEXT48(&DAT_002de864);
      }
      if (bVar1 == 0x5b) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17,
                   &DAT_002de864,uVar15 + 0x70);
        if (0 < *(short *)&kv[1].drag) {
          *(short *)&kv[1].drag = *(short *)&kv[1].drag + -1;
        }
        dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (14.0 <= dVar20) {
          return ZEXT48(&DAT_002de864);
        }
        if (*(ushort *)&kv[1].drag != 0) {
          return (ulonglong)*(ushort *)&kv[1].drag;
        }
        FUN_005e7e98(uVar15 + 0x60,&g_heroPosition);
        moby->state = '\\';
        if (moby->animationId != '\x0e') {
          mobyutil::MB_SetAnimation(lVar17,0xe,0,3);
        }
        *(undefined2 *)&kv[1].drag = 300;
        (moby->pos).z = (moby->pos).z - 2.5;
        return 300;
      }
      if (bVar1 != 0x53) {
        return uVar7;
      }
      uVar10 = mobyutil::MB_UpdateKick(moby,kv);
      if ((int)((ulonglong)uVar10 & 0x40) == 0) {
        return (ulonglong)uVar10 & 0x40;
      }
      if (moby->animationId != '\x03') {
        mobyutil::MB_SetAnimation(lVar17,3,0,3);
      }
      moby->state = 'Q';
      return 0x51;
    }
    if (0x3e < bVar1) {
      if (bVar1 == 0x52) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        dVar25 = 3.0;
        if ((3.0 <= dVar20) || (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), dVar20 != 103.0)) {
          dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
          if ((dVar25 < dVar20) &&
             (((moby->field43_0x70 & 2U) != 0 && (moby->state = 'Q', moby->animationId != '\x03'))))
          {
            mobyutil::MB_SetAnimation(lVar17,3,0,3);
          }
        }
        else {
          mathfunc::cosf((moby->rotation).z);
          local_150[0] = 0.0;
          FUN_005e8128((double)(moby->rotation).z);
          local_150[1] = 0.0;
          local_150[2] = 24.0;
          FUN_005e7e98(afStack_140,&g_heroMobyPtr->pos);
          *(undefined2 *)&kv[1].drag = 0x1e;
          local_138 = local_138 + 0.75;
          mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_140,local_150);
        }
        auVar26 = ZEXT416(0xfffffff0);
        auVar28 = loadVectorLeftIndexed(0x74,uVar15);
        auVar29 = loadVectorRightIndexed(0x84,uVar15);
        auVar26 = vectorShiftRightAlgebraicWord
                            (auVar28 | auVar29,
                             auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
        if (*(short *)&kv[1].drag < 1) {
          return (longlong)*(short *)&kv[1].drag;
        }
        auVar28 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = loadVectorLeftIndexed(0xa8,0x2de864);
        auVar29 = loadVectorLeftIndexed(0x88,0x969ce0);
        auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                             auVar29);
        auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        g_heroPosition.z =
             (float)storeVectorElementWordIndexed
                              (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x88,
                               0x969ce0);
        dVar20 = (double)mathfunc::cosf((moby->rotation).z);
        local_a0 = (longlong)(int)*(short *)&kv[1].drag;
        dVar25 = 0.009999999776482582;
        local_130 = (float)(dVar20 * (double)local_a0) * 0.01;
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_a0 = (longlong)(int)*(short *)&kv[1].drag;
        local_128 = 0;
        local_12c = (float)((double)(float)(dVar20 * (double)local_a0) * dVar25);
        FUN_005e7f54(&g_heroPosition,&g_heroPosition,&local_130);
        uVar15 = (ulonglong)*(ushort *)&kv[1].drag - 1;
        *(short *)&kv[1].drag = (short)uVar15;
        return uVar15;
      }
      if (bVar1 == 0x51) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (3.0 <= extraout_f1_05) {
          return uVar15;
        }
        moby->state = 'R';
        if (moby->animationId == '\r') {
          return 0x52;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,0xd,0,3);
        return uVar15;
      }
      if (bVar1 == 0x48) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3f20624de0000000,lVar17,
                   &DAT_002de864,uVar15 + 0x70);
        if ((moby->updateId == moby->animationId) &&
           (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), dVar20 == 33.0)) {
          uVar19 = 0;
          local_160 = 0;
          local_15c = 0;
          local_158 = 0;
          local_154 = 0x3f800000;
          FUN_005e7e98(auStack_170,lVar17 + 0x10);
          dVar24 = 0.5;
          iVar9 = -4;
          iVar8 = -0x20;
          local_168 = local_168 + 0.5;
          dVar23 = 0.01745329238474369;
          dVar25 = 2.0;
          dVar20 = 0.15000000596046448;
          do {
            local_a0 = (longlong)iVar8;
            dVar22 = (double)local_a0;
            dVar21 = (double)mathfunc::cosf((float)(dVar22 * dVar23 + (double)(moby->rotation).z));
            local_180 = (float)(dVar21 * dVar25);
            dVar21 = (double)FUN_005e8128((double)(float)(dVar22 * dVar23 +
                                                         (double)(moby->rotation).z));
            local_17c = (float)(dVar21 * dVar25);
            local_178 = 0.0;
            FUN_005e7f54(&local_180,&local_180,lVar17 + 0x10);
            local_178 = (float)((double)local_178 + dVar24);
            iVar11 = FUN_00299400(uVar19,&local_160,&local_180);
            dVar21 = (double)mathfunc::cosf((float)(dVar22 * dVar23 + (double)(moby->rotation).z));
            *(float *)(*(int *)(iVar11 + 0x78) + 0x20) =
                 (float)((double)(float)((double)DAT_0071f408 * dVar20) * dVar21);
            dVar21 = (double)FUN_005e8128((double)(float)(dVar22 * dVar23 +
                                                         (double)(moby->rotation).z));
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 8;
            *(float *)(*(int *)(iVar11 + 0x78) + 0x24) =
                 (float)((double)(float)((double)DAT_0071f408 * dVar20) * dVar21);
            *(undefined4 *)(*(int *)(iVar11 + 0x78) + 0x28) = 0;
            *(undefined1 *)(iVar11 + 0x20) = 1;
          } while (iVar9 < 5);
        }
        if (g_heroState != TAKING_DAMAGE) {
          dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
          if (dVar20 <= 20.0) {
            return ZEXT48(&DAT_002de864);
          }
        }
        uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
        if ((int)uVar15 == 0) {
          return uVar15;
        }
        moby->state = 'G';
        if (moby->animationId == '\x03') {
          return 0x47;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (bVar1 != 0x47) {
        if (bVar1 != 0x3f) {
          return uVar7;
        }
        dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        pMVar14 = moby->pClass;
        if (((dVar20 < 12.0) || (30.0 <= dVar20)) || (moby->updateId != '\x02')) {
          if ((dVar20 == 30.0) && (moby->updateId == '\x02')) {
            piVar5 = (int *)kv[1].xyBounceDamp;
            iVar8 = *piVar5;
            iVar9 = kv[1].radius + iVar8 + (int)*(char *)&kv[1].flag;
            iVar9 = iVar9 - (iVar9 / iVar8) * iVar8;
            local_1b0 = piVar5[iVar9 * 4 + 4];
            local_1ac = piVar5[iVar9 * 4 + 5];
            local_1a8 = piVar5[iVar9 * 4 + 6];
            local_1a4 = piVar5[iVar9 * 4 + 7];
            kv[1].radius = iVar9;
            FUN_005e7e98(lVar17 + 0x10,&local_1b0);
            pMVar14 = moby->pClass;
          }
          else if ((30.0 < dVar20) && ((dVar20 <= 48.0 && (moby->updateId == '\x02')))) {
            moby->scale = pMVar14->gScale * (float)(dVar20 - 30.0) * 0.055555556;
          }
        }
        else {
          moby->scale = pMVar14->gScale * (float)(30.0 - dVar20) * 0.055555556;
        }
        uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
        if ((int)uVar15 == 0) {
          return uVar15;
        }
        moby->state = '=';
        moby->scale = pMVar14->gScale;
        if (moby->animationId == 3) {
          return (ulonglong)moby->animationId;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (16.0 <= extraout_f1_04) {
        return uVar15;
      }
      moby->state = 'H';
      if (moby->animationId == '\f') {
        return 0x48;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,0xc,0,3);
      return uVar15;
    }
    if (bVar1 < 0x36) {
      if (bVar1 < 0x34) {
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (15.0 <= extraout_f1_03) {
          return uVar15;
        }
        if (0.20000000298023224 <= dVar20) {
          return ZEXT48(&DAT_002de864);
        }
        if (dVar20 <= -0.20000000298023224) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = '4';
        return 0x34;
      }
      if (bVar1 < 0x35) {
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar23 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        dVar20 = (double)mathfunc::cosf((moby->rotation).z);
        dVar25 = 0.02500000037252903;
        local_1e0 = (float)((double)(DAT_0071f408 * 0.025) * dVar20);
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        lVar17 = lVar17 + 0x10;
        local_1d8 = 0;
        local_1dc = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
        FUN_005e7f54(lVar17,lVar17,&local_1e0);
        dVar20 = (double)FUN_005e8588(lVar17,&g_heroPosition);
        if (((dVar20 < 1.5) && (dVar23 < 0.20000000298023224)) && (-0.20000000298023224 < dVar23)) {
          moby->state = '5';
          return 0x35;
        }
        dVar20 = (double)FUN_005e8588(lVar17,&g_heroPosition);
        if (dVar20 <= 16.0) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = '3';
        return 0x33;
      }
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      dVar20 = 0.10000000149011612;
      mobyutil::OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17,
                 &DAT_002de864,uVar15 + 0x70);
      sVar12 = *(short *)&kv[1].drag;
      *(short *)&kv[1].drag = sVar12 + 1;
      if (0x3c < sVar12) {
        uVar19 = 0;
        local_1c0 = 0;
        local_1bc = 0;
        local_1b8 = 0;
        local_1b4 = 0x3f800000;
        mobyfunc::GetBonePosition(0,lVar17,1,auStack_1d0);
        local_1c8 = local_1c8 - 0.2;
        iVar8 = FUN_00299400(uVar19,&local_1c0,auStack_1d0);
        FUN_005e81f0(&local_1c0,&g_heroPosition,auStack_1d0);
        FUN_005e7f98((double)(float)((double)DAT_0071f408 * dVar20),
                     (ulonglong)*(uint *)(iVar8 + 0x78) + 0x20,&local_1c0);
        *(undefined1 *)(iVar8 + 0x20) = 1;
        *(undefined2 *)&kv[1].drag = 0;
      }
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (dVar20 <= 3.0) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = '3';
      *(undefined2 *)&kv[1].drag = 0;
      return 0x33;
    }
    if (bVar1 < 0x3d) {
      return uVar7;
    }
    if (bVar1 < 0x3e) {
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (dVar20 < 8.0) {
        moby->state = '?';
        if (moby->animationId == '\x02') {
          return 0x3f;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,2,0,3);
        return uVar15;
      }
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (16.0 <= dVar20) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = '>';
      if (moby->animationId == '\a') {
        return 0x3e;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,7,0,3);
      return uVar15;
    }
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17,&DAT_002de864,
               uVar15 + 0x70);
    uVar13 = moby->animationId;
    if (((moby->updateId == uVar13) && ((moby->field43_0x70 & 2U) != 0)) && (uVar13 == '\a')) {
      mobyutil::MB_SetAnimation(lVar17,8,0,3);
    }
    else {
      if (((moby->updateId == uVar13) &&
          ((dVar20 = (double)mobyfunc::BlendAnimFrame(moby), dVar20 == 40.0 ||
           (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), dVar20 == 55.0)))) &&
         (moby->animationId == '\b')) {
        dVar25 = (double)GameCamera.rot.radius;
        dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                      (double)((moby->pos).y - GameCamera.posY));
        dVar20 = (double)fastfunc::FastSubRots((float)dVar25,(float)dVar20);
        if (dVar20 < 36.0) {
          uVar19 = 0;
          local_190 = 0;
          local_18c = 0;
          local_188 = 0;
          local_184 = 0x3f800000;
          mobyfunc::GetBonePosition(0,lVar17,1,auStack_1a0);
          local_198 = local_198 + 0.2;
          iVar8 = FUN_00299400(uVar19,&local_190,auStack_1a0);
          dVar20 = (double)mathfunc::cosf((moby->rotation).z);
          dVar25 = 0.15000000596046448;
          *(float *)(*(int *)(iVar8 + 0x78) + 0x20) =
               (float)((double)(DAT_0071f408 * 0.15) * dVar20);
          dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
          *(float *)(*(int *)(iVar8 + 0x78) + 0x24) =
               (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
          *(undefined4 *)(*(int *)(iVar8 + 0x78) + 0x28) = 0;
          *(undefined1 *)(iVar8 + 0x20) = 1;
          goto LAB_002e1ae8;
        }
      }
      if (((moby->updateId == moby->animationId) && ((moby->field43_0x70 & 2U) != 0)) &&
         (moby->animationId == '\t')) {
        *(undefined2 *)&kv[1].drag = 0;
        moby->state = '=';
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(lVar17,3,0,3);
        }
      }
    }
LAB_002e1ae8:
    if (((moby->animationId == '\b') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\t')) {
      mobyutil::MB_SetAnimation(lVar17,9,0,3);
    }
    dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
    uVar15 = ZEXT48(&DAT_002de864);
    if (dVar20 < 8.0) {
      uVar15 = 0x3f;
      moby->state = '?';
      if (moby->animationId != '\x02') {
        uVar15 = mobyutil::MB_SetAnimation(lVar17,2,0,3);
      }
    }
    return uVar15;
  }
  if (0x18 < bVar1) {
    if (bVar1 < 0x24) {
      if (bVar1 == 0x23) {
        dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
        bVar18 = moby->animationId;
        if ((12.0 <= dVar20) && (dVar20 <= 40.0)) {
          local_a0 = (longlong)(int)*(short *)((int)&kv[1].xySpeed + 2);
          dVar23 = 1.0471975803375244;
          dVar20 = (double)mathfunc::cosf((float)((double)local_a0 * 1.0471975803375244 +
                                                 (double)(moby->rotation).z));
          dVar25 = 0.10000000149011612;
          local_a0 = (longlong)(int)*(short *)((int)&kv[1].xySpeed + 2);
          local_220 = (float)((double)(DAT_0071f408 * 0.1) * dVar20);
          dVar20 = (double)FUN_005e8128((double)(float)((double)local_a0 * dVar23 +
                                                       (double)(moby->rotation).z));
          local_218 = 0;
          local_21c = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
          uVar15 = FUN_005e7f54(lVar17 + 0x10,lVar17 + 0x10,&local_220);
          return uVar15;
        }
        if (dVar20 < 40.0) {
          return (ulonglong)bVar18;
        }
        moby->state = '\x1f';
        if (bVar18 == 3) {
          return (ulonglong)bVar18;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (bVar1 == 0x22) {
        uVar10 = mobyutil::MB_UpdateKick(moby,kv);
        if ((int)((ulonglong)uVar10 & 0x40) == 0) {
          return (ulonglong)uVar10 & 0x40;
        }
        *(undefined2 *)&kv[1].drag = 0;
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar17,2,10,3);
        }
        moby->state = '#';
        uVar10 = mobyutil::MB_randInt(0x100);
        uVar15 = ((LZCOUNT(-(uVar10 & 1)) << 0x3a) >> 0x3f & 0xfffffffffffffffeU) + 1;
        *(short *)((int)&kv[1].xySpeed + 2) = (short)uVar15;
        return uVar15;
      }
      if (bVar1 == 0x21) {
        if ((((moby->updateId == moby->animationId) &&
             (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), 16.0 <= dVar20)) &&
            (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), dVar20 < 21.0)) &&
           ((ABS((moby->pos).z - g_heroPosition.z) < 0.2 &&
            (dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition), dVar20 < 4.0)))) {
          dVar25 = (double)GameCamera.rot.radius;
          dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                        (double)((moby->pos).y - GameCamera.posY));
          dVar20 = (double)fastfunc::FastSubRots((float)dVar25,(float)dVar20);
          if (dVar20 < 36.0) {
            dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                          (double)(g_heroPosition.y - (moby->pos).y));
            dVar20 = (double)fastfunc::FastSubRots((float)dVar20,(moby->rotation).z);
            if (dVar20 < 0.10471975803375244) {
              dVar20 = (double)mathfunc::cosf((moby->rotation).z);
              local_240 = (float)dVar20;
              dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
              local_23c = (float)dVar20;
              local_238 = 0;
              FUN_005e7e98(afStack_230,&g_heroMobyPtr->pos);
              local_228 = local_228 + 0.75;
              mobyutil::CollDamageMobyDirect
                        (1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_230,&local_240);
            }
          }
        }
        uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
        if ((int)uVar15 == 0) {
          return uVar15;
        }
        moby->state = '\x1f';
        if (moby->animationId == '\x03') {
          return 0x1f;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (bVar1 != 0x20) {
        if (bVar1 != 0x1f) {
          if (bVar1 != 0x19) {
            return uVar7;
          }
          sVar12 = *(short *)&kv[1].drag;
          *(short *)&kv[1].drag = sVar12 + 1;
          if (sVar12 < 0x79) {
            return (longlong)sVar12;
          }
          moby->state = '\x15';
          if (moby->animationId == '\x03') {
            return 0x15;
          }
          uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
          return uVar15;
        }
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (15.0 <= extraout_f1_01) {
          return uVar15;
        }
        if (0.20000000298023224 <= dVar20) {
          return ZEXT48(&DAT_002de864);
        }
        if (dVar20 <= -0.20000000298023224) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = ' ';
        if (moby->animationId == '\x01') {
          return 0x20;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,1,0,3);
        return uVar15;
      }
      dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar23 = (double)(float)(dVar20 - (double)(moby->rotation).z);
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      dVar20 = (double)mathfunc::cosf((moby->rotation).z);
      dVar25 = 0.15000000596046448;
      local_250 = (float)((double)(DAT_0071f408 * 0.15) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      lVar16 = lVar17 + 0x10;
      local_248 = 0;
      local_24c = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      FUN_005e7f54(lVar16,lVar16,&local_250);
      dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
      if (((dVar20 < 4.0) && (dVar23 < 0.20000000298023224)) && (-0.20000000298023224 < dVar23)) {
        moby->state = '!';
        if (moby->animationId == '\x04') {
          return 0x21;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,4,0,3);
        return uVar15;
      }
      dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
      if (dVar20 <= 16.0) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = '\x1f';
      if (moby->animationId == '\x03') {
        return 0x1f;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    dVar20 = 6.2831854820251465;
    if (bVar1 == 0x2d) {
      dVar25 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar25 = (double)((float)(dVar25 - (double)(g_heroMobyPtr->rotation).z) - 3.1415927);
      if (-3.1415927410125732 <= dVar25) {
        if (3.1415927410125732 < dVar25) {
          dVar25 = (double)(float)(dVar25 - dVar20);
        }
      }
      else {
        dVar25 = (double)(float)(dVar25 + dVar20);
      }
      if ((dVar25 <= 1.5707963705062866) && (-1.5707963705062866 <= dVar25)) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = ')';
      if (moby->animationId == '\x03') {
        return 0x29;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,10);
      return uVar15;
    }
    if (bVar1 == 0x2c) {
      uVar10 = mobyutil::MB_UpdateKick(moby,kv);
      if ((int)((ulonglong)uVar10 & 0x40) == 0) {
        return (ulonglong)uVar10 & 0x40;
      }
      *(undefined2 *)&kv[1].drag = 0;
      if (moby->animationId != '\n') {
        mobyutil::MB_SetAnimation(lVar17,10,0,10);
      }
      moby->state = '-';
      return 0x2d;
    }
    if (bVar1 == 0x2b) {
      dVar25 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar25 = (double)((float)(dVar25 - (double)(g_heroMobyPtr->rotation).z) - 3.1415927);
      if (-3.1415927410125732 <= dVar25) {
        if (3.1415927410125732 < dVar25) {
          dVar25 = (double)(float)(dVar25 - dVar20);
        }
      }
      else {
        dVar25 = (double)(float)(dVar25 + dVar20);
      }
      if ((1.5707963705062866 <= dVar25) || (dVar25 <= -1.5707963705062866)) {
        *(undefined2 *)((int)&kv[1].xySpeed + 2) = 0;
      }
      else {
        sVar12 = *(short *)((int)&kv[1].xySpeed + 2);
        *(short *)((int)&kv[1].xySpeed + 2) = sVar12 + 1;
        if ((0x1e < sVar12) && (moby->state = '-', moby->animationId != '\n')) {
          mobyutil::MB_SetAnimation(lVar17,10,0,10);
        }
      }
      if ((((moby->updateId == moby->animationId) &&
           (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), 16.0 <= dVar20)) &&
          (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), dVar20 < 21.0)) &&
         ((ABS((moby->pos).z - g_heroPosition.z) < 0.2 &&
          (dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition), dVar20 < 4.0)))) {
        dVar25 = (double)GameCamera.rot.radius;
        dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                      (double)((moby->pos).y - GameCamera.posY));
        dVar20 = (double)fastfunc::FastSubRots((float)dVar25,(float)dVar20);
        if (dVar20 < 36.0) {
          dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          dVar20 = (double)fastfunc::FastSubRots((float)dVar20,(moby->rotation).z);
          if (dVar20 < 0.10471975803375244) {
            dVar20 = (double)mathfunc::cosf((moby->rotation).z);
            local_200 = (float)dVar20;
            dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_1fc = (float)dVar20;
            local_1f8 = 0;
            FUN_005e7e98(afStack_1f0,&g_heroMobyPtr->pos);
            local_1e8 = local_1e8 + 0.75;
            mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_1f0,&local_200)
            ;
          }
        }
      }
      uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      moby->state = ')';
      if (moby->animationId == '\x03') {
        return 0x29;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (bVar1 == 0x2a) {
      dVar25 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar23 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar23 = (double)(float)(dVar23 - (double)(moby->rotation).z);
      dVar25 = (double)((float)(dVar25 - (double)(g_heroMobyPtr->rotation).z) - 3.1415927);
      if (-3.1415927410125732 <= dVar25) {
        if (3.1415927410125732 < dVar25) {
          dVar25 = (double)(float)(dVar25 - dVar20);
        }
      }
      else {
        dVar25 = (double)(float)(dVar25 + dVar20);
      }
      if ((1.5707963705062866 <= dVar25) || (dVar25 <= -1.5707963705062866)) {
        *(undefined2 *)((int)&kv[1].xySpeed + 2) = 0;
      }
      else {
        sVar12 = *(short *)((int)&kv[1].xySpeed + 2);
        *(short *)((int)&kv[1].xySpeed + 2) = sVar12 + 1;
        if ((0x1e < sVar12) && (moby->state = '-', moby->animationId != '\n')) {
          mobyutil::MB_SetAnimation(lVar17,10,0,10);
        }
      }
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      dVar20 = (double)mathfunc::cosf((moby->rotation).z);
      dVar25 = 0.02500000037252903;
      local_210 = (float)((double)(DAT_0071f408 * 0.025) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      lVar16 = lVar17 + 0x10;
      local_208 = 0;
      local_20c = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      FUN_005e7f54(lVar16,lVar16,&local_210);
      dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
      if (((dVar20 < 4.0) && (dVar23 < 0.20000000298023224)) && (-0.20000000298023224 < dVar23)) {
        moby->state = '+';
        if (moby->animationId == '\x04') {
          return 0x2b;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,4,0,3);
        return uVar15;
      }
      dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
      if (dVar20 <= 16.0) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = ')';
      if (moby->animationId == '\x03') {
        return 0x29;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (bVar1 != 0x29) {
      return uVar7;
    }
    dVar25 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar23 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar23 = (double)(float)(dVar23 - (double)(moby->rotation).z);
    dVar25 = (double)((float)(dVar25 - (double)(g_heroMobyPtr->rotation).z) - 3.1415927);
    if (-3.1415927410125732 <= dVar25) {
      if (3.1415927410125732 < dVar25) {
        dVar25 = (double)(float)(dVar25 - dVar20);
      }
    }
    else {
      dVar25 = (double)(float)(dVar25 + dVar20);
    }
    if ((1.5707963705062866 <= dVar25) || (dVar25 <= -1.5707963705062866)) {
      *(undefined2 *)((int)&kv[1].xySpeed + 2) = 0;
    }
    else {
      sVar12 = *(short *)((int)&kv[1].xySpeed + 2);
      *(short *)((int)&kv[1].xySpeed + 2) = sVar12 + 1;
      if ((0x1e < sVar12) && (moby->state = '-', moby->animationId != '\n')) {
        mobyutil::MB_SetAnimation(lVar17,10,0,10);
      }
    }
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
    uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
    if (15.0 <= extraout_f1_02) {
      return uVar15;
    }
    if (0.20000000298023224 <= dVar23) {
      return ZEXT48(&DAT_002de864);
    }
    if (dVar23 <= -0.20000000298023224) {
      return ZEXT48(&DAT_002de864);
    }
    moby->state = '*';
    if (moby->animationId == '\0') {
      return 0x2a;
    }
    uVar15 = mobyutil::MB_SetAnimation(lVar17,0,0,3);
    return uVar15;
  }
  if (bVar1 < 0xb) {
    if (1 < bVar1) {
      if (bVar1 < 3) {
        if (((moby->updateId == moby->animationId) &&
            (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), 16.0 <= dVar20)) &&
           ((dVar20 = (double)mobyfunc::BlendAnimFrame(moby), dVar20 < 21.0 &&
            ((ABS((moby->pos).z - g_heroPosition.z) < 0.2 &&
             (dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition), dVar20 < 4.0)))))) {
          dVar25 = (double)GameCamera.rot.radius;
          dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                        (double)((moby->pos).y - GameCamera.posY));
          dVar20 = (double)fastfunc::FastSubRots((float)dVar25,(float)dVar20);
          if (dVar20 < 36.0) {
            dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                          (double)(g_heroPosition.y - (moby->pos).y));
            dVar20 = (double)fastfunc::FastSubRots((float)dVar20,(moby->rotation).z);
            if (dVar20 < 0.10471975803375244) {
              dVar20 = (double)mathfunc::cosf((moby->rotation).z);
              local_2e0 = (float)dVar20;
              dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
              local_2dc = (float)dVar20;
              local_2d8 = 0;
              FUN_005e7e98(afStack_2d0,&g_heroMobyPtr->pos);
              local_2c8 = local_2c8 + 0.75;
              mobyutil::CollDamageMobyDirect
                        (1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_2d0,&local_2e0);
            }
          }
        }
        uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
        if ((int)uVar15 == 0) {
          return uVar15;
        }
        moby->state = '\x01';
        *(undefined2 *)&kv[1].drag = 0;
        if (moby->animationId == 3) {
          return (ulonglong)moby->animationId;
        }
        uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (3 < bVar1) {
        return uVar7;
      }
      uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      moby->state = '\x01';
      if (moby->animationId == '\x03') {
        return 1;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (bVar1 != 0) {
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (((dVar20 < 4.0) &&
          (sVar12 = *(short *)&kv[1].drag, *(short *)&kv[1].drag = sVar12 + 1, 0x3c < sVar12)) &&
         (moby->state = '\x02', moby->animationId != '\x04')) {
        mobyutil::MB_SetAnimation(lVar17,4,0,3);
      }
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (10.0 <= dVar20) {
        return ZEXT48(&DAT_002de864);
      }
      if (((g_heroState != HYPER_STRIKE && g_heroState != WRENCH_ATTACK) &&
          (g_heroState != CROUCH_WRENCH_THROW)) && (g_heroState != UNK_17)) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = '\x03';
      if (moby->animationId == '\x02') {
        return 3;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,2,0,3);
      return uVar15;
    }
    kv->flag = 1;
    uVar4 = *(ushort *)((int)&kv[1].drag + 2);
    kv->xySpeed = 0.1;
    kv->grav = 0.008;
    kv->drag = 0.0005;
    kv->zSpeed = 0.1;
    kv->type = '\0';
    if (uVar4 == 0) {
      moby->state = '\x01';
      if (moby->animationId == '\x03') {
        return 1;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (uVar4 == 1) {
      moby->state = '\v';
      if (moby->animationId == '\x03') {
        return 0xb;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (uVar4 == 2) {
      moby->state = '\x15';
      if (moby->animationId != '\x03') {
        mobyutil::MB_SetAnimation(lVar17,3,0,3);
      }
      *(undefined2 *)&kv[1].xySpeed = 2;
      return 2;
    }
    if (uVar4 == 3) {
      moby->state = '\x1f';
      if (moby->animationId != '\x03') {
        mobyutil::MB_SetAnimation(lVar17,3,0,3);
      }
      *(undefined2 *)&kv[1].xySpeed = 3;
      return 3;
    }
    if (uVar4 == 4) {
      moby->state = ')';
      if (moby->animationId != '\x03') {
        mobyutil::MB_SetAnimation(lVar17,3,0,3);
      }
      *(undefined2 *)&kv[1].xySpeed = 1;
      return 1;
    }
    if (uVar4 == 5) {
      moby->state = '3';
      moby->scale = moby->pClass->gScale * 0.6666667;
      if (moby->animationId == 0xb) {
        return (ulonglong)moby->animationId;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,0xb,0,3);
      return uVar15;
    }
    if (uVar4 == 6) {
      moby->state = '=';
      moby->modeBits = moby->modeBits | MIRROR;
      if (moby->animationId != '\x03') {
        mobyutil::MB_SetAnimation(lVar17,3,0,3);
      }
      path::InitFollower((PathFollower *)&kv[1].radius);
      kv[1].radius = 0;
      uVar15 = FUN_005e7e98(lVar17 + 0x10,(ulonglong)(uint)kv[1].xyBounceDamp + 0x10);
      return uVar15;
    }
    if (uVar4 == 7) {
      moby->state = 'G';
      if (moby->animationId == '\x03') {
        return 0x47;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (uVar4 == 8) {
      moby->state = 'Q';
      *(undefined2 *)&kv[1].xySpeed = 8;
      if (moby->animationId == 3) {
        return (ulonglong)moby->animationId;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (uVar4 == 9) {
      moby->state = '[';
      if (moby->animationId != '\x03') {
        mobyutil::MB_SetAnimation(lVar17,3,0,3);
      }
      *(undefined2 *)&kv[1].xySpeed = 3;
      *(undefined2 *)&kv[1].drag = 0x78;
      return 3;
    }
    if (uVar4 != 10) {
      return (ulonglong)uVar4;
    }
    moby->state = 'e';
    if (moby->animationId != '\x03') {
      mobyutil::MB_SetAnimation(lVar17,3,0,3);
    }
    *(undefined2 *)&kv[1].xySpeed = 3;
    return 3;
  }
  if (bVar1 == 0x18) {
    uVar10 = mobyutil::MB_UpdateKick(moby,kv);
    if ((int)((ulonglong)uVar10 & 0x40) == 0) {
      return (ulonglong)uVar10 & 0x40;
    }
    *(undefined2 *)&kv[1].drag = 0;
    if (moby->animationId != '\n') {
      mobyutil::MB_SetAnimation(lVar17,10,0,3);
    }
    moby->state = '\x19';
    return 0x19;
  }
  if (bVar1 == 0x17) {
    if (((moby->updateId == moby->animationId) &&
        (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), 16.0 <= dVar20)) &&
       ((dVar20 = (double)mobyfunc::BlendAnimFrame(moby), dVar20 < 21.0 &&
        ((ABS((moby->pos).z - g_heroPosition.z) < 0.2 &&
         (dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition), dVar20 < 4.0)))))) {
      dVar25 = (double)GameCamera.rot.radius;
      dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                    (double)((moby->pos).y - GameCamera.posY));
      dVar20 = (double)fastfunc::FastSubRots((float)dVar25,(float)dVar20);
      if (dVar20 < 36.0) {
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar20 = (double)fastfunc::FastSubRots((float)dVar20,(moby->rotation).z);
        if (dVar20 < 0.10471975803375244) {
          dVar20 = (double)mathfunc::cosf((moby->rotation).z);
          local_270 = (float)dVar20;
          dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_26c = (float)dVar20;
          local_268 = 0;
          FUN_005e7e98(afStack_260,&g_heroMobyPtr->pos);
          local_258 = local_258 + 0.75;
          mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_260,&local_270);
        }
      }
    }
    uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
    if ((int)uVar15 == 0) {
      return uVar15;
    }
    moby->state = '\x15';
    if (moby->animationId == '\x03') {
      return 0x15;
    }
    uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
    return uVar15;
  }
  if (bVar1 == 0x16) {
    dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar23 = (double)(float)(dVar20 - (double)(moby->rotation).z);
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
    dVar20 = (double)mathfunc::cosf((moby->rotation).z);
    dVar25 = 0.15000000596046448;
    local_280 = (float)((double)(DAT_0071f408 * 0.15) * dVar20);
    dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
    lVar16 = lVar17 + 0x10;
    local_278 = 0;
    local_27c = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
    FUN_005e7f54(lVar16,lVar16,&local_280);
    dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
    if (((dVar20 < 2.0) && (dVar23 < 0.20000000298023224)) && (-0.20000000298023224 < dVar23)) {
      moby->state = '\x17';
      if (moby->animationId == '\x04') {
        return 0x17;
      }
      uVar15 = mobyutil::MB_SetAnimation(lVar17,4,0,3);
      return uVar15;
    }
    dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
    if (dVar20 <= 16.0) {
      return ZEXT48(&DAT_002de864);
    }
    moby->state = '\x15';
    if (moby->animationId == '\x03') {
      return 0x15;
    }
    uVar15 = mobyutil::MB_SetAnimation(lVar17,3,0,3);
    return uVar15;
  }
  if (bVar1 == 0x15) {
    dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
    uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
    if (15.0 <= extraout_f1_00) {
      return uVar15;
    }
    if (0.20000000298023224 <= dVar20) {
      return ZEXT48(&DAT_002de864);
    }
    if (dVar20 <= -0.20000000298023224) {
      return ZEXT48(&DAT_002de864);
    }
    moby->state = '\x16';
    if (moby->animationId == '\x01') {
      return 0x16;
    }
    uVar15 = mobyutil::MB_SetAnimation(lVar17,1,0,3);
    return uVar15;
  }
  if (bVar1 != 0xc) {
    if (bVar1 != 0xb) {
      return uVar7;
    }
    dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
    uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
    if (15.0 <= extraout_f1) {
      return uVar15;
    }
    if (0.20000000298023224 <= dVar20) {
      return ZEXT48(&DAT_002de864);
    }
    if (dVar20 <= -0.20000000298023224) {
      return ZEXT48(&DAT_002de864);
    }
    sVar12 = *(short *)&kv[1].drag;
    *(short *)&kv[1].drag = sVar12 + 1;
    if (sVar12 < 0x15) {
      return (longlong)sVar12;
    }
    *(undefined2 *)&kv[1].drag = 0;
    moby->state = '\f';
    if (moby->animationId == 8) {
      return (ulonglong)moby->animationId;
    }
    uVar15 = mobyutil::MB_SetAnimation(lVar17,8,0,3);
    return uVar15;
  }
  uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                        (double)(g_heroPosition.y - (moby->pos).y));
  mobyutil::OrganicDeltAngSpeed
            (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3f20624de0000000,lVar17,&DAT_002de864,
             uVar15 + 0x70);
  uVar13 = moby->animationId;
  if (((moby->updateId == uVar13) && ((moby->field43_0x70 & 2U) != 0)) && (uVar13 == '\a')) {
    if (uVar13 != '\b') {
      mobyutil::MB_SetAnimation(lVar17,8,0,3);
    }
    goto LAB_002dfe18;
  }
  if (moby->updateId == uVar13) {
    dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
    uVar13 = moby->animationId;
    if (dVar20 != 40.0) {
      dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
      uVar13 = moby->animationId;
      if (dVar20 != 55.0) goto LAB_002dfdc0;
    }
    if (uVar13 == '\b') {
      uVar19 = 0;
      local_290 = 0;
      local_28c = 0;
      local_288 = 0;
      local_284 = 0x3f800000;
      mobyfunc::GetBonePosition(0,lVar17,1,auStack_2c0);
      local_2b8 = local_2b8 + 0.2;
      dVar23 = 1.5707963705062866;
      dVar20 = (double)mathfunc::cosf((moby->rotation).z + 1.5707964);
      dVar25 = 0.5;
      local_2b0 = (float)(dVar20 * 0.5);
      dVar20 = (double)FUN_005e8128((double)(float)((double)(moby->rotation).z + dVar23));
      local_2ac = (float)(dVar20 * dVar25);
      local_2a8 = 0;
      FUN_005e7f54(auStack_2a0,&local_2b0,auStack_2c0);
      iVar8 = FUN_00299400(uVar19,&local_290,auStack_2a0);
      dVar23 = 0.1745329201221466;
      dVar20 = (double)mathfunc::cosf((moby->rotation).z + 0.17453292);
      dVar25 = 0.15000000596046448;
      *(float *)(*(int *)(iVar8 + 0x78) + 0x20) = (float)((double)(DAT_0071f408 * 0.15) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(float)((double)(moby->rotation).z + dVar23));
      *(float *)(*(int *)(iVar8 + 0x78) + 0x24) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      *(undefined4 *)(*(int *)(iVar8 + 0x78) + 0x28) = 0;
      *(undefined1 *)(iVar8 + 0x20) = 1;
      FUN_005e81f0(auStack_2a0,auStack_2c0,&local_2b0);
      iVar9 = FUN_00299400(uVar19,&local_290,auStack_2a0);
      dVar20 = (double)mathfunc::cosf((float)((double)(moby->rotation).z - dVar23));
      *(float *)(*(int *)(iVar9 + 0x78) + 0x20) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(float)((double)(moby->rotation).z - dVar23));
      *(float *)(*(int *)(iVar9 + 0x78) + 0x24) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      iVar8 = *(int *)(iVar9 + 0x78);
      *(undefined4 *)(iVar8 + 0x28) = 0;
      *(undefined1 *)(iVar9 + 0x20) = 1;
      iVar8 = FUN_00299400(uVar19,&local_290,auStack_2c0,iVar8,lVar17,0x20ffff);
      dVar20 = (double)mathfunc::cosf((moby->rotation).z);
      *(float *)(*(int *)(iVar8 + 0x78) + 0x20) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      *(float *)(*(int *)(iVar8 + 0x78) + 0x24) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      *(undefined4 *)(*(int *)(iVar8 + 0x78) + 0x28) = 0;
      *(undefined1 *)(iVar8 + 0x20) = 1;
      goto LAB_002dfe18;
    }
  }
LAB_002dfdc0:
  if ((moby->updateId == uVar13) && (uVar13 == '\t' && (moby->field43_0x70 & 2U) != 0)) {
    *(undefined2 *)&kv[1].drag = 0;
    moby->state = '\v';
    if (moby->animationId != '\x03') {
      mobyutil::MB_SetAnimation(lVar17,3,0,3);
    }
  }
LAB_002dfe18:
  sVar12 = *(short *)&kv[1].drag;
  *(short *)&kv[1].drag = sVar12 + 1;
  bVar18 = moby->animationId;
  uVar15 = (ulonglong)bVar18;
  if ((sVar12 < 0xd3) && (uVar15 = (ulonglong)g_heroState, g_heroState != TAKING_DAMAGE)) {
    return uVar15;
  }
  if (bVar18 != 8) {
    return uVar15;
  }
  uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
  if ((int)uVar15 == 0) {
    return uVar15;
  }
  if (bVar18 == 9) {
    return uVar15;
  }
  uVar15 = mobyutil::MB_SetAnimation(lVar17,9,0,3);
  return uVar15;
}



