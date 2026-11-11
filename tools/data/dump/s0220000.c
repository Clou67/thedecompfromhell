//==== 00221048  ns=mobyupd::update1242  size=0x151c
// sig: undefined UpdateMoby_1242_JetFighterPoki(MobyInstance * moby)
// callers(0): 
// callees(28): 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007b310 help::Help_QueueMessage; 00083950 hero::HandleHeroDeath; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000c8b28 hud::Hud_SetEntryValueById; 000f1e50 mobyfunc::SetLevelFlag; 000f20f0 mobyutil::MB_BSphereGap; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fe610 mobyutil::MB_SphericalToVector; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 0011aeec mobyutil::MB_ShowPersistentMessage; 0011ccc8 music::music_SetTransition; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0021d8f8 mobyupd::update1242::M1242_0021d8f8; 0021ff90 mobyupd::update1242::M1242_0021ff90; 00248c9c FUN_00248c9c; 00248d40 FUN_00248d40; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005cd098 libc::printf
// strings: 00a1000c: 'None' | 00655044: 'no final place for jet during victory, so use init pos\n' | 0065507c: 'no final place for hero during victory, so just fall\n'

/* Moby 1242 */

void mobyupd::update1242::UpdateMoby_1242_JetFighterPoki(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  MobyClass *pMVar10;
  f32 fVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  uint uVar16;
  undefined2 uVar17;
  Cuboid *pCVar18;
  ulonglong uVar19;
  int iVar21;
  longlong lVar20;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  undefined8 uVar35;
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
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar20 = uVar19 - 0x1b0;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar19;
  puVar14[0x38] = in_LR;
  puVar14[0x33] = in_f29;
  puVar14[0x34] = in_f30;
  puVar14[0x35] = in_f31;
  puVar14[0x32] = unaff_r31;
  puVar14[0x31] = unaff_r30;
  puVar14[0x30] = unaff_r29;
  puVar14[0x2f] = unaff_r28;
  puVar14[0x2e] = unaff_r27;
  puVar14[0x2d] = unaff_r26;
  if (moby != (MobyInstance *)0x0) {
    pvVar9 = moby->pVar;
    uVar27 = ZEXT48(pvVar9);
    fastfunc::FastDecTimerS32(uVar27 + 0xdc);
    uVar1 = moby->state;
    if ((((uVar1 != '\a') && (uVar1 != '\x01')) && (uVar1 != '\x02')) &&
       ((iVar21 = mobyutil::MB_damage(moby,0x30001,0), iVar21 != 0 && (moby->state == '\x04')))) {
      uVar12 = (int)*(uint *)(iVar21 + 0x2c) >> 0x1f;
      if ((int)((uVar12 >> 1 ^ *(uint *)(iVar21 + 0x2c)) - uVar12) <
          (int)(((uint)((int)DAT_0096b2dc >> 0x1f) >> 1 ^ (uint)DAT_0096b2dc) -
               ((int)DAT_0096b2dc >> 0x1f))) {
        DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar21 + 0x2c);
        if ((*(uint *)(iVar21 + 0x30) & 1) != 0) {
          lVar26 = uVar19 - 0xf0;
          dVar34 = (double)(*(float *)(iVar21 + 0x2c) * DAT_0076c714);
          mobyutil::MB_SphericalToVector
                    (*(float *)((int)pvVar9 + 100),*(float *)((int)pvVar9 + 0x38),
                     -*(float *)((int)pvVar9 + 0x34),(float *)lVar26);
          (moby->pos).x = (moby->pos).x + *(float *)(iVar21 + 0x10);
          (moby->pos).y = (moby->pos).y + *(float *)(iVar21 + 0x14);
          (moby->pos).z = (moby->pos).z + *(float *)(iVar21 + 0x18);
          fastfunc::FastVecNormalize(lVar26,lVar26,iVar21 + 0x10);
          fVar3 = ABS(*(float *)(puVar14 + 0x18));
          dVar32 = (double)*(float *)((int)pvVar9 + 0x38);
          fVar7 = ABS(*(float *)((int)puVar14 + 0xc4));
          *(float *)(puVar14 + 0x1e) = fVar3 - fVar7;
          dVar31 = 0.0;
          uVar22 = (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1d) & 4;
          fVar4 = fVar3;
          if (*(float *)(puVar14 + 0x1e) - 0.0 < 0.0) {
            fVar4 = fVar7;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          if (*(float *)(puVar14 + 0x1e) - 0.0 < 0.0) {
            fVar7 = fVar3;
          }
          fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          dVar29 = dVar31;
          if (0.0 < fVar4) {
            lVar26 = uVar19 - 0x1a0;
            lVar25 = uVar19 - 0x6c;
            lVar23 = uVar19 - 0x7c;
            lVar28 = 2;
            fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
            fVar7 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x28) = fVar4;
            *(float *)(puVar14 + 0x27) = fVar4;
            *(float *)((int)puVar14 + 0x13c) = fVar4;
            *(float *)((int)puVar14 + 0x134) = fVar4;
            fVar4 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar7;
            *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar4;
            *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar4 * fVar7;
            do {
              *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x124) * fVar4 * fVar4;
              iVar21 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar25 = uVar19 - 0x7c;
            pfVar24 = (float *)&DAT_007358e0;
            lVar26 = lVar20;
            lVar23 = lVar25;
            do {
              fVar4 = *pfVar24;
              fVar7 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x134) * fVar4;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar23 = 2;
            lVar26 = lVar20;
            do {
              iVar21 = (int)lVar26;
              iVar15 = (int)lVar25;
              lVar26 = lVar26 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar21 + 0x134)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar3);
          }
          dVar29 = (double)fastfunc::FastDiffRots(dVar29,dVar32);
          dVar32 = (double)fastfunc::FastWrapRot
                                     ((float)dVar32,
                                      (float)((double)(float)(dVar29 * (double)DAT_0076c6a4) *
                                             dVar34));
          *(float *)((int)pvVar9 + 0x38) = (float)dVar32;
          dVar33 = (double)*(float *)((int)pvVar9 + 0x34);
          dVar32 = ABS((double)*(float *)(puVar14 + 0x19));
          fVar4 = SQRT(*(float *)(puVar14 + 0x18) * *(float *)(puVar14 + 0x18) +
                       *(float *)((int)puVar14 + 0xc4) * *(float *)((int)puVar14 + 0xc4));
          dVar30 = ABS((double)fVar4);
          *(float *)(puVar14 + 0x1d) = fVar4;
          *(float *)((int)puVar14 + 0xec) = (float)(dVar30 - dVar32);
          uVar22 = (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)(puVar14 + 0x1d));
          if ((double)*(float *)((int)puVar14 + 0xec) - dVar31 < 0.0) {
            dVar29 = dVar32;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if ((double)*(float *)((int)puVar14 + 0xec) - dVar31 < 0.0) {
            dVar32 = dVar30;
          }
          if (dVar31 < dVar29) {
            lVar26 = uVar19 - 0x1a0;
            lVar25 = uVar19 - 0x8c;
            lVar23 = uVar19 - 0x9c;
            lVar28 = 2;
            fVar3 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
            fVar6 = fVar3 * fVar3;
            *(float *)(puVar14 + 0x24) = fVar3;
            *(float *)(puVar14 + 0x23) = fVar3;
            *(float *)((int)puVar14 + 0x11c) = fVar3;
            *(float *)((int)puVar14 + 0x114) = fVar3;
            fVar3 = fVar6 * fVar6;
            *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar6;
            *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar3;
            *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar3 * fVar6;
            do {
              *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x104) * fVar3 * fVar3;
              iVar21 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar25 = uVar19 - 0x9c;
            pfVar24 = (float *)&DAT_007358e0;
            lVar26 = lVar20;
            lVar23 = lVar25;
            do {
              fVar3 = *pfVar24;
              fVar6 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x114) * fVar3;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar23 = 2;
            lVar26 = lVar20;
            do {
              iVar21 = (int)lVar26;
              iVar15 = (int)lVar25;
              lVar26 = lVar26 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0x114)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar7 + fVar4);
          }
          dVar31 = (double)fastfunc::FastDiffRots(dVar31,dVar33);
          dVar31 = (double)fastfunc::FastWrapRot
                                     ((float)dVar33,
                                      (float)((double)(float)(dVar31 * (double)DAT_0076c6a8) *
                                             dVar34));
          *(float *)((int)pvVar9 + 0x34) = (float)dVar31;
        }
      }
      else {
        mobyutil::MB_SphericalToVector
                  (*(float *)((int)pvVar9 + 100),*(float *)((int)pvVar9 + 0x38),
                   -*(float *)((int)pvVar9 + 0x34),(float *)(uVar19 - 0xe0));
        uVar35 = 0;
        DAT_0096b2dc = 0.0;
        moby->state = '\a';
        *(undefined2 *)((int)pvVar9 + 0x62) = 0xb4;
        g_heroPosition.z = g_heroPosition.z + 0.2;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        hero::TransitionMovement(0,1);
        DAT_0096b2d0 = (MobyInstance *)0x0;
        DAT_0096b2d4 = ~RATCHET;
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (uVar35,uVar35,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,moby,uVar19 - 0xe0,0,0xffffffffffffffff,1,
                   10,3,0x10);
      }
    }
    moby->damage = -1;
    if (DAT_0096b2d0 == moby) {
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar36 = loadVectorLeftIndexed(0xffffffffffffc710,0x770000);
      auVar37 = vectorReciprocalEstimateFloatingPoint(auVar36);
      auVar39 = loadVectorLeftIndexed(0x10,0x221008);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar39 = ZEXT416(0xffffffff);
      auVar41 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar39 = ZEXT416(0xffffffff);
      auVar43 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar39 = ZEXT416(0xffffffff);
      auVar45 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar39,auVar40);
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = loadVectorLeftIndexed(0x15fc,0x969ce0);
      auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = loadVectorLeftIndexed(0x20,0x221008);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      DAT_0096b2ef = DAT_0096b2ef & 0xfd;
      auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar44,auVar42);
      auVar42 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar41);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar40,auVar43);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar42);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      DAT_0096b2e8 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1608
                                ,0x969ce0);
    }
    bVar2 = moby->state;
    if (bVar2 < 5) {
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          moby->state = '\x01';
          *(undefined1 *)((int)pvVar9 + 0x60) = 0;
          moby->scale = moby->pClass->gScale;
          *(undefined4 *)((int)pvVar9 + 0x20) = *(undefined4 *)((int)pvVar9 + 0x30);
          *(undefined4 *)((int)pvVar9 + 0x24) = *(undefined4 *)((int)pvVar9 + 0x34);
          fVar3 = ABS(ViewContext.xratio);
          uVar12 = (uint)ViewContext.xratio >> 0x1d;
          *(undefined4 *)(puVar14 + 0x1c) = 0x3f800000;
          *(float *)((int)puVar14 + 0xe4) = 1.0 - fVar3;
          fVar4 = 0.0;
          uVar22 = (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1e) & 2 | (ulonglong)uVar12 & 4;
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar6 = ABS(*(float *)(puVar14 + 0x1c));
          if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
            fVar6 = fVar3;
          }
          fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
            fVar3 = 1.0;
          }
          if (0.0 < fVar6) {
            lVar26 = uVar19 - 0x1a0;
            lVar23 = uVar19 - 0xbc;
            lVar25 = uVar19 - 0xac;
            lVar28 = 2;
            fVar3 = (fVar3 - fVar6) / (fVar3 + fVar6);
            fVar6 = fVar3 * fVar3;
            *(float *)(puVar14 + 0x20) = fVar3;
            *(float *)(puVar14 + 0x1f) = fVar3;
            *(float *)((int)puVar14 + 0xfc) = fVar3;
            *(float *)((int)puVar14 + 0xf4) = fVar3;
            fVar3 = fVar6 * fVar6;
            *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar6;
            *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar3;
            *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar3 * fVar6;
            do {
              *(float *)((int)lVar26 + 0xf4) = *(float *)((int)lVar26 + 0xe4) * fVar3 * fVar3;
              iVar21 = (int)lVar23;
              lVar26 = lVar26 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar25 = uVar19 - 0xbc;
            pfVar24 = (float *)&DAT_007358e0;
            lVar26 = lVar20;
            lVar23 = lVar25;
            do {
              fVar3 = *pfVar24;
              fVar6 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar26 + 0xf4) = *(float *)((int)lVar26 + 0xf4) * fVar3;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar26 = 2;
            do {
              iVar21 = (int)lVar20;
              iVar15 = (int)lVar25;
              lVar20 = lVar20 + 0x10;
              lVar25 = lVar25 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar21 + 0xf4) + *(float *)(iVar15 + 4) +
                      *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar7 + fVar5;
          }
          *(undefined4 *)((int)pvVar9 + 0xc0) = 0;
          *(float *)((int)pvVar9 + 0xac) = fVar4 * 2.0;
          *(float *)((int)pvVar9 + 0xb0) = fVar4 * 2.0;
          *(f32 *)((int)pvVar9 + 0x30) = (moby->rotation).x;
          *(f32 *)((int)pvVar9 + 0x34) = (moby->rotation).y;
          *(f32 *)((int)pvVar9 + 0x38) = (moby->rotation).z;
          *(f32 *)((int)pvVar9 + 0x3c) = (moby->rotation).w;
          *(f32 *)((int)pvVar9 + 0x50) = (moby->rotation).x;
          *(f32 *)((int)pvVar9 + 0x54) = (moby->rotation).y;
          *(f32 *)((int)pvVar9 + 0x58) = (moby->rotation).z;
          *(f32 *)((int)pvVar9 + 0x5c) = (moby->rotation).w;
          *(f32 *)((int)pvVar9 + 0x40) = (moby->pos).x;
          *(f32 *)((int)pvVar9 + 0x44) = (moby->pos).y;
          *(f32 *)((int)pvVar9 + 0x48) = (moby->pos).z;
          *(f32 *)((int)pvVar9 + 0x4c) = (moby->pos).w;
          DAT_00f0d2c8 = 1;
          *(undefined4 *)((int)pvVar9 + 0xf8) = 1;
          *(undefined2 *)((int)pvVar9 + 0xe8) = 1;
          *(undefined4 *)((int)pvVar9 + 0x130) = 0;
          if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1))
          {
            moby->collision = (ushort *)0x0;
            moby->enabled = '\0';
            moby->state = '\t';
            moby->modeBits = moby->modeBits | DISABLED;
          }
        }
        else {
          dVar31 = (double)mobyutil::MB_BSphereGap(moby,g_heroMobyPtr);
          if ((((double)DAT_00f0cec0 <= dVar31) ||
              (g_heroState == VISIBOMB_CONTROL || g_heroState == TURRET_PLANE_UI)) ||
             (g_heroType != '\0')) {
            *(undefined4 *)((int)pvVar9 + 0x118) = 0xffffffff;
            if (*(int *)((int)pvVar9 + 0x130) != 0) {
              mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
              boot::SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
            }
          }
          else {
            if (UnlockableItems.pilotsHelmet == '\0') {
              puVar14[0x2b] = (longlong)update::g_GameFrameCount;
              fVar4 = animationSpeed;
              puVar14[0x2b] =
                   (longlong)(int)(animationSpeed * ((float)(longlong)puVar14[0x2b] + 0.5));
              uVar17 = CHAR_ARRAY_00a1000c._482_2_;
              iVar21 = *(int *)((int)puVar14 + 0x15c);
              uVar12 = (uint)(ushort)CHAR_ARRAY_00a1000c._482_2_;
              uVar16 = (uint)(ushort)CHAR_ARRAY_00a1000c._482_2_;
              puVar14[0x2b] = (longlong)(int)((float)(longlong)(fVar4 * 18.5) * 60.0);
              if ((*(int *)((int)puVar14 + 0x15c) < (int)(iVar21 + uVar16 * -600)) ||
                 (uVar12 * 600 == 0)) {
                help::Help_QueueMessage(STR_YOU_WILL_NEED_A_0x2AFA,0x3c);
              }
              else if ((int)(uint)(ushort)uVar17 < iVar21 / 600) {
                sVar8 = (short)(iVar21 >> 0x1f);
                CHAR_ARRAY_00a1000c._482_2_ =
                     ((short)(iVar21 / 600) + sVar8) -
                     ((short)((short)(iVar21 / 0x2580000) + sVar8) >> 0xf);
              }
            }
            else {
              mobyutil::MB_ShowPersistentMessage(7,0x2b09);
            }
            if ((UnlockableItems.pilotsHelmet != '\0') &&
               ((g_buttonsPressedThisFrame & TRIANGLE) != 0)) {
              moby->state = '\x02';
              hero::TransitionMovement(0x32,1);
              *(undefined4 *)((int)pvVar9 + 0x118) = 0xffffffff;
            }
          }
        }
      }
      else if (bVar2 < 3) {
        mobyutil::Delt(1.0,mobyutil::g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
        boot::SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
        if (*(int *)((int)pvVar9 + 0x130) == 0x3f800000) {
          (moby->pos).z = (moby->pos).z + 30.0;
          music::music_SetTransition(2,6);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          *(undefined4 *)((int)pvVar9 + 0x3c) = 0;
          *(undefined4 *)((int)pvVar9 + 0x38) = 0;
          *(undefined4 *)((int)pvVar9 + 0x34) = 0;
          *(undefined4 *)((int)pvVar9 + 0x30) = 0;
          *(undefined4 *)((int)pvVar9 + 0x2c) = 0;
          *(undefined4 *)((int)pvVar9 + 0x28) = 0;
          *(undefined4 *)((int)pvVar9 + 0x24) = 0;
          *(undefined4 *)((int)pvVar9 + 0x20) = 0;
          fVar11 = (moby->rotation).z;
          auVar36 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          *(f32 *)((int)pvVar9 + 0x28) = fVar11;
          *(f32 *)((int)pvVar9 + 0x38) = fVar11;
          auVar39 = loadVectorLeftIndexed(0x34,0x221008);
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar36);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x114,
                              uVar27);
          *(undefined4 *)((int)pvVar9 + 0x114U & 0xfffffffc) = uVar13;
          if (CHAR_ARRAY_00a1000c._680_2_ == 0) {
            help::Help_QueueMessage(STR_PRESS__TO_FIRE_0x2AFC,0x55);
          }
          moby->state = '\x04';
          DAT_0096b2d4 = moby->oClass;
          DAT_0096b2ee = 1;
          DAT_0096b2d6 = (undefined1)DAT_0076c6f0;
          DAT_0096b2d7 = (undefined1)DAT_0076c6f4;
          DAT_0096b2dc = DAT_0076c6e4;
          DAT_0096b2d0 = moby;
          DAT_0096b2d8 = DAT_0096b2d7;
          *(undefined4 *)((int)pvVar9 + 0xf0) = 0;
          *(undefined4 *)((int)pvVar9 + 0xf4) = 0xff;
          DAT_0096b2e4 = 0x42c80000;
          DAT_0096b2e0 = DAT_0076c710;
          DAT_0096b2d9 = 3;
          DAT_0096b2da = 3;
          DAT_0096b2db = 3;
          DAT_0096b2ef = 0;
          camera::SetCameraPosition(0x951500,0x951510,1,0,0);
          uVar13 = DAT_0076c670;
          *(undefined2 *)((int)pvVar9 + 0x68) = 0;
          *(undefined4 *)((int)pvVar9 + 100) = uVar13;
          *(undefined4 *)((int)pvVar9 + 0x6c) = 0;
          *(undefined4 *)((int)pvVar9 + 0x70) = 0;
          *(undefined4 *)((int)pvVar9 + 0x84) = 0;
          *(undefined4 *)((int)pvVar9 + 0x80) = 0;
          *(undefined4 *)((int)pvVar9 + 0xd4) = 0;
          *(undefined4 *)((int)pvVar9 + 0xd8) = 0;
          moby->updateDistance = -1;
          fVar7 = DAT_0076c728;
          fVar4 = DAT_0076c6c0;
          moby->drawDistance = 0xff;
          *(undefined4 *)((int)pvVar9 + 0xb8) = 0;
          *(float *)((int)pvVar9 + 0xb4) = fVar4 * fVar7;
          *(float *)((int)pvVar9 + 0xbc) = DAT_0076c6c4 * fVar7;
          g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
          moby->scale = moby->pClass->gScale * DAT_0076c728;
          hero::g_heroInvisible = 1;
        }
      }
      else if (3 < bVar2) {
        if (*(int *)((int)pvVar9 + 0x130) != 0) {
          mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
          boot::SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
        }
        OcclMode = 2;
        M1242_0021ff90(moby,uVar27);
        iVar21 = FUN_00248c9c(*(undefined4 *)((int)pvVar9 + 0x10c));
        if (((*(short *)((int)pvVar9 + 0xea) != 0) && (iVar21 < 5 - *(short *)((int)pvVar9 + 0xe8)))
           && ((iVar21 = fastfunc::FastDecTimerS32(uVar27 + 0x114), iVar21 != 0 &&
               (iVar21 = FUN_00248d40(*(undefined4 *)((int)pvVar9 + 0x10c)), iVar21 != 0)))) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x38,0x221008);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar36);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x114,
                              uVar27);
          *(undefined4 *)((int)pvVar9 + 0x114U & 0xfffffffc) = uVar13;
        }
        if (*(short *)((int)pvVar9 + 0xe8) < 1) {
          *(undefined4 *)((int)pvVar9 + 0xf8) = DAT_0076c800;
          moby->state = '\b';
        }
        if ((DAT_0096b2ef & 1) != 0) {
          moby->state = '\x05';
        }
      }
    }
    else if (bVar2 < 8) {
      if (bVar2 < 6) {
        hero::g_heroInvisible = 0;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        hero::TransitionMovement(0,1);
        camera::camera5::Camera_DeactivateMobyDrivenCam(0);
        hud::Hud_SetEntryValueById((int)DAT_0096b2ec,0);
        music::music_SetTransition(0,8);
        (moby->pos).x = *(f32 *)((int)pvVar9 + 0x40);
        (moby->pos).y = *(f32 *)((int)pvVar9 + 0x44);
        (moby->pos).z = *(f32 *)((int)pvVar9 + 0x48);
        (moby->pos).w = *(f32 *)((int)pvVar9 + 0x4c);
        (moby->rotation).x = *(f32 *)((int)pvVar9 + 0x50);
        pMVar10 = moby->pClass;
        (moby->rotation).y = *(f32 *)((int)pvVar9 + 0x54);
        (moby->rotation).z = *(f32 *)((int)pvVar9 + 0x58);
        (moby->rotation).w = *(f32 *)((int)pvVar9 + 0x5c);
        moby->scale = pMVar10->gScale;
        mobyfunc::PostUpdateMobyLockTransform(moby);
        hero::Hero_Warp(&Cuboids[*(int *)((int)pvVar9 + 0xfc)].pos.x,
                        &Cuboids[*(int *)((int)pvVar9 + 0xfc)].rot.x,0,1);
        sVar8 = *(short *)((int)pvVar9 + 300);
        if (((sVar8 != -1) &&
            (iVar21 = (int)((longlong)sVar8 << 7) - (int)((longlong)sVar8 << 4),
            *(MobyInstance **)((int)sound::g_SoundChannels + iVar21 + 0x18) == moby)) &&
           (*(char *)((int)sound::g_SoundChannels + iVar21 + 4) != '\0')) {
          sound::sound_Kill((int)sVar8);
        }
        sVar8 = *(short *)((int)pvVar9 + 0x12e);
        *(undefined2 *)((int)pvVar9 + 300) = 0xffff;
        if (((sVar8 != -1) &&
            (iVar21 = (int)((longlong)sVar8 << 7) - (int)((longlong)sVar8 << 4),
            *(MobyInstance **)((int)sound::g_SoundChannels + iVar21 + 0x18) == moby)) &&
           (*(char *)((int)sound::g_SoundChannels + iVar21 + 4) != '\0')) {
          sound::sound_Kill((int)sVar8);
        }
        *(undefined2 *)((int)pvVar9 + 0x12e) = 0xffff;
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar9 + 0x130) = 0x3f7d70a4;
        boot::SceneScreenFade = 0.99;
      }
      else if (6 < bVar2) {
        OcclMode = 2;
        iVar21 = fastfunc::FastDecTimerS32(uVar27 + 0xf8);
        if (iVar21 != 0) {
          hero::HandleHeroDeath();
        }
      }
    }
    else if (bVar2 < 9) {
      OcclMode = 2;
      M1242_0021ff90(moby,uVar27);
      iVar21 = fastfunc::FastDecTimerS32(uVar27 + 0xf8);
      if (iVar21 != 0) {
        mobyutil::Delt(1.0,mobyutil::g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
        boot::SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
        uVar12 = (int)*(uint *)((int)pvVar9 + 0x130) >> 0x1f;
        if (0x3f7fffff < (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar9 + 0x130)) - uVar12)) {
          hero::g_heroInvisible = 0;
          g_heroMobyPtr->collisionMesh = (float *)0x0;
          hero::TransitionMovement(0,1);
          camera::camera5::Camera_DeactivateMobyDrivenCam(0);
          music::music_SetTransition(0,8);
          moby->enabled = '\0';
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | DISABLED;
          pCVar18 = Cuboids;
          iVar21 = *(int *)((int)pvVar9 + 0x100);
          if (iVar21 == -1) {
            libc::printf("no final place for jet during victory, so use init pos\n");
            (moby->pos).x = *(f32 *)((int)pvVar9 + 0x40);
            (moby->pos).y = *(f32 *)((int)pvVar9 + 0x44);
            (moby->pos).z = *(f32 *)((int)pvVar9 + 0x48);
            (moby->pos).w = *(f32 *)((int)pvVar9 + 0x4c);
            (moby->rotation).x = *(f32 *)((int)pvVar9 + 0x50);
            (moby->rotation).y = *(f32 *)((int)pvVar9 + 0x54);
            (moby->rotation).z = *(f32 *)((int)pvVar9 + 0x58);
            fVar4 = *(float *)((int)pvVar9 + 0x5c);
          }
          else {
            (moby->pos).x = Cuboids[iVar21].pos.x;
            (moby->pos).y = pCVar18[iVar21].pos.y;
            (moby->pos).z = pCVar18[iVar21].pos.z;
            (moby->pos).w = pCVar18[iVar21].pos.w;
            iVar21 = *(int *)((int)pvVar9 + 0x100);
            (moby->rotation).x = pCVar18[iVar21].rot.x;
            (moby->rotation).y = pCVar18[iVar21].rot.y;
            (moby->rotation).z = pCVar18[iVar21].rot.z;
            fVar4 = pCVar18[iVar21].rot.w;
          }
          (moby->rotation).w = fVar4;
          mobyfunc::PostUpdateMobyLockTransform(moby);
          iVar21 = *(int *)((int)pvVar9 + 0xfc);
          if (iVar21 == -1) {
            libc::printf("no final place for hero during victory, so just fall\n");
          }
          else {
            hero::Hero_Warp(&Cuboids[iVar21].pos.x,&Cuboids[iVar21].rot.x,0,1);
          }
          if (moby->levelFlagIdx != -1) {
            mobyfunc::SetLevelFlag();
          }
          moby->state = '\t';
        }
      }
    }
    else if ((bVar2 < 10) && (*(int *)((int)pvVar9 + 0x130) != 0)) {
      mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,(float *)((int)pvVar9 + 0x130));
      boot::SceneScreenFade = *(float *)((int)pvVar9 + 0x130);
    }
    fVar11 = (moby->pos).x;
    uVar12 = (int)fVar11 >> 0x1f;
    fVar7 = 15.0;
    fVar4 = (moby->pos).x;
    if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41700000) {
      (moby->pos).x = 15.0;
      fVar4 = fVar7;
    }
    fVar3 = 1008.0;
    if (1008.0 < fVar4) {
      (moby->pos).x = 1008.0;
      fVar4 = fVar3;
    }
    fVar11 = (moby->pos).y;
    uVar12 = (int)fVar11 >> 0x1f;
    fVar6 = (moby->pos).y;
    if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41700000) {
      (moby->pos).y = 15.0;
      fVar6 = fVar7;
    }
    if (1008.0 < fVar6) {
      (moby->pos).y = 1008.0;
      fVar6 = fVar3;
    }
    fVar11 = (moby->pos).z;
    uVar12 = (int)fVar11 >> 0x1f;
    fVar5 = (moby->pos).z;
    if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41700000) {
      (moby->pos).z = 15.0;
      fVar5 = fVar7;
    }
    if (1008.0 < fVar5) {
      (moby->pos).z = 1008.0;
      fVar5 = fVar3;
    }
    bVar2 = moby->state;
    if (bVar2 == 4) {
      g_heroPosition.w = (moby->pos).w;
      g_heroRotation.x = *(float *)((int)pvVar9 + 0x30);
      g_heroRotation.y = *(float *)((int)pvVar9 + 0x34);
      g_heroRotation.z = *(float *)((int)pvVar9 + 0x38);
      g_heroRotation.w = *(float *)((int)pvVar9 + 0x3c);
      g_heroPosition.x = fVar4;
      g_heroPosition.y = fVar6;
      g_heroPosition.z = fVar5;
    }
    if ((bVar2 < 3) || (4 < bVar2)) {
      sVar8 = *(short *)((int)pvVar9 + 300);
      if ((sVar8 != -1) &&
         ((iVar21 = (int)((longlong)sVar8 << 7) - (int)((longlong)sVar8 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar21 + 0x18) == moby &&
          (*(char *)((int)sound::g_SoundChannels + iVar21 + 4) != '\0')))) {
        sound::sound_Kill((int)sVar8);
      }
      *(undefined2 *)((int)pvVar9 + 300) = 0xffff;
    }
    else {
      M1242_0021d8f8(moby,uVar27);
      iVar21 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar9 + 300));
      if (iVar21 == 0) {
        iVar21 = sound::PlayMobySound(0,4,moby);
        *(short *)((int)pvVar9 + 300) = (short)iVar21;
      }
    }
  }
  return;
}



//==== 00222564  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1243_00222564(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1243_00222564(void)

{
  DAT_0076d1dc = 0x10000;
  return;
}



//==== 00222588  ns=mobyupdate_helpers  size=0x1e8
// sig: undefined M1243_00222588(void)
// callers(1): 00222fe0 mobyupdate_unsorted::UpdateMoby_1243
// callees(1): 00108180 mobyutil::MB_computeLobVelocity

void mobyupdate_helpers::M1243_00222588(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  undefined8 in_LR;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar13 = loadVectorLeftIndexed(in_LR,param_2);
  auVar16 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  iVar8 = (int)param_1;
  uVar6 = *(uint *)(iVar8 + 0x78);
  uVar10 = (ulonglong)uVar6;
  pfVar9 = (float *)param_2;
  fVar1 = *pfVar9;
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xb0,uVar10);
  *(undefined4 *)(uVar6 + 0xb0 & 0xfffffffc) = uVar7;
  auVar14 = loadVectorLeftIndexed(4,param_2);
  fVar2 = pfVar9[1];
  auVar12 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar16 = ZEXT416(0xffffffff);
  auVar19 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  uVar7 = storeVectorElementWordIndexed
                    (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xb4,uVar10);
  *(undefined4 *)(uVar6 + 0xb4 & 0xfffffffc) = uVar7;
  auVar15 = loadVectorLeftIndexed(8,param_2);
  auVar16 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xb8,uVar10);
  *(undefined4 *)(uVar6 + 0xb8 & 0xfffffffc) = uVar7;
  fVar3 = pfVar9[3];
  *(float *)(uVar6 + 0xbc) = fVar3;
  auVar16 = loadVectorLeftIndexed(0x10,param_1);
  fVar4 = *(float *)(iVar8 + 0x10);
  auVar13 = vectorSubtractFloatingPoint(auVar13,auVar16);
  auVar16 = ZEXT416(0xffffffff);
  auVar19 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = ZEXT416(0xffffffff);
  auVar22 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = ZEXT416(0xffffffff);
  auVar12 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar21 = vectorShiftLeftIntegerWord(auVar19,auVar19);
  auVar16 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xa0,uVar10);
  *(undefined4 *)(uVar6 + 0xa0 & 0xfffffffc) = uVar7;
  auVar16 = loadVectorLeftIndexed(0x14,param_1);
  fVar5 = *(float *)(iVar8 + 0x14);
  auVar14 = vectorSubtractFloatingPoint(auVar14,auVar16);
  auVar16 = ZEXT416(0xffffffff);
  auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar19 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar16 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xa4,uVar10);
  *(undefined4 *)(uVar6 + 0xa4 & 0xfffffffc) = uVar7;
  auVar22 = loadVectorLeftIndexed(0x18,param_1);
  *(float *)(uVar6 + 0xac) = fVar3;
  auVar16 = loadVectorLeftIndexed(in_LR,0x222578);
  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar17,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,auVar19
                      );
  auVar16 = ZEXT416(0xffffffff);
  auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar15 = vectorSubtractFloatingPoint(auVar15,auVar22);
  auVar22 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar16 = loadVectorLeftIndexed(8,0x222578);
  auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
  auVar12 = vectorConvertFromSignedFixedPointWord(auVar16,0);
  auVar16 = vectorReciprocalEstimateFloatingPoint(auVar12);
  fVar3 = 1.0 / (float)(longlong)(animationSpeed * 60.5);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar12,auVar17);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar16,auVar19,auVar18);
  auVar16 = ZEXT416(0xffffffff);
  auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar18 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar12,auVar17);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar20);
  auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar12,auVar17);
  fVar2 = (fVar2 - fVar5) * fVar3;
  fVar3 = (fVar1 - fVar4) * fVar3;
  auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar21);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar13,auVar19,auVar23);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar14,auVar19,auVar22);
  auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar19,auVar18);
  auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xa0,uVar10);
  *(undefined4 *)(uVar6 + 0xa0 & 0xfffffffc) = uVar7;
  uVar7 = storeVectorElementWordIndexed
                    (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar10);
  *(undefined4 *)(uVar6 + 0xa4 & 0xfffffffc) = uVar7;
  uVar7 = storeVectorElementWordIndexed
                    (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xa8,uVar10);
  *(undefined4 *)(uVar6 + 0xa8 & 0xfffffffc) = uVar7;
  dVar11 = (double)mobyutil::MB_computeLobVelocity
                             ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                              (double)(DAT_0071f418 * -10.8),param_1 + 0x10,uVar10 + 0xb0,0xa0,0xa8,
                              0);
  *(float *)(uVar6 + 0xa8) = (float)dVar11;
  *(undefined1 *)(iVar8 + 0xbc) = *(undefined1 *)(iVar8 + 0x20);
  *(undefined1 *)(iVar8 + 0x20) = 5;
  return;
}



