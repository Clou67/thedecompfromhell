//==== 00421f08  ns=mobyupdate_helpers  size=0x7a4
// sig: undefined M694_00421f08(void)
// callers(2): 004226b8 mobyupdate_helpers::M694_004226b8; 00422f08 mobyupdate_unsorted::UpdateMoby_694
// callees(8): 00057820 collproc::CollLine; 00104e44 mobyutil::PointInsideComplexPoly; 0010bcf0 mobyutil::MB_MtxToQuat; 001378e0 path::NearestPntOnPathAtDist; 004fff60 fastfunc::FastDecTimerS32; 00501848 fastfunc::FastSlerp; 00501ab0 fastfunc::FastQuaternionToMtx4; 00501e18 fastfunc::FastQuaternionToMtx4Identity

undefined8
mobyupdate_helpers::M694_00421f08(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar19;
  undefined8 uVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
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
  double dVar30;
  ulonglong in_f28;
  double dVar31;
  ulonglong in_f29;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  ulonglong in_f31;
  undefined1 auVar34 [16];
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0x180;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar17;
  puVar12[0x32] = in_LR;
  puVar12[0x20] = in_f16;
  puVar12[0x21] = in_f17;
  puVar12[0x22] = in_f18;
  puVar12[0x23] = in_f19;
  puVar12[0x24] = in_f20;
  puVar12[0x25] = in_f21;
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
  puVar12[0x1e] = unaff_r30;
  puVar12[0x1d] = unaff_r29;
  puVar12[0x1f] = unaff_r31;
  puVar12[0x1c] = unaff_r28;
  puVar12[0x1b] = unaff_r27;
  puVar12[0x1a] = unaff_r26;
  fastfunc::FastDecTimerS32(param_2 + 0x184);
  dVar33 = 0.0;
  iVar13 = (int)param_1;
  dVar32 = dVar33;
  dVar31 = dVar33;
  dVar30 = dVar33;
  dVar24 = dVar33;
  if (param_3 != (float *)0x0) {
    fVar6 = param_3[1] - *(float *)(iVar13 + 0x14);
    fVar7 = *param_3 - *(float *)(iVar13 + 0x10);
    fVar8 = param_3[2] - *(float *)(iVar13 + 0x18);
    dVar25 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    dVar24 = 1.0;
    if (dVar25 - 1.0 < 0.0) {
      dVar24 = dVar25;
    }
    fVar2 = (float)(dVar24 / dVar25);
    if (0.0 - dVar25 < 0.0) {
      dVar30 = (double)(fVar7 * fVar2);
    }
    if (0.0 - dVar25 < 0.0) {
      dVar31 = (double)(fVar6 * fVar2);
    }
    if (0.0 - dVar25 < 0.0) {
      dVar32 = (double)(fVar8 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar30 = (double)(fVar7 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar31 = (double)(fVar6 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar32 = (double)(fVar8 * fVar2);
    }
  }
  lVar20 = param_2 + 0xc0;
  fastfunc::FastQuaternionToMtx4Identity(lVar20,uVar17 - 0xf0);
  dVar25 = (double)DAT_00857950;
  dVar28 = (double)DAT_0085795c;
  dVar21 = (double)(float)((double)*(float *)((int)puVar12 + 0xc4) * dVar28 +
                          (double)(*(float *)((int)puVar12 + 0xb4) * DAT_00857958 +
                                  (float)((double)*(float *)((int)puVar12 + 0x94) * dVar25 +
                                         (double)(*(float *)((int)puVar12 + 0xa4) * DAT_00857954))))
  ;
  dVar22 = (double)(float)((double)*(float *)(puVar12 + 0x18) * dVar28 +
                          (double)(*(float *)(puVar12 + 0x16) * DAT_00857958 +
                                  (float)((double)*(float *)(puVar12 + 0x12) * dVar25 +
                                         (double)(*(float *)(puVar12 + 0x14) * DAT_00857954))));
  dVar28 = (double)(float)((double)*(float *)(puVar12 + 0x19) * dVar28 +
                          (double)(*(float *)(puVar12 + 0x17) * DAT_00857958 +
                                  (float)((double)*(float *)(puVar12 + 0x13) * dVar25 +
                                         (double)(*(float *)(puVar12 + 0x15) * DAT_00857954))));
  dVar26 = (double)SQRT((float)(dVar28 * dVar28 +
                               (double)(float)(dVar22 * dVar22 + (double)(float)(dVar21 * dVar21))))
  ;
  iVar14 = (int)param_2;
  fVar6 = *(float *)(iVar14 + 0x88);
  fVar7 = *(float *)(iVar14 + 0x8c);
  fVar8 = *(float *)(iVar13 + 0x10);
  fVar2 = *(float *)(iVar13 + 0x14);
  fVar9 = *(float *)(iVar13 + 0x18);
  fVar10 = *(float *)(iVar14 + 0x84);
  auVar37 = loadVectorLeftIndexed(0xb0,lVar1);
  auVar39 = loadVectorLeftIndexed(0xb4,lVar1);
  auVar41 = loadVectorLeftIndexed(0xb8,lVar1);
  auVar34 = loadVectorLeftIndexed(0xbc,lVar1);
  auVar35 = loadVectorLeftIndexed(0x88,param_2);
  auVar36 = loadVectorLeftIndexed(0x8c,param_2);
  auVar38 = loadVectorLeftIndexed(0x10,param_1);
  auVar40 = loadVectorLeftIndexed(0x14,param_1);
  auVar42 = loadVectorLeftIndexed(0x18,param_1);
  dVar29 = (double)(float)((double)(float)(dVar28 * dVar32 +
                                          (double)(float)(dVar22 * dVar30 +
                                                         (double)(float)(dVar21 * dVar31))) / dVar26
                          );
  dVar25 = dVar33;
  if (dVar33 - dVar26 < 0.0) {
    dVar25 = (double)(float)(dVar21 * dVar29);
  }
  dVar23 = dVar33;
  if (dVar33 - dVar26 < 0.0) {
    dVar23 = (double)(float)(dVar22 * dVar29);
  }
  dVar27 = dVar33;
  if (dVar33 - dVar26 < 0.0) {
    dVar27 = (double)(float)(dVar28 * dVar29);
  }
  if (dVar26 - dVar33 < 0.0) {
    dVar25 = (double)(float)(dVar21 * dVar29);
  }
  if (dVar26 - dVar33 < 0.0) {
    dVar23 = (double)(float)(dVar22 * dVar29);
  }
  if (dVar26 - dVar33 < 0.0) {
    dVar27 = (double)(float)(dVar28 * dVar29);
  }
  fVar3 = (float)(dVar31 - dVar25);
  fVar4 = (float)(dVar30 - dVar23);
  fVar5 = (float)(dVar32 - dVar27);
  fVar15 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  dVar30 = dVar33;
  dVar31 = dVar33;
  dVar32 = dVar33;
  if ((double)SQRT(fVar15) != dVar33) {
    fVar16 = 1.0 / SQRT(fVar15);
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    dVar30 = (double)(fVar4 * fVar16);
    dVar31 = (double)(fVar3 * fVar16);
    dVar32 = (double)(fVar5 * fVar16);
  }
  auVar43 = ZEXT416(0xffffffff);
  auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  auVar43 = ZEXT416(0xffffffff);
  auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  *(undefined4 *)((int)puVar12 + 0x7c) = 0;
  *(undefined4 *)(puVar12 + 0xf) = 0;
  *(undefined4 *)((int)puVar12 + 0x74) = 0;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  auVar45 = vectorMultiplyAddFloatingPoint(auVar34,auVar35,auVar44);
  *(undefined4 *)((int)puVar12 + 0x8c) = 0;
  *(undefined4 *)(puVar12 + 0x11) = 0;
  *(undefined4 *)((int)puVar12 + 0x84) = 0;
  *(undefined4 *)(puVar12 + 0x10) = 0;
  auVar46 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  auVar43 = ZEXT416(0xffffffff);
  auVar47 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  dVar25 = (double)SQRT((float)(dVar32 * dVar32 +
                               (double)(float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31))))
  ;
  auVar43 = ZEXT416(0xffffffff);
  auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
  auVar43 = ZEXT416(0xffffffff);
  auVar47 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar43 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
  uVar11 = storeVectorElementWordIndexed
                     (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x7c,lVar1);
  *(undefined4 *)((int)puVar12 + 0x7c) = uVar11;
  auVar46 = vectorMultiplyAddFloatingPoint(auVar36,auVar37,auVar46);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar38);
  auVar49 = vectorMultiplyAddFloatingPoint(auVar39,auVar35,auVar40);
  auVar43 = vectorMultiplyAddFloatingPoint(auVar41,auVar35,auVar42);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar36,auVar39,auVar48);
  auVar41 = vectorMultiplyAddFloatingPoint(auVar36,auVar41,auVar44);
  auVar35 = loadVectorLeftIndexed(0xc,0x421ef0);
  auVar37 = vectorMultiplyAddFloatingPoint(auVar36,auVar34,auVar47);
  auVar34 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar44 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  auVar34 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar35 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = vectorAddFloatingPoint(auVar44 ^ auVar46,auVar38);
  auVar39 = vectorAddFloatingPoint(auVar44 ^ auVar39,auVar40);
  auVar40 = vectorAddFloatingPoint(auVar44 ^ auVar41,auVar42);
  auVar37 = (auVar44 ^ auVar37) >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar11 = storeVectorElementWordIndexed
                     (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x8c,lVar1);
  *(undefined4 *)((int)puVar12 + 0x8c) = uVar11;
  uVar11 = storeVectorElementWordIndexed
                     (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x70,lVar1);
  *(undefined4 *)(puVar12 + 0xe) = uVar11;
  auVar34 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar37 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar11 = storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x74,lVar1);
  *(undefined4 *)((int)puVar12 + 0x74) = uVar11;
  uVar11 = storeVectorElementWordIndexed
                     (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x78,lVar1);
  *(undefined4 *)(puVar12 + 0xf) = uVar11;
  uVar11 = storeVectorElementWordIndexed
                     (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x80,lVar1);
  *(undefined4 *)(puVar12 + 0x10) = uVar11;
  dVar21 = (double)(float)(dVar24 / dVar25);
  uVar11 = storeVectorElementWordIndexed
                     (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x84,lVar1);
  *(undefined4 *)((int)puVar12 + 0x84) = uVar11;
  uVar11 = storeVectorElementWordIndexed
                     (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar12 + 0x11) = uVar11;
  dVar24 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar24 = (double)(float)(dVar30 * dVar21);
  }
  dVar22 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar22 = (double)(float)(dVar31 * dVar21);
  }
  dVar28 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar28 = (double)(float)(dVar32 * dVar21);
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar24 = (double)(float)(dVar30 * dVar21);
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar22 = (double)(float)(dVar31 * dVar21);
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar28 = (double)(float)(dVar32 * dVar21);
  }
  if (param_3 != (float *)0x0) {
    dVar25 = (double)((fVar10 * fVar7) / fVar6);
    *(float *)(puVar12 + 0x10) =
         (float)(dVar24 * dVar25 +
                (double)((float)((double)*(float *)(puVar12 + 0x18) * dVar33 +
                                (double)((float)((double)*(float *)(puVar12 + 0x12) * dVar33 +
                                                dVar33) + -(fVar7 * *(float *)(puVar12 + 0x16)))) +
                        fVar8));
    *(float *)((int)puVar12 + 0x84) =
         (float)(dVar22 * dVar25 +
                (double)((float)((double)*(float *)((int)puVar12 + 0xc4) * dVar33 +
                                (double)((float)((double)*(float *)((int)puVar12 + 0x94) * dVar33 +
                                                dVar33) + -(fVar7 * *(float *)((int)puVar12 + 0xb4))
                                        )) + fVar2));
    *(float *)(puVar12 + 0x11) =
         (float)(dVar28 * dVar25 +
                (double)((float)((double)*(float *)(puVar12 + 0x19) * dVar33 +
                                (double)((float)((double)*(float *)(puVar12 + 0x13) * dVar33 +
                                                dVar33) + -(fVar7 * *(float *)(puVar12 + 0x17)))) +
                        fVar9));
  }
  iVar19 = collproc::CollLine(uVar17 - 0x110,uVar17 - 0x100,0x12,param_1,0);
  if (iVar19 == 0) {
    fastfunc::FastSlerp((double)(*(float *)(iVar14 + 0x70) * DAT_0071f408),lVar20,lVar20,
                        param_2 + 0xd0);
    fastfunc::FastQuaternionToMtx4(lVar20,param_1 + 0xc0);
    uVar18 = 0;
  }
  else {
    if (param_4 != (float *)0x0) {
      *param_4 = ABS(*(float *)(iVar13 + 0x18) - CollOutput.ip.z);
    }
    if (((*(byte *)(iVar13 + 0x20) < 6) || (*(int *)(iVar14 + 0x180) == -1)) ||
       (iVar19 = mobyutil::PointInsideComplexPoly
                           ((Vec4 *)&CollOutput.ip,(Vec4 *)Splines[*(int *)(iVar14 + 0x180)]->points
                            ,Splines[*(int *)(iVar14 + 0x180)]->cnt), iVar19 != 0)) {
      *(float *)(iVar14 + 0xe0) = CollOutput.ip.x;
      *(float *)(iVar14 + 0xe4) = CollOutput.ip.y;
      *(float *)(iVar14 + 0xe8) = CollOutput.ip.z;
      *(float *)(iVar14 + 0xec) = CollOutput.ip.w;
    }
    else {
      path::NearestPntOnPathAtDist
                ((float)dVar33,(Vec4 *)(iVar14 + 0xe0),iVar13 + 0x10,0xa10960,
                 Splines[*(int *)(iVar14 + 0x180)]);
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      *(undefined4 *)(iVar14 + 0xe8) = *(undefined4 *)(iVar13 + 0x18);
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x10,0x421ef0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x184,
                          param_2);
      *(undefined4 *)(iVar14 + 0x184U & 0xfffffffc) = uVar11;
    }
    fVar7 = CollOutput.normal.w;
    fVar6 = CollOutput.normal.z * CollOutput.normal.z +
            CollOutput.normal.x * CollOutput.normal.x + CollOutput.normal.y * CollOutput.normal.y;
    dVar24 = dVar33;
    dVar25 = dVar33;
    if ((double)SQRT(fVar6) != dVar33) {
      fVar8 = 1.0 / SQRT(fVar6);
      fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      dVar33 = (double)(CollOutput.normal.y * fVar8);
      dVar24 = (double)(CollOutput.normal.x * fVar8);
      dVar25 = (double)(CollOutput.normal.z * fVar8);
    }
    *(undefined4 *)((int)puVar12 + 0x9c) = 0;
    *(undefined4 *)((int)puVar12 + 0xac) = 0;
    *(float *)(puVar12 + 0x16) = (float)dVar24;
    *(float *)((int)puVar12 + 0xb4) = (float)dVar33;
    fVar6 = (float)(dVar33 * dVar32 - (double)(float)(dVar25 * dVar31));
    dVar21 = (double)fVar6;
    fVar8 = (float)(dVar25 * dVar30 - (double)(float)(dVar24 * dVar32));
    dVar32 = (double)fVar8;
    fVar2 = (float)(dVar24 * dVar31 - (double)(float)(dVar33 * dVar30));
    dVar30 = (double)fVar2;
    *(float *)(puVar12 + 0x14) = fVar6;
    *(float *)((int)puVar12 + 0xa4) = fVar8;
    *(float *)(puVar12 + 0x15) = fVar2;
    *(float *)(puVar12 + 0x17) = (float)dVar25;
    *(float *)((int)puVar12 + 0xbc) = fVar7;
    *(float *)((int)puVar12 + 0x94) = (float)(dVar30 * dVar24 - (double)(float)(dVar21 * dVar25));
    *(float *)(puVar12 + 0x13) = (float)(dVar21 * dVar33 - (double)(float)(dVar32 * dVar24));
    *(float *)(puVar12 + 0x12) = (float)(dVar32 * dVar25 - (double)(float)(dVar30 * dVar33));
    mobyutil::MB_MtxToQuat((float *)(param_2 + 0xd0),(float *)(puVar12 + 0x12));
    fastfunc::FastSlerp((double)(*(float *)(iVar14 + 0x70) * DAT_0071f408),lVar20,lVar20,
                        param_2 + 0xd0);
    fastfunc::FastQuaternionToMtx4(lVar20,param_1 + 0xc0);
    uVar18 = 1;
  }
  return uVar18;
}



//==== 004226b8  ns=mobyupdate_helpers  size=0x164
// sig: undefined M694_004226b8(void)
// callers(2): 00422aa0 mobyupdate_helpers::M694_00422aa0; 00422f08 mobyupdate_unsorted::UpdateMoby_694
// callees(1): 00421f08 mobyupdate_helpers::M694_00421f08

void mobyupdate_helpers::M694_004226b8(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar4 = *param_3 - *(float *)(param_1 + 0x10);
  fVar2 = param_3[2] - *(float *)(param_1 + 0x18);
  fVar6 = 0.0;
  fVar3 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1);
  fVar8 = 0.0001 / fVar3;
  fVar5 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar5 = fVar4 * fVar8;
  }
  fVar7 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar7 = fVar1 * fVar8;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar6 = fVar2 * fVar8;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar5 = fVar4 * fVar8;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar7 = fVar1 * fVar8;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar6 = fVar2 * fVar8;
  }
  *param_3 = *(float *)(param_1 + 0x10) + fVar5;
  param_3[1] = *(float *)(param_1 + 0x14) + fVar7;
  param_3[2] = *(float *)(param_1 + 0x18) + fVar6;
  param_3[3] = *(float *)(param_1 + 0x1c);
  M694_00421f08(param_1,param_2,param_3,0);
  fVar2 = *(float *)(param_2 + 0xe4) - *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_2 + 0xe0) - *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_2 + 0xe8) - *(float *)(param_1 + 0x18);
  fVar1 = *(float *)(param_2 + 0x7c);
  fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar5 = fVar1 / fVar6;
  if (fVar1 - fVar6 < 0.0) {
    fVar4 = fVar4 * fVar5;
  }
  if (fVar1 - fVar6 < 0.0) {
    fVar2 = fVar2 * fVar5;
  }
  if (fVar1 - fVar6 < 0.0) {
    fVar3 = fVar3 * fVar5;
  }
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar4;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar2;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar3;
  return;
}



//==== 00422828  ns=mobyupdate_helpers  size=0x264
// sig: undefined M694_00422828(void)
// callers(1): 00422f08 mobyupdate_unsorted::UpdateMoby_694
// callees(2): 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler

void mobyupdate_helpers::M694_00422828(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0xd0;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar9;
  puVar6[0x1c] = in_LR;
  puVar6[0x17] = unaff_r29;
  puVar6[0x19] = unaff_r31;
  puVar6[0x18] = unaff_r30;
  fastfunc::FastQuaternionToEuler(0x400921fb60000000,uVar9 - 0x60,0);
  fastfunc::FastQuaternionMult(param_2 + 0xc0,param_2 + 0xc0,uVar9 - 0x60);
  iVar5 = *(int *)(param_2 + 0x80);
  if (iVar5 == 0) {
    dVar17 = 0.0;
  }
  else {
    fVar2 = *(float *)(iVar5 + 0x10) - *(float *)(param_1 + 0x10);
    fVar1 = *(float *)(iVar5 + 0x14) - *(float *)(param_1 + 0x14);
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 0x10) = fVar2;
    *(float *)((int)puVar6 + 0x84) = fVar1;
    *(float *)(puVar6 + 0x11) = fVar3 - fVar4;
    dVar17 = 0.0;
    uVar10 = (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar6 + 0x10));
    if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar10 << 2));
    fVar1 = *(float *)(((uint)(uVar10 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar6 + 0x84));
    if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
      fVar8 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar14 = uVar9 - 0xc0;
      lVar13 = uVar9 - 0x44;
      lVar12 = uVar9 - 0x34;
      lVar16 = 2;
      fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x13) = fVar2;
      *(float *)(puVar6 + 0x12) = fVar2;
      *(float *)((int)puVar6 + 0x94) = fVar2;
      *(float *)((int)puVar6 + 0x8c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3;
      *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar2;
      *(float *)(puVar6 + 0x13) = *(float *)(puVar6 + 0x13) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x7c) * fVar2 * fVar2;
        iVar5 = (int)lVar13;
        lVar14 = lVar14 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar14 = uVar9 - 0x44;
      pfVar15 = (float *)&DAT_007358e0;
      lVar16 = 4;
      lVar12 = lVar14;
      lVar13 = lVar11;
      do {
        fVar2 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar13 + 0x8c) = *(float *)((int)lVar13 + 0x8c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar12 = 2;
      do {
        iVar5 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar7 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar5 + 0x8c)) + *(float *)(iVar7 + 4)
                          + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
    }
  }
  fastfunc::FastQuaternionToEuler(dVar17,param_2 + 0xd0,2);
  return;
}



//==== 00422aa0  ns=mobyupdate_helpers  size=0x408
// sig: undefined M694_00422aa0(void)
// callers(1): 00422f08 mobyupdate_unsorted::UpdateMoby_694
// callees(5): 00059e20 collproc::CollSphere; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 004226b8 mobyupdate_helpers::M694_004226b8; 005c8318 rand

void mobyupdate_helpers::M694_00422aa0(int param_1,int param_2,float *param_3,float *param_4)

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
  vec4 *pvVar12;
  MobyInstance *pMVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_70;
  float local_6c;
  float local_68;
  
  mobyfunc::GetBonePosition(param_1,1,&local_70);
  fVar1 = *(float *)(param_1 + 0x14);
  fVar5 = local_6c - fVar1;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar9 = local_70 - fVar2;
  fVar8 = local_68 - fVar3;
  fVar4 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5);
  fVar6 = 0.0;
  fVar11 = *(float *)(param_2 + 0x90) / fVar4;
  fVar7 = fVar6;
  if (0.0 - fVar4 < 0.0) {
    fVar7 = fVar9 * fVar11;
  }
  fVar10 = fVar6;
  if (0.0 - fVar4 < 0.0) {
    fVar10 = fVar5 * fVar11;
  }
  if (0.0 - fVar4 < 0.0) {
    fVar6 = fVar8 * fVar11;
  }
  if (fVar4 - 0.0 < 0.0) {
    fVar7 = fVar9 * fVar11;
  }
  if (fVar4 - 0.0 < 0.0) {
    fVar10 = fVar5 * fVar11;
  }
  if (fVar4 - 0.0 < 0.0) {
    fVar6 = fVar8 * fVar11;
  }
  dVar18 = (double)(fVar7 + *param_3);
  dVar19 = (double)(fVar10 + param_3[1]);
  dVar20 = (double)(fVar6 + param_3[2]);
  iVar14 = collproc::CollSphere(&local_70);
  fVar4 = *(float *)(param_2 + 0x90);
  if (iVar14 != 0) {
    fVar1 = CollOutput.push.y - (fVar10 + fVar1);
    fVar3 = CollOutput.push.z - (fVar6 + fVar3);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (CollOutput.push.x - (fVar7 + fVar2));
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar1;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar3;
  }
  iVar14 = collproc::CollSphere((double)fVar4,&local_70);
  if (((iVar14 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
     ((CollOutput.pMoby)->oClass == 0x2b6)) {
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x10);
    fVar4 = fVar1 - param_4[1];
    fVar9 = ((CollOutput.pMoby)->pos).y - param_4[1];
    fVar6 = fVar2 - *param_4;
    fVar3 = *(float *)(param_1 + 0x18);
    fVar7 = ((CollOutput.pMoby)->pos).x - *param_4;
    fVar5 = fVar3 - param_4[2];
    fVar8 = ((CollOutput.pMoby)->pos).z - param_4[2];
    if (SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) <=
        SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9)) {
      dVar16 = (double)CollOutput.push.y;
      dVar17 = (double)CollOutput.push.z;
      *(float *)(param_1 + 0x10) = (float)((double)CollOutput.push.x - dVar18) * 0.25 + fVar2;
      *(float *)(param_1 + 0x14) = (float)(dVar16 - dVar19) * 0.25 + fVar1;
      *(float *)(param_1 + 0x18) = (float)(dVar17 - dVar20) * 0.25 + fVar3;
    }
    else if (*(char *)(param_1 + 0x20) == '\x06') {
      iVar14 = rand();
      iVar15 = (uint)*(byte *)(param_2 + 0xa9) - (uint)*(byte *)(param_2 + 0xa8);
      *(char *)(param_2 + 0xaa) =
           (char)(int)(animationSpeed *
                      ((float)(longlong)
                              (int)((uint)*(byte *)(param_2 + 0xa8) +
                                   (iVar14 - (iVar14 / iVar15) * iVar15)) + 0.5));
      *(undefined1 *)(param_1 + 0x20) = 0xb;
      if (*(char *)(param_1 + 0x53) != '\x05') {
        mobyutil::MB_SetAnimation(param_1,5,0,(int)(animationSpeed * 10.5));
      }
      pMVar13 = CollOutput.pMoby;
      dVar16 = (double)CollOutput.push.y;
      dVar17 = (double)CollOutput.push.z;
      pvVar12 = &(CollOutput.pMoby)->pos;
      fVar1 = ((CollOutput.pMoby)->pos).z;
      ((CollOutput.pMoby)->pos).x =
           ((CollOutput.pMoby)->pos).x + (float)((double)CollOutput.push.x - dVar18);
      (pMVar13->pos).y = pvVar12->y + (float)(dVar16 - dVar19);
      (pMVar13->pos).z = fVar1 + (float)(dVar17 - dVar20);
      *(float *)(param_1 + 0x10) = *param_3;
      *(float *)(param_1 + 0x14) = param_3[1];
      *(float *)(param_1 + 0x18) = param_3[2];
      *(float *)(param_1 + 0x1c) = param_3[3];
    }
    else {
      dVar16 = (double)CollOutput.push.y;
      dVar17 = (double)CollOutput.push.z;
      *(float *)(param_1 + 0x10) = (float)((double)CollOutput.push.x - dVar18) * 0.15 + fVar2;
      *(float *)(param_1 + 0x14) = (float)(dVar16 - dVar19) * 0.15 + fVar1;
      *(float *)(param_1 + 0x18) = (float)(dVar17 - dVar20) * 0.15 + fVar3;
    }
  }
  M694_004226b8(param_1,param_2,param_4);
  return;
}



//==== 00422f08  ns=mobyupdate_unsorted  size=0x1eb0
// sig: undefined UpdateMoby_694(MobyInstance * moby)
// callers(0): 
// callees(44): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcd60 mobyutil::MB_DistributeBolts; 000fddc0 mobyutil::MB_SetAnimation; 000fea60 mobyutil::MB_randSphere; 00104e44 mobyutil::PointInsideComplexPoly; 001057f4 mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 00105d2c mobyutil::CollDamageMobyDirect_wrap; 00106078 mobyutil::MB_EulerToQuat; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c000 mobyutil::MB_CopyHeroLights; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010d7a0 mobyutil::MB_PathFollowToPos; 0010de78 mobyutil::MB_WrapRot; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 001367d0 path::PathFindClosestPnt; 001385d0 path::Path_PickNextNode; 00421f08 mobyupdate_helpers::M694_00421f08; 004226b8 mobyupdate_helpers::M694_004226b8; 00422828 mobyupdate_helpers::M694_00422828; 00422aa0 mobyupdate_helpers::M694_00422aa0; 005000b4 fastfunc::FastDecTimerU8; 00500fa8 fastfunc::FastApplyTransform; 00501848 fastfunc::FastSlerp; 00501e18 fastfunc::FastQuaternionToMtx4Identity; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf; 005e7ed8 FUN_005e7ed8; 005e7f98 FUN_005e7f98
// strings: 00657254: 'warning: no path for PATH_DOWN type on moby 694 :%d\n Switching to ALREADY_DOWN state.\n' | 006572ac: 'warning: no path for PATH_DROP type on moby 694 :%d\n Switching to DROP_DOWN state.\n'

/* Moby 694 */

