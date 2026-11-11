//==== 00470690  ns=Global  size=0x4e4
// sig: undefined FUN_00470690(void)
// callers(5): 00211748 mobyupdate_unsorted::UpdateMoby_1229; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 00458b00 mobyupdate_unsorted::UpdateMoby_777; 004bcd20 mobyupdate_unsorted::UpdateMoby_931; 004ccd48 mobyupdate_helpers::M984_004ccd48
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
FUN_00470690(double param_1,float *param_2,f32 *param_3,float param_4,float param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  MobyInstance *pMVar17;
  longlong lVar15;
  longlong lVar16;
  longlong lVar18;
  float *pfVar19;
  float *pfVar21;
  longlong lVar20;
  ulonglong uVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  ulonglong in_f31;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar8 = (ulonglong *)lVar16;
  *puVar8 = uVar14;
  puVar8[0x24] = in_LR;
  puVar8[0x21] = in_f31;
  puVar8[0x20] = unaff_r31;
  *(undefined4 *)(puVar8 + 0x18) = param_6;
  uVar13 = 0xc0;
  *(undefined4 *)((int)puVar8 + 0xc4) = param_6;
  puVar8[0x1d] = unaff_r28;
  *(undefined4 *)(puVar8 + 0x19) = param_6;
  puVar8[0x1e] = unaff_r29;
  *(undefined4 *)((int)puVar8 + 0xcc) = param_6;
  puVar8[0x1f] = unaff_r30;
  puVar8[0x1c] = unaff_r27;
  auVar26 = *(undefined1 (*) [16])(puVar8 + 0x18);
  pMVar17 = mobyfunc::CreateMoby(ROCKET_0333);
  if (pMVar17 != (MobyInstance *)0x0) {
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar26,0);
    pMVar17->updateDistance = -1;
    pMVar17->drawDistance = 0x7e;
    pMVar17->enabled = '\x01';
    pMVar17->state = '\x01';
    pfVar19 = (float *)pMVar17->pVar;
    auVar26 = ZEXT416(0xffffffff);
    auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    pMVar17->scale = (float)((double)pMVar17->scale * param_1);
    (pMVar17->pos).x = *param_3;
    (pMVar17->pos).y = param_3[1];
    (pMVar17->pos).z = param_3[2];
    (pMVar17->pos).w = param_3[3];
    fVar5 = *param_2;
    fVar1 = *param_2;
    *pfVar19 = fVar1;
    fVar6 = param_2[1];
    fVar2 = param_2[1];
    pfVar19[1] = fVar2;
    pfVar19[2] = param_2[2];
    pfVar19[3] = param_2[3];
    auVar26 = loadVectorLeftIndexed(uVar13,0x470680);
    auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = vectorAddFloatingPoint
                        (auVar24,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
    auVar24 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar1 = ABS(fVar1);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
    auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
    auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x18,
                       ZEXT48(pfVar19));
    *(undefined4 *)((uint)(pfVar19 + 6) & 0xfffffffc) = uVar7;
    pfVar19[4] = param_4;
    pfVar19[5] = param_5;
    fVar3 = 0.0;
    pfVar19[10] = 0.0;
    fVar4 = (pMVar17->pos).y - g_heroPosition.y;
    fVar9 = (pMVar17->pos).x - g_heroPosition.x;
    fVar10 = (pMVar17->pos).z - g_heroPosition.z;
    pfVar19[0xc] = 0.0;
    pfVar19[0xd] = 0.0;
    fVar2 = ABS(fVar2);
    pfVar19[0xe] = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar4 * fVar4);
    *(float *)(puVar8 + 0xf) = fVar1 - fVar2;
    uVar22 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar6 = fVar1;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar4 = fVar3;
    if (0.0 < fVar6) {
      lVar15 = uVar14 - 0x100;
      lVar18 = uVar14 - 0x74;
      lVar20 = uVar14 - 100;
      lVar23 = 2;
      fVar2 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x15) = fVar2;
      *(float *)(puVar8 + 0x14) = fVar2;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)((int)puVar8 + 0x9c) = fVar2;
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar6;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar2;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar2 * fVar6;
      do {
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x8c) * fVar2 * fVar2;
        iVar11 = (int)lVar18;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = uVar14 - 0x74;
      pfVar21 = (float *)&DAT_007358e0;
      lVar23 = 4;
      lVar15 = lVar16;
      lVar18 = lVar20;
      do {
        fVar2 = *pfVar21;
        fVar6 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x9c) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      lVar15 = lVar16;
      fVar2 = fVar3;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar11 + 0x9c) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar4 = (fVar2 + 0.7853982) * fVar5 + fVar1;
    }
    (pMVar17->rotation).z = fVar4;
    fVar1 = pfVar19[2];
    fVar5 = ABS(pfVar19[2]);
    fVar2 = SQRT(*pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1]);
    fVar6 = ABS(fVar2);
    *(float *)(puVar8 + 0xe) = fVar2;
    *(float *)((int)puVar8 + 0x74) = fVar6 - fVar5;
    uVar22 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar1 >> 0x1d) & 4;
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar2 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    if (0.0 < fVar2) {
      lVar15 = uVar14 - 0x100;
      lVar18 = uVar14 - 0x94;
      lVar20 = uVar14 - 0x84;
      lVar23 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x11) = fVar2;
      *(float *)(puVar8 + 0x10) = fVar2;
      *(float *)((int)puVar8 + 0x84) = fVar2;
      *(float *)((int)puVar8 + 0x7c) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar2;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x6c) * fVar2 * fVar2;
        iVar11 = (int)lVar18;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = uVar14 - 0x94;
      pfVar19 = (float *)&DAT_007358e0;
      lVar23 = 4;
      lVar15 = lVar16;
      lVar18 = lVar20;
      do {
        fVar2 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar20;
        lVar16 = lVar16 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar11 + 0x7c) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar1 + fVar4;
    }
    (pMVar17->rotation).y = -fVar3;
    mobyfunc::UpdateMobyTransform(pMVar17);
  }
  return pMVar17;
}



//==== 00470bb0  ns=mobyupdate_unsorted  size=0xd60
// sig: undefined UpdateMoby_819(MobyInstance * moby)
// callers(0): 
// callees(13): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00105c08 mobyutil::CollDamageMobyDirect; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00121740 partupd::SpawnPart_4; 0015d12c sound::PlayMobySound; 0015d204 sound::sound_MobyPlay_oClass; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 819 */

void mobyupdate_unsorted::UpdateMoby_819(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *out;
  float fVar13;
  MobyInstance *pMVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar22;
  undefined8 uVar21;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar28;
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
  double dVar37;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar38;
  
  lVar28 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0x1d0;
  puVar16 = (ulonglong *)lVar20;
  *puVar16 = uVar18;
  puVar16[0x3c] = in_LR;
  puVar16[0x36] = in_f28;
  puVar16[0x37] = in_f29;
  puVar16[0x38] = in_f30;
  puVar16[0x39] = in_f31;
  puVar16[0x35] = unaff_r31;
  bVar3 = moby->state;
  puVar16[0x34] = unaff_r30;
  out = (float *)moby->pVar;
  puVar16[0x33] = unaff_r29;
  puVar16[0x32] = unaff_r28;
  puVar16[0x31] = unaff_r27;
  puVar16[0x30] = unaff_r26;
  puVar16[0x2f] = unaff_r25;
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      fVar5 = (moby->pos).y;
      *(f32 *)(puVar16 + 0xe) = (moby->pos).x;
      fVar6 = (moby->pos).z;
      *(f32 *)((int)puVar16 + 0x74) = fVar5;
      fVar5 = (moby->pos).w;
      fVar13 = out[5];
      *(f32 *)(puVar16 + 0xf) = fVar6;
      *(f32 *)((int)puVar16 + 0x7c) = fVar5;
      if (((fVar13 == 0.0) || (cVar4 = *(char *)((int)fVar13 + 0x20), cVar4 == -2)) || (cVar4 == -3)
         ) {
        moby->state = '\x02';
      }
      if (((g_heroType == '\x01') || (g_heroType == '\x02')) &&
         (pMVar14 = (MobyInstance *)out[5], pMVar14 == g_heroMobyPtr)) {
        fVar13 = out[1];
        fVar7 = *out;
        fVar8 = out[2];
        *(f32 *)(puVar16 + 0x12) = (pMVar14->pos).x;
        *(f32 *)((int)puVar16 + 0x94) = (pMVar14->pos).y;
        *(f32 *)(puVar16 + 0x13) = (pMVar14->pos).z;
        *(f32 *)((int)puVar16 + 0x9c) = (pMVar14->pos).w;
        dVar38 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar13 * fVar13);
        dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar18 - 0x140,0);
        fVar13 = (float)(dVar30 + 0.20000000298023224);
        dVar31 = (double)DAT_00969de4;
        bVar1 = g_heroType == '\x02';
        fVar7 = (moby->pos).x;
        fVar8 = (moby->pos).y;
        fVar9 = (moby->pos).z;
        fVar10 = (moby->rotation).z;
        *(float *)(puVar16 + 0x13) = fVar13;
        dVar30 = (double)DAT_00969de0;
        if (bVar1) {
          fVar13 = fVar13 + 2.0;
          *(float *)(puVar16 + 0x13) = fVar13;
        }
        fVar7 = *(float *)(puVar16 + 0x12) - fVar7;
        dVar32 = (double)fVar7;
        fVar8 = *(float *)((int)puVar16 + 0x94) - fVar8;
        dVar33 = (double)fVar8;
        fVar13 = fVar13 - fVar9;
        fVar9 = (float)(dVar32 * dVar32 + (double)(float)(dVar33 * dVar33));
        fVar2 = (float)(dVar38 * dVar38 -
                       (double)(float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31)));
        fVar11 = (float)(dVar32 * dVar30 + (double)(float)(dVar33 * dVar31)) * -2.0;
        fVar12 = fVar2 * 2.0;
        dVar37 = 0.0;
        fVar2 = SQRT(fVar11 * fVar11 - -((fVar13 * fVar13 + fVar9) * fVar2 * 4.0));
        dVar34 = (double)((fVar2 - fVar11) / fVar12);
        dVar36 = (double)((-fVar11 - fVar2) / fVar12);
        if ((dVar34 <= 0.0) || (dVar36 <= 0.0)) {
          dVar35 = -1.0;
          if (0.0 - dVar36 < 0.0) {
            dVar35 = dVar36;
          }
          if (0.0 - dVar34 < 0.0) {
            dVar35 = dVar34;
          }
        }
        else {
          dVar35 = dVar36;
          if (dVar36 - dVar34 < 0.0) {
            dVar35 = dVar34;
          }
        }
        dVar34 = dVar37;
        if (dVar35 <= 0.0) {
          *(float *)((int)puVar16 + 0xbc) = fVar7;
          *(float *)(puVar16 + 0x18) = fVar8;
          *(float *)((int)puVar16 + 0xc4) = (float)(ABS(dVar32) - ABS(dVar33));
          uVar26 = (ulonglong)(*(uint *)((int)puVar16 + 0xbc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0xc4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar16 + 0x18) >> 0x1d) & 4;
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar16 + 0xbc));
          if (*(float *)((int)puVar16 + 0xc4) - 0.0 < 0.0) {
            dVar30 = ABS(dVar33);
          }
          fVar8 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          dVar31 = ABS((double)*(float *)(puVar16 + 0x18));
          if (*(float *)((int)puVar16 + 0xc4) - 0.0 < 0.0) {
            dVar31 = ABS(dVar32);
          }
          if (0.0 < dVar30) {
            lVar19 = uVar18 - 0x1c0;
            lVar27 = uVar18 - 0xc0;
            lVar24 = uVar18 - 0xd0;
            lVar29 = 2;
            fVar2 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
            fVar12 = fVar2 * fVar2;
            *(float *)((int)puVar16 + 0x10c) = fVar2;
            *(float *)((int)puVar16 + 0x104) = fVar2;
            *(float *)(puVar16 + 0x21) = fVar2;
            *(float *)(puVar16 + 0x20) = fVar2;
            fVar2 = fVar12 * fVar12;
            *(float *)((int)puVar16 + 0x104) = *(float *)((int)puVar16 + 0x104) * fVar12;
            *(float *)(puVar16 + 0x21) = *(float *)(puVar16 + 0x21) * fVar2;
            *(float *)((int)puVar16 + 0x10c) = *(float *)((int)puVar16 + 0x10c) * fVar2 * fVar12;
            do {
              *(float *)((int)lVar19 + 0x100) = *(float *)((int)lVar19 + 0xf0) * fVar2 * fVar2;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar18 - 0xd0;
            pfVar25 = (float *)&DAT_007358e0;
            lVar19 = lVar20;
            lVar24 = lVar27;
            do {
              fVar2 = *pfVar25;
              fVar12 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar19 + 0x100) = *(float *)((int)lVar19 + 0x100) * fVar2;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar12;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar24 = 2;
            lVar19 = lVar20;
            dVar30 = dVar37;
            do {
              iVar22 = (int)lVar19;
              iVar17 = (int)lVar27;
              lVar19 = lVar19 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x100)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar34 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar8);
          }
          fVar9 = SQRT(fVar9);
          *(float *)((int)puVar16 + 0xb4) = fVar13;
          fVar8 = ABS(fVar9);
          *(float *)(puVar16 + 0x16) = fVar9;
          *(float *)(puVar16 + 0x17) = fVar8 - ABS(fVar13);
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x16) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar16 + 0x17) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0xb4) >> 0x1d) & 4;
          uVar26 = uVar23 << 2;
          fVar7 = ABS(*(float *)(puVar16 + 0x16));
          if (*(float *)(puVar16 + 0x17) - 0.0 < 0.0) {
            fVar7 = ABS(fVar13);
          }
          fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar26);
          fVar9 = ABS(*(float *)((int)puVar16 + 0xb4));
          if (*(float *)(puVar16 + 0x17) - 0.0 < 0.0) {
            fVar9 = fVar8;
          }
          fVar8 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (0.0 < fVar7) {
            lVar19 = uVar18 - 0x1c0;
            lVar24 = uVar18 - 0xf0;
            lVar27 = uVar18 - 0xe0;
            lVar29 = 2;
            fVar7 = (fVar9 - fVar7) / (fVar9 + fVar7);
            fVar9 = fVar7 * fVar7;
            *(float *)((int)puVar16 + 0xec) = fVar7;
            *(float *)((int)puVar16 + 0xe4) = fVar7;
            *(float *)(puVar16 + 0x1d) = fVar7;
            *(float *)(puVar16 + 0x1c) = fVar7;
            fVar7 = fVar9 * fVar9;
            *(float *)((int)puVar16 + 0xe4) = *(float *)((int)puVar16 + 0xe4) * fVar9;
            *(float *)(puVar16 + 0x1d) = *(float *)(puVar16 + 0x1d) * fVar7;
            *(float *)((int)puVar16 + 0xec) = *(float *)((int)puVar16 + 0xec) * fVar7 * fVar9;
            do {
              *(float *)((int)lVar19 + 0xe0) = *(float *)((int)lVar19 + 0xd0) * fVar7 * fVar7;
              iVar22 = (int)lVar24;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar18 - 0xf0;
            uVar26 = ZEXT48(&DAT_007358e0);
            lVar19 = lVar20;
            lVar24 = lVar27;
            do {
              pfVar25 = (float *)uVar26;
              fVar7 = pfVar25[1];
              uVar26 = uVar26 + 8;
              *(float *)((int)lVar19 + 0xe0) = *(float *)((int)lVar19 + 0xe0) * *pfVar25;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar19 = 2;
            do {
              iVar22 = (int)lVar20;
              iVar17 = (int)lVar27;
              lVar20 = lVar20 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar22 + 0xe0)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar13 + fVar8);
          }
        }
        else {
          fVar7 = (float)(dVar35 * dVar30 + dVar32);
          fVar8 = (float)(dVar35 * dVar31 + dVar33);
          *(float *)((int)puVar16 + 0xd4) = fVar7;
          *(float *)(puVar16 + 0x1b) = fVar8;
          *(float *)((int)puVar16 + 0xdc) = ABS(fVar7) - ABS(fVar8);
          uVar26 = (ulonglong)(*(uint *)((int)puVar16 + 0xd4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0xdc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar16 + 0x1b) >> 0x1d) & 4;
          fVar9 = ABS(*(float *)((int)puVar16 + 0xd4));
          if (*(float *)((int)puVar16 + 0xdc) - 0.0 < 0.0) {
            fVar9 = ABS(fVar8);
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
          fVar12 = ABS(*(float *)(puVar16 + 0x1b));
          if (*(float *)((int)puVar16 + 0xdc) - 0.0 < 0.0) {
            fVar12 = ABS(fVar7);
          }
          fVar11 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          if (0.0 < fVar9) {
            lVar19 = uVar18 - 0x1c0;
            lVar27 = uVar18 - 0x80;
            lVar24 = uVar18 - 0x90;
            lVar29 = 2;
            fVar9 = (fVar12 - fVar9) / (fVar12 + fVar9);
            fVar12 = fVar9 * fVar9;
            *(float *)((int)puVar16 + 0x14c) = fVar9;
            *(float *)((int)puVar16 + 0x144) = fVar9;
            *(float *)(puVar16 + 0x29) = fVar9;
            *(float *)(puVar16 + 0x28) = fVar9;
            fVar9 = fVar12 * fVar12;
            *(float *)((int)puVar16 + 0x144) = *(float *)((int)puVar16 + 0x144) * fVar12;
            *(float *)(puVar16 + 0x29) = *(float *)(puVar16 + 0x29) * fVar9;
            *(float *)((int)puVar16 + 0x14c) = *(float *)((int)puVar16 + 0x14c) * fVar9 * fVar12;
            do {
              *(float *)((int)lVar19 + 0x140) = *(float *)((int)lVar19 + 0x130) * fVar9 * fVar9;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar18 - 0x90;
            pfVar25 = (float *)&DAT_007358e0;
            lVar19 = lVar20;
            lVar24 = lVar27;
            do {
              fVar9 = *pfVar25;
              fVar12 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar19 + 0x140) = *(float *)((int)lVar19 + 0x140) * fVar9;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar12;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar24 = 2;
            lVar19 = lVar20;
            dVar30 = dVar37;
            do {
              iVar22 = (int)lVar19;
              iVar17 = (int)lVar27;
              lVar19 = lVar19 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x140)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar34 = (double)((float)(dVar30 + 0.7853981852531433) * fVar2 + fVar11);
          }
          *(float *)((int)puVar16 + 0xcc) = fVar13;
          fVar7 = SQRT(fVar7 * fVar7 + fVar8 * fVar8);
          fVar8 = ABS(fVar7);
          *(float *)(puVar16 + 0x19) = fVar7;
          *(float *)(puVar16 + 0x1a) = fVar8 - ABS(fVar13);
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x19) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar16 + 0x1a) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0xcc) >> 0x1d) & 4;
          uVar26 = uVar23 << 2;
          fVar7 = ABS(*(float *)(puVar16 + 0x19));
          if (*(float *)(puVar16 + 0x1a) - 0.0 < 0.0) {
            fVar7 = ABS(fVar13);
          }
          fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar26);
          fVar9 = ABS(*(float *)((int)puVar16 + 0xcc));
          if (*(float *)(puVar16 + 0x1a) - 0.0 < 0.0) {
            fVar9 = fVar8;
          }
          fVar8 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (0.0 < fVar7) {
            lVar19 = uVar18 - 0x1c0;
            lVar24 = uVar18 - 0xb0;
            lVar27 = uVar18 - 0xa0;
            lVar29 = 2;
            fVar7 = (fVar9 - fVar7) / (fVar9 + fVar7);
            fVar9 = fVar7 * fVar7;
            *(float *)((int)puVar16 + 300) = fVar7;
            *(float *)((int)puVar16 + 0x124) = fVar7;
            *(float *)(puVar16 + 0x25) = fVar7;
            *(float *)(puVar16 + 0x24) = fVar7;
            fVar7 = fVar9 * fVar9;
            *(float *)((int)puVar16 + 0x124) = *(float *)((int)puVar16 + 0x124) * fVar9;
            *(float *)(puVar16 + 0x25) = *(float *)(puVar16 + 0x25) * fVar7;
            *(float *)((int)puVar16 + 300) = *(float *)((int)puVar16 + 300) * fVar7 * fVar9;
            do {
              *(float *)((int)lVar19 + 0x120) = *(float *)((int)lVar19 + 0x110) * fVar7 * fVar7;
              iVar22 = (int)lVar24;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar18 - 0xb0;
            uVar26 = ZEXT48(&DAT_007358e0);
            lVar19 = lVar20;
            lVar24 = lVar27;
            do {
              pfVar25 = (float *)uVar26;
              fVar7 = pfVar25[1];
              uVar26 = uVar26 + 8;
              *(float *)((int)lVar19 + 0x120) = *(float *)((int)lVar19 + 0x120) * *pfVar25;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar19 = 2;
            do {
              iVar22 = (int)lVar20;
              iVar17 = (int)lVar27;
              lVar20 = lVar20 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar22 + 0x120)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar13 + fVar8);
          }
        }
        dVar37 = -dVar37;
        dVar32 = 6.2831854820251465;
        dVar31 = 3.1415927410125732;
        dVar30 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)fVar10,dVar34,(double)(DAT_0071f418 * 6.2831855),
                                    (double)(DAT_0071f418 * 3.1415927),
                                    (double)(mobyutil::g_FrameTime * 6.2831855),&DAT_00470b74,uVar26
                                    ,out + 10);
        (moby->rotation).z = (float)dVar30;
        dVar30 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,dVar37,
                                    (double)(float)((double)DAT_0071f418 * dVar32),
                                    (double)(float)((double)DAT_0071f418 * dVar31),
                                    (double)(float)((double)mobyutil::g_FrameTime * dVar32));
        (moby->rotation).y = (float)dVar30;
        dVar30 = (double)fastfunc::FastWrapRot
                                   ((moby->rotation).x,
                                    (float)((double)mobyutil::g_FrameTime * dVar32));
        (moby->rotation).x = (float)dVar30;
        mobyutil::MB_SphericalToVector((float)dVar38,(moby->rotation).z,-(moby->rotation).y,out);
      }
      lVar28 = lVar28 + 0x10;
      dVar31 = 0.0;
      *(undefined4 *)((int)puVar16 + 0x8c) = 0;
      *(undefined4 *)(puVar16 + 0x11) = 0;
      *(undefined4 *)((int)puVar16 + 0x84) = 0;
      *(undefined4 *)(puVar16 + 0x10) = 0;
      iVar22 = mobyutil::MB_randRange(0xf,0x16);
      puVar16[0x2c] = (longlong)iVar22;
      dVar30 = 0.5;
      puVar16[0x2c] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar16[0x2c] + 0.5));
      uVar15 = *(undefined4 *)((int)puVar16 + 0x164);
      uVar21 = mobyutil::MB_randRange(0x14,0x23);
      partupd::SpawnPart_4(lVar28,uVar18 - 0x150,0x6f00afff,0xff,uVar15,0x28,uVar21,1);
      iVar22 = mobyutil::MB_randRange(0x1e,0x3c);
      puVar16[0x2c] = (longlong)iVar22;
      puVar16[0x2c] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar16[0x2c] + dVar30));
      uVar15 = *(undefined4 *)((int)puVar16 + 0x164);
      uVar21 = mobyutil::MB_randRange(0x32,0x4b);
      partupd::SpawnPart_4(lVar28,uVar18 - 0x150,0x1fffffff,0x4f4f4f,uVar15,0x28,uVar21,0);
      fVar13 = (moby->pos).x;
      fVar7 = (moby->pos).y;
      fVar10 = fVar7 - g_heroPosition.y;
      fVar9 = fVar13 - g_heroPosition.x;
      fVar8 = (moby->pos).z;
      fVar2 = fVar8 - g_heroPosition.z;
      (moby->pos).x = fVar13 + *out;
      fVar13 = out[0xd];
      (moby->pos).y = fVar7 + out[1];
      dVar38 = (double)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar10 * fVar10);
      (moby->pos).z = fVar8 + out[2];
      if ((((fVar13 == 0.0) && (out[0xc] != 0.0)) && ((double)out[0xe] < dVar38)) && (dVar38 < 5.0))
      {
        sound::PlayMobySound(0,0,moby);
        out[0xd] = 1.4013e-45;
      }
      if (dVar38 < (double)out[0xe]) {
        out[0xc] = 1.4013e-45;
      }
      out[0xe] = (float)dVar38;
      iVar22 = collproc::CollLine(lVar28,uVar18 - 0x160,0x10,out[4],0);
      if ((iVar22 != 0) && (CollOutput.pMoby != (MobyInstance *)out[4])) {
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          fVar13 = *out;
          dVar38 = (double)(fVar13 * fVar13 + out[1] * out[1]);
          if ((double)(float)SQRT(dVar38) == dVar31) {
            *(float *)(puVar16 + 0x14) = fVar13;
            *(float *)((int)puVar16 + 0xa4) = out[1];
            *(float *)(puVar16 + 0x15) = out[2];
            fVar13 = out[3];
            *(undefined4 *)((int)puVar16 + 0xa4) = 0;
            *(undefined4 *)(puVar16 + 0x14) = 0;
          }
          else {
            dVar31 = 1.0 / SQRT(dVar38);
            dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar31) * dVar31 -
                                                     1.0) * (double)(float)(dVar30 * dVar31) +
                                    dVar31);
            dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar31) * dVar31 -
                                                     1.0) * (double)(float)(dVar30 * dVar31) +
                                    dVar31);
            fVar7 = (float)(-(double)(float)((double)(float)(dVar38 * dVar31) * dVar31 - 1.0) *
                            (double)(float)(dVar30 * dVar31) + dVar31);
            *(float *)(puVar16 + 0x14) = fVar13 * fVar7;
            *(float *)((int)puVar16 + 0xa4) = out[1] * fVar7;
            *(float *)(puVar16 + 0x15) = out[2];
            fVar13 = out[3];
          }
          *(float *)((int)puVar16 + 0xac) = fVar13;
          pMVar14 = CollOutput.pMoby;
          out[2] = 1.0;
          mobyutil::CollDamageMobyDirect
                    (1.0,pMVar14,moby,0x10003,0x10000,&CollOutput.ip.x,(float *)(puVar16 + 0x14));
        }
        moby->state = '\x02';
      }
      iVar22 = fastfunc::FastDecTimerS32(out + 6);
      if (iVar22 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar3 < 3) {
    if (Level == Orxon) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fd0000000000000,0,lVar28,lVar28 + 0x10,&DAT_00470b74,0xffffffffffffffff);
    }
    else {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fd0000000000000,0x402a000000000000,lVar28,lVar28 + 0x10,&DAT_00470b74,
                 0xffffffffffffffff);
    }
    sound::sound_MobyPlay_oClass(0,0,moby,0x99);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00471910  ns=mobyupdate_helpers  size=0x14
// sig: undefined M819_00471910(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M819_00471910(void)

{
  DAT_008778b8 = 0x10000;
  return;
}



//==== 00471930  ns=mobyupdate_helpers  size=0x224
// sig: undefined M819_00471930(void)
// callers(2): 0023ad28 mobyupdate_helpers::M1284_0023ad28; 0035ebb8 mobyupdate_helpers::M388_0035ebb8
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 00127ea8 partupd::SpawnPart_26

MobyInstance *
mobyupdate_helpers::M819_00471930
          (double param_1,double param_2,float param_3,f32 *param_4,float param_5,f32 *param_6,
          undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  MobyInstance *pMVar7;
  
  pMVar7 = mobyfunc::CreateMoby(ROCKET_0052);
  if (pMVar7 != (MobyInstance *)0x0) {
    pfVar5 = (float *)pMVar7->pVar;
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->state = '\0';
    pfVar5[8] = param_3;
    pfVar5[9] = param_5;
    (pMVar7->pos).x = *param_4;
    (pMVar7->pos).y = param_4[1];
    (pMVar7->pos).z = param_4[2];
    (pMVar7->pos).w = param_4[3];
    (pMVar7->rotation).x = *param_6;
    (pMVar7->rotation).y = param_6[1];
    (pMVar7->rotation).z = param_6[2];
    (pMVar7->rotation).w = param_6[3];
    pfVar5[10] = (float)param_8;
    pfVar5[0xb] = (float)param_1;
    pfVar5[0xc] = 0.0;
    pfVar5[0xd] = 0.0;
    pfVar5[0xe] = (float)param_2;
    if (*(short *)((int)param_3 + 0xa6) == 0x504) {
      iVar6 = *(int *)((int)param_3 + 0x78);
      fVar1 = *(float *)(iVar6 + 0xc0);
      fVar2 = *(float *)(iVar6 + 0xc4);
      fVar3 = *(float *)(iVar6 + 200);
      fVar4 = *(float *)(iVar6 + 0xcc);
    }
    else {
      iVar6 = *(int *)((int)param_3 + 0x78);
      fVar1 = *(float *)(iVar6 + 0x70);
      fVar2 = *(float *)(iVar6 + 0x74);
      fVar3 = *(float *)(iVar6 + 0x78);
      fVar4 = *(float *)(iVar6 + 0x7c);
    }
    *pfVar5 = fVar1;
    pfVar5[1] = fVar2;
    pfVar5[2] = fVar3;
    pfVar5[3] = fVar4;
    if (pMVar7->animationId != '\x01') {
      mobyutil::MB_SetAnimation(pMVar7,1,0,10);
      fVar1 = *pfVar5;
    }
    (pMVar7->pos).x = (pMVar7->pos).x + fVar1;
    (pMVar7->pos).y = (pMVar7->pos).y + pfVar5[1];
    (pMVar7->pos).z = (pMVar7->pos).z + pfVar5[2];
    fVar1 = pfVar5[9];
    if (fVar1 != 0.0) {
      pfVar5[4] = *(float *)((int)fVar1 + 0x10);
      pfVar5[5] = *(float *)((int)fVar1 + 0x14);
      pfVar5[6] = *(float *)((int)fVar1 + 0x18);
      pfVar5[7] = *(float *)((int)fVar1 + 0x1c);
    }
    pMVar7->scale = pMVar7->pClass->gScale;
    mobyfunc::UpdateMobyTransform(pMVar7);
    partupd::SpawnPart_26(0x411e848000000000,pMVar7,&DAT_00471928,0x60808080,param_8,0);
  }
  return pMVar7;
}



//==== 00471bd0  ns=mobyupdate_unsorted  size=0x13e8
// sig: undefined UpdateMoby_82(MobyInstance * moby)
// callers(0): 
// callees(17): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe610 mobyutil::MB_SphericalToVector; 0010675c mobyutil::MB_damage; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

/* Moby 82 */

void mobyupdate_unsorted::UpdateMoby_82(MobyInstance *moby)

{
  undefined1 uVar1;
  byte bVar2;
  f32 fVar3;
  f32 fVar4;
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
  MOBY_OCLASSES MVar15;
  MobyClass *pMVar16;
  float *out;
  ulonglong *puVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar22;
  longlong lVar21;
  ulonglong uVar23;
  float *pfVar25;
  longlong lVar24;
  uint unused;
  longlong lVar26;
  ulonglong unaff_r25;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f21;
  ulonglong in_f22;
  undefined8 uVar34;
  ulonglong in_f23;
  ulonglong in_f24;
  undefined8 uVar35;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  undefined8 uVar39;
  ulonglong in_f29;
  undefined8 uVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  double dVar43;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x280;
  puVar17 = (ulonglong *)lVar21;
  *puVar17 = uVar19;
  puVar17[0x52] = in_LR;
  puVar17[0x45] = in_f21;
  puVar17[0x46] = in_f22;
  puVar17[0x47] = in_f23;
  puVar17[0x48] = in_f24;
  puVar17[0x49] = in_f25;
  puVar17[0x4a] = in_f26;
  puVar17[0x4b] = in_f27;
  puVar17[0x4c] = in_f28;
  puVar17[0x4d] = in_f29;
  puVar17[0x4e] = in_f30;
  puVar17[0x4f] = in_f31;
  puVar17[0x44] = unaff_r31;
  fVar3 = (moby->pos).y;
  *(f32 *)(puVar17 + 0x18) = (moby->pos).x;
  fVar4 = (moby->pos).z;
  *(f32 *)((int)puVar17 + 0xc4) = fVar3;
  fVar3 = (moby->pos).w;
  pMVar16 = moby->pClass;
  *(f32 *)(puVar17 + 0x19) = fVar4;
  *(f32 *)((int)puVar17 + 0xcc) = fVar3;
  fVar5 = moby->scale;
  dVar42 = 0.10000000149011612;
  fVar6 = pMVar16->gScale;
  puVar17[0x43] = unaff_r30;
  out = (float *)moby->pVar;
  puVar17[0x42] = unaff_r29;
  puVar17[0x41] = unaff_r28;
  puVar17[0x40] = unaff_r27;
  puVar17[0x3f] = unaff_r26;
  puVar17[0x3e] = unaff_r25;
  moby->scale = (fVar6 - fVar5) * 0.1 + fVar5;
  iVar22 = mobyutil::MB_damage(lVar20,0xa30000,0);
  if (((iVar22 != 0) && (*(int *)(iVar22 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar22 + 0x20) + 0xa6) != 0x52)) {
    puVar17[0x12] = 1;
    puVar17[0x14] = 0;
    puVar17[0x15] = 1;
    puVar17[0x16] = 0xffffffffffffffff;
    puVar17[0x17] = 0;
    mobyutil::MB_genericExplosion(0,0,0,0,0,0x3ff0000000000000,0,lVar20,out,0,0,1,5,2,7);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  dVar43 = 0.0;
  *(undefined4 *)(puVar17 + 0x1e) = 0;
  *(undefined4 *)((int)puVar17 + 0xf4) = 0;
  *(undefined4 *)(puVar17 + 0x1f) = 0;
  *(undefined4 *)((int)puVar17 + 0xfc) = 0;
  dVar38 = -1.0;
  dVar41 = 1.0;
  dVar29 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
  *(float *)(puVar17 + 0x1e) = (float)dVar29;
  dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar41);
  *(float *)((int)puVar17 + 0xf4) = (float)dVar29;
  dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar41);
  *(float *)(puVar17 + 0x1f) = (float)dVar29;
  dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar42,0.2);
  fVar12 = mobyutil::g_FrameTime;
  fVar6 = *(float *)((int)puVar17 + 0xf4);
  fVar7 = *(float *)(puVar17 + 0x1e);
  fVar8 = *(float *)(puVar17 + 0x1f);
  dVar33 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  dVar38 = (double)mobyutil::g_FrameTime;
  fVar5 = (float)((double)(float)(dVar29 * dVar38) / dVar33);
  dVar29 = dVar43;
  if (dVar43 - dVar33 < 0.0) {
    dVar29 = (double)(fVar7 * fVar5);
  }
  dVar36 = dVar43;
  if (dVar43 - dVar33 < 0.0) {
    dVar36 = (double)(fVar6 * fVar5);
  }
  dVar30 = dVar43;
  if (dVar43 - dVar33 < 0.0) {
    dVar30 = (double)(fVar8 * fVar5);
  }
  if (dVar33 - dVar43 < 0.0) {
    dVar29 = (double)(fVar7 * fVar5);
  }
  if (dVar33 - dVar43 < 0.0) {
    dVar36 = (double)(fVar6 * fVar5);
  }
  if (dVar33 - dVar43 < 0.0) {
    dVar30 = (double)(fVar8 * fVar5);
  }
  *(float *)(puVar17 + 0x1e) = (float)dVar29;
  *(float *)((int)puVar17 + 0xf4) = (float)dVar36;
  *(float *)(puVar17 + 0x1f) = (float)dVar30;
  dVar42 = (double)mobyutil::MB_randRangeFloat((float)(dVar38 * dVar42),fVar12);
  fVar5 = *out;
  dVar29 = (double)SQRT(out[2] * out[2] + fVar5 * fVar5 + out[1] * out[1]);
  if (dVar29 == dVar43) {
    *(float *)(puVar17 + 0x1c) = fVar5;
    *(float *)((int)puVar17 + 0xe4) = out[1];
    *(float *)(puVar17 + 0x1d) = out[2];
    fVar5 = out[3];
    *(undefined4 *)(puVar17 + 0x1d) = 0;
    *(undefined4 *)((int)puVar17 + 0xe4) = 0;
    *(undefined4 *)(puVar17 + 0x1c) = 0;
    dVar42 = dVar43;
    dVar29 = dVar43;
    dVar38 = dVar43;
  }
  else {
    fVar6 = (float)(-dVar42 / dVar29);
    dVar38 = (double)(fVar5 * fVar6);
    *(float *)(puVar17 + 0x1c) = fVar5 * fVar6;
    dVar42 = (double)(out[1] * fVar6);
    *(float *)((int)puVar17 + 0xe4) = out[1] * fVar6;
    dVar29 = (double)(out[2] * fVar6);
    *(float *)(puVar17 + 0x1d) = out[2] * fVar6;
    fVar5 = out[3];
  }
  *(float *)((int)puVar17 + 0xec) = fVar5;
  *(float *)(puVar17 + 0x1e) = (float)((double)*(float *)(puVar17 + 0x1e) + dVar38);
  *(float *)((int)puVar17 + 0xf4) = (float)((double)*(float *)((int)puVar17 + 0xf4) + dVar42);
  *(float *)(puVar17 + 0x1f) = (float)((double)*(float *)(puVar17 + 0x1f) + dVar29);
  puVar17[0x3c] = (longlong)(int)(animationSpeed * 6.5);
  uVar40 = 0x40f3880000000000;
  uVar39 = 0x408f400000000000;
  partupd::SpawnPart_44
            (0x40f3880000000000,0x408f400000000000,dVar41,0xbf3a36e2e0000000,dVar43,lVar20 + 0x10,
             uVar19 - 400,*(undefined4 *)((int)puVar17 + 0x1e4),0x7f,&DAT_00b0b0b0,3);
  dVar36 = 0.3333333432674408;
  dVar33 = 60.5;
  uVar35 = 0xbf2a36e2e0000000;
  dVar38 = 0.019999999552965164;
  uVar34 = 0x40e3880000000000;
  dVar29 = 5.5;
  dVar42 = dVar43;
  do {
    dVar37 = (double)(float)(dVar42 + dVar36);
    dVar42 = (double)mobyutil::MB_randRangeFloat((float)dVar42,(float)(dVar42 + dVar36));
    fVar5 = *out;
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).z;
    dVar30 = (double)SQRT(out[2] * out[2] + fVar5 * fVar5 + out[1] * out[1]);
    if (dVar30 == dVar43) {
      *(float *)(puVar17 + 0x1c) = fVar5;
      *(float *)((int)puVar17 + 0xe4) = out[1];
      *(float *)(puVar17 + 0x1d) = out[2];
      fVar5 = out[3];
      dVar42 = dVar43;
      dVar30 = dVar43;
      dVar32 = dVar43;
    }
    else {
      fVar12 = (float)((double)(float)(dVar42 * (double)out[0xb]) / dVar30);
      dVar42 = (double)(fVar5 * fVar12);
      *(float *)(puVar17 + 0x1c) = fVar5 * fVar12;
      dVar30 = (double)(out[1] * fVar12);
      *(float *)((int)puVar17 + 0xe4) = out[1] * fVar12;
      dVar32 = (double)(out[2] * fVar12);
      *(float *)(puVar17 + 0x1d) = out[2] * fVar12;
      fVar5 = out[3];
    }
    dVar31 = (double)animationSpeed;
    *(float *)((int)puVar17 + 0xec) = fVar5;
    *(float *)(puVar17 + 0x1c) = (float)(dVar42 + (double)fVar6);
    *(float *)((int)puVar17 + 0xe4) = (float)(dVar30 + (double)fVar7);
    *(float *)(puVar17 + 0x1d) = (float)(dVar32 + (double)fVar8);
    puVar17[0x3c] = (longlong)(int)(dVar31 * dVar33);
    iVar22 = partupd::SpawnPart_44
                       (uVar40,uVar39,dVar41,uVar35,dVar43,uVar19 - 0x1a0,uVar19 - 400,
                        *(undefined4 *)((int)puVar17 + 0x1e4),0x7f,FUN_00606060,3);
    fVar5 = (moby->transform).v2.x;
    fVar6 = (moby->transform).v2.y;
    fVar7 = (moby->transform).v2.z;
    fVar8 = (moby->transform).v2.w;
    if (iVar22 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar22 + 3) = 0x44;
      *(undefined1 *)(iVar22 + 2) = uVar1;
    }
    *(float *)(puVar17 + 0x20) = (float)((double)fVar5 * dVar38);
    *(float *)((int)puVar17 + 0x104) = (float)((double)fVar6 * dVar38);
    *(float *)(puVar17 + 0x21) = (float)((double)fVar7 * dVar38);
    *(float *)((int)puVar17 + 0x10c) = (float)((double)fVar8 * dVar38);
    dVar42 = (double)mobyutil::MB_randRot();
    lVar27 = uVar19 - 0x180;
    mobyutil::MB_RotateQuatAxisAngle((float)dVar42,(float *)lVar27,(float *)lVar27);
    puVar17[0x3c] = (longlong)(int)((double)animationSpeed * dVar29);
    partupd::SpawnPart_21(uVar34,uVar19 - 0x1a0,lVar27,0x4f007fff,0x1fffffff);
    unused = (uint)lVar27;
    dVar42 = dVar37;
  } while (dVar37 < dVar41);
  fVar5 = out[9];
  if (fVar5 != 0.0) {
    bVar2 = *(byte *)((int)fVar5 + 0x20);
    unused = (uint)bVar2;
    if (bVar2 != 0xfd && bVar2 != 0xfe) {
      fVar6 = *(float *)((int)fVar5 + 0x14);
      fVar7 = *(float *)((int)fVar5 + 0x10);
      fVar5 = *(float *)((int)fVar5 + 0x18);
      fVar8 = out[6] - fVar5;
      if (SQRT(fVar8 * fVar8 +
               (out[4] - fVar7) * (out[4] - fVar7) + (out[5] - fVar6) * (out[5] - fVar6)) < 3.0) {
        dVar42 = 0.7853981852531433;
        if (((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) ||
           (*(char *)((int)out[8] + 0x20) == '\x05')) {
          fVar8 = (moby->pos).x;
          fVar12 = (moby->pos).y;
          fVar9 = fVar7 - fVar8;
          fVar14 = fVar6 - fVar12;
          dVar38 = ABS((double)fVar9);
          dVar29 = ABS((double)fVar14);
          *(float *)((int)puVar17 + 0x13c) = fVar9;
          *(float *)(puVar17 + 0x28) = fVar14;
          *(float *)((int)puVar17 + 0x144) = (float)(dVar38 - dVar29);
          uVar23 = (ulonglong)(*(uint *)((int)puVar17 + 0x13c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x144) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar17 + 0x28) >> 0x1d) & 4;
          dVar42 = ABS((double)*(float *)((int)puVar17 + 0x13c));
          if ((double)*(float *)((int)puVar17 + 0x144) - dVar43 < 0.0) {
            dVar42 = dVar29;
          }
          fVar14 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar29 = ABS((double)*(float *)(puVar17 + 0x28));
          if ((double)*(float *)((int)puVar17 + 0x144) - dVar43 < 0.0) {
            dVar29 = dVar38;
          }
          fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar38 = dVar43;
          if (dVar43 < dVar42) {
            lVar27 = uVar19 - 0x270;
            lVar26 = uVar19 - 0xf0;
            lVar24 = uVar19 - 0x100;
            lVar28 = 2;
            fVar13 = (float)(dVar29 - dVar42) / (float)(dVar29 + dVar42);
            fVar10 = fVar13 * fVar13;
            *(float *)((int)puVar17 + 0x18c) = fVar13;
            *(float *)((int)puVar17 + 0x184) = fVar13;
            *(float *)(puVar17 + 0x31) = fVar13;
            *(float *)(puVar17 + 0x30) = fVar13;
            fVar13 = fVar10 * fVar10;
            *(float *)((int)puVar17 + 0x184) = *(float *)((int)puVar17 + 0x184) * fVar10;
            *(float *)(puVar17 + 0x31) = *(float *)(puVar17 + 0x31) * fVar13;
            *(float *)((int)puVar17 + 0x18c) = *(float *)((int)puVar17 + 0x18c) * fVar13 * fVar10;
            do {
              *(float *)((int)lVar27 + 0x180) = *(float *)((int)lVar27 + 0x170) * fVar13 * fVar13;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar13 * fVar13;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar19 - 0x100;
            pfVar25 = (float *)&DAT_007358e0;
            lVar27 = lVar21;
            lVar24 = lVar26;
            do {
              fVar13 = *pfVar25;
              fVar10 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar27 + 0x180) = *(float *)((int)lVar27 + 0x180) * fVar13;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar27 = lVar21;
            dVar42 = dVar43;
            do {
              iVar22 = (int)lVar27;
              iVar18 = (int)lVar26;
              lVar27 = lVar27 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar22 + 0x180)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar38 = (double)((float)(dVar42 + 0.7853981852531433) * fVar14 + fVar9);
          }
          fVar12 = fVar12 - fVar6;
          fVar8 = fVar8 - fVar7;
          fVar5 = fVar5 - (moby->pos).z;
          fVar6 = SQRT(fVar8 * fVar8 + fVar12 * fVar12);
          *(float *)((int)puVar17 + 0x134) = fVar5;
          dVar33 = ABS((double)fVar5);
          dVar29 = ABS((double)fVar6);
          *(float *)(puVar17 + 0x26) = fVar6;
          *(float *)(puVar17 + 0x27) = (float)(dVar29 - dVar33);
          uVar23 = (ulonglong)(*(uint *)(puVar17 + 0x26) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0x27) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x134) >> 0x1d) & 4;
          dVar42 = ABS((double)*(float *)(puVar17 + 0x26));
          if ((double)*(float *)(puVar17 + 0x27) - dVar43 < 0.0) {
            dVar42 = dVar33;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar33 = ABS((double)*(float *)((int)puVar17 + 0x134));
          if ((double)*(float *)(puVar17 + 0x27) - dVar43 < 0.0) {
            dVar33 = dVar29;
          }
          fVar6 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar29 = dVar43;
          if (dVar43 < dVar42) {
            lVar27 = uVar19 - 0x270;
            lVar26 = uVar19 - 0x110;
            lVar24 = uVar19 - 0x120;
            lVar28 = 2;
            fVar7 = (float)(dVar33 - dVar42) / (float)(dVar33 + dVar42);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar17 + 0x16c) = fVar7;
            *(float *)((int)puVar17 + 0x164) = fVar7;
            *(float *)(puVar17 + 0x2d) = fVar7;
            *(float *)(puVar17 + 0x2c) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar17 + 0x164) = *(float *)((int)puVar17 + 0x164) * fVar8;
            *(float *)(puVar17 + 0x2d) = *(float *)(puVar17 + 0x2d) * fVar7;
            *(float *)((int)puVar17 + 0x16c) = *(float *)((int)puVar17 + 0x16c) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar27 + 0x160) = *(float *)((int)lVar27 + 0x150) * fVar7 * fVar7;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar19 - 0x120;
            pfVar25 = (float *)&DAT_007358e0;
            lVar27 = lVar21;
            lVar24 = lVar26;
            do {
              fVar7 = *pfVar25;
              fVar8 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar27 + 0x160) = *(float *)((int)lVar27 + 0x160) * fVar7;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar27 = 2;
            dVar42 = dVar43;
            do {
              iVar22 = (int)lVar21;
              iVar18 = (int)lVar26;
              lVar21 = lVar21 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar22 + 0x160)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            dVar29 = (double)((float)(dVar42 + 0.7853981852531433) * fVar5 + fVar6);
          }
        }
        else {
          iVar22 = *(int *)(DAT_0096b2d0 + 0x78);
          dVar29 = (double)fastfunc::FastWrapRot
                                     (*(float *)(DAT_0096b2d0 + 0x48),*(float *)(iVar22 + 0x90));
          dVar38 = (double)fastfunc::FastWrapRot
                                     (*(float *)(DAT_0096b2d0 + 0x44),*(float *)(iVar22 + 0x94));
          fVar5 = (moby->pos).y - *(float *)(DAT_0096b2d0 + 0x14);
          fVar6 = (moby->pos).x - *(float *)(DAT_0096b2d0 + 0x10);
          fVar7 = (moby->pos).z - *(float *)(DAT_0096b2d0 + 0x18);
          mobyutil::MB_SphericalToVector
                    ((SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) / (out[0xb] + 24.0)) *
                     *(float *)(iVar22 + 100),(float)dVar29,(float)-dVar38,(float *)(puVar17 + 0x22)
                    );
          iVar22 = DAT_0096b2d0;
          fVar5 = (moby->pos).x;
          fVar12 = *(float *)(puVar17 + 0x22) + *(float *)(DAT_0096b2d0 + 0x10);
          fVar6 = (moby->pos).y;
          *(float *)(puVar17 + 0x22) = fVar12;
          fVar14 = *(float *)((int)puVar17 + 0x114) + *(float *)(iVar22 + 0x14);
          fVar8 = fVar12 - fVar5;
          fVar9 = fVar14 - fVar6;
          dVar38 = ABS((double)fVar8);
          *(float *)((int)puVar17 + 0x114) = fVar14;
          fVar7 = *(float *)(iVar22 + 0x18);
          *(float *)((int)puVar17 + 0x154) = fVar8;
          dVar33 = ABS((double)fVar9);
          *(float *)(puVar17 + 0x2b) = fVar9;
          fVar7 = *(float *)(puVar17 + 0x23) + fVar7;
          *(float *)((int)puVar17 + 0x15c) = (float)(dVar38 - dVar33);
          *(float *)(puVar17 + 0x23) = fVar7;
          fVar8 = (moby->pos).z;
          uVar23 = (ulonglong)(*(uint *)((int)puVar17 + 0x154) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x15c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar17 + 0x2b) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)((int)puVar17 + 0x154));
          if ((double)*(float *)((int)puVar17 + 0x15c) - dVar43 < 0.0) {
            dVar29 = dVar33;
          }
          fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar9 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar33 = ABS((double)*(float *)(puVar17 + 0x2b));
          if ((double)*(float *)((int)puVar17 + 0x15c) - dVar43 < 0.0) {
            dVar33 = dVar38;
          }
          dVar38 = dVar43;
          if (dVar43 < dVar29) {
            lVar27 = uVar19 - 0x270;
            lVar24 = uVar19 - 0xc0;
            lVar26 = uVar19 - 0xb0;
            lVar28 = 2;
            fVar10 = (float)(dVar33 - dVar29) / (float)(dVar33 + dVar29);
            fVar11 = fVar10 * fVar10;
            *(float *)((int)puVar17 + 0x1cc) = fVar10;
            *(float *)((int)puVar17 + 0x1c4) = fVar10;
            *(float *)(puVar17 + 0x39) = fVar10;
            *(float *)(puVar17 + 0x38) = fVar10;
            fVar10 = fVar11 * fVar11;
            *(float *)((int)puVar17 + 0x1c4) = *(float *)((int)puVar17 + 0x1c4) * fVar11;
            *(float *)(puVar17 + 0x39) = *(float *)(puVar17 + 0x39) * fVar10;
            *(float *)((int)puVar17 + 0x1cc) = *(float *)((int)puVar17 + 0x1cc) * fVar10 * fVar11;
            do {
              *(float *)((int)lVar27 + 0x1c0) = *(float *)((int)lVar27 + 0x1b0) * fVar10 * fVar10;
              iVar22 = (int)lVar24;
              lVar27 = lVar27 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar19 - 0xc0;
            pfVar25 = (float *)&DAT_007358e0;
            lVar27 = lVar21;
            lVar24 = lVar26;
            do {
              fVar10 = *pfVar25;
              fVar11 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar27 + 0x1c0) = *(float *)((int)lVar27 + 0x1c0) * fVar10;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar27 = lVar21;
            dVar29 = dVar43;
            do {
              iVar22 = (int)lVar27;
              lVar27 = lVar27 + 0x10;
              iVar18 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1c0)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar38 = (double)((float)(dVar29 + dVar42) * fVar13 + fVar9);
          }
          fVar6 = fVar6 - fVar14;
          fVar5 = fVar5 - fVar12;
          fVar7 = fVar7 - fVar8;
          fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
          *(float *)((int)puVar17 + 0x14c) = fVar7;
          dVar36 = ABS((double)fVar7);
          dVar29 = ABS((double)fVar5);
          *(float *)(puVar17 + 0x29) = fVar5;
          *(float *)(puVar17 + 0x2a) = (float)(dVar29 - dVar36);
          uVar23 = (ulonglong)(*(uint *)(puVar17 + 0x29) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0x2a) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x14c) >> 0x1d) & 4;
          dVar33 = ABS((double)*(float *)(puVar17 + 0x29));
          if ((double)*(float *)(puVar17 + 0x2a) - dVar43 < 0.0) {
            dVar33 = dVar36;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar36 = ABS((double)*(float *)((int)puVar17 + 0x14c));
          if ((double)*(float *)(puVar17 + 0x2a) - dVar43 < 0.0) {
            dVar36 = dVar29;
          }
          fVar6 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar29 = dVar43;
          if (dVar43 < dVar33) {
            lVar27 = uVar19 - 0x270;
            lVar26 = uVar19 - 0xd0;
            lVar24 = uVar19 - 0xe0;
            lVar28 = 2;
            fVar7 = (float)(dVar36 - dVar33) / (float)(dVar36 + dVar33);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar17 + 0x1ac) = fVar7;
            *(float *)((int)puVar17 + 0x1a4) = fVar7;
            *(float *)(puVar17 + 0x35) = fVar7;
            *(float *)(puVar17 + 0x34) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar17 + 0x1a4) = *(float *)((int)puVar17 + 0x1a4) * fVar8;
            *(float *)(puVar17 + 0x35) = *(float *)(puVar17 + 0x35) * fVar7;
            *(float *)((int)puVar17 + 0x1ac) = *(float *)((int)puVar17 + 0x1ac) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar27 + 0x1a0) = *(float *)((int)lVar27 + 400) * fVar7 * fVar7;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar19 - 0xe0;
            pfVar25 = (float *)&DAT_007358e0;
            lVar27 = lVar21;
            lVar24 = lVar26;
            do {
              fVar7 = *pfVar25;
              fVar8 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar27 + 0x1a0) = *(float *)((int)lVar27 + 0x1a0) * fVar7;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar27 = 2;
            do {
              iVar22 = (int)lVar21;
              iVar18 = (int)lVar26;
              lVar21 = lVar21 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1a0)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            dVar29 = (double)((float)(dVar29 + dVar42) * fVar5 + fVar6);
          }
        }
        dVar42 = (double)fastfunc::FastSubRots((float)dVar38,(moby->rotation).z);
        fVar5 = mobyutil::g_FrameTime;
        if (dVar42 < 1.0471975803375244) {
          out[0xb] = (out[0xe] - out[0xb]) * 0.05 + out[0xb];
        }
        dVar33 = 12.566370964050293;
        dVar42 = 25.132741928100586;
        mobyutil::OrganicDeltAng
                  ((float)dVar38,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,fVar5 * 25.132742
                   ,&(moby->rotation).z,0x471b54,out + 0xc);
        mobyutil::OrganicDeltAng
                  ((float)-dVar29,(float)((double)DAT_0071f418 * dVar33),
                   (float)((double)DAT_0071f418 * dVar33),
                   (float)((double)mobyutil::g_FrameTime * dVar42),&(moby->rotation).y,0x720000,
                   out + 0xd);
        fVar5 = out[9];
        out[4] = *(float *)((int)fVar5 + 0x10);
        out[5] = *(float *)((int)fVar5 + 0x14);
        out[6] = *(float *)((int)fVar5 + 0x18);
        out[7] = *(float *)((int)fVar5 + 0x1c);
        goto LAB_00472a8c;
      }
    }
  }
  dVar29 = 12.566370964050293;
  dVar42 = 25.132741928100586;
  mobyutil::OrganicDeltAng
            ((moby->rotation).z,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,unused,out + 0xc);
  mobyutil::OrganicDeltAng
            ((moby->rotation).y,(float)((double)DAT_0071f418 * dVar29),
             (float)((double)DAT_0071f418 * dVar29),(float)((double)mobyutil::g_FrameTime * dVar42),
             &(moby->rotation).y,unused,out + 0xd);
  out[9] = 0.0;
LAB_00472a8c:
  dVar42 = 120.5;
  fVar5 = out[10];
  puVar17[0x3c] = (longlong)(int)(animationSpeed * 120.5);
  if (*(int *)((int)puVar17 + 0x1e4) < (int)fVar5) {
    mobyutil::MB_SphericalToVector(out[0xb],(moby->rotation).z,-(moby->rotation).y,out);
    fVar6 = *out;
  }
  else {
    dVar29 = (double)fastfunc::FastIntToDouble(fVar5);
    puVar17[0x3c] = (longlong)(int)((double)animationSpeed * dVar42);
    dVar42 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar17 + 0x1e4));
    dVar29 = (double)(float)(dVar29 / dVar42);
    dVar42 = dVar41;
    if ((dVar29 <= dVar41) && (dVar42 = dVar29, dVar29 < dVar43)) {
      dVar42 = dVar43;
    }
    dVar42 = (double)(float)(dVar42 * dVar42);
    mobyutil::MB_SphericalToVector
              ((float)((double)out[0xb] * dVar42),(moby->rotation).z,-(moby->rotation).y,
               (float *)(puVar17 + 0x24));
    fVar5 = (float)(dVar41 - dVar42);
    fVar6 = *out;
    fVar7 = out[1];
    fVar8 = out[2];
    *out = fVar6 * fVar5;
    out[1] = fVar7 * fVar5;
    out[2] = fVar8 * fVar5;
    fVar6 = fVar6 * fVar5 + *(float *)(puVar17 + 0x24);
    *out = fVar6;
    out[1] = fVar7 * fVar5 + *(float *)((int)puVar17 + 0x124);
    out[2] = fVar8 * fVar5 + *(float *)(puVar17 + 0x25);
  }
  fVar6 = (moby->pos).x + fVar6;
  (moby->pos).x = fVar6;
  fVar5 = (moby->pos).y + out[1];
  (moby->pos).y = fVar5;
  fVar7 = (moby->pos).z + out[2];
  (moby->pos).z = fVar7;
  if (2.0 <= fVar6) {
    if ((((fVar6 <= 1021.0) && (2.0 <= fVar5)) && (fVar5 <= 1021.0)) &&
       ((2.0 <= fVar7 && (fVar7 <= 1021.0)))) {
      mobyfunc::GetBonePosition(lVar20,1,uVar19 - 0x1b0);
      iVar22 = collproc::CollLine(uVar19 - 0x1c0,uVar19 - 0x1b0,0,lVar20,0);
      if (iVar22 == 0) {
        iVar22 = collproc::CollSphere(0x3ff8000000000000,lVar20 + 0x10,&DAT_00471b54,0,lVar20);
        if ((iVar22 != 0) &&
           ((CollOutput.pMoby == (MobyInstance *)0x0 ||
            (((((CollOutput.pMoby != (MobyInstance *)out[8] &&
                (MVar15 = (CollOutput.pMoby)->oClass,
                MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|SEEKER) && MVar15 != 0x504)) &&
               ((MVar15 != 0x535 &&
                ((((MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|SUCKCANNON_0036) &&
                   (MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|HANGAR_DOOR_0037))) &&
                  (MVar15 != 0x538)) && ((MVar15 != 0x539 && (MVar15 != 0x53a)))))))) &&
              ((MVar15 != ROCKET_0052 && ((MVar15 != MINE_0053 && (MVar15 != 0x191)))))) &&
             ((((MVar15 != QWARKS_STARFIGHTER_PART_0184 &&
                (((MVar15 != QWARKS_STARFIGHTER_PART_0185 &&
                  (MVar15 != QWARKS_STARFIGHTER_PART_0186)) &&
                 (MVar15 != QWARKS_STARFIGHTER_PART_0187)))) &&
               (((MVar15 != QWARKS_STARFIGHTER_PART_0188 && (MVar15 != QWARKS_STARFIGHTER_PART_0189)
                 ) && (MVar15 != QWARKS_STARFIGHTER_PART_018A)))) &&
              (((MVar15 != QWARKS_STARFIGHTER_PART_018B && (MVar15 != QWARKS_STARFIGHTER_PART_018C))
               && ((MVar15 != QWARKS_STARFIGHTER_PART_018F &&
                   (MVar15 != QWARKS_STARFIGHTER_PART_0190)))))))))))) {
          puVar17[0x12] = 0;
          puVar17[0x14] = 1;
          puVar17[0x15] = 1;
          puVar17[0x16] = 0xffffffffffffffff;
          puVar17[0x17] = 0;
          mobyutil::MB_genericExplosion
                    (0x4014000000000000,0x4024000000000000,0x401c000000000000,0x4010000000000000,
                     dVar41,dVar41,0x402e000000000000,lVar20,out,0,1,&DAT_00471b54,0x14,5,0x10);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else if ((CollOutput.pMoby == (MobyInstance *)0x0) ||
              (((((CollOutput.pMoby != (MobyInstance *)out[8] &&
                  (MVar15 = (CollOutput.pMoby)->oClass,
                  MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|SEEKER) && MVar15 != 0x504)) &&
                 (MVar15 != 0x535)) &&
                ((MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|SUCKCANNON_0036) &&
                 (MVar15 != (PLANETBUSTER_MAXIMUS_PART_0500|HANGAR_DOOR_0037))))) &&
               (((((MVar15 != 0x538 && ((MVar15 != 0x539 && (MVar15 != 0x53a)))) &&
                  (MVar15 != ROCKET_0052)) &&
                 (((((MVar15 != MINE_0053 && (MVar15 != 0x191)) &&
                    (MVar15 != QWARKS_STARFIGHTER_PART_0184)) &&
                   ((MVar15 != QWARKS_STARFIGHTER_PART_0185 &&
                    (MVar15 != QWARKS_STARFIGHTER_PART_0186)))) &&
                  (MVar15 != QWARKS_STARFIGHTER_PART_0187)))) &&
                ((((MVar15 != QWARKS_STARFIGHTER_PART_0188 &&
                   (MVar15 != QWARKS_STARFIGHTER_PART_0189)) &&
                  ((MVar15 != QWARKS_STARFIGHTER_PART_018A &&
                   (((MVar15 != QWARKS_STARFIGHTER_PART_018B &&
                     (MVar15 != QWARKS_STARFIGHTER_PART_018C)) &&
                    (MVar15 != QWARKS_STARFIGHTER_PART_018F)))))) &&
                 (MVar15 != QWARKS_STARFIGHTER_PART_0190)))))))) {
        puVar17[0x12] = 0;
        puVar17[0x14] = 1;
        puVar17[0x15] = 1;
        puVar17[0x16] = 0xffffffffffffffff;
        puVar17[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0x4014000000000000,0x4024000000000000,0x401c000000000000,0x4010000000000000,
                   dVar41,dVar41,0x402e000000000000,lVar20,out,0,1,0xffffffffffffffff,0x14,5,0x10);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar22 = fastfunc::FastDecTimerS32(out + 10);
      if (iVar22 == 0) {
        if (moby->enabled != '\0') {
          return;
        }
        if (out[8] == 0.0) {
          return;
        }
        if (*(char *)((int)out[8] + 0x31) == '\0') {
          return;
        }
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 00472fbc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M820_00472fbc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M820_00472fbc(void)

{
  DAT_00877928 = 0x10000;
  return;
}



//==== 00472fd8  ns=mobyupdate_helpers  size=0x78
// sig: undefined M820_00472fd8(void)
// callers(1): 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M820_00472fd8(int param_1)

{
  if (*(char *)(param_1 + 0x53) != '\x02') {
    mobyutil::MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 10.5));
  }
  *(undefined1 *)(param_1 + 0x20) = 0xe;
  return;
}



//==== 00473058  ns=mobyupdate_helpers  size=0xec
// sig: undefined M820_00473058(void)
// callers(1): 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 005c8318 rand

void mobyupdate_helpers::M820_00473058(int param_1)

{
  uint uVar1;
  
  uVar1 = rand();
  if (uVar1 == (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) * 2) {
    if (*(char *)(param_1 + 0x53) != '\x03') {
      mobyutil::MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 10.5));
    }
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  else {
    if (*(char *)(param_1 + 0x53) != '\x04') {
      mobyutil::MB_SetAnimation(param_1,4,0,(int)(animationSpeed * 10.5));
    }
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return;
}



//==== 00473158  ns=mobyupdate_helpers  size=0x7dc
// sig: undefined M820_00473158(void)
// callers(2): 00473940 mobyupdate_helpers::M820_00473940; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(7): 00057820 collproc::CollLine; 00104e44 mobyutil::PointInsideComplexPoly; 0010bcf0 mobyutil::MB_MtxToQuat; 001378e0 path::NearestPntOnPathAtDist; 00501848 fastfunc::FastSlerp; 00501ab0 fastfunc::FastQuaternionToMtx4; 00501e18 fastfunc::FastQuaternionToMtx4Identity

undefined8
mobyupdate_helpers::M820_00473158(longlong param_1,longlong param_2,float *param_3,float *param_4)

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
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  int iVar18;
  undefined8 uVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar19;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar28;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar29;
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
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x180;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar16;
  puVar11[0x32] = in_LR;
  puVar11[0x21] = in_f17;
  puVar11[0x22] = in_f18;
  puVar11[0x23] = in_f19;
  puVar11[0x24] = in_f20;
  puVar11[0x25] = in_f21;
  puVar11[0x26] = in_f22;
  puVar11[0x27] = in_f23;
  puVar11[0x28] = in_f24;
  puVar11[0x29] = in_f25;
  puVar11[0x2a] = in_f26;
  puVar11[0x2b] = in_f27;
  puVar11[0x2c] = in_f28;
  puVar11[0x2d] = in_f29;
  puVar11[0x2e] = in_f30;
  puVar11[0x2f] = in_f31;
  iVar12 = (int)param_2;
  *(undefined4 *)(iVar12 + 0x1c8) = 0;
  puVar11[0x20] = unaff_r31;
  dVar33 = 0.0;
  puVar11[0x1f] = unaff_r30;
  puVar11[0x1c] = unaff_r27;
  puVar11[0x1d] = unaff_r28;
  puVar11[0x1e] = unaff_r29;
  puVar11[0x1b] = unaff_r26;
  iVar13 = (int)param_1;
  dVar32 = dVar33;
  dVar31 = dVar33;
  dVar30 = dVar33;
  dVar22 = dVar33;
  if (param_3 != (float *)0x0) {
    fVar6 = param_3[1] - *(float *)(iVar13 + 0x14);
    fVar7 = *param_3 - *(float *)(iVar13 + 0x10);
    fVar8 = param_3[2] - *(float *)(iVar13 + 0x18);
    dVar23 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    dVar22 = 1.0;
    if (dVar23 - 1.0 < 0.0) {
      dVar22 = dVar23;
    }
    fVar2 = (float)(dVar22 / dVar23);
    if (0.0 - dVar23 < 0.0) {
      dVar30 = (double)(fVar7 * fVar2);
    }
    if (0.0 - dVar23 < 0.0) {
      dVar31 = (double)(fVar6 * fVar2);
    }
    if (0.0 - dVar23 < 0.0) {
      dVar32 = (double)(fVar8 * fVar2);
    }
    if (dVar23 - 0.0 < 0.0) {
      dVar30 = (double)(fVar7 * fVar2);
    }
    if (dVar23 - 0.0 < 0.0) {
      dVar31 = (double)(fVar6 * fVar2);
    }
    if (dVar23 - 0.0 < 0.0) {
      dVar32 = (double)(fVar8 * fVar2);
    }
  }
  lVar19 = param_2 + 0x120;
  fastfunc::FastQuaternionToMtx4Identity(lVar19,uVar16 - 0xf0);
  dVar26 = (double)*(float *)((int)puVar11 + 0xb4);
  dVar25 = (double)*(float *)(puVar11 + 0x16);
  dVar27 = (double)*(float *)(puVar11 + 0x17);
  dVar20 = (double)SQRT((float)(dVar27 * dVar27 +
                               (double)(float)(dVar25 * dVar25 + (double)(float)(dVar26 * dVar26))))
  ;
  fVar6 = *(float *)(iVar12 + 0x188);
  dVar29 = (double)*(float *)(iVar12 + 0x18c);
  fVar7 = *(float *)(iVar13 + 0x10);
  fVar8 = *(float *)(iVar13 + 0x14);
  fVar2 = *(float *)(iVar13 + 0x18);
  fVar9 = *(float *)(iVar12 + 0x184);
  auVar38 = loadVectorLeftIndexed(0xb0,lVar1);
  auVar40 = loadVectorLeftIndexed(0xb4,lVar1);
  auVar42 = loadVectorLeftIndexed(0xb8,lVar1);
  auVar35 = loadVectorLeftIndexed(0xbc,lVar1);
  auVar36 = loadVectorLeftIndexed(0x188,param_2);
  auVar37 = loadVectorLeftIndexed(0x18c,param_2);
  auVar39 = loadVectorLeftIndexed(0x10,param_1);
  auVar41 = loadVectorLeftIndexed(0x14,param_1);
  auVar43 = loadVectorLeftIndexed(0x18,param_1);
  dVar21 = (double)(float)((double)(float)(dVar27 * dVar32 +
                                          (double)(float)(dVar25 * dVar30 +
                                                         (double)(float)(dVar26 * dVar31))) / dVar20
                          );
  dVar23 = dVar33;
  if (dVar33 - dVar20 < 0.0) {
    dVar23 = (double)(float)(dVar26 * dVar21);
  }
  dVar24 = dVar33;
  if (dVar33 - dVar20 < 0.0) {
    dVar24 = (double)(float)(dVar25 * dVar21);
  }
  dVar28 = dVar33;
  if (dVar33 - dVar20 < 0.0) {
    dVar28 = (double)(float)(dVar27 * dVar21);
  }
  if (dVar20 - dVar33 < 0.0) {
    dVar23 = (double)(float)(dVar26 * dVar21);
  }
  if (dVar20 - dVar33 < 0.0) {
    dVar24 = (double)(float)(dVar25 * dVar21);
  }
  if (dVar20 - dVar33 < 0.0) {
    dVar28 = (double)(float)(dVar27 * dVar21);
  }
  fVar3 = (float)(dVar31 - dVar23);
  fVar4 = (float)(dVar30 - dVar24);
  fVar5 = (float)(dVar32 - dVar28);
  fVar14 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  dVar30 = dVar33;
  dVar31 = dVar33;
  dVar32 = dVar33;
  if ((double)SQRT(fVar14) != dVar33) {
    fVar15 = 1.0 / SQRT(fVar14);
    fVar15 = -(fVar14 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    fVar15 = -(fVar14 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    fVar15 = -(fVar14 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    dVar30 = (double)(fVar4 * fVar15);
    dVar31 = (double)(fVar3 * fVar15);
    dVar32 = (double)(fVar5 * fVar15);
  }
  auVar44 = ZEXT416(0xffffffff);
  auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar44 = ZEXT416(0xffffffff);
  auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  *(undefined4 *)((int)puVar11 + 0x7c) = 0;
  *(undefined4 *)(puVar11 + 0xf) = 0;
  *(undefined4 *)((int)puVar11 + 0x74) = 0;
  *(undefined4 *)(puVar11 + 0xe) = 0;
  auVar46 = vectorMultiplyAddFloatingPoint(auVar35,auVar36,auVar45);
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  auVar47 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar44 = ZEXT416(0xffffffff);
  auVar45 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar49 = vectorMultiplyAddFloatingPoint(auVar40,auVar36,auVar41);
  auVar44 = ZEXT416(0xffffffff);
  auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  dVar23 = (double)SQRT((float)(dVar32 * dVar32 +
                               (double)(float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31))))
  ;
  auVar48 = vectorShiftLeftIntegerWord(auVar45,auVar45);
  auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar44 = ZEXT416(0xffffffff);
  auVar34 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar44 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  uVar10 = storeVectorElementWordIndexed
                     (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x7c,lVar1);
  *(undefined4 *)((int)puVar11 + 0x7c) = uVar10;
  auVar47 = vectorMultiplyAddFloatingPoint(auVar37,auVar38,auVar47);
  auVar46 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar39);
  auVar44 = vectorMultiplyAddFloatingPoint(auVar42,auVar36,auVar43);
  auVar40 = vectorMultiplyAddFloatingPoint(auVar37,auVar40,auVar48);
  auVar42 = vectorMultiplyAddFloatingPoint(auVar37,auVar42,auVar45);
  auVar36 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar45 = loadVectorLeftIndexed(0xc,0x473144);
  auVar38 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar34);
  auVar35 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar45 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar37 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar39 = vectorAddFloatingPoint(auVar45 ^ auVar47,auVar39);
  auVar40 = vectorAddFloatingPoint(auVar45 ^ auVar40,auVar41);
  auVar41 = vectorAddFloatingPoint(auVar45 ^ auVar42,auVar43);
  auVar38 = (auVar45 ^ auVar38) >> 0x60 & (undefined1  [16])0xffffffff;
  uVar10 = storeVectorElementWordIndexed
                     (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x8c,lVar1);
  *(undefined4 *)((int)puVar11 + 0x8c) = uVar10;
  auVar38 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar10 = storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x70,lVar1);
  *(undefined4 *)(puVar11 + 0xe) = uVar10;
  auVar35 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar39 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar10 = storeVectorElementWordIndexed
                     (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x74,lVar1);
  *(undefined4 *)((int)puVar11 + 0x74) = uVar10;
  uVar10 = storeVectorElementWordIndexed
                     (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x78,lVar1);
  *(undefined4 *)(puVar11 + 0xf) = uVar10;
  uVar10 = storeVectorElementWordIndexed
                     (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x80,lVar1);
  *(undefined4 *)(puVar11 + 0x10) = uVar10;
  uVar10 = storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x84,lVar1);
  *(undefined4 *)((int)puVar11 + 0x84) = uVar10;
  dVar20 = (double)(float)(dVar22 / dVar23);
  uVar10 = storeVectorElementWordIndexed
                     (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar11 + 0x11) = uVar10;
  dVar22 = dVar33;
  if (dVar33 - dVar23 < 0.0) {
    dVar22 = (double)(float)(dVar30 * dVar20);
  }
  dVar21 = dVar33;
  if (dVar33 - dVar23 < 0.0) {
    dVar21 = (double)(float)(dVar31 * dVar20);
  }
  dVar24 = dVar33;
  if (dVar33 - dVar23 < 0.0) {
    dVar24 = (double)(float)(dVar32 * dVar20);
  }
  if (dVar23 - dVar33 < 0.0) {
    dVar22 = (double)(float)(dVar30 * dVar20);
  }
  if (dVar23 - dVar33 < 0.0) {
    dVar21 = (double)(float)(dVar31 * dVar20);
  }
  if (dVar23 - dVar33 < 0.0) {
    dVar24 = (double)(float)(dVar32 * dVar20);
  }
  if (param_3 != (float *)0x0) {
    dVar23 = (double)((float)((double)fVar9 * dVar29) / fVar6);
    *(float *)(puVar11 + 0x10) =
         (float)(dVar22 * dVar23 +
                (double)((float)((double)*(float *)(puVar11 + 0x18) * dVar33 +
                                (double)((float)((double)*(float *)(puVar11 + 0x12) * dVar33 +
                                                dVar33) + -(float)(dVar29 * dVar25))) + fVar7));
    *(float *)((int)puVar11 + 0x84) =
         (float)(dVar21 * dVar23 +
                (double)((float)((double)*(float *)((int)puVar11 + 0xc4) * dVar33 +
                                (double)((float)((double)*(float *)((int)puVar11 + 0x94) * dVar33 +
                                                dVar33) + -(float)(dVar29 * dVar26))) + fVar8));
    *(float *)(puVar11 + 0x11) =
         (float)(dVar24 * dVar23 +
                (double)((float)((double)*(float *)(puVar11 + 0x19) * dVar33 +
                                (double)((float)((double)*(float *)(puVar11 + 0x13) * dVar33 +
                                                dVar33) + -(float)(dVar29 * dVar27))) + fVar2));
  }
  iVar18 = collproc::CollLine(uVar16 - 0x110,uVar16 - 0x100,0x12,param_1,0);
  if (iVar18 == 0) {
    fastfunc::FastSlerp((double)((*(float *)(iVar12 + 0x170) - 1.0) * DAT_0071f408 + 1.0),lVar19,
                        lVar19,param_2 + 0x130);
    fastfunc::FastQuaternionToMtx4(lVar19,param_1 + 0xc0);
    uVar17 = 0;
  }
  else {
    if (param_4 != (float *)0x0) {
      *param_4 = ABS(*(float *)(iVar13 + 0x18) - CollOutput.ip.z);
    }
    if (((*(byte *)(iVar13 + 0x20) < 6) || (*(int *)(iVar12 + 0x1a0) == -1)) ||
       (iVar18 = mobyutil::PointInsideComplexPoly
                           ((Vec4 *)&CollOutput.ip,(Vec4 *)Splines[*(int *)(iVar12 + 0x1a0)]->points
                            ,Splines[*(int *)(iVar12 + 0x1a0)]->cnt), iVar18 != 0)) {
      *(float *)(iVar12 + 0x140) = CollOutput.ip.x;
      *(float *)(iVar12 + 0x144) = CollOutput.ip.y;
      *(float *)(iVar12 + 0x148) = CollOutput.ip.z;
      *(float *)(iVar12 + 0x14c) = CollOutput.ip.w;
    }
    else {
      path::NearestPntOnPathAtDist
                ((float)dVar33,(Vec4 *)(iVar12 + 0x140),iVar13 + 0x10,0xa10960,
                 Splines[*(int *)(iVar12 + 0x1a0)]);
      *(undefined4 *)(iVar12 + 0x1c8) = 1;
    }
    fVar6 = CollOutput.normal.w;
    if ((5 < *(byte *)(iVar13 + 0x20)) && (iVar18 = *(int *)(iVar12 + 0x180), iVar18 != 0)) {
      fVar7 = *(float *)(iVar18 + 0x14) - *(float *)(iVar13 + 0x14);
      fVar8 = *(float *)(iVar18 + 0x10) - *(float *)(iVar13 + 0x10);
      fVar9 = *(float *)(iVar18 + 0x18) - *(float *)(iVar13 + 0x18);
      fVar2 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
      dVar30 = dVar33;
      dVar31 = dVar33;
      dVar32 = dVar33;
      if ((double)SQRT(fVar2) != dVar33) {
        fVar3 = 1.0 / SQRT(fVar2);
        fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        dVar30 = (double)(fVar8 * fVar3);
        dVar31 = (double)(fVar7 * fVar3);
        dVar32 = (double)(fVar9 * fVar3);
      }
    }
    fVar7 = CollOutput.normal.z * CollOutput.normal.z +
            CollOutput.normal.x * CollOutput.normal.x + CollOutput.normal.y * CollOutput.normal.y;
    dVar22 = dVar33;
    dVar23 = dVar33;
    if ((double)SQRT(fVar7) != dVar33) {
      fVar8 = 1.0 / SQRT(fVar7);
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      dVar33 = (double)(CollOutput.normal.y * fVar8);
      dVar22 = (double)(CollOutput.normal.x * fVar8);
      dVar23 = (double)(CollOutput.normal.z * fVar8);
    }
    *(undefined4 *)((int)puVar11 + 0x9c) = 0;
    *(undefined4 *)((int)puVar11 + 0xac) = 0;
    *(float *)(puVar11 + 0x16) = (float)dVar22;
    *(float *)((int)puVar11 + 0xb4) = (float)dVar33;
    fVar7 = (float)(dVar33 * dVar32 - (double)(float)(dVar23 * dVar31));
    dVar20 = (double)fVar7;
    fVar8 = (float)(dVar23 * dVar30 - (double)(float)(dVar22 * dVar32));
    dVar32 = (double)fVar8;
    fVar2 = (float)(dVar22 * dVar31 - (double)(float)(dVar33 * dVar30));
    dVar30 = (double)fVar2;
    *(float *)(puVar11 + 0x14) = fVar7;
    *(float *)((int)puVar11 + 0xa4) = fVar8;
    *(float *)(puVar11 + 0x15) = fVar2;
    *(float *)(puVar11 + 0x17) = (float)dVar23;
    *(float *)((int)puVar11 + 0xbc) = fVar6;
    *(float *)((int)puVar11 + 0x94) = (float)(dVar30 * dVar22 - (double)(float)(dVar20 * dVar23));
    *(float *)(puVar11 + 0x13) = (float)(dVar20 * dVar33 - (double)(float)(dVar32 * dVar22));
    *(float *)(puVar11 + 0x12) = (float)(dVar32 * dVar23 - (double)(float)(dVar30 * dVar33));
    mobyutil::MB_MtxToQuat((float *)(param_2 + 0x130),(float *)(puVar11 + 0x12));
    fastfunc::FastSlerp((double)((*(float *)(iVar12 + 0x170) - 1.0) * DAT_0071f408 + 1.0),lVar19,
                        lVar19,param_2 + 0x130);
    fastfunc::FastQuaternionToMtx4(lVar19,param_1 + 0xc0);
    uVar17 = 1;
  }
  return uVar17;
}



//==== 00473940  ns=mobyupdate_helpers  size=0x164
// sig: undefined M820_00473940(void)
// callers(2): 00473fc0 mobyupdate_helpers::M820_00473fc0; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(1): 00473158 mobyupdate_helpers::M820_00473158

void mobyupdate_helpers::M820_00473940(int param_1,int param_2,float *param_3)

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
  M820_00473158(param_1,param_2,param_3,0);
  fVar2 = *(float *)(param_2 + 0x144) - *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_2 + 0x140) - *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_2 + 0x148) - *(float *)(param_1 + 0x18);
  fVar1 = *(float *)(param_2 + 0x17c);
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



//==== 00473ab0  ns=mobyupdate_helpers  size=0x264
// sig: undefined M820_00473ab0(void)
// callers(0): 
// callees(2): 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler

void mobyupdate_helpers::M820_00473ab0(int param_1,int param_2)

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
  fastfunc::FastQuaternionMult(param_2 + 0x120,param_2 + 0x120,uVar9 - 0x60);
  iVar5 = *(int *)(param_2 + 0x180);
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
  fastfunc::FastQuaternionToEuler(dVar17,param_2 + 0x130,2);
  return;
}



//==== 00473d20  ns=mobyupdate_helpers  size=0x290
// sig: undefined M820_00473d20(void)
// callers(1): 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(4): 00500fa8 fastfunc::FastApplyTransform; 00501848 fastfunc::FastSlerp; 00501980 fastfunc::FastQuaternionToEuler; 00501e18 fastfunc::FastQuaternionToMtx4Identity

void mobyupdate_helpers::M820_00473d20(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  float fVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar15;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar10 = uVar8 - 0x100;
  puVar5 = (ulonglong *)lVar10;
  *puVar5 = uVar8;
  puVar5[0x22] = in_LR;
  puVar5[0x1e] = unaff_r30;
  puVar5[0x1f] = unaff_r31;
  iVar15 = *(int *)(param_2 + 0x180);
  puVar5[0x1d] = unaff_r29;
  if (iVar15 == 0) {
    dVar17 = 0.0;
  }
  else {
    fVar2 = *(float *)(iVar15 + 0x10) - *(float *)(param_1 + 0x10);
    fVar1 = *(float *)(iVar15 + 0x14) - *(float *)(param_1 + 0x14);
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar5 + 0x16) = fVar2;
    *(float *)((int)puVar5 + 0xb4) = fVar1;
    *(float *)(puVar5 + 0x17) = fVar3 - fVar4;
    dVar17 = 0.0;
    uVar9 = (ulonglong)(*(uint *)(puVar5 + 0x16) >> 0x1c) & 8 |
            (ulonglong)(*(uint *)(puVar5 + 0x17) >> 0x1e) & 2 |
            (ulonglong)(*(uint *)((int)puVar5 + 0xb4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar5 + 0x16));
    if (*(float *)(puVar5 + 0x17) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar9 << 2));
    fVar1 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar5 + 0xb4));
    if (*(float *)(puVar5 + 0x17) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar13 = uVar8 - 0xf0;
      lVar11 = uVar8 - 0x34;
      lVar12 = uVar8 - 0x44;
      lVar16 = 2;
      fVar2 = (fVar7 - fVar2) / (fVar7 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x19) = fVar2;
      *(float *)(puVar5 + 0x18) = fVar2;
      *(float *)((int)puVar5 + 0xc4) = fVar2;
      *(float *)((int)puVar5 + 0xbc) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar5 + 0x18) = *(float *)(puVar5 + 0x18) * fVar3;
      *(float *)((int)puVar5 + 0xc4) = *(float *)((int)puVar5 + 0xc4) * fVar2;
      *(float *)(puVar5 + 0x19) = *(float *)(puVar5 + 0x19) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0xbc) = *(float *)((int)lVar13 + 0xac) * fVar2 * fVar2;
        iVar15 = (int)lVar12;
        lVar12 = lVar12 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar11 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar13 = uVar8 - 0x44;
      lVar16 = 4;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar13;
      lVar12 = lVar10;
      do {
        fVar2 = *pfVar14;
        fVar3 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar12 + 0xbc) = *(float *)((int)lVar12 + 0xbc) * fVar2;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar11 + 4) = *(float *)((int)lVar11 + 4) * fVar3;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar11 = 2;
      do {
        iVar15 = (int)lVar10;
        iVar6 = (int)lVar13;
        lVar10 = lVar10 + 0x10;
        lVar13 = lVar13 + 0x10;
        dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar15 + 0xbc)) +
                          *(float *)(iVar6 + 4) + *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
    }
  }
  fastfunc::FastQuaternionToEuler(dVar17,param_2 + 0x130,2);
  iVar15 = param_2 + 0x120;
  fastfunc::FastSlerp((double)((*(float *)(param_2 + 0x170) - 1.0) * DAT_0071f408 + 1.0),iVar15,
                      iVar15,param_2 + 0x130);
  fastfunc::FastQuaternionToMtx4Identity(iVar15,uVar8 - 0x90);
  fastfunc::FastApplyTransform((Vec4 *)(param_1 + 0xc0),(Vec4 *)(uVar8 - 0x90));
  return;
}



//==== 00473fc0  ns=mobyupdate_helpers  size=0x38c
// sig: undefined M820_00473fc0(void)
// callers(1): 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(5): 00059e20 collproc::CollSphere; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 00473940 mobyupdate_helpers::M820_00473940; 005c8318 rand

void mobyupdate_helpers::M820_00473fc0(int param_1,int param_2,float *param_3,float *param_4)

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
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float local_70;
  float local_6c;
  float local_68;
  
  mobyfunc::GetBonePosition(param_1,0,&local_70);
  fVar1 = *(float *)(param_1 + 0x14);
  fVar5 = local_6c - fVar1;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar9 = local_70 - fVar2;
  fVar8 = local_68 - fVar3;
  fVar4 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5);
  fVar6 = 0.0;
  fVar11 = *(float *)(param_2 + 400) / fVar4;
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
  dVar16 = (double)(fVar7 + *param_3);
  dVar17 = (double)(fVar10 + param_3[1]);
  dVar18 = (double)(fVar6 + param_3[2]);
  iVar12 = collproc::CollSphere(&local_70);
  fVar4 = *(float *)(param_2 + 400);
  if (iVar12 != 0) {
    fVar1 = CollOutput.push.y - (fVar10 + fVar1);
    fVar3 = CollOutput.push.z - (fVar6 + fVar3);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (CollOutput.push.x - (fVar7 + fVar2));
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar1;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar3;
  }
  iVar12 = collproc::CollSphere((double)fVar4,&local_70);
  if (((iVar12 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
     ((CollOutput.pMoby)->oClass == 0x334)) {
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
      dVar14 = (double)CollOutput.push.y;
      dVar15 = (double)CollOutput.push.z;
      *(float *)(param_1 + 0x10) = (float)((double)CollOutput.push.x - dVar16) * 0.25 + fVar2;
      *(float *)(param_1 + 0x14) = (float)(dVar14 - dVar17) * 0.25 + fVar1;
      *(float *)(param_1 + 0x18) = (float)(dVar15 - dVar18) * 0.25 + fVar3;
    }
    else if (*(char *)(param_1 + 0x20) == '\x06') {
      iVar12 = rand();
      iVar13 = (uint)*(byte *)(param_2 + 0x1a9) - (uint)*(byte *)(param_2 + 0x1a8);
      *(byte *)(param_2 + 0x1aa) =
           *(byte *)(param_2 + 0x1a8) + ((char)iVar12 - (char)(iVar12 / iVar13) * (char)iVar13);
      *(undefined1 *)(param_1 + 0x20) = 0xb;
      if (*(char *)(param_1 + 0x53) != '\x14') {
        mobyutil::MB_SetAnimation(param_1,0x14,0,(int)(animationSpeed * 10.5));
      }
      *(float *)(param_1 + 0x10) = *param_3;
      *(float *)(param_1 + 0x14) = param_3[1];
      *(float *)(param_1 + 0x18) = param_3[2];
      *(float *)(param_1 + 0x1c) = param_3[3];
    }
    else {
      dVar14 = (double)CollOutput.push.y;
      dVar15 = (double)CollOutput.push.z;
      *(float *)(param_1 + 0x10) = (float)((double)CollOutput.push.x - dVar16) * 0.15 + fVar2;
      *(float *)(param_1 + 0x14) = (float)(dVar14 - dVar17) * 0.15 + fVar1;
      *(float *)(param_1 + 0x18) = (float)(dVar15 - dVar18) * 0.15 + fVar3;
    }
  }
  M820_00473940(param_1,param_2,param_4);
  return;
}



//==== 004743a8  ns=mobyupdate_unsorted  size=0x2120
// sig: undefined UpdateMoby_820(MobyInstance * moby)
// callers(0): 
// callees(51): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000ef74c mobyfunc::UpdateMobyFrameData; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcd60 mobyutil::MB_DistributeBolts; 000fddc0 mobyutil::MB_SetAnimation; 00104e44 mobyutil::PointInsideComplexPoly; 001057f4 mobyutil::SetCollDamIn; 00105d2c mobyutil::CollDamageMobyDirect_wrap; 00106078 mobyutil::MB_EulerToQuat; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 00109298 mobyutil::MB_initJump; 001095b8 mobyutil::MB_updateJump; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c000 mobyutil::MB_CopyHeroLights; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010d7a0 mobyutil::MB_PathFollowToPos; 0010de78 mobyutil::MB_WrapRot; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 001367d0 path::PathFindClosestPnt; 001385d0 path::Path_PickNextNode; 00472fd8 mobyupdate_helpers::M820_00472fd8; 00473058 mobyupdate_helpers::M820_00473058; 00473158 mobyupdate_helpers::M820_00473158; 00473940 mobyupdate_helpers::M820_00473940; 00473d20 mobyupdate_helpers::M820_00473d20; 00473fc0 mobyupdate_helpers::M820_00473fc0; 004fff60 fastfunc::FastDecTimerS32; 005000b4 fastfunc::FastDecTimerU8; 00502730 fastfunc::FastIntToDouble; 005c8318 rand; 005cd098 libc::printf
// strings: 0065844c: 'warning: no path for PATH_DOWN type on moby 820 :%d\n Switching to ALREADY_DOWN state.\n' | 006584a4: 'warning: no path for PATH_DROP type on moby 820 :%d\n Switching to DROP_DOWN state.\n' | 006584fc: 'warning: no path for HOP_OUT type on moby 820 :%d\n Switching to ALREADY_DOWN state.\n'

/* Moby 820 */

void mobyupdate_unsorted::UpdateMoby_820(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  void *pvVar3;
  Spline *pSVar4;
  uint uVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar9;
  int iVar10;
  undefined2 uVar13;
  undefined1 uVar15;
  int iVar11;
  undefined8 uVar8;
  uint uVar12;
  short sVar14;
  int iVar17;
  longlong lVar16;
  ulonglong uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [8];
  int local_218;
  Vec4 VStack_210;
  f32 local_200;
  f32 local_1fc;
  f32 local_1f8;
  f32 local_1f4;
  undefined1 auStack_1f0 [8];
  float local_1e8;
  f32 local_1e0;
  f32 local_1dc;
  f32 local_1d8;
  f32 local_1d4;
  f32 local_1d0;
  f32 local_1cc;
  f32 local_1c8;
  f32 local_1c4;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [8];
  float local_1a8;
  undefined1 auStack_1a0 [16];
  f32 local_190;
  f32 local_18c;
  f32 local_188;
  f32 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  f32 local_178;
  undefined4 local_174;
  undefined1 auStack_170 [8];
  float local_168;
  f32 local_160;
  f32 local_15c;
  f32 local_158;
  f32 local_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  f32 local_130;
  f32 local_12c;
  f32 local_128;
  f32 local_124;
  f32 local_120;
  f32 local_11c;
  f32 local_118;
  f32 local_114;
  undefined1 auStack_110 [8];
  f32 local_108;
  undefined1 auStack_100 [8];
  float local_f8;
  undefined1 auStack_f0 [48];
  Vec4 aVStack_c0 [4];
  MobyInstance *local_80;
  int local_70;
  float local_6c;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  uint local_60;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  longlong local_50;
  
  lVar7 = (longlong)(int)moby;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar3 = moby->pVar;
  uVar18 = ZEXT48(pvVar3);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (moby->state == '\f') goto LAB_004748bc;
  pfVar9 = (float *)mobyutil::MB_damage(lVar7,0x330000,0);
  iVar10 = mobyutil::MB_HandleDamage(moby,pfVar9,uVar18 + 0x20,0,&local_70,0,0,4);
  if (1 < local_70) {
    FUN_005e8338((double)((moby->pos).x - *pfVar9),(double)((moby->pos).y - pfVar9[1]));
    *(undefined4 *)((int)pvVar3 + 0x90) = 0x3e75c28f;
    fVar23 = DAT_0071f418 * 32.0;
    *(undefined4 *)((int)pvVar3 + 0x74) = 0x3a03126f;
    *(float *)((int)pvVar3 + 0x70) = fVar23;
    fVar23 = mobyutil::g_FrameTime;
    *(undefined4 *)((int)pvVar3 + 0x7c) = 0;
    *(undefined1 *)((int)pvVar3 + 0x9d) = 0;
    *(undefined4 *)((int)pvVar3 + 0x84) = 9;
    *(float *)((int)pvVar3 + 0x78) = fVar23 * 5.0;
  }
  if (iVar10 < 6) {
    if (iVar10 < 2) {
      if ((-1 < iVar10) && (0 < iVar10)) {
        *(undefined4 *)((int)pvVar3 + 0x20) = 0;
      }
    }
    else if (iVar10 < 3) {
      *(undefined4 *)((int)pvVar3 + 0x20) = 0;
    }
    else {
      if (iVar10 < 4) goto LAB_00474540;
      *(float *)((int)pvVar3 + 0x78) = mobyutil::g_FrameTime * 7.0;
      if (moby->animationId != '\x11') {
        uVar8 = idol::GetAnimDuration(1);
        mobyutil::MB_SetAnimation(lVar7,0x11,7,uVar8);
      }
      moby->state = '\x10';
    }
  }
  else if (iVar10 < 9) {
    if (iVar10 < 7) {
LAB_00474540:
      *(float *)((int)pvVar3 + 0x78) = mobyutil::g_FrameTime * 6.5;
      if (moby->animationId != '\x10') {
        uVar8 = idol::GetAnimDuration(1);
        mobyutil::MB_SetAnimation(lVar7,0x10,7,uVar8);
      }
      moby->state = '\x10';
    }
    else if (iVar10 < 8) {
      *(float *)((int)pvVar3 + 0x78) = mobyutil::g_FrameTime * 7.0;
      if (moby->animationId != '\x11') {
        mobyutil::MB_SetAnimation(lVar7,0x11,7,1);
      }
      moby->state = '\x10';
    }
    else {
      if (moby->animationId != '\x0f') {
        uVar8 = idol::GetAnimDuration(5);
        mobyutil::MB_SetAnimation(lVar7,0xf,7,uVar8);
      }
      moby->state = '\x0f';
    }
  }
  else if ((iVar10 < 0xb) &&
          (worldUpdateTime ==
           (((int)worldUpdateTime >> 1) +
           (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 1) != 0)) * 2)) {
    iVar10 = rand();
    moby->previousAnimationFrame = '\0';
    moby->animationBlend = 0.9;
    moby->updateId = (char)iVar10 + (char)(iVar10 / 0x17) * -0x17;
    dVar19 = (double)fastfunc::FastIntToDouble(0xd);
    moby->frameSpeed = (float)(1.0 / dVar19);
    mobyfunc::UpdateMobyFrameData(moby);
  }
  if (1 < local_70) {
    uVar12 = (int)*(uint *)((int)pvVar3 + 0x20) >> 0x1f;
    uVar5 = (int)pfVar9[0xb] >> 0x1f;
    fVar23 = pfVar9[0xb];
    if ((int)((uVar5 >> 1 ^ (uint)pfVar9[0xb]) - uVar5) <
        (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar3 + 0x20)) - uVar12)) {
      *(undefined1 *)((int)pvVar3 + 199) = 0xfa;
      *(float *)((int)pvVar3 + 0x20) = *(float *)((int)pvVar3 + 0x20) - fVar23;
      uVar13 = idol::GetAnimDuration(0x3c);
      *(undefined2 *)((int)pvVar3 + 0x26) = uVar13;
      pfVar9[6] = 0.0;
      FUN_005e7f98((double)*(float *)((int)pvVar3 + 0x78),uVar18 + 0x150,pfVar9 + 4);
      *(undefined1 *)((int)pvVar3 + 199) = 0x78;
      mobyutil::MB_UpdateLightsTransition(lVar7,uVar18 + 0xc0);
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0x20) = 0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      fVar23 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar3 + 0x78) = mobyutil::g_FrameTime * 12.0;
      *(float *)((int)pvVar3 + 0x7c) = fVar23 * 10.0;
      mobyutil::MB_VecAtan2Angles
                (*(undefined8 *)(pfVar9 + 4),*(undefined8 *)(pfVar9 + 6),&local_6c,uVar18 + 0x78,
                 uVar18 + 0x7c);
      mobyutil::MB_StartKick((double)local_6c,lVar7,uVar18 + 0x60);
      *(undefined4 *)((int)pvVar3 + 0xb0) = 0x41600000;
      *(undefined4 *)((int)pvVar3 + 0xb4) = 0x41c00000;
      *(undefined1 *)((int)pvVar3 + 199) = 0x78;
      mobyutil::MB_UpdateLightsTransition(lVar7,uVar18 + 0xc0);
      mobyutil::MB_DistributeBolts
                (lVar7,*(undefined1 *)((int)pvVar3 + 0x1ae),*(undefined1 *)((int)pvVar3 + 0x1af),0,
                 0xffffffffffffffff);
      moby->state = '\f';
    }
    if (((uint)pfVar9[0xc] & 1) != 0) {
      FUN_005e7e98(uVar18 + 0x150,pfVar9 + 4);
    }
  }
  moby->damage = -1;
LAB_004748bc:
  mobyutil::MB_ColorDyingMoby(lVar7,uVar18 + 0xc0);
  dVar19 = 100000.0;
  mobyutil::MB_getTarget((double)*(float *)((int)pvVar3 + 0x164),lVar7,&DAT_0047434c,aVStack_c0);
  *(MobyInstance **)((int)pvVar3 + 0x180) = local_80;
  if (local_80 != (MobyInstance *)0x0) {
    FUN_005e7e98(auStack_230,ZEXT48(local_80) + 0x10);
    dVar19 = (double)FUN_005e8588(lVar7 + 0x10,(ulonglong)*(uint *)((int)pvVar3 + 0x180) + 0x10);
    if (((5 < moby->state) && (*(int *)((int)pvVar3 + 0x1a0) != -1)) &&
       (iVar10 = mobyutil::PointInsideComplexPoly
                           (aVStack_c0,(Vec4 *)Splines[*(int *)((int)pvVar3 + 0x1a0)]->points,
                            Splines[*(int *)((int)pvVar3 + 0x1a0)]->cnt), iVar10 == 0)) {
      mobyutil::MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,Splines[*(int *)((int)pvVar3 + 0x1a0)],
                 auStack_230,auStack_230,auStack_68,auStack_64,*(int *)((int)pvVar3 + 0x1a0) * 4,0);
    }
  }
  if (g_heroState == TAKING_DAMAGE) {
    *(undefined1 *)((int)pvVar3 + 0x1ac) = *(undefined1 *)((int)pvVar3 + 0x1ab);
  }
  else {
    fastfunc::FastDecTimerU8(uVar18 + 0x1ac);
  }
  fastfunc::FastDecTimerS32(uVar18 + 0x1bc);
  if (*(int *)((int)pvVar3 + 0x38) != 0) {
    if (*(int *)((int)pvVar3 + 0x1bc) == 0) {
      *(int *)((int)pvVar3 + 0x1bc) = *(int *)((int)pvVar3 + 0x1c0) + *(int *)((int)pvVar3 + 0x1c4);
    }
    *(undefined4 *)((int)pvVar3 + 0x38) = 0;
    libc::printf("\n");
  }
  bVar1 = moby->state;
  if (bVar1 < 9) {
    if (bVar1 == 8) {
      dVar19 = (double)mobyfunc::BlendAnimFrame(moby);
      if ((10.0 < dVar19) && (*(int *)((int)pvVar3 + 0x1b8) != 0)) {
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar7,5,8,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x12';
      }
      if ((moby->field43_0x70 & 2U) == 0) {
        mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_f0,lVar7,1);
        mobyfunc::GetBonePosition(lVar7,1,auStack_1a0);
        iVar10 = collproc::CollMobySphere(0x3fe0000000000000,auStack_1a0);
        if ((iVar10 != 0) && (CollOutput.pMoby == g_heroMobyPtr)) {
          *(undefined4 *)((int)pvVar3 + 0x1b8) = 1;
        }
      }
      else if (*(int *)((int)pvVar3 + 0x1b8) == 0) {
        if (moby->animationId != '\x16') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x06';
      }
      else {
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x12';
      }
      mobyupdate_helpers::M820_00473940(lVar7,uVar18,auStack_230);
    }
    else if (bVar1 == 7) {
      if (((*(uint *)((int)pvVar3 + 0x180) == 0) ||
          (dVar19 = (double)FUN_005e8588(lVar7 + 0x10,
                                         (ulonglong)*(uint *)((int)pvVar3 + 0x180) + 0x10),
          (double)*(float *)((int)pvVar3 + 0x168) < dVar19)) ||
         (*(char *)((int)pvVar3 + 0x1ac) != '\0')) {
        if (moby->animationId != '\x16') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x06';
      }
      else {
        *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
        mobyupdate_helpers::M820_00472fd8(lVar7);
      }
      mobyupdate_helpers::M820_00473940(lVar7,uVar18,auStack_230);
    }
    else if (bVar1 == 6) {
      local_1d0 = (moby->pos).x;
      local_1cc = (moby->pos).y;
      local_1c8 = (moby->pos).z;
      local_1c4 = (moby->pos).w;
      if (*(int *)((int)pvVar3 + 0x1bc) < *(int *)((int)pvVar3 + 0x1c4)) {
        if (((local_80 == (MobyInstance *)0x0) || (*(int *)((int)pvVar3 + 0x1a0) == -1)) ||
           (iVar10 = mobyutil::PointInsideComplexPoly
                               (aVStack_c0,(Vec4 *)Splines[*(int *)((int)pvVar3 + 0x1a0)]->points,
                                Splines[*(int *)((int)pvVar3 + 0x1a0)]->cnt), iVar10 == 0)) {
          moby->state = '\t';
        }
        else if (((*(int *)((int)pvVar3 + 0x180) != 0) &&
                 (mobyfunc::GetBonePosition(lVar7,0,auStack_1c0), dVar19 < 10.0)) &&
                ((iVar10 = collproc::CollLine(auStack_1c0,auStack_230,1,lVar7,0), iVar10 != 0 &&
                 ((CollOutput.pMoby != local_80 && (moby->state = '\n', moby->animationId != '\x14')
                  ))))) {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 10.5));
        }
      }
      iVar10 = mobyupdate_helpers::M820_00473158(lVar7,uVar18,auStack_230,&local_60);
      if (iVar10 != 0) {
        if ((((*(uint *)((int)pvVar3 + 0x180) != 0) &&
             (dVar19 = (double)FUN_005e8588(lVar7 + 0x10,
                                            (ulonglong)*(uint *)((int)pvVar3 + 0x180) + 0x10),
             dVar19 <= (double)*(float *)((int)pvVar3 + 0x168))) &&
            ((int)(((uint)((int)local_60 >> 0x1f) >> 1 ^ local_60) - ((int)local_60 >> 0x1f)) <
             0x3d4ccccd)) ||
           ((*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc) &&
            (*(int *)((int)pvVar3 + 0x1c8) != 0)))) {
          *(undefined1 *)((int)pvVar3 + 0x150) = 0;
          *(undefined1 *)((int)pvVar3 + 0x151) = 0;
          *(undefined1 *)((int)pvVar3 + 0x152) = 0;
          *(undefined1 *)((int)pvVar3 + 0x153) = 0;
          *(undefined1 *)((int)pvVar3 + 0x154) = 0;
          *(undefined1 *)((int)pvVar3 + 0x155) = 0;
          *(undefined1 *)((int)pvVar3 + 0x156) = 0;
          *(undefined1 *)((int)pvVar3 + 0x157) = 0;
          *(undefined1 *)((int)pvVar3 + 0x158) = 0;
          *(undefined1 *)((int)pvVar3 + 0x159) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15a) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15b) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15c) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15d) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15e) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15f) = 0;
          if (*(char *)((int)pvVar3 + 0x1ac) == '\0') {
            *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
            mobyupdate_helpers::M820_00472fd8(lVar7);
          }
          else {
            if (moby->animationId != '\x14') {
              local_50 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\a';
          }
        }
        else {
          lVar16 = lVar7 + 0x10;
          FUN_005e81f0(auStack_1b0,uVar18 + 0x140,lVar16);
          FUN_005e7ed8((double)*(float *)((int)pvVar3 + 0x17c),auStack_1b0,auStack_1b0);
          if ((int)local_1a8 < 1) {
            if (local_1a8 - -*(float *)((int)pvVar3 + 0x178) < 0.0) {
              local_1a8 = -*(float *)((int)pvVar3 + 0x178);
            }
          }
          else if (*(float *)((int)pvVar3 + 0x174) - local_1a8 < 0.0) {
            local_1a8 = *(float *)((int)pvVar3 + 0x174);
          }
          FUN_005e7f54(lVar16,lVar16,auStack_1b0);
          mobyupdate_helpers::M820_00473fc0(lVar7,uVar18,&local_1d0,auStack_230);
        }
      }
      FUN_005e81f0(uVar18 + 0x150,lVar7 + 0x10,&local_1d0);
    }
    else if (bVar1 == 5) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x16') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x06';
      }
    }
    else if (bVar1 == 4) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x13')) {
        local_50 = (longlong)(int)(animationSpeed * 0.5);
        mobyutil::MB_SetAnimation(lVar7,0x13,0,(int)(animationSpeed * 0.5));
      }
      local_1e0 = (moby->pos).x;
      local_1dc = (moby->pos).y;
      local_1d8 = (moby->pos).z;
      local_1d4 = (moby->pos).w;
      fVar23 = *(float *)((int)pvVar3 + 0x158) - *(float *)((int)pvVar3 + 0x194);
      *(float *)((int)pvVar3 + 0x158) = fVar23;
      (moby->pos).z = (moby->pos).z + fVar23;
      iVar10 = collproc::CollLine(&local_1e0,lVar7 + 0x10,2,lVar7,0);
      if (iVar10 != 0) {
        *(f32 *)((int)pvVar3 + 0x110) = (moby->pos).x;
        *(f32 *)((int)pvVar3 + 0x114) = (moby->pos).y;
        *(f32 *)((int)pvVar3 + 0x118) = (moby->pos).z;
        fVar2 = (moby->pos).w;
        *(undefined1 *)((int)pvVar3 + 0x150) = 0;
        *(f32 *)((int)pvVar3 + 0x11c) = fVar2;
        *(undefined1 *)((int)pvVar3 + 0x151) = 0;
        *(undefined1 *)((int)pvVar3 + 0x152) = 0;
        *(undefined1 *)((int)pvVar3 + 0x153) = 0;
        *(undefined1 *)((int)pvVar3 + 0x154) = 0;
        *(undefined1 *)((int)pvVar3 + 0x155) = 0;
        *(undefined1 *)((int)pvVar3 + 0x156) = 0;
        *(undefined1 *)((int)pvVar3 + 0x157) = 0;
        *(undefined1 *)((int)pvVar3 + 0x158) = 0;
        *(undefined1 *)((int)pvVar3 + 0x159) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15a) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15b) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15c) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15d) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15e) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15f) = 0;
        if (moby->animationId != '\x15') {
          local_50 = (longlong)(int)(animationSpeed * 4.5);
          mobyutil::MB_SetAnimation(lVar7,0x15,0,(int)(animationSpeed * 4.5));
        }
        moby->state = '\x05';
      }
      mobyupdate_helpers::M820_00473d20(lVar7,uVar18);
    }
    else if (bVar1 == 3) {
      local_200 = (moby->pos).x;
      local_1fc = (moby->pos).y;
      local_1f8 = (moby->pos).z;
      local_1f4 = (moby->pos).w;
      pSVar4 = Splines[*(int *)((int)pvVar3 + 0x16c)];
      sVar14 = path::Path_PickNextNode(moby,pSVar4,pSVar4->points + pSVar4->cnt + -1,&VStack_210);
      *(short *)((int)pvVar3 + 0x160) = sVar14;
      if ((sVar14 == -1) || (pSVar4->cnt + -1 <= (int)sVar14)) {
        *(f32 *)((int)pvVar3 + 0x110) = (moby->pos).x;
        sVar14 = *(short *)((int)pvVar3 + 0x162);
        *(f32 *)((int)pvVar3 + 0x114) = (moby->pos).y;
        *(f32 *)((int)pvVar3 + 0x118) = (moby->pos).z;
        *(f32 *)((int)pvVar3 + 0x11c) = (moby->pos).w;
        if (sVar14 < 3) {
          if (-1 < sVar14) {
            if (sVar14 < 1) {
              if (moby->animationId != '\x16') {
                local_50 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\x06';
            }
            else {
              mobyupdate_helpers::M820_00473d20(lVar7,uVar18);
              moby->state = '\x04';
            }
          }
        }
        else if (sVar14 == 4) {
          if (moby->animationId != '\x16') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x06';
        }
      }
      else {
        iVar10 = mobyupdate_helpers::M820_00473158(lVar7,uVar18,&VStack_210,0);
        if (iVar10 == 0) {
          fVar23 = *(float *)((int)pvVar3 + 0x158) - *(float *)((int)pvVar3 + 0x194);
          *(float *)((int)pvVar3 + 0x158) = fVar23;
          (moby->pos).z = (moby->pos).z + fVar23;
        }
        else {
          lVar16 = lVar7 + 0x10;
          FUN_005e81f0(auStack_1f0,uVar18 + 0x140,lVar16);
          FUN_005e7ed8((double)*(float *)((int)pvVar3 + 0x17c),auStack_1f0,auStack_1f0);
          if ((int)local_1e8 < 1) {
            if (local_1e8 - -*(float *)((int)pvVar3 + 0x178) < 0.0) {
              local_1e8 = -*(float *)((int)pvVar3 + 0x178);
            }
          }
          else if (*(float *)((int)pvVar3 + 0x174) - local_1e8 < 0.0) {
            local_1e8 = *(float *)((int)pvVar3 + 0x174);
          }
          FUN_005e7f54(lVar16,lVar16,auStack_1f0);
          mobyupdate_helpers::M820_00473fc0(lVar7,uVar18,&local_200,&VStack_210);
        }
      }
      FUN_005e81f0(uVar18 + 0x150,lVar7 + 0x10,&local_200);
    }
    else if (bVar1 == 1) {
      iVar10 = mobyupdate_helpers::M820_00473158(lVar7,uVar18,0,0);
      if (iVar10 == 0) {
        (moby->pos).z = (moby->pos).z - *(float *)((int)pvVar3 + 0x178);
      }
      else {
        lVar16 = lVar7 + 0x10;
        FUN_005e81f0(auStack_220,uVar18 + 0x140,lVar16);
        if (local_218 < 0) {
          FUN_005e8e80((double)*(float *)((int)pvVar3 + 0x174),auStack_220,auStack_220);
        }
        else {
          FUN_005e8e80((double)*(float *)((int)pvVar3 + 0x178),auStack_220,auStack_220);
        }
        FUN_005e7f54(lVar16,lVar16,auStack_220);
      }
      if ((*(uint *)((int)pvVar3 + 0x180) != 0) ||
         (*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc))) {
        dVar19 = (double)FUN_005e8588(lVar7 + 0x10,(ulonglong)*(uint *)((int)pvVar3 + 0x180) + 0x10)
        ;
        if ((dVar19 < (double)*(float *)((int)pvVar3 + 0x164)) ||
           (*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc))) {
          if (*(int *)((int)pvVar3 + 0x1b0) != -1) {
            mobyutil::CollDamageMobyDirect_wrap
                      ((double)*(float *)((int)pvVar3 + 0x1b4),
                       MobyInstance + *(int *)((int)pvVar3 + 0x1b0),lVar7,0x10000,MobyInstance,
                       lVar7 + 0x10);
          }
          sVar14 = *(short *)((int)pvVar3 + 0x162);
          *(undefined4 *)((int)pvVar3 + 0x38) = 0;
          if (sVar14 < 3) {
            if (-1 < sVar14) {
              if (sVar14 < 2) {
                if (moby->animationId != '\a') {
                  uVar8 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar7,7,0,uVar8);
                }
                moby->state = '\x03';
              }
              else {
                if (moby->animationId != '\x13') {
                  uVar8 = idol::GetAnimDuration(0);
                  mobyutil::MB_SetAnimation(lVar7,0x13,0,uVar8);
                }
                moby->state = '\x04';
              }
            }
          }
          else if (sVar14 < 4) {
            mobyutil::MB_initJump
                      (lVar7,uVar18 + 0xd0,
                       Splines[*(int *)((int)pvVar3 + 0x16c)]->points +
                       Splines[*(int *)((int)pvVar3 + 0x16c)]->cnt + -1);
            moby->state = '\r';
          }
          else if (sVar14 < 5) {
            if (moby->animationId != '\x16') {
              local_50 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x06';
          }
        }
      }
    }
    else if (bVar1 == 0) {
      if (*(char *)((int)pvVar3 + 0x1ad) == '\0') {
        *(undefined1 *)((int)pvVar3 + 0x1ad) = 1;
        fVar23 = *(float *)((int)pvVar3 + 0x178) * DAT_0071f408;
        fVar6 = *(float *)((int)pvVar3 + 0x17c) * DAT_0071f408;
        *(float *)((int)pvVar3 + 0x174) = *(float *)((int)pvVar3 + 0x174) * DAT_0071f408;
        *(float *)((int)pvVar3 + 0x178) = fVar23;
        *(float *)((int)pvVar3 + 0x17c) = fVar6;
        *(float *)((int)pvVar3 + 0x194) = *(float *)((int)pvVar3 + 0x194) * DAT_0071f40c;
        uVar15 = idol::GetAnimDuration(*(undefined1 *)((int)pvVar3 + 0x1a8));
        *(undefined1 *)((int)pvVar3 + 0x1a8) = uVar15;
        uVar15 = idol::GetAnimDuration(*(undefined1 *)((int)pvVar3 + 0x1a9));
        *(undefined1 *)((int)pvVar3 + 0x1a9) = uVar15;
        uVar15 = idol::GetAnimDuration(*(undefined1 *)((int)pvVar3 + 0x1ab));
        *(undefined1 *)((int)pvVar3 + 0x1ab) = uVar15;
      }
      *(undefined4 *)((int)pvVar3 + 0x20) = 0x40a00000;
      *(undefined2 *)((int)pvVar3 + 0x24) = 5;
      *(undefined1 *)((int)pvVar3 + 0x28) = 3;
      mobyutil::MB_EulerToQuat((float *)((int)pvVar3 + 0x120),(Vec3 *)&moby->rotation);
      FUN_005e7e98(uVar18 + 0x110,lVar7 + 0x10);
      mobyupdate_helpers::M820_00473158(lVar7,uVar18,0,0);
      if ((*(int *)((int)pvVar3 + 0x16c) == -1) ||
         (Splines[*(int *)((int)pvVar3 + 0x16c)] == (Spline *)0x0)) {
        sVar14 = *(short *)((int)pvVar3 + 0x162);
        if (sVar14 < 2) {
          if (-1 < sVar14) {
            if (sVar14 < 1) {
              uVar12 = (int)moby - (int)MobyInstance;
              libc::printf("warning: no path for PATH_DOWN type on moby 820 :%d\n Switching to ALREADY_DOWN state.\n"
                           ,((int)uVar12 >> 8) + (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
              *(undefined2 *)((int)pvVar3 + 0x162) = 4;
            }
            else {
              uVar12 = (int)moby - (int)MobyInstance;
              libc::printf("warning: no path for PATH_DROP type on moby 820 :%d\n Switching to DROP_DOWN state.\n"
                           ,((int)uVar12 >> 8) + (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
              *(undefined2 *)((int)pvVar3 + 0x162) = 2;
            }
          }
        }
        else if (sVar14 == 3) {
          uVar12 = (int)moby - (int)MobyInstance;
          libc::printf("warning: no path for HOP_OUT type on moby 820 :%d\n Switching to ALREADY_DOWN state.\n"
                       ,((int)uVar12 >> 8) + (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
          *(undefined2 *)((int)pvVar3 + 0x162) = 4;
        }
      }
      else {
        iVar11 = path::PathFindClosestPnt
                           (0.0,(Vec4 *)(lVar7 + 0x10),Splines[*(int *)((int)pvVar3 + 0x16c)]);
        iVar10 = *(int *)((int)pvVar3 + 0x1a0);
        *(short *)((int)pvVar3 + 0x160) = (short)iVar11;
        iVar11 = 0;
        if (0 < Splines[iVar10]->cnt) {
          iVar17 = 0;
          do {
            iVar11 = iVar11 + 1;
            pSVar4 = Splines[iVar10];
            dVar19 = (double)FUN_005e8548((int)&pSVar4->points[0].x + iVar17,
                                          (int)pSVar4 +
                                          ((iVar11 - (iVar11 / pSVar4->cnt) * pSVar4->cnt) * 4 + 4)
                                          * 4);
            *(float *)((int)&Splines[*(int *)((int)pvVar3 + 0x1a0)]->points[0].w + iVar17) =
                 (float)dVar19;
            iVar10 = *(int *)((int)pvVar3 + 0x1a0);
            iVar17 = iVar17 + 0x10;
          } while (iVar11 < Splines[iVar10]->cnt);
        }
      }
      *(undefined1 *)((int)pvVar3 + 0x150) = 0;
      *(undefined1 *)((int)pvVar3 + 0x151) = 0;
      *(undefined1 *)((int)pvVar3 + 0x152) = 0;
      *(undefined1 *)((int)pvVar3 + 0x153) = 0;
      *(undefined1 *)((int)pvVar3 + 0x154) = 0;
      *(undefined1 *)((int)pvVar3 + 0x155) = 0;
      *(undefined1 *)((int)pvVar3 + 0x156) = 0;
      *(undefined1 *)((int)pvVar3 + 0x157) = 0;
      *(undefined1 *)((int)pvVar3 + 0x158) = 0;
      *(undefined1 *)((int)pvVar3 + 0x159) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15a) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15b) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15c) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15d) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15e) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15f) = 0;
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
      if (moby->animationId != '\x14') {
        uVar8 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar7,0x14,0,uVar8);
      }
      uVar12 = (int)moby - (int)MobyInstance;
      dVar19 = (double)fastfunc::FastIntToDouble
                                 (((int)uVar12 >> 8) +
                                  (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
      fVar23 = mobyutil::MB_WrapRot((float)(dVar19 * 3.1415927410125732) * 0.5);
      *(float *)((int)pvVar3 + 0x198) = fVar23;
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      mobyutil::MB_CopyHeroLights(lVar7);
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 0xe) {
    if (bVar1 < 0xb) {
      if (bVar1 < 10) {
        local_190 = (moby->pos).x;
        local_18c = (moby->pos).y;
        local_188 = (moby->pos).z;
        local_184 = (moby->pos).w;
        local_180 = *(undefined4 *)((int)pvVar3 + 0x110);
        local_17c = *(undefined4 *)((int)pvVar3 + 0x114);
        local_174 = *(undefined4 *)((int)pvVar3 + 0x11c);
        local_178 = local_188;
        iVar10 = mobyupdate_helpers::M820_00473158(lVar7,uVar18,&local_180,auStack_5c);
        if (iVar10 != 0) {
          lVar16 = lVar7 + 0x10;
          FUN_005e81f0(auStack_170,uVar18 + 0x140,lVar16);
          FUN_005e7ed8((double)*(float *)((int)pvVar3 + 0x17c),auStack_170,auStack_170);
          if ((int)local_168 < 1) {
            if (local_168 - -*(float *)((int)pvVar3 + 0x178) < 0.0) {
              local_168 = -*(float *)((int)pvVar3 + 0x178);
            }
          }
          else if (*(float *)((int)pvVar3 + 0x174) - local_168 < 0.0) {
            local_168 = *(float *)((int)pvVar3 + 0x174);
          }
          FUN_005e7f54(lVar16,lVar16,auStack_170);
          mobyupdate_helpers::M820_00473fc0(lVar7,uVar18,&local_190,&local_180);
        }
        FUN_005e81f0(uVar18 + 0x150,lVar7 + 0x10,&local_190);
        dVar19 = (double)FUN_005e8030(uVar18 + 0x150);
        if (dVar19 < 0.009999999776482582) {
          if (moby->animationId != '\x14') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\n';
        }
        if (((*(int *)((int)pvVar3 + 0x180) != 0) ||
            (*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc))) &&
           ((local_80 != (MobyInstance *)0x0 &&
            ((*(int *)((int)pvVar3 + 0x1a0) != -1 &&
             (iVar10 = mobyutil::PointInsideComplexPoly
                                 (aVStack_c0,(Vec4 *)Splines[*(int *)((int)pvVar3 + 0x1a0)]->points,
                                  Splines[*(int *)((int)pvVar3 + 0x1a0)]->cnt), iVar10 != 0)))))) {
          dVar19 = (double)FUN_005e8588(auStack_230,uVar18 + 0x110);
          if ((dVar19 < (double)*(float *)((int)pvVar3 + 0x164)) ||
             (*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc))) {
            if (moby->animationId != '\x16') {
              local_50 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
            }
            *(undefined4 *)((int)pvVar3 + 0x38) = 0;
            moby->state = '\x06';
          }
        }
      }
      else {
        local_160 = (moby->pos).x;
        local_15c = (moby->pos).y;
        local_158 = (moby->pos).z;
        local_154 = (moby->pos).w;
        if ((*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc)) &&
           (*(int *)((int)pvVar3 + 0x180) != 0)) {
          moby->state = '\x06';
          if (moby->animationId != '\x16') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
          }
        }
        else if ((local_80 == (MobyInstance *)0x0) ||
                ((*(int *)((int)pvVar3 + 0x1a0) == -1 ||
                 (iVar10 = mobyutil::PointInsideComplexPoly
                                     (aVStack_c0,
                                      (Vec4 *)Splines[*(int *)((int)pvVar3 + 0x1a0)]->points,
                                      Splines[*(int *)((int)pvVar3 + 0x1a0)]->cnt), iVar10 == 0))))
        {
          moby->state = '\t';
        }
        else if ((*(int *)((int)pvVar3 + 0x180) != 0) &&
                ((((mobyfunc::GetBonePosition(lVar7,0,auStack_150), 10.0 <= dVar19 ||
                   (iVar10 = collproc::CollLine(auStack_150,auStack_230,1,lVar7,0), iVar10 == 0)) ||
                  (CollOutput.pMoby == local_80)) &&
                 (moby->state = '\x06', moby->animationId != '\x16')))) {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        mobyupdate_helpers::M820_00473fc0(lVar7,uVar18,&local_160,auStack_230);
      }
    }
    else if (bVar1 < 0xc) {
      mobyupdate_helpers::M820_00473940(lVar7,uVar18,auStack_230);
      iVar10 = fastfunc::FastDecTimerU8(uVar18 + 0x1aa);
      if (iVar10 != 0) {
        if (moby->animationId != '\x16') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x06';
      }
    }
    else if (bVar1 < 0xd) {
      uVar12 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x60));
      if ((uVar12 & 1) != 0) {
        mobyfunc::GetBonePosition(lVar7,0,auStack_140);
        mobyutil::MB_genericExplosion
                  (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4008000000000000,0x3ff0000000000000,
                   0x401c000000000000,lVar7,uVar18 + 0x150,auStack_140,1,0xffffffffffffffff,3,1,5);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      iVar10 = mobyutil::MB_updateJump(lVar7,uVar18 + 0xd0);
      if (iVar10 == 4) {
        *(f32 *)((int)pvVar3 + 0x110) = (moby->pos).x;
        *(f32 *)((int)pvVar3 + 0x114) = (moby->pos).y;
        *(f32 *)((int)pvVar3 + 0x118) = (moby->pos).z;
        *(f32 *)((int)pvVar3 + 0x11c) = (moby->pos).w;
        if (moby->animationId != '\x14') {
          local_50 = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 5.5));
        }
        moby->state = '\n';
      }
    }
  }
  else if (bVar1 < 0x12) {
    if (bVar1 < 0xf) {
      mobyupdate_helpers::M820_00473940(lVar7,uVar18,auStack_230);
      if ((moby->field43_0x70 & 2U) != 0) {
        *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
        mobyupdate_helpers::M820_00473058(lVar7);
      }
    }
    else if (bVar1 < 0x11) {
      local_130 = (moby->pos).x;
      local_12c = (moby->pos).y;
      local_128 = (moby->pos).z;
      local_124 = (moby->pos).w;
      FUN_005e7f54(lVar7 + 0x10,lVar7 + 0x10,uVar18 + 0x150);
      *(float *)((int)pvVar3 + 0x150) = *(float *)((int)pvVar3 + 0x150) * 0.7;
      *(float *)((int)pvVar3 + 0x154) = *(float *)((int)pvVar3 + 0x154) * 0.7;
      *(float *)((int)pvVar3 + 0x158) = *(float *)((int)pvVar3 + 0x158) * 0.7;
      mobyupdate_helpers::M820_00473fc0(lVar7,uVar18,&local_130,auStack_230);
      dVar19 = (double)FUN_005e8030(uVar18 + 0x150);
      if (dVar19 < 0.05000000074505806) {
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        *(undefined1 *)((int)pvVar3 + 0x1ac) = 0;
        *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
        auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar20 = loadVectorLeftIndexed(0x50,0x47434c);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xff;
        uVar15 = storeVectorElementByteIndexed
                           (auVar20 | auVar20 << 8 | auVar20 << 0x10 | auVar20 << 0x18 |
                            auVar20 << 0x20 | auVar20 << 0x28 | auVar20 << 0x30 | auVar20 << 0x38 |
                            auVar20 << 0x40 | auVar20 << 0x48 | auVar20 << 0x50 | auVar20 << 0x58 |
                            auVar20 << 0x60 | auVar20 << 0x68 | auVar20 << 0x70 | auVar20 << 0x78,
                            0x1aa,uVar18);
        *(undefined1 *)((int)pvVar3 + 0x1aa) = uVar15;
        moby->state = '\x13';
        if (moby->animationId != '\t') {
          local_50 = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar7,9,0,(int)(animationSpeed * 5.5));
        }
      }
    }
    else if ((moby->field43_0x70 & 2U) != 0) {
      *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
      mobyupdate_helpers::M820_00472fd8(lVar7);
    }
  }
  else if (bVar1 < 0x13) {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x14') {
        local_50 = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 5.5));
      }
      moby->state = '\n';
    }
  }
  else if (bVar1 < 0x14) {
    local_120 = (moby->pos).x;
    local_11c = (moby->pos).y;
    lVar16 = lVar7 + 0x10;
    local_118 = (moby->pos).z;
    local_114 = (moby->pos).w;
    FUN_005e81f0(auStack_110,lVar16,auStack_230);
    FUN_005e7f98(0x4014000000000000,auStack_110,auStack_110);
    FUN_005e7f54(auStack_110,auStack_110,lVar16);
    local_108 = (moby->pos).z;
    iVar10 = mobyupdate_helpers::M820_00473158(lVar7,uVar18,auStack_110,auStack_58);
    if (iVar10 != 0) {
      FUN_005e81f0(auStack_100,uVar18 + 0x140,lVar16);
      FUN_005e7ed8((double)*(float *)((int)pvVar3 + 0x17c),auStack_100,auStack_100);
      if ((int)local_f8 < 1) {
        if (local_f8 - -*(float *)((int)pvVar3 + 0x178) < 0.0) {
          local_f8 = -*(float *)((int)pvVar3 + 0x178);
        }
      }
      else if (*(float *)((int)pvVar3 + 0x174) - local_f8 < 0.0) {
        local_f8 = *(float *)((int)pvVar3 + 0x174);
      }
      FUN_005e7f54(lVar16,lVar16,auStack_100);
      mobyupdate_helpers::M820_00473fc0(lVar7,uVar18,&local_120,auStack_110);
    }
    FUN_005e81f0(uVar18 + 0x150,lVar16,&local_120);
    iVar10 = fastfunc::FastDecTimerU8(uVar18 + 0x1aa);
    if (iVar10 != 0) {
      mobyupdate_helpers::M820_00472fd8(lVar7);
    }
  }
  mobyutil::MB_RegisterLameShadow(1.2,moby);
  return;
}



//==== 004764c8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1210_004764c8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1210_004764c8(void)

{
  DAT_00877998 = 0x10000;
  return;
}



//==== 004764e0  ns=mobyupdate_unsorted  size=0x19c
// sig: undefined UpdateMoby_{821_1210}(MobyInstance * moby)
// callers(0): 
// callees(2): 000f1114 mobyfunc::GetBonePosition; 00112900 mobyutil::MB_GetOrientation

/* Moby 821
   Moby 1210 */

void mobyupdate_unsorted::UpdateMoby__821_1210_(MobyInstance *moby)

{
  f32 fVar1;
  void *pvVar2;
  Vec4 local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  pvVar2 = moby->pVar;
  if ((moby->modeBits & NO_UPDATE) == NONE) {
    if (moby->state == '\0') {
      *(undefined4 *)((int)pvVar2 + 0x60) = 0;
      *(undefined2 *)((int)pvVar2 + 100) = 0;
      *(undefined1 *)((int)pvVar2 + 0x68) = 4;
      *(undefined2 *)((int)pvVar2 + 0x7e) = 0xd;
      mobyfunc::GetBonePosition((longlong)(int)moby,0,&local_20);
      local_1c = (moby->pos).y - local_1c;
      local_20 = (moby->pos).x - local_20;
      local_18 = (moby->pos).z - local_18;
      moby->drawDistance = 0xff;
      *(float *)((int)pvVar2 + 0xc4) =
           SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c);
      *(f32 *)((int)pvVar2 + 0xa0) = (moby->pos).x;
      *(f32 *)((int)pvVar2 + 0xa4) = (moby->pos).y;
      *(f32 *)((int)pvVar2 + 0xa8) = (moby->pos).z;
      *(f32 *)((int)pvVar2 + 0xac) = (moby->pos).w;
      *(f32 *)((int)pvVar2 + 0xb0) = (moby->rotation).x;
      *(f32 *)((int)pvVar2 + 0xb4) = (moby->rotation).y;
      *(f32 *)((int)pvVar2 + 0xb8) = (moby->rotation).z;
      fVar1 = (moby->rotation).w;
      *(undefined4 *)((int)pvVar2 + 0x5c) = 3;
      *(f32 *)((int)pvVar2 + 0xbc) = fVar1;
      moby->updateDistance = -1;
    }
    local_30.x = (moby->pos).x - *(float *)((int)pvVar2 + 0xa0);
    local_30.y = (moby->pos).y - *(float *)((int)pvVar2 + 0xa4);
    local_30.z = (moby->pos).z - *(float *)((int)pvVar2 + 0xa8);
    local_30.w = (moby->pos).w;
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar2 + 0x20),&local_30,ZEXT48(pvVar2) + 0xb0,
               (longlong)(int)moby + 0x40);
    *(f32 *)((int)pvVar2 + 0xa0) = (moby->pos).x;
    *(f32 *)((int)pvVar2 + 0xa4) = (moby->pos).y;
    *(f32 *)((int)pvVar2 + 0xa8) = (moby->pos).z;
    *(f32 *)((int)pvVar2 + 0xac) = (moby->pos).w;
    *(f32 *)((int)pvVar2 + 0xb0) = (moby->rotation).x;
    *(f32 *)((int)pvVar2 + 0xb4) = (moby->rotation).y;
    *(f32 *)((int)pvVar2 + 0xb8) = (moby->rotation).z;
    *(f32 *)((int)pvVar2 + 0xbc) = (moby->rotation).w;
  }
  return;
}



//==== 004766a8  ns=mobyupdate_helpers  size=0x5e8
// sig: undefined M822_004766a8(void)
// callers(1): 00477b98 mobyupdate_unsorted::UpdateMoby_822
// callees(5): 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 00112900 mobyutil::MB_GetOrientation; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M822_004766a8
               (double param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  ulonglong *puVar11;
  int iVar12;
  MobyInstance *pMVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  float fStack00000040;
  float fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x130;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar18;
  puVar11[0x28] = in_LR;
  puVar11[0x20] = in_f26;
  puVar11[0x21] = in_f27;
  puVar11[0x22] = in_f28;
  puVar11[0x23] = in_f29;
  puVar11[0x24] = in_f30;
  puVar11[0x25] = in_f31;
  puVar11[0x1f] = unaff_r31;
  puVar11[0x1d] = unaff_r29;
  pMVar17 = MobyInstance;
  iVar12 = (int)param_2;
  iVar7 = *(int *)(iVar12 + 0x78);
  iVar8 = *(int *)(iVar7 + 0xc4);
  dVar29 = (double)*(float *)(iVar12 + 0x10);
  dVar28 = (double)*(float *)(iVar12 + 0x14);
  uVar3 = *(undefined4 *)(iVar12 + 0x40);
  dVar27 = (double)*(float *)(iVar12 + 0x18);
  puVar11[0x1b] = unaff_r27;
  *(undefined4 *)(puVar11 + 0x12) = uVar3;
  *(undefined4 *)((int)puVar11 + 0x94) = *(undefined4 *)(iVar12 + 0x44);
  fStack00000044 = (float)param_4;
  *(undefined4 *)(puVar11 + 0x13) = *(undefined4 *)(iVar12 + 0x48);
  fStack0000004c = (f32)param_5;
  *(undefined4 *)((int)puVar11 + 0x9c) = *(undefined4 *)(iVar12 + 0x4c);
  fStack00000040 = (float)((ulonglong)param_4 >> 0x20);
  fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
  pMVar17[iVar8].pos.x = fStack00000040;
  pMVar17[iVar8].pos.y = fStack00000044;
  pMVar17[iVar8].pos.z = fStack00000048;
  pMVar17[iVar8].pos.w = fStack0000004c;
  fVar2 = (float)(param_1 + 1.570796251296997);
  puVar11[0x1e] = unaff_r30;
  dVar25 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar25 = param_1;
  }
  fVar4 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar4 = fVar2;
  }
  dVar31 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar25 < 0.0) {
    dVar31 = dVar25;
  }
  puVar11[0x1c] = unaff_r28;
  uVar9 = *(uint *)(iVar7 + 0xa0);
  fVar5 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  dVar26 = (double)(float)(dVar31 * dVar31);
  fVar6 = fVar5 * fVar5;
  dVar30 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar31));
  fVar2 = fVar6 * fVar6 * fVar5;
  dVar25 = (double)(float)(dVar26 * dVar30);
  fVar4 = fVar6 * fVar2;
  dVar31 = (double)((float)(dVar26 * dVar25) * 2.601887e-06 +
                   (float)(dVar25 * -0.0001980741071747616 +
                          (double)(float)(dVar30 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar26 * dVar31) *
                                                         -0.16666656732559204 + dVar31))));
  dVar25 = (double)(fVar6 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
  fVar4 = -(float)(dVar25 * (double)*(float *)(iVar7 + 0xdc));
  *(float *)(puVar11 + 0xe) = fVar4;
  fVar2 = -(float)(dVar31 * (double)*(float *)(iVar7 + 0xdc));
  *(float *)((int)puVar11 + 0x74) = fVar2;
  dVar26 = 0.0;
  *(undefined4 *)(puVar11 + 0xf) = 0;
  *(float *)(iVar12 + 0x10) = fStack00000040 + fVar4;
  *(f32 *)(iVar12 + 0x18) = fStack00000048;
  *(f32 *)(iVar12 + 0x1c) = fStack0000004c;
  *(float *)(iVar12 + 0x14) = fStack00000044 + fVar2;
  _fStack00000040 = param_4;
  _fStack00000048 = param_5;
  dVar30 = (double)fastfunc::FastWrapRot((float)param_1,3.1415927);
  fVar2 = *(float *)(iVar12 + 0x10);
  fVar4 = *(float *)(iVar12 + 0x14);
  fVar5 = *(float *)(iVar12 + 0x18);
  *(float *)(iVar12 + 0x48) = (float)dVar30;
  *(undefined4 *)(iVar12 + 0x44) = 0;
  *(undefined4 *)((int)puVar11 + 0x8c) = *(undefined4 *)(iVar12 + 0x1c);
  *(float *)(puVar11 + 0x10) = (float)((double)fVar2 - dVar29);
  *(float *)((int)puVar11 + 0x84) = (float)((double)fVar4 - dVar28);
  *(float *)(puVar11 + 0x11) = (float)((double)fVar5 - dVar27);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)(iVar7 + 0x60),(Vec4 *)(puVar11 + 0x10),uVar18 - 0xa0,param_2 + 0x40);
  *(undefined4 *)(iVar7 + 0xcc) = 0;
  *(undefined4 *)(iVar7 + 0xd0) = 0;
  fVar2 = *(float *)(iVar12 + 0x10);
  fVar4 = *(float *)(iVar12 + 0x14);
  uVar3 = *(undefined4 *)(iVar12 + 0x18);
  fVar6 = -(float)(dVar25 * (double)*(float *)(iVar7 + 0xbc));
  *(float *)(puVar11 + 0xe) = fVar6;
  fVar5 = *(float *)(iVar7 + 0xbc);
  *(undefined4 *)(puVar11 + 0xf) = uVar3;
  *(float *)(puVar11 + 0xe) = fVar6 + fVar2;
  *(float *)((int)puVar11 + 0x74) = -(float)(dVar31 * (double)fVar5) + fVar4;
  while (uVar9 != 0xffffffff) {
    uVar23 = ZEXT48(MobyInstance) + ((ulonglong)uVar9 & 0xffffff) * 0x100;
    uVar16 = uVar23 & 0xffffffff;
    pMVar13 = (MobyInstance *)uVar23;
    pvVar10 = pMVar13->pVar;
    *(f32 *)((int)pvVar10 + 0xa0) = (pMVar13->pos).x;
    *(f32 *)((int)pvVar10 + 0xa4) = (pMVar13->pos).y;
    *(f32 *)((int)pvVar10 + 0xa8) = (pMVar13->pos).z;
    *(f32 *)((int)pvVar10 + 0xac) = (pMVar13->pos).w;
    *(f32 *)((int)pvVar10 + 0xb0) = (pMVar13->rotation).x;
    *(f32 *)((int)pvVar10 + 0xb4) = (pMVar13->rotation).y;
    *(f32 *)((int)pvVar10 + 0xb8) = (pMVar13->rotation).z;
    *(f32 *)((int)pvVar10 + 0xbc) = (pMVar13->rotation).w;
    fVar2 = *(float *)((int)pvVar10 + 0xc4);
    fVar4 = *(float *)(puVar11 + 0xe);
    fVar5 = -(float)((double)DAT_008779bc * dVar25) + fVar4;
    fVar6 = -(float)((double)DAT_008779bc * dVar31) + *(float *)((int)puVar11 + 0x74);
    fVar14 = -(float)((double)fVar2 * dVar25) + fVar5;
    (pMVar13->pos).z = *(f32 *)(puVar11 + 0xf);
    (pMVar13->pos).w = fVar4;
    fVar5 = fVar5 - fVar14;
    (pMVar13->pos).x = fVar14;
    fVar2 = -(float)((double)fVar2 * dVar31) + fVar6;
    dVar29 = ABS((double)fVar5);
    fVar6 = fVar6 - fVar2;
    (pMVar13->pos).y = fVar2;
    (pMVar13->pos).z = *(f32 *)(iVar12 + 0x18);
    *(float *)(puVar11 + 0x14) = fVar5;
    dVar28 = ABS((double)fVar6);
    *(float *)((int)puVar11 + 0xa4) = fVar6;
    *(float *)(puVar11 + 0x15) = (float)(dVar29 - dVar28);
    uVar23 = (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1d) & 4;
    dVar27 = ABS((double)*(float *)(puVar11 + 0x14));
    if ((double)*(float *)(puVar11 + 0x15) - dVar26 < 0.0) {
      dVar27 = dVar28;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar28 = ABS((double)*(float *)((int)puVar11 + 0xa4));
    if ((double)*(float *)(puVar11 + 0x15) - dVar26 < 0.0) {
      dVar28 = dVar29;
    }
    fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar29 = dVar26;
    if (dVar26 < dVar27) {
      lVar21 = uVar18 - 0x120;
      lVar20 = uVar18 - 0x84;
      lVar19 = uVar18 - 0x74;
      lVar24 = 2;
      fVar5 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x17) = fVar5;
      *(float *)(puVar11 + 0x16) = fVar5;
      *(float *)((int)puVar11 + 0xb4) = fVar5;
      *(float *)((int)puVar11 + 0xac) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar6;
      *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar5;
      *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0xac) = *(float *)((int)lVar21 + 0x9c) * fVar5 * fVar5;
        iVar7 = (int)lVar20;
        lVar21 = lVar21 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar21 = uVar18 - 0x84;
      lVar24 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar19 = lVar21;
      lVar20 = lVar1;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0xac) = *(float *)((int)lVar20 + 0xac) * fVar5;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar20 = 2;
      lVar19 = lVar1;
      dVar27 = dVar26;
      do {
        iVar7 = (int)lVar19;
        iVar15 = (int)lVar21;
        lVar19 = lVar19 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar7 + 0xac)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar29 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar4);
    }
    dVar27 = (double)fastfunc::FastWrapRot((float)dVar29,(float)dVar26);
    (pMVar13->rotation).z = (float)dVar27;
    (pMVar13->rotation).y = 0.0;
    mobyfunc::UpdateMobyAnimFrame(uVar16);
    mobyfunc::UpdateMobyTransform(pMVar13);
    pMVar13->modeBits = pMVar13->modeBits | (NO_POST_UPDATE|NO_UPDATE);
    mobyfunc::GetBonePosition(uVar16,1,uVar18 - 0xc0);
    *(float *)(puVar11 + 0x10) = (pMVar13->pos).x - *(float *)((int)pvVar10 + 0xa0);
    *(float *)((int)puVar11 + 0x84) = (pMVar13->pos).y - *(float *)((int)pvVar10 + 0xa4);
    *(float *)(puVar11 + 0x11) = (pMVar13->pos).z - *(float *)((int)pvVar10 + 0xa8);
    *(f32 *)((int)puVar11 + 0x8c) = (pMVar13->pos).w;
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar10 + 0x20),(Vec4 *)(puVar11 + 0x10),ZEXT48(pvVar10) + 0xb0
               ,uVar16 + 0x40);
    *(f32 *)((int)pvVar10 + 0xa0) = (pMVar13->pos).x;
    *(f32 *)((int)pvVar10 + 0xa4) = (pMVar13->pos).y;
    *(f32 *)((int)pvVar10 + 0xa8) = (pMVar13->pos).z;
    *(f32 *)((int)pvVar10 + 0xac) = (pMVar13->pos).w;
    *(f32 *)((int)pvVar10 + 0xb0) = (pMVar13->rotation).x;
    uVar9 = *(uint *)((int)pvVar10 + 0xc0);
    *(f32 *)((int)pvVar10 + 0xb4) = (pMVar13->rotation).y;
    *(f32 *)((int)pvVar10 + 0xb8) = (pMVar13->rotation).z;
    *(f32 *)((int)pvVar10 + 0xbc) = (pMVar13->rotation).w;
  }
  pMVar17[iVar8].state = '\0';
  pMVar17[iVar8].modeBits = pMVar17[iVar8].modeBits | (NO_POST_UPDATE|NO_UPDATE);
  return;
}



//==== 00476cb0  ns=mobyupdate_helpers  size=0xc84
// sig: undefined M822_00476cb0(void)
// callers(1): 00477b98 mobyupdate_unsorted::UpdateMoby_822
// callees(10): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 00112900 mobyutil::MB_GetOrientation; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 00502578 fastfunc::FastWrapRot; 005cd098 libc::printf
// strings: 0065855c: 'train engine has no cars!  Deleting moby instance %d\n'

void mobyupdate_helpers::M822_00476cb0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  int iVar12;
  void *pvVar13;
  uint uVar14;
  ulonglong *puVar15;
  MobyInstance *moby;
  MobyInstance *pMVar16;
  int iVar17;
  float fVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar33;
  ulonglong in_f25;
  double dVar34;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  double dVar37;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  Vec4 local_180 [24];
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar1 = uVar20 - 0x200;
  puVar15 = (ulonglong *)lVar1;
  *puVar15 = uVar20;
  puVar15[0x42] = in_LR;
  puVar15[0x36] = in_f22;
  puVar15[0x37] = in_f23;
  puVar15[0x38] = in_f24;
  puVar15[0x39] = in_f25;
  puVar15[0x3a] = in_f26;
  puVar15[0x3b] = in_f27;
  puVar15[0x3c] = in_f28;
  puVar15[0x3d] = in_f29;
  puVar15[0x3e] = in_f30;
  puVar15[0x3f] = in_f31;
  puVar15[0x35] = unaff_r31;
  puVar15[0x2e] = unaff_r24;
  puVar15[0x34] = unaff_r30;
  pMVar16 = MobyInstance;
  moby = (MobyInstance *)param_1;
  pvVar11 = moby->pVar;
  iVar12 = *(int *)((int)pvVar11 + 0xc4);
  dVar41 = (double)(moby->pos).x;
  puVar15[0x33] = unaff_r29;
  fVar4 = (moby->rotation).x;
  pMVar16 = pMVar16 + iVar12;
  dVar40 = (double)(moby->pos).y;
  dVar39 = (double)(moby->pos).z;
  pvVar13 = pMVar16->pVar;
  moby->field45_0x72 = -1;
  fVar5 = (moby->rotation).y;
  *(f32 *)(puVar15 + 0xe) = fVar4;
  fVar4 = (moby->rotation).z;
  *(f32 *)((int)puVar15 + 0x74) = fVar5;
  puVar15[0x32] = unaff_r28;
  fVar5 = (moby->rotation).w;
  uVar14 = *(uint *)((int)pvVar11 + 0xa0);
  *(f32 *)(puVar15 + 0xf) = fVar4;
  puVar15[0x31] = unaff_r27;
  puVar15[0x30] = unaff_r26;
  puVar15[0x2f] = unaff_r25;
  puVar15[0x2d] = unaff_r23;
  *(f32 *)((int)puVar15 + 0x7c) = fVar5;
  if (uVar14 == 0xffffffff) {
    libc::printf("train engine has no cars!  Deleting moby instance %d\n",
                 *(undefined4 *)((int)pvVar11 + 0xb8));
    mobyfunc::DeleteMoby(moby);
  }
  else {
    fVar2 = (float)(dVar40 - (double)(pMVar16->pos).y);
    fVar3 = (float)(dVar41 - (double)(pMVar16->pos).x);
    fVar2 = *(float *)((int)pvVar11 + 0xdc) - SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    *(float *)((int)pvVar13 + 0xfc) = fVar2;
    dVar38 = 0.0;
    if (fVar2 < 0.0) {
      *(undefined4 *)((int)pvVar13 + 0xfc) = 0;
    }
    mobyupdate_unsorted::UpdateMoby_a_lot_10(pMVar16);
    dVar42 = (double)*(float *)((int)pvVar11 + 200);
    dVar36 = 3.1415927410125732;
    dVar28 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
    mobyutil::MB_SphericalToVector((float)dVar42,(float)dVar28,(moby->rotation).y,&local_180[0].x);
    fVar3 = *(float *)((int)puVar15 + 0x84);
    fVar6 = *(float *)(puVar15 + 0x10);
    fVar7 = *(float *)(puVar15 + 0x11);
    fVar8 = (moby->pos).z;
    dVar34 = (double)(moby->rotation).z;
    dVar42 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3);
    fVar2 = (float)((double)*(float *)((int)pvVar11 + 200) / dVar42);
    dVar28 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar28 = (double)(fVar6 * fVar2);
    }
    dVar30 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar30 = (double)(fVar3 * fVar2);
    }
    dVar31 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar31 = (double)(fVar7 * fVar2);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar28 = (double)(fVar6 * fVar2);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar30 = (double)(fVar3 * fVar2);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar31 = (double)(fVar7 * fVar2);
    }
    fVar2 = (float)((double)(moby->pos).x + dVar28);
    fVar3 = (float)((double)(moby->pos).y + dVar30);
    *(float *)(puVar15 + 0x10) = (float)dVar28;
    *(float *)((int)puVar15 + 0x84) = (float)dVar30;
    *(float *)(puVar15 + 0x11) = (float)dVar31;
    (moby->pos).x = fVar2;
    (moby->pos).y = fVar3;
    (moby->pos).z = (float)((double)fVar8 + dVar31);
    fVar2 = (pMVar16->pos).x - fVar2;
    fVar3 = (pMVar16->pos).y - fVar3;
    dVar30 = ABS((double)fVar2);
    dVar31 = ABS((double)fVar3);
    *(float *)((int)puVar15 + 0xd4) = fVar2;
    *(float *)(puVar15 + 0x1b) = fVar3;
    *(float *)((int)puVar15 + 0xdc) = (float)(dVar30 - dVar31);
    dVar28 = 0.7853981852531433;
    uVar22 = (ulonglong)(*(uint *)((int)puVar15 + 0xd4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xdc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x1b) >> 0x1d) & 4;
    dVar42 = ABS((double)*(float *)((int)puVar15 + 0xd4));
    if ((double)*(float *)((int)puVar15 + 0xdc) - dVar38 < 0.0) {
      dVar42 = dVar31;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    dVar31 = ABS((double)*(float *)(puVar15 + 0x1b));
    if ((double)*(float *)((int)puVar15 + 0xdc) - dVar38 < 0.0) {
      dVar31 = dVar30;
    }
    dVar30 = dVar38;
    if (dVar38 < dVar42) {
      lVar21 = uVar20 - 0x1f0;
      lVar24 = uVar20 - 0xc0;
      lVar26 = uVar20 - 0xb0;
      lVar27 = 2;
      fVar6 = (float)(dVar31 - dVar42) / (float)(dVar31 + dVar42);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar15 + 0x28) = fVar6;
      *(float *)((int)puVar15 + 0x144) = fVar6;
      *(float *)(puVar15 + 0x29) = fVar6;
      *(float *)((int)puVar15 + 0x14c) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar15 + 0x144) = *(float *)((int)puVar15 + 0x144) * fVar7;
      *(float *)(puVar15 + 0x29) = *(float *)(puVar15 + 0x29) * fVar6;
      *(float *)((int)puVar15 + 0x14c) = *(float *)((int)puVar15 + 0x14c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar21 + 0x140) = *(float *)((int)lVar21 + 0x130) * fVar6 * fVar6;
        iVar12 = (int)lVar24;
        lVar21 = lVar21 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar26 = uVar20 - 0xc0;
      pfVar25 = (float *)&DAT_007358e0;
      lVar21 = lVar1;
      lVar24 = lVar26;
      do {
        fVar6 = *pfVar25;
        fVar7 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar21 + 0x140) = *(float *)((int)lVar21 + 0x140) * fVar6;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar24 = 2;
      lVar21 = lVar1;
      dVar42 = dVar38;
      do {
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar17 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar12 + 0x140)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar30 = (double)((float)(dVar42 + 0.7853981852531433) * fVar3 + fVar2);
    }
    uVar29 = fastfunc::FastWrapRot((float)dVar30,(float)dVar36);
    dVar37 = 60.0;
    dVar35 = 0.25;
    dVar31 = 0.5;
    dVar33 = 0.01745329238474369;
    fVar2 = (*(float *)((int)pvVar11 + 200) * 60.0) / *(float *)((int)pvVar11 + 0xc0);
    dVar42 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar34,uVar29,(double)(fVar2 * 0.25 * 0.017453292 * DAT_0071f418),
                                (double)(fVar2 * 0.5 * 0.017453292 * DAT_0071f418),
                                (double)(fVar2 * mobyutil::g_FrameTime));
    (moby->rotation).z = (float)dVar42;
    fVar7 = DAT_0071f418;
    fVar2 = (moby->pos).y - (pMVar16->pos).y;
    fVar3 = (moby->pos).x - (pMVar16->pos).x;
    fVar6 = (pMVar16->pos).z - (moby->pos).z;
    dVar30 = ABS((double)fVar6);
    fVar3 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    fVar2 = (moby->rotation).y;
    dVar34 = (double)mobyutil::g_FrameTime;
    *(float *)((int)puVar15 + 0xcc) = fVar6;
    dVar36 = ABS((double)fVar3);
    *(float *)(puVar15 + 0x19) = fVar3;
    *(float *)(puVar15 + 0x1a) = (float)(dVar36 - dVar30);
    fVar3 = *(float *)((int)pvVar11 + 200);
    fVar6 = *(float *)((int)pvVar11 + 0xc0);
    uVar22 = (ulonglong)(*(uint *)(puVar15 + 0x19) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x1a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xcc) >> 0x1d) & 4;
    uVar23 = uVar22 << 2 | 0x735900;
    lVar21 = uVar22 << 2;
    dVar42 = ABS((double)*(float *)(puVar15 + 0x19));
    if ((double)*(float *)(puVar15 + 0x1a) - dVar38 < 0.0) {
      dVar42 = dVar30;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar21);
    dVar30 = ABS((double)*(float *)((int)puVar15 + 0xcc));
    if ((double)*(float *)(puVar15 + 0x1a) - dVar38 < 0.0) {
      dVar30 = dVar36;
    }
    fVar9 = *(float *)((int)uVar23 + 4);
    dVar36 = dVar38;
    if (dVar38 < dVar42) {
      lVar21 = uVar20 - 0x1f0;
      lVar26 = uVar20 - 0xd0;
      lVar24 = uVar20 - 0xe0;
      lVar27 = 2;
      fVar10 = (float)(dVar30 - dVar42) / (float)(dVar30 + dVar42);
      fVar18 = fVar10 * fVar10;
      *(float *)(puVar15 + 0x24) = fVar10;
      *(float *)((int)puVar15 + 0x124) = fVar10;
      *(float *)(puVar15 + 0x25) = fVar10;
      *(float *)((int)puVar15 + 300) = fVar10;
      fVar10 = fVar18 * fVar18;
      *(float *)((int)puVar15 + 0x124) = *(float *)((int)puVar15 + 0x124) * fVar18;
      *(float *)(puVar15 + 0x25) = *(float *)(puVar15 + 0x25) * fVar10;
      *(float *)((int)puVar15 + 300) = *(float *)((int)puVar15 + 300) * fVar10 * fVar18;
      do {
        *(float *)((int)lVar21 + 0x120) = *(float *)((int)lVar21 + 0x110) * fVar10 * fVar10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar10 * fVar10;
        lVar26 = lVar26 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar26 = uVar20 - 0xe0;
      uVar23 = ZEXT48(&DAT_007358e0);
      lVar21 = lVar1;
      lVar24 = lVar26;
      do {
        pfVar25 = (float *)uVar23;
        fVar10 = pfVar25[1];
        uVar23 = uVar23 + 8;
        *(float *)((int)lVar21 + 0x120) = *(float *)((int)lVar21 + 0x120) * *pfVar25;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar24 = 2;
      lVar21 = lVar1;
      dVar42 = dVar38;
      do {
        iVar12 = (int)lVar21;
        iVar17 = (int)lVar26;
        lVar21 = lVar21 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar12 + 0x120)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar36 = (double)((float)(dVar42 + dVar28) * fVar8 + fVar9);
    }
    dVar42 = (double)((float)((double)fVar3 * dVar37) / fVar6);
    dVar42 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)fVar2,dVar36,
                                (double)((float)((double)(float)(dVar42 * dVar35) * dVar33) * fVar7)
                                ,(double)((float)((double)(float)(dVar42 * dVar31) * dVar33) * fVar7
                                         ),(double)(float)(dVar42 * dVar34),lVar21,uVar23,
                                (int)pvVar11 + 0xd0);
    (moby->rotation).y = (float)dVar42;
    mobyfunc::GetBonePosition(param_1,0,uVar20 - 0x170);
    while (uVar14 != 0xffffffff) {
      uVar23 = ZEXT48(MobyInstance) + ((ulonglong)uVar14 & 0xffffff) * 0x100;
      uVar22 = uVar23 & 0xffffffff;
      pMVar19 = (MobyInstance *)uVar23;
      pvVar13 = pMVar19->pVar;
      pMVar19->field45_0x72 = -1;
      mobyfunc::GetBonePosition(uVar22,0,uVar20 - 0x160);
      fVar7 = *(float *)((int)puVar15 + 0x94);
      fVar2 = (float)((double)*(float *)((int)puVar15 + 0xa4) - (double)fVar7);
      fVar8 = *(float *)(puVar15 + 0x12);
      fVar3 = (float)((double)*(float *)(puVar15 + 0x14) - (double)fVar8);
      dVar42 = (double)DAT_008779bc;
      dVar31 = (double)(pMVar19->pos).y;
      dVar33 = (double)(pMVar19->pos).x;
      dVar35 = (double)(pMVar19->pos).z;
      fVar6 = *(float *)(puVar15 + 0x13);
      dVar30 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      fVar9 = *(float *)((int)pvVar13 + 0xc4);
      (pMVar19->pos).w = *(f32 *)((int)puVar15 + 0xac);
      fVar6 = (float)((double)fVar6 - dVar35);
      dVar34 = (double)(fVar2 * (float)(dVar42 / dVar30));
      dVar36 = (double)(fVar3 * (float)(dVar42 / dVar30));
      dVar42 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar42 = dVar34;
      }
      dVar37 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar37 = dVar36;
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar42 = dVar34;
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar37 = dVar36;
      }
      dVar34 = (double)(float)(dVar42 + (double)fVar7);
      dVar36 = (double)(float)(dVar37 + (double)fVar8);
      fVar3 = (float)(dVar34 - dVar31);
      fVar7 = (float)(dVar36 - dVar33);
      dVar30 = (double)SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar3 * fVar3);
      fVar2 = (float)((double)(float)(dVar30 - (double)fVar9) / dVar30);
      dVar42 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar42 = (double)(fVar3 * fVar2);
      }
      dVar37 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar37 = (double)(fVar7 * fVar2);
      }
      dVar32 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar32 = (double)(fVar6 * fVar2);
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar42 = (double)(fVar3 * fVar2);
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar37 = (double)(fVar7 * fVar2);
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar32 = (double)(fVar6 * fVar2);
      }
      fVar2 = (float)(dVar42 + dVar31);
      fVar3 = (float)(dVar37 + dVar33);
      fVar6 = (float)(dVar34 - (double)fVar2);
      fVar7 = (float)(dVar36 - (double)fVar3);
      (pMVar19->pos).y = fVar2;
      (pMVar19->pos).x = fVar3;
      (pMVar19->pos).z = (float)(dVar32 + dVar35);
      dVar36 = ABS((double)fVar6);
      dVar34 = ABS((double)fVar7);
      *(float *)((int)puVar15 + 0xbc) = fVar7;
      *(float *)(puVar15 + 0x18) = fVar6;
      *(float *)((int)puVar15 + 0xc4) = (float)(dVar34 - dVar36);
      uVar23 = (ulonglong)(*(uint *)((int)puVar15 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar15 + 0x18) >> 0x1d) & 4;
      dVar42 = ABS((double)*(float *)((int)puVar15 + 0xbc));
      if ((double)*(float *)((int)puVar15 + 0xc4) - dVar38 < 0.0) {
        dVar42 = dVar36;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      dVar36 = ABS((double)*(float *)(puVar15 + 0x18));
      if ((double)*(float *)((int)puVar15 + 0xc4) - dVar38 < 0.0) {
        dVar36 = dVar34;
      }
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar34 = dVar38;
      if (dVar38 < dVar42) {
        lVar21 = uVar20 - 0x1f0;
        lVar24 = uVar20 - 0x100;
        lVar26 = uVar20 - 0xf0;
        lVar27 = 2;
        fVar6 = (float)(dVar36 - dVar42) / (float)(dVar36 + dVar42);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar15 + 0x20) = fVar6;
        *(float *)((int)puVar15 + 0x104) = fVar6;
        *(float *)(puVar15 + 0x21) = fVar6;
        *(float *)((int)puVar15 + 0x10c) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar15 + 0x104) = *(float *)((int)puVar15 + 0x104) * fVar7;
        *(float *)(puVar15 + 0x21) = *(float *)(puVar15 + 0x21) * fVar6;
        *(float *)((int)puVar15 + 0x10c) = *(float *)((int)puVar15 + 0x10c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0xf0) * fVar6 * fVar6;
          iVar12 = (int)lVar24;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar20 - 0x100;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar1;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar7 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0x100) * fVar6;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar21 = lVar1;
        dVar42 = dVar38;
        do {
          iVar12 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar17 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar12 + 0x100)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar34 = (double)((float)(dVar42 + dVar28) * fVar2 + fVar3);
      }
      dVar42 = (double)fastfunc::FastWrapRot((float)dVar34,(float)dVar38);
      (pMVar19->rotation).z = (float)dVar42;
      fVar2 = (pMVar19->pos).y - *(float *)((int)puVar15 + 0x94);
      fVar3 = (pMVar19->pos).x - *(float *)(puVar15 + 0x12);
      fVar6 = *(float *)(puVar15 + 0x13) - (pMVar19->pos).z;
      fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      *(float *)((int)puVar15 + 0xb4) = fVar6;
      dVar36 = ABS((double)fVar6);
      dVar34 = ABS((double)fVar2);
      *(float *)(puVar15 + 0x16) = fVar2;
      *(float *)(puVar15 + 0x17) = (float)(dVar34 - dVar36);
      uVar23 = (ulonglong)(*(uint *)(puVar15 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar15 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xb4) >> 0x1d) & 4;
      dVar42 = ABS((double)*(float *)(puVar15 + 0x16));
      if ((double)*(float *)(puVar15 + 0x17) - dVar38 < 0.0) {
        dVar42 = dVar36;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      dVar36 = ABS((double)*(float *)((int)puVar15 + 0xb4));
      if ((double)*(float *)(puVar15 + 0x17) - dVar38 < 0.0) {
        dVar36 = dVar34;
      }
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar34 = dVar38;
      if (dVar38 < dVar42) {
        lVar21 = uVar20 - 0x1f0;
        lVar26 = uVar20 - 0x110;
        lVar24 = uVar20 - 0x120;
        lVar27 = 2;
        fVar6 = (float)(dVar36 - dVar42) / (float)(dVar36 + dVar42);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar15 + 0x1c) = fVar6;
        *(float *)((int)puVar15 + 0xe4) = fVar6;
        *(float *)(puVar15 + 0x1d) = fVar6;
        *(float *)((int)puVar15 + 0xec) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar15 + 0xe4) = *(float *)((int)puVar15 + 0xe4) * fVar7;
        *(float *)(puVar15 + 0x1d) = *(float *)(puVar15 + 0x1d) * fVar6;
        *(float *)((int)puVar15 + 0xec) = *(float *)((int)puVar15 + 0xec) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xd0) * fVar6 * fVar6;
          iVar12 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar20 - 0x120;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar1;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar7 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xe0) * fVar6;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar21 = lVar1;
        dVar42 = dVar38;
        do {
          iVar12 = (int)lVar21;
          iVar17 = (int)lVar26;
          lVar21 = lVar21 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar12 + 0xe0)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar34 = (double)((float)(dVar42 + dVar28) * fVar2 + fVar3);
      }
      (pMVar19->rotation).y = (float)-dVar34;
      mobyfunc::UpdateMobyAnimFrame(uVar22);
      mobyfunc::UpdateMobyTransform(pMVar19);
      pMVar19->modeBits = pMVar19->modeBits | (NO_POST_UPDATE|NO_UPDATE);
      mobyfunc::GetBonePosition(uVar22,1,uVar20 - 0x170);
      *(float *)(puVar15 + 0x10) = (pMVar19->pos).x - *(float *)((int)pvVar13 + 0xa0);
      *(float *)((int)puVar15 + 0x84) = (pMVar19->pos).y - *(float *)((int)pvVar13 + 0xa4);
      *(float *)(puVar15 + 0x11) = (pMVar19->pos).z - *(float *)((int)pvVar13 + 0xa8);
      *(f32 *)((int)puVar15 + 0x8c) = (pMVar19->pos).w;
      mobyutil::MB_GetOrientation
                ((MobyInstance *)((int)pvVar13 + 0x20),local_180,ZEXT48(pvVar13) + 0xb0,
                 uVar22 + 0x40);
      *(f32 *)((int)pvVar13 + 0xa0) = (pMVar19->pos).x;
      *(f32 *)((int)pvVar13 + 0xa4) = (pMVar19->pos).y;
      *(f32 *)((int)pvVar13 + 0xa8) = (pMVar19->pos).z;
      *(f32 *)((int)pvVar13 + 0xac) = (pMVar19->pos).w;
      *(f32 *)((int)pvVar13 + 0xb0) = (pMVar19->rotation).x;
      uVar14 = *(uint *)((int)pvVar13 + 0xc0);
      *(f32 *)((int)pvVar13 + 0xb4) = (pMVar19->rotation).y;
      *(f32 *)((int)pvVar13 + 0xb8) = (pMVar19->rotation).z;
      *(f32 *)((int)pvVar13 + 0xbc) = (pMVar19->rotation).w;
    }
    fVar2 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar6 = (moby->pos).z;
    *(f32 *)((int)puVar15 + 0x8c) = (moby->pos).w;
    *(float *)(puVar15 + 0x10) = (float)((double)fVar2 - dVar41);
    *(float *)((int)puVar15 + 0x84) = (float)((double)fVar3 - dVar40);
    *(float *)(puVar15 + 0x11) = (float)((double)fVar6 - dVar39);
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar11 + 0x60),local_180,uVar20 - 400,param_1 + 0x40);
    pMVar16->modeBits = pMVar16->modeBits | (NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}



//==== 00477934  ns=mobyupdate_helpers  size=0x200
// sig: undefined M822_00477934(void)
// callers(1): 00477b98 mobyupdate_unsorted::UpdateMoby_822
// callees(3): 000efb38 mobyfunc::DeleteMoby; 00112900 mobyutil::MB_GetOrientation; 005cd098 libc::printf
// strings: 0065855c: 'train engine has no cars!  Deleting moby instance %d\n'

void mobyupdate_helpers::M822_00477934(longlong param_1)

{
  void *pvVar1;
  uint uVar2;
  MobyInstance *moby;
  int iVar3;
  uint uVar5;
  ulonglong uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vec4 local_50;
  
  moby = (MobyInstance *)param_1;
  pvVar1 = moby->pVar;
  moby->field45_0x72 = '@';
  dVar6 = (double)(moby->pos).x;
  dVar8 = (double)(moby->pos).y;
  dVar10 = (double)(moby->pos).z;
  local_50.w = (moby->pos).w;
  uVar5 = *(uint *)((int)pvVar1 + 0xa0);
  if (uVar5 == 0xffffffff) {
    libc::printf("train engine has no cars!  Deleting moby instance %d\n",
                 *(undefined4 *)((int)pvVar1 + 0xb8));
    mobyfunc::DeleteMoby(moby);
  }
  else {
    dVar7 = dVar6;
    dVar9 = dVar8;
    dVar11 = dVar10;
    if (uVar5 != 0xffffffff) {
      do {
        uVar4 = ZEXT48(MobyInstance) + ((ulonglong)uVar5 & 0xffffff) * 0x100;
        iVar3 = (int)uVar4;
        uVar2 = *(uint *)(iVar3 + 0x78);
        *(undefined1 *)(iVar3 + 0x72) = 0x40;
        local_50.x = *(float *)(iVar3 + 0x10) - *(float *)(uVar2 + 0xa0);
        local_50.y = *(float *)(iVar3 + 0x14) - *(float *)(uVar2 + 0xa4);
        local_50.z = *(float *)(iVar3 + 0x18) - *(float *)(uVar2 + 0xa8);
        local_50.w = *(float *)(iVar3 + 0x1c);
        mobyutil::MB_GetOrientation
                  ((MobyInstance *)(uVar2 + 0x20),&local_50,(ulonglong)uVar2 + 0xb0,
                   (uVar4 & 0xffffffff) + 0x40);
        *(undefined4 *)(uVar2 + 0xa0) = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(uVar2 + 0xa4) = *(undefined4 *)(iVar3 + 0x14);
        *(undefined4 *)(uVar2 + 0xa8) = *(undefined4 *)(iVar3 + 0x18);
        *(undefined4 *)(uVar2 + 0xac) = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined4 *)(uVar2 + 0xb0) = *(undefined4 *)(iVar3 + 0x40);
        uVar5 = *(uint *)(uVar2 + 0xc0);
        *(undefined4 *)(uVar2 + 0xb4) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(uVar2 + 0xb8) = *(undefined4 *)(iVar3 + 0x48);
        *(undefined4 *)(uVar2 + 0xbc) = *(undefined4 *)(iVar3 + 0x4c);
      } while (uVar5 != 0xffffffff);
      dVar6 = (double)(moby->pos).x;
      dVar8 = (double)(moby->pos).y;
      dVar10 = (double)(moby->pos).z;
      local_50.w = (moby->pos).w;
    }
    local_50.x = (float)(dVar6 - dVar7);
    local_50.y = (float)(dVar8 - dVar9);
    local_50.z = (float)(dVar10 - dVar11);
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar1 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x60,
               param_1 + 0x40);
    MobyInstance[*(int *)((int)pvVar1 + 0xc4)].modeBits =
         MobyInstance[*(int *)((int)pvVar1 + 0xc4)].modeBits | (NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}



//==== 00477b98  ns=mobyupdate_unsorted  size=0x1008
// sig: undefined UpdateMoby_822(MobyInstance * moby)
// callers(0): 
// callees(21): 0006dad0 draw::FadeToBlack; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fe484 mobyutil::MB_randRange; 0010d7a0 mobyutil::MB_PathFollowToPos; 00110b70 mobyutil::MB_IsPntInCuboid; 00117c60 mobyutil::MB_HeroStandingOnMoby; 0011ccc8 music::music_SetTransition; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 003c20d0 FUN_003c20d0; 003c20f8 FUN_003c20f8; 004766a8 mobyupdate_helpers::M822_004766a8; 00476cb0 mobyupdate_helpers::M822_00476cb0; 00477934 mobyupdate_helpers::M822_00477934; 004d407c FUN_004d407c; 004fff60 fastfunc::FastDecTimerS32; 005cd098 libc::printf; 005e8338 FUN_005e8338
// strings: 00658594: 'train has no master! Deleting moby instance %d\n' | 006585c4: 'train end path has no STOP NODE!!!\n  Bailing out of the end cutscene before the train goes out of control and kills us all!'

/* Moby 822 */

void mobyupdate_unsorted::UpdateMoby_822(MobyInstance *moby)

{
  char cVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  MobyInstance *pMVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int32_t *piVar18;
  Cuboid *pCVar19;
  int iVar20;
  undefined4 uVar21;
  uint32_t uVar22;
  int iVar23;
  Spline *pSVar24;
  MobyInstance *pMVar25;
  MobyInstance *pMVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float local_c0;
  float local_bc;
  undefined1 auStack_b0 [8];
  float local_a8;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [28];
  
  pvVar5 = moby->pVar;
  uVar27 = ZEXT48(pvVar5);
  uVar9 = (ulonglong)(uint)moby->field71_0xa8 & 0xffff;
  *(int *)((int)pvVar5 + 0xb8) = (int)uVar9;
  if (*(int *)((int)pvVar5 + 0xa4) == -1) {
    *(undefined4 *)((int)pvVar5 + 0x20) = 0;
    *(undefined2 *)((int)pvVar5 + 0x24) = 0;
    *(undefined1 *)((int)pvVar5 + 0x28) = 4;
    *(undefined2 *)((int)pvVar5 + 0x3e) = 0xd;
  }
  else {
    iVar20 = *(int *)((int)pvVar5 + 0xc4);
    if (iVar20 == -1) {
      libc::printf("train has no master! Deleting moby instance %d\n",uVar9);
      mobyfunc::DeleteMoby(moby);
      iVar20 = *(int *)((int)pvVar5 + 0xc4);
    }
    pMVar8 = MobyInstance + iVar20;
    pvVar6 = pMVar8->pVar;
    DAT_00a20824 = 0;
    cVar1 = moby->setByGroup;
    if (cVar1 != '\a') {
      if (cVar1 == '\x06') {
        iVar20 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0xb0));
        if (iVar20 == 0) {
          mobyupdate_helpers::M822_00477934(moby);
        }
        else {
          iVar20 = 0;
          do {
            iVar23 = *(int *)((int)uVar27 + 0xe0);
            pMVar8 = MobyInstance + iVar23;
            if ((((pMVar8 != (MobyInstance *)0x0 && iVar23 != -1) &&
                 (uVar2 = pMVar8->state, uVar2 != 0xfd && uVar2 != 0xfe)) &&
                (pMVar8->oClass == BLARG_COMMANDER_023E)) && (uVar2 == '\x10')) {
              pMVar8->state = '\x11';
            }
            iVar20 = iVar20 + 1;
            uVar27 = uVar27 + 4;
          } while (iVar20 < 8);
          *(undefined4 *)((int)pvVar5 + 0xdc) = 0x41a00000;
          *(undefined4 *)((int)pvVar5 + 200) = *(undefined4 *)((int)pvVar5 + 0xc0);
          moby->setByGroup = '\x01';
        }
      }
      else if (cVar1 == '\x05') {
        pvVar7 = MobyInstance[*(int *)((int)pvVar5 + 0xd8)].pVar;
        mobyupdate_helpers::M822_00476cb0(moby);
        DAT_00a20824 = 1;
        iVar20 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x108));
        if (iVar20 == 0) {
          iVar20 = sound::PlayMobySound(1,4,moby);
          *(int *)((int)pvVar5 + 0x108) = iVar20;
        }
        iVar20 = fastfunc::FastDecTimerS32(uVar27 + 0x104);
        if (iVar20 != 0) {
          sound::PlayMobySound(0,0,moby);
          uVar21 = mobyutil::MB_randRange
                             ((int)(animationSpeed * 900.5),(int)(animationSpeed * 400.5));
          *(undefined4 *)((int)pvVar5 + 0x104) = uVar21;
        }
        if (*(int *)((int)pvVar5 + 0xd4) <= *(int *)((int)pvVar6 + 0x60)) {
          *(undefined4 *)((int)pvVar5 + 0xdc) = 0;
          fVar3 = -(*(float *)((int)pvVar5 + 0xc0) * 0.5263158 * mobyutil::g_FrameTime -
                   *(float *)((int)pvVar5 + 200));
          *(float *)((int)pvVar5 + 200) = fVar3;
          if (fVar3 < 0.0) {
            *(undefined4 *)((int)pvVar5 + 200) = 0;
            fVar3 = 0.0;
          }
          if (fVar3 == 0.0) {
            MobyInstance[*(int *)((int)pvVar5 + 0xd8)].setByGroup = '\0';
            moby->setByGroup = '\x06';
            iVar20 = *(int *)((int)pvVar5 + 0x108);
            *(float *)((int)pvVar5 + 0xc0) = *(float *)((int)pvVar5 + 0xc0) * 0.5;
            if (((iVar20 != -1) && (sound::g_SoundChannels[iVar20].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar20].state != '\0')) {
              sound::sound_Kill(iVar20);
            }
            *(undefined4 *)((int)pvVar5 + 0x108) = 0xffffffff;
          }
        }
        dVar28 = (double)FUN_005e8338((double)(g_heroPosition.x - GameCamera.posX),
                                      (double)(g_heroPosition.y - GameCamera.posY));
        *(float *)((int)pvVar7 + 0x18) = (float)dVar28;
        dVar28 = (double)FUN_005e8338((double)SQRT((GameCamera.posX - g_heroPosition.x) *
                                                   (GameCamera.posX - g_heroPosition.x) +
                                                   (GameCamera.posY - g_heroPosition.y) *
                                                   (GameCamera.posY - g_heroPosition.y)),
                                      (double)(g_heroPosition.z - GameCamera.posZ));
        *(float *)((int)pvVar7 + 0x14) = (float)-dVar28;
      }
      else if (cVar1 == '\x04') {
        fVar3 = *(float *)((int)pvVar5 + 0xc0);
        fVar4 = fVar3 * 0.2 * mobyutil::g_FrameTime + *(float *)((int)pvVar5 + 200);
        *(float *)((int)pvVar5 + 200) = fVar4;
        if (fVar3 < fVar4) {
          *(float *)((int)pvVar5 + 200) = fVar3;
        }
        DAT_00a20824 = 1;
        mobyupdate_helpers::M822_00476cb0(moby);
        iVar20 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x108));
        if (iVar20 == 0) {
          iVar20 = sound::PlayMobySound(1,4,moby);
          *(int *)((int)pvVar5 + 0x108) = iVar20;
        }
        iVar20 = fastfunc::FastDecTimerS32(uVar27 + 0x104);
        if (iVar20 != 0) {
          sound::PlayMobySound(0,0,moby);
          uVar21 = mobyutil::MB_randRange
                             ((int)(animationSpeed * 900.5),(int)(animationSpeed * 400.5));
          *(undefined4 *)((int)pvVar5 + 0x104) = uVar21;
        }
        if ((g_framesNotGrounded == 0) || (hero::g_heroStateType == 3)) {
          *(undefined4 *)((int)pvVar5 + 0x10c) = 0;
        }
        else {
          mobyutil::MB_PathFollowToPos
                    (0x408f380000000000,0x4014000000000000,0,*(undefined4 *)((int)pvVar6 + 0x70),
                     &g_heroPosition,auStack_b0,auStack_a0,auStack_9c);
          fVar3 = animationSpeed;
          iVar20 = *(int *)((int)pvVar5 + 0x10c) + 1;
          *(int *)((int)pvVar5 + 0x10c) = iVar20;
          if (((int)(fVar3 * 60.5) < iVar20) && (g_heroPosition.z < local_a8 - 10.0)) {
            iVar20 = *(int *)((int)pvVar5 + 0x108);
            if ((iVar20 != -1) &&
               ((sound::g_SoundChannels[iVar20].pMoby == moby &&
                (sound::g_SoundChannels[iVar20].state != '\0')))) {
              sound::sound_Kill(iVar20);
              fVar3 = animationSpeed;
            }
            *(undefined4 *)((int)pvVar5 + 0x108) = 0xffffffff;
            draw::FadeToBlack((int)(fVar3 * 16.5));
            g_HeroIsOutOfBounds = 1;
            return;
          }
        }
        if (MobyInstance[*(int *)((int)pvVar5 + 0x100)].setByGroup != '\0') {
          pvVar7 = MobyInstance[*(int *)((int)pvVar5 + 0x100)].pVar;
          dVar28 = (double)FUN_005e8338((double)(g_heroPosition.x - GameCamera.posX),
                                        (double)(g_heroPosition.y - GameCamera.posY));
          *(float *)((int)pvVar7 + 0x18) = (float)dVar28;
          dVar28 = (double)FUN_005e8338((double)SQRT((GameCamera.posX - g_heroPosition.x) *
                                                     (GameCamera.posX - g_heroPosition.x) +
                                                     (GameCamera.posY - g_heroPosition.y) *
                                                     (GameCamera.posY - g_heroPosition.y)),
                                        (double)(g_heroPosition.z - GameCamera.posZ));
          *(float *)((int)pvVar7 + 0x14) = (float)-dVar28;
        }
        if ((g_standingOnMoby != 0) &&
           ((*(short *)(g_standingOnMoby + 0xa6) == 0x336 ||
            (*(short *)(g_standingOnMoby + 0xa6) == 0x4ba)))) {
          FUN_004d407c(g_standingOnMoby,3);
        }
        uVar22 = mobyutil::MB_HeroStandingOnMoby(moby);
        if ((((uVar22 != 0) && (*(int *)((int)pvVar5 + 0xac) != -1)) &&
            (*(int *)((int)pvVar5 + 0xd8) != -1)) &&
           (MobyInstance[*(int *)((int)pvVar5 + 0x100)].setByGroup == '\0')) {
          iVar20 = 0;
          pMVar26 = MobyInstance;
          do {
            iVar23 = *(int *)((int)uVar27 + 0xe0);
            pMVar25 = pMVar26 + iVar23;
            if (((pMVar25 != (MobyInstance *)0x0 && iVar23 != -1) &&
                (pMVar25->state != 0xfd && pMVar25->state != 0xfe)) &&
               (iVar23 = FUN_003c20d0(pMVar25), pMVar26 = MobyInstance, iVar23 == 0)) {
              FUN_003c20f8(pMVar25);
              pMVar26 = MobyInstance;
              break;
            }
            iVar20 = iVar20 + 1;
            uVar27 = uVar27 + 4;
          } while (iVar20 < 8);
          if (*(int *)((int)pvVar5 + 0xd4) == -1) {
            libc::printf(
                        "train end path has no STOP NODE!!!\n  Bailing out of the end cutscene before the train goes out of control and kills us all!"
                        );
          }
          else {
            pMVar26[*(int *)((int)pvVar5 + 0xd8)].setByGroup = '\x01';
            pvVar7 = MobyInstance[*(int *)((int)pvVar5 + 0xd8)].pVar;
            dVar28 = (double)FUN_005e8338((double)(Splines[*(int *)((int)pvVar5 + 0xac)]->points[0].
                                                   x - GameCamera.posX),
                                          (double)(Splines[*(int *)((int)pvVar5 + 0xac)]->points[0].
                                                   y - GameCamera.posY));
            *(float *)((int)pvVar7 + 0x18) = (float)dVar28;
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            fVar3 = GameCamera.posY - pSVar24->points[0].y;
            fVar4 = GameCamera.posX - pSVar24->points[0].x;
            dVar28 = (double)FUN_005e8338((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3),
                                          (double)(pSVar24->points[0].z - GameCamera.posZ));
            *(float *)((int)pvVar7 + 0x14) = (float)-dVar28;
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            dVar28 = (double)FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                                          (double)(pSVar24->points[1].y - pSVar24->points[0].y));
            dVar36 = 3.141592502593994;
            fVar3 = (float)(dVar28 + 1.570796251296997);
            dVar35 = -3.141592502593994;
            dVar34 = -0.16666656732559204;
            dVar33 = 0.008333025500178337;
            dVar32 = -0.0001980741071747616;
            dVar31 = 2.601886990305502e-06;
            dVar28 = 4.0;
            fVar4 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar4 = fVar3;
            }
            fVar10 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
              fVar10 = fVar4;
            }
            fVar11 = fVar10 * fVar10;
            fVar3 = fVar11 * fVar11 * fVar10;
            fVar4 = fVar11 * fVar3;
            Cuboids[*(int *)((int)pvVar7 + 0x28)].pos.x =
                 -((fVar11 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar3 * 0.0083330255 + fVar11 * fVar10 * -0.16666657 + fVar10) *
                  (*(float *)((int)pvVar5 + 0xdc) + 4.0));
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            dVar29 = (double)FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                                          (double)(pSVar24->points[1].y - pSVar24->points[0].y));
            pCVar19 = Cuboids;
            dVar30 = (double)(float)(dVar36 - dVar29);
            if (dVar29 - (double)(float)(dVar36 - dVar29) < 0.0) {
              dVar30 = dVar29;
            }
            dVar36 = (double)(float)(dVar35 - dVar29);
            if ((double)(float)(dVar35 - dVar29) - dVar30 < 0.0) {
              dVar36 = dVar30;
            }
            dVar35 = (double)(float)(dVar36 * dVar36);
            dVar29 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar36));
            dVar30 = (double)(float)(dVar35 * dVar29);
            Cuboids[*(int *)((int)pvVar7 + 0x28)].pos.y =
                 -((float)((double)(float)(dVar35 * dVar30) * dVar31 +
                          (double)(float)(dVar30 * dVar32 +
                                         (double)(float)(dVar29 * dVar33 +
                                                        (double)(float)((double)(float)(dVar35 * 
                                                  dVar36) * dVar34 + dVar36)))) *
                  (float)((double)*(float *)((int)pvVar5 + 0xdc) + dVar28));
            pCVar19[*(int *)((int)pvVar7 + 0x28)].pos.z = 0.0;
            iVar20 = *(int *)((int)pvVar7 + 0x28);
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            fVar3 = pCVar19[iVar20].pos.y;
            fVar4 = pCVar19[iVar20].pos.z;
            pCVar19[iVar20].pos.x = pCVar19[iVar20].pos.x + pSVar24->points[0].x;
            pCVar19[iVar20].pos.y = fVar3 + pSVar24->points[0].y;
            pCVar19[iVar20].pos.z = fVar4 + pSVar24->points[0].z;
            pCVar19[*(int *)((int)pvVar7 + 0x28)].pos.z =
                 pCVar19[*(int *)((int)pvVar7 + 0x28)].pos.z + 2.7;
            iVar20 = *(int *)((int)pvVar7 + 0x28);
            pCVar19[iVar20].rot.w = 0.0;
            pCVar19[iVar20].rot.z = 0.0;
            pCVar19[iVar20].rot.y = 0.0;
            pCVar19[iVar20].rot.x = 0.0;
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            dVar28 = (double)FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                                          (double)(pSVar24->points[1].y - pSVar24->points[0].y));
            auVar37 = ZEXT416(0xffffffff);
            auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
            auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
            Cuboids[*(int *)((int)pvVar7 + 0x28)].rot.z = (float)dVar28;
            auVar37 = loadVectorLeftIndexed(0x50,0x477b34);
            auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar37 = vectorMultiplyAddFloatingPoint
                                (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 |
                                         auVar37 << 0x60,auVar38);
            auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
            auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar21 = storeVectorElementWordIndexed
                               (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x2c,
                                ZEXT48(pvVar7));
            *(undefined4 *)((int)pvVar7 + 0x2cU & 0xfffffffc) = uVar21;
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                         (double)(pSVar24->points[1].y - pSVar24->points[0].y));
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            uVar16._0_4_ = pSVar24->points[0].x;
            uVar16._4_4_ = pSVar24->points[0].y;
            uVar17._0_4_ = pSVar24->points[0].z;
            uVar17._4_4_ = pSVar24->points[0].w;
            mobyupdate_helpers::M822_004766a8(moby,pSVar24,uVar16,uVar17);
            uVar21 = *(undefined4 *)((int)pvVar5 + 0xac);
            *(undefined4 *)((int)pvVar6 + 0x60) = 1;
            *(undefined4 *)((int)pvVar6 + 0x74) = uVar21;
            *(undefined4 *)((int)pvVar6 + 0xf0) = 0x3f800000;
            fVar3 = *(float *)((int)pvVar5 + 0xc0) * 2.0;
            *(float *)((int)pvVar5 + 0xc0) = fVar3;
            *(float *)((int)pvVar6 + 0xfc) = fVar3;
            UpdateMoby_a_lot_10(pMVar8);
            moby->setByGroup = '\x05';
            music::music_SetTransition(0,8);
          }
        }
      }
      else if (cVar1 == '\x03') {
        mobyupdate_helpers::M822_00477934(moby);
        iVar20 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0xb4));
        if (((iVar20 != 0) && (*(int *)((int)pvVar5 + 0x100) != -1)) &&
           ((hero::g_heroStateType < 2 ||
            ((hero::g_heroStateType == 9 || (hero::g_heroStateType == 0xc)))))) {
          moby->setByGroup = '\x04';
          DAT_00a20824 = 1;
          music::music_SetTransition(4,7);
          FUN_004d407c(moby,1);
          MobyInstance[*(int *)((int)pvVar5 + 0x100)].setByGroup = '\x01';
          pvVar6 = MobyInstance[*(int *)((int)pvVar5 + 0x100)].pVar;
          dVar28 = (double)FUN_005e8338((double)(g_heroPosition.x - GameCamera.posX),
                                        (double)(g_heroPosition.y - GameCamera.posY));
          *(float *)((int)pvVar6 + 0x18) = (float)dVar28;
          dVar28 = (double)FUN_005e8338((double)SQRT((GameCamera.posX - g_heroPosition.x) *
                                                     (GameCamera.posX - g_heroPosition.x) +
                                                     (GameCamera.posY - g_heroPosition.y) *
                                                     (GameCamera.posY - g_heroPosition.y)),
                                        (double)(g_heroPosition.z - GameCamera.posZ));
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          *(float *)((int)pvVar6 + 0x14) = (float)-dVar28;
          auVar37 = loadVectorLeftIndexed(4,0x477b34);
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          auVar39 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar21 = storeVectorElementWordIndexed
                             (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x2c,
                              ZEXT48(pvVar6));
          *(undefined4 *)((int)pvVar6 + 0x2cU & 0xfffffffc) = uVar21;
          auVar37 = loadVectorLeftIndexed(8,0x477b34);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar39);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar21 = storeVectorElementWordIndexed
                             (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x104,
                              uVar27);
          *(undefined4 *)((int)pvVar5 + 0x104U & 0xfffffffc) = uVar21;
          *(undefined4 *)((int)pvVar5 + 0x108) = 0xffffffff;
        }
      }
      else if (cVar1 == '\x02') {
        pSVar24 = Splines[*(int *)((int)pvVar5 + 0xa8)];
        FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                     (double)(pSVar24->points[1].y - pSVar24->points[0].y));
        pSVar24 = Splines[*(int *)((int)pvVar5 + 0xa8)];
        uVar14._0_4_ = pSVar24->points[0].x;
        uVar14._4_4_ = pSVar24->points[0].y;
        uVar15._0_4_ = pSVar24->points[0].z;
        uVar15._4_4_ = pSVar24->points[0].w;
        mobyupdate_helpers::M822_004766a8(moby,pSVar24,uVar14,uVar15);
        moby->setByGroup = '\x03';
        iVar20 = *(int *)((int)pvVar5 + 0xa4);
        *(int *)((int)pvVar6 + 0x74) = iVar20;
        pSVar24 = Splines[iVar20];
        *(undefined4 *)((int)pvVar6 + 0x60) = 1;
        *(Spline **)((int)pvVar6 + 0x70) = pSVar24;
        *(undefined4 *)((int)pvVar5 + 200) = 0;
      }
      else if (cVar1 == '\x01') {
        pSVar24 = Splines[*(int *)((int)pvVar5 + 0xa4)];
        uVar12._0_4_ = pSVar24->points[0].x;
        uVar12._4_4_ = pSVar24->points[0].y;
        uVar13._0_4_ = pSVar24->points[0].z;
        uVar13._4_4_ = pSVar24->points[0].w;
        mobyupdate_helpers::M822_004766a8(0,moby,&DAT_00477b34,uVar12,uVar13);
        *(undefined4 *)((int)pvVar6 + 0x74) = *(undefined4 *)((int)pvVar5 + 0xa4);
        *(undefined4 *)((int)pvVar6 + 0xfc) = *(undefined4 *)((int)pvVar5 + 0xc0);
        UpdateMoby_a_lot_10(pMVar8);
        moby->setByGroup = '\x02';
      }
      else if (cVar1 == '\0') {
        *(undefined4 *)((int)pvVar5 + 0x20) = 0;
        *(undefined2 *)((int)pvVar5 + 0x24) = 0;
        *(undefined1 *)((int)pvVar5 + 0x28) = 4;
        *(undefined2 *)((int)pvVar5 + 0x3e) = 0xd;
        mobyfunc::GetBonePosition(moby,0,&local_c0);
        fVar3 = local_bc - (moby->pos).y;
        fVar4 = local_c0 - (moby->pos).x;
        *(float *)((int)pvVar5 + 0xbc) = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        fVar3 = mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar5 + 0xdc) = 0x41a00000;
        fVar3 = *(float *)((int)pvVar5 + 0xc0) * fVar3;
        *(float *)((int)pvVar5 + 0xc0) = fVar3;
        *(float *)((int)pvVar5 + 200) = fVar3;
        if (*(int *)((int)pvVar5 + 0xac) != -1) {
          pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
          *(undefined4 *)((int)pvVar5 + 0xd4) = 0xffffffff;
          piVar18 = &pSVar24->cnt;
          if (0 < *piVar18) {
            iVar20 = 0;
            do {
              if (pSVar24->points[0].w == 1.0) {
                *(int *)((int)pvVar5 + 0xd4) = iVar20;
                break;
              }
              iVar20 = iVar20 + 1;
              pSVar24 = (Spline *)pSVar24->points;
            } while (iVar20 < *piVar18);
          }
        }
        moby->setByGroup = '\x01';
        *(undefined4 *)((int)pvVar5 + 0x9c) = 3;
        pMVar8->modeBits = pMVar8->modeBits | (NO_POST_UPDATE|NO_UPDATE);
      }
    }
  }
  return;
}



//==== 00478ba0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M823_00478ba0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M823_00478ba0(void)

{
  DAT_00877a0c = 0x10000;
  return;
}



//==== 00478be0  ns=mobyupdate_unsorted  size=0x24c
// sig: undefined UpdateMoby_823(MobyInstance * moby)
// callers(0): 
// callees(7): 0006d720 RegisterFuncForMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1ec8 mobyfunc::SetColorOfMoby; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot

/* Moby 823 */

void mobyupdate_unsorted::UpdateMoby_823(MobyInstance *moby)

{
  void *manipulator;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  manipulator = moby->pVar;
  dVar11 = 0.5235987901687622;
  if (moby->state == 0) {
    *(f32 *)((int)manipulator + 0x40) = (moby->rotation).z;
    dVar1 = (double)mobyutil::MB_randRot();
    *(float *)((int)manipulator + 0x48) = (float)dVar1;
    dVar1 = (double)mobyutil::MB_randRot();
    *(float *)((int)manipulator + 0x44) = (float)dVar1;
    dVar11 = (double)mobyutil::MB_randRangeSigned
                               ((double)(float)((double)mobyutil::g_FrameTime * 0.4712388813495636),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar11));
    *(float *)((int)manipulator + 0x50) = (float)dVar11;
    dVar11 = (double)mobyutil::MB_randRangeSigned
                               ((double)(mobyutil::g_FrameTime * 0.20943952),
                                (double)(mobyutil::g_FrameTime * 0.2617994));
    *(float *)((int)manipulator + 0x4c) = (float)dVar11;
    mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
    mobyfunc::AttachManipulator(moby,0,manipulator);
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M825_00478e68_0070edb0,moby);
    dVar2 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)manipulator + 0x44),
                               *(float *)((int)manipulator + 0x4c));
    dVar10 = 3.141592502593994;
    dVar9 = -3.141592502593994;
    dVar8 = -0.16666656732559204;
    dVar7 = 0.008333025500178337;
    dVar6 = -0.0001980741071747616;
    dVar5 = 2.601886990305502e-06;
    dVar1 = (double)(float)(3.141592502593994 - dVar2);
    if (dVar2 - (double)(float)(3.141592502593994 - dVar2) < 0.0) {
      dVar1 = dVar2;
    }
    dVar3 = (double)(float)(-3.141592502593994 - dVar2);
    if ((double)(float)(-3.141592502593994 - dVar2) - dVar1 < 0.0) {
      dVar3 = dVar1;
    }
    *(float *)((int)manipulator + 0x44) = (float)dVar2;
    dVar2 = (double)(float)(dVar3 * dVar3);
    dVar4 = (double)(float)(dVar2 * (double)(float)(dVar2 * dVar3));
    dVar1 = (double)(float)(dVar2 * dVar4);
    dVar1 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)manipulator + 0x40),
                               (float)((double)((float)(dVar2 * dVar1) * 2.601887e-06 +
                                               (float)(dVar1 * -0.0001980741071747616 +
                                                      (double)(float)(dVar4 * 0.008333025500178337 +
                                                                     (double)(float)((double)(float)
                                                  (dVar2 * dVar3) * -0.16666656732559204 + dVar3))))
                                      * dVar11));
    (moby->rotation).z = (float)dVar1;
    dVar2 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)manipulator + 0x48),
                               *(float *)((int)manipulator + 0x50));
    *(float *)((int)manipulator + 0x48) = (float)dVar2;
    dVar1 = (double)(float)(dVar10 - dVar2);
    if (dVar2 - (double)(float)(dVar10 - dVar2) < 0.0) {
      dVar1 = dVar2;
    }
    dVar10 = (double)(float)(dVar9 - dVar2);
    if ((double)(float)(dVar9 - dVar2) - dVar1 < 0.0) {
      dVar10 = dVar1;
    }
    dVar2 = (double)(float)(dVar10 * dVar10);
    dVar1 = (double)(float)(dVar2 * (double)(float)(dVar2 * dVar10));
    dVar9 = (double)(float)(dVar2 * dVar1);
    fastfunc::FastQuaternionToEuler
              ((double)(float)((double)(float)((double)(float)(dVar2 * dVar9) * dVar5 +
                                              (double)(float)(dVar9 * dVar6 +
                                                             (double)(float)(dVar1 * dVar7 +
                                                                            (double)(float)((double)
                                                  (float)(dVar2 * dVar10) * dVar8 + dVar10)))) *
                               dVar11 + dVar11),(int)manipulator + 0x10,1);
  }
  return;
}



//==== 00478e68  ns=mobyupdate_helpers  size=0x604
// sig: undefined M825_00478e68(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 00500ca4 fastfunc::FastEulerToMtx1; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M825_00478e68(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong unaff_r19;
  int iVar16;
  ulonglong unaff_r20;
  uint uVar17;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  undefined4 *puVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar19;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar20;
  ulonglong unaff_r27;
  longlong lVar21;
  ulonglong unaff_r28;
  longlong lVar22;
  ulonglong unaff_r29;
  longlong lVar23;
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
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  undefined1 auVar48 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar49 [16];
  undefined1 auVar47 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x330;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar11;
  puVar6[0x68] = in_LR;
  puVar6[100] = in_f30;
  puVar6[0x65] = in_f31;
  lVar9 = uVar11 - 0x90;
  puVar10 = (undefined4 *)lVar9;
  puVar10[3] = in_vr31_32_3;
  puVar10[2] = in_vr31_32_2;
  puVar10[1] = in_vr31_32_1;
  *puVar10 = in_vr31_32_0;
  puVar6[0x62] = unaff_r30;
  puVar6[0x61] = unaff_r29;
  puVar6[0x60] = unaff_r28;
  puVar6[99] = unaff_r31;
  puVar6[0x5f] = unaff_r27;
  puVar6[0x5e] = unaff_r26;
  puVar6[0x5d] = unaff_r25;
  puVar6[0x5c] = unaff_r24;
  puVar6[0x5b] = unaff_r23;
  puVar6[0x5a] = unaff_r22;
  puVar6[0x59] = unaff_r21;
  puVar6[0x58] = unaff_r20;
  puVar6[0x57] = unaff_r19;
  iVar16 = *(int *)(param_1 + 0x78);
  mobyfunc::GetBonePosition(param_1,0,uVar11 - 0x2b0);
  dVar31 = 0.0;
  *(undefined4 *)(puVar6 + 0xf) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)puVar6 + 0x7c) = 0;
  *(undefined4 *)((int)puVar6 + 0x74) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0;
  fVar4 = *(float *)(iVar16 + 0x48);
  fVar2 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar2 = fVar4;
  }
  fVar3 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar2 = fVar4 * fVar4 * fVar3;
  fVar8 = fVar4 * fVar2;
  *(float *)((int)puVar6 + 0x74) =
       (fVar4 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
       0.5235988 + 0.5235988;
  fastfunc::FastEulerToMtx1(uVar11 - 0x2a0,uVar11 - 0x2c0);
  fVar4 = GameCamera.posY - *(float *)((int)puVar6 + 0x84);
  fVar2 = GameCamera.posX - *(float *)(puVar6 + 0x10);
  fVar8 = GameCamera.posZ - *(float *)(puVar6 + 0x11);
  *(float *)(puVar6 + 0x14) = fVar2;
  *(float *)((int)puVar6 + 0xa4) = fVar4;
  dVar30 = (double)*(float *)((int)puVar6 + 0xb4);
  dVar29 = (double)*(float *)(puVar6 + 0x17);
  dVar28 = (double)*(float *)(puVar6 + 0x16);
  fVar3 = fVar8 * fVar8 + fVar2 * fVar2 + fVar4 * fVar4;
  dVar25 = dVar31;
  dVar26 = dVar31;
  if ((double)SQRT(fVar3) != dVar31) {
    fVar7 = 1.0 / SQRT(fVar3);
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar3 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    dVar31 = (double)(fVar2 * fVar7);
    dVar25 = (double)(fVar4 * fVar7);
    dVar26 = (double)(fVar8 * fVar7);
  }
  *(undefined4 *)((int)puVar6 + 0x9c) = 0;
  *(undefined4 *)((int)puVar6 + 0xac) = 0;
  *(float *)(puVar6 + 0x18) = *(float *)(puVar6 + 0x10);
  *(float *)((int)puVar6 + 0xc4) = *(float *)((int)puVar6 + 0x84);
  fVar4 = (float)(dVar30 * dVar26 - (double)(float)(dVar29 * dVar25));
  dVar27 = (double)fVar4;
  fVar2 = (float)(dVar29 * dVar31 - (double)(float)(dVar28 * dVar26));
  dVar26 = (double)fVar2;
  fVar3 = (float)(dVar28 * dVar25 - (double)(float)(dVar30 * dVar31));
  dVar31 = (double)fVar3;
  *(float *)(puVar6 + 0x12) = fVar4;
  *(float *)((int)puVar6 + 0x94) = fVar2;
  *(float *)(puVar6 + 0x13) = fVar3;
  *(float *)(puVar6 + 0x19) = *(float *)(puVar6 + 0x11);
  *(undefined4 *)((int)puVar6 + 0xcc) = *(undefined4 *)((int)puVar6 + 0x8c);
  *(float *)((int)puVar6 + 0xa4) = (float)(dVar31 * dVar28 - (double)(float)(dVar27 * dVar29));
  *(float *)(puVar6 + 0x15) = (float)(dVar27 * dVar30 - (double)(float)(dVar26 * dVar28));
  *(float *)(puVar6 + 0x14) = (float)(dVar26 * dVar29 - (double)(float)(dVar31 * dVar30));
  uVar12 = draw::GetEffectTex(DAT_00877a60);
  puVar6[0x3b] = uVar12;
  puVar6[0x29] = uVar12;
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x3c] = uVar12;
  puVar6[0x2a] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x3a] = uVar12;
  puVar6[0x28] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_010d99dc,DAT_00877a30,DAT_010d99e0,DAT_00877a34,0x80);
  puVar6[0x3d] = uVar12;
  puVar6[0x2b] = uVar12;
  puVar14 = &DAT_00877a40;
  auVar48 = ZEXT416(0);
  auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  puVar10 = &DAT_00877a44;
  lVar24 = 4;
  lVar15 = lVar1;
  do {
    uVar13 = *puVar14;
    puVar14 = puVar14 + 2;
    iVar16 = (int)lVar15;
    *(undefined4 *)(iVar16 + 0x120) = uVar13;
    uVar5 = *puVar10;
    puVar10 = puVar10 + 2;
    *(undefined4 *)(iVar16 + 0x124) = uVar5;
    *(undefined4 *)(iVar16 + 0x1b0) = uVar13;
    *(undefined4 *)(iVar16 + 0x1b4) = uVar5;
    lVar15 = lVar15 + 8;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  iVar16 = 0;
  auVar47 = auVar48;
  do {
    dVar31 = 0.10000000149011612;
    auVar41 = vectorConvertFromSignedFixedPointWord(auVar48,0);
    auVar42 = ZEXT416(1);
    auVar49 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = loadVectorLeftIndexed(0x2c,0x478e2c);
    auVar45 = loadVectorLeftIndexed(0x30,0x478e2c);
    auVar40 = loadVectorLeftIndexed(0x34,0x478e2c);
    auVar44 = loadVectorLeftIndexed(0x38,0x478e2c);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar43 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar45 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    uVar17 = 0;
    auVar42 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar40 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    lVar24 = uVar11 - 0x260;
    puVar10 = &DAT_00877a70;
    lVar19 = uVar11 - 0x1d0;
    puVar14 = &DAT_00877ab0;
    lVar20 = uVar11 - 0x260;
    lVar21 = uVar11 - 600;
    lVar22 = uVar11 - 0x1d0;
    lVar23 = uVar11 - 0x1c8;
    lVar15 = lVar1;
    auVar42 = auVar47;
    do {
      puVar18 = (undefined4 *)lVar24;
      *puVar18 = *puVar10;
      auVar32 = vectorLogicalAnd(auVar47,auVar49);
      puVar18[1] = puVar10[1];
      uVar13 = puVar10[2];
      puVar6[0x3e] = (longlong)(int)((uVar17 & 1) + iVar16);
      puVar18[2] = uVar13;
      auVar33 = ZEXT416(2);
      puVar18[3] = puVar10[3];
      auVar34._0_4_ = auVar32._0_4_ + auVar48._0_4_;
      auVar34._8_8_ = auVar32._8_8_;
      auVar34._4_4_ = auVar32._4_4_ + auVar48._4_4_;
      auVar35._0_8_ = auVar34._0_8_;
      auVar35._12_4_ = auVar32._12_4_;
      auVar35._8_4_ = auVar32._8_4_ + auVar48._8_4_;
      auVar32._0_12_ = auVar35._0_12_;
      auVar32._12_4_ = auVar35._12_4_ + auVar48._12_4_;
      puVar18 = (undefined4 *)lVar19;
      *puVar18 = *puVar14;
      auVar34 = vectorCompareGreaterThanSignedWord
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar47);
      auVar33 = ZEXT416(0xffffffff);
      puVar18[1] = puVar14[1];
      auVar39 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      puVar18[2] = puVar14[2];
      auVar33 = vectorConditionalSelect
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar49,
                           auVar34);
      puVar18[3] = puVar14[3];
      auVar38 = vectorConvertFromSignedFixedPointWord(auVar33,0);
      uVar13 = fastfunc::FastLerpColor
                         ((double)(float)((double)(longlong)puVar6[0x3e] * dVar31),DAT_00877a38,
                          PTR_DAT_00877a3c);
      auVar33 = ZEXT416(0xffffffff);
      auVar32 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      auVar33 = ZEXT416(0xffffffff);
      auVar34 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      uVar17 = uVar17 + 1;
      auVar35 = loadVectorLeftIndexed(lVar9,lVar20);
      lVar24 = lVar24 + 0x10;
      auVar36 = loadVectorLeftIndexed(lVar9,lVar21);
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar41,auVar43,auVar36);
      auVar37 = loadVectorLeftIndexed(lVar9,lVar22);
      *(undefined4 *)((int)lVar15 + 0x1a0) = uVar13;
      auVar33 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar33);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar39,auVar44,auVar32);
      auVar39._0_4_ = auVar47._0_4_ + auVar49._0_4_;
      auVar39._8_8_ = auVar47._8_8_;
      auVar39._4_4_ = auVar47._4_4_ + auVar49._4_4_;
      auVar46._0_8_ = auVar39._0_8_;
      auVar46._12_4_ = auVar47._12_4_;
      auVar46._8_4_ = auVar47._8_4_ + auVar49._8_4_;
      auVar47._0_12_ = auVar46._0_12_;
      auVar47._12_4_ = auVar46._12_4_ + auVar49._12_4_;
      auVar34 = loadVectorLeftIndexed(lVar9,lVar23);
      puVar10 = puVar10 + 4;
      *(undefined4 *)((int)lVar15 + 0x110) = uVar13;
      lVar19 = lVar19 + 0x10;
      auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar45,auVar34);
      puVar14 = puVar14 + 4;
      lVar15 = lVar15 + 4;
      auVar34 = vectorMultiplyAddFloatingPoint(auVar33,auVar38,auVar35);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar38,auVar37);
      auVar33 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0,lVar20);
      *(undefined4 *)lVar20 = uVar13;
      uVar13 = storeVectorElementWordIndexed
                         (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0,lVar21);
      *(undefined4 *)lVar21 = uVar13;
      lVar20 = lVar20 + 0x10;
      uVar13 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0,lVar22);
      *(undefined4 *)lVar22 = uVar13;
      lVar21 = lVar21 + 0x10;
      uVar13 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0,lVar23);
      *(undefined4 *)lVar23 = uVar13;
      lVar22 = lVar22 + 0x10;
      lVar23 = lVar23 + 0x10;
    } while ((int)uVar17 < 4);
    draw::FastDrawQuad(uVar11 - 0x260,uVar11 - 0x2a0,0,EffectTexHeaders,9);
    draw::FastDrawQuad(uVar11 - 0x1d0,uVar11 - 0x2a0,0,EffectTexHeaders,9);
    iVar16 = iVar16 + 1;
    auVar40._0_4_ = auVar48._0_4_ + auVar49._0_4_;
    auVar40._8_8_ = auVar48._8_8_;
    auVar40._4_4_ = auVar48._4_4_ + auVar49._4_4_;
    auVar41._0_8_ = auVar40._0_8_;
    auVar41._12_4_ = auVar48._12_4_;
    auVar41._8_4_ = auVar48._8_4_ + auVar49._8_4_;
    auVar48._0_12_ = auVar41._0_12_;
    auVar48._12_4_ = auVar41._12_4_ + auVar49._12_4_;
    auVar47 = auVar42;
  } while (iVar16 < 10);
  return;
}



//==== 00479478  ns=mobyupdate_unsorted  size=0xb0
// sig: undefined UpdateMoby_825(MobyInstance * moby)
// callers(0): 
// callees(2): 00112900 mobyutil::MB_GetOrientation; 00502578 fastfunc::FastWrapRot

/* Moby 825 */

void mobyupdate_unsorted::UpdateMoby_825(MobyInstance *moby)

{
  void *pvVar1;
  double dVar2;
  Vec4 local_30;
  f32 local_20;
  f32 local_1c;
  float local_18;
  f32 local_14;
  
  local_30.x = 0.0;
  local_30.y = 0.0;
  local_30.z = 0.0;
  local_30.w = 0.0;
  local_20 = (moby->rotation).x;
  local_1c = (moby->rotation).y;
  moby->drawDistance = 0xff;
  local_18 = (moby->rotation).z;
  moby->updateDistance = -1;
  local_14 = (moby->rotation).w;
  pvVar1 = moby->pVar;
  dVar2 = (double)fastfunc::FastWrapRot(local_18,mobyutil::g_FrameTime * 0.47996554);
  (moby->rotation).z = (float)dVar2;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar1 + 0x20),&local_30,ZEXT48(&stack0x00000000) - 0x20,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 00479538  ns=mobyupdate_unsorted  size=0x340
// sig: undefined UpdateMoby_826(MobyInstance * moby)
// callers(0): 
// callees(4): 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick

/* Moby 826 */

void mobyupdate_unsorted::UpdateMoby_826(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  KickVars *kv;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar11;
  longlong lVar10;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xc0;
  puVar7 = (ulonglong *)lVar10;
  *puVar7 = uVar9;
  puVar7[0x1a] = in_LR;
  puVar7[0x17] = unaff_r31;
  bVar1 = moby->state;
  puVar7[0x16] = unaff_r30;
  kv = (KickVars *)moby->pVar;
  if (bVar1 == 0) {
    iVar11 = mobyutil::MB_damage(moby,0x330000,0);
    if (iVar11 != 0) {
      kv->zOfs = 0.5;
      fVar3 = DAT_00877af0 * DAT_0071f418;
      kv->drag = 0.0005;
      kv->radius = 0x200;
      kv->grav = fVar3;
      fVar3 = mobyutil::g_FrameTime;
      kv->xySpeed = DAT_00877af4 * mobyutil::g_FrameTime;
      fVar4 = DAT_00877af8;
      kv->type = '\0';
      uVar12 = DAT_010d99e4;
      kv->peakFrame = 3.0;
      *(undefined4 *)&kv->field_0x54 = 0x41100000;
      kv->flag = uVar12 & 0x10 | 9;
      kv->zSpeed = fVar4 * fVar3;
      uVar12 = *(uint *)(iVar11 + 0x10);
      uVar6 = *(uint *)(iVar11 + 0x14);
      fVar2 = ABS(*(float *)(iVar11 + 0x10));
      fVar4 = ABS(*(float *)(iVar11 + 0x14));
      *(float *)(puVar7 + 0xe) = fVar2 - fVar4;
      dVar19 = 0.0;
      uVar14 = (ulonglong)(uVar12 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)(uVar6 >> 0x1d) & 4;
      lVar13 = uVar14 << 2;
      fVar3 = fVar2;
      if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar13);
      if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
        fVar4 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
      if (0.0 < fVar3) {
        lVar16 = uVar9 - 0xb0;
        lVar15 = uVar9 - 0x4c;
        lVar13 = uVar9 - 0x3c;
        lVar18 = 2;
        fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar7 + 0x10) = fVar3;
        *(float *)(puVar7 + 0xf) = fVar3;
        *(float *)((int)puVar7 + 0x7c) = fVar3;
        *(float *)((int)puVar7 + 0x74) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar4;
        *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar3;
        *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 100) * fVar3 * fVar3;
          iVar11 = (int)lVar15;
          lVar16 = lVar16 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
          lVar13 = lVar13 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar16 = uVar9 - 0x4c;
        pfVar17 = (float *)&DAT_007358e0;
        lVar18 = 4;
        lVar13 = lVar16;
        lVar15 = lVar10;
        do {
          fVar3 = *pfVar17;
          fVar4 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 0x74) * fVar3;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
          lVar13 = lVar13 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar13 = 2;
        lVar15 = 2;
        do {
          iVar11 = (int)lVar10;
          lVar10 = lVar10 + 0x10;
          iVar8 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar11 + 0x74)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar2);
      }
      mobyutil::MB_StartKick(dVar19,moby,kv,lVar13,1,1,0);
      moby->state = '\x01';
      moby->damage = -1;
    }
  }
  else if (bVar1 < 2) {
    uVar12 = mobyutil::MB_UpdateKick(moby,kv);
    if (((uVar12 & 0x40) != 0) && (moby->state = '\0', moby->animationId != '\0')) {
      puVar7[0x13] = (longlong)(int)(animationSpeed * 5.5);
      mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar7 + 0x9c));
    }
    moby->damage = -1;
  }
  return;
}



//==== 00479880  ns=mobyupdate_helpers  size=0x2ec
// sig: undefined M827_00479880(void)
// callers(1): 0047b1f0 mobyupdate_unsorted::UpdateMoby_827
// callees(3): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 001145d8 mobyutil::MB_PushOutOfSplineWalls

void mobyupdate_helpers::M827_00479880
               (double param_1,double param_2,int param_3,float *param_4,undefined8 param_5,
               undefined8 param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  fVar2 = *(float *)(param_3 + 0xe4);
  fVar3 = *(float *)(param_3 + 0xe0);
  fVar4 = *(float *)(param_3 + 0xe8);
  dVar12 = 0.0;
  dVar9 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)(param_1 / dVar9);
  fVar5 = *param_4;
  dVar10 = dVar12;
  if (0.0 - dVar9 < 0.0) {
    dVar10 = (double)(fVar2 * fVar1);
  }
  dVar13 = dVar12;
  if (0.0 - dVar9 < 0.0) {
    dVar13 = (double)(fVar3 * fVar1);
  }
  dVar14 = dVar12;
  if (0.0 - dVar9 < 0.0) {
    dVar14 = (double)(fVar4 * fVar1);
  }
  if (dVar9 - 0.0 < 0.0) {
    dVar10 = (double)(fVar2 * fVar1);
  }
  if (dVar9 - 0.0 < 0.0) {
    dVar13 = (double)(fVar3 * fVar1);
  }
  if (dVar9 - 0.0 < 0.0) {
    dVar14 = (double)(fVar4 * fVar1);
  }
  fVar1 = SQRT((float)(dVar14 * dVar14 +
                      (double)(float)(dVar13 * dVar13 + (double)(float)(dVar10 * dVar10))));
  dVar8 = (double)(-mobyutil::g_FrameTime / fVar1);
  dVar9 = dVar12;
  if (0.0 - fVar1 < 0.0) {
    dVar9 = (double)(float)(dVar8 * dVar10);
  }
  dVar11 = dVar12;
  if (0.0 - fVar1 < 0.0) {
    dVar11 = (double)(float)(dVar8 * dVar14);
  }
  if (0.0 - fVar1 < 0.0) {
    dVar12 = (double)(float)(dVar8 * dVar13);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar9 = (double)(float)(dVar8 * dVar10);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar11 = (double)(float)(dVar8 * dVar14);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar12 = (double)(float)(dVar8 * dVar13);
  }
  param_4[1] = (float)((double)param_4[1] + dVar9);
  param_4[2] = (float)((double)param_4[2] + dVar11);
  *param_4 = (float)((double)fVar5 + dVar12);
  *(float *)(param_3 + 0x10) = *(float *)(param_3 + 0x10) + (float)((double)fVar5 + dVar12);
  *(float *)(param_3 + 0x14) = *(float *)(param_3 + 0x14) + param_4[1];
  *(float *)(param_3 + 0x18) = *(float *)(param_3 + 0x18) + param_4[2];
  if ((param_2 < (double)SQRT(param_4[2] * param_4[2] +
                              *param_4 * *param_4 + param_4[1] * param_4[1])) &&
     (iVar6 = collproc::CollLine(local_60,local_50,0,param_3,0), iVar6 != 0)) {
    dVar12 = (double)CollOutput.ip.x;
    dVar9 = (double)CollOutput.ip.y;
    dVar8 = (double)CollOutput.ip.z;
    *(float *)(param_3 + 0x1c) = CollOutput.ip.w;
    *(float *)(param_3 + 0x10) = (float)(dVar12 - dVar13);
    *(float *)(param_3 + 0x14) = (float)(dVar9 - dVar10);
    *(float *)(param_3 + 0x18) = (float)(dVar8 - dVar14);
  }
  iVar6 = 0;
  do {
    iVar7 = collproc::CollSphere(param_2,local_50);
    if (iVar7 == 0) break;
    dVar12 = (double)CollOutput.push.x;
    dVar9 = (double)CollOutput.push.y;
    iVar6 = iVar6 + 1;
    dVar8 = (double)CollOutput.push.z;
    *(float *)(param_3 + 0x1c) = CollOutput.push.w;
    *(float *)(param_3 + 0x10) = (float)(dVar12 - dVar13);
    *(float *)(param_3 + 0x14) = (float)(dVar9 - dVar10);
    *(float *)(param_3 + 0x18) = (float)(dVar8 - dVar14);
  } while (iVar6 < 6);
  if (param_7 != 0) {
    mobyutil::MB_PushOutOfSplineWalls
              (0x3fe0000000000000,*(undefined4 *)(*(int *)(param_3 + 0x78) + 0x1ec),
               *(int *)(param_3 + 0x78),param_3 + 0x10,param_3 + 0x10);
  }
  return;
}



//==== 00479b78  ns=mobyupdate_helpers  size=0x294
// sig: undefined M827_00479b78(void)
// callers(1): 0047b1f0 mobyupdate_unsorted::UpdateMoby_827
// callees(3): 0010bf98 mobyutil::MB_TransformToQuat; 00501848 fastfunc::FastSlerp; 00501ab0 fastfunc::FastQuaternionToMtx4

void mobyupdate_helpers::M827_00479b78(longlong param_1)

{
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 local_80 [56];
  
  mobyutil::MB_TransformToQuat(auStack_a0,param_1 + 0xc0);
  mobyutil::MB_TransformToQuat(auStack_90,local_80);
  fastfunc::FastSlerp((double)DAT_00877b0c,auStack_a0,auStack_a0,auStack_90);
  fastfunc::FastQuaternionToMtx4(auStack_a0,param_1 + 0xc0);
  return;
}



//==== 00479e20  ns=mobyupdate_helpers  size=0x160
// sig: undefined M827_00479e20(void)
// callers(1): 0047b1f0 mobyupdate_unsorted::UpdateMoby_827
// callees(1): 00057820 collproc::CollLine

void mobyupdate_helpers::M827_00479e20(void)

{
  undefined1 local_30 [16];
  undefined1 local_20 [32];
  
  collproc::CollLine(local_20,local_30,2,0,0);
  return;
}



//==== 00479fa8  ns=mobyupdate_helpers  size=0x380
// sig: undefined M827_00479fa8(void)
// callers(2): 0047aa38 mobyupdate_helpers::M827_0047aa38; 0047b1f0 mobyupdate_unsorted::UpdateMoby_827
// callees(5): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0015d12c sound::PlayMobySound; 0028cce0 mobyupdate_helpers::M1488_0028cce0

void mobyupdate_helpers::M827_00479fa8(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 in_r8;
  undefined8 in_r9;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  
  pvVar1 = param_1->pVar;
  sound::PlayMobySound(4,0,param_1);
  uVar7 = 0x3fe0000000000000;
  iVar4 = 0;
  dVar8 = 1.0;
  dVar9 = 4.0;
  dVar10 = 0.0;
  dVar11 = -0.625;
  dVar12 = 0.625;
  dVar13 = 1.25;
  uVar5 = 0x3fd3333340000000;
  uVar6 = 0x3fe3333340000000;
  do {
    mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar13);
    M1488_0028cce0(uVar5,uVar6,*(undefined4 *)((int)pvVar1 + 0x20c),local_c0,local_b0,&DAT_00a15d30,
                   0x165,in_r8,in_r9,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0;
  uVar5 = 0x3fe6666660000000;
  do {
    mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar13);
    uVar2 = *(undefined4 *)((int)pvVar1 + 0x20c);
    iVar3 = mobyutil::MB_randInt(2);
    M1488_0028cce0(uVar7,uVar5,uVar2,local_c0,local_a0,&DAT_00a15d30,iVar3 + 0x166,in_r8,in_r9,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar1 + 0x20c));
  *(undefined4 *)((int)pvVar1 + 0x20c) = 0;
  return;
}



//==== 0047a338  ns=mobyupdate_helpers  size=0x1ac
// sig: undefined M827_0047a338(void)
// callers(0): 
// callees(5): 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000fea60 mobyutil::MB_randSphere; 00121740 partupd::SpawnPart_4
// strings: 0047a32c: '?fff' (raw)

void mobyupdate_helpers::M827_0047a338(void)

{
  float fVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  float afStack_80 [4];
  undefined1 local_70 [32];
  
  iVar4 = 0;
  dVar7 = 1.7999999523162842;
  uVar8 = 0;
  dVar9 = 0.5;
  do {
    dVar5 = (double)mobyutil::MB_randRot();
    dVar6 = (double)mobyutil::MB_randRot();
    mobyutil::MB_SphericalToVector
              ((float)((double)mobyutil::g_FrameTime * dVar7),(float)dVar5,(float)dVar6,afStack_80);
    mobyutil::MB_randSphere(uVar8,dVar9,local_70);
    iVar3 = mobyutil::MB_randRange(0x14,0x23);
    fVar1 = animationSpeed * (float)((double)(longlong)iVar3 + dVar9);
    uVar2 = mobyutil::MB_randRange(0x28,0x3c);
    partupd::SpawnPart_4(local_70,afStack_80,0x7000a0ff,0xff,(int)fVar1,0x1e,uVar2,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x14);
  return;
}



//==== 0047a518  ns=mobyupdate_helpers  size=0x4d4
// sig: undefined M827_0047a518(void)
// callers(1): 0047aa38 mobyupdate_helpers::M827_0047aa38
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00110950 mobyutil::MB_RandomizeVector; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M827_0047a518(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  longlong local_a0;
  
  iVar11 = 0;
  if (0 < DAT_00877b1c) {
    do {
      local_d0 = *(float *)(param_1 + 0x10);
      local_cc = *(undefined4 *)(param_1 + 0x14);
      local_c8 = *(float *)(param_1 + 0x18);
      local_c4 = *(undefined4 *)(param_1 + 0x1c);
      mobyutil::MB_RandomizeVector(DAT_00877b24,&local_d0);
      local_c8 = local_c8 + 0.25;
      dVar13 = (double)mobyutil::MB_randRot();
      dVar14 = (double)mobyutil::MB_randRangeFloat(DAT_00877b30,DAT_00877b34);
      dVar15 = (double)mobyutil::MB_randRangeFloat(DAT_00877b38,DAT_00877b3c);
      dVar18 = 0.0;
      dVar16 = (double)mobyutil::MB_randRangeFloat(0.0,DAT_010d99f0);
      dVar17 = (double)mobyutil::g_FrameTime;
      fVar2 = (float)(dVar16 * dVar17);
      local_b4 = param_2[3];
      fVar1 = (float)(dVar13 + 1.570796251296997);
      local_b8 = (float)(dVar17 * dVar15 + (double)(param_2[2] * fVar2));
      dVar15 = (double)(float)(3.141592502593994 - dVar13);
      if (dVar13 - (double)(float)(3.141592502593994 - dVar13) < 0.0) {
        dVar15 = dVar13;
      }
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      dVar16 = (double)(float)(-3.141592502593994 - dVar13);
      if ((double)(float)(-3.141592502593994 - dVar13) - dVar15 < 0.0) {
        dVar16 = dVar15;
      }
      local_a0 = (longlong)DAT_00877b60;
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar15 = (double)(float)(dVar16 * dVar16);
      fVar5 = fVar4 * fVar4;
      dVar19 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar16));
      fVar1 = fVar5 * fVar5 * fVar4;
      dVar13 = (double)(float)(dVar15 * dVar19);
      fVar3 = fVar5 * fVar1;
      local_bc = (float)(dVar17 * dVar14) *
                 ((float)(dVar15 * dVar13) * 2.601887e-06 +
                 (float)(dVar13 * -0.0001980741071747616 +
                        (double)(float)(dVar19 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar15 * dVar16) *
                                                       -0.16666656732559204 + dVar16)))) +
                 param_2[1] * fVar2;
      local_c0 = (float)(dVar17 * dVar14) *
                 (fVar5 * fVar3 * 2.601887e-06 +
                 fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4)
                 + *param_2 * fVar2;
      dVar15 = 0.5;
      iVar12 = 0;
      local_a8 = -(DAT_00877b40 * DAT_0071f418 *
                   (float)(longlong)(animationSpeed * (float)((double)local_a0 + 0.5)) - local_b8);
      local_b0 = local_c0;
      local_ac = local_bc;
      local_a4 = local_b4;
      if (0 < DAT_00877b20) {
        dVar13 = 1.5;
        dVar14 = 1.0;
        dVar16 = 2.5;
        do {
          dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar13);
          local_b4 = (float)((double)DAT_00877b44 * dVar17);
          local_a4 = (float)((double)DAT_00877b48 * dVar17);
          mobyutil::MB_RandomizeVector(DAT_00877b28,&local_d0);
          mobyutil::MB_RandomizeVector(DAT_00877b2c * mobyutil::g_FrameTime,&local_b0);
          uVar7 = DAT_00877b54;
          uVar6 = DAT_00877b4c;
          mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar14);
          uVar8 = fastfunc::FastLerpColor(uVar6,uVar7);
          uVar7 = DAT_00877b58;
          uVar6 = DAT_00877b50;
          mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar14);
          uVar9 = fastfunc::FastLerpColor(uVar6,uVar7);
          fVar1 = animationSpeed * (float)((double)(longlong)DAT_00877b5c + dVar15);
          local_a0 = (longlong)DAT_00877b64;
          fVar2 = animationSpeed * (float)((double)(longlong)DAT_00877b60 + dVar15);
          dVar17 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)local_a0 * dVar15),
                                      (float)((double)local_a0 * dVar16));
          uVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
          partupd::SpawnPart_2
                    (&local_d0,&local_c0,&local_b0,uVar8,uVar9,(int)fVar1,(int)fVar2,uVar10);
          iVar12 = iVar12 + 1;
        } while (iVar12 < DAT_00877b20);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < DAT_00877b1c);
  }
  return;
}



//==== 0047aa38  ns=mobyupdate_helpers  size=0x740
// sig: undefined M827_0047aa38(void)
// callers(1): 0047b1f0 mobyupdate_unsorted::UpdateMoby_827
// callees(20): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000fea60 mobyutil::MB_randSphere; 00104e44 mobyutil::PointInsideComplexPoly; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00111ba0 mobyutil::MB_getTargetInArea; 00121740 partupd::SpawnPart_4; 0015d12c sound::PlayMobySound; 00479fa8 mobyupdate_helpers::M827_00479fa8; 0047a518 mobyupdate_helpers::M827_0047a518; 00495490 FUN_00495490; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor
// strings: 0047a9f8: '?fff?' (raw)

void mobyupdate_helpers::M827_0047aa38(MobyInstance *param_1)

{
  f32 fVar1;
  float fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  Spline *pSVar5;
  undefined4 uVar6;
  MobyInstance *pMVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar12;
  longlong lVar10;
  int iVar13;
  undefined8 uVar11;
  uint uVar14;
  undefined2 uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float afStack_90 [4];
  undefined1 local_80 [16];
  int local_70;
  float local_6c;
  longlong local_68;
  
  pvVar4 = param_1->pVar;
  uVar16 = ZEXT48(pvVar4);
  *(float *)((int)pvVar4 + 0x30) = (param_1->transform).v2.z * 0.25;
  if (((*(int *)((int)pvVar4 + 0x20c) != 0) &&
      (iVar12 = mobyutil::MB_damage(*(int *)((int)pvVar4 + 0x20c),0x330000,0), iVar12 != 0)) &&
     ((*(int *)(iVar12 + 0x20) == 0 || (*(short *)(*(int *)(iVar12 + 0x20) + 0xa6) != 0xaf)))) {
    M827_0047a518(param_1,&DAT_00a15d30);
    M827_00479fa8(param_1);
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    mobyfunc::DeleteMoby(param_1);
    return;
  }
  dVar19 = 0.0;
  local_6c = 0.0;
  lVar10 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar12 = mobyutil::MB_HandleDamage(param_1,(int)lVar10,uVar16 + 0x20,0,&local_70,&local_6c,0,4);
  if (((local_70 != 1) && (param_1->state != '\x0e')) &&
     ((fVar2 = *(float *)((int)pvVar4 + 0x20) - local_6c, *(float *)((int)pvVar4 + 0x20) = fVar2,
      (double)fVar2 <= dVar19 || ((0 < iVar12 && (iVar12 < 3)))))) {
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    M827_0047a518(param_1,lVar10 + 0x10);
    if (*(char *)((int)pvVar4 + 0x14e) == '\x01') {
      iVar12 = 0;
      dVar20 = 1.7999999523162842;
      dVar21 = 0.5;
      do {
        dVar17 = (double)mobyutil::MB_randRot();
        dVar18 = (double)mobyutil::MB_randRot();
        mobyutil::MB_SphericalToVector
                  ((float)((double)mobyutil::g_FrameTime * dVar20),(float)dVar17,(float)dVar18,
                   afStack_90);
        mobyutil::MB_randSphere(dVar19,dVar21,local_80);
        iVar13 = mobyutil::MB_randRange(0x14,0x23);
        iVar13 = (int)(animationSpeed * (float)((double)(longlong)iVar13 + dVar21));
        local_68 = (longlong)iVar13;
        uVar11 = mobyutil::MB_randRange(0x28,0x3c);
        partupd::SpawnPart_4(local_80,afStack_90,0x7000a0ff,0xff,iVar13,0x1e,uVar11,1);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x14);
      *(undefined1 *)((int)pvVar4 + 0x14e) = 0;
    }
    sound::PlayMobySound(3,0,param_1);
    if (*(int *)((int)pvVar4 + 0x20c) != 0) {
      M827_00479fa8(param_1);
    }
    if (*(short *)((int)pvVar4 + 0x240) == 0) {
      mobyfunc::DeleteMoby(param_1);
      return;
    }
    auVar22 = ZEXT416(0xfffffff0);
    auVar23 = loadVectorLeftIndexed(0x24,uVar16);
    auVar24 = loadVectorRightIndexed(0x34,uVar16);
    *(short *)((int)pvVar4 + 0x240) = *(short *)((int)pvVar4 + 0x240) + -1;
    fVar1 = *(f32 *)((int)pvVar4 + 0x210);
    MVar3 = param_1->modeBits;
    auVar22 = vectorShiftRightAlgebraicWord
                        (auVar23 | auVar24,
                         auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x20,uVar16);
    *(undefined4 *)((int)pvVar4 + 0x20U & 0xfffffffc) = uVar6;
    (param_1->pos).x = fVar1;
    (param_1->pos).y = *(f32 *)((int)pvVar4 + 0x214);
    (param_1->pos).z = *(f32 *)((int)pvVar4 + 0x218);
    fVar1 = *(f32 *)((int)pvVar4 + 0x21c);
    param_1->state = '\x0f';
    (param_1->pos).w = fVar1;
    param_1->collision = (ushort *)0x0;
    param_1->modeBits =
         MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
  }
  param_1->damage = -1;
  dVar20 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar4 + 0x248),
                              DAT_00877b10 * 0.017453292 * mobyutil::g_FrameTime);
  uVar9 = DAT_00877b18;
  uVar6 = DAT_00877b14;
  dVar19 = (double)(float)(3.141592502593994 - dVar20);
  if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
    dVar19 = dVar20;
  }
  dVar21 = (double)(float)(-3.141592502593994 - dVar20);
  if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
    dVar21 = dVar19;
  }
  *(float *)((int)pvVar4 + 0x248) = (float)dVar20;
  dVar19 = (double)(float)(dVar21 * dVar21);
  dVar17 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar21));
  dVar20 = (double)(float)(dVar19 * dVar17);
  uVar14 = fastfunc::FastLerpColor
                     ((double)(((float)(dVar19 * dVar20) * 2.601887e-06 +
                                (float)(dVar20 * -0.0001980741071747616 +
                                       (double)(float)(dVar17 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar19 * 
                                                  dVar21) * -0.16666656732559204 + dVar21))) + 1.0)
                              * 0.5),uVar6,uVar9);
  iVar12 = *(int *)((int)pvVar4 + 0x38);
  param_1->field60_0x90 = uVar14;
  if (iVar12 != 0) {
    dVar19 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar19 * (double)animationSpeed));
    *(undefined2 *)((int)pvVar4 + 0x1e8) = uVar15;
    *(undefined4 *)((int)pvVar4 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS16(uVar16 + 0x1e8);
  if (*(short *)((int)pvVar4 + 0x1e8) == 0) {
    fVar2 = *(float *)((int)pvVar4 + 0x1dc);
  }
  else {
    fVar2 = *(float *)((int)pvVar4 + 0x1dc) + 6.0;
  }
  *(float *)((int)pvVar4 + 0x1e0) = fVar2;
  pMVar7 = MobyInstance;
  if (*(int *)((int)pvVar4 + 0x204) == -1) {
    if (g_heroType == '\x01') {
      if (worldUpdateTime +
          (((int)worldUpdateTime >> 3) +
          (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * -8 ==
          (int)*(short *)((int)pvVar4 + 0x20a)) {
        FUN_00495490(param_1,uVar16 + 0x1c0);
        if (*(int *)((int)pvVar4 + 0x1c0) == 0) {
          *(undefined4 *)((int)pvVar4 + 0x1c4) = 2;
        }
        else {
          iVar12 = mobyutil::PointInsideComplexPoly
                             ((Vec4 *)(*(int *)((int)pvVar4 + 0x1c0) + 0x10),
                              (Vec4 *)Splines[*(int *)((int)pvVar4 + 500)]->points,
                              Splines[*(int *)((int)pvVar4 + 500)]->cnt);
          if (iVar12 == 0) {
            *(undefined4 *)((int)pvVar4 + 0x1c0) = 0;
            *(undefined4 *)((int)pvVar4 + 0x1c4) = 2;
          }
          else {
            iVar12 = *(int *)((int)pvVar4 + 0x1c0);
            if ((*(short *)(iVar12 + 0xa6) != 0x359) ||
               (fVar2 = (param_1->pos).y - *(float *)(iVar12 + 0x14),
               fVar8 = (param_1->pos).x - *(float *)(iVar12 + 0x10),
               SQRT(fVar8 * fVar8 + fVar2 * fVar2) <= 2.0)) {
              *(undefined4 *)((int)pvVar4 + 0x1c4) = 0;
            }
            else {
              *(undefined4 *)((int)pvVar4 + 0x1c0) = 0;
              *(undefined4 *)((int)pvVar4 + 0x1c4) = 2;
            }
          }
        }
      }
    }
    else {
      pSVar5 = Splines[*(int *)((int)pvVar4 + 500)];
      iVar12 = mobyutil::MB_getTargetInArea
                         (param_1,uVar16 + 0x180,pSVar5,0,0,pSVar5->points,pSVar5->cnt);
      if ((iVar12 != 2) &&
         ((fVar2 = *(float *)((int)pvVar4 + 0x214) - *(float *)((int)pvVar4 + 0x184),
          fVar8 = *(float *)((int)pvVar4 + 0x210) - *(float *)((int)pvVar4 + 0x180),
          *(float *)((int)pvVar4 + 0x1e0) < SQRT(fVar8 * fVar8 + fVar2 * fVar2) ||
          (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar4 + 0x188)))))) {
        *(undefined4 *)((int)pvVar4 + 0x1c4) = 2;
      }
    }
  }
  else {
    *(undefined4 *)((int)pvVar4 + 0x1c4) = 1;
    pMVar7 = pMVar7 + *(int *)((int)pvVar4 + 0x204);
    *(MobyInstance **)((int)pvVar4 + 0x1c0) = pMVar7;
    *(f32 *)((int)pvVar4 + 0x180) = (pMVar7->pos).x;
    *(f32 *)((int)pvVar4 + 0x184) = (pMVar7->pos).y;
    *(f32 *)((int)pvVar4 + 0x188) = (pMVar7->pos).z;
    *(f32 *)((int)pvVar4 + 0x18c) = (pMVar7->pos).w;
  }
  if (*(int *)((int)pvVar4 + 0x1c0) == 0) {
    *(MobyInstance **)((int)pvVar4 + 0x1c0) = g_heroMobyPtr;
  }
  return;
}



//==== 0047b1f0  ns=mobyupdate_unsorted  size=0x1860
// sig: undefined UpdateMoby_827(MobyInstance * moby)
// callers(0): 
// callees(31): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc620 mobyutil::MB_randInt; 000fc948 mobyutil::MB_SplineIntersect; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 001059f0 mobyutil::DamageSphereAtBone; 00106360 mobyutil::MB_SetZBoundsFromGround; 00108180 mobyutil::MB_computeLobVelocity; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00119a18 mobyfunc::DoManipulator; 00479880 mobyupdate_helpers::M827_00479880; 00479b78 mobyupdate_helpers::M827_00479b78; 00479e20 mobyupdate_helpers::M827_00479e20; 00479fa8 mobyupdate_helpers::M827_00479fa8; 0047aa38 mobyupdate_helpers::M827_0047aa38; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005e7e98 FUN_005e7e98; 005e81f0 FUN_005e81f0; 005e8338 FUN_005e8338; 005e8548 FUN_005e8548; 005e8588 FUN_005e8588

/* Moby 827 */

void mobyupdate_unsorted::UpdateMoby_827(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  Spline *pSVar9;
  float fVar10;
  longlong lVar11;
  undefined1 uVar18;
  MobyInstance *pMVar13;
  undefined8 uVar12;
  Vec4 *pVVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  
  lVar11 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  if (DAT_010d99e8 == 0) {
    if ((g_gameMode == GAME_MODE_SCENE) && ((moby->modeBits & DISABLED) == NONE)) {
      *(undefined2 *)((int)pvVar8 + 0x1ea) = 1;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    else if ((g_gameMode == GAME_MODE_NORMAL) && (*(short *)((int)pvVar8 + 0x1ea) != 0)) {
      *(undefined2 *)((int)pvVar8 + 0x1ea) = 0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
    }
    if ((moby->state == '\x10') ||
       (((DAT_00a20820 == 0 || (*(short *)((int)pvVar8 + 0x242) != 0)) &&
        ((DAT_00a20820 != 0 || (*(short *)((int)pvVar8 + 0x242) == 0)))))) {
      mobyfunc::DoManipulator(0x4000ccccc0000000,moby,1,(Manipulator *)((int)pvVar8 + 0x250));
      mobyupdate_helpers::M827_0047aa38(lVar11);
      if ((moby->enabled != '\0') &&
         (dVar20 = (double)FUN_005e8548(lVar11 + 0x10,0x951500), dVar20 < 14.0)) {
        mobyutil::MB_SetZBoundsFromGround(lVar11);
        moby->shadow = '\v';
      }
      bVar2 = moby->state;
      iVar16 = *(int *)((int)pvVar8 + 0x1c0);
      if (bVar2 < 8) {
        if (bVar2 == 7) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\b', moby->animationId != '\x04'))
          {
            mobyutil::MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 5.5));
          }
        }
        else if (bVar2 == 6) {
          uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
          if ((uVar15 & 1) == 0) {
            if ((uVar15 & 0x120) != 0) {
              mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
              mobyfunc::DeleteMoby(moby);
            }
          }
          else {
            moby->state = '\a';
            if (moby->animationId != '\x03') {
              mobyutil::MB_SetAnimation(lVar11,3,0,1);
            }
            moby->animationBlend = 1.0;
            dVar20 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar11 + 0x10,0);
            (moby->pos).z = (float)dVar20;
          }
        }
        else if (bVar2 == 5) {
          mobyupdate_helpers::M827_00479b78(lVar11,local_120,(int)pvVar8 + 0x120);
          uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
          if ((uVar15 & 1) != 0) {
            moby->state = '\a';
            if (moby->animationId != '\x03') {
              mobyutil::MB_SetAnimation(lVar11,3,0,1);
            }
            moby->animationBlend = 1.0;
            dVar20 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar11 + 0x10,0);
            (moby->pos).z = (float)dVar20;
          }
        }
        else if (bVar2 == 4) {
          pSVar9 = Splines[*(int *)((int)pvVar8 + 0x1f8)];
          iVar16 = (int)((longlong)*(short *)((int)pvVar8 + 0x208) << 4);
          fVar3 = *(float *)((int)&pSVar9->points[0].x + iVar16) - (moby->pos).x;
          fVar4 = *(float *)((int)&pSVar9->points[0].y + iVar16) - (moby->pos).y;
          fVar5 = *(float *)((int)&pSVar9->points[0].z + iVar16) - (moby->pos).z;
          mobyupdate_helpers::M827_00479e20(lVar11);
          mobyupdate_helpers::M827_00479b78(lVar11,0xa10980,local_140);
          mobyupdate_helpers::M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_130);
          fVar6 = (moby->transform).v2.y * fVar5 +
                  (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar4;
          fVar3 = (moby->transform).v2.x * fVar5 +
                  (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar4;
          if (SQRT(fVar3 * fVar3 + fVar6 * fVar6) < 0.5) {
            sVar7 = *(short *)((int)pvVar8 + 0x208);
            uVar15 = Splines[*(int *)((int)pvVar8 + 0x1f8)]->cnt;
            lVar19 = (ulonglong)uVar15 - 2;
            if ((int)sVar7 < (int)lVar19) {
              *(short *)((int)pvVar8 + 0x208) = sVar7 + 1;
            }
            else {
              pVVar14 = Splines[*(int *)((int)pvVar8 + 0x1f8)]->points + (uVar15 - 1);
              fVar3 = pVVar14->x;
              *(float *)((int)pvVar8 + 0x210) = fVar3;
              fVar4 = pVVar14->y;
              *(float *)((int)pvVar8 + 0x214) = fVar4;
              fVar5 = pVVar14->z;
              *(float *)((int)pvVar8 + 0x218) = fVar5;
              fVar6 = pVVar14->w;
              *(float *)((int)pvVar8 + 0x230) = fVar3;
              *(float *)((int)pvVar8 + 0x21c) = fVar6;
              *(float *)((int)pvVar8 + 0x234) = fVar4;
              *(float *)((int)pvVar8 + 0x238) = fVar5;
              *(float *)((int)pvVar8 + 0x23c) = fVar6;
              fVar4 = (moby->pos).y - fVar4;
              fVar3 = (moby->pos).x - fVar3;
              fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4) / (float)(longlong)(animationSpeed * 30.5)
              ;
              *(float *)((int)pvVar8 + 0x138) = fVar3;
              dVar20 = (double)mobyutil::MB_computeLobVelocity
                                         ((double)fVar3,-(double)*(float *)((int)pvVar8 + 0x130),
                                          lVar11 + 0x10,(int)pvVar8 + 0x210,sVar7,lVar19,0);
              *(float *)((int)pvVar8 + 0x13c) = (float)dVar20;
              *(undefined1 *)((int)pvVar8 + 0x15d) = 3;
              *(undefined4 *)((int)pvVar8 + 0x144) = 5;
              FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x210) - (moby->pos).x),
                           (double)(*(float *)((int)pvVar8 + 0x214) - (moby->pos).y));
              mobyutil::MB_StartKick(lVar11,(int)pvVar8 + 0x120);
              moby->state = '\x05';
            }
          }
        }
        else if (bVar2 == 3) {
          FUN_005e81f0(auStack_150,iVar16 + 0x10,lVar11 + 0x10);
          mobyupdate_helpers::M827_00479e20(lVar11);
          mobyupdate_helpers::M827_00479b78(lVar11,0xa10980,auStack_150);
          fVar3 = g_heroPosition.y - (moby->pos).y;
          fVar4 = g_heroPosition.x - (moby->pos).x;
          if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < *(float *)((int)pvVar8 + 0x24c)) &&
             (moby->state = '\x04', moby->animationId != '\x04')) {
            mobyutil::MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 5.5));
          }
        }
        else if (bVar2 == 1) {
          dVar20 = (double)FUN_005e8588(lVar11 + 0x10,iVar16 + 0x10);
          if (dVar20 < 4.0) {
            moby->modeBits =
                 moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
            mobyupdate_helpers::M827_00479fa8(lVar11);
            moby->state = '\b';
            if (moby->animationId != '\x04') {
              mobyutil::MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 5.5));
            }
          }
        }
        else if (bVar2 == 0) {
          bVar1 = (int)DAT_010d99ec < 0;
          uVar15 = DAT_010d99ec & 7;
          iVar16 = (int)DAT_010d99ec >> 3;
          sVar7 = (short)DAT_010d99ec;
          DAT_010d99ec = DAT_010d99ec + 1;
          *(ushort *)((int)pvVar8 + 0x20a) =
               sVar7 + ((short)iVar16 + (ushort)(bVar1 && uVar15 != 0)) * -8;
          if (*(short *)((int)pvVar8 + 0x240) != 0) {
            *(short *)&moby->field76_0xb4 =
                 *(short *)&moby->field76_0xb4 / *(short *)((int)pvVar8 + 0x240);
          }
          moby->modeBits = moby->modeBits | LOCK_ROTATION;
          uVar18 = fastfunc::FastDoubleToInt(0x4020000000000000);
          *(undefined1 *)((int)pvVar8 + 0x58) = uVar18;
          uVar18 = fastfunc::FastDoubleToInt(0x40099999a0000000);
          *(undefined1 *)((int)pvVar8 + 0x5a) = uVar18;
          FUN_005e7e98((int)pvVar8 + 0x210,lVar11 + 0x10);
          FUN_005e7e98((int)pvVar8 + 0x230,lVar11 + 0x10);
          FUN_005e7e98((int)pvVar8 + 0x220,lVar11 + 0x40);
          *(undefined2 *)((int)pvVar8 + 0x208) = 0;
          dVar20 = (double)mobyutil::MB_randRangeFloat(0.5,3.0);
          *(float *)((int)pvVar8 + 0x244) = (float)dVar20;
          *(undefined4 *)((int)pvVar8 + 0x148) = 0;
          *(undefined4 *)((int)pvVar8 + 0x140) = 0x200;
          fVar3 = DAT_0071f418;
          *(undefined4 *)((int)pvVar8 + 0x134) = 0;
          *(float *)((int)pvVar8 + 0x130) = fVar3 * 20.0;
          dVar20 = (double)mobyutil::MB_randRot();
          *(float *)((int)pvVar8 + 0x248) = (float)dVar20;
          *(undefined1 *)((int)pvVar8 + 0x29) = 1;
          *(undefined **)((int)pvVar8 + 0xd0) = &DAT_00877afc;
          if (*(short *)((int)pvVar8 + 0x200) == 0) {
            if (*(short *)((int)pvVar8 + 0x202) == 0) {
              if (*(int *)((int)pvVar8 + 0x1f8) < 0) {
                moby->state = '\b';
                if (moby->animationId != '\x04') {
                  uVar12 = mobyutil::MB_randInt
                                     (*(undefined1 *)(*(int *)&moby->pClass[1].joint_cnt + 0x10));
                  mobyutil::MB_SetAnimation(lVar11,4,uVar12,0);
                }
              }
              else {
                moby->state = '\x03';
                if (moby->animationId != '\0') {
                  mobyutil::MB_SetAnimation(lVar11,0,0,0);
                }
              }
            }
            else {
              moby->state = '\x0f';
              moby->collision = (ushort *)0x0;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
            }
          }
          else {
            moby->state = '\x01';
            pMVar13 = mobyfunc::CreateMoby(BOLT_CRATE);
            *(MobyInstance **)((int)pvVar8 + 0x20c) = pMVar13;
            if (pMVar13 == (MobyInstance *)0x0) {
              mobyfunc::DeleteMoby(moby);
            }
            else {
              uVar15 = moby->light;
              pMVar13->color = moby->color;
              pMVar13->light = uVar15;
              *(ushort *)(*(int *)((int)pvVar8 + 0x20c) + 0x34) =
                   *(ushort *)(*(int *)((int)pvVar8 + 0x20c) + 0x34) | 0x4002;
              iVar16 = *(int *)((int)pvVar8 + 0x20c);
              *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
              *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
              *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
              *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
              iVar16 = *(int *)((int)pvVar8 + 0x20c);
              *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
              *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
              *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
              *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
              *(undefined2 *)(*(int *)((int)pvVar8 + 0x20c) + 0x32) = 0x40;
              *(undefined1 *)(*(int *)((int)pvVar8 + 0x20c) + 0x31) = 1;
              mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar8 + 0x20c));
              moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            }
          }
        }
      }
      else if (bVar2 == 0x10) {
        iVar16 = FUN_0048c188(lVar11,(int)pvVar8 + 0x120);
        if (iVar16 != 0) {
          moby->state = '\b';
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 10.5));
          }
          *(undefined2 *)((int)pvVar8 + 200) = 0;
        }
      }
      else if (bVar2 == 0xd) {
        mobyupdate_helpers::M827_00479e20(lVar11);
        mobyupdate_helpers::M827_00479b78(lVar11,0xa10980,local_70);
        mobyupdate_helpers::M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_80);
        fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x214);
        fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x210);
        if (2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
          if (*(int *)((int)pvVar8 + 0x1c4) == 2) {
            if (*(short *)((int)pvVar8 + 0x1e8) != 0) {
              moby->state = '\n';
            }
          }
          else {
            moby->state = '\t';
          }
        }
        else {
          moby->state = '\b';
          if (moby->animationId != '\x04') {
            mobyutil::MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar2 == 0xc) {
        FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - (moby->pos).x),
                     (double)(*(float *)(iVar16 + 0x14) - (moby->pos).y));
        FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - (moby->pos).x),
                     (double)(*(float *)(iVar16 + 0x14) - (moby->pos).y));
        mobyupdate_helpers::M827_00479b78(lVar11,lVar11 + 0xe0,local_90);
        dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
        if ((((moby->updateId != moby->animationId) || (dVar20 < 10.0)) || (15.0 < dVar20)) ||
           (g_heroState == CLANK_ATTACK)) {
          if ((((moby->field43_0x70 & 2U) != 0) &&
              (fVar4 = (moby->pos).y - *(float *)(iVar16 + 0x14),
              fVar3 = (moby->pos).x - *(float *)(iVar16 + 0x10),
              2.0 < SQRT(fVar3 * fVar3 + fVar4 * fVar4))) &&
             (moby->state = '\t', moby->animationId != '\x04')) {
            mobyutil::MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          mobyupdate_helpers::M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_a0);
          mobyutil::DamageSphereAtBone
                    (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar11,0,0,1);
        }
      }
      else if (bVar2 == 0xb) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\n', moby->animationId != '\x04')) {
          mobyutil::MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 20.5));
        }
      }
      else if (bVar2 == 10) {
        dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar16 + 0x14) - (moby->pos).y));
        fastfunc::FastWrapRot((float)dVar20,*(float *)((int)pvVar8 + 0x1d4));
        mobyupdate_helpers::M827_00479e20(lVar11);
        mobyupdate_helpers::M827_00479b78(lVar11,0xa10980,local_c0);
        mobyupdate_helpers::M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_d0);
        iVar17 = mobyutil::MB_SplineIntersect
                           (*(undefined4 *)((int)pvVar8 + 0x1ec),lVar11 + 0x10,iVar16 + 0x10,
                            &local_b0);
        bVar1 = false;
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        if ((iVar17 != 0) &&
           (fVar10 = fVar4 - local_ac, fVar6 = fVar3 - local_b0, fVar5 = (moby->pos).z - local_a8,
           bVar1 = false,
           SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10) < *(float *)((int)pvVar8 + 0x244)))
        {
          bVar1 = true;
        }
        if (*(short *)((int)pvVar8 + 0x1e8) == 0) {
          moby->state = '\r';
        }
        else if (bVar1) {
          moby->state = '\v';
          if (moby->animationId != '\x06') {
            mobyutil::MB_SetAnimation(lVar11,6,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          fVar4 = fVar4 - *(float *)(iVar16 + 0x14);
          fVar3 = fVar3 - *(float *)(iVar16 + 0x10);
          if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 2.0) &&
             (moby->state = '\f', moby->animationId != '\x05')) {
            mobyutil::MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar2 == 9) {
        dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar16 + 0x14) - (moby->pos).y));
        fastfunc::FastWrapRot((float)dVar20,*(float *)((int)pvVar8 + 0x1d4));
        mobyupdate_helpers::M827_00479e20(lVar11);
        mobyupdate_helpers::M827_00479b78(lVar11,0xa10980,local_e0);
        mobyupdate_helpers::M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_f0);
        fVar3 = (moby->pos).y - *(float *)(iVar16 + 0x14);
        fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10);
        if (2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
          if (*(int *)((int)pvVar8 + 0x1c4) == 2) {
            moby->state = '\r';
          }
        }
        else {
          moby->state = '\f';
          if (moby->animationId != '\x05') {
            mobyutil::MB_SetAnimation(lVar11,5,4,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar2 == 8) {
        if (moby->enabled != '\0') {
          fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x234);
          fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x230);
          fVar5 = (moby->pos).z - *(float *)((int)pvVar8 + 0x238);
          if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 0.05) ||
             (iVar16 = fastfunc::FastDecTimerS32((int)pvVar8 + 0x1fc), iVar16 != 0)) {
            dVar21 = (double)mobyutil::MB_randRot();
            dVar25 = 0.5;
            dVar22 = (double)mobyutil::MB_randRangeFloat(0.5,2.0);
            fVar3 = (float)(dVar21 + 1.570796251296997);
            dVar20 = (double)(float)(3.141592502593994 - dVar21);
            if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
              dVar20 = dVar21;
            }
            fVar4 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar4 = fVar3;
            }
            dVar23 = (double)(float)(-3.141592502593994 - dVar21);
            if ((double)(float)(-3.141592502593994 - dVar21) - dVar20 < 0.0) {
              dVar23 = dVar20;
            }
            fVar5 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
              fVar5 = fVar4;
            }
            dVar21 = (double)(float)(dVar23 * dVar23);
            fVar6 = fVar5 * fVar5;
            dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar23));
            fVar3 = fVar6 * fVar6 * fVar5;
            dVar20 = (double)(float)(dVar21 * dVar24);
            *(undefined4 *)((int)pvVar8 + 0x238) = *(undefined4 *)((int)pvVar8 + 0x218);
            *(undefined4 *)((int)pvVar8 + 0x23c) = *(undefined4 *)((int)pvVar8 + 0x21c);
            fVar4 = fVar6 * fVar3;
            *(float *)((int)pvVar8 + 0x234) =
                 (float)((double)((float)(dVar21 * dVar20) * 2.601887e-06 +
                                 (float)(dVar20 * -0.0001980741071747616 +
                                        (double)(float)(dVar24 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar21 * 
                                                  dVar23) * -0.16666656732559204 + dVar23)))) *
                         dVar22 + (double)*(float *)((int)pvVar8 + 0x214));
            *(float *)((int)pvVar8 + 0x230) =
                 (float)((double)(fVar6 * fVar4 * 2.601887e-06 +
                                 fVar4 * -0.0001980741 +
                                 fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
                         dVar22 + (double)*(float *)((int)pvVar8 + 0x210));
            mobyutil::MB_randRangeFloat(45.0,75.0);
            iVar16 = fastfunc::FastDoubleToInt();
            *(int *)((int)pvVar8 + 0x1fc) =
                 (int)(animationSpeed * (float)((double)(longlong)iVar16 + dVar25));
          }
          mobyupdate_helpers::M827_00479e20(lVar11);
          mobyupdate_helpers::M827_00479b78(lVar11,0xa10980,local_100);
          mobyupdate_helpers::M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_110);
        }
        if ((*(int *)((int)pvVar8 + 0x1c4) == 2) || (iVar16 = mobyutil::MB_randInt(9), iVar16 != 0))
        {
          if (*(short *)((int)pvVar8 + 0x1e8) != 0) {
            dVar20 = (double)mobyutil::MB_randRangeFloat
                                       (-*(float *)((int)pvVar8 + 0x1d8),
                                        *(float *)((int)pvVar8 + 0x1d8));
            *(float *)((int)pvVar8 + 0x1d4) = (float)(dVar20 * 0.01745329238474369);
            moby->state = '\n';
            if (moby->animationId != '\x04') {
              mobyutil::MB_SetAnimation(lVar11,4,0,0);
            }
          }
        }
        else {
          dVar20 = (double)mobyutil::MB_randRangeFloat
                                     (-*(float *)((int)pvVar8 + 0x1d8),
                                      *(float *)((int)pvVar8 + 0x1d8));
          *(float *)((int)pvVar8 + 0x1d4) = (float)(dVar20 * 0.01745329238474369);
          moby->state = '\t';
          if (moby->animationId != '\x04') {
            mobyutil::MB_SetAnimation(lVar11,4,0,0);
          }
        }
      }
    }
  }
  return;
}



//==== 0047ca58  ns=Global  size=0x14c
// sig: undefined FUN_0047ca58(void)
// callers(3): 001a2e28 mobyupdate_helpers::M1051_001a2e28; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001ade10 mobyupdate_unsorted::UpdateMoby_1066
// callees(3): 000fcc68 mobyutil::MB_randRot; 0010ad80 mobyutil::MB_StartKick; 00500b64 fastfunc::FastEulerToMtx

bool FUN_0047ca58(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  
  iVar2 = *(int *)(param_1 + 0x78);
  bVar1 = *(char *)(param_1 + 0x20) == '\x0f';
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = param_2[1];
    *(undefined4 *)(param_1 + 0x18) = param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = param_2[3];
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    *(undefined1 *)(param_1 + 0x20) = 6;
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xffbe | 0x1000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    dVar5 = (double)mobyutil::MB_randRot();
    *(float *)(param_1 + 0x48) = (float)dVar5;
    fastfunc::FastEulerToMtx(param_1 + 0xc0,param_1 + 0x40);
    fVar4 = DAT_0071f418;
    *(undefined4 *)(iVar2 + 0x134) = 0;
    *(float *)(iVar2 + 0x130) = fVar4 * 20.0;
    fVar4 = mobyutil::g_FrameTime;
    *(undefined1 *)(iVar2 + 0x15d) = 3;
    *(undefined4 *)(iVar2 + 0x144) = 5;
    *(float *)(iVar2 + 0x138) = fVar4 * 2.0;
    *(float *)(iVar2 + 0x13c) = fVar4 * 2.0;
    mobyutil::MB_randRot();
    mobyutil::MB_StartKick(param_1,iVar2 + 0x120);
    *(float *)(iVar2 + 0x128) = -*(float *)(iVar2 + 0x128);
  }
  return bVar1;
}



//==== 0047cba4  ns=Global  size=0x24
// sig: undefined FUN_0047cba4(void)
// callers(1): 0041fb90 mobyupdate_unsorted::UpdateMoby_691
// callees(0): 

bool FUN_0047cba4(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\x03';
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  return bVar1;
}



//==== 0047cbc8  ns=Global  size=0x70
// sig: undefined FUN_0047cbc8(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(0): 

void FUN_0047cbc8(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  do {
    pMVar4 = MobyInstance;
    uVar3 = *puVar5 & 0x7fff;
    if (MobyInstance[uVar3].state < 0x7f) {
      MVar1 = MobyInstance[uVar3].modeBits;
      MobyInstance[uVar3].state = '\x0f';
      pMVar4[uVar3].collision = (ushort *)0x0;
      pMVar4[uVar3].modeBits =
           MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    }
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
  } while (-1 < (short)uVar2);
  return;
}



//==== 0047cc38  ns=Global  size=0x90
// sig: undefined FUN_0047cc38(void)
// callers(2): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001be558 mobyupdate_unsorted::UpdateMoby_1105
// callees(0): 

undefined8 FUN_0047cc38(longlong param_1)

{
  u8 uVar1;
  ushort uVar2;
  ushort *puVar3;
  MobyInstance *pMVar4;
  
  puVar3 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar4 = MobyInstance + (*puVar3 & 0x7fff);
      if ((pMVar4 != (MobyInstance *)0x0) && (pMVar4->oClass == FROG)) {
        uVar1 = pMVar4->state;
        if ((uVar1 != 0xfd && uVar1 != 0xfe) && (uVar1 != '\x10')) {
          return 0;
        }
      }
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar2);
  }
  return 1;
}



//==== 0047ccd0  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M829_0047ccd0(void)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 0048a718 mobyupdate_helpers::M849_MB_Sucking

undefined8 mobyupdate_helpers::M829_0047ccd0(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar2 = M849_MB_Sucking(param_1);
  if ((int)uVar2 == 0) {
    if ((param_1->state == '\x10') && (param_1->state = '\b', param_1->animationId != '\0')) {
      mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
    }
  }
  else {
    uVar1 = param_1->state;
    if ((((uVar1 == '\t' || uVar1 == '\b') || (uVar1 == '\f')) || (uVar1 == '\r')) ||
       (uVar1 == '\x10')) {
      if (uVar1 != '\x10') {
        param_1->setByGroup = uVar1;
        param_1->state = '\x10';
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== 0047cdc8  ns=mobyupdate_helpers  size=0xc0
// sig: undefined M829_0047cdc8(void)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 0048aa70 mobyupdate_helpers::M849_0048aa70

undefined8 mobyupdate_helpers::M829_0047cdc8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048aa70();
  if ((int)uVar1 == 0) {
    if ((*(char *)(param_1 + 0x20) == '\x10') &&
       (*(undefined1 *)(param_1 + 0x20) = 8, *(char *)(param_1 + 0x53) != '\0')) {
      mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (*(char *)(param_1 + 0x20) != '\x10') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x10;
  }
  return uVar1;
}



//==== 0047ce90  ns=mobyupdate_helpers  size=0xc0
// sig: undefined M829_0047ce90(void)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 0048acb8 mobyupdate_helpers::M849_0048acb8

undefined8 mobyupdate_helpers::M829_0047ce90(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048acb8();
  if ((int)uVar1 == 0) {
    if ((*(char *)(param_1 + 0x20) == '\x10') &&
       (*(undefined1 *)(param_1 + 0x20) = 8, *(char *)(param_1 + 0x53) != '\0')) {
      mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (*(char *)(param_1 + 0x20) != '\x10') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x10;
  }
  return uVar1;
}



//==== 0047cf50  ns=mobyupdate_helpers  size=0x50
// sig: undefined M829_0047cf50(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

undefined8 mobyupdate_helpers::M829_0047cf50(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048afe8();
  if (*(char *)(param_1 + 0x20) != '\x10') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x10;
  }
  return uVar1;
}



//==== 0047cfa0  ns=mobyupdate_helpers  size=0x40
// sig: undefined M829_0047cfa0(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M829_0047cfa0(int param_1)

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



//==== 0047cfe0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M829_0047cfe0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M829_0047cfe0(void)

{
  DAT_00877bb4 = 0x10000;
  return;
}



//==== 0047d068  ns=mobyupdate_unsorted  size=0xed0
// sig: undefined UpdateMoby_829(MobyInstance * moby)
// callers(0): 
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 829 */

void mobyupdate_unsorted::UpdateMoby_829(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  f32 fVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  int iVar16;
  Cylinder *pCVar17;
  ulonglong uVar18;
  float fVar22;
  int iVar23;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar24;
  float *pfVar25;
  code *pcVar26;
  int iVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x160;
  puVar14 = (ulonglong *)lVar21;
  *puVar14 = uVar18;
  puVar14[0x2e] = in_LR;
  puVar14[0x2b] = in_f31;
  puVar14[0x2a] = unaff_r31;
  puVar14[0x29] = unaff_r30;
  uVar1 = moby->state;
  pfVar9 = (float *)moby->pVar;
  fVar2 = (moby->pos).z;
  puVar14[0x28] = unaff_r29;
  puVar14[0x27] = unaff_r28;
  puVar14[0x26] = unaff_r27;
  if (uVar1 == '\x05') {
    fVar22 = pfVar9[8] - (moby->pos).x;
    fVar10 = pfVar9[9] - (moby->pos).y;
    fVar4 = ABS(fVar22);
    fVar3 = ABS(fVar10);
    *(float *)((int)puVar14 + 0x84) = fVar22;
    *(float *)(puVar14 + 0x11) = fVar10;
    *(float *)((int)puVar14 + 0x8c) = fVar4 - fVar3;
    dVar30 = 0.0;
    uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x8c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x11) >> 0x1d) & 4;
    fVar22 = ABS(*(float *)((int)puVar14 + 0x84));
    if (*(float *)((int)puVar14 + 0x8c) - 0.0 < 0.0) {
      fVar22 = fVar3;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar10 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)(puVar14 + 0x11));
    if (*(float *)((int)puVar14 + 0x8c) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    dVar33 = dVar30;
    if (0.0 < fVar22) {
      lVar20 = uVar18 - 0x150;
      lVar28 = uVar18 - 0x88;
      lVar24 = uVar18 - 0x98;
      lVar29 = 2;
      fVar22 = (fVar6 - fVar22) / (fVar6 + fVar22);
      fVar4 = fVar22 * fVar22;
      *(float *)((int)puVar14 + 0xd4) = fVar22;
      *(float *)((int)puVar14 + 0xcc) = fVar22;
      *(float *)(puVar14 + 0x1a) = fVar22;
      *(float *)(puVar14 + 0x19) = fVar22;
      fVar22 = fVar4 * fVar4;
      *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar4;
      *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar22;
      *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar22 * fVar4;
      do {
        *(float *)((int)lVar20 + 200) = *(float *)((int)lVar20 + 0xb8) * fVar22 * fVar22;
        iVar23 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar23 + 4) * fVar22 * fVar22;
        lVar28 = lVar28 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar28 = uVar18 - 0x98;
      pfVar25 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar24 = lVar28;
      do {
        fVar22 = *pfVar25;
        fVar4 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar20 + 200) = *(float *)((int)lVar20 + 200) * fVar22;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar24 = 2;
      lVar20 = lVar21;
      do {
        iVar23 = (int)lVar20;
        iVar27 = (int)lVar28;
        lVar20 = lVar20 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 200)) +
                          *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar3 + fVar10);
    }
    *(f32 *)((int)puVar14 + 0x74) = fVar2;
    mobyutil::OrganicDeltAng
              ((float)dVar33,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
               mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,pfVar9 + 4);
    (moby->rotation).x = pfVar9[4] * DAT_00877bd8;
    fVar22 = (moby->pos).x;
    fVar10 = (moby->pos).y;
    fVar3 = pfVar9[2];
    dVar33 = ABS((double)pfVar9[2]);
    fVar4 = SQRT(*pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1]);
    dVar31 = ABS((double)fVar4);
    *(float *)((int)puVar14 + 0x7c) = fVar4;
    *(float *)(puVar14 + 0x10) = (float)(dVar31 - dVar33);
    uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar3 >> 0x1d) & 4;
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    dVar32 = ABS((double)*(float *)((int)puVar14 + 0x7c));
    if ((double)*(float *)(puVar14 + 0x10) - dVar30 < 0.0) {
      dVar32 = dVar33;
    }
    if ((double)*(float *)(puVar14 + 0x10) - dVar30 < 0.0) {
      dVar33 = dVar31;
    }
    fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (dVar30 < dVar32) {
      lVar20 = uVar18 - 0x150;
      lVar24 = uVar18 - 0xb8;
      lVar28 = uVar18 - 0xa8;
      lVar29 = 2;
      fVar6 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
      fVar8 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0xb4) = fVar6;
      *(float *)((int)puVar14 + 0xac) = fVar6;
      *(float *)(puVar14 + 0x16) = fVar6;
      *(float *)(puVar14 + 0x15) = fVar6;
      fVar6 = fVar8 * fVar8;
      *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar8;
      *(float *)(puVar14 + 0x16) = *(float *)(puVar14 + 0x16) * fVar6;
      *(float *)((int)puVar14 + 0xb4) = *(float *)((int)puVar14 + 0xb4) * fVar6 * fVar8;
      do {
        *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0x98) * fVar6 * fVar6;
        iVar23 = (int)lVar24;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
        lVar28 = lVar28 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar28 = uVar18 - 0xb8;
      pfVar25 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar24 = lVar28;
      do {
        fVar6 = *pfVar25;
        fVar8 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0xa8) * fVar6;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar20 = 2;
      do {
        iVar23 = (int)lVar21;
        iVar27 = (int)lVar28;
        lVar21 = lVar21 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0xa8)) +
                          *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar3 + fVar4);
    }
    pcVar26 = mobyupdate_helpers::M832_00480000;
    *(undefined4 *)(puVar14 + 0xf) = 0;
    (moby->rotation).y = (float)-dVar30;
    fVar10 = fVar10 - pfVar9[9];
    dVar30 = 5.0;
    fVar22 = fVar22 - pfVar9[8];
    mobyutil::OrganicDelt
              (SQRT(fVar22 * fVar22 + fVar10 * fVar10),DAT_0071f418 * 5.0,DAT_0071f418 * 5.0,
               mobyutil::g_FrameTime * 50.0,(float *)(puVar14 + 0xf),0x480000,pfVar9 + 5);
    fVar22 = (moby->rotation).z + 1.5707963;
    fVar10 = 3.1415925 - fVar22;
    if (fVar22 - (3.1415925 - fVar22) < 0.0) {
      fVar10 = fVar22;
    }
    fVar3 = -3.1415925 - fVar22;
    if ((-3.1415925 - fVar22) - fVar10 < 0.0) {
      fVar3 = fVar10;
    }
    fVar22 = fVar3 * fVar3;
    fVar10 = fVar22 * fVar22 * fVar3;
    fVar4 = fVar22 * fVar10;
    fVar3 = (fVar22 * fVar4 * 2.601887e-06 +
            fVar4 * -0.0001980741 + fVar10 * 0.0083330255 + fVar22 * fVar3 * -0.16666657 + fVar3) *
            pfVar9[5];
    *pfVar9 = fVar3;
    fVar22 = (moby->rotation).z;
    fVar10 = 3.1415925 - fVar22;
    if (fVar22 - (3.1415925 - fVar22) < 0.0) {
      fVar10 = fVar22;
    }
    fVar4 = -3.1415925 - fVar22;
    if ((-3.1415925 - fVar22) - fVar10 < 0.0) {
      fVar4 = fVar10;
    }
    fVar22 = fVar4 * fVar4;
    fVar10 = fVar22 * fVar22 * fVar4;
    fVar6 = fVar22 * fVar10;
    pfVar9[1] = (fVar22 * fVar6 * 2.601887e-06 +
                fVar6 * -0.0001980741 + fVar10 * 0.0083330255 + fVar22 * fVar4 * -0.16666657 + fVar4
                ) * pfVar9[5];
    (moby->pos).x = (moby->pos).x + fVar3;
    (moby->pos).y = (moby->pos).y + pfVar9[1];
    (moby->pos).z = (moby->pos).z + pfVar9[2];
    mobyutil::OrganicDelt
              (pfVar9[10],(float)((double)DAT_0071f418 * dVar30),
               (float)((double)DAT_0071f418 * 100.0),mobyutil::g_FrameTime * 150.0,
               (float *)((int)puVar14 + 0x74),(int)pcVar26,pfVar9 + 2);
    fVar22 = (moby->pos).y - pfVar9[9];
    fVar10 = (moby->pos).x - pfVar9[8];
    if (SQRT(fVar10 * fVar10 + fVar22 * fVar22) < 0.5) {
      moby->state = '\x01';
      dVar30 = (double)mobyutil::MB_randRangeFloat(90.0,360.0);
      fVar22 = (float)fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
      pfVar9[0xc] = fVar22;
    }
  }
  else if (uVar1 == '\x04') {
    iVar23 = fastfunc::FastDecTimerS32(pfVar9 + 0xc);
    if (iVar23 != 0) {
      moby->state = '\x05';
      pCVar17 = Cylinders;
      fVar22 = pfVar9[6];
      pfVar9[8] = Cylinders[(int)fVar22].pos.x;
      pfVar9[9] = pCVar17[(int)fVar22].pos.y;
      pfVar9[10] = pCVar17[(int)fVar22].pos.z;
      fVar22 = pCVar17[(int)fVar22].pos.w;
      moby->drawDistance = 0xff;
      pfVar9[0xb] = fVar22;
      fVar22 = 0.0;
      (moby->rotation).w = 0.0;
      (moby->rotation).z = 0.0;
      (moby->rotation).y = 0.0;
      (moby->rotation).x = 0.0;
      pfVar9[3] = 0.0;
      pfVar9[1] = 0.0;
      *pfVar9 = 0.0;
      pfVar9[2] = mobyutil::g_FrameTime * -75.0;
      fVar10 = pfVar9[8] - (moby->pos).x;
      fVar6 = pfVar9[9] - (moby->pos).y;
      fVar3 = ABS(fVar10);
      fVar4 = ABS(fVar6);
      *(float *)(puVar14 + 0x12) = fVar10;
      *(float *)((int)puVar14 + 0x94) = fVar6;
      *(float *)(puVar14 + 0x13) = fVar3 - fVar4;
      uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1d) & 4;
      fVar10 = ABS(*(float *)(puVar14 + 0x12));
      if (*(float *)(puVar14 + 0x13) - 0.0 < 0.0) {
        fVar10 = fVar4;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar6 = ABS(*(float *)((int)puVar14 + 0x94));
      if (*(float *)(puVar14 + 0x13) - 0.0 < 0.0) {
        fVar6 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      if (0.0 < fVar10) {
        lVar20 = uVar18 - 0x150;
        lVar28 = uVar18 - 0x68;
        lVar24 = uVar18 - 0x78;
        lVar29 = 2;
        fVar10 = (fVar6 - fVar10) / (fVar6 + fVar10);
        fVar6 = fVar10 * fVar10;
        *(float *)((int)puVar14 + 0xf4) = fVar10;
        *(float *)((int)puVar14 + 0xec) = fVar10;
        *(float *)(puVar14 + 0x1e) = fVar10;
        *(float *)(puVar14 + 0x1d) = fVar10;
        fVar10 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar6;
        *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar10;
        *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar10 * fVar6;
        do {
          *(float *)((int)lVar20 + 0xe8) = *(float *)((int)lVar20 + 0xd8) * fVar10 * fVar10;
          iVar23 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar23 + 4) * fVar10 * fVar10;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0x78;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar28;
        do {
          fVar10 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0xe8) = *(float *)((int)lVar20 + 0xe8) * fVar10;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar20 = 2;
        do {
          iVar23 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar27 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          fVar22 = fVar22 + *(float *)(iVar23 + 0xe8) + *(float *)(iVar27 + 4) +
                   *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar22 = (fVar22 + 0.7853982) * fVar4 + fVar3;
      }
      (moby->rotation).z = fVar22;
      pfVar9[5] = 0.0;
    }
  }
  else if (uVar1 == '\x03') {
    dVar30 = -1.5707963705062866;
    mobyutil::OrganicDeltAng
              (-1.5707964,DAT_0071f418 * 1.5707964,DAT_0071f418 * 1.5707964,
               mobyutil::g_FrameTime * 25.132742,&(moby->rotation).y,0x720000,pfVar9 + 4);
    dVar30 = (double)fastfunc::FastSubRots((moby->rotation).y,(float)dVar30);
    if (dVar30 < 0.01745329238474369) {
      mobyutil::OrganicDelt
                (501.0,DAT_0071f418 * 50.0,DAT_0071f418 * 400.0,mobyutil::g_FrameTime * 200.0,
                 &(moby->pos).z,0x720000,pfVar9 + 5);
    }
    fVar2 = (moby->pos).z;
    uVar12 = (int)fVar2 >> 0x1f;
    if (0x43f9ffff < (int)((uVar12 >> 1 ^ (uint)fVar2) - uVar12)) {
      moby->state = '\x04';
      moby->drawDistance = 0;
      dVar30 = (double)mobyutil::MB_randRangeFloat(90.0,360.0);
      fVar22 = (float)fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
      pfVar9[0xc] = fVar22;
    }
  }
  else if (uVar1 == '\x02') {
    fVar2 = (moby->pos).x;
    fVar22 = pfVar9[8];
    fVar10 = (moby->pos).x;
    fVar11 = (moby->pos).y;
    fVar3 = pfVar9[9];
    fVar4 = (moby->pos).y;
    fVar6 = fVar22 - fVar10;
    fVar8 = fVar3 - fVar4;
    uVar12 = (int)fVar2 >> 0x1f;
    uVar13 = (int)fVar11 >> 0x1f;
    fVar5 = ABS(fVar6);
    iVar27 = (uVar12 >> 1 ^ (uint)fVar2) - uVar12;
    fVar7 = ABS(fVar8);
    *(float *)((int)puVar14 + 0x9c) = fVar6;
    *(float *)(puVar14 + 0x14) = fVar8;
    *(float *)((int)puVar14 + 0xa4) = fVar5 - fVar7;
    dVar30 = 0.0;
    uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1d) & 4;
    iVar23 = (uVar13 >> 1 ^ (uint)fVar11) - uVar13;
    fVar6 = ABS(*(float *)((int)puVar14 + 0x9c));
    if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar7 = ABS(*(float *)(puVar14 + 0x14));
    if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    dVar33 = dVar30;
    if (0.0 < fVar6) {
      lVar20 = uVar18 - 0x150;
      lVar28 = uVar18 - 0x48;
      lVar24 = uVar18 - 0x58;
      lVar29 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0x114) = fVar6;
      *(float *)((int)puVar14 + 0x10c) = fVar6;
      *(float *)(puVar14 + 0x22) = fVar6;
      *(float *)(puVar14 + 0x21) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar7;
      *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar6;
      *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar20 + 0x108) = *(float *)((int)lVar20 + 0xf8) * fVar6 * fVar6;
        iVar15 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar15 + 4) * fVar6 * fVar6;
        lVar28 = lVar28 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar28 = uVar18 - 0x58;
      pfVar25 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar24 = lVar28;
      do {
        fVar6 = *pfVar25;
        fVar7 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar20 + 0x108) = *(float *)((int)lVar20 + 0x108) * fVar6;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar20 = 2;
      do {
        iVar15 = (int)lVar21;
        iVar16 = (int)lVar28;
        lVar21 = lVar21 + 0x10;
        lVar28 = lVar28 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar15 + 0x108)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar8 + fVar5);
    }
    fVar4 = fVar4 - fVar3;
    fVar22 = fVar10 - fVar22;
    pcVar26 = mobyupdate_helpers::M832_00480000;
    *(undefined4 *)(puVar14 + 0xe) = 0;
    dVar32 = (double)SQRT(fVar22 * fVar22 + fVar4 * fVar4);
    if (((((0.5 <= dVar32) && (iVar27 < 0x43fa0001)) && (0x411fffff < iVar27)) &&
        ((iVar23 < 0x43fa0001 && (0x411fffff < iVar23)))) ||
       (uVar12 = (int)pfVar9[5] >> 0x1f,
       pcVar26 = (code *)((uVar12 >> 1 ^ (uint)pfVar9[5]) - uVar12), dVar32 = dVar30,
       0x3dcccccc < (int)pcVar26)) {
      mobyutil::OrganicDeltAng
                ((float)dVar33,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
                 mobyutil::g_FrameTime * 25.132742,&(moby->rotation).z,(int)pcVar26,pfVar9 + 4);
      (moby->rotation).x = pfVar9[4] * DAT_00877bd8;
      mobyutil::OrganicDelt
                ((float)dVar32,DAT_0071f418 * 5.0,DAT_0071f418 * 50.0,mobyutil::g_FrameTime * 50.0,
                 (float *)(puVar14 + 0xe),0x870000,pfVar9 + 5);
      fVar22 = (moby->rotation).z + 1.5707963;
      fVar10 = 3.1415925 - fVar22;
      if (fVar22 - (3.1415925 - fVar22) < 0.0) {
        fVar10 = fVar22;
      }
      fVar3 = -3.1415925 - fVar22;
      if ((-3.1415925 - fVar22) - fVar10 < 0.0) {
        fVar3 = fVar10;
      }
      fVar22 = fVar3 * fVar3;
      fVar10 = fVar22 * fVar22 * fVar3;
      fVar4 = fVar22 * fVar10;
      fVar3 = (fVar22 * fVar4 * 2.601887e-06 +
              fVar4 * -0.0001980741 + fVar10 * 0.0083330255 + fVar22 * fVar3 * -0.16666657 + fVar3)
              * pfVar9[5];
      *pfVar9 = fVar3;
      fVar22 = (moby->rotation).z;
      pfVar9[2] = 0.0;
      fVar10 = 3.1415925 - fVar22;
      if (fVar22 - (3.1415925 - fVar22) < 0.0) {
        fVar10 = fVar22;
      }
      fVar4 = -3.1415925 - fVar22;
      if ((-3.1415925 - fVar22) - fVar10 < 0.0) {
        fVar4 = fVar10;
      }
      fVar22 = fVar4 * fVar4;
      fVar10 = fVar22 * fVar22 * fVar4;
      fVar6 = fVar22 * fVar10;
      pfVar9[1] = (fVar22 * fVar6 * 2.601887e-06 +
                  fVar6 * -0.0001980741 +
                  fVar10 * 0.0083330255 + fVar22 * fVar4 * -0.16666657 + fVar4) * pfVar9[5];
      (moby->pos).x = (moby->pos).x + fVar3;
      (moby->pos).y = (moby->pos).y + pfVar9[1];
      (moby->pos).z = (moby->pos).z + pfVar9[2];
    }
    else {
      moby->state = '\x03';
      pfVar9[8] = fVar10;
      pfVar9[9] = (moby->pos).y;
      pfVar9[10] = (moby->pos).z;
      fVar22 = (moby->pos).w;
      pfVar9[10] = 500.0;
      pfVar9[0xb] = fVar22;
    }
  }
  else if (uVar1 == '\x01') {
    iVar23 = fastfunc::FastDecTimerS32(pfVar9 + 0xc);
    if (iVar23 != 0) {
      moby->state = '\x02';
      pCVar17 = Cylinders;
      fVar22 = pfVar9[7];
      fVar10 = pfVar9[6];
      fVar3 = Cylinders[(int)fVar10].pos.x - Cylinders[(int)fVar22].pos.x;
      pfVar9[8] = fVar3;
      fVar4 = pCVar17[(int)fVar10].pos.y - pCVar17[(int)fVar22].pos.y;
      pfVar9[9] = fVar4;
      fVar6 = pCVar17[(int)fVar10].pos.z - pCVar17[(int)fVar22].pos.z;
      pfVar9[10] = fVar6;
      pfVar9[0xb] = pCVar17[(int)fVar10].pos.w;
      fVar3 = fVar3 * 10.0;
      fVar4 = fVar4 * 10.0;
      fVar6 = fVar6 * 10.0;
      pfVar9[8] = fVar3;
      pfVar9[9] = fVar4;
      pfVar9[10] = fVar6;
      pfVar9[8] = fVar3 + pCVar17[(int)fVar22].pos.x;
      pfVar9[9] = fVar4 + pCVar17[(int)fVar22].pos.y;
      pfVar9[10] = fVar6 + pCVar17[(int)fVar22].pos.z;
    }
  }
  else if (uVar1 == '\0') {
    dVar30 = (double)mobyutil::MB_randRangeFloat(360.0,720.0);
    fVar22 = (float)fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    pfVar9[0xc] = fVar22;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
  }
  return;
}



//==== 0047df40  ns=mobyupdate_helpers  size=0x178
// sig: undefined M829_0047df40(void)
// callers(2): 0023aea0 mobyupdate_helpers::M1284_0023aea0; 0035ed70 mobyupdate_helpers::M388_0035ed70
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance *
mobyupdate_helpers::M829_0047df40(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pMVar4 = mobyfunc::CreateMoby(MINE_0053);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    pvVar3 = pMVar4->pVar;
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    fVar1 = pMVar4->pClass->gScale;
    *(undefined4 *)((int)pvVar3 + 0x74) = param_1;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    pMVar4->scale = fVar1 * 0.1;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    *(undefined4 *)((int)pvVar3 + 0x60) = *param_3;
    *(undefined4 *)((int)pvVar3 + 100) = param_3[1];
    *(undefined4 *)((int)pvVar3 + 0x68) = param_3[2];
    uVar2 = param_3[3];
    *(undefined4 *)((int)pvVar3 + 0x20) = 0x41a00000;
    *(undefined4 *)((int)pvVar3 + 0x6c) = uVar2;
    *(undefined2 *)((int)pvVar3 + 0x24) = 0x14;
    *(undefined4 *)((int)pvVar3 + 0x30) = 0x3f000000;
    *(undefined1 *)((int)pvVar3 + 0x28) = 0;
    *(undefined1 *)((int)pvVar3 + 0x29) = 1;
    auVar5 = loadVectorLeftIndexed(4,0x47df38);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x70,ZEXT48(pvVar3)
                      );
    *(undefined4 *)((int)pvVar3 + 0x70U & 0xfffffffc) = uVar2;
    if (pMVar4->animationId != '\x01') {
      mobyutil::MB_SetAnimation(pMVar4,1,0,10);
    }
    mobyfunc::UpdateMobyTransform(pMVar4);
    mobyutil::MB_CopyHeroLights(pMVar4);
  }
  return pMVar4;
}



//==== 0047e100  ns=mobyupdate_unsorted  size=0x660
// sig: undefined UpdateMoby_83(MobyInstance * moby)
// callers(0): 
// callees(8): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 0010581c mobyutil::SetCollDamIn; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 004fff60 fastfunc::FastDecTimerS32

/* Moby 83 */

void mobyupdate_unsorted::UpdateMoby_83(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined1 local_90 [16];
  undefined1 auStack_80 [64];
  
  dVar18 = 2.0;
  pvVar6 = moby->pVar;
  moby->scale = DAT_0071f408 * 0.1 * (moby->pClass->gScale * 2.0 - moby->scale) + moby->scale;
  if ((((moby->field43_0x70 & 2U) != 0) && (moby->updateId != '\x02')) &&
     (moby->animationId != '\x02')) {
    mobyutil::MB_SetAnimation(moby,2,0,10);
  }
  if (DAT_0096b2d0 != 0) {
    fVar1 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    fVar4 = fVar1 - *(float *)(DAT_0096b2d0 + 0x14);
    fVar3 = (moby->pos).z;
    fVar7 = fVar2 - *(float *)(DAT_0096b2d0 + 0x10);
    fVar8 = fVar3 - *(float *)(DAT_0096b2d0 + 0x18);
    fVar4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar4 * fVar4);
    if ((fVar4 < 60.0) && (moby->enabled != '\0')) {
      fVar1 = *(float *)(DAT_0096b2d0 + 0x14) - fVar1;
      fVar3 = *(float *)(DAT_0096b2d0 + 0x18) - fVar3;
      fVar2 = *(float *)(DAT_0096b2d0 + 0x10) - fVar2;
      fVar7 = -(fVar4 * 0.016666668 - 1.0);
      fVar4 = 0.0;
      if (1.0 - fVar7 < 0.0) {
        fVar7 = 1.0;
      }
      fVar10 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar8 = (mobyutil::g_FrameTime * 1.5 * fVar7) / fVar10;
      fVar7 = fVar4;
      if (0.0 - fVar10 < 0.0) {
        fVar7 = fVar8 * fVar3;
      }
      fVar9 = fVar4;
      if (0.0 - fVar10 < 0.0) {
        fVar9 = fVar8 * fVar1;
      }
      if (0.0 - fVar10 < 0.0) {
        fVar4 = fVar8 * fVar2;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar7 = fVar8 * fVar3;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar9 = fVar8 * fVar1;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar4 = fVar8 * fVar2;
      }
      *(float *)((int)pvVar6 + 0x68) = *(float *)((int)pvVar6 + 0x68) + fVar7;
      *(float *)((int)pvVar6 + 100) = *(float *)((int)pvVar6 + 100) + fVar9;
      *(float *)((int)pvVar6 + 0x60) = *(float *)((int)pvVar6 + 0x60) + fVar4;
    }
  }
  if (*(int *)((int)pvVar6 + 0x70) < (int)(animationSpeed * 360.5) + -9) {
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar6 + 0x60);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 100);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x68);
    *(float *)((int)pvVar6 + 0x60) = *(float *)((int)pvVar6 + 0x60) * 0.945;
    *(float *)((int)pvVar6 + 100) = *(float *)((int)pvVar6 + 100) * 0.945;
    *(float *)((int)pvVar6 + 0x68) = *(float *)((int)pvVar6 + 0x68) * 0.945;
    fVar1 = (moby->pos).x;
    fVar2 = (moby->pos).y;
    fVar3 = (moby->pos).z;
  }
  else {
    fVar1 = (moby->pos).x + *(float *)((int)pvVar6 + 0x60);
    (moby->pos).x = fVar1;
    fVar2 = (moby->pos).y + *(float *)((int)pvVar6 + 100);
    (moby->pos).y = fVar2;
    fVar3 = (moby->pos).z + *(float *)((int)pvVar6 + 0x68);
    (moby->pos).z = fVar3;
  }
  dVar16 = (double)fVar1;
  dVar15 = (double)fVar2;
  dVar14 = (double)fVar3;
  if (((dVar16 < dVar18) || (1021.0 < dVar16)) ||
     ((dVar15 < dVar18 || (((1021.0 < dVar15 || (dVar14 < dVar18)) || (1021.0 < dVar14)))))) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  iVar13 = *(int *)((int)pvVar6 + 0x74);
  if (((iVar13 != 0) && (*(char *)(iVar13 + 0x20) != -3 && *(char *)(iVar13 + 0x20) != -2)) &&
     (fVar1 = (float)(dVar15 - (double)*(float *)(iVar13 + 0x14)),
     fVar2 = (float)(dVar16 - (double)*(float *)(iVar13 + 0x10)),
     fVar3 = (float)(dVar14 - (double)*(float *)(iVar13 + 0x18)),
     8.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1))) {
    uVar19 = 0x4030000000000000;
    mobyutil::SetCollDamIn(0x4030000000000000,auStack_80,moby,0x30000);
    uVar17 = 0x3ffb333340000000;
    uVar11 = collproc::CollMobySphere(0x3ffb333340000000,local_90);
    uVar12 = collproc::CollSphere(uVar17,local_90);
    uVar11 = uVar11 | uVar12;
    iVar13 = mobyutil::MB_damage(moby,0xffffffffffffffff,0);
    if ((iVar13 != 0) &&
       (fVar1 = *(float *)((int)pvVar6 + 0x20) - *(float *)(iVar13 + 0x2c),
       *(float *)((int)pvVar6 + 0x20) = fVar1, fVar1 <= 0.0)) {
      uVar11 = uVar11 | 0x2000;
      CollOutput.pMoby = (MobyInstance *)0x0;
    }
    if (((CollOutput.pMoby == (MobyInstance *)0x0) ||
        ((((((((MVar5 = (CollOutput.pMoby)->oClass,
               MVar5 != (PLANETBUSTER_MAXIMUS_PART_0500|SEEKER) && MVar5 != 0x504 &&
               (MVar5 != 0x535)) && (MVar5 != (PLANETBUSTER_MAXIMUS_PART_0500|SUCKCANNON_0036))) &&
             ((MVar5 != (PLANETBUSTER_MAXIMUS_PART_0500|HANGAR_DOOR_0037) && (MVar5 != 0x538)))) &&
            (MVar5 != ROCKET_0052)) &&
           (((MVar5 != MINE_0053 && (MVar5 != 0x539)) &&
            ((MVar5 != 0x53a &&
             (((MVar5 != 0x191 && (MVar5 != QWARKS_STARFIGHTER_PART_0184)) &&
              (MVar5 != QWARKS_STARFIGHTER_PART_0185)))))))) &&
          ((MVar5 != QWARKS_STARFIGHTER_PART_0186 && (MVar5 != QWARKS_STARFIGHTER_PART_0187)))) &&
         ((MVar5 != QWARKS_STARFIGHTER_PART_0188 &&
          (((MVar5 != QWARKS_STARFIGHTER_PART_0189 && (MVar5 != QWARKS_STARFIGHTER_PART_018A)) &&
           ((MVar5 != QWARKS_STARFIGHTER_PART_018B &&
            (((MVar5 != QWARKS_STARFIGHTER_PART_018C && (MVar5 != QWARKS_STARFIGHTER_PART_018F)) &&
             (MVar5 != QWARKS_STARFIGHTER_PART_0190)))))))))))) && (uVar11 != 0)) {
      if (moby->enabled != '\0') {
        if ((uVar11 & 0x2000) == 0) {
          mobyutil::MB_genericExplosion
                    (0x4010000000000000,uVar19,0x401c000000000000,0x4010000000000000,
                     0x3ff0000000000000,0x3ff0000000000000,0x402e000000000000,moby,
                     (int)pvVar6 + 0x60,0,0,0xffffffffffffffff,0x14,5,0x10);
        }
        else {
          mobyutil::MB_genericExplosion
                    (0,0,0,0,0,0x3ff0000000000000,0,moby,(int)pvVar6 + 0x60,0,3,0,5,2,7);
        }
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  iVar13 = fastfunc::FastDecTimerS32((int)pvVar6 + 0x70);
  if (iVar13 == 0) {
    return;
  }
  if (moby->enabled != '\0') {
    return;
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0047e760  ns=mobyupdate_helpers  size=0x14
// sig: undefined M830_0047e760(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M830_0047e760(void)

{
  DAT_00877c2c = 0x10000;
  return;
}



//==== 0047e7a8  ns=mobyupdate_unsorted  size=0x404
// sig: undefined UpdateMoby_830(MobyInstance * moby)
// callers(0): 
// callees(4): 000fcc68 mobyutil::MB_randRot; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 830 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_830(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  longlong lVar5;
  MobyInstance *pMVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  piVar4 = (int *)moby->pVar;
  if (moby->state == 0) {
    dVar11 = (double)mobyutil::MB_randRot();
    piVar4[3] = (int)(float)dVar11;
    uVar3 = moby->uid;
    (moby->pos).z = (moby->pos).z - 0.35;
    if ((((&DAT_00a545c4)[(short)uVar3] == '\0') &&
        ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
         & 1 << (uVar3 & 0x1f)) == 0)) &&
       ((piVar4[2] == 0 || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)))) {
      moby->state = '\x01';
      pMVar6 = (MobyInstance *)0x1;
    }
    else {
      moby->setByGroup = '\x02';
      moby->state = '\x02';
      moby->field60_0x90 = 0x80208020;
      iVar10 = *piVar4;
      pMVar6 = (MobyInstance *)0x2;
      if ((iVar10 != -1) && (pMVar6 = (MobyInstance *)0x0, 0 < Splines[iVar10]->cnt)) {
        iVar9 = 0;
        do {
          if (*(int *)((int)&Splines[iVar10]->points[0].w + iVar9) == piVar4[1]) {
            *(undefined4 *)((int)&Splines[iVar10]->points[0].w + iVar9) = 0;
            iVar10 = *piVar4;
          }
          pMVar6 = (MobyInstance *)((int)&(pMVar6->bSphere).x + 1);
          iVar9 = iVar9 + 0x10;
        } while ((int)pMVar6 < Splines[iVar10]->cnt);
      }
    }
  }
  else {
    pMVar6 = moby;
    if (moby->state < 2) {
      dVar12 = (double)fastfunc::FastWrapRot((float)piVar4[3],mobyutil::g_FrameTime * 6.2831855);
      dVar11 = (double)(float)(3.141592502593994 - dVar12);
      if (dVar12 - (double)(float)(3.141592502593994 - dVar12) < 0.0) {
        dVar11 = dVar12;
      }
      dVar13 = (double)(float)(-3.141592502593994 - dVar12);
      if ((double)(float)(-3.141592502593994 - dVar12) - dVar11 < 0.0) {
        dVar13 = dVar11;
      }
      dVar11 = (double)(float)(dVar13 * dVar13);
      dVar15 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar13));
      dVar14 = (double)(float)(dVar11 * dVar15);
      piVar4[3] = (int)(float)dVar12;
      lVar5 = fastfunc::FastDoubleToInt
                        ((double)((((float)(dVar11 * dVar14) * 2.601887e-06 +
                                   (float)(dVar14 * -0.0001980741071747616 +
                                          (double)(float)(dVar15 * 0.008333025500178337 +
                                                         (double)(float)((double)(float)(dVar11 * 
                                                  dVar13) * -0.16666656732559204 + dVar13)))) * 4.0
                                  - 3.0) * 128.0));
      lVar7 = lVar5 + (lVar5 + -0x20 >> 0x3f & 0x20U - lVar5);
      uVar8 = lVar7 + (0x80 - lVar5 >> 0x3f & 0x80U - lVar7);
      bVar1 = g_standingOnMoby == moby;
      moby->field60_0x90 =
           (uint)((uVar8 & 0xffffffff) << 8) | (uint)uVar8 | (uint)((uVar8 & 0xffffffff) << 0x10) |
           0x80000000;
      pMVar6 = (MobyInstance *)&hero::g_heroMtx;
      if ((bVar1) && (pMVar6 = (MobyInstance *)(uint)g_framesNotGrounded, g_framesNotGrounded == 0))
      {
        bVar2 = moby->levelFlagIdx;
        uVar3 = moby->uid;
        (&DAT_00a53964)[(short)uVar3] = bVar2 + 2;
        if ((bVar2 == 0xff) ||
           (((&DAT_00a202c0)[bVar2] != -1 && (g_LevelFlags[Level][bVar2] == -1)))) {
          (&DAT_00a545c4)[(short)uVar3] = bVar2 + 2;
        }
        moby->state = '\x02';
        moby->setByGroup = '\x01';
        moby->field60_0x90 = 0x80208020;
        pMVar6 = (MobyInstance *)sound::PlayMobySound(0,0,moby);
        iVar10 = *piVar4;
        if ((iVar10 != -1) && (pMVar6 = (MobyInstance *)0x0, 0 < Splines[iVar10]->cnt)) {
          iVar9 = 0;
          do {
            if (*(int *)((int)&Splines[iVar10]->points[0].w + iVar9) == piVar4[1]) {
              *(undefined4 *)((int)&Splines[iVar10]->points[0].w + iVar9) = 0;
              iVar10 = *piVar4;
            }
            pMVar6 = (MobyInstance *)((int)&(pMVar6->bSphere).x + 1);
            iVar9 = iVar9 + 0x10;
          } while ((int)pMVar6 < Splines[iVar10]->cnt);
        }
      }
    }
  }
  return pMVar6;
}



//==== 0047ebac  ns=Global  size=0x15c
// sig: undefined FUN_0047ebac(void)
// callers(2): 00253480 mobyupdate_unsorted::UpdateMoby_1347; 00446088 mobyupdate_unsorted::UpdateMoby_749
// callees(1): 0015d12c sound::PlayMobySound

void FUN_0047ebac(MobyInstance *param_1)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)param_1->pVar;
  if (param_1->state == '\x01') {
    bVar1 = param_1->levelFlagIdx;
    uVar2 = param_1->uid;
    (&DAT_00a53964)[(short)uVar2] = bVar1 + 2;
    if ((bVar1 == 0xff) || (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
      (&DAT_00a545c4)[(short)uVar2] = bVar1 + 2;
    }
    param_1->state = '\x02';
    param_1->setByGroup = '\x01';
    param_1->field60_0x90 = 0x80208020;
    sound::PlayMobySound(0,0,param_1);
    iVar4 = *piVar3;
    if ((iVar4 != -1) && (iVar6 = 0, 0 < Splines[iVar4]->cnt)) {
      iVar5 = 0;
      do {
        if (*(int *)((int)&Splines[iVar4]->points[0].w + iVar5) == piVar3[1]) {
          *(undefined4 *)((int)&Splines[iVar4]->points[0].w + iVar5) = 0;
          iVar4 = *piVar3;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar6 < Splines[iVar4]->cnt);
    }
  }
  return;
}



//==== 0047ed08  ns=mobyupdate_helpers  size=0x14
// sig: undefined M831_0047ed08(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M831_0047ed08(void)

{
  DAT_00877c9c = 0x10000;
  return;
}



//==== 0047ed20  ns=mobyupdate_helpers  size=0xbc
// sig: undefined M831_0047ed20(void)
// callers(1): 0047efa0 mobyupdate_unsorted::UpdateMoby_831
// callees(0): 

void mobyupdate_helpers::M831_0047ed20(int param_1)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  MobyInstance *pMVar6;
  ushort *puVar7;
  
  iVar3 = *(int *)(param_1 + 0x78);
  puVar7 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar6 = MobyInstance;
  do {
    uVar5 = *puVar7 & 0x7fff;
    if (pMVar6[uVar5].oClass == WATER_033F) {
      pvVar4 = pMVar6[uVar5].pVar;
      if (*(int *)(iVar3 + 0xc) == 0) {
        if (*(int *)((int)pvVar4 + 4) == *(int *)(iVar3 + 4)) goto LAB_0047ed8c;
        fVar1 = *(float *)((int)pvVar4 + 4) + (*(float *)(param_1 + 0x18) - *(float *)(iVar3 + 4));
      }
      else {
LAB_0047ed8c:
        fVar1 = *(float *)(param_1 + 0x18);
      }
      pMVar6[uVar5].pos.z = fVar1;
      pMVar6 = MobyInstance;
      *(f32 *)(&DAT_00877d08 + *(int *)((int)pvVar4 + 0x14) * 0x11a0) = MobyInstance[uVar5].pos.z;
    }
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    if ((short)uVar2 < 0) {
      return;
    }
  } while( true );
}



//==== 0047ede8  ns=mobyupdate_helpers  size=0x144
// sig: undefined M831_0047ede8(void)
// callers(1): 0047efa0 mobyupdate_unsorted::UpdateMoby_831
// callees(0): 

void mobyupdate_helpers::M831_0047ede8(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00877d00;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00877d04;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00877d00)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00877d04)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          bVar8 = 0.1 <= ABS(fVar1 - 16.0);
          if (bVar8) {
            bVar9 = ABS(fVar1 + 16.0) < 0.1;
            if (bVar9) {
              if (!bVar8) {
                (&DAT_00877d10)[iVar5] = uVar7;
              }
              if (bVar9) {
                (&DAT_00877d12)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (!bVar8) {
              (&DAT_00877d11)[iVar5] = uVar7;
            }
            if (ABS(fVar1 + 16.0) < 0.1) {
              (&DAT_00877d13)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_00877d0d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_00877d0f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_00877d0c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_00877d0e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x30);
  return;
}



//==== 0047efa0  ns=mobyupdate_unsorted  size=0x100c
// sig: undefined UpdateMoby_831(MobyInstance * moby)
// callers(0): 
// callees(16): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001042ec mobyutil::MB_SetStateByGroup; 00109c30 mobyutil::OrganicDelt; 001129d0 mobyutil::MB_ScaledVecWrapper; 0017b230 water::WaterTile_InitAll; 0017b4b0 water::WaterTile_CalcGridBSphere; 0017b780 water::WaterWave_ScaleTable; 0017b8b8 water::WaterTile_UpdateWaves; 0017bd90 water::WaterTile_PutDrop; 0047ed20 mobyupdate_helpers::M831_0047ed20; 0047ede8 mobyupdate_helpers::M831_0047ede8; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 831 */

void mobyupdate_unsorted::UpdateMoby_831(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  f32 fVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  gameMode_t gVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  longlong lVar21;
  undefined2 uVar22;
  longlong lVar23;
  ulonglong unaff_r25;
  BSphere *bounds;
  float *pfVar24;
  ulonglong unaff_r26;
  WaterTile *tile;
  float *pfVar25;
  ulonglong unaff_r27;
  undefined4 *puVar26;
  ulonglong unaff_r28;
  int *piVar27;
  ulonglong unaff_r29;
  int iVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double in_f5;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0xf0;
  puVar10 = (ulonglong *)lVar19;
  *puVar10 = uVar16;
  puVar10[0x20] = in_LR;
  puVar10[0x1c] = in_f30;
  puVar10[0x1d] = in_f31;
  puVar10[0x1b] = unaff_r31;
  puVar10[0x1a] = unaff_r30;
  gVar15 = g_gameMode;
  pfVar6 = (float *)moby->pVar;
  uVar29 = ZEXT48(pfVar6);
  puVar10[0x19] = unaff_r29;
  puVar10[0x18] = unaff_r28;
  puVar10[0x17] = unaff_r27;
  puVar10[0x16] = unaff_r26;
  puVar10[0x15] = unaff_r25;
  if (gVar15 != GAME_MODE_SCENE) {
    uVar1 = moby->state;
    if (uVar1 == '\b') {
      iVar28 = fastfunc::FastDecTimerS32(uVar29 + 0x18);
      if ((iVar28 != 0) && (DAT_010d9d08 < 5)) {
        DAT_010d9d08 = DAT_010d9d08 + 1;
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed((longlong)(DAT_010d9d08 * 4),0x8acb60);
        auVar36 = loadVectorRightIndexed((longlong)(DAT_010d9d08 * 4) + 0x10,0x8acb60);
        auVar36 = vectorConvertFromSignedFixedPointWord(auVar35 | auVar36,0);
        auVar35 = loadVectorLeftIndexed(0x54,0x47ef2c);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorAddFloatingPoint
                            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
        auVar35 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar37);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x18,
                            uVar29);
        *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar20;
      }
      (moby->pos).z = (float)(&DAT_008acb78)[DAT_010d9d08] * mobyutil::g_FrameTime + (moby->pos).z;
      mobyupdate_helpers::M831_0047ed20(moby);
      DAT_010d9d0c = (moby->pos).z;
      if (((SQRT((25.0 - g_heroPosition.z) * (25.0 - g_heroPosition.z) +
                 (211.0 - g_heroPosition.x) * (211.0 - g_heroPosition.x) +
                 (338.0 - g_heroPosition.y) * (338.0 - g_heroPosition.y)) < 6.0) &&
          (DAT_010d9d10 == 0)) &&
         (DAT_010d9d10 = 1, fVar7 = (moby->pos).z, uVar8 = (int)fVar7 >> 0x1f,
         (int)(((uint)((int)DAT_008acbc0 >> 0x1f) >> 1 ^ DAT_008acbc0) - ((int)DAT_008acbc0 >> 0x1f)
              ) < (int)((uVar8 >> 1 ^ (uint)fVar7) - uVar8))) {
        DAT_010d9d08 = 5;
      }
      if (((-1 < (int)pfVar6[4]) && (g_heroState == DEATH_DROWNING)) &&
         (hero::g_heroStateTimer == 2)) {
        DAT_010d9d04 = DAT_010d9d04 + 1;
      }
      fVar7 = (moby->pos).z;
      uVar8 = (int)fVar7 >> 0x1f;
      if (0x422fffff < (int)((uVar8 >> 1 ^ (uint)fVar7) - uVar8)) {
        mobyutil::MB_SetStateByGroup(moby->group,7);
      }
    }
    else if (uVar1 == '\a') {
      if ((int)pfVar6[4] < 0) {
        fVar7 = (moby->pos).z;
        uVar8 = (int)*pfVar6 >> 0x1f;
        uVar9 = (int)fVar7 >> 0x1f;
        if ((int)((uVar8 >> 1 ^ (uint)*pfVar6) - uVar8) < (int)((uVar9 >> 1 ^ (uint)fVar7) - uVar9))
        {
          *(undefined2 *)(&DAT_00877d1e + (int)pfVar6[5] * 0x11a0) = 0;
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else if ((g_heroState == DEATH_DROWNING) && (hero::g_heroStateTimer == 2)) {
        DAT_010d9d04 = DAT_010d9d04 + 1;
      }
    }
    else if (uVar1 == '\x03') {
      fVar39 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      fVar39 = SQRT(fVar5 * fVar5 + fVar39 * fVar39);
      if (fVar39 < 16.0) {
        fVar7 = (moby->pos).z;
        uVar8 = (int)fVar7 >> 0x1f;
        iVar28 = (uVar8 >> 1 ^ (uint)fVar7) - uVar8;
        if ((((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                   ((int)g_heroPosition.z >> 0x1f)) < iVar28) && (hero::g_heroStateType == 0x11)) &&
           ((int)(((uint)((int)hero::g_heroWaterZ >> 0x1f) >> 1 ^ (uint)hero::g_heroWaterZ) -
                 ((int)hero::g_heroWaterZ >> 0x1f)) < iVar28)) {
          hero::g_heroWaterZ = (moby->pos).z;
        }
      }
      if (((-1 < (int)pfVar6[4]) && (fVar39 < 10.0)) &&
         ((g_standingOnMoby != 0 &&
          ((g_framesNotGrounded == 0 && (*(short *)(g_standingOnMoby + 0xa6) == 0x33e)))))) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        pfVar6[7] = 0.0;
        moby->state = '\b';
        auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(0xffffffffffffcb60,0x8b0000);
        DAT_010d9d08 = 0;
        auVar36 = vectorConvertFromSignedFixedPointWord(auVar35,0);
        auVar35 = loadVectorLeftIndexed(0x54,0x47ef2c);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = vectorAddFloatingPoint
                            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar35,auVar37);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x18,
                            uVar29);
        *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar20;
      }
      iVar28 = mobyutil::MB_randInt(0x32);
      if (iVar28 == 0) {
        dVar34 = -4.0;
        dVar33 = 4.0;
        dVar31 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
        dVar32 = (double)(float)((double)(float)(&DAT_00877d00)[(int)pfVar6[5] * 0x468] + dVar31);
        dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar33);
        water::WaterTile_PutDrop
                  ((float)dVar32,
                   (float)((double)(float)(&DAT_00877d04)[(int)pfVar6[5] * 0x468] + dVar31),1.0,
                   -0.01,(WaterTile *)(&DAT_00877d00 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\x02') {
      if ((moby->setByGroup & 4U) == 0) {
        if ((-1 < (int)pfVar6[4]) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
          moby->state = '\x01';
          (moby->pos).z = *pfVar6;
        }
      }
      else {
        pfVar6[9] = 1.4013e-45;
        mobyutil::MB_SetStateByGroup(moby->group,1);
      }
      if (pfVar6[9] != 0.0) {
        fVar39 = mobyutil::OrganicDelt
                           (pfVar6[1],DAT_008acbc4 * DAT_0071f418,DAT_008acbc4 * DAT_0071f418,
                            DAT_008acbc8 * mobyutil::g_FrameTime,&(moby->pos).z,0x720000,pfVar6 + 8)
        ;
        mobyupdate_helpers::M831_0047ed20((double)fVar39,moby);
      }
      moby->setByGroup = '\x01';
      iVar28 = mobyutil::MB_randInt(200);
      if (iVar28 == 0) {
        dVar34 = -4.0;
        dVar33 = 4.0;
        dVar31 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
        dVar32 = (double)(float)((double)(float)(&DAT_00877d00)[(int)pfVar6[5] * 0x468] + dVar31);
        dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar33);
        water::WaterTile_PutDrop
                  ((float)dVar32,
                   (float)((double)(float)(&DAT_00877d04)[(int)pfVar6[5] * 0x468] + dVar31),1.0,
                   -0.05,(WaterTile *)(&DAT_00877d00 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\x01') {
      if ((moby->setByGroup & 8U) == 0) {
        moby->setByGroup = '\x02';
      }
      else {
        pfVar6[9] = 1.4013e-45;
        mobyutil::MB_SetStateByGroup(moby->group,2);
      }
      if (pfVar6[9] != 0.0) {
        in_f5 = (double)mobyutil::g_FrameTime;
        mobyutil::OrganicDelt
                  (*pfVar6,DAT_008acbc4 * DAT_0071f418,DAT_008acbc4 * DAT_0071f418,
                   (float)((double)DAT_008acbc8 * in_f5),&(moby->pos).z,0x8b0000,pfVar6 + 8);
        fVar7 = (moby->pos).z;
        fVar39 = (moby->pos).z;
        uVar8 = (int)fVar7 >> 0x1f;
        if ((0.1 < ABS(fVar39 - *pfVar6)) &&
           (((hero::g_heroStateType == 0x11 || (hero::g_heroStateType == 0x12)) &&
            ((int)(((uint)((int)hero::g_heroWaterZ >> 0x1f) >> 1 ^ (uint)hero::g_heroWaterZ) -
                  ((int)hero::g_heroWaterZ >> 0x1f)) < (int)((uVar8 >> 1 ^ (uint)fVar7) - uVar8)))))
        {
          hero::g_heroWaterZ = fVar39;
        }
        mobyupdate_helpers::M831_0047ed20(moby);
      }
      iVar28 = mobyutil::MB_randInt(200);
      if (iVar28 == 0) {
        dVar34 = -4.0;
        dVar33 = 4.0;
        dVar31 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
        dVar32 = (double)(float)((double)(float)(&DAT_00877d00)[(int)pfVar6[5] * 0x468] + dVar31);
        dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar33);
        water::WaterTile_PutDrop
                  ((float)dVar32,
                   (float)((double)(float)(&DAT_00877d04)[(int)pfVar6[5] * 0x468] + dVar31),1.0,
                   -0.05,(WaterTile *)(&DAT_00877d00 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\0') {
      if (pfVar6[5] == 0.0) {
        DAT_010d9d08 = 0;
        tile = (WaterTile *)&DAT_00877d00;
        DAT_010d9d0c = (moby->pos).z;
        DAT_010d9d10 = 0;
        water::WaterTile_InitAll((WaterTile *)&DAT_00877d00,0x30);
        water::WaterWave_ScaleTable(1.0);
        fVar5 = DirectionalLights[0].direction1.x;
        fVar3 = ABS(DirectionalLights[0].direction1.x);
        fVar4 = ABS(DirectionalLights[0].direction1.y);
        WaterTileConsts.TileSize.x = 16.0;
        WaterTileConsts.TileSize.y = 16.0;
        WaterTileConsts.TileOffset.x = -8.0;
        WaterTileConsts.TileOffset.y = -8.0;
        WaterTileConsts.TileGridSize.x = 1.0;
        WaterTileConsts.TileGridSize.y = 1.0;
        WaterTileConsts.texScale = 0.9;
        WaterTileConsts.waveInc = 0.1;
        uVar8 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        *(float *)(puVar10 + 0xe) = fVar3 - fVar4;
        fVar39 = 0.0;
        uVar17 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar8 & 4;
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar11 = fVar3;
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar11 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar11) {
          lVar18 = uVar16 - 0xe0;
          lVar21 = uVar16 - 0x7c;
          lVar23 = uVar16 - 0x6c;
          lVar30 = 2;
          fVar3 = (fVar4 - fVar11) / (fVar4 + fVar11);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar10 + 0x10) = fVar3;
          *(float *)(puVar10 + 0xf) = fVar3;
          *(float *)((int)puVar10 + 0x7c) = fVar3;
          *(float *)((int)puVar10 + 0x74) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar10 + 0xf) = *(float *)(puVar10 + 0xf) * fVar4;
          *(float *)((int)puVar10 + 0x7c) = *(float *)((int)puVar10 + 0x7c) * fVar3;
          *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar3 * fVar3;
            iVar28 = (int)lVar21;
            lVar18 = lVar18 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar23 = uVar16 - 0x7c;
          pfVar24 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar21 = lVar23;
          do {
            fVar3 = *pfVar24;
            fVar4 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 0x74) * fVar3;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
            lVar21 = lVar21 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar18 = 2;
          do {
            iVar28 = (int)lVar19;
            iVar14 = (int)lVar23;
            lVar19 = lVar19 + 0x10;
            lVar23 = lVar23 + 0x10;
            fVar39 = fVar39 + *(float *)(iVar28 + 0x74) + *(float *)(iVar14 + 4) +
                     *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar39 = (fVar39 + 0.7853982) * fVar5 + fVar2;
        }
        fVar5 = fVar39 + 1.5707963;
        bounds = (BSphere *)&DAT_010d9a00;
        fVar3 = 3.1415925 - fVar39;
        if (fVar39 - (3.1415925 - fVar39) < 0.0) {
          fVar3 = fVar39;
        }
        fVar4 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar4 = fVar5;
        }
        fVar11 = -3.1415925 - fVar39;
        if ((-3.1415925 - fVar39) - fVar3 < 0.0) {
          fVar11 = fVar3;
        }
        fVar39 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
          fVar39 = fVar4;
        }
        fVar5 = fVar11 * fVar11;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex0 = 0x29;
        fVar3 = fVar39 * fVar39;
        WaterTileConsts.tex1 = 0x2a;
        WaterTileConsts.alpha0 = 0x1c;
        WaterTileConsts.alpha1 = 0x40;
        fVar12 = fVar5 * fVar5 * fVar11;
        fVar4 = fVar3 * fVar3 * fVar39;
        fVar13 = fVar5 * fVar12;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.lightDir.y =
             (fVar5 * fVar13 * 2.601887e-06 +
             fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar5 * fVar11 * -0.16666657 + fVar11)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar39 * -0.16666657 + fVar39) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00877d00;
        WaterTileBoxes = (WaterTileBox *)&DAT_010d9a00;
        WaterTileCnt = 0x30;
        iVar28 = 0;
        WaterFog.r = '\0';
        WaterFog.g = '\v';
        WaterFog.b = '>';
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x46a00000;
        WaterFogNearIntensity = 0x437f0000;
        WaterFogFarIntensity = 0x41d00000;
        do {
          water::WaterTile_CalcGridBSphere(tile,bounds);
          iVar28 = iVar28 + 1;
          tile = (WaterTile *)&tile[1].ovlTex;
          bounds = bounds + 1;
          *(undefined2 *)(&DAT_00877d1e + (int)pfVar6[5] * 0x11a0) =
               *(undefined2 *)(&DAT_008acb00 + (int)pfVar6[5] * 2);
        } while (iVar28 < 0x30);
        iVar28 = 0;
        do {
          mobyupdate_helpers::M831_0047ede8(iVar28);
          iVar28 = iVar28 + 1;
        } while (iVar28 < 0x30);
      }
      fVar39 = pfVar6[3];
      moby->drawDistance = 0;
      moby->modeBits = moby->modeBits | DISABLED;
      if (fVar39 == 0.0) {
        if ((int)pfVar6[4] < 0) {
          fVar39 = (moby->pos).z;
          pfVar6[1] = fVar39;
          *pfVar6 = fVar39 + 4.5;
          if (pfVar6[2] == 0.0) {
            moby->state = '\x02';
            (moby->pos).z = pfVar6[1];
          }
          else {
            moby->state = '\x01';
            (moby->pos).z = *pfVar6;
          }
        }
        else {
          moby->state = '\x02';
          (moby->pos).z = pfVar6[1];
        }
      }
      else {
        if ((-1 < (int)pfVar6[4]) && (moby->updateDistance = -1, 1 < DAT_010d9d04)) {
          puVar10[0x13] = (longlong)(DAT_010d9d04 + -1);
          iVar28 = 0;
          piVar27 = &DAT_008acb90;
          puVar26 = &DAT_008acb60;
          pfVar25 = (float *)&DAT_008acba8;
          pfVar24 = (float *)&DAT_008acb78;
          dVar31 = (double)(float)((double)(longlong)puVar10[0x13] * 0.014285714365541935 + 1.0);
          if (1.399999976158142 - dVar31 < 0.0) {
            dVar31 = 1.399999976158142;
          }
          dVar33 = (double)(float)(1.0 / dVar31);
          do {
            puVar10[0x13] = (longlong)*piVar27;
            uVar20 = fastfunc::FastDoubleToInt
                               ((double)(float)((double)(longlong)puVar10[0x13] * dVar31));
            fVar39 = *pfVar25;
            iVar28 = iVar28 + 1;
            *puVar26 = uVar20;
            piVar27 = piVar27 + 1;
            puVar26 = puVar26 + 1;
            pfVar25 = pfVar25 + 1;
            *pfVar24 = (float)((double)fVar39 * dVar33);
            pfVar24 = pfVar24 + 1;
          } while (iVar28 < 6);
        }
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          moby->state = '\a';
          (moby->pos).z = 44.0;
        }
        else {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          moby->state = '\x03';
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(0x34,0x47ef2c);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          fVar39 = pfVar6[1];
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          uVar8 = (int)fVar39 >> 0x1f;
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar20 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x18,
                              uVar29);
          *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar20;
          fVar7 = (moby->pos).z;
          uVar9 = (int)fVar7 >> 0x1f;
          if ((int)((uVar9 >> 1 ^ (uint)fVar7) - uVar9) < (int)((uVar8 >> 1 ^ (uint)fVar39) - uVar8)
             ) {
            *(undefined2 *)(&DAT_00877d1e + (int)pfVar6[5] * 0x11a0) = 0;
          }
        }
      }
      if (pfVar6[5] == 6.5861e-44) {
        moby->collision = (ushort *)0x0;
      }
    }
    if (-1 < (int)pfVar6[5]) {
      dVar33 = 0.0;
      *(f32 *)(&DAT_00877d08 + (int)pfVar6[5] * 0x11a0) = (moby->pos).z;
      dVar31 = dVar33;
      iVar28 = mobyutil::MB_ScaledVecWrapper(0x4048000000000000,moby);
      if (iVar28 != -1) {
        if (moby->state < 8 && 2 < moby->state) {
          fVar7 = (moby->pos).z;
          uVar8 = (int)fVar7 >> 0x1f;
          uVar9 = (int)pfVar6[1] >> 0x1f;
          iVar28 = (uVar8 >> 1 ^ (uint)fVar7) - uVar8;
          if (((int)((uVar9 >> 1 ^ (uint)pfVar6[1]) - uVar9) < iVar28) &&
             (uVar8 = (int)*pfVar6 >> 0x1f, iVar28 < (int)((uVar8 >> 1 ^ (uint)*pfVar6) - uVar8))) {
            dVar31 = 1.0;
          }
        }
        else {
          dVar31 = 1.0;
        }
      }
      uVar22 = 0;
      if (dVar31 != dVar33) {
        uVar22 = *(undefined2 *)(&DAT_008acb00 + (int)pfVar6[5] * 2);
      }
      fVar39 = pfVar6[5];
      *(undefined2 *)(&DAT_00877d1e + (int)fVar39 * 0x11a0) = uVar22;
      if (fVar39 == 0.0) {
        water::WaterTile_UpdateWaves((WaterTile *)&DAT_00877d00,0x30);
        RegisterFuncForMoby(&PTR_M832_0047ffac_0070eed0,moby);
        fVar39 = pfVar6[5];
      }
      if (fVar39 == DAT_00877cc0) {
        fVar5 = pfVar6[5];
        uVar22 = (undefined2)DAT_00877cc4;
        *(undefined2 *)(&DAT_00877d1e + (int)fVar39 * 0x11a0) = uVar22;
        *(undefined2 *)(&DAT_008acb00 + (int)fVar5 * 2) = uVar22;
      }
    }
  }
  return;
}



//==== 0047ffac  ns=mobyupdate_helpers  size=0x30
// sig: undefined M832_0047ffac(void)
// callers(0): 
// callees(1): 0017cfdc water::WaterTile_DrawAll

void mobyupdate_helpers::M832_0047ffac(void)

{
  water::WaterTile_DrawAll(&DAT_00877d00,0x30);
  return;
}



//==== 0047ffdc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M832_0047ffdc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M832_0047ffdc(void)

{
  DAT_008acc18 = 0x10000;
  return;
}



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