//==== 00222788  ns=mobyupdate_helpers  size=0x264
// sig: undefined M1243_00222788(void)
// callers(1): 00222fe0 mobyupdate_unsorted::UpdateMoby_1243
// callees(4): 00057820 collproc::CollLine; 000ffc18 mobyutil::GetGroundZNoWater; 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

undefined8 mobyupdate_helpers::M1243_00222788(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  Vec4 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  
  iVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar8 = iVar6;
  while (iVar5 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)(param_1 + 0x10),(longlong)*(int *)(iVar8 + 0x98)), iVar5 == 0)
  {
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
    if (1 < iVar7) {
      return 0;
    }
  }
  fVar1 = param_2[1] - *(float *)(param_1 + 0x14);
  fVar2 = *param_2 - *(float *)(param_1 + 0x10);
  fVar3 = param_2[2] - *(float *)(param_1 + 0x18);
  local_60.w = param_2[3];
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  local_60.y = fVar1;
  local_60.x = fVar2;
  local_60.z = fVar3;
  if ((2.0 < fVar4) &&
     (local_60.y = 0.0, local_60.x = local_60.y, local_60.z = local_60.y, fVar4 != 0.0)) {
    fVar4 = DAT_0076d230 / fVar4;
    local_60.y = fVar1 * fVar4;
    local_60.x = fVar2 * fVar4;
    local_60.z = fVar3 * fVar4;
  }
  local_60.x = local_60.x + *(float *)(param_1 + 0x10);
  local_60.y = local_60.y + *(float *)(param_1 + 0x14);
  local_60.z = local_60.z + *(float *)(param_1 + 0x18);
  iVar6 = mobyutil::PointInsideComplexPoly
                    (&local_60,(Vec4 *)Splines[*(int *)(iVar6 + *(int *)(iVar6 + 0xe8) * 4)]->points
                     ,Splines[*(int *)(iVar6 + *(int *)(iVar6 + 0xe8) * 4)]->cnt);
  if (iVar6 == 0) {
    return 0;
  }
  local_60.z = local_60.z + 5.0;
  dVar9 = (double)mobyutil::GetGroundZNoWater(&local_60);
  if (ABS((float)(dVar9 - (double)*(float *)(param_1 + 0x18))) <= 0.5) {
    return 0;
  }
  local_50 = *(undefined4 *)(param_1 + 0x10);
  local_4c = *(undefined4 *)(param_1 + 0x14);
  local_44 = *(undefined4 *)(param_1 + 0x1c);
  local_48 = (float)((double)*(float *)(param_1 + 0x18) + 0.15000000596046448);
  local_60.z = (float)(dVar9 + 0.15000000596046448);
  iVar6 = collproc::CollLine(&local_50,&local_60,2,param_1,0);
  if (iVar6 == 0) {
    return 0;
  }
  *param_2 = local_60.x;
  param_2[2] = (float)dVar9;
  param_2[1] = local_60.y;
  param_2[3] = local_60.w;
  return 1;
}



//==== 002229f8  ns=mobyupdate_helpers  size=0x240
// sig: undefined M1243_002229f8(void)
// callers(2): 00222c50 mobyupdate_helpers::M1243_00222c50; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243
// callees(3): 000fc948 mobyutil::MB_SplineIntersect; 00104e44 mobyutil::PointInsideComplexPoly; 00114d58 mobyutil::MB_SplineFindRouteNode

void mobyupdate_helpers::M1243_002229f8(int param_1,Vec4 *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar10;
  undefined8 uVar9;
  int iVar11;
  uint uVar12;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar11 = *(int *)(param_1 + 0x78);
  iVar10 = mobyutil::PointInsideComplexPoly
                     (param_2,(Vec4 *)Splines[*(int *)(iVar11 + *(int *)(iVar11 + 0xe8) * 4)]->
                                      points,
                      Splines[*(int *)(iVar11 + *(int *)(iVar11 + 0xe8) * 4)]->cnt);
  if (iVar10 == 0) {
    mobyutil::MB_SplineIntersect
              (*(undefined4 *)(iVar11 + *(int *)(iVar11 + 0xe8) * 4),param_1 + 0x10,param_2,
               &local_50);
    fVar2 = local_4c - *(float *)(param_1 + 0x14);
    fVar4 = local_50 - *(float *)(param_1 + 0x10);
    fVar6 = local_48 - *(float *)(param_1 + 0x18);
    fVar1 = 0.0;
    fVar8 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2);
    fVar7 = -0.2 / fVar8;
    fVar5 = fVar1;
    if (0.0 - fVar8 < 0.0) {
      fVar5 = fVar7 * fVar6;
    }
    fVar3 = fVar1;
    if (0.0 - fVar8 < 0.0) {
      fVar3 = fVar7 * fVar2;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar1 = fVar7 * fVar4;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar5 = fVar7 * fVar6;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar3 = fVar7 * fVar2;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar1 = fVar7 * fVar4;
    }
    local_48 = local_48 + fVar5;
    local_4c = local_4c + fVar3;
    local_50 = local_50 + fVar1;
  }
  else {
    local_50 = param_2->x;
    local_4c = param_2->y;
    local_48 = param_2->z;
    local_44 = param_2->w;
  }
  uVar9 = 1;
  local_40 = *(undefined4 *)(iVar11 + *(int *)(iVar11 + 0xe8) * 4);
  iVar10 = *(int *)(iVar11 + 0xe8);
  if (iVar10 < 3) {
    if (1 < iVar10) {
      local_3c = *(undefined4 *)(iVar11 + 0x20);
      uVar9 = 4;
      local_38 = *(undefined4 *)(iVar11 + 0x24);
      local_34 = *(undefined4 *)(iVar11 + 0x28);
    }
  }
  else if (iVar10 < 4) {
    local_3c = *(undefined4 *)(iVar11 + 0x20);
    uVar9 = 3;
    local_38 = *(undefined4 *)(iVar11 + 0x24);
  }
  uVar12 = iVar11 + *(int *)(iVar11 + 0xe8) * 4;
  iVar11 = mobyutil::MB_SplineFindRouteNode
                     (DAT_0076d228,&local_40,uVar9,(longlong)*(int *)(uVar12 + 0x10),
                      (ulonglong)uVar12,param_1 + 0x10,&local_50,param_3);
  if (iVar11 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x10);
    param_3[1] = *(undefined4 *)(param_1 + 0x14);
    param_3[2] = *(undefined4 *)(param_1 + 0x18);
    param_3[3] = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}



//==== 00222c50  ns=mobyupdate_helpers  size=0x238
// sig: undefined M1243_00222c50(void)
// callers(1): 00222fe0 mobyupdate_unsorted::UpdateMoby_1243
// callees(5): 001009b0 mobyutil::MB_MoveAndCollide; 00109af0 mobyutil::Delt; 00110488 mobyutil::ClampVec3Magnitude; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 002229f8 mobyupdate_helpers::M1243_002229f8

void mobyupdate_helpers::M1243_00222c50(int param_1,float *param_2,Vec4 *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  iVar2 = *(int *)(param_1 + 0x78);
  M1243_002229f8(param_1,param_2,&local_40);
  param_3->x = local_40 - *(float *)(param_1 + 0x10);
  param_3->y = local_3c - *(float *)(param_1 + 0x14);
  fVar1 = *(float *)(param_1 + 0x18);
  param_3->w = local_34;
  param_3->z = local_38 - fVar1;
  mobyutil::ClampVec3Magnitude((double)*(float *)(iVar2 + 0xe4),param_3);
  param_3->z = -mobyutil::g_FrameTime;
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fd3333340000000,0,param_1,param_3);
  fVar1 = *(float *)(param_1 + 0x14) - param_2[1];
  fVar4 = *(float *)(param_1 + 0x10) - *param_2;
  fVar5 = *(float *)(param_1 + 0x18) - param_2[2];
  if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1) <= 10.0) {
    mobyutil::Delt(DAT_0076d200 * mobyutil::g_FrameTime,DAT_0071f418 * 4.0,(float *)(iVar2 + 0xe4));
  }
  else {
    mobyutil::Delt(DAT_0076d204 * mobyutil::g_FrameTime,DAT_0071f418 * 4.0,(float *)(iVar2 + 0xe4));
  }
  param_1 = param_1 + 0x10;
  lVar6 = ((ulonglong)*(uint *)(iVar2 + 0xe8) & 0x3fffffff) << 2;
  mobyutil::MB_PushOutOfSplineWalls
            ((double)DAT_0076d22c,*(undefined4 *)(iVar2 + (int)lVar6),lVar6,param_1,param_1);
  iVar3 = *(int *)(iVar2 + 0xe8);
  if (iVar3 < 3) {
    if (1 < iVar3) {
      mobyutil::MB_PushOutOfSplineWalls
                ((double)DAT_0076d22c,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x28),
                 param_1,param_1);
    }
  }
  else if (iVar3 < 4) {
    mobyutil::MB_PushOutOfSplineWalls((double)DAT_0076d22c,*(undefined4 *)(iVar2 + 0x20));
    mobyutil::MB_PushOutOfSplineWalls((double)DAT_0076d22c,*(undefined4 *)(iVar2 + 0x24));
  }
  return;
}



//==== 00222e88  ns=mobyupdate_helpers  size=0x110
// sig: undefined M1243_00222e88(void)
// callers(1): 00222fe0 mobyupdate_unsorted::UpdateMoby_1243
// callees(0): 

ulonglong mobyupdate_helpers::M1243_00222e88
                    (double param_1,int param_2,float *param_3,undefined8 param_4,int param_5)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar10;
  ushort *puVar9;
  
  iVar6 = *(int *)(param_2 + 0x78) + param_5 * 0x10;
  iVar7 = 0;
  uVar8 = 0;
  do {
    sVar10 = (short)*(undefined4 *)(iVar6 + 0x30);
    if (mobyutil::g_NumMobyGroups < sVar10 || sVar10 < 0) break;
    puVar9 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)((longlong)sVar10 << 2));
    do {
      uVar5 = *puVar9 & 0x7fff;
      if ((MobyInstance[uVar5].state < 0x80) &&
         (fVar2 = param_3[1] - MobyInstance[uVar5].pos.y,
         fVar3 = *param_3 - MobyInstance[uVar5].pos.x,
         fVar4 = param_3[2] - MobyInstance[uVar5].pos.z, uVar8 = 1,
         (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < param_1)) {
        return 2;
      }
      uVar1 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (-1 < (short)uVar1);
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar7 < 4);
  return (ulonglong)(LZCOUNT(uVar8) << 0x20) >> 0x25 ^ 1;
}



//==== 00222fe0  ns=mobyupdate_unsorted  size=0x1804
// sig: undefined UpdateMoby_1243(MobyInstance * moby)
// callers(0): 
// callees(23): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 001009b0 mobyutil::MB_MoveAndCollide; 00108180 mobyutil::MB_computeLobVelocity; 0010a2e0 mobyutil::OrganicDeltAng; 00110488 mobyutil::ClampVec3Magnitude; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00112678 mobyutil::MB_PlatformGetDelta; 0011440c mobyutil::MB_SplineMarkCrossings; 0012d0e8 partupd::SpawnPart_41; 001b67d0 FUN_001b67d0; 001b6870 FUN_001b6870; 001e348c FUN_001e348c; 001eede4 FUN_001eede4; 00222588 mobyupdate_helpers::M1243_00222588; 00222788 mobyupdate_helpers::M1243_00222788; 002229f8 mobyupdate_helpers::M1243_002229f8; 00222c50 mobyupdate_helpers::M1243_00222c50; 00222e88 mobyupdate_helpers::M1243_00222e88; 004d407c FUN_004d407c; 004fffb4 fastfunc::FastDecTimerS16; 005e8338 FUN_005e8338

/* Moby 1243 */

void mobyupdate_unsorted::UpdateMoby_1243(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  f32 fVar9;
  Spline *pSVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  u8 uVar26;
  Cuboid *pCVar25;
  longlong lVar27;
  undefined8 in_r7;
  int iVar28;
  MobyInstance *pMVar29;
  ulonglong uVar30;
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
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
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  Vec4 local_60;
  
  lVar20 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  uVar30 = ZEXT48(pvVar8);
  iVar23 = DAT_00f0d2e4;
  if (DAT_00f0d2e4 != 0) {
    uVar21 = (ulonglong)*(uint *)((int)pvVar8 + 0xe8);
    iVar23 = 0;
    iVar22 = 0;
    if (0 < Splines[*(int *)((int)pvVar8 + *(uint *)((int)pvVar8 + 0xe8) * 4)]->cnt) {
      iVar28 = 0;
      dVar36 = 1.0;
      dVar35 = 0.3330000042915344;
      do {
        pSVar10 = Splines[*(int *)((int)pvVar8 + (int)(uVar21 << 2))];
        local_e0 = *(undefined4 *)((int)&pSVar10->points[0].x + iVar28);
        local_dc = *(undefined4 *)((int)&pSVar10->points[0].y + iVar28);
        local_d8 = (float)((double)*(float *)((int)&pSVar10->points[0].z + iVar28) + dVar36);
        local_d4 = *(undefined4 *)((int)&pSVar10->points[0].w + iVar28);
        partupd::SpawnPart_41((float)dVar35,&local_e0,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
        uVar21 = (ulonglong)*(uint *)((int)pvVar8 + 0xe8);
        iVar23 = iVar23 + 1;
        iVar28 = iVar28 + 0x10;
      } while (iVar23 < Splines[*(int *)((int)pvVar8 + *(uint *)((int)pvVar8 + 0xe8) * 4)]->cnt);
    }
    iVar28 = 0;
    iVar23 = Splines[*(int *)((int)pvVar8 + (int)(uVar21 << 2) + 0x10)]->cnt;
    if (0 < iVar23) {
      dVar36 = 1.0;
      dVar35 = 0.3330000042915344;
      do {
        pSVar10 = Splines[*(int *)((int)pvVar8 + (int)(uVar21 << 2) + 0x10)];
        local_d0 = *(undefined4 *)((int)&pSVar10->points[0].x + iVar22);
        local_cc = *(undefined4 *)((int)&pSVar10->points[0].y + iVar22);
        local_c8 = (float)((double)*(float *)((int)&pSVar10->points[0].z + iVar22) + dVar36);
        local_c4 = *(undefined4 *)((int)&pSVar10->points[0].w + iVar22);
        partupd::SpawnPart_41((float)dVar35,&local_d0,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
        uVar21 = (ulonglong)*(uint *)((int)pvVar8 + 0xe8);
        iVar28 = iVar28 + 1;
        iVar22 = iVar22 + 0x10;
        iVar23 = Splines[*(int *)((int)pvVar8 + *(uint *)((int)pvVar8 + 0xe8) * 4 + 0x10)]->cnt;
      } while (iVar28 < iVar23);
    }
  }
  iVar22 = fastfunc::FastDecTimerS16(uVar30 + 0xec);
  if (iVar22 == 0) {
    lVar27 = lVar20;
    RegisterFuncForMoby(&PTR_M1246_0022485c_00709818,moby);
    iVar23 = (int)lVar27;
  }
  iVar22 = fastfunc::FastDecTimerS16(uVar30 + 0xee);
  if (iVar22 == 0) {
    lVar27 = lVar20;
    RegisterFuncForMoby(&PTR_M1246_00224a00_00709820,moby);
    iVar23 = (int)lVar27;
  }
  pCVar25 = Cuboids;
  fVar2 = DAT_0076d200;
  fVar49 = mobyutil::g_FrameTime;
  bVar1 = moby->state;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      dVar35 = (double)FUN_005e8338((double)(*(float *)((int)pvVar8 + 0xb0) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar8 + 0xb4) - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar35,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,iVar23,
                 (float *)((int)pvVar8 + 0xe0));
      partupd::SpawnPart_41(0.333,(int)pvVar8 + 0xb0,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar8 + 0xa0);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0xa4);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0xa8);
      fVar49 = -(DAT_0071f418 * 10.8 - *(float *)((int)pvVar8 + 0xa8));
      *(float *)((int)pvVar8 + 0xa8) = fVar49;
      if (0.0 <= fVar49) {
        return;
      }
      fVar9 = (moby->pos).z;
      uVar11 = (int)fVar9 >> 0x1f;
      uVar12 = (int)*(uint *)((int)pvVar8 + 0xb8) >> 0x1f;
      if ((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar8 + 0xb8)) - uVar12) <=
          (int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11)) {
        return;
      }
      (moby->pos).x = *(f32 *)((int)pvVar8 + 0xb0);
      (moby->pos).y = *(f32 *)((int)pvVar8 + 0xb4);
      uVar26 = moby->setByGroup;
      (moby->pos).z = *(f32 *)((int)pvVar8 + 0xb8);
      fVar9 = *(f32 *)((int)pvVar8 + 0xbc);
      moby->state = uVar26;
      (moby->pos).w = fVar9;
      return;
    }
    if (bVar1 == 4) {
      dVar35 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar49 = mobyutil::OrganicDeltAng
                         ((float)dVar35,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar8 + 0xe0));
      mobyupdate_helpers::M1243_00222c50((double)fVar49,lVar20,&g_heroPosition,&local_a0);
      iVar23 = mobyupdate_helpers::M1243_00222e88(0x4024000000000000,lVar20,lVar20 + 0x10);
      dVar36 = 0.0;
      local_84 = local_94;
      fVar49 = SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
      fVar2 = 4.0 / fVar49;
      dVar35 = dVar36;
      if (0.0 - fVar49 < 0.0) {
        dVar35 = (double)(local_98 * fVar2);
      }
      dVar34 = dVar36;
      if (0.0 - fVar49 < 0.0) {
        dVar34 = (double)(local_9c * fVar2);
      }
      dVar31 = dVar36;
      if (0.0 - fVar49 < 0.0) {
        dVar31 = (double)(local_a0 * fVar2);
      }
      if (fVar49 - 0.0 < 0.0) {
        dVar35 = (double)(local_98 * fVar2);
      }
      if (fVar49 - 0.0 < 0.0) {
        dVar34 = (double)(local_9c * fVar2);
      }
      if (fVar49 - 0.0 < 0.0) {
        dVar31 = (double)(local_a0 * fVar2);
      }
      local_88 = (float)(dVar35 + (double)(moby->pos).z);
      local_8c = (float)(dVar34 + (double)(moby->pos).y);
      local_90 = (float)(dVar31 + (double)(moby->pos).x);
      iVar22 = mobyupdate_helpers::M1243_00222788(lVar20,&local_90);
      if ((iVar23 == 0) && (*(int *)((int)pvVar8 + 0xe8) < 2)) {
        moby->state = '\x06';
        return;
      }
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar49 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar49 * fVar49 + fVar2 * fVar2) < DAT_0076d20c) ||
         ((double)SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) == dVar36))
      {
        moby->state = '\x03';
        return;
      }
      if (iVar23 == 2) {
        moby->state = '\x03';
        return;
      }
      if (iVar22 == 0) {
        return;
      }
      mobyupdate_helpers::M1243_00222588(lVar20,&local_90);
      return;
    }
    if (bVar1 == 3) {
      dVar35 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar49 = mobyutil::OrganicDeltAng
                         ((float)dVar35,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar8 + 0xe0));
      mobyupdate_helpers::M1243_002229f8((double)fVar49,lVar20,&g_heroPosition,&local_c0);
      fVar49 = (moby->pos).y;
      local_ac = local_bc - fVar49;
      fVar2 = (moby->pos).x;
      local_b0 = local_c0 - fVar2;
      fVar3 = (moby->pos).z;
      local_a8 = local_b8 - fVar3;
      local_a4 = local_b4;
      fVar4 = 0.0;
      fVar5 = local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac;
      if (SQRT(fVar5) == 0.0) {
        iVar23 = mobyupdate_helpers::M1243_00222e88
                           (0x4024000000000000,lVar20,lVar20 + 0x10,&DAT_00222f98,
                            *(undefined4 *)((int)pvVar8 + 0xe8));
      }
      else {
        fVar6 = fVar4;
        fVar7 = fVar4;
        if (SQRT(fVar5) != 0.0) {
          fVar7 = 1.0 / SQRT(fVar5);
          fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar6 = local_b0 * fVar7;
          fVar4 = local_ac * fVar7;
          fVar7 = local_a8 * fVar7;
        }
        local_b0 = fVar6 + fVar2;
        local_ac = fVar4 + fVar49;
        local_a8 = fVar7 + fVar3;
        iVar23 = mobyupdate_helpers::M1243_00222e88
                           (0x4024000000000000,lVar20,&local_b0,&DAT_00222f98,
                            *(undefined4 *)((int)pvVar8 + 0xe8));
      }
      if (iVar23 == 0) {
        moby->state = '\x06';
        return;
      }
      if (iVar23 == 2) {
        moby->state = '\x03';
        return;
      }
      fVar49 = (moby->pos).y - g_heroPosition.y;
      fVar2 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar2 * fVar2 + fVar49 * fVar49) <= DAT_0076d208) {
        return;
      }
      moby->state = '\x04';
      return;
    }
    if (bVar1 == 2) {
      fVar49 = (moby->pos).y - g_heroPosition.y;
      fVar2 = (moby->pos).x - g_heroPosition.x;
      if (64.0 <= SQRT(fVar2 * fVar2 + fVar49 * fVar49)) {
        return;
      }
      moby->state = '\x03';
      return;
    }
    if (bVar1 == 1) {
      fVar49 = (moby->pos).y - g_heroPosition.y;
      fVar2 = (moby->pos).x - g_heroPosition.x;
      if (6.0 <= SQRT(fVar2 * fVar2 + fVar49 * fVar49)) {
        return;
      }
      FUN_004d407c(lVar20,1);
      auVar37 = ZEXT416(0xffffffff);
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      moby->state = '\x03';
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar37 = loadVectorLeftIndexed(0xc,0x222f98);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                           auVar38);
      auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
      auVar37 = vectorSplatHalfWord(auVar37,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar37,0xec,uVar30);
      *(undefined2 *)((int)pvVar8 + 0xec) = uVar13;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (MiscLevelFlags.field84_0x54 == 1) {
      FUN_001eede4(MobyInstance + *(int *)((int)pvVar8 + 0xd4));
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (g_LevelFlags[Level][*(int *)((int)pvVar8 + 0xd8)] == -1) {
      iVar23 = *(int *)((int)pvVar8 + 0x74);
      *(undefined4 *)((int)pvVar8 + 0xe8) = 1;
      (moby->pos).x = pCVar25[iVar23].pos.x;
      (moby->pos).y = pCVar25[iVar23].pos.y;
      (moby->pos).z = pCVar25[iVar23].pos.z;
      (moby->pos).w = pCVar25[iVar23].pos.w;
      *(float *)((int)pvVar8 + 0xe4) = DAT_0076d200 * mobyutil::g_FrameTime;
      moby->state = '\x03';
    }
    else {
      *(undefined4 *)((int)pvVar8 + 0xe8) = 0;
      *(float *)((int)pvVar8 + 0xe4) = fVar2 * fVar49;
      moby->state = '\x01';
    }
    mobyutil::MB_SplineMarkCrossings(uVar30,1,*(undefined4 *)((int)pvVar8 + 0x10));
    mobyutil::MB_SplineMarkCrossings(uVar30 + 4,1,*(undefined4 *)((int)pvVar8 + 0x14));
    mobyutil::MB_SplineMarkCrossings(uVar30 + 8,1,*(undefined4 *)((int)pvVar8 + 0x18));
    return;
  }
  if (bVar1 == 0xb) {
LAB_00223efc:
    dVar35 = (double)FUN_005e8338((double)(*(float *)((int)pvVar8 + 0xb0) - (moby->pos).x),
                                  (double)(*(float *)((int)pvVar8 + 0xb4) - (moby->pos).y));
    mobyutil::OrganicDeltAng
              ((float)dVar35,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,iVar23,
               (float *)((int)pvVar8 + 0xe0));
    partupd::SpawnPart_41(0.333,(int)pvVar8 + 0xb0,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar8 + 0xa0);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0xa4);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0xa8);
    fVar2 = -(DAT_0071f418 * 10.8 - *(float *)((int)pvVar8 + 0xa8));
    *(float *)((int)pvVar8 + 0xa8) = fVar2;
    pMVar29 = MobyInstance;
    fVar49 = 0.0;
    if ((fVar2 < 0.0) &&
       (fVar9 = (moby->pos).z, uVar11 = (int)fVar9 >> 0x1f,
       uVar12 = (int)*(uint *)((int)pvVar8 + 0xb8) >> 0x1f,
       (int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11) <
       (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar8 + 0xb8)) - uVar12))) {
      if (moby->state == '\a') {
        iVar23 = *(int *)((int)pvVar8 +
                         (int)(((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar8 + 0xe8)) << 0x20) >>
                                0x25 ^ 1) << 2) + 0x90);
        moby->state = '\b';
        (moby->pos).x = *(f32 *)((int)pvVar8 + 0xb0);
        (moby->pos).y = *(f32 *)((int)pvVar8 + 0xb4);
        (moby->pos).z = *(f32 *)((int)pvVar8 + 0xb8);
        (moby->pos).w = *(f32 *)((int)pvVar8 + 0xbc);
        fVar2 = pMVar29[iVar23].pos.x;
        *(float *)((int)pvVar8 + 0xb0) = fVar2;
        fVar3 = pMVar29[iVar23].pos.y;
        *(float *)((int)pvVar8 + 0xb4) = fVar3;
        fVar4 = pMVar29[iVar23].pos.z;
        *(float *)((int)pvVar8 + 0xb8) = fVar4;
        *(f32 *)((int)pvVar8 + 0xbc) = pMVar29[iVar23].pos.w;
        fVar5 = pMVar29[iVar23].transform.v0.y;
        fVar6 = pMVar29[iVar23].transform.v0.x;
        fVar7 = pMVar29[iVar23].transform.v0.z;
        fVar19 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar16 = DAT_0076d21c / fVar19;
        fVar15 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        fVar17 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        fVar18 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar18 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar18 = fVar6 * fVar16;
        }
        fVar4 = fVar4 + fVar15;
        fVar3 = fVar3 + fVar17;
        fVar2 = fVar2 + fVar18;
        *(float *)((int)pvVar8 + 0xb8) = fVar4;
        *(float *)((int)pvVar8 + 0xb4) = fVar3;
        *(float *)((int)pvVar8 + 0xb0) = fVar2;
        fVar5 = pMVar29[iVar23].transform.v1.y;
        fVar6 = pMVar29[iVar23].transform.v1.x;
        fVar7 = pMVar29[iVar23].transform.v1.z;
        fVar19 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar16 = DAT_00f0d2dc / fVar19;
        fVar15 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        fVar17 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        fVar18 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar18 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar18 = fVar6 * fVar16;
        }
        fVar4 = fVar4 + fVar15;
        fVar3 = fVar3 + fVar17;
        fVar2 = fVar2 + fVar18;
        *(float *)((int)pvVar8 + 0xb8) = fVar4;
        *(float *)((int)pvVar8 + 0xb4) = fVar3;
        *(float *)((int)pvVar8 + 0xb0) = fVar2;
        fVar5 = pMVar29[iVar23].transform.v2.y;
        fVar6 = pMVar29[iVar23].transform.v2.x;
        fVar7 = pMVar29[iVar23].transform.v2.z;
        fVar19 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar16 = DAT_0076d218 / fVar19;
        fVar15 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        fVar17 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        if (0.0 - fVar19 < 0.0) {
          fVar49 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar49 = fVar6 * fVar16;
        }
        *(float *)((int)pvVar8 + 0xb8) = fVar4 + fVar15;
        *(float *)((int)pvVar8 + 0xb4) = fVar3 + fVar17;
        *(float *)((int)pvVar8 + 0xb0) = fVar2 + fVar49;
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else {
    if (bVar1 != 10) {
      if (bVar1 == 9) {
        pMVar29 = MobyInstance +
                  *(int *)((int)pvVar8 +
                          (int)(((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar8 + 0xe8)) << 0x20)
                                 >> 0x25 ^ 1) << 2) + 0x90);
        mobyutil::MB_PlatformGetDelta
                  (lVar20,pMVar29,uVar30 + 0xb0,uVar30 + 0xc0,lVar20 + 0x10,lVar20 + 0x40);
        iVar23 = FUN_001b6870(pMVar29);
        if (iVar23 == 0) {
          return;
        }
        moby->state = '\n';
        *(int *)((int)pvVar8 + 0xe8) = *(int *)((int)pvVar8 + 0xe8) + 1;
        fVar49 = (pMVar29->pos).x;
        *(float *)((int)pvVar8 + 0xb0) = fVar49;
        fVar2 = (pMVar29->pos).y;
        *(float *)((int)pvVar8 + 0xb4) = fVar2;
        fVar3 = (pMVar29->pos).z;
        *(float *)((int)pvVar8 + 0xb8) = fVar3;
        *(f32 *)((int)pvVar8 + 0xbc) = (pMVar29->pos).w;
        fVar4 = (pMVar29->transform).v0.y;
        fVar5 = (pMVar29->transform).v0.x;
        fVar6 = (pMVar29->transform).v0.z;
        fVar7 = 0.0;
        fVar19 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar16 = DAT_0076d224 / fVar19;
        fVar15 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        fVar17 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        fVar18 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar18 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar18 = fVar5 * fVar16;
        }
        fVar3 = fVar3 + fVar15;
        fVar2 = fVar2 + fVar17;
        fVar49 = fVar49 + fVar18;
        *(float *)((int)pvVar8 + 0xb8) = fVar3;
        *(float *)((int)pvVar8 + 0xb4) = fVar2;
        *(float *)((int)pvVar8 + 0xb0) = fVar49;
        fVar4 = (pMVar29->transform).v1.y;
        fVar5 = (pMVar29->transform).v1.x;
        fVar6 = (pMVar29->transform).v1.z;
        fVar19 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar16 = DAT_00f0d2e0 / fVar19;
        fVar15 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        fVar17 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        fVar18 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar18 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar18 = fVar5 * fVar16;
        }
        fVar3 = fVar3 + fVar15;
        fVar2 = fVar2 + fVar17;
        fVar49 = fVar49 + fVar18;
        *(float *)((int)pvVar8 + 0xb8) = fVar3;
        *(float *)((int)pvVar8 + 0xb4) = fVar2;
        *(float *)((int)pvVar8 + 0xb0) = fVar49;
        fVar4 = (pMVar29->transform).v2.y;
        fVar5 = (pMVar29->transform).v2.x;
        fVar6 = (pMVar29->transform).v2.z;
        fVar19 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar16 = DAT_0076d220 / fVar19;
        fVar15 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        fVar17 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        if (0.0 - fVar19 < 0.0) {
          fVar7 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar7 = fVar5 * fVar16;
        }
        *(float *)((int)pvVar8 + 0xb8) = fVar3 + fVar15;
        *(float *)((int)pvVar8 + 0xb4) = fVar2 + fVar17;
        *(float *)((int)pvVar8 + 0xb0) = fVar49 + fVar7;
        return;
      }
      if (bVar1 != 8) {
        if (bVar1 != 7) {
          if (bVar1 != 6) {
            return;
          }
          iVar23 = *(int *)((int)pvVar8 + 0xe8);
          mobyupdate_helpers::M1243_00222c50
                    (lVar20,&Cuboids[*(int *)((int)pvVar8 + iVar23 * 4 + 0x80)].pos,&local_80);
          dVar36 = 0.0;
          local_64 = local_74;
          fVar49 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
          fVar2 = 4.0 / fVar49;
          dVar35 = dVar36;
          if (0.0 - fVar49 < 0.0) {
            dVar35 = (double)(local_78 * fVar2);
          }
          dVar34 = dVar36;
          if (0.0 - fVar49 < 0.0) {
            dVar34 = (double)(local_7c * fVar2);
          }
          dVar31 = dVar36;
          if (0.0 - fVar49 < 0.0) {
            dVar31 = (double)(local_80 * fVar2);
          }
          if (fVar49 - 0.0 < 0.0) {
            dVar35 = (double)(local_78 * fVar2);
          }
          if (fVar49 - 0.0 < 0.0) {
            dVar34 = (double)(local_7c * fVar2);
          }
          if (fVar49 - 0.0 < 0.0) {
            dVar31 = (double)(local_80 * fVar2);
          }
          local_68 = (float)(dVar35 + (double)(moby->pos).z);
          local_6c = (float)(dVar34 + (double)(moby->pos).y);
          local_70 = (float)(dVar31 + (double)(moby->pos).x);
          iVar24 = mobyupdate_helpers::M1243_00222788(lVar20,&local_70);
          pMVar29 = MobyInstance;
          iVar22 = *(int *)((int)pvVar8 + 0xe8);
          iVar28 = *(int *)((int)pvVar8 + iVar22 * 4 + 0x80);
          fVar49 = (moby->pos).y - Cuboids[iVar28].pos.y;
          fVar2 = (moby->pos).x - Cuboids[iVar28].pos.x;
          if (0.25 <= SQRT(fVar2 * fVar2 + fVar49 * fVar49)) {
            if (iVar24 == 0) {
              return;
            }
            mobyupdate_helpers::M1243_00222588(lVar20,&local_70);
            return;
          }
          if (iVar22 < 2) {
            iVar23 = *(int *)((int)pvVar8 +
                             (int)(((ulonglong)(LZCOUNT(iVar23) << 0x20) >> 0x25 ^ 1) << 2) + 0x90);
            fVar2 = MobyInstance[iVar23].pos.x;
            *(float *)((int)pvVar8 + 0xb0) = fVar2;
            fVar3 = pMVar29[iVar23].pos.y;
            *(float *)((int)pvVar8 + 0xb4) = fVar3;
            fVar4 = pMVar29[iVar23].pos.z;
            *(float *)((int)pvVar8 + 0xb8) = fVar4;
            fVar9 = pMVar29[iVar23].pos.w;
            *(f32 *)((int)pvVar8 + 0xbc) = fVar9;
            fVar5 = pMVar29[iVar23].transform.v0.y;
            fVar6 = pMVar29[iVar23].transform.v0.x;
            fVar7 = pMVar29[iVar23].transform.v0.z;
            dVar34 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
            fVar49 = (float)((double)DAT_00f0d2d8 / dVar34);
            dVar35 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar35 = (double)(fVar7 * fVar49);
            }
            dVar31 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar31 = (double)(fVar5 * fVar49);
            }
            dVar33 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar33 = (double)(fVar6 * fVar49);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar35 = (double)(fVar7 * fVar49);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar31 = (double)(fVar5 * fVar49);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar33 = (double)(fVar6 * fVar49);
            }
            fVar49 = (float)((double)fVar4 + dVar35);
            fVar3 = (float)((double)fVar3 + dVar31);
            fVar2 = (float)((double)fVar2 + dVar33);
            *(float *)((int)pvVar8 + 0xb8) = fVar49;
            *(float *)((int)pvVar8 + 0xb4) = fVar3;
            *(float *)((int)pvVar8 + 0xb0) = fVar2;
            fVar5 = pMVar29[iVar23].transform.v1.y;
            fVar6 = pMVar29[iVar23].transform.v1.x;
            fVar7 = pMVar29[iVar23].transform.v1.z;
            dVar34 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
            fVar4 = (float)((double)DAT_0076d214 / dVar34);
            dVar35 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar35 = (double)(fVar7 * fVar4);
            }
            dVar31 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar31 = (double)(fVar5 * fVar4);
            }
            dVar33 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar33 = (double)(fVar6 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar35 = (double)(fVar7 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar31 = (double)(fVar5 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar33 = (double)(fVar6 * fVar4);
            }
            fVar49 = (float)((double)fVar49 + dVar35);
            fVar3 = (float)((double)fVar3 + dVar31);
            fVar2 = (float)((double)fVar2 + dVar33);
            *(float *)((int)pvVar8 + 0xb8) = fVar49;
            *(float *)((int)pvVar8 + 0xb4) = fVar3;
            *(float *)((int)pvVar8 + 0xb0) = fVar2;
            fVar5 = pMVar29[iVar23].transform.v2.y;
            fVar6 = pMVar29[iVar23].transform.v2.x;
            fVar7 = pMVar29[iVar23].transform.v2.z;
            dVar34 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
            fVar4 = (float)((double)DAT_0076d210 / dVar34);
            dVar35 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar35 = (double)(fVar7 * fVar4);
            }
            dVar31 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar31 = (double)(fVar5 * fVar4);
            }
            dVar33 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar33 = (double)(fVar6 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar35 = (double)(fVar7 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar31 = (double)(fVar5 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar33 = (double)(fVar6 * fVar4);
            }
            fVar49 = (float)((double)fVar49 + dVar35);
            fVar3 = (float)((double)fVar3 + dVar31);
            fVar2 = (float)((double)fVar2 + dVar33);
            *(float *)((int)pvVar8 + 0xb8) = fVar49;
            *(float *)((int)pvVar8 + 0xb4) = fVar3;
            *(float *)((int)pvVar8 + 0xb0) = fVar2;
            fVar15 = DAT_0071f418 * 10.8;
            fVar4 = (moby->pos).z;
            fVar16 = mobyutil::g_FrameTime * 8.0;
            fVar6 = (moby->pos).y - fVar3;
            fVar5 = (moby->pos).x;
            fVar7 = fVar5 - fVar2;
            fVar2 = fVar2 - fVar5;
            *(float *)((int)pvVar8 + 0xa0) = fVar2;
            fVar3 = fVar3 - (moby->pos).y;
            *(float *)((int)pvVar8 + 0xa8) = fVar16;
            *(f32 *)((int)pvVar8 + 0xac) = fVar9;
            dVar33 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
            fVar49 = (float)((double)(SQRT(fVar7 * fVar7 + fVar6 * fVar6) /
                                     ((fVar16 * 2.0 + SQRT(fVar15 * 2.0 * (fVar49 - fVar4))) /
                                     fVar15)) / dVar33);
            dVar34 = (double)(fVar2 * fVar49);
            dVar31 = (double)(fVar3 * fVar49);
            dVar35 = dVar36;
            if (dVar36 - dVar33 < 0.0) {
              dVar35 = dVar34;
            }
            dVar32 = dVar36;
            if (dVar36 - dVar33 < 0.0) {
              dVar32 = dVar31;
            }
            if (dVar33 - dVar36 < 0.0) {
              dVar35 = dVar34;
            }
            if (dVar33 - dVar36 < 0.0) {
              dVar32 = dVar31;
            }
            *(float *)((int)pvVar8 + 0xa0) = (float)dVar35;
            *(float *)((int)pvVar8 + 0xa4) = (float)dVar32;
            moby->state = '\a';
            return;
          }
          if ((iVar22 == 2) &&
             (iVar23 = FUN_001e348c(MobyInstance + *(int *)((int)pvVar8 + 0xd0)), iVar23 != 0)) {
            *(int *)((int)pvVar8 + 0xe8) = *(int *)((int)pvVar8 + 0xe8) + 1;
            moby->state = '\x03';
            return;
          }
          if (*(int *)((int)pvVar8 + 0xe8) != 3) {
            return;
          }
          FUN_004d407c(lVar20,2);
          mobyfunc::SetLevelFlag(*(undefined4 *)((int)pvVar8 + 0xdc));
          FUN_001eede4(MobyInstance + *(int *)((int)pvVar8 + 0xd4));
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          moby->state = '\f';
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar37 = loadVectorLeftIndexed(0xc,0x222f98);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = vectorSplatHalfWord(auVar37,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar37,0xee,uVar30);
          *(undefined2 *)((int)pvVar8 + 0xee) = uVar13;
          MiscLevelFlags.field84_0x54 = 1;
          return;
        }
        goto LAB_00223efc;
      }
    }
    local_60.x = *(float *)((int)pvVar8 + 0xb0) - (moby->pos).x;
    local_60.y = *(float *)((int)pvVar8 + 0xb4) - (moby->pos).y;
    pMVar29 = MobyInstance +
              *(int *)((int)pvVar8 +
                      (int)(((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar8 + 0xe8)) << 0x20) >>
                             0x25 ^ 1) << 2) + 0x90);
    local_60.z = *(float *)((int)pvVar8 + 0xb8) - (moby->pos).z;
    local_60.w = *(float *)((int)pvVar8 + 0xbc);
    mobyutil::ClampVec3Magnitude((double)(DAT_0076d200 * mobyutil::g_FrameTime),&local_60);
    local_60.z = local_60.z - mobyutil::g_FrameTime;
    mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fd3333340000000,0,lVar20,&local_60);
    uVar26 = moby->state;
    if ((uVar26 == '\b') &&
       (fVar49 = (moby->pos).y - *(float *)((int)pvVar8 + 0xb4),
       fVar2 = (moby->pos).x - *(float *)((int)pvVar8 + 0xb0),
       SQRT(fVar2 * fVar2 + fVar49 * fVar49) < 0.25)) {
      iVar23 = FUN_001b67d0(pMVar29);
      uVar26 = moby->state;
      if (iVar23 != 0) {
        mobyutil::MB_PlatformWorldToLocal
                  (lVar20,pMVar29,lVar20 + 0x10,lVar20 + 0x40,uVar30 + 0xb0,uVar30 + 0xc0);
        moby->state = '\t';
        return;
      }
    }
    if ((uVar26 == '\n') &&
       (fVar49 = (moby->pos).y - *(float *)((int)pvVar8 + 0xb4),
       fVar2 = (moby->pos).x - *(float *)((int)pvVar8 + 0xb0),
       SQRT(fVar2 * fVar2 + fVar49 * fVar49) < 0.25)) {
      pCVar25 = Cuboids + *(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0xe8) * 4 + 0x70);
      uVar21 = ZEXT48(pCVar25);
      auVar40 = loadVectorLeftIndexed(0x30,uVar21);
      fVar49 = (pCVar25->pos).x;
      auVar37 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xb0,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xb0U & 0xfffffffc) = uVar14;
      auVar39 = loadVectorLeftIndexed(0x34,uVar21);
      fVar2 = (pCVar25->pos).y;
      auVar37 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xb4,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xb4U & 0xfffffffc) = uVar14;
      auVar41 = loadVectorLeftIndexed(0x38,uVar21);
      auVar38 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = ZEXT416(0xffffffff);
      auVar44 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      uVar14 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xb8,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xb8U & 0xfffffffc) = uVar14;
      fVar3 = (pCVar25->pos).w;
      *(float *)((int)pvVar8 + 0xbc) = fVar3;
      auVar37 = loadVectorLeftIndexed(0x10,lVar20);
      fVar4 = (moby->pos).x;
      auVar40 = vectorSubtractFloatingPoint(auVar40,auVar37);
      auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar37 = ZEXT416(0xffffffff);
      auVar38 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar46 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xa0,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa0U & 0xfffffffc) = uVar14;
      auVar37 = loadVectorLeftIndexed(0x14,lVar20);
      fVar5 = (moby->pos).y;
      auVar39 = vectorSubtractFloatingPoint(auVar39,auVar37);
      auVar37 = ZEXT416(0xffffffff);
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar37 = ZEXT416(0xffffffff);
      auVar47 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = ZEXT416(0xffffffff);
      auVar38 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xa4,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar14;
      auVar47 = loadVectorLeftIndexed(0x18,lVar20);
      *(float *)((int)pvVar8 + 0xac) = fVar3;
      auVar37 = loadVectorLeftIndexed(0x3c,0x222f98);
      auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar44 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                           auVar44);
      auVar37 = ZEXT416(0xffffffff);
      auVar42 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar41 = vectorSubtractFloatingPoint(auVar41,auVar47);
      auVar47 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar37 = loadVectorLeftIndexed(0x34,0x222f98);
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar42 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
      auVar38 = vectorConvertFromSignedFixedPointWord(auVar37,0);
      auVar37 = vectorReciprocalEstimateFloatingPoint(auVar38);
      fVar3 = 1.0 / (float)(longlong)(animationSpeed * 60.5);
      auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar38,auVar42);
      auVar44 = vectorMultiplyAddFloatingPoint(auVar37,auVar44,auVar43);
      auVar37 = ZEXT416(0xffffffff);
      auVar43 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar38,auVar42);
      auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar37,auVar45);
      auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar38,auVar42);
      fVar2 = (fVar2 - fVar5) * fVar3;
      fVar3 = (fVar49 - fVar4) * fVar3;
      auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar37,auVar46);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar40,auVar44,auVar48);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar39,auVar44,auVar47);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar41,auVar44,auVar43);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xa0,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa0U & 0xfffffffc) = uVar14;
      uVar14 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xa4,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar14;
      uVar14 = storeVectorElementWordIndexed
                         (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0xa8,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa8U & 0xfffffffc) = uVar14;
      dVar35 = (double)mobyutil::MB_computeLobVelocity
                                 ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                  (double)(DAT_0071f418 * -10.8),lVar20 + 0x10,uVar30 + 0xb0,0xa0,
                                  0xa4,0);
      *(float *)((int)pvVar8 + 0xa8) = (float)dVar35;
      moby->state = '\v';
    }
  }
  return;
}



