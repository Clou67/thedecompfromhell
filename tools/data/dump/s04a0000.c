//==== 004a0148  ns=mobyupdate_unsorted  size=0x618
// sig: undefined UpdateMoby_880(MobyInstance * moby)
// callers(0): 
// callees(8): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00128248 partupd::SpawnPart_27; 0012f490 partupd::SpawnPart_51; 0015d12c sound::PlayMobySound; 00500608 fastfunc::FastVecNormalize

/* Moby 880 */

void mobyupdate_unsorted::UpdateMoby_880(MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  undefined8 uVar8;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined4 local_a0 [8];
  
  pvVar5 = moby->pVar;
  fVar2 = (moby->pos).x + *(float *)((int)pvVar5 + 0x30);
  (moby->pos).x = fVar2;
  fVar3 = (moby->pos).y + *(float *)((int)pvVar5 + 0x34);
  (moby->pos).y = fVar3;
  fVar4 = (moby->pos).z + *(float *)((int)pvVar5 + 0x38);
  (moby->pos).z = fVar4;
  fVar7 = fVar3 - *(float *)((int)pvVar5 + 0x44);
  fVar6 = fVar2 - *(float *)((int)pvVar5 + 0x40);
  if (SQRT(fVar6 * fVar6 + fVar7 * fVar7) <= 30.0) {
    if ((moby->enabled != '\0') ||
       (SQRT((fVar2 - g_heroPosition.x) * (fVar2 - g_heroPosition.x) +
             (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)) < 30.0)) {
      lVar10 = (longlong)(int)moby + 0x10;
      iVar9 = collproc::CollLine(local_d0,lVar10,
                                 (ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar5 + 0x54)) << 0x20)
                                 >> 0x25,*(undefined4 *)((int)pvVar5 + 0x50),pvVar5);
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).z;
      if (iVar9 != 0) {
        (moby->pos).x = CollOutput.ip.x;
        cVar1 = moby->enabled;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        if (cVar1 != '\0') {
          iVar9 = 0;
          dVar11 = -1.0;
          dVar12 = 1.0;
          dVar14 = 3.0;
          dVar16 = 6.0;
          dVar13 = 10.5;
          dVar15 = 15.5;
          uVar17 = 0x40dd4c0000000000;
          do {
            mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
            mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
            mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
            fastfunc::FastVecNormalize(local_a0,(int)pvVar5 + 0x30,0xa10980);
            mobyutil::MB_randRangeFloat
                      ((float)((double)mobyutil::g_FrameTime * dVar14),
                       (float)((double)mobyutil::g_FrameTime * dVar16));
            uVar8 = mobyutil::MB_randRange
                              ((int)((double)animationSpeed * dVar13),
                               (int)((double)animationSpeed * dVar15));
            partupd::SpawnPart_27(uVar17,lVar10,local_b0,0x7f2f4f6f,uVar8);
            iVar9 = iVar9 + 1;
          } while (iVar9 < 5);
        }
        sound::PlayMobySound(0,0,moby);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    if ((((fVar2 < 2.0) || (1021.0 < fVar2)) || (fVar3 < 2.0)) ||
       (((1021.0 < fVar3 || (fVar4 < 2.0)) || (1021.0 < fVar4)))) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    if (moby->enabled != '\0') {
      iVar9 = 0;
      dVar11 = -1.0;
      dVar12 = 1.0;
      dVar14 = 2.0;
      dVar16 = 4.0;
      do {
        mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
        mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
        mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
        mobyutil::MB_randRangeFloat
                  ((float)((double)mobyutil::g_FrameTime * dVar14),
                   (float)((double)mobyutil::g_FrameTime * dVar16));
        partupd::SpawnPart_51((longlong)(int)moby + 0x10,local_c0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004a0760  ns=mobyupdate_helpers  size=0x14
// sig: undefined M881_004a0760(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M881_004a0760(void)

{
  DAT_008cbe0c = 0x10000;
  return;
}



//==== 004a07c0  ns=mobyupdate_unsorted  size=0x84c
// sig: undefined UpdateMoby_881(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00108180 mobyutil::MB_computeLobVelocity; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 004a1030 mobyupdate_helpers::M881_004a1030; 004fffb4 fastfunc::FastDecTimerS16; 00500ca4 fastfunc::FastEulerToMtx1

/* Moby 881 */

void mobyupdate_unsorted::UpdateMoby_881(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  int iVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0x210;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar18;
  puVar14[0x44] = in_LR;
  puVar14[0x3e] = in_f28;
  puVar14[0x3f] = in_f29;
  puVar14[0x40] = in_f30;
  puVar14[0x41] = in_f31;
  puVar14[0x3d] = unaff_r31;
  puVar14[0x3c] = unaff_r30;
  puVar14[0x3b] = unaff_r29;
  puVar14[0x3a] = unaff_r28;
  if (moby != (MobyInstance *)0x0) {
    pvVar9 = moby->pVar;
    uVar28 = ZEXT48(pvVar9);
    if (pvVar9 != (void *)0x0) {
      iVar21 = mobyutil::MB_damage(moby,0x230000,0);
      iVar22 = mobyutil::MB_HandleDamage(moby,iVar21,uVar28 + 0x20,0,puVar14 + 0x34,0,0,4);
      iVar23 = *(int *)(puVar14 + 0x34);
      if (((iVar22 < 3) && (-1 < iVar22)) && (0 < iVar22)) {
        *(undefined4 *)((int)pvVar9 + 0x20) = 0;
      }
      if ((1 < iVar23) &&
         (((iVar21 == 0 || (*(int *)(iVar21 + 0x20) == 0)) ||
          (*(short *)(*(int *)(iVar21 + 0x20) + 0xa6) != 0x372)))) {
        uVar10 = (int)*(uint *)((int)pvVar9 + 0x20) >> 0x1f;
        uVar11 = (int)*(uint *)(iVar21 + 0x2c) >> 0x1f;
        fVar2 = *(float *)(iVar21 + 0x2c);
        if ((int)((uVar10 >> 1 ^ *(uint *)((int)pvVar9 + 0x20)) - uVar10) <=
            (int)((uVar11 >> 1 ^ *(uint *)(iVar21 + 0x2c)) - uVar11)) {
          mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
          *(undefined4 *)((int)pvVar9 + 0x20) = 0;
          *(undefined4 *)((int)puVar14 + 0xcc) = 0;
          *(undefined4 *)(puVar14 + 0x19) = 0;
          *(undefined4 *)((int)puVar14 + 0xc4) = 0;
          *(undefined4 *)(puVar14 + 0x18) = 0;
          puVar14[0x12] = 0xffffffffffffffff;
          puVar14[0x14] = 1;
          puVar14[0x15] = 1;
          puVar14[0x16] = 0xffffffffffffffff;
          puVar14[0x17] = 0;
          mobyutil::MB_genericExplosion
                    (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,moby,uVar18 - 0x150,0,&DAT_004a0778,0,10,3,0x10);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        *(float *)((int)pvVar9 + 0x20) = *(float *)((int)pvVar9 + 0x20) - fVar2;
        auVar35 = loadVectorLeftIndexed(0x18,0x4a0778);
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar35,0x26,uVar28);
        *(undefined2 *)((int)pvVar9 + 0x26) = uVar12;
        mobyutil::MB_UpdateLightsTransition(moby,uVar28 + 0x60);
      }
      moby->damage = -1;
      mobyutil::MB_ColorDyingMoby(moby,uVar28 + 0x60);
      dVar33 = 20.0;
      mobyutil::MB_getTarget(0x4034000000000000,moby,&DAT_004a0778,uVar18 - 0xc0);
      bVar1 = moby->state;
      if (bVar1 == 0) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(0x70,uVar28);
        auVar36 = loadVectorRightIndexed(0x80,uVar28);
        auVar36 = vectorConvertFromSignedFixedPointWord(auVar35 | auVar36,0);
        auVar35 = loadVectorLeftIndexed(0x20,0x4a0778);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorAddFloatingPoint
                            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
        auVar36 = loadVectorLeftIndexed(0x710,0xa10000);
        auVar35 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar37);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = ZEXT416((uint)(auVar36._0_4_ + auVar35._0_4_)) & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x74,
                            uVar28);
        *(undefined4 *)((int)pvVar9 + 0x74U & 0xfffffffc) = uVar13;
        *(undefined1 *)((int)pvVar9 + 0x29) = 0;
        moby->state = '\x01';
      }
      else if (bVar1 < 2) {
        auVar35 = loadVectorLeftIndexed(0x710,0xa10000);
        if (*(int *)((int)pvVar9 + 0x74) <= worldUpdateTime) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x24,0x4a0778);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar35 = ZEXT416((uint)(auVar35._0_4_ + auVar36._0_4_)) & (undefined1  [16])0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x74,
                              uVar28);
          *(undefined4 *)((int)pvVar9 + 0x74U & 0xfffffffc) = uVar13;
          *(undefined2 *)((int)pvVar9 + 0x78) = 0;
          dVar33 = (double)mobyutil::MB_randRot();
          *(float *)((int)pvVar9 + 0x7c) = (float)dVar33;
          *(undefined2 *)((int)pvVar9 + 0x7a) = 0;
          moby->state = '\x02';
        }
      }
      else if (bVar1 < 3) {
        iVar23 = fastfunc::FastDecTimerS16(uVar28 + 0x78);
        if (iVar23 != 0) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(0x28,0x4a0778);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = vectorSplatHalfWord(auVar35,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar35,0x78,uVar28);
          *(undefined2 *)((int)pvVar9 + 0x78) = uVar12;
          fVar2 = (moby->pos).y;
          fVar3 = (moby->pos).x;
          fVar7 = fVar2 - *(float *)((int)puVar14 + 0x154);
          fVar4 = fVar3 - *(float *)(puVar14 + 0x2a);
          if ((double)SQRT(fVar4 * fVar4 + fVar7 * fVar7) < dVar33) {
            fVar3 = *(float *)(puVar14 + 0x2a) - fVar3;
            fVar2 = *(float *)((int)puVar14 + 0x154) - fVar2;
            fVar7 = ABS(fVar3);
            fVar4 = ABS(fVar2);
            *(float *)((int)puVar14 + 0x1a4) = fVar3;
            *(float *)(puVar14 + 0x35) = fVar2;
            *(float *)((int)puVar14 + 0x1ac) = fVar7 - fVar4;
            fVar2 = 0.0;
            uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x1a4) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0x1ac) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar14 + 0x35) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)((int)puVar14 + 0x1a4));
            if (*(float *)((int)puVar14 + 0x1ac) - 0.0 < 0.0) {
              fVar3 = fVar4;
            }
            fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
            fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
            fVar15 = ABS(*(float *)(puVar14 + 0x35));
            if (*(float *)((int)puVar14 + 0x1ac) - 0.0 < 0.0) {
              fVar15 = fVar7;
            }
            if (0.0 < fVar3) {
              lVar26 = uVar18 - 0x200;
              lVar25 = uVar18 - 0x60;
              lVar24 = uVar18 - 0x50;
              lVar29 = 2;
              fVar3 = (fVar15 - fVar3) / (fVar15 + fVar3);
              fVar7 = fVar3 * fVar3;
              *(float *)((int)puVar14 + 0x1bc) = fVar3;
              *(float *)((int)puVar14 + 0x1b4) = fVar3;
              *(float *)(puVar14 + 0x37) = fVar3;
              *(float *)(puVar14 + 0x36) = fVar3;
              fVar3 = fVar7 * fVar7;
              *(float *)((int)puVar14 + 0x1b4) = *(float *)((int)puVar14 + 0x1b4) * fVar7;
              *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar3;
              *(float *)((int)puVar14 + 0x1bc) = *(float *)((int)puVar14 + 0x1bc) * fVar3 * fVar7;
              do {
                *(float *)((int)lVar26 + 0x1b0) = *(float *)((int)lVar26 + 0x1a0) * fVar3 * fVar3;
                iVar23 = (int)lVar25;
                lVar26 = lVar26 + 8;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
                lVar24 = lVar24 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar26 = uVar18 - 0x60;
              lVar29 = 4;
              pfVar27 = (float *)&DAT_007358e0;
              lVar24 = lVar26;
              lVar25 = lVar20;
              do {
                fVar3 = *pfVar27;
                fVar7 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar25 + 0x1b0) = *(float *)((int)lVar25 + 0x1b0) * fVar3;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
                lVar24 = lVar24 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar24 = 2;
              do {
                iVar23 = (int)lVar20;
                lVar20 = lVar20 + 0x10;
                iVar21 = (int)lVar26;
                lVar26 = lVar26 + 0x10;
                fVar2 = fVar2 + *(float *)(iVar23 + 0x1b0) + *(float *)(iVar21 + 4) +
                        *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar4;
            }
            *(float *)((int)pvVar9 + 0x7c) = fVar2;
          }
          dVar33 = (double)mobyutil::MB_randRangeFloat(3.0,11.0);
          *(float *)(puVar14 + 0x1a) = (float)dVar33;
          dVar33 = (double)mobyutil::MB_randRangeFloat(-2.0,2.0);
          *(float *)((int)puVar14 + 0xd4) = (float)dVar33;
          dVar34 = 0.0;
          fVar5 = (moby->pos).x;
          *(undefined4 *)(puVar14 + 0x1b) = 0;
          fVar6 = (moby->pos).y;
          *(f32 *)(puVar14 + 0x20) = fVar5;
          fVar5 = (moby->pos).w;
          *(f32 *)((int)puVar14 + 0x104) = fVar6;
          *(f32 *)((int)puVar14 + 0x10c) = fVar5;
          *(float *)(puVar14 + 0x21) = (moby->pos).z + 1.0;
          *(undefined4 *)((int)puVar14 + 0xec) = 0;
          *(undefined4 *)(puVar14 + 0x1d) = 0;
          *(undefined4 *)((int)puVar14 + 0xe4) = 0;
          *(undefined4 *)(puVar14 + 0x1c) = 0;
          *(undefined4 *)(puVar14 + 0x1d) = *(undefined4 *)((int)pvVar9 + 0x7c);
          fastfunc::FastEulerToMtx1(uVar18 - 0x100,uVar18 - 0x130);
          fVar2 = *(float *)((int)puVar14 + 0xd4);
          fVar3 = *(float *)(puVar14 + 0x1a);
          fVar7 = *(float *)(puVar14 + 0x1b);
          fVar4 = *(float *)((int)puVar14 + 0xdc);
          fVar16 = *(float *)((int)puVar14 + 0x144) * fVar4 +
                   *(float *)((int)puVar14 + 0x134) * fVar7 +
                   *(float *)((int)puVar14 + 0x114) * fVar3 +
                   *(float *)((int)puVar14 + 0x124) * fVar2;
          fVar15 = *(float *)(puVar14 + 0x28) * fVar4 +
                   *(float *)(puVar14 + 0x26) * fVar7 +
                   *(float *)(puVar14 + 0x22) * fVar3 + *(float *)(puVar14 + 0x24) * fVar2;
          fVar8 = *(float *)(puVar14 + 0x29) * fVar4 +
                  *(float *)(puVar14 + 0x27) * fVar7 +
                  *(float *)(puVar14 + 0x23) * fVar3 + *(float *)(puVar14 + 0x25) * fVar2;
          *(float *)(puVar14 + 0x1a) = fVar15;
          *(float *)((int)puVar14 + 0xd4) = fVar16;
          *(float *)(puVar14 + 0x1b) = fVar8;
          fVar4 = *(float *)((int)puVar14 + 0x14c) * fVar4 +
                  *(float *)((int)puVar14 + 0x13c) * fVar7 +
                  *(float *)((int)puVar14 + 0x11c) * fVar3 + *(float *)((int)puVar14 + 300) * fVar2;
          dVar32 = (double)SQRT(fVar8 * fVar8 + fVar15 * fVar15 + fVar16 * fVar16);
          *(float *)((int)puVar14 + 0xdc) = fVar4;
          fVar17 = mobyutil::g_FrameTime;
          fVar2 = (moby->pos).x;
          fVar3 = (moby->pos).y;
          fVar7 = (moby->pos).z;
          *(float *)((int)puVar14 + 0xfc) = fVar4;
          fVar4 = DAT_0071f418;
          *(float *)(puVar14 + 0x1a) = fVar15 + fVar2;
          *(float *)((int)puVar14 + 0xd4) = fVar16 + fVar3;
          *(float *)(puVar14 + 0x1b) = fVar8 + fVar7;
          fVar2 = (float)((double)(fVar17 * 7.0) / dVar32);
          dVar33 = dVar34;
          if (dVar34 - dVar32 < 0.0) {
            dVar33 = (double)(fVar15 * fVar2);
          }
          dVar30 = dVar34;
          if (dVar34 - dVar32 < 0.0) {
            dVar30 = (double)(fVar16 * fVar2);
          }
          dVar31 = dVar34;
          if (dVar34 - dVar32 < 0.0) {
            dVar31 = (double)(fVar8 * fVar2);
          }
          if (dVar32 - dVar34 < 0.0) {
            dVar33 = (double)(fVar15 * fVar2);
          }
          if (dVar32 - dVar34 < 0.0) {
            dVar30 = (double)(fVar16 * fVar2);
          }
          if (dVar32 - dVar34 < 0.0) {
            dVar31 = (double)(fVar8 * fVar2);
          }
          *(float *)(puVar14 + 0x1e) = (float)dVar33;
          *(float *)((int)puVar14 + 0xf4) = (float)dVar30;
          *(float *)(puVar14 + 0x1f) = (float)dVar31;
          dVar33 = (double)mobyutil::MB_computeLobVelocity
                                     ((double)(fVar17 * 7.0),(double)(fVar4 * -9.8),uVar18 - 0x110,
                                      uVar18 - 0x140);
          *(float *)(puVar14 + 0x1f) = (float)dVar33;
          mobyupdate_helpers::M881_004a1030
                    (uVar18 - 0x110,uVar18 - 0x120,moby,*(undefined2 *)((int)pvVar9 + 0x7a));
          *(short *)((int)pvVar9 + 0x7a) = *(short *)((int)pvVar9 + 0x7a) + 1;
        }
        auVar35 = loadVectorLeftIndexed(0x710,0xa10000);
        if (*(int *)((int)pvVar9 + 0x74) <= worldUpdateTime) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x44,0x4a0778);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar35 = ZEXT416((uint)(auVar35._0_4_ + auVar36._0_4_)) & (undefined1  [16])0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x74,
                              uVar28);
          *(undefined4 *)((int)pvVar9 + 0x74U & 0xfffffffc) = uVar13;
          moby->state = '\x01';
        }
      }
    }
  }
  return;
}



//==== 004a100c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M882_004a100c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M882_004a100c(void)

{
  DAT_008cbe7c = 0x10000;
  return;
}



//==== 004a1030  ns=mobyupdate_helpers  size=0x180
// sig: undefined M881_004a1030(void)
// callers(2): 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 004a07c0 mobyupdate_unsorted::UpdateMoby_881
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned

MobyInstance *
mobyupdate_helpers::M881_004a1030(f32 *param_1,undefined4 *param_2,undefined4 param_3,short param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pMVar3 = mobyfunc::CreateMoby(BOMB_0372);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    dVar4 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).x = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).y = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).z = (float)dVar4;
    uVar7 = 0x4059000000000000;
    uVar6 = 0x4072c00000000000;
    dVar4 = (double)mobyutil::MB_randRangeSigned(0x4059000000000000,0x4072c00000000000);
    dVar5 = 0.01745329238474369;
    puVar2[6] = (float)(dVar4 * 0.01745329238474369) * mobyutil::g_FrameTime;
    dVar4 = (double)mobyutil::MB_randRangeSigned(uVar7,uVar6);
    puVar2[7] = (float)(dVar4 * dVar5) * mobyutil::g_FrameTime;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    (pMVar3->pos).w = param_1[3];
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    uVar1 = param_2[3];
    puVar2[4] = param_3;
    puVar2[3] = uVar1;
    puVar2[5] = (int)param_4;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 004a11e0  ns=mobyupdate_unsorted  size=0x494
// sig: undefined UpdateMoby_882(MobyInstance * moby)
// callers(0): 
// callees(6): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot

/* Moby 882 */

void mobyupdate_unsorted::UpdateMoby_882(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  f32 fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  undefined8 uVar10;
  undefined1 local_30 [24];
  
  lVar7 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar1;
  (moby->pos).y = (moby->pos).y + pfVar1[1];
  (moby->pos).z = (moby->pos).z + pfVar1[2];
  pfVar1[2] = -(DAT_0071f418 * 9.8 - pfVar1[2]);
  dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar1[6]);
  (moby->rotation).y = (float)dVar9;
  dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar1[7]);
  (moby->rotation).z = (float)dVar9;
  iVar8 = collproc::CollLine(local_30,lVar7 + 0x10,0,pfVar1[4],0);
  if (((iVar8 == 0) &&
      (iVar8 = collproc::CollSphere(0x3fe0000000000000,lVar7 + 0x10,&DAT_004a11b0,0,pfVar1[4]),
      iVar8 == 0)) ||
     ((CollOutput.pMoby != (MobyInstance *)0x0 &&
      (((CollOutput.pMoby)->oClass == 0x371 || ((CollOutput.pMoby)->oClass == BOMB_0372)))))) {
    fVar3 = (moby->pos).x;
    uVar4 = (int)fVar3 >> 0x1f;
    iVar8 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4;
    if ((((0x3fffffff < iVar8) && (iVar8 < 0x447f4001)) &&
        (fVar3 = (moby->pos).y, uVar4 = (int)fVar3 >> 0x1f,
        iVar8 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4, iVar8 < 0x447f4001 && 0x3fffffff < iVar8)) &&
       ((fVar3 = (moby->pos).z, uVar4 = (int)fVar3 >> 0x1f,
        iVar8 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4, 0x3fffffff < iVar8 && (iVar8 < 0x447f4001)))) {
      return;
    }
    mobyfunc::DeleteMoby(moby);
  }
  else {
    if ((moby->enabled != '\0') ||
       (fVar2 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar5 * fVar5 + fVar2 * fVar2) < 5.0)) {
      fVar2 = pfVar1[5];
      uVar10 = 0;
      if ((int)fVar2 % 3 == 0) {
        uVar10 = 0x4024000000000000;
      }
      fVar5 = (moby->pos).y - GameCamera.posY;
      fVar6 = (moby->pos).x - GameCamera.posX;
      if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) <= 50.0) {
        if (((uint)fVar2 & 1) == 0) {
          mobyutil::MB_genericExplosion
                    (0x4000000000000000,0x3ff0000000000000,0,0,0x408f400000000000,0x3ff0000000000000
                     ,uVar10,lVar7,pfVar1,0,1,0xffffffffffffffff,1,2,4);
        }
        else {
          mobyutil::MB_genericExplosion
                    (0x4000000000000000,0x3ff0000000000000,0,0x3ff0000000000000,0x408f400000000000,
                     0x3ff0000000000000,uVar10,lVar7,pfVar1,0,1,0xffffffffffffffff,0,2,4);
        }
      }
      else if (((uint)fVar2 & 1) == 0) {
        mobyutil::MB_genericExplosion
                  (0x4000000000000000,0x3ff0000000000000,0,0,0x408f400000000000,0x3ff3333340000000,
                   uVar10,lVar7,pfVar1,0,1,&DAT_004a11b0,0,2,3);
      }
      else {
        mobyutil::MB_genericExplosion
                  (0x4000000000000000,0x3ff0000000000000,0,0,0x408f400000000000,0x3ff4ccccc0000000,
                   uVar10,lVar7,pfVar1,0,1,0xffffffffffffffff,1,2,3);
      }
    }
    else {
      sound::PlayMobySound(0,0,moby);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004a1674  ns=mobyupdate_helpers  size=0x14
// sig: undefined M936_004a1674(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M936_004a1674(void)

{
  DAT_008cbeec = 0x10000;
  return;
}



//==== 004a1688  ns=mobyupdate_helpers  size=0x28
// sig: undefined M936_004a1688(void)
// callers(0): 
// callees(1): 001042ec mobyutil::MB_SetStateByGroup

void mobyupdate_helpers::M936_004a1688(undefined8 param_1)

{
  mobyutil::MB_SetStateByGroup(param_1,2);
  return;
}



//==== 004a1708  ns=mobyupdate_unsorted  size=0x994
// sig: undefined UpdateMoby_a_lot_22(MobyInstance * moby)
// callers(0): 
// callees(14): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fea60 mobyutil::MB_randSphere; 001042ec mobyutil::MB_SetStateByGroup; 0010675c mobyutil::MB_damage; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001229a8 partupd::SpawnPart_8; 00123390 partupd::SpawnPart_11; 0015d204 sound::sound_MobyPlay_oClass; 00502578 fastfunc::FastWrapRot

/* Moby 885
   Moby 888
   Moby 891
   Moby 892
   Moby 894
   Moby 900
   Moby 901
   Moby 936 */

void mobyupdate_unsorted::UpdateMoby_a_lot_22(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar10;
  longlong lVar9;
  byte bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar26 [16];
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_140 [24];
  longlong local_e0;
  
  lVar9 = (longlong)(int)moby;
  uVar8 = ZEXT48(&stack0x00000000);
  puVar7 = (undefined4 *)(uVar8 - 0xc0);
  puVar7[3] = in_vr31_32_3;
  puVar7[2] = in_vr31_32_2;
  puVar7[1] = in_vr31_32_1;
  *puVar7 = in_vr31_32_0;
  bVar2 = moby->state;
  puVar7 = (undefined4 *)moby->pVar;
  bVar11 = (bVar2 == 2) << 1;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
        moby->state = '\x01';
        if ((undefined4 *)*puVar7 != (undefined4 *)0x0) {
          *(undefined4 *)*puVar7 = 3;
        }
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      iVar10 = mobyutil::MB_damage(lVar9,0x80000,0);
      if (iVar10 != 0) {
        mobyutil::MB_SetStateByGroup(moby->group,2);
        sound::sound_MobyPlay_oClass(0,0,moby,0x375);
      }
      moby->damage = -1;
    }
  }
  else if (bVar2 < 3) {
    if (moby->oClass == 0x37c) {
      auVar25 = ZEXT416(0);
      auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      iVar10 = 0;
      auVar25 = loadVectorLeftIndexed(uVar8 - 0xc0,0x4a16b0);
      dVar13 = 10.0;
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      vectorCompareGreaterThanOrEqualToFloatingPoint(auVar26,auVar25);
      if (bVar2 == 2) {
        dVar24 = 8.0;
        dVar23 = 0.0;
        dVar22 = 6.0;
        uVar21 = 0x4136e36000000000;
        dVar20 = 15.5;
        dVar19 = 20.5;
        dVar18 = 30.5;
        dVar17 = 45.5;
        dVar16 = 5.5;
        dVar15 = 10.5;
        dVar14 = 0.5;
        do {
          dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar13);
          local_140[0] = 0x4f008fff;
          local_140[1] = 0x4f008fff;
          local_140[3] = 0x4f006fff;
          dVar12 = (double)(float)(dVar12 * (double)mobyutil::g_FrameTime);
          local_140[2] = 0x4f007fff;
          local_140[4] = 0x2fffffff;
          local_140[5] = 0x2fffffff;
          local_140[6] = 0x2f005f7f;
          local_140[7] = 0x2f004f7f;
          local_140[8] = 0x2f003f7f;
          local_140[9] = 0x2f00004f;
          local_140[10] = 0x2f000000;
          local_140[0xb] = 0x3f000000;
          mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar22);
          lVar9 = mobyutil::MB_randInt(6);
          uVar3 = *(undefined4 *)((int)local_140 + (int)(lVar9 << 2));
          lVar9 = mobyutil::MB_randInt(6);
          uVar4 = *(undefined4 *)((int)local_140 + (int)(lVar9 << 2) + 0x18);
          iVar1 = (int)((double)animationSpeed * dVar19);
          local_e0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar20),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar17);
          local_e0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar18),iVar1);
          partupd::SpawnPart_11(uVar21,dVar12,uVar8 - 0x180,&DAT_00a15d30,uVar3,uVar4);
          iVar1 = (int)((double)animationSpeed * dVar15);
          local_e0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar16),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar19);
          local_e0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar20),iVar1);
          partupd::SpawnPart_11
                    (uVar21,(double)(float)(dVar12 * dVar14),uVar8 - 0x180,&DAT_00a15d30,0x7fffffff,
                     0xffffff);
          iVar10 = iVar10 + 1;
          local_e0 = (longlong)iVar10;
        } while ((double)local_e0 < dVar13);
      }
      vectorCompareGreaterThanOrEqualToFloatingPoint(auVar26,auVar25);
      iVar10 = 0;
      if ((bool)(bVar11 >> 1 & 1)) {
        dVar20 = 0.0;
        dVar19 = 6.0;
        dVar18 = -1.0;
        dVar17 = 1.0;
        dVar16 = 3.0;
        uVar21 = 0x411e848000000000;
        dVar15 = 30.5;
        dVar14 = 45.5;
        do {
          mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar19);
          local_140[0xc] = 0x4f008fff;
          local_140[0xd] = 0x4f008fff;
          local_140[0x10] = 0x2fffffff;
          local_140[0x11] = 0x2fffffff;
          local_140[0xe] = 0x4f007fff;
          local_140[0xf] = 0x4f006fff;
          local_140[0x12] = 0x2f005f7f;
          local_140[0x13] = 0x2f004f7f;
          local_140[0x14] = 0x2f003f7f;
          local_140[0x15] = 0x2f00004f;
          local_140[0x16] = 0x2f000000;
          local_140[0x17] = 0x3f000000;
          mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
          mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
          mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
          mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar16);
          lVar9 = mobyutil::MB_randInt(6);
          uVar3 = *(undefined4 *)((int)local_140 + (int)(lVar9 << 2) + 0x30);
          lVar9 = mobyutil::MB_randInt(6);
          uVar4 = *(undefined4 *)((int)local_140 + (int)(lVar9 << 2) + 0x48);
          iVar1 = (int)((double)animationSpeed * dVar14);
          local_e0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar15),iVar1);
          partupd::SpawnPart_8(uVar21,uVar8 - 0x170,uVar8 - 0x160,uVar3,uVar4);
          iVar10 = iVar10 + 1;
          local_e0 = (longlong)iVar10;
        } while ((double)local_e0 < dVar13);
      }
      mobyfunc::DeleteMoby(moby);
    }
    else {
      dVar13 = (double)mobyutil::MB_randRangeFloat(10.0,15.0);
      dVar14 = (double)mobyutil::g_FrameTime;
      moby->state = '\x03';
      moby->collision = (ushort *)0x0;
      dVar18 = (double)(float)(dVar13 * dVar14);
      dVar14 = 0.0;
      uVar21 = 0x4056800000000000;
      dVar13 = (double)mobyutil::MB_randRangeSigned(0,0x4056800000000000);
      dVar15 = 0.01745329238474369;
      puVar7[2] = (float)(dVar13 * 0.01745329238474369) * mobyutil::g_FrameTime;
      dVar13 = (double)mobyutil::MB_randRangeSigned(dVar14,uVar21);
      puVar7[3] = (float)(dVar13 * dVar15) * mobyutil::g_FrameTime;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      puVar7[4] = fVar5;
      fVar6 = (moby->pos).y - g_heroPosition.y;
      puVar7[5] = fVar6;
      dVar17 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6);
      puVar7[6] = (moby->pos).z - g_heroPosition.z;
      puVar7[7] = (moby->pos).w;
      puVar7[6] = 0;
      dVar15 = (double)(fVar5 * (float)(dVar18 / dVar17));
      dVar16 = (double)(fVar6 * (float)(dVar18 / dVar17));
      dVar13 = dVar14;
      if (dVar14 - dVar17 < 0.0) {
        dVar13 = dVar15;
      }
      dVar19 = dVar14;
      if (dVar14 - dVar17 < 0.0) {
        dVar19 = dVar16;
      }
      if (dVar17 - dVar14 < 0.0) {
        dVar13 = dVar15;
      }
      if (dVar17 - dVar14 < 0.0) {
        dVar19 = dVar16;
      }
      puVar7[4] = (float)dVar13;
      puVar7[5] = (float)dVar19;
      mobyutil::MB_randSphere(dVar18,dVar18,uVar8 - 0x150);
      puVar7[4] = (float)puVar7[4] + local_150;
      puVar7[5] = (float)puVar7[5] + local_14c;
      puVar7[6] = ABS((float)puVar7[6] + local_148);
      puVar7[7] = (moby->pos).z;
    }
  }
  else if (bVar2 < 4) {
    dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).x,(float)puVar7[2]);
    (moby->rotation).x = (float)dVar13;
    dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).y,(float)puVar7[2]);
    (moby->rotation).y = (float)dVar13;
    puVar7[6] = -(DAT_0071f418 * 20.0 - (float)puVar7[6]);
    (moby->pos).x = (moby->pos).x + (float)puVar7[4];
    (moby->pos).y = (moby->pos).y + (float)puVar7[5];
    fVar5 = (moby->pos).z + (float)puVar7[6];
    (moby->pos).z = fVar5;
    if ((fVar5 < (float)puVar7[7] - 16.0) ||
       (iVar10 = collproc::CollSphere(0x3ff0000000000000,lVar9 + 0x10,&DAT_004a16b0,2,lVar9),
       iVar10 != 0)) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3ff8000000000000,0,lVar9,lVar9 + 0x10,&DAT_004a16b0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 004a209c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M936_004a209c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M936_004a209c(void)