void mobyupdate_unsorted::UpdateMoby_694(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  Spline *spline;
  uint uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float local_230;
  float local_22c;
  float local_224;
  float local_220;
  float local_21c;
  undefined1 local_210 [16];
  Vec4 VStack_200;
  f32 local_1f0;
  f32 local_1ec;
  f32 local_1e8;
  f32 local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  f32 local_1d0;
  f32 local_1cc;
  f32 local_1c8;
  f32 local_1c4;
  float local_1c0;
  float local_1bc;
  f32 local_1b8;
  f32 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  f32 local_180;
  f32 local_17c;
  f32 local_178;
  f32 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  f32 local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  f32 local_148;
  f32 local_144;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  Vec4 aVStack_f0 [4];
  Vec4 aVStack_b0 [4];
  MobyInstance *local_70;
  int local_60;
  float local_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  uint local_50;
  uint local_4c;
  longlong local_48;
  
  lVar15 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pvVar6 = moby->pVar;
    uVar16 = ZEXT48(pvVar6);
    if (pvVar6 != (void *)0x0) {
      if (moby->state != '\f') {
        pfVar11 = (float *)mobyutil::MB_damage(lVar15,0x330000,0);
        mobyutil::MB_HandleDamage(moby,pfVar11,uVar16 + 0x20,0,&local_60,0,0,4);
        if (1 < local_60) {
          fVar24 = DAT_0071f418 * 32.0;
          *(undefined4 *)((int)pvVar6 + 0x114) = 0x3a03126f;
          *(float *)((int)pvVar6 + 0x110) = fVar24;
          fVar24 = mobyutil::g_FrameTime;
          uVar13 = (int)*(uint *)((int)pvVar6 + 0x20) >> 0x1f;
          *(float *)((int)pvVar6 + 0x118) = mobyutil::g_FrameTime * 3.0;
          *(undefined1 *)((int)pvVar6 + 0x13d) = 0;
          *(undefined4 *)((int)pvVar6 + 0x124) = 9;
          *(float *)((int)pvVar6 + 0x11c) = fVar24 * 4.0;
          uVar7 = (int)pfVar11[0xb] >> 0x1f;
          if ((int)((uVar7 >> 1 ^ (uint)pfVar11[0xb]) - uVar7) <
              (int)((uVar13 >> 1 ^ *(uint *)((int)pvVar6 + 0x20)) - uVar13)) {
            mobyutil::MB_DistributeBolts
                      (lVar15,*(undefined4 *)((int)pvVar6 + 0x178),
                       *(undefined4 *)((int)pvVar6 + 0x17c),0,0xffffffffffffffff);
            fVar24 = pfVar11[0xb];
            auVar20 = ZEXT416(0xffffffff);
            auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
            *(undefined1 *)((int)pvVar6 + 0x167) = 0xfa;
            auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
            *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar24;
            auVar20 = loadVectorLeftIndexed(0x14,0x422ea8);
            auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar20 = vectorMultiplyAddFloatingPoint
                                (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 |
                                         auVar20 << 0x60,auVar21);
            auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
            auVar20 = vectorSplatHalfWord(auVar20,1);
            uVar9 = storeVectorElementHalfWordIndexed(auVar20,0x26,uVar16);
            *(undefined2 *)((int)pvVar6 + 0x26) = uVar9;
            mobyutil::MB_UpdateLightsTransition(lVar15,uVar16 + 0x160);
          }
          else {
            dVar17 = (double)FUN_005e8338((double)((moby->pos).x - *pfVar11),
                                          (double)((moby->pos).y - pfVar11[1]));
            local_5c = (float)dVar17;
            *(undefined4 *)((int)pvVar6 + 0x20) = 0;
            moby->modeBits =
                 moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            *(undefined4 *)((int)pvVar6 + 0x130) = 0x3df5c28f;
            fVar24 = mobyutil::g_FrameTime;
            *(float *)((int)pvVar6 + 0x118) = mobyutil::g_FrameTime * 12.0;
            *(float *)((int)pvVar6 + 0x11c) = fVar24 * 10.0;
            mobyutil::MB_VecAtan2Angles
                      (*(undefined8 *)(pfVar11 + 4),*(undefined8 *)(pfVar11 + 6),&local_5c,
                       uVar16 + 0x118,uVar16 + 0x11c);
            mobyutil::MB_StartKick((double)local_5c,lVar15,uVar16 + 0x100);
            *(undefined4 *)((int)pvVar6 + 0x150) = 0x41300000;
            *(undefined4 *)((int)pvVar6 + 0x154) = 0x418c0000;
            *(undefined1 *)((int)pvVar6 + 0x167) = 0x78;
            mobyutil::MB_UpdateLightsTransition(lVar15,uVar16 + 0x160);
            moby->state = '\f';
          }
          if (((uint)pfVar11[0xc] & 1) != 0) {
            *(float *)((int)pvVar6 + 0xf0) = pfVar11[4];
            *(float *)((int)pvVar6 + 0xf4) = pfVar11[5];
            *(float *)((int)pvVar6 + 0xf8) = pfVar11[6];
            *(float *)((int)pvVar6 + 0xfc) = pfVar11[7];
          }
        }
        moby->damage = -1;
      }
      mobyutil::MB_ColorDyingMoby(lVar15,uVar16 + 0x160);
      dVar19 = 100000.0;
      dVar17 = (double)*(float *)((int)pvVar6 + 0xa0);
      if ((double)*(float *)((int)pvVar6 + 0xa0) - (double)*(float *)((int)pvVar6 + 100) < 0.0) {
        dVar17 = (double)*(float *)((int)pvVar6 + 100);
      }
      mobyutil::MB_getTarget(dVar17,lVar15,&DAT_00422ea8,aVStack_b0);
      *(MobyInstance **)((int)pvVar6 + 0x80) = local_70;
      if (local_70 == (MobyInstance *)0x0) {
        mobyutil::MB_randSphere(0x3fe0000000000000,0x3ff0000000000000,&local_220);
        local_230 = g_heroPosition.x + local_220;
        local_22c = g_heroPosition.y + local_21c;
        local_224 = g_heroPosition.w;
      }
      else {
        local_230 = (local_70->pos).x;
        dVar17 = (double)local_230;
        local_22c = (local_70->pos).y;
        local_224 = (local_70->pos).w;
        fVar24 = (moby->pos).y - *(float *)(*(int *)((int)pvVar6 + 0x80) + 0x14);
        fVar2 = (moby->pos).x - *(float *)(*(int *)((int)pvVar6 + 0x80) + 0x10);
        dVar19 = (double)SQRT(fVar2 * fVar2 + fVar24 * fVar24);
        if ((double)(*(float *)((int)pvVar6 + 0x9c) + *(float *)((int)pvVar6 + 0x68)) < dVar19) {
          dVar18 = (double)mathfunc::cosf(*(float *)((int)pvVar6 + 0x98));
          local_230 = (float)((double)*(float *)((int)pvVar6 + 0x9c) * dVar18 + dVar17);
          dVar18 = (double)local_22c;
          dVar17 = (double)FUN_005e8128((double)*(float *)((int)pvVar6 + 0x98));
          local_22c = (float)((double)*(float *)((int)pvVar6 + 0x9c) * dVar17 + dVar18);
        }
        if (((5 < moby->state) && (*(int *)((int)pvVar6 + 0x180) != -1)) &&
           (iVar12 = mobyutil::PointInsideComplexPoly
                               (aVStack_b0,(Vec4 *)Splines[*(int *)((int)pvVar6 + 0x180)]->points,
                                Splines[*(int *)((int)pvVar6 + 0x180)]->cnt), iVar12 == 0)) {
          mobyutil::MB_PathFollowToPos
                    (0x408f380000000000,0x4014000000000000,0,Splines[*(int *)((int)pvVar6 + 0x180)],
                     &local_230,&local_230,auStack_58,auStack_54);
        }
      }
      if (g_heroState == TAKING_DAMAGE) {
        auVar20 = ZEXT416(0xfffffff8);
        auVar21 = ZEXT416(0xffffffff);
        auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
        auVar21 = loadVectorLeftIndexed(0xab,uVar16);
        auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar20 = vectorShiftRightWord
                            (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
        auVar21 = vectorConvertFromSignedFixedPointWord(auVar20,0);
        auVar20 = loadVectorLeftIndexed(0x1c,0x422ea8);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorAddFloatingPoint
                            (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
        auVar20 = vectorMultiplyAddFloatingPoint(auVar23,auVar20,auVar22);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xff;
        uVar8 = storeVectorElementByteIndexed
                          (auVar20 | auVar20 << 8 | auVar20 << 0x10 | auVar20 << 0x18 |
                           auVar20 << 0x20 | auVar20 << 0x28 | auVar20 << 0x30 | auVar20 << 0x38 |
                           auVar20 << 0x40 | auVar20 << 0x48 | auVar20 << 0x50 | auVar20 << 0x58 |
                           auVar20 << 0x60 | auVar20 << 0x68 | auVar20 << 0x70 | auVar20 << 0x78,
                           0xac,uVar16);
        *(undefined1 *)((int)pvVar6 + 0xac) = uVar8;
      }
      else {
        fastfunc::FastDecTimerU8(uVar16 + 0xac);
      }
      bVar1 = moby->state;
      if (bVar1 < 6) {
        if (bVar1 == 5) {
          if ((moby->field43_0x70 & 2U) != 0) {
            if (moby->animationId != '\a') {
              local_48 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x06';
          }
        }
        else if (bVar1 == 4) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
            local_48 = (longlong)(int)(animationSpeed * 0.5);
            mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 0.5));
          }
          local_1d0 = (moby->pos).x;
          local_1cc = (moby->pos).y;
          local_1c8 = (moby->pos).z;
          local_1c4 = (moby->pos).w;
          fVar24 = -(*(float *)((int)pvVar6 + 0x94) * DAT_0071f408 - *(float *)((int)pvVar6 + 0xf8))
          ;
          *(float *)((int)pvVar6 + 0xf8) = fVar24;
          (moby->pos).z = (moby->pos).z + fVar24;
          iVar12 = collproc::CollLine(&local_1d0,lVar15 + 0x10,2,lVar15,0);
          if (iVar12 != 0) {
            *(undefined1 *)((int)pvVar6 + 0xf0) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf1) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf2) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf3) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf4) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf5) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf6) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf7) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf8) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf9) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfa) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfb) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfc) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfd) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfe) = 0;
            *(undefined1 *)((int)pvVar6 + 0xff) = 0;
            if (moby->animationId != '\x04') {
              local_48 = (longlong)(int)(animationSpeed * 4.5);
              mobyutil::MB_SetAnimation(lVar15,4,0,(int)(animationSpeed * 4.5));
            }
            moby->state = '\x05';
          }
          lVar15 = uVar16 + 0xc0;
          fastfunc::FastSlerp((double)((*(float *)((int)pvVar6 + 0x70) - 1.0) * DAT_0071f408 + 1.0),
                              lVar15,lVar15,uVar16 + 0xd0);
          fastfunc::FastQuaternionToMtx4Identity(lVar15,aVStack_f0);
          fastfunc::FastApplyTransform(&(moby->transform).v0,aVStack_f0);
        }
        else if (bVar1 == 3) {
          local_1f0 = (moby->pos).x;
          local_1ec = (moby->pos).y;
          local_1e8 = (moby->pos).z;
          local_1e4 = (moby->pos).w;
          spline = Splines[*(int *)((int)pvVar6 + 0x6c)];
          sVar14 = path::Path_PickNextNode
                             (moby,spline,spline->points + spline->cnt + -1,&VStack_200);
          *(short *)((int)pvVar6 + 0x60) = sVar14;
          if ((sVar14 == -1) || (spline->cnt + -1 <= (int)sVar14)) {
            sVar14 = *(short *)((int)pvVar6 + 0x62);
            if (sVar14 < 1) {
              if (-1 < sVar14) {
                if (moby->animationId != '\a') {
                  local_48 = (longlong)(int)(animationSpeed * 10.5);
                  mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
                }
                moby->state = '\x06';
              }
            }
            else if (sVar14 < 3) {
              mobyupdate_helpers::M694_00422828(lVar15,uVar16);
              if (moby->animationId != '\x02') {
                local_48 = (longlong)(int)(animationSpeed * 0.5);
                mobyutil::MB_SetAnimation(lVar15,2,0,(int)(animationSpeed * 0.5));
              }
              moby->state = '\x04';
            }
            else if (sVar14 < 4) {
              if (moby->animationId != '\a') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\x06';
            }
          }
          else {
            iVar12 = mobyupdate_helpers::M694_00421f08(lVar15,uVar16,&VStack_200,0);
            if (iVar12 == 0) {
              fVar24 = -(*(float *)((int)pvVar6 + 0x94) * DAT_0071f408 -
                        *(float *)((int)pvVar6 + 0xf8));
              *(float *)((int)pvVar6 + 0xf8) = fVar24;
              (moby->pos).z = (moby->pos).z + fVar24;
            }
            else {
              local_1e0 = *(float *)((int)pvVar6 + 0xe0) - (moby->pos).x;
              local_1dc = *(float *)((int)pvVar6 + 0xe4) - (moby->pos).y;
              local_1d8 = *(float *)((int)pvVar6 + 0xe8) - (moby->pos).z;
              local_1d4 = *(undefined4 *)((int)pvVar6 + 0xec);
              FUN_005e7ed8((double)(*(float *)((int)pvVar6 + 0x7c) * DAT_0071f408),&local_1e0,
                           &local_1e0);
              if ((int)local_1d8 < 1) {
                fVar24 = -(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408);
                if (local_1d8 - fVar24 < 0.0) {
                  local_1d8 = fVar24;
                }
              }
              else {
                fVar24 = *(float *)((int)pvVar6 + 0x74) * DAT_0071f408;
                if (fVar24 - local_1d8 < 0.0) {
                  local_1d8 = fVar24;
                }
              }
              (moby->pos).x = (moby->pos).x + local_1e0;
              (moby->pos).y = (moby->pos).y + local_1dc;
              (moby->pos).z = (moby->pos).z + local_1d8;
              mobyupdate_helpers::M694_00422aa0(lVar15,uVar16,&local_1f0,&VStack_200);
            }
          }
          *(float *)((int)pvVar6 + 0xf0) = (moby->pos).x - local_1f0;
          *(float *)((int)pvVar6 + 0xf4) = (moby->pos).y - local_1ec;
          *(float *)((int)pvVar6 + 0xf8) = (moby->pos).z - local_1e8;
          *(f32 *)((int)pvVar6 + 0xfc) = (moby->pos).w;
        }
        else if (bVar1 == 1) {
          iVar12 = mobyupdate_helpers::M694_00421f08(lVar15,uVar16,0,0);
          if (iVar12 == 0) {
            fVar24 = (moby->pos).x;
            fVar5 = -(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408 - (moby->pos).z);
            fVar2 = (moby->pos).y;
          }
          else {
            fVar24 = *(float *)((int)pvVar6 + 0xe0);
            fVar2 = (moby->pos).x;
            fVar3 = (moby->pos).y;
            fVar4 = *(float *)((int)pvVar6 + 0xe4);
            fVar5 = *(float *)((int)pvVar6 + 0xe8) - (moby->pos).z;
            if (0.0 <= fVar5) {
              FUN_005e8e80((double)(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408),local_210,
                           local_210);
            }
            else {
              FUN_005e8e80((double)(*(float *)((int)pvVar6 + 0x74) * DAT_0071f408),local_210,
                           local_210);
            }
            fVar24 = (moby->pos).x + (fVar24 - fVar2);
            fVar2 = (moby->pos).y + (fVar4 - fVar3);
            fVar5 = (moby->pos).z + fVar5;
            (moby->pos).x = fVar24;
            (moby->pos).y = fVar2;
          }
          (moby->pos).z = fVar5;
          iVar12 = *(int *)((int)pvVar6 + 0x80);
          if (((iVar12 != 0) || (*(int *)((int)pvVar6 + 0x38) != 0)) &&
             ((fVar2 = fVar2 - *(float *)(iVar12 + 0x14),
              fVar24 = fVar24 - *(float *)(iVar12 + 0x10),
              SQRT(fVar24 * fVar24 + fVar2 * fVar2) < *(float *)((int)pvVar6 + 100) ||
              (*(int *)((int)pvVar6 + 0x38) != 0)))) {
            if (*(int *)((int)pvVar6 + 0x170) != -1) {
              mobyutil::CollDamageMobyDirect_wrap
                        ((double)*(float *)((int)pvVar6 + 0x174),
                         MobyInstance + *(int *)((int)pvVar6 + 0x170),lVar15,0x10000,MobyInstance,
                         lVar15 + 0x10);
            }
            sVar14 = *(short *)((int)pvVar6 + 0x62);
            *(undefined4 *)((int)pvVar6 + 0x38) = 0;
            if (sVar14 < 2) {
              if (-1 < sVar14) {
                if (moby->animationId != '\a') {
                  local_48 = (longlong)(int)(animationSpeed * 10.5);
                  mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
                }
                moby->state = '\x03';
              }
            }
            else if (sVar14 < 3) {
              mobyupdate_helpers::M694_00422828(lVar15,uVar16);
              if (moby->animationId != '\x02') {
                local_48 = (longlong)(int)(animationSpeed * 0.5);
                mobyutil::MB_SetAnimation(lVar15,2,0,(int)(animationSpeed * 0.5));
              }
              moby->state = '\x04';
            }
            else if (sVar14 < 4) {
              if (moby->animationId != '\a') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\x06';
            }
          }
        }
        else if (bVar1 == 0) {
          mobyutil::MB_EulerToQuat((float *)((int)pvVar6 + 0xc0),(Vec3 *)&moby->rotation);
          *(f32 *)((int)pvVar6 + 0xb0) = (moby->pos).x;
          *(f32 *)((int)pvVar6 + 0xb4) = (moby->pos).y;
          *(f32 *)((int)pvVar6 + 0xb8) = (moby->pos).z;
          *(f32 *)((int)pvVar6 + 0xbc) = (moby->pos).w;
          mobyupdate_helpers::M694_00421f08(lVar15,uVar16,0,0);
          if ((*(int *)((int)pvVar6 + 0x6c) == -1) ||
             (Splines[*(int *)((int)pvVar6 + 0x6c)] == (Spline *)0x0)) {
            sVar14 = *(short *)((int)pvVar6 + 0x62);
            if (sVar14 < 1) {
              if (-1 < sVar14) {
                uVar13 = (int)moby - (int)MobyInstance;
                libc::printf("warning: no path for PATH_DOWN type on moby 694 :%d\n Switching to ALREADY_DOWN state.\n"
                             ,((int)uVar13 >> 8) + (uint)((int)uVar13 < 0 && (uVar13 & 0xff) != 0));
                *(undefined2 *)((int)pvVar6 + 0x62) = 3;
              }
            }
            else if (sVar14 < 2) {
              uVar13 = (int)moby - (int)MobyInstance;
              libc::printf("warning: no path for PATH_DROP type on moby 694 :%d\n Switching to DROP_DOWN state.\n"
                           ,((int)uVar13 >> 8) + (uint)((int)uVar13 < 0 && (uVar13 & 0xff) != 0));
              *(undefined2 *)((int)pvVar6 + 0x62) = 2;
            }
          }
          else {
            iVar12 = path::PathFindClosestPnt
                               (0.0,(Vec4 *)&moby->pos,Splines[*(int *)((int)pvVar6 + 0x6c)]);
            *(short *)((int)pvVar6 + 0x60) = (short)iVar12;
          }
          *(undefined1 *)((int)pvVar6 + 0xf0) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf1) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf2) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf3) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf4) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf5) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf6) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf7) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf8) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf9) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfa) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfb) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfc) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfd) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfe) = 0;
          *(undefined1 *)((int)pvVar6 + 0xff) = 0;
          moby->modeBits = moby->modeBits | LOCK_ROTATION;
          if (moby->animationId != '\x05') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,5,0,(int)(animationSpeed * 10.5));
          }
          uVar13 = (int)moby - (int)MobyInstance;
          dVar17 = (double)fastfunc::FastIntToDouble
                                     (((int)uVar13 >> 8) +
                                      (uint)((int)uVar13 < 0 && (uVar13 & 0xff) != 0));
          fVar24 = mobyutil::MB_WrapRot((float)(dVar17 * 3.1415927410125732) * 0.5);
          *(float *)((int)pvVar6 + 0x98) = fVar24;
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          mobyutil::MB_CopyHeroLights(lVar15);
          moby->state = '\x01';
        }
      }
      else if (bVar1 == 0xc) {
        uVar13 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x100));
        if ((uVar13 & 0x40) != 0) {
          mobyfunc::GetBonePosition(lVar15,1,auStack_130);
          mobyutil::MB_genericExplosion
                    (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4008000000000000,0x3ff0000000000000
                     ,0x401c000000000000,lVar15,uVar16 + 0xf0,auStack_130,1,0xffffffffffffffff,3,1,5
                    );
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else if (bVar1 == 0xb) {
        mobyupdate_helpers::M694_004226b8(lVar15,uVar16,&local_230);
        iVar12 = fastfunc::FastDecTimerU8(uVar16 + 0xaa);
        if (iVar12 != 0) {
          if (moby->animationId != '\a') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x06';
        }
      }
      else if (bVar1 == 10) {
        local_150 = (moby->pos).x;
        local_14c = (moby->pos).y;
        local_148 = (moby->pos).z;
        local_144 = (moby->pos).w;
        fVar2 = local_14c - *(float *)((int)pvVar6 + 0xb4);
        fVar24 = local_150 - *(float *)((int)pvVar6 + 0xb0);
        if (SQRT(fVar24 * fVar24 + fVar2 * fVar2) <= *(float *)((int)pvVar6 + 0xa0)) {
          if (*(int *)((int)pvVar6 + 0x80) != 0) {
            mobyfunc::GetBonePosition(lVar15,1,auStack_140);
            if (10.0 <= dVar19) {
              moby->state = '\x06';
              if (moby->animationId != '\a') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
            }
            else {
              iVar12 = collproc::CollLine(auStack_140,&local_230,1,lVar15,0);
              if (iVar12 == 0) {
                moby->state = '\x06';
                if (moby->animationId != '\a') {
                  local_48 = (longlong)(int)(animationSpeed * 10.5);
                  mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
                }
              }
              else if ((CollOutput.pMoby == local_70) &&
                      (moby->state = '\x06', moby->animationId != '\a')) {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
            }
          }
        }
        else {
          moby->state = '\t';
        }
        mobyupdate_helpers::M694_00422aa0(lVar15,uVar16,&local_150,&local_230);
      }
      else if (bVar1 == 9) {
        local_180 = (moby->pos).x;
        local_17c = (moby->pos).y;
        local_178 = (moby->pos).z;
        local_174 = (moby->pos).w;
        local_170 = *(undefined4 *)((int)pvVar6 + 0xb0);
        local_16c = *(undefined4 *)((int)pvVar6 + 0xb4);
        local_164 = *(undefined4 *)((int)pvVar6 + 0xbc);
        local_168 = local_178;
        iVar12 = mobyupdate_helpers::M694_00421f08(lVar15,uVar16,&local_170,&local_4c);
        if (iVar12 != 0) {
          local_160 = *(float *)((int)pvVar6 + 0xe0) - (moby->pos).x;
          local_15c = *(float *)((int)pvVar6 + 0xe4) - (moby->pos).y;
          local_158 = *(float *)((int)pvVar6 + 0xe8) - (moby->pos).z;
          local_154 = *(undefined4 *)((int)pvVar6 + 0xec);
          FUN_005e7ed8((double)(*(float *)((int)pvVar6 + 0x7c) * DAT_0071f408),&local_160,&local_160
                      );
          if ((int)local_158 < 1) {
            fVar24 = -(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408);
            if (local_158 - fVar24 < 0.0) {
              local_158 = fVar24;
            }
          }
          else {
            fVar24 = *(float *)((int)pvVar6 + 0x74) * DAT_0071f408;
            if (fVar24 - local_158 < 0.0) {
              local_158 = fVar24;
            }
          }
          (moby->pos).x = (moby->pos).x + local_160;
          (moby->pos).y = (moby->pos).y + local_15c;
          (moby->pos).z = (moby->pos).z + local_158;
          mobyupdate_helpers::M694_00422aa0(lVar15,uVar16,&local_180,&local_170);
        }
        fVar24 = (moby->pos).x - local_180;
        *(float *)((int)pvVar6 + 0xf0) = fVar24;
        fVar2 = (moby->pos).y - local_17c;
        *(float *)((int)pvVar6 + 0xf4) = fVar2;
        fVar5 = (moby->pos).z - local_178;
        *(float *)((int)pvVar6 + 0xf8) = fVar5;
        *(f32 *)((int)pvVar6 + 0xfc) = (moby->pos).w;
        if ((SQRT(fVar5 * fVar5 + fVar24 * fVar24 + fVar2 * fVar2) < 0.01) &&
           (moby->animationId != '\x05')) {
          local_48 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,5,0,(int)(animationSpeed * 10.5));
        }
        iVar12 = *(int *)((int)pvVar6 + 0x80);
        if (((iVar12 == 0) ||
            (fVar24 = (moby->pos).y - *(float *)(iVar12 + 0x14),
            fVar2 = (moby->pos).x - *(float *)(iVar12 + 0x10),
            *(float *)((int)pvVar6 + 0x68) < SQRT(fVar2 * fVar2 + fVar24 * fVar24))) ||
           (0x3d4ccccc <
            (int)(((uint)((int)local_4c >> 0x1f) >> 1 ^ local_4c) - ((int)local_4c >> 0x1f)))) {
          if ((iVar12 != 0) || (*(int *)((int)pvVar6 + 0x38) != 0)) {
            fVar24 = (moby->pos).y - *(float *)((int)pvVar6 + 0xb4);
            fVar2 = (moby->pos).x - *(float *)((int)pvVar6 + 0xb0);
            if (((SQRT(fVar2 * fVar2 + fVar24 * fVar24) < *(float *)((int)pvVar6 + 0xa0)) &&
                (*(int *)((int)pvVar6 + 0x184) == 0)) &&
               ((local_22c = local_22c - *(float *)((int)pvVar6 + 0xb4),
                local_230 = local_230 - *(float *)((int)pvVar6 + 0xb0),
                SQRT(local_230 * local_230 + local_22c * local_22c) < *(float *)((int)pvVar6 + 100)
                || (*(int *)((int)pvVar6 + 0x38) != 0)))) {
              if (moby->animationId != '\a') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
              *(undefined4 *)((int)pvVar6 + 0x38) = 0;
              moby->state = '\x06';
            }
          }
        }
        else {
          *(undefined1 *)((int)pvVar6 + 0xf0) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf1) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf2) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf3) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf4) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf5) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf6) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf7) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf8) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf9) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfa) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfb) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfc) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfd) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfe) = 0;
          *(undefined1 *)((int)pvVar6 + 0xff) = 0;
          if (*(char *)((int)pvVar6 + 0xac) == '\0') {
            if (moby->animationId != '\b') {
              local_48 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar15,8,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\b';
          }
          else {
            if (moby->animationId != '\x05') {
              local_48 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar15,5,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\a';
          }
        }
      }
      else if (bVar1 == 8) {
        if ((moby->field43_0x70 & 2U) == 0) {
          if (((moby->updateId == '\b') &&
              (dVar17 = (double)mobyfunc::BlendAnimFrame(moby), 12.0 < dVar17)) &&
             (local_70 != (MobyInstance *)0x0)) {
            fVar24 = (moby->pos).y;
            fVar2 = (local_70->pos).y;
            fVar5 = (moby->pos).x;
            fVar4 = fVar24 - fVar2;
            fVar3 = (local_70->pos).x;
            fVar10 = fVar5 - fVar3;
            if (SQRT(fVar10 * fVar10 + fVar4 * fVar4) < 1.4) {
              dVar19 = (double)(moby->rotation).z;
              dVar17 = (double)FUN_005e8338((double)(fVar3 - fVar5),(double)(fVar2 - fVar24));
              dVar17 = (double)fastfunc::FastSubRots((float)dVar19,(float)dVar17);
              if ((dVar17 < 0.7853981852531433) && (ABS((local_70->pos).z - (moby->pos).z) < 0.5)) {
                mobyutil::SetCollDamIn(0x3ff0000000000000,&uStack_120,lVar15,1);
                mobyutil::CollDamageMobyDirect
                          (local_70,0x40,CONCAT44(uStack_120,uStack_11c),
                           CONCAT44(uStack_118,uStack_114),CONCAT44(uStack_110,uStack_10c),
                           CONCAT44(uStack_108,uStack_104),CONCAT44(uStack_100,uStack_fc),
                           CONCAT44(uStack_f8,uStack_f4));
              }
            }
          }
        }
        else {
          if (moby->animationId != '\a') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x06';
        }
      }
      else if (bVar1 == 7) {
        iVar12 = *(int *)((int)pvVar6 + 0x80);
        if (((iVar12 == 0) ||
            (fVar24 = (moby->pos).y - *(float *)(iVar12 + 0x14),
            fVar2 = (moby->pos).x - *(float *)(iVar12 + 0x10),
            *(float *)((int)pvVar6 + 0x68) < SQRT(fVar2 * fVar2 + fVar24 * fVar24))) ||
           (*(char *)((int)pvVar6 + 0xac) != '\0')) {
          if (moby->animationId != '\a') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x06';
        }
        else {
          if (moby->animationId != '\b') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,8,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\b';
        }
        mobyupdate_helpers::M694_004226b8(lVar15,uVar16,&local_230);
      }
      else if (bVar1 == 6) {
        local_1c0 = (moby->pos).x;
        local_1bc = (moby->pos).y;
        local_1b8 = (moby->pos).z;
        local_1b4 = (moby->pos).w;
        fVar2 = local_1bc - *(float *)((int)pvVar6 + 0xb4);
        fVar24 = local_1c0 - *(float *)((int)pvVar6 + 0xb0);
        if ((*(float *)((int)pvVar6 + 0xa0) < SQRT(fVar24 * fVar24 + fVar2 * fVar2)) ||
           (0 < *(int *)((int)pvVar6 + 0x184))) {
          moby->state = '\t';
        }
        else if (*(int *)((int)pvVar6 + 0x80) != 0) {
          local_1a0 = local_230 - local_1c0;
          local_19c = local_22c - local_1bc;
          local_198 = 0.0;
          local_194 = local_224;
          FUN_005e7f98(0x3fd3333340000000,&local_1b0,&local_1a0);
          local_1b0 = local_1b0 + (moby->pos).x;
          local_1ac = local_1ac + (moby->pos).y;
          dVar17 = 0.20000000298023224;
          local_1a8 = local_1a8 + (moby->pos).z + 0.2;
          FUN_005e7f98(0x3fefae1480000000,&local_1a0,&local_1a0);
          local_1a0 = local_1a0 + (moby->pos).x;
          local_19c = local_19c + (moby->pos).y;
          local_198 = (float)((double)local_198 + dVar17) + (moby->pos).z;
          if (((dVar19 < 4.0) &&
              (iVar12 = collproc::CollLine(&local_1b0,&local_1a0,1,lVar15,0), iVar12 != 0)) &&
             (CollOutput.pMoby != local_70)) {
            moby->state = '\n';
          }
        }
        iVar12 = mobyupdate_helpers::M694_00421f08(lVar15,uVar16,&local_230,&local_50);
        if (iVar12 != 0) {
          iVar12 = *(int *)((int)pvVar6 + 0x80);
          fVar24 = (moby->pos).x;
          fVar2 = (moby->pos).y;
          if (((iVar12 == 0) ||
              (fVar3 = fVar2 - *(float *)(iVar12 + 0x14), fVar5 = fVar24 - *(float *)(iVar12 + 0x10)
              , *(float *)((int)pvVar6 + 0x68) < SQRT(fVar5 * fVar5 + fVar3 * fVar3))) ||
             (0x3d4ccccc <
              (int)(((uint)((int)local_50 >> 0x1f) >> 1 ^ local_50) - ((int)local_50 >> 0x1f)))) {
            local_190 = *(float *)((int)pvVar6 + 0xe0) - fVar24;
            local_18c = *(float *)((int)pvVar6 + 0xe4) - fVar2;
            local_188 = *(float *)((int)pvVar6 + 0xe8) - (moby->pos).z;
            local_184 = *(undefined4 *)((int)pvVar6 + 0xec);
            FUN_005e7ed8((double)(*(float *)((int)pvVar6 + 0x7c) * DAT_0071f408),&local_190,
                         &local_190);
            if ((int)local_188 < 1) {
              fVar24 = -(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408);
              if (local_188 - fVar24 < 0.0) {
                local_188 = fVar24;
              }
            }
            else {
              fVar24 = *(float *)((int)pvVar6 + 0x74) * DAT_0071f408;
              if (fVar24 - local_188 < 0.0) {
                local_188 = fVar24;
              }
            }
            (moby->pos).x = (moby->pos).x + local_190;
            (moby->pos).y = (moby->pos).y + local_18c;
            (moby->pos).z = (moby->pos).z + local_188;
            mobyupdate_helpers::M694_00422aa0(lVar15,uVar16,&local_1c0,&local_230);
          }
          else {
            *(undefined1 *)((int)pvVar6 + 0xf0) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf1) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf2) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf3) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf4) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf5) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf6) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf7) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf8) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf9) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfa) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfb) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfc) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfd) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfe) = 0;
            *(undefined1 *)((int)pvVar6 + 0xff) = 0;
            if (*(char *)((int)pvVar6 + 0xac) == '\0') {
              if (moby->animationId != '\b') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar15,8,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\b';
            }
            else {
              if (moby->animationId != '\x05') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar15,5,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\a';
            }
          }
        }
        *(float *)((int)pvVar6 + 0xf0) = (moby->pos).x - local_1c0;
        *(float *)((int)pvVar6 + 0xf4) = (moby->pos).y - local_1bc;
        *(float *)((int)pvVar6 + 0xf8) = (moby->pos).z - local_1b8;
        *(f32 *)((int)pvVar6 + 0xfc) = (moby->pos).w;
      }
      mobyutil::MB_RegisterLameShadow(0.4,moby);
    }
  }
  return;
}



//==== 00424db8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M695_00424db8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M695_00424db8(void)

{
  DAT_008579ac = 0x10000;
  return;
}



//==== 00424dd8  ns=mobyupdate_helpers  size=0x78
// sig: undefined M695_00424dd8(void)
// callers(0): 
// callees(0): 

double mobyupdate_helpers::M695_00424dd8
                 (double param_1,double param_2,double param_3,double param_4,float *param_5,
                 undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)(float)(param_4 * param_4);
  fVar2 = *param_7 * (((float)(1.0 - param_3) - 1.0) * DAT_0071f408 + 1.0);
  *param_7 = fVar2;
  fVar1 = (float)((double)*param_5 - param_1);
  dVar5 = (double)(fVar1 * fVar1);
  if (dVar4 - dVar5 < 0.0) {
    dVar5 = dVar4;
  }
  fVar1 = (float)((double)(float)(param_2 * dVar5) / dVar4);
  fVar3 = fVar2 + fVar1;
  if (param_1 - (double)*param_5 < 0.0) {
    fVar3 = fVar2 - fVar1;
  }
  *param_7 = fVar3;
  fVar1 = *param_5;
  *param_5 = fVar1 + fVar3;
  return ABS((double)(float)(param_1 - (double)(fVar1 + fVar3)));
}



//==== 00424e98  ns=mobyupdate_unsorted  size=0x670
// sig: undefined UpdateMoby_695(MobyInstance * moby)
// callers(0): 
// callees(4): 000ffcd0 mobyutil::CollMovingSphere; 00105f40 mobyutil::CollWaterHeight; 005023f0 fastfunc::FastVecAdd; 00502a64 fastfunc::FastVecSub
// strings: 00424e5c: '?333' (raw)

/* Moby 695 */

void mobyupdate_unsorted::UpdateMoby_695(MobyInstance *moby)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  float fVar25;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar23 = uVar17 - 0x110;
  puVar9 = (ulonglong *)lVar23;
  *puVar9 = uVar17;
  puVar9[0x24] = in_LR;
  puVar9[0x21] = unaff_r31;
  fVar1 = (moby->pos).x;
  pfVar22 = (float *)moby->pVar;
  *(float *)(puVar9 + 0xe) = fVar1;
  fVar2 = (moby->pos).y;
  *(f32 *)((int)puVar9 + 0x74) = fVar2;
  fVar3 = (moby->pos).z;
  *(f32 *)(puVar9 + 0xf) = fVar3;
  fVar4 = (moby->pos).w;
  *(float *)(puVar9 + 0x10) = fVar1;
  *(f32 *)((int)puVar9 + 0x7c) = fVar4;
  *(f32 *)((int)puVar9 + 0x84) = fVar2;
  *(f32 *)(puVar9 + 0x11) = fVar3;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  *(f32 *)((int)puVar9 + 0x8c) = fVar4;
  if (pfVar22 != (float *)0x0) {
    if (moby->state == 0) {
      *pfVar22 = fVar1;
      pfVar22[1] = (moby->pos).y;
      pfVar22[2] = (moby->pos).z;
      pfVar22[3] = (moby->pos).w;
      moby->state = '\x01';
    }
    else if (moby->state < 2) {
      fVar5 = DAT_008579d0 * DAT_0071f418;
      fVar25 = pfVar22[4] * (((1.0 - DAT_008579d4) - 1.0) * DAT_0071f408 + 1.0);
      pfVar22[4] = fVar25;
      fVar1 = (moby->pos).x;
      fVar7 = fVar1 - *pfVar22;
      fVar7 = fVar7 * fVar7;
      if (9.0 - fVar7 < 0.0) {
        fVar7 = 9.0;
      }
      fVar5 = fVar5 * fVar7;
      fVar7 = fVar5 * 0.11111111 + fVar25;
      if (*pfVar22 - fVar1 < 0.0) {
        fVar7 = -(fVar5 * 0.11111111 - fVar25);
      }
      pfVar22[4] = fVar7;
      (moby->pos).x = (moby->pos).x + fVar7;
      fVar7 = DAT_008579d0 * DAT_0071f418;
      fVar25 = pfVar22[5] * (((1.0 - DAT_008579d4) - 1.0) * DAT_0071f408 + 1.0);
      pfVar22[5] = fVar25;
      fVar1 = (moby->pos).y;
      fVar5 = fVar1 - pfVar22[1];
      fVar5 = fVar5 * fVar5;
      if (9.0 - fVar5 < 0.0) {
        fVar5 = 9.0;
      }
      fVar7 = fVar7 * fVar5;
      fVar5 = fVar7 * 0.11111111 + fVar25;
      if (pfVar22[1] - fVar1 < 0.0) {
        fVar5 = -(fVar7 * 0.11111111 - fVar25);
      }
      pfVar22[5] = fVar5;
      fVar5 = (moby->pos).y + fVar5;
      (moby->pos).y = fVar5;
      fVar13 = g_heroPosition.y;
      fVar7 = g_heroPosition.x;
      fVar25 = DAT_008579d8;
      fVar5 = fVar5 - g_heroPosition.y;
      fVar1 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar1 * fVar1 + fVar5 * fVar5) < DAT_008579d8) &&
         (ABS((moby->pos).z - g_heroPosition.z) < 0.7)) {
        *(float *)(puVar9 + 0x18) = fVar1;
        *(float *)((int)puVar9 + 0xc4) = fVar5;
        *(float *)(puVar9 + 0x19) = ABS(fVar1) - ABS(fVar5);
        fVar10 = 0.0;
        uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)(puVar9 + 0x18));
        if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
          fVar6 = ABS(fVar5);
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        fVar14 = ABS(*(float *)((int)puVar9 + 0xc4));
        if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
          fVar14 = ABS(fVar1);
        }
        if (0.0 < fVar6) {
          lVar21 = uVar17 - 0x100;
          lVar18 = uVar17 - 0x34;
          lVar20 = uVar17 - 0x44;
          lVar24 = 2;
          fVar1 = (fVar14 - fVar6) / (fVar14 + fVar6);
          fVar6 = fVar1 * fVar1;
          *(float *)(puVar9 + 0x1b) = fVar1;
          *(float *)(puVar9 + 0x1a) = fVar1;
          *(float *)((int)puVar9 + 0xd4) = fVar1;
          *(float *)((int)puVar9 + 0xcc) = fVar1;
          fVar1 = fVar6 * fVar6;
          *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar6;
          *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar1;
          *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar1 * fVar6;
          do {
            *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xbc) * fVar1 * fVar1;
            iVar11 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar1 * fVar1;
            lVar18 = lVar18 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar21 = uVar17 - 0x44;
          lVar24 = 4;
          pfVar22 = (float *)&DAT_007358e0;
          lVar18 = lVar21;
          lVar20 = lVar23;
          do {
            fVar1 = *pfVar22;
            fVar6 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar20 + 0xcc) = *(float *)((int)lVar20 + 0xcc) * fVar1;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
            lVar18 = lVar18 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar18 = 2;
          do {
            iVar11 = (int)lVar23;
            iVar12 = (int)lVar21;
            lVar23 = lVar23 + 0x10;
            lVar21 = lVar21 + 0x10;
            fVar10 = fVar10 + *(float *)(iVar11 + 0xcc) + *(float *)(iVar12 + 4) +
                     *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar10 = (fVar10 + 0.7853982) * fVar8 + fVar5;
        }
        fVar1 = fVar10 + 1.5707963;
        fVar5 = 3.1415925 - fVar10;
        if (fVar10 - (3.1415925 - fVar10) < 0.0) {
          fVar5 = fVar10;
        }
        fVar6 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar6 = fVar1;
        }
        fVar8 = -3.1415925 - fVar10;
        if ((-3.1415925 - fVar10) - fVar5 < 0.0) {
          fVar8 = fVar5;
        }
        fVar5 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar1 = fVar8 * fVar8;
        fVar10 = fVar5 * fVar5;
        fVar15 = fVar1 * fVar1 * fVar8;
        fVar6 = fVar10 * fVar10 * fVar5;
        fVar16 = fVar1 * fVar15;
        fVar14 = fVar10 * fVar6;
        fVar25 = (fVar10 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar6 * 0.0083330255 + fVar10 * fVar5 * -0.16666657 + fVar5) * fVar25;
        (moby->pos).x = fVar25;
        fVar1 = (fVar1 * fVar16 * 2.601887e-06 +
                fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar1 * fVar8 * -0.16666657 + fVar8
                ) * DAT_008579d8;
        (moby->pos).x = fVar25 + fVar7;
        (moby->pos).y = fVar1 + fVar13;
      }
      lVar23 = (longlong)(int)moby + 0x10;
      mobyutil::CollMovingSphere
                (0x3fb99999a0000000,(double)DAT_008579e0,0x4082c00000000000,0x3ff921fb60000000,
                 (longlong)(int)moby,uVar17 - 0x90,lVar23);
      fVar1 = *(float *)((int)puVar9 + 0x84);
      fVar7 = *(float *)((int)puVar9 + 0x74) - fVar1;
      fVar25 = *(float *)(puVar9 + 0xf);
      fVar5 = *(float *)(puVar9 + 0xe) - *(float *)(puVar9 + 0x10);
      (moby->pos).x = *(float *)(puVar9 + 0x10);
      (moby->pos).y = fVar1;
      (moby->pos).z = fVar25;
      if (DAT_008579dc * mobyutil::g_FrameTime <
          SQRT((fVar25 - fVar25) * (fVar25 - fVar25) + fVar5 * fVar5 + fVar7 * fVar7)) {
        fastfunc::FastVecSub(uVar17 - 0x70,lVar23,uVar17 - 0xa0);
        fVar1 = *(float *)((int)puVar9 + 0xa4);
        fVar25 = *(float *)(puVar9 + 0x14);
        fVar7 = *(float *)(puVar9 + 0x15);
        fVar5 = DAT_008579dc * mobyutil::g_FrameTime;
        *(float *)(puVar9 + 0x12) = fVar25;
        *(float *)((int)puVar9 + 0x94) = fVar1;
        *(float *)(puVar9 + 0x13) = fVar7;
        *(undefined4 *)((int)puVar9 + 0x9c) = *(undefined4 *)((int)puVar9 + 0xac);
        fVar10 = 0.0;
        fVar13 = SQRT(fVar7 * fVar7 + fVar25 * fVar25 + fVar1 * fVar1);
        fVar5 = fVar5 / fVar13;
        fVar6 = fVar10;
        if (0.0 - fVar13 < 0.0) {
          fVar6 = fVar25 * fVar5;
        }
        fVar8 = fVar10;
        if (0.0 - fVar13 < 0.0) {
          fVar8 = fVar1 * fVar5;
        }
        if (0.0 - fVar13 < 0.0) {
          fVar10 = fVar7 * fVar5;
        }
        if (fVar13 - 0.0 < 0.0) {
          fVar6 = fVar25 * fVar5;
        }
        if (fVar13 - 0.0 < 0.0) {
          fVar8 = fVar1 * fVar5;
        }
        if (fVar13 - 0.0 < 0.0) {
          fVar10 = fVar7 * fVar5;
        }
        *(float *)(puVar9 + 0x12) = fVar6;
        *(float *)((int)puVar9 + 0x94) = fVar8;
        *(float *)(puVar9 + 0x13) = fVar10;
        fastfunc::FastVecAdd(uVar17 - 0x60,uVar17 - 0xa0,uVar17 - 0x80);
        (moby->pos).x = *(f32 *)(puVar9 + 0x16);
        (moby->pos).y = *(f32 *)((int)puVar9 + 0xb4);
        (moby->pos).z = *(f32 *)(puVar9 + 0x17);
        (moby->pos).w = *(f32 *)((int)puVar9 + 0xbc);
      }
      fVar25 = mobyutil::CollWaterHeight((float *)lVar23,(float *)0x0);
      fVar1 = (moby->pos).z;
      fVar25 = fVar25 - fVar1;
      fVar7 = mobyutil::g_FrameTime * 3.0;
      if ((fVar25 <= fVar7) && (fVar7 = fVar25, fVar25 < mobyutil::g_FrameTime * -3.0)) {
        fVar7 = mobyutil::g_FrameTime * -3.0;
      }
      (moby->pos).z = fVar1 + fVar7;
    }
  }
  return;
}



//==== 00425508  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1807_00425508(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1807_00425508(void)

{
  DAT_00857a30 = 0x10000;
  return;
}



//==== 00425540  ns=Global  size=0x26c
// sig: undefined FUN_00425540(void)
// callers(11): 0019ebd8 mobyupdate_unsorted::UpdateMoby_1047; 001d37b8 mobyupdate_unsorted::UpdateMoby_{1113_1114_1115_1116}; 00266758 mobyupdate_unsorted::UpdateMoby_1381; 0028bf80 mobyupdate_unsorted::UpdateMoby_{148_255}; 002959f8 mobyupdate_unsorted::UpdateMoby_154; 00427ff0 mobyupdate_unsorted::UpdateMoby_700; 00428698 mobyupdate_unsorted::UpdateMoby_701; 004296b8 mobyupdate_unsorted::UpdateMoby_704; 0042a6e0 mobyupdate_unsorted::UpdateMoby_{709_710_711}; 00435b88 mobyupdate_unsorted::UpdateMoby_729; 00450f20 mobyupdate_unsorted::UpdateMoby_762
// callees(6): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 0010c000 mobyutil::MB_CopyHeroLights; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

MobyInstance *
FUN_00425540(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,MOBY_OCLASSES param_9,
            undefined8 param_10,undefined4 param_11)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  uint uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  f32 fStack00000030;
  f32 fStack00000034;
  f32 fStack00000038;
  f32 fStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  undefined4 in_stack_00000084;
  
  pMVar3 = mobyfunc::CreateMoby(param_9);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    mobyutil::MB_CopyHeroLights(pMVar3);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->scale = (float)((double)pMVar3->scale * param_1);
    dVar8 = -3.1415927410125732;
    dVar7 = 3.1415927410125732;
    dVar6 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    (pMVar3->rotation).x = (float)dVar6;
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar7);
    (pMVar3->rotation).y = (float)dVar6;
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar7);
    (pMVar3->rotation).z = (float)dVar6;
    fStack00000034 = (f32)param_5;
    fStack0000003c = (f32)param_6;
    (pMVar3->pos).y = fStack00000034;
    (pMVar3->pos).w = fStack0000003c;
    uStack00000044 = (undefined4)param_7;
    uStack0000004c = (undefined4)param_8;
    fStack00000030 = (f32)((ulonglong)param_5 >> 0x20);
    fStack00000038 = (f32)((ulonglong)param_6 >> 0x20);
    (pMVar3->pos).x = fStack00000030;
    (pMVar3->pos).z = fStack00000038;
    uStack00000040 = (undefined4)((ulonglong)param_7 >> 0x20);
    uStack00000048 = (undefined4)((ulonglong)param_8 >> 0x20);
    *puVar2 = uStack00000040;
    puVar2[1] = uStack00000044;
    puVar2[2] = uStack00000048;
    puVar2[3] = uStack0000004c;
    dVar6 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * 1.5707964,mobyutil::g_FrameTime * 6.2831855);
    uVar4 = rand();
    fVar1 = 1.0;
    if ((uVar4 & 1) != 0) {
      fVar1 = -1.0;
    }
    puVar2[4] = param_11;
    puVar2[10] = param_11;
    puVar2[5] = (float)param_1;
    puVar2[6] = (float)((double)(float)(dVar6 * (double)fVar1) * param_3);
    uVar5 = fastfunc::FastDoubleToInt((double)(animationSpeed * (float)(param_4 * 60.0)));
    puVar2[7] = uVar5;
    fVar1 = DAT_0071f418;
    puVar2[8] = in_stack_00000084;
    puVar2[9] = (float)(param_2 * 9.800000190734863) * fVar1;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 00425808  ns=mobyupdate_unsorted  size=0x970