//==== 002247e4  ns=Global  size=0x78
// sig: undefined FUN_002247e4(void)
// callers(1): 00190d60 mobyupdate_unsorted::UpdateMoby_1032
// callees(0): 

void FUN_002247e4(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5
                 )

{
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 0x40) = *param_3;
  *(undefined4 *)(param_1 + 0x44) = param_3[1];
  *(undefined4 *)(param_1 + 0x48) = param_3[2];
  *(undefined4 *)(param_1 + 0x4c) = param_3[3];
  *(byte *)(param_1 + 0x20) = ((byte)((LZCOUNT(-param_4) << 0x3a) >> 0x3f) & 10) + 3;
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0xe8) = param_5;
  return;
}



//==== 0022485c  ns=mobyupdate_helpers  size=0x1a4
// sig: undefined M1246_0022485c(void)
// callers(0): 
// callees(3): 0006a718 draw::DrawRoundedRect; 00070514 draw::FontPrintMediumCenter; 005cd2a8 libc::snprintf
// strings: 006550bc: '  Those Blarg ships have polluted these oceans.' | 006550ec: 'If you can defeat the mutated see life and help' | 0065511c: "me get to my boat, I'll take you to jet plane, " | 0065514c: 'so we can destroy those ships. '

void mobyupdate_helpers::M1246_0022485c(void)

{
  char acStack_70 [80];
  
  draw::DrawRoundedRect
            (DAT_0076d238 + DAT_0076d244,DAT_0076d248 + DAT_0076d238,DAT_0076d234 + DAT_0076d24c,
             DAT_0076d234 + DAT_0076d250,DAT_0076d254);
  libc::snprintf(acStack_70,"  Those Blarg ships have polluted these oceans.");
  draw::FontPrintMediumCenter(DAT_0076d234,DAT_0076d238,DAT_0076d23c,acStack_70,0x2f);
  libc::snprintf(acStack_70,"If you can defeat the mutated see life and help");
  draw::FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0xc,DAT_0076d23c,acStack_70,0x2f);
  libc::snprintf(acStack_70,"me get to my boat, I\'ll take you to jet plane, ");
  draw::FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0x18,DAT_0076d23c,acStack_70,0x2f);
  libc::snprintf(acStack_70,"so we can destroy those ships. ");
  draw::FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0x24,DAT_0076d23c,acStack_70,0x1f);
  return;
}



//==== 00224a00  ns=mobyupdate_helpers  size=0x1a4
// sig: undefined M1246_00224a00(void)
// callers(0): 
// callees(3): 0006a718 draw::DrawRoundedRect; 00070514 draw::FontPrintMediumCenter; 005cd2a8 libc::snprintf
// strings: 0065516c: '  Thanks for helping me out! Looks like the    ' | 0065519c: 'hangar doors are closed. Maybe you could get an' | 006551cc: "upgrade at Bob's RoboShack to help you use that" | 006551fc: 'stomp switch.'

void mobyupdate_helpers::M1246_00224a00(void)

{
  char acStack_70 [80];
  
  draw::DrawRoundedRect
            (DAT_0076d238 + DAT_0076d244,DAT_0076d248 + DAT_0076d238,DAT_0076d234 + DAT_0076d24c,
             DAT_0076d234 + DAT_0076d250,DAT_0076d254);
  libc::snprintf(acStack_70,"  Thanks for helping me out! Looks like the    ");
  draw::FontPrintMediumCenter(DAT_0076d234,DAT_0076d238,DAT_0076d23c,acStack_70,0x2f);
  libc::snprintf(acStack_70,"hangar doors are closed. Maybe you could get an");
  draw::FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0xc,DAT_0076d23c,acStack_70,0x2f);
  libc::snprintf(acStack_70,"upgrade at Bob\'s RoboShack to help you use that");
  draw::FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0x18,DAT_0076d23c,acStack_70,0x2f);
  libc::snprintf(acStack_70,"stomp switch.");
  draw::FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0x24,DAT_0076d23c,acStack_70,0xd);
  return;
}



//==== 00224ba4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1246_00224ba4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1246_00224ba4(void)

{
  DAT_0076d2a4 = 0x10000;
  return;
}



//==== 00224bf8  ns=mobyupdate_helpers  size=0x394
// sig: undefined M1246_00224bf8(void)
// callers(1): 00225b48 mobyupdate_unsorted::UpdateMoby_1246
// callees(4): 000efe40 mobyfunc::BlendAnimFrame; 00101058 mobyutil::MB_UpdateNavMove; 0010a2e0 mobyutil::OrganicDeltAng; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1246_00224bf8(MobyInstance *param_1,float *param_2)

{
  float fVar1;
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
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xd0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar13;
  puVar8[0x1c] = in_LR;
  fVar1 = *param_2 - (param_1->pos).x;
  fVar2 = param_2[1] - (param_1->pos).y;
  puVar8[0x19] = unaff_r31;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar8 + 0x12) = fVar1;
  puVar8[0x18] = unaff_r30;
  *(float *)((int)puVar8 + 0x94) = fVar2;
  pvVar7 = param_1->pVar;
  *(float *)(puVar8 + 0x13) = fVar4 - fVar3;
  fVar1 = 0.0;
  fVar2 = *(float *)((int)pvVar7 + 0x24c);
  uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar8 + 0x12));
  if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar8 + 0x94));
  if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
    fVar9 = fVar4;
  }
  if (0.0 < fVar5) {
    lVar18 = uVar13 - 0xc0;
    lVar16 = uVar13 - 0x24;
    lVar17 = uVar13 - 0x34;
    lVar20 = 2;
    fVar4 = (fVar9 - fVar5) / (fVar9 + fVar5);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x15) = fVar4;
    *(float *)(puVar8 + 0x14) = fVar4;
    *(float *)((int)puVar8 + 0xa4) = fVar4;
    *(float *)((int)puVar8 + 0x9c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar5;
    *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar4;
    *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar18 + 0x9c) = *(float *)((int)lVar18 + 0x8c) * fVar4 * fVar4;
      iVar10 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar13 - 0x34;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar18;
    lVar17 = lVar14;
    do {
      fVar4 = *pfVar19;
      fVar5 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x9c) = *(float *)((int)lVar17 + 0x9c) * fVar4;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    do {
      iVar10 = (int)lVar14;
      iVar11 = (int)lVar18;
      lVar14 = lVar14 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar10 + 0x9c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar3;
  }
  dVar21 = (double)fastfunc::FastWrapRot(fVar1,fVar2);
  mobyutil::OrganicDeltAng
            ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
             mobyutil::g_FrameTime * 12.566371,&(param_1->rotation).z,0x224bb8,
             (float *)((int)pvVar7 + 0x250));
  dVar21 = (double)mobyfunc::BlendAnimFrame(param_1);
  if (((param_1->updateId == param_1->animationId) && (8.0 < dVar21)) && (dVar21 < 22.0)) {
    *(float *)((int)pvVar7 + 0x1a4) = DAT_0076d2f8 * mobyutil::g_FrameTime;
    fVar1 = (param_1->rotation).z;
    fVar2 = fVar1 + 1.5707963;
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar3 = fVar4;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar1 = fVar5;
    }
    fVar2 = fVar3 * fVar3;
    fVar4 = fVar1 * fVar1;
    fVar9 = fVar2 * fVar2 * fVar3;
    *(undefined4 *)(puVar8 + 0xf) = 0;
    fVar5 = fVar4 * fVar4 * fVar1;
    fVar12 = fVar2 * fVar9;
    fVar6 = fVar4 * fVar5;
    *(float *)((int)puVar8 + 0x74) =
         (fVar2 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar9 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3) * 2.0;
    *(float *)(puVar8 + 0xe) =
         (fVar4 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) * 2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,param_1,(MobyInstance *)((int)pvVar7 + 0x180),puVar8 + 0xe,
               puVar8 + 0x10);
  }
  return;
}



//==== 00224f8c  ns=mobyupdate_helpers  size=0x94
// sig: undefined M1246_00224f8c(void)
// callers(1): 00225b48 mobyupdate_unsorted::UpdateMoby_1246
// callees(0): 

short mobyupdate_helpers::M1246_00224f8c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    sVar3 = 0;
  }
  else {
    puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar2 == (ushort *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = 0;
      do {
        if ((MobyInstance[*puVar2 & 0x7fff].oClass == PUFFOID) &&
           (0xc < MobyInstance[*puVar2 & 0x7fff].state &&
            MobyInstance[*puVar2 & 0x7fff].state < 0x12)) {
          sVar3 = sVar3 + 1;
        }
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return sVar3;
}



//==== 00225048  ns=mobyupdate_helpers  size=0xa78
// sig: undefined M1246_00225048(void)
// callers(1): 00225b48 mobyupdate_unsorted::UpdateMoby_1246
// callees(15): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00111ba0 mobyutil::MB_getTargetInArea; 001b6870 FUN_001b6870; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1246_00225048(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyClass *pMVar6;
  void *pvVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  int iVar10;
  MobyInstance *pMVar11;
  ulonglong uVar12;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  longlong lVar13;
  longlong lVar14;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
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
  lVar14 = uVar12 - 0x110;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x24] = in_LR;
  puVar9[0x21] = in_f31;
  puVar9[0x20] = unaff_r31;
  pMVar6 = param_1->pClass;
  puVar9[0x1f] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar22 = ZEXT48(pvVar7);
  iVar15 = *(int *)((int)pvVar7 + 0x254);
  param_1->scale = pMVar6->gScale * DAT_0076d2c8;
  fVar5 = DAT_0076d2f8 * mobyutil::g_FrameTime;
  puVar9[0x1e] = unaff_r29;
  puVar9[0x1d] = unaff_r28;
  *(float *)((int)pvVar7 + 0x1a4) = fVar5;
  if (((((iVar15 != -1) && (uVar1 = param_1->state, uVar1 != '\t' && uVar1 != '\v')) &&
       (uVar1 != '\x12')) && ((uVar1 != '\x11' && (uVar1 != '\0')))) &&
     ((uVar1 != '\f' && ((uVar1 != '\r' && ((param_1->pos).z < MobyInstance[iVar15].pos.z + 0.5)))))
     ) {
    mobyutil::MB_SpawnExplosionSparks2
              (0x3fe0000000000000,0x4024000000000000,param_1,&param_1->pos,&DAT_00225020,
               0xffffffffffffffff);
    mobyfunc::DeleteMoby(param_1);
  }
  if ((param_1->state == '\f') && (*(int *)((int)pvVar7 + 0x254) != -1)) {
    iVar15 = FUN_001b6870(MobyInstance + *(int *)((int)pvVar7 + 0x254));
    if ((iVar15 != 0) && (param_1->enabled == '\0')) {
      mobyfunc::DeleteMoby(param_1);
      return;
    }
    if (1 < MobyInstance[*(int *)((int)pvVar7 + 0x254)].state) {
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      param_1->enabled = '\x01';
      param_1->collision = param_1->pClass->collision;
    }
  }
  dVar27 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar15 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar16 = mobyutil::MB_HandleDamage
                     (param_1,iVar15,uVar22 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\v')) {
    fVar5 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar5;
    iVar16 = iVar16 + ((uint)((LZCOUNT(0x47 - (uint)*(ushort *)(*(int *)(iVar15 + 0x20) + 0xa6)) <<
                              0x3a) >> 0x3f) & 3U - iVar16);
    if ((double)fVar5 <= dVar27) {
      iVar16 = 1;
    }
    uVar17 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar7 + 0x148) = 0x3e4ccccd;
    fVar2 = DAT_0076d2cc;
    fVar5 = DAT_0071f418;
    *(undefined4 *)((int)pvVar7 + 0x140) = uVar17;
    *(undefined4 *)((int)pvVar7 + 0x134) = 0;
    *(undefined1 *)((int)pvVar7 + 0x15d) = 0;
    *(undefined4 *)((int)pvVar7 + 0x144) = 9;
    *(float *)((int)pvVar7 + 0x130) = fVar2 * fVar5;
    fVar5 = mobyutil::g_FrameTime;
    if (iVar16 < 3) {
      if ((-1 < iVar16) && (0 < iVar16)) {
        fVar5 = DAT_0076d2cc * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar7 + 0x130) = fVar5;
        fVar5 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar7 + 0x138) = DAT_0076d2dc * mobyutil::g_FrameTime;
        fVar2 = DAT_0076d2d8;
        *(undefined4 *)((int)pvVar7 + 0x170) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0x174) = 0x41300000;
        *(float *)((int)pvVar7 + 0x13c) = fVar2 * fVar5;
        fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar15 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar15 + 0x20) + 0x14);
        dVar24 = ABS((double)fVar5);
        dVar25 = ABS((double)fVar2);
        *(float *)(puVar9 + 0x10) = fVar5;
        *(float *)((int)puVar9 + 0x84) = fVar2;
        *(float *)(puVar9 + 0x11) = (float)(dVar24 - dVar25);
        uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar26 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar25 = dVar24;
        }
        fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if (dVar27 < dVar26) {
          lVar13 = uVar12 - 0x100;
          lVar18 = uVar12 - 0x78;
          lVar21 = uVar12 - 0x68;
          lVar23 = 2;
          fVar4 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0xa4) = fVar4;
          *(float *)((int)puVar9 + 0x9c) = fVar4;
          *(float *)(puVar9 + 0x14) = fVar4;
          *(float *)(puVar9 + 0x13) = fVar4;
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar3;
          do {
            *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x88) * fVar4 * fVar4;
            iVar16 = (int)lVar18;
            lVar13 = lVar13 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
            lVar21 = lVar21 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar21 = uVar12 - 0x78;
          pfVar19 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar18 = lVar21;
          do {
            fVar4 = *pfVar19;
            fVar3 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x98) * fVar4;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar13 = 2;
          do {
            iVar16 = (int)lVar14;
            iVar10 = (int)lVar21;
            lVar14 = lVar14 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0x98)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
        }
        *(float *)((int)puVar9 + 0x7c) = (float)dVar27;
        uVar17 = *(undefined4 *)(iVar15 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar17;
        uVar17 = *(undefined4 *)(iVar15 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar17;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x94,uVar22 + 0x138,uVar22 + 0x13c)
        ;
        mobyutil::MB_StartKick((double)*(float *)((int)puVar9 + 0x7c),param_1,uVar22 + 0x120);
        param_1->state = ((byte)((longlong)((ulonglong)param_1->state - 0xc) >> 0x3f) & 0xf9) + 0x12
        ;
        *(undefined1 *)((int)pvVar7 + 0x117) = 0xf0;
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar16 < 0xb) {
      if (iVar16 < 9) {
        *(float *)((int)pvVar7 + 0x138) = DAT_0076d2d4 * mobyutil::g_FrameTime;
        fVar2 = DAT_0076d2d0;
        *(undefined4 *)((int)pvVar7 + 0x170) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0x174) = 0x41300000;
        *(float *)((int)pvVar7 + 0x13c) = fVar2 * fVar5;
        fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar15 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar15 + 0x20) + 0x14);
        dVar24 = ABS((double)fVar5);
        dVar25 = ABS((double)fVar2);
        *(float *)((int)puVar9 + 0x8c) = fVar5;
        *(float *)(puVar9 + 0x12) = fVar2;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar24 - dVar25);
        uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar26 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
        dVar25 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar25 = dVar24;
        }
        fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if (dVar27 < dVar26) {
          lVar13 = uVar12 - 0x100;
          lVar18 = uVar12 - 0x58;
          lVar21 = uVar12 - 0x48;
          lVar23 = 2;
          fVar4 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0xc4) = fVar4;
          *(float *)((int)puVar9 + 0xbc) = fVar4;
          *(float *)(puVar9 + 0x18) = fVar4;
          *(float *)(puVar9 + 0x17) = fVar4;
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar4 * fVar3;
          do {
            *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xa8) * fVar4 * fVar4;
            iVar16 = (int)lVar18;
            lVar13 = lVar13 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
            lVar21 = lVar21 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar21 = uVar12 - 0x58;
          pfVar19 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar18 = lVar21;
          do {
            fVar4 = *pfVar19;
            fVar3 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xb8) * fVar4;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar13 = 2;
          do {
            iVar16 = (int)lVar14;
            iVar10 = (int)lVar21;
            lVar14 = lVar14 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0xb8)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
        }
        *(float *)(puVar9 + 0xf) = (float)dVar27;
        uVar17 = *(undefined4 *)(iVar15 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar17;
        uVar17 = *(undefined4 *)(iVar15 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar17;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x98,uVar22 + 0x138,uVar22 + 0x13c)
        ;
        mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x120);
        param_1->state = ((byte)((longlong)((ulonglong)param_1->state - 0xc) >> 0x3f) & 0xf8) + 0x11
        ;
        *(undefined1 *)((int)pvVar7 + 0x117) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar7 + 0x117) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar22 + 0x110);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar22 + 0x110);
  if ((*(int *)((int)pvVar7 + 0x244) != 0) &&
     (((param_1->state == '\x02' ||
       ((param_1->state == '\x03' && ((param_1->field43_0x70 & 2U) != 0)))) &&
      (param_1->state = '\n', param_1->animationId != '\x02')))) {
    puVar9[0x1b] = (longlong)(int)(animationSpeed * 10.5);
    mobyutil::MB_SetAnimation(param_1,2,0,*(undefined4 *)((int)puVar9 + 0xdc));
  }
  if (*(int *)((int)pvVar7 + 0x38) != 0) {
    dVar27 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar7 + 0x244) = uVar17;
    *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar22 + 0x244);
  if (*(int *)((int)pvVar7 + 0x244) == 0) {
    fVar5 = *(float *)((int)pvVar7 + 0x23c);
  }
  else {
    fVar5 = *(float *)((int)pvVar7 + 0x23c) + 64.0;
  }
  *(float *)((int)pvVar7 + 0x248) = fVar5;
  pSVar8 = Splines[*(int *)((int)pvVar7 + 0x230)];
  iVar15 = mobyutil::MB_getTargetInArea
                     (param_1,uVar22 + 0x1d0,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if (iVar15 != 2) {
    if (param_1->state == '\x01') {
      pSVar8 = Splines[*(int *)((int)pvVar7 + 0x234)];
      fVar5 = pSVar8->points[1].x;
      fVar2 = pSVar8->points[1].y;
      fVar4 = pSVar8->points[1].z;
    }
    else {
      fVar5 = (param_1->pos).x;
      fVar2 = (param_1->pos).y;
      fVar4 = (param_1->pos).z;
    }
    fVar2 = fVar2 - *(float *)((int)pvVar7 + 0x1d4);
    fVar5 = fVar5 - *(float *)((int)pvVar7 + 0x1d0);
    if ((*(float *)((int)pvVar7 + 0x248) < SQRT(fVar5 * fVar5 + fVar2 * fVar2)) ||
       (3.0 < fVar4 - *(float *)((int)pvVar7 + 0x1d8))) {
      *(undefined4 *)((int)pvVar7 + 0x214) = 2;
    }
  }
  pMVar11 = g_heroMobyPtr;
  if (*(int *)((int)pvVar7 + 0x210) == 0) {
    *(float *)((int)pvVar7 + 0x1d0) = g_heroPosition.x;
    fVar5 = g_heroPosition.y;
    *(MobyInstance **)((int)pvVar7 + 0x210) = pMVar11;
    *(float *)((int)pvVar7 + 0x1d4) = fVar5;
    *(float *)((int)pvVar7 + 0x1d8) = g_heroPosition.z;
    *(float *)((int)pvVar7 + 0x1dc) = g_heroPosition.w;
  }
  return;
}



//==== 00225b48  ns=mobyupdate_unsorted  size=0x1e4c
// sig: undefined UpdateMoby_1246(MobyInstance * moby)
// callers(0): 
// callees(35): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe4f0 mobyutil::MB_randRangeSigned; 000ffb70 mobyutil::GetGroundZ; 000ffc18 mobyutil::GetGroundZNoWater; 001009b0 mobyutil::MB_MoveAndCollide; 00100f8c mobyutil::MB_InitDefaultParams; 00104e44 mobyutil::PointInsideComplexPoly; 00105870 mobyutil::DamageSphereAtPos; 00106360 mobyutil::MB_SetZBoundsFromGround; 00108180 mobyutil::MB_computeLobVelocity; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00110040 mobyutil::MB_SpawnExplosionSparks2; 001122e0 mobyutil::MB_PlatformLocalToWorld; 00113fa0 mobyutil::MB_LineCrossesSpline; 00119a18 mobyfunc::DoManipulator; 0012a440 partupd::SpawnPart_34; 00224bf8 mobyupdate_helpers::M1246_00224bf8; 00224f8c mobyupdate_helpers::M1246_00224f8c; 00225048 mobyupdate_helpers::M1246_00225048; 0048c188 FUN_0048c188; 005010c0 fastfunc::FastNormalizeRMtx4; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005e7d64 FUN_005e7d64; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e825c FUN_005e825c; 005e8338 FUN_005e8338; 005e84c0 FUN_005e84c0

/* Moby 1246 */