{
  DAT_008cbf5c = 0x10000;
  return;
}



//==== 004a20d8  ns=mobyupdate_unsorted  size=0x77c
// sig: undefined UpdateMoby_886(MobyInstance * moby)
// callers(0): 
// callees(9): 000f1e50 mobyfunc::SetLevelFlag; 000f1ec8 mobyfunc::SetColorOfMoby; 00104298 mobyutil::MB_SetGroupField; 001042ec mobyutil::MB_SetStateByGroup; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500af8 fastfunc::FastMtx4Identity; 005010c0 fastfunc::FastNormalizeRMtx4

/* Moby 886 */

ulonglong mobyupdate_unsorted::UpdateMoby_886(MobyInstance *moby)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar8;
  ulonglong uVar7;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  
  uVar7 = (ulonglong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    piVar3 = (int *)moby->pVar;
    uVar10 = ZEXT48(piVar3);
    if (piVar3 != (int *)0x0) {
      bVar6 = false;
      if (((moby->state < 6) && (moby->levelFlagIdx != 0xff)) &&
         (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
        mobyutil::MB_SetStateByGroup(moby->group,6);
      }
      if (piVar3[2] == 0) {
        bVar6 = false;
        if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
          bVar6 = true;
        }
        if (0x3f490fdb < (uint)ABS((moby->rotation).y)) {
          dVar13 = (double)((moby->pos).y - g_heroPosition.y);
          dVar12 = (double)((moby->pos).x - g_heroPosition.x);
          if (((SQRT((float)(dVar12 * dVar12 + (double)(float)(dVar13 * dVar13))) < 2.0) &&
              (g_heroState == WALL_JUMP)) &&
             ((int)(((uint)((int)hero::g_heroAnimFrame >> 0x1f) >> 1 ^ hero::g_heroAnimFrame) -
                   ((int)hero::g_heroAnimFrame >> 0x1f)) < 0x40e00000)) {
            dVar14 = (double)(moby->pos).w;
            dVar11 = (double)((moby->pos).z - g_heroPosition.z);
            fastfunc::FastMtx4Identity(&local_a0);
            fastfunc::FastNormalizeRMtx4(&local_a0,uVar7 + 0xc0);
            if (((ABS((float)((double)local_70 * dVar14 +
                             (double)(float)((double)local_80 * dVar11 +
                                            (double)(float)((double)local_a0 * dVar12 +
                                                           (double)(float)((double)local_90 * dVar13
                                                                          ))))) < 0.6) &&
                (ABS((float)((double)local_6c * dVar14 +
                            (double)(float)((double)local_7c * dVar11 +
                                           (double)(float)((double)local_9c * dVar12 +
                                                          (double)(float)((double)local_8c * dVar13)
                                                          )))) < 0.6)) &&
               (ABS((float)((double)local_68 * dVar14 +
                           (double)(float)((double)local_78 * dVar11 +
                                          (double)(float)((double)local_98 * dVar12 +
                                                         (double)(float)((double)local_88 * dVar13))
                                          ))) < 0.957)) {
              bVar6 = true;
            }
          }
        }
      }
      if ((1 < moby->state && moby->state < 6) && (moby->setByGroup == '\x01')) {
        iVar8 = fastfunc::FastDecTimerS32(uVar10);
        if (iVar8 == 0) {
          iVar8 = fastfunc::FastDecTimerS32(uVar10 + 4);
          if (iVar8 != 0) {
            sound::PlayMobySound(0,0,moby);
            iVar9 = (int)(animationSpeed * 5.5) + *piVar3 / (int)(animationSpeed * 40.5);
            iVar8 = (int)(animationSpeed * 45.5);
            if (iVar9 <= (int)(animationSpeed * 45.5)) {
              iVar8 = iVar9;
            }
            piVar3[1] = iVar8;
          }
        }
        else {
          sound::PlayMobySound(2,0,moby);
          mobyutil::MB_SetStateByGroup(moby->group,8);
        }
      }
      bVar1 = moby->state;
      uVar7 = (ulonglong)bVar1;
      if (bVar1 < 4) {
        if (bVar1 == 0) {
          mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
          mobyutil::MB_SetGroupField(moby->group,0);
          uVar7 = mobyutil::MB_SetStateByGroup(moby->group,1);
        }
        else if (bVar1 < 2) {
          piVar3[2] = 0;
          uVar7 = mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
          if (bVar6) {
            auVar15 = loadVectorLeftIndexed(0x10,uVar10);
            auVar16 = loadVectorRightIndexed(0x20,uVar10);
            if (piVar3[4] < 1) {
              auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar15 = loadVectorLeftIndexed(0x20,0x4a20b0);
              auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
            }
            else {
              auVar18 = ZEXT416(0xfffffff0);
              auVar17 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
              auVar18 = ZEXT416(0);
              auVar19 = loadVectorLeftIndexed(0x18,0x4a20b0);
              auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
              auVar21 = vectorRotateLeftIntegerWord(auVar19,auVar17);
              auVar20 = vectorMultiplyOddUnsignedHalfWord(auVar15 | auVar16,auVar19);
              auVar15 = vectorMultiplySumSignedHalfWordModulo
                                  (auVar15 | auVar16,auVar21,
                                   auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
              auVar18 = loadVectorLeftIndexed(0x1c,0x4a20b0);
              auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar17);
              auVar15 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar19._0_4_ = auVar16._0_4_ + auVar20._0_4_;
              auVar19._8_8_ = auVar16._8_8_;
              auVar19._4_4_ = auVar16._4_4_ + auVar20._4_4_;
              auVar18._0_8_ = auVar19._0_8_;
              auVar18._12_4_ = auVar16._12_4_;
              auVar18._8_4_ = auVar16._8_4_ + auVar20._8_4_;
              auVar16._0_12_ = auVar18._0_12_;
              auVar16._12_4_ = auVar18._12_4_ + auVar20._12_4_;
              auVar18 = vectorConvertFromSignedFixedPointWord(auVar16,0);
              auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar15 = vectorAddFloatingPoint
                                  (auVar18,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 |
                                           auVar15 << 0x60);
            }
            auVar18 = ZEXT416(0xffffffff);
            auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
            auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
            auVar15 = vectorMultiplyAddFloatingPoint
                                (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                                 auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                                 auVar18);
            auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
            uVar5 = storeVectorElementWordIndexed(auVar15,0,uVar10);
            *(undefined4 *)((uint)piVar3 & 0xfffffffc) = uVar5;
            mobyfunc::SetColorOfMoby(moby,0,0xff,0);
            piVar3[2] = 1;
            mobyutil::MB_SetGroupField(moby->group,0);
            moby->setByGroup = '\x01';
            sound::PlayMobySound(3,0,moby);
            uVar7 = mobyutil::MB_SetStateByGroup(moby->group,2);
          }
        }
        else if (bVar1 < 3) {
          uVar7 = 3;
          moby->state = '\x03';
        }
        else if (bVar6) {
          piVar3[2] = 1;
          mobyfunc::SetColorOfMoby(moby,0,0xff,0);
          sound::PlayMobySound(3,0,moby);
          uVar7 = mobyutil::MB_SetStateByGroup(moby->group,4);
        }
      }
      else if (bVar1 < 7) {
        if (bVar1 < 5) {
          uVar7 = 5;
          moby->state = '\x05';
        }
        else if (bVar1 < 6) {
          if (bVar6) {
            piVar3[2] = 1;
            mobyfunc::SetColorOfMoby(moby,0,0xff,0);
            mobyutil::MB_SetStateByGroup(moby->group,6);
            iVar8 = sound::PlayMobySound(1,0,moby);
            uVar7 = (ulonglong)iVar8;
          }
        }
        else {
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar15 = loadVectorLeftIndexed(0x24,0x4a20b0);
          auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar15 = vectorMultiplyAddFloatingPoint
                              (auVar18,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                               ,auVar16);
          auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
          auVar15 = vectorSplatHalfWord(auVar15,1);
          uVar4 = storeVectorElementHalfWordIndexed(auVar15,0xc,uVar10);
          *(undefined2 *)(piVar3 + 3) = uVar4;
          *(undefined2 *)((int)piVar3 + 0xe) = 0;
          mobyfunc::SetColorOfMoby(moby,0x80,0xff,0x80);
          uVar7 = 7;
          moby->state = '\a';
        }
      }
      else if (bVar1 < 8) {
        if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
          mobyfunc::SetLevelFlag();
        }
        uVar7 = fastfunc::FastDecTimerS16(uVar10 + 0xc);
        if ((int)uVar7 != 0) {
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar15 = loadVectorLeftIndexed(0x24,0x4a20b0);
          auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar15 = vectorMultiplyAddFloatingPoint
                              (auVar18,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                               ,auVar16);
          auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
          auVar15 = vectorSplatHalfWord(auVar15,1);
          uVar4 = storeVectorElementHalfWordIndexed(auVar15,0xc,uVar10);
          *(undefined2 *)(piVar3 + 3) = uVar4;
          sVar2 = *(short *)((int)piVar3 + 0xe);
          uVar7 = (ulonglong)sVar2;
          if (sVar2 < 1) {
            if (-1 < sVar2) {
              mobyfunc::SetColorOfMoby(moby,0,0xff,0);
              uVar7 = 1;
              *(undefined2 *)((int)piVar3 + 0xe) = 1;
            }
          }
          else if (sVar2 < 2) {
            uVar7 = mobyfunc::SetColorOfMoby(moby,0xff,0xff,0xff);
            *(undefined2 *)((int)piVar3 + 0xe) = 0;
          }
          else if (sVar2 < 6) {
            *(undefined2 *)((int)piVar3 + 0xe) = 0;
          }
        }
      }
      else if (bVar1 < 9) {
        mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
        uVar7 = 1;
        moby->setByGroup = '\0';
        moby->state = '\x01';
      }
    }
  }
  return uVar7;
}



//==== 004a2854  ns=mobyupdate_helpers  size=0x14
// sig: undefined M887_004a2854(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M887_004a2854(void)

{
  DAT_008cbfcc = 0x10000;
  return;
}



//==== 004a2878  ns=mobyupdate_unsorted  size=0x2e8
// sig: undefined UpdateMoby_887(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 887 */

void mobyupdate_unsorted::UpdateMoby_887(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  
  pfVar7 = (float *)moby->pVar;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    pfVar7[4] = -NAN;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if ((((pfVar7[4] != -NAN) && (MobyInstance + (int)pfVar7[4] != (MobyInstance *)0x0)) &&
        (bVar2 = MobyInstance[(int)pfVar7[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((float)(uint)bVar2 != pfVar7[5])) {
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      fVar5 = fVar3 - pfVar7[1];
      fVar6 = fVar4 - *pfVar7;
      if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) <= 0.02) {
        (moby->pos).x = *pfVar7;
        (moby->pos).y = pfVar7[1];
        (moby->pos).z = pfVar7[2];
        fVar3 = pfVar7[3];
        moby->state = '\x01';
        (moby->pos).w = fVar3;
        return;
      }
      fVar5 = (moby->transform).v1.y;
      fVar6 = (moby->transform).v1.z;
      (moby->pos).x = (moby->transform).v1.x * 0.02 + fVar4;
      (moby->pos).y = fVar5 * 0.02 + fVar3;
      (moby->pos).z = fVar6 * 0.02 + (moby->pos).z;
      return;
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\x03') {
    if (((pfVar7[4] != -NAN) && (MobyInstance + (int)pfVar7[4] != (MobyInstance *)0x0)) &&
       ((bVar2 = MobyInstance[(int)pfVar7[4]].state, bVar2 != 0xfd && bVar2 != 0xfe &&
        ((float)(uint)bVar2 == pfVar7[6])))) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (((pfVar7[4] != -NAN) && (MobyInstance + (int)pfVar7[4] != (MobyInstance *)0x0)) &&
       ((bVar2 = MobyInstance[(int)pfVar7[4]].state, bVar2 != 0xfd && bVar2 != 0xfe &&
        ((float)(uint)bVar2 == pfVar7[6])))) {
      moby->state = '\x04';
      return;
    }
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).x;
    fVar5 = fVar3 - pfVar7[1];
    fVar6 = fVar4 - *pfVar7;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) <= 4.0) {
      fVar5 = (moby->transform).v1.y;
      fVar6 = (moby->transform).v1.z;
      (moby->pos).x = (moby->transform).v1.x * -0.02 + fVar4;
      (moby->pos).y = fVar5 * -0.02 + fVar3;
      (moby->pos).z = fVar6 * -0.02 + (moby->pos).z;
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    if ((((pfVar7[4] != -NAN) && (MobyInstance + (int)pfVar7[4] != (MobyInstance *)0x0)) &&
        (bVar2 = MobyInstance[(int)pfVar7[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((float)(uint)bVar2 != pfVar7[5])) {
      return;
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\0') {
    *pfVar7 = (moby->pos).x;
    pfVar7[1] = (moby->pos).y;
    pfVar7[2] = (moby->pos).z;
    pfVar7[3] = (moby->pos).w;
    moby->state = '\x01';
  }
  return;
}



//==== 004a2b60  ns=mobyupdate_helpers  size=0x14
// sig: undefined M887_004a2b60(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M887_004a2b60(void)

{
  DAT_008cc03c = 0x10000;
  return;
}



//==== 004a2b78  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_89(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 89 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_89(MobyInstance *moby)

{
  return moby;
}



//==== 004a2b7c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M890_004a2b7c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M890_004a2b7c(void)

{
  DAT_008cc0ac = 0x10000;
  return;
}



//==== 004a2b90  ns=mobyupdate_helpers  size=0x150
// sig: undefined M890_004a2b90(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M890_004a2b90(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    puVar3 = &DAT_0095cd50;
    if ((update::g_SceneId == 2 && 0x1e9 < boot::g_SpaceSceneFrame) &&
       (boot::g_SpaceSceneFrame < 0x266)) {
      DAT_00a15f30 = 0xbe4ccccd;
    }
    if (((update::g_SceneId == 2) && (0x2ed < boot::g_SpaceSceneFrame)) &&
       (boot::g_SpaceSceneFrame < 0x321)) {
      DAT_00a15f30 = 0x3e4ccccd;
    }
    iVar2 = 0;
    sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008cc0d4;
          DAT_00a1bfa4 = DAT_008cc0d4;
          DAT_00a1bfa8 = DAT_008cc0d4;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}



//==== 004a2d38  ns=mobyupdate_unsorted  size=0xe90
// sig: undefined UpdateMoby_890(MobyInstance * moby)
// callers(0): 
// callees(20): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00106308 mobyutil::MB_SetZBoundsFromPos; 00112a38 mobyutil::MB_ToastMessage; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 001523d8 respawn::SaveCheckpointMobyVar; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 006588b0: 'Helga'

/* Moby 890 */

void mobyupdate_unsorted::UpdateMoby_890(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  gameMode_t gVar15;
  MobyInstance *pMVar16;
  ulonglong uVar17;
  int iVar20;
  undefined4 uVar21;
  longlong lVar18;
  longlong lVar19;
  short sVar24;
  float *pfVar23;
  longlong lVar22;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong unaff_r25;
  undefined4 *puVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar19 = uVar26 - 0x160;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar26;
  puVar11[0x2e] = in_LR;
  puVar11[0x27] = in_f27;
  puVar11[0x28] = in_f28;
  puVar11[0x29] = in_f29;
  puVar11[0x2a] = in_f30;
  puVar11[0x2b] = in_f31;
  puVar11[0x26] = unaff_r31;
  puVar11[0x25] = unaff_r30;
  puVar11[0x23] = unaff_r28;
  gVar15 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar28 = ZEXT48(pvVar8);
  puVar11[0x24] = unaff_r29;
  puVar11[0x22] = unaff_r27;
  puVar11[0x21] = unaff_r26;
  puVar11[0x20] = unaff_r25;
  if ((gVar15 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    puVar27 = &DAT_0095cd50;
    if ((update::g_SceneId == 2 && 0x1e9 < boot::g_SpaceSceneFrame) &&
       (boot::g_SpaceSceneFrame < 0x266)) {
      DAT_00a15f30 = 0xbe4ccccd;
    }
    if (((update::g_SceneId == 2) && (0x2ed < boot::g_SpaceSceneFrame)) &&
       (boot::g_SpaceSceneFrame < 0x321)) {
      DAT_00a15f30 = 0x3e4ccccd;
    }
    iVar20 = 0;
    sVar24 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar27[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar27[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008cc0d4;
          DAT_00a1bfa4 = DAT_008cc0d4;
          DAT_00a1bfa8 = DAT_008cc0d4;
          sVar24 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar20 = iVar20 + 1;
        puVar27 = puVar27 + 1;
      } while (iVar20 < sVar24);
    }
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (UnlockableItems.swingshot != '\0') {
      iVar20 = *(int *)((int)pvVar8 + 0xd4);
      if ((iVar20 != -1) && (MobyInstance[iVar20].oClass == TAXI_03F4)) {
        pvVar8 = MobyInstance[iVar20].pVar;
        *(undefined4 *)((int)pvVar8 + 0x8c) = 1;
        respawn::SaveCheckpointMobyVar((void *)((int)pvVar8 + 0x8c),4,moby,2,(int *)&DAT_00a53560);
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) &&
        (iVar20 = *(int *)((int)pvVar8 + 0xd4), iVar20 != -1)) &&
       (MobyInstance[iVar20].oClass == TAXI_03F4)) {
      pvVar9 = MobyInstance[iVar20].pVar;
      *(undefined4 *)((int)pvVar9 + 0x8c) = 1;
      respawn::SaveCheckpointMobyVar((void *)((int)pvVar9 + 0x8c),4,moby,2,(int *)&DAT_00a53560);
    }
    uVar10 = g_heroMobyPtr->color;
    uVar14 = g_heroMobyPtr->light;
    moby->state = '\x01';
    moby->color = uVar10;
    moby->light = uVar14;
    *(char **)((int)pvVar8 + 0xa0) = "Helga";
    *(undefined4 *)((int)pvVar8 + 200) = 5;
    FUN_004d3720(moby,uVar28 + 0x80);
    mobyutil::MB_SetZBoundsFromPos(moby);
  }
  else if (bVar1 < 2) {
    iVar20 = FUN_004d3870(moby,uVar28 + 0x80);
    if (iVar20 != 0) {
      mobyutil::MB_SetPointAheadOfMoby(0x4002666660000000,moby);
      moby->state = '\x02';
      iVar20 = *(int *)((int)pvVar8 + 0xd4);
      if ((iVar20 != -1) && (MobyInstance[iVar20].oClass == TAXI_03F4)) {
        pvVar9 = MobyInstance[iVar20].pVar;
        *(undefined4 *)((int)pvVar9 + 0x8c) = 1;
        respawn::SaveCheckpointMobyVar((void *)((int)pvVar9 + 0x8c),4,moby,2,(int *)&DAT_00a53560);
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_gameMode == GAME_MODE_SCENE) {
      if (((*(short *)((int)pvVar8 + 0xb6) == 2) &&
          (iVar20 = *(int *)((int)pvVar8 + 0xd4), iVar20 != -1)) &&
         (MobyInstance[iVar20].oClass == TAXI_03F4)) {
        pvVar9 = MobyInstance[iVar20].pVar;
        *(undefined4 *)((int)pvVar9 + 0x7c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x8c) = 0;
        *(undefined4 *)((int)pvVar9 + 0xa0) = *(undefined4 *)((int)pvVar8 + 0xd8);
      }
    }
    else {
      if (*(short *)((int)pvVar8 + 0x84) != 2) {
        mobyfunc::SetLevelFlag(moby->levelFlagIdx);
        iVar20 = *(int *)((int)pvVar8 + 0xd4);
        if ((iVar20 != -1) && (MobyInstance[iVar20].oClass == TAXI_03F4)) {
          pvVar9 = MobyInstance[iVar20].pVar;
          *(undefined4 *)((int)pvVar9 + 0x8c) = 1;
          respawn::SaveCheckpointMobyVar((void *)((int)pvVar9 + 0x8c),4,moby,2,(int *)&DAT_00a53560)
          ;
        }
        iVar20 = *(int *)((int)pvVar8 + 0xcc);
        if (iVar20 != -1) {
          respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar20].pos,(Vec4 *)&Cuboids[iVar20].rot);
        }
      }
      moby->state = '\x01';
      if (*(short *)((int)pvVar8 + 0x84) == 2) {
        mobyutil::MB_UnlockItem(0xc,1);
        mobyutil::MB_ToastMessage(0xbc8,0xffffffffffffffff);
        pMVar16 = MobyInstance;
        iVar20 = *(int *)((int)pvVar8 + 0xd0);
        if (iVar20 != -1) {
          (&DAT_00a53964)[(short)MobyInstance[iVar20].uid] =
               MobyInstance[iVar20].levelFlagIdx + '\x02';
          uVar10 = *(uint *)((int)pvVar8 + 0xd0);
          uVar26 = (ulonglong)uVar10;
          bVar1 = pMVar16[uVar10].levelFlagIdx;
          if ((bVar1 == 0xff) ||
             (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
            (&DAT_00a545c4)[(short)pMVar16[uVar10].uid] = bVar1 + 2;
            uVar26 = (ulonglong)*(uint *)((int)pvVar8 + 0xd0);
          }
          mobyfunc::DeleteMoby((MobyInstance *)((int)&(pMVar16->bSphere).x + (int)(uVar26 << 8)));
        }
        iVar20 = *(int *)((int)pvVar8 + 0xd4);
        if ((iVar20 != -1) && (MobyInstance[iVar20].oClass == TAXI_03F4)) {
          pvVar9 = MobyInstance[iVar20].pVar;
          *(undefined4 *)((int)pvVar9 + 0x7c) = 0;
          *(undefined4 *)((int)pvVar9 + 0x8c) = 0;
          *(undefined4 *)((int)pvVar9 + 0xa0) = *(undefined4 *)((int)pvVar8 + 0xd8);
        }
        memcard::memcard_Save(0,-1);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
  }
  dVar37 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004a3b20;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004a35d8:
    if (*(int *)((int)pvVar8 + 0x1f0) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x1f0) = 0;
      *(float *)((int)pvVar8 + 0x1e0) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0x1e4) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x1e8) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x1ec) = DAT_00969dbc;
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
    uVar17 = (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar11 + 0x11));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar11 + 0x8c));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar12 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar18 = uVar26 - 0x150;
      lVar25 = uVar26 - 0x7c;
      lVar22 = uVar26 - 0x8c;
      lVar29 = 2;
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
        *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xc4) * fVar5 * fVar5;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar25 = lVar25 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar25 = uVar26 - 0x8c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar22 = lVar25;
      do {
        fVar5 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xd4) * fVar5;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar22 = 2;
      lVar18 = lVar19;
      do {
        iVar20 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar20 + 0xd4) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar30 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar30) goto LAB_004a35d8;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar28 + 0x1f0);
    }
    else {
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar38 = loadVectorLeftIndexed(0x1c,0x4a2ce0);
      auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar38 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                           auVar39);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
      auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar21 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x1f0,uVar28
                         );
      *(undefined4 *)((int)pvVar8 + 0x1f0U & 0xfffffffc) = uVar21;
    }
  }
  iVar20 = fastfunc::FastDecTimerS32(uVar28 + 500);
  if (iVar20 != 0) {
    dVar30 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 500) = uVar21;
    dVar35 = (double)(moby->rotation).z;
    dVar30 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar33 = 0.01745329238474369;
    dVar30 = (double)fastfunc::FastWrapRot((float)dVar35,(float)(dVar30 * 0.01745329238474369));
    dVar35 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar30,(float)(dVar35 * dVar33),(float *)((int)pvVar8 + 0x1e0));
    *(float *)((int)pvVar8 + 0x1e0) = *(float *)((int)pvVar8 + 0x1e0) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x1e4) = *(float *)((int)pvVar8 + 0x1e4) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x1e8) = *(float *)((int)pvVar8 + 0x1e8) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x1f0) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x1e0);
    fVar3 = *(float *)((int)pvVar8 + 0x1e4);
    fVar5 = *(float *)((int)pvVar8 + 0x1e8);
  }
  else {
    dVar37 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar36 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar34 = (double)fVar3;
  *(float *)((int)puVar11 + 0x7c) = fVar2;
  *(float *)(puVar11 + 0x10) = fVar3;
  dVar33 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar11 + 0x84) = (float)(ABS(dVar36) - ABS(dVar34));
  dVar35 = 0.0;
  uVar17 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)((int)puVar11 + 0x7c));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar32 = ABS((double)*(float *)(puVar11 + 0x10));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar32 = ABS(dVar36);
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar31 = dVar35;
  if (0.0 < dVar30) {
    lVar18 = uVar26 - 0x150;
    lVar22 = uVar26 - 0xac;
    lVar25 = uVar26 - 0x9c;
    lVar29 = 2;
    fVar5 = (float)(dVar32 - dVar30) / (float)(dVar32 + dVar30);
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
      *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xa4) * fVar5 * fVar5;
      iVar20 = (int)lVar22;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar25 = uVar26 - 0xac;
    pfVar23 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar22 = lVar25;
    do {
      fVar5 = *pfVar23;
      fVar6 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xb4) * fVar5;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
      lVar22 = lVar22 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar22 = 2;
    lVar18 = lVar19;
    dVar30 = dVar35;
    do {
      iVar20 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      iVar13 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0xb4)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar31 = (double)((float)(dVar30 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar32 = (double)fastfunc::FastDiffRots(dVar31,(double)(moby->rotation).z);
  *(float *)((int)puVar11 + 0x74) = (float)dVar33;
  fVar2 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar34 * dVar34)));
  dVar34 = ABS((double)fVar2);
  *(float *)(puVar11 + 0xe) = fVar2;
  *(float *)(puVar11 + 0xf) = (float)(dVar34 - ABS(dVar33));
  uVar17 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)(puVar11 + 0xe));
  if ((double)*(float *)(puVar11 + 0xf) - dVar35 < 0.0) {
    dVar30 = ABS(dVar33);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar33 = ABS((double)*(float *)((int)puVar11 + 0x74));
  if ((double)*(float *)(puVar11 + 0xf) - dVar35 < 0.0) {
    dVar33 = dVar34;
  }
  if (dVar35 < dVar30) {
    lVar18 = uVar26 - 0x150;
    lVar25 = uVar26 - 0xbc;
    lVar22 = uVar26 - 0xcc;
    lVar29 = 2;
    fVar5 = (float)(dVar33 - dVar30) / (float)(dVar33 + dVar30);
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
      *(float *)((int)lVar18 + 0x94) = *(float *)((int)lVar18 + 0x84) * fVar5 * fVar5;
      iVar20 = (int)lVar22;
      lVar22 = lVar22 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar25 = uVar26 - 0xcc;
    pfVar23 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar22 = lVar25;
    do {
      fVar5 = *pfVar23;
      fVar6 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar18 + 0x94) = *(float *)((int)lVar18 + 0x94) * fVar5;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
      lVar22 = lVar22 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar18 = 2;
    do {
      iVar20 = (int)lVar19;
      iVar13 = (int)lVar25;
      lVar19 = lVar19 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0x94)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar35 = -dVar35;
  dVar30 = 1.5707963705062866;
  if ((dVar32 <= 1.5707963705062866) && (dVar30 = dVar32, dVar32 < -1.5707963705062866)) {
    dVar30 = -1.5707963705062866;
  }
  dVar33 = 0.5235987901687622;
  if ((dVar35 <= 0.5235987901687622) && (dVar33 = dVar35, dVar35 < -0.5235987901687622)) {
    dVar33 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0x144) = (float)dVar33;
  *(float *)((int)pvVar8 + 0x148) = (float)(dVar30 * 0.5);
LAB_004a3b20:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0x150) = 0x40300000;
  }
  dVar30 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar37),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar28 + 0xe0,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar37),
             (double)(float)((double)DAT_0071f40c * dVar30),moby,uVar28 + 0x160,1);
  return;
}



//==== 004a3bc8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M893_004a3bc8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M893_004a3bc8(void)

{
  DAT_008cc124 = 0x10000;
  return;
}



//==== 004a3c20  ns=mobyupdate_unsorted  size=0x514
// sig: undefined UpdateMoby_893(MobyInstance * moby)
// callers(0): 
// callees(5): 000f0ea8 mobyfunc::AttachManipulator; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0015d12c sound::PlayMobySound; 00501980 fastfunc::FastQuaternionToEuler

/* Moby 893 */

void mobyupdate_unsorted::UpdateMoby_893(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  uint uVar10;
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
  float local_40 [2];
  
  bVar3 = moby->state;
  pfVar9 = (float *)moby->pVar;
  fVar5 = (moby->pos).x;
  dVar12 = (double)(moby->pos).z;
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      if (pfVar9[0x14] != 0.0) {
        (moby->rotation).x = 3.1415927;
        (moby->pos).z = (float)(dVar12 + 4.0);
      }
      *pfVar9 = fVar5;
      pfVar9[1] = (moby->pos).y;
      pfVar9[2] = (moby->pos).z;
      pfVar9[3] = (moby->pos).w;
      mobyfunc::AttachManipulator(moby,0,pfVar9 + 4);
      if (pfVar9[0x15] == 0.0) {
        moby->state = '\x01';
        pfVar9[0x18] = 0.5934119;
        fastfunc::FastQuaternionToEuler(0x3fe2fd3b00000000,pfVar9 + 8,0);
      }
      else {
        pfVar9[0x18] = 0.0;
        moby->state = '\x02';
        if (pfVar9[0x14] == 0.0) {
          fVar5 = (moby->transform).v1.x;
          fVar6 = (moby->transform).v1.y;
          fVar7 = -2.0;
          fVar8 = (moby->transform).v1.z;
        }
        else {
          fVar5 = (moby->transform).v1.x;
          fVar6 = (moby->transform).v1.y;
          fVar7 = 2.0;
          fVar8 = (moby->transform).v1.z;
        }
        (moby->pos).x = fVar5 * fVar7 + (moby->pos).x;
        (moby->pos).y = fVar6 * fVar7 + (moby->pos).y;
        (moby->pos).z = fVar8 * fVar7 + (moby->pos).z;
      }
      uVar10 = g_heroMobyPtr->light;
      moby->color = g_heroMobyPtr->color;
      moby->light = uVar10;
    }
    else if (MobyInstance[(int)pfVar9[0x16]].setByGroup != '\0') {
      if ((bVar3 == 2) && (MobyInstance[(int)pfVar9[0x16]].setByGroup != '\x02')) {
        moby->state = '\x04';
      }
      else if (bVar3 == 1) {
        sound::PlayMobySound(0,0,moby);
        moby->state = '\x06';
      }
    }
  }
  else if (bVar3 < 5) {
    if (bVar3 == 3) {
      fVar6 = (moby->transform).v1.x * -1.9 + *pfVar9;
      fVar7 = (moby->transform).v1.y * -1.9 + pfVar9[1];
      fVar8 = (moby->transform).v1.z * -1.9 + pfVar9[2];
    }
    else {
      fVar6 = *pfVar9;
      fVar7 = pfVar9[1];
      fVar8 = pfVar9[2];
    }
    dVar22 = (double)fVar8;
    dVar21 = (double)fVar7;
    dVar19 = (double)fVar6;
    fVar6 = (float)(dVar21 - (double)(moby->pos).y);
    fVar5 = (float)(dVar19 - (double)fVar5);
    fVar7 = (float)(dVar22 - dVar12);
    dVar18 = 0.0;
    local_40[0] = 0.0;
    mobyutil::OrganicDelt
              (SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6),DAT_0071f418 * 6.0,
               DAT_0071f418 * 12.0,mobyutil::g_FrameTime * 10.0,local_40,0,pfVar9 + 0x17);
    dVar20 = (double)(moby->pos).y;
    dVar13 = (double)(moby->pos).x;
    fVar6 = (float)(dVar21 - dVar20);
    dVar15 = (double)(moby->pos).z;
    fVar7 = (float)(dVar19 - dVar13);
    fVar8 = (float)(dVar22 - dVar15);
    uVar4 = moby->state;
    dVar17 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    fVar5 = (float)((double)pfVar9[0x17] / dVar17);
    dVar12 = dVar18;
    if (dVar18 - dVar17 < 0.0) {
      dVar12 = (double)(fVar6 * fVar5);
    }
    dVar14 = dVar18;
    if (dVar18 - dVar17 < 0.0) {
      dVar14 = (double)(fVar7 * fVar5);
    }
    dVar16 = dVar18;
    if (dVar18 - dVar17 < 0.0) {
      dVar16 = (double)(fVar8 * fVar5);
    }
    if (dVar17 - dVar18 < 0.0) {
      dVar12 = (double)(fVar6 * fVar5);
    }
    if (dVar17 - dVar18 < 0.0) {
      dVar14 = (double)(fVar7 * fVar5);
    }
    if (dVar17 - dVar18 < 0.0) {
      dVar16 = (double)(fVar8 * fVar5);
    }
    fVar5 = (float)(dVar20 + dVar12);
    fVar6 = (float)(dVar13 + dVar14);
    fVar7 = (float)(dVar15 + dVar16);
    fVar8 = (float)((double)fVar5 - dVar21);
    fVar1 = (float)((double)fVar6 - dVar19);
    fVar2 = (float)((double)fVar7 - dVar22);
    (moby->pos).x = fVar6;
    (moby->pos).y = fVar5;
    (moby->pos).z = fVar7;
    if (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar8 * fVar8) < 0.0001) {
      if (uVar4 == '\x03') {
        sound::PlayMobySound(1,0,moby);
        moby->state = '\a';
      }
      else {
        moby->state = '\x05';
      }
    }
  }
  else if (bVar3 < 7) {
    dVar20 = 0.0;
    fVar5 = -0.5934119;
    dVar12 = dVar20;
    if (bVar3 == 5) {
      dVar12 = 0.593411922454834;
      fVar5 = 1.1868238;
    }
    mobyutil::OrganicDeltAng
              (fVar5,DAT_0071f418 * 4.1887903,DAT_0071f418 * 4.1887903,
               mobyutil::g_FrameTime * 12.566371,pfVar9 + 0x18,0x4a3be0,pfVar9 + 0x19);
    uVar10 = (int)pfVar9[0x18] >> 0x1f;
    iVar11 = (uVar10 >> 1 ^ (uint)pfVar9[0x18]) - uVar10;
    if ((0x3f17e9d8 < iVar11) || (iVar11 < 0)) {
      if (iVar11 < 0x3f17e9d9) {
        dVar13 = (double)pfVar9[0x18];
        if (iVar11 < 0) {
          pfVar9[0x18] = (float)dVar20;
          dVar13 = dVar20;
        }
      }
      else {
        pfVar9[0x18] = 0.5934119;
        dVar13 = 0.593411922454834;
      }
      if (moby->setByGroup == '\0') {
        moby->setByGroup = '\x01';
        pfVar9[0x19] = pfVar9[0x19] * -0.33;
      }
      else if (dVar13 == dVar12) {
        moby->state = ((byte)((LZCOUNT(5 - (uint)moby->state) << 0x3a) >> 0x3f) & 4) + 3;
      }
    }
    fastfunc::FastQuaternionToEuler((double)pfVar9[0x18],pfVar9 + 8,0);
  }
  return;
}