// sig: undefined UpdateMoby_a_lot_1(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00126dd8 partupd::SpawnPart_22; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot

/* Moby 200
   Moby 201
   Moby 205
   Moby 206
   Moby 207
   Moby 210
   Moby 696
   Moby 697
   Moby 698
   Moby 1806
   Moby 1807 */

void mobyupdate_unsorted::UpdateMoby_a_lot_1(MobyInstance *moby)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  int iVar14;
  longlong lVar13;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  ulonglong in_f20;
  double dVar27;
  ulonglong in_f21;
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
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0x160;
  puVar11 = (ulonglong *)lVar13;
  *puVar11 = uVar12;
  puVar11[0x2e] = in_LR;
  puVar11[0x20] = in_f20;
  puVar11[0x21] = in_f21;
  puVar11[0x22] = in_f22;
  puVar11[0x23] = in_f23;
  puVar11[0x24] = in_f24;
  puVar11[0x25] = in_f25;
  puVar11[0x26] = in_f26;
  puVar11[0x27] = in_f27;
  puVar11[0x28] = in_f28;
  puVar11[0x29] = in_f29;
  puVar11[0x2a] = in_f30;
  puVar11[0x2b] = in_f31;
  puVar11[0x1f] = unaff_r31;
  puVar11[0x1e] = unaff_r30;
  pfVar8 = (float *)moby->pVar;
  fVar1 = (moby->pos).y;
  *(f32 *)(puVar11 + 0xe) = (moby->pos).x;
  fVar2 = (moby->pos).z;
  *(f32 *)((int)puVar11 + 0x74) = fVar1;
  fVar1 = (moby->pos).w;
  *(f32 *)(puVar11 + 0xf) = fVar2;
  *(f32 *)((int)puVar11 + 0x7c) = fVar1;
  pfVar8[2] = pfVar8[2] - pfVar8[9];
  fVar3 = (moby->rotation).z;
  (moby->pos).x = (moby->pos).x + *pfVar8;
  (moby->pos).y = (moby->pos).y + pfVar8[1];
  (moby->pos).z = (moby->pos).z + pfVar8[2];
  puVar11[0x1d] = unaff_r29;
  puVar11[0x1c] = unaff_r28;
  dVar22 = (double)fastfunc::FastWrapRot(fVar3,pfVar8[6]);
  fVar1 = (moby->pos).x;
  (moby->rotation).z = (float)dVar22;
  uVar10 = (int)fVar1 >> 0x1f;
  iVar14 = (uVar10 >> 1 ^ (uint)fVar1) - uVar10;
  if ((((iVar14 < 0x40000000) || (0x447f4000 < iVar14)) ||
      (fVar1 = (moby->pos).y, uVar10 = (int)fVar1 >> 0x1f,
      iVar14 = (uVar10 >> 1 ^ (uint)fVar1) - uVar10, 0x447f4000 < iVar14 || iVar14 < 0x40000000)) ||
     ((fVar1 = (moby->pos).z, uVar10 = (int)fVar1 >> 0x1f,
      iVar14 = (uVar10 >> 1 ^ (uint)fVar1) - uVar10, iVar14 < 0x40000000 || (0x447f4000 < iVar14))))
  {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    iVar14 = fastfunc::FastDecTimerS32(pfVar8 + 7);
    if (iVar14 != 0) {
      lVar20 = (longlong)(int)moby + 0x10;
      iVar14 = collproc::CollLine(uVar12 - 0xf0,lVar20,0,(longlong)(int)moby,0);
      if ((iVar14 != 0) || (iVar14 = collproc::CollSphere((double)pfVar8[5],lVar20), iVar14 != 0)) {
        fVar3 = *pfVar8;
        fVar9 = pfVar8[1];
        fVar5 = ABS(*pfVar8);
        fVar4 = ABS(pfVar8[1]);
        *(float *)(puVar11 + 0x14) = fVar5 - fVar4;
        dVar22 = 0.0;
        uVar16 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1e) & 2 |
                 (ulonglong)((uint)fVar9 >> 0x1d) & 4;
        fVar3 = fVar5;
        if (*(float *)(puVar11 + 0x14) - 0.0 < 0.0) {
          fVar3 = fVar4;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar9 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        if (*(float *)(puVar11 + 0x14) - 0.0 < 0.0) {
          fVar4 = fVar5;
        }
        dVar26 = dVar22;
        if (0.0 < fVar3) {
          lVar18 = uVar12 - 0x150;
          lVar17 = uVar12 - 0xbc;
          lVar20 = uVar12 - 0xac;
          lVar21 = 2;
          fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar11 + 0x16) = fVar3;
          *(float *)(puVar11 + 0x15) = fVar3;
          *(float *)((int)puVar11 + 0xac) = fVar3;
          *(float *)((int)puVar11 + 0xa4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar11 + 0x15) = *(float *)(puVar11 + 0x15) * fVar4;
          *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar3;
          *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar18 + 0xa4) = *(float *)((int)lVar18 + 0x94) * fVar3 * fVar3;
            iVar14 = (int)lVar17;
            lVar18 = lVar18 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
            lVar20 = lVar20 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar18 = uVar12 - 0xbc;
          lVar21 = 4;
          pfVar19 = (float *)&DAT_007358e0;
          lVar20 = lVar18;
          lVar17 = lVar13;
          do {
            fVar3 = *pfVar19;
            fVar4 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar17 + 0xa4) = *(float *)((int)lVar17 + 0xa4) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar20 = 2;
          do {
            iVar14 = (int)lVar13;
            iVar15 = (int)lVar18;
            lVar13 = lVar13 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar14 + 0xa4)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar7 + fVar9);
        }
        dVar35 = -3.1415927410125732;
        dVar34 = 3.1415927410125732;
        dVar23 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
        dVar23 = (double)fastfunc::FastWrapRot((float)dVar26,(float)dVar23);
        dVar33 = 3.141592502593994;
        fVar3 = (float)(dVar23 + 1.570796251296997);
        dVar32 = -3.141592502593994;
        dVar31 = -0.16666656732559204;
        dVar30 = 0.008333025500178337;
        dVar29 = -0.0001980741071747616;
        dVar23 = 2.601886990305502e-06;
        fVar9 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar9 = fVar3;
        }
        fVar4 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar9 < 0.0) {
          fVar4 = fVar9;
        }
        dVar28 = 0.3499999940395355;
        fVar5 = fVar4 * fVar4;
        fVar3 = fVar5 * fVar5 * fVar4;
        fVar9 = fVar5 * fVar3;
        dVar27 = (double)(fVar5 * fVar9 * 2.601887e-06 +
                         fVar9 * -0.0001980741 +
                         fVar3 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4);
        dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar22,pfVar8[2] * 0.35);
        dVar27 = (double)(float)(dVar27 * dVar24);
        dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar34);
        dVar24 = (double)fastfunc::FastWrapRot((float)dVar26,(float)dVar24);
        dVar26 = (double)(float)(dVar33 - dVar24);
        if (dVar24 - (double)(float)(dVar33 - dVar24) < 0.0) {
          dVar26 = dVar24;
        }
        dVar33 = (double)(float)(dVar32 - dVar24);
        if ((double)(float)(dVar32 - dVar24) - dVar26 < 0.0) {
          dVar33 = dVar26;
        }
        dVar32 = (double)(float)(dVar33 * dVar33);
        dVar24 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar33));
        dVar26 = (double)(float)(dVar32 * dVar24);
        dVar23 = (double)(float)((double)(float)(dVar32 * dVar26) * dVar23 +
                                (double)(float)(dVar26 * dVar29 +
                                               (double)(float)(dVar24 * dVar30 +
                                                              (double)(float)((double)(float)(dVar32
                                                                                             * 
                                                  dVar33) * dVar31 + dVar33))));
        dVar26 = (double)mobyutil::MB_randRangeFloat
                                   ((float)dVar22,(float)((double)pfVar8[2] * dVar28));
        dVar23 = (double)(float)(dVar23 * dVar26);
        dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar34);
        (moby->rotation).x = (float)dVar26;
        dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar34);
        (moby->rotation).y = (float)dVar26;
        dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar34);
        (moby->rotation).z = (float)dVar26;
        fastfunc::FastVecNormalize(pfVar8,pfVar8,0xa10980);
        dVar26 = (double)mobyutil::MB_randRangeFloat(0.07,0.13);
        *pfVar8 = (float)((double)*pfVar8 * dVar26 + dVar27);
        pfVar8[2] = (float)((double)pfVar8[2] * dVar26);
        pfVar8[1] = (float)((double)pfVar8[1] * dVar26 + dVar23);
        dVar29 = (double)CollOutput.ip.x;
        dVar30 = (double)CollOutput.ip.y;
        dVar31 = (double)CollOutput.ip.z;
        dVar23 = (double)SQRT(CollOutput.normal.z * CollOutput.normal.z +
                              CollOutput.normal.x * CollOutput.normal.x +
                              CollOutput.normal.y * CollOutput.normal.y);
        fVar3 = (float)(0.10000000149011612 / dVar23);
        dVar26 = dVar22;
        if (dVar22 - dVar23 < 0.0) {
          dVar26 = (double)(CollOutput.normal.x * fVar3);
        }
        dVar32 = dVar22;
        if (dVar22 - dVar23 < 0.0) {
          dVar32 = (double)(CollOutput.normal.y * fVar3);
        }
        dVar33 = dVar22;
        if (dVar22 - dVar23 < 0.0) {
          dVar33 = (double)(CollOutput.normal.z * fVar3);
        }
        if (dVar23 - dVar22 < 0.0) {
          dVar26 = (double)(CollOutput.normal.x * fVar3);
        }
        if (dVar23 - dVar22 < 0.0) {
          dVar32 = (double)(CollOutput.normal.y * fVar3);
        }
        if (dVar23 - dVar22 < 0.0) {
          dVar33 = (double)(CollOutput.normal.z * fVar3);
        }
        CollOutput.normal.x = (float)dVar26;
        CollOutput.normal.y = (float)dVar32;
        CollOutput.normal.z = (float)dVar33;
        (moby->pos).w = CollOutput.normal.w;
        (moby->pos).x = (float)(dVar26 + dVar29);
        (moby->pos).y = (float)(dVar32 + dVar30);
        (moby->pos).z = (float)(dVar33 + dVar31);
        dVar26 = (double)mobyutil::MB_randRangeFloat
                                   (mobyutil::g_FrameTime * 1.5707964,
                                    mobyutil::g_FrameTime * 6.2831855);
        fVar3 = 1.0;
        if (dVar22 - (double)pfVar8[6] < 0.0) {
          fVar3 = -1.0;
        }
        pfVar8[6] = (float)(dVar26 * (double)fVar3);
      }
    }
    if (pfVar8[8] == 0.0) {
      iVar14 = fastfunc::FastDecTimerS32(pfVar8 + 4);
      if ((iVar14 != 0) ||
         ((SQRT(pfVar8[2] * pfVar8[2] + *pfVar8 * *pfVar8 + pfVar8[1] * pfVar8[1]) <
           mobyutil::g_FrameTime * 0.5 && (pfVar8[7] == 0.0)))) {
        iVar14 = 0;
        dVar22 = 0.0;
        dVar26 = -1.0;
        dVar23 = 1.0;
        dVar29 = 0.5;
        dVar30 = 70000.0;
        dVar31 = 140000.0;
        do {
          *(undefined4 *)(puVar11 + 0x10) = 0;
          *(undefined4 *)((int)puVar11 + 0x84) = 0;
          *(undefined4 *)(puVar11 + 0x11) = 0;
          *(undefined4 *)((int)puVar11 + 0x8c) = 0;
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)(puVar11 + 0x10) = (float)dVar32;
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)((int)puVar11 + 0x84) = (float)dVar32;
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)(puVar11 + 0x11) = (float)dVar32;
          *(undefined4 *)(puVar11 + 0x12) = 0;
          *(undefined4 *)((int)puVar11 + 0x94) = 0;
          *(undefined4 *)(puVar11 + 0x13) = 0;
          *(undefined4 *)((int)puVar11 + 0x9c) = 0;
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)(puVar11 + 0x12) = (float)dVar32;
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)((int)puVar11 + 0x94) = (float)dVar32;
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)(puVar11 + 0x13) = (float)dVar32;
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar29);
          fVar9 = *(float *)((int)puVar11 + 0x94);
          fVar4 = *(float *)(puVar11 + 0x12);
          fVar5 = *(float *)(puVar11 + 0x13);
          fVar7 = (moby->pos).x;
          fVar6 = (moby->pos).y;
          dVar33 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar9 * fVar9);
          fVar3 = (float)(dVar32 / dVar33);
          dVar32 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar32 = (double)(fVar5 * fVar3);
          }
          dVar34 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar34 = (double)(fVar9 * fVar3);
          }
          dVar35 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar35 = (double)(fVar4 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar32 = (double)(fVar5 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar34 = (double)(fVar9 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar35 = (double)(fVar4 * fVar3);
          }
          *(float *)(puVar11 + 0x13) = (float)(dVar32 + (double)(moby->pos).z);
          *(float *)((int)puVar11 + 0x94) = (float)(dVar34 + (double)fVar6);
          *(float *)(puVar11 + 0x12) = (float)(dVar35 + (double)fVar7);
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar29);
          fVar9 = *(float *)((int)puVar11 + 0x84);
          fVar4 = *(float *)(puVar11 + 0x10);
          fVar5 = *(float *)(puVar11 + 0x11);
          dVar33 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar9 * fVar9);
          fVar3 = (float)((double)(float)(dVar32 * (double)mobyutil::g_FrameTime) / dVar33);
          dVar32 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar32 = (double)(fVar4 * fVar3);
          }
          dVar34 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar34 = (double)(fVar9 * fVar3);
          }
          dVar35 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar35 = (double)(fVar5 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar32 = (double)(fVar4 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar34 = (double)(fVar9 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar35 = (double)(fVar5 * fVar3);
          }
          *(float *)(puVar11 + 0x10) = (float)dVar32;
          *(float *)((int)puVar11 + 0x84) = (float)dVar34;
          *(float *)(puVar11 + 0x11) = (float)dVar35;
          *(float *)(puVar11 + 0x10) = (float)(dVar32 + (double)*pfVar8);
          *(float *)((int)puVar11 + 0x84) = (float)(dVar34 + (double)pfVar8[1]);
          *(float *)(puVar11 + 0x11) = (float)(dVar35 + (double)pfVar8[2]);
          uVar25 = mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar31);
          iVar15 = mobyutil::MB_randRange(0x14,0x3c);
          puVar11[0x19] = (longlong)iVar15;
          puVar11[0x19] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar11[0x19] + dVar29));
          partupd::SpawnPart_22(uVar25,uVar12 - 0xd0,uVar12 - 0xe0,0x1f0c1820,&DAT_00081020);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 0x28);
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      iVar14 = fastfunc::FastDecTimerS32(pfVar8 + 4);
      if (iVar14 == 0) {
        moby->alpha = (s8)(((int)pfVar8[4] * 0x7f) / (int)pfVar8[10]);
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 00426178  ns=mobyupdate_helpers  size=0x4d4
// sig: undefined M1807_00426178(void)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 00657310: 'width:%f \n' | 00657320: 'height:%f \n' | 00657330: 'width_div:%d \n' | 00657340: 'height_div:%d \n' | 00657350: 'r:%d \n' | 00657358: 'g:%d \n' | 00657360: 'b:%d \n' | 00657368: 'alpha:%d \n' | 00657378: 'top_rate:%f \n' | 00657388: 'bottom_rate:%f \n' | 006573a0: 'top_h_amp:%f \n' | 006573b0: 'top_v_amp:%f \n' | 006573c0: 'bottom_h_amp:%f \n' | 006573d8: 'bottom_v_amp:%f \n' | 006573f0: 'xh_ang_variance:%f \n' | 00657408: 'yv_ang_variance:%f \n' | 00657420: 'yh_ang_variance:%f \n' | 00657438: 'xv_ang_variance:%f \n' | 00657450: 'blend_a:%d \n' | 00657460: 'blend_b:%d \n' | 00657470: 'blend_c:%d \n' | 00657480: 'blend_d:%d \n' | 00657490: 's_scroll_speed:%f \n' | 006574a8: 's_scroll_sinamp:%f \n' | 006574c0: 's_scroll_sinrate:%f \n' | 006574d8: 't_scroll_speed:%f \n' | 006574f0: 't_scroll_sinamp:%f \n' | 00657508: 't_scroll_sinrate:%f \n' | 00657520: 'rate_variance_amp:%f \n' | 00657538: 'rate_variance_rate:%f \n'

int32_t mobyupdate_helpers::M1807_00426178(float *param_1)

{
  int32_t iVar1;
  
  libc::printf("width:%f \n",(double)*param_1);
  libc::printf("height:%f \n",(double)param_1[1]);
  libc::printf("width_div:%d \n",(ulonglong)*(byte *)(param_1 + 2));
  libc::printf("height_div:%d \n",(ulonglong)*(byte *)((int)param_1 + 9));
  libc::printf("r:%d \n",(ulonglong)*(byte *)(param_1 + 4));
  libc::printf("g:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x11));
  libc::printf("b:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x12));
  libc::printf("alpha:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x13));
  libc::printf("top_rate:%f \n",(double)param_1[5]);
  libc::printf("bottom_rate:%f \n",(double)param_1[6]);
  libc::printf("top_h_amp:%f \n",(double)param_1[7]);
  libc::printf("top_v_amp:%f \n",(double)param_1[8]);
  libc::printf("bottom_h_amp:%f \n",(double)param_1[8]);
  libc::printf("bottom_v_amp:%f \n",(double)param_1[8]);
  libc::printf("xh_ang_variance:%f \n",(double)param_1[0xb]);
  libc::printf("yv_ang_variance:%f \n",(double)param_1[0xc]);
  libc::printf("yh_ang_variance:%f \n",(double)param_1[0xd]);
  libc::printf("xv_ang_variance:%f \n",(double)param_1[0xe]);
  libc::printf("blend_a:%d \n",(ulonglong)*(byte *)(param_1 + 0xf));
  libc::printf("blend_b:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x3d));
  libc::printf("blend_c:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x3e));
  libc::printf("blend_d:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x3f));
  libc::printf("s_scroll_speed:%f \n",(double)param_1[0x10]);
  libc::printf("s_scroll_sinamp:%f \n",(double)param_1[0x11]);
  libc::printf("s_scroll_sinrate:%f \n",(double)param_1[0x12]);
  libc::printf("t_scroll_speed:%f \n",(double)param_1[0x13]);
  libc::printf("t_scroll_sinamp:%f \n",(double)param_1[0x14]);
  libc::printf("t_scroll_sinrate:%f \n",(double)param_1[0x15]);
  libc::printf("rate_variance_amp:%f \n",(double)param_1[0x16]);
  libc::printf("rate_variance_rate:%f \n",(double)param_1[0x17]);
  libc::printf("top_ang_h_offset:%f \n",(double)param_1[0x18]);
  libc::printf("top_ang_v_offset:%f \n",(double)param_1[0x19]);
  libc::printf("bot_ang_h_offset:%f \n",(double)param_1[0x1a]);
  libc::printf("bot_ang_v_offset:%f \n",(double)param_1[0x1b]);
  libc::printf("texture_w_count:%f \n",(double)param_1[0x1c]);
  libc::printf("texture_h_count:%f \n",(double)param_1[0x1d]);
  libc::printf("x_ang_to_depth:%f \n",(double)param_1[0x1e]);
  libc::printf("y_ang_to_depth:%f \n",(double)param_1[0x1f]);
  libc::printf("left_height:%f \n",(double)param_1[0x20]);
  libc::printf("right_height:%f \n",(double)param_1[0x21]);
  libc::printf("rand_frac:%f \n",(double)param_1[0x22]);
  libc::printf("rand_rate:%f \n",(double)param_1[0x23]);
  libc::printf("rand_xtime_factor:%f \n",(double)param_1[0x34]);
  libc::printf("rand_ytime_factor:%f \n",(double)param_1[0x35]);
  libc::printf("rand_0time_factor:%f \n",(double)param_1[0x36]);
  iVar1 = libc::printf("\n");
  return iVar1;
}



//==== 0042664c  ns=mobyupdate_helpers  size=0xc5c
// sig: undefined M1807_0042664c(void)
// callers(0): 
// callees(6): 00502dcc FUN_00502dcc; 00502ddc stub::STUB_00502ddc; 00502de8 stub::STUB_00502de8; 005c8510 libc::strlen; 005cd098 libc::printf; 005cd2a8 libc::snprintf
// strings: 006576ac: 'host:c:/data/M671_%04d.txt' | 006576cc: "Can't create M671 parameter file %s\n" | 006576f4: 'M671 Fire Parameters\r\n' | 0065770c: 'width:%f \r\r\n' | 0065771c: 'height:%f \r\n' | 0065772c: 'width_div:%d \r\n' | 0065773c: 'height_div:%d \r\n' | 00657754: 'r:%d \r\n' | 0065775c: 'g:%d \r\n' | 00657764: 'b:%d \r\n' | 0065776c: 'alpha:%d \r\n' | 0065777c: 'top_rate:%f \r\n' | 0065778c: 'bottom_rate:%f \r\n' | 006577a4: 'top_h_amp:%f \r\n' | 006577b4: 'top_v_amp:%f \r\n' | 006577c4: 'bottom_h_amp:%f \r\n' | 006577dc: 'bottom_v_amp:%f \r\n' | 006577f4: 'xh_ang_variance:%f \r\n' | 0065780c: 'yv_ang_variance:%f \r\n' | 00657824: 'yh_ang_variance:%f \r\n' | 0065783c: 'xv_ang_variance:%f \r\n' | 00657854: 'blend_a:%d \r\n' | 00657864: 'blend_b:%d \r\n' | 00657874: 'blend_c:%d \r\n' | 00657884: 'blend_d:%d \r\n' | 00657894: 's_scroll_speed:%f \r\n' | 006578ac: 's_scroll_sinamp:%f \r\n' | 006578c4: 's_scroll_sinrate:%f \r\n' | 006578dc: 't_scroll_speed:%f \r\n' | 006578f4: 't_scroll_sinamp:%f \r\n'

int32_t mobyupdate_helpers::M1807_0042664c(float *param_1)

{
  undefined8 uVar1;
  int32_t iVar2;
  size_t sVar3;
  int iVar4;
  char acStack_c0 [64];
  char acStack_80 [88];
  
  iVar4 = 0;
  do {
    libc::snprintf(acStack_c0,"host:c:/data/M671_%04d.txt",iVar4);
    uVar1 = FUN_00502dcc(acStack_c0,0);
    if ((int)uVar1 < 0) break;
    stub::STUB_00502ddc(uVar1);
    iVar4 = iVar4 + 1;
  } while (-1 < (int)uVar1);
  uVar1 = FUN_00502dcc(acStack_c0,1);
  if (((int)uVar1 < 0) && (uVar1 = FUN_00502dcc(acStack_c0,3), (int)uVar1 < 0)) {
    iVar2 = libc::printf("Can\'t create M671 parameter file %s\n",acStack_c0);
  }
  else {
    libc::snprintf(acStack_80,"M671 Fire Parameters\r\n");
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"width:%f \r\r\n",(double)*param_1);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"height:%f \r\n",(double)param_1[1]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"width_div:%d \r\n",(ulonglong)*(byte *)(param_1 + 2));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"height_div:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 9));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"r:%d \r\n",(ulonglong)*(byte *)(param_1 + 4));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"g:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x11));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"b:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x12));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"alpha:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x13));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"top_rate:%f \r\n",(double)param_1[5]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"bottom_rate:%f \r\n",(double)param_1[6]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"top_h_amp:%f \r\n",(double)param_1[7]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"top_v_amp:%f \r\n",(double)param_1[8]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"bottom_h_amp:%f \r\n",(double)param_1[9]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"bottom_v_amp:%f \r\n",(double)param_1[10]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"xh_ang_variance:%f \r\n",(double)param_1[0xb]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"yv_ang_variance:%f \r\n",(double)param_1[0xc]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"yh_ang_variance:%f \r\n",(double)param_1[0xd]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"xv_ang_variance:%f \r\n",(double)param_1[0xe]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"blend_a:%d \r\n",(ulonglong)*(byte *)(param_1 + 0xf));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"blend_b:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x3d));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"blend_c:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x3e));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"blend_d:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x3f));
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"s_scroll_speed:%f \r\n",(double)param_1[0x10]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"s_scroll_sinamp:%f \r\n",(double)param_1[0x11]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"s_scroll_sinrate:%f \r\n",(double)param_1[0x12]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"t_scroll_speed:%f \r\n",(double)param_1[0x13]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"t_scroll_sinamp:%f \r\n",(double)param_1[0x14]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"t_scroll_sinrate:%f \r\n",(double)param_1[0x15]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"rate_variance_amp:%f \r\n",(double)param_1[0x16]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"rate_variance_rate:%f \r\n",(double)param_1[0x17]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"top_ang_h_offset:%f \r\n",(double)param_1[0x18]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"top_ang_v_offset:%f \r\n",(double)param_1[0x19]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"bot_ang_h_offset:%f \r\n",(double)param_1[0x1a]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"bot_ang_v_offset:%f \r\n",(double)param_1[0x1b]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"texture_w_count:%f \r\n",(double)param_1[0x1c]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"texture_h_count:%f \r\n",(double)param_1[0x1d]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"x_ang_to_depth:%f \r\n",(double)param_1[0x1e]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"y_ang_to_depth:%f \r\n",(double)param_1[0x1f]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"left_height:%f \r\n",(double)param_1[0x20]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"right_height:%f \r\n",(double)param_1[0x21]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"rand_frac:%f \r\n",(double)param_1[0x22]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"rand_rate:%f \r\n",(double)param_1[0x23]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"rand_xtime_factor:%f \r\n",(double)param_1[0x34]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"rand_ytime_factor:%f \r\n",(double)param_1[0x35]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"rand_0time_factor:%f \r\n",(double)param_1[0x36]);
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    libc::snprintf(acStack_80,"\r\n");
    sVar3 = libc::strlen(acStack_80);
    stub::STUB_00502de8(uVar1,acStack_80,sVar3);
    iVar2 = stub::STUB_00502ddc(uVar1);
  }
  return iVar2;
}



//==== 004272d8  ns=mobyupdate_helpers  size=0xc8c
// sig: undefined M1807_004272d8(void)
// callers(0): 
// callees(3): 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00657ab8: 'width:%f ->' | 00657ad0: 'height:%f ->' | 00657ae0: 'width_div:%d ->' | 00657af8: 'height_div:%d ->' | 00657b10: 'alpha:%d ->' | 00657b20: 'top_rate:%f ->' | 00657b48: 'top_h_amp:%f ->' | 00657b58: 'top_v_amp:%f ->' | 00657b68: 'bottom_h_amp:%f ->' | 00657b80: 'bottom_v_amp:%f ->' | 00657b98: 'xh_ang_variance:%f ->' | 00657bb0: 'yv_ang_variance:%f ->' | 00657bc8: 'yh_ang_variance:%f ->' | 00657be0: 'xv_ang_variance:%f ->' | 00657bf8: 'rate_variance_amp:%f ->' | 00657c10: 'rate_variance_rate:%f ->' | 00657c30: 'top_ang_h_offset:%f ->' | 00657c48: 'top_ang_v_offset:%f ->' | 00657c60: 'bot_ang_h_offset:%f ->' | 00657c78: 'bot_ang_v_offset:%f ->' | 00657c90: 'x_ang_to_depth:%f ->' | 00657ca8: 'y_ang_to_depth:%f ->' | 00657cc0: 'left_height:%f ->' | 00657cf0: 'rand_frac:%f ->' | 004272d0: '?fff`' | 00657d00: 'rand_rate:%f ->' | 00657d10: 'rand_xtime_factor:%f ->' | 00657d28: 'rand_ytime_factor:%f ->' | 00657d40: 'rand_0time_factor:%f ->'

ulonglong mobyupdate_helpers::M1807_004272d8(double param_1,float *param_2,ulonglong param_3)

{
  float fVar1;
  int iVar2;
  int32_t iVar3;
  char cVar4;
  byte bVar5;
  double dVar6;
  double dVar7;
  
  iVar2 = (int)param_3;
  if (iVar2 < 0xe) {
    if (iVar2 < 6) {
      if (iVar2 == 5) {
        libc::printf("top_rate:%f ->",(double)param_2[5]);
        dVar7 = (double)fastfunc::FastWrapRot(param_2[5],(float)(param_1 * 3.1415927410125732));
        param_2[5] = (float)dVar7;
        iVar3 = libc::printf("%f\n",dVar7);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 4) {
        libc::printf("alpha:%d ->",(ulonglong)*(byte *)((int)param_2 + 0x13));
        cVar4 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 128.0));
        bVar5 = *(char *)((int)param_2 + 0x13) + cVar4;
        *(byte *)((int)param_2 + 0x13) = bVar5;
        iVar3 = libc::printf("%d\n",(ulonglong)bVar5);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 3) {
        libc::printf("height_div:%d ->",(ulonglong)*(byte *)((int)param_2 + 9));
        cVar4 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 5.0));
        bVar5 = *(char *)((int)param_2 + 9) + cVar4;
        *(byte *)((int)param_2 + 9) = bVar5;
        if (bVar5 == 0) {
          bVar5 = 2;
          *(undefined1 *)((int)param_2 + 9) = 2;
        }
        if (0x28 < bVar5) {
          bVar5 = 0x19;
          *(undefined1 *)((int)param_2 + 9) = 0x19;
        }
        iVar3 = libc::printf("%d\n",(ulonglong)bVar5);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 2) {
        libc::printf("width_div:%d ->",(ulonglong)*(byte *)(param_2 + 2));
        cVar4 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 5.0));
        bVar5 = *(char *)(param_2 + 2) + cVar4;
        *(byte *)(param_2 + 2) = bVar5;
        if (bVar5 == 0) {
          bVar5 = 2;
          *(undefined1 *)(param_2 + 2) = 2;
        }
        if (0x28 < bVar5) {
          bVar5 = 0x19;
          *(undefined1 *)(param_2 + 2) = 0x19;
        }
        iVar3 = libc::printf("%d\n",(ulonglong)bVar5);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 1) {
        libc::printf("height:%f ->",(double)param_2[1]);
        dVar6 = (double)param_2[1];
        iVar2 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 10.0));
        dVar7 = (double)(float)(dVar6 + (double)(longlong)iVar2);
        param_2[1] = (float)(dVar6 + (double)(longlong)iVar2);
        if (dVar7 < 0.10000000149011612) {
          param_2[1] = 0.1;
          dVar7 = 0.10000000149011612;
        }
        iVar3 = libc::printf("%f\n",dVar7);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 0) {
        libc::printf("width:%f ->",(double)*param_2);
        dVar6 = (double)*param_2;
        iVar2 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 10.0));
        dVar7 = (double)(float)(dVar6 + (double)(longlong)iVar2);
        *param_2 = (float)(dVar6 + (double)(longlong)iVar2);
        if (dVar7 < 0.10000000149011612) {
          *param_2 = 0.1;
          dVar7 = 0.10000000149011612;
        }
        iVar3 = libc::printf("%f\n",dVar7);
        param_3 = (ulonglong)iVar3;
      }
    }
    else if (iVar2 == 0xd) {
      libc::printf("xv_ang_variance:%f ->",(double)param_2[0xe]);
      fVar1 = (float)(param_1 * 10.0 + (double)param_2[0xe]);
      param_2[0xe] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0xc) {
      libc::printf("yh_ang_variance:%f ->",(double)param_2[0xd]);
      fVar1 = (float)(param_1 * 10.0 + (double)param_2[0xd]);
      param_2[0xd] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0xb) {
      libc::printf("yv_ang_variance:%f ->",(double)param_2[0xc]);
      fVar1 = (float)(param_1 * 10.0 + (double)param_2[0xc]);
      param_2[0xc] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 10) {
      libc::printf("xh_ang_variance:%f ->",(double)param_2[0xb]);
      fVar1 = (float)(param_1 * 10.0 + (double)param_2[0xb]);
      param_2[0xb] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 9) {
      libc::printf("bottom_v_amp:%f ->",(double)param_2[10]);
      fVar1 = (float)((double)param_2[1] * param_1 + (double)param_2[10]);
      param_2[10] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 8) {
      libc::printf("bottom_h_amp:%f ->",(double)param_2[9]);
      fVar1 = (float)((double)*param_2 * param_1) * 0.5 + param_2[9];
      param_2[9] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 7) {
      libc::printf("top_v_amp:%f ->",(double)param_2[8]);
      fVar1 = (float)((double)param_2[1] * param_1 + (double)param_2[8]);
      param_2[8] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 6) {
      libc::printf("top_h_amp:%f ->",(double)param_2[7]);
      fVar1 = (float)((double)*param_2 * param_1) * 0.5 + param_2[7];
      param_2[7] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
  }
  else if (iVar2 < 0x15) {
    if (iVar2 == 0x14) {
      libc::printf("x_ang_to_depth:%f ->",(double)param_2[0x1e]);
      dVar7 = 0.5;
      fVar1 = (float)(param_1 * 0.5 + (double)param_2[0x1e]);
      param_2[0x1e] = fVar1;
      libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)(uint)param_2[0x1e] & 0x7fffffff;
      if (0x40400000 < (uint)param_3) {
        param_2[0x1e] = (float)((double)param_2[0x1e] * dVar7);
      }
    }
    else if (iVar2 == 0x13) {
      libc::printf("bot_ang_v_offset:%f ->",(double)param_2[0x1b]);
      param_2[0x19] = (float)(param_1 * 30.0 + (double)param_2[0x19]);
      iVar3 = libc::printf("%f\n",(double)param_2[0x1b]);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0x12) {
      libc::printf("bot_ang_h_offset:%f ->",(double)param_2[0x1a]);
      fVar1 = (float)(param_1 * 30.0 + (double)param_2[0x1a]);
      param_2[0x1a] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0x11) {
      libc::printf("top_ang_v_offset:%f ->",(double)param_2[0x19]);
      fVar1 = (float)(param_1 * 30.0 + (double)param_2[0x19]);
      param_2[0x19] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0x10) {
      libc::printf("top_ang_h_offset:%f ->",(double)param_2[0x18]);
      fVar1 = (float)(param_1 * 30.0 + (double)param_2[0x18]);
      param_2[0x18] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0xf) {
      libc::printf("rate_variance_rate:%f ->",(double)param_2[0x17]);
      fVar1 = (float)(param_1 * 3.1415927410125732) * 0.5 + param_2[0x17];
      param_2[0x17] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0xe) {
      libc::printf("rate_variance_amp:%f ->",(double)param_2[0x16]);
      dVar7 = (double)param_2[6];
      if ((double)param_2[5] - (double)param_2[6] < 0.0) {
        dVar7 = (double)param_2[5];
      }
      fVar1 = (float)(param_1 * dVar7 + (double)param_2[0x16]);
      param_2[0x16] = fVar1;
      iVar3 = libc::printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
  }
  else if (iVar2 == 0x1b) {
    libc::printf("rand_0time_factor:%f ->",(double)param_2[0x36]);
    fVar1 = (float)(param_1 * 5.0 + (double)param_2[0x36]);
    param_2[0x36] = fVar1;
    iVar3 = libc::printf("%f\n",(double)fVar1);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x1a) {
    libc::printf("rand_ytime_factor:%f ->",(double)param_2[0x35]);
    fVar1 = (float)(param_1 * 5.0 + (double)param_2[0x35]);
    param_2[0x35] = fVar1;
    iVar3 = libc::printf("%f\n",(double)fVar1);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x19) {
    libc::printf("rand_xtime_factor:%f ->",(double)param_2[0x34]);
    fVar1 = (float)(param_1 * 5.0 + (double)param_2[0x34]);
    param_2[0x34] = fVar1;
    iVar3 = libc::printf("%f\n",(double)fVar1);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x18) {
    libc::printf("rand_rate:%f ->",(double)param_2[0x23]);
    fVar1 = (float)(param_1 * 0.5 + (double)param_2[0x23]);
    dVar7 = (double)fVar1;
    param_2[0x23] = fVar1;
    if (1.0 < dVar7) {
      dVar7 = 0.8999999761581421;
      param_2[0x23] = 0.9;
    }
    if (dVar7 < 0.009999999776482582) {
      dVar7 = 0.10000000149011612;
      param_2[0x23] = 0.1;
    }
    iVar3 = libc::printf("%f\n",dVar7);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x17) {
    libc::printf("rand_frac:%f ->",(double)param_2[0x22]);
    fVar1 = (float)(param_1 * 0.5 + (double)param_2[0x22]);
    dVar7 = (double)fVar1;
    param_2[0x22] = fVar1;
    if (1.0 < dVar7) {
      dVar7 = 0.8999999761581421;
      param_2[0x22] = 0.9;
    }
    if (dVar7 < 0.009999999776482582) {
      dVar7 = 0.10000000149011612;
      param_2[0x22] = 0.1;
    }
    iVar3 = libc::printf("%f\n",dVar7);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x16) {
    libc::printf("left_height:%f ->",(double)param_2[0x20]);
    dVar6 = (double)param_2[1];
    fVar1 = (float)(dVar6 * param_1 + (double)param_2[0x20]);
    dVar7 = (double)fVar1;
    param_2[0x20] = fVar1;
    if (dVar7 < 0.009999999776482582) {
      dVar7 = 0.029999999329447746;
      param_2[0x20] = 0.03;
    }
    if (dVar6 < dVar7) {
      param_2[0x20] = param_2[1];
      dVar7 = dVar6;
    }
    iVar3 = libc::printf("%f\n",dVar7);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x15) {
    libc::printf("y_ang_to_depth:%f ->",(double)param_2[0x1f]);
    dVar7 = 0.5;
    fVar1 = (float)(param_1 * 0.5 + (double)param_2[0x1f]);
    param_2[0x1f] = fVar1;
    libc::printf("%f\n",(double)fVar1);
    param_3 = (ulonglong)(uint)param_2[0x1f] & 0x7fffffff;
    if (0x40400000 < (uint)param_3) {
      param_2[0x1f] = (float)((double)param_2[0x1f] * dVar7);
    }
  }
  return param_3;
}



//==== 00427f64  ns=mobyupdate_unsorted  size=0x24
// sig: undefined UpdateMoby_699(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 699 */

void mobyupdate_unsorted::UpdateMoby_699(MobyInstance *moby)