void mobyupdate_unsorted::UpdateMoby_1246(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  f32 fVar8;
  void *pvVar9;
  Spline *pSVar10;
  float fVar11;
  MobyInstance *pMVar12;
  longlong lVar13;
  undefined1 uVar18;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  MobyInstance *pMVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  float fVar34;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [12];
  undefined4 local_144;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  Vec4 local_100;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 auStack_e0 [64];
  longlong local_a0;
  
  lVar13 = (longlong)(int)moby;
  pvVar7 = moby->pVar;
  if (moby->state != '\x14') {
    *(undefined2 *)((int)pvVar7 + 200) = 0;
    mobyupdate_helpers::M1246_00225048(lVar13);
  }
  iVar16 = *(int *)((int)pvVar7 + 0x210);
  uVar33 = 0x4004000000000000;
  mobyfunc::DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar7 + 0x280));
  if ((moby->enabled != '\0') &&
     (fVar34 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar11 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar11 * fVar11 + fVar4 * fVar4 + fVar34 * fVar34) < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x16';
  }
  bVar2 = moby->state;
  if (bVar2 < 0xb) {
    if (bVar2 < 4) {
      if (bVar2 == 0) {
        uVar33 = 0x4000000000000000;
        *(undefined4 *)((int)pvVar7 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar7 + 0x24) = 2;
        *(undefined1 *)((int)pvVar7 + 0x28) = 1;
        *(undefined4 *)((int)pvVar7 + 0x30) = 0x3e800000;
        uVar18 = fastfunc::FastDoubleToInt(0x4020000000000000);
        *(undefined1 *)((int)pvVar7 + 0x58) = uVar18;
        uVar18 = fastfunc::FastDoubleToInt(uVar33);
        *(undefined1 *)((int)pvVar7 + 0x5a) = uVar18;
        *(undefined1 *)((int)pvVar7 + 0x29) = 1;
        *(undefined **)((int)pvVar7 + 0xd0) = &DAT_00f0d2e8;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar7 + 0x180));
        *(undefined4 *)((int)pvVar7 + 0x18c) = 0x3f000000;
        *(undefined4 *)((int)pvVar7 + 0x188) = 0x3f000000;
        uVar14 = fastfunc::FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar7 + 0x180) = uVar14;
        *(undefined4 *)((int)pvVar7 + 0x184) = 0x3f000000;
        *(uint *)((int)pvVar7 + 0x1b8) = *(uint *)((int)pvVar7 + 0x1b8) | 0x10;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        if (*(int *)((int)pvVar7 + 0x238) == 2) {
          moby->state = '\x13';
          if (moby->animationId != '\x04') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
          }
          pSVar10 = Splines[*(int *)((int)pvVar7 + 0x234)];
          (moby->pos).x = pSVar10->points[0].x;
          (moby->pos).y = pSVar10->points[0].y;
          (moby->pos).z = pSVar10->points[0].z;
          fVar34 = pSVar10->points[0].w;
          *(undefined4 *)((int)pvVar7 + 0x25c) = 1;
          (moby->pos).w = fVar34;
        }
        else if (*(int *)((int)pvVar7 + 0x238) == 1) {
          moby->state = '\x01';
          iVar16 = *(int *)((int)pvVar7 + 0x234);
          pSVar10 = Splines[iVar16];
          (moby->pos).x = pSVar10->points[0].x;
          (moby->pos).y = pSVar10->points[0].y;
          fVar34 = pSVar10->points[0].z;
          (moby->pos).w = pSVar10->points[0].w;
          pSVar10 = Splines[iVar16];
          (moby->pos).z = fVar34 - 1.0;
          *(float *)((int)pvVar7 + 0x220) = pSVar10->points[1].x;
          *(float *)((int)pvVar7 + 0x224) = pSVar10->points[1].y;
          *(float *)((int)pvVar7 + 0x228) = pSVar10->points[1].z;
          *(float *)((int)pvVar7 + 0x22c) = pSVar10->points[1].w;
        }
        else if (*(int *)((int)pvVar7 + 0x254) < 0) {
          dVar26 = (double)mobyutil::GetGroundZNoWater(lVar13 + 0x10);
          uVar3 = moby->animationId;
          (moby->pos).z = (float)dVar26;
          moby->state = '\x02';
          if (uVar3 != '\0') {
            mobyutil::MB_SetAnimation(lVar13,0,0,5);
          }
          *(f32 *)((int)pvVar7 + 0x220) = (moby->pos).x;
          *(f32 *)((int)pvVar7 + 0x224) = (moby->pos).y;
          *(f32 *)((int)pvVar7 + 0x228) = (moby->pos).z;
          *(f32 *)((int)pvVar7 + 0x22c) = (moby->pos).w;
        }
        else {
          moby->state = '\f';
          dVar26 = (double)mobyutil::MB_randRangeFloat(-3.0,3.0);
          MVar6 = moby->modeBits;
          *(float *)((int)pvVar7 + 600) = (float)dVar26;
          moby->enabled = '\0';
          moby->modeBits = MVar6 | DISABLED;
          moby->collision = (ushort *)0x0;
        }
      }
      else if (bVar2 < 2) {
        dVar26 = (double)FUN_005e8338((double)(Splines[*(int *)((int)pvVar7 + 0x234)]->points[1].x -
                                              (moby->pos).x),
                                      (double)(Splines[*(int *)((int)pvVar7 + 0x234)]->points[1].y -
                                              (moby->pos).y));
        fVar34 = mobyutil::OrganicDeltAng
                           ((float)dVar26,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                            mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar7 + 0x250));
        if ((*(int *)((int)pvVar7 + 0x214) != 2) &&
           (iVar16 = mobyutil::MB_randInt((double)fVar34,9), iVar16 == 0)) {
          moby->state = '\a';
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar13,0,0,5);
          }
          pSVar10 = Splines[*(int *)((int)pvVar7 + 0x234)];
          *(float *)((int)pvVar7 + 0x40) = pSVar10->points[1].x - (moby->pos).x;
          *(float *)((int)pvVar7 + 0x44) = pSVar10->points[1].y - (moby->pos).y;
          *(float *)((int)pvVar7 + 0x48) = pSVar10->points[1].z - (moby->pos).z;
          *(float *)((int)pvVar7 + 0x4c) = pSVar10->points[1].w;
          FUN_005e84c0((double)(DAT_0076d2e8 * mobyutil::g_FrameTime),(int)pvVar7 + 0x40,
                       (int)pvVar7 + 0x40);
          dVar26 = (double)mobyutil::MB_computeLobVelocity
                                     ((double)(DAT_0076d2e8 * mobyutil::g_FrameTime),
                                      -(double)(DAT_0076d2ec * DAT_0071f418),lVar13 + 0x10,
                                      ZEXT48(Splines[*(int *)((int)pvVar7 + 0x234)]) + 0x20,
                                      &DAT_00720000,*(int *)((int)pvVar7 + 0x234) * 4,0);
          *(float *)((int)pvVar7 + 0x48) = (float)dVar26;
        }
      }
      else if (bVar2 < 3) {
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          if (((((moby->field43_0x70 & 2U) != 0) && (iVar16 = mobyutil::MB_randInt(3), iVar16 != 0))
              && (moby->enabled != '\0')) &&
             (fVar34 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
             fVar11 = (moby->pos).z - GameCamera.posZ,
             SQRT(fVar11 * fVar11 + fVar4 * fVar4 + fVar34 * fVar34) < 32.0)) {
            dVar26 = (double)mobyutil::MB_randRot();
            dVar27 = (double)mobyutil::MB_randRangeFloat(1.0,3.0);
            dVar28 = (double)mathfunc::cosf((float)dVar26);
            *(float *)((int)pvVar7 + 0x260) = (float)(dVar28 * dVar27);
            dVar26 = (double)FUN_005e8128(dVar26);
            *(undefined4 *)((int)pvVar7 + 0x268) = *(undefined4 *)((int)pvVar7 + 0x228);
            *(float *)((int)pvVar7 + 0x260) =
                 *(float *)((int)pvVar7 + 0x260) + *(float *)((int)pvVar7 + 0x220);
            *(float *)((int)pvVar7 + 0x264) =
                 (float)(dVar26 * dVar27 + (double)*(float *)((int)pvVar7 + 0x224));
            moby->state = '\x03';
            if (moby->animationId != '\x01') {
              local_a0 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
            }
          }
        }
        else {
          dVar26 = (double)mobyutil::MB_randRangeFloat(-DAT_0076d2e4,DAT_0076d2e4);
          *(float *)((int)pvVar7 + 0x24c) = (float)(dVar26 * 0.01745329238474369);
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        mobyupdate_helpers::M1246_00224bf8(lVar13,(int)pvVar7 + 0x260);
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          if ((((moby->field43_0x70 & 2U) != 0) && (iVar16 = mobyutil::MB_randInt(3), iVar16 == 0))
             && (moby->state = '\x02', moby->animationId != '\0')) {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          dVar26 = (double)mobyutil::MB_randRangeFloat(-DAT_0076d2e4,DAT_0076d2e4);
          *(float *)((int)pvVar7 + 0x24c) = (float)(dVar26 * 0.01745329238474369);
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar2 < 7) {
      if (bVar2 < 5) {
        if (((moby->field43_0x70 & 2U) == 0) ||
           (fVar34 = (moby->pos).y - *(float *)(iVar16 + 0x14),
           fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10),
           DAT_0076d2e0 <= SQRT(fVar4 * fVar4 + fVar34 * fVar34))) {
          mobyupdate_helpers::M1246_00224bf8(lVar13,iVar16 + 0x10);
        }
        else {
          moby->state = '\x05';
          if (moby->animationId != '\x02') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
          }
        }
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          moby->state = '\x06';
        }
      }
      else if (bVar2 < 6) {
        mobyupdate_helpers::M1246_00224bf8(lVar13,iVar16 + 0x10);
        if (((moby->field43_0x70 & 2U) == 0) ||
           (fVar34 = (moby->pos).y - *(float *)(iVar16 + 0x14),
           fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10),
           SQRT(fVar4 * fVar4 + fVar34 * fVar34) <= DAT_0076d2e0)) {
          if (*(int *)((int)pvVar7 + 0x214) == 2) {
            moby->state = '\x06';
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
        mobyutil::DamageSphereAtPos
                  ((double)(DAT_0076d2c8 * 0.6),0x3ff0000000000000,0x3ff0000000000000,lVar13,
                   local_170,&DAT_00225ac0,1);
      }
      else {
        fVar34 = (moby->pos).y - *(float *)((int)pvVar7 + 0x224);
        fVar4 = (moby->pos).x - *(float *)((int)pvVar7 + 0x220);
        if (1.0 <= SQRT(fVar4 * fVar4 + fVar34 * fVar34)) {
          if (*(int *)((int)pvVar7 + 0x214) == 2) {
            mobyupdate_helpers::M1246_00224bf8(lVar13,(int)pvVar7 + 0x220);
          }
          else {
            dVar26 = (double)mobyutil::MB_randRangeFloat(-DAT_0076d2e4,DAT_0076d2e4);
            *(float *)((int)pvVar7 + 0x24c) = (float)(dVar26 * 0.01745329238474369);
            moby->state = '\x04';
            if (moby->animationId != '\x01') {
              local_a0 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\0') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          }
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          bVar1 = moby->animationId != '\x01';
          if (bVar1) {
            if (bVar1) {
              mobyutil::MB_SetAnimation(lVar13,1,0,5);
            }
          }
          else if (bVar1) {
            mobyutil::MB_SetAnimation(lVar13,1,0,5);
          }
        }
      }
    }
    else if (bVar2 < 9) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar7 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar7 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar7 + 0x48);
      fVar34 = -(DAT_0076d2ec * DAT_0071f418 - *(float *)((int)pvVar7 + 0x48));
      *(float *)((int)pvVar7 + 0x48) = fVar34;
      if (fVar34 < 0.0) {
        dVar27 = 1.0;
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_190,0);
        if ((double)(moby->pos).z < dVar26) {
          if (moby->state == '\a') {
            (moby->pos).z = (float)dVar26;
            moby->state = '\x02';
          }
          else {
            moby->state = '\x01';
            (moby->pos).z = (float)(dVar26 - dVar27);
          }
        }
      }
    }
    else if (bVar2 < 10) {
      uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x120));
      if ((uVar15 & 0x40) != 0) {
        fVar8 = (moby->pos).z;
        uVar15 = (int)fVar8 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar8) - uVar15) < 0x435e0000) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        iVar16 = mobyutil::PointInsideComplexPoly
                           ((Vec4 *)&moby->pos,
                            (Vec4 *)Splines[*(int *)((int)pvVar7 + 0x230)]->points,
                            Splines[*(int *)((int)pvVar7 + 0x230)]->cnt);
        if (iVar16 != 0) {
          moby->state = '\x02';
          if (moby->animationId == '\0') {
            return;
          }
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          return;
        }
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if ((uVar15 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      FUN_005e7f98(uVar33,local_180,local_180);
      iVar16 = mobyutil::MB_LineCrossesSpline
                         (*(undefined4 *)((int)pvVar7 + 0x230),lVar13 + 0x10,local_180);
      if (iVar16 == 0) {
        mobyupdate_helpers::M1246_00224bf8(lVar13,(int)pvVar7 + 0x1d0);
      }
      else {
        dVar26 = (double)FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar7 + 0x210) + 0x10) -
                                              (moby->pos).x),
                                      (double)(*(float *)(*(int *)((int)pvVar7 + 0x210) + 0x14) -
                                              (moby->pos).y));
        mobyutil::OrganicDeltAng
                  ((float)dVar26,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar7 + 0x250));
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          if (*(int *)((int)pvVar7 + 0x244) == 0) {
            moby->state = '\x06';
          }
        }
        else {
          moby->state = '\x04';
        }
      }
    }
  }
  else if (bVar2 < 0x10) {
    if (bVar2 < 0xd) {
      if (bVar2 < 0xc) {
        uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x120));
        if ((uVar15 & 0x160) != 0) {
          mobyutil::MB_SpawnExplosionSparks2
                    (0x3fe0000000000000,0x4024000000000000,lVar13,lVar13 + 0x10,&DAT_00225ac0,
                     0xffffffffffffffff);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else if ((*(int *)((int)pvVar7 + 0x214) != 2) &&
              (iVar16 = mobyupdate_helpers::M1246_00224f8c(lVar13), pMVar19 = MobyInstance,
              iVar16 < 5)) {
        iVar16 = *(int *)((int)pvVar7 + 0x254);
        pMVar12 = MobyInstance + iVar16;
        fastfunc::FastNormalizeRMtx4(auStack_e0,&pMVar12->transform);
        fVar11 = (moby->pos).x - pMVar19[iVar16].pos.x;
        fVar34 = (moby->pos).y;
        fVar4 = pMVar19[iVar16].pos.y;
        FUN_005e825c(local_160,local_160,auStack_e0);
        uVar15 = (int)*(uint *)((int)pvVar7 + 600) >> 0x1f;
        iVar17 = ((uint)((int)fVar11 >> 0x1f) >> 1 ^ (uint)fVar11) - ((int)fVar11 >> 0x1f);
        if ((iVar17 < (int)((uVar15 >> 1 ^ *(uint *)((int)pvVar7 + 600)) - uVar15)) &&
           (-0x40466666 < iVar17)) {
          if ((int)(fVar34 - fVar4) < 1) {
            dVar26 = (double)mobyutil::MB_randRangeFloat(-2.0,-1.5);
          }
          else {
            dVar26 = (double)mobyutil::MB_randRangeFloat(1.5,2.0);
          }
          FUN_005e7d64(local_150,local_150,&pMVar12->transform);
          fVar34 = pMVar19[iVar16].pos.x;
          fVar4 = pMVar19[iVar16].pos.y;
          fVar5 = pMVar19[iVar16].pos.z;
          moby->state = '\r';
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(lVar13,1,0,5);
          }
          fVar11 = (fVar11 + fVar34) - (moby->pos).x;
          *(float *)((int)pvVar7 + 0x40) = fVar11;
          fVar34 = ((float)dVar26 + fVar4) - (moby->pos).y;
          *(float *)((int)pvVar7 + 0x44) = fVar34;
          fVar4 = (fVar5 + 1.0) - (moby->pos).z;
          *(float *)((int)pvVar7 + 0x48) = fVar4;
          *(undefined4 *)((int)pvVar7 + 0x4c) = local_144;
          moby->unk58 = (DAT_0076d2e8 * mobyutil::g_FrameTime *
                        (float)(longlong)(animationSpeed * 60.5)) /
                        SQRT(fVar4 * fVar4 + fVar11 * fVar11 + fVar34 * fVar34);
          FUN_005e84c0((double)(DAT_0076d2e8 * mobyutil::g_FrameTime),(int)pvVar7 + 0x40,
                       (int)pvVar7 + 0x40);
          dVar26 = (double)mobyutil::MB_computeLobVelocity
                                     ((double)(DAT_0076d2e8 * mobyutil::g_FrameTime),
                                      -(double)(DAT_0076d2ec * DAT_0071f418),lVar13 + 0x10,local_150
                                      ,&PTR_DAT_00770000,&DAT_00720000,0);
          *(float *)((int)pvVar7 + 0x48) = (float)dVar26;
          dVar26 = (double)FUN_005e8338((double)*(float *)((int)pvVar7 + 0x40),
                                        (double)*(float *)((int)pvVar7 + 0x44));
          (moby->rotation).z = (float)dVar26;
        }
      }
    }
    else if (bVar2 < 0xe) {
      fVar34 = (moby->pos).x + *(float *)((int)pvVar7 + 0x40);
      pvVar9 = MobyInstance[*(int *)((int)pvVar7 + 0x254)].pVar;
      (moby->pos).x = fVar34;
      fVar4 = (moby->pos).y + *(float *)((int)pvVar7 + 0x44);
      (moby->pos).y = fVar4;
      fVar11 = (moby->pos).z + *(float *)((int)pvVar7 + 0x48);
      (moby->pos).z = fVar11;
      (moby->pos).x = fVar34 + *(float *)((int)pvVar9 + 0x70);
      (moby->pos).y = fVar4 + *(float *)((int)pvVar9 + 0x74);
      (moby->pos).z = fVar11 + *(float *)((int)pvVar9 + 0x78);
      fVar34 = -(DAT_0076d2ec * DAT_0071f418 - *(float *)((int)pvVar7 + 0x48));
      *(float *)((int)pvVar7 + 0x48) = fVar34;
      if ((fVar34 < 0.0) &&
         (dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_140,0),
         (double)(moby->pos).z < dVar26)) {
        moby->unk58 = 1.0;
        moby->state = '\x0e';
      }
    }
    else if (bVar2 < 0xf) {
      mobyutil::MB_PlatformLocalToWorld
                (lVar13,MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar13 + 0x10,lVar13 + 0x40,
                 lVar13 + 0x10,lVar13 + 0x40);
      if (*(int *)((int)pvVar7 + 0x214) != 2) {
        dVar26 = (double)mobyutil::MB_randRangeFloat(-DAT_0076d2e4,DAT_0076d2e4);
        *(float *)((int)pvVar7 + 0x24c) = (float)(dVar26 * 0.01745329238474369);
        moby->state = '\x0f';
        if (moby->animationId != '\x01') {
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else {
      mobyutil::MB_PlatformLocalToWorld
                (lVar13,MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar13 + 0x10,lVar13 + 0x40,
                 lVar13 + 0x10,lVar13 + 0x40);
      mobyupdate_helpers::M1246_00224bf8(lVar13,iVar16 + 0x10);
      if ((((moby->field43_0x70 & 2U) != 0) &&
          (fVar34 = (moby->pos).y - *(float *)(iVar16 + 0x14),
          fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10),
          SQRT(fVar4 * fVar4 + fVar34 * fVar34) < DAT_0076d2e0)) &&
         (moby->state = '\x10', moby->animationId != '\x02')) {
        local_a0 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
      }
      if (*(int *)((int)pvVar7 + 0x214) == 2) {
        moby->state = '\x0e';
      }
    }
  }
  else if (bVar2 < 0x13) {
    if (bVar2 < 0x11) {
      mobyutil::MB_PlatformLocalToWorld
                (lVar13,MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar13 + 0x10,lVar13 + 0x40,
                 lVar13 + 0x10,lVar13 + 0x40);
      mobyupdate_helpers::M1246_00224bf8(lVar13,iVar16 + 0x10);
      if (((moby->field43_0x70 & 2U) == 0) ||
         (fVar34 = (moby->pos).y - *(float *)(iVar16 + 0x14),
         fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10),
         SQRT(fVar4 * fVar4 + fVar34 * fVar34) <= DAT_0076d2e0)) {
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          moby->state = '\x0e';
        }
      }
      else {
        moby->state = '\x0f';
        if (moby->animationId != '\x01') {
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
      mobyutil::DamageSphereAtPos
                ((double)(DAT_0076d2c8 * 0.6),0x3ff0000000000000,0,lVar13,local_130,&DAT_00225ac0,1)
      ;
    }
    else if (bVar2 < 0x12) {
      lVar20 = lVar13 + 0x10;
      mobyutil::MB_PlatformLocalToWorld
                (lVar13,MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar20,lVar13 + 0x40,lVar20,
                 lVar13 + 0x40);
      uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x120));
      if ((uVar15 & 0x40) != 0) {
        fVar8 = (moby->pos).z;
        uVar15 = (int)fVar8 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar8) - uVar15) < 0x435e0000) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        iVar16 = mobyutil::PointInsideComplexPoly
                           ((Vec4 *)lVar20,(Vec4 *)Splines[*(int *)((int)pvVar7 + 0x230)]->points,
                            Splines[*(int *)((int)pvVar7 + 0x230)]->cnt);
        if (iVar16 != 0) {
          moby->state = '\x0e';
          if (moby->animationId == '\0') {
            return;
          }
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          return;
        }
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if ((uVar15 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      lVar20 = lVar13 + 0x10;
      mobyutil::MB_PlatformLocalToWorld
                (lVar13,MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar20,lVar13 + 0x40,lVar20,
                 lVar13 + 0x40);
      uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x120));
      if ((uVar15 & 0x160) != 0) {
        mobyutil::MB_SpawnExplosionSparks2
                  (0x3fe0000000000000,0x4024000000000000,lVar13,lVar20,&DAT_00225ac0,
                   0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
  }
  else if (bVar2 < 0x14) {
    pMVar19 = (MobyInstance *)
              (Splines[*(int *)((int)pvVar7 + 0x234)]->points + *(int *)((int)pvVar7 + 0x25c) + -1);
    dVar26 = (double)(pMVar19->pos).z;
    dVar27 = (double)(pMVar19->pos).x;
    dVar28 = (double)(pMVar19->pos).y;
    if ((-1 < *(int *)((int)pvVar7 + 0x254)) &&
       (dVar29 = (double)(MobyInstance[*(int *)((int)pvVar7 + 0x254)].pos.z - 1.0),
       pMVar19 = MobyInstance, dVar29 < dVar26)) {
      dVar26 = dVar29;
    }
    dVar29 = (double)FUN_005e8338((double)(float)(dVar27 - (double)(moby->pos).x),
                                  (double)(float)(dVar28 - (double)(moby->pos).y));
    mobyutil::OrganicDeltAng
              ((float)dVar29,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,(int)pMVar19,
               (float *)((int)pvVar7 + 0x250));
    mathfunc::cosf((moby->rotation).z);
    FUN_005e8128((double)(moby->rotation).z);
    dVar31 = 4.0;
    mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,0,lVar13,local_120);
    dVar30 = (double)(moby->pos).y;
    dVar29 = (double)(moby->pos).x;
    fVar34 = (float)(dVar26 - (double)(moby->pos).z);
    if (SQRT(fVar34 * fVar34 +
             (float)(dVar27 - dVar29) * (float)(dVar27 - dVar29) +
             (float)(dVar28 - dVar30) * (float)(dVar28 - dVar30)) < 1.0) {
      iVar16 = *(int *)((int)pvVar7 + 0x25c) + 1;
      dVar29 = (double)(moby->pos).x;
      dVar30 = (double)(moby->pos).y;
      *(int *)((int)pvVar7 + 0x25c) =
           iVar16 - (iVar16 / Splines[*(int *)((int)pvVar7 + 0x234)]->cnt) *
                    Splines[*(int *)((int)pvVar7 + 0x234)]->cnt;
    }
    if (moby->animationBlend == 0.0) {
      bVar2 = moby->animationId;
      dVar26 = (double)SQRT((float)(dVar29 - (double)g_heroPosition.x) *
                            (float)(dVar29 - (double)g_heroPosition.x) +
                            (float)(dVar30 - (double)g_heroPosition.y) *
                            (float)(dVar30 - (double)g_heroPosition.y));
      if (bVar2 < 6) {
        if (3 < bVar2) {
          if (bVar2 < 5) {
            if ((dVar26 < 6.0) && (bVar2 != 5)) {
              local_a0 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 10.5));
            }
          }
          else if (bVar2 != 6) {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar2 < 7) {
        if (dVar26 <= 8.0) {
          if (dVar26 < dVar31) {
            mobyutil::DamageSphereAtPos
                      ((double)(DAT_0076d2c8 * 0.55),0x3ff0000000000000,0x3ff0000000000000,lVar13,
                       local_110,0,1);
          }
        }
        else if (bVar2 != 7) {
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,7,0,(int)(animationSpeed * 10.5));
        }
      }
      else if ((bVar2 < 8) && (bVar2 != 4)) {
        local_a0 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (((bVar2 < 0x15) && (*(short *)((int)pvVar7 + 200) != 0)) &&
          (iVar16 = FUN_0048c188(lVar13,(int)pvVar7 + 0x120), iVar16 != 0)) {
    moby->state = moby->setByGroup;
    *(undefined2 *)((int)pvVar7 + 200) = 0;
  }
  uVar33 = 0;
  if ((*(int *)((int)pvVar7 + 0x17c) != 0) &&
     (((uVar3 = moby->state, uVar3 == '\v' || uVar3 == '\t' || (uVar3 == '\x11')) ||
      (uVar3 == '\x12')))) {
    iVar16 = 0;
    dVar32 = 0.20000000298023224;
    dVar31 = 0.800000011920929;
    dVar30 = 1.2999999523162842;
    dVar29 = -0.20000000298023224;
    dVar28 = 0.4000000059604645;
    dVar27 = 2100.0;
    dVar26 = 14700.0;
    uVar25 = 0x406bd00000000000;
    do {
      dVar21 = (double)mobyutil::MB_randRangeSigned(uVar33,dVar32);
      local_100.x = (float)((double)(moby->pos).x + dVar21);
      dVar21 = (double)mobyutil::MB_randRangeSigned(uVar33,dVar32);
      local_100.y = (float)((double)(moby->pos).y + dVar21);
      dVar21 = (double)mobyutil::MB_randRangeSigned(uVar33,dVar32);
      local_100.z = (float)((double)(float)((double)(moby->pos).z + dVar21) + dVar31);
      dVar21 = (double)mobyutil::MB_randRot();
      dVar22 = (double)mobyutil::MB_randRangeFloat((float)dVar32,(float)dVar30);
      dVar24 = (double)(float)(dVar22 * (double)mobyutil::g_FrameTime);
      dVar22 = (double)mathfunc::cosf((float)dVar21);
      local_f0 = (float)(dVar22 * dVar24);
      dVar21 = (double)FUN_005e8128(dVar21);
      local_ec = (float)(dVar21 * dVar24);
      local_e8 = 0.0;
      dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar28);
      local_e8 = (float)(dVar21 * (double)mobyutil::g_FrameTime);
      uVar23 = mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar26);
      partupd::SpawnPart_34(uVar23,uVar25,&local_100,&local_f0);
      iVar16 = iVar16 + 1;
    } while (iVar16 < 3);
  }
  return;
}



//==== 00227994  ns=mobyupdate_helpers  size=0x34
// sig: undefined MB_isSpecificState(MobyInstance * param_1)
// callers(3): 001b5270 mobyupdate_helpers::M1075_001b5270; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 001dd040 mobyupdate_helpers::M1140_CloseToPuffoid
// callees(0): 

undefined8 mobyupdate_helpers::MB_isSpecificState(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1->state;
  if (((uVar1 == '\v' || uVar1 == '\x14') || (uVar1 == '\x12')) || (uVar1 == '\f')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



//==== 002279c8  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M1248_002279c8(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

undefined8 mobyupdate_helpers::M1248_002279c8(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar2 = M849_MB_Sucking(param_1);
  if ((int)uVar2 == 0) {
    if (param_1->state == '\x14') {
      param_1->state = param_1->setByGroup;
    }
  }
  else {
    uVar1 = param_1->state;
    if ((((uVar1 == '\x04' || uVar1 == '\x02') || (uVar1 == '\x05')) || (uVar1 == '\x06')) ||
       (((uVar1 == '\x0e' || (uVar1 == '\x0f')) || ((uVar1 == '\x10' || (uVar1 == '\x14')))))) {
      if (uVar1 != '\x14') {
        param_1->setByGroup = uVar1;
        param_1->state = '\x14';
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== 00227a78  ns=mobyupdate_helpers  size=0x68
// sig: undefined M1248_00227a78(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M1248_00227a78(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x14') {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0xbc);
    }
  }
  else if (*(char *)(param_1 + 0x20) != '\x14') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x14;
  }
  return;
}



//==== 00227ae0  ns=mobyupdate_helpers  size=0x68
// sig: undefined M1248_00227ae0(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M1248_00227ae0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x14') {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0xbc);
    }
  }
  else if (*(char *)(param_1 + 0x20) != '\x14') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x20) = 0x14;
  }
  return;
}



//==== 00227b48  ns=mobyupdate_helpers  size=0x24
// sig: undefined M1248_00227b48(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M1248_00227b48(void)

{
  M849_0048afe8();
  return;
}



//==== 00227b6c  ns=mobyupdate_helpers  size=0x40
// sig: undefined M1248_00227b6c(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M1248_00227b6c(int param_1)

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



//==== 00227bac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1248_00227bac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1248_00227bac(void)

{
  DAT_0076d34c = 0x10000;
  return;
}



//==== 00227c00  ns=mobyupdate_unsorted  size=0x7a0
// sig: undefined UpdateMoby_1248(MobyInstance * moby)
// callers(0): 
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 0015d12c sound::PlayMobySound

/* Moby 1248 */

undefined4 * mobyupdate_unsorted::UpdateMoby_1248(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  MobyInstance *pMVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  bVar2 = moby->state;
  puVar13 = (undefined4 *)(uint)bVar2;
  piVar6 = (int *)moby->pVar;
  dVar15 = (double)(moby->pos).x;
  if (bVar2 == 6) {
    fVar1 = (moby->transform).v0.y;
    fVar3 = (moby->transform).v0.x;
    fVar4 = (moby->transform).v0.z;
    dVar16 = 0.0;
    iVar7 = *piVar6;
    fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
    fVar9 = 0.5 / fVar5;
    dVar18 = dVar16;
    if (0.0 - fVar5 < 0.0) {
      dVar18 = (double)(fVar3 * fVar9);
    }
    dVar17 = dVar16;
    if (0.0 - fVar5 < 0.0) {
      dVar17 = (double)(fVar1 * fVar9);
    }
    if (0.0 - fVar5 < 0.0) {
      dVar16 = (double)(fVar4 * fVar9);
    }
    if (fVar5 - 0.0 < 0.0) {
      dVar18 = (double)(fVar3 * fVar9);
    }
    if (fVar5 - 0.0 < 0.0) {
      dVar17 = (double)(fVar1 * fVar9);
    }
    if (fVar5 - 0.0 < 0.0) {
      dVar16 = (double)(fVar4 * fVar9);
    }
    *(float *)(iVar7 + 0x10) = (float)(dVar15 + dVar18);
    *(float *)(iVar7 + 0x14) = (float)((double)(moby->pos).y + dVar17);
    *(float *)(iVar7 + 0x18) = (float)((double)(moby->pos).z + dVar16);
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(*piVar6 + 0x18) = (moby->pos).z + DAT_0076d370;
    *(float *)(*piVar6 + 0x40) = DAT_00f0d2f4 * -0.017453292;
    dVar15 = 0.01745329238474369;
    *(float *)(*piVar6 + 0x44) = DAT_0076d374 * 0.017453292;
    mobyfunc::UpdateMobyTransform((MobyInstance *)*piVar6);
    iVar7 = piVar6[1];
    *(float *)(iVar7 + 0x10) = (float)((double)(moby->pos).x + dVar18);
    *(float *)(iVar7 + 0x14) = (float)((double)(moby->pos).y + dVar17);
    *(float *)(iVar7 + 0x18) = (float)((double)(moby->pos).z + dVar16);
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(piVar6[1] + 0x18) = (moby->pos).z + DAT_0076d370;
    *(float *)(piVar6[1] + 0x40) = (float)((double)DAT_00f0d2f4 * dVar15);
    *(float *)(piVar6[1] + 0x44) = (float)((double)DAT_0076d374 * dVar15);
    puVar13 = (undefined4 *)mobyfunc::UpdateMobyTransform((MobyInstance *)piVar6[1]);
  }
  else if (bVar2 == 4) {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 12.0,DAT_0071f418 * 24.0,mobyutil::g_FrameTime * 12.0,
               (float *)(piVar6 + 2),0x720000,(float *)(piVar6 + 3));
    *(float *)(*piVar6 + 0x18) = (float)piVar6[2] * 0.25 + (moby->pos).z;
    *(float *)(piVar6[1] + 0x18) = (float)piVar6[2] * 0.25 + (moby->pos).z;
    fVar1 = (float)piVar6[2];
    *(float *)(*piVar6 + 0x40) = -(fVar1 * 1.5707964);
    *(float *)(piVar6[1] + 0x40) = fVar1 * 1.5707964;
    mobyfunc::UpdateMobyTransform((MobyInstance *)*piVar6);
    mobyfunc::UpdateMobyTransform((MobyInstance *)piVar6[1]);
    uVar8 = piVar6[2] >> 0x1f;
    puVar13 = (undefined4 *)((uVar8 >> 1 ^ piVar6[2]) - uVar8);
    if (0x3f7fffff < (int)puVar13) {
      puVar13 = (undefined4 *)0x0;
      piVar6[2] = 0;
      moby->state = '\x05';
    }
  }
  else if (bVar2 == 3) {
    dVar15 = 1.0;
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 10.0,DAT_0071f418 * 20.0,mobyutil::g_FrameTime * 10.0,
               (float *)(piVar6 + 2),0x720000,(float *)(piVar6 + 3));
    fVar1 = DAT_0076d374 * 0.017453292 * (float)(dVar15 - (double)(float)piVar6[2]);
    *(float *)(*piVar6 + 0x44) = fVar1;
    *(float *)(piVar6[1] + 0x44) = fVar1;
    mobyfunc::UpdateMobyTransform((MobyInstance *)*piVar6);
    mobyfunc::UpdateMobyTransform((MobyInstance *)piVar6[1]);
    uVar8 = piVar6[2] >> 0x1f;
    puVar13 = (undefined4 *)((uVar8 >> 1 ^ piVar6[2]) - uVar8);
    if (0x3f7fffff < (int)puVar13) {
      puVar13 = (undefined4 *)0x0;
      piVar6[2] = 0;
      moby->state = '\x04';
    }
  }
  else if (bVar2 == 2) {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 8.0,DAT_0071f418 * 16.0,mobyutil::g_FrameTime * 8.0,
               (float *)(piVar6 + 2),0x720000,(float *)(piVar6 + 3));
    fVar1 = (moby->transform).v0.y;
    fVar3 = (moby->transform).v0.x;
    fVar4 = (moby->transform).v0.z;
    fVar5 = 0.0;
    iVar7 = *piVar6;
    fVar12 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
    fVar9 = 0.5 / fVar12;
    fVar11 = fVar5;
    if (0.0 - fVar12 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    fVar10 = fVar5;
    if (0.0 - fVar12 < 0.0) {
      fVar10 = fVar1 * fVar9;
    }
    if (0.0 - fVar12 < 0.0) {
      fVar5 = fVar4 * fVar9;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar10 = fVar1 * fVar9;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar5 = fVar4 * fVar9;
    }
    *(float *)(iVar7 + 0x10) = (moby->pos).x + fVar11;
    *(float *)(iVar7 + 0x14) = (moby->pos).y + fVar10;
    *(float *)(iVar7 + 0x18) = (moby->pos).z + fVar5;
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(*piVar6 + 0x18) = ((float)piVar6[2] * 4.0 + (moby->pos).z) - 4.0;
    iVar7 = piVar6[1];
    *(float *)(iVar7 + 0x10) = (moby->pos).x + fVar11;
    *(float *)(iVar7 + 0x14) = (moby->pos).y + fVar10;
    *(float *)(iVar7 + 0x18) = (moby->pos).z + fVar5;
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(piVar6[1] + 0x18) = ((float)piVar6[2] * 4.0 + (moby->pos).z) - 4.0;
    mobyfunc::UpdateMobyTransform((MobyInstance *)*piVar6);
    mobyfunc::UpdateMobyTransform((MobyInstance *)piVar6[1]);
    uVar8 = piVar6[2] >> 0x1f;
    puVar13 = (undefined4 *)((uVar8 >> 1 ^ piVar6[2]) - uVar8);
    if (0x3f7fffff < (int)puVar13) {
      puVar13 = (undefined4 *)0x0;
      piVar6[2] = 0;
      moby->state = '\x03';
    }
  }
  else if (bVar2 == 1) {
    puVar13 = &hero::g_heroMtx;
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar1 = (float)(dVar15 - (double)g_heroPosition.x);
    if (SQRT(fVar1 * fVar1 + fVar3 * fVar3) < 12.0) {
      puVar13 = (undefined4 *)mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar6[4]);
      if (puVar13 != (undefined4 *)0x0) {
        piVar6[2] = 0;
        moby->state = '\x02';
        puVar13 = (undefined4 *)sound::PlayMobySound(0,4,(MobyInstance *)*piVar6);
      }
    }
  }
  else if (bVar2 == 0) {
    moby->scale = moby->scale * 2.0;
    pMVar14 = mobyfunc::CreateMoby(0x4df);
    *piVar6 = (int)pMVar14;
    pMVar14->drawDistance = 0x40;
    *(undefined1 *)(*piVar6 + 0x31) = 1;
    *(undefined8 *)(*piVar6 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
    *(MobyModeBit *)(*piVar6 + 0x34) = moby->modeBits | HAS_SPECIAL_VARS;
    iVar7 = *piVar6;
    *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    dVar18 = 4.0;
    *(float *)(*piVar6 + 0x18) = *(float *)(*piVar6 + 0x18) - 4.0;
    iVar7 = *piVar6;
    *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
    *(float *)(*piVar6 + 0x40) = DAT_00f0d2f4 * -0.017453292;
    dVar15 = 0.01745329238474369;
    *(float *)(*piVar6 + 0x44) = DAT_0076d374 * 0.017453292;
    iVar7 = *(int *)(*piVar6 + 0x78);
    *(int *)(iVar7 + 8) = iVar7 + 0x20;
    *(uint *)(iVar7 + 0x5c) = *(uint *)(iVar7 + 0x5c) | 1;
    pMVar14 = mobyfunc::CreateMoby(0x4df);
    piVar6[1] = (int)pMVar14;
    pMVar14->drawDistance = 0x40;
    *(undefined1 *)(piVar6[1] + 0x31) = 1;
    *(undefined8 *)(piVar6[1] + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
    *(MobyModeBit *)(piVar6[1] + 0x34) = moby->modeBits | (MIRROR|HAS_SPECIAL_VARS);
    iVar7 = piVar6[1];
    *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
    *(float *)(piVar6[1] + 0x18) = (float)((double)*(float *)(piVar6[1] + 0x18) - dVar18);
    iVar7 = piVar6[1];
    *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
    *(float *)(piVar6[1] + 0x40) = (float)((double)DAT_00f0d2f4 * dVar15);
    *(float *)(piVar6[1] + 0x44) = (float)((double)DAT_0076d374 * dVar15);
    puVar13 = *(undefined4 **)(piVar6[1] + 0x78);
    puVar13[2] = puVar13 + 8;
    puVar13[0x17] = puVar13[0x17] | 1;
    moby->state = '\x01';
  }
  return puVar13;
}



//==== 002283a0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1249_002283a0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1249_002283a0(void)

{
  DAT_0076d3c4 = 0x10000;
  return;
}



//==== 002283b8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1249(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1249 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1249(MobyInstance *moby)

{
  return moby;
}



//==== 002283e8  ns=mobyupdate_unsorted  size=0x1f4
// sig: undefined UpdateMoby_1250(MobyInstance * moby)
// callers(0): 
// callees(2): 00112900 mobyutil::MB_GetOrientation; 00502578 fastfunc::FastWrapRot

/* Moby 1250 */

void mobyupdate_unsorted::UpdateMoby_1250(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  
  pvVar2 = moby->pVar;
  if (pvVar2 != (void *)0x0) {
    if (moby->state == '\0') {
      *(undefined4 *)((int)pvVar2 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x48) = 0;
      *(undefined4 *)((int)pvVar2 + 0x44) = 0;
      *(undefined4 *)((int)pvVar2 + 0x40) = 0;
      *(uint *)((int)pvVar2 + 0x9c) = *(uint *)((int)pvVar2 + 0x9c) | 4;
      moby->state = '\x03';
    }
    else if (moby->state == '\x03') {
      moby->unk58 = 1.388889;
      dVar15 = 1.5707963705062866;
      dVar6 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
      dVar14 = 3.141592502593994;
      fVar1 = (float)(dVar6 + 1.570796251296997);
      dVar13 = -3.141592502593994;
      dVar12 = -0.16666656732559204;
      dVar11 = 0.008333025500178337;
      dVar10 = -0.0001980741071747616;
      dVar9 = 2.601886990305502e-06;
      dVar6 = 2.5;
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar5 = fVar4 * fVar4;
      fVar1 = fVar5 * fVar5 * fVar4;
      fVar3 = fVar5 * fVar1;
      *(float *)((int)pvVar2 + 0x40) =
           mobyutil::g_FrameTime * 2.5 *
           (fVar5 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4);
      dVar7 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar15);
      dVar15 = (double)(float)(dVar14 - dVar7);
      if (dVar7 - (double)(float)(dVar14 - dVar7) < 0.0) {
        dVar15 = dVar7;
      }
      dVar8 = (double)mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar2 + 0x48) = 0;
      dVar14 = (double)(float)(dVar13 - dVar7);
      if ((double)(float)(dVar13 - dVar7) - dVar15 < 0.0) {
        dVar14 = dVar15;
      }
      dVar13 = (double)(float)(dVar14 * dVar14);
      dVar7 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
      dVar15 = (double)(float)(dVar13 * dVar7);
      *(float *)((int)pvVar2 + 0x44) =
           (float)(dVar8 * dVar6) *
           (float)((double)(float)(dVar13 * dVar15) * dVar9 +
                  (double)(float)(dVar15 * dVar10 +
                                 (double)(float)(dVar7 * dVar11 +
                                                (double)(float)((double)(float)(dVar13 * dVar14) *
                                                                dVar12 + dVar14))));
    }
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar2 + 0x60),(Vec4 *)((int)pvVar2 + 0x40),
               (longlong)(int)moby + 0x40,(longlong)(int)moby + 0x40);
  }
  return;
}