//==== 004a4134  ns=mobyupdate_helpers  size=0x14
// sig: undefined M895_004a4134(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M895_004a4134(void)

{
  DAT_008cc194 = 0x10000;
  return;
}



//==== 004a4158  ns=mobyupdate_unsorted  size=0x188
// sig: undefined UpdateMoby_895(MobyInstance * moby)
// callers(0): 
// callees(4): 0010a2e0 mobyutil::OrganicDeltAng; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 895 */

void mobyupdate_unsorted::UpdateMoby_895(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  int *piVar3;
  double dVar4;
  
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  fVar2 = (moby->rotation).z;
  if (bVar1 == 0) {
    if (*piVar3 != 0) {
      moby->modeBits = moby->modeBits | MIRROR;
    }
    moby->state = '\x01';
    piVar3[3] = (int)fVar2;
    if (*piVar3 == 0) {
      dVar4 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
    }
    else {
      dVar4 = (double)fastfunc::FastDiffRots((double)(moby->rotation).z,0x3ff921fb60000000);
    }
    (moby->rotation).z = (float)dVar4;
  }
  else if (1 < bVar1) {
    if (2 < bVar1) {
      return;
    }
    if (*piVar3 == 0) {
      dVar4 = (double)fastfunc::FastWrapRot((float)piVar3[3],0.6981317);
    }
    else {
      dVar4 = (double)fastfunc::FastDiffRots((double)(float)piVar3[3],0x3fe6571840000000);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar4,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,(float *)(piVar3 + 1))
    ;
    return;
  }
  if (MobyInstance[piVar3[2]].setByGroup != '\0') {
    sound::PlayMobySound(0,0,moby);
    moby->state = '\x02';
  }
  return;
}



//==== 004a4300  ns=mobyupdate_unsorted  size=0x238
// sig: undefined UpdateMoby_898(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 00112900 mobyutil::MB_GetOrientation; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 898 */

void mobyupdate_unsorted::UpdateMoby_898(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  int iVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  Vec4 local_50;
  
  pvVar8 = moby->pVar;
  dVar16 = (double)(moby->pos).x;
  dVar17 = (double)(moby->pos).y;
  dVar18 = (double)(moby->pos).z;
  fVar2 = *(float *)((int)pvVar8 + 100) + DAT_010e4500;
  *(float *)((int)pvVar8 + 100) = fVar2;
  fVar1 = (moby->rotation).z;
  fVar3 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar5 = fVar3;
  }
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar6 = fVar4;
  }
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = fVar6 * fVar6;
  iVar9 = *(int *)((int)pvVar8 + 0x60);
  fVar4 = fVar1 * fVar1;
  fVar11 = fVar3 * fVar3 * fVar6;
  fVar5 = fVar4 * fVar4 * fVar1;
  fVar12 = fVar3 * fVar11;
  fVar7 = fVar4 * fVar5;
  local_50.x = (fVar4 * fVar7 * 2.601887e-06 +
               fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) *
               fVar2 + *(float *)(iVar9 + 0x10);
  local_50.y = (fVar3 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6)
               * *(float *)((int)pvVar8 + 100) + *(float *)(iVar9 + 0x14);
  local_50.z = *(float *)(iVar9 + 0x18);
  lVar13 = fastfunc::FastDoubleToInt
                     ((double)(*(float *)((int)pvVar8 + 100) / *(float *)(iVar9 + 0x1c)));
  dVar15 = (double)*(float *)((int)pvVar8 + 100);
  dVar14 = (double)fastfunc::FastIntToDouble();
  piVar10 = *(int **)((int)pvVar8 + 0x60);
  fVar1 = (float)(-(double)(float)(dVar14 * (double)(float)piVar10[7] - dVar15) /
                 (double)(float)piVar10[7]);
  if ((int)lVar13 < *piVar10 + -2) {
    iVar9 = (int)(lVar13 << 4);
    fVar2 = *(float *)((int)piVar10 + iVar9 + 0x20);
    fVar3 = *(float *)((int)piVar10 + iVar9 + 0x10);
    fVar4 = *(float *)((int)piVar10 + iVar9 + 0x24);
    fVar5 = *(float *)((int)piVar10 + iVar9 + 0x14);
    fVar6 = *(float *)((int)piVar10 + iVar9 + 0x28);
    fVar7 = *(float *)((int)piVar10 + iVar9 + 0x18);
    local_50.w = *(f32 *)((int)piVar10 + iVar9 + 0x2c);
    (moby->pos).w = local_50.w;
    fVar3 = (fVar2 - fVar3) * fVar1 + fVar3;
    fVar5 = (fVar4 - fVar5) * fVar1 + fVar5;
    fVar7 = (fVar6 - fVar7) * fVar1 + fVar7;
    local_50.x = (float)((double)fVar3 - dVar16);
    (moby->pos).x = fVar3;
    local_50.y = (float)((double)fVar5 - dVar17);
    (moby->pos).y = fVar5;
    local_50.z = (float)((double)fVar7 - dVar18);
    (moby->pos).z = fVar7;
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar8 + 0x20),&local_50,(longlong)(int)moby + 0x40,
               (longlong)(int)moby + 0x40);
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004a4540  ns=mobyupdate_helpers  size=0x2cc
// sig: undefined M899_004a4540(void)
// callers(1): 004a4820 mobyupdate_unsorted::UpdateMoby_899
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::M899_004a4540(double param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar12;
  longlong lVar11;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0xd0;
  puVar8 = (ulonglong *)lVar11;
  *puVar8 = uVar10;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x18] = unaff_r31;
  puVar8[0x17] = unaff_r30;
  puVar8[0x16] = unaff_r29;
  puVar8[0x15] = unaff_r28;
  pMVar12 = mobyfunc::CreateMoby(CEILING);
  if (pMVar12 != (MobyInstance *)0x0) {
    pvVar6 = pMVar12->pVar;
    pMVar12->updateDistance = -0x80;
    pMVar12->drawDistance = 0x40;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\0';
    pMVar12->modeBits = pMVar12->modeBits | HAS_SPECIAL_VARS;
    mobyutil::MB_CopyHeroLights(pMVar12);
    fVar1 = (float)param_2[4];
    (pMVar12->pos).x = fVar1;
    fVar2 = (float)param_2[5];
    (pMVar12->pos).y = fVar2;
    iVar7 = *param_2;
    (pMVar12->pos).z = (f32)param_2[6];
    (pMVar12->pos).w = (f32)param_2[7];
    fVar3 = 0.0;
    (pMVar12->rotation).w = 0.0;
    (pMVar12->rotation).z = 0.0;
    (pMVar12->rotation).y = 0.0;
    (pMVar12->rotation).x = 0.0;
    fVar1 = (float)param_2[iVar7 * 4] - fVar1;
    fVar2 = (float)param_2[iVar7 * 4 + 1] - fVar2;
    fVar4 = ABS(fVar1);
    *(float *)(puVar8 + 0xe) = fVar1;
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar8 + 0x74) = fVar2;
    *(float *)(puVar8 + 0xf) = fVar4 - fVar5;
    uVar14 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar5;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar5 = ABS(*(float *)((int)puVar8 + 0x74));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (0.0 < fVar1) {
      lVar16 = uVar10 - 0xc0;
      lVar13 = uVar10 - 0x44;
      lVar15 = uVar10 - 0x54;
      lVar18 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar5 = fVar1 * fVar1;
      *(float *)(puVar8 + 0x11) = fVar1;
      *(float *)(puVar8 + 0x10) = fVar1;
      *(float *)((int)puVar8 + 0x84) = fVar1;
      *(float *)((int)puVar8 + 0x7c) = fVar1;
      fVar1 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar1;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar1 * fVar5;
      do {
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar1 * fVar1;
        iVar7 = (int)lVar15;
        lVar15 = lVar15 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar7 + 4) * fVar1 * fVar1;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar10 - 0x54;
      lVar18 = 4;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar16;
      lVar15 = lVar11;
      do {
        fVar1 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar13 = 2;
      do {
        iVar7 = (int)lVar11;
        iVar9 = (int)lVar16;
        lVar11 = lVar11 + 0x10;
        lVar16 = lVar16 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar2 + fVar4;
    }
    (pMVar12->rotation).z = fVar3;
    *(int *)((int)pvVar6 + 8) = (int)pvVar6 + 0x20;
    *(int **)((int)pvVar6 + 0x60) = param_2;
    *(float *)((int)pvVar6 + 100) = (float)param_1;
    mobyfunc::UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}



//==== 004a4820  ns=mobyupdate_unsorted  size=0x25c
// sig: undefined UpdateMoby_899(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 0015cc7c sound::IsMobyPlayingSound; 0015d204 sound::sound_MobyPlay_oClass; 004a4540 mobyupdate_helpers::M899_004a4540; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 006588c0: 'Bad path data on moby class 899, maya instance %d\n'

/* Moby 899 */

void mobyupdate_unsorted::UpdateMoby_899(MobyInstance *moby)

{
  int *piVar1;
  Spline *pSVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte in_cr6;
  undefined8 in_LR;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\0') {
    if (*piVar1 == -1) {
      libc::printf("Bad path data on moby class 899, maya instance %d\n",
                   (ulonglong)(uint)moby->field71_0xa8 & 0xffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    DAT_010e4500 = mobyutil::g_FrameTime * 3.0;
    iVar7 = 0;
    pSVar2 = Splines[*piVar1];
    uVar9 = ZEXT48(pSVar2);
    uVar8 = uVar9;
    if (0 < pSVar2->cnt + -2) {
      do {
        iVar4 = (int)uVar8;
        fVar3 = *(float *)(iVar4 + 0x14) - *(float *)(iVar4 + 0x24);
        fVar5 = *(float *)(iVar4 + 0x10) - *(float *)(iVar4 + 0x20);
        fVar6 = *(float *)(iVar4 + 0x18) - *(float *)(iVar4 + 0x28);
        iVar7 = iVar7 + 1;
        *(float *)(iVar4 + 0x1c) = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
        uVar8 = uVar8 + 0x10;
      } while (iVar7 < pSVar2->cnt + -2);
    }
    piVar1[1] = 0;
    auVar12 = ZEXT416(0xffffffff);
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    moby->state = '\x01';
    piVar1[2] = -1;
    auVar13 = loadVectorLeftIndexed(in_LR,uVar9);
    auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar13,0);
    auVar14 = loadVectorLeftIndexed(0x1c,uVar9);
    dVar10 = 2.9000000953674316;
    auVar15 = loadVectorLeftIndexed(4,0x4a4810);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
    auVar12 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
               auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    dVar11 = dVar10;
    if ((bool)(in_cr6 >> 1 & 1)) {
      do {
        mobyupdate_helpers::M899_004a4540(dVar10,uVar9);
        dVar10 = (double)(float)(dVar10 + dVar11);
      } while (dVar10 < (double)((float)(longlong)pSVar2->cnt * pSVar2->points[0].w));
    }
    moby->updateDistance = '`';
  }
  iVar7 = fastfunc::FastDecTimerS32(piVar1 + 1);
  if (iVar7 != 0) {
    iVar7 = fastfunc::FastDoubleToInt((double)(2.9 / DAT_010e4500));
    piVar1[1] = iVar7;
    mobyupdate_helpers::M899_004a4540(0,Splines[*piVar1]);
  }
  iVar7 = sound::IsMobyPlayingSound(moby,piVar1[2]);
  if (iVar7 == 0) {
    iVar7 = sound::sound_MobyPlay_oClass(0,4,moby,0x382);
    piVar1[2] = iVar7;
  }
  return;
}



//==== 004a4a80  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M899_004a4a80(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M899_004a4a80(int param_1)

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
          DAT_00a1bfa0 = DAT_008cc1bc;
          DAT_00a1bfa4 = DAT_008cc1bc;
          DAT_00a1bfa8 = DAT_008cc1bc;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}



//==== 004a4bd0  ns=mobyupdate_unsorted  size=0xafc
// sig: undefined UpdateMoby_90(MobyInstance * moby)
// callers(0): 
// callees(18): 0007b310 help::Help_QueueMessage; 0007b458 help::Help_Kill; 000e8aa4 memcard::memcard_Save; 000f0ea8 mobyfunc::AttachManipulator; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00110b70 mobyutil::MB_IsPntInCuboid; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 90 */

void mobyupdate_unsorted::UpdateMoby_90(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  gameMode_t gVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar17;
  undefined4 uVar18;
  longlong lVar15;
  longlong lVar16;
  short sVar21;
  float *pfVar20;
  longlong lVar19;
  longlong lVar22;
  ulonglong unaff_r26;
  undefined4 *puVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x150;
  puVar9 = (ulonglong *)lVar16;
  *puVar9 = uVar13;
  puVar9[0x2c] = in_LR;
  puVar9[0x25] = in_f27;
  puVar9[0x26] = in_f28;
  puVar9[0x27] = in_f29;
  puVar9[0x28] = in_f30;
  puVar9[0x29] = in_f31;
  puVar9[0x24] = unaff_r31;
  puVar9[0x23] = unaff_r30;
  gVar12 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  puVar9[0x22] = unaff_r29;
  puVar9[0x21] = unaff_r28;
  puVar9[0x20] = unaff_r27;
  puVar9[0x1f] = unaff_r26;
  if ((gVar12 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar17 = 0;
    puVar23 = &DAT_0095cd50;
    sVar21 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar23[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar23[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008cc1bc;
          DAT_00a1bfa4 = DAT_008cc1bc;
          DAT_00a1bfa8 = DAT_008cc1bc;
          sVar21 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar17 = iVar17 + 1;
        puVar23 = puVar23 + 1;
      } while (iVar17 < sVar21);
    }
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = ((byte)((LZCOUNT(-(uint)UnlockableItems.thrusterPack) << 0x3a) >> 0x3f) & 0xfe) +
                  3;
    FUN_004d3720(moby,uVar24);
    *(undefined4 *)((int)pvVar8 + 0xc) = 0x406ccccd;
  }
  else if (bVar1 < 2) {
    iVar17 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x40));
    if ((iVar17 != 0) && (iVar17 = FUN_004d3870(moby,uVar24), iVar17 != 0)) {
      mobyutil::MB_SetPointAheadOfMoby(0x40059999a0000000,moby);
      moby->state = '\x02';
    }
  }
  else if (((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) &&
          (moby->state = '\x01', *(short *)((int)pvVar8 + 4) == 2)) {
    mobyutil::MB_UnlockItem(3,1);
    respawn::SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
    memcard::memcard_Save(0,-1);
    help::Help_Kill();
    help::Help_QueueMessage(STR_YOUR_THRUSTER_PACK_INCLUDES_THE_0x2AFB,0x3d);
  }
  dVar33 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004a5628;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004a50dc:
    if (*(int *)((int)pvVar8 + 0x184) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x184) = 0;
      *(float *)((int)pvVar8 + 0x170) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0x174) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x178) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x17c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = hero::g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar9 + 0x11) = fVar3;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar9 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar10 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar15 = uVar13 - 0x140;
      lVar22 = uVar13 - 0x6c;
      lVar19 = uVar13 - 0x7c;
      lVar25 = 2;
      fVar5 = (fVar10 - fVar6) / (fVar10 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x1c) = fVar5;
      *(float *)(puVar9 + 0x1b) = fVar5;
      *(float *)((int)puVar9 + 0xdc) = fVar5;
      *(float *)((int)puVar9 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar6;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar5;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xc4) * fVar5 * fVar5;
        iVar17 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar13 - 0x7c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar22;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xd4) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      do {
        iVar17 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar11 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar26 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar26) goto LAB_004a50dc;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar24 + 0x184);
    }
    else {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x1c,0x4a4b78);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x184,uVar24
                         );
      *(undefined4 *)((int)pvVar8 + 0x184U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = fastfunc::FastDecTimerS32(uVar24 + 0x188);
  if (iVar17 != 0) {
    dVar26 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x188) = uVar18;
    dVar31 = (double)(moby->rotation).z;
    dVar26 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar29 = 0.01745329238474369;
    dVar26 = (double)fastfunc::FastWrapRot((float)dVar31,(float)(dVar26 * 0.01745329238474369));
    dVar31 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar26,(float)(dVar31 * dVar29),(float *)((int)pvVar8 + 0x170));
    *(float *)((int)pvVar8 + 0x170) = *(float *)((int)pvVar8 + 0x170) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x174) = *(float *)((int)pvVar8 + 0x174) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x178) = *(float *)((int)pvVar8 + 0x178) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x184) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x170);
    fVar3 = *(float *)((int)pvVar8 + 0x174);
    fVar5 = *(float *)((int)pvVar8 + 0x178);
  }
  else {
    dVar33 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar32 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar30 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar29 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar32) - ABS(dVar30));
  dVar31 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar26 = ABS(dVar30);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar28 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar27 = dVar31;
  if (0.0 < dVar26) {
    lVar15 = uVar13 - 0x140;
    lVar19 = uVar13 - 0x9c;
    lVar22 = uVar13 - 0x8c;
    lVar25 = 2;
    fVar5 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar5;
    *(float *)((int)puVar9 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar6;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar5;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0x9c;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar22;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar19 = 2;
    lVar15 = lVar16;
    dVar26 = dVar31;
    do {
      iVar17 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar11 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar27 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar28 = (double)fastfunc::FastDiffRots(dVar27,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar29;
  fVar2 = SQRT((float)(dVar32 * dVar32 + (double)(float)(dVar30 * dVar30)));
  dVar30 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar30 - ABS(dVar29));
  uVar14 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar31 < 0.0) {
    dVar26 = ABS(dVar29);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar29 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar31 < 0.0) {
    dVar29 = dVar30;
  }
  if (dVar31 < dVar26) {
    lVar15 = uVar13 - 0x140;
    lVar22 = uVar13 - 0xac;
    lVar19 = uVar13 - 0xbc;
    lVar25 = 2;
    fVar5 = (float)(dVar29 - dVar26) / (float)(dVar29 + dVar26);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x14) = fVar5;
    *(float *)(puVar9 + 0x13) = fVar5;
    *(float *)((int)puVar9 + 0x9c) = fVar5;
    *(float *)((int)puVar9 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar6;
    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x84) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0xbc;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar22;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar15 = 2;
    do {
      iVar17 = (int)lVar16;
      iVar11 = (int)lVar22;
      lVar16 = lVar16 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar31 = -dVar31;
  dVar26 = 1.5707963705062866;
  if ((dVar28 <= 1.5707963705062866) && (dVar26 = dVar28, dVar28 < -1.5707963705062866)) {
    dVar26 = -1.5707963705062866;
  }
  dVar29 = 0.5235987901687622;
  if ((dVar31 <= 0.5235987901687622) && (dVar29 = dVar31, dVar31 < -0.5235987901687622)) {
    dVar29 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0xd4) = (float)dVar29;
  *(float *)((int)pvVar8 + 0xd8) = (float)(dVar26 * 0.5);
  *(float *)((int)pvVar8 + 0x158) = (float)(dVar26 * 0.5);
LAB_004a5628:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xe0) = 0x40300000;
  }
  dVar26 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar24 + 0x70,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * dVar26),moby,uVar24 + 0xf0,1);
  return;
}



//==== 004a56cc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M977_004a56cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M977_004a56cc(void)

{
  DAT_008cc20c = 0x10000;
  return;
}



//==== 004a56e8  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M977_004a56e8(void)
// callers(1): 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(0): 

void mobyupdate_helpers::M977_004a56e8(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_008cc280;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_008cc284;
  (&DAT_008cc28c)[iVar5] = 0xff;
  (&DAT_008cc28e)[iVar5] = 0xff;
  (&DAT_008cc28d)[iVar5] = 0xff;
  (&DAT_008cc28f)[iVar5] = 0xff;
  (&DAT_008cc290)[iVar5] = 0xff;
  (&DAT_008cc291)[iVar5] = 0xff;
  (&DAT_008cc292)[iVar5] = 0xff;
  (&DAT_008cc293)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_008cc280)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_008cc284)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_008cc290)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_008cc292)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_008cc291)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_008cc293)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_008cc28d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_008cc28f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_008cc28c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_008cc28e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x24);
  return;
}



//==== 004a58e8  ns=mobyupdate_unsorted  size=0xc30
// sig: undefined UpdateMoby_a_lot_2(MobyInstance * moby)
// callers(0): 
// callees(18): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00104298 mobyutil::MB_SetGroupField; 001042ec mobyutil::MB_SetStateByGroup; 00104a28 mobyutil::MB_IsFirstMobyInGroup; 00109af0 mobyutil::Delt; 00110b70 mobyutil::MB_IsPntInCuboid; 001129d0 mobyutil::MB_ScaledVecWrapper; 0017b230 water::WaterTile_InitAll; 0017b4b0 water::WaterTile_CalcGridBSphere; 0017b780 water::WaterWave_ScaleTable; 0017b8b8 water::WaterTile_UpdateWaves; 0017bd90 water::WaterTile_PutDrop; 0017c3b0 water::WaterTile_PutDrop_Thunk; 004a56e8 mobyupdate_helpers::M977_004a56e8; 004fff60 fastfunc::FastDecTimerS32
// strings: 0096c165: 'None'

/* Moby 902
   Moby 941
   Moby 942
   Moby 943
   Moby 944
   Moby 948
   Moby 949
   Moby 950
   Moby 951
   Moby 952
   Moby 953
   Moby 954
   Moby 955
   Moby 956
   Moby 957
   Moby 958
   Moby 959
   Moby 960
   Moby 961
   Moby 962
   Moby 963
   Moby 964
   Moby 965
   Moby 966
   Moby 967
   Moby 968
   Moby 969
   Moby 970
   Moby 971
   Moby 972
   Moby 973
   Moby 974
   Moby 975
   Moby 976
   Moby 977 */

void mobyupdate_unsorted::UpdateMoby_a_lot_2(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  f32 fVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  undefined2 uVar22;
  longlong lVar23;
  ulonglong unaff_r24;
  int iVar24;
  ulonglong unaff_r25;
  BSphere *bounds;
  WaterTile *pWVar25;
  ulonglong unaff_r26;
  WaterTile *tile;
  ulonglong unaff_r27;
  int iVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar27;
  int iVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double in_f5;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  undefined8 uVar33;
  ulonglong in_f29;
  undefined8 uVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x100;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar16;
  puVar12[0x22] = in_LR;
  puVar12[0x1b] = in_f27;
  puVar12[0x1c] = in_f28;
  puVar12[0x1d] = in_f29;
  puVar12[0x1e] = in_f30;
  puVar12[0x1f] = in_f31;
  puVar12[0x19] = unaff_r30;
  puVar12[0x1a] = unaff_r31;
  pfVar6 = (float *)moby->pVar;
  uVar29 = ZEXT48(pfVar6);
  puVar12[0x18] = unaff_r29;
  puVar12[0x17] = unaff_r28;
  puVar12[0x16] = unaff_r27;
  puVar12[0x15] = unaff_r26;
  puVar12[0x14] = unaff_r25;
  puVar12[0x13] = unaff_r24;
  if (pfVar6 != (float *)0x0) {
    if (DAT_010e4780 != 0) {
      UnlockableItems.hydroPack = '\0';
      CHAR_ARRAY_0096c165[4] = '\0';
    }
    uVar1 = moby->state;
    if (uVar1 == '\a') {
      fVar7 = (moby->pos).z;
      uVar9 = (int)*pfVar6 >> 0x1f;
      uVar10 = (int)fVar7 >> 0x1f;
      if ((int)((uVar9 >> 1 ^ (uint)*pfVar6) - uVar9) < (int)((uVar10 >> 1 ^ (uint)fVar7) - uVar10))
      {
        *(undefined2 *)(&DAT_008cc29e + (int)pfVar6[5] * 0x11a0) = 0;
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else if (uVar1 == '\x06') {
      fVar40 = mobyutil::g_FrameTime * 0.42 + (moby->pos).z;
      (moby->pos).z = fVar40;
      if (54.0 <= fVar40) {
        moby->state = '\a';
      }
    }
    else if (uVar1 == '\x05') {
      (moby->pos).z = mobyutil::g_FrameTime * 0.32 + (moby->pos).z;
      iVar24 = fastfunc::FastDecTimerS32(uVar29 + 0x18);
      if (iVar24 != 0) {
        moby->state = '\x06';
      }
    }
    else if (uVar1 == '\x04') {
      iVar24 = fastfunc::FastDecTimerS32(uVar29 + 0x18);
      if (iVar24 != 0) {
        auVar37 = ZEXT416(0xffffffff);
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar37 = loadVectorLeftIndexed(0x4c,0x4a5888);
        auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar37 = vectorMultiplyAddFloatingPoint
                            (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                             auVar38);
        auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
        auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x18,
                            uVar29);
        *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar11;
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      if ((-1 < (int)pfVar6[4]) &&
         (iVar24 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar6[4]), iVar24 != 0
         )) {
        pfVar6[7] = 0.0;
        mobyutil::MB_SetStateByGroup(moby->group,4);
      }
    }
    else if (uVar1 == '\x02') {
      if ((moby->setByGroup & 4U) == 0) {
        iVar24 = mobyutil::MB_IsFirstMobyInGroup(moby,(uint)(byte)moby->group,'\x01','\0');
        if ((iVar24 == 0) || (moby->setByGroup == '\x01')) {
          if (moby->setByGroup == '\x01') {
            mobyutil::Delt(pfVar6[1],mobyutil::g_FrameTime * 4.0,&(moby->pos).z);
          }
        }
        else {
          fVar40 = mobyutil::Delt(pfVar6[1],mobyutil::g_FrameTime * 4.0,&(moby->pos).z);
          mobyutil::MB_SetGroupField((double)fVar40,moby->group,1);
        }
      }
      else {
        mobyutil::MB_SetStateByGroup(moby->group,1);
      }
      iVar24 = mobyutil::MB_randInt(200);
      if (iVar24 == 0) {
        dVar32 = -4.0;
        dVar36 = 4.0;
        dVar35 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
        dVar31 = (double)(float)((double)(float)(&DAT_008cc280)[(int)pfVar6[5] * 0x468] + dVar35);
        dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar36);
        water::WaterTile_PutDrop
                  ((float)dVar31,
                   (float)((double)(float)(&DAT_008cc284)[(int)pfVar6[5] * 0x468] + dVar35),1.0,
                   -0.05,(WaterTile *)(&DAT_008cc280 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\x01') {
      if ((moby->setByGroup & 8U) == 0) {
        iVar24 = mobyutil::MB_IsFirstMobyInGroup(moby,(uint)(byte)moby->group,'\x01','\0');
        if ((iVar24 == 0) || (moby->setByGroup == '\x02')) {
          if (moby->setByGroup == '\x02') {
            mobyutil::Delt(*pfVar6,mobyutil::g_FrameTime * 4.0,&(moby->pos).z);
          }
        }
        else {
          fVar40 = mobyutil::Delt(*pfVar6,mobyutil::g_FrameTime * 4.0,&(moby->pos).z);
          mobyutil::MB_SetGroupField((double)fVar40,moby->group,2);
        }
      }
      else {
        mobyutil::MB_SetStateByGroup(moby->group,2);
      }
      iVar24 = mobyutil::MB_randInt(200);
      if (iVar24 == 0) {
        dVar32 = -4.0;
        dVar36 = 4.0;
        dVar35 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
        dVar31 = (double)(float)((double)(float)(&DAT_008cc280)[(int)pfVar6[5] * 0x468] + dVar35);
        dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar36);
        water::WaterTile_PutDrop
                  ((float)dVar31,
                   (float)((double)(float)(&DAT_008cc284)[(int)pfVar6[5] * 0x468] + dVar35),1.0,
                   -0.05,(WaterTile *)(&DAT_008cc280 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\0') {
      fVar40 = pfVar6[5];
      moby->modeBits = moby->modeBits | (NO_DRAW|DISABLED);
      if (fVar40 == 0.0) {
        pWVar25 = (WaterTile *)&DAT_008cc280;
        water::WaterTile_InitAll((WaterTile *)&DAT_008cc280,0x24);
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
        uVar9 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        *(float *)(puVar12 + 0xe) = fVar3 - fVar4;
        fVar40 = 0.0;
        uVar17 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar9 & 4;
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar13 = fVar3;
        if (*(float *)(puVar12 + 0xe) - 0.0 < 0.0) {
          fVar13 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (*(float *)(puVar12 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar13) {
          lVar18 = uVar16 - 0xf0;
          lVar20 = uVar16 - 0x8c;
          lVar23 = uVar16 - 0x7c;
          lVar30 = 2;
          fVar3 = (fVar4 - fVar13) / (fVar4 + fVar13);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x10) = fVar3;
          *(float *)(puVar12 + 0xf) = fVar3;
          *(float *)((int)puVar12 + 0x7c) = fVar3;
          *(float *)((int)puVar12 + 0x74) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar12 + 0xf) = *(float *)(puVar12 + 0xf) * fVar4;
          *(float *)((int)puVar12 + 0x7c) = *(float *)((int)puVar12 + 0x7c) * fVar3;
          *(float *)(puVar12 + 0x10) = *(float *)(puVar12 + 0x10) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar3 * fVar3;
            iVar24 = (int)lVar20;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar23 = uVar16 - 0x8c;
          pfVar21 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar20 = lVar23;
          do {
            fVar3 = *pfVar21;
            fVar4 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 0x74) * fVar3;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar18 = 2;
          do {
            iVar24 = (int)lVar19;
            iVar27 = (int)lVar23;
            lVar19 = lVar19 + 0x10;
            lVar23 = lVar23 + 0x10;
            fVar40 = fVar40 + *(float *)(iVar24 + 0x74) + *(float *)(iVar27 + 4) +
                     *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar40 = (fVar40 + 0.7853982) * fVar5 + fVar2;
        }
        fVar5 = fVar40 + 1.5707963;
        iVar24 = 0;
        bounds = (BSphere *)&DAT_010e4540;
        fVar3 = 3.1415925 - fVar40;
        if (fVar40 - (3.1415925 - fVar40) < 0.0) {
          fVar3 = fVar40;
        }
        fVar4 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar4 = fVar5;
        }
        fVar13 = -3.1415925 - fVar40;
        if ((-3.1415925 - fVar40) - fVar3 < 0.0) {
          fVar13 = fVar3;
        }
        fVar40 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
          fVar40 = fVar4;
        }
        fVar5 = fVar13 * fVar13;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex0 = 0x28;
        WaterTileConsts.tex1 = 0x29;
        fVar3 = fVar40 * fVar40;
        WaterTileConsts.alpha0 = 0x40;
        WaterTileConsts.alpha1 = 0x40;
        fVar14 = fVar5 * fVar5 * fVar13;
        fVar4 = fVar3 * fVar3 * fVar40;
        fVar15 = fVar5 * fVar14;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.lightDir.y =
             (fVar5 * fVar15 * 2.601887e-06 +
             fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar5 * fVar13 * -0.16666657 + fVar13)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar40 * -0.16666657 + fVar40) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_008cc280;
        WaterTileBoxes = (WaterTileBox *)&DAT_010e4540;
        WaterTileCnt = 0x24;
        WaterFogNearDist = 0;
        iVar27 = 0;
        WaterFogFarDist = 0x47000000;
        WaterFogNearIntensity = 0x437f0000;
        WaterFogFarIntensity = 0x42400000;
        tile = pWVar25;
        do {
          water::WaterTile_CalcGridBSphere(tile,bounds);
          iVar27 = iVar27 + 1;
          tile = (WaterTile *)&tile[1].ovlTex;
          bounds = bounds + 1;
          *(undefined2 *)(&DAT_008cc29e + (int)pfVar6[5] * 0x11a0) =
               *(undefined2 *)(&DAT_008f3d00 + (int)pfVar6[5] * 2);
        } while (iVar27 < 0x24);
        iVar28 = 0;
        iVar27 = 0;
        dVar36 = -6.0;
        dVar35 = 6.0;
        uVar34 = 0x4000000000000000;
        uVar33 = 0x3fc99999a0000000;
        do {
          iVar26 = 0;
          do {
            dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar35);
            dVar32 = (double)(float)((double)*(float *)((int)&DAT_008cc280 + iVar27) + dVar31);
            dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar35);
            water::WaterTile_PutDrop_Thunk
                      (dVar32,(double)(float)((double)(pWVar25->tilePos).y + dVar31),uVar34,uVar33,
                       &DAT_008cc280,0x24);
            iVar26 = iVar26 + 1;
          } while (iVar26 < 2);
          iVar28 = iVar28 + 1;
          pWVar25 = (WaterTile *)&pWVar25[1].ovlTex;
          iVar27 = iVar27 + 0x11a0;
        } while (iVar28 < 0x24);
        do {
          mobyupdate_helpers::M977_004a56e8(iVar24);
          iVar24 = iVar24 + 1;
        } while (iVar24 < 0x24);
      }
      if (pfVar6[3] == 0.0) {
        moby->state = ((byte)((LZCOUNT(-(int)pfVar6[2]) << 0x3a) >> 0x3f) & 1) + 1;
      }
      else {
        auVar37 = ZEXT416(0xffffffff);
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        moby->state = '\x03';
        auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar37 = loadVectorLeftIndexed(0x3c,0x4a5888);
        auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        fVar40 = pfVar6[1];
        auVar37 = vectorMultiplyAddFloatingPoint
                            (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                             auVar38);
        uVar9 = (int)fVar40 >> 0x1f;
        auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
        auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x18,
                            uVar29);
        *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar11;
        fVar7 = (moby->pos).z;
        uVar10 = (int)fVar7 >> 0x1f;
        if ((int)((uVar10 >> 1 ^ (uint)fVar7) - uVar10) < (int)((uVar9 >> 1 ^ (uint)fVar40) - uVar9)
           ) {
          *(undefined2 *)(&DAT_008cc29e + (int)pfVar6[5] * 0x11a0) = 0;
        }
      }
    }
    if (-1 < (int)pfVar6[5]) {
      dVar36 = 0.0;
      (&DAT_008cc29c)[(int)pfVar6[5] * 0x11a0] = WaterTileConsts.alpha0;
      (&DAT_008cc29d)[(int)pfVar6[5] * 0x11a0] = WaterTileConsts.alpha1;
      puVar8 = moby->collision;
      *(f32 *)(&DAT_008cc288 + (int)pfVar6[5] * 0x11a0) = (moby->pos).z;
      dVar35 = dVar36;
      if ((puVar8 != (ushort *)0x0) &&
         (iVar24 = mobyutil::MB_ScaledVecWrapper(0x4048000000000000,moby), iVar24 != -1)) {
        if (moby->state < 8 && 2 < moby->state) {
          fVar7 = (moby->pos).z;
          uVar9 = (int)fVar7 >> 0x1f;
          uVar10 = (int)pfVar6[1] >> 0x1f;
          iVar24 = (uVar9 >> 1 ^ (uint)fVar7) - uVar9;
          if (((int)((uVar10 >> 1 ^ (uint)pfVar6[1]) - uVar10) < iVar24) &&
             (uVar9 = (int)*pfVar6 >> 0x1f, iVar24 < (int)((uVar9 >> 1 ^ (uint)*pfVar6) - uVar9))) {
            dVar35 = 1.0;
          }
        }
        else {
          dVar35 = 1.0;
        }
      }
      uVar22 = 0;
      if (dVar35 != dVar36) {
        uVar22 = *(undefined2 *)(&DAT_008f3d00 + (int)pfVar6[5] * 2);
      }
      fVar40 = pfVar6[5];
      *(undefined2 *)(&DAT_008cc29e + (int)fVar40 * 0x11a0) = uVar22;
      if (fVar40 == 0.0) {
        water::WaterTile_UpdateWaves((WaterTile *)&DAT_008cc280,0x24);
        RegisterFuncForMoby(&PTR_M977_004a6518_0070f450,moby);
        fVar40 = pfVar6[5];
      }
      if (fVar40 == DAT_008cc240) {
        fVar5 = pfVar6[5];
        uVar22 = (undefined2)DAT_008cc244;
        *(undefined2 *)(&DAT_008cc29e + (int)fVar40 * 0x11a0) = uVar22;
        *(undefined2 *)(&DAT_008f3d00 + (int)fVar5 * 2) = uVar22;
      }
    }
  }
  return;
}