{
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 00427f88  ns=mobyupdate_helpers  size=0x14
// sig: undefined M700_00427f88(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M700_00427f88(void)

{
  DAT_00857ae0 = 0x10000;
  return;
}



//==== 00427ff0  ns=mobyupdate_unsorted  size=0x574
// sig: undefined UpdateMoby_700(MobyInstance * moby)
// callers(0): 
// callees(8): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 00125350 partupd::SpawnPart_16; 00425540 FUN_00425540; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16

/* Moby 700 */

void mobyupdate_unsorted::UpdateMoby_700(MobyInstance *moby)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  ulonglong uVar11;
  undefined8 in_LR;
  double dVar12;
  double dVar13;
  double dVar14;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined4 local_f0 [6];
  longlong local_d8;
  
  piVar2 = (int *)moby->pVar;
  uVar11 = ZEXT48(piVar2);
  fastfunc::FastDecTimerS16(uVar11 + 4);
  fastfunc::FastDecTimerS16(uVar11 + 6);
  if (*piVar2 != 0) {
    iVar9 = fastfunc::FastDecTimerS32(uVar11);
    if (iVar9 != 0) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(in_LR,0x427fa0);
      auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar25 = vectorMultiplyAddFloatingPoint
                          (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                           auVar26);
      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
      auVar25 = vectorSplatHalfWord(auVar25,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar25,4,uVar11);
      *(undefined2 *)(piVar2 + 1) = uVar4;
    }
    if ((*(short *)((int)piVar2 + 6) == 0) && (iVar9 = mobyutil::MB_randInt(100), iVar9 < 5)) {
      dVar24 = -0.5;
      dVar23 = 0.0;
      dVar16 = 0.5;
      dVar12 = (double)mobyutil::MB_randRangeFloat
                                 (mobyutil::g_FrameTime * -0.5,mobyutil::g_FrameTime * 0.5);
      dVar24 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)mobyutil::g_FrameTime * dVar24),
                                  (float)((double)mobyutil::g_FrameTime * dVar16));
      dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar23,0.25);
      dVar14 = (double)mobyutil::MB_randRot();
      fVar1 = (float)(dVar14 + 1.570796251296997);
      dVar16 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar16 = dVar14;
      }
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      dVar20 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar16 < 0.0) {
        dVar20 = dVar16;
      }
      dVar22 = (double)(moby->pos).x;
      dVar21 = (double)(moby->pos).y;
      dVar14 = (double)(moby->pos).z;
      dVar16 = (double)(float)piVar2[3];
      fVar6 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar6 = fVar5;
      }
      dVar17 = (double)(float)(dVar20 * dVar20);
      fVar7 = fVar6 * fVar6;
      dVar19 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar20));
      fVar1 = fVar7 * fVar7 * fVar6;
      dVar18 = (double)(float)(dVar17 * dVar19);
      fVar5 = fVar7 * fVar1;
      dVar17 = (double)((float)(dVar17 * dVar18) * 2.601887e-06 +
                       (float)(dVar18 * -0.0001980741071747616 +
                              (double)(float)(dVar19 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar17 * dVar20) *
                                                             -0.16666656732559204 + dVar20))));
      dVar20 = (double)(fVar7 * fVar5 * 2.601887e-06 +
                       fVar5 * -0.0001980741 +
                       fVar1 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6);
      lVar8 = mobyutil::MB_randInt(3);
      local_f0[2] = 0x2ba;
      local_f0[1] = 0x2b9;
      local_f0[0] = 0x2b8;
      uVar15 = 0x3fa99999a0000000;
      uVar3 = *(undefined4 *)((int)local_f0 + (int)(lVar8 << 2));
      mobyutil::MB_randRange(0x3fa99999a0000000,0xb4,300);
      fVar1 = (float)(dVar20 * dVar13 + dVar22);
      FUN_00425540(uVar15,0x3ff0000000000000,0x3ff0000000000000,0x3fe8000000000000,
                   CONCAT44(fVar1,(float)(dVar17 * dVar13 + dVar21)),
                   CONCAT44((float)(dVar14 + dVar16),fVar1),CONCAT44((float)dVar12,(float)dVar24),
                   CONCAT44((float)dVar23,(float)dVar23),uVar3);
    }
    iVar9 = 0;
    dVar16 = 0.0;
    dVar12 = -0.5;
    dVar24 = 0.5;
    dVar13 = 3.0;
    dVar14 = 0.25;
    dVar23 = 70000.0;
    dVar20 = 140000.0;
    dVar21 = 180.5;
    do {
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar12),
                 (float)((double)mobyutil::g_FrameTime * dVar24));
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar12),
                 (float)((double)mobyutil::g_FrameTime * dVar24));
      mobyutil::MB_randRangeFloat((float)dVar16,(float)((double)mobyutil::g_FrameTime * dVar13));
      mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar14);
      mobyutil::MB_randRot();
      uVar15 = mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar20);
      local_d8 = (longlong)(int)((double)animationSpeed * dVar21);
      mobyutil::MB_randInt(3);
      local_f0[3] = 0;
      local_f0[5] = 2;
      local_f0[4] = 1;
      iVar10 = partupd::SpawnPart_16(uVar15,local_100,local_110,0xf081020,&DAT_00081020);
      if (iVar10 != 0) {
        *(float *)(iVar10 + 0x2c) = (float)((double)(moby->pos).z - dVar24);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
  }
  return;
}



//==== 00428570  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M701_00428570(void)
// callers(0): 
// callees(5): 0002e354 camera0::Cam0_SetCamHeight; 0002f3d8 camera0::Cam0_SetCamDist; 0002f414 camera0::Cam0_SetCamOfsZ; 0002f470 camera0::Cam0_ForceLookAtDir; 001113e0 mobyutil::MB_RotateQuatAxisAngle

void mobyupdate_helpers::M701_00428570(int param_1)

{
  float afStack_20 [4];
  
  mobyutil::MB_RotateQuatAxisAngle
            (DAT_010ccce0,afStack_20,(float *)(Cuboids + *(int *)(*(int *)(param_1 + 0x78) + 0x80)))
  ;
  camera0::Cam0_ForceLookAtDir(0x3fc1df46a0000000,0,afStack_20);
  camera0::Cam0_SetCamDist((double)DAT_00857b04,(double)DAT_00857b10,&DAT_00850000,0);
  camera0::Cam0_SetCamHeight((double)DAT_00857b08,(double)DAT_00857b10);
  camera0::Cam0_SetCamOfsZ((double)DAT_00857b0c,(double)DAT_00857b10,&DAT_00850000,0);
  return;
}



//==== 00428698  ns=mobyupdate_unsorted  size=0x8d0
// sig: undefined UpdateMoby_701(MobyInstance * moby)
// callers(0): 
// callees(14): 0002e354 camera0::Cam0_SetCamHeight; 0002f3d8 camera0::Cam0_SetCamDist; 0002f414 camera0::Cam0_SetCamOfsZ; 0002f470 camera0::Cam0_ForceLookAtDir; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0015d12c sound::PlayMobySound; 00425540 FUN_00425540; 004fffb4 fastfunc::FastDecTimerS16

/* Moby 701 */

undefined4 * mobyupdate_unsorted::UpdateMoby_701(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  f32 fVar3;
  ushort uVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  LevelId LVar11;
  int iVar13;
  longlong lVar12;
  undefined2 uVar15;
  undefined4 *puVar14;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float afStack_d0 [4];
  float afStack_c0 [4];
  undefined4 local_b0 [4];
  longlong local_a0;
  
  pvVar5 = moby->pVar;
  uVar16 = ZEXT48(pvVar5);
  if (moby->state != '\x01') {
    iVar13 = fastfunc::FastDecTimerS16(uVar16 + 0x84);
    if ((iVar13 == 0) && (iVar13 = mobyutil::MB_randInt(100), iVar13 < 5)) {
      dVar28 = -0.5;
      dVar27 = 0.5;
      dVar26 = 0.0;
      dVar17 = (double)mobyutil::MB_randRangeFloat
                                 (mobyutil::g_FrameTime * -0.5,mobyutil::g_FrameTime * 0.5);
      dVar28 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)mobyutil::g_FrameTime * dVar28),
                                  (float)((double)mobyutil::g_FrameTime * dVar27));
      dVar18 = (double)mobyutil::MB_randRangeFloat(2.0,3.0);
      dVar19 = (double)mobyutil::MB_randRot();
      fVar1 = (float)(dVar19 + 1.570796251296997);
      dVar27 = (double)(float)(3.141592502593994 - dVar19);
      if (dVar19 - (double)(float)(3.141592502593994 - dVar19) < 0.0) {
        dVar27 = dVar19;
      }
      fVar8 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar8 = fVar1;
      }
      dVar24 = (double)(float)(-3.141592502593994 - dVar19);
      if ((double)(float)(-3.141592502593994 - dVar19) - dVar27 < 0.0) {
        dVar24 = dVar27;
      }
      dVar25 = (double)*(float *)((int)pvVar5 + 0x70);
      dVar19 = (double)*(float *)((int)pvVar5 + 0x74);
      dVar27 = (double)*(float *)((int)pvVar5 + 0x78);
      fVar9 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
        fVar9 = fVar8;
      }
      dVar22 = (double)(float)(dVar24 * dVar24);
      fVar10 = fVar9 * fVar9;
      dVar23 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
      fVar1 = fVar10 * fVar10 * fVar9;
      dVar21 = (double)(float)(dVar22 * dVar23);
      fVar8 = fVar10 * fVar1;
      dVar21 = (double)((float)(dVar22 * dVar21) * 2.601887e-06 +
                       (float)(dVar21 * -0.0001980741071747616 +
                              (double)(float)(dVar23 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar22 * dVar24) *
                                                             -0.16666656732559204 + dVar24))));
      dVar24 = (double)(fVar10 * fVar8 * 2.601887e-06 +
                       fVar8 * -0.0001980741 +
                       fVar1 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9);
      lVar12 = mobyutil::MB_randInt(3);
      local_b0[2] = 0x2ba;
      local_b0[1] = 0x2b9;
      local_b0[0] = 0x2b8;
      uVar20 = 0x3fa99999a0000000;
      uVar6 = *(undefined4 *)((int)local_b0 + (int)(lVar12 << 2));
      mobyutil::MB_randRange(0x3fa99999a0000000,0xb4,300);
      fVar1 = (float)(dVar24 * dVar18 + dVar25);
      FUN_00425540(uVar20,0x3ff0000000000000,0x3ff0000000000000,0x3fe8000000000000,
                   CONCAT44(fVar1,(float)(dVar21 * dVar18 + dVar19)),CONCAT44((float)dVar27,fVar1),
                   CONCAT44((float)dVar17,(float)dVar28),CONCAT44((float)dVar26,(float)dVar26),uVar6
                  );
    }
  }
  bVar2 = moby->state;
  if (bVar2 == 4) {
    puVar14 = (undefined4 *)(uint)*(ushort *)((int)pvVar5 + 0x84);
    if ((*(ushort *)((int)pvVar5 + 0x84) == 0) &&
       (puVar14 = *(undefined4 **)((int)pvVar5 + 0x8c), puVar14 != (undefined4 *)0xffffffff)) {
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      hero::TransitionMovement(0,1);
      puVar14 = (undefined4 *)0x960000;
      draw::LetterBoxOn = 0;
      *(undefined4 *)((int)pvVar5 + 0x8c) = 0xffffffff;
    }
  }
  else if (bVar2 == 3) {
    mobyutil::MB_RotateQuatAxisAngle
              (DAT_010ccce0,afStack_d0,(float *)(Cuboids + *(int *)((int)moby->pVar + 0x80)));
    camera0::Cam0_ForceLookAtDir(0x3fc1df46a0000000,0,afStack_d0);
    camera0::Cam0_SetCamDist((double)DAT_00857b04,(double)DAT_00857b10,&DAT_00850000,0);
    camera0::Cam0_SetCamHeight((double)DAT_00857b08,(double)DAT_00857b10);
    camera0::Cam0_SetCamOfsZ((double)DAT_00857b0c,(double)DAT_00857b10,&DAT_00850000,0);
    *(float *)((int)pvVar5 + 0x68) = -(DAT_0071f418 * 30.0 - *(float *)((int)pvVar5 + 0x68));
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x60);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar5 + 100);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar5 + 0x68);
    puVar14 = (undefined4 *)fastfunc::FastDecTimerS16(uVar16 + 0x86);
    if (puVar14 != (undefined4 *)0x0) {
      puVar14 = &DAT_00428638;
      dVar27 = 20.0;
      if (20.0 < *(float *)((int)pvVar5 + 0x78) - (moby->pos).z) {
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        GameCamera.offset0.amp = 0.1;
        auVar30 = loadVectorLeftIndexed(0x5c,0x428638);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar29);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x168,0x9513c0
                       );
        *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
        *(undefined4 *)((int)pvVar5 + 0x68) = 0;
        *(undefined4 *)((int)pvVar5 + 100) = 0;
        *(undefined4 *)((int)pvVar5 + 0x60) = 0;
        moby->state = '\x04';
        sound::PlayMobySound(0,0,moby);
        LVar11 = Level;
        uVar4 = moby->uid;
        puVar14 = (undefined4 *)(&DAT_00a0cd1c + ((int)(short)uVar4 >> 5) * 4);
        (moby->pos).z = (float)((double)*(float *)((int)pvVar5 + 0x78) - dVar27);
        iVar13 = (int)((longlong)((int)(short)uVar4 >> 5) << 2);
        uVar7 = *(uint *)(&DAT_00a54dd0 + iVar13);
        puVar14[LVar11 * 0x40] = puVar14[LVar11 * 0x40] | 1 << (uVar4 & 0x1f);
        *(uint *)(&DAT_00a54dd0 + iVar13) = uVar7 | 1 << (uVar4 & 0x1f);
      }
    }
  }
  else if (bVar2 == 2) {
    mobyutil::MB_RotateQuatAxisAngle
              (DAT_010ccce0,afStack_c0,(float *)(Cuboids + *(int *)((int)moby->pVar + 0x80)));
    camera0::Cam0_ForceLookAtDir(0x3fc1df46a0000000,0,afStack_c0);
    camera0::Cam0_SetCamDist((double)DAT_00857b04,(double)DAT_00857b10,&DAT_00850000,0);
    camera0::Cam0_SetCamHeight((double)DAT_00857b08,(double)DAT_00857b10);
    camera0::Cam0_SetCamOfsZ((double)DAT_00857b0c,(double)DAT_00857b10,&DAT_00850000,0);
    puVar14 = (undefined4 *)fastfunc::FastDecTimerS16(uVar16 + 0x8a);
    if (puVar14 != (undefined4 *)0x0) {
      auVar30 = ZEXT416(0xffffffff);
      auVar29 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
      *(undefined4 *)((int)pvVar5 + 0x68) = 0;
      *(undefined4 *)((int)pvVar5 + 100) = 0;
      *(undefined4 *)((int)pvVar5 + 0x60) = 0;
      auVar30 = loadVectorLeftIndexed(0x54,0x428638);
      puVar14 = (undefined4 *)0x86;
      auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar29);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = vectorSplatHalfWord(auVar30,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar30,0x86,uVar16);
      *(undefined2 *)((int)pvVar5 + 0x86) = uVar15;
      moby->state = '\x03';
    }
  }
  else {
    puVar14 = (undefined4 *)(uint)bVar2;
    if (bVar2 == 1) {
      iVar13 = *(int *)((int)pvVar5 + 0x80);
      if (iVar13 != -1) {
        fVar1 = Cuboids[iVar13].pos.z;
        uVar7 = (int)fVar1 >> 0x1f;
        puVar14 = &hero::g_heroMtx;
        if (((int)((uVar7 >> 1 ^ (uint)fVar1) - uVar7) <=
             (int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                  ((int)g_heroPosition.z >> 0x1f))) &&
           (fVar1 = g_heroPosition.y - Cuboids[iVar13].pos.y,
           fVar8 = g_heroPosition.x - Cuboids[iVar13].pos.x,
           SQRT(fVar8 * fVar8 + fVar1 * fVar1) < 10.0)) {
          if ((hero::g_heroStateType < (undefined4 *)0x2) ||
             (puVar14 = hero::g_heroStateType, hero::g_heroStateType == (undefined4 *)0x9)) {
            local_a0 = (longlong)(int)(animationSpeed * 600.5);
            uVar15 = mobyutil::MB_randRange
                               ((int)(animationSpeed * 300.5),(int)(animationSpeed * 600.5));
            auVar29 = loadVectorLeftIndexed(0x88,uVar16);
            auVar31 = loadVectorRightIndexed(0x98,uVar16);
            *(undefined2 *)((int)pvVar5 + 0x84) = uVar15;
            auVar30 = ZEXT416(0xfffffff0);
            auVar32 = loadVectorLeftIndexed(8,0x428638);
            auVar31 = vectorShiftRightAlgebraicWord
                                (auVar29 | auVar31,
                                 auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
            auVar29 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar30 = ZEXT416(0xffffffff);
            auVar32 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar30 = vectorConvertFromSignedFixedPointWord(auVar31,0);
            auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
            auVar29 = vectorAddFloatingPoint
                                (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 |
                                         auVar29 << 0x60);
            auVar30 = ZEXT416(0xffffffff);
            auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
            auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar33,auVar29,auVar32);
            auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
            auVar30 = vectorSplatHalfWord(auVar30,1);
            uVar15 = storeVectorElementHalfWordIndexed(auVar30,0x8a,uVar16);
            *(undefined2 *)((int)pvVar5 + 0x8a) = uVar15;
            moby->state = '\x02';
            GameCamera.offset0.amp = 0.4;
            auVar30 = loadVectorLeftIndexed(0x4c,0x428638);
            auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar30 = vectorMultiplyAddFloatingPoint
                                (auVar29,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60,auVar31);
            auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
            auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
            GameCamera.offset0.total =
                 storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x168,
                            0x9513c0);
            puVar14 = (undefined4 *)sound::PlayMobySound(1,0,moby);
          }
        }
      }
    }
    else if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar5 + 0x20) = 0;
      *(undefined1 *)((int)pvVar5 + 0x28) = 4;
      fVar3 = (moby->pos).x;
      *(undefined2 *)((int)pvVar5 + 0x24) = 0;
      *(f32 *)((int)pvVar5 + 0x70) = fVar3;
      *(undefined2 *)((int)pvVar5 + 0x3e) = 5;
      uVar4 = moby->uid;
      *(f32 *)((int)pvVar5 + 0x74) = (moby->pos).y;
      *(f32 *)((int)pvVar5 + 0x78) = (moby->pos).z;
      *(f32 *)((int)pvVar5 + 0x7c) = (moby->pos).w;
      moby->state = '\x01';
      if (((&DAT_00a545c4)[(short)uVar4] != '\0') ||
         (puVar14 = (undefined4 *)
                    (*(uint *)(&DAT_00a0cd1c +
                              Level * 0x100 + (int)((longlong)((int)(short)uVar4 >> 5) << 2)) &
                    1 << (uVar4 & 0x1f)), puVar14 != (undefined4 *)0x0)) {
        *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
        *(undefined4 *)((int)pvVar5 + 0x68) = 0;
        *(undefined4 *)((int)pvVar5 + 100) = 0;
        *(undefined4 *)((int)pvVar5 + 0x60) = 0;
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar5 + 0x8c) = 0xffffffff;
        (moby->pos).z = *(float *)((int)pvVar5 + 0x78) - 20.0;
        puVar14 = (undefined4 *)0xffffffff;
      }
    }
  }
  return puVar14;
}



//==== 00428f68  ns=mobyupdate_helpers  size=0x14
// sig: undefined M702_00428f68(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M702_00428f68(void)

{
  DAT_00857b60 = 0x10000;
  return;
}



//==== 00428f88  ns=mobyupdate_unsorted  size=0x2a0
// sig: undefined UpdateMoby_702(MobyInstance * moby)
// callers(0): 
// callees(6): 0012c320 partupd::SpawnPart_40; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d204 sound::sound_MobyPlay_oClass; 004fff60 fastfunc::FastDecTimerS32; 00500ca4 fastfunc::FastEulerToMtx1

/* Moby 702 */

void mobyupdate_unsorted::UpdateMoby_702(MobyInstance *moby)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [64];
  
  lVar2 = (longlong)(int)moby;
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    *(undefined4 *)((int)pvVar1 + 0x10) = 0xffffffff;
    iVar3 = fastfunc::FastDecTimerS32((int)pvVar1 + 0xc);
    if (iVar3 != 0) {
      *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)pvVar1 + 4);
      moby->state = '\x01';
    }
  }
  else if (moby->state < 2) {
    fastfunc::FastEulerToMtx1(auStack_80,lVar2 + 0x40);
    partupd::SpawnPart_40(local_a0,local_90,0x40,lVar2);
    partupd::SpawnPart_40(local_a0,local_90,0x40,lVar2);
    partupd::SpawnPart_40(local_a0,local_90,0x40,lVar2);
    iVar3 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar1 + 0x10));
    if (iVar3 == 0) {
      iVar3 = sound::sound_MobyPlay_oClass(0,4,moby,0x519);
      *(int *)((int)pvVar1 + 0x10) = iVar3;
    }
    iVar3 = fastfunc::FastDecTimerS32((int)pvVar1 + 0xc);
    if (iVar3 != 0) {
      *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)pvVar1 + 8);
      moby->state = '\0';
      iVar3 = *(int *)((int)pvVar1 + 0x10);
      if (((iVar3 != -1) && (sound::g_SoundChannels[iVar3].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar3].state != '\0')) {
        sound::sound_Kill(iVar3);
      }
      *(undefined4 *)((int)pvVar1 + 0x10) = 0xffffffff;
    }
  }
  return;
}



//==== 00429228  ns=mobyupdate_helpers  size=0x58
// sig: undefined M715_00429228(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M715_00429228(int param_1)

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



//==== 00429290  ns=mobyupdate_unsorted  size=0x3b0
// sig: undefined UpdateMoby_{703_715}(MobyInstance * moby)
// callers(0): 
// callees(5): 00112900 mobyutil::MB_GetOrientation; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 703
   Moby 715 */

void mobyupdate_unsorted::UpdateMoby__703_715_(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  void *pvVar3;
  undefined2 uVar4;
  int iVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  undefined8 in_LR;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  Vec4 local_60;
  longlong local_50;
  
  pvVar3 = moby->pVar;
  uVar7 = ZEXT48(pvVar3);
  dVar11 = (double)(moby->pos).x;
  dVar12 = (double)(moby->pos).y;
  dVar13 = (double)(moby->pos).z;
  fastfunc::FastDecTimerS16(uVar7 + 0xa6);
  if (moby->state == '\0') {
    auVar14 = ZEXT416(0xffffffff);
    auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    *(undefined4 *)((int)pvVar3 + 0x20) = 0;
    *(undefined1 *)((int)pvVar3 + 0x28) = 4;
    *(undefined2 *)((int)pvVar3 + 0x24) = 0;
    fVar2 = (moby->pos).z;
    *(undefined2 *)((int)pvVar3 + 0x3e) = 0xd;
    *(f32 *)((int)pvVar3 + 0xa0) = fVar2;
    moby->setByGroup = *(char *)((int)pvVar3 + 0xa4);
    auVar14 = loadVectorLeftIndexed(in_LR,0x429280);
    auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar14 = vectorMultiplyAddFloatingPoint
                        (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                         auVar15);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
    auVar14 = vectorSplatHalfWord(auVar14,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar14,0xa6,uVar7);
    *(undefined2 *)((int)pvVar3 + 0xa6) = uVar4;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar3 + 0xb4) = 0xffffffff;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 == 0) {
    if (*(short *)((int)pvVar3 + 0xa6) == 0) {
      moby->setByGroup = '\x02';
      dVar9 = 60.0;
      iVar6 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0xb0) * 60.0));
      dVar10 = 0.5;
      iVar6 = (int)(animationSpeed * (float)((double)(longlong)iVar6 + 0.5));
      local_50 = (longlong)iVar6;
      dVar8 = (double)fastfunc::FastIntToDouble(iVar6);
      *(float *)((int)pvVar3 + 0xac) = (float)((double)*(float *)((int)pvVar3 + 0xa8) / dVar8);
      iVar6 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)*(float *)((int)pvVar3 + 0xb0) * dVar9));
      iVar6 = (int)(animationSpeed * (float)((double)(longlong)iVar6 + dVar10));
      local_50 = (longlong)iVar6;
      *(short *)((int)pvVar3 + 0xa6) = (short)iVar6;
      sound::PlayMobySound(0,0,moby);
    }
  }
  else if (bVar1 < 2) {
    if (*(short *)((int)pvVar3 + 0xa6) == 0) {
      moby->setByGroup = '\x02';
      dVar9 = 60.0;
      iVar6 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0xb0) * 60.0));
      dVar10 = 0.5;
      iVar6 = (int)(animationSpeed * (float)((double)(longlong)iVar6 + 0.5));
      local_50 = (longlong)iVar6;
      dVar8 = (double)fastfunc::FastIntToDouble(iVar6);
      *(float *)((int)pvVar3 + 0xac) = -(float)((double)*(float *)((int)pvVar3 + 0xa8) / dVar8);
      iVar6 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)*(float *)((int)pvVar3 + 0xb0) * dVar9));
      iVar6 = (int)(animationSpeed * (float)((double)(longlong)iVar6 + dVar10));
      local_50 = (longlong)iVar6;
      *(short *)((int)pvVar3 + 0xa6) = (short)iVar6;
      sound::PlayMobySound(1,0,moby);
    }
  }
  else if ((bVar1 < 3) &&
          ((moby->pos).z = (moby->pos).z - *(float *)((int)pvVar3 + 0xac),
          *(short *)((int)pvVar3 + 0xa6) == 0)) {
    uVar5 = (ulonglong)(longlong)*(int *)((int)pvVar3 + 0xac) >> 0x3f ^ 1;
    moby->setByGroup = (char)uVar5;
    if ((uint)uVar5 == (uint)*(byte *)((int)pvVar3 + 0xa4)) {
      (moby->pos).z = *(f32 *)((int)pvVar3 + 0xa0);
    }
    auVar14 = ZEXT416(0xffffffff);
    auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    auVar14 = loadVectorLeftIndexed(in_LR,0x429280);
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar14 = vectorMultiplyAddFloatingPoint
                        (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                         auVar15);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
    auVar14 = vectorSplatHalfWord(auVar14,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar14,0xa6,uVar7);
    *(undefined2 *)((int)pvVar3 + 0xa6) = uVar4;
  }
  local_60.x = (float)((double)(moby->pos).x - dVar11);
  local_60.y = (float)((double)(moby->pos).y - dVar12);
  local_60.w = (moby->pos).w;
  local_60.z = (float)((double)(moby->pos).z - dVar13);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar3 + 0x60),&local_60,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 00429640  ns=mobyupdate_helpers  size=0x14
// sig: undefined M715_00429640(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M715_00429640(void)

{
  DAT_00857bd0 = 0x10000;
  return;
}



//==== 004296b8  ns=mobyupdate_unsorted  size=0x6ac
// sig: undefined UpdateMoby_704(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 00126dd8 partupd::SpawnPart_22; 0015d12c sound::PlayMobySound; 00425540 FUN_00425540

/* Moby 704 */

void mobyupdate_unsorted::UpdateMoby_704(MobyInstance *moby)

{
  float fVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  longlong lVar3;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
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
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined4 local_130 [4];
  double local_120;
  double local_118;
  double local_110;
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
  
  iVar4 = mobyutil::MB_damage(moby,0x10000,0);
  moby->damage = -1;
  if ((iVar4 != 0) && (dVar25 = 0.0, 0 < *(int *)(iVar4 + 0x2c))) {
    sound::PlayMobySound(0,0x10,moby);
    iVar4 = 0;
    dVar23 = -1.0;
    dVar24 = 1.0;
    dVar16 = 3.141592502593994;
    dVar17 = -3.141592502593994;
    dVar18 = -0.16666656732559204;
    dVar19 = 0.008333025500178337;
    dVar20 = -0.0001980741071747616;
    dVar21 = 2.601886990305502e-06;
    local_f0 = 1.570796251296997;
    dVar29 = -0.30000001192092896;
    dVar28 = 0.30000001192092896;
    dVar22 = 0.5;
    dVar27 = 1.5;
    dVar26 = 210000.0;
    local_f8 = 2.0;
    do {
      mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar24);
      mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar24);
      mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar24);
      mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar24);
      mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
      mobyutil::MB_randRangeFloat((float)dVar25,(float)local_f8);
      mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar27);
      dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar24);
      dVar6 = (double)(float)(dVar6 * dVar26);
      iVar5 = mobyutil::MB_randRange(0x1e,0x5a);
      local_e8 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar5 + dVar22));
      partupd::SpawnPart_22(dVar6,local_140,local_150,0x5f787878,0x181818);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 200);
    iVar4 = 0;
    dVar26 = 0.03999999910593033;
    uVar15 = 0x3fe8000000000000;
    local_100 = -1.2000000476837158;
    local_108 = 1.2000000476837158;
    local_110 = -0.4000000059604645;
    local_118 = 0.4000000059604645;
    local_120 = 5.0;
    fVar1 = 0.09;
    do {
      dVar14 = (double)fVar1;
      dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar24);
      dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar24);
      dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar24);
      dVar7 = (double)mobyutil::MB_randRangeFloat((float)local_100,(float)local_108);
      dVar9 = (double)(float)((double)(moby->rotation).z + local_f0);
      dVar27 = (double)(float)(dVar16 - dVar9);
      if (dVar9 - (double)(float)(dVar16 - dVar9) < 0.0) {
        dVar27 = dVar9;
      }
      dVar10 = (double)(float)(dVar17 - dVar9);
      if ((double)(float)(dVar17 - dVar9) - dVar27 < 0.0) {
        dVar10 = dVar27;
      }
      dVar27 = (double)(float)(dVar10 * dVar10);
      dVar13 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar10));
      dVar9 = (double)(float)(dVar27 * dVar13);
      dVar13 = (double)(float)((double)(float)(dVar27 * dVar9) * dVar21 +
                              (double)(float)(dVar9 * dVar20 +
                                             (double)(float)(dVar13 * dVar19 +
                                                            (double)(float)((double)(float)(dVar27 *
                                                                                           dVar10) *
                                                                            dVar18 + dVar10))));
      dVar9 = (double)mobyutil::MB_randRangeFloat((float)local_110,(float)local_118);
      dVar10 = (double)(moby->rotation).z;
      local_d8 = (float)dVar17;
      dVar27 = (double)(float)(dVar16 - dVar10);
      if (dVar10 - (double)(float)(dVar16 - dVar10) < 0.0) {
        dVar27 = dVar10;
      }
      dVar11 = (double)(float)(dVar17 - dVar10);
      if ((double)(float)(dVar17 - dVar10) - dVar27 < 0.0) {
        dVar11 = dVar27;
      }
      local_d4 = (float)dVar22;
      local_c4 = (float)dVar18;
      local_c8 = (float)dVar19;
      local_cc = (float)dVar20;
      local_d0 = (float)dVar21;
      dVar17 = (double)(float)(dVar11 * dVar11);
      dVar10 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar11));
      dVar27 = (double)(float)(dVar17 * dVar10);
      dVar10 = (double)(float)((double)(float)(dVar17 * dVar27) * dVar21 +
                              (double)(float)(dVar27 * dVar20 +
                                             (double)(float)(dVar10 * dVar19 +
                                                            (double)(float)((double)(float)(dVar17 *
                                                                                           dVar11) *
                                                                            dVar18 + dVar11))));
      dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)local_f8);
      dVar27 = (double)(moby->pos).x;
      dVar22 = (double)(moby->pos).y;
      dVar21 = (double)(moby->pos).z;
      dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)local_120);
      dVar20 = (double)SQRT((float)(dVar6 * dVar6 +
                                   (double)(float)(dVar28 * dVar28 +
                                                  (double)(float)(dVar29 * dVar29))));
      dVar19 = (double)(float)((double)(float)(dVar17 * (double)mobyutil::g_FrameTime) / dVar20);
      dVar17 = dVar25;
      if (dVar25 - dVar20 < 0.0) {
        dVar17 = (double)(float)(dVar6 * dVar19);
      }
      dVar11 = dVar25;
      if (dVar25 - dVar20 < 0.0) {
        dVar11 = (double)(float)(dVar29 * dVar19);
      }
      dVar12 = dVar25;
      if (dVar25 - dVar20 < 0.0) {
        dVar12 = (double)(float)(dVar28 * dVar19);
      }
      if (dVar20 - dVar25 < 0.0) {
        dVar17 = (double)(float)(dVar6 * dVar19);
      }
      if (dVar20 - dVar25 < 0.0) {
        dVar11 = (double)(float)(dVar29 * dVar19);
      }
      if (dVar20 - dVar25 < 0.0) {
        dVar12 = (double)(float)(dVar28 * dVar19);
      }
      lVar3 = mobyutil::MB_randInt(3);
      local_130[2] = 0x2ba;
      local_130[1] = 0x2b9;
      local_130[0] = 0x2b8;
      uVar2 = *(undefined4 *)((int)local_130 + (int)(lVar3 << 2));
      local_c0 = (float)dVar14;
      uVar8 = mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar14);
      mobyutil::MB_randRange(0x3c,0xb4);
      FUN_00425540(uVar8,dVar24,dVar24,uVar15,
                   CONCAT44((float)(dVar7 * dVar13 + dVar27),(float)(dVar9 * dVar10 + dVar22)),
                   CONCAT44((float)(dVar18 + dVar21),(float)dVar25),
                   CONCAT44((float)dVar12,(float)dVar11),CONCAT44((float)dVar17,(float)dVar25),uVar2
                  );
      dVar17 = (double)local_d8;
      dVar22 = (double)local_d4;
      iVar4 = iVar4 + 1;
      dVar21 = (double)local_d0;
      dVar20 = (double)local_cc;
      dVar19 = (double)local_c8;
      dVar18 = (double)local_c4;
      fVar1 = local_c0;
    } while (iVar4 < 0x28);
    mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00429d80  ns=mobyupdate_unsorted  size=0x1f0
// sig: undefined UpdateMoby_705(MobyInstance * moby)
// callers(0): 
// callees(6): 0005e598 collproc::CollMobySphere; 000fcbe8 mobyutil::MB_randRangeFloat; 0010c000 mobyutil::MB_CopyHeroLights; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005c8318 rand

/* Moby 705 */

void mobyupdate_unsorted::UpdateMoby_705(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 local_50 [48];
  
  lVar5 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  if (moby->state == '\0') {
    mobyutil::MB_CopyHeroLights(lVar5);
    moby->state = '\x01';
    dVar9 = -1.0;
    dVar10 = 1.0;
    dVar8 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
    *pfVar2 = (float)dVar8;
    uVar6 = rand();
    if ((uVar6 & 1) != 0) {
      dVar9 = dVar10;
    }
    pfVar2[1] = (float)dVar9;
  }
  collproc::CollMobySphere(0x3ff3333340000000,lVar5 + 0x10,0,0x10,lVar5,local_50);
  fVar1 = pfVar2[1];
  if (pfVar2[1] == *pfVar2) {
    iVar7 = fastfunc::FastDecTimerS32(ZEXT48(pfVar2) + 8);
    fVar1 = pfVar2[1];
    if (iVar7 != 0) {
      fVar1 = -fVar1;
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      pfVar2[1] = fVar1;
      auVar11 = loadVectorLeftIndexed(0xc,0x429d68);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = vectorMultiplyAddFloatingPoint
                          (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                           auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,8,
                         ZEXT48(pfVar2));
      *(undefined4 *)((uint)(pfVar2 + 2) & 0xfffffffc) = uVar3;
    }
  }
  fVar4 = mobyutil::g_FrameTime;
  fVar1 = mobyutil::g_FrameTime * 4.0 * fVar1 + *pfVar2;
  *pfVar2 = fVar1;
  if (1.0 < fVar1) {
    *pfVar2 = 1.0;
    fVar1 = 1.0;
  }
  if (fVar1 < -1.0) {
    *pfVar2 = -1.0;
    fVar1 = -1.0;
  }
  dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).z,fVar4 * -12.566371 * fVar1);
  (moby->rotation).z = (float)dVar9;
  return;
}



//==== 00429f78  ns=mobyupdate_unsorted  size=0x9c
// sig: undefined UpdateMoby_707(MobyInstance * moby)
// callers(0): 
// callees(2): 00112900 mobyutil::MB_GetOrientation; 00502578 fastfunc::FastWrapRot

/* Moby 707 */

void mobyupdate_unsorted::UpdateMoby_707(MobyInstance *moby)

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



//==== 0042a050  ns=mobyupdate_unsorted  size=0x638
// sig: undefined UpdateMoby_708(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot

/* Moby 708 */

