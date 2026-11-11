//==== 00480000  ns=mobyupdate_helpers  size=0x294
// sig: undefined M832_00480000(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 000fc620 mobyutil::MB_randInt; 004d86b0 FUN_004d86b0; 004deab8 FUN_004deab8; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M832_00480000(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar4 = DAT_00966b24;
  uVar3 = DAT_00966b20;
  uVar2 = g_viewMtxPtr;
  iVar1 = *(int *)(param_1 + 0x78);
  FUN_004deab8(g_viewMtxPtr,DAT_00966b20,DAT_00966b24);
  fastfunc::FastIntToDouble(((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0));
  fastfunc::FastIntToDouble(((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0));
  draw::GetEffectTex(0x1e);
  iVar11 = 0;
  iVar9 = ((int)uVar3 >> 5) + (uint)((int)uVar3 < 0 && (uVar3 & 0x1f) != 0) + 1;
  iVar10 = ((int)uVar4 >> 5) + (uint)((int)uVar4 < 0 && (uVar4 & 0x1f) != 0) + 1;
  if (0 < iVar9) {
    iVar14 = 0;
    dVar18 = 90.5;
    dVar19 = 127.5;
    dVar20 = 16.0;
    do {
      iVar12 = 0;
      if (0 < iVar10) {
        iVar13 = 0;
        dVar21 = (double)(float)((double)(longlong)iVar14 - dVar20);
        do {
          dVar17 = (double)(longlong)iVar13;
          dVar15 = (double)fastfunc::FastIntToDouble
                                     ((int)((double)animationSpeed * dVar18),
                                      (double)(longlong)iVar13,
                                      (int)((double)animationSpeed * dVar18));
          dVar16 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(iVar1 + 0x140));
          fastfunc::FastDoubleToInt((double)(float)((double)(float)(dVar16 * dVar19) / dVar15));
          uVar5 = mobyutil::MB_randInt(0x20);
          uVar6 = mobyutil::MB_randInt(0x20);
          uVar7 = fastfunc::FastDoubleToInt(dVar21);
          uVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar17 - dVar20));
          draw::Sprite_DrawShapeWrapper(uVar7,uVar8,0x20,0x20,uVar5,uVar6,0x20,0x20);
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 0x20;
        } while (iVar12 < iVar10);
      }
      iVar11 = iVar11 + 1;
      iVar14 = iVar14 + 0x20;
    } while (iVar11 < iVar9);
  }
  FUN_004d86b0(uVar2);
  return;
}



//==== 00480298  ns=mobyupdate_unsorted  size=0x21c
// sig: undefined UpdateMoby_832(MobyInstance * moby)
// callers(0): 
// callees(4): 0006d7e0 draw::RegisterPostDraw; 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid; 002ae9e0 FUN_002ae9e0

/* Moby 832 */

void mobyupdate_unsorted::UpdateMoby_832(MobyInstance *moby)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  moby->updateDistance = -1;
  piVar1 = (int *)moby->pVar;
  iVar4 = MobyUpdateChainStart;
  if (g_heroState != VISIBOMB_CONTROL) {
    piVar1[0x50] = 0;
    return;
  }
  while( true ) {
    if (iVar4 == 0) {
      piVar1[0x50] = 0;
      return;
    }
    if (*(short *)(iVar4 + 0xa6) == 0xac) break;
    iVar4 = *(int *)(iVar4 + 0x28);
  }
  iVar6 = 0;
  piVar1[0x50] = piVar1[0x50] + 1;
  piVar7 = piVar1;
  do {
    if ((((*piVar7 != -1) &&
         (uVar2 = (int)*(uint *)(iVar4 + 0x18) >> 0x1f, uVar3 = piVar7[1] >> 0x1f,
         iVar5 = (uVar2 >> 1 ^ *(uint *)(iVar4 + 0x18)) - uVar2,
         (int)((uVar3 >> 1 ^ piVar7[1]) - uVar3) < iVar5)) &&
        (uVar2 = piVar7[2] >> 0x1f, iVar5 < (int)((uVar2 >> 1 ^ piVar7[2]) - uVar2))) &&
       (iVar5 = mobyutil::PointInsideComplexPoly
                          ((Vec4 *)(iVar4 + 0x10),(Vec4 *)Splines[*piVar7]->points,
                           Splines[*piVar7]->cnt), iVar5 != 0)) {
      piVar1[0x50] = 0;
      return;
    }
    iVar5 = mobyutil::MB_IsPntInCuboid((Vec4 *)(iVar4 + 0x10),(longlong)piVar7[3]);
    if (iVar5 != 0) {
      piVar1[0x50] = 0;
      return;
    }
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 4;
  } while (iVar6 < 0x14);
  iVar6 = piVar1[0x50];
  if (0 < iVar6) {
    if (draw::ScreenColorEffectEnabled != '\0') {
      draw::RegisterPostDraw(&PTR_M832_00480000_0070eee0,moby);
      iVar6 = piVar1[0x50];
    }
    if ((int)(animationSpeed * 90.5) < iVar6) {
      FUN_002ae9e0(iVar4,*(undefined4 *)(iVar4 + 0x78));
    }
  }
  return;
}



//==== 004804b4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M833_004804b4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M833_004804b4(void)

{
  DAT_008acc8c = 0x10000;
  return;
}



//==== 004804e0  ns=Global  size=0x390
// sig: undefined FUN_004804e0(void)
// callers(1): 003c3730 mobyupdate_unsorted::UpdateMoby_574
// callees(3): 00057820 collproc::CollLine; 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
FUN_004804e0(double param_1,double param_2,double param_3,float *param_4,f32 *param_5,float param_6,
            undefined4 param_7)

{
  float fVar1;
  f32 fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  MobyInstance *pMVar14;
  longlong lVar13;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0x110;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar12;
  puVar8[0x24] = in_LR;
  puVar8[0x1f] = in_f29;
  puVar8[0x20] = in_f30;
  puVar8[0x21] = in_f31;
  puVar8[0x1c] = unaff_r29;
  *(undefined4 *)(puVar8 + 0x16) = param_7;
  *(undefined4 *)((int)puVar8 + 0xb4) = param_7;
  puVar8[0x1e] = unaff_r31;
  *(undefined4 *)(puVar8 + 0x17) = param_7;
  *(undefined4 *)((int)puVar8 + 0xbc) = param_7;
  puVar8[0x1d] = unaff_r30;
  puVar8[0x1b] = unaff_r28;
  auVar24 = *(undefined1 (*) [16])(puVar8 + 0x16);
  pMVar14 = mobyfunc::CreateMoby(ROCKET_0341);
  if (pMVar14 != (MobyInstance *)0x0) {
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0x7e;
    pMVar14->enabled = '\x01';
    pMVar14->state = '\x01';
    pfVar4 = (float *)pMVar14->pVar;
    (pMVar14->pos).x = *param_5;
    (pMVar14->pos).y = param_5[1];
    (pMVar14->pos).z = param_5[2];
    (pMVar14->pos).w = param_5[3];
    fVar5 = *param_4;
    fVar1 = *param_4;
    *pfVar4 = fVar1;
    fVar1 = ABS(fVar1);
    fVar6 = param_4[1];
    fVar10 = ABS(param_4[1]);
    pfVar4[1] = param_4[1];
    pfVar4[2] = param_4[2];
    pfVar4[3] = param_4[3];
    *(float *)(puVar8 + 0x10) = fVar1 - fVar10;
    fVar11 = 0.0;
    uVar16 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar6 >> 0x1d) & 4;
    fVar5 = fVar1;
    if (*(float *)(puVar8 + 0x10) - 0.0 < 0.0) {
      fVar5 = fVar10;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)(puVar8 + 0x10) - 0.0 < 0.0) {
      fVar10 = fVar1;
    }
    if (0.0 < fVar5) {
      lVar19 = uVar12 - 0x100;
      lVar17 = uVar12 - 0x7c;
      lVar18 = uVar12 - 0x8c;
      lVar21 = 2;
      fVar1 = (fVar10 - fVar5) / (fVar10 + fVar5);
      fVar5 = fVar1 * fVar1;
      *(float *)(puVar8 + 0x12) = fVar1;
      *(float *)(puVar8 + 0x11) = fVar1;
      *(float *)((int)puVar8 + 0x8c) = fVar1;
      *(float *)((int)puVar8 + 0x84) = fVar1;
      fVar1 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar5;
      *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar1;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar1 * fVar5;
      do {
        *(float *)((int)lVar19 + 0x84) = *(float *)((int)lVar19 + 0x74) * fVar1 * fVar1;
        iVar15 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar1 * fVar1;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar19 = uVar12 - 0x8c;
      lVar21 = 4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar17 = lVar19;
      lVar18 = lVar13;
      do {
        fVar1 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x84) * fVar1;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      do {
        iVar15 = (int)lVar13;
        iVar9 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar11 = fVar11 + *(float *)(iVar15 + 0x84) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8)
                 + *(float *)(iVar9 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar11 = (fVar11 + 0.7853982) * fVar3 + fVar6;
    }
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    (pMVar14->rotation).z = fVar11;
    auVar24 = ZEXT416(0xffffffff);
    auVar23 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar24 = loadVectorLeftIndexed(8,0x4804d0);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = vectorAddFloatingPoint
                        (auVar22,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    auVar22 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar22);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x14,
                       ZEXT48(pfVar4));
    *(undefined4 *)((uint)(pfVar4 + 5) & 0xfffffffc) = uVar7;
    pfVar4[4] = param_6;
    pfVar4[6] = (float)param_3;
    pfVar4[7] = (float)param_1;
    pfVar4[9] = (float)param_2;
    pfVar4[10] = 0.0;
    *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)((int)param_6 + 0x10);
    fVar2 = param_5[2];
    *(undefined4 *)((int)puVar8 + 0x74) = *(undefined4 *)((int)param_6 + 0x14);
    uVar7 = *(undefined4 *)((int)param_6 + 0x1c);
    *(f32 *)(puVar8 + 0xf) = fVar2;
    *(undefined4 *)((int)puVar8 + 0x7c) = uVar7;
    iVar15 = collproc::CollLine(uVar12 - 0xa0,param_5,2,param_6,0);
    if (iVar15 != 0) {
      pfVar4[5] = 0.0;
      (pMVar14->pos).x = CollOutput.ip.x;
      (pMVar14->pos).y = CollOutput.ip.y;
      (pMVar14->pos).z = CollOutput.ip.z;
      (pMVar14->pos).w = CollOutput.ip.w;
      pfVar4[9] = 0.0;
    }
    mobyfunc::UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}



//==== 00480928  ns=mobyupdate_unsorted  size=0x9fc
// sig: undefined UpdateMoby_833(MobyInstance * moby)
// callers(0): 
// callees(15): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fe484 mobyutil::MB_randRange; 000ff190 mobyutil::MB_DeltAngSpeed; 0010581c mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001118d8 mobyutil::MB_getTarget; 00121740 partupd::SpawnPart_4; 004fff60 fastfunc::FastDecTimerS32; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502b08 fastfunc::FastVecAddSelf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 833 */

void mobyupdate_unsorted::UpdateMoby_833(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  int iVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar19;
  undefined8 uVar18;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar24;
  ulonglong unaff_r29;
  longlong lVar25;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar32;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
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
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x250;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar16;
  puVar13[0x4c] = in_LR;
  puVar13[0x41] = in_f23;
  puVar13[0x42] = in_f24;
  puVar13[0x43] = in_f25;
  puVar13[0x44] = in_f26;
  puVar13[0x45] = in_f27;
  puVar13[0x46] = in_f28;
  puVar13[0x47] = in_f29;
  puVar13[0x48] = in_f30;
  puVar13[0x49] = in_f31;
  puVar13[0x40] = unaff_r31;
  bVar2 = moby->state;
  puVar13[0x3f] = unaff_r30;
  pfVar10 = (float *)moby->pVar;
  uVar26 = ZEXT48(pfVar10);
  puVar13[0x3e] = unaff_r29;
  puVar13[0x3d] = unaff_r28;
  puVar13[0x3c] = unaff_r27;
  puVar13[0x3b] = unaff_r26;
  puVar13[0x3a] = unaff_r25;
  puVar13[0x39] = unaff_r24;
  puVar13[0x38] = unaff_r23;
  puVar13[0x37] = unaff_r22;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      dVar28 = (double)fastfunc::FastIntToDouble((int)pfVar10[5] << 1);
      mobyutil::MB_getTarget((double)(float)(dVar28 * (double)pfVar10[9]),lVar17);
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      *(float *)(puVar13 + 0xe) = fVar3;
      fVar5 = (moby->pos).z;
      *(float *)((int)puVar13 + 0x74) = fVar4;
      fVar6 = (moby->pos).w;
      *(float *)(puVar13 + 0xf) = fVar5;
      *(f32 *)((int)puVar13 + 0x7c) = fVar6;
      lVar25 = lVar17 + 0x10;
      (moby->pos).x = fVar3 + *pfVar10;
      (moby->pos).y = fVar4 + pfVar10[1];
      (moby->pos).z = fVar5 + pfVar10[2];
      fVar4 = DAT_00969e28;
      uVar11 = DAT_00969e24;
      fVar3 = DAT_00969e28 * DAT_008accb8;
      *(undefined4 *)(puVar13 + 0x14) = DAT_00969e20;
      *(undefined4 *)((int)puVar13 + 0xa4) = uVar11;
      uVar11 = DAT_00969e2c;
      *(float *)(puVar13 + 0x15) = fVar4;
      *(undefined4 *)((int)puVar13 + 0xac) = uVar11;
      *(float *)(puVar13 + 0x15) = fVar3;
      fastfunc::FastVecAddSelf(uVar16 - 0x1a0,lVar25,uVar16 - 0x1b0);
      (moby->rotation).z = pfVar10[7];
      dVar28 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 6.2831855);
      (moby->rotation).x = (float)dVar28;
      dVar38 = 1.570796251296997;
      dVar37 = 3.141592502593994;
      fVar3 = pfVar10[7] + 1.5707963;
      dVar36 = -3.141592502593994;
      dVar35 = -0.16666656732559204;
      dVar34 = 0.008333025500178337;
      dVar33 = -0.0001980741071747616;
      dVar28 = 2.601886990305502e-06;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar9 = fVar5 * fVar5;
      fVar3 = fVar9 * fVar9 * fVar5;
      fVar4 = fVar9 * fVar3;
      *(float *)(puVar13 + 0x10) =
           (fVar9 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar5 * -0.16666657 + fVar5) *
           pfVar10[9] * -0.5;
      fVar3 = pfVar10[7];
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar9 = fVar5 * fVar5;
      fVar3 = fVar9 * fVar9 * fVar5;
      fVar4 = fVar9 * fVar3;
      *(float *)((int)puVar13 + 0x84) =
           (fVar9 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar5 * -0.16666657 + fVar5) *
           pfVar10[9] * -0.5;
      dVar32 = 0.0;
      *(undefined4 *)(puVar13 + 0x11) = 0;
      fastfunc::FastVecAdd(uVar16 - 400,uVar16 - 0x1d0,uVar26);
      *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar13 + 0x18);
      *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)puVar13 + 0xc4);
      *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)(puVar13 + 0x19);
      *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0xcc);
      fastfunc::FastVecAdd(uVar16 - 0x180,uVar16 - 0x1d0,uVar16 - 0x1b0);
      *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar13 + 0x1a);
      *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)puVar13 + 0xd4);
      *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)(puVar13 + 0x1b);
      *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0xdc);
      fVar3 = *pfVar10;
      dVar30 = (double)SQRT(pfVar10[2] * pfVar10[2] + fVar3 * fVar3 + pfVar10[1] * pfVar10[1]);
      if (dVar30 == dVar32) {
        *(float *)(puVar13 + 0x12) = fVar3;
        *(float *)((int)puVar13 + 0x94) = pfVar10[1];
        *(float *)(puVar13 + 0x13) = pfVar10[2];
        fVar3 = pfVar10[3];
        *(undefined4 *)(puVar13 + 0x13) = 0;
        *(undefined4 *)((int)puVar13 + 0x94) = 0;
        *(undefined4 *)(puVar13 + 0x12) = 0;
      }
      else {
        fVar4 = (float)(-0.20000000298023224 / dVar30);
        *(float *)(puVar13 + 0x12) = fVar3 * fVar4;
        *(float *)((int)puVar13 + 0x94) = pfVar10[1] * fVar4;
        *(float *)(puVar13 + 0x13) = pfVar10[2] * fVar4;
        fVar3 = pfVar10[3];
      }
      lVar24 = uVar16 - 0x1c0;
      *(float *)((int)puVar13 + 0x9c) = fVar3;
      fastfunc::FastVecAddSelf(uVar16 - 0x170,lVar24,lVar25);
      iVar19 = mobyutil::MB_randRange(0xf,0x16);
      puVar13[0x34] = (longlong)iVar19;
      dVar30 = 0.5;
      puVar13[0x34] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar13[0x34] + 0.5));
      uVar11 = *(undefined4 *)((int)puVar13 + 0x1a4);
      uVar18 = mobyutil::MB_randRange(0x14,0x23);
      partupd::SpawnPart_4(lVar24,uVar16 - 0x1d0,0x6f00afff,0xff,uVar11,0x28,uVar18,1);
      iVar19 = mobyutil::MB_randRange(0x1e,0x3c);
      puVar13[0x34] = (longlong)iVar19;
      puVar13[0x34] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar13[0x34] + dVar30));
      uVar11 = *(undefined4 *)((int)puVar13 + 0x1a4);
      uVar18 = mobyutil::MB_randRange(0x32,0x4b);
      partupd::SpawnPart_4(lVar24,uVar16 - 0x1d0,0x1fffffff,0x4f4f4f,uVar11,0x28,uVar18,0);
      fVar4 = mobyutil::g_FrameTime;
      fVar3 = (moby->rotation).y;
      if (*(int *)(puVar13 + 0x2c) != 0) {
        fVar5 = (moby->pos).y - *(float *)((int)puVar13 + 0x144);
        fVar9 = (moby->pos).x - *(float *)(puVar13 + 0x28);
        fVar7 = *(float *)(puVar13 + 0x29) - (moby->pos).z;
        fVar5 = SQRT(fVar9 * fVar9 + fVar5 * fVar5);
        *(float *)((int)puVar13 + 0x174) = fVar7;
        dVar31 = ABS((double)fVar7);
        dVar29 = ABS((double)fVar5);
        *(float *)(puVar13 + 0x2e) = fVar5;
        *(float *)(puVar13 + 0x2f) = (float)(dVar29 - dVar31);
        uVar22 = (ulonglong)(*(uint *)(puVar13 + 0x2e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x2f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x174) >> 0x1d) & 4;
        dVar30 = ABS((double)*(float *)(puVar13 + 0x2e));
        if ((double)*(float *)(puVar13 + 0x2f) - dVar32 < 0.0) {
          dVar30 = dVar31;
        }
        fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar31 = ABS((double)*(float *)((int)puVar13 + 0x174));
        if ((double)*(float *)(puVar13 + 0x2f) - dVar32 < 0.0) {
          dVar31 = dVar29;
        }
        if (dVar32 < dVar30) {
          lVar24 = uVar16 - 0x240;
          lVar23 = uVar16 - 0xc4;
          lVar20 = uVar16 - 0xd4;
          lVar27 = 2;
          fVar7 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
          fVar8 = fVar7 * fVar7;
          *(float *)(puVar13 + 0x31) = fVar7;
          *(float *)(puVar13 + 0x30) = fVar7;
          *(float *)((int)puVar13 + 0x184) = fVar7;
          *(float *)((int)puVar13 + 0x17c) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)(puVar13 + 0x30) = *(float *)(puVar13 + 0x30) * fVar8;
          *(float *)((int)puVar13 + 0x184) = *(float *)((int)puVar13 + 0x184) * fVar7;
          *(float *)(puVar13 + 0x31) = *(float *)(puVar13 + 0x31) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar24 + 0x17c) = *(float *)((int)lVar24 + 0x16c) * fVar7 * fVar7;
            iVar19 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar7 * fVar7;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar23 = uVar16 - 0xd4;
          pfVar21 = (float *)&DAT_007358e0;
          lVar24 = lVar1;
          lVar20 = lVar23;
          do {
            fVar7 = *pfVar21;
            fVar8 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar24 + 0x17c) = *(float *)((int)lVar24 + 0x17c) * fVar7;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar8;
            lVar20 = lVar20 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar20 = 2;
          lVar24 = lVar1;
          do {
            iVar19 = (int)lVar24;
            iVar14 = (int)lVar23;
            lVar24 = lVar24 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0x17c)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar9 + fVar5);
        }
        dVar30 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)fVar3,-dVar32,(double)(DAT_0071f418 * 0.7853982),
                                    (double)(DAT_0071f418 * 3.1415927),(double)(fVar4 * 0.5235988),
                                    &DAT_00480870,&DAT_00720000,uVar26 + 0x20);
        dVar32 = -dVar30;
        (moby->rotation).y = (float)dVar30;
        dVar30 = (double)(float)(dVar37 - dVar32);
        if (dVar32 - (double)(float)(dVar37 - dVar32) < 0.0) {
          dVar30 = dVar32;
        }
        dVar29 = (double)(float)(dVar36 - dVar32);
        if ((double)(float)(dVar36 - dVar32) - dVar30 < 0.0) {
          dVar29 = dVar30;
        }
        dVar30 = (double)(float)(dVar29 * dVar29);
        dVar31 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar29));
        dVar32 = (double)(float)(dVar30 * dVar31);
        (moby->pos).z =
             (float)((double)(float)(dVar30 * dVar32) * dVar28 +
                    (double)(float)(dVar32 * dVar33 +
                                   (double)(float)(dVar31 * dVar34 +
                                                  (double)(float)((double)(float)(dVar30 * dVar29) *
                                                                  dVar35 + dVar29)))) * pfVar10[9] +
             (moby->pos).z;
      }
      iVar19 = collproc::CollLine(lVar25,uVar16 - 0x1e0,0,pfVar10[4],0);
      if ((iVar19 != 0) ||
         (iVar19 = collproc::CollSphere(0x3fc99999a0000000,lVar25,&DAT_00480870,0,pfVar10[4]),
         iVar19 != 0)) {
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          mobyutil::SetCollDamIn(0x3ff0000000000000,uVar16 - 0x160,lVar17,0x10001);
          dVar30 = (double)(float)((double)pfVar10[7] + dVar38);
          auVar43 = ZEXT416(0xffffffff);
          auVar39 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          auVar43 = ZEXT416(0xffffffff);
          auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar43 = ZEXT416(0xfffffff0);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          dVar38 = (double)(float)(dVar37 - dVar30);
          if (dVar30 - (double)(float)(dVar37 - dVar30) < 0.0) {
            dVar38 = dVar30;
          }
          dVar37 = (double)(float)(dVar36 - dVar30);
          if ((double)(float)(dVar36 - dVar30) - dVar38 < 0.0) {
            dVar37 = dVar38;
          }
          dVar36 = (double)(float)(dVar37 * dVar37);
          dVar30 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar37));
          dVar38 = (double)(float)(dVar36 * dVar30);
          *(float *)(puVar13 + 0x1e) =
               (float)((double)(float)(dVar36 * dVar38) * dVar28 +
                      (double)(float)(dVar38 * dVar33 +
                                     (double)(float)(dVar30 * dVar34 +
                                                    (double)(float)((double)(float)(dVar36 * dVar37)
                                                                    * dVar35 + dVar37))));
          pMVar15 = CollOutput.pMoby;
          auVar41 = loadVectorLeftIndexed(0x1c,uVar26);
          auVar42 = loadVectorRightIndexed(0x2c,uVar26);
          auVar44 = loadVectorLeftIndexed(8,0x480870);
          auVar41 = auVar41 | auVar42;
          auVar42 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xc,0x480870);
          auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar42 = vectorSubtractFloatingPoint
                              (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,auVar41
                              );
          auVar45 = vectorSubtractFloatingPoint
                              (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar41
                              );
          auVar44 = vectorCompareGreaterThanFloatingPoint(auVar42,auVar41);
          auVar44 = vectorConditionalSelect(auVar42,auVar41,auVar44);
          auVar42 = ZEXT416(0xffffffff);
          auVar47 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar42 = vectorCompareGreaterThanFloatingPoint(auVar44,auVar45);
          auVar44 = vectorConditionalSelect(auVar45,auVar44,auVar42);
          auVar41 = vectorShiftLeftIntegerWord(auVar46,auVar46);
          auVar46 = ZEXT416(0xffffffff);
          auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
          auVar45 = loadVectorLeftIndexed(0x10,0x480870);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar44,auVar44,auVar40);
          auVar40 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar45 = vectorShiftLeftIntegerWord(auVar46,auVar46);
          auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar46 = loadVectorLeftIndexed(0x14,0x480870);
          auVar48 = loadVectorLeftIndexed(0xa6,lVar17);
          auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar48 = vectorShiftRightWord
                              (auVar48,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60
                              );
          auVar49 = loadVectorLeftIndexed(0x18,0x480870);
          auVar43 = vectorMultiplyAddFloatingPoint(auVar42,auVar44,auVar41);
          auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar45);
          auVar44 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60
                               ,auVar44);
          auVar43 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar40 = loadVectorLeftIndexed(0x1c,0x480870);
          auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar45 = vectorMultiplyAddFloatingPoint(auVar42,auVar41,auVar47);
          auVar46 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60
                               ,auVar44);
          auVar44 = vectorSplatHalfWord(auVar48,1);
          auVar39 = vectorMultiplyAddFloatingPoint(auVar42,auVar45,auVar39);
          auVar43 = vectorMultiplyAddFloatingPoint
                              (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60
                               ,auVar46);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar39,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60
                               ,auVar43);
          auVar43 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar11 = storeVectorElementWordIndexed
                             (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0xf4,
                              lVar1);
          *(undefined4 *)((int)puVar13 + 0xf4) = uVar11;
          *(undefined4 *)(puVar13 + 0x1f) = 0x3f800000;
          *(undefined4 *)((int)puVar13 + 0xfc) = 0x45afdf66;
          *(undefined1 *)(puVar13 + 0x21) = 1;
          *(undefined1 *)((int)puVar13 + 0x109) = 1;
          uVar12 = storeVectorElementHalfWordIndexed(auVar44,0x10a,lVar1);
          *(undefined2 *)((int)puVar13 + 0x10a) = uVar12;
          auVar43 = loadVectorLeftIndexed(0x80,0x480870);
          auVar39 = vectorPermute(auVar39,_DAT_004808c0,_DAT_004808d0);
          auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = vectorPermute(auVar39,*(undefined1 (*) [16])(puVar13 + 0x1e),_DAT_004808e0);
          auVar43 = vectorPermute(auVar48,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 |
                                          auVar43 << 0x60,_DAT_00480900);
          auVar43 = vectorPermute(auVar43,*(undefined1 (*) [16])(puVar13 + 0x20),_DAT_00480910);
          *(undefined1 (*) [16])(puVar13 + 8) = auVar39;
          *(undefined4 *)((int)puVar13 + 0x6c) = *(undefined4 *)((int)puVar13 + 0x11c);
          *(undefined4 *)(puVar13 + 0xd) = *(undefined4 *)(puVar13 + 0x23);
          *(undefined4 *)((int)puVar13 + 100) = *(undefined4 *)((int)puVar13 + 0x114);
          *(undefined4 *)(puVar13 + 0xc) = *(undefined4 *)(puVar13 + 0x22);
          *(undefined1 (*) [16])(puVar13 + 10) = auVar43;
          mobyutil::CollDamageMobyDirect
                    (pMVar15,0x3f800000,puVar13[8],puVar13[9],puVar13[10],puVar13[0xb],puVar13[0xc],
                     puVar13[0xd]);
        }
        moby->state = '\x02';
      }
      iVar19 = fastfunc::FastDecTimerS32(uVar26 + 0x14);
      if (iVar19 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 3) {
    mobyutil::MB_SpawnExplosionSparks
              (0x3fd0000000000000,0x402a000000000000,lVar17,lVar17 + 0x10,&DAT_00480870,0);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00481324  ns=mobyupdate_helpers  size=0x14
// sig: undefined M834_00481324(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M834_00481324(void)

{
  DAT_008acd08 = 0x10000;
  return;
}



//==== 00481350  ns=mobyupdate_unsorted  size=0x1cc
// sig: undefined UpdateMoby_834(MobyInstance * moby)
// callers(0): 
// callees(4): 00110b70 mobyutil::MB_IsPntInCuboid; 0015ea84 space::ChangeLevel; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870

/* Moby 834 */

void mobyupdate_unsorted::UpdateMoby_834(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  
  pvVar3 = moby->pVar;
  bVar1 = moby->state;
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
  if (bVar1 == 0) {
    g_hasClank = 1;
    FUN_004d3720(moby,(int)pvVar3 + 0x20);
    uVar2 = 0x437f0000;
    if (MiscLevelFlags.veldinClankCsTrigger != 0) {
      uVar2 = 0x40400000;
      *(undefined2 *)((int)pvVar3 + 0x56) = 1;
      *(undefined2 *)((int)pvVar3 + 0x24) = 0;
    }
    *(undefined4 *)((int)pvVar3 + 0x2c) = uVar2;
    MiscLevelFlags.veldinClankCsTrigger = 1;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if (*(short *)((int)pvVar3 + 0x56) != 0) {
      iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x60));
      uVar2 = 0x40400000;
      if (iVar4 != 0) {
        uVar2 = 0x41800000;
      }
      *(undefined4 *)((int)pvVar3 + 0x2c) = uVar2;
    }
    iVar4 = FUN_004d3870(moby,(int)pvVar3 + 0x20);
    if (iVar4 != 0) {
      moby->state = '\x02';
      *(undefined4 *)((int)pvVar3 + 0x2c) = 0x40400000;
    }
    if ((3 < *(short *)((int)pvVar3 + 0x24)) && (g_gameMode != GAME_MODE_SPACE)) {
      space::ChangeLevel(Novalis);
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
  }
  return;
}



//==== 0048151c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M835_0048151c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M835_0048151c(void)

{
  DAT_008acd78 = 0x10000;
  return;
}



//==== 00481568  ns=mobyupdate_unsorted  size=0x488
// sig: undefined UpdateMoby_835(MobyInstance * moby)
// callers(0): 
// callees(11): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0010581c mobyutil::SetCollDamIn; 00105f40 mobyutil::CollWaterHeight; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010e030 mobyutil::MB_genericExplosion; 00116a68 mobyutil::MB_BobMotion; 0012a440 partupd::SpawnPart_34

/* Moby 835 */

void mobyupdate_unsorted::UpdateMoby_835(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  float fVar18;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  float afStack_e0 [4];
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [48];
  int local_90 [4];
  
  pvVar1 = moby->pVar;
  dVar8 = 0.0;
  iVar2 = mobyutil::MB_damage(moby,0x230000,0);
  mobyutil::MB_HandleDamage(moby,iVar2,ZEXT48(pvVar1) + 0x20,0,local_90,0,0,4);
  if (((local_90[0] < 2) || (iVar2 == 0)) || (*(short *)(*(int *)(iVar2 + 0x20) + 0xa6) == 0x343)) {
    if (moby->state == 0) {
      dVar8 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar1 + 0x60) = (float)dVar8;
      *(undefined4 *)((int)pvVar1 + 100) = 0;
      moby->state = '\x01';
    }
    else if (moby->state < 2) {
      mobyutil::MB_BobMotion
                (DAT_008acd9c,DAT_008acda0 * 0.017453292 * mobyutil::g_FrameTime,moby,
                 (float *)((int)pvVar1 + 0x60),(float *)((int)pvVar1 + 100));
      dVar9 = 1.0;
      mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_c0,moby,0x10001);
      if ((((DAT_00969f1c == moby) || (DAT_00969f20 == moby)) ||
          (iVar2 = collproc::CollMobySphere(dVar9,local_f0), iVar2 != 0)) &&
         ((CollOutput.pMoby != (MobyInstance *)0x0 && ((CollOutput.pMoby)->oClass != MINE_0343)))) {
        dVar10 = 2.0;
        dVar11 = 4.0;
        mobyutil::MB_genericExplosion
                  (dVar8,dVar8,0x4000000000000000,dVar9,0x4010000000000000,dVar9,0x401c000000000000,
                   moby,local_100,0,1,0xffffffffffffffff,3,3,5);
        (moby->pos).z = (float)((double)(moby->pos).z + dVar9);
        fVar18 = mobyutil::CollWaterHeight(&(moby->pos).x,afStack_e0);
        dVar3 = (double)fVar18;
        iVar2 = 0;
        (moby->pos).z = (float)((double)(moby->pos).z - dVar9);
        dVar12 = -1.0;
        dVar13 = -0.5;
        dVar14 = 8.0;
        dVar15 = 0.05000000074505806;
        dVar16 = 0.10000000149011612;
        dVar17 = 210000.0;
        do {
          local_d0 = 0.0;
          local_cc = 0.0;
          local_c8 = 0.0;
          local_c4 = 0;
          dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar9);
          local_d0 = (float)dVar4;
          dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar9);
          local_cc = (float)dVar4;
          dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar10);
          local_c8 = (float)dVar4;
          dVar4 = (double)mobyutil::MB_randRangeFloat
                                    ((float)((double)mobyutil::g_FrameTime * dVar11),
                                     (float)((double)mobyutil::g_FrameTime * dVar14));
          dVar7 = (double)SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc);
          fVar18 = (float)(dVar4 / dVar7);
          dVar4 = dVar8;
          if (dVar8 - dVar7 < 0.0) {
            dVar4 = (double)(local_d0 * fVar18);
          }
          dVar5 = dVar8;
          if (dVar8 - dVar7 < 0.0) {
            dVar5 = (double)(local_cc * fVar18);
          }
          dVar6 = dVar8;
          if (dVar8 - dVar7 < 0.0) {
            dVar6 = (double)(local_c8 * fVar18);
          }
          if (dVar7 - dVar8 < 0.0) {
            dVar4 = (double)(local_d0 * fVar18);
          }
          if (dVar7 - dVar8 < 0.0) {
            dVar5 = (double)(local_cc * fVar18);
          }
          if (dVar7 - dVar8 < 0.0) {
            dVar6 = (double)(local_c8 * fVar18);
          }
          local_d0 = (float)dVar4;
          local_cc = (float)dVar5;
          local_c8 = (float)dVar6;
          dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar16);
          partupd::SpawnPart_34((double)(float)(dVar4 * dVar17),dVar3,(Vec4 *)&moby->pos,&local_d0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x96);
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else {
    mobyutil::MB_genericExplosion
              (dVar8,dVar8,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,
               0x3ff0000000000000,0x401c000000000000,moby,local_100,0,1,0xffffffffffffffff,3,3,5);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004819f0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M838_004819f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M838_004819f0(void)

{
  DAT_008acdf0 = 0x10000;
  return;
}



//==== 00481a10  ns=mobyupdate_unsorted  size=0x26c
// sig: undefined UpdateMoby_838(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 0015d12c sound::PlayMobySound

/* Moby 838 */

void mobyupdate_unsorted::UpdateMoby_838(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined4 *puVar6;
  MobyInstance *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  
  bVar1 = moby->state;
  piVar5 = (int *)moby->pVar;
  if (bVar1 == 0) {
    moby->enabled = '\0';
    moby->state = '\x01';
    puVar6 = (undefined4 *)piVar5[1];
    moby->modeBits = moby->modeBits | DISABLED;
    *puVar6 = 0xffffffff;
    return;
  }
  if (bVar1 < 2) {
    if (DAT_010d9d40 != worldUpdateTime) {
      DAT_010d9d40 = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M841_00481ca8_0070ef38,moby);
    }
    fVar2 = (moby->pos).y;
    fVar3 = (moby->pos).x;
    fVar8 = fVar2 - GameCamera.posY;
    fVar9 = fVar3 - GameCamera.posX;
    fVar4 = (moby->pos).z;
    fVar10 = fVar4 - GameCamera.posZ;
    fVar8 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
    if (fVar8 < 64.0) {
      iVar12 = *(int *)piVar5[1];
      if (((iVar12 < 0) || (sound::g_SoundChannels[iVar12].pMoby == (MobyInstance *)0x0)) ||
         ((sound::g_SoundChannels[iVar12].pMoby)->oClass != ELECTRIC_GATE)) {
        iVar12 = sound::PlayMobySound(0,4,moby);
        *(int *)piVar5[1] = iVar12;
      }
      else {
        pMVar7 = sound::g_SoundChannels[iVar12].pMoby;
        if ((pMVar7 != moby) &&
           ((pMVar7->state != '\x01' ||
            (fVar9 = (pMVar7->pos).y - GameCamera.posY, fVar10 = (pMVar7->pos).x - GameCamera.posX,
            fVar11 = (pMVar7->pos).z - GameCamera.posZ,
            fVar8 < SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9))))) {
          sound::g_SoundChannels[iVar12].pMoby = moby;
          iVar12 = *(int *)piVar5[1];
          sound::g_SoundChannels[iVar12].pos[0] = fVar3;
          sound::g_SoundChannels[iVar12].pos[1] = fVar2;
          sound::g_SoundChannels[iVar12].pos[2] = fVar4;
          sound::g_SoundChannels[iVar12].pos[3] = (moby->pos).w;
        }
      }
    }
    if ((-1 < *piVar5) && (MobyInstance[*piVar5].setByGroup != '\0')) {
      sound::PlayMobySound(1,0,moby);
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
    }
    return;
  }
  if (2 < bVar1) {
    return;
  }
  if (moby->collision == (ushort *)0x0) {
    return;
  }
  moby->collision = (ushort *)0x0;
  return;
}



//==== 00481ca8  ns=mobyupdate_helpers  size=0x444
// sig: undefined M841_00481ca8(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M841_00481ca8(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  f32 fVar3;
  ushort uVar4;
  ulonglong *puVar5;
  int iVar6;
  uint uVar7;
  MobyInstance *pMVar8;
  ulonglong uVar9;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar10;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  ulonglong unaff_r23;
  ulonglong uVar22;
  ulonglong unaff_r24;
  longlong lVar23;
  ulonglong unaff_r25;
  ulonglong uVar24;
  ulonglong unaff_r26;
  int iVar26;
  longlong lVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ushort *puVar28;
  ulonglong in_LR;
  double dVar29;
  double dVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar9 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar9 - 0x6c0);
  *puVar5 = uVar9;
  puVar5[0xda] = in_LR;
  puVar5[0xd6] = in_f30;
  puVar5[0xd7] = in_f31;
  puVar5[0xd4] = unaff_r30;
  puVar5[0xd5] = unaff_r31;
  uVar7 = worldUpdateTime;
  puVar5[0xd3] = unaff_r29;
  puVar5[0xd2] = unaff_r28;
  puVar5[0xd1] = unaff_r27;
  puVar5[0xd0] = unaff_r26;
  puVar5[0xcf] = unaff_r25;
  puVar5[0xce] = unaff_r24;
  puVar5[0xcd] = unaff_r23;
  dVar29 = (double)fastfunc::FastIntToDouble(uVar7 & 0x3f);
  dVar29 = (double)((float)(dVar29 * 0.01587301678955555) * 6.28318);
  lVar27 = 0;
  do {
    dVar32 = (double)(float)(3.141592502593994 - dVar29);
    if (dVar29 - (double)(float)(3.141592502593994 - dVar29) < 0.0) {
      dVar32 = dVar29;
    }
    dVar30 = (double)(float)(-3.141592502593994 - dVar29);
    if ((double)(float)(-3.141592502593994 - dVar29) - dVar32 < 0.0) {
      dVar30 = dVar32;
    }
    dVar32 = (double)(float)(dVar30 * dVar30);
    dVar34 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar30));
    dVar33 = (double)(float)(dVar32 * dVar34);
    dVar32 = (double)(((float)(dVar32 * dVar33) * 2.601887e-06 +
                       (float)(dVar33 * -0.0001980741071747616 +
                              (double)(float)(dVar34 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar32 * dVar30) *
                                                             -0.16666656732559204 + dVar30))) + 1.0)
                     * 0.5);
    uVar11 = fastfunc::FastLerpColor(dVar32,DAT_008ace20,DAT_008ace24);
    uVar12 = fastfunc::FastLerpColor(dVar32,DAT_008ace28,DAT_008ace2c);
    dVar29 = (double)fastfunc::FastWrapRot((float)dVar29,1.2566371);
    iVar26 = 0;
    lVar23 = uVar9 - 0x6c0;
    do {
      uVar10 = draw::GetEffectTex(DAT_008ace88);
      uVar22 = lVar23 + lVar27 * 0x90;
      uVar18 = uVar22 & 0xffffffff;
      iVar13 = (int)uVar22;
      *(undefined8 *)(iVar13 + 0x128) = uVar10;
      uVar10 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      *(undefined8 *)(iVar13 + 0x130) = uVar10;
      uVar10 = FUN_00502f08(0,0,0,0,0,0);
      *(undefined8 *)(iVar13 + 0x120) = uVar10;
      uVar10 = idol_draw::PackCmd(DAT_010d9d48,DAT_008ace50,DAT_010d9d4c,DAT_008ace54,0x80);
      *(undefined8 *)(iVar13 + 0x138) = uVar10;
      iVar14 = (int)(lVar27 + 1);
      iVar13 = 0;
      puVar5[0xca] = (longlong)iVar14;
      puVar17 = &DAT_008ace90;
      puVar15 = &DAT_008ace64;
      puVar16 = &DAT_008ace68;
      puVar20 = (undefined4 *)0x8aced0;
      uVar22 = uVar22 + 0xb0 & 0xffffffff;
      uVar31 = puVar5[0xca];
      uVar21 = uVar18;
      uVar24 = uVar18;
      do {
        uVar1 = *puVar16;
        *(undefined4 *)((int)uVar24 + 0x100) = *puVar15;
        *(undefined4 *)((int)uVar24 + 0x104) = uVar1;
        iVar6 = (int)uVar21;
        puVar19 = (undefined4 *)uVar22;
        if (iVar26 == 0) {
          *(undefined4 *)((int)uVar18 + 0xf0) = uVar12;
          *puVar19 = *puVar20;
          puVar19[1] = puVar20[1];
          puVar19[2] = puVar20[2];
          puVar19[3] = puVar20[3];
          fVar2 = *(float *)(iVar6 + 0xb8);
        }
        else {
          *(undefined4 *)((int)uVar18 + 0xf0) = uVar11;
          *puVar19 = *puVar17;
          puVar19[1] = puVar17[1];
          puVar19[2] = puVar17[2];
          puVar19[3] = puVar17[3];
          fVar2 = *(float *)(iVar6 + 0xb8);
        }
        iVar13 = iVar13 + 1;
        uVar22 = uVar22 + 0x10;
        puVar15 = puVar15 + 2;
        uVar24 = uVar24 + 8;
        puVar20 = puVar20 + 4;
        puVar16 = puVar16 + 2;
        uVar18 = uVar18 + 4;
        puVar17 = puVar17 + 4;
        *(float *)(iVar6 + 0xb8) = fVar2 + (float)(longlong)uVar31;
        uVar21 = uVar21 + 0x10;
      } while (iVar13 < 4);
      iVar26 = iVar26 + 1;
      lVar23 = lVar23 + 0x2d0;
    } while (iVar26 < 2);
    lVar27 = lVar27 + 1;
  } while (iVar14 < 5);
  lVar27 = uVar9 - 0x650;
  puVar28 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  do {
    uVar7 = *puVar28 & 0x7fff;
    if ((MobyInstance[uVar7].oClass == ELECTRIC_GATE) && (MobyInstance[uVar7].state == '\x01')) {
      fastfunc::FastMtxCopyNoTranslate(lVar27,&MobyInstance[uVar7].transform);
      pMVar8 = MobyInstance;
      lVar25 = uVar9 - 0x610;
      lVar23 = uVar9 - 0x340;
      iVar26 = 0;
      *(f32 *)(puVar5 + 0x14) = MobyInstance[uVar7].pos.x;
      *(f32 *)((int)puVar5 + 0xa4) = pMVar8[uVar7].pos.y;
      fVar3 = pMVar8[uVar7].pos.z;
      *(undefined4 *)((int)puVar5 + 0xac) = 0x3f800000;
      *(f32 *)(puVar5 + 0x15) = fVar3;
      do {
        draw::FastDrawQuad(lVar25,lVar27,0,EffectTexHeaders,9);
        draw::FastDrawQuad(lVar23,lVar27,0,EffectTexHeaders,9);
        iVar26 = iVar26 + 1;
        lVar25 = lVar25 + 0x90;
        lVar23 = lVar23 + 0x90;
      } while (iVar26 < 5);
    }
    uVar4 = *puVar28;
    puVar28 = puVar28 + 1;
  } while (-1 < (short)uVar4);
  return;
}



//==== 004820ec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M841_004820ec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M841_004820ec(void)

{
  DAT_008acf5c = 0x10000;
  return;
}



//==== 00482108  ns=mobyupdate_unsorted  size=0x334
// sig: undefined UpdateMoby_841(MobyInstance * moby)
// callers(0): 
// callees(2): 00110b70 mobyutil::MB_IsPntInCuboid; 005027bc fastfunc::FastLerpColor

/* Moby 841 */

void mobyupdate_unsorted::UpdateMoby_841(MobyInstance *moby)

{
  byte bVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)moby->pVar;
  iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)puVar2[10]);
  bVar1 = moby->state;
  if (iVar4 != 0) {
    hero::g_heroWaterZ = 0x43fa0000;
  }
  if (bVar1 == 0) {
    *(u8 *)(puVar2 + 8) = levelFog.r;
    *(u8 *)((int)puVar2 + 0x21) = levelFog.g;
    *(u8 *)((int)puVar2 + 0x22) = levelFog.b;
    *puVar2 = LevelFogNearDist;
    puVar2[2] = LevelFogFarDist;
    puVar2[1] = LevelFogNearIntensity;
    fVar3 = LevelFogFarIntensity;
    *(undefined1 *)((int)puVar2 + 0x23) = 0x49;
    puVar2[3] = fVar3;
    *(undefined1 *)(puVar2 + 9) = 0x53;
    *(undefined1 *)((int)puVar2 + 0x25) = 0xc;
    puVar2[4] = 0;
    puVar2[6] = 0x47040000;
    puVar2[5] = 0x437f0000;
    puVar2[7] = 0;
    uVar5 = CONCAT13(DAT_0073a963,CONCAT12(DAT_0073a962,CONCAT11(DAT_0073a961,DAT_0073a960)));
    puVar2[0xd] = 0x40408070;
    puVar2[0xc] = uVar5;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)puVar2[0xb]);
    if (iVar4 != 0) {
      levelFog.r = *(u8 *)((int)puVar2 + 0x23);
      levelFog.g = *(u8 *)(puVar2 + 9);
      levelFog.b = *(u8 *)((int)puVar2 + 0x25);
      LevelFogNearDist = puVar2[4];
      LevelFogFarDist = (float)puVar2[6];
      LevelFogNearIntensity = (float)puVar2[5];
      LevelFogFarIntensity = (float)puVar2[7];
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 3) &&
          (iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)puVar2[10]), iVar4 != 0
          )) {
    levelFog.r = *(u8 *)(puVar2 + 8);
    levelFog.g = *(u8 *)((int)puVar2 + 0x21);
    levelFog.b = *(u8 *)((int)puVar2 + 0x22);
    LevelFogNearDist = *puVar2;
    LevelFogFarDist = (float)puVar2[2];
    LevelFogNearIntensity = (float)puVar2[1];
    LevelFogFarIntensity = (float)puVar2[3];
    moby->state = '\x01';
  }
  iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)puVar2[0xe]);
  if (iVar4 != 0) {
    iVar4 = puVar2[0xe];
    uVar5 = fastfunc::FastLerpColor
                      ((double)((Cuboids[iVar4].imatrix.v2.x *
                                 (g_heroPosition.z - Cuboids[iVar4].pos.z) +
                                 Cuboids[iVar4].imatrix.v0.x *
                                 (g_heroPosition.x - Cuboids[iVar4].pos.x) +
                                 Cuboids[iVar4].imatrix.v1.x *
                                 (g_heroPosition.y - Cuboids[iVar4].pos.y) + 1.0) * 0.5),puVar2[0xc]
                       ,puVar2[0xd]);
    DAT_0073a960 = (undefined1)uVar5;
    DAT_0073a963 = (undefined1)((uint)uVar5 >> 0x18);
    DAT_0073a961 = (undefined1)((uint)uVar5 >> 8);
    DAT_0073a962 = (undefined1)((uint)uVar5 >> 0x10);
  }
  return;
}



//==== 0048243c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M843_0048243c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M843_0048243c(void)

{
  DAT_008acfcc = 0x10000;
  return;
}



//==== 00482470  ns=mobyupdate_unsorted  size=0x468
// sig: undefined UpdateMoby_843(MobyInstance * moby)
// callers(0): 
// callees(2): 00109c30 mobyutil::OrganicDelt; 0015d12c sound::PlayMobySound

/* Moby 843 */

void mobyupdate_unsorted::UpdateMoby_843(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Cuboid *pCVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float local_50;
  float local_4c;
  
  pCVar15 = Cuboids;
  bVar1 = moby->state;
  pfVar9 = (float *)moby->pVar;
  MVar8 = moby->modeBits;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      fVar10 = pfVar9[4];
      fVar2 = Cuboids[(int)fVar10].pos.x;
      (moby->pos).x = fVar2;
      fVar3 = pCVar15[(int)fVar10].pos.y;
      (moby->pos).y = fVar3;
      fVar4 = pCVar15[(int)fVar10].pos.z;
      (moby->pos).z = fVar4;
      (moby->pos).w = pCVar15[(int)fVar10].pos.w;
      (moby->rotation).z = pCVar15[(int)fVar10].rot.z;
      fVar5 = pCVar15[(int)fVar10].matrix.v1.y;
      fVar6 = pCVar15[(int)fVar10].matrix.v1.x;
      fVar10 = pCVar15[(int)fVar10].matrix.v1.z;
      fVar7 = 0.0;
      fVar14 = SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar13 = pfVar9[6] / fVar14;
      fVar12 = fVar7;
      if (0.0 - fVar14 < 0.0) {
        fVar12 = fVar10 * fVar13;
      }
      fVar11 = fVar7;
      if (0.0 - fVar14 < 0.0) {
        fVar11 = fVar5 * fVar13;
      }
      if (0.0 - fVar14 < 0.0) {
        fVar7 = fVar6 * fVar13;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar12 = fVar10 * fVar13;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar11 = fVar5 * fVar13;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar7 = fVar6 * fVar13;
      }
      if (pfVar9[7] != 0.0) {
        fVar7 = -fVar7;
        fVar11 = -fVar11;
        fVar12 = -fVar12;
        moby->modeBits = MVar8 | MIRROR;
      }
      moby->state = '\x01';
      (moby->pos).x = fVar2 + fVar7;
      (moby->pos).y = fVar3 + fVar11;
      (moby->pos).z = fVar4 + fVar12;
    }
    else if (MobyInstance[(int)pfVar9[5]].setByGroup != '\0') {
      sound::PlayMobySound(0,0,moby);
      moby->state = '\x02';
      pfVar9[3] = 0.0;
      pfVar9[2] = 0.0;
      pfVar9[1] = 0.0;
      *pfVar9 = 0.0;
    }
  }
  else if (bVar1 < 3) {
    fVar5 = pfVar9[4];
    dVar22 = 0.0;
    local_4c = 0.0;
    fVar2 = Cuboids[(int)fVar5].matrix.v1.y;
    fVar3 = Cuboids[(int)fVar5].matrix.v1.x;
    fVar4 = Cuboids[(int)fVar5].matrix.v1.z;
    fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar23 = (double)Cuboids[(int)fVar5].pos.w;
    fVar10 = (pfVar9[6] * 3.0) / fVar6;
    dVar24 = dVar22;
    if (0.0 - fVar6 < 0.0) {
      dVar24 = (double)(fVar4 * fVar10);
    }
    dVar17 = dVar22;
    if (0.0 - fVar6 < 0.0) {
      dVar17 = (double)(fVar2 * fVar10);
    }
    dVar18 = dVar22;
    if (0.0 - fVar6 < 0.0) {
      dVar18 = (double)(fVar3 * fVar10);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar24 = (double)(fVar4 * fVar10);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar17 = (double)(fVar2 * fVar10);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar18 = (double)(fVar3 * fVar10);
    }
    if (pfVar9[7] != 0.0) {
      dVar18 = -dVar18;
      dVar17 = -dVar17;
      dVar24 = -dVar24;
    }
    dVar21 = (double)((float)((double)Cuboids[(int)fVar5].pos.y + dVar17) - (moby->pos).y);
    dVar20 = (double)((float)((double)Cuboids[(int)fVar5].pos.x + dVar18) - (moby->pos).x);
    dVar19 = (double)((float)((double)Cuboids[(int)fVar5].pos.z + dVar24) - (moby->pos).z);
    local_50 = SQRT(pfVar9[2] * pfVar9[2] + *pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1]);
    fVar2 = SQRT((float)(dVar19 * dVar19 +
                        (double)(float)(dVar20 * dVar20 + (double)(float)(dVar21 * dVar21))));
    dVar18 = (double)fVar2;
    mobyutil::OrganicDelt
              (fVar2,DAT_0071f418 * 20.0,DAT_0071f418 * 30.0,mobyutil::g_FrameTime * 10.0,&local_4c,
               0x720000,&local_50);
    dVar17 = (double)(float)((double)local_50 / dVar18);
    pfVar9[3] = (float)dVar23;
    dVar24 = dVar22;
    if (dVar22 - dVar18 < 0.0) {
      dVar24 = (double)(float)(dVar21 * dVar17);
    }
    dVar23 = dVar22;
    if (dVar22 - dVar18 < 0.0) {
      dVar23 = (double)(float)(dVar20 * dVar17);
    }
    dVar16 = dVar22;
    if (dVar22 - dVar18 < 0.0) {
      dVar16 = (double)(float)(dVar19 * dVar17);
    }
    if (dVar18 - dVar22 < 0.0) {
      dVar24 = (double)(float)(dVar21 * dVar17);
    }
    if (dVar18 - dVar22 < 0.0) {
      dVar23 = (double)(float)(dVar20 * dVar17);
    }
    if (dVar18 - dVar22 < 0.0) {
      dVar16 = (double)(float)(dVar19 * dVar17);
    }
    pfVar9[1] = (float)dVar24;
    *pfVar9 = (float)dVar23;
    pfVar9[2] = (float)dVar16;
    (moby->pos).x = (float)((double)(moby->pos).x + dVar23);
    (moby->pos).y = (moby->pos).y + pfVar9[1];
    (moby->pos).z = (moby->pos).z + pfVar9[2];
    if (dVar18 < 0.009999999776482582) {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    fVar2 = pfVar9[4];
    dVar24 = 5.900000095367432;
    mobyutil::OrganicDelt
              (Cuboids[(int)fVar2].pos.z - 5.9,DAT_0071f418 * 20.0,DAT_0071f418 * 40.0,
               mobyutil::g_FrameTime * 10.0,&(moby->pos).z,0x720000,pfVar9 + 2);
    if ((moby->pos).z < (float)((double)pCVar15[(int)fVar2].pos.z - dVar24)) {
      moby->state = '\x04';
    }
  }
  return;
}



//==== 004828f8  ns=mobyupdate_helpers  size=0x2fc
// sig: undefined M844_004828f8(void)
// callers(1): 00483078 mobyupdate_unsorted::UpdateMoby_844
// callees(2): 0010a2e0 mobyutil::OrganicDeltAng; 00502578 fastfunc::FastWrapRot

double mobyupdate_helpers::M844_004828f8(double param_1,double param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint unused;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  
  iVar1 = *(int *)(param_3 + 0x78);
  unused = g_standingOnMoby;
  if ((g_standingOnMoby == param_3) &&
     (unused = (uint)g_framesNotGrounded, g_framesNotGrounded == 0)) {
    fVar16 = g_heroPosition.y - *(float *)(param_3 + 0x14);
    fVar2 = g_heroPosition.x - *(float *)(param_3 + 0x10);
    fVar3 = g_heroPosition.z - *(float *)(param_3 + 0x18);
    dVar15 = -(double)(float)(param_1 *
                             (double)(fVar3 * *(float *)(param_3 + 0xd8) +
                                     fVar2 * *(float *)(param_3 + 0xd0) +
                                     fVar16 * *(float *)(param_3 + 0xd4)));
    dVar7 = (double)(float)(param_1 *
                           (double)(fVar3 * *(float *)(param_3 + 200) +
                                   fVar2 * *(float *)(param_3 + 0xc0) +
                                   fVar16 * *(float *)(param_3 + 0xc4)));
  }
  else {
    dVar15 = 0.0;
    dVar7 = dVar15;
  }
  dVar6 = (double)fastfunc::FastWrapRot(*(float *)(iVar1 + 0x98),*(float *)(iVar1 + 0xa0));
  *(float *)(iVar1 + 0x98) = (float)dVar6;
  dVar6 = (double)fastfunc::FastWrapRot(*(float *)(iVar1 + 0x9c),*(float *)(iVar1 + 0xa4));
  fVar3 = DAT_008ad01c;
  fVar16 = *(float *)(iVar1 + 0x98);
  dVar14 = 3.141592502593994;
  dVar13 = -3.141592502593994;
  dVar12 = -0.16666656732559204;
  dVar11 = 0.008333025500178337;
  dVar10 = -0.0001980741071747616;
  dVar9 = 2.601886990305502e-06;
  fVar2 = 3.1415925 - fVar16;
  if (fVar16 - (3.1415925 - fVar16) < 0.0) {
    fVar2 = fVar16;
  }
  fVar4 = -3.1415925 - fVar16;
  if ((-3.1415925 - fVar16) - fVar2 < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = fVar4 * fVar4;
  fVar16 = fVar5 * fVar5 * fVar4;
  *(float *)(iVar1 + 0x9c) = (float)dVar6;
  fVar2 = fVar5 * fVar16;
  dVar6 = (double)fastfunc::FastWrapRot
                            ((float)dVar15,
                             (float)((double)(fVar5 * fVar2 * 2.601887e-06 +
                                             fVar2 * -0.0001980741 +
                                             fVar16 * 0.0083330255 +
                                             fVar5 * fVar4 * -0.16666657 + fVar4) * param_1) * fVar3
                            );
  dVar8 = (double)*(float *)(iVar1 + 0x9c);
  dVar15 = (double)(float)(dVar14 - dVar8);
  if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
    dVar15 = dVar8;
  }
  dVar14 = (double)(float)(dVar13 - dVar8);
  if ((double)(float)(dVar13 - dVar8) - dVar15 < 0.0) {
    dVar14 = dVar15;
  }
  dVar15 = (double)(float)(dVar14 * dVar14);
  dVar8 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar14));
  dVar13 = (double)(float)(dVar15 * dVar8);
  dVar7 = (double)fastfunc::FastWrapRot
                            ((float)dVar7,
                             (float)((double)(float)((double)(float)(dVar15 * dVar13) * dVar9 +
                                                    (double)(float)(dVar13 * dVar10 +
                                                                   (double)(float)(dVar8 * dVar11 +
                                                                                  (double)(float)((
                                                  double)(float)(dVar15 * dVar14) * dVar12 + dVar14)
                                                  ))) * param_1) * DAT_008ad01c);
  dVar15 = 0.01745329238474369;
  mobyutil::OrganicDeltAng
            ((float)dVar6,(float)((double)DAT_008ad020 * param_2) * 0.017453292 * DAT_0071f418,
             (float)((double)DAT_008ad024 * param_2) * 0.017453292 * DAT_0071f418,
             DAT_008ad028 * 0.017453292 * mobyutil::g_FrameTime,(float *)(param_3 + 0x40),unused,
             (float *)(iVar1 + 0x90));
  fVar16 = mobyutil::OrganicDeltAng
                     ((float)dVar7,
                      (float)((double)(float)((double)DAT_008ad020 * param_2) * dVar15) *
                      DAT_0071f418,
                      (float)((double)(float)((double)DAT_008ad024 * param_2) * dVar15) *
                      DAT_0071f418,(float)((double)DAT_008ad028 * dVar15) * mobyutil::g_FrameTime,
                      (float *)(param_3 + 0x44),unused,(float *)(iVar1 + 0x94));
  return (double)fVar16;
}



//==== 00482c20  ns=mobyupdate_helpers  size=0x3f4
// sig: undefined M844_00482c20(void)
// callers(1): 00483078 mobyupdate_unsorted::UpdateMoby_844
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned; 0012ed58 partupd::SpawnPart_48; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

longlong mobyupdate_helpers::M844_00482c20(double param_1,double param_2)

{
  longlong lVar1;
  int iVar2;
  byte in_cr6;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [88];
  
  auVar8._0_4_ = (float)param_1;
  auVar8._4_4_ = (float)param_1;
  auVar8._8_4_ = (float)param_1;
  auVar8._12_4_ = (float)param_1;
  dVar4 = 0.0;
  auVar14._0_4_ = (float)param_2;
  auVar14._4_4_ = (float)param_2;
  auVar14._8_4_ = (float)param_2;
  auVar14._12_4_ = (float)param_2;
  fastfunc::FastIntToDouble(DAT_008acffc);
  lVar1 = 0x8b0000;
  auVar11 = ZEXT416(0xffffffff);
  auVar7 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar16 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar9 = loadVectorLeftIndexed(0xffffffffffffcff8,0x8b0000);
  auVar11 = loadVectorLeftIndexed(8,0x482bf4);
  auVar10 = vectorReciprocalEstimateFloatingPoint(auVar9);
  auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar15 = vectorSubtractFloatingPoint(auVar14,auVar8);
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
  auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  dVar5 = (double)(float)(param_2 - param_1);
  auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar10,auVar9,auVar12);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar10,auVar11,auVar7);
  auVar7 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar11 = ZEXT416(0);
  auVar10 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar9,auVar12);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar14);
  auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar9,auVar12);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar14,auVar13);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar15,auVar7);
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
             auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    iVar2 = 0;
    dVar6 = (double)((float)(param_2 + param_1) * 0.5);
    do {
      mobyutil::MB_randRangeFloat((float)dVar4,DAT_008ad014);
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)param_1,(float)param_2);
      mobyutil::MB_randRangeFloat((float)dVar6,(float)param_2);
      uVar3 = mobyutil::MB_randRangeFloat(DAT_008ad000,DAT_008ad004);
      mobyutil::MB_randRangeSigned(dVar4,(double)(longlong)DAT_008ad008);
      fastfunc::FastDoubleToInt();
      partupd::SpawnPart_48(uVar3,local_f0,local_100);
      iVar2 = iVar2 + 1;
      lVar1 = (longlong)iVar2;
    } while ((float)lVar1 < (float)(dVar5 / (double)DAT_008acff8));
  }
  return lVar1;
}



//==== 00483078  ns=mobyupdate_unsorted  size=0x1214
// sig: undefined UpdateMoby_844(MobyInstance * moby)
// callers(0): 
// callees(17): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned; 00105870 mobyutil::DamageSphereAtPos; 00105c08 mobyutil::CollDamageMobyDirect; 00109c30 mobyutil::OrganicDelt; 00112900 mobyutil::MB_GetOrientation; 001206e8 partupd::SpawnPart_2; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004828f8 mobyupdate_helpers::M844_004828f8; 00482c20 mobyupdate_helpers::M844_00482c20; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 844 */

void mobyupdate_unsorted::UpdateMoby_844(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar23;
  undefined8 uVar21;
  undefined4 uVar24;
  longlong lVar22;
  MobyInstance *pMVar25;
  longlong lVar26;
  float *pfVar28;
  longlong lVar27;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  byte bVar30;
  ulonglong in_LR;
  longlong lVar31;
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
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar42;
  ulonglong in_f18;
  double dVar43;
  ulonglong in_f19;
  double dVar44;
  ulonglong in_f20;
  double dVar45;
  ulonglong in_f21;
  double dVar46;
  ulonglong in_f22;
  double dVar47;
  ulonglong in_f23;
  double dVar48;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar49;
  ulonglong in_f30;
  undefined8 uVar50;
  double dVar51;
  ulonglong in_f31;
  undefined8 uVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar61 [16];
  float fVar62;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar22 = uVar19 - 0x260;
  puVar13 = (ulonglong *)lVar22;
  *puVar13 = uVar19;
  puVar13[0x4e] = in_LR;
  puVar13[0x3a] = in_f14;
  puVar13[0x3b] = in_f15;
  puVar13[0x3c] = in_f16;
  puVar13[0x3d] = in_f17;
  puVar13[0x3e] = in_f18;
  puVar13[0x3f] = in_f19;
  puVar13[0x40] = in_f20;
  puVar13[0x41] = in_f21;
  puVar13[0x42] = in_f22;
  puVar13[0x43] = in_f23;
  puVar13[0x44] = in_f24;
  puVar13[0x45] = in_f25;
  puVar13[0x46] = in_f26;
  puVar13[0x47] = in_f27;
  puVar13[0x48] = in_f28;
  puVar13[0x49] = in_f29;
  puVar13[0x4a] = in_f30;
  puVar13[0x4b] = in_f31;
  lVar17 = uVar19 - 0xf0;
  puVar18 = (undefined4 *)lVar17;
  puVar18[3] = in_vr31_32_3;
  puVar18[2] = in_vr31_32_2;
  puVar18[1] = in_vr31_32_1;
  *puVar18 = in_vr31_32_0;
  fVar62 = (moby->pos).x;
  puVar13[0x39] = unaff_r31;
  fVar2 = (moby->pos).y;
  puVar13[0x38] = unaff_r30;
  pvVar10 = moby->pVar;
  uVar29 = ZEXT48(pvVar10);
  fVar3 = (moby->pos).z;
  fVar4 = (moby->rotation).x;
  puVar13[0x2b] = (ulonglong)(double)fVar62;
  fVar5 = (moby->rotation).y;
  *(f32 *)(puVar13 + 0x10) = fVar4;
  puVar13[0x2a] = (ulonglong)(double)fVar2;
  fVar4 = (moby->rotation).z;
  puVar13[0x29] = (ulonglong)(double)fVar3;
  *(f32 *)((int)puVar13 + 0x84) = fVar5;
  fVar5 = (moby->rotation).w;
  bVar30 = moby->state;
  *(f32 *)(puVar13 + 0x11) = fVar4;
  puVar13[0x37] = unaff_r29;
  puVar13[0x36] = unaff_r28;
  puVar13[0x35] = unaff_r27;
  puVar13[0x34] = unaff_r26;
  puVar13[0x33] = unaff_r25;
  puVar13[0x32] = unaff_r24;
  puVar13[0x31] = unaff_r23;
  puVar13[0x30] = unaff_r22;
  *(f32 *)((int)puVar13 + 0x8c) = fVar5;
  if (bVar30 < 2) {
    iVar23 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar10 + 0xa8));
    if (iVar23 != 0) {
      iVar23 = *(int *)((int)pvVar10 + 0xa8);
      if (((iVar23 != -1) && (sound::g_SoundChannels[iVar23].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar23].state != '\0')) {
        sound::sound_Kill(iVar23);
      }
      *(undefined4 *)((int)pvVar10 + 0xa8) = 0xffffffff;
    }
  }
  else {
    iVar23 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar10 + 0xa8));
    if (iVar23 == 0) {
      iVar23 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar10 + 0xa8) = iVar23;
    }
  }
  uVar1 = moby->state;
  bVar30 = (uVar1 == '\x01') << 1;
  if (uVar1 == '\x04') {
    puVar13[0x2c] = (longlong)DAT_008acffc;
    mobyupdate_helpers::M844_00482c20
              ((double)*(float *)((int)pvVar10 + 0x78),
               (double)(*(float *)((int)pvVar10 + 0x68) *
                        (float)(longlong)(animationSpeed * ((float)(longlong)puVar13[0x2c] + 0.5)) +
                       (moby->pos).z),lVar20);
    fVar62 = (moby->pos).z;
    fVar3 = *(float *)((int)pvVar10 + 0x78) + 1.0;
    fVar2 = 0.0;
    if (fVar3 < fVar62) {
      fVar2 = DAT_008ad018;
    }
    uVar50 = 0x4024000000000000;
    if (fVar3 - fVar62 < 0.0) {
      uVar50 = 0x3ff0000000000000;
    }
    mobyupdate_helpers::M844_004828f8((double)fVar2,uVar50,lVar20);
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar10 + 0x60);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar10 + 100);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar10 + 0x68);
    uVar11 = (int)*(uint *)((int)pvVar10 + 0x78) >> 0x1f;
    *(float *)((int)pvVar10 + 0x68) =
         -(DAT_008acff0 * DAT_0071f418 - *(float *)((int)pvVar10 + 0x68));
    fVar4 = (moby->pos).z;
    uVar12 = (int)fVar4 >> 0x1f;
    if ((int)((uVar12 >> 1 ^ (uint)fVar4) - uVar12) <
        (int)((uVar11 >> 1 ^ *(uint *)((int)pvVar10 + 0x78)) - uVar11)) {
      sound::PlayMobySound(1,0,moby);
      auVar54 = ZEXT416(0xffffffff);
      auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      moby->state = '\x01';
      auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar54 = loadVectorLeftIndexed(lVar17,0x483014);
      auVar54 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar56 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      fVar4 = *(f32 *)((int)pvVar10 + 0x70);
      auVar54 = vectorMultiplyAddFloatingPoint
                          (auVar56,auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                           auVar55);
      auVar54 = vectorConvertToSignedFixedPointWordSaturate(auVar54,0);
      auVar54 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar24 = storeVectorElementWordIndexed
                         (auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,0x8c,uVar29)
      ;
      *(undefined4 *)((int)pvVar10 + 0x8cU & 0xfffffffc) = uVar24;
      (moby->pos).x = fVar4;
      (moby->pos).y = *(f32 *)((int)pvVar10 + 0x74);
      (moby->pos).z = *(f32 *)((int)pvVar10 + 0x78);
      (moby->pos).w = *(f32 *)((int)pvVar10 + 0x7c);
      dVar32 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar10 + 0x98) = (float)dVar32;
      dVar32 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar10 + 0x9c) = (float)dVar32;
      uVar52 = 0x4051800000000000;
      uVar50 = 0x405e000000000000;
      dVar32 = (double)mobyutil::MB_randRangeSigned(0x4051800000000000,0x405e000000000000);
      dVar49 = 0.01745329238474369;
      *(float *)((int)pvVar10 + 0xa0) =
           (float)(dVar32 * 0.01745329238474369) * mobyutil::g_FrameTime;
      dVar32 = (double)mobyutil::MB_randRangeSigned(uVar52,uVar50);
      *(float *)((int)pvVar10 + 0xa4) = (float)(dVar32 * dVar49) * mobyutil::g_FrameTime;
    }
  }
  else if (uVar1 == '\x03') {
    mobyupdate_helpers::M844_00482c20
              ((double)*(float *)((int)pvVar10 + 0x78),(double)(moby->pos).z,lVar20);
    mobyupdate_helpers::M844_004828f8((double)DAT_008ad018,0x3ff0000000000000,lVar20);
    fVar62 = mobyutil::OrganicDelt
                       (*(float *)((int)pvVar10 + 0x78) + *(float *)((int)pvVar10 + 0x7c),
                        DAT_008acff4 * DAT_0071f418,DAT_008acff4 * DAT_0071f418,
                        mobyutil::g_FrameTime * 20.0,&(moby->pos).z,0x8b0000,
                        (float *)((int)pvVar10 + 0x68));
    if (*(int *)((int)pvVar10 + 0x68) == 0) {
      fVar2 = *(float *)((int)pvVar10 + 0x84);
      fVar62 = fVar2 + 0.5;
      if (fVar2 - *(float *)((int)pvVar10 + 0x7c) < 0.0) {
        fVar62 = fVar2 - 0.5;
      }
      *(float *)((int)pvVar10 + 0x7c) = fVar62;
    }
    iVar23 = fastfunc::FastDecTimerS32((double)fVar62,uVar29 + 0x8c);
    if (iVar23 != 0) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (worldUpdateTime ==
        (((int)worldUpdateTime >> 2) +
        (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * 4) {
      puVar13[0xe] = 0;
      mobyutil::DamageSphereAtPos
                (0x3ff0000000000000,0x4000000000000000,0x3ff0000000000000,lVar20,lVar20 + 0x10,
                 &DAT_00483014,0x10000);
    }
    puVar13[0x2c] = (longlong)DAT_008acffc;
    dVar32 = 0.5;
    mobyupdate_helpers::M844_00482c20
              ((double)*(float *)((int)pvVar10 + 0x78),
               (double)(*(float *)((int)pvVar10 + 0x68) *
                        (float)(longlong)
                               (animationSpeed * (float)((double)(longlong)puVar13[0x2c] + 0.5)) *
                        0.5 + (moby->pos).z),lVar20);
    mobyupdate_helpers::M844_004828f8((double)DAT_008ad018,0x3ff0000000000000,lVar20);
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar10 + 0x60);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar10 + 100);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar10 + 0x68);
    fVar62 = -(DAT_008acff0 * DAT_0071f418 - *(float *)((int)pvVar10 + 0x68));
    *(float *)((int)pvVar10 + 0x68) = fVar62;
    if (fVar62 <= 0.0) {
      moby->state = '\x03';
      *(float *)((int)pvVar10 + 0x7c) = (float)((double)*(float *)((int)pvVar10 + 0x84) - dVar32);
      uVar24 = fastfunc::FastDoubleToInt((double)(animationSpeed * *(float *)((int)pvVar10 + 0x88)))
      ;
      *(undefined4 *)((int)pvVar10 + 0x8c) = uVar24;
    }
  }
  else if (uVar1 == '\x01') {
    dVar32 = 0.0;
    mobyupdate_helpers::M844_004828f8(0,0x4020000000000000,lVar20);
    if (((g_gameMode != GAME_MODE_NORMAL) ||
        (fVar62 = (moby->pos).y - g_heroPosition.y, fVar2 = (moby->pos).x - g_heroPosition.x,
        24.0 <= SQRT(fVar2 * fVar2 + fVar62 * fVar62))) ||
       (iVar23 = fastfunc::FastDecTimerS32(uVar29 + 0x8c), iVar23 == 0)) {
      auVar54 = ZEXT416(0xffffffff);
      auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      auVar56 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar54 = loadVectorLeftIndexed(0xffffffffffffcffc,0x8b0000);
      auVar55 = vectorConvertFromSignedFixedPointWord(auVar54,0);
      auVar54 = loadVectorLeftIndexed(0x24,0x483014);
      auVar54 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar61 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      auVar54 = ZEXT416(0xffffffff);
      auVar59 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar58 = loadVectorLeftIndexed(0x8c,uVar29);
      auVar54 = vectorAddFloatingPoint(auVar55,auVar61);
      auVar55 = loadVectorRightIndexed(0x9c,uVar29);
      dVar49 = 0.5;
      auVar54 = vectorMultiplyAddFloatingPoint(auVar57,auVar54,auVar56);
      auVar57 = vectorShiftLeftIntegerWord(auVar59,auVar59);
      auVar56 = vectorConvertFromSignedFixedPointWord(auVar58 | auVar55,0);
      auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar54,0);
      auVar54 = auVar56 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar55 = vectorConvertFromSignedFixedPointWord(auVar55,0);
      auVar55 = vectorMultiplyAddFloatingPoint(auVar55,auVar61,auVar57);
      auVar55 = auVar55 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                 auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60);
      if ((bool)(bVar30 >> 1 & 1)) {
        mobyupdate_helpers::M844_00482c20
                  ((double)*(float *)((int)pvVar10 + 0x78),
                   (double)(float)((double)DAT_008ad02c + (double)*(float *)((int)pvVar10 + 0x78)),
                   lVar20,0xfffffffffffff410,&DAT_00483014,0x8c);
        mobyupdate_helpers::M844_00482c20
                  ((double)*(float *)((int)pvVar10 + 0x78),
                   (double)(float)((double)DAT_008ad02c + (double)*(float *)((int)pvVar10 + 0x78)),
                   lVar20);
        uVar16 = DAT_008ad03c;
        uVar24 = DAT_008ad038;
        auVar54 = ZEXT416(0xffffffff);
        auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
        auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar54 = loadVectorLeftIndexed(0xffffffffffffcffc,0x8b0000);
        auVar56 = vectorConvertFromSignedFixedPointWord(auVar54,0);
        auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar54 = ZEXT416(0xffffffff);
        auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
        auVar59 = loadVectorLeftIndexed(0x8c,uVar29);
        auVar58 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar60 = loadVectorRightIndexed(0x9c,uVar29);
        auVar54 = vectorAddFloatingPoint(auVar56,auVar61);
        auVar56 = loadVectorLeftIndexed(0x28,0x483014);
        auVar55 = vectorMultiplyAddFloatingPoint(auVar57,auVar54,auVar55);
        auVar54 = auVar56 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar57 = vectorConvertFromSignedFixedPointWord(auVar59 | auVar60,0);
        auVar56 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
        auVar55 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar56 = vectorConvertFromSignedFixedPointWord(auVar56,0);
        auVar54 = vectorMultiplyAddFloatingPoint
                            (auVar56,auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                             auVar58);
        auVar54 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                   auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60);
        if ((bool)(bVar30 >> 1 & 1)) {
          dVar53 = 10.0;
          dVar51 = 20.0;
          dVar33 = (double)mobyutil::MB_randRangeFloat(10.0,20.0);
          uVar50 = fastfunc::FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
          dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar53,(float)dVar51);
          uVar52 = fastfunc::FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
          dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar53,40.0);
          uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar33 * (double)animationSpeed));
          dVar48 = 1.570796251296997;
          dVar47 = 3.141592502593994;
          iVar23 = 0;
          dVar46 = -3.141592502593994;
          dVar45 = -0.16666656732559204;
          dVar44 = 0.008333025500178337;
          dVar43 = -0.0001980741071747616;
          dVar42 = 2.601886990305502e-06;
          dVar53 = 0.75;
          dVar51 = 0.25;
          dVar33 = 1.0;
          do {
            dVar34 = (double)mobyutil::MB_randRot();
            dVar36 = (double)(float)(dVar34 + dVar48);
            *(undefined4 *)(puVar13 + 0x19) = 0;
            fVar2 = DAT_008ad034;
            fVar62 = DAT_008ad030;
            dVar35 = (double)(float)(dVar47 - dVar34);
            if (dVar34 - (double)(float)(dVar47 - dVar34) < 0.0) {
              dVar35 = dVar34;
            }
            dVar37 = (double)(float)(dVar47 - dVar36);
            if (dVar36 - (double)(float)(dVar47 - dVar36) < 0.0) {
              dVar37 = dVar36;
            }
            dVar41 = (double)(float)(dVar46 - dVar34);
            if ((double)(float)(dVar46 - dVar34) - dVar35 < 0.0) {
              dVar41 = dVar35;
            }
            dVar35 = (double)(float)(dVar46 - dVar36);
            if ((double)(float)(dVar46 - dVar36) - dVar37 < 0.0) {
              dVar35 = dVar37;
            }
            dVar34 = (double)(float)(dVar41 * dVar41);
            dVar36 = (double)(float)(dVar35 * dVar35);
            dVar39 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar41));
            dVar37 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar35));
            dVar38 = (double)(float)(dVar34 * dVar39);
            dVar40 = (double)(float)(dVar36 * dVar37);
            *(float *)((int)puVar13 + 0xc4) =
                 (float)((double)(float)((double)(float)(dVar34 * dVar38) * dVar42 +
                                        (double)(float)(dVar38 * dVar43 +
                                                       (double)(float)(dVar39 * dVar44 +
                                                                      (double)(float)((double)(float
                                                  )(dVar34 * dVar41) * dVar45 + dVar41)))) * dVar53)
            ;
            *(float *)(puVar13 + 0x18) =
                 (float)((double)(float)((double)(float)(dVar36 * dVar40) * dVar42 +
                                        (double)(float)(dVar40 * dVar43 +
                                                       (double)(float)(dVar37 * dVar44 +
                                                                      (double)(float)((double)(float
                                                  )(dVar36 * dVar35) * dVar45 + dVar35)))) * dVar53)
            ;
            dVar35 = (double)mobyutil::MB_randRangeFloat(fVar62,fVar2);
            fVar2 = *(float *)((int)puVar13 + 0xc4);
            fVar3 = *(float *)(puVar13 + 0x18);
            fVar6 = *(float *)(puVar13 + 0x19);
            dVar34 = (double)mobyutil::g_FrameTime;
            dVar36 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar2 * fVar2);
            *(undefined4 *)((int)puVar13 + 0xac) = *(undefined4 *)((int)puVar13 + 0xcc);
            fVar8 = DAT_008ad040;
            fVar62 = (float)((double)(float)(dVar35 * dVar34) / dVar36);
            dVar35 = dVar32;
            if (dVar32 - dVar36 < 0.0) {
              dVar35 = (double)(fVar3 * fVar62);
            }
            dVar34 = dVar32;
            if (dVar32 - dVar36 < 0.0) {
              dVar34 = (double)(fVar2 * fVar62);
            }
            dVar37 = dVar32;
            if (dVar32 - dVar36 < 0.0) {
              dVar37 = (double)(fVar6 * fVar62);
            }
            if (dVar36 - dVar32 < 0.0) {
              dVar35 = (double)(fVar3 * fVar62);
            }
            if (dVar36 - dVar32 < 0.0) {
              dVar34 = (double)(fVar2 * fVar62);
            }
            if (dVar36 - dVar32 < 0.0) {
              dVar37 = (double)(fVar6 * fVar62);
            }
            *(float *)(puVar13 + 0x14) = (float)dVar35;
            *(float *)((int)puVar13 + 0xa4) = (float)dVar34;
            *(float *)(puVar13 + 0x15) = (float)dVar37;
            dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar32,fVar8);
            fVar62 = *(float *)((int)puVar13 + 0xa4);
            fVar2 = *(float *)(puVar13 + 0x14);
            dVar37 = (double)SQRT(fVar2 * fVar2 + fVar62 * fVar62);
            dVar34 = (double)mobyutil::g_FrameTime;
            fVar3 = (moby->pos).x;
            fVar6 = (moby->pos).y;
            dVar41 = (double)(moby->pos).z;
            *(f32 *)((int)puVar13 + 0xcc) = (moby->pos).w;
            *(undefined4 *)((int)puVar13 + 0xbc) = *(undefined4 *)((int)puVar13 + 0xac);
            *(float *)(puVar13 + 0x17) = (float)(dVar35 * dVar34);
            *(float *)(puVar13 + 0x18) = fVar3 + *(float *)(puVar13 + 0x18);
            *(float *)((int)puVar13 + 0xc4) = fVar6 + *(float *)((int)puVar13 + 0xc4);
            *(float *)(puVar13 + 0x19) = (float)(dVar41 + (double)*(float *)(puVar13 + 0x19));
            *(float *)(puVar13 + 0x15) = (float)(dVar35 * dVar34);
            dVar36 = (double)(fVar2 * (float)(dVar32 / dVar37));
            dVar34 = (double)(fVar62 * (float)(dVar32 / dVar37));
            dVar35 = dVar32;
            if (dVar32 - dVar37 < 0.0) {
              dVar35 = dVar36;
            }
            dVar38 = dVar32;
            if (dVar32 - dVar37 < 0.0) {
              dVar38 = dVar34;
            }
            if (dVar37 - dVar32 < 0.0) {
              dVar35 = dVar36;
            }
            if (dVar37 - dVar32 < 0.0) {
              dVar38 = dVar34;
            }
            *(float *)(puVar13 + 0x16) = (float)dVar35;
            *(float *)((int)puVar13 + 0xb4) = (float)dVar38;
            dVar35 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(dVar41 - dVar51),(float)(dVar41 + dVar49));
            *(float *)(puVar13 + 0x19) = (float)dVar35;
            dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar33);
            *(float *)((int)puVar13 + 0xbc) = (float)dVar35;
            *(float *)((int)puVar13 + 0xac) = (float)dVar35;
            puVar13[0xe] = 0x30;
            partupd::SpawnPart_2
                      (uVar19 - 0x1a0,uVar19 - 0x1c0,uVar19 - 0x1b0,uVar24,uVar16,uVar50,uVar52,
                       uVar21);
            iVar23 = iVar23 + 1;
          } while (iVar23 < 0x14);
        }
      }
    }
    else {
      moby->state = '\x02';
      *(undefined4 *)((int)pvVar10 + 0x6c) = 0;
      *(undefined4 *)((int)pvVar10 + 100) = 0;
      *(undefined4 *)((int)pvVar10 + 0x60) = 0;
      *(float *)((int)pvVar10 + 0x68) =
           SQRT(*(float *)((int)pvVar10 + 0x80) * 2.0 * DAT_008acff0 * DAT_0071f418);
    }
  }
  else if (uVar1 == '\0') {
    auVar54 = ZEXT416(0xffffffff);
    auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
    auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    moby->state = '\x01';
    auVar54 = loadVectorLeftIndexed(lVar17,0x483014);
    auVar54 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar56 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar54 = vectorMultiplyAddFloatingPoint
                        (auVar56,auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                         auVar55);
    auVar54 = vectorConvertToSignedFixedPointWordSaturate(auVar54,0);
    auVar54 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar24 = storeVectorElementWordIndexed
                       (auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,0x8c,uVar29);
    *(undefined4 *)((int)pvVar10 + 0x8cU & 0xfffffffc) = uVar24;
    fVar4 = (moby->pos).x;
    *(undefined4 *)((int)pvVar10 + 0xa8) = 0xff;
    *(f32 *)((int)pvVar10 + 0x70) = fVar4;
    *(f32 *)((int)pvVar10 + 0x74) = (moby->pos).y;
    *(f32 *)((int)pvVar10 + 0x78) = (moby->pos).z;
    *(f32 *)((int)pvVar10 + 0x7c) = (moby->pos).w;
    dVar32 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar10 + 0x98) = (float)dVar32;
    dVar32 = (double)mobyutil::MB_randRot();
    *(float *)((int)pvVar10 + 0x9c) = (float)dVar32;
    uVar52 = 0x4051800000000000;
    uVar50 = 0x405e000000000000;
    dVar32 = (double)mobyutil::MB_randRangeSigned(0x4051800000000000,0x405e000000000000);
    dVar49 = 0.01745329238474369;
    *(float *)((int)pvVar10 + 0xa0) = (float)(dVar32 * 0.01745329238474369) * mobyutil::g_FrameTime;
    dVar32 = (double)mobyutil::MB_randRangeSigned(uVar52,uVar50);
    *(float *)((int)pvVar10 + 0xa4) = (float)(dVar32 * dVar49) * mobyutil::g_FrameTime;
    fVar62 = *(float *)((int)pvVar10 + 0x84) + 1.0;
    if (*(float *)((int)pvVar10 + 0x80) <= fVar62) {
      *(float *)((int)pvVar10 + 0x80) = fVar62;
    }
  }
  dVar32 = (double)(moby->pos).z;
  if (g_heroPosition.z < (float)(dVar32 - 2.0)) {
    fVar62 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    if (SQRT((fVar2 - g_heroPosition.x) * (fVar2 - g_heroPosition.x) +
             (fVar62 - g_heroPosition.y) * (fVar62 - g_heroPosition.y)) < DAT_008ad044) {
      fVar3 = g_heroPosition.y - fVar62;
      fVar6 = ABS(g_heroPosition.x - fVar2);
      fVar9 = ABS(fVar3);
      *(float *)((int)puVar13 + 0xfc) = g_heroPosition.x - fVar2;
      *(float *)(puVar13 + 0x20) = fVar3;
      *(float *)((int)puVar13 + 0x104) = fVar6 - fVar9;
      fVar3 = 0.0;
      uVar29 = (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x104) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1d) & 4;
      fVar8 = ABS(*(float *)((int)puVar13 + 0xfc));
      if (*(float *)((int)puVar13 + 0x104) - 0.0 < 0.0) {
        fVar8 = fVar9;
      }
      fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar7 = ABS(*(float *)(puVar13 + 0x20));
      if (*(float *)((int)puVar13 + 0x104) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      fVar6 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar14 = fVar3;
      if (0.0 < fVar8) {
        lVar17 = uVar19 - 0x250;
        lVar26 = uVar19 - 0x138;
        lVar27 = uVar19 - 0x128;
        lVar31 = 2;
        fVar8 = (fVar7 - fVar8) / (fVar7 + fVar8);
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0x134) = fVar8;
        *(float *)((int)puVar13 + 300) = fVar8;
        *(float *)(puVar13 + 0x26) = fVar8;
        *(float *)(puVar13 + 0x25) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar7;
        *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar8;
        *(float *)((int)puVar13 + 0x134) = *(float *)((int)puVar13 + 0x134) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar17 + 0x128) = *(float *)((int)lVar17 + 0x118) * fVar8 * fVar8;
          iVar23 = (int)lVar26;
          lVar17 = lVar17 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar8 * fVar8;
          lVar27 = lVar27 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar27 = uVar19 - 0x138;
        pfVar28 = (float *)&DAT_007358e0;
        lVar17 = lVar22;
        lVar26 = lVar27;
        do {
          fVar8 = *pfVar28;
          fVar7 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar17 + 0x128) = *(float *)((int)lVar17 + 0x128) * fVar8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar17 = lVar22;
        fVar8 = fVar3;
        do {
          iVar23 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar15 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          fVar8 = fVar8 + *(float *)(iVar23 + 0x128) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar14 = (fVar8 + 0.7853982) * fVar9 + fVar6;
      }
      fVar14 = fVar14 + 1.5707963;
      fVar62 = g_heroPosition.y - fVar62;
      fVar8 = ABS(g_heroPosition.x - fVar2);
      fVar9 = ABS(fVar62);
      fVar6 = 3.1415925 - fVar14;
      if (fVar14 - (3.1415925 - fVar14) < 0.0) {
        fVar6 = fVar14;
      }
      *(float *)(puVar13 + 0x1e) = g_heroPosition.x - fVar2;
      *(float *)(puVar13 + 0x1f) = fVar8 - fVar9;
      *(float *)((int)puVar13 + 0xf4) = fVar62;
      fVar62 = -3.1415925 - fVar14;
      if ((-3.1415925 - fVar14) - fVar6 < 0.0) {
        fVar62 = fVar6;
      }
      uVar29 = (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1d) & 4;
      fVar2 = fVar62 * fVar62;
      fVar6 = ABS(*(float *)(puVar13 + 0x1e));
      if (*(float *)(puVar13 + 0x1f) - 0.0 < 0.0) {
        fVar6 = fVar9;
      }
      fVar9 = fVar2 * fVar2 * fVar62;
      fVar7 = fVar2 * fVar9;
      fVar14 = ABS(*(float *)((int)puVar13 + 0xf4));
      if (*(float *)(puVar13 + 0x1f) - 0.0 < 0.0) {
        fVar14 = fVar8;
      }
      *(float *)(puVar13 + 0x1a) =
           (fVar2 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar9 * 0.0083330255 + fVar2 * fVar62 * -0.16666657 + fVar62) *
           0.2;
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar62 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      if (0.0 < fVar6) {
        lVar17 = uVar19 - 0x250;
        lVar27 = uVar19 - 0x148;
        lVar26 = uVar19 - 0x158;
        lVar31 = 2;
        fVar6 = (fVar14 - fVar6) / (fVar14 + fVar6);
        fVar8 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x114) = fVar6;
        *(float *)((int)puVar13 + 0x10c) = fVar6;
        *(float *)(puVar13 + 0x22) = fVar6;
        *(float *)(puVar13 + 0x21) = fVar6;
        fVar6 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar8;
        *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar6;
        *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar6 * fVar8;
        do {
          *(float *)((int)lVar17 + 0x108) = *(float *)((int)lVar17 + 0xf8) * fVar6 * fVar6;
          iVar23 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar27 = uVar19 - 0x158;
        pfVar28 = (float *)&DAT_007358e0;
        lVar17 = lVar22;
        lVar26 = lVar27;
        do {
          fVar6 = *pfVar28;
          fVar8 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar17 + 0x108) = *(float *)((int)lVar17 + 0x108) * fVar6;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar23 = (int)lVar22;
          iVar15 = (int)lVar27;
          lVar22 = lVar22 + 0x10;
          lVar27 = lVar27 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar23 + 0x108) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar2 + fVar62;
      }
      fVar2 = g_heroPosition.x;
      fVar62 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar62 = fVar3;
      }
      *(undefined4 *)(puVar13 + 0x1b) = 0;
      fVar8 = g_heroPosition.y;
      fVar6 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar62 < 0.0) {
        fVar6 = fVar62;
      }
      fVar62 = fVar6 * fVar6;
      fVar3 = fVar62 * fVar62 * fVar6;
      fVar9 = fVar62 * fVar3;
      *(float *)(puVar13 + 0x1c) = fVar2;
      fVar2 = g_heroPosition.z;
      *(float *)((int)puVar13 + 0xe4) = fVar8;
      fVar8 = g_heroPosition.w;
      *(float *)(puVar13 + 0x1d) = fVar2;
      *(float *)((int)puVar13 + 0xec) = fVar8;
      pMVar25 = g_heroMobyPtr;
      *(float *)((int)puVar13 + 0xd4) =
           (fVar62 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar3 * 0.0083330255 + fVar62 * fVar6 * -0.16666657 + fVar6) *
           0.2;
      *(float *)(puVar13 + 0x1d) = fVar2 + 0.75;
      mobyutil::CollDamageMobyDirect
                (0.0,pMVar25,moby,1,0x483014,(float *)(puVar13 + 0x1c),(float *)(puVar13 + 0x1a));
      dVar32 = (double)(moby->pos).z;
    }
  }
  fVar62 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  *(f32 *)((int)puVar13 + 0x9c) = (moby->pos).w;
  *(float *)(puVar13 + 0x12) = (float)((double)fVar62 - (double)puVar13[0x2b]);
  *(float *)(puVar13 + 0x13) = (float)(dVar32 - (double)puVar13[0x29]);
  *(float *)((int)puVar13 + 0x94) = (float)((double)fVar2 - (double)puVar13[0x2a]);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar10 + 0x20),(Vec4 *)(puVar13 + 0x12),uVar19 - 0x1e0,
             lVar20 + 0x40);
  iVar23 = *(int *)((int)pvVar10 + 0xac);
  if (iVar23 == 0) {
    pMVar25 = mobyfunc::CreateMoby(0x388);
    *(MobyInstance **)((int)pvVar10 + 0xac) = pMVar25;
    if (pMVar25 != (MobyInstance *)0x0) {
      pMVar25->updateDistance = '\0';
      *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) | 1;
      *(undefined2 *)(*(int *)((int)pvVar10 + 0xac) + 0x32) = 0;
      *(undefined1 *)(*(int *)((int)pvVar10 + 0xac) + 0x31) = 0;
      iVar23 = *(int *)((int)pvVar10 + 0xac);
      *(f32 *)(iVar23 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar23 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar23 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar23 + 0x1c) = (moby->pos).w;
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0xac));
    }
  }
  else {
    *(f32 *)(iVar23 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar23 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar23 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar23 + 0x1c) = (moby->pos).w;
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0xac));
  }
  return;
}



//==== 0048428c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M846_0048428c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M846_0048428c(void)

{
  DAT_008ad094 = 0x10000;
  return;
}



//==== 00484300  ns=mobyupdate_unsorted  size=0x674
// sig: undefined UpdateMoby_846(MobyInstance * moby)
// callers(0): 
// callees(13): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0010675c mobyutil::MB_damage; 0012f8c0 partupd::SpawnPart_53; 001523d8 respawn::SaveCheckpointMobyVar; 0015d12c sound::PlayMobySound; 003509b0 FUN_003509b0; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 846 */

void mobyupdate_unsorted::UpdateMoby_846(MobyInstance *moby)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar5;
  MobyInstance *pMVar6;
  undefined8 uVar4;
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
  double dVar18;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [32];
  
  iVar5 = mobyutil::MB_damage(moby,0xb30000,0);
  if (iVar5 == 0) {
    if (moby->setByGroup != '\0') {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    pMVar6 = mobyfunc::CreateMoby(DOOR_LEFT|ASTEROID_00D4);
    if (pMVar6 != (MobyInstance *)0x0) {
      uVar2 = moby->color;
      uVar3 = moby->light;
      pMVar6->drawDistance = 0x40;
      pMVar6->color = uVar2;
      pMVar6->light = uVar3;
      pMVar6->updateDistance = '@';
      pMVar6->enabled = '\x01';
      (pMVar6->pos).x = (moby->pos).x;
      (pMVar6->pos).y = (moby->pos).y;
      (pMVar6->pos).z = (moby->pos).z;
      pvVar1 = pMVar6->pVar;
      (pMVar6->pos).w = (moby->pos).w;
      (pMVar6->rotation).x = (moby->rotation).x;
      (pMVar6->rotation).y = (moby->rotation).y;
      (pMVar6->rotation).z = (moby->rotation).z;
      (pMVar6->rotation).w = (moby->rotation).w;
      mobyutil::MB_randRangeFloat(5.0,12.0);
      FUN_003509b0(pMVar6,moby,local_150,local_140,(int)(animationSpeed * 60.5));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0x200;
    }
    sound::PlayMobySound(0,0,pMVar6);
    dVar9 = 0.0;
    iVar5 = 0;
    dVar10 = dVar9;
    do {
      dVar9 = (double)fastfunc::FastWrapRot((float)dVar9,1.0471976);
      pMVar6 = mobyfunc::CreateMoby(DOOR_LEFT|TESLA_CLAW_AMMO);
      if (pMVar6 != (MobyInstance *)0x0) {
        pvVar1 = pMVar6->pVar;
        iVar7 = 0;
        dVar11 = 1.5;
        dVar12 = 2.0;
        dVar13 = 0.4000000059604645;
        dVar14 = 0.5;
        dVar15 = 25.5;
        dVar16 = 0.20000000298023224;
        dVar17 = 0.14000000059604645;
        dVar18 = 0.699999988079071;
        do {
          mobyutil::MB_randSphere
                    ((double)(float)((double)mobyutil::g_FrameTime * dVar11),
                     (double)(float)((double)mobyutil::g_FrameTime * dVar12),local_110);
          mobyutil::MB_randInt(2);
          dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
          partupd::SpawnPart_53
                    ((double)(float)(dVar8 * dVar16),dVar8,dVar10,local_100,
                     (int)((double)animationSpeed * dVar15));
          partupd::SpawnPart_53
                    ((double)(float)(dVar8 * dVar17),(double)(float)(dVar8 * dVar18),dVar10,
                     local_100,(int)((double)animationSpeed * dVar15));
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
        uVar2 = moby->color;
        uVar3 = moby->light;
        pMVar6->drawDistance = 0x40;
        pMVar6->color = uVar2;
        pMVar6->light = uVar3;
        pMVar6->updateDistance = '@';
        pMVar6->enabled = '\x01';
        (pMVar6->pos).x = (moby->pos).x;
        (pMVar6->pos).y = (moby->pos).y;
        (pMVar6->pos).z = (moby->pos).z;
        (pMVar6->pos).w = (moby->pos).w;
        (pMVar6->rotation).x = (moby->rotation).x;
        (pMVar6->rotation).y = (moby->rotation).y;
        (pMVar6->rotation).z = (moby->rotation).z;
        (pMVar6->rotation).w = (moby->rotation).w;
        mobyutil::MB_randRangeFloat((float)dVar10,24.0);
        dVar11 = (double)mobyutil::MB_randRangeFloat(60.0,120.0);
        uVar4 = fastfunc::FastDoubleToInt((double)(float)((double)animationSpeed * dVar11));
        FUN_003509b0(pMVar6,moby,local_130,local_120,uVar4);
        *(undefined4 *)((int)pvVar1 + 0xc) = 0x200;
        (pMVar6->rotation).x = (float)dVar9;
        mobyfunc::UpdateMobyTransform(pMVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
    moby->setByGroup = '\x01';
    respawn::SaveCheckpointMobyVar(&moby->setByGroup,1,moby,1,(int *)&DAT_00a53560);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00484a18  ns=mobyupdate_unsorted  size=0x15f0
// sig: undefined UpdateMoby_848(MobyInstance * moby)
// callers(0): 
// callees(19): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010581c mobyutil::SetCollDamIn; 00109ec0 mobyutil::DeltAng; 001118d8 mobyutil::MB_getTarget; 00128248 partupd::SpawnPart_27; 0012efa0 partupd::SpawnPart_49; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502a64 fastfunc::FastVecSub

/* Moby 848 */

void mobyupdate_unsorted::UpdateMoby_848(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  float *pfVar9;
  float fVar10;
  MobyInstance *pMoby;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar20;
  undefined8 uVar19;
  int iVar21;
  float *pfVar23;
  longlong lVar22;
  longlong lVar24;
  uint unused2;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar25;
  ulonglong unaff_r27;
  int *piVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  double dVar40;
  ulonglong in_f20;
  double dVar41;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar42;
  ulonglong in_f23;
  double dVar43;
  ulonglong in_f24;
  double dVar44;
  ulonglong in_f25;
  double dVar45;
  ulonglong in_f26;
  double dVar46;
  ulonglong in_f27;
  double dVar47;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar48;
  ulonglong in_f30;
  double dVar49;
  undefined8 uVar50;
  ulonglong in_f31;
  double dVar51;
  double dVar52;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar25 = uVar15 - 0x2e0;
  puVar11 = (ulonglong *)lVar25;
  *puVar11 = uVar15;
  puVar11[0x5e] = in_LR;
  puVar11[0x4d] = in_f17;
  puVar11[0x4e] = in_f18;
  puVar11[0x4f] = in_f19;
  puVar11[0x50] = in_f20;
  puVar11[0x51] = in_f21;
  puVar11[0x52] = in_f22;
  puVar11[0x53] = in_f23;
  puVar11[0x54] = in_f24;
  puVar11[0x55] = in_f25;
  puVar11[0x56] = in_f26;
  puVar11[0x57] = in_f27;
  puVar11[0x58] = in_f28;
  puVar11[0x59] = in_f29;
  puVar11[0x5a] = in_f30;
  puVar11[0x5b] = in_f31;
  puVar11[0x4c] = unaff_r31;
  puVar11[0x4b] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  puVar11[0x4a] = unaff_r29;
  puVar11[0x49] = unaff_r28;
  puVar11[0x48] = unaff_r27;
  puVar11[0x47] = unaff_r26;
  puVar11[0x46] = unaff_r25;
  puVar11[0x45] = unaff_r24;
  puVar11[0x44] = unaff_r23;
  mobyutil::MB_getTarget(0x4034000000000000,lVar16,&DAT_00484978,uVar15 - 0x1a0);
  fVar10 = pfVar9[4];
  piVar26 = (int *)0x0;
  iVar21 = 0;
  if (*(short *)((int)fVar10 + 0xa6) == 0x277) {
    piVar26 = (int *)(*(int *)((int)fVar10 + 0x78) + 0x250);
  }
  else if (*(short *)((int)fVar10 + 0xa6) == 0xe9) {
    piVar26 = (int *)(*(int *)((int)fVar10 + 0x78) + 0x1b8);
    if ((*(char *)((int)fVar10 + 0x20) == '@') || (*(char *)((int)fVar10 + 0x20) == '\x01')) {
      moby->state = '\x02';
    }
  }
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      fVar10 = *pfVar9;
      fVar4 = fVar10 * fVar10 + pfVar9[1] * pfVar9[1];
      dVar44 = 0.0;
      if (SQRT(fVar4) == 0.0) {
        *(float *)(puVar11 + 0xe) = fVar10;
        *(float *)((int)puVar11 + 0x74) = pfVar9[1];
        *(float *)(puVar11 + 0xf) = pfVar9[2];
        fVar10 = pfVar9[3];
        *(undefined4 *)((int)puVar11 + 0x74) = 0;
        *(undefined4 *)(puVar11 + 0xe) = 0;
      }
      else {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        *(float *)(puVar11 + 0xe) = fVar10 * fVar5;
        *(float *)((int)puVar11 + 0x74) = pfVar9[1] * fVar5;
        *(float *)(puVar11 + 0xf) = pfVar9[2];
        fVar10 = pfVar9[3];
      }
      *(float *)((int)puVar11 + 0x7c) = fVar10;
      dVar43 = 1.0;
      pfVar9[2] = 1.0;
      dVar40 = 2.0;
      mobyutil::SetCollDamIn(0x4000000000000000,uVar15 - 0x1d0,lVar16,0x10003);
      fVar10 = *(float *)((int)puVar11 + 0x114);
      fVar4 = *(float *)(puVar11 + 0x22);
      fVar5 = (moby->pos).z;
      MVar8 = moby->oClass;
      dVar30 = (double)(fVar4 * fVar4 + fVar10 * fVar10);
      dVar28 = dVar44;
      dVar29 = dVar44;
      if ((double)(float)SQRT(dVar30) != dVar44) {
        dVar28 = 1.0 / SQRT(dVar30);
        dVar28 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar28) * dVar28 - dVar43
                                                 ) * (double)(float)(dVar28 * 0.5) + dVar28);
        dVar28 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar28) * dVar28 - dVar43
                                                 ) * (double)(float)(dVar28 * 0.5) + dVar28);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar30 * dVar28) * dVar28 - dVar43) *
                        (double)(float)(dVar28 * 0.5) + dVar28);
        dVar28 = (double)(fVar4 * fVar1);
        dVar29 = (double)(fVar10 * fVar1);
      }
      *(float *)(puVar11 + 0x22) = (float)dVar28;
      *(float *)((int)puVar11 + 0x114) = (float)dVar29;
      *(undefined4 *)(puVar11 + 0x23) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x11c) = 0x45afdf66;
      *(undefined1 *)(puVar11 + 0x25) = 1;
      *(undefined1 *)((int)puVar11 + 0x129) = 1;
      *(MOBY_OCLASSES *)((int)puVar11 + 0x12a) = MVar8;
      fVar10 = *pfVar9;
      fVar4 = pfVar9[1];
      fVar5 = (pfVar9[3] - fVar5) * 0.1;
      pfVar9[2] = fVar5;
      if (fVar5 <= mobyutil::g_FrameTime * 8.0) {
        if (fVar5 < mobyutil::g_FrameTime * -8.0) {
          pfVar9[2] = mobyutil::g_FrameTime * -8.0;
        }
      }
      else {
        pfVar9[2] = mobyutil::g_FrameTime * 8.0;
      }
      dVar30 = ABS((double)*pfVar9);
      dVar28 = ABS((double)pfVar9[1]);
      *(float *)((int)puVar11 + 0x1ac) = (float)(dVar30 - dVar28);
      dVar51 = 0.7853981852531433;
      uVar17 = (ulonglong)((uint)fVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar4 >> 0x1d) & 4;
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar29 = dVar30;
      if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar44 < 0.0) {
        dVar29 = dVar28;
      }
      if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar44 < 0.0) {
        dVar28 = dVar30;
      }
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar30 = dVar44;
      if (dVar44 < dVar29) {
        lVar18 = uVar15 - 0x2d0;
        lVar22 = uVar15 - 0xf0;
        lVar24 = uVar15 - 0xe0;
        lVar27 = 2;
        fVar5 = (float)(dVar28 - dVar29) / (float)(dVar28 + dVar29);
        fVar1 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x1fc) = fVar5;
        *(float *)((int)puVar11 + 500) = fVar5;
        *(float *)(puVar11 + 0x3f) = fVar5;
        *(float *)(puVar11 + 0x3e) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)((int)puVar11 + 500) = *(float *)((int)puVar11 + 500) * fVar1;
        *(float *)(puVar11 + 0x3f) = *(float *)(puVar11 + 0x3f) * fVar5;
        *(float *)((int)puVar11 + 0x1fc) = *(float *)((int)puVar11 + 0x1fc) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar18 + 0x1f0) = *(float *)((int)lVar18 + 0x1e0) * fVar5 * fVar5;
          iVar20 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar15 - 0xf0;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar25;
        lVar22 = lVar24;
        do {
          fVar5 = *pfVar23;
          fVar1 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x1f0) = *(float *)((int)lVar18 + 0x1f0) * fVar5;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
          lVar22 = lVar22 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        lVar18 = lVar25;
        dVar28 = dVar44;
        do {
          iVar20 = (int)lVar18;
          iVar12 = (int)lVar24;
          lVar18 = lVar18 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1f0)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar30 = (double)((float)(dVar28 + 0.7853981852531433) * fVar10 + fVar4);
      }
      fVar10 = *(float *)(puVar11 + 0x28) - (moby->pos).x;
      fVar4 = *(float *)((int)puVar11 + 0x144) - (moby->pos).y;
      dVar29 = ABS((double)fVar10);
      dVar31 = ABS((double)fVar4);
      *(float *)(puVar11 + 0x34) = fVar10;
      *(float *)((int)puVar11 + 0x1a4) = fVar4;
      *(float *)(puVar11 + 0x32) = (float)dVar30;
      *(float *)(puVar11 + 0x35) = (float)(dVar29 - dVar31);
      uVar17 = (ulonglong)(*(uint *)(puVar11 + 0x34) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x1a4) >> 0x1d) & 4;
      dVar28 = ABS((double)*(float *)(puVar11 + 0x34));
      if ((double)*(float *)(puVar11 + 0x35) - dVar44 < 0.0) {
        dVar28 = dVar31;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar31 = ABS((double)*(float *)((int)puVar11 + 0x1a4));
      if ((double)*(float *)(puVar11 + 0x35) - dVar44 < 0.0) {
        dVar31 = dVar29;
      }
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar29 = dVar44;
      if (dVar44 < dVar28) {
        lVar18 = uVar15 - 0x2d0;
        lVar22 = uVar15 - 0x110;
        lVar24 = uVar15 - 0x100;
        lVar27 = 2;
        fVar5 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
        fVar1 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x1dc) = fVar5;
        *(float *)((int)puVar11 + 0x1d4) = fVar5;
        *(float *)(puVar11 + 0x3b) = fVar5;
        *(float *)(puVar11 + 0x3a) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)((int)puVar11 + 0x1d4) = *(float *)((int)puVar11 + 0x1d4) * fVar1;
        *(float *)(puVar11 + 0x3b) = *(float *)(puVar11 + 0x3b) * fVar5;
        *(float *)((int)puVar11 + 0x1dc) = *(float *)((int)puVar11 + 0x1dc) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar18 + 0x1d0) = *(float *)((int)lVar18 + 0x1c0) * fVar5 * fVar5;
          iVar20 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar15 - 0x110;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar25;
        lVar22 = lVar24;
        do {
          fVar5 = *pfVar23;
          fVar1 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x1d0) = *(float *)((int)lVar18 + 0x1d0) * fVar5;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
          lVar22 = lVar22 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        lVar18 = lVar25;
        dVar28 = dVar44;
        do {
          iVar20 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar12 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1d0)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar10 + fVar4);
      }
      dVar28 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar29);
      fVar4 = mobyutil::g_FrameTime;
      fVar10 = *pfVar9;
      dVar29 = 1.5707963705062866;
      if (dVar28 < 1.5707963705062866) {
        fVar10 = *(float *)(puVar11 + 0x28) - (moby->pos).x;
        fVar5 = *(float *)((int)puVar11 + 0x144) - (moby->pos).y;
        dVar30 = ABS((double)fVar10);
        dVar31 = ABS((double)fVar5);
        *(float *)((int)puVar11 + 0x194) = fVar10;
        *(float *)(puVar11 + 0x33) = fVar5;
        *(float *)((int)puVar11 + 0x19c) = (float)(dVar30 - dVar31);
        unused2 = *(uint *)((int)puVar11 + 0x19c);
        uVar17 = (ulonglong)(*(uint *)((int)puVar11 + 0x194) >> 0x1c) & 8 |
                 (ulonglong)(unused2 >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x33) >> 0x1d) & 4;
        pfVar23 = (float *)(uVar17 << 2);
        dVar28 = ABS((double)*(float *)((int)puVar11 + 0x194));
        if ((double)*(float *)((int)puVar11 + 0x19c) - dVar44 < 0.0) {
          dVar28 = dVar31;
        }
        fVar10 = pfVar23[0x1cd640];
        dVar31 = ABS((double)*(float *)(puVar11 + 0x33));
        if ((double)*(float *)((int)puVar11 + 0x19c) - dVar44 < 0.0) {
          dVar31 = dVar30;
        }
        fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        dVar30 = dVar44;
        if (dVar44 < dVar28) {
          lVar18 = uVar15 - 0x2d0;
          lVar22 = uVar15 - 0x130;
          lVar24 = uVar15 - 0x120;
          lVar27 = 2;
          fVar1 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
          fVar6 = fVar1 * fVar1;
          *(float *)((int)puVar11 + 0x1bc) = fVar1;
          *(float *)((int)puVar11 + 0x1b4) = fVar1;
          *(float *)(puVar11 + 0x37) = fVar1;
          *(float *)(puVar11 + 0x36) = fVar1;
          fVar1 = fVar6 * fVar6;
          *(float *)((int)puVar11 + 0x1b4) = *(float *)((int)puVar11 + 0x1b4) * fVar6;
          *(float *)(puVar11 + 0x37) = *(float *)(puVar11 + 0x37) * fVar1;
          *(float *)((int)puVar11 + 0x1bc) = *(float *)((int)puVar11 + 0x1bc) * fVar1 * fVar6;
          do {
            *(float *)((int)lVar18 + 0x1b0) = *(float *)((int)lVar18 + 0x1a0) * fVar1 * fVar1;
            iVar20 = (int)lVar22;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar15 - 0x130;
          pfVar23 = (float *)&DAT_007358e0;
          lVar18 = lVar25;
          lVar22 = lVar24;
          do {
            fVar1 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar18 + 0x1b0) = *(float *)((int)lVar18 + 0x1b0) * fVar1;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            unused2 = (uint)lVar22;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          dVar28 = dVar44;
          do {
            iVar20 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            iVar12 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1b0)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar30 = (double)((float)(dVar28 + dVar51) * fVar10 + fVar5);
        }
        mobyutil::DeltAng((float)dVar30,DAT_008ad0bc * 0.017453292 * fVar4,(float *)(puVar11 + 0x32)
                          ,(int)pfVar23,unused2,0);
        fVar10 = *(float *)(puVar11 + 0x32);
        fVar4 = fVar10 + 1.5707963;
        fVar1 = pfVar9[1] * pfVar9[1];
        fVar5 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar5 = fVar4;
        }
        fVar6 = 3.1415925 - fVar10;
        if (fVar10 - (3.1415925 - fVar10) < 0.0) {
          fVar6 = fVar10;
        }
        fVar7 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
          fVar7 = fVar5;
        }
        fVar4 = fVar7 * fVar7;
        fVar13 = fVar4 * fVar4 * fVar7;
        fVar14 = fVar4 * fVar13;
        fVar5 = -3.1415925 - fVar10;
        if ((-3.1415925 - fVar10) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar10 = (fVar4 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar13 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7) *
                 SQRT(*pfVar9 * *pfVar9 + fVar1);
        fVar4 = fVar5 * fVar5;
        *pfVar9 = fVar10;
        fVar6 = fVar4 * fVar4 * fVar5;
        fVar7 = fVar4 * fVar6;
        pfVar9[1] = (fVar4 * fVar7 * 2.601887e-06 +
                    fVar7 * -0.0001980741 +
                    fVar6 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5) *
                    SQRT(fVar10 * fVar10 + fVar1);
      }
      fVar10 = (moby->pos).x + fVar10;
      pMoby = (MobyInstance *)pfVar9[4];
      (moby->pos).x = fVar10;
      fVar4 = (moby->pos).y + pfVar9[1];
      (moby->pos).y = fVar4;
      (moby->pos).z = (moby->pos).z + pfVar9[2];
      fVar4 = fVar4 - (pMoby->pos).y;
      fVar10 = fVar10 - (pMoby->pos).x;
      dVar28 = (double)SQRT(fVar10 * fVar10 + fVar4 * fVar4);
      if (piVar26 != (int *)0x0) {
        if (dVar28 <= (double)((pMoby->pos).z - *(float *)(puVar11 + 0x29))) {
          iVar20 = *piVar26;
          if (((iVar20 != -1) && (sound::g_SoundChannels[iVar20].pMoby == pMoby)) &&
             (sound::g_SoundChannels[iVar20].state != '\0')) {
            sound::sound_Kill(iVar20);
          }
          *piVar26 = -1;
        }
        else {
          iVar20 = sound::IsMobyPlayingSound(pMoby,*piVar26);
          if (iVar20 == 0) {
            iVar20 = sound::PlayMobySound(0,4,(MobyInstance *)pfVar9[4]);
            *piVar26 = iVar20;
          }
        }
      }
      if (((double)(*(float *)((int)pfVar9[4] + 0x18) - *(float *)(puVar11 + 0x29)) < dVar28) &&
         (fVar10 = pfVar9[5], puVar11[0x42] = (longlong)(int)(animationSpeed * 6.5),
         fVar10 == (float)(((int)fVar10 / *(int *)((int)puVar11 + 0x214)) *
                          *(int *)((int)puVar11 + 0x214)))) {
        fVar10 = pfVar9[6];
        pfVar9[6] = (float)((uint)fVar10 ^ 1);
        dVar28 = -1.5707963705062866;
        dVar30 = dVar28;
        if ((float)((uint)fVar10 ^ 1) != 0.0) {
          dVar30 = dVar29;
        }
        dVar30 = (double)fastfunc::FastWrapRot(*(float *)(puVar11 + 0x32),(float)dVar30);
        dVar51 = 3.141592502593994;
        fVar10 = (float)(dVar30 + 1.570796251296997);
        dVar30 = -3.141592502593994;
        dVar31 = -0.16666656732559204;
        dVar48 = 0.008333025500178337;
        dVar49 = -0.0001980741071747616;
        fVar4 = 3.1415925 - fVar10;
        if (fVar10 - (3.1415925 - fVar10) < 0.0) {
          fVar4 = fVar10;
        }
        fVar5 = -3.1415925 - fVar10;
        if ((-3.1415925 - fVar10) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        dVar52 = 2.601886990305502e-06;
        dVar42 = 0.25;
        fVar1 = fVar5 * fVar5;
        fVar10 = fVar1 * fVar1 * fVar5;
        fVar4 = fVar1 * fVar10;
        dVar41 = (double)(fVar1 * fVar4 * 2.601887e-06 +
                         fVar4 * -0.0001980741 +
                         fVar10 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5);
        if (pfVar9[6] != 0.0) {
          dVar28 = dVar29;
        }
        dVar29 = (double)fastfunc::FastWrapRot(*(float *)(puVar11 + 0x32),(float)dVar28);
        lVar25 = uVar15 - 0x260;
        dVar28 = (double)(float)(dVar51 - dVar29);
        if (dVar29 - (double)(float)(dVar51 - dVar29) < 0.0) {
          dVar28 = dVar29;
        }
        dVar51 = (double)(float)(dVar30 - dVar29);
        if ((double)(float)(dVar30 - dVar29) - dVar28 < 0.0) {
          dVar51 = dVar28;
        }
        dVar45 = (double)(float)(dVar41 * dVar42 + (double)(moby->pos).x);
        dVar29 = (double)(float)(dVar51 * dVar51);
        dVar47 = (double)(moby->pos).z;
        dVar46 = (double)(moby->pos).w;
        dVar28 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar51));
        dVar30 = (double)(float)(dVar29 * dVar28);
        dVar28 = (double)(float)((double)(float)(dVar29 * dVar30) * dVar52 +
                                (double)(float)(dVar30 * dVar49 +
                                               (double)(float)(dVar28 * dVar48 +
                                                              (double)(float)((double)(float)(dVar29
                                                                                             * 
                                                  dVar51) * dVar31 + dVar51))));
        dVar29 = (double)(float)(dVar28 * dVar42 + (double)(moby->pos).y);
        mobyfunc::GetBonePosition(pfVar9[4],3 - (int)pfVar9[6],lVar25);
        fVar10 = (float)(dVar45 - (double)*(float *)(puVar11 + 0x10));
        fVar4 = (float)(dVar29 - (double)*(float *)((int)puVar11 + 0x84));
        *(float *)((int)puVar11 + 0x9c) = (float)dVar46;
        fVar5 = (float)(dVar47 - (double)*(float *)(puVar11 + 0x11));
        *(float *)((int)puVar11 + 0xac) = (float)dVar46;
        iVar20 = 0;
        *(float *)(puVar11 + 0x12) = fVar10;
        *(float *)((int)puVar11 + 0x94) = fVar4;
        *(float *)(puVar11 + 0x13) = fVar5;
        *(float *)(puVar11 + 0x14) =
             (float)((double)fVar10 * dVar40 + (double)*(float *)(puVar11 + 0x10));
        *(float *)((int)puVar11 + 0xa4) =
             (float)((double)fVar4 * dVar40 + (double)*(float *)((int)puVar11 + 0x84));
        *(float *)(puVar11 + 0x15) =
             (float)((double)fVar5 * dVar40 + (double)*(float *)(puVar11 + 0x11));
        dVar49 = -1.0;
        dVar29 = 0.6499999761581421;
        dVar30 = 5.0;
        dVar51 = 15.0;
        dVar31 = 5.5;
        dVar48 = 10.5;
        uVar50 = 0x40e86a0000000000;
        do {
          *(undefined4 *)(puVar11 + 0x16) = 0;
          *(undefined4 *)((int)puVar11 + 0xb4) = 0;
          *(undefined4 *)(puVar11 + 0x17) = 0;
          *(undefined4 *)((int)puVar11 + 0xbc) = 0;
          dVar52 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar43);
          *(float *)(puVar11 + 0x16) = (float)dVar52;
          dVar52 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar43);
          *(float *)((int)puVar11 + 0xb4) = (float)dVar52;
          dVar45 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar43);
          dVar46 = (double)*(float *)((int)puVar11 + 0x94);
          dVar47 = (double)*(float *)(puVar11 + 0x12);
          dVar32 = (double)*(float *)((int)puVar11 + 0xb4);
          dVar34 = (double)*(float *)(puVar11 + 0x13);
          dVar37 = (double)*(float *)(puVar11 + 0x16);
          dVar39 = (double)mobyutil::g_FrameTime;
          *(undefined4 *)((int)puVar11 + 0xbc) = *(undefined4 *)((int)puVar11 + 0x9c);
          dVar35 = (double)SQRT((float)(dVar45 * dVar45 +
                                       (double)(float)(dVar37 * dVar37 +
                                                      (double)(float)(dVar32 * dVar32))));
          dVar38 = (double)(float)((double)(float)((double)SQRT((float)(dVar34 * dVar34 +
                                                                       (double)(float)(dVar47 * 
                                                  dVar47 + (double)(float)(dVar46 * dVar46)))) *
                                                  dVar29) / dVar35);
          dVar52 = dVar44;
          if (dVar44 - dVar35 < 0.0) {
            dVar52 = (double)(float)(dVar45 * dVar38);
          }
          dVar33 = dVar44;
          if (dVar44 - dVar35 < 0.0) {
            dVar33 = (double)(float)(dVar32 * dVar38);
          }
          dVar36 = dVar44;
          if (dVar44 - dVar35 < 0.0) {
            dVar36 = (double)(float)(dVar37 * dVar38);
          }
          if (dVar35 - dVar44 < 0.0) {
            dVar52 = (double)(float)(dVar45 * dVar38);
          }
          if (dVar35 - dVar44 < 0.0) {
            dVar33 = (double)(float)(dVar32 * dVar38);
          }
          if (dVar35 - dVar44 < 0.0) {
            dVar36 = (double)(float)(dVar37 * dVar38);
          }
          *(float *)(puVar11 + 0x17) = (float)(dVar34 + dVar52);
          *(float *)((int)puVar11 + 0xb4) = (float)(dVar46 + dVar33);
          *(float *)(puVar11 + 0x16) = (float)(dVar47 + dVar36);
          dVar52 = (double)mobyutil::MB_randRangeFloat
                                     ((float)(dVar39 * dVar30),(float)(dVar39 * dVar51));
          fVar4 = *(float *)((int)puVar11 + 0xb4);
          fVar5 = *(float *)(puVar11 + 0x16);
          fVar1 = *(float *)(puVar11 + 0x17);
          dVar46 = (double)animationSpeed;
          dVar45 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
          puVar11[0x42] = (longlong)(int)(dVar46 * dVar31);
          puVar11[0x42] = (longlong)(int)(dVar46 * dVar48);
          fVar10 = (float)(dVar52 / dVar45);
          dVar52 = dVar44;
          if (dVar44 - dVar45 < 0.0) {
            dVar52 = (double)(fVar5 * fVar10);
          }
          dVar46 = dVar44;
          if (dVar44 - dVar45 < 0.0) {
            dVar46 = (double)(fVar4 * fVar10);
          }
          dVar47 = dVar44;
          if (dVar44 - dVar45 < 0.0) {
            dVar47 = (double)(fVar1 * fVar10);
          }
          if (dVar45 - dVar44 < 0.0) {
            dVar52 = (double)(fVar5 * fVar10);
          }
          if (dVar45 - dVar44 < 0.0) {
            dVar46 = (double)(fVar4 * fVar10);
          }
          if (dVar45 - dVar44 < 0.0) {
            dVar47 = (double)(fVar1 * fVar10);
          }
          *(float *)(puVar11 + 0x16) = (float)dVar52;
          *(float *)((int)puVar11 + 0xb4) = (float)dVar46;
          *(float *)(puVar11 + 0x17) = (float)dVar47;
          uVar19 = mobyutil::MB_randRange
                             (*(undefined4 *)((int)puVar11 + 0x214),
                              *(undefined4 *)((int)puVar11 + 0x214));
          partupd::SpawnPart_27(uVar50,lVar25,uVar15 - 0x230,0x5f2f4f6f,uVar19);
          fVar10 = animationSpeed;
          iVar20 = iVar20 + 1;
        } while (iVar20 < 5);
        fVar5 = *(float *)((int)puVar11 + 0x94);
        fVar1 = *(float *)(puVar11 + 0x12);
        fVar6 = *(float *)(puVar11 + 0x13);
        dVar51 = 0.5;
        dVar30 = (double)SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar5 * fVar5);
        fVar4 = (float)((double)(mobyutil::g_FrameTime * 0.5) / dVar30);
        dVar29 = dVar44;
        if (dVar44 - dVar30 < 0.0) {
          dVar29 = (double)(fVar1 * fVar4);
        }
        dVar31 = dVar44;
        if (dVar44 - dVar30 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        dVar48 = dVar44;
        if (dVar44 - dVar30 < 0.0) {
          dVar48 = (double)(fVar6 * fVar4);
        }
        if (dVar30 - dVar44 < 0.0) {
          dVar29 = (double)(fVar1 * fVar4);
        }
        if (dVar30 - dVar44 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        if (dVar30 - dVar44 < 0.0) {
          dVar48 = (double)(fVar6 * fVar4);
        }
        *(float *)(puVar11 + 0x12) = (float)dVar29;
        *(float *)((int)puVar11 + 0x94) = (float)dVar31;
        *(float *)(puVar11 + 0x13) = (float)dVar48;
        puVar11[0x42] = (longlong)(int)(fVar10 * 4.5);
        puVar11[0x42] = (longlong)(int)(fVar10 * 7.5);
        uVar50 = mobyutil::MB_randRange
                           (*(undefined4 *)((int)puVar11 + 0x214),
                            *(undefined4 *)((int)puVar11 + 0x214));
        partupd::SpawnPart_27(0x41186a0000000000,lVar25,uVar15 - 0x250,0x2f4f7f7f,uVar50);
        dVar30 = 6.0;
        fVar10 = *pfVar9;
        fVar13 = animationSpeed * 6.0;
        fVar4 = (moby->pos).y;
        fVar5 = (moby->pos).x;
        fVar1 = (moby->pos).z;
        *(float *)(puVar11 + 0x1a) = fVar10 * fVar13;
        fVar6 = pfVar9[1];
        *(float *)((int)puVar11 + 0xd4) = fVar6 * fVar13;
        fVar7 = pfVar9[2];
        fVar5 = -(float)(dVar41 * dVar42 - (double)(fVar10 * fVar13 + fVar5)) -
                *(float *)(puVar11 + 0x10);
        fVar4 = -(float)(dVar28 * dVar42 - (double)(fVar6 * fVar13 + fVar4)) -
                *(float *)((int)puVar11 + 0x84);
        *(float *)(puVar11 + 0x1b) = fVar7 * fVar13;
        fVar10 = pfVar9[3];
        fVar1 = (fVar7 * fVar13 + fVar1) - *(float *)(puVar11 + 0x11);
        *(float *)((int)puVar11 + 0xdc) = fVar10;
        *(float *)((int)puVar11 + 0xec) = fVar10;
        *(float *)(puVar11 + 0x1d) = fVar1;
        *(float *)((int)puVar11 + 0xe4) = fVar4;
        *(float *)(puVar11 + 0x1c) = fVar5;
        dVar29 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar10 = (float)(dVar40 / dVar29);
        dVar28 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar10);
        }
        dVar31 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar31 = (double)(fVar4 * fVar10);
        }
        dVar48 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar48 = (double)(fVar1 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar28 = (double)(fVar5 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar31 = (double)(fVar4 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar48 = (double)(fVar1 * fVar10);
        }
        *(float *)(puVar11 + 0x1a) = (float)dVar28;
        *(float *)((int)puVar11 + 0xd4) = (float)dVar31;
        *(float *)(puVar11 + 0x1b) = (float)dVar48;
        fastfunc::FastVecSub(uVar15 - 0x1f0,lVar25,uVar15 - 0x210);
        fVar4 = *(float *)((int)puVar11 + 0xe4);
        fVar5 = *(float *)(puVar11 + 0x1c);
        fVar1 = *(float *)(puVar11 + 0x1d);
        *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x1e);
        *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xf4);
        *(float *)(puVar11 + 0x19) = *(float *)(puVar11 + 0x1f);
        *(undefined4 *)((int)puVar11 + 0xcc) = *(undefined4 *)((int)puVar11 + 0xfc);
        *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) + *(float *)(puVar11 + 0x1e);
        *(float *)((int)puVar11 + 0xd4) =
             *(float *)((int)puVar11 + 0xd4) + *(float *)((int)puVar11 + 0xf4);
        *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) + *(float *)(puVar11 + 0x1f);
        fVar7 = animationSpeed;
        dVar29 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar6 = pfVar9[4];
        fVar10 = (float)((double)(mobyutil::g_FrameTime * 100.0) / dVar29);
        dVar28 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar10);
        }
        dVar31 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar31 = (double)(fVar4 * fVar10);
        }
        dVar48 = dVar44;
        if (dVar44 - dVar29 < 0.0) {
          dVar48 = (double)(fVar1 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar28 = (double)(fVar5 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar31 = (double)(fVar4 * fVar10);
        }
        if (dVar29 - dVar44 < 0.0) {
          dVar48 = (double)(fVar1 * fVar10);
        }
        *(float *)(puVar11 + 0x1c) = (float)dVar28;
        *(float *)((int)puVar11 + 0xe4) = (float)dVar31;
        *(float *)(puVar11 + 0x1d) = (float)dVar48;
        puVar11[0x42] = (longlong)(int)(fVar7 * 45.5);
        partupd::SpawnPart_49
                  (fVar6,uVar15 - 0x220,uVar15 - 0x210,uVar15 - 0x200,
                   *(undefined4 *)((int)puVar11 + 0x214));
        iVar20 = collproc::CollLine(lVar25,uVar15 - 0x240,0,pfVar9[4],0);
        fVar10 = CollOutput.ip.y;
        if (iVar20 != 0) {
          fVar4 = *(float *)((int)puVar11 + 0x94);
          fVar5 = *(float *)(puVar11 + 0x12);
          fVar1 = *(float *)(puVar11 + 0x13);
          *(float *)(puVar11 + 0x10) = CollOutput.ip.x;
          fVar6 = CollOutput.ip.z;
          *(float *)((int)puVar11 + 0x84) = fVar10;
          fVar10 = CollOutput.ip.w;
          *(float *)(puVar11 + 0x11) = fVar6;
          *(float *)((int)puVar11 + 0x8c) = fVar10;
          dVar29 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
          fVar10 = (float)((double)(mobyutil::g_FrameTime * 10.0) / dVar29);
          dVar28 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar28 = (double)(fVar5 * fVar10);
          }
          dVar31 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar31 = (double)(fVar4 * fVar10);
          }
          dVar48 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar48 = (double)(fVar1 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar28 = (double)(fVar5 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar31 = (double)(fVar4 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar48 = (double)(fVar1 * fVar10);
          }
          *(float *)(puVar11 + 0x12) = (float)dVar28;
          *(float *)((int)puVar11 + 0x94) = (float)dVar31;
          *(float *)(puVar11 + 0x13) = (float)dVar48;
          dVar31 = 3.0;
          dVar29 = 15.5;
          dVar28 = 20.5;
          uVar50 = 0x40dd4c0000000000;
          do {
            dVar41 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar43);
            dVar42 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar43);
            dVar52 = (double)mobyutil::MB_randRangeFloat((float)dVar49,(float)dVar43);
            fastfunc::FastVecNormalize(uVar15 - 0x1e0,uVar15 - 0x250,0xa10980);
            dVar45 = (double)*(float *)((int)puVar11 + 0x104);
            dVar46 = (double)*(float *)(puVar11 + 0x20);
            dVar47 = (double)*(float *)(puVar11 + 0x21);
            dVar32 = (double)mobyutil::g_FrameTime;
            dVar35 = (double)SQRT((float)(dVar52 * dVar52 +
                                         (double)(float)(dVar41 * dVar41 +
                                                        (double)(float)(dVar42 * dVar42))));
            dVar34 = (double)(float)((double)(float)((double)SQRT((float)(dVar47 * dVar47 +
                                                                         (double)(float)(dVar46 * 
                                                  dVar46 + (double)(float)(dVar45 * dVar45)))) *
                                                  dVar51) / dVar35);
            dVar48 = dVar44;
            if (dVar44 - dVar35 < 0.0) {
              dVar48 = (double)(float)(dVar52 * dVar34);
            }
            dVar37 = dVar44;
            if (dVar44 - dVar35 < 0.0) {
              dVar37 = (double)(float)(dVar42 * dVar34);
            }
            dVar38 = dVar44;
            if (dVar44 - dVar35 < 0.0) {
              dVar38 = (double)(float)(dVar41 * dVar34);
            }
            if (dVar35 - dVar44 < 0.0) {
              dVar48 = (double)(float)(dVar52 * dVar34);
            }
            if (dVar35 - dVar44 < 0.0) {
              dVar37 = (double)(float)(dVar42 * dVar34);
            }
            if (dVar35 - dVar44 < 0.0) {
              dVar38 = (double)(float)(dVar41 * dVar34);
            }
            *(float *)(puVar11 + 0x21) = (float)(dVar47 + dVar48);
            *(float *)((int)puVar11 + 0x104) = (float)(dVar45 + dVar37);
            *(float *)(puVar11 + 0x20) = (float)(dVar46 + dVar38);
            dVar48 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(dVar32 * dVar31),(float)(dVar32 * dVar30));
            fVar4 = *(float *)((int)puVar11 + 0x104);
            fVar5 = *(float *)(puVar11 + 0x20);
            fVar1 = *(float *)(puVar11 + 0x21);
            dVar42 = (double)animationSpeed;
            puVar11[0x42] = (longlong)(int)(dVar42 * dVar29);
            dVar41 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
            puVar11[0x42] = (longlong)(int)(dVar42 * dVar28);
            fVar10 = (float)(dVar48 / dVar41);
            dVar48 = dVar44;
            if (dVar44 - dVar41 < 0.0) {
              dVar48 = (double)(fVar5 * fVar10);
            }
            dVar42 = dVar44;
            if (dVar44 - dVar41 < 0.0) {
              dVar42 = (double)(fVar4 * fVar10);
            }
            dVar52 = dVar44;
            if (dVar44 - dVar41 < 0.0) {
              dVar52 = (double)(fVar1 * fVar10);
            }
            if (dVar41 - dVar44 < 0.0) {
              dVar48 = (double)(fVar5 * fVar10);
            }
            if (dVar41 - dVar44 < 0.0) {
              dVar42 = (double)(fVar4 * fVar10);
            }
            if (dVar41 - dVar44 < 0.0) {
              dVar52 = (double)(fVar1 * fVar10);
            }
            *(float *)(puVar11 + 0x20) = (float)dVar48;
            *(float *)((int)puVar11 + 0x104) = (float)dVar42;
            *(float *)(puVar11 + 0x21) = (float)dVar52;
            uVar19 = mobyutil::MB_randRange
                               (*(undefined4 *)((int)puVar11 + 0x214),
                                *(undefined4 *)((int)puVar11 + 0x214));
            partupd::SpawnPart_27(uVar50,lVar25,uVar15 - 0x1e0,0x7f2f4f6f,uVar19);
            iVar21 = iVar21 + 1;
          } while (iVar21 < 10);
          fVar4 = *(float *)((int)puVar11 + 0x94);
          fVar5 = *(float *)(puVar11 + 0x12);
          fVar1 = *(float *)(puVar11 + 0x13);
          *(undefined4 *)((int)puVar11 + 0xac) = *(undefined4 *)((int)puVar11 + 0x8c);
          fVar6 = pfVar9[4];
          dVar29 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4);
          fVar10 = (float)(dVar49 / dVar29);
          dVar28 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar28 = (double)(fVar5 * fVar10);
          }
          dVar30 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar30 = (double)(fVar4 * fVar10);
          }
          dVar43 = dVar44;
          if (dVar44 - dVar29 < 0.0) {
            dVar43 = (double)(fVar1 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar28 = (double)(fVar5 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar30 = (double)(fVar4 * fVar10);
          }
          if (dVar29 - dVar44 < 0.0) {
            dVar43 = (double)(fVar1 * fVar10);
          }
          *(float *)(puVar11 + 0x12) = (float)dVar28;
          *(float *)((int)puVar11 + 0x94) = (float)dVar30;
          *(float *)(puVar11 + 0x13) = (float)dVar43;
          *(float *)(puVar11 + 0x14) = (float)((double)*(float *)(puVar11 + 0x10) + dVar28);
          *(float *)((int)puVar11 + 0xa4) =
               (float)((double)*(float *)((int)puVar11 + 0x84) + dVar30);
          *(float *)(puVar11 + 0x15) = (float)((double)*(float *)(puVar11 + 0x11) + dVar43);
          iVar21 = collproc::CollLine(lVar25,uVar15 - 0x240,0x10,fVar6,uVar15 - 0x1d0);
          if (((iVar21 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
             ((CollOutput.pMoby == g_heroMobyPtr || ((CollOutput.pMoby)->oClass == DRONE)))) {
            moby->state = '\x02';
          }
          *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(puVar11 + 0x10);
          *(undefined4 *)((int)puVar11 + 0xa4) = *(undefined4 *)((int)puVar11 + 0x84);
          *(undefined4 *)((int)puVar11 + 0xac) = *(undefined4 *)((int)puVar11 + 0x8c);
          fVar10 = pfVar9[4];
          *(float *)(puVar11 + 0x15) = (float)((double)*(float *)(puVar11 + 0x11) + dVar40);
          iVar21 = collproc::CollLine(lVar25,uVar15 - 0x240,0x10,fVar10,uVar15 - 0x1d0);
          if (((iVar21 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
             ((CollOutput.pMoby == g_heroMobyPtr || ((CollOutput.pMoby)->oClass == DRONE)))) {
            moby->state = '\x02';
          }
          iVar21 = collproc::CollMobySphere(dVar51,lVar16 + 0x10);
          if (((iVar21 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
             ((CollOutput.pMoby == g_heroMobyPtr || ((CollOutput.pMoby)->oClass == DRONE)))) {
            moby->state = '\x02';
          }
        }
      }
      iVar21 = fastfunc::FastDecTimerS32(pfVar9 + 5);
      if ((((iVar21 != 0) || (pfVar9[4] == 0.0)) ||
          (cVar3 = *(char *)((int)pfVar9[4] + 0x20), cVar3 == -2)) || (cVar3 == -3)) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 3) {
    if (piVar26 != (int *)0x0) {
      iVar21 = *piVar26;
      if (((iVar21 != -1) && (sound::g_SoundChannels[iVar21].pMoby == (MobyInstance *)pfVar9[4])) &&
         (sound::g_SoundChannels[iVar21].state != '\0')) {
        sound::sound_Kill(iVar21);
      }
      *piVar26 = -1;
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00486008  ns=Global  size=0xd8
// sig: undefined FUN_00486008(void)
// callers(2): 00301d00 mobyupdate_unsorted::UpdateMoby_233; 003f0610 mobyupdate_unsorted::UpdateMoby_631
// callees(1): 000efa28 mobyfunc::CreateMoby

void FUN_00486008(double param_1,undefined4 *param_2,f32 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  f32 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = mobyfunc::CreateMoby(DOOR_LEFT|TRESPASSER_0050);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\x01';
    puVar3 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).x = *param_3;
    (pMVar4->pos).y = param_3[1];
    fVar1 = param_3[2];
    pMVar4->drawDistance = 0x7e;
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = param_3[3];
    *puVar3 = *param_2;
    uVar2 = param_2[1];
    puVar3[5] = param_5;
    puVar3[1] = uVar2;
    uVar2 = param_2[2];
    puVar3[3] = (float)param_1;
    puVar3[2] = uVar2;
    puVar3[4] = param_4;
    puVar3[6] = 0;
  }
  return;
}



//==== 004860e0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M849_004860e0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M849_004860e0(void)

{
  DAT_008ad10c = 0x10000;
  return;
}



//==== 004860f8  ns=mobyupdate_helpers  size=0x74
// sig: undefined M849_004860f8(void)
// callers(1): 00488250 mobyupdate_helpers::M849_00488250
// callees(0): 

undefined8 mobyupdate_helpers::M849_004860f8(void)

{
  if (hero::g_heroStateType < 5) {
    if (1 < hero::g_heroStateType) {
      if (hero::g_heroStateType == 3) {
        return 1;
      }
      if (g_heroState == TAKING_DAMAGE_LAVA) {
        return 1;
      }
      return 0;
    }
    if (hero::g_heroStateType < 0) {
      return 1;
    }
  }
  else if (hero::g_heroStateType < 0xc) {
    if (5 < hero::g_heroStateType) {
      return 1;
    }
  }
  else if (0xc < hero::g_heroStateType) {
    return 1;
  }
  return 0;
}



//==== 0048616c  ns=mobyupdate_helpers  size=0xac
// sig: undefined M849_0048616c(void)
// callers(0): 
// callees(5): 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul

void mobyupdate_helpers::M849_0048616c(longlong param_1,MobyInstance *param_2,undefined8 param_3)

{
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  Vec4 aVStack_60 [4];
  
  fastfunc::FastEulerToMtx1(auStack_e0,param_3);
  fastfunc::FastMtxCopyNoTranslate(auStack_a0,param_1 + 0xc0);
  fastfunc::FastVecMtx4Mul(aVStack_60,auStack_a0,auStack_e0);
  fastfunc::FastApplyTransform(&(param_2->transform).v0,aVStack_60);
  param_2->modeBits = param_2->modeBits | NO_POST_UPDATE;
  mobyfunc::PostUpdateMobyLockTransform(param_2);
  return;
}



//==== 00486220  ns=mobyupdate_helpers  size=0x214
// sig: undefined M849_00486220(void)
// callers(1): 00488250 mobyupdate_helpers::M849_00488250
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

undefined8
mobyupdate_helpers::M849_00486220
          (undefined8 param_1,undefined8 param_2,int param_3,int param_4,float *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  iVar7 = 0;
  puVar2 = (undefined4 *)**(int **)(*(int *)(param_3 + 0x24) + 0x2c);
  if ((((puVar2 != (undefined4 *)0x0) &&
       (uVar6 = (*(code *)*puVar2)(param_3,param_5,param_1), (int)uVar6 == 2)) &&
      (*(short *)(param_4 + 0x68) != 3)) &&
     (DAT_0096bd58 + DAT_0096bd5c <
      (int)(((uint)((LZCOUNT(-(uint)g_goldWeaponsArray.suckCannon) << 0x3a) >> 0x3f) & 0xfffffffb) +
           10))) {
    cVar1 = *(char *)(*(int *)(param_4 + 0x70) + 3);
    if (*(char *)(param_3 + 0x53) != cVar1) {
      mobyutil::MB_SetAnimation(param_3,cVar1,0,(int)(animationSpeed * 10.5));
    }
    *(undefined4 *)(param_4 + 0x6c) = 0;
    *(undefined4 *)(param_3 + 0x58) = 0x3f800000;
    fVar3 = *(float *)(param_3 + 0x14) - param_5[1];
    fVar4 = *(float *)(param_3 + 0x10) - *param_5;
    *(undefined2 *)(param_4 + 0x68) = 3;
    piVar5 = &DAT_0096bd30;
    *(float *)(param_4 + 100) = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    iVar8 = ((uint)((LZCOUNT(-(uint)g_goldWeaponsArray.suckCannon) << 0x3a) >> 0x3f) & 0xfffffffb) +
            10;
    if (0 < iVar8) {
      do {
        if (*piVar5 == 0) {
          *(short *)(param_4 + 0x6a) = (short)iVar7;
          (&DAT_0096bd30)[iVar7] = param_3;
          DAT_0096bd5c = DAT_0096bd5c + 1;
          return uVar6;
        }
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar7 < iVar8);
    }
  }
  return uVar6;
}



//==== 00486434  ns=mobyupdate_helpers  size=0x50
// sig: undefined M849_00486434(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M849_00486434(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(code *)*puVar1)();
  }
  return uVar2;
}



//==== 00486484  ns=mobyupdate_helpers  size=0x68
// sig: undefined M849_00486484(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M849_00486484(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(code *)*puVar1)(param_1,param_2);
  }
  return uVar2;
}



//==== 004864f0  ns=mobyupdate_helpers  size=0x104
// sig: undefined M849_004864f0(void)
// callers(1): 00488250 mobyupdate_helpers::M849_00488250
// callees(1): 000f1114 mobyfunc::GetBonePosition

void mobyupdate_helpers::M849_004864f0(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  mobyfunc::GetBonePosition(param_1,0,param_4);
  if ((g_heroState == FIRST_PERSON_VIEW) || (g_heroState == WEAPON_FIRST_PERSON_VIEW)) {
    *param_2 = GameCamera.rot.radius;
    *param_3 = -GameCamera.rot.elevation;
    fVar2 = GameCamera.orientMtx.forward.y;
    fVar1 = GameCamera.orientMtx.forward.x;
    param_4[2] = GameCamera.orientMtx.forward.z * 1.2 + *(float *)(param_1 + 0x18);
    *param_4 = fVar1 * 1.2 + g_heroPosition.x;
    param_4[1] = fVar2 * 1.2 + g_heroPosition.y;
  }
  else if (DAT_0096bfa8 == 1) {
    *param_2 = DAT_0096a368;
    *param_3 = *(float *)(param_1 + 0x44);
  }
  else {
    *param_2 = DAT_0096a368;
    *param_3 = DAT_0096a364;
  }
  return;
}



//==== 00486608  ns=mobyupdate_helpers  size=0x220
// sig: undefined M849_00486608(void)
// callers(1): 00488250 mobyupdate_helpers::M849_00488250
// callees(4): 000fc620 mobyutil::MB_randInt; 0010df38 mobyutil::MB_isAmmo; 00240f38 mobyupdate_helpers::M16_00240f38; 002eb450 mobyupdate_helpers::M1449_CollectAmmo

void mobyupdate_helpers::M849_00486608(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  short *psVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  
  if (((((param_1 != (MobyInstance *)0x0) && (param_1->state != 0xfd && param_1->state != 0xfe)) &&
       (iVar4 = mobyutil::MB_randInt(10), iVar4 == 0)) &&
      ((((param_1 != (MobyInstance *)0x0 && (param_1->pClass != (MobyClass *)0x0)) &&
        ((short)param_1->pClass->mode_bits == 0x13)) ||
       (bVar5 = mobyutil::MB_isAmmo(param_1), bVar5)))) &&
     (fVar1 = (param_1->pos).y - g_heroPosition.y, fVar2 = (param_1->pos).x - g_heroPosition.x,
     fVar3 = (param_1->pos).z - g_heroPosition.z,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 30.0)) {
    iVar4 = 0;
    psVar6 = &DAT_010db6d8;
    pfVar7 = (float *)&DAT_010db610;
    dVar9 = 0.30000001192092896;
    dVar10 = 0.10000000149011612;
    dVar11 = 2.0;
    uVar12 = 0;
    do {
      if (*psVar6 < 8) {
        return;
      }
      fVar1 = (param_1->pos).y - pfVar7[1];
      fVar2 = (param_1->pos).x - *pfVar7;
      fVar3 = (param_1->pos).z - pfVar7[2];
      dVar8 = (double)(float)((double)(longlong)iVar4 * dVar9 + dVar10);
      if (dVar8 - dVar11 < 0.0) {
        dVar8 = dVar11;
      }
      if ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar8) {
        if (((param_1 == (MobyInstance *)0x0) || (param_1->pClass == (MobyClass *)0x0)) ||
           ((short)param_1->pClass->mode_bits != 0x13)) {
          M1449_CollectAmmo(param_1);
        }
        else {
          M16_00240f38(uVar12,uVar12,param_1,g_heroMobyPtr);
        }
      }
      iVar4 = iVar4 + 1;
      psVar6 = psVar6 + 1;
      pfVar7 = pfVar7 + 4;
    } while (iVar4 < 10);
  }
  return;
}



//==== 00486828  ns=Global  size=0xa8
// sig: undefined FUN_00486828(void)
// callers(11): 002355e0 mobyupdate_helpers::M1268_002355e0; 002373c8 mobyupdate_helpers::M1271_002373c8; 002374c0 mobyupdate_unsorted::UpdateMoby_1271; 002ce020 FUN_002ce020; 00323a4c mobyupdate_helpers::M271_00323a4c; 0034d7cc mobyupdate_helpers::M341_0034d7cc; 0038a248 FUN_0038a248; 0039af88 mobyupdate_helpers::M479_0039af88; 003cb054 mobyupdate_helpers::M578_003cb054; 003efb44 mobyupdate_helpers::M630_003efb44; 0048c188 FUN_0048c188
// callees(0): 

undefined8 FUN_00486828(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (((param_1 == 0) || (*(char *)(param_1 + 0x20) == -2)) || (*(char *)(param_1 + 0x20) == -3)) {
    uVar2 = 0;
  }
  else if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x24) == 0)) {
    uVar2 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 0x10);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(code *)*puVar1)();
      if ((int)uVar2 == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



//==== 004868d8  ns=mobyupdate_helpers  size=0x2a4
// sig: undefined M849_004868d8(void)
// callers(1): 00486bf8 mobyupdate_helpers::M849_00486bf8
// callees(2): 000fcc68 mobyutil::MB_randRot; 001113e0 mobyutil::MB_RotateQuatAxisAngle

void mobyupdate_helpers::M849_004868d8(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined2 *puVar13;
  longlong lVar14;
  double dVar15;
  float local_30 [8];
  
  if (DAT_008ad150 != 0) {
    DAT_008ad150 = 0;
    DAT_010da348 = 0x3fd9999a;
    if ((((g_heroState != WEAPON_FIRST_PERSON_VIEW) && (g_heroState != FIRST_PERSON_VIEW)) ||
        (fVar1 = GameCamera.orientMtx.forward.x, fVar2 = GameCamera.orientMtx.forward.y,
        fVar3 = GameCamera.orientMtx.forward.z, (g_heroMobyPtr->modeBits & DISABLED) == NONE)) &&
       (fVar1 = DAT_0096a320, fVar2 = DAT_0096a324, fVar3 = DAT_0096a328, DAT_0096bfa8 == 1)) {
      fVar1 = -*(float *)(param_1 + 0xd0);
      fVar2 = -*(float *)(param_1 + 0xd4);
      fVar3 = -*(float *)(param_1 + 0xd8);
    }
    fVar7 = 0.0;
    DAT_010db610 = *param_2;
    pfVar10 = (float *)&DAT_010db610;
    DAT_010db614 = param_2[1];
    DAT_010db618 = param_2[2];
    puVar13 = &DAT_010db6da;
    pfVar12 = (float *)&DAT_010db620;
    DAT_010db61c = param_2[3];
    lVar14 = 9;
    DAT_010db6d8 = 0;
    fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar6 = 1.7 / fVar4;
    fVar8 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    fVar9 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar9 = fVar2 * fVar6;
    }
    if (0.0 - fVar4 < 0.0) {
      fVar7 = fVar1 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar9 = fVar2 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar7 = fVar1 * fVar6;
    }
    do {
      *pfVar12 = *pfVar10 + fVar7;
      pfVar12[1] = pfVar10[1] + fVar9;
      pfVar12[2] = pfVar10[2] + fVar8;
      pfVar5 = pfVar10 + 3;
      pfVar10 = pfVar10 + 4;
      pfVar12[3] = *pfVar5;
      *puVar13 = 0;
      pfVar12 = pfVar12 + 4;
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    DAT_010da320 = 0;
    local_30[0] = 0.0;
    local_30[1] = 0.0;
    DAT_010da32c = 0;
    DAT_010da328 = 0;
    DAT_010da324 = 0;
    local_30[2] = 0.1;
    local_30[3] = 1.0;
    local_30[4] = 1.0;
    local_30[5] = 0.0;
    local_30[6] = 0.0;
    local_30[7] = 1.0;
    dVar15 = (double)mobyutil::MB_randRot();
    mobyutil::MB_RotateQuatAxisAngle((float)dVar15,(float *)&DAT_010da330,local_30);
    DAT_010da340 = (float)dVar15;
    DAT_010da318 = 0;
    DAT_010da344 = 0;
    DAT_008ad158 = 0x3bc49ba6;
    if (DAT_008ad154 != 0) {
      puVar11 = &DAT_010da360;
      lVar14 = 0x19;
      DAT_008ad154 = 0;
      do {
        *puVar11 = 0;
        puVar11[6] = 0;
        puVar11[0xc] = 0;
        puVar11[0x12] = 0;
        puVar11[0x18] = 0;
        puVar11[0x1e] = 0;
        puVar11[0x24] = 0;
        puVar11[0x2a] = 0;
        puVar11 = puVar11 + 0x30;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}



//==== 00486bf8  ns=mobyupdate_helpers  size=0x1638
// sig: undefined M849_00486bf8(void)
// callers(1): 00488250 mobyupdate_helpers::M849_00488250
// callees(16): 00050288 camera::Cam_InterpAngles; 00057820 collproc::CollLine; 0006d7e0 draw::RegisterPostDraw; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001099f8 mobyutil::Lerp_vec4; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0011e6ec partproc::DeletePart; 00126f50 partupd::SpawnPart_23; 004868d8 mobyupdate_helpers::M849_004868d8; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e7d64 FUN_005e7d64; 005e8e08 FUN_005e8e08

void mobyupdate_helpers::M849_00486bf8(void *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar7;
  longlong lVar6;
  short *psVar8;
  short *psVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  undefined2 uVar13;
  longlong lVar14;
  longlong lVar15;
  short sVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  undefined8 uVar30;
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
  undefined8 uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 local_270 [16];
  float local_260;
  float local_25c;
  float local_258;
  float local_250;
  float local_24c;
  float local_248;
  float local_240 [9];
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0 [4];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  longlong local_100;
  
  M849_004868d8();
  if (((g_heroState == WEAPON_FIRST_PERSON_VIEW) || (g_heroState == FIRST_PERSON_VIEW)) &&
     ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
    local_190 = GameCamera.orientMtx.forward.x;
    local_18c = GameCamera.orientMtx.forward.y;
    dVar37 = (double)GameCamera.orientMtx.forward.w;
    local_188 = GameCamera.orientMtx.forward.z;
    local_184 = GameCamera.orientMtx.forward.w;
    local_180 = GameCamera.orientMtx.right.x;
    local_17c = GameCamera.orientMtx.right.y;
    local_178 = GameCamera.orientMtx.right.z;
    local_174 = GameCamera.orientMtx.right.w;
    local_170 = GameCamera.orientMtx.up.x;
    local_16c = GameCamera.orientMtx.up.y;
    local_168 = GameCamera.orientMtx.up.z;
    local_164 = GameCamera.orientMtx.up.w;
  }
  else if (DAT_0096bfa8 == 1) {
    local_190 = -*(float *)((int)param_1 + 0xd0);
    local_18c = -*(float *)((int)param_1 + 0xd4);
    local_184 = *(float *)((int)param_1 + 0xdc);
    dVar37 = (double)local_184;
    local_188 = -*(float *)((int)param_1 + 0xd8);
    local_180 = *(float *)((int)param_1 + 0xc0);
    local_17c = *(float *)((int)param_1 + 0xc4);
    local_178 = *(float *)((int)param_1 + 200);
    local_174 = *(float *)((int)param_1 + 0xcc);
    local_170 = *(float *)((int)param_1 + 0xe0);
    local_16c = *(float *)((int)param_1 + 0xe4);
    local_168 = *(float *)((int)param_1 + 0xe8);
    local_164 = *(float *)((int)param_1 + 0xec);
  }
  else {
    local_190 = DAT_0096a320;
    local_18c = DAT_0096a324;
    dVar37 = (double)DAT_0096a32c;
    local_188 = DAT_0096a328;
    local_184 = DAT_0096a32c;
    local_180 = DAT_0096a330;
    local_17c = DAT_0096a334;
    local_178 = DAT_0096a338;
    local_174 = DAT_0096a33c;
    local_170 = DAT_0096a340;
    local_16c = DAT_0096a344;
    local_168 = DAT_0096a348;
    local_164 = DAT_0096a34c;
  }
  dVar42 = 0.0;
  DAT_010db610 = *param_2;
  DAT_010db614 = param_2[1];
  DAT_010db618 = param_2[2];
  DAT_010db61c = param_2[3];
  fVar1 = SQRT(local_188 * local_188 + local_190 * local_190 + local_18c * local_18c);
  fVar2 = DAT_010da348 / fVar1;
  dVar38 = dVar42;
  if (0.0 - fVar1 < 0.0) {
    dVar38 = (double)(local_188 * fVar2);
  }
  dVar39 = dVar42;
  if (0.0 - fVar1 < 0.0) {
    dVar39 = (double)(local_18c * fVar2);
  }
  dVar40 = dVar42;
  if (0.0 - fVar1 < 0.0) {
    dVar40 = (double)(local_190 * fVar2);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar38 = (double)(local_188 * fVar2);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar39 = (double)(local_18c * fVar2);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar40 = (double)(local_190 * fVar2);
  }
  iVar7 = collproc::CollLine(param_2,local_270,0x14,g_heroMobyPtr,0);
  if (iVar7 == 0) {
    psVar8 = &DAT_010db6d8;
    lVar6 = 9;
    DAT_010db6d8 = DAT_010db6d8 + 4;
    psVar9 = psVar8;
    do {
      psVar8 = psVar8 + 1;
      sVar16 = *psVar9;
      psVar9 = psVar9 + 1;
      *psVar8 = sVar16 + -0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    lVar6 = fastfunc::FastDoubleToInt
                      ((double)(SQRT((CollOutput.ip.x - *param_2) * (CollOutput.ip.x - *param_2) +
                                     (CollOutput.ip.y - param_2[1]) * (CollOutput.ip.y - param_2[1])
                                    ) / DAT_010da348));
    if ((int)lVar6 < 10) {
      lVar15 = lVar6 << 1;
      lVar14 = lVar6;
      do {
        iVar7 = (int)lVar15;
        sVar16 = *(short *)((int)&DAT_010db6d8 + iVar7);
        sVar16 = sVar16 + ((ushort)(0x40 - (longlong)sVar16 >> 0x3f) & 0x40U - sVar16) + -4;
        *(short *)((int)&DAT_010db6d8 + iVar7) = sVar16;
        if (sVar16 < 0) {
          *(undefined2 *)((int)&DAT_010db6d8 + iVar7) = 0;
        }
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + 2;
      } while ((int)lVar14 < 10);
    }
    lVar6 = lVar6 + -1;
    if (-1 < (int)lVar6) {
      lVar15 = lVar6 * 2;
      do {
        iVar7 = (int)lVar15;
        lVar6 = lVar6 + -1;
        lVar15 = lVar15 + -2;
        *(short *)((int)&DAT_010db6d8 + iVar7) = *(short *)((int)&DAT_010db6da + iVar7) + 0x20;
      } while (-1 < (int)lVar6);
    }
  }
  FUN_005e7d64(&local_260,&DAT_010da320,&local_190);
  dVar25 = (double)local_260 + dVar40;
  dVar34 = (double)local_25c + dVar39;
  dVar35 = (double)local_258 + dVar38;
  FUN_005e7d64(&local_250,&DAT_010da330,&local_190);
  dVar44 = 60.5;
  local_100 = (longlong)(int)(animationSpeed * 60.5);
  dVar24 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 60.5));
  lVar6 = (longlong)DAT_010da318;
  DAT_010da318 = DAT_010da318 + 1;
  local_100 = (longlong)(int)((double)animationSpeed * dVar44);
  fVar1 = (float)((double)lVar6 / dVar24);
  dVar40 = (double)(((float)((double)local_250 + dVar40) - (float)dVar25) * fVar1 + (float)dVar25);
  dVar39 = (double)(((float)((double)local_24c + dVar39) - (float)dVar34) * fVar1 + (float)dVar34);
  dVar38 = (double)(((float)((double)local_248 + dVar38) - (float)dVar35) * fVar1 + (float)dVar35);
  if ((int)((double)animationSpeed * dVar44) <= DAT_010da318) {
    DAT_010da320 = DAT_010da330;
    DAT_010da324 = DAT_010da334;
    DAT_010da328 = DAT_010da338;
    DAT_010da32c = DAT_010da33c;
    local_240[0] = 0.0;
    local_240[1] = 0.0;
    local_240[2] = 0.1;
    local_240[3] = 1.0;
    local_240[4] = 1.0;
    local_240[5] = 0.0;
    local_240[6] = 0.0;
    local_240[7] = 1.0;
    dVar25 = (double)mobyutil::MB_randRangeFloat(45.0,315.0);
    dVar25 = (double)fastfunc::FastWrapRot(DAT_010da340,(float)(dVar25 * 0.01745329238474369));
    mobyutil::MB_RotateQuatAxisAngle((float)dVar25,(float *)&DAT_010da330,local_240);
    DAT_010da340 = (float)dVar25;
    DAT_010da318 = 0;
  }
  dVar24 = 0.10000000149011612;
  dVar25 = (double)fastfunc::FastWrapRot(DAT_010da344,0.1);
  dVar45 = (double)local_170;
  dVar44 = (double)local_168;
  dVar43 = (double)local_16c;
  DAT_010da344 = (float)dVar25;
  local_140 = local_170;
  fVar1 = (float)(dVar44 * dVar40 - (double)(float)(dVar45 * dVar38));
  fVar2 = (float)(dVar43 * dVar38 - (double)(float)(dVar44 * dVar39));
  fVar3 = (float)(dVar45 * dVar39 - (double)(float)(dVar43 * dVar40));
  local_13c = local_16c;
  local_138 = local_168;
  local_134 = local_164;
  local_144 = 0;
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar25 = dVar42;
  dVar34 = dVar42;
  dVar35 = dVar42;
  if ((double)SQRT(fVar4) != dVar42) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar35 = (double)(fVar2 * fVar5);
    dVar34 = (double)(fVar1 * fVar5);
    dVar25 = (double)(fVar3 * fVar5);
  }
  local_150 = (float)dVar35;
  local_14c = (float)dVar34;
  local_148 = (float)dVar25;
  local_154 = 0;
  pfVar11 = (float *)&DAT_010db6f0;
  iVar7 = 0;
  local_160 = (float)(dVar34 * dVar44 - (double)(float)(dVar25 * dVar43));
  local_15c = (float)(dVar25 * dVar45 - (double)(float)(dVar35 * dVar44));
  local_158 = (float)(dVar35 * dVar43 - (double)(float)(dVar34 * dVar45));
  pfVar20 = (float *)&DAT_008ad160;
  pfVar19 = pfVar11;
  do {
    local_240[8] = (float)((double)*pfVar20 * dVar24);
    local_21c = (float)((double)pfVar20[1] * dVar24);
    local_218 = (float)((double)pfVar20[2] * dVar24);
    local_214 = pfVar20[3];
    FUN_005e7d64(local_240 + 8,local_240 + 8,&local_160);
    iVar7 = iVar7 + 1;
    pfVar20 = pfVar20 + 4;
    *pfVar19 = DAT_010db610 + local_240[8];
    pfVar19[1] = DAT_010db614 + local_21c;
    pfVar19[2] = DAT_010db618 + local_218;
    pfVar19[3] = DAT_010db61c;
    pfVar19 = pfVar19 + 4;
  } while (iVar7 < 0x14);
  iVar7 = 1;
  pfVar20 = &DAT_010db610;
  do {
    pfVar19 = pfVar20 + 4;
    pfVar11 = pfVar11 + 0x50;
    local_210 = *pfVar19 - *pfVar20;
    dVar25 = (double)local_210;
    local_20c = pfVar20[5] - pfVar20[1];
    dVar34 = (double)local_20c;
    local_208 = pfVar20[6] - pfVar20[2];
    dVar35 = (double)local_208;
    local_1fc = (float)(dVar35 * dVar40 - (double)(float)(dVar25 * dVar38));
    local_1f8 = (float)(dVar25 * dVar39 - (double)(float)(dVar34 * dVar40));
    local_204 = pfVar20[7];
    local_1f4 = 0;
    local_200 = (float)(dVar34 * dVar38 - (double)(float)(dVar35 * dVar39));
    dVar25 = (double)FUN_005e8e08((double)((float)(dVar35 * dVar38 +
                                                  (double)(float)(dVar25 * dVar40 +
                                                                 (double)(float)(dVar34 * dVar39)))
                                          / (DAT_010da348 *
                                            SQRT((float)(dVar35 * dVar35 +
                                                        (double)(float)(dVar25 * dVar25 +
                                                                       (double)(float)(dVar34 * 
                                                  dVar34)))))));
    dVar35 = 0.20000000298023224;
    dVar34 = (double)(float)(1.5707963705062866 - dVar25);
    dVar25 = (double)camera::Cam_InterpAngles
                               (dVar42,dVar34,0x3faeb851e0000000,0x3fc99999a0000000,dVar42);
    dVar34 = (double)fastfunc::FastDiffRots(dVar34,dVar25);
    if (0.3141592741012573 < ABS(dVar34)) {
      dVar34 = (double)fastfunc::FastDiffRots();
      dVar25 = (double)fastfunc::FastWrapRot((float)dVar25,(float)dVar34);
    }
    mobyutil::MB_RotateQuatAxisAngle((float)dVar25,&local_1f0,&local_210);
    dVar34 = (double)local_1ec;
    dVar36 = (double)local_1f0;
    dVar31 = (double)local_1e8;
    dVar29 = (double)SQRT((float)(dVar31 * dVar31 +
                                 (double)(float)(dVar36 * dVar36 + (double)(float)(dVar34 * dVar34))
                                 ));
    dVar32 = (double)(float)((double)DAT_010da348 / dVar29);
    dVar25 = dVar42;
    if (dVar42 - dVar29 < 0.0) {
      dVar25 = (double)(float)(dVar34 * dVar32);
    }
    dVar26 = dVar42;
    if (dVar42 - dVar29 < 0.0) {
      dVar26 = (double)(float)(dVar36 * dVar32);
    }
    dVar27 = dVar42;
    if (dVar42 - dVar29 < 0.0) {
      dVar27 = (double)(float)(dVar31 * dVar32);
    }
    if (dVar29 - dVar42 < 0.0) {
      dVar25 = (double)(float)(dVar34 * dVar32);
    }
    if (dVar29 - dVar42 < 0.0) {
      dVar26 = (double)(float)(dVar36 * dVar32);
    }
    if (dVar29 - dVar42 < 0.0) {
      dVar27 = (double)(float)(dVar31 * dVar32);
    }
    local_1ec = (float)((double)(float)(dVar25 - dVar34) + dVar34);
    local_1f0 = (float)((double)(float)(dVar26 - dVar36) + dVar36);
    local_1e8 = (float)((double)(float)(dVar27 - dVar31) + dVar31);
    fVar1 = SQRT(local_1e8 * local_1e8 + local_1f0 * local_1f0 + local_1ec * local_1ec);
    if (2.0 < fVar1) {
      fVar1 = 2.0 / fVar1;
      local_1f0 = local_1f0 * fVar1;
      local_1ec = local_1ec * fVar1;
      local_1e8 = local_1e8 * fVar1;
    }
    if (5 < iVar7) {
      dVar25 = (double)fastfunc::FastIntToDouble(10);
      fVar1 = (float)((double)(longlong)iVar7 / dVar25);
      local_1e4 = local_204;
      local_1f0 = fVar1 * (local_210 - local_1f0) + local_1f0;
      local_1ec = fVar1 * (local_20c - local_1ec) + local_1ec;
      local_1e8 = fVar1 * (local_208 - local_1e8) + local_1e8;
    }
    *pfVar19 = *pfVar20 + local_1f0;
    fVar1 = (float)(dVar38 * dVar38 +
                   (double)(float)(dVar40 * dVar40 + (double)(float)(dVar39 * dVar39)));
    pfVar20[5] = pfVar20[1] + local_1ec;
    pfVar20[7] = pfVar20[3];
    pfVar20[6] = pfVar20[2] + local_1e8;
    dVar25 = dVar42;
    dVar34 = dVar42;
    dVar29 = dVar42;
    if ((double)SQRT(fVar1) != dVar42) {
      fVar2 = 1.0 / SQRT(fVar1);
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      dVar25 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
      dVar29 = (double)(float)(dVar40 * dVar25);
      dVar34 = (double)(float)(dVar39 * dVar25);
      dVar25 = (double)(float)(dVar38 * dVar25);
    }
    local_124 = (float)dVar37;
    local_130 = (float)dVar29;
    local_12c = (float)dVar34;
    local_128 = (float)dVar25;
    fVar1 = (float)(dVar44 * dVar29 - (double)(float)(dVar45 * dVar25));
    fVar2 = (float)(dVar43 * dVar25 - (double)(float)(dVar44 * dVar34));
    fVar3 = (float)(dVar45 * dVar34 - (double)(float)(dVar43 * dVar29));
    local_114 = 0;
    fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
    dVar37 = dVar42;
    dVar38 = dVar42;
    dVar39 = dVar42;
    if ((double)SQRT(fVar4) != dVar42) {
      fVar5 = 1.0 / SQRT(fVar4);
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      dVar38 = (double)(fVar2 * fVar5);
      dVar37 = (double)(fVar1 * fVar5);
      dVar39 = (double)(fVar3 * fVar5);
    }
    local_100 = (longlong)iVar7;
    iVar21 = 0;
    local_120 = (float)dVar38;
    local_11c = (float)dVar37;
    local_118 = (float)dVar39;
    local_104 = 0;
    local_110 = (float)(dVar34 * dVar39 - (double)(float)(dVar25 * dVar37));
    dVar45 = (double)local_110;
    local_10c = (float)(dVar25 * dVar38 - (double)(float)(dVar29 * dVar39));
    dVar43 = (double)local_10c;
    local_108 = (float)(dVar29 * dVar37 - (double)(float)(dVar34 * dVar38));
    dVar44 = (double)local_108;
    dVar29 = 0.699999988079071;
    dVar34 = 3.141592502593994;
    dVar25 = -3.141592502593994;
    dVar40 = -0.16666656732559204;
    dVar39 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar37 = 2.601886990305502e-06;
    dVar32 = (double)local_100;
    dVar31 = (double)(float)(dVar32 * 0.30000001192092896 + dVar24);
    pfVar18 = (float *)&DAT_008ad160;
    pfVar17 = pfVar11;
    do {
      dVar26 = (double)fastfunc::FastWrapRot
                                 ((float)(dVar32 * dVar29 + (double)DAT_010da344),(float)dVar42);
      dVar36 = (double)(float)(dVar34 - dVar26);
      if (dVar26 - (double)(float)(dVar34 - dVar26) < 0.0) {
        dVar36 = dVar26;
      }
      dVar27 = (double)(float)(dVar25 - dVar26);
      if ((double)(float)(dVar25 - dVar26) - dVar36 < 0.0) {
        dVar27 = dVar36;
      }
      dVar36 = (double)(float)(dVar27 * dVar27);
      dVar33 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar27));
      dVar26 = (double)(float)(dVar36 * dVar33);
      local_1d8 = (float)((double)(float)((double)(float)(dVar36 * dVar26) * dVar37 +
                                         (double)(float)(dVar26 * dVar38 +
                                                        (double)(float)(dVar33 * dVar39 +
                                                                       (double)(float)((double)(
                                                  float)(dVar36 * dVar27) * dVar40 + dVar27)))) *
                          dVar24 + dVar31);
      local_1e0 = *pfVar18 * local_1d8;
      local_1dc = pfVar18[1] * local_1d8;
      local_1d8 = pfVar18[2] * local_1d8;
      local_1d4 = pfVar18[3];
      FUN_005e7d64(&local_1e0,&local_1e0,&local_130);
      iVar21 = iVar21 + 1;
      pfVar18 = pfVar18 + 4;
      *pfVar17 = *pfVar19 + local_1e0;
      pfVar17[1] = pfVar20[5] + local_1dc;
      pfVar17[2] = pfVar20[6] + local_1d8;
      pfVar17[3] = pfVar20[7];
      pfVar17 = pfVar17 + 4;
    } while (iVar21 < 0x14);
    iVar7 = iVar7 + 1;
    dVar37 = (double)local_1e4;
    dVar25 = (double)SQRT(local_1e8 * local_1e8 + local_1f0 * local_1f0 + local_1ec * local_1ec);
    fVar1 = (float)((double)DAT_010da348 / dVar25);
    dVar40 = dVar42;
    if (dVar42 - dVar25 < 0.0) {
      dVar40 = (double)(local_1f0 * fVar1);
    }
    dVar39 = dVar42;
    if (dVar42 - dVar25 < 0.0) {
      dVar39 = (double)(local_1ec * fVar1);
    }
    dVar38 = dVar42;
    if (dVar42 - dVar25 < 0.0) {
      dVar38 = (double)(local_1e8 * fVar1);
    }
    if (dVar25 - dVar42 < 0.0) {
      dVar40 = (double)(local_1f0 * fVar1);
    }
    if (dVar25 - dVar42 < 0.0) {
      dVar39 = (double)(local_1ec * fVar1);
    }
    if (dVar25 - dVar42 < 0.0) {
      dVar38 = (double)(local_1e8 * fVar1);
    }
    pfVar20 = pfVar19;
  } while (iVar7 < 10);
  draw::RegisterPostDraw(&PTR_M849_0048d430_0070f0c0,param_1);
  iVar22 = 0;
  iVar21 = 0;
  iVar23 = 0;
  iVar7 = 0;
  do {
    iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
    if (iVar23 < 5 && iVar12 == 0) {
      lVar6 = 9;
      iVar10 = 0x12;
      do {
        if (0x3f < *(short *)((int)&DAT_010db6d8 + iVar10)) break;
        lVar6 = lVar6 + -1;
        iVar10 = iVar10 + -2;
      } while (-1 < (int)lVar6);
      if (0 < (int)lVar6) {
        if (iVar22 < 2 && 1 < (int)lVar6) {
          iVar10 = mobyutil::MB_randInt(0x14);
          uVar41 = 0x3ff0000000000000;
          dVar37 = (double)mobyutil::MB_randRangeFloat((float)dVar35,1.0);
          pfVar11 = (float *)((int)(&DAT_010db6f0 + iVar10 * 4) +
                             (int)(lVar6 << 8) + (int)(lVar6 << 6));
          dVar38 = (double)(float)(&DAT_010db6f0)[iVar10 * 4];
          local_1c4 = pfVar11[3];
          local_1d0 = (float)(dVar37 * (double)(float)((double)*pfVar11 - dVar38) + dVar38);
          iVar12 = (int)(lVar6 << 4);
          local_1cc = (float)(dVar37 * (double)(pfVar11[1] - (float)(&DAT_010db6f4)[iVar10 * 4]) +
                             (double)(float)(&DAT_010db6f4)[iVar10 * 4]);
          local_1c8 = (float)(dVar37 * (double)(pfVar11[2] - (float)(&DAT_010db6f8)[iVar10 * 4]) +
                             (double)(float)(&DAT_010db6f8)[iVar10 * 4]);
          dVar39 = (double)(float)(dVar37 * (double)(float)((double)*(float *)((int)&DAT_010db610 +
                                                                              iVar12) -
                                                           (double)DAT_010db610) +
                                  (double)DAT_010db610);
          dVar38 = (double)(float)(dVar37 * (double)(float)((double)*(float *)((int)&DAT_010db614 +
                                                                              iVar12) -
                                                           (double)DAT_010db614) +
                                  (double)DAT_010db614);
          dVar37 = (double)(float)(dVar37 * (double)(float)((double)*(float *)((int)&DAT_010db618 +
                                                                              iVar12) -
                                                           (double)DAT_010db618) +
                                  (double)DAT_010db618);
          uVar28 = mobyutil::MB_randRangeFloat(60000.0,180000.0);
          uVar30 = 0x3ff07ae140000000;
          mobyutil::MB_randInt(uVar28,0x3ff07ae140000000,5);
          iVar12 = partupd::SpawnPart_23(dVar42,uVar41,uVar30,uVar28,&local_1d0);
          if (iVar12 != 0) {
            fVar2 = (float)((double)local_1cc - dVar38);
            fVar3 = (float)((double)local_1d0 - dVar39);
            fVar4 = (float)((double)local_1c8 - dVar37);
            *(float *)(iVar12 + 0x3c) = local_1c4;
            iVar22 = iVar22 + 1;
            dVar38 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            fVar1 = (float)(0.009999999776482582 / dVar38);
            dVar37 = dVar42;
            if (dVar42 - dVar38 < 0.0) {
              dVar37 = (double)(fVar3 * fVar1);
            }
            dVar39 = dVar42;
            if (dVar42 - dVar38 < 0.0) {
              dVar39 = (double)(fVar2 * fVar1);
            }
            dVar40 = dVar42;
            if (dVar42 - dVar38 < 0.0) {
              dVar40 = (double)(fVar4 * fVar1);
            }
            if (dVar38 - dVar42 < 0.0) {
              dVar37 = (double)(fVar3 * fVar1);
            }
            if (dVar38 - dVar42 < 0.0) {
              dVar39 = (double)(fVar2 * fVar1);
            }
            if (dVar38 - dVar42 < 0.0) {
              dVar40 = (double)(fVar4 * fVar1);
            }
            *(float *)(iVar12 + 0x30) = (float)dVar37;
            *(float *)(iVar12 + 0x34) = (float)dVar39;
            *(float *)(iVar12 + 0x38) = (float)(dVar40 + 0.019999999552965164);
          }
        }
        iVar12 = (int)(lVar6 << 4);
        local_1d0 = *(float *)((int)&DAT_010db610 + iVar12);
        local_1cc = *(float *)((int)&DAT_010db614 + iVar12);
        local_1c8 = *(float *)((int)&DAT_010db618 + iVar12);
        local_1c4 = *(float *)((int)&DAT_010db61c + iVar12);
        local_1b4 = 0;
        local_1b8 = 0;
        local_1bc = 0;
        local_1c0 = 0;
        uVar28 = mobyutil::MB_randRangeFloat(60000.0,180000.0);
        iVar12 = partupd::SpawnPart_23
                           (dVar42,0x3ff0000000000000,0x3ff0000000000000,uVar28,&local_1d0);
        *(int *)((int)&DAT_010da360 + iVar7) = iVar12;
        if (iVar12 != 0) {
          iVar23 = iVar23 + 1;
          *(undefined2 *)(iVar12 + 10) = 200;
          *(undefined4 *)(iVar12 + 0x24) = 2;
          *(undefined1 *)(iVar12 + 0x2a) = 0x7f;
          *(undefined1 *)(iVar12 + 0x2b) = 200;
        }
        *(short *)((int)&DAT_010da34c + iVar7) = (short)lVar6;
        *(undefined4 *)((int)&DAT_010da350 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_010da354 + iVar7) = 0;
        uVar13 = mobyutil::MB_randInt(0x14);
        *(undefined2 *)((int)&DAT_010da34e + iVar7) = uVar13;
        dVar37 = (double)mobyutil::MB_randRangeFloat((float)dVar24,0.8);
        *(float *)((int)&DAT_010da358 + iVar7) = (float)dVar37;
        dVar37 = (double)mobyutil::MB_randRangeFloat((float)dVar24,0.4);
        iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
        *(float *)((int)&DAT_010da35c + iVar7) = (float)dVar37;
      }
    }
    if (iVar12 != 0) {
      iVar10 = (int)((longlong)*(short *)((int)&DAT_010da34c + iVar7) << 4);
      dVar39 = (double)(*(float *)(iVar10 + 0x10db604) - *(float *)((int)&DAT_010db614 + iVar10));
      dVar40 = (double)(*(float *)(iVar10 + 0x10db600) - *(float *)((int)&DAT_010db610 + iVar10));
      dVar38 = (double)(*(float *)(iVar10 + 0x10db608) - *(float *)((int)&DAT_010db618 + iVar10));
      *(float *)((int)&DAT_010da350 + iVar7) =
           *(float *)((int)&DAT_010da350 + iVar7) + *(float *)((int)&DAT_010da35c + iVar7);
      *(undefined2 *)(iVar12 + 10) = 200;
      dVar37 = (double)SQRT((float)(dVar38 * dVar38 +
                                   (double)(float)(dVar40 * dVar40 +
                                                  (double)(float)(dVar39 * dVar39))));
      if (dVar37 < (double)*(float *)((int)&DAT_010da350 + iVar7)) {
        sVar16 = *(short *)((int)&DAT_010da34c + iVar7) + -1;
        *(short *)((int)&DAT_010da34c + iVar7) = sVar16;
        if (sVar16 < 1) {
          partproc::DeletePart(*(undefined4 *)((int)&DAT_010da360 + iVar7));
          *(undefined4 *)((int)&DAT_010da360 + iVar7) = 0;
        }
        else {
          iVar12 = (int)((longlong)*(short *)((int)&DAT_010da34c + iVar7) << 4);
          *(float *)((int)&DAT_010da350 + iVar7) =
               (float)((double)*(float *)((int)&DAT_010da350 + iVar7) - dVar37);
          dVar39 = (double)(*(float *)(iVar12 + 0x10db604) - *(float *)((int)&DAT_010db614 + iVar12)
                           );
          dVar40 = (double)(*(float *)(iVar12 + 0x10db600) - *(float *)((int)&DAT_010db610 + iVar12)
                           );
          dVar38 = (double)(*(float *)(iVar12 + 0x10db608) - *(float *)((int)&DAT_010db618 + iVar12)
                           );
          dVar37 = (double)SQRT((float)(dVar38 * dVar38 +
                                       (double)(float)(dVar40 * dVar40 +
                                                      (double)(float)(dVar39 * dVar39))));
        }
      }
      if (*(int *)((int)&DAT_010da360 + iVar7) != 0) {
        dVar37 = (double)(float)((double)*(float *)((int)&DAT_010da350 + iVar7) / dVar37);
        if (*(short *)((int)&DAT_010da34c + iVar7) == 2) {
          *(undefined2 *)(*(int *)((int)&DAT_010da360 + iVar7) + 10) = 100;
        }
        else if (*(short *)((int)&DAT_010da34c + iVar7) < 2) {
          uVar13 = fastfunc::FastDoubleToInt((double)((float)(1.0 - dVar37) * 100.0));
          *(undefined2 *)(*(int *)((int)&DAT_010da360 + iVar7) + 10) = uVar13;
          if (*(short *)(*(int *)((int)&DAT_010da360 + iVar7) + 10) < 0x3d) {
            *(undefined2 *)(*(int *)((int)&DAT_010da360 + iVar7) + 10) = 0x3c;
          }
        }
        if (*(short *)((int)&DAT_010da34c + iVar7) == 1) {
          iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
          fVar2 = (float)((double)param_2[1] - (double)*(float *)(iVar12 + 0x14));
          fVar3 = (float)((double)*param_2 - (double)*(float *)(iVar12 + 0x10));
          fVar4 = (float)((double)param_2[2] - (double)*(float *)(iVar12 + 0x18));
          dVar38 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          fVar1 = (float)((double)*(float *)((int)&DAT_010da35c + iVar7) / dVar38);
          dVar37 = dVar42;
          if (dVar42 - dVar38 < 0.0) {
            dVar37 = (double)(fVar1 * fVar4);
          }
          dVar39 = dVar42;
          if (dVar42 - dVar38 < 0.0) {
            dVar39 = (double)(fVar1 * fVar2);
          }
          dVar40 = dVar42;
          if (dVar42 - dVar38 < 0.0) {
            dVar40 = (double)(fVar1 * fVar3);
          }
          if (dVar38 - dVar42 < 0.0) {
            dVar37 = (double)(fVar1 * fVar4);
          }
          if (dVar38 - dVar42 < 0.0) {
            dVar39 = (double)(fVar1 * fVar2);
          }
          if (dVar38 - dVar42 < 0.0) {
            dVar40 = (double)(fVar1 * fVar3);
          }
          *(float *)(iVar12 + 0x18) = (float)((double)*(float *)(iVar12 + 0x18) + dVar37);
          *(float *)(iVar12 + 0x14) = (float)((double)*(float *)(iVar12 + 0x14) + dVar39);
          *(float *)(iVar12 + 0x10) = (float)((double)*(float *)(iVar12 + 0x10) + dVar40);
          *(float *)(*(int *)((int)&DAT_010da360 + iVar7) + 0xc) =
               *(float *)(*(int *)((int)&DAT_010da360 + iVar7) + 0xc) *
               (DAT_0071f408 * -0.050000012 + 1.0);
        }
        else {
          iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
          iVar10 = (int)((longlong)*(short *)((int)&DAT_010da34c + iVar7) << 4);
          *(float *)(iVar12 + 0x10) =
               (float)(dVar40 * dVar37 + (double)*(float *)((int)&DAT_010db610 + iVar10));
          *(float *)(iVar12 + 0x14) =
               (float)(dVar39 * dVar37 + (double)*(float *)((int)&DAT_010db614 + iVar10));
          *(float *)(iVar12 + 0x18) =
               (float)(dVar38 * dVar37 + (double)*(float *)((int)&DAT_010db618 + iVar10));
          *(undefined4 *)(iVar12 + 0x1c) = *(undefined4 *)((int)&DAT_010db61c + iVar10);
          sVar16 = *(short *)((int)&DAT_010da34e + iVar7);
          mobyutil::Lerp_vec4((float)dVar37,&local_1b0);
          iVar10 = sVar16 + 0x13;
          mobyutil::Lerp_vec4((float)dVar37,local_1a0);
          mobyutil::Lerp_vec4(*(float *)((int)&DAT_010da354 + iVar7),&local_1b0);
          fVar1 = *(float *)((int)&DAT_010da354 + iVar7) + *(float *)((int)&DAT_010da358 + iVar7);
          iVar12 = *(int *)((int)&DAT_010da360 + iVar7);
          *(float *)((int)&DAT_010da354 + iVar7) = fVar1;
          if (1.0 <= fVar1) {
            *(short *)((int)&DAT_010da34e + iVar7) = (short)iVar10 + (short)(iVar10 / 0x14) * -0x14;
            *(float *)((int)&DAT_010da354 + iVar7) = fVar1 - 1.0;
          }
          *(float *)(iVar12 + 0x10) = *(float *)(iVar12 + 0x10) + local_1b0;
          *(float *)(iVar12 + 0x14) = *(float *)(iVar12 + 0x14) + local_1ac;
          *(float *)(iVar12 + 0x18) = *(float *)(iVar12 + 0x18) + local_1a8;
        }
      }
    }
    iVar21 = iVar21 + 1;
    iVar7 = iVar7 + 0x18;
    if (199 < iVar21) {
      return;
    }
  } while( true );
}



//==== 00488250  ns=mobyupdate_helpers  size=0x750
// sig: undefined M849_00488250(void)
// callers(1): 00488eb0 mobyupdate_unsorted::UpdateMoby_849
// callees(7): 00057820 collproc::CollLine; 004860f8 mobyupdate_helpers::M849_004860f8; 00486220 mobyupdate_helpers::M849_00486220; 004864f0 mobyupdate_helpers::M849_004864f0; 00486608 mobyupdate_helpers::M849_00486608; 00486bf8 mobyupdate_helpers::M849_00486bf8; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M849_00488250(int param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int iVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar17;
  int iVar18;
  longlong lVar16;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar14 = ZEXT48(&stack0x00000000);
  uVar15 = ZEXT48(&TOC_BASE);
  lVar1 = uVar14 - 0x140;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar14;
  puVar11[0x2a] = in_LR;
  puVar11[0x24] = in_f28;
  puVar11[0x25] = in_f29;
  puVar11[0x26] = in_f30;
  puVar11[0x27] = in_f31;
  puVar11[0x23] = unaff_r31;
  puVar11[0x21] = unaff_r29;
  puVar11[0x22] = unaff_r30;
  puVar11[0x20] = unaff_r28;
  puVar11[0x1f] = unaff_r27;
  M849_004864f0(param_1,uVar14 - 0xb0,uVar14 - 0xac,uVar14 - 0xd0);
  M849_00486bf8(param_1,uVar14 - 0xd0);
  iVar10 = MobyUpdateChainStart;
  do {
    if (iVar10 == 0) {
      return;
    }
    if ((*(short *)(iVar10 + 0xa6) == 0) || ((*(ushort *)(iVar10 + 0x34) & 0x1000) == 0)) {
LAB_00488958:
      M849_00486608(iVar10);
    }
    else {
      piVar7 = *(int **)(*(int *)(iVar10 + 0x24) + 0x2c);
      if ((undefined **)*piVar7 == &PTR_M849_0048a6c8_0070f040) goto LAB_00488958;
      if ((((*(char *)(iVar10 + 0x20) != -2) && (*(char *)(iVar10 + 0x20) != -3)) &&
          (*(int *)(iVar10 + 0x78) != 0)) &&
         ((*(int *)(iVar10 + 0x24) != 0 &&
          (puVar8 = (undefined4 *)piVar7[4], puVar8 != (undefined4 *)0x0)))) {
        pcVar9 = (code *)*puVar8;
        puVar11[5] = uVar15;
        iVar17 = (*pcVar9)(iVar10);
        uVar15 = puVar11[5];
        if ((iVar17 != 0) && (*(short *)(iVar17 + 0x68) < 6)) {
          fVar2 = *(float *)(param_1 + 0x14) - *(float *)(iVar10 + 0x14);
          fVar3 = *(float *)(param_1 + 0x10) - *(float *)(iVar10 + 0x10);
          dVar29 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
          if (dVar29 < 15.0) {
            iVar18 = M849_004860f8();
            fVar2 = *(float *)(param_1 + 0x10);
            fVar3 = *(float *)(param_1 + 0x14);
            if ((iVar18 == 0) &&
               (DAT_0096bd58 <
                (int)(((uint)((LZCOUNT(-(uint)g_goldWeaponsArray.suckCannon) << 0x3a) >> 0x3f) &
                      0xfffffffb) + 10))) {
              if (*(short *)(iVar17 + 0x68) < 3) {
                *(undefined2 *)(iVar17 + 0x6a) = 0xffff;
                fVar4 = *(float *)(iVar10 + 0x10);
                *(float *)(puVar11 + 0x10) = fVar4;
                fVar4 = fVar4 - fVar2;
                fVar3 = *(float *)(iVar10 + 0x14) - fVar3;
                *(float *)((int)puVar11 + 0x84) = *(float *)(iVar10 + 0x14);
                fVar2 = *(float *)(iVar10 + 0x18);
                *(float *)(puVar11 + 0x11) = fVar2;
                *(undefined4 *)((int)puVar11 + 0x8c) = *(undefined4 *)(iVar10 + 0x1c);
                fVar5 = ABS(fVar4);
                fVar6 = ABS(fVar3);
                *(float *)((int)puVar11 + 0xa4) = fVar4;
                *(float *)(puVar11 + 0x15) = fVar3;
                *(float *)(puVar11 + 0x11) = fVar2 + 0.4;
                *(float *)((int)puVar11 + 0xac) = fVar5 - fVar6;
                dVar27 = 0.0;
                fVar2 = 0.04386491;
                if (dVar29 - 3.0 < 0.0) {
                  fVar2 = 3.6858706;
                }
                dVar26 = (double)fVar2;
                fVar2 = *(float *)(puVar11 + 0x12);
                uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1d) & 4;
                fVar3 = ABS(*(float *)((int)puVar11 + 0xa4));
                if (*(float *)((int)puVar11 + 0xac) - 0.0 < 0.0) {
                  fVar3 = fVar6;
                }
                fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
                fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
                fVar13 = ABS(*(float *)(puVar11 + 0x15));
                if (*(float *)((int)puVar11 + 0xac) - 0.0 < 0.0) {
                  fVar13 = fVar5;
                }
                dVar28 = 0.7853981852531433;
                dVar24 = dVar27;
                if (0.0 < fVar3) {
                  lVar16 = uVar14 - 0x130;
                  lVar22 = uVar14 - 0x60;
                  lVar19 = uVar14 - 0x70;
                  lVar23 = 2;
                  fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
                  fVar5 = fVar3 * fVar3;
                  *(float *)((int)puVar11 + 0xdc) = fVar3;
                  *(float *)((int)puVar11 + 0xd4) = fVar3;
                  *(float *)(puVar11 + 0x1b) = fVar3;
                  *(float *)(puVar11 + 0x1a) = fVar3;
                  fVar3 = fVar5 * fVar5;
                  *(float *)((int)puVar11 + 0xd4) = *(float *)((int)puVar11 + 0xd4) * fVar5;
                  *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar3;
                  *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar3 * fVar5;
                  do {
                    *(float *)((int)lVar16 + 0xd0) = *(float *)((int)lVar16 + 0xc0) * fVar3 * fVar3;
                    iVar18 = (int)lVar19;
                    lVar19 = lVar19 + 8;
                    lVar16 = lVar16 + 8;
                    *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
                    lVar22 = lVar22 + 8;
                    lVar23 = lVar23 + -1;
                  } while (lVar23 != 0);
                  lVar23 = 4;
                  lVar22 = uVar14 - 0x70;
                  pfVar20 = (float *)&DAT_007358e0;
                  lVar16 = lVar1;
                  lVar19 = lVar22;
                  do {
                    fVar3 = *pfVar20;
                    fVar5 = pfVar20[1];
                    pfVar20 = pfVar20 + 2;
                    *(float *)((int)lVar16 + 0xd0) = *(float *)((int)lVar16 + 0xd0) * fVar3;
                    lVar16 = lVar16 + 8;
                    *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
                    lVar19 = lVar19 + 8;
                    lVar23 = lVar23 + -1;
                  } while (lVar23 != 0);
                  lVar19 = 2;
                  lVar16 = lVar1;
                  do {
                    iVar18 = (int)lVar16;
                    iVar12 = (int)lVar22;
                    lVar16 = lVar16 + 0x10;
                    lVar22 = lVar22 + 0x10;
                    dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0xd0)) +
                                      *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                                     *(float *)(iVar12 + 0xc));
                    lVar19 = lVar19 + -1;
                  } while (lVar19 != 0);
                  dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar4);
                }
                dVar24 = (double)fastfunc::FastSubRots(fVar2,(float)dVar24);
                fVar2 = *(float *)((int)puVar11 + 0x94);
                if (dVar26 <= (double)(float)(dVar24 * dVar24)) {
                  if ((0 < *(short *)(iVar17 + 0x68)) &&
                     (puVar8 = *(undefined4 **)(*(int *)(*(int *)(iVar10 + 0x24) + 0x2c) + 0xc),
                     puVar8 != (undefined4 *)0x0)) {
                    pcVar9 = (code *)*puVar8;
                    puVar11[5] = uVar15;
                    (*pcVar9)(iVar10);
                    uVar15 = puVar11[5];
                  }
                }
                else {
                  fVar3 = *(float *)(param_1 + 0x18);
                  *(float *)(puVar11 + 0x13) = (float)dVar29;
                  fVar3 = *(float *)(puVar11 + 0x11) - fVar3;
                  dVar25 = ABS((double)fVar3);
                  *(float *)((int)puVar11 + 0x9c) = fVar3;
                  *(float *)(puVar11 + 0x14) = (float)(ABS(dVar29) - dVar25);
                  uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1d) & 4;
                  dVar24 = ABS((double)*(float *)(puVar11 + 0x13));
                  if ((double)*(float *)(puVar11 + 0x14) - dVar27 < 0.0) {
                    dVar24 = dVar25;
                  }
                  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
                  dVar25 = ABS((double)*(float *)((int)puVar11 + 0x9c));
                  if ((double)*(float *)(puVar11 + 0x14) - dVar27 < 0.0) {
                    dVar25 = ABS(dVar29);
                  }
                  fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
                  if (dVar27 < dVar24) {
                    lVar16 = uVar14 - 0x130;
                    lVar22 = uVar14 - 0x80;
                    lVar19 = uVar14 - 0x90;
                    lVar23 = 2;
                    fVar6 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
                    fVar5 = fVar6 * fVar6;
                    *(float *)((int)puVar11 + 0xbc) = fVar6;
                    *(float *)((int)puVar11 + 0xb4) = fVar6;
                    *(float *)(puVar11 + 0x17) = fVar6;
                    *(float *)(puVar11 + 0x16) = fVar6;
                    fVar6 = fVar5 * fVar5;
                    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar5;
                    *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
                    *(float *)((int)puVar11 + 0xbc) =
                         *(float *)((int)puVar11 + 0xbc) * fVar6 * fVar5;
                    do {
                      *(float *)((int)lVar16 + 0xb0) =
                           *(float *)((int)lVar16 + 0xa0) * fVar6 * fVar6;
                      iVar18 = (int)lVar19;
                      lVar19 = lVar19 + 8;
                      lVar16 = lVar16 + 8;
                      *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
                      lVar22 = lVar22 + 8;
                      lVar23 = lVar23 + -1;
                    } while (lVar23 != 0);
                    lVar23 = 4;
                    lVar22 = uVar14 - 0x90;
                    pfVar20 = (float *)&DAT_007358e0;
                    lVar16 = lVar1;
                    lVar19 = lVar22;
                    do {
                      fVar6 = *pfVar20;
                      fVar5 = pfVar20[1];
                      pfVar20 = pfVar20 + 2;
                      *(float *)((int)lVar16 + 0xb0) = *(float *)((int)lVar16 + 0xb0) * fVar6;
                      lVar16 = lVar16 + 8;
                      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
                      lVar19 = lVar19 + 8;
                      lVar23 = lVar23 + -1;
                    } while (lVar23 != 0);
                    lVar19 = 2;
                    lVar16 = lVar1;
                    do {
                      iVar18 = (int)lVar16;
                      iVar12 = (int)lVar22;
                      lVar16 = lVar16 + 0x10;
                      lVar22 = lVar22 + 0x10;
                      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0xb0)) +
                                        *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                                       *(float *)(iVar12 + 0xc));
                      lVar19 = lVar19 + -1;
                    } while (lVar19 != 0);
                    dVar27 = (double)((float)(dVar27 + dVar28) * fVar3 + fVar4);
                  }
                  dVar29 = (double)fastfunc::FastSubRots(fVar2,(float)dVar27);
                  if (dVar26 <= (double)(float)(dVar29 * dVar29)) {
                    if ((0 < *(short *)(iVar17 + 0x68)) &&
                       (puVar8 = *(undefined4 **)(*(int *)(*(int *)(iVar10 + 0x24) + 0x2c) + 0xc),
                       puVar8 != (undefined4 *)0x0)) {
                      pcVar9 = (code *)*puVar8;
                      puVar11[5] = uVar15;
                      (*pcVar9)(iVar10);
                      uVar15 = puVar11[5];
                    }
                  }
                  else {
                    iVar18 = collproc::CollLine(uVar14 - 0xd0,uVar14 - 0xc0,2,iVar10,0);
                    if (iVar18 == 0) {
                      M849_00486220(param_1,param_2,iVar10,iVar17,uVar14 - 0xd0);
                    }
                    else if ((0 < *(short *)(iVar17 + 0x68)) &&
                            (puVar8 = *(undefined4 **)
                                       (*(int *)(*(int *)(iVar10 + 0x24) + 0x2c) + 0xc),
                            puVar8 != (undefined4 *)0x0)) {
                      pcVar9 = (code *)*puVar8;
                      puVar11[5] = uVar15;
                      (*pcVar9)(iVar10);
                      uVar15 = puVar11[5];
                    }
                  }
                }
              }
              else if (*(short *)(iVar17 + 0x68) < 4) {
                M849_00486220(param_1,param_2,iVar10,iVar17,uVar14 - 0xd0);
              }
              goto LAB_00488960;
            }
          }
          if ((*(short *)(iVar17 + 0x68) != 0) &&
             (puVar8 = *(undefined4 **)(*(int *)(*(int *)(iVar10 + 0x24) + 0x2c) + 0xc),
             puVar8 != (undefined4 *)0x0)) {
            pcVar9 = (code *)*puVar8;
            puVar11[5] = uVar15;
            (*pcVar9)(iVar10);
            uVar15 = puVar11[5];
          }
        }
      }
    }
LAB_00488960:
    iVar10 = *(int *)(iVar10 + 0x28);
  } while( true );
}



//==== 004889a0  ns=mobyupdate_helpers  size=0x1bc
// sig: undefined M849_004889a0(void)
// callers(1): 00488eb0 mobyupdate_unsorted::UpdateMoby_849
// callees(1): 005cd098 libc::printf
// strings: 006586a8: 'cleaned up moby:%d (oclass:%d)\n'

void mobyupdate_helpers::M849_004889a0(void)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  iVar4 = 0;
  puVar5 = &hero::g_heroMtx;
  DAT_0096bd5c = 0;
  piVar6 = &DAT_0096bd30;
  DAT_0096bd58 = 0;
  do {
    if ((int)(((uint)((LZCOUNT(-(uint)g_goldWeaponsArray.suckCannon) << 0x3a) >> 0x3f) & 0xfffffffb)
             + 10) <= iVar4) {
      return;
    }
    if (*piVar6 != 0) {
      iVar3 = puVar5[0x814];
      if ((((iVar3 != 0) && (*(char *)(iVar3 + 0x20) != -2)) && (*(char *)(iVar3 + 0x20) != -3)) &&
         ((*(int *)(iVar3 + 0x78) != 0 && (*(int *)(iVar3 + 0x24) != 0)))) {
        puVar2 = *(undefined4 **)(*(int *)(*(int *)(iVar3 + 0x24) + 0x2c) + 0x10);
        if (puVar2 != (undefined4 *)0x0) {
          iVar3 = (*(code *)*puVar2)(iVar3);
          if (iVar3 != 0) {
            sVar1 = *(short *)(iVar3 + 0x68);
            if ((sVar1 < 5 && 2 < sVar1) && (*(short *)(iVar3 + 0x6a) != -1)) {
              if (sVar1 == 3) {
                DAT_0096bd5c = DAT_0096bd5c + 1;
              }
              else if (sVar1 == 4) {
                DAT_0096bd58 = DAT_0096bd58 + 1;
              }
              goto LAB_00488b24;
            }
          }
        }
      }
      libc::printf("cleaned up moby:%d (oclass:%d)\n",*(undefined2 *)(*piVar6 + 0xb2),
                   *(undefined2 *)(*piVar6 + 0xa6));
      *piVar6 = 0;
    }
LAB_00488b24:
    puVar5 = puVar5 + 1;
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + 1;
  } while( true );
}



//==== 00488b5c  ns=mobyupdate_helpers  size=0x88
// sig: undefined M849_00488b5c(void)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

void mobyupdate_helpers::M849_00488b5c(MobyInstance *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  
  if (0 < DAT_010db6d8) {
    psVar2 = &DAT_010db6d8;
    lVar3 = 10;
    do {
      sVar1 = *psVar2;
      *psVar2 = sVar1 + ((ushort)(0x40 - (longlong)sVar1 >> 0x3f) & 0x40U - sVar1) + -4;
      psVar2 = psVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    RegisterFuncForMoby(&PTR_M849_0048d430_0070f0c0,param_1);
  }
  return;
}



//==== 00488bf8  ns=mobyupdate_helpers  size=0x23c
// sig: undefined M849_00488bf8(void)
// callers(1): 00488eb0 mobyupdate_unsorted::UpdateMoby_849
// callees(1): 0006d720 RegisterFuncForMoby

void mobyupdate_helpers::M849_00488bf8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float *pfVar18;
  short *psVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  
  iVar21 = 0;
  DAT_008ad150 = 1;
  DAT_008ad158 = DAT_008ad158 * 0.5;
  DAT_008ad154 = 1;
  psVar19 = &DAT_010da34c;
  piVar20 = &DAT_010da360;
  pfVar18 = (float *)&DAT_010da350;
  fVar1 = 0.0;
  do {
    iVar10 = *piVar20;
    if (iVar10 != 0) {
      iVar17 = (int)((longlong)*psVar19 << 4);
      fVar2 = *(float *)((int)&DAT_010db614 + iVar17);
      fVar13 = *(float *)(iVar17 + 0x10db604) - fVar2;
      fVar3 = *(float *)((int)&DAT_010db610 + iVar17);
      fVar15 = *(float *)(iVar17 + 0x10db600) - fVar3;
      fVar4 = *(float *)((int)&DAT_010db618 + iVar17);
      fVar14 = *(float *)(iVar17 + 0x10db608) - fVar4;
      fVar5 = *pfVar18;
      fVar6 = *(float *)(iVar10 + 0x14);
      fVar7 = *(float *)(iVar10 + 0x10);
      fVar8 = *(float *)(iVar10 + 0x18);
      fVar16 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13);
      *piVar20 = 0;
      *(undefined2 *)(iVar10 + 10) = 0x46;
      *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(iVar10 + 0x1c);
      fVar5 = fVar5 / fVar16;
      fVar16 = 0.1 / fVar16;
      fVar6 = fVar6 - (fVar2 + fVar13 * fVar5);
      fVar7 = fVar7 - (fVar3 + fVar15 * fVar5);
      fVar8 = fVar8 - (fVar4 + fVar14 * fVar5);
      fVar4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      fVar3 = 0.03 / fVar4;
      fVar2 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar2 = fVar3 * fVar8;
      }
      fVar12 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar12 = fVar3 * fVar6;
      }
      fVar11 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar11 = fVar3 * fVar7;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar2 = fVar3 * fVar8;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar12 = fVar3 * fVar6;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar11 = fVar3 * fVar7;
      }
      *(float *)(iVar10 + 0x38) = fVar14 * fVar5 * fVar16 + fVar2;
      *(float *)(iVar10 + 0x34) = fVar13 * fVar5 * fVar16 + fVar12;
      *(float *)(iVar10 + 0x30) = fVar15 * fVar5 * fVar16 + fVar11;
    }
    iVar21 = iVar21 + 1;
    piVar20 = piVar20 + 6;
    psVar19 = psVar19 + 0xc;
    pfVar18 = pfVar18 + 6;
  } while (iVar21 < 200);
  if (0 < DAT_010db6d8) {
    psVar19 = &DAT_010db6d8;
    lVar22 = 10;
    do {
      sVar9 = *psVar19;
      *psVar19 = sVar9 + ((ushort)(0x40 - (longlong)sVar9 >> 0x3f) & 0x40U - sVar9) + -4;
      psVar19 = psVar19 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    RegisterFuncForMoby(&PTR_M849_0048d430_0070f0c0,param_1);
  }
  return;
}



//==== 00488e34  ns=mobyupdate_helpers  size=0x24
// sig: undefined M849_00488e34(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M849_00488e34(void)

{
  DAT_008ad150 = 1;
  DAT_008ad154 = 1;
  DAT_010db6d8 = 0;
  return;
}



//==== 00488eb0  ns=mobyupdate_unsorted  size=0x1814
// sig: undefined UpdateMoby_849(MobyInstance * moby)
// callers(0): 
// callees(27): 00055284 camera::DrawTargetCrosshair; 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 000855b8 hero::Hero_EndFiringAnim; 00099ea8 hero::Hero_PlayFiringAnim; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00488250 mobyupdate_helpers::M849_00488250; 004889a0 mobyupdate_helpers::M849_004889a0; 00488bf8 mobyupdate_helpers::M849_00488bf8; 004fff60 fastfunc::FastDecTimerS32; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 0050162c fastfunc::FastVecMtx4Mul; 005026a0 fastfunc::FastSubRots; 005e825c FUN_005e825c; 005e8338 FUN_005e8338

/* Moby 849 */

void mobyupdate_unsorted::UpdateMoby_849(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  MobyInstance *moby_00;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  MobyInstance *pMVar17;
  MobyInstance *pMVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  longlong lVar21;
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
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  f32 local_2e4;
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  float local_2b0;
  float local_2ac;
  float local_2a8;
  Vec4 aVStack_2a0 [3];
  Vec4 aVStack_270 [3];
  undefined1 auStack_240 [64];
  undefined1 auStack_200 [64];
  undefined1 auStack_1c0 [64];
  undefined1 auStack_180 [64];
  Vec4 aVStack_140 [4];
  float local_100;
  longlong local_f8;
  float local_e8;
  
  lVar12 = (longlong)(int)moby;
  hud::RegisterHUDCallback
            (4,0x753f,&PTR_Moby849Hud_Init_00705798,&PTR_Moby849Hud_Update_007057a0,
             &PTR_Draw_Moby849Meter_007057b0,&DAT_0096bd58,5);
  iVar10 = DAT_0096ad94;
  pvVar8 = moby->pVar;
  uVar20 = ZEXT48(pvVar8);
  if (((moby->state != '\x03') && (moby->state != '\0')) && (0 < DAT_010db6d8)) {
    psVar13 = &DAT_010db6d8;
    lVar21 = 10;
    do {
      sVar7 = *psVar13;
      *psVar13 = sVar7 + ((ushort)(0x40 - (longlong)sVar7 >> 0x3f) & 0x40U - sVar7) + -4;
      psVar13 = psVar13 + 1;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    RegisterFuncForMoby(&PTR_M849_0048d430_0070f0c0,moby);
  }
  mobyupdate_helpers::M849_004889a0();
  uVar2 = moby->state;
  if (uVar2 == '\x05') {
    dVar22 = (double)mobyfunc::BlendAnimFrame(moby);
    pMVar19 = (MobyInstance *)0x0;
    dVar43 = 0.0;
    if (0.0 <= dVar22) {
      iVar14 = 0;
      piVar16 = &DAT_0096bd30;
      iVar15 = ((uint)((LZCOUNT(-(uint)g_goldWeaponsArray.suckCannon) << 0x3a) >> 0x3f) & 0xfffffffb
               ) + 10;
      if (0 < iVar15) {
        do {
          if (*piVar16 != 0) {
            pMVar19 = (MobyInstance *)(&DAT_0096bd30)[iVar14];
            (&DAT_0096bd30)[iVar14] = 0;
            break;
          }
          iVar14 = iVar14 + 1;
          piVar16 = piVar16 + 1;
        } while (iVar14 < iVar15);
        if (pMVar19 != (MobyInstance *)0x0) {
          local_300 = 0.0;
          local_2fc = 0.0;
          local_2f8 = 0.0;
          fastfunc::FastApplyTransform(aVStack_270,(Vec4 *)&GameCamera);
          fastfunc::FastNormalizeRMtx4(auStack_200,aVStack_270);
          if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) &&
             ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
            FUN_005e825c(&local_300,local_2e0,auStack_200);
            FUN_005e825c(&local_2f0,local_2d0,auStack_200);
            local_2f0 = local_2f0 + GameCamera.posX;
            local_2ec = local_2ec + GameCamera.posY;
            local_2e8 = local_2e8 + GameCamera.posZ;
          }
          else {
            local_2f8 = DAT_0071f408 * 0.4462;
            local_300 = DAT_0096a320 * local_2f8;
            local_2fc = DAT_0096a324 * local_2f8;
            local_2f8 = DAT_0096a328 * local_2f8;
            mobyfunc::GetBonePosition(lVar12,0,&local_2f0);
          }
          (pMVar19->pos).x = local_2f0;
          (pMVar19->pos).y = local_2ec;
          (pMVar19->pos).z = local_2e8;
          (pMVar19->pos).w = local_2e4;
          mobyfunc::PostUpdateMobyLockTransform(pMVar19);
          local_300 = local_300 + DAT_00969de0;
          local_2fc = local_2fc + DAT_00969de4;
          local_2f8 = local_2f8 + DAT_00969de8;
          dVar22 = (double)DAT_0096af9c;
          if ((g_heroState != WEAPON_FIRST_PERSON_VIEW) ||
             ((g_heroMobyPtr->modeBits & DISABLED) == NONE)) {
            dVar38 = 10000.0;
            if (DAT_0096af90 == 0) {
              dVar22 = (double)FUN_005e8338();
            }
            dVar23 = (double)FUN_005e8338((double)SQRT(local_300 * local_300 + local_2fc * local_2fc
                                                      ),(double)local_2f8);
            pMVar17 = (MobyInstance *)0x0;
            dVar23 = -dVar23;
            if (MobyUpdateChainStart != (MobyInstance *)0x0) {
              dVar32 = 2.5;
              dVar33 = 1.0471975803375244;
              dVar34 = 0.7853981852531433;
              dVar35 = 2.0;
              dVar44 = 1.0;
              dVar42 = 1.5707963705062866;
              dVar39 = 0.45378559827804565;
              dVar36 = 0.0009765625;
              dVar37 = 0.1745329201221466;
              local_100 = 0.5;
              dVar40 = -1.0;
              moby_00 = MobyUpdateChainStart;
              do {
                if (moby_00->state < 0x80 && moby_00 != pMVar19) {
                  fVar3 = (moby_00->pos).x;
                  fVar4 = (moby_00->pos).y;
                  fVar5 = (moby_00->pos).z;
                  iVar14 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
                  fVar6 = local_100;
                  if (iVar14 != 0) {
                    fVar6 = *(float *)(iVar14 + 0x10);
                  }
                  fVar5 = fVar5 + fVar6;
                  if ((((moby_00->modeBits & CAN_BE_AUTO_TARGETED) != NONE) &&
                      (moby_00->pClass != (MobyClass *)0x0)) &&
                     ((short)moby_00->pClass->mode_bits == 5)) {
                    dVar24 = (double)FUN_005e8338((double)(fVar3 - local_2f0),
                                                  (double)(fVar4 - local_2ec));
                    dVar25 = (double)FUN_005e8338((double)SQRT((local_2f0 - fVar3) *
                                                               (local_2f0 - fVar3) +
                                                               (local_2ec - fVar4) *
                                                               (local_2ec - fVar4)),
                                                  (double)(fVar5 - local_2e8));
                    dVar26 = (double)fastfunc::FastSubRots((float)dVar22,(float)dVar24);
                    dVar45 = (double)SQRT((local_2e8 - fVar5) * (local_2e8 - fVar5) +
                                          (local_2f0 - fVar3) * (local_2f0 - fVar3) +
                                          (local_2ec - fVar4) * (local_2ec - fVar4));
                    if (dVar45 < dVar32) {
                      local_e8 = (float)dVar40;
                      dVar41 = (double)DAT_0096a368;
                      dVar40 = (double)FUN_005e8338((double)((moby_00->pos).x - g_heroPosition.x),
                                                    (double)((moby_00->pos).y - g_heroPosition.y));
                      dVar41 = (double)fastfunc::FastSubRots((float)dVar41,(float)dVar40);
                      dVar40 = (double)local_e8;
                      if ((dVar41 < dVar33) && (pMVar18 = moby_00, ABS(dVar25) < dVar34)) break;
                    }
                    if (dVar45 <= dVar38) {
                      mobyutil::MB_SphericalToVector
                                ((float)dVar45,(float)dVar22,(float)dVar23,&local_2b0);
                      local_2ac = local_2ac + local_2ec;
                      local_2b0 = local_2b0 + local_2f0;
                      local_2a8 = local_2a8 + local_2e8;
                      fVar3 = SQRT((local_2a8 - fVar5) * (local_2a8 - fVar5) +
                                   (local_2b0 - fVar3) * (local_2b0 - fVar3) +
                                   (local_2ac - fVar4) * (local_2ac - fVar4));
                      dVar27 = (double)(float)(dVar44 - (double)((fVar3 * fVar3) /
                                                                (float)((double)(float)(dVar45 * 
                                                  dVar35) * dVar45)));
                      dVar41 = dVar27;
                      if (dVar27 - dVar43 < 0.0) {
                        dVar41 = ABS(dVar27);
                      }
                      dVar30 = dVar44;
                      if (dVar27 - dVar43 < 0.0) {
                        dVar30 = dVar40;
                      }
                      dVar27 = (double)(float)(dVar44 - dVar41);
                      if ((double)(float)(dVar44 - dVar41) - dVar43 < 0.0) {
                        dVar27 = dVar43;
                      }
                      dVar41 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(
                                                  dVar41 * dVar41) * dVar41) * DAT_007358cc +
                                                  (float)((double)(float)(dVar41 * dVar41) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar41 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar27) - dVar42) * dVar30 -
                                               dVar42);
                      if (dVar39 < dVar41) {
                        dVar30 = (double)(float)((double)(moby_00->bSphere).rad * dVar36);
                        dVar31 = (double)(float)(dVar45 / (double)SQRT((float)(dVar45 * dVar45 +
                                                                              (double)(float)(dVar30
                                                                                             * 
                                                  dVar30))));
                        dVar27 = dVar31;
                        if (dVar31 - dVar43 < 0.0) {
                          dVar27 = ABS(dVar31);
                        }
                        dVar28 = (double)(float)(dVar44 - dVar27);
                        if ((double)(float)(dVar44 - dVar27) - dVar43 < 0.0) {
                          dVar28 = dVar43;
                        }
                        dVar29 = dVar44;
                        if (dVar31 - dVar43 < 0.0) {
                          dVar29 = dVar40;
                        }
                        if (dVar30 < dVar45) {
                          dVar41 = (double)(float)(dVar41 - -(double)(float)(-(double)(float)((
                                                  double)((float)((double)(float)(dVar27 * dVar27) *
                                                                 dVar27) * DAT_007358cc +
                                                         (float)((double)(float)(dVar27 * dVar27) *
                                                                 (double)DAT_007358c8 +
                                                                (double)(float)(dVar27 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar28) - dVar42) * dVar29 -
                                                  dVar42));
                        }
                      }
                      if (dVar41 < dVar39) {
                        dVar38 = dVar45;
                        iVar14 = collproc::CollLine(0x951500,local_2c0,6,lVar12,0);
                        pMVar18 = pMVar17;
                        if (iVar14 != 0) break;
                        dVar23 = -dVar25;
                        if (dVar26 < dVar37) {
                          dVar22 = dVar24;
                          pMVar17 = moby_00;
                        }
                      }
                    }
                  }
                }
                moby_00 = (MobyInstance *)moby_00->pChain;
                pMVar18 = pMVar17;
              } while (moby_00 != (MobyInstance *)0x0);
              if (pMVar18 != (MobyInstance *)0x0) {
                *(MobyInstance **)((int)pvVar8 + 0x10) = pMVar18;
              }
            }
          }
          fastfunc::FastEulerToMtx1(auStack_1c0,&DAT_008ad140);
          fastfunc::FastMtxCopyNoTranslate(auStack_180,lVar12 + 0xc0);
          fastfunc::FastVecMtx4Mul(aVStack_140,auStack_180,auStack_1c0);
          fastfunc::FastApplyTransform(&(pMVar19->transform).v0,aVStack_140);
          pMVar19->modeBits = pMVar19->modeBits | NO_POST_UPDATE;
          mobyfunc::PostUpdateMobyLockTransform(pMVar19);
          puVar9 = *(undefined4 **)(*(int *)&pMVar19->pClass->bangles + 8);
          if (puVar9 != (undefined4 *)0x0) {
            (*(code *)*puVar9)((double)*(float *)((int)pvVar8 + 0x18),pMVar19,&local_300,
                               *(undefined4 *)((int)pvVar8 + 0x10));
          }
          DAT_0096bd58 = DAT_0096bd58 + -1;
          if (DAT_0096bd58 < 1) {
            auVar46 = ZEXT416(0xffffffff);
            auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
            auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
            auVar46 = loadVectorLeftIndexed(0x14,0x488e58);
            auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar46 = vectorMultiplyAddFloatingPoint
                                (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 |
                                         auVar46 << 0x60,auVar47);
            auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
            auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,8,
                                uVar20);
            *(undefined4 *)((int)pvVar8 + 8U & 0xfffffffc) = uVar11;
            DAT_0096ad8c = 0;
            moby->state = '\x01';
          }
          else {
            DAT_0096ad8c = 0;
            moby->state = '\x04';
          }
        }
      }
    }
    goto LAB_0048a5c0;
  }
  if (uVar2 == '\x04') {
    fastfunc::FastDecTimerS32(uVar20 + 8);
    if (*(int *)((int)pvVar8 + 8) == 0) {
      hero::Hero_EndFiringAnim();
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      local_f8 = (longlong)(int)(animationSpeed * 0.5);
      mobyutil::MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 0.5));
      hero::Hero_EndFiringAnim();
    }
    if ((g_downButtons & DAT_0096ad80) == 0) {
      *(undefined4 *)((int)pvVar8 + 0xc) = 0;
    }
    iVar14 = fastfunc::FastDecTimerS32(uVar20 + 0x14);
    if ((iVar14 != 0) ||
       ((*(int *)((int)pvVar8 + 0x10) != 0 &&
        ((*(byte *)(*(int *)((int)pvVar8 + 0x10) + 0x20) & 0x80) != 0)))) {
      *(undefined4 *)((int)pvVar8 + 0x10) = 0;
    }
    if (g_heroState == FIRST_PERSON_VIEW) {
      hero::TransitionMovement(0x1e,1);
    }
    if (((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE)
        ) && (DAT_0096bd8c == '\0')) {
      fastfunc::FastApplyTransform(aVStack_2a0,(Vec4 *)&GameCamera);
      fastfunc::FastNormalizeRMtx4(auStack_240,aVStack_2a0);
      FUN_005e825c(local_320,local_320,auStack_240);
      iVar14 = collproc::CollLine(0x951500,local_310,0,lVar12,0);
      pMVar19 = CollOutput.pMoby;
      if (((iVar14 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
         (((CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        *(MobyInstance **)((int)pvVar8 + 0x10) = CollOutput.pMoby;
        auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = loadVectorLeftIndexed(0x14,0x488e58);
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar46 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar47);
        auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
        auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x14,
                            uVar20);
        *(undefined4 *)((int)pvVar8 + 0x14U & 0xfffffffc) = uVar11;
        *(float *)((int)pvVar8 + 0x18) = CollOutput.ip.z - (pMVar19->pos).z;
      }
      if ((*(int *)((int)pvVar8 + 0x10) == 0) || (*(int *)((int)pvVar8 + 8) != 0)) {
        camera::DrawTargetCrosshair(1.0,moby,0xff0f0fff,0x488e58);
      }
      else {
        camera::DrawTargetCrosshair(1.0,moby,0xff0fff0f,0x488e58);
      }
    }
    iVar14 = DAT_0096af98;
    if (DAT_0096af90 != 0) {
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      *(int *)((int)pvVar8 + 0x10) = DAT_0096af98;
      auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46 = loadVectorLeftIndexed(0x14,0x488e58);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar47);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x14,uVar20)
      ;
      *(undefined4 *)((int)pvVar8 + 0x14U & 0xfffffffc) = uVar11;
      *(float *)((int)pvVar8 + 0x18) = CollOutput.ip.z - *(float *)(iVar14 + 0x18);
    }
    if ((((((*(int *)((int)pvVar8 + 0xc) == 0) && (0 < DAT_0096bd58)) &&
          (*(int *)((int)pvVar8 + 8) == 0)) &&
         (((g_downButtons & DAT_0096ad80) != 0 &&
          (hero::g_heroStateType != 3 && hero::g_heroStateType != 7)))) &&
        (hero::g_heroStateType != 0x12)) &&
       (((hero::g_heroStateType != 0x11 && (DAT_0096bd8c == '\0')) &&
        ((DAT_0096bd87 == '\0' &&
         (local_f8 = (longlong)(int)(animationSpeed * 22.5),
         (int)(animationSpeed * 22.5) < DAT_0096ad90)))))) {
      hero::Hero_PlayFiringAnim();
      local_f8 = (longlong)(int)(animationSpeed * 2.5);
      mobyutil::MB_SetAnimation(lVar12,5,0,(int)(animationSpeed * 2.5));
      fVar3 = animationSpeed;
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      DAT_0096ad8c = 2;
      auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = loadVectorLeftIndexed(0x2c,0x488e58);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar47);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
      auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,8,uVar20);
      *(undefined4 *)((int)pvVar8 + 8U & 0xfffffffc) = uVar11;
      if (DAT_00a0fd6c != -1) {
        DAT_00a0fd6c = DAT_00a0fd6c + 1;
      }
      iVar14 = (int)(fVar3 * ((float)(longlong)update::g_GameFrameCount + 0.5));
      local_f8 = (longlong)iVar14;
      if ((int)(uint)DAT_00a0fd6e < iVar14 / 600) {
        sVar7 = (short)(iVar14 >> 0x1f);
        DAT_00a0fd6e = ((short)(iVar14 / 600) + sVar7) -
                       ((short)((short)(iVar14 / 0x2580000) + sVar7) >> 0xf);
      }
      DAT_00a0fd70 = DAT_00a0fd70 | 1 << (Level & 0x3f) | 0x80000000;
      moby->state = '\x05';
    }
    goto LAB_0048a5c0;
  }
  if (uVar2 == '\x03') {
    if ((moby->animationId != '\x03') &&
       ((moby->animationId != '\0' || ((moby->field43_0x70 & 2U) != 0)))) {
      local_f8 = (longlong)(int)(animationSpeed * 5.5);
      mobyutil::MB_SetAnimation(lVar12,3,0,(int)(animationSpeed * 5.5));
    }
    fastfunc::FastDecTimerS32(uVar20 + 8);
    if (DAT_0096bd5c == 0) {
      if ((int)(((uint)((LZCOUNT(-(uint)g_goldWeaponsArray.suckCannon) << 0x3a) >> 0x3f) &
                0xfffffffb) + 10) <= DAT_0096bd58) goto LAB_00489754;
      if (hero::g_heroStateType < 5) {
        if (hero::g_heroStateType < 2) {
          if (-1 < hero::g_heroStateType) {
LAB_00489720:
            if (((((g_downButtons & DAT_0096ad80) != 0) || (*(int *)((int)pvVar8 + 8) != 0)) &&
                (DAT_0096bd8c == '\0')) && (DAT_0096bd87 == '\0')) goto LAB_00489874;
          }
        }
        else if ((hero::g_heroStateType != 3) && (g_heroState != TAKING_DAMAGE_LAVA))
        goto LAB_00489720;
      }
      else if (hero::g_heroStateType < 0xc) {
        if (hero::g_heroStateType < 6) goto LAB_00489720;
      }
      else if (hero::g_heroStateType < 0xd) goto LAB_00489720;
LAB_00489754:
      hero::Hero_EndFiringAnim();
      iVar14 = *(int *)((int)pvVar8 + 4);
      if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar14].state != '\0')) {
        sound::sound_Kill(iVar14);
      }
      *(undefined4 *)((int)pvVar8 + 4) = 0xffffffff;
      mobyupdate_helpers::M849_00488bf8(lVar12);
      DAT_0096ad8c = 0;
      if (DAT_0096bd58 < 1) {
        *(undefined4 *)((int)pvVar8 + 8) = 0;
        local_f8 = (longlong)(int)(animationSpeed * 4.5);
        mobyutil::MB_SetAnimation(lVar12,1,0,(int)(animationSpeed * 4.5));
        moby->state = '\x01';
      }
      else {
        local_f8 = (longlong)(int)(animationSpeed * 4.5);
        mobyutil::MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 4.5));
        *(undefined4 *)((int)pvVar8 + 0xc) = 1;
        *(undefined4 *)((int)pvVar8 + 8) = 0;
        moby->state = '\x04';
      }
    }
    else {
LAB_00489874:
      if ((moby->field43_0x70 & 2U) != 0) {
        local_f8 = (longlong)(int)(animationSpeed * 2.5);
        mobyutil::MB_SetAnimation(lVar12,3,0,(int)(animationSpeed * 2.5));
      }
      mobyupdate_helpers::M849_00488250(lVar12,uVar20);
    }
    goto LAB_0048a5c0;
  }
  if (uVar2 != '\x02') {
    if (uVar2 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        local_f8 = (longlong)(int)(animationSpeed * 0.5);
        mobyutil::MB_SetAnimation(lVar12,1,0,(int)(animationSpeed * 0.5));
      }
      fastfunc::FastDecTimerS32(uVar20 + 8);
      if (*(int *)((int)pvVar8 + 8) == 0) {
        hero::Hero_EndFiringAnim();
      }
      if (DAT_0096bd58 < 1) {
        if ((((g_downButtons & DAT_0096ad80) != 0) && (*(int *)((int)pvVar8 + 8) == 0)) &&
           ((DAT_0096bd87 == '\0' &&
            ((DAT_0096bd8c == '\0' &&
             (local_f8 = (longlong)(int)(animationSpeed * 15.5),
             (int)(animationSpeed * 15.5) < DAT_0096ad90)))))) {
          if (hero::g_heroStateType < 5) {
            if (hero::g_heroStateType < 2) {
              if (hero::g_heroStateType < 0) goto LAB_0048a5c0;
            }
            else if ((hero::g_heroStateType == 3) || (g_heroState == TAKING_DAMAGE_LAVA))
            goto LAB_0048a5c0;
          }
          else if (hero::g_heroStateType < 0xc) {
            if (5 < hero::g_heroStateType) goto LAB_0048a5c0;
          }
          else if (0xc < hero::g_heroStateType) goto LAB_0048a5c0;
          hero::Hero_PlayFiringAnim();
          iVar14 = sound::PlayMobySound(2,4,moby);
          *(int *)((int)pvVar8 + 4) = iVar14;
          fVar3 = animationSpeed;
          auVar46 = ZEXT416(0xffffffff);
          auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
          auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
          auVar46 = loadVectorLeftIndexed(0xc,0x488e58);
          auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar46 = vectorMultiplyAddFloatingPoint
                              (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60
                               ,auVar47);
          auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
          auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar11 = storeVectorElementWordIndexed
                             (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,8,uVar20
                             );
          *(undefined4 *)((int)pvVar8 + 8U & 0xfffffffc) = uVar11;
          if (DAT_00a0fd6c != -1) {
            DAT_00a0fd6c = DAT_00a0fd6c + 1;
          }
          iVar14 = (int)(fVar3 * ((float)(longlong)update::g_GameFrameCount + 0.5));
          local_f8 = (longlong)iVar14;
          if ((int)(uint)DAT_00a0fd6e < iVar14 / 600) {
            sVar7 = (short)(iVar14 >> 0x1f);
            DAT_00a0fd6e = ((short)(iVar14 / 600) + sVar7) -
                           ((short)((short)(iVar14 / 0x2580000) + sVar7) >> 0xf);
          }
          DAT_00a0fd70 = DAT_00a0fd70 | 1 << (Level & 0x3f) | 0x80000000;
          moby->state = '\x02';
        }
      }
      else {
        local_f8 = (longlong)(int)(animationSpeed * 4.5);
        mobyutil::MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 4.5));
        moby->state = '\x04';
      }
    }
    else if (uVar2 == '\0') {
      piVar16 = &DAT_0096bd30;
      bVar1 = DAT_0096bd58 < 1;
      for (iVar14 = 0;
          iVar14 < (int)(((uint)((LZCOUNT(-(uint)g_goldWeaponsArray.suckCannon) << 0x3a) >> 0x3f) &
                         0xfffffffb) + 10); iVar14 = iVar14 + 1) {
        iVar15 = *piVar16;
        if (iVar15 != 0) {
          *(undefined4 *)(iVar15 + 0x94) = 0;
          *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) & 0xefff;
        }
        piVar16 = piVar16 + 1;
      }
      DAT_0096ad8c = 0;
      if (bVar1) {
        *(undefined4 *)((int)pvVar8 + 8) = 0;
        moby->state = '\x01';
      }
      else {
        *(undefined4 *)((int)pvVar8 + 0xc) = 1;
        local_f8 = (longlong)(int)(animationSpeed * 4.5);
        mobyutil::MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 4.5));
        moby->state = '\x04';
      }
      DAT_008ad150 = 1;
      DAT_008ad154 = 1;
      DAT_010db6d8 = 0;
    }
    goto LAB_0048a5c0;
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    local_f8 = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(lVar12,3,0,(int)(animationSpeed * 5.5));
  }
  if (hero::g_heroStateType < 5) {
    if (hero::g_heroStateType < 2) {
      if (-1 < hero::g_heroStateType) {
LAB_00489488:
        if ((DAT_0096bd8c == '\0') && (DAT_0096bd87 == '\0')) {
          iVar14 = fastfunc::FastDecTimerS32(uVar20 + 8);
          if (iVar14 != 0) {
            auVar46 = ZEXT416(0xffffffff);
            auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
            auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
            auVar46 = loadVectorLeftIndexed(0x14,0x488e58);
            auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar46 = vectorMultiplyAddFloatingPoint
                                (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 |
                                         auVar46 << 0x60,auVar47);
            auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
            auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,8,
                                uVar20);
            *(undefined4 *)((int)pvVar8 + 8U & 0xfffffffc) = uVar11;
            moby->state = '\x03';
          }
          goto LAB_0048a5c0;
        }
      }
    }
    else if ((hero::g_heroStateType != 3) && (g_heroState != TAKING_DAMAGE_LAVA)) goto LAB_00489488;
  }
  else if (hero::g_heroStateType < 0xc) {
    if (hero::g_heroStateType < 6) goto LAB_00489488;
  }
  else if (hero::g_heroStateType < 0xd) goto LAB_00489488;
  iVar14 = *(int *)((int)pvVar8 + 4);
  if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
     (sound::g_SoundChannels[iVar14].state != '\0')) {
    sound::sound_Kill(iVar14);
  }
  *(undefined4 *)((int)pvVar8 + 4) = 0xffffffff;
  hero::Hero_EndFiringAnim();
  DAT_0096ad8c = 0;
  if (DAT_0096bd58 < 1) {
    *(undefined4 *)((int)pvVar8 + 8) = 0;
    local_f8 = (longlong)(int)(animationSpeed * 4.5);
    mobyutil::MB_SetAnimation(lVar12,1,0,(int)(animationSpeed * 4.5));
    moby->state = '\x01';
  }
  else {
    local_f8 = (longlong)(int)(animationSpeed * 4.5);
    mobyutil::MB_SetAnimation(lVar12,6,0,(int)(animationSpeed * 4.5));
    moby->state = '\x04';
  }
LAB_0048a5c0:
  if (iVar10 == 3) {
    iVar10 = *(int *)((int)pvVar8 + 4);
    if (((iVar10 != -1) && (sound::g_SoundChannels[iVar10].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar10].state != '\0')) {
      sound::sound_Kill(iVar10);
    }
    *(undefined4 *)((int)pvVar8 + 4) = 0xffffffff;
    if ((g_downButtons & (L1|L2)) != 0) {
      DAT_00964ae8 = DAT_00964ae8 | 5;
    }
  }
  return;
}



//==== 0048a6c8  ns=mobyupdate_helpers  size=0x8
// sig: undefined M849_0048a6c8(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M849_0048a6c8(void)

{
  return 0;
}



//==== 0048a6d0  ns=mobyupdate_helpers  size=0x8
// sig: undefined M849_0048a6d0(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M849_0048a6d0(void)

{
  return 0;
}



//==== 0048a6d8  ns=mobyupdate_helpers  size=0x8
// sig: undefined M849_0048a6d8(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M849_0048a6d8(void)

{
  return 0;
}



//==== 0048a6e0  ns=mobyupdate_helpers  size=0x8
// sig: undefined M849_0048a6e0(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M849_0048a6e0(void)

{
  return 0;
}



//==== 0048a6e8  ns=mobyupdate_helpers  size=0x24
// sig: undefined M849_0048a6e8(void)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M849_0048a6e8(MobyInstance *param_1)

{
  mobyfunc::DeleteMoby(param_1);
  return;
}



//==== 0048a70c  ns=mobyupdate_helpers  size=0x8
// sig: undefined M849_0048a70c(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M849_0048a70c(void)

{
  return 0;
}



//==== 0048a718  ns=mobyupdate_helpers  size=0x354
// sig: undefined8 M849_MB_Sucking(MobyInstance * moby)
// callers(24): 002279c8 mobyupdate_helpers::M1248_002279c8; 00235530 mobyupdate_helpers::M1268_00235530; 00280de0 mobyupdate_helpers::M1448_00280de0; 002d75e0 mobyupdate_helpers::M1907_002d75e0; 002dc2b8 mobyupdate_helpers::M1923_002dc2b8; 00304d30 mobyupdate_helpers::M237_00304d30; 00305940 mobyupdate_helpers::M238_00305940; 003194d8 mobyupdate_helpers::M253_003194d8; 0032399c mobyupdate_helpers::M271_0032399c; 0034d71c mobyupdate_helpers::M341_0034d71c; 003bd1ec mobyupdate_helpers::M570_003bd1ec; 003c0314 mobyupdate_helpers::M866_003c0314; 003c1f3c mobyupdate_helpers::M574_003c1f3c; 003c8708 mobyupdate_helpers::M577_003c8708; 003cafa4 mobyupdate_helpers::M578_003cafa4; 003d0d98 mobyupdate_helpers::M582_003d0d98; 003d8af0 mobyupdate_helpers::M604_003d8af0; 003efa94 mobyupdate_helpers::M630_003efa94; 003f9798 mobyupdate_helpers::M1382_003f9798; 0043c4b4 mobyupdate_helpers::M739_0043c4b4; 00441eec mobyupdate_helpers::M741_00441eec; 00447768 mobyupdate_helpers::M795_00447768; 0046a680 mobyupdate_helpers::M808_0046a680; 0047ccd0 mobyupdate_helpers::M829_0047ccd0
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 005cd098 libc::printf
// strings: 006586c8: 'MB_Sucking: Tried to suck a NULL pointer!\n'

undefined8 mobyupdate_helpers::M849_MB_Sucking(MobyInstance *moby)

{
  u8 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 *in_r4;
  int in_r5;
  
  if (((((moby != (MobyInstance *)0x0) && (moby->state != 0xfe)) && (moby->state != 0xfd)) &&
      ((moby->pVar != (void *)0x0 && (moby->pClass != (MobyClass *)0x0)))) &&
     (puVar7 = *(undefined4 **)(*(int *)&moby->pClass->bangles + 0x10), puVar7 != (undefined4 *)0x0)
     ) {
    puVar7 = (undefined4 *)(*(code *)*puVar7)(moby);
    uVar1 = moby->animationId;
    if (puVar7 != (undefined4 *)0x0) {
      iVar3 = puVar7[0x1c];
      if (iVar3 == 0) {
        return 0;
      }
      if (((moby == (MobyInstance *)0x0) || (moby->state == 0xfd || moby->state == 0xfe)) ||
         (sVar2 = *(short *)(puVar7 + 0x1a), sVar2 == 8)) {
        return 0;
      }
      *puVar7 = *in_r4;
      puVar7[1] = in_r4[1];
      puVar7[2] = in_r4[2];
      puVar7[3] = 0x3f800000;
      puVar7[0x18] = in_r5;
      if (sVar2 < 3) {
        if (0 < sVar2) {
          if (1 < sVar2) {
            uVar4 = (int)puVar7[0x1b] >> 0x1f;
            if ((int)((uVar4 >> 1 ^ puVar7[0x1b]) - uVar4) < 0x3f800000) {
              return 1;
            }
            return 2;
          }
          uVar4 = (int)puVar7[0x1b] >> 0x1f;
          if (0x3f7fffff < (int)((uVar4 >> 1 ^ puVar7[0x1b]) - uVar4)) {
            if (uVar1 != *(u8 *)(iVar3 + 2)) {
              mobyutil::MB_SetAnimation(moby,*(u8 *)(iVar3 + 2),0,(int)(animationSpeed * 10.5));
            }
            *(undefined2 *)(puVar7 + 0x1a) = 2;
            puVar7[0x1b] = 0;
            return 1;
          }
          if (uVar1 == *(u8 *)(iVar3 + 1)) {
            return 1;
          }
          mobyutil::MB_SetAnimation(moby,*(u8 *)(iVar3 + 1),0,(int)(animationSpeed * 10.5));
          return 1;
        }
      }
      else {
        if (sVar2 < 5) {
          if (sVar2 < 4) {
            return 2;
          }
          return 3;
        }
        if (sVar2 < 8) {
          if (uVar1 != *(u8 *)(iVar3 + 3)) {
            mobyutil::MB_SetAnimation(moby,*(u8 *)(iVar3 + 3),0,(int)(animationSpeed * 10.5));
          }
          puVar7[0x1b] = 0;
          *(undefined2 *)(puVar7 + 0x1a) = 3;
          fVar5 = (moby->pos).y - *(float *)(in_r5 + 0x14);
          fVar6 = (moby->pos).x - *(float *)(in_r5 + 0x10);
          moby->unk58 = 1.0;
          puVar7[0x19] = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
          return 2;
        }
      }
      if (uVar1 != *(u8 *)(iVar3 + 1)) {
        mobyutil::MB_SetAnimation(moby,*(u8 *)(iVar3 + 1),0,(int)(animationSpeed * 10.5));
      }
      *(undefined2 *)(puVar7 + 0x1a) = 1;
      puVar7[0x1b] = 0;
      return 1;
    }
  }
  libc::printf("MB_Sucking: Tried to suck a NULL pointer!\n");
  return 0;
}



//==== 0048aa70  ns=mobyupdate_helpers  size=0x238
// sig: undefined M849_0048aa70(void)
// callers(24): 00227a78 mobyupdate_helpers::M1248_00227a78; 00235588 mobyupdate_helpers::M1268_00235588; 00280e38 mobyupdate_helpers::M1448_00280e38; 002d7638 mobyupdate_helpers::M1907_002d7638; 002dc310 mobyupdate_helpers::M1923_002dc310; 00304d88 mobyupdate_helpers::M237_00304d88; 003059f8 mobyupdate_helpers::M238_003059f8; 00319530 mobyupdate_helpers::M253_00319530; 003239f4 mobyupdate_helpers::M271_003239f4; 0034d774 mobyupdate_helpers::M341_0034d774; 003bd27c mobyupdate_helpers::M570_003bd27c; 003c038c mobyupdate_helpers::M866_003c038c; 003c1f94 mobyupdate_helpers::M574_003c1f94; 003c8760 mobyupdate_helpers::M577_003c8760; 003caffc mobyupdate_helpers::M578_003caffc; 003d0df0 mobyupdate_helpers::M582_003d0df0; 003d8b48 mobyupdate_helpers::M604_003d8b48; 003efaec mobyupdate_helpers::M630_003efaec; 003f9850 mobyupdate_helpers::M1382_003f9850; 0043c50c mobyupdate_helpers::M739_0043c50c; 00441f44 mobyupdate_helpers::M741_00441f44; 004477c0 mobyupdate_helpers::M795_004477c0; 0046a6d8 mobyupdate_helpers::M808_0046a6d8; 0047cdc8 mobyupdate_helpers::M829_0047cdc8
// callees(8): 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0015d12c sound::PlayMobySound; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul

undefined8 mobyupdate_helpers::M849_0048aa70(MobyInstance *param_1,f32 *param_2)

{
  u8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  Vec4 aVStack_80 [5];
  
  if (((((param_1 != (MobyInstance *)0x0) && (param_1->state != 0xfe)) && (param_1->state != 0xfd))
      && ((param_1->pVar != (void *)0x0 && (param_1->pClass != (MobyClass *)0x0)))) &&
     ((puVar2 = *(undefined4 **)(*(int *)&param_1->pClass->bangles + 0x10),
      puVar2 != (undefined4 *)0x0 && (iVar4 = (*(code *)*puVar2)(param_1), iVar4 != 0)))) {
    if (((param_1 != (MobyInstance *)0x0) && (param_1->state != 0xfd && param_1->state != 0xfe)) &&
       (*(short *)(iVar4 + 0x68) != 8)) {
      (param_1->pos).x = *param_2;
      (param_1->pos).y = param_2[1];
      (param_1->pos).z = param_2[2];
      (param_1->pos).w = param_2[3];
      uVar3 = *(uint *)(iVar4 + 0x60);
      fastfunc::FastEulerToMtx1(auStack_100,&DAT_008ad130);
      fastfunc::FastMtxCopyNoTranslate(auStack_c0,(ulonglong)uVar3 + 0xc0);
      fastfunc::FastVecMtx4Mul(aVStack_80,auStack_c0,auStack_100);
      fastfunc::FastApplyTransform(&(param_1->transform).v0,aVStack_80);
      param_1->modeBits = param_1->modeBits | NO_POST_UPDATE;
      mobyfunc::PostUpdateMobyLockTransform(param_1);
      mobyfunc::PostUpdateMobyLockTransform(param_1);
      if ((g_currentWeaponMoby != (MobyInstance *)0x0) &&
         (g_currentWeaponMoby->oClass == SUCKCANNON_0351)) {
        sound::PlayMobySound(5,0,g_currentWeaponMoby);
      }
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      *(undefined2 *)(iVar4 + 0x68) = 4;
      uVar1 = *(u8 *)(*(int *)(iVar4 + 0x70) + 4);
      if (param_1->animationId != uVar1) {
        mobyutil::MB_SetAnimation(param_1,uVar1,0,(int)(animationSpeed * 10.5));
      }
      param_1->scale = 0.0;
      return 1;
    }
    return 0;
  }
  return 0;
}



//==== 0048acb8  ns=mobyupdate_helpers  size=0x328
// sig: undefined M849_0048acb8(void)
// callers(24): 00227ae0 mobyupdate_helpers::M1248_00227ae0; 002355e0 mobyupdate_helpers::M1268_002355e0; 00280e90 mobyupdate_helpers::M1448_00280e90; 002d7690 mobyupdate_helpers::M1907_002d7690; 002dc368 mobyupdate_helpers::M1923_002dc368; 00304de0 mobyupdate_helpers::M237_00304de0; 00305a50 mobyupdate_helpers::M238_00305a50; 00319588 mobyupdate_helpers::M253_00319588; 00323a4c mobyupdate_helpers::M271_00323a4c; 0034d7cc mobyupdate_helpers::M341_0034d7cc; 003bd2d4 mobyupdate_helpers::M570_003bd2d4; 003c03e4 mobyupdate_helpers::M866_003c03e4; 003c1fec mobyupdate_helpers::M574_003c1fec; 003c87b8 mobyupdate_helpers::M577_003c87b8; 003cb054 mobyupdate_helpers::M578_003cb054; 003d0e7c mobyupdate_helpers::M582_003d0e7c; 003d8ba0 mobyupdate_helpers::M604_003d8ba0; 003efb44 mobyupdate_helpers::M630_003efb44; 003f9908 mobyupdate_helpers::M1382_003f9908; 0043c564 mobyupdate_helpers::M739_0043c564; 00441f9c mobyupdate_helpers::M741_00441f9c; 00447818 mobyupdate_helpers::M795_00447818; 0046a730 mobyupdate_helpers::M808_0046a730; 0047ce90 mobyupdate_helpers::M829_0047ce90
// callees(3): 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fddc0 mobyutil::MB_SetAnimation; 0015d12c sound::PlayMobySound

undefined8
mobyupdate_helpers::M849_0048acb8
          (double param_1,MobyInstance *param_2,undefined4 *param_3,MobyInstance *param_4)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (((((param_2 != (MobyInstance *)0x0) && (param_2->state != 0xfe)) && (param_2->state != 0xfd))
      && ((param_2->pVar != (void *)0x0 && (param_2->pClass != (MobyClass *)0x0)))) &&
     (puVar7 = *(undefined4 **)(*(int *)&param_2->pClass->bangles + 0x10),
     puVar7 != (undefined4 *)0x0)) {
    uVar11 = (*(code *)*puVar7)(param_2);
    iVar13 = (int)uVar11;
    if (iVar13 != 0) {
      if (((param_2 != (MobyInstance *)0x0) && (param_2->state != 0xfd && param_2->state != 0xfe))
         && (*(short *)(iVar13 + 0x68) != 8)) {
        param_2->enabled = '\x01';
        iVar12 = param_3[3];
        param_2->modeBits =
             param_2->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE);
        if (iVar12 == 0x3f9e0610) {
          uVar1 = *(u8 *)(*(int *)(iVar13 + 0x70) + 6);
          if (param_2->animationId != uVar1) {
            mobyutil::MB_SetAnimation(param_2,uVar1,0,(int)(animationSpeed * 20.5));
          }
          param_2->collisionMesh = *(float **)(iVar13 + 0x88);
          *(undefined2 *)(iVar13 + 0x68) = 6;
        }
        else {
          uVar1 = *(u8 *)(*(int *)(iVar13 + 0x70) + 5);
          if (param_2->animationId != uVar1) {
            mobyutil::MB_SetAnimation(param_2,uVar1,0,(int)(animationSpeed * 0.5));
          }
          *(undefined2 *)(iVar13 + 0x68) = 5;
        }
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        *(undefined4 *)(iVar13 + 0x10) = *param_3;
        *(undefined4 *)(iVar13 + 0x14) = param_3[1];
        auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        *(undefined4 *)(iVar13 + 0x18) = param_3[2];
        *(undefined4 *)(iVar13 + 0x1c) = param_3[3];
        auVar14 = loadVectorLeftIndexed(8,0x48aca8);
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar14 = vectorMultiplyAddFloatingPoint
                            (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                             auVar15);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x94,uVar11
                          );
        *(undefined4 *)(iVar13 + 0x94U & 0xfffffffc) = uVar8;
        *(MobyInstance **)(iVar13 + 0x74) = param_4;
        if (param_4 != (MobyInstance *)0x0) {
          iVar12 = mobyutil::MB_GetPvarsIfMobyHasThem(param_4);
          fVar2 = (param_4->pos).x;
          fVar3 = (param_4->pos).y;
          fVar4 = (param_4->pos).z;
          fVar5 = (param_4->pos).w;
          if (iVar12 != 0) {
            *(ushort *)(iVar12 + 0x1e) = *(ushort *)(iVar12 + 0x1e) | 0x80;
          }
          *(f32 *)(iVar13 + 0x40) = fVar2;
          *(f32 *)(iVar13 + 0x44) = fVar3;
          *(f32 *)(iVar13 + 0x4c) = fVar5;
          *(float *)(iVar13 + 0x90) = (float)param_1;
          *(float *)(iVar13 + 0x48) = (float)((double)fVar4 + param_1);
        }
        fVar4 = (param_2->pos).y;
        fVar6 = (param_2->pos).x;
        fVar9 = fVar4 - g_heroPosition.y;
        fVar10 = fVar6 - g_heroPosition.x;
        if (SQRT(fVar10 * fVar10 + fVar9 * fVar9) < 1.0) {
          (param_2->pos).x = fVar6 + *(float *)(iVar13 + 0x10);
          (param_2->pos).y = fVar4 + *(float *)(iVar13 + 0x14);
          (param_2->pos).z = (param_2->pos).z + *(float *)(iVar13 + 0x18);
        }
        if (-1 < *(short *)(iVar13 + 0x9c)) {
          sound::PlayMobySound((int)*(short *)(iVar13 + 0x9c),0,param_2);
        }
        return 2;
      }
      return 0;
    }
  }
  return 0;
}



//==== 0048afe8  ns=mobyupdate_helpers  size=0x228
// sig: undefined M849_0048afe8(void)
// callers(24): 00227b48 mobyupdate_helpers::M1248_00227b48; 002356b0 mobyupdate_helpers::M1268_002356b0; 00280ee8 mobyupdate_helpers::M1448_00280ee8; 002d76e8 mobyupdate_helpers::M1907_002d76e8; 002dc3c0 mobyupdate_helpers::M1923_002dc3c0; 00304e38 mobyupdate_helpers::M237_00304e38; 00305aa8 mobyupdate_helpers::M238_00305aa8; 003195e0 mobyupdate_helpers::M253_003195e0; 00323b14 mobyupdate_helpers::M271_00323b14; 0034d894 mobyupdate_helpers::M341_0034d894; 003bd32c mobyupdate_helpers::M570_003bd32c; 003c043c mobyupdate_helpers::M866_003c043c; 003c2044 mobyupdate_helpers::M574_003c2044; 003c8810 mobyupdate_helpers::M577_003c8810; 003cb124 mobyupdate_helpers::M578_003cb124; 003d0ed4 mobyupdate_helpers::M582_003d0ed4; 003d8bf8 mobyupdate_helpers::M604_003d8bf8; 003efc14 mobyupdate_helpers::M630_003efc14; 003f99b8 mobyupdate_helpers::M1382_003f99b8; 0043c5bc mobyupdate_helpers::M739_0043c5bc; 00441ff4 mobyupdate_helpers::M741_00441ff4; 00447870 mobyupdate_helpers::M795_00447870; 0046a788 mobyupdate_helpers::M808_0046a788; 0047cf50 mobyupdate_helpers::M829_0047cf50
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

undefined8 mobyupdate_helpers::M849_0048afe8(int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (((((param_1 != 0) && (*(char *)(param_1 + 0x20) != -2)) && (*(char *)(param_1 + 0x20) != -3))
      && ((*(int *)(param_1 + 0x78) != 0 && (*(int *)(param_1 + 0x24) != 0)))) &&
     (puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 0x10),
     puVar5 != (undefined4 *)0x0)) {
    iVar7 = (*(code *)*puVar5)(param_1);
    iVar6 = DAT_0096bd5c;
    cVar2 = *(char *)(param_1 + 0x53);
    if (iVar7 != 0) {
      if (((param_1 == 0) || (*(char *)(param_1 + 0x20) == -3 || *(char *)(param_1 + 0x20) == -2))
         || (sVar4 = *(short *)(iVar7 + 0x68), sVar4 == 8)) {
        return 0;
      }
      if (sVar4 < 4) {
        if (0 < sVar4) {
          if (sVar4 < 3) {
            cVar3 = *(char *)(*(int *)(iVar7 + 0x70) + 7);
            if (cVar2 != cVar3) {
              mobyutil::MB_SetAnimation(param_1,cVar3,0,(int)(animationSpeed * 10.5));
            }
            *(undefined2 *)(iVar7 + 0x68) = 7;
            return 0;
          }
          if ((*(short *)(iVar7 + 0x6a) != -1) &&
             (bVar1 = 0 < DAT_0096bd5c,
             *(undefined4 *)((int)&DAT_0096bd30 + (int)((longlong)*(short *)(iVar7 + 0x6a) << 2)) =
                  0, bVar1)) {
            DAT_0096bd5c = iVar6 + -1;
          }
          cVar3 = *(char *)(*(int *)(iVar7 + 0x70) + 7);
          if (cVar2 != cVar3) {
            mobyutil::MB_SetAnimation(param_1,cVar3,0,(int)(animationSpeed * 10.5));
          }
          *(undefined2 *)(iVar7 + 0x68) = 7;
          return 0;
        }
        if (sVar4 < 0) {
          return 0;
        }
      }
      else if (sVar4 < 7) {
        if (sVar4 < 5) {
          return 1;
        }
      }
      else if (sVar4 != 9) {
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



//==== 0048b288  ns=mobyupdate_helpers  size=0xd80
// sig: undefined M849_0048b288(void)
// callers(1): 0048c008 mobyupdate_helpers::M849_0048c008
// callees(13): 0005e598 collproc::CollMobySphere; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00107860 mobyutil::MB_DamageMobyList; 0010a610 mobyutil::ReorderRGB; 0010a668 mobyutil::ReorderRGB; 00123390 partupd::SpawnPart_11; 0020bb70 FUN_0020bb70; 003fda38 FUN_003fda38; 004d4138 FUN_004d4138; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mobyupdate_helpers::M849_0048b288(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar7;
  longlong lVar6;
  int iVar8;
  int iVar9;
  int *r;
  int *g;
  int *b;
  uint uVar10;
  int iVar11;
  int iVar12;
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
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 auStack_190 [80];
  int local_140 [18];
  longlong local_f8;
  
  dVar24 = 0.0;
  uVar23 = 0x4000000000000000;
  dVar13 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.suckCannon);
  dVar22 = 1.0;
  dVar27 = (double)(float)(dVar13 + 1.0);
  fVar2 = GameCamera.posY - *(float *)(param_1 + 0x14);
  fVar3 = GameCamera.posX - *(float *)(param_1 + 0x10);
  uVar10 = ((uint)((LZCOUNT(-(uint)g_goldWeaponsArray.suckCannon) << 0x3a) >> 0x3f) & 1) + 1;
  fVar4 = GameCamera.posZ - *(float *)(param_1 + 0x18);
  dVar13 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (10 / uVar10 != 0) {
    iVar7 = 0;
    dVar21 = -1.0;
    dVar20 = 3.5;
    dVar18 = 6.5;
    dVar17 = 60.5;
    dVar16 = 120.5;
    do {
      mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar22);
      mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar22);
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar22);
      mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar18);
      iVar11 = (int)((double)animationSpeed * dVar16);
      local_f8 = (longlong)iVar11;
      uVar5 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar17),iVar11);
      FUN_0020bb70(param_1 + 0x10,local_1c0,uVar5,0,g_goldWeaponsArray.suckCannon);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(10 / uVar10));
  }
  iVar7 = 4;
  iVar11 = 0;
  if (4 / uVar10 != 0) {
    dVar21 = -1.0;
    dVar20 = 6.5;
    dVar18 = 10.0;
    dVar17 = 60.5;
    dVar16 = 90.5;
    do {
      mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar22);
      mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar22);
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar22);
      mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar18);
      iVar12 = (int)((double)animationSpeed * dVar16);
      local_f8 = (longlong)iVar12;
      uVar5 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar17),iVar12);
      FUN_0020bb70(param_1 + 0x10,local_1a0,uVar5,1,g_goldWeaponsArray.suckCannon);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(4 / uVar10));
  }
  dVar16 = -1.0;
  mobyutil::MB_randRangeFloat(-1.0,(float)dVar22);
  mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar22);
  mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar22);
  dVar16 = 10.0;
  iVar11 = param_1 + 0x10;
  local_f8 = (longlong)(int)(animationSpeed * 90.5);
  uVar5 = mobyutil::MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
  FUN_0020bb70(iVar11,local_1b0,uVar5,1,g_goldWeaponsArray.suckCannon);
  if (dVar13 < 6.0) {
    iVar7 = fastfunc::FastDoubleToInt(dVar13);
    iVar7 = iVar7 + 1;
  }
  iVar12 = 0;
  if (dVar13 - 7.0 < 0.0) {
    dVar24 = (double)(float)(7.0 - dVar13);
  }
  if (0 < iVar7) {
    dVar26 = 8.0;
    dVar21 = 15.5;
    dVar25 = (double)(float)(dVar27 * 400000.0);
    dVar20 = 20.5;
    dVar18 = 25.5;
    dVar17 = 30.5;
    do {
      dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar16);
      dVar15 = (double)mobyutil::g_FrameTime;
      local_140[6] = 0x4f008fff;
      local_140[7] = 0x4f008fff;
      local_140[8] = 0x4f007fff;
      local_140[9] = 0x4f006fff;
      local_140[10] = 0x2fffffff;
      local_140[0xb] = 0x2fffffff;
      local_140[0xc] = 0x2f005f7f;
      local_140[0xd] = 0x2f004f7f;
      local_140[0xe] = 0x2f003f7f;
      local_140[0xf] = 0x2f00004f;
      dVar19 = (double)(float)((double)(float)(dVar14 * dVar27) * dVar15 -
                              (double)(float)(dVar15 * dVar24));
      local_140[0x10] = 0x2f000000;
      local_140[0x11] = 0x3f000000;
      lVar6 = mobyutil::MB_randInt
                        ((double)(float)(dVar14 * dVar27),dVar15,(double)(float)(dVar15 * dVar24),6)
      ;
      iVar8 = mobyutil::ReorderRGB
                        (*(int *)((int)local_140 + (int)(lVar6 << 2) + 0x18),
                         (uint)g_goldWeaponsArray.suckCannon);
      lVar6 = mobyutil::MB_randInt(6);
      iVar9 = mobyutil::ReorderRGB
                        (*(int *)((int)local_140 + (int)(lVar6 << 2) + 0x30),
                         (uint)g_goldWeaponsArray.suckCannon);
      iVar1 = (int)((double)animationSpeed * dVar20);
      local_f8 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar21),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar17);
      local_f8 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar18),iVar1);
      partupd::SpawnPart_11(dVar25,dVar19,iVar11,local_1d0,iVar8,iVar9);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar7);
  }
  if (9.0 < dVar13) {
    dVar24 = (double)(float)(dVar27 * 4.0);
    local_f8 = (longlong)(int)(animationSpeed * 15.5);
    FUN_004d4138(dVar24,param_1,iVar11,local_1d0);
    local_140[1] = 0x20;
    local_140[2] = 0;
    local_140[0] = 0x7f;
    mobyutil::ReorderRGB(local_140,local_140 + 1,local_140 + 2,(uint)g_goldWeaponsArray.suckCannon);
    local_f8 = (longlong)(int)(animationSpeed * 24.5);
    FUN_004d4138(dVar24,param_1,iVar11,local_1d0);
  }
  r = local_140 + 3;
  g = local_140 + 4;
  local_140[3] = 0x7f;
  local_140[4] = 0x3f;
  b = local_140 + 5;
  local_140[5] = 0;
  mobyutil::ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.suckCannon);
  local_f8 = (longlong)(int)(animationSpeed * 20.5);
  FUN_004d4138((double)(float)(dVar27 * 4.0),param_1,iVar11,local_1d0);
  local_140[5] = 0;
  local_140[3] = 0x60;
  local_140[4] = 0x10;
  mobyutil::ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.suckCannon);
  local_f8 = (longlong)(int)(animationSpeed * 27.5);
  FUN_004d4138((double)(float)(dVar27 * 3.5),param_1,iVar11,local_1d0);
  local_140[4] = 0;
  local_140[5] = 0;
  local_140[3] = 0x20;
  mobyutil::ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.suckCannon);
  uVar5 = 0x4008000000000000;
  local_f8 = (longlong)(int)(animationSpeed * 29.5);
  FUN_004d4138((double)(float)(dVar27 * 3.0),param_1,iVar11,local_1d0);
  auVar28 = ZEXT416(0xffffffff);
  auVar29 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
  auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
  fVar2 = 0.35;
  if (dVar13 - 20.0 < 0.0) {
    fVar2 = (float)(dVar13 * 0.017500000074505806);
  }
  GameCamera.offset0.amp = 0.4 - fVar2;
  auVar30 = loadVectorLeftIndexed(0x48,0x48b210);
  auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar29
                      );
  auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
  auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
  GameCamera.offset0.total =
       storeVectorElementWordIndexed
                 (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x168,0x9513c0);
  FUN_003fda38(auStack_190,iVar11,0,0);
  if (g_goldWeaponsArray.suckCannon != '\0') {
    uVar5 = collproc::CollMobySphere(uVar5,iVar11);
    mobyutil::MB_DamageMobyList
              (uVar23,dVar22,dVar22,param_1,2,*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_1 + 0x18),&DAT_00a14a00,uVar5,0,&DAT_00830000);
  }
  return;
}



//==== 0048c008  ns=mobyupdate_helpers  size=0xfc
// sig: undefined M849_0048c008(void)
// callers(1): 0048c188 FUN_0048c188
// callees(5): 000efb38 mobyfunc::DeleteMoby; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 0048b288 mobyupdate_helpers::M849_0048b288; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform

void mobyupdate_helpers::M849_0048c008(MobyInstance *param_1,int param_2,char param_3)

{
  float fVar1;
  MobyClass *pMVar2;
  undefined4 *puVar3;
  Vec4 aVStack_60 [4];
  
  if (param_3 != '\0') {
    M849_0048b288(param_1,param_2);
  }
  param_1->collisionMesh = *(float **)(param_2 + 0x84);
  puVar3 = (undefined4 *)((uint)&param_1->rotation & 0xfffffff0);
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  fastfunc::FastEulerToMtx1(aVStack_60,&param_1->rotation);
  fastfunc::FastApplyTransform(&(param_1->transform).v0,aVStack_60);
  mobyfunc::PostUpdateMobyLockTransform(param_1);
  pMVar2 = param_1->pClass;
  param_1->collisionMesh = *(float **)(param_2 + 0x84);
  param_1->modeBits =
       param_1->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_UPDATE|DISABLED);
  fVar1 = pMVar2->gScale;
  *(undefined2 *)(param_2 + 0x68) = 0;
  param_1->scale = fVar1;
  puVar3 = *(undefined4 **)(*(int *)&pMVar2->bangles + 0x14);
  if (puVar3 == (undefined4 *)0x0) {
    mobyfunc::DeleteMoby(param_1);
  }
  else {
    (*(code *)*puVar3)(param_1);
  }
  return;
}



//==== 0048c188  ns=Global  size=0x1290
// sig: undefined FUN_0048c188(void)
// callers(23): 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002806b0 mobyupdate_unsorted::UpdateMoby_1445; 002d6498 mobyupdate_unsorted::UpdateMoby_1906; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 00304ef8 mobyupdate_unsorted::UpdateMoby_237; 00307270 mobyupdate_unsorted::UpdateMoby_238; 00317338 mobyupdate_unsorted::UpdateMoby_252; 00321a20 mobyupdate_unsorted::UpdateMoby_270; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 003bc760 mobyupdate_unsorted::UpdateMoby_568; 003bec28 mobyupdate_unsorted::UpdateMoby_{572_865_866}; 003c0a18 mobyupdate_unsorted::UpdateMoby_573; 003c77f8 mobyupdate_unsorted::UpdateMoby_576; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 003f7c78 mobyupdate_unsorted::UpdateMoby_{635_1382}; 0043a188 mobyupdate_unsorted::UpdateMoby_739; 004403e8 mobyupdate_unsorted::UpdateMoby_740; 00446088 mobyupdate_unsorted::UpdateMoby_749; 00469880 mobyupdate_unsorted::UpdateMoby_807; 0047b1f0 mobyupdate_unsorted::UpdateMoby_827
// callees(38): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 00065468 stub::STUB_00065468; 000f1114 mobyfunc::GetBonePosition; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100ef8 mobyutil::MB_MoveAndCollide2; 0010581c mobyutil::SetCollDamIn; 0010bcf0 mobyutil::MB_MtxToQuat; 0010bf98 mobyutil::MB_TransformToQuat; 0010c038 mobyutil::MB_AxisAngleToQuat; 0010de78 mobyutil::MB_WrapRot; 001259b8 partupd::SpawnPart_18; 0015d12c sound::PlayMobySound; 00486828 FUN_00486828; 0048c008 mobyupdate_helpers::M849_0048c008; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 0050162c fastfunc::FastVecMtx4Mul; 005017c4 fastfunc::FastQuaternionMult; 00501848 fastfunc::FastSlerp; 00501e18 fastfunc::FastQuaternionToMtx4Identity; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf; 005e7d64 FUN_005e7d64; 005e7f98 FUN_005e7f98; 005e825c FUN_005e825c; 005e8338 FUN_005e8338; 005e84c0 FUN_005e84c0; 005e8f4c FUN_005e8f4c
// strings: 006586f4: 'SUCKSTATE_DEATH: should not be called any more!\n'

undefined8 FUN_0048c188(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  f32 fVar9;
  MobyClass *pMVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  float *pfVar20;
  vec4 *pvVar21;
  float *pfVar22;
  short sVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  undefined1 local_300 [16];
  float afStack_2f0 [4];
  undefined1 auStack_2e0 [16];
  float local_2d0;
  float local_2cc;
  float local_2c8;
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 auStack_260 [16];
  float afStack_250 [4];
  float afStack_240 [4];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [48];
  Vec4 aVStack_1d0 [4];
  float afStack_190 [16];
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [56];
  
  if (((param_1 == (MobyInstance *)0x0) || (param_1->state == 0xfe)) || (param_1->state == 0xfd)) {
    return 0;
  }
  pfVar16 = (float *)FUN_00486828(param_1);
  if (pfVar16 != (float *)0x0) {
    fVar1 = (param_1->pos).x;
    pfVar16[0xc] = fVar1;
    fVar2 = (param_1->pos).y;
    pfVar16[0xd] = fVar2;
    fVar9 = (param_1->pos).z;
    fVar3 = (param_1->pos).z;
    uVar17 = (int)fVar9 >> 0x1f;
    pfVar16[0xe] = fVar3;
    sVar23 = *(short *)(pfVar16 + 0x1a);
    pfVar16[0xf] = (param_1->pos).w;
    iVar19 = (uVar17 >> 1 ^ (uint)fVar9) - uVar17;
    if (sVar23 < 4) {
      if (sVar23 < 2) {
        if (0 < sVar23) {
          dVar24 = (double)FUN_005e8338((double)(*pfVar16 - fVar1),(double)(pfVar16[1] - fVar2));
          dVar24 = (double)fastfunc::FastWrapRot((float)dVar24,3.1415927);
          mobyutil::OrganicDeltAngSpeed
                    (dVar24,(double)(DAT_0071f40c * 0.19634955),(double)(DAT_0071f40c * 0.19634955),
                     (double)(DAT_0071f408 * 0.3927),param_1,&DAT_00720000,param_2 + 0x44);
          dVar28 = 0.009999999776482582;
          dVar27 = (double)(param_1->rotation).z;
          dVar25 = (double)fastfunc::FastDiffRots(dVar24,0x3f847ae140000000);
          if (dVar25 < dVar27) {
            dVar25 = (double)(param_1->rotation).z;
            dVar24 = (double)fastfunc::FastWrapRot((float)dVar24,(float)dVar28);
            if (dVar25 < dVar24) {
              *(undefined2 *)(pfVar16 + 0x1a) = 2;
              pfVar16[0x1b] = 0.0;
            }
          }
          pfVar16[7] = 0.0;
          pfVar16[6] = 0.0;
          pfVar16[5] = 0.0;
          pfVar16[4] = 0.0;
        }
      }
      else if (sVar23 < 3) {
        dVar25 = (double)pfVar16[0x1b];
        dVar27 = 1.0;
        param_1->unk58 = (float)(dVar25 + 1.0);
        dVar24 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 1.5));
        fVar1 = (float)(dVar25 + (double)(float)(dVar27 / dVar24));
        dVar24 = (double)fVar1;
        pfVar16[0x1b] = fVar1;
        fVar1 = (param_1->pos).z;
        if (dVar27 < dVar24) {
          pfVar16[0x1b] = 1.0;
          dVar24 = dVar27;
        }
        (param_1->pos).z = (float)(dVar24 * 0.009999999776482582) * DAT_0071f408 + fVar1;
        mobyutil::MB_TransformToQuat(pfVar16 + 8,&param_1->transform);
        pfVar16[7] = 0.0;
        pfVar16[6] = 0.0;
        pfVar16[5] = 0.0;
        pfVar16[4] = 0.0;
      }
      else {
        param_1->enabled = '\x01';
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        dVar25 = (double)pfVar16[0x1b];
        uVar17 = (int)pfVar16[0x1b] >> 0x1f;
        dVar24 = 1.0;
        if ((int)((uVar17 >> 1 ^ (uint)pfVar16[0x1b]) - uVar17) < 0x3f800000) {
          dVar27 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 30.5));
          pfVar16[0x1b] = (float)(dVar25 + (double)(float)(dVar24 / dVar27));
          fastfunc::FastEulerToMtx1(auStack_150,local_300);
          fastfunc::FastMtxCopyNoTranslate(aVStack_1d0,(ulonglong)(uint)pfVar16[0x18] + 0xc0);
          fastfunc::FastVecMtx4Mul(afStack_190,aVStack_1d0,auStack_150);
          mobyutil::MB_MtxToQuat(afStack_2f0,afStack_190);
          fastfunc::FastSlerp((double)pfVar16[0x1b],auStack_2e0,pfVar16 + 8,afStack_2f0);
          fastfunc::FastQuaternionToMtx4Identity(auStack_2e0,aVStack_1d0);
          fastfunc::FastApplyTransform(&(param_1->transform).v0,aVStack_1d0);
          param_1->modeBits =
               param_1->modeBits &
               (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | NO_POST_UPDATE;
        }
        else {
          pfVar16[0x1b] = 1.0;
        }
        mobyfunc::GetBonePosition(pfVar16[0x18],0,&local_2d0);
        fVar1 = (param_1->pos).y - local_2cc;
        fVar2 = (param_1->pos).x - local_2d0;
        dVar24 = 2.0;
        dVar25 = 0.5;
        pMVar10 = param_1->pClass;
        dVar27 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
        param_1->scale = pMVar10->gScale * ((float)(dVar27 / (double)(pfVar16[0x19] * 2.0)) + 0.5);
        fVar1 = DAT_0071f40c * 0.11 + pfVar16[0x26];
        pfVar16[0x26] = fVar1;
        fVar2 = DAT_0071f408 * 0.75;
        if (fVar2 < fVar1) {
          pfVar16[0x26] = fVar2;
          fVar1 = fVar2;
        }
        if (dVar27 < (double)(fVar1 * 70.0)) {
          mobyutil::MB_SetAnimation(pfVar16[0x18],4,0,(int)(animationSpeed * 2.5));
          pMVar10 = param_1->pClass;
        }
        if (dVar27 < 3.0) {
          DAT_0096ad8c = 2;
          param_1->collision = (ushort *)0x0;
        }
        if ((double)pfVar16[0x26] <= dVar27) {
          fastfunc::FastNormalizeRMtx4(auStack_110,&DAT_0096a320);
          fVar1 = (param_1->pos).x - local_2d0;
          fVar2 = (param_1->pos).y - local_2cc;
          FUN_005e825c(local_2b0,local_2b0,auStack_110);
          dVar27 = (double)fVar1;
          if ((int)fVar1 < 0) {
            dVar28 = dVar24;
            if (-dVar27 - dVar24 < 0.0) {
              dVar28 = -dVar27;
            }
            dVar25 = -2.0;
            if (-2.0 - dVar27 < 0.0) {
              dVar25 = dVar27;
            }
            dVar24 = (double)(float)(dVar27 * -0.5);
            if (0.0 - fVar2 < 0.0) {
              dVar25 = dVar28;
            }
          }
          else {
            dVar27 = (double)fVar2;
            dVar28 = ABS(dVar27);
            dVar25 = (double)(float)(dVar27 * dVar25);
            if (dVar28 - dVar24 < 0.0) {
              dVar24 = dVar28;
            }
          }
          FUN_005e7d64(local_2a0,local_2a0,&DAT_0096a320);
          stub::STUB_00065468(local_290,&local_2d0);
          fVar1 = (param_1->pos).x;
          fVar2 = (param_1->pos).y;
          fVar3 = (param_1->pos).z;
          FUN_005e7f98((double)pfVar16[0x26],local_2c0,local_2c0);
          (param_1->pos).x = (param_1->pos).x + ((local_2d0 + (float)dVar24) - fVar1);
          (param_1->pos).y = (param_1->pos).y + ((local_2cc + (float)dVar25) - fVar2);
          (param_1->pos).z = (param_1->pos).z + (local_2c8 - fVar3);
          mobyfunc::PostUpdateMobyLockTransform(param_1);
        }
        else {
          DAT_0096bd5c = DAT_0096bd5c + -1;
          DAT_0096bd58 = DAT_0096bd58 + 1;
          puVar11 = *(undefined4 **)(*(int *)&pMVar10->bangles + 4);
          if (puVar11 != (undefined4 *)0x0) {
            (*(code *)*puVar11)(param_1,&local_2d0);
          }
          iVar19 = *(int *)((int)&DAT_0096bd30 +
                           (int)((longlong)*(short *)((int)pfVar16 + 0x6a) << 2));
          *(ushort *)(iVar19 + 0x34) = *(ushort *)(iVar19 + 0x34) & 0xefff;
        }
      }
    }
    else if (sVar23 < 7) {
      if (sVar23 < 5) {
        param_1->enabled = '\0';
        param_1->collision = (ushort *)0x0;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_UPDATE|DISABLED) | (NO_UPDATE|DISABLED);
        if ((param_1->field43_0x70 & 2U) != 0) {
          if (param_1->animationId != *(u8 *)((int)pfVar16[0x1c] + 4)) {
            mobyutil::MB_SetAnimation
                      (param_1,*(u8 *)((int)pfVar16[0x1c] + 4),0,(int)(animationSpeed * 3.5));
          }
          param_1->scale = param_1->pClass->gScale * 0.3;
          puVar11 = (undefined4 *)((uint)&param_1->rotation & 0xfffffff0);
          puVar11[3] = 0;
          puVar11[2] = 0;
          puVar11[1] = 0;
          *puVar11 = 0;
        }
      }
      else {
        param_1->enabled = '\x01';
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        uVar26 = 0x4000000000000000;
        if (iVar19 < 0x40000000) {
          mobyupdate_helpers::M849_0048c008(param_1,pfVar16,0);
          return 0;
        }
        dVar27 = (double)pfVar16[4];
        fVar4 = param_1->pClass->gScale;
        dVar25 = (double)pfVar16[5];
        dVar24 = (double)pfVar16[6];
        fVar5 = pfVar16[0x1f] * DAT_0071f408 * fVar4 + param_1->scale;
        param_1->scale = fVar5;
        if (fVar4 < fVar5) {
          param_1->scale = fVar4;
        }
        fVar4 = pfVar16[0x1d];
        if (((fVar4 != 0.0) &&
            (*(char *)((int)fVar4 + 0x20) != -3 && *(char *)((int)fVar4 + 0x20) != -2)) &&
           ((int)pfVar16[0x25] < (int)(animationSpeed * 300.5) - (int)(animationSpeed * 5.5))) {
          fVar5 = *(float *)((int)fVar4 + 0x10);
          fVar12 = *(float *)((int)fVar4 + 0x18) + pfVar16[0x24];
          fVar6 = *(float *)((int)fVar4 + 0x14);
          fVar4 = *(float *)((int)fVar4 + 0x1c);
          fVar2 = fVar6 - fVar2;
          fVar7 = pfVar16[0x10];
          fVar1 = fVar5 - fVar1;
          fVar3 = fVar12 - fVar3;
          fVar13 = fVar6 - pfVar16[0x11];
          pfVar16[0x10] = fVar5;
          fVar5 = fVar5 - fVar7;
          pfVar16[0x11] = fVar6;
          fVar6 = fVar12 - pfVar16[0x12];
          pfVar16[0x12] = fVar12;
          pfVar16[0x13] = fVar4;
          dVar28 = (double)SQRT(pfVar16[6] * pfVar16[6] +
                                pfVar16[4] * pfVar16[4] + pfVar16[5] * pfVar16[5]);
          fVar7 = (fVar6 * fVar3 + fVar5 * fVar1 + fVar13 * fVar2) * -2.0;
          fVar4 = (float)(dVar28 * dVar28 -
                         (double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar13 * fVar13));
          fVar14 = fVar7 * fVar7 - -((fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) * fVar4 * 4.0);
          fVar15 = SQRT(fVar14);
          fVar12 = (fVar15 - fVar7) / (fVar4 * 2.0);
          fVar7 = (-fVar7 - fVar15) / (fVar4 * 2.0);
          if ((fVar4 == 0.0) || (fVar14 < 0.0)) {
            fVar4 = -1.0;
          }
          else if ((fVar12 <= 0.0) || (fVar7 <= 0.0)) {
            fVar4 = -1.0;
            if (0.0 - fVar7 < 0.0) {
              fVar4 = fVar7;
            }
            if (0.0 - fVar12 < 0.0) {
              fVar4 = fVar12;
            }
          }
          else {
            fVar4 = fVar7;
            if (fVar7 - fVar12 < 0.0) {
              fVar4 = fVar12;
            }
          }
          if (fVar4 <= 0.0) {
            FUN_005e7f98((double)(DAT_0071f418 * 90.0),local_280,local_280);
            pfVar16[4] = pfVar16[4] + fVar1;
            pfVar16[5] = pfVar16[5] + fVar2;
            pfVar16[6] = pfVar16[6] + fVar3;
            FUN_005e7f98(dVar28,pfVar16 + 4,pfVar16 + 4);
          }
          else {
            FUN_005e7f98((double)(DAT_0071f418 * 90.0),local_270,local_270);
            pfVar16[4] = pfVar16[4] + fVar4 * fVar5 + fVar1;
            pfVar16[5] = pfVar16[5] + fVar4 * fVar13 + fVar2;
            pfVar16[6] = pfVar16[6] + fVar4 * fVar6 + fVar3;
            FUN_005e7f98(dVar28,pfVar16 + 4,pfVar16 + 4);
          }
        }
        pfVar22 = pfVar16 + 4;
        (param_1->pos).x = (param_1->pos).x + pfVar16[4];
        (param_1->pos).y = (param_1->pos).y + pfVar16[5];
        (param_1->pos).z = (param_1->pos).z + pfVar16[6];
        mobyutil::SetCollDamIn(uVar26,auStack_200,param_1,0x430000);
        uVar26 = 0x3ff0000000000000;
        FUN_005e84c0(0x3ff0000000000000,auStack_200,auStack_200);
        pvVar21 = &param_1->pos;
        uVar17 = collproc::CollMobySphere((double)pfVar16[0x20],pvVar21,1,1,param_1,auStack_200);
        uVar18 = collproc::CollSphere((double)pfVar16[0x20],pvVar21);
        fVar1 = CollOutput.push.x;
        uVar17 = uVar17 | uVar18;
        sVar23 = *(short *)(pfVar16 + 0x1a);
        MVar8 = param_1->modeBits;
        pMVar10 = param_1->pClass;
        if (uVar17 != 0) {
          (param_1->pos).x = CollOutput.push.x;
          fVar2 = CollOutput.push.y;
          (param_1->pos).y = CollOutput.push.y;
          fVar3 = CollOutput.push.z;
          (param_1->pos).z = CollOutput.push.z;
          (param_1->pos).w = CollOutput.push.w;
          pfVar16[0x14] = CollOutput.ip.x - fVar1;
          pfVar16[0x15] = CollOutput.ip.y - fVar2;
          pfVar16[0x16] = CollOutput.ip.z - fVar3;
          pfVar16[0x17] = CollOutput.ip.w;
        }
        if ((CollOutput.pMoby != (MobyInstance *)0x0) && ((CollOutput.pMoby)->oClass == RATCHET)) {
          uVar17 = 0;
        }
        if (sVar23 == 6) {
          param_1->collision = pMVar10->collision;
          param_1->modeBits =
               MVar8 & (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                        HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) |
               NO_POST_UPDATE;
          pfVar16[0x14] = 0.0;
          pfVar16[0x16] = 1.0;
          pfVar16[0x15] = 0.0;
          pfVar16[0x17] = 0.01;
          dVar24 = (double)(SQRT((float)(dVar24 * dVar24 +
                                        (double)(float)(dVar27 * dVar27 +
                                                       (double)(float)(dVar25 * dVar25)))) /
                           pfVar16[0x20]);
          mobyutil::MB_TransformToQuat(auStack_260,&param_1->transform);
          pfVar20 = pfVar16 + 0x14;
          FUN_005e7f98(uVar26,pfVar20,pfVar20);
          mobyutil::MB_WrapRot((float)dVar24);
          FUN_005e7f98(0xbff0000000000000,auStack_230,pfVar22);
          FUN_005e8f4c(afStack_240,auStack_230,pfVar20);
          FUN_005e7f98(uVar26,afStack_240,afStack_240);
          mobyutil::MB_AxisAngleToQuat((float)dVar24,afStack_250,afStack_240);
          fastfunc::FastQuaternionMult(auStack_220,auStack_260,afStack_250);
          fastfunc::FastQuaternionToMtx4Identity(auStack_220,auStack_d0);
          FUN_005e7f98(uVar26,&param_1->transform,auStack_d0);
          FUN_005e7f98(uVar26,&(param_1->transform).v1,auStack_c0);
          FUN_005e7f98(uVar26,&(param_1->transform).v2,auStack_b0);
        }
        if (uVar17 != 0) {
          sVar23 = 0;
          if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
             ((CollOutput.pMoby)->pClass != (MobyClass *)0x0)) {
            sVar23 = (short)(CollOutput.pMoby)->pClass->mode_bits;
          }
          FUN_005e7f98(uVar26,0xa10980,0xa10980);
          if (param_1->animationId != *(u8 *)((int)pfVar16[0x1c] + 6)) {
            mobyutil::MB_SetAnimation
                      (param_1,*(u8 *)((int)pfVar16[0x1c] + 6),0,(int)(animationSpeed * 20.5));
          }
          param_1->collisionMesh = (float *)pfVar16[0x22];
          *(undefined2 *)(pfVar16 + 0x1a) = 6;
          dVar24 = (double)FUN_005e8338((double)CollOutput.normal.z,
                                        (double)SQRT(CollOutput.normal.x * CollOutput.normal.x +
                                                     CollOutput.normal.y * CollOutput.normal.y));
          if (0.8726646304130554 < dVar24) {
            if (-1 < *(short *)((int)pfVar16 + 0x9e)) {
              sound::PlayMobySound((int)*(short *)((int)pfVar16 + 0x9e),0,param_1);
            }
            mobyupdate_helpers::M849_0048c008(param_1,pfVar16,1);
            return 0;
          }
          if (g_goldWeaponsArray.suckCannon != '\0' && 4 < sVar23) {
            if (-1 < *(short *)((int)pfVar16 + 0x9e)) {
              sound::PlayMobySound((int)*(short *)((int)pfVar16 + 0x9e),0,param_1);
            }
            mobyupdate_helpers::M849_0048c008(param_1,pfVar16,1);
          }
          fastfunc::FastVecNormalize(pfVar22,pfVar22,auStack_210);
        }
        iVar19 = fastfunc::FastDecTimerS32(pfVar16 + 0x25);
        if (iVar19 != 0) {
          mobyupdate_helpers::M849_0048c008(param_1,pfVar16,1);
          return 0;
        }
        fVar1 = (param_1->pos).y - g_heroPosition.y;
        fVar2 = (param_1->pos).x - g_heroPosition.x;
        if (60.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
          mobyupdate_helpers::M849_0048c008(param_1,pfVar16,1);
          return 0;
        }
        fVar1 = pfVar16[6];
        if (SQRT(fVar1 * fVar1 + pfVar16[4] * pfVar16[4] + pfVar16[5] * pfVar16[5]) <
            DAT_0071f408 * 0.01) {
          mobyupdate_helpers::M849_0048c008(param_1,pfVar16,1);
          return 0;
        }
        pfVar16[6] = -(DAT_0071f40c * 0.00925 - fVar1);
        partupd::SpawnPart_18(pvVar21,&param_1->transform);
      }
    }
    else if (sVar23 < 8) {
      param_1->enabled = '\x01';
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      pfVar16[6] = -(DAT_0071f40c * 0.013 - pfVar16[6]);
      if (iVar19 < 0x40000000) {
        mobyupdate_helpers::M849_0048c008(param_1,pfVar16,1);
        return 0;
      }
      uVar26 = 0x3fe99999a0000000;
      fastfunc::FastDoubleToInt((double)(pfVar16[0x23] * 1024.0));
      iVar19 = mobyutil::MB_MoveAndCollide2(uVar26,0,param_1,pfVar16 + 4);
      (param_1->rotation).x = (param_1->rotation).x * 0.6666667;
      (param_1->rotation).y = (param_1->rotation).y * 0.6666667;
      if (iVar19 != 0) {
        (param_1->rotation).x = 0.0;
        (param_1->rotation).y = 0.0;
        param_1->unk58 = 1.0;
        return 1;
      }
      if ((param_1->field43_0x70 & 2U) != 0) {
        param_1->unk58 = pfVar16[0x1e];
      }
    }
    else if (sVar23 < 9) {
      libc::printf("SUCKSTATE_DEATH: should not be called any more!\n");
    }
  }
  if ((param_1->modeBits & NO_POST_UPDATE) != NONE) {
    mobyfunc::PostUpdateMobyLockTransform(param_1);
  }
  if (*(short *)(pfVar16 + 0x1a) < 4) {
    fVar1 = pfVar16[3];
    if (((int)pfVar16[3] < 1) &&
       (puVar11 = *(undefined4 **)(*(int *)&param_1->pClass->bangles + 0xc),
       puVar11 != (undefined4 *)0x0)) {
      (*(code *)*puVar11)(param_1);
      fVar1 = pfVar16[3];
    }
    pfVar16[3] = fVar1 - 1.0;
  }
  return 0;
}



//==== 0048d430  ns=mobyupdate_helpers  size=0x428
// sig: undefined M849_0048d430(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M849_0048d430(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 *puVar19;
  undefined8 uVar18;
  float *pfVar21;
  longlong lVar20;
  float *pfVar23;
  longlong lVar22;
  uint uVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar26;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  puVar10 = (ulonglong *)(uVar16 - 0x140);
  *puVar10 = uVar16;
  puVar10[0x2a] = in_LR;
  puVar10[0x24] = in_f28;
  puVar10[0x25] = in_f29;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x22] = unaff_r30;
  puVar10[0x23] = unaff_r31;
  puVar10[0x21] = unaff_r29;
  puVar10[0x20] = unaff_r28;
  uVar17 = draw::GetEffectTex(0x15);
  puVar10[0x1d] = uVar17;
  uVar17 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar10[0x1e] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar10[0x1c] = uVar17;
  uVar17 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar10[0x1f] = uVar17;
  dVar29 = (double)DAT_010da310;
  DAT_010da310 = (float)(dVar29 + 0.0010000000474974513);
  dVar31 = 7.0;
  if (7.0 < DAT_010da310) {
    DAT_010da310 = DAT_010da310 - 7.0;
  }
  dVar30 = 0.30000001192092896;
  uVar17 = 1;
  dVar29 = dVar29 + 0.30000001192092896;
  do {
    dVar29 = (double)(float)dVar29;
    dVar28 = (double)DAT_010da314;
    DAT_010da314 = (float)(dVar28 + (double)DAT_008ad158);
    if (dVar31 < (double)DAT_010da314) {
      DAT_010da314 = (float)((double)DAT_010da314 - dVar31);
    }
    iVar25 = 0;
    iVar26 = 0;
    do {
      iVar25 = iVar25 + 1;
      iVar13 = (int)uVar17;
      iVar12 = iVar13 * 0x140;
      pfVar21 = (float *)((int)&DAT_010db6f0 + iVar12 + iVar26);
      fVar1 = *pfVar21;
      *(float *)(puVar10 + 0xe) = fVar1;
      fVar2 = pfVar21[1];
      *(float *)((int)puVar10 + 0x74) = fVar2;
      fVar3 = pfVar21[2];
      *(float *)(puVar10 + 0xf) = fVar3;
      *(float *)((int)puVar10 + 0x7c) = pfVar21[3];
      pfVar21 = (float *)(&DAT_010db6f0 + (iVar25 % 0x14) * 4 + iVar13 * 0x50);
      pfVar23 = (float *)(iVar26 + 0x10db5b0 + iVar12);
      fVar4 = *pfVar21;
      *(float *)(puVar10 + 0x10) = fVar4;
      fVar1 = fVar1 - fVar4;
      fVar5 = pfVar21[1];
      *(float *)((int)puVar10 + 0x84) = fVar5;
      fVar6 = pfVar21[2];
      *(float *)(puVar10 + 0x11) = fVar6;
      fVar3 = fVar3 - fVar6;
      fVar2 = fVar2 - fVar5;
      *(float *)((int)puVar10 + 0x8c) = pfVar21[3];
      fVar7 = *pfVar23;
      puVar19 = (undefined4 *)((iVar25 % 0x14) * 0x10 + 0x10db5b0 + iVar12);
      *(float *)(puVar10 + 0x12) = fVar7;
      fVar8 = pfVar23[1];
      fVar7 = fVar7 - fVar4;
      *(float *)((int)puVar10 + 0x94) = fVar8;
      fVar8 = fVar8 - fVar5;
      fVar11 = pfVar23[2] - fVar6;
      *(float *)(puVar10 + 0x13) = pfVar23[2];
      *(float *)((int)puVar10 + 0x9c) = pfVar23[3];
      fVar14 = GameCamera.posX;
      fVar5 = fVar5 - GameCamera.posY;
      *(undefined4 *)(puVar10 + 0x14) = *puVar19;
      *(undefined4 *)((int)puVar10 + 0xa4) = puVar19[1];
      *(undefined4 *)(puVar10 + 0x15) = puVar19[2];
      *(undefined4 *)((int)puVar10 + 0xac) = puVar19[3];
      if ((fVar1 * fVar8 - fVar2 * fVar7) * (fVar6 - GameCamera.posZ) +
          (fVar2 * fVar11 - fVar3 * fVar8) * (fVar4 - fVar14) +
          (fVar3 * fVar7 - fVar1 * fVar11) * fVar5 < 0.0) {
        iVar12 = (int)((uVar17 & 0xffffffff) << 1);
        sVar9 = *(short *)((int)&DAT_010db6d8 + iVar12);
        lVar27 = 2;
        lVar20 = uVar16 - 0x140;
        do {
          lVar22 = (longlong)sVar9;
          lVar22 = lVar22 + (lVar22 >> 0x3f & -lVar22);
          sVar9 = *(short *)(iVar12 + 0x10db6d6);
          uVar24 = (uint)((lVar22 + (0x40 - lVar22 >> 0x3f & 0x40U - lVar22) & 0xffffffff) << 0x18)
                   | 0x404040;
          *(uint *)((int)lVar20 + 0xb0) = uVar24;
          *(uint *)((int)lVar20 + 0xb4) = uVar24;
          lVar20 = lVar20 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        if (iVar13 == 1) {
          *(undefined4 *)((int)puVar10 + 0xbc) = 0x20404040;
          *(undefined4 *)(puVar10 + 0x17) = 0x20404040;
        }
        else if (iVar13 == 9) {
          *(undefined4 *)((int)puVar10 + 0xb4) = 0x404040;
          *(undefined4 *)(puVar10 + 0x16) = 0x404040;
        }
        *(float *)(puVar10 + 0x18) = (float)dVar29;
        *(float *)((int)puVar10 + 0xc4) = (float)dVar28;
        *(float *)(puVar10 + 0x19) = (float)dVar29;
        *(float *)((int)puVar10 + 0xd4) = (float)dVar28;
        fVar1 = (float)(dVar28 + 0.05000000074505806);
        dVar28 = (double)fVar1;
        *(float *)(puVar10 + 0x1a) = (float)(dVar29 - dVar30);
        *(float *)(puVar10 + 0x1b) = (float)(dVar29 - dVar30);
        uVar15 = EffectTexHeaders;
        *(float *)((int)puVar10 + 0xcc) = fVar1;
        *(float *)((int)puVar10 + 0xdc) = fVar1;
        draw::FastDrawQuad(uVar16 - 0xd0,0,0,uVar15,9);
      }
      else {
        dVar28 = (double)(float)(dVar28 + 0.05000000074505806);
      }
      iVar26 = iVar26 + 0x10;
    } while (iVar25 < 0x14);
    uVar17 = uVar17 + 1;
    dVar29 = dVar29 + dVar30;
  } while ((int)uVar17 < 10);
  uVar18 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar18);
  return;
}



//==== 0048d858  ns=mobyupdate_helpers  size=0x14
// sig: undefined M849_0048d858(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M849_0048d858(void)

{
  DAT_008ad2ec = 0x10000;
  return;
}



//==== 0048d870  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_85(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 85 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_85(MobyInstance *moby)

{
  return moby;
}



//==== 0048d878  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M851_0048d878(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M851_0048d878(int param_1)

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
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
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



//==== 0048d9d8  ns=mobyupdate_unsorted  size=0xd58
// sig: undefined UpdateMoby_851(MobyInstance * moby)
// callers(0): 
// callees(22): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00106360 mobyutil::MB_SetZBoundsFromGround; 00110b70 mobyutil::MB_IsPntInCuboid; 00112a38 mobyutil::MB_ToastMessage; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 00414594 FUN_00414594; 004145d0 FUN_004145d0; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 00658730: 'Captain Qwark'

/* Moby 851 */

void mobyupdate_unsorted::UpdateMoby_851(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  gameMode_t gVar14;
  ulonglong uVar15;
  int iVar19;
  ulonglong uVar16;
  undefined4 uVar20;
  longlong lVar17;
  longlong lVar18;
  short sVar23;
  float *pfVar22;
  longlong lVar21;
  longlong lVar24;
  ulonglong unaff_r26;
  undefined4 *puVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x150;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar15;
  puVar11[0x2c] = in_LR;
  puVar11[0x25] = in_f27;
  puVar11[0x26] = in_f28;
  puVar11[0x27] = in_f29;
  puVar11[0x28] = in_f30;
  puVar11[0x29] = in_f31;
  puVar11[0x24] = unaff_r31;
  puVar11[0x23] = unaff_r30;
  gVar14 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar26 = ZEXT48(pvVar9);
  puVar11[0x22] = unaff_r29;
  puVar11[0x21] = unaff_r28;
  puVar11[0x20] = unaff_r27;
  puVar11[0x1f] = unaff_r26;
  if ((gVar14 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar19 = 0;
    puVar25 = &DAT_0095cd50;
    sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar25[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar25[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar19 = iVar19 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar19 < sVar23);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x16';
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar8 = moby->uid;
      if (((&DAT_00a545c4)[(short)uVar8] != '\0') ||
         ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar8 >> 5) << 2))
          & 1 << (uVar8 & 0x1f)) != 0)) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar9 + 0x44) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar9 + 0x48) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      *(char **)((int)pvVar9 + 0x20) = "Captain Qwark";
      FUN_004d3720(moby,uVar26);
      *(undefined1 *)((int)pvVar9 + 8) = 1;
      moby->state = '\x01';
    }
    else {
      if ((*(char *)((int)pvVar9 + 8) == '\x01') &&
         (iVar19 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0x40)), iVar19 != 0))
      {
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
          mobyfunc::SetLevelFlag();
          respawn::SetSpawnPoint
                    ((Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x48)].pos,
                     (Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x48)].rot);
        }
        FUN_00414594(MobyInstance + *(int *)((int)pvVar9 + 0x44));
        uVar20 = 0x437f0000;
      }
      else {
        uVar20 = 0x3fd9999a;
      }
      *(undefined4 *)((int)pvVar9 + 0xc) = uVar20;
      iVar19 = FUN_004d3870(moby,uVar26);
      if (iVar19 != 0) {
        mobyutil::MB_SetPointAheadOfMoby(0x4008000000000000,moby);
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_gameMode != GAME_MODE_SCENE) {
      moby->state = '\x01';
      sVar23 = *(short *)((int)pvVar9 + 4);
      if ((sVar23 == 3) || (sVar23 == 4)) {
        if (sVar23 != 4) {
          mobyutil::MB_ToastMessage(0x36b3,0xffffffffffffffff);
        }
        else {
          mobyutil::MB_ToastMessage(0x53dd,0xffffffffffffffff);
        }
        mobyutil::MB_UnlockItem(0x20,1);
        FUN_004145d0(MobyInstance + *(int *)((int)pvVar9 + 0x44));
        uVar8 = moby->uid;
        iVar13 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
        iVar19 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
        uVar10 = *(uint *)(&DAT_00a54dd0 + iVar19);
        *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar13) =
             *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar13) | 1 << (uVar8 & 0x1f);
        *(uint *)(&DAT_00a54dd0 + iVar19) = uVar10 | 1 << (uVar8 & 0x1f);
        memcard::memcard_Save(0,-1);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
  }
  else if (bVar1 < 4) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  dVar35 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_0048e68c;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_0048e138:
    if (*(int *)((int)pvVar9 + 0x194) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x194) = 0;
      *(float *)((int)pvVar9 + 0x180) = hero::g_heroCGPos;
      *(float *)((int)pvVar9 + 0x184) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x188) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x18c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = hero::g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar11 + 0x11) = fVar3;
    *(float *)((int)puVar11 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar11 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar16 = (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar11 + 0x11));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar11 + 0x8c));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar12 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar17 = uVar15 - 0x140;
      lVar21 = uVar15 - 0x7c;
      lVar24 = uVar15 - 0x6c;
      lVar27 = 2;
      fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x1c) = fVar5;
      *(float *)(puVar11 + 0x1b) = fVar5;
      *(float *)((int)puVar11 + 0xdc) = fVar5;
      *(float *)((int)puVar11 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar6;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar5;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar5 * fVar5;
        iVar19 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar15 - 0x7c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar5;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        iVar13 = (int)lVar24;
        lVar17 = lVar17 + 0x10;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar19 + 0xd4) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar28 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar28) goto LAB_0048e138;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar26 + 0x194);
    }
    else {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x28,0x48d96c);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar20 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x194,uVar26
                         );
      *(undefined4 *)((int)pvVar9 + 0x194U & 0xfffffffc) = uVar20;
    }
  }
  iVar19 = fastfunc::FastDecTimerS32(uVar26 + 0x198);
  if (iVar19 != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x198) = uVar20;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)fastfunc::FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar9 + 0x180));
    *(float *)((int)pvVar9 + 0x180) = *(float *)((int)pvVar9 + 0x180) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x184) = *(float *)((int)pvVar9 + 0x184) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x188) = *(float *)((int)pvVar9 + 0x188) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x194) == 0) {
    fVar2 = *(float *)((int)pvVar9 + 0x180);
    fVar3 = *(float *)((int)pvVar9 + 0x184);
    fVar5 = *(float *)((int)pvVar9 + 0x188);
  }
  else {
    dVar35 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar34 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar32 = (double)fVar3;
  *(float *)((int)puVar11 + 0x7c) = fVar2;
  *(float *)(puVar11 + 0x10) = fVar3;
  dVar31 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar11 + 0x84) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar16 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar11 + 0x7c));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar30 = ABS((double)*(float *)(puVar11 + 0x10));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar17 = uVar15 - 0x140;
    lVar24 = uVar15 - 0x8c;
    lVar21 = uVar15 - 0x9c;
    lVar27 = 2;
    fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x18) = fVar5;
    *(float *)(puVar11 + 0x17) = fVar5;
    *(float *)((int)puVar11 + 0xbc) = fVar5;
    *(float *)((int)puVar11 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
    *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar5;
    *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar5 * fVar5;
      iVar19 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar15 - 0x9c;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar5;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar21 = 2;
    lVar17 = lVar18;
    dVar28 = dVar33;
    do {
      iVar19 = (int)lVar17;
      iVar13 = (int)lVar24;
      lVar17 = lVar17 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xb4)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar30 = (double)fastfunc::FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)((int)puVar11 + 0x74) = (float)dVar31;
  fVar2 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar2);
  *(float *)(puVar11 + 0xe) = fVar2;
  *(float *)(puVar11 + 0xf) = (float)(dVar32 - ABS(dVar31));
  uVar16 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar11 + 0xe));
  if ((double)*(float *)(puVar11 + 0xf) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar11 + 0x74));
  if ((double)*(float *)(puVar11 + 0xf) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (dVar33 < dVar28) {
    lVar17 = uVar15 - 0x140;
    lVar21 = uVar15 - 0xbc;
    lVar24 = uVar15 - 0xac;
    lVar27 = 2;
    fVar5 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x14) = fVar5;
    *(float *)(puVar11 + 0x13) = fVar5;
    *(float *)((int)puVar11 + 0x9c) = fVar5;
    *(float *)((int)puVar11 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar6;
    *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar5;
    *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar5 * fVar5;
      iVar19 = (int)lVar21;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar15 - 0xbc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar5;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar17 = 2;
    do {
      iVar19 = (int)lVar18;
      iVar13 = (int)lVar24;
      lVar18 = lVar18 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0x94)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar33 = -dVar33;
  dVar28 = 1.5707963705062866;
  if ((dVar30 <= 1.5707963705062866) && (dVar28 = dVar30, dVar30 < -1.5707963705062866)) {
    dVar28 = -1.5707963705062866;
  }
  dVar31 = 0.5235987901687622;
  if ((dVar33 <= 0.5235987901687622) && (dVar31 = dVar33, dVar33 < -0.5235987901687622)) {
    dVar31 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 0xe8) = (float)(dVar28 * 0.6000000238418579);
  *(float *)((int)pvVar9 + 0xe4) = (float)dVar31;
  *(float *)((int)pvVar9 + 0x168) = (float)(dVar28 * 0.4000000059604645);
LAB_0048e68c:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xf0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar26 + 0x80,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * dVar28),moby,uVar26 + 0x100,1);
  return;
}



//==== 0048e730  ns=mobyupdate_helpers  size=0x14
// sig: undefined M852_0048e730(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M852_0048e730(void)

{
  DAT_008ad3ac = 0x10000;
  return;
}



//==== 0048e760  ns=mobyupdate_unsorted  size=0x260
// sig: undefined UpdateMoby_852(MobyInstance * moby)
// callers(0): 
// callees(4): 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32

/* Moby 852 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_852(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  int *piVar4;
  int iVar5;
  MobyInstance *pMVar6;
  
  bVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  if (bVar1 == 0) {
    piVar4[3] = (int)((moby->pos).z + 1.0);
    fVar2 = (moby->pos).z;
    moby->state = '\x01';
    (moby->pos).z = fVar2 - 8.0;
    pMVar6 = (MobyInstance *)&DAT_0048e748;
  }
  else if (bVar1 < 2) {
    bVar1 = MobyInstance[*piVar4].setByGroup;
    if (bVar1 == 1) {
      moby->state = '\x02';
      pMVar6 = (MobyInstance *)0x2;
    }
    else {
      pMVar6 = (MobyInstance *)(uint)bVar1;
      if (bVar1 == 2) {
        fVar3 = (f32)piVar4[3];
        (moby->rotation).y = 0.0;
        (moby->pos).z = fVar3;
        moby->state = '\x03';
        pMVar6 = (MobyInstance *)0x0;
      }
    }
  }
  else {
    pMVar6 = moby;
    if (bVar1 < 3) {
      iVar5 = fastfunc::FastDecTimerS32(piVar4 + 1);
      if ((iVar5 != 0) &&
         (mobyutil::OrganicDelt
                    ((float)piVar4[3],DAT_008ad3d0 * DAT_0071f418,DAT_008ad3d4 * DAT_0071f418,
                     DAT_008ad3d8 * mobyutil::g_FrameTime,&(moby->pos).z,0x8b0000,
                     (float *)(piVar4 + 4)), moby->oClass == BRIDGE_PILE)) {
        fVar2 = (moby->pos).z;
        if ((ABS(fVar2 - (float)piVar4[3]) < 3.0) &&
           (3.0 < ABS(((float)piVar4[3] - fVar2) + (float)piVar4[4]))) {
          sound::PlayMobySound(0,0,moby);
        }
      }
      iVar5 = fastfunc::FastDecTimerS32(piVar4 + 2);
      if (iVar5 == 0) {
        pMVar6 = (MobyInstance *)piVar4[2];
        if (((MobyInstance *)piVar4[2] == (MobyInstance *)0x1) &&
           (pMVar6 = (MobyInstance *)(uint)moby->oClass, moby->oClass == BRIDGE_PART)) {
          pMVar6 = (MobyInstance *)sound::PlayMobySound(0,0,moby);
        }
      }
      else {
        mobyutil::OrganicDeltAng
                  (0.0,DAT_008ad3dc * 0.017453292 * DAT_0071f418,
                   DAT_008ad3e0 * 0.017453292 * DAT_0071f418,
                   DAT_008ad3e4 * 0.017453292 * mobyutil::g_FrameTime,&(moby->rotation).y,0x720000,
                   (float *)(piVar4 + 5));
        pMVar6 = (MobyInstance *)(moby->rotation).y;
        if (pMVar6 == (MobyInstance *)0x0) {
          moby->state = '\x03';
          pMVar6 = (MobyInstance *)0x3;
        }
      }
    }
  }
  return pMVar6;
}



//==== 0048e9d0  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M854_Aridia_SubmitOcean(void)
// callers(0): 
// callees(4): 00110b70 mobyutil::MB_IsPntInCuboid; 0017ea4c water::SetFogVars; 0017eb70 water::RestoreFogVars; 0017ec00 water::OceanPass_Thunk

void mobyupdate_helpers::M854_Aridia_SubmitOcean(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x78);
  water::SetFogVars(0.0,260080.0,255.0,0.0);
  if ((OcclMode != 0) ||
     ((*piVar1 != -1 &&
      (iVar2 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar1), iVar2 != 0)))
     ) {
    water::OceanPass_Thunk(&OceanPlane_008c7880);
  }
  if ((OcclMode != 0) ||
     ((piVar1[1] != -1 &&
      (iVar2 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar1[1]), iVar2 != 0)
      ))) {
    water::OceanPass_Thunk(&OceanPlane_008c7950);
    water::OceanPass_Thunk(&OceanPlane_008c79b0);
    water::OceanPass_Thunk(&OceanPlane_008c7a10);
    water::OceanPass_Thunk(&OceanPlane_008c7a60);
    water::OceanPass_Thunk(&OceanPlane_008c7ab0);
  }
  if (OcclMode == 0) {
    if (piVar1[2] == -1) goto LAB_0048eb54;
    iVar2 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar1[2]);
    if (iVar2 == 0) goto LAB_0048eb54;
  }
  water::OceanPass_Thunk(&OceanPlane_008c78e0);
LAB_0048eb54:
  water::RestoreFogVars();
  return;
}



//==== 0048eb78  ns=mobyupdate_unsorted  size=0xe0
// sig: undefined UpdateMoby_854_AridiaOcean(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d760 draw::RegisterOceanUpdate; 0017ea04 water::ScaleWaveTable

/* Moby 854 */

void mobyupdate_unsorted::UpdateMoby_854_AridiaOcean(MobyInstance *moby)

{
  if (moby->state == 0) {
    OceanPlane_008c7880.depth = 0x80;
    OceanPlane_008c79b0.depth = 0x80;
    OceanPlane_008c78e0.depth = 0x80;
    OceanPlane_008c7a10.depth = 0x80;
    OceanPlane_008c7950.depth = 0x80;
    OceanPlane_008c7a60.depth = 0x80;
    OceanPlane_008c7ab0.depth = 0x80;
    water::ScaleWaveTable(0.16666667);
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    draw::RegisterOceanUpdate(&PTR_M854_Aridia_SubmitOcean_0070f0f8,moby);
  }
  return;
}



//==== 0048ec58  ns=mobyupdate_helpers  size=0x14
// sig: undefined M855_0048ec58(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M855_0048ec58(void)

{
  DAT_008c7b3c = 0x10000;
  return;
}



//==== 0048ecd0  ns=mobyupdate_unsorted  size=0x92c
// sig: undefined UpdateMoby_855(MobyInstance * moby)
// callers(0): 
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001042ec mobyutil::MB_SetStateByGroup; 0012e8c8 partupd::SpawnPart_46; 0012f1f8 partupd::SpawnPart_50; 0015d12c sound::PlayMobySound

/* Moby 855 */

ulonglong mobyupdate_unsorted::UpdateMoby_855(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  MobyInstance *pMVar9;
  undefined1 auVar10 [16];
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [80];
  
  uVar11 = (ulonglong)(int)moby;
  pvVar8 = moby->pVar;
  if (pvVar8 != (void *)0x0) {
    bVar5 = moby->state;
    uVar11 = (ulonglong)bVar5;
    bVar14 = (bVar5 == 1) << 1;
    if (bVar5 == 0) {
      uVar11 = ((LZCOUNT(0xff - (uint)(byte)g_LevelFlags[Level][(byte)moby->levelFlagIdx]) << 0x3a)
                >> 0x3f & 2U) + 1;
      moby->state = (u8)uVar11;
    }
    else if (bVar5 < 2) {
      if ((-1 < *(int *)((int)pvVar8 + 8)) &&
         (uVar11 = (ulonglong)(byte)MobyInstance[*(int *)((int)pvVar8 + 8)].setByGroup,
         MobyInstance[*(int *)((int)pvVar8 + 8)].setByGroup != 0)) {
        uVar11 = mobyutil::MB_SetStateByGroup(moby->group,2);
      }
    }
    else if (bVar5 < 3) {
      dVar23 = (double)(moby->pos).y;
      dVar22 = (double)(moby->pos).x;
      dVar20 = (double)GameCamera.posY;
      dVar18 = (double)GameCamera.posX;
      fVar1 = (float)(dVar23 - dVar20);
      dVar15 = (double)(moby->pos).z;
      fVar2 = (float)(dVar22 - dVar18);
      dVar21 = (double)GameCamera.posZ;
      fVar3 = (float)(dVar15 - dVar21);
      *(int *)((int)pvVar8 + 0x10) = *(int *)((int)pvVar8 + 0x10) + 1;
      fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar1 < 64.0) {
        iVar12 = **(int **)((int)pvVar8 + 0xc);
        if (((iVar12 < 0) || (sound::g_SoundChannels[iVar12].pMoby == (MobyInstance *)0x0)) ||
           ((sound::g_SoundChannels[iVar12].pMoby)->oClass != SEWER_PIPE_WITH_SLUDGE)) {
          iVar12 = sound::PlayMobySound(0,0xd,moby);
          **(int **)((int)pvVar8 + 0xc) = iVar12;
          dVar15 = (double)(moby->pos).z;
          fVar1 = (moby->pos).y;
          if (-1 < iVar12) {
            fVar2 = (moby->transform).v0.y;
            fVar3 = (moby->transform).v0.x;
            fVar4 = (moby->transform).v0.z;
            dVar18 = 0.0;
            fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            if (fVar6 == 0.0) {
              fVar7 = (moby->transform).v0.w;
              dVar20 = dVar18;
              dVar21 = dVar18;
            }
            else {
              fVar6 = 2.5 / fVar6;
              fVar7 = (moby->transform).v0.w;
              dVar18 = (double)(fVar3 * fVar6);
              dVar20 = (double)(fVar2 * fVar6);
              dVar21 = (double)(fVar4 * fVar6);
            }
            iVar12 = (int)((longlong)iVar12 << 7) - (int)((longlong)iVar12 << 4);
            *(float *)((int)sound::g_SoundChannels + iVar12 + 0x20) =
                 (float)(dVar18 + (double)(moby->pos).x);
            *(float *)((int)sound::g_SoundChannels + iVar12 + 0x24) =
                 (float)(dVar20 + (double)fVar1);
            *(float *)((int)sound::g_SoundChannels + iVar12 + 0x2c) = fVar7;
            *(float *)((int)sound::g_SoundChannels + iVar12 + 0x28) = (float)(dVar21 + dVar15);
          }
        }
        else {
          pMVar9 = sound::g_SoundChannels[iVar12].pMoby;
          if ((pMVar9 != moby) &&
             ((pMVar9->state != '\x02' ||
              (fVar2 = (float)((double)(pMVar9->pos).y - dVar20),
              fVar3 = (float)((double)(pMVar9->pos).x - dVar18),
              fVar4 = (float)((double)(pMVar9->pos).z - dVar21),
              fVar1 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2))))) {
            fVar1 = (moby->transform).v0.y;
            fVar2 = (moby->transform).v0.x;
            fVar3 = (moby->transform).v0.z;
            dVar18 = 0.0;
            fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
            if (fVar4 == 0.0) {
              fVar6 = (moby->transform).v0.w;
              dVar20 = dVar18;
              dVar21 = dVar18;
            }
            else {
              fVar4 = 2.5 / fVar4;
              fVar6 = (moby->transform).v0.w;
              dVar18 = (double)(fVar2 * fVar4);
              dVar20 = (double)(fVar1 * fVar4);
              dVar21 = (double)(fVar3 * fVar4);
            }
            sound::g_SoundChannels[iVar12].pos[3] = fVar6;
            sound::g_SoundChannels[iVar12].pos[0] = (float)(dVar18 + dVar22);
            sound::g_SoundChannels[iVar12].pos[1] = (float)(dVar20 + dVar23);
            sound::g_SoundChannels[iVar12].pos[2] = (float)(dVar21 + dVar15);
            sound::g_SoundChannels[**(int **)((int)pvVar8 + 0xc)].pMoby = moby;
          }
        }
      }
      dVar18 = (double)*(float *)((int)WaterTiles + *(int *)((int)pvVar8 + 4) * 0x11a0 + 8);
      if (dVar15 < dVar18) {
        moby->state = '\x03';
      }
      uVar11 = 0x8c0000;
      auVar10 = ZEXT416(0);
      iVar12 = 0;
      auVar27 = loadVectorLeftIndexed(0x7b80,0x8c0000);
      auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                 auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
      if ((bool)(bVar14 >> 1 & 1)) {
        dVar25 = 0.0;
        dVar22 = 0.4000000059604645;
        dVar23 = 10.0;
        dVar24 = 2.0;
        dVar15 = 1.25;
        dVar20 = 1.0;
        dVar21 = 1.5;
        do {
          dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar25,100.0);
          dVar19 = (double)DAT_008c7b84;
          fVar1 = DAT_008c7b78;
          if (dVar16 <= dVar19) {
            fVar1 = DAT_008c7b74;
          }
          dVar26 = (double)fVar1;
          mobyutil::MB_randRangeFloat(-DAT_008c7b7c,DAT_008c7b7c);
          mobyutil::MB_randRangeFloat((float)dVar26,DAT_008c7b70);
          mobyutil::MB_randRangeFloat((float)dVar26,DAT_008c7b70);
          mobyutil::MB_randRangeFloat((float)dVar26,DAT_008c7b70);
          dVar21 = (double)(float)dVar21;
          dVar20 = (double)(float)dVar20;
          if (dVar16 <= dVar19) {
            dVar16 = (double)DAT_008c7b68;
            mobyutil::MB_randRangeFloat(-0.4,(float)dVar22);
          }
          else {
            dVar16 = (double)DAT_008c7b6c;
          }
          dVar19 = (double)mobyutil::MB_randRangeFloat(0.8,1.2);
          partupd::SpawnPart_50
                    ((double)(float)(dVar16 * dVar19),dVar18,
                     (double)(float)((double)DAT_0071f418 * dVar23),local_130,local_120);
          iVar13 = mobyutil::MB_randInt(2);
          if ((iVar13 != 0) &&
             (SQRT((float)((double)(float)((double)(moby->pos).z - dVar18) * dVar24) /
                   (float)((double)DAT_0071f418 * dVar23)) <
              (float)(longlong)*(int *)((int)pvVar8 + 0x10))) {
            mobyutil::MB_randRot();
            mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar15);
            uVar17 = mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar21);
            iVar13 = mobyutil::MB_randInt(2);
            dVar16 = -2.0;
            if (iVar13 != 0) {
              dVar16 = dVar24;
            }
            partupd::SpawnPart_46(uVar17,dVar16,local_130,&DAT_00a15d30);
          }
          iVar12 = iVar12 + 1;
          uVar11 = 0x8c0000;
        } while ((float)(longlong)iVar12 < DAT_008c7b80);
      }
    }
  }
  return uVar11;
}



//==== 0048f5fc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M856_0048f5fc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M856_0048f5fc(void)

{
  DAT_008c7bd4 = 0x10000;
  return;
}



//==== 0048f650  ns=mobyupdate_unsorted  size=0xb24
// sig: undefined UpdateMoby_856(MobyInstance * moby)
// callers(0): 
// callees(5): 0010a2e0 mobyutil::OrganicDeltAng; 0011440c mobyutil::MB_SplineMarkCrossings; 00114d58 mobyutil::MB_SplineFindRouteNode; 0012d0e8 partupd::SpawnPart_41; 005026a0 fastfunc::FastSubRots

/* Moby 856 */

void mobyupdate_unsorted::UpdateMoby_856(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyInstance *pMVar13;
  longlong lVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  int iVar18;
  longlong lVar17;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar41 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar17 = uVar16 - 0x1b0;
  puVar7 = (ulonglong *)lVar17;
  *puVar7 = uVar16;
  puVar7[0x38] = in_LR;
  puVar7[0x34] = in_f30;
  puVar7[0x35] = in_f31;
  lVar14 = uVar16 - 0x70;
  puVar15 = (undefined4 *)lVar14;
  puVar15[3] = in_vr31_32_3;
  puVar15[2] = in_vr31_32_2;
  puVar15[1] = in_vr31_32_1;
  *puVar15 = in_vr31_32_0;
  puVar7[0x32] = unaff_r30;
  puVar15 = (undefined4 *)moby->pVar;
  puVar7[0x33] = unaff_r31;
  puVar7[0x31] = unaff_r29;
  lVar22 = 1;
  *(undefined4 *)(puVar7 + 0x1b) = 0;
  *(undefined4 *)((int)puVar7 + 0xdc) = 0;
  puVar7[0x2f] = unaff_r27;
  *(undefined4 *)(puVar7 + 0x1c) = 0;
  *(undefined4 *)((int)puVar7 + 0xe4) = 0;
  *(undefined4 *)(puVar7 + 0x1d) = 0;
  iVar18 = DAT_010e03d0;
  *(undefined4 *)(puVar7 + 0x1b) = *puVar15;
  puVar7[0x30] = unaff_r28;
  puVar7[0x2e] = unaff_r26;
  puVar7[0x2d] = unaff_r25;
  puVar7[0x2c] = unaff_r24;
  puVar7[0x2b] = unaff_r23;
  if (iVar18 != 0) {
    auVar41 = ZEXT416(0);
    auVar35 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    iVar18 = 0;
    auVar41 = loadVectorLeftIndexed(lVar14,0x48f610);
    dVar27 = 0.3330000042915344;
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    do {
      auVar29 = vectorConvertFromSignedFixedPointWord(auVar35,0);
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      uVar21 = ZEXT48(Splines[puVar15[2]]);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar41,auVar30);
      auVar30 = loadVectorLeftIndexed(0x20,uVar21);
      auVar31 = loadVectorLeftIndexed(0x10,uVar21);
      auVar32 = loadVectorLeftIndexed(0x24,uVar21);
      auVar30 = vectorSubtractFloatingPoint(auVar30,auVar31);
      fVar1 = Splines[puVar15[2]]->points[1].w;
      auVar33 = loadVectorLeftIndexed(0x14,uVar21);
      auVar32 = vectorSubtractFloatingPoint(auVar32,auVar33);
      auVar33 = loadVectorLeftIndexed(0x28,uVar21);
      auVar34 = loadVectorLeftIndexed(0x18,uVar21);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar31);
      auVar31 = vectorSubtractFloatingPoint(auVar33,auVar34);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x70,lVar17);
      *(undefined4 *)(puVar7 + 0xe) = uVar6;
      pMVar13 = g_heroMobyPtr;
      auVar30 = loadVectorLeftIndexed(0x14,uVar21);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar29,auVar32,auVar30);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x74,lVar17);
      *(undefined4 *)((int)puVar7 + 0x74) = uVar6;
      auVar30 = loadVectorLeftIndexed(0x18,uVar21);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar29,auVar31,auVar30);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x78,lVar17);
      *(undefined4 *)(puVar7 + 0xf) = uVar6;
      *(float *)((int)puVar7 + 0x7c) = fVar1;
      partupd::SpawnPart_41((float)dVar27,puVar7 + 0xe,pMVar13,2,0x800000ff,uVar21,0x7f,2,0xff);
      iVar18 = iVar18 + 1;
      auVar29._0_4_ = auVar35._0_4_ + 1;
      auVar29._8_8_ = auVar35._8_8_;
      auVar29._4_4_ = auVar35._4_4_ + 1;
      auVar30._0_8_ = auVar29._0_8_;
      auVar30._12_4_ = auVar35._12_4_;
      auVar30._8_4_ = auVar35._8_4_ + 1;
      auVar35._0_12_ = auVar30._0_12_;
      auVar35._12_4_ = auVar30._12_4_ + 1;
    } while (iVar18 < 0xc);
    lVar22 = 2;
    *(undefined4 *)((int)puVar7 + 0xdc) = puVar15[2];
  }
  if (DAT_010e03d4 != 0) {
    auVar41 = ZEXT416(0);
    auVar31 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    iVar18 = 0;
    auVar41 = loadVectorLeftIndexed(lVar14,0x48f610);
    dVar27 = 0.3330000042915344;
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    do {
      auVar30 = vectorConvertFromSignedFixedPointWord(auVar31,0);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      uVar21 = ZEXT48(Splines[puVar15[3]]);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar41,auVar35);
      auVar35 = loadVectorLeftIndexed(0x20,uVar21);
      auVar29 = loadVectorLeftIndexed(0x10,uVar21);
      auVar35 = vectorSubtractFloatingPoint(auVar35,auVar29);
      auVar32 = loadVectorLeftIndexed(0x24,uVar21);
      auVar33 = loadVectorLeftIndexed(0x14,uVar21);
      fVar1 = Splines[puVar15[3]]->points[1].w;
      auVar32 = vectorSubtractFloatingPoint(auVar32,auVar33);
      auVar33 = loadVectorLeftIndexed(0x28,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar29);
      auVar29 = loadVectorLeftIndexed(0x18,uVar21);
      auVar29 = vectorSubtractFloatingPoint(auVar33,auVar29);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x80,lVar17);
      *(undefined4 *)(puVar7 + 0x10) = uVar6;
      pMVar13 = g_heroMobyPtr;
      auVar35 = loadVectorLeftIndexed(0x14,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar32,auVar35);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x84,lVar17);
      *(undefined4 *)((int)puVar7 + 0x84) = uVar6;
      auVar35 = loadVectorLeftIndexed(0x18,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar35);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x88,lVar17);
      *(undefined4 *)(puVar7 + 0x11) = uVar6;
      *(float *)((int)puVar7 + 0x8c) = fVar1;
      partupd::SpawnPart_41((float)dVar27,puVar7 + 0x10,pMVar13,2,0x800000ff,uVar21,0x7f,2,0xff);
      iVar18 = iVar18 + 1;
      auVar32._0_4_ = auVar31._0_4_ + 1;
      auVar32._8_8_ = auVar31._8_8_;
      auVar32._4_4_ = auVar31._4_4_ + 1;
      auVar33._0_8_ = auVar32._0_8_;
      auVar33._12_4_ = auVar31._12_4_;
      auVar33._8_4_ = auVar31._8_4_ + 1;
      auVar31._0_12_ = auVar33._0_12_;
      auVar31._12_4_ = auVar33._12_4_ + 1;
    } while (iVar18 < 0xc);
    lVar19 = lVar22 << 2;
    lVar22 = lVar22 + 1;
    *(undefined4 *)(((uint)lVar19 | (uint)puVar7) + 0xd8) = puVar15[3];
  }
  if (DAT_010e03d8 != 0) {
    auVar41 = ZEXT416(0);
    auVar34 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    iVar18 = 0;
    auVar41 = loadVectorLeftIndexed(lVar14,0x48f610);
    dVar27 = 0.3330000042915344;
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    do {
      auVar30 = vectorConvertFromSignedFixedPointWord(auVar34,0);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      uVar21 = ZEXT48(Splines[puVar15[4]]);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar41,auVar35);
      auVar35 = loadVectorLeftIndexed(0x20,uVar21);
      auVar29 = loadVectorLeftIndexed(0x10,uVar21);
      auVar35 = vectorSubtractFloatingPoint(auVar35,auVar29);
      auVar31 = loadVectorLeftIndexed(0x24,uVar21);
      auVar32 = loadVectorLeftIndexed(0x14,uVar21);
      fVar1 = Splines[puVar15[4]]->points[1].w;
      auVar31 = vectorSubtractFloatingPoint(auVar31,auVar32);
      auVar32 = loadVectorLeftIndexed(0x28,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar29);
      auVar29 = loadVectorLeftIndexed(0x18,uVar21);
      auVar29 = vectorSubtractFloatingPoint(auVar32,auVar29);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x90,lVar17);
      *(undefined4 *)(puVar7 + 0x12) = uVar6;
      pMVar13 = g_heroMobyPtr;
      auVar35 = loadVectorLeftIndexed(0x14,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar31,auVar35);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x94,lVar17);
      *(undefined4 *)((int)puVar7 + 0x94) = uVar6;
      auVar35 = loadVectorLeftIndexed(0x18,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar35);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x98,lVar17);
      *(undefined4 *)(puVar7 + 0x13) = uVar6;
      *(float *)((int)puVar7 + 0x9c) = fVar1;
      partupd::SpawnPart_41((float)dVar27,puVar7 + 0x12,pMVar13,2,0x800000ff,uVar21,0x7f,2,0xff);
      iVar18 = iVar18 + 1;
      auVar36._0_4_ = auVar34._0_4_ + 1;
      auVar36._8_8_ = auVar34._8_8_;
      auVar36._4_4_ = auVar34._4_4_ + 1;
      auVar37._0_8_ = auVar36._0_8_;
      auVar37._12_4_ = auVar34._12_4_;
      auVar37._8_4_ = auVar34._8_4_ + 1;
      auVar34._0_12_ = auVar37._0_12_;
      auVar34._12_4_ = auVar37._12_4_ + 1;
    } while (iVar18 < 0xc);
    lVar19 = lVar22 << 2;
    lVar22 = lVar22 + 1;
    *(undefined4 *)((int)puVar7 + (int)lVar19 + 0xd8) = puVar15[4];
  }
  if (DAT_010e03dc != 0) {
    auVar41 = ZEXT416(0);
    auVar38 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    iVar18 = 0;
    auVar41 = loadVectorLeftIndexed(lVar14,0x48f610);
    dVar27 = 0.3330000042915344;
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    do {
      auVar30 = vectorConvertFromSignedFixedPointWord(auVar38,0);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      uVar21 = ZEXT48(Splines[puVar15[5]]);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar41,auVar35);
      auVar35 = loadVectorLeftIndexed(0x20,uVar21);
      auVar29 = loadVectorLeftIndexed(0x10,uVar21);
      auVar35 = vectorSubtractFloatingPoint(auVar35,auVar29);
      auVar31 = loadVectorLeftIndexed(0x24,uVar21);
      auVar32 = loadVectorLeftIndexed(0x14,uVar21);
      fVar1 = Splines[puVar15[5]]->points[1].w;
      auVar31 = vectorSubtractFloatingPoint(auVar31,auVar32);
      auVar32 = loadVectorLeftIndexed(0x28,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar29);
      auVar29 = loadVectorLeftIndexed(0x18,uVar21);
      auVar29 = vectorSubtractFloatingPoint(auVar32,auVar29);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xa0,lVar17);
      *(undefined4 *)(puVar7 + 0x14) = uVar6;
      pMVar13 = g_heroMobyPtr;
      auVar35 = loadVectorLeftIndexed(0x14,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar31,auVar35);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xa4,lVar17);
      *(undefined4 *)((int)puVar7 + 0xa4) = uVar6;
      auVar35 = loadVectorLeftIndexed(0x18,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar35);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xa8,lVar17);
      *(undefined4 *)(puVar7 + 0x15) = uVar6;
      *(float *)((int)puVar7 + 0xac) = fVar1;
      partupd::SpawnPart_41((float)dVar27,puVar7 + 0x14,pMVar13,2,0x800000ff,uVar21,0x7f,2,0xff);
      iVar18 = iVar18 + 1;
      auVar39._0_4_ = auVar38._0_4_ + 1;
      auVar39._8_8_ = auVar38._8_8_;
      auVar39._4_4_ = auVar38._4_4_ + 1;
      auVar40._0_8_ = auVar39._0_8_;
      auVar40._12_4_ = auVar38._12_4_;
      auVar40._8_4_ = auVar38._8_4_ + 1;
      auVar38._0_12_ = auVar40._0_12_;
      auVar38._12_4_ = auVar40._12_4_ + 1;
    } while (iVar18 < 0xc);
    lVar14 = lVar22 << 2;
    lVar22 = lVar22 + 1;
    *(undefined4 *)((int)puVar7 + (int)lVar14 + 0xd8) = puVar15[5];
  }
  if (DAT_008c7bf8 != 0) {
    mobyutil::MB_SplineMarkCrossings(uVar16 - 0xd8,lVar22,puVar15[1]);
  }
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if ((((moby->state < 2) && (g_heroState == CROUCHING)) &&
           (fVar1 = (moby->pos).y - g_heroPosition.y, fVar2 = (moby->pos).x - g_heroPosition.x,
           fVar5 = (moby->pos).z - g_heroPosition.z,
           1.5 < SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1))) &&
          (iVar18 = mobyutil::MB_SplineFindRouteNode
                              (0.25,(int)(uVar16 - 0xd8),lVar22,(longlong)(int)puVar15[1],
                               uVar16 - 0xd8,&moby->pos,&g_heroPosition,puVar7 + 0x16), iVar18 != 0)
          ) {
    fVar1 = *(float *)(puVar7 + 0x16) - (moby->pos).x;
    fVar2 = *(float *)((int)puVar7 + 0xb4) - (moby->pos).y;
    fVar3 = ABS(fVar1);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar7 + 0xcc) = fVar1;
    *(float *)(puVar7 + 0x1a) = fVar2;
    *(float *)((int)puVar7 + 0xd4) = fVar3 - fVar5;
    dVar27 = 0.0;
    uVar21 = (ulonglong)(*(uint *)((int)puVar7 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar7 + 0x1a) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar7 + 0xcc));
    if (*(float *)((int)puVar7 + 0xd4) - 0.0 < 0.0) {
      fVar1 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)(puVar7 + 0x1a));
    if (*(float *)((int)puVar7 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    dVar28 = 0.7853981852531433;
    dVar24 = dVar27;
    if (0.0 < fVar1) {
      lVar14 = uVar16 - 0x1a0;
      lVar22 = uVar16 - 0xa4;
      lVar19 = uVar16 - 0x94;
      lVar23 = 2;
      fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)(puVar7 + 0x23) = fVar1;
      *(float *)(puVar7 + 0x22) = fVar1;
      *(float *)((int)puVar7 + 0x114) = fVar1;
      *(float *)((int)puVar7 + 0x10c) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x22) = *(float *)(puVar7 + 0x22) * fVar3;
      *(float *)((int)puVar7 + 0x114) = *(float *)((int)puVar7 + 0x114) * fVar1;
      *(float *)(puVar7 + 0x23) = *(float *)(puVar7 + 0x23) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x10c) = *(float *)((int)lVar14 + 0xfc) * fVar1 * fVar1;
        iVar18 = (int)lVar22;
        lVar14 = lVar14 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar18 + 4) * fVar1 * fVar1;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar19 = uVar16 - 0xa4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar14 = lVar17;
      lVar22 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar14 + 0x10c) = *(float *)((int)lVar14 + 0x10c) * fVar1;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar22 = 2;
      lVar14 = lVar17;
      do {
        iVar18 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar8 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0x10c)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar24,DAT_0071f418 * 25.132742,DAT_0071f418 * 25.132742,
               mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,0x48f610,(float *)(puVar15 + 6)
              );
    fVar1 = *(float *)(puVar7 + 0x16) - (moby->pos).x;
    fVar2 = *(float *)((int)puVar7 + 0xb4) - (moby->pos).y;
    dVar25 = ABS((double)fVar1);
    dVar26 = ABS((double)fVar2);
    *(float *)(puVar7 + 0x18) = fVar1;
    *(float *)((int)puVar7 + 0xc4) = fVar2;
    fVar1 = (moby->rotation).z;
    *(float *)(puVar7 + 0x19) = (float)(dVar25 - dVar26);
    uVar21 = (ulonglong)(*(uint *)(puVar7 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0xc4) >> 0x1d) & 4;
    dVar24 = ABS((double)*(float *)(puVar7 + 0x18));
    if ((double)*(float *)(puVar7 + 0x19) - dVar27 < 0.0) {
      dVar24 = dVar26;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar26 = ABS((double)*(float *)((int)puVar7 + 0xc4));
    if ((double)*(float *)(puVar7 + 0x19) - dVar27 < 0.0) {
      dVar26 = dVar25;
    }
    fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    if (dVar27 < dVar24) {
      lVar14 = uVar16 - 0x1a0;
      lVar22 = uVar16 - 0xc4;
      lVar19 = uVar16 - 0xb4;
      lVar23 = 2;
      fVar3 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x1f) = fVar3;
      *(float *)(puVar7 + 0x1e) = fVar3;
      *(float *)((int)puVar7 + 0xf4) = fVar3;
      *(float *)((int)puVar7 + 0xec) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x1e) = *(float *)(puVar7 + 0x1e) * fVar4;
      *(float *)((int)puVar7 + 0xf4) = *(float *)((int)puVar7 + 0xf4) * fVar3;
      *(float *)(puVar7 + 0x1f) = *(float *)(puVar7 + 0x1f) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xec) = *(float *)((int)lVar14 + 0xdc) * fVar3 * fVar3;
        iVar18 = (int)lVar22;
        lVar14 = lVar14 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar19 = uVar16 - 0xc4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar14 = lVar17;
      lVar22 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar14 + 0xec) = *(float *)((int)lVar14 + 0xec) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar14 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar8 = (int)lVar19;
        lVar17 = lVar17 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0xec)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar27 = (double)((float)(dVar27 + dVar28) * fVar2 + fVar5);
    }
    dVar27 = (double)fastfunc::FastSubRots(fVar1,(float)dVar27);
    if (dVar27 < 2.356194496154785) {
      fVar1 = (moby->rotation).z;
      fVar2 = fVar1 + 1.5707963;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar4 = fVar5;
      }
      fVar1 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar1 = fVar3;
      }
      fVar5 = fVar4 * fVar4;
      fVar3 = fVar1 * fVar1;
      fVar11 = fVar5 * fVar5 * fVar4;
      fVar2 = mobyutil::g_FrameTime * 4.0;
      fVar9 = fVar3 * fVar3 * fVar1;
      fVar12 = fVar5 * fVar11;
      fVar10 = fVar3 * fVar9;
      (moby->pos).y =
           fVar2 * (fVar5 * fVar12 * 2.601887e-06 +
                   fVar12 * -0.0001980741 +
                   fVar11 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) + (moby->pos).y;
      (moby->pos).x =
           fVar2 * (fVar3 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) + (moby->pos).x;
    }
  }
  return;
}