//==== 004a6518  ns=mobyupdate_helpers  size=0x30
// sig: undefined M977_004a6518(void)
// callers(0): 
// callees(1): 0017cfdc water::WaterTile_DrawAll

void mobyupdate_helpers::M977_004a6518(void)

{
  water::WaterTile_DrawAll(&DAT_008cc280,0x24);
  return;
}



//==== 004a6548  ns=mobyupdate_helpers  size=0x14
// sig: undefined M977_004a6548(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M977_004a6548(void)

{
  DAT_008f3d94 = 0x10000;
  return;
}



//==== 004a6570  ns=mobyupdate_helpers  size=0x130
// sig: undefined M903_004a6570(void)
// callers(1): 004a66d0 mobyupdate_unsorted::UpdateMoby_903
// callees(1): 00109b40 mobyutil::AccelDelt

double mobyupdate_helpers::M903_004a6570(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  Spline *pSVar4;
  uint uVar5;
  Vec4 *pVVar6;
  undefined4 *unused;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  
  iVar3 = *(int *)(param_1 + 0x78);
  uVar5 = (int)*(uint *)(iVar3 + 0xa4) >> 0x1f;
  pSVar4 = Splines[*(int *)(iVar3 + 0xb4)];
  if ((int)((uVar5 >> 1 ^ *(uint *)(iVar3 + 0xa4)) - uVar5) < 0x3f000001) {
    fVar12 = pSVar4->points[0].x;
    fVar1 = pSVar4->points[0].y;
    fVar2 = pSVar4->points[0].z;
  }
  else {
    pVVar6 = pSVar4->points + pSVar4->cnt + -1;
    fVar12 = pVVar6->x;
    fVar1 = pVVar6->y;
    fVar2 = pVVar6->z;
  }
  dVar11 = (double)fVar2;
  dVar10 = (double)fVar1;
  unused = &DAT_004a6560;
  dVar9 = 0.004999999888241291;
  dVar8 = 0.20000000298023224;
  dVar7 = 0.0;
  mobyutil::AccelDelt(fVar12,0.005,0.2,0.0,(float *)(param_1 + 0x10),0x4a6560,
                      (float *)(iVar3 + 0xd0));
  mobyutil::AccelDelt((float)dVar10,(float)dVar9,(float)dVar8,(float)dVar7,(float *)(param_1 + 0x14)
                      ,(int)unused,(float *)(iVar3 + 0xd4));
  fVar12 = mobyutil::AccelDelt((float)dVar11,(float)dVar9,(float)dVar8,(float)dVar7,
                               (float *)(param_1 + 0x18),(int)unused,(float *)(iVar3 + 0xd8));
  return (double)fVar12;
}



//==== 004a66d0  ns=mobyupdate_unsorted  size=0x9f0
// sig: undefined UpdateMoby_903(MobyInstance * moby)
// callers(0): 
// callees(11): 00109b40 mobyutil::AccelDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 00117c60 mobyutil::MB_HeroStandingOnMoby; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004a6570 mobyupdate_helpers::M903_004a6570; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 903 */

void mobyupdate_unsorted::UpdateMoby_903(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  void *pvVar8;
  u16 *puVar9;
  Spline *pSVar10;
  uint uVar11;
  undefined2 uVar12;
  Vec4 *pVVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  bool bVar17;
  int iVar18;
  uint32_t uVar19;
  undefined4 *unused;
  longlong lVar20;
  ulonglong uVar21;
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
  Vec4 local_80;
  
  pvVar8 = moby->pVar;
  uVar21 = ZEXT48(pvVar8);
  bVar17 = false;
  if (*(int *)((int)pvVar8 + 0xb4) == -1) {
    return;
  }
  pSVar10 = Splines[*(int *)((int)pvVar8 + 0xb4)];
  if (*(int *)((int)pvVar8 + 0xcc) != -1) {
    iVar18 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xcc));
    if (iVar18 == 0) {
      moby->updateDistance = -1;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      return;
    }
    iVar18 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xcc));
    if (iVar18 != 0) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      puVar9 = moby->pClass->collision;
      *(undefined4 *)((int)pvVar8 + 0xcc) = 0xffffffff;
      moby->collision = puVar9;
    }
  }
  if ((((*(int *)((int)pvVar8 + 0xc0) == -1) ||
       (iVar18 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xc0)),
       iVar18 != 0)) || (uVar7 = moby->uid, (&DAT_00a545c4)[(short)uVar7] != '\0')) ||
     ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar7 >> 5) << 2)) &
      1 << (uVar7 & 0x1f)) != 0)) {
    if (*(int *)((int)pvVar8 + 0xc0) != -1) {
      uVar7 = moby->uid;
      iVar16 = (int)((longlong)((int)(short)uVar7 >> 5) << 2);
      iVar18 = (int)((longlong)((int)(short)uVar7 >> 5) << 2);
      uVar11 = *(uint *)(&DAT_00a54dd0 + iVar18);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar16) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar16) | 1 << (uVar7 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar18) = uVar11 | 1 << (uVar7 & 0x1f);
      *(undefined4 *)((int)pvVar8 + 0xc0) = 0xffffffff;
    }
    bVar17 = true;
  }
  dVar27 = (double)(moby->pos).x;
  dVar28 = (double)(moby->pos).y;
  dVar29 = (double)(moby->pos).z;
  fastfunc::FastDecTimerS16(uVar21 + 0xba);
  if (moby->state == '\0') {
    uVar11 = *(uint *)((int)pvVar8 + 0xa0);
    uVar2 = 0;
    *(undefined4 *)((int)pvVar8 + 0x20) = 0;
    *(undefined2 *)((int)pvVar8 + 0x24) = 0;
    *(undefined1 *)((int)pvVar8 + 0x28) = 4;
    *(undefined2 *)((int)pvVar8 + 0x3e) = 5;
    moby->setByGroup = (char)uVar11;
    if ((uVar11 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    lVar20 = 0;
    *(undefined4 *)((int)pvVar8 + 0xa4) = uVar2;
    iVar18 = fastfunc::FastDoubleToInt();
    if (iVar18 != 0) {
      lVar20 = (ulonglong)(uint)pSVar10->cnt - 1;
    }
    iVar18 = (int)(lVar20 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar10->points[0].x + iVar18);
    (moby->pos).y = *(f32 *)((int)&pSVar10->points[0].y + iVar18);
    (moby->pos).z = *(f32 *)((int)&pSVar10->points[0].z + iVar18);
    (moby->pos).w = *(f32 *)((int)&pSVar10->points[0].w + iVar18);
    *(undefined2 *)((int)pvVar8 + 0xba) = 0;
    *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar8 + 0xbc) = 0;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 == 0) {
    if ((bVar17) &&
       (((*(short *)((int)pvVar8 + 0xb8) != 0 &&
         (uVar19 = mobyutil::MB_HeroStandingOnMoby(moby), uVar19 != 0)) ||
        (pVVar13 = pSVar10->points + pSVar10->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar10->points[0].y, fVar4 = g_heroPosition.y - pVVar13->y,
        fVar5 = g_heroPosition.x - pVVar13->x, fVar6 = g_heroPosition.x - pSVar10->points[0].x,
        fVar14 = g_heroPosition.z - pVVar13->z, fVar15 = g_heroPosition.z - pSVar10->points[0].z,
        SQRT(fVar15 * fVar15 + fVar6 * fVar6 + fVar3 * fVar3) <
        SQRT(fVar14 * fVar14 + fVar5 * fVar5 + fVar4 * fVar4))))) {
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar8 + 0xb8) = 0;
      *(float *)((int)pvVar8 + 0xac) = -1.0 / (fVar3 * *(float *)((int)pvVar8 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 2) {
    if ((bVar17) &&
       (((*(short *)((int)pvVar8 + 0xb8) != 0 &&
         (uVar19 = mobyutil::MB_HeroStandingOnMoby(moby), uVar19 != 0)) ||
        (pVVar13 = pSVar10->points + pSVar10->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar10->points[0].y,
        fVar5 = g_heroPosition.x - pSVar10->points[0].x, fVar4 = g_heroPosition.y - pVVar13->y,
        fVar6 = g_heroPosition.x - pVVar13->x, fVar14 = g_heroPosition.z - pSVar10->points[0].z,
        fVar15 = g_heroPosition.z - pVVar13->z,
        SQRT(fVar15 * fVar15 + fVar6 * fVar6 + fVar4 * fVar4) <
        SQRT(fVar14 * fVar14 + fVar5 * fVar5 + fVar3 * fVar3))))) {
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar8 + 0xb8) = 0;
      *(float *)((int)pvVar8 + 0xac) = 1.0 / (fVar3 * *(float *)((int)pvVar8 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 3) {
    if ((*(int *)((int)pvVar8 + 200) == 0) &&
       (uVar19 = mobyutil::MB_HeroStandingOnMoby(moby), uVar19 != 0)) {
      DAT_00969ed2 = 4;
      DAT_00969ed4 = 4;
    }
    if (*(short *)((int)pvVar8 + 0xba) == 0) {
      dVar26 = 0.0;
      if ((((-1 < *(int *)((int)pvVar8 + 0xbc)) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
          (fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3))) ||
         (fVar3 - g_heroPosition.z <= 1.0)) {
        iVar18 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar8 + 0xc4));
        if (iVar18 == 0) {
          iVar18 = sound::PlayMobySound(0,4,moby);
          *(int *)((int)pvVar8 + 0xc4) = iVar18;
        }
        fVar3 = *(float *)((int)pvVar8 + 0xac);
        fVar4 = fVar3 * mobyutil::g_FrameTime + *(float *)((int)pvVar8 + 0xa8);
        *(float *)((int)pvVar8 + 0xa8) = fVar4;
        if (ABS(fVar3) < ABS(fVar4)) {
          *(float *)((int)pvVar8 + 0xa8) = fVar3;
          fVar4 = fVar3;
        }
        fVar4 = *(float *)((int)pvVar8 + 0xa4) + fVar4;
        *(float *)((int)pvVar8 + 0xa4) = fVar4;
        if (0.5 < ABS(fVar4 - 0.5)) {
          if (*(int *)((int)pvVar8 + 0xac) < 1) {
            moby->setByGroup = '\x01';
            dVar22 = dVar26;
          }
          else {
            moby->setByGroup = '\0';
            dVar22 = 1.0;
          }
          *(float *)((int)pvVar8 + 0xa4) = (float)dVar22;
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
          auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = loadVectorLeftIndexed(0x20,0x4a66a0);
          auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar18 = *(int *)((int)pvVar8 + 0xc4);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                               ,auVar31);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar30 = vectorSplatHalfWord(auVar30,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar30,0xba,uVar21);
          *(undefined2 *)((int)pvVar8 + 0xba) = uVar12;
          if (((iVar18 != -1) && (sound::g_SoundChannels[iVar18].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar18].state != '\0')) {
            sound::sound_Kill(iVar18);
          }
          *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
        }
        dVar22 = (double)fastfunc::FastIntToDouble(pSVar10->cnt + -1);
        lVar20 = fastfunc::FastDoubleToInt
                           ((double)(float)(dVar22 * (double)*(float *)((int)pvVar8 + 0xa4)));
        dVar22 = (double)fastfunc::FastIntToDouble();
        dVar23 = (double)fastfunc::FastIntToDouble(pSVar10->cnt + -1);
        fVar3 = (float)(dVar23 * (double)*(float *)((int)pvVar8 + 0xa4) - dVar22);
        iVar18 = (int)(lVar20 << 4);
        if ((int)lVar20 == pSVar10->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar18);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar18);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar18);
        }
        else {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar18);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar18);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar18);
          fVar4 = fVar3 * (*(float *)((int)&pSVar10->points[1].x + iVar18) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar10->points[1].y + iVar18) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar10->points[1].z + iVar18) - fVar6) + fVar6;
        }
        dVar25 = (double)fVar6;
        dVar24 = (double)fVar5;
        unused = &DAT_004a66a0;
        dVar23 = 0.004999999888241291;
        dVar22 = 0.20000000298023224;
        mobyutil::AccelDelt(fVar4,0.005,0.2,(float)dVar26,&(moby->pos).x,0x4a66a0,
                            (float *)((int)pvVar8 + 0xd0));
        mobyutil::AccelDelt((float)dVar24,(float)dVar23,(float)dVar22,(float)dVar26,&(moby->pos).y,
                            (int)unused,(float *)((int)pvVar8 + 0xd4));
        mobyutil::AccelDelt((float)dVar25,(float)dVar23,(float)dVar22,(float)dVar26,&(moby->pos).z,
                            (int)unused,(float *)((int)pvVar8 + 0xd8));
        *(float *)((int)pvVar8 + 0xbc) = (float)((double)(moby->pos).z - dVar29);
        goto LAB_004a6fb4;
      }
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x18,0x4a66a0);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = vectorSplatHalfWord(auVar30,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar30,0xba,uVar21);
      *(undefined2 *)((int)pvVar8 + 0xba) = uVar12;
    }
    *(undefined4 *)((int)pvVar8 + 0xa8) = 0;
    iVar18 = *(int *)((int)pvVar8 + 0xc4);
    if (((iVar18 != -1) && (sound::g_SoundChannels[iVar18].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar18].state != '\0')) {
      sound::sound_Kill(iVar18);
    }
    *(undefined4 *)((int)pvVar8 + 0xc4) = 0xffffffff;
  }
LAB_004a6fb4:
  if (moby->setByGroup != '\x02') {
    mobyupdate_helpers::M903_004a6570((longlong)(int)moby);
  }
  lVar20 = (longlong)(int)moby + 0x40;
  local_80.x = (float)((double)(moby->pos).x - dVar27);
  local_80.y = (float)((double)(moby->pos).y - dVar28);
  local_80.w = (moby->pos).w;
  local_80.z = (float)((double)(moby->pos).z - dVar29);
  mobyutil::MB_GetOrientation((MobyInstance *)((int)pvVar8 + 0x60),&local_80,lVar20,lVar20);
  uVar19 = mobyutil::MB_HeroStandingOnMoby(moby);
  if (((uVar19 == 0) &&
      (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) && (*(short *)((int)pvVar8 + 0xba) == 0)) {
    *(undefined2 *)((int)pvVar8 + 0xb8) = 1;
  }
  return;
}



//==== 004a70c0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M928_004a70c0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M928_004a70c0(void)

{
  DAT_008f3e0c = 0x10000;
  return;
}



//==== 004a70d8  ns=mobyupdate_helpers  size=0x4
// sig: undefined M928_004a70d8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M928_004a70d8(void)

{
  return;
}



//==== 004a70f0  ns=mobyupdate_unsorted  size=0x890
// sig: undefined UpdateMoby_{868_905_928}(MobyInstance * moby)
// callers(0): 
// callees(10): 00109af0 mobyutil::Delt; 00110488 mobyutil::ClampVec3Magnitude; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d204 sound::sound_MobyPlay_oClass; 004fff60 fastfunc::FastDecTimerS32; 005023f0 fastfunc::FastVecAdd; 00502730 fastfunc::FastIntToDouble; 00502a64 fastfunc::FastVecSub

/* Moby 868
   Moby 905
   Moby 928 */

void mobyupdate_unsorted::UpdateMoby__868_905_928_(MobyInstance *moby)

{
  uint uVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int *piVar6;
  Spline *pSVar7;
  undefined4 uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  char cVar16;
  int iVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  Vec4 local_b0;
  f32 local_a0;
  f32 local_9c;
  f32 local_98;
  f32 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  f32 local_70;
  f32 local_6c;
  f32 local_68;
  f32 local_64;
  longlong local_60;
  
  uVar12 = ZEXT48(&stack0x00000000);
  fVar3 = (moby->pos).x;
  local_b0.x = -fVar3;
  local_b0.y = -(moby->pos).y;
  local_b0.z = -(moby->pos).z;
  pvVar5 = moby->pVar;
  uVar18 = ZEXT48(pvVar5);
  local_b0.w = (moby->pos).w;
  local_a0 = (moby->rotation).x;
  local_9c = (moby->rotation).y;
  local_98 = (moby->rotation).z;
  local_94 = (moby->rotation).w;
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    iVar14 = fastfunc::FastDecTimerS32(uVar18 + 0xe8);
    if (iVar14 != 0) {
      moby->state = '\x03';
    }
  }
  else if (uVar2 == '\x03') {
    piVar6 = *(int **)((int)pvVar5 + 0xc0);
    iVar14 = *piVar6;
    iVar17 = *(int *)((int)pvVar5 + 0xb0) + iVar14 + (int)*(char *)((int)pvVar5 + 0xb4);
    iVar17 = iVar17 - (iVar17 / iVar14) * iVar14;
    *(float *)((int)pvVar5 + 0xa0) = (float)piVar6[iVar17 * 4 + 4] - fVar3;
    iVar13 = iVar17 + ((uint)((LZCOUNT(-*(int *)((int)pvVar5 + 0x108)) << 0x3a) >> 0x3f) &
                      (iVar14 + -1) - iVar17);
    *(float *)((int)pvVar5 + 0xa4) = (float)piVar6[iVar17 * 4 + 5] - (moby->pos).y;
    *(float *)((int)pvVar5 + 0xa8) = (float)piVar6[iVar17 * 4 + 6] - (moby->pos).z;
    *(int *)((int)pvVar5 + 0xac) = piVar6[iVar17 * 4 + 7];
    fVar4 = (moby->pos).y - (float)piVar6[iVar13 * 4 + 5];
    fVar10 = (moby->pos).x - (float)piVar6[iVar13 * 4 + 4];
    fVar11 = (moby->pos).z - (float)piVar6[iVar13 * 4 + 6];
    fVar3 = *(float *)((int)pvVar5 + 0xf4);
    if (fVar3 <= SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar4 * fVar4)) {
      fVar4 = *(float *)((int)pvVar5 + 0xec);
      mobyutil::Delt(fVar4 * mobyutil::g_FrameTime,((fVar4 * fVar4) / fVar3) * DAT_0071f418 * 0.5,
                     (float *)((int)pvVar5 + 0xe4U));
    }
    else {
      mobyutil::Delt(mobyutil::g_FrameTime * 0.5,
                     ((*(float *)((int)pvVar5 + 0xec) * *(float *)((int)pvVar5 + 0xec)) / fVar3) *
                     DAT_0071f418 * 0.5,(float *)((int)pvVar5 + 0xe4U));
    }
    mobyutil::ClampVec3Magnitude
              ((double)*(float *)((int)pvVar5 + 0xe4),(Vec4 *)((int)pvVar5 + 0xa0));
    fVar3 = (moby->pos).x + *(float *)((int)pvVar5 + 0xa0);
    (moby->pos).x = fVar3;
    fVar4 = (moby->pos).y + *(float *)((int)pvVar5 + 0xa4);
    (moby->pos).y = fVar4;
    fVar10 = (moby->pos).z + *(float *)((int)pvVar5 + 0xa8);
    (moby->pos).z = fVar10;
    iVar13 = *(int *)((int)pvVar5 + 0xc0) + iVar17 * 0x10;
    fVar4 = fVar4 - *(float *)(iVar13 + 0x14);
    fVar3 = fVar3 - *(float *)(iVar13 + 0x10);
    fVar10 = fVar10 - *(float *)(iVar13 + 0x18);
    if ((SQRT(fVar10 * fVar10 + fVar3 * fVar3 + fVar4 * fVar4) <
         *(float *)((int)pvVar5 + 0xe4) * 2.0) &&
       (((*(int *)((int)pvVar5 + 0xb0) = iVar17, iVar17 == iVar14 + -1 ||
         (*(int *)((int)pvVar5 + 0x108) != 0)) && (0 < *(int *)((int)pvVar5 + 0xf0))))) {
      iVar14 = *(int *)((int)pvVar5 + 0x104);
      if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar14].state != '\0')) {
        sound::sound_Kill(iVar14);
      }
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      *(undefined4 *)((int)pvVar5 + 0x104) = 0xffffffff;
      auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      moby->state = '\x04';
      auVar26 = loadVectorLeftIndexed(0xf0,uVar18);
      auVar25 = loadVectorRightIndexed(0x100,uVar18);
      auVar25 = vectorConvertFromSignedFixedPointWord(auVar26 | auVar25,0);
      auVar26 = loadVectorLeftIndexed(0xc,0x4a70dc);
      auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar26 = vectorAddFloatingPoint
                          (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
      auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar27);
      auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
      auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xe8,uVar18);
      *(undefined4 *)((int)pvVar5 + 0xe8U & 0xfffffffc) = uVar8;
    }
  }
  else if (uVar2 == '\x02') {
    iVar14 = fastfunc::FastDecTimerS32(uVar18 + 0xe8);
    if (iVar14 != 0) {
      *(undefined4 *)((int)pvVar5 + 0x10c) = 0;
      moby->state = '\x01';
    }
  }
  else if (uVar2 == '\x01') {
    dVar24 = (double)*(float *)((int)pvVar5 + 0x114);
    dVar23 = 0.0;
    dVar19 = dVar23;
    if (((moby->oClass == MOVING_PLATFORM_MEDIUM) || (moby->oClass == MOVING_PLATFORM_SMALL)) &&
       (iVar14 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x104)), iVar14 == 0)) {
      iVar14 = sound::sound_MobyPlay_oClass(0,4,moby,0x389);
      *(int *)((int)pvVar5 + 0x104) = iVar14;
    }
    iVar14 = *(int *)((int)pvVar5 + 0x10c) + 1;
    *(int *)((int)pvVar5 + 0x10c) = iVar14;
    dVar22 = 240.5;
    uVar1 = (uint)(animationSpeed * 240.5);
    local_60 = (longlong)(int)uVar1;
    if ((int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) < iVar14) {
      iVar14 = uVar1 - iVar14;
      dVar24 = -dVar24;
      dVar19 = (double)*(float *)((int)pvVar5 + 0x110);
    }
    dVar20 = (double)fastfunc::FastIntToDouble(iVar14 * iVar14);
    piVar6 = *(int **)((int)pvVar5 + 0xc0);
    dVar19 = (double)(float)((double)(float)(dVar24 * 0.5) * dVar20 + dVar19);
    if (*(char *)((int)pvVar5 + 0xb4) < '\0') {
      dVar19 = (double)(float)((double)*(float *)((int)pvVar5 + 0x110) - dVar19);
    }
    fastfunc::FastVecSub(uVar12 - 0x80,piVar6 + *piVar6 * 4,piVar6 + 4);
    local_84 = local_74;
    dVar24 = (double)SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
    fVar3 = (float)(dVar19 / dVar24);
    dVar19 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar19 = (double)(local_80 * fVar3);
    }
    dVar20 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar20 = (double)(local_7c * fVar3);
    }
    dVar21 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar21 = (double)(local_78 * fVar3);
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar19 = (double)(local_80 * fVar3);
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar20 = (double)(local_7c * fVar3);
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar21 = (double)(local_78 * fVar3);
    }
    local_90 = (float)dVar19;
    local_8c = (float)dVar20;
    local_88 = (float)dVar21;
    fastfunc::FastVecAdd
              (uVar12 - 0x70,(ulonglong)*(uint *)((int)pvVar5 + 0xc0) + 0x10,uVar12 - 0x90);
    (moby->pos).x = local_70;
    (moby->pos).y = local_6c;
    (moby->pos).z = local_68;
    (moby->pos).w = local_64;
    local_60 = (longlong)(int)((double)animationSpeed * dVar22);
    if ((int)((double)animationSpeed * dVar22) <= *(int *)((int)pvVar5 + 0x10c)) {
      iVar14 = *(int *)((int)pvVar5 + 0x104);
      *(char *)((int)pvVar5 + 0xb4) = -*(char *)((int)pvVar5 + 0xb4);
      if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar14].state != '\0')) {
        sound::sound_Kill(iVar14);
      }
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      *(undefined4 *)((int)pvVar5 + 0x104) = 0xffffffff;
      auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      moby->state = '\x02';
      auVar26 = loadVectorLeftIndexed(0xf0,uVar18);
      auVar25 = loadVectorRightIndexed(0x100,uVar18);
      auVar25 = vectorConvertFromSignedFixedPointWord(auVar26 | auVar25,0);
      auVar26 = loadVectorLeftIndexed(0xc,0x4a70dc);
      auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar26 = vectorAddFloatingPoint
                          (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
      auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar27);
      auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
      auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xe8,uVar18);
      *(undefined4 *)((int)pvVar5 + 0xe8U & 0xfffffffc) = uVar8;
    }
  }
  else if (uVar2 == '\0') {
    pSVar7 = Splines[*(int *)((int)pvVar5 + 0xe0)];
    cVar16 = ((byte)((LZCOUNT(-*(int *)((int)pvVar5 + 0xf8)) << 0x3a) >> 0x3f) & 2) - 1;
    *(Spline **)((int)pvVar5 + 0xc0) = pSVar7;
    lVar15 = 0;
    *(char *)((int)pvVar5 + 0xb4) = cVar16;
    if (-1 < cVar16) {
      lVar15 = (ulonglong)(uint)pSVar7->cnt - 1;
    }
    iVar14 = (int)(lVar15 << 4);
    iVar13 = 0;
    (moby->pos).x = *(f32 *)((int)&pSVar7->points[0].x + iVar14);
    (moby->pos).y = *(f32 *)((int)&pSVar7->points[0].y + iVar14);
    (moby->pos).z = *(f32 *)((int)&pSVar7->points[0].z + iVar14);
    (moby->pos).w = *(f32 *)((int)&pSVar7->points[0].w + iVar14);
    if (-1 < *(char *)((int)pvVar5 + 0xb4)) {
      iVar13 = **(int **)((int)pvVar5 + 0xc0) + -1;
    }
    *(int *)((int)pvVar5 + 0xb0) = iVar13;
    fVar3 = moby->pClass->gScale;
    *(undefined4 *)((int)pvVar5 + 0x104) = 0xffffffff;
    moby->scale = fVar3 * *(float *)((int)pvVar5 + 0xfc);
    iVar14 = fastfunc::FastDecTimerS32(uVar18 + 0x100);
    if (iVar14 != 0) {
      piVar6 = *(int **)((int)pvVar5 + 0xc0);
      pfVar9 = (float *)(piVar6 + *piVar6 * 4);
      *(float *)((int)pvVar5 + 0x110) =
           SQRT(((float)piVar6[6] - pfVar9[2]) * ((float)piVar6[6] - pfVar9[2]) +
                ((float)piVar6[4] - *pfVar9) * ((float)piVar6[4] - *pfVar9) +
                ((float)piVar6[5] - pfVar9[1]) * ((float)piVar6[5] - pfVar9[1]));
      iVar14 = (int)(animationSpeed * 240.5);
      local_60 = (longlong)iVar14;
      dVar19 = (double)fastfunc::FastIntToDouble(iVar14 * iVar14);
      *(undefined4 *)((int)pvVar5 + 0x10c) = 0;
      *(float *)((int)pvVar5 + 0x114) =
           (float)((double)(*(float *)((int)pvVar5 + 0x110) * 4.0) / dVar19);
      moby->state = '\x01';
    }
  }
  local_b0.x = local_b0.x + (moby->pos).x;
  local_b0.y = local_b0.y + (moby->pos).y;
  local_b0.z = local_b0.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x60),&local_b0,uVar12 - 0xa0,(longlong)(int)moby + 0x40
            );
  return;
}