void mobyupdate_unsorted::UpdateMoby_708(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar18;
  ulonglong uVar16;
  longlong lVar17;
  char cVar21;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar26;
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
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  
  lVar15 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar17 = uVar23 - 0x160;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar23;
  puVar12[0x2e] = in_LR;
  puVar12[0x27] = in_f27;
  puVar12[0x28] = in_f28;
  puVar12[0x29] = in_f29;
  puVar12[0x2a] = in_f30;
  puVar12[0x2b] = in_f31;
  puVar12[0x26] = unaff_r31;
  uVar4 = moby->state;
  puVar12[0x24] = unaff_r29;
  puVar8 = (uint *)moby->pVar;
  puVar12[0x25] = unaff_r30;
  puVar12[0x23] = unaff_r28;
  puVar12[0x22] = unaff_r27;
  if (uVar4 == '\0') {
    moby->state = '\x02';
    *puVar8 = 0;
    pSVar11 = Splines[puVar8[5]];
    *(undefined1 *)(puVar8 + 1) = 1;
    puVar8[4] = (uint)pSVar11;
  }
  else if (uVar4 == '\x02') {
    iVar18 = mobyutil::MB_damage(lVar15,0x330000,0);
    if (iVar18 == 0) {
      dVar37 = 0.4000000059604645;
      uVar9 = puVar8[5];
      (moby->pos).z = (moby->pos).z - 0.4;
      if (uVar9 == 0xffffffff) {
        mobyfunc::DeleteMoby(moby);
      }
      else if (*(int *)puVar8[4] == 0) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        dVar29 = (double)fastfunc::FastWrapRot
                                   ((moby->rotation).y,
                                    DAT_00857bf4 * 0.017453292 * mobyutil::g_FrameTime);
        fVar5 = (moby->pos).y;
        (moby->rotation).y = (float)dVar29;
        fVar6 = (moby->pos).x;
        fVar7 = (moby->pos).z - g_heroPosition.z;
        if (1.5 <= SQRT(fVar7 * fVar7 +
                        (fVar6 - g_heroPosition.x) * (fVar6 - g_heroPosition.x) +
                        (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y))) {
          puVar10 = (uint *)puVar8[4];
          uVar9 = *puVar10;
          lVar26 = (ulonglong)*puVar8 + (ulonglong)uVar9 + (longlong)*(char *)(puVar8 + 1);
          lVar26 = lVar26 - (longlong)((int)lVar26 / (int)uVar9) * (longlong)(int)uVar9;
          if ((int)lVar26 == uVar9 - 1) {
            cVar21 = -*(char *)(puVar8 + 1);
            *(char *)(puVar8 + 1) = cVar21;
            uVar9 = *puVar10;
            lVar26 = (ulonglong)*puVar8 + (ulonglong)uVar9 + (longlong)cVar21;
            fVar6 = (moby->pos).x;
            fVar5 = (moby->pos).y;
            lVar26 = lVar26 - (longlong)((int)lVar26 / (int)uVar9) * (longlong)(int)uVar9;
          }
          iVar18 = (int)(lVar26 << 4);
          fVar6 = *(float *)((int)puVar10 + iVar18 + 0x10) - fVar6;
          fVar5 = *(float *)((int)puVar10 + iVar18 + 0x14) - fVar5;
          uVar19 = ZEXT48(&mobyutil::g_atanQuadrantTable);
          fVar1 = ABS(fVar6);
          fVar7 = ABS(fVar5);
          *(float *)(puVar12 + 0x1c) = fVar6;
          *(float *)((int)puVar12 + 0xe4) = fVar5;
          *(float *)(puVar12 + 0x1d) = fVar1 - fVar7;
          dVar29 = 0.0;
          uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)(puVar12 + 0x1c));
          if (*(float *)(puVar12 + 0x1d) - 0.0 < 0.0) {
            fVar5 = fVar7;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
          fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          fVar2 = ABS(*(float *)((int)puVar12 + 0xe4));
          if (*(float *)(puVar12 + 0x1d) - 0.0 < 0.0) {
            fVar2 = fVar1;
          }
          dVar32 = dVar29;
          if (0.0 < fVar5) {
            lVar24 = uVar23 - 0x150;
            lVar20 = uVar23 - 100;
            lVar22 = uVar23 - 0x74;
            lVar27 = 2;
            fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
            fVar1 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x1f) = fVar5;
            *(float *)(puVar12 + 0x1e) = fVar5;
            *(float *)((int)puVar12 + 0xf4) = fVar5;
            *(float *)((int)puVar12 + 0xec) = fVar5;
            fVar5 = fVar1 * fVar1;
            *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar1;
            *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar5;
            *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar5 * fVar1;
            do {
              *(float *)((int)lVar24 + 0xec) = *(float *)((int)lVar24 + 0xdc) * fVar5 * fVar5;
              iVar13 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
              lVar20 = lVar20 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            uVar19 = uVar23 - 0x74;
            lVar22 = 4;
            pfVar25 = (float *)&DAT_007358e0;
            uVar23 = uVar19;
            lVar20 = lVar17;
            do {
              fVar5 = *pfVar25;
              fVar1 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar20 + 0xec) = *(float *)((int)lVar20 + 0xec) * fVar5;
              lVar20 = lVar20 + 8;
              *(float *)((int)uVar23 + 4) = *(float *)((int)uVar23 + 4) * fVar1;
              uVar23 = uVar23 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar20 = 2;
            do {
              iVar13 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar14 = (int)uVar19;
              uVar19 = uVar19 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar13 + 0xec)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar7 + fVar6);
          }
          dVar36 = 0.10000000149011612;
          mobyutil::OrganicDeltAngSpeed
                    (dVar32,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,uVar19,
                     puVar8 + 0xc);
          dVar30 = (double)(moby->pos).y;
          iVar18 = puVar8[4] + iVar18;
          dVar31 = (double)(moby->pos).x;
          fVar6 = (float)((double)*(float *)(iVar18 + 0x14) - dVar30);
          fVar7 = (float)((double)*(float *)(iVar18 + 0x10) - dVar31);
          dVar34 = (double)(moby->pos).z;
          fVar1 = (float)((double)*(float *)(iVar18 + 0x18) - dVar34);
          dVar35 = (double)SQRT(fVar1 * fVar1 + fVar7 * fVar7 + fVar6 * fVar6);
          fVar5 = (float)((double)(mobyutil::g_FrameTime * 3.0) / dVar35);
          dVar32 = dVar29;
          if (dVar29 - dVar35 < 0.0) {
            dVar32 = (double)(fVar6 * fVar5);
          }
          dVar33 = dVar29;
          if (dVar29 - dVar35 < 0.0) {
            dVar33 = (double)(fVar7 * fVar5);
          }
          dVar28 = dVar29;
          if (dVar29 - dVar35 < 0.0) {
            dVar28 = (double)(fVar1 * fVar5);
          }
          if (dVar35 - dVar29 < 0.0) {
            dVar32 = (double)(fVar6 * fVar5);
          }
          if (dVar35 - dVar29 < 0.0) {
            dVar33 = (double)(fVar7 * fVar5);
          }
          if (dVar35 - dVar29 < 0.0) {
            dVar28 = (double)(fVar1 * fVar5);
          }
          fVar5 = (float)(dVar30 + dVar32);
          fVar6 = (float)(dVar31 + dVar33);
          fVar7 = (float)(dVar34 + dVar28);
          dVar29 = (double)fVar7;
          fVar1 = (float)((double)fVar5 - (double)*(float *)(iVar18 + 0x14));
          fVar2 = (float)((double)fVar6 - (double)*(float *)(iVar18 + 0x10));
          fVar3 = (float)(dVar29 - (double)*(float *)(iVar18 + 0x18));
          (moby->pos).x = fVar6;
          (moby->pos).y = fVar5;
          if ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar36) {
            (moby->pos).z = fVar7;
            *puVar8 = (uint)lVar26;
            dVar29 = (double)(moby->pos).z;
          }
          (moby->pos).z = (float)(dVar29 + dVar37);
        }
        else {
          *(undefined4 *)((int)puVar12 + 0xdc) = 0;
          *(undefined4 *)(puVar12 + 0x1b) = 0;
          *(undefined4 *)((int)puVar12 + 0xd4) = 0;
          *(undefined4 *)(puVar12 + 0x1a) = 0;
          puVar12[0x12] = 0xffffffffffffffff;
          puVar12[0x14] = 1;
          puVar12[0x15] = 1;
          puVar12[0x16] = 0xffffffffffffffff;
          puVar12[0x17] = 0;
          mobyutil::MB_genericExplosion
                    (0,0,0x4008000000000000,0x4014000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,lVar15,uVar23 - 0x90,lVar15 + 0x10,&DAT_0042a018,0,10,0x14,
                     0x3c);
          mobyfunc::DeleteMoby(moby);
        }
      }
    }
    else {
      *(undefined4 *)((int)puVar12 + 0xcc) = 0;
      *(undefined4 *)(puVar12 + 0x19) = 0;
      *(undefined4 *)((int)puVar12 + 0xc4) = 0;
      *(undefined4 *)(puVar12 + 0x18) = 0;
      puVar12[0x12] = 0xffffffffffffffff;
      puVar12[0x14] = 1;
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar15,uVar23 - 0xa0,lVar15 + 0x10,0,1,5,2,4);
      sound::PlayMobySound(0,0,moby);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0042a688  ns=mobyupdate_helpers  size=0x14
// sig: undefined M711_0042a688(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M711_0042a688(void)

{
  DAT_00857c44 = 0x10000;
  return;
}



//==== 0042a6e0  ns=mobyupdate_unsorted  size=0x474
// sig: undefined UpdateMoby_{709_710_711}(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 00425540 FUN_00425540

/* Moby 709
   Moby 710
   Moby 711 */

void mobyupdate_unsorted::UpdateMoby__709_710_711_(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar12;
  longlong lVar11;
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
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float local_e0 [4];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar12 = mobyutil::MB_damage(moby,&DAT_00830000,0);
  uVar7 = moby->uid;
  if (((&DAT_00a545c4)[(short)uVar7] != '\0') ||
     ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar7 >> 5) << 2)) &
      1 << (uVar7 & 0x1f)) != 0)) {
    mobyfunc::DeleteMoby(moby);
  }
  moby->drawDistance = 32000;
  if ((iVar12 == 0) || (*(short *)(*(int *)(iVar12 + 0x20) + 0xa6) != 0x2ae)) {
    moby->damage = -1;
  }
  else {
    iVar12 = 0;
    dVar23 = 0.0;
    dVar24 = 2.0;
    dVar26 = 1.570796251296997;
    dVar27 = 3.141592502593994;
    dVar28 = -3.141592502593994;
    dVar29 = -0.16666656732559204;
    uVar36 = 0x3fa99999a0000000;
    uVar37 = 0x3ff0000000000000;
    uVar38 = 0x3fe8000000000000;
    fVar2 = 3.0;
    fVar3 = 0.0083330255;
    fVar4 = -0.0001980741;
    fVar5 = 2.601887e-06;
    fVar6 = 5.0;
    fVar1 = 20.0;
    do {
      dVar34 = (double)fVar1;
      dVar33 = (double)fVar6;
      dVar32 = (double)fVar5;
      dVar31 = (double)fVar4;
      dVar30 = (double)fVar3;
      dVar25 = (double)fVar2;
      dVar13 = (double)mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime);
      dVar14 = (double)mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime);
      dVar15 = (double)mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime);
      local_e0[3] = (float)dVar25;
      dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar17 = (double)mobyutil::MB_randRot();
      dVar18 = (double)(float)(dVar17 + dVar26);
      dVar25 = (double)(float)(dVar27 - dVar17);
      if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
        dVar25 = dVar17;
      }
      dVar19 = (double)(float)(dVar27 - dVar18);
      if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
        dVar19 = dVar18;
      }
      dVar35 = (double)(float)(dVar28 - dVar17);
      if ((double)(float)(dVar28 - dVar17) - dVar25 < 0.0) {
        dVar35 = dVar25;
      }
      local_cc = (float)dVar33;
      local_d0 = (float)dVar34;
      local_c0 = (float)dVar30;
      local_c4 = (float)dVar31;
      local_c8 = (float)dVar32;
      dVar25 = (double)(float)(dVar28 - dVar18);
      if ((double)(float)(dVar28 - dVar18) - dVar19 < 0.0) {
        dVar25 = dVar19;
      }
      dVar18 = (double)(float)(dVar35 * dVar35);
      dVar19 = (double)(float)(dVar25 * dVar25);
      dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar35));
      dVar21 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar25));
      dVar22 = (double)(float)(dVar18 * dVar20);
      dVar17 = (double)(float)(dVar19 * dVar21);
      dVar35 = (double)(float)((double)(float)(dVar18 * dVar22) * dVar32 +
                              (double)(float)(dVar22 * dVar31 +
                                             (double)(float)(dVar20 * dVar30 +
                                                            (double)(float)((double)(float)(dVar18 *
                                                                                           dVar35) *
                                                                            dVar29 + dVar35))));
      dVar19 = (double)(float)((double)(float)(dVar19 * dVar17) * dVar32 +
                              (double)(float)(dVar17 * dVar31 +
                                             (double)(float)(dVar21 * dVar30 +
                                                            (double)(float)((double)(float)(dVar19 *
                                                                                           dVar25) *
                                                                            dVar29 + dVar25))));
      dVar25 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)mobyutil::g_FrameTime * dVar33),
                                  (float)((double)mobyutil::g_FrameTime * dVar34));
      dVar32 = (double)(moby->pos).x;
      dVar31 = (double)(moby->pos).y;
      dVar30 = (double)(moby->pos).z;
      dVar18 = (double)SQRT((float)(dVar15 * dVar15 +
                                   (double)(float)(dVar13 * dVar13 +
                                                  (double)(float)(dVar14 * dVar14))));
      dVar17 = (double)(float)(dVar25 / dVar18);
      dVar25 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar25 = (double)(float)(dVar15 * dVar17);
      }
      dVar33 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar33 = (double)(float)(dVar14 * dVar17);
      }
      dVar34 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar34 = (double)(float)(dVar13 * dVar17);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar25 = (double)(float)(dVar15 * dVar17);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar33 = (double)(float)(dVar14 * dVar17);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar34 = (double)(float)(dVar13 * dVar17);
      }
      lVar11 = mobyutil::MB_randInt(3);
      local_e0[2] = 9.78106e-43;
      local_e0[1] = 9.76705e-43;
      local_e0[0] = 9.75304e-43;
      uVar8 = *(undefined4 *)((int)local_e0 + (int)(lVar11 << 2));
      mobyutil::MB_randRange(0xb4,300);
      fVar1 = (float)(dVar19 * dVar16 + dVar32);
      FUN_00425540(uVar36,uVar37,uVar37,uVar38,CONCAT44(fVar1,(float)(dVar35 * dVar16 + dVar31)),
                   CONCAT44((float)dVar30,fVar1),CONCAT44((float)dVar34,(float)dVar33),
                   CONCAT44((float)dVar25,(float)dVar23),uVar8);
      iVar12 = iVar12 + 1;
      fVar2 = local_e0[3];
      fVar3 = local_c0;
      fVar4 = local_c4;
      fVar5 = local_c8;
      fVar6 = local_cc;
      fVar1 = local_d0;
    } while (iVar12 < 0x14);
    uVar7 = moby->uid;
    iVar10 = (int)((longlong)((int)(short)uVar7 >> 5) << 2);
    iVar12 = (int)((longlong)((int)(short)uVar7 >> 5) << 2);
    uVar9 = *(uint *)(&DAT_00a54dd0 + iVar12);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar10) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar10) | 1 << (uVar7 & 0x1f);
    *(uint *)(&DAT_00a54dd0 + iVar12) = uVar9 | 1 << (uVar7 & 0x1f);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0042ab54  ns=mobyupdate_helpers  size=0x14
// sig: undefined M711_0042ab54(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M711_0042ab54(void)

{
  DAT_00857cb4 = 0x10000;
  return;
}



//==== 0042ab78  ns=mobyupdate_helpers  size=0x5dc
// sig: undefined M711_0042ab78(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M711_0042ab78(int param_1)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  float *pfVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  float *pfVar19;
  int iVar20;
  ushort uVar21;
  ulonglong unaff_r14;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r15;
  int iVar24;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  longlong lVar25;
  ulonglong unaff_r18;
  longlong lVar26;
  ulonglong unaff_r19;
  longlong lVar27;
  ulonglong unaff_r20;
  int iVar28;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  int iVar29;
  ulonglong unaff_r24;
  undefined8 uVar30;
  int iVar31;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar32;
  short *psVar33;
  ulonglong unaff_r30;
  undefined *puVar34;
  ulonglong unaff_r31;
  ulonglong uVar35;
  byte in_cr6;
  ulonglong in_LR;
  double dVar36;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  ulonglong in_f31;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x1c0;
  puVar14 = (ulonglong *)lVar1;
  *puVar14 = uVar16;
  puVar14[0x3a] = in_LR;
  puVar14[0x34] = in_f28;
  puVar14[0x35] = in_f29;
  puVar14[0x36] = in_f30;
  puVar14[0x37] = in_f31;
  puVar14[0x33] = unaff_r31;
  puVar14[0x29] = unaff_r21;
  pfVar11 = *(float **)(param_1 + 0x78);
  uVar35 = ZEXT48(pfVar11);
  puVar14[0x32] = unaff_r30;
  puVar14[0x31] = unaff_r29;
  puVar14[0x30] = unaff_r28;
  puVar14[0x2f] = unaff_r27;
  puVar14[0x2e] = unaff_r26;
  puVar14[0x2d] = unaff_r25;
  puVar14[0x2c] = unaff_r24;
  puVar14[0x2b] = unaff_r23;
  puVar14[0x2a] = unaff_r22;
  puVar14[0x28] = unaff_r20;
  puVar14[0x27] = unaff_r19;
  puVar14[0x26] = unaff_r18;
  puVar14[0x25] = unaff_r17;
  puVar14[0x24] = unaff_r16;
  puVar14[0x23] = unaff_r15;
  puVar14[0x22] = unaff_r14;
  if (pfVar11 != (float *)0x0) {
    auVar41 = loadVectorLeftIndexed(0x70,uVar35);
    auVar42 = loadVectorRightIndexed(0x80,uVar35);
    auVar43 = ZEXT416(0);
    auVar44 = (auVar41 | auVar42) >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    vectorCompareEqualToFloatingPoint
              (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar43 = loadVectorLeftIndexed(in_LR,0x42ab68);
      dVar38 = 1.0;
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      vectorCompareEqualToFloatingPoint(auVar44,auVar43);
      if (((bool)(in_cr6 >> 1 & 1)) ||
         ((g_heroMobyPtr->updateId == g_heroMobyPtr->animationId &&
          (g_heroMobyPtr->updateId != 0xff)))) {
        uVar17 = 0x14;
        uVar30 = 1;
        puVar34 = &DAT_00808080;
        bVar3 = g_heroMobyPtr->updateId;
        uVar21 = (ushort)bVar3;
        if (((bVar3 < 0x17) || (0x19 < bVar3)) && (bVar3 != 0x2b)) {
          uVar21 = *(ushort *)(pfVar11 + 0x1e);
        }
        bVar2 = uVar21 == 0x18;
        dVar39 = dVar38;
        dVar40 = dVar38;
        if (uVar21 == 0x17) {
          lVar32 = 0;
          *(undefined2 *)(pfVar11 + 0x1e) = 0x17;
        }
        else if (bVar2) {
          lVar32 = 1;
          *(undefined2 *)(pfVar11 + 0x1e) = 0x18;
        }
        else if (uVar21 == 0x19) {
          lVar32 = 2;
          *(undefined2 *)(pfVar11 + 0x1e) = 0x19;
        }
        else {
          lVar32 = 3;
          uVar30 = 2;
          *(undefined2 *)(pfVar11 + 0x1e) = 0x2b;
          dVar40 = 0.699999988079071;
          uVar17 = 0xc;
          dVar39 = 1.25;
          puVar34 = (undefined *)0x408080;
        }
        pMVar15 = g_heroMobyPtr;
        vectorCompareEqualToFloatingPoint(auVar44,auVar43);
        lVar32 = ZEXT48(&DAT_00859af0) + lVar32 * 0x60;
        psVar33 = (short *)lVar32;
        sVar6 = *psVar33;
        sVar7 = psVar33[1];
        sVar8 = psVar33[2];
        sVar9 = psVar33[3];
        if (!bVar2) {
          *pfVar11 = (g_heroMobyPtr->transform).v0.x;
          pfVar11[1] = (pMVar15->transform).v0.y;
          pfVar11[2] = (pMVar15->transform).v0.z;
          pfVar11[3] = (pMVar15->transform).v0.w;
          pfVar11[4] = (pMVar15->transform).v1.x;
          pfVar11[5] = (pMVar15->transform).v1.y;
          pfVar11[6] = (pMVar15->transform).v1.z;
          pfVar11[7] = (pMVar15->transform).v1.w;
          pfVar11[8] = (pMVar15->transform).v2.x;
          pfVar11[9] = (pMVar15->transform).v2.y;
          pfVar11[10] = (pMVar15->transform).v2.z;
          pfVar11[0xb] = (pMVar15->transform).v2.w;
        }
        auVar43 = ZEXT416(1);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar44 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar45 = loadVectorLeftIndexed(0xffffffffffffcce8,0x10d0000);
        auVar46 = vectorSubtractUnsignedWordModulo(auVar44,auVar45);
        auVar45 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = loadVectorLeftIndexed(0x48,lVar32);
        auVar44 = vectorCompareGreaterThanSignedWord(auVar43,auVar46);
        auVar44 = vectorConditionalSelect(auVar46,auVar43,auVar44);
        auVar47 = loadVectorRightIndexed(0x58,lVar32);
        auVar43 = ZEXT416(0xfffffff0);
        auVar46 = vectorConvertFromSignedFixedPointWord(auVar44,0);
        auVar44 = ZEXT416(2);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar46,auVar48 | auVar47,auVar41 | auVar42);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        uVar13 = storeVectorElementWordIndexed(auVar41,0x70,uVar35);
        *(undefined4 *)((uint)(pfVar11 + 0x1c) & 0xfffffffc) = uVar13;
        DAT_010ccce8 = storeVectorElementWordIndexed
                                 (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                                  0xffffffffffffcce8,0x10d0000);
        auVar42 = loadVectorLeftIndexed(0x58,lVar32);
        auVar45 = loadVectorRightIndexed(0x68,lVar32);
        auVar43 = vectorShiftRightAlgebraicWord
                            (auVar42 | auVar45,
                             auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
        auVar43 = vectorMultiplyOddSignedHalfWord
                            (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
        auVar43 = vectorConvertFromSignedFixedPointWord(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
        if (bVar2) {
          uVar18 = draw::GetEffectTex(uVar17);
          puVar14[0x1d] = uVar18;
          uVar18 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
          puVar14[0x1e] = uVar18;
          uVar18 = FUN_00502f08(1,1,0,0,0,0);
          puVar14[0x1c] = uVar18;
          uVar18 = idol_draw::PackCmd(0,uVar30,0,1,0x80);
          pMVar15 = g_heroMobyPtr;
          iVar31 = 0;
          puVar14[0x1f] = uVar18;
          pfVar11[0xc] = (pMVar15->pos).x;
          pfVar11[0xd] = (pMVar15->pos).y;
          pfVar11[0xe] = (pMVar15->pos).z;
          pfVar11[0xf] = (pMVar15->pos).w;
          if (0 < psVar33[0x2c]) {
            iVar24 = 0;
            do {
              iVar29 = 0;
              dVar37 = 0.5;
              lVar22 = uVar16 - 0x150;
              iVar28 = 0;
              lVar25 = lVar1;
              lVar26 = lVar1;
              lVar27 = lVar32;
              do {
                sVar10 = *(short *)(*(int *)(psVar33 + 0x28) + iVar24 + iVar28);
                iVar12 = (int)lVar27;
                if (sVar6 == iVar31) {
                  iVar20 = *(int *)(iVar12 + 8);
                }
                else if (sVar7 == iVar31) {
                  iVar20 = *(int *)(iVar12 + 0x18);
                }
                else if (sVar8 == iVar31) {
                  iVar20 = *(int *)(iVar12 + 0x28);
                }
                else {
                  iVar20 = 0x50808080;
                  if (sVar9 == iVar31) {
                    iVar20 = *(int *)(iVar12 + 0x38);
                  }
                }
                puVar14[0x20] = (longlong)(iVar20 >> 0x18);
                *(int *)((int)lVar26 + 0xb0) = iVar20;
                uVar18 = fastfunc::FastDoubleToInt
                                   ((double)(float)((double)(longlong)puVar14[0x20] * dVar40));
                *(uint *)((int)lVar26 + 0xb0) =
                     (uint)((uVar18 & 0xffffffff) << 0x18) | (uint)puVar34;
                pfVar19 = (float *)(*(int *)(psVar33 + 0x26) + (int)((longlong)sVar10 << 4));
                iVar29 = iVar29 + 1;
                lVar27 = lVar27 + 4;
                lVar26 = lVar26 + 4;
                pfVar23 = (float *)lVar22;
                *pfVar23 = (float)((double)*pfVar19 * dVar39);
                pfVar23[1] = (float)((double)pfVar19[1] * dVar39);
                pfVar23[2] = (float)((double)pfVar19[2] * dVar39);
                pfVar23[3] = pfVar19[3];
                iVar12 = *(int *)(psVar33 + 0x2a);
                dVar36 = (double)DAT_00859aec;
                iVar20 = *(int *)(psVar33 + 0x28) + iVar24 + iVar28;
                lVar22 = lVar22 + 0x10;
                iVar28 = iVar28 + 4;
                fVar4 = pfVar11[0x1c];
                iVar20 = (int)((longlong)*(short *)(iVar20 + 2) << 3);
                fVar5 = *(float *)(psVar33 + 0x2e);
                *(float *)((int)lVar25 + 0xc0) =
                     (float)((double)(float)((double)*(float *)(iVar12 + iVar20) - dVar37) * dVar36
                            + dVar37);
                *(float *)((int)lVar25 + 0xc4) =
                     (float)((double)(float)((double)*(float *)(iVar12 + iVar20 + 4) - dVar37) *
                             dVar36 + dVar37) + -(float)((double)fVar4 * (double)fVar5 - dVar38);
                lVar25 = lVar25 + 8;
              } while (iVar29 < 4);
              draw::FastDrawQuad(uVar16 - 0x150,uVar35,0,EffectTexHeaders,9);
              iVar31 = iVar31 + 1;
              iVar24 = iVar24 + 0x10;
            } while (iVar31 < psVar33[0x2c]);
          }
        }
        else {
          bVar3 = g_heroMobyPtr->updateId;
          if (((bVar3 < 0x17) || (0x19 < bVar3)) && (bVar3 != 0x2b)) {
            pfVar11[0x1c] = 0.0;
          }
        }
      }
      else {
        pfVar11[0x1c] = 0.0;
      }
    }
  }
  return;
}



//==== 0042b160  ns=mobyupdate_helpers  size=0x14c
// sig: undefined M711_0042b160(void)
// callers(0): 
// callees(2): 000ef74c mobyfunc::UpdateMobyFrameData; 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M711_0042b160(MobyInstance *param_1)

{
  char cVar1;
  MobyInstance *pMVar2;
  longlong lVar3;
  u8 uVar4;
  
  pMVar2 = g_heroMobyPtr;
  if (g_heroState == BOLT_CRANK_TURNING) {
    lVar3 = ((LZCOUNT(0x40 - (uint)g_heroMobyPtr->animationId) << 0x3a) >> 0x3f & 8U) + 0xb;
    uVar4 = (u8)lVar3;
    if (g_heroMobyPtr->animationId == 0x41) {
      uVar4 = '\x12';
    }
    else if (((int)lVar3 != 0x13) && ((int)lVar3 != 0x12)) {
      mobyutil::MB_SetAnimation(param_1,lVar3,0,(int)(animationSpeed * 7.5));
      return;
    }
    param_1->updateId = uVar4;
    param_1->animationId = uVar4;
    param_1->animationBlend = pMVar2->animationBlend;
    param_1->previousAnimationFrame = pMVar2->previousAnimationFrame;
    cVar1 = pMVar2->animationFrame;
    param_1->animationFrame = cVar1;
    if (pMVar2->updateId != pMVar2->animationId) {
      param_1->previousAnimationFrame = cVar1;
    }
    mobyfunc::UpdateMobyFrameData(param_1);
  }
  else if ((DAT_0096bd70 == 0x3b) && (hero::g_heroStateTimer == 1)) {
    mobyutil::MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 17.5));
  }
  return;
}



//==== 0042b2ac  ns=mobyupdate_helpers  size=0x60
// sig: undefined M711_0042b2ac(void)
// callers(0): 
// callees(1): 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem

undefined8 mobyupdate_helpers::M711_0042b2ac(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (((CollOutput.pMoby != (MobyInstance *)0x0) &&
      (iVar1 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby), iVar1 != 0)) &&
     (*(char *)(iVar1 + 9) == '\x01')) {
    uVar2 = 1;
  }
  return uVar2;
}



//==== 0042b30c  ns=mobyupdate_helpers  size=0x54
// sig: undefined M711_0042b30c(void)
// callers(0): 
// callees(1): 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem

undefined8 mobyupdate_helpers::M711_0042b30c(void)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
  if ((iVar2 == 0) || ((*(ushort *)(iVar2 + 0x1e) & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 0042b390  ns=mobyupdate_helpers  size=0x280
// sig: undefined M711_0042b390(void)
// callers(3): 000a11e8 hero::???_Hero_ApplyHitGravityToMobyList; 000be228 hero::HeroMovement; 0042b640 mobyupdate_helpers::M71_0042b640
// callees(6): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 0012f8c0 partupd::SpawnPart_53
// strings: 0042b388: '?333`'

void mobyupdate_helpers::M711_0042b390(float *param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  float afStack_c0 [4];
  longlong local_b0;
  
  iVar1 = 0;
  if (0 < param_2) {
    dVar6 = 0.10000000149011612;
    dVar7 = 2.0;
    dVar8 = 0.3490658402442932;
    dVar9 = 1.535889744758606;
    dVar10 = 0.05000000074505806;
    uVar11 = 0;
    uVar12 = 0x3fc3333340000000;
    dVar13 = 30.5;
    uVar14 = 0x3f689374c0000000;
    dVar15 = 0.07000000029802322;
    dVar16 = 0.699999988079071;
    do {
      dVar2 = (double)mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
      mobyutil::MB_randInt(2);
      dVar3 = (double)mobyutil::MB_randRot();
      dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      dVar5 = (double)mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar6);
      mobyutil::MB_SphericalToVector((float)dVar5,(float)dVar3,(float)dVar4,afStack_c0);
      dVar3 = (double)mobyutil::MB_randRangeSigned(uVar11,uVar12);
      *param_1 = (float)((double)*param_1 + dVar3);
      dVar3 = (double)mobyutil::MB_randRangeSigned(uVar11,uVar12);
      param_1[1] = (float)((double)param_1[1] + dVar3);
      dVar3 = (double)mobyutil::MB_randRangeSigned(uVar11,uVar12);
      param_1[2] = (float)((double)param_1[2] + dVar3);
      local_b0 = (longlong)(int)((double)animationSpeed * dVar13);
      partupd::SpawnPart_53
                ((double)(float)(dVar2 * dVar6),dVar2,uVar14,param_1,
                 (int)((double)animationSpeed * dVar13));
      local_b0 = (longlong)(int)((double)animationSpeed * dVar13);
      partupd::SpawnPart_53
                ((double)(float)(dVar2 * dVar15),(double)(float)(dVar2 * dVar16),uVar14,param_1,
                 (int)((double)animationSpeed * dVar13));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}



//==== 0042b640  ns=mobyupdate_helpers  size=0x5e0
// sig: undefined M71_0042b640(void)
// callers(1): 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(8): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 00125e08 partupd::SpawnPart_19; 001268f8 partupd::SpawnPart_21; 0042b390 mobyupdate_helpers::M711_0042b390; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M71_0042b640(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar13;
  longlong lVar12;
  longlong lVar14;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar15;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar16;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar20;
  undefined8 uVar21;
  ulonglong in_f27;
  double dVar22;
  ulonglong in_f28;
  double dVar23;
  undefined8 uVar24;
  ulonglong in_f29;
  undefined8 uVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar11 = uVar8 - 0x160;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar8;
  puVar7[0x2e] = in_LR;
  puVar7[0x23] = in_f23;
  puVar7[0x24] = in_f24;
  puVar7[0x25] = in_f25;
  puVar7[0x26] = in_f26;
  puVar7[0x27] = in_f27;
  puVar7[0x28] = in_f28;
  puVar7[0x29] = in_f29;
  puVar7[0x2a] = in_f30;
  puVar7[0x2b] = in_f31;
  puVar7[0x20] = unaff_r29;
  fVar2 = CollOutput.ip.z;
  fVar6 = GameCamera.posZ;
  fVar4 = GameCamera.posY - CollOutput.ip.y;
  fVar5 = GameCamera.posX - CollOutput.ip.x;
  puVar7[0x22] = unaff_r31;
  fVar6 = fVar6 - fVar2;
  *(float *)(puVar7 + 0xe) = fVar5;
  *(float *)((int)puVar7 + 0x74) = fVar4;
  *(char (*) [4])((int)puVar7 + 0x7c) = GameCamera.field8_0x14c;
  *(float *)(puVar7 + 0xf) = fVar6;
  *(float *)((int)puVar7 + 0x94) = fVar6;
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  fVar1 = ABS(fVar2);
  *(float *)(puVar7 + 0x12) = fVar2;
  *(float *)(puVar7 + 0x13) = fVar1 - ABS(fVar6);
  dVar26 = 0.0;
  uVar9 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
          (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
          (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar2 = ABS(fVar6);
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar9 << 2));
  fVar3 = ABS(*(float *)((int)puVar7 + 0x94));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
  puVar7[0x21] = unaff_r30;
  puVar7[0x1f] = unaff_r28;
  puVar7[0x1e] = unaff_r27;
  dVar27 = dVar26;
  if (0.0 < fVar2) {
    lVar10 = uVar8 - 0x150;
    lVar14 = uVar8 - 0x94;
    lVar12 = uVar8 - 0xa4;
    lVar17 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x19) = fVar2;
    *(float *)(puVar7 + 0x18) = fVar2;
    *(float *)((int)puVar7 + 0xc4) = fVar2;
    *(float *)((int)puVar7 + 0xbc) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar3;
    *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2;
    *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar10 + 0xbc) = *(float *)((int)lVar10 + 0xac) * fVar2 * fVar2;
      iVar15 = (int)lVar12;
      lVar12 = lVar12 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
      lVar14 = lVar14 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar14 = uVar8 - 0xa4;
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar12 = lVar14;
    do {
      fVar2 = *pfVar13;
      fVar3 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar10 + 0xbc) = *(float *)((int)lVar10 + 0xbc) * fVar2;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar12 = 2;
    lVar10 = lVar11;
    do {
      iVar15 = (int)lVar10;
      iVar16 = (int)lVar14;
      lVar10 = lVar10 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xbc)) + *(float *)(iVar16 + 4)
                        + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar6 + fVar1);
  }
  fVar5 = ABS(fVar5);
  fVar4 = ABS(fVar4);
  dVar27 = -dVar27;
  fVar6 = fVar5;
  if ((fVar5 - fVar4) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  if ((fVar5 - fVar4) - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  if (0.0 < fVar6) {
    lVar10 = uVar8 - 0x150;
    lVar14 = uVar8 - 0xb4;
    lVar12 = uVar8 - 0xc4;
    lVar17 = 2;
    fVar4 = (fVar4 - fVar6) / (fVar4 + fVar6);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x15) = fVar4;
    *(float *)(puVar7 + 0x14) = fVar4;
    *(float *)((int)puVar7 + 0xa4) = fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar5;
    *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4;
    *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar10 + 0x9c) = *(float *)((int)lVar10 + 0x8c) * fVar4 * fVar4;
      iVar15 = (int)lVar12;
      lVar12 = lVar12 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
      lVar14 = lVar14 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = uVar8 - 0xc4;
    lVar12 = 4;
    do {
      fVar4 = *pfVar13;
      fVar5 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar4;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar10 + 4) = *(float *)((int)lVar10 + 4) * fVar5;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar15 = 0;
  iVar16 = 0;
  uVar25 = 0x400921fb60000000;
  dVar23 = 0.20000000298023224;
  dVar22 = 1.0;
  dVar20 = 3.0;
  do {
    dVar18 = (double)mobyutil::MB_randRangeSigned(dVar26,uVar25);
    dVar18 = (double)fastfunc::FastWrapRot((float)dVar18,(float)dVar27);
    dVar19 = (double)mobyutil::MB_randRangeSigned(dVar26,uVar25);
    dVar19 = (double)fastfunc::FastWrapRot((float)dVar19,(float)dVar27);
    mobyutil::MB_SphericalToVector
              ((float)dVar23,(float)dVar19,(float)dVar18,(float *)(uVar8 - 0xf0));
    dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar20);
    fVar2 = CollOutput.ip.z;
    fVar6 = CollOutput.ip.y;
    fVar5 = CollOutput.ip.x;
    fVar4 = (float)((double)*(float *)((int)puVar7 + 0x74) * dVar18);
    *(undefined4 *)((int)puVar7 + 0x8c) = *(undefined4 *)((int)puVar7 + 0x7c);
    *(float *)(puVar7 + 0x10) = (float)((double)*(float *)(puVar7 + 0xe) * dVar18);
    *(float *)((int)puVar7 + 0x84) = fVar4;
    *(float *)(puVar7 + 0x11) = (float)((double)*(float *)(puVar7 + 0xf) * dVar18);
    *(float *)(puVar7 + 0x10) = (float)((double)*(float *)(puVar7 + 0xe) * dVar18) + fVar5;
    *(float *)((int)puVar7 + 0x84) = fVar4 + fVar6;
    *(float *)(puVar7 + 0x11) = (float)((double)*(float *)(puVar7 + 0xf) * dVar18) + fVar2;
    partupd::SpawnPart_19(uVar8 - 0xe0,uVar8 - 0xf0);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 0x14);
  uVar24 = 0x3fb99999a0000000;
  dVar23 = 0.05000000074505806;
  uVar21 = 0x40d3880000000000;
  dVar22 = 10.5;
  dVar20 = 20.5;
  do {
    dVar18 = (double)mobyutil::MB_randRangeSigned(dVar26,uVar24);
    *(float *)(puVar7 + 0x10) = (float)((double)CollOutput.ip.x + dVar18);
    dVar18 = (double)mobyutil::MB_randRangeSigned(dVar26,uVar24);
    *(float *)((int)puVar7 + 0x84) = (float)((double)CollOutput.ip.y + dVar18);
    dVar18 = (double)mobyutil::MB_randRangeSigned(dVar26,uVar24);
    *(float *)(puVar7 + 0x11) = (float)((double)CollOutput.ip.z + dVar18);
    dVar18 = (double)mobyutil::MB_randRangeSigned(dVar26,uVar25);
    dVar18 = (double)fastfunc::FastWrapRot((float)dVar18,(float)dVar27);
    dVar19 = (double)mobyutil::MB_randRangeSigned(dVar26,uVar25);
    dVar19 = (double)fastfunc::FastWrapRot((float)dVar19,(float)dVar27);
    mobyutil::MB_SphericalToVector
              ((float)dVar23,(float)dVar19,(float)dVar18,(float *)(uVar8 - 0xf0));
    dVar18 = (double)animationSpeed;
    puVar7[0x1c] = (longlong)(int)(dVar18 * dVar22);
    puVar7[0x1c] = (longlong)(int)(dVar18 * dVar20);
    mobyutil::MB_randRange(*(undefined4 *)((int)puVar7 + 0xe4),*(undefined4 *)((int)puVar7 + 0xe4));
    partupd::SpawnPart_21(uVar21,uVar8 - 0xe0,uVar8 - 0xf0,0x4f007fff,0x1fffffff);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 10);
  if (*(short *)(*(int *)(param_1 + 0x78) + 0x78) == 0x2b) {
    M711_0042b390(0xa10960,10);
  }
  return;
}



//==== 0042bc38  ns=mobyupdate_helpers  size=0x1b8
// sig: undefined M71_ClosestMobyDistance(void)
// callers(1): 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 0010df38 mobyutil::MB_isAmmo; 00240f38 mobyupdate_helpers::M16_00240f38; 002eb450 mobyupdate_helpers::M1449_CollectAmmo

void mobyupdate_helpers::M71_ClosestMobyDistance(int param_1)

