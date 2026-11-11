//==== 00020050  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY458(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY458(void)

{
  DAT_0071d180 = 0x10000;
  return;
}



//==== 000200b0  ns=mobyupdate_helpers  size=0x978
// sig: undefined M458_SpawnRocket(void)
// callers(2): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00382358 mobyupdate_unsorted::UpdateMoby_440
// callees(10): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 001206e8 partupd::SpawnPart_2; 001268f8 partupd::SpawnPart_21; 00500ca4 fastfunc::FastEulerToMtx1; 00502758 fastfunc::FastDoubleToInt

ulonglong mobyupdate_helpers::M458_SpawnRocket
                    (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulonglong param_5,ulonglong param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  ulonglong *puVar11;
  int iVar12;
  undefined4 uVar13;
  MobyInstance *pMVar20;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar21;
  ulonglong uVar19;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar27;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f14;
  double dVar37;
  ulonglong in_f15;
  double dVar38;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar39;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar40;
  ulonglong in_f22;
  double dVar41;
  ulonglong in_f23;
  double dVar42;
  ulonglong in_f24;
  double dVar43;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar15 = uVar19 - 0x250;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar19;
  puVar11[0x4c] = in_LR;
  puVar11[0x38] = in_f14;
  puVar11[0x39] = in_f15;
  puVar11[0x3a] = in_f16;
  puVar11[0x3b] = in_f17;
  puVar11[0x3c] = in_f18;
  puVar11[0x3d] = in_f19;
  puVar11[0x3e] = in_f20;
  puVar11[0x3f] = in_f21;
  puVar11[0x40] = in_f22;
  puVar11[0x41] = in_f23;
  puVar11[0x42] = in_f24;
  puVar11[0x43] = in_f25;
  puVar11[0x44] = in_f26;
  puVar11[0x45] = in_f27;
  puVar11[0x46] = in_f28;
  puVar11[0x47] = in_f29;
  puVar11[0x48] = in_f30;
  puVar11[0x49] = in_f31;
  puVar11[0x37] = unaff_r31;
  puVar11[0x32] = unaff_r26;
  puVar11[0x35] = unaff_r29;
  puVar11[0x34] = unaff_r28;
  puVar11[0x36] = unaff_r30;
  puVar11[0x33] = unaff_r27;
  puVar11[0x31] = unaff_r25;
  puVar11[0x30] = unaff_r24;
  puVar11[0x2f] = unaff_r23;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  pMVar20 = mobyfunc::CreateMoby(ROCKET_01CA);
  dVar50 = (double)fStack00000040;
  dVar48 = (double)fStack00000048;
  dVar45 = (double)fStack00000044;
  puVar11[0x27] = (longlong)(int)pMVar20;
  dVar44 = (double)fStack0000004c;
  if (pMVar20 != (MobyInstance *)0x0) {
    uVar26 = puVar11[0x27];
    pMVar20 = (MobyInstance *)uVar26;
    pvVar9 = pMVar20->pVar;
    *(undefined4 *)((int)pvVar9 + 0x14) = param_1;
    *(undefined4 *)((int)pvVar9 + 0x10) = param_7;
    puVar11[0x26] = ZEXT48(pvVar9);
    mobyfunc::SetColorOfMoby(pMVar20,0xa0,0xa0,0xa0);
    pMVar20->updateDistance = -1;
    pMVar20->drawDistance = 0xff;
    pMVar20->enabled = '\x01';
    dVar39 = 0.0;
    fStack00000054 = (float)param_5;
    fStack00000050 = (float)(param_5 >> 0x20);
    fStack00000058 = (float)(param_6 >> 0x20);
    fVar5 = ABS(fStack00000058);
    (pMVar20->rotation).x = 0.0;
    fStack0000005c = (float)param_6;
    fVar6 = SQRT(fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054);
    fVar4 = ABS(fVar6);
    *(float *)((int)puVar11 + 0xe4) = fVar6;
    *(float *)(puVar11 + 0x1d) = fVar4 - fVar5;
    uVar23 = (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1e) & 2 | param_6 >> 0x3d & 4;
    fVar6 = ABS(*(float *)((int)puVar11 + 0xe4));
    if (*(float *)(puVar11 + 0x1d) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    if (*(float *)(puVar11 + 0x1d) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    dVar40 = dVar39;
    if (0.0 < fVar6) {
      lVar14 = uVar19 - 0x240;
      lVar22 = uVar19 - 0x144;
      lVar24 = uVar19 - 0x134;
      lVar28 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x23) = fVar6;
      *(float *)(puVar11 + 0x22) = fVar6;
      *(float *)((int)puVar11 + 0x114) = fVar6;
      *(float *)((int)puVar11 + 0x10c) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x22) = *(float *)(puVar11 + 0x22) * fVar5;
      *(float *)((int)puVar11 + 0x114) = *(float *)((int)puVar11 + 0x114) * fVar6;
      *(float *)(puVar11 + 0x23) = *(float *)(puVar11 + 0x23) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar14 + 0x10c) = *(float *)((int)lVar14 + 0xfc) * fVar6 * fVar6;
        iVar27 = (int)lVar22;
        lVar14 = lVar14 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar24 = uVar19 - 0x144;
      pfVar25 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar22 = lVar24;
      do {
        fVar6 = *pfVar25;
        fVar5 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar14 + 0x10c) = *(float *)((int)lVar14 + 0x10c) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar22 = 2;
      lVar14 = lVar15;
      do {
        iVar27 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar27 + 0x10c)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar8 + fVar3);
    }
    fVar4 = ABS(fStack00000050);
    fVar5 = ABS(fStack00000054);
    (pMVar20->rotation).y = (float)-dVar40;
    *(float *)(puVar11 + 0x1c) = fVar4 - fVar5;
    uVar23 = param_5 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1e) & 2 | (param_5 << 0x20) >> 0x3d & 4;
    fVar6 = fVar4;
    if (*(float *)(puVar11 + 0x1c) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    if (*(float *)(puVar11 + 0x1c) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar40 = dVar39;
    if (0.0 < fVar6) {
      lVar14 = uVar19 - 0x240;
      lVar24 = uVar19 - 0x154;
      lVar22 = uVar19 - 0x164;
      lVar28 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x1f) = fVar6;
      *(float *)(puVar11 + 0x1e) = fVar6;
      *(float *)((int)puVar11 + 0xf4) = fVar6;
      *(float *)((int)puVar11 + 0xec) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x1e) = *(float *)(puVar11 + 0x1e) * fVar5;
      *(float *)((int)puVar11 + 0xf4) = *(float *)((int)puVar11 + 0xf4) * fVar6;
      *(float *)(puVar11 + 0x1f) = *(float *)(puVar11 + 0x1f) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar14 + 0xec) = *(float *)((int)lVar14 + 0xdc) * fVar6 * fVar6;
        iVar27 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar24 = uVar19 - 0x164;
      pfVar25 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar22 = lVar24;
      do {
        fVar6 = *pfVar25;
        fVar5 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar14 + 0xec) = *(float *)((int)lVar14 + 0xec) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar14 = 2;
      do {
        iVar27 = (int)lVar15;
        iVar12 = (int)lVar24;
        lVar15 = lVar15 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar27 + 0xec)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar4);
    }
    uVar23 = puVar11[0x26];
    (pMVar20->rotation).z = (float)dVar40;
    (pMVar20->pos).x = (float)dVar50;
    (pMVar20->pos).y = (float)dVar45;
    (pMVar20->pos).z = (float)dVar48;
    (pMVar20->pos).w = (float)dVar44;
    pfVar25 = (float *)uVar23;
    *pfVar25 = fStack00000050;
    pfVar25[1] = fStack00000054;
    pfVar25[2] = fStack00000058;
    pfVar25[3] = fStack0000005c;
    pfVar25[7] = (float)(((uint)((LZCOUNT(-(worldUpdateTime & 1)) << 0x3a) >> 0x3f) & 0xfffffffe) +
                        1);
    fastfunc::FastEulerToMtx1(uVar19 - 0x1b0,uVar26 + 0x40);
    auVar10 = ZEXT416(0);
    auVar53 = loadVectorLeftIndexed(0xffffffffffffd1ac,0x720000);
    auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
               auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      iVar27 = 0;
      dVar45 = 3.141592502593994;
      dVar48 = -3.141592502593994;
      dVar50 = -0.16666656732559204;
      dVar40 = 0.008333025500178337;
      dVar41 = -0.0001980741071747616;
      dVar42 = 2.601886990305502e-06;
      fVar5 = 10.5;
      fVar6 = 20.5;
      puVar11[0x2a] = 0x4000000000000000;
      puVar11[0x29] = 0x3ff921fb40000000;
      dVar43 = 1.2000000476837158;
      dVar44 = 1.5;
      puVar11[0x28] = 0x40d3880000000000;
      do {
        dVar38 = (double)fVar6;
        dVar37 = (double)fVar5;
        *(float *)(puVar11 + 0x2d) = fVar5;
        dVar29 = (double)mobyutil::MB_randRot();
        dVar30 = (double)mobyutil::MB_randRangeFloat
                                   (DAT_0071d1d0,
                                    (float)((double)DAT_0071d1d0 * (double)puVar11[0x2a]));
        fVar6 = *(float *)((int)puVar11 + 0xc4);
        dVar32 = (double)(float)(dVar29 + (double)puVar11[0x29]);
        fVar5 = *(float *)((int)puVar11 + 0xb4);
        fVar4 = *(float *)(puVar11 + 0x18);
        fVar3 = *(float *)(puVar11 + 0x16);
        fVar8 = *(float *)(puVar11 + 0x19);
        fVar7 = *(float *)(puVar11 + 0x17);
        dVar31 = (double)(float)(dVar45 - dVar29);
        if (dVar29 - (double)(float)(dVar45 - dVar29) < 0.0) {
          dVar31 = dVar29;
        }
        dVar51 = (double)mobyutil::g_FrameTime;
        dVar35 = (double)(float)(dVar45 - dVar32);
        if (dVar32 - (double)(float)(dVar45 - dVar32) < 0.0) {
          dVar35 = dVar32;
        }
        dVar34 = (double)SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar6 * fVar6);
        dVar33 = (double)(float)(dVar48 - dVar29);
        if ((double)(float)(dVar48 - dVar29) - dVar31 < 0.0) {
          dVar33 = dVar31;
        }
        dVar31 = (double)(float)(dVar48 - dVar32);
        if ((double)(float)(dVar48 - dVar32) - dVar35 < 0.0) {
          dVar31 = dVar35;
        }
        dVar35 = (double)(float)(dVar33 * dVar33);
        dVar32 = (double)SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar5 * fVar5);
        dVar36 = (double)(float)(dVar31 * dVar31);
        dVar46 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar31));
        dVar52 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar33));
        dVar49 = (double)(float)(dVar36 * dVar46);
        dVar47 = (double)(float)(dVar35 * dVar52);
        dVar29 = (double)animationSpeed;
        *(undefined4 *)((int)puVar11 + 0x9c) = *(undefined4 *)((int)puVar11 + 0xcc);
        *(undefined4 *)((int)puVar11 + 0x8c) = *(undefined4 *)((int)puVar11 + 0xcc);
        uVar13 = DAT_0071d1c8;
        uVar21 = DAT_0071d1c4;
        fVar1 = (float)((double)((float)(dVar30 * dVar51) *
                                (float)((double)(float)(dVar36 * dVar49) * dVar42 +
                                       (double)(float)(dVar49 * dVar41 +
                                                      (double)(float)(dVar46 * dVar40 +
                                                                     (double)(float)((double)(float)
                                                  (dVar36 * dVar31) * dVar50 + dVar31))))) / dVar34)
        ;
        fVar2 = (float)((double)((float)(dVar30 * dVar51) *
                                (float)((double)(float)(dVar35 * dVar47) * dVar42 +
                                       (double)(float)(dVar47 * dVar41 +
                                                      (double)(float)(dVar52 * dVar40 +
                                                                     (double)(float)((double)(float)
                                                  (dVar35 * dVar33) * dVar50 + dVar33))))) / dVar32)
        ;
        *(float *)((int)puVar11 + 0x16c) = (float)dVar38;
        *(undefined4 *)((int)puVar11 + 0x8c) = DAT_0071d1e0;
        *(undefined4 *)((int)puVar11 + 0x9c) = DAT_0071d1e4;
        puVar11[0x2b] = (longlong)(int)(dVar29 * dVar37);
        puVar11[0x2b] = (longlong)(int)(dVar29 * dVar38);
        dVar31 = dVar39;
        if (dVar39 - dVar34 < 0.0) {
          dVar31 = (double)(fVar8 * fVar1);
        }
        dVar29 = dVar39;
        if (dVar39 - dVar34 < 0.0) {
          dVar29 = (double)(fVar6 * fVar1);
        }
        dVar30 = dVar39;
        if (dVar39 - dVar34 < 0.0) {
          dVar30 = (double)(fVar4 * fVar1);
        }
        if (dVar34 - dVar39 < 0.0) {
          dVar31 = (double)(fVar8 * fVar1);
        }
        if (dVar34 - dVar39 < 0.0) {
          dVar29 = (double)(fVar6 * fVar1);
        }
        if (dVar34 - dVar39 < 0.0) {
          dVar30 = (double)(fVar4 * fVar1);
        }
        dVar37 = dVar39;
        if (dVar39 - dVar32 < 0.0) {
          dVar37 = (double)(fVar7 * fVar2);
        }
        dVar38 = dVar39;
        if (dVar39 - dVar32 < 0.0) {
          dVar38 = (double)(fVar5 * fVar2);
        }
        dVar35 = dVar39;
        if (dVar39 - dVar32 < 0.0) {
          dVar35 = (double)(fVar3 * fVar2);
        }
        if (dVar32 - dVar39 < 0.0) {
          dVar37 = (double)(fVar7 * fVar2);
        }
        if (dVar32 - dVar39 < 0.0) {
          dVar38 = (double)(fVar5 * fVar2);
        }
        if (dVar32 - dVar39 < 0.0) {
          dVar35 = (double)(fVar3 * fVar2);
        }
        *(float *)(puVar11 + 0x11) = (float)(dVar31 + dVar37);
        *(float *)((int)puVar11 + 0x84) = (float)(dVar29 + dVar38);
        *(float *)(puVar11 + 0x10) = (float)(dVar30 + dVar35);
        *(float *)(puVar11 + 0x12) = (float)(dVar30 + dVar35);
        *(float *)((int)puVar11 + 0x94) = (float)(dVar29 + dVar38);
        *(float *)(puVar11 + 0x13) = (float)(dVar31 + dVar37);
        mobyutil::MB_randRange
                  (*(undefined4 *)((int)puVar11 + 0x15c),*(undefined4 *)((int)puVar11 + 0x15c));
        partupd::SpawnPart_21(puVar11[0x28],uVar26 + 0x10,uVar19 - 0x1d0,uVar21,uVar13);
        puVar11[0x2b] = (longlong)DAT_0071d1d4;
        uVar13 = DAT_0071d1c0;
        uVar21 = DAT_0071d1bc;
        dVar31 = (double)mobyutil::MB_randRangeFloat
                                   ((float)(longlong)puVar11[0x2b],
                                    (float)((double)(longlong)puVar11[0x2b] * dVar43));
        uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
        puVar11[0x2b] = (longlong)DAT_0071d1d8;
        dVar31 = (double)mobyutil::MB_randRangeFloat
                                   ((float)(longlong)puVar11[0x2b],
                                    (float)((double)(longlong)puVar11[0x2b] * dVar43));
        uVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
        puVar11[0x2b] = (longlong)DAT_0071d1dc;
        dVar31 = (double)mobyutil::MB_randRangeFloat
                                   ((float)(longlong)puVar11[0x2b],
                                    (float)((double)(longlong)puVar11[0x2b] * dVar44));
        uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
        puVar11[0xe] = 0xffffffffffffffff;
        partupd::SpawnPart_2
                  (uVar26 + 0x10,uVar19 - 0x1d0,uVar19 - 0x1c0,uVar21,uVar13,uVar16,uVar17,uVar18);
        iVar27 = iVar27 + 1;
        puVar11[0x2b] = (longlong)iVar27;
        fVar5 = *(float *)(puVar11 + 0x2d);
        fVar6 = *(float *)((int)puVar11 + 0x16c);
      } while ((float)(longlong)puVar11[0x2b] < DAT_0071d1ac);
    }
    if (Level == Hoven) {
      puVar11[0x2b] = (longlong)(int)(animationSpeed * 120.5);
      uVar21 = *(undefined4 *)((int)puVar11 + 0x15c);
    }
    else {
      uVar21 = fastfunc::FastDoubleToInt((double)(DAT_0071d1a4 * animationSpeed));
    }
    uVar19 = puVar11[0x27];
    *(undefined4 *)((int)puVar11[0x26] + 0x18) = uVar21;
    mobyfunc::UpdateMobyTransform((MobyInstance *)uVar19);
  }
  return puVar11[0x27];
}



//==== 00020a80  ns=mobyupdate_unsorted  size=0x8d4
// sig: undefined UpdateMoby_458(MobyInstance * moby)
// callers(0): 
// callees(10): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0010e030 mobyutil::MB_genericExplosion; 00110488 mobyutil::ClampVec3Magnitude; 001206e8 partupd::SpawnPart_2; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 458 */

void mobyupdate_unsorted::UpdateMoby_458(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  byte in_cr6;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  Vec4 local_120;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  MobyInstance *local_100;
  undefined4 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  longlong local_e0;
  
  lVar15 = (longlong)(int)moby;
  pfVar5 = (float *)moby->pVar;
  fVar6 = (moby->pos).x + *pfVar5;
  (moby->pos).x = fVar6;
  fVar1 = (moby->pos).y + pfVar5[1];
  (moby->pos).y = fVar1;
  fVar2 = (moby->pos).z + pfVar5[2];
  (moby->pos).z = fVar2;
  if ((((fVar1 < 10.0 || fVar6 < 10.0) || (fVar2 < 10.0)) || (500.0 < fVar1 || 500.0 < fVar6)) ||
     (500.0 < fVar2)) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    auVar10 = ZEXT416(0);
    iVar19 = 0;
    auVar27 = loadVectorLeftIndexed(0xffffffffffffd1a8,0x720000);
    auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
               auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      dVar25 = 0.0;
      dVar24 = 1.2000000476837158;
      dVar23 = 1.5;
      do {
        mobyutil::MB_randRot();
        mobyutil::MB_randRangeFloat((float)dVar25,DAT_0071d1cc);
        uVar14 = DAT_0071d1b8;
        uVar13 = DAT_0071d1b4;
        local_e0 = (longlong)DAT_0071d1d4;
        dVar20 = (double)mobyutil::MB_randRangeFloat
                                   ((float)local_e0,(float)((double)local_e0 * dVar24));
        uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
        local_e0 = (longlong)DAT_0071d1d8;
        dVar20 = (double)mobyutil::MB_randRangeFloat
                                   ((float)local_e0,(float)((double)local_e0 * dVar24));
        uVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
        local_e0 = (longlong)DAT_0071d1dc;
        dVar20 = (double)mobyutil::MB_randRangeFloat
                                   ((float)local_e0,(float)((double)local_e0 * dVar23));
        uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
        partupd::SpawnPart_2(local_150,local_140,local_130,uVar13,uVar14,uVar16,uVar17,uVar18);
        iVar19 = iVar19 + 1;
        local_e0 = (longlong)iVar19;
      } while ((float)local_e0 < DAT_0071d1a8);
    }
    local_e0 = (longlong)(int)pfVar5[7];
    dVar23 = (double)fastfunc::FastWrapRot
                               ((moby->rotation).x,
                                DAT_0071d1b0 * 0.017453292 * mobyutil::g_FrameTime * (float)local_e0
                               );
    fVar6 = pfVar5[4];
    (moby->rotation).x = (float)dVar23;
    if (fVar6 != 0.0) {
      if ((*(char *)((int)fVar6 + 0x20) == -3 || *(char *)((int)fVar6 + 0x20) == -2) ||
         (*(short *)((int)fVar6 + 0xa6) != 0x1b3)) {
        pfVar5[4] = 0.0;
      }
      else {
        fVar2 = (moby->pos).y;
        fVar1 = fVar2 - *(float *)((int)fVar6 + 0x14);
        fVar3 = (moby->pos).x;
        dVar25 = (double)*pfVar5;
        fVar12 = fVar3 - *(float *)((int)fVar6 + 0x10);
        fVar4 = (moby->pos).z;
        fVar11 = fVar4 - *(float *)((int)fVar6 + 0x18);
        iVar19 = *(int *)((int)fVar6 + 0x78);
        dVar26 = (double)SQRT(pfVar5[2] * pfVar5[2] +
                              (float)(dVar25 * dVar25 + (double)(pfVar5[1] * pfVar5[1])));
        dVar20 = 0.0;
        local_120.w = *(float *)(iVar19 + 0x2c);
        fVar1 = (float)((double)SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar1 * fVar1) / dVar26);
        fVar2 = (*(float *)(iVar19 + 0x24) * fVar1 + *(float *)((int)fVar6 + 0x14)) - fVar2;
        fVar3 = (*(float *)(iVar19 + 0x20) * fVar1 + *(float *)((int)fVar6 + 0x10)) - fVar3;
        fVar4 = (*(float *)(iVar19 + 0x28) * fVar1 + *(float *)((int)fVar6 + 0x18)) - fVar4;
        dVar24 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar6 = (float)(dVar26 / dVar24);
        dVar23 = dVar20;
        if (0.0 - dVar24 < 0.0) {
          dVar23 = (double)(fVar3 * fVar6);
        }
        dVar21 = dVar20;
        if (0.0 - dVar24 < 0.0) {
          dVar21 = (double)(fVar2 * fVar6);
        }
        dVar22 = dVar20;
        if (0.0 - dVar24 < 0.0) {
          dVar22 = (double)(fVar4 * fVar6);
        }
        if (dVar24 - 0.0 < 0.0) {
          dVar23 = (double)(fVar3 * fVar6);
        }
        if (dVar24 - 0.0 < 0.0) {
          dVar21 = (double)(fVar2 * fVar6);
        }
        if (dVar24 - 0.0 < 0.0) {
          dVar22 = (double)(fVar4 * fVar6);
        }
        local_120.x = (float)(dVar23 - dVar25);
        local_120.y = (float)(dVar21 - (double)pfVar5[1]);
        local_120.z = (float)(dVar22 - (double)pfVar5[2]);
        mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 3.7),&local_120);
        fVar1 = *pfVar5 + local_120.x;
        *pfVar5 = fVar1;
        fVar2 = pfVar5[1] + local_120.y;
        pfVar5[1] = fVar2;
        fVar3 = pfVar5[2] + local_120.z;
        dVar24 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
        fVar6 = (float)(dVar26 / dVar24);
        dVar23 = dVar20;
        if (dVar20 - dVar24 < 0.0) {
          dVar23 = (double)(fVar1 * fVar6);
        }
        dVar25 = dVar20;
        if (dVar20 - dVar24 < 0.0) {
          dVar25 = (double)(fVar2 * fVar6);
        }
        dVar26 = dVar20;
        if (dVar20 - dVar24 < 0.0) {
          dVar26 = (double)(fVar3 * fVar6);
        }
        if (dVar24 - dVar20 < 0.0) {
          dVar23 = (double)(fVar1 * fVar6);
        }
        if (dVar24 - dVar20 < 0.0) {
          dVar25 = (double)(fVar2 * fVar6);
        }
        if (dVar24 - dVar20 < 0.0) {
          dVar26 = (double)(fVar3 * fVar6);
        }
        *pfVar5 = (float)dVar23;
        pfVar5[1] = (float)dVar25;
        pfVar5[2] = (float)dVar26;
      }
    }
    local_fc = 0x50001;
    dVar23 = 2.0;
    local_f4 = 0x40000000;
    local_110 = *pfVar5;
    local_10c = pfVar5[1];
    local_f0 = 1;
    local_108 = pfVar5[2];
    local_104 = pfVar5[3];
    local_100 = moby;
    iVar19 = fastfunc::FastDecTimerS32(pfVar5 + 6);
    if (iVar19 == 0) {
      iVar19 = collproc::CollLine(local_160,lVar15 + 0x10,0,lVar15,&local_110);
      fVar6 = CollOutput.ip.x;
      if (iVar19 != 0) {
        dVar24 = (double)CollOutput.ip.x;
        uVar7 = (int)CollOutput.ip.x >> 0x1f;
        (moby->pos).x = CollOutput.ip.x;
        fVar1 = CollOutput.ip.y;
        dVar25 = (double)CollOutput.ip.y;
        uVar8 = (int)CollOutput.ip.y >> 0x1f;
        (moby->pos).y = CollOutput.ip.y;
        fVar2 = CollOutput.ip.z;
        dVar20 = (double)CollOutput.ip.z;
        uVar9 = (int)CollOutput.ip.z >> 0x1f;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        if ((0x41700000 < (int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) &&
             0x41700000 < (int)((uVar8 >> 1 ^ (uint)fVar1) - uVar8)) &&
           (0x41700000 < (int)((uVar9 >> 1 ^ (uint)fVar2) - uVar9))) {
          dVar26 = 24.0;
          if ((double)(float)(dVar24 - dVar23) - 24.0 < 0.0) {
            dVar26 = (double)(float)(dVar24 - dVar23);
          }
          if ((double)(float)(dVar25 - dVar23) - dVar26 < 0.0) {
            dVar26 = (double)(float)(dVar25 - dVar23);
          }
          if ((double)(float)(dVar20 - dVar23) - dVar26 < 0.0) {
            dVar26 = (double)(float)(dVar20 - dVar23);
          }
          mobyutil::MB_genericExplosion
                    (0x4008000000000000,0x4008000000000000,0x4014000000000000,0x4008000000000000,
                     0x4022000000000000,0x3ff0000000000000,dVar26,lVar15,pfVar5,lVar15 + 0x10,
                     0xffffffffffffffff,1,0,10,0x14);
        }
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00021358  ns=stub  size=0x8
// sig: undefined STUB_00021358(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(0): 

undefined8 stub::STUB_00021358(void)

{
  return 0;
}



//==== 00021360  ns=stub  size=0x8
// sig: undefined STUB_00021360(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00021360(void)

{
  return 0;
}



//==== 00021368  ns=stub  size=0x8
// sig: undefined STUB_00021368(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00021368(void)

{
  return 0;
}



//==== 00021370  ns=stub  size=0x8
// sig: undefined STUB_00021370(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00021370(void)

{
  return 0;
}



//==== 00021378  ns=stub  size=0x8
// sig: undefined STUB_00021378(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00021378(void)

{
  return 0;
}



//==== 00021380  ns=stub  size=0x8
// sig: undefined STUB_00021380(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00021380(void)

{
  return 0;
}



//==== 00021388  ns=stub  size=0x8
// sig: undefined STUB_00021388(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00021388(void)

{
  return 0;
}



//==== 00021390  ns=stub  size=0x8
// sig: undefined STUB_00021390(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00021390(void)

{
  return 0;
}



//==== 00021398  ns=stub  size=0x8
// sig: undefined STUB_00021398(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00021398(void)

{
  return 0;
}



//==== 000213a0  ns=stub  size=0x8
// sig: undefined STUB_000213a0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_000213a0(void)

{
  return 0;
}



//==== 000213a8  ns=stub  size=0x8
// sig: undefined STUB_000213a8(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_000213a8(void)

{
  return 0;
}



//==== 000213b0  ns=stub  size=0x8
// sig: undefined STUB_000213b0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_000213b0(void)

{
  return 0;
}



//==== 000213b8  ns=Global  size=0xa4cc
// sig: undefined MapVTables(void)
// callers(1): 0001401c boot::boot
// callees(0): 

void MapVTables(void)

{
  CameraVTable[0].type = 0;
  CameraVTable[0].activate = &PTR_Camera0_Activate_00703b98;
  CameraVTable[0].init = &PTR_Camera0_Init_00703ab8;
  CameraVTable[0].update = &PTR_Camera0_Update_00703ba0;
  CameraVTable[0].exit = &PTR_STUB_00034cdc_00703ba8;
  CameraVTable[1].type = 1;
  CameraVTable[1].activate = &PTR_ActivateCamera_1_00703bc8;
  CameraVTable[1].init = &PTR_InitCamera_1_00703bd0;
  CameraVTable[1].update = &PTR_UpdateCamera_1_00703bd8;
  CameraVTable[1].exit = &PTR_ExitCamera_1_00703be0;
  CameraVTable[2].type = 3;
  CameraVTable[2].activate = &PTR_ActivateCamera_3_00703fd0;
  CameraVTable[2].init = &PTR_InitCamera_3_00703fd8;
  CameraVTable[2].update = &PTR_UpdateCamera_3_00703fc8;
  CameraVTable[2].exit = &PTR_ExitCamera_3_00703fe0;
  CameraVTable[3].type = 4;
  CameraVTable[3].activate = &PTR_ActivateCamera_4_00704038;
  CameraVTable[3].init = &PTR_InitCamera_4_00704040;
  CameraVTable[3].update = &PTR_UpdateCamera_4_00704030;
  CameraVTable[3].exit = &PTR_ExitCamera_4_00704048;
  CameraVTable[4].type = 5;
  CameraVTable[4].activate = &PTR_ActivateCamera_5_007040b0;
  CameraVTable[4].init = &PTR_InitCamera_5_007040a0;
  CameraVTable[4].update = &PTR_UpdateCamera_5_007040b8;
  CameraVTable[4].exit = &PTR_STUB_000489fc_007040c0;
  CameraVTable[5].type = 6;
  CameraVTable[5].activate = &PTR_ActivateCamera_6_00704108;
  CameraVTable[5].init = &PTR_InitCamera_6_00704110;
  CameraVTable[5].update = &PTR_UpdateCamera_6_00704118;
  CameraVTable[5].exit = &PTR_STUB_000499f8_00704120;
  CameraVTable[6].type = 7;
  CameraVTable[6].activate = &PTR_ActivateCamera_7_00704170;
  CameraVTable[6].init = &PTR_InitCamera_7_00704130;
  CameraVTable[6].update = &PTR_UpdateCamera_7_00704178;
  CameraVTable[6].exit = &PTR_ExitCamera_7_00704180;
  CameraVTable[7].type = 8;
  CameraVTable[7].activate = &PTR_ActivateCamera_8_007041c8;
  CameraVTable[7].init = &PTR_InitCamera_8_007041d0;
  CameraVTable[7].update = &PTR_UpdateCamera_8_007041d8;
  CameraVTable[7].exit = &PTR_STUB_0004d5dc_007041e0;
  CameraVTable[8].type = 9;
  CameraVTable[8].activate = &PTR_ActivateCamera_9_00704230;
  CameraVTable[8].init = &PTR_InitCamera_9_00704210;
  CameraVTable[8].update = &PTR_UpdateCamera_9_00704238;
  CameraVTable[8].exit = &PTR_ExitCamera_9_00704240;
  CameraVTable[9].type = 10;
  CameraVTable[9].activate = &PTR_ActivateCamera_10_00703c40;
  CameraVTable[9].init = &PTR_InitCamera_10_00703c20;
  CameraVTable[9].update = &PTR_UpdateCamera_10_00703c48;
  CameraVTable[9].exit = &PTR_ExitCamera_10_00703c50;
  CameraVTable[10].type = 0xb;
  CameraVTable[10].activate = &PTR_ActivateCamera_11_00703c78;
  CameraVTable[10].init = &PTR_InitCamera_11_00703c68;
  CameraVTable[10].update = &PTR_UpdateCamera_11_00703c80;
  CameraVTable[10].exit = &PTR_ExitCamera_11_00703c88;
  CameraVTable[0xb].type = 0xc;
  CameraVTable[0xb].activate = &PTR_ActivateCamera_12_00703cb8;
  CameraVTable[0xb].init = &PTR_InitCamera_12_00703ca8;
  CameraVTable[0xb].update = &PTR_UpdateCamera_12_00703cc0;
  CameraVTable[0xb].exit = &PTR_ExitCamera_12_00703cc8;
  CameraVTable[0xc].type = 0xd;
  CameraVTable[0xc].activate = &PTR_ActivateCamera_13_00703d18;
  CameraVTable[0xc].init = &PTR_InitCamera_13_00703d00;
  CameraVTable[0xc].update = &PTR_UpdateCamera_13_00703d20;
  CameraVTable[0xc].exit = &PTR_ExitCamera_13_00703d28;
  CameraVTable[0xd].type = 0xe;
  CameraVTable[0xd].activate = &PTR_ActivateCamera_14_00703d68;
  CameraVTable[0xd].init = &PTR_InitCamera_14_00703d40;
  CameraVTable[0xd].update = &PTR_UpdateCamera_14_00703d70;
  CameraVTable[0xd].exit = &PTR_ExitCamera_14_00703d78;
  CameraVTable[0xe].type = 0xf;
  CameraVTable[0xe].activate = &PTR_ActivateCamera_15_00703da8;
  CameraVTable[0xe].init = &PTR_InitCamera_15_00703d98;
  CameraVTable[0xe].update = &PTR_UpdateCamera_15_00703db0;
  CameraVTable[0xe].exit = &PTR_ExitCamera_15_00703db8;
  CameraVTable[0xf].type = 0x10;
  CameraVTable[0xf].activate = &PTR_ActivateCamera_16_00703de8;
  CameraVTable[0xf].init = &PTR_STUB_0003d30c_00703df0;
  CameraVTable[0xf].update = &PTR_STUB_0003d310_00703df8;
  CameraVTable[0xf].exit = &PTR_STUB_0003d314_00703e00;
  CameraVTable[0x10].type = 0x11;
  CameraVTable[0x10].activate = &PTR_ActivateCamera_17_00703e20;
  CameraVTable[0x10].init = &PTR_STUB_0003e268_00703e28;
  CameraVTable[0x10].update = &PTR_STUB_0003e26c_00703e30;
  CameraVTable[0x10].exit = &PTR_STUB_0003e270_00703e38;
  CameraVTable[0x11].type = 0x12;
  CameraVTable[0x11].activate = &PTR_ActivateCamera_18_00703e68;
  CameraVTable[0x11].init = &PTR_STUB_0003fb84_00703e70;
  CameraVTable[0x11].update = &PTR_STUB_0003fb88_00703e78;
  CameraVTable[0x11].exit = &PTR_STUB_0003fb8c_00703e80;
  CameraVTable[0x12].type = 0x13;
  CameraVTable[0x12].activate = &PTR_ActivateCamera_19_00703ec0;
  CameraVTable[0x12].init = &PTR_InitCamera_19_00703eb0;
  CameraVTable[0x12].update = &PTR_UpdateCamera_19_00703eb8;
  CameraVTable[0x12].exit = &PTR_STUB_00041020_00703ec8;
  CameraVTable[0x13].activate = &PTR_ActivateCamera_20_00703f08;
  CameraVTable[0x13].type = 0x14;
  CameraVTable[0x13].init = &PTR_InitCamera_20_00703ef8;
  CameraVTable[0x13].update = &PTR_UpdateCamera_20_00703f00;
  CameraVTable[0x14].type = 0x15;
  CameraVTable[0x14].activate = &PTR_ActivateCamera_21_00703f30;
  CameraVTable[0x13].exit = &PTR_STUB_000424c0_00703f10;
  CameraVTable[0x14].init = &PTR_InitCamera_21_00703f20;
  CameraVTable[0x14].update = &PTR_UpdateCamera_21_00703f28;
  CameraVTable[0x14].exit = &PTR_ExitCamera_21_00703f38;
  CameraVTable[0x15].activate = &PTR_ActivateCamera_22_00703f60;
  CameraVTable[0x15].type = 0x16;
  CameraVTable[0x15].update = &PTR_STUB_00044a18_00703f70;
  CameraVTable[0x15].exit = &PTR_STUB_00044a1c_00703f78;
  CameraVTable[0x15].init = &PTR_STUB_00044a14_00703f68;
  CameraVTable[0x16].activate = &PTR_ActivateCamera_23_00703f98;
  CameraVTable[0x16].update = &PTR_STUB_000451c0_00703fa8;
  CameraVTable[0x16].init = &PTR_STUB_000451bc_00703fa0;
  CameraVTable[0x16].exit = &PTR_STUB_000451c4_00703fb0;
  CameraVTable[0x17].activate = &PTR_ActivateCamera_309_00703ff0;
  CameraVTable[0x16].type = 0x17;
  CameraVTable[0x17].type = 0x135;
  CameraVTable[0x17].init = &PTR_STUB_00046848_00703ff8;
  INT_009273ec = 0;
  INT_009273f0 = 0;
  CameraVTable[0x17].update = &PTR_STUB_0004684c_00704000;
  CameraVTable[0x17].exit = &PTR_STUB_00046850_00704008;
  INT_009273f4 = 0;
  INT_009273f8 = 0;
  INT_009273e8 = -1;
  SoundVTable[0].idx = 0;
  SoundVTable[0].update = &PTR_UpdateSound_0_00708248;
  SoundVTable[1].idx = 1;
  SoundVTable[1].update = &PTR_UpdateSound_1_00708250;
  SoundVTable[2].idx = 2;
  SoundVTable[2].update = &PTR_UpdateSound_2_00708258;
  SoundVTable[3].idx = 3;
  SoundVTable[3].update = &PTR_UpdateSound_3_00708260;
  SoundVTable[4].idx = 4;
  SoundVTable[5].idx = 5;
  SoundVTable[5].update = &PTR_UpdateSound_5_00708278;
  SoundVTable[6].idx = 6;
  SoundVTable[6].update = &PTR_UpdateSound_6_00708280;
  MobyVTable[0].idx = 0;
  SoundVTable[4].update = &PTR_UpdateSound_4_00708270;
  MobyVTable[0].update = (void **)0x0;
  MobyVTable[0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[1].idx = 1;
  MobyVTable[1].update = &PTR_UpdateMoby_1_00708290;
  MobyVTable[1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[2].idx = 2;
  MobyVTable[2].update = (void **)0x0;
  MobyVTable[2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[3].idx = 3;
  MobyVTable[3].update = &PTR_UpdateMoby_3_0070c0e0;
  MobyVTable[3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[4].idx = 4;
  MobyVTable[4].update = &PTR_UpdateMoby_4_0070c7c8;
  MobyVTable[4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[5].idx = 5;
  MobyVTable[5].update = (void **)0x0;
  MobyVTable[5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[6].idx = 6;
  MobyVTable[6].update = &PTR_UpdateMoby_6_0070d7d8;
  MobyVTable[6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[7].idx = 7;
  MobyVTable[7].update = (void **)0x0;
  MobyVTable[7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[8].idx = 8;
  MobyVTable[8].update = &PTR_UpdateMoby_8_0070ead8;
  MobyVTable[8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[9].idx = 9;
  MobyVTable[9].update = (void **)0x0;
  MobyVTable[9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[10].idx = 10;
  MobyVTable[10].update = (void **)0x0;
  MobyVTable[10].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb].idx = 0xb;
  MobyVTable[0xb].update = &PTR_UpdateMoby_11_00708b20;
  MobyVTable[0xb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xc].idx = 0xc;
  MobyVTable[0xc].update = (void **)0x0;
  MobyVTable[0xc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd].idx = 0xd;
  MobyVTable[0xd].update = &PTR_UpdateMoby__13_14_15_16__00709d38;
  MobyVTable[0xd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe].idx = 0xe;
  MobyVTable[0xe].update = &PTR_UpdateMoby__13_14_15_16__00709d38;
  MobyVTable[0xe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf].idx = 0xf;
  MobyVTable[0xf].update = &PTR_UpdateMoby__13_14_15_16__00709d38;
  MobyVTable[0xf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x10].idx = 0x10;
  MobyVTable[0x10].update = &PTR_UpdateMoby__13_14_15_16__00709d38;
  MobyVTable[0x10].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x11].idx = 0x11;
  MobyVTable[0x11].update = &PTR_UpdateMoby_17_0070ad98;
  MobyVTable[0x11].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x12].idx = 0x12;
  MobyVTable[0x12].update = &PTR_UpdateMoby_18_0070af38;
  MobyVTable[0x12].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x13].idx = 0x13;
  MobyVTable[0x13].update = &PTR_UpdateMoby_19_0070b2d0;
  MobyVTable[0x13].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x14].idx = 0x14;
  MobyVTable[0x14].update = &PTR_UpdateMoby_20_0070b6a8;
  MobyVTable[0x14].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x15].idx = 0x15;
  MobyVTable[0x15].update = &PTR_UpdateMoby__21_244__0070bbe8;
  MobyVTable[0x15].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x16].idx = 0x16;
  MobyVTable[0x16].update = &PTR_UpdateMoby_22_0070b898;
  MobyVTable[0x16].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x17].idx = 0x17;
  MobyVTable[0x17].update = &PTR_UpdateMoby_23_0070b928;
  MobyVTable[0x17].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x18].idx = 0x18;
  MobyVTable[0x18].update = (void **)0x0;
  MobyVTable[0x18].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x19].idx = 0x19;
  MobyVTable[0x19].update = &PTR_UpdateMoby_25_0070bc80;
  MobyVTable[0x19].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a].idx = 0x1a;
  MobyVTable[0x1a].update = (void **)0x0;
  MobyVTable[0x1a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b].idx = 0x1b;
  MobyVTable[0x1b].update = &PTR_UpdateMoby_27_0070bde0;
  MobyVTable[0x1b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c].idx = 0x1c;
  MobyVTable[0x1c].update = &PTR_UpdateMoby_28_0070bf18;
  MobyVTable[0x1c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d].idx = 0x1d;
  MobyVTable[0x1d].update = &PTR_UpdateMoby_29_0070bfc8;
  MobyVTable[0x1d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e].idx = 0x1e;
  MobyVTable[0x1e].update = &PTR_UpdateMoby_30_0070c0f0;
  MobyVTable[0x1e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1f].idx = 0x1f;
  MobyVTable[0x1f].update = &PTR_UpdateMoby_31_0070c208;
  MobyVTable[0x1f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x20].idx = 0x20;
  MobyVTable[0x20].update = (void **)0x0;
  MobyVTable[0x20].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x21].idx = 0x21;
  MobyVTable[0x21].update = (void **)0x0;
  MobyVTable[0x21].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x22].idx = 0x22;
  MobyVTable[0x22].update = (void **)0x0;
  MobyVTable[0x22].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x23].idx = 0x23;
  MobyVTable[0x23].update = &PTR_UpdateMoby_35_0070c530;
  MobyVTable[0x23].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x24].idx = 0x24;
  MobyVTable[0x24].update = &PTR_UpdateMoby_36_0070c570;
  MobyVTable[0x24].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x25].idx = 0x25;
  MobyVTable[0x25].update = &PTR_UpdateMoby_37_0070c5a0;
  MobyVTable[0x25].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x26].idx = 0x26;
  MobyVTable[0x26].update = &PTR_UpdateMoby_38_0070c640;
  MobyVTable[0x26].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x27].idx = 0x27;
  MobyVTable[0x27].update = (void **)0x0;
  MobyVTable[0x27].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x28].idx = 0x28;
  MobyVTable[0x28].update = &PTR_UpdateMoby_40_0070c7d0;
  MobyVTable[0x28].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x29].idx = 0x29;
  MobyVTable[0x29].update = &PTR_UpdateMoby_41_0070c858;
  MobyVTable[0x29].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a].idx = 0x2a;
  MobyVTable[0x2a].update = &PTR_UpdateMoby_a_lot_10_0070d058;
  MobyVTable[0x2a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b].idx = 0x2b;
  MobyVTable[0x2b].update = (void **)0x0;
  MobyVTable[0x2b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c].idx = 0x2c;
  MobyVTable[0x2c].update = &PTR_UpdateMoby_44_0070cba8;
  MobyVTable[0x2c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d].idx = 0x2d;
  MobyVTable[0x2d].update = &PTR_UpdateMoby_45_0070cc50;
  MobyVTable[0x2d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e].idx = 0x2e;
  MobyVTable[0x2e].update = &PTR_UpdateMoby_46_0070cd70;
  MobyVTable[0x2e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f].idx = 0x2f;
  MobyVTable[0x2f].update = &PTR_UpdateMoby_47_0070ce30;
  MobyVTable[0x2f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x30].idx = 0x30;
  MobyVTable[0x30].update = &PTR_UpdateMoby_48_0070ced0;
  MobyVTable[0x30].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x31].idx = 0x31;
  MobyVTable[0x31].update = &PTR_UpdateMoby_49_0070cf40;
  MobyVTable[0x31].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x32].idx = 0x32;
  MobyVTable[0x32].update = &PTR_UpdateMoby_50_0070cff8;
  MobyVTable[0x32].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x33].idx = 0x33;
  MobyVTable[0x33].update = &PTR_UpdateMoby_a_lot_10_0070d058;
  MobyVTable[0x33].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x34].idx = 0x34;
  MobyVTable[0x34].update = &PTR_UpdateMoby_52_0070d070;
  MobyVTable[0x34].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x35].idx = 0x35;
  MobyVTable[0x35].update = &PTR_UpdateMoby_53_0070d0a8;
  MobyVTable[0x35].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x36].idx = 0x36;
  MobyVTable[0x36].update = (void **)0x0;
  MobyVTable[0x36].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x37].idx = 0x37;
  MobyVTable[0x37].update = &PTR_UpdateMoby_55_0070d160;
  MobyVTable[0x37].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x38].idx = 0x38;
  MobyVTable[0x38].update = (void **)0x0;
  MobyVTable[0x38].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x39].idx = 0x39;
  MobyVTable[0x39].update = (void **)0x0;
  MobyVTable[0x39].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a].idx = 0x3a;
  MobyVTable[0x3a].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0x3a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b].idx = 0x3b;
  MobyVTable[0x3b].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0x3b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c].idx = 0x3c;
  MobyVTable[0x3c].update = &PTR_UpdateMoby_a_lot_10_0070d058;
  MobyVTable[0x3c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d].idx = 0x3d;
  MobyVTable[0x3d].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0x3d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3e].idx = 0x3e;
  MobyVTable[0x3e].update = (void **)0x0;
  MobyVTable[0x3e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f].idx = 0x3f;
  MobyVTable[0x3f].update = &PTR_UpdateMoby_63_0070db50;
  MobyVTable[0x3f].exit = &PTR_PTR_0071d208;
  MobyVTable[0x40].idx = 0x40;
  MobyVTable[0x40].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x40].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x41].idx = 0x41;
  MobyVTable[0x41].update = &PTR_UpdateMoby_65_0070ddf8;
  MobyVTable[0x41].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x42].idx = 0x42;
  MobyVTable[0x42].update = (void **)0x0;
  MobyVTable[0x42].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x43].idx = 0x43;
  MobyVTable[0x43].update = &PTR_UpdateMoby_67_0070df48;
  MobyVTable[0x43].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x44].idx = 0x44;
  MobyVTable[0x44].update = (void **)0x0;
  MobyVTable[0x44].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x45].idx = 0x45;
  MobyVTable[0x45].update = &PTR_UpdateMoby_69_0070e178;
  MobyVTable[0x45].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x46].idx = 0x46;
  MobyVTable[0x46].update = (void **)0x0;
  MobyVTable[0x46].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x47].idx = 0x47;
  MobyVTable[0x47].update = &PTR_UpdateMoby_71_0070e358;
  MobyVTable[0x47].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x48].idx = 0x48;
  MobyVTable[0x48].update = (void **)0x0;
  MobyVTable[0x48].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x49].idx = 0x49;
  MobyVTable[0x49].update = (void **)0x0;
  MobyVTable[0x49].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a].idx = 0x4a;
  MobyVTable[0x4a].update = &PTR_UpdateMoby_74_0070e640;
  MobyVTable[0x4a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b].idx = 0x4b;
  MobyVTable[0x4b].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x4b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c].idx = 0x4c;
  MobyVTable[0x4c].update = &PTR_UpdateMoby_76_0070e818;
  MobyVTable[0x4c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d].idx = 0x4d;
  MobyVTable[0x4d].update = &PTR_UpdateMoby_77_0070e8d8;
  MobyVTable[0x4d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e].idx = 0x4e;
  MobyVTable[0x4e].update = &PTR_UpdateMoby_78_0070e9b8;
  MobyVTable[0x4e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f].idx = 0x4f;
  MobyVTable[0x4f].update = &PTR_UpdateMoby_79_0070ea38;
  MobyVTable[0x4f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x50].idx = 0x50;
  MobyVTable[0x50].update = (void **)0x0;
  MobyVTable[0x50].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x51].idx = 0x51;
  MobyVTable[0x51].update = &PTR_UpdateMoby__81_88__0070ec18;
  MobyVTable[0x51].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x52].idx = 0x52;
  MobyVTable[0x52].update = &PTR_UpdateMoby_82_0070ecc0;
  MobyVTable[0x52].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x53].idx = 0x53;
  MobyVTable[0x53].update = &PTR_UpdateMoby_83_0070ee90;
  MobyVTable[0x53].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x54].idx = 0x54;
  MobyVTable[0x54].update = (void **)0x0;
  MobyVTable[0x54].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x55].idx = 0x55;
  MobyVTable[0x55].update = &PTR_UpdateMoby_85_0070f0d0;
  MobyVTable[0x55].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x56].idx = 0x56;
  MobyVTable[0x56].update = &PTR_UpdateMoby_86_0070f240;
  MobyVTable[0x56].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x57].idx = 0x57;
  MobyVTable[0x57].update = &PTR_UpdateMoby_87_0070f2a8;
  MobyVTable[0x57].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x58].idx = 0x58;
  MobyVTable[0x58].update = &PTR_UpdateMoby__81_88__0070ec18;
  MobyVTable[0x58].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x59].idx = 0x59;
  MobyVTable[0x59].update = &PTR_UpdateMoby_89_0070f3d0;
  MobyVTable[0x59].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a].idx = 0x5a;
  MobyVTable[0x5a].update = &PTR_UpdateMoby_90_0070f430;
  MobyVTable[0x5a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b].idx = 0x5b;
  MobyVTable[0x5b].update = (void **)0x0;
  MobyVTable[0x5b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c].idx = 0x5c;
  MobyVTable[0x5c].update = &PTR_UpdateMoby_92_0070f5e8;
  MobyVTable[0x5c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d].idx = 0x5d;
  MobyVTable[0x5d].update = &PTR_UpdateMoby__93_990__0070f6e0;
  MobyVTable[0x5d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e].idx = 0x5e;
  MobyVTable[0x5e].update = &PTR_UpdateMoby_94_0070f810;
  MobyVTable[0x5e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f].idx = 0x5f;
  MobyVTable[0x5f].update = (void **)0x0;
  MobyVTable[0x5f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x60].idx = 0x60;
  MobyVTable[0x60].update = (void **)0x0;
  MobyVTable[0x60].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x61].idx = 0x61;
  MobyVTable[0x61].update = (void **)0x0;
  MobyVTable[0x61].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x62].idx = 0x62;
  MobyVTable[0x62].update = &PTR_UpdateMoby_98_0070f898;
  MobyVTable[0x62].exit = &PTR_PTR_0071d1f0;
  MobyVTable[99].idx = 99;
  MobyVTable[99].update = &PTR_UpdateMoby_99_0070f940;
  MobyVTable[99].exit = &PTR_PTR_0071d1f0;
  MobyVTable[100].idx = 100;
  MobyVTable[100].update = &PTR_UpdateMoby_100_007082b0;
  MobyVTable[100].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x65].idx = 0x65;
  MobyVTable[0x65].update = &PTR_UpdateMoby_101_00708370;
  MobyVTable[0x65].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x66].idx = 0x66;
  MobyVTable[0x66].update = (void **)0x0;
  MobyVTable[0x66].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x67].idx = 0x67;
  MobyVTable[0x67].update = (void **)0x0;
  MobyVTable[0x67].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x68].idx = 0x68;
  MobyVTable[0x68].update = &PTR_UpdateMoby__104_106_1129__00708568;
  MobyVTable[0x68].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x69].idx = 0x69;
  MobyVTable[0x69].update = &PTR_UpdateMoby_105_00708750;
  MobyVTable[0x69].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a].idx = 0x6a;
  MobyVTable[0x6a].update = &PTR_UpdateMoby__104_106_1129__00708568;
  MobyVTable[0x6a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b].idx = 0x6b;
  MobyVTable[0x6b].update = &PTR_UpdateMoby_107_00708980;
  MobyVTable[0x6b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c].idx = 0x6c;
  MobyVTable[0x6c].update = &PTR_UpdateMoby_108_00708a48;
  MobyVTable[0x6c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d].idx = 0x6d;
  MobyVTable[0x6d].update = &PTR_UpdateMoby_109_00708ad8;
  MobyVTable[0x6d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e].idx = 0x6e;
  MobyVTable[0x6e].update = (void **)0x0;
  MobyVTable[0x6e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f].idx = 0x6f;
  MobyVTable[0x6f].update = &PTR_UpdateMoby_111_00708d60;
  MobyVTable[0x6f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x70].idx = 0x70;
  MobyVTable[0x70].update = &PTR_UpdateMoby__112_1192__00708e00;
  MobyVTable[0x70].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x71].idx = 0x71;
  MobyVTable[0x71].update = &PTR_UpdateMoby_a_lot_19_00709ef8;
  MobyVTable[0x71].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x72].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x72].idx = 0x72;
  MobyVTable[0x73].idx = 0x73;
  MobyVTable[0x72].update = &PTR_M1140_001dedb0_00708f90;
  MobyVTable[0x73].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x73].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x74].idx = 0x74;
  MobyVTable[0x74].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x74].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x75].idx = 0x75;
  MobyVTable[0x75].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x75].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x76].idx = 0x76;
  MobyVTable[0x76].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x76].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x77].idx = 0x77;
  MobyVTable[0x77].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x77].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x78].idx = 0x78;
  MobyVTable[0x78].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x78].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x79].idx = 0x79;
  MobyVTable[0x79].update = &PTR_UpdateMoby_121_007093f0;
  MobyVTable[0x79].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a].idx = 0x7a;
  MobyVTable[0x7a].update = &PTR_UpdateMoby_122_007094e8;
  MobyVTable[0x7a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b].idx = 0x7b;
  MobyVTable[0x7b].update = &PTR_UpdateMoby_123_007095d8;
  MobyVTable[0x7b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c].idx = 0x7c;
  MobyVTable[0x7c].update = &PTR_UpdateMoby_124_007096f8;
  MobyVTable[0x7c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d].idx = 0x7d;
  MobyVTable[0x7d].update = (void **)0x0;
  MobyVTable[0x7d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e].idx = 0x7e;
  MobyVTable[0x7e].update = &PTR_UpdateMoby_126_00709970;
  MobyVTable[0x7e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f].idx = 0x7f;
  MobyVTable[0x7f].update = &PTR_UpdateMoby__127_128_159_169__0070ab68;
  MobyVTable[0x7f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x80].idx = 0x80;
  MobyVTable[0x80].update = &PTR_UpdateMoby__127_128_159_169__0070ab68;
  MobyVTable[0x80].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x81].idx = 0x81;
  MobyVTable[0x81].update = &PTR_UpdateMoby_a_lot_4_00708a20;
  MobyVTable[0x81].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x82].idx = 0x82;
  MobyVTable[0x82].update = &PTR_UpdateMoby_a_lot_4_00708a20;
  MobyVTable[0x82].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x83].idx = 0x83;
  MobyVTable[0x83].update = (void **)0x0;
  MobyVTable[0x83].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x84].idx = 0x84;
  MobyVTable[0x84].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x84].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x85].idx = 0x85;
  MobyVTable[0x85].update = &PTR_UpdateMoby_133_00709e80;
  MobyVTable[0x85].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x86].idx = 0x86;
  MobyVTable[0x86].update = (void **)0x0;
  MobyVTable[0x86].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x87].idx = 0x87;
  MobyVTable[0x87].update = &PTR_UpdateMoby_135_00709fa8;
  MobyVTable[0x87].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x88].idx = 0x88;
  MobyVTable[0x88].update = &PTR_UpdateMoby_136_0070a0d8;
  MobyVTable[0x88].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x89].idx = 0x89;
  MobyVTable[0x89].update = (void **)0x0;
  MobyVTable[0x89].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x8a].idx = 0x8a;
  MobyVTable[0x8a].update = (void **)0x0;
  MobyVTable[0x8a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x8b].idx = 0x8b;
  MobyVTable[0x8b].update = (void **)0x0;
  MobyVTable[0x8b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x8c].idx = 0x8c;
  MobyVTable[0x8c].update = (void **)0x0;
  MobyVTable[0x8c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x8d].idx = 0x8d;
  MobyVTable[0x8d].update = (void **)0x0;
  MobyVTable[0x8d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x8e].idx = 0x8e;
  MobyVTable[0x8e].update = (void **)0x0;
  MobyVTable[0x8e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x8f].idx = 0x8f;
  MobyVTable[0x8f].update = (void **)0x0;
  MobyVTable[0x8f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x90].idx = 0x90;
  MobyVTable[0x90].update = (void **)0x0;
  MobyVTable[0x90].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x91].idx = 0x91;
  MobyVTable[0x91].update = (void **)0x0;
  MobyVTable[0x91].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x92].idx = 0x92;
  MobyVTable[0x92].update = (void **)0x0;
  MobyVTable[0x92].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x93].idx = 0x93;
  MobyVTable[0x93].update = (void **)0x0;
  MobyVTable[0x93].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x94].idx = 0x94;
  MobyVTable[0x94].update = &PTR_UpdateMoby__148_255__0070a838;
  MobyVTable[0x94].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x95].idx = 0x95;
  MobyVTable[0x95].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x95].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x96].idx = 0x96;
  MobyVTable[0x96].update = (void **)0x0;
  MobyVTable[0x96].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x97].idx = 0x97;
  MobyVTable[0x97].update = (void **)0x0;
  MobyVTable[0x97].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x98].idx = 0x98;
  MobyVTable[0x98].update = &PTR_UpdateMoby_152_0070a8f8;
  MobyVTable[0x98].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x99].idx = 0x99;
  MobyVTable[0x99].update = &PTR_UpdateMoby_153_0070a980;
  MobyVTable[0x99].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x9a].idx = 0x9a;
  MobyVTable[0x9a].update = &PTR_UpdateMoby_154_0070a990;
  MobyVTable[0x9a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x9b].idx = 0x9b;
  MobyVTable[0x9b].update = &PTR_UpdateMoby_155_0070a9e8;
  MobyVTable[0x9b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x9c].idx = 0x9c;
  MobyVTable[0x9c].update = &PTR_UpdateMoby_156_0070aa60;
  MobyVTable[0x9c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x9d].idx = 0x9d;
  MobyVTable[0x9d].update = &PTR_UpdateMoby_157_0070ab18;
  MobyVTable[0x9d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x9e].idx = 0x9e;
  MobyVTable[0x9e].update = &PTR_UpdateMoby_158_0070ab48;
  MobyVTable[0x9e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x9f].idx = 0x9f;
  MobyVTable[0x9f].update = &PTR_UpdateMoby__127_128_159_169__0070ab68;
  MobyVTable[0x9f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa0].idx = 0xa0;
  MobyVTable[0xa0].update = &PTR_UpdateMoby_160_0070abc0;
  MobyVTable[0xa0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa1].idx = 0xa1;
  MobyVTable[0xa1].update = &PTR_UpdateMoby_161_0070abd8;
  MobyVTable[0xa1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa2].idx = 0xa2;
  MobyVTable[0xa2].update = (void **)0x0;
  MobyVTable[0xa2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa3].idx = 0xa3;
  MobyVTable[0xa3].update = &PTR_UpdateMoby_163_0070abe8;
  MobyVTable[0xa3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa4].idx = 0xa4;
  MobyVTable[0xa4].update = &PTR_UpdateMoby_164_0070ac40;
  MobyVTable[0xa4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa5].idx = 0xa5;
  MobyVTable[0xa5].update = &PTR_UpdateMoby_165_0070acb0;
  MobyVTable[0xa5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa6].idx = 0xa6;
  MobyVTable[0xa6].update = &PTR_UpdateMoby_166_0070acd8;
  MobyVTable[0xa6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa7].idx = 0xa7;
  MobyVTable[0xa7].update = &PTR_UpdateMoby_167_0070ad30;
  MobyVTable[0xa7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa8].idx = 0xa8;
  MobyVTable[0xa8].update = &PTR_UpdateMoby_168_0070ad70;
  MobyVTable[0xa8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xa9].idx = 0xa9;
  MobyVTable[0xa9].update = &PTR_UpdateMoby__127_128_159_169__0070ab68;
  MobyVTable[0xa9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xaa].idx = 0xaa;
  MobyVTable[0xaa].update = &PTR_UpdateMoby_170_0070adb8;
  MobyVTable[0xaa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xab].idx = 0xab;
  MobyVTable[0xab].update = (void **)0x0;
  MobyVTable[0xab].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xac].idx = 0xac;
  MobyVTable[0xac].update = &PTR_UpdateMoby_172_0070adf8;
  MobyVTable[0xac].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xad].idx = 0xad;
  MobyVTable[0xad].update = (void **)0x0;
  MobyVTable[0xad].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xae].idx = 0xae;
  MobyVTable[0xae].update = &PTR_UpdateMoby_174_0070ae08;
  MobyVTable[0xae].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xaf].idx = 0xaf;
  MobyVTable[0xaf].update = &PTR_UpdateMoby_175_0070ae28;
  MobyVTable[0xaf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb0].idx = 0xb0;
  MobyVTable[0xb0].update = &PTR_UpdateMoby_176_0070ae60;
  MobyVTable[0xb0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb1].idx = 0xb1;
  MobyVTable[0xb1].update = &PTR_UpdateMoby_177_0070aeb0;
  MobyVTable[0xb1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb2].idx = 0xb2;
  MobyVTable[0xb2].update = &PTR_UpdateMoby_178_0070aef0;
  MobyVTable[0xb2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb3].idx = 0xb3;
  MobyVTable[0xb3].update = &PTR_UpdateMoby_179_0070af10;
  MobyVTable[0xb3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb4].idx = 0xb4;
  MobyVTable[0xb4].update = &PTR_UpdateMoby_180_0070af48;
  MobyVTable[0xb4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb5].idx = 0xb5;
  MobyVTable[0xb5].update = &PTR_UpdateMoby_181_0070af88;
  MobyVTable[0xb5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb6].idx = 0xb6;
  MobyVTable[0xb6].update = &PTR_UpdateMoby_a_lot_4_00708a20;
  MobyVTable[0xb6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb7].idx = 0xb7;
  MobyVTable[0xb7].update = &PTR_UpdateMoby_a_lot_4_00708a20;
  MobyVTable[0xb7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb8].idx = 0xb8;
  MobyVTable[0xb8].update = &PTR_UpdateMoby_184_00703858;
  MobyVTable[0xb8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xb9].idx = 0xb9;
  MobyVTable[0xb9].update = &PTR_UpdateMoby_185_0070b0d8;
  MobyVTable[0xb9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xba].idx = 0xba;
  MobyVTable[0xba].update = &PTR_UpdateMoby_186_0070b1c8;
  MobyVTable[0xba].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xbb].idx = 0xbb;
  MobyVTable[0xbb].update = (void **)0x0;
  MobyVTable[0xbb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xbc].idx = 0xbc;
  MobyVTable[0xbc].update = &PTR_UpdateMoby_188_0070b220;
  MobyVTable[0xbc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xbd].idx = 0xbd;
  MobyVTable[0xbd].update = &PTR_UpdateMoby_189_0070b290;
  MobyVTable[0xbd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xbe].idx = 0xbe;
  MobyVTable[0xbe].update = &PTR_UpdateMoby_190_0070b2f0;
  MobyVTable[0xbe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xbf].idx = 0xbf;
  MobyVTable[0xbf].update = &PTR_UpdateMoby__191_758_803_1429__0070b420;
  MobyVTable[0xbf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xc0].idx = 0xc0;
  MobyVTable[0xc0].update = &PTR_UpdateMoby_192_0070b500;
  MobyVTable[0xc0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xc1].idx = 0xc1;
  MobyVTable[0xc1].update = &PTR_UpdateMoby_193_0070b588;
  MobyVTable[0xc1].exit = &PTR_PTR_0071d220;
  MobyVTable[0xc2].idx = 0xc2;
  MobyVTable[0xc2].update = &PTR_UpdateMoby_194_0070b5e8;
  MobyVTable[0xc2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xc3].idx = 0xc3;
  MobyVTable[0xc3].update = (void **)0x0;
  MobyVTable[0xc3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xc4].idx = 0xc4;
  MobyVTable[0xc4].update = &PTR_UpdateMoby__196_197_1958__0070b670;
  MobyVTable[0xc4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xc5].idx = 0xc5;
  MobyVTable[0xc5].update = &PTR_UpdateMoby__196_197_1958__0070b670;
  MobyVTable[0xc5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xc6].idx = 0xc6;
  MobyVTable[0xc6].update = &PTR_UpdateMoby_198_0070b688;
  MobyVTable[0xc6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[199].idx = 199;
  MobyVTable[199].update = &PTR_UpdateMoby_199_0070b698;
  MobyVTable[199].exit = &PTR_PTR_0071d1f0;
  MobyVTable[200].idx = 200;
  MobyVTable[200].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[200].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xc9].idx = 0xc9;
  MobyVTable[0xc9].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0xc9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xca].idx = 0xca;
  MobyVTable[0xca].update = &PTR_UpdateMoby_202_0070b6c0;
  MobyVTable[0xca].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xcb].idx = 0xcb;
  MobyVTable[0xcb].update = &PTR_UpdateMoby__203_1900__0070b718;
  MobyVTable[0xcb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xcc].idx = 0xcc;
  MobyVTable[0xcc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xcd].idx = 0xcd;
  MobyVTable[0xcd].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0xcd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xce].idx = 0xce;
  MobyVTable[0xce].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0xce].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xcf].idx = 0xcf;
  MobyVTable[0xcf].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0xcf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd0].idx = 0xd0;
  MobyVTable[0xd0].update = &PTR_UpdateMoby_208_0070b758;
  MobyVTable[0xd0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd1].idx = 0xd1;
  MobyVTable[0xd1].update = &PTR_UpdateMoby_209_0070b770;
  MobyVTable[0xd1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd2].idx = 0xd2;
  MobyVTable[0xd2].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0xd2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd3].idx = 0xd3;
  MobyVTable[0xd3].update = &PTR_UpdateMoby_211_0070b7a8;
  MobyVTable[0xd3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd4].idx = 0xd4;
  MobyVTable[0xd4].update = &PTR_UpdateMoby__212_1412__0070b7d8;
  MobyVTable[0xd4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd5].idx = 0xd5;
  MobyVTable[0xd5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd6].idx = 0xd6;
  MobyVTable[0xd6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd7].idx = 0xd7;
  MobyVTable[0xd7].update = &PTR_UpdateMoby_215_0070b7f8;
  MobyVTable[0xd7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd8].idx = 0xd8;
  MobyVTable[0xd8].update = (void **)0x0;
  MobyVTable[0xd8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xd9].idx = 0xd9;
  MobyVTable[0xd9].update = &PTR_UpdateMoby_217_0070b868;
  MobyVTable[0xd9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xda].idx = 0xda;
  MobyVTable[0xda].update = &PTR_UpdateMoby_218_0070b878;
  MobyVTable[0xda].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xdb].idx = 0xdb;
  MobyVTable[0xdb].update = &PTR_UpdateMoby_219_0070b888;
  MobyVTable[0xdb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xdc].idx = 0xdc;
  MobyVTable[0xdc].update = &PTR_UpdateMoby_220_0070b8b0;
  MobyVTable[0xdc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xdd].idx = 0xdd;
  MobyVTable[0xdd].update = &PTR_UpdateMoby_221_0070b8c0;
  MobyVTable[0xdd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xde].idx = 0xde;
  MobyVTable[0xde].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xdf].idx = 0xdf;
  MobyVTable[0xdf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe0].idx = 0xe0;
  MobyVTable[0xe0].update = &PTR_UpdateMoby__224_228__0070b8d0;
  MobyVTable[0xe0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe1].idx = 0xe1;
  MobyVTable[0xe1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe2].idx = 0xe2;
  MobyVTable[0xe2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe3].idx = 0xe3;
  MobyVTable[0xe3].update = &PTR_UpdateMoby_227_0070b8f8;
  MobyVTable[0xe3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe4].idx = 0xe4;
  MobyVTable[0xe4].update = &PTR_UpdateMoby__224_228__0070b8d0;
  MobyVTable[0xe4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe5].idx = 0xe5;
  MobyVTable[0xe5].update = &PTR_UpdateMoby_229_0070b918;
  MobyVTable[0xe5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe6].idx = 0xe6;
  MobyVTable[0xe6].update = &PTR_UpdateMoby_230_0070b968;
  MobyVTable[0xe6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe7].idx = 0xe7;
  MobyVTable[0xe7].update = &PTR_UpdateMoby_231_0070b980;
  MobyVTable[0xe7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe8].idx = 0xe8;
  MobyVTable[0xe8].update = (void **)0x0;
  MobyVTable[0xe8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xe9].idx = 0xe9;
  MobyVTable[0xe9].update = &PTR_UpdateMoby_233_0070b9b0;
  MobyVTable[0xe9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xea].idx = 0xea;
  MobyVTable[0xea].update = &PTR_UpdateMoby_234_0070b9e0;
  MobyVTable[0xea].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xeb].idx = 0xeb;
  MobyVTable[0xeb].update = &PTR_UpdateMoby_235_0070b9f8;
  MobyVTable[0xeb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xec].idx = 0xec;
  MobyVTable[0xec].update = &PTR_UpdateMoby_236_0070ba08;
  MobyVTable[0xec].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xed].idx = 0xed;
  MobyVTable[0xed].update = &PTR_UpdateMoby_237_0070ba38;
  MobyVTable[0xed].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xee].idx = 0xee;
  MobyVTable[0xee].update = &PTR_UpdateMoby_238_0070bad8;
  MobyVTable[0xee].exit = &PTR_PTR_0071d238;
  MobyVTable[0xef].idx = 0xef;
  MobyVTable[0xef].update = &PTR_UpdateMoby_239_0070bb48;
  MobyVTable[0xef].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf0].idx = 0xf0;
  MobyVTable[0xf0].update = &PTR_UpdateMoby_240_0070bb80;
  MobyVTable[0xf0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf1].idx = 0xf1;
  MobyVTable[0xf1].update = &PTR_UpdateMoby_241_0070bb90;
  MobyVTable[0xf1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf2].idx = 0xf2;
  MobyVTable[0xf2].update = &PTR_UpdateMoby_242_0070bbb8;
  MobyVTable[0xf2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf3].idx = 0xf3;
  MobyVTable[0xf3].update = &PTR_UpdateMoby_243_0070bbd0;
  MobyVTable[0xf3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf4].idx = 0xf4;
  MobyVTable[0xf4].update = &PTR_UpdateMoby__21_244__0070bbe8;
  MobyVTable[0xf4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf5].idx = 0xf5;
  MobyVTable[0xf5].update = &PTR_UpdateMoby_245_0070bc00;
  MobyVTable[0xf5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf6].idx = 0xf6;
  MobyVTable[0xf6].update = &PTR_UpdateMoby_246_0070bc20;
  MobyVTable[0xf6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf7].idx = 0xf7;
  MobyVTable[0xf7].update = &PTR_UpdateMoby_247_0070bc48;
  MobyVTable[0xf7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf8].idx = 0xf8;
  MobyVTable[0xf8].update = &PTR_UpdateMoby_248_0070bc60;
  MobyVTable[0xf8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xf9].idx = 0xf9;
  MobyVTable[0xf9].update = &PTR_UpdateMoby_249_0070bc70;
  MobyVTable[0xf9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xfa].idx = 0xfa;
  MobyVTable[0xfa].update = &PTR_UpdateMoby_250_0070bc88;
  MobyVTable[0xfa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xfb].idx = 0xfb;
  MobyVTable[0xfb].update = &PTR_UpdateMoby_251_0070bca8;
  MobyVTable[0xfb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xfc].idx = 0xfc;
  MobyVTable[0xfc].update = &PTR_UpdateMoby_252_0070bcc0;
  MobyVTable[0xfc].exit = &PTR_PTR_0071d250;
  MobyVTable[0xfd].idx = 0xfd;
  MobyVTable[0xfd].update = &PTR_UpdateMoby_253_0070bd30;
  MobyVTable[0xfd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xfe].idx = 0xfe;
  MobyVTable[0xfe].update = &PTR_UpdateMoby_254_0070bd40;
  MobyVTable[0xfe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xff].idx = 0xff;
  MobyVTable[0xff].update = &PTR_UpdateMoby__148_255__0070a838;
  MobyVTable[0xff].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x100].idx = 0x100;
  MobyVTable[0x100].update = &PTR_UpdateMoby_256_GC_Rocket_00706168;
  MobyVTable[0x100].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x101].idx = 0x101;
  MobyVTable[0x101].update = &PTR_UpdateMoby_257_0070bd50;
  MobyVTable[0x101].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x102].idx = 0x102;
  MobyVTable[0x102].update = &PTR_UpdateMoby_258_0070bd70;
  MobyVTable[0x102].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x103].idx = 0x103;
  MobyVTable[0x103].update = &PTR_UpdateMoby_259_0070bd88;
  MobyVTable[0x103].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x104].idx = 0x104;
  MobyVTable[0x104].update = (void **)0x0;
  MobyVTable[0x104].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x105].idx = 0x105;
  MobyVTable[0x105].update = &PTR_UpdateMoby_261_0070bd98;
  MobyVTable[0x105].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x106].idx = 0x106;
  MobyVTable[0x106].update = &PTR_UpdateMoby_262_0070bda0;
  MobyVTable[0x106].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x107].idx = 0x107;
  MobyVTable[0x107].update = &PTR_UpdateMoby_a_lot_17_0070bdd0;
  MobyVTable[0x107].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x108].idx = 0x108;
  MobyVTable[0x108].update = &PTR_UpdateMoby_a_lot_17_0070bdd0;
  MobyVTable[0x108].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x109].idx = 0x109;
  MobyVTable[0x109].update = &PTR_UpdateMoby_a_lot_17_0070bdd0;
  MobyVTable[0x109].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x10a].idx = 0x10a;
  MobyVTable[0x10a].update = &PTR_UpdateMoby_a_lot_17_0070bdd0;
  MobyVTable[0x10a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x10b].idx = 0x10b;
  MobyVTable[0x10b].update = &PTR_UpdateMoby_a_lot_17_0070bdd0;
  MobyVTable[0x10b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x10c].idx = 0x10c;
  MobyVTable[0x10c].update = (void **)0x0;
  MobyVTable[0x10c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x10d].idx = 0x10d;
  MobyVTable[0x10d].update = (void **)0x0;
  MobyVTable[0x10d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x10e].idx = 0x10e;
  MobyVTable[0x10e].update = &PTR_UpdateMoby_270_0070be28;
  MobyVTable[0x10e].exit = &PTR_PTR_0071d268;
  MobyVTable[0x10f].idx = 0x10f;
  MobyVTable[0x10f].update = &PTR_UpdateMoby_271_0070be60;
  MobyVTable[0x10f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x110].idx = 0x110;
  MobyVTable[0x110].update = (void **)0x0;
  MobyVTable[0x110].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x111].idx = 0x111;
  MobyVTable[0x111].update = (void **)0x0;
  MobyVTable[0x111].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x112].idx = 0x112;
  MobyVTable[0x112].update = (void **)0x0;
  MobyVTable[0x112].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x113].idx = 0x113;
  MobyVTable[0x113].update = (void **)0x0;
  MobyVTable[0x113].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x114].idx = 0x114;
  MobyVTable[0x114].update = &PTR_UpdateMoby__276_1298_1299__0070be78;
  MobyVTable[0x114].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x115].idx = 0x115;
  MobyVTable[0x115].update = (void **)0x0;
  MobyVTable[0x115].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x116].idx = 0x116;
  MobyVTable[0x116].update = (void **)0x0;
  MobyVTable[0x116].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x117].idx = 0x117;
  MobyVTable[0x117].update = &PTR_UpdateMoby_279_0070be90;
  MobyVTable[0x117].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x118].idx = 0x118;
  MobyVTable[0x118].update = &PTR_UpdateMoby_280_0070bf40;
  MobyVTable[0x118].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x119].idx = 0x119;
  MobyVTable[0x119].update = &PTR_UpdateMoby_281_0070bf50;
  MobyVTable[0x119].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x11a].idx = 0x11a;
  MobyVTable[0x11a].update = &PTR_UpdateMoby_282_0070bf68;
  MobyVTable[0x11a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x11b].idx = 0x11b;
  MobyVTable[0x11b].update = &PTR_UpdateMoby_283_0070bf78;
  MobyVTable[0x11b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x11c].idx = 0x11c;
  MobyVTable[0x11c].update = &PTR_UpdateMoby_284_0070bf88;
  MobyVTable[0x11c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x11d].idx = 0x11d;
  MobyVTable[0x11d].update = (void **)0x0;
  MobyVTable[0x11d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x11e].idx = 0x11e;
  MobyVTable[0x11e].update = &PTR_UpdateMoby_286_0070bf90;
  MobyVTable[0x11e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x11f].idx = 0x11f;
  MobyVTable[0x11f].update = (void **)0x0;
  MobyVTable[0x11f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x120].idx = 0x120;
  MobyVTable[0x120].update = &PTR_UpdateMoby_288_0070bf98;
  MobyVTable[0x120].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x121].idx = 0x121;
  MobyVTable[0x121].update = &PTR_UpdateMoby_289_0070bfa8;
  MobyVTable[0x121].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x122].idx = 0x122;
  MobyVTable[0x122].update = (void **)0x0;
  MobyVTable[0x122].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x123].idx = 0x123;
  MobyVTable[0x123].update = &PTR_UpdateMoby_291_0070c018;
  MobyVTable[0x123].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x124].idx = 0x124;
  MobyVTable[0x124].update = (void **)0x0;
  MobyVTable[0x124].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x125].idx = 0x125;
  MobyVTable[0x125].update = &PTR_UpdateMoby_293_0070c030;
  MobyVTable[0x125].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x126].idx = 0x126;
  MobyVTable[0x126].update = &PTR_UpdateMoby_294_0070c098;
  MobyVTable[0x126].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x127].idx = 0x127;
  MobyVTable[0x127].update = &PTR_UpdateMoby_295_0070c0b0;
  MobyVTable[0x127].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x128].idx = 0x128;
  MobyVTable[0x128].update = &PTR_UpdateMoby__296_297_652_653__0070c0b8;
  MobyVTable[0x128].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x129].idx = 0x129;
  MobyVTable[0x129].update = &PTR_UpdateMoby__296_297_652_653__0070c0b8;
  MobyVTable[0x129].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x12a].idx = 0x12a;
  MobyVTable[0x12a].update = &PTR_UpdateMoby_298_0070c0d0;
  MobyVTable[0x12a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[299].idx = 299;
  MobyVTable[299].update = (void **)0x0;
  MobyVTable[299].exit = &PTR_PTR_0071d1f0;
  MobyVTable[300].idx = 300;
  MobyVTable[300].update = (void **)0x0;
  MobyVTable[300].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x12d].idx = 0x12d;
  MobyVTable[0x12d].update = (void **)0x0;
  MobyVTable[0x12d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x12e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x12e].idx = 0x12e;
  MobyVTable[0x12e].update = &PTR_M303_00338f90_0070c128;
  MobyVTable[0x12f].idx = 0x12f;
  MobyVTable[0x12f].update = &PTR_UpdateMoby_303_0070c148;
  MobyVTable[0x12f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x130].idx = 0x130;
  MobyVTable[0x130].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x130].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x131].idx = 0x131;
  MobyVTable[0x131].update = &PTR_UpdateMoby_305_0070c178;
  MobyVTable[0x131].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x132].idx = 0x132;
  MobyVTable[0x132].update = &PTR_UpdateMoby_306_0070c188;
  MobyVTable[0x132].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x133].idx = 0x133;
  MobyVTable[0x133].update = (void **)0x0;
  MobyVTable[0x133].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x134].idx = 0x134;
  MobyVTable[0x134].update = &PTR_UpdateMoby_308_0070c190;
  MobyVTable[0x134].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x135].idx = 0x135;
  MobyVTable[0x135].update = &PTR_UpdateMoby_309_0070c1a0;
  MobyVTable[0x135].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x136].idx = 0x136;
  MobyVTable[0x136].update = (void **)0x0;
  MobyVTable[0x136].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x137].idx = 0x137;
  MobyVTable[0x137].update = (void **)0x0;
  MobyVTable[0x137].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x138].idx = 0x138;
  MobyVTable[0x138].update = (void **)0x0;
  MobyVTable[0x138].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x139].idx = 0x139;
  MobyVTable[0x139].update = &PTR_UpdateMoby_313_0070c220;
  MobyVTable[0x139].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x13a].idx = 0x13a;
  MobyVTable[0x13a].update = (void **)0x0;
  MobyVTable[0x13a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x13b].idx = 0x13b;
  MobyVTable[0x13b].update = (void **)0x0;
  MobyVTable[0x13b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x13c].idx = 0x13c;
  MobyVTable[0x13c].update = &PTR_UpdateMoby_316_0070c230;
  MobyVTable[0x13c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x13d].idx = 0x13d;
  MobyVTable[0x13d].update = &PTR_UpdateMoby_317_GasparOcean_0070c248;
  MobyVTable[0x13d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x13e].idx = 0x13e;
  MobyVTable[0x13e].update = &PTR_UpdateMoby_318_0070c270;
  MobyVTable[0x13e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x13f].idx = 0x13f;
  MobyVTable[0x13f].update = &PTR_UpdateMoby_319_0070c288;
  MobyVTable[0x13f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x140].idx = 0x140;
  MobyVTable[0x140].update = &PTR_UpdateMoby__320_321__0070c298;
  MobyVTable[0x140].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x141].idx = 0x141;
  MobyVTable[0x141].update = &PTR_UpdateMoby__320_321__0070c298;
  MobyVTable[0x141].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x142].idx = 0x142;
  MobyVTable[0x142].update = &PTR_UpdateMoby_322_0070c2a0;
  MobyVTable[0x142].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x143].idx = 0x143;
  MobyVTable[0x143].update = (void **)0x0;
  MobyVTable[0x143].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x144].idx = 0x144;
  MobyVTable[0x144].update = &PTR_UpdateMoby_324_0070c2b0;
  MobyVTable[0x144].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x145].idx = 0x145;
  MobyVTable[0x145].update = &PTR_UpdateMoby_325_0070c2b8;
  MobyVTable[0x145].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x146].idx = 0x146;
  MobyVTable[0x146].update = &PTR_UpdateMoby_326_00703880;
  MobyVTable[0x146].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x147].idx = 0x147;
  MobyVTable[0x147].update = &PTR_UpdateMoby_327_BataliaOcean_0070c2f0;
  MobyVTable[0x147].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x148].idx = 0x148;
  MobyVTable[0x148].update = &PTR_UpdateMoby_328_0070c308;
  MobyVTable[0x148].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x149].idx = 0x149;
  MobyVTable[0x149].update = &PTR_UpdateMoby_329_0070c320;
  MobyVTable[0x149].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x14a].idx = 0x14a;
  MobyVTable[0x14a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x14b].idx = 0x14b;
  MobyVTable[0x14b].update = &PTR_UpdateMoby_331_0070c330;
  MobyVTable[0x14b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x14c].idx = 0x14c;
  MobyVTable[0x14c].update = (void **)0x0;
  MobyVTable[0x14c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x14d].idx = 0x14d;
  MobyVTable[0x14d].update = &PTR_UpdateMoby_333_0070c368;
  MobyVTable[0x14d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x14e].idx = 0x14e;
  MobyVTable[0x14e].update = &PTR_UpdateMoby_334_0070c388;
  MobyVTable[0x14e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x14f].idx = 0x14f;
  MobyVTable[0x14f].update = &PTR_UpdateMoby__335_337_338__0070c398;
  MobyVTable[0x14f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x150].idx = 0x150;
  MobyVTable[0x150].update = &PTR_UpdateMoby__336_415__00703898;
  MobyVTable[0x150].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x151].idx = 0x151;
  MobyVTable[0x151].update = &PTR_UpdateMoby__335_337_338__0070c398;
  MobyVTable[0x151].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x152].idx = 0x152;
  MobyVTable[0x152].update = &PTR_UpdateMoby__335_337_338__0070c398;
  MobyVTable[0x152].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x153].idx = 0x153;
  MobyVTable[0x153].update = &PTR_UpdateMoby_339_0070c3a8;
  MobyVTable[0x153].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x154].idx = 0x154;
  MobyVTable[0x154].update = &PTR_UpdateMoby_340_0070c430;
  MobyVTable[0x154].exit = &PTR_PTR_0071d280;
  MobyVTable[0x155].idx = 0x155;
  MobyVTable[0x155].update = &PTR_UpdateMoby_341_0070c470;
  MobyVTable[0x155].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x156].idx = 0x156;
  MobyVTable[0x156].update = &PTR_UpdateMoby_342_0070c4b8;
  MobyVTable[0x156].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x157].idx = 0x157;
  MobyVTable[0x157].update = &PTR_UpdateMoby_343_0070c4c8;
  MobyVTable[0x157].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x158].idx = 0x158;
  MobyVTable[0x158].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x158].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x159].idx = 0x159;
  MobyVTable[0x159].update = &PTR_UpdateMoby_345_0070c4e0;
  MobyVTable[0x159].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x15a].idx = 0x15a;
  MobyVTable[0x15a].update = &PTR_UpdateMoby_346_0070c4f0;
  MobyVTable[0x15a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x15b].idx = 0x15b;
  MobyVTable[0x15b].update = &PTR_UpdateMoby_347_0070c510;
  MobyVTable[0x15b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x15c].idx = 0x15c;
  MobyVTable[0x15c].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x15c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x15d].idx = 0x15d;
  MobyVTable[0x15d].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x15d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x15e].idx = 0x15e;
  MobyVTable[0x15e].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x15e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x15f].idx = 0x15f;
  MobyVTable[0x15f].update = &PTR_UpdateMoby__351_1301__00709d58;
  MobyVTable[0x15f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x160].idx = 0x160;
  MobyVTable[0x160].update = &PTR_UpdateMoby_352_0070c548;
  MobyVTable[0x160].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x161].idx = 0x161;
  MobyVTable[0x161].update = &PTR_UpdateMoby_353_0070c550;
  MobyVTable[0x161].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x162].idx = 0x162;
  MobyVTable[0x162].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x162].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x163].idx = 0x163;
  MobyVTable[0x163].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x163].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x164].idx = 0x164;
  MobyVTable[0x164].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x164].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x165].idx = 0x165;
  MobyVTable[0x165].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x165].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x166].idx = 0x166;
  MobyVTable[0x166].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x166].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x167].idx = 0x167;
  MobyVTable[0x167].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x167].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x168].idx = 0x168;
  MobyVTable[0x168].update = &PTR_UpdateMoby_a_lot_4_00708a20;
  MobyVTable[0x168].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x169].idx = 0x169;
  MobyVTable[0x169].update = &PTR_UpdateMoby_361_0070c578;
  MobyVTable[0x169].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x16a].idx = 0x16a;
  MobyVTable[0x16a].update = (void **)0x0;
  MobyVTable[0x16a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x16b].idx = 0x16b;
  MobyVTable[0x16b].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x16b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x16c].idx = 0x16c;
  MobyVTable[0x16c].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x16c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x16d].idx = 0x16d;
  MobyVTable[0x16d].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x16d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x16e].idx = 0x16e;
  MobyVTable[0x16e].update = (void **)0x0;
  MobyVTable[0x16e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x16f].idx = 0x16f;
  MobyVTable[0x16f].update = &PTR_UpdateMoby_367_0070c588;
  MobyVTable[0x16f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x170].idx = 0x170;
  MobyVTable[0x170].update = (void **)0x0;
  MobyVTable[0x170].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x171].idx = 0x171;
  MobyVTable[0x171].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x171].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x172].idx = 0x172;
  MobyVTable[0x172].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x172].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x173].idx = 0x173;
  MobyVTable[0x173].update = &PTR_UpdateMoby_a_lot_21_0070a860;
  MobyVTable[0x173].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x174].idx = 0x174;
  MobyVTable[0x174].update = &PTR_UpdateMoby_372_0070c5b8;
  MobyVTable[0x174].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x175].idx = 0x175;
  MobyVTable[0x175].update = (void **)0x0;
  MobyVTable[0x175].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x176].idx = 0x176;
  MobyVTable[0x176].update = (void **)0x0;
  MobyVTable[0x176].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x177].idx = 0x177;
  MobyVTable[0x177].update = &PTR_UpdateMoby_375_0070c5d0;
  MobyVTable[0x177].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x178].idx = 0x178;
  MobyVTable[0x178].update = &PTR_UpdateMoby_376_0070c5e8;
  MobyVTable[0x178].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x179].idx = 0x179;
  MobyVTable[0x179].update = &PTR_UpdateMoby_377_0070c600;
  MobyVTable[0x179].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x17a].idx = 0x17a;
  MobyVTable[0x17a].update = &PTR_UpdateMoby_378_0070c618;
  MobyVTable[0x17a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x17b].idx = 0x17b;
  MobyVTable[0x17b].update = &PTR_UpdateMoby_379_0070c630;
  MobyVTable[0x17b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x17c].idx = 0x17c;
  MobyVTable[0x17c].update = &PTR_UpdateMoby_380_0070c658;
  MobyVTable[0x17c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x17d].idx = 0x17d;
  MobyVTable[0x17d].update = &PTR_UpdateMoby_381_0070c668;
  MobyVTable[0x17d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x17e].idx = 0x17e;
  MobyVTable[0x17e].update = (void **)0x0;
  MobyVTable[0x17e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x17f].idx = 0x17f;
  MobyVTable[0x17f].update = (void **)0x0;
  MobyVTable[0x17f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x180].idx = 0x180;
  MobyVTable[0x180].update = &PTR_UpdateMoby_384_0070c678;
  MobyVTable[0x180].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x181].idx = 0x181;
  MobyVTable[0x181].update = (void **)0x0;
  MobyVTable[0x181].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x182].idx = 0x182;
  MobyVTable[0x182].update = &PTR_UpdateMoby_386_0070c6a0;
  MobyVTable[0x182].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x183].idx = 0x183;
  MobyVTable[0x183].update = (void **)0x0;
  MobyVTable[0x183].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x184].idx = 0x184;
  MobyVTable[0x184].update = &PTR_UpdateMoby_388_0070c7a0;
  MobyVTable[0x184].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x185].idx = 0x185;
  MobyVTable[0x185].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[0x185].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x186].idx = 0x186;
  MobyVTable[0x186].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[0x186].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x187].idx = 0x187;
  MobyVTable[0x187].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[0x187].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x188].idx = 0x188;
  MobyVTable[0x188].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[0x188].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x189].idx = 0x189;
  MobyVTable[0x189].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[0x189].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x18a].idx = 0x18a;
  MobyVTable[0x18a].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[0x18a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x18b].idx = 0x18b;
  MobyVTable[0x18b].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[0x18b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x18c].idx = 0x18c;
  MobyVTable[0x18c].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[0x18c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x18d].idx = 0x18d;
  MobyVTable[0x18d].update = (void **)0x0;
  MobyVTable[0x18d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x18e].idx = 0x18e;
  MobyVTable[0x18e].update = (void **)0x0;
  MobyVTable[0x18e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[399].idx = 399;
  MobyVTable[399].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[399].exit = &PTR_PTR_0071d1f0;
  MobyVTable[400].idx = 400;
  MobyVTable[400].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[400].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x191].idx = 0x191;
  MobyVTable[0x191].update = &PTR_UpdateMoby_a_lot_11_0070c7b8;
  MobyVTable[0x191].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x192].idx = 0x192;
  MobyVTable[0x192].update = &PTR_UpdateMoby_402_0070c7e0;
  MobyVTable[0x192].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x193].idx = 0x193;
  MobyVTable[0x193].update = &PTR_UpdateMoby_403_0070c7f0;
  MobyVTable[0x193].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x194].idx = 0x194;
  MobyVTable[0x194].update = &PTR_UpdateMoby__404_405__0070c810;
  MobyVTable[0x194].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x195].idx = 0x195;
  MobyVTable[0x195].update = &PTR_UpdateMoby__404_405__0070c810;
  MobyVTable[0x195].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x196].idx = 0x196;
  MobyVTable[0x196].update = (void **)0x0;
  MobyVTable[0x196].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x197].idx = 0x197;
  MobyVTable[0x197].update = (void **)0x0;
  MobyVTable[0x197].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x198].idx = 0x198;
  MobyVTable[0x198].update = &PTR_UpdateMoby_408_0070c830;
  MobyVTable[0x198].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x199].idx = 0x199;
  MobyVTable[0x199].update = &PTR_UpdateMoby_409_007038b0;
  MobyVTable[0x199].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x19a].idx = 0x19a;
  MobyVTable[0x19a].update = &PTR_UpdateMoby_410_0070c870;
  MobyVTable[0x19a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x19b].idx = 0x19b;
  MobyVTable[0x19b].update = &PTR_UpdateMoby_411_0070c888;
  MobyVTable[0x19b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x19c].idx = 0x19c;
  MobyVTable[0x19c].update = (void **)0x0;
  MobyVTable[0x19c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x19d].idx = 0x19d;
  MobyVTable[0x19d].update = &PTR_UpdateMoby_413_0070c8a8;
  MobyVTable[0x19d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x19e].idx = 0x19e;
  MobyVTable[0x19e].update = (void **)0x0;
  MobyVTable[0x19e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x19f].idx = 0x19f;
  MobyVTable[0x19f].update = &PTR_UpdateMoby__336_415__00703898;
  MobyVTable[0x19f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a0].idx = 0x1a0;
  MobyVTable[0x1a0].update = &PTR_UpdateMoby_416_0070c8b8;
  MobyVTable[0x1a0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a1].idx = 0x1a1;
  MobyVTable[0x1a1].update = &PTR_UpdateMoby_417_0070c8c8;
  MobyVTable[0x1a1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a2].idx = 0x1a2;
  MobyVTable[0x1a2].update = (void **)0x0;
  MobyVTable[0x1a2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a3].idx = 0x1a3;
  MobyVTable[0x1a3].update = &PTR_UpdateMoby_419_0070c8d0;
  MobyVTable[0x1a3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a4].idx = 0x1a4;
  MobyVTable[0x1a4].update = &PTR_UpdateMoby_420_0070c8e0;
  MobyVTable[0x1a4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a5].idx = 0x1a5;
  MobyVTable[0x1a5].update = &PTR_UpdateMoby_421_0070c8f0;
  MobyVTable[0x1a5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a6].idx = 0x1a6;
  MobyVTable[0x1a6].update = &PTR_UpdateMoby_422_0070c900;
  MobyVTable[0x1a6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a7].idx = 0x1a7;
  MobyVTable[0x1a7].update = (void **)0x0;
  MobyVTable[0x1a7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a8].idx = 0x1a8;
  MobyVTable[0x1a8].update = &PTR_UpdateMoby_424_0070c938;
  MobyVTable[0x1a8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1a9].idx = 0x1a9;
  MobyVTable[0x1a9].update = &PTR_UpdateMoby_425_0070c950;
  MobyVTable[0x1a9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1aa].idx = 0x1aa;
  MobyVTable[0x1aa].update = &PTR_UpdateMoby_426_0070c980;
  MobyVTable[0x1aa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ab].idx = 0x1ab;
  MobyVTable[0x1ab].update = &PTR_UpdateMoby_427_0070c9d0;
  MobyVTable[0x1ab].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ac].idx = 0x1ac;
  MobyVTable[0x1ac].update = &PTR_UpdateMoby_428_0070c9e8;
  MobyVTable[0x1ac].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ad].idx = 0x1ad;
  MobyVTable[0x1ad].update = &PTR_UpdateMoby_429_0070c9f8;
  MobyVTable[0x1ad].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ae].idx = 0x1ae;
  MobyVTable[0x1ae].update = &PTR_UpdateMoby_430_0070ca08;
  MobyVTable[0x1ae].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1af].idx = 0x1af;
  MobyVTable[0x1af].update = &PTR_UpdateMoby_431_0070ca10;
  MobyVTable[0x1af].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b0].idx = 0x1b0;
  MobyVTable[0x1b0].update = &PTR_UpdateMoby__432_1052__0070ca20;
  MobyVTable[0x1b0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b1].idx = 0x1b1;
  MobyVTable[0x1b1].update = &PTR_UpdateMoby_433_0070ca28;
  MobyVTable[0x1b1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b2].idx = 0x1b2;
  MobyVTable[0x1b2].update = &PTR_UpdateMoby_434_0070ca38;
  MobyVTable[0x1b2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b3].idx = 0x1b3;
  MobyVTable[0x1b3].update = &PTR_UpdateMoby_435_0070ca58;
  MobyVTable[0x1b3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b4].idx = 0x1b4;
  MobyVTable[0x1b4].update = &PTR_UpdateMoby_436_UmbrisInfobot____0070ca78;
  MobyVTable[0x1b4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b5].idx = 0x1b5;
  MobyVTable[0x1b5].update = &PTR_UpdateMoby_437_0070cac0;
  MobyVTable[0x1b5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b6].idx = 0x1b6;
  MobyVTable[0x1b6].update = &PTR_UpdateMoby_438_0070cae0;
  MobyVTable[0x1b6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b7].idx = 0x1b7;
  MobyVTable[0x1b7].update = &PTR_UpdateMoby_439_0070caf8;
  MobyVTable[0x1b7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b8].idx = 0x1b8;
  MobyVTable[0x1b8].update = &PTR_UpdateMoby_440_0070cc00;
  MobyVTable[0x1b8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1b9].idx = 0x1b9;
  MobyVTable[0x1b9].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1b9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ba].idx = 0x1ba;
  MobyVTable[0x1ba].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1ba].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1bb].idx = 0x1bb;
  MobyVTable[0x1bb].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1bb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1bc].idx = 0x1bc;
  MobyVTable[0x1bc].update = &PTR_UpdateMoby_444_0070cc40;
  MobyVTable[0x1bc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1bd].idx = 0x1bd;
  MobyVTable[0x1bd].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1bd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1be].idx = 0x1be;
  MobyVTable[0x1be].update = (void **)0x0;
  MobyVTable[0x1be].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1bf].idx = 0x1bf;
  MobyVTable[0x1bf].update = &PTR_UpdateMoby__447_920__0070f600;
  MobyVTable[0x1bf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c0].idx = 0x1c0;
  MobyVTable[0x1c0].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1c0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c1].idx = 0x1c1;
  MobyVTable[0x1c1].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1c1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c2].idx = 0x1c2;
  MobyVTable[0x1c2].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1c2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c3].idx = 0x1c3;
  MobyVTable[0x1c3].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1c3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c4].idx = 0x1c4;
  MobyVTable[0x1c4].update = &PTR_UpdateMoby_452_0070cc60;
  MobyVTable[0x1c4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c5].idx = 0x1c5;
  MobyVTable[0x1c5].update = (void **)0x0;
  MobyVTable[0x1c5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c6].idx = 0x1c6;
  MobyVTable[0x1c6].update = &PTR_UpdateMoby_454_0070cc78;
  MobyVTable[0x1c6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c7].idx = 0x1c7;
  MobyVTable[0x1c7].update = &PTR_UpdateMoby_455_0070cc98;
  MobyVTable[0x1c7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c8].idx = 0x1c8;
  MobyVTable[0x1c8].update = &PTR_UpdateMoby_456_0070cca8;
  MobyVTable[0x1c8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1c9].idx = 0x1c9;
  MobyVTable[0x1c9].update = &PTR_UpdateMoby_457_0070ccc8;
  MobyVTable[0x1c9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ca].idx = 0x1ca;
  MobyVTable[0x1ca].update = &PTR_UpdateMoby_458_007038c8;
  MobyVTable[0x1ca].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1cb].idx = 0x1cb;
  MobyVTable[0x1cb].update = &PTR_UpdateMoby_459_0070cd50;
  MobyVTable[0x1cb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1cc].idx = 0x1cc;
  MobyVTable[0x1cc].update = &PTR_UpdateMoby_460_0070cd88;
  MobyVTable[0x1cc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1cd].idx = 0x1cd;
  MobyVTable[0x1cd].update = (void **)0x0;
  MobyVTable[0x1cd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ce].idx = 0x1ce;
  MobyVTable[0x1ce].update = &PTR_UpdateMoby_462_0070cda8;
  MobyVTable[0x1ce].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1cf].idx = 0x1cf;
  MobyVTable[0x1cf].update = &PTR_UpdateMoby_463_0070cdd0;
  MobyVTable[0x1cf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d0].idx = 0x1d0;
  MobyVTable[0x1d0].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1d0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d1].idx = 0x1d1;
  MobyVTable[0x1d1].update = &PTR_UpdateMoby_a_lot_7_0070cc18;
  MobyVTable[0x1d1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d2].idx = 0x1d2;
  MobyVTable[0x1d2].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1d2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d3].idx = 0x1d3;
  MobyVTable[0x1d3].update = &PTR_UpdateMoby__467_472__0070cdf8;
  MobyVTable[0x1d3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d4].idx = 0x1d4;
  MobyVTable[0x1d4].update = &PTR_UpdateMoby__468_469__0070ce08;
  MobyVTable[0x1d4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d5].idx = 0x1d5;
  MobyVTable[0x1d5].update = &PTR_UpdateMoby__468_469__0070ce08;
  MobyVTable[0x1d5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d6].idx = 0x1d6;
  MobyVTable[0x1d6].update = &PTR_UpdateMoby_470_0070ce50;
  MobyVTable[0x1d6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d7].idx = 0x1d7;
  MobyVTable[0x1d7].update = &PTR_UpdateMoby_471_0070ce68;
  MobyVTable[0x1d7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d8].idx = 0x1d8;
  MobyVTable[0x1d8].update = &PTR_UpdateMoby__467_472__0070cdf8;
  MobyVTable[0x1d8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1d9].idx = 0x1d9;
  MobyVTable[0x1d9].update = (void **)0x0;
  MobyVTable[0x1d9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1da].idx = 0x1da;
  MobyVTable[0x1da].update = (void **)0x0;
  MobyVTable[0x1da].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1db].idx = 0x1db;
  MobyVTable[0x1db].update = &PTR_UpdateMoby_475_0070ce80;
  MobyVTable[0x1db].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1dc].idx = 0x1dc;
  MobyVTable[0x1dc].update = (void **)0x0;
  MobyVTable[0x1dc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1dd].idx = 0x1dd;
  MobyVTable[0x1dd].update = (void **)0x0;
  MobyVTable[0x1dd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1de].idx = 0x1de;
  MobyVTable[0x1de].update = (void **)0x0;
  MobyVTable[0x1de].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1df].idx = 0x1df;
  MobyVTable[0x1df].update = &PTR_UpdateMoby_479_0070cea8;
  MobyVTable[0x1df].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e0].idx = 0x1e0;
  MobyVTable[0x1e0].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1e0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e1].idx = 0x1e1;
  MobyVTable[0x1e1].update = &PTR_UpdateMoby_481_0070cee8;
  MobyVTable[0x1e1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e2].idx = 0x1e2;
  MobyVTable[0x1e2].update = &PTR_UpdateMoby_482_0070cef8;
  MobyVTable[0x1e2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e3].idx = 0x1e3;
  MobyVTable[0x1e3].update = (void **)0x0;
  MobyVTable[0x1e3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e4].idx = 0x1e4;
  MobyVTable[0x1e4].update = &PTR_UpdateMoby_484_0070cf00;
  MobyVTable[0x1e4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e5].idx = 0x1e5;
  MobyVTable[0x1e5].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1e5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e6].idx = 0x1e6;
  MobyVTable[0x1e6].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1e6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e7].idx = 0x1e7;
  MobyVTable[0x1e7].update = &PTR_UpdateMoby_487_0070cf20;
  MobyVTable[0x1e7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e8].idx = 0x1e8;
  MobyVTable[0x1e8].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1e8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1e9].idx = 0x1e9;
  MobyVTable[0x1e9].update = (void **)0x0;
  MobyVTable[0x1e9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ea].idx = 0x1ea;
  MobyVTable[0x1ea].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1ea].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1eb].idx = 0x1eb;
  MobyVTable[0x1eb].update = &PTR_UpdateMoby_491_0070cfc0;
  MobyVTable[0x1eb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ec].idx = 0x1ec;
  MobyVTable[0x1ed].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1ec].update = &PTR_UpdateMoby_a_lot_23_0070cfd0;
  MobyVTable[0x1ee].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1ec].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ed].idx = 0x1ed;
  MobyVTable[0x1ef].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1ed].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ee].idx = 0x1ee;
  MobyVTable[0x1ee].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ef].idx = 0x1ef;
  MobyVTable[0x1ef].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1f0].idx = 0x1f0;
  MobyVTable[0x1f0].update = (void **)0x0;
  MobyVTable[0x1f2].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x1f0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1f1].idx = 0x1f1;
  MobyVTable[0x1f1].update = (void **)0x0;
  MobyVTable[0x1f1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1f2].idx = 0x1f2;
  MobyVTable[0x1f2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[499].idx = 499;
  MobyVTable[499].update = &PTR_UpdateMoby_499_0070cfe8;
  MobyVTable[499].exit = &PTR_PTR_0071d1f0;
  MobyVTable[500].idx = 500;
  MobyVTable[500].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[500].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1f5].idx = 0x1f5;
  MobyVTable[0x1f5].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1f5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1f6].idx = 0x1f6;
  MobyVTable[0x1f6].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1f6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1f7].idx = 0x1f7;
  MobyVTable[0x1f7].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1f7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1f8].idx = 0x1f8;
  MobyVTable[0x1f8].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1f8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1f9].idx = 0x1f9;
  MobyVTable[0x1f9].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1f9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1fa].idx = 0x1fa;
  MobyVTable[0x1fa].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1fa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1fb].idx = 0x1fb;
  MobyVTable[0x1fb].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1fb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1fc].idx = 0x1fc;
  MobyVTable[0x1fc].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1fc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1fd].idx = 0x1fd;
  MobyVTable[0x1fd].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1fd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1fe].idx = 0x1fe;
  MobyVTable[0x1fe].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1fe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x1ff].idx = 0x1ff;
  MobyVTable[0x1ff].update = &PTR_UpdateMoby_500_Crate_0070d030;
  MobyVTable[0x1ff].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x200].idx = 0x200;
  MobyVTable[0x200].update = (void **)0x0;
  MobyVTable[0x200].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x201].idx = 0x201;
  MobyVTable[0x201].update = (void **)0x0;
  MobyVTable[0x201].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x202].idx = 0x202;
  MobyVTable[0x202].update = (void **)0x0;
  MobyVTable[0x202].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x203].idx = 0x203;
  MobyVTable[0x203].update = (void **)0x0;
  MobyVTable[0x203].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x204].idx = 0x204;
  MobyVTable[0x204].update = (void **)0x0;
  MobyVTable[0x204].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x205].idx = 0x205;
  MobyVTable[0x205].update = (void **)0x0;
  MobyVTable[0x205].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x206].idx = 0x206;
  MobyVTable[0x206].update = (void **)0x0;
  MobyVTable[0x206].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x207].idx = 0x207;
  MobyVTable[0x207].update = (void **)0x0;
  MobyVTable[0x207].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x208].idx = 0x208;
  MobyVTable[0x208].update = &PTR_UpdateMoby_520_0070d090;
  MobyVTable[0x208].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x209].idx = 0x209;
  MobyVTable[0x209].update = (void **)0x0;
  MobyVTable[0x209].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x20a].idx = 0x20a;
  MobyVTable[0x20a].update = (void **)0x0;
  MobyVTable[0x20a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x20b].idx = 0x20b;
  MobyVTable[0x20b].update = (void **)0x0;
  MobyVTable[0x20b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x20c].idx = 0x20c;
  MobyVTable[0x20c].update = (void **)0x0;
  MobyVTable[0x20c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x20d].idx = 0x20d;
  MobyVTable[0x20d].update = (void **)0x0;
  MobyVTable[0x20d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x20e].idx = 0x20e;
  MobyVTable[0x20e].update = (void **)0x0;
  MobyVTable[0x20e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x20f].idx = 0x20f;
  MobyVTable[0x20f].update = (void **)0x0;
  MobyVTable[0x20f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x210].idx = 0x210;
  MobyVTable[0x210].update = (void **)0x0;
  MobyVTable[0x210].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x211].idx = 0x211;
  MobyVTable[0x211].update = &PTR_UpdateMoby_529_0070d0a0;
  MobyVTable[0x211].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x212].idx = 0x212;
  MobyVTable[0x212].update = &PTR_UpdateMoby_530_0070d0c0;
  MobyVTable[0x212].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x213].idx = 0x213;
  MobyVTable[0x213].update = &PTR_UpdateMoby_531_0070d0d0;
  MobyVTable[0x213].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x214].idx = 0x214;
  MobyVTable[0x214].update = &PTR_UpdateMoby_532_0070d0d8;
  MobyVTable[0x214].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x215].idx = 0x215;
  MobyVTable[0x215].update = &PTR_UpdateMoby_533_0070d0e0;
  MobyVTable[0x215].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x216].idx = 0x216;
  MobyVTable[0x216].update = (void **)0x0;
  MobyVTable[0x216].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x217].idx = 0x217;
  MobyVTable[0x217].update = (void **)0x0;
  MobyVTable[0x217].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x218].idx = 0x218;
  MobyVTable[0x218].update = (void **)0x0;
  MobyVTable[0x218].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x219].idx = 0x219;
  MobyVTable[0x219].update = (void **)0x0;
  MobyVTable[0x219].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x21a].idx = 0x21a;
  MobyVTable[0x21a].update = (void **)0x0;
  MobyVTable[0x21a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x21b].idx = 0x21b;
  MobyVTable[0x21b].update = (void **)0x0;
  MobyVTable[0x21b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x21c].idx = 0x21c;
  MobyVTable[0x21c].update = (void **)0x0;
  MobyVTable[0x21c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x21d].idx = 0x21d;
  MobyVTable[0x21d].update = &PTR_UpdateMoby_541_0070d100;
  MobyVTable[0x21d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x21e].idx = 0x21e;
  MobyVTable[0x21e].update = &PTR_UpdateMoby_542_0070d130;
  MobyVTable[0x21e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x21f].idx = 0x21f;
  MobyVTable[0x21f].update = (void **)0x0;
  MobyVTable[0x21f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x220].idx = 0x220;
  MobyVTable[0x220].update = (void **)0x0;
  MobyVTable[0x220].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x221].idx = 0x221;
  MobyVTable[0x221].update = &PTR_UpdateMoby_545_0070d148;
  MobyVTable[0x221].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x222].idx = 0x222;
  MobyVTable[0x222].update = &PTR_UpdateMoby_546_0070d150;
  MobyVTable[0x222].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x223].idx = 0x223;
  MobyVTable[0x223].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x223].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x224].idx = 0x224;
  MobyVTable[0x224].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x224].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x225].idx = 0x225;
  MobyVTable[0x225].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x225].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x226].idx = 0x226;
  MobyVTable[0x226].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x226].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x227].idx = 0x227;
  MobyVTable[0x227].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x227].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x228].idx = 0x228;
  MobyVTable[0x228].update = &PTR_UpdateMoby_552_0070d180;
  MobyVTable[0x228].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x229].idx = 0x229;
  MobyVTable[0x229].update = &PTR_M554_003b2868_0070d1a8;
  MobyVTable[0x229].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x22b].update = &PTR_UpdateMoby_a_lot_3_0070cde8;
  MobyVTable[0x22a].idx = 0x22a;
  MobyVTable[0x22a].update = &PTR_UpdateMoby_554_0070d1b8;
  MobyVTable[0x22a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x22b].idx = 0x22b;
  MobyVTable[0x22b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x22c].idx = 0x22c;
  MobyVTable[0x22c].update = &PTR_UpdateMoby_556_0070d1f8;
  MobyVTable[0x22c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x22d].idx = 0x22d;
  MobyVTable[0x22d].update = &PTR_UpdateMoby_557_Hoverboat_0070d208;
  MobyVTable[0x22d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x22e].idx = 0x22e;
  MobyVTable[0x22e].update = &PTR_UpdateMoby_558_0070d218;
  MobyVTable[0x22e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x22f].idx = 0x22f;
  MobyVTable[0x22f].update = (void **)0x0;
  MobyVTable[0x22f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x230].idx = 0x230;
  MobyVTable[0x230].update = (void **)0x0;
  MobyVTable[0x230].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x231].idx = 0x231;
  MobyVTable[0x231].update = (void **)0x0;
  MobyVTable[0x231].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x232].idx = 0x232;
  MobyVTable[0x232].update = &PTR_UpdateMoby_562_0070d238;
  MobyVTable[0x232].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x233].idx = 0x233;
  MobyVTable[0x233].update = &PTR_UpdateMoby_563_0070d2b0;
  MobyVTable[0x233].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x234].idx = 0x234;
  MobyVTable[0x234].update = &PTR_UpdateMoby_564_0070d2d0;
  MobyVTable[0x234].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x235].idx = 0x235;
  MobyVTable[0x235].update = (void **)0x0;
  MobyVTable[0x235].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x236].idx = 0x236;
  MobyVTable[0x236].update = &PTR_UpdateMoby_566_0070d2f0;
  MobyVTable[0x236].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x237].idx = 0x237;
  MobyVTable[0x237].update = &PTR_UpdateMoby_567_0070d300;
  MobyVTable[0x237].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x238].idx = 0x238;
  MobyVTable[0x238].update = &PTR_UpdateMoby_568_0070d318;
  MobyVTable[0x238].exit = &PTR_PTR_0071d298;
  MobyVTable[0x239].idx = 0x239;
  MobyVTable[0x239].update = (void **)0x0;
  MobyVTable[0x239].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x23a].idx = 0x23a;
  MobyVTable[0x23a].update = &PTR_UpdateMoby_570_0070d368;
  MobyVTable[0x23a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x23b].idx = 0x23b;
  MobyVTable[0x23b].update = &PTR_UpdateMoby_571_0070d370;
  MobyVTable[0x23b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x23c].idx = 0x23c;
  MobyVTable[0x23c].update = &PTR_UpdateMoby__572_865_866__0070d3b0;
  MobyVTable[0x23c].exit = &PTR_PTR_0071d2b0;
  MobyVTable[0x23d].idx = 0x23d;
  MobyVTable[0x23d].update = &PTR_UpdateMoby_573_0070d400;
  MobyVTable[0x23d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x23e].idx = 0x23e;
  MobyVTable[0x23e].update = &PTR_UpdateMoby_574_0070d4f0;
  MobyVTable[0x23e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x23f].idx = 0x23f;
  MobyVTable[0x23f].update = &PTR_UpdateMoby_575_0070d508;
  MobyVTable[0x23f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x240].idx = 0x240;
  MobyVTable[0x240].update = &PTR_UpdateMoby_576_0070d528;
  MobyVTable[0x240].exit = &PTR_PTR_0071d2c8;
  MobyVTable[0x241].idx = 0x241;
  MobyVTable[0x241].update = &PTR_UpdateMoby_577_0070d5e0;
  MobyVTable[0x241].exit = &PTR_PTR_0071d2e0;
  MobyVTable[0x242].idx = 0x242;
  MobyVTable[0x242].update = &PTR_UpdateMoby_578_0070d620;
  MobyVTable[0x242].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x243].idx = 0x243;
  MobyVTable[0x243].update = (void **)0x0;
  MobyVTable[0x243].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x244].idx = 0x244;
  MobyVTable[0x244].update = &PTR_UpdateMoby_580_0070d6c0;
  MobyVTable[0x244].exit = &PTR_PTR_0071d2f8;
  MobyVTable[0x245].idx = 0x245;
  MobyVTable[0x245].update = (void **)0x0;
  MobyVTable[0x245].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x246].idx = 0x246;
  MobyVTable[0x246].update = &PTR_UpdateMoby_582_0070d708;
  MobyVTable[0x246].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x247].idx = 0x247;
  MobyVTable[0x247].update = &PTR_UpdateMoby_583_0070d718;
  MobyVTable[0x247].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x248].idx = 0x248;
  MobyVTable[0x248].update = &PTR_UpdateMoby_584_0070d750;
  MobyVTable[0x248].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x249].idx = 0x249;
  MobyVTable[0x249].update = &PTR_UpdateMoby_585_0070d768;
  MobyVTable[0x249].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x24a].idx = 0x24a;
  MobyVTable[0x24a].update = &PTR_UpdateMoby_586_0070d778;
  MobyVTable[0x24a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x24b].idx = 0x24b;
  MobyVTable[0x24b].update = &PTR_UpdateMoby_587_0070d7b8;
  MobyVTable[0x24b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x24c].idx = 0x24c;
  MobyVTable[0x24c].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x24c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x24d].idx = 0x24d;
  MobyVTable[0x24d].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x24d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x24e].idx = 0x24e;
  MobyVTable[0x24e].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x24e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x24f].idx = 0x24f;
  MobyVTable[0x24f].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x24f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x250].idx = 0x250;
  MobyVTable[0x250].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x250].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x251].idx = 0x251;
  MobyVTable[0x251].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x251].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x252].idx = 0x252;
  MobyVTable[0x252].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x252].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x253].idx = 0x253;
  MobyVTable[0x253].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x253].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x254].idx = 0x254;
  MobyVTable[0x254].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x254].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x255].idx = 0x255;
  MobyVTable[0x255].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x255].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x256].idx = 0x256;
  MobyVTable[0x256].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x256].exit = &PTR_PTR_0071d1f0;
  MobyVTable[599].idx = 599;
  MobyVTable[599].update = (void **)0x0;
  MobyVTable[599].exit = &PTR_PTR_0071d1f0;
  MobyVTable[600].idx = 600;
  MobyVTable[600].update = &PTR_UpdateMoby_600_0070d830;
  MobyVTable[600].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x259].idx = 0x259;
  MobyVTable[0x259].update = (void **)0x0;
  MobyVTable[0x259].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x25a].idx = 0x25a;
  MobyVTable[0x25a].update = &PTR_UpdateMoby_602_0070d850;
  MobyVTable[0x25a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x25b].idx = 0x25b;
  MobyVTable[0x25b].update = (void **)0x0;
  MobyVTable[0x25b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x25c].idx = 0x25c;
  MobyVTable[0x25c].update = &PTR_UpdateMoby_604_0070d888;
  MobyVTable[0x25c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x25d].idx = 0x25d;
  MobyVTable[0x25d].update = &PTR_UpdateMoby_605_MetalDetectorSpot_0070d898;
  MobyVTable[0x25d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x25e].idx = 0x25e;
  MobyVTable[0x25e].update = (void **)0x0;
  MobyVTable[0x25e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x25f].idx = 0x25f;
  MobyVTable[0x25f].update = &PTR_UpdateMoby_607_0070d8a8;
  MobyVTable[0x25f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x260].idx = 0x260;
  MobyVTable[0x260].update = (void **)0x0;
  MobyVTable[0x260].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x261].idx = 0x261;
  MobyVTable[0x261].update = (void **)0x0;
  MobyVTable[0x261].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x262].idx = 0x262;
  MobyVTable[0x262].update = &PTR_UpdateMoby_610_WindControl_0070d8c8;
  MobyVTable[0x262].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x263].idx = 0x263;
  MobyVTable[0x263].update = &PTR_UpdateMoby_611_0070d8e0;
  MobyVTable[0x263].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x264].idx = 0x264;
  MobyVTable[0x264].update = &PTR_UpdateMoby_612_0070d928;
  MobyVTable[0x264].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x265].idx = 0x265;
  MobyVTable[0x265].update = &PTR_UpdateMoby_613_0070d938;
  MobyVTable[0x265].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x266].idx = 0x266;
  MobyVTable[0x266].update = (void **)0x0;
  MobyVTable[0x266].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x267].idx = 0x267;
  MobyVTable[0x267].update = &PTR_UpdateMoby_615_0070d958;
  MobyVTable[0x267].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x268].idx = 0x268;
  MobyVTable[0x268].update = (void **)0x0;
  MobyVTable[0x268].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x269].idx = 0x269;
  MobyVTable[0x269].update = &PTR_UpdateMoby_617_0070d9a8;
  MobyVTable[0x269].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x26a].idx = 0x26a;
  MobyVTable[0x26a].update = &PTR_UpdateMoby_618_0070d9b0;
  MobyVTable[0x26a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x26b].idx = 0x26b;
  MobyVTable[0x26b].update = (void **)0x0;
  MobyVTable[0x26b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x26c].idx = 0x26c;
  MobyVTable[0x26c].update = (void **)0x0;
  MobyVTable[0x26c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x26d].idx = 0x26d;
  MobyVTable[0x26d].update = &PTR_UpdateMoby_621_0070d9b8;
  MobyVTable[0x26d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x26e].idx = 0x26e;
  MobyVTable[0x26e].update = &PTR_UpdateMoby_622_0070d9d8;
  MobyVTable[0x26e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x26f].idx = 0x26f;
  MobyVTable[0x26f].update = &PTR_UpdateMoby_623_0070da10;
  MobyVTable[0x26f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x270].idx = 0x270;
  MobyVTable[0x270].update = &PTR_UpdateMoby_624_0070da30;
  MobyVTable[0x270].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x271].idx = 0x271;
  MobyVTable[0x271].update = &PTR_UpdateMoby_625_0070da60;
  MobyVTable[0x271].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x272].idx = 0x272;
  MobyVTable[0x272].update = (void **)0x0;
  MobyVTable[0x272].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x273].idx = 0x273;
  MobyVTable[0x273].update = &PTR_UpdateMoby_627_0070da78;
  MobyVTable[0x273].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x274].idx = 0x274;
  MobyVTable[0x274].update = &PTR_UpdateMoby_628_0070da90;
  MobyVTable[0x274].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x275].idx = 0x275;
  MobyVTable[0x275].update = &PTR_UpdateMoby_629_0070dab8;
  MobyVTable[0x275].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x276].idx = 0x276;
  MobyVTable[0x276].update = &PTR_UpdateMoby_630_0070db88;
  MobyVTable[0x276].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x277].idx = 0x277;
  MobyVTable[0x277].update = &PTR_UpdateMoby_631_0070dbf0;
  MobyVTable[0x277].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x278].idx = 0x278;
  MobyVTable[0x278].update = &PTR_UpdateMoby_632_0070dc00;
  MobyVTable[0x278].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x279].idx = 0x279;
  MobyVTable[0x279].update = &PTR_UpdateMoby__633_773_988_989__0070dc58;
  MobyVTable[0x279].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x27a].idx = 0x27a;
  MobyVTable[0x27a].update = (void **)0x0;
  MobyVTable[0x27a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x27b].idx = 0x27b;
  MobyVTable[0x27b].update = &PTR_UpdateMoby__635_1382__0070dca0;
  MobyVTable[0x27b].exit = &PTR_PTR_0071d310;
  MobyVTable[0x27c].idx = 0x27c;
  MobyVTable[0x27c].update = &PTR_UpdateMoby_636_0070dce8;
  MobyVTable[0x27c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x27d].idx = 0x27d;
  MobyVTable[0x27d].update = &PTR_UpdateMoby_637_0070dcf8;
  MobyVTable[0x27d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x27e].idx = 0x27e;
  MobyVTable[0x27e].update = &PTR_UpdateMoby_638_0070dd40;
  MobyVTable[0x27e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x27f].idx = 0x27f;
  MobyVTable[0x27f].update = &PTR_UpdateMoby_639_0070dd68;
  MobyVTable[0x27f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x280].idx = 0x280;
  MobyVTable[0x280].update = (void **)0x0;
  MobyVTable[0x280].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x281].idx = 0x281;
  MobyVTable[0x281].update = &PTR_UpdateMoby_641_0070dd70;
  MobyVTable[0x281].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x282].idx = 0x282;
  MobyVTable[0x282].update = &PTR_UpdateMoby_642_0070dd78;
  MobyVTable[0x282].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x283].idx = 0x283;
  MobyVTable[0x283].update = &PTR_UpdateMoby_643_0070dd80;
  MobyVTable[0x283].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x284].idx = 0x284;
  MobyVTable[0x284].update = &PTR_UpdateMoby_644_0070dd90;
  MobyVTable[0x284].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x285].idx = 0x285;
  MobyVTable[0x285].update = (void **)0x0;
  MobyVTable[0x285].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x286].idx = 0x286;
  MobyVTable[0x286].update = &PTR_UpdateMoby__646_752__0070ddc8;
  MobyVTable[0x286].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x287].idx = 0x287;
  MobyVTable[0x287].update = &PTR_UpdateMoby_647_0070ddd8;
  MobyVTable[0x287].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x288].idx = 0x288;
  MobyVTable[0x288].update = &PTR_UpdateMoby_648_0070ddf0;
  MobyVTable[0x288].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x289].idx = 0x289;
  MobyVTable[0x289].update = (void **)0x0;
  MobyVTable[0x289].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x28a].idx = 0x28a;
  MobyVTable[0x28a].update = &PTR_UpdateMoby_650_0070de10;
  MobyVTable[0x28a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x28b].idx = 0x28b;
  MobyVTable[0x28b].update = &PTR_UpdateMoby_651_0070de28;
  MobyVTable[0x28b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x28c].idx = 0x28c;
  MobyVTable[0x28c].update = &PTR_UpdateMoby__296_297_652_653__0070c0b8;
  MobyVTable[0x28c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x28d].idx = 0x28d;
  MobyVTable[0x28d].update = &PTR_UpdateMoby__296_297_652_653__0070c0b8;
  MobyVTable[0x28d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x28e].idx = 0x28e;
  MobyVTable[0x28e].update = &PTR_UpdateMoby_654_0070de48;
  MobyVTable[0x28e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x28f].idx = 0x28f;
  MobyVTable[0x28f].update = &PTR_UpdateMoby_655_0070de70;
  MobyVTable[0x28f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x290].idx = 0x290;
  MobyVTable[0x290].update = &PTR_UpdateMoby_656_0070dea0;
  MobyVTable[0x290].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x291].idx = 0x291;
  MobyVTable[0x291].update = (void **)0x0;
  MobyVTable[0x291].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x292].idx = 0x292;
  MobyVTable[0x292].update = &PTR_UpdateMoby_658_0070dea8;
  MobyVTable[0x292].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x293].idx = 0x293;
  MobyVTable[0x293].update = (void **)0x0;
  MobyVTable[0x293].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x294].idx = 0x294;
  MobyVTable[0x294].update = &PTR_UpdateMoby_660_0070deb8;
  MobyVTable[0x294].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x295].idx = 0x295;
  MobyVTable[0x295].update = &PTR_UpdateMoby_661_0070ded0;
  MobyVTable[0x295].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x296].idx = 0x296;
  MobyVTable[0x296].update = (void **)0x0;
  MobyVTable[0x296].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x297].idx = 0x297;
  MobyVTable[0x297].update = (void **)0x0;
  MobyVTable[0x297].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x298].idx = 0x298;
  MobyVTable[0x298].update = &PTR_UpdateMoby_664_0070dee0;
  MobyVTable[0x298].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x299].idx = 0x299;
  MobyVTable[0x299].update = &PTR_UpdateMoby_665_0070def0;
  MobyVTable[0x299].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x29a].idx = 0x29a;
  MobyVTable[0x29a].update = &PTR_UpdateMoby_666_0070def8;
  MobyVTable[0x29a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x29b].idx = 0x29b;
  MobyVTable[0x29b].update = &PTR_UpdateMoby_667_0070df08;
  MobyVTable[0x29b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x29c].idx = 0x29c;
  MobyVTable[0x29c].update = &PTR_UpdateMoby_668_0070df20;
  MobyVTable[0x29c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x29d].idx = 0x29d;
  MobyVTable[0x29d].update = &PTR_UpdateMoby_669_0070df30;
  MobyVTable[0x29d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x29e].idx = 0x29e;
  MobyVTable[0x29e].update = &PTR_UpdateMoby_670_0070df60;
  MobyVTable[0x29e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x29f].idx = 0x29f;
  MobyVTable[0x29f].update = &PTR_UpdateMoby_671_0070dfa8;
  MobyVTable[0x29f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a0].idx = 0x2a0;
  MobyVTable[0x2a0].update = &PTR_UpdateMoby_672_0070dfc0;
  MobyVTable[0x2a0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a1].idx = 0x2a1;
  MobyVTable[0x2a1].update = (void **)0x0;
  MobyVTable[0x2a1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a2].idx = 0x2a2;
  MobyVTable[0x2a2].update = &PTR_UpdateMoby__674_677_680__0070dfc8;
  MobyVTable[0x2a2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a3].idx = 0x2a3;
  MobyVTable[0x2a3].update = &PTR_UpdateMoby_675_0070dfd0;
  MobyVTable[0x2a3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a4].idx = 0x2a4;
  MobyVTable[0x2a4].update = &PTR_UpdateMoby_676_0070dfe0;
  MobyVTable[0x2a4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a5].idx = 0x2a5;
  MobyVTable[0x2a5].update = &PTR_UpdateMoby__674_677_680__0070dfc8;
  MobyVTable[0x2a5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a6].idx = 0x2a6;
  MobyVTable[0x2a6].update = &PTR_UpdateMoby_678_0070dff8;
  MobyVTable[0x2a6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a7].idx = 0x2a7;
  MobyVTable[0x2a7].update = &PTR_UpdateMoby_679_0070e008;
  MobyVTable[0x2a7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a8].idx = 0x2a8;
  MobyVTable[0x2a8].update = &PTR_UpdateMoby__674_677_680__0070dfc8;
  MobyVTable[0x2a8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2a9].idx = 0x2a9;
  MobyVTable[0x2a9].update = &PTR_UpdateMoby_681_0070e020;
  MobyVTable[0x2a9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2aa].idx = 0x2aa;
  MobyVTable[0x2aa].update = (void **)0x0;
  MobyVTable[0x2aa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ab].idx = 0x2ab;
  MobyVTable[0x2ab].update = (void **)0x0;
  MobyVTable[0x2ab].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ac].idx = 0x2ac;
  MobyVTable[0x2ac].update = &PTR_UpdateMoby_684_0070e038;
  MobyVTable[0x2ac].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ad].idx = 0x2ad;
  MobyVTable[0x2ad].update = &PTR_UpdateMoby_685_0070e080;
  MobyVTable[0x2ad].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ae].idx = 0x2ae;
  MobyVTable[0x2ae].update = &PTR_UpdateMoby_686_0070e0a8;
  MobyVTable[0x2ae].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2af].idx = 0x2af;
  MobyVTable[0x2af].update = (void **)0x0;
  MobyVTable[0x2af].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b0].idx = 0x2b0;
  MobyVTable[0x2b0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b0].update = &PTR_M688_00415f18_0070e0b8;
  MobyVTable[0x2b1].update = &PTR_UpdateMoby_689_0070e0e0;
  MobyVTable[0x2b1].idx = 0x2b1;
  MobyVTable[0x2b1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b2].idx = 0x2b2;
  MobyVTable[0x2b2].update = &PTR_UpdateMoby_690_0070e188;
  MobyVTable[0x2b2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b3].idx = 0x2b3;
  MobyVTable[0x2b3].update = &PTR_UpdateMoby_691_0070e1e0;
  MobyVTable[0x2b3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b4].idx = 0x2b4;
  MobyVTable[0x2b4].update = (void **)0x0;
  MobyVTable[0x2b4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b5].idx = 0x2b5;
  MobyVTable[0x2b5].update = (void **)0x0;
  MobyVTable[0x2b5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b6].idx = 0x2b6;
  MobyVTable[0x2b6].update = &PTR_UpdateMoby_694_0070e238;
  MobyVTable[0x2b6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b7].idx = 0x2b7;
  MobyVTable[0x2b7].update = &PTR_UpdateMoby_695_0070e250;
  MobyVTable[0x2b7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b8].idx = 0x2b8;
  MobyVTable[0x2b8].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0x2b8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2b9].idx = 0x2b9;
  MobyVTable[0x2b9].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0x2b9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ba].idx = 0x2ba;
  MobyVTable[0x2ba].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0x2ba].exit = &PTR_PTR_0071d1f0;
  MobyVTable[699].idx = 699;
  MobyVTable[699].update = &PTR_UpdateMoby_699_0070e288;
  MobyVTable[699].exit = &PTR_PTR_0071d1f0;
  MobyVTable[700].idx = 700;
  MobyVTable[700].update = &PTR_UpdateMoby_700_0070e298;
  MobyVTable[700].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2bd].idx = 0x2bd;
  MobyVTable[0x2bd].update = &PTR_UpdateMoby_701_0070e2a8;
  MobyVTable[0x2bd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2be].idx = 0x2be;
  MobyVTable[0x2be].update = &PTR_UpdateMoby_702_0070e2b8;
  MobyVTable[0x2be].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2bf].idx = 0x2bf;
  MobyVTable[0x2bf].update = &PTR_UpdateMoby__703_715__0070e2c8;
  MobyVTable[0x2bf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c0].idx = 0x2c0;
  MobyVTable[0x2c0].update = &PTR_UpdateMoby_704_0070e2d8;
  MobyVTable[0x2c0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c1].idx = 0x2c1;
  MobyVTable[0x2c1].update = &PTR_UpdateMoby_705_0070e2e0;
  MobyVTable[0x2c1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c2].idx = 0x2c2;
  MobyVTable[0x2c2].update = (void **)0x0;
  MobyVTable[0x2c2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c3].idx = 0x2c3;
  MobyVTable[0x2c3].update = &PTR_UpdateMoby_707_0070e2e8;
  MobyVTable[0x2c3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c4].idx = 0x2c4;
  MobyVTable[0x2c4].update = &PTR_UpdateMoby_708_0070e2f0;
  MobyVTable[0x2c4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c5].idx = 0x2c5;
  MobyVTable[0x2c5].update = &PTR_UpdateMoby__709_710_711__0070e300;
  MobyVTable[0x2c5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c6].idx = 0x2c6;
  MobyVTable[0x2c6].update = &PTR_UpdateMoby__709_710_711__0070e300;
  MobyVTable[0x2c6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c7].idx = 0x2c7;
  MobyVTable[0x2c7].update = &PTR_UpdateMoby__709_710_711__0070e300;
  MobyVTable[0x2c7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c8].idx = 0x2c8;
  MobyVTable[0x2c8].update = &PTR_UpdateMoby_712_0070e3a8;
  MobyVTable[0x2c8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2c9].idx = 0x2c9;
  MobyVTable[0x2c9].update = &PTR_UpdateMoby_713_0070e3d0;
  MobyVTable[0x2c9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ca].idx = 0x2ca;
  MobyVTable[0x2ca].update = &PTR_UpdateMoby_714_0070e3e0;
  MobyVTable[0x2ca].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2cb].idx = 0x2cb;
  MobyVTable[0x2cb].update = &PTR_UpdateMoby__703_715__0070e2c8;
  MobyVTable[0x2cb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2cc].idx = 0x2cc;
  MobyVTable[0x2cc].update = &PTR_UpdateMoby_716_0070e3f8;
  MobyVTable[0x2cc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2cd].idx = 0x2cd;
  MobyVTable[0x2cd].update = &PTR_UpdateMoby_717_0070e440;
  MobyVTable[0x2cd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ce].idx = 0x2ce;
  MobyVTable[0x2ce].update = (void **)0x0;
  MobyVTable[0x2ce].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2cf].idx = 0x2cf;
  MobyVTable[0x2cf].update = (void **)0x0;
  MobyVTable[0x2cf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d0].idx = 0x2d0;
  MobyVTable[0x2d0].update = (void **)0x0;
  MobyVTable[0x2d0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d1].idx = 0x2d1;
  MobyVTable[0x2d1].update = &PTR_UpdateMoby_721_0070e450;
  MobyVTable[0x2d1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d2].idx = 0x2d2;
  MobyVTable[0x2d2].update = &PTR_UpdateMoby_722_0070e468;
  MobyVTable[0x2d2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d3].idx = 0x2d3;
  MobyVTable[0x2d3].update = (void **)0x0;
  MobyVTable[0x2d3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d4].idx = 0x2d4;
  MobyVTable[0x2d4].update = &PTR_UpdateMoby_a_lot_23_0070cfd0;
  MobyVTable[0x2d4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d5].idx = 0x2d5;
  MobyVTable[0x2d5].update = &PTR_UpdateMoby_a_lot_23_0070cfd0;
  MobyVTable[0x2d5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d6].idx = 0x2d6;
  MobyVTable[0x2d6].update = &PTR_UpdateMoby__726_1082_1141__0070e478;
  MobyVTable[0x2d6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d7].idx = 0x2d7;
  MobyVTable[0x2d7].update = (void **)0x0;
  MobyVTable[0x2d7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d8].idx = 0x2d8;
  MobyVTable[0x2d8].update = (void **)0x0;
  MobyVTable[0x2d8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2d9].idx = 0x2d9;
  MobyVTable[0x2d9].update = &PTR_UpdateMoby_729_0070e488;
  MobyVTable[0x2d9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2da].idx = 0x2da;
  MobyVTable[0x2da].update = &PTR_UpdateMoby__730_731_790__0070e4a0;
  MobyVTable[0x2da].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2db].idx = 0x2db;
  MobyVTable[0x2db].update = &PTR_UpdateMoby__730_731_790__0070e4a0;
  MobyVTable[0x2db].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2dc].idx = 0x2dc;
  MobyVTable[0x2dc].update = &PTR_UpdateMoby_732_0070e4b0;
  MobyVTable[0x2dc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2dd].idx = 0x2dd;
  MobyVTable[0x2dd].update = &PTR_UpdateMoby_733_0070e4c0;
  MobyVTable[0x2dd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2de].idx = 0x2de;
  MobyVTable[0x2de].update = &PTR_UpdateMoby_734_0070e4d0;
  MobyVTable[0x2de].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2df].idx = 0x2df;
  MobyVTable[0x2df].update = &PTR_UpdateMoby__735_736__0070e4d8;
  MobyVTable[0x2df].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e0].idx = 0x2e0;
  MobyVTable[0x2e0].update = &PTR_UpdateMoby__735_736__0070e4d8;
  MobyVTable[0x2e0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e1].idx = 0x2e1;
  MobyVTable[0x2e1].update = &PTR_UpdateMoby_737_0070e4f0;
  MobyVTable[0x2e1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e2].idx = 0x2e2;
  MobyVTable[0x2e2].update = &PTR_UpdateMoby_738_0070e510;
  MobyVTable[0x2e2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e3].idx = 0x2e3;
  MobyVTable[0x2e3].update = &PTR_UpdateMoby_739_0070e578;
  MobyVTable[0x2e3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e4].idx = 0x2e4;
  MobyVTable[0x2e4].update = &PTR_UpdateMoby_740_0070e670;
  MobyVTable[0x2e4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e5].idx = 0x2e5;
  MobyVTable[0x2e5].update = &PTR_UpdateMoby_741_0070e6b8;
  MobyVTable[0x2e5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e6].idx = 0x2e6;
  MobyVTable[0x2e6].update = (void **)0x0;
  MobyVTable[0x2e6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e7].idx = 0x2e7;
  MobyVTable[0x2e7].update = &PTR_UpdateMoby_743_0070e6c0;
  MobyVTable[0x2e7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e8].idx = 0x2e8;
  MobyVTable[0x2e8].update = &PTR_UpdateMoby_744_0070e6c8;
  MobyVTable[0x2e8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2e9].idx = 0x2e9;
  MobyVTable[0x2e9].update = &PTR_UpdateMoby_745_0070e6f0;
  MobyVTable[0x2e9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ea].idx = 0x2ea;
  MobyVTable[0x2ea].update = &PTR_UpdateMoby_746_0070e700;
  MobyVTable[0x2ea].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2eb].idx = 0x2eb;
  MobyVTable[0x2eb].update = (void **)0x0;
  MobyVTable[0x2eb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ec].idx = 0x2ec;
  MobyVTable[0x2ec].update = (void **)0x0;
  MobyVTable[0x2ec].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ed].idx = 0x2ed;
  MobyVTable[0x2ed].update = &PTR_UpdateMoby_749_0070e720;
  MobyVTable[0x2ed].exit = &PTR_PTR_0071d328;
  MobyVTable[0x2ee].idx = 0x2ee;
  MobyVTable[0x2ee].update = &PTR_UpdateMoby_750_0070e7b0;
  MobyVTable[0x2ee].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ef].idx = 0x2ef;
  MobyVTable[0x2ef].update = &PTR_UpdateMoby_751_0070e7d0;
  MobyVTable[0x2ef].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f0].idx = 0x2f0;
  MobyVTable[0x2f0].update = &PTR_UpdateMoby__646_752__0070ddc8;
  MobyVTable[0x2f0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f1].idx = 0x2f1;
  MobyVTable[0x2f1].update = (void **)0x0;
  MobyVTable[0x2f1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f2].idx = 0x2f2;
  MobyVTable[0x2f2].update = &PTR_UpdateMoby_754_0070e7e0;
  MobyVTable[0x2f2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f3].idx = 0x2f3;
  MobyVTable[0x2f3].update = &PTR_UpdateMoby_755_0070e7e8;
  MobyVTable[0x2f3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f4].idx = 0x2f4;
  MobyVTable[0x2f4].update = (void **)0x0;
  MobyVTable[0x2f4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f5].idx = 0x2f5;
  MobyVTable[0x2f5].update = &PTR_UpdateMoby_757_0070e800;
  MobyVTable[0x2f5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f6].idx = 0x2f6;
  MobyVTable[0x2f6].update = &PTR_UpdateMoby__191_758_803_1429__0070b420;
  MobyVTable[0x2f6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f7].idx = 0x2f7;
  MobyVTable[0x2f7].update = &PTR_UpdateMoby_759_0070e810;
  MobyVTable[0x2f7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f8].idx = 0x2f8;
  MobyVTable[0x2f8].update = &PTR_UpdateMoby_760_0070e838;
  MobyVTable[0x2f8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2f9].idx = 0x2f9;
  MobyVTable[0x2f9].update = &PTR_UpdateMoby_761_0070e858;
  MobyVTable[0x2f9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2fa].idx = 0x2fa;
  MobyVTable[0x2fa].update = &PTR_UpdateMoby_762_0070e868;
  MobyVTable[0x2fa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2fb].idx = 0x2fb;
  MobyVTable[0x2fb].update = &PTR_UpdateMoby_763_0070e8b0;
  MobyVTable[0x2fb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2fc].idx = 0x2fc;
  MobyVTable[0x2fc].update = (void **)0x0;
  MobyVTable[0x2fc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2fd].idx = 0x2fd;
  MobyVTable[0x2fd].update = &PTR_UpdateMoby_765_0070e8c0;
  MobyVTable[0x2fd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2fe].idx = 0x2fe;
  MobyVTable[0x2fe].update = &PTR_UpdateMoby_a_lot_23_0070cfd0;
  MobyVTable[0x2fe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x2ff].idx = 0x2ff;
  MobyVTable[0x2ff].update = &PTR_UpdateMoby_a_lot_23_0070cfd0;
  MobyVTable[0x2ff].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x300].idx = 0x300;
  MobyVTable[0x300].update = &PTR_UpdateMoby__768_769__0070e8c8;
  MobyVTable[0x300].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x301].idx = 0x301;
  MobyVTable[0x301].update = &PTR_UpdateMoby__768_769__0070e8c8;
  MobyVTable[0x301].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x302].idx = 0x302;
  MobyVTable[0x302].update = (void **)0x0;
  MobyVTable[0x302].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x303].idx = 0x303;
  MobyVTable[0x303].update = &PTR_UpdateMoby_771_0070e900;
  MobyVTable[0x303].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x304].idx = 0x304;
  MobyVTable[0x304].update = (void **)0x0;
  MobyVTable[0x304].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x305].idx = 0x305;
  MobyVTable[0x305].update = &PTR_UpdateMoby__633_773_988_989__0070dc58;
  MobyVTable[0x305].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x306].idx = 0x306;
  MobyVTable[0x306].update = &PTR_UpdateMoby_774_0070e910;
  MobyVTable[0x306].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x307].idx = 0x307;
  MobyVTable[0x307].update = &PTR_UpdateMoby_775_0070e930;
  MobyVTable[0x307].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x308].idx = 0x308;
  MobyVTable[0x308].update = &PTR_UpdateMoby_776_0070e970;
  MobyVTable[0x308].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x309].idx = 0x309;
  MobyVTable[0x309].update = &PTR_UpdateMoby_777_0070e988;
  MobyVTable[0x309].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x30a].idx = 0x30a;
  MobyVTable[0x30a].update = &PTR_UpdateMoby_778_0070e998;
  MobyVTable[0x30a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x30b].idx = 0x30b;
  MobyVTable[0x30b].update = &PTR_UpdateMoby_779_0070e9a8;
  MobyVTable[0x30b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x30c].idx = 0x30c;
  MobyVTable[0x30c].update = (void **)0x0;
  MobyVTable[0x30c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x30d].idx = 0x30d;
  MobyVTable[0x30d].update = (void **)0x0;
  MobyVTable[0x30d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x30e].idx = 0x30e;
  MobyVTable[0x30e].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x30e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x30f].idx = 0x30f;
  MobyVTable[0x30f].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x30f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x310].idx = 0x310;
  MobyVTable[0x310].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x310].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x311].idx = 0x311;
  MobyVTable[0x311].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x311].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x312].idx = 0x312;
  MobyVTable[0x312].update = &PTR_UpdateMoby_786_0070e9d8;
  MobyVTable[0x312].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x313].idx = 0x313;
  MobyVTable[0x313].update = &PTR_UpdateMoby_787_0070e9f0;
  MobyVTable[0x313].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x314].idx = 0x314;
  MobyVTable[0x314].update = &PTR_UpdateMoby_788_0070ea08;
  MobyVTable[0x314].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x315].idx = 0x315;
  MobyVTable[0x315].update = &PTR_UpdateMoby_789_0070ea18;
  MobyVTable[0x315].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x316].idx = 0x316;
  MobyVTable[0x316].update = &PTR_UpdateMoby__730_731_790__0070e4a0;
  MobyVTable[0x316].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x317].idx = 0x317;
  MobyVTable[0x317].update = (void **)0x0;
  MobyVTable[0x317].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x318].idx = 0x318;
  MobyVTable[0x318].update = &PTR_UpdateMoby_792_0070ea50;
  MobyVTable[0x318].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x319].idx = 0x319;
  MobyVTable[0x319].update = &PTR_UpdateMoby_793_0070ea60;
  MobyVTable[0x319].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x31a].idx = 0x31a;
  MobyVTable[0x31a].update = &PTR_UpdateMoby_794_0070ea78;
  MobyVTable[0x31a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x31b].idx = 0x31b;
  MobyVTable[0x31b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x31c].idx = 0x31c;
  MobyVTable[0x31c].update = (void **)0x0;
  MobyVTable[0x31c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x31d].idx = 0x31d;
  MobyVTable[0x31d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x31e].idx = 0x31e;
  MobyVTable[0x31e].update = (void **)0x0;
  MobyVTable[0x31e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[799].idx = 799;
  MobyVTable[799].update = (void **)0x0;
  MobyVTable[799].exit = &PTR_PTR_0071d1f0;
  MobyVTable[800].idx = 800;
  MobyVTable[800].update = &PTR_UpdateMoby_800_0070eb18;
  MobyVTable[800].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x321].idx = 0x321;
  MobyVTable[0x321].update = (void **)0x0;
  MobyVTable[0x321].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x322].idx = 0x322;
  MobyVTable[0x322].update = (void **)0x0;
  MobyVTable[0x322].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x323].idx = 0x323;
  MobyVTable[0x323].update = &PTR_UpdateMoby__191_758_803_1429__0070b420;
  MobyVTable[0x323].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x324].idx = 0x324;
  MobyVTable[0x324].update = &PTR_UpdateMoby_804_0070eb28;
  MobyVTable[0x324].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x325].idx = 0x325;
  MobyVTable[0x325].update = &PTR_UpdateMoby_805_CheckpointManager_0070eb30;
  MobyVTable[0x325].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x326].idx = 0x326;
  MobyVTable[0x326].update = &PTR_UpdateMoby_806_0070eb88;
  MobyVTable[0x326].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x327].idx = 0x327;
  MobyVTable[0x327].update = &PTR_UpdateMoby_807_0070ebb0;
  MobyVTable[0x327].exit = &PTR_PTR_0071d340;
  MobyVTable[0x328].idx = 0x328;
  MobyVTable[0x328].update = &PTR_UpdateMoby_808_0070ebf0;
  MobyVTable[0x328].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x329].idx = 0x329;
  MobyVTable[0x329].update = &PTR_UpdateMoby_809_0070ec00;
  MobyVTable[0x329].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x32a].idx = 0x32a;
  MobyVTable[0x32a].update = &PTR_UpdateMoby_810_0070ec30;
  MobyVTable[0x32a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x32b].idx = 0x32b;
  MobyVTable[0x32b].update = (void **)0x0;
  MobyVTable[0x32b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x32c].idx = 0x32c;
  MobyVTable[0x32c].update = &PTR_UpdateMoby_812_0070ec38;
  MobyVTable[0x32c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x32d].idx = 0x32d;
  MobyVTable[0x32d].update = (void **)0x0;
  MobyVTable[0x32d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x32e].idx = 0x32e;
  MobyVTable[0x32e].update = (void **)0x0;
  MobyVTable[0x32e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x32f].idx = 0x32f;
  MobyVTable[0x32f].update = &PTR_UpdateMoby_815_0070ec48;
  MobyVTable[0x32f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x330].idx = 0x330;
  MobyVTable[0x330].update = &PTR_UpdateMoby_816_0070ec80;
  MobyVTable[0x330].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x331].idx = 0x331;
  MobyVTable[0x331].update = &PTR_UpdateMoby_817_0070ec90;
  MobyVTable[0x331].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x332].idx = 0x332;
  MobyVTable[0x332].update = &PTR_UpdateMoby__818_847__0070ec98;
  MobyVTable[0x332].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x333].idx = 0x333;
  MobyVTable[0x333].update = &PTR_UpdateMoby_819_0070eca8;
  MobyVTable[0x333].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x334].idx = 0x334;
  MobyVTable[0x334].update = &PTR_UpdateMoby_820_0070ed60;
  MobyVTable[0x334].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x335].idx = 0x335;
  MobyVTable[0x335].update = &PTR_UpdateMoby__821_1210__0070ed70;
  MobyVTable[0x335].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x336].idx = 0x336;
  MobyVTable[0x336].update = &PTR_UpdateMoby_822_0070ed98;
  MobyVTable[0x336].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x337].idx = 0x337;
  MobyVTable[0x337].update = &PTR_UpdateMoby_823_0070eda8;
  MobyVTable[0x337].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x338].idx = 0x338;
  MobyVTable[0x338].update = (void **)0x0;
  MobyVTable[0x338].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x339].idx = 0x339;
  MobyVTable[0x339].update = &PTR_UpdateMoby_825_0070edb8;
  MobyVTable[0x339].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x33a].idx = 0x33a;
  MobyVTable[0x33a].update = &PTR_UpdateMoby_826_0070edc0;
  MobyVTable[0x33a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x33b].idx = 0x33b;
  MobyVTable[0x33b].update = &PTR_UpdateMoby_827_0070ee28;
  MobyVTable[0x33b].exit = &PTR_PTR_0071d358;
  MobyVTable[0x33c].idx = 0x33c;
  MobyVTable[0x33c].update = (void **)0x0;
  MobyVTable[0x33c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x33d].idx = 0x33d;
  MobyVTable[0x33d].update = &PTR_UpdateMoby_829_0070ee80;
  MobyVTable[0x33d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x33e].idx = 0x33e;
  MobyVTable[0x33e].update = &PTR_UpdateMoby_830_0070eea0;
  MobyVTable[0x33e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x33f].idx = 0x33f;
  MobyVTable[0x33f].update = &PTR_UpdateMoby_831_0070eec8;
  MobyVTable[0x33f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x340].idx = 0x340;
  MobyVTable[0x340].update = &PTR_UpdateMoby_832_0070eee8;
  MobyVTable[0x340].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x341].idx = 0x341;
  MobyVTable[0x341].update = &PTR_UpdateMoby_833_0070ef00;
  MobyVTable[0x341].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x342].idx = 0x342;
  MobyVTable[0x342].update = &PTR_UpdateMoby_834_0070ef10;
  MobyVTable[0x342].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x343].idx = 0x343;
  MobyVTable[0x343].update = &PTR_UpdateMoby_835_0070ef20;
  MobyVTable[0x343].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x344].idx = 0x344;
  MobyVTable[0x344].update = (void **)0x0;
  MobyVTable[0x344].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x345].idx = 0x345;
  MobyVTable[0x345].update = (void **)0x0;
  MobyVTable[0x345].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x346].idx = 0x346;
  MobyVTable[0x346].update = &PTR_UpdateMoby_838_0070ef30;
  MobyVTable[0x346].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x347].idx = 0x347;
  MobyVTable[0x347].update = (void **)0x0;
  MobyVTable[0x347].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x348].idx = 0x348;
  MobyVTable[0x348].update = (void **)0x0;
  MobyVTable[0x348].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x349].idx = 0x349;
  MobyVTable[0x349].update = &PTR_UpdateMoby_841_0070ef48;
  MobyVTable[0x349].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x34a].idx = 0x34a;
  MobyVTable[0x34a].update = (void **)0x0;
  MobyVTable[0x34a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x34b].idx = 0x34b;
  MobyVTable[0x34b].update = &PTR_UpdateMoby_843_0070ef58;
  MobyVTable[0x34b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x34c].idx = 0x34c;
  MobyVTable[0x34c].update = &PTR_UpdateMoby_844_0070ef70;
  MobyVTable[0x34c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x34d].idx = 0x34d;
  MobyVTable[0x34d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x34e].idx = 0x34e;
  MobyVTable[0x34e].update = &PTR_UpdateMoby_846_0070ef80;
  MobyVTable[0x34e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x34f].idx = 0x34f;
  MobyVTable[0x34f].update = &PTR_UpdateMoby__818_847__0070ec98;
  MobyVTable[0x34f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x350].idx = 0x350;
  MobyVTable[0x350].update = &PTR_UpdateMoby_848_0070ef88;
  MobyVTable[0x350].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x351].idx = 0x351;
  MobyVTable[0x351].update = &PTR_UpdateMoby_849_0070f038;
  MobyVTable[0x351].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x352].idx = 0x352;
  MobyVTable[0x352].update = (void **)0x0;
  MobyVTable[0x352].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x353].idx = 0x353;
  MobyVTable[0x353].update = &PTR_UpdateMoby_851_0070f0e0;
  MobyVTable[0x353].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x354].idx = 0x354;
  MobyVTable[0x354].update = &PTR_UpdateMoby_852_0070f0f0;
  MobyVTable[0x354].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x355].idx = 0x355;
  MobyVTable[0x355].update = (void **)0x0;
  MobyVTable[0x355].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x356].idx = 0x356;
  MobyVTable[0x356].update = &PTR_UpdateMoby_854_AridiaOcean_0070f100;
  MobyVTable[0x356].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x357].idx = 0x357;
  MobyVTable[0x357].update = &PTR_UpdateMoby_855_0070f110;
  MobyVTable[0x357].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x358].idx = 0x358;
  MobyVTable[0x358].update = &PTR_UpdateMoby_856_0070f120;
  MobyVTable[0x358].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x359].idx = 0x359;
  MobyVTable[0x359].update = &PTR_UpdateMoby_857_0070f1f0;
  MobyVTable[0x359].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x35a].idx = 0x35a;
  MobyVTable[0x35a].update = (void **)0x0;
  MobyVTable[0x35a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x35b].idx = 0x35b;
  MobyVTable[0x35b].update = &PTR_UpdateMoby_859_0070f228;
  MobyVTable[0x35b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x35c].idx = 0x35c;
  MobyVTable[0x35c].update = &PTR_UpdateMoby_860_0070f250;
  MobyVTable[0x35c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x35d].idx = 0x35d;
  MobyVTable[0x35d].update = &PTR_UpdateMoby_861_0070f268;
  MobyVTable[0x35d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x35e].idx = 0x35e;
  MobyVTable[0x35e].update = &PTR_UpdateMoby_862_0070f280;
  MobyVTable[0x35e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x35f].idx = 0x35f;
  MobyVTable[0x35f].update = (void **)0x0;
  MobyVTable[0x35f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x360].idx = 0x360;
  MobyVTable[0x360].update = (void **)0x0;
  MobyVTable[0x360].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x361].idx = 0x361;
  MobyVTable[0x361].update = &PTR_UpdateMoby__572_865_866__0070d3b0;
  MobyVTable[0x361].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x362].idx = 0x362;
  MobyVTable[0x362].update = &PTR_UpdateMoby__572_865_866__0070d3b0;
  MobyVTable[0x362].exit = &PTR_PTR_0071d370;
  MobyVTable[0x363].idx = 0x363;
  MobyVTable[0x363].update = &PTR_UpdateMoby_867_0070f290;
  MobyVTable[0x363].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x364].idx = 0x364;
  MobyVTable[0x364].update = &PTR_UpdateMoby__868_905_928__0070f480;
  MobyVTable[0x364].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x365].idx = 0x365;
  MobyVTable[0x365].update = &PTR_UpdateMoby_869_0070f2a0;
  MobyVTable[0x365].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x366].idx = 0x366;
  MobyVTable[0x366].update = &PTR_UpdateMoby_870_0070f2d8;
  MobyVTable[0x366].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x367].idx = 0x367;
  MobyVTable[0x367].update = &PTR_UpdateMoby_871_0070f2f0;
  MobyVTable[0x367].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x368].idx = 0x368;
  MobyVTable[0x368].update = (void **)0x0;
  MobyVTable[0x368].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x369].idx = 0x369;
  MobyVTable[0x369].update = (void **)0x0;
  MobyVTable[0x369].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x36a].idx = 0x36a;
  MobyVTable[0x36a].update = &PTR_UpdateMoby__874_1104__0070f2f8;
  MobyVTable[0x36a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x36b].idx = 0x36b;
  MobyVTable[0x36b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x36b].update = &PTR_UpdateMoby__875_1080__0070f308;
  MobyVTable[0x36c].update = &PTR_UpdateMoby_876_0070f318;
  MobyVTable[0x36c].idx = 0x36c;
  MobyVTable[0x36c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x36d].idx = 0x36d;
  MobyVTable[0x36d].update = &PTR_UpdateMoby_877_0070f330;
  MobyVTable[0x36d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x36e].idx = 0x36e;
  MobyVTable[0x36e].update = (void **)0x0;
  MobyVTable[0x36e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x36f].idx = 0x36f;
  MobyVTable[0x36f].update = &PTR_UpdateMoby_879_RilgarOcean_0070f348;
  MobyVTable[0x36f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x370].idx = 0x370;
  MobyVTable[0x370].update = &PTR_UpdateMoby_880_0070f360;
  MobyVTable[0x370].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x371].idx = 0x371;
  MobyVTable[0x371].update = &PTR_UpdateMoby_881_0070f370;
  MobyVTable[0x371].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x372].idx = 0x372;
  MobyVTable[0x372].update = &PTR_UpdateMoby_882_0070f388;
  MobyVTable[0x372].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x373].idx = 0x373;
  MobyVTable[0x373].update = (void **)0x0;
  MobyVTable[0x373].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x374].idx = 0x374;
  MobyVTable[0x374].update = (void **)0x0;
  MobyVTable[0x374].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x375].idx = 0x375;
  MobyVTable[0x375].update = &PTR_UpdateMoby_a_lot_22_0070f3a0;
  MobyVTable[0x375].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x376].idx = 0x376;
  MobyVTable[0x376].update = &PTR_UpdateMoby_886_0070f3b0;
  MobyVTable[0x376].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x377].idx = 0x377;
  MobyVTable[0x377].update = &PTR_UpdateMoby_887_0070f3c0;
  MobyVTable[0x377].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x378].idx = 0x378;
  MobyVTable[0x378].update = &PTR_UpdateMoby_a_lot_22_0070f3a0;
  MobyVTable[0x378].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x379].idx = 0x379;
  MobyVTable[0x379].update = (void **)0x0;
  MobyVTable[0x379].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x37a].idx = 0x37a;
  MobyVTable[0x37a].update = &PTR_UpdateMoby_890_0070f3e8;
  MobyVTable[0x37a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x37b].idx = 0x37b;
  MobyVTable[0x37b].update = &PTR_UpdateMoby_a_lot_22_0070f3a0;
  MobyVTable[0x37b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x37c].idx = 0x37c;
  MobyVTable[0x37c].update = &PTR_UpdateMoby_a_lot_22_0070f3a0;
  MobyVTable[0x37c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x37d].idx = 0x37d;
  MobyVTable[0x37d].update = &PTR_UpdateMoby_893_0070f3f8;
  MobyVTable[0x37d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x37e].idx = 0x37e;
  MobyVTable[0x37e].update = &PTR_UpdateMoby_a_lot_22_0070f3a0;
  MobyVTable[0x37e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x37f].idx = 0x37f;
  MobyVTable[0x37f].update = &PTR_UpdateMoby_895_0070f408;
  MobyVTable[0x37f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x380].idx = 0x380;
  MobyVTable[0x380].update = (void **)0x0;
  MobyVTable[0x380].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x381].idx = 0x381;
  MobyVTable[0x381].update = (void **)0x0;
  MobyVTable[0x381].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x382].idx = 0x382;
  MobyVTable[0x382].update = &PTR_UpdateMoby_898_0070f410;
  MobyVTable[0x382].exit = &PTR_PTR_0071d1f0;
  MobyVTable[899].idx = 899;
  MobyVTable[899].update = &PTR_UpdateMoby_899_0070f420;
  MobyVTable[899].exit = &PTR_PTR_0071d1f0;
  MobyVTable[900].idx = 900;
  MobyVTable[900].update = &PTR_UpdateMoby_a_lot_22_0070f3a0;
  MobyVTable[900].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x385].idx = 0x385;
  MobyVTable[0x385].update = &PTR_UpdateMoby_a_lot_22_0070f3a0;
  MobyVTable[0x385].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x386].idx = 0x386;
  MobyVTable[0x386].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x386].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x387].idx = 0x387;
  MobyVTable[0x387].update = &PTR_UpdateMoby_903_0070f468;
  MobyVTable[0x387].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x388].idx = 0x388;
  MobyVTable[0x388].update = (void **)0x0;
  MobyVTable[0x388].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x389].idx = 0x389;
  MobyVTable[0x389].update = &PTR_UpdateMoby__868_905_928__0070f480;
  MobyVTable[0x389].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x38a].idx = 0x38a;
  MobyVTable[0x38a].update = (void **)0x0;
  MobyVTable[0x38a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x38b].idx = 0x38b;
  MobyVTable[0x38b].update = (void **)0x0;
  MobyVTable[0x38b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x38c].idx = 0x38c;
  MobyVTable[0x38c].update = &PTR_UpdateMoby_908_0070f4a8;
  MobyVTable[0x38c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x38d].idx = 0x38d;
  MobyVTable[0x38d].update = &PTR_UpdateMoby_909_0070f4c0;
  MobyVTable[0x38d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x38e].idx = 0x38e;
  MobyVTable[0x38e].update = &PTR_UpdateMoby_910_0070f4f0;
  MobyVTable[0x38e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x38f].idx = 0x38f;
  MobyVTable[0x38f].update = &PTR_UpdateMoby_911_0070f518;
  MobyVTable[0x38f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x390].idx = 0x390;
  MobyVTable[0x390].update = &PTR_UpdateMoby_912_0070f560;
  MobyVTable[0x390].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x391].idx = 0x391;
  MobyVTable[0x391].update = &PTR_UpdateMoby_913_0070f570;
  MobyVTable[0x391].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x392].idx = 0x392;
  MobyVTable[0x392].update = &PTR_UpdateMoby_914_0070f588;
  MobyVTable[0x392].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x393].idx = 0x393;
  MobyVTable[0x393].update = &PTR_UpdateMoby__915_916_917__0070f5a0;
  MobyVTable[0x393].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x394].idx = 0x394;
  MobyVTable[0x394].update = &PTR_UpdateMoby__915_916_917__0070f5a0;
  MobyVTable[0x394].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x395].idx = 0x395;
  MobyVTable[0x395].update = &PTR_UpdateMoby__915_916_917__0070f5a0;
  MobyVTable[0x395].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x396].idx = 0x396;
  MobyVTable[0x396].update = &PTR_UpdateMoby_918_0070f5c0;
  MobyVTable[0x396].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x397].idx = 0x397;
  MobyVTable[0x397].update = &PTR_UpdateMoby_919_0070f5d8;
  MobyVTable[0x397].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x398].idx = 0x398;
  MobyVTable[0x398].update = &PTR_UpdateMoby__447_920__0070f600;
  MobyVTable[0x398].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x399].idx = 0x399;
  MobyVTable[0x399].update = &PTR_UpdateMoby_921_0070f628;
  MobyVTable[0x399].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x39a].idx = 0x39a;
  MobyVTable[0x39a].update = &PTR_UpdateMoby_922_0070f640;
  MobyVTable[0x39a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x39b].idx = 0x39b;
  MobyVTable[0x39b].update = &PTR_UpdateMoby_923_0070f678;
  MobyVTable[0x39b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x39c].idx = 0x39c;
  MobyVTable[0x39c].update = &PTR_UpdateMoby_924_0070f690;
  MobyVTable[0x39c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x39d].idx = 0x39d;
  MobyVTable[0x39d].update = &PTR_UpdateMoby_925_0070f6a8;
  MobyVTable[0x39d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x39e].idx = 0x39e;
  MobyVTable[0x39e].update = &PTR_UpdateMoby_926_0070f6b8;
  MobyVTable[0x39e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x39f].idx = 0x39f;
  MobyVTable[0x39f].update = &PTR_UpdateMoby_927_0070f6d0;
  MobyVTable[0x39f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a0].idx = 0x3a0;
  MobyVTable[0x3a0].update = &PTR_UpdateMoby__868_905_928__0070f480;
  MobyVTable[0x3a0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a1].idx = 0x3a1;
  MobyVTable[0x3a1].update = (void **)0x0;
  MobyVTable[0x3a1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a2].idx = 0x3a2;
  MobyVTable[0x3a2].update = &PTR_UpdateMoby_930_0070f700;
  MobyVTable[0x3a2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a3].idx = 0x3a3;
  MobyVTable[0x3a3].update = &PTR_UpdateMoby_931_0070f748;
  MobyVTable[0x3a3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a4].idx = 0x3a4;
  MobyVTable[0x3a4].update = &PTR_UpdateMoby_932_0070f760;
  MobyVTable[0x3a4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a5].idx = 0x3a5;
  MobyVTable[0x3a5].update = &PTR_UpdateMoby_933_0070f770;
  MobyVTable[0x3a5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a6].idx = 0x3a6;
  MobyVTable[0x3a6].update = &PTR_UpdateMoby_934_0070f790;
  MobyVTable[0x3a6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a7].idx = 0x3a7;
  MobyVTable[0x3a7].update = &PTR_UpdateMoby_935_0070f7c0;
  MobyVTable[0x3a7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a8].idx = 0x3a8;
  MobyVTable[0x3a8].update = &PTR_UpdateMoby_a_lot_22_0070f3a0;
  MobyVTable[0x3a8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3a9].idx = 0x3a9;
  MobyVTable[0x3a9].update = &PTR_UpdateMoby_937_0070f7d0;
  MobyVTable[0x3a9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3aa].idx = 0x3aa;
  MobyVTable[0x3aa].update = &PTR_UpdateMoby_938_0070f7f0;
  MobyVTable[0x3aa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ab].idx = 0x3ab;
  MobyVTable[0x3ab].update = &PTR_UpdateMoby_939_0070f800;
  MobyVTable[0x3ab].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ac].idx = 0x3ac;
  MobyVTable[0x3ac].update = &PTR_UpdateMoby_940_0070f840;
  MobyVTable[0x3ac].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ad].idx = 0x3ad;
  MobyVTable[0x3ad].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3ad].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ae].idx = 0x3ae;
  MobyVTable[0x3ae].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3ae].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3af].idx = 0x3af;
  MobyVTable[0x3af].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3af].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b0].idx = 0x3b0;
  MobyVTable[0x3b0].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3b0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b1].idx = 0x3b1;
  MobyVTable[0x3b1].update = &PTR_UpdateMoby_945_0070f868;
  MobyVTable[0x3b1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b2].idx = 0x3b2;
  MobyVTable[0x3b2].update = &PTR_UpdateMoby_946_0070f870;
  MobyVTable[0x3b2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b3].idx = 0x3b3;
  MobyVTable[0x3b3].update = &PTR_UpdateMoby_947_0070f878;
  MobyVTable[0x3b3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b4].idx = 0x3b4;
  MobyVTable[0x3b4].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3b4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b5].idx = 0x3b5;
  MobyVTable[0x3b5].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3b5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b6].idx = 0x3b6;
  MobyVTable[0x3b6].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3b6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b7].idx = 0x3b7;
  MobyVTable[0x3b7].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3b7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b8].idx = 0x3b8;
  MobyVTable[0x3b8].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3b8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3b9].idx = 0x3b9;
  MobyVTable[0x3b9].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3b9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ba].idx = 0x3ba;
  MobyVTable[0x3ba].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3ba].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3bb].idx = 0x3bb;
  MobyVTable[0x3bb].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3bb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3bc].idx = 0x3bc;
  MobyVTable[0x3bc].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3bc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3bd].idx = 0x3bd;
  MobyVTable[0x3bd].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3bd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3be].idx = 0x3be;
  MobyVTable[0x3be].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3be].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3bf].idx = 0x3bf;
  MobyVTable[0x3bf].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3bf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c0].idx = 0x3c0;
  MobyVTable[0x3c0].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c1].idx = 0x3c1;
  MobyVTable[0x3c1].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c2].idx = 0x3c2;
  MobyVTable[0x3c2].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c3].idx = 0x3c3;
  MobyVTable[0x3c3].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c4].idx = 0x3c4;
  MobyVTable[0x3c4].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c5].idx = 0x3c5;
  MobyVTable[0x3c5].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c6].idx = 0x3c6;
  MobyVTable[0x3c6].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c7].idx = 0x3c7;
  MobyVTable[0x3c7].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c8].idx = 0x3c8;
  MobyVTable[0x3c8].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3c9].idx = 0x3c9;
  MobyVTable[0x3c9].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3c9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ca].idx = 0x3ca;
  MobyVTable[0x3ca].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3ca].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3cb].idx = 0x3cb;
  MobyVTable[0x3cb].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3cb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3cc].idx = 0x3cc;
  MobyVTable[0x3cc].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3cc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3cd].idx = 0x3cd;
  MobyVTable[0x3cd].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3cd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ce].idx = 0x3ce;
  MobyVTable[0x3ce].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3ce].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3cf].idx = 0x3cf;
  MobyVTable[0x3cf].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3cf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d0].idx = 0x3d0;
  MobyVTable[0x3d0].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3d0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d1].idx = 0x3d1;
  MobyVTable[0x3d1].update = &PTR_UpdateMoby_a_lot_2_0070f448;
  MobyVTable[0x3d1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d2].idx = 0x3d2;
  MobyVTable[0x3d2].update = &PTR_UpdateMoby_978_0070f880;
  MobyVTable[0x3d2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d3].idx = 0x3d3;
  MobyVTable[0x3d3].update = &PTR_UpdateMoby_979_0070f888;
  MobyVTable[0x3d3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d4].idx = 0x3d4;
  MobyVTable[0x3d4].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x3d4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d5].idx = 0x3d5;
  MobyVTable[0x3d5].update = &PTR_UpdateMoby_a_lot_13_0070c4d8;
  MobyVTable[0x3d5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d6].idx = 0x3d6;
  MobyVTable[0x3d6].update = &PTR_UpdateMoby_982_0070f8a8;
  MobyVTable[0x3d6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d7].idx = 0x3d7;
  MobyVTable[0x3d7].update = &PTR_UpdateMoby_983_0070f8d8;
  MobyVTable[0x3d7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d8].idx = 0x3d8;
  MobyVTable[0x3d8].update = &PTR_UpdateMoby_984_0070f918;
  MobyVTable[0x3d8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3d9].idx = 0x3d9;
  MobyVTable[0x3d9].update = (void **)0x0;
  MobyVTable[0x3d9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3da].idx = 0x3da;
  MobyVTable[0x3da].update = &PTR_M984_004ccd48_0070f928;
  MobyVTable[0x3dc].update = &PTR_UpdateMoby__633_773_988_989__0070dc58;
  MobyVTable[0x3da].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3db].idx = 0x3db;
  MobyVTable[0x3db].update = (void **)0x0;
  MobyVTable[0x3db].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3dd].update = &PTR_UpdateMoby__633_773_988_989__0070dc58;
  MobyVTable[0x3dc].idx = 0x3dc;
  MobyVTable[0x3dc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3dd].idx = 0x3dd;
  MobyVTable[0x3dd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3de].idx = 0x3de;
  MobyVTable[0x3de].update = &PTR_UpdateMoby__93_990__0070f6e0;
  MobyVTable[0x3de].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3df].idx = 0x3df;
  MobyVTable[0x3df].update = (void **)0x0;
  MobyVTable[0x3df].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3e0].idx = 0x3e0;
  MobyVTable[0x3e0].update = (void **)0x0;
  MobyVTable[0x3e0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3e1].idx = 0x3e1;
  MobyVTable[0x3e1].update = (void **)0x0;
  MobyVTable[0x3e1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3e2].idx = 0x3e2;
  MobyVTable[0x3e2].update = &PTR_UpdateMoby_994_0070f968;
  MobyVTable[0x3e2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3e3].idx = 0x3e3;
  MobyVTable[0x3e3].update = (void **)0x0;
  MobyVTable[0x3e3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3e4].idx = 0x3e4;
  MobyVTable[0x3e4].update = (void **)0x0;
  MobyVTable[0x3e4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3e5].idx = 0x3e5;
  MobyVTable[0x3e5].update = &PTR_UpdateMoby_997_0070f978;
  MobyVTable[0x3e5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3e6].idx = 0x3e6;
  MobyVTable[0x3e6].update = &PTR_UpdateMoby_998_0070f9c8;
  MobyVTable[0x3e6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[999].idx = 999;
  MobyVTable[999].update = (void **)0x0;
  MobyVTable[999].exit = &PTR_PTR_0071d1f0;
  MobyVTable[1000].idx = 1000;
  MobyVTable[1000].update = &PTR_UpdateMoby_1000_007082c0;
  MobyVTable[1000].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3e9].idx = 0x3e9;
  MobyVTable[0x3e9].update = &PTR_UpdateMoby_1001_007082d0;
  MobyVTable[0x3e9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ea].idx = 0x3ea;
  MobyVTable[0x3ea].update = (void **)0x0;
  MobyVTable[0x3ea].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3eb].idx = 0x3eb;
  MobyVTable[0x3eb].update = &PTR_UpdateMoby_1003_007082e0;
  MobyVTable[0x3eb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ec].idx = 0x3ec;
  MobyVTable[0x3ec].update = &PTR_UpdateMoby_1004_00708300;
  MobyVTable[0x3ec].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ed].idx = 0x3ed;
  MobyVTable[0x3ed].update = &PTR_UpdateMoby__1005_1016__00708320;
  MobyVTable[0x3ed].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ee].idx = 0x3ee;
  MobyVTable[0x3ee].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0x3ee].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ef].idx = 0x3ef;
  MobyVTable[0x3ef].update = &PTR_UpdateMoby_1007_00708338;
  MobyVTable[0x3ef].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f0].idx = 0x3f0;
  MobyVTable[0x3f0].update = (void **)0x0;
  MobyVTable[0x3f0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f1].idx = 0x3f1;
  MobyVTable[0x3f1].update = &PTR_UpdateMoby_1009_00708358;
  MobyVTable[0x3f1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f2].idx = 0x3f2;
  MobyVTable[0x3f2].update = (void **)0x0;
  MobyVTable[0x3f2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f3].idx = 0x3f3;
  MobyVTable[0x3f3].update = (void **)0x0;
  MobyVTable[0x3f3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f4].idx = 0x3f4;
  MobyVTable[0x3f4].update = &PTR_UpdateMoby_1012_007083a0;
  MobyVTable[0x3f4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f5].idx = 0x3f5;
  MobyVTable[0x3f5].update = &PTR_UpdateMoby__1013_1014_1064_1065__007083b0;
  MobyVTable[0x3f5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f6].idx = 0x3f6;
  MobyVTable[0x3f6].update = &PTR_UpdateMoby__1013_1014_1064_1065__007083b0;
  MobyVTable[0x3f6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f7].idx = 0x3f7;
  MobyVTable[0x3f7].update = &PTR_UpdateMoby__1015_1282__007083c8;
  MobyVTable[0x3f7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f8].idx = 0x3f8;
  MobyVTable[0x3f8].update = &PTR_UpdateMoby__1005_1016__00708320;
  MobyVTable[0x3f8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3f9].idx = 0x3f9;
  MobyVTable[0x3f9].update = &PTR_UpdateMoby_1017_007083e0;
  MobyVTable[0x3f9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3fa].idx = 0x3fa;
  MobyVTable[0x3fa].update = &PTR_UpdateMoby_1018_007083f0;
  MobyVTable[0x3fa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3fb].idx = 0x3fb;
  MobyVTable[0x3fb].update = (void **)0x0;
  MobyVTable[0x3fb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3fc].idx = 0x3fc;
  MobyVTable[0x3fc].update = (void **)0x0;
  MobyVTable[0x3fc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3fd].idx = 0x3fd;
  MobyVTable[0x3fd].update = &PTR_UpdateMoby_1021_00708400;
  MobyVTable[0x3fd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3fe].idx = 0x3fe;
  MobyVTable[0x3fe].update = &PTR_UpdateMoby_1022_00708448;
  MobyVTable[0x3fe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x3ff].idx = 0x3ff;
  MobyVTable[0x3ff].update = &PTR_UpdateMoby_1023_00708468;
  MobyVTable[0x3ff].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x400].idx = 0x400;
  MobyVTable[0x400].update = &PTR_UpdateMoby__1024_1302__00708488;
  MobyVTable[0x400].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x401].idx = 0x401;
  MobyVTable[0x401].update = (void **)0x0;
  MobyVTable[0x401].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x402].idx = 0x402;
  MobyVTable[0x402].update = (void **)0x0;
  MobyVTable[0x402].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x403].idx = 0x403;
  MobyVTable[0x403].update = &PTR_UpdateMoby_1027_007084a0;
  MobyVTable[0x403].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x404].idx = 0x404;
  MobyVTable[0x404].update = &PTR_UpdateMoby_1028_BlargPlatform_007084b8;
  MobyVTable[0x404].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x405].idx = 0x405;
  MobyVTable[0x405].update = (void **)0x0;
  MobyVTable[0x405].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x406].idx = 0x406;
  MobyVTable[0x406].update = (void **)0x0;
  MobyVTable[0x406].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x407].idx = 0x407;
  MobyVTable[0x407].update = &PTR_UpdateMoby_1031_007084c8;
  MobyVTable[0x407].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x408].idx = 0x408;
  MobyVTable[0x408].update = &PTR_UpdateMoby_1032_007084f0;
  MobyVTable[0x408].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x409].idx = 0x409;
  MobyVTable[0x409].update = &PTR_UpdateMoby_1033_00708500;
  MobyVTable[0x409].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x40a].idx = 0x40a;
  MobyVTable[0x40a].update = &PTR_UpdateMoby_1034_00708510;
  MobyVTable[0x40a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x40b].idx = 0x40b;
  MobyVTable[0x40b].update = &PTR_UpdateMoby_1035_00708520;
  MobyVTable[0x40b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x40c].idx = 0x40c;
  MobyVTable[0x40c].update = (void **)0x0;
  MobyVTable[0x40c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x40d].idx = 0x40d;
  MobyVTable[0x40d].update = (void **)0x0;
  MobyVTable[0x40d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x40e].idx = 0x40e;
  MobyVTable[0x40e].update = &PTR_UpdateMoby_1038_00708548;
  MobyVTable[0x40e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x40f].idx = 0x40f;
  MobyVTable[0x40f].update = &PTR_UpdateMoby_1039_00708558;
  MobyVTable[0x40f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x410].idx = 0x410;
  MobyVTable[0x410].update = &PTR_UpdateMoby_1040_00708580;
  MobyVTable[0x410].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x411].idx = 0x411;
  MobyVTable[0x411].update = &PTR_UpdateMoby_1041_00708588;
  MobyVTable[0x411].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x412].idx = 0x412;
  MobyVTable[0x412].update = &PTR_UpdateMoby_1042_00708590;
  MobyVTable[0x412].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x413].idx = 0x413;
  MobyVTable[0x413].update = (void **)0x0;
  MobyVTable[0x413].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x414].idx = 0x414;
  MobyVTable[0x414].update = &PTR_UpdateMoby_1044_007085a0;
  MobyVTable[0x414].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x415].idx = 0x415;
  MobyVTable[0x415].update = &PTR_UpdateMoby_1045_00708698;
  MobyVTable[0x415].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x416].idx = 0x416;
  MobyVTable[0x416].update = &PTR_UpdateMoby_1046_007086c8;
  MobyVTable[0x416].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x417].idx = 0x417;
  MobyVTable[0x417].update = &PTR_UpdateMoby_1047_007086d8;
  MobyVTable[0x417].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x418].idx = 0x418;
  MobyVTable[0x418].update = &PTR_UpdateMoby_1048_00708718;
  MobyVTable[0x418].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x419].idx = 0x419;
  MobyVTable[0x419].update = &PTR_UpdateMoby_1049_00708740;
  MobyVTable[0x419].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x41a].idx = 0x41a;
  MobyVTable[0x41a].update = (void **)0x0;
  MobyVTable[0x41a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x41b].idx = 0x41b;
  MobyVTable[0x41b].update = &PTR_UpdateMoby_1051_007087e8;
  MobyVTable[0x41b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x41c].idx = 0x41c;
  MobyVTable[0x41c].update = &PTR_UpdateMoby__432_1052__0070ca20;
  MobyVTable[0x41c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x41d].idx = 0x41d;
  MobyVTable[0x41d].update = (void **)0x0;
  MobyVTable[0x41d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x41e].idx = 0x41e;
  MobyVTable[0x41e].update = &PTR_UpdateMoby_1054_007087f8;
  MobyVTable[0x41e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x41f].idx = 0x41f;
  MobyVTable[0x41f].update = (void **)0x0;
  MobyVTable[0x41f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x420].idx = 0x420;
  MobyVTable[0x420].update = (void **)0x0;
  MobyVTable[0x420].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x421].idx = 0x421;
  MobyVTable[0x421].update = (void **)0x0;
  MobyVTable[0x421].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x422].idx = 0x422;
  MobyVTable[0x422].update = (void **)0x0;
  MobyVTable[0x422].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x423].idx = 0x423;
  MobyVTable[0x423].update = &PTR_UpdateMoby_1059_00708880;
  MobyVTable[0x423].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x424].idx = 0x424;
  MobyVTable[0x424].update = &PTR_UpdateMoby_1060_007088a0;
  MobyVTable[0x424].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x425].idx = 0x425;
  MobyVTable[0x425].update = &PTR_UpdateMoby_1061_007088a8;
  MobyVTable[0x425].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x426].idx = 0x426;
  MobyVTable[0x426].update = &PTR_UpdateMoby_1062_007088b8;
  MobyVTable[0x426].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x427].idx = 0x427;
  MobyVTable[0x427].update = &PTR_UpdateMoby_a_lot_4_00708a20;
  MobyVTable[0x427].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x428].idx = 0x428;
  MobyVTable[0x428].update = &PTR_UpdateMoby__1013_1014_1064_1065__007083b0;
  MobyVTable[0x428].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x429].idx = 0x429;
  MobyVTable[0x429].update = &PTR_UpdateMoby__1013_1014_1064_1065__007083b0;
  MobyVTable[0x429].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x42a].idx = 0x42a;
  MobyVTable[0x42a].update = &PTR_UpdateMoby_1066_007088e0;
  MobyVTable[0x42a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x42b].idx = 0x42b;
  MobyVTable[0x42b].update = &PTR_UpdateMoby_1067_007088f0;
  MobyVTable[0x42b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x42c].idx = 0x42c;
  MobyVTable[0x42c].update = &PTR_UpdateMoby_1068_00708930;
  MobyVTable[0x42c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x42d].idx = 0x42d;
  MobyVTable[0x42d].update = &PTR_UpdateMoby_1069_00708958;
  MobyVTable[0x42d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x42e].idx = 0x42e;
  MobyVTable[0x42e].update = &PTR_UpdateMoby_1070_00708990;
  MobyVTable[0x42e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x42f].idx = 0x42f;
  MobyVTable[0x42f].update = (void **)0x0;
  MobyVTable[0x42f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x430].idx = 0x430;
  MobyVTable[0x430].update = &PTR_UpdateMoby_1072_007089b0;
  MobyVTable[0x430].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x431].idx = 0x431;
  MobyVTable[0x431].update = &PTR_UpdateMoby_1073_007089c8;
  MobyVTable[0x431].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x432].idx = 0x432;
  MobyVTable[0x432].update = (void **)0x0;
  MobyVTable[0x432].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x433].idx = 0x433;
  MobyVTable[0x433].update = &PTR_UpdateMoby_1075_007089e8;
  MobyVTable[0x433].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x434].idx = 0x434;
  MobyVTable[0x434].update = (void **)0x0;
  MobyVTable[0x434].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x435].idx = 0x435;
  MobyVTable[0x435].update = &PTR_UpdateMoby_1077_00708a10;
  MobyVTable[0x435].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x436].idx = 0x436;
  MobyVTable[0x436].update = &PTR_UpdateMoby_a_lot_4_00708a20;
  MobyVTable[0x436].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x437].idx = 0x437;
  MobyVTable[0x437].update = &PTR_UpdateMoby_a_lot_4_00708a20;
  MobyVTable[0x437].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x438].idx = 0x438;
  MobyVTable[0x438].update = &PTR_UpdateMoby__875_1080__0070f308;
  MobyVTable[0x438].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x439].idx = 0x439;
  MobyVTable[0x439].update = &PTR_UpdateMoby_1081_00708a58;
  MobyVTable[0x439].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x43a].idx = 0x43a;
  MobyVTable[0x43a].update = &PTR_UpdateMoby__726_1082_1141__0070e478;
  MobyVTable[0x43a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x43b].idx = 0x43b;
  MobyVTable[0x43b].update = &PTR_UpdateMoby_1083_00708a80;
  MobyVTable[0x43b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x43c].idx = 0x43c;
  MobyVTable[0x43c].update = (void **)0x0;
  MobyVTable[0x43c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x43d].idx = 0x43d;
  MobyVTable[0x43d].update = &PTR_UpdateMoby_a_lot_16_00708ab0;
  MobyVTable[0x43d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x43e].idx = 0x43e;
  MobyVTable[0x43e].update = &PTR_UpdateMoby_a_lot_16_00708ab0;
  MobyVTable[0x43e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x43f].idx = 0x43f;
  MobyVTable[0x43f].update = &PTR_UpdateMoby_a_lot_16_00708ab0;
  MobyVTable[0x43f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x440].idx = 0x440;
  MobyVTable[0x440].update = &PTR_UpdateMoby_a_lot_16_00708ab0;
  MobyVTable[0x440].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x441].idx = 0x441;
  MobyVTable[0x441].update = &PTR_UpdateMoby_a_lot_16_00708ab0;
  MobyVTable[0x441].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x442].idx = 0x442;
  MobyVTable[0x442].update = &PTR_UpdateMoby_1090_00708af0;
  MobyVTable[0x442].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x443].idx = 0x443;
  MobyVTable[0x443].update = &PTR_UpdateMoby_a_lot_18_00708af8;
  MobyVTable[0x443].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x444].idx = 0x444;
  MobyVTable[0x444].update = &PTR_UpdateMoby_a_lot_18_00708af8;
  MobyVTable[0x444].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x445].idx = 0x445;
  MobyVTable[0x445].update = &PTR_UpdateMoby_a_lot_18_00708af8;
  MobyVTable[0x445].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x446].idx = 0x446;
  MobyVTable[0x446].update = &PTR_UpdateMoby_a_lot_18_00708af8;
  MobyVTable[0x446].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x447].idx = 0x447;
  MobyVTable[0x447].update = &PTR_UpdateMoby_a_lot_18_00708af8;
  MobyVTable[0x447].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x448].idx = 0x448;
  MobyVTable[0x448].update = &PTR_UpdateMoby_a_lot_18_00708af8;
  MobyVTable[0x448].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x449].idx = 0x449;
  MobyVTable[0x449].update = &PTR_UpdateMoby_a_lot_18_00708af8;
  MobyVTable[0x449].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x44a].idx = 0x44a;
  MobyVTable[0x44a].update = &PTR_UpdateMoby_a_lot_18_00708af8;
  MobyVTable[0x44a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[1099].idx = 1099;
  MobyVTable[1099].update = &PTR_UpdateMoby_1099_00708b10;
  MobyVTable[1099].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x44c].idx = 0x44c;
  MobyVTable[0x44c].update = &PTR_UpdateMoby_1100_00708b30;
  MobyVTable[0x44c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x44d].idx = 0x44d;
  MobyVTable[0x44d].update = &PTR_UpdateMoby__1101_1102_1531_1532__00708b48;
  MobyVTable[0x44d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x44e].idx = 0x44e;
  MobyVTable[0x44e].update = &PTR_UpdateMoby__1101_1102_1531_1532__00708b48;
  MobyVTable[0x44e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x44f].idx = 0x44f;
  MobyVTable[0x44f].update = &PTR_UpdateMoby_a_lot_18_00708af8;
  MobyVTable[0x44f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x450].idx = 0x450;
  MobyVTable[0x450].update = &PTR_UpdateMoby__874_1104__0070f2f8;
  MobyVTable[0x450].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x451].idx = 0x451;
  MobyVTable[0x451].update = &PTR_UpdateMoby_1105_00708b60;
  MobyVTable[0x451].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x452].idx = 0x452;
  MobyVTable[0x452].update = &PTR_UpdateMoby_1106_00708ca8;
  MobyVTable[0x452].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x453].idx = 0x453;
  MobyVTable[0x453].update = &PTR_UpdateMoby_1107_00708cc0;
  MobyVTable[0x453].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x454].idx = 0x454;
  MobyVTable[0x454].update = &PTR_UpdateMoby_1108_00708cd0;
  MobyVTable[0x454].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x455].idx = 0x455;
  MobyVTable[0x455].update = &PTR_UpdateMoby_1109_00708d10;
  MobyVTable[0x455].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x456].idx = 0x456;
  MobyVTable[0x456].update = &PTR_UpdateMoby_1110_00708d70;
  MobyVTable[0x456].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x457].idx = 0x457;
  MobyVTable[0x457].update = &PTR_UpdateMoby_1111_00708d90;
  MobyVTable[0x457].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x458].idx = 0x458;
  MobyVTable[0x458].update = &PTR_UpdateMoby_1112_00708da8;
  MobyVTable[0x458].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x459].idx = 0x459;
  MobyVTable[0x459].update = &PTR_UpdateMoby__1113_1114_1115_1116__00708db0;
  MobyVTable[0x459].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x45a].idx = 0x45a;
  MobyVTable[0x45a].update = &PTR_UpdateMoby__1113_1114_1115_1116__00708db0;
  MobyVTable[0x45a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x45b].idx = 0x45b;
  MobyVTable[0x45b].update = &PTR_UpdateMoby__1113_1114_1115_1116__00708db0;
  MobyVTable[0x45b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x45c].idx = 0x45c;
  MobyVTable[0x45c].update = &PTR_UpdateMoby__1113_1114_1115_1116__00708db0;
  MobyVTable[0x45c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x45d].idx = 0x45d;
  MobyVTable[0x45d].update = &PTR_UpdateMoby_1117_00708dc0;
  MobyVTable[0x45d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x45e].idx = 0x45e;
  MobyVTable[0x45e].update = &PTR_UpdateMoby_1118_00708dd8;
  MobyVTable[0x45e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x45f].idx = 0x45f;
  MobyVTable[0x45f].update = (void **)0x0;
  MobyVTable[0x45f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x460].idx = 0x460;
  MobyVTable[0x460].update = &PTR_UpdateMoby_1120_00708e18;
  MobyVTable[0x460].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x461].idx = 0x461;
  MobyVTable[0x461].update = (void **)0x0;
  MobyVTable[0x461].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x462].idx = 0x462;
  MobyVTable[0x462].update = &PTR_UpdateMoby_1122_00708e30;
  MobyVTable[0x462].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x463].idx = 0x463;
  MobyVTable[0x463].update = &PTR_UpdateMoby_1123_00708e48;
  MobyVTable[0x463].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x464].idx = 0x464;
  MobyVTable[0x464].update = &PTR_UpdateMoby_1124_00708e58;
  MobyVTable[0x464].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x465].idx = 0x465;
  MobyVTable[0x465].update = (void **)0x0;
  MobyVTable[0x465].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x466].idx = 0x466;
  MobyVTable[0x466].update = &PTR_UpdateMoby_1126_00708e60;
  MobyVTable[0x466].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x467].idx = 0x467;
  MobyVTable[0x467].update = (void **)0x0;
  MobyVTable[0x467].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x468].idx = 0x468;
  MobyVTable[0x468].update = &PTR_UpdateMoby_1128_00708e70;
  MobyVTable[0x468].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x469].idx = 0x469;
  MobyVTable[0x469].update = &PTR_UpdateMoby__104_106_1129__00708568;
  MobyVTable[0x469].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x46a].idx = 0x46a;
  MobyVTable[0x46a].update = &PTR_UpdateMoby_1130_00708e88;
  MobyVTable[0x46a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x46b].idx = 0x46b;
  MobyVTable[0x46b].update = &PTR_UpdateMoby_a_lot_4_00708a20;
  MobyVTable[0x46b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x46c].idx = 0x46c;
  MobyVTable[0x46c].update = (void **)0x0;
  MobyVTable[0x46c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x46d].idx = 0x46d;
  MobyVTable[0x46d].update = &PTR_UpdateMoby_1133_00708e98;
  MobyVTable[0x46d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x46e].idx = 0x46e;
  MobyVTable[0x46e].update = &PTR_UpdateMoby_1134_00708ec8;
  MobyVTable[0x46e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x46f].idx = 0x46f;
  MobyVTable[0x46f].update = &PTR_UpdateMoby_1135_00708f08;
  MobyVTable[0x46f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x470].idx = 0x470;
  MobyVTable[0x470].update = (void **)0x0;
  MobyVTable[0x470].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x471].idx = 0x471;
  MobyVTable[0x471].update = (void **)0x0;
  MobyVTable[0x471].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x472].idx = 0x472;
  MobyVTable[0x472].update = &PTR_UpdateMoby_1138_00708f30;
  MobyVTable[0x472].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x473].idx = 0x473;
  MobyVTable[0x473].update = &PTR_UpdateMoby_1139_00708f38;
  MobyVTable[0x473].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x474].idx = 0x474;
  MobyVTable[0x474].update = &PTR_UpdateMoby_1140_00708fa0;
  MobyVTable[0x474].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x475].idx = 0x475;
  MobyVTable[0x475].update = &PTR_UpdateMoby__726_1082_1141__0070e478;
  MobyVTable[0x475].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x476].idx = 0x476;
  MobyVTable[0x476].update = &PTR_UpdateMoby_1142_00708fa8;
  MobyVTable[0x476].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x477].idx = 0x477;
  MobyVTable[0x477].update = &PTR_UpdateMoby_1143_00708fb8;
  MobyVTable[0x477].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x478].idx = 0x478;
  MobyVTable[0x478].update = &PTR_UpdateMoby_1144_00708fc8;
  MobyVTable[0x478].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x479].idx = 0x479;
  MobyVTable[0x479].update = (void **)0x0;
  MobyVTable[0x479].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x47a].idx = 0x47a;
  MobyVTable[0x47a].update = (void **)0x0;
  MobyVTable[0x47a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x47b].idx = 0x47b;
  MobyVTable[0x47b].update = (void **)0x0;
  MobyVTable[0x47b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x47c].idx = 0x47c;
  MobyVTable[0x47c].update = (void **)0x0;
  MobyVTable[0x47c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x47d].idx = 0x47d;
  MobyVTable[0x47d].update = &PTR_UpdateMoby_1149_00708fd8;
  MobyVTable[0x47d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x47e].idx = 0x47e;
  MobyVTable[0x47e].update = &PTR_UpdateMoby__1150_1151__00708ff0;
  MobyVTable[0x47e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x47f].idx = 0x47f;
  MobyVTable[0x47f].update = &PTR_UpdateMoby__1150_1151__00708ff0;
  MobyVTable[0x47f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x480].idx = 0x480;
  MobyVTable[0x480].update = (void **)0x0;
  MobyVTable[0x480].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x481].idx = 0x481;
  MobyVTable[0x481].update = (void **)0x0;
  MobyVTable[0x481].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x482].idx = 0x482;
  MobyVTable[0x482].update = (void **)0x0;
  MobyVTable[0x482].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x483].idx = 0x483;
  MobyVTable[0x483].update = (void **)0x0;
  MobyVTable[0x483].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x484].idx = 0x484;
  MobyVTable[0x484].update = &PTR_UpdateMoby_1156_00709008;
  MobyVTable[0x484].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x485].idx = 0x485;
  MobyVTable[0x485].update = &PTR_UpdateMoby_1157_00709020;
  MobyVTable[0x485].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x486].idx = 0x486;
  MobyVTable[0x486].update = &PTR_UpdateMoby_1158_00709048;
  MobyVTable[0x486].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x487].idx = 0x487;
  MobyVTable[0x487].update = &PTR_UpdateMoby_1159_00709060;
  MobyVTable[0x487].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x488].idx = 0x488;
  MobyVTable[0x488].update = &PTR_UpdateMoby_1160_JetFighterUnused_007090e0;
  MobyVTable[0x488].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x489].idx = 0x489;
  MobyVTable[0x489].update = (void **)0x0;
  MobyVTable[0x489].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x48a].idx = 0x48a;
  MobyVTable[0x48a].update = (void **)0x0;
  MobyVTable[0x48a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x48b].idx = 0x48b;
  MobyVTable[0x48b].update = (void **)0x0;
  MobyVTable[0x48b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x48c].idx = 0x48c;
  MobyVTable[0x48c].update = (void **)0x0;
  MobyVTable[0x48c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x48d].idx = 0x48d;
  MobyVTable[0x48d].update = (void **)0x0;
  MobyVTable[0x48d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x48e].idx = 0x48e;
  MobyVTable[0x48e].update = (void **)0x0;
  MobyVTable[0x48e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x48f].idx = 0x48f;
  MobyVTable[0x48f].update = &PTR_UpdateMoby_1167_007090f8;
  MobyVTable[0x48f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x490].idx = 0x490;
  MobyVTable[0x490].update = &PTR_UpdateMoby_1168_00709110;
  MobyVTable[0x490].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x491].idx = 0x491;
  MobyVTable[0x491].update = &PTR_UpdateMoby_1169_00709148;
  MobyVTable[0x491].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x492].idx = 0x492;
  MobyVTable[0x492].update = &PTR_UpdateMoby_1170_00709160;
  MobyVTable[0x492].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x493].idx = 0x493;
  MobyVTable[0x493].update = (void **)0x0;
  MobyVTable[0x493].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x494].idx = 0x494;
  MobyVTable[0x494].update = &PTR_UpdateMoby_1172_00709178;
  MobyVTable[0x494].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x495].idx = 0x495;
  MobyVTable[0x495].update = (void **)0x0;
  MobyVTable[0x495].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x496].idx = 0x496;
  MobyVTable[0x496].update = &PTR_UpdateMoby_1174_00709188;
  MobyVTable[0x496].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x497].idx = 0x497;
  MobyVTable[0x497].update = (void **)0x0;
  MobyVTable[0x497].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x498].idx = 0x498;
  MobyVTable[0x498].update = (void **)0x0;
  MobyVTable[0x498].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x499].idx = 0x499;
  MobyVTable[0x499].update = (void **)0x0;
  MobyVTable[0x499].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x49a].idx = 0x49a;
  MobyVTable[0x49a].update = &PTR_UpdateMoby_1178_00709198;
  MobyVTable[0x49a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x49b].idx = 0x49b;
  MobyVTable[0x49b].update = &PTR_UpdateMoby_1179_007091a8;
  MobyVTable[0x49b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x49c].idx = 0x49c;
  MobyVTable[0x49c].update = &PTR_UpdateMoby_1180_007091c8;
  MobyVTable[0x49c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x49d].idx = 0x49d;
  MobyVTable[0x49d].update = &PTR_UpdateMoby_1181_007091f0;
  MobyVTable[0x49d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x49e].idx = 0x49e;
  MobyVTable[0x49e].update = &PTR_UpdateMoby_a_lot_6_00709210;
  MobyVTable[0x49e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x49f].idx = 0x49f;
  MobyVTable[0x49f].update = &PTR_UpdateMoby_a_lot_6_00709210;
  MobyVTable[0x49f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a0].idx = 0x4a0;
  MobyVTable[0x4a0].update = &PTR_UpdateMoby_a_lot_6_00709210;
  MobyVTable[0x4a0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a1].idx = 0x4a1;
  MobyVTable[0x4a1].update = &PTR_UpdateMoby_a_lot_6_00709210;
  MobyVTable[0x4a1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a2].idx = 0x4a2;
  MobyVTable[0x4a2].update = &PTR_UpdateMoby_a_lot_6_00709210;
  MobyVTable[0x4a2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a3].idx = 0x4a3;
  MobyVTable[0x4a3].update = &PTR_UpdateMoby_a_lot_6_00709210;
  MobyVTable[0x4a3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a4].idx = 0x4a4;
  MobyVTable[0x4a4].update = &PTR_UpdateMoby_a_lot_6_00709210;
  MobyVTable[0x4a4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a5].idx = 0x4a5;
  MobyVTable[0x4a5].update = &PTR_UpdateMoby_a_lot_6_00709210;
  MobyVTable[0x4a5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a6].idx = 0x4a6;
  MobyVTable[0x4a6].update = &PTR_UpdateMoby_1190_00709228;
  MobyVTable[0x4a6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a7].idx = 0x4a7;
  MobyVTable[0x4a7].update = (void **)0x0;
  MobyVTable[0x4a7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a8].idx = 0x4a8;
  MobyVTable[0x4a8].update = &PTR_UpdateMoby__112_1192__00708e00;
  MobyVTable[0x4a8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4a9].idx = 0x4a9;
  MobyVTable[0x4a9].update = &PTR_UpdateMoby_1193_00709238;
  MobyVTable[0x4a9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4aa].idx = 0x4aa;
  MobyVTable[0x4aa].update = (void **)0x0;
  MobyVTable[0x4aa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ab].idx = 0x4ab;
  MobyVTable[0x4ab].update = (void **)0x0;
  MobyVTable[0x4ab].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ac].idx = 0x4ac;
  MobyVTable[0x4ac].update = &PTR_UpdateMoby_1196_00709260;
  MobyVTable[0x4ac].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ad].idx = 0x4ad;
  MobyVTable[0x4ad].update = &PTR_UpdateMoby_1197_00709298;
  MobyVTable[0x4ad].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ae].idx = 0x4ae;
  MobyVTable[0x4ae].update = &PTR_UpdateMoby_1198_007092b0;
  MobyVTable[0x4ae].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4af].idx = 0x4af;
  MobyVTable[0x4af].update = &PTR_UpdateMoby_1199_007092f0;
  MobyVTable[0x4af].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b0].idx = 0x4b0;
  MobyVTable[0x4b0].update = (void **)0x0;
  MobyVTable[0x4b0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b1].idx = 0x4b1;
  MobyVTable[0x4b1].update = &PTR_UpdateMoby_1201_00709308;
  MobyVTable[0x4b1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b2].idx = 0x4b2;
  MobyVTable[0x4b2].update = &PTR_UpdateMoby_1202_00709370;
  MobyVTable[0x4b2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b3].idx = 0x4b3;
  MobyVTable[0x4b3].update = (void **)0x0;
  MobyVTable[0x4b3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b4].idx = 0x4b4;
  MobyVTable[0x4b4].update = (void **)0x0;
  MobyVTable[0x4b4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b5].idx = 0x4b5;
  MobyVTable[0x4b5].update = (void **)0x0;
  MobyVTable[0x4b5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b6].idx = 0x4b6;
  MobyVTable[0x4b6].update = &PTR_UpdateMoby_1206_DamageCauser_00709380;
  MobyVTable[0x4b6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b7].idx = 0x4b7;
  MobyVTable[0x4b7].update = (void **)0x0;
  MobyVTable[0x4b7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b8].idx = 0x4b8;
  MobyVTable[0x4b8].update = &PTR_UpdateMoby_1208_00709388;
  MobyVTable[0x4b8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4b9].idx = 0x4b9;
  MobyVTable[0x4b9].update = &PTR_UpdateMoby_1209_00709398;
  MobyVTable[0x4b9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ba].idx = 0x4ba;
  MobyVTable[0x4ba].update = &PTR_UpdateMoby__821_1210__0070ed70;
  MobyVTable[0x4ba].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4bb].idx = 0x4bb;
  MobyVTable[0x4bb].update = (void **)0x0;
  MobyVTable[0x4bb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4bc].idx = 0x4bc;
  MobyVTable[0x4bc].update = &PTR_UpdateMoby_1212_00709418;
  MobyVTable[0x4bc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4bd].idx = 0x4bd;
  MobyVTable[0x4bd].update = &PTR_UpdateMoby__1213_1973__00709448;
  MobyVTable[0x4bd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4be].idx = 0x4be;
  MobyVTable[0x4be].update = &PTR_UpdateMoby_1214_00709460;
  MobyVTable[0x4be].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4bf].idx = 0x4bf;
  MobyVTable[0x4bf].update = &PTR_UpdateMoby_1215_00709498;
  MobyVTable[0x4bf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c0].idx = 0x4c0;
  MobyVTable[0x4c0].update = (void **)0x0;
  MobyVTable[0x4c0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c1].idx = 0x4c1;
  MobyVTable[0x4c1].update = (void **)0x0;
  MobyVTable[0x4c1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c2].idx = 0x4c2;
  MobyVTable[0x4c2].update = &PTR_UpdateMoby__1218_1220__007094b8;
  MobyVTable[0x4c2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c3].idx = 0x4c3;
  MobyVTable[0x4c3].update = &PTR_UpdateMoby_1219_007094d8;
  MobyVTable[0x4c3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c4].idx = 0x4c4;
  MobyVTable[0x4c4].update = &PTR_UpdateMoby__1218_1220__007094b8;
  MobyVTable[0x4c4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c5].idx = 0x4c5;
  MobyVTable[0x4c5].update = &PTR_UpdateMoby_1221_007094f8;
  MobyVTable[0x4c5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c6].idx = 0x4c6;
  MobyVTable[0x4c6].update = &PTR_UpdateMoby_1222_00709508;
  MobyVTable[0x4c6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c7].idx = 0x4c7;
  MobyVTable[0x4c7].update = (void **)0x0;
  MobyVTable[0x4c7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c8].idx = 0x4c8;
  MobyVTable[0x4c8].update = &PTR_UpdateMoby_1224_00709528;
  MobyVTable[0x4c8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4c9].idx = 0x4c9;
  MobyVTable[0x4c9].update = &PTR_UpdateMoby_1225_00709548;
  MobyVTable[0x4c9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ca].idx = 0x4ca;
  MobyVTable[0x4ca].update = &PTR_UpdateMoby_1226_00709578;
  MobyVTable[0x4ca].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4cb].idx = 0x4cb;
  MobyVTable[0x4cb].update = &PTR_UpdateMoby_1227_00709590;
  MobyVTable[0x4cb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4cc].idx = 0x4cc;
  MobyVTable[0x4cc].update = &PTR_UpdateMoby_1228_007095a8;
  MobyVTable[0x4cc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4cd].idx = 0x4cd;
  MobyVTable[0x4cd].update = &PTR_UpdateMoby_1229_007095c8;
  MobyVTable[0x4cd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ce].idx = 0x4ce;
  MobyVTable[0x4ce].update = &PTR_UpdateMoby_1230_007095f0;
  MobyVTable[0x4ce].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4cf].idx = 0x4cf;
  MobyVTable[0x4cf].update = &PTR_UpdateMoby_1231_00709610;
  MobyVTable[0x4cf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d0].idx = 0x4d0;
  MobyVTable[0x4d0].update = &PTR_UpdateMoby_1232_00709630;
  MobyVTable[0x4d0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d1].idx = 0x4d1;
  MobyVTable[0x4d1].update = &PTR_UpdateMoby_1233_00709668;
  MobyVTable[0x4d1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d2].idx = 0x4d2;
  MobyVTable[0x4d2].update = &PTR_UpdateMoby_1234_00709680;
  MobyVTable[0x4d2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d3].idx = 0x4d3;
  MobyVTable[0x4d3].update = &PTR_UpdateMoby_1235_007096a0;
  MobyVTable[0x4d3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d4].idx = 0x4d4;
  MobyVTable[0x4d4].update = &PTR_UpdateMoby_1236_007096c0;
  MobyVTable[0x4d4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d5].idx = 0x4d5;
  MobyVTable[0x4d5].update = (void **)0x0;
  MobyVTable[0x4d5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d6].idx = 0x4d6;
  MobyVTable[0x4d6].update = &PTR_UpdateMoby_1238_007096d8;
  MobyVTable[0x4d6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d7].idx = 0x4d7;
  MobyVTable[0x4d7].update = (void **)0x0;
  MobyVTable[0x4d7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d8].idx = 0x4d8;
  MobyVTable[0x4d8].update = &PTR_UpdateMoby_1240_00709708;
  MobyVTable[0x4d8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4d9].idx = 0x4d9;
  MobyVTable[0x4d9].update = &PTR_UpdateMoby_1241_00709720;
  MobyVTable[0x4d9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4da].idx = 0x4da;
  MobyVTable[0x4da].update = &PTR_UpdateMoby_1242_JetFighterPoki_007097c8;
  MobyVTable[0x4da].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4db].idx = 0x4db;
  MobyVTable[0x4db].update = &PTR_UpdateMoby_1243_00709808;
  MobyVTable[0x4db].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4dc].idx = 0x4dc;
  MobyVTable[0x4dc].update = (void **)0x0;
  MobyVTable[0x4dc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4dd].idx = 0x4dd;
  MobyVTable[0x4dd].update = (void **)0x0;
  MobyVTable[0x4dd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4de].idx = 0x4de;
  MobyVTable[0x4de].update = &PTR_UpdateMoby_1246_00709880;
  MobyVTable[0x4de].exit = &PTR_PTR_0071d388;
  MobyVTable[0x4df].idx = 0x4df;
  MobyVTable[0x4df].update = (void **)0x0;
  MobyVTable[0x4df].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e0].idx = 0x4e0;
  MobyVTable[0x4e0].update = &PTR_UpdateMoby_1248_007098c0;
  MobyVTable[0x4e0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e1].idx = 0x4e1;
  MobyVTable[0x4e1].update = &PTR_UpdateMoby_1249_007098d0;
  MobyVTable[0x4e1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e2].idx = 0x4e2;
  MobyVTable[0x4e2].update = &PTR_UpdateMoby_1250_007098d8;
  MobyVTable[0x4e2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e3].idx = 0x4e3;
  MobyVTable[0x4e3].update = &PTR_UpdateMoby_1251_00709900;
  MobyVTable[0x4e3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e4].idx = 0x4e4;
  MobyVTable[0x4e4].update = (void **)0x0;
  MobyVTable[0x4e4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e5].idx = 0x4e5;
  MobyVTable[0x4e5].update = (void **)0x0;
  MobyVTable[0x4e5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e6].idx = 0x4e6;
  MobyVTable[0x4e6].update = (void **)0x0;
  MobyVTable[0x4e6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e7].idx = 0x4e7;
  MobyVTable[0x4e7].update = (void **)0x0;
  MobyVTable[0x4e7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e8].idx = 0x4e8;
  MobyVTable[0x4e8].update = (void **)0x0;
  MobyVTable[0x4e8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4e9].idx = 0x4e9;
  MobyVTable[0x4e9].update = &PTR_UpdateMoby_1257_00709918;
  MobyVTable[0x4e9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ea].idx = 0x4ea;
  MobyVTable[0x4ea].update = &PTR_UpdateMoby_1258_00709930;
  MobyVTable[0x4ea].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4eb].idx = 0x4eb;
  MobyVTable[0x4eb].update = &PTR_UpdateMoby_1259_00709950;
  MobyVTable[0x4eb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ec].idx = 0x4ec;
  MobyVTable[0x4ec].update = &PTR_UpdateMoby_1260_00709988;
  MobyVTable[0x4ec].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ed].idx = 0x4ed;
  MobyVTable[0x4ed].update = &PTR_UpdateMoby_1261_007099a8;
  MobyVTable[0x4ed].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ee].idx = 0x4ee;
  MobyVTable[0x4ee].update = &PTR_UpdateMoby_1262_007099e0;
  MobyVTable[0x4ee].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ef].idx = 0x4ef;
  MobyVTable[0x4ef].update = &PTR_UpdateMoby__1263_1393__00709a00;
  MobyVTable[0x4ef].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f0].idx = 0x4f0;
  MobyVTable[0x4f0].update = &PTR_UpdateMoby_1264_00709a38;
  MobyVTable[0x4f0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f1].idx = 0x4f1;
  MobyVTable[0x4f1].update = &PTR_M1266_00232b90_00709a58;
  MobyVTable[0x4f2].idx = 0x4f2;
  MobyVTable[0x4f2].update = &PTR_UpdateMoby_1266_00709ad8;
  MobyVTable[0x4f2].exit = &PTR_PTR_0071d3a0;
  MobyVTable[0x4f3].idx = 0x4f3;
  MobyVTable[0x4f3].update = &PTR_UpdateMoby_1267_00703800;
  MobyVTable[0x4f3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f4].idx = 0x4f4;
  MobyVTable[0x4f4].update = &PTR_UpdateMoby_1268_00709b18;
  MobyVTable[0x4f4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f5].idx = 0x4f5;
  MobyVTable[0x4f5].update = &PTR_UpdateMoby_1269_00709b28;
  MobyVTable[0x4f5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f6].idx = 0x4f6;
  MobyVTable[0x4f6].update = &PTR_UpdateMoby_1270_00709b48;
  MobyVTable[0x4f6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f7].idx = 0x4f7;
  MobyVTable[0x4f7].update = &PTR_UpdateMoby_1271_00709b60;
  MobyVTable[0x4f7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f8].idx = 0x4f8;
  MobyVTable[0x4f8].update = (void **)0x0;
  MobyVTable[0x4f8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4f9].idx = 0x4f9;
  MobyVTable[0x4f9].update = (void **)0x0;
  MobyVTable[0x4f9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4fa].idx = 0x4fa;
  MobyVTable[0x4fa].update = &PTR_UpdateMoby_1274_00703840;
  MobyVTable[0x4fa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4fb].idx = 0x4fb;
  MobyVTable[0x4fb].update = (void **)0x0;
  MobyVTable[0x4fb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4fc].idx = 0x4fc;
  MobyVTable[0x4fc].update = (void **)0x0;
  MobyVTable[0x4fc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4fd].idx = 0x4fd;
  MobyVTable[0x4fd].update = (void **)0x0;
  MobyVTable[0x4fd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4fe].idx = 0x4fe;
  MobyVTable[0x4fe].update = &PTR_UpdateMoby_1278_00709b70;
  MobyVTable[0x4fe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x4ff].idx = 0x4ff;
  MobyVTable[0x4ff].update = (void **)0x0;
  MobyVTable[0x4ff].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x500].idx = 0x500;
  MobyVTable[0x500].update = &PTR_UpdateMoby_1280_00709b78;
  MobyVTable[0x500].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x501].idx = 0x501;
  MobyVTable[0x501].update = &PTR_UpdateMoby_1281_00709b90;
  MobyVTable[0x501].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x502].idx = 0x502;
  MobyVTable[0x502].update = &PTR_UpdateMoby__1015_1282__007083c8;
  MobyVTable[0x502].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x503].idx = 0x503;
  MobyVTable[0x503].update = &PTR_UpdateMoby_1283_00709ba8;
  MobyVTable[0x503].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x504].idx = 0x504;
  MobyVTable[0x504].update = &PTR_UpdateMoby_1284_00709c28;
  MobyVTable[0x504].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x505].idx = 0x505;
  MobyVTable[0x505].update = &PTR_UpdateMoby__1285_1286_1287_1288__00709c40;
  MobyVTable[0x505].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x506].idx = 0x506;
  MobyVTable[0x506].update = &PTR_UpdateMoby__1285_1286_1287_1288__00709c40;
  MobyVTable[0x506].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x507].idx = 0x507;
  MobyVTable[0x507].update = &PTR_UpdateMoby__1285_1286_1287_1288__00709c40;
  MobyVTable[0x507].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x508].idx = 0x508;
  MobyVTable[0x508].update = &PTR_UpdateMoby__1285_1286_1287_1288__00709c40;
  MobyVTable[0x508].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x509].idx = 0x509;
  MobyVTable[0x509].update = &PTR_UpdateMoby_1289_00709c50;
  MobyVTable[0x509].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x50a].idx = 0x50a;
  MobyVTable[0x50a].update = &PTR_UpdateMoby_1290_00709c70;
  MobyVTable[0x50a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x50b].idx = 0x50b;
  MobyVTable[0x50b].update = &PTR_UpdateMoby_1291_00709c98;
  MobyVTable[0x50b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x50c].idx = 0x50c;
  MobyVTable[0x50c].update = &PTR_UpdateMoby_1292_00709cb0;
  MobyVTable[0x50c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x50d].idx = 0x50d;
  MobyVTable[0x50d].update = &PTR_UpdateMoby__1293_1320__00709cc0;
  MobyVTable[0x50d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x50e].idx = 0x50e;
  MobyVTable[0x50e].update = (void **)0x0;
  MobyVTable[0x50e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x50f].idx = 0x50f;
  MobyVTable[0x50f].update = (void **)0x0;
  MobyVTable[0x50f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x510].idx = 0x510;
  MobyVTable[0x510].update = (void **)0x0;
  MobyVTable[0x510].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x511].idx = 0x511;
  MobyVTable[0x511].update = &PTR_UpdateMoby_1297_00709ce0;
  MobyVTable[0x511].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x512].idx = 0x512;
  MobyVTable[0x512].update = &PTR_UpdateMoby__276_1298_1299__0070be78;
  MobyVTable[0x512].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x513].idx = 0x513;
  MobyVTable[0x513].update = &PTR_UpdateMoby__276_1298_1299__0070be78;
  MobyVTable[0x513].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x514].idx = 0x514;
  MobyVTable[0x514].update = &PTR_UpdateMoby_1300_00709d50;
  MobyVTable[0x514].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x515].idx = 0x515;
  MobyVTable[0x515].update = &PTR_UpdateMoby__351_1301__00709d58;
  MobyVTable[0x515].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x516].idx = 0x516;
  MobyVTable[0x516].update = &PTR_UpdateMoby__1024_1302__00708488;
  MobyVTable[0x516].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x517].idx = 0x517;
  MobyVTable[0x517].update = (void **)0x0;
  MobyVTable[0x517].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x518].idx = 0x518;
  MobyVTable[0x518].update = &PTR_UpdateMoby_1304_00709d68;
  MobyVTable[0x518].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x519].idx = 0x519;
  MobyVTable[0x519].update = (void **)0x0;
  MobyVTable[0x519].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x51a].idx = 0x51a;
  MobyVTable[0x51a].update = (void **)0x0;
  MobyVTable[0x51a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x51b].idx = 0x51b;
  MobyVTable[0x51b].update = &PTR_UpdateMoby_a_lot_9_00709d80;
  MobyVTable[0x51b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x51c].idx = 0x51c;
  MobyVTable[0x51c].update = &PTR_UpdateMoby_a_lot_9_00709d80;
  MobyVTable[0x51c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x51d].idx = 0x51d;
  MobyVTable[0x51d].update = &PTR_UpdateMoby_1309_00709d90;
  MobyVTable[0x51d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x51e].idx = 0x51e;
  MobyVTable[0x51e].update = &PTR_UpdateMoby_a_lot_9_00709d80;
  MobyVTable[0x51e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x51f].idx = 0x51f;
  MobyVTable[0x51f].update = &PTR_UpdateMoby_a_lot_9_00709d80;
  MobyVTable[0x51f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x520].idx = 0x520;
  MobyVTable[0x520].update = &PTR_UpdateMoby_a_lot_9_00709d80;
  MobyVTable[0x520].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x521].idx = 0x521;
  MobyVTable[0x521].update = &PTR_UpdateMoby_a_lot_9_00709d80;
  MobyVTable[0x521].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x522].idx = 0x522;
  MobyVTable[0x522].update = &PTR_UpdateMoby_a_lot_9_00709d80;
  MobyVTable[0x522].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x523].idx = 0x523;
  MobyVTable[0x523].update = (void **)0x0;
  MobyVTable[0x523].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x524].idx = 0x524;
  MobyVTable[0x524].update = &PTR_UpdateMoby_1316_00709da0;
  MobyVTable[0x524].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x525].idx = 0x525;
  MobyVTable[0x525].update = &PTR_UpdateMoby_1317_00709db8;
  MobyVTable[0x525].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x526].idx = 0x526;
  MobyVTable[0x526].update = (void **)0x0;
  MobyVTable[0x526].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x527].idx = 0x527;
  MobyVTable[0x527].update = &PTR_UpdateMoby_1319_00709de0;
  MobyVTable[0x527].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x528].idx = 0x528;
  MobyVTable[0x528].update = &PTR_UpdateMoby__1293_1320__00709cc0;
  MobyVTable[0x528].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x529].idx = 0x529;
  MobyVTable[0x529].update = (void **)0x0;
  MobyVTable[0x529].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x52a].idx = 0x52a;
  MobyVTable[0x52a].update = &PTR_UpdateMoby_1322_00709e00;
  MobyVTable[0x52a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x52b].idx = 0x52b;
  MobyVTable[0x52b].update = &PTR_UpdateMoby_1323_00709e18;
  MobyVTable[0x52b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x52c].idx = 0x52c;
  MobyVTable[0x52c].update = &PTR_UpdateMoby_1324_00709e30;
  MobyVTable[0x52c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x52d].idx = 0x52d;
  MobyVTable[0x52d].update = (void **)0x0;
  MobyVTable[0x52d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x52e].idx = 0x52e;
  MobyVTable[0x52e].update = &PTR_UpdateMoby_1326_00709e40;
  MobyVTable[0x52e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x52f].idx = 0x52f;
  MobyVTable[0x52f].update = &PTR_UpdateMoby_1327_00709e50;
  MobyVTable[0x52f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x530].idx = 0x530;
  MobyVTable[0x530].update = (void **)0x0;
  MobyVTable[0x530].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x531].idx = 0x531;
  MobyVTable[0x531].update = (void **)0x0;
  MobyVTable[0x531].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x532].idx = 0x532;
  MobyVTable[0x532].update = &PTR_UpdateMoby_a_lot_10_0070d058;
  MobyVTable[0x532].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x533].idx = 0x533;
  MobyVTable[0x533].update = &PTR_UpdateMoby_1331_00709ea0;
  MobyVTable[0x533].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x534].idx = 0x534;
  MobyVTable[0x534].update = &PTR_UpdateMoby_a_lot_19_00709ef8;
  MobyVTable[0x534].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x535].idx = 0x535;
  MobyVTable[0x535].update = &PTR_UpdateMoby_a_lot_19_00709ef8;
  MobyVTable[0x535].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x536].idx = 0x536;
  MobyVTable[0x536].update = &PTR_UpdateMoby_a_lot_19_00709ef8;
  MobyVTable[0x536].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x537].idx = 0x537;
  MobyVTable[0x537].update = &PTR_UpdateMoby_a_lot_19_00709ef8;
  MobyVTable[0x537].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x538].idx = 0x538;
  MobyVTable[0x538].update = &PTR_UpdateMoby_a_lot_19_00709ef8;
  MobyVTable[0x538].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x539].idx = 0x539;
  MobyVTable[0x539].update = &PTR_UpdateMoby_a_lot_19_00709ef8;
  MobyVTable[0x539].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x53a].idx = 0x53a;
  MobyVTable[0x53a].update = &PTR_UpdateMoby_a_lot_19_00709ef8;
  MobyVTable[0x53a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x53b].idx = 0x53b;
  MobyVTable[0x53b].update = &PTR_UpdateMoby_a_lot_10_0070d058;
  MobyVTable[0x53b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x53c].idx = 0x53c;
  MobyVTable[0x53c].update = &PTR_UpdateMoby_a_lot_10_0070d058;
  MobyVTable[0x53c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x53d].idx = 0x53d;
  MobyVTable[0x53d].update = &PTR_UpdateMoby_1341_00709f00;
  MobyVTable[0x53d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x53e].idx = 0x53e;
  MobyVTable[0x53e].update = &PTR_UpdateMoby_1342_00709f10;
  MobyVTable[0x53e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x53f].idx = 0x53f;
  MobyVTable[0x53f].update = &PTR_UpdateMoby_1343_00709f20;
  MobyVTable[0x53f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x540].idx = 0x540;
  MobyVTable[0x540].update = &PTR_UpdateMoby_1344_00709f30;
  MobyVTable[0x540].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x541].idx = 0x541;
  MobyVTable[0x541].update = &PTR_UpdateMoby_1345_00709f40;
  MobyVTable[0x541].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x542].idx = 0x542;
  MobyVTable[0x542].update = &PTR_UpdateMoby_1346_00709f58;
  MobyVTable[0x542].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x543].idx = 0x543;
  MobyVTable[0x543].update = &PTR_UpdateMoby_1347_00709f68;
  MobyVTable[0x543].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x544].idx = 0x544;
  MobyVTable[0x544].update = &PTR_UpdateMoby_1348_00709f78;
  MobyVTable[0x544].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x545].idx = 0x545;
  MobyVTable[0x545].update = &PTR_UpdateMoby_1349_00709f88;
  MobyVTable[0x545].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x546].idx = 0x546;
  MobyVTable[0x546].update = &PTR_UpdateMoby_1350_00709fb8;
  MobyVTable[0x546].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x547].idx = 0x547;
  MobyVTable[0x547].update = &PTR_UpdateMoby_1351_00709fc8;
  MobyVTable[0x547].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x548].idx = 0x548;
  MobyVTable[0x548].update = &PTR_UpdateMoby_1352_00709ff0;
  MobyVTable[0x548].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x549].idx = 0x549;
  MobyVTable[0x549].update = &PTR_UpdateMoby_1353_GemlikManager_0070a000;
  MobyVTable[0x549].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x54a].idx = 0x54a;
  MobyVTable[0x54a].update = &PTR_UpdateMoby_1354_0070a020;
  MobyVTable[0x54a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x54b].idx = 0x54b;
  MobyVTable[0x54b].update = &PTR_UpdateMoby_1355_0070a048;
  MobyVTable[0x54b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x54c].idx = 0x54c;
  MobyVTable[0x54c].update = &PTR_UpdateMoby_1356_0070a088;
  MobyVTable[0x54c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x54d].idx = 0x54d;
  MobyVTable[0x54d].update = &PTR_UpdateMoby_1357_0070a0b8;
  MobyVTable[0x54d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x54e].idx = 0x54e;
  MobyVTable[0x54e].update = (void **)0x0;
  MobyVTable[0x54e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x54f].idx = 0x54f;
  MobyVTable[0x54f].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x54f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x550].idx = 0x550;
  MobyVTable[0x550].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x550].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x551].idx = 0x551;
  MobyVTable[0x551].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x551].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x552].idx = 0x552;
  MobyVTable[0x552].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x552].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x553].idx = 0x553;
  MobyVTable[0x553].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x553].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x554].idx = 0x554;
  MobyVTable[0x554].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x554].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x555].idx = 0x555;
  MobyVTable[0x555].update = (void **)0x0;
  MobyVTable[0x555].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x556].idx = 0x556;
  MobyVTable[0x556].update = &PTR_UpdateMoby_1366_0070a0f8;
  MobyVTable[0x556].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x557].idx = 0x557;
  MobyVTable[0x557].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x557].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x558].idx = 0x558;
  MobyVTable[0x558].update = &PTR_UpdateMoby_1368_0070a100;
  MobyVTable[0x558].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x559].idx = 0x559;
  MobyVTable[0x559].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x559].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x55a].idx = 0x55a;
  MobyVTable[0x55a].update = (void **)0x0;
  MobyVTable[0x55a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x55b].idx = 0x55b;
  MobyVTable[0x55b].update = &PTR_UpdateMoby_1371_0070a128;
  MobyVTable[0x55b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x55c].idx = 0x55c;
  MobyVTable[0x55c].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x55c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x55d].idx = 0x55d;
  MobyVTable[0x55d].update = &PTR_UpdateMoby_a_lot_12_0070a0e8;
  MobyVTable[0x55d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x55e].idx = 0x55e;
  MobyVTable[0x55e].update = (void **)0x0;
  MobyVTable[0x55e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x55f].idx = 0x55f;
  MobyVTable[0x55f].update = (void **)0x0;
  MobyVTable[0x55f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x560].idx = 0x560;
  MobyVTable[0x560].update = (void **)0x0;
  MobyVTable[0x560].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x561].idx = 0x561;
  MobyVTable[0x561].update = &PTR_UpdateMoby_1377_0070a138;
  MobyVTable[0x561].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x562].idx = 0x562;
  MobyVTable[0x562].update = &PTR_UpdateMoby_1378_0070a148;
  MobyVTable[0x562].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x563].idx = 0x563;
  MobyVTable[0x563].update = &PTR_UpdateMoby_1379_JetFighterFleet_0070a1f0;
  MobyVTable[0x563].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x564].idx = 0x564;
  MobyVTable[0x564].update = &PTR_UpdateMoby_1380_0070a210;
  MobyVTable[0x564].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x565].idx = 0x565;
  MobyVTable[0x565].update = &PTR_UpdateMoby_1381_0070a220;
  MobyVTable[0x565].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x566].idx = 0x566;
  MobyVTable[0x566].update = &PTR_UpdateMoby__635_1382__0070dca0;
  MobyVTable[0x566].exit = &PTR_PTR_0071d3b8;
  MobyVTable[0x567].idx = 0x567;
  MobyVTable[0x567].update = (void **)0x0;
  MobyVTable[0x567].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x568].idx = 0x568;
  MobyVTable[0x568].update = (void **)0x0;
  MobyVTable[0x568].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x569].idx = 0x569;
  MobyVTable[0x569].update = (void **)0x0;
  MobyVTable[0x569].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x56a].idx = 0x56a;
  MobyVTable[0x56a].update = (void **)0x0;
  MobyVTable[0x56a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x56b].idx = 0x56b;
  MobyVTable[0x56b].update = &PTR_UpdateMoby_1387_0070a248;
  MobyVTable[0x56b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x56c].idx = 0x56c;
  MobyVTable[0x56c].update = &PTR_UpdateMoby_1388_0070a268;
  MobyVTable[0x56c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x56d].idx = 0x56d;
  MobyVTable[0x56d].update = &PTR_UpdateMoby__1389_1446__0070a280;
  MobyVTable[0x56d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x56e].idx = 0x56e;
  MobyVTable[0x56e].update = &PTR_UpdateMoby_1390_0070a290;
  MobyVTable[0x56e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x56f].idx = 0x56f;
  MobyVTable[0x56f].update = (void **)0x0;
  MobyVTable[0x56f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x570].idx = 0x570;
  MobyVTable[0x570].update = &PTR_UpdateMoby_1392_0070a2d8;
  MobyVTable[0x570].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x571].idx = 0x571;
  MobyVTable[0x571].update = &PTR_UpdateMoby__1263_1393__00709a00;
  MobyVTable[0x571].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x572].idx = 0x572;
  MobyVTable[0x572].update = &PTR_UpdateMoby_1394_0070a2e8;
  MobyVTable[0x572].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x573].idx = 0x573;
  MobyVTable[0x573].update = &PTR_UpdateMoby_1395_0070a2f0;
  MobyVTable[0x573].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x574].idx = 0x574;
  MobyVTable[0x574].update = &PTR_UpdateMoby_1396_0070a2f8;
  MobyVTable[0x574].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x575].idx = 0x575;
  MobyVTable[0x575].update = &PTR_UpdateMoby_1397_0070a308;
  MobyVTable[0x575].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x576].idx = 0x576;
  MobyVTable[0x576].update = (void **)0x0;
  MobyVTable[0x576].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x577].idx = 0x577;
  MobyVTable[0x577].update = &PTR_UpdateMoby__1399_1451_1899__0070a310;
  MobyVTable[0x577].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x578].idx = 0x578;
  MobyVTable[0x578].update = &PTR_UpdateMoby_1400_0070a328;
  MobyVTable[0x578].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x579].idx = 0x579;
  MobyVTable[0x579].update = &PTR_UpdateMoby_1401_MineBot_0070a358;
  MobyVTable[0x579].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x57a].idx = 0x57a;
  MobyVTable[0x57a].update = &PTR_UpdateMoby_1402_0070a370;
  MobyVTable[0x57a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x57b].idx = 0x57b;
  MobyVTable[0x57b].update = &PTR_UpdateMoby_1403_0070a398;
  MobyVTable[0x57b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x57c].idx = 0x57c;
  MobyVTable[0x57c].update = &PTR_UpdateMoby_1404_0070a3a0;
  MobyVTable[0x57c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x57d].idx = 0x57d;
  MobyVTable[0x57d].update = &PTR_UpdateMoby_1405_0070a3b8;
  MobyVTable[0x57d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x57e].idx = 0x57e;
  MobyVTable[0x57e].update = &PTR_UpdateMoby_1406_0070a3c8;
  MobyVTable[0x57e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x57f].idx = 0x57f;
  MobyVTable[0x57f].update = &PTR_UpdateMoby_1407_0070a3d8;
  MobyVTable[0x57f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x580].idx = 0x580;
  MobyVTable[0x580].update = &PTR_UpdateMoby_1408_0070a3e8;
  MobyVTable[0x580].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x581].idx = 0x581;
  MobyVTable[0x581].update = &PTR_UpdateMoby_1409_0070a3f8;
  MobyVTable[0x581].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x582].idx = 0x582;
  MobyVTable[0x582].update = &PTR_UpdateMoby_1410_0070a440;
  MobyVTable[0x582].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x583].idx = 0x583;
  MobyVTable[0x583].update = (void **)0x0;
  MobyVTable[0x583].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x584].idx = 0x584;
  MobyVTable[0x584].update = &PTR_UpdateMoby__212_1412__0070b7d8;
  MobyVTable[0x584].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x585].idx = 0x585;
  MobyVTable[0x585].update = &PTR_UpdateMoby_1413_0070a450;
  MobyVTable[0x585].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x586].idx = 0x586;
  MobyVTable[0x586].update = (void **)0x0;
  MobyVTable[0x586].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x587].idx = 0x587;
  MobyVTable[0x587].update = (void **)0x0;
  MobyVTable[0x587].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x588].idx = 0x588;
  MobyVTable[0x588].update = &PTR_UpdateMoby_1416_0070a460;
  MobyVTable[0x588].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x589].idx = 0x589;
  MobyVTable[0x589].update = &PTR_UpdateMoby_1417_FlyingCar_0070a480;
  MobyVTable[0x589].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x58a].idx = 0x58a;
  MobyVTable[0x58a].update = &PTR_UpdateMoby_1418_0070a498;
  MobyVTable[0x58a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x58b].idx = 0x58b;
  MobyVTable[0x58b].update = &PTR_UpdateMoby_1419_0070a4a8;
  MobyVTable[0x58b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x58c].idx = 0x58c;
  MobyVTable[0x58c].update = (void **)0x0;
  MobyVTable[0x58c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x58d].idx = 0x58d;
  MobyVTable[0x58d].update = &PTR_UpdateMoby_1421_0070a4c0;
  MobyVTable[0x58d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x58e].idx = 0x58e;
  MobyVTable[0x58e].update = &PTR_UpdateMoby_1422_0070a5a8;
  MobyVTable[0x58e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x58f].idx = 0x58f;
  MobyVTable[0x58f].update = (void **)0x0;
  MobyVTable[0x58f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x590].idx = 0x590;
  MobyVTable[0x590].update = &PTR_UpdateMoby_1424_0070a5c0;
  MobyVTable[0x590].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x591].idx = 0x591;
  MobyVTable[0x591].update = &PTR_UpdateMoby_1425_0070a5d0;
  MobyVTable[0x591].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x592].idx = 0x592;
  MobyVTable[0x592].update = &PTR_UpdateMoby_1426_0070a5e0;
  MobyVTable[0x592].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x593].idx = 0x593;
  MobyVTable[0x593].update = &PTR_UpdateMoby_1427_GC_Shockwave_007060e8;
  MobyVTable[0x593].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x594].idx = 0x594;
  MobyVTable[0x594].update = &PTR_UpdateMoby_1428_0070a600;
  MobyVTable[0x594].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x595].idx = 0x595;
  MobyVTable[0x595].update = &PTR_UpdateMoby__191_758_803_1429__0070b420;
  MobyVTable[0x595].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x596].idx = 0x596;
  MobyVTable[0x596].update = &PTR_UpdateMoby_1430_0070a620;
  MobyVTable[0x596].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x597].idx = 0x597;
  MobyVTable[0x597].update = (void **)0x0;
  MobyVTable[0x597].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x598].idx = 0x598;
  MobyVTable[0x598].update = &PTR_UpdateMoby_1432_0070a630;
  MobyVTable[0x598].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x599].idx = 0x599;
  MobyVTable[0x599].update = (void **)0x0;
  MobyVTable[0x599].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x59a].idx = 0x59a;
  MobyVTable[0x59a].update = &PTR_UpdateMoby__1434_1435__0070a638;
  MobyVTable[0x59a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x59b].idx = 0x59b;
  MobyVTable[0x59b].update = &PTR_UpdateMoby__1434_1435__0070a638;
  MobyVTable[0x59b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x59c].idx = 0x59c;
  MobyVTable[0x59c].update = (void **)0x0;
  MobyVTable[0x59c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x59d].idx = 0x59d;
  MobyVTable[0x59d].update = &PTR_UpdateMoby_1437_0070a640;
  MobyVTable[0x59d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x59e].idx = 0x59e;
  MobyVTable[0x59e].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0x59e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x59f].idx = 0x59f;
  MobyVTable[0x59f].update = &PTR_UpdateMoby_1439_0070a648;
  MobyVTable[0x59f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a0].idx = 0x5a0;
  MobyVTable[0x5a0].update = &PTR_UpdateMoby_1440_0070a668;
  MobyVTable[0x5a0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a1].idx = 0x5a1;
  MobyVTable[0x5a1].update = &PTR_UpdateMoby_1441_0070a680;
  MobyVTable[0x5a1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a2].idx = 0x5a2;
  MobyVTable[0x5a2].update = &PTR_UpdateMoby_1442_0070a698;
  MobyVTable[0x5a2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a3].idx = 0x5a3;
  MobyVTable[0x5a3].update = &PTR_UpdateMoby__1443_1890__0070a6b8;
  MobyVTable[0x5a3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a4].idx = 0x5a4;
  MobyVTable[0x5a4].update = (void **)0x0;
  MobyVTable[0x5a4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a5].idx = 0x5a5;
  MobyVTable[0x5a5].update = &PTR_UpdateMoby_1445_0070a6e0;
  MobyVTable[0x5a5].exit = &PTR_PTR_0071d3d0;
  MobyVTable[0x5a6].idx = 0x5a6;
  MobyVTable[0x5a6].update = &PTR_UpdateMoby__1389_1446__0070a280;
  MobyVTable[0x5a6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a7].idx = 0x5a7;
  MobyVTable[0x5a7].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0x5a7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a8].idx = 0x5a8;
  MobyVTable[0x5a8].update = &PTR_UpdateMoby_1448_0070a728;
  MobyVTable[0x5a8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5a9].idx = 0x5a9;
  MobyVTable[0x5a9].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0x5a9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5aa].idx = 0x5aa;
  MobyVTable[0x5aa].update = (void **)0x0;
  MobyVTable[0x5aa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ab].idx = 0x5ab;
  MobyVTable[0x5ab].update = &PTR_UpdateMoby__1399_1451_1899__0070a310;
  MobyVTable[0x5ab].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ac].idx = 0x5ac;
  MobyVTable[0x5ac].update = (void **)0x0;
  MobyVTable[0x5ac].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ad].idx = 0x5ad;
  MobyVTable[0x5ad].update = (void **)0x0;
  MobyVTable[0x5ad].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ae].idx = 0x5ae;
  MobyVTable[0x5ae].update = &PTR_UpdateMoby_1454_0070a750;
  MobyVTable[0x5ae].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5af].idx = 0x5af;
  MobyVTable[0x5b0].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5b1].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5af].update = &PTR_UpdateMoby_1455_0070a778;
  MobyVTable[0x5af].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b0].idx = 0x5b0;
  MobyVTable[0x5b2].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5b0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b1].idx = 0x5b1;
  MobyVTable[0x5b3].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5b1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b2].idx = 0x5b2;
  MobyVTable[0x5b4].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5b2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b3].idx = 0x5b3;
  MobyVTable[0x5b5].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5b3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b4].idx = 0x5b4;
  MobyVTable[0x5b6].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5b4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b5].idx = 0x5b5;
  MobyVTable[0x5b7].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5b5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b6].idx = 0x5b6;
  MobyVTable[0x5b8].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5b6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b7].idx = 0x5b7;
  MobyVTable[0x5b9].update = &PTR_UpdateMoby_a_lot_15_0070c158;
  MobyVTable[0x5b7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b8].idx = 0x5b8;
  MobyVTable[0x5b8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5b9].idx = 0x5b9;
  MobyVTable[0x5b9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ba].idx = 0x5ba;
  MobyVTable[0x5ba].update = (void **)0x0;
  MobyVTable[0x5ba].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5bb].idx = 0x5bb;
  MobyVTable[0x5bb].update = (void **)0x0;
  MobyVTable[0x5bb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5bc].idx = 0x5bc;
  MobyVTable[0x5bc].update = (void **)0x0;
  MobyVTable[0x5bc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5bd].idx = 0x5bd;
  MobyVTable[0x5bd].update = &PTR_UpdateMoby_1469_0070a788;
  MobyVTable[0x5bd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5be].idx = 0x5be;
  MobyVTable[0x5be].update = &PTR_UpdateMoby_1470_0070a798;
  MobyVTable[0x5be].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5bf].idx = 0x5bf;
  MobyVTable[0x5bf].update = &PTR_UpdateMoby_1471_0070a7b8;
  MobyVTable[0x5bf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c0].idx = 0x5c0;
  MobyVTable[0x5c0].update = (void **)0x0;
  MobyVTable[0x5c0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c1].idx = 0x5c1;
  MobyVTable[0x5c1].update = (void **)0x0;
  MobyVTable[0x5c1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c2].idx = 0x5c2;
  MobyVTable[0x5c2].update = &PTR_UpdateMoby_1474_0070a810;
  MobyVTable[0x5c2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c3].idx = 0x5c3;
  MobyVTable[0x5c3].update = &PTR_UpdateMoby_1475_KaleboRace_Rocket_00706100;
  MobyVTable[0x5c3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c4].idx = 0x5c4;
  MobyVTable[0x5c4].update = &PTR_UpdateMoby_1476_0070a820;
  MobyVTable[0x5c4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c5].idx = 0x5c5;
  MobyVTable[0x5c5].update = (void **)0x0;
  MobyVTable[0x5c5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c6].idx = 0x5c6;
  MobyVTable[0x5c6].update = (void **)0x0;
  MobyVTable[0x5c6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c7].idx = 0x5c7;
  MobyVTable[0x5c7].update = &PTR_UpdateMoby_1479_0070a828;
  MobyVTable[0x5c7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c8].idx = 0x5c8;
  MobyVTable[0x5c8].update = (void **)0x0;
  MobyVTable[0x5c8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5c9].idx = 0x5c9;
  MobyVTable[0x5c9].update = &PTR_UpdateMoby_1481_0070a848;
  MobyVTable[0x5c9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ca].idx = 0x5ca;
  MobyVTable[0x5ca].update = (void **)0x0;
  MobyVTable[0x5ca].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5cb].idx = 0x5cb;
  MobyVTable[0x5cb].update = (void **)0x0;
  MobyVTable[0x5cb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5cc].idx = 0x5cc;
  MobyVTable[0x5cc].update = (void **)0x0;
  MobyVTable[0x5cc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5cd].idx = 0x5cd;
  MobyVTable[0x5cd].update = (void **)0x0;
  MobyVTable[0x5cd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ce].idx = 0x5ce;
  MobyVTable[0x5ce].update = (void **)0x0;
  MobyVTable[0x5ce].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5cf].idx = 0x5cf;
  MobyVTable[0x5cf].update = (void **)0x0;
  MobyVTable[0x5cf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d0].idx = 0x5d0;
  MobyVTable[0x5d0].update = &PTR_UpdateMoby_1488_0070a850;
  MobyVTable[0x5d0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d1].idx = 0x5d1;
  MobyVTable[0x5d1].update = (void **)0x0;
  MobyVTable[0x5d1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d2].idx = 0x5d2;
  MobyVTable[0x5d2].update = (void **)0x0;
  MobyVTable[0x5d2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d3].idx = 0x5d3;
  MobyVTable[0x5d3].update = (void **)0x0;
  MobyVTable[0x5d3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d4].idx = 0x5d4;
  MobyVTable[0x5d4].update = (void **)0x0;
  MobyVTable[0x5d4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d5].idx = 0x5d5;
  MobyVTable[0x5d5].update = (void **)0x0;
  MobyVTable[0x5d5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d6].idx = 0x5d6;
  MobyVTable[0x5d6].update = (void **)0x0;
  MobyVTable[0x5d6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d7].idx = 0x5d7;
  MobyVTable[0x5d7].update = (void **)0x0;
  MobyVTable[0x5d7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d8].idx = 0x5d8;
  MobyVTable[0x5d8].update = (void **)0x0;
  MobyVTable[0x5d8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5d9].idx = 0x5d9;
  MobyVTable[0x5d9].update = (void **)0x0;
  MobyVTable[0x5d9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5da].idx = 0x5da;
  MobyVTable[0x5da].update = (void **)0x0;
  MobyVTable[0x5da].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5db].idx = 0x5db;
  MobyVTable[0x5db].update = (void **)0x0;
  MobyVTable[0x5db].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5dc].idx = 0x5dc;
  MobyVTable[0x5dc].update = (void **)0x0;
  MobyVTable[0x5dc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5dd].idx = 0x5dd;
  MobyVTable[0x5dd].update = (void **)0x0;
  MobyVTable[0x5dd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5de].idx = 0x5de;
  MobyVTable[0x5de].update = (void **)0x0;
  MobyVTable[0x5de].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5df].idx = 0x5df;
  MobyVTable[0x5df].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5df].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e0].idx = 0x5e0;
  MobyVTable[0x5e0].update = &PTR_UpdateMoby_1504_0070a870;
  MobyVTable[0x5e0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e1].idx = 0x5e1;
  MobyVTable[0x5e1].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5e1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e2].idx = 0x5e2;
  MobyVTable[0x5e2].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5e2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e3].idx = 0x5e3;
  MobyVTable[0x5e3].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5e3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e4].idx = 0x5e4;
  MobyVTable[0x5e4].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5e4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e5].idx = 0x5e5;
  MobyVTable[0x5e5].update = (void **)0x0;
  MobyVTable[0x5e5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e6].idx = 0x5e6;
  MobyVTable[0x5e6].update = &PTR_UpdateMoby_1510_0070a878;
  MobyVTable[0x5e6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e7].idx = 0x5e7;
  MobyVTable[0x5e7].update = &PTR_UpdateMoby_1511_0070a898;
  MobyVTable[0x5e7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e8].idx = 0x5e8;
  MobyVTable[0x5e8].update = &PTR_UpdateMoby_1512_0070a8a8;
  MobyVTable[0x5e8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5e9].idx = 0x5e9;
  MobyVTable[0x5e9].update = &PTR_UpdateMoby_1513_0070a8b8;
  MobyVTable[0x5e9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ea].idx = 0x5ea;
  MobyVTable[0x5ea].update = &PTR_UpdateMoby_1514_0070a8d0;
  MobyVTable[0x5ea].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5eb].idx = 0x5eb;
  MobyVTable[0x5eb].update = (void **)0x0;
  MobyVTable[0x5eb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ec].idx = 0x5ec;
  MobyVTable[0x5ec].update = &PTR_UpdateMoby_1516_0070a8e8;
  MobyVTable[0x5ec].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ed].idx = 0x5ed;
  MobyVTable[0x5ed].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5ed].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ee].idx = 0x5ee;
  MobyVTable[0x5ee].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5ee].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ef].idx = 0x5ef;
  MobyVTable[0x5ef].update = (void **)0x0;
  MobyVTable[0x5ef].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f0].idx = 0x5f0;
  MobyVTable[0x5f0].update = (void **)0x0;
  MobyVTable[0x5f0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f1].idx = 0x5f1;
  MobyVTable[0x5f1].update = (void **)0x0;
  MobyVTable[0x5f1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f2].idx = 0x5f2;
  MobyVTable[0x5f2].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5f2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f3].idx = 0x5f3;
  MobyVTable[0x5f3].update = &PTR_UpdateMoby_1523_GC_Blueball_00706138;
  MobyVTable[0x5f3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f4].idx = 0x5f4;
  MobyVTable[0x5f4].update = &PTR_UpdateMoby_1524_0070a918;
  MobyVTable[0x5f4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f5].idx = 0x5f5;
  MobyVTable[0x5f5].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5f5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f6].idx = 0x5f6;
  MobyVTable[0x5f6].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5f6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f7].idx = 0x5f7;
  MobyVTable[0x5f7].update = (void **)0x0;
  MobyVTable[0x5f7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f8].idx = 0x5f8;
  MobyVTable[0x5f8].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5f8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5f9].idx = 0x5f9;
  MobyVTable[0x5f9].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5f9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5fa].idx = 0x5fa;
  MobyVTable[0x5fa].update = (void **)0x0;
  MobyVTable[0x5fa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5fb].idx = 0x5fb;
  MobyVTable[0x5fb].update = &PTR_UpdateMoby__1101_1102_1531_1532__00708b48;
  MobyVTable[0x5fb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5fc].idx = 0x5fc;
  MobyVTable[0x5fc].update = &PTR_UpdateMoby__1101_1102_1531_1532__00708b48;
  MobyVTable[0x5fc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5fd].idx = 0x5fd;
  MobyVTable[0x5fd].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5fd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5fe].idx = 0x5fe;
  MobyVTable[0x5fe].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x5fe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x5ff].idx = 0x5ff;
  MobyVTable[0x5ff].update = (void **)0x0;
  MobyVTable[0x5ff].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x600].idx = 0x600;
  MobyVTable[0x600].update = (void **)0x0;
  MobyVTable[0x600].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x601].idx = 0x601;
  MobyVTable[0x601].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x601].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x602].idx = 0x602;
  MobyVTable[0x602].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x602].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x603].idx = 0x603;
  MobyVTable[0x603].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x603].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x604].idx = 0x604;
  MobyVTable[0x604].update = (void **)0x0;
  MobyVTable[0x604].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x605].idx = 0x605;
  MobyVTable[0x605].update = (void **)0x0;
  MobyVTable[0x605].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x606].idx = 0x606;
  MobyVTable[0x606].update = (void **)0x0;
  MobyVTable[0x606].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x607].idx = 0x607;
  MobyVTable[0x607].update = (void **)0x0;
  MobyVTable[0x607].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x608].idx = 0x608;
  MobyVTable[0x608].update = &PTR_UpdateMoby_1544_0070a9b8;
  MobyVTable[0x608].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x609].idx = 0x609;
  MobyVTable[0x609].update = &PTR_UpdateMoby_1545_0070a9c0;
  MobyVTable[0x609].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x60a].idx = 0x60a;
  MobyVTable[0x60a].update = &PTR_UpdateMoby_1546_0070a9c8;
  MobyVTable[0x60a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x60b].idx = 0x60b;
  MobyVTable[0x60b].update = &PTR_UpdateMoby_1547_0070a9d0;
  MobyVTable[0x60b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x60c].idx = 0x60c;
  MobyVTable[0x60c].update = &PTR_UpdateMoby_1548_0070a9d8;
  MobyVTable[0x60c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x60d].idx = 0x60d;
  MobyVTable[0x60d].update = &PTR_UpdateMoby_1549_0070a9e0;
  MobyVTable[0x60d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x60e].idx = 0x60e;
  MobyVTable[0x60e].update = &PTR_UpdateMoby_1550_0070a9f0;
  MobyVTable[0x60e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x60f].idx = 0x60f;
  MobyVTable[0x60f].update = &PTR_UpdateMoby_1551_0070a9f8;
  MobyVTable[0x60f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x610].idx = 0x610;
  MobyVTable[0x610].update = &PTR_UpdateMoby_1552_0070aa00;
  MobyVTable[0x610].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x611].idx = 0x611;
  MobyVTable[0x611].update = &PTR_UpdateMoby_1553_0070aa08;
  MobyVTable[0x611].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x612].idx = 0x612;
  MobyVTable[0x612].update = &PTR_UpdateMoby_1554_0070aa10;
  MobyVTable[0x612].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x613].idx = 0x613;
  MobyVTable[0x613].update = &PTR_UpdateMoby_1555_0070aa18;
  MobyVTable[0x613].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x614].idx = 0x614;
  MobyVTable[0x614].update = &PTR_UpdateMoby_1556_0070aa20;
  MobyVTable[0x614].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x615].idx = 0x615;
  MobyVTable[0x615].update = &PTR_UpdateMoby_1557_0070aa28;
  MobyVTable[0x615].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x616].idx = 0x616;
  MobyVTable[0x616].update = &PTR_UpdateMoby_1558_0070aa30;
  MobyVTable[0x616].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x617].idx = 0x617;
  MobyVTable[0x617].update = &PTR_UpdateMoby_1559_0070aa38;
  MobyVTable[0x617].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x618].idx = 0x618;
  MobyVTable[0x618].update = &PTR_UpdateMoby_1560_0070aa70;
  MobyVTable[0x618].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x619].idx = 0x619;
  MobyVTable[0x619].update = &PTR_UpdateMoby_1561_0070aa78;
  MobyVTable[0x619].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x61a].idx = 0x61a;
  MobyVTable[0x61a].update = &PTR_UpdateMoby_1562_0070aa88;
  MobyVTable[0x61a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x61b].idx = 0x61b;
  MobyVTable[0x61b].update = &PTR_UpdateMoby_1563_0070aa98;
  MobyVTable[0x61b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x61c].idx = 0x61c;
  MobyVTable[0x61c].update = &PTR_UpdateMoby_1564_0070aac0;
  MobyVTable[0x61c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x61d].idx = 0x61d;
  MobyVTable[0x61d].update = &PTR_UpdateMoby_1565_0070aad0;
  MobyVTable[0x61d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x61e].idx = 0x61e;
  MobyVTable[0x61e].update = &PTR_UpdateMoby_1566_0070aad8;
  MobyVTable[0x61e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x61f].idx = 0x61f;
  MobyVTable[0x61f].update = &PTR_UpdateMoby_1567_0070aae8;
  MobyVTable[0x61f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x620].idx = 0x620;
  MobyVTable[0x620].update = &PTR_UpdateMoby_1568_0070aaf0;
  MobyVTable[0x620].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x621].idx = 0x621;
  MobyVTable[0x621].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x621].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x622].idx = 0x622;
  MobyVTable[0x622].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x622].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x623].idx = 0x623;
  MobyVTable[0x623].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x623].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x624].idx = 0x624;
  MobyVTable[0x624].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x624].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x625].idx = 0x625;
  MobyVTable[0x625].update = (void **)0x0;
  MobyVTable[0x625].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x626].idx = 0x626;
  MobyVTable[0x626].update = (void **)0x0;
  MobyVTable[0x626].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x627].idx = 0x627;
  MobyVTable[0x627].update = &PTR_UpdateMoby_1575_0070ab28;
  MobyVTable[0x627].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x628].idx = 0x628;
  MobyVTable[0x628].update = (void **)0x0;
  MobyVTable[0x628].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x629].idx = 0x629;
  MobyVTable[0x629].update = &PTR_UpdateMoby_1577_0070ab30;
  MobyVTable[0x629].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x62a].idx = 0x62a;
  MobyVTable[0x62a].update = (void **)0x0;
  MobyVTable[0x62a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x62b].idx = 0x62b;
  MobyVTable[0x62b].update = (void **)0x0;
  MobyVTable[0x62b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x62c].idx = 0x62c;
  MobyVTable[0x62c].update = (void **)0x0;
  MobyVTable[0x62c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x62d].idx = 0x62d;
  MobyVTable[0x62d].update = (void **)0x0;
  MobyVTable[0x62d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x62e].idx = 0x62e;
  MobyVTable[0x62e].update = (void **)0x0;
  MobyVTable[0x62e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x62f].idx = 0x62f;
  MobyVTable[0x62f].update = (void **)0x0;
  MobyVTable[0x62f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x630].idx = 0x630;
  MobyVTable[0x630].update = &PTR_UpdateMoby_1584_0070ab50;
  MobyVTable[0x630].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x631].idx = 0x631;
  MobyVTable[0x631].update = (void **)0x0;
  MobyVTable[0x631].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x632].idx = 0x632;
  MobyVTable[0x632].update = (void **)0x0;
  MobyVTable[0x632].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x633].idx = 0x633;
  MobyVTable[0x633].update = (void **)0x0;
  MobyVTable[0x633].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x634].idx = 0x634;
  MobyVTable[0x634].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x634].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x635].idx = 0x635;
  MobyVTable[0x635].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x635].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x636].idx = 0x636;
  MobyVTable[0x636].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x636].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x637].idx = 0x637;
  MobyVTable[0x637].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x637].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x638].idx = 0x638;
  MobyVTable[0x638].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x638].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x639].idx = 0x639;
  MobyVTable[0x639].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x639].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x63a].idx = 0x63a;
  MobyVTable[0x63a].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x63a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x63b].idx = 0x63b;
  MobyVTable[0x63b].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x63b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x63c].idx = 0x63c;
  MobyVTable[0x63c].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x63c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x63d].idx = 0x63d;
  MobyVTable[0x63d].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x63d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x63e].idx = 0x63e;
  MobyVTable[0x63e].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x63e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x63f].idx = 0x63f;
  MobyVTable[0x63f].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x63f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x640].idx = 0x640;
  MobyVTable[0x640].update = (void **)0x0;
  MobyVTable[0x640].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x641].idx = 0x641;
  MobyVTable[0x641].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x641].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x642].idx = 0x642;
  MobyVTable[0x642].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x642].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x643].idx = 0x643;
  MobyVTable[0x643].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x643].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x644].idx = 0x644;
  MobyVTable[0x644].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x644].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x645].idx = 0x645;
  MobyVTable[0x645].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x645].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x646].idx = 0x646;
  MobyVTable[0x646].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x646].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x647].idx = 0x647;
  MobyVTable[0x647].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x647].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x648].idx = 0x648;
  MobyVTable[0x648].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x648].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x649].idx = 0x649;
  MobyVTable[0x649].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x649].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x64a].idx = 0x64a;
  MobyVTable[0x64a].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x64a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x64b].idx = 0x64b;
  MobyVTable[0x64b].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x64b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x64c].idx = 0x64c;
  MobyVTable[0x64c].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x64c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x64d].idx = 0x64d;
  MobyVTable[0x64d].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x64d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x64e].idx = 0x64e;
  MobyVTable[0x64e].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x64e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x64f].idx = 0x64f;
  MobyVTable[0x64f].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x64f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x650].idx = 0x650;
  MobyVTable[0x650].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x650].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x651].idx = 0x651;
  MobyVTable[0x651].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x651].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x652].idx = 0x652;
  MobyVTable[0x652].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x652].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x653].idx = 0x653;
  MobyVTable[0x653].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x653].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x654].idx = 0x654;
  MobyVTable[0x654].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x654].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x655].idx = 0x655;
  MobyVTable[0x655].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x655].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x656].idx = 0x656;
  MobyVTable[0x656].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x656].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x657].idx = 0x657;
  MobyVTable[0x657].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x657].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x658].idx = 0x658;
  MobyVTable[0x658].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x658].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x659].idx = 0x659;
  MobyVTable[0x659].update = (void **)0x0;
  MobyVTable[0x659].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x65a].idx = 0x65a;
  MobyVTable[0x65a].update = (void **)0x0;
  MobyVTable[0x65a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x65b].idx = 0x65b;
  MobyVTable[0x65b].update = (void **)0x0;
  MobyVTable[0x65b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x65c].idx = 0x65c;
  MobyVTable[0x65c].update = (void **)0x0;
  MobyVTable[0x65c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x65d].idx = 0x65d;
  MobyVTable[0x65d].update = &PTR_UpdateMoby_1629_0070abe0;
  MobyVTable[0x65d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x65e].idx = 0x65e;
  MobyVTable[0x65e].update = (void **)0x0;
  MobyVTable[0x65e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x65f].idx = 0x65f;
  MobyVTable[0x65f].update = (void **)0x0;
  MobyVTable[0x65f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x660].idx = 0x660;
  MobyVTable[0x660].update = &PTR_UpdateMoby_1632_0070ac00;
  MobyVTable[0x660].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x661].idx = 0x661;
  MobyVTable[0x661].update = &PTR_UpdateMoby_1633_0070ac10;
  MobyVTable[0x661].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x662].idx = 0x662;
  MobyVTable[0x662].update = &PTR_UpdateMoby_1634_0070ac30;
  MobyVTable[0x662].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x663].idx = 0x663;
  MobyVTable[0x663].update = (void **)0x0;
  MobyVTable[0x663].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x664].idx = 0x664;
  MobyVTable[0x664].update = (void **)0x0;
  MobyVTable[0x664].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x665].idx = 0x665;
  MobyVTable[0x665].update = (void **)0x0;
  MobyVTable[0x665].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x666].idx = 0x666;
  MobyVTable[0x666].update = (void **)0x0;
  MobyVTable[0x666].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x667].idx = 0x667;
  MobyVTable[0x667].update = (void **)0x0;
  MobyVTable[0x667].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x668].idx = 0x668;
  MobyVTable[0x668].update = (void **)0x0;
  MobyVTable[0x668].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x669].idx = 0x669;
  MobyVTable[0x669].update = &PTR_UpdateMoby_1641_0070ac50;
  MobyVTable[0x669].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x66a].idx = 0x66a;
  MobyVTable[0x66a].update = (void **)0x0;
  MobyVTable[0x66a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x66b].idx = 0x66b;
  MobyVTable[0x66b].update = (void **)0x0;
  MobyVTable[0x66b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x66c].idx = 0x66c;
  MobyVTable[0x66c].update = (void **)0x0;
  MobyVTable[0x66c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x66d].idx = 0x66d;
  MobyVTable[0x66d].update = (void **)0x0;
  MobyVTable[0x66d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x66e].idx = 0x66e;
  MobyVTable[0x66e].update = (void **)0x0;
  MobyVTable[0x66e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x66f].idx = 0x66f;
  MobyVTable[0x66f].update = (void **)0x0;
  MobyVTable[0x66f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x670].idx = 0x670;
  MobyVTable[0x670].update = (void **)0x0;
  MobyVTable[0x670].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x671].idx = 0x671;
  MobyVTable[0x671].update = &PTR_UpdateMoby_1649_0070aca0;
  MobyVTable[0x671].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x672].idx = 0x672;
  MobyVTable[0x672].update = &PTR_UpdateMoby_1650_0070acc0;
  MobyVTable[0x672].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x673].idx = 0x673;
  MobyVTable[0x673].update = &PTR_UpdateMoby_1651_0070acc8;
  MobyVTable[0x673].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x674].idx = 0x674;
  MobyVTable[0x674].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x674].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x675].idx = 0x675;
  MobyVTable[0x675].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x675].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x676].idx = 0x676;
  MobyVTable[0x676].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x676].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x677].idx = 0x677;
  MobyVTable[0x677].update = &PTR_UpdateMoby_1655_0070acd0;
  MobyVTable[0x677].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x678].idx = 0x678;
  MobyVTable[0x678].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x678].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x679].idx = 0x679;
  MobyVTable[0x679].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x679].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x67a].idx = 0x67a;
  MobyVTable[0x67a].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x67a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x67b].idx = 0x67b;
  MobyVTable[0x67b].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x67b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x67c].idx = 0x67c;
  MobyVTable[0x67c].update = &PTR_UpdateMoby_1660_0070ace8;
  MobyVTable[0x67c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x67d].idx = 0x67d;
  MobyVTable[0x67d].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x67d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x67e].idx = 0x67e;
  MobyVTable[0x67e].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x67e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x67f].idx = 0x67f;
  MobyVTable[0x67f].update = &PTR_UpdateMoby__1663_1677__0070acf0;
  MobyVTable[0x67f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x680].idx = 0x680;
  MobyVTable[0x680].update = &PTR_UpdateMoby_1664_0070acf8;
  MobyVTable[0x680].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x681].idx = 0x681;
  MobyVTable[0x681].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x681].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x682].idx = 0x682;
  MobyVTable[0x682].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x682].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x683].idx = 0x683;
  MobyVTable[0x683].update = &PTR_UpdateMoby_a_lot_0_0070ad10;
  MobyVTable[0x683].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x684].idx = 0x684;
  MobyVTable[0x684].update = &PTR_UpdateMoby_a_lot_0_0070ad10;
  MobyVTable[0x684].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x685].idx = 0x685;
  MobyVTable[0x685].update = &PTR_UpdateMoby_a_lot_0_0070ad10;
  MobyVTable[0x685].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x686].idx = 0x686;
  MobyVTable[0x686].update = &PTR_UpdateMoby_a_lot_0_0070ad10;
  MobyVTable[0x686].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x687].idx = 0x687;
  MobyVTable[0x687].update = &PTR_UpdateMoby_a_lot_0_0070ad10;
  MobyVTable[0x687].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x688].idx = 0x688;
  MobyVTable[0x688].update = &PTR_UpdateMoby_1672_0070ad40;
  MobyVTable[0x688].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x689].idx = 0x689;
  MobyVTable[0x689].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x689].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x68a].idx = 0x68a;
  MobyVTable[0x68a].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x68a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x68b].idx = 0x68b;
  MobyVTable[0x68b].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x68b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x68c].idx = 0x68c;
  MobyVTable[0x68c].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x68c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x68d].idx = 0x68d;
  MobyVTable[0x68d].update = &PTR_UpdateMoby__1663_1677__0070acf0;
  MobyVTable[0x68d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x68e].idx = 0x68e;
  MobyVTable[0x68e].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x68e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x68f].idx = 0x68f;
  MobyVTable[0x68f].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x68f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x690].idx = 0x690;
  MobyVTable[0x690].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x690].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x691].idx = 0x691;
  MobyVTable[0x691].update = (void **)0x0;
  MobyVTable[0x691].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x692].idx = 0x692;
  MobyVTable[0x692].update = (void **)0x0;
  MobyVTable[0x692].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x693].idx = 0x693;
  MobyVTable[0x693].update = (void **)0x0;
  MobyVTable[0x693].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x694].idx = 0x694;
  MobyVTable[0x694].update = &PTR_UpdateMoby_1684_0070ad80;
  MobyVTable[0x694].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x695].idx = 0x695;
  MobyVTable[0x695].update = (void **)0x0;
  MobyVTable[0x695].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x696].idx = 0x696;
  MobyVTable[0x696].update = &PTR_UpdateMoby_1686_0070ad90;
  MobyVTable[0x696].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x697].idx = 0x697;
  MobyVTable[0x697].update = (void **)0x0;
  MobyVTable[0x697].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x698].idx = 0x698;
  MobyVTable[0x698].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x698].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x699].idx = 0x699;
  MobyVTable[0x699].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x699].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x69a].idx = 0x69a;
  MobyVTable[0x69a].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x69a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x69b].idx = 0x69b;
  MobyVTable[0x69b].update = (void **)0x0;
  MobyVTable[0x69b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x69c].idx = 0x69c;
  MobyVTable[0x69c].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x69c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x69d].idx = 0x69d;
  MobyVTable[0x69d].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x69d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x69e].idx = 0x69e;
  MobyVTable[0x69e].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x69e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x69f].idx = 0x69f;
  MobyVTable[0x69f].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x69f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a0].idx = 0x6a0;
  MobyVTable[0x6a0].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a1].idx = 0x6a1;
  MobyVTable[0x6a1].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a2].idx = 0x6a2;
  MobyVTable[0x6a2].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a3].idx = 0x6a3;
  MobyVTable[0x6a3].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a4].idx = 0x6a4;
  MobyVTable[0x6a4].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a5].idx = 0x6a5;
  MobyVTable[0x6a5].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a6].idx = 0x6a6;
  MobyVTable[0x6a6].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a7].idx = 0x6a7;
  MobyVTable[0x6a7].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a8].idx = 0x6a8;
  MobyVTable[0x6a8].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6a9].idx = 0x6a9;
  MobyVTable[0x6a9].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6a9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6aa].idx = 0x6aa;
  MobyVTable[0x6aa].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6aa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ab].idx = 0x6ab;
  MobyVTable[0x6ab].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6ab].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ac].idx = 0x6ac;
  MobyVTable[0x6ac].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6ac].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ad].idx = 0x6ad;
  MobyVTable[0x6ad].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6ad].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ae].idx = 0x6ae;
  MobyVTable[0x6ae].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6ae].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6af].idx = 0x6af;
  MobyVTable[0x6af].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6af].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b0].idx = 0x6b0;
  MobyVTable[0x6b0].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b1].idx = 0x6b1;
  MobyVTable[0x6b1].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b2].idx = 0x6b2;
  MobyVTable[0x6b2].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b3].idx = 0x6b3;
  MobyVTable[0x6b3].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b4].idx = 0x6b4;
  MobyVTable[0x6b4].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b5].idx = 0x6b5;
  MobyVTable[0x6b5].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b6].idx = 0x6b6;
  MobyVTable[0x6b6].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b7].idx = 0x6b7;
  MobyVTable[0x6b7].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b8].idx = 0x6b8;
  MobyVTable[0x6b8].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6b9].idx = 0x6b9;
  MobyVTable[0x6b9].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6b9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ba].idx = 0x6ba;
  MobyVTable[0x6ba].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6ba].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6bb].idx = 0x6bb;
  MobyVTable[0x6bb].update = (void **)0x0;
  MobyVTable[0x6bb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6bc].idx = 0x6bc;
  MobyVTable[0x6bc].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6bc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6bd].idx = 0x6bd;
  MobyVTable[0x6bd].update = (void **)0x0;
  MobyVTable[0x6bd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6be].idx = 0x6be;
  MobyVTable[0x6be].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6be].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6bf].idx = 0x6bf;
  MobyVTable[0x6bf].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6bf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c0].idx = 0x6c0;
  MobyVTable[0x6c0].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c1].idx = 0x6c1;
  MobyVTable[0x6c1].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c2].idx = 0x6c2;
  MobyVTable[0x6c2].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c3].idx = 0x6c3;
  MobyVTable[0x6c3].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c4].idx = 0x6c4;
  MobyVTable[0x6c4].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c5].idx = 0x6c5;
  MobyVTable[0x6c5].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c6].idx = 0x6c6;
  MobyVTable[0x6c6].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c7].idx = 0x6c7;
  MobyVTable[0x6c7].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c8].idx = 0x6c8;
  MobyVTable[0x6c8].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6c9].idx = 0x6c9;
  MobyVTable[0x6c9].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6c9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ca].idx = 0x6ca;
  MobyVTable[0x6ca].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6ca].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6cb].idx = 0x6cb;
  MobyVTable[0x6cb].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6cb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6cc].idx = 0x6cc;
  MobyVTable[0x6cc].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6cc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6cd].idx = 0x6cd;
  MobyVTable[0x6cd].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6cd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ce].idx = 0x6ce;
  MobyVTable[0x6ce].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6ce].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6cf].idx = 0x6cf;
  MobyVTable[0x6cf].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6cf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d0].idx = 0x6d0;
  MobyVTable[0x6d0].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6d0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d1].idx = 0x6d1;
  MobyVTable[0x6d1].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6d1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d2].idx = 0x6d2;
  MobyVTable[0x6d2].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6d2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d3].idx = 0x6d3;
  MobyVTable[0x6d3].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6d3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d4].idx = 0x6d4;
  MobyVTable[0x6d4].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6d4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d5].idx = 0x6d5;
  MobyVTable[0x6d5].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6d5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d6].idx = 0x6d6;
  MobyVTable[0x6d6].update = &PTR_UpdateMoby_1750_0070ae40;
  MobyVTable[0x6d6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d7].idx = 0x6d7;
  MobyVTable[0x6d7].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6d7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d8].idx = 0x6d8;
  MobyVTable[0x6d8].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6d8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6d9].idx = 0x6d9;
  MobyVTable[0x6d9].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6d9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6da].idx = 0x6da;
  MobyVTable[0x6da].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6da].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6db].idx = 0x6db;
  MobyVTable[0x6db].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6db].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6dc].idx = 0x6dc;
  MobyVTable[0x6dc].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6dc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6dd].idx = 0x6dd;
  MobyVTable[0x6dd].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6dd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6de].idx = 0x6de;
  MobyVTable[0x6de].update = (void **)0x0;
  MobyVTable[0x6de].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6df].idx = 0x6df;
  MobyVTable[0x6df].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6df].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e0].idx = 0x6e0;
  MobyVTable[0x6e0].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6e0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e1].idx = 0x6e1;
  MobyVTable[0x6e1].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6e1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e2].idx = 0x6e2;
  MobyVTable[0x6e2].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6e2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e3].idx = 0x6e3;
  MobyVTable[0x6e3].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6e3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e4].idx = 0x6e4;
  MobyVTable[0x6e4].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6e4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e5].idx = 0x6e5;
  MobyVTable[0x6e5].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6e5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e6].idx = 0x6e6;
  MobyVTable[0x6e6].update = &PTR_UpdateMoby_1766_0070ae88;
  MobyVTable[0x6e6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e7].idx = 0x6e7;
  MobyVTable[0x6e7].update = (void **)0x0;
  MobyVTable[0x6e7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e8].idx = 0x6e8;
  MobyVTable[0x6e8].update = (void **)0x0;
  MobyVTable[0x6e8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6e9].idx = 0x6e9;
  MobyVTable[0x6e9].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6e9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ea].idx = 0x6ea;
  MobyVTable[0x6ea].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6ea].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6eb].idx = 0x6eb;
  MobyVTable[0x6eb].update = (void **)0x0;
  MobyVTable[0x6eb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ec].idx = 0x6ec;
  MobyVTable[0x6ec].update = &PTR_UpdateMoby_1772_0070aee0;
  MobyVTable[0x6ec].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ed].idx = 0x6ed;
  MobyVTable[0x6ed].update = (void **)0x0;
  MobyVTable[0x6ed].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ee].idx = 0x6ee;
  MobyVTable[0x6ee].update = (void **)0x0;
  MobyVTable[0x6ee].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ef].idx = 0x6ef;
  MobyVTable[0x6ef].update = (void **)0x0;
  MobyVTable[0x6ef].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f0].idx = 0x6f0;
  MobyVTable[0x6f0].update = (void **)0x0;
  MobyVTable[0x6f0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f1].idx = 0x6f1;
  MobyVTable[0x6f1].update = (void **)0x0;
  MobyVTable[0x6f1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f2].idx = 0x6f2;
  MobyVTable[0x6f2].update = (void **)0x0;
  MobyVTable[0x6f2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f3].idx = 0x6f3;
  MobyVTable[0x6f3].update = (void **)0x0;
  MobyVTable[0x6f3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f4].idx = 0x6f4;
  MobyVTable[0x6f4].update = (void **)0x0;
  MobyVTable[0x6f4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f5].idx = 0x6f5;
  MobyVTable[0x6f5].update = &PTR_UpdateMoby_a_lot_23_0070cfd0;
  MobyVTable[0x6f5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f6].idx = 0x6f6;
  MobyVTable[0x6f6].update = &PTR_UpdateMoby_a_lot_23_0070cfd0;
  MobyVTable[0x6f6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f7].idx = 0x6f7;
  MobyVTable[0x6f7].update = (void **)0x0;
  MobyVTable[0x6f7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f8].idx = 0x6f8;
  MobyVTable[0x6f8].update = (void **)0x0;
  MobyVTable[0x6f8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6f9].idx = 0x6f9;
  MobyVTable[0x6f9].update = (void **)0x0;
  MobyVTable[0x6f9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6fa].idx = 0x6fa;
  MobyVTable[0x6fa].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6fa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6fb].idx = 0x6fb;
  MobyVTable[0x6fb].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6fb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6fc].idx = 0x6fc;
  MobyVTable[0x6fc].update = (void **)0x0;
  MobyVTable[0x6fc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6fd].idx = 0x6fd;
  MobyVTable[0x6fd].update = &PTR_UpdateMoby_1789_0070af00;
  MobyVTable[0x6fd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6fe].idx = 0x6fe;
  MobyVTable[0x6fe].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6fe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x6ff].idx = 0x6ff;
  MobyVTable[0x6ff].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x6ff].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x700].idx = 0x700;
  MobyVTable[0x700].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x700].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x701].idx = 0x701;
  MobyVTable[0x701].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x701].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x702].idx = 0x702;
  MobyVTable[0x702].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x702].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x703].idx = 0x703;
  MobyVTable[0x703].update = (void **)0x0;
  MobyVTable[0x703].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x704].idx = 0x704;
  MobyVTable[0x704].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x704].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x705].idx = 0x705;
  MobyVTable[0x705].update = (void **)0x0;
  MobyVTable[0x705].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x706].idx = 0x706;
  MobyVTable[0x706].update = (void **)0x0;
  MobyVTable[0x706].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x707].idx = 0x707;
  MobyVTable[0x707].update = &PTR_UpdateMoby_1799_0070af20;
  MobyVTable[0x707].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x708].idx = 0x708;
  MobyVTable[0x708].update = (void **)0x0;
  MobyVTable[0x708].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x709].idx = 0x709;
  MobyVTable[0x709].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x709].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x70a].idx = 0x70a;
  MobyVTable[0x70a].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x70a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x70b].idx = 0x70b;
  MobyVTable[0x70b].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x70b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x70c].idx = 0x70c;
  MobyVTable[0x70c].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x70c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x70d].idx = 0x70d;
  MobyVTable[0x70d].update = &PTR_UpdateMoby_1805_0070af70;
  MobyVTable[0x70d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x70e].idx = 0x70e;
  MobyVTable[0x70e].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0x70e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x70f].idx = 0x70f;
  MobyVTable[0x70f].update = &PTR_UpdateMoby_a_lot_1_0070e268;
  MobyVTable[0x70f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x710].idx = 0x710;
  MobyVTable[0x710].update = (void **)0x0;
  MobyVTable[0x710].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x711].idx = 0x711;
  MobyVTable[0x711].update = (void **)0x0;
  MobyVTable[0x711].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x712].idx = 0x712;
  MobyVTable[0x712].update = (void **)0x0;
  MobyVTable[0x712].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x713].idx = 0x713;
  MobyVTable[0x713].update = &PTR_UpdateMoby_1811_0070af98;
  MobyVTable[0x713].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x714].idx = 0x714;
  MobyVTable[0x714].update = &PTR_UpdateMoby_1812_0070afa0;
  MobyVTable[0x714].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x715].idx = 0x715;
  MobyVTable[0x715].update = &PTR_UpdateMoby_1813_0070afa8;
  MobyVTable[0x715].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x716].idx = 0x716;
  MobyVTable[0x716].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x716].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x717].idx = 0x717;
  MobyVTable[0x717].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x717].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x718].idx = 0x718;
  MobyVTable[0x718].update = &PTR_UpdateMoby_1816_0070afb0;
  MobyVTable[0x718].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x719].idx = 0x719;
  MobyVTable[0x719].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x719].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x71a].idx = 0x71a;
  MobyVTable[0x71a].update = &PTR_UpdateMoby_1818_0070aff8;
  MobyVTable[0x71a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x71b].idx = 0x71b;
  MobyVTable[0x71b].update = &PTR_UpdateMoby_1819_0070b008;
  MobyVTable[0x71b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x71c].idx = 0x71c;
  MobyVTable[0x71c].update = &PTR_UpdateMoby_1820_0070b010;
  MobyVTable[0x71c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x71d].idx = 0x71d;
  MobyVTable[0x71d].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x71d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x71e].idx = 0x71e;
  MobyVTable[0x71e].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x71e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x71f].idx = 0x71f;
  MobyVTable[0x71f].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x71f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x720].idx = 0x720;
  MobyVTable[0x720].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x720].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x721].idx = 0x721;
  MobyVTable[0x721].update = (void **)0x0;
  MobyVTable[0x721].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x722].idx = 0x722;
  MobyVTable[0x722].update = &PTR_UpdateMoby_1826_0070b018;
  MobyVTable[0x722].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x723].idx = 0x723;
  MobyVTable[0x723].update = &PTR_UpdateMoby_1827_0070b030;
  MobyVTable[0x723].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x724].idx = 0x724;
  MobyVTable[0x724].update = &PTR_UpdateMoby_1828_0070b038;
  MobyVTable[0x724].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x725].idx = 0x725;
  MobyVTable[0x725].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x725].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x726].idx = 0x726;
  MobyVTable[0x726].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x726].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x727].idx = 0x727;
  MobyVTable[0x727].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x727].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x728].idx = 0x728;
  MobyVTable[0x728].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x728].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x729].idx = 0x729;
  MobyVTable[0x729].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x729].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x72a].idx = 0x72a;
  MobyVTable[0x72a].update = &PTR_UpdateMoby_1834_0070b040;
  MobyVTable[0x72a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x72b].idx = 0x72b;
  MobyVTable[0x72b].update = &PTR_UpdateMoby_1835_0070b048;
  MobyVTable[0x72b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x72c].idx = 0x72c;
  MobyVTable[0x72c].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x72c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x72d].idx = 0x72d;
  MobyVTable[0x72d].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x72d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x72e].idx = 0x72e;
  MobyVTable[0x72e].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x72e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x72f].idx = 0x72f;
  MobyVTable[0x72f].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x72f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x730].idx = 0x730;
  MobyVTable[0x730].update = (void **)0x0;
  MobyVTable[0x730].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x731].idx = 0x731;
  MobyVTable[0x731].update = (void **)0x0;
  MobyVTable[0x731].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x732].idx = 0x732;
  MobyVTable[0x732].update = (void **)0x0;
  MobyVTable[0x732].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x733].idx = 0x733;
  MobyVTable[0x733].update = &PTR_UpdateMoby_1843_0070b070;
  MobyVTable[0x733].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x734].idx = 0x734;
  MobyVTable[0x734].update = &PTR_UpdateMoby_1844_0070b090;
  MobyVTable[0x734].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x735].idx = 0x735;
  MobyVTable[0x735].update = &PTR_UpdateMoby_1845_0070b098;
  MobyVTable[0x735].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x736].idx = 0x736;
  MobyVTable[0x736].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x736].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x737].idx = 0x737;
  MobyVTable[0x737].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x737].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x738].idx = 0x738;
  MobyVTable[0x738].update = &PTR_UpdateMoby_1848_0070b0b0;
  MobyVTable[0x738].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x739].idx = 0x739;
  MobyVTable[0x739].update = &PTR_UpdateMoby_1849_0070b0b8;
  MobyVTable[0x739].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x73a].idx = 0x73a;
  MobyVTable[0x73a].update = &PTR_UpdateMoby_1850_0070b108;
  MobyVTable[0x73a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x73b].idx = 0x73b;
  MobyVTable[0x73b].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x73b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x73c].idx = 0x73c;
  MobyVTable[0x73c].update = (void **)0x0;
  MobyVTable[0x73c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x73d].idx = 0x73d;
  MobyVTable[0x73d].update = (void **)0x0;
  MobyVTable[0x73d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x73e].idx = 0x73e;
  MobyVTable[0x73e].update = (void **)0x0;
  MobyVTable[0x73e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x73f].idx = 0x73f;
  MobyVTable[0x73f].update = &PTR_UpdateMoby_1855_0070b110;
  MobyVTable[0x73f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x740].idx = 0x740;
  MobyVTable[0x740].update = &PTR_UpdateMoby_1856_0070b118;
  MobyVTable[0x740].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x741].idx = 0x741;
  MobyVTable[0x741].update = &PTR_UpdateMoby_1857_0070b120;
  MobyVTable[0x741].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x742].idx = 0x742;
  MobyVTable[0x742].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x742].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x743].idx = 0x743;
  MobyVTable[0x743].update = &PTR_UpdateMoby_1859_0070b128;
  MobyVTable[0x743].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x744].idx = 0x744;
  MobyVTable[0x744].update = &PTR_UpdateMoby_1860_0070b1d8;
  MobyVTable[0x744].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x745].idx = 0x745;
  MobyVTable[0x745].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x745].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x746].idx = 0x746;
  MobyVTable[0x746].update = &PTR_UpdateMoby_1862_0070b1e0;
  MobyVTable[0x746].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x747].idx = 0x747;
  MobyVTable[0x747].update = &PTR_UpdateMoby_1863_0070b1e8;
  MobyVTable[0x747].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x748].idx = 0x748;
  MobyVTable[0x748].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x748].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x749].idx = 0x749;
  MobyVTable[0x749].update = (void **)0x0;
  MobyVTable[0x749].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x74a].idx = 0x74a;
  MobyVTable[0x74a].update = (void **)0x0;
  MobyVTable[0x74a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x74b].idx = 0x74b;
  MobyVTable[0x74b].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x74b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x74c].idx = 0x74c;
  MobyVTable[0x74c].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x74c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x74d].idx = 0x74d;
  MobyVTable[0x74d].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x74d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x74e].idx = 0x74e;
  MobyVTable[0x74e].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x74e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x74f].idx = 0x74f;
  MobyVTable[0x74f].update = (void **)0x0;
  MobyVTable[0x74f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x750].idx = 0x750;
  MobyVTable[0x750].update = (void **)0x0;
  MobyVTable[0x750].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x751].idx = 0x751;
  MobyVTable[0x751].update = &PTR_UpdateMoby_1873_0070b1f0;
  MobyVTable[0x751].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x752].idx = 0x752;
  MobyVTable[0x752].update = &PTR_UpdateMoby_1874_0070b1f8;
  MobyVTable[0x752].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x753].idx = 0x753;
  MobyVTable[0x753].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x753].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x754].idx = 0x754;
  MobyVTable[0x754].update = &PTR_UpdateMoby_1876_0070b200;
  MobyVTable[0x754].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x755].idx = 0x755;
  MobyVTable[0x755].update = &PTR_UpdateMoby_1877_0070b208;
  MobyVTable[0x755].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x756].idx = 0x756;
  MobyVTable[0x756].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x756].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x757].idx = 0x757;
  MobyVTable[0x757].update = &PTR_UpdateMoby_1879_0070b210;
  MobyVTable[0x757].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x758].idx = 0x758;
  MobyVTable[0x758].update = &PTR_UpdateMoby_1880_0070b230;
  MobyVTable[0x758].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x759].idx = 0x759;
  MobyVTable[0x759].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x759].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x75a].idx = 0x75a;
  MobyVTable[0x75a].update = &PTR_UpdateMoby_1882_0070b238;
  MobyVTable[0x75a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x75b].idx = 0x75b;
  MobyVTable[0x75b].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x75b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x75c].idx = 0x75c;
  MobyVTable[0x75c].update = (void **)0x0;
  MobyVTable[0x75c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x75d].idx = 0x75d;
  MobyVTable[0x75d].update = &PTR_UpdateMoby_1885_0070b258;
  MobyVTable[0x75d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x75e].idx = 0x75e;
  MobyVTable[0x75e].update = &PTR_UpdateMoby_1886_0070b278;
  MobyVTable[0x75e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x75f].idx = 0x75f;
  MobyVTable[0x75f].update = (void **)0x0;
  MobyVTable[0x75f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x760].idx = 0x760;
  MobyVTable[0x760].update = &PTR_UpdateMoby_1888_0070b280;
  MobyVTable[0x760].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x761].idx = 0x761;
  MobyVTable[0x761].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x761].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x762].idx = 0x762;
  MobyVTable[0x762].update = &PTR_UpdateMoby__1443_1890__0070a6b8;
  MobyVTable[0x762].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x763].idx = 0x763;
  MobyVTable[0x763].update = &PTR_UpdateMoby_1891_0070b2a0;
  MobyVTable[0x763].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x764].idx = 0x764;
  MobyVTable[0x764].update = (void **)0x0;
  MobyVTable[0x764].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x765].idx = 0x765;
  MobyVTable[0x765].update = (void **)0x0;
  MobyVTable[0x765].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x766].idx = 0x766;
  MobyVTable[0x766].update = (void **)0x0;
  MobyVTable[0x766].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x767].idx = 0x767;
  MobyVTable[0x767].update = (void **)0x0;
  MobyVTable[0x767].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x768].idx = 0x768;
  MobyVTable[0x768].update = (void **)0x0;
  MobyVTable[0x768].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x769].idx = 0x769;
  MobyVTable[0x769].update = (void **)0x0;
  MobyVTable[0x769].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x76a].idx = 0x76a;
  MobyVTable[0x76a].update = &PTR_UpdateMoby_1898_0070b2a8;
  MobyVTable[0x76a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x76b].idx = 0x76b;
  MobyVTable[0x76b].update = &PTR_UpdateMoby__1399_1451_1899__0070a310;
  MobyVTable[0x76b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x76c].idx = 0x76c;
  MobyVTable[0x76c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x76c].update = &PTR_UpdateMoby__203_1900__0070b718;
  MobyVTable[0x76d].idx = 0x76d;
  MobyVTable[0x76d].update = &PTR_UpdateMoby_1901_0070b318;
  MobyVTable[0x76d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x76e].idx = 0x76e;
  MobyVTable[0x76e].update = (void **)0x0;
  MobyVTable[0x76e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x76f].idx = 0x76f;
  MobyVTable[0x76f].update = &PTR_UpdateMoby_1903_0070b370;
  MobyVTable[0x76f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x770].idx = 0x770;
  MobyVTable[0x770].update = (void **)0x0;
  MobyVTable[0x770].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x771].idx = 0x771;
  MobyVTable[0x771].update = (void **)0x0;
  MobyVTable[0x771].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x772].idx = 0x772;
  MobyVTable[0x772].update = &PTR_UpdateMoby_1906_0070b390;
  MobyVTable[0x772].exit = &PTR_PTR_0071d3e8;
  MobyVTable[0x773].idx = 0x773;
  MobyVTable[0x773].update = &PTR_UpdateMoby_1907_0070b400;
  MobyVTable[0x773].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x774].idx = 0x774;
  MobyVTable[0x774].update = &PTR_UpdateMoby_1908_0070b418;
  MobyVTable[0x774].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x775].idx = 0x775;
  MobyVTable[0x775].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x775].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x776].idx = 0x776;
  MobyVTable[0x776].update = &PTR_UpdateMoby_1910_0070b440;
  MobyVTable[0x776].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x777].idx = 0x777;
  MobyVTable[0x777].update = &PTR_UpdateMoby_1911_0070b458;
  MobyVTable[0x777].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x778].idx = 0x778;
  MobyVTable[0x778].update = (void **)0x0;
  MobyVTable[0x778].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x779].idx = 0x779;
  MobyVTable[0x779].update = &PTR_UpdateMoby_1913_0070b470;
  MobyVTable[0x779].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x77a].idx = 0x77a;
  MobyVTable[0x77a].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x77a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x77b].idx = 0x77b;
  MobyVTable[0x77b].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x77b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x77c].idx = 0x77c;
  MobyVTable[0x77c].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x77c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x77d].idx = 0x77d;
  MobyVTable[0x77d].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x77d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x77e].idx = 0x77e;
  MobyVTable[0x77e].update = &PTR_UpdateMoby_1918_0070b488;
  MobyVTable[0x77e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x77f].idx = 0x77f;
  MobyVTable[0x77f].update = &PTR_UpdateMoby_1919_0070b4d8;
  MobyVTable[0x77f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x780].idx = 0x780;
  MobyVTable[0x780].update = (void **)0x0;
  MobyVTable[0x780].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x781].idx = 0x781;
  MobyVTable[0x781].update = &PTR_UpdateMoby_1921_0070b518;
  MobyVTable[0x781].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x782].idx = 0x782;
  MobyVTable[0x782].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x782].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x783].idx = 0x783;
  MobyVTable[0x783].update = &PTR_UpdateMoby_1923_0070b528;
  MobyVTable[0x783].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x784].idx = 0x784;
  MobyVTable[0x784].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x784].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x785].idx = 0x785;
  MobyVTable[0x785].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x785].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x786].idx = 0x786;
  MobyVTable[0x786].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x786].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x787].idx = 0x787;
  MobyVTable[0x787].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x787].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x788].idx = 0x788;
  MobyVTable[0x788].update = (void **)0x0;
  MobyVTable[0x788].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x789].idx = 0x789;
  MobyVTable[0x789].update = (void **)0x0;
  MobyVTable[0x789].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x78a].idx = 0x78a;
  MobyVTable[0x78a].update = (void **)0x0;
  MobyVTable[0x78a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x78b].idx = 0x78b;
  MobyVTable[0x78b].update = (void **)0x0;
  MobyVTable[0x78b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x78c].idx = 0x78c;
  MobyVTable[0x78c].update = (void **)0x0;
  MobyVTable[0x78c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x78d].idx = 0x78d;
  MobyVTable[0x78d].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x78d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x78e].idx = 0x78e;
  MobyVTable[0x78e].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x78e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x78f].idx = 0x78f;
  MobyVTable[0x78f].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x78f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x790].idx = 0x790;
  MobyVTable[0x790].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x790].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x791].idx = 0x791;
  MobyVTable[0x791].update = (void **)0x0;
  MobyVTable[0x791].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x792].idx = 0x792;
  MobyVTable[0x792].update = (void **)0x0;
  MobyVTable[0x792].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x793].idx = 0x793;
  MobyVTable[0x793].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x793].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x794].idx = 0x794;
  MobyVTable[0x794].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x794].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x795].idx = 0x795;
  MobyVTable[0x795].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x795].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x796].idx = 0x796;
  MobyVTable[0x796].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x796].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x797].idx = 0x797;
  MobyVTable[0x797].update = &PTR_UpdateMoby_1943_0070b608;
  MobyVTable[0x797].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x798].idx = 0x798;
  MobyVTable[0x798].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x798].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x799].idx = 0x799;
  MobyVTable[0x799].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x799].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x79a].idx = 0x79a;
  MobyVTable[0x79a].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x79a].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x79b].idx = 0x79b;
  MobyVTable[0x79b].update = &PTR_UpdateMoby_1947_0070b620;
  MobyVTable[0x79b].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x79c].idx = 0x79c;
  MobyVTable[0x79c].update = &PTR_UpdateMoby_1948_0070b638;
  MobyVTable[0x79c].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x79d].idx = 0x79d;
  MobyVTable[0x79d].update = (void **)0x0;
  MobyVTable[0x79d].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x79e].idx = 0x79e;
  MobyVTable[0x79e].update = (void **)0x0;
  MobyVTable[0x79e].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x79f].idx = 0x79f;
  MobyVTable[0x79f].update = (void **)0x0;
  MobyVTable[0x79f].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a0].idx = 0x7a0;
  MobyVTable[0x7a0].update = &PTR_UpdateMoby_1952_0070b650;
  MobyVTable[0x7a0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a1].idx = 0x7a1;
  MobyVTable[0x7a1].update = &PTR_UpdateMoby_1953_0070b668;
  MobyVTable[0x7a1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a2].idx = 0x7a2;
  MobyVTable[0x7a2].update = (void **)0x0;
  MobyVTable[0x7a2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a3].idx = 0x7a3;
  MobyVTable[0x7a3].update = (void **)0x0;
  MobyVTable[0x7a3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a4].idx = 0x7a4;
  MobyVTable[0x7a4].update = (void **)0x0;
  MobyVTable[0x7a4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a5].idx = 0x7a5;
  MobyVTable[0x7a5].update = (void **)0x0;
  MobyVTable[0x7a5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a6].idx = 0x7a6;
  MobyVTable[0x7a6].update = &PTR_UpdateMoby__196_197_1958__0070b670;
  MobyVTable[0x7a6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a7].idx = 0x7a7;
  MobyVTable[0x7a7].update = (void **)0x0;
  MobyVTable[0x7a7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a8].idx = 0x7a8;
  MobyVTable[0x7a8].update = (void **)0x0;
  MobyVTable[0x7a8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7a9].idx = 0x7a9;
  MobyVTable[0x7a9].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x7a9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7aa].idx = 0x7aa;
  MobyVTable[0x7aa].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x7aa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ab].idx = 0x7ab;
  MobyVTable[0x7ab].update = &PTR_UpdateMoby_a_lot_8_0070a868;
  MobyVTable[0x7ab].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ac].idx = 0x7ac;
  MobyVTable[0x7ac].update = (void **)0x0;
  MobyVTable[0x7ac].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ad].idx = 0x7ad;
  MobyVTable[0x7ad].update = (void **)0x0;
  MobyVTable[0x7ad].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ae].idx = 0x7ae;
  MobyVTable[0x7ae].update = (void **)0x0;
  MobyVTable[0x7ae].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7af].idx = 0x7af;
  MobyVTable[0x7af].update = (void **)0x0;
  MobyVTable[0x7af].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b0].idx = 0x7b0;
  MobyVTable[0x7b0].update = (void **)0x0;
  MobyVTable[0x7b0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b1].idx = 0x7b1;
  MobyVTable[0x7b1].update = (void **)0x0;
  MobyVTable[0x7b1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b2].idx = 0x7b2;
  MobyVTable[0x7b2].update = (void **)0x0;
  MobyVTable[0x7b2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b3].idx = 0x7b3;
  MobyVTable[0x7b3].update = (void **)0x0;
  MobyVTable[0x7b3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b4].idx = 0x7b4;
  MobyVTable[0x7b4].update = (void **)0x0;
  MobyVTable[0x7b4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b5].idx = 0x7b5;
  MobyVTable[0x7b5].update = &PTR_UpdateMoby__1213_1973__00709448;
  MobyVTable[0x7b5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b6].idx = 0x7b6;
  MobyVTable[0x7b6].update = (void **)0x0;
  MobyVTable[0x7b6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b7].idx = 0x7b7;
  MobyVTable[0x7b7].update = (void **)0x0;
  MobyVTable[0x7b7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b8].idx = 0x7b8;
  MobyVTable[0x7b8].update = (void **)0x0;
  MobyVTable[0x7b8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7b9].idx = 0x7b9;
  MobyVTable[0x7b9].update = (void **)0x0;
  MobyVTable[0x7b9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ba].idx = 0x7ba;
  MobyVTable[0x7ba].update = &PTR_UpdateMoby_1978_0070b680;
  MobyVTable[0x7ba].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7bb].idx = 0x7bb;
  MobyVTable[0x7bb].update = (void **)0x0;
  MobyVTable[0x7bb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7bc].idx = 0x7bc;
  MobyVTable[0x7bc].update = (void **)0x0;
  MobyVTable[0x7bc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7bd].idx = 0x7bd;
  MobyVTable[0x7bd].update = (void **)0x0;
  MobyVTable[0x7bd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7be].idx = 0x7be;
  MobyVTable[0x7be].update = (void **)0x0;
  MobyVTable[0x7be].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7bf].idx = 0x7bf;
  MobyVTable[0x7bf].update = (void **)0x0;
  MobyVTable[0x7bf].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c0].idx = 0x7c0;
  MobyVTable[0x7c0].update = (void **)0x0;
  MobyVTable[0x7c0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c1].idx = 0x7c1;
  MobyVTable[0x7c1].update = (void **)0x0;
  MobyVTable[0x7c1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c2].idx = 0x7c2;
  MobyVTable[0x7c2].update = (void **)0x0;
  MobyVTable[0x7c2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c3].idx = 0x7c3;
  MobyVTable[0x7c3].update = (void **)0x0;
  MobyVTable[0x7c3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c4].idx = 0x7c4;
  MobyVTable[0x7c4].update = (void **)0x0;
  MobyVTable[0x7c4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c5].idx = 0x7c5;
  MobyVTable[0x7c5].update = (void **)0x0;
  MobyVTable[0x7c5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c6].idx = 0x7c6;
  MobyVTable[0x7c6].update = (void **)0x0;
  MobyVTable[0x7c6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c7].idx = 0x7c7;
  MobyVTable[0x7c7].update = (void **)0x0;
  MobyVTable[0x7c7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c8].idx = 0x7c8;
  MobyVTable[0x7c8].update = (void **)0x0;
  MobyVTable[0x7c8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7c9].idx = 0x7c9;
  MobyVTable[0x7c9].update = (void **)0x0;
  MobyVTable[0x7c9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ca].idx = 0x7ca;
  MobyVTable[0x7ca].update = (void **)0x0;
  MobyVTable[0x7ca].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7cb].idx = 0x7cb;
  MobyVTable[0x7cb].update = (void **)0x0;
  MobyVTable[0x7cb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7cc].idx = 0x7cc;
  MobyVTable[0x7cc].update = (void **)0x0;
  MobyVTable[0x7cc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7cd].idx = 0x7cd;
  MobyVTable[0x7cd].update = (void **)0x0;
  MobyVTable[0x7cd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ce].idx = 0x7ce;
  MobyVTable[0x7ce].update = (void **)0x0;
  MobyVTable[0x7ce].exit = &PTR_PTR_0071d1f0;
  MobyVTable[1999].idx = 1999;
  MobyVTable[1999].update = (void **)0x0;
  MobyVTable[1999].exit = &PTR_PTR_0071d1f0;
  MobyVTable[2000].idx = 2000;
  MobyVTable[2000].update = &PTR_UpdateMoby_2000_0070b6b8;
  MobyVTable[2000].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d1].idx = 0x7d1;
  MobyVTable[0x7d1].update = (void **)0x0;
  MobyVTable[0x7d1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d2].idx = 0x7d2;
  MobyVTable[0x7d2].update = (void **)0x0;
  MobyVTable[0x7d2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d3].idx = 0x7d3;
  MobyVTable[0x7d3].update = (void **)0x0;
  MobyVTable[0x7d3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d4].idx = 0x7d4;
  MobyVTable[0x7d4].update = (void **)0x0;
  MobyVTable[0x7d4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d5].idx = 0x7d5;
  MobyVTable[0x7d5].update = (void **)0x0;
  MobyVTable[0x7d5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d6].idx = 0x7d6;
  MobyVTable[0x7d6].update = (void **)0x0;
  MobyVTable[0x7d6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d7].idx = 0x7d7;
  MobyVTable[0x7d7].update = (void **)0x0;
  MobyVTable[0x7d7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d8].idx = 0x7d8;
  MobyVTable[0x7d8].update = (void **)0x0;
  MobyVTable[0x7d8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7d9].idx = 0x7d9;
  MobyVTable[0x7d9].update = (void **)0x0;
  MobyVTable[0x7d9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7da].idx = 0x7da;
  MobyVTable[0x7da].update = (void **)0x0;
  MobyVTable[0x7da].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7db].idx = 0x7db;
  MobyVTable[0x7db].update = (void **)0x0;
  MobyVTable[0x7db].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7dc].idx = 0x7dc;
  MobyVTable[0x7dc].update = (void **)0x0;
  MobyVTable[0x7dc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7dd].idx = 0x7dd;
  MobyVTable[0x7dd].update = (void **)0x0;
  MobyVTable[0x7dd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7de].idx = 0x7de;
  MobyVTable[0x7de].update = (void **)0x0;
  MobyVTable[0x7de].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7df].idx = 0x7df;
  MobyVTable[0x7df].update = (void **)0x0;
  MobyVTable[0x7df].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e0].idx = 0x7e0;
  MobyVTable[0x7e0].update = (void **)0x0;
  MobyVTable[0x7e0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e1].idx = 0x7e1;
  MobyVTable[0x7e1].update = (void **)0x0;
  MobyVTable[0x7e1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e2].idx = 0x7e2;
  MobyVTable[0x7e2].update = (void **)0x0;
  MobyVTable[0x7e2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e3].idx = 0x7e3;
  MobyVTable[0x7e3].update = (void **)0x0;
  MobyVTable[0x7e3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e4].idx = 0x7e4;
  MobyVTable[0x7e4].update = (void **)0x0;
  MobyVTable[0x7e4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e5].idx = 0x7e5;
  MobyVTable[0x7e5].update = (void **)0x0;
  MobyVTable[0x7e5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e6].idx = 0x7e6;
  MobyVTable[0x7e6].update = (void **)0x0;
  MobyVTable[0x7e6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e7].idx = 0x7e7;
  MobyVTable[0x7e7].update = (void **)0x0;
  MobyVTable[0x7e7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e8].idx = 0x7e8;
  MobyVTable[0x7e8].update = (void **)0x0;
  MobyVTable[0x7e8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7e9].idx = 0x7e9;
  MobyVTable[0x7e9].update = (void **)0x0;
  MobyVTable[0x7e9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ea].idx = 0x7ea;
  MobyVTable[0x7ea].update = (void **)0x0;
  MobyVTable[0x7ea].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7eb].idx = 0x7eb;
  MobyVTable[0x7eb].update = (void **)0x0;
  MobyVTable[0x7eb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ec].idx = 0x7ec;
  MobyVTable[0x7ec].update = (void **)0x0;
  MobyVTable[0x7ec].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ed].idx = 0x7ed;
  MobyVTable[0x7ed].update = (void **)0x0;
  MobyVTable[0x7ed].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ee].idx = 0x7ee;
  MobyVTable[0x7ee].update = (void **)0x0;
  MobyVTable[0x7ee].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ef].idx = 0x7ef;
  MobyVTable[0x7ef].update = (void **)0x0;
  MobyVTable[0x7ef].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f0].idx = 0x7f0;
  MobyVTable[0x7f0].update = (void **)0x0;
  MobyVTable[0x7f0].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f1].idx = 0x7f1;
  MobyVTable[0x7f1].update = (void **)0x0;
  MobyVTable[0x7f1].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f2].idx = 0x7f2;
  MobyVTable[0x7f2].update = (void **)0x0;
  MobyVTable[0x7f2].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f3].idx = 0x7f3;
  MobyVTable[0x7f3].update = (void **)0x0;
  MobyVTable[0x7f3].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f4].idx = 0x7f4;
  MobyVTable[0x7f4].update = (void **)0x0;
  MobyVTable[0x7f4].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f5].idx = 0x7f5;
  MobyVTable[0x7f5].update = (void **)0x0;
  MobyVTable[0x7f5].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f6].idx = 0x7f6;
  MobyVTable[0x7f6].update = (void **)0x0;
  MobyVTable[0x7f6].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f7].idx = 0x7f7;
  MobyVTable[0x7f7].update = (void **)0x0;
  MobyVTable[0x7f7].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f8].idx = 0x7f8;
  MobyVTable[0x7f8].update = (void **)0x0;
  MobyVTable[0x7f8].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7f9].idx = 0x7f9;
  MobyVTable[0x7f9].update = (void **)0x0;
  MobyVTable[0x7f9].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7fa].idx = 0x7fa;
  MobyVTable[0x7fa].update = (void **)0x0;
  MobyVTable[0x7fa].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7fb].idx = 0x7fb;
  MobyVTable[0x7fb].update = (void **)0x0;
  MobyVTable[0x7fb].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7fc].idx = 0x7fc;
  MobyVTable[0x7fc].update = (void **)0x0;
  MobyVTable[0x7fc].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7fd].idx = 0x7fd;
  MobyVTable[0x7fd].update = (void **)0x0;
  MobyVTable[0x7fd].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7fe].idx = 0x7fe;
  MobyVTable[0x7fe].update = (void **)0x0;
  MobyVTable[0x7fe].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0x7ff].idx = 0x7ff;
  MobyVTable[0x7ff].update = (void **)0x0;
  MobyVTable[0x7ff].exit = &PTR_PTR_0071d1f0;
  MobyVTable[0xcc].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0xd5].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0xd6].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0xde].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0xdf].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0xe1].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0xe2].update = &PTR_UpdateMoby_a_lot_5_0070b730;
  MobyVTable[0x14a].update = &PTR_UpdateMoby_a_lot_10_0070d058;
  MobyVTable[0x31b].update = &PTR_UpdateMoby_a_lot_20_0070e788;
  MobyVTable[0x31d].update = &PTR_UpdateMoby_a_lot_10_0070d058;
  MobyVTable[0x34d].update = &PTR_UpdateMoby_a_lot_10_0070d058;
  return;
}



//==== 0002b898  ns=draw  size=0x174
// sig: undefined ???_Draw_SetupFogTable(void)
// callers(1): 000668d0 draw::UpdateViewContext
// callees(2): 00500250 fastfunc::FastMemSetZero; 00502758 fastfunc::FastDoubleToInt

void draw::____Draw_SetupFogTable(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = 1024.0;
  DAT_0092d460 = fastfunc::FastDoubleToInt((double)(DAT_0092d450 * 1024.0));
  DAT_0092d464 = fastfunc::FastDoubleToInt((double)(float)((double)DAT_0092d454 * dVar6));
  DAT_0092d468 = fastfunc::FastDoubleToInt((double)(float)((double)DAT_0092d458 * dVar6));
  dVar7 = (double)(DAT_0092d450 * ViewContext.fogMult);
  dVar5 = (double)(DAT_0092d454 * ViewContext.fogMult);
  dVar4 = (double)(DAT_0092d458 * ViewContext.fogMult);
  dVar3 = (double)(1.0 / (float)(dVar7 - dVar5));
  dVar2 = (double)(1.0 / (float)(dVar5 - dVar4));
  dVar1 = (double)(float)(dVar3 * dVar7);
  dVar6 = (double)(float)(dVar2 * dVar5);
  fastfunc::FastMemSetZero(&DAT_00735df0,0x40);
  DAT_00735dfc = (float)dVar7;
  DAT_00735e0c = (float)dVar5;
  DAT_00735df4 = (float)-dVar3;
  DAT_00735e04 = (float)-dVar2;
  DAT_00735df0 = (float)(dVar3 * 0.5);
  DAT_00735e00 = (float)(dVar2 * 0.5);
  DAT_00735e14 = (float)dVar1;
  DAT_00735e24 = (float)dVar6;
  DAT_00735e10 = (float)(dVar3 * dVar5) * -0.5;
  DAT_00735e20 = (float)(dVar2 * dVar4) * -0.5;
  return;
}



//==== 0002ba0c  ns=stub  size=0x4
// sig: undefined STUB_0002ba0c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002ba0c(void)

{
  return;
}



//==== 0002ba10  ns=draw  size=0xac
// sig: undefined ???_Unused_PatchTexIndices14(void)
// callers(0): 
// callees(0): 

void draw::____Unused_PatchTexIndices14(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  
  puVar7 = &DAT_0092da80;
  if (DAT_0092da80 != 0) {
    do {
      iVar5 = 0;
      puVar6 = (uint *)*puVar7;
      iVar2 = puVar7[1];
      if (0 < iVar2) {
        do {
          iVar4 = (uint)*(byte *)((int)puVar6 + 0x23) * 4;
          if (*(short *)(&DAT_0092d780 + iVar4) != 0) {
            *puVar6 = *puVar6 & 0xffffc000 | (int)*(short *)(&DAT_0092d780 + iVar4);
          }
          sVar1 = *(short *)(iVar4 + 0x92d782);
          if (sVar1 != 0) {
            puVar6[0xc] = puVar6[0xc] & 0xffffc000 | (int)sVar1;
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 0x14;
        } while (iVar5 < iVar2);
      }
      piVar3 = puVar7 + 2;
      puVar7 = puVar7 + 2;
    } while (*piVar3 != 0);
  }
  return;
}



//==== 0002babc  ns=stub  size=0x4
// sig: undefined STUB_0002babc(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002babc(void)

{
  return;
}



//==== 0002bac0  ns=stub  size=0x4
// sig: undefined STUB_0002bac0(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002bac0(void)

{
  return;
}



//==== 0002bac4  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA0(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA0(void)

{
  DAT_0071d45c = 0x10000;
  return;
}



//==== 0002bad8  ns=stub  size=0x4
// sig: undefined STUB_0002bad8(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002bad8(void)

{
  return;
}



//==== 0002badc  ns=camera0  size=0x2c
// sig: void Cam0_GetHeroPos(void * pCam, float * pos)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera0::Cam0_GetHeroPos(void *pCam,float *pos)

{
  *pos = g_heroPosition.x;
  pos[1] = g_heroPosition.y;
  pos[2] = g_heroPosition.z;
  pos[3] = g_heroPosition.w;
  return;
}



//==== 0002bb10  ns=camera0  size=0x174
// sig: undefined CollPrimSphere(void)
// callers(1): 00031128 camera0::UpdateBumpColl_0
// callees(1): 000558f8 camera::CamCollGrid_FindPrimAtPnt

bool camera0::CollPrimSphere(double param_1,float *param_2)

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
  Sphere *pSVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  
  iVar12 = camera::CamCollGrid_FindPrimAtPnt
                     (param_1,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 2));
  if (iVar12 != 0) {
    pSVar11 = Spheres + *(int *)(iVar12 + 0x14);
    fVar1 = (pSVar11->pos).y;
    fVar2 = (pSVar11->pos).x;
    fVar7 = param_2[1] - fVar1;
    fVar3 = (pSVar11->pos).z;
    fVar4 = (pSVar11->matrix).v0.y;
    fVar9 = *param_2 - fVar2;
    fVar5 = (pSVar11->matrix).v0.x;
    fVar8 = param_2[2] - fVar3;
    fVar6 = (pSVar11->matrix).v0.z;
    fVar10 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
    dVar13 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    CollOutput.ip.w = param_2[3];
    fVar4 = 1.0 / SQRT(fVar10);
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    dVar14 = (double)(-(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4);
    fVar4 = (float)((double)(float)(dVar13 + param_1) * dVar14);
    fVar5 = (float)(dVar13 * dVar14);
    CollOutput.push.x = fVar9 * fVar4 + fVar2;
    CollOutput.push.y = fVar7 * fVar4 + fVar1;
    CollOutput.push.z = fVar8 * fVar4 + fVar3;
    CollOutput.ip.x = fVar9 * fVar5 + fVar2;
    CollOutput.ip.y = fVar7 * fVar5 + fVar1;
    CollOutput.ip.z = fVar8 * fVar5 + fVar3;
    CollOutput.push.w = CollOutput.ip.w;
  }
  return iVar12 != 0;
}



//==== 0002bc88  ns=camera0  size=0x70
// sig: undefined IsPntInCollPrim(void)
// callers(0): 
// callees(1): 000558f8 camera::CamCollGrid_FindPrimAtPnt

bool camera0::IsPntInCollPrim(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = camera::CamCollGrid_FindPrimAtPnt(0,*param_1,param_1[1]);
  return iVar1 != 0;
}



//==== 0002bcf8  ns=stub  size=0x4
// sig: undefined STUB_0002bcf8(void)
// callers(3): 00037638 camera::camera10::UpdateCamera_10; 0003a5e0 camera::camera13::UpdateCamera_13; 0004ee20 camera::camera9::UpdateCamera_9
// callees(0): 

void stub::STUB_0002bcf8(void)

{
  return;
}



//==== 0002bd08  ns=camera0  size=0x1cc
// sig: int GetHeroGroundPos(float * pos, int useGroundDist)
// callers(2): 0002bed8 camera0::InitCamTarget_0; 0002d638 camera0::HandleSpecialTargetUpVec
// callees(1): 00057820 collproc::CollLine

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera0::GetHeroGroundPos(float *pos,int useGroundDist)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  if (DAT_00969fec == 0) {
    *pos = g_heroPosition.x;
    pos[1] = g_heroPosition.y;
    pos[2] = g_heroPosition.z;
    dVar7 = (double)g_heroPosition.w;
  }
  else {
    dVar4 = (double)g_heroPosition.x;
    dVar5 = (double)g_heroPosition.y;
    dVar6 = (double)g_heroPosition.z;
    dVar7 = (double)g_heroPosition.w;
    if ((0x41efffff <
         (int)(((uint)((int)hero::g_heroGroundDist >> 0x1f) >> 1 ^ (uint)hero::g_heroGroundDist) -
              ((int)hero::g_heroGroundDist >> 0x1f))) || (useGroundDist == 0)) {
      iVar3 = collproc::CollLine(local_50,local_40,0x12,g_heroMobyPtr,0);
      if (iVar3 != 0) {
        *pos = CollOutput.ip.x;
        pos[1] = CollOutput.ip.y;
        pos[2] = CollOutput.ip.z;
        pos[3] = CollOutput.ip.w;
        return 0;
      }
      *pos = (float)dVar4;
      pos[1] = (float)dVar5;
      pos[2] = (float)dVar6;
      pos[3] = (float)dVar7;
      return -1;
    }
    fVar1 = hero::g_heroGroundDist * (float)GameCamera.field17_0x1b4._16_4_;
    fVar2 = hero::g_heroGroundDist * (float)GameCamera.field17_0x1b4._20_4_;
    *pos = (float)(-(double)(hero::g_heroGroundDist * (float)GameCamera.field17_0x1b4._12_4_) +
                  dVar4);
    pos[1] = (float)(-(double)fVar1 + dVar5);
    pos[2] = (float)(-(double)fVar2 + dVar6);
  }
  pos[3] = (float)dVar7;
  return 1;
}



//==== 0002bed4  ns=stub  size=0x4
// sig: undefined STUB_0002bed4(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002bed4(void)

{
  return;
}



//==== 0002bed8  ns=camera0  size=0x180
// sig: undefined InitCamTarget_0(void)
// callers(1): 000309f0 camera0::Camera0_Init
// callees(1): 0002bd08 camera0::GetHeroGroundPos

void camera0::InitCamTarget_0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x70);
  GetHeroGroundPos(&local_20,0);
  uVar10 = GameCamera.field17_0x1b4._24_4_;
  fVar6 = local_18 * (float)GameCamera.field17_0x1b4._20_4_ +
          local_20 * (float)GameCamera.field17_0x1b4._12_4_ +
          local_1c * (float)GameCamera.field17_0x1b4._16_4_;
  fVar1 = *(float *)(iVar3 + 0xf0);
  fVar5 = (float)GameCamera.field17_0x1b4._12_4_ * fVar6;
  fVar4 = (float)GameCamera.field17_0x1b4._16_4_ * fVar6;
  fVar6 = (float)GameCamera.field17_0x1b4._20_4_ * fVar6;
  *(float *)(iVar3 + 0x40) = local_20 - fVar5;
  fVar7 = (local_20 - fVar5) + fVar5;
  fVar2 = *(float *)(iVar3 + 0x160);
  *(float *)(iVar3 + 0x44) = local_1c - fVar4;
  fVar8 = (local_1c - fVar4) + fVar4;
  *(undefined2 *)(iVar3 + 0x106) = 0;
  fVar9 = (local_18 - fVar6) + fVar6;
  *(float *)(iVar3 + 0x48) = local_18 - fVar6;
  *(float *)(iVar3 + 0x50) = fVar5;
  *(undefined4 *)(iVar3 + 0x4c) = local_14;
  *(float *)(iVar3 + 0x54) = fVar4;
  *(float *)(iVar3 + 0x58) = fVar6;
  *(undefined4 *)(iVar3 + 0x5c) = uVar10;
  *(float *)(iVar3 + 0x40) = fVar7;
  *(float *)(iVar3 + 0x44) = fVar8;
  *(float *)(iVar3 + 0x48) = fVar9;
  uVar12 = GameCamera.field17_0x1b4._8_4_;
  uVar11 = GameCamera.field17_0x1b4._4_4_;
  uVar10 = GameCamera.field17_0x1b4._0_4_;
  fVar6 = GameCamera.field16_0x1b0;
  fVar5 = GameCamera.field16_0x1b0 * fVar1 + fVar7;
  fVar4 = (float)GameCamera.field17_0x1b4._0_4_ * fVar1 + fVar8;
  fVar1 = (float)GameCamera.field17_0x1b4._4_4_ * fVar1 + fVar9;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  *(undefined4 *)(iVar3 + 0x8c) = uVar12;
  *(undefined4 *)(iVar3 + 0xdc) = uVar12;
  *(undefined4 *)(iVar3 + 0xe8) = 0;
  *(undefined4 *)(iVar3 + 0xe4) = 0;
  *(undefined4 *)(iVar3 + 0xe0) = 0;
  *(undefined1 *)(iVar3 + 0x104) = 0;
  *(undefined1 *)(iVar3 + 0x105) = 0;
  *(undefined4 *)(iVar3 + 0x108) = 0x3f800000;
  *(float *)(iVar3 + 0x80) = fVar5;
  *(float *)(iVar3 + 0x84) = fVar4;
  *(float *)(iVar3 + 0x88) = fVar1;
  *(float *)(iVar3 + 0xd0) = fVar5;
  *(float *)(iVar3 + 0xd4) = fVar4;
  *(float *)(iVar3 + 0xd8) = fVar1;
  *(float *)(iVar3 + 0xa0) = fVar7;
  *(float *)(iVar3 + 0xa4) = fVar8;
  *(float *)(iVar3 + 0xa8) = fVar9;
  *(undefined4 *)(iVar3 + 0xac) = local_14;
  *(undefined4 *)(iVar3 + 0xbc) = 0;
  *(undefined4 *)(iVar3 + 0xb8) = 0;
  *(undefined4 *)(iVar3 + 0xb4) = 0;
  *(undefined4 *)(iVar3 + 0xb0) = 0;
  *(undefined4 *)(iVar3 + 0xcc) = 0;
  *(undefined4 *)(iVar3 + 200) = 0;
  *(undefined4 *)(iVar3 + 0xc4) = 0;
  *(undefined4 *)(iVar3 + 0xc0) = 0;
  *(float *)(iVar3 + 0x90) = fVar6 * fVar2 + fVar7;
  *(float *)(iVar3 + 0x94) = (float)uVar10 * fVar2 + fVar8;
  *(float *)(iVar3 + 0x98) = (float)uVar11 * fVar2 + fVar9;
  *(undefined4 *)(iVar3 + 0x9c) = uVar12;
  return;
}



//==== 0002c058  ns=camera0  size=0xb0
// sig: undefined Cam_LOStoHero(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

ulonglong camera0::Cam_LOStoHero(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [16];
  
  uVar1 = collproc::CollLine(local_10,param_1 + 0x30,camera::CAMERA_COLL_FLAGS,g_heroMobyPtr,0);
  return (ulonglong)(LZCOUNT(uVar1) << 0x20) >> 0x25;
}



//==== 0002c118  ns=camera0  size=0x14c
// sig: undefined Cam_GetCurrHeroElv(void)
// callers(1): 0002d638 camera0::HandleSpecialTargetUpVec
// callees(0): 

double camera0::Cam_GetCurrHeroElv(double param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  fVar1 = (float)((double)(float)GameCamera.field17_0x1b4._0_4_ * param_1 + (double)g_heroPosition.y
                 ) - param_2[0xd];
  fVar2 = (float)((double)GameCamera.field16_0x1b0 * param_1 + (double)g_heroPosition.x) -
          param_2[0xc];
  fVar3 = (float)((double)(float)GameCamera.field17_0x1b4._4_4_ * param_1 + (double)g_heroPosition.z
                 ) - param_2[0xe];
  fVar4 = fVar3 * param_2[6] + fVar2 * param_2[4] + fVar1 * param_2[5];
  fVar1 = -(param_2[5] * fVar4 - fVar1);
  fVar3 = -(param_2[6] * fVar4 - fVar3);
  fVar2 = -(param_2[4] * fVar4 - fVar2);
  dVar8 = 0.0;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar4 != 0.0) {
    fVar4 = (fVar3 * param_2[2] + fVar2 * *param_2 + fVar1 * param_2[1]) / fVar4;
    fVar5 = fVar4;
    if (fVar4 - 0.0 < 0.0) {
      fVar5 = ABS(fVar4);
    }
    dVar7 = (double)(1.0 - fVar5);
    if ((double)(1.0 - fVar5) - 0.0 < 0.0) {
      dVar7 = dVar8;
    }
    fVar6 = 1.0;
    if (fVar4 - 0.0 < 0.0) {
      fVar6 = -1.0;
    }
    fVar4 = -((fVar5 * fVar5 * fVar5 * DAT_007358cc +
              fVar5 * fVar5 * DAT_007358c8 + fVar5 * DAT_007358c4 + DAT_007358c0) *
              (float)SQRT(dVar7) - 1.5707964);
    dVar8 = -(double)(fVar4 * fVar6 - 1.5707964);
    if ((fVar3 * param_2[10] + fVar2 * param_2[8] + fVar1 * param_2[9]) - 0.0 < 0.0) {
      dVar8 = (double)(fVar4 * fVar6 - 1.5707964);
    }
  }
  return dVar8;
}



//==== 0002c268  ns=camera0  size=0x28c
// sig: undefined ApplyHeroExternalMotion_0(void)
// callers(1): 00034c28 camera0::Camera0_Update
// callees(0): 

void camera0::ApplyHeroExternalMotion_0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  short sVar17;
  float *pfVar18;
  
  fVar16 = DAT_00969e2c;
  fVar15 = DAT_00969e28;
  fVar14 = DAT_00969e24;
  fVar13 = DAT_00969e20;
  fVar2 = DAT_00969e20 + *(float *)(param_1 + 0x30);
  pfVar1 = *(float **)(param_1 + 0x70);
  fVar4 = DAT_00969e24 + *(float *)(param_1 + 0x34);
  fVar3 = DAT_00969e28 + *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x3c) = DAT_00969e2c;
  *(float *)(param_1 + 0x30) = fVar2;
  *(float *)(param_1 + 0x34) = fVar4;
  *(float *)(param_1 + 0x38) = fVar3;
  pfVar1[0x2b] = fVar16;
  pfVar1[0x28] = fVar13 + pfVar1[0x28];
  pfVar1[0x29] = fVar14 + pfVar1[0x29];
  pfVar1[0x2a] = fVar15 + pfVar1[0x2a];
  pfVar1[0x10] = fVar13 + pfVar1[0x10];
  pfVar1[0x11] = fVar14 + pfVar1[0x11];
  pfVar1[0x12] = fVar15 + pfVar1[0x12];
  pfVar1[0x13] = fVar16;
  pfVar1[0x34] = fVar13 + pfVar1[0x34];
  pfVar1[0x35] = fVar14 + pfVar1[0x35];
  pfVar1[0x37] = fVar16;
  pfVar1[0x36] = fVar15 + pfVar1[0x36];
  sVar17 = g_onMagnerail;
  pfVar1[3] = fVar16;
  *pfVar1 = fVar13 + *pfVar1;
  pfVar1[1] = fVar14 + pfVar1[1];
  pfVar1[2] = fVar15 + pfVar1[2];
  pfVar18 = pfVar1;
  if ((sVar17 == 0) &&
     (((g_standingOnMoby == 0 || (*(short *)(g_standingOnMoby + 0xa6) != 0x22d)) ||
      ((int)(animationSpeed * 30.5) < (int)GameCamera.camTimer)))) {
    pfVar1[0x72] = DAT_00969e2c;
    pfVar18 = *(float **)(param_1 + 0x70);
  }
  if ((g_heroState == FLIP_JUMP) || (g_heroState == UNK_C)) {
    *(undefined2 *)(pfVar18 + 4) = 0;
    uVar12 = GameCamera.field17_0x1b4._128_4_;
    uVar11 = GameCamera.field17_0x1b4._104_4_;
    uVar10 = GameCamera.field17_0x1b4._100_4_;
    uVar9 = GameCamera.field17_0x1b4._96_4_;
    uVar8 = GameCamera.field17_0x1b4._92_4_;
    uVar7 = GameCamera.field17_0x1b4._20_4_;
    uVar6 = GameCamera.field17_0x1b4._16_4_;
    uVar5 = GameCamera.field17_0x1b4._12_4_;
    fVar3 = (float)GameCamera.field17_0x1b4._16_4_ * fVar14;
    fVar2 = (float)GameCamera.field17_0x1b4._12_4_ * fVar13;
    *(undefined4 *)(param_1 + 0x3c) = GameCamera.field17_0x1b4._104_4_;
    fVar2 = (float)uVar7 * fVar15 + fVar2 + fVar3;
    fVar4 = (float)uVar8 * (float)uVar12 - -((float)uVar5 * fVar2 - fVar13);
    fVar3 = (float)uVar9 * (float)uVar12 - -((float)uVar6 * fVar2 - fVar14);
    fVar2 = (float)uVar10 * (float)uVar12 - -((float)uVar7 * fVar2 - fVar15);
    *(float *)(param_1 + 0x30) = fVar4 + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = fVar3 + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x38) = fVar2 + *(float *)(param_1 + 0x38);
    pfVar1[0x2b] = (float)uVar11;
    pfVar1[0x13] = (float)uVar11;
    pfVar1[0x37] = (float)uVar11;
    pfVar1[0x28] = fVar4 + pfVar1[0x28];
    pfVar1[0x29] = fVar3 + pfVar1[0x29];
    pfVar1[0x2a] = fVar2 + pfVar1[0x2a];
    pfVar1[0x10] = fVar4 + pfVar1[0x10];
    pfVar1[0x11] = fVar3 + pfVar1[0x11];
    pfVar1[0x12] = fVar2 + pfVar1[0x12];
    pfVar1[0x34] = fVar4 + pfVar1[0x34];
    pfVar1[0x35] = fVar3 + pfVar1[0x35];
    pfVar1[0x36] = fVar2 + pfVar1[0x36];
    pfVar18[3] = (float)uVar11;
    *pfVar18 = fVar4 + *pfVar18;
    pfVar18[1] = fVar3 + pfVar18[1];
    pfVar18[2] = fVar2 + pfVar18[2];
  }
  return;
}



//==== 0002c4f4  ns=camera0  size=0x78
// sig: undefined GetWorldHeightAtHeroGndOfs(void)
// callers(1): 0002c578 camera0::HandleSpecialTargetActivation
// callees(0): 

void camera0::GetWorldHeightAtHeroGndOfs(double param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)GameCamera.field17_0x1b4._20_4_ *
          (float)((double)(float)GameCamera.field17_0x1b4._4_4_ * param_1 + (double)g_heroPosition.z
                 ) +
          (float)GameCamera.field17_0x1b4._12_4_ *
          (float)((double)GameCamera.field16_0x1b0 * param_1 + (double)g_heroPosition.x) +
          (float)GameCamera.field17_0x1b4._16_4_ *
          (float)((double)(float)GameCamera.field17_0x1b4._0_4_ * param_1 + (double)g_heroPosition.y
                 );
  *param_2 = (float)GameCamera.field17_0x1b4._12_4_ * fVar1;
  param_2[1] = (float)GameCamera.field17_0x1b4._16_4_ * fVar1;
  param_2[2] = (float)GameCamera.field17_0x1b4._20_4_ * fVar1;
  param_2[3] = (float)GameCamera.field17_0x1b4._24_4_;
  return;
}



//==== 0002c578  ns=camera0  size=0x10b0
// sig: undefined HandleSpecialTargetActivation(void)
// callers(1): 0002e3a0 camera0::UpdateCamTarget_0
// callees(3): 0002c4f4 camera0::GetWorldHeightAtHeroGndOfs; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

void camera0::HandleSpecialTargetActivation(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined2 uVar7;
  int iVar6;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar3 = param_1[0x1c];
  uVar8 = (ulonglong)uVar3;
  dVar10 = 1.0;
  cVar1 = *(char *)(uVar3 + 0x104);
  if (cVar1 == '\0') {
    if (hero::g_heroStateType == 2) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      *(undefined1 *)(uVar3 + 0x104) = 1;
      uVar7 = (undefined2)DAT_0071d51c;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      return;
    }
    if ((g_heroState == HELI_PACK_HIGH_JUMP) && (GameCamera.field19_0x25c._16_4_ == 0)) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      auVar11 = ZEXT416(0xffffffff);
      auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      *(undefined1 *)(uVar3 + 0x104) = 3;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd52c,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d52c + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
      *(undefined2 *)(uVar3 + 0x114) = uVar7;
      dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
      uVar7 = (undefined2)DAT_0071d530;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
      dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      fVar5 = DAT_0071d538;
      *(undefined1 *)(uVar3 + 0x117) = 0;
      *(float *)(uVar3 + 0x110) = fVar5;
      GetWorldHeightAtHeroGndOfs((double)DAT_0071d538,uVar8 + 0x70);
      *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
      *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
      *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
      *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
      return;
    }
    if ((g_heroState == UNK_C) && (GameCamera.field19_0x25c._16_4_ == 0)) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      *(undefined1 *)(uVar3 + 0x104) = 8;
      uVar7 = (undefined2)DAT_0071d540;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      return;
    }
    if ((g_heroState == FLIP_JUMP) && (GameCamera.field19_0x25c._16_4_ == 0)) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      *(undefined1 *)(uVar3 + 0x104) = 6;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd520,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d520 + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
      *(undefined2 *)(uVar3 + 0x114) = uVar7;
      dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
      uVar7 = (undefined2)DAT_0071d530;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
      dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      fVar5 = DAT_0071d528;
      *(undefined1 *)(uVar3 + 0x117) = 0;
      *(float *)(uVar3 + 0x110) = fVar5;
      GetWorldHeightAtHeroGndOfs((double)DAT_0071d528,uVar8 + 0x70);
      *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
      *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
      *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
      *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
      return;
    }
    if (((g_heroState == THRUSTER_PACK_HIGH_JUMP) || (g_heroState == DOUBLE_JUMP)) &&
       (GameCamera.field19_0x25c._16_4_ == 0)) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      auVar11 = ZEXT416(0xffffffff);
      auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      *(undefined1 *)(uVar3 + 0x104) = 5;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd53c,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d53c + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
      *(undefined2 *)(uVar3 + 0x114) = uVar7;
      dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
      uVar7 = (undefined2)DAT_0071d540;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
      dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      fVar5 = DAT_0071d548;
      *(undefined1 *)(uVar3 + 0x117) = 0;
      *(float *)(uVar3 + 0x110) = fVar5;
      GetWorldHeightAtHeroGndOfs((double)DAT_0071d548,uVar8 + 0x70);
      *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
      *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
      *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
      *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
      return;
    }
    if (hero::g_heroStateType != 4) {
      return;
    }
    if (GameCamera.field19_0x25c._16_4_ != 0) {
      return;
    }
    *(undefined1 *)(uVar3 + 0x105) = 0;
    *(undefined1 *)(uVar3 + 0x104) = 2;
    uVar7 = (undefined2)DAT_0071d518;
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if (((cVar1 != '\t') && (cVar1 != '\x01')) && (g_heroState == HYPER_STRIKE)) {
    *(char *)(uVar3 + 0x105) = cVar1;
    *(undefined1 *)(uVar3 + 0x104) = 9;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd54c,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d54c + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
    *(undefined2 *)(uVar3 + 0x114) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
    *(undefined4 *)(uVar3 + 0x108) = 0x3f800000;
    *(undefined2 *)(uVar3 + 0x106) = 0;
    *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
    fVar5 = DAT_0071d55c;
    *(undefined1 *)(uVar3 + 0x117) = 0;
    *(float *)(uVar3 + 0x110) = fVar5;
    GetWorldHeightAtHeroGndOfs((double)DAT_0071d55c,uVar8 + 0x70);
    *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
    *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
    *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
    *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
    return;
  }
  if (((cVar1 == '\x02') || (cVar1 == '\x01')) &&
     (hero::g_heroStateType != 2 && hero::g_heroStateType != 4)) {
    *(undefined1 *)(uVar3 + 0x104) = 0;
    *(undefined2 *)(uVar3 + 0x106) = 0;
    *(undefined4 *)(uVar3 + 0x108) = 0x3f800000;
    return;
  }
  if (cVar1 == '\a') {
    if (DAT_0096a0fe == 0) {
      *(undefined1 *)(uVar3 + 0x105) = 7;
      *(undefined1 *)(uVar3 + 0x104) = 6;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd520,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d520 + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
      *(undefined2 *)(uVar3 + 0x114) = uVar7;
      dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
      uVar7 = (undefined2)DAT_0071d530;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
      dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      fVar5 = DAT_0071d528;
      *(undefined1 *)(uVar3 + 0x117) = 0;
      *(float *)(uVar3 + 0x110) = fVar5;
      GetWorldHeightAtHeroGndOfs((double)DAT_0071d528,uVar8 + 0x70);
      *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
      *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
      *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
      *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
      return;
    }
    if (hero::g_heroStateType == 2) {
      *(undefined1 *)(uVar3 + 0x105) = 7;
      *(undefined1 *)(uVar3 + 0x104) = 1;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      return;
    }
  }
  if ((cVar1 == '\x04') && (hero::g_heroStateType != 4)) {
    if (hero::g_heroStateType == 2) {
      auVar11 = ZEXT416(0xffffffff);
      auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      *(undefined1 *)(uVar3 + 0x105) = 4;
      *(undefined1 *)(uVar3 + 0x104) = 1;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      return;
    }
    *(undefined1 *)(uVar3 + 0x105) = 4;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if ((cVar1 == '\x03') && (g_heroState == FLIP_JUMP)) {
    *(undefined1 *)(uVar3 + 0x105) = 3;
    *(undefined1 *)(uVar3 + 0x104) = 6;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd520,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d520 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
    *(undefined2 *)(uVar3 + 0x114) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
    uVar7 = (undefined2)DAT_0071d530;
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
    dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    fVar5 = DAT_0071d528;
    *(undefined1 *)(uVar3 + 0x117) = 0;
    *(float *)(uVar3 + 0x110) = fVar5;
    GetWorldHeightAtHeroGndOfs((double)DAT_0071d528,uVar8 + 0x70);
    *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
    *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
    *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
    *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
    return;
  }
  if ((cVar1 == '\x05') && (g_heroState == UNK_C)) {
    *(undefined1 *)(uVar3 + 0x105) = 5;
    *(undefined1 *)(uVar3 + 0x104) = 8;
    uVar7 = (undefined2)DAT_0071d540;
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if ((cVar1 == '\b') && (g_heroState != UNK_C)) {
    *(undefined1 *)(uVar3 + 0x105) = 8;
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd544,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d544 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if ((cVar1 == '\x06') && (g_heroState != FLIP_JUMP)) {
    *(undefined1 *)(uVar3 + 0x105) = 6;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if (((cVar1 == '\x03') || (cVar1 == '\x05')) && (hero::g_heroStateType != 4)) {
    *(char *)(uVar3 + 0x105) = cVar1;
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if (((cVar1 == '\t') &&
      ((hero::g_heroStateType == 2 || ((int)(animationSpeed * 55.5) <= (int)DAT_00969fec)))) ||
     ((cVar1 == '\n' &&
      ((hero::g_heroStateType == 2 || ((int)(animationSpeed * 55.5) <= (int)DAT_00969fec)))))) {
    *(char *)(uVar3 + 0x105) = cVar1;
    *(undefined1 *)(uVar3 + 0x104) = 1;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorAddFloatingPoint(auVar12,auVar15);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar14,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar12 = loadVectorLeftIndexed(0xffffffffffffd504,0x720000);
    uVar4 = param_1[0x1c];
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar12,0);
    auVar12 = vectorAddFloatingPoint(auVar12,auVar15);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x20,(ulonglong)uVar4);
    *(undefined2 *)(uVar4 + 0x20) = uVar7;
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    param_1[0x12] = param_1[2];
    param_1[0x13] = param_1[3];
    return;
  }
  if ((cVar1 == '\t') && (g_heroState != HYPER_STRIKE)) {
    *(undefined1 *)(uVar3 + 0x105) = 9;
    *(undefined1 *)(uVar3 + 0x104) = 10;
    uVar7 = (undefined2)DAT_0071d558;
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble(uVar7);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if ((cVar1 == '\n') && (iVar6 = fastfunc::FastDecTimerS16(uVar8 + 0x114), iVar6 != 0)) {
    uVar2 = *(undefined1 *)(uVar3 + 0x104);
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    *(undefined1 *)(uVar3 + 0x105) = uVar2;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if (*(char *)(uVar3 + 0x104) != '\x05') {
    return;
  }
  if (g_heroState != THRUSTER_PACK_FORWARD_JUMP) {
    return;
  }
  *(undefined1 *)(uVar3 + 0x105) = 5;
  *(undefined1 *)(uVar3 + 0x104) = 0;
  auVar11 = loadVectorLeftIndexed(0xffffffffffffd544,0x720000);
  auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
  auVar11 = loadVectorLeftIndexed(4,0x2c56c);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = vectorAddFloatingPoint
                      (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
  auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
  fVar5 = animationSpeed * ((float)(longlong)DAT_0071d544 + 0.5);
  auVar11 = vectorSplatHalfWord(auVar11,1);
  uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
  *(undefined2 *)(uVar3 + 0x106) = uVar7;
  dVar9 = (double)fastfunc::FastIntToDouble((short)(int)fVar5);
  *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
  return;
}



//==== 0002d638  ns=camera0  size=0x984
// sig: undefined HandleSpecialTargetUpVec(void)
// callers(1): 0002e3a0 camera0::UpdateCamTarget_0
// callees(5): 0002bd08 camera0::GetHeroGroundPos; 0002c118 camera0::Cam_GetCurrHeroElv; 00059e20 collproc::CollSphere; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

ulonglong camera0::HandleSpecialTargetUpVec(ulonglong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined2 uVar16;
  int iVar15;
  ulonglong uVar14;
  ulonglong uVar17;
  undefined8 in_LR;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
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
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  
  fVar3 = g_heroPosition.w;
  puVar12 = (undefined4 *)param_1;
  uVar9 = puVar12[0x1c];
  uVar17 = (ulonglong)uVar9;
  dVar22 = (double)g_heroPosition.x;
  dVar23 = (double)g_heroPosition.y;
  dVar24 = (double)g_heroPosition.z;
  dVar25 = (double)g_heroPosition.w;
  dVar20 = (double)(float)GameCamera.field17_0x1b4._12_4_;
  dVar19 = (double)(float)GameCamera.field17_0x1b4._16_4_;
  dVar18 = (double)(float)GameCamera.field17_0x1b4._20_4_;
  pfVar13 = (float *)param_2;
  if (g_heroState == DEATH_FALLING) {
    dVar18 = (double)(float)((double)*(float *)(uVar9 + 0x48) * dVar18 +
                            (double)(float)((double)*(float *)(uVar9 + 0x40) * dVar20 +
                                           (double)(float)((double)*(float *)(uVar9 + 0x44) * dVar19
                                                          )));
    *pfVar13 = (float)(dVar20 * dVar18);
    pfVar13[1] = (float)((double)(float)GameCamera.field17_0x1b4._16_4_ * dVar18);
    pfVar13[2] = (float)((double)(float)GameCamera.field17_0x1b4._20_4_ * dVar18);
    pfVar13[3] = (float)GameCamera.field17_0x1b4._24_4_;
    *(float *)(uVar9 + 0x40) = *(float *)(uVar9 + 0x40) - (float)(dVar20 * dVar18);
    *(float *)(uVar9 + 0x44) = *(float *)(uVar9 + 0x44) - pfVar13[1];
    *(float *)(uVar9 + 0x48) = *(float *)(uVar9 + 0x48) - pfVar13[2];
    fVar8 = (float)GameCamera.field17_0x1b4._20_4_ * *(float *)(uVar9 + 0xa8) +
            (float)GameCamera.field17_0x1b4._12_4_ * *(float *)(uVar9 + 0xa0) +
            (float)GameCamera.field17_0x1b4._16_4_ * *(float *)(uVar9 + 0xa4);
    fVar3 = (float)GameCamera.field17_0x1b4._12_4_ * fVar8;
    *pfVar13 = fVar3;
    pfVar13[1] = (float)GameCamera.field17_0x1b4._16_4_ * fVar8;
    pfVar13[2] = (float)GameCamera.field17_0x1b4._20_4_ * fVar8;
    pfVar13[3] = (float)GameCamera.field17_0x1b4._24_4_;
    *(float *)(uVar9 + 0x50) = fVar3;
    *(float *)(uVar9 + 0x54) = pfVar13[1];
    *(float *)(uVar9 + 0x58) = pfVar13[2];
    *(float *)(uVar9 + 0x5c) = pfVar13[3];
    if (*(char *)(uVar9 + 0x104) == '\v') {
      return param_1;
    }
    auVar26 = ZEXT416(0xffffffff);
    auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    *(undefined1 *)(uVar9 + 0x104) = 0xb;
    auVar26 = loadVectorLeftIndexed(0xffffffffffffd504,0x720000);
    puVar12[0x10] = *puVar12;
    auVar27 = vectorConvertFromSignedFixedPointWord(auVar26,0);
    puVar12[0x11] = puVar12[1];
    puVar12[0x12] = puVar12[2];
    puVar12[0x13] = puVar12[3];
    auVar26 = loadVectorLeftIndexed(in_LR,0x2d628);
    auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = vectorAddFloatingPoint
                        (auVar27,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
    auVar27 = vectorShiftLeftIntegerWord(auVar28,auVar28);
    auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    uVar9 = puVar12[0x1c];
    auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar27);
    auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
    auVar26 = vectorSplatHalfWord(auVar26,1);
    uVar16 = storeVectorElementHalfWordIndexed(auVar26,0x20,(ulonglong)uVar9);
    *(undefined2 *)(uVar9 + 0x20) = uVar16;
    return (ulonglong)uVar9;
  }
  bVar1 = *(byte *)(uVar9 + 0x104);
  if (bVar1 < 8) {
    if (bVar1 < 3) {
      if (1 < bVar1) {
        if (g_heroState == WALL_JUMP) {
          *(undefined1 *)(uVar9 + 0x104) = 1;
          uVar16 = (undefined2)DAT_0071d51c;
          *(undefined2 *)(uVar9 + 0x106) = uVar16;
          dVar18 = (double)fastfunc::FastIntToDouble(uVar16);
          *(float *)(uVar9 + 0x108) = (float)(1.0 / dVar18);
        }
        else if (((DAT_0096a0fe != 0) &&
                 (0x3e4ccccd <
                  (int)(((uint)((int)hero::g_heroGroundDist >> 0x1f) >> 1 ^ hero::g_heroGroundDist)
                       - ((int)hero::g_heroGroundDist >> 0x1f)))) &&
                ((dVar18 = (double)Cam_GetCurrHeroElv((double)*(float *)(uVar9 + 0xf0)),
                 dVar18 < (double)DAT_0071d4f0 || ((double)DAT_0071d4ec < dVar18)))) {
          *(undefined1 *)(uVar9 + 0x104) = 1;
          uVar16 = (undefined2)DAT_0071d51c;
          *(undefined2 *)(uVar9 + 0x106) = uVar16;
          dVar18 = (double)fastfunc::FastIntToDouble(uVar16);
          *(float *)(uVar9 + 0x108) = (float)(1.0 / dVar18);
        }
        if ((((DAT_00969fec == 0) || (GameCamera.field19_0x25c._16_4_ != 0)) ||
            ((DAT_0096a0fe != 0 && (DAT_0096a12c < 0x10)))) &&
           ((iVar15 = GetHeroGroundPos(&local_60,1), iVar15 == 1 &&
            (SQRT(*(float *)(uVar9 + 0x58) * *(float *)(uVar9 + 0x58) +
                  *(float *)(uVar9 + 0x50) * *(float *)(uVar9 + 0x50) +
                  *(float *)(uVar9 + 0x54) * *(float *)(uVar9 + 0x54)) <=
             local_58 * (float)GameCamera.field17_0x1b4._20_4_ +
             local_60 * (float)GameCamera.field17_0x1b4._12_4_ +
             local_5c * (float)GameCamera.field17_0x1b4._16_4_)))) {
          iVar15 = GetHeroGroundPos(&local_50,1);
          fVar8 = local_48 * (float)GameCamera.field17_0x1b4._20_4_ +
                  local_50 * (float)GameCamera.field17_0x1b4._12_4_ +
                  local_4c * (float)GameCamera.field17_0x1b4._16_4_;
          fVar3 = (float)GameCamera.field17_0x1b4._12_4_ * fVar8;
          *pfVar13 = fVar3;
          pfVar13[1] = (float)GameCamera.field17_0x1b4._16_4_ * fVar8;
          pfVar13[2] = (float)GameCamera.field17_0x1b4._20_4_ * fVar8;
          pfVar13[3] = (float)GameCamera.field17_0x1b4._24_4_;
          *(float *)(uVar9 + 0x40) = local_50 - fVar3;
          *(float *)(uVar9 + 0x44) = local_4c - pfVar13[1];
          *(float *)(uVar9 + 0x48) = local_48 - pfVar13[2];
          *(undefined4 *)(uVar9 + 0x4c) = local_44;
          return (longlong)iVar15;
        }
        dVar18 = (double)(float)GameCamera.field17_0x1b4._12_4_;
        if ((ABS((float)(dVar18 - (double)(float)GameCamera.field17_0x1b4._28_4_)) <= 0.001) &&
           ((ABS((float)GameCamera.field17_0x1b4._16_4_ - (float)GameCamera.field17_0x1b4._32_4_) <=
             0.001 && (ABS((float)GameCamera.field17_0x1b4._20_4_ -
                           (float)GameCamera.field17_0x1b4._36_4_) <= 0.001)))) {
          *pfVar13 = *(float *)(uVar9 + 0x50);
          pfVar13[1] = *(float *)(uVar9 + 0x54);
          pfVar13[2] = *(float *)(uVar9 + 0x58);
          pfVar13[3] = *(float *)(uVar9 + 0x5c);
          dVar18 = (double)(float)GameCamera.field17_0x1b4._16_4_;
          dVar19 = (double)(float)GameCamera.field17_0x1b4._12_4_;
          dVar21 = (double)(float)GameCamera.field17_0x1b4._20_4_;
          *(float *)(uVar9 + 0x4c) = (float)dVar25;
          dVar20 = (double)(float)(dVar24 * dVar21 +
                                  (double)(float)(dVar22 * dVar19 + (double)(float)(dVar23 * dVar18)
                                                 ));
          *(float *)(uVar9 + 0x40) = -(float)(dVar19 * dVar20 - dVar22);
          *(float *)(uVar9 + 0x44) = -(float)(dVar18 * dVar20 - dVar23);
          *(float *)(uVar9 + 0x48) = -(float)(dVar21 * dVar20 - dVar24);
          return ZEXT48(&DAT_0002d628);
        }
        dVar19 = (double)(float)(dVar24 * (double)(float)GameCamera.field17_0x1b4._20_4_ +
                                (double)(float)(dVar22 * dVar18 +
                                               (double)(float)(dVar23 * (double)(float)GameCamera.
                                                                                       field17_0x1b4
                                                                                       ._16_4_)));
        *pfVar13 = (float)(dVar18 * dVar19);
        pfVar13[1] = (float)((double)(float)GameCamera.field17_0x1b4._16_4_ * dVar19);
        pfVar13[2] = (float)((double)(float)GameCamera.field17_0x1b4._20_4_ * dVar19);
        pfVar13[3] = (float)GameCamera.field17_0x1b4._24_4_;
        *(float *)(uVar9 + 0x40) = (float)(dVar22 - (double)(float)(dVar18 * dVar19));
        *(float *)(uVar9 + 0x44) = (float)(dVar23 - (double)pfVar13[1]);
        fVar3 = pfVar13[2];
        *(float *)(uVar9 + 0x4c) = (float)dVar25;
        *(float *)(uVar9 + 0x48) = (float)(dVar24 - (double)fVar3);
        return ZEXT48(&DAT_0002d628);
      }
    }
    else if (bVar1 != 4) {
      auVar26 = ZEXT416(0xfffffff0);
      auVar27 = ZEXT416(0xffffffff);
      auVar28 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = loadVectorLeftIndexed(0x114,uVar17);
      auVar26 = vectorShiftRightAlgebraicWord
                          (auVar27,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
      auVar27 = loadVectorLeftIndexed(0x10c,uVar17);
      auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
      auVar29 = loadVectorLeftIndexed(0x60,uVar17);
      auVar30 = loadVectorLeftIndexed(0x70,uVar17);
      auVar31 = loadVectorLeftIndexed(100,uVar17);
      auVar32 = loadVectorLeftIndexed(0x74,uVar17);
      auVar33 = loadVectorLeftIndexed(0x68,uVar17);
      auVar29 = vectorSubtractFloatingPoint(auVar29,auVar30);
      auVar34 = loadVectorLeftIndexed(0x78,uVar17);
      auVar31 = vectorSubtractFloatingPoint(auVar31,auVar32);
      uVar4 = *(undefined4 *)(uVar9 + 0x6c);
      cVar2 = *(char *)(uVar9 + 0x117);
      auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar28);
      auVar27 = vectorSubtractFloatingPoint(auVar33,auVar34);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar26,auVar29,auVar30);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar26,auVar31,auVar32);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar34);
      auVar26 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar27 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x50,uVar17)
      ;
      *(undefined4 *)(uVar9 + 0x50 & 0xfffffffc) = uVar10;
      uVar10 = storeVectorElementWordIndexed
                         (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x54,uVar17)
      ;
      *(undefined4 *)(uVar9 + 0x54 & 0xfffffffc) = uVar10;
      uVar10 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x58,uVar17)
      ;
      *(undefined4 *)(uVar9 + 0x58 & 0xfffffffc) = uVar10;
      *(undefined4 *)(uVar9 + 0x5c) = uVar4;
      if (cVar2 == '\0') {
        iVar15 = collproc::CollSphere(0x3fc99999a0000000,param_1 + 0x30,&DAT_0002d628,0x12,0);
        auVar29 = loadVectorLeftIndexed(0x50,uVar17);
        if (iVar15 != 0) {
          auVar26 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = *(undefined4 *)(uVar9 + 0x54);
          uVar10 = *(undefined4 *)(uVar9 + 0x58);
          uVar11 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x70,
                              uVar17);
          *(undefined4 *)(uVar9 + 0x70 & 0xfffffffc) = uVar11;
          *(undefined4 *)(uVar9 + 0x74) = uVar4;
          *(undefined4 *)(uVar9 + 0x78) = uVar10;
          *(undefined4 *)(uVar9 + 0x7c) = *(undefined4 *)(uVar9 + 0x5c);
          *(undefined1 *)(uVar9 + 0x117) = 1;
        }
      }
      auVar26 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,param_2);
      *(undefined4 *)((uint)pfVar13 & 0xfffffffc) = uVar4;
      pfVar13[1] = *(float *)(uVar9 + 0x54);
      pfVar13[2] = *(float *)(uVar9 + 0x58);
      pfVar13[3] = *(float *)(uVar9 + 0x5c);
      dVar18 = (double)(float)GameCamera.field17_0x1b4._16_4_;
      dVar19 = (double)(float)GameCamera.field17_0x1b4._12_4_;
      dVar21 = (double)(float)GameCamera.field17_0x1b4._20_4_;
      *(float *)(uVar9 + 0x4c) = (float)dVar25;
      dVar20 = (double)(float)(dVar24 * dVar21 +
                              (double)(float)(dVar22 * dVar19 + (double)(float)(dVar23 * dVar18)));
      *(float *)(uVar9 + 0x40) = -(float)(dVar19 * dVar20 - dVar22);
      *(float *)(uVar9 + 0x44) = -(float)(dVar18 * dVar20 - dVar23);
      *(float *)(uVar9 + 0x48) = -(float)(dVar21 * dVar20 - dVar24);
      uVar14 = fastfunc::FastDecTimerS16(uVar17 + 0x114);
      if ((int)uVar14 == 0) {
        return uVar14;
      }
      if (*(char *)(uVar9 + 0x104) == '\t') {
        auVar26 = ZEXT416(0xffffffff);
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
        *(undefined1 *)(uVar9 + 0x104) = 10;
        auVar28 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        auVar26 = loadVectorLeftIndexed(0xffffffffffffd54c,0x720000);
        auVar27 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = loadVectorLeftIndexed(in_LR,0x2d628);
        auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar26 = vectorAddFloatingPoint
                            (auVar27,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
        fVar3 = *(float *)(uVar9 + 0x110);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar29,auVar26,auVar28);
        auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
        auVar26 = vectorSplatHalfWord(auVar26,1);
        uVar16 = storeVectorElementHalfWordIndexed(auVar26,0x114,uVar17);
        *(undefined2 *)(uVar9 + 0x114) = uVar16;
        *(float *)(uVar9 + 0x60) = *(float *)(uVar9 + 0x50);
        *(float *)(uVar9 + 100) = *(float *)(uVar9 + 0x54);
        *(float *)(uVar9 + 0x68) = *(float *)(uVar9 + 0x58);
        *(undefined4 *)(uVar9 + 0x6c) = *(undefined4 *)(uVar9 + 0x5c);
        uVar4 = GameCamera.field17_0x1b4._20_4_;
        fVar8 = (float)GameCamera.field17_0x1b4._12_4_ * fVar3;
        fVar5 = (float)GameCamera.field17_0x1b4._16_4_ * fVar3;
        *(undefined4 *)(uVar9 + 0x7c) = *(undefined4 *)(uVar9 + 0x5c);
        *(float *)(uVar9 + 0x70) = -(fVar8 - *(float *)(uVar9 + 0x50));
        *(float *)(uVar9 + 0x74) = -(fVar5 - *(float *)(uVar9 + 0x54));
        *(float *)(uVar9 + 0x78) = -((float)uVar4 * fVar3 - *(float *)(uVar9 + 0x58));
        return 0x114;
      }
      if (*(char *)(uVar9 + 0x104) == '\x06') {
        auVar26 = ZEXT416(0xffffffff);
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
        *(undefined1 *)(uVar9 + 0x104) = 7;
        auVar28 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        auVar26 = loadVectorLeftIndexed(0xffffffffffffd520,0x720000);
        auVar27 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = loadVectorLeftIndexed(in_LR,0x2d628);
        auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar26 = vectorAddFloatingPoint
                            (auVar27,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar29,auVar26,auVar28);
        auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
        auVar26 = vectorSplatHalfWord(auVar26,1);
        uVar16 = storeVectorElementHalfWordIndexed(auVar26,0x114,uVar17);
        *(undefined2 *)(uVar9 + 0x114) = uVar16;
        *(undefined4 *)(uVar9 + 0x70) = *(undefined4 *)(uVar9 + 0x60);
        *(undefined4 *)(uVar9 + 0x74) = *(undefined4 *)(uVar9 + 100);
        *(undefined4 *)(uVar9 + 0x78) = *(undefined4 *)(uVar9 + 0x68);
        *(undefined4 *)(uVar9 + 0x7c) = *(undefined4 *)(uVar9 + 0x6c);
        *(undefined4 *)(uVar9 + 0x60) = *(undefined4 *)(uVar9 + 0x50);
        *(undefined4 *)(uVar9 + 100) = *(undefined4 *)(uVar9 + 0x54);
        *(undefined4 *)(uVar9 + 0x68) = *(undefined4 *)(uVar9 + 0x58);
        *(undefined4 *)(uVar9 + 0x6c) = *(undefined4 *)(uVar9 + 0x5c);
        return 0x114;
      }
      *(undefined1 *)(uVar9 + 0x104) = 4;
      uVar16 = (undefined2)DAT_0071d534;
      *(undefined2 *)(uVar9 + 0x106) = uVar16;
      dVar18 = (double)fastfunc::FastIntToDouble(uVar16);
      *(float *)(uVar9 + 0x108) = (float)(1.0 / dVar18);
      return ZEXT48(&DAT_0002d628);
    }
  }
  else {
    if (bVar1 < 9) {
      *pfVar13 = *(float *)(uVar9 + 0x50);
      pfVar13[1] = *(float *)(uVar9 + 0x54);
      pfVar13[2] = *(float *)(uVar9 + 0x58);
      pfVar13[3] = *(float *)(uVar9 + 0x5c);
      dVar18 = (double)(float)GameCamera.field17_0x1b4._16_4_;
      dVar19 = (double)(float)GameCamera.field17_0x1b4._12_4_;
      dVar25 = (double)(float)GameCamera.field17_0x1b4._20_4_;
      *(float *)(uVar9 + 0x4c) = fVar3;
      dVar20 = (double)(float)(dVar24 * dVar25 +
                              (double)(float)(dVar22 * dVar19 + (double)(float)(dVar23 * dVar18)));
      *(float *)(uVar9 + 0x40) = -(float)(dVar19 * dVar20 - dVar22);
      *(float *)(uVar9 + 0x44) = -(float)(dVar18 * dVar20 - dVar23);
      *(float *)(uVar9 + 0x48) = -(float)(dVar25 * dVar20 - dVar24);
      return param_1;
    }
    if (bVar1 < 0xb) {
      dVar18 = (double)(float)(dVar24 * dVar18 +
                              (double)(float)(dVar22 * dVar20 + (double)(float)(dVar23 * dVar19)));
      *pfVar13 = (float)(dVar20 * dVar18);
      pfVar13[1] = (float)((double)(float)GameCamera.field17_0x1b4._16_4_ * dVar18);
      pfVar13[2] = (float)((double)(float)GameCamera.field17_0x1b4._20_4_ * dVar18);
      pfVar13[3] = (float)GameCamera.field17_0x1b4._24_4_;
      *(float *)(uVar9 + 0x40) = (float)(dVar22 - (double)(float)(dVar20 * dVar18));
      fVar8 = *(float *)(uVar9 + 0x60);
      fVar5 = *(float *)(uVar9 + 100);
      fVar6 = *(float *)(uVar9 + 0x68);
      *(float *)(uVar9 + 0x44) = (float)(dVar23 - (double)pfVar13[1]);
      fVar7 = pfVar13[2];
      *(float *)(uVar9 + 0x4c) = fVar3;
      *(float *)(uVar9 + 0x48) = (float)(dVar24 - (double)fVar7);
      fVar3 = DAT_0071d560;
      pfVar13[3] = *(float *)(uVar9 + 0x6c);
      *pfVar13 = fVar3 * (fVar8 - *pfVar13) + *pfVar13;
      pfVar13[1] = fVar3 * (fVar5 - pfVar13[1]) + pfVar13[1];
      pfVar13[2] = fVar3 * (fVar6 - pfVar13[2]) + pfVar13[2];
      return ZEXT48(&DAT_00720000);
    }
  }
  dVar18 = (double)(float)(dVar24 * dVar18 +
                          (double)(float)(dVar22 * dVar20 + (double)(float)(dVar23 * dVar19)));
  *pfVar13 = (float)(dVar20 * dVar18);
  pfVar13[1] = (float)((double)(float)GameCamera.field17_0x1b4._16_4_ * dVar18);
  pfVar13[2] = (float)((double)(float)GameCamera.field17_0x1b4._20_4_ * dVar18);
  pfVar13[3] = (float)GameCamera.field17_0x1b4._24_4_;
  *(float *)(uVar9 + 0x40) = (float)(dVar22 - (double)(float)(dVar20 * dVar18));
  *(float *)(uVar9 + 0x44) = (float)(dVar23 - (double)pfVar13[1]);
  fVar8 = pfVar13[2];
  *(float *)(uVar9 + 0x4c) = fVar3;
  *(float *)(uVar9 + 0x48) = (float)(dVar24 - (double)fVar8);
  return param_1;
}



//==== 0002dfbc  ns=camera0  size=0xd8
// sig: void InterpPitchTarget(float gain, float damp, float maxv, float * speed, float * cur, float * targ)
// callers(0): 
// callees(1): 000501e8 camera::Cam_InterpValues

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera0::InterpPitchTarget
               (float gain,float damp,float maxv,float *speed,float *cur,float *targ)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
  dVar3 = (double)maxv;
  dVar1 = (double)gain;
  dVar2 = (double)damp;
  fVar4 = camera::Cam_InterpValues(*cur,*targ,gain,damp,maxv,speed);
  *cur = fVar4;
  fVar4 = camera::Cam_InterpValues(cur[1],targ[1],(float)dVar1,(float)dVar2,(float)dVar3,speed);
  cur[1] = fVar4;
  fVar4 = camera::Cam_InterpValues(cur[2],targ[2],(float)dVar1,(float)dVar2,(float)dVar3,speed);
  cur[2] = fVar4;
  return;
}



//==== 0002e094  ns=camera0  size=0x130
// sig: int GetIdealPitchTarget(void * pCam, float * targOfs, float * ideal, int state)
// callers(1): 0002e1c8 camera0::HandleSpecialPitchTarget
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera0::GetIdealPitchTarget(void *pCam,float *targOfs,float *ideal,int state)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)pCam + 0x70);
  if (state < 3) {
    if (state == 1) {
      fVar1 = *targOfs + g_heroPosition.x;
      fVar2 = targOfs[1] + g_heroPosition.y;
      fVar3 = targOfs[2] + g_heroPosition.z;
      ideal[3] = targOfs[3];
      *ideal = fVar1;
      ideal[1] = fVar2;
      ideal[2] = fVar3;
      return 1;
    }
  }
  else {
    if (state < 6) {
      fVar1 = targOfs[1];
      fVar2 = targOfs[2];
      fVar3 = targOfs[3];
      *ideal = *targOfs + *(float *)(iVar4 + 0x40);
      ideal[1] = fVar1 + *(float *)(iVar4 + 0x44);
      fVar1 = *(float *)(iVar4 + 0x48);
      ideal[3] = fVar3;
      ideal[2] = fVar2 + fVar1;
      return 0;
    }
    if (state < 8) {
      fVar1 = targOfs[1];
      fVar2 = targOfs[2];
      fVar3 = targOfs[3];
      *ideal = *targOfs + *(float *)(iVar4 + 0x40);
      ideal[1] = fVar1 + *(float *)(iVar4 + 0x44);
      fVar1 = *(float *)(iVar4 + 0x48);
      ideal[3] = fVar3;
      ideal[2] = fVar2 + fVar1;
      return 0;
    }
  }
  fVar1 = targOfs[1];
  fVar2 = targOfs[2];
  fVar3 = targOfs[3];
  *ideal = *targOfs + *(float *)(iVar4 + 0x40);
  ideal[1] = fVar1 + *(float *)(iVar4 + 0x44);
  fVar1 = *(float *)(iVar4 + 0x48);
  ideal[3] = fVar3;
  ideal[2] = fVar2 + fVar1;
  return 1;
}



//==== 0002e1c8  ns=camera0  size=0x18c
// sig: undefined HandleSpecialPitchTarget(void)
// callers(1): 0002e3a0 camera0::UpdateCamTarget_0
// callees(3): 0002e094 camera0::GetIdealPitchTarget; 000501e8 camera::Cam_InterpValues; 004fffb4 fastfunc::FastDecTimerS16

void camera0::HandleSpecialPitchTarget(void *param_1,float *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *speed;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float local_50;
  float local_4c;
  float local_48;
  longlong local_40;
  
  iVar2 = *(int *)((int)param_1 + 0x70);
  iVar3 = fastfunc::FastDecTimerS16(iVar2 + 0x106);
  if (iVar3 != 0) {
    *(byte *)(iVar2 + 0x105) = *(byte *)(iVar2 + 0x104);
  }
  local_40 = (longlong)(int)*(short *)(iVar2 + 0x106);
  dVar6 = (double)((float)local_40 * *(float *)(iVar2 + 0x108));
  GetIdealPitchTarget(param_1,param_2,&local_50,(uint)*(byte *)(iVar2 + 0x104));
  cVar1 = *(char *)(iVar2 + 0x104);
  dVar4 = (double)DAT_0071d50c;
  dVar5 = (double)DAT_0071d508;
  if ((((cVar1 == '\x03') || (cVar1 == '\x05')) || (cVar1 == '\x06')) ||
     ((cVar1 == '\a' || (cVar1 == '\x01')))) {
    dVar5 = (double)(float)((double)(float)(dVar5 - (double)DAT_0071d510) * dVar6 +
                           (double)DAT_0071d510);
    dVar4 = (double)(float)((double)(float)(dVar4 - (double)DAT_0071d514) * dVar6 +
                           (double)DAT_0071d514);
  }
  speed = (float *)&DAT_0002e1c4;
  dVar6 = 0.0;
  fVar7 = camera::Cam_InterpValues
                    (*(float *)(iVar2 + 0xd0),local_50,(float)dVar5,(float)dVar4,0.0,
                     (float *)&DAT_0002e1c4);
  *(float *)(iVar2 + 0xd0) = fVar7;
  fVar7 = camera::Cam_InterpValues
                    (*(float *)(iVar2 + 0xd4),local_4c,(float)dVar5,(float)dVar4,(float)dVar6,speed)
  ;
  *(float *)(iVar2 + 0xd4) = fVar7;
  fVar7 = camera::Cam_InterpValues
                    (*(float *)(iVar2 + 0xd8),local_48,(float)dVar5,(float)dVar4,(float)dVar6,speed)
  ;
  *(float *)(iVar2 + 0xd8) = fVar7;
  return;
}



//==== 0002e354  ns=camera0  size=0x30
// sig: undefined Cam0_SetCamHeight(void)
// callers(9): 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00044598 camera::camera22::Cam22_ModifyFollowCam; 00044c00 camera::camera23::Cam23_ModifyFollowCam; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 002737b8 mobyupdate_helpers::M1422_002737b8; 00428570 mobyupdate_helpers::M701_00428570; 00428698 mobyupdate_unsorted::UpdateMoby_701
// callees(0): 

void camera0::Cam0_SetCamHeight(double param_1,double param_2)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined2 *)(iVar1 + 0x16e) = 1;
    *(float *)(iVar1 + 0x17c) = (float)param_1;
    *(float *)(iVar1 + 0x184) = (float)param_2;
  }
  return;
}



//==== 0002e3a0  ns=camera0  size=0x9d8
// sig: undefined UpdateCamTarget_0(void)
// callers(1): 00034c28 camera0::Camera0_Update
// callees(7): 0002c578 camera0::HandleSpecialTargetActivation; 0002d638 camera0::HandleSpecialTargetUpVec; 0002e1c8 camera0::HandleSpecialPitchTarget; 000501e8 camera::Cam_InterpValues; 00057820 collproc::CollLine; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

void camera0::UpdateCamTarget_0(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined2 uVar3;
  float fVar4;
  undefined4 uVar5;
  float *speed;
  int iVar6;
  short sVar7;
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
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [4];
  float local_ac;
  float local_a8;
  
  uVar2 = *(uint *)(param_1 + 0x70);
  dVar22 = (double)g_heroPosition.x;
  dVar21 = (double)g_heroPosition.y;
  dVar19 = (double)g_heroPosition.z;
  dVar17 = (double)g_heroPosition.w;
  HandleSpecialTargetActivation(param_1);
  speed = (float *)HandleSpecialTargetUpVec(param_1,&local_e0);
  *(float *)(uVar2 + 0x50) = local_e0;
  *(undefined4 *)(uVar2 + 0x54) = local_dc;
  *(undefined4 *)(uVar2 + 0x58) = local_d8;
  *(undefined4 *)(uVar2 + 0x5c) = local_d4;
  dVar15 = 0.0;
  dVar14 = (double)*(float *)(uVar2 + 0xac);
  dVar8 = (double)(float)((double)(float)GameCamera.field17_0x1b4._20_4_ *
                          (double)*(float *)(uVar2 + 0xa8) +
                         (double)(float)((double)(float)GameCamera.field17_0x1b4._12_4_ *
                                         (double)*(float *)(uVar2 + 0xa0) +
                                        (double)(float)((double)(float)GameCamera.field17_0x1b4.
                                                                       _16_4_ *
                                                       (double)*(float *)(uVar2 + 0xa4))));
  fVar26 = (float)((double)(float)GameCamera.field17_0x1b4._12_4_ * dVar8);
  dVar13 = (double)(float)((double)(float)GameCamera.field17_0x1b4._16_4_ * dVar8);
  dVar12 = (double)(float)((double)(float)GameCamera.field17_0x1b4._20_4_ * dVar8);
  dVar11 = (double)(float)((double)*(float *)(uVar2 + 0xa0) - (double)fVar26);
  dVar10 = (double)(float)((double)*(float *)(uVar2 + 0xa4) - dVar13);
  dVar9 = (double)(float)((double)*(float *)(uVar2 + 0xa8) - dVar12);
  fVar26 = camera::Cam_InterpValues
                     (fVar26,local_e0,*(float *)(uVar2 + 0x124),*(float *)(uVar2 + 0x128),0.0,speed)
  ;
  dVar8 = (double)fVar26;
  fVar26 = camera::Cam_InterpValues
                     ((float)dVar13,*(float *)(uVar2 + 0x54),*(float *)(uVar2 + 0x124),
                      *(float *)(uVar2 + 0x128),(float)dVar15,speed);
  dVar13 = (double)fVar26;
  fVar26 = camera::Cam_InterpValues
                     ((float)dVar12,*(float *)(uVar2 + 0x58),*(float *)(uVar2 + 0x124),
                      *(float *)(uVar2 + 0x128),(float)dVar15,speed);
  dVar12 = (double)fVar26;
  fVar26 = camera::Cam_InterpValues
                     ((float)dVar11,*(float *)(uVar2 + 0x40),*(float *)(uVar2 + 0x11c),
                      *(float *)(uVar2 + 0x120),(float)dVar15,speed);
  dVar11 = (double)fVar26;
  fVar26 = camera::Cam_InterpValues
                     ((float)dVar10,*(float *)(uVar2 + 0x44),*(float *)(uVar2 + 0x11c),
                      *(float *)(uVar2 + 0x120),(float)dVar15,speed);
  dVar10 = (double)fVar26;
  fVar27 = camera::Cam_InterpValues
                     ((float)dVar9,*(float *)(uVar2 + 0x48),*(float *)(uVar2 + 0x11c),
                      *(float *)(uVar2 + 0x120),(float)dVar15,speed);
  *(float *)(uVar2 + 0xac) = (float)dVar14;
  fVar26 = *(float *)(uVar2 + 0xf0);
  *(float *)(uVar2 + 0xa8) = (float)((double)fVar27 + dVar12);
  *(float *)(uVar2 + 0x40) = *(float *)(uVar2 + 0x40) + *(float *)(uVar2 + 0x50);
  *(float *)(uVar2 + 0xa0) = (float)(dVar11 + dVar8);
  *(float *)(uVar2 + 0xa4) = (float)(dVar10 + dVar13);
  *(float *)(uVar2 + 0x44) = *(float *)(uVar2 + 0x44) + *(float *)(uVar2 + 0x54);
  *(float *)(uVar2 + 0x48) = *(float *)(uVar2 + 0x48) + *(float *)(uVar2 + 0x58);
  uVar5 = GameCamera.field17_0x1b4._8_4_;
  fVar27 = GameCamera.field16_0x1b0 * fVar26;
  fVar4 = (float)GameCamera.field17_0x1b4._0_4_ * fVar26;
  fVar26 = (float)GameCamera.field17_0x1b4._4_4_ * fVar26;
  if (*(char *)(uVar2 + 0x116) == '\0') {
    fastfunc::FastDecTimerS16((ulonglong)uVar2 + 0x118);
    if (*(short *)(uVar2 + 0x118) < 0) {
      *(undefined2 *)(uVar2 + 0x118) = 0;
    }
    dVar8 = (double)fastfunc::FastIntToDouble
                              ((int)(animationSpeed * ((float)(longlong)DAT_0071d500 + 0.5)));
    fVar1 = (float)((double)(longlong)(int)*(short *)(uVar2 + 0x118) / dVar8);
    *(float *)(uVar2 + 0x80) =
         fVar27 + fVar1 * (*(float *)(uVar2 + 0xa0) - *(float *)(uVar2 + 0x40)) +
                  *(float *)(uVar2 + 0x40);
    *(float *)(uVar2 + 0x84) =
         fVar4 + fVar1 * (*(float *)(uVar2 + 0xa4) - *(float *)(uVar2 + 0x44)) +
                 *(float *)(uVar2 + 0x44);
    *(float *)(uVar2 + 0x88) =
         fVar26 + fVar1 * (*(float *)(uVar2 + 0xa8) - *(float *)(uVar2 + 0x48)) +
                  *(float *)(uVar2 + 0x48);
  }
  else {
    sVar7 = *(short *)(uVar2 + 0x118) + 1;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    *(short *)(uVar2 + 0x118) = sVar7;
    auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = loadVectorLeftIndexed(0xffffffffffffd500,0x720000);
    auVar23 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar24 = loadVectorLeftIndexed(4,0x2e384);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = vectorAddFloatingPoint
                        (auVar23,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar25);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    if ((int)(animationSpeed * ((float)(longlong)DAT_0071d500 + 0.5)) < (int)sVar7) {
      auVar24 = vectorSplatHalfWord(auVar24,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar24,0x118,(ulonglong)uVar2);
      *(undefined2 *)(uVar2 + 0x118) = uVar3;
    }
    dVar8 = (double)fastfunc::FastIntToDouble
                              ((int)(animationSpeed * ((float)(longlong)DAT_0071d500 + 0.5)));
    fVar1 = (float)((double)(longlong)(int)*(short *)(uVar2 + 0x118) / dVar8);
    *(float *)(uVar2 + 0x80) =
         fVar27 + fVar1 * (*(float *)(uVar2 + 0xa0) - *(float *)(uVar2 + 0x40)) +
                  *(float *)(uVar2 + 0x40);
    *(float *)(uVar2 + 0x84) =
         fVar4 + fVar1 * (*(float *)(uVar2 + 0xa4) - *(float *)(uVar2 + 0x44)) +
                 *(float *)(uVar2 + 0x44);
    *(float *)(uVar2 + 0x88) =
         fVar26 + fVar1 * (*(float *)(uVar2 + 0xa8) - *(float *)(uVar2 + 0x48)) +
                  *(float *)(uVar2 + 0x48);
  }
  *(undefined4 *)(uVar2 + 0x8c) = uVar5;
  HandleSpecialPitchTarget(param_1,local_d0);
  uVar5 = GameCamera.field17_0x1b4._8_4_;
  if (g_heroType == '\x02') {
    dVar8 = (double)(GameCamera.field16_0x1b0 * 3.0);
    dVar13 = (double)((float)GameCamera.field17_0x1b4._0_4_ * 3.0);
    dVar12 = (double)((float)GameCamera.field17_0x1b4._4_4_ * 3.0);
  }
  else if (g_heroType == '\x01') {
    dVar8 = (double)(GameCamera.field16_0x1b0 * 0.4);
    dVar13 = (double)((float)GameCamera.field17_0x1b4._0_4_ * 0.4);
    dVar12 = (double)((float)GameCamera.field17_0x1b4._4_4_ * 0.4);
  }
  else {
    dVar8 = (double)(GameCamera.field16_0x1b0 * 0.5);
    dVar13 = (double)((float)GameCamera.field17_0x1b4._0_4_ * 0.5);
    dVar12 = (double)((float)GameCamera.field17_0x1b4._4_4_ * 0.5);
  }
  fVar27 = (float)dVar17;
  fVar26 = *(float *)(uVar2 + 0x160);
  fVar4 = (float)GameCamera.field17_0x1b4._0_4_ * fVar26;
  fVar1 = (float)GameCamera.field17_0x1b4._4_4_ * fVar26;
  *(float *)(uVar2 + 0x90) = GameCamera.field16_0x1b0 * fVar26 + *(float *)(uVar2 + 0x40);
  *(float *)(uVar2 + 0x94) = fVar4 + *(float *)(uVar2 + 0x44);
  *(float *)(uVar2 + 0x98) = fVar1 + *(float *)(uVar2 + 0x48);
  *(undefined4 *)(uVar2 + 0x9c) = uVar5;
  dVar10 = 20.0;
  iVar6 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  fVar1 = (float)(dVar22 + dVar8) + GameCamera.field16_0x1b0 * 20.0;
  dVar9 = (double)(*(float *)(iVar6 + 0x214) * *(float *)(iVar6 + 0x20c) *
                   (*(float *)(iVar6 + 0x210) - 1.0) + DAT_0071d4b8);
  fVar4 = (float)(dVar21 + dVar13) + (float)GameCamera.field17_0x1b4._0_4_ * 20.0;
  fVar26 = (float)GameCamera.field17_0x1b4._4_4_ * 20.0 + (float)(dVar19 + dVar12);
  iVar6 = collproc::CollLine(local_c0,local_b0,camera::CAMERA_COLL_FLAGS,g_heroMobyPtr,0);
  dVar11 = (double)GameCamera.field16_0x1b0;
  if (iVar6 != 0) {
    fVar27 = CollOutput.ip.w;
    fVar26 = CollOutput.ip.z;
    fVar4 = CollOutput.ip.y;
    fVar1 = CollOutput.ip.x;
  }
  dVar20 = (double)fVar1;
  dVar18 = (double)fVar4;
  dVar16 = (double)fVar26;
  dVar17 = (double)fVar27;
  dVar15 = (double)(float)GameCamera.field17_0x1b4._0_4_;
  dVar14 = (double)(float)GameCamera.field17_0x1b4._4_4_;
  iVar6 = collproc::CollLine(local_c0,local_b0,camera::CAMERA_COLL_FLAGS,g_heroMobyPtr,0);
  uVar5 = GameCamera.field17_0x1b4._8_4_;
  local_ac = (float)(dVar21 + dVar13) - (float)(dVar15 * dVar10);
  local_a8 = -(float)(dVar14 * dVar10 - (double)(float)(dVar19 + dVar12));
  fVar26 = (float)(dVar22 + dVar8) - (float)(dVar11 * dVar10);
  if (iVar6 != 0) {
    local_ac = CollOutput.ip.y;
    local_a8 = CollOutput.ip.z;
    fVar26 = CollOutput.ip.x;
  }
  dVar8 = (double)fVar26;
  dVar12 = (double)local_a8;
  dVar13 = (double)local_ac;
  if ((float)(dVar9 * 2.0) <=
      SQRT((float)(dVar12 - dVar16) * (float)(dVar12 - dVar16) +
           (float)(dVar8 - dVar20) * (float)(dVar8 - dVar20) +
           (float)(dVar13 - dVar18) * (float)(dVar13 - dVar18))) {
    dVar14 = (double)*(float *)(uVar2 + 0x44);
    dVar10 = (double)*(float *)(uVar2 + 0x40);
    dVar15 = (double)*(float *)(uVar2 + 0x48);
    dVar11 = (double)*(float *)(uVar2 + 0x160);
    if ((float)(dVar9 + dVar11) <
        SQRT((float)(dVar16 - dVar15) * (float)(dVar16 - dVar15) +
             (float)(dVar20 - dVar10) * (float)(dVar20 - dVar10) +
             (float)(dVar18 - dVar14) * (float)(dVar18 - dVar14))) {
      if ((float)(dVar12 * (double)(float)GameCamera.field17_0x1b4._20_4_ +
                 (double)(float)(dVar8 * (double)(float)GameCamera.field17_0x1b4._12_4_ +
                                (double)(float)(dVar13 * (double)(float)GameCamera.field17_0x1b4.
                                                                        _16_4_))) <
          (float)(dVar15 * (double)(float)GameCamera.field17_0x1b4._20_4_ +
                 (double)(float)(dVar10 * (double)(float)GameCamera.field17_0x1b4._12_4_ +
                                (double)(float)(dVar14 * (double)(float)GameCamera.field17_0x1b4.
                                                                        _16_4_)))) {
        local_ac = *(float *)(uVar2 + 0x44);
        local_a8 = *(float *)(uVar2 + 0x48);
        dVar8 = dVar10;
      }
      dVar12 = (double)(float)GameCamera.field17_0x1b4._0_4_;
      dVar13 = (double)(float)GameCamera.field17_0x1b4._4_4_;
      *(float *)(uVar2 + 0x90) =
           (float)((double)(float)((double)GameCamera.field16_0x1b0 * dVar11) + dVar8);
      *(float *)(uVar2 + 0x94) = (float)(dVar12 * dVar11) + local_ac;
      *(float *)(uVar2 + 0x98) = (float)(dVar13 * dVar11) + local_a8;
      *(undefined4 *)(uVar2 + 0x9c) = uVar5;
    }
    else {
      dVar8 = (double)(float)GameCamera.field17_0x1b4._0_4_;
      dVar13 = (double)GameCamera.field16_0x1b0;
      dVar12 = -(double)(float)(dVar8 * dVar9 - dVar18);
      dVar11 = -(double)(float)(dVar13 * dVar9 - dVar20);
      dVar19 = (double)(float)GameCamera.field17_0x1b4._4_4_;
      *(float *)(uVar2 + 0x9c) = (float)dVar17;
      dVar9 = -(double)(float)(dVar19 * dVar9 - dVar16);
      *(float *)(uVar2 + 0x94) = (float)dVar12;
      *(float *)(uVar2 + 0x90) = (float)dVar11;
      *(float *)(uVar2 + 0x98) = (float)dVar9;
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar6 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar6 + 0x16e) = 1;
        *(float *)(iVar6 + 0x17c) =
             (float)((double)(float)(dVar9 - dVar15) * dVar19 +
                    (double)(float)((double)(float)(dVar11 - dVar10) * dVar13 +
                                   (double)(float)((double)(float)(dVar12 - dVar14) * dVar8)));
        *(undefined4 *)(iVar6 + 0x184) = 0x3b449ba6;
      }
    }
  }
  else {
    *(float *)(uVar2 + 0x9c) = (float)dVar17;
    fVar26 = (float)(dVar18 + dVar13) * 0.5;
    fVar27 = (float)(dVar20 + dVar8) * 0.5;
    fVar4 = (float)(dVar16 + dVar12) * 0.5;
    *(float *)(uVar2 + 0x94) = fVar26;
    *(float *)(uVar2 + 0x90) = fVar27;
    *(float *)(uVar2 + 0x98) = fVar4;
    fVar26 = (fVar26 - *(float *)(uVar2 + 0x44)) * (float)GameCamera.field17_0x1b4._0_4_;
    fVar27 = (fVar27 - *(float *)(uVar2 + 0x40)) * GameCamera.field16_0x1b0;
    fVar4 = (fVar4 - *(float *)(uVar2 + 0x48)) * (float)GameCamera.field17_0x1b4._4_4_;
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      iVar6 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
      *(undefined2 *)(iVar6 + 0x16e) = 1;
      *(float *)(iVar6 + 0x17c) = fVar4 + fVar27 + fVar26;
      *(undefined4 *)(iVar6 + 0x184) = 0x3b449ba6;
    }
  }
  return;
}



//==== 0002ed78  ns=stub  size=0x8
// sig: undefined STUB_0002ed78(void)
// callers(3): 00035560 camera::camera10::Cam10_00035560; 00035d68 camera::camera10::Cam10_00035d68; 000395c0 camera::camera13::Cam13_000395c0
// callees(0): 

undefined8 stub::STUB_0002ed78(void)

{
  return 0;
}



//==== 0002ed80  ns=stub  size=0x4
// sig: undefined STUB_0002ed80(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002ed80(void)

{
  return;
}



//==== 0002ed84  ns=stub  size=0x4
// sig: undefined STUB_0002ed84(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002ed84(void)

{
  return;
}



//==== 0002ed88  ns=stub  size=0x4
// sig: undefined STUB_0002ed88(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002ed88(void)

{
  return;
}



//==== 0002ed8c  ns=stub  size=0x4
// sig: undefined STUB_0002ed8c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002ed8c(void)

{
  return;
}



//==== 0002ed90  ns=stub  size=0x4
// sig: undefined STUB_0002ed90(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002ed90(void)

{
  return;
}



//==== 0002ed94  ns=stub  size=0x4
// sig: undefined STUB_0002ed94(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002ed94(void)

{
  return;
}



//==== 0002ed98  ns=stub  size=0x4
// sig: undefined STUB_0002ed98(void)
// callers(0): 
// callees(0): 

void stub::STUB_0002ed98(void)

{
  return;
}



//==== 0002ed9c  ns=stub  size=0x4
// sig: undefined STUB_0002ed9c(void)
// callers(2): 0030d0a0 mobyupdate_unsorted::UpdateMoby_241; 0034ec58 mobyupdate_unsorted::UpdateMoby_342
// callees(0): 

void stub::STUB_0002ed9c(void)

{
  return;
}



//==== 0002eda8  ns=camera0  size=0x24c
// sig: undefined UpdateCameraOffset_0(void)
// callers(1): 00034c28 camera0::Camera0_Update
// callees(1): 000501e8 camera::Cam_InterpValues

void camera0::UpdateCameraOffset_0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  double dVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x70);
  *(float *)(iVar2 + 0x1bc) = g_CameraSpeed;
  dVar5 = 0.0;
  *(undefined4 *)(iVar2 + 0x1c4) = 0;
  *(undefined4 *)(iVar2 + 0x1c8) = 0;
  *(undefined4 *)(iVar2 + 0x1b8) = 0;
  *(undefined4 *)(iVar2 + 0x1cc) = 0;
  pvVar4 = camera::BackupCam.control;
  if (*(short *)(iVar3 + 0x16c) == 0) {
    fVar6 = camera::Cam_InterpValues
                      (*(float *)(iVar3 + 0x15c),*(float *)((int)camera::BackupCam.control + 0x15c),
                       *(float *)(iVar3 + 0x178),DAT_0071d4e4,0.0,(float *)(iVar3 + 0x174));
  }
  else {
    fVar6 = camera::Cam_InterpValues
                      (*(float *)(iVar3 + 0x15c),*(float *)(iVar3 + 0x170),*(float *)(iVar3 + 0x178)
                       ,DAT_0071d4e4,0.0,(float *)(iVar3 + 0x174));
  }
  *(float *)(iVar3 + 0x15c) = fVar6;
  if (*(short *)(iVar3 + 0x16e) == 0) {
    fVar6 = camera::Cam_InterpValues
                      (*(float *)(iVar3 + 0x160),*(float *)((int)pvVar4 + 0x160),
                       *(float *)(iVar3 + 0x184),DAT_0071d4e8,(float)dVar5,(float *)(iVar3 + 0x180))
    ;
  }
  else {
    fVar6 = camera::Cam_InterpValues
                      (*(float *)(iVar3 + 0x160),*(float *)(iVar3 + 0x17c),*(float *)(iVar3 + 0x184)
                       ,DAT_0071d4e8,(float)dVar5,(float *)(iVar3 + 0x180));
  }
  *(float *)(iVar3 + 0x160) = fVar6;
  if (*(short *)(iVar3 + 0x11a) == 0) {
    fVar6 = camera::Cam_InterpValues
                      (*(float *)(iVar3 + 0xf0),*(float *)((int)pvVar4 + 0xf0),
                       *(float *)(iVar3 + 0xf8),0.2,(float)dVar5,(float *)(iVar3 + 0xfc));
  }
  else {
    fVar6 = camera::Cam_InterpValues
                      (*(float *)(iVar3 + 0xf0),*(float *)(iVar3 + 0xf4),*(float *)(iVar3 + 0xf8),
                       0.2,(float)dVar5,(float *)(iVar3 + 0xfc));
  }
  *(float *)(iVar3 + 0xf0) = fVar6;
  *(undefined2 *)(iVar3 + 0x16c) = 0;
  *(undefined2 *)(iVar3 + 0x16e) = 0;
  uVar1 = *(undefined4 *)((int)pvVar4 + 0x15c);
  *(undefined4 *)(iVar3 + 0x170) = 0;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar3 + 0x17c) = 0;
  *(undefined4 *)(iVar3 + 0x188) = uVar1;
  *(undefined2 *)(iVar3 + 0x11a) = 0;
  *(undefined4 *)(iVar3 + 0xf4) = 0;
  *(undefined2 *)(iVar2 + 0x10) = 1;
  *(undefined2 *)(*(int *)(param_1 + 0x70) + 0x22) = 0;
  uVar1 = DAT_0071d480;
  *(undefined4 *)(iVar3 + 0x120) = 0x3e4ccccd;
  *(undefined4 *)(iVar3 + 0x11c) = uVar1;
  uVar1 = DAT_0071d480;
  *(undefined1 *)(iVar3 + 0x116) = 0;
  *(undefined4 *)(iVar3 + 0x124) = uVar1;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar3 + 0x128) = 0x3e4ccccd;
  *(undefined4 *)(iVar2 + 0x214) = DAT_0071d4bc;
  *(undefined4 *)(iVar2 + 0x20c) = DAT_0071d4c4;
  *(undefined4 *)(iVar2 + 0x210) = DAT_0071d4c0;
  *(int *)(iVar2 + 0x218) = camera::CAMERA_COLL_BUMP_FLAGS;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined2 *)(iVar2 + 0x226) = 0;
  *(undefined4 *)(iVar2 + 0x22c) = DAT_0071d4fc;
  return;
}



//==== 0002eff8  ns=camera0  size=0x44
// sig: undefined Cam0_SetCPosGainDamp(void)
// callers(4): 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00242c28 mobyupdate_unsorted::UpdateMoby_{351_1301}
// callees(0): 

void camera0::Cam0_SetCPosGainDamp(double param_1,double param_2)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    if (param_1 != 0.0) {
      *(float *)(iVar1 + 0x11c) = (float)param_1;
    }
    if (param_2 != 0.0) {
      *(float *)(iVar1 + 0x120) = (float)param_2;
    }
  }
  return;
}



//==== 0002f03c  ns=camera0  size=0x28
// sig: undefined Cam0_disableLOS(void)
// callers(4): 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00242c28 mobyupdate_unsorted::UpdateMoby_{351_1301}
// callees(0): 

void camera0::Cam0_disableLOS(void)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(undefined1 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x116) = 1;
  }
  return;
}



//==== 0002f064  ns=camera0  size=0x24
// sig: undefined Cam0_SetCamPull(void)
// callers(6): 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00044c00 camera::camera23::Cam23_ModifyFollowCam; 00242c28 mobyupdate_unsorted::UpdateMoby_{351_1301}; 00259bf0 mobyupdate_helpers::M1357_00259bf0
// callees(0): 

void camera0::Cam0_SetCamPull(undefined2 param_1)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x10) = param_1;
  }
  return;
}



//==== 0002f0a0  ns=camera0  size=0x21c
// sig: undefined AzmLookAtDir(void)
// callers(4): 0002f2bc camera0::AzmLookAtPos; 0002f31c camera0::Cam0_ForceLookAtPos; 0002f470 camera0::Cam0_ForceLookAtDir; 0002f530 camera0::???_Cam0_UpdateTargetSpecial
// callees(2): 000fec94 mobyutil::MB_catmullRom; 005025e0 fastfunc::FastDiffRots

double camera0::AzmLookAtDir(double param_1,int param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar1 = *(int *)(param_2 + 0x70);
  fVar2 = param_3[2] * (float)GameCamera.field17_0x1b4._4_4_ +
          *param_3 * GameCamera.field16_0x1b0 + param_3[1] * (float)GameCamera.field17_0x1b4._0_4_;
  dVar15 = 0.0;
  fVar5 = -((float)GameCamera.field17_0x1b4._0_4_ * fVar2 - param_3[1]);
  fVar3 = -(GameCamera.field16_0x1b0 * fVar2 - *param_3);
  fVar6 = -((float)GameCamera.field17_0x1b4._4_4_ * fVar2 - param_3[2]);
  fVar7 = *(float *)(iVar1 + 0x138) * (float)GameCamera.field17_0x1b4._4_4_ +
          *(float *)(iVar1 + 0x130) * GameCamera.field16_0x1b0 +
          *(float *)(iVar1 + 0x134) * (float)GameCamera.field17_0x1b4._0_4_;
  fVar8 = -((float)GameCamera.field17_0x1b4._0_4_ * fVar7 - *(float *)(iVar1 + 0x134));
  fVar4 = -(GameCamera.field16_0x1b0 * fVar7 - *(float *)(iVar1 + 0x130));
  fVar2 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5);
  fVar7 = -((float)GameCamera.field17_0x1b4._4_4_ * fVar7 - *(float *)(iVar1 + 0x138));
  if ((fVar2 != 0.0) &&
     (fVar2 = fVar2 * SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar8 * fVar8), fVar2 != 0.0)) {
    fVar2 = (fVar6 * fVar7 + fVar3 * fVar4 + fVar5 * fVar8) / fVar2;
    dVar12 = 1.0;
    dVar13 = -1.0;
    fVar9 = fVar2;
    if (fVar2 - 0.0 < 0.0) {
      fVar9 = ABS(fVar2);
    }
    dVar10 = dVar12;
    if (fVar2 - 0.0 < 0.0) {
      dVar10 = dVar13;
    }
    dVar11 = (double)(1.0 - fVar9);
    if ((double)(1.0 - fVar9) - 0.0 < 0.0) {
      dVar11 = dVar15;
    }
    dVar14 = dVar12;
    if (((GameCamera.field16_0x1b0 * fVar5 - (float)GameCamera.field17_0x1b4._0_4_ * fVar3) * fVar7
        + ((float)GameCamera.field17_0x1b4._0_4_ * fVar6 -
          (float)GameCamera.field17_0x1b4._4_4_ * fVar5) * fVar4 +
          ((float)GameCamera.field17_0x1b4._4_4_ * fVar3 - GameCamera.field16_0x1b0 * fVar6) * fVar8
        ) - 0.0 < 0.0) {
      dVar14 = dVar13;
    }
    dVar16 = dVar15;
    dVar15 = (double)fastfunc::FastDiffRots
                               (0x400921fb60000000,
                                -(double)(float)(-(double)((fVar9 * fVar9 * fVar9 * DAT_007358cc +
                                                           fVar9 * fVar9 * DAT_007358c8 +
                                                           fVar9 * DAT_007358c4 + DAT_007358c0) *
                                                           (float)SQRT(dVar11) - 1.5707964) * dVar10
                                                - 1.5707963705062866));
    if ((param_1 == dVar16) || (ABS(dVar15) <= param_1)) {
      dVar10 = (double)(float)(dVar15 * 0.6366197466850281);
      if (dVar12 - (double)(float)(dVar15 * 0.6366197466850281) < 0.0) {
        dVar10 = dVar12;
      }
      dVar12 = (double)mobyutil::MB_catmullRom(dVar13,dVar16,dVar12,dVar16,dVar10);
      *(float *)(iVar1 + 0x1c4) = (float)(dVar14 * dVar12);
    }
  }
  return dVar15;
}



//==== 0002f2bc  ns=camera0  size=0x60
// sig: undefined AzmLookAtPos(void)
// callers(0): 
// callees(1): 0002f0a0 camera0::AzmLookAtDir

void camera0::AzmLookAtPos(undefined4 param_1)

{
  undefined1 local_10 [16];
  
  AzmLookAtDir(param_1,local_10);
  return;
}



//==== 0002f31c  ns=camera0  size=0x94
// sig: undefined Cam0_ForceLookAtPos(void)
// callers(4): 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00044598 camera::camera22::Cam22_ModifyFollowCam; 00286ae0 mobyupdate_unsorted::UpdateMoby_1470
// callees(1): 0002f0a0 camera0::AzmLookAtDir

void camera0::Cam0_ForceLookAtPos(double param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined1 local_10 [16];
  
  pvVar1 = GameCamera.pCurrentUpdCam;
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1bc) = (float)param_1;
    AzmLookAtDir(param_2,pvVar1,local_10);
  }
  return;
}



//==== 0002f3b0  ns=camera0  size=0x28
// sig: undefined Cam0_RunningAtCamOff(void)
// callers(5): 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00044598 camera::camera22::Cam22_ModifyFollowCam; 00044c00 camera::camera23::Cam23_ModifyFollowCam
// callees(0): 

void camera0::Cam0_RunningAtCamOff(void)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x226) = 1;
  }
  return;
}



//==== 0002f3d8  ns=camera0  size=0x3c
// sig: undefined Cam0_SetCamDist(void)
// callers(10): 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00044598 camera::camera22::Cam22_ModifyFollowCam; 00044c00 camera::camera23::Cam23_ModifyFollowCam; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 002737b8 mobyupdate_helpers::M1422_002737b8; 00428570 mobyupdate_helpers::M701_00428570; 00428698 mobyupdate_unsorted::UpdateMoby_701; 0042e8f0 mobyupdate_unsorted::UpdateMoby_712
// callees(0): 

void camera0::Cam0_SetCamDist(double param_1,double param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined2 *)(iVar1 + 0x16c) = 1;
    *(float *)(iVar1 + 0x170) = (float)param_1;
    *(float *)(iVar1 + 0x178) = (float)param_2;
    if (param_4 != 0) {
      *(float *)(iVar1 + 0x188) = (float)param_1;
    }
  }
  return;
}



//==== 0002f414  ns=camera0  size=0x54
// sig: undefined Cam0_SetCamOfsZ(void)
// callers(9): 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00044598 camera::camera22::Cam22_ModifyFollowCam; 00044c00 camera::camera23::Cam23_ModifyFollowCam; 0004aff0 camera::CamZoomOfs_Update; 0025a470 mobyupdate_unsorted::UpdateMoby_1357; 00417370 mobyupdate_unsorted::UpdateMoby_689; 00428570 mobyupdate_helpers::M701_00428570; 00428698 mobyupdate_unsorted::UpdateMoby_701
// callees(0): 

void camera0::Cam0_SetCamOfsZ(double param_1,double param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined2 *)(iVar1 + 0x11a) = 1;
    *(float *)(iVar1 + 0xf8) = (float)param_2;
    if (param_4 != 0) {
      param_1 = (double)(float)((double)*(float *)((int)camera::BackupCam.control + 0xf0) + param_1)
      ;
    }
    *(float *)(iVar1 + 0xf4) = (float)param_1;
  }
  return;
}



//==== 0002f470  ns=camera0  size=0x6c
// sig: undefined Cam0_ForceLookAtDir(void)
// callers(5): 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 000473f0 camera::camera4::ActivateCamera_4; 00428570 mobyupdate_helpers::M701_00428570; 00428698 mobyupdate_unsorted::UpdateMoby_701
// callees(1): 0002f0a0 camera0::AzmLookAtDir

void camera0::Cam0_ForceLookAtDir(double param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = GameCamera.pCurrentUpdCam;
  if ((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) && (param_1 != 0.0)) {
    *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1bc) = (float)param_1;
    AzmLookAtDir(param_2,pvVar1,param_3);
  }
  return;
}



//==== 0002f530  ns=camera0  size=0xaa0
// sig: undefined ???_Cam0_UpdateTargetSpecial(void)
// callers(1): 00034c28 camera0::Camera0_Update
// callees(7): 0002f0a0 camera0::AzmLookAtDir; 0005e598 collproc::CollMobySphere; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble
// strings: 0002f504: '>VwPAp' (raw)

void camera0::____Cam0_UpdateTargetSpecial(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  uint uVar5;
  undefined2 uVar6;
  bool bVar7;
  undefined4 uVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  undefined4 *puVar14;
  int iVar15;
  GAMECAMERA *pGVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [40];
  
  iVar12 = *(int *)(param_1 + 0x70);
  bVar7 = false;
  if ((hero::g_HeroRequestedCamType == 0xd) && (*(int *)(iVar12 + 0x230) != 0x14d)) {
    fastfunc::FastWrapRot(DAT_0096a1c4,3.1415927);
    pvVar9 = GameCamera.pCurrentUpdCam;
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1bc) = 0x3e567750;
      AzmLookAtDir(0,pvVar9,local_a0);
    }
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      *(undefined1 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x116) = 1;
    }
  }
  bVar1 = hero::g_heroStateType == 5;
  bVar2 = hero::g_heroStateType == 0x10;
  bVar3 = hero::g_heroStateType != 0xf;
  if ((hero::g_heroStateType == 0x11) &&
     (*(undefined4 *)(*(int *)(param_1 + 0x70) + 0xf0) = 0x3e800000,
     *(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0)) {
    iVar10 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined2 *)(iVar10 + 0x16e) = 1;
    *(undefined4 *)(iVar10 + 0x17c) = 0x3f000000;
    *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
  }
  if (bVar1) {
    bVar7 = true;
    if (g_heroType == '\x01') {
      *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xf0) = 0x3e800000;
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar10 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar10 + 0x16e) = 1;
        *(undefined4 *)(iVar10 + 0x17c) = 0x3fc00000;
        *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xf0) = 0x3e800000;
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar10 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar10 + 0x16e) = 1;
        *(undefined4 *)(iVar10 + 0x17c) = 0x40200000;
        *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
      }
    }
  }
  if (bVar2) {
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xf0) = 0x3e800000;
  }
  pvVar9 = GameCamera.pCurrentUpdCam;
  bVar1 = g_heroType == '\x02';
  if (g_heroType == '\x01') {
    if (*(int *)(iVar12 + 0x220) == 0) {
      iVar10 = *(int *)(param_1 + 0x70);
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar15 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar15 + 0x16c) = 1;
        *(undefined4 *)(iVar15 + 0x170) = 0x40400000;
        *(undefined4 *)(iVar15 + 0x178) = 0x3b449ba6;
        *(undefined4 *)(iVar15 + 0x188) = 0x40400000;
      }
      if ((!bVar7) &&
         (*(undefined4 *)(iVar10 + 0xf0) = 0x3f800000, *(short *)((int)pvVar9 + 0x86) == 0)) {
        iVar10 = *(int *)((int)pvVar9 + 0x70);
        *(undefined2 *)(iVar10 + 0x16e) = 1;
        *(undefined4 *)(iVar10 + 0x17c) = 0x3f800000;
        *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x20c) = 0x3f19999a;
  }
  pvVar9 = GameCamera.pCurrentUpdCam;
  uVar8 = DAT_0071d56c;
  if (bVar1) {
    if (*(int *)(iVar12 + 0x230) < 2) {
      sVar13 = *(short *)((int)GameCamera.pCurrentUpdCam + 0x86);
      if (sVar13 == 0) {
        iVar10 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar10 + 0x11a) = 1;
        *(undefined4 *)(iVar10 + 0xf8) = 0x3ba3d70a;
        *(undefined4 *)(iVar10 + 0xf4) = uVar8;
        sVar13 = *(short *)((int)pvVar9 + 0x86);
      }
      uVar8 = DAT_0071d570;
      if (sVar13 == 0) {
        iVar10 = *(int *)((int)pvVar9 + 0x70);
        *(undefined2 *)(iVar10 + 0x16c) = 1;
        *(undefined4 *)(iVar10 + 0x170) = uVar8;
        *(undefined4 *)(iVar10 + 0x178) = 0x3b449ba6;
        *(undefined4 *)(iVar10 + 0x188) = uVar8;
        sVar13 = *(short *)((int)pvVar9 + 0x86);
      }
      uVar8 = DAT_0071d574;
      if (sVar13 == 0) {
        iVar10 = *(int *)((int)pvVar9 + 0x70);
        *(undefined2 *)(iVar10 + 0x16e) = 1;
        *(undefined4 *)(iVar10 + 0x17c) = uVar8;
        *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
      }
    }
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x226) = 1;
    }
    iVar10 = *(int *)(param_1 + 0x70);
    *(undefined4 *)(iVar10 + 0x20c) = DAT_0071d57c;
    *(undefined4 *)(iVar10 + 0x214) = DAT_0071d578;
  }
  pvVar9 = GameCamera.pCurrentUpdCam;
  if ((DAT_0096bd8a != '\0') && (bVar3)) {
    sVar13 = *(short *)((int)GameCamera.pCurrentUpdCam + 0x86);
    if (sVar13 == 0) {
      *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x10) = 0;
      sVar13 = *(short *)((int)pvVar9 + 0x86);
    }
    if ((sVar13 == 0) &&
       (*(undefined1 *)(*(int *)((int)pvVar9 + 0x70) + 0x116) = 1,
       *(short *)((int)pvVar9 + 0x86) == 0)) {
      iVar10 = *(int *)((int)pvVar9 + 0x70);
      *(undefined4 *)(iVar10 + 0x11c) = 0x3d23d70a;
      *(undefined4 *)(iVar10 + 0x120) = 0x3e4ccccd;
    }
  }
  pGVar16 = &GameCamera;
  if (GameCamera.field22_0x390 != (char  [4])0x0) {
    (**(code **)GameCamera.field22_0x390)();
  }
  if ((GameCamera.field19_0x25c._0_4_ != 0) && (*(int *)(iVar12 + 0x230) < 2)) {
    if (*(byte *)(GameCamera.field19_0x25c._0_4_ + 0x20) < 0x80) {
      if ((0x3e999999 < (uint)ABS(ANALOG_STICKS.x)) || (0x3e999999 < (uint)ABS(ANALOG_STICKS.y))) {
        GameCamera.field19_0x25c[4] = '\0';
        GameCamera.field19_0x25c[5] = '\0';
        GameCamera.field19_0x25c[6] = '\0';
        GameCamera.field19_0x25c[7] = '\0';
      }
      auVar23 = ZEXT416(0xffffffff);
      auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      GameCamera.field19_0x25c._4_4_ = GameCamera.field19_0x25c._4_4_ + 1;
      auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      dVar21 = 400.5;
      auVar23 = loadVectorLeftIndexed(0x24,0x2f4dc);
      auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar23 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                           auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      iVar10 = GameCamera.field19_0x25c._4_4_;
      if ((int)(animationSpeed * 400.5) < (int)GameCamera.field19_0x25c._4_4_) {
        auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        GameCamera.field19_0x25c._4_4_ =
             storeVectorElementWordIndexed
                       (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x260,0x9513c0
                       );
        iVar10 = (int)(animationSpeed * 400.5);
      }
      dVar22 = (double)fastfunc::FastIntToDouble(iVar10);
      dVar21 = (double)fastfunc::FastIntToDouble((int)((double)animationSpeed * dVar21));
      pvVar9 = GameCamera.pCurrentUpdCam;
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1bc) =
             (float)(dVar22 / dVar21) * 0.20943952;
        AzmLookAtDir(0,pvVar9,local_90);
      }
    }
    else {
      GameCamera.field19_0x25c[0] = '\0';
      GameCamera.field19_0x25c[1] = '\0';
      GameCamera.field19_0x25c[2] = '\0';
      GameCamera.field19_0x25c[3] = '\0';
    }
  }
  *(undefined4 *)(iVar12 + 0x230) = 0;
  iVar10 = collproc::CollMobySphere
                     (0x402e000000000000,&g_heroPosition,&DAT_0002f4dc,1,g_heroMobyPtr,0);
  if ((0 < iVar10) && (iVar15 = 0, 0 < iVar10)) {
    puVar14 = &DAT_00a14a00;
    dVar21 = 0.0;
    do {
      iVar11 = mobyutil::MB_GetPvarsIfMobyHasThem((MobyInstance *)*puVar14);
      if ((iVar11 != 0) && ((double)*(byte *)(iVar11 + 0xd) != dVar21)) {
        *(undefined4 *)(iVar12 + 0x230) = 1;
        break;
      }
      iVar15 = iVar15 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar15 < iVar10);
  }
  pvVar9 = GameCamera.pCurrentUpdCam;
  if ((g_heroState == THRUSTER_PACK_HOVER) && ((g_downButtons & (R2|L2)) != 0)) {
    sVar13 = *(short *)((int)GameCamera.pCurrentUpdCam + 0x86);
    if (sVar13 == 0) {
      *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x10) = 0;
      sVar13 = *(short *)((int)pvVar9 + 0x86);
    }
    if ((sVar13 == 0) &&
       (*(undefined1 *)(*(int *)((int)pvVar9 + 0x70) + 0x116) = 1,
       *(short *)((int)pvVar9 + 0x86) == 0)) {
      iVar12 = *(int *)((int)pvVar9 + 0x70);
      *(undefined4 *)(iVar12 + 0x11c) = 0x3d23d70a;
      *(undefined4 *)(iVar12 + 0x120) = 0x3e4ccccd;
    }
    iVar12 = *(int *)(param_1 + 0x70);
    *(undefined2 *)(iVar12 + 0x16) = 0;
    *(undefined2 *)(iVar12 + 0x12) = 0;
    *(undefined2 *)(iVar12 + 0x14) = 0;
  }
  else if (DAT_0092e288 != 0) {
    uVar5 = *(uint *)(param_1 + 0x70);
    uVar17 = (ulonglong)uVar5;
    iVar12 = 0;
    dVar22 = 0.0;
    dVar21 = dVar22;
    do {
      dVar18 = (double)fastfunc::FastSubRots
                                 (*(float *)(pGVar16->field17_0x1b4 + 0x88),
                                  *(float *)(pGVar16->field17_0x1b4 + 0x8c));
      iVar12 = iVar12 + 1;
      dVar21 = (double)(float)(dVar21 + dVar18);
      pGVar16 = (GAMECAMERA *)&(pGVar16->mtx0).v0.y;
    } while (iVar12 < 4);
    fVar4 = (float)(dVar21 * 0.25) * 5.0;
    if (1.0 - fVar4 < 0.0) {
      fVar4 = 1.0;
    }
    if (1.0 - fVar4 < DAT_0071d564) {
      auVar23 = ZEXT416(0xffffffff);
      auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar23 = loadVectorLeftIndexed(0x3c,0x2f4dc);
      auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar23 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                           auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      auVar23 = vectorSplatHalfWord(auVar23,1);
      uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x12,uVar17);
      *(undefined2 *)(uVar5 + 0x12) = uVar6;
    }
    if (*(short *)(uVar5 + 0x12) == 0) {
      dVar21 = 0.75;
      if (*(short *)(uVar5 + 0x14) == 0) {
        *(undefined2 *)(uVar5 + 0x16) = 0;
        DAT_0071ea50 = 0.75;
      }
      else {
        fastfunc::FastDecTimerS16(uVar17 + 0x14);
        dVar22 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(uVar5 + 0x14));
        dVar18 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 45.5));
        DAT_0071ea50 = (float)((double)(float)(dVar22 / dVar18) * -0.75 + dVar21);
        *(undefined2 *)(uVar5 + 0x16) = 0;
      }
    }
    else {
      iVar12 = fastfunc::FastDecTimerS16(uVar17 + 0x12);
      pvVar9 = GameCamera.pCurrentUpdCam;
      if (iVar12 != 0) {
        auVar23 = ZEXT416(0xffffffff);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = loadVectorLeftIndexed(0x40,0x2f4dc);
        auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar23 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                             auVar24);
        auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
        auVar23 = vectorSplatHalfWord(auVar23,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x14,uVar17);
        *(undefined2 *)(uVar5 + 0x14) = uVar6;
      }
      if (*(short *)((int)pvVar9 + 0x86) == 0) {
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x70) + 0x116) = 1;
      }
      auVar23 = ZEXT416(0xffffffff);
      auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      iVar12 = *(ushort *)(uVar5 + 0x16) + 1;
      auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      sVar13 = (short)iVar12;
      *(short *)(uVar5 + 0x16) = sVar13;
      dVar21 = 30.5;
      auVar23 = loadVectorLeftIndexed(0x44,0x2f4dc);
      fVar4 = animationSpeed * 30.5;
      auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar23 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                           auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      if ((int)fVar4 < (int)sVar13) {
        auVar23 = vectorSplatHalfWord(auVar23,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x16,uVar17);
        *(undefined2 *)(uVar5 + 0x16) = uVar6;
        iVar12 = (int)fVar4;
      }
      dVar18 = 0.014999999664723873;
      dVar20 = (double)(DAT_0071d568 - 0.015);
      dVar19 = (double)fastfunc::FastIntToDouble((short)iVar12);
      dVar21 = (double)fastfunc::FastIntToDouble((int)((double)animationSpeed * dVar21));
      fVar4 = (float)(dVar20 * (double)(float)(dVar19 / dVar21) + dVar18);
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar12 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        if ((double)fVar4 != dVar22) {
          *(float *)(iVar12 + 0x11c) = fVar4;
        }
        *(undefined4 *)(iVar12 + 0x120) = 0x3e4ccccd;
      }
      DAT_0071ea50 = (float)dVar22;
    }
  }
  return;
}



//==== 0002ffe8  ns=camera0  size=0x810
// sig: undefined SetCam0DefaultPosRot(void)
// callers(1): 000309f0 camera0::Camera0_Init
// callees(4): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000fc620 mobyutil::MB_randInt; 00500fa8 fastfunc::FastApplyTransform

void camera0::SetCam0DefaultPosRot(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  MobyInstance *pMVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 local_b0 [16];
  Vec4 aVStack_a0 [3];
  
  pvVar13 = GameCamera.pCurrentUpdCam;
  iVar7 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  fVar2 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x34);
  fVar3 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x38);
  if (param_1 != 0) {
    dVar25 = (double)*(float *)(iVar7 + 0x15c);
    dVar24 = (double)*(float *)(iVar7 + 0x160);
    fastfunc::FastApplyTransform(aVStack_a0,(Vec4 *)&hero::g_heroMtx);
    iVar18 = *(int *)(iVar7 + 0x100);
    fVar2 = *(float *)(iVar18 + 0xc4);
    fVar3 = *(float *)(iVar18 + 200);
    fVar4 = *(float *)(iVar18 + 0xe4);
    fVar5 = *(float *)(iVar18 + 0xe8);
    iVar19 = (int)pvVar13 + 0x30;
    uVar21 = 0x94;
    *(float *)((int)pvVar13 + 0x30) =
         *(float *)(iVar7 + 0x40) +
         (float)((double)*(float *)(iVar18 + 0xe0) * dVar24 +
                -(double)(float)(dVar25 * (double)*(float *)(iVar18 + 0xc0)));
    *(float *)((int)pvVar13 + 0x34) =
         *(float *)(iVar7 + 0x44) +
         (float)((double)fVar4 * dVar24 + -(double)(float)(dVar25 * (double)fVar2));
    pMVar17 = g_heroMobyPtr;
    *(float *)((int)pvVar13 + 0x38) =
         *(float *)(iVar7 + 0x48) +
         (float)((double)fVar5 * dVar24 + -(double)(float)(dVar25 * (double)fVar3));
    *(undefined4 *)((int)pvVar13 + 0x3c) = *(undefined4 *)(iVar7 + 0x4c);
    fVar2 = *(float *)(iVar7 + 0xf0);
    fVar4 = *(float *)(iVar18 + 0xe0) * fVar2 + *(float *)(iVar7 + 0x40);
    fVar3 = *(float *)(iVar18 + 0xe4) * fVar2 + *(float *)(iVar7 + 0x44);
    fVar2 = *(float *)(iVar18 + 0xe8) * fVar2 + *(float *)(iVar7 + 0x48);
    uVar6 = *(undefined4 *)(iVar7 + 0x4c);
    iVar18 = collproc::CollLine(&local_c0,iVar19,0x94,pMVar17,0);
    if (iVar18 != 0) {
      if (SQRT((CollOutput.ip.x - fVar4) * (CollOutput.ip.x - fVar4) +
               (CollOutput.ip.y - fVar3) * (CollOutput.ip.y - fVar3)) < 0.001) {
        uVar21 = 0x96;
      }
    }
    iVar18 = collproc::CollLine(&local_c0,iVar19,uVar21,g_heroMobyPtr,0);
    if (iVar18 != 0) {
      fVar5 = CollOutput.ip.y - fVar3;
      fVar8 = CollOutput.ip.x - fVar4;
      fVar9 = CollOutput.ip.z - fVar2;
      dVar24 = 0.0;
      fVar10 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5);
      if (fVar10 == 0.0) {
        *(undefined4 *)((int)pvVar13 + 0x30) = *(undefined4 *)(iVar7 + 0x40);
        *(undefined4 *)((int)pvVar13 + 0x34) = *(undefined4 *)(iVar7 + 0x44);
        *(undefined4 *)((int)pvVar13 + 0x38) = *(undefined4 *)(iVar7 + 0x48);
        *(undefined4 *)((int)pvVar13 + 0x3c) = *(undefined4 *)(iVar7 + 0x4c);
      }
      else if (DAT_0071d4a8 <= fVar10) {
        fVar10 = (fVar10 - 0.5) / fVar10;
        *(float *)((int)pvVar13 + 0x30) = fVar8 * fVar10 + fVar4;
        *(float *)((int)pvVar13 + 0x34) = fVar5 * fVar10 + fVar3;
        *(float *)((int)pvVar13 + 0x38) = fVar9 * fVar10 + fVar2;
        *(undefined4 *)((int)pvVar13 + 0x3c) = uVar6;
      }
      else {
        iVar18 = *(int *)(iVar7 + 0x100);
        iVar20 = 0;
        dVar23 = 0.5;
        fVar3 = *(float *)(iVar18 + 0xe0) * 0.5 + *(float *)(iVar7 + 0x40);
        fVar4 = *(float *)(iVar18 + 0xe4) * 0.5 + *(float *)(iVar7 + 0x44);
        fVar5 = *(float *)(iVar18 + 0xe8) * 0.5 + *(float *)(iVar7 + 0x48);
        fVar2 = *(float *)(iVar7 + 0x4c);
        dVar22 = 0.25;
        dVar25 = dVar23;
        local_c0 = fVar3;
        local_bc = fVar4;
        local_b8 = fVar5;
        local_b4 = fVar2;
        do {
          iVar18 = collproc::CollSphere(dVar25,&local_c0);
          pMVar17 = g_heroMobyPtr;
          if (iVar18 == 0) {
            if (iVar20 != 0) break;
            dVar25 = (double)(float)(dVar25 + dVar22);
          }
          else {
            local_c0 = CollOutput.push.x;
            local_bc = CollOutput.push.y;
            local_b8 = CollOutput.push.z;
            local_b4 = CollOutput.push.w;
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < 3);
        fVar8 = local_bc - fVar4;
        fVar10 = local_c0 - fVar3;
        fVar9 = local_b8 - fVar5;
        dVar25 = (double)SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
        if (dVar25 == dVar24) {
          *(undefined4 *)((int)pvVar13 + 0x30) = *(undefined4 *)(iVar7 + 0x40);
          *(undefined4 *)((int)pvVar13 + 0x34) = *(undefined4 *)(iVar7 + 0x44);
          *(undefined4 *)((int)pvVar13 + 0x38) = *(undefined4 *)(iVar7 + 0x48);
          *(undefined4 *)((int)pvVar13 + 0x3c) = *(undefined4 *)(iVar7 + 0x4c);
        }
        else {
          fVar1 = (float)((double)*(float *)(iVar7 + 0x15c) / dVar25);
          *(float *)((int)pvVar13 + 0x30) = fVar10 * fVar1 + fVar3;
          *(float *)((int)pvVar13 + 0x34) = fVar8 * fVar1 + fVar4;
          *(float *)((int)pvVar13 + 0x38) = fVar9 * fVar1 + fVar5;
          *(float *)((int)pvVar13 + 0x3c) = fVar2;
          iVar18 = collproc::CollLine(local_b0,iVar19,uVar21,pMVar17,0);
          if (iVar18 != 0) {
            fVar2 = CollOutput.ip.y - local_bc;
            fVar3 = CollOutput.ip.x - local_c0;
            fVar4 = CollOutput.ip.z - local_b8;
            dVar25 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            if (dVar25 == dVar24) {
              *(undefined4 *)((int)pvVar13 + 0x30) = *(undefined4 *)(iVar7 + 0x40);
              *(undefined4 *)((int)pvVar13 + 0x34) = *(undefined4 *)(iVar7 + 0x44);
              *(undefined4 *)((int)pvVar13 + 0x38) = *(undefined4 *)(iVar7 + 0x48);
              *(undefined4 *)((int)pvVar13 + 0x3c) = *(undefined4 *)(iVar7 + 0x4c);
            }
            else {
              fVar5 = (float)((double)(float)(dVar25 - dVar23) / dVar25);
              *(float *)((int)pvVar13 + 0x30) = fVar3 * fVar5 + local_c0;
              *(float *)((int)pvVar13 + 0x34) = fVar2 * fVar5 + local_bc;
              *(float *)((int)pvVar13 + 0x38) = fVar4 * fVar5 + local_b8;
              *(float *)((int)pvVar13 + 0x3c) = local_b4;
            }
          }
        }
      }
    }
    fVar2 = *(float *)((int)pvVar13 + 0x34);
    fVar5 = fVar2 - *(float *)(iVar7 + 0x44);
    fVar4 = *(float *)((int)pvVar13 + 0x30) - *(float *)(iVar7 + 0x40);
    fVar3 = *(float *)((int)pvVar13 + 0x38);
    fVar8 = fVar3 - *(float *)(iVar7 + 0x48);
    fVar9 = fVar8 * (float)GameCamera.field17_0x1b4._20_4_ +
            fVar4 * (float)GameCamera.field17_0x1b4._12_4_ +
            fVar5 * (float)GameCamera.field17_0x1b4._16_4_;
    fVar5 = -((float)GameCamera.field17_0x1b4._16_4_ * fVar9 - fVar5);
    fVar4 = -((float)GameCamera.field17_0x1b4._12_4_ * fVar9 - fVar4);
    fVar8 = -((float)GameCamera.field17_0x1b4._20_4_ * fVar9 - fVar8);
    if (SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5) < 0.05) {
      iVar18 = mobyutil::MB_randInt(2);
      if (iVar18 == 0) {
        fVar2 = *(float *)((int)pvVar13 + 0x30) - 0.5;
      }
      else {
        fVar2 = *(float *)((int)pvVar13 + 0x30) + 0.5;
      }
      *(float *)((int)pvVar13 + 0x30) = fVar2;
      iVar18 = mobyutil::MB_randInt(2);
      if (iVar18 == 0) {
        fVar2 = *(float *)((int)pvVar13 + 0x34) - 0.5;
      }
      else {
        fVar2 = *(float *)((int)pvVar13 + 0x34) + 0.5;
      }
      *(float *)((int)pvVar13 + 0x34) = fVar2;
      fVar3 = *(float *)((int)pvVar13 + 0x38) + 0.5;
      *(float *)((int)pvVar13 + 0x38) = fVar3;
    }
  }
  *(float *)((int)pvVar13 + 0x68) = fVar2;
  *(undefined4 *)((int)pvVar13 + 100) = *(undefined4 *)((int)pvVar13 + 0x30);
  *(float *)((int)pvVar13 + 0x6c) = fVar3;
  uVar16 = GameCamera.field17_0x1b4._24_4_;
  uVar15 = GameCamera.field17_0x1b4._20_4_;
  uVar14 = GameCamera.field17_0x1b4._16_4_;
  uVar6 = GameCamera.field17_0x1b4._12_4_;
  fVar2 = 0.0;
  fVar5 = SQRT((float)GameCamera.field17_0x1b4._20_4_ * (float)GameCamera.field17_0x1b4._20_4_ +
               (float)GameCamera.field17_0x1b4._12_4_ * (float)GameCamera.field17_0x1b4._12_4_ +
               (float)GameCamera.field17_0x1b4._16_4_ * (float)GameCamera.field17_0x1b4._16_4_);
  fVar4 = *(float *)(iVar7 + 0xf0) / fVar5;
  fVar3 = fVar2;
  if (0.0 - fVar5 < 0.0) {
    fVar3 = (float)GameCamera.field17_0x1b4._12_4_ * fVar4;
  }
  fVar8 = fVar2;
  if (0.0 - fVar5 < 0.0) {
    fVar8 = (float)GameCamera.field17_0x1b4._16_4_ * fVar4;
  }
  fVar9 = fVar2;
  if (0.0 - fVar5 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4._20_4_ * fVar4;
  }
  if (fVar5 - 0.0 < 0.0) {
    fVar3 = (float)GameCamera.field17_0x1b4._12_4_ * fVar4;
  }
  if (fVar5 - 0.0 < 0.0) {
    fVar8 = (float)GameCamera.field17_0x1b4._16_4_ * fVar4;
  }
  if (fVar5 - 0.0 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4._20_4_ * fVar4;
  }
  fVar10 = (fVar8 + *(float *)(iVar7 + 0x44)) - *(float *)((int)pvVar13 + 0x34);
  fVar8 = (fVar3 + *(float *)(iVar7 + 0x40)) - *(float *)((int)pvVar13 + 0x30);
  fVar9 = (fVar9 + *(float *)(iVar7 + 0x48)) - *(float *)((int)pvVar13 + 0x38);
  fVar1 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
  fVar3 = fVar2;
  fVar4 = fVar2;
  fVar5 = fVar2;
  if (SQRT(fVar1) != 0.0) {
    fVar3 = 1.0 / SQRT(fVar1);
    fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar5 = fVar8 * fVar3;
    fVar4 = fVar10 * fVar3;
    fVar3 = fVar9 * fVar3;
  }
  fVar9 = (float)GameCamera.field17_0x1b4._20_4_ * fVar4;
  fVar8 = (float)GameCamera.field17_0x1b4._16_4_ * fVar5;
  *(float *)pvVar13 = fVar5;
  *(float *)((int)pvVar13 + 4) = fVar4;
  fVar9 = (float)uVar14 * fVar3 - fVar9;
  *(float *)((int)pvVar13 + 8) = fVar3;
  *(undefined4 *)((int)pvVar13 + 0xc) = uVar16;
  *(undefined4 *)((int)pvVar13 + 0x1c) = 0;
  fVar11 = (float)uVar15 * fVar5 - (float)uVar6 * fVar3;
  fVar8 = (float)uVar6 * fVar4 - fVar8;
  fVar12 = fVar8 * fVar8 + fVar9 * fVar9 + fVar11 * fVar11;
  fVar10 = fVar2;
  fVar1 = fVar2;
  if (SQRT(fVar12) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar12);
    fVar10 = -(fVar12 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar12 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar12 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar2 = fVar9 * fVar10;
    fVar1 = fVar11 * fVar10;
    fVar10 = fVar8 * fVar10;
  }
  *(float *)((int)pvVar13 + 0x10) = fVar2;
  *(float *)((int)pvVar13 + 0x14) = fVar1;
  *(float *)((int)pvVar13 + 0x18) = fVar10;
  *(undefined4 *)((int)pvVar13 + 0x2c) = 0;
  *(float *)((int)pvVar13 + 0x40) = fVar5;
  *(float *)((int)pvVar13 + 0x44) = fVar4;
  *(float *)((int)pvVar13 + 0x48) = fVar3;
  *(undefined4 *)((int)pvVar13 + 0x4c) = uVar16;
  *(float *)((int)pvVar13 + 0x20) = fVar4 * fVar10 - fVar3 * fVar1;
  *(float *)((int)pvVar13 + 0x24) = fVar3 * fVar2 - fVar5 * fVar10;
  *(float *)((int)pvVar13 + 0x28) = fVar5 * fVar1 - fVar4 * fVar2;
  return;
}