//==== 004a7980  ns=mobyupdate_helpers  size=0x14
// sig: undefined M928_004a7980(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M928_004a7980(void)

{
  DAT_008f3e7c = 0x10000;
  return;
}



//==== 004a79c0  ns=mobyupdate_helpers  size=0x5e4
// sig: undefined M908_004a79c0(void)
// callers(1): 004a8808 mobyupdate_unsorted::UpdateMoby_908
// callees(3): 000fc620 mobyutil::MB_randInt; 00126f50 partupd::SpawnPart_23; 00502758 fastfunc::FastDoubleToInt
// strings: 004a79a0: '?fffHCP' (raw)

void mobyupdate_helpers::M908_004a79c0(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  char cVar7;
  int iVar5;
  undefined1 uVar8;
  undefined8 uVar4;
  int iVar6;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 local_f0 [56];
  
  if ((*(char *)(param_1 + 0x20) != '\x02' && *(char *)(param_1 + 0x20) != '\0') &&
     (*(char *)(param_1 + 0x31) != '\0')) {
    iVar6 = 0;
    iVar10 = 0;
    uVar14 = 0x3fc99999a0000000;
    uVar15 = 0x3ff0000000000000;
    uVar16 = 0x3fecccccc0000000;
    uVar17 = 0x41086a0000000000;
    uVar18 = 0x4010000000000000;
    auVar22 = loadVectorLeftIndexed(0x10,0x4a7998);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    do {
      mobyutil::MB_randInt(0x10);
      mobyutil::MB_randInt(2);
      uVar3 = partupd::SpawnPart_23(uVar14,uVar15,uVar16,uVar17,local_f0);
      iVar5 = (int)uVar3;
      if (iVar5 != 0) {
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint(auVar21,auVar22,auVar20);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = vectorSplatHalfWord(auVar20,1);
        uVar2 = storeVectorElementHalfWordIndexed(auVar20,10,uVar3);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        cVar7 = fastfunc::FastDoubleToInt(uVar18);
        sVar1 = *(short *)(param_1 + 0x32);
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
        *(char *)(iVar5 + 9) = (char)(sVar1 >> 5) * '\x10' + cVar7;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    iVar6 = 0;
    dVar13 = 2.5;
    dVar11 = 100000.0;
    uVar9 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
    uVar3 = 0x3fa99999a0000000;
    dVar19 = 20000.0;
    dVar12 = dVar11;
    do {
      iVar5 = partupd::SpawnPart_23(uVar3,uVar15,uVar15,dVar11,local_f0);
      if (iVar5 != 0) {
        cVar7 = fastfunc::FastDoubleToInt(uVar18);
        sVar1 = *(short *)(param_1 + 0x32);
        *(short *)(iVar5 + 10) = (short)uVar9;
        *(char *)(iVar5 + 9) = (char)(sVar1 >> 5) * '\x10' + cVar7;
        uVar8 = mobyutil::MB_randInt(0xff);
        *(undefined1 *)(iVar5 + 8) = uVar8;
        *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
      }
      iVar6 = iVar6 + 1;
      dVar11 = (double)(float)(dVar11 - dVar19);
      uVar9 = uVar9 << 1;
    } while (iVar6 < 3);
    iVar6 = 0;
    do {
      mobyutil::MB_randInt(0x10);
      mobyutil::MB_randInt(2);
      uVar4 = partupd::SpawnPart_23(uVar14,uVar15,uVar16,uVar17,local_f0);
      iVar5 = (int)uVar4;
      if (iVar5 != 0) {
        cVar7 = fastfunc::FastDoubleToInt(uVar18);
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        *(char *)(iVar5 + 9) = (char)(*(short *)(param_1 + 0x32) >> 5) * '\x10' + cVar7;
        auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint(auVar21,auVar22,auVar20);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar21 = vectorSplatHalfWord(auVar20,1);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar21,10,uVar4);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        uVar8 = storeVectorElementByteIndexed
                          (auVar20 | auVar20 << 8 | auVar20 << 0x10 | auVar20 << 0x18 |
                           auVar20 << 0x20 | auVar20 << 0x28 | auVar20 << 0x30 | auVar20 << 0x38 |
                           auVar20 << 0x40 | auVar20 << 0x48 | auVar20 << 0x50 | auVar20 << 0x58 |
                           auVar20 << 0x60 | auVar20 << 0x68 | auVar20 << 0x70 | auVar20 << 0x78,
                           0x2b,uVar4);
        *(undefined1 *)(iVar5 + 0x2b) = uVar8;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    uVar9 = (ulonglong)(uint)(int)((double)animationSpeed * dVar13);
    do {
      iVar6 = partupd::SpawnPart_23(uVar3,uVar15,uVar15,dVar12,local_f0);
      if (iVar6 != 0) {
        cVar7 = fastfunc::FastDoubleToInt(uVar18);
        sVar1 = *(short *)(param_1 + 0x32);
        *(short *)(iVar6 + 10) = (short)uVar9;
        *(char *)(iVar6 + 9) = (char)(sVar1 >> 5) * '\x10' + cVar7;
        uVar8 = mobyutil::MB_randInt(0xff);
        *(undefined1 *)(iVar6 + 8) = uVar8;
        *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
        *(undefined4 *)(iVar6 + 0x24) = 2;
        *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
      }
      iVar10 = iVar10 + 1;
      dVar12 = (double)(float)(dVar12 - dVar19);
      uVar9 = uVar9 << 1;
    } while (iVar10 < 3);
  }
  return;
}



//==== 004a7fc0  ns=mobyupdate_helpers  size=0x590
// sig: undefined M908_004a7fc0(void)
// callers(1): 004a8808 mobyupdate_unsorted::UpdateMoby_908
// callees(4): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist; 005025e0 fastfunc::FastDiffRots

double mobyupdate_helpers::M908_004a7fc0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar13;
  float *pfVar14;
  longlong lVar12;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar21;
  ulonglong in_f26;
  double dVar22;
  double dVar23;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  float fVar28;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0x140;
  puVar7 = (ulonglong *)lVar10;
  *puVar7 = uVar9;
  puVar7[0x2a] = in_LR;
  puVar7[0x20] = in_f24;
  puVar7[0x21] = in_f25;
  puVar7[0x22] = in_f26;
  puVar7[0x23] = in_f27;
  puVar7[0x24] = in_f28;
  puVar7[0x25] = in_f29;
  puVar7[0x26] = in_f30;
  puVar7[0x27] = in_f31;
  puVar7[0x1f] = unaff_r31;
  puVar7[0x1e] = unaff_r30;
  puVar7[0x1d] = unaff_r29;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar13 = *(int *)(iVar6 + 0x68);
  fVar28 = mobyutil::g_FrameTime * DAT_008f3eb8;
  lVar11 = uVar9 - 0xd0;
  puVar7[0x1c] = unaff_r28;
  puVar7[0x1b] = unaff_r27;
  mobyutil::MB_PathMoveDist
            ((double)fVar28,Splines[iVar13],lVar11,iVar6 + 0x60,iVar6 + 100,iVar13 * 4,1);
  dVar21 = 0.0;
  iVar13 = (int)lVar11;
  mobyutil::AccelDelt(*(float *)(puVar7 + 0xe),DAT_008f3ebc,DAT_008f3ec0,0.0,
                      (float *)(param_1 + 0x10),iVar13,(float *)(iVar6 + 0x70));
  mobyutil::AccelDelt(*(float *)((int)puVar7 + 0x74),DAT_008f3ebc,DAT_008f3ec0,(float)dVar21,
                      (float *)(param_1 + 0x14),iVar13,(float *)(iVar6 + 0x74));
  mobyutil::AccelDelt(*(float *)(puVar7 + 0xf),DAT_008f3ebc,DAT_008f3ec0,(float)dVar21,
                      (float *)(param_1 + 0x18),iVar13,(float *)(iVar6 + 0x78));
  fVar28 = *(float *)(puVar7 + 0xe) - *(float *)(param_1 + 0x10);
  dVar26 = (double)fVar28;
  dVar27 = (double)*(float *)(puVar7 + 0xf);
  fVar1 = *(float *)((int)puVar7 + 0x74) - *(float *)(param_1 + 0x14);
  dVar25 = (double)fVar1;
  dVar24 = (double)*(float *)(param_1 + 0x18);
  dVar18 = (double)*(float *)(param_1 + 0x48);
  dVar22 = ABS(dVar26);
  if ((0.009999999776482582 < dVar22) && (dVar19 = ABS(dVar25), 0.009999999776482582 < dVar19)) {
    *(float *)((int)puVar7 + 0x8c) = fVar28;
    *(float *)(puVar7 + 0x12) = fVar1;
    *(float *)((int)puVar7 + 0x94) = (float)(dVar22 - dVar19);
    uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
    dVar20 = ABS((double)*(float *)((int)puVar7 + 0x8c));
    if ((double)*(float *)((int)puVar7 + 0x94) - dVar21 < 0.0) {
      dVar20 = dVar19;
    }
    fVar28 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    dVar19 = ABS((double)*(float *)(puVar7 + 0x12));
    if ((double)*(float *)((int)puVar7 + 0x94) - dVar21 < 0.0) {
      dVar19 = dVar22;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    dVar23 = 0.7853981852531433;
    dVar22 = dVar21;
    if (dVar21 < dVar20) {
      lVar11 = uVar9 - 0x130;
      lVar12 = uVar9 - 0x88;
      lVar16 = uVar9 - 0x78;
      lVar17 = 2;
      fVar2 = (float)(dVar19 - dVar20) / (float)(dVar19 + dVar20);
      fVar5 = fVar2 * fVar2;
      *(float *)((int)puVar7 + 0xc4) = fVar2;
      *(float *)((int)puVar7 + 0xbc) = fVar2;
      *(float *)(puVar7 + 0x18) = fVar2;
      *(float *)(puVar7 + 0x17) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar5;
      *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar2;
      *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar2 * fVar2;
        iVar13 = (int)lVar12;
        lVar11 = lVar11 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar9 - 0x88;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar10;
      lVar12 = lVar16;
      do {
        fVar2 = *pfVar14;
        fVar5 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar2;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar5;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar12 = 2;
      lVar11 = lVar10;
      do {
        iVar13 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar13 + 0xb8)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar28 + fVar1);
    }
    dVar19 = (double)fastfunc::FastDiffRots(dVar18,dVar22);
    mobyutil::OrganicDeltAngSpeed(dVar22,(double)DAT_008f3ebc,(double)DAT_008f3ec0,dVar21,param_1);
    fVar2 = DAT_008f3ec0;
    fVar1 = DAT_008f3ebc;
    dVar22 = ABS((double)(float)(dVar27 - dVar24));
    *(float *)((int)puVar7 + 0x84) = (float)(dVar27 - dVar24);
    fVar28 = SQRT((float)(dVar26 * dVar26 + (double)(float)(dVar25 * dVar25)));
    dVar27 = ABS((double)fVar28);
    *(float *)(puVar7 + 0x10) = fVar28;
    *(float *)(puVar7 + 0x11) = (float)(dVar27 - dVar22);
    uVar15 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
    pfVar14 = (float *)((uint)(uVar15 << 2) | 0x735900);
    dVar18 = ABS((double)*(float *)(puVar7 + 0x10));
    if ((double)*(float *)(puVar7 + 0x11) - dVar21 < 0.0) {
      dVar18 = dVar22;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar28 = pfVar14[1];
    dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
    if ((double)*(float *)(puVar7 + 0x11) - dVar21 < 0.0) {
      dVar22 = dVar27;
    }
    dVar27 = dVar21;
    if (dVar21 < dVar18) {
      lVar11 = uVar9 - 0x130;
      lVar12 = uVar9 - 0xa8;
      lVar16 = uVar9 - 0x98;
      lVar17 = 2;
      fVar3 = (float)(dVar22 - dVar18) / (float)(dVar22 + dVar18);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0xa4) = fVar3;
      *(float *)((int)puVar7 + 0x9c) = fVar3;
      *(float *)(puVar7 + 0x14) = fVar3;
      *(float *)(puVar7 + 0x13) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar4;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar3;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar3 * fVar3;
        iVar13 = (int)lVar12;
        lVar11 = lVar11 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar9 - 0xa8;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar10;
      lVar12 = lVar16;
      do {
        fVar3 = *pfVar14;
        fVar4 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar3;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar4;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar11 = 2;
      dVar18 = dVar21;
      do {
        iVar13 = (int)lVar10;
        lVar10 = lVar10 + 0x10;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar13 + 0x98)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar27 = (double)((float)(dVar18 + dVar23) * fVar5 + fVar28);
    }
    mobyutil::AccelDelt((float)-dVar27,fVar1,fVar2,(float)dVar21,(float *)(param_1 + 0x44),
                        (int)pfVar14,(float *)(iVar6 + 0x84));
    fVar28 = (float)(dVar19 / (double)DAT_008f3ec8);
    if (1.0 - (float)(dVar19 / (double)DAT_008f3ec8) < 0.0) {
      fVar28 = 1.0;
    }
    if (fVar28 - -1.0 < 0.0) {
      fVar28 = -1.0;
    }
    fVar28 = mobyutil::AccelDelt(DAT_008f3ec4 * fVar28,0.003,DAT_008f3ec0,(float)dVar21,
                                 (float *)(param_1 + 0x40),0x4a7fa4,(float *)(iVar6 + 0x80));
    dVar18 = (double)fVar28;
  }
  return dVar18;
}



//==== 004a8558  ns=mobyupdate_helpers  size=0x298
// sig: undefined M908_004a8558(void)
// callers(1): 004a8808 mobyupdate_unsorted::UpdateMoby_908
// callees(0): 

void mobyupdate_helpers::M908_004a8558(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  ulonglong uVar11;
  Spline *pSVar13;
  longlong lVar12;
  int iVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x60;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar11;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar15 = 0;
  pSVar8 = Splines[*(int *)(iVar6 + 0x68)];
  pSVar13 = pSVar8;
  if (0 < pSVar8->cnt + -1) {
    do {
      fVar1 = pSVar13->points[0].y - pSVar13->points[1].y;
      fVar2 = pSVar13->points[0].x - pSVar13->points[1].x;
      fVar3 = pSVar13->points[0].z - pSVar13->points[1].z;
      iVar7 = pSVar8->cnt;
      iVar15 = iVar15 + 1;
      pSVar13->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      pSVar13 = (Spline *)pSVar13->points;
    } while (iVar15 < iVar7 + -1);
  }
  *(undefined4 *)(iVar6 + 0x60) = 0;
  fVar1 = 0.0;
  *(undefined4 *)(iVar6 + 100) = 0;
  fVar2 = pSVar8->points[0].x;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = pSVar8->points[0].y;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = pSVar8->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar8->points[0].w;
  fVar2 = pSVar8->points[1].x - fVar2;
  fVar3 = pSVar8->points[1].y - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar9 + 6) = fVar2;
  *(float *)((int)puVar9 + 0x34) = fVar3;
  *(float *)(puVar9 + 7) = fVar4 - fVar5;
  uVar16 = (ulonglong)(*(uint *)(puVar9 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar9 + 6));
  if (*(float *)(puVar9 + 7) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar9 + 0x34));
  if (*(float *)(puVar9 + 7) - 0.0 < 0.0) {
    fVar10 = fVar4;
  }
  if (0.0 < fVar2) {
    lVar18 = uVar11 - 0x50;
    lVar14 = uVar11 - 0x14;
    lVar17 = uVar11 - 0x24;
    lVar20 = 2;
    fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar9 + 9) = fVar2;
    *(float *)(puVar9 + 8) = fVar2;
    *(float *)((int)puVar9 + 0x44) = fVar2;
    *(float *)((int)puVar9 + 0x3c) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar9 + 8) = *(float *)(puVar9 + 8) * fVar4;
    *(float *)((int)puVar9 + 0x44) = *(float *)((int)puVar9 + 0x44) * fVar2;
    *(float *)(puVar9 + 9) = *(float *)(puVar9 + 9) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x3c) = *(float *)((int)lVar18 + 0x2c) * fVar2 * fVar2;
      iVar15 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
      lVar14 = lVar14 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar11 - 0x24;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar18;
    lVar17 = lVar12;
    do {
      fVar2 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x3c) = *(float *)((int)lVar17 + 0x3c) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar15 = (int)lVar12;
      iVar7 = (int)lVar18;
      lVar12 = lVar12 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar15 + 0x3c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
              *(float *)(iVar7 + 0xc);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(iVar6 + 0x78) = 0;
  *(undefined4 *)(iVar6 + 0x74) = 0;
  *(undefined4 *)(iVar6 + 0x70) = 0;
  *(undefined4 *)(iVar6 + 0x88) = 0;
  *(undefined4 *)(iVar6 + 0x84) = 0;
  *(undefined4 *)(iVar6 + 0x80) = 0;
  return;
}



//==== 004a8808  ns=mobyupdate_unsorted  size=0x54c
// sig: undefined UpdateMoby_908(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0011b728 mobyutil::MB_UnlockSkillPoint; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004a79c0 mobyupdate_helpers::M908_004a79c0; 004a7fc0 mobyupdate_helpers::M908_004a7fc0; 004a8558 mobyupdate_helpers::M908_004a8558; 004fff60 fastfunc::FastDecTimerS32; 005cd098 libc::printf
// strings: 0065891c: 'Enemy Fighter (moby908) with no flyPath. UID: %d - RAR\n' | 00658954: 'Enemy Fighter (moby908) with a flyPath that has no points. UID: %d - RAR\n'

/* Moby 908 */

void mobyupdate_unsorted::UpdateMoby_908(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  Spline *pSVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar15;
  longlong lVar14;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xb0;
  puVar10 = (ulonglong *)lVar14;
  *puVar10 = uVar12;
  puVar10[0x18] = in_LR;
  puVar10[0x15] = unaff_r31;
  puVar10[0x14] = unaff_r30;
  pvVar7 = moby->pVar;
  uVar20 = ZEXT48(pvVar7);
  iVar15 = mobyutil::MB_damage(lVar13,0x800000,0);
  moby->damage = -1;
  if ((iVar15 != 0) && (moby->state != '\x02')) {
    if ((Level == Oltanis) &&
       (ShipsKilledCounts.Oltanis = ShipsKilledCounts.Oltanis + 1, 2 < ShipsKilledCounts.Oltanis)) {
      mobyutil::MB_UnlockSkillPoint(0x18);
    }
    moby->state = '\x02';
    mobyutil::MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_004a87f0,
               0xffffffffffffffff);
    iVar15 = *(int *)((int)pvVar7 + 0x6c);
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    if (((iVar15 != -1) && (sound::g_SoundChannels[iVar15].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar15].state != '\0')) {
      sound::sound_Kill(iVar15);
    }
    *(undefined4 *)((int)pvVar7 + 0x6c) = 0xffffffff;
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (*(int *)((int)pvVar7 + 0x68) == -1) {
      libc::printf("Enemy Fighter (moby908) with no flyPath. UID: %d - RAR\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (Splines[*(int *)((int)pvVar7 + 0x68)]->cnt == 0) {
      libc::printf("Enemy Fighter (moby908) with a flyPath that has no points. UID: %d - RAR\n",
                   moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    mobyupdate_helpers::M908_004a8558(lVar13);
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    moby->state = '\x01';
    moby->updateDistance = -1;
    *(undefined4 *)((int)pvVar7 + 0x6c) = 0xffffffff;
    moby->drawDistance = 0xff;
    auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0x3ecc,0x8f0000);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar23,0);
    auVar23 = loadVectorLeftIndexed(8,0x4a87f0);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar23 = vectorAddFloatingPoint
                        (auVar22,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar25,auVar23,auVar24);
    auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x7c,uVar20);
    *(undefined4 *)((int)pvVar7 + 0x7cU & 0xfffffffc) = uVar9;
  }
  else if (bVar1 < 2) {
    mobyupdate_helpers::M908_004a7fc0(lVar13);
  }
  else if ((bVar1 < 3) && (iVar15 = fastfunc::FastDecTimerS32(uVar20 + 0x7c), iVar15 != 0)) {
    iVar15 = *(int *)((int)pvVar7 + 0x68);
    auVar23 = ZEXT416(0xffffffff);
    auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = loadVectorLeftIndexed(0x3ecc,0x8f0000);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar23,0);
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    pSVar8 = Splines[iVar15];
    moby->collision = moby->pClass->collision;
    auVar23 = loadVectorLeftIndexed(8,0x4a87f0);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = vectorAddFloatingPoint
                        (auVar22,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
    auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar22,auVar23,auVar24);
    auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x7c,uVar20);
    *(undefined4 *)((int)pvVar7 + 0x7cU & 0xfffffffc) = uVar9;
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar7 + 0x60) = 0;
    fVar2 = 0.0;
    *(undefined4 *)((int)pvVar7 + 100) = 0;
    fVar3 = pSVar8->points[0].x;
    (moby->pos).x = fVar3;
    fVar4 = pSVar8->points[0].y;
    (moby->pos).y = fVar4;
    (moby->pos).z = pSVar8->points[0].z;
    (moby->pos).w = pSVar8->points[0].w;
    fVar3 = pSVar8->points[1].x - fVar3;
    fVar4 = pSVar8->points[1].y - fVar4;
    fVar5 = ABS(fVar3);
    fVar6 = ABS(fVar4);
    *(float *)(puVar10 + 0xe) = fVar3;
    *(float *)((int)puVar10 + 0x74) = fVar4;
    *(float *)(puVar10 + 0xf) = fVar5 - fVar6;
    uVar20 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar10 + 0xe));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar6 = ABS(*(float *)((int)puVar10 + 0x74));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar18 = uVar12 - 0xa0;
      lVar17 = uVar12 - 0x34;
      lVar16 = uVar12 - 0x24;
      lVar21 = 2;
      fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar10 + 0x11) = fVar3;
      *(float *)(puVar10 + 0x10) = fVar3;
      *(float *)((int)puVar10 + 0x84) = fVar3;
      *(float *)((int)puVar10 + 0x7c) = fVar3;
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar6;
      *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar3;
      *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar3 * fVar6;
      do {
        *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar3 * fVar3;
        iVar15 = (int)lVar17;
        lVar18 = lVar18 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = uVar12 - 0x34;
      pfVar19 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar3 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = 2;
      do {
        iVar15 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar11 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar15 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar4 + fVar5;
    }
    (moby->rotation).z = fVar2;
    *(undefined4 *)((int)pvVar7 + 0x78) = 0;
    *(undefined4 *)((int)pvVar7 + 0x74) = 0;
    *(undefined4 *)((int)pvVar7 + 0x70) = 0;
    *(undefined4 *)((int)pvVar7 + 0x88) = 0;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0;
    *(undefined4 *)((int)pvVar7 + 0x80) = 0;
  }
  mobyupdate_helpers::M908_004a79c0(lVar13);
  if (((moby->state != '\0') && (moby->state != '\x02')) &&
     (iVar15 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar7 + 0x6c)), iVar15 == 0)) {
    iVar15 = sound::PlayMobySound(0,4,moby);
    *(int *)((int)pvVar7 + 0x6c) = iVar15;
  }
  return;
}



//==== 004a8d54  ns=mobyupdate_helpers  size=0x14
// sig: undefined M909_004a8d54(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M909_004a8d54(void)

{
  DAT_008f3f1c = 0x10000;
  return;
}



//==== 004a8d68  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M909_004a8d68(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M909_004a8d68(int param_1)

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
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008f3f40;
          DAT_00a1bfa4 = DAT_008f3f40;
          DAT_00a1bfa8 = DAT_008f3f40;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}



//==== 004a8ec0  ns=mobyupdate_unsorted  size=0xea4
// sig: undefined UpdateMoby_909(MobyInstance * moby)
// callers(0): 
// callees(19): 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00106308 mobyutil::MB_SetZBoundsFromPos; 00112a38 mobyutil::MB_ToastMessage; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 909 */

void mobyupdate_unsorted::UpdateMoby_909(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  gameMode_t gVar15;
  MobyInstance *pMVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar21;
  undefined4 uVar22;
  longlong lVar19;
  longlong lVar20;
  short sVar25;
  float *pfVar24;
  longlong lVar23;
  longlong lVar26;
  ulonglong unaff_r26;
  undefined4 *puVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar34;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  double dVar37;
  ulonglong in_f31;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x150;
  puVar10 = (ulonglong *)lVar20;
  *puVar10 = uVar17;
  puVar10[0x2c] = in_LR;
  puVar10[0x25] = in_f27;
  puVar10[0x26] = in_f28;
  puVar10[0x27] = in_f29;
  puVar10[0x28] = in_f30;
  puVar10[0x29] = in_f31;
  puVar10[0x24] = unaff_r31;
  puVar10[0x23] = unaff_r30;
  gVar15 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar28 = ZEXT48(pvVar9);
  puVar10[0x22] = unaff_r29;
  puVar10[0x21] = unaff_r28;
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if ((gVar15 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar21 = 0;
    puVar27 = &DAT_0095cd50;
    sVar25 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar27[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar27[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008f3f40;
          DAT_00a1bfa4 = DAT_008f3f40;
          DAT_00a1bfa8 = DAT_008f3f40;
          sVar25 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar21 = iVar21 + 1;
        puVar27 = puVar27 + 1;
      } while (iVar21 < sVar25);
    }
  }
  bVar2 = moby->state;
  if (bVar2 == 0) {
    bVar1 = g_KeyLevelFlags._332_4_ != 0;
    if (!bVar1) {
      dVar30 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
      (moby->rotation).z = (float)dVar30;
    }
    *(uint *)((int)pvVar9 + 0x140) = (uint)bVar1;
    if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) &&
        (iVar21 = *(int *)((int)pvVar9 + 0x148), iVar21 != -1)) &&
       (MobyInstance[iVar21].oClass == TAXI_03F4)) {
      *(undefined4 *)((int)MobyInstance[iVar21].pVar + 0x8c) = 1;
    }
    uVar13 = g_heroMobyPtr->color;
    uVar14 = g_heroMobyPtr->light;
    moby->state = '\x01';
    moby->color = uVar13;
    moby->light = uVar14;
    FUN_004d3720(moby,uVar28);
    mobyutil::MB_SetZBoundsFromPos(moby);
    if (UnlockableItems.heliPack != '\0') {
      *(undefined2 *)((int)pvVar9 + 0x36) = 0xffff;
    }
  }
  else if (bVar2 < 2) {
    if ((((UnlockableItems.heliPack != '\0') &&
         (iVar21 = *(int *)((int)pvVar9 + 0x144), iVar21 != -1)) &&
        (MobyInstance[iVar21].oClass == GARAGE_DOOR)) && (MobyInstance[iVar21].state == '\0')) {
      MobyInstance[iVar21].state = '\x01';
      pMVar16 = MobyInstance;
      (&DAT_00a53964)[(short)MobyInstance[*(int *)((int)pvVar9 + 0x144)].uid] =
           MobyInstance[*(int *)((int)pvVar9 + 0x144)].levelFlagIdx + '\x02';
      bVar2 = pMVar16[*(int *)((int)pvVar9 + 0x144)].levelFlagIdx;
      if ((bVar2 == 0xff) || (((&DAT_00a202c0)[bVar2] != -1 && (g_LevelFlags[Level][bVar2] == -1))))
      {
        (&DAT_00a545c4)[(short)pMVar16[*(int *)((int)pvVar9 + 0x144)].uid] = bVar2 + 2;
      }
    }
    if (((UnlockableItems.heliPack == '\0') || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)
        ) && (iVar21 = FUN_004d3870(moby,uVar28), iVar21 != 0)) {
      if (*(int *)((int)pvVar9 + 0x140) == 0) {
        dVar30 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
        (moby->rotation).z = (float)dVar30;
        *(undefined4 *)((int)pvVar9 + 0x140) = 1;
      }
      mobyutil::MB_SetPointAheadOfMoby(0x40059999a0000000,moby);
      moby->state = '\x02';
      moby->unk58 = 0.0;
    }
  }
  else if ((bVar2 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    sVar25 = *(short *)((int)pvVar9 + 4);
    moby->unk58 = 1.0;
    if (sVar25 != 2) {
      mobyfunc::SetLevelFlag(moby->levelFlagIdx);
      iVar21 = *(int *)((int)pvVar9 + 0x148);
      if ((iVar21 != -1) && (MobyInstance[iVar21].oClass == TAXI_03F4)) {
        *(undefined4 *)((int)MobyInstance[iVar21].pVar + 0x8c) = 1;
      }
      iVar21 = *(int *)((int)pvVar9 + 0x14c);
      if (iVar21 != -1) {
        respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar21].pos,(Vec4 *)&Cuboids[iVar21].rot);
      }
    }
    moby->state = '\x01';
    if (*(short *)((int)pvVar9 + 4) == 2) {
      mobyutil::MB_UnlockItem(2,1);
      mobyutil::MB_ToastMessage(0xbc7,0xffffffffffffffff);
      iVar21 = *(int *)((int)pvVar9 + 0x144);
      if (((iVar21 != -1) && (MobyInstance[iVar21].oClass == GARAGE_DOOR)) &&
         (MobyInstance[iVar21].state == '\0')) {
        MobyInstance[iVar21].state = '\x01';
        pMVar16 = MobyInstance;
        (&DAT_00a53964)[(short)MobyInstance[*(int *)((int)pvVar9 + 0x144)].uid] =
             MobyInstance[*(int *)((int)pvVar9 + 0x144)].levelFlagIdx + '\x02';
        bVar2 = pMVar16[*(int *)((int)pvVar9 + 0x144)].levelFlagIdx;
        if ((bVar2 == 0xff) ||
           (((&DAT_00a202c0)[bVar2] != -1 && (g_LevelFlags[Level][bVar2] == -1)))) {
          (&DAT_00a545c4)[(short)pMVar16[*(int *)((int)pvVar9 + 0x144)].uid] = bVar2 + 2;
        }
      }
      iVar21 = *(int *)((int)pvVar9 + 0x14c);
      if (iVar21 != -1) {
        respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar21].pos,(Vec4 *)&Cuboids[iVar21].rot);
      }
      memcard::memcard_Save(0,-1);
      hero::Hero_Warp(&Cuboids[*(int *)((int)pvVar9 + 0x14c)].pos.x,
                      &Cuboids[*(int *)((int)pvVar9 + 0x14c)].rot.x,0,1);
    }
  }
  dVar30 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004a9cc0;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