{
  MobyInstance *moby;
  float fVar1;
  float fVar2;
  float fVar3;
  MobyInstance *pMVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar8 = 2.700000047683716;
    dVar9 = -30.0;
    dVar10 = 30.0;
    dVar11 = 0.01745329238474369;
    uVar12 = 0;
    moby = MobyUpdateChainStart;
    do {
      pMVar4 = g_heroMobyPtr;
      if (moby->state == 0xfd || moby->state == 0xfe) {
        return;
      }
      if ((moby->pClass == (MobyClass *)0x0) || ((short)moby->pClass->mode_bits != 0x13)) {
        bVar6 = mobyutil::MB_isAmmo(moby);
        if ((bVar6) &&
           (fVar1 = (moby->pos).y - *(float *)(param_1 + 0x14),
           fVar2 = (moby->pos).x - *(float *)(param_1 + 0x10),
           fVar3 = (moby->pos).z - *(float *)(param_1 + 0x18),
           (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar8)) {
          iVar5 = M1449_CollectAmmo(moby);
          goto joined_r0x0042bdac;
        }
      }
      else {
        fVar1 = (moby->pos).y - *(float *)(param_1 + 0x14);
        fVar2 = (moby->pos).x - *(float *)(param_1 + 0x10);
        fVar3 = (moby->pos).z - *(float *)(param_1 + 0x18);
        if ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar8) {
          dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
          iVar5 = M16_00240f38((double)(float)(dVar7 * dVar11),uVar12,moby,pMVar4);
joined_r0x0042bdac:
          if (iVar5 != 0) {
            return;
          }
        }
      }
      moby = (MobyInstance *)moby->pChain;
    } while (moby != (MobyInstance *)0x0);
  }
  return;
}



//==== 0042be08  ns=mobyupdate_helpers  size=0x284
// sig: undefined M71_0042be08(void)
// callers(1): 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(1): 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M71_0042be08(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f31;
  double dVar21;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xb0;
  puVar6 = (ulonglong *)lVar10;
  *puVar6 = uVar9;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = in_f31;
  fVar4 = *param_1;
  fVar5 = param_1[1];
  puVar6[0x14] = unaff_r31;
  fVar1 = ABS(*param_1);
  fVar3 = ABS(param_1[1]);
  *(float *)(puVar6 + 0xe) = fVar1 - fVar3;
  dVar21 = 0.0;
  uVar13 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4;
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
  fVar5 = fVar1;
  if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  dVar17 = dVar21;
  if (0.0 < fVar5) {
    lVar14 = uVar9 - 0xa0;
    lVar12 = uVar9 - 0x3c;
    lVar11 = uVar9 - 0x2c;
    lVar16 = 2;
    fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
    fVar3 = fVar5 * fVar5;
    *(float *)(puVar6 + 0x10) = fVar5;
    *(float *)(puVar6 + 0xf) = fVar5;
    *(float *)((int)puVar6 + 0x7c) = fVar5;
    *(float *)((int)puVar6 + 0x74) = fVar5;
    fVar5 = fVar3 * fVar3;
    *(float *)(puVar6 + 0xf) = *(float *)(puVar6 + 0xf) * fVar3;
    *(float *)((int)puVar6 + 0x7c) = *(float *)((int)puVar6 + 0x7c) * fVar5;
    *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar5 * fVar3;
    do {
      *(float *)((int)lVar14 + 0x74) = *(float *)((int)lVar14 + 100) * fVar5 * fVar5;
      iVar7 = (int)lVar12;
      lVar14 = lVar14 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar14 = uVar9 - 0x3c;
    pfVar15 = (float *)&DAT_007358e0;
    lVar16 = 4;
    lVar11 = lVar14;
    lVar12 = lVar10;
    do {
      fVar5 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar12 + 0x74) = *(float *)((int)lVar12 + 0x74) * fVar5;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)((int)lVar11 + 4) * fVar3;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar11 = 2;
    do {
      iVar7 = (int)lVar10;
      iVar8 = (int)lVar14;
      lVar10 = lVar10 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar7 + 0x74)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar2);
  }
  dVar17 = (double)fastfunc::FastSubRots(g_heroRotation.z,(float)dVar17);
  fVar4 = param_1[1];
  fVar5 = *param_1;
  fVar3 = param_1[2];
  if (1.832595705986023 - dVar17 < 0.0) {
    dVar17 = 1.832595705986023;
  }
  dVar20 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar1 = (float)((double)(float)(dVar20 * (double)((float)(1.832595705986023 - dVar17) * 0.5456741
                                                    * 0.3 + 0.7)) / dVar20);
  dVar17 = dVar21;
  if (dVar21 - dVar20 < 0.0) {
    dVar17 = (double)(fVar5 * fVar1);
  }
  dVar19 = dVar21;
  if (dVar21 - dVar20 < 0.0) {
    dVar19 = (double)(fVar4 * fVar1);
  }
  dVar18 = dVar21;
  if (dVar21 - dVar20 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  if (dVar20 - dVar21 < 0.0) {
    dVar17 = (double)(fVar5 * fVar1);
  }
  if (dVar20 - dVar21 < 0.0) {
    dVar19 = (double)(fVar4 * fVar1);
  }
  if (dVar20 - dVar21 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  *param_1 = (float)dVar17;
  param_1[1] = (float)dVar19;
  param_1[2] = (float)dVar18;
  return;
}



//==== 0042c150  ns=mobyupdate_unsorted  size=0x1d28
// sig: undefined UpdateMoby_71(MobyInstance * moby)
// callers(0): 
// callees(40): 00055284 camera::DrawTargetCrosshair; 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 00060780 collproc::CollHotspot; 0006d7e0 draw::RegisterPostDraw; 0007d0f4 hero::Hero_SubGravity; 00080c4c hero::Hero_MayaFrameTrigger; 000816ec hero::Hero_PlaySound; 000aa000 hero::???_Hero_SetTimer_96a798; 000b72b0 hero::TransitionMovement; 000ef74c mobyfunc::UpdateMobyFrameData; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fddc0 mobyutil::MB_SetAnimation; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 0010581c mobyutil::SetCollDamIn; 00105c08 mobyutil::CollDamageMobyDirect; 00105d58 mobyutil::MB_CollLineMulti; 001099f8 mobyutil::Lerp_vec4; 00109af0 mobyutil::Delt; 0010af88 mobyutil::MB_isCrate; 0010ded0 mobyutil::???_MB_IsInvalidOrClass502; 0011530c mobyutil::MB_RotateMoby; 001154c8 mobyutil::DeleteMotionBlur; 00115560 mobyutil::UpdateMotionBlur; 0012f8c0 partupd::SpawnPart_53; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0042b640 mobyupdate_helpers::M71_0042b640; 0042bc38 mobyupdate_helpers::M71_ClosestMobyDistance; 0042be08 mobyupdate_helpers::M71_0042be08; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 005e8338 FUN_005e8338

/* Moby 71 */

ulonglong mobyupdate_unsorted::UpdateMoby_71(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  void *pvVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyInstance *pMVar13;
  PlayerState PVar14;
  longlong lVar15;
  int iVar18;
  longlong lVar16;
  u8 uVar20;
  short sVar19;
  f32 *val;
  bool bVar21;
  ulonglong uVar17;
  uint uVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  int iVar25;
  byte bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double extraout_f1;
  double extraout_f1_00;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float local_220 [4];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  f32 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  undefined1 local_160 [16];
  float local_150;
  float local_14c;
  float local_148;
  float afStack_140 [4];
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined1 local_118;
  undefined1 local_117;
  MOBY_OCLASSES local_116;
  undefined1 auStack_100 [8];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_e8;
  undefined1 local_e7;
  ushort local_e6;
  longlong local_d0;
  
  PVar14 = g_heroState;
  lVar15 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  DAT_0096ad8c = 0;
  if (DAT_0096ad94 == 3) {
    DAT_0096ad8c = 0;
    return (ulonglong)DAT_0096ad94;
  }
  bVar5 = moby->state;
  bVar26 = (bVar5 == 0xb) << 1;
  if (9 < bVar5) {
    if (0xb < bVar5) {
      DAT_0096ad8c = 0;
      return (ulonglong)bVar5;
    }
    mobyutil::UpdateMotionBlur(&DAT_0096b490,0);
    pMVar13 = g_heroMobyPtr;
    moby->field80_0xb8 = g_heroMobyPtr;
    DAT_0096ad8c = 2;
    if ((moby->state == '\n') && (DAT_0096befc == -1)) {
      DAT_0096befc = sound::PlayMobySound(0xe,4,pMVar13);
    }
    dVar27 = 0.0;
    mobyutil::MB_RotateMoby(0,0,(double)(mobyutil::g_FrameTime * 24.434608),lVar15);
    if ((DAT_0096a744 != 0) && (iVar18 = fastfunc::FastDecTimerS32(uVar24 + 0x6c), iVar18 != 0)) {
      DAT_0096a744 = 0;
    }
    if (hero::g_heroGravityMode == '\0') {
      dVar42 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar15 + 0x10,0);
      dVar39 = (double)(moby->pos).z;
      if ((float)(dVar39 - dVar42) < 0.8) {
        val = &(moby->pos).z;
        fVar1 = (float)(dVar42 + 0.550000011920929);
        if ((double)fVar1 <= dVar39) {
          mobyutil::Delt(fVar1,mobyutil::g_FrameTime,val);
        }
        else {
          mobyutil::Delt(fVar1,mobyutil::g_FrameTime * 4.0,val);
        }
      }
    }
    local_180 = (moby->pos).x;
    local_17c = (moby->pos).y;
    local_178 = (moby->pos).z;
    local_174 = (moby->pos).w;
    if (moby->state == '\n') {
      fVar10 = DAT_00969e20 * 0.7 + local_180;
      fVar12 = DAT_00969e24 * 0.7 + local_17c;
      fVar11 = DAT_00969e28 * 0.7 + local_178;
      (moby->pos).x = fVar10;
      (moby->pos).y = fVar12;
      (moby->pos).z = fVar11;
      fVar2 = *(float *)((int)pvVar8 + 0x44);
      fVar3 = *(float *)((int)pvVar8 + 0x40);
      fVar4 = *(float *)((int)pvVar8 + 0x48);
      dVar39 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar1 = (float)((double)*(float *)((int)pvVar8 + 0x60) / dVar39);
      dVar42 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar42 = (double)(fVar4 * fVar1);
      }
      dVar28 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar28 = (double)(fVar2 * fVar1);
      }
      dVar30 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar30 = (double)(fVar3 * fVar1);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar42 = (double)(fVar4 * fVar1);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar28 = (double)(fVar2 * fVar1);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar30 = (double)(fVar3 * fVar1);
      }
      (moby->pos).z = (float)((double)fVar11 + dVar42);
      (moby->pos).y = (float)((double)fVar12 + dVar28);
      (moby->pos).x = (float)((double)fVar10 + dVar30);
      fVar1 = DAT_0071f41c * 170.0 + *(float *)((int)pvVar8 + 100);
      *(float *)((int)pvVar8 + 100) = fVar1;
      mobyutil::Delt((float)dVar27,fVar1,(float *)((int)pvVar8 + 0x60));
      if (*(int *)((int)pvVar8 + 0x60) == 0) {
        moby->state = '\v';
      }
    }
    else {
      mobyupdate_helpers::M71_ClosestMobyDistance(lVar15);
      dVar30 = (double)(DAT_0096ad54 - (moby->pos).y);
      dVar36 = (double)(DAT_0096ad50 - (moby->pos).x);
      dVar28 = (double)(DAT_0096ad58 - (moby->pos).z);
      fVar1 = DAT_0071f418 * 0.9 + *(float *)((int)pvVar8 + 100);
      dVar39 = (double)SQRT((float)(dVar28 * dVar28 +
                                   (double)(float)(dVar36 * dVar36 +
                                                  (double)(float)(dVar30 * dVar30))));
      *(float *)((int)pvVar8 + 100) = fVar1;
      fVar1 = *(float *)((int)pvVar8 + 0x60) + fVar1;
      dVar42 = (double)fVar1;
      *(float *)((int)pvVar8 + 0x60) = fVar1;
      if (((float)(dVar39 / dVar42) < (float)(longlong)(animationSpeed * 5.5)) &&
         (moby->animationId != '\x01')) {
        iVar18 = (int)(animationSpeed * 5.5);
        local_d0 = (longlong)iVar18;
        mobyutil::MB_SetAnimation(lVar15,1,0,iVar18);
        dVar42 = (double)*(float *)((int)pvVar8 + 0x60);
      }
      dVar37 = dVar42;
      if (dVar39 <= dVar42) {
        *(float *)((int)pvVar8 + 0x60) = (float)dVar39;
        dVar37 = dVar39;
      }
      dVar38 = (double)(float)(dVar37 / dVar39);
      dVar37 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar37 = (double)(float)(dVar38 * dVar28);
      }
      dVar40 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar40 = (double)(float)(dVar38 * dVar30);
      }
      dVar29 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar29 = (double)(float)(dVar38 * dVar36);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar37 = (double)(float)(dVar38 * dVar28);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar40 = (double)(float)(dVar38 * dVar30);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar29 = (double)(float)(dVar38 * dVar36);
      }
      (moby->pos).z = (float)((double)(moby->pos).z + dVar37);
      (moby->pos).y = (float)((double)(moby->pos).y + dVar40);
      (moby->pos).x = (float)((double)(moby->pos).x + dVar29);
      if (((float)(dVar39 / (double)*(float *)((int)pvVar8 + 0x60)) <
           (float)(longlong)(animationSpeed * 4.5)) && (DAT_0096a790 != -1)) {
        hero::____Hero_SetTimer_96a798(2);
        DAT_0096a794 = 0x1a;
        if ((DAT_0096befc != -1) &&
           ((sound::g_SoundChannels[DAT_0096befc].pMoby == g_heroMobyPtr &&
            (sound::g_SoundChannels[DAT_0096befc].state != '\0')))) {
          sound::sound_Kill(DAT_0096befc);
        }
        DAT_0096befc = -1;
      }
      if (dVar39 <= dVar42) {
        hero::Hero_PlaySound(5,0);
        if (((DAT_0096befc != -1) && (sound::g_SoundChannels[DAT_0096befc].pMoby == g_heroMobyPtr))
           && (sound::g_SoundChannels[DAT_0096befc].state != '\0')) {
          sound::sound_Kill(DAT_0096befc);
        }
        DAT_0096befc = -1;
        mobyutil::DeleteMotionBlur(&DAT_0096b490);
        DAT_0096ad8a = 0;
        moby->state = '\0';
      }
    }
    iVar18 = collproc::CollLine(&local_180,lVar15 + 0x10,2,0,0);
    if (((((iVar18 != 0) && (iVar18 = collproc::CollHotspot(), iVar18 != 0)) &&
         ((CollOutput.pMoby == (MobyInstance *)0x0 ||
          (bVar21 = mobyutil::MB_isCrate(CollOutput.pMoby), !bVar21)))) && (CollOutput.poly != 0))
       || (*(short *)((int)pvVar8 + 0x76) != 0)) {
      bVar21 = DAT_0096a744 == 0;
      *(undefined2 *)((int)pvVar8 + 0x76) = 0;
      if (bVar21) {
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = loadVectorLeftIndexed(0x94,0x42c08c);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                             auVar44);
        auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x6c,uVar24
                          );
        *(undefined4 *)((int)pvVar8 + 0x6cU & 0xfffffffc) = uVar9;
        DAT_0096a744 = 1;
        sound::PlayMobySound(2,0,moby);
      }
      if (moby->state == '\n') {
        mobyupdate_helpers::M71_0042b640(lVar15);
        *(float *)((int)pvVar8 + 0x60) = *(float *)((int)pvVar8 + 0x60) * 0.5;
        moby->state = '\v';
      }
    }
    fVar1 = 1.2;
    if (moby->state == '\v') {
      fVar1 = -0.37;
    }
    local_170 = *(float *)((int)pvVar8 + 0x40);
    dVar42 = (double)SQRT(*(float *)((int)pvVar8 + 0x48) * *(float *)((int)pvVar8 + 0x48) +
                          local_170 * local_170 +
                          *(float *)((int)pvVar8 + 0x44) * *(float *)((int)pvVar8 + 0x44));
    if (dVar42 == dVar27) {
      local_164 = *(undefined4 *)((int)pvVar8 + 0x4c);
      local_168 = 0.0;
      local_16c = 0.0;
      local_170 = 0.0;
    }
    else {
      local_168 = (float)((double)fVar1 / dVar42);
      local_170 = local_170 * local_168;
      local_16c = *(float *)((int)pvVar8 + 0x44) * local_168;
      local_168 = *(float *)((int)pvVar8 + 0x48) * local_168;
      local_164 = *(undefined4 *)((int)pvVar8 + 0x4c);
    }
    mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_100,lVar15,0x10000);
    local_e8 = 0;
    local_f8 = 0x3f800000;
    local_e6 = (short)DAT_0096a75c + 1;
    local_f4 = 0x45afdf66;
    local_e7 = 1;
    mobyfunc::GetBonePosition(lVar15,1,local_160);
    uVar41 = 0x3fd99999a0000000;
    uVar17 = collproc::CollMobySphere(0x3fd99999a0000000,local_160);
    if ((int)uVar17 == 0) {
      mobyfunc::GetBonePosition(lVar15,0,local_160);
      uVar17 = collproc::CollMobySphere(uVar41,local_160);
    }
    if ((int)uVar17 == 0) {
      return uVar17;
    }
    if (DAT_0096a744 != 0) {
      return (ulonglong)DAT_0096a744;
    }
    if (CollOutput.pMoby == (MobyInstance *)0x0) {
      return ZEXT48(CollOutput.pMoby);
    }
    if (((CollOutput.pMoby)->pClass != (MobyClass *)0x0) &&
       ((short)(CollOutput.pMoby)->pClass->mode_bits == 0x14)) {
      return ZEXT48(CollOutput.pMoby);
    }
    iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
    if ((iVar18 != 0) &&
       ((1 < *(short *)(iVar18 + 0x1c) && ((int)*(short *)(iVar18 + 0x14) == (uint)local_e6)))) {
      return (longlong)*(short *)(iVar18 + 0x14);
    }
    mobyutil::Lerp_vec4(0.5,&local_150);
    dVar40 = 0.10000000149011612;
    iVar18 = 0;
    dVar38 = 2.0;
    dVar37 = 0.3490658402442932;
    dVar36 = 1.535889744758606;
    dVar30 = 0.05000000074505806;
    uVar35 = 0x3fc3333340000000;
    dVar28 = 30.5;
    uVar41 = 0x3f689374c0000000;
    dVar39 = 0.07000000029802322;
    dVar42 = 0.699999988079071;
    do {
      dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar38);
      mobyutil::MB_randInt(2);
      dVar31 = (double)mobyutil::MB_randRot();
      dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar36);
      dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar40);
      mobyutil::MB_SphericalToVector((float)dVar33,(float)dVar31,(float)dVar32,afStack_140);
      dVar31 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar35);
      local_150 = (float)((double)local_150 + dVar31);
      dVar31 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar35);
      local_14c = (float)((double)local_14c + dVar31);
      dVar31 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar35);
      local_148 = (float)((double)local_148 + dVar31);
      local_d0 = (longlong)(int)((double)animationSpeed * dVar28);
      partupd::SpawnPart_53
                ((double)(float)(dVar29 * dVar40),dVar29,uVar41,&local_150,
                 (int)((double)animationSpeed * dVar28));
      local_d0 = (longlong)(int)((double)animationSpeed * dVar28);
      partupd::SpawnPart_53
                ((double)(float)(dVar29 * dVar39),(double)(float)(dVar29 * dVar42),uVar41,&local_150
                 ,(int)((double)animationSpeed * dVar28));
      iVar18 = iVar18 + 1;
    } while (iVar18 < 5);
    auVar43 = ZEXT416(0xffffffff);
    auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar43 = loadVectorLeftIndexed(0x94,0x42c08c);
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar44);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x6c,uVar24);
    *(undefined4 *)((int)pvVar8 + 0x6cU & 0xfffffffc) = uVar9;
    iVar18 = 0;
    DAT_0096a744 = 1;
    if (CollOutput.pMoby != (MobyInstance *)0x0) {
      iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
    }
    iVar25 = 0;
    if ((iVar18 != 0) && (iVar25 = 0, *(char *)(iVar18 + 9) == '\x01')) {
      iVar25 = 1;
    }
    iVar18 = sound::PlayMobySound(iVar25,0,moby);
    return (longlong)iVar18;
  }
  if (bVar5 != 0) {
    DAT_0096ad8c = 0;
    return (ulonglong)bVar5;
  }
  moby->field80_0xb8 = g_heroMobyPtr;
  if (PVar14 == FIRST_PERSON_VIEW) {
    if ((g_downButtons & (R1|R2)) != 0) {
      camera::DrawTargetCrosshair(1.0,moby,0xff917267,0x42c08c);
    }
    *(undefined2 *)((int)pvVar8 + 0x7e) = 0;
    mobyutil::MB_SphericalToVector(10.0,GameCamera.rot.radius,-GameCamera.rot.elevation,local_220);
    iVar18 = collproc::CollLine(0x951500,local_220,4,g_heroMobyPtr,0);
    fVar1 = CollOutput.ip.x;
    if (iVar18 != 0) {
      *(undefined2 *)((int)pvVar8 + 0x7e) = 1;
      *(float *)((int)pvVar8 + 0x50) = fVar1;
      *(float *)((int)pvVar8 + 0x54) = CollOutput.ip.y;
      *(float *)((int)pvVar8 + 0x58) = CollOutput.ip.z;
      *(float *)((int)pvVar8 + 0x5c) = CollOutput.ip.w;
    }
  }
  draw::RegisterPostDraw(&PTR_M711_0042ab78_0070e310,moby);
  bVar5 = moby->animationId;
  bVar6 = moby->field43_0x70;
  if (bVar5 != 0) {
    if (bVar5 == 0xe) {
      if ((int)((ulonglong)bVar6 & 2) == 0) {
        return (ulonglong)bVar6 & 2;
      }
      local_d0 = (longlong)(int)(animationSpeed * 5.5);
      uVar24 = mobyutil::MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 5.5));
      return uVar24;
    }
    if (DAT_0096bd8e != '\0') {
      if ((bVar5 != 0x10) && (bVar5 != 0xf)) {
        local_d0 = (longlong)(int)(animationSpeed * 4.5);
        uVar24 = mobyutil::MB_SetAnimation(lVar15,0xf,0,(int)(animationSpeed * 4.5));
        return uVar24;
      }
      if ((bVar6 & 2) == 0) {
        return (ulonglong)bVar5;
      }
      if (bVar5 != 0xf) {
        return (ulonglong)bVar5;
      }
      local_d0 = (longlong)(int)(animationSpeed * 5.5);
      uVar24 = mobyutil::MB_SetAnimation(lVar15,0x10,0,(int)(animationSpeed * 5.5));
      return uVar24;
    }
    if ((bVar5 == 0x10) || (bVar5 == 0xf)) {
      local_d0 = (longlong)(int)(animationSpeed * 2.5);
      uVar24 = mobyutil::MB_SetAnimation(lVar15,0xe,0,(int)(animationSpeed * 2.5));
      return uVar24;
    }
  }
  if ((g_heroState != BOLT_CRANK_TURNING && (bVar6 & 2) != 0) && (bVar5 != 1)) {
    local_d0 = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 5.5));
  }
  pMVar13 = g_heroMobyPtr;
  if (g_heroState == BOLT_CRANK_TURNING) {
    lVar16 = ((LZCOUNT(0x40 - (uint)g_heroMobyPtr->animationId) << 0x3a) >> 0x3f & 8U) + 0xb;
    uVar20 = (u8)lVar16;
    iVar18 = (int)lVar16;
    bVar26 = (iVar18 == 0x13) << 1;
    if (g_heroMobyPtr->animationId == 0x41) {
      uVar20 = '\x12';
    }
    else if ((iVar18 != 0x13) && (iVar18 != 0x12)) {
      local_d0 = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(lVar15,lVar16,0,(int)(animationSpeed * 7.5));
      goto LAB_0042c630;
    }
    moby->updateId = uVar20;
    moby->animationId = uVar20;
    moby->animationBlend = pMVar13->animationBlend;
    moby->previousAnimationFrame = pMVar13->previousAnimationFrame;
    cVar7 = pMVar13->animationFrame;
    moby->animationFrame = cVar7;
    if (pMVar13->updateId != pMVar13->animationId) {
      moby->previousAnimationFrame = cVar7;
    }
    mobyfunc::UpdateMobyFrameData(moby);
  }
  else if ((DAT_0096bd70 == 0x3b) && (hero::g_heroStateTimer == 1)) {
    local_d0 = (longlong)(int)(animationSpeed * 17.5);
    mobyutil::MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 17.5));
  }
LAB_0042c630:
  if ((((g_heroState != UNK_BONK && g_heroState != WRENCH_ATTACK) &&
       (g_heroState != GRINDRAIL_WRENCH_ATTACK)) && (g_heroState != MAGNERAMP_ATTACK)) &&
     ((g_heroState != HYPER_STRIKE && (moby->animationId < 6 && 2 < moby->animationId)))) {
    local_d0 = (longlong)(int)(animationSpeed * 4.5);
    mobyutil::MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 4.5));
  }
  pMVar13 = g_heroMobyPtr;
  if ((g_heroMobyPtr->animationId != g_heroMobyPtr->updateId) ||
     (2 < (int)((uint)(byte)g_heroMobyPtr->animationFrame -
               (uint)(byte)g_heroMobyPtr->previousAnimationFrame))) {
    *(short *)((int)pvVar8 + 0x74) = *(short *)((int)pvVar8 + 0x74) + 1;
  }
  moby->unk58 = hero::g_heroAnimSpeed;
  uVar24 = ZEXT48(&DAT_0072317c) + (ulonglong)DAT_0096a740 * 0x2c & 0xffffffff;
  if ((hero::g_heroStateType != (undefined4 *)0x6) && (g_heroState != GRINDRAIL_WRENCH_ATTACK)) {
    return uVar24;
  }
  bVar21 = true;
  puVar23 = hero::g_heroStateType;
  if (DAT_0096a77c == 0) {
    puVar23 = (undefined4 *)0xaa8;
    auVar43 = loadVectorLeftIndexed(0x1c,uVar24);
    auVar44 = loadVectorRightIndexed(0x2c,uVar24);
    auVar45 = loadVectorLeftIndexed(0xaa8,0x969ce0);
    auVar46 = vectorConvertFromSignedFixedPointWord(auVar43 | auVar44,0);
    auVar43 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar43 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
    if ((bool)(bVar26 >> 1 & 1)) goto LAB_0042c790;
    auVar43 = loadVectorLeftIndexed(0x20,uVar24);
    auVar45 = loadVectorRightIndexed(0x30,uVar24);
    auVar43 = vectorConvertFromSignedFixedPointWord(auVar43 | auVar45,0);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanFloatingPoint
              (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
    if (!(bool)(bVar26 >> 1 & 1)) goto LAB_0042c790;
  }
  else {
LAB_0042c790:
    bVar21 = false;
  }
  sVar19 = *(short *)((int)pvVar8 + 0x74);
  lVar16 = (longlong)sVar19;
  if (*(short *)((int)pvVar8 + 0x7c) != sVar19) {
    uVar20 = pMVar13->updateId;
    if (uVar20 == pMVar13->animationId) {
      uVar22 = (int)hero::g_heroAnimFrame >> 0x1f;
      if (uVar20 == '\x17') {
        uVar22 = uVar22 >> 0x1f ^ 1;
      }
      else if (uVar20 == '\x18') {
        uVar22 = uVar22 >> 0x1f ^ 1;
      }
      else if (uVar20 == '\x19') {
        lVar16 = (longlong)(int)uVar22;
        puVar23 = (undefined4 *)(uVar22 >> 1);
        uVar22 = (uint)((ulonglong)
                        ((longlong)(int)(((uint)puVar23 ^ hero::g_heroAnimFrame) - uVar22) +
                        -0x41400000) >> 0x3f) ^ 1;
      }
      else {
        if (uVar20 != '+') goto LAB_0042c880;
        lVar16 = (longlong)(int)uVar22;
        puVar23 = (undefined4 *)(uVar22 >> 1);
        uVar22 = (uint)((ulonglong)
                        ((longlong)(int)(((uint)puVar23 ^ hero::g_heroAnimFrame) - uVar22) +
                        -0x41b80000) >> 0x3f) ^ 1;
      }
      if (uVar22 != 0) {
        *(undefined4 *)((int)pvVar8 + 0x70) = 0x3f800000;
        *(short *)((int)pvVar8 + 0x7c) = sVar19;
      }
    }
  }
LAB_0042c880:
  dVar42 = (double)g_heroRotation.z;
  dVar39 = 0.0;
  DAT_0096a700 = DAT_0096a6e0;
  DAT_0096a704 = DAT_0096a6e4;
  DAT_0096a708 = DAT_0096a6e8;
  DAT_0096a70c = DAT_0096a6ec;
  DAT_0096a6f0 = DAT_0096a6d0;
  DAT_0096a6f4 = DAT_0096a6d4;
  DAT_0096a6f8 = DAT_0096a6d8;
  DAT_0096a6fc = DAT_0096a6dc;
  dVar27 = dVar39;
  mobyfunc::GetBonePosition(lVar15,1,&DAT_0096a6e0,lVar16,puVar23);
  mobyfunc::GetBonePosition(g_heroMobyPtr,0,&DAT_0096a6d0);
  if (((g_heroState == WRENCH_ATTACK) || (g_heroState == MAGNERAMP_ATTACK)) ||
     (g_heroState == GRINDRAIL_WRENCH_ATTACK)) {
    dVar42 = (double)FUN_005e8338((double)(DAT_0096a6e0 - g_heroPosition.x),
                                  (double)(DAT_0096a6e4 - g_heroPosition.y));
    if (*(int *)(&DAT_00723180 + DAT_0096a740 * 0x2c) == 1) {
      dVar42 = (double)fastfunc::FastWrapRot((float)dVar42,-1.5707964);
    }
    else {
      dVar42 = (double)fastfunc::FastWrapRot((float)dVar42,1.5707964);
    }
  }
  fVar2 = DAT_0096a6e4 - DAT_0096a6d4;
  fVar3 = DAT_0096a6e0 - DAT_0096a6d0;
  fVar4 = DAT_0096a6e8 - DAT_0096a6d8;
  dVar30 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)(float)(dVar30 + 0.17000000178813934) / dVar30);
  dVar28 = dVar27;
  if (dVar27 - dVar30 < 0.0) {
    dVar28 = (double)(fVar3 * fVar1);
  }
  dVar36 = dVar27;
  if (dVar27 - dVar30 < 0.0) {
    dVar36 = (double)(fVar2 * fVar1);
  }
  dVar37 = dVar27;
  if (dVar27 - dVar30 < 0.0) {
    dVar37 = (double)(fVar4 * fVar1);
  }
  if (dVar30 - dVar27 < 0.0) {
    dVar28 = (double)(fVar3 * fVar1);
  }
  if (dVar30 - dVar27 < 0.0) {
    dVar36 = (double)(fVar2 * fVar1);
  }
  if (dVar30 - dVar27 < 0.0) {
    dVar37 = (double)(fVar4 * fVar1);
  }
  if (((hero::g_heroStateType != (undefined4 *)0xf) && (g_heroState != MAGNERAMP_ATTACK)) &&
     (g_heroState != HYPER_STRIKE)) {
    dVar27 = (double)FUN_005e8338((double)(DAT_0096a6e0 - g_heroPosition.x),
                                  (double)(DAT_0096a6e4 - g_heroPosition.y));
    dVar27 = (double)fastfunc::FastSubRots(g_heroRotation.z,(float)dVar27);
    if (1.5707963705062866 < dVar27) {
      bVar21 = false;
    }
    mobyupdate_helpers::M71_0042be08(local_210);
    dVar28 = (double)(float)dVar28;
  }
  DAT_0096a6e0 = (float)((double)DAT_0096a6d0 + dVar28);
  DAT_0096a6e4 = DAT_0096a6d4 + (float)dVar36;
  DAT_0096a6e8 = DAT_0096a6d8 + (float)dVar37;
  DAT_0096a6ec = DAT_0096a6dc;
  if (((g_heroState != MAGNERAMP_ATTACK && g_heroState != GRINDRAIL_WRENCH_ATTACK) &&
      (dVar27 < 1.2217304706573486)) &&
     (local_d0 = (longlong)(int)(animationSpeed * 10.5),
     (int)(animationSpeed * 10.5) < hero::g_heroStateTimer)) {
    FUN_005e8338((double)(DAT_0096a6e0 - g_heroPosition.x),(double)(DAT_0096a6e4 - g_heroPosition.y)
                );
    dVar40 = 1.570796251296997;
    dVar38 = 3.141592502593994;
    dVar37 = -3.141592502593994;
    dVar36 = -0.16666656732559204;
    dVar30 = 0.008333025500178337;
    dVar28 = -0.0001980741071747616;
    dVar27 = 2.601886990305502e-06;
    mobyupdate_helpers::M71_0042be08(local_1e0);
    if ((((DAT_0096a744 == 0) &&
         (iVar18 = collproc::CollLine(local_200,local_1f0,2,0,0), iVar18 != 0)) &&
        (iVar18 = collproc::CollHotspot(), iVar18 != 0)) &&
       ((CollOutput.pMoby == (MobyInstance *)0x0 ||
        (iVar18 = mobyutil::____MB_IsInvalidOrClass502(), iVar18 != 0)))) {
      DAT_0096a744 = 1;
      sound::PlayMobySound(2,0,moby);
      mobyupdate_helpers::M71_0042b640(lVar15);
      if (CollOutput.pMoby != (MobyInstance *)0x0) {
        dVar29 = (double)(float)(dVar42 + dVar40);
        local_1c8 = (float)dVar39;
        dVar40 = (double)(float)(dVar38 - dVar42);
        if (dVar42 - (double)(float)(dVar38 - dVar42) < 0.0) {
          dVar40 = dVar42;
        }
        dVar31 = (double)(float)(dVar38 - dVar29);
        if (dVar29 - (double)(float)(dVar38 - dVar29) < 0.0) {
          dVar31 = dVar29;
        }
        dVar38 = (double)(float)(dVar37 - dVar42);
        if ((double)(float)(dVar37 - dVar42) - dVar40 < 0.0) {
          dVar38 = dVar40;
        }
        dVar40 = (double)(float)(dVar37 - dVar29);
        if ((double)(float)(dVar37 - dVar29) - dVar31 < 0.0) {
          dVar40 = dVar31;
        }
        dVar37 = (double)(float)(dVar38 * dVar38);
        dVar29 = (double)(float)(dVar40 * dVar40);
        dVar33 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar38));
        dVar31 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar40));
        dVar32 = (double)(float)(dVar37 * dVar33);
        dVar34 = (double)(float)(dVar29 * dVar31);
        local_1cc = (float)((double)(float)(dVar37 * dVar32) * dVar27 +
                           (double)(float)(dVar32 * dVar28 +
                                          (double)(float)(dVar33 * dVar30 +
                                                         (double)(float)((double)(float)(dVar37 * 
                                                  dVar38) * dVar36 + dVar38))));
        local_1d0 = (float)((double)(float)(dVar29 * dVar34) * dVar27 +
                           (double)(float)(dVar34 * dVar28 +
                                          (double)(float)(dVar31 * dVar30 +
                                                         (double)(float)((double)(float)(dVar29 * 
                                                  dVar40) * dVar36 + dVar40))));
        mobyutil::CollDamageMobyDirect
                  (1.0,CollOutput.pMoby,moby,0x10000,0x42c08c,&CollOutput.ip.x,&local_1d0);
      }
    }
  }
  uVar24 = (ulonglong)g_heroState;
  if (g_heroState == HYPER_STRIKE) {
    iVar18 = hero::Hero_MayaFrameTrigger(27.0);
    uVar24 = (ulonglong)iVar18;
    if (iVar18 != 0) {
      sound::PlayMobySound(2,0,moby);
      local_1c0 = DAT_0096a6e0;
      local_1bc = DAT_0096a6e4;
      local_1b8 = DAT_0096a6e8;
      local_1b4 = DAT_0096a6ec;
      local_1b0 = DAT_0096a6e0;
      local_1ac = DAT_0096a6e4;
      local_1a8 = DAT_0096a6e8;
      local_1a4 = DAT_0096a6ec;
      hero::Hero_SubGravity(0.7,&local_1c0,&local_1c0);
      hero::Hero_SubGravity(-0.9,&local_1b0,&local_1b0);
      uVar24 = collproc::CollLine(&local_1c0,&local_1b0,2,0,0);
      if ((int)uVar24 != 0) {
        uVar24 = mobyupdate_helpers::M71_0042b640(lVar15);
      }
    }
  }
  if (!bVar21) {
    return uVar24;
  }
  iVar18 = 1;
  dVar28 = 1.0;
  dVar27 = dVar28;
  if (g_heroState == HYPER_STRIKE) {
    iVar18 = 2;
    dVar27 = 1.5499999523162842;
  }
  local_d0 = (longlong)iVar18;
  fVar1 = (float)(dVar42 + 1.570796251296997);
  dVar30 = (double)(float)(3.141592502593994 - dVar42);
  if (dVar42 - (double)(float)(3.141592502593994 - dVar42) < 0.0) {
    dVar30 = dVar42;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar36 = (double)(float)(-3.141592502593994 - dVar42);
  if ((double)(float)(-3.141592502593994 - dVar42) - dVar30 < 0.0) {
    dVar36 = dVar30;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar30 = (double)(float)(dVar36 * dVar36);
  fVar4 = fVar3 * fVar3;
  dVar37 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar36));
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar42 = (double)(float)(dVar30 * dVar37);
  fVar2 = fVar4 * fVar1;
  local_19c = (float)(dVar30 * dVar42) * 2.601887e-06 +
              (float)(dVar42 * -0.0001980741071747616 +
                     (double)(float)(dVar37 * 0.008333025500178337 +
                                    (double)(float)((double)(float)(dVar30 * dVar36) *
                                                    -0.16666656732559204 + dVar36)));
  local_198 = (float)dVar39;
  local_1a0 = fVar4 * fVar2 * 2.601887e-06 +
              fVar2 * -0.0001980741 + fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3;
  mobyutil::SetCollDamIn((double)local_d0,&local_130,lVar15,0x10000);
  local_128 = (float)dVar28;
  local_117 = 1;
  local_118 = 0;
  local_124 = 0x45afdf66;
  local_116 = moby->oClass;
  dVar30 = (double)SQRT(local_130 * local_130 + local_12c * local_12c);
  dVar28 = (double)(local_130 * (float)(dVar27 / dVar30));
  dVar42 = (double)(local_12c * (float)(dVar27 / dVar30));
  dVar27 = dVar39;
  if (dVar39 - dVar30 < 0.0) {
    dVar27 = dVar28;
  }
  dVar36 = dVar39;
  if (dVar39 - dVar30 < 0.0) {
    dVar36 = dVar42;
  }
  if (dVar30 - dVar39 < 0.0) {
    dVar27 = dVar28;
  }
  if (dVar30 - dVar39 < 0.0) {
    dVar36 = dVar42;
  }
  local_130 = (float)dVar27;
  local_12c = (float)dVar36;
  iVar18 = mobyutil::MB_CollLineMulti
                     (&DAT_0096a6d0,&DAT_0096a6e0,&DAT_0096a6f0,&DAT_0096a700,g_heroMobyPtr,
                      &local_130,5);
  bVar21 = false;
  if ((iVar18 != 0) && (bVar21 = false, CollOutput.pMoby != (MobyInstance *)0x0)) {
    iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
    if ((iVar18 == 0) || ((*(ushort *)(iVar18 + 0x1e) & 2) == 0)) {
      bVar21 = false;
      if (DAT_0096a744 == 0) {
        sVar19 = 0;
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          sVar19 = 0;
          if ((CollOutput.pMoby)->pClass != (MobyClass *)0x0) {
            sVar19 = (short)(CollOutput.pMoby)->pClass->mode_bits;
          }
        }
        bVar21 = false;
        if (sVar19 != 0x14) {
          iVar18 = 0;
          DAT_0096a744 = 1;
          if (CollOutput.pMoby != (MobyInstance *)0x0) {
            iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
          }
          iVar25 = 0;
          if ((iVar18 != 0) && (iVar25 = 0, *(char *)(iVar18 + 9) == '\x01')) {
            iVar25 = 1;
          }
          sound::PlayMobySound(iVar25,0,moby);
          mobyupdate_helpers::M71_0042b640(lVar15);
          bVar21 = false;
        }
      }
    }
    else {
      bVar21 = true;
    }
  }
  fVar2 = (float)((double)DAT_0096a6e4 - (double)DAT_0096a6d4);
  fVar3 = (float)((double)DAT_0096a6e0 - (double)DAT_0096a6d0);
  fVar4 = (float)((double)DAT_0096a6e8 - (double)DAT_0096a6d8);
  local_184 = DAT_0096a6ec;
  dVar42 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)(float)(dVar42 - 0.08500000089406967) / dVar42);
  dVar27 = dVar39;
  if (dVar39 - dVar42 < 0.0) {
    dVar27 = (double)(fVar1 * fVar4);
  }
  dVar28 = dVar39;
  if (dVar39 - dVar42 < 0.0) {
    dVar28 = (double)(fVar1 * fVar2);
  }
  dVar30 = dVar39;
  if (dVar39 - dVar42 < 0.0) {
    dVar30 = (double)(fVar1 * fVar3);
  }
  if (dVar42 - dVar39 < 0.0) {
    dVar27 = (double)(fVar1 * fVar4);
  }
  if (dVar42 - dVar39 < 0.0) {
    dVar28 = (double)(fVar1 * fVar2);
  }
  if (dVar42 - dVar39 < 0.0) {
    dVar30 = (double)(fVar1 * fVar3);
  }
  local_188 = (float)(dVar27 + (double)DAT_0096a6d8);
  local_18c = (float)(dVar28 + (double)DAT_0096a6d4);
  local_190 = (float)(dVar30 + (double)DAT_0096a6d0);
  fVar1 = 0.35;
  puVar23 = hero::g_heroStateType;
  if (hero::g_heroStateType == (undefined4 *)0xf) {
    puVar23 = &DAT_0042c08c;
    fVar1 = 0.7;
  }
  if (g_heroState == HYPER_STRIKE) {
    puVar23 = &DAT_0042c08c;
    fVar1 = 0.47;
  }
  uVar24 = collproc::CollMobySphere((double)fVar1,&local_190,puVar23,0,g_heroMobyPtr,&local_130);
  if (((int)uVar24 != 0) &&
     (((DAT_00a14a00 == 0 || (*(int *)(DAT_00a14a00 + 0x24) == 0)) ||
      (sVar19 = *(short *)(*(int *)(DAT_00a14a00 + 0x24) + 0x46), uVar24 = (ulonglong)sVar19,
      sVar19 != 0x12)))) {
    uVar24 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
    if (((int)uVar24 != 0) &&
       (uVar24 = (ulonglong)*(ushort *)((int)uVar24 + 0x1e) & 2, (int)uVar24 != 0))
    goto LAB_0042d334;
    if (DAT_0096a744 == 0) {
      iVar18 = 0;
      DAT_0096a744 = 1;
      if (CollOutput.pMoby != (MobyInstance *)0x0) {
        iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
      }
      iVar25 = 0;
      if ((iVar18 != 0) && (iVar25 = 0, *(char *)(iVar18 + 9) == '\x01')) {
        iVar25 = 1;
      }
      sound::PlayMobySound(iVar25,0,moby);
      uVar24 = mobyupdate_helpers::M71_0042b640(lVar15);
    }
  }
  if (!bVar21) {
    return uVar24;
  }
