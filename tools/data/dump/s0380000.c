//==== 003804b8  ns=mobyupdate_helpers  size=0x10c
// sig: undefined M440_003804b8(void)
// callers(0): 
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M440_003804b8(MobyInstance *param_1,longlong param_2)

{
  ushort uVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar10 [16];
  
  puVar4 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x30);
  puVar4[3] = in_vr31_32_3;
  puVar4[2] = in_vr31_32_2;
  puVar4[1] = in_vr31_32_1;
  *puVar4 = in_vr31_32_0;
  if ((int)param_2 != 0xff) {
    puVar6 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_2 << 2));
    if (puVar6 != (ushort *)0x0) {
      auVar10 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x30,0x3804b4);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      do {
        pMVar7 = MobyInstance + (*puVar6 & 0x7fff);
        if ((pMVar7->oClass == SENTRY_BOT) && (param_1 != pMVar7)) {
          pvVar2 = pMVar7->pVar;
          if ((*(short *)((int)pvVar2 + 0x19c) == 0) ||
             (iVar5 = mobyutil::MB_randInt(0x10), iVar5 == 0)) {
            auVar8 = ZEXT416(0xffffffff);
            auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
            auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
            auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            *(MobyInstance **)((int)pvVar2 + 0x198) = param_1;
            auVar8 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar8);
            auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
            auVar8 = vectorSplatHalfWord(auVar8,1);
            uVar3 = storeVectorElementHalfWordIndexed(auVar8,0x19c,ZEXT48(pvVar2));
            *(undefined2 *)((int)pvVar2 + 0x19c) = uVar3;
          }
        }
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}



//==== 003805d0  ns=mobyupdate_helpers  size=0x90
// sig: undefined M440_003805d0(void)
// callers(0): 
// callees(1): 00119028 mobyutil::MB_DrawGlowFX

void mobyupdate_helpers::M440_003805d0(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x78);
  uVar1 = *(uint *)(param_1 + 0x90);
  iVar2 = 0;
  uVar4 = 0x3fc99999a0000000;
  uVar5 = 0x3fb47ae140000000;
  do {
    mobyutil::MB_DrawGlowFX(uVar4,uVar5,uVar3 + 0x2a0,uVar1 & 0xffffff | 0x30000000);
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + 0x10;
  } while (iVar2 < 3);
  return;
}



//==== 00380660  ns=mobyupdate_helpers  size=0x14
// sig: undefined M440_00380660(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M440_00380660(void)

{
  DAT_00841c88 = 0x10000;
  return;
}



//==== 003806d0  ns=mobyupdate_helpers  size=0x1a3c
// sig: undefined M440_003806d0(void)
// callers(0): 
// callees(14): 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338; 005e8548 FUN_005e8548
// strings: 0096c074: 'None'

void mobyupdate_helpers::M440_003806d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte in_cr6;
  undefined8 uVar15;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_150 [32];
  undefined1 local_130 [16];
  undefined1 local_120 [40];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar14 = (ulonglong)uVar1;
  uVar6 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar6);
  uVar6 = draw::GetEffectTex(DAT_00841e60 + 0x28);
  lVar13 = 0;
  iVar11 = 0;
  dVar31 = 16.0;
  do {
    dVar32 = (double)(longlong)
                     (int)(((uint)((LZCOUNT(-((uint)lVar13 & 1)) << 0x3a) >> 0x3f) & 2) - 1);
    dVar28 = (double)(longlong)(int)(((uint)(1 - lVar13 >> 0x3f) & 0xfffffffe) + 1);
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_00841e4c * dVar28 + (double)DAT_00841e44)
                              * dVar31));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e48 * dVar32 + (double)DAT_00841e40))
    ;
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e44 * dVar31));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e48 * dVar32 + (double)DAT_00841e40))
    ;
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_00841e4c * dVar28 + (double)DAT_00841e44)
                              * dVar31));
    fastfunc::FastDoubleToInt((double)DAT_00841e40);
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e44 * dVar31));
    fastfunc::FastDoubleToInt((double)DAT_00841e40);
    draw::DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
    lVar13 = lVar13 + 1;
  } while ((int)lVar13 < 4);
  uVar6 = draw::GetEffectTex(DAT_00841e64);
  iVar7 = 0;
  uVar12 = uVar14;
  do {
    iVar8 = (int)uVar12;
    if (*(int *)(iVar8 + 0x60) != 0) {
      if (*(byte *)(*(int *)(iVar8 + 0x60) + 0x20) < 0x80) {
        uVar15 = FUN_005e8338((double)(*(float *)(*(int *)(iVar8 + 0x60) + 0x10) -
                                      *(float *)(param_1 + 0x10)),
                              (double)(*(float *)(*(int *)(iVar8 + 0x60) + 0x14) -
                                      *(float *)(param_1 + 0x14)));
        dVar28 = (double)fastfunc::FastDiffRots(uVar15,(double)*(float *)(param_1 + 0x48));
        dVar32 = (double)FUN_005e8548((ulonglong)*(uint *)(iVar8 + 0x60) + 0x10,param_1 + 0x10);
        uVar2 = (uint)(byte)Cheats[4];
        dVar29 = (double)(float)(dVar32 * (double)DAT_00841d60);
        dVar32 = (double)FUN_005e8128(dVar28,(double)DAT_00841d60);
        dVar32 = (double)(float)((double)(float)((double)(longlong)
                                                         (int)-(((uint)((LZCOUNT(-uVar2) << 0x3a) >>
                                                                       0x3f) & 2) - 1) * dVar32) *
                                dVar29);
        dVar28 = (double)mathfunc::cosf((float)dVar28);
        dVar28 = -(double)(float)(dVar28 * dVar29);
        fastfunc::FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e54 + DAT_00841e44) * dVar31 + dVar28));
        fastfunc::FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e50 + DAT_00841e40) * dVar31 + dVar32));
        fastfunc::FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e44 - DAT_00841e54) * dVar31 + dVar28));
        fastfunc::FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e50 + DAT_00841e40) * dVar31 + dVar32));
        fastfunc::FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e54 + DAT_00841e44) * dVar31 + dVar28));
        fastfunc::FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e40 - DAT_00841e50) * dVar31 + dVar32));
        fastfunc::FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e44 - DAT_00841e54) * dVar31 + dVar28));
        fastfunc::FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e40 - DAT_00841e50) * dVar31 + dVar32));
        draw::DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
      }
      else {
        *(undefined4 *)(iVar8 + 0x60) = 0;
      }
    }
    iVar7 = iVar7 + 1;
    uVar12 = uVar12 + 4;
  } while (iVar7 < 8);
  iVar7 = 0;
  dVar30 = 1.570796251296997;
  dVar27 = 3.141592502593994;
  dVar26 = -3.141592502593994;
  dVar25 = -0.16666656732559204;
  dVar29 = 0.008333025500178337;
  dVar32 = -0.0001980741071747616;
  dVar28 = 2.601886990305502e-06;
  uVar12 = uVar14;
  do {
    iVar8 = (int)uVar12;
    if (MobyInstance[*(int *)(iVar8 + 0x80)].state < 0x7f) {
      uVar15 = FUN_005e8338((double)(MobyInstance[*(int *)(iVar8 + 0x80)].pos.x -
                                    *(float *)(param_1 + 0x10)),
                            (double)(MobyInstance[*(int *)(iVar8 + 0x80)].pos.y -
                                    *(float *)(param_1 + 0x14)));
      dVar16 = (double)fastfunc::FastDiffRots(uVar15,(double)*(float *)(param_1 + 0x48));
      iVar8 = *(int *)(iVar8 + 0x80);
      fVar3 = MobyInstance[iVar8].pos.y - *(float *)(param_1 + 0x14);
      fVar4 = MobyInstance[iVar8].pos.x - *(float *)(param_1 + 0x10);
      fVar5 = MobyInstance[iVar8].pos.z - *(float *)(param_1 + 0x18);
      dVar17 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      dVar24 = (double)(float)(dVar17 * (double)DAT_00841d60);
      dVar17 = (double)FUN_005e8128(dVar16,dVar17,(double)DAT_00841d60);
      dVar18 = (double)(float)(dVar16 + dVar30);
      dVar17 = -(double)(float)(dVar17 * dVar24);
      dVar16 = (double)(float)(dVar27 - dVar18);
      if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
        dVar16 = dVar18;
      }
      dVar20 = (double)(float)(dVar26 - dVar18);
      if ((double)(float)(dVar26 - dVar18) - dVar16 < 0.0) {
        dVar20 = dVar16;
      }
      dVar18 = (double)(float)(dVar20 * dVar20);
      dVar16 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar20));
      dVar21 = (double)(float)(dVar18 * dVar16);
      dVar16 = -(double)(float)((double)(float)((double)(float)(dVar18 * dVar21) * dVar28 +
                                               (double)(float)(dVar21 * dVar32 +
                                                              (double)(float)(dVar16 * dVar29 +
                                                                             (double)(float)((double
                                                  )(float)(dVar18 * dVar20) * dVar25 + dVar20)))) *
                               dVar24);
      fastfunc::FastDoubleToInt
                ((double)(float)((double)(DAT_00841e44 + DAT_00841e5c) * dVar31 + dVar16));
      fastfunc::FastDoubleToInt
                ((double)(float)((double)(DAT_00841e40 + DAT_00841e58) * dVar31 + dVar17));
      fastfunc::FastDoubleToInt
                ((double)(float)((double)(DAT_00841e44 - DAT_00841e5c) * dVar31 + dVar16));
      fastfunc::FastDoubleToInt
                ((double)(float)((double)(DAT_00841e40 + DAT_00841e58) * dVar31 + dVar17));
      fastfunc::FastDoubleToInt
                ((double)(float)((double)(DAT_00841e44 + DAT_00841e5c) * dVar31 + dVar16));
      fastfunc::FastDoubleToInt
                ((double)(float)((double)(DAT_00841e40 - DAT_00841e58) * dVar31 + dVar17));
      fastfunc::FastDoubleToInt
                ((double)(float)((double)(DAT_00841e44 - DAT_00841e5c) * dVar31 + dVar16));
      fastfunc::FastDoubleToInt
                ((double)(float)((double)(DAT_00841e40 - DAT_00841e58) * dVar31 + dVar17));
      draw::DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
    }
    iVar7 = iVar7 + 1;
    uVar12 = uVar12 + 4;
  } while (iVar7 < 4);
  uVar6 = draw::GetEffectTex(DAT_00841e60 + 0x28);
  lVar13 = 0;
  do {
    dVar17 = (double)(longlong)
                     (int)(((uint)((LZCOUNT(-((uint)lVar13 & 1)) << 0x3a) >> 0x3f) & 2) - 1);
    dVar16 = (double)(longlong)(int)(((uint)(1 - lVar13 >> 0x3f) & 0xfffffffe) + 1);
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_00841e2c * dVar16 + (double)DAT_00841e24)
                              * dVar31));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e28 * dVar17 + (double)DAT_00841e20))
    ;
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e24 * dVar31));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e28 * dVar17 + (double)DAT_00841e20))
    ;
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_00841e2c * dVar16 + (double)DAT_00841e24)
                              * dVar31));
    fastfunc::FastDoubleToInt((double)DAT_00841e20);
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e24 * dVar31));
    fastfunc::FastDoubleToInt((double)DAT_00841e20);
    draw::DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
    lVar13 = lVar13 + 1;
  } while ((int)lVar13 < 4);
  uVar6 = draw::GetEffectTex(DAT_00841e64);
  auVar33 = loadVectorLeftIndexed(0x58,uVar14);
  auVar34 = loadVectorRightIndexed(0x68,uVar14);
  auVar34 = vectorConvertFromSignedFixedPointWord(auVar33 | auVar34,0);
  auVar33 = loadVectorLeftIndexed(0x28,0x380678);
  auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanFloatingPoint
            (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
             auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    fastfunc::FastLerpColor
              ((double)((float)(longlong)*(int *)(uVar1 + 0x58) * 0.01),0x600000ff,0x6000ffff,0x28);
  }
  else {
    fastfunc::FastLerpColor
              ((double)(((float)(longlong)*(int *)(uVar1 + 0x58) - 100.0) * 0.01),0x6000ffff,
               0x6000ff00,0x28);
  }
  fastfunc::FastDoubleToInt
            ((double)(-((float)(longlong)*(int *)(uVar1 + 0x58) * 0.005 - 1.0) * 32.0));
  dVar16 = 0.19634954631328583;
  do {
    dVar18 = (double)fastfunc::FastAddRots((float)((double)(longlong)iVar11 * dVar16));
    dVar24 = (double)fastfunc::FastWrapRot((float)dVar18,(float)dVar16);
    dVar17 = (double)(float)(dVar27 - dVar18);
    if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
      dVar17 = dVar18;
    }
    dVar20 = (double)(float)(dVar26 - dVar18);
    if ((double)(float)(dVar26 - dVar18) - dVar17 < 0.0) {
      dVar20 = dVar17;
    }
    dVar17 = (double)(float)(dVar20 * dVar20);
    dVar19 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar20));
    dVar21 = (double)(float)(dVar17 * dVar19);
    iVar7 = fastfunc::FastDoubleToInt
                      ((double)(DAT_00841e30 *
                               (float)((double)(float)(dVar17 * dVar21) * dVar28 +
                                      (double)(float)(dVar21 * dVar32 +
                                                     (double)(float)(dVar19 * dVar29 +
                                                                    (double)(float)((double)(float)(
                                                  dVar17 * dVar20) * dVar25 + dVar20))))));
    dVar18 = (double)(float)(dVar18 + dVar30);
    dVar17 = (double)(float)(dVar27 - dVar18);
    if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
      dVar17 = dVar18;
    }
    dVar20 = (double)(float)(dVar26 - dVar18);
    if ((double)(float)(dVar26 - dVar18) - dVar17 < 0.0) {
      dVar20 = dVar17;
    }
    dVar17 = (double)(float)(dVar20 * dVar20);
    dVar21 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar20));
    dVar18 = (double)(float)(dVar17 * dVar21);
    iVar8 = fastfunc::FastDoubleToInt
                      (-(double)(DAT_00841e34 *
                                (float)((double)(float)(dVar17 * dVar18) * dVar28 +
                                       (double)(float)(dVar18 * dVar32 +
                                                      (double)(float)(dVar21 * dVar29 +
                                                                     (double)(float)((double)(float)
                                                  (dVar17 * dVar20) * dVar25 + dVar20))))));
    dVar17 = (double)(float)(dVar27 - dVar24);
    if (dVar24 - (double)(float)(dVar27 - dVar24) < 0.0) {
      dVar17 = dVar24;
    }
    dVar18 = (double)(float)(dVar26 - dVar24);
    if ((double)(float)(dVar26 - dVar24) - dVar17 < 0.0) {
      dVar18 = dVar17;
    }
    dVar17 = (double)(float)(dVar18 * dVar18);
    dVar21 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar18));
    dVar20 = (double)(float)(dVar17 * dVar21);
    iVar9 = fastfunc::FastDoubleToInt
                      ((double)(DAT_00841e30 *
                               (float)((double)(float)(dVar17 * dVar20) * dVar28 +
                                      (double)(float)(dVar20 * dVar32 +
                                                     (double)(float)(dVar21 * dVar29 +
                                                                    (double)(float)((double)(float)(
                                                  dVar17 * dVar18) * dVar25 + dVar18))))));
    dVar18 = (double)(float)(dVar24 + dVar30);
    dVar17 = (double)(float)(dVar27 - dVar18);
    if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
      dVar17 = dVar18;
    }
    dVar24 = (double)(float)(dVar26 - dVar18);
    if ((double)(float)(dVar26 - dVar18) - dVar17 < 0.0) {
      dVar24 = dVar17;
    }
    dVar17 = (double)(float)(dVar24 * dVar24);
    dVar20 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar24));
    dVar18 = (double)(float)(dVar17 * dVar20);
    iVar10 = fastfunc::FastDoubleToInt
                       (-(double)(DAT_00841e34 *
                                 (float)((double)(float)(dVar17 * dVar18) * dVar28 +
                                        (double)(float)(dVar18 * dVar32 +
                                                       (double)(float)(dVar20 * dVar29 +
                                                                      (double)(float)((double)(float
                                                  )(dVar17 * dVar24) * dVar25 + dVar24))))));
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(DAT_00841e24 + (float)(longlong)iVar10) * dVar31));
    fastfunc::FastDoubleToInt((double)(DAT_00841e20 + (float)(longlong)iVar9));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e24 * dVar31));
    fastfunc::FastDoubleToInt((double)DAT_00841e20);
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(DAT_00841e24 + (float)(longlong)iVar8) * dVar31));
    fastfunc::FastDoubleToInt((double)(DAT_00841e20 + (float)(longlong)iVar7));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_00841e24 * dVar31));
    fastfunc::FastDoubleToInt((double)DAT_00841e20);
    draw::DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x20);
  dVar16 = 15.5;
  iVar11 = *(int *)(uVar1 + 0xa0);
  if ((int)(animationSpeed * 15.5) < iVar11) {
    dVar17 = (double)fastfunc::FastIntToDouble(iVar11 - (int)(animationSpeed * 15.5));
    fastfunc::FastLerpColor
              ((double)(float)(dVar17 / (double)(longlong)((double)animationSpeed * dVar16)),
               0x5000ffff,0x500000ff);
  }
  else {
    dVar17 = (double)fastfunc::FastIntToDouble(iVar11);
    fastfunc::FastLerpColor
              ((double)(float)(dVar17 / (double)(longlong)((double)animationSpeed * dVar16)),
               0x5000ff00,0x5000ffff);
  }
  dVar24 = 4.0;
  dVar18 = 0.0;
  dVar16 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48) * 4.0,0.0);
  dVar17 = (double)fastfunc::FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar20 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar20 = dVar16;
  }
  dVar16 = (double)(float)(dVar20 * dVar20);
  dVar19 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar20));
  dVar21 = (double)(float)(dVar16 * dVar19);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar21) * dVar28 +
                                             (double)(float)(dVar21 * dVar32 +
                                                            (double)(float)(dVar19 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar20) * dVar25 + dVar20)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar20 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar20 = dVar16;
  }
  dVar16 = (double)(float)(dVar20 * dVar20);
  dVar21 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar20));
  dVar17 = (double)(float)(dVar16 * dVar21);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar21 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar20) * dVar25 + dVar20)))) *
                                     DAT_00841e38) * dVar31));
  dVar20 = 1.5707963705062866;
  dVar16 = (double)fastfunc::FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x48) * dVar24),1.5707964);
  dVar17 = (double)fastfunc::FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar21 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar21 = dVar16;
  }
  dVar16 = (double)(float)(dVar21 * dVar21);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar21));
  dVar19 = (double)(float)(dVar16 * dVar22);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar19) * dVar28 +
                                             (double)(float)(dVar19 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar21) * dVar25 + dVar21)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar21 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar21 = dVar16;
  }
  dVar16 = (double)(float)(dVar21 * dVar21);
  dVar19 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar21));
  dVar17 = (double)(float)(dVar16 * dVar19);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar19 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar21) * dVar25 + dVar21)))) *
                                     DAT_00841e38) * dVar31));
  dVar21 = -1.5707963705062866;
  dVar16 = (double)fastfunc::FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x48) * dVar24),-1.5707964);
  dVar17 = (double)fastfunc::FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar19 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar19 = dVar16;
  }
  dVar16 = (double)(float)(dVar19 * dVar19);
  dVar23 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar19));
  dVar22 = (double)(float)(dVar16 * dVar23);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar22) * dVar28 +
                                             (double)(float)(dVar22 * dVar32 +
                                                            (double)(float)(dVar23 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar19) * dVar25 + dVar19)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar19 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar19 = dVar16;
  }
  dVar16 = (double)(float)(dVar19 * dVar19);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar19));
  dVar17 = (double)(float)(dVar16 * dVar22);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar19) * dVar25 + dVar19)))) *
                                     DAT_00841e38) * dVar31));
  dVar19 = 3.1415927410125732;
  dVar16 = (double)fastfunc::FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x48) * dVar24),3.1415927);
  dVar17 = (double)fastfunc::FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar24 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar24 = dVar16;
  }
  dVar16 = (double)(float)(dVar24 * dVar24);
  dVar23 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar24));
  dVar22 = (double)(float)(dVar16 * dVar23);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar22) * dVar28 +
                                             (double)(float)(dVar22 * dVar32 +
                                                            (double)(float)(dVar23 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar24) * dVar25 + dVar24)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar24 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar24 = dVar16;
  }
  dVar16 = (double)(float)(dVar24 * dVar24);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar24));
  dVar17 = (double)(float)(dVar16 * dVar22);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar24) * dVar25 + dVar24)))) *
                                     DAT_00841e38) * dVar31));
  uVar6 = draw::GetEffectTex(DAT_00841e68);
  draw::DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
  dVar24 = 8.0;
  dVar16 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x44) * 8.0,(float)dVar18);
  dVar17 = (double)fastfunc::FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar23 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar22 = (double)(float)(dVar16 * dVar23);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar22) * dVar28 +
                                             (double)(float)(dVar22 * dVar32 +
                                                            (double)(float)(dVar23 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar17 = (double)(float)(dVar16 * dVar22);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e38) * dVar31));
  dVar16 = (double)fastfunc::FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x44) * dVar24),(float)dVar20);
  dVar17 = (double)fastfunc::FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar20 = (double)(float)(dVar16 * dVar22);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar20) * dVar28 +
                                             (double)(float)(dVar20 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar20 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar17 = (double)(float)(dVar16 * dVar20);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar20 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e38) * dVar31));
  dVar16 = (double)fastfunc::FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x44) * dVar24),(float)dVar21);
  dVar17 = (double)fastfunc::FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar21 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar20 = (double)(float)(dVar16 * dVar21);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar20) * dVar28 +
                                             (double)(float)(dVar20 * dVar32 +
                                                            (double)(float)(dVar21 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar20 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar17 = (double)(float)(dVar16 * dVar20);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar20 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e38) * dVar31));
  dVar16 = (double)fastfunc::FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x44) * dVar24),(float)dVar19);
  dVar17 = (double)fastfunc::FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar20 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar24 = (double)(float)(dVar16 * dVar20);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar24) * dVar28 +
                                             (double)(float)(dVar24 * dVar32 +
                                                            (double)(float)(dVar20 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e3c) * dVar31));
  dVar16 = (double)(float)(dVar17 + dVar30);
  dVar30 = (double)(float)(dVar27 - dVar16);
  if (dVar16 - (double)(float)(dVar27 - dVar16) < 0.0) {
    dVar30 = dVar16;
  }
  dVar27 = (double)(float)(dVar26 - dVar16);
  if ((double)(float)(dVar26 - dVar16) - dVar30 < 0.0) {
    dVar27 = dVar30;
  }
  dVar26 = (double)(float)(dVar27 * dVar27);
  dVar16 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar27));
  dVar30 = (double)(float)(dVar26 * dVar16);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar26 * dVar30) * dVar28 +
                                             (double)(float)(dVar30 * dVar32 +
                                                            (double)(float)(dVar16 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar26 * dVar27) * dVar25 + dVar27)))) *
                                     DAT_00841e38) * dVar31));
  uVar6 = draw::GetEffectTex(DAT_00841e6c);
  draw::DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
  return;
}



//==== 00382120  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M440_00382120(void)
// callers(1): 00382358 mobyupdate_unsorted::UpdateMoby_440
// callees(1): 000fe610 mobyutil::MB_SphericalToVector

undefined4 mobyupdate_helpers::M440_00382120(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float local_60;
  float local_5c;
  float local_58;
  
  iVar2 = *(int *)(param_1 + 0x78);
  uVar7 = 0;
  dVar13 = 1.0;
  dVar14 = 0.0;
  dVar15 = 0.5;
  dVar16 = 0.9975639581680298;
  iVar8 = iVar2;
  do {
    if (*(int *)(iVar8 + 0x60) != 0) {
      mobyutil::MB_SphericalToVector
                ((float)dVar13,*(float *)(param_1 + 0x48),-*(float *)(param_1 + 0x44),&local_60);
      iVar3 = *(int *)(iVar8 + 0x60);
      fVar4 = *(float *)(iVar3 + 0x14) - GameCamera.posY;
      fVar5 = *(float *)(iVar3 + 0x10) - GameCamera.posX;
      fVar6 = *(float *)(iVar3 + 0x18) - GameCamera.posZ;
      dVar9 = (double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      dVar10 = dVar14;
      dVar11 = dVar14;
      dVar12 = dVar14;
      if ((double)(float)SQRT(dVar9) != dVar14) {
        dVar10 = 1.0 / SQRT(dVar9);
        dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar13)
                                 * (double)(float)(dVar15 * dVar10) + dVar10);
        dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar13)
                                 * (double)(float)(dVar15 * dVar10) + dVar10);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar13) *
                        (double)(float)(dVar15 * dVar10) + dVar10);
        dVar12 = (double)(fVar5 * fVar1);
        dVar11 = (double)(fVar4 * fVar1);
        dVar10 = (double)(fVar6 * fVar1);
      }
      if (dVar16 < (double)(float)(dVar10 * (double)local_58 +
                                  (double)(float)(dVar12 * (double)local_60 +
                                                 (double)(float)(dVar11 * (double)local_5c)))) {
        return *(undefined4 *)(iVar2 + (int)((uVar7 & 0xffffffff) << 2) + 0x60);
      }
    }
    uVar7 = uVar7 + 1;
    iVar8 = iVar8 + 4;
    if (7 < (int)uVar7) {
      return 0;
    }
  } while( true );
}



//==== 00382358  ns=mobyupdate_unsorted  size=0x1df0
// sig: undefined UpdateMoby_440(MobyInstance * moby)
// callers(0): 
// callees(30): 000200b0 mobyupdate_helpers::M458_SpawnRocket; 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00048420 camera::camera5::DeactivateMobyDrivenCamAccel; 0006d7e0 draw::RegisterPostDraw; 00083950 hero::HandleHeroDeath; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 00109af0 mobyutil::Delt; 00128248 partupd::SpawnPart_27; 0015d12c sound::PlayMobySound; 0023892c FUN_0023892c; 00382120 mobyupdate_helpers::M440_00382120; 004fffb4 fastfunc::FastDecTimerS16; 005000b4 fastfunc::FastDecTimerU8; 00500250 fastfunc::FastMemSetZero; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 005e7d64 FUN_005e7d64; 005e8338 FUN_005e8338

/* Moby 440 */

void mobyupdate_unsorted::UpdateMoby_440(MobyInstance *moby)

{
  int iVar1;
  u8 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  longlong lVar16;
  int iVar19;
  uint uVar20;
  MobyInstance *pMVar21;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
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
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined8 uVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  f32 local_1e0;
  f32 local_1dc;
  float local_1d8;
  f32 local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0 [2];
  f32 local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  f32 local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  f32 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  f32 local_130;
  f32 local_12c;
  float local_128;
  f32 local_124;
  float local_120;
  float local_11c;
  float local_118;
  f32 local_114;
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  f32 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  f32 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  longlong local_d0;
  
  lVar16 = (longlong)(int)moby;
  pvVar7 = moby->pVar;
  uVar24 = ZEXT48(pvVar7);
  dVar45 = (double)(moby->pos).x;
  dVar44 = (double)(moby->pos).y;
  dVar43 = (double)(moby->pos).w;
  dVar47 = (double)((moby->pos).z + 0.4);
  iVar19 = fastfunc::FastDecTimerS16(uVar24 + 0x42);
  if ((iVar19 == 0) || (moby->setByGroup != '\x01')) {
    if (moby->setByGroup == '\x02') {
      fVar4 = (float)(dVar44 - (double)(g_heroMobyPtr->pos).y);
      fVar5 = (float)(dVar45 - (double)(g_heroMobyPtr->pos).x);
      if (1.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
        auVar51 = ZEXT416(0xffffffff);
        auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
        moby->setByGroup = '\0';
        auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar51 = loadVectorLeftIndexed(0x34,0x3822c0);
        auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar51 = vectorMultiplyAddFloatingPoint
                            (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                             auVar49);
        auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
        auVar51 = vectorSplatHalfWord(auVar51,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x42,uVar24);
        *(undefined2 *)((int)pvVar7 + 0x42) = uVar8;
      }
    }
    else if ((((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) &&
              (fVar4 = (float)(dVar44 - (double)(g_heroMobyPtr->pos).y),
              fVar5 = (float)(dVar45 - (double)(g_heroMobyPtr->pos).x),
              SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 1.0)) &&
             (g_heroPosition.z - (moby->pos).z < 7.0)) &&
            ((*(short *)((int)pvVar7 + 0x42) == 0 && (0 < *(int *)((int)pvVar7 + 0x58))))) {
      moby->setByGroup = '\x01';
      hero::TransitionMovement(0x32,1);
    }
  }
  else {
    g_heroRotation.z = (moby->rotation).z;
    fVar4 = g_heroRotation.z + 1.5707963;
    fVar5 = 3.1415925 - g_heroRotation.z;
    if (g_heroRotation.z - (3.1415925 - g_heroRotation.z) < 0.0) {
      fVar5 = g_heroRotation.z;
    }
    fVar6 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar6 = fVar4;
    }
    fVar10 = -3.1415925 - g_heroRotation.z;
    if ((-3.1415925 - g_heroRotation.z) - fVar5 < 0.0) {
      fVar10 = fVar5;
    }
    fVar5 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
      fVar5 = fVar6;
    }
    fVar4 = fVar10 * fVar10;
    fVar6 = fVar5 * fVar5;
    fVar13 = fVar4 * fVar4 * fVar10;
    g_heroRotation.x = (moby->rotation).x;
    fVar11 = fVar6 * fVar6 * fVar5;
    fVar14 = fVar4 * fVar13;
    g_heroRotation.y = (moby->rotation).y;
    g_heroRotation.w = (moby->rotation).w;
    g_heroPosition.z = (float)dVar47;
    fVar12 = fVar6 * fVar11;
    g_heroPosition.w = (float)dVar43;
    g_heroPosition.y =
         (float)((double)(fVar4 * fVar14 * 2.601887e-06 +
                         fVar14 * -0.0001980741 +
                         fVar13 * 0.0083330255 + fVar4 * fVar10 * -0.16666657 + fVar10) *
                 -0.699999988079071 + dVar44);
    g_heroPosition.x =
         (float)((double)(fVar6 * fVar12 * 2.601887e-06 +
                         fVar12 * -0.0001980741 +
                         fVar11 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
                 -0.699999988079071 + dVar45);
    fastfunc::FastMemSetZero(&hero::g_heroVelocity,0x90);
    if (*(int *)((int)pvVar7 + 0x58) == 0) {
      moby->setByGroup = '\x02';
      dVar44 = 0.0;
      (moby->rotation).y = 0.0;
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      moby->state = '\x04';
      pMVar21 = MobyInstance + *(int *)((int)pvVar7 + 0x9c);
      local_1e0 = (pMVar21->rotation).x;
      local_1dc = (pMVar21->rotation).y;
      local_1d8 = (pMVar21->rotation).z;
      local_1d4 = (pMVar21->rotation).w;
      dVar43 = (double)fastfunc::FastWrapRot(local_1d8,3.1415927);
      local_1d8 = (float)dVar43;
      fVar4 = (pMVar21->transform).v0.y;
      fVar5 = (pMVar21->transform).v0.x;
      fVar6 = (pMVar21->transform).v0.z;
      dVar43 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      if (dVar43 == dVar44) {
        local_1e4 = (pMVar21->transform).v0.w;
        dVar43 = dVar44;
        dVar45 = dVar44;
      }
      else {
        fVar4 = (float)(2.5 / dVar43);
        dVar45 = (double)(fVar5 * fVar4);
        dVar44 = (double)((pMVar21->transform).v0.y * fVar4);
        dVar43 = (double)((pMVar21->transform).v0.z * fVar4);
        local_1e4 = (pMVar21->transform).v0.w;
      }
      local_1f0 = (float)(dVar45 + (double)(pMVar21->pos).x);
      local_1ec = (float)(dVar44 + (double)(pMVar21->pos).y);
      local_1e8 = (float)(dVar43 + (double)(pMVar21->pos).z);
      hero::Hero_Warp(&local_1f0,&local_1e0,0,1);
      FUN_0023892c(pMVar21,0);
      return;
    }
    uVar22 = (ulonglong)Level;
    uVar20 = (uint)(byte)moby->levelFlagIdx;
    if ((g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) && ((DAT_0096b2ef & 1) != 0)) {
      hero::HandleHeroDeath();
      uVar20 = (uint)(byte)moby->levelFlagIdx;
      uVar22 = (ulonglong)Level;
    }
    if ((((g_buttonsPressedThisFrame & TRIANGLE) == 0) && ((DAT_0096b2ef & 1) == 0)) ||
       (g_LevelFlags[0][(int)(uVar22 << 4) + uVar20] != -1)) {
      if (moby->state != '\x05') {
        *(undefined2 *)((int)pvVar7 + 0x52) = 2;
        camera::SetCameraPosition(lVar16 + 0x10,lVar16 + 0x40,1,0,0);
      }
      iVar19 = 0;
      moby->state = '\x05';
      uVar22 = uVar24;
      do {
        iVar1 = *(int *)((int)uVar22 + 0x80);
        if (MobyInstance[iVar1].state == '\x02') {
          MobyInstance[iVar1].state = '\x03';
        }
        iVar19 = iVar19 + 1;
        uVar22 = uVar22 + 4;
      } while (iVar19 < 4);
    }
    else {
      DAT_0096b2ef = 0;
      hero::TransitionMovement(0,1);
      (moby->rotation).y = 0.0;
      moby->setByGroup = '\x02';
      fastfunc::FastEulerToMtx(lVar16 + 0xc0,lVar16 + 0x40);
      local_1b4 = 0;
      local_1b8 = (moby->rotation).z;
      local_1c0[1] = 0.0;
      local_1c0[0] = 0.0;
      FUN_005e7d64(&local_1d0,&DAT_00841cb0,lVar16 + 0xc0);
      local_1d0 = local_1d0 + (moby->pos).x;
      local_1cc = local_1cc + (moby->pos).y;
      local_1c8 = local_1c8 + (moby->pos).z;
      hero::Hero_Warp(&local_1d0,local_1c0,0,1);
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      dVar43 = (double)fastfunc::FastWrapRot(g_heroRotation.z,3.1415927);
      g_heroRotation.z = (float)dVar43;
      moby->state = '\x04';
    }
  }
  uVar2 = moby->state;
  if (uVar2 == '\x06') {
    mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar7 + 0x90));
    mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar7 + 0x94));
    mobyfunc::DeleteMoby(moby);
  }
  else {
    if (uVar2 == '\x05') {
      iVar19 = *(int *)((int)pvVar7 + 0x58);
      *(int *)((int)pvVar7 + 0x58) = iVar19 + (iVar19 >> 0x1f & -iVar19);
      dVar44 = -1.0;
      dVar43 = dVar44;
      if (g_GameSettings.CameraUpDown != 0) {
        dVar43 = 1.0;
      }
      fVar4 = (float)((double)DAT_0096ba04 * dVar43);
      dVar43 = 1.0;
      fVar6 = hero::g_heroPadStick * hero::g_heroPadStick + fVar4 * fVar4;
      fVar5 = hero::g_heroPadStick;
      if (1.0 < SQRT(fVar6)) {
        fVar10 = 1.0 / SQRT(fVar6);
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar5 = fVar10 * hero::g_heroPadStick;
        fVar4 = fVar10 * fVar4;
      }
      dVar47 = 0.01745329238474369;
      dVar45 = 0.0;
      fVar5 = -(DAT_00841da8 * 0.017453292 * mobyutil::g_FrameTime * fVar5);
      dVar48 = -(double)(DAT_00841dac * 0.017453292 * mobyutil::g_FrameTime * fVar4);
      if (((-1 < *(int *)((int)pvVar7 + 0x4c)) && (*(float *)((int)pvVar7 + 0x4c) < fVar5)) ||
         ((*(int *)((int)pvVar7 + 0x4c) < 1 && (fVar5 < *(float *)((int)pvVar7 + 0x4c))))) {
        mobyutil::Delt(fVar5,DAT_00841db0 * 0.017453292 * DAT_0071f418,(float *)((int)pvVar7 + 0x4c)
                      );
      }
      else {
        mobyutil::Delt(fVar5,DAT_00841db8 * 0.017453292 * DAT_0071f418,(float *)((int)pvVar7 + 0x4c)
                      );
      }
      if (((-1 < *(int *)((int)pvVar7 + 0x48)) && ((double)*(float *)((int)pvVar7 + 0x48) < dVar48))
         || ((*(int *)((int)pvVar7 + 0x48) < 1 && (dVar48 < (double)*(float *)((int)pvVar7 + 0x48)))
            )) {
        mobyutil::Delt((float)dVar48,(float)((double)DAT_00841db4 * dVar47) * DAT_0071f418,
                       (float *)((int)pvVar7 + 0x48));
      }
      else {
        mobyutil::Delt((float)dVar48,(float)((double)DAT_00841dbc * dVar47) * DAT_0071f418,
                       (float *)((int)pvVar7 + 0x48));
      }
      dVar47 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar7 + 0x4c));
      (moby->rotation).z = (float)dVar47;
      dVar47 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar7 + 0x48));
      (moby->rotation).y = (float)dVar47;
      if (-0.7853981852531433 <= dVar47) {
        if (0.3490658402442932 < dVar47) {
          (moby->rotation).y = 0.34906584;
        }
      }
      else {
        (moby->rotation).y = -0.7853982;
      }
      iVar19 = mobyupdate_helpers::M440_00382120(lVar16);
      if (iVar19 == 0) {
        if (*(int *)((int)pvVar7 + 0xa0) != 0) {
          *(int *)((int)pvVar7 + 0xa0) = *(int *)((int)pvVar7 + 0xa0) + -1;
        }
      }
      else {
        local_d0 = (longlong)(int)(animationSpeed * 30.5);
        if (*(int *)((int)pvVar7 + 0xa0) < (int)(animationSpeed * 30.5)) {
          *(int *)((int)pvVar7 + 0xa0) = *(int *)((int)pvVar7 + 0xa0) + 1;
        }
      }
      fastfunc::FastDecTimerS16(uVar24 + 0x40);
      if (((g_downButtons & CIRCLE) != 0) && (*(short *)((int)pvVar7 + 0x40) == 0)) {
        dVar47 = 4.5;
        uVar46 = 0x411e848000000000;
        if (*(short *)((int)pvVar7 + 0x54) == 1) {
          mobyutil::MB_SphericalToVector
                    (DAT_00841dc0 * mobyutil::g_FrameTime,(moby->rotation).z,-(moby->rotation).y,
                     &local_1b0);
          mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar7 + 0x90),1,0,0);
          FUN_005e7d64(&local_1a0,&DAT_00841df0,lVar16 + 0xc0);
          local_1a0 = (moby->pos).x + local_1a0;
          local_198 = (moby->pos).z + local_198;
          local_19c = (moby->pos).y + local_19c;
          local_194 = (moby->pos).w;
          mobyupdate_helpers::M458_SpawnRocket(lVar16);
          sound::PlayMobySound(0,0,moby);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          GameCamera.offset0.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(100,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar52 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          dVar42 = 10.5;
          auVar49 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar49);
          auVar51 = ZEXT416(0xffffffff);
          auVar50 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar51 = ZEXT416(0xffffffff);
          auVar53 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar50,auVar50);
          iVar19 = 0;
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x168,
                          0x9513c0);
          GameCamera.offset1.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x68,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          dVar41 = 7.5;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar50);
          auVar49 = vectorShiftLeftIntegerWord(auVar53,auVar53);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset1.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x178,
                          0x9513c0);
          *(undefined2 *)((int)pvVar7 + 0x54) = 0;
          auVar51 = loadVectorLeftIndexed(0x6c,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar49);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = vectorSplatHalfWord(auVar51,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x40,uVar24);
          *(undefined2 *)((int)pvVar7 + 0x40) = uVar8;
          dVar40 = -0.3500000238418579;
          dVar39 = 3.0;
          dVar38 = 6.0;
          dVar48 = 5.5;
          uVar37 = 0x40e86a0000000000;
          do {
            local_190 = 0.0;
            local_18c = 0.0;
            local_188 = 0.0;
            local_184 = 0;
            dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar43);
            local_190 = (float)dVar26;
            dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar43);
            local_18c = (float)dVar26;
            dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar43);
            dVar28 = (double)local_1ac;
            dVar29 = (double)local_1b0;
            dVar30 = (double)local_18c;
            dVar32 = (double)local_1a8;
            dVar35 = (double)local_190;
            local_184 = local_1a4;
            dVar33 = (double)SQRT((float)(dVar27 * dVar27 +
                                         (double)(float)(dVar35 * dVar35 +
                                                        (double)(float)(dVar30 * dVar30))));
            dVar36 = (double)(float)((double)(SQRT((float)(dVar32 * dVar32 +
                                                          (double)(float)(dVar29 * dVar29 +
                                                                         (double)(float)(dVar28 * 
                                                  dVar28)))) *
                                             (float)((double)DAT_0071f408 * dVar40 + dVar43)) /
                                    dVar33);
            dVar26 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar36);
            }
            dVar31 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar31 = (double)(float)(dVar30 * dVar36);
            }
            dVar34 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar34 = (double)(float)(dVar35 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar31 = (double)(float)(dVar30 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar34 = (double)(float)(dVar35 * dVar36);
            }
            local_188 = (float)(dVar32 + dVar26);
            local_18c = (float)(dVar28 + dVar31);
            local_190 = (float)(dVar29 + dVar34);
            dVar26 = (double)mobyutil::MB_randRangeFloat
                                       ((float)((double)mobyutil::g_FrameTime * dVar39),
                                        (float)((double)mobyutil::g_FrameTime * dVar38));
            iVar1 = (int)((double)animationSpeed * dVar42);
            local_d0 = (longlong)iVar1;
            dVar27 = (double)SQRT(local_188 * local_188 +
                                  local_190 * local_190 + local_18c * local_18c);
            fVar4 = (float)(dVar26 / dVar27);
            dVar26 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar26 = (double)(local_190 * fVar4);
            }
            dVar28 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar28 = (double)(local_18c * fVar4);
            }
            dVar29 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar29 = (double)(local_188 * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar26 = (double)(local_190 * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar28 = (double)(local_18c * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar29 = (double)(local_188 * fVar4);
            }
            local_190 = (float)dVar26;
            local_18c = (float)dVar28;
            local_188 = (float)dVar29;
            uVar17 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar48),iVar1);
            partupd::SpawnPart_27(uVar37,&local_1a0,&local_190,0x5f2f4f6f,uVar17);
            iVar19 = iVar19 + 1;
          } while (iVar19 < 5);
          dVar44 = (double)SQRT(local_1a8 * local_1a8 +
                                local_1b0 * local_1b0 + local_1ac * local_1ac);
          iVar19 = (int)((double)animationSpeed * dVar41);
          local_d0 = (longlong)iVar19;
          fVar4 = (float)((double)(mobyutil::g_FrameTime * 0.5) / dVar44);
          dVar43 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar43 = (double)(local_1b0 * fVar4);
          }
          dVar48 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar48 = (double)(local_1ac * fVar4);
          }
          dVar38 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar38 = (double)(local_1a8 * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar43 = (double)(local_1b0 * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar48 = (double)(local_1ac * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar38 = (double)(local_1a8 * fVar4);
          }
          local_1b0 = (float)dVar43;
          local_1ac = (float)dVar48;
          local_1a8 = (float)dVar38;
          uVar37 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar47),iVar19);
          partupd::SpawnPart_27(uVar46,&local_1a0,&local_1b0,0x2f4f7f7f,uVar37);
        }
        else {
          mobyutil::MB_SphericalToVector
                    (DAT_00841dc0 * mobyutil::g_FrameTime,(moby->rotation).z,-(moby->rotation).y,
                     &local_180);
          mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar7 + 0x94),1,0,0);
          FUN_005e7d64(&local_170,&DAT_00841e00,lVar16 + 0xc0);
          local_170 = (moby->pos).x + local_170;
          local_16c = (moby->pos).y + local_16c;
          local_168 = (moby->pos).z + local_168;
          local_164 = (moby->pos).w;
          mobyupdate_helpers::M440_00382120(lVar16);
          mobyupdate_helpers::M458_SpawnRocket(lVar16);
          sound::PlayMobySound(0,0,moby);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          GameCamera.offset0.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(100,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar52 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          dVar42 = 10.5;
          auVar49 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar49);
          auVar51 = ZEXT416(0xffffffff);
          auVar50 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar51 = ZEXT416(0xffffffff);
          auVar53 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar50,auVar50);
          iVar19 = 0;
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x168,
                          0x9513c0);
          GameCamera.offset1.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x68,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          dVar41 = 7.5;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar50);
          auVar49 = vectorShiftLeftIntegerWord(auVar53,auVar53);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset1.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x178,
                          0x9513c0);
          *(undefined2 *)((int)pvVar7 + 0x54) = 1;
          auVar51 = loadVectorLeftIndexed(0x6c,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar49);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = vectorSplatHalfWord(auVar51,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x40,uVar24);
          *(undefined2 *)((int)pvVar7 + 0x40) = uVar8;
          dVar40 = -0.3500000238418579;
          dVar39 = 3.0;
          dVar38 = 6.0;
          dVar48 = 5.5;
          uVar37 = 0x40e86a0000000000;
          do {
            local_160 = 0.0;
            local_15c = 0.0;
            local_158 = 0.0;
            local_154 = 0;
            dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar43);
            local_160 = (float)dVar26;
            dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar43);
            local_15c = (float)dVar26;
            dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar43);
            dVar28 = (double)local_17c;
            dVar29 = (double)local_180;
            dVar30 = (double)local_15c;
            dVar32 = (double)local_178;
            dVar35 = (double)local_160;
            local_154 = local_174;
            dVar33 = (double)SQRT((float)(dVar27 * dVar27 +
                                         (double)(float)(dVar35 * dVar35 +
                                                        (double)(float)(dVar30 * dVar30))));
            dVar36 = (double)(float)((double)(SQRT((float)(dVar32 * dVar32 +
                                                          (double)(float)(dVar29 * dVar29 +
                                                                         (double)(float)(dVar28 * 
                                                  dVar28)))) *
                                             (float)((double)DAT_0071f408 * dVar40 + dVar43)) /
                                    dVar33);
            dVar26 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar36);
            }
            dVar31 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar31 = (double)(float)(dVar30 * dVar36);
            }
            dVar34 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar34 = (double)(float)(dVar35 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar31 = (double)(float)(dVar30 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar34 = (double)(float)(dVar35 * dVar36);
            }
            local_158 = (float)(dVar32 + dVar26);
            local_15c = (float)(dVar28 + dVar31);
            local_160 = (float)(dVar29 + dVar34);
            dVar26 = (double)mobyutil::MB_randRangeFloat
                                       ((float)((double)mobyutil::g_FrameTime * dVar39),
                                        (float)((double)mobyutil::g_FrameTime * dVar38));
            iVar1 = (int)((double)animationSpeed * dVar42);
            local_d0 = (longlong)iVar1;
            dVar27 = (double)SQRT(local_158 * local_158 +
                                  local_160 * local_160 + local_15c * local_15c);
            fVar4 = (float)(dVar26 / dVar27);
            dVar26 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar26 = (double)(local_160 * fVar4);
            }
            dVar28 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar28 = (double)(local_15c * fVar4);
            }
            dVar29 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar29 = (double)(local_158 * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar26 = (double)(local_160 * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar28 = (double)(local_15c * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar29 = (double)(local_158 * fVar4);
            }
            local_160 = (float)dVar26;
            local_15c = (float)dVar28;
            local_158 = (float)dVar29;
            uVar17 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar48),iVar1);
            partupd::SpawnPart_27(uVar37,&local_170,&local_160,0x5f2f4f6f,uVar17);
            iVar19 = iVar19 + 1;
          } while (iVar19 < 5);
          dVar44 = (double)SQRT(local_178 * local_178 +
                                local_180 * local_180 + local_17c * local_17c);
          iVar19 = (int)((double)animationSpeed * dVar41);
          local_d0 = (longlong)iVar19;
          fVar4 = (float)((double)(mobyutil::g_FrameTime * 0.5) / dVar44);
          dVar43 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar43 = (double)(local_180 * fVar4);
          }
          dVar48 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar48 = (double)(local_17c * fVar4);
          }
          dVar38 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar38 = (double)(local_178 * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar43 = (double)(local_180 * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar48 = (double)(local_17c * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar38 = (double)(local_178 * fVar4);
          }
          local_180 = (float)dVar43;
          local_17c = (float)dVar48;
          local_178 = (float)dVar38;
          uVar37 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar47),iVar19);
          partupd::SpawnPart_27(uVar46,&local_170,&local_180,0x2f4f7f7f,uVar37);
        }
      }
      iVar19 = fastfunc::FastDecTimerS16(uVar24 + 0x52);
      if (iVar19 != 0) {
        camera::camera5::DeactivateMobyDrivenCamAccel();
        FUN_005e7d64(&local_150,&DAT_00841e10,lVar16 + 0xc0);
        local_150 = local_150 + (moby->pos).x;
        local_14c = local_14c + (moby->pos).y;
        local_148 = local_148 + (moby->pos).z;
        camera::camera5::Camera_SetMobyDrivenTargetPos(&local_150);
        camera::camera5::Camera_SetMobyDrivenTargetRot(&(moby->rotation).x);
      }
      draw::RegisterPostDraw(&PTR_M440_003806d0_0070cbe8,moby);
      iVar19 = fastfunc::FastDecTimerS16(uVar24 + 0x5c);
      if (iVar19 != 0) {
        lVar18 = 0;
        bVar15 = true;
        iVar19 = 0;
        uVar22 = uVar24;
        do {
          iVar1 = *(int *)((int)uVar22 + 0x60);
          if ((iVar1 != 0) && (bVar3 = *(byte *)(iVar1 + 0x20), bVar3 < 0x80 && bVar3 != 2)) {
            bVar15 = false;
          }
          iVar19 = iVar19 + 1;
          uVar22 = uVar22 + 4;
        } while (iVar19 < 8);
        if (bVar15) {
          lVar25 = 4;
          uVar22 = uVar24;
          do {
            iVar19 = (int)uVar22;
            uVar22 = uVar22 + 4;
            lVar18 = lVar18 + ((longlong)
                               (0x7f - (ulonglong)MobyInstance[*(int *)(iVar19 + 0x80)].state) >>
                               0x3f & 1U);
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          iVar19 = (int)lVar18;
          if (iVar19 == 4) {
            if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
              moby->setByGroup = '\x02';
              (moby->rotation).y = 0.0;
              camera::camera5::Camera_DeactivateMobyDrivenCam(0);
              moby->state = '\x04';
              pMVar21 = MobyInstance + *(int *)((int)pvVar7 + 0x9c);
              local_130 = (pMVar21->rotation).x;
              local_12c = (pMVar21->rotation).y;
              local_128 = (pMVar21->rotation).z;
              local_124 = (pMVar21->rotation).w;
              dVar43 = (double)fastfunc::FastWrapRot(local_128,3.1415927);
              local_128 = (float)dVar43;
              fVar4 = (pMVar21->transform).v0.y;
              fVar5 = (pMVar21->transform).v0.x;
              fVar6 = (pMVar21->transform).v0.z;
              dVar43 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
              if (dVar43 == dVar45) {
                local_134 = (pMVar21->transform).v0.w;
                dVar43 = dVar45;
                dVar44 = dVar45;
              }
              else {
                fVar4 = (float)(2.5 / dVar43);
                dVar44 = (double)(fVar5 * fVar4);
                dVar45 = (double)((pMVar21->transform).v0.y * fVar4);
                dVar43 = (double)((pMVar21->transform).v0.z * fVar4);
                local_134 = (pMVar21->transform).v0.w;
              }
              local_140 = (float)(dVar44 + (double)(pMVar21->pos).x);
              local_13c = (float)(dVar45 + (double)(pMVar21->pos).y);
              local_138 = (float)(dVar43 + (double)(pMVar21->pos).z);
              hero::Hero_Warp(&local_140,&local_130,0,1);
              FUN_0023892c(pMVar21,1);
              *(undefined4 *)((int)pvVar7 + 0xa8) = 0x3fc90fdb;
              return;
            }
          }
          else if (iVar19 == 3) {
            auVar51 = ZEXT416(0xffffffff);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x98) = 0x418c0000;
            auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
            auVar51 = loadVectorLeftIndexed(0x90,0x3822c0);
            auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                         auVar51 << 0x60,auVar49);
            auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
            auVar51 = vectorSplatHalfWord(auVar51,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x5c,uVar24);
            *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
          }
          else if (iVar19 == 2) {
            auVar51 = ZEXT416(0xffffffff);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x98) = 0x41700000;
            auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
            auVar51 = loadVectorLeftIndexed(0x8c,0x3822c0);
            auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                         auVar51 << 0x60,auVar49);
            auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
            auVar51 = vectorSplatHalfWord(auVar51,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x5c,uVar24);
            *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
          }
          else if (iVar19 == 1) {
            auVar51 = ZEXT416(0xffffffff);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x98) = 0x41480000;
            auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
            auVar51 = loadVectorLeftIndexed(0x88,0x3822c0);
            auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                         auVar51 << 0x60,auVar49);
            auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
            auVar51 = vectorSplatHalfWord(auVar51,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x5c,uVar24);
            *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
          }
          else if (iVar19 == 0) {
            auVar51 = ZEXT416(0xffffffff);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x98) = 0x41200000;
            auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
            auVar51 = loadVectorLeftIndexed(0x84,0x3822c0);
            auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                         auVar51 << 0x60,auVar49);
            auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
            auVar51 = vectorSplatHalfWord(auVar51,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x5c,uVar24);
            *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
          }
          iVar19 = fastfunc::FastDecTimerU8(uVar24 + 0x5f);
          if ((iVar19 != 0) ||
             (uVar22 = (ulonglong)*(byte *)((int)pvVar7 + 0x5e),
             0x7f < MobyInstance
                    [*(int *)((int)pvVar7 + (uint)*(byte *)((int)pvVar7 + 0x5e) * 4 + 0x80)].state))
          {
            uVar23 = 0;
            *(undefined1 *)((int)pvVar7 + 0x5f) = 1;
            uVar22 = 0xffffffffffffffff;
            dVar43 = 3.1415927410125732;
            do {
              pMVar21 = MobyInstance;
              iVar19 = *(int *)((int)uVar24 + 0x80);
              dVar44 = (double)FUN_005e8338((double)(MobyInstance[iVar19].pos.x - g_heroPosition.x),
                                            (double)(MobyInstance[iVar19].pos.y - g_heroPosition.y))
              ;
              dVar44 = (double)fastfunc::FastSubRots((float)dVar44,g_heroRotation.z);
              if ((dVar44 < dVar43) && (pMVar21[iVar19].state < 0x7f)) {
                dVar43 = (double)FUN_005e8338((double)(pMVar21[iVar19].pos.x - g_heroPosition.x),
                                              (double)(pMVar21[iVar19].pos.y - g_heroPosition.y));
                dVar43 = (double)fastfunc::FastSubRots((float)dVar43,g_heroRotation.z);
                uVar22 = uVar23;
              }
              uVar23 = uVar23 + 1;
              uVar24 = uVar24 + 4;
            } while ((int)uVar23 < 4);
            *(char *)((int)pvVar7 + 0x5e) = (char)uVar22;
          }
          MobyInstance[*(int *)((int)pvVar7 + ((uint)((uVar22 & 0xffffffff) << 2) & 0x3fc) + 0x80)].
          setByGroup = '\x01';
        }
      }
    }
    else if ((uVar2 != '\x04') && (uVar2 == '\0')) {
      moby->state = '\x04';
      *(undefined4 *)((int)pvVar7 + 0x58) = 200;
      *(undefined4 *)((int)pvVar7 + 0x98) = 0x41200000;
      pMVar21 = mobyfunc::CreateMoby(0x710);
      *(MobyInstance **)((int)pvVar7 + 0xa4) = pMVar21;
      if (pMVar21 != (MobyInstance *)0x0) {
        (pMVar21->pos).x = (moby->pos).x;
        (pMVar21->pos).y = (moby->pos).y;
        (pMVar21->pos).z = (moby->pos).z;
        (pMVar21->pos).w = (moby->pos).w;
        iVar19 = *(int *)((int)pvVar7 + 0xa4);
        *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
        *(undefined2 *)(*(int *)((int)pvVar7 + 0xa4) + 0x32) = 0x30;
        *(undefined1 *)(*(int *)((int)pvVar7 + 0xa4) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar7 + 0xa4) + 0x38) = *(undefined8 *)&moby->color;
      }
      auVar51 = ZEXT416(0xffffffff);
      auVar49 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar51 = ZEXT416(0xffffffff);
      auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar49 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      (moby->rotation).y = 0.0;
      auVar51 = loadVectorLeftIndexed(0x3c,0x3822c0);
      *(undefined4 *)((int)pvVar7 + 0x60) = 0;
      auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      *(undefined4 *)((int)pvVar7 + 100) = 0;
      *(undefined4 *)((int)pvVar7 + 0x68) = 0;
      auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      *(undefined4 *)((int)pvVar7 + 0x6c) = 0;
      *(undefined4 *)((int)pvVar7 + 0x70) = 0;
      *(undefined4 *)((int)pvVar7 + 0x74) = 0;
      *(undefined4 *)((int)pvVar7 + 0x78) = 0;
      *(undefined4 *)((int)pvVar7 + 0x7c) = 0;
      auVar49 = vectorMultiplyAddFloatingPoint
                          (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar49);
      auVar51 = loadVectorLeftIndexed(0x40,0x3822c0);
      auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar50 = vectorMultiplyAddFloatingPoint
                          (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar52);
      auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
      auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar50,0);
      auVar51 = vectorSplatHalfWord(auVar51,1);
      auVar49 = vectorSplatHalfWord(auVar49,1);
      uVar8 = storeVectorElementHalfWordIndexed(auVar49,0x5c,uVar24);
      *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
      *(undefined1 *)((int)pvVar7 + 0x5f) = 0;
      *(undefined1 *)((int)pvVar7 + 0x5e) = 0;
      *(undefined4 *)((int)pvVar7 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar7 + 0x48) = 0;
      *(undefined2 *)((int)pvVar7 + 0x42) = 0;
      uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x40,uVar24);
      *(undefined2 *)((int)pvVar7 + 0x40) = uVar8;
      uVar9 = 0x3fc90fdb;
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
        uVar9 = 0;
      }
      *(undefined4 *)((int)pvVar7 + 0xa8) = uVar9;
    }
    if (*(int *)((int)pvVar7 + 0x90) == 0) {
      pMVar21 = mobyfunc::CreateMoby(0x236);
      *(MobyInstance **)((int)pvVar7 + 0x90) = pMVar21;
      if (pMVar21 != (MobyInstance *)0x0) {
        pMVar21->updateDistance = -1;
        *(undefined2 *)(*(int *)((int)pvVar7 + 0x90) + 0x32) = 0x7e;
        *(undefined1 *)(*(int *)((int)pvVar7 + 0x90) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar7 + 0x90) + 0x38) = *(undefined8 *)&moby->color;
        FUN_005e7d64(&local_120,&DAT_00841dd0,lVar16 + 0xc0);
        local_11c = (moby->pos).y + local_11c;
        local_118 = (moby->pos).z + local_118;
        local_114 = (moby->pos).w;
        local_120 = (moby->pos).x + local_120;
        iVar19 = *(int *)((int)pvVar7 + 0x90);
        *(float *)(iVar19 + 0x10) = local_120;
        *(float *)(iVar19 + 0x14) = local_11c;
        *(float *)(iVar19 + 0x18) = local_118;
        *(f32 *)(iVar19 + 0x1c) = local_114;
        iVar19 = *(int *)((int)pvVar7 + 0x90);
        *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
        mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0x90));
      }
    }
    else {
      FUN_005e7d64(&local_110,&DAT_00841dd0,lVar16 + 0xc0);
      local_10c = (moby->pos).y + local_10c;
      local_108 = (moby->pos).z + local_108;
      local_104 = (moby->pos).w;
      local_110 = (moby->pos).x + local_110;
      iVar19 = *(int *)((int)pvVar7 + 0x90);
      *(float *)(iVar19 + 0x10) = local_110;
      *(float *)(iVar19 + 0x14) = local_10c;
      *(float *)(iVar19 + 0x18) = local_108;
      *(f32 *)(iVar19 + 0x1c) = local_104;
      iVar19 = *(int *)((int)pvVar7 + 0x90);
      *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
      iVar19 = *(int *)((int)pvVar7 + 0x90);
      if (((*(byte *)(iVar19 + 0x70) & 2) != 0) && (*(char *)(iVar19 + 0x53) == '\x01')) {
        mobyutil::MB_SetAnimation(iVar19,0,0,0);
      }
    }
    if (*(int *)((int)pvVar7 + 0x94) == 0) {
      pMVar21 = mobyfunc::CreateMoby(0x236);
      *(MobyInstance **)((int)pvVar7 + 0x94) = pMVar21;
      if (pMVar21 != (MobyInstance *)0x0) {
        pMVar21->updateDistance = -1;
        *(undefined2 *)(*(int *)((int)pvVar7 + 0x94) + 0x32) = 0x7e;
        *(undefined1 *)(*(int *)((int)pvVar7 + 0x94) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar7 + 0x94) + 0x38) = *(undefined8 *)&moby->color;
        FUN_005e7d64(&local_100,&DAT_00841de0,lVar16 + 0xc0);
        local_fc = (moby->pos).y + local_fc;
        local_f8 = (moby->pos).z + local_f8;
        local_f4 = (moby->pos).w;
        local_100 = (moby->pos).x + local_100;
        iVar19 = *(int *)((int)pvVar7 + 0x94);
        *(float *)(iVar19 + 0x10) = local_100;
        *(float *)(iVar19 + 0x14) = local_fc;
        *(float *)(iVar19 + 0x18) = local_f8;
        *(f32 *)(iVar19 + 0x1c) = local_f4;
        iVar19 = *(int *)((int)pvVar7 + 0x94);
        *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
        mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0x94));
      }
    }
    else {
      FUN_005e7d64(&local_f0,&DAT_00841de0,lVar16 + 0xc0);
      local_ec = (moby->pos).y + local_ec;
      local_e8 = (moby->pos).z + local_e8;
      local_e4 = (moby->pos).w;
      local_f0 = (moby->pos).x + local_f0;
      iVar19 = *(int *)((int)pvVar7 + 0x94);
      *(float *)(iVar19 + 0x10) = local_f0;
      *(float *)(iVar19 + 0x14) = local_ec;
      *(float *)(iVar19 + 0x18) = local_e8;
      *(f32 *)(iVar19 + 0x1c) = local_e4;
      iVar19 = *(int *)((int)pvVar7 + 0x94);
      *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
      iVar19 = *(int *)((int)pvVar7 + 0x94);
      if (((*(byte *)(iVar19 + 0x70) & 2) != 0) && (*(char *)(iVar19 + 0x53) == '\x01')) {
        mobyutil::MB_SetAnimation(iVar19,0,0,0);
      }
    }
    if (*(int *)((int)pvVar7 + 0xa4) != 0) {
      FUN_005e7d64(&local_e0,&DAT_00841ea0,lVar16 + 0xc0);
      iVar19 = *(int *)((int)pvVar7 + 0xa4);
      *(float *)(iVar19 + 0x10) = local_e0 + (moby->pos).x;
      *(float *)(iVar19 + 0x14) = local_dc + (moby->pos).y;
      *(float *)(iVar19 + 0x18) = local_d8 + (moby->pos).z;
      *(undefined4 *)(iVar19 + 0x1c) = local_d4;
      iVar19 = *(int *)((int)pvVar7 + 0xa4);
      *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
      dVar43 = (double)fastfunc::FastWrapRot
                                 (*(float *)(*(int *)((int)pvVar7 + 0xa4) + 0x44),
                                  *(float *)((int)pvVar7 + 0xa8));
      *(float *)(*(int *)((int)pvVar7 + 0xa4) + 0x44) = (float)dVar43;
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0xa4));
    }
  }
  return;
}



//==== 00384148  ns=Global  size=0x34
// sig: undefined FUN_00384148(void)
// callers(1): 00237e98 mobyupdate_unsorted::UpdateMoby_1283
// callees(1): 000b72b0 hero::TransitionMovement

int FUN_00384148(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xbc) = 1;
  iVar1 = hero::TransitionMovement(0x32,1);
  return iVar1;
}



//==== 0038417c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M465_0038417c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M465_0038417c(void)

{
  DAT_00841efc = 0x10000;
  return;
}



//==== 003841e8  ns=mobyupdate_unsorted  size=0x7cc
// sig: undefined UpdateMoby_a_lot_7(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 001206e8 partupd::SpawnPart_2; 00123390 partupd::SpawnPart_11; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 441
   Moby 442
   Moby 443
   Moby 445
   Moby 448
   Moby 449
   Moby 450
   Moby 451
   Moby 464
   Moby 465 */

void mobyupdate_unsorted::UpdateMoby_a_lot_7(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  f32 fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar11;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined4 local_a0 [2];
  longlong local_98;
  
  bVar1 = moby->state;
  pfVar3 = (float *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return;
    }
    dVar16 = -1.5707963705062866;
    dVar15 = 1.5707963705062866;
    dVar13 = (double)mobyutil::MB_randRangeFloat
                               (mobyutil::g_FrameTime * -1.5707964,mobyutil::g_FrameTime * 1.5707964
                               );
    pfVar3[4] = (float)dVar13;
    dVar13 = (double)mobyutil::MB_randRangeFloat
                               ((float)((double)mobyutil::g_FrameTime * dVar16),
                                (float)((double)mobyutil::g_FrameTime * dVar15));
    pfVar3[5] = (float)dVar13;
    dVar13 = (double)mobyutil::MB_randRangeFloat
                               ((float)(longlong)(animationSpeed * 90.5),
                                (float)(longlong)(animationSpeed * 150.5));
    pfVar3[6] = (float)(int)dVar13;
    moby->state = '\x02';
  }
  else if (2 < bVar1) {
    if (3 < bVar1) {
      return;
    }
    pfVar3[2] = -(DAT_0071f418 * 10.8 * 0.5 - pfVar3[2]);
    fVar2 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *pfVar3;
    (moby->pos).y = (moby->pos).y + pfVar3[1];
    (moby->pos).z = (moby->pos).z + pfVar3[2];
    dVar13 = (double)fastfunc::FastWrapRot(fVar2,pfVar3[4]);
    (moby->rotation).x = (float)dVar13;
    dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar3[5]);
    fVar4 = (moby->pos).x;
    (moby->rotation).y = (float)dVar13;
    uVar6 = (int)fVar4 >> 0x1f;
    iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6;
    if ((((0x40ffffff < iVar12) &&
         (fVar4 = (moby->pos).y, uVar6 = (int)fVar4 >> 0x1f,
         iVar11 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6, 0x40ffffff < iVar11)) &&
        (fVar4 = (moby->pos).z, uVar6 = (int)fVar4 >> 0x1f,
        0x40ffffff < (int)((uVar6 >> 1 ^ (uint)fVar4) - uVar6))) &&
       ((iVar12 < 0x43fa0001 && (iVar11 < 0x43fa0001)))) {
      return;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  pfVar3[2] = -(DAT_0071f418 * 10.8 * 0.5 - pfVar3[2]);
  fVar2 = (moby->rotation).x;
  (moby->pos).x = (moby->pos).x + *pfVar3;
  (moby->pos).y = (moby->pos).y + pfVar3[1];
  (moby->pos).z = (moby->pos).z + pfVar3[2];
  dVar13 = (double)fastfunc::FastWrapRot(fVar2,pfVar3[4]);
  (moby->rotation).x = (float)dVar13;
  dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar3[5]);
  fVar4 = (moby->pos).x;
  (moby->rotation).y = (float)dVar13;
  uVar6 = (int)fVar4 >> 0x1f;
  dVar13 = 8.0;
  iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6;
  if (((iVar12 < 0x41000000) ||
      (fVar4 = (moby->pos).y, uVar6 = (int)fVar4 >> 0x1f,
      iVar11 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6, iVar11 < 0x41000000)) ||
     ((0x43fa0000 < iVar11 || 0x43fa0000 < iVar12 ||
      (fVar4 = (moby->pos).z, uVar6 = (int)fVar4 >> 0x1f,
      0x43fa0000 < (int)((uVar6 >> 1 ^ (uint)fVar4) - uVar6))))) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    iVar12 = mobyutil::MB_randInt(3);
    if (iVar12 == 0) {
      local_a0[0] = 0x2f000000;
      local_a0[1] = 0x3f000000;
      lVar8 = mobyutil::MB_randInt(2);
      dVar15 = (double)animationSpeed;
      uVar14 = 0x41186a0000000000;
      uVar5 = *(undefined4 *)((int)local_a0 + (int)(lVar8 << 2));
      local_98 = (longlong)(int)(dVar15 * 20.5);
      mobyutil::MB_randRange
                (local_98,dVar15,0x41186a0000000000,(int)(dVar15 * 15.5),(int)(dVar15 * 20.5));
      local_98 = (longlong)(int)(animationSpeed * 30.5);
      mobyutil::MB_randRange((int)(animationSpeed * 25.5),(int)(animationSpeed * 30.5));
      dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar13,16.0);
      partupd::SpawnPart_11
                (uVar14,(double)(float)(dVar13 * (double)mobyutil::g_FrameTime),
                 (longlong)(int)moby + 0x10,local_e0,0x2f3f3f7f,uVar5);
    }
    fVar4 = (moby->pos).z;
    uVar6 = (int)fVar4 >> 0x1f;
    if ((int)((uVar6 >> 1 ^ (uint)fVar4) - uVar6) < 0x41733333) {
      iVar12 = 0;
      if (0 < DAT_00841f20) {
        dVar13 = -3.0;
        dVar15 = 3.0;
        do {
          mobyutil::MB_randRot();
          mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar15);
          mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar15);
          uVar7 = DAT_00841f28;
          uVar5 = DAT_00841f24;
          local_98 = (longlong)(DAT_00841f38 << 1);
          dVar16 = (double)mobyutil::MB_randRangeFloat
                                     ((float)(longlong)DAT_00841f38,(float)local_98);
          uVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
          local_98 = (longlong)(DAT_00841f3c << 1);
          dVar16 = (double)mobyutil::MB_randRangeFloat
                                     ((float)(longlong)DAT_00841f3c,(float)local_98);
          uVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
          local_98 = (longlong)(DAT_00841f40 << 1);
          dVar16 = (double)mobyutil::MB_randRangeFloat
                                     ((float)(longlong)DAT_00841f40,(float)local_98);
          uVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
          partupd::SpawnPart_2(local_b0,local_d0,local_c0,uVar5,uVar7,uVar14,uVar9,uVar10);
          iVar12 = iVar12 + 1;
        } while (iVar12 < DAT_00841f20);
      }
      moby->state = '\x03';
    }
  }
  return;
}



//==== 003849b8  ns=mobyupdate_helpers  size=0x124
// sig: undefined M465_003849b8(void)
// callers(2): 00392ee8 mobyupdate_helpers::M462_00392ee8; 00394c18 mobyupdate_helpers::M463_00394c18
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
mobyupdate_helpers::M465_003849b8
          (int param_1,MOBY_OCLASSES param_2,undefined8 param_3,undefined8 param_4)

{
  f32 fVar1;
  uint uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  MobyInstance *pMVar5;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  f32 local_24;
  
  pMVar5 = mobyfunc::CreateMoby(param_2);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = -1;
    pMVar5->enabled = '\x01';
    pMVar5->drawDistance = 0xff;
    pMVar4 = g_heroMobyPtr;
    fVar1 = *(f32 *)(param_1 + 0x40);
    pMVar5->modeBits = pMVar5->modeBits | CAN_BE_DAMAGED;
    uVar2 = pMVar4->color;
    uVar3 = pMVar4->light;
    (pMVar5->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x44);
    pMVar5->color = uVar2;
    pMVar5->light = uVar3;
    (pMVar5->rotation).y = fVar1;
    (pMVar5->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar5->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::GetBonePosition(pMVar5,param_3,&local_40);
    mobyfunc::GetBonePosition(param_1,param_4,&local_30);
    (pMVar5->pos).x = local_30 - local_40;
    (pMVar5->pos).y = local_2c - local_3c;
    (pMVar5->pos).z = local_28 - local_38;
    (pMVar5->pos).w = local_24;
    mobyfunc::UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}



//==== 00384adc  ns=mobyupdate_helpers  size=0xb78
// sig: undefined M444_00384adc(void)
// callers(1): 00385e78 mobyupdate_unsorted::UpdateMoby_444
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform

void mobyupdate_helpers::M444_00384adc(int param_1)

{
  f32 fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  f32 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  f32 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  f32 local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  f32 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  f32 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  f32 local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  f32 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  f32 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  f32 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  f32 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  f32 local_64;
  
  iVar2 = *(int *)(param_1 + 0x78);
  *(int *)(iVar2 + 0x60) = param_1;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  pMVar7 = mobyfunc::CreateMoby(0x1c1);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->enabled = '\x01';
    pMVar7->drawDistance = 0xff;
    pMVar8 = g_heroMobyPtr;
    fVar1 = *(f32 *)(param_1 + 0x40);
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = pMVar8->color;
    uVar6 = pMVar8->light;
    (pMVar7->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x44);
    pMVar7->color = uVar5;
    pMVar7->light = uVar6;
    (pMVar7->rotation).y = fVar1;
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::GetBonePosition(pMVar7,0,&local_80);
    mobyfunc::GetBonePosition(param_1,2,&local_70);
    (pMVar7->pos).x = local_70 - local_80;
    (pMVar7->pos).y = local_6c - local_7c;
    (pMVar7->pos).z = local_68 - local_78;
    (pMVar7->pos).w = local_64;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0x90) = pMVar7;
  *(int *)(iVar2 + 0x94) = param_1;
  *(undefined4 *)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0x9c) = 2;
  pMVar7 = mobyfunc::CreateMoby(WATER_RESERVOIR|FAN_0042);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::GetBonePosition(pMVar7,0,&local_a0);
    mobyfunc::GetBonePosition(param_1,3,&local_90);
    (pMVar7->pos).x = local_90 - local_a0;
    (pMVar7->pos).y = local_8c - local_9c;
    (pMVar7->pos).z = local_88 - local_98;
    (pMVar7->pos).w = local_84;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0x70) = pMVar7;
  *(int *)(iVar2 + 0x74) = param_1;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 3;
  pMVar7 = mobyfunc::CreateMoby(WATER_RESERVOIR|FAN_0042);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::GetBonePosition(pMVar7,0,&local_c0);
    mobyfunc::GetBonePosition(param_1,4,&local_b0);
    (pMVar7->pos).x = local_b0 - local_c0;
    (pMVar7->pos).y = local_ac - local_bc;
    (pMVar7->pos).z = local_a8 - local_b8;
    (pMVar7->pos).w = local_a4;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0x80) = pMVar7;
  pMVar7->modeBits = pMVar7->modeBits | MIRROR;
  *(int *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 4;
  pMVar7 = mobyfunc::CreateMoby(0x1c0);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::GetBonePosition(pMVar7,0,&local_e0);
    mobyfunc::GetBonePosition(param_1,0,&local_d0);
    (pMVar7->pos).x = local_d0 - local_e0;
    (pMVar7->pos).y = local_cc - local_dc;
    (pMVar7->pos).z = local_c8 - local_d8;
    (pMVar7->pos).w = local_c4;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xd0) = pMVar7;
  *(int *)(iVar2 + 0xd4) = param_1;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  *(undefined4 *)(iVar2 + 0xdc) = 0;
  pMVar7 = mobyfunc::CreateMoby(0x1c0);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::GetBonePosition(pMVar7,1,&local_100);
    mobyfunc::GetBonePosition(param_1,1,&local_f0);
    (pMVar7->pos).x = local_f0 - local_100;
    (pMVar7->pos).y = local_ec - local_fc;
    (pMVar7->pos).z = local_e8 - local_f8;
    (pMVar7->pos).w = local_e4;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xe0) = pMVar7;
  *(int *)(iVar2 + 0xe4) = param_1;
  *(undefined4 *)(iVar2 + 0xe8) = 1;
  *(undefined4 *)(iVar2 + 0xec) = 1;
  pMVar8 = mobyfunc::CreateMoby(0x1c0);
  if (pMVar8 != (MobyInstance *)0x0) {
    pMVar8->updateDistance = -1;
    pMVar8->drawDistance = 0xff;
    pMVar8->enabled = '\x01';
    pMVar8->modeBits = pMVar8->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar8->color = g_heroMobyPtr->color;
    pMVar8->light = uVar5;
    (pMVar8->rotation).x = (pMVar7->rotation).x;
    (pMVar8->rotation).y = (pMVar7->rotation).y;
    (pMVar8->rotation).z = (pMVar7->rotation).z;
    (pMVar8->rotation).w = (pMVar7->rotation).w;
    mobyfunc::GetBonePosition(pMVar8,1,&local_120);
    mobyfunc::GetBonePosition(pMVar7,0,&local_110);
    (pMVar8->pos).x = local_110 - local_120;
    (pMVar8->pos).y = local_10c - local_11c;
    (pMVar8->pos).z = local_108 - local_118;
    (pMVar8->pos).w = local_104;
    mobyfunc::UpdateMobyTransform(pMVar8);
  }
  *(MobyInstance **)(iVar2 + 0xf0) = pMVar8;
  *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar2 + 0xe0);
  *(undefined4 *)(iVar2 + 0xf8) = 1;
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  pMVar7 = mobyfunc::CreateMoby(EUDORA_BRIDGE|BOLT);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = (pMVar8->rotation).x;
    (pMVar7->rotation).y = (pMVar8->rotation).y;
    (pMVar7->rotation).z = (pMVar8->rotation).z;
    (pMVar7->rotation).w = (pMVar8->rotation).w;
    mobyfunc::GetBonePosition(pMVar7,0,&local_140);
    mobyfunc::GetBonePosition(pMVar8,0,&local_130);
    (pMVar7->pos).x = local_130 - local_140;
    (pMVar7->pos).y = local_12c - local_13c;
    (pMVar7->pos).z = local_128 - local_138;
    (pMVar7->pos).w = local_124;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xb0) = pMVar7;
  *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(iVar2 + 0xf0);
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xbc) = 0;
  iVar11 = *(int *)(iVar2 + 0xd0);
  pMVar7 = mobyfunc::CreateMoby(EUDORA_BRIDGE|CLANK_000A);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(iVar11 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(iVar11 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(iVar11 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(iVar11 + 0x4c);
    mobyfunc::GetBonePosition(pMVar7,1,&local_160);
    mobyfunc::GetBonePosition(iVar11,1,&local_150);
    (pMVar7->pos).x = local_150 - local_160;
    (pMVar7->pos).y = local_14c - local_15c;
    (pMVar7->pos).z = local_148 - local_158;
    (pMVar7->pos).w = local_144;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xc0) = pMVar7;
  *(undefined4 *)(iVar2 + 0xc4) = *(undefined4 *)(iVar2 + 0xd0);
  *(undefined4 *)(iVar2 + 200) = 1;
  *(undefined4 *)(iVar2 + 0xcc) = 1;
  pMVar7 = mobyfunc::CreateMoby(0x1b9);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    mobyfunc::GetBonePosition(pMVar7,0,&local_180);
    mobyfunc::GetBonePosition(param_1,0,&local_170);
    (pMVar7->pos).x = local_170 - local_180;
    (pMVar7->pos).y = local_16c - local_17c;
    (pMVar7->pos).z = local_168 - local_178;
    (pMVar7->pos).w = local_164;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xa0) = pMVar7;
  iVar9 = 0;
  *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar2 + 0xc0);
  *(undefined4 *)(iVar2 + 0xa8) = 0;
  *(undefined4 *)(iVar2 + 0xac) = 0;
  iVar11 = iVar2;
  do {
    iVar3 = *(int *)(iVar2 + 0xd0);
    iVar10 = iVar9 + 2;
    pMVar7 = mobyfunc::CreateMoby(EUDORA_BRIDGE|VENDOR);
    if (pMVar7 != (MobyInstance *)0x0) {
      pMVar7->updateDistance = -1;
      pMVar7->drawDistance = 0xff;
      pMVar7->enabled = '\x01';
      pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
      uVar5 = g_heroMobyPtr->light;
      pMVar7->color = g_heroMobyPtr->color;
      pMVar7->light = uVar5;
      (pMVar7->rotation).x = *(f32 *)(iVar3 + 0x40);
      (pMVar7->rotation).y = *(f32 *)(iVar3 + 0x44);
      (pMVar7->rotation).z = *(f32 *)(iVar3 + 0x48);
      (pMVar7->rotation).w = *(f32 *)(iVar3 + 0x4c);
      mobyfunc::GetBonePosition(pMVar7,0,&local_1a0);
      mobyfunc::GetBonePosition(iVar3,iVar10,&local_190);
      (pMVar7->pos).x = local_190 - local_1a0;
      (pMVar7->pos).y = local_18c - local_19c;
      (pMVar7->pos).z = local_188 - local_198;
      (pMVar7->pos).w = local_184;
      mobyfunc::UpdateMobyTransform(pMVar7);
    }
    *(MobyInstance **)(iVar11 + 0x100) = pMVar7;
    iVar9 = iVar9 + 1;
    uVar4 = *(undefined4 *)(iVar2 + 0xd0);
    *(undefined4 *)(iVar11 + 0x108) = 0;
    *(undefined4 *)(iVar11 + 0x104) = uVar4;
    *(int *)(iVar11 + 0x10c) = iVar10;
    iVar11 = iVar11 + 0x10;
  } while (iVar9 < 8);
  iVar9 = 0;
  iVar11 = iVar2;
  do {
    iVar10 = iVar9 + 2;
    iVar3 = *(int *)(iVar2 + 0xe0);
    pMVar7 = mobyfunc::CreateMoby(EUDORA_BRIDGE|VENDOR);
    if (pMVar7 != (MobyInstance *)0x0) {
      pMVar7->updateDistance = -1;
      pMVar7->drawDistance = 0xff;
      pMVar7->enabled = '\x01';
      pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
      uVar5 = g_heroMobyPtr->light;
      pMVar7->color = g_heroMobyPtr->color;
      pMVar7->light = uVar5;
      (pMVar7->rotation).x = *(f32 *)(iVar3 + 0x40);
      (pMVar7->rotation).y = *(f32 *)(iVar3 + 0x44);
      (pMVar7->rotation).z = *(f32 *)(iVar3 + 0x48);
      (pMVar7->rotation).w = *(f32 *)(iVar3 + 0x4c);
      mobyfunc::GetBonePosition(pMVar7,0,&local_1c0);
      mobyfunc::GetBonePosition(iVar3,iVar10,&local_1b0);
      (pMVar7->pos).x = local_1b0 - local_1c0;
      (pMVar7->pos).y = local_1ac - local_1bc;
      (pMVar7->pos).z = local_1a8 - local_1b8;
      (pMVar7->pos).w = local_1a4;
      mobyfunc::UpdateMobyTransform(pMVar7);
    }
    *(MobyInstance **)(iVar11 + 0x180) = pMVar7;
    uVar4 = *(undefined4 *)(iVar2 + 0xe0);
    iVar9 = iVar9 + 1;
    *(undefined4 *)(iVar11 + 0x188) = 0;
    *(undefined4 *)(iVar11 + 0x184) = uVar4;
    *(int *)(iVar11 + 0x18c) = iVar10;
    iVar11 = iVar11 + 0x10;
  } while (iVar9 < 8);
  iVar9 = 0;
  iVar11 = iVar2;
  do {
    iVar10 = iVar9 + 2;
    iVar3 = *(int *)(iVar2 + 0xf0);
    pMVar7 = mobyfunc::CreateMoby(EUDORA_BRIDGE|VENDOR);
    if (pMVar7 != (MobyInstance *)0x0) {
      pMVar7->updateDistance = -1;
      pMVar7->drawDistance = 0xff;
      pMVar7->enabled = '\x01';
      pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
      uVar5 = g_heroMobyPtr->light;
      pMVar7->color = g_heroMobyPtr->color;
      pMVar7->light = uVar5;
      (pMVar7->rotation).x = *(f32 *)(iVar3 + 0x40);
      (pMVar7->rotation).y = *(f32 *)(iVar3 + 0x44);
      (pMVar7->rotation).z = *(f32 *)(iVar3 + 0x48);
      (pMVar7->rotation).w = *(f32 *)(iVar3 + 0x4c);
      mobyfunc::GetBonePosition(pMVar7,0,&local_1e0);
      mobyfunc::GetBonePosition(iVar3,iVar10,&local_1d0);
      (pMVar7->pos).x = local_1d0 - local_1e0;
      (pMVar7->pos).y = local_1cc - local_1dc;
      (pMVar7->pos).z = local_1c8 - local_1d8;
      (pMVar7->pos).w = local_1c4;
      mobyfunc::UpdateMobyTransform(pMVar7);
    }
    *(MobyInstance **)(iVar11 + 0x200) = pMVar7;
    uVar4 = *(undefined4 *)(iVar2 + 0xf0);
    iVar9 = iVar9 + 1;
    *(undefined4 *)(iVar11 + 0x208) = 0;
    *(undefined4 *)(iVar11 + 0x204) = uVar4;
    *(int *)(iVar11 + 0x20c) = iVar10;
    iVar11 = iVar11 + 0x10;
  } while (iVar9 < 8);
  return;
}



//==== 00385660  ns=mobyupdate_helpers  size=0x3d8
// sig: undefined M444_00385660(void)
// callers(1): 00385e78 mobyupdate_unsorted::UpdateMoby_444
// callees(3): 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M444_00385660(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong unaff_r25;
  int iVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar18;
  ulonglong unaff_r28;
  int iVar19;
  int iVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0x100;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar10;
  puVar8[0x22] = in_LR;
  puVar8[0x1e] = unaff_r30;
  puVar8[0x1c] = unaff_r28;
  puVar8[0x19] = unaff_r25;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar17 = 1;
  puVar8[0x1f] = unaff_r31;
  puVar8[0x1b] = unaff_r27;
  iVar19 = iVar6 + 0x10;
  puVar8[0x1d] = unaff_r29;
  puVar8[0x1a] = unaff_r26;
  iVar18 = 1;
  iVar20 = iVar19;
  do {
    iVar7 = *(int *)(iVar20 + 0x60);
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      mobyfunc::GetBonePosition(iVar7,*(undefined4 *)(iVar20 + 0x68),uVar10 - 0x90);
      mobyfunc::GetBonePosition
                (*(undefined4 *)(iVar20 + 100),*(undefined4 *)(iVar20 + 0x6c),uVar10 - 0x80);
      fVar1 = *(float *)((int)puVar8 + 0x84);
      fVar2 = *(float *)((int)puVar8 + 0x74);
      fVar3 = *(float *)(puVar8 + 0x11);
      fVar4 = *(float *)(puVar8 + 0xf);
      *(float *)(iVar7 + 0x10) =
           *(float *)(iVar7 + 0x10) + (*(float *)(puVar8 + 0x10) - *(float *)(puVar8 + 0xe));
      *(float *)(iVar7 + 0x14) = *(float *)(iVar7 + 0x14) + (fVar1 - fVar2);
      *(float *)(iVar7 + 0x18) = *(float *)(iVar7 + 0x18) + (fVar3 - fVar4);
    }
    iVar17 = iVar17 + 1;
    iVar20 = iVar20 + 0x10;
  } while (iVar17 < 0x22);
  if (*(int *)(iVar6 + 0xd0) != 0) {
    dVar22 = (double)fastfunc::FastWrapRot
                               (*(float *)(*(int *)(iVar6 + 0xd0) + 0x40),
                                DAT_00841f50 * 0.017453292 * mobyutil::g_FrameTime);
    *(float *)(*(int *)(iVar6 + 0xd0) + 0x40) = (float)dVar22;
  }
  if (*(int *)(iVar6 + 0xe0) != 0) {
    dVar22 = (double)fastfunc::FastWrapRot
                               (*(float *)(*(int *)(iVar6 + 0xe0) + 0x40),
                                -(DAT_00841f50 * 0.017453292 * mobyutil::g_FrameTime));
    *(float *)(*(int *)(iVar6 + 0xe0) + 0x40) = (float)dVar22;
  }
  if (*(int *)(iVar6 + 0xf0) != 0) {
    dVar22 = (double)fastfunc::FastWrapRot
                               (*(float *)(*(int *)(iVar6 + 0xf0) + 0x40),
                                DAT_00841f50 * 0.017453292 * mobyutil::g_FrameTime);
    *(float *)(*(int *)(iVar6 + 0xf0) + 0x40) = (float)dVar22;
  }
  iVar6 = *(int *)(iVar6 + 0x90);
  if (iVar6 != 0) {
    fVar1 = g_heroPosition.x - *(float *)(iVar6 + 0x10);
    fVar2 = g_heroPosition.y - *(float *)(iVar6 + 0x14);
    fVar3 = ABS(fVar1);
    fVar4 = ABS(fVar2);
    *(float *)(puVar8 + 0x12) = fVar1;
    *(float *)((int)puVar8 + 0x94) = fVar2;
    *(float *)(puVar8 + 0x13) = fVar3 - fVar4;
    fVar1 = 0.0;
    uVar11 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar8 + 0x12));
    if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar4 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar8 + 0x94));
    if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
      fVar9 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar12 = uVar10 - 0xf0;
      lVar14 = uVar10 - 100;
      lVar16 = uVar10 - 0x54;
      lVar21 = 2;
      fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x15) = fVar2;
      *(float *)(puVar8 + 0x14) = fVar2;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)((int)puVar8 + 0x9c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar2;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x8c) * fVar2 * fVar2;
        iVar20 = (int)lVar14;
        lVar12 = lVar12 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = uVar10 - 100;
      pfVar15 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar12 = lVar13;
      lVar14 = lVar16;
      do {
        fVar2 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar2;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar12 = 2;
      do {
        iVar20 = (int)lVar13;
        iVar17 = (int)lVar16;
        lVar13 = lVar13 + 0x10;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar20 + 0x9c) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                + *(float *)(iVar17 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar4;
    }
    *(float *)(iVar6 + 0x48) = fVar1;
  }
  do {
    if (*(MobyInstance **)(iVar19 + 0x60) != (MobyInstance *)0x0) {
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar19 + 0x60));
    }
    iVar18 = iVar18 + 1;
    iVar19 = iVar19 + 0x10;
  } while (iVar18 < 0x22);
  return;
}



//==== 00385a50  ns=mobyupdate_helpers  size=0x3d4
// sig: undefined M444_00385a50(void)
// callers(1): 00385e78 mobyupdate_unsorted::UpdateMoby_444
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0015d12c sound::PlayMobySound; 00502758 fastfunc::FastDoubleToInt

ulonglong mobyupdate_helpers::M444_00385a50(MobyInstance *param_1)

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
  short sVar16;
  int iVar15;
  void *pvVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  lVar19 = 0;
  pvVar2 = param_1->pVar;
  iVar15 = -1;
  lVar20 = 0;
  lVar18 = 0;
  pvVar17 = pvVar2;
  do {
    if ((*(int *)((int)pvVar17 + 0x60) != 0) &&
       (iVar14 = mobyutil::MB_damage(*(int *)((int)pvVar17 + 0x60),0x10000,0), iVar14 != 0)) {
      iVar14 = (int)lVar18;
      if ((int)lVar20 < 7) {
        if (iVar14 < 1) {
          lVar18 = 1;
          iVar15 = 1;
        }
      }
      else if ((int)lVar20 < 10) {
        if (iVar14 < 2) {
          iVar15 = 1;
          lVar18 = 2;
        }
      }
      else if (iVar14 < 4) {
        lVar18 = lVar18 + 4;
        iVar15 = 2;
        lVar19 = lVar20;
      }
      *(undefined1 *)(*(int *)((int)pvVar17 + 0x60) + 0xa4) = 0xff;
    }
    lVar20 = lVar20 + 1;
    pvVar17 = (void *)((int)pvVar17 + 0x10);
  } while ((int)lVar20 < 0x22);
  uVar13 = (ulonglong)*(ushort *)((int)pvVar2 + 0x28c) + lVar18;
  sVar16 = (short)uVar13;
  *(short *)((int)pvVar2 + 0x28c) = sVar16;
  if (sVar16 < 8) {
    if (iVar15 < 0) {
      return uVar13;
    }
  }
  else {
    iVar15 = 0;
    *(ushort *)((int)pvVar2 + 0x28c) =
         sVar16 + ((sVar16 >> 3) + (ushort)(sVar16 < 0 && (uVar13 & 7) != 0)) * -8;
    if ((int)lVar19 != 0) {
      iVar21 = (int)(lVar19 << 4);
      iVar15 = *(int *)((int)pvVar2 + iVar21 + 0x60);
      pfVar3 = *(float **)(iVar15 + 0x78);
      mobyutil::MB_SpawnExplosionSparks
                (0x4000000000000000,0x402a000000000000,param_1,iVar15 + 0x10,iVar15,
                 0xffffffffffffffff);
      iVar15 = *(int *)((int)pvVar2 + iVar21 + 0x60);
      iVar14 = *(int *)((int)pvVar2 + iVar21 + 100);
      fVar5 = *(float *)(iVar15 + 0x10) - *(float *)(iVar14 + 0x10);
      *pfVar3 = fVar5;
      fVar6 = *(float *)(iVar15 + 0x14) - *(float *)(iVar14 + 0x14);
      pfVar3[1] = fVar6;
      fVar7 = *(float *)(iVar15 + 0x18) - *(float *)(iVar14 + 0x18);
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
      *(undefined1 *)(*(int *)((int)pvVar2 + iVar21 + 0x60) + 0x20) = 1;
      *(undefined4 *)((int)pvVar2 + iVar21 + 0x60) = 0;
      return 1;
    }
    dVar26 = 0.0;
    mobyutil::MB_randRangeFloat(0.0,23.0);
    iVar14 = fastfunc::FastDoubleToInt();
    iVar21 = 0;
    do {
      iVar12 = iVar14 % 0x18 + 10;
      iVar4 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
      if (iVar4 != 0) {
        pfVar3 = *(float **)(iVar4 + 0x78);
        mobyutil::MB_SpawnExplosionSparks
                  (0x4000000000000000,0x402a000000000000,param_1,iVar4 + 0x10,iVar4,
                   0xffffffffffffffff);
        iVar15 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
        iVar14 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 100);
        fVar5 = *(float *)(iVar15 + 0x10) - *(float *)(iVar14 + 0x10);
        *pfVar3 = fVar5;
        fVar6 = *(float *)(iVar15 + 0x14) - *(float *)(iVar14 + 0x14);
        pfVar3[1] = fVar6;
        fVar7 = *(float *)(iVar15 + 0x18) - *(float *)(iVar14 + 0x18);
        pfVar3[2] = fVar7;
        pfVar3[3] = *(float *)(iVar15 + 0x1c);
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
      iVar21 = iVar21 + 1;
      iVar14 = iVar14 + 1;
    } while (iVar21 < 0x18);
    param_1->state = 'c';
  }
  iVar15 = sound::PlayMobySound(iVar15,0,param_1);
  return (longlong)iVar15;
}



//==== 00385e78  ns=mobyupdate_unsorted  size=0x1658
// sig: undefined UpdateMoby_444(MobyInstance * moby)
// callers(0): 
// callees(18): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010a2e0 mobyutil::OrganicDeltAng; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 00375430 FUN_00375430; 00384adc mobyupdate_helpers::M444_00384adc; 00385660 mobyupdate_helpers::M444_00385660; 00385a50 mobyupdate_helpers::M444_00385a50; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 444 */

void mobyupdate_unsorted::UpdateMoby_444(MobyInstance *moby)

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
  MobyModeBit MVar10;
  int *piVar11;
  int *piVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  int iVar19;
  int iVar20;
  longlong lVar17;
  longlong lVar18;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  void *pvVar27;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar28;
  int iVar29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x260;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar16;
  puVar13[0x4e] = in_LR;
  puVar13[0x45] = in_f25;
  puVar13[0x46] = in_f26;
  puVar13[0x47] = in_f27;
  puVar13[0x48] = in_f28;
  puVar13[0x49] = in_f29;
  puVar13[0x4a] = in_f30;
  puVar13[0x4b] = in_f31;
  puVar13[0x44] = unaff_r31;
  puVar13[0x43] = unaff_r30;
  iVar19 = DAT_010c51c8;
  piVar11 = (int *)moby->pVar;
  puVar13[0x42] = unaff_r29;
  puVar13[0x41] = unaff_r28;
  puVar13[0x40] = unaff_r27;
  puVar13[0x3f] = unaff_r26;
  puVar13[0x3e] = unaff_r25;
  if (iVar19 == 0) {
    iVar19 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)piVar11 + 0x28e));
    if (iVar19 == 0) {
      iVar19 = sound::PlayMobySound(3,4,moby);
      *(short *)((int)piVar11 + 0x28e) = (short)iVar19;
    }
    uVar1 = moby->state;
    if (uVar1 == 'c') {
      iVar19 = 1;
      uVar36 = 0x4008000000000000;
      uVar35 = 0x402a000000000000;
      dVar37 = 5.0;
      dVar32 = 0.0;
      do {
        iVar20 = piVar11[0x1c];
        if (iVar20 != 0) {
          pfVar24 = *(float **)(iVar20 + 0x78);
          mobyutil::MB_SpawnExplosionSparks(uVar36,uVar35,lVar17,iVar20 + 0x10);
          fVar4 = *(float *)(iVar20 + 0x10) - (moby->pos).x;
          *pfVar24 = fVar4;
          fVar5 = *(float *)(iVar20 + 0x14) - (moby->pos).y;
          pfVar24[1] = fVar5;
          fVar9 = *(float *)(iVar20 + 0x18) - (moby->pos).z;
          pfVar24[2] = fVar9;
          pfVar24[3] = *(float *)(iVar20 + 0x1c);
          dVar40 = (double)SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar5 * fVar5);
          fVar3 = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar37) / dVar40);
          dVar39 = dVar32;
          if (dVar32 - dVar40 < 0.0) {
            dVar39 = (double)(fVar4 * fVar3);
          }
          dVar45 = dVar32;
          if (dVar32 - dVar40 < 0.0) {
            dVar45 = (double)(fVar5 * fVar3);
          }
          dVar38 = dVar32;
          if (dVar32 - dVar40 < 0.0) {
            dVar38 = (double)(fVar9 * fVar3);
          }
          if (dVar40 - dVar32 < 0.0) {
            dVar39 = (double)(fVar4 * fVar3);
          }
          if (dVar40 - dVar32 < 0.0) {
            dVar45 = (double)(fVar5 * fVar3);
          }
          if (dVar40 - dVar32 < 0.0) {
            dVar38 = (double)(fVar9 * fVar3);
          }
          *pfVar24 = (float)dVar39;
          pfVar24[1] = (float)dVar45;
          pfVar24[2] = (float)dVar38;
          *(undefined1 *)(iVar20 + 0x20) = 1;
          piVar11[0x1c] = 0;
        }
        iVar19 = iVar19 + 1;
        piVar11 = piVar11 + 4;
      } while (iVar19 < 0x22);
      mobyutil::MB_SpawnExplosionSparks(dVar37,uVar35,lVar17,lVar17 + 0x10);
      mobyfunc::DeleteMoby(moby);
    }
    else if (uVar1 == '\x03') {
      moby->state = '\x01';
      iVar19 = piVar11[4];
      fVar3 = *(float *)(iVar19 + 0x10);
      (moby->pos).x = fVar3;
      fVar4 = *(float *)(iVar19 + 0x14);
      (moby->pos).y = fVar4;
      (moby->pos).z = *(f32 *)(iVar19 + 0x18);
      (moby->pos).w = *(f32 *)(iVar19 + 0x1c);
      fVar3 = *(float *)(iVar19 + 0x20) - fVar3;
      fVar4 = *(float *)(iVar19 + 0x24) - fVar4;
      fVar5 = ABS(fVar3);
      fVar9 = ABS(fVar4);
      *(float *)(puVar13 + 0x16) = fVar3;
      *(float *)((int)puVar13 + 0xb4) = fVar4;
      *(float *)(puVar13 + 0x17) = fVar5 - fVar9;
      fVar4 = 0.0;
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar13 + 0x16));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar3 = fVar9;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar13 + 0xb4));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar22 = uVar16 - 0x250;
        lVar30 = uVar16 - 0x14c;
        lVar26 = uVar16 - 0x15c;
        lVar31 = 2;
        fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x22) = fVar3;
        *(float *)(puVar13 + 0x21) = fVar3;
        *(float *)((int)puVar13 + 0x10c) = fVar3;
        *(float *)((int)puVar13 + 0x104) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar5;
        *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar3;
        *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0xf4) * fVar3 * fVar3;
          iVar19 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0x15c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          fVar3 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0x104) * fVar3;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar22 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar20 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar19 + 0x104) + *(float *)(iVar20 + 4) +
                  *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar6 + fVar9;
      }
      (moby->rotation).z = fVar4;
      (moby->rotation).x = 0.0;
      mobyupdate_helpers::M444_00385660(lVar17);
    }
    else if (uVar1 == '\x02') {
      piVar12 = (int *)piVar11[0x10];
      iVar19 = piVar11[0xc];
      iVar20 = *piVar12;
      iVar29 = (iVar19 + 1) - ((iVar19 + 1) / iVar20) * iVar20;
      iVar21 = iVar29 * 0x10;
      fVar3 = (float)piVar12[iVar29 * 4 + 4];
      fVar4 = (float)piVar12[iVar29 * 4 + 5];
      fVar5 = fVar3 - (float)piVar12[iVar19 * 4 + 4];
      fVar9 = fVar4 - (float)piVar12[iVar19 * 4 + 5];
      fVar7 = ABS(fVar5);
      fVar6 = ABS(fVar9);
      *(float *)((int)puVar13 + 0xd4) = fVar5;
      *(float *)(puVar13 + 0x1b) = fVar9;
      iVar19 = (iVar19 + 2) - ((iVar19 + 2) / iVar20) * iVar20;
      *(float *)((int)puVar13 + 0xdc) = fVar7 - fVar6;
      dVar32 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar13 + 0xd4));
      if (*(float *)((int)puVar13 + 0xdc) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar15 = ABS(*(float *)(puVar13 + 0x1b));
      if (*(float *)((int)puVar13 + 0xdc) - 0.0 < 0.0) {
        fVar15 = fVar7;
      }
      dVar37 = dVar32;
      if (0.0 < fVar5) {
        lVar22 = uVar16 - 0x250;
        lVar26 = uVar16 - 0xfc;
        lVar30 = uVar16 - 0xec;
        lVar31 = 2;
        fVar5 = (fVar15 - fVar5) / (fVar15 + fVar5);
        fVar7 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x2e) = fVar5;
        *(float *)(puVar13 + 0x2d) = fVar5;
        *(float *)((int)puVar13 + 0x16c) = fVar5;
        *(float *)((int)puVar13 + 0x164) = fVar5;
        fVar5 = fVar7 * fVar7;
        *(float *)(puVar13 + 0x2d) = *(float *)(puVar13 + 0x2d) * fVar7;
        *(float *)((int)puVar13 + 0x16c) = *(float *)((int)puVar13 + 0x16c) * fVar5;
        *(float *)(puVar13 + 0x2e) = *(float *)(puVar13 + 0x2e) * fVar5 * fVar7;
        do {
          *(float *)((int)lVar22 + 0x164) = *(float *)((int)lVar22 + 0x154) * fVar5 * fVar5;
          iVar20 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0xfc;
        pfVar24 = (float *)&DAT_007358e0;
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          fVar5 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0x164) = *(float *)((int)lVar22 + 0x164) * fVar5;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar22 = lVar18;
        do {
          iVar20 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar14 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar20 + 0x164)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar6 + fVar9);
      }
      fVar3 = (float)piVar12[iVar19 * 4 + 4] - fVar3;
      fVar4 = (float)piVar12[iVar19 * 4 + 5] - fVar4;
      fVar9 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar13 + 0x19) = fVar3;
      *(float *)((int)puVar13 + 0xcc) = fVar4;
      *(float *)(puVar13 + 0x1a) = fVar9 - fVar5;
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xcc) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar13 + 0x19));
      if (*(float *)(puVar13 + 0x1a) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar5 = ABS(*(float *)((int)puVar13 + 0xcc));
      if (*(float *)(puVar13 + 0x1a) - 0.0 < 0.0) {
        fVar5 = fVar9;
      }
      fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar39 = dVar32;
      if (0.0 < fVar3) {
        lVar22 = uVar16 - 0x250;
        lVar30 = uVar16 - 0x10c;
        lVar26 = uVar16 - 0x11c;
        lVar31 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x2a) = fVar3;
        *(float *)(puVar13 + 0x29) = fVar3;
        *(float *)((int)puVar13 + 0x14c) = fVar3;
        *(float *)((int)puVar13 + 0x144) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x29) = *(float *)(puVar13 + 0x29) * fVar5;
        *(float *)((int)puVar13 + 0x14c) = *(float *)((int)puVar13 + 0x14c) * fVar3;
        *(float *)(puVar13 + 0x2a) = *(float *)(puVar13 + 0x2a) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar22 + 0x144) = *(float *)((int)lVar22 + 0x134) * fVar3 * fVar3;
          iVar19 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0x11c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          fVar3 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0x144) = *(float *)((int)lVar22 + 0x144) * fVar3;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar22 = lVar18;
        do {
          iVar19 = (int)lVar22;
          iVar20 = (int)lVar30;
          lVar22 = lVar22 + 0x10;
          lVar30 = lVar30 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar19 + 0x144)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar4 + fVar9);
      }
      dVar37 = (double)fastfunc::FastDiffRots(dVar37,dVar39);
      iVar19 = piVar11[0x10] + iVar21;
      iVar20 = piVar11[0x10] + piVar11[0xc] * 0x10;
      fVar3 = (moby->pos).y - *(float *)(iVar19 + 0x14);
      fVar5 = (moby->pos).x - *(float *)(iVar19 + 0x10);
      fVar4 = *(float *)(iVar20 + 0x14) - *(float *)(iVar19 + 0x14);
      fVar9 = *(float *)(iVar20 + 0x10) - *(float *)(iVar19 + 0x10);
      fVar6 = (moby->pos).z - *(float *)(iVar19 + 0x18);
      fVar7 = *(float *)(iVar20 + 0x18) - *(float *)(iVar19 + 0x18);
      fastfunc::FastWrapRot
                ((float)(dVar37 * (double)(SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3) /
                                          SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar4 * fVar4))),
                 (float)dVar39);
      fVar3 = *(float *)(piVar11[0x10] + iVar21 + 0x10) - (moby->pos).x;
      fVar4 = *(float *)(piVar11[0x10] + iVar21 + 0x14) - (moby->pos).y;
      dVar39 = ABS((double)fVar3);
      dVar40 = ABS((double)fVar4);
      *(float *)((int)puVar13 + 0xbc) = fVar3;
      *(float *)(puVar13 + 0x18) = fVar4;
      *(float *)((int)puVar13 + 0xc4) = (float)(dVar39 - dVar40);
      uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x18) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)((int)puVar13 + 0xbc));
      if ((double)*(float *)((int)puVar13 + 0xc4) - dVar32 < 0.0) {
        dVar37 = dVar40;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar40 = ABS((double)*(float *)(puVar13 + 0x18));
      if ((double)*(float *)((int)puVar13 + 0xc4) - dVar32 < 0.0) {
        dVar40 = dVar39;
      }
      dVar39 = dVar32;
      if (dVar32 < dVar37) {
        lVar22 = uVar16 - 0x250;
        lVar26 = uVar16 - 0x13c;
        lVar30 = uVar16 - 300;
        lVar31 = 2;
        fVar5 = (float)(dVar40 - dVar37) / (float)(dVar40 + dVar37);
        fVar9 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x26) = fVar5;
        *(float *)(puVar13 + 0x25) = fVar5;
        *(float *)((int)puVar13 + 300) = fVar5;
        *(float *)((int)puVar13 + 0x124) = fVar5;
        fVar5 = fVar9 * fVar9;
        *(float *)(puVar13 + 0x25) = *(float *)(puVar13 + 0x25) * fVar9;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar5;
        *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar5 * fVar9;
        do {
          *(float *)((int)lVar22 + 0x124) = *(float *)((int)lVar22 + 0x114) * fVar5 * fVar5;
          iVar19 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0x13c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          fVar5 = *pfVar24;
          fVar9 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0x124) = *(float *)((int)lVar22 + 0x124) * fVar5;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar9;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar22 = 2;
        dVar37 = dVar32;
        do {
          iVar19 = (int)lVar18;
          iVar20 = (int)lVar30;
          lVar18 = lVar18 + 0x10;
          lVar30 = lVar30 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar19 + 0x124)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar39 = (double)((float)(dVar37 + 0.7853981852531433) * fVar4 + fVar3);
      }
      fVar3 = DAT_00841f58 * 0.017453292 * DAT_0071f418;
      mobyutil::OrganicDeltAng
                ((float)dVar39,fVar3,fVar3,DAT_00841f5c * 0.017453292 * mobyutil::g_FrameTime,
                 &(moby->rotation).z,0x840000,(float *)(piVar11 + 0xa1));
      fVar15 = mobyutil::g_FrameTime;
      dVar39 = (double)(moby->pos).y;
      iVar21 = piVar11[0x10] + iVar21;
      dVar37 = (double)(moby->pos).x;
      fVar9 = *(float *)(iVar21 + 0x14);
      fVar6 = *(float *)(iVar21 + 0x10);
      fVar3 = (float)(dVar39 - (double)fVar9);
      fVar4 = (float)(dVar37 - (double)fVar6);
      dVar40 = (double)(moby->pos).z;
      fVar7 = *(float *)(iVar21 + 0x18);
      fVar5 = (float)(dVar40 - (double)fVar7);
      dVar45 = (double)*(float *)(iVar21 + 0x1c);
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
        piVar11[0xc] = iVar29;
        dVar37 = (double)(moby->pos).x;
        dVar39 = (double)(moby->pos).y;
        dVar40 = (double)(moby->pos).z;
      }
      dVar42 = (double)(float)((double)fVar9 - dVar39);
      dVar44 = (double)(float)((double)fVar6 - dVar37);
      dVar41 = (double)(float)((double)fVar7 - dVar40);
      dVar33 = (double)SQRT((float)(dVar41 * dVar41 +
                                   (double)(float)(dVar44 * dVar44 +
                                                  (double)(float)(dVar42 * dVar42))));
      dVar38 = dVar41;
      dVar43 = dVar42;
      dVar34 = dVar44;
      if (((double)(DAT_00841f4c * fVar15) < dVar33) &&
         (dVar38 = dVar32, dVar43 = dVar32, dVar34 = dVar32, dVar33 != dVar32)) {
        dVar34 = (double)(float)((double)(DAT_00841f4c * fVar15) / dVar33);
        dVar38 = (double)(float)(dVar41 * dVar34);
        dVar43 = (double)(float)(dVar42 * dVar34);
        dVar34 = (double)(float)(dVar44 * dVar34);
      }
      (moby->pos).x = (float)(dVar37 + dVar34);
      (moby->pos).y = (float)(dVar39 + dVar43);
      (moby->pos).z = (float)(dVar40 + dVar38);
      mobyupdate_helpers::M444_00385660(lVar17);
      iVar19 = fastfunc::FastDecTimerS32(piVar11 + 0xa2);
      if (iVar19 != 0) {
        dVar37 = (double)mobyutil::MB_randRangeFloat(300.0,600.0);
        iVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
        piVar11[0xa2] = iVar19;
        mobyfunc::GetBonePosition(piVar11[0x28],1,uVar16 - 0x1d0);
        uVar35 = mobyutil::MB_randRangeFloat(-0.5235988,-0.2617994);
        uVar36 = mobyutil::MB_randRot();
        fVar4 = mobyutil::g_FrameTime;
        fVar3 = DAT_00841f4c * 2.0;
        dVar40 = (double)SQRT((float)(dVar38 * dVar38 +
                                     (double)(float)(dVar34 * dVar34 +
                                                    (double)(float)(dVar43 * dVar43))));
        *(float *)((int)puVar13 + 0xac) = (float)dVar45;
        dVar39 = (double)(float)((double)(fVar3 * fVar4) / dVar40);
        dVar37 = dVar32;
        if (dVar32 - dVar40 < 0.0) {
          dVar37 = (double)(float)(dVar34 * dVar39);
        }
        dVar45 = dVar32;
        if (dVar32 - dVar40 < 0.0) {
          dVar45 = (double)(float)(dVar43 * dVar39);
        }
        dVar33 = dVar32;
        if (dVar32 - dVar40 < 0.0) {
          dVar33 = (double)(float)(dVar38 * dVar39);
        }
        if (dVar40 - dVar32 < 0.0) {
          dVar37 = (double)(float)(dVar34 * dVar39);
        }
        if (dVar40 - dVar32 < 0.0) {
          dVar45 = (double)(float)(dVar43 * dVar39);
        }
        if (dVar40 - dVar32 < 0.0) {
          dVar33 = (double)(float)(dVar38 * dVar39);
        }
        *(float *)(puVar13 + 0x14) = (float)dVar37;
        *(float *)((int)puVar13 + 0xa4) = (float)dVar45;
        *(float *)(puVar13 + 0x15) = (float)dVar33;
        iVar19 = FUN_00375430(uVar35,uVar36,uVar16 - 0x1d0,0);
        if (iVar19 != 0) {
          uVar8 = *(undefined4 *)(piVar11[0x28] + 0x48);
          *(undefined4 *)(iVar19 + 0x44) = 0;
          *(undefined4 *)(iVar19 + 0x48) = uVar8;
          *(undefined1 *)(iVar19 + 0x20) = 5;
        }
      }
    }
    else if (uVar1 == '\x01') {
      piVar12 = (int *)piVar11[4];
      iVar19 = *piVar12;
      iVar20 = *piVar11 + iVar19 + (int)*(char *)(piVar11 + 1);
      iVar20 = iVar20 - (iVar20 / iVar19) * iVar19;
      iVar19 = piVar11[0xa0];
      fVar3 = (float)piVar12[iVar20 * 4 + 4] - (moby->pos).x;
      fVar4 = (float)piVar12[iVar20 * 4 + 5] - (moby->pos).y;
      fVar9 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar13 + 0xec) = fVar3;
      *(float *)(puVar13 + 0x1e) = fVar4;
      pMVar28 = MobyInstance + iVar19;
      *(float *)((int)puVar13 + 0xf4) = fVar9 - fVar5;
      dVar32 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0xec) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1d) & 4;
      uVar23 = uVar25 << 2 | 0x735900;
      fVar3 = ABS(*(float *)((int)puVar13 + 0xec));
      if (*(float *)((int)puVar13 + 0xf4) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)((int)uVar23 + 4);
      fVar6 = ABS(*(float *)(puVar13 + 0x1e));
      if (*(float *)((int)puVar13 + 0xf4) - 0.0 < 0.0) {
        fVar6 = fVar9;
      }
      dVar37 = dVar32;
      if (0.0 < fVar3) {
        lVar22 = uVar16 - 0x250;
        lVar26 = uVar16 - 0xbc;
        lVar30 = uVar16 - 0xac;
        lVar31 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar9 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x36) = fVar3;
        *(float *)(puVar13 + 0x35) = fVar3;
        *(float *)((int)puVar13 + 0x1ac) = fVar3;
        *(float *)((int)puVar13 + 0x1a4) = fVar3;
        fVar3 = fVar9 * fVar9;
        *(float *)(puVar13 + 0x35) = *(float *)(puVar13 + 0x35) * fVar9;
        *(float *)((int)puVar13 + 0x1ac) = *(float *)((int)puVar13 + 0x1ac) * fVar3;
        *(float *)(puVar13 + 0x36) = *(float *)(puVar13 + 0x36) * fVar3 * fVar9;
        do {
          *(float *)((int)lVar22 + 0x1a4) = *(float *)((int)lVar22 + 0x194) * fVar3 * fVar3;
          iVar19 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0xbc;
        uVar23 = ZEXT48(&DAT_007358e0);
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          pfVar24 = (float *)uVar23;
          fVar3 = pfVar24[1];
          uVar23 = uVar23 + 8;
          *(float *)((int)lVar22 + 0x1a4) = *(float *)((int)lVar22 + 0x1a4) * *pfVar24;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar3;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar22 = lVar18;
        do {
          iVar19 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar21 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar19 + 0x1a4)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar5 + fVar4);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar37,0x3f70624de0000000,0x3fd3333340000000,0x3f947ae140000000,lVar17,uVar23,
                 piVar11 + 0xa1);
      mobyupdate_helpers::M444_00385a50(lVar17);
      mobyupdate_helpers::M444_00385660(lVar17);
      dVar39 = (double)(moby->pos).y;
      iVar19 = piVar11[4] + iVar20 * 0x10;
      dVar37 = (double)(moby->pos).x;
      dVar40 = (double)(moby->pos).z;
      fVar9 = *(float *)(iVar19 + 0x14);
      fVar6 = *(float *)(iVar19 + 0x10);
      fVar3 = (float)(dVar39 - (double)fVar9);
      fVar4 = (float)(dVar37 - (double)fVar6);
      fVar7 = *(float *)(iVar19 + 0x18);
      fVar5 = (float)(dVar40 - (double)fVar7);
      dVar45 = (double)*(float *)(iVar19 + 0x1c);
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
        *piVar11 = iVar20;
        dVar37 = (double)(moby->pos).x;
        dVar39 = (double)(moby->pos).y;
        dVar40 = (double)(moby->pos).z;
      }
      dVar42 = (double)(float)((double)fVar9 - dVar39);
      dVar44 = (double)(float)((double)fVar6 - dVar37);
      dVar41 = (double)(float)((double)fVar7 - dVar40);
      dVar33 = (double)SQRT((float)(dVar41 * dVar41 +
                                   (double)(float)(dVar44 * dVar44 +
                                                  (double)(float)(dVar42 * dVar42))));
      dVar38 = dVar41;
      dVar43 = dVar42;
      dVar34 = dVar44;
      if (((double)(DAT_00841f4c * mobyutil::g_FrameTime) < dVar33) &&
         (dVar38 = dVar32, dVar43 = dVar32, dVar34 = dVar32, dVar33 != dVar32)) {
        dVar34 = (double)(float)((double)(DAT_00841f4c * mobyutil::g_FrameTime) / dVar33);
        dVar38 = (double)(float)(dVar41 * dVar34);
        dVar43 = (double)(float)(dVar42 * dVar34);
        dVar34 = (double)(float)(dVar44 * dVar34);
      }
      cVar2 = moby->setByGroup;
      (moby->pos).x = (float)(dVar37 + dVar34);
      (moby->pos).y = (float)(dVar39 + dVar43);
      (moby->pos).z = (float)(dVar40 + dVar38);
      if (cVar2 != '\0') {
        moby->setByGroup = '\0';
        uVar25 = mobyutil::MB_randInt(0xff);
        if ((uVar25 & 1) == 0) {
          mobyfunc::GetBonePosition(piVar11[0x28],1,uVar16 - 0x1f0);
        }
        else {
          mobyfunc::GetBonePosition(piVar11[0x24],1,uVar16 - 0x1f0);
        }
        uVar35 = mobyutil::MB_randRangeFloat(0.17453292,0.5235988);
        fVar3 = (pMVar28->pos).x - (moby->pos).x;
        fVar4 = (pMVar28->pos).y - (moby->pos).y;
        dVar40 = ABS((double)fVar3);
        dVar39 = ABS((double)fVar4);
        *(float *)(puVar13 + 0x1c) = fVar3;
        *(float *)((int)puVar13 + 0xe4) = fVar4;
        *(float *)(puVar13 + 0x1d) = (float)(dVar40 - dVar39);
        uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x1c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x1d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xe4) >> 0x1d) & 4;
        dVar37 = ABS((double)*(float *)(puVar13 + 0x1c));
        if ((double)*(float *)(puVar13 + 0x1d) - dVar32 < 0.0) {
          dVar37 = dVar39;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar39 = ABS((double)*(float *)((int)puVar13 + 0xe4));
        if ((double)*(float *)(puVar13 + 0x1d) - dVar32 < 0.0) {
          dVar39 = dVar40;
        }
        fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar40 = dVar32;
        if (dVar32 < dVar37) {
          lVar17 = uVar16 - 0x250;
          lVar26 = uVar16 - 0xcc;
          lVar22 = uVar16 - 0xdc;
          lVar30 = 2;
          fVar5 = (float)(dVar39 - dVar37) / (float)(dVar39 + dVar37);
          fVar9 = fVar5 * fVar5;
          *(float *)(puVar13 + 0x32) = fVar5;
          *(float *)(puVar13 + 0x31) = fVar5;
          *(float *)((int)puVar13 + 0x18c) = fVar5;
          *(float *)((int)puVar13 + 0x184) = fVar5;
          fVar5 = fVar9 * fVar9;
          *(float *)(puVar13 + 0x31) = *(float *)(puVar13 + 0x31) * fVar9;
          *(float *)((int)puVar13 + 0x18c) = *(float *)((int)puVar13 + 0x18c) * fVar5;
          *(float *)(puVar13 + 0x32) = *(float *)(puVar13 + 0x32) * fVar5 * fVar9;
          do {
            *(float *)((int)lVar17 + 0x184) = *(float *)((int)lVar17 + 0x174) * fVar5 * fVar5;
            iVar19 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar16 - 0xdc;
          pfVar24 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar26;
          do {
            fVar5 = *pfVar24;
            fVar9 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar17 + 0x184) = *(float *)((int)lVar17 + 0x184) * fVar5;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar9;
            lVar22 = lVar22 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar17 = 2;
          dVar37 = dVar32;
          do {
            iVar19 = (int)lVar18;
            iVar20 = (int)lVar26;
            lVar18 = lVar18 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar19 + 0x184)) +
                              *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                             *(float *)(iVar20 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar40 = (double)((float)(dVar37 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar37 = (double)fastfunc::FastWrapRot((float)dVar40,3.1415927);
        dVar39 = (double)mobyutil::MB_randRangeFloat(-0.2617994,0.7853982);
        dVar37 = (double)fastfunc::FastWrapRot((float)dVar37,(float)dVar39);
        fVar3 = mobyutil::g_FrameTime;
        if ((((dVar37 <= dVar32) || (dVar39 = 0.3400000035762787, 0.3400000035762787 <= dVar37)) &&
            (dVar39 = dVar37, dVar37 <= dVar32)) && (-0.3400000035762787 < dVar37)) {
          dVar39 = -0.3400000035762787;
        }
        fVar4 = DAT_00841f4c * 2.0;
        dVar33 = (double)SQRT((float)(dVar38 * dVar38 +
                                     (double)(float)(dVar34 * dVar34 +
                                                    (double)(float)(dVar43 * dVar43))));
        *(float *)((int)puVar13 + 0x8c) = (float)dVar45;
        dVar40 = (double)(float)((double)(fVar4 * fVar3) / dVar33);
        dVar37 = dVar32;
        if (dVar32 - dVar33 < 0.0) {
          dVar37 = (double)(float)(dVar34 * dVar40);
        }
        dVar45 = dVar32;
        if (dVar32 - dVar33 < 0.0) {
          dVar45 = (double)(float)(dVar43 * dVar40);
        }
        dVar41 = dVar32;
        if (dVar32 - dVar33 < 0.0) {
          dVar41 = (double)(float)(dVar38 * dVar40);
        }
        if (dVar33 - dVar32 < 0.0) {
          dVar37 = (double)(float)(dVar34 * dVar40);
        }
        if (dVar33 - dVar32 < 0.0) {
          dVar45 = (double)(float)(dVar43 * dVar40);
        }
        if (dVar33 - dVar32 < 0.0) {
          dVar41 = (double)(float)(dVar38 * dVar40);
        }
        *(float *)(puVar13 + 0x10) = (float)dVar37;
        *(float *)((int)puVar13 + 0x84) = (float)dVar45;
        *(float *)(puVar13 + 0x11) = (float)dVar41;
        iVar19 = FUN_00375430(uVar35,dVar39,uVar16 - 0x1f0,pMVar28);
        iVar20 = 0;
        *(float *)(iVar19 + 0x2c) = *(float *)(*(int *)(iVar19 + 0x24) + 0x24) * 0.2;
        pvVar27 = pMVar28->pVar;
        do {
          if (*(int *)((int)pvVar27 + 0x60) == 0) {
            *(int *)((int)pMVar28->pVar + iVar20 * 4 + 0x60) = iVar19;
            return;
          }
          iVar20 = iVar20 + 1;
          pvVar27 = (void *)((int)pvVar27 + 4);
        } while (iVar20 < 8);
      }
    }
    else if (uVar1 == '\0') {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        piVar11[4] = (int)Splines[piVar11[5]];
        piVar11[0x10] = (int)Splines[piVar11[0x11]];
        dVar32 = (double)mobyutil::MB_randRangeFloat(300.0,600.0);
        iVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar32 * (double)animationSpeed));
        iVar19 = piVar11[0x10];
        piVar11[0xa2] = iVar20;
        (moby->pos).x = *(f32 *)(iVar19 + 0x10);
        (moby->pos).y = *(f32 *)(iVar19 + 0x14);
        (moby->pos).z = *(f32 *)(iVar19 + 0x18);
        (moby->pos).w = *(f32 *)(iVar19 + 0x1c);
        mobyupdate_helpers::M444_00384adc(lVar17);
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        moby->state = '\x02';
        fVar3 = *(float *)(piVar11[0x10] + 0x20) - fVar3;
        fVar4 = *(float *)(piVar11[0x10] + 0x24) - fVar4;
        fVar5 = ABS(fVar3);
        fVar9 = ABS(fVar4);
        *(float *)(puVar13 + 0x1f) = fVar3;
        *(float *)((int)puVar13 + 0xfc) = fVar4;
        *(float *)(puVar13 + 0x20) = fVar5 - fVar9;
        fVar3 = 0.0;
        MVar10 = moby->modeBits;
        uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar13 + 0x1f));
        if (*(float *)(puVar13 + 0x20) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar6 = ABS(*(float *)((int)puVar13 + 0xfc));
        if (*(float *)(puVar13 + 0x20) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        if (0.0 < fVar4) {
          lVar17 = uVar16 - 0x250;
          lVar22 = uVar16 - 0x9c;
          lVar26 = uVar16 - 0x8c;
          lVar30 = 2;
          fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
          fVar6 = fVar4 * fVar4;
          *(float *)(puVar13 + 0x3a) = fVar4;
          *(float *)(puVar13 + 0x39) = fVar4;
          *(float *)((int)puVar13 + 0x1cc) = fVar4;
          *(float *)((int)puVar13 + 0x1c4) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar13 + 0x39) = *(float *)(puVar13 + 0x39) * fVar6;
          *(float *)((int)puVar13 + 0x1cc) = *(float *)((int)puVar13 + 0x1cc) * fVar4;
          *(float *)(puVar13 + 0x3a) = *(float *)(puVar13 + 0x3a) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar17 + 0x1c4) = *(float *)((int)lVar17 + 0x1b4) * fVar4 * fVar4;
            iVar19 = (int)lVar22;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar16 - 0x9c;
          pfVar24 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar26;
          do {
            fVar4 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar17 + 0x1c4) = *(float *)((int)lVar17 + 0x1c4) * fVar4;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar17 = 2;
          do {
            iVar19 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar20 = (int)lVar26;
            lVar26 = lVar26 + 0x10;
            fVar3 = fVar3 + *(float *)(iVar19 + 0x1c4) + *(float *)(iVar20 + 4) +
                    *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          fVar3 = (fVar3 + 0.7853982) * fVar9 + fVar5;
        }
        (moby->rotation).z = fVar3;
        moby->modeBits = MVar10 | CAN_BE_DAMAGED;
      }
    }
  }
  return;
}



//==== 003874d0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M444_003874d0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M444_003874d0(void)

{
  DAT_00841fac = 0x10000;
  return;
}



//==== 003874e8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_45(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 45 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_45(MobyInstance *moby)

{
  return moby;
}



//==== 003874f0  ns=mobyupdate_helpers  size=0x4c
// sig: undefined M452_003874f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M452_003874f0(int param_1)

{
  MobyInstance *pMVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  pMVar1 = MobyInstance;
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = 0;
  piVar2 = (int *)(iVar3 + 0x158);
  do {
    if (pMVar1[*(int *)(iVar3 + 0x130)].oClass == TREE) {
      *piVar2 = (int)(pMVar1 + *(int *)(iVar3 + 0x130));
      piVar2 = piVar2 + 1;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 10);
  return;
}



//==== 00387588  ns=mobyupdate_unsorted  size=0x169c
// sig: undefined UpdateMoby_452(MobyInstance * moby)
// callers(0): 
// callees(15): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 00110808 mobyutil::MB_FindMobyByVarId; 00119a18 mobyfunc::DoManipulator; 00240f38 mobyupdate_helpers::M16_00240f38

/* Moby 452 */

void mobyupdate_unsorted::UpdateMoby_452(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  f32 fVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  bool bVar11;
  uint uVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar19;
  byte bVar22;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  void *pvVar20;
  uint uVar21;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  float *pfVar27;
  longlong lVar26;
  void *pvVar28;
  int *piVar29;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar30;
  ulonglong unaff_r30;
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
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0x1f0;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar14;
  puVar10[0x40] = in_LR;
  puVar10[0x38] = in_f26;
  puVar10[0x39] = in_f27;
  puVar10[0x3a] = in_f28;
  puVar10[0x3b] = in_f29;
  puVar10[0x3c] = in_f30;
  puVar10[0x3d] = in_f31;
  puVar10[0x37] = unaff_r31;
  puVar10[0x34] = unaff_r28;
  pvVar7 = moby->pVar;
  puVar10[0x36] = unaff_r30;
  puVar10[0x35] = unaff_r29;
  puVar10[0x33] = unaff_r27;
  puVar10[0x32] = unaff_r26;
  puVar10[0x31] = unaff_r25;
  puVar10[0x30] = unaff_r24;
  mobyfunc::DoManipulator(0x4004000000000000,moby,1,(Manipulator *)((int)pvVar7 + 0x260));
  if ((moby->enabled != '\0') &&
     (fVar5 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < 29.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar15);
    moby->shadow = '\x17';
  }
  iVar19 = mobyutil::MB_damage(lVar15,0x210000,0);
  bVar22 = moby->state;
  if ((iVar19 != 0) && (bVar22 != 8)) {
    iVar19 = 0;
    pvVar28 = pvVar7;
    do {
      iVar24 = *(int *)((int)pvVar28 + 0x158);
      if ((iVar24 != 0) && (*(char *)(iVar24 + 0x20) == '\x03')) {
        *(undefined1 *)(iVar24 + 0x20) = 1;
      }
      iVar19 = iVar19 + 1;
      pvVar28 = (void *)((int)pvVar28 + 4);
    } while (iVar19 < 0x32);
    *(undefined4 *)((int)pvVar7 + 0x80) = 0x3c03126f;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
    fVar5 = mobyutil::g_FrameTime;
    *(float *)((int)pvVar7 + 0x88) = mobyutil::g_FrameTime * 8.0;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 1;
    *(float *)((int)pvVar7 + 0x8c) = fVar5 * 10.0;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    fVar4 = (moby->pos).y - g_heroPosition.y;
    fVar1 = ABS(fVar5);
    fVar6 = ABS(fVar4);
    *(float *)(puVar10 + 0x18) = fVar5;
    *(float *)((int)puVar10 + 0xc4) = fVar4;
    *(float *)(puVar10 + 0x19) = fVar1 - fVar6;
    dVar34 = 0.0;
    uVar25 = (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1d) & 4;
    uVar16 = uVar25 << 2;
    fVar5 = ABS(*(float *)(puVar10 + 0x18));
    if (*(float *)(puVar10 + 0x19) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar16);
    fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    fVar2 = ABS(*(float *)((int)puVar10 + 0xc4));
    if (*(float *)(puVar10 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    if (0.0 < fVar5) {
      lVar17 = uVar14 - 0x1e0;
      lVar26 = uVar14 - 0x94;
      lVar23 = uVar14 - 0xa4;
      lVar31 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar1 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x2b) = fVar5;
      *(float *)(puVar10 + 0x2a) = fVar5;
      *(float *)((int)puVar10 + 0x154) = fVar5;
      *(float *)((int)puVar10 + 0x14c) = fVar5;
      fVar5 = fVar1 * fVar1;
      *(float *)(puVar10 + 0x2a) = *(float *)(puVar10 + 0x2a) * fVar1;
      *(float *)((int)puVar10 + 0x154) = *(float *)((int)puVar10 + 0x154) * fVar5;
      *(float *)(puVar10 + 0x2b) = *(float *)(puVar10 + 0x2b) * fVar5 * fVar1;
      do {
        *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x13c) * fVar5 * fVar5;
        iVar19 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar26 = uVar14 - 0xa4;
      uVar16 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar23 = lVar26;
      do {
        pfVar27 = (float *)uVar16;
        fVar5 = pfVar27[1];
        uVar16 = uVar16 + 8;
        *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x14c) * *pfVar27;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
        lVar23 = lVar23 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar23 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar24 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar19 + 0x14c)) +
                          *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) + *(float *)(iVar24 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar4);
    }
    mobyutil::MB_StartKick(dVar34,lVar15,(int)pvVar7 + 0x70,uVar16,4,1,0);
    *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
    mobyutil::MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
    bVar22 = 8;
    moby->state = '\b';
  }
  moby->damage = -1;
  pMVar13 = MobyInstance;
  if (bVar22 < 4) {
    if (bVar22 == 0) {
      iVar19 = *(int *)((int)pvVar7 + 0x114);
      pSVar9 = Splines[*(int *)((int)pvVar7 + 0xe4)];
      *(Spline **)((int)pvVar7 + 0xe0) = pSVar9;
      (moby->pos).x = pSVar9->points[0].x;
      (moby->pos).y = pSVar9->points[0].y;
      (moby->pos).z = pSVar9->points[0].z;
      fVar5 = pSVar9->points[0].w;
      *(undefined4 *)((int)pvVar7 + 0xd0) = 1;
      (moby->pos).w = fVar5;
      if (-1 < iVar19) {
        *(undefined4 *)((int)pvVar7 + 0x100) = 1;
        *(Spline **)((int)pvVar7 + 0x110) = Splines[iVar19];
      }
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar7 + 0x29) = 0;
      uVar21 = g_heroMobyPtr->color;
      uVar12 = g_heroMobyPtr->light;
      *(undefined4 *)((int)pvVar7 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar7 + 0x48) = 0;
      *(undefined4 *)((int)pvVar7 + 0x44) = 0;
      *(undefined4 *)((int)pvVar7 + 0x40) = 0;
      moby->color = uVar21;
      moby->light = uVar12;
      moby->state = '\x01';
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(lVar15,1,0,0);
      }
    }
    else if (bVar22 < 2) {
      pSVar9 = Splines[*(int *)((int)pvVar7 + 0x220)];
      fVar5 = g_heroPosition.y - pSVar9->points[0].y;
      fVar4 = g_heroPosition.x - pSVar9->points[0].x;
      fVar6 = g_heroPosition.z - pSVar9->points[0].z;
      if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < 24.0) {
        pvVar28 = moby->pVar;
        iVar19 = 0;
        piVar29 = (int *)((int)pvVar28 + 0x158);
        do {
          if (pMVar13[*(int *)((int)pvVar28 + 0x130)].oClass == TREE) {
            *piVar29 = (int)(pMVar13 + *(int *)((int)pvVar28 + 0x130));
            piVar29 = piVar29 + 1;
          }
          iVar19 = iVar19 + 1;
          pvVar28 = (void *)((int)pvVar28 + 4);
        } while (iVar19 < 10);
        moby->state = '\x05';
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(lVar15,3,0,6);
        }
      }
    }
    else if (bVar22 < 3) {
      piVar29 = *(int **)((int)pvVar7 + 0xe0);
      iVar19 = *piVar29;
      iVar24 = *(int *)((int)pvVar7 + 0xd0) + iVar19 + (int)*(char *)((int)pvVar7 + 0xd4);
      iVar24 = iVar24 - (iVar24 / iVar19) * iVar19;
      fVar5 = (float)piVar29[iVar24 * 4 + 4] - (moby->pos).x;
      fVar4 = (float)piVar29[iVar24 * 4 + 5] - (moby->pos).y;
      fVar1 = ABS(fVar5);
      fVar6 = ABS(fVar4);
      *(float *)((int)puVar10 + 0xb4) = fVar5;
      *(float *)(puVar10 + 0x17) = fVar4;
      *(float *)((int)puVar10 + 0xbc) = fVar1 - fVar6;
      dVar34 = 0.0;
      uVar16 = (ulonglong)(*(uint *)((int)puVar10 + 0xb4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xbc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x17) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar10 + 0xb4));
      if (*(float *)((int)puVar10 + 0xbc) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar2 = ABS(*(float *)(puVar10 + 0x17));
      if (*(float *)((int)puVar10 + 0xbc) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      dVar33 = dVar34;
      if (0.0 < fVar5) {
        lVar17 = uVar14 - 0x1e0;
        lVar23 = uVar14 - 0xc4;
        lVar26 = uVar14 - 0xb4;
        lVar31 = 2;
        fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x27) = fVar5;
        *(float *)(puVar10 + 0x26) = fVar5;
        *(float *)((int)puVar10 + 0x134) = fVar5;
        *(float *)((int)puVar10 + 300) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar10 + 0x26) = *(float *)(puVar10 + 0x26) * fVar1;
        *(float *)((int)puVar10 + 0x134) = *(float *)((int)puVar10 + 0x134) * fVar5;
        *(float *)(puVar10 + 0x27) = *(float *)(puVar10 + 0x27) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 0x11c) * fVar5 * fVar5;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar14 - 0xc4;
        pfVar27 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar26;
        do {
          fVar5 = *pfVar27;
          fVar1 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 300) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar1;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar30 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 300)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar6 + fVar4);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,
                 &DAT_0038753c,(int)pvVar7 + 0x224);
      iVar19 = *(int *)((int)pvVar7 + 0xe0) + iVar24 * 0x10;
      if (*(int *)(iVar19 + 0x1c) == 0) {
        moby->state = '\x03';
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar15,2,0,6);
        }
      }
      else {
        dVar35 = (double)(moby->pos).y;
        dVar37 = (double)(moby->pos).x;
        fVar4 = (float)((double)*(float *)(iVar19 + 0x14) - dVar35);
        fVar6 = (float)((double)*(float *)(iVar19 + 0x10) - dVar37);
        dVar41 = (double)(moby->pos).z;
        fVar1 = (float)((double)*(float *)(iVar19 + 0x18) - dVar41);
        dVar42 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar4 * fVar4);
        fVar5 = (float)((double)(DAT_00841fd0 * mobyutil::g_FrameTime) / dVar42);
        dVar33 = dVar34;
        if (dVar34 - dVar42 < 0.0) {
          dVar33 = (double)(fVar4 * fVar5);
        }
        dVar32 = dVar34;
        if (dVar34 - dVar42 < 0.0) {
          dVar32 = (double)(fVar6 * fVar5);
        }
        dVar38 = dVar34;
        if (dVar34 - dVar42 < 0.0) {
          dVar38 = (double)(fVar1 * fVar5);
        }
        if (dVar42 - dVar34 < 0.0) {
          dVar33 = (double)(fVar4 * fVar5);
        }
        if (dVar42 - dVar34 < 0.0) {
          dVar32 = (double)(fVar6 * fVar5);
        }
        if (dVar42 - dVar34 < 0.0) {
          dVar38 = (double)(fVar1 * fVar5);
        }
        fVar5 = (float)(dVar35 + dVar33);
        fVar4 = (float)(dVar37 + dVar32);
        fVar6 = (float)(dVar41 + dVar38);
        fVar1 = (float)((double)fVar5 - (double)*(float *)(iVar19 + 0x14));
        fVar2 = (float)((double)fVar4 - (double)*(float *)(iVar19 + 0x10));
        fVar3 = (float)((double)fVar6 - (double)*(float *)(iVar19 + 0x18));
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
          *(int *)((int)pvVar7 + 0xd0) = iVar24;
        }
      }
    }
    else {
      moby->unk58 = 3.0;
      pMVar13 = MobyInstance;
      if ((moby->field43_0x70 & 2U) != 0) {
        iVar24 = 0;
        pvVar28 = moby->pVar;
        iVar19 = 0;
        piVar29 = (int *)((int)pvVar28 + 0x158);
        do {
          if (pMVar13[*(int *)((int)pvVar28 + 0x130)].oClass == TREE) {
            *piVar29 = (int)(pMVar13 + *(int *)((int)pvVar28 + 0x130));
            piVar29 = piVar29 + 1;
          }
          iVar19 = iVar19 + 1;
          pvVar28 = (void *)((int)pvVar28 + 4);
          pvVar20 = pvVar7;
        } while (iVar19 < 10);
        do {
          iVar19 = *(int *)((int)pvVar20 + 0x158);
          if ((iVar19 != 0) && (*(byte *)(iVar19 + 0x20) < 0x80)) {
            *(undefined1 *)(iVar19 + 0x20) = 3;
          }
          iVar24 = iVar24 + 1;
          pvVar20 = (void *)((int)pvVar20 + 4);
        } while (iVar24 < 0x32);
        moby->state = '\x04';
        if (moby->animationId != '\x06') {
          mobyutil::MB_SetAnimation(lVar15,6,0,6);
        }
        moby->unk58 = 1.0;
      }
    }
  }
  else if (bVar22 < 7) {
    if (bVar22 < 5) {
      iVar19 = 0;
      iVar24 = 0;
      dVar33 = 4.0;
      dVar34 = 2.0;
      pvVar28 = pvVar7;
      do {
        iVar30 = *(int *)((int)pvVar28 + 0x158);
        if ((iVar30 != 0) && (*(byte *)(iVar30 + 0x20) < 0x80)) {
          mobyfunc::GetBonePosition(lVar15,0,uVar14 - 0x170);
          dVar35 = (double)mobyutil::g_FrameTime;
          *(float *)(puVar10 + 0xe) = *(float *)(puVar10 + 0x10) - *(float *)(iVar30 + 0x10);
          *(float *)((int)puVar10 + 0x74) =
               *(float *)((int)puVar10 + 0x84) - *(float *)(iVar30 + 0x14);
          fVar5 = *(float *)(iVar30 + 0x18);
          *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)((int)puVar10 + 0x8c);
          *(float *)(puVar10 + 0xf) = *(float *)(puVar10 + 0x11) - fVar5;
          mobyutil::ClampVec3Magnitude((double)(float)(dVar35 * dVar33),(Vec4 *)(puVar10 + 0xe));
          iVar24 = iVar24 + 1;
          *(float *)(iVar30 + 0x10) = *(float *)(iVar30 + 0x10) + *(float *)(puVar10 + 0xe);
          *(float *)(iVar30 + 0x14) = *(float *)(iVar30 + 0x14) + *(float *)((int)puVar10 + 0x74);
          *(float *)(iVar30 + 0x18) = *(float *)(iVar30 + 0x18) + *(float *)(puVar10 + 0xf);
          if (SQRT(*(float *)(puVar10 + 0xf) * *(float *)(puVar10 + 0xf) +
                   *(float *)(puVar10 + 0xe) * *(float *)(puVar10 + 0xe) +
                   *(float *)((int)puVar10 + 0x74) * *(float *)((int)puVar10 + 0x74)) <
              (float)((double)mobyutil::g_FrameTime * dVar34)) {
            *(undefined1 *)(iVar30 + 0x20) = 4;
            iVar30 = *(int *)((int)pvVar7 + 0x22c);
            *(undefined4 *)((int)pvVar28 + 0x158) = 0;
            *(int *)((int)pvVar7 + 0x22c) = iVar30 + 1;
          }
        }
        iVar19 = iVar19 + 1;
        pvVar28 = (void *)((int)pvVar28 + 4);
      } while (iVar19 < 0x32);
      if ((iVar24 == 0) && (moby->state = '\x05', moby->animationId != '\x03')) {
        mobyutil::MB_SetAnimation(lVar15,3,0,6);
      }
    }
    else if (bVar22 < 6) {
      piVar29 = *(int **)((int)pvVar7 + 0xe0);
      iVar19 = *piVar29;
      iVar24 = *(int *)((int)pvVar7 + 0xd0) + iVar19 + (int)*(char *)((int)pvVar7 + 0xd4);
      iVar24 = iVar24 - (iVar24 / iVar19) * iVar19;
      fVar5 = (float)piVar29[iVar24 * 4 + 4] - (moby->pos).x;
      fVar4 = (float)piVar29[iVar24 * 4 + 5] - (moby->pos).y;
      pfVar27 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar1 = ABS(fVar5);
      fVar6 = ABS(fVar4);
      *(float *)(puVar10 + 0x15) = fVar5;
      *(float *)((int)puVar10 + 0xac) = fVar4;
      *(float *)(puVar10 + 0x16) = fVar1 - fVar6;
      dVar34 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar10 + 0x15));
      if (*(float *)(puVar10 + 0x16) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar2 = ABS(*(float *)((int)puVar10 + 0xac));
      if (*(float *)(puVar10 + 0x16) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      dVar33 = dVar34;
      if (0.0 < fVar5) {
        lVar17 = uVar14 - 0x1e0;
        lVar23 = uVar14 - 0xe4;
        lVar26 = uVar14 - 0xd4;
        lVar31 = 2;
        fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x23) = fVar5;
        *(float *)(puVar10 + 0x22) = fVar5;
        *(float *)((int)puVar10 + 0x114) = fVar5;
        *(float *)((int)puVar10 + 0x10c) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar10 + 0x22) = *(float *)(puVar10 + 0x22) * fVar1;
        *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar5;
        *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0xfc) * fVar5 * fVar5;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar14 - 0xe4;
        pfVar27 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar26;
        do {
          fVar5 = *pfVar27;
          fVar1 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0x10c) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar1;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar30 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0x10c)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar6 + fVar4);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,pfVar27,
                 (int)pvVar7 + 0x224);
      dVar35 = 6.0;
      iVar19 = *(int *)((int)pvVar7 + 0xe0) + iVar24 * 0x10;
      dVar33 = 20.5;
      iVar30 = 0;
      bVar11 = false;
      dVar42 = (double)*(float *)(iVar19 + 0x10);
      dVar41 = (double)*(float *)(iVar19 + 0x14);
      dVar37 = (double)*(float *)(iVar19 + 0x18);
      pvVar28 = pvVar7;
      do {
        iVar19 = *(int *)((int)pvVar28 + 0x158);
        if ((iVar19 != 0) && (*(byte *)(iVar19 + 0x20) < 0x80)) {
          fVar5 = (moby->pos).y - *(float *)(iVar19 + 0x14);
          fVar4 = (moby->pos).x - *(float *)(iVar19 + 0x10);
          if ((double)SQRT(fVar4 * fVar4 + fVar5 * fVar5) < dVar35) {
            if (moby->animationId != '\x06') {
              puVar10[0x2e] = (longlong)(int)((double)animationSpeed * dVar33);
              mobyutil::MB_SetAnimation(lVar15,6,0,*(undefined4 *)((int)puVar10 + 0x174));
              iVar19 = *(int *)((int)pvVar28 + 0x158);
            }
            mobyupdate_helpers::M16_00240f38(dVar34,dVar34,iVar19,lVar15);
            *(undefined4 *)((int)pvVar28 + 0x158) = 0;
          }
          bVar11 = true;
        }
        iVar30 = iVar30 + 1;
        pvVar28 = (void *)((int)pvVar28 + 4);
      } while (iVar30 < 0x32);
      if ((!bVar11) && (moby->animationId != '\x03')) {
        puVar10[0x2e] = (longlong)(int)((double)animationSpeed * dVar33);
        mobyutil::MB_SetAnimation(lVar15,3,0,*(undefined4 *)((int)puVar10 + 0x174));
      }
      if (**(int **)((int)pvVar7 + 0xe0) + -1 == iVar24) {
        if (*(int *)((int)pvVar7 + 0x114) < 0) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->state = '\x06';
      }
      else {
        dVar35 = (double)(moby->pos).y;
        dVar32 = (double)(moby->pos).x;
        fVar4 = (float)(dVar41 - dVar35);
        fVar6 = (float)(dVar42 - dVar32);
        dVar38 = (double)(moby->pos).z;
        fVar1 = (float)(dVar37 - dVar38);
        dVar40 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar4 * fVar4);
        fVar5 = (float)((double)(DAT_00841fd0 * mobyutil::g_FrameTime) / dVar40);
        dVar33 = dVar34;
        if (dVar34 - dVar40 < 0.0) {
          dVar33 = (double)(fVar4 * fVar5);
        }
        dVar36 = dVar34;
        if (dVar34 - dVar40 < 0.0) {
          dVar36 = (double)(fVar6 * fVar5);
        }
        dVar39 = dVar34;
        if (dVar34 - dVar40 < 0.0) {
          dVar39 = (double)(fVar1 * fVar5);
        }
        if (dVar40 - dVar34 < 0.0) {
          dVar33 = (double)(fVar4 * fVar5);
        }
        if (dVar40 - dVar34 < 0.0) {
          dVar36 = (double)(fVar6 * fVar5);
        }
        if (dVar40 - dVar34 < 0.0) {
          dVar39 = (double)(fVar1 * fVar5);
        }
        fVar5 = (float)(dVar35 + dVar33);
        fVar4 = (float)(dVar32 + dVar36);
        fVar6 = (float)(dVar38 + dVar39);
        fVar1 = (float)((double)fVar5 - dVar41);
        fVar2 = (float)((double)fVar4 - dVar42);
        fVar3 = (float)((double)fVar6 - dVar37);
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
          *(int *)((int)pvVar7 + 0xd0) = iVar24;
        }
      }
    }
    else {
      piVar29 = *(int **)((int)pvVar7 + 0x110);
      iVar19 = *piVar29;
      iVar24 = *(int *)((int)pvVar7 + 0x100) + iVar19 + (int)*(char *)((int)pvVar7 + 0x104);
      iVar24 = iVar24 - (iVar24 / iVar19) * iVar19;
      fVar5 = (float)piVar29[iVar24 * 4 + 4] - (moby->pos).x;
      fVar4 = (float)piVar29[iVar24 * 4 + 5] - (moby->pos).y;
      pfVar27 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar1 = ABS(fVar5);
      fVar6 = ABS(fVar4);
      *(float *)((int)puVar10 + 0x9c) = fVar5;
      *(float *)(puVar10 + 0x14) = fVar4;
      *(float *)((int)puVar10 + 0xa4) = fVar1 - fVar6;
      dVar34 = 0.0;
      uVar16 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar10 + 0x9c));
      if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar2 = ABS(*(float *)(puVar10 + 0x14));
      if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
        fVar2 = fVar1;
      }
      dVar33 = dVar34;
      if (0.0 < fVar5) {
        lVar17 = uVar14 - 0x1e0;
        lVar23 = uVar14 - 0x104;
        lVar26 = uVar14 - 0xf4;
        lVar31 = 2;
        fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x1f) = fVar5;
        *(float *)(puVar10 + 0x1e) = fVar5;
        *(float *)((int)puVar10 + 0xf4) = fVar5;
        *(float *)((int)puVar10 + 0xec) = fVar5;
        fVar5 = fVar1 * fVar1;
        *(float *)(puVar10 + 0x1e) = *(float *)(puVar10 + 0x1e) * fVar1;
        *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar5;
        *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar5 * fVar1;
        do {
          *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xdc) * fVar5 * fVar5;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar14 - 0x104;
        pfVar27 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar26;
        do {
          fVar5 = *pfVar27;
          fVar1 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xec) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar1;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar30 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0xec)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar6 + fVar4);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar33,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,pfVar27,
                 (int)pvVar7 + 0x224);
      dVar37 = (double)(moby->pos).y;
      iVar19 = *(int *)((int)pvVar7 + 0x110) + iVar24 * 0x10;
      dVar35 = (double)(moby->pos).x;
      fVar4 = (float)((double)*(float *)(iVar19 + 0x14) - dVar37);
      fVar6 = (float)((double)*(float *)(iVar19 + 0x10) - dVar35);
      dVar41 = (double)(moby->pos).z;
      fVar1 = (float)((double)*(float *)(iVar19 + 0x18) - dVar41);
      dVar42 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar4 * fVar4);
      fVar5 = (float)((double)(DAT_00841fd0 * mobyutil::g_FrameTime) / dVar42);
      dVar33 = dVar34;
      if (dVar34 - dVar42 < 0.0) {
        dVar33 = (double)(fVar4 * fVar5);
      }
      dVar32 = dVar34;
      if (dVar34 - dVar42 < 0.0) {
        dVar32 = (double)(fVar6 * fVar5);
      }
      dVar38 = dVar34;
      if (dVar34 - dVar42 < 0.0) {
        dVar38 = (double)(fVar1 * fVar5);
      }
      if (dVar42 - dVar34 < 0.0) {
        dVar33 = (double)(fVar4 * fVar5);
      }
      if (dVar42 - dVar34 < 0.0) {
        dVar32 = (double)(fVar6 * fVar5);
      }
      if (dVar42 - dVar34 < 0.0) {
        dVar38 = (double)(fVar1 * fVar5);
      }
      fVar5 = (float)(dVar37 + dVar33);
      dVar33 = (double)fVar5;
      fVar4 = (float)(dVar35 + dVar32);
      dVar34 = (double)fVar4;
      fVar6 = (float)(dVar41 + dVar38);
      dVar35 = (double)fVar6;
      fVar1 = (float)(dVar33 - (double)*(float *)(iVar19 + 0x14));
      fVar2 = (float)(dVar34 - (double)*(float *)(iVar19 + 0x10));
      fVar3 = (float)(dVar35 - (double)*(float *)(iVar19 + 0x18));
      (moby->pos).x = fVar4;
      (moby->pos).y = fVar5;
      (moby->pos).z = fVar6;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 0.5) {
        *(int *)((int)pvVar7 + 0x100) = iVar24;
        dVar34 = (double)(moby->pos).x;
        dVar33 = (double)(moby->pos).y;
        dVar35 = (double)(moby->pos).z;
      }
      if (19.0 < SQRT((float)((double)g_heroPosition.z - dVar35) *
                      (float)((double)g_heroPosition.z - dVar35) +
                      (float)((double)g_heroPosition.x - dVar34) *
                      (float)((double)g_heroPosition.x - dVar34) +
                      (float)((double)g_heroPosition.y - dVar33) *
                      (float)((double)g_heroPosition.y - dVar33))) {
        moby->state = '\a';
      }
    }
  }
  else if (bVar22 < 8) {
    fVar5 = g_heroPosition.x - (moby->pos).x;
    fVar4 = g_heroPosition.y - (moby->pos).y;
    pfVar27 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar1 = ABS(fVar5);
    fVar6 = ABS(fVar4);
    *(float *)(puVar10 + 0x12) = fVar5;
    *(float *)((int)puVar10 + 0x94) = fVar4;
    *(float *)(puVar10 + 0x13) = fVar1 - fVar6;
    dVar34 = 0.0;
    uVar16 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar10 + 0x12));
    if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar2 = ABS(*(float *)((int)puVar10 + 0x94));
    if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    if (0.0 < fVar5) {
      lVar17 = uVar14 - 0x1e0;
      lVar23 = uVar14 - 0x124;
      lVar26 = uVar14 - 0x114;
      lVar31 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar1 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x1b) = fVar5;
      *(float *)(puVar10 + 0x1a) = fVar5;
      *(float *)((int)puVar10 + 0xd4) = fVar5;
      *(float *)((int)puVar10 + 0xcc) = fVar5;
      fVar5 = fVar1 * fVar1;
      *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar1;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar5;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar5 * fVar1;
      do {
        *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xbc) * fVar5 * fVar5;
        iVar19 = (int)lVar23;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar26 = uVar14 - 0x124;
      pfVar27 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar26;
      do {
        fVar5 = *pfVar27;
        fVar1 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xcc) * fVar5;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar1;
        lVar23 = lVar23 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        iVar24 = (int)lVar26;
        lVar18 = lVar18 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar19 + 0xcc)) +
                          *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) + *(float *)(iVar24 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar4);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar34,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,pfVar27,
               (int)pvVar7 + 0x224);
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar4 = g_heroPosition.x - (moby->pos).x;
    fVar6 = g_heroPosition.z - (moby->pos).z;
    dVar34 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    if ((dVar34 < 17.0) || (iVar19 = mobyutil::MB_FindMobyByVarId(lVar15), iVar19 != 0)) {
      fVar6 = g_heroPosition.z;
      fVar5 = g_heroPosition.y;
      fVar4 = g_heroPosition.x;
      iVar19 = **(int **)((int)pvVar7 + 0x110);
      iVar24 = *(int *)((int)pvVar7 + 0x100) + iVar19 + (int)*(char *)((int)pvVar7 + 0x104);
      moby->state = '\x06';
      iVar19 = *(int *)((int)pvVar7 + 0x110) + (iVar24 - (iVar24 / iVar19) * iVar19) * 0x10;
      fVar5 = fVar5 - *(float *)(iVar19 + 0x14);
      fVar4 = fVar4 - *(float *)(iVar19 + 0x10);
      fVar6 = fVar6 - *(float *)(iVar19 + 0x18);
      if ((double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < dVar34) {
        *(char *)((int)pvVar7 + 0x104) = -*(char *)((int)pvVar7 + 0x104);
      }
    }
  }
  else if (bVar22 < 9) {
    uVar21 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar21 & 3) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3ff0000000000000,0x402a000000000000,lVar15,lVar15 + 0x10,&DAT_0038753c,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar8 = (moby->pos).z;
    uVar21 = (int)fVar8 >> 0x1f;
    if ((int)((uVar21 >> 1 ^ (uint)fVar8) - uVar21) < 0x40a00000) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  mobyutil::MB_ColorDyingMoby(lVar15,(int)pvVar7 + 0x60);
  return;
}



//==== 00388c24  ns=mobyupdate_helpers  size=0x14
// sig: undefined M454_00388c24(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M454_00388c24(void)

{
  DAT_00842020 = 0x10000;
  return;
}



//==== 00388c58  ns=mobyupdate_helpers  size=0x648
// sig: undefined M454_00388c58(void)
// callers(1): 003892e8 mobyupdate_unsorted::UpdateMoby_454
// callees(3): 00057820 collproc::CollLine; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 005026a0 fastfunc::FastSubRots
// strings: 00388c38: 'Nnk(' (raw)

MobyInstance *
mobyupdate_helpers::M454_00388c58
          (double param_1,double param_2,double param_3,float *param_4,int param_5)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *moby;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  int *piVar13;
  longlong lVar12;
  int iVar14;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  int *in_r8;
  ulonglong unaff_r24;
  int iVar19;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f24;
  double dVar25;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x160;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar11;
  puVar8[0x2e] = in_LR;
  puVar8[0x24] = in_f24;
  puVar8[0x25] = in_f25;
  puVar8[0x26] = in_f26;
  puVar8[0x27] = in_f27;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x1e] = unaff_r26;
  puVar8[0x23] = unaff_r31;
  puVar8[0x1f] = unaff_r27;
  puVar8[0x20] = unaff_r28;
  moby = DAT_00a49344;
  pMVar20 = (MobyInstance *)0x0;
  bVar2 = DAT_00a49344 != (MobyInstance *)0x0;
  puVar8[0x22] = unaff_r30;
  dVar28 = 1000000000.0;
  puVar8[0x21] = unaff_r29;
  puVar8[0x1d] = unaff_r25;
  puVar8[0x1c] = unaff_r24;
  if (bVar2) {
    iVar19 = 0;
    do {
      if (moby->drawDistance != 0) {
        if (in_r8 == (int *)0x0) {
          if (moby->enabled == '\0') goto LAB_00389230;
        }
        else {
          iVar14 = 0;
          piVar13 = in_r8;
          do {
            if ((MobyInstance *)*piVar13 == moby) goto LAB_00389230;
            iVar14 = iVar14 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar14 < 7);
        }
        piVar13 = (int *)mobyutil::MB_GetPvarsIfMobyHasThem(moby);
        if ((((piVar13 != (int *)0x0) && (dVar25 = 0.0, -1 < *piVar13)) &&
            (moby != (MobyInstance *)0x0 && (moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) &&
           ((moby->pClass != (MobyClass *)0x0 && ((short)moby->pClass->mode_bits == 5)))) {
          fVar3 = param_4[1];
          fVar5 = fVar3 - (moby->pos).y;
          fVar4 = (moby->pos).x;
          fVar7 = *param_4 - fVar4;
          dVar27 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5);
          if (dVar27 < param_3) {
            fVar7 = fVar4 - *param_4;
            *(float *)(puVar8 + 0xe) = fVar4;
            fVar4 = (moby->pos).y;
            fVar3 = fVar4 - fVar3;
            *(float *)((int)puVar8 + 0x74) = fVar4;
            fVar4 = (moby->pos).z;
            *(float *)(puVar8 + 0xf) = fVar4;
            *(f32 *)((int)puVar8 + 0x7c) = (moby->pos).w;
            fVar5 = (float)piVar13[4];
            fVar6 = ABS(fVar7);
            *(float *)((int)puVar8 + 0x8c) = fVar7;
            fVar7 = ABS(fVar3);
            *(float *)(puVar8 + 0x12) = fVar3;
            *(float *)((int)puVar8 + 0x94) = fVar6 - fVar7;
            fVar3 = *(float *)(param_5 + 8);
            *(float *)(puVar8 + 0xf) = fVar5 + 0.1 + fVar4;
            uVar17 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
            fVar4 = ABS(*(float *)((int)puVar8 + 0x8c));
            if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
              fVar4 = fVar7;
            }
            fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
            fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
            fVar10 = ABS(*(float *)(puVar8 + 0x12));
            if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
              fVar10 = fVar6;
            }
            dVar26 = 0.7853981852531433;
            dVar22 = dVar25;
            if (0.0 < fVar4) {
              lVar12 = uVar11 - 0x150;
              lVar15 = uVar11 - 0xa8;
              lVar18 = uVar11 - 0x98;
              lVar21 = 2;
              fVar4 = (fVar10 - fVar4) / (fVar10 + fVar4);
              fVar6 = fVar4 * fVar4;
              *(float *)((int)puVar8 + 0xc4) = fVar4;
              *(float *)((int)puVar8 + 0xbc) = fVar4;
              *(float *)(puVar8 + 0x18) = fVar4;
              *(float *)(puVar8 + 0x17) = fVar4;
              fVar4 = fVar6 * fVar6;
              *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar6;
              *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar4;
              *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar4 * fVar6;
              do {
                *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar4 * fVar4;
                iVar14 = (int)lVar15;
                lVar12 = lVar12 + 8;
                lVar15 = lVar15 + 8;
                *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
                lVar18 = lVar18 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar21 = 4;
              lVar18 = uVar11 - 0xa8;
              pfVar16 = (float *)&DAT_007358e0;
              lVar12 = lVar1;
              lVar15 = lVar18;
              do {
                fVar4 = *pfVar16;
                fVar6 = pfVar16[1];
                pfVar16 = pfVar16 + 2;
                *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar4;
                lVar12 = lVar12 + 8;
                *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                lVar15 = lVar15 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar15 = 2;
              lVar12 = lVar1;
              do {
                iVar14 = (int)lVar12;
                lVar12 = lVar12 + 0x10;
                iVar9 = (int)lVar18;
                lVar18 = lVar18 + 0x10;
                dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar14 + 0xb8)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
              dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar7 + fVar5);
            }
            dVar22 = (double)fastfunc::FastSubRots(fVar3,(float)dVar22);
            dVar22 = (double)(float)(dVar22 * dVar22);
            fVar3 = *(float *)(param_5 + 4);
            if (dVar22 < (double)(float)(param_1 * param_1)) {
              fVar4 = param_4[2];
              *(float *)(puVar8 + 0x10) = (float)dVar27;
              dVar23 = ABS((double)(*(float *)(puVar8 + 0xf) - fVar4));
              *(float *)((int)puVar8 + 0x84) = *(float *)(puVar8 + 0xf) - fVar4;
              *(float *)(puVar8 + 0x11) = (float)(ABS(dVar27) - dVar23);
              uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
              dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
              if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
                dVar24 = dVar23;
              }
              fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
              dVar23 = ABS((double)*(float *)((int)puVar8 + 0x84));
              if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
                dVar23 = ABS(dVar27);
              }
              fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
              if (dVar25 < dVar24) {
                lVar12 = uVar11 - 0x150;
                lVar18 = uVar11 - 0xb8;
                lVar15 = uVar11 - 200;
                lVar21 = 2;
                fVar7 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
                fVar6 = fVar7 * fVar7;
                *(float *)((int)puVar8 + 0xa4) = fVar7;
                *(float *)((int)puVar8 + 0x9c) = fVar7;
                *(float *)(puVar8 + 0x14) = fVar7;
                *(float *)(puVar8 + 0x13) = fVar7;
                fVar7 = fVar6 * fVar6;
                *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar6;
                *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar7;
                *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar7 * fVar6;
                do {
                  *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar7 * fVar7;
                  iVar14 = (int)lVar15;
                  lVar15 = lVar15 + 8;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar7 * fVar7;
                  lVar18 = lVar18 + 8;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
                lVar21 = 4;
                lVar18 = uVar11 - 200;
                pfVar16 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar15 = lVar18;
                do {
                  fVar7 = *pfVar16;
                  fVar6 = pfVar16[1];
                  pfVar16 = pfVar16 + 2;
                  *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar7;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                  lVar15 = lVar15 + 8;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
                lVar15 = 2;
                lVar12 = lVar1;
                do {
                  iVar14 = (int)lVar12;
                  iVar9 = (int)lVar18;
                  lVar12 = lVar12 + 0x10;
                  lVar18 = lVar18 + 0x10;
                  dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x98)) +
                                    *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                   *(float *)(iVar9 + 0xc));
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
                dVar25 = (double)((float)(dVar25 + dVar26) * fVar4 + fVar5);
              }
              dVar25 = (double)fastfunc::FastSubRots(fVar3,(float)dVar25);
              if ((double)(float)(dVar25 * dVar25) < (double)(float)(param_2 * param_2)) {
                dVar26 = 0.20000000298023224;
                if (5.0 - dVar27 < 0.0) {
                  dVar26 = (double)(float)(dVar22 * (double)(float)(dVar25 * dVar25) + 1.0);
                }
                dVar25 = (double)(float)(dVar27 * dVar26);
                if ((dVar25 < dVar28) &&
                   ((iVar14 = collproc::CollLine(param_4,uVar11 - 0xf0,2,moby,0), iVar14 == 0 ||
                    ((CollOutput.pMoby != (MobyInstance *)0x0 &&
                     ((((CollOutput.pMoby)->pClass != (MobyClass *)0x0 &&
                       ((short)(CollOutput.pMoby)->pClass->mode_bits == 5)) ||
                      (((CollOutput.pMoby)->pClass != (MobyClass *)0x0 &&
                       ((short)(CollOutput.pMoby)->pClass->mode_bits == 0xf)))))))))) {
                  dVar28 = dVar25;
                  pMVar20 = moby;
                }
              }
            }
          }
        }
      }
LAB_00389230:
      moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar19);
      iVar19 = iVar19 + 4;
    } while (moby != (MobyInstance *)0x0);
  }
  return pMVar20;
}



//==== 003892e8  ns=mobyupdate_unsorted  size=0xddc
// sig: undefined UpdateMoby_454(MobyInstance * moby)
// callers(0): 
// callees(15): 00055284 camera::DrawTargetCrosshair; 000855b8 hero::Hero_EndFiringAnim; 0008e0f4 hero::Hero_GetWeaponAmmo; 00099ea8 hero::Hero_PlayFiringAnim; 000aa258 hero::hero_ConsumeAmmo; 000b72b0 hero::TransitionMovement; 000f1114 mobyfunc::GetBonePosition; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 00388c58 mobyupdate_helpers::M454_00388c58; 0038c8a0 FUN_0038c8a0; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 005c8318 rand
// strings: 003892b4: '?&ff?fff' (raw) | 003892b8: '?fff' (raw) | 00a0fdc4: 'None'

/* Moby 454 */

void mobyupdate_unsorted::UpdateMoby_454(MobyInstance *moby)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  char acVar15 [4];
  ulonglong uVar16;
  longlong lVar17;
  int iVar19;
  MobyInstance *pMVar20;
  int *piVar21;
  ulonglong uVar18;
  uint uVar22;
  longlong lVar23;
  float *pfVar26;
  ulonglong uVar24;
  longlong lVar25;
  short sVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar30 = uVar16 - 0x1f0;
  puVar13 = (ulonglong *)lVar30;
  *puVar13 = uVar16;
  puVar13[0x40] = in_LR;
  puVar13[0x3b] = in_f29;
  puVar13[0x3c] = in_f30;
  puVar13[0x3d] = in_f31;
  puVar13[0x3a] = unaff_r31;
  puVar13[0x38] = unaff_r29;
  puVar13[0x37] = unaff_r28;
  puVar13[0x39] = unaff_r30;
  piVar10 = (int *)moby->pVar;
  uVar29 = ZEXT48(piVar10);
  puVar13[0x36] = unaff_r27;
  fastfunc::FastApplyTransform((Vec4 *)(uVar16 - 0x120),(Vec4 *)&GameCamera);
  fastfunc::FastNormalizeRMtx4(uVar16 - 0xf0,uVar16 - 0x120);
  if ((moby->state == '\x02') || (moby->state == '\x03')) {
    iVar19 = fastfunc::FastDecTimerS32(uVar29 + 8);
    if ((iVar19 != 0) ||
       (((*piVar10 == 0 || (cVar1 = *(char *)(*piVar10 + 0x20), cVar1 == -2)) || (cVar1 == -3)))) {
      *piVar10 = 0;
      piVar10[3] = 0;
    }
    fVar5 = GameCamera.rot.radius;
    fVar6 = GameCamera.rot.elevation;
    fVar9 = -GameCamera.rot.elevation;
    *(float *)(puVar13 + 0x10) = GameCamera.rot.azimuth;
    *(float *)((int)puVar13 + 0x84) = fVar6;
    acVar15 = GameCamera.field10_0x15c;
    *(float *)(puVar13 + 0x11) = fVar5;
    *(char (*) [4])((int)puVar13 + 0x8c) = acVar15;
    *(float *)((int)puVar13 + 0x84) = fVar9;
    mobyfunc::GetBonePosition(lVar17,*(undefined1 *)((int)piVar10 + 5),uVar16 - 0x160);
    pMVar20 = (MobyInstance *)
              mobyupdate_helpers::M454_00388c58
                        (0x3ffb2ba800000000,0x3ffb2ba800000000,0x4054000000000000,uVar16 - 0x160,
                         uVar16 - 0x170);
    if (((pMVar20 != (MobyInstance *)0x0) && (*piVar10 == 0)) ||
       ((iVar19 = *piVar10, iVar19 == 0 ||
        ((*(char *)(iVar19 + 0x20) == -3 || *(char *)(iVar19 + 0x20) == -2 ||
         (*(char *)(iVar19 + 0x31) == '\0')))))) {
      *piVar10 = (int)pMVar20;
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      piVar10[3] = 0;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(8,0x3892a4);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,8,uVar29);
      *(undefined4 *)((uint)(piVar10 + 2) & 0xfffffffc) = uVar12;
      piVar10[5] = 0x3f800000;
      piVar21 = (int *)mobyutil::MB_GetPvarsIfMobyHasThem(pMVar20);
      if (piVar21 != (int *)0x0) {
        piVar10[3] = piVar21[4];
        piVar10[5] = *piVar21;
      }
    }
    if (((*piVar10 != 0) && (iVar19 = fastfunc::FastDecTimerS16(uVar29 + 0x10), iVar19 != 0)) &&
       (iVar19 = hero::Hero_GetWeaponAmmo(-1), iVar19 != 0)) {
      iVar19 = *piVar10;
      if (((iVar19 == 0) || (*(char *)(iVar19 + 0x20) == -2)) || (*(char *)(iVar19 + 0x20) == -3)) {
        *piVar10 = 0;
        piVar10[3] = 0;
      }
      else {
        fVar5 = GameCamera.posY - *(float *)(iVar19 + 0x14);
        fVar7 = GameCamera.posX - *(float *)(iVar19 + 0x10);
        fVar8 = GameCamera.posZ - *(float *)(iVar19 + 0x18);
        *(float *)(puVar13 + 0x14) = *(float *)(iVar19 + 0x10);
        *(undefined4 *)((int)puVar13 + 0xa4) = *(undefined4 *)(iVar19 + 0x14);
        fVar9 = *(float *)(iVar19 + 0x18);
        *(float *)(puVar13 + 0x15) = fVar9;
        *(undefined4 *)((int)puVar13 + 0xac) = *(undefined4 *)(iVar19 + 0x1c);
        fVar6 = (float)piVar10[3];
        puVar13[0xe] = 4;
        *(float *)(puVar13 + 0x15) = fVar9 + fVar6;
        camera::DrawTargetCrosshair
                  (ABS(-(SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5) * 0.006666667 * 0.65 -
                        0.9)),moby,0xff0fff0f,0x3892a4);
      }
    }
  }
  bVar2 = moby->state;
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      *piVar10 = 0;
      DAT_0096ad8c = 0;
      moby->state = '\x01';
      *(undefined2 *)(piVar10 + 4) = 0;
    }
    else if (bVar2 < 2) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x02';
      }
    }
    else if (bVar2 < 3) {
      if (g_heroState == FIRST_PERSON_VIEW) {
        hero::TransitionMovement(0x1e,1);
      }
      if ((((g_buttonsPressedThisFrame & DAT_0096ad80) != 0) && (DAT_0096bd8c == '\0')) &&
         (iVar19 = hero::hero_ConsumeAmmo(-1,1), iVar19 != 0)) {
        if (CHAR_ARRAY_00a0fdc4._24_2_ != -1) {
          CHAR_ARRAY_00a0fdc4._24_2_ = CHAR_ARRAY_00a0fdc4._24_2_ + 1;
        }
        puVar13[0x33] = (longlong)update::g_GameFrameCount;
        uVar11 = CHAR_ARRAY_00a0fdc4._26_2_;
        puVar13[0x33] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x33] + 0.5));
        iVar19 = *(int *)((int)puVar13 + 0x19c);
        if ((int)(uint)(ushort)uVar11 < iVar19 / 600) {
          sVar27 = (short)(iVar19 >> 0x1f);
          CHAR_ARRAY_00a0fdc4._26_2_ =
               ((short)(iVar19 / 600) + sVar27) -
               ((short)((short)(iVar19 / 0x2580000) + sVar27) >> 0xf);
        }
        DAT_0096ad8c = 2;
        CHAR_ARRAY_00a0fdc4._28_4_ = CHAR_ARRAY_00a0fdc4._28_4_ | 1 << (Level & 0x3f) | 0x80000000;
        moby->state = '\x04';
        *(undefined2 *)((int)piVar10 + 6) = 0;
        *(undefined1 *)((int)piVar10 + 5) = 0;
        *(undefined1 *)(piVar10 + 1) = 0;
        hero::Hero_PlayFiringAnim();
        lVar30 = 7;
        do {
          *(undefined4 *)((int)uVar29 + 0x18) = 0;
          uVar29 = uVar29 + 4;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        *(undefined2 *)((int)piVar10 + 0x12) = 0;
      }
    }
    else {
      puVar13[0xe] = 4;
      camera::DrawTargetCrosshair(1.0,moby,0xff0f0fff,0x3892a4);
      if ((g_downButtons & (L1|L2)) == 0) {
        moby->state = '\x02';
      }
      else if ((((g_buttonsPressedThisFrame & DAT_0096ad80) != 0) && (DAT_0096bd8c == '\0')) &&
              (iVar19 = hero::hero_ConsumeAmmo(-1,1), iVar19 != 0)) {
        if (CHAR_ARRAY_00a0fdc4._24_2_ != -1) {
          CHAR_ARRAY_00a0fdc4._24_2_ = CHAR_ARRAY_00a0fdc4._24_2_ + 1;
        }
        puVar13[0x33] = (longlong)update::g_GameFrameCount;
        uVar11 = CHAR_ARRAY_00a0fdc4._26_2_;
        puVar13[0x33] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x33] + 0.5));
        iVar19 = *(int *)((int)puVar13 + 0x19c);
        if ((int)(uint)(ushort)uVar11 < iVar19 / 600) {
          sVar27 = (short)(iVar19 >> 0x1f);
          CHAR_ARRAY_00a0fdc4._26_2_ =
               ((short)(iVar19 / 600) + sVar27) -
               ((short)((short)(iVar19 / 0x2580000) + sVar27) >> 0xf);
        }
        DAT_0096ad8c = 2;
        CHAR_ARRAY_00a0fdc4._28_4_ = CHAR_ARRAY_00a0fdc4._28_4_ | 1 << (Level & 0x3f) | 0x80000000;
        moby->state = '\x04';
        *(undefined2 *)((int)piVar10 + 6) = 0;
        *(undefined1 *)((int)piVar10 + 5) = 0;
        *(undefined1 *)(piVar10 + 1) = 0;
        hero::Hero_PlayFiringAnim();
        lVar30 = 7;
        do {
          *(undefined4 *)((int)uVar29 + 0x18) = 0;
          uVar29 = uVar29 + 4;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        *(undefined2 *)((int)piVar10 + 0x12) = 0;
      }
    }
  }
  else if (bVar2 < 7) {
    if (bVar2 < 5) {
      iVar19 = fastfunc::FastDecTimerS16(uVar29 + 6);
      if (iVar19 != 0) {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = loadVectorLeftIndexed(0x28,0x3892a4);
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar18 = (ulonglong)*(byte *)((int)piVar10 + 5) + 1 & 0xff;
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        uVar18 = uVar18 + (((uVar18 + 1) * 0xe3 << 0x20) >> 0x2b) * -9;
        auVar36 = vectorSplatHalfWord(auVar36,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar36,6,uVar29);
        *(undefined2 *)((int)piVar10 + 6) = uVar11;
        *(char *)((int)piVar10 + 5) = (char)uVar18;
        *(char *)(piVar10 + 1) = *(char *)(piVar10 + 1) + '\x01';
        dVar34 = 0.0;
        dVar35 = (double)DAT_0096af9c;
        fVar9 = DAT_0096a328;
        fVar6 = DAT_0096a324;
        fVar5 = DAT_0096a320;
        if (g_heroState == WEAPON_FIRST_PERSON_VIEW) {
          fVar9 = *(float *)(puVar13 + 0x25);
          fVar6 = *(float *)((int)puVar13 + 0x124);
          fVar5 = *(float *)(puVar13 + 0x24);
        }
        fVar5 = (DAT_00969de0 + DAT_00969e20) * 3.0 + fVar5;
        fVar6 = (DAT_00969de4 + DAT_00969e24) * 3.0 + fVar6;
        fVar9 = (DAT_00969de8 + DAT_00969e28) * 3.0 + fVar9;
        if (DAT_0096af90 == 0) {
          *(float *)((int)puVar13 + 0x14c) = fVar5;
          *(float *)(puVar13 + 0x2a) = fVar6;
          *(float *)((int)puVar13 + 0x154) = ABS(fVar5) - ABS(fVar6);
          uVar24 = (ulonglong)(*(uint *)((int)puVar13 + 0x14c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x154) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0x2a) >> 0x1d) & 4;
          fVar7 = ABS(*(float *)((int)puVar13 + 0x14c));
          if (*(float *)((int)puVar13 + 0x154) - 0.0 < 0.0) {
            fVar7 = ABS(fVar6);
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          fVar4 = ABS(*(float *)(puVar13 + 0x2a));
          if (*(float *)((int)puVar13 + 0x154) - 0.0 < 0.0) {
            fVar4 = ABS(fVar5);
          }
          fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar35 = dVar34;
          if (0.0 < fVar7) {
            lVar23 = uVar16 - 0x1e0;
            lVar25 = uVar16 - 0x78;
            lVar28 = uVar16 - 0x68;
            lVar31 = 2;
            fVar7 = (fVar4 - fVar7) / (fVar4 + fVar7);
            fVar4 = fVar7 * fVar7;
            *(float *)((int)puVar13 + 0x184) = fVar7;
            *(float *)((int)puVar13 + 0x17c) = fVar7;
            *(float *)(puVar13 + 0x30) = fVar7;
            *(float *)(puVar13 + 0x2f) = fVar7;
            fVar7 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x17c) = *(float *)((int)puVar13 + 0x17c) * fVar4;
            *(float *)(puVar13 + 0x30) = *(float *)(puVar13 + 0x30) * fVar7;
            *(float *)((int)puVar13 + 0x184) = *(float *)((int)puVar13 + 0x184) * fVar7 * fVar4;
            do {
              *(float *)((int)lVar23 + 0x178) = *(float *)((int)lVar23 + 0x168) * fVar7 * fVar7;
              iVar19 = (int)lVar25;
              lVar23 = lVar23 + 8;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar19 + 4) * fVar7 * fVar7;
              lVar28 = lVar28 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar31 = 4;
            lVar28 = uVar16 - 0x78;
            pfVar26 = (float *)&DAT_007358e0;
            lVar23 = lVar30;
            lVar25 = lVar28;
            do {
              fVar7 = *pfVar26;
              fVar4 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar23 + 0x178) = *(float *)((int)lVar23 + 0x178) * fVar7;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
              lVar25 = lVar25 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar25 = 2;
            lVar23 = lVar30;
            do {
              iVar19 = (int)lVar23;
              iVar14 = (int)lVar28;
              lVar23 = lVar23 + 0x10;
              lVar28 = lVar28 + 0x10;
              dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar19 + 0x178)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar8 + fVar3);
          }
        }
        *(float *)((int)puVar13 + 0x144) = fVar9;
        fVar9 = ABS(fVar9);
        fVar6 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
        fVar5 = ABS(fVar6);
        *(float *)(puVar13 + 0x28) = fVar6;
        *(float *)(puVar13 + 0x29) = fVar5 - fVar9;
        uVar24 = (ulonglong)(*(uint *)(puVar13 + 0x28) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x29) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x144) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)(puVar13 + 0x28));
        if (*(float *)(puVar13 + 0x29) - 0.0 < 0.0) {
          fVar6 = fVar9;
        }
        fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar7 = ABS(*(float *)((int)puVar13 + 0x144));
        if (*(float *)(puVar13 + 0x29) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar32 = dVar34;
        if (0.0 < fVar6) {
          lVar23 = uVar16 - 0x1e0;
          lVar25 = uVar16 - 0x98;
          lVar28 = uVar16 - 0x88;
          lVar31 = 2;
          fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0x164) = fVar6;
          *(float *)((int)puVar13 + 0x15c) = fVar6;
          *(float *)(puVar13 + 0x2c) = fVar6;
          *(float *)(puVar13 + 0x2b) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar13 + 0x15c) = *(float *)((int)puVar13 + 0x15c) * fVar7;
          *(float *)(puVar13 + 0x2c) = *(float *)(puVar13 + 0x2c) * fVar6;
          *(float *)((int)puVar13 + 0x164) = *(float *)((int)puVar13 + 0x164) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar23 + 0x158) = *(float *)((int)lVar23 + 0x148) * fVar6 * fVar6;
            iVar19 = (int)lVar25;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
            lVar28 = lVar28 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar28 = uVar16 - 0x98;
          pfVar26 = (float *)&DAT_007358e0;
          lVar23 = lVar30;
          lVar25 = lVar28;
          do {
            fVar6 = *pfVar26;
            fVar7 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar23 + 0x158) = *(float *)((int)lVar23 + 0x158) * fVar6;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
            lVar25 = lVar25 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar23 = 2;
          do {
            iVar19 = (int)lVar30;
            lVar30 = lVar30 + 0x10;
            iVar14 = (int)lVar28;
            lVar28 = lVar28 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0x158)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar9 + fVar5);
        }
        dVar33 = -dVar32;
        mobyfunc::GetBonePosition(dVar32,lVar17,uVar18 & 0xff,uVar16 - 0x140);
        hero::Hero_PlayFiringAnim();
        FUN_0038c8a0((double)(float)piVar10[3],dVar35,dVar33,lVar17,uVar16 - 0x140,*piVar10);
        if (6 < *(byte *)(piVar10 + 1)) {
          DAT_0096ad8c = 0;
          hero::Hero_EndFiringAnim();
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          moby->state = '\x05';
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x34,0x3892a4);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = vectorSplatHalfWord(auVar36,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar36,6,uVar29);
          *(undefined2 *)((int)piVar10 + 6) = uVar11;
          uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x10,uVar29);
          *(undefined2 *)(piVar10 + 4) = uVar11;
        }
        fVar9 = (float)piVar10[5];
        piVar10[5] = (int)(fVar9 - 1.0);
        fVar5 = GameCamera.rot.elevation;
        fVar6 = GameCamera.rot.azimuth;
        if ((((double)(fVar9 - 1.0) <= dVar34) || (*piVar10 == 0)) ||
           ((cVar1 = *(char *)(*piVar10 + 0x20), cVar1 == -2 || (cVar1 == -3)))) {
          sVar27 = *(short *)((int)piVar10 + 0x12) + 1;
          fVar9 = -GameCamera.rot.elevation;
          iVar19 = (int)((ulonglong)((longlong)(int)sVar27 * -0x6db6db6d) >> 0x20) + (int)sVar27;
          *(int *)((int)piVar10 + (int)((longlong)*(short *)((int)piVar10 + 0x12) << 2) + 0x18) =
               *piVar10;
          *(float *)(puVar13 + 0x18) = fVar6;
          fVar6 = GameCamera.rot.radius;
          *(float *)((int)puVar13 + 0xc4) = fVar5;
          *(short *)((int)piVar10 + 0x12) =
               sVar27 + ((short)(iVar19 >> 2) - (short)(iVar19 >> 0x1f)) * -7;
          acVar15 = GameCamera.field10_0x15c;
          *(float *)(puVar13 + 0x19) = fVar6;
          *(char (*) [4])((int)puVar13 + 0xcc) = acVar15;
          *(float *)((int)puVar13 + 0xc4) = fVar9;
          pMVar20 = (MobyInstance *)
                    mobyupdate_helpers::M454_00388c58
                              (0x400921fb60000000,0x400921fb60000000,0x4059000000000000,
                               lVar17 + 0x10,uVar16 - 0x130);
          *piVar10 = (int)pMVar20;
          if ((pMVar20 == (MobyInstance *)0x0) && (0 < *(short *)((int)piVar10 + 0x12))) {
            uVar22 = rand();
            pMVar20 = (MobyInstance *)*piVar10;
            if ((uVar22 & (int)*(short *)((int)piVar10 + 0x12) + 1U) == 0) {
              iVar19 = rand();
              pMVar20 = (MobyInstance *)
                        piVar10[(iVar19 - (iVar19 / (int)*(short *)((int)piVar10 + 0x12)) *
                                          (int)*(short *)((int)piVar10 + 0x12)) + 6];
              *piVar10 = (int)pMVar20;
            }
          }
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          piVar10[3] = 0;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(8,0x3892a4);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,8,uVar29
                             );
          *(undefined4 *)((uint)(piVar10 + 2) & 0xfffffffc) = uVar12;
          piVar10[5] = 0x3f800000;
          piVar21 = (int *)mobyutil::MB_GetPvarsIfMobyHasThem(pMVar20);
          if (piVar21 != (int *)0x0) {
            piVar10[3] = piVar21[4];
            piVar10[5] = *piVar21;
          }
        }
      }
    }
    else if ((bVar2 < 6) && (iVar19 = fastfunc::FastDecTimerS16(uVar29 + 6), iVar19 != 0)) {
      *(undefined1 *)(piVar10 + 1) = 0;
      *piVar10 = 0;
      moby->state = '\x02';
    }
  }
  return;
}



//==== 0038a0c4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M455_0038a0c4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M455_0038a0c4(void)

{
  DAT_00842090 = 0x10000;
  return;
}



//==== 0038a0e0  ns=mobyupdate_helpers  size=0x164
// sig: undefined M455_0038a0e0(void)
// callers(1): 0038a628 mobyupdate_unsorted::UpdateMoby_455
// callees(1): 000fcbe8 mobyutil::MB_randRangeFloat

bool mobyupdate_helpers::M455_0038a0e0(longlong param_1,float *param_2)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  bVar1 = (int)param_1 == -1;
  if (!bVar1) {
    dVar16 = -1.0;
    dVar15 = 1.0;
    pfVar13 = (float *)((int)&(Cuboids->matrix).v0.x + (int)(param_1 << 7));
    dVar14 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
    *param_2 = (float)dVar14;
    dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar15);
    param_2[1] = (float)dVar14;
    dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar15);
    param_2[2] = (float)dVar14;
    fVar2 = param_2[1];
    fVar3 = *param_2;
    fVar4 = pfVar13[5];
    fVar5 = pfVar13[7];
    fVar6 = pfVar13[6];
    fVar7 = pfVar13[1];
    fVar8 = pfVar13[3];
    fVar9 = pfVar13[2];
    fVar10 = pfVar13[9];
    fVar11 = pfVar13[10];
    fVar12 = pfVar13[0xb];
    *param_2 = (float)((double)pfVar13[8] * dVar14 + (double)(*pfVar13 * fVar3 + pfVar13[4] * fVar2)
                      );
    param_2[1] = (float)((double)fVar10 * dVar14 + (double)(fVar7 * fVar3 + fVar4 * fVar2));
    param_2[2] = (float)((double)fVar11 * dVar14 + (double)(fVar9 * fVar3 + fVar6 * fVar2));
    param_2[3] = (float)((double)fVar12 * dVar14 + (double)(fVar8 * fVar3 + fVar5 * fVar2)) +
                 param_2[3];
    *param_2 = *param_2 + pfVar13[0xc];
    param_2[1] = param_2[1] + pfVar13[0xd];
    param_2[2] = param_2[2] + pfVar13[0xe];
  }
  return bVar1;
}



//==== 0038a248  ns=Global  size=0x38c
// sig: undefined FUN_0038a248(void)
// callers(1): 003b0198 mobyupdate_unsorted::UpdateMoby_545
// callees(6): 000f31a8 mobyfunc::UpdateMobyTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 0010c000 mobyutil::MB_CopyHeroLights; 00486828 FUN_00486828; 005cd098 libc::printf
// strings: 00656870: 'time:%d generator %d (oClass:%d) could not spawn a moby!\n'

MobyInstance *
FUN_0038a248(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            MOBY_OCLASSES param_5)

{
  u8 uVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  MobyClass *pMVar5;
  undefined4 uVar6;
  bool bVar7;
  MobyModeBit MVar10;
  int iVar9;
  short sVar11;
  undefined8 uVar8;
  int iVar12;
  MobyInstance *moby;
  uint uVar13;
  int iVar14;
  MobyInstance *pMVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  if (param_1 == 0) {
    pMVar15 = (MobyInstance *)0x0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x78);
    if (iVar4 == 0) {
      pMVar15 = (MobyInstance *)0x0;
    }
    else {
      pMVar15 = (MobyInstance *)0x0;
      iVar14 = 0;
      *(undefined1 *)(iVar4 + 0x86) = 0;
      bVar7 = false;
      dVar19 = 0.10000000149011612;
      fStack00000044 = (float)param_3;
      dVar17 = (double)fStack00000044;
      fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
      dVar18 = (double)fStack00000040;
      fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
      dVar16 = (double)fStack00000048;
      iVar12 = iVar4;
      _fStack00000040 = param_3;
      _fStack00000048 = param_4;
      do {
        if (*(int *)(iVar12 + 0xe8) != -1) {
          moby = MobyInstance + *(int *)(iVar12 + 0xe8);
          if ((moby == (MobyInstance *)0x0) || (moby->state == 0xfd || moby->state == 0xfe)) {
            if (((param_5 == ~RATCHET) || (param_5 == moby->oClass)) && (!bVar7)) {
              bVar7 = true;
              *(char *)(iVar4 + 0x86) = *(char *)(iVar4 + 0x86) + '\x01';
              (moby->pos).x = (float)dVar18;
              pMVar5 = moby->pClass;
              (moby->pos).y = (float)dVar17;
              (moby->pos).z = (float)dVar16;
              (moby->pos).w = 0.0;
              moby->state = '\0';
              moby->setByGroup = '\0';
              MVar10 = *(MobyModeBit *)&pMVar5->mode_bits;
              moby->modeBits = MVar10;
              fVar2 = pMVar5->gScale;
              moby->scale = fVar2;
              moby->updateDistance = *(char *)(param_1 + 0x30);
              sVar3 = *(short *)(param_1 + 0x32);
              moby->enabled = '\x01';
              moby->drawDistance = sVar3;
              uVar1 = pMVar5->shadow;
              if (pMVar5->unk_ptr != 0) {
                MVar10 = MVar10 | HAS_GLOW;
                moby->modeBits = MVar10;
              }
              if (uVar1 != '\0') {
                moby->modeBits = MVar10 | DRAW_SHADOW;
              }
              moby->occlIndex = 0x7f80;
              moby->field44_0x71 = -1;
              moby->field45_0x72 = -1;
              moby->damage = -1;
              if ((*(byte *)(iVar4 + 0x83) & 2) != 0) {
                moby->scale = (float)((double)fVar2 * dVar19);
              }
              mobyutil::MB_SetAnimationNoBlend(moby,0,0);
              iVar9 = FUN_00486828(moby);
              sVar3 = *(short *)(param_1 + 0xb4);
              sVar11._0_1_ = moby->field76_0xb4;
              sVar11._1_1_ = moby->field77_0xb5;
              if (iVar9 != 0) {
                *(undefined4 *)(iVar9 + 0x94) = 0;
                *(undefined2 *)(iVar9 + 0x68) = 0;
                *(undefined4 *)(iVar9 + 0x6c) = 0;
              }
              if (sVar3 < sVar11) {
                moby->field76_0xb4 = (char)((ushort)sVar3 >> 8);
                moby->field77_0xb5 = (char)sVar3;
                sVar11 = sVar3;
              }
              if (sVar11 < 1) {
                sVar11 = 1;
                moby->field76_0xb4 = '\0';
                moby->field77_0xb5 = '\x01';
              }
              sVar11 = *(short *)(param_1 + 0xb4) - sVar11;
              *(short *)(param_1 + 0xb4) = sVar11;
              if (sVar11 < 0) {
                *(undefined2 *)(param_1 + 0xb4) = 1;
              }
              moby->collision = moby->pClass->collision;
              mobyutil::MB_CopyHeroLights(moby);
              mobyfunc::UpdateMobyTransform(moby);
              uVar8 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
              uVar13 = (uint)uVar8;
              pMVar15 = moby;
              if (uVar13 != 0) {
                auVar20 = ZEXT416(0xfffffff0);
                auVar21 = loadVectorLeftIndexed(4,uVar8);
                auVar22 = loadVectorRightIndexed(0x14,uVar8);
                auVar20 = vectorShiftRightAlgebraicWord
                                    (auVar21 | auVar22,
                                     auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
                auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
                auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar6 = storeVectorElementWordIndexed
                                  (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0,
                                   uVar8);
                *(undefined4 *)(uVar13 & 0xfffffffc) = uVar6;
                *(undefined4 *)(uVar13 + 0x30) = 0;
                *(undefined4 *)(uVar13 + 0x34) = 0;
              }
            }
          }
          else {
            *(char *)(iVar4 + 0x86) = *(char *)(iVar4 + 0x86) + '\x01';
          }
        }
        iVar14 = iVar14 + 1;
        iVar12 = iVar12 + 4;
        iVar9 = MobyUpdateChainStart;
      } while (iVar14 < 0x12);
      for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x28)) {
        if ((*(short *)(iVar9 + 0xa6) == 0x221) &&
           (*(char *)(iVar9 + 0x20) != -3 && *(char *)(iVar9 + 0x20) != -2)) {
          *(char *)(iVar4 + 0x86) = *(char *)(iVar4 + 0x86) + '\x01';
        }
      }
      if (pMVar15 == (MobyInstance *)0x0) {
        libc::printf("time:%d generator %d (oClass:%d) could not spawn a moby!\n",worldUpdateTime,
                     *(undefined2 *)(param_1 + 0xb2),*(undefined2 *)(param_1 + 0xa6));
      }
    }
  }
  return pMVar15;
}



//==== 0038a628  ns=mobyupdate_unsorted  size=0x11d8
// sig: undefined UpdateMoby_455(MobyInstance * moby)
// callers(0): 
// callees(22): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000ffb70 mobyutil::GetGroundZ; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00108180 mobyutil::MB_computeLobVelocity; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010de78 mobyutil::MB_WrapRot; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 00110b70 mobyutil::MB_IsPntInCuboid; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0038a0e0 mobyupdate_helpers::M455_0038a0e0; 003affa0 FUN_003affa0; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502b08 fastfunc::FastVecAddSelf; 005c8318 rand

/* Moby 455 */

void mobyupdate_unsorted::UpdateMoby_455(MobyInstance *moby)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  u8 uVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  MobyInstance *moby_00;
  char cVar22;
  ulonglong uVar23;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r29;
  uint uVar29;
  longlong lVar27;
  int iVar30;
  longlong lVar28;
  ulonglong unaff_r30;
  ulonglong uVar31;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f26;
  undefined8 uVar41;
  double in_f27;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  
  lVar18 = (longlong)(int)moby;
  uVar25 = ZEXT48(&stack0x00000000);
  puVar14 = (ulonglong *)(uVar25 - 0x1e0);
  *puVar14 = uVar25;
  puVar14[0x3e] = in_LR;
  puVar14[0x36] = in_f26;
  puVar14[0x37] = (ulonglong)in_f27;
  puVar14[0x38] = in_f28;
  puVar14[0x39] = in_f29;
  puVar14[0x3a] = in_f30;
  puVar14[0x3b] = in_f31;
  puVar14[0x2d] = unaff_r23;
  puVar14[0x35] = unaff_r31;
  puVar14[0x34] = unaff_r30;
  puVar14[0x33] = unaff_r29;
  puVar14[0x32] = unaff_r28;
  puVar14[0x31] = unaff_r27;
  puVar14[0x30] = unaff_r26;
  puVar14[0x2f] = unaff_r25;
  puVar14[0x2e] = unaff_r24;
  puVar14[0x2c] = unaff_r22;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar12 = moby->pVar;
  uVar31 = ZEXT48(pvVar12);
  if ((moby->enabled != '\0') &&
     (fVar51 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar51 * fVar51) < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar18);
    moby->shadow = '\x16';
  }
  if (pvVar12 == (void *)0x0) {
    return;
  }
  cVar22 = '\0';
  iVar19 = 0;
  *(undefined1 *)((int)pvVar12 + 0x86) = 0;
  uVar23 = uVar31;
  do {
    iVar20 = *(int *)((int)uVar23 + 0xe8);
    if (((iVar20 != -1) && (MobyInstance + iVar20 != (MobyInstance *)0x0)) &&
       (uVar4 = MobyInstance[iVar20].state, uVar4 != 0xfd && uVar4 != 0xfe)) {
      cVar22 = cVar22 + '\x01';
      *(char *)((int)pvVar12 + 0x86) = cVar22;
    }
    iVar19 = iVar19 + 1;
    uVar23 = uVar23 + 4;
    iVar20 = MobyUpdateChainStart;
  } while (iVar19 < 0x12);
  for (; iVar20 != 0; iVar20 = *(int *)(iVar20 + 0x28)) {
    if ((*(short *)(iVar20 + 0xa6) == 0x221) &&
       (*(char *)(iVar20 + 0x20) != -3 && *(char *)(iVar20 + 0x20) != -2)) {
      cVar22 = cVar22 + '\x01';
      *(char *)((int)pvVar12 + 0x86) = cVar22;
    }
  }
  fVar51 = (moby->pos).y - g_heroPosition.y;
  fVar3 = (moby->pos).x - g_heroPosition.x;
  fVar3 = SQRT(fVar3 * fVar3 + fVar51 * fVar51);
  bVar1 = fVar3 < *(float *)((int)pvVar12 + 0x9c);
  uVar29 = (uint)bVar1;
  fVar51 = *(float *)((int)pvVar12 + 0x90);
  iVar19 = fastfunc::FastDecTimerS16(uVar31 + 0x88);
  uVar21 = 0;
  uVar24 = (uint)((ulonglong)*(byte *)((int)pvVar12 + 0x86) -
                  (ulonglong)*(byte *)((int)pvVar12 + 0x87) >> 0x3f);
  if (*(int *)((int)pvVar12 + 0xd0) != -1) {
    iVar20 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar12 + 0xd0));
    uVar21 = (uint)LZCOUNT(iVar20) >> 5 ^ 1;
  }
  if ((*(byte *)((int)pvVar12 + 0x82) != 0) && (uVar29 = uVar21, 1 < *(byte *)((int)pvVar12 + 0x82))
     ) {
    uVar29 = (uint)LZCOUNT(uVar21 | fVar3 < fVar51) >> 5 ^ 1;
  }
  if ((*(short *)((int)pvVar12 + 0x8a) == 0) && (*(char *)((int)pvVar12 + 0x86) != '\0')) {
    uVar24 = 0;
  }
  iVar20 = mobyutil::MB_damage(lVar18,0xc30000,0);
  mobyutil::MB_HandleDamage(moby,iVar20,uVar31 + 0x20,0,puVar14 + 0x28,0,0,4);
  if (1 < *(int *)(puVar14 + 0x28)) {
    fVar51 = *(float *)((int)pvVar12 + 0x20) - *(float *)(iVar20 + 0x2c);
    *(float *)((int)pvVar12 + 0x20) = fVar51;
    if (fVar51 <= 0.0) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar18,0,0xffffffffffffffff);
      moby->state = '\b';
      *(undefined1 *)((int)pvVar12 + 0x67) = 0x78;
      mobyutil::MB_UpdateLightsTransition(lVar18,uVar31 + 0x60);
    }
    else {
      *(undefined1 *)((int)pvVar12 + 0x67) = 0x5a;
      mobyutil::MB_UpdateLightsTransition(lVar18,uVar31 + 0x60);
    }
  }
  bVar5 = moby->state;
  moby->damage = -1;
  if (bVar5 < 4) {
    if (bVar5 == 0) {
      iVar19 = 0;
      uVar25 = uVar31;
      do {
        iVar20 = *(int *)((int)uVar25 + 0xe8);
        if (((iVar20 != -1) && (moby_00 = MobyInstance + iVar20, moby_00 != (MobyInstance *)0x0)) &&
           (moby_00->state != 0xfd && moby_00->state != 0xfe)) {
          mobyfunc::DeleteMoby(moby_00);
        }
        iVar19 = iVar19 + 1;
        uVar25 = uVar25 + 4;
      } while (iVar19 < 0x12);
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar12 + 0x29) = 0;
      *(undefined1 *)((int)pvVar12 + 0x5a) = 3;
      *(undefined1 *)((int)pvVar12 + 0x58) = 8;
      moby->state = '\x01';
      goto LAB_0038b7a0;
    }
    if (bVar5 < 2) {
      if (bVar1) {
        cVar22 = *(char *)((int)pvVar12 + 0x84);
        if (cVar22 == '\x05') {
          moby->state = '\x05';
        }
        else if (cVar22 == '\x04') {
          moby->state = '\x05';
        }
        else if (cVar22 == '\x03') {
          moby->state = '\x02';
        }
        else if (cVar22 == '\x02') {
          moby->state = '\a';
        }
        else if (cVar22 == '\x01') {
          moby->state = '\x03';
        }
        else if (cVar22 == '\0') {
          moby->state = '\x02';
        }
        else {
          moby->state = '\x01';
        }
      }
      goto LAB_0038b7a0;
    }
  }
  else if ((6 < bVar5) && (7 < bVar5)) {
    if (bVar5 < 9) {
      uVar41 = 0;
      puVar14[0x12] = 1;
      puVar14[0x14] = 1;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4020000000000000,0x4010000000000000,0x4032000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar18,uVar31 + 0x70,0,1,0xffffffffffffffff,0x1e,8,0x14);
      lVar27 = lVar18 + 0x10;
      lVar28 = lVar18 + 0x40;
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar41,lVar18,0x6c5,lVar27,lVar28,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar41,lVar18,0x6c6,lVar27,lVar28,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar41,lVar18,0x6c7,lVar27,lVar28,0,0);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    moby->state = '\x01';
    goto LAB_0038b7a0;
  }
  if ((uVar29 != 0) && (uVar24 != 0 && iVar19 != 0)) {
    *(undefined4 *)((int)puVar14 + 0x144) = 0;
    *(undefined4 *)(puVar14 + 0x29) = 0;
    *(undefined4 *)((int)puVar14 + 0x14c) = 0;
    *(undefined4 *)(puVar14 + 0x2a) = 0;
    dVar42 = in_f27;
    dVar43 = in_f27;
    dVar44 = in_f27;
    while (((bVar1 = *(short *)((int)pvVar12 + 0x8a) == 0, bVar1 &&
            (*(byte *)((int)pvVar12 + 0x86) < *(byte *)((int)pvVar12 + 0x87))) ||
           ((!bVar1 && (*(short *)((int)pvVar12 + 0x88) == 0))))) {
      mobyfunc::GetBonePosition(lVar18,0,uVar25 - 0x120);
      cVar22 = *(char *)((int)pvVar12 + 0x85);
      if (cVar22 == '\x04') {
        iVar20 = (int)((LZCOUNT(-1 - *(int *)((int)pvVar12 + 0xa0)) << 0x3a) >> 0x3f);
        iVar19 = iVar20 + 2;
        iVar19 = iVar19 + ((uint)((LZCOUNT(-1 - *(int *)((int)pvVar12 + 0xa4)) << 0x3a) >> 0x3f) &
                          (iVar20 + 1) - iVar19);
        iVar20 = iVar19 + 1;
        iVar20 = iVar20 + ((uint)((LZCOUNT(-1 - *(int *)((int)pvVar12 + 0xa8)) << 0x3a) >> 0x3f) &
                          iVar19 - iVar20);
        iVar19 = iVar20 + 1;
        iVar19 = iVar19 + ((uint)((LZCOUNT(-1 - *(int *)((int)pvVar12 + 0xac)) << 0x3a) >> 0x3f) &
                          iVar20 - iVar19);
        iVar20 = 0;
        lVar28 = ((ulonglong)*(byte *)((int)pvVar12 + 0x86) -
                 (longlong)((int)(uint)*(byte *)((int)pvVar12 + 0x86) / iVar19) * (longlong)iVar19)
                 + 1;
        uVar23 = uVar31;
        do {
          iVar19 = *(int *)((int)uVar23 + 0xa0);
          lVar28 = lVar28 + -1 + ((LZCOUNT(-1 - iVar19) << 0x3a) >> 0x3f & lVar28 - (lVar28 + -1));
          if (((int)lVar28 == 0) &&
             (iVar19 = mobyupdate_helpers::M455_0038a0e0(iVar19,uVar25 - 0xd0), iVar19 == 0)) break;
          iVar20 = iVar20 + 1;
          uVar23 = uVar23 + 4;
        } while (iVar20 < 4);
        fVar51 = *(float *)((int)puVar14 + 0x114);
        fVar3 = *(float *)(puVar14 + 0x22);
        fVar7 = fVar51 - *(float *)((int)puVar14 + 0xc4);
        fVar6 = *(float *)(puVar14 + 0x23);
        fVar9 = fVar3 - *(float *)(puVar14 + 0x18);
        uVar8 = *(undefined4 *)((int)puVar14 + 0x11c);
        fVar10 = fVar6 - *(float *)(puVar14 + 0x19);
        *(float *)((int)puVar14 + 0xd4) = fVar7;
        *(float *)(puVar14 + 0x1a) = fVar9;
        *(undefined4 *)((int)puVar14 + 0xdc) = uVar8;
        *(float *)(puVar14 + 0x1b) = fVar10;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)mobyutil::MB_randRangeFloat
                                     (SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7),3.0);
          fVar9 = *(float *)((int)puVar14 + 0xd4);
          fVar10 = *(float *)(puVar14 + 0x1a);
          fVar11 = *(float *)(puVar14 + 0x1b);
          fVar16 = 0.0;
          dVar33 = (double)SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
          fVar3 = *(float *)(puVar14 + 0x22);
          fVar51 = *(float *)((int)puVar14 + 0x114);
          fVar6 = *(float *)(puVar14 + 0x23);
          uVar8 = *(undefined4 *)((int)puVar14 + 0x11c);
          fVar7 = (float)(dVar32 / dVar33);
          fVar15 = fVar16;
          if (0.0 - dVar33 < 0.0) {
            fVar15 = fVar10 * fVar7;
          }
          fVar17 = fVar16;
          if (0.0 - dVar33 < 0.0) {
            fVar17 = fVar9 * fVar7;
          }
          if (0.0 - dVar33 < 0.0) {
            fVar16 = fVar11 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar15 = fVar10 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar17 = fVar9 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar16 = fVar11 * fVar7;
          }
          *(float *)(puVar14 + 0x1a) = fVar15;
          *(float *)((int)puVar14 + 0xd4) = fVar17;
          *(float *)(puVar14 + 0x1b) = fVar16;
        }
        *(float *)(puVar14 + 0x1c) = fVar3;
        *(float *)((int)puVar14 + 0xe4) = fVar51;
        *(float *)(puVar14 + 0x1d) = fVar6;
        *(undefined4 *)((int)puVar14 + 0xec) = uVar8;
      }
      else if (cVar22 == '\x03') {
        iVar20 = (int)((LZCOUNT(-1 - *(int *)((int)pvVar12 + 0xa0)) << 0x3a) >> 0x3f);
        iVar19 = iVar20 + 2;
        iVar19 = iVar19 + ((uint)((LZCOUNT(-1 - *(int *)((int)pvVar12 + 0xa4)) << 0x3a) >> 0x3f) &
                          (iVar20 + 1) - iVar19);
        iVar20 = iVar19 + 1;
        iVar20 = iVar20 + ((uint)((LZCOUNT(-1 - *(int *)((int)pvVar12 + 0xa8)) << 0x3a) >> 0x3f) &
                          iVar19 - iVar20);
        iVar19 = iVar20 + 1;
        iVar19 = iVar19 + ((uint)((LZCOUNT(-1 - *(int *)((int)pvVar12 + 0xac)) << 0x3a) >> 0x3f) &
                          iVar20 - iVar19);
        iVar20 = rand();
        iVar30 = 0;
        lVar28 = ((longlong)iVar20 - (longlong)(iVar20 / iVar19) * (longlong)iVar19) + 1;
        uVar23 = uVar31;
        do {
          iVar19 = *(int *)((int)uVar23 + 0xa0);
          lVar28 = lVar28 + -1 + ((LZCOUNT(-1 - iVar19) << 0x3a) >> 0x3f & lVar28 - (lVar28 + -1));
          if (((int)lVar28 == 0) &&
             (iVar19 = mobyupdate_helpers::M455_0038a0e0(iVar19,uVar25 - 0xe0), iVar19 == 0)) break;
          iVar30 = iVar30 + 1;
          uVar23 = uVar23 + 4;
        } while (iVar30 < 4);
        fVar51 = *(float *)((int)puVar14 + 0x104);
        fVar3 = *(float *)(puVar14 + 0x20);
        fVar7 = fVar51 - *(float *)((int)puVar14 + 0xc4);
        fVar9 = fVar3 - *(float *)(puVar14 + 0x18);
        fVar6 = *(float *)(puVar14 + 0x21);
        uVar8 = *(undefined4 *)((int)puVar14 + 0x10c);
        fVar10 = fVar6 - *(float *)(puVar14 + 0x19);
        *(float *)((int)puVar14 + 0xd4) = fVar7;
        *(float *)(puVar14 + 0x1a) = fVar9;
        *(undefined4 *)((int)puVar14 + 0xdc) = uVar8;
        *(float *)(puVar14 + 0x1b) = fVar10;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)mobyutil::MB_randRangeFloat
                                     (SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7),3.0);
          fVar9 = *(float *)((int)puVar14 + 0xd4);
          fVar10 = *(float *)(puVar14 + 0x1a);
          fVar11 = *(float *)(puVar14 + 0x1b);
          fVar16 = 0.0;
          dVar33 = (double)SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
          fVar3 = *(float *)(puVar14 + 0x20);
          fVar51 = *(float *)((int)puVar14 + 0x104);
          fVar6 = *(float *)(puVar14 + 0x21);
          uVar8 = *(undefined4 *)((int)puVar14 + 0x10c);
          fVar7 = (float)(dVar32 / dVar33);
          fVar15 = fVar16;
          if (0.0 - dVar33 < 0.0) {
            fVar15 = fVar10 * fVar7;
          }
          fVar17 = fVar16;
          if (0.0 - dVar33 < 0.0) {
            fVar17 = fVar9 * fVar7;
          }
          if (0.0 - dVar33 < 0.0) {
            fVar16 = fVar11 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar15 = fVar10 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar17 = fVar9 * fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar16 = fVar11 * fVar7;
          }
          *(float *)(puVar14 + 0x1a) = fVar15;
          *(float *)((int)puVar14 + 0xd4) = fVar17;
          *(float *)(puVar14 + 0x1b) = fVar16;
        }
        *(float *)(puVar14 + 0x1c) = fVar3;
        *(float *)((int)puVar14 + 0xe4) = fVar51;
        *(float *)(puVar14 + 0x1d) = fVar6;
        *(undefined4 *)((int)puVar14 + 0xec) = uVar8;
      }
      else if (cVar22 == '\x02') {
        lVar27 = -1;
        dVar32 = 100000.0;
        lVar26 = 0;
        uVar23 = uVar31;
        lVar28 = uVar25 - 0x1e0;
        do {
          if (((*(int *)((int)lVar28 + 0x144) != 1) &&
              (iVar19 = mobyupdate_helpers::M455_0038a0e0
                                  (*(undefined4 *)((int)uVar23 + 0xa0),uVar25 - 0xf0), iVar19 == 0))
             && (fVar51 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x
                , dVar33 = (double)SQRT(fVar3 * fVar3 + fVar51 * fVar51), dVar33 < dVar32)) {
            dVar44 = (double)*(float *)(puVar14 + 0x1e);
            dVar43 = (double)*(float *)((int)puVar14 + 0xf4);
            dVar42 = (double)*(float *)(puVar14 + 0x1f);
            in_f27 = (double)*(float *)((int)puVar14 + 0xfc);
            lVar27 = lVar26;
            dVar32 = dVar33;
          }
          lVar26 = lVar26 + 1;
          uVar23 = uVar23 + 4;
          lVar28 = lVar28 + 4;
        } while ((int)lVar26 < 4);
        if ((int)lVar27 != -1) {
          *(undefined4 *)((int)puVar14 + (int)(lVar27 << 2) + 0x144) = 1;
        }
        fVar51 = (float)(dVar43 - (double)*(float *)((int)puVar14 + 0xc4));
        fVar3 = (float)(dVar44 - (double)*(float *)(puVar14 + 0x18));
        *(float *)((int)puVar14 + 0xdc) = (float)in_f27;
        fVar6 = (float)(dVar42 - (double)*(float *)(puVar14 + 0x19));
        *(float *)((int)puVar14 + 0xd4) = fVar51;
        *(float *)(puVar14 + 0x1a) = fVar3;
        *(float *)(puVar14 + 0x1b) = fVar6;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)mobyutil::MB_randRangeFloat
                                     (SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar51 * fVar51),3.0);
          fVar3 = *(float *)((int)puVar14 + 0xd4);
          fVar6 = *(float *)(puVar14 + 0x1a);
          fVar7 = *(float *)(puVar14 + 0x1b);
          fVar10 = 0.0;
          dVar33 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3);
          fVar51 = (float)(dVar32 / dVar33);
          fVar9 = fVar10;
          if (0.0 - dVar33 < 0.0) {
            fVar9 = fVar6 * fVar51;
          }
          fVar11 = fVar10;
          if (0.0 - dVar33 < 0.0) {
            fVar11 = fVar3 * fVar51;
          }
          if (0.0 - dVar33 < 0.0) {
            fVar10 = fVar7 * fVar51;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar9 = fVar6 * fVar51;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar11 = fVar3 * fVar51;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar10 = fVar7 * fVar51;
          }
          *(float *)(puVar14 + 0x1a) = fVar9;
          *(float *)((int)puVar14 + 0xd4) = fVar11;
          *(float *)(puVar14 + 0x1b) = fVar10;
        }
        *(float *)(puVar14 + 0x1c) = (float)dVar44;
        *(float *)((int)puVar14 + 0xe4) = (float)dVar43;
        *(float *)(puVar14 + 0x1d) = (float)dVar42;
        *(float *)((int)puVar14 + 0xec) = (float)in_f27;
      }
      else if (cVar22 == '\x01') {
        dVar40 = (double)*(float *)(puVar14 + 0x18);
        dVar45 = (double)*(float *)((int)puVar14 + 0xc4);
        dVar37 = (double)*(float *)(puVar14 + 0x19);
        dVar32 = (double)g_heroPosition.x;
        dVar33 = (double)g_heroPosition.y;
        dVar36 = (double)g_heroPosition.z;
        *(float *)((int)puVar14 + 0xdc) = g_heroPosition.w;
        *(float *)(puVar14 + 0x1a) = (float)(dVar32 - dVar40);
        *(float *)((int)puVar14 + 0xd4) = (float)(dVar33 - dVar45);
        *(float *)(puVar14 + 0x1b) = (float)(dVar36 - dVar37);
        uVar41 = 0x3fe0000000000000;
        dVar36 = 0.0;
        fVar51 = (float)(dVar33 - dVar45) * 0.5;
        dVar33 = (double)fVar51;
        fVar3 = (float)(dVar32 - dVar40) * 0.5;
        dVar32 = (double)fVar3;
        *(undefined4 *)(puVar14 + 0x1b) = 0;
        *(float *)((int)puVar14 + 0xd4) = fVar51;
        *(float *)(puVar14 + 0x1a) = fVar3;
        dVar35 = dVar36;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)mobyutil::MB_randRangeFloat
                                     (SQRT((float)(dVar32 * dVar32 +
                                                  (double)(float)(dVar33 * dVar33))),3.0);
          fVar3 = *(float *)((int)puVar14 + 0xd4);
          fVar6 = *(float *)(puVar14 + 0x1a);
          fVar7 = *(float *)(puVar14 + 0x1b);
          dVar38 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3);
          dVar40 = (double)*(float *)(puVar14 + 0x18);
          dVar45 = (double)*(float *)((int)puVar14 + 0xc4);
          dVar37 = (double)*(float *)(puVar14 + 0x19);
          fVar51 = (float)(dVar32 / dVar38);
          dVar32 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar32 = (double)(fVar6 * fVar51);
          }
          dVar33 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar33 = (double)(fVar3 * fVar51);
          }
          dVar36 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar36 = (double)(fVar7 * fVar51);
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar32 = (double)(fVar6 * fVar51);
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar33 = (double)(fVar3 * fVar51);
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar36 = (double)(fVar7 * fVar51);
          }
          *(float *)(puVar14 + 0x1a) = (float)dVar32;
          *(float *)((int)puVar14 + 0xd4) = (float)dVar33;
          *(float *)(puVar14 + 0x1b) = (float)dVar36;
        }
        dVar38 = (double)SQRT((float)(dVar36 * dVar36 +
                                     (double)(float)(dVar32 * dVar32 +
                                                    (double)(float)(dVar33 * dVar33))));
        if (dVar38 < 3.0) {
          dVar34 = (double)(float)(3.0 / dVar38);
          dVar2 = dVar32 * dVar34;
          dVar39 = dVar33 * dVar34;
          dVar34 = dVar36 * dVar34;
          dVar32 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar32 = (double)(float)dVar2;
          }
          dVar33 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar33 = (double)(float)dVar39;
          }
          dVar36 = dVar35;
          if (dVar35 - dVar38 < 0.0) {
            dVar36 = (double)(float)dVar34;
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar32 = (double)(float)dVar2;
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar33 = (double)(float)dVar39;
          }
          if (dVar38 - dVar35 < 0.0) {
            dVar36 = (double)(float)dVar34;
          }
          *(float *)(puVar14 + 0x1a) = (float)dVar32;
          *(float *)((int)puVar14 + 0xd4) = (float)dVar33;
          *(float *)(puVar14 + 0x1b) = (float)dVar36;
        }
        fVar51 = SQRT((float)(dVar36 * dVar36 +
                             (double)(float)(dVar32 * dVar32 + (double)(float)(dVar33 * dVar33))));
        if (*(float *)((int)pvVar12 + 0x90) < fVar51) {
          dVar39 = (double)(*(float *)((int)pvVar12 + 0x90) / fVar51);
          dVar38 = dVar32 * dVar39;
          dVar32 = (double)(float)dVar38;
          dVar2 = dVar33 * dVar39;
          dVar33 = (double)(float)dVar2;
          dVar39 = dVar36 * dVar39;
          dVar36 = (double)(float)dVar39;
          *(float *)(puVar14 + 0x1a) = (float)dVar38;
          *(float *)((int)puVar14 + 0xd4) = (float)dVar2;
          *(float *)(puVar14 + 0x1b) = (float)dVar39;
        }
        *(undefined4 *)((int)puVar14 + 0xec) = *(undefined4 *)((int)puVar14 + 0xcc);
        *(float *)(puVar14 + 0x1c) = (float)(dVar40 + dVar32);
        *(float *)((int)puVar14 + 0xe4) = (float)(dVar45 + dVar33);
        *(float *)(puVar14 + 0x1d) = (float)(dVar37 + dVar36);
        dVar32 = (double)mobyutil::GetGroundZ(uVar41,uVar25 - 0x100,0);
        if (dVar32 != dVar35) {
          *(float *)(puVar14 + 0x1d) = (float)dVar32;
        }
      }
      else if (cVar22 == '\0') {
        dVar32 = (double)fastfunc::FastIntToDouble((ulonglong)*(byte *)((int)pvVar12 + 0x87) + 1);
        dVar33 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pvVar12 + 0x86));
        fVar51 = mobyutil::MB_WrapRot
                           ((float)((double)((float)(dVar33 * 2.0) * 3.1415927) / dVar32) -
                            3.1415927);
        dVar33 = (double)fVar51;
        fVar51 = (moby->pos).y - g_heroPosition.y;
        fVar3 = (moby->pos).x - g_heroPosition.x;
        uVar41 = 0x3fe0000000000000;
        fVar51 = SQRT(fVar3 * fVar3 + fVar51 * fVar51) * 0.5;
        dVar32 = (double)fVar51;
        if ((*(byte *)((int)pvVar12 + 0x83) & 8) != 0) {
          dVar32 = (double)mobyutil::MB_randRangeFloat(fVar51,3.0);
        }
        fVar51 = (float)(dVar33 + 1.570796251296997);
        dVar36 = (double)(float)(3.141592502593994 - dVar33);
        if (dVar33 - (double)(float)(3.141592502593994 - dVar33) < 0.0) {
          dVar36 = dVar33;
        }
        fVar3 = 3.1415925 - fVar51;
        if (fVar51 - (3.1415925 - fVar51) < 0.0) {
          fVar3 = fVar51;
        }
        dVar35 = (double)(float)(-3.141592502593994 - dVar33);
        if ((double)(float)(-3.141592502593994 - dVar33) - dVar36 < 0.0) {
          dVar35 = dVar36;
        }
        fVar6 = -3.1415925 - fVar51;
        if ((-3.1415925 - fVar51) - fVar3 < 0.0) {
          fVar6 = fVar3;
        }
        dVar33 = (double)(float)(dVar35 * dVar35);
        if (dVar32 - 3.0 < 0.0) {
          dVar32 = 3.0;
        }
        fVar9 = fVar6 * fVar6;
        dVar40 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar35));
        fVar3 = fVar9 * fVar9 * fVar6;
        dVar36 = (double)(float)(dVar33 * dVar40);
        fVar7 = fVar9 * fVar3;
        fVar51 = (float)((double)((float)(dVar33 * dVar36) * 2.601887e-06 +
                                 (float)(dVar36 * -0.0001980741071747616 +
                                        (double)(float)(dVar40 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar33 * 
                                                  dVar35) * -0.16666656732559204 + dVar35)))) *
                        dVar32);
        fVar3 = (float)((double)(fVar9 * fVar7 * 2.601887e-06 +
                                fVar7 * -0.0001980741 +
                                fVar3 * 0.0083330255 + fVar9 * fVar6 * -0.16666657 + fVar6) * dVar32
                       );
        *(float *)((int)puVar14 + 0xd4) = fVar51;
        dVar32 = 0.0;
        *(undefined4 *)(puVar14 + 0x1b) = 0;
        *(float *)(puVar14 + 0x1a) = fVar3;
        fVar6 = SQRT(fVar3 * fVar3 + fVar51 * fVar51);
        if (*(float *)((int)pvVar12 + 0x90) < fVar6) {
          fVar6 = *(float *)((int)pvVar12 + 0x90) / fVar6;
          *(undefined4 *)(puVar14 + 0x1b) = 0;
          fVar3 = fVar3 * fVar6;
          fVar51 = fVar51 * fVar6;
          *(float *)(puVar14 + 0x1a) = fVar3;
          *(float *)((int)puVar14 + 0xd4) = fVar51;
        }
        *(undefined4 *)(puVar14 + 0x1d) = *(undefined4 *)(puVar14 + 0x19);
        *(undefined4 *)((int)puVar14 + 0xec) = *(undefined4 *)((int)puVar14 + 0xcc);
        *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x18) + fVar3;
        *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xc4) + fVar51;
        dVar33 = (double)mobyutil::GetGroundZ(uVar41,uVar25 - 0x100,0);
        if (dVar33 != dVar32) {
          *(float *)(puVar14 + 0x1d) = (float)dVar33;
        }
      }
      fVar51 = *(float *)((int)puVar14 + 0xd4);
      fVar3 = *(float *)(puVar14 + 0x1a);
      fVar6 = fVar3 * fVar3 + fVar51 * fVar51;
      dVar32 = 0.0;
      dVar40 = (double)SQRT(fVar6);
      lVar28 = uVar25 - 0xc0;
      dVar45 = (double)(*(float *)((int)pvVar12 + 0xe4) * DAT_0071f408 *
                       SQRT(*(float *)(puVar14 + 0x1b) * *(float *)(puVar14 + 0x1b) + fVar6));
      *(undefined4 *)(puVar14 + 0x25) = 0;
      *(undefined4 *)((int)puVar14 + 300) = *(undefined4 *)((int)puVar14 + 0xdc);
      dVar36 = (double)(fVar51 * (float)(dVar45 / dVar40));
      dVar35 = (double)(fVar3 * (float)(dVar45 / dVar40));
      dVar33 = dVar32;
      if (0.0 - dVar40 < 0.0) {
        dVar33 = dVar36;
      }
      dVar37 = dVar32;
      if (0.0 - dVar40 < 0.0) {
        dVar37 = dVar35;
      }
      if (dVar40 - 0.0 < 0.0) {
        dVar33 = dVar36;
      }
      if (dVar40 - 0.0 < 0.0) {
        dVar37 = dVar35;
      }
      fVar51 = SQRT((float)(dVar37 * dVar37 + (double)(float)(dVar33 * dVar33)) + 0.0);
      dVar40 = (double)(float)(dVar37 * (double)(0.05 / fVar51));
      dVar35 = (double)(float)(dVar33 * (double)(0.05 / fVar51));
      dVar36 = dVar32;
      if (0.0 - fVar51 < 0.0) {
        dVar36 = dVar40;
      }
      if (0.0 - fVar51 < 0.0) {
        dVar32 = dVar35;
      }
      if (fVar51 - 0.0 < 0.0) {
        dVar36 = dVar40;
      }
      if (fVar51 - 0.0 < 0.0) {
        dVar32 = dVar35;
      }
      *(float *)(puVar14 + 0x24) = (float)dVar36;
      *(float *)((int)puVar14 + 0x124) = (float)dVar32;
      *(undefined4 *)(puVar14 + 0x1b) = 0;
      *(float *)((int)puVar14 + 0xd4) = (float)dVar33;
      *(float *)(puVar14 + 0x1a) = (float)dVar37;
      mobyutil::MB_RandomizeVector(0.025,(float *)lVar28);
      fastfunc::FastVecAddSelf(uVar25 - 0xb0,lVar28,uVar25 - 0x120);
      dVar32 = (double)mobyutil::MB_computeLobVelocity
                                 (dVar45,-(double)(*(float *)((int)pvVar12 + 0xdc) * DAT_0071f418),
                                  lVar28,uVar25 - 0x100);
      *(float *)(puVar14 + 0x1b) = (float)dVar32;
      iVar19 = FUN_003affa0(lVar18,lVar28,uVar25 - 0x110,*(undefined2 *)((int)pvVar12 + 0x8c),
                            *(undefined1 *)((int)pvVar12 + 0x83));
      if (iVar19 != 0) {
        *(undefined1 *)(iVar19 + 0x30) = 0xff;
      }
      auVar46 = loadVectorLeftIndexed(0x8a,uVar31);
      auVar48 = loadVectorRightIndexed(0x9a,uVar31);
      auVar49 = loadVectorLeftIndexed(0x24,0x38a5d4);
      auVar47 = ZEXT416(0xfffffff0);
      auVar48 = vectorShiftRightAlgebraicWord
                          (auVar46 | auVar48,
                           auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
      auVar46 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar47 = ZEXT416(0xffffffff);
      auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
      auVar48 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar47 = vectorAddFloatingPoint
                          (auVar47,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar50,auVar47,auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = vectorSplatHalfWord(auVar47,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar47,0x88,uVar31);
      *(undefined2 *)((int)pvVar12 + 0x88) = uVar13;
      *(char *)((int)pvVar12 + 0x86) = *(char *)((int)pvVar12 + 0x86) + '\x01';
    }
  }
LAB_0038b7a0:
  mobyutil::MB_ColorDyingMoby(lVar18,uVar31 + 0x60);
  return;
}



//==== 0038b800  ns=mobyupdate_helpers  size=0x14
// sig: undefined M456_0038b800(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M456_0038b800(void)

{
  DAT_00842100 = 0x10000;
  return;
}



//==== 0038b850  ns=mobyupdate_unsorted  size=0xffc
// sig: undefined UpdateMoby_456(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 0010675c mobyutil::MB_damage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0039ed48 FUN_0039ed48; 004fffb4 fastfunc::FastDecTimerS16

/* Moby 456 */

void mobyupdate_unsorted::UpdateMoby_456(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  MobyModeBit MVar7;
  uint uVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar16;
  int iVar17;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0x170;
  puVar10 = (ulonglong *)lVar15;
  *puVar10 = uVar12;
  puVar10[0x30] = in_LR;
  puVar10[0x2c] = in_f30;
  puVar10[0x2d] = in_f31;
  puVar10[0x2b] = unaff_r31;
  puVar10[0x2a] = unaff_r30;
  puVar10[0x29] = unaff_r29;
  puVar10[0x28] = unaff_r28;
  pfVar19 = (float *)moby->pVar;
  uVar21 = ZEXT48(pfVar19);
  iVar16 = mobyutil::MB_damage(moby,0x210000,0);
  fastfunc::FastDecTimerS16(uVar21 + 6);
  if ((iVar16 != 0) && (*(short *)((int)pfVar19 + 6) == 0)) {
    fVar3 = *pfVar19 - *(float *)(iVar16 + 0x2c);
    *pfVar19 = fVar3;
    if (fVar3 <= 0.0) {
      *(undefined1 *)((int)pfVar19 + 0x47) = 0xfa;
      if (moby->animationId != '\x10') {
        mobyutil::MB_SetAnimation(moby,0x10,0,3);
      }
      moby->state = '\t';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
    }
    else {
      uVar8 = (int)*(uint *)(iVar16 + 0x2c) >> 0x1f;
      iVar17 = (uVar8 >> 1 ^ *(uint *)(iVar16 + 0x2c)) - uVar8;
      if (iVar17 < 0x3f800000) {
        *(undefined1 *)((int)pfVar19 + 0x47) = 100;
      }
      else if (iVar17 < 0x40000000) {
        *(undefined1 *)((int)pfVar19 + 0x47) = 0x78;
        sVar6 = *(short *)(*(int *)(iVar16 + 0x20) + 0xa6);
        if ((sVar6 == 0xb0) || (sVar6 == 0xb1)) {
          auVar32 = loadVectorLeftIndexed(4,0x38b818);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        }
        else {
          auVar32 = loadVectorLeftIndexed(8,0x38b818);
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        }
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32,
                             auVar34);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar32,6,uVar21);
        *(undefined2 *)((int)pfVar19 + 6) = uVar9;
      }
      else if (iVar17 < 0x40400000) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)((int)pfVar19 + 0x47) = 200;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(8,0x38b818);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar32,6,uVar21);
        *(undefined2 *)((int)pfVar19 + 6) = uVar9;
        if (moby->animationId != '\b') {
          mobyutil::MB_SetAnimation(moby,8,0,3);
        }
        moby->state = '\b';
      }
      else {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)((int)pfVar19 + 0x47) = 0xe6;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(8,0x38b818);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar32,6,uVar21);
        *(undefined2 *)((int)pfVar19 + 6) = uVar9;
        if (moby->animationId != '\b') {
          mobyutil::MB_SetAnimation(moby,8,0,3);
        }
        moby->state = '\b';
      }
    }
    mobyutil::MB_UpdateLightsTransition(moby,uVar21 + 0x40);
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == '\t') {
    if ((moby->field43_0x70 & 2U) != 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\b') {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(moby,0,0,0);
      }
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x06') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar10 + 0x9c) = fVar3;
    *(float *)(puVar10 + 0x14) = fVar2;
    *(float *)((int)puVar10 + 0xa4) = fVar4 - fVar5;
    dVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar10 + 0x9c));
    if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x14));
    if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar14 = uVar12 - 0x160;
      lVar18 = uVar12 - 0x90;
      lVar20 = uVar12 - 0x80;
      lVar22 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xec) = fVar3;
      *(float *)((int)puVar10 + 0xe4) = fVar3;
      *(float *)(puVar10 + 0x1d) = fVar3;
      *(float *)(puVar10 + 0x1c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar4;
      *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar3;
      *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xd0) * fVar3 * fVar3;
        iVar16 = (int)lVar18;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar12 - 0x90;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xe0) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        iVar17 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0xe0)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_0038b818,
               uVar21 + 0x130);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x06') {
        mobyutil::MB_SetAnimation(moby,6,0,0);
      }
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x05') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)(puVar10 + 0x12) = fVar3;
    *(float *)((int)puVar10 + 0x94) = fVar2;
    *(float *)(puVar10 + 0x13) = fVar4 - fVar5;
    dVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar10 + 0x12));
    if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x94));
    if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar14 = uVar12 - 0x160;
      lVar18 = uVar12 - 0xb0;
      lVar20 = uVar12 - 0xa0;
      lVar22 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xcc) = fVar3;
      *(float *)((int)puVar10 + 0xc4) = fVar3;
      *(float *)(puVar10 + 0x19) = fVar3;
      *(float *)(puVar10 + 0x18) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar4;
      *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar3;
      *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xb0) * fVar3 * fVar3;
        iVar16 = (int)lVar18;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar12 - 0xb0;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xc0) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        iVar17 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0xc0)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_0038b818,
               uVar21 + 0x130);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(moby,0,0,0);
      }
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x04') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    pfVar19 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)(puVar10 + 0x15) = fVar3;
    *(float *)((int)puVar10 + 0xac) = fVar2;
    *(float *)(puVar10 + 0x16) = fVar4 - fVar5;
    dVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar10 + 0x15));
    if (*(float *)(puVar10 + 0x16) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0xac));
    if (*(float *)(puVar10 + 0x16) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    dVar23 = dVar29;
    if (0.0 < fVar3) {
      lVar14 = uVar12 - 0x160;
      lVar18 = uVar12 - 0x70;
      lVar20 = uVar12 - 0x60;
      lVar22 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0x10c) = fVar3;
      *(float *)((int)puVar10 + 0x104) = fVar3;
      *(float *)(puVar10 + 0x21) = fVar3;
      *(float *)(puVar10 + 0x20) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar4;
      *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar3;
      *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0xf0) * fVar3 * fVar3;
        iVar16 = (int)lVar18;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar12 - 0x70;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0x100) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar17 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar16 + 0x100)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar23,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar19,
               uVar21 + 0x130);
    dVar23 = (double)mobyfunc::BlendAnimFrame(moby);
    dVar31 = 10.0;
    if (((10.0 <= dVar23) && (dVar23 = (double)mobyfunc::BlendAnimFrame(moby), dVar23 <= 12.0)) ||
       ((dVar23 = (double)mobyfunc::BlendAnimFrame(moby), 38.0 <= dVar23 &&
        (dVar23 = (double)mobyfunc::BlendAnimFrame(moby), dVar23 <= 40.0)))) {
      dVar23 = (double)mobyfunc::BlendAnimFrame(moby);
      if ((dVar23 < dVar31) || (dVar23 = (double)mobyfunc::BlendAnimFrame(moby), 12.0 < dVar23)) {
        mobyfunc::GetBonePosition(moby,1,uVar12 - 0x100);
      }
      else {
        mobyfunc::GetBonePosition(moby,0,uVar12 - 0x100);
      }
      fVar3 = g_heroPosition.y - *(float *)((int)puVar10 + 0x74);
      fVar2 = g_heroPosition.x - *(float *)(puVar10 + 0xe);
      fVar5 = (moby->pos).z - *(float *)(puVar10 + 0xf);
      dVar30 = (double)fVar5;
      *(float *)((int)puVar10 + 0x8c) = g_heroPosition.w;
      *(float *)(puVar10 + 0x11) = fVar5;
      dVar27 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      fVar5 = DAT_0084212c * mobyutil::g_FrameTime;
      dVar31 = (double)(fVar3 * (float)(12.0 / dVar27));
      dVar25 = (double)(fVar2 * (float)(12.0 / dVar27));
      dVar23 = dVar29;
      if (dVar29 - dVar27 < 0.0) {
        dVar23 = dVar31;
      }
      dVar26 = dVar29;
      if (dVar29 - dVar27 < 0.0) {
        dVar26 = dVar25;
      }
      if (dVar27 - dVar29 < 0.0) {
        dVar23 = dVar31;
      }
      if (dVar27 - dVar29 < 0.0) {
        dVar26 = dVar25;
      }
      *(float *)(puVar10 + 0x10) = (float)dVar26;
      *(float *)((int)puVar10 + 0x84) = (float)dVar23;
      dVar25 = (double)SQRT((float)(dVar30 * dVar30 +
                                   (double)(float)(dVar26 * dVar26 +
                                                  (double)(float)(dVar23 * dVar23))));
      dVar27 = (double)(float)((double)fVar5 / dVar25);
      dVar31 = dVar29;
      if (dVar29 - dVar25 < 0.0) {
        dVar31 = (double)(float)(dVar26 * dVar27);
      }
      dVar24 = dVar29;
      if (dVar29 - dVar25 < 0.0) {
        dVar24 = (double)(float)(dVar23 * dVar27);
      }
      dVar28 = dVar29;
      if (dVar29 - dVar25 < 0.0) {
        dVar28 = (double)(float)(dVar30 * dVar27);
      }
      if (dVar25 - dVar29 < 0.0) {
        dVar31 = (double)(float)(dVar26 * dVar27);
      }
      if (dVar25 - dVar29 < 0.0) {
        dVar24 = (double)(float)(dVar23 * dVar27);
      }
      if (dVar25 - dVar29 < 0.0) {
        dVar28 = (double)(float)(dVar30 * dVar27);
      }
      *(float *)(puVar10 + 0x10) = (float)dVar31;
      *(float *)((int)puVar10 + 0x84) = (float)dVar24;
      *(float *)(puVar10 + 0x11) = (float)dVar28;
      FUN_0039ed48(uVar12 - 0xf0,uVar12 - 0x100,moby);
    }
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((20.0 < SQRT(fVar2 * fVar2 + fVar3 * fVar3)) ||
       (6.0 < ABS((moby->pos).z - g_heroPosition.z))) {
      if (moby->animationId != '\x05') {
        mobyutil::MB_SetAnimation(moby,5,0,0);
      }
      moby->unk58 = 1.0;
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x03') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar10 + 0xb4) = fVar3;
    *(float *)(puVar10 + 0x17) = fVar2;
    *(float *)((int)puVar10 + 0xbc) = fVar4 - fVar5;
    dVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)((int)puVar10 + 0xb4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xbc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x17) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar10 + 0xb4));
    if (*(float *)((int)puVar10 + 0xbc) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x17));
    if (*(float *)((int)puVar10 + 0xbc) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar14 = uVar12 - 0x160;
      lVar20 = uVar12 - 0x40;
      lVar18 = uVar12 - 0x50;
      lVar22 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 300) = fVar3;
      *(float *)((int)puVar10 + 0x124) = fVar3;
      *(float *)(puVar10 + 0x25) = fVar3;
      *(float *)(puVar10 + 0x24) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0x124) = *(float *)((int)puVar10 + 0x124) * fVar4;
      *(float *)(puVar10 + 0x25) = *(float *)(puVar10 + 0x25) * fVar3;
      *(float *)((int)puVar10 + 300) = *(float *)((int)puVar10 + 300) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0x120) = *(float *)((int)lVar14 + 0x110) * fVar3 * fVar3;
        iVar16 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar12 - 0x50;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0x120) = *(float *)((int)lVar14 + 0x120) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar17 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x120)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_0038b818,
               uVar21 + 0x130);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x04') {
        mobyutil::MB_SetAnimation(moby,4,0,0);
      }
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x01') {
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 20.0) &&
       (ABS((moby->pos).z - g_heroPosition.z) < 6.0)) {
      if (moby->animationId != '\x04') {
        mobyutil::MB_SetAnimation(moby,4,0,0);
      }
      moby->unk58 = 8.0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\0') {
    MVar7 = moby->modeBits;
    pfVar19[0x40] = 1.4013e-45;
    moby->modeBits = MVar7 | CAN_BE_AUTO_TARGETED;
    *(undefined1 *)((int)pfVar19 + 9) = 0;
    uVar8 = g_heroMobyPtr->light;
    moby->color = g_heroMobyPtr->color;
    moby->light = uVar8;
    mobyutil::MB_InitDefaultParams(pfVar19 + 0x2c);
    pfVar19[0x3d] = 0.25;
    pfVar19[0x3b] = 0.03;
    pfVar19[0x3c] = 0.3;
    fVar2 = DAT_00842124;
    fVar3 = mobyutil::g_FrameTime;
    pfVar19[0xb] = 0.0;
    pfVar19[0x2f] = 2.0;
    pfVar19[0x2e] = 2.0;
    *pfVar19 = 3.0;
    *(undefined1 *)(pfVar19 + 2) = 3;
    pfVar19[10] = 0.0;
    pfVar19[9] = 0.0;
    pfVar19[8] = 0.0;
    pfVar19[0x35] = fVar2 * fVar3;
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(moby,0,0,0);
    }
    moby->state = '\x01';
  }
  mobyutil::MB_ColorDyingMoby(moby,uVar21 + 0x40);
  return;
}



//==== 0038c84c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M457_0038c84c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M457_0038c84c(void)

{
  DAT_00842180 = 0x10000;
  return;
}



//==== 0038c8a0  ns=Global  size=0x440
// sig: undefined FUN_0038c8a0(void)
// callers(1): 003892e8 mobyupdate_unsorted::UpdateMoby_454
// callees(10): 00057820 collproc::CollLine; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe610 mobyutil::MB_SphericalToVector; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 00500608 fastfunc::FastVecNormalize

MobyInstance *
FUN_0038c8a0(double param_1,double param_2,double param_3,f32 param_4,f32 *param_5,
            MobyInstance *param_6)

{
  f32 fVar1;
  float fVar2;
  f32 *pfVar3;
  undefined4 uVar4;
  MobyInstance *pMoby;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float afStack_80 [4];
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  
  pMoby = mobyfunc::CreateMoby(ROCKET_01C9);
  if (pMoby != (MobyInstance *)0x0) {
    pfVar3 = (f32 *)pMoby->pVar;
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    (pMoby->rotation).z = (float)param_2;
    (pMoby->rotation).y = (float)param_3;
    pfVar3[8] = param_4;
    (pMoby->pos).x = *param_5;
    (pMoby->pos).y = param_5[1];
    (pMoby->pos).z = param_5[2];
    (pMoby->pos).w = param_5[3];
    pfVar3[4] = *param_5;
    pfVar3[5] = param_5[1];
    pfVar3[6] = param_5[2];
    pfVar3[7] = param_5[3];
    uVar8 = 0;
    pfVar3[0xd] = 0.0;
    pfVar3[0xe] = 0.0;
    pfVar3[0xc] = 0.0;
    pfVar3[10] = (f32)param_6;
    pMoby->scale = pMoby->pClass->gScale * 0.25;
    if (param_6 != (MobyInstance *)0x0) {
      pfVar3[0x16] = (f32)(int)(short)param_6->oClass;
      iVar5 = mobyutil::MB_GetPvarsIfMobyHasThem(param_6);
      fVar1 = (param_6->pos).x;
      if (iVar5 != 0) {
        *(ushort *)(iVar5 + 0x1e) = *(ushort *)(iVar5 + 0x1e) | 0x80;
      }
      *pfVar3 = fVar1;
      pfVar3[1] = (param_6->pos).y;
      fVar2 = (param_6->pos).z;
      pfVar3[2] = fVar2;
      fVar1 = (param_6->pos).w;
      pfVar3[0xb] = (float)param_1;
      pfVar3[3] = fVar1;
      pfVar3[2] = (float)((double)fVar2 + param_1);
    }
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(8,0x38c860);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x24,
                       ZEXT48(pfVar3));
    *(undefined4 *)((uint)(pfVar3 + 9) & 0xfffffffc) = uVar4;
    pfVar3[0x11] = 0.0;
    dVar9 = -3.1415927410125732;
    dVar7 = 3.1415927410125732;
    dVar6 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    pfVar3[0x12] = (float)dVar6;
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar7);
    pfVar3[0x13] = (float)dVar6;
    dVar6 = (double)mobyutil::MB_randRangeFloat(DAT_0071f408 * -0.00967,DAT_0071f408 * 0.00967);
    pfVar3[0x14] = (float)dVar6;
    dVar6 = (double)mobyutil::MB_randRangeFloat(DAT_0071f408 * -0.02406,DAT_0071f408 * 0.02406);
    pfVar3[0x15] = (float)dVar6;
    mobyfunc::UpdateMobyTransform(pMoby);
    sound::PlayMobySound(1,0,pMoby);
    iVar5 = collproc::CollLine(local_70,param_5,0,g_heroMobyPtr,0);
    if (iVar5 != 0) {
      pMoby->setByGroup = '\x02';
      (pMoby->pos).x = CollOutput.ip.x;
      (pMoby->pos).y = CollOutput.ip.y;
      (pMoby->pos).z = CollOutput.ip.z;
      fVar2 = (pMoby->rotation).z;
      (pMoby->pos).w = CollOutput.ip.w;
      mobyutil::MB_SphericalToVector(pfVar3[0xc],fVar2,-(pMoby->rotation).y,afStack_80);
      fastfunc::FastVecNormalize(local_60,afStack_80,0xa10980);
      mobyutil::MB_genericExplosion
                (uVar8,uVar8,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x402e000000000000,pMoby,local_60,0,&DAT_0038c860,
                 0xffffffffffffffff,10,3,9);
      mobyfunc::DeleteMoby(pMoby);
      pMoby = (MobyInstance *)0x0;
    }
  }
  return pMoby;
}



//==== 0038ccf0  ns=mobyupdate_helpers  size=0x55c
// sig: undefined M457_0038ccf0(void)
// callers(0): 
// callees(2): 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 005026a0 fastfunc::FastSubRots
// strings: 0038cce0: 'Nnk(' (raw)

MobyInstance *
mobyupdate_helpers::M457_0038ccf0
          (double param_1,double param_2,double param_3,float *param_4,int param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *moby;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  int *piVar13;
  longlong lVar12;
  float *pfVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar18;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f21;
  double dVar23;
  ulonglong in_f22;
  double dVar24;
  ulonglong in_f23;
  double dVar25;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x150;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar11;
  puVar7[0x2c] = in_LR;
  puVar7[0x1f] = in_f21;
  puVar7[0x20] = in_f22;
  puVar7[0x21] = in_f23;
  puVar7[0x22] = in_f24;
  puVar7[0x23] = in_f25;
  puVar7[0x24] = in_f26;
  puVar7[0x25] = in_f27;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x1c] = unaff_r29;
  pMVar18 = (MobyInstance *)0x0;
  puVar7[0x1e] = unaff_r31;
  puVar7[0x1b] = unaff_r28;
  puVar7[0x1d] = unaff_r30;
  moby = MobyUpdateChainStart;
  puVar7[0x1a] = unaff_r27;
  dVar29 = 1000000000.0;
  for (; moby != (MobyInstance *)0x0; moby = (MobyInstance *)moby->pChain) {
    if (((((moby->drawDistance != 0) &&
          (piVar13 = (int *)mobyutil::MB_GetPvarsIfMobyHasThem(moby),
          (moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) && (moby->pClass != (MobyClass *)0x0))
        && (((short)moby->pClass->mode_bits == 5 && (piVar13 != (int *)0x0)))) &&
       (dVar25 = 0.0, 0 < *piVar13)) {
      dVar23 = (double)(moby->pos).y;
      fVar2 = (float)((double)param_4[1] - dVar23);
      dVar24 = (double)(moby->pos).x;
      fVar3 = (float)((double)*param_4 - dVar24);
      dVar28 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      if (dVar28 < param_3) {
        fVar2 = (float)(dVar24 - (double)*param_4);
        fVar3 = (float)(dVar23 - (double)param_4[1]);
        fVar4 = (moby->pos).z;
        fVar5 = ABS(fVar2);
        fVar6 = ABS(fVar3);
        *(float *)((int)puVar7 + 0x7c) = fVar2;
        *(float *)(puVar7 + 0x10) = fVar3;
        fVar2 = *(float *)(param_5 + 8);
        dVar27 = (double)(fVar4 + 0.4);
        *(float *)((int)puVar7 + 0x84) = fVar5 - fVar6;
        dVar26 = 0.7853981852531433;
        uVar16 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar7 + 0x7c));
        if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
          fVar3 = fVar6;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        fVar10 = ABS(*(float *)(puVar7 + 0x10));
        if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
          fVar10 = fVar5;
        }
        dVar20 = dVar25;
        if (0.0 < fVar3) {
          lVar12 = uVar11 - 0x140;
          lVar14 = uVar11 - 0xa8;
          lVar17 = uVar11 - 0x98;
          lVar19 = 2;
          fVar3 = (fVar10 - fVar3) / (fVar10 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0xb4) = fVar3;
          *(float *)((int)puVar7 + 0xac) = fVar3;
          *(float *)(puVar7 + 0x16) = fVar3;
          *(float *)(puVar7 + 0x15) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar5;
          *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar3;
          *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar3 * fVar3;
            iVar8 = (int)lVar14;
            lVar12 = lVar12 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
            lVar17 = lVar17 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar17 = uVar11 - 0xa8;
          pfVar15 = (float *)&DAT_007358e0;
          lVar19 = 4;
          lVar12 = lVar1;
          lVar14 = lVar17;
          do {
            fVar3 = *pfVar15;
            fVar5 = pfVar15[1];
            pfVar15 = pfVar15 + 2;
            *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar3;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar14 = 2;
          lVar12 = lVar1;
          do {
            iVar8 = (int)lVar12;
            lVar12 = lVar12 + 0x10;
            iVar9 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar8 + 0xa8)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar6 + fVar4);
        }
        dVar20 = (double)fastfunc::FastSubRots(fVar2,(float)dVar20);
        dVar20 = (double)(float)(dVar20 * dVar20);
        fVar2 = *(float *)(param_5 + 4);
        if (dVar20 < (double)(float)(param_1 * param_1)) {
          fVar3 = param_4[2];
          *(float *)(puVar7 + 0xe) = (float)dVar28;
          dVar21 = ABS((double)(float)(dVar27 - (double)fVar3));
          *(float *)((int)puVar7 + 0x74) = (float)(dVar27 - (double)fVar3);
          *(float *)(puVar7 + 0xf) = (float)(ABS(dVar28) - dVar21);
          uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
          dVar22 = ABS((double)*(float *)(puVar7 + 0xe));
          if ((double)*(float *)(puVar7 + 0xf) - dVar25 < 0.0) {
            dVar22 = dVar21;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar21 = ABS((double)*(float *)((int)puVar7 + 0x74));
          if ((double)*(float *)(puVar7 + 0xf) - dVar25 < 0.0) {
            dVar21 = ABS(dVar28);
          }
          fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          if (dVar25 < dVar22) {
            lVar12 = uVar11 - 0x140;
            lVar14 = uVar11 - 200;
            lVar17 = uVar11 - 0xb8;
            lVar19 = 2;
            fVar6 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
            fVar5 = fVar6 * fVar6;
            *(float *)((int)puVar7 + 0x94) = fVar6;
            *(float *)((int)puVar7 + 0x8c) = fVar6;
            *(float *)(puVar7 + 0x12) = fVar6;
            *(float *)(puVar7 + 0x11) = fVar6;
            fVar6 = fVar5 * fVar5;
            *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar5;
            *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar6;
            *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar6 * fVar5;
            do {
              *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar6 * fVar6;
              iVar8 = (int)lVar14;
              lVar12 = lVar12 + 8;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar6 * fVar6;
              lVar17 = lVar17 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar17 = uVar11 - 200;
            pfVar15 = (float *)&DAT_007358e0;
            lVar19 = 4;
            lVar12 = lVar1;
            lVar14 = lVar17;
            do {
              fVar6 = *pfVar15;
              fVar5 = pfVar15[1];
              pfVar15 = pfVar15 + 2;
              *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar6;
              lVar12 = lVar12 + 8;
              *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
              lVar14 = lVar14 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar14 = 2;
            lVar12 = lVar1;
            do {
              iVar8 = (int)lVar12;
              iVar9 = (int)lVar17;
              lVar12 = lVar12 + 0x10;
              lVar17 = lVar17 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar8 + 0x88)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            dVar25 = (double)((float)(dVar25 + dVar26) * fVar3 + fVar4);
          }
          dVar25 = (double)fastfunc::FastSubRots(fVar2,(float)dVar25);
          if (((double)(float)(dVar25 * dVar25) < (double)(float)(param_2 * param_2)) &&
             (dVar25 = (double)((float)(dVar20 * (double)(float)(dVar25 * dVar25)) *
                               SQRT(SQRT((float)((double)param_4[2] - dVar27) *
                                         (float)((double)param_4[2] - dVar27) +
                                         (float)((double)*param_4 - dVar24) *
                                         (float)((double)*param_4 - dVar24) +
                                         (float)((double)param_4[1] - dVar23) *
                                         (float)((double)param_4[1] - dVar23)))), dVar25 < dVar29))
          {
            dVar29 = dVar25;
            pMVar18 = moby;
          }
        }
      }
    }
  }
  return pMVar18;
}



//==== 0038d2e8  ns=mobyupdate_unsorted  size=0x1650
// sig: undefined UpdateMoby_457(MobyInstance * moby)
// callers(0): 
// callees(13): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 0010e030 mobyutil::MB_genericExplosion; 00121740 partupd::SpawnPart_4; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 005c8318 rand

/* Moby 457 */

void mobyupdate_unsorted::UpdateMoby_457(MobyInstance *moby)

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
  MOBY_OCLASSES MVar10;
  float *pfVar11;
  MobyClass *pMVar12;
  float fVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  int iVar16;
  bool bVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar23;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar24;
  ulonglong uVar25;
  float *pfVar27;
  longlong lVar26;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
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
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar45;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar46;
  ulonglong in_f24;
  double dVar47;
  ulonglong in_f25;
  double dVar48;
  ulonglong in_f26;
  double dVar49;
  ulonglong in_f27;
  double dVar50;
  ulonglong in_f28;
  double dVar51;
  ulonglong in_f29;
  double dVar52;
  ulonglong in_f30;
  double dVar53;
  ulonglong in_f31;
  double dVar54;
  double dVar55;
  undefined8 uVar56;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 0x2e0;
  puVar15 = (ulonglong *)lVar22;
  *puVar15 = uVar18;
  puVar15[0x5e] = in_LR;
  puVar15[0x4e] = in_f18;
  puVar15[0x4f] = in_f19;
  puVar15[0x50] = in_f20;
  puVar15[0x51] = in_f21;
  puVar15[0x52] = in_f22;
  puVar15[0x53] = in_f23;
  puVar15[0x54] = in_f24;
  puVar15[0x55] = in_f25;
  puVar15[0x56] = in_f26;
  puVar15[0x57] = in_f27;
  puVar15[0x58] = in_f28;
  puVar15[0x59] = in_f29;
  puVar15[0x5a] = in_f30;
  puVar15[0x5b] = in_f31;
  puVar15[0x4d] = unaff_r31;
  puVar15[0x4c] = unaff_r30;
  puVar15[0x4b] = unaff_r29;
  puVar15[0x4a] = unaff_r28;
  puVar15[0x49] = unaff_r27;
  puVar15[0x48] = unaff_r26;
  if ((moby != (MobyInstance *)0x0) && (pfVar11 = (float *)moby->pVar, pfVar11 != (float *)0x0)) {
    dVar53 = 0.0;
    *(undefined4 *)(puVar15 + 0x1a) = 0;
    *(undefined4 *)((int)puVar15 + 0xd4) = 0;
    *(undefined4 *)(puVar15 + 0x1b) = 0;
    *(undefined4 *)((int)puVar15 + 0xdc) = 0;
    fVar2 = DAT_0071f408;
    pMVar12 = moby->pClass;
    fVar1 = moby->scale;
    *(float *)(puVar15 + 0x1b) = mobyutil::g_FrameTime * 8.0;
    dVar54 = 0.05000000074505806;
    moby->scale = fVar2 * 0.05 * (pMVar12->gScale - fVar1) + fVar1;
    dVar31 = (double)DAT_0071f408;
    dVar52 = 0.10000000149011612;
    fVar2 = (float)(dVar31 * 0.10000000149011612) * (mobyutil::g_FrameTime * 20.0 - pfVar11[0xc]) *
            DAT_0071f40c + pfVar11[0xc];
    pfVar11[0xc] = fVar2;
    fVar3 = animationSpeed;
    fVar1 = pfVar11[9];
    puVar15[0x46] = (longlong)(int)(animationSpeed * 250.5);
    iVar23 = *(int *)((int)puVar15 + 0x234);
    puVar15[0x46] = (longlong)(int)(fVar3 * 5.5);
    if ((int)fVar1 < iVar23 - *(int *)((int)puVar15 + 0x234)) {
      fVar13 = pfVar11[10];
      if ((((fVar13 == 0.0) || ((float)(int)*(short *)((int)fVar13 + 0xa6) != pfVar11[0x16])) ||
          (*(char *)((int)fVar13 + 0x20) == -2)) || (*(char *)((int)fVar13 + 0x20) == -3)) {
        pfVar11[10] = 0.0;
        pfVar11[0x11] = (float)(dVar31 * 0.10000000149011612 + (double)pfVar11[0x11]);
        puVar15[0x46] = (longlong)(int)(fVar3 * 100.5);
        if ((int)fVar1 < iVar23 - *(int *)((int)puVar15 + 0x234)) {
          fVar1 = pfVar11[0x12];
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
          fVar13 = fVar1 * fVar2;
          dVar31 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).y,
                                      (float)(dVar31 * 0.03999999910593033) *
                                      (fVar1 * fVar13 * 2.601887e-06 +
                                      fVar13 * -0.0001980741 +
                                      fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3));
          (moby->rotation).y = (float)dVar31;
          dVar31 = (double)DAT_0071f408;
        }
        fVar1 = pfVar11[0x12] + 1.5707963;
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
        fVar13 = fVar1 * fVar2;
        dVar31 = (double)fastfunc::FastWrapRot
                                   ((moby->rotation).z,
                                    (float)(dVar31 * dVar54) *
                                    (fVar1 * fVar13 * 2.601887e-06 +
                                    fVar13 * -0.0001980741 +
                                    fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3));
        (moby->rotation).z = (float)dVar31;
      }
      else {
        fVar1 = *(float *)((int)fVar13 + 0x14);
        fVar3 = *(float *)((int)fVar13 + 0x10);
        dVar50 = (double)(fVar1 - pfVar11[1]);
        fVar4 = *(float *)((int)fVar13 + 0x18) + pfVar11[0xb];
        dVar55 = (double)(fVar3 - *pfVar11);
        fVar13 = *(float *)((int)fVar13 + 0x1c);
        dVar36 = (double)(fVar1 - pfVar11[5]);
        dVar54 = (double)(fVar3 - pfVar11[4]);
        *pfVar11 = fVar3;
        pfVar11[1] = fVar1;
        dVar49 = (double)(fVar4 - pfVar11[2]);
        dVar51 = (double)(fVar4 - pfVar11[6]);
        pfVar11[2] = fVar4;
        pfVar11[3] = fVar13;
        fVar1 = fVar2 * fVar2 -
                (float)(dVar49 * dVar49 +
                       (double)(float)(dVar55 * dVar55 + (double)(float)(dVar50 * dVar50)));
        dVar48 = (double)(float)(dVar51 * dVar51 +
                                (double)(float)(dVar54 * dVar54 + (double)(float)(dVar36 * dVar36)))
        ;
        fVar3 = (float)(dVar51 * dVar49 +
                       (double)(float)(dVar54 * dVar55 + (double)(float)(dVar36 * dVar50))) * -2.0;
        fVar2 = fVar1 * 2.0;
        fVar1 = SQRT(fVar3 * fVar3 - -(float)(dVar48 * (double)(fVar1 * 4.0)));
        dVar46 = (double)((fVar1 - fVar3) / fVar2);
        dVar47 = (double)((-fVar3 - fVar1) / fVar2);
        if ((dVar46 <= 0.0) || (dVar47 <= 0.0)) {
          dVar45 = -1.0;
          if (0.0 - dVar47 < 0.0) {
            dVar45 = dVar47;
          }
          if (0.0 - dVar46 < 0.0) {
            dVar45 = dVar46;
          }
        }
        else {
          dVar45 = dVar47;
          if (dVar47 - dVar46 < 0.0) {
            dVar45 = dVar46;
          }
        }
        if (0.0 < dVar45) {
          fVar1 = (float)(dVar45 * dVar55 + dVar54);
          dVar54 = (double)fVar1;
          fVar2 = (float)(dVar45 * dVar50 + dVar36);
          dVar46 = (double)fVar2;
          dVar36 = (double)(float)(dVar45 * dVar49 + dVar51);
          *(float *)((int)puVar15 + 0x1a4) = fVar1;
          *(float *)(puVar15 + 0x35) = fVar2;
          fVar1 = (moby->rotation).z;
          *(float *)((int)puVar15 + 0x1ac) = (float)(ABS(dVar54) - ABS(dVar46));
          uVar25 = (ulonglong)(*(uint *)((int)puVar15 + 0x1a4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x1ac) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x35) >> 0x1d) & 4;
          uVar28 = uVar25 << 2;
          dVar31 = ABS((double)*(float *)((int)puVar15 + 0x1a4));
          if (*(float *)((int)puVar15 + 0x1ac) - 0.0 < 0.0) {
            dVar31 = ABS(dVar46);
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar28);
          dVar51 = ABS((double)*(float *)(puVar15 + 0x35));
          if (*(float *)((int)puVar15 + 0x1ac) - 0.0 < 0.0) {
            dVar51 = ABS(dVar54);
          }
          fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
          dVar47 = dVar53;
          if (0.0 < dVar31) {
            lVar21 = uVar18 - 0x2d0;
            lVar29 = uVar18 - 0xc0;
            lVar26 = uVar18 - 0xd0;
            lVar30 = 2;
            fVar13 = (float)(dVar51 - dVar31) / (float)(dVar51 + dVar31);
            fVar4 = fVar13 * fVar13;
            *(float *)((int)puVar15 + 0x21c) = fVar13;
            *(float *)((int)puVar15 + 0x214) = fVar13;
            *(float *)(puVar15 + 0x43) = fVar13;
            *(float *)(puVar15 + 0x42) = fVar13;
            fVar13 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0x214) = *(float *)((int)puVar15 + 0x214) * fVar4;
            *(float *)(puVar15 + 0x43) = *(float *)(puVar15 + 0x43) * fVar13;
            *(float *)((int)puVar15 + 0x21c) = *(float *)((int)puVar15 + 0x21c) * fVar13 * fVar4;
            do {
              *(float *)((int)lVar21 + 0x210) = *(float *)((int)lVar21 + 0x200) * fVar13 * fVar13;
              iVar23 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar23 + 4) * fVar13 * fVar13;
              lVar29 = lVar29 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar29 = uVar18 - 0xd0;
            uVar28 = ZEXT48(&DAT_007358e0);
            lVar21 = lVar22;
            lVar26 = lVar29;
            do {
              pfVar27 = (float *)uVar28;
              fVar13 = pfVar27[1];
              uVar28 = uVar28 + 8;
              *(float *)((int)lVar21 + 0x210) = *(float *)((int)lVar21 + 0x210) * *pfVar27;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar13;
              lVar26 = lVar26 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar26 = 2;
            lVar21 = lVar22;
            dVar31 = dVar53;
            do {
              iVar23 = (int)lVar21;
              iVar16 = (int)lVar29;
              lVar21 = lVar21 + 0x10;
              lVar29 = lVar29 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x210)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            dVar47 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
          }
          dVar49 = 188.4955596923828;
          dVar31 = (double)mobyutil::MB_DeltAngSpeed
                                     ((double)fVar1,dVar47,(double)(DAT_0071f418 * 188.49556),0,0,
                                      &DAT_0038d24c,uVar28,pfVar11 + 0xd);
          *(float *)((int)puVar15 + 0x19c) = (float)dVar36;
          (moby->rotation).z = (float)dVar31;
          fVar1 = (moby->rotation).y;
          fVar2 = SQRT((float)(dVar54 * dVar54 + (double)(float)(dVar46 * dVar46)));
          dVar54 = (double)DAT_0071f418;
          dVar51 = ABS((double)fVar2);
          *(float *)(puVar15 + 0x33) = fVar2;
          *(float *)(puVar15 + 0x34) = (float)(dVar51 - ABS(dVar36));
          uVar28 = (ulonglong)(*(uint *)(puVar15 + 0x33) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar15 + 0x34) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x19c) >> 0x1d) & 4;
          uVar25 = uVar28 << 2 | 0x735900;
          uVar28 = uVar28 << 2;
          dVar31 = ABS((double)*(float *)(puVar15 + 0x33));
          if ((double)*(float *)(puVar15 + 0x34) - dVar53 < 0.0) {
            dVar31 = ABS(dVar36);
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar28);
          dVar36 = ABS((double)*(float *)((int)puVar15 + 0x19c));
          if ((double)*(float *)(puVar15 + 0x34) - dVar53 < 0.0) {
            dVar36 = dVar51;
          }
          fVar3 = *(float *)((int)uVar25 + 4);
          dVar51 = dVar53;
          if (dVar53 < dVar31) {
            lVar21 = uVar18 - 0x2d0;
            lVar29 = uVar18 - 0xe0;
            lVar26 = uVar18 - 0xf0;
            lVar30 = 2;
            fVar13 = (float)(dVar36 - dVar31) / (float)(dVar36 + dVar31);
            fVar4 = fVar13 * fVar13;
            *(float *)((int)puVar15 + 0x1fc) = fVar13;
            *(float *)((int)puVar15 + 500) = fVar13;
            *(float *)(puVar15 + 0x3f) = fVar13;
            *(float *)(puVar15 + 0x3e) = fVar13;
            fVar13 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 500) = *(float *)((int)puVar15 + 500) * fVar4;
            *(float *)(puVar15 + 0x3f) = *(float *)(puVar15 + 0x3f) * fVar13;
            *(float *)((int)puVar15 + 0x1fc) = *(float *)((int)puVar15 + 0x1fc) * fVar13 * fVar4;
            do {
              *(float *)((int)lVar21 + 0x1f0) = *(float *)((int)lVar21 + 0x1e0) * fVar13 * fVar13;
              iVar23 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar23 + 4) * fVar13 * fVar13;
              lVar29 = lVar29 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar29 = uVar18 - 0xf0;
            uVar25 = ZEXT48(&DAT_007358e0);
            lVar21 = lVar22;
            lVar26 = lVar29;
            do {
              pfVar27 = (float *)uVar25;
              fVar13 = pfVar27[1];
              uVar25 = uVar25 + 8;
              *(float *)((int)lVar21 + 0x1f0) = *(float *)((int)lVar21 + 0x1f0) * *pfVar27;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar13;
              lVar26 = lVar26 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar26 = 2;
            lVar21 = lVar22;
            dVar31 = dVar53;
            do {
              iVar23 = (int)lVar21;
              iVar16 = (int)lVar29;
              lVar21 = lVar21 + 0x10;
              lVar29 = lVar29 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x1f0)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            uVar28 = ZEXT48(&DAT_0038d24c);
            dVar51 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
          }
          dVar31 = (double)mobyutil::MB_DeltAngSpeed
                                     ((double)fVar1,-dVar51,(double)(float)(dVar54 * dVar49),dVar53,
                                      dVar53,uVar28,uVar25,pfVar11 + 0xe);
          (moby->rotation).y = (float)dVar31;
          dVar31 = (double)DAT_0071f408;
        }
        if (6.0 <= (float)SQRT(dVar48)) {
          fVar1 = (float)(dVar31 * dVar52 + (double)pfVar11[0x11]);
        }
        else {
          fVar1 = pfVar11[0x11] * (float)SQRT(dVar48) * 0.16666667;
        }
        pfVar11[0x11] = fVar1;
      }
    }
    mobyutil::MB_SphericalToVector
              (pfVar11[0xc],(moby->rotation).z,-(moby->rotation).y,(float *)(puVar15 + 0x1e));
    *(undefined4 *)(puVar15 + 0x20) = 0;
    *(undefined4 *)((int)puVar15 + 0x104) = 0;
    *(undefined4 *)(puVar15 + 0x21) = 0;
    *(undefined4 *)((int)puVar15 + 0x10c) = 0;
    dVar54 = -1.0;
    dVar51 = 1.0;
    dVar31 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
    *(float *)(puVar15 + 0x20) = (float)dVar31;
    dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar54,(float)dVar51);
    *(float *)((int)puVar15 + 0x104) = (float)dVar31;
    dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar54,(float)dVar51);
    *(float *)(puVar15 + 0x21) = (float)dVar31;
    dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar52,0.2);
    fVar4 = mobyutil::g_FrameTime;
    fVar2 = *(float *)((int)puVar15 + 0x104);
    fVar3 = *(float *)(puVar15 + 0x20);
    fVar13 = *(float *)(puVar15 + 0x21);
    dVar36 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar54 = (double)mobyutil::g_FrameTime;
    fVar1 = (float)((double)(float)(dVar31 * dVar54) / dVar36);
    dVar31 = dVar53;
    if (dVar53 - dVar36 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    dVar46 = dVar53;
    if (dVar53 - dVar36 < 0.0) {
      dVar46 = (double)(fVar2 * fVar1);
    }
    dVar47 = dVar53;
    if (dVar53 - dVar36 < 0.0) {
      dVar47 = (double)(fVar13 * fVar1);
    }
    if (dVar36 - dVar53 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    if (dVar36 - dVar53 < 0.0) {
      dVar46 = (double)(fVar2 * fVar1);
    }
    if (dVar36 - dVar53 < 0.0) {
      dVar47 = (double)(fVar13 * fVar1);
    }
    *(float *)(puVar15 + 0x20) = (float)dVar31;
    *(float *)((int)puVar15 + 0x104) = (float)dVar46;
    *(float *)(puVar15 + 0x21) = (float)dVar47;
    dVar31 = (double)mobyutil::MB_randRangeFloat((float)(dVar54 * dVar52),fVar4);
    fVar2 = *(float *)((int)puVar15 + 0xf4);
    fVar3 = *(float *)(puVar15 + 0x1e);
    fVar13 = *(float *)(puVar15 + 0x1f);
    *(undefined4 *)((int)puVar15 + 0xec) = *(undefined4 *)((int)puVar15 + 0xfc);
    dVar54 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = (float)(-dVar31 / dVar54);
    dVar31 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    dVar36 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    dVar46 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar46 = (double)(fVar13 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar46 = (double)(fVar13 * fVar1);
    }
    *(float *)(puVar15 + 0x1c) = (float)dVar31;
    *(float *)((int)puVar15 + 0xe4) = (float)dVar36;
    *(float *)(puVar15 + 0x1d) = (float)dVar46;
    *(float *)(puVar15 + 0x20) = (float)((double)*(float *)(puVar15 + 0x20) + dVar31);
    *(float *)((int)puVar15 + 0x104) = (float)((double)*(float *)((int)puVar15 + 0x104) + dVar36);
    *(float *)(puVar15 + 0x21) = (float)((double)*(float *)(puVar15 + 0x21) + dVar46);
    dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar53,(float)dVar51);
    fVar2 = *(float *)((int)puVar15 + 0xf4);
    fVar3 = *(float *)(puVar15 + 0x1e);
    fVar13 = *(float *)(puVar15 + 0x1f);
    fVar1 = pfVar11[0xc];
    fVar4 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    fVar6 = (moby->pos).z;
    *(undefined4 *)((int)puVar15 + 0xec) = *(undefined4 *)((int)puVar15 + 0xfc);
    dVar54 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = (float)((double)(float)(dVar31 * (double)fVar1) / dVar54);
    dVar31 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar31 = (double)(fVar13 * fVar1);
    }
    dVar36 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    dVar46 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar46 = (double)(fVar3 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar31 = (double)(fVar13 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar46 = (double)(fVar3 * fVar1);
    }
    *(float *)(puVar15 + 0x1d) = (float)(dVar31 + (double)fVar6);
    *(float *)((int)puVar15 + 0xe4) = (float)(dVar36 + (double)fVar5);
    *(float *)(puVar15 + 0x1c) = (float)(dVar46 + (double)fVar4);
    iVar23 = mobyutil::MB_randRange(0x1c,0x28);
    puVar15[0x46] = (longlong)iVar23;
    dVar55 = 0.5;
    puVar15[0x46] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar15[0x46] + 0.5))
    ;
    uVar14 = *(undefined4 *)((int)puVar15 + 0x234);
    uVar20 = mobyutil::MB_randRange(0x28,0x46);
    partupd::SpawnPart_4(uVar18 - 0x200,uVar18 - 0x1e0,0x6f00afff,0x100000ff,uVar14,0x28,uVar20,1);
    fVar7 = (moby->pos).y;
    *(f32 *)(puVar15 + 0x18) = (moby->pos).x;
    fVar8 = (moby->pos).z;
    *(f32 *)((int)puVar15 + 0xc4) = fVar7;
    fVar7 = (moby->pos).w;
    *(f32 *)(puVar15 + 0x19) = fVar8;
    *(f32 *)((int)puVar15 + 0xcc) = fVar7;
    pfVar11[4] = pfVar11[4] + *(float *)(puVar15 + 0x1e);
    pfVar11[5] = pfVar11[5] + *(float *)((int)puVar15 + 0xf4);
    pfVar11[6] = pfVar11[6] + *(float *)(puVar15 + 0x1f);
    dVar31 = (double)fastfunc::FastWrapRot(pfVar11[0x12],pfVar11[0x14]);
    pfVar11[0x12] = (float)dVar31;
    dVar54 = (double)fastfunc::FastWrapRot(pfVar11[0x13],pfVar11[0x15]);
    dVar50 = 3.141592502593994;
    dVar49 = -3.141592502593994;
    dVar48 = -0.16666656732559204;
    dVar47 = 0.008333025500178337;
    dVar46 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar31 = (double)(float)(3.141592502593994 - dVar54);
    if (dVar54 - (double)(float)(3.141592502593994 - dVar54) < 0.0) {
      dVar31 = dVar54;
    }
    dVar45 = (double)(float)(-3.141592502593994 - dVar54);
    if ((double)(float)(-3.141592502593994 - dVar54) - dVar31 < 0.0) {
      dVar45 = dVar31;
    }
    pfVar11[0x13] = (float)dVar54;
    dVar54 = (double)(float)(dVar45 * dVar45);
    dVar37 = (double)(float)(dVar54 * (double)(float)(dVar54 * dVar45));
    dVar31 = (double)(float)(dVar54 * dVar37);
    dVar31 = (double)fastfunc::FastWrapRot
                               (pfVar11[0x12],
                                ((float)(dVar54 * dVar31) * 2.601887e-06 +
                                (float)(dVar31 * -0.0001980741071747616 +
                                       (double)(float)(dVar37 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar54 * 
                                                  dVar45) * -0.16666656732559204 + dVar45)))) * 0.15
                               );
    pfVar11[0x12] = (float)dVar31;
    uVar24 = (int)pfVar11[0x11] >> 0x1f;
    fVar1 = pfVar11[0x11];
    if (0x3f666666 < (int)((uVar24 >> 1 ^ (uint)pfVar11[0x11]) - uVar24)) {
      pfVar11[0x11] = 0.9;
      fVar1 = 0.9;
    }
    dVar31 = (double)fVar1;
    bVar17 = false;
    dVar45 = 1.570796251296997;
    dVar54 = 0.699999988079071;
    do {
      dVar33 = (double)pfVar11[0x12];
      dVar32 = (double)(float)((double)pfVar11[0x13] + dVar45);
      dVar35 = (double)(float)(dVar33 + dVar45);
      dVar37 = (double)(float)(dVar50 - dVar33);
      if (dVar33 - (double)(float)(dVar50 - dVar33) < 0.0) {
        dVar37 = dVar33;
      }
      dVar38 = (double)(float)(dVar50 - dVar32);
      if (dVar32 - (double)(float)(dVar50 - dVar32) < 0.0) {
        dVar38 = dVar32;
      }
      dVar39 = (double)(float)(dVar50 - dVar35);
      if (dVar35 - (double)(float)(dVar50 - dVar35) < 0.0) {
        dVar39 = dVar35;
      }
      dVar34 = (double)(float)(dVar49 - dVar33);
      if ((double)(float)(dVar49 - dVar33) - dVar37 < 0.0) {
        dVar34 = dVar37;
      }
      dVar37 = (double)(float)(dVar49 - dVar32);
      if ((double)(float)(dVar49 - dVar32) - dVar38 < 0.0) {
        dVar37 = dVar38;
      }
      dVar33 = (double)(float)(dVar34 * dVar34);
      dVar32 = (double)(float)(dVar49 - dVar35);
      if ((double)(float)(dVar49 - dVar35) - dVar39 < 0.0) {
        dVar32 = dVar39;
      }
      dVar35 = (double)(float)(dVar37 * dVar37);
      dVar39 = (double)(float)(dVar32 * dVar32);
      dVar42 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar34));
      dVar44 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar37));
      dVar40 = (double)(float)(dVar33 * dVar42);
      dVar43 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar32));
      dVar38 = (double)(float)(dVar35 * dVar44);
      dVar41 = (double)(float)(dVar39 * dVar43);
      fVar1 = (float)((double)(float)(dVar35 * dVar38) * dVar36 +
                     (double)(float)(dVar38 * dVar46 +
                                    (double)(float)(dVar44 * dVar47 +
                                                   (double)(float)((double)(float)(dVar35 * dVar37)
                                                                   * dVar48 + dVar37))));
      dVar37 = (double)((float)(dVar31 * (double)(float)((double)(float)(dVar33 * dVar40) * dVar36 +
                                                        (double)(float)(dVar40 * dVar46 +
                                                                       (double)(float)(dVar42 * 
                                                  dVar47 + (double)(float)((double)(float)(dVar33 * 
                                                  dVar34) * dVar48 + dVar34))))) * fVar1);
      dVar31 = (double)((float)(dVar31 * (double)(float)((double)(float)(dVar39 * dVar41) * dVar36 +
                                                        (double)(float)(dVar41 * dVar46 +
                                                                       (double)(float)(dVar43 * 
                                                  dVar47 + (double)(float)((double)(float)(dVar39 * 
                                                  dVar32) * dVar48 + dVar32))))) * fVar1);
      fastfunc::FastEulerToMtx1(uVar18 - 0x1a0,lVar19 + 0x40);
      fVar1 = *(float *)((int)puVar15 + 0x154);
      fVar2 = *(float *)((int)puVar15 + 0x164);
      fVar3 = *(float *)(puVar15 + 0x2b);
      fVar13 = *(float *)(puVar15 + 0x2d);
      (moby->pos).x =
           pfVar11[4] +
           (float)((double)*(float *)(puVar15 + 0x2c) * dVar31 +
                  (double)(float)((double)*(float *)(puVar15 + 0x2a) * dVar37));
      (moby->pos).y =
           pfVar11[5] + (float)((double)fVar2 * dVar31 + (double)(float)((double)fVar1 * dVar37));
      (moby->pos).z =
           pfVar11[6] + (float)((double)fVar13 * dVar31 + (double)(float)((double)fVar3 * dVar37));
      (moby->pos).w = pfVar11[7];
      iVar23 = collproc::CollLine(uVar18 - 0x220,lVar19 + 0x10,6,lVar19,0);
      if (iVar23 == 0) {
        if (!bVar17) goto LAB_0038e400;
        break;
      }
      bVar17 = true;
      dVar31 = (double)(float)((double)pfVar11[0x11] * dVar54);
      pfVar11[0x11] = (float)((double)pfVar11[0x11] * dVar54);
    } while (dVar52 < dVar31);
    fVar1 = (moby->pos).x;
    fVar2 = *(float *)(puVar15 + 0x18);
    fVar3 = (moby->pos).y;
    fVar13 = *(float *)((int)puVar15 + 0xc4);
    fVar4 = fVar1 - fVar2;
    fVar5 = fVar3 - fVar13;
    dVar52 = ABS((double)fVar4);
    dVar54 = ABS((double)fVar5);
    *(float *)((int)puVar15 + 0x18c) = fVar4;
    *(float *)(puVar15 + 0x32) = fVar5;
    *(float *)((int)puVar15 + 0x194) = (float)(dVar52 - dVar54);
    uVar28 = (ulonglong)(*(uint *)((int)puVar15 + 0x18c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x194) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x32) >> 0x1d) & 4;
    dVar31 = ABS((double)*(float *)((int)puVar15 + 0x18c));
    if ((double)*(float *)((int)puVar15 + 0x194) - dVar53 < 0.0) {
      dVar31 = dVar54;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar54 = ABS((double)*(float *)(puVar15 + 0x32));
    if ((double)*(float *)((int)puVar15 + 0x194) - dVar53 < 0.0) {
      dVar54 = dVar52;
    }
    fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar52 = dVar53;
    if (dVar53 < dVar31) {
      lVar21 = uVar18 - 0x2d0;
      lVar29 = uVar18 - 0x100;
      lVar26 = uVar18 - 0x110;
      lVar30 = 2;
      fVar6 = (float)(dVar54 - dVar31) / (float)(dVar54 + dVar31);
      fVar9 = fVar6 * fVar6;
      *(float *)((int)puVar15 + 0x1dc) = fVar6;
      *(float *)((int)puVar15 + 0x1d4) = fVar6;
      *(float *)(puVar15 + 0x3b) = fVar6;
      *(float *)(puVar15 + 0x3a) = fVar6;
      fVar6 = fVar9 * fVar9;
      *(float *)((int)puVar15 + 0x1d4) = *(float *)((int)puVar15 + 0x1d4) * fVar9;
      *(float *)(puVar15 + 0x3b) = *(float *)(puVar15 + 0x3b) * fVar6;
      *(float *)((int)puVar15 + 0x1dc) = *(float *)((int)puVar15 + 0x1dc) * fVar6 * fVar9;
      do {
        *(float *)((int)lVar21 + 0x1d0) = *(float *)((int)lVar21 + 0x1c0) * fVar6 * fVar6;
        iVar23 = (int)lVar26;
        lVar26 = lVar26 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar18 - 0x110;
      pfVar27 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar26 = lVar29;
      do {
        fVar6 = *pfVar27;
        fVar9 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar21 + 0x1d0) = *(float *)((int)lVar21 + 0x1d0) * fVar6;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar9;
        lVar26 = lVar26 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar26 = 2;
      lVar21 = lVar22;
      dVar31 = dVar53;
      do {
        iVar23 = (int)lVar21;
        iVar16 = (int)lVar29;
        lVar21 = lVar21 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x1d0)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar52 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar5);
    }
    fVar13 = fVar13 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar1 = *(float *)(puVar15 + 0x19);
    (moby->rotation).z = (float)dVar52;
    fVar1 = (moby->pos).z - fVar1;
    fVar2 = SQRT(fVar2 * fVar2 + fVar13 * fVar13);
    *(float *)((int)puVar15 + 0x184) = fVar1;
    dVar54 = ABS((double)fVar1);
    dVar52 = ABS((double)fVar2);
    *(float *)(puVar15 + 0x30) = fVar2;
    *(float *)(puVar15 + 0x31) = (float)(dVar52 - dVar54);
    uVar28 = (ulonglong)(*(uint *)(puVar15 + 0x30) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x31) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x184) >> 0x1d) & 4;
    dVar31 = ABS((double)*(float *)(puVar15 + 0x30));
    if ((double)*(float *)(puVar15 + 0x31) - dVar53 < 0.0) {
      dVar31 = dVar54;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar54 = ABS((double)*(float *)((int)puVar15 + 0x184));
    if ((double)*(float *)(puVar15 + 0x31) - dVar53 < 0.0) {
      dVar54 = dVar52;
    }
    fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar52 = dVar53;
    if (dVar53 < dVar31) {
      lVar21 = uVar18 - 0x2d0;
      lVar26 = uVar18 - 0x130;
      lVar29 = uVar18 - 0x120;
      lVar30 = 2;
      fVar3 = (float)(dVar54 - dVar31) / (float)(dVar54 + dVar31);
      fVar13 = fVar3 * fVar3;
      *(float *)((int)puVar15 + 0x1bc) = fVar3;
      *(float *)((int)puVar15 + 0x1b4) = fVar3;
      *(float *)(puVar15 + 0x37) = fVar3;
      *(float *)(puVar15 + 0x36) = fVar3;
      fVar3 = fVar13 * fVar13;
      *(float *)((int)puVar15 + 0x1b4) = *(float *)((int)puVar15 + 0x1b4) * fVar13;
      *(float *)(puVar15 + 0x37) = *(float *)(puVar15 + 0x37) * fVar3;
      *(float *)((int)puVar15 + 0x1bc) = *(float *)((int)puVar15 + 0x1bc) * fVar3 * fVar13;
      do {
        *(float *)((int)lVar21 + 0x1b0) = *(float *)((int)lVar21 + 0x1a0) * fVar3 * fVar3;
        iVar23 = (int)lVar26;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar18 - 0x130;
      pfVar27 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar26 = lVar29;
      do {
        fVar3 = *pfVar27;
        fVar13 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar21 + 0x1b0) = *(float *)((int)lVar21 + 0x1b0) * fVar3;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar13;
        lVar26 = lVar26 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar21 = 2;
      dVar31 = dVar53;
      do {
        iVar23 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar16 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x1b0)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar52 = (double)((float)(dVar31 + 0.7853981852531433) * fVar1 + fVar2);
    }
    (moby->rotation).y = (float)-dVar52;
    pfVar11[0xd] = 0.0;
    pfVar11[0xe] = 0.0;
LAB_0038e400:
    if ((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) || ((int)(moby->pos).z < 0)) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      fVar1 = *(float *)((int)puVar15 + 0xf4);
      fVar2 = *(float *)(puVar15 + 0x1e);
      *(MobyInstance **)(puVar15 + 0x24) = moby;
      *(undefined **)((int)puVar15 + 0x124) = &DAT_00830000;
      dVar54 = (double)(fVar2 * fVar2 + fVar1 * fVar1);
      *(undefined4 *)((int)puVar15 + 300) = 0x40400000;
      *(undefined4 *)(puVar15 + 0x26) = 1;
      dVar31 = dVar53;
      dVar52 = dVar53;
      if ((double)(float)SQRT(dVar54) != dVar53) {
        dVar31 = 1.0 / SQRT(dVar54);
        dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar54 * dVar31) * dVar31 - dVar51
                                                 ) * (double)(float)(dVar55 * dVar31) + dVar31);
        dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar54 * dVar31) * dVar31 - dVar51
                                                 ) * (double)(float)(dVar55 * dVar31) + dVar31);
        fVar3 = (float)(-(double)(float)((double)(float)(dVar54 * dVar31) * dVar31 - dVar51) *
                        (double)(float)(dVar55 * dVar31) + dVar31);
        dVar52 = (double)(fVar2 * fVar3);
        dVar31 = (double)(fVar1 * fVar3);
      }
      *(float *)(puVar15 + 0x22) = (float)dVar52;
      *(float *)((int)puVar15 + 0x114) = (float)dVar31;
      *(undefined4 *)(puVar15 + 0x23) = 0x3f800000;
      *(undefined4 *)((int)puVar15 + 0x11c) = 0x45afdf66;
      MVar10 = moby->oClass;
      *(undefined1 *)(puVar15 + 0x25) = 3;
      *(undefined1 *)((int)puVar15 + 0x129) = 3;
      *(MOBY_OCLASSES *)((int)puVar15 + 0x12a) = MVar10;
      iVar23 = collproc::CollLine(uVar18 - 0x220,lVar19 + 0x10,0,lVar19,uVar18 - 0x1d0);
      if (iVar23 == 0) {
        iVar23 = fastfunc::FastDecTimerS32(pfVar11 + 9);
        if ((iVar23 != 0) ||
           (fVar1 = (moby->pos).y - (g_heroMobyPtr->pos).y,
           fVar2 = (moby->pos).x - (g_heroMobyPtr->pos).x,
           200.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else {
        uVar56 = 0x4022000000000000;
        uVar20 = 0x402e000000000000;
        if (CollOutput.pMoby == (MobyInstance *)0x0) {
          if (0 < CollOutput.poly) {
            moby->setByGroup = '\x01';
            (moby->pos).x = CollOutput.ip.x;
            (moby->pos).y = CollOutput.ip.y;
            (moby->pos).z = CollOutput.ip.z;
            (moby->pos).w = CollOutput.ip.w;
            fastfunc::FastVecNormalize(uVar18 - 0x210,uVar18 - 0x1f0,0xa10980);
            fVar1 = mobyutil::g_FrameTime;
            fVar2 = *(float *)((int)puVar15 + 0xd4);
            fVar3 = *(float *)(puVar15 + 0x1a);
            fVar13 = *(float *)(puVar15 + 0x1b);
            dVar52 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
            puVar15[0x12] = 0;
            puVar15[0x14] = 1;
            puVar15[0x15] = 1;
            puVar15[0x16] = 0xffffffffffffffff;
            puVar15[0x17] = 0;
            fVar1 = (float)((double)(fVar1 * 2.0) / dVar52);
            dVar31 = dVar53;
            if (dVar53 - dVar52 < 0.0) {
              dVar31 = (double)(fVar3 * fVar1);
            }
            dVar54 = dVar53;
            if (dVar53 - dVar52 < 0.0) {
              dVar54 = (double)(fVar2 * fVar1);
            }
            dVar36 = dVar53;
            if (dVar53 - dVar52 < 0.0) {
              dVar36 = (double)(fVar13 * fVar1);
            }
            if (dVar52 - dVar53 < 0.0) {
              dVar31 = (double)(fVar3 * fVar1);
            }
            if (dVar52 - dVar53 < 0.0) {
              dVar54 = (double)(fVar2 * fVar1);
            }
            if (dVar52 - dVar53 < 0.0) {
              dVar36 = (double)(fVar13 * fVar1);
            }
            *(float *)(puVar15 + 0x1a) = (float)dVar31;
            *(float *)((int)puVar15 + 0xd4) = (float)dVar54;
            *(float *)(puVar15 + 0x1b) = (float)dVar36;
            mobyutil::MB_genericExplosion
                      (dVar53,dVar51,0x4010000000000000,0x4000000000000000,uVar56,dVar51,uVar20,
                       lVar19,uVar18 - 0x210,0,&DAT_0038d24c,0xffffffffffffffff,10,3,9);
            mobyfunc::DeleteMoby(moby);
            return;
          }
        }
        else if (((CollOutput.pMoby != g_heroMobyPtr) &&
                 (CollOutput.pMoby != (MobyInstance *)pfVar11[8])) &&
                ((CollOutput.pMoby)->oClass != RATCHET && (CollOutput.pMoby)->oClass != ROCKET_01C9)
                ) {
          moby->setByGroup = '\x02';
          (moby->pos).x = CollOutput.ip.x;
          (moby->pos).y = CollOutput.ip.y;
          (moby->pos).z = CollOutput.ip.z;
          (moby->pos).w = CollOutput.ip.w;
          fastfunc::FastVecNormalize(uVar18 - 0x210,uVar18 - 0x1f0,0xa10980);
          fVar1 = mobyutil::g_FrameTime;
          fVar2 = *(float *)((int)puVar15 + 0xd4);
          fVar3 = *(float *)(puVar15 + 0x1a);
          fVar13 = *(float *)(puVar15 + 0x1b);
          dVar52 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
          puVar15[0x12] = 0;
          puVar15[0x14] = 1;
          puVar15[0x15] = 1;
          puVar15[0x16] = 0xffffffffffffffff;
          puVar15[0x17] = 0;
          fVar1 = (float)((double)(fVar1 * 2.0) / dVar52);
          dVar31 = dVar53;
          if (dVar53 - dVar52 < 0.0) {
            dVar31 = (double)(fVar3 * fVar1);
          }
          dVar54 = dVar53;
          if (dVar53 - dVar52 < 0.0) {
            dVar54 = (double)(fVar2 * fVar1);
          }
          dVar36 = dVar53;
          if (dVar53 - dVar52 < 0.0) {
            dVar36 = (double)(fVar13 * fVar1);
          }
          if (dVar52 - dVar53 < 0.0) {
            dVar31 = (double)(fVar3 * fVar1);
          }
          if (dVar52 - dVar53 < 0.0) {
            dVar54 = (double)(fVar2 * fVar1);
          }
          if (dVar52 - dVar53 < 0.0) {
            dVar36 = (double)(fVar13 * fVar1);
          }
          *(float *)(puVar15 + 0x1a) = (float)dVar31;
          *(float *)((int)puVar15 + 0xd4) = (float)dVar54;
          *(float *)(puVar15 + 0x1b) = (float)dVar36;
          mobyutil::MB_genericExplosion
                    (dVar53,dVar53,0x4010000000000000,0x4000000000000000,uVar56,dVar51,uVar20,lVar19
                     ,uVar18 - 0x210,0,&DAT_0038d24c,0xffffffffffffffff,10,3,9);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      fVar1 = pfVar11[9];
      puVar15[0x46] = (longlong)(int)(animationSpeed * 32.5);
      if (fVar1 == (float)(((int)fVar1 / *(int *)((int)puVar15 + 0x234)) *
                          *(int *)((int)puVar15 + 0x234))) {
        uVar24 = rand();
        if ((uVar24 & 1) != 0) {
          dVar31 = (double)mobyutil::MB_randRangeFloat(-0.7,-1.5);
          pfVar11[0x14] = (float)((double)pfVar11[0x14] * dVar31);
        }
        uVar24 = rand();
        if ((uVar24 & 1) != 0) {
          dVar31 = (double)mobyutil::MB_randRangeFloat(-0.6,-1.6);
          pfVar11[0x15] = (float)((double)pfVar11[0x15] * dVar31);
        }
      }
    }
  }
  return;
}



//==== 0038e938  ns=mobyupdate_helpers  size=0x14
// sig: undefined M459_0038e938(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M459_0038e938(void)

{
  DAT_008421f0 = 0x10000;
  return;
}



//==== 0038e978  ns=mobyupdate_helpers  size=0x374
// sig: undefined M459_0038e978(void)
// callers(1): 0038f550 mobyupdate_unsorted::UpdateMoby_459
// callees(5): 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00126dd8 partupd::SpawnPart_22

void mobyupdate_helpers::M459_0038e978
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined1 local_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 local_e0 [12];
  longlong local_b0;
  
  iVar5 = 0;
  dVar7 = 1.0;
  dVar8 = -1.0;
  dVar9 = 0.800000011920929;
  dVar10 = 1.2000000476837158;
  dVar11 = 105000.0;
  dVar12 = 157500.0;
  dVar13 = 0.5;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  do {
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
    mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
    local_e0[0] = 0x4f008fff;
    local_e0[1] = 0x4f008fff;
    local_e0[2] = 0x4f007fff;
    local_e0[4] = 0x2fffffff;
    local_e0[3] = 0x4f006fff;
    local_e0[5] = 0x2fffffff;
    local_e0[6] = 0x2f005f7f;
    local_e0[7] = 0x2f004f7f;
    local_e0[8] = 0x2f003f7f;
    local_e0[9] = 0x2f00004f;
    local_e0[10] = 0x2f000000;
    local_e0[0xb] = 0x3f000000;
    mobyfunc::GetBonePosition(param_1,1,auStack_f0);
    lVar3 = mobyutil::MB_randInt(6);
    uVar1 = *(undefined4 *)((int)local_e0 + (int)(lVar3 << 2));
    lVar3 = mobyutil::MB_randInt(6);
    uVar2 = *(undefined4 *)((int)local_e0 + (int)(lVar3 << 2) + 0x18);
    uVar6 = mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    iVar4 = mobyutil::MB_randRange(5,0xf);
    local_b0 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar4 + dVar13));
    partupd::SpawnPart_22(uVar6,auStack_f0,local_100,uVar1,uVar2);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}



//==== 0038ed08  ns=mobyupdate_helpers  size=0x7b4
// sig: undefined M459_0038ed08(void)
// callers(1): 0038f550 mobyupdate_unsorted::UpdateMoby_459
// callees(2): 001118d8 mobyutil::MB_getTarget; 005026a0 fastfunc::FastSubRots

ulonglong mobyupdate_helpers::M459_0038ed08(int param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  bool bVar11;
  ulonglong uVar12;
  int iVar15;
  longlong lVar13;
  longlong lVar14;
  uint uVar18;
  longlong lVar16;
  float *pfVar19;
  longlong lVar17;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong uVar26;
  ulonglong unaff_r26;
  int iVar27;
  ulonglong unaff_r27;
  int iVar28;
  int iVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  
  uVar24 = ZEXT48(&stack0x00000000);
  lVar16 = uVar24 - 0x1a0;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar24;
  puVar10[0x36] = in_LR;
  puVar10[0x2e] = in_f26;
  puVar10[0x2f] = in_f27;
  puVar10[0x30] = in_f28;
  puVar10[0x31] = in_f29;
  puVar10[0x32] = in_f30;
  puVar10[0x33] = in_f31;
  puVar10[0x2b] = unaff_r29;
  puVar10[0x2d] = unaff_r31;
  puVar10[0x25] = unaff_r23;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar10[0x2a] = unaff_r28;
  bVar11 = false;
  puVar10[0x24] = unaff_r22;
  iVar21 = *(int *)(iVar7 + 0x38);
  puVar10[0x2c] = unaff_r30;
  puVar10[0x29] = unaff_r27;
  puVar10[0x28] = unaff_r26;
  puVar10[0x27] = unaff_r25;
  puVar10[0x26] = unaff_r24;
  if ((iVar21 == 0) && (*(short *)(iVar7 + 0x1e2) == 0)) {
    fVar1 = *(float *)(iVar7 + 0x1a0);
  }
  else {
    bVar11 = true;
    fVar1 = *(float *)(iVar7 + 0x1a0) * 2.0;
  }
  mobyutil::MB_getTarget((double)fVar1,param_1,param_2,uVar24 - 0x130);
  iVar27 = 0;
  iVar21 = 0;
  if (*(short *)(iVar7 + 0x1ac) == 0) {
    puVar8 = *(uint **)(iVar7 + 0x160);
    iVar15 = 0;
    iVar29 = 0;
    if (0 < (int)*puVar8) {
      iVar25 = 0;
      dVar34 = 10000.0;
      iVar22 = 0;
      iVar28 = iVar29;
      iVar20 = iVar21;
      do {
        if ((*(short *)(iVar7 + 0x1ae) == 0) ||
           (dVar32 = dVar34, iVar21 = iVar20, iVar23 = iVar22, iVar29 = iVar28,
           *(int *)((int)puVar8 + iVar25 + 0x1c) == 0x3f800000)) {
          fVar2 = *(float *)((int)puVar8 + iVar25 + 0x14) - *(float *)(param_1 + 0x14);
          fVar1 = *(float *)((int)puVar8 + iVar25 + 0x10) - *(float *)(param_1 + 0x10);
          dVar32 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2);
          iVar21 = iVar15;
          iVar23 = iVar15;
          iVar29 = iVar22;
          if ((dVar34 <= dVar32) &&
             (dVar32 = dVar34, iVar21 = iVar20, iVar29 = iVar28, iVar20 == iVar22)) {
            iVar27 = iVar15;
          }
        }
        iVar15 = iVar15 + 1;
        iVar25 = iVar25 + 0x10;
        dVar34 = dVar32;
        iVar22 = iVar23;
        iVar28 = iVar29;
        iVar20 = iVar21;
      } while (iVar15 < (int)*puVar8);
    }
    if (iVar21 == *puVar8 - 1) {
      iVar27 = 0;
    }
    else if (iVar21 == 0) {
      iVar29 = *puVar8 - 1;
    }
    dVar32 = 0.0;
    uVar26 = 0;
    dVar34 = dVar32;
    if (bVar11) {
      dVar34 = 10000.0;
    }
    uVar12 = 0;
    *param_2 = 0;
    dVar40 = dVar32;
    do {
      iVar15 = (int)uVar12;
      if ((iVar15 == iVar21 || iVar15 == iVar29) || (iVar15 == iVar27)) {
        if (bVar11) {
          iVar15 = (int)((uVar12 & 0xffffffff) << 4);
          fVar1 = *(float *)((int)puVar10 + 0x74) - *(float *)((int)puVar8 + iVar15 + 0x14);
          fVar2 = *(float *)(puVar10 + 0xe) - *(float *)((int)puVar8 + iVar15 + 0x10);
          fVar3 = *(float *)(puVar10 + 0xf) - *(float *)((int)puVar8 + iVar15 + 0x18);
          dVar31 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          if (((*(short *)(iVar7 + 0x1ae) == 0) ||
              (*(int *)((int)puVar8 + iVar15 + 0x1c) == 0x3f800000)) && (dVar31 < dVar34)) {
            uVar26 = uVar12;
            dVar34 = dVar31;
          }
        }
        else {
          iVar15 = (int)((uVar12 & 0xffffffff) << 4);
          fVar3 = *(float *)(param_1 + 0x10);
          fVar4 = *(float *)(param_1 + 0x14);
          dVar39 = (double)*(float *)((int)puVar8 + iVar15 + 0x10);
          dVar38 = (double)*(float *)((int)puVar8 + iVar15 + 0x14);
          fVar1 = (float)(dVar39 - (double)fVar3);
          fVar2 = (float)(dVar38 - (double)fVar4);
          dVar37 = (double)*(float *)((int)puVar8 + iVar15 + 0x18);
          iVar15 = *(int *)((int)puVar8 + iVar15 + 0x1c);
          dVar33 = ABS((double)fVar1);
          dVar35 = ABS((double)fVar2);
          *(float *)((int)puVar10 + 0xcc) = fVar1;
          *(float *)(puVar10 + 0x1a) = fVar2;
          *(float *)((int)puVar10 + 0xd4) = (float)(dVar33 - dVar35);
          uVar12 = (ulonglong)(*(uint *)((int)puVar10 + 0xcc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xd4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar10 + 0x1a) >> 0x1d) & 4;
          dVar31 = ABS((double)*(float *)((int)puVar10 + 0xcc));
          if ((double)*(float *)((int)puVar10 + 0xd4) - dVar32 < 0.0) {
            dVar31 = dVar35;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
          fVar1 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
          dVar35 = ABS((double)*(float *)(puVar10 + 0x1a));
          if ((double)*(float *)((int)puVar10 + 0xd4) - dVar32 < 0.0) {
            dVar35 = dVar33;
          }
          dVar33 = dVar32;
          if (dVar32 < dVar31) {
            lVar14 = uVar24 - 400;
            lVar13 = uVar24 - 0xa8;
            lVar17 = uVar24 - 0x98;
            lVar30 = 2;
            fVar5 = (float)(dVar35 - dVar31) / (float)(dVar35 + dVar31);
            fVar6 = fVar5 * fVar5;
            *(float *)((int)puVar10 + 0x104) = fVar5;
            *(float *)((int)puVar10 + 0xfc) = fVar5;
            *(float *)(puVar10 + 0x20) = fVar5;
            *(float *)(puVar10 + 0x1f) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar6;
            *(float *)(puVar10 + 0x20) = *(float *)(puVar10 + 0x20) * fVar5;
            *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xe8) * fVar5 * fVar5;
              iVar22 = (int)lVar13;
              lVar14 = lVar14 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
              lVar17 = lVar17 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar17 = uVar24 - 0xa8;
            pfVar19 = (float *)&DAT_007358e0;
            lVar14 = lVar16;
            lVar13 = lVar17;
            do {
              fVar5 = *pfVar19;
              fVar6 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xf8) * fVar5;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
              lVar13 = lVar13 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar13 = 2;
            lVar14 = lVar16;
            dVar31 = dVar32;
            do {
              iVar22 = (int)lVar14;
              lVar14 = lVar14 + 0x10;
              iVar28 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar22 + 0xf8)) +
                                *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                               *(float *)(iVar28 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar33 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar1);
          }
          fVar1 = (float)((double)*(float *)(puVar10 + 0xe) - (double)fVar3);
          fVar2 = (float)((double)*(float *)((int)puVar10 + 0x74) - (double)fVar4);
          dVar36 = ABS((double)fVar1);
          dVar35 = ABS((double)fVar2);
          *(float *)(puVar10 + 0x18) = fVar1;
          *(float *)((int)puVar10 + 0xc4) = fVar2;
          *(float *)(puVar10 + 0x19) = (float)(dVar36 - dVar35);
          uVar12 = (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar10 + 0x19) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1d) & 4;
          dVar31 = ABS((double)*(float *)(puVar10 + 0x18));
          if ((double)*(float *)(puVar10 + 0x19) - dVar32 < 0.0) {
            dVar31 = dVar35;
          }
          fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
          dVar35 = ABS((double)*(float *)((int)puVar10 + 0xc4));
          if ((double)*(float *)(puVar10 + 0x19) - dVar32 < 0.0) {
            dVar35 = dVar36;
          }
          fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
          dVar36 = dVar32;
          if (dVar32 < dVar31) {
            lVar14 = uVar24 - 400;
            lVar17 = uVar24 - 0xb8;
            lVar13 = uVar24 - 200;
            lVar30 = 2;
            fVar3 = (float)(dVar35 - dVar31) / (float)(dVar35 + dVar31);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar10 + 0xe4) = fVar3;
            *(float *)((int)puVar10 + 0xdc) = fVar3;
            *(float *)(puVar10 + 0x1c) = fVar3;
            *(float *)(puVar10 + 0x1b) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar4;
            *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar3;
            *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar3 * fVar3;
              iVar22 = (int)lVar13;
              lVar13 = lVar13 + 8;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
              lVar17 = lVar17 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar17 = uVar24 - 200;
            pfVar19 = (float *)&DAT_007358e0;
            lVar14 = lVar16;
            lVar13 = lVar17;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar3;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
              lVar13 = lVar13 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar13 = 2;
            lVar14 = lVar16;
            dVar31 = dVar32;
            do {
              iVar22 = (int)lVar14;
              iVar28 = (int)lVar17;
              lVar14 = lVar14 + 0x10;
              lVar17 = lVar17 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar22 + 0xd8)) +
                                *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                               *(float *)(iVar28 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar36 = (double)((float)(dVar31 + 0.7853981852531433) * fVar1 + fVar2);
          }
          dVar31 = (double)fastfunc::FastSubRots((float)dVar33,(float)dVar36);
          fVar1 = (float)((double)*(float *)(param_1 + 0x14) - dVar38);
          fVar2 = (float)((double)*(float *)(param_1 + 0x10) - dVar39);
          fVar3 = (float)((double)*(float *)(param_1 + 0x18) - dVar37);
          uVar12 = (ulonglong)*param_2;
          dVar33 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          if ((*(short *)(iVar7 + 0x1ae) == 0) || (iVar15 == 0x3f800000)) {
            if (1.5707963705062866 <= dVar31) {
              if (((12.0 <= dVar33) && ((dVar33 < dVar34 || (dVar34 < 12.0)))) ||
                 ((12.0 > dVar33 && (dVar34 < dVar33)))) {
                uVar26 = uVar12;
                dVar40 = dVar31;
                dVar34 = dVar33;
              }
            }
            else if (dVar40 < dVar31) {
              uVar26 = uVar12;
              dVar40 = dVar31;
              dVar34 = dVar33;
            }
          }
        }
      }
      puVar8 = *(uint **)(iVar7 + 0x160);
      uVar9 = *puVar8;
      lVar14 = uVar12 + uVar9 + (longlong)*(char *)(iVar7 + 0x154);
      uVar12 = lVar14 - (longlong)((int)lVar14 / (int)uVar9) * (longlong)(int)uVar9;
      *param_2 = (uint)uVar12;
    } while ((uint)uVar12 != 0);
    *param_2 = (uint)uVar26;
    uVar24 = (ulonglong)(LZCOUNT((uint)uVar26 - iVar21) << 0x20) >> 0x25 ^ 1;
  }
  else {
    uVar24 = (ulonglong)*param_2;
    puVar8 = *(uint **)(iVar7 + 0x160);
    do {
      uVar9 = *puVar8;
      uVar18 = (uint)uVar24;
      if ((int)uVar18 < (int)(uVar9 - 1)) {
        lVar16 = uVar24 + uVar9 + (longlong)*(char *)(iVar7 + 0x154);
        uVar24 = lVar16 - (longlong)((int)lVar16 / (int)uVar9) * (longlong)(int)uVar9;
        uVar18 = (uint)uVar24;
        *param_2 = uVar18;
      }
    } while ((uVar18 != *puVar8 - 1) &&
            (*(int *)((int)puVar8 + (int)((uVar24 & 0xffffffff) << 4) + 0x1c) != 0x3f800000));
    uVar24 = 1;
  }
  return uVar24;
}



//==== 0038f550  ns=mobyupdate_unsorted  size=0x26c4
// sig: undefined UpdateMoby_459(MobyInstance * moby)
// callers(0): 
// callees(49): 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00106330 mobyutil::MB_SetZBounds; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0038e978 mobyupdate_helpers::M459_0038e978; 0038ed08 mobyupdate_helpers::M459_0038ed08; 00434898 FUN_00434898; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf; 005e7e18 idol::GetAnimDuration; 005e7e70 FUN_005e7e70; 005e7e98 FUN_005e7e98; 005e7ebc FUN_005e7ebc
// strings: 006568c4: 'Moby class %d maya instance %d needs a rocketPath!\nMoby deleted\n'

/* Moby 459 */

void mobyupdate_unsorted::UpdateMoby_459(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  MobyInstance *pMVar5;
  f32 fVar6;
  Spline *pSVar7;
  bool bVar8;
  longlong lVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 uVar16;
  undefined8 uVar10;
  undefined4 uVar14;
  u8 uVar17;
  uint uVar15;
  int *piVar18;
  int *piVar19;
  longlong lVar20;
  short sVar22;
  longlong lVar21;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 auStack_1a0 [16];
  undefined1 local_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  undefined1 local_130 [16];
  undefined1 auStack_120 [16];
  undefined1 local_110 [16];
  float local_100;
  float local_fc;
  float local_f8;
  float afStack_f0 [4];
  undefined1 local_e0 [16];
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 auStack_80 [4];
  int local_7c;
  float local_78;
  float local_74;
  
  lVar9 = (longlong)(int)moby;
  iVar11 = 0;
  pvVar4 = moby->pVar;
  uVar23 = ZEXT48(pvVar4);
  local_7c = *(int *)((int)pvVar4 + 0x150);
  dVar24 = (double)mobyfunc::BlendAnimFrame(moby);
  bVar8 = false;
  if ((*(int *)((int)pvVar4 + 0x38) != 0) || (*(short *)((int)pvVar4 + 0x1e2) != 0)) {
    bVar8 = true;
  }
  mobyfunc::DoManipulator(0x4004000000000000,moby,2,(Manipulator *)((int)pvVar4 + 0x200));
  lVar20 = lVar9 + 0x10;
  FUN_005e7e98(&local_1b0,lVar20);
  if (0 < *(int *)((int)pvVar4 + 0x1c8)) {
    *(int *)((int)pvVar4 + 0x1c8) = *(int *)((int)pvVar4 + 0x1c8) + -1;
  }
  if (moby->state != '\0') {
    iVar11 = mobyupdate_helpers::M459_0038ed08(lVar9,&local_7c);
  }
  if (bVar8) {
    fVar2 = *(float *)((int)pvVar4 + 0x1a0) * 2.0;
  }
  else {
    fVar2 = *(float *)((int)pvVar4 + 0x1a0);
  }
  mobyutil::MB_getTarget((double)fVar2,lVar9);
  iVar12 = mobyutil::MB_damage(lVar9,0x210000,0);
  iVar13 = mobyutil::MB_HandleDamage(moby,iVar12,uVar23 + 0x20,0,auStack_80,&local_78,0,4);
  fastfunc::FastDecTimerS16(uVar23 + 0x26);
  if ((iVar12 != 0) && (*(short *)((int)pvVar4 + 0x26) == 0)) {
    pMVar5 = *(MobyInstance **)(iVar12 + 0x20);
    if (pMVar5 == (MobyInstance *)0x0) {
      dVar25 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
    }
    else if (pMVar5 == g_currentWeaponMoby) {
      dVar25 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
    }
    else {
      dVar25 = (double)FUN_005e8338((double)((moby->pos).x - (pMVar5->pos).x),
                                    (double)((moby->pos).y - (pMVar5->pos).y));
    }
    local_74 = (float)dVar25;
    uVar16 = idol::GetAnimDuration(600);
    *(undefined2 *)((int)pvVar4 + 0x1e2) = uVar16;
    local_78 = *(float *)((int)pvVar4 + 0x20) - local_78;
    *(float *)((int)pvVar4 + 0x20) = local_78;
    if (local_78 <= 0.0) {
LAB_0038f7d0:
      *(undefined4 *)((int)pvVar4 + 0x98) = 0x3e99999a;
      fVar2 = DAT_0071f418;
      *(float *)((int)pvVar4 + 0x80) = DAT_0071f418 * 40.0;
      *(float *)((int)pvVar4 + 0x84) = fVar2 * 10.0;
      *(float *)((int)pvVar4 + 0x88) = SQRT(fVar2 * 10.0 * 2.0 * 10.0);
      fVar2 = mobyutil::g_FrameTime;
      *(undefined1 *)((int)pvVar4 + 0xad) = 0;
      *(undefined4 *)((int)pvVar4 + 0x94) = 1;
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0x40a00000;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0x41200000;
      *(float *)((int)pvVar4 + 0x8c) = fVar2 * 15.0;
      mobyutil::MB_VecAtan2Angles
                (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),&local_74,
                 uVar23 + 0x88,uVar23 + 0x8c);
      dVar25 = (double)local_74;
      idol::GetAnimDuration(2);
      mobyutil::MB_StartKick(dVar25,lVar9,uVar23 + 0x70);
      *(undefined1 *)((int)pvVar4 + 0x67) = 0xb4;
      moby->state = '\x0e';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      mobyutil::MB_UpdateLightsTransition(lVar9,uVar23 + 0x60);
      uVar16 = idol::GetAnimDuration(0x3c);
      *(undefined2 *)((int)pvVar4 + 0x26) = uVar16;
    }
    else if (iVar13 < 4) {
      if (0 < iVar13) {
        if (iVar13 < 3) goto LAB_0038f7d0;
LAB_0038f8fc:
        *(undefined4 *)((int)pvVar4 + 0x90) = 0x200;
        *(undefined4 *)((int)pvVar4 + 0x98) = 0x3f000000;
        *(undefined1 *)((int)pvVar4 + 0x67) = 0x78;
        *(undefined4 *)((int)pvVar4 + 0x80) = 0x3c03126f;
        *(float *)((int)pvVar4 + 0x88) = SQRT(*(float *)((int)pvVar4 + 0x84) * 2.0 * 1.5);
        fVar2 = mobyutil::g_FrameTime;
        *(undefined1 *)((int)pvVar4 + 0xad) = 0;
        *(undefined4 *)((int)pvVar4 + 0x94) = 1;
        *(undefined4 *)((int)pvVar4 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar4 + 0xc4) = 0x41200000;
        *(float *)((int)pvVar4 + 0x8c) = fVar2 * 8.5;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),&local_74,
                   uVar23 + 0x88,uVar23 + 0x8c);
        mobyutil::MB_StartKick((double)local_74,lVar9,uVar23 + 0x70);
        if (moby->animationId != '\v') {
          uVar10 = idol::GetAnimDuration(6);
          mobyutil::MB_SetAnimation(lVar9,0xb,0,uVar10);
        }
        moby->state = '\f';
        mobyutil::MB_UpdateLightsTransition(lVar9,uVar23 + 0x60);
      }
    }
    else if (iVar13 < 7) {
      if (5 < iVar13) goto LAB_0038f8fc;
      *(undefined4 *)((int)pvVar4 + 0x90) = 0x200;
      *(undefined1 *)((int)pvVar4 + 0x67) = 0xfa;
      *(undefined4 *)((int)pvVar4 + 0x80) = 0x3c03126f;
      *(float *)((int)pvVar4 + 0x88) = SQRT(*(float *)((int)pvVar4 + 0x84) * 2.0 * 1.5);
      fVar2 = mobyutil::g_FrameTime;
      *(undefined1 *)((int)pvVar4 + 0xad) = 0;
      *(undefined4 *)((int)pvVar4 + 0x94) = 1;
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0x40e00000;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0x41580000;
      *(float *)((int)pvVar4 + 0x8c) = fVar2 * 5.0;
      mobyutil::MB_VecAtan2Angles
                (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),&local_74,
                 uVar23 + 0x88,uVar23 + 0x8c);
      mobyutil::MB_StartKick((double)local_74,lVar9,uVar23 + 0x70);
      moby->state = '\f';
      mobyutil::MB_UpdateLightsTransition(lVar9,uVar23 + 0x60);
    }
  }
  moby->damage = -1;
  if (*(int *)((int)pvVar4 + 0x38) != 0) {
    uVar16 = idol::GetAnimDuration(600);
    *(undefined2 *)((int)pvVar4 + 0x1e2) = uVar16;
  }
  *(undefined4 *)((int)pvVar4 + 0x38) = 0;
  fastfunc::FastDecTimerS16(uVar23 + 0x1e2);
  bVar1 = moby->state;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      uVar10 = FUN_005e8338((double)(local_d0 - fVar2),(double)(local_cc - fVar3));
      mobyutil::OrganicDeltAngSpeed
                (uVar10,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9,&DAT_0038f4bc
                 ,uVar23 + 0x194);
      if (moby->animationId == '\0') {
        iVar11 = fastfunc::FastDecTimerS32(uVar23 + 400);
        if ((iVar11 != 0) && (moby->animationId != '\x05')) {
          uVar10 = idol::GetAnimDuration(0xf);
          mobyutil::MB_SetAnimation(lVar9,5,0,uVar10);
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        moby->unk58 = 1.0;
        if ((((!bVar8) &&
             ((dVar25 = (double)FUN_005e8588(lVar20,&local_d0), 8.0 <= dVar25 ||
              (6.0 <= ABS((moby->pos).z - local_c8))))) || (iVar11 == 0)) ||
           (dVar25 = (double)FUN_005e8548(lVar20,*(int *)((int)pvVar4 + 0x160) + local_7c * 0x10 +
                                                 0x10), dVar25 <= 0.25)) {
          dVar25 = (double)FUN_005e8588(lVar20,&local_d0);
          dVar31 = (double)(moby->rotation).z;
          if (bVar8) {
            fVar2 = *(float *)((int)pvVar4 + 0x1a0) * 2.0;
          }
          else {
            fVar2 = *(float *)((int)pvVar4 + 0x1a0);
          }
          if ((((dVar25 < (double)fVar2) && (ABS((moby->pos).z - local_c8) < 2.0)) &&
              (moby->enabled != '\0')) &&
             (((!bVar8 || (iVar11 == 0)) && (*(int *)((int)pvVar4 + 400) == 0)))) {
            dVar25 = (double)FUN_005e8338((double)(local_d0 - (moby->pos).x),
                                          (double)(local_cc - (moby->pos).y));
            dVar25 = (double)fastfunc::FastSubRots((float)dVar31,(float)dVar25);
            if (dVar25 < 0.0872664600610733) {
              mobyfunc::GetBonePosition(lVar9,0,auStack_120);
              iVar11 = collproc::CollLine(local_110,auStack_120,0,lVar9,0);
              if (iVar11 == 0) {
                *(undefined4 *)((int)pvVar4 + 0x198) = 0x40800000;
                *(undefined2 *)((int)pvVar4 + 0x1a4) = 0;
                moby->state = '\x06';
                if (moby->animationId != '\x04') {
                  uVar10 = idol::GetAnimDuration(6);
                  mobyutil::MB_SetAnimation(lVar9,4,0,uVar10);
                }
                *(undefined4 *)((int)pvVar4 + 400) = 0;
              }
              else {
                uVar14 = idol::GetAnimDuration(0x3c);
                *(undefined4 *)((int)pvVar4 + 400) = uVar14;
                if (moby->animationId != '\0') {
                  uVar10 = idol::GetAnimDuration(5);
                  mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
                }
                moby->state = '\x01';
              }
              goto LAB_00391968;
            }
          }
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(5);
            mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
          }
          moby->state = '\x01';
        }
        else {
          *(int *)((int)pvVar4 + 0x150) = local_7c;
          if (moby->animationId != '\b') {
            uVar10 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar9,8,0,uVar10);
          }
          fVar2 = DAT_00842220;
          moby->state = '\t';
          moby->unk58 = fVar2;
        }
      }
      goto LAB_00391968;
    }
    if (bVar1 == 6) {
      uVar15 = (int)*(uint *)((int)pvVar4 + 0x1cc) >> 0x1f;
      if ((int)((uVar15 >> 1 ^ *(uint *)((int)pvVar4 + 0x1cc)) - uVar15) < 0x41600000 &&
          14.0 <= dVar24) {
        dVar31 = (double)(moby->rotation).z;
        mobyfunc::GetBonePosition(lVar9,0,&local_150);
        FUN_005e7e98(uVar23 + 0x180,&local_150);
        dVar25 = (double)FUN_005e8338((double)(local_d0 - local_150),(double)(local_cc - local_14c))
        ;
        dVar25 = (double)fastfunc::FastSubRots((float)dVar25,(float)dVar31);
        if (dVar25 < 0.0872664600610733) {
          dVar31 = (double)FUN_005e8338((double)(local_d0 - local_150),
                                        (double)(local_cc - local_14c));
        }
        dVar29 = (double)*(float *)((int)pvVar4 + 0x180);
        dVar25 = (double)mathfunc::cosf((float)dVar31);
        dVar30 = (double)*(float *)((int)pvVar4 + 0x184);
        *(float *)((int)pvVar4 + 0x180) =
             (float)(dVar25 * (double)*(float *)((int)pvVar4 + 0x198) + dVar29);
        dVar25 = (double)FUN_005e8128(dVar31);
        *(float *)((int)pvVar4 + 0x184) =
             (float)(dVar25 * (double)*(float *)((int)pvVar4 + 0x198) + dVar30);
        FUN_005e81f0(&local_140,uVar23 + 0x180,&local_150);
        FUN_005e7f98((double)(DAT_00842214 * mobyutil::g_FrameTime),&local_140,&local_140);
        iVar11 = collproc::CollLine(local_130,&local_150,0,lVar9,0);
        if (iVar11 != 0) {
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(5);
            mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
          }
          moby->state = '\x01';
          goto LAB_00391968;
        }
        uVar26 = FUN_005e8338((double)local_140,(double)local_13c);
        uVar10 = FUN_005e7ebc(&local_140);
        uVar27 = FUN_005e8338(uVar10,(double)local_138);
        uVar10 = fastfunc::FastDoubleToInt((double)(animationSpeed * 10.0));
        FUN_00434898(uVar26,uVar27,lVar9,uVar10,CONCAT44(local_150,local_14c),
                     CONCAT44(local_148,local_144),CONCAT44(local_140,local_13c),
                     CONCAT44(local_138,local_134));
        *(short *)((int)pvVar4 + 0x1a4) = *(short *)((int)pvVar4 + 0x1a4) + 1;
      }
      dVar25 = 2.0;
      if (dVar24 < 2.0) {
        if (*(short *)((int)pvVar4 + 0x1a4) < 4) {
          dVar31 = (double)FUN_005e8588(lVar20,&local_d0);
          if (bVar8) {
            fVar2 = (float)((double)*(float *)((int)pvVar4 + 0x1a0) * dVar25);
          }
          else {
            fVar2 = *(float *)((int)pvVar4 + 0x1a0);
          }
          if ((dVar31 <= (double)fVar2) && (ABS((moby->pos).z - local_c8) <= 6.0))
          goto LAB_00391968;
        }
        if (moby->animationId != '\x05') {
          uVar10 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar9,5,5,uVar10);
        }
        moby->unk58 = 0.5;
        moby->state = '\a';
      }
      goto LAB_00391968;
    }
    if (bVar1 == 3) {
      piVar18 = *(int **)((int)pvVar4 + 0x130);
      if (piVar18 == (int *)0x0) {
        iVar11 = *(int *)((int)pvVar4 + 0x1e4);
        if (iVar11 == -1) {
          FUN_005e7e70(auStack_180);
          mobyutil::GetGroundZ(0x3fe0000000000000,lVar20,0);
          FUN_005e7f54(lVar20,lVar20,auStack_180);
          dVar25 = (double)FUN_005e8030(auStack_180);
          if (dVar25 < (double)mobyutil::g_FrameTime) {
            if (moby->animationId != '\0') {
              uVar10 = idol::GetAnimDuration(5);
              mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
            }
            moby->state = '\x01';
          }
        }
        else {
          uVar10 = FUN_005e8338((double)(Cuboids[iVar11].pos.x - fVar2),
                                (double)(Cuboids[iVar11].pos.y - fVar3));
          mobyutil::OrganicDeltAngSpeed
                    (uVar10,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9);
          lVar21 = uVar23 + 0x1d0;
          dVar25 = (double)FUN_005e8030(lVar21);
          dVar29 = (double)*(float *)((int)pvVar4 + 0x1d8);
          FUN_005e7f98((double)(float)(dVar25 * 0.949999988079071),lVar21,lVar21);
          FUN_005e81f0(auStack_160,&Cuboids[*(int *)((int)pvVar4 + 0x1e4)].pos,lVar20);
          FUN_005e7f98((double)(float)(dVar25 * 0.05000000074505806),auStack_160,auStack_160);
          FUN_005e7f54(lVar21,lVar21,auStack_160);
          dVar31 = 10.0;
          if (dVar25 <= (double)(mobyutil::g_FrameTime * 10.0)) {
            if (dVar25 < (double)(mobyutil::g_FrameTime * 5.0)) {
              FUN_005e7f98((double)(DAT_0071f418 * 5.0),auStack_160,lVar21);
              FUN_005e7f54(lVar21,lVar21,auStack_160);
            }
          }
          else {
            FUN_005e7f98((double)(DAT_0071f418 * -10.0),auStack_160,lVar21);
            FUN_005e7f54(lVar21,lVar21,auStack_160);
          }
          iVar11 = fastfunc::FastDecTimerS16(uVar23 + 0x1ec);
          if (iVar11 == 0) {
            *(float *)((int)pvVar4 + 0x1d8) = (float)dVar29;
          }
          FUN_005e7f54(lVar20,lVar20,lVar21);
          dVar25 = (double)FUN_005e8548(lVar20,&Cuboids[*(int *)((int)pvVar4 + 0x1e4)].pos);
          if (dVar25 < (double)(float)((double)mobyutil::g_FrameTime * dVar31)) {
            if (moby->animationId != '\0') {
              uVar10 = idol::GetAnimDuration(5);
              mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
            }
            moby->state = '\x01';
          }
        }
      }
      else {
        iVar11 = *piVar18;
        iVar12 = *(int *)((int)pvVar4 + 0x120) + iVar11 + (int)*(char *)((int)pvVar4 + 0x124);
        iVar12 = iVar12 - (iVar12 / iVar11) * iVar11;
        uVar10 = FUN_005e8338((double)((float)piVar18[iVar12 * 4 + 4] - fVar2),
                              (double)((float)piVar18[iVar12 * 4 + 5] - fVar3));
        mobyutil::OrganicDeltAngSpeed
                  (uVar10,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9,
                   &DAT_0038f4bc,uVar23 + 0x194);
        FUN_005e7e98(auStack_170,*(int *)((int)pvVar4 + 0x130) + iVar12 * 0x10 + 0x10);
        if (*(int *)((int)pvVar4 + 0x120) == **(int **)((int)pvVar4 + 0x130) + -1) {
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(5);
            mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
          }
          moby->state = '\x01';
        }
        else {
          FUN_005e81f0(auStack_180,auStack_170,lVar20);
          FUN_005e7f98((double)(mobyutil::g_FrameTime * 5.0),auStack_180,auStack_180);
          FUN_005e7f54(lVar20,lVar20,auStack_180);
          dVar25 = (double)FUN_005e8548(auStack_170,lVar20);
          if (dVar25 < 0.5) {
            *(int *)((int)pvVar4 + 0x120) = iVar12;
          }
        }
      }
      mobyupdate_helpers::M459_0038e978(lVar9);
      goto LAB_00391968;
    }
    if (bVar1 == 2) {
      dVar25 = (double)FUN_005e8588(lVar20,&local_d0);
      if (((dVar25 < (double)*(float *)((int)pvVar4 + 0x1a8)) ||
          (iVar11 = mobyutil::MB_IsPntInCuboid
                              (&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x1c0)), iVar11 != 0
          )) || (*(int *)((int)pvVar4 + 0x1e8) != 0)) {
        if (*(int *)((int)pvVar4 + 0x1c4) != -1) {
          hero::TransitionMovement(0x1f,0);
          camera::SetCameraPosition
                    (&Cuboids[*(int *)((int)pvVar4 + 0x1c4)].pos,
                     &Cuboids[*(int *)((int)pvVar4 + 0x1c4)].rot,0,0,0);
          draw::LetterBoxOn = 1;
          uVar14 = idol::GetAnimDuration(0x168);
          *(undefined4 *)((int)pvVar4 + 0x1c8) = uVar14;
        }
        moby->collision = moby->pClass->collision;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        if (moby->animationId != '\b') {
          uVar10 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar9,8,0,uVar10);
        }
        moby->state = '\x03';
      }
      goto LAB_00391968;
    }
    if (bVar1 != 1) {
      if (bVar1 == 0) {
        if (*(int *)((int)pvVar4 + 0x164) == -1) {
          libc::printf("Moby class %d maya instance %d needs a rocketPath!\nMoby deleted\n",
                       moby->oClass,moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        *(undefined4 *)((int)pvVar4 + 0x150) = 0;
        pSVar7 = Splines[*(int *)((int)pvVar4 + 0x164)];
        *(Spline **)((int)pvVar4 + 0x160) = pSVar7;
        if (*(int *)((int)pvVar4 + 0x134) < 0) {
          FUN_005e7e98(lVar20,ZEXT48(pSVar7) + 0x10);
          if (*(int *)((int)pvVar4 + 0x1b4) == 0) {
            *(undefined4 *)((int)pvVar4 + 0x130) = 0;
            (moby->pos).z = (moby->pos).z + 20.0;
          }
        }
        else {
          *(undefined4 *)((int)pvVar4 + 0x120) = 0;
          pSVar7 = Splines[*(int *)((int)pvVar4 + 0x134)];
          *(Spline **)((int)pvVar4 + 0x130) = pSVar7;
          FUN_005e7e98(lVar20,ZEXT48(pSVar7) + 0x10);
        }
        piVar18 = *(int **)((int)pvVar4 + 0x160);
        iVar12 = 0;
        *(undefined2 *)((int)pvVar4 + 0x1ae) = 0;
        iVar11 = *piVar18;
        piVar19 = piVar18;
        if (0 < iVar11) {
          do {
            if (piVar19[7] == 0x3f800000) {
              *(undefined2 *)((int)pvVar4 + 0x1ae) = 1;
              iVar11 = *piVar18;
            }
            iVar12 = iVar12 + 1;
            piVar19 = piVar19 + 4;
          } while (iVar12 < iVar11);
        }
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        *(undefined1 *)((int)pvVar4 + 0x29) = 0;
        uVar15 = g_heroMobyPtr->light;
        moby->color = g_heroMobyPtr->color;
        moby->light = uVar15;
        *(undefined1 *)((int)pvVar4 + 0x58) = 8;
        *(undefined1 *)((int)pvVar4 + 0x5a) = 8;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar4 + 0xd0));
        *(undefined4 *)((int)pvVar4 + 0x10c) = 0x3cf5c28f;
        *(undefined4 *)((int)pvVar4 + 0x110) = 0x3e99999a;
        *(undefined4 *)((int)pvVar4 + 0x114) = 0x3e800000;
        *(float *)((int)pvVar4 + 0xec) = DAT_0071f418 * 5.0;
        *(float *)((int)pvVar4 + 0xf4) = DAT_00842218 * mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar4 + 0xdc) = 0x40000000;
        *(undefined4 *)((int)pvVar4 + 0xd8) = 0x40000000;
        *(undefined4 *)((int)pvVar4 + 0x20) = 0x40000000;
        uVar16 = fastfunc::FastDoubleToInt(0x4000000000000000);
        *(undefined2 *)((int)pvVar4 + 0x24) = uVar16;
        *(undefined1 *)((int)pvVar4 + 0x29) = 0;
        *(undefined1 *)((int)pvVar4 + 0x28) = 1;
        FUN_005e7e70(uVar23 + 0x40);
        *(undefined4 *)((int)pvVar4 + 0x1c8) = 0xffffffff;
        if (moby->animationId != '\0') {
          uVar10 = idol::GetAnimDuration(5);
          mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
        }
        *(short *)((int)pvVar4 + 0x1e0) = moby->drawDistance;
        dVar31 = 0.5;
        dVar25 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar20,0);
        if (dVar31 < (double)(float)((double)(moby->pos).z - dVar25)) {
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        }
        moby->state = '\x02';
      }
      goto LAB_00391968;
    }
    uVar10 = FUN_005e8338((double)(local_d0 - fVar2),(double)(local_cc - fVar3));
    mobyutil::OrganicDeltAngSpeed
              (uVar10,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9,&DAT_0038f4bc,
               uVar23 + 0x194);
    fastfunc::FastDecTimerS32(uVar23 + 400);
    dVar25 = (double)FUN_005e8588(lVar20,&local_d0);
    dVar31 = (double)(moby->rotation).z;
    if (bVar8) {
      fVar2 = *(float *)((int)pvVar4 + 0x1a0) * 2.0;
    }
    else {
      fVar2 = *(float *)((int)pvVar4 + 0x1a0);
    }
    if (((((double)fVar2 <= dVar25) || (2.0 <= ABS((moby->pos).z - local_c8))) ||
        ((moby->enabled == '\0' || ((bVar8 && (iVar11 != 0)))))) ||
       (*(int *)((int)pvVar4 + 400) != 0)) {
LAB_0038fff4:
      if (((bVar8) ||
          ((dVar25 = (double)FUN_005e8588(lVar20,&local_d0), dVar25 < 4.0 &&
           (ABS((moby->pos).z - local_c8) < 6.0)))) && (iVar11 != 0)) {
        dVar25 = (double)FUN_005e8548(lVar20,*(int *)((int)pvVar4 + 0x160) + local_7c * 0x10 + 0x10)
        ;
        if ((0.25 < dVar25) &&
           ((*(short *)((int)pvVar4 + 0x1ac) == 0 ||
            (*(int *)((int)pvVar4 + 0x150) < **(int **)((int)pvVar4 + 0x160) + -1)))) {
          if (moby->animationId != '\b') {
            uVar10 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar9,8,0,uVar10);
          }
          *(int *)((int)pvVar4 + 0x150) = local_7c;
          fVar2 = DAT_00842220;
          moby->state = '\t';
          moby->unk58 = fVar2;
        }
      }
    }
    else {
      dVar25 = (double)FUN_005e8338((double)(local_d0 - (moby->pos).x),
                                    (double)(local_cc - (moby->pos).y));
      dVar25 = (double)fastfunc::FastSubRots((float)dVar31,(float)dVar25);
      if (0.0872664600610733 <= dVar25) goto LAB_0038fff4;
      mobyfunc::GetBonePosition(lVar9,0,auStack_1a0);
      iVar11 = collproc::CollLine(local_190,auStack_1a0,0,lVar9,0);
      if (iVar11 == 0) {
        *(undefined4 *)((int)pvVar4 + 0x198) = 0x40800000;
        *(undefined2 *)((int)pvVar4 + 0x1a4) = 0;
        moby->state = '\x06';
        if (moby->animationId != '\x04') {
          uVar10 = idol::GetAnimDuration(6);
          mobyutil::MB_SetAnimation(lVar9,4,0,uVar10);
        }
        *(undefined4 *)((int)pvVar4 + 400) = 0;
      }
      else {
        uVar14 = idol::GetAnimDuration(0x3c);
        *(undefined4 *)((int)pvVar4 + 400) = uVar14;
      }
    }
    if ((*(int *)((int)pvVar4 + 0x1c8) == 0) && (*(int *)((int)pvVar4 + 0x1c4) != -1)) {
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      hero::TransitionMovement(0,1);
      draw::LetterBoxOn = 0;
      *(undefined4 *)((int)pvVar4 + 0x1c4) = 0xffffffff;
    }
    goto LAB_00391968;
  }
  if (bVar1 == 0xe) {
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x70));
    if ((uVar15 & 6) != 0) {
      uVar10 = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar9,uVar23 + 0x40,lVar20,4,1,5,2,4);
      lVar21 = lVar9 + 0x40;
      mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6c8,lVar20,lVar21,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6c9,lVar20,lVar21,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6ca,lVar20,lVar21,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6ea,lVar20,lVar21,0,0);
      mobyutil::MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar6 = (moby->pos).x;
    uVar15 = (int)fVar6 >> 0x1f;
    iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15;
    if ((((iVar11 < 0x40000000) || (0x447f4000 < iVar11)) ||
        (fVar6 = (moby->pos).y, uVar15 = (int)fVar6 >> 0x1f,
        iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, 0x447f4000 < iVar11 || iVar11 < 0x40000000))
       || ((fVar6 = (moby->pos).z, uVar15 = (int)fVar6 >> 0x1f,
           iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, iVar11 < 0x40000000 ||
           (0x447f4000 < iVar11)))) {
      uVar10 = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar9,uVar23 + 0x40,lVar20,1,4,5,2,4);
      lVar21 = lVar9 + 0x40;
      mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6c8,lVar20,lVar21,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6c9,lVar20,lVar21,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6ca,lVar20,lVar21,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6ea,lVar20,lVar21,0,0);
      mobyutil::MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_00391968;
  }
  if (bVar1 == 0xc) {
    uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x70));
    if ((uVar15 & 0x40) != 0) {
      dVar25 = (double)FUN_005e8548(lVar20,*(int *)((int)pvVar4 + 0x160) + local_7c * 0x10 + 0x10);
      if (0.25 < dVar25) {
        if (moby->animationId != '\b') {
          uVar10 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar9,8,0,uVar10);
        }
        fVar2 = DAT_00842220;
        *(int *)((int)pvVar4 + 0x150) = local_7c;
        moby->unk58 = fVar2;
        moby->state = '\t';
        return;
      }
      if (moby->animationId != '\0') {
        uVar10 = idol::GetAnimDuration(6);
        mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
      }
      moby->state = '\x01';
    }
    fVar6 = (moby->pos).x;
    uVar15 = (int)fVar6 >> 0x1f;
    iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15;
    if (((iVar11 < 0x40000000) || (0x447f4000 < iVar11)) ||
       ((fVar6 = (moby->pos).y, uVar15 = (int)fVar6 >> 0x1f,
        iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, 0x447f4000 < iVar11 || iVar11 < 0x40000000 ||
        ((fVar6 = (moby->pos).z, uVar15 = (int)fVar6 >> 0x1f,
         iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, iVar11 < 0x40000000 || (0x447f4000 < iVar11)
         ))))) {
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar9,uVar23 + 0x40,lVar20,4,1,5,2,4);
      mobyutil::MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_00391968;
  }
  if (bVar1 != 0xb) {
    if (bVar1 == 10) {
      if (*(short *)((int)pvVar4 + 0x1ae) == 0) {
        sVar22 = (short)*(undefined4 *)((int)pvVar4 + 0x150);
        piVar18 = *(int **)((int)pvVar4 + 0x160);
        *(short *)((int)pvVar4 + 0x1a6) = sVar22;
      }
      else {
        piVar18 = *(int **)((int)pvVar4 + 0x160);
        iVar12 = 0;
        iVar11 = 0;
        dVar25 = 99999997952.0;
        if (0 < *piVar18) {
          iVar13 = 0;
          iVar11 = 0;
          do {
            dVar31 = (double)FUN_005e8548((int)piVar18 + iVar13 + 0x10,lVar20);
            piVar18 = *(int **)((int)pvVar4 + 0x160);
            if (dVar31 < dVar25) {
              dVar25 = dVar31;
              iVar11 = iVar12;
            }
            iVar12 = iVar12 + 1;
            iVar13 = iVar13 + 0x10;
          } while (iVar12 < *piVar18);
        }
        iVar12 = *(int *)((int)pvVar4 + 0x150);
        sVar22 = (short)iVar12 +
                 ((ushort)((longlong)iVar11 - (longlong)iVar12 >> 0x3f) &
                 ((short)iVar11 + 1) - (short)iVar12);
        sVar22 = sVar22 + ((ushort)((longlong)iVar12 - (longlong)iVar11 >> 0x3f) &
                          ((short)iVar11 + -1) - sVar22);
        *(short *)((int)pvVar4 + 0x1a6) = sVar22;
      }
      FUN_005e7e98(&local_100,piVar18 + sVar22 * 4 + 4);
      uVar10 = FUN_005e8338((double)(local_100 - (moby->pos).x),(double)(local_fc - (moby->pos).y));
      dVar30 = 6.2831854820251465;
      dVar29 = 3.1415927410125732;
      mobyutil::OrganicDeltAngSpeed
                (uVar10,(double)(DAT_0071f418 * 6.2831855),(double)(DAT_0071f418 * 3.1415927),
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar9,&DAT_00720000,uVar23 + 0x194);
      dVar31 = (double)(moby->rotation).z;
      dVar25 = (double)FUN_005e8338((double)(local_100 - (moby->pos).x),
                                    (double)(local_fc - (moby->pos).y));
      dVar25 = (double)fastfunc::FastSubRots((float)dVar31,(float)dVar25);
      if (dVar25 < 0.7853981852531433) {
        dVar25 = (double)*(float *)((int)pvVar4 + 0x1b8);
        if (dVar25 < (double)(float)((double)DAT_00842218 * (double)mobyutil::g_FrameTime)) {
          fVar2 = (float)((double)DAT_00842218 * (double)DAT_0071f418 + dVar25);
          dVar25 = (double)fVar2;
          *(float *)((int)pvVar4 + 0x1b8) = fVar2;
        }
        dVar28 = (double)(moby->rotation).z;
        uVar10 = FUN_005e8588(lVar20,&local_100);
        dVar31 = (double)FUN_005e8338(uVar10,(double)((local_f8 + 0.8) - (moby->pos).z));
        mobyutil::MB_SphericalToVector((float)dVar25,(float)dVar28,(float)dVar31,afStack_f0);
        FUN_005e7f54(lVar20,lVar20,afStack_f0);
        dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,
                                    (double)((*(float *)((int)pvVar4 + 0x1b8) /
                                             (DAT_00842218 * mobyutil::g_FrameTime)) * 0.5235988),
                                    (double)(float)((double)DAT_0071f418 * dVar30),
                                    (double)(float)((double)DAT_0071f418 * dVar29),
                                    (double)(mobyutil::g_FrameTime * 4.712389),&DAT_0038f4bc,
                                    &DAT_00720000,uVar23 + 0x1bc);
        (moby->rotation).y = (float)dVar25;
      }
      FUN_005e7e98(&local_100,
                   *(int *)((int)pvVar4 + 0x160) + *(int *)((int)pvVar4 + 0x150) * 0x10 + 0x10);
      dVar25 = (double)FUN_005e8548(lVar20,&local_100);
      if (dVar25 < 0.25) {
        moby->state = '\v';
      }
      mobyupdate_helpers::M459_0038e978(lVar9);
    }
    else if (bVar1 == 9) {
      moby->unk58 = 1.0;
      *(undefined4 *)((int)pvVar4 + 0x1b8) = 0;
      *(undefined4 *)((int)pvVar4 + 0x1bc) = 0;
      moby->state = '\n';
      mobyupdate_helpers::M459_0038e978
                (lVar9,10,CONCAT44(local_1b0,local_1ac),CONCAT44(local_1a8,local_1a4));
    }
    goto LAB_00391968;
  }
  dVar25 = 0.0;
  if ((*(int *)((int)pvVar4 + 0x1b8) < 1) || (*(short *)((int)pvVar4 + 0x1ee) != 0)) {
    uVar10 = FUN_005e8338((double)(local_d0 - fVar2),(double)(local_cc - fVar3));
    mobyutil::OrganicDeltAngSpeed
              (uVar10,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9);
    *(undefined4 *)((int)pvVar4 + 0x1b8) = 0;
    dVar25 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,
                                (double)((float)(dVar25 / (double)(DAT_00842218 *
                                                                  mobyutil::g_FrameTime)) *
                                        0.5235988),(double)(DAT_0071f418 * 6.2831855),
                                (double)(DAT_0071f418 * 3.1415927),
                                (double)(mobyutil::g_FrameTime * 6.2831855),&DAT_00720000,
                                &DAT_00720000,uVar23 + 0x1bc);
  }
  else {
    *(float *)((int)pvVar4 + 0x1b8) =
         -(DAT_00842218 * 3.0 * DAT_0071f418 - *(float *)((int)pvVar4 + 0x1b8));
    mathfunc::cosf((moby->rotation).z);
    FUN_005e8128((double)(moby->rotation).z);
    FUN_005e7f54(lVar20,lVar20,local_e0);
    dVar25 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,
                                (double)((*(float *)((int)pvVar4 + 0x1b8) /
                                         (DAT_00842218 * mobyutil::g_FrameTime)) * 0.5235988),
                                (double)(DAT_0071f418 * 6.2831855),
                                (double)(DAT_0071f418 * 3.1415927),
                                (double)(mobyutil::g_FrameTime * 6.2831855));
  }
  uVar17 = moby->animationId;
  (moby->rotation).y = (float)dVar25;
  if ((uVar17 == '\n') || (0 < *(int *)((int)pvVar4 + 0x1b8))) {
LAB_0039136c:
    if ((moby->updateId == '\n') && ((moby->field43_0x70 & 2U) != 0)) {
      if (uVar17 != '\0') {
        uVar10 = idol::GetAnimDuration(6);
        mobyutil::MB_SetAnimation(lVar9,0,0,uVar10);
      }
      moby->state = '\x01';
    }
  }
  else {
    dVar31 = (double)(moby->rotation).z;
    dVar25 = (double)FUN_005e8338((double)(local_d0 - (moby->pos).x),
                                  (double)(local_cc - (moby->pos).y));
    dVar25 = (double)fastfunc::FastSubRots((float)dVar31,(float)dVar25);
    uVar17 = moby->animationId;
    if (0.03490658476948738 <= dVar25) goto LAB_0039136c;
    *(undefined4 *)((int)pvVar4 + 0x1b8) = 0;
    if (moby->animationId != '\n') {
      uVar10 = idol::GetAnimDuration(3);
      mobyutil::MB_SetAnimation(lVar9,10,0,uVar10);
    }
  }
  mobyupdate_helpers::M459_0038e978(lVar9);
LAB_00391968:
  mobyutil::MB_ColorDyingMoby(lVar9,uVar23 + 0x60);
  *(float *)((int)pvVar4 + 0x1cc) = (float)dVar24;
  uVar17 = moby->state;
  if ((((uVar17 == '\x01') || (uVar17 == '\x05')) || (uVar17 == '\x06')) ||
     ((uVar17 == '\a' || (uVar17 == '\v')))) {
    fVar2 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar4 + 0xe8);
    *(float *)((int)pvVar4 + 0xe8) = fVar2;
    dVar25 = 2.0;
    (moby->pos).z = (moby->pos).z - (fVar2 - 2.0);
    dVar24 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar20,0);
    fVar2 = (float)((double)(moby->pos).z - dVar25);
    (moby->pos).z = fVar2;
    if ((double)fVar2 < dVar24) {
      (moby->pos).z = (float)dVar24;
      *(undefined4 *)((int)pvVar4 + 0xe8) = 0;
    }
  }
  else {
    dVar24 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar20,0);
  }
  mobyutil::MB_SetZBounds(dVar24,lVar9);
  iVar11 = collproc::CollHotspot();
  if ((iVar11 == 0) && ((moby->pos).z < (float)(dVar24 + 1.0))) {
    uVar10 = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar9,uVar23 + 0x40,lVar20,4,1,5,2,4);
    lVar21 = lVar9 + 0x40;
    mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6c8,lVar20,lVar21,0,0);
    mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6c9,lVar20,lVar21,0,0);
    mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6ca,lVar20,lVar21,0,0);
    mobyutil::MB_SpawnDebrisMoby(uVar10,lVar9,0x6ea,lVar20,lVar21,0,0);
    mobyutil::MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



