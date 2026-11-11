//==== 001607c0  ns=space  size=0x98c
// sig: undefined Space_DrawShipEffects(void)
// callers(1): 0016114c space::TransitionDraw_Space
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1038 mobyfunc::GetBoneTransformations; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void space::Space_DrawShipEffects(int param_1)

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
  short sVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  ulonglong *puVar21;
  bool bVar22;
  float fVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float *pfVar28;
  undefined4 *puVar29;
  longlong lVar27;
  float *pfVar30;
  undefined4 *puVar31;
  short *psVar32;
  float *pfVar34;
  undefined4 *puVar35;
  longlong lVar33;
  float *pfVar36;
  undefined4 *puVar37;
  float *pfVar38;
  int iVar39;
  ulonglong unaff_r24;
  int iVar40;
  int iVar41;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar42;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  short *psVar43;
  ulonglong unaff_r29;
  float *pfVar44;
  ulonglong unaff_r30;
  float *pfVar45;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
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
  double dVar54;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  
  uVar25 = ZEXT48(&stack0x00000000);
  puVar21 = (ulonglong *)(uVar25 - 0x270);
  *puVar21 = uVar25;
  puVar21[0x50] = in_LR;
  puVar21[0x3c] = in_f14;
  puVar21[0x3d] = in_f15;
  puVar21[0x3e] = in_f16;
  puVar21[0x3f] = in_f17;
  puVar21[0x40] = in_f18;
  puVar21[0x41] = in_f19;
  puVar21[0x42] = in_f20;
  puVar21[0x43] = in_f21;
  puVar21[0x44] = in_f22;
  puVar21[0x45] = in_f23;
  puVar21[0x46] = in_f24;
  puVar21[0x47] = in_f25;
  puVar21[0x48] = in_f26;
  puVar21[0x49] = in_f27;
  puVar21[0x4a] = in_f28;
  puVar21[0x4b] = in_f29;
  puVar21[0x4c] = in_f30;
  puVar21[0x4d] = in_f31;
  sVar17 = *(short *)(param_1 + 0xa6);
  puVar21[0x34] = unaff_r24;
  iVar40 = sVar17 + -0x212;
  puVar21[0x3a] = unaff_r30;
  iVar41 = iVar40 * 4;
  puVar21[0x37] = unaff_r27;
  puVar21[0x39] = unaff_r29;
  puVar21[0x36] = unaff_r26;
  puVar21[0x38] = unaff_r28;
  pfVar45 = (float *)(&PTR_DAT_00734a70)[iVar40];
  iVar19 = *(int *)(&DAT_00734a50 + iVar41);
  puVar21[0x3b] = unaff_r31;
  pfVar44 = (float *)(&PTR_DAT_00734a60)[iVar40];
  iVar42 = *(int *)(&DAT_00734a40 + iVar41);
  puVar21[0x35] = unaff_r25;
  uVar18 = EffectTexHeaders;
  iVar39 = DAT_00a10920;
  psVar43 = (short *)(&PTR_DAT_00734a80)[iVar40];
  if ((g_gameMode == GAME_MODE_SPACE) && (DAT_00964590 == 4)) {
    puVar21[0x25] = (ulonglong)*(uint *)(*(int *)(DAT_00a10920 + 0x1c) + 4);
    uVar18 = *(undefined4 *)(iVar39 + 0xc);
  }
  else {
    uVar26 = draw::GetEffectTex(0x15);
    puVar21[0x25] = uVar26;
  }
  uVar26 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar21[0x26] = uVar26;
  uVar26 = FUN_00502f08(0,0,0,0,0,0);
  puVar21[0x24] = uVar26;
  uVar26 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar21[0x27] = uVar26;
  uVar20 = *(undefined4 *)(&DAT_00734a30 + iVar41);
  *(undefined4 *)((int)puVar21 + 0xfc) = uVar20;
  *(undefined4 *)(puVar21 + 0x1f) = uVar20;
  *(undefined4 *)((int)puVar21 + 0xf4) = uVar20;
  *(undefined4 *)(puVar21 + 0x1e) = uVar20;
  mobyfunc::GetBoneTransformations(param_1,0,uVar25 - 0x200);
  bVar22 = false;
  iVar41 = 0;
  if ((g_gameMode != GAME_MODE_NORMAL) ||
     ((ABS(GameCamera.posX - *(float *)(param_1 + 0x10)) < 16.0 &&
      (ABS(GameCamera.posY - *(float *)(param_1 + 0x14)) < 16.0)))) {
    bVar22 = true;
  }
  if ((((g_gameMode != GAME_MODE_SPACE) || (DAT_00964590 != 4)) && (bVar22)) || (DAT_00731c90 == 1))
  {
    DAT_00731c94 = 1;
    fastfunc::FastDecTimerS32(&DAT_00a561c4);
    dVar47 = (double)fastfunc::FastIntToDouble(DAT_00a561c4);
    puVar21[0x31] = (longlong)(int)(animationSpeed * 60.5);
    dVar48 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar21 + 0x18c));
    iVar39 = 0;
    *(float *)(puVar21 + 0x28) = (float)(dVar47 / dVar48);
    if (0 < iVar42) {
      dVar54 = 0.0;
      pfVar30 = (float *)&DAT_00a56850;
      pfVar38 = (float *)&DAT_00a561f0;
      fVar5 = *(float *)(puVar21 + 0xe);
      pfVar28 = (float *)&DAT_00a56b80;
      fVar6 = *(float *)(puVar21 + 0x10);
      pfVar36 = (float *)&DAT_00a56854;
      fVar7 = *(float *)(puVar21 + 0x12);
      pfVar34 = (float *)&DAT_00a56b84;
      fVar8 = *(float *)(puVar21 + 0x14);
      puVar21[0x30] = 0x3fb99999a0000000;
      fVar9 = *(float *)((int)puVar21 + 0x74);
      fVar10 = *(float *)((int)puVar21 + 0x84);
      fVar11 = *(float *)((int)puVar21 + 0x94);
      fVar12 = *(float *)((int)puVar21 + 0xa4);
      fVar13 = *(float *)(puVar21 + 0xf);
      fVar14 = *(float *)(puVar21 + 0x11);
      fVar15 = *(float *)(puVar21 + 0x13);
      fVar16 = *(float *)(puVar21 + 0x15);
      dVar49 = (double)GameCamera.posX;
      puVar21[0x2f] = (ulonglong)(double)*(float *)((int)puVar21 + 0x7c);
      dVar47 = (double)GameCamera.posY;
      puVar21[0x2e] = (ulonglong)(double)*(float *)((int)puVar21 + 0x8c);
      dVar48 = (double)GameCamera.posZ;
      puVar21[0x2d] = (ulonglong)(double)*(float *)((int)puVar21 + 0x9c);
      iVar40 = DAT_00731c90;
      puVar21[0x2c] = (ulonglong)(double)*(float *)((int)puVar21 + 0xac);
      puVar21[0x2b] = (ulonglong)dVar49;
      iVar24 = DAT_00a561c4;
      puVar21[0x2a] = (ulonglong)dVar47;
      puVar21[0x29] = (ulonglong)dVar48;
      do {
        dVar48 = (double)pfVar45[1];
        dVar49 = (double)*pfVar45;
        dVar50 = (double)pfVar45[2];
        dVar53 = (double)pfVar45[3];
        dVar51 = (double)puVar21[0x2e];
        dVar52 = (double)puVar21[0x2f];
        dVar47 = (double)puVar21[0x2d];
        dVar55 = (double)puVar21[0x2c];
        fVar1 = (float)((double)fVar8 * dVar53 +
                       (double)(float)((double)fVar7 * dVar50 +
                                      (double)(float)((double)fVar5 * dVar49 +
                                                     (double)(float)(dVar48 * (double)fVar6))));
        fVar2 = (float)((double)fVar12 * dVar53 +
                       (double)(float)((double)fVar11 * dVar50 +
                                      (double)(float)((double)fVar9 * dVar49 +
                                                     (double)(float)(dVar48 * (double)fVar10))));
        fVar3 = (float)((double)fVar16 * dVar53 +
                       (double)(float)((double)fVar15 * dVar50 +
                                      (double)(float)((double)fVar13 * dVar49 +
                                                     (double)(float)(dVar48 * (double)fVar14))));
        *pfVar38 = fVar1;
        pfVar38[1] = fVar2;
        fVar2 = (float)((double)fVar2 - (double)puVar21[0x2a]);
        fVar1 = (float)((double)fVar1 - (double)puVar21[0x2b]);
        fVar4 = (float)((double)fVar3 - (double)puVar21[0x29]);
        pfVar38[2] = fVar3;
        pfVar38[3] = (float)(dVar55 * dVar53 +
                            (double)(float)(dVar47 * dVar50 +
                                           (double)(float)(dVar52 * dVar49 +
                                                          (double)(float)(dVar48 * dVar51))));
        dVar52 = (double)*pfVar44;
        dVar53 = (double)pfVar44[1];
        dVar50 = (double)pfVar44[2];
        dVar51 = (double)pfVar44[3];
        fVar3 = fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2;
        dVar47 = dVar54;
        dVar48 = dVar54;
        dVar49 = dVar54;
        if (SQRT(fVar3) != 0.0) {
          fVar23 = 1.0 / SQRT(fVar3);
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          dVar49 = (double)(fVar1 * fVar23);
          dVar48 = (double)(fVar2 * fVar23);
          dVar47 = (double)(fVar4 * fVar23);
        }
        fVar2 = (float)(dVar51 * (double)fVar12 +
                       (double)(float)(dVar50 * (double)fVar11 +
                                      (double)(float)(dVar52 * (double)fVar9 +
                                                     (double)(float)(dVar53 * (double)fVar10))));
        fVar3 = (float)(dVar51 * (double)fVar8 +
                       (double)(float)(dVar50 * (double)fVar7 +
                                      (double)(float)(dVar52 * (double)fVar5 +
                                                     (double)(float)(dVar53 * (double)fVar6))));
        fVar4 = (float)(dVar51 * (double)fVar16 +
                       (double)(float)(dVar50 * (double)fVar15 +
                                      (double)(float)(dVar52 * (double)fVar13 +
                                                     (double)(float)(dVar53 * (double)fVar14))));
        dVar51 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)puVar21[0x30] / dVar51);
        dVar50 = dVar54;
        if (0.0 - dVar51 < 0.0) {
          dVar50 = (double)(fVar2 * fVar1);
        }
        dVar52 = dVar54;
        if (0.0 - dVar51 < 0.0) {
          dVar52 = (double)(fVar3 * fVar1);
        }
        dVar53 = dVar54;
        if (0.0 - dVar51 < 0.0) {
          dVar53 = (double)(fVar4 * fVar1);
        }
        if (dVar51 - 0.0 < 0.0) {
          dVar50 = (double)(fVar2 * fVar1);
        }
        if (dVar51 - 0.0 < 0.0) {
          dVar52 = (double)(fVar3 * fVar1);
        }
        if (dVar51 - 0.0 < 0.0) {
          dVar53 = (double)(fVar4 * fVar1);
        }
        dVar51 = (double)((float)(dVar53 * dVar47 +
                                 (double)(float)(dVar52 * dVar49 + (double)(float)(dVar50 * dVar48))
                                 ) * 2.0);
        fVar1 = -(float)(dVar50 * dVar51 - dVar48);
        fVar4 = -(float)(dVar52 * dVar51 - dVar49);
        fVar2 = -(float)(dVar53 * dVar51 - dVar47);
        fVar3 = fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1;
        dVar47 = dVar54;
        dVar48 = dVar54;
        dVar49 = dVar54;
        if (SQRT(fVar3) != 0.0) {
          fVar23 = 1.0 / SQRT(fVar3);
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          dVar48 = (double)(fVar23 * fVar4);
          dVar47 = (double)(fVar23 * fVar1);
          dVar49 = (double)(fVar23 * fVar2);
        }
        dVar49 = (double)(SQRT((float)(dVar49 + 1.0) * 2.0) * 2.0);
        fVar1 = (float)(dVar47 / dVar49) + 0.5;
        fVar2 = (float)(dVar48 / dVar49) + 0.5;
        if ((iVar40 == 1) || (iVar24 == 0)) {
          *pfVar30 = fVar2;
          *pfVar36 = fVar1;
        }
        else {
          fVar3 = *pfVar34;
          fVar4 = *(float *)(puVar21 + 0x28);
          *pfVar30 = (*pfVar28 - fVar2) * fVar4 + fVar2;
          *pfVar36 = (fVar3 - fVar1) * fVar4 + fVar1;
        }
        iVar39 = iVar39 + 1;
        pfVar28 = pfVar28 + 2;
        pfVar30 = pfVar30 + 2;
        pfVar34 = pfVar34 + 2;
        pfVar36 = pfVar36 + 2;
        pfVar44 = pfVar44 + 4;
        pfVar45 = pfVar45 + 4;
        pfVar38 = pfVar38 + 4;
      } while (iVar39 < iVar42);
    }
    if (DAT_00731c90 == 1) {
      DAT_00731c90 = 2;
    }
  }
  else {
    if (DAT_00731c94 == 1) {
      iVar39 = 0;
      DAT_00731c94 = 0;
      if (0 < iVar42) {
        puVar29 = &DAT_00a56850;
        puVar31 = &DAT_00a56b80;
        pfVar44 = (float *)&DAT_00a561f0;
        puVar35 = &DAT_00a56854;
        puVar37 = &DAT_00a56b84;
        do {
          uVar20 = *puVar35;
          *puVar31 = *puVar29;
          *puVar37 = uVar20;
          fVar5 = pfVar45[1];
          fVar6 = *(float *)((int)puVar21 + 0x84);
          fVar7 = *pfVar45;
          fVar8 = *(float *)(puVar21 + 0x11);
          fVar9 = *(float *)((int)puVar21 + 0x74);
          fVar10 = *(float *)((int)puVar21 + 0x8c);
          fVar11 = *(float *)(puVar21 + 0xf);
          fVar12 = pfVar45[2];
          fVar13 = *(float *)((int)puVar21 + 0x7c);
          iVar39 = iVar39 + 1;
          fVar14 = *(float *)((int)puVar21 + 0x94);
          fVar15 = *(float *)(puVar21 + 0x13);
          fVar16 = pfVar45[3];
          puVar29 = puVar29 + 2;
          fVar1 = *(float *)((int)puVar21 + 0x9c);
          puVar31 = puVar31 + 2;
          puVar35 = puVar35 + 2;
          puVar37 = puVar37 + 2;
          fVar2 = *(float *)((int)puVar21 + 0xa4);
          pfVar45 = pfVar45 + 4;
          fVar3 = *(float *)(puVar21 + 0x15);
          fVar4 = *(float *)((int)puVar21 + 0xac);
          *pfVar44 = *(float *)(puVar21 + 0x14) * fVar16 +
                     *(float *)(puVar21 + 0x12) * fVar12 +
                     *(float *)(puVar21 + 0xe) * fVar7 + *(float *)(puVar21 + 0x10) * fVar5;
          pfVar44[1] = fVar2 * fVar16 + fVar14 * fVar12 + fVar9 * fVar7 + fVar6 * fVar5;
          pfVar44[2] = fVar3 * fVar16 + fVar15 * fVar12 + fVar11 * fVar7 + fVar8 * fVar5;
          pfVar44[3] = fVar4 * fVar16 + fVar1 * fVar12 + fVar13 * fVar7 + fVar10 * fVar5;
          pfVar44 = pfVar44 + 4;
        } while (iVar39 < iVar42);
      }
    }
    else if (0 < iVar42) {
      pfVar44 = (float *)&DAT_00a561f0;
      do {
        fVar5 = pfVar45[1];
        fVar6 = *(float *)((int)puVar21 + 0x84);
        fVar7 = *pfVar45;
        fVar8 = *(float *)(puVar21 + 0x11);
        fVar9 = *(float *)((int)puVar21 + 0x74);
        fVar10 = *(float *)((int)puVar21 + 0x8c);
        fVar11 = *(float *)(puVar21 + 0xf);
        fVar12 = pfVar45[2];
        fVar13 = *(float *)((int)puVar21 + 0x7c);
        iVar42 = iVar42 + -1;
        fVar14 = *(float *)((int)puVar21 + 0x94);
        fVar15 = *(float *)(puVar21 + 0x13);
        fVar16 = pfVar45[3];
        fVar1 = *(float *)((int)puVar21 + 0x9c);
        pfVar45 = pfVar45 + 4;
        fVar2 = *(float *)((int)puVar21 + 0xa4);
        fVar3 = *(float *)(puVar21 + 0x15);
        fVar4 = *(float *)((int)puVar21 + 0xac);
        *pfVar44 = *(float *)(puVar21 + 0x14) * fVar16 +
                   *(float *)(puVar21 + 0x12) * fVar12 +
                   *(float *)(puVar21 + 0xe) * fVar7 + *(float *)(puVar21 + 0x10) * fVar5;
        pfVar44[1] = fVar2 * fVar16 + fVar14 * fVar12 + fVar9 * fVar7 + fVar6 * fVar5;
        pfVar44[2] = fVar3 * fVar16 + fVar15 * fVar12 + fVar11 * fVar7 + fVar8 * fVar5;
        pfVar44[3] = fVar4 * fVar16 + fVar1 * fVar12 + fVar13 * fVar7 + fVar10 * fVar5;
        pfVar44 = pfVar44 + 4;
      } while (0 < iVar42);
    }
    auVar56 = ZEXT416(0xffffffff);
    auVar56 = auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60;
    auVar57 = vectorShiftLeftIntegerWord(auVar56,auVar56);
    auVar56 = loadVectorLeftIndexed(4,0x1607a4);
    auVar56 = auVar56 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar58 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar56 = vectorMultiplyAddFloatingPoint
                        (auVar58,auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60,
                         auVar57);
    auVar56 = vectorConvertToSignedFixedPointWordSaturate(auVar56,0);
    auVar56 = auVar56 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_00a561c4 = storeVectorElementWordIndexed
                             (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60,0x61c4,
                              0xa50000);
  }
  if (0 < iVar19) {
    do {
      lVar33 = uVar25 - 0x1c0;
      lVar46 = 4;
      lVar27 = uVar25 - 0x270;
      psVar32 = psVar43;
      do {
        sVar17 = *psVar32;
        psVar32 = psVar32 + 2;
        iVar39 = (int)((longlong)sVar17 << 4);
        iVar42 = (int)((longlong)sVar17 << 3);
        puVar29 = (undefined4 *)lVar33;
        *puVar29 = *(undefined4 *)((int)&DAT_00a561f0 + iVar39);
        puVar29[1] = *(undefined4 *)((int)&DAT_00a561f4 + iVar39);
        puVar29[2] = *(undefined4 *)((int)&DAT_00a561f8 + iVar39);
        puVar29[3] = *(undefined4 *)((int)&DAT_00a561fc + iVar39);
        uVar20 = *(undefined4 *)((int)&DAT_00a56854 + iVar42);
        lVar33 = lVar33 + 0x10;
        *(undefined4 *)((int)lVar27 + 0x100) = *(undefined4 *)((int)&DAT_00a56850 + iVar42);
        *(undefined4 *)((int)lVar27 + 0x104) = uVar20;
        lVar27 = lVar27 + 8;
        lVar46 = lVar46 + -1;
      } while (lVar46 != 0);
      draw::FastDrawQuad(uVar25 - 0x1c0,0,0,uVar18,9);
      iVar41 = iVar41 + 1;
      psVar43 = psVar43 + 8;
    } while (iVar41 < iVar19);
  }
  return;
}



//==== 0016114c  ns=space  size=0x328
// sig: void TransitionDraw_Space(void)
// callers(1): 001639a8 space::DisplayLoadingScreen
// callees(20): 00066088 draw::ComposeCameraMatrix; 000668d0 draw::UpdateViewContext; 0006849c stub::STUB_0006849c; 0006889c draw::Sprite_DrawShape; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00078100 stub::STUB_00078100; 000f0fe8 mobyfunc::CleanAnimationCache; 000f1448 stub::STUB_000f1448; 000f1a78 mobyfunc::DrawMobys; 00159e88 space::Space_DrawSkyShell; 0015ef98 space::Space_DrawTransitionOverlay; 0015f6d0 space::???_Space_TransitionDrawPass; 001607c0 space::Space_DrawShipEffects; 00174cf4 stub::STUB_00174cf4; 00174f80 vuchain::SetGSReg; 00175554 stub::STUB_00175554; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend; 00502f98 FUN_00502f98

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::TransitionDraw_Space(void)

{
  undefined8 uVar1;
  double dVar2;
  
  stub::STUB_00078100();
  draw::ComposeCameraMatrix();
  mobyfunc::CleanAnimationCache();
  stub::STUB_0006849c();
  DAT_00a10724 = 0xffffffff;
  dVar2 = (double)ViewContext.xratio;
  if ((int)(((uint)((int)ViewContext.xratio >> 0x1f) >> 1 ^ (uint)ViewContext.xratio) -
           ((int)ViewContext.xratio >> 0x1f)) < 0x3f2147ae) {
    ViewContext.xratio = 0.63;
  }
  draw::UpdateViewContext();
  draw::ComposeCameraMatrix();
  Space_DrawSkyShell();
  ViewContext.xratio = (float)dVar2;
  draw::UpdateViewContext();
  draw::ComposeCameraMatrix();
  if (g_currentLoadingScreen == 4) {
    stub::STUB_0006d704(1);
    ____Space_TransitionDrawPass();
    stub::STUB_0006d708();
  }
  mobyfunc::DrawMobys();
  stub::STUB_00175554(0x2080000);
  stub::STUB_0006d704(1);
  if ((Level != Veldin) && ((Level != Novalis || (g_SeenPlanets.Kerwan != '\0')))) {
    Space_DrawTransitionOverlay(DAT_0095cec8);
  }
  if ((g_currentLoadingScreen == 4) && (0x3c < boot::g_SpaceSceneFrame)) {
    uVar1 = idol_draw::Blend(1,0,0x80,1,0,0,1,1);
    vuchain::SetGSReg(0x16,uVar1);
    uVar1 = idol_draw::PackCmd(0,1,0,1,0x80);
    vuchain::SetGSReg(3,uVar1);
    draw::Sprite_DrawShape(0x20,0x168,0x100,0x20,0,0,0x100,0x20);
    uVar1 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
    vuchain::SetGSReg(0x16,uVar1);
  }
  if ((Level != Veldin) && ((Level != Novalis || (g_SeenPlanets.Kerwan != '\0')))) {
    Space_DrawShipEffects(DAT_0095cec8);
  }
  stub::STUB_0006d708();
  if ((0 < (int)boot::SceneScreenFade) &&
     (0x3f800000 <
      (int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^ (uint)boot::SceneScreenFade) -
           ((int)boot::SceneScreenFade >> 0x1f)))) {
    boot::SceneScreenFade = 1.0;
  }
  stub::STUB_00174cf4(0x10);
  stub::STUB_000f1448();
  return;
}



//==== 00161480  ns=space  size=0x244
// sig: void Space_SpawnShipParticles(void)
// callers(1): 00161788 space::UpdateSpace
// callees(3): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001206e8 partupd::SpawnPart_2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void space::Space_SpawnShipParticles(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  
  iVar3 = 0;
  dVar4 = -0.25;
  dVar5 = 0.25;
  dVar6 = 4.5;
  do {
    mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime);
    mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime);
    mobyutil::MB_randRangeFloat
              ((float)((double)mobyutil::g_FrameTime * dVar4),
               (float)((double)mobyutil::g_FrameTime * dVar5));
    iVar1 = (int)((double)animationSpeed * dVar6);
    iVar2 = mobyutil::MB_randInt(iVar1);
    partupd::SpawnPart_2(local_70,local_90,local_80,0x24c0c0c0,0x14c0c0c0,iVar1,iVar1,iVar1 + iVar2)
    ;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return;
}



//==== 00161788  ns=space  size=0x2220
// sig: undefined UpdateSpace(void)
// callers(2): 000e0e60 main::startLevel; 00164c58 space::DoSpaceTransition
// callees(47): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 00053550 camera::UpdateCamera; 000668d0 draw::UpdateViewContext; 0006d720 RegisterFuncForMoby; 0006d7e0 draw::RegisterPostDraw; 0006dad0 draw::FadeToBlack; 0007d478 hero::Hero_MakeVisible; 000954c8 hero::HeroUpdate; 00095aa8 hero::???_Hero_AddPulsingMobyGlow; 000a0c38 hero::Hero_Warp; 000aa5e0 hero::Hero_UpdateInScene; 000aa8c8 hero::???_Hero_SnapMobyToBonePose; 000aa9c8 hero::SetPositionAfterMovie; 000dafb8 lights::UpdatePointLights; 000e07f8 loaders::ParseSpaceSceneChunk; 000ef74c mobyfunc::UpdateMobyFrameData; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f1478 mobyfunc::UpdateHeroLightAngle; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc168 mobyfunc::UpdateMobys; 00106468 mobyutil::MB_SetZBoundsFromFloorCeil; 00109c30 mobyutil::OrganicDelt; 00117390 mobyutil::MB_PathEvalSpline; 0011c830 music::music_PlayPreseekedSpeech; 0011ce20 music::music_Pause; 0011ce64 music::music_Unpause; 0011dbcc music::LoadMusic2; 0011e8a0 partproc::UpdateParts; 0013abcc pause::BeginMenu; 0015be68 sound::sound_Update; 0015d7ac sound::sound_UpdateAmbient; 0015fe00 space::ChooseLoadingScreen; 00161480 space::Space_SpawnShipParticles; 00166e30 update::ResetGameCounters; 00166e88 update::UpdateGameCounters; 00174bdc vuchain::VU1_setBufSizeByLevel; 00502578 fastfunc::FastWrapRot
// strings: 0096c074: 'None'

void space::UpdateSpace(void)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  f32 fVar11;
  MobyInstance *pMVar12;
  Spline *pSVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  vec4 *pvVar17;
  longlong lVar18;
  undefined4 *puVar19;
  float *pfVar20;
  MobyInstance *pMVar21;
  int iVar22;
  short sVar25;
  float *pfVar23;
  Spline *pSVar24;
  Mtx4 *pMVar26;
  ulonglong uVar27;
  int iVar28;
  MOBY_OCLASSES MVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  byte bVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar75 [16];
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  undefined4 local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_240;
  float local_23c;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  longlong local_1d0;
  
  uVar30 = ZEXT48(&stack0x00000000);
  lVar18 = uVar30 - 0x110;
  puVar19 = (undefined4 *)lVar18;
  puVar19[3] = in_vr31_32_3;
  puVar19[2] = in_vr31_32_2;
  puVar19[1] = in_vr31_32_1;
  *puVar19 = in_vr31_32_0;
  DAT_00964594 = DAT_00964594 + 1;
  bVar34 = (DAT_00964590 == -1) << 1;
  if (DAT_00964590 < 4) {
    if (0 < DAT_00964590) {
      if (DAT_00964590 < 2) {
        return;
      }
      if (DAT_00964590 < 3) {
        return;
      }
      update::ResetGameCounters();
      mobyfunc::UpdateMobys();
      sound::sound_UpdateAmbient();
      hero::HeroUpdate();
      partproc::UpdateParts();
      if (DAT_00964594 == 0) {
        music::music_Pause(0);
        music::LoadMusic2(0);
        music::g_PendingSpeech = g_SpaceshipVariant + 0x9c4f;
        local_1d0 = (longlong)(int)(animationSpeed * 12.5);
        draw::FadeToBlack((int)(animationSpeed * 12.5));
        while (music::g_SpeechPlaying.status != 3) {
          sound::sound_Update();
          stub::STUB_00503078(0);
        }
        music::music_PlayPreseekedSpeech();
        pMVar12 = g_SpaceshipPtr;
        g_SpaceshipPtr->updateId = '\x01';
        pMVar12->animationId = '\x02';
        dVar41 = 0.0;
        pMVar12->animationBlend = 0.0;
        mobyfunc::UpdateMobyFrameData(pMVar12);
        pMVar12 = g_SpaceshipPtr;
        g_SpaceshipPtr->field45_0x72 = -1;
        iVar31 = g_shipSplinePath;
        pMVar12->collision = (ushort *)0x0;
        if (-1 < iVar31) {
          pMVar21 = mobyfunc::CreateMoby(RATCHET);
          DAT_00964580 = pMVar21;
          pMVar21->field45_0x72 = -1;
          pMVar21->collision = (ushort *)0x0;
          pMVar12 = g_heroMobyPtr;
          pMVar21->drawDistance = 0x1ff;
          pMVar21->modeBits = pMVar21->modeBits | (NO_POST_UPDATE|NO_UPDATE);
          uVar33 = pMVar12->light;
          pMVar21->color = pMVar12->color;
          pMVar21->light = uVar33;
          pMVar21 = mobyfunc::CreateMoby(CLANK_000A);
          DAT_00964584 = pMVar21;
          pMVar21->field45_0x72 = -1;
          pMVar21->collision = (ushort *)0x0;
          pMVar12 = g_heroMobyPtr;
          pMVar21->drawDistance = 0x1ff;
          uVar33 = pMVar12->color;
          uVar16 = pMVar12->light;
          pMVar21->modeBits = pMVar21->modeBits | (NO_POST_UPDATE|NO_UPDATE);
          pMVar21->color = uVar33;
          pMVar21->light = uVar16;
        }
        camera::SetCameraPosition(0x951500,0x951510,1,0,0);
        DAT_009645b8 = 0.0;
        DAT_009645bc = 0;
        if (-1 < g_shipSplinePath) {
          pSVar13 = Splines[g_shipSplinePath];
          iVar31 = pSVar13->cnt;
          pSVar13->points[0].w = 0.0;
          if (1 < iVar31 + -1) {
            iVar32 = 1;
            pSVar24 = pSVar13;
            do {
              uVar37 = FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                                    (double)(pSVar24->points[1].y - pSVar24->points[0].y));
              uVar38 = FUN_005e8338((double)(pSVar24->points[2].x - pSVar24->points[1].x),
                                    (double)(pSVar24->points[2].y - pSVar24->points[1].y));
              dVar42 = (double)fastfunc::FastDiffRots(uVar38,uVar37);
              iVar32 = iVar32 + 1;
              iVar31 = pSVar13->cnt;
              pSVar24->points[1].w = (float)dVar42;
              if (dVar41 - ABS(dVar42) < 0.0) {
                dVar41 = ABS(dVar42);
              }
              pSVar24 = (Spline *)pSVar24->points;
            } while (iVar32 < iVar31 + -1);
          }
          uVar37 = FUN_005e8338((double)(pSVar13->points[iVar31 + -1].x -
                                        pSVar13->points[iVar31 + -2].x),
                                (double)(pSVar13->points[iVar31 + -1].y -
                                        pSVar13->points[iVar31 + -2].y));
          iVar31 = (int)(((ulonglong)(uint)pSVar13->cnt & 0xfffffff) << 4);
          uVar38 = FUN_005e8338((double)(pSVar13->points[0].x -
                                        *(float *)((int)&((Spline *)(pSVar13->points + -1))->cnt +
                                                  iVar31)),
                                (double)(pSVar13->points[0].y -
                                        *(float *)((int)pSVar13->points + iVar31 + -0xc)));
          dVar42 = (double)fastfunc::FastDiffRots(uVar38,uVar37);
          iVar31 = pSVar13->cnt;
          pSVar13->points[iVar31 + -1].w = (float)dVar42;
          if (0 < iVar31) {
            iVar31 = 0;
            pSVar24 = pSVar13;
            do {
              iVar31 = iVar31 + 1;
              iVar32 = pSVar13->cnt;
              pSVar24->points[0].w = pSVar24->points[0].w * (float)(0.3490658402442932 / dVar41);
              pSVar24 = (Spline *)pSVar24->points;
            } while (iVar31 < iVar32);
          }
          DAT_00964604 = pSVar13->points[0].y;
          fVar2 = pSVar13->points[1].y;
          DAT_00964600 = pSVar13->points[0].x;
          fVar6 = DAT_00964604 - fVar2;
          fVar5 = pSVar13->points[1].x;
          DAT_00964608 = pSVar13->points[0].z;
          fVar7 = DAT_00964600 - fVar5;
          fVar8 = DAT_00964608 - pSVar13->points[1].z;
          fVar2 = fVar2 - DAT_00964604;
          DAT_009645ac = 0.0;
          DAT_009645b0 = 0.0;
          fVar5 = fVar5 - DAT_00964600;
          DAT_009645c0 = 0;
          g_LoadScreenRelated = 0;
          DAT_009645b4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
          DAT_009645f0 = (g_SpaceshipPtr->pos).x;
          DAT_009645f4 = (g_SpaceshipPtr->pos).y;
          DAT_009645f8 = (g_SpaceshipPtr->pos).z;
          DAT_009645fc = (g_SpaceshipPtr->pos).w;
          DAT_0096460c = pSVar13->points[0].w;
          DAT_00964610 = (g_SpaceshipPtr->rotation).x;
          DAT_00964614 = (g_SpaceshipPtr->rotation).y;
          DAT_00964618 = (g_SpaceshipPtr->rotation).z;
          DAT_0096461c = (g_SpaceshipPtr->rotation).w;
          dVar41 = (double)FUN_005e8338((double)SQRT(fVar5 * fVar5 + fVar2 * fVar2));
          DAT_00964624 = (float)dVar41;
          dVar41 = (double)FUN_005e8338((double)(pSVar13->points[1].x - pSVar13->points[0].x),
                                        (double)(pSVar13->points[1].y - pSVar13->points[0].y));
          DAT_00964628 = (float)dVar41;
        }
      }
      if (-1 < (int)(g_shipCameraStartCuboid | g_shipCameraEndCuboid)) {
        mobyutil::OrganicDelt
                  (1.0,DAT_0071f418 * 0.666,DAT_0071f418 * 0.666,mobyutil::g_FrameTime * 0.5,
                   &DAT_009645b8,0x720000,(float *)&DAT_009645bc);
        local_270 = Cuboids[g_shipCameraStartCuboid].pos.x;
        local_264 = Cuboids[g_shipCameraEndCuboid].pos.w;
        local_270 = DAT_009645b8 * (Cuboids[g_shipCameraEndCuboid].pos.x - local_270) + local_270;
        local_26c = DAT_009645b8 *
                    (Cuboids[g_shipCameraEndCuboid].pos.y - Cuboids[g_shipCameraStartCuboid].pos.y)
                    + Cuboids[g_shipCameraStartCuboid].pos.y;
        local_268 = DAT_009645b8 *
                    (Cuboids[g_shipCameraEndCuboid].pos.z - Cuboids[g_shipCameraStartCuboid].pos.z)
                    + Cuboids[g_shipCameraStartCuboid].pos.z;
        local_254 = 0;
        local_258 = 0.0;
        local_25c = 0.0;
        local_260 = 0.0;
        dVar41 = (double)fastfunc::FastDiffRots
                                   ((double)Cuboids[g_shipCameraEndCuboid].rot.y,
                                    (double)Cuboids[g_shipCameraStartCuboid].rot.y);
        local_25c = (float)(dVar41 * (double)DAT_009645b8);
        dVar41 = (double)fastfunc::FastWrapRot(Cuboids[g_shipCameraStartCuboid].rot.y,local_25c);
        local_25c = (float)dVar41;
        dVar41 = (double)fastfunc::FastDiffRots
                                   ((double)Cuboids[g_shipCameraEndCuboid].rot.z,
                                    (double)Cuboids[g_shipCameraStartCuboid].rot.z);
        local_258 = (float)(dVar41 * (double)DAT_009645b8);
        dVar41 = (double)fastfunc::FastWrapRot(Cuboids[g_shipCameraStartCuboid].rot.z,local_258);
        local_258 = (float)dVar41;
        camera::camera5::Camera_SetMobyDrivenTargetPos(&local_270);
        camera::camera5::Camera_SetMobyDrivenTargetRot(&local_260);
      }
      pMVar12 = g_SpaceshipPtr;
      if (g_shipSplinePath < 0) goto LAB_0016388c;
      local_1d0 = (longlong)(int)(animationSpeed * 150.5);
      if ((int)DAT_00964594 < (int)(animationSpeed * 150.5)) {
        dVar41 = (double)fastfunc::FastIntToDouble();
        dVar52 = 120.5;
        local_1d0 = (longlong)(int)(animationSpeed * 120.5);
        dVar42 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 120.5));
        fVar6 = DAT_0096460c;
        pMVar12 = g_SpaceshipPtr;
        dVar43 = (double)DAT_00964600;
        dVar51 = 1.0;
        dVar44 = (double)DAT_009645f0;
        dVar45 = (double)DAT_00964604;
        dVar46 = (double)DAT_009645f4;
        dVar47 = (double)DAT_00964608;
        dVar48 = (double)DAT_009645f8;
        local_1d0 = (longlong)(int)((double)animationSpeed * dVar52);
        dVar49 = (double)DAT_00964624;
        dVar50 = (double)DAT_00964614;
        fVar2 = (float)(dVar41 * (double)(float)(3.1415927410125732 / dVar42) + 1.570796251296997);
        fVar5 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar5 = fVar2;
        }
        fVar7 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
          fVar7 = fVar5;
        }
        fVar2 = fVar7 * fVar7;
        fVar5 = fVar2 * fVar2 * fVar7;
        fVar8 = fVar2 * fVar5;
        dVar41 = (double)((1.0 - (fVar2 * fVar8 * 2.601887e-06 +
                                 fVar8 * -0.0001980741 +
                                 fVar5 * 0.0083330255 + fVar2 * fVar7 * -0.16666657 + fVar7)) * 0.5)
        ;
        if ((int)((double)animationSpeed * dVar52) <= (int)DAT_00964594) {
          dVar41 = dVar51;
        }
        g_SpaceshipPtr->animationBlend = (float)dVar41;
        (pMVar12->pos).w = fVar6;
        (pMVar12->pos).x = (float)(dVar41 * (double)(float)(dVar43 - dVar44) + dVar44);
        (pMVar12->pos).y = (float)(dVar41 * (double)(float)(dVar45 - dVar46) + dVar46);
        (pMVar12->pos).z = (float)(dVar41 * (double)(float)(dVar47 - dVar48) + dVar48);
        dVar44 = 0.0;
        (pMVar12->rotation).x = 0.0;
        dVar42 = (double)fastfunc::FastDiffRots(dVar49,dVar50);
        dVar42 = (double)fastfunc::FastWrapRot((float)dVar50,(float)(dVar42 * dVar41));
        (g_SpaceshipPtr->rotation).y = (float)dVar42;
        dVar43 = (double)DAT_00964618;
        dVar42 = (double)fastfunc::FastDiffRots((double)DAT_00964628,dVar43);
        dVar42 = (double)fastfunc::FastWrapRot((float)dVar43,(float)(dVar42 * dVar41));
        (g_SpaceshipPtr->rotation).z = (float)dVar42;
        if ((0 < (int)boot::SceneScreenFade) &&
           (boot::SceneScreenFade = boot::SceneScreenFade - 0.125,
           (double)boot::SceneScreenFade < dVar44)) {
          boot::SceneScreenFade = 0.0;
        }
        if (dVar41 < dVar51) {
          Space_SpawnShipParticles();
        }
      }
      else {
        auVar57 = loadVectorLeftIndexed(0xb4,0x1616c4);
        auVar58 = loadVectorLeftIndexed(0x40,0x964570);
        auVar57 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar30 = ZEXT48(Splines[g_shipSplinePath]);
        auVar58 = vectorAddFloatingPoint
                            (auVar58,auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60);
        fVar2 = DAT_009645b0 + 0.8;
        auVar57 = auVar58 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar60 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
        DAT_009645b0 = (float)storeVectorElementWordIndexed(auVar60,0x40,0x964570);
        auVar57 = loadVectorLeftIndexed(0xb8,0x1616c4);
        auVar57 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar57 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
        vectorCompareGreaterThanFloatingPoint(auVar60,auVar57);
        if (!(bool)(bVar34 >> 1 & 1)) {
          DAT_009645b0 = 100.0;
          auVar58 = auVar57;
          fVar2 = 100.0;
        }
        auVar57 = auVar58 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar57 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
        if (((g_buttonsPressedThisFrame & (CROSS|CIRCLE|TRIANGLE)) != 0) &&
           ((int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^ (uint)boot::SceneScreenFade) -
                 ((int)boot::SceneScreenFade >> 0x1f)) < 0x3d800000)) {
          boot::SceneScreenFade = 0.0625;
        }
        auVar58 = ZEXT416(6);
        auVar60 = loadVectorLeftIndexed(lVar18,uVar30);
        auVar60 = vectorSubtractUnsignedWordModulo
                            (auVar60,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60);
        auVar66 = loadVectorLeftIndexed(0x3c,0x964570);
        auVar58 = auVar66 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar60 = vectorConvertFromSignedFixedPointWord(auVar60,0);
        auVar60 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanFloatingPoint
                  (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60,
                   auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60);
        if ((!(bool)(bVar34 >> 1 & 1)) &&
           ((int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^ (uint)boot::SceneScreenFade) -
                 ((int)boot::SceneScreenFade >> 0x1f)) < 0x3d800000)) {
          boot::SceneScreenFade = 0.0625;
        }
        if (g_SpaceshipVariant < 2) {
          g_SpaceshipPtr->setByGroup = '2';
          pMVar12->uid = 10;
          RegisterFuncForMoby(&PTR_Space_DrawShipEngineGlow_00707cb0,pMVar12);
          auVar66 = loadVectorLeftIndexed(0x3c,0x964570);
          auVar57 = loadVectorLeftIndexed(0x40,0x964570);
          fVar2 = DAT_009645b0;
        }
        auVar58 = ZEXT416(0xffffffff);
        auVar60 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar58 = ZEXT416(0xffffffff);
        auVar71 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar70 = vectorShiftLeftIntegerWord(auVar60,auVar60);
        auVar67 = loadVectorLeftIndexed(0x44,0x964570);
        auVar68 = vectorReciprocalEstimateFloatingPoint(auVar67);
        auVar58 = loadVectorLeftIndexed(0xbc,0x1616c4);
        auVar58 = auVar58 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar69 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar72 = vectorShiftLeftIntegerWord(auVar71,auVar71);
        auVar58 = ZEXT416(0xffffffff);
        auVar60 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar58 = ZEXT416(0xffffffff);
        auVar71 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar58 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar73 = vectorShiftLeftIntegerWord(auVar60,auVar60);
        auVar74 = vectorShiftLeftIntegerWord(auVar71,auVar71);
        auVar71 = vectorNegativeMultiplySubtractFloatingPoint(auVar68,auVar67,auVar69);
        auVar57 = ZEXT416(1);
        auVar60 = auVar66 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar66 = vectorMultiplyAddFloatingPoint(auVar68,auVar71,auVar70);
        auVar68 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
        auVar58 = vectorMultiplyAddFloatingPoint
                            (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60,auVar68,
                             auVar73);
        auVar68 = loadVectorLeftIndexed(lVar18,uVar30);
        auVar57 = vectorSubtractUnsignedWordModulo
                            (auVar68,auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60);
        auVar57 = vectorConvertFromSignedFixedPointWord(auVar57,0);
        auVar68 = vectorNegativeMultiplySubtractFloatingPoint(auVar66,auVar67,auVar69);
        auVar57 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar68 = vectorMultiplyAddFloatingPoint(auVar66,auVar68,auVar72);
        auVar66 = vectorNegativeMultiplySubtractFloatingPoint(auVar68,auVar67,auVar69);
        auVar66 = vectorMultiplyAddFloatingPoint(auVar68,auVar66,auVar74);
        fVar2 = DAT_009645ac + (fVar2 * mobyutil::g_FrameTime) / DAT_009645b4;
        auVar58 = vectorMultiplyAddFloatingPoint
                            (auVar66,auVar58,
                             auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60);
        auVar58 = auVar58 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar58 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        vectorCompareGreaterThanFloatingPoint
                  (auVar58,auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60);
        DAT_009645ac = (float)storeVectorElementWordIndexed(auVar58,0x3c,0x964570);
        if ((bool)(bVar34 >> 1 & 1)) {
          dVar41 = 1.0;
          uVar33 = (uint)((int)boot::SceneScreenFade >> 0x1f) >> 1;
          if ((int)((uVar33 ^ (uint)boot::SceneScreenFade) - ((int)boot::SceneScreenFade >> 0x1f)) <
              0x3f800000) {
            mobyutil::MB_PathEvalSpline
                      ((double)fVar2,uVar30,uVar33,1,&g_SpaceshipPtr->pos,&g_SpaceshipPtr->rotation,
                       0);
            iVar31 = g_LoadScreenRelated;
            sVar25 = g_SpaceshipVariant;
            pMVar12 = g_SpaceshipPtr;
            uVar33 = DAT_009645c0 + 1;
            bVar1 = g_LoadScreenRelated < 0x20;
            DAT_009645c0 = uVar33 & 0x1f;
            (g_SpaceshipPtr->rotation).x = (g_SpaceshipPtr->rotation).w;
            if (bVar1) {
              g_LoadScreenRelated = iVar31 + 1;
            }
            FUN_005e7d64((uVar33 & 0x1f) * 0x10 + 0x964630,sVar25 * 0x20 + 0x731ec0,
                         &pMVar12->transform);
            pMVar12 = g_SpaceshipPtr;
            iVar32 = DAT_009645c0 * 0x10;
            iVar31 = DAT_009645c0 * 0x10;
            iVar22 = DAT_009645c0 * 0x10;
            iVar28 = (int)g_SpaceshipVariant;
            pMVar26 = &g_SpaceshipPtr->transform;
            *(float *)(iVar32 + 0x964630) = *(float *)(iVar32 + 0x964630) + (g_SpaceshipPtr->pos).x;
            *(float *)(iVar32 + 0x964634) = *(float *)(iVar32 + 0x964634) + (pMVar12->pos).y;
            *(float *)(iVar32 + 0x964638) = *(float *)(iVar32 + 0x964638) + (pMVar12->pos).z;
            *(undefined4 *)(iVar31 + 0x96463c) = 0x3f800000;
            FUN_005e7d64(&DAT_00964830 + iVar22,&DAT_00731ed0 + iVar28 * 0x20,pMVar26);
            pMVar12 = g_SpaceshipPtr;
            iVar32 = DAT_009645c0 * 0x10;
            iVar31 = DAT_009645c0 * 0x10;
            fVar2 = *(float *)(iVar32 + 0x964834);
            fVar5 = *(float *)(iVar32 + 0x964838);
            *(float *)(&DAT_00964830 + iVar32) =
                 *(float *)(&DAT_00964830 + iVar32) + (g_SpaceshipPtr->pos).x;
            *(float *)(iVar32 + 0x964834) = fVar2 + (pMVar12->pos).y;
            *(float *)(iVar32 + 0x964838) = fVar5 + (pMVar12->pos).z;
            *(undefined4 *)(iVar31 + 0x96483c) = 0x3f800000;
            RegisterFuncForMoby(&PTR_Space_DrawTransitionOverlay_00707cb8,pMVar12);
            if ((0 < (int)boot::SceneScreenFade) &&
               (boot::SceneScreenFade = boot::SceneScreenFade + 0.0625,
               dVar41 < (double)boot::SceneScreenFade)) {
              boot::SceneScreenFade = 1.0;
            }
            goto LAB_0016375c;
          }
        }
        g_loadingPlanet = 1;
        g_CutscenePlaying = 1;
      }
LAB_0016375c:
      pMVar21 = DAT_00964580;
      pMVar12 = g_SpaceshipPtr;
      pMVar26 = &g_SpaceshipPtr->transform;
      iVar31 = (int)g_SpaceshipVariant;
      (DAT_00964580->rotation).x = (g_SpaceshipPtr->rotation).x;
      (pMVar21->rotation).y = (pMVar12->rotation).y;
      (pMVar21->rotation).z = (pMVar12->rotation).z;
      (pMVar21->rotation).w = (pMVar12->rotation).w;
      FUN_005e7d64(&pMVar21->pos,iVar31 * 0x10 + 0x7321c0,pMVar26);
      pMVar21 = DAT_00964580;
      pMVar12 = g_SpaceshipPtr;
      pvVar17 = &DAT_00964580->pos;
      fVar2 = (DAT_00964580->pos).z;
      (DAT_00964580->pos).x = (DAT_00964580->pos).x + (g_SpaceshipPtr->pos).x;
      (pMVar21->pos).y = pvVar17->y + (pMVar12->pos).y;
      (pMVar21->pos).z = fVar2 + (pMVar12->pos).z;
      mobyfunc::UpdateMobyTransform(pMVar21);
      pMVar21 = DAT_00964584;
      pMVar12 = g_SpaceshipPtr;
      iVar31 = (int)g_SpaceshipVariant;
      (DAT_00964584->rotation).x = (g_SpaceshipPtr->rotation).x;
      (pMVar21->rotation).y = (pMVar12->rotation).y;
      (pMVar21->rotation).z = (pMVar12->rotation).z;
      (pMVar21->rotation).w = (pMVar12->rotation).w;
      FUN_005e7d64(&pMVar21->pos,iVar31 * 0x10 + 0x7321f0,&pMVar12->transform);
      pMVar21 = DAT_00964584;
      pMVar12 = g_SpaceshipPtr;
      pvVar17 = &DAT_00964584->pos;
      fVar2 = (DAT_00964584->pos).z;
      (DAT_00964584->pos).x = (DAT_00964584->pos).x + (g_SpaceshipPtr->pos).x;
      (pMVar21->pos).y = pvVar17->y + (pMVar12->pos).y;
      (pMVar21->pos).z = fVar2 + (pMVar12->pos).z;
      mobyfunc::UpdateMobyTransform(pMVar21);
LAB_0016388c:
      camera::UpdateCamera();
      sound::sound_Update();
      lights::UpdatePointLights();
      mobyfunc::UpdateHeroLightAngle();
      update::UpdateGameCounters();
      return;
    }
    if (DAT_00964590 < 0) {
      return;
    }
  }
  else {
    if (DAT_00964590 < 7) {
      if (4 < DAT_00964590) {
        return;
      }
      ChooseLoadingScreen();
      return;
    }
    if (DAT_00964590 < 8) {
      return;
    }
    if (8 < DAT_00964590) {
      return;
    }
  }
  update::ResetGameCounters();
  mobyfunc::UpdateMobys();
  sound::sound_UpdateAmbient();
  hero::HeroUpdate();
  partproc::UpdateParts();
  puVar19 = &DAT_0095cd50;
  g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
  boot::g_SpaceSceneFrame = boot::g_SpaceSceneFrame + 1;
  boot::SceneScreenFade = boot::SceneScreenFade - 0.125;
  if (boot::SceneScreenFade < 0.0) {
    boot::SceneScreenFade = 0.0;
  }
  iVar31 = ((uint)((LZCOUNT(-g_IsPal) << 0x3a) >> 0x3f) & 0x10) + 0x50;
  sVar25 = DAT_00964598;
  if ((g_buttonsPressedThisFrame & (CROSS|CIRCLE|TRIANGLE)) == 0) {
LAB_00161a78:
    local_1d8 = 0.0;
    if (sVar25 == 0) goto LAB_00161ba8;
  }
  else {
    iVar32 = (int)(animationSpeed * 30.5);
    local_1d0 = (longlong)iVar32;
    if (boot::SceneScreenFade != 0.0 || boot::g_SpaceSceneFrame <= iVar32) goto LAB_00161a78;
    if ((DAT_00964590 == 0) &&
       (iVar22 = (int)(animationSpeed *
                      ((float)(longlong)
                              (*(int *)(&DAT_00732220 + (int)((longlong)g_SpaceshipVariant << 2)) +
                              -0x1e) + 0.5)), local_1d0 = (longlong)iVar22,
       boot::g_SpaceSceneFrame < iVar22)) {
      sVar25 = 1;
    }
    if ((DAT_00964590 != 8) ||
       (boot::g_SpaceSceneNumFrames._0_2_ - iVar32 <= boot::g_SpaceSceneFrame)) goto LAB_00161a78;
  }
  local_1d8 = 0.0;
  if (music::g_SpeechPlaying.status != 7 && music::g_SpeechPlaying.status != 6) {
    music::g_SpeechPlaying.status = 5;
  }
  if (DAT_00964590 == 0) {
    auVar57 = loadVectorLeftIndexed((longlong)g_SpaceshipVariant << 2,0x732220);
    auVar58 = vectorConvertFromSignedFixedPointWord(auVar57,0);
    auVar57 = loadVectorLeftIndexed(0xc,0x1616c4);
    auVar57 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar58 = vectorAddFloatingPoint
                        (auVar58,auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60);
    auVar57 = ZEXT416(0xffffffff);
    auVar57 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
    auVar60 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar57 = vectorShiftLeftIntegerWord(auVar57,auVar57);
    auVar57 = vectorMultiplyAddFloatingPoint(auVar60,auVar58,auVar57);
    auVar57 = vectorConvertToSignedFixedPointWordSaturate(auVar57,0);
    iVar32 = (int)(animationSpeed *
                  ((float)(longlong)
                          *(int *)(&DAT_00732220 + (int)((longlong)g_SpaceshipVariant << 2)) + 0.5))
    ;
    local_1d0 = (longlong)iVar32;
    auVar57 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
    boot::g_SpaceSceneFrame =
         storeVectorElementWordIndexed
                   (auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60,0x34,0x95cd50);
    boot::g_SpaceSceneChunk = iVar32 / iVar31;
    loaders::ParseSpaceSceneChunk(boot::g_SpaceSceneChunk);
    g_cutsceneCameraFrame = boot::g_SpaceSceneFrame - (boot::g_SpaceSceneFrame / iVar31) * iVar31;
    if (DAT_00964598 == 0) {
      draw::FadeToBlack(4);
    }
    else {
      DAT_00964598 = 0;
    }
    boot::SceneScreenFade = 1.0;
  }
  else {
    boot::g_SpaceSceneFrame = (int)boot::g_SpaceSceneNumFrames._0_2_;
  }
LAB_00161ba8:
  if (boot::g_SpaceSceneFrame < boot::g_SpaceSceneNumFrames._0_2_) {
    if ((int)(((uint)((LZCOUNT(-g_IsPal) << 0x3a) >> 0x3f) & 0x10) + 0x50) <=
        (int)g_cutsceneCameraFrame) {
      boot::g_SpaceSceneChunk = boot::g_SpaceSceneChunk + 1;
      loaders::ParseSpaceSceneChunk(boot::g_SpaceSceneChunk);
    }
    pfVar20 = (float *)((int)boot::g_SpaceSceneCameraFrames + g_cutsceneCameraFrame * 0x20);
    ViewContext.xratio = pfVar20[7];
    cVar4 = *(char *)(pfVar20 + 3);
    draw::UpdateViewContext();
    GameCamera.posX = *pfVar20;
    GameCamera.posY = pfVar20[1];
    GameCamera.posZ = pfVar20[2];
    GameCamera.field8_0x14c = *(char (*) [4])(pfVar20 + 3);
    FUN_005e7d64(0x951500,0x951500,&g_SpaceshipPtr->transform);
    GameCamera.posX = GameCamera.posX + (g_SpaceshipPtr->pos).x;
    GameCamera.posY = GameCamera.posY + (g_SpaceshipPtr->pos).y;
    GameCamera.posZ = GameCamera.posZ + (g_SpaceshipPtr->pos).z;
    fastfunc::FastWrapRot(pfVar20[6],(g_SpaceshipPtr->rotation).z);
    libc::memcpy((void *)(uVar30 - 0x250),&DAT_00653758,0x40);
    FUN_005e8c64(uVar30 - 0x250,uVar30 - 0x280);
    GameCamera.orientMtx.forward.x = -local_230;
    GameCamera.orientMtx.right.x = -local_250;
    GameCamera.orientMtx.forward.y = -local_22c;
    GameCamera.orientMtx.right.y = -local_24c;
    GameCamera.orientMtx.forward.z = -local_228;
    GameCamera.orientMtx.up.x = local_240;
    GameCamera.orientMtx.right.z = -local_248;
    GameCamera.orientMtx.up.y = local_23c;
    GameCamera.orientMtx.up.z = local_238;
    if (Cheats[4] != '\0') {
      GameCamera.orientMtx.right.w = 0.0;
      GameCamera.orientMtx.right.x = -(local_22c * local_238) - -(local_228 * local_23c);
      GameCamera.orientMtx.right.y = -(local_228 * local_240) - -(local_230 * local_238);
      GameCamera.orientMtx.right.z = -(local_230 * local_23c) - -(local_22c * local_240);
    }
    iVar31 = 0;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      dVar46 = 1.0;
      auVar57 = loadVectorLeftIndexed(0x1c,0x1616c4);
      auVar68 = loadVectorLeftIndexed(0x14,0x1616c4);
      auVar57 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
      auStack_210 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      dVar47 = 360.5;
      auVar57 = loadVectorLeftIndexed(0x20,0x1616c4);
      local_1dc = 0.5;
      auVar57 = auVar57 >> 0x60 & (undefined1  [16])0xffffffff;
      auStack_200 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      local_1e0 = 62.5;
      local_1e4 = 350.5;
      dVar48 = 0.09817477315664291;
      local_1e8 = 524.5;
      dVar49 = 1.570796251296997;
      dVar50 = 3.141592502593994;
      dVar51 = -3.141592502593994;
      dVar52 = -0.16666656732559204;
      dVar53 = 0.008333025500178337;
      dVar54 = -0.0001980741071747616;
      dVar55 = 2.601886990305502e-06;
      dVar56 = 80.0;
      auVar69 = loadVectorLeftIndexed(0x4c,0x1616c4);
      auVar70 = loadVectorLeftIndexed(0x50,0x1616c4);
      auVar58 = loadVectorLeftIndexed(0x58,0x1616c4);
      local_1ec = 504.5;
      auVar60 = loadVectorLeftIndexed(0x5c,0x1616c4);
      dVar41 = 464.5;
      local_1f0 = 420.5;
      dVar45 = 0.02500000037252903;
      dVar42 = 240.5;
      dVar43 = 200.5;
      dVar44 = 300.5;
      auVar66 = loadVectorLeftIndexed(0x7c,0x1616c4);
      auVar67 = loadVectorLeftIndexed(0x80,0x1616c4);
      auVar75 = loadVectorLeftIndexed(0x84,0x1616c4);
      auVar71 = loadVectorLeftIndexed(0x88,0x1616c4);
      auVar72 = loadVectorLeftIndexed(0x8c,0x1616c4);
      auVar73 = loadVectorLeftIndexed(0x90,0x1616c4);
      auVar74 = loadVectorLeftIndexed(0x94,0x1616c4);
      auVar57 = auVar68 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar68 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar69 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar69 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar70 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar70 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar58 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar58 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar60 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar66 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar66 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar67 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar67 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar75 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar75 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar71 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar71 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar72 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar72 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar73 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar73 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar57 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      do {
        pMVar12 = (MobyInstance *)puVar19[0x5e];
        uVar30 = ZEXT48(pMVar12);
        cVar14 = (char)((int)g_cutsceneCameraFrame >> 1);
        pMVar12->previousAnimationFrame = cVar14;
        pMVar12->animationFrame = cVar14 + '\x01';
        mobyfunc::UpdateMobyFrameData(pMVar12);
        dVar35 = (double)fastfunc::FastIntToDouble(g_cutsceneCameraFrame & 1);
        dVar40 = (double)(float)(dVar35 * (double)local_1dc);
        pMVar12->animationBlend = (float)(dVar35 * (double)local_1dc);
        if ((cVar4 != '\0') && ((g_cutsceneCameraFrame & 1) != 0)) {
          pMVar12->animationBlend = 1.0;
          dVar40 = dVar46;
        }
        pMVar21 = g_SpaceshipPtr;
        fVar2 = (float)(dVar46 - dVar40);
        pfVar20 = (float *)((int)pMVar12->pVar + (uint)(byte)pMVar12->animationFrame * 0x10);
        pfVar23 = (float *)((int)pMVar12->pVar + (uint)(byte)pMVar12->previousAnimationFrame * 0x10)
        ;
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        fVar7 = pfVar20[2];
        fVar8 = *pfVar23;
        fVar9 = pfVar23[1];
        fVar10 = pfVar23[2];
        (pMVar12->pos).w = pfVar23[3];
        (pMVar12->pos).x = fVar8 * fVar2 + (float)((double)fVar5 * dVar40);
        (pMVar12->pos).y = fVar9 * fVar2 + (float)((double)fVar6 * dVar40);
        (pMVar12->pos).z = fVar10 * fVar2 + (float)((double)fVar7 * dVar40);
        FUN_005e7d64(uVar30 + 0x10,uVar30 + 0x10,&pMVar21->transform);
        pMVar21 = g_SpaceshipPtr;
        (pMVar12->pos).x = (pMVar12->pos).x + (g_SpaceshipPtr->pos).x;
        (pMVar12->pos).y = (pMVar12->pos).y + (pMVar21->pos).y;
        (pMVar12->pos).z = (pMVar12->pos).z + (pMVar21->pos).z;
        fVar11 = (pMVar21->rotation).z;
        pMVar12->field44_0x71 = -1;
        (pMVar12->rotation).z = fVar11;
        mobyfunc::UpdateMobyTransform(pMVar12);
        MVar29 = pMVar12->oClass;
        auVar74 = loadVectorLeftIndexed(0x34,0x95cd50);
        auVar59 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        dVar40 = (double)animationSpeed;
        if (MVar29 == RATCHET) {
          if (DAT_00964590 == 0) {
            if ((Level == Orxon) && (UnlockableItems.o2Mask == '\0')) {
              uVar27 = 0;
              auVar74 = ZEXT416(0);
              auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
            }
            else {
              auVar61 = ZEXT416(0xffffffff);
              auVar61 = auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60;
              auVar61 = vectorShiftLeftIntegerWord(auVar61,auVar61);
              auVar59 = vectorMultiplyAddFloatingPoint(auVar59,auVar68,auVar61);
              local_1d0 = (longlong)(int)(dVar40 * (double)local_1e0);
              auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
              auVar74 = vectorCompareGreaterThanSignedWord(auVar74,auVar59);
              auVar74 = vectorLogicalAndWithComplement(auVar75,auVar74);
              uVar27 = ((longlong)(int)(dVar40 * (double)local_1e0) -
                        (longlong)boot::g_SpaceSceneFrame >> 0x3f & 0xffffffffffffffe8U) + 0x18;
            }
            auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
          }
          else {
            uVar27 = 0x18;
            local_1d0 = (longlong)(int)(dVar40 * dVar47);
            if ((boot::g_SpaceSceneFrame <= (int)(dVar40 * dVar47)) ||
               ((auVar74 = auVar75, Level == Orxon && (UnlockableItems.o2Mask == '\0')))) {
              uVar27 = 0;
              auVar74 = ZEXT416(0);
              auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
            }
          }
          auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xff;
          cVar14 = storeVectorElementByteIndexed
                             (auVar74 | auVar74 << 8 | auVar74 << 0x10 | auVar74 << 0x18 |
                              auVar74 << 0x20 | auVar74 << 0x28 | auVar74 << 0x30 | auVar74 << 0x38
                              | auVar74 << 0x40 | auVar74 << 0x48 | auVar74 << 0x50 |
                              auVar74 << 0x58 | auVar74 << 0x60 | auVar74 << 0x68 | auVar74 << 0x70
                              | auVar74 << 0x78,0x7f,uVar30);
          pMVar12->shadow = cVar14;
        }
        else {
          uVar27 = (ulonglong)(byte)pMVar12->shadow;
          if (MVar29 == CLANK_000A) {
            auVar61 = ZEXT416(0xffffffff);
            auVar63 = auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60;
            auVar61 = ZEXT416(0xffffffff);
            auVar62 = auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60;
            lVar18 = (longlong)boot::g_SpaceSceneFrame;
            auVar61 = vectorShiftLeftIntegerWord(auVar63,auVar63);
            auVar63 = vectorShiftLeftIntegerWord(auVar62,auVar62);
            auVar61 = vectorMultiplyAddFloatingPoint(auVar59,auStack_210,auVar61);
            auVar59 = vectorMultiplyAddFloatingPoint(auVar59,auStack_200,auVar63);
            auVar62 = loadVectorLeftIndexed(0x20,0x964570);
            auVar63 = vectorConvertToSignedFixedPointWordSaturate(auVar61,0);
            local_1d0 = (longlong)(int)(dVar40 * (double)local_1e8);
            auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
            auVar61 = vectorCompareGreaterThanSignedWord(auVar74,auVar59);
            auVar59 = vectorCompareGreaterThanSignedWord(auVar74,auVar63);
            auVar61 = vectorLogicalAnd(auVar75,auVar61);
            auVar74 = ZEXT416(0);
            auVar59 = vectorLogicalAndWithComplement(auVar75,auVar59);
            auVar74 = vectorCompareEqualToUnsignedWord
                                (auVar62,auVar74 | auVar74 << 0x20 | auVar74 << 0x40 |
                                         auVar74 << 0x60);
            iVar32 = -DAT_00964590;
            auVar74 = vectorConditionalSelect(auVar61,auVar59,auVar74);
            uVar27 = (int)(dVar40 * (double)local_1e8) - lVar18 >> 0x3f & 0x18;
            auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xff;
            cVar14 = storeVectorElementByteIndexed
                               (auVar74 | auVar74 << 8 | auVar74 << 0x10 | auVar74 << 0x18 |
                                auVar74 << 0x20 | auVar74 << 0x28 | auVar74 << 0x30 |
                                auVar74 << 0x38 | auVar74 << 0x40 | auVar74 << 0x48 |
                                auVar74 << 0x50 | auVar74 << 0x58 | auVar74 << 0x60 |
                                auVar74 << 0x68 | auVar74 << 0x70 | auVar74 << 0x78,0x7f,uVar30);
            pMVar12->shadow = cVar14;
            uVar27 = uVar27 + ((LZCOUNT(iVar32) << 0x3a) >> 0x3f &
                              (((int)(dVar40 * (double)local_1e4) - lVar18 >> 0x3f &
                               0xffffffffffffffe8U) + 0x18) - uVar27);
          }
        }
        if ((uVar27 & 0xff) != 0) {
          mobyutil::MB_SetZBoundsFromFloorCeil(pMVar12);
          MVar29 = pMVar12->oClass;
        }
        if (MVar29 == CLANK_000A) {
          hero::____Hero_AddPulsingMobyGlow(uVar30);
          MVar29 = pMVar12->oClass;
        }
        if ((MVar29 == RATCHET) &&
           (((hero::Hero_UpdateInScene(uVar30), Level == Orxon && (UnlockableItems.o2Mask != '\0'))
            || (Level == Gemlik)))) {
          uVar27 = ZEXT48(DAT_00964578);
          if (DAT_00964578 == (MobyInstance *)0x0) {
            pMVar21 = mobyfunc::CreateMoby(O2_MASK);
            uVar27 = (ulonglong)(int)pMVar21;
            DAT_00964578 = pMVar21;
            pMVar21->drawDistance = 0x40;
            uVar33 = pMVar12->color;
            uVar16 = pMVar12->light;
            pMVar21->modeBits = pMVar21->modeBits | (DISABLE_Z_WRITE|NO_POST_UPDATE|NO_UPDATE);
            pMVar21->color = uVar33;
            pMVar21->light = uVar16;
          }
          hero::____Hero_SnapMobyToBonePose(uVar30,uVar27);
        }
        if ((short)pMVar12->oClass < 0x216 && 0x212 < (short)pMVar12->oClass) {
          draw::RegisterPostDraw(&PTR_Space_DrawShipEffects_00707cd8,pMVar12);
          RegisterFuncForMoby(&PTR_STUB_0015e2c0_00707c68,pMVar12);
          pMVar21 = g_SpaceshipPtr;
          if (DAT_00964590 == 0) {
            dVar40 = (double)animationSpeed;
            auVar74 = loadVectorLeftIndexed(0x34,0x95cd50);
            auVar59 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            local_1d0 = (longlong)(int)(dVar40 * dVar47);
            if (boot::g_SpaceSceneFrame < (int)(dVar40 * dVar47)) {
              dVar40 = (double)fastfunc::FastIntToDouble
                                         (((ulonglong)(uint)boot::g_SpaceSceneFrame & 0x3f) - 0x20);
              dVar35 = (double)(float)(dVar40 * dVar48 + dVar49);
              dVar40 = (double)(float)(dVar50 - dVar35);
              if (dVar35 - (double)(float)(dVar50 - dVar35) < 0.0) {
                dVar40 = dVar35;
              }
              dVar36 = (double)(float)(dVar51 - dVar35);
              if ((double)(float)(dVar51 - dVar35) - dVar40 < 0.0) {
                dVar36 = dVar40;
              }
              dVar40 = (double)(float)(dVar36 * dVar36);
              dVar39 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar36));
              dVar35 = (double)(float)(dVar40 * dVar39);
              uVar33 = (uint)((double)(float)((double)(float)(dVar40 * dVar35) * dVar55 +
                                             (double)(float)(dVar35 * dVar54 +
                                                            (double)(float)(dVar39 * dVar53 +
                                                                           (double)(float)((double)(
                                                  float)(dVar40 * dVar36) * dVar52 + dVar36)))) *
                             dVar56);
              local_1d0 = (longlong)(int)uVar33;
              uVar30 = (ulonglong)uVar33 + 0x78;
              uVar16 = (uint)((uVar30 & 0xffffff) << 8);
              uVar33 = (uint)uVar30 | uVar16;
              pMVar12->field60_0x90 =
                   uVar33 + ((uint)((LZCOUNT(0x215 - (uint)pMVar12->oClass) << 0x3a) >> 0x3f) &
                            ((int)(uint)uVar30 >> 1 | uVar16) - uVar33) |
                   (uint)((uVar30 & 0xffffffff) << 0x10);
            }
            else {
              local_1d0 = (longlong)(int)(dVar40 * (double)local_1ec);
              if (boot::g_SpaceSceneFrame < (int)(dVar40 * (double)local_1ec)) {
                auVar62 = vectorConvertFromSignedFixedPointWord(auVar74,0);
                auVar74 = ZEXT416(0xffffffff);
                auVar61 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                auVar74 = ZEXT416(0xffffffff);
                auVar63 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                auVar74 = ZEXT416(0xfffffff0);
                auVar61 = vectorShiftLeftIntegerWord(auVar61,auVar61);
                auVar64 = vectorShiftLeftIntegerWord(auVar63,auVar63);
                auVar63 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
                auVar61 = vectorMultiplyAddFloatingPoint(auVar63,auVar69,auVar61);
                auVar62 = vectorNegativeMultiplySubtractFloatingPoint(auVar59,auVar70,auVar62);
                auVar65 = loadVectorLeftIndexed(0xa6,uVar30);
                auVar62 = vectorMultiplyAddFloatingPoint(auVar61,auVar62,auVar64);
                auVar64 = loadVectorRightIndexed(0xb6,uVar30);
                auVar61 = ZEXT416(8);
                auVar74 = vectorShiftRightWord
                                    (auVar65 | auVar64,
                                     auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60);
                auVar64 = vectorCompareEqualToUnsignedWord(auVar74,auVar73);
                auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar62,0);
                local_1d0 = (longlong)(int)(dVar40 * (double)local_1f0);
                auVar62 = vectorCompareGreaterThanSignedWord(auVar74,auVar71);
                auVar74 = vectorConditionalSelect(auVar74,auVar71,auVar62);
                auVar61 = vectorShiftLeftIntegerWord
                                    (auVar74,auVar61 | auVar61 << 0x20 | auVar61 << 0x40 |
                                             auVar61 << 0x60);
                auVar62 = vectorShiftLeftIntegerWord(auVar74,auVar72);
                auVar74 = vectorConditionalSelect(auVar74 | auVar61,auVar61,auVar64);
                auVar74 = (auVar74 | auVar62) >> 0x60 & (undefined1  [16])0xffffffff;
                uVar15 = storeVectorElementWordIndexed
                                   (auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60,
                                    0x90,uVar30);
                *(undefined4 *)((uint)&pMVar12->field60_0x90 & 0xfffffffc) = uVar15;
                pMVar12 = g_SpaceshipPtr;
                auVar74 = loadVectorLeftIndexed(0x34,0x95cd50);
                if ((int)(dVar40 * (double)local_1f0) < boot::g_SpaceSceneFrame) {
                  auVar61 = vectorConvertFromSignedFixedPointWord(auVar74,0);
                  auVar74 = ZEXT416(0xffffffff);
                  auVar62 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                  auVar74 = ZEXT416(0xffffffff);
                  auVar64 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                  auVar74 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                  auVar62 = vectorShiftLeftIntegerWord(auVar64,auVar64);
                  auVar74 = vectorMultiplyAddFloatingPoint(auVar63,auVar58,auVar74);
                  auVar59 = vectorNegativeMultiplySubtractFloatingPoint(auVar59,auVar60,auVar61);
                  auVar74 = vectorMultiplyAddFloatingPoint(auVar74,auVar59,auVar62);
                  auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
                  auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xff;
                  cVar14 = storeVectorElementByteIndexed
                                     (auVar74 | auVar74 << 8 | auVar74 << 0x10 | auVar74 << 0x18 |
                                      auVar74 << 0x20 | auVar74 << 0x28 | auVar74 << 0x30 |
                                      auVar74 << 0x38 | auVar74 << 0x40 | auVar74 << 0x48 |
                                      auVar74 << 0x50 | auVar74 << 0x58 | auVar74 << 0x60 |
                                      auVar74 << 0x68 | auVar74 << 0x70 | auVar74 << 0x78,0xbc,
                                      ZEXT48(g_SpaceshipPtr));
                  g_SpaceshipPtr->setByGroup = cVar14;
                  pMVar12->uid = 0;
                  RegisterFuncForMoby(&PTR_Space_DrawShipEngineGlow_00707cb0,pMVar12);
                  dVar40 = (double)animationSpeed;
                }
                local_1d0 = (longlong)(int)(dVar40 * dVar41);
                if (((int)(dVar40 * dVar41) < boot::g_SpaceSceneFrame) &&
                   (DAT_0095cf14 = (float)((double)DAT_0095cf14 + dVar45),
                   dVar46 < (double)DAT_0095cf14)) {
                  DAT_0095cf14 = 1.0;
                }
              }
              else {
                DAT_0095cf14 = (float)((double)DAT_0095cf14 - dVar45);
                pMVar12->field60_0x90 = (uint)&DAT_00a0a0a0;
                if (DAT_0095cf14 < local_1d8) {
                  DAT_0095cf14 = 0.0;
                }
              }
            }
          }
          else {
            dVar40 = (double)animationSpeed;
            auVar74 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar59 = loadVectorLeftIndexed(0x34,0x95cd50);
            if (boot::g_SpaceSceneFrame < (int)(dVar40 * dVar42)) {
              local_1d0 = (longlong)(int)(dVar40 * dVar43);
              if (boot::g_SpaceSceneFrame < (int)(dVar40 * dVar43)) {
                Space_SpawnShipParticles();
                Space_SpawnShipParticles();
              }
              dVar40 = (double)fastfunc::FastIntToDouble
                                         (((ulonglong)(uint)boot::g_SpaceSceneFrame & 0x3f) - 0x20);
              dVar35 = (double)(float)(dVar40 * dVar48 + dVar49);
              dVar40 = (double)(float)(dVar50 - dVar35);
              if (dVar35 - (double)(float)(dVar50 - dVar35) < 0.0) {
                dVar40 = dVar35;
              }
              dVar36 = (double)(float)(dVar51 - dVar35);
              if ((double)(float)(dVar51 - dVar35) - dVar40 < 0.0) {
                dVar36 = dVar40;
              }
              dVar40 = (double)(float)(dVar36 * dVar36);
              dVar39 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar36));
              dVar35 = (double)(float)(dVar40 * dVar39);
              uVar33 = (uint)((double)(float)((double)(float)(dVar40 * dVar35) * dVar55 +
                                             (double)(float)(dVar35 * dVar54 +
                                                            (double)(float)(dVar39 * dVar53 +
                                                                           (double)(float)((double)(
                                                  float)(dVar40 * dVar36) * dVar52 + dVar36)))) *
                             dVar56);
              local_1d0 = (longlong)(int)uVar33;
              pMVar12->setByGroup = '2';
              uVar30 = (ulonglong)uVar33 + 0x78;
              pMVar12->uid = 10;
              uVar16 = (uint)((uVar30 & 0xffffff) << 8);
              uVar33 = (uint)uVar30 | uVar16;
              pMVar12->field60_0x90 =
                   uVar33 + ((uint)((LZCOUNT(0x215 - (uint)pMVar12->oClass) << 0x3a) >> 0x3f) &
                            ((int)(uint)uVar30 >> 1 | uVar16) - uVar33) |
                   (uint)((uVar30 & 0xffffffff) << 0x10);
              RegisterFuncForMoby(&PTR_Space_DrawShipEngineGlow_00707cb0,pMVar12);
            }
            else {
              local_1d0 = (longlong)(int)(dVar40 * dVar47);
              if ((int)(dVar40 * dVar47) < boot::g_SpaceSceneFrame) {
                dVar40 = (double)fastfunc::FastIntToDouble
                                           (((ulonglong)(uint)boot::g_SpaceSceneFrame & 0x3f) - 0x20
                                           );
                dVar35 = (double)(float)(dVar40 * dVar48 + dVar49);
                dVar40 = (double)(float)(dVar50 - dVar35);
                if (dVar35 - (double)(float)(dVar50 - dVar35) < 0.0) {
                  dVar40 = dVar35;
                }
                dVar36 = (double)(float)(dVar51 - dVar35);
                if ((double)(float)(dVar51 - dVar35) - dVar40 < 0.0) {
                  dVar36 = dVar40;
                }
                dVar40 = (double)(float)(dVar36 * dVar36);
                dVar39 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar36));
                dVar35 = (double)(float)(dVar40 * dVar39);
                uVar33 = (uint)((double)(float)((double)(float)(dVar40 * dVar35) * dVar55 +
                                               (double)(float)(dVar35 * dVar54 +
                                                              (double)(float)(dVar39 * dVar53 +
                                                                             (double)(float)((double
                                                  )(float)(dVar40 * dVar36) * dVar52 + dVar36)))) *
                               dVar56);
                local_1d0 = (longlong)(int)uVar33;
                uVar30 = (ulonglong)uVar33 + 0x78;
                uVar16 = (uint)((uVar30 & 0xffffff) << 8);
                uVar33 = (uint)uVar30 | uVar16;
                pMVar12->field60_0x90 =
                     uVar33 + ((uint)((LZCOUNT(0x215 - (uint)pMVar12->oClass) << 0x3a) >> 0x3f) &
                              ((int)(uint)uVar30 >> 1 | uVar16) - uVar33) |
                     (uint)((uVar30 & 0xffffffff) << 0x10);
              }
              else {
                local_1d0 = (longlong)(int)(dVar40 * dVar44);
                if (boot::g_SpaceSceneFrame < (int)(dVar40 * dVar44)) {
                  auVar61 = vectorConvertFromSignedFixedPointWord(auVar59,0);
                  auVar59 = ZEXT416(0xffffffff);
                  auVar63 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
                  auVar59 = ZEXT416(0xffffffff);
                  auVar62 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
                  auVar59 = vectorShiftLeftIntegerWord(auVar63,auVar63);
                  auVar63 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                  auVar62 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
                  auVar59 = vectorMultiplyAddFloatingPoint(auVar62,auVar66,auVar59);
                  auVar74 = vectorNegativeMultiplySubtractFloatingPoint(auVar74,auVar67,auVar61);
                  auVar74 = vectorMultiplyAddFloatingPoint(auVar59,auVar74 ^ auVar57,auVar63);
                  auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
                  auVar74 = auVar74 >> 0x60 & (undefined1  [16])0xff;
                  cVar14 = storeVectorElementByteIndexed
                                     (auVar74 | auVar74 << 8 | auVar74 << 0x10 | auVar74 << 0x18 |
                                      auVar74 << 0x20 | auVar74 << 0x28 | auVar74 << 0x30 |
                                      auVar74 << 0x38 | auVar74 << 0x40 | auVar74 << 0x48 |
                                      auVar74 << 0x50 | auVar74 << 0x58 | auVar74 << 0x60 |
                                      auVar74 << 0x68 | auVar74 << 0x70 | auVar74 << 0x78,0xbc,
                                      ZEXT48(g_SpaceshipPtr));
                  g_SpaceshipPtr->setByGroup = cVar14;
                  pMVar21->uid = 0;
                  RegisterFuncForMoby(&PTR_Space_DrawShipEngineGlow_00707cb0,pMVar21);
                  auVar74 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar59 = loadVectorLeftIndexed(0x34,0x95cd50);
                }
                auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar61 = auVar74 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar74 = ZEXT416(0xffffffff);
                auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                auVar59 = vectorConvertFromSignedFixedPointWord
                                    (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,0
                                    );
                auVar74 = vectorShiftLeftIntegerWord(auVar74,auVar74);
                auVar63 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
                auVar63 = vectorMultiplyAddFloatingPoint(auVar63,auVar69,auVar74);
                auVar74 = ZEXT416(0xffffffff);
                auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                auVar62 = loadVectorLeftIndexed(0xa6,uVar30);
                auVar59 = vectorNegativeMultiplySubtractFloatingPoint
                                    (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60,
                                     auVar70,auVar59);
                auVar61 = vectorShiftLeftIntegerWord(auVar74,auVar74);
                auVar74 = ZEXT416(0xfffffff0);
                auVar61 = vectorMultiplyAddFloatingPoint(auVar63,auVar59 ^ auVar57,auVar61);
                auVar63 = loadVectorRightIndexed(0xb6,uVar30);
                auVar59 = ZEXT416(8);
                auVar74 = vectorShiftRightWord
                                    (auVar62 | auVar63,
                                     auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60);
                auVar63 = vectorCompareEqualToUnsignedWord(auVar74,auVar73);
                auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar61,0);
                auVar59 = vectorShiftLeftIntegerWord
                                    (auVar74,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                             auVar59 << 0x60);
                auVar61 = vectorShiftLeftIntegerWord(auVar74,auVar72);
                auVar74 = vectorConditionalSelect(auVar74 | auVar59,auVar59,auVar63);
                auVar74 = (auVar74 | auVar61) >> 0x60 & (undefined1  [16])0xffffffff;
                uVar15 = storeVectorElementWordIndexed
                                   (auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60,
                                    0x90,uVar30);
                *(undefined4 *)((uint)&pMVar12->field60_0x90 & 0xfffffffc) = uVar15;
              }
            }
          }
        }
        iVar31 = iVar31 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar31 < boot::g_SpaceSceneMobyCnt._0_2_);
    }
    sound::sound_Update();
    lights::UpdatePointLights();
    mobyfunc::UpdateHeroLightAngle();
    update::UpdateGameCounters();
  }
  else {
    if (music::g_SpeechPlaying.status != 7 && music::g_SpeechPlaying.status != 6) {
      music::g_SpeechPlaying.status = 5;
    }
    vuchain::VU1_setBufSizeByLevel();
    ViewContext.xratio = 0.63;
    draw::UpdateViewContext();
    iVar31 = 0;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        pMVar12 = (MobyInstance *)puVar19[0x5e];
        if (pMVar12 != (MobyInstance *)0x0) {
          pMVar12->pClass->seq_cnt = pMVar12->pClass->seq_cnt + 0xff;
          *(undefined4 *)(&pMVar12->pClass->type + (uint)pMVar12->pClass->seq_cnt * 4) = 0;
          mobyfunc::DeleteMoby(pMVar12);
        }
        if (DAT_00964578 != (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby(DAT_00964578);
        }
        iVar31 = iVar31 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar31 < boot::g_SpaceSceneMobyCnt._0_2_);
    }
    pMVar12 = MobyInstancePermEnd;
    g_SpaceshipPtr->modeBits =
         g_SpaceshipPtr->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    uVar3 = pMVar12->state;
    while (uVar3 != 0xff) {
      if (((pMVar12->state & 0x80) == 0) &&
         ((pMVar12->oClass == MINE_004A || (pMVar12->oClass == DECOY)))) {
        pMVar12->modeBits =
             pMVar12->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      uVar3 = pMVar12[1].state;
      pMVar12 = pMVar12 + 1;
    }
    if (DAT_00964590 == 0) {
      pause::BeginMenu(0);
      g_MenuScreen = 0xe;
      g_CutscenePlaying = 1;
    }
    else {
      g_gameMode = GAME_MODE_NORMAL;
      music::music_Unpause();
      g_CutscenePlaying = 1;
      hero::g_heroInvisible = 0;
      hero::Hero_MakeVisible();
      if (g_spaceArrivalPending._0_2_ == 0) {
        hero::Hero_Warp(&g_heroSpawnPosition.x,&g_heroSpawnRot.x,0,1);
      }
      else {
        hero::SetPositionAfterMovie();
      }
    }
  }
  return;
}



//==== 001639a8  ns=space  size=0xf0
// sig: undefined DisplayLoadingScreen(void)
// callers(2): 000e0e60 main::startLevel; 00164c58 space::DoSpaceTransition
// callees(5): 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0006bb78 draw::DefaultDraw; 0006c494 draw::SetupDefaultDrawMovie; 0016114c space::TransitionDraw_Space

void space::DisplayLoadingScreen(void)

{
  if (g_CutscenePlaying != 0) {
    return;
  }
  if (DAT_00964590 < 4) {
    if (0 < DAT_00964590) {
      if (DAT_00964590 < 2) {
        return;
      }
      if (DAT_00964590 < 3) {
        return;
      }
LAB_00163a44:
      g_RenderFlags = 0x7f;
      draw::UpdateOcclusion(1);
      draw::DefaultDraw();
      draw::Render_DispatchJob();
      return;
    }
    if (DAT_00964590 < 0) {
      return;
    }
  }
  else {
    if (DAT_00964590 < 7) {
      if (4 < DAT_00964590) {
        return;
      }
      draw::UpdateOcclusion(0);
      TransitionDraw_Space();
      draw::Render_DispatchJob();
      return;
    }
    if (DAT_00964590 < 8) goto LAB_00163a44;
    if (8 < DAT_00964590) {
      return;
    }
  }
  draw::UpdateOcclusion(1);
  draw::SetupDefaultDrawMovie();
  draw::Render_DispatchJob();
  return;
}



//==== 00163aa0  ns=space  size=0x940
// sig: undefined SpaceTransition_LoadWad(void)
// callers(1): 00164c58 space::DoSpaceTransition
// callees(23): 000668d0 draw::UpdateViewContext; 00068160 draw::InitViewContext; 0006840c draw::ResetDrawGlobals; 0006dad0 draw::FadeToBlack; 000d89d0 initonce::InitMemSlots; 000db8d8 loaders::???_Loaders_RelocSpaceWadPtrs; 000dc0ec loaders::LoadMobyPClasses; 000e07f8 loaders::ParseSpaceSceneChunk; 00174c24 vuchain::VU1_initChain; 005001fc fastfunc::FastMemSet; 00500250 fastfunc::FastMemSetZero; 005002cc fastfunc::FastMemCopy; 00503078 stub::STUB_00503078; 00503128 stub::FUN_00503128_RET_0; 00503244 stub::FlushCache; 00503494 idol::m_LoadGameFileS; 00503e00 fios::LoadAssetFromFile; 00505b30 FUN_00505b30; 00505d20 stub::STUB_00505d20; 00505f48 stub::STUB_00505f48; 005c8318 rand; 005cd2a8 libc::snprintf; 0064f2a4 cell::cellGcmAddressToOffset
// strings: 006537a0: 'space_wad' | 006537b0: 'rc1/ps3data/global/space_wad.ps3' | 006537d8: 'rc1/ps3data/global/space_wad.vram' | 00653800: 'rc1/ps3data/global/space_wad/planet%d.ps3' | 00653830: 'rc1/ps3data/global/space_wad/language%d_%d.ps3' | 00653860: 'rc1/ps3data/global/space_wad/planet%d.vram' | 00653890: 'rc1/ps3data/global/space_wad/language%d_%d.vram' | 006538c0: 'rc1/ps3data/global/space_wad.bnk'

void space::SpaceTransition_LoadWad(void)

{
  uint uVar1;
  uint *puVar2;
  MobyInstance *pMVar3;
  uint *puVar4;
  int iVar6;
  longlong lVar5;
  MobyClass *pClass;
  int *piVar7;
  int random;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar17;
  ulonglong uVar16;
  int iVar18;
  char acStack_170 [272];
  
  DAT_00964590 = 4;
  DAT_00964594 = 0xffff;
  iVar15 = 0;
  boot::SceneScreenFade = 1.0;
  g_heroMobyPtr = (MobyInstance *)0x0;
  DAT_0095cf14 = 0;
  g_CutscenePlaying = 0;
  DAT_00e5aa64 = 0x100000;
  initonce::InitMemSlots();
  loaders::g_GsRamAlloc = GSmem.base;
  DAT_00966ad4 = GSmem.base;
  fastfunc::FastMemSet(&MobyClassRef,0xffffffff87654321,0x10);
  fastfunc::FastMemSet(&MobyClassLookup,0xffffffffffffffff,0x800);
  fastfunc::FastMemSet(&MobyTexLookup,0xffffffffffffffff,0xe00);
  fastfunc::FastMemSet(&MobyMipDists,0,0xe0);
  draw::InitViewContext();
  draw::UpdateViewContext();
  vuchain::VU1_initChain();
  idol::m_LoadGameFileS(DAT_00a108ec,"space_wad");
  iVar6 = fios::LoadAssetFromFile
                    ("rc1/ps3data/global/space_wad.ps3",DAT_00a10920,0xffffffffffffffff);
  random = fios::LoadAssetFromFile
                     ("rc1/ps3data/global/space_wad.vram",DAT_00a10924,0xffffffffffffffff);
  puVar2 = DAT_00a10920;
  uVar17 = DAT_00a10924 + random + 0x3fU & 0xffffffc0;
  uVar10 = (int)DAT_00a10920 + DAT_00a10920[7];
  DAT_00a10920[5] = uVar17;
  puVar2[7] = uVar10;
  puVar2[6] = uVar17 + 0x20000;
  draw::FadeToBlack((int)(animationSpeed * 12.5));
  stub::FUN_00503128_RET_0(0);
  puVar4 = DAT_00a10920;
  uVar14 = ZEXT48(DAT_00a10920);
  lVar5 = (longlong)g_Language;
  puVar2 = DAT_00a10920 + 4;
  iVar11 = g_Language + -1;
  random = -g_Language;
  uVar16 = uVar14 + DAT_00a10920[3] & 0xffffffff;
  iVar18 = DAT_00a10924 - *(int *)(g_viewMtxPtr + 0x4ac);
  uVar17 = (uint)(uVar14 + DAT_00a10920[3]);
  DAT_00a10920[3] = uVar17;
  DAT_00a561c8 = (ulonglong)*puVar2 + 1 & 0xffffffff;
  DAT_00a561d0 = (ulonglong)*puVar2 + 2 & 0xffffffff;
  lVar5 = (longlong)iVar11 + ((LZCOUNT(random) << 0x3a) >> 0x3f & lVar5 - iVar11);
  libc::snprintf(acStack_170,"rc1/ps3data/global/space_wad/planet%d.ps3",Level);
  fios::LoadAssetFromFile(acStack_170,uVar16 + DAT_00a561c8 * 0x24 & 0xffffffff,0x24);
  *(uint *)(uVar17 + (int)(DAT_00a561c8 << 5) + (int)(DAT_00a561c8 << 2)) =
       (puVar4[5] - DAT_00a10924) + iVar18;
  libc::snprintf(acStack_170,"rc1/ps3data/global/space_wad/language%d_%d.ps3",lVar5,Level);
  fios::LoadAssetFromFile(acStack_170,uVar16 + DAT_00a561d0 * 0x24 & 0xffffffff,0x24);
  *(uint *)(uVar17 + (int)(DAT_00a561d0 << 5) + (int)(DAT_00a561d0 << 2)) =
       (puVar4[6] - DAT_00a10924) + iVar18;
  libc::snprintf(acStack_170,"rc1/ps3data/global/space_wad/planet%d.vram",Level);
  fios::LoadAssetFromFile(acStack_170,puVar4[5],0x20000);
  libc::snprintf(acStack_170,"rc1/ps3data/global/space_wad/language%d_%d.vram",lVar5,Level);
  fios::LoadAssetFromFile(acStack_170,puVar4[6],0xffffffffffffffff);
  if (puVar4[4] != 0) {
    uVar17 = 0;
    do {
      uVar17 = uVar17 + 1;
      *(int *)uVar16 = *(int *)uVar16 + iVar18;
      uVar16 = uVar16 + 0x24;
    } while (uVar17 < puVar4[4]);
  }
  uVar16 = uVar14 + puVar4[2] & 0xffffffff;
  uVar17 = (uint)(uVar14 + puVar4[2]);
  puVar4[2] = uVar17;
  cell::cellGcmAddressToOffset(*(uint *)(uVar17 + 0x14) + uVar14 & 0xffffffff,uVar16 + 0x14);
  cell::cellGcmAddressToOffset(*(uint *)(uVar17 + 0x18) + uVar14 & 0xffffffff,uVar16 + 0x18);
  if (*(short *)(uVar17 + 6) != 0) {
    uVar10 = 0;
    lVar5 = uVar16 + 0x1c;
    do {
      uVar8 = *(uint *)((int)uVar16 + 0x1c) + uVar14;
      uVar9 = uVar8 & 0xffffffff;
      random = (int)uVar8;
      *(int *)((int)uVar16 + 0x1c) = random;
      if (*(short *)(random + 2) != 0) {
        uVar1 = puVar4[3];
        uVar12 = 0;
        random = *(int *)lVar5;
        do {
          uVar9 = uVar9 + 0x10;
          uVar12 = uVar12 + 1;
          *(int *)uVar9 = *(int *)uVar9 * 0x24 + uVar1;
        } while (uVar12 < *(ushort *)(random + 2));
      }
      uVar10 = uVar10 + 1;
      lVar5 = lVar5 + 4;
      uVar16 = uVar16 + 4;
    } while (uVar10 < *(ushort *)(uVar17 + 6));
  }
  oClass_to_mClass_lookup = 0;
  uVar16 = uVar14 + *puVar4 & 0xffffffff;
  if (puVar4[1] != 0) {
    uVar17 = 0;
    do {
      random = *(int *)uVar16;
      iVar11 = random + (int)puVar4;
      pClass = (MobyClass *)(iVar11 + ((uint)((LZCOUNT(-random) << 0x3a) >> 0x3f) & -iVar11));
      loaders::LoadMobyPClasses(pClass,(void *)0x0,(char *)0x0,((int *)uVar16)[1]);
      iVar11 = EffectTexHeaders;
      piVar7 = (int *)pClass->packets;
      piVar13 = (int *)piVar7[2];
      random = *piVar7;
      if (random != 0) {
        uVar10 = puVar4[3];
        do {
          random = random + -1;
          *piVar13 = ((*piVar13 - iVar11) / 0x24) * 0x24 + uVar10;
          piVar13 = piVar13 + 4;
        } while (0 < random);
      }
      random = piVar7[1];
      piVar7 = (int *)piVar7[3];
      if (random != 0) {
        do {
          random = random + -1;
          *piVar7 = puVar4[3] + ((*piVar7 - iVar11) / 0x24) * 0x24;
          piVar7 = piVar7 + 4;
        } while (0 < random);
      }
      uVar17 = uVar17 + 1;
      uVar16 = uVar16 + 0x20;
    } while (uVar17 < puVar4[1]);
  }
  loaders::____Loaders_RelocSpaceWadPtrs(uVar14 + puVar4[8] & 0xffffffff,0,0,0);
  pMVar3 = (MobyInstance *)((int)DAT_00a10920 + iVar6 + 0x3f & 0xffffffc0);
  Gameplay = pMVar3;
  fastfunc::FastMemSetZero(PointLights,0x100);
  fastfunc::FastMemSetZero(&PointLightData,0x180);
  fastfunc::FastMemSetZero(DirectionalLights,0x400);
  fastfunc::FastMemCopy(DirectionalLights,&DAT_00731c00,0x40);
  MobyInstance = pMVar3;
  fastfunc::FastMemSet(pMVar3,0,0x4000);
  DAT_00a390b0 = pMVar3 + 0x40;
  MobyInstancePermEnd = MobyInstance;
  MobyInstance->state = 0xff;
  PartInstances = pMVar3 + 0x60;
  MobyInstanceEnd = MobyInstance + 0x3f;
  PartIndexNext = 0;
  PartIndexTop = 0xffffffff;
  PartActiveCnt = 0;
  fastfunc::FastMemSetZero(&DAT_00a52000,0x200);
  draw::ResetDrawGlobals();
  DAT_00a390b8 = 500;
  PartClipDist = 0x1f4000;
  random = rand();
  g_currentLoadingScreen = random >> 0x10 & 3;
  g_loadingCount = 0;
  DAT_009645c0 = 0;
  g_LoadScreenRelated = 0;
  DAT_00a561e0 = DAT_00731f70;
  DAT_00a561e4 = DAT_00731f74;
  DAT_00a561e8 = DAT_00731f78;
  DAT_00a561ec = DAT_00731f7c;
  if ((Level == Veldin) || ((Level == Novalis && (g_SeenPlanets.Kerwan == '\0')))) {
    g_currentLoadingScreen = 4;
    g_loadingCount = 2;
  }
  fastfunc::FastMemSet(&DAT_0095cd50,0,0x1c0);
  fastfunc::FastMemSet(&DAT_00a1be80,0,0x40);
  fastfunc::FastMemSet(&DAT_00a1bec0,0,0x40);
  loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x60000;
  DAT_0095cda8 = loaders::g_NpcBuffer;
  piVar7 = &loaders::g_SceneChunkPtrs;
  uVar16 = uVar14 + puVar4[g_currentLoadingScreen + 10] & 0xffffffff;
  do {
    piVar13 = (int *)uVar16;
    if (piVar13[1] == 0) break;
    iVar15 = iVar15 + 1;
    uVar16 = uVar16 + 8;
    *piVar7 = (int)puVar4 + *piVar13;
    piVar7 = piVar7 + 1;
  } while (iVar15 < 0x46);
  loaders::ParseSpaceSceneChunk(0);
  DAT_0071f404 = -1;
  fios::LoadAssetFromFile("rc1/ps3data/global/space_wad.bnk",pMVar3 + 0x460,0xffffffffffffffff);
  FUN_00505b30(pMVar3 + 0x460,&PTR_sound_BasicCB_00707c38,&DAT_0071f404);
  do {
    stub::FlushCache(0);
    stub::STUB_00503078(0);
    stub::STUB_00505d20();
  } while (DAT_0071f404 == -1);
  stub::STUB_00505f48();
  return;
}



//==== 001643e0  ns=space  size=0x1e8
// sig: undefined PlaySpaceMovie(void)
// callers(1): 00164c58 space::DoSpaceTransition
// callees(17): 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0006dad0 draw::FadeToBlack; 0011e2d4 pad::UpdatePad; 004d4c88 FUN_004d4c88; 004d5448 FUN_004d5448; 004d5524 FUN_004d5524; 004d59e8 FUN_004d59e8; 004d5d5c FUN_004d5d5c; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 00503074 stub::sceGsSyncPath; 00503078 stub::STUB_00503078; 00503208 stub::STUB_00503208; 005cd2a8 libc::snprintf; 005e38b0 FUN_005e38b0; 0064f504 cell::cellSysutilCheckCallback
// strings: 006538e4: '/rc1/ps3data/movies/story[%d].bik'

void space::PlaySpaceMovie(undefined8 param_1)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  char acStack_f0 [64];
  undefined1 auStack_b0 [128];
  
  uVar6 = ZEXT48(boot::g_pBinkPlayer);
  DAT_009637cb = DAT_009637cb | 8;
  if (boot::g_pBinkPlayer == (void *)0x0) {
    uVar1 = FUN_005e38b0(0x60);
    uVar6 = 0;
    if ((int)uVar1 != 0) {
      FUN_004d5d5c(uVar1);
      uVar6 = uVar1;
    }
    boot::g_pBinkPlayer = (void *)uVar6;
  }
  iVar3 = libc::snprintf(acStack_f0,"/rc1/ps3data/movies/story[%d].bik",param_1);
  uVar2 = FUN_004ef34c(iVar3);
  FUN_004ef4d0(uVar2,acStack_f0,auStack_b0);
  FUN_004d5448(uVar6,auStack_b0,g_Language,0x400);
  iVar3 = 0;
  lVar5 = 0;
  while( true ) {
    pad::UpdatePad();
    lVar5 = ((LZCOUNT(-(g_buttonsPressedThisFrame & START)) << 0x3a) >> 0x3f & lVar5 - 1U) + 1;
    draw::UpdateOcclusion(0);
    iVar4 = FUN_004d5524(uVar6);
    cell::cellSysutilCheckCallback();
    if (1 < iVar4) {
      iVar3 = FUN_004d59e8(uVar6);
    }
    draw::Render_DispatchJob();
    if ((int)lVar5 != 0) break;
    if (iVar3 != 0) {
LAB_0016455c:
      stub::STUB_00503078(0);
      stub::sceGsSyncPath(0,0);
      stub::STUB_00503208(&PTR_____Unused_Respawn_IncCounter_a53504_00707950);
      draw::FadeToBlack(4);
      DAT_009637cb = DAT_009637cb | 0x10;
      return;
    }
  }
  FUN_004d4c88(uVar6);
  goto LAB_0016455c;
}



//==== 001645c8  ns=stub  size=0x4
// sig: undefined STUB_001645c8(void)
// callers(0): 
// callees(0): 

void stub::STUB_001645c8(void)

{
  return;
}



//==== 001645cc  ns=space  size=0x18c
// sig: undefined LoadSpacePlate(void)
// callers(1): 00164760 space::PlaySpacePlate
// callees(4): 00503128 stub::FUN_00503128_RET_0; 00503494 idol::m_LoadGameFileS; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 00653908: 'space_plates' | 00653918: '/rc1/ps3data/global/space_plates/plate%d.ps3' | 00653948: '/rc1/ps3data/global/space_plates/plate%d.vram'

void space::LoadSpacePlate
               (undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
               int *param_5,int *param_6)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  char acStack_c0 [128];
  
  idol::m_LoadGameFileS(DAT_00a108ec + 0x100000,"space_plates");
  libc::snprintf(acStack_c0,"/rc1/ps3data/global/space_plates/plate%d.ps3",param_1);
  lVar3 = fios::LoadAssetFromFile(acStack_c0,DAT_00a10920,0xffffffffffffffff);
  libc::snprintf(acStack_c0,"/rc1/ps3data/global/space_plates/plate%d.vram",param_1);
  fios::LoadAssetFromFile(acStack_c0,DAT_00a10924,0xffffffffffffffff);
  piVar2 = DAT_00a10920;
  lVar3 = lVar3 / 0x24;
  if (0 < (int)lVar3) {
    iVar1 = DAT_00a10924 - *(int *)(DAT_00902e9c + 0x4ac);
    piVar4 = DAT_00a10920;
    do {
      lVar3 = lVar3 + -1;
      *piVar4 = *piVar4 + iVar1;
      piVar4 = piVar4 + 9;
    } while (0 < (int)lVar3);
  }
  *param_4 = piVar2;
  *param_5 = (int)piVar2 + (int)(param_2 << 5) + (int)(param_2 << 2);
  *param_6 = (int)piVar2 + (int)(param_3 << 5) + (int)(param_3 << 2);
  stub::FUN_00503128_RET_0(0);
  return;
}



//==== 00164760  ns=space  size=0x4e8
// sig: undefined PlaySpacePlate(void)
// callers(1): 00164c58 space::DoSpaceTransition
// callees(19): 000684a0 stub::STUB_000684a0; 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0006889c draw::Sprite_DrawShape; 0006dad0 draw::FadeToBlack; 000def78 loaders::LoadLevelFiles; 000e6598 map::FlowState_Update; 000e76cc memcard::memcard_Update; 001645cc space::LoadSpacePlate; 00174c24 vuchain::VU1_initChain; 00174c88 vuchain::VU1_swapChain; 00174cf0 stub::STUB_00174cf0; 00174cf4 stub::STUB_00174cf4; 00174f80 vuchain::SetGSReg; 004d04d0 stub::STUB_004d04d0; 00502730 fastfunc::FastIntToDouble; 00502f08 FUN_00502f08; 00502f74 stub::FUN_00502f74_RET_0; 00503078 stub::STUB_00503078

void space::PlaySpacePlate(undefined8 param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [24];
  
  LoadSpacePlate(param_1,param_2 + 1,param_3 + 1,local_90,local_8c,local_88);
  if (param_5 != 0) {
    stub::STUB_004d04d0(Level);
    g_LoadingStage = 0;
    DAT_00964562 = 0;
  }
  stub::STUB_00503078(0);
  vuchain::VU1_initChain();
  lVar3 = 0;
  if (0 < (int)param_4) {
    dVar5 = 0.0016666667070239782;
    dVar6 = 0.4000000059604645;
    do {
      draw::UpdateOcclusion(0);
      uVar1 = stub::FUN_00502f74_RET_0(0,0,0,0x80,0);
      vuchain::SetGSReg(0x15,uVar1);
      uVar1 = FUN_00502f08(0,0,0,0,0,0);
      vuchain::SetGSReg(6,uVar1);
      dVar4 = (double)fastfunc::FastIntToDouble((int)lVar3 % 600);
      dVar4 = dVar4 * dVar5;
      if (param_2 + 1 == param_3 + 1) {
        draw::Sprite_DrawShape
                  (0,(draw::g_ScreenHalfHeight >> 1) +
                     (uint)(draw::g_ScreenHalfHeight < 0 && (draw::g_ScreenHalfHeight & 1U) != 0) +
                     -0x20,0x200,0x40,0,4,(int)dVar4,(int)((double)(float)dVar4 + dVar6));
        draw::Sprite_DrawShape
                  (0,(draw::g_ScreenHalfHeight >> 1) +
                     (uint)(draw::g_ScreenHalfHeight < 0 && (draw::g_ScreenHalfHeight & 1U) != 0) +
                     -0x20,0x200,0x40,0,0,0x200,0x40);
      }
      else {
        iVar2 = (int)((double)(float)dVar4 + dVar6);
        draw::Sprite_DrawShape
                  (0,(draw::g_ScreenHalfHeight >> 1) +
                     (uint)(draw::g_ScreenHalfHeight < 0 && (draw::g_ScreenHalfHeight & 1U) != 0) +
                     -0x2e,0x200,0x40,0,4,(int)dVar4,iVar2);
        draw::Sprite_DrawShape
                  (0,(draw::g_ScreenHalfHeight >> 1) +
                     (uint)(draw::g_ScreenHalfHeight < 0 && (draw::g_ScreenHalfHeight & 1U) != 0) +
                     -0x2e,0x200,0x40,0,0,0x200,0x40);
        if (0x40 < (int)lVar3) {
          draw::Sprite_DrawShape
                    (0,(draw::g_ScreenHalfHeight >> 1) +
                       (uint)(draw::g_ScreenHalfHeight < 0 && (draw::g_ScreenHalfHeight & 1U) != 0),
                     0x200,0x40,0,4,(int)dVar4,iVar2);
          draw::Sprite_DrawShape
                    (0,(draw::g_ScreenHalfHeight >> 1) +
                       (uint)(draw::g_ScreenHalfHeight < 0 && (draw::g_ScreenHalfHeight & 1U) != 0),
                     0x200,0x40,0,0,0x200,0x40);
        }
      }
      memcard::memcard_Update();
      map::FlowState_Update();
      stub::STUB_00174cf4(1);
      stub::STUB_00503078(0);
      stub::STUB_000684a0();
      stub::STUB_00174cf0();
      vuchain::VU1_swapChain();
      if (param_5 != 0) {
        iVar2 = loaders::LoadLevelFiles();
        if (iVar2 == 0) {
          param_4 = param_4 + ((longlong)(int)param_4 - (longlong)(int)(lVar3 + 0x14) >> 0x3f &
                              (lVar3 + 0x14) - param_4);
        }
        else {
          param_5 = 0;
        }
      }
      draw::Render_DispatchJob();
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < (int)param_4);
  }
  draw::FadeToBlack(2);
  return;
}



//==== 00164c58  ns=space  size=0x930
// sig: undefined DoSpaceTransition(void)
// callers(2): 00012ec8 boot::GameStart; 000e0e60 main::startLevel
// callees(35): 0006dad0 draw::FadeToBlack; 000780f4 stub::STUB_000780f4; 000780fc stub::STUB_000780fc; 00078104 stub::STUB_00078104; 00078134 stub::STUB_00078134; 000def38 stub::STUB_000def38_RET_1; 000def78 loaders::LoadLevelFiles; 000e6598 map::FlowState_Update; 000e76cc memcard::memcard_Update; 000e886c memcard::memcard_IsSaveSystemIdle; 0011cd1c music::music_Stop; 0011e2d4 pad::UpdatePad; 0013fa18 pause::SetFrameCount; 0015d8b4 sound::sound_StopAllSounds; 00161788 space::UpdateSpace; 001639a8 space::DisplayLoadingScreen; 00163aa0 space::SpaceTransition_LoadWad; 001643e0 space::PlaySpaceMovie; 00164760 space::PlaySpacePlate; 00174c88 vuchain::VU1_swapChain; 00174cf0 stub::STUB_00174cf0; 00174cf4 stub::STUB_00174cf4; 001754e0 stub::STUB_001754e0; 004d04d0 stub::STUB_004d04d0; 00503078 stub::STUB_00503078; 00503128 stub::FUN_00503128_RET_0; 00503244 stub::FlushCache; 00505d20 stub::STUB_00505d20; 00505f48 stub::STUB_00505f48; 00505f4c stub::STUB_00505f4c; 00506074 stub::STUB_00506074; 00506664 FUN_00506664; 005066bc stub::STUB_005066bc_RET_0; 005cd098 libc::printf; 0060a9b4 989snd::snd_UnloadBank
// strings: 0065397f: '9unloaded sound bank %#010x\n'

void space::DoSpaceTransition(void)

{
  bool bVar1;
  LevelId LVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = 5;
  if (!g_JapaneseMode) {
    lVar4 = (longlong)(g_Language + -1);
    lVar4 = lVar4 + (lVar4 >> 0x3f & -lVar4);
  }
  g_gameMode = GAME_MODE_SPACE;
  CollOutput.collCount = CollOutput.collCount | 0x80000000;
  g_SpaceshipVariant = 0;
  if ((g_SeenPlanets.Batalia != 0) || (7 < (int)g_newlevelnum)) {
    g_SpaceshipVariant = 1;
  }
  if ((g_SeenPlanets.Oltanis != 0) || (0xd < (int)g_newlevelnum)) {
    g_SpaceshipVariant = 2;
  }
  stub::FlushCache(0);
  stub::STUB_00506074(0,5,0,0,0);
  stub::STUB_00505f4c();
  stub::STUB_00505d20();
  sound::sound_StopAllSounds();
  music::music_Stop();
  g_FinishedLoading = 1;
  if (sound::g_pSoundDefs != 0) {
    989snd::snd_UnloadBank(*(undefined4 *)(sound::g_pSoundDefs + 0x1c),1);
    stub::STUB_00505f48();
    libc::printf("unloaded sound bank %#010x\n",*(undefined4 *)(sound::g_pSoundDefs + 0x1c));
  }
  DAT_0071f404 = 0;
  FUN_00506664(0);
  stub::STUB_005066bc_RET_0(0);
  ViewContext.fogR = 0;
  ViewContext.fogG = 0;
  ViewContext.fogB = 0x10;
  ViewContext.fogNearDist = 0.0;
  ViewContext.fogFarDist = 524288.0;
  ViewContext.fogNearIntensity = 255.0;
  ViewContext.fogFarIntensity = 128.0;
  stub::STUB_000780f4(0,0,0);
  dVar5 = (double)animationSpeed;
  if ((int)g_newlevelnum < 0) {
    while (iVar3 = memcard::memcard_IsSaveSystemIdle(), iVar3 == 0) {
      memcard::memcard_Update();
      map::FlowState_Update();
    }
    draw::FadeToBlack((int)(animationSpeed * 6.5));
    Level = g_newlevelnum;
    stub::STUB_000def38_RET_1();
    stub::FUN_00503128_RET_0(0);
    g_FinishedLoading = 0;
    stub::STUB_001754e0();
    return;
  }
  dVar7 = 240.5;
  if ((g_newlevelnum == Veldin) && (VisitedPlanets.Veldin == '\0')) {
    draw::FadeToBlack((int)(dVar5 * 6.5));
    PlaySpacePlate(lVar4,0,1,(int)((double)animationSpeed * dVar7),0);
    PlaySpaceMovie(0);
    PlaySpacePlate(lVar4,2,2,(int)(animationSpeed * 180.5),0);
    PlaySpaceMovie(1);
    Level = g_newlevelnum;
    PlaySpacePlate(lVar4,3,4,(int)((double)animationSpeed * dVar7),1);
    PlaySpaceMovie(2);
  }
  else if ((Level == Veldin) && ((g_newlevelnum == Novalis && (VisitedPlanets.Novalis == '\0')))) {
    draw::FadeToBlack((int)(dVar5 * 6.5));
    PlaySpacePlate(lVar4,5,6,(int)((double)animationSpeed * dVar7),0);
    PlaySpaceMovie(3);
    PlaySpaceMovie(4);
    PlaySpacePlate(lVar4,7,7,(int)(animationSpeed * 180.5),0);
    PlaySpaceMovie(5);
    LVar2 = Level;
    dVar5 = (double)animationSpeed;
    Level = g_newlevelnum;
    (&VisitedPlanets.Veldin)[LVar2] = '\x02';
    PlaySpacePlate(lVar4,8,8,(int)(dVar5 * dVar7),1);
  }
  else {
    dVar6 = 12.5;
    if ((g_newlevelnum == Eudora) && (VisitedPlanets.Eudora == '\0')) {
      draw::FadeToBlack((int)(dVar5 * 12.5));
      PlaySpacePlate(lVar4,9,10,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(6);
      dVar5 = (double)animationSpeed;
    }
    if (((Level == Umbris) && (VisitedPlanets.Umbris != 2)) && (g_SeenPlanets.Batalia != 0)) {
      draw::FadeToBlack((int)(dVar5 * dVar6));
      PlaySpacePlate(lVar4,0xb,0xb,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(7);
      dVar5 = (double)animationSpeed;
    }
    if ((g_newlevelnum == Gemlik) && (VisitedPlanets.Gemlik == 0)) {
      draw::FadeToBlack((int)(dVar5 * dVar6));
      PlaySpacePlate(lVar4,0xc,0xd,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(8);
      dVar5 = (double)animationSpeed;
    }
    if (((Level == Oltanis) && (VisitedPlanets.Oltanis != 2)) && (g_SeenPlanets.Quartu != 0)) {
      draw::FadeToBlack((int)(dVar5 * dVar6));
      PlaySpacePlate(lVar4,0xe,0xe,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(9);
      dVar5 = (double)animationSpeed;
    }
    if ((g_newlevelnum == Kalebo) && (VisitedPlanets.Kalebo == 0)) {
      draw::FadeToBlack((int)(dVar5 * dVar6));
      PlaySpacePlate(lVar4,0xf,0x10,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(10);
    }
    LVar2 = g_newlevelnum;
    if (Level < (Veldin2|Novalis)) {
      bVar1 = true;
      if ((Level == Umbris) && (bVar1 = true, g_SeenPlanets.Batalia == 0)) {
        bVar1 = false;
      }
      if (((Level != Oltanis) || (g_SeenPlanets.Quartu != 0)) && (bVar1)) {
        (&VisitedPlanets.Veldin)[Level] = '\x02';
      }
    }
    g_LoadingStage = 0;
    DAT_00964562 = 1;
    Level = LVar2;
    SpaceTransition_LoadWad();
    stub::STUB_004d04d0(Level);
    if (g_CutscenePlaying == 0) {
      iVar3 = 0;
      do {
        stub::STUB_00174cf0();
        vuchain::VU1_swapChain();
        stub::STUB_00078104();
        stub::STUB_00078134();
        stub::STUB_000780fc();
        pad::UpdatePad();
        UpdateSpace();
        DisplayLoadingScreen();
        memcard::memcard_Update();
        map::FlowState_Update();
        stub::STUB_00174cf4(1);
        stub::STUB_00503078(0);
        DAT_0159c330 = DAT_0159c330 + 1;
        pause::SetFrameCount();
        if (iVar3 == 0) {
          iVar3 = loaders::LoadLevelFiles();
        }
      } while (g_CutscenePlaying == 0);
      if (iVar3 != 0) goto LAB_00165540;
    }
    do {
      stub::FlushCache(0);
      stub::STUB_00503078(0);
      memcard::memcard_Update();
      map::FlowState_Update();
      pause::SetFrameCount();
      iVar3 = loaders::LoadLevelFiles();
    } while (iVar3 == 0);
  }
LAB_00165540:
  stub::FUN_00503128_RET_0(0);
  g_FinishedLoading = 0;
  stub::STUB_001754e0();
  return;
}



//==== 00165588  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_UNKNOWN(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_UNKNOWN(void)

{
  DAT_00734adc = 0x10000;
  return;
}



//==== 001655a0  ns=stub  size=0x4
// sig: undefined STUB_001655a0(void)
// callers(2): 00012048 boot::PrepareFrontbin; 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_001655a0(void)

{
  return;
}



//==== 001655a4  ns=map  size=0x70
// sig: undefined InitIndexedBuffers(void)
// callers(2): 00012048 boot::PrepareFrontbin; 000e0e60 main::startLevel
// callees(0): 

void map::InitIndexedBuffers(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  DAT_00a56eb0 = &DAT_00a572c4;
  DAT_00a56eb4 = 0x400000;
  puVar2 = &g_IndexedBufferSlots;
  DAT_00a56ebc = &DAT_00a572c4;
  puVar1 = &DAT_00a56ec8;
  lVar3 = 0x10;
  DAT_00a56ec0 = 0;
  do {
    *puVar2 = 0;
    *puVar1 = 0;
    puVar2[4] = 0;
    puVar1[4] = 0;
    puVar2[8] = 0;
    puVar1[8] = 0;
    puVar2[0xc] = 0;
    puVar1[0xc] = 0;
    puVar2 = puVar2 + 0x10;
    puVar1 = puVar1 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



//==== 00165614  ns=map  size=0xf8
// sig: undefined AllocIndexedBuffer(void)
// callers(0): 
// callees(1): 005031bc FUN_005031bc

int map::AllocIndexedBuffer
              (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [24];
  
  if (DAT_00a56eb4 - (DAT_00a56ebc - DAT_00a56eb0) < (int)(param_3 << 4)) {
    iVar3 = -1;
  }
  else if (DAT_00a56ec0 == 0x40) {
    iVar3 = -2;
  }
  else {
    FUN_005031bc(local_30,1);
    iVar3 = DAT_00a56ec0;
    iVar1 = DAT_00a56ec0 * 0x10;
    iVar2 = DAT_00a56ec0 * 4;
    DAT_00a56ec0 = DAT_00a56ec0 + 1;
    (&g_IndexedBufferSlots)[iVar2] = DAT_00a56ebc;
    (&DAT_00a56ec8)[iVar3 * 4] = (int)param_3;
    *(undefined4 *)(&DAT_00a56ecc + iVar1) = param_4;
    DAT_00a56ebc = DAT_00a56ebc + (int)((param_3 & 0xffffffff) << 4);
  }
  return iVar3;
}



//==== 0016570c  ns=map  size=0xc0
// sig: undefined WriteIndexedBuffer(void)
// callers(0): 
// callees(1): 005031bc FUN_005031bc

undefined8 map::WriteIndexedBuffer(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_20 [24];
  
  if (((int)param_2 < 0) || (0x3f < (int)param_2)) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = *(int *)((int)&DAT_00a56ec8 + (int)(param_2 << 4));
    if (iVar1 == 0) {
      uVar2 = 0xfffffffffffffffd;
    }
    else if (iVar1 < param_4 + param_3) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      FUN_005031bc(local_20,1);
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== 001657cc  ns=map  size=0x34
// sig: undefined GetIndexedBufferSize(void)
// callers(0): 
// callees(0): 

undefined4 map::GetIndexedBufferSize(longlong param_1)

{
  undefined4 uVar1;
  
  if (((int)param_1 < 0) || (0x3f < (int)param_1)) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar1 = *(undefined4 *)((int)&DAT_00a56ec8 + (int)(param_1 << 4));
  }
  return uVar1;
}



//==== 00165800  ns=map  size=0xd4
// sig: undefined ReadIndexedBuffer(void)
// callers(2): 000e1f28 map::Map_OnPauseMenuOpen; 00142e38 pause::MapPage_Update
// callees(1): 005c5ad0 libc::memcpy

undefined8 map::ReadIndexedBuffer(void *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  if (param_4 == -1) {
    if ((iVar3 < 0) || (0x3f < iVar3)) {
      param_4 = -3;
    }
    else {
      param_4 = *(int *)((int)&DAT_00a56ec8 + (int)(param_2 << 4));
    }
  }
  if ((iVar3 < 0) || (0x3f < iVar3)) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = (int)(param_2 << 4);
    iVar3 = *(int *)((int)&DAT_00a56ec8 + iVar1);
    if (iVar3 == 0) {
      uVar2 = 0xfffffffffffffffd;
    }
    else if (iVar3 < param_3 + param_4) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      libc::memcpy(param_1,(void *)(*(int *)((int)&g_IndexedBufferSlots + iVar1) + param_3 * 0x10),
                   param_4 << 4);
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== 001658d4  ns=stub  size=0x4
// sig: undefined STUB_001658d4(void)
// callers(0): 
// callees(0): 

void stub::STUB_001658d4(void)

{
  return;
}



//==== 001658d8  ns=draw  size=0x10c4
// sig: undefined InitGsRegPresets_1658d8(void)
// callers(0): 
// callees(22): 00502e48 FUN_00502e48; 00502e70 FUN_00502e70; 00502e98 FUN_00502e98; 00502ea0 FUN_00502ea0; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f74 stub::FUN_00502f74_RET_0; 00502fbc stub::STUB_00502fbc_RET_0; 00502fd4 stub::STUB_00502fd4_RET_0; 00502fec FUN_00502fec; 0050300c FUN_0050300c; 005030ac FUN_005030ac; 005030b4 FUN_005030b4; 005030bc FUN_005030bc; 005030c4 FUN_005030c4; 005030cc FUN_005030cc; 005030d4 FUN_005030d4; 005030dc FUN_005030dc; 005030ec FUN_005030ec; 005030f4 FUN_005030f4; 005030fc FUN_005030fc; 00503104 FUN_00503104

void draw::InitGsRegPresets_1658d8(void)

{
  DAT_007386a0 = 0x10000;
  DAT_007359e0 = FUN_00502ea0(6,1,0,0,1,10);
  DAT_007359f0 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_007359f8 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735a00 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a08 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735a10 = FUN_00502e48(0);
  DAT_00735a18 = FUN_00502fec(0,0,0);
  DAT_00735a20 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a28 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735a30 = FUN_00502e48(1);
  DAT_00735a38 = FUN_00502fec(0,0,0);
  DAT_00735a40 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735a48 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735a50 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a58 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735a60 = FUN_00502e48(0);
  DAT_00735a68 = FUN_00502fec(0,0,0);
  DAT_00735a70 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735a78 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735a80 = FUN_00502e48(1);
  DAT_00735a88 = FUN_00502fec(0,0,0);
  DAT_00735a90 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735a98 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735aa0 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735aa8 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735ab0 = FUN_00502e48(0);
  DAT_00735ab8 = FUN_00502fec(0,0,0);
  DAT_00735ac0 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735ac8 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735ad0 = FUN_00502e48(1);
  DAT_00735ad8 = FUN_00502fec(0,0,0);
  DAT_00735ae0 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735ae8 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735af0 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735af8 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735b00 = FUN_00502e48(0);
  DAT_00735b08 = FUN_00502fec(0,0,0);
  DAT_00735b10 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b18 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735b20 = FUN_00502e48(1);
  DAT_00735b28 = FUN_00502fec(0,0,0);
  DAT_00735b30 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735b38 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735b40 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b48 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735b50 = FUN_00502e48(0);
  DAT_00735b58 = FUN_00502fec(0,0,0);
  DAT_00735b60 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b68 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735b70 = FUN_00502e48(1);
  DAT_00735b78 = FUN_00502fec(0,0,0);
  DAT_00735b80 = FUN_00502e70(0x29,0,0,0,0,0,1,0);
  DAT_00735b88 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735b90 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735b98 = FUN_00502f08(0,0,0,0,0,0);
  DAT_00735ba0 = FUN_00502e48(0);
  DAT_00735ba8 = FUN_00502fec(0,0,0);
  DAT_00735bb0 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x80,0);
  DAT_00735bb8 = FUN_00502f08(1,1,0,0,0,0);
  DAT_00735bc0 = FUN_00502e48(1);
  DAT_00735bc8 = FUN_00502fec(0,0,0);
  DAT_00735ec8 = FUN_005030f4(0,0);
  DAT_00735ecc = FUN_00503104(0x3c6,9,0xc,0);
  DAT_00735ed8 = FUN_005030cc(8,0);
  DAT_00735eec = FUN_005030fc(0);
  DAT_00735f00 = FUN_005030ac(0,0);
  DAT_00735f04 = FUN_005030d4(0x2c,0);
  DAT_00735f08 = FUN_005030f4(0,0);
  DAT_00735f0c = FUN_00502e98(4,4,0);
  DAT_00735f18 = FUN_005030b4(0);
  DAT_00735f2c = FUN_0050300c(2,0);
  DAT_00735f58 = FUN_005030f4(0,0);
  DAT_00735f5c = FUN_00503104(0x3c6,10,0xc,0);
  DAT_00735f68 = FUN_005030cc(8,0);
  DAT_00735f7c = FUN_005030fc(0);
  DAT_00735f90 = FUN_005030ac(0,0);
  DAT_00735f94 = FUN_005030d4(0x2c,0);
  DAT_00735f98 = FUN_005030f4(0,0);
  DAT_00735f9c = FUN_00502e98(4,4,0);
  DAT_00735fa8 = FUN_005030b4(0);
  DAT_0073608c = FUN_0050300c(2,0);
  DAT_007360bc = FUN_0050300c(2,0);
  DAT_007360ec = FUN_0050300c(2,0);
  DAT_0073611c = FUN_0050300c(3,0);
  DAT_00736198 = FUN_00502e98(4,4,0);
  DAT_0073619c = FUN_00503104(0x123,6,0xc,0);
  DAT_007361a8 = FUN_00502e98(4,4,0);
  DAT_007361ac = FUN_00503104(0x287,6,0xc,0);
  DAT_00736318 = FUN_00502e98(4,4,0);
  DAT_00736328 = FUN_00502e98(4,4,0);
  DAT_00736510 = FUN_00502ea0(1,1,0,0,1,2);
  DAT_00736520 = FUN_00502ea0(2,1,0,0,1,1);
  DAT_00736530 = FUN_00502ea0(1,1,0,0,1,0xb);
  DAT_00736540 = FUN_00502ea0(1,1,0,0,1,0xb);
  DAT_00736550 = FUN_00502ea0(1,1,0,0,1,0xd);
  DAT_00736560 = FUN_00502ea0(1,1,0,0,1,4);
  DAT_00736570 = FUN_00502ea0(1,1,0,0,1,4);
  DAT_00736580 = FUN_00502ea0(1,1,0,0,1,5);
  DAT_00736590 = FUN_00502ea0(1,1,0,0,1,6);
  DAT_007365a0 = FUN_00502ea0(1,1,0,0,1,7);
  DAT_007365b0 = FUN_00502ea0(1,1,0,0,1,6);
  DAT_007365c0 = FUN_00502ea0(1,0,0,0,1,0xf);
  DAT_007365d0 = FUN_00502ea0(1,1,0,0,1,0xf);
  DAT_007365e0 = FUN_00502ea0(1,1,0,0,0,1);
  DAT_007365f0 = FUN_00502ea0(1,1,0,0,0,2);
  DAT_00736600 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0);
  DAT_00736610 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_00736620 = FUN_00502ea0(1,0,0,0,0,2);
  DAT_00736630 = FUN_00502ea0(1,1,0,0,1,10);
  DAT_00736640 = FUN_00502ea0(1,1,0,0,1,2);
  DAT_00736650 = FUN_00502ea0(1,1,0,0,1,10);
  DAT_00736660 = FUN_00502ea0(1,1,1,0x7c,0,0xc);
  DAT_0073667c = FUN_0050300c(2,0);
  DAT_007366d0 = stub::STUB_00502fbc_RET_0(0,1,0x13,4,4,1,0,0);
  DAT_00736738 = FUN_005030f4(0,0);
  DAT_0073673c = FUN_00503104(0,1,0xc,0);
  DAT_00736748 = FUN_005030bc(4,0);
  DAT_0073674c = FUN_00503104(0x4000,0,0xe,0);
  DAT_0073675c = FUN_00503104(0x32,0,0xd,0);
  DAT_00736768 = FUN_005030f4(0,0);
  DAT_0073676c = FUN_00503104(0x40cc,0,0xe,0);
  DAT_0073677c = FUN_00503104(0x80c6,6,0xc,0);
  DAT_00736788 = FUN_005030f4(1,0);
  DAT_0073678c = FUN_00503104(0x4346,0x40,0xe,0);
  DAT_00736798 = FUN_005030f4(0,0);
  DAT_0073679c = FUN_005030bc(0,0);
  DAT_007367ac = FUN_00503104(0x1e,0,0xe,0);
  DAT_007367bc = FUN_005030fc(0);
  DAT_0073684c = FUN_0050300c(4,0);
  DAT_0073686c = FUN_0050300c(0xd,0);
  DAT_00736870 = FUN_00502ea0(1,1,1,0x7c,0,0xc);
  DAT_00736888 = FUN_00502e98(4,4,0);
  DAT_0073688c = FUN_00503104(0,4,0xc,0);
  DAT_0073689c = FUN_005030c4(10,0);
  DAT_00737c48 = FUN_00502e98(4,4,0);
  DAT_00737c74 = FUN_005030dc(0);
  DAT_00737c88 = FUN_00502e98(1,3,0);
  DAT_00737ca0 = FUN_005030ec(0);
  DAT_00737ce0 = FUN_005030ec(0);
  return;
}



//==== 0016699c  ns=draw  size=0x13c
// sig: undefined DrawTies_CheckTexOverflow(void)
// callers(1): 00166b70 draw::DrawTies
// callees(3): 00166e20 stub::STUB_00166e20_RET_0; 001754c0 stub::STUB_001754c0; 005cd098 libc::printf
// strings: 00653c74: 'tie texture overflow\n'

void draw::DrawTies_CheckTexOverflow(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  puVar1 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  *DAT_00e59c10 = 0;
  DAT_00e59c10[1] = (char)DAT_00e5aa58;
  DAT_00e59c10[2] = 0;
  DAT_00e59c10[3] = 0;
  if ((debug::g_DebugEnables[6] != 0) && (debug::g_DebugEnables[5] != 0)) {
    lVar3 = stub::STUB_00166e20_RET_0(loaders::g_GsRamAlloc);
    stub::STUB_001754c0();
    if (0x400000 < (int)lVar3) {
      libc::printf("tie texture overflow\n");
    }
    DAT_00e58408 = DAT_00e58408 + ((uint)(DAT_00e58408 - lVar3 >> 0x3f) & (int)lVar3 - DAT_00e58408)
    ;
  }
  *DAT_00e5aa58 = 0;
  DAT_00e5aa58[1] = (char)DAT_00e59c10 + '\x10';
  DAT_00e5aa58[2] = 0;
  DAT_00e5aa58[3] = 0;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  *puVar1 = 0;
  puVar2 = DAT_00e5aa58;
  puVar1[2] = 0;
  puVar1[1] = (char)puVar2;
  puVar1[3] = 0;
  return;
}



//==== 00166ad8  ns=stub  size=0x4
// sig: undefined STUB_00166ad8(void)
// callers(0): 
// callees(0): 

void stub::STUB_00166ad8(void)

{
  return;
}



//==== 00166adc  ns=draw  size=0x54
// sig: undefined ???_Unused_CopyBuffers_e58810(void)
// callers(0): 
// callees(1): 005002cc fastfunc::FastMemCopy

void draw::____Unused_CopyBuffers_e58810(void)

{
  fastfunc::FastMemCopy(&DAT_00e58e10,&DAT_00e5a020,0x200);
  fastfunc::FastMemCopy(&DAT_00e58810,&DAT_00e59c20,0x400);
  return;
}



//==== 00166b30  ns=draw  size=0x3c
// sig: undefined ???_Unused_StubCall_e59010(void)
// callers(0): 
// callees(1): 00166e28 stub::STUB_00166e28

void draw::____Unused_StubCall_e59010(void)

{
  stub::STUB_00166e28(&DAT_00e59010);
  stub::STUB_00166e28(&DAT_00e5a220);
  return;
}



//==== 00166b6c  ns=stub  size=0x4
// sig: undefined STUB_00166b6c(void)
// callers(0): 
// callees(0): 

void stub::STUB_00166b6c(void)

{
  return;
}



//==== 00166b70  ns=draw  size=0x298
// sig: undefined DrawTies(void)
// callers(0): 
// callees(7): 0006562c stub::STUB_0006562c; 00065630 stub::STUB_00065630; 0016699c draw::DrawTies_CheckTexOverflow; 00166e1c stub::STUB_00166e1c; 005002cc fastfunc::FastMemCopy; 0050045c stub::STUB_0050045c; 00503244 stub::FlushCache
// strings: 00653c8c: 'tie texs' | 00653c9c: 'tie draw'

void draw::DrawTies(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 1;
  if (1 < DAT_00e583f0) {
    piVar3 = &DAT_00e574f4;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + 2;
      piVar3 = piVar3 + 2;
      *(ushort *)(iVar2 + 0x2a) = *(ushort *)(iVar2 + 0x2a) | 8;
    } while (iVar4 < DAT_00e583f0);
  }
  loaders::g_GsRamAlloc = DAT_00966ad4;
  DAT_00e59c10 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  stub::STUB_00065630("tie texs",1);
  if (debug::g_DebugEnables[6] != 0) {
    stub::FlushCache(0);
    stub::STUB_00166e1c();
    stub::STUB_0050045c(&DAT_00e5a220,0x3600,0x40);
  }
  DrawTies_CheckTexOverflow();
  fastfunc::FastMemCopy(&DAT_00e5a020,&DAT_00e58e10,0x200);
  fastfunc::FastMemCopy(&DAT_00e59c20,&DAT_00e58810,0x400);
  iVar4 = 1;
  if (1 < DAT_00e583f0) {
    piVar3 = &DAT_00e574f4;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + 2;
      piVar3 = piVar3 + 2;
      *(ushort *)(iVar2 + 0x2a) = *(ushort *)(iVar2 + 0x2a) & 0xfff7;
    } while (iVar4 < DAT_00e583f0);
  }
  iVar4 = 0;
  if (0 < DAT_00e583f0) {
    piVar3 = &DAT_00e574f0;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + 2;
      piVar3 = piVar3 + 2;
      *(ushort *)(iVar2 + 0x2a) = *(ushort *)(iVar2 + 0x2a) | 8;
    } while (iVar4 < DAT_00e583f0);
  }
  iVar4 = DAT_00e5aa58 + 0x10;
  loaders::g_GsRamAlloc = DAT_00966ad4;
  DAT_00e59c10 = DAT_00e5aa58;
  DAT_00e5aa58 = iVar4;
  if (debug::g_DebugEnables[6] != 0) {
    stub::FlushCache(0);
    stub::STUB_00166e1c();
    stub::STUB_0050045c(&DAT_00e59010,0x3600,0x40);
  }
  stub::STUB_00065630("tie draw",5);
  DrawTies_CheckTexOverflow();
  iVar4 = 0;
  if (0 < DAT_00e583f0) {
    piVar3 = &DAT_00e574f0;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + 2;
      piVar3 = piVar3 + 2;
      bVar1 = iVar4 < DAT_00e583f0;
      *(ushort *)(iVar2 + 0x2a) = *(ushort *)(iVar2 + 0x2a) & 0xfff7;
    } while (bVar1);
  }
  fastfunc::FastMemCopy(DAT_00e5aa58,&DAT_007367b0,0x20);
  stub::STUB_0006562c("tie draw",5);
  return;
}



//==== 00166e08  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_UPDATE(void)
// callers(0): 
// callees(0): 

/* [update] Probably the static initializer for update.cpp (_GLOBAL_$I$update.cpp): sets
   DAT_0073875c=0x10000 */

void SECTION_HEADER_UPDATE(void)

{
  DAT_0073875c = 0x10000;
  return;
}



//==== 00166e1c  ns=stub  size=0x4
// sig: undefined STUB_00166e1c(void)
// callers(1): 00166b70 draw::DrawTies
// callees(0): 

void stub::STUB_00166e1c(void)

{
  return;
}



//==== 00166e20  ns=stub  size=0x8
// sig: undefined STUB_00166e20_RET_0(void)
// callers(1): 0016699c draw::DrawTies_CheckTexOverflow
// callees(0): 

undefined8 stub::STUB_00166e20_RET_0(void)

{
  return 0;
}



//==== 00166e28  ns=stub  size=0x4
// sig: undefined STUB_00166e28(void)
// callers(1): 00166b30 draw::???_Unused_StubCall_e59010
// callees(0): 

void stub::STUB_00166e28(void)

{
  return;
}



//==== 00166e30  ns=update  size=0x4c
// sig: void ResetGameCounters(void)
// callers(4): 00011020 boot::FrontEnd_Update; 0015fe00 space::ChooseLoadingScreen; 00161788 space::UpdateSpace; 0016da88 vendor::Vendor_PreUpdate
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::ResetGameCounters(void)

{
  draw::g_MobyFuncListCount = 0;
  draw::g_PostDrawCount = 0;
  mobyutil::g_NumLameShadows = 0;
  draw::g_PreDrawCount = 0;
  DAT_0095cae0 = 0;
  draw::g_PostPreDrawCount = 0;
  DAT_0095ccf0 = 0;
  DAT_00a1bfe4 = 0;
  return;
}



//==== 00166e88  ns=update  size=0x118
// sig: void UpdateGameCounters(void)
// callers(6): 00011020 boot::FrontEnd_Update; 0015fe00 space::ChooseLoadingScreen; 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay; 00168768 update::UpdateScene; 0016da88 vendor::Vendor_PreUpdate
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::UpdateGameCounters(void)

{
  if ((((g_downButtons == 0) && (ANALOG_STICKS.z == 0.0)) && (ANALOG_STICKS.w == 0.0)) &&
     ((ANALOG_STICKS.x == 0.0 && (ANALOG_STICKS.y == 0.0)))) {
    g_IdleFrames = g_IdleFrames + 1;
  }
  else {
    g_IdleFrames = 0;
  }
  if (g_boltMiningActive != 0) {
    if (g_IdleFrames < (int)((float)(longlong)(int)(animationSpeed * 15.5) * 60.0)) {
      g_boltMiningTimer = g_boltMiningTimer + 1;
    }
  }
  g_GameFrameCount = g_GameFrameCount + 1;
  worldUpdateTime = worldUpdateTime + 1;
  return;
}



//==== 00166fb0  ns=update  size=0xa70
// sig: void UpdateGameplay(void)
// callers(1): 000e0e60 main::startLevel
// callees(29): 00053550 camera::UpdateCamera; 000613a0 debug::DebugCamera; 00062590 debug::UpdateDebugCamera; 00065438 stub::STUB_00065438; 00065440 stub::STUB_00065440; 00065448 stub::STUB_00065448; 00065450 stub::STUB_00065450; 00065458 stub::STUB_00065458; 0006562c stub::STUB_0006562c; 00074dc0 draw::ImpactSprite_Update; 00078178 freeze::DisplayPrompt; 0007ba00 help::Help_Update; 000954c8 hero::HeroUpdate; 000c8444 hud::RegisterHUDCallback; 000c8578 hud::RegisterHeroHealthHUDCallbacks; 000c90a0 hud::Hud_ShowEntryById; 000d56d8 hud::UpdateAllGameplayHUD; 000dafb8 lights::UpdatePointLights; 000ef6d0 mobyfunc::UpdateNumSpawnableMobys; 000f1478 mobyfunc::UpdateHeroLightAngle; 000fc168 mobyfunc::UpdateMobys; 0011ae14 mobyutil::MB_HandleGameplayHud; 0011e8a0 partproc::UpdateParts; 0013abcc pause::BeginMenu; 0015be68 sound::sound_Update; 0015d7ac sound::sound_UpdateAmbient; 0015e7e8 space::Space_StartTakeoffCutscene; 00166e88 update::UpdateGameCounters; 0017f210 water::WaterDrift_Update
// strings: 00a0feec: 'None' | 00653cb0: 'moby update' | 00653cc0: 'hero update' | 00653cd0: 'part update' | 00653ce0: 'camera update' | 00653cf0: 'sound update'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::UpdateGameplay(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  double dVar5;
  
  if (((DebugUpdate & ENABLE_STEPPING) != NONE) && ((g_buttonsPressedThisFrame & R3) != 0)) {
    g_buttonsPressedThisFrame = g_downButtons & ~DAT_0095c660;
    DAT_0095c6ac = 6;
    DAT_00964ae8 = DAT_0095c660 & ~g_downButtons;
    DebugUpdate = UPDATE_CAMERA|UPDATE_PARTICLES|UPDATE_MOBYS|UPDATE_HERO;
    DAT_0095c660 = g_downButtons & ~L3;
  }
  if ((DAT_0095c6ac != 0) && (DAT_0095c6ac = DAT_0095c6ac + -1, DAT_0095c6ac == 0)) {
    DebugUpdate = ENABLE_STEPPING;
  }
  if (((DebugUpdate & ENABLE_STEPPING) != NONE) && ((g_buttonsPressedThisFrame & L3) != 0)) {
    g_buttonsPressedThisFrame = g_downButtons & ~DAT_0095c660;
    DAT_00964ae8 = DAT_0095c660 & ~g_downButtons;
    DAT_0095c660 = g_downButtons & ~L3;
  }
  if ((((g_gameMode == GAME_MODE_NORMAL) && ((memcard::g_CardStateFlags & 0x401) != 0)) &&
      (7 < g_FramesSinceStateChange)) && (g_heroState != VISIBOMB_CONTROL)) {
    freeze::DisplayPrompt(3,0,0);
  }
  else {
    bVar1 = DAT_00964adc != 0;
    if ((resumePage == 0) || (g_gameMode != GAME_MODE_NORMAL)) {
      if ((((Level != Quartu) || ((g_FramesSinceStateChange < 8 || (g_heroType != '\x02')))) ||
          (((g_buttonsPressedThisFrame & START) == 0 && (bVar1)))) ||
         (g_heroState == MOVEMENT_LOCKED)) {
        bVar2 = false;
        if ((((hero::g_heroStateType == 9) && (g_heroState == TURRET_PLANE_UI)) &&
            (DAT_0096b2d0 != 0)) &&
           (((*(short *)(DAT_0096b2d0 + 0xa6) == 0x45 || (*(short *)(DAT_0096b2d0 + 0xa6) == 0x563))
            || (*(short *)(DAT_0096b2d0 + 0xa6) == 0x4da)))) {
          bVar2 = true;
        }
        if (((!bVar2) || (g_FramesSinceStateChange < 8)) ||
           ((((g_buttonsPressedThisFrame & START) == 0 && (bVar1)) ||
            ((g_heroState == MOVEMENT_LOCKED ||
             (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x13)))))) {
          if ((g_gameMode != GAME_MODE_NORMAL) ||
             ((((Level != Batalia && (Level != Hoven)) ||
               (((g_buttonsPressedThisFrame & START) == 0 && (bVar1)))) ||
              (g_heroState != TURRET_PLANE_UI)))) {
            if (((((g_buttonsPressedThisFrame & START) == 0) && (bVar1)) ||
                (g_FramesSinceStateChange < 8)) ||
               ((g_heroState == MOVEMENT_LOCKED || (hero::g_heroStateType != 0x16)))) {
              if ((((g_buttonsPressedThisFrame & START) != 0) || (!bVar1)) &&
                 ((((7 < g_FramesSinceStateChange && (g_heroState != MOVEMENT_LOCKED)) &&
                   (DAT_0096ad8c != '\x02')) &&
                  ((((g_heroState != TURRET_PLANE_UI && (g_heroState != VISIBOMB_CONTROL)) &&
                    (g_HeroIsOutOfBounds == '\0')) &&
                   ((g_heroHealth != 0 && (g_gameMode == GAME_MODE_NORMAL)))))))) {
                pause::BeginMenu(0);
                return;
              }
              if ((((((DebugUpdate & ENABLE_STEPPING) == NONE) && (7 < g_FramesSinceStateChange)) &&
                   (((g_buttonsPressedThisFrame & (R3|SELECT)) != 0 &&
                    (((hero::g_heroStateType != 0x16 && (g_heroState != MOVEMENT_LOCKED)) &&
                     (g_heroState != TURRET_PLANE_UI)))))) &&
                  ((g_heroState != VISIBOMB_CONTROL && (g_HeroIsOutOfBounds == '\0')))) &&
                 ((g_heroHealth != 0 &&
                  ((g_gameMode == GAME_MODE_NORMAL && !bVar2 && (DAT_0095c6ac == 0)))))) {
                pause::BeginMenu(10);
                return;
              }
              if ((((memcard::g_memcardGameSaved != 0) && (MiscLevelFlags.field16_0x10 == 0)) &&
                  (7 < g_FramesSinceStateChange)) &&
                 (((g_ChallengeMode == 0 && (g_HeroIsOutOfBounds == '\0')) &&
                  ((g_heroHealth != 0 &&
                   (((int)(animationSpeed * 30.5) < worldUpdateTime && (Level != Veldin)))))))) {
                freeze::DisplayPrompt(5,0,0);
                MiscLevelFlags.field16_0x10 = 1;
                return;
              }
              if ((g_heroState != VISIBOMB_CONTROL) && (g_heroState != TURRET_PLANE_UI)) {
                mobyutil::MB_HandleGameplayHud();
              }
              if ((((g_buttonsPressedThisFrame & L3) != 0) && (g_heroState != VISIBOMB_CONTROL)) &&
                 (g_heroState != TURRET_PLANE_UI)) {
                iVar4 = hud::RegisterHeroHealthHUDCallbacks();
                dVar5 = 180.5;
                hud::Hud_ShowEntryById(iVar4,(int)(animationSpeed * 180.5));
                iVar4 = hud::RegisterHUDCallback
                                  (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                                   &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
                hud::Hud_ShowEntryById(iVar4,(int)((double)animationSpeed * dVar5));
              }
              if (map::g_MapAvailable != 0) {
                if (CHAR_ARRAY_00a0feec._72_2_ != -1) {
                  CHAR_ARRAY_00a0feec._72_2_ = CHAR_ARRAY_00a0feec._72_2_ + 1;
                }
                if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._74_2_ <
                    (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) / 600) {
                  iVar4 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
                  sVar3 = (short)(iVar4 >> 0x1f);
                  CHAR_ARRAY_00a0feec._74_2_ =
                       ((short)(iVar4 / 600) + sVar3) -
                       ((short)((short)(iVar4 / 0x2580000) + sVar3) >> 0xf);
                }
                CHAR_ARRAY_00a0feec._76_4_ =
                     CHAR_ARRAY_00a0feec._76_4_ | 1 << (Level & 0x3f) | 0x80000000;
              }
              if ((DAT_00a15c74 == 0) || (DAT_00a15c74 = 0, g_heroHealth == 0)) {
                if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_buttonsPressedThisFrame & L3) != 0)))) {
                  draw::g_MobyFuncListCount = 0;
                  draw::g_PreDrawCount = 0;
                  mobyutil::g_NumLameShadows = 0;
                  draw::g_PostPreDrawCount = 0;
                  DAT_0095cae0 = 0;
                  draw::g_PostDrawCount = 0;
                  DAT_0095ccf0 = 0;
                  DAT_00a1bfe4 = 0;
                }
                if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_buttonsPressedThisFrame & L3) != 0)))) {
                  mobyfunc::UpdateNumSpawnableMobys();
                  mobyfunc::UpdateMobys();
                  sound::sound_UpdateAmbient();
                  water::WaterDrift_Update();
                }
                stub::STUB_0006562c("moby update",3);
                if (((DebugUpdate & UPDATE_HERO) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_buttonsPressedThisFrame & L3) != 0)))) {
                  hero::HeroUpdate();
                }
                stub::STUB_0006562c("hero update",7);
                if (((DebugUpdate & UPDATE_PARTICLES) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_buttonsPressedThisFrame & L3) != 0)))) {
                  partproc::UpdateParts();
                  draw::ImpactSprite_Update();
                }
                stub::STUB_0006562c("part update",5);
                if (((DebugUpdate & UPDATE_CAMERA) == NONE) &&
                   (((DebugUpdate & ENABLE_STEPPING) == NONE ||
                    ((g_buttonsPressedThisFrame & L3) == 0)))) {
                  if ((ControlMode != 0) && (debug::DebugCamera(), ControlMode == 2)) {
                    debug::UpdateDebugCamera();
                  }
                }
                else {
                  camera::UpdateCamera();
                }
                stub::STUB_0006562c("camera update",8);
                sound::sound_Update();
                stub::STUB_0006562c("sound update",6);
                lights::UpdatePointLights();
                mobyfunc::UpdateHeroLightAngle();
                hud::UpdateAllGameplayHUD(1);
                help::Help_Update();
                if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_buttonsPressedThisFrame & L3) != 0)))) {
                  UpdateGameCounters();
                }
                if (Profile == 2) {
                  stub::STUB_00065438();
                }
                if (Profile == 3) {
                  stub::STUB_00065440();
                }
                if (Profile == 4) {
                  stub::STUB_00065448();
                }
                if (Profile == 5) {
                  stub::STUB_00065450();
                }
                if (Profile == 6) {
                  stub::STUB_00065458();
                }
              }
              else {
                space::Space_StartTakeoffCutscene();
              }
            }
            else {
              freeze::DisplayPrompt(0,0,0);
            }
          }
          else {
            freeze::DisplayPrompt(1,0,0);
          }
        }
        else {
          freeze::DisplayPrompt(1,0,0);
        }
      }
      else if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 0x13) {
        freeze::DisplayPrompt(4,0,0);
      }
    }
    else {
      pause::BeginMenu(0);
    }
  }
  return;
}



//==== 00167a30  ns=update  size=0x428
// sig: void mode_sceneUnInit(void)
// callers(2): 00167e60 update::mode_sceneInit; 00168768 update::UpdateScene
// callees(11): 000668d0 draw::UpdateViewContext; 0006dad0 draw::FadeToBlack; 0007d478 hero::Hero_MakeVisible; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000ffb70 mobyutil::GetGroundZ; 0011ce80 music::music_UnpauseDelay; 00174bdc vuchain::VU1_setBufSizeByLevel; 004d31b0 FUN_004d31b0; 005cd098 libc::printf
// strings: 00653d00: '\nwrote %d frames\n'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::mode_sceneUnInit(void)

{
  u8 uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  
  if ((music::g_SpeechPlaying.status != 6) && (music::g_SpeechPlaying.status != 7)) {
    music::g_SpeechPlaying.status = 5;
  }
  g_CutscenePlaying = 1;
  vuchain::VU1_setBufSizeByLevel();
  draw::FadeToBlack(0xc);
  draw::g_MobyFuncListCount = 0;
  draw::g_PostDrawCount = 0;
  mobyutil::g_NumLameShadows = 0;
  draw::g_PreDrawCount = 0;
  DAT_0095cae0 = 0;
  draw::g_PostPreDrawCount = 0;
  DAT_0095ccf0 = 0;
  puVar5 = &DAT_0095cd50;
  DAT_00a1bfe4 = 0;
  g_gameMode = GAME_MODE_NORMAL;
  boot::SceneScreenFade = 0.0;
  GameCamera.camUnderWater = (u32)(byte)g_SceneSavedCamUnderWater;
  GameCamera.posX = DAT_0095cd50;
  GameCamera.posY = DAT_0095cd54;
  GameCamera.posZ = DAT_0095cd58;
  GameCamera.field8_0x14c[0] = DAT_0095cd5c[0];
  GameCamera.field8_0x14c[1] = DAT_0095cd5c[1];
  GameCamera.field8_0x14c[2] = DAT_0095cd5c[2];
  GameCamera.field8_0x14c[3] = DAT_0095cd5c[3];
  if (DAT_0095cda0 != 0) {
    libc::printf("\nwrote %d frames\n",DAT_0095cda2);
  }
  ViewContext.xratio = 0.63;
  draw::UpdateViewContext();
  iVar6 = 0;
  if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
    do {
      pMVar2 = (MobyInstance *)puVar5[0x5e];
      if (pMVar2 != (MobyInstance *)0x0) {
        pMVar2->pClass->seq_cnt = pMVar2->pClass->seq_cnt + 0xff;
        *(undefined4 *)(&pMVar2->pClass->type + (uint)pMVar2->pClass->seq_cnt * 4) = 0;
        mobyfunc::DeleteMoby(pMVar2);
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < boot::g_SpaceSceneMobyCnt._0_2_);
  }
  if (Scene == g_SceneId) {
    uVar1 = MobyInstance->state;
    pMVar2 = MobyInstance;
    while (uVar1 != 0xff) {
      if ((pMVar2->state & 0x80) == 0) {
        pMVar2->modeBits =
             pMVar2->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      uVar1 = pMVar2[1].state;
      pMVar2 = pMVar2 + 1;
    }
  }
  uVar1 = MobyInstancePermEnd->state;
  pMVar2 = MobyInstancePermEnd;
  while (uVar1 != 0xff) {
    if (((pMVar2->state & 0x80) == 0) &&
       ((pMVar2->oClass == MINE_004A || (pMVar2->oClass == DECOY)))) {
      pMVar2->modeBits =
           pMVar2->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE|DISABLED);
    }
    uVar1 = pMVar2[1].state;
    pMVar2 = pMVar2 + 1;
  }
  hero::TransitionMovement(0,1);
  uVar9 = 0x3fe0000000000000;
  dVar7 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&g_heroPosition,0);
  dVar8 = 2.0;
  if ((2.0 < dVar7) && (ABS((float)((double)g_heroPosition.z - dVar7)) < 4.5)) {
    g_heroPosition.z = (float)dVar7;
  }
  hero::g_heroInvisible = 0;
  hero::Hero_MakeVisible();
  if (DAT_0095cd9a != '\0') {
    dVar7 = (double)mobyutil::GetGroundZ(uVar9,&DAT_0095cd60,0);
    if ((dVar8 < dVar7) && (ABS((double)(float)((double)DAT_0095cd68 - dVar7)) < dVar8)) {
      DAT_0095cd68 = (float)dVar7;
    }
    hero::Hero_Warp((float *)&DAT_0095cd60,(float *)&DAT_0095cd70,0,1);
  }
  if (DAT_00a15c0c != 0) {
    *(ushort *)(DAT_00a15c0c + 0x34) = *(ushort *)(DAT_00a15c0c + 0x34) & 0xfffe;
  }
  iVar6 = DAT_00a52c98;
  if (DAT_00a52c98 != 0) {
    puVar3 = (ushort *)(DAT_00a52c98 + 0x34);
    DAT_00a52c98 = 0;
    *(ushort *)(iVar6 + 0x34) = *puVar3 & 0xfffe;
  }
  uVar4 = DAT_00a15c10;
  iVar6 = DAT_00a15c0c;
  if (DAT_00a15c0c != 0) {
    DAT_00a15c0c = 0;
    DAT_00a15c10 = 0;
    FUN_004d31b0(iVar6,uVar4,1);
  }
  Scene = 0xffffffff;
  music::music_UnpauseDelay((int)(animationSpeed * 30.5));
  return;
}



//==== 00167e60  ns=update  size=0x538
// sig: void mode_sceneInit(int absolute_scene_id)
// callers(28): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0013b838 pause::UpdatePause; 0015da58 space::UpdateMoby_Spaceship; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d55c8 mobyupdate_unsorted::UpdateMoby_1120; 001e0460 mobyupdate_unsorted::UpdateMoby_1149; 0023e140 mobyupdate_unsorted::UpdateMoby_1290; 0024a600 mobyupdate_unsorted::UpdateMoby_1326; 00255868 mobyupdate_unsorted::UpdateMoby_1353_GemlikManager; 002563b0 mobyupdate_unsorted::UpdateMoby_1354; 00267798 mobyupdate_unsorted::UpdateMoby_1388; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 0026a978 mobyupdate_unsorted::UpdateMoby_{1399_1451_1899}; 0026e290 mobyupdate_unsorted::UpdateMoby_1404; 00272cd0 mobyupdate_unsorted::UpdateMoby_1419; 00275240 mobyupdate_helpers::M1422_00275240; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 0027b6d8 mobyupdate_unsorted::UpdateMoby_1428; 002ba158 mobyupdate_unsorted::UpdateMoby_18; 00375900 mobyupdate_unsorted::UpdateMoby_436_UmbrisInfobot???; 00411f38 mobyupdate_unsorted::UpdateMoby_684; 004363f0 mobyupdate_unsorted::UpdateMoby_{730_731_790}
// callees(15): 0006dad0 draw::FadeToBlack; 0007b458 help::Help_Kill; 0007d5c0 hero::Hero_MakeInvisible; 00083950 hero::HandleHeroDeath; 000b72b0 hero::TransitionMovement; 000e0110 loaders::LoadNpcSubtitles; 000e0118 loaders::PreLoadNpcChunk; 000e0230 loaders::ParseNpcChunk; 0011c830 music::music_PlayPreseekedSpeech; 0011ce20 music::music_Pause; 0011dbcc music::LoadMusic2; 0015be68 sound::sound_Update; 00167a30 update::mode_sceneUnInit; 005001fc fastfunc::FastMemSet; 00503078 stub::STUB_00503078

/* WARNING: Removing unreachable block (ram,0x0016835c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::mode_sceneInit(int absolute_scene_id)

{
  u8 uVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  char acStack_130 [224];
  longlong local_50;
  
  if ((-1 < absolute_scene_id) && (g_gameMode != GAME_MODE_SCENE)) {
    if (g_heroHealth == 0) {
      hero::HandleHeroDeath();
    }
    else {
      music::music_Pause(0);
      music::LoadMusic2(0);
      puVar7 = &DAT_0095cd50;
      g_CutscenePlaying = 1;
      fastfunc::FastMemSet(&DAT_0095cd50,0,0x1c0);
      fastfunc::FastMemSet(&DAT_00a1bf80,0,0x40);
      fastfunc::FastMemSet(&DAT_00a1be80,0,0x40);
      fastfunc::FastMemSet(&DAT_00a1bec0,0,0x40);
      fastfunc::FastMemSet(&DAT_00a1bf40,0,0x40);
      fastfunc::FastMemSet(&DAT_00a1bf00,0,0x40);
      DAT_0071fbd8 = 0x3f800000;
      DAT_00e5aa64 = DAT_00e5aa64 + -0x3c000;
      DAT_00a15f30 = 0;
      boot::g_SpaceSceneFrame = 0;
      boot::g_SpaceSceneChunk = 0;
      loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x3c000;
      DAT_0095cda8 = loaders::g_NpcBuffer;
      g_SceneId = absolute_scene_id;
      help::Help_Kill();
      boot::SceneScreenFade = 1.0;
      DAT_0095cf14 = 0;
      g_gameMode = GAME_MODE_SCENE;
      g_SceneSavedCamUnderWater = (char)GameCamera.camUnderWater;
      GameCamera.camUnderWater = 0;
      DAT_0095cd50 = GameCamera.posX;
      DAT_0095cd54 = GameCamera.posY;
      DAT_0095cd58 = GameCamera.posZ;
      DAT_0095cd5c[0] = GameCamera.field8_0x14c[0];
      DAT_0095cd5c[1] = GameCamera.field8_0x14c[1];
      DAT_0095cd5c[2] = GameCamera.field8_0x14c[2];
      DAT_0095cd5c[3] = GameCamera.field8_0x14c[3];
      iVar4 = hero::TransitionMovement(100,2);
      hero::g_heroInvisible = 1;
      hero::Hero_MakeInvisible(iVar4);
      if (DAT_00a15c0c != 0) {
        *(ushort *)(DAT_00a15c0c + 0x34) = *(ushort *)(DAT_00a15c0c + 0x34) | 1;
      }
      if (DAT_00a52c98 != 0) {
        *(ushort *)(DAT_00a52c98 + 0x34) = *(ushort *)(DAT_00a52c98 + 0x34) | 1;
      }
      if (((g_buttonsPressedThisFrame & CROSS) == 0) || (Scene == g_SceneId)) {
        draw::FadeToBlack(6);
        loaders::LoadNpcSubtitles();
        loaders::PreLoadNpcChunk(0);
        local_50 = (longlong)(int)(animationSpeed * 6.5);
        draw::FadeToBlack((int)(animationSpeed * 6.5));
        music::LoadMusic2(1);
        loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x80000;
        loaders::ParseNpcChunk();
        if (Scene == g_SceneId) {
          fastfunc::FastMemSet(acStack_130,0,0xe0);
          iVar4 = 0;
          puVar5 = puVar7;
          if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
            do {
              iVar4 = iVar4 + 1;
              iVar6 = (int)boot::g_SpaceSceneMobyCnt._0_2_;
              acStack_130[*(byte *)(puVar5[0x5e] + 0x22)] = '\x01';
              puVar5 = puVar5 + 1;
            } while (iVar4 < iVar6);
          }
          uVar1 = MobyInstance->state;
          pMVar3 = MobyInstance;
          while (uVar1 != 0xff) {
            if (((pMVar3->state & 0x80) == 0) && (acStack_130[pMVar3->mClass] != '\0')) {
              pMVar3->modeBits = pMVar3->modeBits | NO_DRAW;
            }
            uVar1 = pMVar3[1].state;
            pMVar3 = pMVar3 + 1;
          }
          iVar4 = 0;
          if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
            do {
              piVar2 = puVar7 + 0x5e;
              iVar4 = iVar4 + 1;
              puVar7 = puVar7 + 1;
              *(ushort *)(*piVar2 + 0x34) = *(ushort *)(*piVar2 + 0x34) & 0xff7f;
            } while (iVar4 < boot::g_SpaceSceneMobyCnt._0_2_);
          }
        }
        uVar1 = MobyInstancePermEnd->state;
        pMVar3 = MobyInstancePermEnd;
        while (music::g_PendingSpeech = g_SceneId, uVar1 != 0xff) {
          if (((pMVar3->state & 0x80) == 0) &&
             ((pMVar3->oClass == MINE_004A || (pMVar3->oClass == DECOY)))) {
            pMVar3->modeBits = pMVar3->modeBits | NO_DRAW;
          }
          uVar1 = pMVar3[1].state;
          pMVar3 = pMVar3 + 1;
        }
        while (music::g_SpeechPlaying.status != 3) {
          sound::sound_Update();
          stub::STUB_00503078(0);
        }
        boot::g_SpaceSceneMobyCnt._2_2_ = -3;
        music::music_PlayPreseekedSpeech();
        loaders::PreLoadNpcChunk(1);
        iVar4 = 0;
        if (boot::g_SpaceSceneMobyCnt._2_2_ < 0) {
          do {
            stub::STUB_00503078(0);
            iVar4 = iVar4 + -1;
          } while (boot::g_SpaceSceneMobyCnt._2_2_ < iVar4);
        }
      }
      else {
        mode_sceneUnInit();
      }
    }
  }
  return;
}



//==== 001683a0  ns=update  size=0x3b0
// sig: void UpdateSceneCamera(void)
// callers(1): 00168768 update::UpdateScene
// callees(3): 000668d0 draw::UpdateViewContext; 005c5ad0 libc::memcpy; 005dd914 mathfunc::SinCos
// strings: 0096c074: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::UpdateSceneCamera(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  
  pfVar6 = (float *)((int)boot::g_SpaceSceneCameraFrames + g_cutsceneCameraFrame * 0x20);
  ViewContext.xratio = pfVar6[7];
  if (Cheats[0] != '\0') {
    ViewContext.xratio = ViewContext.xratio * DAT_0071fbd8;
  }
  uVar5 = draw::UpdateViewContext();
  GameCamera.posX = *pfVar6;
  GameCamera.posY = pfVar6[1];
  GameCamera.posZ = pfVar6[2];
  GameCamera.field8_0x14c = *(char (*) [4])(pfVar6 + 3);
  uVar5 = mathfunc::SinCos((double)pfVar6[4],uVar5,0);
  dVar14 = extraout_f1;
  uVar5 = mathfunc::SinCos((double)pfVar6[4],uVar5,1);
  dVar13 = extraout_f1_00;
  uVar5 = mathfunc::SinCos((double)pfVar6[5],uVar5,0);
  dVar12 = extraout_f1_01;
  uVar5 = mathfunc::SinCos((double)pfVar6[5],uVar5,1);
  dVar11 = extraout_f1_02;
  uVar5 = mathfunc::SinCos((double)pfVar6[6],uVar5,0);
  dVar10 = extraout_f1_03;
  dVar7 = (double)mathfunc::SinCos((double)pfVar6[6],uVar5,1);
  dVar9 = (double)(float)(dVar12 * dVar10);
  dVar8 = (double)(float)(dVar7 * dVar12);
  libc::memcpy(&local_b0,&DAT_007387f0,0x40);
  local_b0 = (float)(dVar11 * dVar7);
  local_ac = (float)(dVar11 * dVar10);
  local_a0 = (float)(dVar14 * dVar8) - (float)(dVar13 * dVar10);
  local_98 = (float)(dVar11 * dVar14);
  local_9c = (float)(dVar14 * dVar9) + (float)(dVar13 * dVar7);
  local_88 = (float)(dVar13 * dVar11);
  local_90 = (float)(dVar13 * dVar8) + (float)(dVar14 * dVar10);
  local_8c = (float)(dVar13 * dVar9) - (float)(dVar7 * dVar14);
  local_a8 = (float)-dVar12;
  libc::memcpy(&local_f0,&local_b0,0x40);
  GameCamera.orientMtx.forward.x = -local_d0;
  GameCamera.orientMtx.right.x = -local_f0;
  GameCamera.orientMtx.forward.y = -local_cc;
  GameCamera.orientMtx.right.y = -local_ec;
  GameCamera.orientMtx.forward.z = -local_c8;
  GameCamera.orientMtx.right.z = -local_e8;
  GameCamera.orientMtx.up.x = local_e0;
  GameCamera.orientMtx.up.y = local_dc;
  GameCamera.orientMtx.up.z = local_d8;
  if (Cheats[4] != '\0') {
    GameCamera.orientMtx.right.x =
         GameCamera.orientMtx.forward.y * local_d8 - GameCamera.orientMtx.forward.z * local_dc;
    GameCamera.orientMtx.right.y =
         GameCamera.orientMtx.forward.z * local_e0 - GameCamera.orientMtx.forward.x * local_d8;
    GameCamera.orientMtx.right.z =
         GameCamera.orientMtx.forward.x * local_dc - GameCamera.orientMtx.forward.y * local_e0;
    GameCamera.orientMtx.right.w = 0.0;
  }
  if ((Cheats[0] != '\0') && (fVar1 = 0.0, DAT_00a15f30 != 0.0)) {
    fVar4 = SQRT(GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
                 GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y +
                 GameCamera.orientMtx.forward.z * GameCamera.orientMtx.forward.z);
    fVar2 = fVar1;
    fVar3 = fVar1;
    if (fVar4 != 0.0) {
      fVar4 = DAT_00a15f30 / fVar4;
      fVar1 = GameCamera.orientMtx.forward.z * fVar4;
      fVar2 = GameCamera.orientMtx.forward.y * fVar4;
      fVar3 = GameCamera.orientMtx.forward.x * fVar4;
    }
    GameCamera.posX = GameCamera.posX - fVar3;
    GameCamera.posY = GameCamera.posY - fVar2;
    GameCamera.posZ = GameCamera.posZ - fVar1;
  }
  return;
}



//==== 00168768  ns=update  size=0x5cc
// sig: void UpdateScene(void)
// callers(1): 000e0e60 main::startLevel
// callees(22): 0006562c stub::STUB_0006562c; 000954c8 hero::HeroUpdate; 00095aa8 hero::???_Hero_AddPulsingMobyGlow; 000aa5e0 hero::Hero_UpdateInScene; 000d9ee8 initsky::UpdateSpaceSceneEffects; 000dafb8 lights::UpdatePointLights; 000e0118 loaders::PreLoadNpcChunk; 000e0230 loaders::ParseNpcChunk; 000ef74c mobyfunc::UpdateMobyFrameData; 000f1478 mobyfunc::UpdateHeroLightAngle; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc168 mobyfunc::UpdateMobys; 00106468 mobyutil::MB_SetZBoundsFromFloorCeil; 0011c830 music::music_PlayPreseekedSpeech; 0011dbcc music::LoadMusic2; 0011e8a0 partproc::UpdateParts; 0015be68 sound::sound_Update; 0015d7ac sound::sound_UpdateAmbient; 00166e88 update::UpdateGameCounters; 00167a30 update::mode_sceneUnInit; 001683a0 update::UpdateSceneCamera; 00502730 fastfunc::FastIntToDouble
// strings: 00653cb0: 'moby update' | 00653cc0: 'hero update' | 00653cd0: 'part update' | 00653ce0: 'camera update' | 00653cf0: 'sound update'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::UpdateScene(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MOBY_OCLASSES MVar9;
  MobyInstance *pMVar10;
  char cVar11;
  float fVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int iVar17;
  double dVar18;
  
  if ((g_buttonsPressedThisFrame & START) == 0) {
    if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
      draw::g_MobyFuncListCount = 0;
      draw::g_PreDrawCount = 0;
      mobyutil::g_NumLameShadows = 0;
      draw::g_PostPreDrawCount = 0;
      draw::g_PostDrawCount = 0;
      DAT_0095cae0 = 0;
      DAT_0095ccf0 = 0;
      DAT_00a1bfe4 = 0;
    }
    if (((DebugUpdate & ENABLE_STEPPING) == NONE) ||
       ((g_buttonsPressedThisFrame & (L3|CIRCLE)) != 0)) {
      initsky::UpdateSpaceSceneEffects();
    }
    if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
      mobyfunc::UpdateMobys();
      sound::sound_UpdateAmbient();
    }
    stub::STUB_0006562c("moby update",3);
    if (((DebugUpdate & UPDATE_HERO) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
      hero::HeroUpdate();
    }
    stub::STUB_0006562c("hero update",7);
    if (((DebugUpdate & UPDATE_PARTICLES) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
      partproc::UpdateParts();
    }
    stub::STUB_0006562c("part update",5);
    if (((DebugUpdate & ENABLE_STEPPING) == NONE) ||
       ((g_buttonsPressedThisFrame & (L3|CIRCLE)) != 0)) {
      puVar16 = &DAT_0095cd50;
      g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
      boot::g_SpaceSceneFrame = boot::g_SpaceSceneFrame + 1;
      boot::SceneScreenFade = boot::SceneScreenFade - 0.34;
      dVar18 = 0.0;
      if (boot::SceneScreenFade < 0.0) {
        boot::SceneScreenFade = 0.0;
      }
      if (boot::g_SpaceSceneMobyCnt._2_2_ <= boot::g_SpaceSceneFrame) {
        music::music_PlayPreseekedSpeech();
      }
      iVar17 = 0;
      bVar1 = boot::g_SpaceSceneNumFrames._0_2_ <= boot::g_SpaceSceneFrame;
      if (((int)(animationSpeed * 18.5) <= boot::g_SpaceSceneFrame) &&
         ((double)boot::SceneScreenFade == dVar18)) {
        if ((((g_ChallengeMode == 0 && g_goodiesMenuActive == 0) && boot::g_MoviePlayState == 0) &&
            (0 < (int)Level)) || ((g_buttonsPressedThisFrame & START) == 0)) {
          if (((g_downButtons & (R1|L1|R2|L2)) == (R1|L1|R2|L2)) &&
             ((g_buttonsPressedThisFrame & START) != 0)) {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      if (bVar1) {
        mode_sceneUnInit();
      }
      else {
        iVar13 = 0x60;
        if (g_IsPal != 0) {
          iVar13 = 0x50;
        }
        if (iVar13 <= (int)g_cutsceneCameraFrame) {
          music::LoadMusic2(1);
          boot::g_SpaceSceneChunk = boot::g_SpaceSceneChunk + 1;
          loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x80000;
          loaders::ParseNpcChunk();
          iVar13 = loaders::PreLoadNpcChunk(boot::g_SpaceSceneChunk + 1);
        }
        UpdateSceneCamera();
        if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
          do {
            pMVar10 = (MobyInstance *)puVar16[0x5e];
            cVar11 = (char)((int)g_cutsceneCameraFrame >> 1);
            pMVar10->previousAnimationFrame = cVar11;
            pMVar10->animationFrame = cVar11 + '\x01';
            mobyfunc::UpdateMobyFrameData(pMVar10);
            dVar18 = (double)fastfunc::FastIntToDouble(g_cutsceneCameraFrame & 1);
            pMVar10->animationBlend = (float)(dVar18 * 0.5);
            if ((iVar13 != 0) && ((g_cutsceneCameraFrame & 1) != 0)) {
              pMVar10->animationBlend = 1.0;
            }
            fVar2 = pMVar10->animationBlend;
            fVar12 = 1.0 - fVar2;
            pfVar14 = (float *)((int)pMVar10->pVar +
                               (uint)(byte)pMVar10->previousAnimationFrame * 0x10);
            pfVar15 = (float *)((int)pMVar10->pVar + (uint)(byte)pMVar10->animationFrame * 0x10);
            fVar3 = *pfVar14;
            fVar4 = pfVar14[1];
            fVar5 = pfVar14[2];
            fVar6 = *pfVar15;
            fVar7 = pfVar15[1];
            fVar8 = pfVar15[2];
            (pMVar10->pos).w = pfVar14[3];
            pMVar10->field44_0x71 = -1;
            (pMVar10->pos).x = fVar3 * fVar12 + fVar6 * fVar2;
            (pMVar10->pos).y = fVar4 * fVar12 + fVar7 * fVar2;
            (pMVar10->pos).z = fVar5 * fVar12 + fVar8 * fVar2;
            mobyfunc::UpdateMobyTransform(pMVar10);
            if (pMVar10->shadow != '\0') {
              mobyutil::MB_SetZBoundsFromFloorCeil(pMVar10);
            }
            if (pMVar10->oClass == RATCHET) {
              hero::Hero_UpdateInScene(pMVar10);
            }
            MVar9 = pMVar10->oClass;
            if (((MVar9 == CLANK_000A) || (MVar9 == GIANT_CLANK)) || (MVar9 == CLANK_0555)) {
              hero::____Hero_AddPulsingMobyGlow(pMVar10);
            }
            iVar17 = iVar17 + 1;
            puVar16 = puVar16 + 1;
          } while (iVar17 < boot::g_SpaceSceneMobyCnt._0_2_);
        }
      }
    }
    stub::STUB_0006562c("camera update",8);
    sound::sound_Update();
    stub::STUB_0006562c("sound update",6);
    lights::UpdatePointLights();
    mobyfunc::UpdateHeroLightAngle();
    if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
      UpdateGameCounters();
    }
  }
  else {
    mode_sceneUnInit();
  }
  return;
}



//==== 00168d34  ns=update  size=0xb8
// sig: void StartMovie(int arg0, int arg1, int language)
// callers(0): 
// callees(5): 0006dad0 draw::FadeToBlack; 0007b458 help::Help_Kill; 0011cd1c music::music_Stop; 0015d8b4 sound::sound_StopAllSounds; 00503244 stub::FlushCache

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::StartMovie(int arg0,int arg1,int language)

{
  DAT_009637cb = DAT_009637cb | 8;
  stub::FlushCache(0);
  sound::sound_StopAllSounds();
  music::music_Stop();
  g_CutscenePlaying = 1;
  g_MovieParam0 = arg0;
  DAT_00e5a634 = arg1;
  g_MovieLanguage = language;
  draw::FadeToBlack(4);
  help::Help_Kill();
  g_gameMode = GAME_MODE_MOVIE;
  return;
}



//==== 00168dec  ns=update  size=0x190
// sig: void PlayInfobotMovie(int movieIdx)
// callers(12): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 0013b838 pause::UpdatePause; 0015da58 space::UpdateMoby_Spaceship; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 00255868 mobyupdate_unsorted::UpdateMoby_1353_GemlikManager; 00267af8 mobyupdate_unsorted::UpdateMoby_{1389_1446}; 00272cd0 mobyupdate_unsorted::UpdateMoby_1419; 00375900 mobyupdate_unsorted::UpdateMoby_436_UmbrisInfobot???; 004363f0 mobyupdate_unsorted::UpdateMoby_{730_731_790}; 0044b5f0 mobyupdate_unsorted::UpdateMoby_750; 004d31b0 FUN_004d31b0; 004d3870 FUN_004d3870
// callees(12): 0006dad0 draw::FadeToBlack; 0007b458 help::Help_Kill; 00083950 hero::HandleHeroDeath; 0011cd1c music::music_Stop; 0015d8b4 sound::sound_StopAllSounds; 004d5448 FUN_004d5448; 004d5d5c FUN_004d5d5c; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 00503244 stub::FlushCache; 005cd2a8 libc::snprintf; 005e38b0 FUN_005e38b0
// strings: 00653d14: '/rc1/ps3data/movies/infobots[%d].bik'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::PlayInfobotMovie(int movieIdx)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  char acStack_e0 [64];
  undefined1 auStack_a0 [128];
  
  if (movieIdx < 0x13 && 0 < movieIdx) {
    pvVar1 = boot::g_pBinkPlayer;
    if (boot::g_pBinkPlayer == (void *)0x0) {
      uVar2 = FUN_005e38b0(0x60);
      pvVar1 = (void *)0x0;
      if ((void *)uVar2 != (void *)0x0) {
        FUN_004d5d5c(uVar2);
        pvVar1 = (void *)uVar2;
      }
    }
    boot::g_pBinkPlayer = pvVar1;
    pvVar1 = boot::g_pBinkPlayer;
    iVar3 = libc::snprintf(acStack_e0,"/rc1/ps3data/movies/infobots[%d].bik",movieIdx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(pvVar1,auStack_a0,g_Language,0x400);
    iVar3 = g_Language;
    if (g_heroHealth == 0) {
      hero::HandleHeroDeath();
    }
    else if (g_HeroIsOutOfBounds == '\0') {
      DAT_009637cb = DAT_009637cb | 8;
      stub::FlushCache(0);
      sound::sound_StopAllSounds();
      music::music_Stop();
      g_MovieParam0 = &hero::g_heroMtx;
      DAT_00e5a634 = &hero::g_heroMtx;
      g_MovieLanguage = iVar3;
      g_CutscenePlaying = 1;
      draw::FadeToBlack(4);
      help::Help_Kill();
      g_gameMode = GAME_MODE_MOVIE;
    }
  }
  return;
}



//==== 00168f7c  ns=update  size=0x190
// sig: void PlayHelpMovie(int movieIdx)
// callers(3): 00237e98 mobyupdate_unsorted::UpdateMoby_1283; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 0045b190 mobyupdate_unsorted::UpdateMoby_786
// callees(12): 0006dad0 draw::FadeToBlack; 0007b458 help::Help_Kill; 00083950 hero::HandleHeroDeath; 0011cd1c music::music_Stop; 0015d8b4 sound::sound_StopAllSounds; 004d5448 FUN_004d5448; 004d5d5c FUN_004d5d5c; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 00503244 stub::FlushCache; 005cd2a8 libc::snprintf; 005e38b0 FUN_005e38b0
// strings: 00653d3c: '/rc1/ps3data/movies/help[%d].bik'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::PlayHelpMovie(int movieIdx)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  char acStack_e0 [64];
  undefined1 auStack_a0 [128];
  
  if ((uint)movieIdx < 3) {
    pvVar1 = boot::g_pBinkPlayer;
    if (boot::g_pBinkPlayer == (void *)0x0) {
      uVar2 = FUN_005e38b0(0x60);
      pvVar1 = (void *)0x0;
      if ((void *)uVar2 != (void *)0x0) {
        FUN_004d5d5c(uVar2);
        pvVar1 = (void *)uVar2;
      }
    }
    boot::g_pBinkPlayer = pvVar1;
    pvVar1 = boot::g_pBinkPlayer;
    iVar3 = libc::snprintf(acStack_e0,"/rc1/ps3data/movies/help[%d].bik",movieIdx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(pvVar1,auStack_a0,g_Language,0x400);
    iVar3 = g_Language;
    if (g_heroHealth == 0) {
      hero::HandleHeroDeath();
    }
    else if (g_HeroIsOutOfBounds == '\0') {
      DAT_009637cb = DAT_009637cb | 8;
      stub::FlushCache(0);
      sound::sound_StopAllSounds();
      music::music_Stop();
      g_MovieParam0 = &hero::g_heroMtx;
      DAT_00e5a634 = &hero::g_heroMtx;
      g_MovieLanguage = iVar3;
      g_CutscenePlaying = 1;
      draw::FadeToBlack(4);
      help::Help_Kill();
      g_gameMode = GAME_MODE_MOVIE;
    }
  }
  return;
}



//==== 0016910c  ns=update  size=0x15c
// sig: void PlaySpecialMovie(int movieIdx)
// callers(1): 0013b838 pause::UpdatePause
// callees(11): 0006dad0 draw::FadeToBlack; 0007b458 help::Help_Kill; 0011cd1c music::music_Stop; 0015d8b4 sound::sound_StopAllSounds; 004d5448 FUN_004d5448; 004d5d5c FUN_004d5d5c; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 00503244 stub::FlushCache; 005cd2a8 libc::snprintf; 005e38b0 FUN_005e38b0
// strings: 00653d60: '/rc1/ps3data/movies/special[%d].bik'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::PlaySpecialMovie(int movieIdx)

{
  void *pvVar1;
  int iVar3;
  undefined8 uVar2;
  undefined8 unaff_r29;
  char acStack_e0 [64];
  undefined1 auStack_a0 [128];
  
  if ((uint)movieIdx < 4) {
    pvVar1 = boot::g_pBinkPlayer;
    if (boot::g_pBinkPlayer == (void *)0x0) {
      unaff_r29 = FUN_005e38b0(0x60);
      pvVar1 = (void *)0x0;
      if ((void *)unaff_r29 != (void *)0x0) {
        FUN_004d5d5c(unaff_r29);
        pvVar1 = (void *)unaff_r29;
      }
    }
    boot::g_pBinkPlayer = pvVar1;
    pvVar1 = boot::g_pBinkPlayer;
    iVar3 = libc::snprintf(acStack_e0,"/rc1/ps3data/movies/special[%d].bik",movieIdx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(pvVar1,auStack_a0,0,0x400);
    DAT_009637cb = DAT_009637cb | 8;
    stub::FlushCache(0);
    sound::sound_StopAllSounds();
    music::music_Stop();
    g_MovieParam0 = (undefined4)unaff_r29;
    g_MovieLanguage = 0;
    g_CutscenePlaying = 1;
    DAT_00e5a634 = g_MovieParam0;
    draw::FadeToBlack(4);
    help::Help_Kill();
    g_gameMode = GAME_MODE_MOVIE;
  }
  return;
}



//==== 00169268  ns=update  size=0x160
// sig: void PlayStoryMovie(int movieIdx)
// callers(2): 0013b838 pause::UpdatePause; 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(11): 0006dad0 draw::FadeToBlack; 0007b458 help::Help_Kill; 0011cd1c music::music_Stop; 0015d8b4 sound::sound_StopAllSounds; 004d5448 FUN_004d5448; 004d5d5c FUN_004d5d5c; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 00503244 stub::FlushCache; 005cd2a8 libc::snprintf; 005e38b0 FUN_005e38b0
// strings: 00653d84: '/rc1/ps3data/movies/story[%d].bik'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::PlayStoryMovie(int movieIdx)

{
  void *pvVar1;
  int iVar3;
  undefined8 uVar2;
  undefined8 unaff_r29;
  char acStack_e0 [64];
  undefined1 auStack_a0 [128];
  
  if ((uint)movieIdx < 0xc) {
    pvVar1 = boot::g_pBinkPlayer;
    if (boot::g_pBinkPlayer == (void *)0x0) {
      unaff_r29 = FUN_005e38b0(0x60);
      pvVar1 = (void *)0x0;
      if ((void *)unaff_r29 != (void *)0x0) {
        FUN_004d5d5c(unaff_r29);
        pvVar1 = (void *)unaff_r29;
      }
    }
    boot::g_pBinkPlayer = pvVar1;
    pvVar1 = boot::g_pBinkPlayer;
    iVar3 = libc::snprintf(acStack_e0,"/rc1/ps3data/movies/story[%d].bik",movieIdx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(pvVar1,auStack_a0,g_Language,0x400);
    iVar3 = g_Language;
    DAT_009637cb = DAT_009637cb | 8;
    stub::FlushCache(0);
    sound::sound_StopAllSounds();
    music::music_Stop();
    g_MovieParam0 = (undefined4)unaff_r29;
    g_MovieLanguage = iVar3;
    g_CutscenePlaying = 1;
    DAT_00e5a634 = g_MovieParam0;
    draw::FadeToBlack(4);
    help::Help_Kill();
    g_gameMode = GAME_MODE_MOVIE;
  }
  return;
}



//==== 001693c8  ns=update  size=0x274
// sig: void mode_movieUnInit(void)
// callers(1): 0016974c update::UpdateCinematic
// callees(9): 0006dad0 draw::FadeToBlack; 0011c984 music::music_StartTrack; 004d31b0 FUN_004d31b0; 00502df8 FUN_00502df8; 00502dfc FUN_00502dfc; 00503074 stub::sceGsSyncPath; 00503078 stub::STUB_00503078; 00503208 stub::STUB_00503208; 00503244 stub::FlushCache

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::mode_movieUnInit(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 uStack_50;
  undefined1 auStack_4f [15];
  
  g_CutscenePlaying = 1;
  stub::STUB_00503078(0);
  stub::sceGsSyncPath(0,0);
  stub::STUB_00503208(&PTR_____Unused_Respawn_IncCounter_a53504_00707950);
  iVar2 = 0xd;
  uVar5 = (ulonglong)DAT_00e5a640;
  if (Cutscene != 0) {
    iVar2 = 0xe;
  }
  iVar6 = 0x11;
  if (Cutscene != 0) {
    iVar6 = 0xe;
  }
  iVar3 = 0;
  iVar4 = GSmem.zbuf;
  if (iVar2 != 0) {
    do {
      FUN_00502dfc(&uStack_50,iVar4 >> 8,2,0x2a,0,0,0x80,0x80);
      stub::FlushCache(0);
      FUN_00502df8(&uStack_50,uVar5);
      stub::sceGsSyncPath(0,0);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10000;
      uVar5 = uVar5 + 0xc000;
    } while (iVar3 < iVar2);
  }
  iVar4 = 0;
  iVar2 = DAT_00966ad4;
  if (iVar6 != 0) {
    do {
      FUN_00502dfc(auStack_4f,iVar2 >> 8,1,0x12,0,0,0x40,0x40);
      stub::FlushCache(0);
      FUN_00502df8(auStack_4f,uVar5 & 0xffffffff);
      stub::sceGsSyncPath(0,0);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x4000;
      uVar5 = uVar5 + 0x4000;
    } while (iVar4 < iVar6);
  }
  if (boot::g_MoviePlayState == 2) {
    boot::g_MoviePlayState = 0;
  }
  draw::FadeToBlack(4);
  music::music_StartTrack((int)music::g_MusicPlaying.track,1,0x400);
  uVar1 = DAT_00a15c10;
  iVar2 = DAT_00a15c0c;
  g_gameMode = GAME_MODE_NORMAL;
  if (DAT_00a15c0c != 0) {
    DAT_00a15c0c = 0;
    DAT_00a15c10 = 0;
    FUN_004d31b0(iVar2,uVar1,1);
  }
  DAT_009637cb = DAT_009637cb | 0x10;
  return;
}



//==== 0016963c  ns=update  size=0x110
// sig: void PlayMovieBlocking(void)
// callers(2): 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin
// callees(9): 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0011e2d4 pad::UpdatePad; 004d4c88 FUN_004d4c88; 004d5524 FUN_004d5524; 004d59e8 FUN_004d59e8; 004d5d5c FUN_004d5d5c; 005e38b0 FUN_005e38b0; 0064f504 cell::cellSysutilCheckCallback

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::PlayMovieBlocking(void)

{
  bool bVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  pvVar2 = boot::g_pBinkPlayer;
  if (boot::g_pBinkPlayer == (void *)0x0) {
    uVar3 = FUN_005e38b0(0x60);
    pvVar2 = (void *)0x0;
    if ((void *)uVar3 != (void *)0x0) {
      FUN_004d5d5c(uVar3);
      pvVar2 = (void *)uVar3;
    }
  }
  boot::g_pBinkPlayer = pvVar2;
  pvVar2 = boot::g_pBinkPlayer;
  bVar1 = false;
  iVar5 = 0;
  do {
    pad::UpdatePad();
    if ((g_downButtons & START) != 0) {
      bVar1 = true;
      break;
    }
    draw::UpdateOcclusion(0);
    iVar4 = FUN_004d5524(pvVar2);
    cell::cellSysutilCheckCallback();
    if (1 < iVar4) {
      iVar5 = FUN_004d59e8(pvVar2);
    }
    draw::Render_DispatchJob();
  } while (iVar5 == 0);
  if (bVar1) {
    FUN_004d4c88(pvVar2);
  }
  return;
}



//==== 0016974c  ns=update  size=0x154
// sig: void UpdateCinematic(void)
// callers(1): 000e0e60 main::startLevel
// callees(15): 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0011cd1c music::music_Stop; 0011e2d4 pad::UpdatePad; 0015d8b4 sound::sound_StopAllSounds; 001693c8 update::mode_movieUnInit; 004d4c88 FUN_004d4c88; 004d5524 FUN_004d5524; 004d59e8 FUN_004d59e8; 004d5d5c FUN_004d5d5c; 00503128 stub::FUN_00503128_RET_0; 00503244 stub::FlushCache; 005066bc stub::STUB_005066bc_RET_0; 005e38b0 FUN_005e38b0; 0064f504 cell::cellSysutilCheckCallback

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::UpdateCinematic(void)

{
  bool bVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  stub::FlushCache(0);
  sound::sound_StopAllSounds();
  music::music_Stop();
  stub::STUB_005066bc_RET_0(0);
  pvVar2 = boot::g_pBinkPlayer;
  if (boot::g_pBinkPlayer == (void *)0x0) {
    uVar3 = FUN_005e38b0(0x60);
    pvVar2 = (void *)0x0;
    if ((void *)uVar3 != (void *)0x0) {
      FUN_004d5d5c(uVar3);
      pvVar2 = (void *)uVar3;
    }
  }
  boot::g_pBinkPlayer = pvVar2;
  pvVar2 = boot::g_pBinkPlayer;
  bVar1 = false;
  iVar5 = 0;
  do {
    pad::UpdatePad();
    if ((g_downButtons & START) != 0) {
      bVar1 = true;
      break;
    }
    draw::UpdateOcclusion(0);
    iVar4 = FUN_004d5524(pvVar2);
    cell::cellSysutilCheckCallback();
    if (1 < iVar4) {
      iVar5 = FUN_004d59e8(pvVar2);
    }
    draw::Render_DispatchJob();
  } while (iVar5 == 0);
  if (bVar1) {
    FUN_004d4c88(pvVar2);
  }
  stub::FUN_00503128_RET_0(0);
  mode_movieUnInit();
  return;
}



//==== 001698a0  ns=update  size=0x274
// sig: void mode_creditsInit(void)
// callers(2): 0013b838 pause::UpdatePause; 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(5): 0006dad0 draw::FadeToBlack; 0011dbcc music::LoadMusic2; 005001fc fastfunc::FastMemSet; 005034c4 idol::PRINT_m_LoadGameFile; 00503e00 fios::LoadAssetFromFile
// strings: 00653da8: 'rc1/ps3data/global/credits/credits[0].ps3' | 00653dd8: 'rc1/ps3data/global/credits/credits[1].ps3' | 00653e08: 'rc1/ps3data/global/credits/credits[0].vram' | 00653e38: 'credits_images_ntsc' | 00653e50: '/rc1/ps3data/global/credits/credits[1].vram'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::mode_creditsInit(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_00902e9c;
  music::LoadMusic2(0);
  draw::FadeToBlack(8);
  boot::SceneScreenFade = 1.0;
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_PUZZLE;
  fastfunc::FastMemSet(&DAT_00a15c1c,0,0x58);
  piVar2 = loaders::g_NpcBuffer;
  DAT_00a15c24 = DAT_00a10924;
  DAT_00a15c28 = DAT_00a10924 + 0xd0000;
  fios::LoadAssetFromFile("rc1/ps3data/global/credits/credits[0].ps3",loaders::g_NpcBuffer,0x24);
  DAT_00a15c2c = *piVar2;
  DAT_00a15c30 = piVar2[1];
  DAT_00a15c34 = piVar2[2];
  DAT_00a15c38 = piVar2[3];
  DAT_00a15c3c = piVar2[4];
  DAT_00a15c40 = piVar2[5];
  DAT_00a15c44 = piVar2[6];
  DAT_00a15c48 = piVar2[7];
  DAT_00a15c4c = piVar2[8];
  fios::LoadAssetFromFile("rc1/ps3data/global/credits/credits[1].ps3",piVar2,0x24);
  DAT_00a15c50 = *piVar2;
  DAT_00a15c54 = piVar2[1];
  DAT_00a15c58 = piVar2[2];
  DAT_00a15c5c = piVar2[3];
  DAT_00a15c60 = piVar2[4];
  DAT_00a15c64 = piVar2[5];
  DAT_00a15c68 = piVar2[6];
  DAT_00a15c6c = piVar2[7];
  DAT_00a15c70 = piVar2[8];
  fios::LoadAssetFromFile("rc1/ps3data/global/credits/credits[0].vram",DAT_00a15c24,0xd0000);
  DAT_00a15c2c = DAT_00a15c2c + (DAT_00a15c24 - *(int *)(iVar1 + 0x4ac));
  music::LoadMusic2(1);
  idol::PRINT_m_LoadGameFile(DAT_00a15c28,"credits_images_ntsc");
  fios::LoadAssetFromFile("/rc1/ps3data/global/credits/credits[1].vram",DAT_00a15c28,0xd0000);
  DAT_00a15c50 = DAT_00a15c50 + (DAT_00a15c28 - *(int *)(iVar1 + 0x4ac));
  return;
}



//==== 00169b14  ns=update  size=0x6c
// sig: void mode_creditsUnInit(void)
// callers(0): 
// callees(4): 0006dad0 draw::FadeToBlack; 0011d9e0 music::music_StopLoad; 00174bdc vuchain::VU1_setBufSizeByLevel; 00174cf4 stub::STUB_00174cf4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::mode_creditsUnInit(void)

{
  stub::STUB_00174cf4(1);
  draw::FadeToBlack(0xc);
  music::music_StopLoad();
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_NORMAL;
  boot::SceneScreenFade = 0.0;
  vuchain::VU1_setBufSizeByLevel();
  return;
}



//==== 00169b88  ns=update  size=0x550
// sig: void UpdateCredits(void)
// callers(1): 000e0e60 main::startLevel
// callees(9): 0006dad0 draw::FadeToBlack; 0011d9e0 music::music_StopLoad; 0011dbcc music::LoadMusic2; 0015be68 sound::sound_Update; 00174bdc vuchain::VU1_setBufSizeByLevel; 00174cf4 stub::STUB_00174cf4; 005034c4 idol::PRINT_m_LoadGameFile; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 00653e7c: 'g_wad.game.credits_images_ntsc[image_id]' | 00653eac: 'rc1/ps3data/global/credits/credits[%d].ps3' | 00653edc: 'rc1/ps3data/global/credits/credits[%d].vram'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void update::UpdateCredits(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  char acStack_110 [128];
  
  music::LoadMusic2(0);
  bVar3 = g_JapaneseMode;
  boot::SceneScreenFade = boot::SceneScreenFade - 0.05;
  dVar5 = 0.0;
  if (boot::SceneScreenFade < 0.0) {
    boot::SceneScreenFade = 0.0;
  }
  if (DAT_00a15c1c == 0) {
    if (*(int *)(&DAT_0072075c + (int)((longlong)DAT_00a15c1e << 2)) + -0x24 <= (int)DAT_00a15c22) {
      if (Music != 0) {
        music::LoadMusic2(1);
      }
      if (g_JapaneseMode == false) {
        if ((bVar3 != false) && (DAT_00a15c1e == 0x29)) {
          stub::STUB_00174cf4(1);
          draw::FadeToBlack(0xc);
          music::music_StopLoad();
          boot::SceneScreenFade = (float)dVar5;
          g_CutscenePlaying = 1;
          g_gameMode = GAME_MODE_NORMAL;
          vuchain::VU1_setBufSizeByLevel();
          return;
        }
        if (0x2c < DAT_00a15c1e) {
          stub::STUB_00174cf4(1);
          draw::FadeToBlack(0xc);
          music::music_StopLoad();
          boot::SceneScreenFade = (float)dVar5;
          g_CutscenePlaying = 1;
          g_gameMode = GAME_MODE_NORMAL;
          vuchain::VU1_setBufSizeByLevel();
          return;
        }
        DAT_00a15c20 = -1;
        DAT_00a15c1c = 1;
      }
      else {
        if (0x24 < DAT_00a15c1e) {
          stub::STUB_00174cf4(1);
          draw::FadeToBlack(0xc);
          music::music_StopLoad();
          boot::SceneScreenFade = (float)dVar5;
          g_CutscenePlaying = 1;
          g_gameMode = GAME_MODE_NORMAL;
          vuchain::VU1_setBufSizeByLevel();
          return;
        }
        DAT_00a15c20 = -1;
        DAT_00a15c1c = 1;
      }
    }
  }
  else if ((DAT_00a15c1c == 1) &&
          (stub::STUB_00174cf4(1), iVar1 = DAT_00902e9c, 0x23 < DAT_00a15c20)) {
    if (g_JapaneseMode == false) {
      if ((bVar3 == false) && (DAT_00a15c1e == 0x11)) {
        DAT_00a15c1e = 0x1b;
        DAT_00a15c22 = 0x2238;
      }
      if ((bVar3 != false) && (DAT_00a15c1e == 8)) {
        DAT_00a15c1e = 0x11;
        DAT_00a15c22 = 0x1590;
      }
      if ((bVar3 == false) && (DAT_00a15c1e == 0x27)) {
        DAT_00a15c1e = 0x29;
        DAT_00a15c22 = 0x350c;
      }
    }
    DAT_00a15c1c = 0;
    DAT_00a15c20 = -1;
    iVar4 = (int)DAT_00a15c1e + ((int)DAT_00a15c1e / 0x14) * -0x14;
    DAT_00a15c1e = DAT_00a15c1e + 1;
    idol::PRINT_m_LoadGameFile(DAT_00a15c28,"g_wad.game.credits_images_ntsc[image_id]");
    piVar2 = DAT_00a10920;
    DAT_00a15c2c = DAT_00a15c50;
    DAT_00a15c30 = DAT_00a15c54;
    DAT_00a15c34 = DAT_00a15c58;
    DAT_00a15c38 = DAT_00a15c5c;
    DAT_00a15c3c = DAT_00a15c60;
    DAT_00a15c40 = DAT_00a15c64;
    DAT_00a15c44 = DAT_00a15c68;
    DAT_00a15c48 = DAT_00a15c6c;
    DAT_00a15c4c = DAT_00a15c70;
    libc::snprintf(acStack_110,"rc1/ps3data/global/credits/credits[%d].ps3",iVar4);
    fios::LoadAssetFromFile(acStack_110,piVar2,0x24);
    DAT_00a15c50 = *piVar2;
    DAT_00a15c54 = piVar2[1];
    DAT_00a15c58 = piVar2[2];
    DAT_00a15c5c = piVar2[3];
    DAT_00a15c60 = piVar2[4];
    DAT_00a15c64 = piVar2[5];
    DAT_00a15c68 = piVar2[6];
    DAT_00a15c6c = piVar2[7];
    DAT_00a15c70 = piVar2[8];
    libc::snprintf(acStack_110,"rc1/ps3data/global/credits/credits[%d].vram",iVar4);
    fios::LoadAssetFromFile(acStack_110,DAT_00a15c28,0xd0000);
    DAT_00a15c50 = DAT_00a15c50 + (DAT_00a15c28 - *(int *)(iVar1 + 0x4ac));
  }
  DAT_00a15c20 = DAT_00a15c20 + 1;
  DAT_00a15c22 = DAT_00a15c22 + 1;
  if ((g_buttonsPressedThisFrame & START) != 0) {
    stub::STUB_00174cf4(1);
    draw::FadeToBlack(0xc);
    music::music_StopLoad();
    boot::SceneScreenFade = (float)dVar5;
    g_CutscenePlaying = 1;
    g_gameMode = GAME_MODE_NORMAL;
    vuchain::VU1_setBufSizeByLevel();
  }
  sound::sound_Update();
  return;
}



//==== 0016a0d8  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_VENDOR(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_VENDOR(void)

{
  DAT_007387cc = 0x10000;
  return;
}



//==== 0016a108  ns=vendor  size=0x288
// sig: undefined ProjectBoxToScreenInt(void)
// callers(3): 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 00173b60 vendor::Vendor_DrawScreen
// callees(1): 00502758 fastfunc::FastDoubleToInt

void vendor::ProjectBoxToScreenInt
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  fStack00000034 = (float)param_1;
  fStack00000044 = (float)param_3;
  dVar6 = 1.0;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fVar1 = *(float *)(g_viewMtxPtr + 0x11c) * 1.0;
  fVar2 = 1.0 / (*(float *)(g_viewMtxPtr + 0xec) * fStack00000030 +
                 *(float *)(g_viewMtxPtr + 0xfc) * fStack00000034 +
                 *(float *)(g_viewMtxPtr + 0x10c) * fStack00000038 + fVar1);
  fVar1 = 1.0 / (*(float *)(g_viewMtxPtr + 0xec) * fStack00000040 +
                 *(float *)(g_viewMtxPtr + 0xfc) * fStack00000044 +
                 *(float *)(g_viewMtxPtr + 0x10c) * fStack00000048 + fVar1);
  dVar8 = (double)ViewContext.fontClipScale.x;
  fVar3 = *(float *)(g_viewMtxPtr + 0x110) * 1.0;
  fVar4 = *(float *)(g_viewMtxPtr + 0x114) * 1.0;
  dVar12 = (double)((*(float *)(g_viewMtxPtr + 0xe0) * fStack00000040 +
                     *(float *)(g_viewMtxPtr + 0xf0) * fStack00000044 +
                     *(float *)(g_viewMtxPtr + 0x100) * fStack00000048 + fVar3) * fVar1);
  dVar9 = (double)((*(float *)(g_viewMtxPtr + 0xe4) * fStack00000040 +
                    *(float *)(g_viewMtxPtr + 0xf4) * fStack00000044 +
                    *(float *)(g_viewMtxPtr + 0x104) * fStack00000048 + fVar4) * fVar1);
  dVar13 = dVar6;
  if (*(int *)(g_viewMtxPtr + 0xc) != 0) {
    dVar13 = 1.2999999523162842;
  }
  dVar7 = (double)ViewContext.fontClipScale.y;
  dVar13 = (double)((float)(dVar8 * dVar13) *
                   (*(float *)(g_viewMtxPtr + 0xe0) * fStack00000030 +
                    *(float *)(g_viewMtxPtr + 0xf0) * fStack00000034 +
                    *(float *)(g_viewMtxPtr + 0x100) * fStack00000038 + fVar3) * fVar2);
  dVar14 = (double)(float)(-(double)((*(float *)(g_viewMtxPtr + 0xe4) * fStack00000030 +
                                      *(float *)(g_viewMtxPtr + 0xf4) * fStack00000034 +
                                      *(float *)(g_viewMtxPtr + 0x104) * fStack00000038 + fVar4) *
                                    fVar2) * dVar7);
  if (*(int *)(g_viewMtxPtr + 0xc) != 0) {
    dVar6 = 1.2999999523162842;
  }
  dVar11 = (double)(float)(dVar8 * dVar6);
  dVar10 = -dVar9;
  dVar6 = 0.25;
  _fStack00000030 = param_1;
  _fStack00000038 = param_2;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  uVar5 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(float)(dVar13 * 0.25) + 256.0),
                     (double)(float)(dVar13 * 0.25),dVar8,dVar9);
  *param_7 = uVar5;
  uVar5 = fastfunc::FastDoubleToInt((double)((float)(dVar14 * dVar6) + 208.0));
  *param_8 = uVar5;
  uVar5 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(float)((double)(float)(dVar11 * dVar12) - dVar13) *
                                    dVar6));
  *param_5 = uVar5;
  uVar5 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(float)((double)(float)(dVar10 * dVar7) - dVar14) *
                                    dVar6));
  *param_6 = uVar5;
  return;
}



//==== 0016a3a8  ns=vendor  size=0x1fc
// sig: undefined ProjectBoxToScreen(void)
// callers(2): 00172c40 vendor::Vendor_HudUpdate; 00173690 vendor::Vendor_DrawMobyHighlight
// callees(0): 

void vendor::ProjectBoxToScreen
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               float *param_5,float *param_6,float *param_7,float *param_8)

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
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  fStack00000034 = (float)param_1;
  fStack00000044 = (float)param_3;
  fVar1 = 1.0;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fVar5 = *(float *)(g_viewMtxPtr + 0x11c) * 1.0;
  fVar2 = *(float *)(g_viewMtxPtr + 0xe0);
  fVar3 = *(float *)(g_viewMtxPtr + 0xf0);
  fVar4 = *(float *)(g_viewMtxPtr + 0x100);
  fVar6 = 1.0 / (*(float *)(g_viewMtxPtr + 0xec) * fStack00000030 +
                 *(float *)(g_viewMtxPtr + 0xfc) * fStack00000034 +
                 *(float *)(g_viewMtxPtr + 0x10c) * fStack00000038 + fVar5);
  fVar5 = 1.0 / (*(float *)(g_viewMtxPtr + 0xec) * fStack00000040 +
                 *(float *)(g_viewMtxPtr + 0xfc) * fStack00000044 +
                 *(float *)(g_viewMtxPtr + 0x10c) * fStack00000048 + fVar5);
  fVar7 = *(float *)(g_viewMtxPtr + 0x110) * 1.0;
  fVar8 = *(float *)(g_viewMtxPtr + 0x114) * 1.0;
  fVar9 = fVar1;
  if (*(int *)(g_viewMtxPtr + 0xc) != 0) {
    fVar9 = 1.3;
  }
  fVar9 = ViewContext.fontClipScale.x * fVar9 *
          (fVar2 * fStack00000030 + fVar3 * fStack00000034 + fVar4 * fStack00000038 + fVar7) * fVar6
  ;
  fVar6 = -((*(float *)(g_viewMtxPtr + 0xe4) * fStack00000030 +
             *(float *)(g_viewMtxPtr + 0xf4) * fStack00000034 +
             *(float *)(g_viewMtxPtr + 0x104) * fStack00000038 + fVar8) * fVar6) *
          ViewContext.fontClipScale.y;
  if (*(int *)(g_viewMtxPtr + 0xc) != 0) {
    fVar1 = 1.3;
  }
  fVar1 = ViewContext.fontClipScale.x * fVar1;
  fVar8 = -((*(float *)(g_viewMtxPtr + 0xe4) * fStack00000040 +
             *(float *)(g_viewMtxPtr + 0xf4) * fStack00000044 +
             *(float *)(g_viewMtxPtr + 0x104) * fStack00000048 + fVar8) * fVar5) *
          ViewContext.fontClipScale.y;
  *param_7 = fVar9 * 0.25 + 256.0;
  *param_8 = fVar6 * 0.25 + 208.0;
  *param_5 = (fVar1 * (fVar2 * fStack00000040 + fVar3 * fStack00000044 + fVar4 * fStack00000048 +
                      fVar7) * fVar5 - fVar9) * 0.25;
  *param_6 = (fVar8 - fVar6) * 0.25;
  return;
}



//==== 0016a5a4  ns=vendor  size=0xb4
// sig: undefined Vendor_ParseMobySeqs(void)
// callers(0): 
// callees(1): 000dcb64 loaders::ParseMobySeq

void vendor::Vendor_ParseMobySeqs(void)

{
  MobyClass *pClass;
  int *piVar1;
  int seq;
  
  seq = 0;
  pClass = MobyClasses[DAT_00a354cc];
  piVar1 = DAT_00e5a668;
  do {
    if (*piVar1 != 0) {
      *(int *)(&pClass->type + seq * 4) = (int)DAT_00e5a668 + *piVar1;
      loaders::ParseMobySeq(pClass,seq);
    }
    seq = seq + 1;
    piVar1 = piVar1 + 1;
  } while (seq < 0x10);
  return;
}



//==== 0016a658  ns=vendor  size=0x28c
// sig: undefined LoadVendorItems(void)
// callers(2): 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016cc50 vendor::PurchaseHandler
// callees(0): 
// strings: 0071fb2c: '������������'

void vendor::LoadVendorItems(char param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  for (iVar9 = 0; (iVar9 < 0xc && (g_purchasableVendorItems[iVar9] != -1)); iVar9 = iVar9 + 1) {
  }
  iVar8 = 0;
  g_VendorItemsCnt = 0;
  if (0 < iVar9) {
    do {
      if (g_purchasableVendorItems[iVar8] != -1) {
        uVar6 = (ulonglong)(byte)g_purchasableVendorItems[iVar8] & 0x3f;
        iVar5 = (int)uVar6;
        if ((g_purchasableVendorItems[iVar8] & 0x40U) == 0) {
          if (param_1 == '\0') {
            iVar2 = g_VendorItemsCnt * 0x10;
            iVar3 = g_VendorItemsCnt * 0x10;
            iVar4 = g_VendorItemsCnt * 0x10;
            *(int *)(&g_VendorItems + g_VendorItemsCnt * 0x10) = iVar5;
            g_VendorItemsCnt = g_VendorItemsCnt + 1;
            (&DAT_00e5a724)[iVar2] = 0;
            uVar1 = (&DAT_00735580)[iVar5 * 5];
            (&DAT_00e5a725)[iVar3] = 0;
            *(undefined4 *)(&DAT_00e5a72c + iVar4) = uVar1;
          }
        }
        else if (*(short *)((int)&DAT_00737d38 + (int)(uVar6 << 3) * 3) != 0) {
          iVar2 = g_VendorItemsCnt * 0x10;
          iVar3 = g_VendorItemsCnt * 0x10;
          *(int *)(&g_VendorItems + g_VendorItemsCnt * 0x10) = iVar5;
          (&DAT_00e5a724)[g_VendorItemsCnt * 0x10] = 1;
          g_VendorItemsCnt = g_VendorItemsCnt + 1;
          uVar1 = (&DAT_00735580)[iVar5 * 5];
          (&DAT_00e5a725)[iVar2] = 0;
          *(undefined4 *)(&DAT_00e5a72c + iVar3) = uVar1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar9);
  }
  lVar7 = 0;
  do {
    iVar9 = (int)lVar7;
    if (((&UnlockableItems.field0_0x0)[iVar9] != '\0') &&
       (*(short *)((int)&DAT_00737d38 + (int)(lVar7 << 3) * 3) != 0)) {
      iVar8 = 0;
      while( true ) {
        if ((g_VendorItemsCnt <= iVar8) || (*(int *)(&g_VendorItems + iVar8 * 0x10) == iVar9))
        break;
        iVar8 = iVar8 + 1;
      }
      if (g_VendorItemsCnt <= iVar8) {
        iVar8 = g_VendorItemsCnt * 0x10;
        iVar5 = g_VendorItemsCnt * 0x10;
        *(int *)(&g_VendorItems + g_VendorItemsCnt * 0x10) = iVar9;
        (&DAT_00e5a724)[g_VendorItemsCnt * 0x10] = 1;
        g_VendorItemsCnt = g_VendorItemsCnt + 1;
        uVar1 = *(undefined4 *)((int)&DAT_00735580 + (int)(lVar7 << 4) + (int)(lVar7 << 2));
        (&DAT_00e5a725)[iVar8] = 0;
        *(undefined4 *)(&DAT_00e5a72c + iVar5) = uVar1;
      }
    }
    lVar7 = (longlong)(iVar9 + 1);
  } while (iVar9 + 1 < 0x25);
  return;
}



//==== 0016a8f0  ns=vendor  size=0x740
// sig: undefined Spawn_Moby11_Vendor(undefined4 moby)
// callers(2): 000a30e0 hero::???_Hero_UpdateWeaponInput; 001bd450 mobyupdate_unsorted::UpdateMoby_11
// callees(21): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 0006dad0 draw::FadeToBlack; 0007b458 help::Help_Kill; 0007d5c0 hero::Hero_MakeInvisible; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback; 000d5b38 hud::Hud_ResetAllEntriesHidden; 000efa28 mobyfunc::CreateMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f31a8 mobyfunc::UpdateMobyTransform; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 0011ce20 music::music_Pause; 0015d12c sound::PlayMobySound; 0016a658 vendor::LoadVendorItems; 005001fc fastfunc::FastMemSet; 00502578 fastfunc::FastWrapRot; 00505d20 stub::STUB_00505d20; 005d0140 libc::memset; 0060bc8c FUN_0060bc8c
// strings: 00738840: '@s33' (raw)

void vendor::Spawn_Moby11_Vendor(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  if (DAT_00e5aa38 == '\0') {
    DAT_00e5a9d2 = *(int *)(g_viewMtxPtr + 0xc) == 0;
    DAT_00e5aa38 = '\x01';
    DAT_00e5aa40 = DAT_00e5a9d2;
  }
  DAT_00e5a830 = *(undefined4 *)(g_viewMtxPtr + 0x1a78);
  dVar7 = 0.0;
  *(undefined4 *)(g_viewMtxPtr + 0x1a78) = 0;
  fastfunc::FastMemSet(&g_OpenVendorState,0,0x1e0);
  fastfunc::FastMemSet(&DAT_00e5a990,0,0x40);
  if (moby == (MobyInstance *)0x0) {
    moby = mobyfunc::CreateMoby(VENDOR);
    fVar3 = GameCamera.posX;
    fVar2 = DAT_00738840;
    moby->drawDistance = 0x40;
    (moby->pos).x = fVar3 + fVar2;
    (moby->pos).y = GameCamera.posY;
    fVar3 = GameCamera.posZ;
    fVar2 = DAT_00738848;
    (moby->rotation).w = (float)dVar7;
    (moby->rotation).y = (float)dVar7;
    (moby->rotation).x = (float)dVar7;
    (moby->rotation).z = 3.1415927;
    (moby->pos).z = fVar3 - fVar2;
    mobyfunc::UpdateMobyTransform(moby);
    moby->state = '\x03';
    g_lastVendorWasPda = 1;
  }
  DAT_00e5a688 = 0;
  if (-1 < g_Language + -1) {
    DAT_00e5a688 = g_Language + -1;
  }
  DAT_00e5a694 = 0;
  DAT_00e5a6a8 = 0;
  DAT_00e5a6a0 = -1;
  DAT_00e5a6a4 = 0xffffffff;
  DAT_00e5a698 = 0xffffffff;
  DAT_00e5a944 = 0;
  DAT_00e5a94c = 0;
  g_VendorMenuState = 0;
  DAT_00e5a95c = 0;
  DAT_00e5a950 = (float)dVar7;
  FUN_0060bc8c(0x1d);
  music::music_Pause(0);
  stub::STUB_00505d20();
  LoadVendorItems((ulonglong)(LZCOUNT(g_lastVendorWasPda) << 0x20) >> 0x25 ^ 1);
  iVar4 = ((int)g_VendorItemsCnt >> 1) +
          (uint)((int)g_VendorItemsCnt < 0 && (g_VendorItemsCnt & 1) != 0);
  if ((int)g_VendorItemsCnt < 3) {
    iVar4 = 1;
  }
  DAT_00e5a6a8 = ((int)g_VendorItemsCnt >> 1) +
                 (uint)((int)g_VendorItemsCnt < 0 && (g_VendorItemsCnt & 1) != 0);
  g_VendorCursor = (iVar4 - DAT_00e5a6a8) * 0x28;
  hud::Hud_ResetAllEntriesHidden();
  DAT_00e5a6a4 = hud::RegisterHUDCallback
                           (0x12,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                            &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
  iVar4 = DAT_00e5a6a8 * 0x10;
  if ((&DAT_00e5a724)[iVar4] == '\x01') {
    DAT_00e5a6a0 = hud::RegisterHUDCallback
                             (0x30,*(int *)(&g_VendorItems + iVar4) + 60000,
                              &PTR_AmmoHud_Init_00705808,&PTR_HudEntry_UpdateCounter_007056c8,
                              &PTR_Draw_AmmoCounter_00705888,
                              (int *)(&currentAmmoArray.field0_0x0 +
                                     *(int *)(&g_VendorItems + iVar4)),
                              (uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar4) * 0xc])
    ;
  }
  g_CutscenePlaying = 1;
  DAT_00e5a664 = loaders::g_NpcBuffer + 0x100000;
  g_OpenVendorState = 0;
  DAT_00e5a658 = 0;
  DAT_00e5a660 = loaders::g_NpcBuffer;
  DAT_00e5a66c = moby;
  sound::PlayMobySound(3,0,moby);
  if (g_lastVendorWasPda == 0) {
    draw::FadeToBlack(4);
  }
  help::Help_Kill();
  boot::SceneScreenFade = 1.0;
  DAT_0095cf14 = (float)dVar7;
  g_gameMode = GAME_MODE_VENDOR;
  hero::TransitionMovement(100,1);
  DAT_0096bd8c = 1;
  hero::g_heroInvisible = 1;
  hero::Hero_MakeInvisible();
  if (g_lastVendorWasPda == 0) {
    mobyutil::MB_SetAnimationNoBlend(moby,2,0);
  }
  else {
    mobyutil::MB_SetAnimationNoBlend(moby,3,0);
  }
  bVar1 = g_lastVendorWasPda == 0;
  moby->unk58 = DAT_0071f408 * 0.5;
  if (bVar1) {
    DAT_00e5a6bc = (DAT_00e5a66c->transform).v0.w * DAT_00738840 +
                   (DAT_00e5a66c->transform).v1.w * DAT_00738844 +
                   (DAT_00e5a66c->transform).v2.w * DAT_00738848 + DAT_0073884c;
    DAT_00e5a6b0 = (DAT_00e5a66c->transform).v0.x * DAT_00738840 +
                   (DAT_00e5a66c->transform).v1.x * DAT_00738844 +
                   (DAT_00e5a66c->transform).v2.x * DAT_00738848 + (DAT_00e5a66c->pos).x;
    DAT_00e5a6b4 = (DAT_00e5a66c->transform).v0.y * DAT_00738840 +
                   (DAT_00e5a66c->transform).v1.y * DAT_00738844 +
                   (DAT_00e5a66c->transform).v2.y * DAT_00738848 + (DAT_00e5a66c->pos).y;
    DAT_00e5a6b8 = (DAT_00e5a66c->transform).v0.z * DAT_00738840 +
                   (DAT_00e5a66c->transform).v1.z * DAT_00738844 +
                   (DAT_00e5a66c->transform).v2.z * DAT_00738848 + (DAT_00e5a66c->pos).z;
    dVar6 = (double)fastfunc::FastWrapRot((DAT_00e5a66c->rotation).z,3.1415927);
    DAT_00e5a6c8 = (float)dVar6;
    camera::SetCameraPosition(&DAT_00e5a6b0,&DAT_00e5a6c0,1,0,0);
    camera::camera5::Camera_SetMobyDrivenTargetPos(&DAT_00e5a6b0);
    camera::camera5::Camera_SetMobyDrivenTargetRot((float *)&DAT_00e5a6c0);
  }
  iVar4 = 0;
  DAT_00a1de90 = (DAT_00e5a66c->transform).v0.x * DAT_007388b0 +
                 (DAT_00e5a66c->transform).v1.x * DAT_007388b4 +
                 (DAT_00e5a66c->transform).v2.x * DAT_007388b8;
  DAT_00a1de94 = (DAT_00e5a66c->transform).v0.y * DAT_007388b0 +
                 (DAT_00e5a66c->transform).v1.y * DAT_007388b4 +
                 (DAT_00e5a66c->transform).v2.y * DAT_007388b8;
  DAT_00a1de98 = (DAT_00e5a66c->transform).v0.z * DAT_007388b0 +
                 (DAT_00e5a66c->transform).v1.z * DAT_007388b4 +
                 (DAT_00e5a66c->transform).v2.z * DAT_007388b8;
  DAT_00a1de9c = (DAT_00e5a66c->transform).v0.w * DAT_007388b0 +
                 (DAT_00e5a66c->transform).v1.w * DAT_007388b4 +
                 (DAT_00e5a66c->transform).v2.w * DAT_007388b8 + DAT_007388bc;
  DAT_00a1de80 = DAT_007388c0;
  DAT_00a1de84 = DAT_007388c4;
  DAT_00a1de88 = DAT_007388c8;
  DAT_00a1de8c = DAT_007388cc;
  libc::memset(&DAT_00a1deb0,0,0x10);
  libc::memset(&DAT_00a1dea0,0,0x10);
  iVar5 = 0;
  do {
    if ((&DAT_00e5a841)[iVar5] == '\0') {
      mobyfunc::AttachManipulator(DAT_00e5a66c,iVar4 + 0x14,&DAT_00e5a840 + iVar5);
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x40;
  } while (iVar4 < 4);
  if ((int)g_VendorItemsCnt < 8) {
    DAT_00e5a8f4 = (float)(longlong)(int)((7 - g_VendorItemsCnt) * 0x681);
    DAT_00e5a934 = (float)(longlong)(int)((7 - g_VendorItemsCnt) * -0x681);
  }
  else {
    DAT_00e5a8f4 = (float)dVar7;
    DAT_00e5a934 = (float)dVar7;
  }
  DAT_00e5a9d0 = 0;
  DAT_00e5a9d1 = 0;
  DAT_00e5a874 = DAT_00e5a8f4;
  DAT_00e5a8b4 = DAT_00e5a934;
  return;
}



//==== 0016b038  ns=vendor  size=0x2ac
// sig: undefined Vendor_EndWeaponCutscene(void)
// callers(1): 0016da88 vendor::Vendor_PreUpdate
// callees(11): 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007d478 hero::Hero_MakeVisible; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000c8b28 hud::Hud_SetEntryValueById; 000d5bf8 hud::Hud_DecHideCounter; 000efb38 mobyfunc::DeleteMoby; 0011ce64 music::music_Unpause; 00502578 fastfunc::FastWrapRot; 00505d20 stub::STUB_00505d20; 0060bb90 FUN_0060bb90

void vendor::Vendor_EndWeaponCutscene(int param_1)

{
  bool bVar1;
  MobyInstance *moby;
  int id;
  double dVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [6];
  
  id = DAT_00e5a6a4;
  bVar1 = DAT_00e5a6a4 != -1;
  *(undefined4 *)(g_viewMtxPtr + 0x1a78) = DAT_00e5a830;
  if (bVar1) {
    hud::Hud_SetEntryValueById(id,0);
  }
  if (DAT_00e5a6a0 != -1) {
    hud::Hud_SetEntryValueById(DAT_00e5a6a0,0);
  }
  DAT_00e5a6a4 = 0xffffffff;
  DAT_00e5a6a0 = 0xffffffff;
  hud::Hud_DecHideCounter();
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_NORMAL;
  hero::TransitionMovement(0,1);
  hero::g_heroInvisible = 0;
  hero::Hero_MakeVisible();
  if (g_lastVendorWasPda == 0) {
    local_50 = (DAT_00e5a66c->transform).v0.x * DAT_00738850 +
               (DAT_00e5a66c->transform).v1.x * DAT_00738854 +
               (DAT_00e5a66c->transform).v2.x * DAT_00738858;
    local_44 = (DAT_00e5a66c->transform).v0.w * DAT_00738850 +
               (DAT_00e5a66c->transform).v1.w * DAT_00738854 +
               (DAT_00e5a66c->transform).v2.w * DAT_00738858 + DAT_0073885c;
    local_4c = (DAT_00e5a66c->transform).v0.y * DAT_00738850 +
               (DAT_00e5a66c->transform).v1.y * DAT_00738854 +
               (DAT_00e5a66c->transform).v2.y * DAT_00738858 + (DAT_00e5a66c->pos).y;
    local_40[0] = 0.0;
    local_48 = (DAT_00e5a66c->transform).v0.z * DAT_00738850 +
               (DAT_00e5a66c->transform).v1.z * DAT_00738854 +
               (DAT_00e5a66c->transform).v2.z * DAT_00738858 + (DAT_00e5a66c->pos).z;
    local_40[1] = 0.0;
    dVar2 = (double)fastfunc::FastWrapRot((DAT_00e5a66c->rotation).z,3.1415927);
    local_40[2] = (float)dVar2;
    if (param_1 == 0) {
      hero::Hero_Warp(&local_50,local_40,0,0);
      camera::camera5::Camera_DeactivateMobyDrivenCam(2);
    }
    else {
      hero::Hero_Warp(&local_50,local_40,0,1);
    }
  }
  moby = DAT_00e5a66c;
  DAT_00e5a66c->state = '\x01';
  if ((music::g_SpeechPlaying.status != 6) && (music::g_SpeechPlaying.status != 7)) {
    music::g_SpeechPlaying.status = 5;
  }
  if (g_lastVendorWasPda != 0) {
    mobyfunc::DeleteMoby(moby);
  }
  FUN_0060bb90(0x1d);
  music::music_Unpause();
  stub::STUB_00505d20();
  return;
}



//==== 0016b2f8  ns=vendor  size=0x34c
// sig: undefined Vendor_StartWeaponCutscene(void)
// callers(1): 0016da88 vendor::Vendor_PreUpdate
// callees(14): 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00086814 hero::Hero_KillGadget; 000e0528 loaders::LoadWeaponCutscene; 000e0654 loaders::ParseWeaponSceneChunk; 000e0854 loaders::LoadGadgetModel; 000ffb70 mobyutil::GetGroundZ; 0011c830 music::music_PlayPreseekedSpeech; 0015be68 sound::sound_Update; 00174bdc vuchain::VU1_setBufSizeByLevel; 00174cf4 stub::STUB_00174cf4; 005001fc fastfunc::FastMemSet; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 00503078 stub::STUB_00503078

int vendor::Vendor_StartWeaponCutscene(void)

{
  int iVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  
  camera::camera5::Camera_DeactivateMobyDrivenCam(2);
  iVar1 = DAT_00e5a66c;
  if ((music::g_SpeechPlaying.status != 6) && (music::g_SpeechPlaying.status != 7)) {
    music::g_SpeechPlaying.status = 5;
  }
  g_CutscenePlaying = 1;
  pfVar2 = (float *)(DAT_00e5a66c + 0xc0);
  *(undefined1 *)(DAT_00e5a66c + 0x20) = 1;
  g_OpenVendorState = 3;
  DAT_00e5a654 = 0;
  DAT_00e5a71c = *(float *)(iVar1 + 0xcc) * DAT_0073a2e0 + *(float *)(iVar1 + 0xdc) * DAT_0073a2e4 +
                 *(float *)(iVar1 + 0xec) * DAT_0073a2e8 + DAT_0073a2ec;
  DAT_00e5a710 = *pfVar2 * DAT_0073a2e0 + *(float *)(iVar1 + 0xd0) * DAT_0073a2e4 +
                 *(float *)(iVar1 + 0xe0) * DAT_0073a2e8 + *(float *)(iVar1 + 0x10);
  DAT_00e5a714 = *(float *)(iVar1 + 0xc4) * DAT_0073a2e0 + *(float *)(iVar1 + 0xd4) * DAT_0073a2e4 +
                 *(float *)(iVar1 + 0xe4) * DAT_0073a2e8 + *(float *)(iVar1 + 0x14);
  DAT_00e5a718 = *(float *)(iVar1 + 200) * DAT_0073a2e0 + *(float *)(iVar1 + 0xd8) * DAT_0073a2e4 +
                 *(float *)(iVar1 + 0xe8) * DAT_0073a2e8 + *(float *)(iVar1 + 0x18) + 2.0;
  dVar3 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&DAT_00e5a710,0);
  DAT_00e5a718 = (float)dVar3;
  dVar4 = 0.0;
  DAT_00e5a70c = 0;
  DAT_00e5a708 = 0.0;
  DAT_00e5a704 = 0;
  DAT_00e5a700 = 0;
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(DAT_00e5a66c + 0x48),3.1415927);
  DAT_00e5a708 = (float)dVar3;
  fastfunc::FastEulerToMtx(&DAT_00e5a6d0,&DAT_00e5a700);
  fastfunc::FastMemSet(&DAT_0095cd50,0,0x1c0);
  fastfunc::FastMemSet(&DAT_00a1be80,0,0x40);
  stub::STUB_00174cf4(1);
  vuchain::VU1_setBufSizeByLevel();
  DAT_00e5aa64 = DAT_00e5aa64 + -0x40000;
  DAT_0095cda8 = loaders::g_NpcBuffer;
  loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x80000;
  DAT_0095cf14 = (float)dVar4;
  boot::SceneScreenFade = (float)dVar4;
  iVar1 = *(int *)(&DAT_0073a240 + DAT_00e5a698 * 4);
  if ((g_CurrentWeapon != 0) && (DAT_00e5a698 != g_CurrentWeapon)) {
    hero::Hero_KillGadget(0,0);
  }
  DAT_0096bd98 = DAT_00e5a698;
  if (DAT_00e5a698 == 0x18) {
    DAT_0096bd98 = 0;
  }
  loaders::LoadGadgetModel((&DAT_00721010)[DAT_00e5a698 * 0x13],-1);
  loaders::LoadWeaponCutscene(iVar1);
  music::g_PendingSpeech = 0x2734;
  loaders::ParseWeaponSceneChunk(0);
  while (music::g_SpeechPlaying.status != 3) {
    sound::sound_Update();
    stub::STUB_00503078(0);
  }
  iVar1 = music::music_PlayPreseekedSpeech();
  return iVar1;
}



//==== 0016b650  ns=vendor  size=0x3e0
// sig: undefined StartGadgetPickupCutscene(void)
// callers(1): 00339b70 mobyupdate_unsorted::UpdateMoby_a_lot_15
// callees(20): 0007b458 help::Help_Kill; 0007d5c0 hero::Hero_MakeInvisible; 00086814 hero::Hero_KillGadget; 0008d7e8 hero::Hero_SetLightsFromMoby; 000b72b0 hero::TransitionMovement; 000d5b38 hud::Hud_ResetAllEntriesHidden; 000e0528 loaders::LoadWeaponCutscene; 000e0654 loaders::ParseWeaponSceneChunk; 000e0854 loaders::LoadGadgetModel; 000ffb70 mobyutil::GetGroundZ; 0011c830 music::music_PlayPreseekedSpeech; 0011ce20 music::music_Pause; 0015be68 sound::sound_Update; 00174bdc vuchain::VU1_setBufSizeByLevel; 005001fc fastfunc::FastMemSet; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 00503078 stub::STUB_00503078; 00505d20 stub::STUB_00505d20; 0060bc8c FUN_0060bc8c

int vendor::StartGadgetPickupCutscene(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  piVar1 = g_viewMtxPtr;
  if ((*(char *)((int)g_viewMtxPtr + 0x11) == -0x7f) && (((uint)g_viewMtxPtr[5] >> 1 & 1) == 0)) {
    (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x18))(g_viewMtxPtr);
  }
  (*(code *)**(undefined4 **)(*piVar1 + 0x18))(piVar1);
  piVar1[0x6a3] = piVar1[0x6a3] + 2;
  FUN_0060bc8c(0x1d);
  music::music_Pause(0);
  stub::STUB_00505d20();
  g_CutscenePlaying = 1;
  fastfunc::FastMemSet(&g_OpenVendorState,0,0x1e0);
  DAT_00e5a654 = 0;
  g_OpenVendorState = 3;
  g_gameMode = GAME_MODE_VENDOR;
  DAT_00e5a678 = param_1;
  hud::Hud_ResetAllEntriesHidden();
  help::Help_Kill();
  iVar2 = hero::TransitionMovement(100,1);
  DAT_0096bd8c = 1;
  hero::g_heroInvisible = 1;
  hero::Hero_MakeInvisible(iVar2);
  DAT_00e5a71c = *(float *)(param_1 + 0xcc) * DAT_0073a2f0 +
                 *(float *)(param_1 + 0xdc) * DAT_0073a2f4 +
                 *(float *)(param_1 + 0xec) * DAT_0073a2f8 + DAT_0073a2fc;
  DAT_00e5a710 = *(float *)(param_1 + 0xc0) * DAT_0073a2f0 +
                 *(float *)(param_1 + 0xd0) * DAT_0073a2f4 +
                 *(float *)(param_1 + 0xe0) * DAT_0073a2f8 + *(float *)(param_1 + 0x10);
  DAT_00e5a714 = *(float *)(param_1 + 0xc4) * DAT_0073a2f0 +
                 *(float *)(param_1 + 0xd4) * DAT_0073a2f4 +
                 *(float *)(param_1 + 0xe4) * DAT_0073a2f8 + *(float *)(param_1 + 0x14);
  DAT_00e5a718 = *(float *)(param_1 + 200) * DAT_0073a2f0 +
                 *(float *)(param_1 + 0xd8) * DAT_0073a2f4 +
                 *(float *)(param_1 + 0xe8) * DAT_0073a2f8 + *(float *)(param_1 + 0x18);
  dVar3 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&DAT_00e5a710,0);
  DAT_00e5a718 = (float)dVar3;
  dVar4 = 0.0;
  DAT_00e5a70c = 0;
  DAT_00e5a708 = 0.0;
  DAT_00e5a704 = 0;
  DAT_00e5a700 = 0;
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),-1.5707964);
  DAT_00e5a708 = (float)dVar3;
  fastfunc::FastEulerToMtx(&DAT_00e5a6d0,&DAT_00e5a700);
  fastfunc::FastMemSet(&DAT_0095cd50,0,0x1c0);
  fastfunc::FastMemSet(&DAT_00a1be80,0,0x40);
  vuchain::VU1_setBufSizeByLevel();
  DAT_00e5aa64 = DAT_00e5aa64 + -0x40000;
  DAT_0095cda8 = loaders::g_NpcBuffer;
  loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x200000;
  boot::SceneScreenFade = 1.0;
  DAT_0095cf14 = (float)dVar4;
  iVar2 = *(int *)(&DAT_0073a240 + (int)(param_2 << 2));
  hero::Hero_KillGadget(0,0);
  DAT_0096bd98 = (int)param_2;
  loaders::LoadGadgetModel((&DAT_00721010)[DAT_0096bd98 * 4 - (int)(param_2 * -0xf)],-1);
  loaders::LoadWeaponCutscene(iVar2);
  music::g_PendingSpeech = 0x2734;
  loaders::ParseWeaponSceneChunk(0);
  while (music::g_SpeechPlaying.status != 3) {
    sound::sound_Update();
    stub::STUB_00503078(0);
  }
  hero::Hero_SetLightsFromMoby(DAT_0095cecc,g_heroMobyPtr);
  iVar2 = music::music_PlayPreseekedSpeech();
  return iVar2;
}



//==== 0016ba38  ns=vendor  size=0x1e8
// sig: undefined Vendor_RestoreHero(void)
// callers(1): 0016da88 vendor::Vendor_PreUpdate
// callees(8): 0007d478 hero::Hero_MakeVisible; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000d5bf8 hud::Hud_DecHideCounter; 0011ce64 music::music_Unpause; 00502578 fastfunc::FastWrapRot; 00505d20 stub::STUB_00505d20; 0060bb90 FUN_0060bb90

void vendor::Vendor_RestoreHero(void)

{
  double dVar1;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [4];
  
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_NORMAL;
  hero::TransitionMovement(0,1);
  hero::g_heroInvisible = 0;
  hero::Hero_MakeVisible();
  local_40 = *(float *)(DAT_00e5a678 + 0xc0) * DAT_0073a2f0 +
             *(float *)(DAT_00e5a678 + 0xd0) * DAT_0073a2f4 +
             *(float *)(DAT_00e5a678 + 0xe0) * DAT_0073a2f8;
  local_34 = *(float *)(DAT_00e5a678 + 0xcc) * DAT_0073a2f0 +
             *(float *)(DAT_00e5a678 + 0xdc) * DAT_0073a2f4 +
             *(float *)(DAT_00e5a678 + 0xec) * DAT_0073a2f8 + DAT_0073a2fc;
  local_3c = *(float *)(DAT_00e5a678 + 0xc4) * DAT_0073a2f0 +
             *(float *)(DAT_00e5a678 + 0xd4) * DAT_0073a2f4 +
             *(float *)(DAT_00e5a678 + 0xe4) * DAT_0073a2f8 + *(float *)(DAT_00e5a678 + 0x14);
  local_30[0] = 0.0;
  local_38 = *(float *)(DAT_00e5a678 + 200) * DAT_0073a2f0 +
             *(float *)(DAT_00e5a678 + 0xd8) * DAT_0073a2f4 +
             *(float *)(DAT_00e5a678 + 0xe8) * DAT_0073a2f8 + *(float *)(DAT_00e5a678 + 0x18);
  local_30[1] = 0.0;
  dVar1 = (double)fastfunc::FastWrapRot(*(float *)(DAT_00e5a678 + 0x48),-1.5707964);
  local_30[2] = (float)dVar1;
  hero::Hero_Warp(&local_40,local_30,0,1);
  hud::Hud_DecHideCounter();
  if ((music::g_SpeechPlaying.status != 6) && (music::g_SpeechPlaying.status != 7)) {
    music::g_SpeechPlaying.status = 5;
  }
  FUN_0060bb90(0x1d);
  music::music_Unpause();
  stub::STUB_00505d20();
  return;
}



//==== 0016bc20  ns=vendor  size=0x128
// sig: void Vendor_SetScrollText(char * text)
// callers(4): 0016cc50 vendor::PurchaseHandler; 0016da88 vendor::Vendor_PreUpdate; 0016fc10 vendor::Vendor_DrawScrollText; 00172c40 vendor::Vendor_HudUpdate
// callees(2): 005001fc fastfunc::FastMemSet; 005cd2a8 libc::snprintf
// strings: 00653f54: '                  %s'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vendor::Vendor_SetScrollText(char *text)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (g_JapaneseMode) {
    fastfunc::FastMemSet(DAT_00e5a67c,0x20202020,0x24);
    iVar4 = 0;
    cVar1 = *text;
    pcVar3 = DAT_00e5a67c + 0x24;
    while (cVar1 != '\0') {
      bVar2 = text[iVar4];
      if (bVar2 == 0x62) {
        iVar4 = iVar4 + 1;
        *pcVar3 = '\x0f';
        pcVar3[1] = text[iVar4];
        pcVar3[2] = '\b';
        pcVar5 = pcVar3 + 3;
      }
      else if ((bVar2 < 8) || (pcVar5 = pcVar3, 0xf < bVar2)) {
        pcVar5 = pcVar3 + 1;
        *pcVar3 = text[iVar4];
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar5;
      cVar1 = text[iVar4];
    }
    *pcVar3 = '\0';
  }
  else {
    libc::snprintf(DAT_00e5a67c,"                  %s",text);
  }
  DAT_00e5a694 = 0;
  return;
}



//==== 0016bd58  ns=vendor  size=0x788
// sig: undefined Vendor_UpdateDude(void)
// callers(1): 0016da88 vendor::Vendor_PreUpdate
// callees(6): 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00113e88 mobyutil::MB_MayaFrameTrigger; 0011c830 music::music_PlayPreseekedSpeech
// strings: 0096c074: 'None'

void vendor::Vendor_UpdateDude(MobyInstance *param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  if (Cheats[0] == '\0') {
    if (DAT_00e5a991 != '\0') {
      mobyfunc::DetachManipulator(param_1,&DAT_00e5a990);
    }
  }
  else {
    if (DAT_00e5a991 == '\0') {
      mobyfunc::AttachManipulator(param_1,0,&DAT_00e5a990);
    }
    DAT_00e5a9b0 = 0x4017ae14;
    DAT_00e5a9b4 = 0x4017ae14;
    DAT_00e5a9b8 = 0x4017ae14;
  }
  bVar1 = param_1->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if ((int)(animationSpeed * 600.5) < DAT_00e5a684) {
          lVar2 = mobyutil::MB_randInt(2);
          DAT_00e5a68c = (int)lVar2;
          music::g_PendingSpeech = DAT_00e5a68c * 2 + (int)(lVar2 << 4) + DAT_00e5a688 + 0x2716;
          DAT_00e5a9d4 = '\x01';
          DAT_00e5a9d5 = '\0';
          if (param_1->animationId != '\x02') {
            mobyutil::MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 18.5));
          }
          param_1->state = '\f';
          DAT_00e5a684 = 0;
        }
        DAT_00e5a684 = DAT_00e5a684 + 1;
      }
    }
    else if (bVar1 < 3) {
      if ((int)(animationSpeed * 600.5) < DAT_00e5a684) {
        if (param_1->animationId != '\x03') {
          mobyutil::MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 18.5));
        }
        param_1->state = '\x03';
        DAT_00e5a684 = 0;
      }
      DAT_00e5a684 = DAT_00e5a684 + 1;
    }
    else if (bVar1 < 4) {
      if ((param_1->field43_0x70 & 2U) != 0) {
        if (param_1->animationId != '\0') {
          mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 18.5));
        }
        param_1->state = '\0';
      }
    }
    else {
      iVar3 = mobyutil::MB_MayaFrameTrigger
                        ((float)(longlong)*(int *)(&DAT_0073a300 + DAT_00e5a68c * 4),param_1);
      if ((iVar3 != 0) && (DAT_00e5a9d5 != '\0')) {
        DAT_00e5a9d5 = '\0';
        music::music_PlayPreseekedSpeech();
      }
      if ((param_1->field43_0x70 & 2U) != 0) {
        if (param_1->animationId != '\x02') {
          mobyutil::MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 18.5));
        }
        param_1->state = '\x02';
        DAT_00e5a684 = 0;
      }
    }
  }
  else if (bVar1 == 0xc) {
    if ((music::g_SpeechPlaying.status == 3) && (DAT_00e5a9d4 != '\0')) {
      DAT_00e5a9d4 = '\0';
      DAT_00e5a9d5 = '\x01';
      uVar4 = DAT_00e5a68c * 3 + 5;
      if (param_1->animationId != uVar4) {
        mobyutil::MB_SetAnimation(param_1,uVar4,0,(int)(animationSpeed * 18.5));
      }
      param_1->state = '\x05';
    }
  }
  else if (bVar1 == 0xb) {
    if ((music::g_SpeechPlaying.status == 3) && (DAT_00e5a9d4 != '\0')) {
      DAT_00e5a9d4 = '\0';
      DAT_00e5a9d5 = '\x01';
      uVar4 = DAT_00e5a68c * 3 + 6;
      if (param_1->animationId != uVar4) {
        mobyutil::MB_SetAnimation(param_1,uVar4,0,(int)(animationSpeed * 18.5));
      }
      param_1->state = '\x06';
    }
  }
  else if (bVar1 == 10) {
    if ((music::g_SpeechPlaying.status == 3) && (DAT_00e5a9d4 != '\0')) {
      DAT_00e5a9d4 = '\0';
      DAT_00e5a9d5 = '\x01';
    }
    if ((param_1->field43_0x70 & 2U) != 0) {
      uVar4 = DAT_00e5a68c * 3 + 4;
      if (param_1->animationId != uVar4) {
        mobyutil::MB_SetAnimation(param_1,uVar4,0,(int)(animationSpeed * 12.5));
      }
      param_1->state = '\x04';
    }
  }
  else if (bVar1 == 6) {
    iVar3 = mobyutil::MB_MayaFrameTrigger
                      ((float)(longlong)*(int *)(&DAT_0073a310 + DAT_00e5a68c * 4),param_1);
    if ((iVar3 != 0) && (DAT_00e5a9d5 != '\0')) {
      DAT_00e5a9d5 = '\0';
      music::music_PlayPreseekedSpeech();
    }
    if ((param_1->field43_0x70 & 2U) != 0) {
      if (param_1->animationId != '\x02') {
        mobyutil::MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 18.5));
      }
      param_1->state = '\x02';
      DAT_00e5a684 = 0;
    }
  }
  else if (bVar1 == 5) {
    iVar3 = mobyutil::MB_MayaFrameTrigger
                      ((float)(longlong)*(int *)(&DAT_0073a308 + DAT_00e5a68c * 4),param_1);
    if ((iVar3 != 0) && (DAT_00e5a9d5 != '\0')) {
      DAT_00e5a9d5 = '\0';
      music::music_PlayPreseekedSpeech();
    }
    if ((param_1->field43_0x70 & 2U) != 0) {
      if (param_1->animationId != '\x02') {
        mobyutil::MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 18.5));
      }
      param_1->state = '\x02';
      DAT_00e5a684 = 0;
    }
  }
  return;
}



//==== 0016c4e8  ns=vendor  size=0x1d0
// sig: void Vendor_PlayDudeSpeech(int event)
// callers(2): 0016cc50 vendor::PurchaseHandler; 0016da88 vendor::Vendor_PreUpdate
// callees(2): 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vendor::Vendor_PlayDudeSpeech(int event)

{
  int iVar1;
  int iVar3;
  longlong lVar2;
  
  iVar1 = DAT_00e5a674;
  if (DAT_00e5a9d0 != '\0') {
    if (event < 1) {
      if (((-1 < event) &&
          (((*(char *)(DAT_00e5a674 + 0x20) == '\x02' || (*(char *)(DAT_00e5a674 + 0x20) == '\0'))
           && (iVar3 = mobyutil::MB_randInt(4), iVar3 == 0)))) &&
         (DAT_00e5a680 + (int)(animationSpeed * 360.5) < DAT_0159c330)) {
        DAT_00e5a680 = DAT_0159c330;
        lVar2 = mobyutil::MB_randInt(2);
        DAT_00e5a68c = (int)lVar2;
        music::g_PendingSpeech = DAT_00e5a68c * 2 + (int)(lVar2 << 4) + DAT_00e5a688 + 0x271c;
        DAT_00e5a9d4 = 1;
        DAT_00e5a9d5 = 0;
        *(undefined1 *)(iVar1 + 0x20) = 0xb;
      }
    }
    else if (event < 2) {
      lVar2 = mobyutil::MB_randInt(2);
      DAT_00e5a68c = (int)lVar2;
      music::g_PendingSpeech = DAT_00e5a68c * 2 + (int)(lVar2 << 4) + DAT_00e5a688 + 10000;
      DAT_00e5a9d4 = 1;
      DAT_00e5a9d5 = 0;
      if (*(char *)(iVar1 + 0x53) != '\x01') {
        mobyutil::MB_SetAnimation(iVar1,1,0,10);
      }
      *(undefined1 *)(iVar1 + 0x20) = 10;
    }
    else if ((event < 4) &&
            ((*(char *)(DAT_00e5a674 + 0x20) == '\x02' || (*(char *)(DAT_00e5a674 + 0x20) == '\0')))
            ) {
      DAT_00e5a684 = 0;
    }
  }
  return;
}



//==== 0016c6b8  ns=vendor  size=0x590
// sig: undefined Vendor_SpawnPreviewMoby(void)
// callers(3): 0016cc50 vendor::PurchaseHandler; 0016da88 vendor::Vendor_PreUpdate; 001744f0 vendor::Vendor_PostUpdate
// callees(6): 000e0854 loaders::LoadGadgetModel; 000ef74c mobyfunc::UpdateMobyFrameData; 000ef810 mobyfunc::InitMobyInstance; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 000fdcf0 mobyutil::MB_SetAnimationNoBlend

void vendor::Vendor_SpawnPreviewMoby(void)

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
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  MobyInstance *pMVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  undefined4 oClass;
  
  piVar16 = g_viewMtxPtr;
  iVar20 = g_viewMtxPtr[3];
  if ((*(char *)((int)g_viewMtxPtr + 0x11) == -0x7f) && (((uint)g_viewMtxPtr[5] >> 1 & 1) == 0)) {
    (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x18))(g_viewMtxPtr);
  }
  (*(code *)**(undefined4 **)(*piVar16 + 0x18))(piVar16);
  piVar16[0x6a3] = piVar16[0x6a3] + 2;
  oClass = (&DAT_00721010)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x13];
  if (*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) == 0x18) {
    oClass = 0x1df;
  }
  else {
    loaders::LoadGadgetModel
              ((&DAT_00721010)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x13],-1);
  }
  mobyfunc::InitMobyInstance((MobyInstance *)(DAT_00e5a670 + 0x100),oClass);
  iVar11 = DAT_00e5a670;
  *(undefined2 *)(DAT_00e5a670 + 0x132) = 0x40;
  *(undefined4 *)(iVar11 + 0x194) = 0;
  iVar18 = DAT_00e5a670;
  iVar17 = DAT_00e5a66c;
  fVar15 = DAT_0073887c;
  iVar11 = DAT_00e5a6a8 * 0x10;
  iVar14 = *(int *)(&g_VendorItems + iVar11) * 0x30;
  fVar10 = DAT_00738870 + *(float *)(iVar14 + 0x738b40);
  fVar12 = DAT_00738874 + *(float *)(iVar14 + 0x738b44);
  fVar13 = DAT_00738878 + *(float *)(iVar14 + 0x738b48);
  if (iVar20 == 0) {
    iVar20 = *(int *)(&g_VendorItems + iVar11) * 0x10;
    fVar10 = fVar10 + *(float *)(iVar20 + 0x7388d0);
    fVar12 = fVar12 + *(float *)(iVar20 + 0x7388d4);
    fVar13 = fVar13 + *(float *)(iVar20 + 0x7388d8);
  }
  if ((&DAT_00e5a724)[iVar11] == '\0') {
    fVar13 = fVar13 + *(float *)(&DAT_00738b4c + iVar14);
    if (UnlockableItems.persuader != '\0') {
      fVar13 = fVar13 + *(float *)(&DAT_00738b4c + iVar14);
    }
  }
  pfVar22 = (float *)(DAT_00e5a66c + 0x10);
  fVar1 = *(float *)(DAT_00e5a66c + 0xc4);
  fVar2 = *(float *)(DAT_00e5a66c + 0xd4);
  fVar3 = *(float *)(DAT_00e5a66c + 0xcc);
  fVar4 = *(float *)(DAT_00e5a66c + 0xdc);
  fVar5 = *(float *)(DAT_00e5a66c + 200);
  fVar6 = *(float *)(DAT_00e5a66c + 0xd8);
  fVar7 = *(float *)(DAT_00e5a66c + 0xe4);
  fVar8 = *(float *)(DAT_00e5a66c + 0xec);
  fVar9 = *(float *)(DAT_00e5a66c + 0xe8);
  pfVar21 = (float *)(DAT_00e5a670 + 0x110);
  *pfVar21 = *(float *)(DAT_00e5a66c + 0xc0) * fVar10 + *(float *)(DAT_00e5a66c + 0xd0) * fVar12 +
             *(float *)(DAT_00e5a66c + 0xe0) * fVar13;
  *(float *)(iVar18 + 0x114) = fVar1 * fVar10 + fVar2 * fVar12 + fVar7 * fVar13;
  *(float *)(iVar18 + 0x118) = fVar5 * fVar10 + fVar6 * fVar12 + fVar9 * fVar13;
  *(float *)(iVar18 + 0x11c) = fVar3 * fVar10 + fVar4 * fVar12 + fVar8 * fVar13 + fVar15;
  *pfVar21 = *pfVar21 + *pfVar22;
  *(float *)(iVar18 + 0x114) = *(float *)(iVar18 + 0x114) + *(float *)(iVar17 + 0x14);
  fVar10 = *(float *)(iVar17 + 0x18);
  *(undefined4 *)(iVar18 + 0x11c) = *(undefined4 *)(iVar18 + 0x11c);
  *(float *)(iVar18 + 0x118) = *(float *)(iVar18 + 0x118) + fVar10;
  *(undefined4 *)(iVar18 + 0x140) =
       *(undefined4 *)(&DAT_00738b30 + *(int *)(&g_VendorItems + iVar11) * 0x30);
  *(undefined4 *)(iVar18 + 0x144) =
       *(undefined4 *)(&DAT_00738b34 + *(int *)(&g_VendorItems + iVar11) * 0x30);
  *(float *)(iVar18 + 0x148) =
       *(float *)(&DAT_00738b38 + *(int *)(&g_VendorItems + iVar11) * 0x30) +
       *(float *)(iVar17 + 0x48);
  mobyfunc::UpdateMobyTransform((MobyInstance *)(iVar18 + 0x100));
  mobyutil::MB_SetAnimationNoBlend(DAT_00e5a670 + 0x100,0,0);
  if (1 < *(byte *)(*(int *)(DAT_00e5a670 + 0x124) + 0xc)) {
    mobyutil::MB_SetAnimationNoBlend(DAT_00e5a670 + 0x100,1,0);
  }
  iVar20 = DAT_00e5a670;
  pMVar19 = (MobyInstance *)(DAT_00e5a670 + 0x100);
  *(undefined4 *)(DAT_00e5a670 + 0x158) = 0;
  *(undefined1 *)(iVar20 + 0x151) = 0;
  mobyfunc::UpdateMobyFrameData(pMVar19);
  mobyutil::MB_SetLights(DAT_00e5a670 + 0x100,0x202020,0xe,0xe,0);
  if (*(int *)(&DAT_00739240 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x40) != 0) {
    mobyfunc::InitMobyInstance
              ((MobyInstance *)(DAT_00e5a670 + 0x200),
               *(undefined4 *)
                (&DAT_00739240 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x40));
    pMVar19 = (MobyInstance *)(DAT_00e5a670 + 0x200);
    *(undefined2 *)(DAT_00e5a670 + 0x232) = 0x40;
    mobyfunc::UpdateMobyTransform(pMVar19);
    mobyutil::MB_SetLights(DAT_00e5a670 + 0x200,0x202020,0xe,0xe,0);
  }
  mobyfunc::InitMobyInstance((MobyInstance *)(DAT_00e5a670 + 0x300),oClass);
  iVar20 = DAT_00e5a670;
  pMVar19 = (MobyInstance *)(DAT_00e5a670 + 0x300);
  *(undefined2 *)(DAT_00e5a670 + 0x332) = 0x40;
  *(undefined4 *)(iVar20 + 0x394) = 0;
  mobyfunc::UpdateMobyTransform(pMVar19);
  mobyutil::MB_SetAnimationNoBlend(DAT_00e5a670 + 0x300,0,0);
  if (1 < *(byte *)(*(int *)(DAT_00e5a670 + 0x324) + 0xc)) {
    mobyutil::MB_SetAnimationNoBlend(DAT_00e5a670 + 0x300,1,0);
  }
  iVar20 = DAT_00e5a670;
  pMVar19 = (MobyInstance *)(DAT_00e5a670 + 0x300);
  *(undefined4 *)(DAT_00e5a670 + 0x358) = 0;
  *(undefined1 *)(iVar20 + 0x351) = 0;
  mobyfunc::UpdateMobyFrameData(pMVar19);
  iVar20 = DAT_00e5a670 + 0x300;
  *(ushort *)(DAT_00e5a670 + 0x334) = *(ushort *)(DAT_00e5a670 + 0x334) | 0x100;
  mobyutil::MB_SetLights(iVar20,0x202020,0xe,0xe,0);
  DAT_00e5a9d3 = 0;
  return;
}



//==== 0016cc50  ns=vendor  size=0xde8
// sig: undefined PurchaseHandler(void)
// callers(1): 0016da88 vendor::Vendor_PreUpdate
// callees(17): 0007b740 help::help_msg_string_by_index; 000aa2e8 hero::hero_GiveAmmo; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 000ef74c mobyfunc::UpdateMobyFrameData; 000ef810 mobyfunc::InitMobyInstance; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 00112e18 mobyutil::MB_UnlockItem; 0015d12c sound::PlayMobySound; 0016a658 vendor::LoadVendorItems; 0016bc20 vendor::Vendor_SetScrollText; 0016c4e8 vendor::Vendor_PlayDudeSpeech; 0016c6b8 vendor::Vendor_SpawnPreviewMoby

void vendor::PurchaseHandler(void)

{
  float fVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  MobyInstance *pMVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  
  if (g_VendorMenuState != 0) {
    if (g_VendorMenuState == 1) {
      DAT_00e5aa41 = '\0';
      DAT_00e5a95c = 1;
      mobyfunc::InitMobyInstance((MobyInstance *)(DAT_00e5a670 + 0x400),0x471);
      iVar10 = DAT_00e5a670;
      pMVar5 = DAT_00e5a66c;
      *(undefined2 *)(DAT_00e5a670 + 0x432) = 0x40;
      dVar11 = 0.0;
      *(float *)(iVar10 + 0x410) = (pMVar5->pos).x + 0.0;
      *(float *)(iVar10 + 0x414) = (pMVar5->pos).y + 0.0;
      fVar1 = (pMVar5->pos).z;
      *(undefined4 *)(iVar10 + 0x41c) = 0;
      *(float *)(iVar10 + 0x418) = fVar1 + 0.0;
      *(f32 *)(iVar10 + 0x440) = (pMVar5->rotation).x;
      *(f32 *)(iVar10 + 0x444) = (pMVar5->rotation).y;
      *(f32 *)(iVar10 + 0x448) = (pMVar5->rotation).z;
      *(f32 *)(iVar10 + 0x44c) = (pMVar5->rotation).w;
      mobyutil::MB_SetAnimationNoBlend(iVar10 + 0x400,0,0);
      iVar10 = DAT_00e5a670;
      if (*(byte *)(*(int *)(*(int *)(DAT_00e5a670 + 0x424) + 0x48) + 0x10) < 2) {
        pMVar5 = (MobyInstance *)(DAT_00e5a670 + 0x400);
        *(float *)(DAT_00e5a670 + 0x458) = (float)dVar11;
        *(undefined1 *)(iVar10 + 0x451) = 0;
        mobyfunc::UpdateMobyFrameData(pMVar5);
      }
      mobyfunc::UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
      mobyutil::MB_SetLights(DAT_00e5a670 + 0x400,&DAT_00101010,0xe,0xe,0);
      iVar10 = DAT_00e5a6a8 * 0x10;
      DAT_00e5aa42 = '\0';
      if (((&DAT_00e5a724)[iVar10] == '\x01') &&
         ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar10) * 0xc] <=
          (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar10)])) {
        sound::PlayMobySound(2,0,DAT_00e5a66c);
      }
      else if ((&DAT_00e5a724)[iVar10] == '\x01') {
        if (g_lastVendorWasPda == 0) {
          uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar10) * 0xc];
        }
        else {
          uVar2 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar10) * 0x18);
        }
        if (g_boltCount < (int)(uint)uVar2) {
          sound::PlayMobySound(2,0,DAT_00e5a66c);
        }
        else {
          DAT_00e5aa42 = '\x01';
        }
      }
      else {
        if (UnlockableItems.persuader == '\0') {
          iVar10 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar10) * 0x18);
        }
        else {
          iVar10 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar10) * 0x18);
        }
        if (g_boltCount < iVar10) {
          sound::PlayMobySound(2,0,DAT_00e5a66c);
        }
      }
      g_VendorMenuState = 2;
    }
    else if (g_VendorMenuState == 2) {
      if (DAT_00e5aa42 == '\x01') {
        uVar9 = 0;
        if ((DAT_00964b00 & 0x8000) != 0) {
          uVar9 = DAT_00e5a954 + 1;
        }
        uVar6 = 0;
        if ((DAT_00964b00 & 0x2000) != 0) {
          uVar6 = DAT_00e5a958 + 1;
        }
        DAT_00e5a954 = uVar9;
        DAT_00e5a958 = uVar6;
        if ((((pad_pressedButton & 0x8000) != 0) ||
            (((0xf < (int)uVar9 && ((uVar9 & 7) == 0)) || (0x2f < (int)uVar9)))) &&
           (1 < DAT_00e5a95c)) {
          DAT_00e5a95c = DAT_00e5a95c + -1;
          if (((uVar9 & 3) == 0) || ((int)uVar9 < 0x10)) {
            sound::PlayMobySound(1,0,DAT_00e5a66c);
          }
        }
        if ((((pad_pressedButton & 0x2000) != 0) ||
            ((0xf < (int)DAT_00e5a958 && ((DAT_00e5a958 & 7) == 0)))) || (0x2f < (int)DAT_00e5a958))
        {
          if (g_lastVendorWasPda == 0) {
            sVar3 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
          }
          else {
            sVar3 = *(short *)(&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18
                              );
          }
          if (sVar3 != 0) {
            if (g_lastVendorWasPda == 0) {
              uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
            }
            else {
              uVar2 = *(ushort *)
                       (&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
            }
            iVar7 = (uint)(ushort)(&DAT_00737d3e)
                                  [*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc] -
                    (&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10)];
            iVar10 = g_boltCount / (int)(uint)uVar2;
            if (iVar7 < g_boltCount / (int)(uint)uVar2) {
              iVar10 = iVar7;
            }
            if (DAT_00e5a95c < iVar10) {
              DAT_00e5a95c = DAT_00e5a95c + 1;
              if (((DAT_00e5a958 & 3) == 0) || ((int)DAT_00e5a958 < 0x10)) {
                sound::PlayMobySound(1,0,DAT_00e5a66c);
              }
            }
          }
        }
      }
      if ((pad_pressedButton & 0x10) == 0) {
        if ((pad_pressedButton & pad_ConfirmButtonMask) == 0) {
          mobyfunc::UpdateMobyAnimFrame(DAT_00e5a670 + 0x400);
          if ((*(char *)(DAT_00e5a670 + 0x453) == '\0') &&
             ((*(byte *)(DAT_00e5a670 + 0x470) & 2) != 0)) {
            mobyutil::MB_SetAnimation(DAT_00e5a670 + 0x400,1,0,1);
          }
          mobyfunc::UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
        }
        else {
          g_VendorMenuState = 3;
          DAT_00e5aa41 = '\x01';
          mobyutil::MB_SetAnimation
                    (DAT_00e5a670 + 0x400,0,
                     (ulonglong)*(byte *)(*(int *)(*(int *)(DAT_00e5a670 + 0x424) + 0x48) + 0x10) -
                     1,8);
          mobyfunc::UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
        }
      }
      else {
        g_VendorMenuState = 3;
        DAT_00e5aa41 = '\0';
        mobyutil::MB_SetAnimation
                  (DAT_00e5a670 + 0x400,0,
                   (ulonglong)*(byte *)(*(int *)(*(int *)(DAT_00e5a670 + 0x424) + 0x48) + 0x10) - 1,
                   1);
        mobyfunc::UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
      }
    }
    else if (g_VendorMenuState == 3) {
      mobyfunc::UpdateMobyAnimFrame(DAT_00e5a670 + 0x400);
      if ((*(char *)(DAT_00e5a670 + 0x453) == '\0') && ((*(byte *)(DAT_00e5a670 + 0x470) & 2) != 0))
      {
        *(undefined4 *)(DAT_00e5a670 + 0x458) = 0xbf800000;
        g_VendorMenuState = 4;
      }
      mobyfunc::UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
    }
    else if (g_VendorMenuState == 4) {
      mobyfunc::UpdateMobyAnimFrame(DAT_00e5a670 + 0x400);
      iVar10 = DAT_00e5a95c;
      if ((*(byte *)(DAT_00e5a670 + 0x470) & 2) != 0) {
        if (DAT_00e5aa41 == '\x01') {
          iVar7 = DAT_00e5a6a8 * 0x10;
          if ((&DAT_00e5a724)[iVar7] == '\x01') {
            if (g_lastVendorWasPda == 0) {
              uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar7) * 0xc];
            }
            else {
              uVar2 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar7) * 0x18);
            }
            iVar7 = (uint)uVar2 * DAT_00e5a95c;
          }
          else if (UnlockableItems.persuader == '\0') {
            iVar7 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar7) * 0x18);
          }
          else {
            iVar7 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar7) * 0x18);
          }
          if ((g_boltCount < iVar7) &&
             ((int)(uint)(ushort)(&DAT_00737d3e)
                                 [*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc] <=
              (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10)]))
          {
            sound::PlayMobySound(0,0,DAT_00e5a66c);
          }
          else {
            iVar7 = DAT_00e5a6a8 * 0x10;
            if ((&DAT_00e5a724)[iVar7] == '\x01') {
              iVar4 = *(int *)(&g_VendorItems + iVar7);
              if ((int)(&currentAmmoArray.field0_0x0)[iVar4] <
                  (int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar7) * 0xc]) {
                if (g_lastVendorWasPda == 0) {
                  uVar2 = (&DAT_00737d38)[iVar4 * 0xc];
                }
                else {
                  uVar2 = *(ushort *)(&DAT_00737d3a + iVar4 * 0x18);
                }
                if (g_boltCount < (int)((uint)uVar2 * DAT_00e5a95c)) {
                  pcVar8 = (char *)help::help_msg_string_by_index(STR_YOU_CANT_AFFORD_THAT);
                  Vendor_SetScrollText(pcVar8);
                  sound::PlayMobySound(0,0,DAT_00e5a66c);
                }
                else {
                  if ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar7) * 0xc] <
                      (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar7)]) {
                    uVar9 = (uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar7) * 0xc];
                  }
                  else {
                    uVar9 = (&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar7)];
                  }
                  iVar7 = *(int *)(&g_VendorItems + iVar7);
                  (&currentAmmoArray.field0_0x0)[iVar7] = uVar9;
                  iVar7 = hero::hero_GiveAmmo(iVar7,iVar10);
                  iVar10 = iVar10 - iVar7;
                  if (g_lastVendorWasPda == 0) {
                    uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
                  }
                  else {
                    uVar2 = *(ushort *)
                             (&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18)
                    ;
                  }
                  *(int *)(&DAT_00a0f51c + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 4) =
                       *(int *)(&DAT_00a0f51c + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 4)
                       + iVar10;
                  Vendor_PlayDudeSpeech(3);
                  g_boltCount = g_boltCount - (uint)uVar2 * iVar10;
                  LoadVendorItems((ulonglong)(LZCOUNT(g_lastVendorWasPda) << 0x20) >> 0x25 ^ 1);
                  pcVar8 = (char *)help::help_msg_string_by_index(STR_THANK_YOU);
                  Vendor_SetScrollText(pcVar8);
                  sound::PlayMobySound(7,0,DAT_00e5a66c);
                }
              }
              else {
                sound::PlayMobySound(0,0,DAT_00e5a66c);
              }
            }
            else {
              if (UnlockableItems.persuader == '\0') {
                iVar10 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar7) * 0x18);
              }
              else {
                iVar10 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar7) * 0x18);
              }
              if (g_boltCount < iVar10) {
                pcVar8 = (char *)help::help_msg_string_by_index(STR_YOU_CANT_AFFORD_THAT);
                Vendor_SetScrollText(pcVar8);
                sound::PlayMobySound(0,0,DAT_00e5a66c);
              }
              else {
                Vendor_PlayDudeSpeech(2);
                mobyutil::MB_UnlockItem(*(undefined4 *)(&g_VendorItems + DAT_00e5a6a8 * 0x10),1);
                DAT_00e5a698 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
                if (DAT_00e5a698 == 0x18) {
                  DAT_0096bcd5 = 1;
                }
                g_boltCount = g_boltCount - iVar10;
                LoadVendorItems((ulonglong)(LZCOUNT(g_lastVendorWasPda) << 0x20) >> 0x25 ^ 1);
                if (DAT_00e5a6a0 != -1) {
                  hud::Hud_SetEntryValueById(DAT_00e5a6a0,0);
                }
                DAT_00e5a6a0 = -1;
                if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
                  iVar10 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
                  DAT_00e5a6a0 = hud::RegisterHUDCallback
                                           (0x30,iVar10 + 60000,&PTR_AmmoHud_Init_00705808,
                                            &PTR_HudEntry_UpdateCounter_007056c8,
                                            &PTR_Draw_AmmoCounter_00705888,
                                            (int *)(&currentAmmoArray.field0_0x0 + iVar10),
                                            (uint)(ushort)(&DAT_00737d3e)[iVar10 * 0xc]);
                }
                else {
                  if (g_VendorItemsCnt + -1 < DAT_00e5a6a8) {
                    DAT_00e5a6a8 = g_VendorItemsCnt + -1;
                  }
                  Vendor_SpawnPreviewMoby();
                }
                pcVar8 = (char *)help::help_msg_string_by_index(STR_THANK_YOU);
                Vendor_SetScrollText(pcVar8);
                sound::PlayMobySound(7,0,DAT_00e5a66c);
              }
            }
          }
        }
        else {
          sound::PlayMobySound(0,0,DAT_00e5a66c);
        }
        g_VendorMenuState = 0;
      }
      mobyfunc::UpdateMobyTransform((MobyInstance *)(DAT_00e5a670 + 0x400));
    }
  }
  return;
}



//==== 0016da88  ns=vendor  size=0x1f14
// sig: undefined Vendor_PreUpdate(void)
// callers(1): 000e0e60 main::startLevel
// callees(45): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 0006562c stub::STUB_0006562c; 000668d0 draw::UpdateViewContext; 0006d7e0 draw::RegisterPostDraw; 0007b740 help::help_msg_string_by_index; 000954c8 hero::HeroUpdate; 000aa5e0 hero::Hero_UpdateInScene; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 000d56d8 hud::UpdateAllGameplayHUD; 000dafb8 lights::UpdatePointLights; 000dcb64 loaders::ParseMobySeq; 000e0654 loaders::ParseWeaponSceneChunk; 000e0854 loaders::LoadGadgetModel; 000ef74c mobyfunc::UpdateMobyFrameData; 000ef810 mobyfunc::InitMobyInstance; 000efb38 mobyfunc::DeleteMoby; 000f0f1c mobyfunc::DetachManipulator; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fc168 mobyfunc::UpdateMobys; 000fddc0 mobyutil::MB_SetAnimation; 00106468 mobyutil::MB_SetZBoundsFromFloorCeil; 0011e8a0 partproc::UpdateParts; 0015be68 sound::sound_Update; 0015d12c sound::PlayMobySound; 0015d7ac sound::sound_UpdateAmbient; 00166e30 update::ResetGameCounters; 00166e88 update::UpdateGameCounters; 0016b038 vendor::Vendor_EndWeaponCutscene; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016ba38 vendor::Vendor_RestoreHero; 0016bc20 vendor::Vendor_SetScrollText; 0016bd58 vendor::Vendor_UpdateDude; 0016c4e8 vendor::Vendor_PlayDudeSpeech; 0016c6b8 vendor::Vendor_SpawnPreviewMoby; 0016cc50 vendor::PurchaseHandler; 00174bdc vuchain::VU1_setBufSizeByLevel
// strings: 00653f6c: 'moby update' | 00653f7c: 'hero update' | 00653f8c: 'part update'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vendor::Vendor_PreUpdate(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyClass *pClass;
  float fVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  bool bVar17;
  MobyInstance *pMVar18;
  f32 fVar19;
  vec4 *pvVar22;
  MobyInstance *pMVar23;
  ulonglong uVar20;
  char *pcVar24;
  int iVar25;
  void *pvVar26;
  undefined8 uVar21;
  float *pfVar27;
  float *pfVar28;
  vec4 *pvVar29;
  int iVar30;
  int *piVar31;
  undefined4 *puVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  longlong local_a0;
  
  if (g_OpenVendorState < 3) {
    if (g_OpenVendorState < 1) {
      if (g_OpenVendorState < 0) goto LAB_0016f940;
    }
    else if (g_OpenVendorState < 2) {
      if (((DAT_00e5a9d0 == '\0') && (Music == 0)) && (DAT_00e5a9d1 != 0)) {
        iVar25 = 0;
        pClass = MobyClasses[DAT_00a354cc];
        piVar31 = DAT_00e5a668;
        do {
          if (*piVar31 != 0) {
            *(int *)(&pClass->type + iVar25 * 4) = (int)DAT_00e5a668 + *piVar31;
            loaders::ParseMobySeq(pClass,iVar25);
          }
          iVar25 = iVar25 + 1;
          piVar31 = piVar31 + 1;
        } while (iVar25 < 0x10);
        DAT_00e5a674 = DAT_00e5a664;
        mobyfunc::InitMobyInstance(DAT_00e5a664,0xc);
        pMVar23 = DAT_00e5a674;
        DAT_00e5a674->drawDistance = 0x40;
        (pMVar23->rotation).z = (DAT_00e5a66c->rotation).z;
        mobyfunc::UpdateMobyTransform(pMVar23);
        mobyutil::MB_SetLights(DAT_00e5a674,0x202020,0xe,0xe,0);
        DAT_00e5a9d0 = '\x01';
        DAT_00e5a9d1 = 0;
        Vendor_PlayDudeSpeech(1);
      }
      mobyfunc::UpdateMobyAnimFrame(DAT_00e5a66c);
      mobyfunc::UpdateMobyTransform(DAT_00e5a66c);
      pMVar18 = DAT_00e5a674;
      pMVar23 = DAT_00e5a66c;
      fVar4 = DAT_0073886c;
      if (DAT_00e5a9d0 == '\x01') {
        if (DAT_00e5a9d2 != '\0') {
          DAT_00738860 = -1.8;
          DAT_00738868 = -0.6;
        }
        fVar2 = (DAT_00e5a66c->transform).v0.y * DAT_00738860;
        fVar6 = (DAT_00e5a66c->transform).v1.y * DAT_00738864;
        pvVar29 = &DAT_00e5a674->pos;
        fVar3 = (DAT_00e5a66c->transform).v0.w * DAT_00738860;
        fVar7 = (DAT_00e5a66c->transform).v1.w * DAT_00738864;
        fVar5 = (DAT_00e5a66c->transform).v0.z * DAT_00738860;
        fVar9 = (DAT_00e5a66c->transform).v1.z * DAT_00738864;
        fVar10 = (DAT_00e5a66c->transform).v2.y * DAT_00738868;
        fVar11 = (DAT_00e5a66c->transform).v2.w * DAT_00738868;
        fVar12 = (DAT_00e5a66c->transform).v2.z * DAT_00738868;
        pvVar22 = &DAT_00e5a66c->pos;
        pvVar29->x = (DAT_00e5a66c->transform).v0.x * DAT_00738860 +
                     (DAT_00e5a66c->transform).v1.x * DAT_00738864 +
                     (DAT_00e5a66c->transform).v2.x * DAT_00738868;
        (pMVar18->pos).y = fVar2 + fVar6 + fVar10;
        (pMVar18->pos).z = fVar5 + fVar9 + fVar12;
        (pMVar18->pos).w = fVar3 + fVar7 + fVar11 + fVar4;
        pvVar29->x = pvVar29->x + pvVar22->x;
        (pMVar18->pos).y = (pMVar18->pos).y + (pMVar23->pos).y;
        (pMVar18->pos).z = (pMVar18->pos).z + (pMVar23->pos).z;
        (pMVar18->pos).w = (pMVar18->pos).w;
        mobyfunc::UpdateMobyAnimFrame(pMVar18);
        mobyfunc::UpdateMobyTransform(DAT_00e5a674);
        Vendor_UpdateDude(DAT_00e5a674);
      }
      pMVar18 = DAT_00e5a670;
      pMVar23 = DAT_00e5a66c;
      fVar4 = DAT_0073889c;
      if (((*(char *)(g_viewMtxPtr + 0x11) == '\x04') || (*(char *)(g_viewMtxPtr + 0x11) == '\x05'))
         && (*(int *)(g_viewMtxPtr + 0xc) == 0)) {
        DAT_00738894 = -3.1;
      }
      else {
        DAT_00738894 = -4.15;
      }
      pvVar29 = &DAT_00e5a670->pos;
      fVar6 = (DAT_00e5a66c->transform).v0.w * DAT_00738890;
      fVar7 = (DAT_00e5a66c->transform).v0.y * DAT_00738890;
      fVar2 = (DAT_00e5a66c->transform).v1.y * DAT_00738894;
      fVar3 = (DAT_00e5a66c->transform).v1.w * DAT_00738894;
      fVar9 = (DAT_00e5a66c->transform).v0.z * DAT_00738890;
      fVar5 = (DAT_00e5a66c->transform).v1.z * DAT_00738894;
      fVar10 = (DAT_00e5a66c->transform).v2.y * DAT_00738898;
      pvVar22 = &DAT_00e5a66c->pos;
      fVar11 = (DAT_00e5a66c->transform).v2.w * DAT_00738898;
      fVar12 = (DAT_00e5a66c->transform).v2.z * DAT_00738898;
      pvVar29->x = (DAT_00e5a66c->transform).v0.x * DAT_00738890 +
                   (DAT_00e5a66c->transform).v1.x * DAT_00738894 +
                   (DAT_00e5a66c->transform).v2.x * DAT_00738898;
      (pMVar18->pos).y = fVar7 + fVar2 + fVar10;
      (pMVar18->pos).z = fVar9 + fVar5 + fVar12;
      (pMVar18->pos).w = fVar6 + fVar3 + fVar11 + fVar4;
      pvVar29->x = pvVar29->x + pvVar22->x;
      (pMVar18->pos).y = (pMVar18->pos).y + (pMVar23->pos).y;
      (pMVar18->pos).z = (pMVar18->pos).z + (pMVar23->pos).z;
      (pMVar18->pos).w = (pMVar18->pos).w;
      dVar42 = -0.05000000074505806;
      dVar33 = (double)fastfunc::FastWrapRot((pMVar18->rotation).x,animationSpeed * -0.05);
      pMVar23 = DAT_00e5a670;
      (DAT_00e5a670->rotation).x = (float)dVar33;
      dVar41 = -0.36000001430511475;
      (pMVar23->rotation).y = -0.36;
      dVar37 = 0.05000000074505806;
      dVar33 = (double)fastfunc::FastWrapRot((pMVar23->rotation).z,animationSpeed * 0.05);
      pMVar23 = DAT_00e5a670;
      (DAT_00e5a670->rotation).z = (float)dVar33;
      mobyfunc::UpdateMobyTransform(pMVar23);
      pMVar18 = DAT_00e5a670;
      pMVar23 = DAT_00e5a66c;
      fVar12 = DAT_007388ac;
      fVar4 = (DAT_00e5a66c->transform).v0.y * DAT_007388a0;
      fVar5 = (DAT_00e5a66c->transform).v1.y * DAT_007388a4;
      pvVar29 = &DAT_00e5a670[5].pos;
      fVar2 = (DAT_00e5a66c->transform).v0.w * DAT_007388a0;
      fVar6 = (DAT_00e5a66c->transform).v1.w * DAT_007388a4;
      fVar3 = (DAT_00e5a66c->transform).v0.z * DAT_007388a0;
      fVar7 = (DAT_00e5a66c->transform).v1.z * DAT_007388a4;
      fVar9 = (DAT_00e5a66c->transform).v2.y * DAT_007388a8;
      fVar10 = (DAT_00e5a66c->transform).v2.w * DAT_007388a8;
      pvVar22 = &DAT_00e5a66c->pos;
      fVar11 = (DAT_00e5a66c->transform).v2.z * DAT_007388a8;
      pvVar29->x = (DAT_00e5a66c->transform).v0.x * DAT_007388a0 +
                   (DAT_00e5a66c->transform).v1.x * DAT_007388a4 +
                   (DAT_00e5a66c->transform).v2.x * DAT_007388a8;
      pMVar18[5].pos.y = fVar4 + fVar5 + fVar9;
      pMVar18[5].pos.z = fVar3 + fVar7 + fVar11;
      pMVar18[5].pos.w = fVar2 + fVar6 + fVar10 + fVar12;
      pvVar29->x = pvVar29->x + pvVar22->x;
      pMVar18[5].pos.y = pMVar18[5].pos.y + (pMVar23->pos).y;
      pMVar18[5].pos.z = pMVar18[5].pos.z + (pMVar23->pos).z;
      pMVar18[5].pos.w = pMVar18[5].pos.w;
      dVar33 = (double)fastfunc::FastWrapRot
                                 (pMVar18[5].rotation.x,(float)((double)animationSpeed * dVar42));
      pMVar23 = DAT_00e5a670;
      DAT_00e5a670[5].rotation.x = (float)dVar33;
      pMVar23[5].rotation.y = (float)dVar41;
      dVar33 = (double)fastfunc::FastWrapRot
                                 (pMVar23[5].rotation.z,(float)((double)animationSpeed * dVar37));
      pMVar23 = DAT_00e5a670 + 5;
      DAT_00e5a670[5].rotation.z = (float)dVar33;
      mobyfunc::UpdateMobyTransform(pMVar23);
      dVar33 = (double)fastfunc::FastWrapRot(DAT_00e5a950,(float)((double)animationSpeed * dVar37));
      DAT_00e5a950 = (float)dVar33;
      mobyfunc::UpdateMobyAnimFrame(DAT_00e5a670 + 1);
      if ((DAT_00e5a670[1].animationId == '\0') && ((DAT_00e5a670[1].field43_0x70 & 2U) != 0)) {
        mobyutil::MB_SetAnimation(DAT_00e5a670 + 1,1,0,8);
      }
      mobyfunc::UpdateMobyTransform(DAT_00e5a670 + 1);
      pMVar18 = DAT_00e5a670;
      pMVar23 = DAT_00e5a66c;
      dVar33 = 3.141592502593994;
      dVar41 = 0.0;
      fVar4 = DAT_00e5a950;
      if (3.1415925 - DAT_00e5a950 <= DAT_00e5a950) {
        fVar4 = 3.1415925 - DAT_00e5a950;
      }
      dVar42 = -3.141592502593994;
      if (fVar4 <= -3.1415925 - DAT_00e5a950) {
        fVar4 = -3.1415925 - DAT_00e5a950;
      }
      fVar7 = fVar4 * fVar4;
      dVar43 = -0.16666656732559204;
      dVar40 = 0.008333025500178337;
      dVar39 = -0.0001980741071747616;
      dVar38 = 2.601886990305502e-06;
      fVar5 = fVar7 * fVar7 * fVar4;
      fVar6 = fVar7 * fVar5;
      iVar25 = DAT_00e5a6a8 * 0x10;
      iVar30 = *(int *)(&g_VendorItems + iVar25) * 0x40;
      fVar9 = DAT_00738880 + 0.0 + *(float *)(iVar30 + 0x739230);
      fVar10 = DAT_00738884 + 0.0 + *(float *)(iVar30 + 0x739234);
      pvVar22 = &DAT_00e5a66c->pos;
      fVar2 = (DAT_00e5a66c->transform).v0.y;
      fVar3 = (DAT_00e5a66c->transform).v1.y;
      fVar11 = DAT_00738888 +
               (float)((double)(fVar4 + fVar7 * fVar4 * -0.16666657 + fVar5 * 0.0083330255 +
                                fVar6 * -0.0001980741 + fVar7 * fVar6 * 2.601887e-06) * dVar37) +
               *(float *)(iVar30 + 0x739238);
      fVar4 = (DAT_00e5a66c->transform).v0.z;
      fVar5 = (DAT_00e5a66c->transform).v1.z;
      pvVar29 = &DAT_00e5a670[2].pos;
      fVar6 = (DAT_00e5a66c->transform).v2.y;
      fVar7 = (DAT_00e5a66c->transform).v2.z;
      fVar12 = (DAT_00e5a66c->transform).v0.w * fVar9 + (DAT_00e5a66c->transform).v1.w * fVar10 +
               (DAT_00e5a66c->transform).v2.w * fVar11 + DAT_0073888c;
      pvVar29->x = (DAT_00e5a66c->transform).v0.x * fVar9 + (DAT_00e5a66c->transform).v1.x * fVar10
                   + (DAT_00e5a66c->transform).v2.x * fVar11;
      pMVar18[2].pos.y = fVar2 * fVar9 + fVar3 * fVar10 + fVar6 * fVar11;
      pMVar18[2].pos.z = fVar4 * fVar9 + fVar5 * fVar10 + fVar7 * fVar11;
      pMVar18[2].pos.w = fVar12;
      fVar19 = DAT_00e5a950;
      pvVar29->x = pvVar29->x + pvVar22->x;
      pMVar18[2].pos.y = pMVar18[2].pos.y + (pMVar23->pos).y;
      pMVar18[2].pos.z = pMVar18[2].pos.z + (pMVar23->pos).z;
      pMVar18[2].pos.w = pMVar18[2].pos.w;
      pMVar18[2].rotation.x = *(f32 *)(&DAT_00739220 + *(int *)(&g_VendorItems + iVar25) * 0x40);
      fVar8 = *(f32 *)(&DAT_00739224 + *(int *)(&g_VendorItems + iVar25) * 0x40);
      pMVar18[2].rotation.z = fVar19;
      pMVar18[2].rotation.y = fVar8;
      mobyfunc::UpdateMobyTransform(pMVar18 + 2);
      pMVar18 = DAT_00e5a670;
      pMVar23 = DAT_00e5a66c;
      fVar4 = DAT_0073888c;
      dVar34 = (double)DAT_00e5a950;
      dVar36 = dVar34;
      if ((double)(float)(dVar33 - dVar34) <= dVar34) {
        dVar36 = (double)(float)(dVar33 - dVar34);
      }
      if (dVar36 <= (double)(float)(dVar42 - dVar34)) {
        dVar36 = (double)(float)(dVar42 - dVar34);
      }
      dVar33 = (double)(float)(dVar36 * dVar36);
      iVar25 = DAT_00e5a6a8 * 0x10;
      dVar42 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar36));
      dVar34 = (double)(float)(dVar33 * dVar42);
      iVar30 = *(int *)(&g_VendorItems + iVar25) * 0x30;
      fVar14 = (float)((double)DAT_00738880 + dVar41) + *(float *)(iVar30 + 0x739b70);
      fVar13 = (float)((double)DAT_00738884 + dVar41) + *(float *)(iVar30 + 0x739b74);
      pvVar22 = &DAT_00e5a66c->pos;
      fVar2 = (DAT_00e5a66c->transform).v0.y;
      fVar3 = (DAT_00e5a66c->transform).v1.y;
      fVar15 = DAT_00738888 +
               (float)((double)((float)(dVar36 + (double)(float)((double)(float)(dVar33 * dVar36) *
                                                                dVar43)) + (float)(dVar42 * dVar40)
                                + (float)(dVar34 * dVar39) +
                               (float)((double)(float)(dVar33 * dVar34) * dVar38)) * dVar37) +
               *(float *)(iVar30 + 0x739b78);
      fVar5 = (DAT_00e5a66c->transform).v0.w;
      fVar6 = (DAT_00e5a66c->transform).v1.w;
      fVar7 = (DAT_00e5a66c->transform).v0.z;
      fVar9 = (DAT_00e5a66c->transform).v1.z;
      pvVar29 = &DAT_00e5a670[3].pos;
      fVar10 = (DAT_00e5a66c->transform).v2.y;
      fVar11 = (DAT_00e5a66c->transform).v2.w;
      fVar12 = (DAT_00e5a66c->transform).v2.z;
      pvVar29->x = (DAT_00e5a66c->transform).v0.x * fVar14 + (DAT_00e5a66c->transform).v1.x * fVar13
                   + (DAT_00e5a66c->transform).v2.x * fVar15;
      pMVar18[3].pos.y = fVar2 * fVar14 + fVar3 * fVar13 + fVar10 * fVar15;
      pMVar18[3].pos.z = fVar7 * fVar14 + fVar9 * fVar13 + fVar12 * fVar15;
      pMVar18[3].pos.w = fVar5 * fVar14 + fVar6 * fVar13 + fVar11 * fVar15 + fVar4;
      pvVar29->x = pvVar29->x + pvVar22->x;
      fVar19 = DAT_00e5a950;
      pMVar18[3].pos.y = pMVar18[3].pos.y + (pMVar23->pos).y;
      pMVar18[3].pos.z = pMVar18[3].pos.z + (pMVar23->pos).z;
      pMVar18[3].pos.w = pMVar18[3].pos.w;
      pMVar18[3].rotation.x = *(f32 *)(&DAT_00739b60 + *(int *)(&g_VendorItems + iVar25) * 0x30);
      fVar8 = *(f32 *)(&DAT_00739b64 + *(int *)(&g_VendorItems + iVar25) * 0x30);
      pMVar18[3].rotation.z = fVar19;
      pMVar18[3].rotation.y = fVar8;
      mobyfunc::UpdateMobyAnimFrame(pMVar18 + 3);
      if ((DAT_00e5a670[3].animationId == '\0') && ((DAT_00e5a670[3].field43_0x70 & 2U) != 0)) {
        mobyutil::MB_SetAnimation(DAT_00e5a670 + 3,1,0,8);
      }
      mobyfunc::UpdateMobyTransform(DAT_00e5a670 + 3);
      iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
      dVar41 = (double)*(float *)(&DAT_00739b50 + iVar25 * 0x30);
      dVar37 = (double)*(float *)(&DAT_00739b54 + iVar25 * 0x30);
      dVar33 = (double)*(float *)(&DAT_00739b58 + iVar25 * 0x30);
      fastfunc::FastEulerToMtx(&DAT_00e5a670[3].transform,&DAT_00e5a670[3].rotation);
      pMVar23 = DAT_00e5a670;
      fVar4 = DAT_00e5a670[3].transform.v0.y;
      fVar2 = DAT_00e5a670[3].transform.v1.y;
      fVar3 = DAT_00e5a670[3].transform.v2.y;
      fVar5 = DAT_00e5a670[3].transform.v0.z;
      fVar6 = DAT_00e5a670[3].transform.v1.z;
      fVar7 = DAT_00e5a670[3].transform.v2.z;
      DAT_00e5a670[3].pos.x =
           DAT_00e5a670[3].pos.x +
           (float)((double)DAT_00e5a670[3].transform.v0.x * dVar41) +
           (float)((double)DAT_00e5a670[3].transform.v1.x * dVar37) +
           (float)((double)DAT_00e5a670[3].transform.v2.x * dVar33);
      pMVar23[3].pos.y =
           pMVar23[3].pos.y +
           (float)((double)fVar4 * dVar41) + (float)((double)fVar2 * dVar37) +
           (float)((double)fVar3 * dVar33);
      pMVar23[3].pos.z =
           pMVar23[3].pos.z +
           (float)((double)fVar5 * dVar41) + (float)((double)fVar6 * dVar37) +
           (float)((double)fVar7 * dVar33);
      pMVar23[3].pos.w = pMVar23[3].pos.w;
      uVar20 = (ulonglong)DAT_00e5a654 + 1;
      DAT_00e5a654 = (uint)uVar20;
      if ((g_VendorMenuState == 0) && (uVar20 = (ulonglong)DAT_00e5a944, DAT_00e5a944 == 0)) {
        if (g_VendorItemsCnt < 8) {
          if (((pad_pressedButton & 0x2000) != 0) && (DAT_00e5a6a8 < g_VendorItemsCnt + -1)) {
            DAT_00e5a9d3 = '\x01';
            Vendor_PlayDudeSpeech(0);
            DAT_00e5a6a8 = DAT_00e5a6a8 + 1;
            sound::PlayMobySound(1,0,DAT_00e5a66c);
            pcVar24 = (char *)help::help_msg_string_by_index
                                        (*(StringId *)
                                          (&DAT_00735590 +
                                          *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x14));
            Vendor_SetScrollText(pcVar24);
            if (DAT_00e5a6a0 != -1) {
              hud::Hud_SetEntryValueById(DAT_00e5a6a0,0);
            }
            DAT_00e5a6a0 = -1;
            if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
              iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
              DAT_00e5a6a0 = hud::RegisterHUDCallback
                                       (0x30,iVar25 + 60000,&PTR_AmmoHud_Init_00705808,
                                        &PTR_HudEntry_UpdateCounter_007056c8,
                                        &PTR_Draw_AmmoCounter_00705888,
                                        (int *)(&currentAmmoArray.field0_0x0 + iVar25),
                                        (uint)(ushort)(&DAT_00737d3e)[iVar25 * 0xc]);
            }
          }
          if (((pad_pressedButton & 0x8000) != 0) && (0 < DAT_00e5a6a8)) {
            DAT_00e5a9d3 = '\x01';
            Vendor_PlayDudeSpeech(0);
            DAT_00e5a6a8 = DAT_00e5a6a8 + -1;
            sound::PlayMobySound(1,0,DAT_00e5a66c);
            pcVar24 = (char *)help::help_msg_string_by_index
                                        (*(StringId *)
                                          (&DAT_00735590 +
                                          *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x14));
            Vendor_SetScrollText(pcVar24);
            if (DAT_00e5a6a0 != -1) {
              hud::Hud_SetEntryValueById(DAT_00e5a6a0,0);
            }
            DAT_00e5a6a0 = -1;
            if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
              iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
              DAT_00e5a6a0 = hud::RegisterHUDCallback
                                       (0x30,iVar25 + 60000,&PTR_AmmoHud_Init_00705808,
                                        &PTR_HudEntry_UpdateCounter_007056c8,
                                        &PTR_Draw_AmmoCounter_00705888,
                                        (int *)(&currentAmmoArray.field0_0x0 + iVar25),
                                        (uint)(ushort)(&DAT_00737d3e)[iVar25 * 0xc]);
            }
          }
        }
        else {
          if (((pad_pressedButton & 0x2000) != 0) && (g_VendorCursor < 0x39)) {
            g_VendorCursor = g_VendorCursor + 0x38;
            DAT_00e5a9d3 = '\x01';
            sound::PlayMobySound(1,0,DAT_00e5a66c);
            Vendor_PlayDudeSpeech(0);
            iVar25 = 0;
            if (DAT_00e5a6a8 < g_VendorItemsCnt + -1) {
              iVar25 = DAT_00e5a6a8 + 1;
            }
            DAT_00e5a6a8 = iVar25;
            pcVar24 = (char *)help::help_msg_string_by_index
                                        (*(StringId *)
                                          (&DAT_00735590 +
                                          *(int *)(&g_VendorItems + iVar25 * 0x10) * 0x14));
            Vendor_SetScrollText(pcVar24);
            if (DAT_00e5a6a0 != -1) {
              hud::Hud_SetEntryValueById(DAT_00e5a6a0,0);
            }
            DAT_00e5a6a0 = -1;
            if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
              iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
              DAT_00e5a6a0 = hud::RegisterHUDCallback
                                       (0x30,iVar25 + 60000,&PTR_AmmoHud_Init_00705808,
                                        &PTR_HudEntry_UpdateCounter_007056c8,
                                        &PTR_Draw_AmmoCounter_00705888,
                                        (int *)(&currentAmmoArray.field0_0x0 + iVar25),
                                        (uint)(ushort)(&DAT_00737d3e)[iVar25 * 0xc]);
            }
          }
          if (((pad_pressedButton & 0x8000) != 0) && (-0x39 < g_VendorCursor)) {
            g_VendorCursor = g_VendorCursor + -0x38;
            DAT_00e5a9d3 = '\x01';
            sound::PlayMobySound(1,0,DAT_00e5a66c);
            Vendor_PlayDudeSpeech(0);
            iVar25 = g_VendorItemsCnt;
            if (0 < DAT_00e5a6a8) {
              iVar25 = DAT_00e5a6a8;
            }
            DAT_00e5a6a8 = iVar25 + -1;
            pcVar24 = (char *)help::help_msg_string_by_index
                                        (*(StringId *)
                                          (&DAT_00735590 +
                                          *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x14));
            Vendor_SetScrollText(pcVar24);
            if (DAT_00e5a6a0 != -1) {
              hud::Hud_SetEntryValueById(DAT_00e5a6a0,0);
            }
            DAT_00e5a6a0 = -1;
            if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
              iVar25 = *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10);
              DAT_00e5a6a0 = hud::RegisterHUDCallback
                                       (0x30,iVar25 + 60000,&PTR_AmmoHud_Init_00705808,
                                        &PTR_HudEntry_UpdateCounter_007056c8,
                                        &PTR_Draw_AmmoCounter_00705888,
                                        (int *)(&currentAmmoArray.field0_0x0 + iVar25),
                                        (uint)(ushort)(&DAT_00737d3e)[iVar25 * 0xc]);
            }
          }
        }
        if (((pad_pressedButton & pad_ConfirmButtonMask) != 0) &&
           ((&DAT_00e5a725)[DAT_00e5a6a8 * 0x10] == '\0')) {
          g_VendorMenuState = 1;
          sound::PlayMobySound(0,0,DAT_00e5a66c);
        }
        uVar20 = (ulonglong)pad_pressedButton & 0x10;
        if (((int)uVar20 != 0) && (uVar20 = (ulonglong)DAT_00e5a9d1, DAT_00e5a9d1 == 0)) {
          DAT_00e5a940 = 8;
          DAT_00e5a944 = 1;
          iVar25 = sound::PlayMobySound(5,0,DAT_00e5a66c);
          uVar20 = (ulonglong)iVar25;
        }
      }
      PurchaseHandler(uVar20);
      if (DAT_00e5a94c == '\x01') {
        if (DAT_00e5a948 == 0) {
          DAT_00e5a94c = '\0';
        }
        else {
          DAT_00e5a948 = DAT_00e5a948 + -1;
        }
      }
      if (DAT_00e5a944 == 1) {
        DAT_00e5a940 = DAT_00e5a940 + -1;
        if (DAT_00e5a940 == 0) {
          g_CutscenePlaying = 1;
          vuchain::VU1_setBufSizeByLevel();
          mobyutil::MB_SetAnimation(DAT_00e5a66c,4,9,8);
          DAT_00e5a66c->unk58 = DAT_0071f408 * -0.5;
          if (g_lastVendorWasPda != 0) {
            GameCamera.rot.azimuth = DAT_00e5a6c0;
            GameCamera.rot.elevation = DAT_00e5a6c4;
            GameCamera.rot.radius = DAT_00e5a6c8;
            GameCamera.field10_0x15c[0] = DAT_00e5a6cc[0];
            GameCamera.field10_0x15c[1] = DAT_00e5a6cc[1];
            GameCamera.field10_0x15c[2] = DAT_00e5a6cc[2];
            GameCamera.field10_0x15c[3] = DAT_00e5a6cc[3];
          }
          DAT_00e5a658 = 0;
          DAT_00e5a654 = 0;
          GameCamera.orientMtx.forward.w = fRam00e5a96c;
          GameCamera.orientMtx.forward.z = fRam00e5a968;
          GameCamera.orientMtx.forward.y = fRam00e5a964;
          GameCamera.orientMtx.forward.x = _DAT_00e5a960;
          GameCamera.orientMtx.right.w = fRam00e5a97c;
          GameCamera.orientMtx.right.z = fRam00e5a978;
          GameCamera.orientMtx.right.y = fRam00e5a974;
          GameCamera.orientMtx.right.x = _DAT_00e5a970;
          GameCamera.orientMtx.up.w = fRam00e5a98c;
          GameCamera.orientMtx.up.z = fRam00e5a988;
          GameCamera.orientMtx.up.y = fRam00e5a984;
          GameCamera.orientMtx.up.x = _DAT_00e5a980;
          g_OpenVendorState = 2;
          if (g_currentWeaponMoby != (MobyInstance *)0x0) {
            loaders::LoadGadgetModel((int)(short)g_currentWeaponMoby->oClass,-1);
            pMVar23 = g_currentWeaponMoby;
            g_currentWeaponMoby->pClass = MobyClasses[g_currentWeaponMoby->mClass];
            mobyfunc::UpdateMobyFrameData(pMVar23);
          }
        }
      }
      else if (DAT_00e5a9d3 != '\0') {
        Vendor_SpawnPreviewMoby();
      }
      hud::UpdateAllGameplayHUD(1);
      goto LAB_0016f940;
    }
    if ((g_lastVendorWasPda == 0) || (g_OpenVendorState == 2)) {
      if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
         (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
        update::ResetGameCounters();
      }
      if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
         (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
        mobyfunc::UpdateMobys();
        sound::sound_UpdateAmbient();
      }
      stub::STUB_0006562c("moby update",3);
      if (((DebugUpdate & UPDATE_HERO) != NONE) ||
         (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
        hero::HeroUpdate();
      }
      stub::STUB_0006562c("hero update",7);
      if (((DebugUpdate & UPDATE_PARTICLES) != NONE) ||
         (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
        partproc::UpdateParts();
      }
      stub::STUB_0006562c("part update",5);
    }
    if (g_OpenVendorState == 0) {
      boot::SceneScreenFade = boot::SceneScreenFade - 0.34;
      if (boot::SceneScreenFade < 0.0) {
        boot::SceneScreenFade = 0.0;
      }
      DAT_00e5a654 = DAT_00e5a654 + 1;
      local_a0 = (longlong)(int)(animationSpeed * 40.5);
      if (((int)(animationSpeed * 40.5) <= (int)DAT_00e5a654) || (g_lastVendorWasPda != 0)) {
        boot::SceneScreenFade = 0.0;
        DAT_00e5a65c = 1;
        g_OpenVendorState = 1;
        DAT_00e5a654 = 0;
        mobyutil::MB_SetAnimation(DAT_00e5a66c,3,0,8);
        pMVar23 = DAT_00e5a66c;
        DAT_00e5a66c->unk58 = 1.0;
        DAT_00e5a94c = '\x01';
        DAT_00e5a948 = 8;
        sound::PlayMobySound(4,0,pMVar23);
      }
    }
    else if (g_OpenVendorState == 2) {
      bVar17 = false;
      if (((g_lastVendorWasPda == 0) && (-1 < DAT_00e5a698)) &&
         (-1 < *(int *)(&DAT_0073a240 + DAT_00e5a698 * 4))) {
        bVar17 = true;
      }
      DAT_00e5a654 = DAT_00e5a654 + 1;
      local_a0 = (longlong)(int)(animationSpeed * 40.5);
      if (((int)(animationSpeed * 40.5) <= (int)DAT_00e5a654) || (g_lastVendorWasPda != 0)) {
        iVar30 = 0;
        mobyutil::MB_SetAnimation(DAT_00e5a66c,1,0,8);
        iVar25 = 0;
        do {
          if ((&DAT_00e5a841)[iVar25] == '\x01') {
            mobyfunc::DetachManipulator(DAT_00e5a66c,&DAT_00e5a840 + iVar25);
          }
          iVar30 = iVar30 + 1;
          iVar25 = iVar25 + 0x40;
        } while (iVar30 < 4);
        if (bVar17) {
          Vendor_StartWeaponCutscene();
        }
        else {
          Vendor_EndWeaponCutscene(0);
          sound::PlayMobySound(6,0,DAT_00e5a66c);
        }
      }
      hud::UpdateAllGameplayHUD(1);
    }
    local_a0 = (longlong)(int)(animationSpeed * 36.5);
    if ((int)DAT_00e5a654 <= (int)(animationSpeed * 36.5)) {
      draw::RegisterPostDraw(&PTR_Vendor_DrawMobyHighlight_00707f60,DAT_00e5a66c);
    }
    if (g_lastVendorWasPda == 0) {
      camera::camera5::Camera_SetMobyDrivenTargetPos((float *)&DAT_00e5a6b0);
      camera::camera5::Camera_SetMobyDrivenTargetRot(&DAT_00e5a6c0);
    }
    lights::UpdatePointLights();
    if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_buttonsPressedThisFrame & L3) != 0)))) {
      update::UpdateGameCounters();
    }
  }
  else if (g_OpenVendorState < 4) {
    update::ResetGameCounters();
    mobyfunc::UpdateMobys();
    sound::sound_UpdateAmbient();
    hero::HeroUpdate();
    partproc::UpdateParts();
    puVar32 = &DAT_0095cd50;
    g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
    boot::g_SpaceSceneFrame = boot::g_SpaceSceneFrame + 1;
    if (boot::g_SpaceSceneNumFrames._0_2_ + -0xc < boot::g_SpaceSceneFrame) {
      boot::SceneScreenFade = boot::SceneScreenFade + 0.1;
      if (1.0 < boot::SceneScreenFade) {
        boot::SceneScreenFade = 1.0;
      }
    }
    else {
      boot::SceneScreenFade = boot::SceneScreenFade - 0.125;
      if (boot::SceneScreenFade < 0.0) {
        boot::SceneScreenFade = 0.0;
      }
    }
    if (boot::g_SpaceSceneFrame < boot::g_SpaceSceneNumFrames._0_2_) {
      iVar25 = 0x60;
      if (g_IsPal != 0) {
        iVar25 = 0x50;
      }
      if (iVar25 <= (int)g_cutsceneCameraFrame) {
        boot::g_SpaceSceneChunk = boot::g_SpaceSceneChunk + 1;
        loaders::ParseWeaponSceneChunk(boot::g_SpaceSceneChunk);
      }
      pfVar27 = (float *)((int)boot::g_SpaceSceneCameraFrames + g_cutsceneCameraFrame * 0x20);
      cVar1 = *(char *)(pfVar27 + 3);
      ViewContext.xratio = pfVar27[7];
      draw::UpdateViewContext();
      fVar4 = *pfVar27;
      fVar2 = pfVar27[1];
      fVar3 = pfVar27[2];
      GameCamera.field8_0x14c =
           (char  [4])
           (DAT_00e5a6dc * fVar4 + DAT_00e5a6ec * fVar2 + DAT_00e5a6fc * fVar3 + pfVar27[3]);
      GameCamera.posX =
           DAT_00e5a6d0 * fVar4 + DAT_00e5a6e0 * fVar2 + DAT_00e5a6f0 * fVar3 + DAT_00e5a710;
      GameCamera.posY =
           DAT_00e5a6d4 * fVar4 + DAT_00e5a6e4 * fVar2 + DAT_00e5a6f4 * fVar3 + DAT_00e5a714;
      GameCamera.posZ =
           DAT_00e5a6d8 * fVar4 + DAT_00e5a6e8 * fVar2 + DAT_00e5a6f8 * fVar3 + DAT_00e5a718;
      uVar35 = fastfunc::FastWrapRot(pfVar27[6],DAT_00e5a708);
      dVar37 = (double)pfVar27[4];
      dVar33 = (double)pfVar27[5];
      pvVar26 = libc::memcpy(&local_120,&DAT_00653f08,0x40);
      iVar25 = 0;
      uVar21 = mathfunc::SinCos(dVar37,pvVar26,0);
      dVar41 = extraout_f1;
      uVar21 = mathfunc::SinCos(dVar37,uVar21,1);
      dVar36 = extraout_f1_00;
      uVar21 = mathfunc::SinCos(dVar33,uVar21,0);
      dVar37 = extraout_f1_01;
      uVar21 = mathfunc::SinCos(dVar33,uVar21,1);
      dVar42 = extraout_f1_02;
      uVar21 = mathfunc::SinCos(uVar35,uVar21,0);
      dVar33 = extraout_f1_03;
      dVar34 = (double)mathfunc::SinCos(uVar35,uVar21,1);
      dVar39 = (double)(float)(dVar37 * dVar33);
      dVar38 = (double)(float)(dVar34 * dVar37);
      libc::memcpy(&local_e0,&DAT_0073a78c,0x40);
      local_e0 = (float)(dVar42 * dVar34);
      local_dc = (float)(dVar42 * dVar33);
      local_d0 = (float)(dVar41 * dVar38) - (float)(dVar36 * dVar33);
      local_c8 = (float)(dVar42 * dVar41);
      local_cc = (float)(dVar41 * dVar39) + (float)(dVar36 * dVar34);
      local_b8 = (float)(dVar36 * dVar42);
      local_c0 = (float)(dVar36 * dVar38) + (float)(dVar41 * dVar33);
      local_bc = (float)(dVar36 * dVar39) - (float)(dVar34 * dVar41);
      local_d8 = (float)-dVar37;
      libc::memcpy(&local_120,&local_e0,0x40);
      GameCamera.orientMtx.forward.x = -local_100;
      GameCamera.orientMtx.right.x = -local_120;
      GameCamera.orientMtx.forward.y = -local_fc;
      GameCamera.orientMtx.right.y = -local_11c;
      GameCamera.orientMtx.forward.z = -local_f8;
      GameCamera.orientMtx.up.x = local_110;
      GameCamera.orientMtx.right.z = -local_118;
      GameCamera.orientMtx.up.y = local_10c;
      GameCamera.orientMtx.up.z = local_108;
      if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
        do {
          pMVar23 = (MobyInstance *)puVar32[0x5e];
          cVar16 = (char)((int)g_cutsceneCameraFrame >> 1);
          pMVar23->previousAnimationFrame = cVar16;
          pMVar23->animationFrame = cVar16 + '\x01';
          mobyfunc::UpdateMobyFrameData(pMVar23);
          dVar33 = (double)fastfunc::FastIntToDouble(g_cutsceneCameraFrame & 1);
          pMVar23->animationBlend = (float)(dVar33 * 0.5);
          if ((cVar1 != '\0') && ((g_cutsceneCameraFrame & 1) != 0)) {
            pMVar23->animationBlend = 1.0;
          }
          fVar4 = pMVar23->animationBlend;
          pfVar27 = (float *)((int)pMVar23->pVar +
                             (uint)(byte)pMVar23->previousAnimationFrame * 0x10);
          fVar11 = 1.0 - fVar4;
          pfVar28 = (float *)((int)pMVar23->pVar + (uint)(byte)pMVar23->animationFrame * 0x10);
          fVar2 = *pfVar27;
          fVar3 = pfVar27[1];
          fVar5 = pfVar27[2];
          fVar6 = *pfVar28;
          fVar7 = pfVar28[1];
          fVar9 = pfVar28[2];
          fVar10 = pfVar27[3];
          (pMVar23->pos).w = fVar10;
          fVar2 = fVar2 * fVar11 + fVar6 * fVar4;
          fVar3 = fVar3 * fVar11 + fVar7 * fVar4;
          fVar4 = fVar5 * fVar11 + fVar9 * fVar4;
          (pMVar23->pos).x = fVar2;
          (pMVar23->pos).y = fVar3;
          (pMVar23->pos).z = fVar4;
          fVar5 = DAT_00e5a6dc * fVar2;
          fVar6 = DAT_00e5a6ec * fVar3;
          fVar7 = DAT_00e5a6fc * fVar4;
          fVar9 = DAT_00e5a6d4 * fVar2 + DAT_00e5a6e4 * fVar3 + DAT_00e5a6f4 * fVar4;
          fVar11 = DAT_00e5a6d8 * fVar2 + DAT_00e5a6e8 * fVar3 + DAT_00e5a6f8 * fVar4;
          (pMVar23->pos).x = DAT_00e5a6d0 * fVar2 + DAT_00e5a6e0 * fVar3 + DAT_00e5a6f0 * fVar4;
          (pMVar23->pos).y = fVar9;
          (pMVar23->pos).z = fVar11;
          (pMVar23->pos).w = fVar5 + fVar6 + fVar7 + fVar10;
          (pMVar23->pos).x = (pMVar23->pos).x + DAT_00e5a710;
          (pMVar23->pos).y = fVar9 + DAT_00e5a714;
          (pMVar23->pos).z = fVar11 + DAT_00e5a718;
          fVar8 = DAT_00e5a708;
          pMVar23->field44_0x71 = -1;
          (pMVar23->rotation).z = fVar8;
          mobyfunc::UpdateMobyTransform(pMVar23);
          if (pMVar23->shadow != '\0') {
            mobyutil::MB_SetZBoundsFromFloorCeil(pMVar23);
          }
          if (pMVar23->oClass == RATCHET) {
            hero::Hero_UpdateInScene(pMVar23);
          }
          iVar25 = iVar25 + 1;
          puVar32 = puVar32 + 1;
        } while (iVar25 < boot::g_SpaceSceneMobyCnt._0_2_);
      }
      lights::UpdatePointLights();
      update::UpdateGameCounters();
    }
    else {
      iVar25 = 0;
      boot::SceneScreenFade = 0.0;
      vuchain::VU1_setBufSizeByLevel();
      ViewContext.xratio = 0.63;
      draw::UpdateViewContext();
      if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
        do {
          pMVar23 = (MobyInstance *)puVar32[0x5e];
          if (pMVar23 != (MobyInstance *)0x0) {
            pMVar23->pClass->seq_cnt = pMVar23->pClass->seq_cnt + 0xff;
            *(undefined4 *)(&pMVar23->pClass->type + (uint)pMVar23->pClass->seq_cnt * 4) = 0;
            mobyfunc::DeleteMoby(pMVar23);
          }
          iVar25 = iVar25 + 1;
          puVar32 = puVar32 + 1;
        } while (iVar25 < boot::g_SpaceSceneMobyCnt._0_2_);
      }
      if (DAT_00e5a678 == 0) {
        Vendor_EndWeaponCutscene(1);
      }
      else {
        Vendor_RestoreHero();
      }
    }
  }
LAB_0016f940:
  sound::sound_Update();
  return;
}



//==== 0016f9a8  ns=vendor  size=0x25c
// sig: undefined DrawVendorHintFrame(void)
// callers(2): 0016fc10 vendor::Vendor_DrawScrollText; 00172c40 vendor::Vendor_HudUpdate
// callees(5): 0006a5c4 draw::Sprite_DrawShapeWrapper; 000ca3e4 hud::GetIconFrameTex; 000d6bf8 hud::Hud_GetTexIndex; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void vendor::DrawVendorHintFrame(double param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar7;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar8;
  bool bVar9;
  int iVar10;
  double dVar11;
  
  bVar4 = false;
  iVar7 = hud::GetIconFrameTex(0xe935,0);
  hud::Hud_GetTexIndex(iVar7);
  iVar7 = param_3;
  while (*param_2 != 0) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    iVar8 = bVar1 - 0x20;
    if (iVar8 == 0x42) {
      bVar4 = true;
    }
    if (iVar8 == 0xea) {
      param_4 = param_4 + 9;
      iVar7 = param_3;
    }
    if ((iVar8 < 0x3b) &&
       ((iVar3 = iVar8 * 4, *(int *)(&DAT_0073a378 + iVar3) != -1 || (iVar8 == 0)))) {
      bVar9 = false;
      if (bVar4) {
        bVar4 = false;
        bVar9 = false;
        iVar10 = (int)(animationSpeed * 30.5) + (int)(animationSpeed * 10.5);
        if (DAT_0159c330 - (DAT_0159c330 / iVar10) * iVar10 < (int)(animationSpeed * 10.5)) {
          bVar9 = true;
          bVar4 = false;
        }
      }
      if (!bVar9 && iVar8 != 0) {
        uVar2 = *(uint *)(&DAT_0073a378 + iVar3);
        dVar11 = (double)fastfunc::FastIntToDouble(9);
        uVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * param_1));
        dVar11 = (double)fastfunc::FastIntToDouble(9);
        uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * param_1));
        draw::Sprite_DrawShapeWrapper
                  (iVar7,param_4,uVar5,uVar6,uVar2 >> 4 & 0xfff,uVar2 >> 0x14,9,9);
      }
      dVar11 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(&DAT_0073a478 + iVar3));
      iVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * param_1));
      iVar7 = iVar7 + iVar8;
    }
  }
  return;
}



//==== 0016fc10  ns=vendor  size=0x208
// sig: undefined Vendor_DrawScrollText(void)
// callers(0): 
// callees(7): 0006fda4 draw::FontPrint_unk; 0007813c stub::STUB_0007813c; 0007b740 help::help_msg_string_by_index; 000fc620 mobyutil::MB_randInt; 0016bc20 vendor::Vendor_SetScrollText; 0016f9a8 vendor::DrawVendorHintFrame; 005c8510 libc::strlen

void vendor::Vendor_DrawScrollText(void)

{
  size_t sVar2;
  longlong lVar1;
  char *text;
  
  stub::STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  if ((g_JapaneseMode != false) && (DAT_0071efb4 = DAT_0073a578, (DAT_0159c330 & 0x1f) < 0x10)) {
    DAT_0071efb4 = DAT_0073a578 & 0xffffff;
  }
  sVar2 = libc::strlen(DAT_00e5a67c);
  if ((int)(sVar2 - DAT_00e5a694 / 0x14) < 1) {
    lVar1 = mobyutil::MB_randInt(0x18);
    text = (char *)help::help_msg_string_by_index(*(StringId *)(&DAT_0073a318 + (int)(lVar1 << 2)));
    Vendor_SetScrollText(text);
  }
  else {
    DAT_00e5a694 = DAT_00e5a694 + 2;
  }
  if (g_JapaneseMode == false) {
    DrawVendorHintFrame(0x4000000000000000,DAT_00e5a67c,-DAT_00e5a694,8);
  }
  else {
    draw::FontPrint_unk((double)(longlong)-DAT_00e5a694,0x401c000000000000,0x3ff4000000000000,
                        &DAT_0016fc04,0x740000,DAT_0073a578,DAT_00e5a67c,0xffffffffffffffff);
  }
  stub::STUB_0007813c(0,0,4,0x40,0x200,0x80,0);
  stub::STUB_0007813c(0xe2,0,0xe6,0x40,0x200,0x80,0);
  return;
}



//==== 0016fe20  ns=vendor  size=0x1c0
// sig: undefined DrawVendorDude(void)
// callers(1): 00172c40 vendor::Vendor_HudUpdate
// callees(2): 0007813c stub::STUB_0007813c; 000f1934 mobyfunc::MB_AddToDrawList

void vendor::DrawVendorDude(void)

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
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
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
  
  stub::STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  iVar11 = DAT_00e5a674;
  if (DAT_00e5a9d0 == '\x01') {
    pfVar13 = (float *)(DAT_00e5a674 + 0xd0);
    pfVar14 = (float *)(DAT_00e5a674 + 0xe0);
    fVar1 = *(float *)(DAT_00e5a674 + 0xc0);
    dVar15 = (double)fVar1;
    pfVar12 = (float *)(DAT_00e5a674 + 0xc4);
    dVar16 = (double)*pfVar12;
    fVar2 = *(float *)(DAT_00e5a674 + 200);
    dVar17 = (double)fVar2;
    fVar3 = *(float *)(DAT_00e5a674 + 0xcc);
    dVar18 = (double)fVar3;
    fVar4 = *pfVar13;
    dVar19 = (double)fVar4;
    fVar5 = *(float *)(DAT_00e5a674 + 0xd4);
    dVar20 = (double)fVar5;
    fVar6 = *(float *)(DAT_00e5a674 + 0xd8);
    dVar21 = (double)fVar6;
    fVar7 = *(float *)(DAT_00e5a674 + 0xdc);
    dVar22 = (double)fVar7;
    fVar8 = *pfVar14;
    dVar23 = (double)fVar8;
    fVar9 = *(float *)(DAT_00e5a674 + 0xe4);
    dVar24 = (double)fVar9;
    dVar25 = (double)*(float *)(DAT_00e5a674 + 0xe8);
    fVar10 = *(float *)(DAT_00e5a674 + 0xec);
    dVar26 = (double)fVar10;
    if (DAT_00e5a9d2 != '\0') {
      *(float *)(DAT_00e5a674 + 0xc0) = fVar1;
      *(float *)(iVar11 + 0xc4) = *pfVar12;
      *(float *)(iVar11 + 200) = fVar2;
      *(float *)(iVar11 + 0xcc) = fVar3;
      *pfVar13 = fVar4;
      *(float *)(iVar11 + 0xd4) = fVar5;
      *(float *)(iVar11 + 0xd8) = fVar6;
      *(float *)(iVar11 + 0xdc) = fVar7;
      *pfVar14 = fVar8;
      *(float *)(iVar11 + 0xe4) = fVar9;
      *(float *)(iVar11 + 0xec) = fVar10;
      *(float *)(iVar11 + 0xe8) = (float)(dVar25 * 2.0);
    }
    mobyfunc::MB_AddToDrawList(iVar11,1);
    iVar11 = DAT_00e5a674;
    if (DAT_00e5a9d2 != '\0') {
      pfVar14 = (float *)(DAT_00e5a674 + 0xd0);
      pfVar12 = (float *)(DAT_00e5a674 + 0xe0);
      *(float *)(DAT_00e5a674 + 0xc0) = (float)dVar15;
      *(float *)(iVar11 + 0xc4) = (float)dVar16;
      *(float *)(iVar11 + 200) = (float)dVar17;
      *(float *)(iVar11 + 0xcc) = (float)dVar18;
      *pfVar14 = (float)dVar19;
      *(float *)(iVar11 + 0xd4) = (float)dVar20;
      *(float *)(iVar11 + 0xd8) = (float)dVar21;
      *(float *)(iVar11 + 0xdc) = (float)dVar22;
      *pfVar12 = (float)dVar23;
      *(float *)(iVar11 + 0xe4) = (float)dVar24;
      *(float *)(iVar11 + 0xe8) = (float)dVar25;
      *(float *)(iVar11 + 0xec) = (float)dVar26;
    }
  }
  return;
}



//==== 0016ffe0  ns=vendor  size=0x9c
// sig: int Vendor_FormatBolts(char * buf, int value)
// callers(0): 
// callees(1): 005cd2a8 libc::snprintf
// strings: 00653f98: '%d,%03d'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vendor::Vendor_FormatBolts(char *buf,int value)

{
  int iVar1;
  
  if (value < 1000) {
    iVar1 = libc::snprintf(buf,"%d",value);
  }
  else {
    iVar1 = libc::snprintf(buf,"%d,%03d",value / 1000,value % 1000);
  }
  return iVar1;
}