LAB_0042d334:
  hero::TransitionMovement(0x21,1);
  if (CollOutput.pMoby == (MobyInstance *)0x0) {
    uVar24 = fastfunc::FastWrapRot(g_heroRotation.z,3.1415927);
    dVar27 = extraout_f1_00;
  }
  else {
    uVar24 = FUN_005e8338((double)(g_heroPosition.x - ((CollOutput.pMoby)->pos).x),
                          (double)(g_heroPosition.y - ((CollOutput.pMoby)->pos).y));
    dVar27 = extraout_f1;
  }
  DAT_0096a748 = (float)dVar27;
  return uVar24;
}



//==== 0042de7c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M712_0042de7c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M712_0042de7c(void)

{
  DAT_00859cbc = 0x10000;
  return;
}



//==== 0042de90  ns=mobyupdate_helpers  size=0x148
// sig: undefined M712_0042de90(void)
// callers(1): 0042e8f0 mobyupdate_unsorted::UpdateMoby_712
// callees(0): 

void mobyupdate_helpers::M712_0042de90(int param_1)

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
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  Spline *pSVar22;
  float *pfVar23;
  longlong lVar24;
  
  iVar20 = *(int *)(param_1 + 0x78);
  iVar21 = *(int *)(iVar20 + 0xdc);
  if (iVar21 != -1) {
    pSVar22 = Splines[iVar21];
    if (pSVar22->cnt == 7) {
      pfVar23 = (float *)&DAT_00859ce0;
      fVar1 = *(float *)(param_1 + 0xc0);
      fVar2 = *(float *)(param_1 + 0xd0);
      lVar24 = 7;
      fVar3 = *(float *)(param_1 + 0xe0);
      fVar4 = *(float *)(param_1 + 0xc4);
      fVar5 = *(float *)(param_1 + 0xd4);
      fVar6 = *(float *)(param_1 + 0xe4);
      fVar7 = *(float *)(param_1 + 200);
      fVar8 = *(float *)(param_1 + 0xd8);
      fVar9 = *(float *)(param_1 + 0xe8);
      fVar10 = *(float *)(param_1 + 0xcc);
      fVar11 = *(float *)(param_1 + 0xdc);
      fVar12 = *(float *)(param_1 + 0xec);
      fVar13 = *(float *)(param_1 + 0x10);
      fVar14 = *(float *)(param_1 + 0x14);
      fVar15 = *(float *)(param_1 + 0x18);
      do {
        fVar16 = pfVar23[1];
        fVar17 = *pfVar23;
        fVar18 = pfVar23[2];
        fVar19 = pfVar23[3];
        pfVar23 = pfVar23 + 4;
        pSVar22->points[0].x = fVar16 * fVar2 + fVar18 * fVar3 + fVar17 * fVar1 + fVar13;
        pSVar22->points[0].y = fVar16 * fVar5 + fVar18 * fVar6 + fVar17 * fVar4 + fVar14;
        pSVar22->points[0].z = fVar16 * fVar8 + fVar18 * fVar9 + fVar17 * fVar7 + fVar15;
        pSVar22->points[0].w = fVar18 * fVar12 + fVar17 * fVar10 + fVar16 * fVar11 + fVar19;
        pSVar22 = (Spline *)pSVar22->points;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      DAT_0096bfba = (undefined2)*(undefined4 *)(iVar20 + 0xdc);
    }
  }
  return;
}



//==== 0042e010  ns=mobyupdate_helpers  size=0x2b8
// sig: undefined M712_0042e010(void)
// callers(1): 0042e8f0 mobyupdate_unsorted::UpdateMoby_712
// callees(1): 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M712_0042e010(int param_1)

{
  uint uVar1;
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
  
  iVar2 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x7c);
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 200),mobyutil::g_FrameTime * 2.0943952);
  *(float *)(iVar2 + 200) = (float)dVar3;
  dVar13 = 3.141592502593994;
  dVar12 = -3.141592502593994;
  dVar11 = -0.16666656732559204;
  dVar10 = 0.008333025500178337;
  dVar9 = -0.0001980741071747616;
  dVar8 = 2.601886990305502e-06;
  dVar5 = (double)(float)(3.141592502593994 - dVar3);
  if (dVar3 - (double)(float)(3.141592502593994 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(-3.141592502593994 - dVar3);
  if ((double)(float)(-3.141592502593994 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar6 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar3 = (double)(float)(dVar5 * dVar6);
  *(float *)(param_1 + 0x18) =
       ((float)(dVar5 * dVar3) * 2.601887e-06 +
       (float)(dVar3 * -0.0001980741071747616 +
              (double)(float)(dVar6 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar5 * dVar4) * -0.16666656732559204 +
                                            dVar4)))) * 0.25 + *(float *)(param_1 + 0x18);
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xcc),mobyutil::g_FrameTime * 1.6929693);
  *(float *)(iVar2 + 0xcc) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar7 = 0.0872664600610733;
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar3 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar6 = (double)(float)(dVar5 * dVar3);
  dVar5 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x44),
                             (float)((double)(float)(dVar5 * dVar6) * dVar8 +
                                    (double)(float)(dVar6 * dVar9 +
                                                   (double)(float)(dVar3 * dVar10 +
                                                                  (double)(float)((double)(float)(
                                                  dVar5 * dVar4) * dVar11 + dVar4)))) * 0.08726646);
  *(float *)(param_1 + 0x44) = (float)dVar5;
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xd0),mobyutil::g_FrameTime * 0.9250245);
  *(float *)(iVar2 + 0xd0) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar13 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar13 = dVar5;
  }
  dVar5 = (double)(float)(dVar13 * dVar13);
  dVar12 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar13));
  dVar3 = (double)(float)(dVar5 * dVar12);
  dVar5 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x40),
                             (float)((double)(float)((double)(float)(dVar5 * dVar3) * dVar8 +
                                                    (double)(float)(dVar3 * dVar9 +
                                                                   (double)(float)(dVar12 * dVar10 +
                                                                                  (double)(float)((
                                                  double)(float)(dVar5 * dVar13) * dVar11 + dVar13))
                                                  )) * dVar7));
  *(float *)(param_1 + 0x40) = (float)dVar5;
  uVar1 = (int)*(uint *)(param_1 + 0x44) >> 0x1f;
  iVar2 = (uVar1 >> 1 ^ *(uint *)(param_1 + 0x44)) - uVar1;
  if (dVar5 <= 0.1745329201221466) {
    if (dVar5 < -0.1745329201221466) {
      *(undefined4 *)(param_1 + 0x40) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x3e32b8c2;
  }
  if (iVar2 < 0x3e32b8c3) {
    if (iVar2 < -0x3e32b8c2) {
      *(undefined4 *)(param_1 + 0x44) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0x3e32b8c2;
  }
  return;
}



//==== 0042e2c8  ns=mobyupdate_helpers  size=0x8c
// sig: undefined M712_0042e2c8(void)
// callers(0): 
// callees(0): 

MobyInstance * mobyupdate_helpers::M712_0042e2c8(int param_1,short param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (((int)(uint)*(byte *)(param_1 + 0x21) < mobyutil::g_NumMobyGroups) &&
     (puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
    do {
      if (*(short *)((int)MobyInstance[*puVar2 & 0x7fff].pVar + 0xb4) == param_2) {
        return MobyInstance + (*puVar2 & 0x7fff);
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}



//==== 0042e360  ns=mobyupdate_helpers  size=0x164
// sig: undefined M712_0042e360(void)
// callers(1): 0042e8f0 mobyupdate_unsorted::UpdateMoby_712
// callees(0): 

void mobyupdate_helpers::M712_0042e360(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = *(int *)(param_1 + 0x78);
  sVar1 = *(short *)(iVar2 + 0xb4);
  if (sVar1 != 4) {
    if (sVar1 == 3) {
      *(undefined2 *)(iVar2 + 0xb6) = 0;
      *(Spline **)(iVar2 + 0xac) = Splines[*(int *)(iVar2 + 0xa0)];
    }
    else if (sVar1 == 2) {
      *(undefined2 *)(iVar2 + 0xb6) = 3;
      *(Spline **)(iVar2 + 0xac) = Splines[*(int *)(iVar2 + 0x9c)];
    }
    else if (sVar1 == 1) {
      *(undefined2 *)(iVar2 + 0xb6) = 0;
      *(Spline **)(iVar2 + 0xac) = Splines[*(int *)(iVar2 + 0x98)];
    }
    else if (sVar1 == 0) {
      *(undefined2 *)(iVar2 + 0xb6) = 1;
      *(Spline **)(iVar2 + 0xac) = Splines[*(int *)(iVar2 + 0x94)];
    }
  }
  piVar3 = *(int **)(iVar2 + 0xac);
  fVar4 = 1.0 / (SQRT(((float)piVar3[6] - (float)piVar3[10]) *
                      ((float)piVar3[6] - (float)piVar3[10]) +
                      ((float)piVar3[4] - (float)piVar3[8]) * ((float)piVar3[4] - (float)piVar3[8])
                      + ((float)piVar3[5] - (float)piVar3[9]) *
                        ((float)piVar3[5] - (float)piVar3[9])) * (float)(longlong)*piVar3);
  *(float *)(iVar2 + 0xd4) = mobyutil::g_FrameTime * 5.0 * fVar4;
  fVar5 = DAT_0071f418;
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(float *)(iVar2 + 0xd8) = fVar5 * 2.5 * fVar4;
  return;
}



//==== 0042e4c8  ns=mobyupdate_helpers  size=0x114
// sig: undefined M712_0042e4c8(void)
// callers(2): 0042e6b0 mobyupdate_helpers::M712_0042e6b0; 0042e8f0 mobyupdate_unsorted::UpdateMoby_712
// callees(0): 

void mobyupdate_helpers::M712_0042e4c8(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Cuboid *pCVar7;
  int iVar8;
  int iVar9;
  
  pCVar7 = Cuboids;
  iVar2 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0x10);
  iVar9 = 0;
  *(undefined2 *)(iVar2 + 0xb4) = 0xffff;
  iVar8 = iVar2;
  do {
    iVar3 = *(int *)(iVar8 + 0x80);
    fVar5 = *(float *)(param_1 + 0x14) - pCVar7[iVar3].pos.y;
    fVar4 = fVar1 - pCVar7[iVar3].pos.x;
    fVar6 = *(float *)(param_1 + 0x18) - pCVar7[iVar3].pos.z;
    if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < 1.0) {
      *(short *)(iVar2 + 0xb4) = (short)iVar9;
      break;
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar9 < 5);
  *(undefined1 *)(param_1 + 0x20) = 1;
  pCVar7 = Cuboids;
  iVar8 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xb4) << 2) + 0x80);
  *(float *)(iVar2 + 0x60) = Cuboids[iVar8].pos.x;
  *(float *)(iVar2 + 100) = pCVar7[iVar8].pos.y;
  *(float *)(iVar2 + 0x68) = pCVar7[iVar8].pos.z;
  *(float *)(iVar2 + 0x6c) = pCVar7[iVar8].pos.w;
  *(float *)(iVar2 + 0x70) = pCVar7[iVar8].rot.x;
  *(float *)(iVar2 + 0x74) = pCVar7[iVar8].rot.y;
  *(float *)(iVar2 + 0x78) = pCVar7[iVar8].rot.z;
  *(float *)(iVar2 + 0x7c) = pCVar7[iVar8].rot.w;
  return;
}



//==== 0042e5dc  ns=mobyupdate_helpers  size=0xd4
// sig: undefined M712_0042e5dc(void)
// callers(1): 0042e8f0 mobyupdate_unsorted::UpdateMoby_712
// callees(1): 0011aeec mobyutil::MB_ShowPersistentMessage

void mobyupdate_helpers::M712_0042e5dc(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x78) + 0xb4);
  if (*(char *)(param_1 + 0x20) == '\x05') {
    sVar1 = *(short *)(*(int *)(param_1 + 0x78) + 0xb6);
  }
  if (sVar1 == 4) {
    mobyutil::MB_ShowPersistentMessage(4,0x1399);
  }
  else if (sVar1 == 3) {
    mobyutil::MB_ShowPersistentMessage(4,0x53ee);
  }
  else if (sVar1 == 2) {
    mobyutil::MB_ShowPersistentMessage(4,0x53ee);
  }
  else if (sVar1 == 1) {
    mobyutil::MB_ShowPersistentMessage(4,0x53ee);
  }
  else if (sVar1 == 0) {
    mobyutil::MB_ShowPersistentMessage(4,0x53ed);
  }
  else {
    mobyutil::MB_ShowPersistentMessage(4,0x139b);
  }
  return;
}



//==== 0042e6b0  ns=mobyupdate_helpers  size=0x150
// sig: undefined M712_0042e6b0(void)
// callers(1): 0042e8f0 mobyupdate_unsorted::UpdateMoby_712
// callees(1): 0042e4c8 mobyupdate_helpers::M712_0042e4c8

void mobyupdate_helpers::M712_0042e6b0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  Cuboid *pCVar4;
  short sVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  
  pCVar4 = Cuboids;
  iVar2 = *(int *)(param_1 + 0x78);
  sVar5 = *(short *)(iVar2 + 0xb6);
  if (((int)(uint)*(byte *)(param_1 + 0x21) < mobyutil::g_NumMobyGroups) &&
     (puVar6 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar6 != (ushort *)0x0)) {
    do {
      pMVar7 = MobyInstance + (*puVar6 & 0x7fff);
      if (*(short *)((int)pMVar7->pVar + 0xb4) == sVar5) {
        if (pMVar7 != (MobyInstance *)0x0) {
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xb4) << 2) + 0x80);
          (pMVar7->pos).x = Cuboids[iVar3].pos.x;
          (pMVar7->pos).y = pCVar4[iVar3].pos.y;
          (pMVar7->pos).z = pCVar4[iVar3].pos.z;
          (pMVar7->pos).w = pCVar4[iVar3].pos.w;
          pCVar4 = Cuboids;
          iVar3 = *(int *)(iVar2 + (int)((longlong)*(short *)(iVar2 + 0xb4) << 2) + 0x80);
          (pMVar7->rotation).x = Cuboids[iVar3].rot.x;
          (pMVar7->rotation).y = pCVar4[iVar3].rot.y;
          (pMVar7->rotation).z = pCVar4[iVar3].rot.z;
          (pMVar7->rotation).w = pCVar4[iVar3].rot.w;
          M712_0042e4c8(pMVar7);
          sVar5 = *(short *)(iVar2 + 0xb6);
        }
        break;
      }
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar1);
  }
  *(short *)(iVar2 + 0xb4) = sVar5;
  return;
}



//==== 0042e808  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M712_0042e808(void)
// callers(0): 
// callees(2): 00109c30 mobyutil::OrganicDelt; 00117390 mobyutil::MB_PathEvalSpline

bool mobyupdate_helpers::M712_0042e808(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::OrganicDelt
            (1.0,*(float *)(iVar1 + 0xd8),*(float *)(iVar1 + 0xd8),*(float *)(iVar1 + 0xd4),
             (float *)(iVar1 + 0xc0),0x42e800,(float *)(iVar1 + 0xc4));
  lVar3 = (longlong)(**(int **)(iVar1 + 0xac) + -1);
  mobyutil::MB_PathEvalSpline
            ((double)(*(float *)(iVar1 + 0xc0) * (float)lVar3),*(int **)(iVar1 + 0xac),lVar3,0,
             iVar1 + 0x60,iVar1 + 0x70,0);
  uVar2 = (int)*(uint *)(iVar1 + 0xc0) >> 0x1f;
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0xc0)) - uVar2);
}



//==== 0042e8f0  ns=mobyupdate_unsorted  size=0x1058
// sig: undefined UpdateMoby_712(MobyInstance * moby)
// callers(0): 
// callees(19): 0002f3d8 camera0::Cam0_SetCamDist; 000fec94 mobyutil::MB_catmullRom; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 00117390 mobyutil::MB_PathEvalSpline; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0042de90 mobyupdate_helpers::M712_0042de90; 0042e010 mobyupdate_helpers::M712_0042e010; 0042e360 mobyupdate_helpers::M712_0042e360; 0042e4c8 mobyupdate_helpers::M712_0042e4c8; 0042e5dc mobyupdate_helpers::M712_0042e5dc; 0042e6b0 mobyupdate_helpers::M712_0042e6b0; 004d407c FUN_004d407c; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 712 */

void mobyupdate_unsorted::UpdateMoby_712(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  ushort uVar3;
  short sVar4;
  void *pvVar5;
  void *pvVar6;
  u16 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort *puVar11;
  int iVar12;
  Cuboid *pCVar13;
  MobyInstance *pMVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  Vec4 local_170;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_10c;
  float local_108;
  float local_fc;
  float local_ec;
  float local_dc;
  float local_bc;
  float local_ac;
  float local_9c;
  longlong local_80;
  
  lVar10 = (longlong)(int)moby;
  uVar9 = ZEXT48(&stack0x00000000);
  pvVar5 = moby->pVar;
  dVar26 = (double)(moby->pos).x;
  dVar25 = (double)(moby->pos).y;
  dVar24 = (double)(moby->pos).z;
  FUN_004d407c(lVar10,(ulonglong)(LZCOUNT(moby->modeBits & 1) << 0x20) >> 0x25);
  uVar1 = moby->state;
  if (uVar1 == '\a') {
    uVar22 = 0x3ff0000000000000;
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 0.5,
               (float *)((int)pvVar5 + 0xc0),0x720000,(float *)((int)pvVar5 + 0xc4));
    uVar19 = 0;
    dVar21 = (double)*(float *)((int)pvVar5 + 0xe0);
    dVar20 = (double)*(float *)((int)pvVar5 + 0xe4);
    dVar16 = (double)*(float *)((int)pvVar5 + 0xe8);
    dVar18 = (double)*(float *)((int)pvVar5 + 0xf4);
    dVar17 = (double)*(float *)((int)pvVar5 + 0xf8);
    mobyutil::MB_PathEvalSpline(0,*(undefined4 *)((int)pvVar5 + 0xac));
    dVar15 = (double)mobyutil::MB_catmullRom
                               (uVar22,uVar19,uVar22,uVar19,(double)*(float *)((int)pvVar5 + 0xc0));
    *(undefined4 *)((int)pvVar5 + 0x6c) = local_134;
    *(float *)((int)pvVar5 + 0x60) =
         (float)(dVar15 * (double)(float)((double)local_140 - dVar21) + dVar21);
    *(float *)((int)pvVar5 + 100) =
         (float)(dVar15 * (double)(float)((double)local_13c - dVar20) + dVar20);
    *(float *)((int)pvVar5 + 0x68) =
         (float)(dVar15 * (double)(float)((double)local_138 - dVar16) + dVar16);
    dVar16 = (double)fastfunc::FastDiffRots((double)local_12c,dVar18);
    dVar16 = (double)fastfunc::FastWrapRot((float)(dVar16 * dVar15),(float)dVar18);
    *(float *)((int)pvVar5 + 0x74) = (float)dVar16;
    dVar16 = (double)fastfunc::FastDiffRots((double)local_128,dVar17);
    dVar15 = (double)fastfunc::FastWrapRot((float)(dVar16 * dVar15),(float)dVar17);
    *(float *)((int)pvVar5 + 0x78) = (float)dVar15;
    uVar8 = (int)*(uint *)((int)pvVar5 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar5 + 0xc0)) - uVar8)) {
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x06') {
    if ((g_LevelFlags[Level][*(int *)((int)pvVar5 + 0xb8)] == -1) ||
       (g_LevelFlags[Level][*(int *)((int)pvVar5 + 0xbc)] == -1)) {
      puVar7 = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->collision = puVar7;
      moby->enabled = '\x01';
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x05') {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 0.25,
               (float *)((int)pvVar5 + 0xc0),0x720000,(float *)((int)pvVar5 + 0xc4));
    local_80 = (longlong)**(int **)((int)pvVar5 + 0xac);
    pCVar13 = Cuboids + *(int *)((int)pvVar5 +
                                (int)((longlong)*(short *)((int)pvVar5 + 0xb6) << 2) + 0x80);
    dVar23 = (double)(pCVar13->pos).x;
    dVar21 = (double)(pCVar13->pos).y;
    dVar20 = (double)(pCVar13->pos).z;
    dVar18 = (double)(pCVar13->pos).w;
    dVar17 = (double)(pCVar13->rot).y;
    dVar16 = (double)(pCVar13->rot).z;
    mobyutil::MB_PathEvalSpline
              ((double)local_80,*(int **)((int)pvVar5 + 0xac),pCVar13,0,uVar9 - 0x120,uVar9 - 0x110,
               0);
    dVar15 = (double)*(float *)((int)pvVar5 + 0xc0);
    *(float *)((int)pvVar5 + 0x60) =
         (float)(dVar15 * (double)(float)(dVar23 - (double)local_120) + (double)local_120);
    *(float *)((int)pvVar5 + 100) =
         (float)(dVar15 * (double)(float)(dVar21 - (double)local_11c) + (double)local_11c);
    *(float *)((int)pvVar5 + 0x6c) = (float)dVar18;
    *(float *)((int)pvVar5 + 0x68) =
         (float)(dVar15 * (double)(float)(dVar20 - (double)local_118) + (double)local_118);
    dVar15 = (double)fastfunc::FastDiffRots(dVar17,(double)local_10c);
    dVar15 = (double)fastfunc::FastWrapRot
                               ((float)(dVar15 * (double)*(float *)((int)pvVar5 + 0xc0)),local_10c);
    *(float *)((int)pvVar5 + 0x74) = (float)dVar15;
    dVar15 = (double)fastfunc::FastDiffRots(dVar16,(double)local_108);
    dVar15 = (double)fastfunc::FastWrapRot
                               ((float)(dVar15 * (double)*(float *)((int)pvVar5 + 0xc0)),local_108);
    *(float *)((int)pvVar5 + 0x78) = (float)dVar15;
    uVar8 = (int)*(uint *)((int)pvVar5 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar5 + 0xc0)) - uVar8)) {
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0;
      moby->state = '\x01';
      mobyupdate_helpers::M712_0042e6b0(lVar10);
    }
    if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
        (fastfunc::FastNormalizeRMtx4(uVar9 - 0xc0,lVar10 + 0xc0),
        ABS(local_9c * (g_heroPosition.z - (moby->pos).z) +
            local_bc * (g_heroPosition.x - (moby->pos).x) +
            local_ac * (g_heroPosition.y - (moby->pos).y)) < 1.2)) &&
       (mobyupdate_helpers::M712_0042e5dc(lVar10), (g_buttonsPressedThisFrame & TRIANGLE) != 0)) {
      *(undefined4 *)((int)pvVar5 + 0xe0) = *(undefined4 *)((int)pvVar5 + 0x60);
      *(undefined4 *)((int)pvVar5 + 0xe4) = *(undefined4 *)((int)pvVar5 + 100);
      *(undefined4 *)((int)pvVar5 + 0xe8) = *(undefined4 *)((int)pvVar5 + 0x68);
      *(undefined4 *)((int)pvVar5 + 0xec) = *(undefined4 *)((int)pvVar5 + 0x6c);
      *(undefined4 *)((int)pvVar5 + 0xf0) = *(undefined4 *)((int)pvVar5 + 0x70);
      *(undefined4 *)((int)pvVar5 + 0xf4) = *(undefined4 *)((int)pvVar5 + 0x74);
      *(undefined4 *)((int)pvVar5 + 0xf8) = *(undefined4 *)((int)pvVar5 + 0x78);
      *(undefined4 *)((int)pvVar5 + 0xfc) = *(undefined4 *)((int)pvVar5 + 0x7c);
      mobyupdate_helpers::M712_0042e4c8(lVar10);
      *(undefined2 *)((int)pvVar5 + 0xb4) = *(undefined2 *)((int)pvVar5 + 0xb6);
      mobyupdate_helpers::M712_0042e360(lVar10);
      moby->state = '\a';
      *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)((int)pvVar5 + 0xe0);
      *(undefined4 *)((int)pvVar5 + 100) = *(undefined4 *)((int)pvVar5 + 0xe4);
      *(undefined4 *)((int)pvVar5 + 0x68) = *(undefined4 *)((int)pvVar5 + 0xe8);
      *(undefined4 *)((int)pvVar5 + 0x6c) = *(undefined4 *)((int)pvVar5 + 0xec);
      *(undefined4 *)((int)pvVar5 + 0x70) = *(undefined4 *)((int)pvVar5 + 0xf0);
      *(undefined4 *)((int)pvVar5 + 0x74) = *(undefined4 *)((int)pvVar5 + 0xf4);
      *(undefined4 *)((int)pvVar5 + 0x78) = *(undefined4 *)((int)pvVar5 + 0xf8);
      *(undefined4 *)((int)pvVar5 + 0x7c) = *(undefined4 *)((int)pvVar5 + 0xfc);
      if (((int)(uint)(byte)moby->group < mobyutil::g_NumMobyGroups) &&
         (puVar11 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group], puVar11 != (ushort *)0x0
         )) {
        do {
          pMVar14 = MobyInstance + (*puVar11 & 0x7fff);
          if (*(short *)((int)pMVar14->pVar + 0xb4) == *(short *)((int)pvVar5 + 0xb6)) {
            if (pMVar14 != (MobyInstance *)0x0) {
              pMVar14->collision = (ushort *)0x0;
              pMVar14->enabled = '\0';
              pMVar14->state = '\x02';
              pMVar14->modeBits = pMVar14->modeBits | DISABLED;
            }
            break;
          }
          uVar3 = *puVar11;
          puVar11 = puVar11 + 1;
        } while (-1 < (short)uVar3);
      }
    }
  }
  else if (uVar1 == '\x04') {
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      camera0::Cam0_SetCamDist(0x401c000000000000,0x3f689374c0000000,&DAT_0042e8cc,0);
    }
    pvVar6 = moby->pVar;
    mobyutil::OrganicDelt
              (1.0,*(float *)((int)pvVar6 + 0xd8),*(float *)((int)pvVar6 + 0xd8),
               *(float *)((int)pvVar6 + 0xd4),(float *)((int)pvVar6 + 0xc0),0x42e8cc,
               (float *)((int)pvVar6 + 0xc4));
    local_80 = (longlong)(**(int **)((int)pvVar6 + 0xac) + -1);
    mobyutil::MB_PathEvalSpline
              ((double)(*(float *)((int)pvVar6 + 0xc0) * (float)local_80),
               *(int **)((int)pvVar6 + 0xac),local_80,0,(int)pvVar6 + 0x60,(int)pvVar6 + 0x70,0);
    uVar8 = (int)*(uint *)((int)pvVar6 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar6 + 0xc0)) - uVar8)) {
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      camera0::Cam0_SetCamDist(0x401c000000000000,0x3f60624de0000000,&DAT_0042e8cc,0);
    }
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 0.5,
               (float *)((int)pvVar5 + 0xc0),0x720000,(float *)((int)pvVar5 + 0xc4));
    pCVar13 = Cuboids + *(int *)((int)pvVar5 +
                                (int)((longlong)*(short *)((int)pvVar5 + 0xb4) << 2) + 0x80);
    dVar21 = (double)(pCVar13->pos).x;
    dVar20 = (double)(pCVar13->pos).y;
    dVar18 = (double)(pCVar13->pos).z;
    dVar17 = (double)(pCVar13->rot).y;
    dVar16 = (double)(pCVar13->rot).z;
    mobyutil::MB_PathEvalSpline
              (0,*(undefined4 *)((int)pvVar5 + 0xac),pCVar13,0,uVar9 - 0x160,uVar9 - 0x150,0);
    dVar15 = (double)*(float *)((int)pvVar5 + 0xc0);
    *(undefined4 *)((int)pvVar5 + 0x6c) = local_154;
    *(float *)((int)pvVar5 + 0x60) =
         (float)(dVar15 * (double)(float)((double)local_160 - dVar21) + dVar21);
    *(float *)((int)pvVar5 + 100) =
         (float)(dVar15 * (double)(float)((double)local_15c - dVar20) + dVar20);
    *(float *)((int)pvVar5 + 0x68) =
         (float)(dVar15 * (double)(float)((double)local_158 - dVar18) + dVar18);
    dVar15 = (double)fastfunc::FastDiffRots((double)local_14c,dVar17);
    dVar15 = (double)fastfunc::FastWrapRot
                               ((float)(dVar15 * (double)*(float *)((int)pvVar5 + 0xc0)),
                                (float)dVar17);
    *(float *)((int)pvVar5 + 0x74) = (float)dVar15;
    dVar15 = (double)fastfunc::FastDiffRots((double)local_148,dVar16);
    dVar15 = (double)fastfunc::FastWrapRot
                               ((float)(dVar15 * (double)*(float *)((int)pvVar5 + 0xc0)),
                                (float)dVar16);
    *(float *)((int)pvVar5 + 0x78) = (float)dVar15;
    uVar8 = (int)*(uint *)((int)pvVar5 + 0xc0) >> 0x1f;
    if (0x3f7fffff < (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar5 + 0xc0)) - uVar8)) {
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        fastfunc::FastNormalizeRMtx4(uVar9 - 0x100,lVar10 + 0xc0);
        if (ABS(local_dc * (g_heroPosition.z - (moby->pos).z) +
                local_fc * (g_heroPosition.x - (moby->pos).x) +
                local_ec * (g_heroPosition.y - (moby->pos).y)) < 1.2) {
          mobyupdate_helpers::M712_0042e360(lVar10);
          mobyupdate_helpers::M712_0042e5dc(lVar10);
          if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (mobyutil::g_HelpMsgOwner == 4)) {
            moby->state = '\x03';
            if (((int)(uint)(byte)moby->group < mobyutil::g_NumMobyGroups) &&
               (puVar11 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group],
               puVar11 != (ushort *)0x0)) {
              do {
                pMVar14 = MobyInstance + (*puVar11 & 0x7fff);
                if (*(short *)((int)pMVar14->pVar + 0xb4) == *(short *)((int)pvVar5 + 0xb6)) {
                  if (pMVar14 != (MobyInstance *)0x0) {
                    pMVar14->collision = (ushort *)0x0;
                    pMVar14->enabled = '\0';
                    pMVar14->state = '\x02';
                    pMVar14->modeBits = pMVar14->modeBits | DISABLED;
                  }
                  break;
                }
                uVar3 = *puVar11;
                puVar11 = puVar11 + 1;
              } while (-1 < (short)uVar3);
            }
            *(undefined2 *)((int)pvVar5 + 0xb0) = 0xffff;
          }
        }
      }
      else {
        if ((-1 < *(int *)((int)pvVar5 + 0x100)) &&
           ((*(short *)((int)pvVar5 + 0xb4) != 0 &&
            (iVar12 = mobyutil::MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x100)),
            iVar12 != 0)))) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          if (worldUpdateTime < (int)(animationSpeed * 10.5)) {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 0;
            pCVar13 = Cuboids;
            iVar12 = *(int *)((int)pvVar5 + 0x80);
            *(undefined2 *)((int)pvVar5 + 0xb6) = 0;
            (moby->pos).x = pCVar13[iVar12].pos.x;
            (moby->pos).y = pCVar13[iVar12].pos.y;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->pos).z = pCVar13[iVar12].pos.z;
            (moby->pos).w = pCVar13[iVar12].pos.w;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            (moby->rotation).x = pCVar13[iVar12].rot.x;
            (moby->rotation).y = pCVar13[iVar12].rot.y;
            (moby->rotation).z = pCVar13[iVar12].rot.z;
            fVar2 = pCVar13[iVar12].rot.w;
            moby->state = '\x01';
            pCVar13 = Cuboids;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->rotation).w = fVar2;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            *(float *)((int)pvVar5 + 0x60) = pCVar13[iVar12].pos.x;
            *(float *)((int)pvVar5 + 100) = pCVar13[iVar12].pos.y;
            *(float *)((int)pvVar5 + 0x68) = pCVar13[iVar12].pos.z;
            *(float *)((int)pvVar5 + 0x6c) = pCVar13[iVar12].pos.w;
            *(float *)((int)pvVar5 + 0x70) = pCVar13[iVar12].rot.x;
            *(float *)((int)pvVar5 + 0x74) = pCVar13[iVar12].rot.y;
            *(float *)((int)pvVar5 + 0x78) = pCVar13[iVar12].rot.z;
            *(float *)((int)pvVar5 + 0x7c) = pCVar13[iVar12].rot.w;
          }
          else {
            *(ushort *)((int)pvVar5 + 0xb4) =
                 ((ushort)((LZCOUNT(2 - (uint)*(ushort *)((int)pvVar5 + 0xb4)) << 0x3a) >> 0x3f) & 2
                 ) + 1;
            mobyupdate_helpers::M712_0042e360(lVar10);
            moby->state = '\x03';
          }
        }
        if (((-1 < *(int *)((int)pvVar5 + 0x104)) && (*(short *)((int)pvVar5 + 0xb4) != 1)) &&
           (iVar12 = mobyutil::MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x104)),
           iVar12 != 0)) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          if (worldUpdateTime < (int)(animationSpeed * 10.5)) {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 1;
            pCVar13 = Cuboids;
            iVar12 = *(int *)((int)pvVar5 + 0x84);
            *(undefined2 *)((int)pvVar5 + 0xb6) = 1;
            (moby->pos).x = pCVar13[iVar12].pos.x;
            (moby->pos).y = pCVar13[iVar12].pos.y;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->pos).z = pCVar13[iVar12].pos.z;
            (moby->pos).w = pCVar13[iVar12].pos.w;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            (moby->rotation).x = pCVar13[iVar12].rot.x;
            (moby->rotation).y = pCVar13[iVar12].rot.y;
            (moby->rotation).z = pCVar13[iVar12].rot.z;
            fVar2 = pCVar13[iVar12].rot.w;
            moby->state = '\x01';
            pCVar13 = Cuboids;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->rotation).w = fVar2;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            *(float *)((int)pvVar5 + 0x60) = pCVar13[iVar12].pos.x;
            *(float *)((int)pvVar5 + 100) = pCVar13[iVar12].pos.y;
            *(float *)((int)pvVar5 + 0x68) = pCVar13[iVar12].pos.z;
            *(float *)((int)pvVar5 + 0x6c) = pCVar13[iVar12].pos.w;
            *(float *)((int)pvVar5 + 0x70) = pCVar13[iVar12].rot.x;
            *(float *)((int)pvVar5 + 0x74) = pCVar13[iVar12].rot.y;
            *(float *)((int)pvVar5 + 0x78) = pCVar13[iVar12].rot.z;
            *(float *)((int)pvVar5 + 0x7c) = pCVar13[iVar12].rot.w;
          }
          else {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 0;
            mobyupdate_helpers::M712_0042e360(lVar10);
            moby->state = '\x03';
          }
        }
        if (((-1 < *(int *)((int)pvVar5 + 0x108)) && (*(short *)((int)pvVar5 + 0xb4) < 2)) &&
           (iVar12 = mobyutil::MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x108)),
           iVar12 != 0)) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          if (worldUpdateTime < (int)(animationSpeed * 10.5)) {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 2;
            pCVar13 = Cuboids;
            iVar12 = *(int *)((int)pvVar5 + 0x88);
            *(undefined2 *)((int)pvVar5 + 0xb6) = 2;
            (moby->pos).x = pCVar13[iVar12].pos.x;
            (moby->pos).y = pCVar13[iVar12].pos.y;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->pos).z = pCVar13[iVar12].pos.z;
            (moby->pos).w = pCVar13[iVar12].pos.w;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            (moby->rotation).x = pCVar13[iVar12].rot.x;
            (moby->rotation).y = pCVar13[iVar12].rot.y;
            (moby->rotation).z = pCVar13[iVar12].rot.z;
            fVar2 = pCVar13[iVar12].rot.w;
            moby->state = '\x01';
            pCVar13 = Cuboids;
            sVar4 = *(short *)((int)pvVar5 + 0xb4);
            (moby->rotation).w = fVar2;
            iVar12 = *(int *)((int)pvVar5 + (int)((longlong)sVar4 << 2) + 0x80);
            *(float *)((int)pvVar5 + 0x60) = pCVar13[iVar12].pos.x;
            *(float *)((int)pvVar5 + 100) = pCVar13[iVar12].pos.y;
            *(float *)((int)pvVar5 + 0x68) = pCVar13[iVar12].pos.z;
            *(float *)((int)pvVar5 + 0x6c) = pCVar13[iVar12].pos.w;
            *(float *)((int)pvVar5 + 0x70) = pCVar13[iVar12].rot.x;
            *(float *)((int)pvVar5 + 0x74) = pCVar13[iVar12].rot.y;
            *(float *)((int)pvVar5 + 0x78) = pCVar13[iVar12].rot.z;
            *(float *)((int)pvVar5 + 0x7c) = pCVar13[iVar12].rot.w;
          }
          else {
            *(undefined2 *)((int)pvVar5 + 0xb4) = 2;
            mobyupdate_helpers::M712_0042e360(lVar10);
            moby->state = '\x03';
          }
        }
      }
    }
    else if (uVar1 == '\0') {
      *(undefined2 *)((int)pvVar5 + 0xb0) = 0xffff;
      *(undefined2 *)((int)pvVar5 + 0xb2) = 0xffff;
      mobyupdate_helpers::M712_0042e4c8(lVar10);
    }
  }
  mobyupdate_helpers::M712_0042e010(lVar10);
  if ((moby->state == '\x03') || (moby->state == '\x04')) {
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      DAT_00969ed2 = 2;
      DAT_00969ed4 = 2;
      mobyupdate_helpers::M712_0042de90(lVar10);
    }
    iVar12 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar5 + 0xb2));
    if (iVar12 == 0) {
      iVar12 = sound::PlayMobySound(0,4,moby);
      *(short *)((int)pvVar5 + 0xb2) = (short)iVar12;
    }
  }
  else {
    iVar12 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar5 + 0xb2));
    if (iVar12 != 0) {
      sVar4 = *(short *)((int)pvVar5 + 0xb2);
      if (((sVar4 != -1) &&
          (iVar12 = (int)((longlong)sVar4 << 7) - (int)((longlong)sVar4 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar12 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar12 + 4) != '\0')) {
        sound::sound_Kill((int)sVar4);
      }
      *(undefined2 *)((int)pvVar5 + 0xb2) = 0xffff;
    }
  }
  local_170.x = (float)((double)(moby->pos).x - dVar26);
  local_170.y = (float)((double)(moby->pos).y - dVar25);
  local_170.w = (moby->pos).w;
  local_170.z = (float)((double)(moby->pos).z - dVar24);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x20),&local_170,uVar9 - 0x180,lVar10 + 0x40);
  return;
}