LAB_004a9774:
    if (*(int *)((int)pvVar9 + 0x164) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x164) = 0;
      *(float *)((int)pvVar9 + 0x150) = hero::g_heroCGPos;
      *(float *)((int)pvVar9 + 0x154) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x158) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x15c) = DAT_00969dbc;
    }
  }
  else {
    fVar4 = hero::g_heroCGPos - fVar4;
    fVar3 = DAT_00969db4 - fVar3;
    fVar6 = ABS(fVar4);
    fVar5 = ABS(fVar3);
    *(float *)(puVar10 + 0x11) = fVar4;
    *(float *)((int)puVar10 + 0x8c) = fVar3;
    fVar3 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar6 - fVar5;
    fVar4 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar6;
    }
    if (0.0 < fVar7) {
      lVar19 = uVar17 - 0x140;
      lVar26 = uVar17 - 0x6c;
      lVar23 = uVar17 - 0x7c;
      lVar29 = 2;
      fVar6 = (fVar11 - fVar7) / (fVar11 + fVar7);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1c) = fVar6;
      *(float *)(puVar10 + 0x1b) = fVar6;
      *(float *)((int)puVar10 + 0xdc) = fVar6;
      *(float *)((int)puVar10 + 0xd4) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar7;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar6;
      *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar19 + 0xd4) = *(float *)((int)lVar19 + 0xc4) * fVar6 * fVar6;
        iVar21 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar17 - 0x7c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar23 = lVar26;
      do {
        fVar6 = *pfVar24;
        fVar7 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar19 + 0xd4) = *(float *)((int)lVar19 + 0xd4) * fVar6;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
        lVar23 = lVar23 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar23 = 2;
      lVar19 = lVar20;
      do {
        iVar21 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar12 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar21 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
    }
    dVar31 = (double)fastfunc::FastSubRots(fVar3,fVar4);
    if (1.5707963705062866 <= dVar31) goto LAB_004a9774;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar28 + 0x164);
    }
    else {
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar38 = loadVectorLeftIndexed(0x20,0x4a8e60);
      auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar38 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                           auVar39);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
      auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar22 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x164,uVar28
                         );
      *(undefined4 *)((int)pvVar9 + 0x164U & 0xfffffffc) = uVar22;
    }
  }
  iVar21 = fastfunc::FastDecTimerS32(uVar28 + 0x168);
  if (iVar21 != 0) {
    dVar31 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar22 = fastfunc::FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x168) = uVar22;
    dVar36 = (double)(moby->rotation).z;
    dVar31 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar34 = 0.01745329238474369;
    dVar31 = (double)fastfunc::FastWrapRot((float)dVar36,(float)(dVar31 * 0.01745329238474369));
    dVar36 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar31,(float)(dVar36 * dVar34),(float *)((int)pvVar9 + 0x150));
    *(float *)((int)pvVar9 + 0x150) = *(float *)((int)pvVar9 + 0x150) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x154) = *(float *)((int)pvVar9 + 0x154) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x158) = *(float *)((int)pvVar9 + 0x158) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x164) == 0) {
    fVar3 = *(float *)((int)pvVar9 + 0x150);
    fVar4 = *(float *)((int)pvVar9 + 0x154);
    fVar6 = *(float *)((int)pvVar9 + 0x158);
  }
  else {
    dVar30 = 0.03999999910593033;
    fVar3 = hero::g_heroCGPos;
    fVar4 = DAT_00969db4;
    fVar6 = DAT_00969db8;
  }
  fVar3 = fVar3 - (moby->pos).x;
  dVar37 = (double)fVar3;
  fVar4 = fVar4 - (moby->pos).y;
  dVar35 = (double)fVar4;
  *(float *)((int)puVar10 + 0x7c) = fVar3;
  *(float *)(puVar10 + 0x10) = fVar4;
  dVar34 = (double)(fVar6 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar37) - ABS(dVar35));
  dVar36 = 0.0;
  uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar31 = ABS(dVar35);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  dVar33 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar33 = ABS(dVar37);
  }
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar32 = dVar36;
  if (0.0 < dVar31) {
    lVar19 = uVar17 - 0x140;
    lVar23 = uVar17 - 0x9c;
    lVar26 = uVar17 - 0x8c;
    lVar29 = 2;
    fVar6 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x18) = fVar6;
    *(float *)(puVar10 + 0x17) = fVar6;
    *(float *)((int)puVar10 + 0xbc) = fVar6;
    *(float *)((int)puVar10 + 0xb4) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar7;
    *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar6;
    *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar19 + 0xb4) = *(float *)((int)lVar19 + 0xa4) * fVar6 * fVar6;
      iVar21 = (int)lVar23;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
      lVar26 = lVar26 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar26 = uVar17 - 0x9c;
    pfVar24 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar23 = lVar26;
    do {
      fVar6 = *pfVar24;
      fVar7 = pfVar24[1];
      pfVar24 = pfVar24 + 2;
      *(float *)((int)lVar19 + 0xb4) = *(float *)((int)lVar19 + 0xb4) * fVar6;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
      lVar23 = lVar23 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar23 = 2;
    lVar19 = lVar20;
    dVar31 = dVar36;
    do {
      iVar21 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      iVar12 = (int)lVar26;
      lVar26 = lVar26 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    dVar32 = (double)((float)(dVar31 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar33 = (double)fastfunc::FastDiffRots(dVar32,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar34;
  fVar3 = SQRT((float)(dVar37 * dVar37 + (double)(float)(dVar35 * dVar35)));
  dVar35 = ABS((double)fVar3);
  *(float *)(puVar10 + 0xe) = fVar3;
  *(float *)(puVar10 + 0xf) = (float)(dVar35 - ABS(dVar34));
  uVar18 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar36 < 0.0) {
    dVar31 = ABS(dVar34);
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar34 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar36 < 0.0) {
    dVar34 = dVar35;
  }
  if (dVar36 < dVar31) {
    lVar19 = uVar17 - 0x140;
    lVar26 = uVar17 - 0xac;
    lVar23 = uVar17 - 0xbc;
    lVar29 = 2;
    fVar6 = (float)(dVar34 - dVar31) / (float)(dVar34 + dVar31);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x14) = fVar6;
    *(float *)(puVar10 + 0x13) = fVar6;
    *(float *)((int)puVar10 + 0x9c) = fVar6;
    *(float *)((int)puVar10 + 0x94) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar7;
    *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar6;
    *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x84) * fVar6 * fVar6;
      iVar21 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
      lVar26 = lVar26 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar26 = uVar17 - 0xbc;
    pfVar24 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar23 = lVar26;
    do {
      fVar6 = *pfVar24;
      fVar7 = pfVar24[1];
      pfVar24 = pfVar24 + 2;
      *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x94) * fVar6;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
      lVar23 = lVar23 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar19 = 2;
    do {
      iVar21 = (int)lVar20;
      iVar12 = (int)lVar26;
      lVar20 = lVar20 + 0x10;
      lVar26 = lVar26 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar21 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar4 + fVar3);
  }
  dVar36 = -dVar36;
  dVar31 = 1.5707963705062866;
  if ((dVar33 <= 1.5707963705062866) && (dVar31 = dVar33, dVar33 < -1.5707963705062866)) {
    dVar31 = -1.5707963705062866;
  }
  dVar34 = 0.5235987901687622;
  if ((dVar36 <= 0.5235987901687622) && (dVar34 = dVar36, dVar36 < -0.5235987901687622)) {
    dVar34 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 0xa4) = (float)dVar34;
  *(float *)((int)pvVar9 + 0xa8) = (float)(dVar31 * 0.5);
  *(float *)((int)pvVar9 + 0x128) = (float)(dVar31 * 0.5);
LAB_004a9cc0:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xb0) = 0x40300000;
  }
  dVar31 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar30),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar28 + 0x40,1);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar30),
             (double)(float)((double)DAT_0071f40c * dVar31),moby,uVar28 + 0xc0,0);
  return;
}



//==== 004a9d64  ns=mobyupdate_helpers  size=0x14
// sig: undefined M910_004a9d64(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M910_004a9d64(void)

{
  DAT_008f3f90 = 0x10000;
  return;
}



//==== 004a9d90  ns=mobyupdate_helpers  size=0x6f8
// sig: undefined M910_004a9d90(void)
// callers(1): 004aad50 mobyupdate_unsorted::UpdateMoby_910
// callees(3): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

double mobyupdate_helpers::M910_004a9d90(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  int iVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong unaff_r28;
  longlong lVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ushort *puVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar22 = uVar19 - 0x150;
  puVar13 = (ulonglong *)lVar22;
  *puVar13 = uVar19;
  puVar13[0x2c] = in_LR;
  puVar13[0x24] = in_f26;
  puVar13[0x25] = in_f27;
  puVar13[0x26] = in_f28;
  puVar13[0x27] = in_f29;
  puVar13[0x28] = in_f30;
  puVar13[0x29] = in_f31;
  puVar13[0x23] = unaff_r31;
  puVar13[0x20] = unaff_r28;
  iVar12 = *(int *)(param_1 + 0x78);
  puVar13[0x22] = unaff_r30;
  bVar1 = *(byte *)(param_1 + 0x21);
  dVar36 = 0.7853981852531433;
  fVar2 = *(float *)(param_1 + 0x18);
  puVar13[0x21] = unaff_r29;
  iVar12 = *(int *)(iVar12 + 0x160);
  if (bVar1 == 0xff) {
    fVar2 = *(float *)(param_1 + 0x10) - *(float *)(iVar12 + 0x10);
    fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar12 + 0x14);
    fVar4 = ABS(fVar2);
    fVar9 = ABS(fVar3);
    *(float *)(puVar13 + 0x11) = fVar2;
    *(float *)((int)puVar13 + 0x8c) = fVar3;
    *(float *)(puVar13 + 0x12) = fVar4 - fVar9;
    dVar36 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar13 + 0x11));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar2 = fVar9;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar13 + 0x8c));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    if (0.0 < fVar2) {
      lVar27 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar13 + 0xd4) = fVar2;
      *(float *)(puVar13 + 0x1b) = fVar2;
      *(float *)((int)puVar13 + 0xdc) = fVar2;
      *(float *)(puVar13 + 0x1c) = fVar2;
      lVar25 = uVar19 - 0x140;
      fVar2 = fVar4 * fVar4;
      lVar21 = uVar19 - 0x7c;
      lVar23 = uVar19 - 0x6c;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar4;
      *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar2;
      *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar25 + 0xd4) = *(float *)((int)lVar25 + 0xc4) * fVar2 * fVar2;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar19 - 0x7c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar2 = *pfVar24;
        fVar4 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0xd4) = *(float *)((int)lVar21 + 0xd4) * fVar2;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      do {
        iVar12 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar14 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar12 + 0xd4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar9 + fVar3);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x10);
    fVar9 = *(float *)(iVar12 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(iVar12 + 0x14);
    fVar10 = fVar3 - fVar9;
    fVar15 = fVar4 - fVar5;
    fVar8 = ABS(fVar10);
    fVar6 = ABS(fVar15);
    *(float *)((int)puVar13 + 0x7c) = fVar10;
    *(float *)(puVar13 + 0x10) = fVar15;
    *(float *)((int)puVar13 + 0x84) = fVar8 - fVar6;
    dVar32 = 0.0;
    dVar35 = (double)(DAT_008f3fe0 * -0.017453292);
    fVar15 = DAT_008f3fe0 * 0.017453292;
    uVar20 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar7 = ABS(*(float *)((int)puVar13 + 0x7c));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar18 = ABS(*(float *)(puVar13 + 0x10));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar18 = fVar8;
    }
    dVar31 = dVar32;
    if (0.0 < fVar7) {
      lVar21 = uVar19 - 0x140;
      lVar25 = uVar19 - 0x8c;
      lVar23 = uVar19 - 0x9c;
      lVar27 = 2;
      fVar7 = (fVar18 - fVar7) / (fVar18 + fVar7);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar13 + 0xb4) = fVar7;
      *(float *)(puVar13 + 0x17) = fVar7;
      *(float *)((int)puVar13 + 0xbc) = fVar7;
      *(float *)(puVar13 + 0x18) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar8;
      *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar7;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar21 + 0xb4) = *(float *)((int)lVar21 + 0xa4) * fVar7 * fVar7;
        iVar14 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar7 * fVar7;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar19 - 0x9c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar7 = *pfVar24;
        fVar8 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0xb4) = *(float *)((int)lVar21 + 0xb4) * fVar7;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar8;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar23 = 2;
      lVar21 = lVar22;
      do {
        iVar14 = (int)lVar21;
        iVar16 = (int)lVar25;
        lVar21 = lVar21 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar14 + 0xb4)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar10 + fVar6);
    }
    fVar5 = fVar5 - fVar4;
    fVar9 = fVar9 - fVar3;
    fVar2 = *(float *)(iVar12 + 0x18) - fVar2;
    puVar26 = (ushort *)(&mobyutil::g_MobyGroups)[bVar1];
    dVar33 = (double)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar5 * fVar5);
    dVar34 = (double)fVar15;
    do {
      uVar17 = *puVar26 & 0x7fff;
      if ((MobyInstance[uVar17].state == '\x05') ||
         (fVar2 = MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14),
         fVar3 = MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10),
         fVar9 = MobyInstance[uVar17].pos.z - *(float *)(iVar12 + 0x18), dVar29 = dVar34,
         (double)SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2) < dVar33)) {
        fVar2 = MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10);
        fVar3 = MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14);
        dVar28 = ABS((double)fVar2);
        dVar30 = ABS((double)fVar3);
        *(float *)(puVar13 + 0xe) = fVar2;
        *(float *)((int)puVar13 + 0x74) = fVar3;
        *(float *)(puVar13 + 0xf) = (float)(dVar28 - dVar30);
        uVar20 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
        dVar29 = ABS((double)*(float *)(puVar13 + 0xe));
        if ((double)*(float *)(puVar13 + 0xf) - dVar32 < 0.0) {
          dVar29 = dVar30;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
        dVar30 = ABS((double)*(float *)((int)puVar13 + 0x74));
        if ((double)*(float *)(puVar13 + 0xf) - dVar32 < 0.0) {
          dVar30 = dVar28;
        }
        fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        dVar28 = dVar32;
        if (dVar32 < dVar29) {
          lVar21 = uVar19 - 0x140;
          lVar25 = uVar19 - 0xac;
          lVar23 = uVar19 - 0xbc;
          lVar27 = 2;
          fVar9 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar4 = fVar9 * fVar9;
          *(float *)((int)puVar13 + 0x94) = fVar9;
          *(float *)(puVar13 + 0x13) = fVar9;
          *(float *)((int)puVar13 + 0x9c) = fVar9;
          *(float *)(puVar13 + 0x14) = fVar9;
          fVar9 = fVar4 * fVar4;
          *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar4;
          *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar9;
          *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar9 * fVar4;
          do {
            *(float *)((int)lVar21 + 0x94) = *(float *)((int)lVar21 + 0x84) * fVar9 * fVar9;
            iVar14 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar14 + 4) * fVar9 * fVar9;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar19 - 0xbc;
          pfVar24 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar23 = lVar25;
          do {
            fVar9 = *pfVar24;
            fVar4 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar21 + 0x94) = *(float *)((int)lVar21 + 0x94) * fVar9;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar23 = 2;
          lVar21 = lVar22;
          dVar29 = dVar32;
          do {
            iVar14 = (int)lVar21;
            iVar16 = (int)lVar25;
            lVar21 = lVar21 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x94)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar28 = (double)((float)(dVar29 + dVar36) * fVar2 + fVar3);
        }
        dVar28 = (double)fastfunc::FastDiffRots(dVar28,dVar31);
        if (((dVar28 <= dVar32) || (dVar29 = dVar28, dVar34 <= dVar28)) &&
           (dVar29 = dVar34, dVar35 < dVar28 && dVar28 < dVar32)) {
          dVar35 = dVar28;
        }
      }
      uVar11 = *puVar26;
      puVar26 = puVar26 + 1;
      dVar34 = dVar29;
    } while (-1 < (short)uVar11);
    dVar36 = (double)fastfunc::FastSubRots((float)dVar29,(float)dVar35);
    dVar36 = (double)fastfunc::FastWrapRot((float)dVar35,(float)(dVar36 * 0.5));
    dVar36 = (double)fastfunc::FastWrapRot((float)dVar36,(float)dVar31);
  }
  return dVar36;
}



//==== 004aa488  ns=mobyupdate_helpers  size=0x60
// sig: undefined M910_004aa488(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M910_004aa488(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    do {
      if (MobyInstance[*puVar2 & 0x7fff].state == '\x01') {
        MobyInstance[*puVar2 & 0x7fff].state = '\x02';
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 004aa510  ns=mobyupdate_helpers  size=0x7c0
// sig: undefined M910_004aa510(void)
// callers(1): 004aad50 mobyupdate_unsorted::UpdateMoby_910
// callees(10): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M910_004aa510(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  Spline *pSVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  float fVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar22;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f31;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar18 = uVar12 - 0xf0;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar12;
  puVar10[0x20] = in_LR;
  puVar10[0x1d] = in_f31;
  puVar10[0x1b] = unaff_r30;
  puVar10[0x1c] = unaff_r31;
  pvVar5 = param_1->pVar;
  uVar24 = ZEXT48(pvVar5);
  iVar14 = *(int *)((int)pvVar5 + 0x38);
  puVar10[0x1a] = unaff_r29;
  puVar10[0x19] = unaff_r28;
  puVar10[0x18] = unaff_r27;
  if (iVar14 != 0) {
    dVar26 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar13 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar5 + 0x1ac) = uVar13;
    *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar24 + 0x1ac);
  dVar26 = 0.0;
  *(undefined4 *)((int)puVar10 + 0x74) = 0;
  iVar14 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar15 = mobyutil::MB_HandleDamage
                     (param_1,iVar14,uVar24 + 0x20,0,puVar10 + 0xe,(int)puVar10 + 0x74,0,4);
  if ((*(int *)(puVar10 + 0xe) != 1) && (param_1->state != '\v')) {
    fVar3 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar10 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar26) {
      iVar15 = 1;
    }
    if (param_1->group != 0xff) {
      puVar16 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
      do {
        if (MobyInstance[*puVar16 & 0x7fff].state == '\x01') {
          MobyInstance[*puVar16 & 0x7fff].state = '\x02';
        }
        uVar4 = *puVar16;
        puVar16 = puVar16 + 1;
      } while (-1 < (short)uVar4);
    }
    uVar13 = fastfunc::FastDoubleToInt(0x4088000000000000);
    *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f400000;
    fVar1 = DAT_008f3fb8;
    fVar3 = DAT_0071f418;
    *(undefined4 *)((int)pvVar5 + 0x90) = uVar13;
    *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar5 + 0xad) = 0;
    *(undefined4 *)((int)pvVar5 + 0x94) = 9;
    *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar3;
    if (iVar15 < 3) {
      if ((-1 < iVar15) && (0 < iVar15)) {
        param_1->state = '\v';
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar3 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar5 + 0x88) = mobyutil::g_FrameTime * 8.0;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41d80000;
        *(float *)((int)pvVar5 + 0x8c) = fVar3 * 10.0;
        uVar6 = *(uint *)(iVar14 + 0x10);
        uVar7 = *(uint *)(iVar14 + 0x14);
        dVar27 = ABS((double)*(float *)(iVar14 + 0x10));
        dVar29 = ABS((double)*(float *)(iVar14 + 0x14));
        *(float *)(puVar10 + 0xf) = (float)(dVar27 - dVar29);
        uVar19 = (ulonglong)(uVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar7 >> 0x1d) & 4;
        uVar21 = uVar19 << 2;
        dVar28 = dVar27;
        if ((double)*(float *)(puVar10 + 0xf) - dVar26 < 0.0) {
          dVar28 = dVar29;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar21);
        if ((double)*(float *)(puVar10 + 0xf) - dVar26 < 0.0) {
          dVar29 = dVar27;
        }
        fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        dVar27 = dVar26;
        if (dVar26 < dVar28) {
          lVar17 = uVar12 - 0xe0;
          lVar23 = uVar12 - 0x60;
          lVar20 = uVar12 - 0x70;
          lVar25 = 2;
          fVar2 = (float)(dVar29 - dVar28) / (float)(dVar29 + dVar28);
          fVar11 = fVar2 * fVar2;
          *(float *)((int)puVar10 + 0x8c) = fVar2;
          *(float *)((int)puVar10 + 0x84) = fVar2;
          *(float *)(puVar10 + 0x11) = fVar2;
          *(float *)(puVar10 + 0x10) = fVar2;
          fVar2 = fVar11 * fVar11;
          *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar11;
          *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar2;
          *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar2 * fVar11;
          do {
            *(float *)((int)lVar17 + 0x80) = *(float *)((int)lVar17 + 0x70) * fVar2 * fVar2;
            iVar14 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar12 - 0x70;
          uVar21 = ZEXT48(&DAT_007358e0);
          lVar17 = lVar18;
          lVar20 = lVar23;
          do {
            pfVar22 = (float *)uVar21;
            fVar2 = pfVar22[1];
            uVar21 = uVar21 + 8;
            *(float *)((int)lVar17 + 0x80) = *(float *)((int)lVar17 + 0x80) * *pfVar22;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar17 = 2;
          dVar29 = dVar26;
          do {
            iVar14 = (int)lVar18;
            iVar15 = (int)lVar23;
            lVar18 = lVar18 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x80)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar27 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar1);
        }
        mobyutil::MB_StartKick(dVar27,param_1,uVar24 + 0x70,uVar21,0xf,1,0);
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
        mobyutil::MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar15 < 0xb) {
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      param_1->state = '\n';
      fVar1 = mobyutil::g_FrameTime;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x14,0x4aa4e8);
      auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      fVar3 = DAT_008f3fbc * mobyutil::g_FrameTime;
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = vectorSplatHalfWord(auVar30,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar30,0x26,uVar24);
      *(undefined2 *)((int)pvVar5 + 0x26) = uVar9;
      *(float *)((int)pvVar5 + 0x88) = fVar3;
      fVar3 = DAT_008f3fc0;
      *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41700000;
      *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41e80000;
      *(float *)((int)pvVar5 + 0x8c) = fVar3 * fVar1;
      uVar6 = *(uint *)(iVar14 + 0x10);
      uVar7 = *(uint *)(iVar14 + 0x14);
      dVar27 = ABS((double)*(float *)(iVar14 + 0x10));
      dVar29 = ABS((double)*(float *)(iVar14 + 0x14));
      *(float *)((int)puVar10 + 0x7c) = (float)(dVar27 - dVar29);
      uVar19 = (ulonglong)(uVar6 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1e) & 2 |
               (ulonglong)(uVar7 >> 0x1d) & 4;
      uVar21 = uVar19 << 2;
      dVar28 = dVar27;
      if ((double)*(float *)((int)puVar10 + 0x7c) - dVar26 < 0.0) {
        dVar28 = dVar29;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar21);
      if ((double)*(float *)((int)puVar10 + 0x7c) - dVar26 < 0.0) {
        dVar29 = dVar27;
      }
      fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      dVar27 = dVar26;
      if (dVar26 < dVar28) {
        lVar17 = uVar12 - 0xe0;
        lVar23 = uVar12 - 0x40;
        lVar20 = uVar12 - 0x50;
        lVar25 = 2;
        fVar2 = (float)(dVar29 - dVar28) / (float)(dVar29 + dVar28);
        fVar11 = fVar2 * fVar2;
        *(float *)((int)puVar10 + 0xac) = fVar2;
        *(float *)((int)puVar10 + 0xa4) = fVar2;
        *(float *)(puVar10 + 0x15) = fVar2;
        *(float *)(puVar10 + 0x14) = fVar2;
        fVar2 = fVar11 * fVar11;
        *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar11;
        *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar2;
        *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar2 * fVar11;
        do {
          *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0x90) * fVar2 * fVar2;
          iVar14 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar12 - 0x50;
        uVar21 = ZEXT48(&DAT_007358e0);
        lVar17 = lVar18;
        lVar20 = lVar23;
        do {
          pfVar22 = (float *)uVar21;
          fVar2 = pfVar22[1];
          uVar21 = uVar21 + 8;
          *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0xa0) * *pfVar22;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar17 = 2;
        dVar29 = dVar26;
        do {
          iVar14 = (int)lVar18;
          iVar15 = (int)lVar23;
          lVar18 = lVar18 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0xa0)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar27 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar1);
      }
      mobyutil::MB_StartKick(dVar27,param_1,uVar24 + 0x70,uVar21,0xf,1,0);
      *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar24 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar24 + 0x60);
  if (*(int *)((int)pvVar5 + 0x1ac) == 0) {
    if (param_1->state == '\x01') {
      if ((param_1 == DAT_00969f20) || (param_1 == DAT_00969f1c)) {
        dVar26 = 6.0;
      }
    }
    else {
      dVar26 = (double)DAT_008f3fd8;
    }
  }
  else {
    dVar26 = (double)(DAT_008f3fd8 + 6.0);
  }
  *(float *)((int)pvVar5 + 0x1a0) = (float)dVar26;
  pSVar8 = Splines[*(int *)((int)pvVar5 + 0x1b0)];
  iVar14 = mobyutil::MB_getTargetInArea
                     (dVar26,param_1,uVar24 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if ((iVar14 != 2) &&
     ((fVar3 = *(float *)((int)pvVar5 + 0x174) - *(float *)((int)pvVar5 + 0x124),
      fVar1 = *(float *)((int)pvVar5 + 0x170) - *(float *)((int)pvVar5 + 0x120),
      *(float *)((int)pvVar5 + 0x1a0) < SQRT(fVar1 * fVar1 + fVar3 * fVar3) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
    *(undefined4 *)((int)pvVar5 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar5 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 004aad50  ns=mobyupdate_unsorted  size=0x1260
// sig: undefined UpdateMoby_910(MobyInstance * moby)
// callers(0): 
// callees(17): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00109af0 mobyutil::Delt; 0010b030 mobyutil::MB_UpdateKick; 004a9d90 mobyupdate_helpers::M910_004a9d90; 004aa510 mobyupdate_helpers::M910_004aa510; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338

/* Moby 910 */

void mobyupdate_unsorted::UpdateMoby_910(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  ushort uVar7;
  void *pvVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  double dVar20;
  undefined8 uVar21;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined1 auStack_e0 [16];
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined1 auStack_c0 [16];
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  MobyInstance *local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  longlong local_80;
  
  pvVar8 = moby->pVar;
  uVar19 = ZEXT48(pvVar8);
  mobyupdate_helpers::M910_004aa510();
  iVar15 = *(int *)((int)pvVar8 + 0x160);
  bVar2 = moby->state;
  fVar1 = moby->pClass->gScale * DAT_008f3fb4;
  moby->unk58 = 0.8;
  moby->scale = fVar1;
  if (bVar2 < 6) {
    if (bVar2 == 5) {
      fVar1 = (moby->pos).y - *(float *)(iVar15 + 0x14);
      fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10);
      fVar5 = (moby->pos).z - *(float *)(iVar15 + 0x18);
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1) <= DAT_008f3fc8) {
        mobyutil::Delt(0.0,DAT_0071f418 * 20.0,(float *)((int)pvVar8 + 0xf4));
      }
      else {
        mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                       (float *)((int)pvVar8 + 0xf4));
      }
      uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),moby,&DAT_00720000,uVar19 + 400);
      dVar22 = (double)mobyupdate_helpers::M910_004a9d90(moby);
      dVar34 = 1.570796251296997;
      dVar33 = 3.141592502593994;
      fVar1 = (float)(dVar22 + 1.570796251296997);
      dVar32 = -3.141592502593994;
      dVar31 = -0.16666656732559204;
      dVar30 = 0.008333025500178337;
      dVar29 = -0.0001980741071747616;
      dVar28 = 2.601886990305502e-06;
      dVar20 = (double)(float)(3.141592502593994 - dVar22);
      if (dVar22 - (double)(float)(3.141592502593994 - dVar22) < 0.0) {
        dVar20 = dVar22;
      }
      fVar4 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar4 = fVar1;
      }
      dVar23 = (double)(float)(-3.141592502593994 - dVar22);
      if ((double)(float)(-3.141592502593994 - dVar22) - dVar20 < 0.0) {
        dVar23 = dVar20;
      }
      fVar5 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      dVar20 = (double)(float)(dVar23 * dVar23);
      fVar9 = fVar5 * fVar5;
      dVar22 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
      fVar1 = fVar9 * fVar9 * fVar5;
      dVar24 = (double)(float)(dVar20 * dVar22);
      dVar27 = (double)(moby->rotation).z;
      fVar4 = fVar9 * fVar1;
      dVar22 = (double)FUN_005e8338((double)(((fVar9 * fVar4 * 2.601887e-06 +
                                              fVar4 * -0.0001980741 +
                                              fVar1 * 0.0083330255 +
                                              fVar9 * fVar5 * -0.16666657 + fVar5) * DAT_008f3fc8 +
                                             *(float *)(iVar15 + 0x10)) - (moby->pos).x),
                                    (double)((((float)(dVar20 * dVar24) * 2.601887e-06 +
                                              (float)(dVar24 * -0.0001980741071747616 +
                                                     (double)(float)(dVar22 * 0.008333025500178337 +
                                                                    (double)(float)((double)(float)(
                                                  dVar20 * dVar23) * -0.16666656732559204 + dVar23))
                                                  )) * DAT_008f3fc8 + *(float *)(iVar15 + 0x14)) -
                                            (moby->pos).y));
      dVar34 = (double)(float)(dVar22 + dVar34);
      dVar20 = (double)(float)(dVar33 - dVar22);
      if (dVar22 - (double)(float)(dVar33 - dVar22) < 0.0) {
        dVar20 = dVar22;
      }
      dVar23 = (double)(float)(dVar33 - dVar34);
      if (dVar34 - (double)(float)(dVar33 - dVar34) < 0.0) {
        dVar23 = dVar34;
      }
      dVar33 = (double)(float)(dVar32 - dVar22);
      if ((double)(float)(dVar32 - dVar22) - dVar20 < 0.0) {
        dVar33 = dVar20;
      }
      local_118 = 0;
      dVar20 = (double)(float)(dVar32 - dVar34);
      if ((double)(float)(dVar32 - dVar34) - dVar23 < 0.0) {
        dVar20 = dVar23;
      }
      dVar32 = (double)(float)(dVar33 * dVar33);
      dVar34 = (double)(float)(dVar20 * dVar20);
      dVar25 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar33));
      dVar23 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar20));
      dVar24 = (double)(float)(dVar32 * dVar25);
      dVar26 = (double)(float)(dVar34 * dVar23);
      local_11c = (float)((double)(float)(dVar32 * dVar24) * dVar28 +
                         (double)(float)(dVar24 * dVar29 +
                                        (double)(float)(dVar25 * dVar30 +
                                                       (double)(float)((double)(float)(dVar32 * 
                                                  dVar33) * dVar31 + dVar33)))) * 2.0;
      local_120 = (float)((double)(float)(dVar34 * dVar26) * dVar28 +
                         (double)(float)(dVar26 * dVar29 +
                                        (double)(float)(dVar23 * dVar30 +
                                                       (double)(float)((double)(float)(dVar34 * 
                                                  dVar20) * dVar31 + dVar20)))) * 2.0;
      dVar20 = 1.0;
      (moby->rotation).z = (float)dVar22;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_120,auStack_110
                );
      (moby->rotation).z = (float)dVar27;
      fVar1 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      fVar10 = fVar1 - *(float *)((int)pvVar8 + 0x174);
      fVar11 = fVar4 - *(float *)((int)pvVar8 + 0x170);
      fVar5 = (moby->pos).z;
      fVar9 = fVar5 - *(float *)((int)pvVar8 + 0x178);
      if ((DAT_008f3fcc < SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10)) ||
         (*(int *)((int)pvVar8 + 0x164) == 2)) {
        moby->state = '\b';
      }
      else {
        fVar1 = fVar1 - *(float *)(iVar15 + 0x14);
        fVar4 = fVar4 - *(float *)(iVar15 + 0x10);
        if ((((SQRT(fVar4 * fVar4 + fVar1 * fVar1) < DAT_008f3fc8) &&
             (ABS((double)(*(float *)(iVar15 + 0x18) - fVar5)) < dVar20)) &&
            (DAT_00969ea0 < (int)(animationSpeed * 10.5))) &&
           (moby->state = '\a', moby->animationId != '\x01')) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar2 == 4) {
      iVar15 = fastfunc::FastDecTimerS32(uVar19 + 0x1a8);
      if (iVar15 != 0) {
        moby->state = '\x05';
        dVar20 = (double)mobyutil::MB_randRangeFloat
                                   (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                    *(float *)((int)pvVar8 + 0x198) * -0.017453292);
        *(float *)((int)pvVar8 + 0x194) = (float)dVar20;
        if (moby->animationId != '\x15') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar2 == 3) {
      uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x120) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar8 + 0x124) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),moby,&DAT_004aacd0,uVar19 + 400);
      if (*(int *)((int)pvVar8 + 0x164) != 2) {
        moby->state = '\x04';
        local_80 = (longlong)*(int *)((int)pvVar8 + 0x1b8);
        mobyutil::MB_randRangeFloat(0.0,(float)local_80);
        uVar14 = fastfunc::FastDoubleToInt();
        *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar14;
      }
    }
    else if (bVar2 == 2) {
      moby->unk58 = 1.5;
      if (moby->animationId == '\x06') {
        if (*(int *)((int)pvVar8 + 0x1a8) == 0) {
          dVar20 = (double)mobyutil::MB_randRangeFloat(0.0,20.0);
          uVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar14;
        }
        else {
          iVar15 = fastfunc::FastDecTimerS32(uVar19 + 0x1a8);
          if ((iVar15 != 0) && (moby->animationId != '\x14')) {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,0x14,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        fVar1 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (DAT_008f3fd8 <= SQRT(fVar4 * fVar4 + fVar1 * fVar1)) {
          moby->state = '\x03';
          if (moby->animationId != '\x13') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,0x13,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          moby->state = '\x05';
          dVar20 = (double)mobyutil::MB_randRangeFloat
                                     (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                      *(float *)((int)pvVar8 + 0x198) * -0.017453292);
          *(float *)((int)pvVar8 + 0x194) = (float)dVar20;
          if (moby->animationId != '\x15') {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar2 == 1) {
      iVar15 = *(int *)((int)pvVar8 + 0x164);
      moby->unk58 = 0.25;
      if ((iVar15 != 2) || (*(int *)((int)pvVar8 + 0x1b4) != 0)) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        moby->state = '\x02';
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(4,0x4aacd0);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1a8,
                            uVar19);
        *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar14;
        bVar2 = moby->group;
        if ((bVar2 != 0xff) && (bVar2 != 0xff)) {
          puVar18 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
          do {
            if (MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
              MobyInstance[*puVar18 & 0x7fff].state = '\x02';
            }
            uVar7 = *puVar18;
            puVar18 = puVar18 + 1;
          } while (-1 < (short)uVar7);
        }
      }
    }
    else if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x40800000;
      *(undefined1 *)((int)pvVar8 + 0x28) = 3;
      *(undefined2 *)((int)pvVar8 + 0x24) = 4;
      MVar6 = moby->modeBits;
      *(f32 *)((int)pvVar8 + 0x170) = (moby->pos).x;
      *(f32 *)((int)pvVar8 + 0x174) = (moby->pos).y;
      fVar3 = (moby->pos).z;
      moby->modeBits = MVar6 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
      *(f32 *)((int)pvVar8 + 0x178) = fVar3;
      *(f32 *)((int)pvVar8 + 0x17c) = (moby->pos).w;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
      *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar8 + 0xd8) = 0x40000000;
      uVar14 = fastfunc::FastDoubleToInt((double)(DAT_008f3fb4 * 1024.0));
      *(float *)((int)pvVar8 + 0xd4) = DAT_008f3fb4;
      fVar1 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar8 + 0xd0) = uVar14;
      *(float *)((int)pvVar8 + 0xf4) = *(float *)((int)pvVar8 + 0x1a4) * fVar1;
      moby->state = '\x01';
      if (moby->animationId != '\x06') {
        mobyutil::MB_SetAnimation(moby,6,0,0);
      }
      *(float *)((int)pvVar8 + 0x1a0) = DAT_008f3fd8;
    }
  }
  else if (bVar2 == 0xb) {
    uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar17 & 0x40) == 0) {
      fVar3 = (moby->pos).z;
      uVar17 = (int)fVar3 >> 0x1f;
      if ((int)((uVar17 >> 1 ^ (uint)fVar3) - uVar17) < 0x40000000) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar2 == 10) {
    uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar17 & 0x41) == 0) {
      if ((moby->pos).z < *(float *)((int)pvVar8 + 0x178) - 0.2) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\t';
      if (moby->animationId != '\x15') {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 20.5));
      }
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x74,0x4aacd0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1a8,uVar19
                         );
      *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar14;
    }
  }
  else if (bVar2 == 9) {
    mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * 3.0 * mobyutil::g_FrameTime,DAT_0071f418 * 20.0
                   ,(float *)((int)pvVar8 + 0xf4));
    uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),moby);
    dVar28 = (double)(moby->rotation).z;
    dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
    dVar22 = (double)fastfunc::FastWrapRot((float)dVar20,3.14159);
    fVar1 = (float)(dVar22 + 1.570796251296997);
    dVar20 = (double)(float)(3.141592502593994 - dVar22);
    if (dVar22 - (double)(float)(3.141592502593994 - dVar22) < 0.0) {
      dVar20 = dVar22;
    }
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    dVar29 = (double)(float)(-3.141592502593994 - dVar22);
    if ((double)(float)(-3.141592502593994 - dVar22) - dVar20 < 0.0) {
      dVar29 = dVar20;
    }
    local_e8 = 0;
    fVar5 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar20 = (double)(float)(dVar29 * dVar29);
    fVar9 = fVar5 * fVar5;
    dVar31 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar29));
    fVar1 = fVar9 * fVar9 * fVar5;
    dVar30 = (double)(float)(dVar20 * dVar31);
    fVar4 = fVar9 * fVar1;
    local_ec = ((float)(dVar20 * dVar30) * 2.601887e-06 +
               (float)(dVar30 * -0.0001980741071747616 +
                      (double)(float)(dVar31 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar20 * dVar29) *
                                                     -0.16666656732559204 + dVar29)))) * 2.0;
    local_f0 = (fVar9 * fVar4 * 2.601887e-06 +
               fVar4 * -0.0001980741 + fVar1 * 0.0083330255 + fVar9 * fVar5 * -0.16666657 + fVar5) *
               2.0;
    (moby->rotation).z = (float)dVar22;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_f0,auStack_e0);
    (moby->rotation).z = (float)dVar28;
    iVar16 = fastfunc::FastDecTimerS32(uVar19 + 0x1a8);
    if ((iVar16 != 0) ||
       (fVar1 = (moby->pos).y - *(float *)(iVar15 + 0x14),
       fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10),
       fVar5 = (moby->pos).z - *(float *)(iVar15 + 0x18),
       DAT_008f3fdc < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1))) {
      moby->state = '\a';
      *(float *)((int)pvVar8 + 0xf4) = mobyutil::g_FrameTime * 5.0;
      if (DAT_008f3fe4 == 0) {
        if (moby->animationId != '\x01') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,1,10,(int)(animationSpeed * 10.5));
        }
      }
      else if (moby->animationId != '\x01') {
        local_80 = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(moby,1,DAT_008f3fe8,(int)(animationSpeed * 5.5));
      }
    }
  }
  else if (bVar2 == 8) {
    mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                   (float *)((int)pvVar8 + 0xf4));
    uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x170) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar8 + 0x174) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),moby);
    fVar1 = (moby->rotation).z;
    fVar5 = fVar1 + 1.5707963;
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar9 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar9 = fVar5;
    }
    fVar10 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar10 = fVar4;
    }
    local_c8 = 0;
    fVar1 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar9 < 0.0) {
      fVar1 = fVar9;
    }
    fVar5 = fVar10 * fVar10;
    fVar4 = fVar1 * fVar1;
    fVar9 = fVar5 * fVar5 * fVar10;
    fVar11 = fVar5 * fVar9;
    fVar12 = fVar4 * fVar4 * fVar1;
    fVar13 = fVar4 * fVar12;
    local_cc = (fVar5 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar9 * 0.0083330255 + fVar5 * fVar10 * -0.16666657 + fVar10
               ) * 2.0;
    local_d0 = (fVar4 * fVar13 * 2.601887e-06 +
               fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1)
               * 2.0;
    dVar20 = 1.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_d0,auStack_c0);
    fVar1 = (moby->pos).y - *(float *)((int)pvVar8 + 0x174);
    fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x170);
    fVar5 = (moby->pos).z - *(float *)((int)pvVar8 + 0x178);
    if (dVar20 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1)) {
      if ((*(int *)((int)pvVar8 + 0x164) != 2) &&
         (moby->state = '\x05', moby->animationId != '\x15')) {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      moby->state = '\x03';
      if (moby->animationId != '\x13') {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,0x13,0,(int)(animationSpeed * 20.5));
      }
    }
  }
  else if (bVar2 == 7) {
    uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),moby,&DAT_00720000,uVar19 + 400);
    dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((dVar20 <= 18.0) || (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), 24.0 <= dVar20)) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x15')) {
        local_80 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,0x15,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      fVar1 = (moby->rotation).z;
      fVar4 = fVar1 + 1.5707963;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar9 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar9 = fVar4;
      }
      fVar10 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar10 = fVar5;
      }
      local_a8 = 0;
      local_94 = 0x3f800000;
      local_90 = 1;
      local_9c = 1;
      fVar1 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar9 < 0.0) {
        fVar1 = fVar9;
      }
      fVar4 = fVar10 * fVar10;
      fVar5 = fVar1 * fVar1;
      fVar12 = fVar4 * fVar4 * fVar10;
      fVar9 = fVar5 * fVar5 * fVar1;
      fVar13 = fVar4 * fVar12;
      fVar11 = fVar5 * fVar9;
      local_ac = fVar4 * fVar13 * 2.601887e-06 +
                 fVar13 * -0.0001980741 +
                 fVar12 * 0.0083330255 + fVar4 * fVar10 * -0.16666657 + fVar10;
      local_b0 = fVar5 * fVar11 * 2.601887e-06 +
                 fVar11 * -0.0001980741 + fVar9 * 0.0083330255 + fVar5 * fVar1 * -0.16666657 + fVar1
      ;
      local_a0 = moby;
      mobyfunc::GetBonePosition(moby,0,auStack_100);
      uVar21 = 0x3fe0000000000000;
      collproc::CollMobySphere(0x3fe0000000000000,auStack_100);
      mobyfunc::GetBonePosition(moby,1,auStack_100);
      collproc::CollMobySphere(uVar21,auStack_100);
      mobyfunc::GetBonePosition(moby,2,auStack_100);
      uVar21 = 0x3fd0000000000000;
      collproc::CollMobySphere(0x3fd0000000000000,auStack_100);
      mobyfunc::GetBonePosition(moby,3,auStack_100);
      collproc::CollMobySphere(uVar21,auStack_100);
    }
  }
  return;
}