//==== 002285dc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1251_002285dc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1251_002285dc(void)

{
  DAT_0076d434 = 0x10000;
  return;
}



//==== 002285f0  ns=mobyupdate_helpers  size=0x6c
// sig: undefined M1251_002285f0(void)
// callers(0): 
// callees(2): 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement

ulonglong mobyupdate_helpers::M1251_002285f0(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x20) == '\x04') {
    draw::LetterBoxOn = 0;
    boot::SceneScreenFade = 0.0;
    camera::camera5::Camera_DeactivateMobyDrivenCam(3);
  }
  uVar1 = (ulonglong)hero::g_heroStateType;
  if (hero::g_heroStateType == 0x13) {
    iVar2 = hero::TransitionMovement(0,1);
    uVar1 = (ulonglong)iVar2;
  }
  return uVar1;
}



//==== 0022865c  ns=mobyupdate_helpers  size=0x70
// sig: undefined M1251_0022865c(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1251_0022865c(void)

{
  undefined8 uVar1;
  
  if ((DAT_0096bd90 == '\0') &&
     ((MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 2U) != 0)) {
    uVar1 = 1;
  }
  else if ((DAT_0096bd90 == '\0') ||
          ((MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 1U) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 002286e8  ns=mobyupdate_helpers  size=0x1b4
// sig: undefined M1251_002286e8(void)
// callers(1): 002288c8 mobyupdate_unsorted::UpdateMoby_1251
// callees(5): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0012ab08 partupd::SpawnPart_35; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M1251_002286e8(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  Vec4 VStack_50;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  longlong local_30;
  
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = fastfunc::FastDecTimerS32(iVar3 + 4);
  if (iVar4 != 0) {
    mobyfunc::GetBonePosition(param_1,0,&VStack_50);
    dVar6 = (double)mobyutil::MB_randRangeFloat(mobyutil::g_FrameTime,mobyutil::g_FrameTime * 3.0);
    local_3c = *(float *)(param_1 + 0xd4);
    fVar2 = *(float *)(param_1 + 0xd0);
    local_38 = *(float *)(param_1 + 0xd8);
    local_40 = 0.0;
    dVar7 = (double)SQRT(local_38 * local_38 + fVar2 * fVar2 + local_3c * local_3c);
    if (dVar7 == 0.0) {
      local_34 = *(undefined4 *)(param_1 + 0xdc);
      local_3c = local_40;
      local_38 = local_40;
    }
    else {
      fVar1 = (float)(-dVar6 / dVar7);
      local_34 = *(undefined4 *)(param_1 + 0xdc);
      local_40 = fVar2 * fVar1;
      local_38 = local_38 * fVar1;
      local_3c = local_3c * fVar1;
    }
    local_40 = DAT_00969de0 * 0.8 + local_40;
    local_3c = DAT_00969de4 * 0.8 + local_3c;
    dVar6 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -0.5,mobyutil::g_FrameTime * 2.0);
    local_38 = (float)((double)DAT_00969de8 + dVar6) + local_38;
    uVar5 = mobyutil::MB_randRange(0x5a,0x78);
    partupd::SpawnPart_35(&VStack_50,&local_40,2,uVar5);
    local_30 = (longlong)(int)(animationSpeed * 15.5);
    uVar5 = mobyutil::MB_randRange((int)(animationSpeed * 5.5),(int)(animationSpeed * 15.5));
    *(undefined4 *)(iVar3 + 4) = uVar5;
  }
  return;
}



//==== 002288c8  ns=mobyupdate_unsorted  size=0xb5c
// sig: undefined UpdateMoby_1251(MobyInstance * moby)
// callers(0): 
// callees(15): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0011dfe0 pad::PadRingBitsOn; 0015d12c sound::PlayMobySound; 002286e8 mobyupdate_helpers::M1251_002286e8; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Removing unreachable block (ram,0x00228c34) */
/* Moby 1251 */

void mobyupdate_unsorted::UpdateMoby_1251(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  MobyInstance *pMVar7;
  int iVar8;
  undefined4 uVar9;
  u8 uVar10;
  double dVar11;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  longlong local_40;
  
  puVar3 = (undefined4 *)moby->pVar;
  if (DAT_0096ad94 == 3) {
    if (moby->state == '\x04') {
      draw::LetterBoxOn = 0;
      boot::SceneScreenFade = 0.0;
      camera::camera5::Camera_DeactivateMobyDrivenCam(3);
    }
    if (hero::g_heroStateType == 0x13) {
      hero::TransitionMovement(0,1);
    }
  }
  else {
    if (((DAT_0096bd90 != '\0') && (g_gameMode == GAME_MODE_NORMAL)) &&
       (g_heroState != HYDRODISPLACER_WAITING && g_heroState != HYDRODISPLACER_CONNECTING)) {
      mobyupdate_helpers::M1251_002286e8(moby);
    }
    pMVar7 = MobyInstance;
    if (DAT_0096bd90 != '\0') {
      DAT_0096b670 = 1;
      DAT_0096b67c = 0x40133333;
      DAT_0096b674 = DAT_0071f40c * 0.02;
      DAT_0096b678 = DAT_0071f40c * 0.3;
      if (g_heroState != HYDRODISPLACER_WAITING && g_heroState != HYDRODISPLACER_CONNECTING) {
        DAT_0096b720 = 2;
        DAT_0096b7d0 = 3;
        DAT_0096b714 = (1024.0 / moby->scale) * -0.2;
        DAT_0096b724 = DAT_0096b674;
        DAT_0096b728 = DAT_0096b678;
        DAT_0096b7c4 = DAT_0096b714;
        DAT_0096b7d4 = DAT_0096b674;
        DAT_0096b7d8 = DAT_0096b678;
      }
    }
    uVar10 = moby->state;
    if (uVar10 == '\x05') {
      uVar10 = '\x05';
      if ((g_standingOnMoby != 0) && (*(short *)(g_standingOnMoby + 0xa6) == 0x155)) {
        iVar8 = fastfunc::FastDecTimerS32(puVar3);
        if (iVar8 == 0) {
          return;
        }
        uVar10 = moby->state;
      }
      if (uVar10 == '\x04') {
        draw::LetterBoxOn = 0;
        boot::SceneScreenFade = 0.0;
        camera::camera5::Camera_DeactivateMobyDrivenCam(3);
      }
      if (hero::g_heroStateType == 0x13) {
        hero::TransitionMovement(0,1);
      }
      moby->state = '\x02';
    }
    else if (uVar10 == '\x04') {
      if ((g_standingOnMoby == 0) || (*(short *)(g_standingOnMoby + 0xa6) != 0x155)) {
        draw::LetterBoxOn = 0;
        boot::SceneScreenFade = 0.0;
        camera::camera5::Camera_DeactivateMobyDrivenCam(3);
        if (hero::g_heroStateType == 0x13) {
          hero::TransitionMovement(0,1);
        }
      }
      else {
        bVar1 = moby->setByGroup;
        if (bVar1 == 0) {
          mobyutil::Delt(1.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&boot::SceneScreenFade);
          pMVar7 = MobyInstance;
          if (0x3f7fffff <
              (int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^ (uint)boot::SceneScreenFade)
                   - ((int)boot::SceneScreenFade >> 0x1f))) {
            iVar8 = **(int **)(g_standingOnMoby + 0x78);
            moby->setByGroup = '\x01';
            camera::camera5::Camera_SetMobyDrivenTargetPos(&Cuboids[puVar3[2]].pos.x);
            camera::camera5::Camera_SetMobyDrivenTargetRot(&Cuboids[puVar3[2]].rot.x);
            draw::LetterBoxOn = 1;
            if (DAT_0096bd90 == '\0') {
              pMVar7[iVar8].setByGroup = '\b';
              DAT_0096bd90 = '\x01';
            }
            else {
              pMVar7[iVar8].setByGroup = '\x04';
              DAT_0096bd90 = '\0';
            }
          }
        }
        else if (bVar1 < 2) {
          uVar5 = puVar3[4];
          if ((uVar5 == 0) && (0 < (int)boot::SceneScreenFade)) {
            mobyutil::Delt(0.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&boot::SceneScreenFade
                          );
          }
          else if ((int)(((uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5) - ((int)uVar5 >> 0x1f)) <
                   0x3f800000) {
            mobyutil::OrganicDelt
                      (1.0,DAT_0071f418 * 0.666,DAT_0071f418 * 0.666,mobyutil::g_FrameTime * 0.5,
                       (float *)(puVar3 + 4),0x22889c,(float *)(puVar3 + 5));
            iVar8 = puVar3[2];
            iVar6 = puVar3[3];
            local_60 = Cuboids[iVar8].pos.x;
            fVar2 = (float)puVar3[4];
            local_54 = Cuboids[iVar6].pos.w;
            local_60 = fVar2 * (Cuboids[iVar6].pos.x - local_60) + local_60;
            local_5c = fVar2 * (Cuboids[iVar6].pos.y - Cuboids[iVar8].pos.y) + Cuboids[iVar8].pos.y;
            local_58 = fVar2 * (Cuboids[iVar6].pos.z - Cuboids[iVar8].pos.z) + Cuboids[iVar8].pos.z;
            local_44 = 0;
            local_48 = 0.0;
            local_4c = 0.0;
            local_50 = 0.0;
            dVar11 = (double)fastfunc::FastDiffRots
                                       ((double)Cuboids[iVar6].rot.y,(double)Cuboids[iVar8].rot.y);
            local_4c = (float)(dVar11 * (double)(float)puVar3[4]);
            dVar11 = (double)fastfunc::FastWrapRot(Cuboids[puVar3[2]].rot.y,local_4c);
            local_4c = (float)dVar11;
            dVar11 = (double)fastfunc::FastDiffRots
                                       ((double)Cuboids[puVar3[3]].rot.z,
                                        (double)Cuboids[puVar3[2]].rot.z);
            local_48 = (float)(dVar11 * (double)(float)puVar3[4]);
            dVar11 = (double)fastfunc::FastWrapRot(Cuboids[puVar3[2]].rot.z,local_48);
            local_48 = (float)dVar11;
            camera::camera5::Camera_SetMobyDrivenTargetPos(&local_60);
            camera::camera5::Camera_SetMobyDrivenTargetRot(&local_50);
          }
          else if ((int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^
                         (uint)boot::SceneScreenFade) - ((int)boot::SceneScreenFade >> 0x1f)) <
                   0x3f800000) {
            mobyutil::Delt(1.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&boot::SceneScreenFade
                          );
          }
          else {
            moby->setByGroup = '\x02';
            draw::LetterBoxOn = 0;
            camera::camera5::Camera_DeactivateMobyDrivenCam(3);
          }
        }
        else if (bVar1 < 3) {
          if ((int)boot::SceneScreenFade < 1) {
            moby->state = '\x02';
            hero::TransitionMovement(0x3a,0);
            if (DAT_0096bd90 == '\0') {
              hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x85,0);
            }
            else {
              hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x48,0);
            }
          }
          else {
            mobyutil::Delt(0.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&boot::SceneScreenFade
                          );
          }
        }
      }
    }
    else if (uVar10 == '\x03') {
      if ((g_standingOnMoby == 0) || (*(short *)(g_standingOnMoby + 0xa6) != 0x155)) {
        if (hero::g_heroStateType == 0x13) {
          hero::TransitionMovement(0,1);
        }
      }
      else if ((DAT_0096a778 & 2) != 0) {
        piVar4 = *(int **)(g_standingOnMoby + 0x78);
        iVar8 = *piVar4;
        hero::TransitionMovement(0x39,0);
        if (DAT_0096bd90 == '\0') {
          hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x47,0);
        }
        else {
          hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x84,0);
        }
        if (DAT_0096bd90 == '\0') {
          sound::PlayMobySound(0x14,0,g_heroMobyPtr);
        }
        else {
          sound::PlayMobySound(0x15,0,g_heroMobyPtr);
        }
        if ((piVar4[1] == -1) || (piVar4[2] == -1)) {
          moby->state = '\x05';
          uVar9 = fastfunc::FastDoubleToInt((double)(DAT_0076d458 * animationSpeed));
          *puVar3 = uVar9;
          if (DAT_0096bd90 == '\0') {
            pMVar7[iVar8].setByGroup = '\b';
            DAT_0096bd90 = '\x01';
          }
          else {
            pMVar7[iVar8].setByGroup = '\x04';
            DAT_0096bd90 = '\0';
          }
        }
        else {
          moby->state = '\x04';
          moby->setByGroup = '\0';
          puVar3[4] = 0;
          camera::SetCameraPosition(0x951500,0x951510,1,0,0);
          if (DAT_0096bd90 == '\0') {
            puVar3[3] = piVar4[1];
            puVar3[2] = piVar4[2];
          }
          else {
            puVar3[2] = piVar4[1];
            puVar3[3] = piVar4[2];
          }
        }
      }
    }
    else if (uVar10 == '\x02') {
      local_40 = (longlong)(int)(animationSpeed * 8.5);
      iVar8 = pad::PadRingBitsOn(DAT_0096ad80,(int)(animationSpeed * 8.5),(int *)0x0);
      if ((((iVar8 != 0) && ((g_downButtons & DAT_0096ad80) != 0)) && (g_standingOnMoby != 0)) &&
         ((g_framesNotGrounded == 0 && (*(short *)(g_standingOnMoby + 0xa6) == 0x155)))) {
        if ((((DAT_0096bd90 == '\0') &&
             ((MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 2U) != 0)) ||
            ((DAT_0096bd90 != '\0' &&
             ((MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 1U) != 0)))) &&
           ((hero::g_heroStateType == 0 || (hero::g_heroStateType == 1)))) {
          moby->state = '\x03';
          hero::TransitionMovement(0x38,0);
          if (DAT_0096bd90 == '\0') {
            hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x46,0);
          }
          else {
            hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x83,0);
          }
        }
      }
    }
    else if (uVar10 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x02';
      }
    }
    else if (uVar10 == '\0') {
      sound::PlayMobySound(0,0,moby);
      moby->state = '\x01';
    }
  }
  return;
}



//==== 00229424  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1257_00229424(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1257_00229424(void)

{
  DAT_0076d4ac = 0x10000;
  return;
}



//==== 00229438  ns=Global  size=0xc0
// sig: undefined FUN_00229438(void)
// callers(1): 0026a168 mobyupdate_unsorted::UpdateMoby_1394
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_00229438(undefined8 param_1,f32 *param_2)

{
  f32 fVar1;
  undefined4 *puVar2;
  MobyClass *pMVar3;
  u16 *puVar4;
  MobyInstance *pMVar5;
  
  pMVar5 = mobyfunc::CreateMoby(POISON_VESSEL_04E9);
  if (pMVar5 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar5->pVar;
    pMVar5->updateDistance = -1;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    pMVar5->setByGroup = '\0';
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[4] = 0;
    fVar1 = *param_2;
    pMVar5->drawDistance = 0x7f;
    (pMVar5->pos).x = fVar1;
    pMVar3 = pMVar5->pClass;
    (pMVar5->pos).y = param_2[1];
    (pMVar5->pos).z = param_2[2];
    puVar4 = pMVar3->collision;
    (pMVar5->pos).w = param_2[3];
    pMVar5->collision = puVar4;
    mobyfunc::UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}



//==== 00229518  ns=mobyupdate_unsorted  size=0x53c
// sig: undefined UpdateMoby_1257(void * this, MobyInstance * moby)
// callers(0): 
// callees(14): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000ffb70 mobyutil::GetGroundZ; 0010675c mobyutil::MB_damage; 00107860 mobyutil::MB_DamageMobyList; 0010e030 mobyutil::MB_genericExplosion; 001122ac mobyutil::MB_GetPlatformParent; 001122e0 mobyutil::MB_PlatformLocalToWorld; 0015d204 sound::sound_MobyPlay_oClass; 00500608 fastfunc::FastVecNormalize; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf

/* Moby 1257 */

void __thiscall mobyupdate_unsorted::UpdateMoby_1257(void *this,MobyInstance *moby)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  MobyInstance *pMVar4;
  longlong lVar5;
  int iVar6;
  MobyInstance *pMVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 auStack_60 [16];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar5 = (longlong)(int)this;
  lVar8 = lVar5 + 0x10;
  uVar9 = 0;
  uVar10 = 0x3fe0000000000000;
  pfVar2 = *(float **)((int)this + 0x78);
  iVar6 = collproc::CollSphere(0x3fe0000000000000,lVar8,moby,1,lVar5);
  pMVar4 = CollOutput.pMoby;
  pMVar7 = (MobyInstance *)0x0;
  if ((iVar6 != 0) &&
     ((pMVar7 = pMVar4, CollOutput.pMoby == (MobyInstance *)0x0 ||
      (iVar6 = mobyutil::MB_GetPlatformParent(CollOutput.pMoby), iVar6 == 0)))) {
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  iVar6 = mobyutil::MB_damage(lVar5,&DAT_00830000,0);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar6 + 0x20) + 0xa6) != *(short *)((int)this + 0xa6))) {
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  *(undefined1 *)((int)this + 0xa4) = 0xff;
  if (*(byte *)((int)this + 0x20) == 0) {
    fVar3 = DAT_0076d4d0 * DAT_0071f418;
    *pfVar2 = *pfVar2 * -0.02 + *pfVar2;
    pfVar2[1] = pfVar2[1] * -0.02 + pfVar2[1];
    pfVar2[2] = pfVar2[2] + -fVar3;
    fastfunc::FastVecAddSelf(auStack_60,lVar8,pfVar2);
    iVar6 = collproc::CollLine(local_80,lVar8,0x10,lVar5,0);
    if (iVar6 != 0) {
      if ((CollOutput.pMoby == (MobyInstance *)0x0) ||
         (iVar6 = mobyutil::MB_GetPlatformParent(), iVar6 == 0)) {
        if ((CollOutput.pMoby == g_heroMobyPtr) || (pfVar2[2] < mobyutil::g_FrameTime * -9.8)) {
          *(undefined1 *)((int)this + 0xbc) = 1;
          *(float *)((int)this + 0x10) = CollOutput.ip.x;
          *(float *)((int)this + 0x14) = CollOutput.ip.y;
          *(float *)((int)this + 0x18) = CollOutput.ip.z;
          *(float *)((int)this + 0x1c) = CollOutput.ip.w;
          fastfunc::FastVecNormalize(local_70,pfVar2,0xa10980);
        }
      }
      else {
        pfVar2[4] = (float)CollOutput.pMoby;
        *(undefined1 *)((int)this + 0x20) = 1;
        pfVar2[2] = 0.0;
        *(float *)((int)this + 0x10) = CollOutput.ip.x;
        *(float *)((int)this + 0x14) = CollOutput.ip.y;
        *(float *)((int)this + 0x18) = CollOutput.ip.z;
        *(float *)((int)this + 0x1c) = CollOutput.ip.w;
      }
    }
  }
  else if (*(byte *)((int)this + 0x20) < 2) {
    mobyutil::GetGroundZ(uVar10,lVar8,0);
    if (pfVar2[4] != 0.0) {
      cVar1 = *(char *)((int)pfVar2[4] + 0x20);
      if ((cVar1 == -2) || (cVar1 == -3)) {
        *(undefined1 *)((int)this + 0xbc) = 1;
        pfVar2[4] = 0.0;
      }
      else if ((pMVar7 != (MobyInstance *)0x0) &&
              (iVar6 = mobyutil::MB_GetPlatformParent(pMVar7), iVar6 != 0)) {
        mobyutil::MB_PlatformLocalToWorld(lVar5,pfVar2[4],lVar8,lVar5 + 0x40,lVar8,lVar5 + 0x40);
        fastfunc::FastVecSub(&local_50,lVar8,local_80);
        *pfVar2 = local_50;
        pfVar2[1] = local_4c;
        pfVar2[2] = local_48;
        pfVar2[3] = local_44;
        goto LAB_0022990c;
      }
    }
    *(undefined1 *)((int)this + 0x20) = 0;
    pfVar2[2] = 0.0;
    pfVar2[4] = 0.0;
  }
LAB_0022990c:
  if (*(char *)((int)this + 0xbc) != '\0') {
    uVar11 = 0x4000000000000000;
    uVar10 = 0x3ff0000000000000;
    mobyutil::MB_genericExplosion
              (uVar9,uVar9,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,
               0x3ff0000000000000,0x401c000000000000,lVar5,pfVar2,0,0xffffffffffffffff,0,3,3,5);
    sound::sound_MobyPlay_oClass(0,0,(MobyInstance *)this,0x79);
    uVar9 = collproc::CollMobySphere(uVar11,lVar8);
    mobyutil::MB_DamageMobyList
              (uVar10,uVar10,uVar10,lVar5,2,*(undefined8 *)((int)this + 0x10),
               *(undefined8 *)((int)this + 0x18),&DAT_00a14a00,uVar9,0,&DAT_00830001);
    mobyfunc::DeleteMoby((MobyInstance *)this);
  }
  return;
}



//==== 00229a58  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1258_00229a58(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1258_00229a58(void)

{
  DAT_0076d520 = 0x10000;
  return;
}



//==== 00229a90  ns=Global  size=0x54c
// sig: undefined FUN_00229a90(void)
// callers(2): 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 00252710 mobyupdate_unsorted::UpdateMoby_1346
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 00127ea8 partupd::SpawnPart_26

MobyInstance *
FUN_00229a90(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulonglong param_5,ulonglong param_6,longlong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar14;
  longlong lVar12;
  longlong lVar13;
  uint uVar15;
  longlong lVar16;
  MobyModeBit MVar17;
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
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x110;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x24] = in_LR;
  puVar7[0x1e] = in_f28;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1d] = unaff_r31;
  puVar7[0x18] = unaff_r26;
  puVar7[0x1b] = unaff_r29;
  puVar7[0x1a] = unaff_r28;
  puVar7[0x1c] = unaff_r30;
  puVar7[0x19] = unaff_r27;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  pMVar14 = mobyfunc::CreateMoby(0x4ea);
  if (pMVar14 != (MobyInstance *)0x0) {
    pfVar6 = (float *)pMVar14->pVar;
    pfVar6[6] = param_1;
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0xff;
    pMVar14->enabled = '\x01';
    pMVar14->scale = pMVar14->scale * 4.0;
    fVar1 = 0.0;
    fStack00000054 = (float)param_5;
    fStack00000050 = (float)(param_5 >> 0x20);
    fStack00000058 = (float)(param_6 >> 0x20);
    (pMVar14->rotation).x = 0.0;
    fVar4 = ABS(fStack00000058);
    fStack0000005c = (float)param_6;
    fVar3 = SQRT(fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054);
    fVar2 = ABS(fVar3);
    *(float *)((int)puVar7 + 0x74) = fVar3;
    *(float *)(puVar7 + 0xf) = fVar2 - fVar4;
    uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 | param_6 >> 0x3d & 4;
    fVar3 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar8 = fVar1;
    if (0.0 < fVar3) {
      lVar12 = uVar11 - 0x100;
      lVar16 = uVar11 - 0x74;
      lVar19 = uVar11 - 100;
      lVar21 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x15) = fVar3;
      *(float *)(puVar7 + 0x14) = fVar3;
      *(float *)((int)puVar7 + 0xa4) = fVar3;
      *(float *)((int)puVar7 + 0x9c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar3;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x8c) * fVar3 * fVar3;
        iVar9 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar11 - 0x74;
      pfVar20 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = 2;
      lVar12 = lVar13;
      fVar3 = fVar1;
      do {
        iVar9 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar8 = (fVar3 + 0.7853982) * fVar5 + fVar2;
    }
    fVar2 = ABS(fStack00000050);
    fVar4 = ABS(fStack00000054);
    (pMVar14->rotation).y = -fVar8;
    *(float *)(puVar7 + 0xe) = fVar2 - fVar4;
    uVar18 = param_5 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (param_5 << 0x20) >> 0x3d & 4;
    fVar3 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar12 = uVar11 - 0x100;
      lVar16 = uVar11 - 0x94;
      lVar19 = uVar11 - 0x84;
      lVar21 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x11) = fVar3;
      *(float *)(puVar7 + 0x10) = fVar3;
      *(float *)((int)puVar7 + 0x84) = fVar3;
      *(float *)((int)puVar7 + 0x7c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar3;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x6c) * fVar3 * fVar3;
        iVar9 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar11 - 0x94;
      pfVar20 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar12 = 2;
      do {
        iVar9 = (int)lVar13;
        iVar10 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    (pMVar14->rotation).z = fVar1;
    (pMVar14->pos).x = fStack00000040;
    (pMVar14->pos).y = fStack00000044;
    (pMVar14->pos).z = fStack00000048;
    (pMVar14->pos).w = fStack0000004c;
    *pfVar6 = fStack00000050;
    pfVar6[1] = fStack00000054;
    pfVar6[2] = fStack00000058;
    pfVar6[3] = fStack0000005c;
    dVar22 = (double)mobyutil::MB_randRangeFloat
                               (mobyutil::g_FrameTime * -1.5707964,mobyutil::g_FrameTime * 1.5707964
                               );
    pfVar6[4] = (float)dVar22;
    *(short *)(pfVar6 + 7) = (short)param_7;
    *(short *)((int)pfVar6 + 0x1e) = (short)param_7;
    pfVar6[5] = 0.0;
    fVar1 = (pMVar14->pos).y - g_heroPosition.y;
    fVar3 = (pMVar14->pos).x - g_heroPosition.x;
    fVar4 = (pMVar14->pos).z - g_heroPosition.z;
    pfVar6[9] = 0.0;
    pfVar6[10] = 0.0;
    uVar15 = (int)param_7 + (int)(param_7 << 2);
    pfVar6[8] = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
    pMVar14->alpha = '@';
    MVar17 = pMVar14->modeBits | DRAW_TRANSPARENT_WEIRD;
    pMVar14->modeBits = MVar17;
    partupd::SpawnPart_26
              (0x41186a0000000000,pMVar14,MVar17,0x2f7f4f4f,
               ((int)uVar15 >> 2) + (uint)((int)uVar15 < 0 && (uVar15 & 3) != 0),0xffffffffffffffff)
    ;
    partupd::SpawnPart_26(0x4103880000000000,pMVar14);
    mobyfunc::UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}



//==== 0022a010  ns=mobyupdate_unsorted  size=0x6f4
// sig: undefined UpdateMoby_1258(MobyInstance * moby)
// callers(0): 
// callees(10): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010e030 mobyutil::MB_genericExplosion; 00128248 partupd::SpawnPart_27; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize

/* Moby 1258 */