//==== 0042f948  ns=mobyupdate_helpers  size=0x14
// sig: undefined M713_0042f948(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M713_0042f948(void)

{
  DAT_00859d9c = 0x10000;
  return;
}



//==== 0042f968  ns=mobyupdate_helpers  size=0x188
// sig: undefined M713_0042f968(void)
// callers(1): 0042fc90 mobyupdate_unsorted::UpdateMoby_713
// callees(3): 000f31a8 mobyfunc::UpdateMobyTransform; 00109c30 mobyutil::OrganicDelt; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M713_0042f968(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::OrganicDelt
            (*(float *)(param_1 + 0x18) + *(float *)(iVar1 + 0x94),DAT_00859dc4 * DAT_0071f418,
             DAT_00859dc8 * DAT_0071f418,DAT_00859dc0 * mobyutil::g_FrameTime,
             (float *)(*(int *)(iVar1 + 0x84) + 0x18),param_2,(float *)(iVar1 + 0x8c));
  mobyutil::OrganicDelt
            (*(float *)(param_1 + 0x18) + *(float *)(iVar1 + 0x98),DAT_00859dc4 * DAT_0071f418,
             DAT_00859dc8 * DAT_0071f418,DAT_00859dc0 * mobyutil::g_FrameTime,
             (float *)(*(int *)(iVar1 + 0x88) + 0x18),param_2,(float *)(iVar1 + 0x90));
  dVar3 = 0.01745329238474369;
  dVar2 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x48),
                             (*(float *)(*(int *)(iVar1 + 0x84) + 0x18) - *(float *)(param_1 + 0x18)
                             ) * DAT_00859dcc * 0.017453292);
  *(float *)(*(int *)(iVar1 + 0x84) + 0x48) = (float)dVar2;
  dVar2 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x48),
                             (float)((double)((*(float *)(*(int *)(iVar1 + 0x88) + 0x18) -
                                              *(float *)(param_1 + 0x18)) * DAT_00859dcc) * dVar3));
  *(float *)(*(int *)(iVar1 + 0x88) + 0x48) = (float)dVar2;
  mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar1 + 0x84));
  mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar1 + 0x88));
  return;
}



//==== 0042faf8  ns=mobyupdate_helpers  size=0x148
// sig: undefined M713_0042faf8(void)
// callers(1): 0042fc90 mobyupdate_unsorted::UpdateMoby_713
// callees(2): 000f31a8 mobyfunc::UpdateMobyTransform; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M713_0042faf8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0x84);
  iVar3 = *(int *)(iVar1 + 0x88);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(iVar2 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(iVar1 + 0x94);
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *(float *)(*(int *)(iVar1 + 0x88) + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(iVar1 + 0x98);
  *(undefined4 *)(iVar1 + 0x90) = 0;
  dVar5 = 0.01745329238474369;
  dVar4 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x48),
                             (*(float *)(*(int *)(iVar1 + 0x84) + 0x18) - *(float *)(param_1 + 0x18)
                             ) * DAT_00859dcc * 0.017453292);
  *(float *)(*(int *)(iVar1 + 0x84) + 0x48) = (float)dVar4;
  dVar4 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x48),
                             (float)((double)((*(float *)(*(int *)(iVar1 + 0x88) + 0x18) -
                                              *(float *)(param_1 + 0x18)) * DAT_00859dcc) * dVar5));
  *(float *)(*(int *)(iVar1 + 0x88) + 0x48) = (float)dVar4;
  mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar1 + 0x84));
  mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar1 + 0x88));
  return;
}



//==== 0042fc90  ns=mobyupdate_unsorted  size=0x18ac
// sig: undefined UpdateMoby_713(MobyInstance * moby)
// callers(0): 
// callees(24): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047ea0 camera::camera5::Camera_SetMobyDrivenMode; 00047f48 camera::camera5::Camera_SetCurrentAccel; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007b310 help::Help_QueueMessage; 00085a10 hero::Hero_GetSpecialStateKind; 000a0c38 hero::Hero_Warp; 000aa368 hero::Hero_WalkToPos; 000aa3e0 hero::???_Hero_TransitionByFallSpeed; 000b72b0 hero::TransitionMovement; 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00109c30 mobyutil::OrganicDelt; 00112900 mobyutil::MB_GetOrientation; 00117390 mobyutil::MB_PathEvalSpline; 0012d0e8 partupd::SpawnPart_41; 0015d12c sound::PlayMobySound; 0042f968 mobyupdate_helpers::M713_0042f968; 0042faf8 mobyupdate_helpers::M713_0042faf8; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338
// strings: 00a0feec: 'None'

/* Moby 713 */

void mobyupdate_unsorted::UpdateMoby_713(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  f32 fVar10;
  Spline *pSVar11;
  uint uVar12;
  undefined4 uVar13;
  Cuboid *pCVar14;
  Cuboid *pCVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar19;
  MobyInstance *pMVar20;
  int iVar21;
  longlong lVar18;
  undefined4 *unused;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  byte bVar25;
  undefined8 in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  Vec4 local_f0;
  f32 local_e0;
  f32 local_dc;
  f32 local_d8;
  f32 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  longlong local_60;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  dVar28 = (double)(moby->pos).x;
  dVar29 = (double)(moby->pos).y;
  fVar37 = (moby->pos).z;
  pvVar9 = moby->pVar;
  uVar24 = ZEXT48(pvVar9);
  local_f0.w = (moby->pos).w;
  local_e0 = (moby->rotation).x;
  local_f0.z = -fVar37;
  unused = &DAT_0042fc40;
  local_dc = (moby->rotation).y;
  local_d8 = (moby->rotation).z;
  local_d4 = (moby->rotation).w;
  local_f0.x = (float)-dVar28;
  local_f0.y = (float)-dVar29;
  dVar30 = 0.0;
  if (DAT_010ccd00 != 0) {
    iVar21 = *(int *)((int)pvVar9 + 0x68);
    unused = (undefined4 *)Splines[iVar21]->cnt;
    if (0 < (int)unused) {
      iVar23 = 0;
      iVar22 = 0;
      dVar28 = 0.10000000149011612;
      do {
        uVar19 = (int)&((Spline *)(Splines[iVar21]->points + -1))->cnt + iVar23;
        local_d0 = *(undefined4 *)(uVar19 + 0x10);
        local_cc = *(undefined4 *)(uVar19 + 0x14);
        local_c8 = *(undefined4 *)(uVar19 + 0x18);
        local_c4 = *(undefined4 *)(uVar19 + 0x1c);
        partupd::SpawnPart_41
                  ((float)dVar28,&local_d0,moby,4,0x800000ff,(ulonglong)uVar19,0x7f,2,0xff);
        iVar21 = *(int *)((int)pvVar9 + 0x68);
        iVar22 = iVar22 + 1;
        iVar23 = iVar23 + 0x10;
        unused = (undefined4 *)Splines[iVar21]->cnt;
      } while (iVar22 < (int)unused);
      dVar28 = (double)(moby->pos).x;
      dVar29 = (double)(moby->pos).y;
      fVar37 = (moby->pos).z;
    }
  }
  pCVar14 = Cuboids;
  pMVar20 = MobyInstance;
  bVar1 = moby->state;
  bVar25 = (bVar1 == 0) << 1;
  if (bVar1 < 9) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        moby->updateDistance = -1;
        moby->setByGroup = '\x01';
        pCVar14 = Cuboids;
        iVar21 = *(int *)((int)pvVar9 + 100);
        (moby->pos).x = Cuboids[iVar21].pos.x;
        (moby->pos).y = pCVar14[iVar21].pos.y;
        fVar37 = pCVar14[iVar21].pos.z;
        (moby->pos).w = pCVar14[iVar21].pos.w;
        moby->state = '\x01';
        (moby->pos).z = fVar37 - 6.0;
        pMVar20 = mobyfunc::CreateMoby(TELEPORT_TUBE_0421);
        *(MobyInstance **)((int)pvVar9 + 0x84) = pMVar20;
        pMVar20->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x84) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar9 + 0x84) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar9 + 0x84) + 0x34) = moby->modeBits;
        iVar21 = *(int *)((int)pvVar9 + 0x84);
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = *(int *)((int)pvVar9 + 0x84);
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        pMVar20 = mobyfunc::CreateMoby(TELEPORT_TUBE_0422);
        *(MobyInstance **)((int)pvVar9 + 0x88) = pMVar20;
        pMVar20->drawDistance = 0x40;
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x88) + 0x31) = 1;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(undefined8 *)(*(int *)((int)pvVar9 + 0x88) + 0x38) = *(undefined8 *)&moby->color;
        auVar32 = ZEXT416(0xffffffff);
        auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(MobyModeBit *)(*(int *)((int)pvVar9 + 0x88) + 0x34) = moby->modeBits;
        iVar21 = *(int *)((int)pvVar9 + 0x88);
        auVar32 = ZEXT416(0xffffffff);
        auVar36 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = *(int *)((int)pvVar9 + 0x88);
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
        *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
        auVar32 = loadVectorLeftIndexed(4,0x42fc40);
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff418,0x720000);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        pSVar11 = Splines[*(int *)((int)pvVar9 + 0x68)];
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar34 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar11));
        auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar34 = vectorConvertFromSignedFixedPointWord(auVar34,0);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar32);
        auVar33 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar34 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xb4,
                            uVar24);
        *(undefined4 *)((int)pvVar9 + 0xb4U & 0xfffffffc) = uVar13;
        auVar32 = loadVectorLeftIndexed(0xc,0x42fc40);
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar11));
        auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar36,auVar34);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xb0,
                            uVar24);
        *(undefined4 *)((int)pvVar9 + 0xb0U & 0xfffffffc) = uVar13;
        mobyupdate_helpers::M713_0042faf8(lVar17);
      }
      else if (bVar1 < 2) {
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          auVar32 = loadVectorLeftIndexed(0x10,0x42fc40);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                               ,auVar33);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x80,
                              uVar24);
          *(undefined4 *)((int)pvVar9 + 0x80U & 0xfffffffc) = uVar13;
          moby->state = '\x02';
        }
      }
      else if (bVar1 < 3) {
        iVar21 = *(int *)((int)pvVar9 + 0x70);
        fVar3 = MobyInstance[iVar21].transform.v0.y;
        fVar4 = MobyInstance[iVar21].transform.v0.x;
        fVar5 = MobyInstance[iVar21].transform.v0.z;
        dVar27 = (double)(mobyutil::g_FrameTime * 5.0);
        fVar6 = MobyInstance[iVar21].pos.x;
        fVar7 = MobyInstance[iVar21].pos.y;
        dVar29 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar37 = (float)(-dVar27 / dVar29);
        dVar28 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        dVar31 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        dVar26 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        MobyInstance[iVar21].pos.z = (float)((double)MobyInstance[iVar21].pos.z + dVar28);
        pMVar20[iVar21].pos.y = (float)((double)fVar7 + dVar31);
        pMVar20[iVar21].pos.x = (float)((double)fVar6 + dVar26);
        pMVar20 = MobyInstance;
        iVar21 = *(int *)((int)pvVar9 + 0x74);
        fVar3 = MobyInstance[iVar21].transform.v0.y;
        fVar4 = MobyInstance[iVar21].transform.v0.x;
        fVar5 = MobyInstance[iVar21].transform.v0.z;
        fVar6 = MobyInstance[iVar21].pos.x;
        fVar7 = MobyInstance[iVar21].pos.y;
        dVar29 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar37 = (float)(dVar27 / dVar29);
        dVar28 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        dVar31 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        dVar26 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        MobyInstance[iVar21].pos.z = (float)((double)MobyInstance[iVar21].pos.z + dVar28);
        pMVar20[iVar21].pos.y = (float)((double)fVar7 + dVar31);
        pMVar20[iVar21].pos.x = (float)((double)fVar6 + dVar26);
        pMVar20 = MobyInstance;
        iVar21 = *(int *)((int)pvVar9 + 0x78);
        fVar3 = MobyInstance[iVar21].transform.v0.y;
        fVar4 = MobyInstance[iVar21].transform.v0.x;
        fVar5 = MobyInstance[iVar21].transform.v0.z;
        fVar6 = MobyInstance[iVar21].pos.x;
        fVar7 = MobyInstance[iVar21].pos.y;
        dVar29 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar37 = (float)(-dVar27 / dVar29);
        dVar28 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        dVar31 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        dVar26 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        MobyInstance[iVar21].pos.z = (float)((double)MobyInstance[iVar21].pos.z + dVar28);
        pMVar20[iVar21].pos.y = (float)((double)fVar7 + dVar31);
        pMVar20[iVar21].pos.x = (float)((double)fVar6 + dVar26);
        pMVar20 = MobyInstance;
        iVar21 = *(int *)((int)pvVar9 + 0x7c);
        fVar3 = MobyInstance[iVar21].transform.v0.y;
        fVar4 = MobyInstance[iVar21].transform.v0.x;
        fVar5 = MobyInstance[iVar21].transform.v0.z;
        fVar6 = MobyInstance[iVar21].pos.x;
        fVar7 = MobyInstance[iVar21].pos.y;
        dVar29 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar37 = (float)(dVar27 / dVar29);
        dVar28 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        dVar27 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar27 = (double)(fVar3 * fVar37);
        }
        dVar31 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar31 = (double)(fVar4 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar27 = (double)(fVar3 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar31 = (double)(fVar4 * fVar37);
        }
        MobyInstance[iVar21].pos.z = (float)((double)MobyInstance[iVar21].pos.z + dVar28);
        pMVar20[iVar21].pos.y = (float)((double)fVar7 + dVar27);
        pMVar20[iVar21].pos.x = (float)((double)fVar6 + dVar31);
        mobyfunc::UpdateMobyTransform(MobyInstance + *(int *)((int)pvVar9 + 0x70));
        mobyfunc::UpdateMobyTransform(MobyInstance + *(int *)((int)pvVar9 + 0x74));
        mobyfunc::UpdateMobyTransform(MobyInstance + *(int *)((int)pvVar9 + 0x78));
        mobyfunc::UpdateMobyTransform(MobyInstance + *(int *)((int)pvVar9 + 0x7c));
        iVar21 = fastfunc::FastDecTimerS32(uVar24 + 0x80);
        if (iVar21 != 0) {
          moby->state = '\x03';
          sound::PlayMobySound(1,0,moby);
        }
      }
      else {
        fVar37 = mobyutil::OrganicDelt
                           (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z,DAT_00859dc4 * DAT_0071f418,
                            DAT_00859dc4 * DAT_0071f418,DAT_00859dc0 * mobyutil::g_FrameTime,
                            &(moby->pos).z,(int)(Cuboids + *(int *)((int)pvVar9 + 0x60)),
                            (float *)((int)pvVar9 + 0x9c));
        mobyupdate_helpers::M713_0042faf8((double)fVar37,lVar17);
        if (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z - 0.0001 <= (moby->pos).z) {
          moby->state = '\x04';
          sound::PlayMobySound(0,0,moby);
        }
      }
    }
    else if (bVar1 < 6) {
      if (bVar1 < 5) {
        dVar28 = 2.0;
        *(undefined4 *)((int)pvVar9 + 0x94) = 0x40000000;
        *(undefined4 *)((int)pvVar9 + 0x98) = 0xc0800000;
        mobyupdate_helpers::M713_0042f968(lVar17);
        fVar37 = (moby->pos).z;
        if ((ABS((float)((double)(*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) - dVar28
                        )) < 0.0001) &&
           (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 4.0) < 0.0001)) {
          moby->state = '\x05';
        }
      }
      else {
        cVar2 = moby->setByGroup;
        if (cVar2 == '\0') {
          iVar21 = *(int *)((int)pvVar9 + 100);
          fVar3 = Cuboids[iVar21].pos.y;
          fVar4 = Cuboids[iVar21].pos.x;
          fVar5 = g_heroPosition.y - fVar3;
          fVar6 = g_heroPosition.x - fVar4;
          if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 16.0) {
            (moby->pos).x = fVar4;
            (moby->pos).y = fVar3;
            fVar37 = pCVar14[iVar21].pos.z;
            (moby->pos).w = pCVar14[iVar21].pos.w;
            (moby->pos).z = fVar37 - 6.0;
            *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
            *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
            mobyupdate_helpers::M713_0042faf8(lVar17);
            moby->state = '\x03';
            moby->setByGroup = '\x01';
            sound::PlayMobySound(1,0,moby);
            goto LAB_00431480;
          }
        }
        if (cVar2 == '\x01') {
          iVar21 = *(int *)((int)pvVar9 + 0x60);
          fVar3 = Cuboids[iVar21].pos.y;
          fVar4 = Cuboids[iVar21].pos.x;
          fVar5 = g_heroPosition.y - fVar3;
          fVar6 = g_heroPosition.x - fVar4;
          if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 16.0) {
            (moby->pos).x = fVar4;
            (moby->pos).y = fVar3;
            fVar37 = pCVar14[iVar21].pos.z;
            (moby->pos).w = pCVar14[iVar21].pos.w;
            (moby->pos).z = fVar37 - 6.0;
            *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
            *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
            mobyupdate_helpers::M713_0042faf8(lVar17);
            moby->state = '\x03';
            moby->setByGroup = '\0';
            sound::PlayMobySound(1,0,moby);
            goto LAB_00431480;
          }
        }
        if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) && (g_heroType == '\0')) {
          dVar27 = (double)(fVar37 + 2.0);
          if (cVar2 != '\0') {
            iVar21 = Splines[*(int *)((int)pvVar9 + 0x68)]->cnt;
            *(undefined4 *)((int)pvVar9 + 0xa4) = 0;
            pCVar14 = Cuboids;
            pSVar11 = Splines[*(int *)((int)pvVar9 + 0x68)];
            *(int *)((int)pvVar9 + 0xa0) = iVar21 + -1;
            dVar31 = (double)pCVar14[*(int *)((int)pvVar9 + 100)].rot.z;
            lVar18 = fastfunc::FastDoubleToInt(dVar30);
            iVar21 = (int)(lVar18 << 4);
            local_c0 = *(float *)((int)&pSVar11->points[0].x + iVar21);
            local_bc = *(float *)((int)&pSVar11->points[0].y + iVar21);
            local_b8 = *(float *)((int)&pSVar11->points[0].z + iVar21);
            local_b4 = *(undefined4 *)((int)&pSVar11->points[0].w + iVar21);
            local_a4 = 0;
            local_a8 = 0.0;
            local_ac = 0.0;
            local_b0 = 0.0;
            dVar30 = (double)FUN_005e8338((double)(float)(dVar28 - (double)local_c0),
                                          (double)(float)(dVar29 - (double)local_bc));
            local_a8 = (float)dVar30;
            dVar28 = (double)FUN_005e8338((double)SQRT((float)((double)local_c0 - dVar28) *
                                                       (float)((double)local_c0 - dVar28) +
                                                       (float)((double)local_bc - dVar29) *
                                                       (float)((double)local_bc - dVar29)),
                                          (double)(float)(dVar27 - (double)local_b8));
          }
          else {
            iVar21 = *(int *)((int)pvVar9 + 0x68);
            auVar32 = ZEXT416(1);
            *(undefined4 *)((int)pvVar9 + 0xa0) = 0;
            auVar33 = loadVectorLeftIndexed(in_LR,ZEXT48(Splines[iVar21]));
            auVar32 = vectorSubtractUnsignedWordModulo
                                (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60);
            local_60 = (longlong)(Splines[iVar21]->cnt + -1);
            auVar32 = vectorConvertFromSignedFixedPointWord(auVar32,0);
            iVar22 = *(int *)((int)pvVar9 + 0x60);
            auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar13 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                                uVar24);
            *(undefined4 *)((int)pvVar9 + 0xa4U & 0xfffffffc) = uVar13;
            pSVar11 = Splines[iVar21];
            dVar31 = (double)Cuboids[iVar22].rot.z;
            lVar18 = fastfunc::FastDoubleToInt((double)local_60);
            iVar21 = (int)(lVar18 << 4);
            local_c0 = *(float *)((int)&pSVar11->points[0].x + iVar21);
            local_bc = *(float *)((int)&pSVar11->points[0].y + iVar21);
            local_b8 = *(float *)((int)&pSVar11->points[0].z + iVar21);
            local_b4 = *(undefined4 *)((int)&pSVar11->points[0].w + iVar21);
            local_a4 = 0;
            local_a8 = 0.0;
            local_ac = 0.0;
            local_b0 = 0.0;
            dVar30 = (double)FUN_005e8338((double)(float)(dVar28 - (double)local_c0),
                                          (double)(float)(dVar29 - (double)local_bc));
            local_a8 = (float)dVar30;
            dVar28 = (double)FUN_005e8338((double)SQRT((float)((double)local_c0 - dVar28) *
                                                       (float)((double)local_c0 - dVar28) +
                                                       (float)((double)local_bc - dVar29) *
                                                       (float)((double)local_bc - dVar29)),
                                          (double)(float)(dVar27 - (double)local_b8));
          }
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          moby->state = '\x06';
          auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          local_ac = (float)-dVar28;
          auVar32 = loadVectorLeftIndexed(0x28,0x42fc40);
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                               ,auVar33);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xac,
                              uVar24);
          *(undefined4 *)((int)pvVar9 + 0xacU & 0xfffffffc) = uVar13;
          hero::Hero_WalkToPos((float)dVar31,&(moby->pos).x,0xac,0);
          local_60 = (longlong)(int)(animationSpeed * 240.5);
          camera::SetCameraPosition(0x951500,0x951510,3,(int)(animationSpeed * 240.5),0);
          camera::camera5::Camera_SetCurrentAccel
                    (DAT_00859dd0,DAT_00859dd4,DAT_010ccd04,DAT_00859dd8,DAT_00859ddc,DAT_010ccd08);
          camera::camera5::Camera_SetMobyDrivenTargetPos(&local_c0);
          camera::camera5::Camera_SetMobyDrivenTargetRot(&local_b0);
        }
      }
    }
    else if (bVar1 < 7) {
      iVar21 = hero::Hero_GetSpecialStateKind();
      if (iVar21 == 2) {
        moby->state = '\a';
        sound::PlayMobySound(2,0,moby);
        hero::TransitionMovement(0x72,0);
      }
      else if (iVar21 == 0) {
        camera::camera5::Camera_DeactivateMobyDrivenCam(2);
        moby->state = '\r';
      }
      else {
        iVar21 = fastfunc::FastDecTimerS32(uVar24 + 0xac);
        if (iVar21 != 0) {
          camera::camera5::Camera_DeactivateMobyDrivenCam(2);
          moby->state = '\r';
          hero::____Hero_TransitionByFallSpeed();
        }
      }
    }
    else if (bVar1 < 8) {
      *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
      mobyupdate_helpers::M713_0042f968(lVar17);
      fVar37 = (moby->pos).z;
      if ((ABS((*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) + 1.0) < 0.01) &&
         (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 1.0) < 0.01)) {
        moby->state = '\b';
      }
    }
    else {
      dVar28 = 6.0;
      fVar37 = mobyutil::OrganicDelt
                         (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z - 6.0,
                          DAT_00859dc4 * DAT_0071f418,DAT_00859dc4 * DAT_0071f418,
                          DAT_00859dc0 * mobyutil::g_FrameTime,&(moby->pos).z,
                          (int)(Cuboids + *(int *)((int)pvVar9 + 0x60)),
                          (float *)((int)pvVar9 + 0x9c));
      mobyupdate_helpers::M713_0042faf8((double)fVar37,lVar17);
      if ((moby->pos).z < Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z - 5.999) {
        if (moby->setByGroup == '\0') {
          moby->setByGroup = '\x01';
          pCVar14 = Cuboids;
          iVar21 = *(int *)((int)pvVar9 + 100);
          (moby->pos).x = Cuboids[iVar21].pos.x;
          (moby->pos).y = pCVar14[iVar21].pos.y;
          fVar8 = pCVar14[iVar21].pos.z;
          (moby->pos).z = fVar8;
          pCVar15 = Cuboids;
          iVar22 = *(int *)((int)pvVar9 + 100);
          (moby->pos).w = pCVar14[iVar21].pos.w;
          iVar21 = *(int *)((int)pvVar9 + 0x60);
          local_90 = pCVar15[iVar22].rot.x;
          local_8c = pCVar15[iVar22].rot.y;
          local_88 = pCVar15[iVar22].rot.z;
          local_84 = pCVar15[iVar22].rot.w;
          fVar37 = pCVar15[iVar22].pos.x;
          fVar3 = pCVar15[iVar21].pos.x;
          fVar4 = pCVar15[iVar22].pos.y;
          fVar5 = pCVar15[iVar21].pos.y;
          fVar6 = pCVar15[iVar22].pos.z;
          fVar7 = pCVar15[iVar21].pos.z;
        }
        else {
          moby->setByGroup = '\0';
          pCVar14 = Cuboids;
          iVar21 = *(int *)((int)pvVar9 + 0x60);
          (moby->pos).x = Cuboids[iVar21].pos.x;
          (moby->pos).y = pCVar14[iVar21].pos.y;
          fVar8 = pCVar14[iVar21].pos.z;
          (moby->pos).z = fVar8;
          pCVar15 = Cuboids;
          iVar22 = *(int *)((int)pvVar9 + 0x60);
          (moby->pos).w = pCVar14[iVar21].pos.w;
          iVar21 = *(int *)((int)pvVar9 + 100);
          local_90 = pCVar15[iVar22].rot.x;
          local_8c = pCVar15[iVar22].rot.y;
          local_88 = pCVar15[iVar22].rot.z;
          local_84 = pCVar15[iVar22].rot.w;
          fVar37 = pCVar15[iVar22].pos.x;
          fVar3 = pCVar15[iVar21].pos.x;
          fVar4 = pCVar15[iVar22].pos.y;
          fVar5 = pCVar15[iVar21].pos.y;
          fVar6 = pCVar15[iVar22].pos.z;
          fVar7 = pCVar15[iVar21].pos.z;
        }
        (moby->pos).z = (float)((double)fVar8 - dVar28);
        local_a0 = g_heroPosition.x + (fVar37 - fVar3);
        local_9c = g_heroPosition.y + (fVar4 - fVar5);
        local_98 = g_heroPosition.z + (fVar6 - fVar7);
        local_94 = g_heroPosition.w;
        hero::Hero_Warp(&local_a0,&local_90,0x72,0);
        *(float *)((int)pvVar9 + 0x9c) = -*(float *)((int)pvVar9 + 0x9c);
        moby->state = '\t';
        local_60 = (longlong)(int)(animationSpeed * 180.5);
        camera::camera5::Camera_SetMobyDrivenMode(2,(int)(animationSpeed * 180.5));
      }
    }
    goto LAB_00431480;
  }
  if (0xd < bVar1) {
    if (bVar1 < 0x10) {
      if (bVar1 < 0xf) {
        pMVar20 = mobyfunc::CreateMoby(TELEPORT_TUBE_0421);
        *(MobyInstance **)((int)pvVar9 + 0x84) = pMVar20;
        pMVar20->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x84) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar9 + 0x84) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar9 + 0x84) + 0x34) = moby->modeBits;
        iVar21 = *(int *)((int)pvVar9 + 0x84);
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = *(int *)((int)pvVar9 + 0x84);
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        pMVar20 = mobyfunc::CreateMoby(TELEPORT_TUBE_0422);
        *(MobyInstance **)((int)pvVar9 + 0x88) = pMVar20;
        pMVar20->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x88) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar9 + 0x88) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar9 + 0x88) + 0x34) = moby->modeBits;
        iVar21 = *(int *)((int)pvVar9 + 0x88);
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = *(int *)((int)pvVar9 + 0x88);
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        moby->state = '\x0f';
      }
      else {
        *(undefined4 *)((int)pvVar9 + 0x94) = DAT_010cccec;
        *(undefined4 *)((int)pvVar9 + 0x98) = DAT_010cccf0;
        mobyupdate_helpers::M713_0042f968(lVar17);
        if (DAT_010cccfc != 0) {
          moby->state = '\x10';
        }
      }
    }
    else if (bVar1 < 0x11) {
      dVar28 = 2.0;
      *(undefined4 *)((int)pvVar9 + 0x94) = 0x40000000;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0xc0800000;
      mobyupdate_helpers::M713_0042f968(lVar17);
      if (DAT_010cccfc == 0) {
        moby->state = '\x0f';
      }
      else {
        fVar37 = (moby->pos).z;
        if ((ABS((float)((double)(*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) - dVar28
                        )) < 0.01) &&
           (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 4.0) < 0.01)) {
          moby->state = '\x11';
        }
      }
    }
    else if (bVar1 < 0x12) {
      *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
      mobyupdate_helpers::M713_0042f968(lVar17);
      if (DAT_010cccfc == 0) {
        moby->state = '\x0f';
      }
      else {
        fVar37 = (moby->pos).z;
        if ((ABS((*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) + 1.0) < 0.01) &&
           (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 1.0) < 0.01)) {
          moby->state = '\x10';
        }
      }
    }
    goto LAB_00431480;
  }
  if (10 < bVar1) {
    if (bVar1 < 0xc) {
      dVar28 = 2.0;
      *(undefined4 *)((int)pvVar9 + 0x94) = 0x40000000;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0xc0800000;
      mobyupdate_helpers::M713_0042f968(lVar17);
      fVar37 = (moby->pos).z;
      if ((ABS((float)((double)(*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) - dVar28))
           < 0.01) && (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 4.0) < 0.01)
         ) {
        iVar21 = (int)((float)(longlong)(animationSpeed * 3600.5) * 60.0);
        local_60 = (longlong)iVar21;
        if ((iVar21 < (int)((int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)
                                 ) + (uint)(ushort)CHAR_ARRAY_00a0feec._74_2_ * -600)) &&
           ((CHAR_ARRAY_00a1000c._580_4_ & 1 << (Level & 0x3f)) == 0)) {
          help::Help_QueueMessage(STR_PRESS_THE_SELECT_BUTTON_0x07DD,0x48);
        }
        moby->state = '\r';
        camera::camera5::Camera_DeactivateMobyDrivenCam(2);
        hero::TransitionMovement(0,1);
      }
    }
    else if (bVar1 < 0xd) {
      fVar37 = mobyutil::g_FrameTime * 4.0 + fVar37;
      (moby->pos).z = fVar37;
      if (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z <= fVar37) {
        moby->state = '\x05';
      }
    }
    else if (g_standingOnMoby != moby) {
      moby->state = '\x05';
    }
    goto LAB_00431480;
  }
  if (9 < bVar1) {
    fVar37 = mobyutil::OrganicDelt
                       (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z,DAT_00859dc4 * DAT_0071f418,
                        DAT_00859dc4 * DAT_0071f418,DAT_00859dc0 * mobyutil::g_FrameTime,
                        &(moby->pos).z,(int)(Cuboids + *(int *)((int)pvVar9 + 0x60)),
                        (float *)((int)pvVar9 + 0x9c));
    mobyupdate_helpers::M713_0042faf8((double)fVar37,lVar17);
    fVar10 = (moby->pos).z;
    uVar19 = (int)fVar10 >> 0x1f;
    fVar37 = Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z;
    uVar12 = (int)fVar37 >> 0x1f;
    if ((int)((uVar12 >> 1 ^ (uint)fVar37) - uVar12) <= (int)((uVar19 >> 1 ^ (uint)fVar10) - uVar19)
       ) {
      moby->state = '\v';
      sound::PlayMobySound(0,0,moby);
    }
    goto LAB_00431480;
  }
  local_60 = (longlong)*(int *)((int)pvVar9 + 0xa0);
  mobyutil::OrganicDelt
            ((float)local_60,*(float *)((int)pvVar9 + 0xb4),*(float *)((int)pvVar9 + 0xb4),
             *(float *)((int)pvVar9 + 0xb0),(float *)((int)pvVar9 + 0xa4),(int)unused,
             (float *)((int)pvVar9 + 0xa8));
  auVar32 = loadVectorLeftIndexed(0xa0,uVar24);
  auVar33 = loadVectorRightIndexed(0xb0,uVar24);
  auVar32 = vectorConvertFromSignedFixedPointWord(auVar32 | auVar33,0);
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  if (*(int *)((int)pvVar9 + 0xa0) == 0) {
LAB_00430e68:
    if (*(int *)((int)pvVar9 + 0xa0) == 0) {
      auVar33 = loadVectorLeftIndexed(0xa4,uVar24);
      auVar34 = loadVectorRightIndexed(0xb4,uVar24);
      auVar33 = (auVar33 | auVar34) >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanFloatingPoint
                (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32);
      if ((bool)(bVar25 >> 1 & 1)) goto LAB_00430e90;
    }
  }
  else {
    auVar33 = loadVectorLeftIndexed(0xa4,uVar24);
    auVar34 = loadVectorRightIndexed(0xb4,uVar24);
    auVar33 = (auVar33 | auVar34) >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32);
    if ((bool)(bVar25 >> 1 & 1)) goto LAB_00430e68;
LAB_00430e90:
    moby->state = '\n';
  }
  mobyutil::MB_PathEvalSpline
            ((double)*(float *)((int)pvVar9 + 0xa4),Splines[*(int *)((int)pvVar9 + 0x68)],
             *(int *)((int)pvVar9 + 0x68) * 4,0,uVar16 - 0x70,uVar16 - 0x80,0);
  dVar27 = (double)(moby->pos).x;
  dVar30 = (double)(moby->pos).y;
  dVar28 = (double)(moby->pos).z;
  local_74 = 0;
  local_78 = 0.0;
  dVar29 = (double)(float)(dVar28 + 8.0);
  local_7c = 0.0;
  local_80 = 0;
  dVar28 = (double)FUN_005e8338((double)(float)(dVar27 - (double)local_70),
                                (double)(float)(dVar30 - (double)local_6c),dVar28,0x4020000000000000
                               );
  local_78 = (float)dVar28;
  dVar28 = (double)FUN_005e8338((double)SQRT((float)((double)local_70 - dVar27) *
                                             (float)((double)local_70 - dVar27) +
                                             (float)((double)local_6c - dVar30) *
                                             (float)((double)local_6c - dVar30)),
                                (double)(float)(dVar29 - (double)local_68));
  local_7c = (float)-dVar28;
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar16 - 0x70));
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar16 - 0x80));
LAB_00431480:
  local_f0.y = local_f0.y + (moby->pos).y;
  local_f0.x = local_f0.x + (moby->pos).x;
  local_f0.z = local_f0.z + (moby->pos).z;
  if (4.0 < SQRT(local_f0.z * local_f0.z + local_f0.x * local_f0.x + local_f0.y * local_f0.y)) {
    local_f0.w = 0.0;
    local_f0.z = 0.0;
    local_f0.y = 0.0;
    local_f0.x = 0.0;
  }
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x20),&local_f0,uVar16 - 0xe0,lVar17 + 0x40);
  return;
}