//==== 004abfb0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M911_004abfb0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M911_004abfb0(void)

{
  DAT_008f4038 = 0x10000;
  return;
}



//==== 004abff8  ns=mobyupdate_helpers  size=0x3e0
// sig: undefined M911_004abff8(void)
// callers(1): 004ace80 mobyupdate_unsorted::UpdateMoby_911
// callees(1): 00057820 collproc::CollLine

void mobyupdate_helpers::M911_004abff8(undefined4 param_1)

{
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [72];
  
  collproc::CollLine(local_c0,local_b0,0,param_1,local_a0);
  collproc::CollLine(local_c0,local_b0,0,param_1,local_a0);
  return;
}



//==== 004ac3f0  ns=mobyupdate_helpers  size=0x64c
// sig: undefined M911_004ac3f0(void)
// callers(1): 004ace80 mobyupdate_unsorted::UpdateMoby_911
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00500ca4 fastfunc::FastEulerToMtx1; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView

void mobyupdate_helpers::M911_004ac3f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar11;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [88];
  
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x18);
  if (10.0 < SQRT((g_heroPosition.z - fVar3) * (g_heroPosition.z - fVar3) +
                  (g_heroPosition.x - fVar2) * (g_heroPosition.x - fVar2) +
                  (g_heroPosition.y - fVar1) * (g_heroPosition.y - fVar1))) {
    iVar11 = fastfunc::FastCheckBsphereInView(0x4038000000000000,local_130);
    if (iVar11 == -1) {
      return;
    }
    fVar2 = *(float *)(param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
  }
  if (SQRT((g_heroPosition.z - fVar3) * (g_heroPosition.z - fVar3) +
           (g_heroPosition.x - fVar2) * (g_heroPosition.x - fVar2) +
           (g_heroPosition.y - fVar1) * (g_heroPosition.y - fVar1)) <= 24.0) {
    fastfunc::FastEulerToMtx1(local_120,param_1 + 0x40);
    dVar13 = 0.0;
    dVar12 = (double)mobyutil::MB_randRangeFloat
                               ((float)(longlong)DAT_008f4074,(float)(longlong)DAT_008f4078);
    lVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    dVar12 = (double)mobyutil::MB_randRangeFloat
                               ((float)(longlong)DAT_008f407c,(float)(longlong)DAT_008f4080);
    lVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    dVar12 = (double)mobyutil::MB_randRangeFloat
                               ((float)(longlong)DAT_008f4074,(float)(longlong)DAT_008f4078);
    lVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    dVar12 = (double)mobyutil::MB_randRangeFloat
                               ((float)(longlong)DAT_008f407c,(float)(longlong)DAT_008f4078);
    lVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    uVar8 = fastfunc::FastDoubleToInt
                      ((double)(longlong)(animationSpeed * ((float)(longlong)DAT_008f4084 + 0.5)));
    dVar14 = 1.0;
    mobyutil::MB_randRangeFloat((float)dVar13,1.0);
    mobyutil::MB_randSphere(dVar13,(double)(DAT_008f4090 * mobyutil::g_FrameTime),local_140);
    partupd::SpawnPart_2
              (local_160,local_150,local_140,DAT_008f406c,DAT_008f4070,
               lVar4 + (lVar4 - lVar6 >> 0x3f & lVar6 - lVar4),
               lVar5 + (lVar5 - lVar7 >> 0x3f & lVar7 - lVar5),uVar8);
    dVar12 = (double)mobyutil::MB_randRangeFloat
                               ((float)(longlong)DAT_008f4074,(float)(longlong)DAT_008f4078);
    uVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    dVar12 = (double)mobyutil::MB_randRangeFloat
                               ((float)(longlong)DAT_008f407c,(float)(longlong)DAT_008f4080);
    uVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * (double)animationSpeed));
    mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
    mobyutil::MB_randSphere(dVar13,(double)(DAT_008f4090 * mobyutil::g_FrameTime),local_140);
    partupd::SpawnPart_2(local_160,local_150,local_140,DAT_008f406c,DAT_008f4070,uVar9,uVar10,uVar8)
    ;
  }
  return;
}



//==== 004aca68  ns=mobyupdate_helpers  size=0x3ec
// sig: undefined M911_004aca68(void)
// callers(1): 004ace80 mobyupdate_unsorted::UpdateMoby_911
// callees(4): 00057820 collproc::CollLine; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M911_004aca68(int param_1)

{
  int iVar1;
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
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [72];
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = fastfunc::FastDoubleToInt
                    ((double)((DAT_008f4060 / (DAT_008f405c * mobyutil::g_FrameTime)) * 0.25));
  dVar8 = (double)(*(float *)(iVar1 + 0x80) * (float)(longlong)iVar2);
  dVar3 = (double)fastfunc::FastDiffRots
                            ((double)*(float *)(iVar1 + 0x7c),(double)(float)(dVar8 * 4.0));
  iVar2 = 0;
  dVar9 = 3.141592502593994;
  dVar10 = -3.141592502593994;
  dVar11 = -0.16666656732559204;
  dVar12 = 0.008333025500178337;
  dVar13 = -0.0001980741071747616;
  dVar14 = 2.601886990305502e-06;
  dVar15 = 0.01745329238474369;
  do {
    dVar5 = (double)(float)(dVar9 - dVar3);
    if (dVar3 - (double)(float)(dVar9 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar4 = (double)(float)(dVar10 - dVar3);
    if ((double)(float)(dVar10 - dVar3) - dVar5 < 0.0) {
      dVar4 = dVar5;
    }
    dVar5 = (double)(float)(dVar4 * dVar4);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
    dVar6 = (double)(float)(dVar5 * dVar7);
    fastfunc::FastWrapRot
              (*(float *)(iVar1 + 0x84),
               (float)((double)*(float *)(iVar1 + 100) * dVar15) *
               (float)((double)(float)(dVar5 * dVar6) * dVar14 +
                      (double)(float)(dVar6 * dVar13 +
                                     (double)(float)(dVar7 * dVar12 +
                                                    (double)(float)((double)(float)(dVar5 * dVar4) *
                                                                    dVar11 + dVar4)))));
    dVar3 = (double)fastfunc::FastWrapRot((float)dVar3,(float)dVar8);
    dVar5 = (double)(float)(dVar9 - dVar3);
    if (dVar3 - (double)(float)(dVar9 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar4 = (double)(float)(dVar10 - dVar3);
    if ((double)(float)(dVar10 - dVar3) - dVar5 < 0.0) {
      dVar4 = dVar5;
    }
    dVar5 = (double)(float)(dVar4 * dVar4);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
    dVar6 = (double)(float)(dVar5 * dVar7);
    fastfunc::FastWrapRot
              (*(float *)(iVar1 + 0x84),
               (float)((double)*(float *)(iVar1 + 100) * dVar15) *
               (float)((double)(float)(dVar5 * dVar6) * dVar14 +
                      (double)(float)(dVar6 * dVar13 +
                                     (double)(float)(dVar7 * dVar12 +
                                                    (double)(float)((double)(float)(dVar5 * dVar4) *
                                                                    dVar11 + dVar4)))));
    collproc::CollLine(local_100,local_f0,0,param_1,local_e0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



//==== 004ace80  ns=mobyupdate_unsorted  size=0x3e4
// sig: undefined UpdateMoby_911(MobyInstance * moby)
// callers(0): 
// callees(10): 00110b70 mobyutil::MB_IsPntInCuboid; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004abff8 mobyupdate_helpers::M911_004abff8; 004ac3f0 mobyupdate_helpers::M911_004ac3f0; 004aca68 mobyupdate_helpers::M911_004aca68; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 911 */

void mobyupdate_unsorted::UpdateMoby_911(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  pvVar3 = moby->pVar;
  if (-1 < *(int *)((int)pvVar3 + 0x90)) {
    iVar8 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x90));
    if (iVar8 == 0) {
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
      *(undefined4 *)((int)pvVar3 + 0x54) = 0;
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0x50) = DAT_008f4094;
      *(undefined4 *)((int)pvVar3 + 0x54) = DAT_008f4098;
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(int *)((int)pvVar3 + 0x60) == 0) {
        moby->state = '\x03';
        iVar8 = fastfunc::FastDoubleToInt
                          ((double)(*(float *)((int)pvVar3 + 0x78) * 60.0 +
                                   *(float *)((int)pvVar3 + 0x74)));
        *(int *)((int)pvVar3 + 0x88) = (int)(animationSpeed * ((float)(longlong)iVar8 + 0.5));
      }
      else {
        moby->state = '\x01';
        *(float *)((int)pvVar3 + 0x7c) = *(float *)((int)pvVar3 + 0x6c) * 0.017453292;
        *(float *)((int)pvVar3 + 0x80) =
             (360.0 / *(float *)((int)pvVar3 + 0x68)) * 0.017453292 * mobyutil::g_FrameTime;
        *(f32 *)((int)pvVar3 + 0x84) = (moby->rotation).z;
      }
      *(undefined4 *)((int)pvVar3 + 0x94) = 0xffffffff;
    }
    else {
      iVar8 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x94));
      if (iVar8 == 0) {
        iVar8 = sound::PlayMobySound(0,4,moby);
        *(int *)((int)pvVar3 + 0x94) = iVar8;
      }
      mobyupdate_helpers::M911_004ac3f0(moby);
      mobyupdate_helpers::M911_004aca68(moby);
      fVar2 = *(float *)((int)pvVar3 + 0x7c);
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = fVar5 * fVar5;
      fVar6 = fVar4 * fVar4 * fVar5;
      fVar7 = fVar4 * fVar6;
      dVar11 = (double)(*(float *)((int)pvVar3 + 100) * 0.017453292 *
                       (fVar4 * fVar7 * 2.601887e-06 +
                       fVar7 * -0.0001980741 +
                       fVar6 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5));
      dVar10 = (double)fastfunc::FastWrapRot(fVar2,*(float *)((int)pvVar3 + 0x80));
      *(float *)((int)pvVar3 + 0x7c) = (float)dVar10;
      dVar10 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar3 + 0x84),(float)dVar11);
      (moby->rotation).z = (float)dVar10;
    }
  }
  else if (bVar1 < 3) {
    iVar8 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x94));
    if (iVar8 == 0) {
      iVar8 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 0x94) = iVar8;
    }
    mobyupdate_helpers::M911_004ac3f0(moby);
    mobyupdate_helpers::M911_004abff8(moby);
    iVar8 = fastfunc::FastDecTimerS32((int)pvVar3 + 0x88);
    if (iVar8 != 0) {
      moby->state = '\x03';
      iVar9 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0x74) * 60.0));
      iVar8 = *(int *)((int)pvVar3 + 0x94);
      *(int *)((int)pvVar3 + 0x88) = (int)(animationSpeed * ((float)(longlong)iVar9 + 0.5));
      if (((iVar8 != -1) && (sound::g_SoundChannels[iVar8].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar8].state != '\0')) {
        sound::sound_Kill(iVar8);
      }
      *(undefined4 *)((int)pvVar3 + 0x94) = 0xffffffff;
    }
  }
  else if ((bVar1 < 4) && (iVar8 = fastfunc::FastDecTimerS32((int)pvVar3 + 0x88), iVar8 != 0)) {
    moby->state = '\x02';
    iVar8 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0x70) * 60.0));
    *(int *)((int)pvVar3 + 0x88) = (int)(animationSpeed * ((float)(longlong)iVar8 + 0.5));
  }
  return;
}



//==== 004ad264  ns=Global  size=0x58
// sig: undefined FUN_004ad264(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(0): 