void mobyupdate_unsorted::UpdateMoby_1258(MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  float *pfVar6;
  float fVar7;
  f32 fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar14;
  undefined8 uVar13;
  longlong lVar15;
  undefined1 *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0 [4];
  undefined1 local_d0 [72];
  
  pfVar6 = (float *)moby->pVar;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar10 = fVar2 - g_heroPosition.x;
  fVar4 = (moby->pos).z;
  fVar11 = fVar3 - g_heroPosition.y;
  fVar12 = fVar4 - g_heroPosition.z;
  fVar7 = pfVar6[10];
  (moby->pos).x = fVar2 + *pfVar6;
  (moby->pos).y = fVar3 + pfVar6[1];
  dVar22 = (double)SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  (moby->pos).z = fVar4 + pfVar6[2];
  if ((((fVar7 == 0.0) && (pfVar6[9] != 0.0)) && ((double)pfVar6[8] < dVar22)) && (dVar22 < 3.0)) {
    sound::PlayMobySound(0,0,moby);
    pfVar6[10] = 1.4013e-45;
  }
  if (dVar22 < (double)pfVar6[8]) {
    pfVar6[9] = 1.4013e-45;
  }
  pfVar6[8] = (float)dVar22;
  fVar8 = (moby->pos).x;
  uVar9 = (int)fVar8 >> 0x1f;
  iVar14 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9;
  if (((iVar14 < 0x40000000) || (0x447f4000 < iVar14)) ||
     ((fVar8 = (moby->pos).y, uVar9 = (int)fVar8 >> 0x1f,
      iVar14 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9, 0x447f4000 < iVar14 || iVar14 < 0x40000000 ||
      ((fVar8 = (moby->pos).z, uVar9 = (int)fVar8 >> 0x1f,
       iVar14 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9, 0x447f4000 < iVar14 || iVar14 < 0x40000000 ||
       (fVar3 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
       255.0 < SQRT(fVar2 * fVar2 + fVar3 * fVar3))))))) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    puVar16 = (undefined1 *)0x0;
    if (moby->setByGroup == '\0') {
      puVar16 = local_d0;
    }
    iVar14 = fastfunc::FastDecTimerS16(pfVar6 + 7);
    if ((iVar14 == 0) || (moby->setByGroup != '\0')) {
      if ((*(short *)(pfVar6 + 7) < 1) && (moby->setByGroup != '\0')) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      moby->setByGroup = '\x01';
      uVar5 = *(ushort *)((int)pfVar6 + 0x1e);
      *(ushort *)(pfVar6 + 7) = ((short)uVar5 >> 2) + (ushort)((short)uVar5 < 0 && (uVar5 & 3) != 0)
      ;
    }
    lVar15 = (longlong)(int)moby + 0x10;
    iVar14 = collproc::CollLine(local_100,lVar15,0,pfVar6[6],puVar16);
    if (iVar14 != 0) {
      (moby->pos).x = CollOutput.ip.x;
      cVar1 = moby->setByGroup;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      if (cVar1 == '\0') {
        iVar14 = 0;
        dVar22 = -1.0;
        dVar17 = 1.0;
        dVar18 = 3.0;
        dVar19 = 6.0;
        dVar20 = 10.5;
        dVar21 = 15.5;
        uVar23 = 0x40ed4c0000000000;
        do {
          mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar17);
          mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar17);
          mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar17);
          fastfunc::FastVecNormalize(local_e0,pfVar6,0xa10980);
          mobyutil::MB_randRangeFloat
                    ((float)((double)mobyutil::g_FrameTime * dVar18),
                     (float)((double)mobyutil::g_FrameTime * dVar19));
          uVar13 = mobyutil::MB_randRange
                             ((int)((double)animationSpeed * dVar20),
                              (int)((double)animationSpeed * dVar21));
          partupd::SpawnPart_27(uVar23,lVar15,local_f0,0x7f2f4f6f,uVar13);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 5);
      }
      uVar23 = 0x3ff19999a0000000;
      mobyutil::MB_genericExplosion
                (0,0,0x3ff19999a0000000,0x3fe3333340000000,0x3ff0000000000000,0x3fecccccc0000000,0,
                 (longlong)(int)moby,pfVar6,0,1,0xffffffffffffffff,4,3,6);
      collproc::CollMobySphere(uVar23,lVar15);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0022a704  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1259_0022a704(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1259_0022a704(void)

{
  DAT_0076d590 = 0x10000;
  return;
}



//==== 0022a720  ns=mobyupdate_helpers  size=0x448
// sig: undefined M1259_0022a720(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1259_0022a720(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  int iVar14;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar15;
  float *pfVar16;
  ulonglong unaff_r25;
  undefined *puVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar18;
  int iVar19;
  ulonglong unaff_r28;
  longlong lVar20;
  ulonglong unaff_r29;
  uint uVar21;
  int iVar22;
  ulonglong unaff_r30;
  int iVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar24;
  double dVar25;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar26;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x380;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar8;
  puVar6[0x72] = in_LR;
  puVar6[0x6e] = in_f30;
  puVar6[0x6f] = in_f31;
  puVar6[0x6c] = unaff_r30;
  puVar6[0x6b] = unaff_r29;
  puVar6[0x6d] = unaff_r31;
  puVar6[0x6a] = unaff_r28;
  puVar6[0x69] = unaff_r27;
  puVar6[0x68] = unaff_r26;
  puVar6[0x67] = unaff_r25;
  puVar6[0x66] = unaff_r24;
  puVar6[0x65] = unaff_r23;
  puVar6[100] = unaff_r22;
  puVar6[99] = unaff_r21;
  puVar6[0x62] = unaff_r20;
  iVar5 = *(int *)(param_1 + 0x78);
  fastfunc::FastEulerToMtx1(uVar8 - 0x310,param_1 + 0x40);
  dVar26 = 1.0;
  uVar21 = 0;
  puVar17 = &DAT_0076d680;
  lVar15 = uVar8 - 0x180;
  lVar18 = uVar8 - 0x1b0;
  lVar20 = lVar1;
  do {
    fastfunc::FastEulerToMtx1(lVar18,puVar17);
    fastfunc::FastVecMtx4Mul(lVar18,uVar8 - 0x310,lVar18);
    fVar2 = *(float *)(param_1 + 0x10);
    fVar3 = *(float *)(param_1 + 0x14);
    fVar4 = *(float *)(param_1 + 0x18);
    if ((uVar21 == (((int)uVar21 >> 1) + (uint)((int)uVar21 < 0 && (uVar21 & 1) != 0)) * 2) &&
       (iVar14 = *(int *)(iVar5 + 0x2314), iVar14 != -1)) {
      fVar2 = MobyInstance[iVar14].pos.x;
      fVar3 = MobyInstance[iVar14].pos.y;
      fVar4 = MobyInstance[iVar14].pos.z;
    }
    pfVar16 = (float *)lVar15;
    uVar21 = uVar21 + 1;
    puVar17 = puVar17 + 0x10;
    lVar18 = lVar18 + 0x40;
    *pfVar16 = *pfVar16 + fVar2;
    pfVar16[1] = pfVar16[1] + fVar3;
    pfVar16[2] = pfVar16[2] + fVar4;
    *(undefined4 *)((int)lVar20 + 0x20c) = 0x3f800000;
    lVar15 = lVar15 + 0x40;
    lVar20 = lVar20 + 0x40;
  } while ((int)uVar21 < 2);
  uVar9 = draw::GetEffectTex(0xe);
  puVar6[0x37] = uVar9;
  uVar9 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x38] = uVar9;
  uVar9 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x36] = uVar9;
  uVar9 = idol_draw::PackCmd(DAT_00f0d2f8,DAT_0076d5c0,DAT_00f0d2fc,DAT_0076d5c4,0x80);
  puVar6[0x39] = uVar9;
  iVar23 = 0;
  *(undefined4 *)((int)puVar6 + 0x194) = DAT_0076d5dc;
  uVar7 = DAT_0076d5f4;
  *(undefined4 *)((int)puVar6 + 0x19c) = DAT_0076d5e4;
  uVar10 = DAT_0076d5ec;
  *(undefined4 *)((int)puVar6 + 0x1ac) = uVar7;
  *(undefined4 *)((int)puVar6 + 0x1a4) = uVar10;
  iVar14 = iVar5;
  iVar19 = iVar5;
  do {
    iVar22 = *(int *)(iVar19 + 0x2300);
    if (DAT_00f0d310 < iVar22) {
      dVar24 = (double)fastfunc::FastIntToDouble(iVar22 - DAT_00f0d310);
      dVar25 = (double)fastfunc::FastIntToDouble(DAT_00f0d30c - DAT_00f0d310);
      dVar24 = dVar24 / dVar25;
    }
    else {
      dVar24 = (double)fastfunc::FastIntToDouble(iVar22);
      dVar25 = (double)fastfunc::FastIntToDouble(DAT_00f0d310);
      dVar24 = dVar26 - (double)(float)(dVar24 / dVar25);
    }
    uVar10 = fastfunc::FastLerpColor((double)(float)dVar24,DAT_0076d5d0,PTR_DAT_0076d5d4);
    *(undefined4 *)((int)puVar6 + 0x18c) = uVar10;
    *(undefined4 *)(puVar6 + 0x31) = uVar10;
    iVar22 = 0;
    *(undefined4 *)((int)puVar6 + 0x184) = uVar10;
    *(undefined4 *)(puVar6 + 0x30) = uVar10;
    dVar24 = 0.0;
    if (0 < *(int *)(iVar5 + 0x232c) + -1) {
      do {
        lVar20 = 4;
        dVar24 = (double)(float)((double)DAT_0076d6a0 + dVar24);
        lVar18 = lVar1;
        pfVar16 = (float *)&DAT_0076d5d8;
        if (dVar26 - dVar24 < 0.0) {
          dVar24 = (double)(float)(dVar24 - dVar26);
        }
        do {
          fVar2 = *pfVar16;
          pfVar16 = pfVar16 + 2;
          *(float *)((int)lVar18 + 400) = (float)((double)fVar2 + dVar24) + DAT_00f0d308;
          lVar18 = lVar18 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        iVar11 = 0;
        lVar18 = uVar8 - 0x240;
        pfVar16 = (float *)&DAT_0076d600;
        lVar20 = 4;
        do {
          pfVar13 = (float *)(((iVar11 >> 1) + iVar22) * 0x10 + iVar14);
          iVar11 = iVar11 + 1;
          pfVar12 = (float *)lVar18;
          *pfVar12 = *pfVar16 + *pfVar13;
          pfVar12[1] = pfVar16[1] + pfVar13[1];
          pfVar12[2] = pfVar16[2] + pfVar13[2];
          pfVar13 = pfVar16 + 3;
          pfVar16 = pfVar16 + 4;
          pfVar12[3] = *pfVar13;
          lVar18 = lVar18 + 0x10;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        iVar11 = 0;
        lVar18 = uVar8 - 0x1b0;
        do {
          draw::FastDrawQuad(uVar8 - 0x240,lVar18,0,EffectTexHeaders,9);
          iVar11 = iVar11 + 1;
          lVar18 = lVar18 + 0x40;
        } while (iVar11 < 2);
        iVar22 = iVar22 + 1;
      } while (iVar22 < *(int *)(iVar5 + 0x232c) + -1);
    }
    iVar23 = iVar23 + 1;
    iVar19 = iVar19 + 4;
    iVar14 = iVar14 + 0x460;
  } while (iVar23 < 4);
  return;
}



//==== 0022ab80  ns=mobyupdate_helpers  size=0x430
// sig: undefined M1259_0022ab80(void)
// callers(1): 0022aff8 mobyupdate_unsorted::UpdateMoby_1259
// callees(3): 0006d720 RegisterFuncForMoby; 000fea60 mobyutil::MB_randSphere; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M1259_0022ab80(MobyInstance *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar13;
  longlong lVar12;
  float *pfVar14;
  float *pfVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x120;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = ZEXT48(&stack0x00000000);
  pvVar4 = param_1->pVar;
  uVar24 = ZEXT48(pvVar4);
  DAT_00f0d308 = DAT_0076d6a4 * mobyutil::g_FrameTime + DAT_00f0d308;
  if (1.0 < DAT_00f0d308) {
    DAT_00f0d308 = DAT_00f0d308 - 1.0;
  }
  iVar23 = 0;
  lVar19 = 0;
  uVar16 = uVar24;
  uVar21 = uVar24;
  do {
    iVar13 = fastfunc::FastDecTimerS32(uVar21 + 0x2300);
    if (iVar13 == 0) {
      iVar13 = 1;
      if (1 < *(int *)((int)pvVar4 + 0x232c) + -1) {
        lVar11 = uVar16 + 0x1190;
        uVar20 = uVar16;
        do {
          uVar20 = uVar20 + 0x10;
          pfVar14 = (float *)uVar20;
          pfVar15 = (float *)lVar11;
          iVar13 = iVar13 + 1;
          *pfVar14 = *pfVar14 + *pfVar15;
          pfVar14[1] = pfVar14[1] + pfVar15[1];
          lVar11 = lVar11 + 0x10;
          pfVar14[2] = pfVar14[2] + pfVar15[2];
        } while (iVar13 < *(int *)((int)pvVar4 + 0x232c) + -1);
      }
    }
    else {
      iVar22 = 0;
      lVar12 = -((longlong)(*(int *)((int)pvVar4 + 0x232c) << 4) + 0x70);
      lVar11 = lVar12 + lVar1;
      *(ulonglong *)((int)lVar12 + (int)puVar6) = *puVar6;
      iVar13 = *(int *)((int)pvVar4 + 0x232c);
      if (0 < iVar13) {
        uVar25 = 0;
        auVar36 = ZEXT416(0);
        auVar37 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar36 = loadVectorLeftIndexed(8,0x22ab68);
        uVar20 = lVar11 + 0x70U & 0xffffffff;
        uVar17 = lVar19 + uVar24 + 0xc & 0xffffffff;
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        uVar18 = uVar16;
        do {
          puVar7 = (undefined4 *)uVar18;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          auVar26 = loadVectorLeftIndexed(0x232c,uVar24);
          auVar27 = loadVectorRightIndexed(0x233c,uVar24);
          auVar29 = ZEXT416(0xffffffff);
          auVar28 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar26 | auVar27,0);
          auVar27 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar33 = loadVectorLeftIndexed(0x2324,uVar24);
          auVar34 = loadVectorRightIndexed(0x2334,uVar24);
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = ZEXT416(0xffffffff);
          auVar31 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar37,0);
          auVar29 = vectorReciprocalEstimateFloatingPoint(auVar26);
          auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar26,auVar36);
          auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar28,auVar27);
          auVar28 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          auVar29 = ZEXT416(0xffffffff);
          auVar31 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          auVar32 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar26,auVar36);
          auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar29,auVar30);
          auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar26,auVar36);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar29,auVar28);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar33 | auVar34,auVar31);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar35,auVar29,auVar32);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0,uVar18)
          ;
          *(undefined4 *)((uint)puVar7 & 0xfffffffc) = uVar5;
          *(undefined4 *)uVar17 = 0x3f800000;
          mobyutil::MB_randSphere(uVar25,(double)(DAT_0076d6a8 * mobyutil::g_FrameTime),uVar20);
          iVar22 = iVar22 + 1;
          iVar13 = *(int *)((int)pvVar4 + 0x232c);
          uVar18 = uVar18 + 0x10;
          uVar17 = uVar17 + 0x10;
          auVar29._0_4_ = auVar37._0_4_ + 1;
          auVar29._8_8_ = auVar37._8_8_;
          auVar29._4_4_ = auVar37._4_4_ + 1;
          auVar26._0_8_ = auVar29._0_8_;
          auVar26._12_4_ = auVar37._12_4_;
          auVar26._8_4_ = auVar37._8_4_ + 1;
          auVar37._0_12_ = auVar26._0_12_;
          auVar37._12_4_ = auVar26._12_4_ + 1;
          uVar20 = uVar20 + 0x10;
        } while (iVar22 < iVar13);
      }
      iVar22 = 1;
      if (1 < iVar13 + -1) {
        uVar20 = lVar11 + 0x10U & 0xffffffff;
        uVar17 = lVar11 + 0x80U & 0xffffffff;
        lVar11 = uVar16 + 0x1190;
        do {
          iVar13 = (int)uVar20;
          pfVar14 = (float *)uVar17;
          fVar8 = *(float *)(iVar13 + 0x60) + *pfVar14;
          iVar22 = iVar22 + 1;
          pfVar15 = (float *)lVar11;
          *pfVar15 = fVar8;
          fVar9 = *(float *)(iVar13 + 100) + pfVar14[1];
          pfVar15[1] = fVar9;
          fVar10 = *(float *)(iVar13 + 0x68) + pfVar14[2];
          uVar17 = uVar17 + 0x10;
          pfVar15[2] = fVar10;
          fVar2 = *(float *)(iVar13 + 0x6c);
          pfVar15[3] = fVar2;
          fVar8 = fVar8 + *(float *)(iVar13 + 0x80);
          *pfVar15 = fVar8;
          fVar9 = fVar9 + *(float *)(iVar13 + 0x84);
          pfVar15[1] = fVar9;
          fVar3 = *(float *)(iVar13 + 0x88);
          *pfVar15 = fVar8 * 0.333;
          uVar20 = uVar20 + 0x10;
          pfVar15[3] = fVar2;
          pfVar15[1] = fVar9 * 0.333;
          pfVar15[2] = (fVar10 + fVar3) * 0.333;
          lVar11 = lVar11 + 0x10;
        } while (iVar22 < *(int *)((int)pvVar4 + 0x232c) + -1);
      }
      *(undefined4 *)((int)uVar21 + 0x2300) = DAT_00f0d30c;
    }
    iVar23 = iVar23 + 1;
    uVar21 = uVar21 + 4;
    lVar19 = lVar19 + 0x460;
    uVar16 = uVar16 + 0x460;
  } while (iVar23 < 4);
  fVar2 = (param_1->pos).y - GameCamera.posY;
  fVar3 = (param_1->pos).x - GameCamera.posX;
  fVar8 = (param_1->pos).z - GameCamera.posZ;
  if (SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2) < 48.0) {
    RegisterFuncForMoby(&PTR_M1259_0022a720_00709940,param_1);
  }
  return;
}



//==== 0022aff8  ns=mobyupdate_unsorted  size=0x648
// sig: undefined UpdateMoby_1259(MobyInstance * moby)
// callers(0): 
// callees(7): 00057820 collproc::CollLine; 0010581c mobyutil::SetCollDamIn; 001099f8 mobyutil::Lerp_vec4; 00110b70 mobyutil::MB_IsPntInCuboid; 0022ab80 mobyupdate_helpers::M1259_0022ab80; 00502578 fastfunc::FastWrapRot; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 1259 */

void mobyupdate_unsorted::UpdateMoby_1259(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  f32 fVar9;
  float fVar10;
  void *pvVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  MobyInstance *pMVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
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
  ulonglong in_f30;
  ulonglong in_f31;
  undefined8 uVar31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x130;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar16;
  puVar13[0x28] = in_LR;
  puVar13[0x24] = in_f30;
  puVar13[0x25] = in_f31;
  puVar13[0x23] = unaff_r31;
  puVar13[0x22] = unaff_r30;
  pvVar11 = moby->pVar;
  fVar1 = (moby->pos).z;
  iVar19 = *(int *)((int)pvVar11 + 0x2314);
  puVar13[0x21] = unaff_r29;
  if (iVar19 != -1) {
    if (moby->state == 0) {
      DAT_00f0d310 = 0x16;
      DAT_00f0d30c = 0x2d;
      *(undefined4 *)((int)pvVar11 + 0x2300) = 0;
      *(undefined4 *)((int)pvVar11 + 0x2304) = 0xb;
      *(undefined4 *)((int)pvVar11 + 0x2308) = 0x17;
      *(undefined4 *)((int)pvVar11 + 0x230c) = 0x22;
      *(undefined4 *)((int)pvVar11 + 0x231c) = 0xffffffff;
      moby->state = '\x01';
    }
    else if (moby->state < 2) {
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar4 = MobyInstance[iVar19].pos.x - fVar2;
      fVar6 = MobyInstance[iVar19].pos.y - fVar3;
      fVar7 = ABS(fVar4);
      fVar5 = ABS(fVar6);
      *(float *)(puVar13 + 0x1a) = fVar4;
      *(float *)((int)puVar13 + 0xd4) = fVar6;
      *(float *)(puVar13 + 0x1b) = fVar7 - fVar5;
      fVar4 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)(puVar13 + 0x1a));
      if (*(float *)(puVar13 + 0x1b) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)((int)puVar13 + 0xd4));
      if (*(float *)(puVar13 + 0x1b) - 0.0 < 0.0) {
        fVar14 = fVar7;
      }
      if (0.0 < fVar6) {
        lVar23 = uVar16 - 0x120;
        lVar21 = uVar16 - 0x44;
        lVar22 = uVar16 - 0x54;
        lVar25 = 2;
        fVar6 = (fVar14 - fVar6) / (fVar14 + fVar6);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x1d) = fVar6;
        *(float *)(puVar13 + 0x1c) = fVar6;
        *(float *)((int)puVar13 + 0xe4) = fVar6;
        *(float *)((int)puVar13 + 0xdc) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar7;
        *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar6;
        *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar23 + 0xdc) = *(float *)((int)lVar23 + 0xcc) * fVar6 * fVar6;
          iVar19 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar23 = uVar16 - 0x54;
        lVar25 = 4;
        pfVar24 = (float *)&DAT_007358e0;
        lVar21 = lVar23;
        lVar22 = lVar18;
        do {
          fVar6 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0xdc) = *(float *)((int)lVar22 + 0xdc) * fVar6;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar21 = 2;
        do {
          iVar19 = (int)lVar18;
          iVar15 = (int)lVar23;
          lVar18 = lVar18 + 0x10;
          lVar23 = lVar23 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar19 + 0xdc) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar10 + fVar5;
      }
      pMVar20 = MobyInstance;
      iVar19 = *(int *)((int)pvVar11 + 0x2314);
      (moby->rotation).z = fVar4;
      fVar3 = fVar3 - pMVar20[iVar19].pos.y;
      fVar2 = fVar2 - pMVar20[iVar19].pos.x;
      fVar1 = fVar1 - pMVar20[iVar19].pos.z;
      *(float *)((int)pvVar11 + 0x2324) = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
      dVar26 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar11 + 0x2318),
                                  *(float *)((int)pvVar11 + 9000) * 0.017453292 *
                                  mobyutil::g_FrameTime);
      *(float *)((int)pvVar11 + 0x2318) = (float)dVar26;
      dVar28 = (double)(float)(3.141592502593994 - dVar26);
      if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
        dVar28 = dVar26;
      }
      dVar27 = (double)(float)(-3.141592502593994 - dVar26);
      if ((double)(float)(-3.141592502593994 - dVar26) - dVar28 < 0.0) {
        dVar27 = dVar28;
      }
      pSVar12 = Splines[*(int *)((int)pvVar11 + 0x2310)];
      dVar29 = (double)(float)(dVar27 * dVar27);
      dVar30 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar27));
      dVar28 = (double)(float)(dVar29 * dVar30);
      fVar1 = (float)(dVar29 * dVar28) * 2.601887e-06 +
              (float)(dVar28 * -0.0001980741071747616 +
                     (double)(float)(dVar30 * 0.008333025500178337 +
                                    (double)(float)((double)(float)(dVar29 * dVar27) *
                                                    -0.16666656732559204 + dVar27)));
      if ((1.5707963705062866 < dVar26) && (dVar26 < 3.1415927410125732)) {
        fVar1 = 2.0 - fVar1;
      }
      if ((-3.1415927410125732 < dVar26) && (dVar26 < -1.5707963705062866)) {
        fVar1 = 2.0 - fVar1;
      }
      dVar28 = 0.5;
      uVar31 = 0x3ff0000000000000;
      fVar1 = fVar1 * 0.5 + 0.5;
      *(float *)(puVar13 + 8) = pSVar12->points[0].x;
      *(float *)((int)puVar13 + 0x44) = pSVar12->points[0].y;
      *(float *)(puVar13 + 9) = pSVar12->points[0].z;
      *(float *)((int)puVar13 + 0x4c) = pSVar12->points[0].w;
      *(float *)(puVar13 + 10) = pSVar12->points[1].x;
      *(float *)((int)puVar13 + 0x54) = pSVar12->points[1].y;
      *(float *)(puVar13 + 0xb) = pSVar12->points[1].z;
      if (1.0 - fVar1 < 0.0) {
        fVar1 = fVar1 - 2.0;
      }
      *(float *)((int)puVar13 + 0x5c) = pSVar12->points[1].w;
      mobyutil::Lerp_vec4(ABS(fVar1),&(moby->pos).x);
      pMVar20 = MobyInstance;
      fVar1 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar3 = fVar1 - g_heroPosition.y;
      fVar4 = fVar2 - g_heroPosition.x;
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= 64.0) {
        if ((moby->enabled == '\0') &&
           (iVar19 = *(int *)((int)pvVar11 + 0x2314), MobyInstance[iVar19].enabled == '\0')) {
          fVar2 = fVar2 + MobyInstance[iVar19].pos.x;
          fVar3 = (moby->pos).z;
          *(float *)(puVar13 + 0xe) = fVar2;
          fVar1 = fVar1 + pMVar20[iVar19].pos.y;
          *(float *)((int)puVar13 + 0x74) = fVar1;
          fVar4 = pMVar20[iVar19].pos.z;
          *(float *)(puVar13 + 0xe) = (float)((double)fVar2 * dVar28);
          *(undefined4 *)((int)puVar13 + 0x7c) = 0x41800000;
          *(float *)((int)puVar13 + 0x74) = (float)((double)fVar1 * dVar28);
          *(float *)(puVar13 + 0xf) = (float)((double)(fVar3 + fVar4) * dVar28);
          iVar19 = fastfunc::FastCheckBsphereInView(0x4040000000000000,uVar16 - 0xc0);
          if (iVar19 == -1) {
            return;
          }
        }
        if ((((*(int *)((int)pvVar11 + 0x2330) == -1) ||
             (iVar19 = mobyutil::MB_IsPntInCuboid
                                 ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar11 + 0x2330)
                                 ), iVar19 == 0)) && (*(int *)((int)pvVar11 + 0x2320) != 0)) &&
           (mobyupdate_helpers::M1259_0022ab80(moby), *(int *)((int)pvVar11 + 0x2314) != -1)) {
          fVar8 = (moby->pos).y;
          pMVar20 = MobyInstance + *(int *)((int)pvVar11 + 0x2314);
          *(f32 *)(puVar13 + 0x10) = (moby->pos).x;
          fVar9 = (moby->pos).z;
          *(f32 *)((int)puVar13 + 0x84) = fVar8;
          fVar8 = (moby->pos).w;
          *(f32 *)(puVar13 + 0x11) = fVar9;
          *(f32 *)((int)puVar13 + 0x8c) = fVar8;
          *(f32 *)(puVar13 + 0x12) = (pMVar20->pos).x;
          *(f32 *)((int)puVar13 + 0x94) = (pMVar20->pos).y;
          *(f32 *)(puVar13 + 0x13) = (pMVar20->pos).z;
          *(f32 *)((int)puVar13 + 0x9c) = (pMVar20->pos).w;
          mobyutil::SetCollDamIn(uVar31,uVar16 - 0x90,moby,0x10001,pMVar20,&DAT_00a15d30);
          collproc::CollLine(uVar16 - 0xb0,uVar16 - 0xa0,0,0,uVar16 - 0x90);
        }
      }
    }
  }
  return;
}



//==== 0022b640  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1259_0022b640(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1259_0022b640(void)

{
  DAT_0076d6f8 = 0x10000;
  return;
}



//==== 0022b658  ns=mobyupdate_helpers  size=0x10
// sig: undefined M1259_0022b658(void)
// callers(0): 
// callees(0): 

double mobyupdate_helpers::M1259_0022b658(void)

{
  return (double)DAT_00771348;
}



//==== 0022b668  ns=mobyupdate_helpers  size=0x2c
// sig: undefined M1259_0022b668(void)
// callers(0): 
// callees(1): 0017e558 water::SubmitZone

void mobyupdate_helpers::M1259_0022b668(void)

{
  water::SubmitZone((OceanPlane *)&DAT_00771340);
  return;
}



//==== 0022b6c0  ns=mobyupdate_unsorted  size=0x154
// sig: undefined UpdateMoby_126(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 0017e31c water::OceanPlane_SetDepth

/* Moby 126 */

void mobyupdate_unsorted::UpdateMoby_126(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (moby->state == '\0') {
    moby->state = '\x01';
    water::OceanPlane_SetDepth(0.6666667,(OceanPlane *)&DAT_00771340,ZEXT48(&DAT_0022b694),0x30);
    moby->updateDistance = -1;
  }
  fVar1 = (float)(longlong)(worldUpdateTime % 0x168) * 0.017444445 - 3.14;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  WaterFogFarIntensity = 0x43440000;
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  DAT_00771348 = (fVar1 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)
                 * 0.25 + 54.0;
  RegisterFuncForMoby(&PTR_M1259_0022b668_00709968,moby);
  return;
}



//==== 0022b814  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1260_0022b814(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1260_0022b814(void)

{
  DAT_007713cc = 0x10000;
  return;
}



//==== 0022b828  ns=mobyupdate_helpers  size=0x2c
// sig: undefined M1260_0022b828(void)
// callers(0): 
// callees(1): 0017e558 water::SubmitZone

void mobyupdate_helpers::M1260_0022b828(void)

{
  water::SubmitZone((OceanPlane *)&DAT_00775020);
  return;
}



//==== 0022b858  ns=mobyupdate_unsorted  size=0x94
// sig: undefined UpdateMoby_1260(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 0017e31c water::OceanPlane_SetDepth

/* Moby 1260 */

void mobyupdate_unsorted::UpdateMoby_1260(MobyInstance *moby)

{
  if (moby->state == 0) {
    water::OceanPlane_SetDepth(0.6666667,(OceanPlane *)&DAT_00775020,ZEXT48(&PTR_DAT_00770000),0x40)
    ;
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1260_0022b828_00709980,moby);
  }
  return;
}



//==== 0022b8ec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1261_0022b8ec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1261_0022b8ec(void)

{
  DAT_007750ac = 0x10000;
  return;
}



//==== 0022b928  ns=mobyupdate_helpers  size=0x1c8
// sig: undefined M1261_0022b928(void)
// callers(1): 0022c5a8 mobyupdate_unsorted::UpdateMoby_1261
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0012f6b0 partupd::SpawnPart_52

void mobyupdate_helpers::M1261_0022b928(void)

{
  undefined8 uVar1;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 local_50 [24];
  
  mobyutil::MB_randRot();
  dVar4 = 0.0;
  mobyutil::MB_randRangeFloat(0.0,DAT_00775108);
  uVar2 = mobyutil::MB_randRangeFloat((float)dVar4,DAT_007750f8);
  uVar3 = mobyutil::MB_randRangeFloat(DAT_007750f8,DAT_007750fc);
  uVar1 = mobyutil::MB_randRange(DAT_00775100,DAT_00775104);
  partupd::SpawnPart_52(uVar2,uVar3,local_50,DAT_007750f0,DAT_007750f4,in_r6,in_r7,uVar1);
  return;
}



//==== 0022bb60  ns=mobyupdate_helpers  size=0xa30
// sig: undefined M1261_0022bb60(void)
// callers(1): 0022c5a8 mobyupdate_unsorted::UpdateMoby_1261
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00123390 partupd::SpawnPart_11; 002a57a0 mobyupdate_helpers::M1634_002a57a0; 004d4138 FUN_004d4138; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1261_0022bb60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
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
  undefined8 uVar23;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined4 local_120 [12];
  longlong local_f0;
  
  dVar21 = 0.0;
  dVar20 = 1.0;
  iVar9 = 0;
  dVar19 = 1.5;
  fVar5 = GameCamera.posY - *(float *)(param_1 + 0x14);
  fVar4 = GameCamera.posX - *(float *)(param_1 + 0x10);
  fVar6 = GameCamera.posZ - (*(float *)(param_1 + 0x18) + 1.0);
  dVar17 = -1.0;
  dVar16 = 3.5;
  dVar15 = 6.5;
  dVar14 = 60.5;
  dVar13 = 120.5;
  dVar22 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  do {
    mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar20);
    mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar20);
    mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar20);
    mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar15);
    iVar10 = (int)((double)animationSpeed * dVar13);
    local_f0 = (longlong)iVar10;
    uVar7 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar14),iVar10);
    M1634_002a57a0(local_160,local_150,uVar7,0);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 10);
  iVar9 = 0;
  dVar16 = 10.0;
  dVar13 = 90.5;
  do {
    mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar20);
    mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar20);
    mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar20);
    mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar16);
    iVar10 = (int)((double)animationSpeed * dVar13);
    local_f0 = (longlong)iVar10;
    uVar7 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar14),iVar10);
    M1634_002a57a0(local_160,local_130,uVar7,1);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar20);
  mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar20);
  mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar20);
  iVar9 = (int)((double)animationSpeed * dVar13);
  local_f0 = (longlong)iVar9;
  uVar7 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar14),iVar9);
  M1634_002a57a0(local_160,local_140,uVar7,1);
  iVar9 = 4;
  uVar7 = 0x4018000000000000;
  if (dVar22 < 6.0) {
    iVar9 = fastfunc::FastDoubleToInt(dVar22);
    iVar9 = iVar9 + 1;
  }
  iVar10 = 0;
  if (dVar22 - 7.0 < 0.0) {
    dVar21 = (double)(float)(7.0 - dVar22);
  }
  if (0 < iVar9) {
    dVar20 = 8.0;
    uVar23 = 0x41224f8000000000;
    dVar17 = 15.5;
    dVar15 = 20.5;
    dVar14 = 25.5;
    dVar13 = 30.5;
    do {
      dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar16);
      dVar12 = (double)mobyutil::g_FrameTime;
      local_120[0] = 0x4f00ff8f;
      local_120[1] = 0x4f00ff8f;
      local_120[2] = 0x4f00ff7f;
      local_120[3] = 0x4f00ff6f;
      local_120[4] = 0x2fffffff;
      local_120[5] = 0x2fffffff;
      local_120[6] = 0x2f007f5f;
      local_120[7] = 0x2f007f4f;
      local_120[8] = 0x2f007f3f;
      local_120[9] = 0x2f004f00;
      dVar18 = (double)(float)((double)(float)(dVar11 * dVar19) * dVar12 -
                              (double)(float)(dVar12 * dVar21));
      local_120[10] = 0x2f000000;
      local_120[0xb] = 0x3f000000;
      lVar8 = mobyutil::MB_randInt
                        ((double)(float)(dVar11 * dVar19),dVar12,(double)(float)(dVar12 * dVar21),6)
      ;
      uVar2 = *(undefined4 *)((int)local_120 + (int)(lVar8 << 2));
      lVar8 = mobyutil::MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar8 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar15);
      local_f0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar17),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar13);
      local_f0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar14),iVar1);
      partupd::SpawnPart_11(uVar23,dVar18,local_160,local_170,uVar2,uVar3);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  if (9.0 < dVar22) {
    local_f0 = (longlong)(int)(animationSpeed * 15.5);
    FUN_004d4138(uVar7,param_1,local_160,local_170);
    local_f0 = (longlong)(int)(animationSpeed * 24.5);
    FUN_004d4138(uVar7,param_1,local_160,local_170);
  }
  local_f0 = (longlong)(int)(animationSpeed * 20.5);
  FUN_004d4138(uVar7,param_1,local_160,local_170,0x30,(int)(animationSpeed * 20.5),0x3f,0x7f,0);
  local_f0 = (longlong)(int)(animationSpeed * 27.5);
  FUN_004d4138(0x4015000000000000,param_1,local_160,local_170,0x40,(int)(animationSpeed * 27.5),0x10
               ,0x60,0);
  local_f0 = (longlong)(int)(animationSpeed * 29.5);
  FUN_004d4138(0x4012000000000000,param_1,local_160,local_170,0x20,(int)(animationSpeed * 29.5),0,
               0x20,0);
  return;
}



