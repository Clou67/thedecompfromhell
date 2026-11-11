//==== 003f00b8  ns=mobyupdate_helpers  size=0x470
// sig: undefined M631_003f00b8(void)
// callers(1): 003f0610 mobyupdate_unsorted::UpdateMoby_631
// callees(6): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0015d12c sound::PlayMobySound; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M631_003f00b8(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  float *pfVar13;
  int iVar14;
  longlong lVar12;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar11;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x18] = unaff_r31;
  puVar9[0x17] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar19 = ZEXT48(pvVar7);
  dVar24 = 0.0;
  puVar9[0x16] = unaff_r29;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  pfVar13 = (float *)mobyutil::MB_damage(param_1,0x330000,0);
  iVar14 = mobyutil::MB_HandleDamage
                     (param_1,pfVar13,uVar19 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\x05')) {
    fVar2 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar2;
    if ((iVar14 == 1) || ((double)fVar2 <= dVar24)) {
      param_1->state = '\x05';
    }
    else if (iVar14 != 0xb) {
      *(undefined1 *)((int)pvVar7 + 0x67) = 0xb4;
      mobyutil::MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
      fVar2 = (param_1->rotation).z;
      if ((pfVar13[7] == 5627.925) && (param_1->state != '\x04')) {
        fVar6 = (param_1->pos).x - *pfVar13;
        fVar3 = (param_1->pos).y - pfVar13[1];
        dVar23 = ABS((double)fVar6);
        dVar22 = ABS((double)fVar3);
        *(float *)(puVar9 + 0xf) = fVar6;
        *(float *)((int)puVar9 + 0x7c) = fVar3;
        *(float *)(puVar9 + 0x10) = (float)(dVar23 - dVar22);
        uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1d) & 4;
        dVar21 = ABS((double)*(float *)(puVar9 + 0xf));
        if ((double)*(float *)(puVar9 + 0x10) - dVar24 < 0.0) {
          dVar21 = dVar22;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar9 + 0x7c));
        if ((double)*(float *)(puVar9 + 0x10) - dVar24 < 0.0) {
          dVar22 = dVar23;
        }
        fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        if (dVar24 < dVar21) {
          lVar18 = uVar11 - 0xc0;
          lVar15 = uVar11 - 0x3c;
          lVar17 = uVar11 - 0x4c;
          lVar20 = 2;
          fVar4 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x12) = fVar4;
          *(float *)(puVar9 + 0x11) = fVar4;
          *(float *)((int)puVar9 + 0x8c) = fVar4;
          *(float *)((int)puVar9 + 0x84) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar5;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar4;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x74) * fVar4 * fVar4;
            iVar14 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar18 = uVar11 - 0x4c;
          lVar20 = 4;
          pfVar13 = (float *)&DAT_007358e0;
          lVar15 = lVar18;
          lVar17 = lVar12;
          do {
            fVar4 = *pfVar13;
            fVar5 = pfVar13[1];
            pfVar13 = pfVar13 + 2;
            *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x84) * fVar4;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar15 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar10 = (int)lVar18;
            lVar12 = lVar12 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x84)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar3);
        }
        dVar21 = (double)fastfunc::FastDiffRots(dVar24,(double)fVar2);
        fVar2 = (float)(dVar21 + 1.570796251296997);
        dVar24 = (double)(float)(3.141592502593994 - dVar21);
        if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
          dVar24 = dVar21;
        }
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        dVar22 = (double)(float)(-3.141592502593994 - dVar21);
        if ((double)(float)(-3.141592502593994 - dVar21) - dVar24 < 0.0) {
          dVar22 = dVar24;
        }
        dVar24 = (double)(float)(dVar22 * dVar22);
        fVar3 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar3 = fVar6;
        }
        fVar5 = fVar3 * fVar3;
        dVar21 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar22));
        dVar23 = (double)(float)(dVar24 * dVar21);
        fVar4 = fVar5 * fVar5 * fVar3;
        fVar6 = fVar5 * fVar4;
        fVar2 = ((float)(dVar24 * dVar23) * 2.601887e-06 +
                (float)(dVar23 * -0.0001980741071747616 +
                       (double)(float)(dVar21 * 0.008333025500178337 +
                                      (double)(float)((double)(float)(dVar24 * dVar22) *
                                                      -0.16666656732559204 + dVar22)))) *
                -0.34906584;
        fVar6 = (fVar5 * fVar6 * 2.601887e-06 +
                fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
                * 0.08726646;
        if (ABS((param_1->rotation).x) < ABS(fVar2)) {
          (param_1->rotation).x = fVar2;
          *(undefined4 *)((int)pvVar7 + 0x218) = 0;
        }
        if (ABS((param_1->rotation).y) < ABS(fVar6)) {
          (param_1->rotation).y = fVar6;
          *(undefined4 *)((int)pvVar7 + 0x21c) = 0;
        }
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        *(float *)((int)pvVar7 + 0x214) = mobyutil::g_FrameTime * 4.0;
        auVar25 = loadVectorLeftIndexed(0x30,0x3f0080);
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar26);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = vectorSplatHalfWord(auVar25,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar25,0x206,uVar19);
        *(undefined2 *)((int)pvVar7 + 0x206) = uVar8;
        uVar1 = param_1->state;
        param_1->state = '\x04';
        param_1->setByGroup = uVar1;
        sound::PlayMobySound(1,0,param_1);
      }
    }
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  return;
}



//==== 003f0610  ns=mobyupdate_unsorted  size=0x1ee0
// sig: undefined UpdateMoby_631(MobyInstance * moby)
// callers(0): 
// callees(44): 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff190 mobyutil::MB_DeltAngSpeed; 00105ab4 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010d7a0 mobyutil::MB_PathFollowToPos; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119ac0 mobyutil::MB_SetScaleCheat; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015cdb0 sound::sound_Kill; 003f00b8 mobyupdate_helpers::M631_003f00b8; 00486008 FUN_00486008; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005010c0 fastfunc::FastNormalizeRMtx4; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf; 005e7f54 FUN_005e7f54; 005e7f98 FUN_005e7f98; 005e8030 FUN_005e8030; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e81f0 FUN_005e81f0; 005e825c FUN_005e825c
// strings: 003f0da0: 'Tc 63a' (raw)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 631 */

void mobyupdate_unsorted::UpdateMoby_631(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  f32 fVar4;
  short sVar5;
  void *pvVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined2 uVar14;
  int iVar12;
  undefined4 uVar13;
  uint uVar15;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  int *piVar16;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar17;
  Spline *pSVar20;
  longlong lVar18;
  longlong lVar19;
  ulonglong unaff_r28;
  int iVar21;
  ulonglong unaff_r29;
  MobyInstance *pMVar22;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  puVar8 = (ulonglong *)(uVar10 - 0x330);
  *puVar8 = uVar10;
  puVar8[0x68] = in_LR;
  puVar8[0x60] = in_f26;
  puVar8[0x61] = in_f27;
  puVar8[0x62] = in_f28;
  puVar8[99] = in_f29;
  puVar8[100] = in_f30;
  puVar8[0x65] = in_f31;
  puVar8[0x5e] = unaff_r30;
  puVar8[0x5f] = unaff_r31;
  pvVar6 = moby->pVar;
  uVar23 = ZEXT48(pvVar6);
  dVar24 = 2.0;
  iVar12 = *(int *)((int)pvVar6 + 0x254);
  puVar8[0x5d] = unaff_r29;
  puVar8[0x5c] = unaff_r28;
  puVar8[0x5b] = unaff_r27;
  puVar8[0x5a] = unaff_r26;
  puVar8[0x59] = unaff_r25;
  puVar8[0x58] = unaff_r24;
  puVar8[0x57] = unaff_r23;
  puVar8[0x56] = unaff_r22;
  puVar8[0x55] = unaff_r21;
  dVar25 = dVar24;
  if (iVar12 != 0) {
    dVar25 = 4.0;
  }
  dVar29 = 20.0;
  mobyutil::MB_getTarget((double)(float)(dVar25 * 20.0),lVar11,&DAT_003f0530,uVar10 - 0x100);
  if ((*(uint *)(&DAT_00a54dd0 + (int)((longlong)((int)(short)moby->uid >> 5) << 2)) &
      1 << (moby->uid & 0x1f)) != 0) {
    if (*(int *)((int)pvVar6 + 0x238) != -1) {
      mobyfunc::DeleteMoby(MobyInstance + *(int *)((int)pvVar6 + 0x238));
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (*(int *)((int)pvVar6 + 0x134) == -1) {
    if (*(int *)((int)pvVar6 + 0x238) != -1) {
      mobyfunc::DeleteMoby(MobyInstance + *(int *)((int)pvVar6 + 0x238));
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if ((moby->state != '\0') && (*(char *)((int)pvVar6 + 0x2e) != '\x01')) {
    if (*(int *)((int)pvVar6 + 0x238) != -1) {
      mobyfunc::DeleteMoby(MobyInstance + *(int *)((int)pvVar6 + 0x238));
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (*(int *)((int)pvVar6 + 0x38) != 0) {
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0xc,0x3f0530);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x254,uVar23);
    *(undefined4 *)((int)pvVar6 + 0x254U & 0xfffffffc) = uVar13;
  }
  fastfunc::FastDecTimerS32(uVar23 + 0x254);
  if (((*(int *)((int)pvVar6 + 0x238) != -1) &&
      (pMVar22 = MobyInstance + *(int *)((int)pvVar6 + 0x238),
      pMVar22->oClass == BLARG_COMMANDER_023E)) && (pMVar22->state < 0x80)) {
    lVar17 = ZEXT48(pMVar22->pVar) + 0x150;
    mobyutil::MB_SetScaleCheat(0x4004000000000000,lVar17);
    mobyutil::MB_UpdateManipulatorRot
              ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),pMVar22,lVar17,2);
  }
  mobyupdate_helpers::M631_003f00b8(lVar11);
  uVar2 = moby->state;
  dVar25 = (double)(moby->rotation).z;
  if (uVar2 == '\x05') {
    uVar26 = 0;
    *(undefined4 *)(puVar8 + 0x30) = 0;
    *(undefined4 *)((int)puVar8 + 0x184) = 0;
    *(undefined4 *)(puVar8 + 0x31) = 0;
    *(undefined4 *)((int)puVar8 + 0x18c) = 0;
    dVar25 = (double)mobyutil::MB_randRot();
    mobyfunc::GetBonePosition(lVar11,4,uVar10 - 0x1a0);
    dVar30 = 1.5;
    dVar29 = 1.5707963705062866;
    iVar12 = 0;
    do {
      dVar27 = (double)mathfunc::cosf((float)dVar25);
      *(float *)(puVar8 + 0x34) = (float)(dVar27 * dVar30);
      dVar27 = (double)FUN_005e8128(dVar25);
      *(undefined4 *)(puVar8 + 0x35) = 0;
      *(float *)((int)puVar8 + 0x1a4) = (float)(dVar27 * dVar30);
      dVar25 = (double)fastfunc::FastWrapRot((float)dVar25,(float)dVar29);
      fastfunc::FastVecAddSelf(uVar10 - 0x180,uVar10 - 400,uVar10 - 0x1a0);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 4);
    mobyfunc::GetBonePosition(lVar11,5,uVar10 - 400);
    if (*(int *)((int)pvVar6 + 0x238) != -1) {
      lVar17 = uVar10 - 0x170;
      pMVar22 = MobyInstance + *(int *)((int)pvVar6 + 0x238);
      *(undefined1 *)((int)pMVar22->pVar + 0x262) = 2;
      pMVar22->updateDistance = -1;
      pMVar22->modeBits =
           pMVar22->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|DISABLED);
      *(MobyInstance **)(puVar8 + 0x3a) = moby;
      *(undefined **)((int)puVar8 + 0x1d4) = &DAT_00830000;
      *(undefined4 *)((int)puVar8 + 0x1dc) = 0x41a00000;
      *(undefined4 *)(puVar8 + 0x3c) = 1;
      FUN_005e81f0(lVar17,&pMVar22->pos,lVar11 + 0x10);
      FUN_005e84c0(0x3ff0000000000000,lVar17,lVar17);
      auVar31 = ZEXT416(0xfffffff0);
      auVar32 = loadVectorLeftIndexed(0xa6,lVar11);
      auVar32 = vectorShiftRightWord
                          (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      *(undefined4 *)(puVar8 + 0x39) = 0x3f800000;
      *(undefined4 *)((int)puVar8 + 0x1cc) = 0x45afdf66;
      auVar31 = vectorSplatHalfWord(auVar32,1);
      *(undefined1 *)(puVar8 + 0x3b) = 3;
      *(undefined1 *)((int)puVar8 + 0x1d9) = 3;
      uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x1da,uVar10 - 0x330);
      *(undefined2 *)((int)puVar8 + 0x1da) = uVar14;
      auVar31 = loadVectorLeftIndexed(0xa0,0x3f0530);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = vectorPermute(_DAT_003f05b0,*(undefined1 (*) [16])(puVar8 + 0x38),_DAT_003f05c0);
      auVar31 = vectorPermute(auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                              _DAT_003f05e0);
      auVar31 = vectorPermute(auVar31,*(undefined1 (*) [16])(puVar8 + 0x3a),_DAT_003f05f0);
      *(undefined1 (*) [16])(puVar8 + 8) = auVar33;
      *(undefined4 *)((int)puVar8 + 0x6c) = *(undefined4 *)((int)puVar8 + 0x1ec);
      *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(puVar8 + 0x3d);
      *(undefined4 *)((int)puVar8 + 100) = *(undefined4 *)((int)puVar8 + 0x1e4);
      *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar8 + 0x3c);
      *(undefined1 (*) [16])(puVar8 + 10) = auVar31;
      mobyutil::CollDamageMobyDirect
                (pMVar22,puVar8[9],puVar8[8],puVar8[9],puVar8[10],puVar8[0xb],puVar8[0xc],
                 puVar8[0xd]);
    }
    lVar18 = lVar11 + 0x10;
    puVar8[0x12] = 2;
    puVar8[0x14] = 1;
    puVar8[0x15] = 1;
    puVar8[0x16] = 0xffffffffffffffff;
    puVar8[0x17] = 0;
    mobyutil::MB_genericExplosion
              (uVar26,uVar26,0x4010000000000000,dVar24,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar11,uVar10 - 0x1b0,lVar18,2,0xffffffffffffffff,0x14,3,4);
    mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
    lVar17 = lVar11 + 0x40;
    puVar8[0xe] = ZEXT48(&DAT_00a15d30);
    puVar8[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar26,lVar11,0x637,lVar18,lVar17,0,0);
    puVar8[0xe] = ZEXT48(&DAT_00a15d30);
    puVar8[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar26,lVar11,0x638,lVar18,lVar17,0,0);
    puVar8[0xe] = ZEXT48(&DAT_00a15d30);
    puVar8[0xf] = ZEXT48(&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar26,lVar11,0x639,lVar18,lVar17,0,0);
    mobyfunc::DetachManipulator(moby,(int)pvVar6 + 0x180);
    mobyfunc::DetachManipulator(moby,(int)pvVar6 + 0x1c0);
    iVar12 = *(int *)((int)pvVar6 + 0x250);
    if (((iVar12 != -1) && (sound::g_SoundChannels[iVar12].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar12].state != '\0')) {
      sound::sound_Kill(iVar12);
    }
    *(undefined4 *)((int)pvVar6 + 0x250) = 0xffffffff;
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar2 == '\x04') {
    iVar12 = fastfunc::FastDecTimerS16(uVar23 + 0x206);
    if (iVar12 == 0) {
      fVar3 = -(DAT_0071f418 * 4.0 - *(float *)((int)pvVar6 + 0x214));
      *(float *)((int)pvVar6 + 0x214) = fVar3;
      if (fVar3 < 0.0) {
        *(undefined4 *)((int)pvVar6 + 0x214) = 0;
      }
      dVar25 = (double)mathfunc::cosf((moby->rotation).z);
      fVar3 = (moby->rotation).z;
      *(float *)(puVar8 + 0x2e) = -(float)(dVar25 * (double)*(float *)((int)pvVar6 + 0x214));
      dVar25 = (double)FUN_005e8128((double)fVar3);
      fVar3 = *(float *)((int)pvVar6 + 0x214);
      *(undefined4 *)(puVar8 + 0x2f) = 0;
      *(float *)((int)puVar8 + 0x174) = -(float)(dVar25 * (double)fVar3);
      FUN_005e7f54(lVar11 + 0x10,lVar11 + 0x10,uVar10 - 0x1c0);
      uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x2e),
                            (double)*(float *)((int)puVar8 + 0x174));
      dVar25 = (double)fastfunc::FastDiffRots(uVar26,(double)(moby->rotation).z);
      dVar24 = (double)mathfunc::cosf((float)dVar25);
      dVar29 = 10.0;
      dVar24 = (double)(float)((double)(*(float *)((int)pvVar6 + 0x214) * 0.34906584) * dVar24);
      dVar30 = (double)(float)(dVar24 / (double)(mobyutil::g_FrameTime * 10.0));
      dVar25 = (double)FUN_005e8128(dVar25,dVar24,(double)(mobyutil::g_FrameTime * 10.0));
      dVar24 = 1.0471975803375244;
      dVar29 = (double)((float)((double)(*(float *)((int)pvVar6 + 0x214) * -0.34906584) * dVar25) /
                       (float)((double)mobyutil::g_FrameTime * dVar29));
      dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,dVar30,
                                  (double)(DAT_0071f418 * 0.5235988),
                                  (double)(DAT_0071f418 * 1.0471976),
                                  (double)(float)((double)mobyutil::g_FrameTime * 0.7853981852531433
                                                 ));
      (moby->rotation).y = (float)dVar25;
      dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar29,
                                  (double)(float)((double)DAT_0071f418 * dVar24),
                                  (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                  (double)(mobyutil::g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar25;
    }
    else {
      moby->state = moby->setByGroup;
    }
    goto LAB_003f235c;
  }
  if (uVar2 == '\x03') {
    iVar12 = *(int *)((int)pvVar6 + 0x230);
    if (iVar12 == -1) {
      mobyutil::Delt(200.0,mobyutil::g_FrameTime * 8.0,&(moby->pos).z);
      uVar26 = 0;
      dVar30 = 0.5235987901687622;
      dVar29 = 1.0471975803375244;
      dVar24 = 0.7853981852531433;
      dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,0,(double)(DAT_0071f418 * 0.5235988),
                                  (double)(DAT_0071f418 * 1.0471976),
                                  (double)(mobyutil::g_FrameTime * 0.7853982));
      (moby->rotation).y = (float)dVar25;
      dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,uVar26,
                                  (double)(float)((double)DAT_0071f418 * dVar30),
                                  (double)(float)((double)DAT_0071f418 * dVar29),
                                  (double)(float)((double)mobyutil::g_FrameTime * dVar24));
      (moby->rotation).x = (float)dVar25;
    }
    else {
      if (*(int *)((int)pvVar6 + 0x23c) != 0) {
        iVar12 = *(int *)((int)pvVar6 + 0x234);
      }
      lVar17 = lVar11 + 0x10;
      pSVar7 = Splines[iVar12];
      mobyutil::MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,pSVar7,lVar17,uVar10 - 0x1d0,uVar10 - 0xa4,
                 uVar10 - 0xa8);
      dVar25 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar8 + 0x28c));
      dVar30 = (double)(float)((double)(float)(dVar25 * (double)pSVar7->points[0].w +
                                              (double)*(float *)(puVar8 + 0x51)) + dVar24);
      dVar25 = (double)FUN_005e8548(lVar17,pSVar7->points + pSVar7->cnt + -1);
      if ((double)((*(float *)((int)pvVar6 + 0x214) * *(float *)((int)pvVar6 + 0x214)) /
                  (float)((double)(DAT_0071f418 * 10.0) * dVar24)) < dVar25) {
        fVar3 = DAT_0071f418 * 10.0 + *(float *)((int)pvVar6 + 0x214);
        *(float *)((int)pvVar6 + 0x214) = fVar3;
        if ((float)((double)mobyutil::g_FrameTime * dVar29) < fVar3) {
          *(float *)((int)pvVar6 + 0x214) = (float)((double)mobyutil::g_FrameTime * dVar29);
        }
      }
      else {
        fVar3 = -(DAT_0071f418 * 10.0 - *(float *)((int)pvVar6 + 0x214));
        *(float *)((int)pvVar6 + 0x214) = fVar3;
        if (fVar3 < DAT_0085433c * mobyutil::g_FrameTime) {
          *(float *)((int)pvVar6 + 0x214) = DAT_0085433c * mobyutil::g_FrameTime;
        }
      }
      uVar13 = fastfunc::FastDoubleToInt((double)(float)(dVar30 / (double)pSVar7->points[0].w));
      *(undefined4 *)((int)puVar8 + 0x28c) = uVar13;
      dVar25 = (double)fastfunc::FastIntToDouble();
      dVar24 = (double)pSVar7->points[0].w;
      iVar12 = *(int *)((int)puVar8 + 0x28c);
      *(float *)(puVar8 + 0x51) = (float)(-(double)(float)(dVar25 * dVar24 - dVar30) / dVar24);
      if (pSVar7->cnt + -1 <= iVar12) {
        if (((*(int *)((int)pvVar6 + 0x234) != -1) && (*(int *)((int)pvVar6 + 0x164) != -1)) &&
           (*(float *)((int)pvVar6 + 0x214) <= DAT_0085433c * mobyutil::g_FrameTime)) {
          uVar15 = *(uint *)((int)pvVar6 + 0x23c) ^ 1;
          *(uint *)((int)pvVar6 + 0x23c) = uVar15;
          auVar31 = ZEXT416(0xffffffff);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
          auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          puVar9 = (undefined4 *)
                   ((int)pvVar6 + 0x150U +
                   ((uint)((LZCOUNT(-uVar15) << 0x3a) >> 0x3f) &
                   (int)pvVar6 + (0x120 - ((int)pvVar6 + 0x150U))));
          iVar12 = puVar9[4];
          (moby->pos).x = *(f32 *)(iVar12 + 0x10);
          (moby->pos).y = *(f32 *)(iVar12 + 0x14);
          (moby->pos).z = *(f32 *)(iVar12 + 0x18);
          (moby->pos).w = *(f32 *)(iVar12 + 0x1c);
          *puVar9 = 1;
          moby->setByGroup = '\x02';
          moby->state = '\x04';
          auVar31 = loadVectorLeftIndexed(0x30,0x3f0530);
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar31 = vectorMultiplyAddFloatingPoint
                              (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60
                               ,auVar32);
          auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
          auVar31 = vectorSplatHalfWord(auVar31,1);
          uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x206,uVar23);
          *(undefined2 *)((int)pvVar6 + 0x206) = uVar14;
          goto LAB_003f235c;
        }
        if (*(float *)((int)pvVar6 + 0x214) <= DAT_0085433c * mobyutil::g_FrameTime) {
          trapWord(0x1f,in_LR,in_LR);
          return;
        }
        iVar12 = pSVar7->cnt + -2;
        *(int *)((int)puVar8 + 0x28c) = iVar12;
        *(undefined4 *)(puVar8 + 0x51) = 0x3f800000;
      }
      lVar19 = uVar10 - 0x1d0;
      FUN_005e81f0(lVar19,pSVar7->points + iVar12 + 1,pSVar7->points + iVar12);
      fVar3 = *(float *)(puVar8 + 0x51);
      *(float *)(puVar8 + 0x2c) = *(float *)(puVar8 + 0x2c) * fVar3;
      *(float *)((int)puVar8 + 0x164) = *(float *)((int)puVar8 + 0x164) * fVar3;
      *(float *)(puVar8 + 0x2d) = *(float *)(puVar8 + 0x2d) * fVar3;
      FUN_005e7f54(lVar19,lVar19,pSVar7->points + *(int *)((int)puVar8 + 0x28c));
      dVar25 = (double)(moby->rotation).z;
      uVar26 = FUN_005e8338((double)(*(float *)(puVar8 + 0x46) - (moby->pos).x),
                            (double)(*(float *)((int)puVar8 + 0x234) - (moby->pos).y));
      dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                 (dVar25,uVar26,0x3f847ae140000000,0x3fd3333340000000,
                                  0x3fb99999a0000000);
      lVar18 = uVar10 - 0x1e0;
      (moby->rotation).z = (float)dVar25;
      FUN_005e81f0(lVar18,lVar19,lVar17);
      dVar25 = (double)FUN_005e8030(lVar18);
      if ((double)*(float *)((int)pvVar6 + 0x214) - dVar25 < 0.0) {
        dVar25 = (double)*(float *)((int)pvVar6 + 0x214);
      }
      FUN_005e7f98(dVar25,lVar18,lVar18);
      FUN_005e7f54(lVar17,lVar17,lVar18);
      uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x2a),
                            (double)*(float *)((int)puVar8 + 0x154));
      dVar25 = (double)fastfunc::FastDiffRots(uVar26,(double)(moby->rotation).z);
      dVar24 = (double)mathfunc::cosf((float)dVar25);
      dVar24 = (double)(float)((double)(float)((double)*(float *)((int)pvVar6 + 0x214) *
                                              0.3490658402442932) * dVar24);
      dVar30 = (double)(float)(dVar24 / (double)(float)((double)mobyutil::g_FrameTime * dVar29));
      dVar25 = (double)FUN_005e8128(dVar25,dVar24,(double)*(float *)((int)pvVar6 + 0x214),
                                    (double)(float)((double)mobyutil::g_FrameTime * dVar29));
      dVar24 = 1.0471975803375244;
      dVar29 = (double)((float)((double)(*(float *)((int)pvVar6 + 0x214) * -0.34906584) * dVar25) /
                       (float)((double)mobyutil::g_FrameTime * dVar29));
      dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,dVar30,
                                  (double)(DAT_0071f418 * 0.5235988),
                                  (double)(DAT_0071f418 * 1.0471976),
                                  (double)(float)((double)mobyutil::g_FrameTime * 0.7853981852531433
                                                 ));
      (moby->rotation).y = (float)dVar25;
      dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar29,
                                  (double)(float)((double)DAT_0071f418 * dVar24),
                                  (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                  (double)(mobyutil::g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar25;
    }
    goto LAB_003f235c;
  }
  if (uVar2 != '\x02') {
    if (uVar2 == '\x01') {
      pSVar7 = Splines[*(int *)((int)pvVar6 + 0x24c)];
      if ((*(int *)((int)pvVar6 + 0x248) == -1) ||
         (iVar12 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x248)), iVar12 != 0)
         ) {
        lVar17 = lVar11 + 0x10;
        *(undefined4 *)((int)pvVar6 + 0x248) = 0xffffffff;
        mobyutil::MB_PathFollowToPos
                  (0x408f380000000000,0x4014000000000000,0,pSVar7,lVar17,uVar10 - 0x260,
                   uVar10 - 0xac,uVar10 - 0xb0);
        dVar25 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar8 + 0x284));
        dVar30 = (double)(float)((double)(float)(dVar25 * (double)pSVar7->points[0].w +
                                                (double)*(float *)(puVar8 + 0x50)) + dVar24);
        dVar25 = (double)FUN_005e8548(lVar17,pSVar7->points + pSVar7->cnt + -1);
        if ((double)((*(float *)((int)pvVar6 + 0x214) * *(float *)((int)pvVar6 + 0x214)) /
                    (float)((double)(DAT_0071f418 * 10.0) * dVar24)) < dVar25) {
          fVar3 = DAT_0071f418 * 10.0 + *(float *)((int)pvVar6 + 0x214);
          *(float *)((int)pvVar6 + 0x214) = fVar3;
          if ((float)((double)mobyutil::g_FrameTime * dVar29) < fVar3) {
            *(float *)((int)pvVar6 + 0x214) = (float)((double)mobyutil::g_FrameTime * dVar29);
          }
        }
        else {
          fVar3 = -(DAT_0071f418 * 10.0 - *(float *)((int)pvVar6 + 0x214));
          *(float *)((int)pvVar6 + 0x214) = fVar3;
          if (fVar3 < DAT_0085433c * mobyutil::g_FrameTime) {
            *(float *)((int)pvVar6 + 0x214) = DAT_0085433c * mobyutil::g_FrameTime;
          }
        }
        uVar13 = fastfunc::FastDoubleToInt((double)(float)(dVar30 / (double)pSVar7->points[0].w));
        *(undefined4 *)((int)puVar8 + 0x284) = uVar13;
        dVar25 = (double)fastfunc::FastIntToDouble();
        dVar24 = (double)pSVar7->points[0].w;
        iVar12 = *(int *)((int)puVar8 + 0x284);
        *(float *)(puVar8 + 0x50) = (float)(-(double)(float)(dVar25 * dVar24 - dVar30) / dVar24);
        if (pSVar7->cnt + -1 <= iVar12) {
          if ((*(int *)((int)pvVar6 + 0x134) != -1) &&
             (*(float *)((int)pvVar6 + 0x214) <= DAT_0085433c * mobyutil::g_FrameTime)) {
            iVar12 = *(int *)((int)pvVar6 + 0x130);
            auVar31 = ZEXT416(0xffffffff);
            auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
            *(undefined4 *)((int)pvVar6 + 0x23c) = 0;
            auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
            (moby->pos).x = *(f32 *)(iVar12 + 0x10);
            (moby->pos).y = *(f32 *)(iVar12 + 0x14);
            (moby->pos).z = *(f32 *)(iVar12 + 0x18);
            (moby->pos).w = *(f32 *)(iVar12 + 0x1c);
            *(undefined4 *)((int)pvVar6 + 0x120) = 1;
            moby->setByGroup = '\x02';
            moby->state = '\x04';
            auVar31 = loadVectorLeftIndexed(0x30,0x3f0530);
            auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar31 = vectorMultiplyAddFloatingPoint
                                (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 |
                                         auVar31 << 0x60,auVar32);
            auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
            auVar31 = vectorSplatHalfWord(auVar31,1);
            uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x206,uVar23);
            *(undefined2 *)((int)pvVar6 + 0x206) = uVar14;
            goto LAB_003f235c;
          }
          if (*(float *)((int)pvVar6 + 0x214) <= DAT_0085433c * mobyutil::g_FrameTime) {
            trapWord(0x1f,in_LR,in_LR);
            return;
          }
          iVar12 = pSVar7->cnt + -2;
          *(int *)((int)puVar8 + 0x284) = iVar12;
          *(undefined4 *)(puVar8 + 0x50) = 0x3f800000;
        }
        lVar18 = uVar10 - 0x260;
        FUN_005e81f0(lVar18,pSVar7->points + iVar12 + 1,pSVar7->points + iVar12);
        fVar3 = *(float *)(puVar8 + 0x50);
        *(float *)(puVar8 + 0x1a) = *(float *)(puVar8 + 0x1a) * fVar3;
        *(float *)((int)puVar8 + 0xd4) = *(float *)((int)puVar8 + 0xd4) * fVar3;
        *(float *)(puVar8 + 0x1b) = *(float *)(puVar8 + 0x1b) * fVar3;
        FUN_005e7f54(lVar18,lVar18,pSVar7->points + *(int *)((int)puVar8 + 0x284));
        uVar23 = (ulonglong)*(uint *)((int)puVar8 + 0x284) + 1;
        if ((int)uVar23 < pSVar7->cnt + -8) {
          iVar12 = (int)((uVar23 & 0xffffffff) << 4);
          dVar25 = (double)(moby->rotation).z;
          uVar26 = FUN_005e8338((double)(*(float *)((int)&pSVar7->points[0].x + iVar12) -
                                        (moby->pos).x),
                                (double)(*(float *)((int)&pSVar7->points[0].y + iVar12) -
                                        (moby->pos).y));
          dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                     (dVar25,uVar26,0x3f847ae140000000,0x3fd3333340000000,
                                      0x3fb99999a0000000);
        }
        else {
          dVar25 = (double)(moby->rotation).z;
          uVar26 = FUN_005e8338((double)(*(float *)(puVar8 + 0x46) - (moby->pos).x),
                                (double)(*(float *)((int)puVar8 + 0x234) - (moby->pos).y));
          dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                     (dVar25,uVar26,0x3f847ae140000000,0x3fd3333340000000,
                                      0x3fb99999a0000000);
        }
        lVar18 = uVar10 - 0x270;
        (moby->rotation).z = (float)dVar25;
        FUN_005e81f0(lVar18,uVar10 - 0x260,lVar17);
        dVar25 = (double)FUN_005e8030(lVar18);
        if ((double)*(float *)((int)pvVar6 + 0x214) - dVar25 < 0.0) {
          dVar25 = (double)*(float *)((int)pvVar6 + 0x214);
        }
        FUN_005e7f98(dVar25,lVar18,lVar18);
        FUN_005e7f54(lVar17,lVar17,lVar18);
        uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x18),
                              (double)*(float *)((int)puVar8 + 0xc4));
        dVar25 = (double)fastfunc::FastDiffRots(uVar26,(double)(moby->rotation).z);
        dVar24 = (double)mathfunc::cosf((float)dVar25);
        dVar24 = (double)(float)((double)(*(float *)((int)pvVar6 + 0x214) * 0.34906584) * dVar24);
        dVar30 = (double)(float)(dVar24 / (double)(float)((double)mobyutil::g_FrameTime * dVar29));
        dVar25 = (double)FUN_005e8128(dVar25,dVar24,0x3fd6571840000000,
                                      (double)(float)((double)mobyutil::g_FrameTime * dVar29));
        dVar24 = 1.0471975803375244;
        dVar29 = (double)((float)((double)(*(float *)((int)pvVar6 + 0x214) * -0.34906584) * dVar25)
                         / (float)((double)mobyutil::g_FrameTime * dVar29));
        dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,dVar30,
                                    (double)(DAT_0071f418 * 0.5235988),
                                    (double)(DAT_0071f418 * 1.0471976),
                                    (double)(float)((double)mobyutil::g_FrameTime *
                                                   0.7853981852531433));
        (moby->rotation).y = (float)dVar25;
        dVar25 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)(moby->rotation).x,dVar29,
                                    (double)(float)((double)DAT_0071f418 * dVar24),
                                    (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                    (double)(mobyutil::g_FrameTime * 1.5707964));
        (moby->rotation).x = (float)dVar25;
      }
    }
    else if (uVar2 == '\0') {
      moby->shadow = ' ';
      *(undefined4 *)((int)pvVar6 + 0x20) = 0x40400000;
      uVar14 = fastfunc::FastDoubleToInt(0x4008000000000000);
      *(undefined1 *)((int)pvVar6 + 0x28) = 2;
      *(undefined1 *)((int)pvVar6 + 0x2e) = 1;
      *(undefined2 *)((int)pvVar6 + 0x24) = uVar14;
      *(undefined1 *)((int)pvVar6 + 0x58) = 0x19;
      *(undefined1 *)((int)pvVar6 + 0x59) = 1;
      *(undefined1 *)((int)pvVar6 + 0x5a) = 6;
      *(undefined1 *)((int)pvVar6 + 0x29) = 0;
      pSVar7 = Splines[*(int *)((int)pvVar6 + 0x134)];
      *(Spline **)((int)pvVar6 + 0x130) = pSVar7;
      if (*(int *)((int)pvVar6 + 0x164) != -1) {
        *(Spline **)((int)pvVar6 + 0x160) = Splines[*(int *)((int)pvVar6 + 0x164)];
      }
      (moby->pos).x = pSVar7->points[0].x;
      (moby->pos).y = pSVar7->points[0].y;
      (moby->pos).z = pSVar7->points[0].z;
      fVar3 = pSVar7->points[0].w;
      *(undefined4 *)((int)pvVar6 + 0x120) = 1;
      (moby->pos).w = fVar3;
      *(undefined4 *)((int)pvVar6 + 0x214) = 0;
      *(undefined4 *)((int)pvVar6 + 0x218) = 0;
      *(undefined4 *)((int)pvVar6 + 0x21c) = 0;
      *(undefined4 *)((int)pvVar6 + 0x23c) = 0;
      mobyfunc::AttachManipulator(moby,0,(int)pvVar6 + 0x180);
      mobyfunc::AttachManipulator(moby,1,(int)pvVar6 + 0x1c0);
      fVar4 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar6 + 0x224) = 0;
      *(f32 *)((int)pvVar6 + 0x220) = fVar4;
      fVar4 = (moby->rotation).y;
      *(undefined4 *)((int)pvVar6 + 0x22c) = 0;
      *(undefined4 *)((int)pvVar6 + 0x250) = 0xffffffff;
      sVar5 = moby->drawDistance;
      *(undefined4 *)((int)pvVar6 + 0x240) = 0;
      *(f32 *)((int)pvVar6 + 0x228) = fVar4;
      if (sVar5 < 0x80) {
        moby->drawDistance = 0x80;
      }
      if (*(int *)((int)pvVar6 + 0x238) != -1) {
        pMVar22 = MobyInstance + *(int *)((int)pvVar6 + 0x238);
        mobyutil::MB_SetAnimation(pMVar22,8,0,0);
        pMVar22->updateDistance = '\0';
        pMVar22->collision = (ushort *)0x0;
        pMVar22->modeBits =
             pMVar22->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
      }
      if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) ||
          (*(int *)((int)pvVar6 + 0x24c) == -1)) || (*(int *)((int)pvVar6 + 0x248) == -1)) {
        moby->state = '\x02';
      }
      else {
        pSVar7 = Splines[*(int *)((int)pvVar6 + 0x24c)];
        if (0 < pSVar7->cnt + -2) {
          iVar12 = 0;
          pSVar20 = pSVar7;
          do {
            dVar25 = (double)FUN_005e8548(pSVar20->points,pSVar20->points + 1);
            pSVar20->points[0].w = (float)dVar25;
            iVar12 = iVar12 + 1;
            pSVar20 = (Spline *)pSVar20->points;
          } while (iVar12 < pSVar7->cnt + -2);
        }
        (moby->pos).x = pSVar7->points[0].x;
        (moby->pos).y = pSVar7->points[0].y;
        (moby->pos).z = pSVar7->points[0].z;
        fVar3 = pSVar7->points[0].w;
        moby->state = '\x01';
        (moby->pos).w = fVar3;
      }
    }
    goto LAB_003f235c;
  }
  piVar16 = (int *)((int)pvVar6 + 0x150U +
                   ((uint)((LZCOUNT(-*(int *)((int)pvVar6 + 0x23c)) << 0x3a) >> 0x3f) &
                   (int)pvVar6 + (0x120 - ((int)pvVar6 + 0x150U))));
  iVar12 = *piVar16;
  uVar26 = FUN_005e8338((double)(*(float *)(puVar8 + 0x46) - (moby->pos).x),
                        (double)(*(float *)((int)puVar8 + 0x234) - (moby->pos).y));
  dVar25 = (double)mobyutil::MB_DeltAngSpeed
                             (dVar25,uVar26,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000
                             );
  (moby->rotation).z = (float)dVar25;
  iVar21 = *(int *)((int)pvVar6 + 0x240);
  dVar25 = 3.1415927410125732;
  dVar30 = 12.566370964050293;
  if ((((iVar21 == 0) || (*(short *)(iVar21 + 0xa6) != 0x350)) || (*(char *)(iVar21 + 0x20) == -2))
     || (*(char *)(iVar21 + 0x20) == -3)) {
    mobyfunc::GetBonePosition(lVar11,0,uVar10 - 0x250);
    fastfunc::FastVecSub(uVar10 - 0x220,uVar10 - 0x100,uVar10 - 0x250);
    *(undefined4 *)(puVar8 + 0x1e) = *(undefined4 *)(puVar8 + 0x22);
    *(undefined4 *)((int)puVar8 + 0xf4) = *(undefined4 *)((int)puVar8 + 0x114);
    *(undefined4 *)(puVar8 + 0x1f) = *(undefined4 *)(puVar8 + 0x23);
    *(undefined4 *)((int)puVar8 + 0xfc) = *(undefined4 *)((int)puVar8 + 0x11c);
    fastfunc::FastNormalizeRMtx4(uVar10 - 0x140,lVar11 + 0xc0);
    FUN_005e825c(uVar10 - 0x240,uVar10 - 0x240,uVar10 - 0x140);
    dVar28 = (double)*(float *)((int)pvVar6 + 0x220);
    uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x1e),(double)*(float *)((int)puVar8 + 0xf4));
    dVar27 = 6.2831854820251465;
    dVar30 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar28,uVar26,
                                (double)(float)((double)DAT_0071f418 * 6.2831854820251465),
                                (double)(float)((double)DAT_0071f418 * dVar30),
                                (double)(mobyutil::g_FrameTime * 6.2831855));
    *(float *)((int)pvVar6 + 0x220) = (float)dVar30;
    dVar28 = (double)*(float *)((int)pvVar6 + 0x228);
    dVar30 = (double)FUN_005e8338((double)SQRT(*(float *)(puVar8 + 0x1e) * *(float *)(puVar8 + 0x1e)
                                               + *(float *)((int)puVar8 + 0xf4) *
                                                 *(float *)((int)puVar8 + 0xf4)),
                                  (double)*(float *)(puVar8 + 0x1f));
    dVar25 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar28,-dVar30,(double)(float)((double)DAT_0071f418 * dVar25),
                                (double)(float)((double)DAT_0071f418 * dVar27),
                                (double)(mobyutil::g_FrameTime * 1.5707964));
    *(float *)((int)pvVar6 + 0x228) = (float)dVar25;
    fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x220),uVar23 + 400,2);
    fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x228),uVar23 + 0x1d0,2);
    *(undefined4 *)((int)pvVar6 + 0x240) = 0;
  }
  else {
    mobyfunc::GetBonePosition(lVar11,0,uVar10 - 0x250);
    fastfunc::FastVecSub
              (uVar10 - 0x210,(ulonglong)*(uint *)((int)pvVar6 + 0x240) + 0x10,uVar10 - 0x250);
    *(undefined4 *)(puVar8 + 0x1e) = *(undefined4 *)(puVar8 + 0x24);
    *(undefined4 *)((int)puVar8 + 0xf4) = *(undefined4 *)((int)puVar8 + 0x124);
    *(undefined4 *)(puVar8 + 0x1f) = *(undefined4 *)(puVar8 + 0x25);
    *(undefined4 *)((int)puVar8 + 0xfc) = *(undefined4 *)((int)puVar8 + 300);
    fastfunc::FastNormalizeRMtx4(uVar10 - 0x140,lVar11 + 0xc0);
    FUN_005e825c(uVar10 - 0x240,uVar10 - 0x240,uVar10 - 0x140);
    dVar28 = (double)*(float *)((int)pvVar6 + 0x220);
    uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x1e),(double)*(float *)((int)puVar8 + 0xf4));
    dVar27 = 6.2831854820251465;
    dVar30 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar28,uVar26,
                                (double)(float)((double)DAT_0071f418 * 6.2831854820251465),
                                (double)(float)((double)DAT_0071f418 * dVar30),
                                (double)(mobyutil::g_FrameTime * 6.2831855));
    *(float *)((int)pvVar6 + 0x220) = (float)dVar30;
    dVar28 = (double)*(float *)((int)pvVar6 + 0x228);
    dVar30 = (double)FUN_005e8338((double)SQRT(*(float *)(puVar8 + 0x1e) * *(float *)(puVar8 + 0x1e)
                                               + *(float *)((int)puVar8 + 0xf4) *
                                                 *(float *)((int)puVar8 + 0xf4)),
                                  (double)*(float *)(puVar8 + 0x1f));
    dVar25 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar28,-dVar30,(double)(float)((double)DAT_0071f418 * dVar25),
                                (double)(float)((double)DAT_0071f418 * dVar27),
                                (double)(mobyutil::g_FrameTime * 1.5707964));
    *(float *)((int)pvVar6 + 0x228) = (float)dVar25;
    fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x220),uVar23 + 400,2);
    fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x228),uVar23 + 0x1d0,2);
  }
  if ((0 < iVar12) && (iVar12 < *(int *)piVar16[4] + -1)) {
    dVar25 = (double)FUN_005e8588((int *)piVar16[4] + iVar12 * 4 + 4,uVar10 - 0x100);
    if (((dVar25 < dVar29) &&
        ((ABS(*(float *)(puVar8 + 0x47) - (moby->pos).z) < 10.0 &&
         (dVar29 = (double)FUN_005e8548(piVar16[4] + iVar12 * 0x10 + 0x20,uVar10 - 0x100),
         dVar25 < dVar29)))) && (iVar12 < *(int *)piVar16[4] + -2)) {
      *piVar16 = *piVar16 + 1;
    }
  }
  iVar12 = iVar12 * 0x10;
  lVar17 = lVar11 + 0x10;
  FUN_005e81f0(uVar10 - 0x230,piVar16[4] + iVar12 + 0x10,lVar17);
  dVar25 = (double)FUN_005e8030(uVar10 - 0x230);
  dVar29 = (double)DAT_0071f418;
  dVar30 = (double)*(float *)((int)pvVar6 + 0x214);
  dVar27 = 4.0;
  if (dVar25 < (double)((float)(dVar30 * dVar30) / (float)((double)(float)(dVar29 * 4.0) * dVar24)))
  {
LAB_003f14d8:
    fVar3 = -(float)(dVar29 * dVar27 - dVar30);
    *(float *)((int)pvVar6 + 0x214) = fVar3;
    if (fVar3 < 0.0) {
      *(undefined4 *)((int)pvVar6 + 0x214) = 0;
    }
  }
  else {
    dVar25 = (double)FUN_005e8548(piVar16[4] + iVar12 + 0x10,uVar10 - 0x100);
    dVar24 = (double)FUN_005e8548(lVar17,uVar10 - 0x100);
    if (dVar25 < dVar24) {
      dVar29 = (double)DAT_0071f418;
      dVar30 = (double)*(float *)((int)pvVar6 + 0x214);
      goto LAB_003f14d8;
    }
    fVar3 = (float)((double)DAT_0071f418 * dVar27 + (double)*(float *)((int)pvVar6 + 0x214));
    *(float *)((int)pvVar6 + 0x214) = fVar3;
    if (mobyutil::g_FrameTime * 10.0 < fVar3) {
      *(float *)((int)pvVar6 + 0x214) = mobyutil::g_FrameTime * 10.0;
    }
  }
  dVar25 = (double)FUN_005e8548(piVar16[4] + iVar12 + 0x10,uVar10 - 0x100);
  dVar24 = (double)FUN_005e8548(lVar17,uVar10 - 0x100);
  if (dVar24 <= dVar25) {
    FUN_005e7f98((double)*(float *)((int)pvVar6 + 0x214),uVar10 - 0x230,uVar10 - 0x230);
  }
  else {
    FUN_005e7f98(-(double)*(float *)((int)pvVar6 + 0x214),uVar10 - 0x230,uVar10 - 0x230);
  }
  FUN_005e7f54(lVar17,lVar17,uVar10 - 0x230);
  uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x20),(double)*(float *)((int)puVar8 + 0x104));
  dVar25 = (double)fastfunc::FastDiffRots(uVar26,(double)(moby->rotation).z);
  dVar24 = (double)mathfunc::cosf((float)dVar25);
  dVar29 = 10.0;
  dVar24 = (double)(float)((double)(*(float *)((int)pvVar6 + 0x214) * 0.34906584) * dVar24);
  dVar30 = (double)(float)(dVar24 / (double)(mobyutil::g_FrameTime * 10.0));
  dVar25 = (double)FUN_005e8128(dVar25,dVar24,(double)(mobyutil::g_FrameTime * 10.0));
  dVar24 = 1.0471975803375244;
  dVar29 = (double)((float)((double)(*(float *)((int)pvVar6 + 0x214) * -0.34906584) * dVar25) /
                   (float)((double)mobyutil::g_FrameTime * dVar29));
  dVar25 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)(moby->rotation).y,dVar30,(double)(DAT_0071f418 * 0.5235988),
                              (double)(DAT_0071f418 * 1.0471976),
                              (double)(float)((double)mobyutil::g_FrameTime * 0.7853981852531433));
  (moby->rotation).y = (float)dVar25;
  dVar25 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)(moby->rotation).x,dVar29,
                              (double)(float)((double)DAT_0071f418 * dVar24),
                              (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                              (double)(mobyutil::g_FrameTime * 1.5707964));
  iVar12 = *(int *)((int)pvVar6 + 0x23c);
  (moby->rotation).x = (float)dVar25;
  if (iVar12 == 0) {
    iVar12 = *(int *)((int)pvVar6 + 0x20c);
  }
  else {
    iVar12 = *(int *)((int)pvVar6 + 0x244);
  }
  iVar12 = mobyutil::MB_IsPntInCuboid((Vec4 *)(puVar8 + 0x46),(longlong)iVar12);
  if (iVar12 == 0) {
    iVar12 = mobyutil::MB_IsPntInCuboid
                       ((Vec4 *)(puVar8 + 0x46),(longlong)*(int *)((int)pvVar6 + 0x208));
    if ((iVar12 != 0) &&
       ((iVar12 = fastfunc::FastDecTimerS16(uVar23 + 0x204), iVar12 != 0 ||
        ((*(int *)((int)pvVar6 + 0x240) == 0 && (*(int *)((int)pvVar6 + 0x254) != 0)))))) {
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(100,0x3f0530);
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      lVar17 = uVar10 - 0x200;
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = vectorSplatHalfWord(auVar31,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x204,uVar23);
      *(undefined2 *)((int)pvVar6 + 0x204) = uVar14;
      *(undefined4 *)(puVar8 + 0x28) = *(undefined4 *)(puVar8 + 0x46);
      *(undefined4 *)((int)puVar8 + 0x144) = *(undefined4 *)((int)puVar8 + 0x234);
      *(undefined4 *)(puVar8 + 0x29) = *(undefined4 *)(puVar8 + 0x47);
      *(undefined4 *)((int)puVar8 + 0x14c) = *(undefined4 *)((int)puVar8 + 0x23c);
      FUN_005e81f0(lVar17,uVar10 - 0x1f0,uVar10 - 0x250);
      FUN_005e84c0((double)(mobyutil::g_FrameTime * 6.0),lVar17,lVar17);
      fVar3 = animationSpeed;
      *(undefined4 *)(puVar8 + 0x27) = 0;
      puVar8[0x52] = (longlong)(int)(fVar3 * 240.5);
      uVar13 = FUN_00486008((double)*(float *)(puVar8 + 0x47),lVar17,uVar10 - 0x250,lVar11,
                            *(undefined4 *)((int)puVar8 + 0x294));
      *(undefined4 *)((int)pvVar6 + 0x240) = uVar13;
    }
  }
  else {
    bVar1 = *(int *)((int)pvVar6 + 0x23c) == 0;
    if (bVar1) {
      iVar12 = *(int *)((int)pvVar6 + 0x230);
    }
    else {
      iVar12 = *(int *)((int)pvVar6 + 0x234);
    }
    if (iVar12 != -1) {
      if (bVar1) {
        iVar12 = *(int *)((int)pvVar6 + 0x230);
      }
      else {
        iVar12 = *(int *)((int)pvVar6 + 0x234);
      }
      iVar21 = 0;
      pSVar7 = Splines[iVar12];
      pSVar20 = pSVar7;
      if (0 < pSVar7->cnt + -2) {
        do {
          dVar25 = (double)FUN_005e8548(pSVar20->points,pSVar20->points + 1);
          pSVar20->points[0].w = (float)dVar25;
          iVar21 = iVar21 + 1;
          pSVar20 = (Spline *)pSVar20->points;
        } while (iVar21 < pSVar7->cnt + -2);
      }
    }
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    moby->setByGroup = '\x03';
    moby->state = '\x04';
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0x30,0x3f0530);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    auVar31 = vectorSplatHalfWord(auVar31,1);
    uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x206,uVar23);
    *(undefined2 *)((int)pvVar6 + 0x206) = uVar14;
  }
LAB_003f235c:
  if ((moby->enabled != '\0') &&
     (dVar25 = (double)FUN_005e8548(lVar11 + 0x10,0x951500), dVar25 < 40.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar11);
  }
  dVar24 = (double)(moby->pos).z;
  dVar25 = (double)mathfunc::cosf(*(float *)((int)pvVar6 + 0x210));
  (moby->pos).z = -(float)((double)DAT_00854338 * dVar25 - dVar24);
  dVar25 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar6 + 0x210),
                              6.2831855 / (animationSpeed * DAT_00854334 * 60.0));
  *(float *)((int)pvVar6 + 0x210) = (float)dVar25;
  dVar24 = (double)(moby->pos).z;
  dVar25 = (double)mathfunc::cosf((float)dVar25);
  (moby->pos).z = (float)((double)DAT_00854338 * dVar25 + dVar24);
  if (*(int *)((int)pvVar6 + 0x238) != -1) {
    pMVar22 = MobyInstance + *(int *)((int)pvVar6 + 0x238);
    (pMVar22->pos).x = (moby->pos).x;
    (pMVar22->pos).y = (moby->pos).y;
    (pMVar22->pos).z = (moby->pos).z;
    (pMVar22->pos).w = (moby->pos).w;
    (pMVar22->rotation).x = (moby->rotation).x;
    (pMVar22->rotation).y = (moby->rotation).y;
    (pMVar22->rotation).z = (moby->rotation).z;
    (pMVar22->rotation).w = (moby->rotation).w;
    mobyfunc::UpdateMobyAnimFrame(pMVar22);
    mobyfunc::UpdateMobyTransform(pMVar22);
    pMVar22->modeBits = pMVar22->modeBits | (NO_POST_UPDATE|NO_UPDATE);
  }
                    /* WARNING: Read-only address (ram,0x003f05b0) is written */
                    /* WARNING: Read-only address (ram,0x003f05c0) is written */
                    /* WARNING: Read-only address (ram,0x003f05e0) is written */
                    /* WARNING: Read-only address (ram,0x003f05f0) is written */
  return;
}



//==== 003f24f0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M632_003f24f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M632_003f24f0(void)

{
  DAT_0085438c = 0x10000;
  return;
}



//==== 003f25b8  ns=mobyupdate_unsorted  size=0xca8
// sig: undefined UpdateMoby_632(MobyInstance * moby)
// callers(0): 
// callees(10): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fe484 mobyutil::MB_randRange; 0010581c mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 00109ec0 mobyutil::DeltAng; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00121740 partupd::SpawnPart_4; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 632 */

void mobyupdate_unsorted::UpdateMoby_632(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar22;
  undefined8 uVar21;
  float *pfVar24;
  longlong lVar23;
  uint unused2;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
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
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x1c0;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar18;
  puVar12[0x3a] = in_LR;
  puVar12[0x36] = in_f30;
  puVar12[0x37] = in_f31;
  puVar12[0x35] = unaff_r31;
  bVar2 = moby->state;
  puVar12[0x34] = unaff_r30;
  pfVar7 = (float *)moby->pVar;
  puVar12[0x33] = unaff_r29;
  puVar12[0x32] = unaff_r28;
  puVar12[0x31] = unaff_r27;
  puVar12[0x30] = unaff_r26;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      fVar3 = (moby->pos).y;
      *(f32 *)(puVar12 + 0xe) = (moby->pos).x;
      fVar4 = (moby->pos).z;
      *(f32 *)((int)puVar12 + 0x74) = fVar3;
      fVar3 = (moby->pos).w;
      *(float *)(puVar12 + 0xf) = fVar4;
      *(f32 *)((int)puVar12 + 0x7c) = fVar3;
      fVar8 = *pfVar7;
      fVar9 = pfVar7[1];
      fVar4 = (pfVar7[3] - fVar4) * 0.1;
      pfVar7[2] = fVar4;
      if (fVar4 <= mobyutil::g_FrameTime * 8.0) {
        if (fVar4 < mobyutil::g_FrameTime * -8.0) {
          pfVar7[2] = mobyutil::g_FrameTime * -8.0;
        }
      }
      else {
        pfVar7[2] = mobyutil::g_FrameTime * 8.0;
      }
      fVar6 = ABS(*pfVar7);
      fVar5 = ABS(pfVar7[1]);
      *(float *)(puVar12 + 0x1c) = fVar6 - fVar5;
      dVar31 = 0.0;
      dVar32 = 0.7853981852531433;
      uVar20 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar9 >> 0x1d) & 4;
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar8 = fVar6;
      if (*(float *)(puVar12 + 0x1c) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      if (*(float *)(puVar12 + 0x1c) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar9 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar28 = dVar31;
      if (0.0 < fVar8) {
        lVar26 = uVar18 - 0x1b0;
        lVar25 = uVar18 - 0x6c;
        lVar23 = uVar18 - 0x7c;
        lVar27 = 2;
        fVar8 = (fVar5 - fVar8) / (fVar5 + fVar8);
        fVar5 = fVar8 * fVar8;
        *(float *)(puVar12 + 0x2a) = fVar8;
        *(float *)(puVar12 + 0x29) = fVar8;
        *(float *)((int)puVar12 + 0x14c) = fVar8;
        *(float *)((int)puVar12 + 0x144) = fVar8;
        fVar8 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x29) = *(float *)(puVar12 + 0x29) * fVar5;
        *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar8;
        *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar8 * fVar5;
        do {
          *(float *)((int)lVar26 + 0x144) = *(float *)((int)lVar26 + 0x134) * fVar8 * fVar8;
          iVar22 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar8 * fVar8;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar18 - 0x7c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar26 = lVar1;
        lVar23 = lVar25;
        do {
          fVar8 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar26 + 0x144) = *(float *)((int)lVar26 + 0x144) * fVar8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar23 = 2;
        lVar26 = lVar1;
        do {
          iVar22 = (int)lVar26;
          iVar13 = (int)lVar25;
          lVar26 = lVar26 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0x144)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar9);
      }
      fVar4 = g_heroPosition.x - (moby->pos).x;
      fVar8 = g_heroPosition.y - (moby->pos).y;
      fVar5 = ABS(fVar4);
      fVar9 = ABS(fVar8);
      *(float *)((int)puVar12 + 0xd4) = fVar4;
      *(float *)(puVar12 + 0x1b) = fVar8;
      *(float *)(puVar12 + 0x18) = (float)dVar28;
      *(float *)((int)puVar12 + 0xdc) = fVar5 - fVar9;
      uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar12 + 0xd4));
      if (*(float *)((int)puVar12 + 0xdc) - 0.0 < 0.0) {
        fVar4 = fVar9;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar9 = ABS(*(float *)(puVar12 + 0x1b));
      if (*(float *)((int)puVar12 + 0xdc) - 0.0 < 0.0) {
        fVar9 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar29 = dVar31;
      if (0.0 < fVar4) {
        lVar26 = uVar18 - 0x1b0;
        lVar25 = uVar18 - 0x8c;
        lVar23 = uVar18 - 0x9c;
        lVar27 = 2;
        fVar4 = (fVar9 - fVar4) / (fVar9 + fVar4);
        fVar9 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x26) = fVar4;
        *(float *)(puVar12 + 0x25) = fVar4;
        *(float *)((int)puVar12 + 300) = fVar4;
        *(float *)((int)puVar12 + 0x124) = fVar4;
        fVar4 = fVar9 * fVar9;
        *(float *)(puVar12 + 0x25) = *(float *)(puVar12 + 0x25) * fVar9;
        *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar4;
        *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar4 * fVar9;
        do {
          *(float *)((int)lVar26 + 0x124) = *(float *)((int)lVar26 + 0x114) * fVar4 * fVar4;
          iVar22 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar18 - 0x9c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar26 = lVar1;
        lVar23 = lVar25;
        do {
          fVar4 = *pfVar24;
          fVar9 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar26 + 0x124) = *(float *)((int)lVar26 + 0x124) * fVar4;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar9;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar23 = 2;
        lVar26 = lVar1;
        do {
          iVar22 = (int)lVar26;
          iVar13 = (int)lVar25;
          lVar26 = lVar26 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x124)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar8 + fVar5);
      }
      dVar28 = (double)fastfunc::FastSubRots((float)dVar28,(float)dVar29);
      fVar8 = mobyutil::g_FrameTime;
      fVar4 = *pfVar7;
      if (dVar28 < 1.5707963705062866) {
        fVar4 = g_heroPosition.x - (moby->pos).x;
        fVar9 = g_heroPosition.y - (moby->pos).y;
        dVar29 = ABS((double)fVar4);
        dVar30 = ABS((double)fVar9);
        *(float *)(puVar12 + 0x19) = fVar4;
        *(float *)((int)puVar12 + 0xcc) = fVar9;
        *(float *)(puVar12 + 0x1a) = (float)(dVar29 - dVar30);
        unused2 = *(uint *)(puVar12 + 0x1a);
        uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1c) & 8 |
                 (ulonglong)(unused2 >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1d) & 4;
        pfVar24 = (float *)(uVar20 << 2);
        dVar28 = ABS((double)*(float *)(puVar12 + 0x19));
        if ((double)*(float *)(puVar12 + 0x1a) - dVar31 < 0.0) {
          dVar28 = dVar30;
        }
        fVar4 = pfVar24[0x1cd640];
        dVar30 = ABS((double)*(float *)((int)puVar12 + 0xcc));
        if ((double)*(float *)(puVar12 + 0x1a) - dVar31 < 0.0) {
          dVar30 = dVar29;
        }
        fVar9 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        dVar29 = dVar31;
        if (dVar31 < dVar28) {
          lVar26 = uVar18 - 0x1b0;
          lVar23 = uVar18 - 0xbc;
          lVar25 = uVar18 - 0xac;
          lVar27 = 2;
          fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
          fVar6 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x22) = fVar5;
          *(float *)(puVar12 + 0x21) = fVar5;
          *(float *)((int)puVar12 + 0x10c) = fVar5;
          *(float *)((int)puVar12 + 0x104) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar6;
          *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar5;
          *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar26 + 0x104) = *(float *)((int)lVar26 + 0xf4) * fVar5 * fVar5;
            iVar22 = (int)lVar23;
            lVar26 = lVar26 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar18 - 0xbc;
          pfVar24 = (float *)&DAT_007358e0;
          lVar26 = lVar1;
          lVar23 = lVar25;
          do {
            fVar5 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar26 + 0x104) = *(float *)((int)lVar26 + 0x104) * fVar5;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            unused2 = (uint)lVar23;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar23 = 2;
          lVar26 = lVar1;
          dVar28 = dVar31;
          do {
            iVar22 = (int)lVar26;
            lVar26 = lVar26 + 0x10;
            iVar13 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0x104)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar29 = (double)((float)(dVar28 + dVar32) * fVar4 + fVar9);
        }
        mobyutil::DeltAng((float)dVar29,DAT_008543b4 * 0.017453292 * fVar8,(float *)(puVar12 + 0x18)
                          ,(int)pfVar24,unused2,0);
        fVar4 = *(float *)(puVar12 + 0x18);
        fVar8 = fVar4 + 1.5707963;
        fVar5 = pfVar7[1] * pfVar7[1];
        fVar9 = 3.1415925 - fVar8;
        if (fVar8 - (3.1415925 - fVar8) < 0.0) {
          fVar9 = fVar8;
        }
        fVar6 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar6 = fVar4;
        }
        fVar14 = -3.1415925 - fVar8;
        if ((-3.1415925 - fVar8) - fVar9 < 0.0) {
          fVar14 = fVar9;
        }
        fVar8 = fVar14 * fVar14;
        fVar15 = fVar8 * fVar8 * fVar14;
        fVar16 = fVar8 * fVar15;
        fVar9 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
          fVar9 = fVar6;
        }
        fVar4 = (fVar8 * fVar16 * 2.601887e-06 +
                fVar16 * -0.0001980741 +
                fVar15 * 0.0083330255 + fVar8 * fVar14 * -0.16666657 + fVar14) *
                SQRT(*pfVar7 * *pfVar7 + fVar5);
        fVar8 = fVar9 * fVar9;
        *pfVar7 = fVar4;
        fVar6 = fVar8 * fVar8 * fVar9;
        fVar14 = fVar8 * fVar6;
        pfVar7[1] = (fVar8 * fVar14 * 2.601887e-06 +
                    fVar14 * -0.0001980741 +
                    fVar6 * 0.0083330255 + fVar8 * fVar9 * -0.16666657 + fVar9) *
                    SQRT(fVar4 * fVar4 + fVar5);
      }
      (moby->pos).x = (moby->pos).x + fVar4;
      (moby->pos).y = (moby->pos).y + pfVar7[1];
      (moby->pos).z = (moby->pos).z + pfVar7[2];
      fVar4 = *pfVar7;
      fVar8 = pfVar7[1];
      dVar30 = ABS((double)*pfVar7);
      dVar28 = ABS((double)pfVar7[1]);
      *(float *)((int)puVar12 + 0xc4) = (float)(dVar30 - dVar28);
      uVar20 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar8 >> 0x1d) & 4;
      dVar29 = dVar30;
      if ((double)*(float *)((int)puVar12 + 0xc4) - dVar31 < 0.0) {
        dVar29 = dVar28;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      if ((double)*(float *)((int)puVar12 + 0xc4) - dVar31 < 0.0) {
        dVar28 = dVar30;
      }
      fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar30 = dVar31;
      if (dVar31 < dVar29) {
        lVar26 = uVar18 - 0x1b0;
        lVar25 = uVar18 - 0xcc;
        lVar23 = uVar18 - 0xdc;
        lVar27 = 2;
        fVar9 = (float)(dVar28 - dVar29) / (float)(dVar28 + dVar29);
        fVar5 = fVar9 * fVar9;
        *(float *)(puVar12 + 0x1e) = fVar9;
        *(float *)(puVar12 + 0x1d) = fVar9;
        *(float *)((int)puVar12 + 0xec) = fVar9;
        *(float *)((int)puVar12 + 0xe4) = fVar9;
        fVar9 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar5;
        *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar9;
        *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar9 * fVar5;
        do {
          *(float *)((int)lVar26 + 0xe4) = *(float *)((int)lVar26 + 0xd4) * fVar9 * fVar9;
          iVar22 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar18 - 0xdc;
        pfVar24 = (float *)&DAT_007358e0;
        lVar26 = lVar1;
        lVar23 = lVar25;
        do {
          fVar9 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar26 + 0xe4) = *(float *)((int)lVar26 + 0xe4) * fVar9;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar23 = 2;
        lVar26 = lVar1;
        dVar28 = dVar31;
        do {
          iVar22 = (int)lVar26;
          iVar13 = (int)lVar25;
          lVar26 = lVar26 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0xe4)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar30 = (double)((float)(dVar28 + dVar32) * fVar4 + fVar8);
      }
      (moby->rotation).z = (float)dVar30;
      lVar26 = lVar19 + 0x10;
      *(undefined4 *)((int)puVar12 + 0x8c) = 0;
      *(undefined4 *)(puVar12 + 0x11) = 0;
      *(undefined4 *)((int)puVar12 + 0x84) = 0;
      *(undefined4 *)(puVar12 + 0x10) = 0;
      iVar22 = mobyutil::MB_randRange(0xf,0x16);
      puVar12[0x2d] = (longlong)iVar22;
      dVar32 = 0.5;
      puVar12[0x2d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x2d] + 0.5));
      uVar10 = *(undefined4 *)((int)puVar12 + 0x16c);
      uVar21 = mobyutil::MB_randRange(0x14,0x23);
      partupd::SpawnPart_4(lVar26,uVar18 - 0x140,0x6f00afff,0xff,uVar10,0x28,uVar21,1);
      iVar22 = mobyutil::MB_randRange(0x1e,0x3c);
      puVar12[0x2d] = (longlong)iVar22;
      puVar12[0x2d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x2d] + dVar32));
      uVar10 = *(undefined4 *)((int)puVar12 + 0x16c);
      uVar21 = mobyutil::MB_randRange(0x32,0x4b);
      partupd::SpawnPart_4(lVar26,uVar18 - 0x140,0x1fffffff,0x4f4f4f,uVar10,0x28,uVar21,0);
      iVar22 = collproc::CollLine(lVar26,uVar18 - 0x150,0,pfVar7[4],0);
      if ((iVar22 != 0) && (CollOutput.pMoby != (MobyInstance *)pfVar7[4])) {
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          mobyutil::SetCollDamIn
                    (0x3ff0000000000000,uVar18 - 0x130,lVar19,0x10001,&DAT_003f2510,pfVar7);
          pMVar17 = CollOutput.pMoby;
          auVar43 = ZEXT416(0xffffffff);
          auVar33 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          auVar43 = ZEXT416(0xfffffff0);
          auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar35 = loadVectorLeftIndexed(0x94,lVar1);
          auVar37 = vectorMultiplyAddFloatingPoint(auVar35,auVar35,auVar33);
          auVar33 = ZEXT416(0);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          auVar36 = loadVectorLeftIndexed(0x90,lVar1);
          auVar38 = loadVectorLeftIndexed(0xa6,lVar19);
          auVar38 = vectorShiftRightWord
                              (auVar38,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60
                              );
          auVar37 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar37);
          auVar43 = auVar33;
          if ((double)SQRT(*(float *)(puVar12 + 0x12) * *(float *)(puVar12 + 0x12) +
                           *(float *)((int)puVar12 + 0x94) * *(float *)((int)puVar12 + 0x94)) !=
              dVar31) {
            auVar34 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar37);
            auVar43 = ZEXT416(0xffffffff);
            auVar33 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = ZEXT416(0xffffffff);
            auVar39 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = ZEXT416(0xffffffff);
            auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
            auVar43 = loadVectorLeftIndexed(0x38,0x3f2510);
            auVar39 = loadVectorLeftIndexed(0x3c,0x3f2510);
            auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar41 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar42 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = ZEXT416(0xffffffff);
            auVar45 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar39 = vectorMultiplyAddFloatingPoint(auVar37,auVar34,auVar33);
            auVar40 = vectorMultiplyAddFloatingPoint(auVar41,auVar34,auVar40);
            auVar43 = ZEXT416(0xffffffff);
            auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
            auVar43 = ZEXT416(0xffffffff);
            auVar33 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar34,auVar42);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar43,auVar40,auVar34);
            auVar39 = vectorShiftLeftIntegerWord(auVar46,auVar46);
            auVar43 = ZEXT416(0xffffffff);
            auVar40 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = ZEXT416(0xffffffff);
            auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
            auVar46 = vectorShiftLeftIntegerWord(auVar43,auVar43);
            auVar43 = vectorMultiplyAddFloatingPoint(auVar37,auVar34,auVar44);
            auVar44 = vectorMultiplyAddFloatingPoint(auVar41,auVar34,auVar45);
            auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar34,auVar42);
            auVar43 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar34);
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar37,auVar43,auVar39);
            auVar37 = vectorMultiplyAddFloatingPoint(auVar41,auVar43,auVar40);
            auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar43,auVar42);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar43);
            auVar43 = vectorMultiplyAddFloatingPoint(auVar36,auVar33,auVar46);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
          }
          auVar35 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar36 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x90,
                              lVar1);
          *(undefined4 *)(puVar12 + 0x12) = uVar10;
          uVar10 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x94,
                              lVar1);
          *(undefined4 *)((int)puVar12 + 0x94) = uVar10;
          *(undefined4 *)(puVar12 + 0x13) = 0x3f800000;
          auVar35 = vectorSplatHalfWord(auVar38,1);
          *(undefined4 *)((int)puVar12 + 0x9c) = 0x45afdf66;
          *(undefined1 *)(puVar12 + 0x15) = 0;
          *(undefined1 *)((int)puVar12 + 0xa9) = 1;
          uVar11 = storeVectorElementHalfWordIndexed(auVar35,0xaa,lVar1);
          *(undefined2 *)((int)puVar12 + 0xaa) = uVar11;
          auVar35 = loadVectorLeftIndexed(0x70,0x3f2510);
          auVar33 = vectorPermute(auVar43,auVar33,_DAT_003f2560);
          auVar43 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar33 = vectorPermute(auVar33,_DAT_003f2550,_DAT_003f2570);
          auVar43 = vectorPermute(auVar38,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 |
                                          auVar43 << 0x60,_DAT_003f2590);
          auVar43 = vectorPermute(auVar43,*(undefined1 (*) [16])(puVar12 + 0x14),_DAT_003f25a0);
          *(undefined1 (*) [16])(puVar12 + 8) = auVar33;
          *(undefined4 *)((int)puVar12 + 0x6c) = *(undefined4 *)((int)puVar12 + 0xbc);
          *(undefined4 *)(puVar12 + 0xd) = *(undefined4 *)(puVar12 + 0x17);
          *(undefined4 *)((int)puVar12 + 100) = *(undefined4 *)((int)puVar12 + 0xb4);
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(puVar12 + 0x16);
          *(undefined1 (*) [16])(puVar12 + 10) = auVar43;
          mobyutil::CollDamageMobyDirect
                    (pMVar17,0xb0,puVar12[8],puVar12[9],puVar12[10],puVar12[0xb],puVar12[0xc],
                     puVar12[0xd]);
        }
        moby->state = '\x02';
      }
      iVar22 = fastfunc::FastDecTimerS32(pfVar7 + 5);
      if (iVar22 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 3) {
    mobyutil::MB_SpawnExplosionSparks
              (0x3fd0000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_003f2510,
               0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 003f3260  ns=mobyupdate_helpers  size=0xec
// sig: undefined M987_003f3260(void)
// callers(0): 
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
mobyupdate_helpers::M987_003f3260
          (double param_1,undefined4 *param_2,f32 *param_3,undefined4 param_4,undefined4 param_5)

{
  f32 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = mobyfunc::CreateMoby(THRUSTERPACK|BOLT_CIRCLENUT|BLARG_HEAVY_INTERCEPTOR_0008);
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
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 003f334c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M987_003f334c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M987_003f334c(void)

{
  DAT_00854404 = 0x10000;
  return;
}



//==== 003f3388  ns=mobyupdate_helpers  size=0x8f4
// sig: undefined M987_003f3388(void)
// callers(1): 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}
// callees(2): 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1

void mobyupdate_helpers::M987_003f3388(int param_1,float *param_2,MobyInstance *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float *pfVar6;
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
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  double local_100;
  double local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  
  sVar5 = *(short *)(param_1 + 0xa6);
  pfVar6 = *(float **)(param_1 + 0x78);
  if (sVar5 < 0x3dd) {
    if (0x3db < sVar5) {
      dVar26 = (double)DAT_0085443c;
      dVar27 = (double)DAT_0085448c;
      local_100 = (double)DAT_00854448;
      local_f8 = (double)DAT_00854454;
      goto LAB_003f34a0;
    }
  }
  else if (sVar5 < 0x3de) {
    dVar26 = (double)DAT_00854440;
    dVar27 = (double)DAT_00854490;
    local_100 = (double)DAT_0085444c;
    local_f8 = (double)DAT_00854458;
    goto LAB_003f34a0;
  }
  dVar26 = (double)DAT_00854438;
  dVar27 = (double)DAT_00854488;
  local_100 = (double)DAT_00854444;
  local_f8 = (double)DAT_00854450;
LAB_003f34a0:
  dVar26 = (double)(float)(dVar26 * dVar27);
  local_ec = (float)(local_f8 * dVar27);
  local_f0 = (float)(local_100 * dVar27);
  fastfunc::FastEulerToMtx1(&local_140,pfVar6 + 4);
  fVar4 = pfVar6[0x18];
  fVar3 = fVar4 + 1.5707963;
  fVar1 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar1 = fVar4;
  }
  fVar14 = SQRT(local_138 * local_138 + local_140 * local_140 + local_13c * local_13c);
  fVar2 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar2 = fVar3;
  }
  fVar7 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar1 < 0.0) {
    fVar7 = fVar1;
  }
  fVar16 = SQRT(local_128 * local_128 + local_130 * local_130 + local_12c * local_12c);
  dVar27 = 0.0;
  fVar4 = fVar7 * fVar7;
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
    fVar1 = fVar2;
  }
  fVar8 = fVar1 * fVar1;
  fVar3 = (float)(dVar26 * 0.01745329238474369);
  local_e0 = 0xb94fb21d;
  fVar12 = fVar4 * fVar4 * fVar7;
  fVar13 = fVar4 * fVar12;
  fVar11 = fVar8 * fVar8 * fVar1;
  fVar2 = fVar8 * fVar11;
  local_e8 = -(fVar4 * fVar13 * 2.601887e-06 +
              fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7);
  fVar4 = fVar8 * fVar2;
  fVar1 = fVar2 * -0.0001980741 + fVar11 * 0.0083330255 + fVar8 * fVar1 * -0.16666657 + fVar1;
  fVar2 = local_e8 / fVar14;
  fVar7 = (fVar4 * 2.601887e-06 + fVar1) / fVar16;
  dVar26 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar26 = (double)(local_140 * fVar2);
  }
  dVar23 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar23 = (double)(local_13c * fVar2);
  }
  dVar24 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar24 = (double)(local_138 * fVar2);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar26 = (double)(local_140 * fVar2);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar23 = (double)(local_13c * fVar2);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar24 = (double)(local_138 * fVar2);
  }
  fVar2 = fVar3 + 1.5707963;
  dVar20 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar20 = (double)(local_12c * fVar7);
  }
  dVar22 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar22 = (double)(local_130 * fVar7);
  }
  dVar18 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar18 = (double)(local_128 * fVar7);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar20 = (double)(local_12c * fVar7);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar22 = (double)(local_130 * fVar7);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar18 = (double)(local_128 * fVar7);
  }
  local_c4 = (float)(dVar23 + dVar20);
  local_c8 = (float)(dVar24 + dVar18);
  fVar7 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar7 = fVar2;
  }
  local_c0 = (float)(dVar26 + dVar22);
  local_cc = 0xc0490fda;
  fVar11 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
    fVar11 = fVar7;
  }
  fVar2 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar2 = fVar3;
  }
  fVar12 = fVar11 * fVar11;
  fVar13 = SQRT(local_118 * local_118 + local_120 * local_120 + local_11c * local_11c);
  local_d0 = 0xbe2aaaa4;
  local_d4 = 0x3c08873e;
  local_d8 = SQRT(local_c8 * local_c8 + local_c0 * local_c0 + local_c4 * local_c4);
  fVar7 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
    fVar7 = fVar2;
  }
  fVar9 = fVar12 * fVar12 * fVar11;
  fVar3 = fVar7 * fVar7;
  fVar10 = fVar12 * fVar9;
  fVar2 = fVar3 * fVar3 * fVar7;
  fVar8 = fVar3 * fVar2;
  local_dc = 0x362e9c14;
  fVar1 = -(fVar4 * 2.601887e-06 + fVar1) / fVar14;
  fVar11 = (fVar12 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar12 * fVar11 * -0.16666657 + fVar11) /
           local_d8;
  fVar4 = local_e8 / fVar16;
  fVar3 = (fVar3 * fVar8 * 2.601887e-06 +
          fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) /
          fVar13;
  dVar26 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar26 = (double)(local_140 * fVar1);
  }
  dVar23 = dVar27;
  if (0.0 - local_d8 < 0.0) {
    dVar23 = (double)(local_c4 * fVar11);
  }
  dVar24 = dVar27;
  if (0.0 - local_d8 < 0.0) {
    dVar24 = (double)(local_c8 * fVar11);
  }
  dVar20 = dVar27;
  if (0.0 - local_d8 < 0.0) {
    dVar20 = (double)(local_c0 * fVar11);
  }
  if (local_d8 - 0.0 < 0.0) {
    dVar23 = (double)(local_c4 * fVar11);
  }
  if (local_d8 - 0.0 < 0.0) {
    dVar24 = (double)(local_c8 * fVar11);
  }
  if (local_d8 - 0.0 < 0.0) {
    dVar20 = (double)(local_c0 * fVar11);
  }
  dVar22 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar22 = (double)(local_138 * fVar1);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar26 = (double)(local_140 * fVar1);
  }
  dVar18 = dVar27;
  if (0.0 - fVar13 < 0.0) {
    dVar18 = (double)(local_118 * fVar3);
  }
  dVar19 = dVar27;
  if (0.0 - fVar13 < 0.0) {
    dVar19 = (double)(local_11c * fVar3);
  }
  dVar21 = dVar27;
  if (0.0 - fVar13 < 0.0) {
    dVar21 = (double)(local_120 * fVar3);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar18 = (double)(local_118 * fVar3);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar19 = (double)(local_11c * fVar3);
  }
  if (fVar13 - 0.0 < 0.0) {
    dVar21 = (double)(local_120 * fVar3);
  }
  dVar25 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar25 = (double)(local_130 * fVar4);
  }
  local_158 = (float)(dVar24 + dVar18);
  local_15c = (float)(dVar23 + dVar19);
  local_160 = (float)(dVar20 + dVar21);
  if (fVar14 - 0.0 < 0.0) {
    dVar22 = (double)(local_138 * fVar1);
  }
  dVar23 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar23 = (double)(local_128 * fVar4);
  }
  dVar24 = dVar27;
  if (0.0 - fVar14 < 0.0) {
    dVar24 = (double)(local_13c * fVar1);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar25 = (double)(local_130 * fVar4);
  }
  if (fVar16 - 0.0 < 0.0) {
    dVar23 = (double)(local_128 * fVar4);
  }
  if (fVar14 - 0.0 < 0.0) {
    dVar24 = (double)(local_13c * fVar1);
  }
  fVar3 = pfVar6[0x19];
  dVar20 = dVar27;
  if (0.0 - fVar16 < 0.0) {
    dVar20 = (double)(local_12c * fVar4);
  }
  fVar14 = fVar3 + 1.5707963;
  fVar1 = (float)(dVar26 + dVar25);
  fVar2 = (float)(dVar22 + dVar23);
  if (fVar16 - 0.0 < 0.0) {
    dVar20 = (double)(local_12c * fVar4);
  }
  fVar4 = (float)(dVar24 + dVar20);
  local_e4 = fVar2 * local_160 - fVar1 * local_158;
  fVar16 = fVar4 * local_158 - fVar2 * local_15c;
  fVar7 = 3.1415925 - fVar14;
  if (fVar14 - (3.1415925 - fVar14) < 0.0) {
    fVar7 = fVar14;
  }
  local_174 = 0;
  fVar12 = fVar1 * local_15c - fVar4 * local_160;
  fVar11 = -3.1415925 - fVar14;
  if ((-3.1415925 - fVar14) - fVar7 < 0.0) {
    fVar11 = fVar7;
  }
  fVar14 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar14 = fVar3;
  }
  fVar7 = fVar11 * fVar11;
  fVar8 = SQRT(fVar12 * fVar12 + fVar16 * fVar16 + local_e4 * local_e4);
  fVar13 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar14 < 0.0) {
    fVar13 = fVar14;
  }
  fVar17 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
  fVar9 = fVar7 * fVar7 * fVar11;
  fVar15 = fVar13 * fVar13;
  fVar10 = fVar7 * fVar9;
  fVar14 = fVar15 * fVar15 * fVar13;
  fVar3 = fVar15 * fVar14;
  fVar7 = (fVar7 * fVar10 * 2.601887e-06 +
          fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar7 * fVar11 * -0.16666657 + fVar11) /
          fVar8;
  fVar3 = (fVar15 * fVar3 * 2.601887e-06 +
          fVar3 * -0.0001980741 + fVar14 * 0.0083330255 + fVar15 * fVar13 * -0.16666657 + fVar13) /
          fVar17;
  dVar26 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar26 = (double)(fVar12 * fVar7);
  }
  dVar23 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar23 = (double)(local_e4 * fVar7);
  }
  dVar24 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar24 = (double)(fVar16 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar26 = (double)(fVar12 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar23 = (double)(local_e4 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar24 = (double)(fVar16 * fVar7);
  }
  dVar20 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar20 = (double)(fVar3 * fVar2);
  }
  dVar22 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar22 = (double)(fVar3 * fVar4);
  }
  dVar18 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar20 = (double)(fVar3 * fVar2);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar22 = (double)(fVar3 * fVar4);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  local_178 = (float)(dVar26 + dVar20);
  local_17c = (float)(dVar23 + dVar22);
  local_180 = (float)(dVar24 + dVar18);
  fVar3 = pfVar6[0x19];
  fVar14 = fVar3 + 1.5707963;
  fVar7 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar7 = fVar3;
  }
  fVar11 = 3.1415925 - fVar14;
  if (fVar14 - (3.1415925 - fVar14) < 0.0) {
    fVar11 = fVar14;
  }
  fVar13 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
    fVar13 = fVar7;
  }
  fVar7 = fVar13 * fVar13;
  fVar3 = -3.1415925 - fVar14;
  if ((-3.1415925 - fVar14) - fVar11 < 0.0) {
    fVar3 = fVar11;
  }
  fVar14 = fVar3 * fVar3;
  fVar11 = fVar7 * fVar7 * fVar13;
  fVar9 = fVar7 * fVar11;
  fVar10 = fVar14 * fVar14 * fVar3;
  fVar15 = fVar14 * fVar10;
  local_164 = 0;
  local_154 = 0;
  local_148 = 0;
  local_14c = 0;
  local_150 = 0;
  local_144 = 0x3f800000;
  fVar7 = -(fVar7 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar11 * 0.0083330255 + fVar7 * fVar13 * -0.16666657 + fVar13) /
          fVar8;
  fVar3 = (fVar14 * fVar15 * 2.601887e-06 +
          fVar15 * -0.0001980741 + fVar10 * 0.0083330255 + fVar14 * fVar3 * -0.16666657 + fVar3) /
          fVar17;
  dVar26 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar26 = (double)(fVar12 * fVar7);
  }
  dVar23 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar23 = (double)(local_e4 * fVar7);
  }
  dVar24 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar24 = (double)(fVar16 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar26 = (double)(fVar12 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar23 = (double)(local_e4 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar24 = (double)(fVar16 * fVar7);
  }
  dVar20 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar20 = (double)(fVar3 * fVar2);
  }
  dVar22 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar22 = (double)(fVar3 * fVar4);
  }
  dVar18 = dVar27;
  if (0.0 - fVar17 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar20 = (double)(fVar3 * fVar2);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar22 = (double)(fVar3 * fVar4);
  }
  if (fVar17 - 0.0 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  local_168 = (float)(dVar26 + dVar20);
  local_16c = (float)(dVar23 + dVar22);
  local_170 = (float)(dVar24 + dVar18);
  mobyutil::MB_MtxToEuler((int)&local_180,param_3);
  (param_3->bSphere).rad = 0.0;
  fVar3 = *pfVar6;
  dVar24 = (double)local_d8;
  fVar4 = (float)((double)local_ec / dVar24);
  dVar23 = (double)SQRT(local_118 * local_118 + local_120 * local_120 + local_11c * local_11c);
  dVar26 = dVar27;
  if (dVar27 - dVar24 < 0.0) {
    dVar26 = (double)(local_c8 * fVar4);
  }
  dVar20 = dVar27;
  if (dVar27 - dVar24 < 0.0) {
    dVar20 = (double)(local_c0 * fVar4);
  }
  dVar22 = dVar27;
  if (dVar27 - dVar24 < 0.0) {
    dVar22 = (double)(local_c4 * fVar4);
  }
  if (dVar24 - dVar27 < 0.0) {
    dVar26 = (double)(local_c8 * fVar4);
  }
  if (dVar24 - dVar27 < 0.0) {
    dVar20 = (double)(local_c0 * fVar4);
  }
  if (dVar24 - dVar27 < 0.0) {
    dVar22 = (double)(local_c4 * fVar4);
  }
  fVar4 = (float)((double)local_f0 / dVar23);
  dVar24 = dVar27;
  if (dVar27 - dVar23 < 0.0) {
    dVar24 = (double)(local_120 * fVar4);
  }
  dVar18 = dVar27;
  if (dVar27 - dVar23 < 0.0) {
    dVar18 = (double)(local_11c * fVar4);
  }
  dVar19 = dVar27;
  if (dVar27 - dVar23 < 0.0) {
    dVar19 = (double)(local_118 * fVar4);
  }
  if (dVar23 - dVar27 < 0.0) {
    dVar24 = (double)(local_120 * fVar4);
  }
  if (dVar23 - dVar27 < 0.0) {
    dVar18 = (double)(local_11c * fVar4);
  }
  if (dVar23 - dVar27 < 0.0) {
    dVar19 = (double)(local_118 * fVar4);
  }
  *param_2 = (float)((double)fVar3 + dVar24);
  fVar4 = pfVar6[1];
  param_2[1] = (float)((double)fVar4 + dVar18);
  fVar1 = pfVar6[2];
  param_2[2] = (float)((double)fVar1 + dVar19);
  param_2[3] = pfVar6[3];
  *param_2 = (float)((double)(float)((double)fVar3 + dVar24) + dVar20);
  param_2[1] = (float)((double)(float)((double)fVar4 + dVar18) + dVar22);
  param_2[2] = (float)((double)(float)((double)fVar1 + dVar19) + dVar26);
  return;
}



//==== 003f3c7c  ns=mobyupdate_helpers  size=0xdc
// sig: undefined M987_003f3c7c(void)
// callers(1): 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}
// callees(2): 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1

void mobyupdate_helpers::M987_003f3c7c(int param_1,float *param_2)

{
  longlong lVar1;
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
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [72];
  
  local_6c = param_2[1];
  local_68 = param_2[2];
  local_70 = *param_2;
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x10;
  local_84 = 0;
  local_90 = local_68 * local_68 - local_70 * local_6c;
  local_88 = -(local_68 * local_70 - -(local_6c * local_6c));
  local_8c = local_70 * local_70 - -(local_6c * local_68);
  local_78 = local_70 * local_8c - local_6c * local_90;
  local_74 = 0;
  local_7c = local_68 * local_90 - local_70 * local_88;
  local_80 = local_6c * local_88 - local_68 * local_8c;
  local_64 = param_2[3];
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_54 = 0x3f800000;
  mobyutil::MB_MtxToEuler((int)&local_90,(MobyInstance *)lVar1);
  fastfunc::FastEulerToMtx1(auStack_50,lVar1);
  return;
}



//==== 003f3e00  ns=mobyupdate_unsorted  size=0x1cf8
// sig: undefined UpdateMoby_{633_773_988_989}(MobyInstance * moby)
// callers(0): 
// callees(38): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0006d720 RegisterFuncForMoby; 000c8444 hud::RegisterHUDCallback; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fea60 mobyutil::MB_randSphere; 00109af0 mobyutil::Delt; 00109ec0 mobyutil::DeltAng; 0010c1e8 mobyutil::MB_MtxToEuler; 00110488 mobyutil::ClampVec3Magnitude; 00110e18 mobyutil::MB_MtxFromDir; 001122ac mobyutil::MB_GetPlatformParent; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00112678 mobyutil::MB_PlatformGetDelta; 00112dc0 mobyutil::MB_UnlockTrophy; 0011b1b4 mobyutil::MB_CountGoldBolts; 0012f8c0 partupd::SpawnPart_53; 0015d12c sound::PlayMobySound; 003f3388 mobyupdate_helpers::M987_003f3388; 003f3c7c mobyupdate_helpers::M987_003f3c7c; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00500ca4 fastfunc::FastEulerToMtx1; 005014d4 fastfunc::FastVecMtx4MultBatch3; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e825c FUN_005e825c; 005e8338 FUN_005e8338; 005e8f4c FUN_005e8f4c
// strings: 00a0ca34: 'None' | 003f3dd0: '?333A ' (raw)

/* Moby 633
   Moby 773
   Moby 988
   Moby 989 */

void mobyupdate_unsorted::UpdateMoby__633_773_988_989_(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  ushort uVar6;
  float *pfVar7;
  void *pvVar8;
  f32 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte *pbVar13;
  float fVar14;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined8 uVar15;
  longlong lVar20;
  int in_r5;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  MobyInstance *pMVar26;
  ulonglong uVar24;
  longlong lVar25;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  float local_130;
  float local_12c;
  float local_120;
  float local_11c;
  float local_118;
  undefined1 local_110 [16];
  float local_100;
  float local_fc;
  float local_f8;
  Vec4 local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  f32 local_b4;
  undefined1 auStack_b0 [64];
  longlong local_70;
  
  lVar25 = (longlong)(int)moby;
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    pfVar7 = (float *)moby->pVar;
    dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar7[0x14]);
    (moby->rotation).x = (float)dVar27;
    dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar7[0x15]);
    (moby->rotation).y = (float)dVar27;
    dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar7[0x16]);
    (moby->rotation).z = (float)dVar27;
    (moby->pos).x = (moby->pos).x + pfVar7[0x10];
    (moby->pos).y = (moby->pos).y + pfVar7[0x11];
    (moby->pos).z = (moby->pos).z + pfVar7[0x12];
    dVar27 = 10.800000190734863;
    pfVar7[0x12] = -(DAT_0071f418 * 10.8 - pfVar7[0x12]);
    iVar16 = fastfunc::FastDecTimerS32(ZEXT48(pfVar7) + 0x68);
    pvVar8 = moby->pVar;
    if (iVar16 == 0) {
      return;
    }
    if ((ABS((moby->pos).z - g_heroPosition.z) < DAT_0096bf68) &&
       (fVar17 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar3 * fVar3 + fVar17 * fVar17) < DAT_0096bf6c)) {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x18,0x3f3d58);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,
                          ZEXT48(pfVar7));
      *(undefined4 *)((uint)(pfVar7 + 0x1a) & 0xfffffffc) = uVar18;
      moby->state = '\x02';
      return;
    }
    if (moby->setByGroup == '\0') {
      uVar15 = fastfunc::FastDoubleToInt((double)(longlong)(animationSpeed * 20.5));
      dVar30 = (double)fastfunc::FastIntToDouble();
      dVar28 = (double)(float)(1.0 / dVar30);
      fVar17 = (moby->rotation).x;
      moby->setByGroup = moby->setByGroup + '\x01';
      dVar30 = (double)fastfunc::FastDiffRots((double)pfVar7[0xc],(double)fVar17);
      pfVar7[0x14] = (float)(dVar30 * dVar28);
      dVar30 = (double)fastfunc::FastDiffRots((double)pfVar7[0xd],(double)(moby->rotation).y);
      pfVar7[0x15] = (float)(dVar30 * dVar28);
      dVar30 = (double)fastfunc::FastDiffRots((double)pfVar7[0xe],(double)(moby->rotation).z);
      pfVar7[0x16] = (float)(dVar30 * dVar28);
      fVar3 = pfVar7[8] - (moby->pos).x;
      pfVar7[0x10] = fVar3;
      fVar4 = pfVar7[9] - (moby->pos).y;
      pfVar7[0x11] = fVar4;
      fVar17 = (moby->pos).z;
      pfVar7[0x13] = pfVar7[0xb];
      pfVar7[0x10] = (float)((double)fVar3 * dVar28);
      pfVar7[0x1a] = (float)uVar15;
      pfVar7[0x11] = (float)((double)fVar4 * dVar28);
      pfVar7[0x12] = (float)((double)(pfVar7[10] - fVar17) * dVar28);
      if ((pfVar7[0x1f] != 0.0) && (iVar16 = mobyutil::MB_GetPlatformParent(), iVar16 != 0)) {
        pfVar7[0x10] = pfVar7[0x10] + *(float *)(iVar16 + 0x10);
        pfVar7[0x11] = pfVar7[0x11] + *(float *)(iVar16 + 0x14);
        pfVar7[0x12] = pfVar7[0x12] + *(float *)(iVar16 + 0x18);
        dVar30 = (double)fastfunc::FastIntToDouble(uVar15);
        fVar17 = *(float *)(iVar16 + 0x10);
        fVar3 = *(float *)(iVar16 + 0x14);
        fVar4 = *(float *)(iVar16 + 0x18);
        pfVar7[8] = (float)((double)fVar17 * dVar30 + (double)pfVar7[8]);
        pfVar7[9] = (float)((double)fVar3 * dVar30 + (double)pfVar7[9]);
        pfVar7[10] = (float)((double)fVar4 * dVar30 + (double)pfVar7[10]);
        *pfVar7 = (float)((double)fVar17 * dVar30 + (double)*pfVar7);
        pfVar7[1] = (float)((double)fVar3 * dVar30 + (double)pfVar7[1]);
        pfVar7[2] = (float)((double)fVar4 * dVar30 + (double)pfVar7[2]);
      }
      pfVar7[0x12] = (float)((double)DAT_0071f418 * dVar27) *
                     (float)(longlong)((int)(float)uVar15 >> 1) + pfVar7[0x12];
      return;
    }
    moby->state = '\x01';
    if (pfVar7[0x1f] != 0.0) {
      mobyutil::MB_PlatformWorldToLocal
                (lVar25,*(undefined4 *)((int)pvVar8 + 0x7c),pvVar8,(int)pvVar8 + 0x10,
                 (int)pvVar8 + 0x20,(int)pvVar8 + 0x30);
      return;
    }
    (moby->pos).x = pfVar7[8];
    (moby->pos).y = pfVar7[9];
    (moby->pos).z = pfVar7[10];
    (moby->pos).w = pfVar7[0xb];
    (moby->rotation).x = pfVar7[0xc];
    (moby->rotation).y = pfVar7[0xd];
    (moby->rotation).z = pfVar7[0xe];
    (moby->rotation).w = pfVar7[0xf];
    return;
  }
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      pvVar8 = moby->pVar;
      if (*(uint *)((int)pvVar8 + 0x78) == 0) {
        return;
      }
      FUN_005e7f98((double)*(float *)((int)pvVar8 + 0x7c),&local_120,
                   (ulonglong)*(uint *)((int)pvVar8 + 0x78) + 0xe0);
      iVar16 = *(int *)((int)pvVar8 + 0x78);
      fVar10 = local_120 + *(float *)(iVar16 + 0x10);
      fVar17 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).z;
      fVar11 = local_11c + *(float *)(iVar16 + 0x14);
      local_130 = fVar10 - fVar17;
      fVar12 = local_118 + *(float *)(iVar16 + 0x18);
      local_12c = fVar11 - fVar3;
      fVar14 = fVar12 - fVar4;
      dVar27 = 0.0;
      if (*(int *)((int)pvVar8 + 100) != 0) {
        dVar30 = (double)FUN_005e8128((double)*(float *)((int)pvVar8 + 100));
        dVar28 = (double)mathfunc::cosf(*(float *)((int)pvVar8 + 100));
        fVar17 = (moby->pos).x;
        fVar4 = (moby->pos).z;
        local_130 = (float)(dVar28 * (double)local_130 + (double)(float)(dVar30 * (double)local_12c)
                           );
        local_12c = (float)(dVar28 * (double)local_12c - (double)(float)(dVar30 * (double)local_130)
                           );
        fVar3 = (moby->pos).y;
      }
      dVar30 = (double)SQRT((fVar12 - fVar4) * (fVar12 - fVar4) +
                            (fVar10 - fVar17) * (fVar10 - fVar17) +
                            (fVar11 - fVar3) * (fVar11 - fVar3));
      FUN_005e7f98((double)*(float *)((int)pvVar8 + 0x70),(int)pvVar8 + 0x40,(int)pvVar8 + 0x40);
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar8 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0x48);
      FUN_005e7f98((double)*(float *)((int)pvVar8 + 0x74),&local_130,&local_130);
      (moby->pos).x = (moby->pos).x + local_130 + DAT_00969e20;
      (moby->pos).y = (moby->pos).y + local_12c + DAT_00969e24;
      fVar17 = (moby->pos).z + fVar14 + DAT_00969e28;
      (moby->pos).z = fVar17;
      fVar17 = fVar17 - DAT_00969f88;
      FUN_005e825c(local_110,local_110,&hero::g_heroGravityMtx);
      if ((*(short *)(*(int *)((int)pvVar8 + 0x78) + 0xa6) == 0) && ((int)fVar17 < 1)) {
        FUN_005e7f98((double)*(float *)((int)pvVar8 + 0x70),&local_100,&DAT_00969d00);
        local_f0.x = local_100 - *(float *)((int)pvVar8 + 0x40);
        local_f0.y = local_fc - *(float *)((int)pvVar8 + 0x44);
        local_f0.z = local_f8 - *(float *)((int)pvVar8 + 0x48);
        mobyutil::ClampVec3Magnitude((double)(DAT_00854460 * DAT_0071f418),&local_f0);
        *(float *)((int)pvVar8 + 0x40) = *(float *)((int)pvVar8 + 0x40) + local_f0.x;
        *(float *)((int)pvVar8 + 0x44) = *(float *)((int)pvVar8 + 0x44) + local_f0.y;
        *(float *)((int)pvVar8 + 0x48) = *(float *)((int)pvVar8 + 0x48) + local_f0.z;
      }
      else {
        mobyutil::Delt((float)dVar27,DAT_00854460 * DAT_0071f418,(float *)((int)pvVar8 + 0x70));
        mobyutil::Delt(DAT_0085445c * mobyutil::g_FrameTime,DAT_00854460 * DAT_0071f418,
                       (float *)((int)pvVar8 + 0x74));
      }
      dVar28 = (double)*(float *)((int)pvVar8 + 0x74);
      if (dVar30 < (double)*(float *)((int)pvVar8 + 0x74)) {
        *(float *)((int)pvVar8 + 0x74) = (float)dVar30;
        dVar28 = dVar30;
      }
      dVar28 = (double)(float)(dVar28 * (double)(longlong)(animationSpeed * 20.5));
      if (dVar28 <= dVar30) {
LAB_003f509c:
        fastfunc::FastVecMtx4MultBatch3(lVar25 + 0xc0,pvVar8,lVar25 + 0xc0);
        return;
      }
      fVar11 = fVar11 - (moby->pos).y;
      fVar10 = fVar10 - (moby->pos).x;
      fVar12 = fVar12 - (moby->pos).z;
      dVar30 = (double)SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
      if (0.5199999809265137 < dVar30) {
        fVar17 = (float)(dVar30 + dVar28);
        if (DAT_010cbbd0 != 0) {
          local_70 = (longlong)((fVar17 * 128.0) / (float)(dVar28 * 2.0));
          moby->alpha = (s8)local_70;
        }
        if (DAT_00854494 != 0) {
          moby->scale = (moby->pClass->gScale * DAT_00854488 * fVar17) / (float)(dVar28 * 2.0);
        }
        goto LAB_003f509c;
      }
      MVar5 = moby->oClass;
      if ((short)MVar5 < 0x3dc) {
        if (MVar5 == 0x305) {
          pcVar19 = g_CollectedGoldBolts;
          g_CollectedGoldBolts[Level * 4 + (uint)(byte)moby->setByGroup] = '\x01';
          iVar16 = mobyutil::MB_CountGoldBolts();
          if (iVar16 == 0x28) {
            mobyutil::MB_UnlockTrophy(BOLT_COMMANDO);
          }
          lVar25 = 0;
          lVar20 = 0x14;
          do {
            lVar25 = lVar25 + 1 +
                     ((LZCOUNT(-(uint)(byte)*pcVar19) << 0x3a) >> 0x3f & lVar25 - (lVar25 + 1));
            lVar21 = lVar25 + 1;
            lVar21 = lVar21 + ((LZCOUNT(-(uint)((byte *)pcVar19)[1]) << 0x3a) >> 0x3f &
                              lVar25 - lVar21);
            pbVar13 = (byte *)pcVar19 + 3;
            lVar22 = lVar21 + 1;
            lVar22 = lVar22 + ((LZCOUNT(-(uint)((byte *)pcVar19)[2]) << 0x3a) >> 0x3f &
                              lVar21 - lVar22);
            lVar25 = lVar22 + 1;
            pcVar19 = (char *)((byte *)pcVar19 + 4);
            lVar25 = lVar25 + ((LZCOUNT(-(uint)*pbVar13) << 0x3a) >> 0x3f & lVar22 - lVar25);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          iVar16 = (int)(lVar25 * 0x21) * 4 + (int)lVar25 * -0x20;
          goto LAB_003f4dec;
        }
      }
      else {
        if ((short)MVar5 < 0x3dd) {
          iVar16 = 5;
          goto LAB_003f4dec;
        }
        if ((short)MVar5 < 0x3de) {
          iVar16 = 10;
          goto LAB_003f4dec;
        }
      }
      iVar16 = 1;
LAB_003f4dec:
      dVar31 = 0.699999988079071;
      mobyutil::MB_randSphere
                ((double)(float)((double)mobyutil::g_FrameTime * 0.699999988079071),
                 (double)mobyutil::g_FrameTime,&local_e0);
      local_d0 = local_e0 * 10.0 + (moby->pos).x;
      local_cc = local_dc * 10.0 + (moby->pos).y;
      local_c8 = local_d8 * 10.0 + (moby->pos).z;
      local_c4 = local_d4;
      mobyutil::MB_randInt(2);
      dVar30 = (double)mobyutil::MB_randRangeFloat(0.4,0.5);
      dVar28 = 25.5;
      local_70 = (longlong)(int)(animationSpeed * 25.5);
      partupd::SpawnPart_53
                ((double)(float)(dVar30 * 0.20000000298023224),dVar30,dVar27,&local_d0,
                 (int)(animationSpeed * 25.5));
      local_70 = (longlong)(int)((double)animationSpeed * dVar28);
      partupd::SpawnPart_53
                ((double)(float)(dVar30 * 0.14000000059604645),(double)(float)(dVar30 * dVar31),
                 dVar27,&local_d0,(int)((double)animationSpeed * dVar28));
      if ((moby->field80_0xb8 != (MobyInstance *)0x0) &&
         (bVar2 = moby->field80_0xb8->field74_0xb1, (bVar2 & 0x80) == 0)) {
        *(short *)((uint)bVar2 * 4 + 0xa0e11e + Level * 0x100) =
             *(short *)((uint)bVar2 * 4 + 0xa0e11e + Level * 0x100) + (short)iVar16;
      }
      g_boltCount = g_boltCount + iVar16;
      g_totalBoltsCollected = g_totalBoltsCollected + iVar16;
      *(int *)(&DAT_00a0f6e4 + Level * 4) = *(int *)(&DAT_00a0f6e4 + Level * 4) + iVar16;
      hud::RegisterHUDCallback
                (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                 &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
      if (moby < MobyInstancePermEnd) {
        bVar2 = moby->levelFlagIdx;
        uVar6 = moby->uid;
        (&DAT_00a53964)[(short)uVar6] = bVar2 + 2;
        if ((bVar2 == 0xff) ||
           (((&DAT_00a202c0)[bVar2] != -1 && (g_LevelFlags[Level][bVar2] == -1)))) {
          (&DAT_00a545c4)[(short)uVar6] = bVar2 + 2;
        }
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (uVar1 == '\x02') {
      pvVar8 = moby->pVar;
      fastfunc::FastEulerToMtx1(auStack_b0,(int)pvVar8 + 0x10);
      iVar16 = fastfunc::FastDecTimerS32((int)pvVar8 + 0x68);
      if (iVar16 != 0) {
        pvVar8 = moby->pVar;
        FUN_005e7f98(0x3ff0000000000000,local_140,local_140);
        FUN_005e8f4c(local_140,local_150,local_140);
        dVar30 = 0.01745329238474369;
        mobyutil::MB_MtxFromDir
                  ((double)(DAT_00854468 * 0.017453292 * mobyutil::g_FrameTime),pvVar8,local_140);
        fVar17 = mobyutil::g_FrameTime;
        moby->modeBits = moby->modeBits | LOCK_ROTATION;
        dVar27 = 8.0;
        FUN_005e7f98((double)(fVar17 * 8.0),(int)pvVar8 + 0x40,local_150);
        *(float *)((int)pvVar8 + 0x70) = (float)((double)mobyutil::g_FrameTime * dVar27);
        dVar27 = 0.0;
        *(undefined4 *)((int)pvVar8 + 0x74) = 0;
        pMVar26 = g_heroMobyPtr;
        *(undefined4 *)((int)pvVar8 + 0x7c) = 0x3f000000;
        *(MobyInstance **)((int)pvVar8 + 0x78) = pMVar26;
        local_70 = (longlong)(int)(animationSpeed * 3.5);
        if (DAT_010cbbd4 + (int)(animationSpeed * 3.5) < worldUpdateTime) {
          DAT_010cbbd4 = worldUpdateTime;
          sound::PlayMobySound(0,0x20,moby);
        }
        else {
          dVar27 = (double)mobyutil::MB_randRangeFloat(-30.0,30.0);
          dVar27 = (double)(float)(dVar27 * dVar30);
        }
        *(float *)((int)pvVar8 + 100) = (float)dVar27;
        moby->state = '\x03';
        return;
      }
      uVar23 = *(uint *)((int)pvVar8 + 0x68);
      iVar16 = (int)(animationSpeed * 10.5);
      local_70 = (longlong)iVar16;
      if (iVar16 < (int)uVar23) {
        iVar16 = 0x3f0000;
        local_70 = (longlong)
                   (int)(uVar23 + (((int)uVar23 >> 3) + (uint)((int)uVar23 < 0 && (uVar23 & 7) != 0)
                                  ) * -8 + -4);
        dVar27 = (double)FUN_005e8128((double)((float)local_70 * 0.7854));
        dVar27 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pvVar8 + 0x60),
                                    (float)(dVar27 * 0.1745329201221466));
        fVar17 = mobyutil::DeltAng((float)dVar27,0.5235988,(float *)((int)pvVar8 + 0x60),iVar16,
                                   in_r5,0);
        dVar27 = (double)fVar17;
      }
      else {
        dVar27 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar27 = (double)fastfunc::FastWrapRot((float)dVar27,1.5707964);
        dVar30 = 0.0872664600610733;
        mobyutil::DeltAng((float)dVar27,0.08726646,(float *)((int)pvVar8 + 0x60),iVar16,in_r5,0);
        dVar27 = (double)fastfunc::FastSubRots(*(float *)((int)pvVar8 + 0x60),(float)dVar27);
        if (dVar27 < dVar30) {
          *(undefined4 *)((int)pvVar8 + 0x68) = 0;
        }
      }
      mobyupdate_helpers::M987_003f3388(dVar27,lVar25,lVar25 + 0x10,lVar25 + 0x40);
      return;
    }
    if (uVar1 != '\x01') {
      if (uVar1 != '\0') {
        return;
      }
      MVar5 = moby->oClass;
      pfVar7 = (float *)moby->pVar;
      if ((short)MVar5 < 0x3dc) {
        if (MVar5 == TREE) {
          moby->scale = moby->pClass->gScale * DAT_00854488;
        }
      }
      else if ((short)MVar5 < 0x3dd) {
        moby->scale = moby->pClass->gScale * DAT_0085448c;
      }
      else if ((short)MVar5 < 0x3de) {
        moby->scale = moby->pClass->gScale * DAT_00854490;
      }
      pMVar26 = (MobyInstance *)0x0;
      uVar23 = worldUpdateTime - DAT_010cbbd4;
      fVar17 = (moby->pos).x;
      lVar20 = (longlong)worldUpdateTime;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE|DISABLED);
      DAT_010cbbd4 = DAT_010cbbd4 + ((uint)(lVar20 - DAT_010cbbd4 >> 0x3f) & uVar23);
      *pfVar7 = fVar17;
      pfVar7[1] = (moby->pos).y;
      pfVar7[2] = (moby->pos).z;
      pfVar7[3] = (moby->pos).w;
      if (*(short *)((int)pfVar7 + 0x6e) == 0) {
        FUN_005e7f98(0x3fb99999a0000000,local_170,lVar25 + 0xe0);
        iVar16 = collproc::CollLine(local_170,local_160,2,0,0);
        if (iVar16 == 0) {
          *pfVar7 = (moby->pos).x;
          pfVar7[1] = (moby->pos).y;
          pfVar7[2] = (moby->pos).z;
          pfVar7[3] = (moby->pos).w;
        }
        else {
          *pfVar7 = CollOutput.ip.x;
          pfVar7[1] = CollOutput.ip.y;
          pfVar7[2] = CollOutput.ip.z;
          pfVar7[3] = CollOutput.ip.w;
          pMVar26 = CollOutput.pMoby;
          FUN_005e7f98(0x3ff0000000000000,local_180,0xa10980);
        }
      }
      mobyupdate_helpers::M987_003f3c7c(lVar25,local_180);
      dVar27 = (double)mobyutil::MB_randRot();
      pfVar7[0x18] = (float)dVar27;
      pfVar7[0x19] = (moby->rotation).x;
      mobyupdate_helpers::M987_003f3388(lVar25,lVar25 + 0x10,lVar25 + 0x40);
      if ((pMVar26 != (MobyInstance *)0x0) &&
         (iVar16 = mobyutil::MB_GetPlatformParent(pMVar26), iVar16 != 0)) {
        pfVar7[0x1f] = (float)pMVar26;
        mobyutil::MB_PlatformWorldToLocal(lVar25,pMVar26,pfVar7,pfVar7 + 4,pfVar7 + 8,pfVar7 + 0xc);
      }
      moby->state = '\x01';
      *(undefined2 *)(pfVar7 + 0x1b) = 0;
      mobyutil::MB_randRangeFloat(0.0,(float)(longlong)(animationSpeed * 600.5));
      fVar17 = (float)fastfunc::FastDoubleToInt();
      pfVar7[0x1c] = fVar17;
      pfVar7[0x1e] = (float)PTR_DAT_0085449c;
      return;
    }
    pvVar8 = moby->pVar;
    uVar24 = ZEXT48(pvVar8);
    if ((*(int *)((int)pvVar8 + 0x7c) != 0) &&
       (mobyutil::MB_PlatformGetDelta
                  (lVar25,*(int *)((int)pvVar8 + 0x7c),uVar24 + 0x20,uVar24 + 0x30,uVar24,
                   uVar24 + 0x10), 0x7f < *(byte *)(*(int *)((int)pvVar8 + 0x7c) + 0x20))) {
      pvVar8 = moby->pVar;
      *(undefined4 *)((int)pvVar8 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar8 + 0x48) = 0;
      *(undefined4 *)((int)pvVar8 + 0x44) = 0;
      *(undefined4 *)((int)pvVar8 + 0x40) = 0;
      mobyutil::MB_MtxFromDir
                ((double)(DAT_0085446c * 0.017453292 * mobyutil::g_FrameTime),pvVar8,lVar25 + 0xd0);
      moby->state = '\x04';
      return;
    }
    if ((ABS((moby->pos).z - g_heroPosition.z) < DAT_0096bf68) &&
       (fVar17 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar3 * fVar3 + fVar17 * fVar17) < DAT_0096bf6c)) {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x18,0x3f3d58);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,uVar24)
      ;
      *(undefined4 *)((int)pvVar8 + 0x68U & 0xfffffffc) = uVar18;
      moby->state = '\x02';
    }
    if (moby->enabled == '\0') {
      if (moby <= MobyInstancePermEnd) {
        return;
      }
      fVar17 = (moby->pos).y - g_heroPosition.y;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar3 * fVar3 + fVar17 * fVar17) <= 24.0) {
        return;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    MVar5 = moby->oClass;
    if ((short)MVar5 < 0x3dd) {
      if (0x3db < (short)MVar5) {
        dVar30 = 0.01745329238474369;
        dVar27 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pvVar8 + 0x60),
                                    DAT_00854478 * 0.017453292 * mobyutil::g_FrameTime);
        *(float *)((int)pvVar8 + 0x60) = (float)dVar27;
        dVar27 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pvVar8 + 100),
                                    (float)((double)DAT_0085447c * dVar30) * mobyutil::g_FrameTime);
        *(float *)((int)pvVar8 + 100) = (float)dVar27;
        goto LAB_003f4428;
      }
    }
    else if ((short)MVar5 < 0x3de) {
      dVar30 = 0.01745329238474369;
      dVar27 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar8 + 0x60),
                                  DAT_00854480 * 0.017453292 * mobyutil::g_FrameTime);
      *(float *)((int)pvVar8 + 0x60) = (float)dVar27;
      dVar27 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar8 + 100),
                                  (float)((double)DAT_00854484 * dVar30) * mobyutil::g_FrameTime);
      *(float *)((int)pvVar8 + 100) = (float)dVar27;
      goto LAB_003f4428;
    }
    dVar30 = 0.01745329238474369;
    dVar27 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar8 + 0x60),
                                DAT_00854470 * 0.017453292 * mobyutil::g_FrameTime);
    *(float *)((int)pvVar8 + 0x60) = (float)dVar27;
    dVar27 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar8 + 100),
                                (float)((double)DAT_00854474 * dVar30) * mobyutil::g_FrameTime);
    *(float *)((int)pvVar8 + 100) = (float)dVar27;
LAB_003f4428:
    mobyupdate_helpers::M987_003f3388(lVar25,lVar25 + 0x10,lVar25 + 0x40);
    if (*(short *)((int)pvVar8 + 0x6c) == 0) {
      iVar16 = fastfunc::FastDecTimerS32(uVar24 + 0x70);
      if (iVar16 == 0) {
        return;
      }
      *(undefined4 *)((int)pvVar8 + 0x70) = 0x18;
      dVar27 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar8 + 0x74) = (float)dVar27;
      *(undefined2 *)((int)pvVar8 + 0x6c) = 1;
      return;
    }
    dVar27 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar8 + 0x74),mobyutil::g_FrameTime * 5.2359877);
    *(float *)((int)pvVar8 + 0x74) = (float)dVar27;
    if (*(int *)((int)pvVar8 + 0x70) < 0xd) {
      iVar16 = *(int *)((int)pvVar8 + 0x78) + -0x5000000;
    }
    else {
      iVar16 = *(int *)((int)pvVar8 + 0x78) + 0x5000000;
    }
    *(int *)((int)pvVar8 + 0x78) = iVar16;
    iVar16 = fastfunc::FastDecTimerS32(uVar24 + 0x70);
    if (iVar16 != 0) {
      *(undefined2 *)((int)pvVar8 + 0x6c) = 0;
      mobyutil::MB_randRangeFloat
                ((float)(longlong)(animationSpeed * 300.5),(float)(longlong)(animationSpeed * 600.5)
                );
      uVar18 = fastfunc::FastDoubleToInt();
      *(undefined4 *)((int)pvVar8 + 0x70) = uVar18;
      return;
    }
    if (moby->enabled == '\0') {
      return;
    }
    if (DAT_00854498 == 0) {
      return;
    }
    RegisterFuncForMoby(&PTR_M1382_003f5d90_0070dc68,moby);
    return;
  }
  pvVar8 = moby->pVar;
  lVar20 = lVar25 + 0xc0;
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar8 + 0x40);
  (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0x44);
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0x48);
  dVar27 = 10.800000190734863;
  *(float *)((int)pvVar8 + 0x48) = -(DAT_0071f418 * 10.8 - *(float *)((int)pvVar8 + 0x48));
  fastfunc::FastVecMtx4MultBatch3(lVar20,pvVar8,lVar20);
  fVar9 = (moby->pos).z;
  fVar17 = (moby->pos).z;
  uVar23 = (int)fVar9 >> 0x1f;
  if ((((0x3fffffff < (int)((uVar23 >> 1 ^ (uint)fVar9) - uVar23)) &&
       (fVar9 = (moby->pos).x, uVar23 = (int)fVar9 >> 0x1f,
       iVar16 = (uVar23 >> 1 ^ (uint)fVar9) - uVar23, 0x3fffffff < iVar16 && iVar16 < 0x43ff0001))
      && (fVar9 = (moby->pos).y, uVar23 = (int)fVar9 >> 0x1f,
         iVar16 = (uVar23 >> 1 ^ (uint)fVar9) - uVar23, iVar16 < 0x43ff0001)) &&
     (0x3fffffff < iVar16)) {
    if ((fVar17 < *(float *)((int)pvVar8 + 0x60) - 4.0) && (fVar17 < g_heroPosition.z - 4.0)) {
      pvVar8 = moby->pVar;
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      *(float *)((int)pvVar8 + 0x10) = g_heroRotation.x;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      *(float *)((int)pvVar8 + 0x14) = g_heroRotation.y;
      *(float *)((int)pvVar8 + 0x18) = g_heroRotation.z;
      *(float *)((int)pvVar8 + 0x1c) = g_heroRotation.w;
      auVar32 = loadVectorLeftIndexed(0x18,0x3f3d58);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,
                          ZEXT48(pvVar8));
      *(undefined4 *)((int)pvVar8 + 0x68U & 0xfffffffc) = uVar18;
      moby->state = '\x02';
      return;
    }
    iVar16 = collproc::CollSphere(0x3fd0000000000000,lVar25 + 0x10,&DAT_003f3d58,0x22,lVar25);
    if (iVar16 == 0) {
      return;
    }
    local_c0 = (moby->pos).x - CollOutput.ip.x;
    local_bc = (moby->pos).y - CollOutput.ip.y;
    local_b8 = (moby->pos).z - CollOutput.ip.z;
    local_b4 = (moby->pos).w;
    fastfunc::FastVecNormalize((int)pvVar8 + 0x40,(int)pvVar8 + 0x40,&local_c0);
    dVar30 = (double)FUN_005e8338((double)local_b8,
                                  (double)SQRT(local_c0 * local_c0 + local_bc * local_bc));
    dVar28 = 0.7853981852531433;
    if (0.7853981852531433 <= dVar30) {
      return;
    }
    dVar30 = (double)FUN_005e8338((double)CollOutput.normal.z,
                                  (double)SQRT(CollOutput.normal.x * CollOutput.normal.x +
                                               CollOutput.normal.y * CollOutput.normal.y));
    if (dVar28 <= dVar30) {
      return;
    }
    pfVar7 = (float *)moby->pVar;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE
          |NO_UPDATE|DISABLED);
    dVar30 = (double)mobyutil::MB_randRangeFloat(-10.0,10.0);
    uVar15 = fastfunc::FastDoubleToInt
                       ((double)(animationSpeed * (float)((double)DAT_008544a0 + dVar30)));
    dVar30 = (double)fastfunc::FastIntToDouble();
    uVar29 = 0x3ff0000000000000;
    dVar28 = (double)(float)(1.0 / dVar30);
    *pfVar7 = CollOutput.ip.x;
    pfVar7[1] = CollOutput.ip.y;
    pfVar7[2] = CollOutput.ip.z;
    pfVar7[3] = CollOutput.ip.w;
    mobyutil::MB_MtxToEuler((int)lVar20,(MobyInstance *)&moby->rotation);
    FUN_005e7f98(uVar29,&local_c0,0xa10980);
    mobyupdate_helpers::M987_003f3c7c(lVar25,&local_c0);
    dVar30 = (double)mobyutil::MB_randRot();
    pfVar7[0x18] = (float)dVar30;
    dVar30 = (double)mobyutil::MB_randRot();
    pfVar7[0x19] = (float)dVar30;
    mobyupdate_helpers::M987_003f3388(lVar25,pfVar7 + 8,pfVar7 + 0xc);
    fVar3 = pfVar7[8] - (moby->pos).x;
    pfVar7[0x10] = fVar3;
    fVar4 = pfVar7[9] - (moby->pos).y;
    pfVar7[0x11] = fVar4;
    fVar17 = (moby->pos).z;
    pfVar7[0x13] = pfVar7[0xb];
    pfVar7[0x10] = (float)((double)fVar3 * dVar28);
    pfVar7[0x11] = (float)((double)fVar4 * dVar28);
    pfVar7[0x12] = (float)((double)(pfVar7[10] - fVar17) * dVar28);
    if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
       (iVar16 = mobyutil::MB_GetPlatformParent(), iVar16 != 0)) {
      pfVar7[0x10] = pfVar7[0x10] + *(float *)(iVar16 + 0x10);
      pfVar7[0x11] = pfVar7[0x11] + *(float *)(iVar16 + 0x14);
      pfVar7[0x12] = pfVar7[0x12] + *(float *)(iVar16 + 0x18);
      dVar30 = (double)fastfunc::FastIntToDouble(uVar15);
      fVar17 = *(float *)(iVar16 + 0x10);
      fVar3 = *(float *)(iVar16 + 0x14);
      fVar4 = *(float *)(iVar16 + 0x18);
      pfVar7[8] = (float)((double)fVar17 * dVar30 + (double)pfVar7[8]);
      pfVar7[9] = (float)((double)fVar3 * dVar30 + (double)pfVar7[9]);
      pfVar7[10] = (float)((double)fVar4 * dVar30 + (double)pfVar7[10]);
      *pfVar7 = (float)((double)fVar17 * dVar30 + (double)*pfVar7);
      pfVar7[1] = (float)((double)fVar3 * dVar30 + (double)pfVar7[1]);
      pfVar7[2] = (float)((double)fVar4 * dVar30 + (double)pfVar7[2]);
    }
    local_70 = (longlong)((int)(float)uVar15 >> 1);
    pfVar7[0x12] = (float)((double)DAT_0071f418 * dVar27) * (float)local_70 + pfVar7[0x12];
    dVar27 = (double)fastfunc::FastDiffRots((double)pfVar7[0xc],(double)(moby->rotation).x);
    pfVar7[0x14] = (float)(dVar27 * dVar28);
    dVar27 = (double)fastfunc::FastDiffRots((double)pfVar7[0xd],(double)(moby->rotation).y);
    pfVar7[0x15] = (float)(dVar27 * dVar28);
    dVar27 = (double)fastfunc::FastDiffRots((double)pfVar7[0xe],(double)(moby->rotation).z);
    pfVar7[0x16] = (float)(dVar27 * dVar28);
    moby->state = '\x05';
    pfVar7[0x1a] = (float)uVar15;
    pfVar7[0x1f] = (float)CollOutput.pMoby;
    if (DAT_0096bf68 <= ABS((moby->pos).z - g_heroPosition.z)) {
      return;
    }
    fVar17 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    if (DAT_0096bf6c <= SQRT(fVar3 * fVar3 + fVar17 * fVar17)) {
      return;
    }
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    auVar32 = loadVectorLeftIndexed(0x18,0x3f3d58);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar18 = storeVectorElementWordIndexed
                       (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,
                        ZEXT48(moby->pVar));
    *(undefined4 *)((int)moby->pVar + 0x68U & 0xfffffffc) = uVar18;
    moby->state = '\x02';
    return;
  }
  MVar5 = moby->oClass;
  if ((short)MVar5 < 0x3dd) {
    if (0x3db < (short)MVar5) {
      iVar16 = 5;
      goto LAB_003f51d4;
    }
  }
  else if ((short)MVar5 < 0x3de) {
    iVar16 = 10;
    goto LAB_003f51d4;
  }
  iVar16 = 1;
LAB_003f51d4:
  if ((moby->field80_0xb8 != (MobyInstance *)0x0) &&
     (bVar2 = moby->field80_0xb8->field74_0xb1, (bVar2 & 0x80) == 0)) {
    *(short *)((uint)bVar2 * 4 + 0xa0e11e + Level * 0x100) =
         *(short *)((uint)bVar2 * 4 + 0xa0e11e + Level * 0x100) + (short)iVar16;
  }
  g_boltCount = g_boltCount + iVar16;
  g_totalBoltsCollected = g_totalBoltsCollected + iVar16;
  *(int *)(&DAT_00a0f6e4 + Level * 4) = *(int *)(&DAT_00a0f6e4 + Level * 4) + iVar16;
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 003f5b10  ns=mobyupdate_helpers  size=0x238
// sig: undefined M1382_003f5b10(void)
// callers(1): 003f65a0 mobyupdate_helpers::M1382_003f65a0
// callees(3): 00110e18 mobyutil::MB_MtxFromDir; 0015d12c sound::PlayMobySound; 00500ca4 fastfunc::FastEulerToMtx1

undefined8
mobyupdate_helpers::M1382_003f5b10(double param_1,undefined4 param_2,MobyInstance *param_3)

{
  void *pvVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 local_a0 [16];
  undefined1 auStack_90 [88];
  
  if (param_3->state == '\x03') {
    uVar3 = 0;
  }
  else {
    fastfunc::FastEulerToMtx1(auStack_90,ZEXT48(param_3->pVar) + 0x10);
    pvVar1 = param_3->pVar;
    mobyutil::MB_MtxFromDir
              ((double)(DAT_00854468 * 0.017453292 * mobyutil::g_FrameTime),pvVar1,local_a0);
    param_3->modeBits = param_3->modeBits | LOCK_ROTATION;
    *(undefined4 *)((int)pvVar1 + 0x4c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x44) = 0;
    *(undefined4 *)((int)pvVar1 + 0x40) = 0;
    fVar2 = mobyutil::g_FrameTime;
    *(undefined4 *)((int)pvVar1 + 0x74) = 0;
    *(undefined4 *)((int)pvVar1 + 0x78) = param_2;
    *(float *)((int)pvVar1 + 100) = (float)param_1;
    *(undefined4 *)((int)pvVar1 + 0x7c) = 0x3f000000;
    *(float *)((int)pvVar1 + 0x48) = fVar2 * 8.0;
    *(float *)((int)pvVar1 + 0x70) = fVar2 * 8.0;
    if (DAT_010cbbd4 + (int)(animationSpeed * 3.5) < worldUpdateTime) {
      DAT_010cbbd4 = worldUpdateTime;
      sound::PlayMobySound(0,0x20,param_3);
    }
    uVar3 = 1;
    param_3->state = '\x03';
  }
  return uVar3;
}



//==== 003f5d90  ns=mobyupdate_helpers  size=0x7e0
// sig: undefined M1382_003f5d90(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd

void mobyupdate_helpers::M1382_003f5d90(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
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
  undefined1 local_100 [32];
  undefined1 local_e0 [16];
  undefined1 local_d0 [24];
  
  iVar8 = *(int *)(param_1 + 0x78);
  if (*(short *)(iVar8 + 0x6c) != 0) {
    fVar1 = *(float *)(param_1 + 0xe4);
    fVar2 = *(float *)(param_1 + 0xe0);
    fVar3 = *(float *)(param_1 + 0xe8);
    fVar4 = *(float *)(param_1 + 0xc4);
    fVar5 = *(float *)(param_1 + 0xc0);
    fVar6 = *(float *)(param_1 + 200);
    fVar14 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar7 = 0.0;
    fVar15 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar9 = DAT_00854430 / fVar14;
    fVar13 = DAT_00854434 / fVar15;
    fVar12 = fVar7;
    if (0.0 - fVar14 < 0.0) {
      fVar12 = fVar1 * fVar9;
    }
    fVar11 = fVar7;
    if (0.0 - fVar14 < 0.0) {
      fVar11 = fVar2 * fVar9;
    }
    fVar10 = fVar7;
    if (0.0 - fVar14 < 0.0) {
      fVar10 = fVar3 * fVar9;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar12 = fVar1 * fVar9;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar11 = fVar2 * fVar9;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar9;
    }
    fVar1 = fVar7;
    if (0.0 - fVar15 < 0.0) {
      fVar1 = fVar4 * fVar13;
    }
    fVar2 = fVar7;
    if (0.0 - fVar15 < 0.0) {
      fVar2 = fVar5 * fVar13;
    }
    if (0.0 - fVar15 < 0.0) {
      fVar7 = fVar6 * fVar13;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar1 = fVar4 * fVar13;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar2 = fVar5 * fVar13;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar7 = fVar6 * fVar13;
    }
    fVar4 = (*(float *)(param_1 + 0x14) + fVar12 + fVar1) - GameCamera.posY;
    fVar5 = (*(float *)(param_1 + 0x10) + fVar11 + fVar2) - GameCamera.posX;
    fVar6 = (*(float *)(param_1 + 0x18) + fVar10 + fVar7) - GameCamera.posZ;
    fVar1 = fVar4 * 1024.0;
    fVar2 = fVar5 * 1024.0;
    fVar3 = fVar6 * 1024.0;
    dVar20 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    dVar34 = 16.0;
    fVar4 = ViewContext.perspScale /
            (GameCamera.matrix.v2.w * fVar3 +
             GameCamera.matrix.v0.w * fVar2 + GameCamera.matrix.v1.w * fVar1 +
            GameCamera.matrix.v3.w);
    dVar32 = (double)((GameCamera.matrix.v2.y * fVar3 +
                       GameCamera.matrix.v0.y * fVar2 + GameCamera.matrix.v1.y * fVar1 +
                      GameCamera.matrix.v3.y) * fVar4);
    dVar31 = (double)((GameCamera.matrix.v2.z * fVar3 +
                       GameCamera.matrix.v0.z * fVar2 + GameCamera.matrix.v1.z * fVar1 +
                      GameCamera.matrix.v3.z) * fVar4);
    fastfunc::FastDoubleToInt
              ((double)((GameCamera.matrix.v2.x * fVar3 +
                         GameCamera.matrix.v0.x * fVar2 + GameCamera.matrix.v1.x * fVar1 +
                        GameCamera.matrix.v3.x) * fVar4 * 16.0));
    fastfunc::FastDoubleToInt((double)(float)(dVar32 * dVar34));
    fastfunc::FastDoubleToInt
              ((double)(float)(dVar31 * 0.9997000098228455 + (double)ViewContext.hvdf[2]));
    if ((dVar20 <= dVar34) && (dVar34 = dVar20, dVar20 < 4.0)) {
      dVar34 = 4.0;
    }
    dVar20 = (double)fastfunc::FastIntToDouble((*(int *)(iVar8 + 0x78) >> 0x18) + 0x10);
    fVar1 = *(float *)(iVar8 + 0x74);
    dVar35 = 3.141592502593994;
    dVar33 = 1.570796251296997;
    dVar32 = -3.141592502593994;
    fVar3 = fVar1 + 1.5707963;
    dVar31 = -0.16666656732559204;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    dVar30 = 0.008333025500178337;
    dVar29 = -0.0001980741071747616;
    dVar27 = 2.601886990305502e-06;
    fVar5 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar5 = fVar2;
    }
    dVar25 = 1.5707963705062866;
    fVar2 = fVar5 * fVar5;
    fVar6 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar6 = fVar4;
    }
    dVar28 = (double)((float)(dVar20 * 0.015625) * -(float)(dVar34 * 2.5 - 50.0));
    fVar12 = fVar6 * fVar6;
    fVar3 = fVar2 * fVar2 * fVar5;
    fVar4 = fVar2 * fVar3;
    fVar7 = fVar12 * fVar12 * fVar6;
    fVar9 = fVar12 * fVar7;
    dVar24 = (double)(float)(dVar28 * (double)(fVar2 * fVar4 * 2.601887e-06 +
                                              fVar4 * -0.0001980741 +
                                              fVar3 * 0.0083330255 +
                                              fVar2 * fVar5 * -0.16666657 + fVar5));
    dVar23 = (double)(float)(dVar28 * (double)(fVar12 * fVar9 * 2.601887e-06 +
                                              fVar9 * -0.0001980741 +
                                              fVar7 * 0.0083330255 +
                                              fVar12 * fVar6 * -0.16666657 + fVar6));
    dVar20 = (double)fastfunc::FastWrapRot(fVar1,1.5707964);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar26 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar26 = dVar34;
    }
    dVar20 = (double)(float)(dVar26 * dVar26);
    dVar17 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar26));
    dVar34 = (double)(float)(dVar20 * dVar17);
    dVar26 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar20 * dVar34) * dVar27 +
                                                     (double)(float)(dVar34 * dVar29 +
                                                                    (double)(float)(dVar17 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar20 * dVar26) * dVar31 +
                                                  dVar26)))));
    dVar34 = (double)fastfunc::FastWrapRot(*(float *)(iVar8 + 0x74),(float)dVar25);
    dVar20 = (double)(float)(dVar34 + dVar33);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar25 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar25 = dVar34;
    }
    dVar22 = 4.71238899230957;
    dVar20 = (double)(float)(dVar25 * dVar25);
    dVar34 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar25));
    dVar17 = (double)(float)(dVar20 * dVar34);
    dVar25 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar20 * dVar17) * dVar27 +
                                                     (double)(float)(dVar17 * dVar29 +
                                                                    (double)(float)(dVar34 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar20 * dVar25) * dVar31 +
                                                  dVar25)))));
    dVar20 = (double)fastfunc::FastWrapRot(*(float *)(iVar8 + 0x74),4.712389);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar17 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar17 = dVar34;
    }
    dVar34 = (double)(float)(dVar17 * dVar17);
    dVar18 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar17));
    dVar20 = (double)(float)(dVar34 * dVar18);
    dVar17 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar34 * dVar20) * dVar27 +
                                                     (double)(float)(dVar20 * dVar29 +
                                                                    (double)(float)(dVar18 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar34 * dVar17) * dVar31 +
                                                  dVar17)))));
    dVar34 = (double)fastfunc::FastWrapRot(*(float *)(iVar8 + 0x74),(float)dVar22);
    dVar20 = (double)(float)(dVar34 + dVar33);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar22 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar22 = dVar34;
    }
    dVar21 = 3.1415927410125732;
    dVar34 = (double)(float)(dVar22 * dVar22);
    dVar18 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar22));
    dVar20 = (double)(float)(dVar34 * dVar18);
    dVar22 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar34 * dVar20) * dVar27 +
                                                     (double)(float)(dVar20 * dVar29 +
                                                                    (double)(float)(dVar18 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar34 * dVar22) * dVar31 +
                                                  dVar22)))));
    dVar20 = (double)fastfunc::FastWrapRot(*(float *)(iVar8 + 0x74),3.1415927);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar18 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar18 = dVar34;
    }
    dVar20 = (double)(float)(dVar18 * dVar18);
    dVar19 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar18));
    dVar34 = (double)(float)(dVar20 * dVar19);
    dVar18 = (double)(float)(dVar28 * (double)(float)((double)(float)(dVar20 * dVar34) * dVar27 +
                                                     (double)(float)(dVar34 * dVar29 +
                                                                    (double)(float)(dVar19 * dVar30
                                                                                   + (double)(float)
                                                  ((double)(float)(dVar20 * dVar18) * dVar31 +
                                                  dVar18)))));
    dVar34 = (double)fastfunc::FastWrapRot(*(float *)(iVar8 + 0x74),(float)dVar21);
    dVar20 = (double)(float)(dVar34 + dVar33);
    dVar34 = (double)(float)(dVar35 - dVar20);
    if (dVar20 - (double)(float)(dVar35 - dVar20) < 0.0) {
      dVar34 = dVar20;
    }
    dVar33 = (double)(float)(dVar32 - dVar20);
    if ((double)(float)(dVar32 - dVar20) - dVar34 < 0.0) {
      dVar33 = dVar34;
    }
    dVar34 = (double)(float)(dVar33 * dVar33);
    dVar32 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar33));
    dVar20 = (double)(float)(dVar34 * dVar32);
    dVar34 = (double)(float)((double)(float)(dVar34 * dVar20) * dVar27 +
                            (double)(float)(dVar20 * dVar29 +
                                           (double)(float)(dVar32 * dVar30 +
                                                          (double)(float)((double)(float)(dVar34 * 
                                                  dVar33) * dVar31 + dVar33))));
    dVar20 = (double)(float)(dVar28 * dVar34);
    fastfunc::FastDoubleToInt(dVar23,dVar34);
    fastfunc::FastDoubleToInt(dVar24);
    fastfunc::FastDoubleToInt(dVar25);
    fastfunc::FastDoubleToInt(dVar26);
    fastfunc::FastDoubleToInt(dVar22);
    fastfunc::FastDoubleToInt(dVar17);
    fastfunc::FastDoubleToInt(dVar20);
    fastfunc::FastDoubleToInt(dVar18);
    uVar16 = idol_draw::PackCmd(0,2,0,1,0x80);
    vuchain::SetGSReg(3,uVar16);
    uVar16 = draw::GetEffectTex(0x13);
    draw::DrawTexturedQuadHud(local_100,local_d0,local_e0,uVar16,1);
    uVar16 = idol_draw::PackCmd(0,1,0,1,0x80);
    vuchain::SetGSReg(3,uVar16);
  }
  return;
}



//==== 003f65a0  ns=mobyupdate_helpers  size=0x338
// sig: undefined M1382_003f65a0(void)
// callers(0): 
// callees(7): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00110e18 mobyutil::MB_MtxFromDir; 003f5b10 mobyupdate_helpers::M1382_003f5b10; 00500b64 fastfunc::FastEulerToMtx

MobyInstance * mobyupdate_helpers::M1382_003f65a0(MobyInstance *param_1,uint param_2,int param_3)

{
  float fVar1;
  MOBY_OCLASSES MVar2;
  MobyInstance *pMVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  double dVar9;
  double dVar10;
  undefined1 local_40 [16];
  
  if (param_3 < 6) {
    if (4 < param_3) {
      pMVar7 = mobyfunc::CreateMoby(0x3dc);
      goto LAB_003f6620;
    }
  }
  else if (param_3 == 10) {
    pMVar7 = mobyfunc::CreateMoby(0x3dd);
    goto LAB_003f6620;
  }
  pMVar7 = mobyfunc::CreateMoby(TREE);
LAB_003f6620:
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar8 = param_1;
    if (param_1 != (MobyInstance *)0x0) {
      pMVar3 = param_1->field80_0xb8;
      while (pMVar3 != (MobyInstance *)0x0) {
        pMVar8 = pMVar8->field80_0xb8;
        pMVar3 = pMVar8->field80_0xb8;
      }
    }
    MVar2 = pMVar7->oClass;
    pvVar4 = pMVar7->pVar;
    if ((short)MVar2 < 0x3dc) {
      if (MVar2 == TREE) {
        pMVar7->scale = pMVar7->pClass->gScale * DAT_00854488;
      }
    }
    else if ((short)MVar2 < 0x3dd) {
      pMVar7->scale = pMVar7->pClass->gScale * DAT_0085448c;
    }
    else if ((short)MVar2 < 0x3de) {
      pMVar7->scale = pMVar7->pClass->gScale * DAT_00854490;
    }
    pMVar7->field80_0xb8 = pMVar8;
    pMVar7->updateDistance = ' ';
    pMVar7->drawDistance = 0x40;
    pMVar7->enabled = '\x01';
    pMVar7->state = '\x04';
    uVar5 = g_heroMobyPtr->color;
    uVar6 = g_heroMobyPtr->light;
    pMVar7->modeBits = pMVar7->modeBits | LOCK_ROTATION;
    pMVar7->color = uVar5;
    pMVar7->light = uVar6;
    dVar9 = (double)mobyutil::MB_randRot();
    (pMVar7->rotation).x = (float)dVar9;
    dVar9 = (double)mobyutil::MB_randRot();
    (pMVar7->rotation).z = (float)dVar9;
    fastfunc::FastEulerToMtx(&pMVar7->transform,&pMVar7->rotation);
    (pMVar7->pos).x = (param_1->pos).x;
    (pMVar7->pos).y = (param_1->pos).y;
    (pMVar7->pos).z = (param_1->pos).z;
    (pMVar7->pos).w = (param_1->pos).w;
    mobyutil::MB_randRot();
    dVar9 = 0.01745329238474369;
    mobyutil::MB_MtxFromDir
              ((double)(DAT_0085446c * 0.017453292 * mobyutil::g_FrameTime),pvVar4,local_40);
    *(f32 *)((int)pvVar4 + 0x60) = (pMVar7->pos).z;
    if ((param_2 & 2) != 0) {
      fVar1 = 0.0;
      if ((param_2 & 0x10) != 0) {
        dVar10 = (double)mobyutil::MB_randRangeFloat(-30.0,30.0);
        fVar1 = (float)(dVar10 * dVar9);
      }
      M1382_003f5b10((double)fVar1,g_heroMobyPtr,pMVar7);
    }
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  return pMVar7;
}



//==== 003f68d8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1382_003f68d8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1382_003f68d8(void)

{
  DAT_008544f0 = 0x10000;
  return;
}



//==== 003f6930  ns=mobyupdate_helpers  size=0x3c0
// sig: undefined M1382_003f6930(void)
// callers(1): 003f7c78 mobyupdate_unsorted::UpdateMoby_{635_1382}
// callees(3): 001009b0 mobyutil::MB_MoveAndCollide; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng

bool mobyupdate_helpers::M1382_003f6930
               (double param_1,int param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
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
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0xf0;
  puVar6 = (ulonglong *)lVar16;
  *puVar6 = uVar14;
  puVar6[0x20] = in_LR;
  puVar6[0x1c] = in_f30;
  puVar6[0x1d] = in_f31;
  puVar6[0x1a] = unaff_r30;
  fVar1 = *param_4;
  puVar6[0x1b] = unaff_r31;
  fVar1 = fVar1 - *(float *)(param_2 + 0x10);
  fVar2 = param_4[1] - *(float *)(param_2 + 0x14);
  fVar3 = ABS(fVar1);
  fVar4 = ABS(fVar2);
  *(float *)(puVar6 + 0x10) = fVar1;
  puVar6[0x19] = unaff_r29;
  *(float *)((int)puVar6 + 0x84) = fVar2;
  iVar5 = *(int *)(param_2 + 0x78);
  *(float *)(puVar6 + 0x11) = fVar3 - fVar4;
  dVar23 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar6 + 0x10));
  if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar6 + 0x84));
  if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
    fVar10 = fVar3;
  }
  puVar6[0x18] = unaff_r28;
  puVar6[0x17] = unaff_r27;
  puVar6[0x16] = unaff_r26;
  dVar22 = dVar23;
  if (0.0 < fVar1) {
    lVar19 = uVar14 - 0xe0;
    lVar18 = uVar14 - 100;
    lVar17 = uVar14 - 0x54;
    lVar21 = 2;
    fVar1 = (fVar10 - fVar1) / (fVar10 + fVar1);
    fVar3 = fVar1 * fVar1;
    *(float *)(puVar6 + 0x13) = fVar1;
    *(float *)(puVar6 + 0x12) = fVar1;
    *(float *)((int)puVar6 + 0x94) = fVar1;
    *(float *)((int)puVar6 + 0x8c) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3;
    *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar1;
    *(float *)(puVar6 + 0x13) = *(float *)(puVar6 + 0x13) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar19 + 0x8c) = *(float *)((int)lVar19 + 0x7c) * fVar1 * fVar1;
      iVar7 = (int)lVar18;
      lVar19 = lVar19 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar1 * fVar1;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar19 = uVar14 - 100;
    pfVar20 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar17 = lVar19;
    lVar18 = lVar16;
    do {
      fVar1 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x8c) * fVar1;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar17 = 2;
    do {
      iVar7 = (int)lVar16;
      iVar8 = (int)lVar19;
      lVar16 = lVar16 + 0x10;
      lVar19 = lVar19 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar7 + 0x8c)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar4 + fVar2);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar22,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 7.330383,(float *)(param_2 + 0x48),0x3f0000,
             (float *)(iVar5 + 0x1dc));
  mobyutil::Delt((float)param_1,DAT_0071f418 * 13.0,(float *)(iVar5 + 0x1d8));
  fVar3 = mobyutil::g_FrameTime;
  fVar1 = *(float *)(param_2 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar10 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar10 = fVar2;
  }
  fVar9 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar9 = fVar4;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
    fVar1 = fVar10;
  }
  fVar2 = fVar9 * fVar9;
  fVar4 = fVar1 * fVar1;
  fVar12 = fVar2 * fVar2 * fVar9;
  fVar10 = fVar4 * fVar4 * fVar1;
  fVar13 = fVar2 * fVar12;
  fVar11 = fVar4 * fVar10;
  *(float *)(puVar6 + 0xe) =
       (fVar4 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) *
       *(float *)(iVar5 + 0x1d8);
  fVar1 = *(float *)(iVar5 + 0x1d8);
  *(undefined4 *)(puVar6 + 0xf) = 0;
  *(float *)((int)puVar6 + 0x74) =
       (fVar2 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar2 * fVar9 * -0.16666657 + fVar9) * fVar1
  ;
  *(float *)(puVar6 + 0xf) = fVar3 * -0.5;
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar23,param_2,uVar14 - 0x80);
  fVar1 = *(float *)(param_2 + 0x14) - param_4[1];
  fVar2 = *(float *)(param_2 + 0x10) - *param_4;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 0.2;
}



//==== 003f6d30  ns=mobyupdate_helpers  size=0x2e8
// sig: undefined M1382_003f6d30(void)
// callers(1): 003f7c78 mobyupdate_unsorted::UpdateMoby_{635_1382}
// callees(5): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1382_003f6d30(MobyInstance *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar8;
  longlong lVar6;
  longlong lVar7;
  uint uVar9;
  ulonglong uVar10;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  double dVar15;
  uint uVar11;
  
  iVar12 = 0;
  iVar14 = 0;
  bVar1 = param_1->state;
  uVar13 = ZEXT48(param_1->pVar);
  iVar8 = (int)(animationSpeed * 170.5);
  if (bVar1 < 7) {
    if (3 < bVar1) {
      iVar12 = 1;
      iVar8 = (int)(animationSpeed * 90.5);
    }
  }
  else {
    if (bVar1 < 0xd) {
      if (0xb < bVar1) {
        return;
      }
    }
    else if (0xf < bVar1) goto LAB_003f6e14;
    iVar12 = 2;
    iVar8 = (int)(animationSpeed * 50.5);
  }
LAB_003f6e14:
  dVar15 = (double)fastfunc::FastIntToDouble(iVar8);
  fVar2 = (float)((double)(longlong)(worldUpdateTime - (worldUpdateTime / iVar8) * iVar8) / dVar15)
          * 2.0 * 3.1415927 + -3.1415927;
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
  fVar5 = fVar2 * fVar3;
  dVar15 = (double)(fVar2 * fVar5 * 2.601887e-06 +
                   fVar5 * -0.0001980741 +
                   fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4);
  iVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * 20.0));
  lVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * 70.0));
  lVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * 10.0));
  iVar8 = iVar8 + 0x32;
  lVar6 = lVar6 + 0xb4;
  uVar9 = iVar8 + ((uint)(0xff - (longlong)iVar8 >> 0x3f) & 0xffU - iVar8);
  uVar10 = lVar6 + (0xff - (longlong)(int)lVar6 >> 0x3f & 0xffU - lVar6);
  uVar11 = (uint)uVar10;
  if (iVar12 == 2) {
    uVar10 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
    uVar9 = uVar11;
  }
  else if (iVar12 != 0) {
    uVar10 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
    uVar9 = uVar11;
  }
  uVar9 = fastfunc::FastLerpColor
                    (0x3fb99999a0000000,param_1->field60_0x90,
                     (uint)((uVar10 & 0xffffffff) << 8) | uVar9 |
                     (uint)((lVar7 + 0x14U & 0xffffffff) << 0x10) | 0x80000000);
  param_1->field60_0x90 = uVar9;
  do {
    iVar14 = iVar14 + 1;
    mobyfunc::GetBonePosition(param_1,iVar14,uVar13 + 0x200);
    uVar13 = uVar13 + 0x10;
  } while (iVar14 < 3);
  RegisterFuncForMoby(&PTR_M1382_003f9a38_0070dcd0,param_1);
  return;
}



//==== 003f7040  ns=mobyupdate_helpers  size=0x4a8
// sig: undefined M1382_003f7040(void)
// callers(1): 003f7c78 mobyupdate_unsorted::UpdateMoby_{635_1382}
// callees(2): 001167c8 mobyutil::MB_UpdateManipulatorRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1382_003f7040(int param_1)

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
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f26;
  double dVar21;
  ulonglong in_f27;
  double dVar22;
  ulonglong in_f28;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x110;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar10;
  puVar7[0x24] = in_LR;
  puVar7[0x1c] = in_f26;
  puVar7[0x1d] = in_f27;
  puVar7[0x1e] = in_f28;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  puVar7[0x1b] = unaff_r31;
  fVar1 = hero::g_heroCGPos - fVar1;
  dVar25 = (double)fVar1;
  fVar2 = DAT_00969db4 - fVar2;
  dVar24 = (double)fVar2;
  puVar7[0x19] = unaff_r29;
  *(float *)((int)puVar7 + 0x7c) = fVar1;
  *(float *)(puVar7 + 0x10) = fVar2;
  puVar7[0x1a] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  dVar26 = (double)(*(float *)(param_1 + 0x18) + 0.5);
  *(float *)((int)puVar7 + 0x84) = (float)(ABS(dVar25) - ABS(dVar24));
  dVar21 = 0.0;
  dVar23 = (double)DAT_00969db8;
  fVar1 = *(float *)(param_1 + 0x48);
  uVar16 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar19 = ABS((double)*(float *)((int)puVar7 + 0x7c));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar19 = ABS(dVar24);
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar18 = ABS((double)*(float *)(puVar7 + 0x10));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar18 = ABS(dVar25);
  }
  dVar22 = 0.7853981852531433;
  dVar20 = dVar21;
  if (0.0 < dVar19) {
    lVar11 = uVar10 - 0x100;
    lVar15 = uVar10 - 0x58;
    lVar13 = uVar10 - 0x68;
    lVar17 = 2;
    fVar5 = (float)(dVar18 - dVar19) / (float)(dVar18 + dVar19);
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0xb4) = fVar5;
    *(float *)((int)puVar7 + 0xac) = fVar5;
    *(float *)(puVar7 + 0x16) = fVar5;
    *(float *)(puVar7 + 0x15) = fVar5;
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar4;
    *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar5;
    *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar5 * fVar4;
    do {
      *(float *)((int)lVar11 + 0xa8) = *(float *)((int)lVar11 + 0x98) * fVar5 * fVar5;
      iVar8 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar8 + 4) * fVar5 * fVar5;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar15 = uVar10 - 0x68;
    pfVar14 = (float *)&DAT_007358e0;
    lVar11 = lVar12;
    lVar13 = lVar15;
    do {
      fVar5 = *pfVar14;
      fVar4 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar11 + 0xa8) = *(float *)((int)lVar11 + 0xa8) * fVar5;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar13 = 2;
    lVar11 = lVar12;
    dVar19 = dVar21;
    do {
      iVar8 = (int)lVar11;
      iVar9 = (int)lVar15;
      lVar11 = lVar11 + 0x10;
      lVar15 = lVar15 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar8 + 0xa8)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar20 = (double)((float)(dVar19 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar18 = (double)fastfunc::FastDiffRots(dVar20,(double)fVar1);
  dVar20 = ABS((double)(float)(dVar23 - dVar26));
  *(float *)((int)puVar7 + 0x74) = (float)(dVar23 - dVar26);
  fVar1 = SQRT((float)(dVar25 * dVar25 + (double)(float)(dVar24 * dVar24)));
  dVar23 = ABS((double)fVar1);
  *(float *)(puVar7 + 0xe) = fVar1;
  *(float *)(puVar7 + 0xf) = (float)(dVar23 - dVar20);
  uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  dVar19 = ABS((double)*(float *)(puVar7 + 0xe));
  if ((double)*(float *)(puVar7 + 0xf) - dVar21 < 0.0) {
    dVar19 = dVar20;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)((int)puVar7 + 0x74));
  if ((double)*(float *)(puVar7 + 0xf) - dVar21 < 0.0) {
    dVar24 = dVar23;
  }
  if (dVar21 < dVar19) {
    lVar11 = uVar10 - 0x100;
    lVar15 = uVar10 - 0x78;
    lVar13 = uVar10 - 0x88;
    lVar17 = 2;
    fVar3 = (float)(dVar24 - dVar19) / (float)(dVar24 + dVar19);
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x94) = fVar3;
    *(float *)((int)puVar7 + 0x8c) = fVar3;
    *(float *)(puVar7 + 0x12) = fVar3;
    *(float *)(puVar7 + 0x11) = fVar3;
    fVar3 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar5;
    *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar3;
    *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar3 * fVar5;
    do {
      *(float *)((int)lVar11 + 0x88) = *(float *)((int)lVar11 + 0x78) * fVar3 * fVar3;
      iVar8 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar15 = uVar10 - 0x88;
    pfVar14 = (float *)&DAT_007358e0;
    lVar11 = lVar12;
    lVar13 = lVar15;
    do {
      fVar3 = *pfVar14;
      fVar5 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar11 + 0x88) = *(float *)((int)lVar11 + 0x88) * fVar3;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar11 = 2;
    do {
      iVar8 = (int)lVar12;
      iVar9 = (int)lVar15;
      lVar12 = lVar12 + 0x10;
      lVar15 = lVar15 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar8 + 0x88)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    dVar21 = (double)((float)(dVar21 + dVar22) * fVar2 + fVar1);
  }
  dVar21 = -dVar21;
  dVar19 = 1.0471975803375244;
  if ((dVar18 <= 1.0471975803375244) && (dVar19 = dVar18, dVar18 < -1.0471975803375244)) {
    dVar19 = -1.0471975803375244;
  }
  dVar23 = 0.5235987901687622;
  if ((dVar21 <= 0.5235987901687622) && (dVar23 = dVar21, dVar21 < -0.5235987901687622)) {
    dVar23 = -0.5235987901687622;
  }
  *(float *)(iVar6 + 0x298) = (float)dVar19;
  *(float *)(iVar6 + 0x294) = (float)dVar23;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),param_1,iVar6 + 0x230,0);
  return;
}



//==== 003f7518  ns=mobyupdate_helpers  size=0x6c8
// sig: undefined M1382_003f7518(void)
// callers(1): 003f7c78 mobyupdate_unsorted::UpdateMoby_{635_1382}
// callees(11): 00057820 collproc::CollLine; 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 00111ba0 mobyutil::MB_getTargetInArea; 00500108 fastfunc::FastDecTimerF32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1382_003f7518(MobyInstance *param_1,int param_2)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar15;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x120;
  puVar10 = (ulonglong *)lVar14;
  *puVar10 = uVar12;
  puVar10[0x26] = in_LR;
  puVar10[0x23] = in_f31;
  puVar10[0x21] = unaff_r30;
  puVar10[0x22] = unaff_r31;
  uVar1 = param_1->state;
  puVar10[0x20] = unaff_r29;
  pvVar9 = param_1->pVar;
  uVar20 = ZEXT48(pvVar9);
  puVar10[0x1f] = unaff_r28;
  if (uVar1 != '\0') {
    if (*(int *)((int)pvVar9 + 0x38) != 0) {
      dVar22 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
      iVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
      puVar10[0x1d] = (longlong)iVar15;
      uVar23 = puVar10[0x1d];
      *(undefined4 *)((int)pvVar9 + 0x38) = 0;
      *(float *)((int)pvVar9 + 0x1d4) = (float)(longlong)uVar23;
    }
    fastfunc::FastDecTimerF32(uVar20 + 0x1d4);
    dVar22 = 0.0;
    *(undefined4 *)((int)puVar10 + 0x84) = 0;
    iVar15 = mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,iVar15,uVar20 + 0x20,0,puVar10 + 0x10,(int)puVar10 + 0x84,0,4)
    ;
    if ((*(int *)(puVar10 + 0x10) != 1) && (param_1->state != '\x0f')) {
      *(float *)((int)pvVar9 + 0x20) =
           *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar10 + 0x84);
      fVar7 = DAT_0071f418;
      *(float *)((int)pvVar9 + 0x130) = DAT_0071f418 * 42.0;
      *(undefined1 *)((int)pvVar9 + 0x15d) = 0;
      *(undefined4 *)((int)pvVar9 + 0x144) = 9;
      *(float *)((int)pvVar9 + 0x134) = fVar7 * 24.0;
      fVar7 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar9 + 0x13c) = mobyutil::g_FrameTime * 15.7;
      *(undefined4 *)((int)pvVar9 + 0x170) = 0xbf800000;
      *(undefined4 *)((int)pvVar9 + 0x174) = 0xbf800000;
      *(float *)((int)pvVar9 + 0x138) = fVar7 * 19.0;
      uVar16 = *(undefined4 *)(iVar15 + 0x18);
      *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar15 + 0x10);
      *(undefined4 *)(puVar10 + 7) = uVar16;
      uVar16 = *(undefined4 *)(iVar15 + 0x1c);
      *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
      *(undefined4 *)((int)puVar10 + 0x3c) = uVar16;
      mobyutil::MB_VecAtan2Angles(puVar10[6],puVar10[7],uVar12 - 0x98,uVar20 + 0x138,uVar20 + 0x13c)
      ;
      if ((iVar15 != 0) &&
         ((*(int *)(iVar15 + 0x20) != 0 && (*(short *)(*(int *)(iVar15 + 0x20) + 0xa6) == 99)))) {
        fVar7 = *(float *)((int)pvVar9 + 0x1f0) - (param_1->pos).x;
        fVar2 = *(float *)((int)pvVar9 + 500) - (param_1->pos).y;
        dVar24 = ABS((double)fVar7);
        dVar26 = ABS((double)fVar2);
        *(float *)(puVar10 + 0x13) = fVar7;
        *(float *)((int)puVar10 + 0x9c) = fVar2;
        *(float *)(puVar10 + 0x14) = (float)(dVar24 - dVar26);
        uVar23 = (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1d) & 4;
        dVar25 = ABS((double)*(float *)(puVar10 + 0x13));
        if ((double)*(float *)(puVar10 + 0x14) - dVar22 < 0.0) {
          dVar25 = dVar26;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
        dVar26 = ABS((double)*(float *)((int)puVar10 + 0x9c));
        if ((double)*(float *)(puVar10 + 0x14) - dVar22 < 0.0) {
          dVar26 = dVar24;
        }
        fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        dVar24 = dVar22;
        if (dVar22 < dVar25) {
          lVar13 = uVar12 - 0x110;
          lVar17 = uVar12 - 0x5c;
          lVar19 = uVar12 - 0x4c;
          lVar21 = 2;
          fVar8 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
          fVar3 = fVar8 * fVar8;
          *(float *)(puVar10 + 0x1a) = fVar8;
          *(float *)(puVar10 + 0x19) = fVar8;
          *(float *)((int)puVar10 + 0xcc) = fVar8;
          *(float *)((int)puVar10 + 0xc4) = fVar8;
          fVar8 = fVar3 * fVar3;
          *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar3;
          *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar8;
          *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar8 * fVar3;
          do {
            *(float *)((int)lVar13 + 0xc4) = *(float *)((int)lVar13 + 0xb4) * fVar8 * fVar8;
            iVar15 = (int)lVar17;
            lVar13 = lVar13 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar8 * fVar8;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar12 - 0x5c;
          pfVar18 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar17 = lVar19;
          do {
            fVar8 = *pfVar18;
            fVar3 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar13 + 0xc4) = *(float *)((int)lVar13 + 0xc4) * fVar8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar17 = 2;
          lVar13 = lVar14;
          dVar25 = dVar22;
          do {
            iVar15 = (int)lVar13;
            lVar13 = lVar13 + 0x10;
            iVar11 = (int)lVar19;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0xc4)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar24 = (double)((float)(dVar25 + 0.7853981852531433) * fVar7 + fVar2);
        }
        *(float *)(puVar10 + 0x11) = (float)dVar24;
      }
      mobyutil::MB_StartKick((double)*(float *)(puVar10 + 0x11),param_1,uVar20 + 0x120);
      param_1->state = '\x0f';
      *(undefined1 *)((int)pvVar9 + 0x117) = 0xf0;
      mobyutil::MB_UpdateLightsTransition(param_1,uVar20 + 0x110);
    }
    param_1->damage = -1;
    if ((param_2 == 0) &&
       (iVar15 = mobyutil::MB_getTargetInArea
                           (0x4060000000000000,param_1,uVar20 + 0x180,&DAT_003f74e8,0,0,0,0),
       iVar15 != 2)) {
      fVar7 = (param_1->pos).y;
      fVar2 = (param_1->pos).x;
      fVar8 = fVar7 - *(float *)((int)pvVar9 + 0x1b4);
      fVar3 = fVar2 - *(float *)((int)pvVar9 + 0x1b0);
      fVar4 = (param_1->pos).z - *(float *)((int)pvVar9 + 0x1b8);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar8 * fVar8) < 64.0) {
        fVar2 = *(float *)((int)pvVar9 + 0x180) - fVar2;
        fVar7 = *(float *)((int)pvVar9 + 0x184) - fVar7;
        dVar24 = ABS((double)fVar2);
        dVar26 = ABS((double)fVar7);
        *(float *)((int)puVar10 + 0x8c) = fVar2;
        *(float *)(puVar10 + 0x12) = fVar7;
        fVar7 = (param_1->rotation).z;
        *(float *)((int)puVar10 + 0x94) = (float)(dVar24 - dVar26);
        uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
        dVar25 = ABS((double)*(float *)((int)puVar10 + 0x8c));
        if ((double)*(float *)((int)puVar10 + 0x94) - dVar22 < 0.0) {
          dVar25 = dVar26;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
        fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        dVar26 = ABS((double)*(float *)(puVar10 + 0x12));
        if ((double)*(float *)((int)puVar10 + 0x94) - dVar22 < 0.0) {
          dVar26 = dVar24;
        }
        if (dVar22 < dVar25) {
          lVar13 = uVar12 - 0x110;
          lVar19 = uVar12 - 0x6c;
          lVar17 = uVar12 - 0x7c;
          lVar21 = 2;
          fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar10 + 0x16) = fVar3;
          *(float *)(puVar10 + 0x15) = fVar3;
          *(float *)((int)puVar10 + 0xac) = fVar3;
          *(float *)((int)puVar10 + 0xa4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar4;
          *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar3;
          *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar13 + 0xa4) = *(float *)((int)lVar13 + 0x94) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar12 - 0x7c;
          pfVar18 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar17 = lVar19;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar13 + 0xa4) = *(float *)((int)lVar13 + 0xa4) * fVar3;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar13 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar11 = (int)lVar19;
            lVar14 = lVar14 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar15 + 0xa4)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar8 + fVar2);
        }
        dVar22 = (double)fastfunc::FastSubRots(fVar7,(float)dVar22);
        fVar5 = (param_1->pos).y;
        *(f32 *)(puVar10 + 0xe) = (param_1->pos).x;
        fVar6 = (param_1->pos).w;
        *(f32 *)((int)puVar10 + 0x74) = fVar5;
        *(f32 *)((int)puVar10 + 0x7c) = fVar6;
        *(float *)(puVar10 + 0xf) = (param_1->pos).z + 1.0;
        uVar16 = collproc::CollLine(uVar12 - 0xb0,&hero::g_heroCGPos,2,0,0);
        *(char *)((int)pvVar9 + 0x1e4) = (char)((ulonglong)(LZCOUNT(uVar16) << 0x20) >> 0x25);
        if (dVar22 < 1.0471975803375244) {
          *(byte *)((int)pvVar9 + 0x1e4) = (byte)((ulonglong)(LZCOUNT(uVar16) << 0x20) >> 0x24) & 2;
        }
      }
    }
  }
  return;
}



//==== 003f7c78  ns=mobyupdate_unsorted  size=0x1b18
// sig: undefined UpdateMoby_{635_1382}(MobyInstance * moby)
// callers(0): 
// callees(24): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00104e44 mobyutil::PointInsideComplexPoly; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 00119ac0 mobyutil::MB_SetScaleCheat; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011aa78 mobyutil::MB_SpawnDebris; 003f6930 mobyupdate_helpers::M1382_003f6930; 003f6d30 mobyupdate_helpers::M1382_003f6d30; 003f7040 mobyupdate_helpers::M1382_003f7040; 003f7518 mobyupdate_helpers::M1382_003f7518; 0048c188 FUN_0048c188; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots

/* Moby 635
   Moby 1382 */

void mobyupdate_unsorted::UpdateMoby__635_1382_(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyModeBit MVar10;
  void *pvVar11;
  MobyClass *pMVar12;
  MobyInstance *victim;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined8 uVar18;
  longlong lVar19;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  lVar19 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar25 = uVar17 - 0x170;
  puVar14 = (ulonglong *)lVar25;
  *puVar14 = uVar17;
  puVar14[0x30] = in_LR;
  puVar14[0x2d] = in_f31;
  puVar14[0x2a] = unaff_r29;
  uVar1 = moby->state;
  puVar14[0x2b] = unaff_r30;
  uVar29 = 0;
  pvVar11 = moby->pVar;
  uVar30 = ZEXT48(pvVar11);
  puVar14[0x2c] = unaff_r31;
  puVar14[0x28] = unaff_r27;
  puVar14[0x29] = unaff_r28;
  if (uVar1 != '\f') {
    if (*(int *)((int)pvVar11 + 0x2b0) == -1) {
      if (*(int *)((int)pvVar11 + 0x2b8) != -1) {
        uVar23 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,0xffffffffffffffff);
        uVar29 = (ulonglong)(int)uVar23;
        if (*(int *)((int)pvVar11 + 700) != -1) {
          uVar22 = mobyutil::MB_IsPntInCuboid
                             ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar11 + 700));
          uVar29 = (ulonglong)(int)(uVar23 | uVar22);
        }
      }
    }
    else {
      iVar20 = mobyutil::MB_IsPntInCuboid
                         ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar11 + 0x2b0));
      uVar29 = (ulonglong)(LZCOUNT(iVar20) << 0x20) >> 0x25;
      if (*(int *)((int)pvVar11 + 0x2b4) != -1) {
        iVar21 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar11 + 0x2b4));
        uVar29 = (ulonglong)((LZCOUNT(iVar20) & LZCOUNT(iVar21)) << 0x20) >> 0x25;
      }
    }
  }
  mobyupdate_helpers::M1382_003f7518(lVar19,uVar29);
  if (((int)uVar29 == 0) || (moby->state == '\x0f')) {
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->enabled = '\x01';
    mobyupdate_helpers::M1382_003f7040(lVar19);
    mobyupdate_helpers::M1382_003f6d30(lVar19);
    iVar20 = *(int *)((int)pvVar11 + 0x1c0);
    mobyutil::MB_SetScaleCheat(0x4000ccccc0000000,uVar30 + 0x230);
    if ((moby->enabled != '\0') &&
       (fVar4 = (moby->pos).y - GameCamera.posY, fVar6 = (moby->pos).x - GameCamera.posX,
       fVar7 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4) < 29.0)) {
      mobyutil::MB_SetZBoundsFromGround(lVar19);
      moby->shadow = '\x17';
    }
    bVar2 = moby->state;
    if (bVar2 < 8) {
      if (bVar2 < 3) {
        if (bVar2 == 0) {
          MVar10 = moby->modeBits;
          *(f32 *)((int)pvVar11 + 0x1f0) = (moby->pos).x;
          *(f32 *)((int)pvVar11 + 500) = (moby->pos).y;
          fVar3 = (moby->pos).z;
          moby->modeBits = MVar10 | CAN_BE_AUTO_TARGETED;
          *(f32 *)((int)pvVar11 + 0x1f8) = fVar3;
          fVar3 = (moby->pos).w;
          *(undefined **)((int)pvVar11 + 0xd0) = &DAT_00854514;
          *(f32 *)((int)pvVar11 + 0x1fc) = fVar3;
          *(undefined4 *)((int)pvVar11 + 0x20) = 0x3f800000;
          *(undefined2 *)((int)pvVar11 + 0x24) = 1;
          *(undefined1 *)((int)pvVar11 + 0x58) = 8;
          *(undefined1 *)((int)pvVar11 + 0x5a) = 7;
          *(undefined1 *)((int)pvVar11 + 0x29) = 0;
          dVar32 = (double)mobyutil::MB_randRangeFloat
                                     (mobyutil::g_FrameTime * 7.2,mobyutil::g_FrameTime * 8.7);
          pMVar12 = moby->pClass;
          *(float *)((int)pvVar11 + 0x1ec) = (float)dVar32;
          moby->state = '\x01';
          uVar18 = mobyutil::MB_randInt(*(undefined1 *)(*(int *)&pMVar12->type + 0x10));
          mobyutil::MB_SetAnimation(lVar19,0,uVar18,0);
          if (*(int *)((int)pvVar11 + 0x1e8) == -1) {
            *(undefined4 *)((int)pvVar11 + 0x1e8) = *(undefined4 *)((int)pvVar11 + 0x1d0);
          }
        }
        else if (bVar2 < 2) {
          if (((*(char *)((int)pvVar11 + 0x1e4) != '\0') &&
              (iVar20 = mobyutil::MB_randInt(0x1f), iVar20 == 0)) &&
             (moby->state = '\x02', moby->animationId != '\x01')) {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar14 + 300));
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          if (*(char *)((int)pvVar11 + 0x1e4) == '\x02') {
            iVar20 = mobyutil::MB_randInt(3);
            if (iVar20 == 0) {
              if (g_heroType == '\x03') {
                moby->state = '\x06';
                if (moby->animationId != '\a') {
                  puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                  mobyutil::MB_SetAnimation(lVar19,7,0,*(undefined4 *)((int)puVar14 + 300));
                }
              }
              else {
                moby->state = '\a';
                if (moby->animationId != '\b') {
                  puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                  mobyutil::MB_SetAnimation(lVar19,8,0,*(undefined4 *)((int)puVar14 + 300));
                }
              }
            }
            else if (moby->animationId != '\x02') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar19,2,0,*(undefined4 *)((int)puVar14 + 300));
            }
          }
          else {
            moby->state = '\x05';
            if (moby->animationId != '\x03') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
            }
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = loadVectorLeftIndexed(0x14,0x3f7be0);
            auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar34 = vectorMultiplyAddFloatingPoint
                                (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 |
                                         auVar34 << 0x60,auVar35);
            auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
            auVar34 = vectorSplatHalfWord(auVar34,1);
            uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e0,uVar30);
            *(undefined2 *)((int)pvVar11 + 0x1e0) = uVar13;
            uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e2,uVar30);
            *(undefined2 *)((int)pvVar11 + 0x1e2) = uVar13;
          }
        }
      }
      else if (bVar2 < 5) {
        if (bVar2 < 4) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\0'))
          {
            uVar18 = mobyutil::MB_randInt
                               ((ulonglong)*(byte *)(*(int *)&moby->pClass->type + 0x10) - 1);
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,0,uVar18,*(undefined4 *)((int)puVar14 + 300));
          }
        }
        else {
          uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x120));
          if ((uVar23 & 0x60) == 0) {
            fVar3 = (moby->pos).z;
            uVar23 = (int)fVar3 >> 0x1f;
            if ((int)((uVar23 >> 1 ^ (uint)fVar3) - uVar23) < 0x40000000) {
              mobyutil::MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
              mobyfunc::DeleteMoby(moby);
            }
          }
          else {
            moby->state = '\x05';
            if (moby->animationId != '\x03') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
            }
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = loadVectorLeftIndexed(0x14,0x3f7be0);
            auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar34 = vectorMultiplyAddFloatingPoint
                                (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 |
                                         auVar34 << 0x60,auVar35);
            auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
            auVar34 = vectorSplatHalfWord(auVar34,1);
            uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e2,uVar30);
            *(undefined2 *)((int)pvVar11 + 0x1e2) = uVar13;
            uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e0,uVar30);
            *(undefined2 *)((int)pvVar11 + 0x1e0) = uVar13;
          }
        }
      }
      else if (bVar2 < 6) {
        if (iVar20 == 0) {
          iVar20 = mobyutil::MB_randInt(0x1f);
          if ((iVar20 == 0) && (moby->state = '\x03', moby->animationId != '\0')) {
            uVar18 = mobyutil::MB_randInt(*(undefined1 *)(*(int *)&moby->pClass->type + 0x10));
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,0,uVar18,*(undefined4 *)((int)puVar14 + 300));
          }
        }
        else {
          fVar4 = *(float *)(iVar20 + 0x10) - (moby->pos).x;
          fVar6 = *(float *)(iVar20 + 0x14) - (moby->pos).y;
          fVar7 = ABS(fVar4);
          fVar5 = ABS(fVar6);
          *(float *)(puVar14 + 0x17) = fVar4;
          *(float *)((int)puVar14 + 0xbc) = fVar6;
          *(float *)(puVar14 + 0x18) = fVar7 - fVar5;
          fVar4 = 0.0;
          uVar29 = (ulonglong)(*(uint *)(puVar14 + 0x17) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xbc) >> 0x1d) & 4;
          fVar6 = ABS(*(float *)(puVar14 + 0x17));
          if (*(float *)(puVar14 + 0x18) - 0.0 < 0.0) {
            fVar6 = fVar5;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
          fVar5 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
          fVar9 = ABS(*(float *)((int)puVar14 + 0xbc));
          if (*(float *)(puVar14 + 0x18) - 0.0 < 0.0) {
            fVar9 = fVar7;
          }
          if (0.0 < fVar6) {
            lVar24 = uVar17 - 0x160;
            lVar28 = uVar17 - 0x5c;
            lVar26 = uVar17 - 0x6c;
            lVar31 = 2;
            fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
            fVar7 = fVar6 * fVar6;
            *(float *)(puVar14 + 0x22) = fVar6;
            *(float *)(puVar14 + 0x21) = fVar6;
            *(float *)((int)puVar14 + 0x10c) = fVar6;
            *(float *)((int)puVar14 + 0x104) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar7;
            *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar6;
            *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar24 + 0x104) = *(float *)((int)lVar24 + 0xf4) * fVar6 * fVar6;
              iVar20 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
              lVar28 = lVar28 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar31 = 4;
            lVar28 = uVar17 - 0x6c;
            pfVar27 = (float *)&DAT_007358e0;
            lVar24 = lVar25;
            lVar26 = lVar28;
            do {
              fVar6 = *pfVar27;
              fVar7 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar24 + 0x104) = *(float *)((int)lVar24 + 0x104) * fVar6;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
              lVar26 = lVar26 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar24 = 2;
            do {
              iVar20 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              iVar21 = (int)lVar28;
              lVar28 = lVar28 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar20 + 0x104) + *(float *)(iVar21 + 4) +
                      *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
          }
          mobyutil::OrganicDeltAng
                    (fVar4,DAT_0071f418 * 4.712389,DAT_0071f418 * 4.712389,
                     mobyutil::g_FrameTime * 3.4906585,&(moby->rotation).z,0x720000,
                     (float *)((int)pvVar11 + 0x1dc));
          if (ABS(*(float *)((int)pvVar11 + 0x1dc)) <= mobyutil::g_FrameTime * 0.08726646) {
            if (moby->animationId != '\x03') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
            }
          }
          else if (*(int *)((int)pvVar11 + 0x1dc) < 0) {
            if (moby->animationId != '\x04') {
              puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar19,4,0,*(undefined4 *)((int)puVar14 + 300));
            }
          }
          else if (moby->animationId != '\x05') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,5,0,*(undefined4 *)((int)puVar14 + 300));
          }
          moby->unk58 = 1.7;
          if ((*(char *)((int)pvVar11 + 0x1e4) == '\x02') &&
             ((iVar20 = fastfunc::FastDecTimerS16(uVar30 + 0x1e2), iVar20 != 0 ||
              (g_heroType != '\x03')))) {
            iVar20 = mobyutil::MB_randInt(3);
            if (iVar20 == 0) {
              if (moby->animationId != '\x02') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar19,2,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
            else if (g_heroType == '\x03') {
              moby->state = '\x06';
              if (moby->animationId != '\a') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar19,7,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
            else {
              moby->state = '\a';
              if (moby->animationId != '\b') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar19,8,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
          }
          else if ((*(char *)((int)pvVar11 + 0x1e4) == '\0') &&
                  ((*(short *)((int)pvVar11 + 0x1e0) == 0 &&
                   (moby->state = '\x03', moby->animationId != '\0')))) {
            uVar18 = mobyutil::MB_randInt(*(undefined1 *)(*(int *)&moby->pClass->type + 0x10));
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,0,uVar18,*(undefined4 *)((int)puVar14 + 300));
          }
        }
      }
      else if (*(char *)((int)pvVar11 + 0x1e4) == '\x02') {
        if ((*(int *)((int)pvVar11 + 0x1d4) == 0) &&
           (iVar20 = mobyutil::PointInsideComplexPoly
                               (&g_heroPosition,
                                (Vec4 *)Splines[*(int *)((int)pvVar11 + 0x1d0)]->points,
                                Splines[*(int *)((int)pvVar11 + 0x1d0)]->cnt), iVar20 == 0)) {
          if ((moby->field43_0x70 & 2U) != 0) {
            iVar20 = mobyutil::MB_randInt(3);
            if (iVar20 == 0) {
              if (moby->animationId != '\x02') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar19,2,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
            else {
              iVar20 = mobyutil::MB_randInt(7);
              if (iVar20 == 0) {
                if (moby->animationId != '\b') {
                  puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                  mobyutil::MB_SetAnimation(lVar19,8,0,*(undefined4 *)((int)puVar14 + 300));
                }
              }
              else if (moby->animationId != '\a') {
                puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar19,7,0,*(undefined4 *)((int)puVar14 + 300));
              }
            }
          }
        }
        else {
          iVar20 = mobyutil::MB_randInt(0x14);
          if ((iVar20 == 0) && (moby->state = '\b', moby->animationId != '\x01')) {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar14 + 300));
          }
        }
      }
      else {
        iVar20 = mobyutil::MB_randInt(0x14);
        if (iVar20 == 0) {
          moby->state = '\x05';
          if (moby->animationId != '\x03') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
          }
          auVar34 = ZEXT416(0xffffffff);
          auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
          auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar34 = loadVectorLeftIndexed(0x14,0x3f7be0);
          auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar34 = vectorMultiplyAddFloatingPoint
                              (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60
                               ,auVar35);
          auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
          auVar34 = vectorSplatHalfWord(auVar34,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e2,uVar30);
          *(undefined2 *)((int)pvVar11 + 0x1e2) = uVar13;
          uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e0,uVar30);
          *(undefined2 *)((int)pvVar11 + 0x1e0) = uVar13;
        }
      }
    }
    else if (bVar2 == 0xf) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x120));
      if ((uVar23 & 0x60) == 0) {
        fVar3 = (moby->pos).z;
        uVar23 = (int)fVar3 >> 0x1f;
        if ((int)((uVar23 >> 1 ^ (uint)fVar3) - uVar23) < 0x40000000) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
          mobyfunc::DeleteMoby(moby);
        }
      }
      else {
        lVar25 = lVar19 + 0x10;
        mobyutil::MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar19,lVar25);
        uVar18 = 0;
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        mobyutil::MB_SpawnDebrisMoby(0,lVar19,0x6ce,lVar25,lVar19 + 0x40,0,0);
        puVar14[0xe] = ZEXT48(&DAT_00a15d30);
        puVar14[0xf] = ZEXT48(&DAT_00a15d30);
        mobyutil::MB_SpawnDebrisMoby(uVar18,lVar19,0x6cf,lVar25,lVar19 + 0x40,0,0);
        mobyutil::MB_SpawnDebris(lVar19,0x77d,1,0x77d,1,3,2);
        mobyutil::MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
      }
    }
    else if (bVar2 == 0xc) {
      iVar20 = FUN_0048c188(lVar19,uVar30 + 0x120);
      if (iVar20 != 0) {
        moby->state = '\0';
        *(undefined2 *)((int)pvVar11 + 200) = 0;
      }
    }
    else if (bVar2 == 0xb) {
      mobyupdate_helpers::M1382_003f6930((double)(mobyutil::g_FrameTime * 5.0),lVar19);
      fVar4 = (moby->pos).y;
      fVar6 = (moby->pos).x;
      moby->unk58 = 1.35;
      fVar5 = fVar4 - *(float *)((int)pvVar11 + 500);
      fVar7 = fVar6 - *(float *)((int)pvVar11 + 0x1f0);
      fVar7 = SQRT(fVar7 * fVar7 + fVar5 * fVar5);
      if (((fVar7 < 1.4) && ((moby->field43_0x70 & 2U) != 0)) || (fVar7 < 0.3)) {
        moby->state = '\x05';
        if (moby->animationId != '\x03') {
          puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar14 + 300));
        }
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        auVar34 = loadVectorLeftIndexed(0x14,0x3f7be0);
        auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar35);
        auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
        auVar34 = vectorSplatHalfWord(auVar34,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e2,uVar30);
        *(undefined2 *)((int)pvVar11 + 0x1e2) = uVar13;
        uVar13 = storeVectorElementHalfWordIndexed(auVar34,0x1e0,uVar30);
        *(undefined2 *)((int)pvVar11 + 0x1e0) = uVar13;
      }
      else if ((((moby->field43_0x70 & 2U) != 0) &&
               (fVar4 = fVar4 - *(float *)((int)pvVar11 + 0x184),
               fVar6 = fVar6 - *(float *)((int)pvVar11 + 0x180),
               fVar7 = *(float *)((int)pvVar11 + 0x1d8) * mobyutil::g_FrameTime,
               SQRT(fVar6 * fVar6 + fVar4 * fVar4) <
               fVar7 * animationSpeed * 40.0 * 0.5 + fVar7 * animationSpeed * 10.0 + 1.5)) &&
              ((iVar20 = mobyutil::PointInsideComplexPoly
                                   (&g_heroPosition,
                                    (Vec4 *)Splines[*(int *)((int)pvVar11 + 0x1d0)]->points,
                                    Splines[*(int *)((int)pvVar11 + 0x1d0)]->cnt), iVar20 != 0 &&
               (moby->state = '\n', moby->animationId != '\n')))) {
        puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,10,0,*(undefined4 *)((int)puVar14 + 300));
      }
    }
    else if (bVar2 == 10) {
      if ((moby->field43_0x70 & 2U) == 0) {
        dVar32 = (double)mobyfunc::BlendAnimFrame(moby);
        fVar4 = (moby->rotation).z;
        if ((ABS((float)(dVar32 - 17.5)) <= 0.25) &&
           (dVar32 = 1.0, ABS(*(float *)((int)pvVar11 + 0x188) - (moby->pos).z) < 1.0)) {
          fVar6 = *(float *)((int)pvVar11 + 0x180) - (moby->pos).x;
          fVar7 = *(float *)((int)pvVar11 + 0x184) - (moby->pos).y;
          fVar5 = ABS(fVar6);
          fVar8 = ABS(fVar7);
          *(float *)(puVar14 + 0x14) = fVar6;
          *(float *)((int)puVar14 + 0xa4) = fVar7;
          *(float *)(puVar14 + 0x15) = fVar5 - fVar8;
          fVar6 = 0.0;
          uVar23 = *(uint *)(puVar14 + 0x15);
          uVar29 = (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(uVar23 >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1d) & 4;
          fVar7 = ABS(*(float *)(puVar14 + 0x14));
          if (*(float *)(puVar14 + 0x15) - 0.0 < 0.0) {
            fVar7 = fVar8;
          }
          fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
          fVar8 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)((int)puVar14 + 0xa4));
          if (*(float *)(puVar14 + 0x15) - 0.0 < 0.0) {
            fVar15 = fVar5;
          }
          if (0.0 < fVar7) {
            lVar19 = uVar17 - 0x160;
            uVar23 = 2;
            lVar24 = uVar17 - 0xac;
            lVar26 = uVar17 - 0x9c;
            lVar28 = 2;
            fVar7 = (fVar15 - fVar7) / (fVar15 + fVar7);
            fVar5 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x1a) = fVar7;
            *(float *)(puVar14 + 0x19) = fVar7;
            *(float *)((int)puVar14 + 0xcc) = fVar7;
            *(float *)((int)puVar14 + 0xc4) = fVar7;
            fVar7 = fVar5 * fVar5;
            *(float *)(puVar14 + 0x19) = *(float *)(puVar14 + 0x19) * fVar5;
            *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar7;
            *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar7 * fVar5;
            do {
              *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xb4) * fVar7 * fVar7;
              iVar20 = (int)lVar24;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar7 * fVar7;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0xac;
            pfVar27 = (float *)&DAT_007358e0;
            lVar19 = lVar25;
            lVar24 = lVar26;
            do {
              fVar7 = *pfVar27;
              fVar5 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xc4) * fVar7;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar19 = 2;
            do {
              iVar20 = (int)lVar25;
              iVar21 = (int)lVar26;
              lVar25 = lVar25 + 0x10;
              lVar26 = lVar26 + 0x10;
              fVar6 = fVar6 + *(float *)(iVar20 + 0xc4) + *(float *)(iVar21 + 4) +
                      *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            fVar6 = (fVar6 + 0.7853982) * fVar9 + fVar8;
          }
          dVar33 = (double)fastfunc::FastSubRots(fVar6,fVar4);
          if (((dVar33 < 0.2617993950843811) && (*(int *)((int)pvVar11 + 0x1c0) != 0)) &&
             (fVar4 = (moby->pos).y - *(float *)((int)pvVar11 + 0x184),
             fVar6 = (moby->pos).x - *(float *)((int)pvVar11 + 0x180),
             SQRT(fVar6 * fVar6 + fVar4 * fVar4) < 2.75)) {
            fVar4 = (moby->rotation).z;
            fVar6 = fVar4 + 1.5707963;
            fVar7 = 3.1415925 - fVar4;
            if (fVar4 - (3.1415925 - fVar4) < 0.0) {
              fVar7 = fVar4;
            }
            fVar5 = 3.1415925 - fVar6;
            if (fVar6 - (3.1415925 - fVar6) < 0.0) {
              fVar5 = fVar6;
            }
            fVar8 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
              fVar8 = fVar7;
            }
            fVar4 = -3.1415925 - fVar6;
            if ((-3.1415925 - fVar6) - fVar5 < 0.0) {
              fVar4 = fVar5;
            }
            fVar6 = fVar8 * fVar8;
            fVar7 = fVar4 * fVar4;
            fVar15 = fVar6 * fVar6 * fVar8;
            *(undefined4 *)(puVar14 + 0x11) = 0;
            fVar5 = fVar7 * fVar7 * fVar4;
            fVar16 = fVar6 * fVar15;
            fVar9 = fVar7 * fVar5;
            *(float *)((int)puVar14 + 0x84) =
                 (fVar6 * fVar16 * 2.601887e-06 +
                 fVar16 * -0.0001980741 +
                 fVar15 * 0.0083330255 + fVar6 * fVar8 * -0.16666657 + fVar8) * 0.2;
            victim = *(MobyInstance **)((int)pvVar11 + 0x1c0);
            *(float *)(puVar14 + 0x10) =
                 (fVar7 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 + fVar5 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4)
                 * 0.2;
            *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)((int)pvVar11 + 0x180);
            *(undefined4 *)((int)puVar14 + 0x94) = *(undefined4 *)((int)pvVar11 + 0x184);
            fVar4 = *(float *)((int)pvVar11 + 0x188);
            *(float *)(puVar14 + 0x13) = fVar4;
            *(undefined4 *)((int)puVar14 + 0x9c) = *(undefined4 *)((int)pvVar11 + 0x18c);
            *(float *)(puVar14 + 0x13) = fVar4 + 0.75;
            mobyutil::CollDamageMobyDirect
                      ((float)dVar32,victim,moby,1,uVar23,(float *)(puVar14 + 0x12),
                       (float *)(puVar14 + 0x10));
          }
        }
      }
      else {
        moby->state = '\v';
        if (moby->animationId != '\t') {
          puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar19,9,0,*(undefined4 *)((int)puVar14 + 300));
        }
      }
    }
    else if (bVar2 == 9) {
      mobyupdate_helpers::M1382_003f6930((double)*(float *)((int)pvVar11 + 0x1ec),lVar19);
      iVar20 = *(int *)((int)pvVar11 + 0x1d0);
      dVar32 = 1.7999999523162842;
      moby->unk58 = 1.8;
      iVar20 = mobyutil::PointInsideComplexPoly
                         (&g_heroPosition,(Vec4 *)Splines[iVar20]->points,Splines[iVar20]->cnt);
      if ((iVar20 == 0) && (*(int *)((int)pvVar11 + 0x1d4) == 0)) {
        moby->state = '\v';
      }
      else {
        fVar4 = (moby->pos).x - *(float *)((int)pvVar11 + 0x180);
        fVar6 = (moby->pos).y - *(float *)((int)pvVar11 + 0x184);
        if (dVar32 <= (double)SQRT(fVar4 * fVar4 + fVar6 * fVar6)) {
          fVar6 = *(float *)((int)pvVar11 + 0x184) - *(float *)((int)pvVar11 + 500);
          fVar4 = *(float *)((int)pvVar11 + 0x180) - *(float *)((int)pvVar11 + 0x1f0);
          fVar7 = *(float *)((int)pvVar11 + 0x188) - *(float *)((int)pvVar11 + 0x1f8);
          if ((32.0 < SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar6 * fVar6)) ||
             (3.0 < ABS(*(float *)((int)pvVar11 + 0x188) - (moby->pos).z))) {
            moby->state = '\v';
          }
        }
        else {
          moby->state = '\n';
          if (moby->animationId != '\n') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,10,5,*(undefined4 *)((int)puVar14 + 300));
          }
        }
      }
    }
    else if (bVar2 == 8) {
      fVar4 = *(float *)((int)pvVar11 + 0x180) - (moby->pos).x;
      fVar6 = *(float *)((int)pvVar11 + 0x184) - (moby->pos).y;
      fVar5 = ABS(fVar4);
      fVar7 = ABS(fVar6);
      *(float *)((int)puVar14 + 0xac) = fVar4;
      *(float *)(puVar14 + 0x16) = fVar6;
      *(float *)((int)puVar14 + 0xb4) = fVar5 - fVar7;
      dVar32 = 0.0;
      uVar29 = (ulonglong)(*(uint *)((int)puVar14 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x16) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar14 + 0xac));
      if (*(float *)((int)puVar14 + 0xb4) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar6 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)(puVar14 + 0x16));
      if (*(float *)((int)puVar14 + 0xb4) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      if (0.0 < fVar4) {
        lVar24 = uVar17 - 0x160;
        lVar28 = uVar17 - 0x7c;
        lVar26 = uVar17 - 0x8c;
        lVar31 = 2;
        fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x1e) = fVar4;
        *(float *)(puVar14 + 0x1d) = fVar4;
        *(float *)((int)puVar14 + 0xec) = fVar4;
        *(float *)((int)puVar14 + 0xe4) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar14 + 0x1d) = *(float *)(puVar14 + 0x1d) * fVar5;
        *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar4;
        *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar24 + 0xe4) = *(float *)((int)lVar24 + 0xd4) * fVar4 * fVar4;
          iVar20 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar28 = uVar17 - 0x8c;
        pfVar27 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar26 = lVar28;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar24 + 0xe4) = *(float *)((int)lVar24 + 0xe4) * fVar4;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar24 = 2;
        do {
          iVar20 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          iVar21 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar20 + 0xe4)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar7 + fVar6);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar32,0x3f9eb851e0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 7.8539815),lVar19,&DAT_003f7be0,uVar30 + 0x1dc);
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((*(int *)((int)pvVar11 + 0x1d4) == 0) &&
           (iVar20 = mobyutil::PointInsideComplexPoly
                               (&g_heroPosition,
                                (Vec4 *)Splines[*(int *)((int)pvVar11 + 0x1d0)]->points,
                                Splines[*(int *)((int)pvVar11 + 0x1d0)]->cnt), iVar20 == 0)) {
          moby->state = '\v';
          if (moby->animationId != '\t') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,9,0,*(undefined4 *)((int)puVar14 + 300));
          }
        }
        else {
          moby->state = '\t';
          if (moby->animationId != '\t') {
            puVar14[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar19,9,0,*(undefined4 *)((int)puVar14 + 300));
          }
        }
      }
    }
  }
  else {
    moby->modeBits = moby->modeBits | DISABLED;
    moby->enabled = '\0';
  }
  return;
}



//==== 003f9798  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M1382_003f9798(void)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 0048a718 mobyupdate_helpers::M849_MB_Sucking

undefined8 mobyupdate_helpers::M1382_003f9798(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if ((param_1->state == '\f') && (param_1->state = '\x06', param_1->animationId != '\a')) {
      mobyutil::MB_SetAnimation(param_1,7,0,(int)(animationSpeed * 10.5));
    }
  }
  else {
    param_1->state = '\f';
  }
  return uVar1;
}



//==== 003f9850  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M1382_003f9850(void)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 0048aa70 mobyupdate_helpers::M849_0048aa70

undefined8 mobyupdate_helpers::M1382_003f9850(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048aa70();
  if ((int)uVar1 == 0) {
    if ((*(char *)(param_1 + 0x20) == '\f') &&
       (*(undefined1 *)(param_1 + 0x20) = 6, *(char *)(param_1 + 0x53) != '\a')) {
      mobyutil::MB_SetAnimation(param_1,7,0,(int)(animationSpeed * 10.5));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xc;
  }
  return uVar1;
}



//==== 003f9908  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M1382_003f9908(void)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 0048acb8 mobyupdate_helpers::M849_0048acb8

undefined8 mobyupdate_helpers::M1382_003f9908(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048acb8();
  if ((int)uVar1 == 0) {
    if ((*(char *)(param_1 + 0x20) == '\f') &&
       (*(undefined1 *)(param_1 + 0x20) = 6, *(char *)(param_1 + 0x53) != '\a')) {
      mobyutil::MB_SetAnimation(param_1,7,0,(int)(animationSpeed * 10.5));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xc;
  }
  return uVar1;
}



//==== 003f99b8  ns=mobyupdate_helpers  size=0x38
// sig: undefined M1382_003f99b8(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M1382_003f99b8(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 0xc;
  return;
}



//==== 003f99f0  ns=mobyupdate_helpers  size=0x40
// sig: undefined M1382_003f99f0(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M1382_003f99f0(int param_1)

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



//==== 003f9a38  ns=mobyupdate_helpers  size=0x90
// sig: undefined M1382_003f9a38(void)
// callers(0): 
// callees(1): 00119028 mobyutil::MB_DrawGlowFX

void mobyupdate_helpers::M1382_003f9a38(int param_1)

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
    mobyutil::MB_DrawGlowFX(uVar4,uVar5,uVar3 + 0x200,uVar1 & 0xffffff | 0x30000000);
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + 0x10;
  } while (iVar2 < 3);
  return;
}



//==== 003f9ac8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1382_003f9ac8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1382_003f9ac8(void)

{
  DAT_0085456c = 0x10000;
  return;
}



//==== 003f9ae0  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M1382_003f9ae0(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * mobyupdate_helpers::M1382_003f9ae0(f32 *param_1,undefined4 *param_2)

{
  f32 fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(THRUSTERPACK|PLASMABOT_001C);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = ' ';
    pMVar3->enabled = '\x01';
    puVar2 = (undefined4 *)pMVar3->pVar;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    fVar1 = param_1[3];
    pMVar3->drawDistance = 0x40;
    (pMVar3->pos).w = fVar1;
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    mobyutil::MB_CopyHeroLights(pMVar3);
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 003f9bc0  ns=mobyupdate_unsorted  size=0x100
// sig: undefined UpdateMoby_636(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 636 */

void mobyupdate_unsorted::UpdateMoby_636(MobyInstance *moby)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if ((moby != (MobyInstance *)0x0) && (pfVar1 = (float *)moby->pVar, pfVar1 != (float *)0x0)) {
    pfVar1[2] = -(DAT_0071f418 * 9.8 - pfVar1[2]);
    fVar4 = DAT_0071f408 * -0.100000024 + 1.0;
    fVar3 = *pfVar1 * fVar4;
    pfVar1[1] = pfVar1[1] * fVar4;
    *pfVar1 = fVar3;
    (moby->pos).x = (moby->pos).x + fVar3;
    (moby->pos).y = (moby->pos).y + pfVar1[1];
    fVar3 = (moby->pos).z + pfVar1[2];
    (moby->pos).z = fVar3;
    uVar2 = (int)pfVar1[2] >> 0x1f;
    if (((int)((uVar2 >> 1 ^ (uint)pfVar1[2]) - uVar2) < -0x3dcccccd) &&
       (fVar3 < g_heroPosition.z - 0.5)) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 003f9cc0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M637_003f9cc0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M637_003f9cc0(void)

{
  DAT_008545dc = 0x10000;
  return;
}



//==== 003f9ce0  ns=mobyupdate_unsorted  size=0x90
// sig: undefined UpdateMoby_637(MobyInstance * moby)
// callers(0): 
// callees(1): 00086b60 hero::SetHeroType

/* Moby 637 */

void mobyupdate_unsorted::UpdateMoby_637(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((g_heroType == '\0') &&
     (fVar1 = g_heroPosition.y - (moby->pos).y, fVar2 = g_heroPosition.x - (moby->pos).x,
     fVar3 = g_heroPosition.z - (moby->pos).z,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 4.0)) {
    hero::SetHeroType(2,0x5a,moby);
  }
  return;
}



//==== 003f9d70  ns=mobyupdate_helpers  size=0x14
// sig: undefined M638_003f9d70(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M638_003f9d70(void)

{
  DAT_0085464c = 0x10000;
  return;
}



//==== 003f9dc0  ns=mobyupdate_helpers  size=0x3bc
// sig: undefined M638_003f9dc0(void)
// callers(1): 003fc1c0 mobyupdate_unsorted::UpdateMoby_638
// callees(6): 000f1038 mobyfunc::GetBoneTransformations; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M638_003f9dc0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
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
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [16];
  
  if ((*(char *)(param_1 + 0x31) != '\0') && (*(char *)(param_1 + 0x20) != '\n')) {
    iVar6 = 0;
    dVar8 = 0.0;
    dVar9 = 1.0;
    dVar10 = 0.75;
    dVar11 = -0.20000000298023224;
    dVar12 = 0.20000000298023224;
    dVar13 = -1.5;
    dVar14 = 1.5;
    dVar15 = 0.4000000059604645;
    dVar16 = -0.10000000149011612;
    dVar17 = 0.10000000149011612;
    dVar18 = 5.0;
    dVar19 = 20.0;
    do {
      dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      if (dVar7 <= dVar10) {
        mobyfunc::GetBoneTransformations(param_1,iVar6 + 4,auStack_f0);
        mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
        mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
        dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
        mobyutil::MB_randSphere
                  ((double)(float)(dVar7 * (double)mobyutil::g_FrameTime),
                   (double)(float)(dVar7 * (double)mobyutil::g_FrameTime),local_100);
        mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar12);
        mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar15);
        mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
        uVar1 = fastfunc::FastLerpColor(0xffffffff801010ff,0xffffffff801080ff);
        mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
        uVar2 = fastfunc::FastLerpColor(0x400000c0,0x4030ffff);
        dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
        uVar3 = fastfunc::FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)((double)(float)(dVar7 + dVar9) * dVar18)));
        dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
        uVar4 = fastfunc::FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)((double)(float)(dVar7 + dVar9) * dVar19)));
        dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
        uVar5 = fastfunc::FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)((double)(float)(dVar7 + dVar9) * dVar19)));
        partupd::SpawnPart_2(auStack_c0,local_120,local_110,uVar1,uVar2,uVar3,uVar4,uVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
  }
  return;
}



//==== 003fa1a8  ns=mobyupdate_helpers  size=0xaac
// sig: undefined M638_003fa1a8(void)
// callers(1): 003fc1c0 mobyupdate_unsorted::UpdateMoby_638
// callees(2): 001167c8 mobyutil::MB_UpdateManipulatorRot; 005010c0 fastfunc::FastNormalizeRMtx4

void mobyupdate_helpers::M638_003fa1a8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar28;
  ulonglong in_f27;
  double dVar29;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1e0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x3e] = in_LR;
  puVar9[0x2f] = in_f19;
  puVar9[0x30] = in_f20;
  puVar9[0x31] = in_f21;
  puVar9[0x32] = in_f22;
  puVar9[0x33] = in_f23;
  puVar9[0x34] = in_f24;
  puVar9[0x35] = in_f25;
  puVar9[0x36] = in_f26;
  puVar9[0x37] = in_f27;
  puVar9[0x38] = in_f28;
  puVar9[0x39] = in_f29;
  puVar9[0x3a] = in_f30;
  puVar9[0x3b] = in_f31;
  puVar9[0x2d] = unaff_r30;
  puVar9[0x2e] = unaff_r31;
  iVar7 = *(int *)(param_1 + 0x78);
  iVar8 = *(int *)(iVar7 + 0x114);
  puVar9[0x2c] = unaff_r29;
  if (iVar8 != 2) {
    dVar33 = (double)*(float *)(param_1 + 0x10);
    dVar32 = (double)*(float *)(param_1 + 0x14);
    dVar31 = (double)(*(float *)(param_1 + 0x18) + 2.0);
    fVar1 = DAT_00969db8;
    fVar2 = DAT_00969db4;
    fVar3 = hero::g_heroCGPos;
    if (*(short *)(*(int *)(iVar7 + 0x110) + 0xa6) != 0) {
      fVar1 = *(float *)(iVar7 + 0xd8);
      fVar2 = *(float *)(iVar7 + 0xd4);
      fVar3 = *(float *)(iVar7 + 0xd0);
    }
    dVar30 = (double)fVar3;
    dVar29 = (double)fVar2;
    dVar28 = (double)fVar1;
    fastfunc::FastNormalizeRMtx4(uVar12 - 0x170,param_1 + 0xc0);
    fVar1 = (float)(dVar29 - dVar32);
    fVar2 = (float)(dVar30 - dVar33);
    fVar3 = (float)(dVar28 - dVar31);
    fVar10 = *(float *)(puVar9 + 0x12) * fVar3 +
             *(float *)(puVar9 + 0xe) * fVar2 + *(float *)(puVar9 + 0x10) * fVar1;
    fVar6 = *(float *)((int)puVar9 + 0x94) * fVar3 +
            *(float *)((int)puVar9 + 0x74) * fVar2 + *(float *)((int)puVar9 + 0x84) * fVar1;
    *(float *)((int)puVar9 + 0xd4) = fVar10;
    *(float *)(puVar9 + 0x1b) = fVar6;
    *(float *)((int)puVar9 + 0xdc) = ABS(fVar10) - ABS(fVar6);
    dVar26 = 0.0;
    fVar1 = *(float *)(puVar9 + 0x13) * fVar3 +
            *(float *)(puVar9 + 0xf) * fVar2 + *(float *)(puVar9 + 0x11) * fVar1;
    uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xdc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x1b) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0xd4));
    if (*(float *)((int)puVar9 + 0xdc) - 0.0 < 0.0) {
      fVar2 = ABS(fVar6);
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar5 = ABS(*(float *)(puVar9 + 0x1b));
    if (*(float *)((int)puVar9 + 0xdc) - 0.0 < 0.0) {
      fVar5 = ABS(fVar10);
    }
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar27 = 0.7853981852531433;
    dVar24 = dVar26;
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar15 = uVar12 - 0xa0;
      lVar16 = uVar12 - 0x90;
      lVar19 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar5 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0x14c) = fVar2;
      *(float *)((int)puVar9 + 0x144) = fVar2;
      *(float *)(puVar9 + 0x29) = fVar2;
      *(float *)(puVar9 + 0x28) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)((int)puVar9 + 0x144) = *(float *)((int)puVar9 + 0x144) * fVar5;
      *(float *)(puVar9 + 0x29) = *(float *)(puVar9 + 0x29) * fVar2;
      *(float *)((int)puVar9 + 0x14c) = *(float *)((int)puVar9 + 0x14c) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x130) * fVar2 * fVar2;
        iVar8 = (int)lVar15;
        lVar13 = lVar13 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar16 = uVar12 - 0xa0;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar15 = lVar16;
      do {
        fVar2 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x140) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      lVar13 = lVar14;
      do {
        iVar8 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar11 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar8 + 0x140)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar4);
    }
    *(float *)((int)puVar9 + 0xcc) = fVar1;
    fVar1 = ABS(fVar1);
    fVar2 = SQRT(fVar10 * fVar10 + fVar6 * fVar6);
    fVar3 = ABS(fVar2);
    *(float *)(puVar9 + 0x19) = fVar2;
    *(float *)(puVar9 + 0x1a) = fVar3 - fVar1;
    uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x19));
    if (*(float *)(puVar9 + 0x1a) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0xcc));
    if (*(float *)(puVar9 + 0x1a) - 0.0 < 0.0) {
      fVar10 = fVar3;
    }
    dVar20 = dVar26;
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar15 = uVar12 - 0xc0;
      lVar16 = uVar12 - 0xb0;
      lVar19 = 2;
      fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 300) = fVar2;
      *(float *)((int)puVar9 + 0x124) = fVar2;
      *(float *)(puVar9 + 0x25) = fVar2;
      *(float *)(puVar9 + 0x24) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0x124) = *(float *)((int)puVar9 + 0x124) * fVar3;
      *(float *)(puVar9 + 0x25) = *(float *)(puVar9 + 0x25) * fVar2;
      *(float *)((int)puVar9 + 300) = *(float *)((int)puVar9 + 300) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x110) * fVar2 * fVar2;
        iVar8 = (int)lVar15;
        lVar13 = lVar13 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar16 = uVar12 - 0xc0;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar15 = lVar16;
      do {
        fVar2 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x120) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      lVar13 = lVar14;
      do {
        iVar8 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar11 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar8 + 0x120)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar6 + fVar1);
    }
    dVar20 = -dVar20;
    dVar25 = dVar27;
    if ((dVar24 <= 0.7853981852531433) && (dVar25 = dVar24, dVar24 < -0.7853981852531433)) {
      dVar25 = -0.7853981852531433;
    }
    dVar24 = dVar27;
    if ((dVar20 <= 0.7853981852531433) && (dVar24 = dVar20, dVar20 < -0.7853981852531433)) {
      dVar24 = -0.7853981852531433;
    }
    *(float *)(iVar7 + 0x198) = (float)(dVar25 * 0.5);
    *(float *)(iVar7 + 0x218) = (float)(dVar25 * 0.5);
    *(float *)(iVar7 + 0x194) = (float)(dVar24 * 0.5);
    *(float *)(iVar7 + 0x214) = (float)(dVar24 * 0.5);
    if ((*(char *)(param_1 + 0x20) == '\x05') || (*(char *)(param_1 + 0x20) == '\x04')) {
      fVar1 = *(float *)(param_1 + 0xc4);
      fVar2 = *(float *)(param_1 + 0xc0);
      fVar3 = *(float *)(param_1 + 200);
      fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      dVar24 = dVar26;
      dVar20 = dVar26;
      dVar25 = dVar26;
      if (SQRT(fVar6) != 0.0) {
        fVar10 = 1.0 / SQRT(fVar6);
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        dVar24 = (double)(fVar2 * fVar10);
        dVar20 = (double)(fVar1 * fVar10);
        dVar25 = (double)(fVar3 * fVar10);
      }
      fVar1 = *(float *)(param_1 + 0xd4);
      fVar2 = *(float *)(param_1 + 0xd0);
      fVar3 = *(float *)(param_1 + 0xd8);
      fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar10 = 0.5 / fVar6;
      dVar21 = dVar26;
      if (0.0 - fVar6 < 0.0) {
        dVar21 = (double)(fVar1 * fVar10);
      }
      dVar22 = dVar26;
      if (0.0 - fVar6 < 0.0) {
        dVar22 = (double)(fVar2 * fVar10);
      }
      dVar23 = dVar26;
      if (0.0 - fVar6 < 0.0) {
        dVar23 = (double)(fVar3 * fVar10);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar21 = (double)(fVar1 * fVar10);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar22 = (double)(fVar2 * fVar10);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar23 = (double)(fVar3 * fVar10);
      }
      fVar1 = (float)(dVar29 - (double)(float)((double)(float)(dVar20 + dVar32) + dVar21));
      fVar2 = (float)(dVar30 - (double)(float)((double)(float)(dVar24 + dVar33) + dVar22));
      fVar3 = (float)(dVar28 - (double)(float)((double)(float)(dVar25 + dVar31) + dVar23));
      fVar10 = *(float *)((int)puVar9 + 0x94) * fVar3 +
               *(float *)((int)puVar9 + 0x74) * fVar2 + *(float *)((int)puVar9 + 0x84) * fVar1;
      fVar6 = *(float *)(puVar9 + 0x12) * fVar3 +
              *(float *)(puVar9 + 0xe) * fVar2 + *(float *)(puVar9 + 0x10) * fVar1;
      fVar1 = *(float *)(puVar9 + 0x13) * fVar3 +
              *(float *)(puVar9 + 0xf) * fVar2 + *(float *)(puVar9 + 0x11) * fVar1;
      fVar2 = ABS(fVar1);
      *(float *)(puVar9 + 0x18) = fVar1;
      fVar1 = SQRT(fVar6 * fVar6 + fVar10 * fVar10);
      fVar3 = ABS(fVar1);
      *(float *)((int)puVar9 + 0xbc) = fVar1;
      *(float *)((int)puVar9 + 0xc4) = fVar3 - fVar2;
      uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar9 + 0xbc));
      if (*(float *)((int)puVar9 + 0xc4) - 0.0 < 0.0) {
        fVar1 = fVar2;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar5 = ABS(*(float *)(puVar9 + 0x18));
      if (*(float *)((int)puVar9 + 0xc4) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar31 = dVar26;
      if (0.0 < fVar1) {
        lVar13 = uVar12 - 0x1d0;
        lVar15 = uVar12 - 0xe0;
        lVar16 = uVar12 - 0xd0;
        lVar19 = 2;
        fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)((int)puVar9 + 0x10c) = fVar1;
        *(float *)((int)puVar9 + 0x104) = fVar1;
        *(float *)(puVar9 + 0x21) = fVar1;
        *(float *)(puVar9 + 0x20) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar5;
        *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar1;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0xf0) * fVar1 * fVar1;
          iVar8 = (int)lVar15;
          lVar13 = lVar13 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar19 = 4;
        lVar16 = uVar12 - 0xe0;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar15 = lVar16;
        do {
          fVar1 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0x100) * fVar1;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
          lVar15 = lVar15 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar15 = 2;
        lVar13 = lVar14;
        do {
          iVar8 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar8 + 0x100)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
      }
      *(float *)(puVar9 + 0x16) = fVar6;
      *(float *)((int)puVar9 + 0xb4) = fVar10;
      dVar31 = -dVar31;
      *(float *)(puVar9 + 0x17) = ABS(fVar6) - ABS(fVar10);
      uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0x16));
      if (*(float *)(puVar9 + 0x17) - 0.0 < 0.0) {
        fVar1 = ABS(fVar10);
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = ABS(*(float *)((int)puVar9 + 0xb4));
      if (*(float *)(puVar9 + 0x17) - 0.0 < 0.0) {
        fVar3 = ABS(fVar6);
      }
      fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      if (0.0 < fVar1) {
        lVar13 = uVar12 - 0x1d0;
        lVar16 = uVar12 - 0xf0;
        lVar15 = uVar12 - 0x100;
        lVar19 = 2;
        fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
        fVar3 = fVar1 * fVar1;
        *(float *)((int)puVar9 + 0xec) = fVar1;
        *(float *)((int)puVar9 + 0xe4) = fVar1;
        *(float *)(puVar9 + 0x1d) = fVar1;
        *(float *)(puVar9 + 0x1c) = fVar1;
        fVar1 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar3;
        *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar1;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar1 * fVar3;
        do {
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xd0) * fVar1 * fVar1;
          iVar8 = (int)lVar15;
          lVar15 = lVar15 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar19 = 4;
        lVar16 = uVar12 - 0x100;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar15 = lVar16;
        do {
          fVar1 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xe0) * fVar1;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
          lVar15 = lVar15 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar13 = 2;
        do {
          iVar8 = (int)lVar14;
          iVar11 = (int)lVar16;
          lVar14 = lVar14 + 0x10;
          lVar16 = lVar16 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar8 + 0xe0)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar6);
      }
      dVar26 = -dVar26;
      if ((dVar31 <= 0.7853981852531433) && (dVar27 = dVar31, dVar31 < -0.7853981852531433)) {
        dVar27 = -0.7853981852531433;
      }
      dVar31 = 0.3490658402442932;
      if ((dVar26 <= 0.3490658402442932) && (dVar31 = dVar26, dVar26 < -0.3490658402442932)) {
        dVar31 = -0.3490658402442932;
      }
      *(float *)(iVar7 + 0x294) = (float)dVar27;
      *(float *)(iVar7 + 0x298) = (float)dVar31;
    }
  }
  dVar32 = 0.029999999329447746;
  dVar31 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),param_1,iVar7 + 0x130,1);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar32),
             (double)(float)((double)DAT_0071f40c * dVar31),param_1,iVar7 + 0x1b0,2);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar32),
             (double)(float)((double)DAT_0071f40c * dVar31),param_1,iVar7 + 0x230,3);
  return;
}



//==== 003fac98  ns=mobyupdate_helpers  size=0x4d8
// sig: undefined M638_003fac98(void)
// callers(1): 003fc1c0 mobyupdate_unsorted::UpdateMoby_638
// callees(7): 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00123390 partupd::SpawnPart_11; 001d4d88 FUN_001d4d88; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M638_003fac98(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 local_f0 [16];
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d0 [12];
  longlong local_a0;
  
  mobyfunc::GetBonePosition(param_1,2,&local_e0);
  dVar19 = 0.0;
  iVar6 = 10;
  dVar18 = 8.0;
  dVar17 = (double)SQRT((GameCamera.posZ - local_d8) * (GameCamera.posZ - local_d8) +
                        (GameCamera.posX - local_e0) * (GameCamera.posX - local_e0) +
                        (GameCamera.posY - local_dc) * (GameCamera.posY - local_dc));
  if (dVar17 < 8.0) {
    iVar6 = fastfunc::FastDoubleToInt(dVar17);
    iVar6 = iVar6 + 2;
  }
  if (dVar17 - 7.0 < 0.0) {
    dVar19 = (double)(float)(7.0 - dVar17);
  }
  if (0 < iVar6) {
    iVar7 = 0;
    dVar11 = 10.0;
    uVar12 = 0x41186a0000000000;
    dVar13 = 15.5;
    dVar14 = 20.5;
    dVar15 = 25.5;
    dVar16 = 30.5;
    do {
      dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar11);
      dVar9 = (double)mobyutil::g_FrameTime;
      local_d0[0] = 0x4f008fff;
      local_d0[1] = 0x4f008fff;
      local_d0[3] = 0x4f006fff;
      local_d0[4] = 0x2fffffff;
      local_d0[2] = 0x4f007fff;
      local_d0[5] = 0x2fffffff;
      dVar10 = (double)(float)(dVar8 * dVar9 - (double)(float)(dVar9 * dVar19));
      local_d0[6] = 0x2f005f7f;
      local_d0[7] = 0x2f004f7f;
      local_d0[8] = 0x2f003f7f;
      local_d0[9] = 0x2f00004f;
      local_d0[10] = 0x2f000000;
      local_d0[0xb] = 0x3f000000;
      lVar5 = mobyutil::MB_randInt(dVar8,dVar9,(double)(float)(dVar9 * dVar19),6);
      uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar5 << 2));
      lVar5 = mobyutil::MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar5 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar14);
      local_a0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar13),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar16);
      local_a0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar15),iVar1);
      partupd::SpawnPart_11(uVar12,dVar10,&local_e0,local_f0,uVar2,uVar3);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  uVar4 = (uint)((int)DAT_00a10714 >> 0x1f) >> 1;
  if (((int)((uVar4 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f)) < 0x3f733333) && (9.0 < dVar17))
  {
    uVar12 = 0x4010000000000000;
    local_a0 = (longlong)(int)(animationSpeed * 15.5);
    FUN_001d4d88(0x4010000000000000,param_1,&local_e0,local_f0,uVar4,(int)(animationSpeed * 15.5),
                 0x7f,0x7f,0x7f);
    local_a0 = (longlong)(int)(animationSpeed * 24.5);
    FUN_001d4d88(uVar12,param_1,&local_e0,local_f0);
  }
  local_a0 = (longlong)(int)(animationSpeed * 20.5);
  FUN_001d4d88(0x4010000000000000,param_1,&local_e0,local_f0,0x30,(int)(animationSpeed * 20.5),0x7f,
               0x40,0);
  local_a0 = (longlong)(int)(animationSpeed * 27.5);
  FUN_001d4d88(0x400c000000000000,param_1,&local_e0,local_f0,0x40,(int)(animationSpeed * 27.5),0x60,
               0x10,0);
  local_a0 = (longlong)(int)(animationSpeed * 29.5);
  FUN_001d4d88(0x4008000000000000,param_1,&local_e0,local_f0,0x20,(int)(animationSpeed * 29.5),0x20,
               0,0);
  return;
}



//==== 003fb180  ns=mobyupdate_helpers  size=0x158
// sig: undefined M638_003fb180(void)
// callers(1): 003fc1c0 mobyupdate_unsorted::UpdateMoby_638
// callees(1): 00109c30 mobyutil::OrganicDelt

double mobyupdate_helpers::M638_003fb180(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float local_30 [4];
  
  iVar5 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(iVar5 + 0x2c4) - param_2[1];
  fVar2 = *(float *)(iVar5 + 0x2c0) - *param_2;
  fVar3 = *(float *)(iVar5 + 0x2c8) - param_2[2];
  dVar10 = 0.0;
  local_30[0] = 0.0;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dVar11 = (double)fVar1;
  mobyutil::OrganicDelt
            (fVar1,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 5.0,local_30,
             0x3fb170,(float *)(iVar5 + 0x2d4));
  fVar2 = (float)((double)param_2[1] - (double)*(float *)(iVar5 + 0x2c4));
  fVar3 = (float)((double)*param_2 - (double)*(float *)(iVar5 + 0x2c0));
  fVar4 = (float)((double)param_2[2] - (double)*(float *)(iVar5 + 0x2c8));
  dVar9 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)*(float *)(iVar5 + 0x2d4) / dVar9);
  dVar8 = dVar10;
  if (dVar10 - dVar9 < 0.0) {
    dVar8 = (double)(fVar4 * fVar1);
  }
  dVar7 = dVar10;
  if (dVar10 - dVar9 < 0.0) {
    dVar7 = (double)(fVar2 * fVar1);
  }
  dVar6 = dVar10;
  if (dVar10 - dVar9 < 0.0) {
    dVar6 = (double)(fVar3 * fVar1);
  }
  if (dVar9 - dVar10 < 0.0) {
    dVar8 = (double)(fVar4 * fVar1);
  }
  if (dVar9 - dVar10 < 0.0) {
    dVar7 = (double)(fVar2 * fVar1);
  }
  if (dVar9 - dVar10 < 0.0) {
    dVar6 = (double)(fVar3 * fVar1);
  }
  *(float *)(iVar5 + 0x2c8) = (float)((double)*(float *)(iVar5 + 0x2c8) + dVar8);
  *(float *)(iVar5 + 0x2c4) = (float)((double)*(float *)(iVar5 + 0x2c4) + dVar7);
  *(float *)(iVar5 + 0x2c0) = (float)((double)*(float *)(iVar5 + 0x2c0) + dVar6);
  return dVar11;
}



//==== 003fb2e8  ns=mobyupdate_helpers  size=0x370
// sig: undefined M638_003fb2e8(void)
// callers(1): 003fc1c0 mobyupdate_unsorted::UpdateMoby_638
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M638_003fb2e8(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar15 = uVar14 - 0xd0;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar14;
  puVar11[0x1c] = in_LR;
  puVar11[0x18] = in_f30;
  puVar11[0x19] = in_f31;
  fVar2 = *(float *)(param_1 + 0x10);
  iVar9 = *(int *)(*(int *)(param_1 + 0x78) + 0x120);
  sVar7 = *(short *)(*(int *)(param_1 + 0x78) + 0x300);
  fVar3 = *(float *)(param_1 + 0x14);
  puVar11[0x17] = unaff_r31;
  iVar12 = (int)((longlong)sVar7 << 4);
  fVar2 = *(float *)((int)&Splines[iVar9]->points[0].x + iVar12) - fVar2;
  fVar3 = *(float *)((int)&Splines[iVar9]->points[0].y + iVar12) - fVar3;
  fVar6 = ABS(fVar2);
  fVar4 = ABS(fVar3);
  *(float *)(puVar11 + 0xe) = fVar2;
  *(float *)((int)puVar11 + 0x74) = fVar3;
  *(float *)(puVar11 + 0xf) = fVar6 - fVar4;
  dVar24 = 0.0;
  fVar2 = *(float *)(param_1 + 0x48);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)(puVar11 + 0xe));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  fVar13 = ABS(*(float *)((int)puVar11 + 0x74));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar13 = fVar6;
  }
  dVar23 = 0.7853981852531433;
  dVar22 = dVar24;
  if (0.0 < fVar5) {
    lVar18 = uVar14 - 0xc0;
    lVar17 = uVar14 - 0x54;
    lVar16 = uVar14 - 0x44;
    lVar21 = 2;
    fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x11) = fVar5;
    *(float *)(puVar11 + 0x10) = fVar5;
    *(float *)((int)puVar11 + 0x84) = fVar5;
    *(float *)((int)puVar11 + 0x7c) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x10) = *(float *)(puVar11 + 0x10) * fVar6;
    *(float *)((int)puVar11 + 0x84) = *(float *)((int)puVar11 + 0x84) * fVar5;
    *(float *)(puVar11 + 0x11) = *(float *)(puVar11 + 0x11) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar5 * fVar5;
      iVar9 = (int)lVar17;
      lVar18 = lVar18 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar18 = uVar14 - 0x54;
    pfVar19 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar16 = lVar18;
    lVar17 = lVar15;
    do {
      fVar5 = *pfVar19;
      fVar6 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar5;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    do {
      iVar9 = (int)lVar15;
      iVar12 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar9 + 0x7c)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar22 = (double)fastfunc::FastDiffRots(dVar22,(double)fVar2);
  uVar8 = *(ushort *)(param_1 + 0x34);
  cVar1 = *(char *)(param_1 + 0x53);
  puVar11[0x14] = (longlong)(int)(animationSpeed * 20.5);
  uVar10 = *(undefined4 *)((int)puVar11 + 0xa4);
  if ((dVar23 <= dVar22) || (dVar22 <= -0.7853981852531433)) {
    if (dVar24 <= dVar22) {
      if ((uVar8 & 0x8000) == 0) {
        if (cVar1 != '\x04') {
          mobyutil::MB_SetAnimation(param_1,4,0,uVar10);
        }
      }
      else if (cVar1 != '\x05') {
        mobyutil::MB_SetAnimation(param_1,5,0,uVar10);
      }
    }
    else if ((uVar8 & 0x8000) == 0) {
      if (cVar1 != '\x05') {
        mobyutil::MB_SetAnimation(param_1,5,0,uVar10);
      }
    }
    else if (cVar1 != '\x04') {
      mobyutil::MB_SetAnimation(param_1,4,0,uVar10);
    }
  }
  else if (cVar1 != '\x01') {
    mobyutil::MB_SetAnimation(param_1,1,0,uVar10);
  }
  return;
}



//==== 003fb658  ns=mobyupdate_helpers  size=0x140
// sig: undefined M638_003fb658(void)
// callers(0): 
// callees(2): 000fcbe8 mobyutil::MB_randRangeFloat; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M638_003fb658(int param_1,int param_2,int param_3)

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
    *(undefined4 *)(iVar2 + 0x2e0) = uVar4;
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
        *(undefined4 *)((int)pvVar3 + 0x2e0) = uVar4;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 003fb7c8  ns=mobyupdate_helpers  size=0x980
// sig: undefined M638_003fb7c8(void)
// callers(1): 003fc1c0 mobyupdate_unsorted::UpdateMoby_638
// callees(13): 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 0011b728 mobyutil::MB_UnlockSkillPoint; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M638_003fb7c8(MobyInstance *param_1)

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
  param_1->scale = pMVar6->gScale;
  dVar27 = 0.0;
  puVar9[0x1f] = unaff_r30;
  puVar9[0x1e] = unaff_r29;
  puVar9[0x1d] = unaff_r28;
  puVar9[0x1b] = unaff_r26;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar14 = mobyutil::MB_damage(param_1,0x330000,0);
  if (((iVar14 != 0) && (*(int *)(iVar14 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar14 + 0x20) + 0xa6) == 0x31)) {
    iVar14 = 0;
  }
  iVar15 = mobyutil::MB_HandleDamage
                     (param_1,iVar14,uVar21 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\t')) {
    if (param_1->group == 0xff) {
      pvVar8 = param_1->pVar;
      dVar24 = (double)mobyutil::MB_randRangeFloat(300.0,360.0);
      uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
      *(undefined4 *)((int)pvVar8 + 0x2e0) = uVar16;
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
          *(undefined4 *)((int)pvVar8 + 0x2e0) = uVar16;
        }
        uVar5 = *puVar22;
        puVar22 = puVar22 + 1;
      } while (-1 < (short)uVar5);
    }
    if (((iVar14 != 0) && (*(int *)(iVar14 + 0x20) != 0)) &&
       (*(short *)(*(int *)(iVar14 + 0x20) + 0xa6) != 0x47)) {
      *(undefined4 *)((int)pvVar7 + 0x308) = 0;
    }
    fVar1 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar1;
    if ((double)fVar1 <= dVar27) {
      iVar15 = 1;
    }
    uVar16 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar7 + 0x90) = uVar16;
    *(undefined4 *)((int)pvVar7 + 0x98) = 0x3f000000;
    dVar24 = 20.0;
    fVar1 = DAT_0071f418 * 20.0;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 1;
    *(float *)((int)pvVar7 + 0x80) = fVar1;
    if (iVar15 < 3) {
      if ((-1 < iVar15) && (0 < iVar15)) {
        if ((Level == Veldin2) &&
           ((*(int *)((int)pvVar7 + 0x308) != 0 &&
            (ShipsKilledCounts.Veldin2 = ShipsKilledCounts.Veldin2 + 1,
            9 < ShipsKilledCounts.Veldin2)))) {
          mobyutil::MB_UnlockSkillPoint(0x1d);
        }
        dVar25 = (double)DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar7 + 0x80) = (float)(dVar25 * dVar24);
        fVar1 = 8.0;
        if (g_heroType == '\x02') {
          param_1->unk58 = 0.5;
          fVar1 = 24.0;
        }
        fVar2 = mobyutil::g_FrameTime * 8.0;
        fVar1 = mobyutil::g_FrameTime * fVar1;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0xbf800000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0xbf800000;
        *(float *)((int)pvVar7 + 0x8c) = fVar2;
        *(float *)((int)pvVar7 + 0x88) = fVar1;
        fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar1);
        dVar25 = ABS((double)fVar2);
        *(float *)(puVar9 + 0x10) = fVar1;
        *(float *)((int)puVar9 + 0x84) = fVar2;
        *(float *)(puVar9 + 0x11) = (float)(dVar26 - dVar25);
        uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar24 = dVar25;
        }
        fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar25 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar12 = uVar11 - 0x110;
          lVar17 = uVar11 - 0x88;
          lVar20 = uVar11 - 0x78;
          lVar23 = 2;
          fVar3 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xa4) = fVar3;
          *(float *)((int)puVar9 + 0x9c) = fVar3;
          *(float *)(puVar9 + 0x14) = fVar3;
          *(float *)(puVar9 + 0x13) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar4;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar3;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar12 = lVar12 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar20 = lVar20 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar20 = uVar11 - 0x88;
          pfVar18 = (float *)&DAT_007358e0;
          lVar12 = lVar13;
          lVar17 = lVar20;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar3;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
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
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
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
        param_1->state = '\t';
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar15 < 0xb) {
      if (iVar15 < 9) {
        fVar1 = mobyutil::g_FrameTime * 6.0;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0xbf800000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0xbf800000;
        *(float *)((int)pvVar7 + 0x88) = fVar1;
        *(float *)((int)pvVar7 + 0x8c) = fVar1;
        fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar1);
        dVar26 = ABS((double)fVar2);
        *(float *)((int)puVar9 + 0x8c) = fVar1;
        *(float *)(puVar9 + 0x12) = fVar2;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar25 - dVar26);
        uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar24 = dVar26;
        }
        fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar26 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar12 = uVar11 - 0x110;
          lVar17 = uVar11 - 0x68;
          lVar20 = uVar11 - 0x58;
          lVar23 = 2;
          fVar3 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xc4) = fVar3;
          *(float *)((int)puVar9 + 0xbc) = fVar3;
          *(float *)(puVar9 + 0x18) = fVar3;
          *(float *)(puVar9 + 0x17) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar4;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar3;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar12 = lVar12 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar20 = lVar20 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar20 = uVar11 - 0x68;
          pfVar18 = (float *)&DAT_007358e0;
          lVar12 = lVar13;
          lVar17 = lVar20;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar3;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
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
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
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
        param_1->state = '\b';
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
  fastfunc::FastDecTimerS32(uVar21 + 0x2e0);
  iVar14 = *(int *)((int)pvVar7 + 0x2e0);
  if (*(int *)((int)pvVar7 + 0x38) != 0) {
    dVar27 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    iVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(int *)((int)pvVar7 + 0x2e0) = iVar14;
  }
  *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  fVar1 = 255.0;
  if (iVar14 == 0) {
    fVar1 = *(float *)((int)pvVar7 + 0x124);
  }
  dVar27 = (double)fVar1;
  if (hero::g_heroStateType == 0x16) {
    *(undefined4 *)((int)pvVar7 + 0x114) = 2;
  }
  else {
    lVar13 = uVar21 + 0xd0;
    if (iVar14 == 0 && -1 < *(int *)((int)pvVar7 + 300)) {
      mobyutil::MB_getTargetInArea
                (0x4038000000000000,param_1,lVar13,lVar13,0,0,
                 Splines[*(int *)((int)pvVar7 + 300)]->points,
                 Splines[*(int *)((int)pvVar7 + 300)]->cnt);
    }
    else {
      mobyutil::MB_getTarget(0x4038000000000000,param_1,&DAT_003fb798,lVar13);
    }
  }
  fVar1 = (param_1->pos).y - *(float *)((int)pvVar7 + 0xd4);
  fVar2 = (param_1->pos).x - *(float *)((int)pvVar7 + 0xd0);
  if (dVar27 < (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
    *(undefined4 *)((int)pvVar7 + 0x114) = 2;
  }
  if (*(int *)((int)pvVar7 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x110) = g_heroMobyPtr;
  }
  return;
}



//==== 003fc1c0  ns=mobyupdate_unsorted  size=0x1718
// sig: undefined UpdateMoby_638(MobyInstance * moby)
// callers(0): 
// callees(23): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00113e88 mobyutil::MB_MayaFrameTrigger; 00119ac0 mobyutil::MB_SetScaleCheat; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 003a01e0 FUN_003a01e0; 003f9dc0 mobyupdate_helpers::M638_003f9dc0; 003fa1a8 mobyupdate_helpers::M638_003fa1a8; 003fac98 mobyupdate_helpers::M638_003fac98; 003fb180 mobyupdate_helpers::M638_003fb180; 003fb2e8 mobyupdate_helpers::M638_003fb2e8; 003fb7c8 mobyupdate_helpers::M638_003fb7c8; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 638 */

void mobyupdate_unsorted::UpdateMoby_638(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
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
  void *pvVar15;
  Spline *pSVar16;
  ulonglong *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined2 uVar22;
  MobyModeBit MVar23;
  short sVar24;
  int iVar20;
  u8 uVar25;
  uint uVar21;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  float *pfVar30;
  longlong lVar31;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar28 = uVar19 - 0x180;
  puVar17 = (ulonglong *)lVar28;
  *puVar17 = uVar19;
  puVar17[0x32] = in_LR;
  puVar17[0x2b] = in_f27;
  puVar17[0x2c] = in_f28;
  puVar17[0x2d] = in_f29;
  puVar17[0x2e] = in_f30;
  puVar17[0x2f] = in_f31;
  puVar17[0x2a] = unaff_r31;
  puVar17[0x29] = unaff_r30;
  puVar17[0x28] = unaff_r29;
  puVar17[0x27] = unaff_r28;
  pvVar15 = moby->pVar;
  uVar32 = ZEXT48(pvVar15);
  mobyupdate_helpers::M638_003fb7c8();
  iVar20 = *(int *)((int)pvVar15 + 0x110);
  fVar12 = DAT_00969dac;
  fVar11 = DAT_00969da8;
  fVar10 = DAT_00969da4;
  fVar43 = DAT_00969da0;
  if ((*(short *)(iVar20 + 0xa6) != 0) && (*(short *)(iVar20 + 0xa6) != 0x1a3)) {
    fVar12 = *(float *)(iVar20 + 0x1c);
    fVar11 = *(float *)(iVar20 + 0x18);
    fVar10 = *(float *)(iVar20 + 0x14);
    fVar43 = *(float *)(iVar20 + 0x10);
  }
  dVar38 = (double)fVar43;
  dVar37 = (double)fVar10;
  dVar36 = (double)fVar11;
  dVar35 = (double)fVar12;
  if (Cheats[7] != '\0') {
    mobyutil::MB_SetScaleCheat(0x4004000000000000,uVar32 + 0x130);
  }
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined4 *)((int)pvVar15 + 0x20) = 0x40400000;
        *(undefined2 *)((int)pvVar15 + 0x24) = 3;
        *(undefined1 *)((int)pvVar15 + 0x28) = 2;
        *(undefined4 *)((int)pvVar15 + 0x30) = 0x3fc00000;
        *(undefined1 *)((int)pvVar15 + 0x29) = 1;
        dVar39 = 0.0;
        *(undefined4 *)((int)pvVar15 + 0x2ec) = 0;
        dVar35 = (double)mobyutil::MB_randRot();
        *(float *)((int)pvVar15 + 0x2f4) = (float)dVar35;
        dVar35 = (double)mobyutil::MB_randRot();
        *(float *)((int)pvVar15 + 0x2fc) = (float)dVar35;
        dVar35 = (double)mobyutil::MB_randRot();
        *(float *)((int)pvVar15 + 0x2e8) = (float)dVar35;
        dVar38 = 90.0;
        dVar37 = 180.0;
        dVar35 = (double)mobyutil::MB_randRangeFloat(90.0,180.0);
        dVar36 = 0.01745329238474369;
        *(float *)((int)pvVar15 + 0x2f0) =
             (float)(dVar35 * 0.01745329238474369) * mobyutil::g_FrameTime;
        dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar37);
        *(float *)((int)pvVar15 + 0x2f8) = (float)(dVar35 * dVar36) * mobyutil::g_FrameTime;
        dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar37);
        *(float *)((int)pvVar15 + 0x2e4) = (float)(dVar35 * dVar36) * mobyutil::g_FrameTime;
        dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar37,360.0);
        uVar22 = fastfunc::FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
        *(undefined2 *)((int)pvVar15 + 0x302) = uVar22;
        iVar20 = mobyutil::MB_randInt(2);
        if (iVar20 == 0) {
          MVar23 = moby->modeBits &
                   (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        }
        else {
          MVar23 = moby->modeBits | MIRROR;
        }
        moby->modeBits = MVar23;
        if (-1 < *(int *)((int)pvVar15 + 0x120)) {
          puVar17[0x25] = (longlong)(Splines[*(int *)((int)pvVar15 + 0x120)]->cnt + -1);
          mobyutil::MB_randRangeFloat((float)dVar39,(float)(longlong)puVar17[0x25]);
          sVar24 = fastfunc::FastDoubleToInt();
          *(short *)((int)pvVar15 + 0x300) = sVar24;
          iVar20 = (int)((longlong)sVar24 << 4);
          pSVar16 = Splines[*(int *)((int)pvVar15 + 0x120)];
          (moby->pos).x = *(f32 *)((int)&pSVar16->points[0].x + iVar20);
          (moby->pos).y = *(f32 *)((int)&pSVar16->points[0].y + iVar20);
          (moby->pos).z = *(f32 *)((int)&pSVar16->points[0].z + iVar20);
          (moby->pos).w = *(f32 *)((int)&pSVar16->points[0].w + iVar20);
        }
        *(f32 *)((int)pvVar15 + 0x2c0) = (moby->pos).x;
        *(f32 *)((int)pvVar15 + 0x2c4) = (moby->pos).y;
        *(f32 *)((int)pvVar15 + 0x2c8) = (moby->pos).z;
        fVar2 = (moby->pos).w;
        *(undefined4 *)((int)pvVar15 + 0x308) = 1;
        *(f32 *)((int)pvVar15 + 0x2cc) = fVar2;
        *(f32 *)((int)pvVar15 + 0x2b0) = (moby->pos).x;
        *(f32 *)((int)pvVar15 + 0x2b4) = (moby->pos).y;
        *(f32 *)((int)pvVar15 + 0x2b8) = (moby->pos).z;
        *(f32 *)((int)pvVar15 + 700) = (moby->pos).w;
        if (*(int *)((int)pvVar15 + 0x128) == 0) {
          moby->state = '\x02';
          if (moby->animationId != '\0') {
            puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
          }
        }
        else {
          moby->state = '\n';
          moby->enabled = '\0';
          moby->collision = (ushort *)0x0;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
          if (moby->animationId != '\x01') {
            puVar17[0x25] = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar17 + 300));
          }
        }
      }
      else {
        iVar20 = fastfunc::FastDecTimerS16(uVar32 + 0x2dc);
        fVar43 = (moby->pos).x;
        fVar10 = (moby->pos).y;
        fVar11 = (moby->pos).z;
        if (iVar20 == 0) {
          fVar12 = (moby->transform).v0.y;
          fVar13 = (moby->transform).v0.x;
          fVar14 = (moby->transform).v0.z;
          puVar17[0x25] = (longlong)(int)*(short *)((int)pvVar15 + 0x2dc);
          fVar4 = 0.0;
          fVar3 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12);
          if (fVar3 == 0.0) {
            fVar13 = (moby->transform).v0.w;
            fVar12 = fVar4;
            fVar14 = fVar4;
          }
          else {
            fVar3 = ((float)(longlong)puVar17[0x25] * 0.1) / fVar3;
            fVar4 = fVar13 * fVar3;
            fVar12 = fVar12 * fVar3;
            fVar13 = (moby->transform).v0.w;
            fVar14 = fVar14 * fVar3;
          }
          *(float *)((int)puVar17 + 0x7c) = fVar13;
          *(float *)(puVar17 + 0xe) = fVar4 + fVar43;
          *(float *)((int)puVar17 + 0x74) = fVar12 + fVar10;
          *(float *)(puVar17 + 0xf) = fVar14 + fVar11;
          mobyupdate_helpers::M638_003fb180(moby,uVar19 - 0x110,1);
        }
        else {
          fVar43 = *(float *)((int)pvVar15 + 0x2b0) - fVar43;
          fVar10 = *(float *)((int)pvVar15 + 0x2b4) - fVar10;
          fVar11 = ABS(fVar43);
          fVar12 = ABS(fVar10);
          *(float *)(puVar17 + 0x17) = fVar43;
          *(float *)((int)puVar17 + 0xbc) = fVar10;
          *(float *)(puVar17 + 0x18) = fVar11 - fVar12;
          fVar43 = 0.0;
          uVar26 = (ulonglong)(*(uint *)(puVar17 + 0x17) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0xbc) >> 0x1d) & 4;
          fVar10 = ABS(*(float *)(puVar17 + 0x17));
          if (*(float *)(puVar17 + 0x18) - 0.0 < 0.0) {
            fVar10 = fVar12;
          }
          fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
          fVar12 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          fVar14 = ABS(*(float *)((int)puVar17 + 0xbc));
          if (*(float *)(puVar17 + 0x18) - 0.0 < 0.0) {
            fVar14 = fVar11;
          }
          if (0.0 < fVar10) {
            lVar27 = uVar19 - 0x170;
            lVar31 = uVar19 - 0x6c;
            lVar29 = uVar19 - 0x7c;
            lVar33 = 2;
            fVar10 = (fVar14 - fVar10) / (fVar14 + fVar10);
            fVar11 = fVar10 * fVar10;
            *(float *)(puVar17 + 0x22) = fVar10;
            *(float *)(puVar17 + 0x21) = fVar10;
            *(float *)((int)puVar17 + 0x10c) = fVar10;
            *(float *)((int)puVar17 + 0x104) = fVar10;
            fVar10 = fVar11 * fVar11;
            *(float *)(puVar17 + 0x21) = *(float *)(puVar17 + 0x21) * fVar11;
            *(float *)((int)puVar17 + 0x10c) = *(float *)((int)puVar17 + 0x10c) * fVar10;
            *(float *)(puVar17 + 0x22) = *(float *)(puVar17 + 0x22) * fVar10 * fVar11;
            do {
              *(float *)((int)lVar27 + 0x104) = *(float *)((int)lVar27 + 0xf4) * fVar10 * fVar10;
              iVar20 = (int)lVar29;
              lVar29 = lVar29 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar20 + 4) * fVar10 * fVar10;
              lVar31 = lVar31 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            lVar33 = 4;
            lVar31 = uVar19 - 0x7c;
            pfVar30 = (float *)&DAT_007358e0;
            lVar27 = lVar28;
            lVar29 = lVar31;
            do {
              fVar10 = *pfVar30;
              fVar11 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar27 + 0x104) = *(float *)((int)lVar27 + 0x104) * fVar10;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar11;
              lVar29 = lVar29 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            lVar27 = 2;
            do {
              iVar20 = (int)lVar28;
              lVar28 = lVar28 + 0x10;
              iVar18 = (int)lVar31;
              lVar31 = lVar31 + 0x10;
              fVar43 = fVar43 + *(float *)(iVar20 + 0x104) + *(float *)(iVar18 + 4) +
                       *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            fVar43 = (fVar43 + 0.7853982) * fVar13 + fVar12;
          }
          fVar43 = mobyutil::OrganicDeltAng
                             (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                              mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                              (float *)((int)pvVar15 + 0x2d8));
          dVar35 = (double)mobyupdate_helpers::M638_003fb180((double)fVar43,moby,uVar32 + 0x2b0,1);
          if (moby->animationId != '\0') {
            puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
          }
          if (dVar35 < 1.0) {
            moby->state = '\x02';
          }
        }
      }
    }
    else if (bVar1 < 3) {
      fastfunc::FastDecTimerS16(uVar32 + 0x2dc);
      if (*(int *)((int)pvVar15 + 0x114) == 2) {
        iVar20 = fastfunc::FastDecTimerS16(uVar32 + 0x302);
        if ((iVar20 != 0) && (-1 < *(int *)((int)pvVar15 + 0x120))) {
          auVar40 = ZEXT416(0xffffffff);
          auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
          uVar21 = (int)*(short *)((int)pvVar15 + 0x300) + 1;
          auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
          *(ushort *)((int)pvVar15 + 0x300) =
               (short)uVar21 +
               ((short)((int)uVar21 >> 1) + (ushort)((int)uVar21 < 0 && (uVar21 & 1) != 0)) * -2;
          moby->state = '\x03';
          auVar40 = loadVectorLeftIndexed(0x34,0x3fc148);
          auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar40 = vectorMultiplyAddFloatingPoint
                              (auVar42,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60
                               ,auVar41);
          auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
          auVar40 = vectorSplatHalfWord(auVar40,1);
          uVar22 = storeVectorElementHalfWordIndexed(auVar40,0x302,uVar32);
          *(undefined2 *)((int)pvVar15 + 0x302) = uVar22;
          mobyupdate_helpers::M638_003fb2e8(moby);
        }
      }
      else if (*(short *)((int)pvVar15 + 0x2dc) == 0) {
        if (*(int *)((int)pvVar15 + 0x120) < 0) {
          iVar20 = mobyutil::MB_randInt(0x14);
          if ((iVar20 == 0) && (moby->state = '\x04', moby->animationId != '\x02')) {
            puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar17 + 300));
          }
        }
        else {
          moby->state = '\a';
          dVar35 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          uVar22 = fastfunc::FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
          *(undefined2 *)((int)pvVar15 + 0x2dc) = uVar22;
          uVar21 = (int)*(short *)((int)pvVar15 + 0x300) + 1;
          *(ushort *)((int)pvVar15 + 0x300) =
               (short)uVar21 +
               ((short)((int)uVar21 >> 1) + (ushort)((int)uVar21 < 0 && (uVar21 & 1) != 0)) * -2;
          mobyupdate_helpers::M638_003fb2e8(moby);
        }
      }
    }
    else if (bVar1 < 4) {
      dVar35 = (double)mobyupdate_helpers::M638_003fb180
                                 (moby,Splines[*(int *)((int)pvVar15 + 0x120)]->points +
                                       *(short *)((int)pvVar15 + 0x300),1);
      if ((dVar35 < 0.009999999776482582) ||
         (iVar20 = fastfunc::FastDecTimerS16(uVar32 + 0x302), iVar20 != 0)) {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
        }
        dVar36 = (double)mobyutil::MB_randRangeFloat(180.0,360.0);
        uVar22 = fastfunc::FastDoubleToInt((double)(float)(dVar36 * (double)animationSpeed));
        *(undefined2 *)((int)pvVar15 + 0x302) = uVar22;
      }
      if (((*(float *)((int)pvVar15 + 0x2d4) < mobyutil::g_FrameTime * 2.0) && (dVar35 < 0.5)) &&
         (moby->animationId != '\0')) {
        puVar17[0x25] = (longlong)(int)(animationSpeed * 30.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
      }
    }
    else {
      fVar43 = (float)(dVar38 - (double)(moby->pos).x);
      fVar10 = (float)(dVar37 - (double)(moby->pos).y);
      fVar11 = ABS(fVar43);
      fVar12 = ABS(fVar10);
      *(float *)((int)puVar17 + 0xac) = fVar43;
      *(float *)(puVar17 + 0x16) = fVar10;
      *(float *)((int)puVar17 + 0xb4) = fVar11 - fVar12;
      fVar43 = 0.0;
      uVar32 = (ulonglong)(*(uint *)((int)puVar17 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1d) & 4;
      fVar10 = ABS(*(float *)((int)puVar17 + 0xac));
      if (*(float *)((int)puVar17 + 0xb4) - 0.0 < 0.0) {
        fVar10 = fVar12;
      }
      fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
      fVar12 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar17 + 0x16));
      if (*(float *)((int)puVar17 + 0xb4) - 0.0 < 0.0) {
        fVar14 = fVar11;
      }
      if (0.0 < fVar10) {
        lVar27 = uVar19 - 0x170;
        lVar31 = uVar19 - 0x8c;
        lVar29 = uVar19 - 0x9c;
        lVar33 = 2;
        fVar10 = (fVar14 - fVar10) / (fVar14 + fVar10);
        fVar11 = fVar10 * fVar10;
        *(float *)(puVar17 + 0x1e) = fVar10;
        *(float *)(puVar17 + 0x1d) = fVar10;
        *(float *)((int)puVar17 + 0xec) = fVar10;
        *(float *)((int)puVar17 + 0xe4) = fVar10;
        fVar10 = fVar11 * fVar11;
        *(float *)(puVar17 + 0x1d) = *(float *)(puVar17 + 0x1d) * fVar11;
        *(float *)((int)puVar17 + 0xec) = *(float *)((int)puVar17 + 0xec) * fVar10;
        *(float *)(puVar17 + 0x1e) = *(float *)(puVar17 + 0x1e) * fVar10 * fVar11;
        do {
          *(float *)((int)lVar27 + 0xe4) = *(float *)((int)lVar27 + 0xd4) * fVar10 * fVar10;
          iVar20 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar20 + 4) * fVar10 * fVar10;
          lVar31 = lVar31 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar31 = uVar19 - 0x9c;
        pfVar30 = (float *)&DAT_007358e0;
        lVar27 = lVar28;
        lVar29 = lVar31;
        do {
          fVar10 = *pfVar30;
          fVar11 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar27 + 0xe4) = *(float *)((int)lVar27 + 0xe4) * fVar10;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar11;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar27 = 2;
        do {
          iVar20 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          iVar18 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          fVar43 = fVar43 + *(float *)(iVar20 + 0xe4) + *(float *)(iVar18 + 4) +
                   *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        fVar43 = (fVar43 + 0.7853982) * fVar13 + fVar12;
      }
      mobyutil::OrganicDeltAng
                (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar15 + 0x2d8));
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x03')) {
        puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar17 + 300));
      }
    }
  }
  else if (bVar1 == 10) {
    if (*(int *)((int)pvVar15 + 0x2d0) != 0) {
      moby->enabled = '\x01';
      iVar20 = *(int *)((int)pvVar15 + 0x2d0);
      fVar43 = *(float *)((int)pvVar15 + 0x2c4);
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      fVar10 = *(float *)((int)pvVar15 + 0x2c0);
      fVar11 = *(float *)(iVar20 + 0xd4);
      fVar12 = *(float *)((int)pvVar15 + 0x2c8);
      fVar13 = *(float *)(iVar20 + 0xc4);
      fVar14 = *(float *)(iVar20 + 0xd8);
      fVar3 = *(float *)(iVar20 + 0xe4);
      fVar4 = *(float *)(iVar20 + 0xdc);
      fVar5 = *(float *)(iVar20 + 200);
      fVar6 = *(float *)(iVar20 + 0xcc);
      fVar7 = *(float *)(iVar20 + 0xe8);
      fVar8 = *(float *)(iVar20 + 0xec);
      fVar9 = *(float *)((int)pvVar15 + 0x2cc);
      (moby->pos).x =
           *(float *)(iVar20 + 0xe0) * fVar12 +
           *(float *)(iVar20 + 0xc0) * fVar10 + *(float *)(iVar20 + 0xd0) * fVar43 +
           *(float *)(iVar20 + 0x10);
      (moby->pos).y = fVar3 * fVar12 + fVar13 * fVar10 + fVar11 * fVar43 + *(float *)(iVar20 + 0x14)
      ;
      fVar11 = *(float *)(iVar20 + 0x18);
      (moby->pos).w = fVar8 * fVar12 + fVar6 * fVar10 + fVar4 * fVar43 + fVar9;
      (moby->pos).z = fVar7 * fVar12 + fVar5 * fVar10 + fVar14 * fVar43 + fVar11;
      dVar35 = (double)fastfunc::FastWrapRot
                                 (*(float *)(iVar20 + 0x48),*(float *)((int)pvVar15 + 0x2cc));
      (moby->rotation).z = (float)dVar35;
    }
  }
  else if (bVar1 == 9) {
    dVar37 = (double)(moby->pos).x;
    dVar36 = (double)(moby->pos).y;
    dVar35 = (double)(moby->pos).z;
    uVar21 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar15 + 0x70));
    if ((uVar21 & 0x160) != 0) {
      mobyupdate_helpers::M638_003fac98(moby);
      sound::PlayMobySound(0,0,moby);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar43 = (moby->pos).y;
    fVar10 = (moby->pos).z;
    *(float *)((int)pvVar15 + 0x2c0) =
         *(float *)((int)pvVar15 + 0x2c0) + (float)((double)(moby->pos).x - dVar37);
    *(float *)((int)pvVar15 + 0x2c4) =
         *(float *)((int)pvVar15 + 0x2c4) + (float)((double)fVar43 - dVar36);
    *(float *)((int)pvVar15 + 0x2c8) =
         *(float *)((int)pvVar15 + 0x2c8) + (float)((double)fVar10 - dVar35);
  }
  else if (bVar1 == 8) {
    if ((moby->field43_0x70 & 2U) == 0) {
      fVar43 = (moby->transform).v0.y;
      fVar10 = (moby->transform).v0.x;
      fVar11 = (moby->transform).v0.z;
      fVar12 = 0.0;
      fVar3 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar43 * fVar43);
      fVar13 = -mobyutil::g_FrameTime / fVar3;
      fVar14 = fVar12;
      if (0.0 - fVar3 < 0.0) {
        fVar14 = fVar11 * fVar13;
      }
      fVar4 = fVar12;
      if (0.0 - fVar3 < 0.0) {
        fVar4 = fVar43 * fVar13;
      }
      if (0.0 - fVar3 < 0.0) {
        fVar12 = fVar10 * fVar13;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar14 = fVar11 * fVar13;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar4 = fVar43 * fVar13;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar12 = fVar10 * fVar13;
      }
      (moby->pos).z = (moby->pos).z + fVar14;
      (moby->pos).y = (moby->pos).y + fVar4;
      (moby->pos).x = (moby->pos).x + fVar12;
    }
    else {
      moby->state = '\x02';
      if (moby->animationId != '\0') {
        puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
      }
    }
  }
  else if (bVar1 == 7) {
    dVar35 = (double)mobyupdate_helpers::M638_003fb180
                               (moby,Splines[*(int *)((int)pvVar15 + 0x120)]->points +
                                     *(short *)((int)pvVar15 + 0x300),1);
    fastfunc::FastDecTimerS16(uVar32 + 0x2dc);
    uVar25 = moby->animationId;
    if (((dVar35 < 0.009999999776482582) || (*(short *)((int)pvVar15 + 0x2dc) == 0)) &&
       (moby->state = '\x04', uVar25 != '\x02')) {
      puVar17[0x25] = (longlong)(int)(animationSpeed * 30.5);
      mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar17 + 300));
      uVar25 = moby->animationId;
    }
    if ((dVar35 < 0.5) &&
       (*(float *)((int)pvVar15 + 0x2d4) < mobyutil::g_FrameTime * 2.0 && uVar25 != '\x02')) {
      puVar17[0x25] = (longlong)(int)(animationSpeed * 30.5);
      mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar17 + 300));
    }
  }
  else if (bVar1 == 5) {
    fVar43 = (float)(dVar38 - (double)(moby->pos).x);
    fVar10 = (float)(dVar37 - (double)(moby->pos).y);
    fVar12 = ABS(fVar43);
    fVar11 = ABS(fVar10);
    *(float *)(puVar17 + 0x14) = fVar43;
    *(float *)((int)puVar17 + 0xa4) = fVar10;
    *(float *)(puVar17 + 0x15) = fVar12 - fVar11;
    dVar39 = 0.0;
    uVar26 = (ulonglong)(*(uint *)(puVar17 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar17 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar17 + 0xa4) >> 0x1d) & 4;
    fVar43 = ABS(*(float *)(puVar17 + 0x14));
    if (*(float *)(puVar17 + 0x15) - 0.0 < 0.0) {
      fVar43 = fVar11;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar10 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar13 = ABS(*(float *)((int)puVar17 + 0xa4));
    if (*(float *)(puVar17 + 0x15) - 0.0 < 0.0) {
      fVar13 = fVar12;
    }
    dVar34 = dVar39;
    if (0.0 < fVar43) {
      lVar27 = uVar19 - 0x170;
      lVar31 = uVar19 - 0xac;
      lVar29 = uVar19 - 0xbc;
      lVar33 = 2;
      fVar43 = (fVar13 - fVar43) / (fVar13 + fVar43);
      fVar12 = fVar43 * fVar43;
      *(float *)(puVar17 + 0x1a) = fVar43;
      *(float *)(puVar17 + 0x19) = fVar43;
      *(float *)((int)puVar17 + 0xcc) = fVar43;
      *(float *)((int)puVar17 + 0xc4) = fVar43;
      fVar43 = fVar12 * fVar12;
      *(float *)(puVar17 + 0x19) = *(float *)(puVar17 + 0x19) * fVar12;
      *(float *)((int)puVar17 + 0xcc) = *(float *)((int)puVar17 + 0xcc) * fVar43;
      *(float *)(puVar17 + 0x1a) = *(float *)(puVar17 + 0x1a) * fVar43 * fVar12;
      do {
        *(float *)((int)lVar27 + 0xc4) = *(float *)((int)lVar27 + 0xb4) * fVar43 * fVar43;
        iVar20 = (int)lVar29;
        lVar29 = lVar29 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar20 + 4) * fVar43 * fVar43;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar31 = uVar19 - 0xbc;
      pfVar30 = (float *)&DAT_007358e0;
      lVar27 = lVar28;
      lVar29 = lVar31;
      do {
        fVar43 = *pfVar30;
        fVar12 = pfVar30[1];
        pfVar30 = pfVar30 + 2;
        *(float *)((int)lVar27 + 0xc4) = *(float *)((int)lVar27 + 0xc4) * fVar43;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar12;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar27 = 2;
      do {
        iVar20 = (int)lVar28;
        iVar18 = (int)lVar31;
        lVar28 = lVar28 + 0x10;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0xc4)) +
                          *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc)
                         );
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar11 + fVar10);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar34,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar15 + 0x2d8));
    iVar20 = mobyutil::MB_MayaFrameTrigger(2.0,moby);
    if (((iVar20 == 0) && (iVar20 = mobyutil::MB_MayaFrameTrigger(17.0,moby), iVar20 == 0)) &&
       (iVar20 = mobyutil::MB_MayaFrameTrigger(32.0,moby), iVar20 == 0)) {
      iVar20 = mobyutil::MB_MayaFrameTrigger(10.0,moby);
      if ((iVar20 != 0) &&
         (sVar24 = *(short *)((int)pvVar15 + 0x2de) + 1, *(short *)((int)pvVar15 + 0x2de) = sVar24,
         2 < sVar24)) {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
        }
        auVar40 = ZEXT416(0xffffffff);
        auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
        auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
        auVar40 = loadVectorLeftIndexed(0x58,0x3fc148);
        auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar40 = vectorMultiplyAddFloatingPoint
                            (auVar42,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,
                             auVar41);
        auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
        auVar40 = vectorSplatHalfWord(auVar40,1);
        uVar22 = storeVectorElementHalfWordIndexed(auVar40,0x2dc,uVar32);
        *(undefined2 *)((int)pvVar15 + 0x2dc) = uVar22;
        *(undefined2 *)((int)pvVar15 + 0x2de) = 0;
      }
    }
    else {
      mobyfunc::GetBonePosition(moby,0,uVar19 - 0x100);
      fVar10 = (float)(dVar37 - (double)*(float *)((int)puVar17 + 0x84));
      fVar11 = (float)(dVar38 - (double)*(float *)(puVar17 + 0x10));
      fVar12 = (float)(dVar36 - (double)*(float *)(puVar17 + 0x11));
      *(float *)(puVar17 + 0x12) = fVar11;
      *(float *)((int)puVar17 + 0x94) = fVar10;
      *(float *)(puVar17 + 0x13) = fVar12;
      *(float *)((int)puVar17 + 0x9c) = (float)dVar35;
      dVar36 = (double)SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
      fVar43 = (float)((double)(mobyutil::g_FrameTime * 20.0) / dVar36);
      dVar35 = dVar39;
      if (dVar39 - dVar36 < 0.0) {
        dVar35 = (double)(fVar11 * fVar43);
      }
      dVar37 = dVar39;
      if (dVar39 - dVar36 < 0.0) {
        dVar37 = (double)(fVar10 * fVar43);
      }
      dVar38 = dVar39;
      if (dVar39 - dVar36 < 0.0) {
        dVar38 = (double)(fVar12 * fVar43);
      }
      if (dVar36 - dVar39 < 0.0) {
        dVar35 = (double)(fVar11 * fVar43);
      }
      if (dVar36 - dVar39 < 0.0) {
        dVar37 = (double)(fVar10 * fVar43);
      }
      if (dVar36 - dVar39 < 0.0) {
        dVar38 = (double)(fVar12 * fVar43);
      }
      *(float *)(puVar17 + 0x12) = (float)dVar35;
      *(float *)((int)puVar17 + 0x94) = (float)dVar37;
      *(float *)(puVar17 + 0x13) = (float)dVar38;
      FUN_003a01e0(moby,uVar19 - 0xf0,uVar19 - 0x100);
    }
  }
  if (DAT_00854670 != 0) {
    *(f32 *)((int)pvVar15 + 700) = (moby->pos).z;
    if (moby->state != '\n' && moby->state != '\0') {
      mobyutil::Delt(0.25,mobyutil::g_FrameTime * 0.25,(float *)((int)pvVar15 + 0x2ec));
      dVar35 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar15 + 0x2f4),*(float *)((int)pvVar15 + 0x2f0))
      ;
      *(float *)((int)pvVar15 + 0x2f4) = (float)dVar35;
      dVar35 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar15 + 0x2fc),*(float *)((int)pvVar15 + 0x2f8))
      ;
      *(float *)((int)pvVar15 + 0x2fc) = (float)dVar35;
      dVar35 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar15 + 0x2e8),*(float *)((int)pvVar15 + 0x2e4))
      ;
      fVar43 = *(float *)((int)pvVar15 + 0x2f4);
      fVar10 = 3.1415925 - fVar43;
      if (fVar43 - (3.1415925 - fVar43) < 0.0) {
        fVar10 = fVar43;
      }
      fVar11 = -3.1415925 - fVar43;
      if ((-3.1415925 - fVar43) - fVar10 < 0.0) {
        fVar11 = fVar10;
      }
      *(float *)((int)pvVar15 + 0x2e8) = (float)dVar35;
      fVar12 = fVar11 * fVar11;
      fVar10 = fVar12 * fVar12 * fVar11;
      fVar43 = fVar12 * fVar10;
      (moby->pos).x =
           *(float *)((int)pvVar15 + 0x2ec) *
           (fVar12 * fVar43 * 2.601887e-06 +
           fVar43 * -0.0001980741 + fVar10 * 0.0083330255 + fVar12 * fVar11 * -0.16666657 + fVar11)
           + *(float *)((int)pvVar15 + 0x2c0);
      fVar43 = *(float *)((int)pvVar15 + 0x2fc);
      fVar10 = 3.1415925 - fVar43;
      if (fVar43 - (3.1415925 - fVar43) < 0.0) {
        fVar10 = fVar43;
      }
      fVar11 = -3.1415925 - fVar43;
      if ((-3.1415925 - fVar43) - fVar10 < 0.0) {
        fVar11 = fVar10;
      }
      fVar43 = fVar11 * fVar11;
      fVar10 = fVar43 * fVar43 * fVar11;
      fVar12 = fVar43 * fVar10;
      (moby->pos).y =
           *(float *)((int)pvVar15 + 0x2ec) *
           (fVar43 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar10 * 0.0083330255 + fVar43 * fVar11 * -0.16666657 + fVar11)
           + *(float *)((int)pvVar15 + 0x2c4);
      fVar43 = *(float *)((int)pvVar15 + 0x2e8);
      fVar10 = 3.1415925 - fVar43;
      if (fVar43 - (3.1415925 - fVar43) < 0.0) {
        fVar10 = fVar43;
      }
      fVar11 = -3.1415925 - fVar43;
      if ((-3.1415925 - fVar43) - fVar10 < 0.0) {
        fVar11 = fVar10;
      }
      fVar43 = fVar11 * fVar11;
      fVar10 = fVar43 * fVar43 * fVar11;
      fVar12 = fVar43 * fVar10;
      (moby->pos).z =
           *(float *)((int)pvVar15 + 0x2ec) *
           (fVar43 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar10 * 0.0083330255 + fVar43 * fVar11 * -0.16666657 + fVar11)
           + *(float *)((int)pvVar15 + 0x2c8);
    }
    fVar43 = (moby->pos).y - GameCamera.posY;
    fVar10 = (moby->pos).x - GameCamera.posX;
    fVar11 = (moby->pos).z - GameCamera.posZ;
    if ((SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar43 * fVar43) < 32.0) &&
       (iVar20 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar15 + 0x304)), iVar20 == 0)) {
      iVar20 = sound::PlayMobySound(7,4,moby);
      *(int *)((int)pvVar15 + 0x304) = iVar20;
    }
  }
  if (DAT_00854674 != 0) {
    mobyupdate_helpers::M638_003fa1a8(moby);
  }
  if ((DAT_00854678 != 0) && (hero::g_heroStateType != 0x16)) {
    mobyupdate_helpers::M638_003f9dc0(moby);
  }
  if (((Level == Veldin2) && (g_gameMode == GAME_MODE_SCENE)) &&
     (update::g_SceneId < 6 && 2 < update::g_SceneId)) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 003fd8d8  ns=Global  size=0x34
// sig: undefined FUN_003fd8d8(void)
// callers(1): 00258c50 mobyupdate_unsorted::UpdateMoby_1356
// callees(0): 

void FUN_003fd8d8(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x2d0) = param_2;
  *(undefined4 *)(iVar1 + 0x2c0) = *param_3;
  *(undefined4 *)(iVar1 + 0x2c4) = param_3[1];
  *(undefined4 *)(iVar1 + 0x2c8) = param_3[2];
  *(undefined4 *)(iVar1 + 0x2cc) = param_3[3];
  *(undefined4 *)(iVar1 + 0x2cc) = *(undefined4 *)(param_4 + 8);
  return;
}



//==== 003fd918  ns=Global  size=0x108
// sig: undefined FUN_003fd918(void)
// callers(1): 00258c50 mobyupdate_unsorted::UpdateMoby_1356
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void FUN_003fd918(int param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x20) == '\n') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (*(char *)(param_1 + 0x53) != '\x01') {
      mobyutil::MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 20.5));
    }
    *(undefined1 *)(param_1 + 0x31) = 1;
    uVar1 = *(ushort *)(param_1 + 0x34);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    *(undefined4 *)(iVar2 + 700) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(undefined4 *)(iVar2 + 0x2c0) = *(undefined4 *)(param_1 + 0x10);
    *(ushort *)(param_1 + 0x34) = uVar1 & 0xfffe | 0x1000;
    *(undefined4 *)(iVar2 + 0x2c4) = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)(iVar2 + 0x2dc) = param_2;
    *(undefined4 *)(iVar2 + 0x2c8) = uVar3;
    *(undefined4 *)(iVar2 + 0x2cc) = *(undefined4 *)(param_1 + 0x1c);
    *(float *)(iVar2 + 0x2d4) = mobyutil::g_FrameTime * 5.0;
  }
  return;
}



//==== 003fda20  ns=mobyupdate_helpers  size=0x14
// sig: undefined M639_003fda20(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M639_003fda20(void)

{
  DAT_008546c8 = 0x10000;
  return;
}



//==== 003fda38  ns=Global  size=0x234
// sig: undefined FUN_003fda38(void)
// callers(12): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 0033c6e0 mobyupdate_helpers::M31_0033c6e0; 003ead68 mobyupdate_unsorted::UpdateMoby_627; 00434a88 mobyupdate_helpers::M722_00434a88; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 0048b288 mobyupdate_helpers::M849_0048b288
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * FUN_003fda38(undefined4 *param_1,f32 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = mobyfunc::CreateMoby(0x27f);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    pMVar4->modeBits = pMVar4->modeBits | DISABLED;
    puVar3 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    if (param_4 == (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      uVar2 = param_1[3];
    }
    else {
      *puVar3 = *param_4;
      puVar3[1] = param_4[1];
      puVar3[2] = param_4[2];
      uVar2 = param_4[3];
    }
    puVar3[3] = uVar2;
    puVar3[8] = param_3;
    pMVar4->drawDistance = (ushort)*(byte *)(param_1 + 0xf);
    *(undefined1 *)(puVar3 + 9) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)((int)puVar3 + 0x25) = *(undefined1 *)((int)param_1 + 0x11);
    *(undefined1 *)((int)puVar3 + 0x26) = *(undefined1 *)((int)param_1 + 0x12);
    *(undefined1 *)((int)puVar3 + 0x27) = *(undefined1 *)((int)param_1 + 0x13);
    *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)((int)puVar3 + 0x29) = *(undefined1 *)((int)param_1 + 0x15);
    *(undefined1 *)(puVar3 + 0x1a) = *(undefined1 *)((int)param_1 + 0x3d);
    *(undefined2 *)(puVar3 + 0x1b) = *(undefined2 *)(param_1 + 0x10);
    *(undefined1 *)((int)puVar3 + 0x2a) = *(undefined1 *)((int)param_1 + 0x16);
    *(undefined1 *)((int)puVar3 + 0x2b) = *(undefined1 *)((int)param_1 + 0x17);
    *(undefined1 *)(puVar3 + 0xb) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)((int)puVar3 + 0x2d) = *(undefined1 *)((int)param_1 + 0x19);
    *(undefined1 *)((int)puVar3 + 0x2e) = *(undefined1 *)((int)param_1 + 0x1a);
    *(undefined1 *)((int)puVar3 + 0x69) = *(undefined1 *)((int)param_1 + 0x3e);
    *(undefined2 *)((int)puVar3 + 0x6e) = *(undefined2 *)((int)param_1 + 0x42);
    *(undefined1 *)((int)puVar3 + 0x2f) = *(undefined1 *)((int)param_1 + 0x1b);
    *(undefined1 *)(puVar3 + 0xc) = *(undefined1 *)(param_1 + 7);
    *(undefined1 *)((int)puVar3 + 0x31) = *(undefined1 *)((int)param_1 + 0x1d);
    *(undefined1 *)((int)puVar3 + 0x32) = *(undefined1 *)((int)param_1 + 0x1e);
    *(undefined1 *)((int)puVar3 + 0x33) = *(undefined1 *)((int)param_1 + 0x1f);
    *(undefined1 *)((int)puVar3 + 0x6a) = *(undefined1 *)((int)param_1 + 0x3f);
    *(undefined2 *)(puVar3 + 0x1c) = *(undefined2 *)(param_1 + 0x11);
    puVar3[0xd] = param_1[8];
    puVar3[0xe] = param_1[9];
    puVar3[0xf] = param_1[10];
    puVar3[0x10] = param_1[0xb];
    puVar3[0x11] = param_1[0xc];
    *(undefined1 *)((int)puVar3 + 0x6b) = *(undefined1 *)(param_1 + 0x12);
    *(undefined2 *)((int)puVar3 + 0x72) = *(undefined2 *)((int)param_1 + 0x46);
    puVar3[0x12] = param_1[0xd];
    puVar3[0x13] = param_1[0xe];
    uVar1 = *(undefined1 *)((int)param_1 + 0x49);
    puVar3[0x19] = 0xffffffff;
    *(undefined1 *)(puVar3 + 7) = uVar1;
    mobyfunc::UpdateMobyTransform(pMVar4);
    mobyutil::MB_CopyHeroLights(pMVar4);
  }
  return pMVar4;
}



//==== 003fdc80  ns=mobyupdate_unsorted  size=0x1054
// sig: undefined UpdateMoby_639(MobyInstance * moby)
// callers(0): 
// callees(10): 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005000b4 fastfunc::FastDecTimerU8; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 639 */

void mobyupdate_unsorted::UpdateMoby_639(MobyInstance *moby)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  float fVar14;
  ulonglong uVar15;
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
  undefined1 local_80 [40];
  
  if (moby != (MobyInstance *)0x0) {
    pfVar8 = (float *)moby->pVar;
    uVar15 = ZEXT48(pfVar8);
    bVar12 = false;
    if (pfVar8 != (float *)0x0) {
      if (moby->state == '\0') {
        moby->updateDistance = -1;
        moby->setByGroup = *(char *)(pfVar8 + 7);
        pfVar8[4] = (moby->pos).x;
        pfVar8[5] = (moby->pos).y;
        pfVar8[6] = (moby->pos).z;
        pfVar8[7] = (moby->pos).w;
        cVar4 = moby->setByGroup;
        pfVar8[3] = pfVar8[0x13];
        *(char *)(pfVar8 + 7) = cVar4;
        *(undefined2 *)(pfVar8 + 0x1d) = *(undefined2 *)(pfVar8 + 0x1b);
        *(undefined2 *)((int)pfVar8 + 0x76) = *(undefined2 *)((int)pfVar8 + 0x6e);
        *(undefined2 *)(pfVar8 + 0x1e) = *(undefined2 *)(pfVar8 + 0x1c);
        *(undefined2 *)((int)pfVar8 + 0x7a) = *(undefined2 *)((int)pfVar8 + 0x72);
        pfVar8[0x14] = -NAN;
        dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x25));
        dVar20 = 0.009999999776482582;
        pfVar8[0x15] = (float)(dVar16 * 0.009999999776482582);
        dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2a));
        pfVar8[0x16] = (float)(dVar16 * dVar20);
        dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2f));
        pfVar8[0x18] = pfVar8[0xd];
        pfVar8[0x17] = (float)(dVar16 * dVar20);
        if (pfVar8[0x19] != -NAN) {
          pfVar8[8] = (float)(MobyInstance + (int)pfVar8[0x19]);
        }
        if ((int)pfVar8[0x10] < 0) {
          pfVar8[0x10] = -pfVar8[0x10];
        }
        if ((int)pfVar8[0x11] < 0) {
          pfVar8[0x11] = -pfVar8[0x11];
        }
        moby->state = '\x01';
      }
      if (moby->setByGroup == '\0') {
        if ((pfVar8[0x12] == -NAN) ||
           (iVar13 = fastfunc::FastDecTimerS32(uVar15 + 0x48), iVar13 == 0)) {
          iVar13 = fastfunc::FastCheckBsphereInView(0x406fe00000000000,local_80);
          if (iVar13 == -1) {
            if (pfVar8[0x14] != -NAN) {
              lights::DeletePointLight(pfVar8[0x14]);
              pfVar8[0x14] = -NAN;
            }
          }
          else {
            fVar14 = pfVar8[8];
            if (fVar14 == 0.0) {
              fVar5 = pfVar8[4];
              fVar6 = pfVar8[5];
              fVar7 = pfVar8[6];
              fVar14 = pfVar8[7];
            }
            else {
              fVar5 = *(float *)((int)fVar14 + 0x10);
              fVar6 = *(float *)((int)fVar14 + 0x14);
              fVar7 = *(float *)((int)fVar14 + 0x18);
              fVar14 = *(float *)((int)fVar14 + 0x1c);
            }
            dVar22 = (double)fVar5;
            dVar21 = (double)fVar6;
            dVar20 = (double)fVar7;
            dVar16 = (double)fVar14;
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x800000) == 0) {
              if (((uint)fVar14 & 0x100000) == 0) {
                dVar17 = (double)*pfVar8;
                dVar18 = (double)pfVar8[1];
                dVar19 = (double)pfVar8[2];
              }
              else if (((uint)fVar14 & 0x200000) == 0) {
                fVar14 = pfVar8[3];
                pfVar8[3] = 0.0;
                dVar19 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
                dVar17 = (double)(float)((double)*pfVar8 * dVar19);
                dVar18 = (double)(float)((double)pfVar8[1] * dVar19);
                pfVar8[3] = fVar14;
                dVar19 = (double)(float)((double)pfVar8[2] * dVar19);
              }
              else {
                dVar17 = (double)mobyutil::MB_randRangeFloat(-*pfVar8,*pfVar8);
                dVar18 = (double)mobyutil::MB_randRangeFloat(-pfVar8[1],pfVar8[1]);
                dVar19 = (double)mobyutil::MB_randRangeFloat(-pfVar8[2],pfVar8[2]);
              }
              if ((((uint)pfVar8[0x13] & 0x400000) != 0) && (fVar14 = pfVar8[8], fVar14 != 0.0)) {
                dVar3 = (double)*(float *)((int)fVar14 + 0xd8) * dVar18;
                dVar1 = (double)*(float *)((int)fVar14 + 0xc4) * dVar17;
                dVar2 = (double)*(float *)((int)fVar14 + 200) * dVar17;
                dVar17 = (double)(float)((double)*(float *)((int)fVar14 + 0xe0) * dVar19 +
                                        (double)(float)((double)*(float *)((int)fVar14 + 0xc0) *
                                                        dVar17 + (double)(float)((double)*(float *)(
                                                  (int)fVar14 + 0xd0) * dVar18)));
                dVar18 = (double)(float)((double)*(float *)((int)fVar14 + 0xe4) * dVar19 +
                                        (double)(float)(dVar1 + (double)(float)((double)*(float *)((
                                                  int)fVar14 + 0xd4) * dVar18)));
                dVar19 = (double)(float)((double)*(float *)((int)fVar14 + 0xe8) * dVar19 +
                                        (double)(float)(dVar2 + (double)(float)dVar3));
              }
              dVar22 = (double)(float)(dVar22 + dVar17);
              dVar21 = (double)(float)(dVar21 + dVar18);
              dVar20 = (double)(float)(dVar20 + dVar19);
            }
            (moby->pos).x = (float)dVar22;
            (moby->pos).y = (float)dVar21;
            (moby->pos).z = (float)dVar20;
            (moby->pos).w = (float)dVar16;
            if ((*(short *)((int)pfVar8 + 0x72) != 0) &&
               (iVar13 = fastfunc::FastDecTimerS16(uVar15 + 0x7a), iVar13 != 0)) {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              auVar23 = loadVectorLeftIndexed(0x72,uVar15);
              auVar24 = loadVectorRightIndexed(0x82,uVar15);
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = ZEXT416(0xfffffff0);
              auVar23 = vectorShiftRightWord
                                  (auVar23 | auVar24,
                                   auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
              auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
              auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar25 = vectorAddFloatingPoint
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar26);
              auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
              auVar25 = vectorSplatHalfWord(auVar25,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x7a,uVar15);
              *(undefined2 *)((int)pfVar8 + 0x7a) = uVar10;
              if (((uint)pfVar8[0x13] & 4) != 0) {
                bVar12 = true;
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] & 0xfffffff7);
                pfVar8[0x18] = pfVar8[0xf];
              }
            }
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x80000) == 0) {
              if ((((uint)fVar14 & 2) != 0) && (((uint)fVar14 & 1) == 0)) {
                fVar14 = (float)((uint)fVar14 ^ 2);
                pfVar8[0x13] = fVar14;
              }
              if (((uint)fVar14 & 2) == 0) {
                if (((uint)fVar14 & 8) == 0) {
                  fVar5 = pfVar8[0x10] * DAT_0071f408 + pfVar8[0x18];
                  pfVar8[0x18] = fVar5;
                  if (pfVar8[0xe] <= fVar5) {
                    pfVar8[0x18] = pfVar8[0xe];
                    if (((uint)fVar14 & 1) == 0) {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 8);
                    }
                    else {
                      auVar25 = ZEXT416(0xfffffff8);
                      auVar23 = ZEXT416(0xffffffff);
                      auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
                      auVar23 = loadVectorLeftIndexed(0x6b,uVar15);
                      auVar25 = vectorShiftRightWord
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
                      auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
                      auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
                      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
                      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                      auVar25 = vectorAddFloatingPoint
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar24);
                      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
                      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xff;
                      uVar9 = storeVectorElementByteIndexed
                                        (auVar25 | auVar25 << 8 | auVar25 << 0x10 | auVar25 << 0x18
                                         | auVar25 << 0x20 | auVar25 << 0x28 | auVar25 << 0x30 |
                                         auVar25 << 0x38 | auVar25 << 0x40 | auVar25 << 0x48 |
                                         auVar25 << 0x50 | auVar25 << 0x58 | auVar25 << 0x60 |
                                         auVar25 << 0x68 | auVar25 << 0x70 | auVar25 << 0x78,0x7f,
                                         uVar15);
                      *(undefined1 *)((int)pfVar8 + 0x7f) = uVar9;
                      pfVar8[0x13] = (float)(((uint)fVar14 | 2) ^ 8);
                    }
                  }
                }
                else {
                  fVar5 = -(pfVar8[0x11] * DAT_0071f408 - pfVar8[0x18]);
                  pfVar8[0x18] = fVar5;
                  if ((fVar5 <= pfVar8[0xf]) &&
                     (pfVar8[0x18] = pfVar8[0xf], ((uint)fVar14 & 4) != 0)) {
                    if ((int)(animationSpeed * ((float)*(ushort *)((int)pfVar8 + 0x72) + 0.5)) == 0)
                    {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 8);
                    }
                  }
                }
              }
              else if ((*(char *)((int)pfVar8 + 0x6b) != '\0') &&
                      (iVar13 = fastfunc::FastDecTimerU8(uVar15 + 0x7f), iVar13 != 0)) {
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 2);
              }
            }
            else if ((*(short *)((int)pfVar8 + 0x72) == 0) || (bVar12)) {
              dVar16 = (double)mobyutil::MB_randRangeFloat(pfVar8[0xf],pfVar8[0xe]);
              pfVar8[0x18] = (float)dVar16;
            }
            if ((*(short *)(pfVar8 + 0x1b) != 0) &&
               (iVar13 = fastfunc::FastDecTimerS16(uVar15 + 0x74), iVar13 != 0)) {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              auVar23 = loadVectorLeftIndexed(0x6c,uVar15);
              auVar24 = loadVectorRightIndexed(0x7c,uVar15);
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = ZEXT416(0xfffffff0);
              auVar23 = vectorShiftRightWord
                                  (auVar23 | auVar24,
                                   auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
              auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
              auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorAddFloatingPoint
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = ZEXT416(0xfffffff8);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar23,auVar26);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = vectorSplatHalfWord(auVar23,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar23,0x74,uVar15);
              *(undefined2 *)(pfVar8 + 0x1d) = uVar10;
              auVar23 = loadVectorLeftIndexed(0x27,uVar15);
              auVar25 = vectorShiftRightWord
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
              auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar11 = storeVectorElementWordIndexed
                                 (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x54
                                  ,uVar15);
              *(undefined4 *)((uint)(pfVar8 + 0x15) & 0xfffffffc) = uVar11;
              pfVar8[0x13] = (float)((uint)pfVar8[0x13] & 0xffffff7f);
            }
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x10000) == 0) {
              if ((((uint)fVar14 & 0x20) != 0) && (((uint)fVar14 & 0x10) == 0)) {
                fVar14 = (float)((uint)fVar14 ^ 0x20);
                pfVar8[0x13] = fVar14;
              }
              if (((uint)fVar14 & 0x20) == 0) {
                if (((uint)fVar14 & 0x80) == 0) {
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x26));
                  dVar21 = (double)pfVar8[0x15];
                  dVar20 = 0.009999999776482582;
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar8 + 10));
                  fVar14 = (float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408 + dVar21)
                  ;
                  pfVar8[0x15] = fVar14;
                  if (dVar22 <= (double)fVar14) {
                    fVar14 = pfVar8[0x13];
                    pfVar8[0x15] = (float)dVar22;
                    if (((uint)fVar14 & 0x10) == 0) {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 0x80);
                    }
                    else {
                      auVar25 = ZEXT416(0xfffffff8);
                      auVar23 = ZEXT416(0xffffffff);
                      auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
                      auVar23 = loadVectorLeftIndexed(0x68,uVar15);
                      auVar25 = vectorShiftRightWord
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
                      auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
                      auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
                      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
                      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                      auVar25 = vectorAddFloatingPoint
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar24);
                      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
                      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xff;
                      uVar9 = storeVectorElementByteIndexed
                                        (auVar25 | auVar25 << 8 | auVar25 << 0x10 | auVar25 << 0x18
                                         | auVar25 << 0x20 | auVar25 << 0x28 | auVar25 << 0x30 |
                                         auVar25 << 0x38 | auVar25 << 0x40 | auVar25 << 0x48 |
                                         auVar25 << 0x50 | auVar25 << 0x58 | auVar25 << 0x60 |
                                         auVar25 << 0x68 | auVar25 << 0x70 | auVar25 << 0x78,0x7c,
                                         uVar15);
                      *(undefined1 *)(pfVar8 + 0x1f) = uVar9;
                      pfVar8[0x13] = (float)(((uint)fVar14 | 0x20) ^ 0x80);
                    }
                  }
                }
                else {
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x27));
                  dVar20 = 0.009999999776482582;
                  dVar21 = (double)pfVar8[0x15];
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x29));
                  dVar16 = -(double)(float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408
                                           - dVar21);
                  pfVar8[0x15] = (float)dVar16;
                  if (dVar16 <= dVar22) {
                    pfVar8[0x15] = (float)dVar22;
                    if ((((uint)pfVar8[0x13] & 0x40) != 0) && (*(short *)(pfVar8 + 0x1b) == 0)) {
                      pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x80);
                    }
                  }
                }
              }
              else if ((*(char *)(pfVar8 + 0x1a) != '\0') &&
                      (iVar13 = fastfunc::FastDecTimerU8(uVar15 + 0x7c), iVar13 != 0)) {
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x20);
              }
            }
            else if (*(short *)(pfVar8 + 0x1b) == 0) {
              iVar13 = fastfunc::FastDoubleToInt((double)*(byte *)((int)pfVar8 + 0x27));
              dVar20 = 0.009999999776482582;
              dVar16 = (double)(float)((double)(longlong)iVar13 * 0.009999999776482582);
              iVar13 = fastfunc::FastDoubleToInt((double)*(byte *)((int)pfVar8 + 0x26));
              dVar16 = (double)mobyutil::MB_randRangeFloat
                                         ((float)dVar16,(float)((double)(longlong)iVar13 * dVar20));
              pfVar8[0x15] = (float)dVar16;
            }
            if ((*(short *)((int)pfVar8 + 0x6e) != 0) &&
               (iVar13 = fastfunc::FastDecTimerS16(uVar15 + 0x76), iVar13 != 0)) {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              auVar23 = loadVectorLeftIndexed(0x6e,uVar15);
              auVar24 = loadVectorRightIndexed(0x7e,uVar15);
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = ZEXT416(0xfffffff0);
              auVar23 = vectorShiftRightWord
                                  (auVar23 | auVar24,
                                   auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
              auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
              auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorAddFloatingPoint
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = ZEXT416(0xfffffff8);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar23,auVar26);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = vectorSplatHalfWord(auVar23,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar23,0x76,uVar15);
              *(undefined2 *)((int)pfVar8 + 0x76) = uVar10;
              auVar23 = loadVectorLeftIndexed(0x2c,uVar15);
              auVar25 = vectorShiftRightWord
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
              auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar11 = storeVectorElementWordIndexed
                                 (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x58
                                  ,uVar15);
              *(undefined4 *)((uint)(pfVar8 + 0x16) & 0xfffffffc) = uVar11;
              pfVar8[0x13] = (float)((uint)pfVar8[0x13] & 0xfffff7ff);
            }
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x20000) == 0) {
              if ((((uint)fVar14 & 0x200) != 0) && (((uint)fVar14 & 0x100) == 0)) {
                fVar14 = (float)((uint)fVar14 ^ 0x200);
                pfVar8[0x13] = fVar14;
              }
              if (((uint)fVar14 & 0x200) == 0) {
                if (((uint)fVar14 & 0x800) == 0) {
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2b));
                  dVar21 = (double)pfVar8[0x16];
                  dVar20 = 0.009999999776482582;
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2d));
                  fVar14 = (float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408 + dVar21)
                  ;
                  pfVar8[0x16] = fVar14;
                  if (dVar22 <= (double)fVar14) {
                    fVar14 = pfVar8[0x13];
                    pfVar8[0x16] = (float)dVar22;
                    if (((uint)fVar14 & 0x100) == 0) {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 0x800);
                    }
                    else {
                      auVar25 = ZEXT416(0xfffffff8);
                      auVar23 = ZEXT416(0xffffffff);
                      auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
                      auVar23 = loadVectorLeftIndexed(0x69,uVar15);
                      auVar25 = vectorShiftRightWord
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
                      auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
                      auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
                      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
                      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                      auVar25 = vectorAddFloatingPoint
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar24);
                      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
                      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xff;
                      uVar9 = storeVectorElementByteIndexed
                                        (auVar25 | auVar25 << 8 | auVar25 << 0x10 | auVar25 << 0x18
                                         | auVar25 << 0x20 | auVar25 << 0x28 | auVar25 << 0x30 |
                                         auVar25 << 0x38 | auVar25 << 0x40 | auVar25 << 0x48 |
                                         auVar25 << 0x50 | auVar25 << 0x58 | auVar25 << 0x60 |
                                         auVar25 << 0x68 | auVar25 << 0x70 | auVar25 << 0x78,0x7d,
                                         uVar15);
                      *(undefined1 *)((int)pfVar8 + 0x7d) = uVar9;
                      pfVar8[0x13] = (float)(((uint)fVar14 | 0x200) ^ 0x800);
                    }
                  }
                }
                else {
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar8 + 0xb));
                  dVar20 = 0.009999999776482582;
                  dVar21 = (double)pfVar8[0x16];
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2e));
                  dVar16 = -(double)(float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408
                                           - dVar21);
                  pfVar8[0x16] = (float)dVar16;
                  if (dVar16 <= dVar22) {
                    pfVar8[0x16] = (float)dVar22;
                    if ((((uint)pfVar8[0x13] & 0x400) != 0) && (*(short *)((int)pfVar8 + 0x6e) == 0)
                       ) {
                      pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x800);
                    }
                  }
                }
              }
              else if ((*(char *)((int)pfVar8 + 0x69) != '\0') &&
                      (iVar13 = fastfunc::FastDecTimerU8(uVar15 + 0x7d), iVar13 != 0)) {
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x200);
              }
            }
            else if (*(short *)((int)pfVar8 + 0x6e) == 0) {
              iVar13 = fastfunc::FastDoubleToInt((double)*(byte *)(pfVar8 + 0xb));
              dVar20 = 0.009999999776482582;
              dVar16 = (double)(float)((double)(longlong)iVar13 * 0.009999999776482582);
              iVar13 = fastfunc::FastDoubleToInt((double)*(byte *)((int)pfVar8 + 0x2b));
              dVar16 = (double)mobyutil::MB_randRangeFloat
                                         ((float)dVar16,(float)((double)(longlong)iVar13 * dVar20));
              pfVar8[0x16] = (float)dVar16;
            }
            if ((*(short *)(pfVar8 + 0x1c) != 0) &&
               (iVar13 = fastfunc::FastDecTimerS16(uVar15 + 0x78), iVar13 != 0)) {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              auVar23 = loadVectorLeftIndexed(0x70,uVar15);
              auVar24 = loadVectorRightIndexed(0x80,uVar15);
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = ZEXT416(0xfffffff0);
              auVar23 = vectorShiftRightWord
                                  (auVar23 | auVar24,
                                   auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
              auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
              auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorAddFloatingPoint
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = ZEXT416(0xfffffff8);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar23,auVar26);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = vectorSplatHalfWord(auVar23,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar23,0x78,uVar15);
              *(undefined2 *)(pfVar8 + 0x1e) = uVar10;
              auVar23 = loadVectorLeftIndexed(0x31,uVar15);
              auVar25 = vectorShiftRightWord
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
              auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar11 = storeVectorElementWordIndexed
                                 (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x5c
                                  ,uVar15);
              *(undefined4 *)((uint)(pfVar8 + 0x17) & 0xfffffffc) = uVar11;
              pfVar8[0x13] = (float)((uint)pfVar8[0x13] & 0xffff7fff);
            }
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x40000) == 0) {
              if ((((uint)fVar14 & 0x2000) != 0) && (((uint)fVar14 & 0x1000) == 0)) {
                fVar14 = (float)((uint)fVar14 ^ 0x2000);
                pfVar8[0x13] = fVar14;
              }
              if (((uint)fVar14 & 0x2000) == 0) {
                if (((uint)fVar14 & 0x8000) == 0) {
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar8 + 0xc));
                  dVar21 = (double)pfVar8[0x17];
                  dVar20 = 0.009999999776482582;
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x32));
                  fVar14 = (float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408 + dVar21)
                  ;
                  pfVar8[0x17] = fVar14;
                  if (dVar22 <= (double)fVar14) {
                    fVar14 = pfVar8[0x13];
                    pfVar8[0x17] = (float)dVar22;
                    if (((uint)fVar14 & 0x1000) == 0) {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 0x8000);
                    }
                    else {
                      auVar25 = ZEXT416(0xfffffff8);
                      auVar23 = ZEXT416(0xffffffff);
                      auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
                      auVar23 = loadVectorLeftIndexed(0x6a,uVar15);
                      auVar25 = vectorShiftRightWord
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
                      auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
                      auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
                      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
                      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                      auVar25 = vectorAddFloatingPoint
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar24);
                      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
                      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xff;
                      uVar9 = storeVectorElementByteIndexed
                                        (auVar25 | auVar25 << 8 | auVar25 << 0x10 | auVar25 << 0x18
                                         | auVar25 << 0x20 | auVar25 << 0x28 | auVar25 << 0x30 |
                                         auVar25 << 0x38 | auVar25 << 0x40 | auVar25 << 0x48 |
                                         auVar25 << 0x50 | auVar25 << 0x58 | auVar25 << 0x60 |
                                         auVar25 << 0x68 | auVar25 << 0x70 | auVar25 << 0x78,0x7e,
                                         uVar15);
                      *(undefined1 *)((int)pfVar8 + 0x7e) = uVar9;
                      pfVar8[0x13] = (float)(((uint)fVar14 | 0x2000) ^ 0x8000);
                    }
                  }
                }
                else {
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x31));
                  dVar20 = 0.009999999776482582;
                  dVar21 = (double)pfVar8[0x17];
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x33));
                  dVar16 = -(double)(float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408
                                           - dVar21);
                  pfVar8[0x17] = (float)dVar16;
                  if (dVar16 <= dVar22) {
                    pfVar8[0x17] = (float)dVar22;
                    if ((((uint)pfVar8[0x13] & 0x4000) != 0) && (*(short *)(pfVar8 + 0x1c) == 0)) {
                      pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x8000);
                    }
                  }
                }
              }
              else if ((*(char *)((int)pfVar8 + 0x6a) != '\0') &&
                      (iVar13 = fastfunc::FastDecTimerU8(uVar15 + 0x7e), iVar13 != 0)) {
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x2000);
              }
            }
            else if (*(short *)(pfVar8 + 0x1c) == 0) {
              iVar13 = fastfunc::FastDoubleToInt((double)*(byte *)((int)pfVar8 + 0x31));
              dVar20 = 0.009999999776482582;
              dVar16 = (double)(float)((double)(longlong)iVar13 * 0.009999999776482582);
              iVar13 = fastfunc::FastDoubleToInt((double)*(byte *)(pfVar8 + 0xc));
              dVar16 = (double)mobyutil::MB_randRangeFloat
                                         ((float)dVar16,(float)((double)(longlong)iVar13 * dVar20));
              pfVar8[0x17] = (float)dVar16;
            }
            fVar14 = pfVar8[0x14];
            if (fVar14 == -NAN) {
              dVar20 = (double)pfVar8[0x18];
              dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar8 + 9));
              fVar14 = (float)lights::CreatePointLight2
                                        ((float)dVar20,
                                         (double)(float)(dVar16 * 0.009999999776482582),
                                         (double)pfVar8[0x15],(double)pfVar8[0x16],
                                         (double)pfVar8[0x17],(Vec4 *)&moby->pos);
              pfVar8[0x14] = fVar14;
            }
            else {
              PointLights[(int)fVar14].pos.x = (moby->pos).x;
              PointLights[(int)fVar14].pos.y = (moby->pos).y;
              PointLights[(int)fVar14].pos.z = (moby->pos).z;
              PointLights[(int)fVar14].pos.w = (moby->pos).w;
              PointLights[(int)fVar14].pos.w = pfVar8[0x18];
              PointLights[(int)fVar14].color.x = pfVar8[0x15];
              PointLights[(int)fVar14].color.y = pfVar8[0x16];
              PointLights[(int)fVar14].color.z = pfVar8[0x17];
              dVar16 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(pfVar8 + 9));
              PointLights[(int)fVar14].color.w = (float)(dVar16 * 0.009999999776482582);
            }
          }
        }
        else {
          if (pfVar8[0x14] != -NAN) {
            lights::DeletePointLight(pfVar8[0x14]);
            pfVar8[0x14] = -NAN;
          }
          mobyfunc::DeleteMoby(moby);
        }
      }
      else {
        moby->setByGroup = moby->setByGroup + -1;
      }
    }
  }
  return;
}



//==== 003fece0  ns=mobyupdate_unsorted  size=0xfc
// sig: undefined UpdateMoby_641(MobyInstance * moby)
// callers(0): 
// callees(2): 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots

/* Moby 641 */

void mobyupdate_unsorted::UpdateMoby_641(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == 0) {
    piVar1[1] = (int)(moby->rotation).x;
    piVar1[2] = (int)((float)piVar1[2] * 0.017453292);
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (iVar2 = *piVar1, iVar2 != -1)) &&
          (MobyInstance[iVar2].oClass == BOLT_CRANK)) {
    pfVar3 = (float *)MobyInstance[iVar2].pVar;
    MobyInstance[iVar2].updateDistance = -1;
    dVar5 = (double)(float)piVar1[1];
    dVar4 = (double)fastfunc::FastWrapRot((float)piVar1[2],(float)-dVar5);
    dVar4 = (double)fastfunc::FastAddRots((float)(dVar4 * (double)*pfVar3));
    dVar4 = (double)fastfunc::FastWrapRot((float)dVar5,(float)dVar4);
    (moby->rotation).x = (float)dVar4;
  }
  return;
}



//==== 003fee50  ns=mobyupdate_unsorted  size=0xb0c
// sig: undefined UpdateMoby_642(MobyInstance * moby)
// callers(0): 
// callees(8): 00057820 collproc::CollLine; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

/* Moby 642 */

void mobyupdate_unsorted::UpdateMoby_642(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  double dVar23;
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  
  dVar19 = -1.0;
  dVar20 = 1.0;
  dVar23 = 0.0;
  pfVar6 = (float *)moby->pVar;
  dVar13 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
  dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
  dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
  fVar11 = (moby->pos).x;
  bVar3 = moby->state;
  dVar22 = (double)SQRT(*pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1]);
  if (bVar3 == 0) {
    pfVar6[0xc] = fVar11;
    pfVar6[0xd] = (moby->pos).y;
    pfVar6[0xe] = (moby->pos).z;
    pfVar6[0xf] = (moby->pos).w;
    fVar11 = (float)mobyutil::MB_randRange(0x78,0x960);
    pfVar6[0x11] = fVar11;
    pfVar6[0x10] = fVar11;
    dVar13 = (double)mobyutil::MB_randRangeFloat(0.8,1.2);
    pfVar6[0x13] = (float)((double)moby->scale * dVar13);
    moby->scale = 0.0;
    moby->state = '\x01';
  }
  else if (bVar3 < 2) {
    fVar1 = (moby->pos).y - GameCamera.posY;
    fVar11 = fVar11 - GameCamera.posX;
    if ((SQRT(fVar11 * fVar11 + fVar1 * fVar1) < 32.0) &&
       (iVar12 = fastfunc::FastDecTimerS32(pfVar6 + 0x11), iVar12 != 0)) {
      dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
      dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
      dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
      fVar2 = DAT_00e5aef4;
      fVar11 = DAT_00e5aee4 + 1.5707963;
      dVar19 = (double)SQRT((float)(dVar15 * dVar15 +
                                   (double)(float)(dVar13 * dVar13 +
                                                  (double)(float)(dVar14 * dVar14))));
      pfVar6 = (float *)moby->pVar;
      fVar1 = 3.1415925 - fVar11;
      if (fVar11 - (3.1415925 - fVar11) < 0.0) {
        fVar1 = fVar11;
      }
      fVar4 = -3.1415925 - fVar11;
      if ((-3.1415925 - fVar11) - fVar1 < 0.0) {
        fVar4 = fVar1;
      }
      dVar22 = (double)(float)((double)(DAT_00e5aef4 * 0.2) / dVar19);
      fVar11 = fVar4 * fVar4;
      dVar20 = dVar23;
      if (dVar23 - dVar19 < 0.0) {
        dVar20 = (double)(float)(dVar14 * dVar22);
      }
      dVar17 = dVar23;
      if (dVar23 - dVar19 < 0.0) {
        dVar17 = (double)(float)(dVar13 * dVar22);
      }
      dVar21 = dVar23;
      if (dVar23 - dVar19 < 0.0) {
        dVar21 = (double)(float)(dVar15 * dVar22);
      }
      if (dVar19 - dVar23 < 0.0) {
        dVar20 = (double)(float)(dVar14 * dVar22);
      }
      if (dVar19 - dVar23 < 0.0) {
        dVar17 = (double)(float)(dVar13 * dVar22);
      }
      if (dVar19 - dVar23 < 0.0) {
        dVar21 = (double)(float)(dVar15 * dVar22);
      }
      fVar1 = fVar11 * fVar11 * fVar4;
      moby->scale = 0.0;
      moby->drawDistance = 0x40;
      moby->updateDistance = -1;
      fVar5 = fVar11 * fVar1;
      dVar13 = (double)SQRT((float)(dVar21 * dVar21 +
                                   (double)(float)(dVar17 * dVar17 +
                                                  (double)(float)(dVar20 * dVar20))));
      *pfVar6 = fVar2 * (fVar11 * fVar5 * 2.601887e-06 +
                        fVar5 * -0.0001980741 +
                        fVar1 * 0.0083330255 + fVar11 * fVar4 * -0.16666657 + fVar4);
      fVar1 = DAT_00e5aef4;
      fVar11 = 3.1415925 - DAT_00e5aee4;
      if (DAT_00e5aee4 - (3.1415925 - DAT_00e5aee4) < 0.0) {
        fVar11 = DAT_00e5aee4;
      }
      dVar14 = (double)(float)(3.1415927410125732 / dVar13);
      fVar2 = -3.1415925 - DAT_00e5aee4;
      if ((-3.1415925 - DAT_00e5aee4) - fVar11 < 0.0) {
        fVar2 = fVar11;
      }
      fVar11 = fVar2 * fVar2;
      fVar4 = fVar11 * fVar11 * fVar2;
      fVar5 = fVar11 * fVar4;
      pfVar6[2] = mobyutil::g_FrameTime * -0.5;
      dVar15 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar15 = (double)(float)(dVar17 * dVar14);
      }
      dVar19 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar14);
      }
      dVar22 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar14);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar15 = (double)(float)(dVar17 * dVar14);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar14);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar14);
      }
      pfVar6[1] = fVar1 * (fVar11 * fVar5 * 2.601887e-06 +
                          fVar5 * -0.0001980741 +
                          fVar4 * 0.0083330255 + fVar11 * fVar2 * -0.16666657 + fVar2);
      (moby->rotation).x = (float)dVar15;
      (moby->rotation).y = (float)dVar19;
      (moby->rotation).z = (float)dVar22;
      (moby->rotation).w = 0.0;
      dVar15 = (double)(float)(0.09817477315664291 / dVar13);
      pfVar6[0xb] = 0.0;
      dVar14 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar14 = (double)(float)(dVar17 * dVar15);
      }
      dVar19 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar15);
      }
      dVar22 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar14 = (double)(float)(dVar17 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar15);
      }
      pfVar6[8] = (float)dVar14;
      pfVar6[9] = (float)dVar19;
      pfVar6[10] = (float)dVar22;
      fVar11 = DAT_00e5aef4 * 0.5;
      pfVar6[7] = 0.0;
      dVar15 = (double)(float)((double)fVar11 / dVar13);
      dVar14 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar14 = (double)(float)(dVar17 * dVar15);
      }
      dVar19 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar15);
      }
      dVar22 = dVar23;
      if (dVar23 - dVar13 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar14 = (double)(float)(dVar17 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar19 = (double)(float)(dVar20 * dVar15);
      }
      if (dVar13 - dVar23 < 0.0) {
        dVar22 = (double)(float)(dVar21 * dVar15);
      }
      pfVar6[4] = (float)dVar14;
      pfVar6[5] = (float)dVar19;
      pfVar6[6] = (float)dVar22;
      fVar11 = (float)mobyutil::MB_randRange(0x2d0,0x4b0);
      pfVar6[0x11] = fVar11;
      pfVar6[0x10] = fVar11;
      moby->state = '\x02';
    }
  }
  else if (bVar3 < 3) {
    fastfunc::FastDecTimerS32(pfVar6 + 0x11);
    dVar21 = 0.10000000149011612;
    dVar20 = (double)SQRT((float)(dVar15 * dVar15 +
                                 (double)(float)(dVar13 * dVar13 + (double)(float)(dVar14 * dVar14))
                                 ));
    dVar17 = (double)(float)((double)(DAT_00e5aef4 * 0.1) / dVar20);
    dVar19 = dVar23;
    if (dVar23 - dVar20 < 0.0) {
      dVar19 = (double)(float)(dVar14 * dVar17);
    }
    dVar18 = dVar23;
    if (dVar23 - dVar20 < 0.0) {
      dVar18 = (double)(float)(dVar13 * dVar17);
    }
    dVar16 = dVar23;
    if (dVar23 - dVar20 < 0.0) {
      dVar16 = (double)(float)(dVar15 * dVar17);
    }
    if (dVar20 - dVar23 < 0.0) {
      dVar19 = (double)(float)(dVar14 * dVar17);
    }
    if (dVar20 - dVar23 < 0.0) {
      dVar18 = (double)(float)(dVar13 * dVar17);
    }
    if (dVar20 - dVar23 < 0.0) {
      dVar16 = (double)(float)(dVar15 * dVar17);
    }
    fVar11 = (float)((double)pfVar6[5] + dVar19);
    fVar1 = (float)((double)pfVar6[4] + dVar18);
    fVar2 = (float)((double)pfVar6[6] + dVar16);
    pfVar6[4] = fVar1;
    pfVar6[5] = fVar11;
    pfVar6[6] = fVar2;
    if ((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar11 * fVar11) == dVar23) {
      fVar11 = pfVar6[7];
    }
    else {
      fVar11 = pfVar6[7];
    }
    fVar2 = pfVar6[5];
    fVar4 = pfVar6[4];
    fVar5 = pfVar6[6];
    dVar14 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
    fVar1 = (float)((double)(DAT_00e5aef4 * 0.5) / dVar14);
    dVar13 = dVar23;
    if (dVar23 - dVar14 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    dVar15 = dVar23;
    if (dVar23 - dVar14 < 0.0) {
      dVar15 = (double)(fVar2 * fVar1);
    }
    dVar19 = dVar23;
    if (dVar23 - dVar14 < 0.0) {
      dVar19 = (double)(fVar5 * fVar1);
    }
    if (dVar14 - dVar23 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    if (dVar14 - dVar23 < 0.0) {
      dVar15 = (double)(fVar2 * fVar1);
    }
    if (dVar14 - dVar23 < 0.0) {
      dVar19 = (double)(fVar5 * fVar1);
    }
    pfVar6[4] = (float)dVar13;
    pfVar6[5] = (float)dVar15;
    pfVar6[6] = (float)dVar19;
    iVar12 = collproc::CollLine(local_80,local_70,6,0,0);
    if ((iVar12 != 0) && (iVar12 = mobyutil::MB_randInt(8), iVar12 == 0)) {
      fastfunc::FastVecNormalize(pfVar6 + 4,pfVar6 + 4,0xa10980);
      pfVar6[6] = (float)((double)DAT_00e5aef4 * dVar21 + (double)pfVar6[6]);
    }
    *pfVar6 = *pfVar6 + pfVar6[4];
    pfVar6[1] = pfVar6[1] + pfVar6[5];
    pfVar6[2] = pfVar6[2] + pfVar6[6];
    fVar1 = DAT_00e5aee4 + 1.5707963;
    fVar2 = 3.1415925 - DAT_00e5aee4;
    if (DAT_00e5aee4 - (3.1415925 - DAT_00e5aee4) < 0.0) {
      fVar2 = DAT_00e5aee4;
    }
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar5 = -3.1415925 - DAT_00e5aee4;
    if ((-3.1415925 - DAT_00e5aee4) - fVar2 < 0.0) {
      fVar5 = fVar2;
    }
    fVar2 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar2 = fVar4;
    }
    fVar1 = fVar5 * fVar5;
    fVar4 = fVar2 * fVar2;
    fVar9 = fVar1 * fVar1 * fVar5;
    fVar7 = fVar4 * fVar4 * fVar2;
    fVar10 = fVar1 * fVar9;
    fVar8 = fVar4 * fVar7;
    fVar5 = DAT_00e5aef4 *
            (fVar1 * fVar10 * 2.601887e-06 +
            fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5);
    fVar7 = DAT_00e5aef4 *
            (fVar4 * fVar8 * 2.601887e-06 +
            fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2);
    dVar13 = -0.5;
    fVar8 = mobyutil::g_FrameTime * -0.5;
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    fVar4 = pfVar6[2];
    *pfVar6 = fVar1 * 0.6;
    pfVar6[1] = fVar2 * 0.6;
    pfVar6[2] = fVar4 * 0.6;
    fVar1 = fVar7 * 0.4 + fVar1 * 0.6;
    *pfVar6 = fVar1;
    pfVar6[1] = fVar5 * 0.4 + fVar2 * 0.6;
    pfVar6[2] = fVar8 * 0.4 + fVar4 * 0.6;
    pfVar6[3] = fVar11;
    (moby->pos).x = (moby->pos).x + fVar1;
    (moby->pos).y = (moby->pos).y + pfVar6[1];
    (moby->pos).z = (moby->pos).z + pfVar6[2];
    iVar12 = collproc::CollLine(local_80,(longlong)(int)moby + 0x10,6,0,0);
    fVar11 = pfVar6[2];
    if (iVar12 != 0) {
      (moby->pos).x = CollOutput.ip.x;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      fastfunc::FastVecNormalize(pfVar6,pfVar6,0xa10980);
      fVar11 = *pfVar6;
      pfVar6[1] = pfVar6[1] * 0.25;
      *pfVar6 = fVar11 * 0.25;
      pfVar6[2] = pfVar6[2] * 0.25;
      (moby->pos).x = (moby->pos).x + fVar11 * 0.25;
      (moby->pos).y = (moby->pos).y + pfVar6[1];
      (moby->pos).z = (moby->pos).z + pfVar6[2];
      fVar11 = DAT_00e5aef4 * 0.2 + pfVar6[2];
      pfVar6[2] = fVar11;
    }
    dVar14 = (double)fVar11;
    if ((double)DAT_00e5aef4 < dVar22) {
      dVar20 = (double)pfVar6[1];
      dVar17 = (double)*pfVar6;
      dVar18 = (double)SQRT((float)(dVar14 * dVar14 +
                                   (double)(float)(dVar17 * dVar17 +
                                                  (double)(float)(dVar20 * dVar20))));
      dVar22 = (double)(float)((double)DAT_00e5aef4 / dVar18);
      dVar15 = dVar14 * dVar22;
      dVar19 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar19 = (double)(float)(dVar17 * dVar22);
      }
      dVar16 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar16 = (double)(float)(dVar20 * dVar22);
      }
      dVar14 = dVar23;
      if (dVar23 - dVar18 < 0.0) {
        dVar14 = (double)(float)dVar15;
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar19 = (double)(float)(dVar17 * dVar22);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar16 = (double)(float)(dVar20 * dVar22);
      }
      if (dVar18 - dVar23 < 0.0) {
        dVar14 = (double)(float)dVar15;
      }
      *pfVar6 = (float)dVar19;
      pfVar6[1] = (float)dVar16;
    }
    dVar13 = (double)(float)((double)mobyutil::g_FrameTime * dVar13);
    if (dVar13 - dVar14 < 0.0) {
      dVar13 = (double)(float)(dVar13 * dVar21 + dVar14);
    }
    pfVar6[2] = (float)dVar13;
    dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar6[8]);
    (moby->rotation).x = (float)dVar13;
    dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar6[9]);
    (moby->rotation).y = (float)dVar13;
    dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar6[10]);
    (moby->rotation).z = (float)dVar13;
    fVar11 = pfVar6[0x11];
    if ((int)pfVar6[0x10] - (int)(animationSpeed * 10.5) < (int)fVar11) {
      dVar13 = (double)fastfunc::FastIntToDouble((int)fVar11 - (int)pfVar6[0x10]);
      fVar11 = (float)((double)pfVar6[0x13] * dVar13) / (animationSpeed * 10.0);
    }
    else if ((int)fVar11 < (int)(animationSpeed * 100.5)) {
      fVar11 = moby->scale * 0.99;
    }
    else {
      fVar11 = pfVar6[0x13];
    }
    moby->scale = fVar11;
    if ((int)pfVar6[0x11] < 1) {
      (moby->pos).x = pfVar6[0xc];
      (moby->pos).y = pfVar6[0xd];
      (moby->pos).z = pfVar6[0xe];
      (moby->pos).w = pfVar6[0xf];
      fVar11 = (float)mobyutil::MB_randRange(0x78,0x960);
      pfVar6[0x11] = fVar11;
      pfVar6[0x10] = fVar11;
      moby->scale = 0.0;
      moby->state = '\x01';
    }
  }
  return;
}



//==== 003ff9c0  ns=mobyupdate_unsorted  size=0x5d0
// sig: undefined UpdateMoby_643(MobyInstance * moby)
// callers(0): 
// callees(13): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00656ec4: '*Error: Moby 28(Footsoldier) with no flyPath. UID: %d - RAR\n' | 00656f04: '*Error: Moby 28(Footsoldier) with a fly path that has no points. UID: %d - RAR\n' | 008546f0: '=VwP' (raw)

/* Moby 643 */

void mobyupdate_unsorted::UpdateMoby_643(MobyInstance *moby)

{
  undefined4 uVar1;
  void *pvVar2;
  Spline *pSVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined4 *unused;
  Spline *pSVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  float fVar17;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_60 [16];
  int local_50 [4];
  
  lVar6 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  uVar11 = ZEXT48(pvVar2);
  if (moby->state == 0) {
    if (*(int *)((int)pvVar2 + 0x60) == -1) {
      libc::printf("*Error: Moby 28(Footsoldier) with no flyPath. UID: %d - RAR\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
    }
    else {
      pSVar3 = Splines[*(int *)((int)pvVar2 + 0x60)];
      iVar8 = pSVar3->cnt;
      if (iVar8 == 0) {
        libc::printf("*Error: Moby 28(Footsoldier) with a fly path that has no points. UID: %d - RAR\n"
                     ,moby->uid);
        mobyfunc::DeleteMoby(moby);
      }
      else {
        iVar9 = 0;
        pSVar10 = pSVar3;
        if (0 < iVar8) {
          do {
            iVar9 = iVar9 + 1;
            pfVar7 = (float *)((int)pSVar3 + ((iVar9 - (iVar9 / iVar8) * iVar8) * 4 + 4) * 4);
            fVar17 = pSVar10->points[0].y - pfVar7[1];
            fVar4 = pSVar10->points[0].x - *pfVar7;
            fVar5 = pSVar10->points[0].z - pfVar7[2];
            pSVar10->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar17 * fVar17);
            iVar8 = pSVar3->cnt;
            pSVar10 = (Spline *)pSVar10->points;
          } while (iVar9 < iVar8);
        }
        *(undefined4 *)((int)pvVar2 + 100) = 0;
        uVar15 = 0;
        *(undefined4 *)((int)pvVar2 + 0x68) = 0;
        iVar8 = mobyutil::MB_randInt(2);
        uVar1 = 0xbf800000;
        if (iVar8 != 0) {
          uVar1 = 0x3f800000;
        }
        *(undefined4 *)((int)pvVar2 + 0x6c) = uVar1;
        (moby->pos).x = pSVar3->points[0].x;
        (moby->pos).y = pSVar3->points[0].y;
        (moby->pos).z = pSVar3->points[0].z;
        fVar17 = pSVar3->points[0].w;
        moby->state = '\x01';
        (moby->pos).w = fVar17;
        dVar12 = (double)mobyutil::MB_randRangeFloat(0.05235988,0.10471976);
        *(float *)((int)pvVar2 + 0x80) = (float)dVar12;
        dVar14 = 0.03490658476948738;
        dVar12 = (double)mobyutil::MB_randRangeFloat(0.034906585,0.06981317);
        *(float *)((int)pvVar2 + 0x84) = (float)dVar12;
        dVar12 = (double)mobyutil::MB_randRangeFloat(0.017453292,(float)dVar14);
        *(float *)((int)pvVar2 + 0x88) = (float)dVar12;
        *(undefined4 *)((int)pvVar2 + 0x7c) = 0;
        *(undefined4 *)((int)pvVar2 + 0x78) = 0;
        *(undefined4 *)((int)pvVar2 + 0x74) = 0;
        *(undefined4 *)((int)pvVar2 + 0x70) = 0;
        dVar12 = (double)mobyutil::MB_randRangeSigned(uVar15,0x400921fb60000000);
        *(float *)((int)pvVar2 + 0x7c) = (float)dVar12;
      }
    }
  }
  else if (moby->state < 2) {
    mobyutil::MB_PathMoveDist
              ((double)(mobyutil::g_FrameTime * DAT_008546ec * *(float *)((int)pvVar2 + 0x6c)),
               Splines[*(int *)((int)pvVar2 + 0x60)],&local_70,uVar11 + 100,uVar11 + 0x68,Splines,1)
    ;
    unused = &DAT_003ff960;
    dVar14 = 0.019999999552965164;
    dVar12 = 0.20000000298023224;
    dVar16 = 0.0;
    mobyutil::AccelDelt(local_70,0.02,0.2,0.0,&(moby->pos).x,0x3ff960,(float *)((int)pvVar2 + 0x70))
    ;
    mobyutil::AccelDelt(local_6c,(float)dVar14,(float)dVar12,(float)dVar16,&(moby->pos).y,
                        (int)unused,(float *)((int)pvVar2 + 0x74));
    fVar17 = mobyutil::AccelDelt(local_68,(float)dVar14,(float)dVar12,(float)dVar16,&(moby->pos).z,
                                 (int)unused,(float *)((int)pvVar2 + 0x78));
    iVar8 = mobyutil::MB_damage((double)fVar17,lVar6,0x230000,0);
    mobyutil::MB_HandleDamage(moby,iVar8,uVar11 + 0x20,0,local_50,0,0,4);
    if ((((local_50[0] < 2) || (iVar8 == 0)) || (*(short *)(*(int *)(iVar8 + 0x20) + 0xa6) == 0x283)
        ) && (DAT_00969f1c != moby)) {
      dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).x,*(float *)((int)pvVar2 + 0x80));
      (moby->rotation).x = (float)dVar12;
      dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar2 + 0x84));
      (moby->rotation).y = (float)dVar12;
      dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar2 + 0x88));
      (moby->rotation).z = (float)dVar12;
      dVar14 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar2 + 0x7c),DAT_008546f0);
      dVar12 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar12 = dVar14;
      }
      dVar16 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar12 < 0.0) {
        dVar16 = dVar12;
      }
      *(float *)((int)pvVar2 + 0x7c) = (float)dVar14;
      dVar14 = (double)(float)(dVar16 * dVar16);
      dVar13 = (double)(float)(dVar14 * (double)(float)(dVar14 * dVar16));
      dVar12 = (double)(float)(dVar14 * dVar13);
      dVar12 = (double)((float)(dVar14 * dVar12) * 2.601887e-06 +
                       (float)(dVar12 * -0.0001980741071747616 +
                              (double)(float)(dVar13 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar14 * dVar16) *
                                                             -0.16666656732559204 + dVar16))));
      iVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * 48.0));
      uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * 32.0));
      moby->field60_0x90 =
           (int)((uVar11 & 0xffffffff) << 8) + 0x3000U | iVar8 + 0xcfU |
           (int)((uVar11 & 0xffffffff) << 0x10) + 0x300000U | 0xff000000;
    }
    else {
      sound::PlayMobySound(0,0,moby);
      if (DAT_00969f1c == moby) {
        mobyutil::MB_genericExplosion
                  (0x4008000000000000,0x3ff0000000000000,0x4008000000000000,0x4014000000000000,
                   0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar6,local_60,
                   lVar6 + 0x10,1,0xffffffffffffffff,10,0x14,0x3c);
      }
      else {
        mobyutil::MB_genericExplosion
                  (dVar16,dVar16,0x4008000000000000,0x4014000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar6,local_60,lVar6 + 0x10,
                   0xffffffffffffffff,0,10,0x14,0x3c);
      }
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 003fff90  ns=mobyupdate_helpers  size=0x14
// sig: undefined M644_003fff90(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M644_003fff90(void)

{
  DAT_00854740 = 0x10000;
  return;
}



//==== 003fffb8  ns=mobyupdate_unsorted  size=0x6a8
// sig: undefined UpdateMoby_644(MobyInstance * moby)
// callers(0): 
// callees(11): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007b310 help::Help_QueueMessage; 000a0c38 hero::Hero_Warp; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 644 */

void mobyupdate_unsorted::UpdateMoby_644(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float local_b0 [3];
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80 [3];
  undefined4 local_74;
  float local_70 [3];
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40 [3];
  undefined4 local_34;
  float local_30 [3];
  undefined4 local_24;
  
  uVar1 = moby->state;
  pfVar3 = (float *)moby->pVar;
  if (uVar1 == '\x05') {
    if ((int)pfVar3[0x1b] < 1) {
      moby->state = '\x01';
    }
    else {
      mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,pfVar3 + 0x1b);
      boot::SceneScreenFade = pfVar3[0x1b];
    }
  }
  else if (uVar1 == '\x04') {
    iVar5 = fastfunc::FastDecTimerS32(pfVar3 + 0x1d);
    if (iVar5 != 0) {
      mobyutil::OrganicDelt
                (1.0,pfVar3[0x1a],pfVar3[0x1a],pfVar3[0x1c],pfVar3 + 0x18,0x3fffa8,pfVar3 + 0x19);
    }
    fVar2 = pfVar3[0x18];
    local_54 = pfVar3[7];
    local_60 = fVar2 * (pfVar3[4] - *pfVar3) + *pfVar3;
    local_5c = fVar2 * (pfVar3[5] - pfVar3[1]) + pfVar3[1];
    local_58 = fVar2 * (pfVar3[6] - pfVar3[2]) + pfVar3[2];
    dVar7 = 0.0;
    local_44 = 0;
    local_48 = 0.0;
    local_4c = 0.0;
    local_50 = 0.0;
    dVar6 = (double)fastfunc::FastDiffRots((double)pfVar3[0xd],(double)pfVar3[9]);
    local_4c = (float)(dVar6 * (double)pfVar3[0x18]);
    dVar6 = (double)fastfunc::FastWrapRot(pfVar3[9],local_4c);
    local_4c = (float)dVar6;
    dVar6 = (double)fastfunc::FastDiffRots((double)pfVar3[0xe],(double)pfVar3[10]);
    local_48 = (float)(dVar6 * (double)pfVar3[0x18]);
    dVar6 = (double)fastfunc::FastWrapRot(pfVar3[10],local_48);
    local_48 = (float)dVar6;
    camera::camera5::Camera_SetMobyDrivenTargetPos(&local_60);
    camera::camera5::Camera_SetMobyDrivenTargetRot(&local_50);
    uVar4 = (int)pfVar3[0x18] >> 0x1f;
    iVar5 = (uVar4 >> 1 ^ (uint)pfVar3[0x18]) - uVar4;
    if ((iVar5 < 0x3f800000) &&
       (((iVar5 < 0x3e4cccce || (help::g_HelpState != 0)) || (help::g_HelpCurId != -1)))) {
      if (g_heroState == MOVEMENT_LOCKED) {
        mobyutil::Delt((float)dVar7,mobyutil::g_FrameTime * 4.0,pfVar3 + 0x1b);
        boot::SceneScreenFade = pfVar3[0x1b];
      }
      else {
        local_24 = 0;
        local_30[1] = 0.0;
        local_30[0] = 0.0;
        local_30[2] = pfVar3[0x13];
        hero::Hero_Warp(pfVar3 + 0x10,local_30,0x72,1);
      }
    }
    else {
      mobyutil::Delt(1.0,mobyutil::g_FrameTime * 4.0,pfVar3 + 0x1b);
      boot::SceneScreenFade = pfVar3[0x1b];
      uVar4 = (int)pfVar3[0x1b] >> 0x1f;
      if (0x3f7fffff < (int)((uVar4 >> 1 ^ (uint)pfVar3[0x1b]) - uVar4)) {
        draw::LetterBoxOn = 0;
        pfVar3[0x18] = 1.0;
        local_34 = 0;
        local_40[1] = 0.0;
        local_40[0] = 0.0;
        local_40[2] = pfVar3[0x13];
        hero::Hero_Warp(pfVar3 + 0x10,local_40,0,0);
        camera::camera5::Camera_DeactivateMobyDrivenCam(3);
        moby->state = '\x05';
      }
    }
  }
  else if (uVar1 == '\x03') {
    DAT_00a1bfe8 = 1;
    iVar5 = fastfunc::FastDecTimerS32(pfVar3 + 0x1d);
    if (iVar5 != 0) {
      mobyutil::OrganicDelt
                (1.0,pfVar3[0x1a],pfVar3[0x1a],pfVar3[0x1c],pfVar3 + 0x18,0x3fffa8,pfVar3 + 0x19);
    }
    fVar2 = pfVar3[0x18];
    local_94 = pfVar3[7];
    local_a0 = fVar2 * (pfVar3[4] - *pfVar3) + *pfVar3;
    local_9c = fVar2 * (pfVar3[5] - pfVar3[1]) + pfVar3[1];
    local_98 = fVar2 * (pfVar3[6] - pfVar3[2]) + pfVar3[2];
    dVar7 = 0.0;
    local_84 = 0;
    local_88 = 0.0;
    local_8c = 0.0;
    local_90 = 0.0;
    dVar6 = (double)fastfunc::FastDiffRots((double)pfVar3[0xd],(double)pfVar3[9]);
    local_8c = (float)(dVar6 * (double)pfVar3[0x18]);
    dVar6 = (double)fastfunc::FastWrapRot(pfVar3[9],local_8c);
    local_8c = (float)dVar6;
    dVar6 = (double)fastfunc::FastDiffRots((double)pfVar3[0xe],(double)pfVar3[10]);
    local_88 = (float)(dVar6 * (double)pfVar3[0x18]);
    dVar6 = (double)fastfunc::FastWrapRot(pfVar3[10],local_88);
    local_88 = (float)dVar6;
    camera::camera5::Camera_SetMobyDrivenTargetPos(&local_a0);
    camera::camera5::Camera_SetMobyDrivenTargetRot(&local_90);
    mobyutil::Delt((float)dVar7,mobyutil::g_FrameTime * 4.0,pfVar3 + 0x1b);
    boot::SceneScreenFade = pfVar3[0x1b];
    uVar4 = (int)pfVar3[0x18] >> 0x1f;
    if ((int)((uVar4 >> 1 ^ (uint)pfVar3[0x18]) - uVar4) < 0x3f800000) {
      if (g_heroState != MOVEMENT_LOCKED) {
        local_64 = 0;
        local_70[1] = 0.0;
        local_70[0] = 0.0;
        local_70[2] = pfVar3[0x13];
        hero::Hero_Warp(pfVar3 + 0x10,local_70,0x72,1);
      }
    }
    else {
      local_74 = 0;
      local_80[1] = 0.0;
      local_80[0] = 0.0;
      draw::LetterBoxOn = 0;
      local_80[2] = pfVar3[0x13];
      hero::Hero_Warp(pfVar3 + 0x10,local_80,0,0);
      camera::camera5::Camera_DeactivateMobyDrivenCam(2);
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x02') {
    DAT_00a1bfe8 = 1;
    mobyutil::Delt(1.0,mobyutil::g_FrameTime * 4.0,pfVar3 + 0x1b);
    uVar4 = (int)pfVar3[0x1b] >> 0x1f;
    iVar5 = (uVar4 >> 1 ^ (uint)pfVar3[0x1b]) - uVar4;
    if ((int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^ (uint)boot::SceneScreenFade) -
             ((int)boot::SceneScreenFade >> 0x1f)) < iVar5) {
      boot::SceneScreenFade = pfVar3[0x1b];
    }
    if (0x3f7fffff < iVar5) {
      local_a4 = 0;
      local_b0[1] = 0.0;
      draw::LetterBoxOn = 1;
      local_b0[0] = 0.0;
      local_b0[2] = pfVar3[0x13];
      hero::Hero_Warp(pfVar3 + 0x10,local_b0,0x72,1);
      camera::SetCameraPosition(pfVar3,pfVar3 + 8,1,0,0);
      if (pfVar3[0x1e] == 1.4013e-45) {
        help::Help_QueueMessage(STR_POWER_SLAM_THAT_BUTTON_0x4650,0x85);
        moby->state = '\x04';
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  return;
}