void FUN_004ad264(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  do {
    if (MobyInstance[*puVar2 & 0x7fff].state == '\x04') {
      MobyInstance[*puVar2 & 0x7fff].state = '\0';
    }
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return;
}



//==== 004ad2bc  ns=Global  size=0x4c
// sig: undefined FUN_004ad2bc(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(0): 

void FUN_004ad2bc(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  do {
    MobyInstance[*puVar2 & 0x7fff].state = '\x04';
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return;
}



//==== 004ad308  ns=mobyupdate_helpers  size=0x14
// sig: undefined M912_004ad308(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M912_004ad308(void)

{
  DAT_008f40e8 = 0x10000;
  return;
}



//==== 004ad348  ns=mobyupdate_helpers  size=0x540
// sig: undefined M912_004ad348(void)
// callers(1): 004ad900 mobyupdate_unsorted::UpdateMoby_912
// callees(10): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M912_004ad348(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
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
  double dVar25;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar14 = uVar10 - 0xd0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar10;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x17] = unaff_r30;
  puVar9[0x18] = unaff_r31;
  pvVar5 = param_1->pVar;
  uVar20 = ZEXT48(pvVar5);
  iVar12 = *(int *)((int)pvVar5 + 0x38);
  puVar9[0x16] = unaff_r29;
  puVar9[0x15] = unaff_r28;
  if (iVar12 != 0) {
    dVar22 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar5 + 0x1ac) = uVar11;
    *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar20 + 0x1ac);
  dVar22 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar12 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar13 = mobyutil::MB_HandleDamage
                     (param_1,iVar12,uVar20 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\v')) {
    fVar4 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar22) {
      iVar13 = 1;
    }
    uVar11 = fastfunc::FastDoubleToInt(0x4088000000000000);
    *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f400000;
    fVar1 = DAT_008f4110;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar5 + 0x90) = uVar11;
    *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar5 + 0xad) = 0;
    *(undefined4 *)((int)pvVar5 + 0x94) = 9;
    *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar4;
    if (iVar13 < 3) {
      if ((-1 < iVar13) && (0 < iVar13)) {
        param_1->state = '\v';
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar4 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar5 + 0x88) = mobyutil::g_FrameTime * 8.0;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41d80000;
        *(float *)((int)pvVar5 + 0x8c) = fVar4 * 10.0;
        uVar6 = *(uint *)(iVar12 + 0x10);
        uVar7 = *(uint *)(iVar12 + 0x14);
        dVar24 = ABS((double)*(float *)(iVar12 + 0x10));
        dVar25 = ABS((double)*(float *)(iVar12 + 0x14));
        *(float *)(puVar9 + 0xf) = (float)(dVar24 - dVar25);
        uVar15 = (ulonglong)(uVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar7 >> 0x1d) & 4;
        lVar16 = uVar15 << 2;
        dVar23 = dVar24;
        if ((double)*(float *)(puVar9 + 0xf) - dVar22 < 0.0) {
          dVar23 = dVar25;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar16);
        if ((double)*(float *)(puVar9 + 0xf) - dVar22 < 0.0) {
          dVar25 = dVar24;
        }
        fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        dVar24 = dVar22;
        if (dVar22 < dVar23) {
          lVar18 = uVar10 - 0xc0;
          lVar16 = uVar10 - 0x44;
          lVar17 = uVar10 - 0x54;
          lVar21 = 2;
          fVar2 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)(puVar9 + 0x11) = fVar2;
          *(float *)(puVar9 + 0x10) = fVar2;
          *(float *)((int)puVar9 + 0x84) = fVar2;
          *(float *)((int)puVar9 + 0x7c) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar3;
          *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar2;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar2 * fVar2;
            iVar12 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = uVar10 - 0x54;
          lVar21 = 4;
          pfVar19 = (float *)&DAT_007358e0;
          lVar17 = lVar16;
          lVar18 = lVar14;
          do {
            fVar2 = *pfVar19;
            fVar3 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x7c) * fVar2;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar17 = 2;
          dVar23 = dVar22;
          do {
            iVar12 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            iVar13 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar12 + 0x7c)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar24 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar1);
        }
        mobyutil::MB_StartKick(dVar24,param_1,uVar20 + 0x70,lVar16,0x12,1,0);
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
        mobyutil::MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar13 < 0xb) {
      *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar20 + 0x60);
  if (*(int *)((int)pvVar5 + 0x1ac) == 0) {
    if (param_1->state == '\x01') {
      if ((param_1 == DAT_00969f20) || (param_1 == DAT_00969f1c)) {
        dVar22 = 6.0;
      }
    }
    else {
      dVar22 = (double)DAT_008f4130;
    }
  }
  else {
    dVar22 = (double)(DAT_008f4130 + 6.0);
  }
  *(float *)((int)pvVar5 + 0x1a0) = (float)dVar22;
  pSVar8 = Splines[*(int *)((int)pvVar5 + 0x1b0)];
  iVar12 = mobyutil::MB_getTargetInArea
                     (param_1,uVar20 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if ((iVar12 != 2) &&
     ((fVar4 = *(float *)((int)pvVar5 + 0x174) - *(float *)((int)pvVar5 + 0x124),
      fVar1 = *(float *)((int)pvVar5 + 0x170) - *(float *)((int)pvVar5 + 0x120),
      *(float *)((int)pvVar5 + 0x1a0) < SQRT(fVar1 * fVar1 + fVar4 * fVar4) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
    *(undefined4 *)((int)pvVar5 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar5 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 004ad900  ns=mobyupdate_unsorted  size=0x1a40
// sig: undefined UpdateMoby_912(MobyInstance * moby)
// callers(0): 
// callees(20): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105c08 mobyutil::CollDamageMobyDirect; 00109af0 mobyutil::Delt; 0010b030 mobyutil::MB_UpdateKick; 004ad348 mobyupdate_helpers::M912_004ad348; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005e7e18 idol::GetAnimDuration; 005e7e98 FUN_005e7e98; 005e8338 FUN_005e8338; 005e8588 FUN_005e8588

/* Moby 912 */

void mobyupdate_unsorted::UpdateMoby_912(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  MobyInstance *victim;
  f32 fVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 uVar21;
  int iVar22;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar20 = uVar15 - 0x250;
  puVar11 = (ulonglong *)lVar20;
  *puVar11 = uVar15;
  puVar11[0x4c] = in_LR;
  puVar11[0x48] = in_f30;
  puVar11[0x49] = in_f31;
  puVar11[0x47] = unaff_r31;
  puVar11[0x46] = unaff_r30;
  puVar11[0x45] = unaff_r29;
  puVar11[0x44] = unaff_r28;
  puVar11[0x43] = unaff_r27;
  puVar11[0x42] = unaff_r26;
  pvVar9 = moby->pVar;
  uVar28 = ZEXT48(pvVar9);
  mobyupdate_helpers::M912_004ad348();
  victim = *(MobyInstance **)((int)pvVar9 + 0x160);
  bVar1 = moby->state;
  fVar3 = moby->pClass->gScale * DAT_008f410c;
  moby->unk58 = 0.8;
  moby->scale = fVar3;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      fVar3 = (moby->pos).y - (victim->pos).y;
      fVar2 = (moby->pos).x - (victim->pos).x;
      fVar6 = (moby->pos).z - (victim->pos).z;
      if (SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3) <= DAT_008f4120) {
        mobyutil::Delt(0.0,DAT_0071f418 * 20.0,(float *)((int)pvVar9 + 0xf4));
      }
      else {
        mobyutil::Delt(*(float *)((int)pvVar9 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                       (float *)((int)pvVar9 + 0xf4));
      }
      fVar3 = (victim->pos).x - (moby->pos).x;
      fVar2 = (victim->pos).y - (moby->pos).y;
      fVar4 = ABS(fVar3);
      fVar6 = ABS(fVar2);
      *(float *)((int)puVar11 + 300) = fVar3;
      *(float *)(puVar11 + 0x26) = fVar2;
      *(float *)((int)puVar11 + 0x134) = fVar4 - fVar6;
      dVar30 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar11 + 300) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x134) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x26) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar11 + 300));
      if (*(float *)((int)puVar11 + 0x134) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)(puVar11 + 0x26));
      if (*(float *)((int)puVar11 + 0x134) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      dVar35 = dVar30;
      if (0.0 < fVar3) {
        lVar19 = uVar15 - 0x240;
        lVar26 = uVar15 - 0x68;
        lVar24 = uVar15 - 0x78;
        lVar29 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar11 + 0x1e4) = fVar3;
        *(float *)((int)puVar11 + 0x1dc) = fVar3;
        *(float *)(puVar11 + 0x3c) = fVar3;
        *(float *)(puVar11 + 0x3b) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x1dc) = *(float *)((int)puVar11 + 0x1dc) * fVar4;
        *(float *)(puVar11 + 0x3c) = *(float *)(puVar11 + 0x3c) * fVar3;
        *(float *)((int)puVar11 + 0x1e4) = *(float *)((int)puVar11 + 0x1e4) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar19 + 0x1d8) = *(float *)((int)lVar19 + 0x1c8) * fVar3 * fVar3;
          iVar22 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar26 = uVar15 - 0x78;
        pfVar25 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar24 = lVar26;
        do {
          fVar3 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar19 + 0x1d8) = *(float *)((int)lVar19 + 0x1d8) * fVar3;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar24 = 2;
        lVar19 = lVar20;
        do {
          iVar22 = (int)lVar19;
          iVar12 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar22 + 0x1d8)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar2);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar35,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar16,&DAT_00720000,uVar28 + 400);
      fVar3 = (moby->rotation).z;
      fVar6 = fVar3 + 1.5707963;
      fVar2 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar2 = fVar3;
      }
      fVar4 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar4 = fVar6;
      }
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
        fVar5 = fVar2;
      }
      *(undefined4 *)(puVar11 + 0xf) = 0;
      fVar3 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
        fVar3 = fVar4;
      }
      fVar6 = fVar5 * fVar5;
      fVar2 = fVar3 * fVar3;
      fVar4 = fVar6 * fVar6 * fVar5;
      fVar13 = fVar2 * fVar2 * fVar3;
      fVar7 = fVar6 * fVar4;
      fVar14 = fVar2 * fVar13;
      *(float *)((int)puVar11 + 0x74) =
           (fVar6 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * 2.0
      ;
      dVar35 = 1.0;
      *(float *)(puVar11 + 0xe) =
           (fVar2 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3) *
           2.0;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0xe,
                 puVar11 + 0x10);
      iVar22 = DAT_00969ea0;
      fVar3 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar4 = fVar3 - *(float *)((int)pvVar9 + 0x174);
      fVar6 = (moby->pos).z;
      fVar5 = fVar2 - *(float *)((int)pvVar9 + 0x170);
      fVar7 = fVar6 - *(float *)((int)pvVar9 + 0x178);
      if ((DAT_008f4124 < SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4)) ||
         (*(int *)((int)pvVar9 + 0x164) == 2)) {
        moby->state = '\b';
      }
      else {
        fVar4 = (victim->pos).y;
        fVar5 = (victim->pos).x;
        fVar7 = fVar3 - fVar4;
        fVar13 = fVar2 - fVar5;
        if ((SQRT(fVar13 * fVar13 + fVar7 * fVar7) < DAT_008f4120) &&
           (ABS((double)((victim->pos).z - fVar6)) < dVar35)) {
          dVar35 = 10.5;
          puVar11[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          if (iVar22 < *(int *)((int)puVar11 + 0x1fc)) {
            fVar4 = fVar4 - fVar3;
            fVar5 = fVar5 - fVar2;
            dVar33 = ABS((double)fVar4);
            dVar32 = ABS((double)fVar5);
            *(float *)(puVar11 + 0x24) = fVar5;
            *(float *)((int)puVar11 + 0x124) = fVar4;
            fVar3 = (moby->rotation).z;
            *(float *)(puVar11 + 0x25) = (float)(dVar32 - dVar33);
            uVar28 = (ulonglong)(*(uint *)(puVar11 + 0x24) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar11 + 0x25) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar11 + 0x124) >> 0x1d) & 4;
            dVar31 = ABS((double)*(float *)(puVar11 + 0x24));
            if ((double)*(float *)(puVar11 + 0x25) - dVar30 < 0.0) {
              dVar31 = dVar33;
            }
            fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
            fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
            dVar33 = ABS((double)*(float *)((int)puVar11 + 0x124));
            if ((double)*(float *)(puVar11 + 0x25) - dVar30 < 0.0) {
              dVar33 = dVar32;
            }
            if (dVar30 < dVar31) {
              lVar19 = uVar15 - 0x240;
              lVar26 = uVar15 - 0x88;
              lVar24 = uVar15 - 0x98;
              lVar29 = 2;
              fVar4 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
              fVar5 = fVar4 * fVar4;
              *(float *)((int)puVar11 + 0x1c4) = fVar4;
              *(float *)((int)puVar11 + 0x1bc) = fVar4;
              *(float *)(puVar11 + 0x38) = fVar4;
              *(float *)(puVar11 + 0x37) = fVar4;
              fVar4 = fVar5 * fVar5;
              *(float *)((int)puVar11 + 0x1bc) = *(float *)((int)puVar11 + 0x1bc) * fVar5;
              *(float *)(puVar11 + 0x38) = *(float *)(puVar11 + 0x38) * fVar4;
              *(float *)((int)puVar11 + 0x1c4) = *(float *)((int)puVar11 + 0x1c4) * fVar4 * fVar5;
              do {
                *(float *)((int)lVar19 + 0x1b8) = *(float *)((int)lVar19 + 0x1a8) * fVar4 * fVar4;
                iVar22 = (int)lVar24;
                lVar24 = lVar24 + 8;
                lVar19 = lVar19 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
                lVar26 = lVar26 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar29 = 4;
              lVar26 = uVar15 - 0x98;
              pfVar25 = (float *)&DAT_007358e0;
              lVar19 = lVar20;
              lVar24 = lVar26;
              do {
                fVar4 = *pfVar25;
                fVar5 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar19 + 0x1b8) = *(float *)((int)lVar19 + 0x1b8) * fVar4;
                lVar19 = lVar19 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
                lVar24 = lVar24 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar19 = 2;
              do {
                iVar22 = (int)lVar20;
                iVar12 = (int)lVar26;
                lVar20 = lVar20 + 0x10;
                lVar26 = lVar26 + 0x10;
                dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x1b8)) +
                                  *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                                 *(float *)(iVar12 + 0xc));
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
              dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar2);
            }
            dVar30 = (double)fastfunc::FastSubRots(fVar3,(float)dVar30);
            if ((dVar30 < 0.2617993950843811) && (moby->state = '\a', moby->animationId != '\x01'))
            {
              puVar11[0x3f] = (longlong)(int)((double)animationSpeed * dVar35);
              mobyutil::MB_SetAnimation(lVar16,1,0,*(undefined4 *)((int)puVar11 + 0x1fc));
            }
          }
        }
      }
    }
    else if (bVar1 == 4) {
      iVar22 = fastfunc::FastDecTimerS32(uVar28 + 0x1a8);
      if (iVar22 != 0) {
        moby->state = '\x05';
        dVar30 = (double)mobyutil::MB_randRangeFloat
                                   (*(float *)((int)pvVar9 + 0x198) * 0.017453292,
                                    *(float *)((int)pvVar9 + 0x198) * -0.017453292);
        *(float *)((int)pvVar9 + 0x194) = (float)dVar30;
        if (moby->animationId != '\x16') {
          puVar11[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar16,0x16,0,*(undefined4 *)((int)puVar11 + 0x1fc));
        }
      }
    }
    else if (bVar1 == 3) {
      uVar17 = FUN_005e8338((double)(*(float *)((int)pvVar9 + 0x120) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar9 + 0x124) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar17,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar16,&DAT_004ad888,uVar28 + 400);
      if (*(int *)((int)pvVar9 + 0x164) != 2) {
        moby->state = '\x04';
        puVar11[0x3f] = (longlong)*(int *)((int)pvVar9 + 0x1b8);
        mobyutil::MB_randRangeFloat(0.0,(float)(longlong)puVar11[0x3f]);
        uVar21 = fastfunc::FastDoubleToInt();
        *(undefined4 *)((int)pvVar9 + 0x1a8) = uVar21;
      }
    }
    else if (bVar1 == 2) {
      moby->unk58 = 1.5;
      if (moby->animationId == '\x06') {
        if (*(int *)((int)pvVar9 + 0x1a8) == 0) {
          dVar30 = (double)mobyutil::MB_randRangeFloat(0.0,20.0);
          uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar9 + 0x1a8) = uVar21;
        }
        else {
          iVar22 = fastfunc::FastDecTimerS32(uVar28 + 0x1a8);
          if ((iVar22 != 0) && (moby->animationId != '\x15')) {
            uVar17 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar16,0x15,0,uVar17);
          }
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        dVar30 = (double)FUN_005e8588(lVar16 + 0x10,&g_heroPosition);
        if ((double)DAT_008f4130 <= dVar30) {
          moby->state = '\x03';
          if (moby->animationId != '\x14') {
            puVar11[0x3f] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar16,0x14,0,*(undefined4 *)((int)puVar11 + 0x1fc));
          }
        }
        else {
          moby->state = '\x05';
          dVar30 = (double)mobyutil::MB_randRangeFloat
                                     (*(float *)((int)pvVar9 + 0x198) * 0.017453292,
                                      *(float *)((int)pvVar9 + 0x198) * -0.017453292);
          *(float *)((int)pvVar9 + 0x194) = (float)dVar30;
          if (moby->animationId != '\x16') {
            uVar17 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar16,0x16,0,uVar17);
          }
        }
      }
    }
    else if (bVar1 == 1) {
      iVar22 = *(int *)((int)pvVar9 + 0x164);
      moby->unk58 = 0.25;
      if ((iVar22 != 2) || (*(int *)((int)pvVar9 + 0x1b4) != 0)) {
        moby->state = '\x02';
        uVar21 = idol::GetAnimDuration(1);
        *(undefined4 *)((int)pvVar9 + 0x1a8) = uVar21;
      }
    }
    else if (bVar1 == 0) {
      *(undefined2 *)((int)pvVar9 + 0x24) = 0x14;
      *(undefined1 *)((int)pvVar9 + 0x28) = 3;
      MVar8 = moby->modeBits;
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x41a00000;
      moby->modeBits = MVar8 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
      FUN_005e7e98(uVar28 + 0x170,lVar16 + 0x10);
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
      *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar9 + 0xd8) = 0x40000000;
      uVar21 = fastfunc::FastDoubleToInt((double)(DAT_008f410c * 1024.0));
      *(float *)((int)pvVar9 + 0xd4) = DAT_008f410c;
      fVar3 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar9 + 0xd0) = uVar21;
      *(float *)((int)pvVar9 + 0xf4) = *(float *)((int)pvVar9 + 0x1a4) * fVar3;
      moby->state = '\x03';
      if (moby->animationId != '\x14') {
        mobyutil::MB_SetAnimation(lVar16,0x14,0,0);
      }
      *(float *)((int)pvVar9 + 0x1a0) = DAT_008f4130;
    }
  }
  else if (bVar1 == 0xb) {
    uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar23 & 0x40) == 0) {
      fVar10 = (moby->pos).z;
      uVar23 = (int)fVar10 >> 0x1f;
      if ((int)((uVar23 >> 1 ^ (uint)fVar10) - uVar23) < 0x40000000) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar1 == 10) {
    uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar23 & 0x41) == 0) {
      if ((moby->pos).z < *(float *)((int)pvVar9 + 0x178) - 0.2) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\t';
      if (moby->animationId != '\x16') {
        puVar11[0x3f] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar16,0x16,0,*(undefined4 *)((int)puVar11 + 0x1fc));
      }
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x74,0x4ad888);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar21 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x1a8,uVar28
                         );
      *(undefined4 *)((int)pvVar9 + 0x1a8U & 0xfffffffc) = uVar21;
    }
  }
  else if (bVar1 == 9) {
    mobyutil::Delt(*(float *)((int)pvVar9 + 0x1a4) * 3.0 * mobyutil::g_FrameTime,DAT_0071f418 * 20.0
                   ,(float *)((int)pvVar9 + 0xf4));
    fVar3 = (victim->pos).x - (moby->pos).x;
    fVar2 = (victim->pos).y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar2);
    *(float *)(puVar11 + 0x21) = fVar3;
    *(float *)((int)puVar11 + 0x10c) = fVar2;
    *(float *)(puVar11 + 0x22) = fVar4 - fVar6;
    fVar2 = mobyutil::g_FrameTime;
    dVar30 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar11 + 0x21) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x22) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x10c) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar11 + 0x21));
    if (*(float *)(puVar11 + 0x22) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar5 = ABS(*(float *)((int)puVar11 + 0x10c));
    if (*(float *)(puVar11 + 0x22) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar35 = dVar30;
    if (0.0 < fVar3) {
      lVar19 = uVar15 - 0x240;
      lVar26 = uVar15 - 200;
      lVar24 = uVar15 - 0xd8;
      lVar29 = 2;
      fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)((int)puVar11 + 0x184) = fVar3;
      *(float *)((int)puVar11 + 0x17c) = fVar3;
      *(float *)(puVar11 + 0x30) = fVar3;
      *(float *)(puVar11 + 0x2f) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0x17c) = *(float *)((int)puVar11 + 0x17c) * fVar5;
      *(float *)(puVar11 + 0x30) = *(float *)(puVar11 + 0x30) * fVar3;
      *(float *)((int)puVar11 + 0x184) = *(float *)((int)puVar11 + 0x184) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar19 + 0x178) = *(float *)((int)lVar19 + 0x168) * fVar3 * fVar3;
        iVar22 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar15 - 0xd8;
      pfVar25 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar24 = lVar26;
      do {
        fVar3 = *pfVar25;
        fVar5 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar19 + 0x178) = *(float *)((int)lVar19 + 0x178) * fVar3;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar24 = 2;
      lVar19 = lVar20;
      do {
        iVar22 = (int)lVar19;
        iVar12 = (int)lVar26;
        lVar19 = lVar19 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar22 + 0x178)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar4);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar35,0x3fa99999a0000000,0x3fd3333340000000,(double)(fVar2 * 6.2831855),lVar16,
               &DAT_004ad888,uVar28 + 400);
    fVar3 = (victim->pos).x - (moby->pos).x;
    fVar2 = (victim->pos).y - (moby->pos).y;
    dVar31 = ABS((double)fVar3);
    dVar32 = ABS((double)fVar2);
    *(float *)((int)puVar11 + 0xfc) = fVar3;
    *(float *)(puVar11 + 0x20) = fVar2;
    dVar33 = (double)(moby->rotation).z;
    *(float *)((int)puVar11 + 0x104) = (float)(dVar31 - dVar32);
    uVar18 = (ulonglong)(*(uint *)((int)puVar11 + 0xfc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x104) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x20) >> 0x1d) & 4;
    dVar35 = ABS((double)*(float *)((int)puVar11 + 0xfc));
    if ((double)*(float *)((int)puVar11 + 0x104) - dVar30 < 0.0) {
      dVar35 = dVar32;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar32 = ABS((double)*(float *)(puVar11 + 0x20));
    if ((double)*(float *)((int)puVar11 + 0x104) - dVar30 < 0.0) {
      dVar32 = dVar31;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (dVar30 < dVar35) {
      lVar19 = uVar15 - 0x240;
      lVar24 = uVar15 - 0xf8;
      lVar26 = uVar15 - 0xe8;
      lVar29 = 2;
      fVar6 = (float)(dVar32 - dVar35) / (float)(dVar32 + dVar35);
      fVar4 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x164) = fVar6;
      *(float *)((int)puVar11 + 0x15c) = fVar6;
      *(float *)(puVar11 + 0x2c) = fVar6;
      *(float *)(puVar11 + 0x2b) = fVar6;
      fVar6 = fVar4 * fVar4;
      *(float *)((int)puVar11 + 0x15c) = *(float *)((int)puVar11 + 0x15c) * fVar4;
      *(float *)(puVar11 + 0x2c) = *(float *)(puVar11 + 0x2c) * fVar6;
      *(float *)((int)puVar11 + 0x164) = *(float *)((int)puVar11 + 0x164) * fVar6 * fVar4;
      do {
        *(float *)((int)lVar19 + 0x158) = *(float *)((int)lVar19 + 0x148) * fVar6 * fVar6;
        iVar22 = (int)lVar24;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar15 - 0xf8;
      pfVar25 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar24 = lVar26;
      do {
        fVar6 = *pfVar25;
        fVar4 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar19 + 0x158) = *(float *)((int)lVar19 + 0x158) * fVar6;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar19 = 2;
      do {
        iVar22 = (int)lVar20;
        iVar12 = (int)lVar26;
        lVar20 = lVar20 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x158)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar3 + fVar2);
    }
    dVar35 = (double)fastfunc::FastWrapRot((float)dVar30,3.14159);
    fVar3 = (float)(dVar35 + 1.570796251296997);
    dVar30 = (double)(float)(3.141592502593994 - dVar35);
    if (dVar35 - (double)(float)(3.141592502593994 - dVar35) < 0.0) {
      dVar30 = dVar35;
    }
    fVar2 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar2 = fVar3;
    }
    dVar31 = (double)(float)(-3.141592502593994 - dVar35);
    if ((double)(float)(-3.141592502593994 - dVar35) - dVar30 < 0.0) {
      dVar31 = dVar30;
    }
    *(undefined4 *)(puVar11 + 0x17) = 0;
    fVar6 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
      fVar6 = fVar2;
    }
    dVar30 = (double)(float)(dVar31 * dVar31);
    fVar4 = fVar6 * fVar6;
    dVar34 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar31));
    fVar3 = fVar4 * fVar4 * fVar6;
    dVar32 = (double)(float)(dVar30 * dVar34);
    fVar2 = fVar4 * fVar3;
    *(float *)((int)puVar11 + 0xb4) =
         ((float)(dVar30 * dVar32) * 2.601887e-06 +
         (float)(dVar32 * -0.0001980741071747616 +
                (double)(float)(dVar34 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar30 * dVar31) *
                                               -0.16666656732559204 + dVar31)))) * 2.0;
    (moby->rotation).z = (float)dVar35;
    *(float *)(puVar11 + 0x16) =
         (fVar4 * fVar2 * 2.601887e-06 +
         fVar2 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) * 2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0x16,
               puVar11 + 0x18);
    (moby->rotation).z = (float)dVar33;
    iVar22 = fastfunc::FastDecTimerS32(uVar28 + 0x1a8);
    if ((iVar22 != 0) ||
       (fVar3 = (moby->pos).y - (victim->pos).y, fVar2 = (moby->pos).x - (victim->pos).x,
       fVar6 = (moby->pos).z - (victim->pos).z,
       DAT_008f4134 < SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3))) {
      moby->state = '\a';
      *(float *)((int)pvVar9 + 0xf4) = mobyutil::g_FrameTime * 5.0;
      uVar21 = DAT_008f4140;
      if (DAT_008f413c == 0) {
        if (moby->animationId != '\x01') {
          puVar11[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar16,1,10,*(undefined4 *)((int)puVar11 + 0x1fc));
        }
      }
      else if (moby->animationId != '\x01') {
        puVar11[0x3f] = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(lVar16,1,uVar21,*(undefined4 *)((int)puVar11 + 0x1fc));
      }
    }
  }
  else if (bVar1 == 8) {
    mobyutil::Delt(*(float *)((int)pvVar9 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                   (float *)((int)pvVar9 + 0xf4));
    fVar3 = *(float *)((int)pvVar9 + 0x170) - (moby->pos).x;
    fVar2 = *(float *)((int)pvVar9 + 0x174) - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar2);
    *(float *)(puVar11 + 0x1e) = fVar3;
    *(float *)((int)puVar11 + 0xf4) = fVar2;
    *(float *)(puVar11 + 0x1f) = fVar4 - fVar6;
    fVar2 = mobyutil::g_FrameTime;
    dVar30 = 0.0;
    uVar27 = (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1d) & 4;
    uVar18 = uVar27 << 2 | 0x735900;
    fVar3 = ABS(*(float *)(puVar11 + 0x1e));
    if (*(float *)(puVar11 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
    fVar5 = ABS(*(float *)((int)puVar11 + 0xf4));
    if (*(float *)(puVar11 + 0x1f) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)((int)uVar18 + 4);
    if (0.0 < fVar3) {
      lVar19 = uVar15 - 0x240;
      lVar24 = uVar15 - 0x118;
      lVar26 = uVar15 - 0x108;
      lVar29 = 2;
      fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)((int)puVar11 + 0x144) = fVar3;
      *(float *)((int)puVar11 + 0x13c) = fVar3;
      *(float *)(puVar11 + 0x28) = fVar3;
      *(float *)(puVar11 + 0x27) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar5;
      *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar3;
      *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x128) * fVar3 * fVar3;
        iVar22 = (int)lVar24;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar15 - 0x118;
      uVar18 = ZEXT48(&DAT_007358e0);
      lVar19 = lVar20;
      lVar24 = lVar26;
      do {
        pfVar25 = (float *)uVar18;
        fVar3 = pfVar25[1];
        uVar18 = uVar18 + 8;
        *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x138) * *pfVar25;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar19 = 2;
      do {
        iVar22 = (int)lVar20;
        iVar12 = (int)lVar26;
        lVar20 = lVar20 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x138)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar4);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar30,0x3fa99999a0000000,0x3fd3333340000000,(double)(fVar2 * 6.2831855),lVar16,
               uVar18,uVar28 + 400);
    fVar3 = (moby->rotation).z;
    fVar6 = fVar3 + 1.5707963;
    fVar2 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar2 = fVar3;
    }
    fVar4 = 3.1415925 - fVar6;
    if (fVar6 - (3.1415925 - fVar6) < 0.0) {
      fVar4 = fVar6;
    }
    fVar5 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
      fVar5 = fVar2;
    }
    *(undefined4 *)(puVar11 + 0x1b) = 0;
    fVar3 = -3.1415925 - fVar6;
    if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
      fVar3 = fVar4;
    }
    fVar6 = fVar5 * fVar5;
    fVar2 = fVar3 * fVar3;
    fVar4 = fVar6 * fVar6 * fVar5;
    fVar7 = fVar6 * fVar4;
    fVar13 = fVar2 * fVar2 * fVar3;
    fVar14 = fVar2 * fVar13;
    *(float *)((int)puVar11 + 0xd4) =
         (fVar6 * fVar7 * 2.601887e-06 +
         fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * 2.0;
    dVar30 = 1.0;
    *(float *)(puVar11 + 0x1a) =
         (fVar2 * fVar14 * 2.601887e-06 +
         fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3) * 2.0
    ;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0x1a,
               puVar11 + 0x1c);
    fVar3 = (moby->pos).y - *(float *)((int)pvVar9 + 0x174);
    fVar2 = (moby->pos).x - *(float *)((int)pvVar9 + 0x170);
    fVar6 = (moby->pos).z - *(float *)((int)pvVar9 + 0x178);
    if (dVar30 <= (double)SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3)) {
      if ((*(int *)((int)pvVar9 + 0x164) != 2) &&
         (moby->state = '\x05', moby->animationId != '\x16')) {
        puVar11[0x3f] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar16,0x16,0,*(undefined4 *)((int)puVar11 + 0x1fc));
      }
    }
    else {
      moby->state = '\x03';
      if (moby->animationId != '\x14') {
        puVar11[0x3f] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar16,0x14,0,*(undefined4 *)((int)puVar11 + 0x1fc));
      }
    }
  }
  else if (bVar1 == 7) {
    dVar30 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((20.0 < dVar30) && (dVar30 = (double)mobyfunc::BlendAnimFrame(moby), dVar30 < 24.0)) {
      fVar3 = (victim->pos).x - (moby->pos).x;
      fVar2 = (victim->pos).y - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar2);
      *(float *)((int)puVar11 + 0x114) = fVar3;
      *(float *)(puVar11 + 0x23) = fVar2;
      fVar3 = (moby->rotation).z;
      *(float *)((int)puVar11 + 0x11c) = fVar6 - fVar5;
      fVar2 = 0.0;
      uVar23 = *(uint *)((int)puVar11 + 0x11c);
      uVar28 = (ulonglong)(*(uint *)((int)puVar11 + 0x114) >> 0x1c) & 8 |
               (ulonglong)(uVar23 >> 0x1e) & 2 | (ulonglong)(*(uint *)(puVar11 + 0x23) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar11 + 0x114));
      if (*(float *)((int)puVar11 + 0x11c) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      fVar13 = ABS(*(float *)(puVar11 + 0x23));
      if (*(float *)((int)puVar11 + 0x11c) - 0.0 < 0.0) {
        fVar13 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar19 = uVar15 - 0x240;
        uVar23 = 2;
        lVar26 = uVar15 - 0xa8;
        lVar24 = uVar15 - 0xb8;
        lVar29 = 2;
        fVar6 = (fVar13 - fVar4) / (fVar13 + fVar4);
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x1a4) = fVar6;
        *(float *)((int)puVar11 + 0x19c) = fVar6;
        *(float *)(puVar11 + 0x34) = fVar6;
        *(float *)(puVar11 + 0x33) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x19c) = *(float *)((int)puVar11 + 0x19c) * fVar4;
        *(float *)(puVar11 + 0x34) = *(float *)(puVar11 + 0x34) * fVar6;
        *(float *)((int)puVar11 + 0x1a4) = *(float *)((int)puVar11 + 0x1a4) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar19 + 0x198) = *(float *)((int)lVar19 + 0x188) * fVar6 * fVar6;
          iVar22 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar26 = uVar15 - 0xb8;
        pfVar25 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar19 + 0x198) = *(float *)((int)lVar19 + 0x198) * fVar6;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar19 = 2;
        do {
          iVar22 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar12 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar22 + 0x198) + *(float *)(iVar12 + 4) +
                  *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar7 + fVar5;
      }
      dVar30 = (double)fastfunc::FastSubRots(fVar3,fVar2);
      if ((dVar30 < 0.5235987901687622) &&
         (fVar3 = (moby->pos).y - (victim->pos).y, fVar2 = (moby->pos).x - (victim->pos).x,
         SQRT(fVar2 * fVar2 + fVar3 * fVar3) < DAT_008f4120)) {
        fVar3 = (moby->rotation).z;
        fVar2 = fVar3 + 1.5707963;
        fVar6 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar6 = fVar3;
        }
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar3 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar3 = fVar4;
        }
        fVar2 = fVar5 * fVar5;
        fVar6 = fVar3 * fVar3;
        fVar13 = fVar2 * fVar2 * fVar5;
        *(undefined4 *)(puVar11 + 0x13) = 0;
        fVar4 = fVar6 * fVar6 * fVar3;
        fVar14 = fVar2 * fVar13;
        fVar7 = fVar6 * fVar4;
        *(float *)((int)puVar11 + 0x94) =
             (fVar2 * fVar14 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
             0.2;
        *(float *)(puVar11 + 0x12) =
             (fVar6 * fVar7 * 2.601887e-06 +
             fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar6 * fVar3 * -0.16666657 + fVar3) *
             0.2;
        mobyfunc::GetBonePosition(lVar16,0,uVar15 - 0x1b0);
        mobyutil::CollDamageMobyDirect
                  (1.0,victim,moby,1,uVar23,(float *)(uVar15 - 0x1b0),(float *)(puVar11 + 0x12));
        return;
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x16')) {
      puVar11[0x3f] = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar16,0x16,0,*(undefined4 *)((int)puVar11 + 0x1fc));
    }
  }
  return;
}



//==== 004af340  ns=mobyupdate_helpers  size=0x14
// sig: undefined M913_004af340(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M913_004af340(void)

{
  DAT_008f4190 = 0x10000;
  return;
}



//==== 004af358  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_913(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 913 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_913(MobyInstance *moby)

{
  return moby;
}



//==== 004af35c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M914_004af35c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M914_004af35c(void)

{
  DAT_008f4200 = 0x10000;
  return;
}



//==== 004af370  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M914_004af370(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M914_004af370(int param_1)

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
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],2,&DAT_00a1bf80);
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



//==== 004af4b0  ns=mobyupdate_unsorted  size=0x73c
// sig: undefined UpdateMoby_914(MobyInstance * moby)
// callers(0): 
// callees(15): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fe484 mobyutil::MB_randRange; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 00119488 mobyutil::MB_SetPointAheadOfMoby; 0011b728 mobyutil::MB_UnlockSkillPoint; 00126dd8 partupd::SpawnPart_22; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 00502b08 fastfunc::FastVecAddSelf

/* Moby 914 */

void mobyupdate_unsorted::UpdateMoby_914(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [40];
  
  lVar10 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  if ((moby->enabled != '\0') &&
     (fVar5 = (moby->pos).y - GameCamera.posY, fVar6 = (moby->pos).x - GameCamera.posX,
     fVar7 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 26.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar10);
    moby->shadow = '\x15';
  }
  uVar2 = moby->uid;
  if ((((&DAT_00a545c4)[(short)uVar2] != '\0') ||
      ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
       1 << (uVar2 & 0x1f)) != 0)) && (moby->state != '\x03')) {
    moby->state = '\x03';
    mobyutil::MB_SetAnimationNoBlend(lVar10,1,0);
  }
  iVar11 = mobyutil::MB_damage(lVar10,0xffffffffffffffff,0);
  if (((iVar11 != 0) && (*(int *)(iVar11 + 0x20) != 0)) &&
     ((*(char *)(iVar11 + 0x28) == '\x03' &&
      ((uVar2 = moby->uid, (&DAT_00a545c4)[(short)uVar2] == '\0' &&
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
        1 << (uVar2 & 0x1f)) == 0)))))) {
    mobyutil::MB_UnlockSkillPoint(5);
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar10,local_e0,local_d0,0,&DAT_004af464,10,3,0x10);
    moby->state = '\x03';
    mobyutil::MB_SetAnimationNoBlend(lVar10,1,0);
    uVar2 = moby->uid;
    iVar8 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    iVar11 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    uVar4 = *(uint *)(&DAT_00a54dd0 + iVar11);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) | 1 << (uVar2 & 0x1f);
    *(uint *)(&DAT_00a54dd0 + iVar11) = uVar4 | 1 << (uVar2 & 0x1f);
  }
  moby->damage = -1;
  if ((UnlockableItems.swingshot == '\0') || (moby->state == '\x03')) {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar4 = g_heroMobyPtr->color;
        uVar9 = g_heroMobyPtr->light;
        moby->state = '\x01';
        moby->color = uVar4;
        moby->light = uVar9;
        FUN_004d3720(lVar10,pvVar3);
        if (MiscLevelFlags.field25_0x19 != 0) {
          *(undefined2 *)((int)pvVar3 + 0x36) = 2;
          *(undefined2 *)((int)pvVar3 + 4) = 1;
        }
      }
      else {
        iVar11 = FUN_004d3870(lVar10,pvVar3);
        if (iVar11 != 0) {
          MiscLevelFlags.field25_0x19 = 1;
          mobyutil::MB_SetPointAheadOfMoby(0x40059999a0000000,lVar10);
          moby->state = '\x02';
        }
      }
    }
    else if (bVar1 < 3) {
      if (((g_gameMode != GAME_MODE_SCENE) &&
          (moby->state = '\x01', *(short *)((int)pvVar3 + 4) == 2)) &&
         (iVar11 = *(int *)((int)pvVar3 + 0x4c), iVar11 != -1)) {
        respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar11].pos,(Vec4 *)&Cuboids[iVar11].rot);
      }
    }
    else if (bVar1 < 4) {
      mobyutil::MB_randRot();
      dVar14 = 0.0;
      dVar13 = 0.25;
      mobyutil::MB_randRangeFloat(0.0,0.25);
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar13);
      dVar13 = 1.0;
      mobyutil::MB_randRangeFloat((float)dVar14,1.0);
      mobyutil::MB_randRot();
      dVar15 = 0.5;
      mobyutil::MB_randRangeFloat((float)dVar14,0.5);
      mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar13);
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
      fastfunc::FastVecAddSelf(auStack_a0,local_b0,lVar10 + 0x10);
      iVar11 = mobyutil::MB_randInt(3);
      if (iVar11 == 0) {
        uVar12 = 0x410339e000000000;
        mobyutil::MB_randRange(0x410339e000000000,0x3c,0x78);
        partupd::SpawnPart_22(uVar12,local_b0,local_c0,0x20202020,&DAT_007f7f7f);
      }
    }
  }
  return;
}



//==== 004afbec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M917_004afbec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M917_004afbec(void)

{
  DAT_008f4270 = 0x10000;
  return;
}



//==== 004afc18  ns=mobyupdate_helpers  size=0x390
// sig: undefined M917_004afc18(void)
// callers(0): 
// callees(5): 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M917_004afc18(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xd0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar12;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = unaff_r31;
  puVar8[0x16] = unaff_r28;
  puVar8[0x17] = unaff_r29;
  puVar8[0x18] = unaff_r30;
  pvVar5 = param_1->pVar;
  uVar20 = ZEXT48(pvVar5);
  iVar13 = mobyutil::MB_damage(param_1,0x330000,0);
  mobyutil::MB_HandleDamage(param_1,iVar13,uVar20 + 0x20,0,puVar8 + 0xe,(int)puVar8 + 0x74,0,4);
  fVar2 = (param_1->pos).x - g_heroPosition.x;
  fVar9 = (param_1->pos).y - g_heroPosition.y;
  fVar1 = ABS(fVar2);
  fVar4 = ABS(fVar9);
  *(float *)(puVar8 + 0x10) = fVar2;
  *(float *)((int)puVar8 + 0x84) = fVar9;
  *(float *)(puVar8 + 0x11) = fVar1 - fVar4;
  fVar9 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
  iVar6 = *(int *)(puVar8 + 0xe);
  fVar2 = ABS(*(float *)(puVar8 + 0x10));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar2 = fVar4;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar3 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar18 = uVar12 - 0xc0;
    lVar17 = uVar12 - 0x44;
    lVar16 = uVar12 - 0x34;
    lVar21 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar8 + 0x13) = fVar2;
    *(float *)(puVar8 + 0x12) = fVar2;
    *(float *)((int)puVar8 + 0x94) = fVar2;
    *(float *)((int)puVar8 + 0x8c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar3;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar2;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x7c) * fVar2 * fVar2;
      iVar10 = (int)lVar17;
      lVar18 = lVar18 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar18 = uVar12 - 0x44;
    pfVar19 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar16 = lVar18;
    lVar17 = lVar14;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x8c) = *(float *)((int)lVar17 + 0x8c) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      fVar9 = fVar9 + *(float *)(iVar10 + 0x8c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar9 = (fVar9 + 0.7853982) * fVar4 + fVar1;
  }
  if (iVar6 != 1) {
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    param_1->state = '\x06';
    auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(8,0x4afc00);
    auVar25 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar23 = ZEXT416(0xffffffff);
    auVar27 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    *(undefined4 *)((int)puVar8 + 0x7c) = 0x3f800000;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar24);
    *(float *)(puVar8 + 0xf) = fVar9;
    auVar23 = ZEXT416(0xffffffff);
    auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = ZEXT416(0xffffffff);
    auVar29 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar28 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar23 = ZEXT416(0xffffffff);
    auVar30 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x178,uVar20);
    *(undefined4 *)((int)pvVar5 + 0x178U & 0xfffffffc) = uVar7;
    auVar23 = loadVectorLeftIndexed(0xc,0x4afc00);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar26,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                         auVar24);
    auVar26 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar23 = loadVectorLeftIndexed(0x10,0x4afc00);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = vectorReciprocalEstimateFloatingPoint(auVar25);
    auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar23,auVar25,auVar24);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar27,auVar26);
    auVar27 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    auVar26 = vectorNegativeMultiplySubtractFloatingPoint(auVar23,auVar25,auVar24);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar23,auVar26,auVar28);
    auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar25,auVar24);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar26,auVar23,auVar27);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar29);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x17c,uVar20);
    *(undefined4 *)((int)pvVar5 + 0x17cU & 0xfffffffc) = uVar7;
    mobyutil::MB_SetAnimationNoBlend(param_1,8,4);
    param_1->unk58 = 2.0;
    uVar7 = *(undefined4 *)(iVar13 + 0x18);
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(puVar8 + 7) = uVar7;
    uVar7 = *(undefined4 *)(iVar13 + 0x1c);
    *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
    *(undefined4 *)((int)puVar8 + 0x3c) = uVar7;
    mobyutil::MB_VecAtan2Angles(puVar8[6],puVar8[7],uVar12 - 0x58,uVar20 + 0x17c,uVar12 - 0x54);
    dVar22 = (double)fastfunc::FastWrapRot(3.1415927,*(float *)(puVar8 + 0xf));
    (param_1->rotation).z = (float)dVar22;
  }
  param_1->damage = -1;
  return;
}



//==== 004affb0  ns=mobyupdate_unsorted  size=0x21c
// sig: undefined UpdateMoby_{915_916_917}(MobyInstance * moby)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 005026a0 fastfunc::FastSubRots

/* Moby 915
   Moby 916
   Moby 917 */

void mobyupdate_unsorted::UpdateMoby__915_916_917_(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xb0;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar11;
  puVar7[0x18] = in_LR;
  fVar1 = (moby->pos).x;
  puVar7[0x15] = unaff_r31;
  fVar1 = g_heroPosition.x - fVar1;
  fVar2 = g_heroPosition.y - (moby->pos).y;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar7 + 0xe) = fVar1;
  *(float *)((int)puVar7 + 0x74) = fVar2;
  *(float *)(puVar7 + 0xf) = fVar4 - fVar3;
  fVar1 = 0.0;
  fVar2 = (moby->rotation).z;
  uVar13 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
  fVar5 = ABS(*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar8 = fVar4;
  }
  if (0.0 < fVar5) {
    lVar16 = uVar11 - 0xa0;
    lVar15 = uVar11 - 0x34;
    lVar14 = uVar11 - 0x24;
    lVar18 = 2;
    fVar4 = (fVar8 - fVar5) / (fVar8 + fVar5);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x11) = fVar4;
    *(float *)(puVar7 + 0x10) = fVar4;
    *(float *)((int)puVar7 + 0x84) = fVar4;
    *(float *)((int)puVar7 + 0x7c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar5;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar4 * fVar4;
      iVar9 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x34;
    lVar18 = 4;
    pfVar17 = (float *)&DAT_007358e0;
    lVar14 = lVar16;
    lVar15 = lVar12;
    do {
      fVar4 = *pfVar17;
      fVar5 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar4;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    do {
      iVar9 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar3;
  }
  fastfunc::FastSubRots(fVar1,fVar2);
  mobyfunc::DeleteMoby(moby);
  return;
}