//==== 0022c5a8  ns=mobyupdate_unsorted  size=0x4f8
// sig: undefined UpdateMoby_1261(MobyInstance * moby)
// callers(0): 
// callees(15): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107860 mobyutil::MB_DamageMobyList; 001099ec mobyutil::Lerp; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0015d12c sound::PlayMobySound; 0022b928 mobyupdate_helpers::M1261_0022b928; 0022bb60 mobyupdate_helpers::M1261_0022bb60; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf
// strings: 0022c590: '?333Br' | 0065525c: 'Moby class %d UID:%d  Damage Received: %f\n'

/* Moby 1261 */

void mobyupdate_unsorted::UpdateMoby_1261(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  void *pvVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar8;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined8 local_e8;
  undefined1 local_90 [16];
  int local_80 [2];
  longlong local_78;
  
  bVar1 = moby->state;
  pvVar4 = moby->pVar;
  uVar13 = ZEXT48(pvVar4);
  bVar14 = (bVar1 == 0xffffffff) << 1;
  if (bVar1 == 0) {
    if (-1 < (int)(uint)bVar1) {
      *(undefined1 *)((int)pvVar4 + 0x29) = 0;
      (moby->rotation).x = (moby->rotation).x * (float)0x3f333333;
      (moby->rotation).y = (moby->rotation).y * (float)0x3f333333;
      iVar9 = mobyutil::MB_damage(moby,0x330001,0);
      if (iVar9 != 0) {
        libc::printf("Moby class %d UID:%d  Damage Received: %f\n",moby->oClass,moby->uid,
                     (double)*(float *)(iVar9 + 0x2c));
      }
      iVar10 = mobyutil::MB_HandleDamage(moby,iVar9,uVar13 + 0x20,0,local_80,0,0,4);
      if ((0 < iVar10) && (iVar10 < 3)) {
        *(undefined4 *)((int)pvVar4 + 0x20) = 0;
      }
      lVar12 = uVar13 + 0x60;
      if (1 < local_80[0]) {
        uVar11 = (int)*(uint *)((int)pvVar4 + 0x20) >> 0x1f;
        uVar5 = (int)*(uint *)(iVar9 + 0x2c) >> 0x1f;
        fVar2 = *(float *)(iVar9 + 0x2c);
        if ((int)((uVar5 >> 1 ^ *(uint *)(iVar9 + 0x2c)) - uVar5) <
            (int)((uVar11 >> 1 ^ *(uint *)((int)pvVar4 + 0x20)) - uVar11)) {
          auVar21 = ZEXT416(0xffffffff);
          auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          *(undefined1 *)((int)pvVar4 + 0x67) = 0xfa;
          auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          *(float *)((int)pvVar4 + 0x20) = *(float *)((int)pvVar4 + 0x20) - fVar2;
          auVar21 = loadVectorLeftIndexed(4,0x22c590);
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = vectorSplatHalfWord(auVar21,1);
          uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x26,uVar13);
          *(undefined2 *)((int)pvVar4 + 0x26) = uVar6;
          mobyutil::MB_UpdateLightsTransition(moby,lVar12);
          dVar19 = -0.03490658476948738;
          dVar17 = 0.03490658476948738;
          dVar15 = (double)mobyutil::MB_randRangeFloat(-0.034906585,0.034906585);
          (moby->rotation).x = (float)dVar15;
          dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar17);
          (moby->rotation).y = (float)dVar15;
        }
        else {
          *(undefined4 *)((int)pvVar4 + 0x20) = 0;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
          *(undefined1 *)((int)pvVar4 + 0x67) = 0x78;
          mobyutil::MB_UpdateLightsTransition(moby,lVar12);
          *(undefined4 *)((int)pvVar4 + 0x70) = 0;
          mobyupdate_helpers::M1261_0022bb60(moby,uVar13);
          mobyupdate_helpers::M1261_0022b928(moby);
          sound::PlayMobySound(0,0,moby);
          moby->state = '\x01';
        }
      }
      moby->damage = -1;
      mobyutil::MB_ColorDyingMoby(moby,lVar12);
    }
  }
  else if (bVar1 < 2) {
    uVar7._0_4_ = (moby->pos).x;
    uVar7._4_4_ = (moby->pos).y;
    fVar3 = (moby->pos).w;
    uVar18 = 0x3ff0000000000000;
    fVar2 = (moby->pos).z;
    dVar16 = (double)DAT_007750e4;
    dVar19 = (double)DAT_007750e8;
    dVar15 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0x70));
    dVar20 = 0.5;
    auVar21 = loadVectorLeftIndexed(0x14,0x22c590);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar27 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)DAT_007750e0 + 0.5));
    local_78 = (longlong)iVar9;
    dVar17 = (double)fastfunc::FastIntToDouble(iVar9);
    fVar28 = mobyutil::Lerp((float)dVar16,(float)dVar19,(float)(dVar15 / dVar17));
    uVar8 = collproc::CollMobySphere((double)fVar28,local_90);
    local_e8 = CONCAT44(fVar2 + 1.0,fVar3);
    mobyutil::MB_DamageMobyList
              ((double)DAT_007750ec,uVar18,uVar18,moby,&PTR_DAT_00770000,uVar7,local_e8,
               &DAT_00a14a00,uVar8,0,&DAT_00830001);
    auVar21 = ZEXT416(0xffffffff);
    auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar21 = ZEXT416(0xffffffff);
    auVar24 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar23 = loadVectorLeftIndexed(0x50e0,0x770000);
    auVar21 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar23,0);
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar23 = loadVectorLeftIndexed(0x70,uVar13);
    auVar25 = loadVectorRightIndexed(0x80,uVar13);
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar23 = vectorConvertFromSignedFixedPointWord(auVar23 | auVar25,0);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar27,auVar21);
    auVar21 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = vectorMultiplyAddFloatingPoint(auVar26,auVar22,auVar24);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanFloatingPoint
              (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
               auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
    if ((bool)(bVar14 >> 1 & 1)) {
      uVar11 = (uint)(byte)moby->alpha * 8 - (uint)(byte)moby->alpha;
      moby->alpha = (char)((int)uVar11 >> 3) + ((int)uVar11 < 0 && (uVar11 & 7) != 0);
    }
    else {
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      mobyupdate_helpers::M1261_0022b928(moby);
    }
    iVar10 = *(int *)((int)pvVar4 + 0x70) + 1;
    *(int *)((int)pvVar4 + 0x70) = iVar10;
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)DAT_007750e0 + dVar20));
    local_78 = (longlong)iVar9;
    if (iVar9 < iVar10) {
      mobyupdate_helpers::M1261_0022b928(moby);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0022caa0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1262_0022caa0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1262_0022caa0(void)

{
  DAT_00775158 = 0x10000;
  return;
}



//==== 0022cae8  ns=mobyupdate_helpers  size=0x344
// sig: undefined M1262_0022cae8(void)
// callers(1): 0022e580 mobyupdate_unsorted::UpdateMoby_1262
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000ffb70 mobyutil::GetGroundZ; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1262_0022cae8(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined8 in_LR;
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
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  dVar21 = 0.5;
  uVar2 = *(uint *)(param_1 + 0x78);
  mobyutil::GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  dVar22 = 0.0;
  dVar7 = (double)(CollOutput.normal.z * CollOutput.normal.z +
                  CollOutput.normal.x * CollOutput.normal.x +
                  CollOutput.normal.y * CollOutput.normal.y);
  if ((float)SQRT(dVar7) == 0.0) {
    *(float *)(uVar2 + 0x200) = CollOutput.normal.x;
    *(float *)(uVar2 + 0x204) = CollOutput.normal.y;
    *(float *)(uVar2 + 0x208) = CollOutput.normal.z;
    fVar1 = CollOutput.normal.w;
    *(undefined4 *)(uVar2 + 0x208) = 0;
    *(undefined4 *)(uVar2 + 0x204) = 0;
    *(undefined4 *)(uVar2 + 0x200) = 0;
  }
  else {
    dVar13 = 1.0 / SQRT(dVar7);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                             (double)(float)(dVar21 * dVar13) + dVar13);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                             (double)(float)(dVar21 * dVar13) + dVar13);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                    (double)(float)(dVar21 * dVar13) + dVar13);
    *(float *)(uVar2 + 0x200) = CollOutput.normal.x * fVar1;
    *(float *)(uVar2 + 0x204) = CollOutput.normal.y * fVar1;
    *(float *)(uVar2 + 0x208) = CollOutput.normal.z * fVar1;
    fVar1 = CollOutput.normal.w;
  }
  *(float *)(uVar2 + 0x20c) = fVar1;
  mobyfunc::GetBonePosition(param_1,0,(ulonglong)uVar2 + 0x1f0);
  dVar7 = 0.01745329238474369;
  dVar13 = 0.0625;
  iVar6 = 0;
  dVar14 = 1.570796251296997;
  dVar15 = 3.141592502593994;
  dVar16 = -3.141592502593994;
  dVar17 = -0.16666656732559204;
  dVar18 = 0.008333025500178337;
  dVar19 = -0.0001980741071747616;
  dVar20 = 2.601886990305502e-06;
  do {
    dVar10 = (double)(float)((double)DAT_007751a4 * dVar7);
    dVar8 = (double)fastfunc::FastIntToDouble(iVar6);
    fVar1 = (float)(dVar10 * (double)(float)(dVar8 * dVar13 - dVar21));
    dVar11 = (double)fVar1;
    dVar8 = (double)fastfunc::FastWrapRot(fVar1,*(float *)(param_1 + 0x48));
    dVar10 = (double)(float)(dVar8 + dVar14);
    dVar8 = (double)(float)(dVar15 - dVar10);
    if (dVar10 - (double)(float)(dVar15 - dVar10) < 0.0) {
      dVar8 = dVar10;
    }
    dVar12 = (double)(float)(dVar16 - dVar10);
    if ((double)(float)(dVar16 - dVar10) - dVar8 < 0.0) {
      dVar12 = dVar8;
    }
    dVar8 = (double)(float)(dVar12 * dVar12);
    dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar12));
    dVar10 = (double)(float)(dVar8 * dVar9);
    dVar12 = (double)(float)((double)(float)(dVar8 * dVar10) * dVar20 +
                            (double)(float)(dVar10 * dVar19 +
                                           (double)(float)(dVar9 * dVar18 +
                                                          (double)(float)((double)(float)(dVar8 * 
                                                  dVar12) * dVar17 + dVar12))));
    dVar10 = (double)fastfunc::FastWrapRot((float)dVar11,*(float *)(param_1 + 0x48));
    iVar4 = iVar6 * 0x10;
    pfVar5 = (float *)(iVar4 + uVar2 + 0x210);
    dVar8 = (double)(float)(dVar15 - dVar10);
    if (dVar10 - (double)(float)(dVar15 - dVar10) < 0.0) {
      dVar8 = dVar10;
    }
    dVar11 = (double)(float)(dVar16 - dVar10);
    if ((double)(float)(dVar16 - dVar10) - dVar8 < 0.0) {
      dVar11 = dVar8;
    }
    dVar8 = (double)(float)(dVar11 * dVar11);
    *pfVar5 = (float)(dVar12 * dVar21 + (double)*(float *)(uVar2 + 0x1f0));
    dVar12 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar11));
    dVar10 = (double)(float)(dVar8 * dVar12);
    pfVar5[1] = (float)((double)(float)((double)(float)(dVar8 * dVar10) * dVar20 +
                                       (double)(float)(dVar10 * dVar19 +
                                                      (double)(float)(dVar12 * dVar18 +
                                                                     (double)(float)((double)(float)
                                                  (dVar8 * dVar11) * dVar17 + dVar11)))) * dVar21 +
                       (double)*(float *)(uVar2 + 500));
    pfVar5[2] = *(float *)(uVar2 + 0x1f8);
    pfVar5[3] = *(float *)(uVar2 + 0x1fc);
    dVar8 = dVar22;
    if ((iVar6 != 0) && (iVar6 != 0xf)) {
      dVar8 = 1.0;
    }
    iVar6 = iVar6 + 1;
    *(float *)(iVar4 + uVar2 + 0x21c) = (float)dVar8;
  } while (iVar6 < 0x10);
  auVar25 = ZEXT416(0xffffffff);
  auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
  auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
  auVar25 = loadVectorLeftIndexed(0x51a8,0x770000);
  auVar24 = loadVectorLeftIndexed(in_LR,0x22cab8);
  auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
  auVar25 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar25 = vectorAddFloatingPoint
                      (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar26);
  auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
  auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
  auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1fc,
                     (ulonglong)uVar2);
  *(undefined4 *)(uVar2 + 0x1fc & 0xfffffffc) = uVar3;
  return;
}



//==== 0022ce50  ns=mobyupdate_helpers  size=0x4d0
// sig: undefined M1262_0022ce50(void)
// callers(1): 0022d358 mobyupdate_helpers::M1262_0022d358
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1262_0022ce50(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [32];
  
  iVar6 = *(int *)(param_1 + 0x78);
  iVar5 = 0;
  dVar8 = 0.0;
  dVar9 = 1.0;
  do {
    uVar1 = (int)*(uint *)(iVar6 + 0x21c) >> 0x1f;
    if (((0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x21c)) - uVar1)) ||
        (uVar1 = (int)*(uint *)(iVar6 + 0x22c) >> 0x1f,
        0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x22c)) - uVar1))) &&
       (dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9),
       dVar7 <= (double)DAT_00775224)) {
      mobyutil::MB_randRot();
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat(DAT_00775214,DAT_00775218);
      mobyutil::MB_randRangeFloat(DAT_00775214,DAT_00775218);
      mobyutil::MB_randRangeFloat(DAT_00775214,DAT_00775218);
      mobyutil::MB_randRangeFloat(DAT_00775214,DAT_00775218);
      mobyutil::MB_randRangeFloat(DAT_0077521c,DAT_00775220);
      mobyutil::MB_randRangeFloat(DAT_0077521c,DAT_00775220);
      dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_007751fc,DAT_00775200);
      uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_00775204,DAT_00775208);
      uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_0077520c,DAT_00775210);
      uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      partupd::SpawnPart_2(local_d0,local_c0,local_b0,DAT_007751ec,DAT_007751f0,uVar2,uVar3,uVar4);
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar5 < 0xf);
  return;
}



//==== 0022d358  ns=mobyupdate_helpers  size=0x568
// sig: undefined M1262_0022d358(void)
// callers(1): 0022d900 mobyupdate_helpers::M1262_0022d900
// callees(7): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 0010581c mobyutil::SetCollDamIn; 00109af0 mobyutil::Delt; 0022ce50 mobyupdate_helpers::M1262_0022ce50; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1262_0022d358(MobyInstance *param_1)

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
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar23;
  double extraout_f1;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar32;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar38;
  undefined1 auVar39 [16];
  float fVar40;
  
  uVar17 = ZEXT48(&stack0x00000000);
  puVar14 = (ulonglong *)(uVar17 - 0x160);
  *puVar14 = uVar17;
  puVar14[0x2e] = in_LR;
  puVar14[0x24] = in_f24;
  puVar14[0x25] = in_f25;
  puVar14[0x26] = in_f26;
  puVar14[0x27] = in_f27;
  puVar14[0x28] = in_f28;
  puVar14[0x29] = in_f29;
  puVar14[0x2a] = in_f30;
  puVar14[0x2b] = in_f31;
  puVar14[0x23] = unaff_r31;
  puVar14[0x22] = unaff_r30;
  pvVar11 = param_1->pVar;
  uVar22 = ZEXT48(pvVar11);
  puVar14[0x21] = unaff_r29;
  puVar14[0x20] = unaff_r28;
  puVar14[0x1f] = unaff_r27;
  puVar14[0x1e] = unaff_r26;
  puVar14[0x1d] = unaff_r25;
  uVar18 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar11 + 0x1fc));
  *(undefined4 *)(puVar14 + 0x1c) = uVar18;
  fastfunc::FastDecTimerS32(uVar17 - 0x80);
  iVar21 = *(int *)(puVar14 + 0x1c);
  auVar39 = loadVectorLeftIndexed(0xe0,uVar17 - 0x160);
  auVar39 = vectorConvertFromSignedFixedPointWord(auVar39,0);
  auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar18 = storeVectorElementWordIndexed
                     (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1fc,uVar22);
  *(undefined4 *)((int)pvVar11 + 0x1fcU & 0xfffffffc) = uVar18;
  if (iVar21 != 0) {
    if (iVar21 == 0x14) {
      iVar21 = 0;
      uVar20 = uVar22;
      do {
        uVar12 = *(uint *)((int)uVar20 + 0x21c);
        uVar13 = (int)uVar12 >> 0x1f;
        if (0x3f7fffff < (int)((uVar13 >> 1 ^ uVar12) - uVar13)) {
          *(undefined4 *)((int)uVar20 + 0x21c) = 0x3f7ae148;
        }
        iVar21 = iVar21 + 1;
        uVar20 = uVar20 + 0x10;
      } while (iVar21 < 0x10);
    }
    iVar21 = 0;
    dVar32 = 0.0;
    dVar33 = 0.3499999940395355;
    dVar38 = 1.0;
    dVar34 = 3.0;
    dVar35 = 4.0;
    dVar36 = 2.0;
    uVar20 = uVar22;
    do {
      iVar15 = (int)uVar20;
      fVar1 = *(float *)(iVar15 + 0x210) - *(float *)((int)pvVar11 + 0x1f0);
      *(float *)(puVar14 + 0xe) = fVar1;
      fVar5 = *(float *)(iVar15 + 0x214) - *(float *)((int)pvVar11 + 500);
      fVar40 = DAT_007751a0 * mobyutil::g_FrameTime;
      *(float *)((int)puVar14 + 0x74) = fVar5;
      dVar27 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5);
      *(float *)(puVar14 + 0xf) = *(float *)(iVar15 + 0x218) - *(float *)((int)pvVar11 + 0x1f8);
      uVar18 = *(undefined4 *)(iVar15 + 0x21c);
      *(undefined4 *)(puVar14 + 0xf) = 0;
      *(undefined4 *)((int)puVar14 + 0x7c) = uVar18;
      *(undefined4 *)(puVar14 + 0xf) = 0;
      fVar2 = (param_1->pos).y;
      fVar3 = (param_1->pos).x;
      fVar4 = (param_1->pos).z;
      fVar40 = (float)((double)fVar40 / dVar27);
      dVar23 = (double)(fVar1 * fVar40);
      dVar25 = (double)(fVar5 * fVar40);
      dVar37 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar37 = dVar23;
      }
      dVar26 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar26 = dVar25;
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar37 = dVar23;
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar26 = dVar25;
      }
      *(float *)(puVar14 + 0xe) = (float)dVar37;
      *(float *)((int)puVar14 + 0x74) = (float)dVar26;
      fVar40 = (float)((double)*(float *)(iVar15 + 0x210) + dVar37);
      *(float *)(puVar14 + 0xe) = fVar40;
      fVar1 = (float)((double)*(float *)(iVar15 + 0x214) + dVar26);
      *(float *)((int)puVar14 + 0x74) = fVar1;
      fVar5 = *(float *)(iVar15 + 0x218);
      *(float *)(puVar14 + 0xf) = fVar5;
      *(undefined4 *)((int)puVar14 + 0x7c) = *(undefined4 *)(iVar15 + 0x21c);
      fVar6 = *(float *)((int)pvVar11 + 0x204);
      fVar7 = *(float *)((int)pvVar11 + 0x200);
      fVar8 = *(float *)((int)pvVar11 + 0x208);
      dVar25 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(iVar15 + 0x210);
      *(undefined4 *)((int)puVar14 + 0x84) = *(undefined4 *)(iVar15 + 0x214);
      fVar9 = *(float *)(iVar15 + 0x218);
      *(float *)(puVar14 + 0x11) = fVar9;
      *(undefined4 *)((int)puVar14 + 0x8c) = *(undefined4 *)(iVar15 + 0x21c);
      *(float *)(puVar14 + 0x11) = (float)((double)fVar9 + dVar38);
      *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)(iVar15 + 0x210);
      *(undefined4 *)((int)puVar14 + 0x94) = *(undefined4 *)(iVar15 + 0x214);
      fVar9 = *(float *)(iVar15 + 0x218);
      *(float *)(puVar14 + 0x13) = fVar9;
      *(undefined4 *)((int)puVar14 + 0x9c) = *(undefined4 *)(iVar15 + 0x21c);
      *(float *)(puVar14 + 0x13) = (float)((double)fVar9 - dVar34);
      dVar23 = (double)(fVar8 * (float)((double)(float)(-(double)((fVar5 - fVar4) * fVar8 +
                                                                 (fVar40 - fVar3) * fVar7 +
                                                                 (fVar1 - fVar2) * fVar6) + dVar33)
                                       / dVar25));
      dVar37 = dVar32;
      if (dVar32 - dVar25 < 0.0) {
        dVar37 = dVar23;
      }
      if (dVar25 - dVar32 < 0.0) {
        dVar37 = dVar23;
      }
      iVar19 = collproc::CollLine(uVar17 - 0xe0,uVar17 - 0xd0,2,0,0);
      dVar23 = extraout_f1;
      if (iVar19 != 0) {
        dVar23 = (double)*(float *)(puVar14 + 0xf);
        if (dVar37 < dVar23) {
          fVar40 = mobyutil::Delt((float)((double)CollOutput.ip.z + dVar33),
                                  (float)((double)mobyutil::g_FrameTime * dVar35),
                                  (float *)(puVar14 + 0xf));
          dVar23 = (double)fVar40;
        }
      }
      uVar12 = (int)*(uint *)(iVar15 + 0x21c) >> 0x1f;
      if (((int)((uVar12 >> 1 ^ *(uint *)(iVar15 + 0x21c)) - uVar12) < 0x3f800000) ||
         (iVar19 = collproc::CollLine(dVar23,uVar20 + 0x210,uVar17 - 0xf0,2,0,0), iVar19 == 0)) {
        uVar12 = (int)*(uint *)((int)puVar14 + 0x7c) >> 0x1f;
        if ((int)((uVar12 >> 1 ^ *(uint *)((int)puVar14 + 0x7c)) - uVar12) < 0x3f800000) {
          mobyutil::Delt((float)dVar32,(float)((double)mobyutil::g_FrameTime * dVar36),
                         (float *)((int)puVar14 + 0x7c));
        }
      }
      else {
        *(undefined4 *)((int)puVar14 + 0x7c) = 0x3f7ae148;
      }
      iVar21 = iVar21 + 1;
      *(undefined4 *)(iVar15 + 0x210) = *(undefined4 *)(puVar14 + 0xe);
      *(undefined4 *)(iVar15 + 0x214) = *(undefined4 *)((int)puVar14 + 0x74);
      *(undefined4 *)(iVar15 + 0x218) = *(undefined4 *)(puVar14 + 0xf);
      *(undefined4 *)(iVar15 + 0x21c) = *(undefined4 *)((int)puVar14 + 0x7c);
      uVar20 = uVar20 + 0x10;
    } while (iVar21 < 0x10);
    iVar21 = 0;
    dVar32 = 1.570796251296997;
    dVar33 = 3.141592502593994;
    dVar34 = -3.141592502593994;
    dVar35 = -0.16666656732559204;
    dVar36 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar23 = 2.601886990305502e-06;
    do {
      uVar12 = *(uint *)((int)uVar22 + 0x21c);
      uVar13 = (int)uVar12 >> 0x1f;
      if (0x3f7ae147 < (int)((uVar13 >> 1 ^ uVar12) - uVar13)) {
        uVar12 = *(uint *)((int)uVar22 + 0x22c);
        uVar13 = (int)uVar12 >> 0x1f;
        uVar16 = uVar13 >> 1;
        if (0x3f7ae147 < (int)((uVar16 ^ uVar12) - uVar13)) {
          dVar27 = (double)(param_1->rotation).z;
          dVar26 = (double)(float)(dVar27 + dVar32);
          *(undefined4 *)(puVar14 + 0x15) = 0x3f800000;
          *(undefined4 *)((int)puVar14 + 0xac) = 0x45afdf66;
          dVar25 = (double)(float)(dVar33 - dVar27);
          if (dVar27 - (double)(float)(dVar33 - dVar27) < 0.0) {
            dVar25 = dVar27;
          }
          dVar28 = (double)(float)(dVar33 - dVar26);
          if (dVar26 - (double)(float)(dVar33 - dVar26) < 0.0) {
            dVar28 = dVar26;
          }
          dVar24 = (double)(float)(dVar34 - dVar27);
          if ((double)(float)(dVar34 - dVar27) - dVar25 < 0.0) {
            dVar24 = dVar25;
          }
          dVar25 = (double)(float)(dVar34 - dVar26);
          if ((double)(float)(dVar34 - dVar26) - dVar28 < 0.0) {
            dVar25 = dVar28;
          }
          dVar27 = (double)(float)(dVar24 * dVar24);
          dVar26 = (double)(float)(dVar25 * dVar25);
          dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar24));
          dVar28 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar25));
          dVar29 = (double)(float)(dVar27 * dVar30);
          dVar31 = (double)(float)(dVar26 * dVar28);
          *(float *)((int)puVar14 + 0xa4) =
               (float)((double)(float)(dVar27 * dVar29) * dVar23 +
                      (double)(float)(dVar29 * dVar37 +
                                     (double)(float)(dVar30 * dVar36 +
                                                    (double)(float)((double)(float)(dVar27 * dVar24)
                                                                    * dVar35 + dVar24))));
          *(float *)(puVar14 + 0x14) =
               (float)((double)(float)(dVar26 * dVar31) * dVar23 +
                      (double)(float)(dVar31 * dVar37 +
                                     (double)(float)(dVar28 * dVar36 +
                                                    (double)(float)((double)(float)(dVar26 * dVar25)
                                                                    * dVar35 + dVar25))));
          mobyutil::SetCollDamIn(dVar38,uVar17 - 0xb0,param_1,0x10001,uVar16,uVar17 - 0xc0);
          *(undefined1 *)(puVar14 + 0x19) = 0;
          MVar10 = param_1->oClass;
          *(undefined1 *)((int)puVar14 + 0xc9) = 1;
          *(MOBY_OCLASSES *)((int)puVar14 + 0xca) = MVar10;
          collproc::CollLine(uVar22 + 0x210,uVar22 + 0x220,0,param_1,uVar17 - 0xb0);
        }
      }
      iVar21 = iVar21 + 1;
      uVar22 = uVar22 + 0x10;
    } while (iVar21 < 0xf);
    RegisterFuncForMoby(&PTR_M1393_0022fcb8_007099e8,param_1);
    M1262_0022ce50(param_1);
  }
  return;
}



//==== 0022d900  ns=mobyupdate_helpers  size=0xbf8
// sig: undefined M1262_0022d900(void)
// callers(1): 0022e580 mobyupdate_unsorted::UpdateMoby_1262
// callees(16): 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000ffb70 mobyutil::GetGroundZ; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 00111ba0 mobyutil::MB_getTargetInArea; 0022d358 mobyupdate_helpers::M1262_0022d358; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1262_0022d900(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyClass *pMVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  f32 fVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  longlong lVar16;
  longlong lVar17;
  longlong lVar21;
  float *pfVar25;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
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
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x170;
  puVar14 = (ulonglong *)lVar17;
  *puVar14 = uVar15;
  puVar14[0x30] = in_LR;
  puVar14[0x2b] = in_f29;
  puVar14[0x2c] = in_f30;
  puVar14[0x2d] = in_f31;
  puVar14[0x2a] = unaff_r31;
  pMVar7 = param_1->pClass;
  puVar14[0x29] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar26 = ZEXT48(pvVar8);
  fVar5 = pMVar7->gScale * DAT_0077517c;
  puVar14[0x28] = unaff_r29;
  param_1->scale = fVar5;
  M1262_0022d358(param_1);
  if (*(int *)((int)pvVar8 + 0x38) != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x184) = uVar18;
    *(undefined4 *)((int)pvVar8 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar26 + 0x184);
  dVar28 = 0.0;
  *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  iVar19 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar20 = mobyutil::MB_HandleDamage
                     (param_1,iVar19,uVar26 + 0x20,0,puVar14 + 0x18,(int)puVar14 + 0xc4,0,4);
  if ((*(int *)(puVar14 + 0x18) != 1) && (param_1->state != '\x10')) {
    if ((iVar19 != 0) &&
       ((*(int *)(iVar19 + 0x20) != 0 && (*(short *)(*(int *)(iVar19 + 0x20) + 0xa6) == 0x4ee)))) {
      *(undefined4 *)((int)puVar14 + 0xc4) = 0;
    }
    fVar5 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar14 + 0xc4);
    *(float *)((int)pvVar8 + 0x20) = fVar5;
    if ((double)fVar5 <= dVar28) {
      iVar20 = 1;
    }
    *(undefined4 *)((int)pvVar8 + 0x80) = 0x2cd;
    *(undefined4 *)((int)pvVar8 + 0x88) = 0x3f333333;
    if (iVar20 < 3) {
      if ((-1 < iVar20) && (0 < iVar20)) {
        param_1->state = '\x10';
        fVar2 = mobyutil::g_FrameTime;
        fVar5 = DAT_0077518c * mobyutil::g_FrameTime;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar8 + 0x78) = fVar5;
        fVar5 = DAT_00775190;
        *(undefined4 *)((int)pvVar8 + 0xb0) = 0x41100000;
        *(undefined4 *)((int)pvVar8 + 0xb4) = 0x41880000;
        *(float *)((int)pvVar8 + 0x7c) = fVar5 * fVar2;
        uVar9 = *(uint *)(iVar19 + 0x10);
        uVar10 = *(uint *)(iVar19 + 0x14);
        dVar31 = ABS((double)*(float *)(iVar19 + 0x10));
        dVar30 = ABS((double)*(float *)(iVar19 + 0x14));
        *(float *)(puVar14 + 0x1a) = (float)(dVar31 - dVar30);
        uVar22 = (ulonglong)(uVar9 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1a) >> 0x1e) & 2 |
                 (ulonglong)(uVar10 >> 0x1d) & 4;
        uVar23 = uVar22 << 2;
        dVar37 = dVar31;
        if ((double)*(float *)(puVar14 + 0x1a) - dVar28 < 0.0) {
          dVar37 = dVar30;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar23);
        if ((double)*(float *)(puVar14 + 0x1a) - dVar28 < 0.0) {
          dVar30 = dVar31;
        }
        fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar31 = dVar28;
        if (dVar28 < dVar37) {
          lVar16 = uVar15 - 0x160;
          lVar21 = uVar15 - 0x78;
          lVar24 = uVar15 - 0x68;
          lVar27 = 2;
          fVar6 = (float)(dVar30 - dVar37) / (float)(dVar30 + dVar37);
          fVar1 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x104) = fVar6;
          *(float *)((int)puVar14 + 0xfc) = fVar6;
          *(float *)(puVar14 + 0x20) = fVar6;
          *(float *)(puVar14 + 0x1f) = fVar6;
          fVar6 = fVar1 * fVar1;
          *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar1;
          *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar6;
          *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar6 * fVar1;
          do {
            *(float *)((int)lVar16 + 0xf8) = *(float *)((int)lVar16 + 0xe8) * fVar6 * fVar6;
            iVar19 = (int)lVar21;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar15 - 0x78;
          uVar23 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar21 = lVar24;
          do {
            pfVar25 = (float *)uVar23;
            fVar6 = pfVar25[1];
            uVar23 = uVar23 + 8;
            *(float *)((int)lVar16 + 0xf8) = *(float *)((int)lVar16 + 0xf8) * *pfVar25;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar21 = 2;
          lVar16 = lVar17;
          dVar30 = dVar28;
          do {
            iVar19 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            iVar20 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar19 + 0xf8)) +
                              *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                             *(float *)(iVar20 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar31 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar2);
        }
        mobyutil::MB_StartKick(dVar31,param_1,uVar26 + 0x60,uVar23,8,1,0);
        *(undefined1 *)((int)pvVar8 + 0x117) = 0xfa;
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar20 < 0xb) {
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      param_1->state = '\x0f';
      fVar2 = mobyutil::g_FrameTime;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = loadVectorLeftIndexed(0xc,0x22d8c0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      fVar5 = DAT_00775184 * mobyutil::g_FrameTime;
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorSplatHalfWord(auVar39,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x26,uVar26);
      *(undefined2 *)((int)pvVar8 + 0x26) = uVar13;
      *(float *)((int)pvVar8 + 0x78) = fVar5;
      fVar5 = DAT_00775188;
      *(undefined4 *)((int)pvVar8 + 0xb0) = 0x41000000;
      *(undefined4 *)((int)pvVar8 + 0xb4) = 0x41700000;
      *(float *)((int)pvVar8 + 0x7c) = fVar5 * fVar2;
      uVar9 = *(uint *)(iVar19 + 0x10);
      uVar10 = *(uint *)(iVar19 + 0x14);
      dVar31 = ABS((double)*(float *)(iVar19 + 0x10));
      dVar30 = ABS((double)*(float *)(iVar19 + 0x14));
      *(float *)((int)puVar14 + 0xd4) = (float)(dVar31 - dVar30);
      uVar22 = (ulonglong)(uVar9 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xd4) >> 0x1e) & 2 |
               (ulonglong)(uVar10 >> 0x1d) & 4;
      uVar23 = uVar22 << 2;
      dVar37 = dVar31;
      if ((double)*(float *)((int)puVar14 + 0xd4) - dVar28 < 0.0) {
        dVar37 = dVar30;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar23);
      if ((double)*(float *)((int)puVar14 + 0xd4) - dVar28 < 0.0) {
        dVar30 = dVar31;
      }
      fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar31 = dVar28;
      if (dVar28 < dVar37) {
        lVar16 = uVar15 - 0x160;
        lVar24 = uVar15 - 0x48;
        lVar21 = uVar15 - 0x58;
        lVar27 = 2;
        fVar6 = (float)(dVar30 - dVar37) / (float)(dVar30 + dVar37);
        fVar1 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x124) = fVar6;
        *(float *)((int)puVar14 + 0x11c) = fVar6;
        *(float *)(puVar14 + 0x24) = fVar6;
        *(float *)(puVar14 + 0x23) = fVar6;
        fVar6 = fVar1 * fVar1;
        *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar1;
        *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar6;
        *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar6 * fVar1;
        do {
          *(float *)((int)lVar16 + 0x118) = *(float *)((int)lVar16 + 0x108) * fVar6 * fVar6;
          iVar19 = (int)lVar21;
          lVar21 = lVar21 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar15 - 0x58;
        uVar23 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar21 = lVar24;
        do {
          pfVar25 = (float *)uVar23;
          fVar6 = pfVar25[1];
          uVar23 = uVar23 + 8;
          *(float *)((int)lVar16 + 0x118) = *(float *)((int)lVar16 + 0x118) * *pfVar25;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar21 = 2;
        lVar16 = lVar17;
        dVar30 = dVar28;
        do {
          iVar19 = (int)lVar16;
          iVar20 = (int)lVar24;
          lVar16 = lVar16 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar19 + 0x118)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar31 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar2);
      }
      mobyutil::MB_StartKick(dVar31,param_1,uVar26 + 0x60,uVar23,7,1,0);
      *(undefined1 *)((int)pvVar8 + 0x117) = 0xfa;
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar26 + 0x110);
  if (*(int *)((int)pvVar8 + 0x184) == 0) {
    uVar18 = *(undefined4 *)((int)pvVar8 + 0x19c);
  }
  else {
    uVar18 = *(undefined4 *)((int)pvVar8 + 0x1a0);
  }
  *(undefined4 *)((int)pvVar8 + 400) = uVar18;
  pSVar12 = Splines[*(int *)((int)pvVar8 + 0x180)];
  iVar19 = mobyutil::MB_getTargetInArea
                     (param_1,uVar26 + 0x120,pSVar12,0,0,pSVar12->points,pSVar12->cnt);
  if (iVar19 != 2) {
    fVar5 = *(float *)((int)pvVar8 + 0x174) - *(float *)((int)pvVar8 + 0x124);
    fVar2 = *(float *)((int)pvVar8 + 0x170) - *(float *)((int)pvVar8 + 0x120);
    if ((*(float *)((int)pvVar8 + 400) < SQRT(fVar2 * fVar2 + fVar5 * fVar5)) ||
       (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar8 + 0x128)))) {
      *(undefined4 *)((int)pvVar8 + 0x164) = 2;
    }
    if ((*(int *)((int)pvVar8 + 0x1a4) == -1) ||
       (iVar19 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)((int)pvVar8 + 0x120),(longlong)*(int *)((int)pvVar8 + 0x1a4)),
       iVar19 != 0)) {
      *(undefined4 *)((int)pvVar8 + 0x1a4) = 0xffffffff;
    }
    else {
      *(undefined4 *)((int)pvVar8 + 0x164) = 2;
    }
  }
  if (*(int *)((int)pvVar8 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar8 + 0x160) = g_heroMobyPtr;
  }
  dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&param_1->pos,0);
  if (dVar30 == dVar28) {
    dVar37 = (double)(param_1->pos).z;
    if (param_1->state < 0xf) {
      fVar5 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar8 + 0x68));
      *(float *)((int)pvVar8 + 0x68) = fVar5;
      fVar5 = (param_1->pos).z + fVar5;
      dVar37 = (double)fVar5;
      (param_1->pos).z = fVar5;
    }
LAB_0022e43c:
    fVar11 = (param_1->pos).x;
    uVar9 = (int)fVar11 >> 0x1f;
    iVar19 = (uVar9 >> 1 ^ (uint)fVar11) - uVar9;
    if ((((iVar19 < 0x40000000) || (0x447f4000 < iVar19)) ||
        (fVar11 = (param_1->pos).y, uVar9 = (int)fVar11 >> 0x1f,
        iVar19 = (uVar9 >> 1 ^ (uint)fVar11) - uVar9, iVar19 < 0x40000000)) ||
       (((0x447f4000 < iVar19 || (dVar37 < 2.0)) || (1021.0 < dVar37)))) {
      mobyfunc::DeleteMoby(param_1);
    }
  }
  else {
    iVar19 = collproc::CollHotspot();
    fVar6 = CollOutput.normal.z;
    dVar37 = (double)(param_1->pos).z;
    fVar5 = (param_1->pos).x;
    fVar2 = (param_1->pos).y;
    if (iVar19 < 4) {
      if (iVar19 < 2) {
        if (iVar19 < 0) {
LAB_0022e148:
          if (param_1->state < 0xf) {
            dVar35 = (double)CollOutput.normal.y;
            dVar34 = (double)CollOutput.normal.x;
            dVar33 = (double)CollOutput.normal.z;
            dVar32 = ABS(dVar33);
            dVar36 = (double)(float)(dVar34 * dVar34 + (double)(float)(dVar35 * dVar35));
            fVar1 = (float)SQRT(dVar36);
            dVar38 = ABS((double)fVar1);
            *(float *)(puVar14 + 0x19) = fVar1;
            *(float *)((int)puVar14 + 0xcc) = (float)(dVar32 - dVar38);
            uVar26 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0xcc) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1d) & 4;
            dVar31 = dVar32;
            if ((double)*(float *)((int)puVar14 + 0xcc) - dVar28 < 0.0) {
              dVar31 = dVar38;
            }
            fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
            dVar38 = ABS((double)*(float *)(puVar14 + 0x19));
            if ((double)*(float *)((int)puVar14 + 0xcc) - dVar28 < 0.0) {
              dVar38 = dVar32;
            }
            fVar1 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
            dVar32 = dVar28;
            if (dVar28 < dVar31) {
              lVar16 = uVar15 - 0x160;
              lVar21 = uVar15 - 0x98;
              lVar24 = uVar15 - 0x88;
              lVar27 = 2;
              fVar3 = (float)(dVar38 - dVar31) / (float)(dVar38 + dVar31);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar14 + 0xe4) = fVar3;
              *(float *)((int)puVar14 + 0xdc) = fVar3;
              *(float *)(puVar14 + 0x1c) = fVar3;
              *(float *)(puVar14 + 0x1b) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar14 + 0xdc) = *(float *)((int)puVar14 + 0xdc) * fVar4;
              *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x1c) * fVar3;
              *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xe4) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar16 + 0xd8) = *(float *)((int)lVar16 + 200) * fVar3 * fVar3;
                iVar19 = (int)lVar21;
                lVar16 = lVar16 + 8;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
                lVar24 = lVar24 + 8;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
              lVar27 = 4;
              lVar24 = uVar15 - 0x98;
              pfVar25 = (float *)&DAT_007358e0;
              lVar16 = lVar17;
              lVar21 = lVar24;
              do {
                fVar3 = *pfVar25;
                fVar4 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar16 + 0xd8) = *(float *)((int)lVar16 + 0xd8) * fVar3;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
                lVar21 = lVar21 + 8;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
              lVar16 = 2;
              dVar31 = dVar28;
              do {
                iVar19 = (int)lVar17;
                lVar17 = lVar17 + 0x10;
                iVar20 = (int)lVar24;
                lVar24 = lVar24 + 0x10;
                dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar19 + 0xd8)) +
                                  *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                 *(float *)(iVar20 + 0xc));
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              dVar32 = (double)((float)(dVar31 + 0.7853981852531433) * fVar6 + fVar1);
            }
            if (0.6981316804885864 < dVar32) {
              dVar32 = (double)SQRT((float)(dVar33 * dVar33 + dVar36));
              dVar36 = (double)(float)(0.05000000074505806 / dVar32);
              dVar31 = dVar28;
              if (dVar28 - dVar32 < 0.0) {
                dVar31 = (double)(float)(dVar33 * dVar36);
              }
              dVar38 = dVar28;
              if (dVar28 - dVar32 < 0.0) {
                dVar38 = (double)(float)(dVar35 * dVar36);
              }
              dVar29 = dVar28;
              if (dVar28 - dVar32 < 0.0) {
                dVar29 = (double)(float)(dVar34 * dVar36);
              }
              if (dVar32 - dVar28 < 0.0) {
                dVar31 = (double)(float)(dVar33 * dVar36);
              }
              if (dVar32 - dVar28 < 0.0) {
                dVar38 = (double)(float)(dVar35 * dVar36);
              }
              if (dVar32 - dVar28 < 0.0) {
                dVar29 = (double)(float)(dVar34 * dVar36);
              }
              dVar31 = dVar37 + dVar31;
              dVar37 = (double)(float)dVar31;
              (param_1->pos).z = (float)dVar31;
              (param_1->pos).y = (float)((double)fVar2 + dVar38);
              (param_1->pos).x = (float)((double)fVar5 + dVar29);
            }
            if (dVar37 <= dVar30) {
              if (dVar37 < dVar30) {
                dVar28 = dVar37 + 0.05000000074505806;
                dVar37 = (double)(float)dVar28;
                (param_1->pos).z = (float)dVar28;
              }
            }
            else {
              fVar5 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar8 + 0x68));
              *(float *)((int)pvVar8 + 0x68) = fVar5;
              fVar5 = (param_1->pos).z + fVar5;
              dVar37 = (double)fVar5;
              (param_1->pos).z = fVar5;
              if (dVar37 < dVar30) {
                *(undefined4 *)((int)pvVar8 + 0x68) = 0;
                (param_1->pos).z = (float)dVar30;
                dVar37 = dVar30;
              }
            }
          }
          goto LAB_0022e43c;
        }
      }
      else if (iVar19 < 3) goto LAB_0022e148;
    }
    else if (iVar19 < 0xc) {
      if (iVar19 < 0xb) goto LAB_0022e148;
    }
    else if (iVar19 != 0xd) goto LAB_0022e148;
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    puVar14[0x12] = 0xffffffffffffffff;
    puVar14[0x14] = 1;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    mobyutil::MB_genericExplosion
              (dVar28,dVar28,0x4010000000000000,0x4000000000000000,0x4022000000000000,
               0x3ff0000000000000,0x402e000000000000,param_1,&DAT_007350c0,0,&DAT_0022d8c0,1,10,3,
               0x10);
    mobyfunc::DeleteMoby(param_1);
  }
  return;
}



//==== 0022e580  ns=mobyupdate_unsorted  size=0x1720
// sig: undefined UpdateMoby_1262(MobyInstance * moby)
// callers(0): 
// callees(26): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc948 mobyutil::MB_SplineIntersect; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 0010581c mobyutil::SetCollDamIn; 00105d58 mobyutil::MB_CollLineMulti; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00119a18 mobyfunc::DoManipulator; 0022cae8 mobyupdate_helpers::M1262_0022cae8; 0022d900 mobyupdate_helpers::M1262_0022d900; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005e8338 FUN_005e8338

/* Moby 1262 */

void mobyupdate_unsorted::UpdateMoby_1262(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  longlong lVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  float local_160;
  float local_15c;
  undefined4 local_158;
  undefined1 auStack_150 [16];
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined1 auStack_120 [16];
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  f32 local_f0;
  f32 local_ec;
  float local_e8;
  f32 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [24];
  undefined1 local_98;
  undefined1 local_97;
  MOBY_OCLASSES local_96;
  undefined1 auStack_80 [24];
  undefined1 local_68;
  undefined1 local_67;
  MOBY_OCLASSES local_66;
  longlong local_50;
  
  lVar13 = (longlong)(int)moby;
  pvVar4 = moby->pVar;
  uVar18 = ZEXT48(pvVar4);
  mobyupdate_helpers::M1262_0022d900(lVar13);
  iVar5 = *(int *)((int)pvVar4 + 0x160);
  mobyfunc::DoManipulator(0x4004000000000000,moby,1,(Manipulator *)((int)pvVar4 + 0x400));
  if ((moby->enabled != '\0') &&
     (fVar29 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar29 * fVar29) < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x16';
  }
  bVar1 = moby->state;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      if (((moby->field43_0x70 & 2U) != 0) &&
         (moby->state = moby->setByGroup, moby->animationId != '\0')) {
        local_50 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar1 == 5) {
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
      fVar29 = mobyutil::OrganicDeltAng
                         ((float)dVar19,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar4 + 0x188));
      mobyfunc::GetBonePosition((double)fVar29,lVar13,0,&local_190);
      dVar19 = (double)mobyfunc::BlendAnimFrame(moby);
      if ((9.0 <= dVar19) && (dVar19 <= 15.0)) {
        mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_b0,lVar13,1,&DAT_0022e4f8,local_170);
        local_96 = moby->oClass;
        local_98 = 0;
        local_97 = 1;
        mobyutil::MB_CollLineMulti
                  (&local_190,local_180,uVar18 + 0x1e0,local_180,lVar13,auStack_b0,5);
      }
      *(undefined4 *)((int)pvVar4 + 0x1e0) = local_190;
      *(undefined4 *)((int)pvVar4 + 0x1e4) = local_18c;
      *(undefined4 *)((int)pvVar4 + 0x1e8) = local_188;
      *(undefined4 *)((int)pvVar4 + 0x1ec) = local_184;
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x06';
        moby->setByGroup = '\x01';
        if (moby->animationId != '\x02') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 4) {
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
      fVar29 = mobyutil::OrganicDeltAng
                         ((float)dVar19,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar4 + 0x188));
      iVar15 = fastfunc::FastDecTimerS32((double)fVar29,uVar18 + 0x194);
      if (iVar15 == 0) {
        fVar29 = (moby->pos).y - *(float *)(iVar5 + 0x14);
        fVar3 = (moby->pos).x - *(float *)(iVar5 + 0x10);
        if (DAT_00775198 <= SQRT(fVar3 * fVar3 + fVar29 * fVar29)) {
          if ((*(int *)((int)pvVar4 + 0x184) != 0) &&
             (moby->state = '\v', moby->animationId != '\x01')) {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          mobyfunc::GetBonePosition(lVar13,0,uVar18 + 0x1e0);
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        moby->state = '\x03';
        mobyupdate_helpers::M1262_0022cae8(lVar13);
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 5.5));
        }
      }
    }
    else if (bVar1 == 3) {
      if ((moby->field43_0x70 & 2U) != 0) {
        fVar29 = (moby->pos).y - *(float *)(iVar5 + 0x14);
        fVar3 = (moby->pos).x - *(float *)(iVar5 + 0x10);
        if ((*(int *)((int)pvVar4 + 0x164) == 2) || (15.0 <= SQRT(fVar3 * fVar3 + fVar29 * fVar29)))
        {
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x04') {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 20.5));
          }
          auVar26 = ZEXT416(0xffffffff);
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar26 = loadVectorLeftIndexed(0x5194,0x770000);
          auVar25 = vectorConvertFromSignedFixedPointWord(auVar26,0);
          auVar26 = loadVectorLeftIndexed(0x30,0x22e4f8);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar26 = vectorAddFloatingPoint
                              (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60
                              );
          auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar27);
          auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x194,
                              uVar18);
          *(undefined4 *)((int)pvVar4 + 0x194U & 0xfffffffc) = uVar14;
        }
      }
    }
    else if (bVar1 == 2) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x03';
        mobyupdate_helpers::M1262_0022cae8(lVar13);
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 1) {
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar19,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar4 + 0x188));
      if (*(int *)((int)pvVar4 + 0x164) == 2) {
        if ((*(int *)((int)pvVar4 + 0x184) != 0) &&
           (moby->state = '\v', moby->animationId != '\x01')) {
          local_50 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        fVar29 = (moby->pos).y;
        fVar3 = (moby->pos).x;
        fVar6 = fVar29 - *(float *)(iVar5 + 0x14);
        fVar8 = fVar3 - *(float *)(iVar5 + 0x10);
        dVar19 = (double)SQRT(fVar8 * fVar8 + fVar6 * fVar6);
        if (dVar19 <= (double)DAT_00775198) {
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          dVar24 = (double)(moby->rotation).z;
          dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - fVar3),
                                        (double)(*(float *)(iVar5 + 0x14) - fVar29));
          dVar20 = (double)fastfunc::FastSubRots((float)dVar24,(float)dVar20);
          if ((0.2617993950843811 <= dVar20) || (15.0 <= dVar19)) {
            moby->state = '\a';
            if (moby->animationId != '\x01') {
              local_50 = (longlong)(int)(animationSpeed * 20.5);
              mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
            }
          }
          else {
            moby->state = '\x02';
            if (moby->animationId != '\x03') {
              local_50 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
            }
          }
        }
      }
    }
    else if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar4 + 0x20) = 0x40000000;
      *(undefined2 *)((int)pvVar4 + 0x24) = 2;
      *(undefined1 *)((int)pvVar4 + 0x28) = 1;
      *(undefined4 *)((int)pvVar4 + 0x30) = 0x3fc00000;
      *(undefined1 *)((int)pvVar4 + 0x5a) = 8;
      *(undefined1 *)((int)pvVar4 + 0x58) = 0xc;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar4 + 0xc0));
      *(undefined4 *)((int)pvVar4 + 200) = 0x40000000;
      *(undefined4 *)((int)pvVar4 + 0xcc) = 0x3f000000;
      uVar14 = fastfunc::FastDoubleToInt((double)(DAT_0077517c * 716.8));
      *(undefined4 *)((int)pvVar4 + 0xc0) = uVar14;
      *(float *)((int)pvVar4 + 0xc4) = DAT_0077517c * 0.7;
      dVar19 = (double)mobyutil::MB_randRangeFloat(0.95,1.05);
      *(float *)((int)pvVar4 + 0xe4) =
           (float)((double)(DAT_0077519c * mobyutil::g_FrameTime) * dVar19);
      *(f32 *)((int)pvVar4 + 0x170) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x174) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x178) = (moby->pos).z;
      *(f32 *)((int)pvVar4 + 0x17c) = (moby->pos).w;
      mobyfunc::GetBonePosition(lVar13,0,uVar18 + 0x1e0);
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 0x10) {
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x60));
    if ((uVar16 & 0x160) != 0) {
      mobyutil::MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar13,uVar18 + 0x60,0,1,0xffffffffffffffff,10,3,0x10);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar1 == 0xf) {
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x60));
    if ((uVar16 & 0x40) == 0) {
      if ((uVar16 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      *(undefined1 *)((int)pvVar4 + 0x60) = 0;
      *(undefined1 *)((int)pvVar4 + 0x61) = 0;
      *(undefined1 *)((int)pvVar4 + 0x62) = 0;
      *(undefined1 *)((int)pvVar4 + 99) = 0;
      *(undefined1 *)((int)pvVar4 + 100) = 0;
      *(undefined1 *)((int)pvVar4 + 0x65) = 0;
      *(undefined1 *)((int)pvVar4 + 0x66) = 0;
      *(undefined1 *)((int)pvVar4 + 0x67) = 0;
      *(undefined1 *)((int)pvVar4 + 0x68) = 0;
      *(undefined1 *)((int)pvVar4 + 0x69) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6a) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6b) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6c) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6d) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6e) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6f) = 0;
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 0xd) {
    uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x170) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar4 + 0x174) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar18 + 0x188);
    dVar20 = (double)(moby->rotation).z;
    fVar29 = (float)(dVar20 + 1.570796251296997);
    dVar19 = (double)(float)(3.141592502593994 - dVar20);
    if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
      dVar19 = dVar20;
    }
    fVar3 = 3.1415925 - fVar29;
    if (fVar29 - (3.1415925 - fVar29) < 0.0) {
      fVar3 = fVar29;
    }
    dVar24 = (double)(float)(-3.141592502593994 - dVar20);
    if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
      dVar24 = dVar19;
    }
    fVar6 = -3.1415925 - fVar29;
    if ((-3.1415925 - fVar29) - fVar3 < 0.0) {
      fVar6 = fVar3;
    }
    dVar19 = (double)(float)(dVar24 * dVar24);
    fVar8 = fVar6 * fVar6;
    dVar23 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar24));
    fVar29 = fVar8 * fVar8 * fVar6;
    dVar22 = (double)(float)(dVar19 * dVar23);
    local_c8 = 0;
    fVar3 = fVar8 * fVar29;
    local_cc = ((float)(dVar19 * dVar22) * 2.601887e-06 +
               (float)(dVar22 * -0.0001980741071747616 +
                      (double)(float)(dVar23 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar19 * dVar24) *
                                                     -0.16666656732559204 + dVar24)))) * 2.0;
    local_d0 = (fVar8 * fVar3 * 2.601887e-06 +
               fVar3 * -0.0001980741 + fVar29 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6)
               * 2.0;
    dVar19 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x170) - (moby->pos).x),
                                  (double)(*(float *)((int)pvVar4 + 0x174) - (moby->pos).y));
    dVar19 = (double)fastfunc::FastSubRots((float)dVar20,(float)dVar19);
    if (dVar19 < 0.7853981852531433) {
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0xc0),&local_d0,auStack_c0);
      mobyutil::MB_PushOutOfSplineWalls(0x3fe8000000000000,*(undefined4 *)((int)pvVar4 + 0x198));
    }
    fVar29 = *(float *)((int)pvVar4 + 0x174) - (moby->pos).y;
    fVar3 = *(float *)((int)pvVar4 + 0x170) - (moby->pos).x;
    fVar6 = *(float *)((int)pvVar4 + 0x178) - (moby->pos).z;
    if ((SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar29 * fVar29) < 1.0) &&
       (moby->state = '\x01', moby->animationId != '\0')) {
      local_50 = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
    }
  }
  else if (bVar1 == 0xc) {
    mobyfunc::GetBonePosition(lVar13,0,&local_100);
    local_f0 = (moby->pos).x;
    local_ec = (moby->pos).y;
    local_e4 = (moby->pos).w;
    local_e8 = (moby->pos).z + 1.5;
    dVar19 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((9.0 <= dVar19) && (dVar19 <= 15.0)) {
      fVar29 = (moby->rotation).z;
      fVar3 = fVar29 + 1.5707963;
      fVar6 = 3.1415925 - fVar29;
      if (fVar29 - (3.1415925 - fVar29) < 0.0) {
        fVar6 = fVar29;
      }
      fVar8 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar8 = fVar3;
      }
      fVar7 = -3.1415925 - fVar29;
      if ((-3.1415925 - fVar29) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar29 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
        fVar29 = fVar8;
      }
      fVar3 = fVar7 * fVar7;
      fVar6 = fVar29 * fVar29;
      fVar10 = fVar3 * fVar3 * fVar7;
      fVar8 = fVar6 * fVar6 * fVar29;
      fVar11 = fVar3 * fVar10;
      fVar9 = fVar6 * fVar8;
      local_dc = fVar3 * fVar11 * 2.601887e-06 +
                 fVar11 * -0.0001980741 +
                 fVar10 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7;
      local_e0 = fVar6 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 +
                 fVar8 * 0.0083330255 + fVar6 * fVar29 * -0.16666657 + fVar29;
      local_d8 = 0x3f800000;
      local_d4 = 0x45afdf66;
      mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_80,lVar13,1,&DAT_0022e4f8,&local_e0);
      local_66 = moby->oClass;
      local_68 = 0;
      local_67 = 1;
      mobyutil::MB_CollLineMulti(&local_100,&local_f0,uVar18 + 0x1e0,&local_f0,lVar13,auStack_80,5);
    }
    *(undefined4 *)((int)pvVar4 + 0x1e0) = local_100;
    *(undefined4 *)((int)pvVar4 + 0x1e4) = local_fc;
    *(undefined4 *)((int)pvVar4 + 0x1e8) = local_f8;
    *(undefined4 *)((int)pvVar4 + 0x1ec) = local_f4;
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\v', moby->animationId != '\x01')) {
      local_50 = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
    }
  }
  else if (bVar1 == 0xb) {
    uVar21 = FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar18 + 0x188);
    fVar29 = (moby->rotation).z;
    fVar3 = fVar29 + 1.5707963;
    fVar6 = 3.1415925 - fVar29;
    if (fVar29 - (3.1415925 - fVar29) < 0.0) {
      fVar6 = fVar29;
    }
    fVar8 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar8 = fVar3;
    }
    fVar7 = -3.1415925 - fVar29;
    if ((-3.1415925 - fVar29) - fVar6 < 0.0) {
      fVar7 = fVar6;
    }
    fVar29 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
      fVar29 = fVar8;
    }
    fVar3 = fVar7 * fVar7;
    fVar6 = fVar29 * fVar29;
    fVar10 = fVar3 * fVar3 * fVar7;
    local_128 = 0;
    fVar8 = fVar6 * fVar6 * fVar29;
    fVar11 = fVar3 * fVar10;
    fVar9 = fVar6 * fVar8;
    local_12c = (fVar3 * fVar11 * 2.601887e-06 +
                fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7
                ) * 2.0;
    local_130 = (fVar6 * fVar9 * 2.601887e-06 +
                fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar6 * fVar29 * -0.16666657 + fVar29
                ) * 2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0xc0),&local_130,auStack_120);
    mobyutil::MB_PushOutOfSplineWalls(0x3fe8000000000000,*(undefined4 *)((int)pvVar4 + 0x198));
    iVar15 = mobyutil::MB_SplineIntersect
                       (*(undefined4 *)((int)pvVar4 + 0x198),lVar13 + 0x10,iVar5 + 0x10,&local_110);
    bVar12 = false;
    fVar29 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    if ((iVar15 != 0) &&
       (local_10c = fVar3 - local_10c, local_110 = fVar29 - local_110,
       local_108 = (moby->pos).z - local_108,
       SQRT(local_108 * local_108 + local_110 * local_110 + local_10c * local_10c) < 0.8)) {
      bVar12 = true;
    }
    if (*(int *)((int)pvVar4 + 0x184) == 0) {
      moby->state = '\r';
    }
    else if (bVar12) {
      moby->state = '\f';
      if (moby->animationId != '\x06') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      fVar3 = fVar3 - *(float *)(iVar5 + 0x14);
      fVar29 = fVar29 - *(float *)(iVar5 + 0x10);
      if (SQRT(fVar29 * fVar29 + fVar3 * fVar3) < DAT_00775198) {
        mobyfunc::GetBonePosition(lVar13,0,uVar18 + 0x1e0);
        moby->state = '\f';
        if (moby->animationId != '\x06') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar1 == 7) {
    dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
    uVar21 = fastfunc::FastWrapRot((float)dVar19,*(float *)((int)pvVar4 + 0x1a8));
    mobyutil::OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar18 + 0x188);
    fVar29 = (moby->rotation).z;
    fVar3 = fVar29 + 1.5707963;
    fVar6 = 3.1415925 - fVar29;
    if (fVar29 - (3.1415925 - fVar29) < 0.0) {
      fVar6 = fVar29;
    }
    fVar8 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar8 = fVar3;
    }
    fVar7 = -3.1415925 - fVar29;
    if ((-3.1415925 - fVar29) - fVar6 < 0.0) {
      fVar7 = fVar6;
    }
    fVar29 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
      fVar29 = fVar8;
    }
    fVar3 = fVar7 * fVar7;
    fVar6 = fVar29 * fVar29;
    fVar10 = fVar3 * fVar3 * fVar7;
    fVar8 = fVar6 * fVar6 * fVar29;
    fVar11 = fVar3 * fVar10;
    fVar9 = fVar6 * fVar8;
    local_15c = (fVar3 * fVar11 * 2.601887e-06 +
                fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7
                ) * 2.0;
    local_160 = (fVar6 * fVar9 * 2.601887e-06 +
                fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar6 * fVar29 * -0.16666657 + fVar29
                ) * 2.0;
    dVar19 = 0.0;
    local_158 = 0;
    uVar18 = mobyutil::MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0xc0),&local_160,
                        auStack_150);
    if ((uVar18 & 2) != 0) {
      iVar15 = rand();
      iVar15 = (int)((longlong)iVar15 << 1);
      dVar19 = (double)fastfunc::FastIntToDouble(iVar15 + (iVar15 >> 1) * -2 + -1);
      dVar19 = (double)(float)(dVar19 * 1.0995573997497559);
    }
    *(float *)((int)pvVar4 + 0x1a8) = (float)dVar19;
    lVar17 = lVar13 + 0x10;
    mobyutil::MB_PushOutOfSplineWalls
              (0x3fe8000000000000,*(undefined4 *)((int)pvVar4 + 0x198),
               *(undefined4 *)((int)pvVar4 + 0x198),lVar17,lVar17);
    iVar15 = mobyutil::MB_SplineIntersect
                       (*(undefined4 *)((int)pvVar4 + 0x198),lVar17,iVar5 + 0x10,&local_140);
    fVar29 = (moby->pos).x;
    bVar12 = false;
    fVar3 = (moby->pos).y;
    uVar2 = moby->animationId;
    if ((iVar15 != 0) &&
       (local_13c = fVar3 - local_13c, local_140 = fVar29 - local_140,
       local_138 = (moby->pos).z - local_138, bVar12 = false,
       SQRT(local_138 * local_138 + local_140 * local_140 + local_13c * local_13c) < 0.8)) {
      bVar12 = true;
    }
    fVar3 = fVar3 - *(float *)(iVar5 + 0x14);
    fVar29 = fVar29 - *(float *)(iVar5 + 0x10);
    fVar29 = SQRT(fVar29 * fVar29 + fVar3 * fVar3);
    if (15.0 <= fVar29) {
      if (bVar12) {
        moby->state = '\x02';
        if (uVar2 != '\x03') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
        }
      }
      else if ((fVar29 < DAT_00775198) && (moby->state = '\x05', uVar2 != '\x06')) {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      moby->state = '\x02';
      if (uVar2 != '\x03') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}



//==== 0022fcb8  ns=mobyupdate_helpers  size=0x43c
// sig: undefined M1393_0022fcb8(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1393_0022fcb8(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined4 uVar14;
  float *pfVar15;
  ulonglong unaff_r20;
  longlong lVar16;
  ulonglong unaff_r21;
  longlong lVar17;
  ulonglong unaff_r22;
  longlong lVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  undefined4 *puVar19;
  ulonglong unaff_r26;
  undefined4 *puVar20;
  ulonglong unaff_r27;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  ulonglong unaff_r30;
  uint uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x1c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar10;
  puVar9[0x3a] = in_LR;
  puVar9[0x35] = in_f29;
  puVar9[0x36] = in_f30;
  puVar9[0x37] = in_f31;
  puVar9[0x31] = unaff_r28;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar9[0x34] = unaff_r31;
  puVar9[0x33] = unaff_r30;
  puVar9[0x32] = unaff_r29;
  puVar9[0x30] = unaff_r27;
  puVar9[0x2f] = unaff_r26;
  puVar9[0x2e] = unaff_r25;
  puVar9[0x2d] = unaff_r24;
  puVar9[0x2c] = unaff_r23;
  puVar9[0x2b] = unaff_r22;
  puVar9[0x2a] = unaff_r21;
  puVar9[0x29] = unaff_r20;
  uVar11 = idol_draw::Blend(1,5,0x80,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar11);
  uVar12 = draw::GetEffectTex(DAT_007751b8);
  uVar14 = DAT_007751b8;
  puVar9[0x25] = uVar12;
  draw::GetEffectTex(uVar14);
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar9[0x26] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar9[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00f153c0,DAT_007751ac,DAT_00f153c4,DAT_007751b0,DAT_007751b4);
  puVar9[0x27] = uVar12;
  fastfunc::FastMtx4Identity((float *)(puVar9 + 0xe));
  iVar23 = 0;
  do {
    puVar19 = &DAT_007751cc;
    DAT_007751d8 = DAT_007751e8;
    dVar33 = 0.0;
    dVar25 = (double)mobyutil::MB_randRangeFloat(0.0,0.2);
    DAT_007751e8 = (float)dVar25;
    uVar24 = 0;
    dVar25 = 0.5;
    dVar34 = 0.125;
    puVar20 = &DAT_007751d0;
    lVar21 = uVar10 - 0x110;
    lVar16 = lVar1;
    lVar17 = lVar1;
    lVar18 = lVar1;
    do {
      iVar8 = (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0) + iVar23) * 0x10;
      pfVar15 = (float *)(iVar8 + iVar7 + 0x210);
      pfVar13 = (float *)(iVar8 + iVar7 + 0x21c);
      dVar29 = (double)*pfVar15;
      pfVar22 = (float *)lVar21;
      *pfVar22 = *pfVar15;
      dVar28 = (double)pfVar15[1];
      pfVar22[1] = pfVar15[1];
      dVar27 = (double)pfVar15[2];
      pfVar22[2] = pfVar15[2];
      fVar5 = pfVar15[3];
      pfVar22[3] = fVar5;
      if (uVar24 == (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0)) * 2) {
        uVar14 = fastfunc::FastLerpColor((double)*pfVar13,DAT_007751bc,DAT_007751c0);
      }
      else {
        fVar2 = (float)(dVar28 - (double)*(float *)(iVar7 + 500));
        fVar3 = (float)(dVar29 - (double)*(float *)(iVar7 + 0x1f0));
        fVar4 = (float)(dVar27 - (double)*(float *)(iVar7 + 0x1f8));
        pfVar22[3] = fVar5;
        dVar32 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar5 = (float)(dVar25 / dVar32);
        dVar31 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        dVar30 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar30 = (double)(fVar5 * fVar2);
        }
        dVar26 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar26 = (double)(fVar5 * fVar3);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar30 = (double)(fVar5 * fVar2);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar26 = (double)(fVar5 * fVar3);
        }
        pfVar22[2] = (float)(dVar27 - dVar31);
        pfVar22[1] = (float)(dVar28 - dVar30);
        *pfVar22 = (float)(dVar29 - dVar26);
        uVar6 = DAT_007751c8;
        uVar14 = DAT_007751c4;
        *(float *)((int)lVar16 + 0xb8) = (float)((double)*(float *)((int)lVar16 + 0xb8) - dVar34);
        uVar14 = fastfunc::FastLerpColor((double)*pfVar13,uVar14,uVar6);
      }
      uVar6 = *puVar19;
      *(undefined4 *)((int)lVar17 + 0xf0) = uVar14;
      uVar24 = uVar24 + 1;
      uVar14 = *puVar20;
      lVar21 = lVar21 + 0x10;
      *(undefined4 *)((int)lVar18 + 0x100) = uVar6;
      *(undefined4 *)((int)lVar18 + 0x104) = uVar14;
      lVar16 = lVar16 + 0x10;
      puVar19 = puVar19 + 2;
      lVar17 = lVar17 + 4;
      puVar20 = puVar20 + 2;
      lVar18 = lVar18 + 8;
    } while ((int)uVar24 < 4);
    draw::FastDrawQuad(uVar10 - 0x110,uVar10 - 0x150,0,EffectTexHeaders,9);
    uVar14 = EffectTexHeaders;
    uVar24 = 0;
    lVar16 = lVar1;
    do {
      if (uVar24 != (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0)) * 2) {
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) + 0.25;
      }
      uVar24 = uVar24 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar24 < 4);
    draw::FastDrawQuad(uVar10 - 0x110,uVar10 - 0x150,0,uVar14,9);
    iVar23 = iVar23 + 1;
  } while (iVar23 < 0xf);
  uVar11 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar11);
  return;
}



