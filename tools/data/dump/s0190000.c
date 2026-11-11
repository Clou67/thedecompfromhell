//==== 001907cc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1031_001907cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1031_001907cc(void)

{
  DAT_0073fd44 = 0x10000;
  return;
}



//==== 001907f0  ns=mobyupdate_unsorted  size=0x348
// sig: undefined UpdateMoby_1031(MobyInstance * moby)
// callers(0): 
// callees(5): 0005e598 collproc::CollMobySphere; 000f1ec8 mobyfunc::SetColorOfMoby; 000ffb70 mobyutil::GetGroundZ; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1031 */

void mobyupdate_unsorted::UpdateMoby_1031(MobyInstance *moby)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  MobyInstance *pMoby;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  piVar1 = (int *)moby->pVar;
  uVar7 = ZEXT48(piVar1);
  bVar3 = false;
  if (*piVar1 == -1) {
    mobyfunc::SetColorOfMoby(moby,8,8,8);
    return;
  }
  pMoby = MobyInstance + *piVar1;
  iVar4 = collproc::CollMobySphere
                    (0x3ff0000000000000,(longlong)(int)moby + 0x10,&DAT_001907e0,0,
                     (longlong)(int)moby,0);
  if ((iVar4 != 0) && (iVar5 = 0, 0 < iVar4)) {
    puVar6 = &DAT_00a14a00;
    uVar9 = 0x3fe0000000000000;
    dVar10 = 0.10000000149011612;
    bVar3 = false;
    do {
      dVar8 = (double)mobyutil::GetGroundZ(uVar9,(ulonglong)*puVar6 + 0x10,0);
      if (((CollOutput.pMoby == moby) &&
          (ABS((double)(float)(dVar8 - (double)*(float *)(*puVar6 + 0x18))) < dVar10)) &&
         (*(short *)(*puVar6 + 0xa6) != 0x3ef)) {
        bVar3 = true;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < iVar4);
  }
  fastfunc::FastDecTimerS32(uVar7 + 0x10);
  if ((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) || (bVar3)) {
    if (piVar1[1] != -1) {
      *(undefined4 *)((int)MobyInstance[piVar1[1]].pVar + 0xc) = 1;
      goto LAB_001909b8;
    }
  }
  else if (piVar1[3] == 0) {
    if ((pMoby->state == '\x04') && (pMoby->state = '\x01', piVar1[4] == 0)) {
      sound::PlayMobySound(1,0,pMoby);
      sound::PlayMobySound(0,0,moby);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = loadVectorLeftIndexed(0xc,0x1907e0);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = vectorMultiplyAddFloatingPoint
                          (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                           auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x10,uVar7);
      *(undefined4 *)((uint)(piVar1 + 4) & 0xfffffffc) = uVar2;
    }
    mobyfunc::SetColorOfMoby(moby,8,8,8);
    return;
  }
  piVar1[3] = 0;
LAB_001909b8:
  if (((pMoby->state == '\x01') || (pMoby->state == '\x02')) &&
     (pMoby->state = '\x03', piVar1[4] == 0)) {
    sound::PlayMobySound(0,0,pMoby);
    sound::PlayMobySound(0,0,moby);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(0xc,0x1907e0);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x10,uVar7);
    *(undefined4 *)((uint)(piVar1 + 4) & 0xfffffffc) = uVar2;
  }
  mobyfunc::SetColorOfMoby(moby,0x7f,0x7f,0x7f);
  return;
}



//==== 00190b38  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1032_00190b38(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1032_00190b38(void)

{
  DAT_0073fdbc = 0x10000;
  return;
}



//==== 00190b58  ns=mobyupdate_helpers  size=0x74
// sig: undefined M1032_00190b58(void)
// callers(0): 
// callees(1): 00109af0 mobyutil::Delt

bool mobyupdate_helpers::M1032_00190b58(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::Delt(0.0,mobyutil::g_FrameTime * 6.0,(float *)(iVar1 + 0x104));
  boot::SceneScreenFade = *(float *)(iVar1 + 0x104);
  return *(int *)(iVar1 + 0x104) < 1;
}



//==== 00190bd8  ns=mobyupdate_helpers  size=0x90
// sig: undefined M1032_00190bd8(void)
// callers(0): 
// callees(1): 00109af0 mobyutil::Delt

bool mobyupdate_helpers::M1032_00190bd8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::Delt(1.0,mobyutil::g_FrameTime * 6.0,(float *)(iVar1 + 0x104));
  uVar2 = (int)*(uint *)(iVar1 + 0x104) >> 0x1f;
  boot::SceneScreenFade = *(float *)(iVar1 + 0x104);
  return 0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x104)) - uVar2);
}



//==== 00190c70  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M1032_00190c70(void)
// callers(0): 
// callees(1): 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M1032_00190c70(int param_1)

{
  float fVar1;
  int iVar2;
  Spline *pSVar3;
  float fVar4;
  
  fVar4 = DAT_0073fde0;
  iVar2 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(*(int *)(param_1 + 0x24) + 0x24);
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(float *)(param_1 + 0x2c) = fVar1 * fVar4;
  *(undefined4 *)(iVar2 + 0xf8) = 0x437f0000;
  pSVar3 = Splines[*(int *)(iVar2 + 0xc0)];
  mobyutil::MB_getTargetInArea
            (0x406fe00000000000,param_1,iVar2 + 0x70,pSVar3,0,0,pSVar3->points,pSVar3->cnt);
  if (*(int *)(iVar2 + 0xb0) == 0) {
    *(MobyInstance **)(iVar2 + 0xb0) = g_heroMobyPtr;
  }
  return;
}



//==== 00190d60  ns=mobyupdate_unsorted  size=0x137c
// sig: undefined UpdateMoby_1032(MobyInstance * moby)
// callers(0): 
// callees(21): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00104e44 mobyutil::PointInsideComplexPoly; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 00110488 mobyutil::ClampVec3Magnitude; 00110b70 mobyutil::MB_IsPntInCuboid; 00111ba0 mobyutil::MB_getTargetInArea; 00113e88 mobyutil::MB_MayaFrameTrigger; 001b7028 FUN_001b7028; 002247e4 FUN_002247e4

/* Moby 1032 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1032(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyClass *pMVar10;
  void *pvVar11;
  int32_t iVar12;
  void *pvVar13;
  int iVar14;
  Spline *pSVar15;
  ulonglong *puVar16;
  float fVar17;
  MobyInstance *pMVar18;
  Cuboid *pCVar19;
  ulonglong uVar20;
  MobyInstance *pMVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar28;
  longlong lVar29;
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
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar26 = uVar20 - 0x1f0;
  puVar16 = (ulonglong *)lVar26;
  *puVar16 = uVar20;
  puVar16[0x40] = in_LR;
  puVar16[0x3c] = in_f30;
  puVar16[0x3d] = in_f31;
  puVar16[0x3b] = unaff_r31;
  puVar16[0x3a] = unaff_r30;
  pMVar10 = moby->pClass;
  puVar16[0x39] = unaff_r29;
  pvVar11 = moby->pVar;
  pSVar15 = Splines[*(int *)((int)pvVar11 + 0xc0)];
  moby->scale = pMVar10->gScale * DAT_0073fde0;
  dVar38 = 1.0;
  moby->unk58 = 1.0;
  *(undefined4 *)((int)pvVar11 + 0xf8) = 0x437f0000;
  iVar12 = pSVar15->cnt;
  puVar16[0x38] = unaff_r28;
  puVar16[0x37] = unaff_r27;
  mobyutil::MB_getTargetInArea
            (0x406fe00000000000,moby,(int)pvVar11 + 0x70,pSVar15,0,0,pSVar15->points,iVar12);
  pMVar18 = g_heroMobyPtr;
  pMVar21 = *(MobyInstance **)((int)pvVar11 + 0xb0);
  if (*(MobyInstance **)((int)pvVar11 + 0xb0) == (MobyInstance *)0x0) {
    *(MobyInstance **)((int)pvVar11 + 0xb0) = g_heroMobyPtr;
    pMVar21 = pMVar18;
  }
  uVar1 = moby->state;
  if (uVar1 == '\b') {
    pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
    if ((moby->field43_0x70 & 2U) != 0) {
      pMVar21 = (MobyInstance *)mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\a') {
    pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
    if ((moby->field43_0x70 & 2U) != 0) {
      pMVar21 = (MobyInstance *)0x8;
      moby->state = '\b';
      if (moby->animationId != '\x06') {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
        pMVar21 = (MobyInstance *)
                  mobyutil::MB_SetAnimation(moby,6,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x06') {
    fVar3 = (pMVar21->pos).x - (moby->pos).x;
    fVar5 = (pMVar21->pos).y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar5);
    *(float *)(puVar16 + 0x2a) = fVar3;
    *(float *)((int)puVar16 + 0x154) = fVar5;
    *(float *)(puVar16 + 0x2b) = fVar4 - fVar6;
    dVar37 = 0.0;
    uVar24 = (ulonglong)(*(uint *)(puVar16 + 0x2a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar16 + 0x2b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar16 + 0x154) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar16 + 0x2a));
    if (*(float *)(puVar16 + 0x2b) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar16 + 0x154));
    if (*(float *)(puVar16 + 0x2b) - 0.0 < 0.0) {
      fVar9 = fVar4;
    }
    dVar31 = dVar37;
    if (0.0 < fVar3) {
      lVar25 = uVar20 - 0x1e0;
      lVar27 = uVar20 - 0x88;
      lVar29 = uVar20 - 0x78;
      lVar30 = 2;
      fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar16 + 0x174) = fVar3;
      *(float *)((int)puVar16 + 0x16c) = fVar3;
      *(float *)(puVar16 + 0x2e) = fVar3;
      *(float *)(puVar16 + 0x2d) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar16 + 0x16c) = *(float *)((int)puVar16 + 0x16c) * fVar4;
      *(float *)(puVar16 + 0x2e) = *(float *)(puVar16 + 0x2e) * fVar3;
      *(float *)((int)puVar16 + 0x174) = *(float *)((int)puVar16 + 0x174) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x158) * fVar3 * fVar3;
        iVar22 = (int)lVar27;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar20 - 0x88;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar27 = lVar29;
      do {
        fVar3 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x168) * fVar3;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
        lVar27 = lVar27 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar25 = 2;
      do {
        iVar22 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        iVar14 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar22 + 0x168)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar6 + fVar5);
    }
    mobyutil::OrganicDeltAng
              ((float)dVar31,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar11 + 0xf0));
    iVar22 = mobyutil::MB_MayaFrameTrigger(16.0,moby);
    if (iVar22 == 0) {
      if ((moby->field43_0x70 & 2U) == 0) {
        if (DAT_00e5efec != 0.0) {
          DAT_00e5efec = DAT_00e5efec + -1.0;
          moby->state = '\x01';
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,0);
          }
        }
      }
      else {
        bVar2 = moby->animationId;
        iVar22 = mobyutil::MB_randInt(2);
        iVar22 = iVar22 + (uint)bVar2;
        uVar23 = iVar22 + ((iVar22 + -6) / 3) * -3 + 1;
        if (moby->animationId != uVar23) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(moby,uVar23,0,*(undefined4 *)((int)puVar16 + 0x1ac));
        }
      }
    }
    else {
      bVar2 = moby->updateId;
      if (bVar2 < 8) {
        if (6 < bVar2) {
          mobyfunc::GetBonePosition(moby,0,uVar20 - 0xd0);
          mobyfunc::GetBonePosition(moby,1,uVar20 - 0xc0);
        }
      }
      else if (bVar2 < 9) {
        mobyfunc::GetBonePosition(moby,2,uVar20 - 0xd0);
        mobyfunc::GetBonePosition(moby,3,uVar20 - 0xc0);
      }
      else if (bVar2 < 10) {
        mobyfunc::GetBonePosition(moby,4,uVar20 - 0xd0);
        mobyfunc::GetBonePosition(moby,5,uVar20 - 0xc0);
      }
      *(undefined4 *)((int)puVar16 + 0x11c) = *(undefined4 *)((int)puVar16 + 0x13c);
      fVar17 = DAT_00969da8;
      fVar8 = DAT_00969da4;
      fVar7 = DAT_00969da0;
      fVar9 = DAT_0073fde4;
      fVar3 = (*(float *)(puVar16 + 0x26) - *(float *)(puVar16 + 0x24)) * 0.5 +
              *(float *)(puVar16 + 0x24);
      fVar6 = (*(float *)((int)puVar16 + 0x134) - *(float *)((int)puVar16 + 0x124)) * 0.5 +
              *(float *)((int)puVar16 + 0x124);
      fVar5 = (*(float *)(puVar16 + 0x27) - *(float *)(puVar16 + 0x25)) * 0.5 +
              *(float *)(puVar16 + 0x25);
      *(undefined4 *)((int)puVar16 + 0x14c) = DAT_00969dac;
      fVar4 = mobyutil::g_FrameTime;
      *(float *)(puVar16 + 0x22) = fVar3;
      *(float *)((int)puVar16 + 0x114) = fVar6;
      *(float *)(puVar16 + 0x23) = fVar5;
      *(float *)(puVar16 + 0x28) = fVar7 - fVar3;
      *(float *)((int)puVar16 + 0x144) = fVar8 - fVar6;
      *(float *)(puVar16 + 0x29) = fVar17 - fVar5;
      mobyutil::ClampVec3Magnitude((double)(fVar9 * fVar4),(Vec4 *)(uVar20 - 0xb0));
      FUN_001b7028(moby,uVar20 - 0xe0,uVar20 - 0xb0);
    }
    pMVar21 = MobyInstance;
    iVar22 = *(int *)((int)pvVar11 + 0xec);
    fVar3 = (moby->pos).y - MobyInstance[iVar22].pos.y;
    fVar5 = (moby->pos).x - MobyInstance[iVar22].pos.x;
    fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
    if (fVar3 <= (float)((double)*(float *)((int)pvVar11 + 0x100) + dVar38)) {
      if (fVar3 < (float)((double)*(float *)((int)pvVar11 + 0x100) - dVar38)) {
        mobyutil::Delt(mobyutil::g_FrameTime * 5.5,DAT_0071f418 * 6.0,(float *)((int)pvVar11 + 0xf4)
                      );
      }
    }
    else {
      mobyutil::Delt(mobyutil::g_FrameTime * 10.0,DAT_0071f418 * 6.0,(float *)((int)pvVar11 + 0xf4))
      ;
    }
    dVar32 = (double)(moby->pos).y;
    fVar5 = (float)((double)pMVar21[iVar22].pos.y - dVar32);
    dVar35 = (double)(moby->pos).x;
    fVar6 = (float)((double)pMVar21[iVar22].pos.x - dVar35);
    iVar22 = *(int *)((int)pvVar11 + 0xcc);
    dVar36 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
    fVar3 = (float)((double)*(float *)((int)pvVar11 + 0xf4) / dVar36);
    dVar31 = (double)(fVar3 * fVar5);
    dVar33 = (double)(fVar3 * fVar6);
    dVar38 = dVar37;
    if (dVar37 - dVar36 < 0.0) {
      dVar38 = dVar31;
    }
    dVar34 = dVar37;
    if (dVar37 - dVar36 < 0.0) {
      dVar34 = dVar33;
    }
    if (dVar36 - dVar37 < 0.0) {
      dVar38 = dVar31;
    }
    if (dVar36 - dVar37 < 0.0) {
      dVar34 = dVar33;
    }
    (moby->pos).y = (float)(dVar32 + dVar38);
    (moby->pos).x = (float)(dVar35 + dVar34);
    pMVar21 = (MobyInstance *)mobyutil::MB_IsPntInCuboid((Vec4 *)&moby->pos,(longlong)iVar22);
    if (pMVar21 != (MobyInstance *)0x0) {
      pMVar21 = (MobyInstance *)0x7;
      moby->state = '\a';
      if (moby->animationId != '\x05') {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
        pMVar21 = (MobyInstance *)
                  mobyutil::MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x04') {
    pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
    if ((moby->field43_0x70 & 2U) != 0) {
      pMVar21 = (MobyInstance *)0x6;
      moby->state = '\x06';
      if (moby->animationId != '\a') {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 10.5);
        pMVar21 = (MobyInstance *)
                  mobyutil::MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x03') {
    mobyutil::OrganicDelt
              ((float)dVar38,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 0.25,
               (float *)((int)pvVar11 + 0x108),0x720000,(float *)((int)pvVar11 + 0x10c));
    pCVar19 = Cuboids;
    iVar22 = *(int *)((int)pvVar11 + 0xd8);
    iVar14 = *(int *)((int)pvVar11 + 0xdc);
    fVar3 = Cuboids[iVar22].pos.x;
    fVar5 = *(float *)((int)pvVar11 + 0x108);
    fVar6 = Cuboids[iVar14].pos.y;
    fVar4 = Cuboids[iVar22].pos.y;
    fVar9 = Cuboids[iVar14].pos.z;
    fVar7 = Cuboids[iVar22].pos.z;
    fVar8 = Cuboids[iVar14].pos.w;
    *(float *)(puVar16 + 0x16) = fVar5 * (Cuboids[iVar14].pos.x - fVar3) + fVar3;
    *(float *)((int)puVar16 + 0xb4) = fVar5 * (fVar6 - fVar4) + pCVar19[iVar22].pos.y;
    fVar3 = pCVar19[iVar22].pos.z;
    *(float *)((int)puVar16 + 0xbc) = fVar8;
    *(float *)(puVar16 + 0x17) = fVar5 * (fVar9 - fVar7) + fVar3;
    fVar3 = pCVar19[iVar22].rot.x;
    fVar5 = *(float *)((int)pvVar11 + 0x108);
    fVar6 = pCVar19[iVar14].rot.y;
    fVar4 = pCVar19[iVar22].rot.y;
    fVar9 = pCVar19[iVar14].rot.z;
    fVar7 = pCVar19[iVar22].rot.z;
    fVar8 = pCVar19[iVar14].rot.w;
    *(float *)(puVar16 + 0x18) = fVar5 * (pCVar19[iVar14].rot.x - fVar3) + fVar3;
    *(float *)((int)puVar16 + 0xc4) = fVar5 * (fVar6 - fVar4) + pCVar19[iVar22].rot.y;
    fVar3 = pCVar19[iVar22].rot.z;
    *(float *)((int)puVar16 + 0xcc) = fVar8;
    *(float *)(puVar16 + 0x19) = fVar5 * (fVar9 - fVar7) + fVar3;
    camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar16 + 0x16));
    camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar16 + 0x18));
    uVar23 = (int)*(uint *)((int)pvVar11 + 0x108) >> 0x1f;
    if ((int)((uVar23 >> 1 ^ *(uint *)((int)pvVar11 + 0x108)) - uVar23) < 0x3f800000) {
      if (((moby->updateId == '\b') && (moby->animationBlend == 0.0)) &&
         (iVar22 = mobyutil::MB_MayaFrameTrigger(16.0,moby), iVar22 != 0)) {
        mobyfunc::GetBonePosition(moby,2,uVar20 - 0x110);
        mobyfunc::GetBonePosition(moby,3,uVar20 - 0x100);
        *(undefined4 *)((int)puVar16 + 0xdc) = *(undefined4 *)((int)puVar16 + 0xfc);
        fVar8 = DAT_00969f88;
        fVar7 = DAT_00969f84;
        fVar9 = hero::g_heroGroundPoint;
        fVar4 = DAT_0073fde4;
        fVar3 = (*(float *)(puVar16 + 0x1e) - *(float *)(puVar16 + 0x1c)) * 0.5 +
                *(float *)(puVar16 + 0x1c);
        fVar6 = (*(float *)((int)puVar16 + 0xf4) - *(float *)((int)puVar16 + 0xe4)) * 0.5 +
                *(float *)((int)puVar16 + 0xe4);
        fVar5 = (*(float *)(puVar16 + 0x1f) - *(float *)(puVar16 + 0x1d)) * 0.5 +
                *(float *)(puVar16 + 0x1d);
        *(undefined4 *)((int)puVar16 + 0x10c) = DAT_00969f8c;
        *(float *)(puVar16 + 0x1a) = fVar3;
        *(float *)((int)puVar16 + 0xd4) = fVar6;
        *(float *)(puVar16 + 0x1b) = fVar5;
        fVar4 = fVar4 * mobyutil::g_FrameTime;
        *(float *)(puVar16 + 0x20) = fVar9 - fVar3;
        *(float *)((int)puVar16 + 0x104) = fVar7 - fVar6;
        *(float *)(puVar16 + 0x21) = fVar8 - fVar5;
        mobyutil::ClampVec3Magnitude((double)fVar4,(Vec4 *)(uVar20 - 0xf0));
        pMVar21 = (MobyInstance *)FUN_001b7028(moby,uVar20 - 0x120,uVar20 - 0xf0);
      }
      else {
        pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
        if (((moby->field43_0x70 & 2U) != 0) &&
           (pMVar21 = (MobyInstance *)(uint)moby->animationId, moby->animationId == 8)) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
          pMVar21 = (MobyInstance *)
                    mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar16 + 0x1ac));
        }
      }
    }
    else {
      moby->state = '\x06';
      if (moby->animationId != '\a') {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
      draw::LetterBoxOn = 0;
      camera::camera5::Camera_DeactivateMobyDrivenCam(1);
      FUN_002247e4(MobyInstance + *(int *)((int)pvVar11 + 0xc4),
                   &Cuboids[*(int *)((int)pvVar11 + 0xe4)].pos,
                   &Cuboids[*(int *)((int)pvVar11 + 0xe4)].rot,1,1);
      hero::g_heroPadStick = 0;
      DAT_0096ba04 = 0x3f800000;
      pMVar21 = (MobyInstance *)hero::TransitionMovement(0xb,1);
    }
  }
  else if (uVar1 == '\x02') {
    dVar37 = 0.5;
    moby->unk58 = 0.5;
    pvVar13 = moby->pVar;
    mobyutil::Delt(0.0,mobyutil::g_FrameTime * 6.0,(float *)((int)pvVar13 + 0x104));
    boot::SceneScreenFade = *(float *)((int)pvVar13 + 0x104);
    mobyutil::OrganicDelt
              ((float)dVar38,(float)((double)DAT_0071f418 * dVar37),
               (float)((double)DAT_0071f418 * dVar37),mobyutil::g_FrameTime * 0.25,
               (float *)((int)pvVar11 + 0x108),0x960000,(float *)((int)pvVar11 + 0x10c));
    pCVar19 = Cuboids;
    iVar22 = *(int *)((int)pvVar11 + 0xd0);
    iVar14 = *(int *)((int)pvVar11 + 0xd4);
    (moby->pos).z =
         -((float)(dVar38 - (double)*(float *)((int)pvVar11 + 0x108)) * 10.0 -
          *(float *)((int)pvVar11 + 0x110));
    fVar3 = pCVar19[iVar22].pos.x;
    fVar5 = *(float *)((int)pvVar11 + 0x108);
    fVar6 = pCVar19[iVar14].pos.y;
    fVar4 = pCVar19[iVar22].pos.y;
    fVar9 = pCVar19[iVar14].pos.z;
    fVar7 = pCVar19[iVar22].pos.z;
    fVar8 = pCVar19[iVar14].pos.w;
    *(float *)(puVar16 + 0x12) = fVar5 * (pCVar19[iVar14].pos.x - fVar3) + fVar3;
    *(float *)((int)puVar16 + 0x94) = fVar5 * (fVar6 - fVar4) + pCVar19[iVar22].pos.y;
    fVar3 = pCVar19[iVar22].pos.z;
    *(float *)((int)puVar16 + 0x9c) = fVar8;
    *(float *)(puVar16 + 0x13) = fVar5 * (fVar9 - fVar7) + fVar3;
    fVar3 = pCVar19[iVar22].rot.x;
    fVar5 = *(float *)((int)pvVar11 + 0x108);
    fVar6 = pCVar19[iVar14].rot.y;
    fVar4 = pCVar19[iVar22].rot.y;
    fVar9 = pCVar19[iVar14].rot.z;
    fVar7 = pCVar19[iVar22].rot.z;
    fVar8 = pCVar19[iVar14].rot.w;
    *(float *)(puVar16 + 0x14) = fVar5 * (pCVar19[iVar14].rot.x - fVar3) + fVar3;
    *(float *)((int)puVar16 + 0xa4) = fVar5 * (fVar6 - fVar4) + pCVar19[iVar22].rot.y;
    fVar3 = pCVar19[iVar22].rot.z;
    *(float *)((int)puVar16 + 0xac) = fVar8;
    *(float *)(puVar16 + 0x15) = fVar5 * (fVar9 - fVar7) + fVar3;
    camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar16 + 0x12));
    camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar16 + 0x14));
    uVar23 = (int)*(uint *)((int)pvVar11 + 0x108) >> 0x1f;
    if ((int)((uVar23 >> 1 ^ *(uint *)((int)pvVar11 + 0x108)) - uVar23) < 0x3f800000) {
      uVar1 = moby->animationId;
      pMVar21 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((uVar1 == '\x02') &&
           (pMVar21 = (MobyInstance *)moby->animationBlend, pMVar21 == (MobyInstance *)0x0)) {
          if (uVar1 != '\x05') {
            puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
            pMVar21 = (MobyInstance *)
                      mobyutil::MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar16 + 0x1ac));
          }
        }
        else if ((uVar1 == '\x05') &&
                ((pMVar21 = (MobyInstance *)moby->animationBlend, pMVar21 == (MobyInstance *)0x0 &&
                 (uVar1 != '\x03')))) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
          pMVar21 = (MobyInstance *)
                    mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar16 + 0x1ac));
        }
      }
    }
    else {
      moby->state = '\x03';
      *(undefined4 *)((int)pvVar11 + 0x108) = 0;
      *(undefined4 *)((int)pvVar11 + 0x10c) = 0;
      pMVar21 = (MobyInstance *)(uint)moby->animationId;
      if (moby->animationId != 8) {
        puVar16[0x35] = (longlong)(int)(animationSpeed * 20.5);
        pMVar21 = (MobyInstance *)
                  mobyutil::MB_SetAnimation(moby,8,0,*(undefined4 *)((int)puVar16 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x01') {
    fVar3 = (pMVar21->pos).x - (moby->pos).x;
    fVar5 = (pMVar21->pos).y - (moby->pos).y;
    fVar6 = ABS(fVar3);
    fVar4 = ABS(fVar5);
    *(float *)((int)puVar16 + 0x15c) = fVar3;
    *(float *)(puVar16 + 0x2c) = fVar5;
    *(float *)((int)puVar16 + 0x164) = fVar6 - fVar4;
    fVar3 = 0.0;
    uVar24 = (ulonglong)(*(uint *)((int)puVar16 + 0x15c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar16 + 0x164) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar16 + 0x2c) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)((int)puVar16 + 0x15c));
    if (*(float *)((int)puVar16 + 0x164) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar4 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar16 + 0x2c));
    if (*(float *)((int)puVar16 + 0x164) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar25 = uVar20 - 0x1e0;
      lVar27 = uVar20 - 0x68;
      lVar29 = uVar20 - 0x58;
      lVar30 = 2;
      fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar16 + 0x194) = fVar5;
      *(float *)((int)puVar16 + 0x18c) = fVar5;
      *(float *)(puVar16 + 0x32) = fVar5;
      *(float *)(puVar16 + 0x31) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar16 + 0x18c) = *(float *)((int)puVar16 + 0x18c) * fVar6;
      *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar5;
      *(float *)((int)puVar16 + 0x194) = *(float *)((int)puVar16 + 0x194) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x178) * fVar5 * fVar5;
        iVar22 = (int)lVar27;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar20 - 0x68;
      pfVar28 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar27 = lVar29;
      do {
        fVar5 = *pfVar28;
        fVar6 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x188) * fVar5;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar6;
        lVar27 = lVar27 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar25 = 2;
      do {
        iVar22 = (int)lVar26;
        iVar14 = (int)lVar29;
        lVar26 = lVar26 + 0x10;
        lVar29 = lVar29 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar22 + 0x188) + *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8)
                + *(float *)(iVar14 + 0xc);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar9 + fVar4;
    }
    mobyutil::OrganicDeltAng
              (fVar3,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x190d20,
               (float *)((int)pvVar11 + 0xf0));
    pMVar21 = (MobyInstance *)
              mobyutil::PointInsideComplexPoly
                        (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar11 + 0xc0)]->points,
                         Splines[*(int *)((int)pvVar11 + 0xc0)]->cnt);
    if ((pMVar21 != (MobyInstance *)0x0) &&
       (pMVar21 = (MobyInstance *)
                  mobyutil::MB_CountActiveMobysByGroup
                            (*(undefined4 *)((int)pvVar11 + 200),0xffffffffffffffff),
       pMVar21 == (MobyInstance *)0x0)) {
      pvVar13 = moby->pVar;
      mobyutil::Delt((float)dVar38,mobyutil::g_FrameTime * 6.0,(float *)((int)pvVar13 + 0x104));
      boot::SceneScreenFade = *(float *)((int)pvVar13 + 0x104);
      uVar23 = (int)*(uint *)((int)pvVar13 + 0x104) >> 0x1f;
      pMVar21 = (MobyInstance *)((uVar23 >> 1 ^ *(uint *)((int)pvVar13 + 0x104)) - uVar23);
      if (0x3f7fffff < (int)pMVar21) {
        hero::Hero_Warp(&Cuboids[*(int *)((int)pvVar11 + 0xe0)].pos.x,
                        &Cuboids[*(int *)((int)pvVar11 + 0xe0)].rot.x,0x72,1);
        FUN_002247e4(MobyInstance + *(int *)((int)pvVar11 + 0xc4),
                     &Cuboids[*(int *)((int)pvVar11 + 0xe4)].pos,
                     &Cuboids[*(int *)((int)pvVar11 + 0xe4)].rot,0,1);
        pCVar19 = Cuboids;
        iVar22 = *(int *)((int)pvVar11 + 0xd0);
        *(float *)(puVar16 + 0xe) = Cuboids[iVar22].pos.x;
        *(float *)((int)puVar16 + 0x74) = pCVar19[iVar22].pos.y;
        *(float *)(puVar16 + 0xf) = pCVar19[iVar22].pos.z;
        *(float *)((int)puVar16 + 0x7c) = pCVar19[iVar22].pos.w;
        *(float *)(puVar16 + 0x10) = pCVar19[iVar22].rot.x;
        *(float *)((int)puVar16 + 0x84) = pCVar19[iVar22].rot.y;
        *(float *)(puVar16 + 0x11) = pCVar19[iVar22].rot.z;
        *(float *)((int)puVar16 + 0x8c) = pCVar19[iVar22].rot.w;
        camera::SetCameraPosition(uVar20 - 0x180,uVar20 - 0x170,1,0,0);
        camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar20 - 0x180));
        camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar20 - 0x170));
        *(undefined4 *)((int)pvVar11 + 0x108) = 0;
        *(undefined4 *)((int)pvVar11 + 0x10c) = 0;
        draw::LetterBoxOn = 1;
        pMVar21 = (MobyInstance *)(uint)moby->animationId;
        moby->state = '\x02';
        if (moby->animationId != 2) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 10.5);
          pMVar21 = (MobyInstance *)
                    mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar16 + 0x1ac));
        }
      }
    }
  }
  else if (uVar1 == '\0') {
    fVar3 = (moby->pos).y - MobyInstance[*(int *)((int)pvVar11 + 0xec)].pos.y;
    fVar5 = (moby->pos).x - MobyInstance[*(int *)((int)pvVar11 + 0xec)].pos.x;
    *(float *)((int)pvVar11 + 0x100) = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
    *(f32 *)((int)pvVar11 + 0x110) = (moby->pos).z;
    fVar3 = (moby->pos).z;
    moby->drawDistance = 0xff;
    bVar2 = moby->animationId;
    pMVar21 = (MobyInstance *)(uint)bVar2;
    moby->state = '\x01';
    (moby->pos).z = fVar3 - 10.0;
    if (bVar2 != 1) {
      pMVar21 = (MobyInstance *)mobyutil::MB_SetAnimation(moby,1,0,0);
    }
  }
  return pMVar21;
}



//==== 001920dc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1033_001920dc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1033_001920dc(void)

{
  DAT_0073fe34 = 0x10000;
  return;
}



//==== 00192100  ns=mobyupdate_unsorted  size=0x230
// sig: void UpdateMoby_1033(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 005cd098 libc::printf
// strings: 006542e4: 'Moby Class %d Instance %d has no pVars!  May be in the art file.\n\tMobyDeleted\n'

/* Moby 1033 */

void mobyupdate_unsorted::UpdateMoby_1033(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pvVar2 = moby->pVar;
  uVar7 = ZEXT48(pvVar2);
  if (pvVar2 == (void *)0x0) {
    libc::printf("Moby Class %d Instance %d has no pVars!  May be in the art file.\n\tMobyDeleted\n"
                 ,moby->oClass,moby->uid);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    uVar1 = moby->state;
    if (uVar1 == '\x04') {
      iVar6 = fastfunc::FastDecTimerS32(uVar7 + 0xb0);
      if (iVar6 != 0) {
        sound::PlayMobySound(0,0,moby);
        moby->state = '\x01';
      }
    }
    else if (uVar1 == '\x03') {
      fVar4 = (moby->pos).z - 1.5 / (animationSpeed * 45.0);
      (moby->pos).z = fVar4;
      if (fVar4 <= *(float *)((int)pvVar2 + 0xa8)) {
        (moby->pos).z = *(float *)((int)pvVar2 + 0xa8);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        moby->state = '\x04';
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(8,0x1920f0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xb0,uVar7);
        *(undefined4 *)((int)pvVar2 + 0xb0U & 0xfffffffc) = uVar3;
      }
    }
    else if (uVar1 == '\x02') {
      iVar6 = fastfunc::FastDecTimerS32(uVar7 + 0xb0);
      if (iVar6 != 0) {
        sound::PlayMobySound(0,0,moby);
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      fVar5 = (moby->pos).z + 1.5 / (animationSpeed * 45.0);
      (moby->pos).z = fVar5;
      fVar4 = *(float *)((int)pvVar2 + 0xa8) + 1.5;
      if (fVar4 <= fVar5) {
        (moby->pos).z = fVar4;
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        moby->state = '\x02';
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(8,0x1920f0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xb0,uVar7);
        *(undefined4 *)((int)pvVar2 + 0xb0U & 0xfffffffc) = uVar3;
      }
    }
    else if (uVar1 == '\0') {
      *(undefined4 *)((int)pvVar2 + 0x20) = 0;
      *(undefined2 *)((int)pvVar2 + 0x24) = 0;
      *(undefined1 *)((int)pvVar2 + 0x28) = 4;
      *(undefined2 *)((int)pvVar2 + 0x3e) = 5;
      *(f32 *)((int)pvVar2 + 0xa0) = (moby->pos).x;
      *(f32 *)((int)pvVar2 + 0xa4) = (moby->pos).y;
      *(f32 *)((int)pvVar2 + 0xa8) = (moby->pos).z;
      *(f32 *)((int)pvVar2 + 0xac) = (moby->pos).w;
      moby->state = '\x01';
    }
  }
  return;
}



//==== 00192330  ns=mobyupdate_helpers  size=0x1fc
// sig: undefined Spawn_Moby1034(void)
// callers(3): 001e6df8 mobyupd::update1160::M1160_UpdateMissiles; 0021f5b8 mobyupd::update1242::M1242_0021f5b8; 0036ae68 mobyupdate_helpers::M426_0036ae68
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector

MobyInstance *
mobyupdate_helpers::Spawn_Moby1034
          (double param_1,float param_2,f32 *param_3,MobyInstance *param_4,f32 *param_5,
          undefined8 param_6,float param_7)

{
  float *out;
  float fVar1;
  MobyInstance *pMVar2;
  int iVar3;
  
  pMVar2 = mobyfunc::CreateMoby(ROCKET_040A);
  if (pMVar2 != (MobyInstance *)0x0) {
    out = (float *)pMVar2->pVar;
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    out[8] = param_2;
    out[9] = (float)param_4;
    (pMVar2->pos).x = *param_3;
    (pMVar2->pos).y = param_3[1];
    (pMVar2->pos).z = param_3[2];
    (pMVar2->pos).w = param_3[3];
    (pMVar2->rotation).x = *param_5;
    (pMVar2->rotation).y = param_5[1];
    (pMVar2->rotation).z = param_5[2];
    (pMVar2->rotation).w = param_5[3];
    if ((param_4 != (MobyInstance *)0x0) &&
       (iVar3 = mobyutil::MB_GetPvarsIfMobyHasThem(param_4), iVar3 != 0)) {
      *(ushort *)(iVar3 + 0x1e) = *(ushort *)(iVar3 + 0x1e) | 0x80;
    }
    out[10] = param_7;
    out[0xb] = (float)param_1;
    out[0xc] = 0.0;
    out[0xd] = 0.0;
    mobyutil::MB_SphericalToVector((float)param_1,param_5[2],-param_5[1],out);
    if (pMVar2->animationId != '\x01') {
      mobyutil::MB_SetAnimation(pMVar2,1,0,10);
    }
    (pMVar2->pos).x = (pMVar2->pos).x + *out;
    (pMVar2->pos).y = (pMVar2->pos).y + out[1];
    (pMVar2->pos).z = (pMVar2->pos).z + out[2];
    fVar1 = out[9];
    if (fVar1 != 0.0) {
      out[4] = *(float *)((int)fVar1 + 0x10);
      out[5] = *(float *)((int)fVar1 + 0x14);
      out[6] = *(float *)((int)fVar1 + 0x18);
      out[7] = *(float *)((int)fVar1 + 0x1c);
    }
    pMVar2->scale =
         pMVar2->pClass->gScale *
         (*(float *)((int)param_2 + 0x2c) / *(float *)(*(int *)((int)param_2 + 0x24) + 0x24));
    mobyfunc::UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}



//==== 00192590  ns=mobyupdate_unsorted  size=0xacc
// sig: undefined UpdateMoby_1034(MobyInstance * moby)
// callers(0): 
// callees(12): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe610 mobyutil::MB_SphericalToVector; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1034 */

void mobyupdate_unsorted::UpdateMoby_1034(MobyInstance *moby)

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
  MobyClass *pMVar11;
  float *out;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar17;
  longlong lVar16;
  longlong lVar18;
  uint unused;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  ulonglong unaff_r27;
  longlong lVar22;
  ulonglong unaff_r28;
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
  ulonglong in_f21;
  ulonglong in_f22;
  undefined8 uVar29;
  ulonglong in_f23;
  ulonglong in_f24;
  undefined8 uVar30;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  undefined8 uVar34;
  ulonglong in_f29;
  double dVar35;
  undefined8 uVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x200;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar14;
  puVar12[0x42] = in_LR;
  puVar12[0x35] = in_f21;
  puVar12[0x36] = in_f22;
  puVar12[0x37] = in_f23;
  puVar12[0x38] = in_f24;
  puVar12[0x39] = in_f25;
  puVar12[0x3a] = in_f26;
  puVar12[0x3b] = in_f27;
  puVar12[0x3c] = in_f28;
  puVar12[0x3d] = in_f29;
  puVar12[0x3e] = in_f30;
  puVar12[0x3f] = in_f31;
  puVar12[0x34] = unaff_r31;
  puVar12[0x32] = unaff_r29;
  fVar3 = (moby->pos).y;
  *(f32 *)(puVar12 + 0x18) = (moby->pos).x;
  fVar4 = (moby->pos).z;
  *(f32 *)((int)puVar12 + 0xc4) = fVar3;
  fVar3 = (moby->pos).w;
  pMVar11 = moby->pClass;
  *(f32 *)(puVar12 + 0x19) = fVar4;
  *(f32 *)((int)puVar12 + 0xcc) = fVar3;
  fVar5 = moby->scale;
  dVar35 = 0.10000000149011612;
  fVar6 = pMVar11->gScale;
  puVar12[0x33] = unaff_r30;
  out = (float *)moby->pVar;
  moby->scale = (fVar6 - fVar5) * 0.1 + fVar5;
  dVar38 = 0.0;
  *(undefined4 *)(puVar12 + 0x1e) = 0;
  *(undefined4 *)((int)puVar12 + 0xf4) = 0;
  *(undefined4 *)(puVar12 + 0x1f) = 0;
  *(undefined4 *)((int)puVar12 + 0xfc) = 0;
  dVar33 = -1.0;
  dVar37 = 1.0;
  puVar12[0x31] = unaff_r28;
  puVar12[0x30] = unaff_r27;
  dVar24 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
  *(float *)(puVar12 + 0x1e) = (float)dVar24;
  dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar37);
  *(float *)((int)puVar12 + 0xf4) = (float)dVar24;
  dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar37);
  *(float *)(puVar12 + 0x1f) = (float)dVar24;
  dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar35,0.2);
  fVar9 = mobyutil::g_FrameTime;
  fVar6 = *(float *)((int)puVar12 + 0xf4);
  fVar7 = *(float *)(puVar12 + 0x1e);
  fVar8 = *(float *)(puVar12 + 0x1f);
  dVar28 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  dVar33 = (double)mobyutil::g_FrameTime;
  fVar5 = (float)((double)(float)(dVar24 * dVar33) / dVar28);
  dVar24 = dVar38;
  if (dVar38 - dVar28 < 0.0) {
    dVar24 = (double)(fVar7 * fVar5);
  }
  dVar31 = dVar38;
  if (dVar38 - dVar28 < 0.0) {
    dVar31 = (double)(fVar6 * fVar5);
  }
  dVar25 = dVar38;
  if (dVar38 - dVar28 < 0.0) {
    dVar25 = (double)(fVar8 * fVar5);
  }
  if (dVar28 - dVar38 < 0.0) {
    dVar24 = (double)(fVar7 * fVar5);
  }
  if (dVar28 - dVar38 < 0.0) {
    dVar31 = (double)(fVar6 * fVar5);
  }
  if (dVar28 - dVar38 < 0.0) {
    dVar25 = (double)(fVar8 * fVar5);
  }
  *(float *)(puVar12 + 0x1e) = (float)dVar24;
  *(float *)((int)puVar12 + 0xf4) = (float)dVar31;
  *(float *)(puVar12 + 0x1f) = (float)dVar25;
  dVar24 = (double)mobyutil::MB_randRangeFloat((float)(dVar33 * dVar35),fVar9);
  fVar5 = *out;
  dVar33 = (double)SQRT(out[2] * out[2] + fVar5 * fVar5 + out[1] * out[1]);
  if (dVar33 == dVar38) {
    *(float *)(puVar12 + 0x1c) = fVar5;
    *(float *)((int)puVar12 + 0xe4) = out[1];
    *(float *)(puVar12 + 0x1d) = out[2];
    fVar5 = out[3];
    *(undefined4 *)(puVar12 + 0x1d) = 0;
    *(undefined4 *)((int)puVar12 + 0xe4) = 0;
    *(undefined4 *)(puVar12 + 0x1c) = 0;
    dVar24 = dVar38;
    dVar33 = dVar38;
    dVar28 = dVar38;
  }
  else {
    fVar6 = (float)(-dVar24 / dVar33);
    dVar24 = (double)(fVar5 * fVar6);
    *(float *)(puVar12 + 0x1c) = fVar5 * fVar6;
    dVar33 = (double)(out[1] * fVar6);
    *(float *)((int)puVar12 + 0xe4) = out[1] * fVar6;
    dVar28 = (double)(out[2] * fVar6);
    *(float *)(puVar12 + 0x1d) = out[2] * fVar6;
    fVar5 = out[3];
  }
  *(float *)((int)puVar12 + 0xec) = fVar5;
  *(float *)(puVar12 + 0x1e) = (float)((double)*(float *)(puVar12 + 0x1e) + dVar24);
  *(float *)((int)puVar12 + 0xf4) = (float)((double)*(float *)((int)puVar12 + 0xf4) + dVar33);
  *(float *)(puVar12 + 0x1f) = (float)((double)*(float *)(puVar12 + 0x1f) + dVar28);
  puVar12[0x2d] = (longlong)(int)(animationSpeed * 6.5);
  uVar36 = 0x40e3880000000000;
  uVar34 = 0x408f400000000000;
  partupd::SpawnPart_44
            (0x40e3880000000000,0x408f400000000000,dVar37,0xbf3a36e2e0000000,dVar38,lVar15 + 0x10,
             uVar14 - 0x110,*(undefined4 *)((int)puVar12 + 0x16c),0x7f,&DAT_00b0b0b0,3);
  dVar31 = 0.3333333432674408;
  dVar35 = 60.5;
  uVar30 = 0xbf2a36e2e0000000;
  dVar28 = 0.019999999552965164;
  uVar29 = 0x40d3880000000000;
  dVar33 = 5.5;
  dVar24 = dVar38;
  do {
    dVar32 = (double)(float)(dVar24 + dVar31);
    dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)(dVar24 + dVar31));
    fVar5 = *out;
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).z;
    dVar25 = (double)SQRT(out[2] * out[2] + fVar5 * fVar5 + out[1] * out[1]);
    if (dVar25 == dVar38) {
      *(float *)(puVar12 + 0x1c) = fVar5;
      *(float *)((int)puVar12 + 0xe4) = out[1];
      *(float *)(puVar12 + 0x1d) = out[2];
      fVar5 = out[3];
      dVar24 = dVar38;
      dVar25 = dVar38;
      dVar27 = dVar38;
    }
    else {
      fVar9 = (float)((double)(float)(dVar24 * (double)out[0xb]) / dVar25);
      dVar24 = (double)(fVar5 * fVar9);
      *(float *)(puVar12 + 0x1c) = fVar5 * fVar9;
      dVar25 = (double)(out[1] * fVar9);
      *(float *)((int)puVar12 + 0xe4) = out[1] * fVar9;
      dVar27 = (double)(out[2] * fVar9);
      *(float *)(puVar12 + 0x1d) = out[2] * fVar9;
      fVar5 = out[3];
    }
    dVar26 = (double)animationSpeed;
    *(float *)((int)puVar12 + 0xec) = fVar5;
    *(float *)(puVar12 + 0x1c) = (float)(dVar24 + (double)fVar6);
    *(float *)((int)puVar12 + 0xe4) = (float)(dVar25 + (double)fVar7);
    *(float *)(puVar12 + 0x1d) = (float)(dVar27 + (double)fVar8);
    puVar12[0x2d] = (longlong)(int)(dVar26 * dVar35);
    iVar17 = partupd::SpawnPart_44
                       (uVar36,uVar34,dVar37,uVar30,dVar38,uVar14 - 0x120,uVar14 - 0x110,
                        *(undefined4 *)((int)puVar12 + 0x16c),0x7f,FUN_00606060,3);
    fVar5 = (moby->transform).v2.x;
    fVar6 = (moby->transform).v2.y;
    fVar7 = (moby->transform).v2.z;
    fVar8 = (moby->transform).v2.w;
    if (iVar17 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar17 + 3) = 0x44;
      *(undefined1 *)(iVar17 + 2) = uVar1;
    }
    *(float *)(puVar12 + 0x20) = (float)((double)fVar5 * dVar28);
    *(float *)((int)puVar12 + 0x104) = (float)((double)fVar6 * dVar28);
    *(float *)(puVar12 + 0x21) = (float)((double)fVar7 * dVar28);
    *(float *)((int)puVar12 + 0x10c) = (float)((double)fVar8 * dVar28);
    dVar24 = (double)mobyutil::MB_randRot();
    lVar22 = uVar14 - 0x100;
    mobyutil::MB_RotateQuatAxisAngle((float)dVar24,(float *)lVar22,(float *)lVar22);
    puVar12[0x2d] = (longlong)(int)((double)animationSpeed * dVar33);
    partupd::SpawnPart_21(uVar29,uVar14 - 0x120,lVar22,0x4f007fff,0x1fffffff);
    unused = (uint)lVar22;
    dVar24 = dVar32;
  } while (dVar32 < dVar37);
  fVar5 = out[9];
  if (fVar5 != 0.0) {
    bVar2 = *(byte *)((int)fVar5 + 0x20);
    unused = (uint)bVar2;
    if (bVar2 != 0xfd && bVar2 != 0xfe) {
      fVar6 = out[5] - *(float *)((int)fVar5 + 0x14);
      fVar7 = out[4] - *(float *)((int)fVar5 + 0x10);
      fVar8 = out[6] - *(float *)((int)fVar5 + 0x18);
      if (SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) < 3.0) {
        fVar6 = (moby->pos).x;
        fVar7 = (moby->pos).y;
        fVar8 = *(float *)((int)fVar5 + 0x10) - fVar6;
        fVar5 = *(float *)((int)fVar5 + 0x14) - fVar7;
        dVar33 = ABS((double)fVar8);
        dVar28 = ABS((double)fVar5);
        *(float *)((int)puVar12 + 0x11c) = fVar8;
        *(float *)(puVar12 + 0x24) = fVar5;
        *(float *)((int)puVar12 + 0x124) = (float)(dVar33 - dVar28);
        uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x11c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar12 + 0x11c));
        if ((double)*(float *)((int)puVar12 + 0x124) - dVar38 < 0.0) {
          dVar24 = dVar28;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar28 = ABS((double)*(float *)(puVar12 + 0x24));
        if ((double)*(float *)((int)puVar12 + 0x124) - dVar38 < 0.0) {
          dVar28 = dVar33;
        }
        fVar8 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar33 = dVar38;
        if (dVar38 < dVar24) {
          lVar22 = uVar14 - 0x1f0;
          lVar19 = uVar14 - 0xa8;
          lVar18 = uVar14 - 0xb8;
          lVar23 = 2;
          fVar9 = (float)(dVar28 - dVar24) / (float)(dVar28 + dVar24);
          fVar10 = fVar9 * fVar9;
          *(float *)((int)puVar12 + 0x154) = fVar9;
          *(float *)((int)puVar12 + 0x14c) = fVar9;
          *(float *)(puVar12 + 0x2a) = fVar9;
          *(float *)(puVar12 + 0x29) = fVar9;
          fVar9 = fVar10 * fVar10;
          *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar10;
          *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar9;
          *(float *)((int)puVar12 + 0x154) = *(float *)((int)puVar12 + 0x154) * fVar9 * fVar10;
          do {
            *(float *)((int)lVar22 + 0x148) = *(float *)((int)lVar22 + 0x138) * fVar9 * fVar9;
            iVar17 = (int)lVar18;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar9 * fVar9;
            lVar19 = lVar19 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar19 = uVar14 - 0xb8;
          pfVar20 = (float *)&DAT_007358e0;
          lVar22 = lVar16;
          lVar18 = lVar19;
          do {
            fVar9 = *pfVar20;
            fVar10 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar22 + 0x148) = *(float *)((int)lVar22 + 0x148) * fVar9;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar10;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar18 = 2;
          lVar22 = lVar16;
          dVar24 = dVar38;
          do {
            iVar17 = (int)lVar22;
            iVar13 = (int)lVar19;
            lVar22 = lVar22 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar17 + 0x148)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar33 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar8);
        }
        (moby->rotation).z = (float)dVar33;
        fVar5 = out[9];
        fVar7 = fVar7 - *(float *)((int)fVar5 + 0x14);
        fVar6 = fVar6 - *(float *)((int)fVar5 + 0x10);
        fVar8 = *(float *)((int)fVar5 + 0x18) - (moby->pos).z;
        fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
        *(float *)((int)puVar12 + 0x114) = fVar8;
        dVar28 = ABS((double)fVar8);
        dVar33 = ABS((double)fVar5);
        *(float *)(puVar12 + 0x22) = fVar5;
        *(float *)(puVar12 + 0x23) = (float)(dVar33 - dVar28);
        uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x22) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x23) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x114) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar12 + 0x22));
        if ((double)*(float *)(puVar12 + 0x23) - dVar38 < 0.0) {
          dVar24 = dVar28;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar28 = ABS((double)*(float *)((int)puVar12 + 0x114));
        if ((double)*(float *)(puVar12 + 0x23) - dVar38 < 0.0) {
          dVar28 = dVar33;
        }
        fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if (dVar38 < dVar24) {
          lVar22 = uVar14 - 0x1f0;
          lVar19 = uVar14 - 200;
          lVar18 = uVar14 - 0xd8;
          lVar23 = 2;
          fVar7 = (float)(dVar28 - dVar24) / (float)(dVar28 + dVar24);
          fVar8 = fVar7 * fVar7;
          *(float *)((int)puVar12 + 0x134) = fVar7;
          *(float *)((int)puVar12 + 300) = fVar7;
          *(float *)(puVar12 + 0x26) = fVar7;
          *(float *)(puVar12 + 0x25) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar8;
          *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar7;
          *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar22 + 0x128) = *(float *)((int)lVar22 + 0x118) * fVar7 * fVar7;
            iVar17 = (int)lVar18;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar7 * fVar7;
            lVar19 = lVar19 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar19 = uVar14 - 0xd8;
          pfVar20 = (float *)&DAT_007358e0;
          lVar22 = lVar16;
          lVar18 = lVar19;
          do {
            fVar7 = *pfVar20;
            fVar8 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar22 + 0x128) = *(float *)((int)lVar22 + 0x128) * fVar7;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar8;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar22 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar13 = (int)lVar19;
            lVar16 = lVar16 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar17 + 0x128)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar5 + fVar6);
        }
        (moby->rotation).y = (float)-dVar38;
        fVar5 = out[9];
        out[4] = *(float *)((int)fVar5 + 0x10);
        out[5] = *(float *)((int)fVar5 + 0x14);
        out[6] = *(float *)((int)fVar5 + 0x18);
        out[7] = *(float *)((int)fVar5 + 0x1c);
        goto LAB_00192e94;
      }
    }
  }
  dVar33 = 251.32740783691406;
  dVar24 = 2513.274169921875;
  mobyutil::OrganicDeltAng
            ((moby->rotation).z,DAT_0071f418 * 251.32741,DAT_0071f418 * 251.32741,
             mobyutil::g_FrameTime * 2513.2742,&(moby->rotation).z,unused,out + 0xc);
  mobyutil::OrganicDeltAng
            ((moby->rotation).y,(float)((double)DAT_0071f418 * dVar33),
             (float)((double)DAT_0071f418 * dVar33),(float)((double)mobyutil::g_FrameTime * dVar24),
             &(moby->rotation).y,unused,out + 0xc);
  out[9] = 0.0;
LAB_00192e94:
  mobyutil::MB_SphericalToVector(out[0xb],(moby->rotation).z,-(moby->rotation).y,out);
  fVar5 = (moby->pos).x + *out;
  (moby->pos).x = fVar5;
  fVar6 = (moby->pos).y + out[1];
  (moby->pos).y = fVar6;
  fVar7 = (moby->pos).z + out[2];
  (moby->pos).z = fVar7;
  uVar29 = 0x4000000000000000;
  if (2.0 <= fVar5) {
    if ((((fVar5 <= 1021.0) && (2.0 <= fVar6)) && (fVar6 <= 1021.0)) &&
       ((2.0 <= fVar7 && (fVar7 <= 1021.0)))) {
      mobyfunc::GetBonePosition(lVar15,1,uVar14 - 0x130);
      iVar17 = collproc::CollLine(uVar14 - 0x140,uVar14 - 0x130,0,out[8],0);
      if (iVar17 != 0) {
        puVar12[0x12] = 0xffffffffffffffff;
        puVar12[0x14] = 0;
        puVar12[0x15] = 1;
        puVar12[0x16] = 0xffffffffffffffff;
        puVar12[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (uVar29,0x4024000000000000,0x4010000000000000,uVar29,0x4022000000000000,dVar37,
                   0x4034000000000000,lVar15,out,0xa10960,1,0xffffffffffffffff,10,3,0x10);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar17 = fastfunc::FastDecTimerS32(out + 10);
      if (iVar17 == 0) {
        return;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 00193078  ns=mobyupdate_helpers  size=0x314
// sig: undefined M1035_00193078(void)
// callers(1): 001933d8 mobyupdate_unsorted::UpdateMoby_1035
// callees(2): 000fea60 mobyutil::MB_randSphere; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1035_00193078(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  float local_250 [4];
  float local_240 [4];
  float local_230 [112];
  
  dVar18 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_1 + 0x40),
                              DAT_00740054 * 0.017453292 * mobyutil::g_FrameTime);
  *(float *)(param_1 + 0x40) = (float)dVar18;
  *(float *)(param_1 + 0x2c) = *(float *)(*(int *)(param_1 + 0x24) + 0x24) * DAT_00740058;
  DAT_00e5f000 = DAT_0073ff24 * mobyutil::g_FrameTime + DAT_00e5f000;
  if (1.0 < DAT_00e5f000) {
    DAT_00e5f000 = DAT_00e5f000 - 1.0;
  }
  iVar14 = 0;
  iVar15 = 0;
  dVar20 = (double)DAT_0073ff2c;
  dVar21 = 0.03333333507180214;
  iVar16 = 0;
  dVar18 = (double)(float)(dVar20 * -0.5);
  do {
    iVar8 = *(int *)((int)&DAT_00e5ff10 + iVar15);
    if (iVar8 == 0) {
      iVar8 = 0;
      uVar19 = 0;
      pfVar10 = local_250;
      puVar13 = (undefined4 *)((int)&DAT_00e5f010 + iVar16);
      pfVar12 = (float *)((int)&DAT_00e5f014 + iVar16);
      do {
        puVar13[2] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[3] = 0x3f800000;
        fVar1 = DAT_0073ff28;
        *pfVar12 = (float)dVar18;
        mobyutil::MB_randSphere(uVar19,(double)(fVar1 * mobyutil::g_FrameTime),pfVar10);
        iVar8 = iVar8 + 1;
        dVar18 = (double)(float)(dVar20 * dVar21 + dVar18);
        puVar13 = puVar13 + 4;
        pfVar12 = pfVar12 + 4;
        pfVar10 = pfVar10 + 4;
      } while (iVar8 < 0x1e);
      pfVar10 = (float *)((int)&DAT_00e5f7a0 + iVar16);
      lVar17 = 0x1c;
      pfVar11 = local_250;
      pfVar9 = local_240;
      pfVar12 = local_230;
      do {
        fVar1 = *pfVar11;
        fVar2 = *pfVar9;
        *pfVar10 = fVar1 + fVar2;
        fVar3 = pfVar11[1];
        fVar4 = pfVar9[1];
        pfVar10[1] = fVar3 + fVar4;
        fVar5 = pfVar11[2];
        fVar6 = pfVar9[2];
        pfVar9 = pfVar9 + 4;
        pfVar10[2] = fVar5 + fVar6;
        fVar7 = pfVar11[3];
        pfVar10[3] = fVar7;
        fVar2 = fVar1 + fVar2 + *pfVar12;
        pfVar11 = pfVar11 + 4;
        *pfVar10 = fVar2;
        fVar3 = fVar3 + fVar4 + pfVar12[1];
        pfVar10[1] = fVar3;
        fVar1 = pfVar12[2];
        *pfVar10 = fVar2 * 0.333;
        pfVar10[3] = fVar7;
        pfVar12 = pfVar12 + 4;
        pfVar10[1] = fVar3 * 0.333;
        pfVar10[2] = (fVar5 + fVar6 + fVar1) * 0.333;
        pfVar10 = pfVar10 + 4;
        lVar17 = lVar17 + -1;
        iVar8 = DAT_00e5ff20;
      } while (lVar17 != 0);
    }
    else {
      lVar17 = 0x1c;
      pfVar10 = (float *)((int)&DAT_00e5f020 + iVar16);
      pfVar12 = (float *)((int)&DAT_00e5f7a0 + iVar16);
      do {
        *pfVar10 = *pfVar10 + *pfVar12;
        pfVar10[1] = pfVar10[1] + pfVar12[1];
        pfVar9 = pfVar12 + 2;
        pfVar12 = pfVar12 + 4;
        pfVar10[2] = pfVar10[2] + *pfVar9;
        pfVar10 = pfVar10 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      iVar8 = iVar8 + -1;
    }
    iVar14 = iVar14 + 1;
    *(int *)((int)&DAT_00e5ff10 + iVar15) = iVar8;
    iVar16 = iVar16 + 0x1e0;
    iVar15 = iVar15 + 4;
  } while (iVar14 < 4);
  return;
}



//==== 001933d8  ns=mobyupdate_unsorted  size=0xf1c
// sig: undefined UpdateMoby_1035(MobyInstance * moby)
// callers(0): 
// callees(24): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 0007b310 help::Help_QueueMessage; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 000fea60 mobyutil::MB_randSphere; 0010581c mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 00131100 partupd::SpawnPart_60; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00193078 mobyupdate_helpers::M1035_00193078; 004fffb4 fastfunc::FastDecTimerS16; 00500b30 fastfunc::FastMtxScaleIdentity; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor
// strings: 00a1000c: 'None'

/* Moby 1035 */

void mobyupdate_unsorted::UpdateMoby_1035(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  undefined2 uVar8;
  bool bVar9;
  bool bVar10;
  short sVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 local_180 [16];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 local_150 [64];
  undefined1 auStack_110 [88];
  
  lVar14 = (longlong)(int)moby;
  bVar2 = moby->state;
  pvVar7 = moby->pVar;
  uVar17 = ZEXT48(pvVar7);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      DAT_00e5ff24 = 0x16;
      DAT_00e5ff14 = 0xb;
      DAT_00e5ff20 = 0x2d;
      DAT_00e5ff10 = 0;
      MVar6 = moby->modeBits;
      DAT_00e5ff18 = 0x17;
      DAT_00e5ff1c = 0x22;
      *(undefined4 *)((int)pvVar7 + 0x10) = 0xffffffff;
      moby->state = '\x01';
      moby->modeBits = MVar6 | CAN_BE_DAMAGED;
    }
    else {
      fastfunc::FastDecTimerS16(uVar17 + 0x16);
      iVar15 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar7 + 0x10));
      if (iVar15 == 0) {
        iVar15 = sound::PlayMobySound(0,4,moby);
        *(int *)((int)pvVar7 + 0x10) = iVar15;
      }
      mobyupdate_helpers::M1035_00193078(lVar14);
      fVar31 = (moby->pos).y - GameCamera.posY;
      fVar3 = (moby->pos).x - GameCamera.posX;
      fVar4 = (moby->pos).z - GameCamera.posZ;
      if (48.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar31 * fVar31)) {
        fVar31 = mobyutil::Delt(0.0,mobyutil::g_FrameTime * 2.0,(float *)((int)pvVar7 + 0x18));
        dVar23 = (double)fVar31;
      }
      else {
        dVar26 = 1.0;
        mobyutil::Delt(1.0,mobyutil::g_FrameTime * 2.0,(float *)((int)pvVar7 + 0x18));
        dVar25 = 0.5;
        dVar24 = 0.0;
        dVar23 = 1.5707963705062866;
        fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
        fastfunc::FastWrapRot((moby->rotation).z,(float)dVar23);
        uVar22 = 0x4014000000000000;
        mobyutil::SetCollDamIn(0x4014000000000000,local_180,lVar14,0x10001);
        collproc::CollLine(local_1d0,local_1c0,0,lVar14,local_180);
        if (((CHAR_ARRAY_00a1000c._344_2_ == 0) && (*(short *)((int)pvVar7 + 0x16) == 0)) &&
           (CollOutput.pMoby == g_heroMobyPtr)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          *(short *)((int)pvVar7 + 0x14) = *(short *)((int)pvVar7 + 0x14) + 1;
          auVar30 = loadVectorLeftIndexed(0x3c,0x19338c);
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar27 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = vectorSplatHalfWord(auVar27,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar27,0x16,uVar17);
          *(undefined2 *)((int)pvVar7 + 0x16) = uVar8;
        }
        dVar21 = 3.1415927410125732;
        fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
        fastfunc::FastWrapRot((moby->rotation).z,(float)dVar21);
        fastfunc::FastWrapRot((moby->rotation).z,(float)dVar23);
        fastfunc::FastWrapRot((moby->rotation).z,(float)dVar23);
        mobyutil::SetCollDamIn(uVar22,local_180,lVar14,0x10001);
        dVar23 = (double)collproc::CollLine(local_1d0,local_1c0,0,lVar14,local_180);
        if (((CHAR_ARRAY_00a1000c._344_2_ == 0) && (*(short *)((int)pvVar7 + 0x16) == 0)) &&
           (CollOutput.pMoby == g_heroMobyPtr)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          *(short *)((int)pvVar7 + 0x14) = *(short *)((int)pvVar7 + 0x14) + 1;
          auVar30 = loadVectorLeftIndexed(0x3c,0x19338c);
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar27 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = vectorSplatHalfWord(auVar27,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar27,0x16,uVar17);
          *(undefined2 *)((int)pvVar7 + 0x16) = uVar8;
        }
        if (DAT_00969f1c == moby) {
          fVar31 = (moby->transform).v0.y;
          fVar3 = (moby->transform).v0.x;
          fVar4 = (moby->transform).v0.z;
          dVar23 = dVar24;
          dVar21 = dVar24;
          if ((double)((g_heroPosition.z - (moby->pos).z) * fVar4 +
                      (g_heroPosition.x - (moby->pos).x) * fVar3 +
                      (g_heroPosition.y - (moby->pos).y) * fVar31) <= dVar24) {
            dVar25 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar31 * fVar31);
            if (dVar25 == dVar24) {
              fVar5 = (moby->transform).v0.w;
            }
            else {
              fVar1 = (float)(-1.0 / dVar25);
              fVar5 = (moby->transform).v0.w;
              dVar24 = (double)(fVar31 * fVar1);
              dVar23 = (double)(fVar3 * fVar1);
              dVar21 = (double)(fVar4 * fVar1);
            }
          }
          else {
            dVar20 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar31 * fVar31);
            if ((double)(float)SQRT(dVar20) == dVar24) {
              fVar5 = (moby->transform).v0.w;
            }
            else {
              dVar23 = 1.0 / SQRT(dVar20);
              fVar5 = (moby->transform).v0.w;
              dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar20 * dVar23) * dVar23 -
                                                       dVar26) * (double)(float)(dVar25 * dVar23) +
                                      dVar23);
              dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar20 * dVar23) * dVar23 -
                                                       dVar26) * (double)(float)(dVar25 * dVar23) +
                                      dVar23);
              fVar1 = (float)(-(double)(float)((double)(float)(dVar20 * dVar23) * dVar23 - dVar26) *
                              (double)(float)(dVar25 * dVar23) + dVar23);
              dVar23 = (double)(fVar3 * fVar1);
              dVar24 = (double)(fVar31 * fVar1);
              dVar21 = (double)(fVar4 * fVar1);
            }
          }
          dVar23 = (double)mobyutil::CollDamageMobyDirect
                                     (g_heroMobyPtr,0xc0,CONCAT44((float)dVar23,(float)dVar24),
                                      CONCAT44((float)dVar21,fVar5),CONCAT44(uStack_170,uStack_16c),
                                      CONCAT44(uStack_168,uStack_164),
                                      CONCAT44(uStack_160,uStack_15c),
                                      CONCAT44(uStack_158,uStack_154));
          if ((CHAR_ARRAY_00a1000c._344_2_ == 0) && (*(short *)((int)pvVar7 + 0x16) == 0)) {
            auVar27 = ZEXT416(0xffffffff);
            auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
            auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
            auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            *(short *)((int)pvVar7 + 0x14) = *(short *)((int)pvVar7 + 0x14) + 1;
            auVar27 = loadVectorLeftIndexed(0x3c,0x19338c);
            auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar27 = vectorMultiplyAddFloatingPoint
                                (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 |
                                         auVar27 << 0x60,auVar28);
            auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
            auVar27 = vectorSplatHalfWord(auVar27,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar27,0x16,uVar17);
            *(undefined2 *)((int)pvVar7 + 0x16) = uVar8;
          }
        }
      }
      if (*(int *)((int)pvVar7 + 0x18) != 0) {
        dVar23 = (double)RegisterFuncForMoby(&PTR_M1038_001942f4_00708528,moby);
      }
      if (CHAR_ARRAY_00a1000c._344_2_ == 0) {
        if ((*(short *)((int)pvVar7 + 0x16) == 0) &&
           (iVar15 = mobyutil::MB_damage(dVar23,lVar14,0x330000,0), iVar15 != 0)) {
          auVar27 = ZEXT416(0xffffffff);
          auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          *(short *)((int)pvVar7 + 0x14) = *(short *)((int)pvVar7 + 0x14) + 1;
          auVar30 = loadVectorLeftIndexed(0x3c,0x19338c);
          auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
          auVar27 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar27 = vectorMultiplyAddFloatingPoint
                              (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                               ,auVar28);
          auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
          auVar27 = vectorSplatHalfWord(auVar27,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar27,0x16,uVar17);
          *(undefined2 *)((int)pvVar7 + 0x16) = uVar8;
        }
        moby->damage = -1;
        if (2 < *(short *)((int)pvVar7 + 0x14)) {
          help::Help_QueueMessage(STR_YOU_CAN_TURN_OFF_0x1774,0x2b);
        }
      }
      bVar10 = true;
      iVar15 = 0;
      bVar9 = true;
      do {
        iVar18 = *(int *)uVar17;
        if (-1 < iVar18) {
          if (MobyInstance[iVar18].oClass == GADGEBOT_ENTRANCE) {
            if (MobyInstance[iVar18].state == '\x02') {
              bVar10 = false;
            }
            else {
              bVar9 = false;
            }
          }
          else if (MobyInstance[iVar18].setByGroup == '\0') {
            bVar9 = false;
          }
        }
        iVar15 = iVar15 + 1;
        uVar17 = uVar17 + 4;
      } while (iVar15 < 4);
      if (bVar9) {
        moby->collision = (ushort *)0x0;
        moby->state = '\x02';
        iVar15 = *(int *)((int)pvVar7 + 0x10);
        if (((iVar15 != -1) && (sound::g_SoundChannels[iVar15].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar15].state != '\0')) {
          sound::sound_Kill(iVar15);
        }
        *(undefined4 *)((int)pvVar7 + 0x10) = 0xffffffff;
        sound::PlayMobySound(1,0,moby);
        if ((bVar10) && (CHAR_ARRAY_00a1000c._344_2_ != -1)) {
          CHAR_ARRAY_00a1000c._344_2_ = CHAR_ARRAY_00a1000c._344_2_ + 1;
        }
        iVar15 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._346_2_ < iVar15 / 600) {
          sVar11 = (short)(iVar15 >> 0x1f);
          CHAR_ARRAY_00a1000c._346_2_ =
               ((short)(iVar15 / 600) + sVar11) -
               ((short)((short)(iVar15 / 0x2580000) + sVar11) >> 0xf);
        }
        CHAR_ARRAY_00a1000c._348_4_ = CHAR_ARRAY_00a1000c._348_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
  }
  else if (bVar2 < 3) {
    fastfunc::FastEulerToMtx1(local_150,lVar14 + 0x40);
    fastfunc::FastMtxScaleIdentity((double)DAT_00740050,auStack_110);
    fastfunc::FastVecMtx4Mul(local_150,local_150,auStack_110);
    iVar18 = 0;
    iVar15 = 0;
    do {
      fastfunc::FastEulerToMtx1(auStack_110,&DAT_0073ffc0 + iVar15);
      fastfunc::FastVecMtx4Mul(auStack_110,local_150,auStack_110);
      iVar16 = 0;
      dVar25 = 1.0;
      dVar24 = 0.0;
      dVar23 = 0.5;
      do {
        mobyutil::MB_randRangeSigned(dVar24,(double)(float)((double)DAT_0073ff2c * dVar23));
        uVar13 = DAT_00740064;
        uVar12 = DAT_00740060;
        mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
        uVar22 = fastfunc::FastLerpColor(uVar12,uVar13);
        uVar19 = mobyutil::MB_randRangeFloat(DAT_00740068,DAT_0074006c);
        mobyutil::MB_randRangeFloat((float)(longlong)DAT_00740070,(float)(longlong)DAT_00740074);
        fastfunc::FastDoubleToInt();
        mobyutil::MB_randSphere
                  ((double)(DAT_00740078 * mobyutil::g_FrameTime),
                   (double)(DAT_0074007c * mobyutil::g_FrameTime),auStack_190);
        mobyutil::MB_randInt(0xff);
        partupd::SpawnPart_60(uVar19,local_1a0,auStack_190,uVar22);
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x14);
      iVar18 = iVar18 + 1;
      iVar15 = iVar15 + 0x10;
    } while (iVar18 < 9);
    moby->state = '\x03';
  }
  else if (bVar2 < 4) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001942f4  ns=mobyupdate_helpers  size=0x344
// sig: undefined M1038_001942f4(void)
// callers(0): 
// callees(11): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00077c88 draw::DrawColorGradientStrip; 00174f80 vuchain::SetGSReg; 00500b30 fastfunc::FastMtxScaleIdentity; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1038_001942f4(int param_1)

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
  int iVar17;
  ulonglong *puVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  ulonglong unaff_r22;
  int iVar23;
  ulonglong unaff_r23;
  longlong lVar24;
  ulonglong unaff_r24;
  longlong lVar25;
  ulonglong unaff_r25;
  undefined *puVar26;
  ulonglong unaff_r26;
  float *pfVar27;
  ulonglong unaff_r27;
  longlong lVar28;
  float *pfVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar30;
  ulonglong unaff_r31;
  longlong lVar31;
  ulonglong in_LR;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar24 = uVar20 - 0x3b0;
  puVar18 = (ulonglong *)lVar24;
  *puVar18 = uVar20;
  puVar18[0x78] = in_LR;
  puVar18[0x72] = unaff_r28;
  puVar18[0x75] = unaff_r31;
  lVar31 = uVar20 - 0x340;
  puVar18[0x73] = unaff_r29;
  puVar18[0x74] = unaff_r30;
  puVar18[0x71] = unaff_r27;
  puVar18[0x70] = unaff_r26;
  puVar18[0x6f] = unaff_r25;
  puVar18[0x6e] = unaff_r24;
  puVar18[0x6d] = unaff_r23;
  puVar18[0x6c] = unaff_r22;
  iVar17 = *(int *)(param_1 + 0x78);
  fastfunc::FastEulerToMtx1(lVar31,param_1 + 0x40);
  fastfunc::FastMtxScaleIdentity((double)DAT_00740050,uVar20 - 0x300);
  fastfunc::FastVecMtx4Mul(lVar31,lVar31,uVar20 - 0x300);
  uVar21 = draw::GetEffectTex(0xe);
  vuchain::SetGSReg(0x18,uVar21);
  uVar21 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar21);
  uVar21 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar21);
  uVar21 = idol_draw::PackCmd(DAT_00e5eff0,DAT_0073fe60,DAT_00e5eff4,DAT_0073fe64,0x80);
  vuchain::SetGSReg(3,uVar21);
  stub::STUB_00071170();
  iVar23 = 0;
  lVar25 = uVar20 - 0x2c0;
  puVar26 = &DAT_0073ffc0;
  iVar30 = 0;
  lVar28 = uVar20 - 0x290;
  pfVar27 = (float *)&DAT_0073ff30;
  lVar31 = lVar25;
  do {
    fastfunc::FastEulerToMtx1(lVar31,puVar26);
    fastfunc::FastVecMtx4Mul(lVar31,uVar20 - 0x340,lVar31);
    fVar1 = pfVar27[1];
    fVar2 = *pfVar27;
    fVar3 = *(float *)((int)puVar18 + 0x84);
    fVar4 = pfVar27[2];
    fVar5 = *(float *)((int)puVar18 + 0x74);
    fVar6 = pfVar27[3];
    fVar7 = *(float *)(puVar18 + 0x11);
    fVar8 = *(float *)((int)puVar18 + 0x94);
    fVar9 = *(float *)(puVar18 + 0xf);
    iVar23 = iVar23 + 1;
    puVar26 = puVar26 + 0x10;
    fVar10 = *(float *)((int)puVar18 + 0xa4);
    fVar11 = *(float *)((int)puVar18 + 0x8c);
    fVar12 = *(float *)(puVar18 + 0x13);
    fVar13 = *(float *)((int)puVar18 + 0x7c);
    fVar14 = *(float *)(puVar18 + 0x15);
    fVar15 = *(float *)((int)puVar18 + 0x9c);
    fVar16 = *(float *)((int)puVar18 + 0xac);
    pfVar27 = pfVar27 + 4;
    lVar31 = lVar31 + 0x40;
    pfVar29 = (float *)lVar28;
    *pfVar29 = *(float *)(puVar18 + 0x14) * fVar6 +
               *(float *)(puVar18 + 0x12) * fVar4 +
               *(float *)(puVar18 + 0xe) * fVar2 + *(float *)(puVar18 + 0x10) * fVar1 +
               *(float *)(param_1 + 0x10);
    pfVar29[1] = fVar10 * fVar6 + fVar8 * fVar4 + fVar5 * fVar2 + fVar3 * fVar1 +
                 *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
    pfVar29[3] = fVar16 * fVar6 + fVar15 * fVar4 + fVar13 * fVar2 + fVar11 * fVar1;
    pfVar29[2] = fVar14 * fVar6 + fVar12 * fVar4 + fVar9 * fVar2 + fVar7 * fVar1 + fVar3;
    *(undefined4 *)((int)lVar24 + 300) = 0x3f800000;
    lVar28 = lVar28 + 0x40;
    lVar24 = lVar24 + 0x40;
  } while (iVar23 < 9);
  uVar22 = fastfunc::FastLerpColor
                     ((double)*(float *)(iVar17 + 0x18),DAT_0073fe70 & 0xffffff,DAT_0073fe70);
  puVar26 = PTR_DAT_0073fe74;
  *(undefined4 *)(puVar18 + 0x66) = DAT_00e5ff20;
  uVar19 = DAT_00e5ff24;
  *(undefined4 **)(puVar18 + 0x67) = &DAT_00e5ff10;
  *(undefined4 *)((int)puVar18 + 0x334) = uVar19;
  *(undefined4 *)((int)puVar18 + 0x33c) = uVar22;
  uVar19 = DAT_0073ff20;
  *(undefined **)(puVar18 + 0x68) = puVar26;
  uVar22 = DAT_00e5f000;
  *(undefined4 *)((int)puVar18 + 0x34c) = uVar19;
  *(undefined4 *)(puVar18 + 0x6a) = uVar22;
  *(undefined4 *)((int)puVar18 + 0x344) = 0x1e;
  *(undefined4 **)(puVar18 + 0x69) = &DAT_00e5f010;
  do {
    draw::DrawColorGradientStrip(uVar20 - 0x80,lVar25);
    iVar30 = iVar30 + 1;
    lVar25 = lVar25 + 0x40;
  } while (iVar30 < 9);
  return;
}



//==== 00194638  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1038_00194638(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1038_00194638(void)

{
  DAT_007400cc = 0x10000;
  return;
}



//==== 00194678  ns=mobyupdate_helpers  size=0x524
// sig: undefined M1038_00194678(void)
// callers(1): 00194cd0 mobyupdate_unsorted::UpdateMoby_1038
// callees(7): 000fc620 mobyutil::MB_randInt; 00130ed0 partupd::SpawnPart_59; 00131100 partupd::SpawnPart_60; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1038_00194678(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  char acVar14 [4];
  ulonglong uVar15;
  int iVar17;
  undefined8 uVar16;
  undefined1 uVar18;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar19;
  ulonglong unaff_r27;
  ulonglong uVar20;
  float *pfVar21;
  ulonglong unaff_r28;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar1 = uVar15 - 0x130;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar15;
  puVar7[0x28] = in_LR;
  puVar7[0x1f] = in_f25;
  puVar7[0x20] = in_f26;
  puVar7[0x21] = in_f27;
  puVar7[0x22] = in_f28;
  puVar7[0x23] = in_f29;
  puVar7[0x24] = in_f30;
  puVar7[0x25] = in_f31;
  puVar7[0x1a] = unaff_r27;
  fVar10 = GameCamera.posZ;
  fVar9 = GameCamera.posY;
  iVar8 = (int)param_1;
  uVar20 = (ulonglong)*(uint *)(iVar8 + 0x78);
  iVar17 = *(int *)(*(uint *)(iVar8 + 0x78) + 0x40);
  fVar3 = GameCamera.posX - *(float *)(iVar17 + 0x10);
  *(float *)(puVar7 + 0xe) = fVar3;
  fVar9 = fVar9 - *(float *)(iVar17 + 0x14);
  *(float *)((int)puVar7 + 0x74) = fVar9;
  acVar14 = GameCamera.field8_0x14c;
  fVar10 = fVar10 - *(float *)(iVar17 + 0x18);
  *(float *)(puVar7 + 0xf) = fVar10;
  *(char (*) [4])((int)puVar7 + 0x7c) = acVar14;
  dVar30 = 0.0;
  fVar11 = SQRT(fVar10 * fVar10 + fVar3 * fVar3 + fVar9 * fVar9);
  puVar7[0x1c] = unaff_r29;
  puVar7[0x19] = unaff_r26;
  iVar19 = 0;
  puVar7[0x1d] = unaff_r30;
  puVar7[0x1b] = unaff_r28;
  puVar7[0x1e] = unaff_r31;
  lVar22 = uVar20 + 0x20;
  fVar13 = -0.3 / fVar11;
  dVar23 = dVar30;
  if (0.0 - fVar11 < 0.0) {
    dVar23 = (double)(fVar9 * fVar13);
  }
  dVar25 = dVar30;
  if (0.0 - fVar11 < 0.0) {
    dVar25 = (double)(fVar3 * fVar13);
  }
  dVar28 = dVar30;
  if (0.0 - fVar11 < 0.0) {
    dVar28 = (double)(fVar10 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar23 = (double)(fVar9 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar25 = (double)(fVar3 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar28 = (double)(fVar10 * fVar13);
  }
  *(float *)(puVar7 + 0xe) = (float)dVar25;
  *(float *)((int)puVar7 + 0x74) = (float)dVar23;
  *(float *)(puVar7 + 0xf) = (float)dVar28;
  *(float *)(puVar7 + 0xe) = (float)(dVar25 + (double)*(float *)(iVar17 + 0x10));
  fVar3 = SQRT((float)(dVar28 * dVar28 +
                      (double)(float)(dVar25 * dVar25 + (double)(float)(dVar23 * dVar23))));
  *(float *)((int)puVar7 + 0x74) = (float)(dVar23 + (double)*(float *)(iVar17 + 0x14));
  dVar26 = (double)(0.1 / fVar3);
  *(float *)(puVar7 + 0xf) = (float)(dVar28 + (double)*(float *)(iVar17 + 0x18));
  dVar31 = 255.0;
  auVar38 = loadVectorLeftIndexed(0x10,0x194650);
  dVar32 = 255.5;
  auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  dVar33 = 0.5;
  dVar34 = dVar30;
  if (0.0 - fVar3 < 0.0) {
    dVar34 = (double)(float)(dVar28 * dVar26);
  }
  dVar27 = dVar30;
  if (0.0 - fVar3 < 0.0) {
    dVar27 = (double)(float)(dVar23 * dVar26);
  }
  dVar29 = dVar30;
  if (0.0 - fVar3 < 0.0) {
    dVar29 = (double)(float)(dVar25 * dVar26);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar34 = (double)(float)(dVar28 * dVar26);
  }
  puVar7[0x18] = unaff_r25;
  if (fVar3 - 0.0 < 0.0) {
    dVar27 = (double)(float)(dVar23 * dVar26);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar29 = (double)(float)(dVar25 * dVar26);
  }
  do {
    pfVar21 = (float *)uVar20;
    dVar23 = (double)(*pfVar21 + pfVar21[4]);
    *pfVar21 = *pfVar21 + pfVar21[4];
    if (dVar23 < dVar31) {
      if (dVar23 <= dVar30) {
        *pfVar21 = (float)(dVar23 + dVar31);
      }
    }
    else {
      *pfVar21 = (float)(dVar23 - dVar31);
    }
    iVar17 = fastfunc::FastDecTimerS32(uVar20 + 0x20);
    dVar23 = (double)animationSpeed;
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar3 = pfVar21[8];
    if (iVar17 != 0) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar38,auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      puVar7[0x14] = (longlong)(int)(dVar23 * dVar32);
      fVar3 = *(float *)((int)puVar7 + 0xa4);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0,lVar22);
      *(undefined4 *)((uint)lVar22 & 0xfffffffc) = uVar4;
    }
    puVar7[0x14] = (longlong)(int)(dVar23 * dVar32);
    dVar23 = (double)fastfunc::FastIntToDouble(*(int *)((int)puVar7 + 0xa4) - (int)fVar3);
    uVar16 = fastfunc::FastLerpColor
                       (ABS((double)(float)(dVar33 - (double)(float)(dVar23 / (double)(longlong)
                                                                                      ((double)
                                                  animationSpeed * dVar32)))),DAT_007400f0,
                        DAT_007400f4);
    uVar18 = fastfunc::FastDoubleToInt((double)*pfVar21);
    partupd::SpawnPart_59
              ((double)pfVar21[0xc],uVar15 - 0xc0,uVar16,uVar18,DAT_007400fc,DAT_007400f8,2,
               DAT_007400f8,0);
    iVar19 = iVar19 + 1;
    lVar22 = lVar22 + 4;
    uVar20 = uVar20 + 4;
    *(float *)(puVar7 + 0xe) = (float)((double)*(float *)(puVar7 + 0xe) + dVar29);
    *(float *)((int)puVar7 + 0x74) = (float)((double)*(float *)((int)puVar7 + 0x74) + dVar27);
    *(float *)(puVar7 + 0xf) = (float)((double)*(float *)(puVar7 + 0xf) + dVar34);
  } while (iVar19 < 4);
  auVar38 = loadVectorLeftIndexed(0x710,0xa10000);
  if (((worldUpdateTime & 3) == 3) && (*(char *)(iVar8 + 0x31) != '\0')) {
    auVar35 = ZEXT416(4);
    uVar12 = worldUpdateTime & 4;
    auVar36 = ZEXT416(0xffffffff);
    auVar6 = ZEXT416(1);
    *(undefined4 *)((int)puVar7 + 0x8c) = 0;
    auVar35 = vectorLogicalAnd(auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                              );
    auVar38 = ZEXT416(0);
    auVar37 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    *(undefined4 *)((int)puVar7 + 0x84) = 0;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    auVar38 = vectorCompareEqualToUnsignedWord(auVar35,auVar37);
    auVar35 = vectorConditionalSelect
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                         auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar38);
    auVar38 = ZEXT416(0xffffffff);
    auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar35 = vectorConvertFromSignedFixedPointWord(auVar35,0);
    auVar36 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    puVar7[0x14] = (longlong)(int)(((uint)((LZCOUNT(-uVar12) << 0x3a) >> 0x3f) & 2) - 1);
    auVar38 = loadVectorLeftIndexed(0x18,0x194650);
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar24 = puVar7[0x14];
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                         auVar36);
    uVar20 = (ulonglong)DAT_00740108;
    auVar38 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar7 + 0x11) = uVar4;
    puVar7[0x14] = uVar20;
    fVar3 = (float)(longlong)uVar24 * 0.9;
    dVar28 = (double)SQRT(fVar3 * fVar3);
    fVar9 = animationSpeed * (float)((double)(longlong)puVar7[0x14] + dVar33);
    fVar10 = animationSpeed * (float)((double)(longlong)puVar7[0x14] + dVar33);
    uVar4 = *(undefined4 *)(iVar8 + 0x10);
    uVar2 = *(undefined4 *)(iVar8 + 0x14);
    uVar5 = storeVectorElementWordIndexed(auVar37,0x90,lVar1);
    *(undefined4 *)(puVar7 + 0x12) = uVar5;
    uVar5 = storeVectorElementWordIndexed(auVar37,0x94,lVar1);
    *(undefined4 *)((int)puVar7 + 0x94) = uVar5;
    *(undefined4 *)((int)puVar7 + 0x9c) = 0;
    *(undefined4 *)(puVar7 + 0x10) = uVar4;
    *(undefined4 *)((int)puVar7 + 0x84) = uVar2;
    uVar4 = DAT_00740100;
    auVar38 = loadVectorLeftIndexed(0x18,param_1);
    auVar38 = vectorAddFloatingPoint(auVar35,auVar38);
    dVar34 = (double)DAT_00740104;
    dVar25 = (double)(fVar3 * (float)((double)(-2.0 / (float)(longlong)fVar9) / dVar28));
    dVar23 = dVar30;
    if (dVar30 - dVar28 < 0.0) {
      dVar23 = dVar25;
    }
    if (dVar28 - dVar30 < 0.0) {
      dVar23 = dVar25;
    }
    *(float *)(puVar7 + 0x13) = (float)dVar23;
    auVar35 = loadVectorLeftIndexed(0x20,0x194650);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = vectorAddFloatingPoint
                        (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar7 + 0x11) = uVar2;
    fastfunc::FastDoubleToInt((double)(longlong)fVar10);
    mobyutil::MB_randInt(0xff);
    partupd::SpawnPart_60(dVar34,uVar15 - 0xb0,uVar15 - 0xa0,uVar4);
  }
  return;
}



//==== 00194ba8  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1038_00194ba8(void)
// callers(1): 00194cd0 mobyupdate_unsorted::UpdateMoby_1038
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M1038_00194ba8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = mobyutil::MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)uVar5 = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0xc0000000;
  *(undefined4 *)(uVar1 + 0x14) = 0xc0880000;
  *(undefined4 *)(uVar1 + 0x18) = 0x40100000;
  *(undefined4 *)(uVar1 + 0x1c) = 0x40900000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x194b9c);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x20;
  auVar8 = loadVectorLeftIndexed(4,0x194b9c);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x194b9c);
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7._0_4_ = iVar4 + auVar9._0_4_;
    auVar7._8_8_ = in_vs39._8_8_;
    auVar7._4_4_ = iVar10 + auVar9._4_4_;
    auVar16._0_8_ = auVar7._0_8_;
    auVar16._8_4_ = iVar11 + auVar9._8_4_;
    auVar16._12_4_ = iVar12 + auVar9._12_4_;
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8._0_4_;
    iVar10 = iVar10 + auVar8._4_4_;
    iVar11 = iVar11 + auVar8._8_4_;
    iVar12 = iVar12 + auVar8._12_4_;
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x30) = 0x3fe00000;
  *(undefined4 *)(uVar1 + 0x34) = 0x40100000;
  *(undefined4 *)(uVar1 + 0x38) = 0x40100000;
  *(undefined4 *)(uVar1 + 0x3c) = 0x3fe00000;
  return;
}



//==== 00194cd0  ns=mobyupdate_unsorted  size=0x2f8
// sig: undefined UpdateMoby_1038(MobyInstance * moby)
// callers(0): 
// callees(6): 000efa28 mobyfunc::CreateMoby; 000fcc68 mobyutil::MB_randRot; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00194678 mobyupdate_helpers::M1038_00194678; 00194ba8 mobyupdate_helpers::M1038_00194ba8

/* Moby 1038 */

void mobyupdate_unsorted::UpdateMoby_1038(MobyInstance *moby)

{
  ushort uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  MobyInstance *pMVar6;
  float *ip;
  double dVar7;
  
  pvVar2 = moby->pVar;
  if (moby->state == 0) {
    if (((*(uint *)(&DAT_00a0cd1c +
                   Level * 0x100 + (int)((longlong)((int)(short)moby->uid >> 5) << 2)) &
         1 << (moby->uid & 0x1f)) == 0) ||
       ((Level == Orxon && (g_LevelFlags[10][(byte)moby->levelFlagIdx] != -1)))) {
      pMVar6 = mobyfunc::CreateMoby(ENERGY_SPHERE_0410);
      pMVar6->updateDistance = '@';
      pMVar6->drawDistance = 0x40;
      pMVar6->enabled = '\x01';
      uVar3 = moby->light;
      pMVar6->color = moby->color;
      pMVar6->light = uVar3;
      pMVar6->modeBits = moby->modeBits | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
      (pMVar6->pos).x = (moby->pos).x;
      (pMVar6->pos).y = (moby->pos).y;
      (pMVar6->pos).z = (moby->pos).z;
      (pMVar6->pos).w = (moby->pos).w;
      dVar7 = (double)mobyutil::MB_randRot();
      (pMVar6->rotation).x = (float)dVar7;
      dVar7 = (double)mobyutil::MB_randRot();
      (pMVar6->rotation).y = (float)dVar7;
      dVar7 = (double)mobyutil::MB_randRot();
      (pMVar6->rotation).z = (float)dVar7;
      (pMVar6->pos).z = (pMVar6->pos).z + 0.85;
      *(MobyInstance **)((int)pvVar2 + 0x40) = pMVar6;
      moby->state = '\x01';
      mobyupdate_helpers::M1038_00194ba8(moby);
      uVar1 = moby->uid;
      iVar5 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      uVar3 = *(uint *)(&DAT_00a54dd0 + iVar4);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar5) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar5) & ~(1 << (uVar1 & 0x1f));
      *(uint *)(&DAT_00a54dd0 + iVar4) = uVar3 & ~(1 << (uVar1 & 0x1f));
    }
    else {
      moby->state = '\x02';
      moby->setByGroup = '\x01';
    }
  }
  else if (moby->state < 2) {
    ip = (float *)mobyutil::MB_damage(moby,0x330000,0);
    if (ip != (float *)0x0) {
      mobyutil::CollDamageMobyDirect
                (1.0,*(MobyInstance **)((int)pvVar2 + 0x40),(MobyInstance *)ip[8],0x10000,
                 (int)*(MobyInstance **)((int)pvVar2 + 0x40),ip,ip + 4);
      moby->damage = -1;
    }
    if (*(byte *)(*(int *)((int)pvVar2 + 0x40) + 0x20) < 0x80) {
      mobyupdate_helpers::M1038_00194678(moby);
    }
    else {
      uVar1 = moby->uid;
      moby->setByGroup = '\x01';
      moby->state = '\x02';
      iVar5 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      uVar3 = *(uint *)(&DAT_00a54dd0 + iVar4);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar5) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar5) | 1 << (uVar1 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar4) = uVar3 | 1 << (uVar1 & 0x1f);
    }
  }
  return;
}



//==== 00194fc8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1039_00194fc8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1039_00194fc8(void)

{
  DAT_00740158 = 0x10000;
  return;
}



//==== 00194fe8  ns=mobyupdate_unsorted  size=0x1d8
// sig: undefined UpdateMoby_1039(MobyInstance * moby)
// callers(0): 
// callees(4): 0006dad0 draw::FadeToBlack; 00083950 hero::HandleHeroDeath; 000b72b0 hero::TransitionMovement; 00110b70 mobyutil::MB_IsPntInCuboid

/* Moby 1039 */

void mobyupdate_unsorted::UpdateMoby_1039(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  
  piVar5 = (int *)moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if ((moby->state < 2) &&
          ((((g_heroState != TURRET_PLANE_UI || (DAT_0096b2d0 == 0)) ||
            (*(char *)(DAT_0096b2d0 + 0x20) == -3 || *(char *)(DAT_0096b2d0 + 0x20) == -2)) ||
           (DAT_0096b2d4 != 0x45)))) {
    iVar2 = 0;
    iVar4 = 0;
    dVar6 = 10.5;
    piVar3 = piVar5;
    do {
      if ((-1 < *piVar3) &&
         (iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar3), iVar1 != 0)) {
        if (g_heroType == '\0') {
          if (g_heroState != DEATH_FALLING) {
            hero::TransitionMovement(0x77,1);
          }
        }
        else {
          draw::FadeToBlack((int)((double)animationSpeed * dVar6));
          hero::HandleHeroDeath();
        }
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x20);
    do {
      if ((-1 < piVar5[0x20]) &&
         (iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar5[0x20]), iVar2 != 0)) {
        draw::FadeToBlack((int)((double)animationSpeed * dVar6));
        hero::HandleHeroDeath();
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 0x20);
  }
  return;
}



//==== 001951c0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1129_001951c0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1129_001951c0(void)

{
  DAT_007401c8 = 0x10000;
  return;
}



//==== 001951e0  ns=mobyupdate_unsorted  size=0x6b0
// sig: undefined UpdateMoby_{104_106_1129}(MobyInstance * moby)
// callers(0): 
// callees(2): 00112900 mobyutil::MB_GetOrientation; 0015d12c sound::PlayMobySound

/* Moby 104
   Moby 106
   Moby 1129 */

void mobyupdate_unsorted::UpdateMoby__104_106_1129_(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
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
  void *pvVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  Vec4 local_80;
  f32 local_70;
  f32 local_6c;
  f32 local_68;
  f32 local_64;
  
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).z;
  local_80.x = -fVar3;
  pvVar16 = moby->pVar;
  local_80.w = (moby->pos).w;
  local_80.y = -fVar4;
  local_70 = (moby->rotation).x;
  local_80.z = -fVar5;
  local_6c = (moby->rotation).y;
  local_68 = (moby->rotation).z;
  local_64 = (moby->rotation).w;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    *(undefined4 *)((int)pvVar16 + 0xb0) = 0xffffffff;
    fVar3 = (moby->pos).x;
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).z;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if ((*(int *)((int)pvVar16 + 0xb0) != -1) &&
       (MobyInstance + *(int *)((int)pvVar16 + 0xb0) != (MobyInstance *)0x0)) {
      bVar2 = MobyInstance[*(int *)((int)pvVar16 + 0xb0)].state;
      if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((uint)bVar2 != *(uint *)((int)pvVar16 + 0xb4))) {
        fVar6 = *(float *)((int)pvVar16 + 0xc0);
        fVar7 = *(float *)((int)pvVar16 + 0xbc);
        fVar8 = *(float *)((int)pvVar16 + 0xc4);
        fVar9 = 0.0;
        fVar10 = (moby->transform).v0.y;
        fVar21 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
        fVar11 = (moby->transform).v0.z;
        fVar12 = (moby->transform).v2.y;
        fVar13 = (moby->transform).v2.z;
        fVar14 = (moby->transform).v1.y;
        fVar15 = (moby->transform).v1.z;
        fVar20 = -(*(float *)((int)pvVar16 + 0xcc) * mobyutil::g_FrameTime) / fVar21;
        fVar18 = fVar9;
        if (0.0 - fVar21 < 0.0) {
          fVar18 = fVar20 * fVar7;
        }
        fVar19 = fVar9;
        if (0.0 - fVar21 < 0.0) {
          fVar19 = fVar20 * fVar8;
        }
        if (0.0 - fVar21 < 0.0) {
          fVar9 = fVar20 * fVar6;
        }
        if (fVar21 - 0.0 < 0.0) {
          fVar18 = fVar20 * fVar7;
        }
        if (fVar21 - 0.0 < 0.0) {
          fVar19 = fVar20 * fVar8;
        }
        if (fVar21 - 0.0 < 0.0) {
          fVar9 = fVar20 * fVar6;
        }
        (moby->pos).x =
             (moby->transform).v1.x * fVar9 +
             (moby->transform).v2.x * fVar19 + (moby->transform).v0.x * fVar18 + fVar3;
        (moby->pos).y = fVar14 * fVar9 + fVar12 * fVar19 + fVar10 * fVar18 + fVar4;
        (moby->pos).z = fVar15 * fVar9 + fVar13 * fVar19 + fVar11 * fVar18 + fVar5;
        fVar3 = *(float *)((int)pvVar16 + 0xcc) * mobyutil::g_FrameTime +
                *(float *)((int)pvVar16 + 0xac);
        *(float *)((int)pvVar16 + 0xac) = fVar3;
        if (fVar21 < fVar3) {
          (moby->pos).x = *(f32 *)((int)pvVar16 + 0xa0);
          iVar17 = *(int *)((int)pvVar16 + 0xd0);
          (moby->pos).y = *(f32 *)((int)pvVar16 + 0xa4);
          (moby->pos).z = *(f32 *)((int)pvVar16 + 0xa8);
          (moby->pos).w = *(f32 *)((int)pvVar16 + 0xac);
          if (iVar17 != -1) {
            sound::PlayMobySound(*(int *)((int)pvVar16 + 0xd4),0,moby);
          }
          if (*(int *)((int)pvVar16 + 0xd8) != -1) {
            (&DAT_00a20828)[*(int *)((int)pvVar16 + 0xd8)] = 0;
          }
          moby->state = '\x01';
        }
        goto LAB_00195808;
      }
    }
    if (*(int *)((int)pvVar16 + 0xd0) != -1) {
      sound::PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\x03') {
    if ((*(int *)((int)pvVar16 + 0xb0) != -1) &&
       (MobyInstance + *(int *)((int)pvVar16 + 0xb0) != (MobyInstance *)0x0)) {
      bVar2 = MobyInstance[*(int *)((int)pvVar16 + 0xb0)].state;
      if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((uint)bVar2 == *(uint *)((int)pvVar16 + 0xb8))) {
        *(undefined4 *)((int)pvVar16 + 0xac) = 0;
        if (*(int *)((int)pvVar16 + 0xd0) != -1) {
          sound::PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
        }
        moby->state = '\x04';
      }
    }
  }
  else if (uVar1 == '\x02') {
    if ((*(int *)((int)pvVar16 + 0xb0) != -1) &&
       (MobyInstance + *(int *)((int)pvVar16 + 0xb0) != (MobyInstance *)0x0)) {
      bVar2 = MobyInstance[*(int *)((int)pvVar16 + 0xb0)].state;
      if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((uint)bVar2 == *(uint *)((int)pvVar16 + 0xb8))) {
        if (*(int *)((int)pvVar16 + 0xd0) != -1) {
          sound::PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
        }
        moby->state = '\x04';
        goto LAB_00195808;
      }
    }
    fVar6 = *(float *)((int)pvVar16 + 0xc0);
    fVar7 = *(float *)((int)pvVar16 + 0xbc);
    fVar8 = *(float *)((int)pvVar16 + 0xc4);
    fVar11 = (moby->transform).v2.y * fVar8 +
             (moby->transform).v0.y * fVar7 + (moby->transform).v1.y * fVar6;
    fVar10 = (moby->transform).v2.x * fVar8 +
             (moby->transform).v0.x * fVar7 + (moby->transform).v1.x * fVar6;
    fVar9 = (moby->transform).v2.z * fVar8 +
            (moby->transform).v0.z * fVar7 + (moby->transform).v1.z * fVar6;
    fVar6 = 0.0;
    fVar12 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
    fVar8 = (*(float *)((int)pvVar16 + 200) * mobyutil::g_FrameTime) / fVar12;
    fVar7 = fVar6;
    if (0.0 - fVar12 < 0.0) {
      fVar7 = fVar9 * fVar8;
    }
    fVar13 = fVar6;
    if (0.0 - fVar12 < 0.0) {
      fVar13 = fVar11 * fVar8;
    }
    if (0.0 - fVar12 < 0.0) {
      fVar6 = fVar10 * fVar8;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar7 = fVar9 * fVar8;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar13 = fVar11 * fVar8;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar6 = fVar10 * fVar8;
    }
    (moby->pos).z = fVar5 + fVar7;
    (moby->pos).y = fVar4 + fVar13;
    (moby->pos).x = fVar3 + fVar6;
    fVar3 = -(*(float *)((int)pvVar16 + 200) * mobyutil::g_FrameTime -
             *(float *)((int)pvVar16 + 0xac));
    *(float *)((int)pvVar16 + 0xac) = fVar3;
    if (fVar3 < 0.0) {
      iVar17 = *(int *)((int)pvVar16 + 0xd8);
      (moby->pos).x = *(float *)((int)pvVar16 + 0xa0) + fVar10;
      (moby->pos).y = *(float *)((int)pvVar16 + 0xa4) + fVar11;
      (moby->pos).z = *(float *)((int)pvVar16 + 0xa8) + fVar9;
      (moby->pos).w = *(f32 *)((int)pvVar16 + 0xac);
      *(undefined4 *)((int)pvVar16 + 0xac) = 0;
      if (iVar17 != -1) {
        (&DAT_00a20828)[iVar17] = 1;
      }
      moby->state = '\x03';
      if (*(int *)((int)pvVar16 + 0xd4) != -1) {
        sound::PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(int *)((int)pvVar16 + 0xb0) != -1) &&
       (MobyInstance + *(int *)((int)pvVar16 + 0xb0) != (MobyInstance *)0x0)) {
      bVar2 = MobyInstance[*(int *)((int)pvVar16 + 0xb0)].state;
      if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((uint)bVar2 != *(uint *)((int)pvVar16 + 0xb4)))
      goto LAB_00195808;
    }
    *(float *)((int)pvVar16 + 0xac) =
         SQRT(*(float *)((int)pvVar16 + 0xc4) * *(float *)((int)pvVar16 + 0xc4) +
              *(float *)((int)pvVar16 + 0xbc) * *(float *)((int)pvVar16 + 0xbc) +
              *(float *)((int)pvVar16 + 0xc0) * *(float *)((int)pvVar16 + 0xc0));
    if (*(int *)((int)pvVar16 + 0xd0) != -1) {
      sound::PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\0') {
    *(float *)((int)pvVar16 + 0xa0) = fVar3;
    *(f32 *)((int)pvVar16 + 0xa4) = (moby->pos).y;
    *(f32 *)((int)pvVar16 + 0xa8) = (moby->pos).z;
    *(f32 *)((int)pvVar16 + 0xac) = (moby->pos).w;
    if (*(int *)((int)pvVar16 + 0xd8) != -1) {
      (&DAT_00a20828)[*(int *)((int)pvVar16 + 0xd8)] = 0;
    }
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar16 + 0xac) = 0;
  }
LAB_00195808:
  local_80.x = local_80.x + (moby->pos).x;
  local_80.y = local_80.y + (moby->pos).y;
  local_80.z = local_80.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar16 + 0x60),&local_80,ZEXT48(&stack0x00000000) - 0x70,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 00195890  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1129_00195890(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1129_00195890(void)

{
  DAT_00740238 = 0x10000;
  return;
}



//==== 001958b0  ns=mobyupdate_helpers  size=0x18c
// sig: undefined M1129_001958b0(void)
// callers(0): 
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 00131100 partupd::SpawnPart_60; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1129_001958b0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_50 [24];
  
  iVar7 = 0;
  dVar9 = 0.0;
  dVar10 = 1.0;
  do {
    mobyutil::MB_randSphere
              ((double)(DAT_0074026c * mobyutil::g_FrameTime),
               (double)(DAT_00740270 * mobyutil::g_FrameTime),auStack_50);
    uVar8 = mobyutil::MB_randRangeFloat(DAT_0074028c,DAT_00740290);
    iVar6 = mobyutil::MB_randInt(2);
    uVar4 = DAT_00740288;
    uVar3 = DAT_00740284;
    uVar2 = DAT_00740280;
    uVar1 = DAT_0074027c;
    if (iVar6 == 0) {
      mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
      uVar5 = fastfunc::FastLerpColor(uVar3,uVar4);
    }
    else {
      mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
      uVar5 = fastfunc::FastLerpColor(uVar1,uVar2);
    }
    mobyutil::MB_randInt(0xff);
    partupd::SpawnPart_60(uVar8,param_1 + 0x10,auStack_50,uVar5);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x28);
  return;
}



//==== 00195a48  ns=mobyupdate_unsorted  size=0x360
// sig: undefined UpdateMoby_1040(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0010675c mobyutil::MB_damage; 00131100 partupd::SpawnPart_60; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

/* Moby 1040 */

void mobyupdate_unsorted::UpdateMoby_1040(MobyInstance *moby)

{
  float fVar1;
  MobyModeBit MVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar10;
  int iVar11;
  undefined8 uVar9;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_60 [24];
  
  piVar3 = (int *)moby->pVar;
  iVar10 = mobyutil::MB_damage((longlong)(int)moby,0x330000,0);
  if (iVar10 != 0) {
    iVar10 = 0;
    dVar13 = 1.0;
    dVar14 = 0.0;
    do {
      mobyutil::MB_randSphere
                ((double)(DAT_0074026c * mobyutil::g_FrameTime),
                 (double)(DAT_00740270 * mobyutil::g_FrameTime),auStack_60);
      uVar12 = mobyutil::MB_randRangeFloat(DAT_0074028c,DAT_00740290);
      iVar11 = mobyutil::MB_randInt(2);
      uVar8 = DAT_00740288;
      uVar7 = DAT_00740284;
      uVar6 = DAT_00740280;
      uVar5 = DAT_0074027c;
      if (iVar11 == 0) {
        mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar13);
        uVar9 = fastfunc::FastLerpColor(uVar7,uVar8);
      }
      else {
        mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar13);
        uVar9 = fastfunc::FastLerpColor(uVar5,uVar6);
      }
      mobyutil::MB_randInt(0xff);
      partupd::SpawnPart_60(uVar12,(longlong)(int)moby + 0x10,auStack_60,uVar9);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x28);
    sound::PlayMobySound(1,0,moby);
    iVar10 = piVar3[0x18];
    if (((iVar10 != -1) && (sound::g_SoundChannels[iVar10].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar10].state != '\0')) {
      sound::sound_Kill(iVar10);
    }
    piVar3[0x18] = -1;
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (moby->state == 0) {
    mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
    fVar4 = DAT_00740268;
    MVar2 = moby->modeBits;
    fVar1 = moby->pClass->gScale;
    *piVar3 = (int)(piVar3 + 8);
    moby->state = '\x01';
    moby->modeBits = MVar2 | HAS_SPECIAL_VARS;
    piVar3[0x18] = -1;
    moby->scale = fVar1 * fVar4;
  }
  else if (1 < moby->state) goto LAB_00195d40;
  dVar14 = 0.01745329238474369;
  dVar13 = (double)fastfunc::FastWrapRot
                             ((moby->rotation).x,DAT_0074025c * 0.017453292 * mobyutil::g_FrameTime)
  ;
  (moby->rotation).x = (float)dVar13;
  dVar13 = (double)fastfunc::FastWrapRot
                             ((moby->rotation).y,
                              (float)((double)DAT_00740260 * dVar14) * mobyutil::g_FrameTime);
  (moby->rotation).y = (float)dVar13;
  dVar13 = (double)fastfunc::FastWrapRot
                             ((moby->rotation).z,
                              (float)((double)DAT_00740264 * dVar14) * mobyutil::g_FrameTime);
  (moby->rotation).z = (float)dVar13;
LAB_00195d40:
  iVar10 = sound::IsMobyPlayingSound(moby,piVar3[0x18]);
  if (iVar10 == 0) {
    iVar10 = sound::PlayMobySound(0,4,moby);
    piVar3[0x18] = iVar10;
  }
  return;
}



//==== 00195e08  ns=mobyupdate_unsorted  size=0xc7c
// sig: undefined UpdateMoby_1041(MobyInstance * moby)
// callers(0): 
// callees(24): 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00108180 mobyutil::MB_computeLobVelocity; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound; 004a1030 mobyupdate_helpers::M881_004a1030; 004fffb4 fastfunc::FastDecTimerS16; 00500ca4 fastfunc::FastEulerToMtx1; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

/* Moby 1041 */

void mobyupdate_unsorted::UpdateMoby_1041(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar19;
  float *pfVar24;
  longlong lVar23;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f24;
  double dVar36;
  ulonglong in_f25;
  ulonglong in_f26;
  double in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0x290;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar17;
  puVar13[0x54] = in_LR;
  puVar13[0x4a] = in_f24;
  puVar13[0x4b] = in_f25;
  puVar13[0x4c] = in_f26;
  puVar13[0x4d] = (ulonglong)in_f27;
  puVar13[0x4e] = in_f28;
  puVar13[0x4f] = in_f29;
  puVar13[0x50] = in_f30;
  puVar13[0x51] = in_f31;
  puVar13[0x46] = unaff_r28;
  puVar13[0x45] = unaff_r27;
  puVar13[0x49] = unaff_r31;
  puVar13[0x48] = unaff_r30;
  puVar13[0x47] = unaff_r29;
  puVar13[0x44] = unaff_r26;
  if (moby != (MobyInstance *)0x0) {
    pvVar8 = moby->pVar;
    uVar27 = ZEXT48(pvVar8);
    if ((moby->enabled != '\0') &&
       (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
       fVar5 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 27.0)) {
      mobyutil::MB_SetZBoundsFromGround(lVar18);
      moby->shadow = '\x15';
    }
    if (pvVar8 != (void *)0x0) {
      iVar20 = mobyutil::MB_damage(lVar18,0x230000,0);
      iVar21 = mobyutil::MB_HandleDamage(moby,iVar20,uVar27 + 0x20,0,puVar13 + 0x36,0,0,4);
      iVar22 = *(int *)(puVar13 + 0x36);
      if (((iVar21 < 3) && (-1 < iVar21)) && (0 < iVar21)) {
        *(undefined4 *)((int)pvVar8 + 0x20) = 0;
      }
      if ((1 < iVar22) &&
         (((iVar20 == 0 || (*(int *)(iVar20 + 0x20) == 0)) ||
          (*(short *)(*(int *)(iVar20 + 0x20) + 0xa6) != 0x372)))) {
        uVar9 = (int)*(uint *)((int)pvVar8 + 0x20) >> 0x1f;
        uVar10 = (int)*(uint *)(iVar20 + 0x2c) >> 0x1f;
        fVar3 = *(float *)(iVar20 + 0x2c);
        if ((int)((uVar9 >> 1 ^ *(uint *)((int)pvVar8 + 0x20)) - uVar9) <=
            (int)((uVar10 >> 1 ^ *(uint *)(iVar20 + 0x2c)) - uVar10)) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar18,0,0xffffffffffffffff);
          uVar38 = 0;
          *(undefined4 *)((int)pvVar8 + 0x20) = 0;
          *(undefined4 *)((int)puVar13 + 0xcc) = 0;
          *(undefined4 *)(puVar13 + 0x19) = 0;
          *(undefined4 *)((int)puVar13 + 0xc4) = 0;
          *(undefined4 *)(puVar13 + 0x18) = 0;
          puVar13[0x12] = 1;
          puVar13[0x14] = 1;
          puVar13[0x15] = 1;
          puVar13[0x16] = 0xffffffffffffffff;
          puVar13[0x17] = 0;
          mobyutil::MB_genericExplosion
                    (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,lVar18,uVar17 - 0x1d0,0,0,1,10,3,0x10);
          puVar13[0xe] = ZEXT48(&DAT_00a15d30);
          puVar13[0xf] = ZEXT48(&DAT_00a15d30);
          mobyutil::MB_SpawnDebrisMoby(uVar38,lVar18,0x621,lVar18 + 0x10,lVar18 + 0x40,0,0);
          puVar13[0xe] = ZEXT48(&DAT_00a15d30);
          puVar13[0xf] = ZEXT48(&DAT_00a15d30);
          mobyutil::MB_SpawnDebrisMoby(uVar38,lVar18,0x622,lVar18 + 0x10,lVar18 + 0x40,0,0);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
        auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        *(float *)((int)pvVar8 + 0x20) = *(float *)((int)pvVar8 + 0x20) - fVar3;
        auVar41 = loadVectorLeftIndexed(0x1c,0x195da8);
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x26,uVar27);
        *(undefined2 *)((int)pvVar8 + 0x26) = uVar11;
        mobyutil::MB_UpdateLightsTransition(lVar18,uVar27 + 0x60);
      }
      moby->damage = -1;
      mobyutil::MB_ColorDyingMoby(lVar18,uVar27 + 0x60);
      dVar39 = 20.0;
      mobyutil::MB_getTarget(0x4034000000000000,lVar18);
      bVar2 = moby->state;
      if (bVar2 == 0) {
        iVar22 = mobyutil::MB_randRange(0,10);
        puVar13[0x42] = (longlong)iVar22;
        fVar3 = animationSpeed;
        iVar22 = *(int *)((int)pvVar8 + 0xb0);
        puVar13[0x42] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x42] + 0.5));
        puVar13[0x42] = (longlong)iVar22;
        iVar22 = worldUpdateTime;
        puVar13[0x42] = (longlong)(int)(fVar3 * ((float)(longlong)puVar13[0x42] + 0.5));
        *(int *)((int)pvVar8 + 0xb4) =
             iVar22 + *(int *)((int)puVar13 + 0x214) + *(int *)((int)puVar13 + 0x214);
        mobyfunc::AttachManipulator(moby,0,(int)pvVar8 + 0x70);
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0;
        sound::PlayMobySound(0,4,moby);
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0;
      }
      else if (bVar2 < 2) {
        auVar41 = loadVectorLeftIndexed(0x710,0xa10000);
        if (*(int *)((int)pvVar8 + 0xb4) <= worldUpdateTime) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x28,0x195da8);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar41 = ZEXT416((uint)(auVar41._0_4_ + auVar42._0_4_)) & (undefined1  [16])0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0xb4,
                              uVar27);
          *(undefined4 *)((int)pvVar8 + 0xb4U & 0xfffffffc) = uVar12;
          *(undefined2 *)((int)pvVar8 + 0xb8) = 0;
          dVar39 = (double)mobyutil::MB_randRot();
          *(float *)((int)pvVar8 + 0xbc) = (float)dVar39;
          *(undefined2 *)((int)pvVar8 + 0xba) = 0;
          moby->state = '\x02';
        }
      }
      else if (bVar2 < 3) {
        iVar22 = fastfunc::FastDecTimerS16(uVar27 + 0xb8);
        if (iVar22 != 0) {
          auVar41 = ZEXT416(0xffffffff);
          auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
          auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
          auVar41 = loadVectorLeftIndexed(0x2c,0x195da8);
          auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar41 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60
                               ,auVar42);
          auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
          auVar41 = vectorSplatHalfWord(auVar41,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar41,0xb8,uVar27);
          *(undefined2 *)((int)pvVar8 + 0xb8) = uVar11;
          if (((moby->enabled != '\0') ||
              ((fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
               fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3), fVar3 < 90.0 &&
               ((*(uint *)((int)pvVar8 + 0xc4) & 1) != 0)))) || (fVar3 < 40.0)) {
            *(uint *)((int)pvVar8 + 0xc4) = *(uint *)((int)pvVar8 + 0xc4) ^ 1;
            fVar3 = (moby->pos).y;
            fVar4 = (moby->pos).x;
            fVar5 = fVar3 - *(float *)((int)puVar13 + 0x164);
            fVar6 = fVar4 - *(float *)(puVar13 + 0x2c);
            dVar40 = 0.7853981852531433;
            if ((double)SQRT(fVar6 * fVar6 + fVar5 * fVar5) < dVar39) {
              fVar4 = *(float *)(puVar13 + 0x2c) - fVar4;
              fVar3 = *(float *)((int)puVar13 + 0x164) - fVar3;
              fVar6 = ABS(fVar4);
              fVar5 = ABS(fVar3);
              *(float *)(puVar13 + 0x38) = fVar4;
              *(float *)((int)puVar13 + 0x1c4) = fVar3;
              *(float *)(puVar13 + 0x39) = fVar6 - fVar5;
              fVar3 = 0.0;
              uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x38) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar13 + 0x39) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x1c4) >> 0x1d) & 4;
              fVar4 = ABS(*(float *)(puVar13 + 0x38));
              if (*(float *)(puVar13 + 0x39) - 0.0 < 0.0) {
                fVar4 = fVar5;
              }
              fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
              fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
              fVar14 = ABS(*(float *)((int)puVar13 + 0x1c4));
              if (*(float *)(puVar13 + 0x39) - 0.0 < 0.0) {
                fVar14 = fVar6;
              }
              if (0.0 < fVar4) {
                lVar19 = uVar17 - 0x280;
                lVar26 = uVar17 - 0x94;
                lVar23 = uVar17 - 0xa4;
                lVar28 = 2;
                fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
                fVar6 = fVar4 * fVar4;
                *(float *)((int)puVar13 + 0x1ec) = fVar4;
                *(float *)(puVar13 + 0x3e) = fVar4;
                *(float *)((int)puVar13 + 500) = fVar4;
                *(float *)(puVar13 + 0x3f) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)(puVar13 + 0x3e) = *(float *)(puVar13 + 0x3e) * fVar6;
                *(float *)((int)puVar13 + 500) = *(float *)((int)puVar13 + 500) * fVar4;
                *(float *)(puVar13 + 0x3f) = *(float *)(puVar13 + 0x3f) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar19 + 0x1ec) = *(float *)((int)lVar19 + 0x1dc) * fVar4 * fVar4;
                  iVar22 = (int)lVar23;
                  lVar23 = lVar23 + 8;
                  lVar19 = lVar19 + 8;
                  *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
                  lVar26 = lVar26 + 8;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                lVar28 = 4;
                lVar26 = uVar17 - 0xa4;
                pfVar24 = (float *)&DAT_007358e0;
                lVar19 = lVar1;
                lVar23 = lVar26;
                do {
                  fVar4 = *pfVar24;
                  fVar6 = pfVar24[1];
                  pfVar24 = pfVar24 + 2;
                  *(float *)((int)lVar19 + 0x1ec) = *(float *)((int)lVar19 + 0x1ec) * fVar4;
                  lVar19 = lVar19 + 8;
                  *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
                  lVar23 = lVar23 + 8;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                lVar23 = 2;
                lVar19 = lVar1;
                do {
                  iVar22 = (int)lVar19;
                  lVar19 = lVar19 + 0x10;
                  iVar20 = (int)lVar26;
                  lVar26 = lVar26 + 0x10;
                  fVar3 = fVar3 + *(float *)(iVar22 + 0x1ec) + *(float *)(iVar20 + 4) +
                          *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc);
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
                fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar5;
              }
              *(float *)((int)pvVar8 + 0xbc) = fVar3;
            }
            dVar39 = in_f27;
            dVar31 = in_f27;
            dVar29 = (double)mobyutil::MB_randRangeFloat(3.0,11.0);
            *(float *)(puVar13 + 0x1a) = (float)dVar29;
            dVar29 = (double)mobyutil::MB_randRangeFloat(-2.0,2.0);
            *(float *)((int)puVar13 + 0xd4) = (float)dVar29;
            iVar22 = 1;
            dVar36 = 0.0;
            *(undefined4 *)(puVar13 + 0x1b) = 0;
            dVar29 = -1.0;
            dVar37 = 3.1415927410125732;
            do {
              mobyfunc::GetBonePosition(lVar18,iVar22,uVar17 - 0x180);
              fVar3 = *(float *)(puVar13 + 0x22) - (moby->pos).x;
              fVar4 = *(float *)((int)puVar13 + 0x114) - (moby->pos).y;
              dVar32 = ABS((double)fVar3);
              dVar33 = ABS((double)fVar4);
              *(float *)((int)puVar13 + 0x1b4) = fVar3;
              *(float *)(puVar13 + 0x37) = fVar4;
              *(float *)((int)puVar13 + 0x1bc) = (float)(dVar32 - dVar33);
              fVar3 = *(float *)((int)pvVar8 + 0xbc);
              uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0x1b4) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x1bc) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar13 + 0x37) >> 0x1d) & 4;
              dVar30 = ABS((double)*(float *)((int)puVar13 + 0x1b4));
              if ((double)*(float *)((int)puVar13 + 0x1bc) - dVar36 < 0.0) {
                dVar30 = dVar33;
              }
              fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
              dVar33 = ABS((double)*(float *)(puVar13 + 0x37));
              if ((double)*(float *)((int)puVar13 + 0x1bc) - dVar36 < 0.0) {
                dVar33 = dVar32;
              }
              fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
              dVar32 = dVar36;
              if (dVar36 < dVar30) {
                lVar19 = uVar17 - 0x280;
                lVar26 = uVar17 - 0xb4;
                lVar23 = uVar17 - 0xc4;
                lVar28 = 2;
                fVar6 = (float)(dVar33 - dVar30) / (float)(dVar33 + dVar30);
                fVar7 = fVar6 * fVar6;
                *(float *)((int)puVar13 + 0x1cc) = fVar6;
                *(float *)(puVar13 + 0x3a) = fVar6;
                *(float *)((int)puVar13 + 0x1d4) = fVar6;
                *(float *)(puVar13 + 0x3b) = fVar6;
                fVar6 = fVar7 * fVar7;
                *(float *)(puVar13 + 0x3a) = *(float *)(puVar13 + 0x3a) * fVar7;
                *(float *)((int)puVar13 + 0x1d4) = *(float *)((int)puVar13 + 0x1d4) * fVar6;
                *(float *)(puVar13 + 0x3b) = *(float *)(puVar13 + 0x3b) * fVar6 * fVar7;
                do {
                  *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1bc) * fVar6 * fVar6;
                  iVar20 = (int)lVar23;
                  lVar23 = lVar23 + 8;
                  lVar19 = lVar19 + 8;
                  *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
                  lVar26 = lVar26 + 8;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                lVar28 = 4;
                lVar26 = uVar17 - 0xc4;
                pfVar24 = (float *)&DAT_007358e0;
                lVar19 = lVar1;
                lVar23 = lVar26;
                do {
                  fVar6 = *pfVar24;
                  fVar7 = pfVar24[1];
                  pfVar24 = pfVar24 + 2;
                  *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1cc) * fVar6;
                  lVar19 = lVar19 + 8;
                  *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
                  lVar23 = lVar23 + 8;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                lVar23 = 2;
                lVar19 = lVar1;
                dVar30 = dVar36;
                do {
                  iVar20 = (int)lVar19;
                  iVar21 = (int)lVar26;
                  lVar19 = lVar19 + 0x10;
                  lVar26 = lVar26 + 0x10;
                  dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0x1cc)) +
                                    *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                                   *(float *)(iVar21 + 0xc));
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
                dVar32 = (double)((float)(dVar30 + dVar40) * fVar4 + fVar5);
              }
              dVar30 = (double)fastfunc::FastDiffRots
                                         ((double)fVar3,(double)(mobyutil::g_FrameTime * 17.802359))
              ;
              dVar30 = (double)fastfunc::FastSubRots((float)dVar32,(float)dVar30);
              dVar32 = dVar30 - dVar37;
              iVar22 = iVar22 + 1;
              dVar33 = dVar30 - dVar37;
              dVar34 = dVar30 - dVar37;
              dVar35 = dVar30 - dVar37;
              if (dVar30 - dVar37 < 0.0) {
                dVar37 = dVar30;
              }
              if (dVar32 < 0.0) {
                dVar31 = (double)*(float *)(puVar13 + 0x22);
              }
              if (dVar33 < 0.0) {
                dVar39 = (double)*(float *)((int)puVar13 + 0x114);
              }
              if (dVar34 < 0.0) {
                in_f27 = (double)*(float *)(puVar13 + 0x23);
              }
              if (dVar35 < 0.0) {
                dVar29 = (double)*(float *)((int)puVar13 + 0x11c);
              }
            } while (iVar22 < 4);
            *(float *)(puVar13 + 0x20) = (float)dVar31;
            *(float *)((int)puVar13 + 0x104) = (float)dVar39;
            *(float *)(puVar13 + 0x21) = (float)in_f27;
            *(float *)((int)puVar13 + 0x10c) = (float)dVar29;
            *(undefined4 *)((int)puVar13 + 0xec) = 0;
            *(undefined4 *)(puVar13 + 0x1d) = 0;
            *(undefined4 *)((int)puVar13 + 0xe4) = 0;
            *(undefined4 *)(puVar13 + 0x1c) = 0;
            *(undefined4 *)(puVar13 + 0x1d) = *(undefined4 *)((int)pvVar8 + 0xbc);
            fastfunc::FastEulerToMtx1(uVar17 - 0x170,uVar17 - 0x1b0);
            fVar3 = *(float *)((int)puVar13 + 0xd4);
            fVar4 = *(float *)(puVar13 + 0x1a);
            fVar5 = *(float *)(puVar13 + 0x1b);
            fVar6 = *(float *)((int)puVar13 + 0xdc);
            fVar15 = *(float *)((int)puVar13 + 0x154) * fVar6 +
                     *(float *)((int)puVar13 + 0x144) * fVar5 +
                     *(float *)((int)puVar13 + 0x124) * fVar4 +
                     *(float *)((int)puVar13 + 0x134) * fVar3;
            fVar14 = *(float *)(puVar13 + 0x2a) * fVar6 +
                     *(float *)(puVar13 + 0x28) * fVar5 +
                     *(float *)(puVar13 + 0x24) * fVar4 + *(float *)(puVar13 + 0x26) * fVar3;
            fVar7 = *(float *)(puVar13 + 0x2b) * fVar6 +
                    *(float *)(puVar13 + 0x29) * fVar5 +
                    *(float *)(puVar13 + 0x25) * fVar4 + *(float *)(puVar13 + 0x27) * fVar3;
            *(float *)(puVar13 + 0x1a) = fVar14;
            *(float *)((int)puVar13 + 0xd4) = fVar15;
            *(float *)(puVar13 + 0x1b) = fVar7;
            fVar6 = *(float *)((int)puVar13 + 0x15c) * fVar6 +
                    *(float *)((int)puVar13 + 0x14c) * fVar5 +
                    *(float *)((int)puVar13 + 300) * fVar4 +
                    *(float *)((int)puVar13 + 0x13c) * fVar3;
            dVar40 = (double)SQRT(fVar7 * fVar7 + fVar14 * fVar14 + fVar15 * fVar15);
            *(float *)((int)puVar13 + 0xdc) = fVar6;
            fVar16 = mobyutil::g_FrameTime;
            fVar3 = (moby->pos).x;
            fVar4 = (moby->pos).y;
            fVar5 = (moby->pos).z;
            *(float *)((int)puVar13 + 0xfc) = fVar6;
            fVar6 = DAT_0071f418;
            *(float *)(puVar13 + 0x1a) = fVar14 + fVar3;
            *(float *)((int)puVar13 + 0xd4) = fVar15 + fVar4;
            *(float *)(puVar13 + 0x1b) = fVar7 + fVar5;
            fVar3 = (float)((double)(fVar16 * 7.0) / dVar40);
            dVar39 = dVar36;
            if (dVar36 - dVar40 < 0.0) {
              dVar39 = (double)(fVar14 * fVar3);
            }
            dVar31 = dVar36;
            if (dVar36 - dVar40 < 0.0) {
              dVar31 = (double)(fVar15 * fVar3);
            }
            dVar29 = dVar36;
            if (dVar36 - dVar40 < 0.0) {
              dVar29 = (double)(fVar7 * fVar3);
            }
            if (dVar40 - dVar36 < 0.0) {
              dVar39 = (double)(fVar14 * fVar3);
            }
            if (dVar40 - dVar36 < 0.0) {
              dVar31 = (double)(fVar15 * fVar3);
            }
            if (dVar40 - dVar36 < 0.0) {
              dVar29 = (double)(fVar7 * fVar3);
            }
            *(float *)(puVar13 + 0x1e) = (float)dVar39;
            *(float *)((int)puVar13 + 0xf4) = (float)dVar31;
            *(float *)(puVar13 + 0x1f) = (float)dVar29;
            dVar39 = (double)mobyutil::MB_computeLobVelocity
                                       ((double)(fVar16 * 7.0),(double)(fVar6 * -9.8),uVar17 - 400,
                                        uVar17 - 0x1c0);
            *(float *)(puVar13 + 0x1f) = (float)dVar39;
            *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) + *(float *)(puVar13 + 0x1e);
            *(float *)((int)puVar13 + 0x104) =
                 *(float *)((int)puVar13 + 0x104) + *(float *)((int)puVar13 + 0xf4);
            *(float *)(puVar13 + 0x21) = (float)((double)*(float *)(puVar13 + 0x21) + dVar39);
            mobyupdate_helpers::M881_004a1030
                      (uVar17 - 400,uVar17 - 0x1a0,lVar18,*(undefined2 *)((int)pvVar8 + 0xba));
            *(short *)((int)pvVar8 + 0xba) = *(short *)((int)pvVar8 + 0xba) + 1;
          }
        }
        auVar41 = loadVectorLeftIndexed(0x710,0xa10000);
        if (*(int *)((int)pvVar8 + 0xb4) <= worldUpdateTime) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0x5c,0x195da8);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar41 = ZEXT416((uint)(auVar41._0_4_ + auVar42._0_4_)) & (undefined1  [16])0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0xb4,
                              uVar27);
          *(undefined4 *)((int)pvVar8 + 0xb4U & 0xfffffffc) = uVar12;
          moby->state = '\x01';
        }
      }
      if (moby->state != '\0') {
        dVar39 = (double)fastfunc::FastWrapRot
                                   (*(float *)((int)pvVar8 + 0xc0),mobyutil::g_FrameTime * 17.802359
                                   );
        *(float *)((int)pvVar8 + 0xc0) = (float)dVar39;
        fastfunc::FastQuaternionToEuler(uVar27 + 0x80,2);
      }
    }
  }
  return;
}



//==== 00196a88  ns=mobyupdate_unsorted  size=0x58
// sig: undefined UpdateMoby_1042(MobyInstance * moby)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage

/* Moby 1042 */

void mobyupdate_unsorted::UpdateMoby_1042(MobyInstance *moby)

{
  int iVar1;
  
  iVar1 = mobyutil::MB_damage(moby,0x10000,0);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x2c))) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00196ae8  ns=mobyupdate_helpers  size=0x130
// sig: undefined Spawn_Moby1044(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
mobyupdate_helpers::Spawn_Moby1044
          (double param_1,double param_2,double param_3,double param_4,undefined4 param_5,
          f32 *param_6)

{
  f32 fVar1;
  MobyModeBit MVar2;
  void *manipulator;
  float fVar3;
  MobyInstance *moby;
  
  moby = mobyfunc::CreateMoby(0x414);
  if (moby != (MobyInstance *)0x0) {
    moby->updateDistance = -1;
    moby->enabled = '\x01';
    manipulator = moby->pVar;
    (moby->pos).x = *param_6;
    fVar1 = param_6[1];
    moby->drawDistance = 0xff;
    (moby->pos).y = fVar1;
    MVar2 = moby->modeBits;
    (moby->pos).z = param_6[2];
    fVar1 = param_6[3];
    *(undefined4 *)((int)manipulator + 0x54) = param_5;
    (moby->pos).w = fVar1;
    *(float *)((int)manipulator + 0x40) = (float)param_1;
    *(float *)((int)manipulator + 0x44) = (float)param_2;
    *(float *)((int)manipulator + 0x50) = (float)param_3;
    *(float *)((int)manipulator + 0x4c) = (float)param_4;
    *(float *)((int)manipulator + 0x48) = (float)param_1;
    moby->modeBits = MVar2 | DRAW_TRANSPARENT_WEIRD;
    mobyfunc::AttachManipulator(moby,0,manipulator);
    fVar3 = *(float *)((int)manipulator + 0x48) * 0.2;
    *(undefined4 *)((int)manipulator + 0x28) = *(undefined4 *)((int)manipulator + 0x50);
    *(float *)((int)manipulator + 0x20) = fVar3;
    *(float *)((int)manipulator + 0x24) = fVar3;
    mobyfunc::UpdateMobyTransform(moby);
  }
  return moby;
}



//==== 00196c30  ns=mobyupdate_unsorted  size=0x120
// sig: undefined UpdateMoby_1044(MobyInstance * moby)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 00502758 fastfunc::FastDoubleToInt

/* Moby 1044 */

void mobyupdate_unsorted::UpdateMoby_1044(MobyInstance *moby)

{
  void *pvVar1;
  float fVar2;
  s8 sVar3;
  double dVar4;
  
  pvVar1 = moby->pVar;
  fVar2 = *(float *)((int)pvVar1 + 0x48) + *(float *)((int)pvVar1 + 0x4c);
  *(float *)((int)pvVar1 + 0x48) = fVar2;
  dVar4 = (double)((fVar2 - *(float *)((int)pvVar1 + 0x40)) /
                  (*(float *)((int)pvVar1 + 0x44) - *(float *)((int)pvVar1 + 0x40)));
  if (0.10000000149011612 <= dVar4) {
    sVar3 = -0x80;
    if (0.8999999761581421 < dVar4) {
      sVar3 = fastfunc::FastDoubleToInt((double)((float)(1.0 - dVar4) * 10.0 * 127.0));
    }
  }
  else {
    sVar3 = fastfunc::FastDoubleToInt((double)((float)(dVar4 * 10.0) * 127.0));
  }
  moby->alpha = sVar3;
  fVar2 = *(float *)((int)pvVar1 + 0x48) * 0.2;
  *(undefined4 *)((int)pvVar1 + 0x28) = *(undefined4 *)((int)pvVar1 + 0x50);
  *(float *)((int)pvVar1 + 0x20) = fVar2;
  *(float *)((int)pvVar1 + 0x24) = fVar2;
  if (1.0 <= dVar4) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00196d68  ns=mobyupdate_helpers  size=0x210
// sig: undefined M1045_00196d68(void)
// callers(1): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045
// callees(3): 000f1114 mobyfunc::GetBonePosition; 001a1f28 mobyupdate_helpers::M1049_001a1f28; 004fff60 fastfunc::FastDecTimerS32

undefined1 mobyupdate_helpers::M1045_00196d68(int param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 local_40 [4];
  undefined1 local_30 [24];
  
  iVar3 = fastfunc::FastDecTimerS32(param_2 + 0x160);
  if (iVar3 != 0) {
    iVar3 = (int)param_2;
    mobyfunc::GetBonePosition(param_1,*(uint *)(iVar3 + 0x164) & 1,local_40);
    M1049_001a1f28(local_40,local_30,param_1);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = loadVectorLeftIndexed(0xc,0x196d50);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    iVar4 = *(int *)(iVar3 + 0x164) + 1;
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x160,param_2);
    *(undefined4 *)(iVar3 + 0x160U & 0xfffffffc) = uVar2;
    *(int *)(iVar3 + 0x164) = iVar4;
    if (0x14 < iVar4) {
      auVar5 = ZEXT416(0xffffffff);
      auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
      auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
      auVar5 = loadVectorLeftIndexed(0x10,0x196d50);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
      auVar5 = ZEXT416(0xffffffff);
      auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar5,auVar5);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar5 = vectorSplatHalfWord(auVar5,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar5,0x198,param_2);
      *(undefined2 *)(iVar3 + 0x198) = uVar1;
      auVar5 = loadVectorLeftIndexed(0x14,0x196d50);
      auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar5 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar7);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
      auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x160,param_2);
      *(undefined4 *)(iVar3 + 0x160U & 0xfffffffc) = uVar2;
      return 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x20);
}



//==== 00196fc8  ns=mobyupdate_helpers  size=0x964
// sig: undefined M1045_00196fc8(void)
// callers(0): 
// callees(11): 00057820 collproc::CollLine; 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 0010de78 mobyutil::MB_WrapRot; 00130810 partupd::SpawnPart_58; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0; 005c8318 rand

void mobyupdate_helpers::M1045_00196fc8(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined1 local_1b0 [16];
  float local_1a0 [4];
  undefined4 local_190 [4];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [168];
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar9 = (double)fastfunc::FastIntToDouble(worldUpdateTime);
  dVar11 = 0.10000000149011612;
  fVar15 = mobyutil::MB_WrapRot((float)(dVar9 * 0.09090909361839294));
  fVar15 = fVar15 + 1.5707963;
  fVar4 = 3.1415925 - fVar15;
  if (fVar15 - (3.1415925 - fVar15) < 0.0) {
    fVar4 = fVar15;
  }
  fVar5 = -3.1415925 - fVar15;
  if ((-3.1415925 - fVar15) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar2 = fVar5 * fVar5;
  fVar15 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar2 * fVar15;
  mobyutil::MB_WrapRot
            ((float)(dVar9 * dVar11 +
                    (double)((fVar2 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar15 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                            1.5707964)));
  mobyfunc::GetBonePosition(param_1,2,local_1a0);
  dVar9 = 0.0;
  iVar7 = collproc::CollLine(local_1a0,local_1b0,2,param_1,0);
  fVar5 = CollOutput.ip.z;
  fVar4 = CollOutput.ip.y;
  fVar15 = CollOutput.ip.x;
  if (iVar7 != 0) {
    uVar8 = rand();
    dVar11 = 0.5;
    fVar2 = animationSpeed * (float)((double)(longlong)(int)((uVar8 & 1) + 0x2d) + 0.5);
    uVar8 = rand();
    fVar3 = animationSpeed * (float)((double)(longlong)(int)((uVar8 & 7) + 0x37) + dVar11);
    uVar8 = rand();
    dVar9 = 1.0;
    partupd::SpawnPart_58
              (0x3ff0000000000000,0x3ff0000000000000,local_1b0,0,(int)fVar2 & 0xff,(int)fVar3 & 0xff
               ,1,(int)(animationSpeed *
                       (float)((double)(longlong)(int)((uVar8 & 3) + 0xd) + dVar11)) & 0xff,param_1)
    ;
    if (*(int *)(iVar1 + 0x15c) != 0) {
      dVar14 = 45.5;
      iVar7 = 0;
      dVar13 = 55.5;
      dVar12 = 13.5;
      do {
        collproc::CollLine(local_180,local_170,2,param_1,0);
        if (iVar7 == 2) {
          uVar8 = rand();
          fVar2 = animationSpeed * (float)((double)(longlong)(int)((uVar8 & 1) + 0x2d) + dVar11);
          uVar8 = rand();
          fVar3 = animationSpeed * (float)((double)(longlong)(int)((uVar8 & 7) + 0x37) + dVar11);
          uVar8 = rand();
          partupd::SpawnPart_58
                    (dVar9,dVar9,local_190,0,(int)fVar2 & 0xff,(int)fVar3 & 0xff,1,
                     (int)(animationSpeed *
                          (float)((double)(longlong)(int)((uVar8 & 3) + 0xd) + dVar11)) & 0xff,
                     param_1);
        }
        else {
          dVar10 = (double)animationSpeed;
          partupd::SpawnPart_58
                    (dVar9,dVar9,local_190,1,(int)(dVar10 * dVar14) & 0xff,
                     (int)(dVar10 * dVar13) & 0xff,1,(int)(dVar10 * dVar12) & 0xff,param_1);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
    *(float *)(iVar1 + 0x150) = fVar15;
    *(float *)(iVar1 + 0x154) = fVar4;
    *(float *)(iVar1 + 0x158) = fVar5;
  }
  uVar6 = DAT_007402b0;
  *(float *)(iVar1 + 0x15c) = (float)dVar9;
  draw::GetEffectTex(uVar6);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,1,0,0,0,0);
  idol_draw::PackCmd(DAT_00e5ff40,DAT_007402a0,DAT_00e5ff44,DAT_007402a4,DAT_007402a8);
  draw::FastDrawQuad(local_160,0,1,EffectTexHeaders,9);
  return;
}



//==== 00197938  ns=mobyupdate_helpers  size=0x334
// sig: undefined M1045_00197938(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1045_00197938(undefined4 param_1)

{
  float local_100 [4];
  undefined1 local_f0 [152];
  
  mobyfunc::GetBonePosition(param_1,4,local_100);
  draw::GetEffectTex(DAT_007402c4);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,1,0,0,0,0);
  idol_draw::PackCmd(DAT_00e5ff48,DAT_007402b4,DAT_00e5ff4c,DAT_007402b8,DAT_007402bc);
  draw::FastDrawQuad(local_f0,0,1,EffectTexHeaders,9);
  return;
}



//==== 00197c88  ns=mobyupdate_helpers  size=0x5d0
// sig: undefined M1045_00197c88(void)
// callers(1): 00198280 mobyupdate_helpers::M1045_00198280
// callees(14): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1114 mobyfunc::GetBonePosition; 000fe610 mobyutil::MB_SphericalToVector; 0010de78 mobyutil::MB_WrapRot; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 005026dc fastfunc::FastFrac; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0; 00502ffc stub::VU1_addGSregister

void mobyupdate_helpers::M1045_00197c88
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               int param_6,int param_7)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double extraout_f1;
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
  double dVar23;
  double dVar24;
  float ang1;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  undefined1 local_180 [32];
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [16];
  
  bVar1 = *(byte *)(*(int *)(param_6 + 0x78) + 0x1c6);
  uVar9 = (ulonglong)bVar1 << 0x18 | (ulonglong)bVar1 << 0x10 | (ulonglong)CONCAT11(bVar1,bVar1);
  uVar3 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  vuchain::SetGSReg(0x21,uVar3);
  uVar3 = draw::GetEffectTex(DAT_007402d8);
  uVar4 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  uVar5 = FUN_00502f08(0,0,0,0,0,0);
  uVar6 = idol_draw::PackCmd(DAT_007402c8,DAT_00e5ff50,DAT_00e5ff54,DAT_007402cc,DAT_007402d0);
  dVar10 = (double)fastfunc::FastIntToDouble((int)DAT_007402d4 >> 0x18);
  uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar10 * param_4));
  uVar2 = (uint)uVar9;
  local_140 = (uint)((uVar7 & 0xffffffff) << 0x18) | uVar2 | DAT_007402d4 & 0xffffff;
  local_13c = local_140;
  local_138 = local_140;
  local_134 = local_140;
  local_110 = uVar5;
  local_108 = uVar3;
  local_100 = uVar4;
  local_f8 = uVar6;
  dVar10 = (double)fastfunc::FastIntToDouble(param_7 + worldUpdateTime);
  dVar23 = (double)(float)(dVar10 * param_1);
  mobyfunc::GetBonePosition(param_6,9,&local_190);
  dVar14 = (double)local_190;
  dVar13 = (double)local_18c;
  dVar21 = (double)local_184;
  dVar22 = (double)(local_188 - (float)(param_2 - (double)DAT_007402f8));
  dVar10 = (double)fastfunc::FastFrac((double)(float)((double)DAT_007402fc * dVar23),0x740000,
                                      auStack_f0);
  local_130 = (float)dVar10;
  local_120 = (float)dVar10;
  dVar19 = 1.0;
  local_128 = (float)(dVar10 + 1.0);
  local_118 = local_128;
  dVar10 = (double)fastfunc::FastFrac((double)(float)((double)DAT_00740300 * dVar23),0x740000,
                                      auStack_f0);
  local_11c = (float)(dVar10 + dVar19);
  local_12c = (float)dVar10;
  local_124 = (float)dVar10;
  dVar18 = (double)(6.2831855 / DAT_007402e0);
  dVar19 = 3.1415927410125732;
  dVar10 = (double)(float)(param_5 - param_4);
  dVar20 = (double)(float)(param_3 / (double)DAT_007402dc);
  dVar17 = (double)(float)(dVar10 / (double)DAT_007402dc);
  dVar16 = (double)(float)(dVar18 + -3.1415927410125732);
  local_114 = local_11c;
  if (dVar16 < 3.1415927410125732) {
    do {
      local_160 = (float)dVar14;
      local_15c = (float)dVar13;
      local_158 = (float)dVar22;
      local_154 = (float)dVar21;
      local_150 = (float)dVar14;
      local_14c = (float)dVar13;
      local_148 = (float)dVar22;
      local_144 = (float)dVar21;
      dVar24 = param_4;
      dVar10 = (double)fastfunc::FastIntToDouble(dVar10,(int)DAT_007402d4 >> 0x18);
      uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar10 * param_4));
      uVar7 = (uVar7 & 0xff) << 0x18 | uVar9 | (ulonglong)DAT_007402d4 & 0xffffff;
      local_138 = (uint)uVar7;
      dVar15 = (double)(float)(dVar20 + -1.5707963705062866);
      dVar12 = (double)(float)(param_3 - 1.5707963705062866);
      dVar10 = extraout_f1;
      local_134 = local_138;
      if (dVar15 <= dVar12) {
        dVar11 = 0.0;
        uVar8 = uVar7;
        do {
          param_4 = (double)(float)(param_4 + dVar17);
          local_140 = (uint)uVar7;
          local_13c = (uint)uVar8;
          dVar10 = (double)fastfunc::FastIntToDouble((int)DAT_007402d4 >> 0x18);
          uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar10 * param_4));
          local_138 = (uint)((uVar7 & 0xffffffff) << 0x18) | uVar2 | DAT_007402d4 & 0xffffff;
          local_134 = local_138;
          ang1 = mobyutil::MB_WrapRot((float)((double)DAT_007402f4 * dVar23 + dVar16));
          dVar10 = (double)ang1;
          mobyutil::MB_SphericalToVector((float)param_2,ang1,(float)dVar15,&local_160);
          dVar10 = (double)fastfunc::FastWrapRot((float)dVar10,(float)dVar18);
          mobyutil::MB_SphericalToVector((float)param_2,(float)dVar10,(float)dVar15,&local_150);
          if (dVar15 <= dVar11) {
            local_158 = local_158 * DAT_007402ec - DAT_007402f0;
            local_148 = local_148 * DAT_007402ec - DAT_007402f0;
          }
          else {
            local_158 = local_158 + DAT_007402e8;
            local_148 = local_148 + DAT_007402e8;
          }
          local_160 = local_160 + local_190;
          local_15c = local_15c + local_18c;
          local_158 = local_158 + local_188;
          local_150 = local_150 + local_190;
          local_14c = local_14c + local_18c;
          local_148 = local_148 + local_188;
          dVar10 = (double)draw::FastDrawQuad(local_180,0,1,EffectTexHeaders,9);
          dVar15 = (double)(float)(dVar15 + dVar20);
          uVar7 = (ulonglong)local_138;
          uVar8 = (ulonglong)local_134;
        } while (dVar15 <= dVar12);
      }
      dVar16 = (double)(float)(dVar16 + dVar18);
      param_4 = dVar24;
    } while (dVar16 < dVar19);
  }
  uVar3 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  vuchain::SetGSReg(0x21,uVar3);
  return;
}



//==== 00198280  ns=mobyupdate_helpers  size=0x13c
// sig: undefined M1045_00198280(void)
// callers(0): 
// callees(1): 00197c88 mobyupdate_helpers::M1045_00197c88

void mobyupdate_helpers::M1045_00198280(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x78) + 0x1c8);
  dVar5 = (double)*(float *)(*(int *)(param_1 + 0x78) + 0x1c8);
  uVar2 = (int)uVar1 >> 0x1f;
  dVar4 = 3.1415927410125732;
  if (((int)((uVar2 >> 1 ^ uVar1) - uVar2) < 0x3f4ccccd) &&
     (dVar4 = (double)((float)(dVar5 * 3.0434179306030273) * 1.25 + 0.09817477),
     3.1415927410125732 < dVar4)) {
    dVar4 = 3.1415927410125732;
  }
  uVar3 = 0x3ff0000000000000;
  M1045_00197c88(0x3ff0000000000000,(double)(DAT_007402e4 + 1.8),dVar4,0x3ff0000000000000,dVar5,
                 param_1,0);
  M1045_00197c88(0x3ff19999a0000000,(double)(DAT_007402e4 + 0.9),dVar4,uVar3,dVar5,param_1,10);
  M1045_00197c88(0x3ff3333340000000,(double)DAT_007402e4,dVar4,uVar3,dVar5,param_1,0x14);
  return;
}



//==== 00198408  ns=mobyupdate_helpers  size=0x5a4
// sig: undefined M1045_00198408(void)
// callers(1): 001989d0 mobyupdate_helpers::M1045_001989d0
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 0010de78 mobyutil::MB_WrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mobyupdate_helpers::M1045_00198408
               (double param_1,double param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6,uint param_7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
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
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar26;
  ulonglong in_f23;
  double dVar27;
  ulonglong in_f24;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  
  uVar10 = ZEXT48(&stack0x00000000);
  puVar9 = (ulonglong *)(uVar10 - 0x230);
  *puVar9 = uVar10;
  puVar9[0x48] = in_LR;
  puVar9[0x39] = in_f19;
  puVar9[0x3a] = in_f20;
  puVar9[0x3b] = in_f21;
  puVar9[0x3c] = in_f22;
  puVar9[0x3d] = in_f23;
  puVar9[0x3e] = in_f24;
  puVar9[0x3f] = in_f25;
  puVar9[0x40] = in_f26;
  puVar9[0x41] = in_f27;
  puVar9[0x42] = in_f28;
  puVar9[0x43] = in_f29;
  puVar9[0x44] = in_f30;
  puVar9[0x45] = in_f31;
  puVar9[0x38] = unaff_r31;
  puVar9[0x36] = unaff_r29;
  puVar9[0x37] = unaff_r30;
  uVar7 = *(uint *)(param_3 + 0x78);
  param_5 = param_5 + worldUpdateTime;
  puVar9[0x35] = unaff_r28;
  puVar9[0x34] = unaff_r27;
  puVar9[0x33] = unaff_r26;
  dVar15 = (double)fastfunc::FastIntToDouble(param_5);
  dVar15 = (double)(float)(dVar15 * param_2);
  if (*(int *)(uVar7 + 0x164) == 4) {
    dVar16 = (double)fastfunc::FastIntToDouble((int)param_7 >> 0x18);
    dVar17 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(uVar7 + 0x160));
    dVar16 = (double)(float)(dVar16 * (double)(float)(dVar17 / (double)(longlong)
                                                                       (animationSpeed * 20.5)));
    if (dVar16 - 0.0 < 0.0) {
      dVar16 = 0.0;
    }
    uVar11 = fastfunc::FastDoubleToInt(dVar16);
    param_7 = (uint)((uVar11 & 0xff) << 0x18) | param_7 & 0xffffff;
  }
  else if (4 < *(int *)(uVar7 + 0x164)) {
    return;
  }
  uVar11 = draw::GetEffectTex(DAT_0074031c);
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  uVar13 = FUN_00502f08(0,1,0,0,0,0);
  uVar14 = idol_draw::PackCmd(DAT_00e5ff58,DAT_00740304,DAT_00e5ff5c,DAT_00740308,DAT_0074030c);
  *(uint *)((int)puVar9 + 0xbc) = param_7;
  *(uint *)(puVar9 + 0x17) = param_7;
  *(uint *)((int)puVar9 + 0xb4) = param_7;
  *(uint *)(puVar9 + 0x16) = param_7;
  puVar9[0x1d] = uVar11;
  puVar9[0x1e] = uVar12;
  puVar9[0x1c] = uVar13;
  puVar9[0x1f] = uVar14;
  *(undefined4 *)(puVar9 + 0x18) = 0;
  *(undefined4 *)(puVar9 + 0x1a) = 0;
  *(undefined4 *)(puVar9 + 0x19) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x1b) = 0x3f800000;
  *(undefined4 *)((int)puVar9 + 0xc4) = 0;
  *(undefined4 *)((int)puVar9 + 0xcc) = 0;
  *(undefined4 *)((int)puVar9 + 0xd4) = 0x3f000000;
  *(undefined4 *)((int)puVar9 + 0xdc) = 0x3f000000;
  *(undefined4 *)(puVar9 + 0x10) = *(undefined4 *)(uVar7 + 0x110);
  dVar16 = (double)(6.2831855 / DAT_00740320);
  *(undefined4 *)((int)puVar9 + 0x84) = *(undefined4 *)(uVar7 + 0x114);
  *(undefined4 *)(puVar9 + 0x11) = *(undefined4 *)(uVar7 + 0x118);
  *(undefined4 *)((int)puVar9 + 0x8c) = *(undefined4 *)(uVar7 + 0x11c);
  *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(uVar7 + 0x140);
  *(undefined4 *)((int)puVar9 + 0xa4) = *(undefined4 *)(uVar7 + 0x144);
  *(undefined4 *)(puVar9 + 0x15) = *(undefined4 *)(uVar7 + 0x148);
  uVar2 = *(undefined4 *)(uVar7 + 0x14c);
  auVar35 = loadVectorLeftIndexed(0x14c,(ulonglong)uVar7);
  auVar37 = loadVectorRightIndexed(0x15c,(ulonglong)uVar7);
  auVar36 = (auVar35 | auVar37) >> 0x60 & (undefined1  [16])0xffffffff;
  uVar8 = storeVectorElementWordIndexed
                    (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0xac,
                     uVar10 - 0x230);
  *(undefined4 *)((int)puVar9 + 0xac) = uVar8;
  auVar36 = vectorPermute(*(undefined1 (*) [16])(puVar9 + 0x14),auVar35 | auVar37,_DAT_001983d0);
  *(undefined4 *)((int)puVar9 + 0x10c) = *(undefined4 *)((int)puVar9 + 0x7c);
  *(undefined4 *)(puVar9 + 0x21) = *(undefined4 *)(puVar9 + 0xf);
  *(undefined4 *)((int)puVar9 + 0x104) = *(undefined4 *)((int)puVar9 + 0x74);
  *(undefined4 *)(puVar9 + 0x20) = *(undefined4 *)(puVar9 + 0xe);
  *(undefined4 *)((int)puVar9 + 0x11c) = *(undefined4 *)((int)puVar9 + 0x8c);
  *(undefined4 *)(puVar9 + 0x23) = *(undefined4 *)(puVar9 + 0x11);
  *(undefined4 *)((int)puVar9 + 0x114) = *(undefined4 *)((int)puVar9 + 0x84);
  *(undefined4 *)(puVar9 + 0x22) = *(undefined4 *)(puVar9 + 0x10);
  *(undefined4 *)((int)puVar9 + 300) = *(undefined4 *)((int)puVar9 + 0x9c);
  *(undefined4 *)(puVar9 + 0x25) = *(undefined4 *)(puVar9 + 0x13);
  *(undefined4 *)((int)puVar9 + 0x124) = *(undefined4 *)((int)puVar9 + 0x94);
  *(undefined4 *)(puVar9 + 0x24) = *(undefined4 *)(puVar9 + 0x12);
  *(undefined1 (*) [16])(puVar9 + 0x26) = auVar36;
  *(undefined4 *)((int)puVar9 + 0x14c) = *(undefined4 *)((int)puVar9 + 0xbc);
  *(undefined4 *)(puVar9 + 0x29) = *(undefined4 *)(puVar9 + 0x17);
  *(undefined4 *)((int)puVar9 + 0x144) = *(undefined4 *)((int)puVar9 + 0xb4);
  *(undefined4 *)(puVar9 + 0x28) = *(undefined4 *)(puVar9 + 0x16);
  *(undefined4 *)((int)puVar9 + 0x15c) = *(undefined4 *)((int)puVar9 + 0xcc);
  *(undefined4 *)(puVar9 + 0x2b) = *(undefined4 *)(puVar9 + 0x19);
  *(undefined4 *)((int)puVar9 + 0x154) = *(undefined4 *)((int)puVar9 + 0xc4);
  *(undefined4 *)(puVar9 + 0x2a) = *(undefined4 *)(puVar9 + 0x18);
  *(undefined4 *)((int)puVar9 + 0x16c) = *(undefined4 *)((int)puVar9 + 0xdc);
  *(undefined4 *)(puVar9 + 0x2d) = *(undefined4 *)(puVar9 + 0x1b);
  *(undefined4 *)((int)puVar9 + 0x164) = *(undefined4 *)((int)puVar9 + 0xd4);
  *(undefined4 *)(puVar9 + 0x2c) = *(undefined4 *)(puVar9 + 0x1a);
  *(undefined4 *)((int)puVar9 + 0x17c) = *(undefined4 *)((int)puVar9 + 0xec);
  *(undefined4 *)(puVar9 + 0x2f) = *(undefined4 *)(puVar9 + 0x1d);
  *(undefined4 *)((int)puVar9 + 0x174) = *(undefined4 *)((int)puVar9 + 0xe4);
  *(undefined4 *)(puVar9 + 0x2e) = *(undefined4 *)(puVar9 + 0x1c);
  *(undefined4 *)((int)puVar9 + 0x18c) = *(undefined4 *)((int)puVar9 + 0xfc);
  *(undefined4 *)(puVar9 + 0x31) = *(undefined4 *)(puVar9 + 0x1f);
  *(undefined4 *)((int)puVar9 + 0x184) = *(undefined4 *)((int)puVar9 + 0xf4);
  *(undefined4 *)(puVar9 + 0x30) = *(undefined4 *)(puVar9 + 0x1e);
  *(undefined4 *)(puVar9 + 0x20) = *(undefined4 *)(uVar7 + 0x120);
  *(undefined4 *)((int)puVar9 + 0x104) = *(undefined4 *)(uVar7 + 0x124);
  *(undefined4 *)(puVar9 + 0x21) = *(undefined4 *)(uVar7 + 0x128);
  *(undefined4 *)((int)puVar9 + 0x10c) = *(undefined4 *)(uVar7 + 300);
  *(undefined4 *)(puVar9 + 0x22) = *(undefined4 *)(uVar7 + 0x120);
  *(undefined4 *)((int)puVar9 + 0x114) = *(undefined4 *)(uVar7 + 0x124);
  *(undefined4 *)(puVar9 + 0x23) = *(undefined4 *)(uVar7 + 0x128);
  *(undefined4 *)((int)puVar9 + 0x11c) = *(undefined4 *)(uVar7 + 300);
  dVar17 = -3.1415927410125732;
  dVar26 = (double)(float)(dVar16 + 3.1415927410125732);
  if (-3.1415927410125732 < dVar26) {
    dVar28 = 1.570796251296997;
    dVar29 = 3.141592502593994;
    dVar30 = -3.141592502593994;
    dVar31 = -0.16666656732559204;
    dVar32 = 0.008333025500178337;
    dVar33 = -0.0001980741071747616;
    dVar34 = 2.601886990305502e-06;
    dVar27 = dVar17;
    do {
      *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)(puVar9 + 0x10);
      *(undefined4 *)((int)puVar9 + 0x74) = *(undefined4 *)((int)puVar9 + 0x84);
      *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(puVar9 + 0x11);
      *(undefined4 *)((int)puVar9 + 0x7c) = *(undefined4 *)((int)puVar9 + 0x8c);
      *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar9 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x94) = *(undefined4 *)((int)puVar9 + 0xa4);
      *(undefined4 *)(puVar9 + 0x13) = *(undefined4 *)(puVar9 + 0x15);
      dVar19 = (double)DAT_00740324;
      *(undefined4 *)((int)puVar9 + 0x9c) = uVar2;
      fVar38 = mobyutil::MB_WrapRot((float)(dVar19 * dVar15 + dVar17));
      uVar8 = EffectTexHeaders;
      dVar21 = (double)fVar38;
      dVar20 = (double)(float)(dVar21 + dVar28);
      dVar19 = (double)(float)(dVar29 - dVar21);
      if (dVar21 - (double)(float)(dVar29 - dVar21) < 0.0) {
        dVar19 = dVar21;
      }
      dVar22 = (double)(float)(dVar29 - dVar20);
      if (dVar20 - (double)(float)(dVar29 - dVar20) < 0.0) {
        dVar22 = dVar20;
      }
      dVar18 = (double)(float)(dVar30 - dVar21);
      if ((double)(float)(dVar30 - dVar21) - dVar19 < 0.0) {
        dVar18 = dVar19;
      }
      dVar19 = (double)(float)(dVar30 - dVar20);
      if ((double)(float)(dVar30 - dVar20) - dVar22 < 0.0) {
        dVar19 = dVar22;
      }
      dVar21 = (double)(float)(dVar18 * dVar18);
      dVar20 = (double)(float)(dVar19 * dVar19);
      dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar18));
      dVar22 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar19));
      dVar23 = (double)(float)(dVar21 * dVar24);
      fVar3 = *(float *)(param_3 + 0xe4);
      dVar25 = (double)(float)(dVar20 * dVar22);
      fVar4 = *(float *)(param_3 + 0xd4);
      fVar5 = *(float *)(param_3 + 0xe8);
      fVar38 = (float)((double)(float)((double)(float)(dVar21 * dVar23) * dVar34 +
                                      (double)(float)(dVar23 * dVar33 +
                                                     (double)(float)(dVar24 * dVar32 +
                                                                    (double)(float)((double)(float)(
                                                  dVar21 * dVar18) * dVar31 + dVar18)))) * param_1);
      fVar1 = (float)((double)(float)((double)(float)(dVar20 * dVar25) * dVar34 +
                                     (double)(float)(dVar25 * dVar33 +
                                                    (double)(float)(dVar22 * dVar32 +
                                                                   (double)(float)((double)(float)(
                                                  dVar20 * dVar19) * dVar31 + dVar19)))) * param_1);
      fVar6 = *(float *)(param_3 + 0xd8);
      *(float *)(puVar9 + 0x14) =
           *(float *)(param_3 + 0xd0) * fVar1 +
           *(float *)(param_3 + 0xe0) * fVar38 + *(float *)(uVar7 + 0x140);
      *(float *)((int)puVar9 + 0xa4) = fVar4 * fVar1 + fVar3 * fVar38 + *(float *)(uVar7 + 0x144);
      *(float *)(puVar9 + 0x15) = fVar6 * fVar1 + fVar5 * fVar38 + *(float *)(uVar7 + 0x148);
      uVar2 = *(undefined4 *)(uVar7 + 0x14c);
      *(undefined4 *)((int)puVar9 + 0xac) = uVar2;
      if (dVar17 != dVar27) {
        draw::FastDrawQuad(uVar10 - 0x1c0,0,1,uVar8,9);
        *(undefined4 *)(puVar9 + 0x24) = *(undefined4 *)(puVar9 + 0x12);
        *(undefined4 *)((int)puVar9 + 0x124) = *(undefined4 *)((int)puVar9 + 0x94);
        *(undefined4 *)(puVar9 + 0x25) = *(undefined4 *)(puVar9 + 0x13);
        *(undefined4 *)((int)puVar9 + 300) = *(undefined4 *)((int)puVar9 + 0x9c);
        *(undefined4 *)(puVar9 + 0x26) = *(undefined4 *)(puVar9 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x134) = *(undefined4 *)((int)puVar9 + 0xa4);
        *(undefined4 *)(puVar9 + 0x27) = *(undefined4 *)(puVar9 + 0x15);
        uVar2 = EffectTexHeaders;
        *(undefined4 *)((int)puVar9 + 0x13c) = *(undefined4 *)((int)puVar9 + 0xac);
        draw::FastDrawQuad(uVar10 - 0x130,0,0,uVar2,9);
        uVar2 = *(undefined4 *)((int)puVar9 + 0xac);
      }
      dVar17 = (double)(float)(dVar17 + dVar16);
    } while (dVar17 < dVar26);
  }
                    /* WARNING: Read-only address (ram,0x001983d0) is written */
  return;
}



//==== 001989d0  ns=mobyupdate_helpers  size=0x2dc
// sig: undefined M1045_001989d0(void)
// callers(0): 
// callees(4): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 0010581c mobyutil::SetCollDamIn; 00198408 mobyupdate_helpers::M1045_00198408
// strings: 001989b8: '?333@' (raw)

void mobyupdate_helpers::M1045_001989d0
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_70 [16];
  undefined1 auStack_60 [56];
  
  iVar5 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(iVar5 + 0x134);
  fVar2 = *(float *)(iVar5 + 0x130);
  fVar3 = *(float *)(iVar5 + 0x138);
  dVar14 = 0.0;
  fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar6 == 0.0) {
    uVar4 = *(undefined4 *)(iVar5 + 0x13c);
    dVar10 = dVar14;
    dVar12 = dVar14;
    dVar13 = dVar14;
  }
  else {
    fVar6 = (*(float *)(iVar5 + 0x16c) * 0.8) / fVar6;
    uVar4 = *(undefined4 *)(iVar5 + 0x13c);
    dVar10 = (double)(fVar2 * fVar6);
    dVar13 = (double)(fVar1 * fVar6);
    dVar12 = (double)(fVar3 * fVar6);
  }
  *(undefined4 *)(iVar5 + 0x14c) = uVar4;
  *(undefined4 *)(iVar5 + 300) = uVar4;
  uVar4 = DAT_00740310;
  *(float *)(iVar5 + 0x140) = (float)(dVar10 + (double)*(float *)(iVar5 + 0x110));
  *(float *)(iVar5 + 0x144) = (float)(dVar13 + (double)*(float *)(iVar5 + 0x114));
  *(float *)(iVar5 + 0x148) = (float)(dVar12 + (double)*(float *)(iVar5 + 0x118));
  fVar1 = SQRT((float)(dVar12 * dVar12 +
                      (double)(float)(dVar10 * dVar10 + (double)(float)(dVar13 * dVar13))));
  dVar8 = (double)(*(float *)(iVar5 + 0x16c) / fVar1);
  dVar9 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar9 = (double)(float)(dVar10 * dVar8);
  }
  dVar11 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar11 = (double)(float)(dVar13 * dVar8);
  }
  if (0.0 - fVar1 < 0.0) {
    dVar14 = (double)(float)(dVar12 * dVar8);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar9 = (double)(float)(dVar10 * dVar8);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar11 = (double)(float)(dVar13 * dVar8);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar14 = (double)(float)(dVar12 * dVar8);
  }
  *(float *)(iVar5 + 0x120) = (float)(dVar9 + (double)*(float *)(iVar5 + 0x110));
  *(float *)(iVar5 + 0x124) = (float)(dVar11 + (double)*(float *)(iVar5 + 0x114));
  *(float *)(iVar5 + 0x128) = (float)(dVar14 + (double)*(float *)(iVar5 + 0x118));
  M1045_00198408(0x3ff0000000000000,0x3ff0000000000000,param_1,0x740000,0,param_4,uVar4);
  M1045_00198408(0x3fe6666660000000,0x4000000000000000,param_1,0x740000,10);
  M1045_00198408(0x3fd99999a0000000,0x4008000000000000,param_1,0x740000,0x14);
  mobyutil::SetCollDamIn(0x3ff0008100000000,auStack_60,param_1,0x30000,&DAT_001989ac,local_70);
  iVar7 = collproc::CollLine(iVar5 + 0x110,iVar5 + 0x120,0,param_1,auStack_60);
  if (iVar7 == 0) {
    collproc::CollMobySphere(0x3fe0000000000000,iVar5 + 0x120,&DAT_001989ac,0,param_1,auStack_60);
  }
  return;
}



//==== 00198cac  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M1045_00198cac(void)
// callers(1): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045
// callees(0): 

ulonglong mobyupdate_helpers::M1045_00198cac(undefined8 param_1,int param_2,int *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  
  bVar1 = *(int *)(param_2 + 0x170) != -1;
  if (bVar1) {
    *param_3 = *(int *)(param_2 + 0x170);
  }
  uVar3 = (ulonglong)bVar1;
  if (*(int *)(param_2 + 0x174) != -1) {
    uVar3 = uVar3 + 1;
    param_3[bVar1] = *(int *)(param_2 + 0x174);
  }
  if (*(int *)(param_2 + 0x178) != -1) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x178);
  }
  bVar4 = *(byte *)(param_2 + 0x19c);
  if (((bVar4 & 1) == 0) && (*(int *)(param_2 + 0x17c) != -1)) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x17c);
    bVar4 = *(byte *)(param_2 + 0x19c);
  }
  if (((bVar4 & 2) == 0) && (*(int *)(param_2 + 0x180) != -1)) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x180);
    bVar4 = *(byte *)(param_2 + 0x19c);
  }
  if (((bVar4 & 4) == 0) && (*(int *)(param_2 + 0x184) != -1)) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x184);
  }
  return uVar3;
}



//==== 00198d88  ns=mobyupdate_helpers  size=0x500
// sig: undefined M1045_00198d88(void)
// callers(1): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045
// callees(9): 000b72b0 hero::TransitionMovement; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 005026dc fastfunc::FastFrac; 005cd098 libc::printf
// strings: 0065435c: 'Moby class %d Damage Received: %f\n'

void mobyupdate_helpers::M1045_00198d88(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  u8 uVar1;
  float fVar2;
  short sVar3;
  MOBY_OCLASSES MVar4;
  MobyModeBit MVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  int iVar15;
  byte bVar16;
  int iVar18;
  longlong lVar17;
  float *pfVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar17 = uVar13 - 0x100;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar13;
  puVar10[0x22] = in_LR;
  puVar10[0x1d] = unaff_r29;
  lVar11 = uVar13 - 0x40;
  puVar12 = (undefined4 *)lVar11;
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  puVar10[0x1e] = unaff_r30;
  uVar1 = param_1->state;
  puVar10[0x1f] = unaff_r31;
  puVar10[0x1c] = unaff_r28;
  puVar10[0x1b] = unaff_r27;
  if (uVar1 == '\t') goto LAB_00199234;
  uVar14 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar18 = (int)uVar14;
  iVar15 = mobyutil::MB_HandleDamage(param_1,iVar18,param_3,0,puVar10 + 0xe,0,0,4);
  pfVar19 = (float *)param_3;
  if (iVar18 == 0) {
LAB_00198ea4:
    if (((iVar15 < 3) && (-1 < iVar15)) && (0 < iVar15)) {
      *pfVar19 = 0.0;
    }
  }
  else {
    if (*(short *)(iVar18 + 0x2a) == 0x131) {
      *(float *)(iVar18 + 0x2c) = *(float *)(iVar18 + 0x2c) * 0.25;
    }
    if ((*(int *)(iVar18 + 0x20) != 0) &&
       (sVar3 = *(short *)(*(int *)(iVar18 + 0x20) + 0xa6), sVar3 != 0x416 && sVar3 != 0x419)) {
      MVar4 = param_1->oClass;
      puVar10[8] = (ulonglong)(double)*(float *)(iVar18 + 0x2c);
      libc::printf("Moby class %d Damage Received: %f\n",MVar4,puVar10[8]);
      goto LAB_00198ea4;
    }
    *(undefined4 *)(puVar10 + 0xe) = 1;
  }
  iVar15 = (int)param_2;
  if ((param_1->state < 9) && (param_1->state != 5)) {
LAB_00198f08:
    if (1 < *(int *)(puVar10 + 0xe)) {
      auVar20 = loadVectorLeftIndexed(0x2c,uVar14);
      auVar25 = loadVectorLeftIndexed(lVar11,param_3);
      auVar21 = loadVectorRightIndexed(0x3c,uVar14);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      fVar2 = *pfVar19;
      auVar25 = (auVar20 | auVar21) >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanFloatingPoint
                (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        MVar5 = param_1->modeBits;
        *pfVar19 = 0.0;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar15 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        if (param_1->animationId != '\x0e') {
          mobyutil::MB_SetAnimation(param_1,0xe,0,10);
        }
        if (g_heroState == UNK_78) {
          hero::TransitionMovement(0,1);
        }
        param_1->state = '\t';
      }
      else {
        auVar25 = ZEXT416(0xfffffff0);
        auVar20 = ZEXT416(0xffffffff);
        auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar20 = loadVectorLeftIndexed(4,param_3);
        auVar25 = vectorShiftRightAlgebraicWord
                            (auVar20,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        puVar10[0xf] = (longlong)(int)*(short *)(pfVar19 + 1);
        auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
        auVar20 = vectorConvertFromSignedFixedPointWord(auVar25,0);
        auVar25 = loadVectorLeftIndexed(4,0x198d70);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar20,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar21);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar20 = loadVectorLeftIndexed(8,0x198d70);
        auVar23 = loadVectorLeftIndexed(0xc,0x198d70);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar21 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar25 = ZEXT416(0xffffffff);
        auVar22 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar23 = vectorMultiplyAddFloatingPoint
                            (auVar24,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar22 = vectorMultiplyAddFloatingPoint
                            (auVar24,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar20);
        fastfunc::FastFrac((double)((fVar2 - 0.01) / ((float)(longlong)puVar10[0xf] * 0.16666667)),8
                           ,uVar13 - 0x8c);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar20 = loadVectorLeftIndexed(0x74,lVar17);
        fVar2 = *pfVar19;
        auVar20 = vectorMultiplyAddFloatingPoint(auVar24,auVar20,auVar25);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar21 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar25 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x74,lVar17
                          );
        *(undefined4 *)((int)puVar10 + 0x74) = uVar9;
        *pfVar19 = fVar2 - *(float *)(iVar18 + 0x2c);
        *(undefined1 *)(iVar15 + 0x67) = 0xfa;
        auVar25 = loadVectorLeftIndexed(0x14,0x198d70);
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar20,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar21);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = vectorSplatHalfWord(auVar25,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar25,0x26,param_2);
        *(undefined2 *)(iVar15 + 0x26) = uVar8;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        uVar6 = (int)*pfVar19 >> 0x1f;
        auVar25 = loadVectorLeftIndexed(lVar11,param_3);
        uVar7 = (int)*(uint *)((int)puVar10 + 0x74) >> 0x1f;
        if ((int)((uVar6 >> 1 ^ (uint)*pfVar19) - uVar6) <=
            (int)((uVar7 >> 1 ^ *(uint *)((int)puVar10 + 0x74)) - uVar7)) {
          if (g_heroState == UNK_78) {
            hero::TransitionMovement(0,1);
          }
          bVar16 = param_1->setByGroup;
          lVar17 = ((((ulonglong)bVar16 + 1) * 0x55 << 0x20) >> 0x28) + 2;
          if ((uint)param_1->animationId != (uint)lVar17) {
            mobyutil::MB_SetAnimation(param_1,lVar17,0,10);
            bVar16 = param_1->setByGroup;
          }
          *(undefined4 *)(iVar15 + 0x1c8) = 0;
          *(undefined1 *)(iVar15 + 0x1c5) = 1;
          param_1->state = '\n';
          param_1->setByGroup = bVar16 + 1;
          auVar25 = loadVectorLeftIndexed(lVar11,param_3);
        }
        auVar20 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        vectorCompareGreaterThanFloatingPoint(auVar26,auVar20);
        if (((bool)(in_cr6 >> 1 & 1)) ||
           (vectorCompareGreaterThanFloatingPoint(auVar25,auVar20), !(bool)(in_cr6 >> 1 & 1))) {
          auVar20 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          vectorCompareGreaterThanFloatingPoint(auVar26,auVar20);
          if ((!(bool)(in_cr6 >> 1 & 1)) &&
             (vectorCompareGreaterThanFloatingPoint(auVar25,auVar20), (bool)(in_cr6 >> 1 & 1))) {
            *(undefined1 *)(iVar15 + 0x1c7) = 1;
          }
        }
        else {
          *(undefined1 *)(iVar15 + 0x1c7) = 1;
        }
      }
    }
  }
  else {
    if ((uint)(byte)param_1->setByGroup + (((byte)param_1->setByGroup + 1) * 0x55 >> 8) * -3 == 0)
    goto LAB_00198f08;
    if (1 < *(int *)(puVar10 + 0xe)) {
      *(undefined1 *)(iVar15 + 0x1c6) = 0xff;
    }
  }
  *(byte *)(iVar15 + 0x1c6) =
       (byte)((longlong)(0x14 - (ulonglong)*(byte *)(iVar15 + 0x1c6)) >> 0x3f) &
       *(byte *)(iVar15 + 0x1c6) - 0x14;
  param_1->damage = -1;
LAB_00199234:
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 00199288  ns=mobyupdate_helpers  size=0x78
// sig: undefined M1045_00199288(void)
// callers(1): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045
// callees(1): 000fcbe8 mobyutil::MB_randRangeFloat

void mobyupdate_helpers::M1045_00199288(double param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = -param_1;
  dVar1 = (double)mobyutil::MB_randRangeFloat((float)dVar2,(float)param_1);
  *param_2 = (float)((double)*param_2 + dVar1);
  dVar1 = (double)mobyutil::MB_randRangeFloat((float)dVar2,(float)param_1);
  param_2[1] = (float)((double)param_2[1] + dVar1);
  return;
}



//==== 00199300  ns=mobyupdate_helpers  size=0x88
// sig: undefined M1045_00199300(void)
// callers(1): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045
// callees(1): 0006d720 RegisterFuncForMoby

void mobyupdate_helpers::M1045_00199300(MobyInstance *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  
  if (0 < DAT_00e61328) {
    psVar2 = &DAT_00e61328;
    lVar3 = 10;
    do {
      sVar1 = *psVar2;
      *psVar2 = sVar1 + ((ushort)(0x40 - (longlong)sVar1 >> 0x3f) & 0x40U - sVar1) + -4;
      psVar2 = psVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    RegisterFuncForMoby(&PTR_M1046_0019d958_007086a0,param_1);
  }
  return;
}



//==== 00199398  ns=mobyupdate_helpers  size=0x23c
// sig: undefined M1045_00199398(void)
// callers(1): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045
// callees(1): 0006d720 RegisterFuncForMoby

void mobyupdate_helpers::M1045_00199398(MobyInstance *param_1)

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
  DAT_00740388 = 1;
  DAT_00740390 = DAT_00740390 * 0.5;
  DAT_0074038c = 1;
  psVar19 = &DAT_00e5ff98;
  piVar20 = &DAT_00e5ffac;
  pfVar18 = (float *)&DAT_00e5ff9c;
  fVar1 = 0.0;
  do {
    iVar10 = *piVar20;
    if (iVar10 != 0) {
      iVar17 = (int)((longlong)*psVar19 << 4);
      fVar2 = *(float *)((int)&DAT_00e61264 + iVar17);
      fVar13 = *(float *)((int)&DAT_00e61254 + iVar17) - fVar2;
      fVar3 = *(float *)((int)&DAT_00e61260 + iVar17);
      fVar15 = *(float *)((int)&DAT_00e61250 + iVar17) - fVar3;
      fVar4 = *(float *)((int)&DAT_00e61268 + iVar17);
      fVar14 = *(float *)((int)&DAT_00e61258 + iVar17) - fVar4;
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
  if (0 < DAT_00e61328) {
    psVar19 = &DAT_00e61328;
    lVar22 = 10;
    do {
      sVar9 = *psVar19;
      *psVar19 = sVar9 + ((ushort)(0x40 - (longlong)sVar9 >> 0x3f) & 0x40U - sVar9) + -4;
      psVar19 = psVar19 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    RegisterFuncForMoby(&PTR_M1046_0019d958_007086a0,param_1);
  }
  return;
}



//==== 001995e0  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1045_001995e0(void)
// callers(1): 00199888 mobyupdate_helpers::M1045_00199888
// callees(2): 000fcc68 mobyutil::MB_randRot; 001113e0 mobyutil::MB_RotateQuatAxisAngle
// strings: 001995d8: '@333`'

void mobyupdate_helpers::M1045_001995e0(int param_1,undefined4 *param_2)

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
  
  if (DAT_00740388 != 0) {
    fVar1 = *(float *)(param_1 + 0xc4);
    fVar2 = *(float *)(param_1 + 0xc0);
    fVar3 = *(float *)(param_1 + 200);
    DAT_00740388 = 0;
    fVar7 = 0.0;
    DAT_00e61260 = *param_2;
    pfVar10 = (float *)&DAT_00e61260;
    DAT_00e61264 = param_2[1];
    DAT_00e61268 = param_2[2];
    puVar13 = &DAT_00e6132a;
    fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    DAT_00e6126c = param_2[3];
    pfVar12 = (float *)&DAT_00e61270;
    DAT_00e61328 = 0;
    lVar14 = 9;
    fVar6 = 2.8 / fVar4;
    fVar8 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    fVar9 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar9 = fVar1 * fVar6;
    }
    if (0.0 - fVar4 < 0.0) {
      fVar7 = fVar2 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar9 = fVar1 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar7 = fVar2 * fVar6;
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
    DAT_00e5ff70 = 0;
    local_30[0] = 0.0;
    local_30[1] = 0.0;
    DAT_00e5ff7c = 0;
    DAT_00e5ff78 = 0;
    DAT_00e5ff74 = 0;
    local_30[2] = 0.1;
    local_30[3] = 1.0;
    local_30[4] = 1.0;
    local_30[5] = 0.0;
    local_30[6] = 0.0;
    local_30[7] = 1.0;
    dVar15 = (double)mobyutil::MB_randRot();
    mobyutil::MB_RotateQuatAxisAngle((float)dVar15,(float *)&DAT_00e5ff80,local_30);
    DAT_00e5ff90 = (float)dVar15;
    DAT_00e5ff68 = 0;
    DAT_00e5ff94 = 0;
    DAT_00740390 = 0x3bc49ba6;
    if (DAT_0074038c != 0) {
      puVar11 = &DAT_00e5ffac;
      lVar14 = 0x19;
      DAT_0074038c = 0;
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



//==== 00199888  ns=mobyupdate_helpers  size=0x1550
// sig: undefined M1045_00199888(void)
// callers(1): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045
// callees(16): 00050288 camera::Cam_InterpAngles; 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001099f8 mobyutil::Lerp_vec4; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0011e6ec partproc::DeletePart; 00126f50 partupd::SpawnPart_23; 00137238 path::ClosestPntOnSegmentAtDist; 001995e0 mobyupdate_helpers::M1045_001995e0; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e7d64 FUN_005e7d64; 005e8e08 FUN_005e8e08
// strings: 00199804: '@333Br' (raw)

double mobyupdate_helpers::M1045_00199888(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Vec4 *start;
  short *psVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined2 uVar10;
  short sVar11;
  short *psVar12;
  Vec4 *end;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
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
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  Vec4 local_290;
  float local_280;
  float local_27c;
  float local_278;
  float local_270;
  float local_26c;
  float local_268;
  float local_260 [9];
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  Vec4 VStack_1f0;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0 [4];
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
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
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  double local_140;
  float local_138;
  longlong local_130;
  
  M1045_001995e0();
  fVar5 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  psVar6 = &DAT_00e61328;
  lVar19 = 9;
  local_290.x = g_heroPosition.x;
  local_290.y = g_heroPosition.y;
  local_290.z = g_heroPosition.z + 0.6;
  DAT_00e61328 = DAT_00e61328 + 4;
  local_290.w = g_heroPosition.w;
  DAT_00e61260 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  dVar40 = (double)g_heroPosition.w;
  psVar12 = psVar6;
  do {
    psVar12 = psVar12 + 1;
    sVar11 = *psVar6;
    psVar6 = psVar6 + 1;
    *psVar12 = sVar11 + -0x20;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  fVar2 = fVar2 - fVar3;
  fVar1 = fVar1 - DAT_00e61260;
  dVar35 = 2.799999952316284;
  dVar38 = 0.0;
  fVar3 = (fVar5 - fVar4) + 0.6;
  DAT_00e61264 = param_2[1];
  DAT_00e61268 = param_2[2];
  DAT_00e6126c = param_2[3];
  fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar5 = 2.8 / fVar4;
  dVar20 = dVar38;
  if (0.0 - fVar4 < 0.0) {
    dVar20 = (double)(fVar1 * fVar5);
  }
  dVar43 = dVar38;
  if (0.0 - fVar4 < 0.0) {
    dVar43 = (double)(fVar2 * fVar5);
  }
  dVar41 = dVar38;
  if (0.0 - fVar4 < 0.0) {
    dVar41 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar20 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar43 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar41 = (double)(fVar3 * fVar5);
  }
  FUN_005e7d64(&local_280,&DAT_00e5ff70,param_1 + 0xc0);
  local_280 = (float)((double)local_280 + dVar20);
  local_27c = (float)((double)local_27c + dVar43);
  local_278 = (float)((double)local_278 + dVar41);
  FUN_005e7d64(&local_270,&DAT_00e5ff80,param_1 + 0xc0);
  local_270 = (float)((double)local_270 + dVar20);
  local_26c = (float)((double)local_26c + dVar43);
  local_268 = (float)((double)local_268 + dVar41);
  dVar44 = 60.5;
  local_130 = (longlong)(int)(animationSpeed * 60.5);
  dVar20 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 60.5));
  lVar19 = (longlong)DAT_00e5ff68;
  DAT_00e5ff68 = DAT_00e5ff68 + 1;
  local_130 = (longlong)(int)((double)animationSpeed * dVar44);
  fVar3 = (float)((double)lVar19 / dVar20);
  dVar20 = (double)((local_270 - local_280) * fVar3 + local_280);
  dVar43 = (double)((local_26c - local_27c) * fVar3 + local_27c);
  dVar41 = (double)((local_268 - local_278) * fVar3 + local_278);
  if ((int)((double)animationSpeed * dVar44) <= DAT_00e5ff68) {
    DAT_00e5ff70 = DAT_00e5ff80;
    DAT_00e5ff74 = DAT_00e5ff84;
    DAT_00e5ff78 = DAT_00e5ff88;
    DAT_00e5ff7c = DAT_00e5ff8c;
    local_260[0] = 0.0;
    local_260[1] = 0.0;
    local_260[2] = 0.1;
    local_260[3] = 1.0;
    local_260[4] = 1.0;
    local_260[5] = 0.0;
    local_260[6] = 0.0;
    local_260[7] = 1.0;
    dVar44 = (double)mobyutil::MB_randRangeFloat(45.0,315.0);
    dVar44 = (double)fastfunc::FastWrapRot(DAT_00e5ff90,(float)(dVar44 * 0.01745329238474369));
    mobyutil::MB_RotateQuatAxisAngle((float)dVar44,(float *)&DAT_00e5ff80,local_260);
    DAT_00e5ff90 = (float)dVar44;
    DAT_00e5ff68 = 0;
  }
  local_138 = 0.1;
  dVar44 = (double)fastfunc::FastWrapRot(DAT_00e5ff94,0.1);
  DAT_00e5ff94 = (float)dVar44;
  dVar33 = -1.0;
  dVar21 = (double)SQRT(DAT_00969f78 * DAT_00969f78 +
                        hero::g_heroGravityDir * hero::g_heroGravityDir +
                        DAT_00969f74 * DAT_00969f74);
  local_174 = DAT_00969f7c;
  local_184 = 0;
  fVar3 = (float)(-1.0 / dVar21);
  dVar44 = dVar38;
  if (dVar38 - dVar21 < 0.0) {
    dVar44 = (double)(hero::g_heroGravityDir * fVar3);
  }
  dVar37 = dVar38;
  if (dVar38 - dVar21 < 0.0) {
    dVar37 = (double)(DAT_00969f78 * fVar3);
  }
  dVar36 = dVar38;
  if (dVar38 - dVar21 < 0.0) {
    dVar36 = (double)(DAT_00969f74 * fVar3);
  }
  if (dVar21 - dVar38 < 0.0) {
    dVar44 = (double)(hero::g_heroGravityDir * fVar3);
  }
  if (dVar21 - dVar38 < 0.0) {
    dVar37 = (double)(DAT_00969f78 * fVar3);
  }
  if (dVar21 - dVar38 < 0.0) {
    dVar36 = (double)(DAT_00969f74 * fVar3);
  }
  local_180 = (float)dVar44;
  local_17c = (float)dVar36;
  local_178 = (float)dVar37;
  fVar3 = (float)(dVar37 * dVar20 - (double)(float)(dVar44 * dVar41));
  fVar4 = (float)(dVar36 * dVar41 - (double)(float)(dVar37 * dVar43));
  fVar1 = (float)(dVar44 * dVar43 - (double)(float)(dVar36 * dVar20));
  fVar2 = fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3;
  dVar21 = dVar38;
  dVar25 = dVar38;
  dVar34 = dVar38;
  if ((double)SQRT(fVar2) != dVar38) {
    fVar5 = 1.0 / SQRT(fVar2);
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar25 = (double)(fVar4 * fVar5);
    dVar21 = (double)(fVar3 * fVar5);
    dVar34 = (double)(fVar1 * fVar5);
  }
  local_190 = (float)dVar25;
  local_18c = (float)dVar21;
  local_188 = (float)dVar34;
  local_194 = 0;
  pfVar8 = (float *)&DAT_00e61340;
  iVar16 = 0;
  local_1a0 = (float)(dVar21 * dVar37 - (double)(float)(dVar34 * dVar36));
  local_19c = (float)(dVar34 * dVar44 - (double)(float)(dVar25 * dVar37));
  local_198 = (float)(dVar25 * dVar36 - (double)(float)(dVar21 * dVar44));
  dVar21 = 0.019999999552965164;
  pfVar14 = (float *)&DAT_007403a0;
  pfVar13 = pfVar8;
  do {
    local_260[8] = (float)((double)*pfVar14 * dVar21);
    local_23c = (float)((double)pfVar14[1] * dVar21);
    local_238 = (float)((double)pfVar14[2] * dVar21);
    local_234 = pfVar14[3];
    FUN_005e7d64(local_260 + 8,local_260 + 8,&local_1a0);
    iVar16 = iVar16 + 1;
    pfVar14 = pfVar14 + 4;
    *pfVar13 = DAT_00e61260 + local_260[8];
    pfVar13[1] = DAT_00e61264 + local_23c;
    pfVar13[2] = DAT_00e61268 + local_238;
    pfVar13[3] = DAT_00e6126c;
    pfVar13 = pfVar13 + 4;
  } while (iVar16 < 0x14);
  iVar16 = 1;
  dVar25 = 1000.0;
  start = (Vec4 *)&DAT_00e61260;
  do {
    end = start + 1;
    pfVar8 = pfVar8 + 0x50;
    local_230 = end->x - start->x;
    dVar34 = (double)local_230;
    local_22c = start[1].y - start->y;
    dVar26 = (double)local_22c;
    local_228 = start[1].z - start->z;
    dVar30 = (double)local_228;
    local_224 = start[1].w;
    local_214 = 0;
    local_220 = (float)(dVar26 * dVar41 - (double)(float)(dVar30 * dVar43));
    local_21c = (float)(dVar30 * dVar20 - (double)(float)(dVar34 * dVar41));
    local_218 = (float)(dVar34 * dVar43 - (double)(float)(dVar26 * dVar20));
    dVar34 = (double)FUN_005e8e08((double)((float)(dVar30 * dVar41 +
                                                  (double)(float)(dVar34 * dVar20 +
                                                                 (double)(float)(dVar26 * dVar43)))
                                          / (float)((double)SQRT((float)(dVar30 * dVar30 +
                                                                        (double)(float)(dVar34 * 
                                                  dVar34 + (double)(float)(dVar26 * dVar26)))) *
                                                  dVar35)));
    dVar30 = 0.20000000298023224;
    dVar26 = (double)(float)(1.5707963705062866 - dVar34);
    dVar34 = (double)camera::Cam_InterpAngles
                               (dVar38,dVar26,0x3faeb851e0000000,0x3fc99999a0000000,dVar38);
    dVar26 = (double)fastfunc::FastDiffRots(dVar26,dVar34);
    if (0.3141592741012573 < ABS(dVar26)) {
      dVar26 = (double)fastfunc::FastDiffRots();
      dVar34 = (double)fastfunc::FastWrapRot((float)dVar34,(float)dVar26);
    }
    mobyutil::MB_RotateQuatAxisAngle((float)dVar34,&local_210,&local_230);
    dVar26 = (double)local_20c;
    dVar39 = (double)local_210;
    dVar29 = (double)local_208;
    dVar27 = (double)SQRT((float)(dVar29 * dVar29 +
                                 (double)(float)(dVar39 * dVar39 + (double)(float)(dVar26 * dVar26))
                                 ));
    dVar31 = (double)(float)(dVar35 / dVar27);
    dVar34 = dVar38;
    if (dVar38 - dVar27 < 0.0) {
      dVar34 = (double)(float)(dVar26 * dVar31);
    }
    dVar22 = dVar38;
    if (dVar38 - dVar27 < 0.0) {
      dVar22 = (double)(float)(dVar39 * dVar31);
    }
    dVar23 = dVar38;
    if (dVar38 - dVar27 < 0.0) {
      dVar23 = (double)(float)(dVar29 * dVar31);
    }
    if (dVar27 - dVar38 < 0.0) {
      dVar34 = (double)(float)(dVar26 * dVar31);
    }
    if (dVar27 - dVar38 < 0.0) {
      dVar22 = (double)(float)(dVar39 * dVar31);
    }
    if (dVar27 - dVar38 < 0.0) {
      dVar23 = (double)(float)(dVar29 * dVar31);
    }
    local_20c = (float)((double)(float)(dVar34 - dVar26) + dVar26);
    local_210 = (float)((double)(float)(dVar22 - dVar39) + dVar39);
    local_208 = (float)((double)(float)(dVar23 - dVar29) + dVar29);
    fVar3 = SQRT(local_208 * local_208 + local_210 * local_210 + local_20c * local_20c);
    if (3.9 < fVar3) {
      fVar3 = 3.9 / fVar3;
      local_210 = local_210 * fVar3;
      local_20c = local_20c * fVar3;
      local_208 = local_208 * fVar3;
    }
    if (5 < iVar16) {
      dVar34 = (double)fastfunc::FastIntToDouble(10);
      local_130 = (longlong)iVar16;
      fVar3 = (float)((double)local_130 / dVar34);
      local_204 = local_224;
      local_210 = fVar3 * (local_230 - local_210) + local_210;
      local_20c = fVar3 * (local_22c - local_20c) + local_20c;
      local_208 = fVar3 * (local_228 - local_208) + local_208;
    }
    fVar3 = start->y;
    fVar4 = start->z;
    fVar1 = start->w;
    end->x = start->x + local_210;
    start[1].y = fVar3 + local_20c;
    start[1].w = fVar1;
    start[1].z = fVar4 + local_208;
    dVar34 = path::ClosestPntOnSegmentAtDist
                       ((float)dVar38,&VStack_1f0,&local_290,&local_290,start,end);
    local_140 = dVar25;
    if (dVar34 - dVar25 < 0.0) {
      local_140 = dVar34;
    }
    if (ABS(dVar41) <= 2.0999999046325684) {
      dVar25 = (double)SQRT(DAT_00969f78 * DAT_00969f78 +
                            hero::g_heroGravityDir * hero::g_heroGravityDir +
                            DAT_00969f74 * DAT_00969f74);
      dVar37 = dVar38;
      dVar44 = dVar38;
      dVar36 = dVar38;
      if (dVar25 != dVar38) {
        fVar3 = (float)(dVar33 / dVar25);
        dVar44 = (double)(hero::g_heroGravityDir * fVar3);
        dVar36 = (double)(DAT_00969f74 * fVar3);
        dVar37 = (double)(DAT_00969f78 * fVar3);
      }
    }
    else {
      dVar25 = (double)(start[-1].x - start->x);
      dVar34 = (double)(start[-1].z - start->z);
      dVar26 = (double)(start[-1].y - start->y);
      if (dVar38 < (double)((float)(dVar20 * dVar36 - (double)(float)(dVar43 * dVar44)) *
                            (float)(dVar25 * dVar36 - (double)(float)(dVar26 * dVar44)) +
                           (float)(dVar43 * dVar37 - (double)(float)(dVar41 * dVar36)) *
                           (float)(dVar26 * dVar37 - (double)(float)(dVar34 * dVar36)) +
                           (float)(dVar41 * dVar44 - (double)(float)(dVar20 * dVar37)) *
                           (float)(dVar34 * dVar44 - (double)(float)(dVar25 * dVar37)))) {
        dVar37 = -dVar37;
        dVar44 = -dVar44;
        dVar36 = -dVar36;
      }
    }
    fVar3 = (float)(dVar41 * dVar41 +
                   (double)(float)(dVar20 * dVar20 + (double)(float)(dVar43 * dVar43)));
    dVar25 = dVar38;
    dVar34 = dVar38;
    dVar26 = dVar38;
    if ((double)SQRT(fVar3) != dVar38) {
      fVar4 = 1.0 / SQRT(fVar3);
      fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      dVar25 = (double)(-(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4);
      dVar26 = (double)(float)(dVar20 * dVar25);
      dVar34 = (double)(float)(dVar43 * dVar25);
      dVar25 = (double)(float)(dVar41 * dVar25);
    }
    local_164 = (float)dVar40;
    local_170 = (float)dVar26;
    local_16c = (float)dVar34;
    fVar3 = (float)(dVar37 * dVar26 - (double)(float)(dVar44 * dVar25));
    fVar4 = (float)(dVar36 * dVar25 - (double)(float)(dVar37 * dVar34));
    fVar1 = (float)(dVar44 * dVar34 - (double)(float)(dVar36 * dVar26));
    local_168 = (float)dVar25;
    local_154 = 0;
    fVar2 = fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3;
    dVar40 = dVar38;
    dVar20 = dVar38;
    dVar43 = dVar38;
    if ((double)SQRT(fVar2) != dVar38) {
      fVar5 = 1.0 / SQRT(fVar2);
      fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      dVar20 = (double)(fVar4 * fVar5);
      dVar40 = (double)(fVar3 * fVar5);
      dVar43 = (double)(fVar1 * fVar5);
    }
    local_130 = (longlong)iVar16;
    local_160 = (float)dVar20;
    local_15c = (float)dVar40;
    local_158 = (float)dVar43;
    local_144 = 0;
    iVar15 = 0;
    local_150 = (float)(dVar34 * dVar43 - (double)(float)(dVar25 * dVar40));
    dVar44 = (double)local_150;
    local_14c = (float)(dVar25 * dVar20 - (double)(float)(dVar26 * dVar43));
    dVar36 = (double)local_14c;
    local_148 = (float)(dVar26 * dVar40 - (double)(float)(dVar34 * dVar20));
    dVar37 = (double)local_148;
    dVar40 = 0.699999988079071;
    dVar20 = 3.141592502593994;
    dVar43 = -3.141592502593994;
    dVar41 = -0.16666656732559204;
    dVar25 = 0.008333025500178337;
    dVar34 = -0.0001980741071747616;
    dVar26 = 2.601886990305502e-06;
    dVar29 = (double)local_130;
    dVar31 = (double)(float)(dVar29 * dVar30 + dVar21);
    dVar27 = (double)(float)(dVar31 * 0.25);
    pfVar14 = (float *)&DAT_007403a0;
    pfVar13 = pfVar8;
    do {
      dVar22 = (double)fastfunc::FastWrapRot
                                 ((float)(dVar29 * dVar40 + (double)DAT_00e5ff94),(float)dVar38);
      dVar39 = (double)(float)(dVar20 - dVar22);
      if (dVar22 - (double)(float)(dVar20 - dVar22) < 0.0) {
        dVar39 = dVar22;
      }
      dVar23 = (double)(float)(dVar43 - dVar22);
      if ((double)(float)(dVar43 - dVar22) - dVar39 < 0.0) {
        dVar23 = dVar39;
      }
      dVar39 = (double)(float)(dVar23 * dVar23);
      dVar32 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar23));
      dVar22 = (double)(float)(dVar39 * dVar32);
      local_1f8 = (float)((double)(float)((double)(float)(dVar39 * dVar22) * dVar26 +
                                         (double)(float)(dVar22 * dVar34 +
                                                        (double)(float)(dVar32 * dVar25 +
                                                                       (double)(float)((double)(
                                                  float)(dVar39 * dVar23) * dVar41 + dVar23)))) *
                          dVar27 + dVar31);
      local_200 = *pfVar14 * local_1f8;
      local_1fc = pfVar14[1] * local_1f8;
      local_1f8 = pfVar14[2] * local_1f8;
      local_1f4 = pfVar14[3];
      FUN_005e7d64(&local_200,&local_200,&local_170);
      iVar15 = iVar15 + 1;
      pfVar14 = pfVar14 + 4;
      *pfVar13 = end->x + local_200;
      pfVar13[1] = start[1].y + local_1fc;
      pfVar13[2] = start[1].z + local_1f8;
      pfVar13[3] = start[1].w;
      pfVar13 = pfVar13 + 4;
    } while (iVar15 < 0x14);
    iVar16 = iVar16 + 1;
    dVar40 = (double)local_204;
    dVar25 = (double)SQRT(local_208 * local_208 + local_210 * local_210 + local_20c * local_20c);
    fVar3 = (float)(dVar35 / dVar25);
    dVar20 = dVar38;
    if (dVar38 - dVar25 < 0.0) {
      dVar20 = (double)(local_210 * fVar3);
    }
    dVar43 = dVar38;
    if (dVar38 - dVar25 < 0.0) {
      dVar43 = (double)(local_20c * fVar3);
    }
    dVar41 = dVar38;
    if (dVar38 - dVar25 < 0.0) {
      dVar41 = (double)(local_208 * fVar3);
    }
    if (dVar25 - dVar38 < 0.0) {
      dVar20 = (double)(local_210 * fVar3);
    }
    if (dVar25 - dVar38 < 0.0) {
      dVar43 = (double)(local_20c * fVar3);
    }
    if (dVar25 - dVar38 < 0.0) {
      dVar41 = (double)(local_208 * fVar3);
    }
    dVar25 = local_140;
    start = end;
  } while (iVar16 < 10);
  RegisterFuncForMoby(&PTR_M1046_0019d958_007086a0,(MobyInstance *)param_1);
  iVar17 = 0;
  iVar15 = 0;
  iVar18 = 0;
  iVar16 = 0;
  do {
    iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
    if (iVar18 < 5 && iVar9 == 0) {
      lVar19 = 9;
      iVar7 = 0x12;
      do {
        if (0x3f < *(short *)((int)&DAT_00e61328 + iVar7)) break;
        lVar19 = lVar19 + -1;
        iVar7 = iVar7 + -2;
      } while (-1 < (int)lVar19);
      if (0 < (int)lVar19) {
        if (iVar17 < 2 && 1 < (int)lVar19) {
          iVar7 = mobyutil::MB_randInt(0x14);
          uVar42 = 0x3ff0000000000000;
          dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar30,1.0);
          pfVar8 = (float *)((int)(&DAT_00e61340 + iVar7 * 4) +
                            (int)(lVar19 << 8) + (int)(lVar19 << 6));
          dVar20 = (double)(float)(&DAT_00e61340)[iVar7 * 4];
          local_1d4 = pfVar8[3];
          iVar9 = (int)(lVar19 << 4);
          local_1e0 = (float)(dVar40 * (double)(float)((double)*pfVar8 - dVar20) + dVar20);
          local_1dc = (float)(dVar40 * (double)(pfVar8[1] - (float)(&DAT_00e61344)[iVar7 * 4]) +
                             (double)(float)(&DAT_00e61344)[iVar7 * 4]);
          local_1d8 = (float)(dVar40 * (double)(pfVar8[2] - (float)(&DAT_00e61348)[iVar7 * 4]) +
                             (double)(float)(&DAT_00e61348)[iVar7 * 4]);
          dVar35 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00e61260 +
                                                                              iVar9) -
                                                           (double)DAT_00e61260) +
                                  (double)DAT_00e61260);
          dVar20 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00e61264 +
                                                                              iVar9) -
                                                           (double)DAT_00e61264) +
                                  (double)DAT_00e61264);
          dVar40 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00e61268 +
                                                                              iVar9) -
                                                           (double)DAT_00e61268) +
                                  (double)DAT_00e61268);
          uVar24 = mobyutil::MB_randRangeFloat(60000.0,180000.0);
          uVar28 = 0x3ff07ae140000000;
          mobyutil::MB_randInt(uVar24,0x3ff07ae140000000,5);
          iVar9 = partupd::SpawnPart_23(dVar38,uVar42,uVar28,uVar24,&local_1e0);
          if (iVar9 != 0) {
            fVar4 = (float)((double)local_1dc - dVar20);
            fVar1 = (float)((double)local_1e0 - dVar35);
            fVar2 = (float)((double)local_1d8 - dVar40);
            *(float *)(iVar9 + 0x3c) = local_1d4;
            iVar17 = iVar17 + 1;
            dVar20 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
            fVar3 = (float)(0.009999999776482582 / dVar20);
            dVar40 = dVar38;
            if (dVar38 - dVar20 < 0.0) {
              dVar40 = (double)(fVar2 * fVar3);
            }
            dVar35 = dVar38;
            if (dVar38 - dVar20 < 0.0) {
              dVar35 = (double)(fVar1 * fVar3);
            }
            dVar43 = dVar38;
            if (dVar38 - dVar20 < 0.0) {
              dVar43 = (double)(fVar4 * fVar3);
            }
            if (dVar20 - dVar38 < 0.0) {
              dVar40 = (double)(fVar2 * fVar3);
            }
            if (dVar20 - dVar38 < 0.0) {
              dVar35 = (double)(fVar1 * fVar3);
            }
            if (dVar20 - dVar38 < 0.0) {
              dVar43 = (double)(fVar4 * fVar3);
            }
            *(float *)(iVar9 + 0x30) = (float)dVar35;
            *(float *)(iVar9 + 0x34) = (float)dVar43;
            *(float *)(iVar9 + 0x38) = (float)(dVar40 + dVar21);
          }
        }
        iVar9 = (int)(lVar19 << 4);
        local_1e0 = *(float *)((int)&DAT_00e61260 + iVar9);
        local_1dc = *(float *)((int)&DAT_00e61264 + iVar9);
        local_1d8 = *(float *)((int)&DAT_00e61268 + iVar9);
        local_1d4 = *(float *)((int)&DAT_00e6126c + iVar9);
        local_1c4 = 0;
        local_1c8 = 0;
        local_1cc = 0;
        local_1d0 = 0;
        uVar24 = mobyutil::MB_randRangeFloat(60000.0,180000.0);
        iVar9 = partupd::SpawnPart_23
                          (dVar38,0x3ff0000000000000,0x3ff0000000000000,uVar24,&local_1e0);
        *(int *)((int)&DAT_00e5ffac + iVar16) = iVar9;
        if (iVar9 != 0) {
          iVar18 = iVar18 + 1;
          *(undefined2 *)(iVar9 + 10) = 200;
          *(undefined4 *)(iVar9 + 0x24) = 2;
          *(undefined1 *)(iVar9 + 0x2a) = 0x7f;
          *(undefined1 *)(iVar9 + 0x2b) = 200;
        }
        dVar20 = (double)local_138;
        *(short *)((int)&DAT_00e5ff98 + iVar16) = (short)lVar19;
        *(undefined4 *)((int)&DAT_00e5ff9c + iVar16) = 0;
        *(undefined4 *)((int)&DAT_00e5ffa0 + iVar16) = 0;
        uVar10 = mobyutil::MB_randInt(0x14);
        *(undefined2 *)((int)&DAT_00e5ff9a + iVar16) = uVar10;
        dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar20,0.8);
        *(float *)((int)&DAT_00e5ffa4 + iVar16) = (float)dVar40;
        dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar20,0.4);
        iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
        *(float *)((int)&DAT_00e5ffa8 + iVar16) = (float)dVar40;
      }
    }
    if (iVar9 != 0) {
      iVar7 = (int)((longlong)*(short *)((int)&DAT_00e5ff98 + iVar16) << 4);
      dVar35 = (double)(*(float *)((int)&DAT_00e61254 + iVar7) -
                       *(float *)((int)&DAT_00e61264 + iVar7));
      dVar43 = (double)(*(float *)((int)&DAT_00e61250 + iVar7) -
                       *(float *)((int)&DAT_00e61260 + iVar7));
      dVar20 = (double)(*(float *)((int)&DAT_00e61258 + iVar7) -
                       *(float *)((int)&DAT_00e61268 + iVar7));
      dVar40 = (double)SQRT((float)(dVar20 * dVar20 +
                                   (double)(float)(dVar43 * dVar43 +
                                                  (double)(float)(dVar35 * dVar35))));
      *(float *)((int)&DAT_00e5ff9c + iVar16) =
           *(float *)((int)&DAT_00e5ff9c + iVar16) + *(float *)((int)&DAT_00e5ffa8 + iVar16);
      *(undefined2 *)(iVar9 + 10) = 200;
      if (dVar40 < (double)*(float *)((int)&DAT_00e5ff9c + iVar16)) {
        sVar11 = *(short *)((int)&DAT_00e5ff98 + iVar16) + -1;
        *(short *)((int)&DAT_00e5ff98 + iVar16) = sVar11;
        if (sVar11 < 1) {
          partproc::DeletePart(*(undefined4 *)((int)&DAT_00e5ffac + iVar16));
          *(undefined4 *)((int)&DAT_00e5ffac + iVar16) = 0;
        }
        else {
          iVar9 = (int)((longlong)*(short *)((int)&DAT_00e5ff98 + iVar16) << 4);
          *(float *)((int)&DAT_00e5ff9c + iVar16) =
               (float)((double)*(float *)((int)&DAT_00e5ff9c + iVar16) - dVar40);
          dVar35 = (double)(*(float *)((int)&DAT_00e61254 + iVar9) -
                           *(float *)((int)&DAT_00e61264 + iVar9));
          dVar43 = (double)(*(float *)((int)&DAT_00e61250 + iVar9) -
                           *(float *)((int)&DAT_00e61260 + iVar9));
          dVar20 = (double)(*(float *)((int)&DAT_00e61258 + iVar9) -
                           *(float *)((int)&DAT_00e61268 + iVar9));
          dVar40 = (double)SQRT((float)(dVar20 * dVar20 +
                                       (double)(float)(dVar43 * dVar43 +
                                                      (double)(float)(dVar35 * dVar35))));
        }
      }
      if (*(int *)((int)&DAT_00e5ffac + iVar16) != 0) {
        dVar40 = (double)(float)((double)*(float *)((int)&DAT_00e5ff9c + iVar16) / dVar40);
        if (*(short *)((int)&DAT_00e5ff98 + iVar16) == 2) {
          *(undefined2 *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 10) = 100;
        }
        else if (*(short *)((int)&DAT_00e5ff98 + iVar16) < 2) {
          uVar10 = fastfunc::FastDoubleToInt((double)((float)(1.0 - dVar40) * 100.0));
          *(undefined2 *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 10) = uVar10;
          if (*(short *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 10) < 0x3d) {
            *(undefined2 *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 10) = 0x3c;
          }
        }
        if (*(short *)((int)&DAT_00e5ff98 + iVar16) == 1) {
          iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
          fVar4 = (float)((double)param_2[1] - (double)*(float *)(iVar9 + 0x14));
          fVar1 = (float)((double)*param_2 - (double)*(float *)(iVar9 + 0x10));
          fVar2 = (float)((double)param_2[2] - (double)*(float *)(iVar9 + 0x18));
          dVar20 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
          fVar3 = (float)((double)*(float *)((int)&DAT_00e5ffa8 + iVar16) / dVar20);
          dVar40 = dVar38;
          if (dVar38 - dVar20 < 0.0) {
            dVar40 = (double)(fVar3 * fVar2);
          }
          dVar35 = dVar38;
          if (dVar38 - dVar20 < 0.0) {
            dVar35 = (double)(fVar3 * fVar4);
          }
          dVar43 = dVar38;
          if (dVar38 - dVar20 < 0.0) {
            dVar43 = (double)(fVar3 * fVar1);
          }
          if (dVar20 - dVar38 < 0.0) {
            dVar40 = (double)(fVar3 * fVar2);
          }
          if (dVar20 - dVar38 < 0.0) {
            dVar35 = (double)(fVar3 * fVar4);
          }
          if (dVar20 - dVar38 < 0.0) {
            dVar43 = (double)(fVar3 * fVar1);
          }
          *(float *)(iVar9 + 0x18) = (float)((double)*(float *)(iVar9 + 0x18) + dVar40);
          *(float *)(iVar9 + 0x14) = (float)((double)*(float *)(iVar9 + 0x14) + dVar35);
          *(float *)(iVar9 + 0x10) = (float)((double)*(float *)(iVar9 + 0x10) + dVar43);
          *(float *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 0xc) =
               *(float *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 0xc) *
               (DAT_0071f408 * -0.050000012 + 1.0);
        }
        else {
          iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
          iVar7 = (int)((longlong)*(short *)((int)&DAT_00e5ff98 + iVar16) << 4);
          *(float *)(iVar9 + 0x10) =
               (float)(dVar43 * dVar40 + (double)*(float *)((int)&DAT_00e61260 + iVar7));
          *(float *)(iVar9 + 0x14) =
               (float)(dVar35 * dVar40 + (double)*(float *)((int)&DAT_00e61264 + iVar7));
          *(float *)(iVar9 + 0x18) =
               (float)(dVar20 * dVar40 + (double)*(float *)((int)&DAT_00e61268 + iVar7));
          *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)((int)&DAT_00e6126c + iVar7);
          sVar11 = *(short *)((int)&DAT_00e5ff9a + iVar16);
          mobyutil::Lerp_vec4((float)dVar40,&local_1c0);
          iVar7 = sVar11 + 0x13;
          mobyutil::Lerp_vec4((float)dVar40,local_1b0);
          mobyutil::Lerp_vec4(*(float *)((int)&DAT_00e5ffa0 + iVar16),&local_1c0);
          fVar3 = *(float *)((int)&DAT_00e5ffa0 + iVar16) + *(float *)((int)&DAT_00e5ffa4 + iVar16);
          iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
          *(float *)((int)&DAT_00e5ffa0 + iVar16) = fVar3;
          if (1.0 <= fVar3) {
            *(short *)((int)&DAT_00e5ff9a + iVar16) = (short)iVar7 + (short)(iVar7 / 0x14) * -0x14;
            *(float *)((int)&DAT_00e5ffa0 + iVar16) = fVar3 - 1.0;
          }
          *(float *)(iVar9 + 0x10) = *(float *)(iVar9 + 0x10) + local_1c0;
          *(float *)(iVar9 + 0x14) = *(float *)(iVar9 + 0x14) + local_1bc;
          *(float *)(iVar9 + 0x18) = *(float *)(iVar9 + 0x18) + local_1b8;
        }
      }
    }
    iVar15 = iVar15 + 1;
    iVar16 = iVar16 + 0x18;
    if (199 < iVar15) {
      return local_140;
    }
  } while( true );
}



//==== 0019add8  ns=mobyupdate_helpers  size=0x24
// sig: undefined M1045_0019add8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1045_0019add8(void)

{
  DAT_00740388 = 1;
  DAT_0074038c = 1;
  DAT_00e61328 = 0;
  return;
}



//==== 0019aea0  ns=mobyupdate_unsorted  size=0x2aa4
// sig: undefined UpdateMoby_1045(MobyInstance * moby)
// callers(0): 
// callees(58): 00065468 stub::STUB_00065468; 0006d720 RegisterFuncForMoby; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fea60 mobyutil::MB_randSphere; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00108180 mobyutil::MB_computeLobVelocity; 00109298 mobyutil::MB_initJump; 001095b8 mobyutil::MB_updateJump; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010ce18 mobyutil::MB_PathMoveDist; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00113e88 mobyutil::MB_MayaFrameTrigger; 0011440c mobyutil::MB_SplineMarkCrossings; 00114d58 mobyutil::MB_SplineFindRouteNode; 00128b50 partupd::SpawnPart_29; 001367d0 path::PathFindClosestPnt; 00151e70 respawn::SetSpawnPoint; 00196d68 mobyupdate_helpers::M1045_00196d68; 00198cac mobyupdate_helpers::M1045_00198cac; 00198d88 mobyupdate_helpers::M1045_00198d88; 00199288 mobyupdate_helpers::M1045_00199288; 00199300 mobyupdate_helpers::M1045_00199300; 00199398 mobyupdate_helpers::M1045_00199398; 00199888 mobyupdate_helpers::M1045_00199888; 0019ddd0 mobyupdate_helpers::Spawn_Moby1046; 002ea758 FUN_002ea758; 0044cddc FUN_0044cddc; 004fff60 fastfunc::FastDecTimerS32
// strings: 00654380: 'Correcting!\n' | 0019ae98: 'B\nff`'

/* WARNING: Type propagation algorithm not settling */
/* Moby 1045 */

void mobyupdate_unsorted::UpdateMoby_1045(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  MobyModeBit MVar4;
  void *pvVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  char cVar21;
  Vec4 *position;
  u8 uVar22;
  undefined2 uVar20;
  int iVar19;
  int iVar23;
  int iVar24;
  short sVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  Vec4 VStack_220;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [8];
  float local_1c8;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  float local_160;
  float local_15c;
  float local_148;
  undefined1 auStack_130 [16];
  MobyInstance *local_120;
  int local_110 [2];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  longlong local_d8;
  
  lVar13 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  if ((*(int *)((int)pvVar5 + 0x1a4) != -1) &&
     (iVar14 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x1a4)),
     iVar14 == 0)) {
    return;
  }
  lVar28 = lVar13 + 0x10;
  FUN_005e7e98(auStack_2e0,lVar28);
  mobyupdate_helpers::M1045_00198d88(lVar13,pvVar5,(int)pvVar5 + 0x20);
  dVar37 = 30.0;
  mobyutil::MB_getTarget(0x403e000000000000,lVar13,&DAT_0019adfc,&local_160);
  dVar31 = (double)FUN_005e8588(&local_160,lVar28);
  uVar32 = FUN_005e8338((double)(local_160 - (moby->pos).x),(double)(local_15c - (moby->pos).y));
  dVar33 = (double)FUN_005e8588(lVar28,&g_heroPosition);
  uVar34 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                        (double)(g_heroPosition.y - (moby->pos).y));
  iVar14 = 1;
  uVar15 = fastfunc::FastDecTimerS16((int)pvVar5 + 0x194);
  bVar11 = false;
  uVar30 = (uint)LZCOUNT(uVar15) >> 5 ^ 1;
  iVar16 = fastfunc::FastDecTimerS16((int)pvVar5 + 0x19a);
  if ((iVar16 != 0) && (4.0 < dVar31)) {
    bVar11 = true;
  }
  bVar12 = false;
  if (((*(char *)((int)pvVar5 + 0x1c7) != '\0') && (local_120 == g_heroMobyPtr)) &&
     (dVar31 < dVar37)) {
    bVar12 = true;
  }
  uVar29 = 0;
  iVar16 = fastfunc::FastDecTimerS16((int)pvVar5 + 0x198);
  bVar2 = moby->setByGroup;
  if ((iVar16 != 0) && (dVar31 < 10.0)) {
    uVar29 = 1;
  }
  iVar16 = 0;
  bVar1 = false;
  dVar31 = 1.0;
  if ((((moby->pos).z + 1.0 < hero::g_heroGroundZ) && (g_standingOnMoby != 0)) &&
     (*(short *)(g_standingOnMoby + 0xa6) < 0x45d && 0x458 < *(short *)(g_standingOnMoby + 0xa6))) {
    bVar1 = true;
  }
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      bVar12 = false;
      iVar14 = 0;
    }
    else if (bVar2 < 2) {
      uVar29 = 0;
      uVar30 = 0;
      bVar12 = false;
      bVar11 = false;
    }
    else if (bVar2 < 3) {
      uVar29 = 0;
      uVar30 = 0;
      bVar12 = false;
      bVar11 = false;
    }
    else {
      iVar14 = *(int *)((int)pvVar5 + 0x1a8);
      uVar30 = (uint)((LZCOUNT(-1 - iVar14) << 0x3a) >> 0x3f) & uVar30;
      uVar29 = (uint)((LZCOUNT(-1 - iVar14) << 0x3a) >> 0x3f) & uVar29;
      iVar16 = (int)((LZCOUNT(-1 - iVar14) << 0x3a) >> 0x3f) + 1;
      bVar12 = false;
      iVar14 = iVar16;
    }
  }
  else if (bVar2 < 7) {
    if (bVar2 < 5) {
      uVar29 = 0;
      uVar30 = 0;
      bVar12 = false;
      bVar11 = false;
    }
    else if (bVar2 < 6) {
      uVar29 = 0;
      uVar30 = 0;
      bVar12 = false;
      bVar11 = false;
    }
    else if (*(int *)((int)pvVar5 + 0x1a8) == -1) {
      iVar14 = 0;
    }
    else {
      uVar29 = 0;
      iVar16 = 1;
      uVar30 = 0;
    }
  }
  else if (bVar2 < 8) {
    uVar29 = 0;
    uVar30 = 0;
    bVar11 = false;
    bVar12 = false;
  }
  else if (bVar2 < 9) {
    uVar29 = 0;
    uVar30 = 0;
    bVar11 = false;
    bVar12 = false;
  }
  dVar36 = 16.0;
  uVar17 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar5 + 0x20) * 16.0));
  uVar17 = uVar17 & 0xfff0;
  *(uint *)((int)pvVar5 + 0x1b4) = uVar17;
  if ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 0) {
    uVar17 = (int)*(uint *)((int)pvVar5 + 0x20) >> 0x1f;
    if ((int)((uVar17 >> 1 ^ *(uint *)((int)pvVar5 + 0x20)) - uVar17) < 0x3f000001) {
      uVar17 = 0;
      *(undefined4 *)((int)pvVar5 + 0x1b4) = 0;
    }
    else {
      iVar18 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar5 + 0x20) - 0.5));
      iVar23 = (int)*(short *)((int)pvVar5 + 0x24);
      iVar19 = iVar23 >> 0x1f;
      iVar24 = (int)*(short *)((int)pvVar5 + 0x24);
      iVar19 = ((iVar18 - (iVar18 / ((iVar23 / 6 + iVar19) - (iVar23 / 6 + iVar19 >> 0x1f))) *
                          ((iVar23 / 6 + iVar19) - (iVar23 / 6 + iVar19 >> 0x1f))) * 0x10) /
               ((iVar24 / 6 + (iVar24 >> 0x1f)) - (iVar24 / 6 + (iVar24 >> 0x1f) >> 0x1f));
      uVar17 = *(int *)((int)pvVar5 + 0x1b4) + (iVar19 + (iVar19 >> 0x1f & -iVar19) & 0xfU);
      *(uint *)((int)pvVar5 + 0x1b4) = uVar17;
    }
  }
  if ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 2) {
    *(uint *)((int)pvVar5 + 0x1b4) = uVar17 + 0xf;
  }
  if (moby->state != '\0' && moby->state != '\a') {
    mobyupdate_helpers::M1045_00199300(lVar13);
  }
  cVar21 = *(char *)((int)pvVar5 + 0x1c5);
  if (cVar21 == '\x01') {
    fVar3 = DAT_0071f408 * 0.01 + *(float *)((int)pvVar5 + 0x1c8);
    dVar35 = (double)fVar3;
    *(float *)((int)pvVar5 + 0x1c8) = fVar3;
    if (dVar31 <= dVar35) {
      cVar21 = '\0';
      *(undefined1 *)((int)pvVar5 + 0x1c5) = 0;
    }
    if (dVar31 < dVar35) {
      *(undefined4 *)((int)pvVar5 + 0x1c8) = 0x3f800000;
    }
  }
  if (cVar21 == '\x02') {
    fVar3 = -(DAT_0071f408 * 0.01 - *(float *)((int)pvVar5 + 0x1c8));
    *(float *)((int)pvVar5 + 0x1c8) = fVar3;
    if (fVar3 <= 0.0) {
      *(undefined1 *)((int)pvVar5 + 0x1c5) = 0;
    }
    if (fVar3 < 0.0) {
      *(undefined4 *)((int)pvVar5 + 0x1c8) = 0;
    }
  }
  dVar35 = 0.0;
  if (0 < *(int *)((int)pvVar5 + 0x1c8)) {
    RegisterFuncForMoby(&PTR_M1045_00198280_007085c8,moby);
  }
  iVar19 = g_standingOnMoby;
  bVar2 = moby->state;
  if (8 < bVar2) {
    if (bVar2 != 0x10) {
      if (bVar2 == 0xf) {
        iVar14 = *(int *)((int)pvVar5 + 0x1f0);
        if (iVar14 != -1) {
          respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar14].pos,(Vec4 *)&Cuboids[iVar14].rot);
          memcard::memcard_Save(0,-1);
        }
        iVar14 = *(int *)((int)pvVar5 + 0x1d0);
        if (iVar14 == -1) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        fVar7 = MobyInstance[iVar14].pos.z;
        fVar3 = MobyInstance[iVar14].pos.z;
        uVar30 = (int)fVar7 >> 0x1f;
        if (0x4209ffff < (int)((uVar30 >> 1 ^ (uint)fVar7) - uVar30)) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        MobyInstance[iVar14].pos.z = ((float)0x420a6666 - fVar3) * 0.1 + fVar3;
      }
      else if (bVar2 == 0xe) {
        iVar14 = mobyutil::MB_updateJump(lVar13,(int)pvVar5 + 0xc0);
        if ((iVar14 == 4) ||
           ((*(char *)((int)pvVar5 + 0xef) == '\x02' &&
            (fVar7 = (moby->pos).z, uVar30 = (int)fVar7 >> 0x1f,
            uVar29 = (int)*(uint *)((int)pvVar5 + 0x128) >> 0x1f,
            (int)((uVar30 >> 1 ^ (uint)fVar7) - uVar30) <=
            (int)((uVar29 >> 1 ^ *(uint *)((int)pvVar5 + 0x128)) - uVar29))))) {
          (moby->pos).z = *(f32 *)((int)pvVar5 + 0x128);
          mobyfunc::GetBonePosition(lVar13,5,auStack_200);
          uVar32 = 0x4039000000000000;
          dVar33 = 8.0;
          mobyupdate_helpers::Spawn_Moby1046
                    (dVar31,0x4039000000000000,dVar31,(double)(mobyutil::g_FrameTime * 8.0),dVar31,
                     lVar13,auStack_200);
          mobyfunc::GetBonePosition(lVar13,6,auStack_200);
          mobyupdate_helpers::Spawn_Moby1046
                    (dVar31,uVar32,dVar31,(double)(float)((double)mobyutil::g_FrameTime * dVar33),
                     dVar31,lVar13,auStack_200);
          if (*(int *)((int)pvVar5 + (uint)*(byte *)((int)pvVar5 + 0x19d) * 4 + 0x1d8) != -1) {
            MobyInstance[*(int *)((int)pvVar5 + (uint)*(byte *)((int)pvVar5 + 0x19d) * 4 + 0x1d8)].
            setByGroup = '\0';
          }
          if (moby->animationId != '\x05') {
            mobyutil::MB_SetAnimation(lVar13,5,0,10);
          }
          moby->unk58 = 0.5;
          moby->state = '\x06';
          moby->setByGroup = moby->setByGroup + '\x01';
          uVar15 = idol::GetAnimDuration(0x37);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
        }
      }
      else if (bVar2 == 0xd) {
        iVar14 = (int)pvVar5 + 0x100;
        FUN_005e822c(0x3fd99999a0000000,iVar14,iVar14);
        FUN_005e7f54(lVar28,lVar28,iVar14);
        if (*(int *)((int)pvVar5 + 0x164) < 1) {
          iVar14 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x160);
          if (iVar14 != 0) {
            bVar2 = *(byte *)((int)pvVar5 + 0x19d);
            if (bVar2 == 0) {
              FUN_005e7e98((int)pvVar5 + 0x120,ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x10
                          );
              *(byte *)((int)pvVar5 + 0x19c) = *(byte *)((int)pvVar5 + 0x19c) & 0xfe;
            }
            else if (bVar2 < 2) {
              FUN_005e7e98((int)pvVar5 + 0x120,ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x20
                          );
              *(byte *)((int)pvVar5 + 0x19c) = *(byte *)((int)pvVar5 + 0x19c) & 0xfd;
            }
            else if (bVar2 < 3) {
              dVar31 = (double)FUN_005e8588(&g_heroPosition,
                                            ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x30);
              dVar33 = (double)FUN_005e8588(&g_heroPosition,
                                            ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x40);
              if (dVar31 <= dVar33) {
                FUN_005e7e98((int)pvVar5 + 0x120,
                             ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x40);
              }
              else {
                FUN_005e7e98((int)pvVar5 + 0x120,
                             ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x30);
              }
              *(byte *)((int)pvVar5 + 0x19c) = *(byte *)((int)pvVar5 + 0x19c) & 0xfb;
            }
            *(uint *)((int)pvVar5 + 0x1a8) =
                 (uint)*(byte *)((int)pvVar5 + *(byte *)((int)pvVar5 + 0x19d) + 0x1d4);
            uVar32 = mobyupdate_helpers::M1045_00198cac(lVar13,pvVar5,auStack_f0);
            mobyutil::MB_SplineMarkCrossings(auStack_f0,uVar32,*(undefined4 *)((int)pvVar5 + 0x188))
            ;
            mobyutil::MB_initJump(lVar13,(int)pvVar5 + 0xc0,(int)pvVar5 + 0x120);
            moby->state = '\x0e';
          }
        }
        else {
          iVar14 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x160);
          if (iVar14 != 0) {
            *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
            *(int *)((int)pvVar5 + 0x164) = *(int *)((int)pvVar5 + 0x164) + -1;
            *(float *)((int)pvVar5 + 0x20) =
                 (float)((double)*(float *)((int)pvVar5 + 0x20) - dVar31);
            mobyutil::MB_UpdateLightsTransition(lVar13,(int)pvVar5 + 0x60);
            if (*(int *)((int)pvVar5 + 0x20) < 1) {
              if (moby->animationId != '\r') {
                mobyutil::MB_SetAnimation(lVar13,0xd,0,10);
              }
              moby->state = '\t';
            }
            else {
              if (*(int *)((int)pvVar5 + 0x164) < 1) {
                uVar15 = idol::GetAnimDuration(0x14);
              }
              else {
                uVar15 = idol::GetAnimDuration(10);
              }
              *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
            }
          }
        }
      }
      else if (bVar2 == 0xc) {
        iVar14 = (int)pvVar5 + 0x100;
        dVar31 = (double)*(float *)((int)pvVar5 + 0x108);
        FUN_005e822c(0x3fe6666660000000,iVar14,iVar14);
        *(float *)((int)pvVar5 + 0x108) =
             -(float)((double)mobyutil::g_FrameTime * 9.800000190734863 - dVar31);
        FUN_005e7f54(lVar28,lVar28,iVar14);
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\v')) {
          mobyutil::MB_SetAnimation(lVar13,0xb,0,10);
        }
        fVar7 = (moby->pos).z;
        uVar30 = (int)fVar7 >> 0x1f;
        uVar29 = (int)*(uint *)((int)pvVar5 + 0x1b8) >> 0x1f;
        if ((int)((uVar30 >> 1 ^ (uint)fVar7) - uVar30) <
            (int)((uVar29 >> 1 ^ *(uint *)((int)pvVar5 + 0x1b8)) - uVar29)) {
          if (moby->animationId != '\v') {
            mobyutil::MB_SetAnimation(lVar13,0xb,0,10);
          }
          uVar15 = idol::GetAnimDuration(10);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
          *(undefined1 *)((int)pvVar5 + 0x1c5) = 2;
          moby->state = '\r';
          *(int *)((int)pvVar5 + 0x164) = (int)*(short *)((int)pvVar5 + 0x24) / 6;
        }
      }
      else if (bVar2 == 0xb) {
        if (moby->animationId != '\n') {
          mobyutil::MB_SetAnimation(lVar13,10,0,10);
        }
        bVar2 = moby->setByGroup;
        uVar29 = bVar2 + 1;
        moby->state = '\f';
        uVar30 = (uint)bVar2;
        if ((int)((uint)bVar2 + (uVar29 * 0x55 >> 8) * -3) < 2) {
          moby->setByGroup = (char)uVar29;
          uVar30 = uVar29;
        }
        uVar30 = uVar30 & 0xff;
        uVar29 = uVar30 + 1;
        if ((int)(uVar30 - ((uVar29 * 0x55 >> 8) + (uVar29 * 0x55 >> 8) * 2)) < 2) {
          moby->setByGroup = (char)uVar29;
          uVar30 = uVar29;
        }
        if (7 < (uVar30 & 0xff)) {
          moby->setByGroup = '\b';
        }
        bVar2 = *(byte *)((int)pvVar5 + 0x19d);
        uVar26 = (ulonglong)bVar2;
        iVar14 = *(int *)((int)pvVar5 + (uint)bVar2 * 4 + 0x1d8);
        if (iVar14 != -1) {
          if ((iVar14 != -1) &&
             (iVar16 = *(int *)((int)pvVar5 + (uint)bVar2 * 4 + 0x1e4), iVar16 != -1)) {
            pvVar6 = MobyInstance[iVar16].pVar;
            iVar14 = *(int *)((int)MobyInstance[iVar14].pVar + 0x28);
            if ((iVar14 != -1) && (*(int *)((int)pvVar6 + 0x28) != -1)) {
              dVar31 = (double)FUN_005e8588(&g_heroPosition,&Cuboids[iVar14].pos);
              dVar33 = (double)FUN_005e8588(&g_heroPosition,
                                            &Cuboids[*(int *)((int)pvVar6 + 0x28)].pos);
              if (dVar33 < dVar31) {
                uVar26 = uVar26 + 3;
              }
            }
          }
          MobyInstance[*(int *)((int)pvVar5 + (int)(uVar26 << 2) + 0x1d8)].setByGroup = '\x01';
        }
      }
      else if (bVar2 == 10) {
        if ((moby->field43_0x70 & 2U) != 0) {
          if (bVar1) {
            *(undefined4 *)((int)pvVar5 + 0x164) = 0;
            FUN_005e7e98((int)pvVar5 + 0x150,iVar19 + 0x10);
            *(float *)((int)pvVar5 + 0x158) = *(float *)((int)pvVar5 + 0x158) + 3.0;
            moby->state = '\b';
          }
          else {
            moby->state = '\x01';
          }
        }
      }
      else if (bVar2 == 9) {
        if (*(int *)((int)pvVar5 + 0x1b0) != -1) {
          hud::Hud_SetEntryValueById(*(int *)((int)pvVar5 + 0x1b0),0);
          *(undefined4 *)((int)pvVar5 + 0x1b0) = 0xffffffff;
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          iVar14 = (int)pvVar5 + 0x100;
          FUN_005e7f98(dVar31,iVar14,iVar14);
          *(undefined4 *)((int)pvVar5 + 0x108) = 0x3f800000;
          mobyutil::MB_genericExplosion
                    (dVar35,dVar35,0x4014000000000000,0x4008000000000000,0x4024000000000000,dVar31,
                     dVar37,lVar13,iVar14,0,&DAT_0019adfc,0xffffffffffffffff,0x14,6,0x20);
          iVar14 = *(int *)((int)pvVar5 + 0x1cc);
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          if (iVar14 != -1) {
            FUN_0044cddc(MobyInstance + iVar14);
          }
          (moby->pos).z = 20.0;
          moby->state = '\x0f';
        }
      }
    }
    goto LAB_0019d8bc;
  }
  position = (Vec4 *)lVar28;
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      moby->state = '\x01';
      moby->setByGroup = '\0';
      iVar14 = *(int *)((int)pvVar5 + 0x18c);
      *(undefined4 *)((int)pvVar5 + 400) = 0;
      if ((iVar14 != -1) && (iVar16 = 0, 0 < Splines[iVar14]->cnt)) {
        iVar19 = 0;
        do {
          iVar16 = iVar16 + 1;
          pSVar8 = Splines[iVar14];
          dVar31 = (double)FUN_005e8548((int)&pSVar8->points[0].x + iVar19,
                                        (int)pSVar8 +
                                        ((iVar16 - (iVar16 / pSVar8->cnt) * pSVar8->cnt) * 4 + 4) *
                                        4);
          *(float *)((int)&Splines[*(int *)((int)pvVar5 + 0x18c)]->points[0].w + iVar19) =
               (float)dVar31;
          iVar14 = *(int *)((int)pvVar5 + 0x18c);
          pSVar8 = Splines[iVar14];
          *(float *)((int)pvVar5 + 400) =
               *(float *)((int)pvVar5 + 400) + *(float *)((int)&pSVar8->points[0].w + iVar19);
          iVar19 = iVar19 + 0x10;
        } while (iVar16 < pSVar8->cnt);
      }
      iVar14 = *(int *)((int)pvVar5 + 0x188);
      if ((iVar14 != -1) && (iVar16 = 0, 0 < Splines[iVar14]->cnt)) {
        iVar19 = 0;
        do {
          iVar14 = fastfunc::FastDoubleToInt
                             ((double)*(float *)((int)&Splines[iVar14]->points[0].w + iVar19));
          if ((-1 < iVar14) && (iVar14 < 4)) {
            *(char *)((int)pvVar5 + iVar14 + 0x1d4) = (char)iVar16;
          }
          iVar14 = *(int *)((int)pvVar5 + 0x188);
          iVar16 = iVar16 + 1;
          iVar19 = iVar19 + 0x10;
        } while (iVar16 < Splines[iVar14]->cnt);
      }
      MVar4 = moby->modeBits;
      uVar15 = *(undefined4 *)((int)pvVar5 + 0x188);
      *(uint *)((int)pvVar5 + 0xa8) = *(uint *)((int)pvVar5 + 0xa8) & 0xfffffff7;
      moby->modeBits = MVar4 | CAN_BE_AUTO_TARGETED;
      mobyutil::MB_SplineMarkCrossings((int)pvVar5 + 0x170,3,uVar15);
      *(undefined1 *)((int)pvVar5 + 0x19c) = 7;
      moby->updateDistance = -1;
      iVar14 = *(int *)((int)pvVar5 + 0x188);
      moby->drawDistance = 0xff;
      *(undefined4 *)((int)pvVar5 + 0x1a8) = 0xffffffff;
      *(undefined4 *)((int)pvVar5 + 0x1b0) = 0xffffffff;
      iVar14 = path::PathFindClosestPnt((float)dVar35,position,Splines[iVar14]);
      *(int *)((int)pvVar5 + 0x1c0) = iVar14;
      DAT_00740388 = 1;
      DAT_0074038c = 1;
      DAT_00e61328 = 0;
      moby->scale = moby->scale * 1.5;
      *(undefined1 *)((int)pvVar5 + 0x1c7) = 0;
    }
    else if (bVar2 < 2) {
      if (*(int *)((int)pvVar5 + 0x1b0) == -1) {
        iVar16 = hud::RegisterHUDCallback
                           (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                            &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868
                            ,(int *)((int)pvVar5 + 0x1b4),
                            (int)((longlong)*(short *)((int)pvVar5 + 0x24) << 4) + 0xf);
        *(int *)((int)pvVar5 + 0x1b0) = iVar16;
      }
      if (((moby->field43_0x70 & 2U) != 0) &&
         (bVar2 = moby->animationId, uVar17 = rand(), (uint)bVar2 != (uVar17 & 1))) {
        uVar17 = rand();
        mobyutil::MB_SetAnimation(lVar13,uVar17 & 1,0,10);
      }
      iVar16 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x160);
      if (iVar16 != 0) {
        if (bVar11) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 0;
          *(undefined4 *)((int)pvVar5 + 0x160) = 0;
          if (moby->animationId != '\b') {
            mobyutil::MB_SetAnimation(lVar13,8,0,10);
          }
          moby->state = '\x04';
        }
        if (uVar30 != 0) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 0;
          if (moby->animationId != '\a') {
            mobyutil::MB_SetAnimation(lVar13,7,0,10);
          }
          moby->state = '\x03';
          moby->unk58 = 0.42;
        }
        if (bVar12) {
          if (moby->animationId != '\t') {
            mobyutil::MB_SetAnimation(lVar13,9,0,10);
          }
          *(undefined4 *)((int)pvVar5 + 0x164) = 0;
          *(undefined4 *)((int)pvVar5 + 0x16c) = 0;
          *(undefined1 *)((int)pvVar5 + 0x1c4) = 0;
          moby->state = '\a';
        }
        if (uVar29 != 0) {
          if (moby->animationId != '\x06') {
            mobyutil::MB_SetAnimation(lVar13,6,0,10);
          }
          moby->state = '\x02';
        }
      }
      if (iVar14 != 0) {
        if (moby->animationId != '\x05') {
          mobyutil::MB_SetAnimation(lVar13,5,0,10);
        }
        moby->unk58 = 0.5;
        moby->state = '\x05';
      }
    }
    else {
      mobyutil::OrganicDeltAngSpeed
                (uVar32,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
                 (double)(mobyutil::g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      if (moby->updateId == '\x06') {
        uVar22 = mobyupdate_helpers::M1045_00196d68(lVar13,pvVar5,&local_160);
        moby->state = uVar22;
      }
      dVar31 = (double)FUN_005e8588(&local_160,lVar28);
      if (12.0 < dVar31) {
        uVar20 = idol::GetAnimDuration(0x1e);
        *(undefined2 *)((int)pvVar5 + 0x198) = uVar20;
        uVar15 = idol::GetAnimDuration(0x19);
        *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
        moby->state = '\x01';
      }
    }
    goto LAB_0019d8bc;
  }
  if (bVar2 < 5) {
    if (bVar2 < 4) {
      mobyutil::OrganicDeltAngSpeed
                (uVar32,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
                 (double)(mobyutil::g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      iVar14 = mobyutil::MB_MayaFrameTrigger((float)dVar36,moby);
      if (((iVar14 != 0) ||
          (iVar14 = mobyutil::MB_MayaFrameTrigger((float)dVar37,moby), iVar14 != 0)) ||
         (iVar14 = mobyutil::MB_MayaFrameTrigger(46.0,moby), iVar14 != 0)) {
        *(int *)((int)pvVar5 + 0x164) = *(int *)((int)pvVar5 + 0x164) + 1;
        FUN_005e7e98(auStack_2d0,lVar28);
        mobyupdate_helpers::Spawn_Moby1046
                  (dVar31,0x4039000000000000,dVar31,(double)(mobyutil::g_FrameTime * 8.0),dVar31,
                   lVar13,auStack_2d0);
        if (2 < *(int *)((int)pvVar5 + 0x164)) {
          uVar20 = idol::GetAnimDuration(0x3c);
          *(undefined2 *)((int)pvVar5 + 0x194) = uVar20;
          uVar15 = idol::GetAnimDuration(0x37);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
          moby->state = '\x01';
          moby->unk58 = 1.0;
        }
      }
    }
    else {
      mobyutil::OrganicDeltAngSpeed
                (uVar32,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
                 (double)(mobyutil::g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      if (moby->updateId == '\b') {
        FUN_005e7e98(auStack_2c0,&local_160);
        uVar32 = 0x3fe0000000000000;
        mobyutil::GetGroundZ(0x3fe0000000000000,auStack_2c0,0);
        iVar14 = *(int *)((int)pvVar5 + 0x160) + 1;
        *(int *)((int)pvVar5 + 0x160) = iVar14;
        if (*(int *)((int)pvVar5 + 0x164) == 0) {
          FUN_005e81f0(auStack_2b0,lVar28,auStack_2c0);
          FUN_005e7f98(dVar31,auStack_2b0,auStack_2b0);
          FUN_005e7f98(0x3fb3333340000000,auStack_270,auStack_2b0);
          mathfunc::cosf(local_148);
          FUN_005e8128((double)local_148);
          FUN_005e81c0(local_2a0,auStack_2b0);
          FUN_005e7f98(auStack_260,auStack_2b0);
          FUN_005e81f0(local_2a0,local_2a0,auStack_260);
          uVar34 = 0x4020000000000000;
          FUN_005e7f98(0x4020000000000000,auStack_290,auStack_2b0);
          FUN_005e7f98(0x4010000000000000,local_2a0,local_2a0);
          FUN_005e7f54(auStack_290,auStack_290,auStack_2c0);
          FUN_005e81f0(auStack_290,auStack_290,local_2a0);
          FUN_005e7f98(uVar34,local_2a0,local_2a0);
          FUN_005e7f54(local_2a0,local_2a0,auStack_2c0);
          FUN_005e7f98(0x4000000000000000,auStack_2b0,auStack_2b0);
          FUN_005e81f0(local_2a0,local_2a0,auStack_2b0);
          FUN_005e7e98(auStack_250,&DAT_00969de0);
          iVar14 = idol::GetAnimDuration(0x28);
          local_d8 = (longlong)iVar14;
          FUN_005e822c((double)local_d8,auStack_280,auStack_250);
          FUN_005e81f0(auStack_2b0,local_2a0,auStack_290);
          FUN_005e822c(uVar32,auStack_2b0,auStack_2b0);
          FUN_005e7f54(auStack_2b0,auStack_2b0,auStack_290);
          FUN_005e81f0(auStack_2b0,auStack_2b0,auStack_2c0);
          FUN_005e81f0(auStack_2b0,auStack_2b0,auStack_270);
          FUN_005e81f0(auStack_2b0,auStack_280,auStack_2b0);
          FUN_005e7f54(auStack_290,auStack_290,auStack_2b0);
          FUN_005e7f54(local_2a0,local_2a0,auStack_2b0);
          FUN_005e7e98((int)pvVar5 + 0x110,auStack_290);
          FUN_005e7e98((int)pvVar5 + 0x120,local_2a0);
          FUN_005e7e98((int)pvVar5 + 0x140,auStack_290);
          iVar16 = (int)pvVar5 + 0x130;
          FUN_005e81f0(iVar16,local_2a0,auStack_290);
          iVar14 = idol::GetAnimDuration(0x3c);
          local_d8 = (longlong)iVar14;
          FUN_005e822c((double)(float)(dVar31 / (double)local_d8),iVar16,iVar16);
          FUN_005e7e98((int)pvVar5 + 0x150,(int)pvVar5 + 0x140);
          *(undefined4 *)((int)pvVar5 + 0x15c) = 0;
          *(undefined4 *)((int)pvVar5 + 0x164) = 1;
        }
        else {
          iVar16 = idol::GetAnimDuration(0x3c);
          if (iVar14 < iVar16) {
            FUN_005e7f54((int)pvVar5 + 0x140,(int)pvVar5 + 0x140,(int)pvVar5 + 0x130);
            RegisterFuncForMoby(&PTR_M1045_00196fc8_007085b0,moby);
            *(undefined4 *)((int)pvVar5 + 0x164) = 2;
          }
          else {
            *(undefined4 *)((int)pvVar5 + 0x164) = 0;
            uVar20 = idol::GetAnimDuration(0xf0);
            *(undefined2 *)((int)pvVar5 + 0x19a) = uVar20;
            uVar15 = idol::GetAnimDuration(200);
            *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
            moby->state = '\x01';
          }
        }
        stub::STUB_00065468(auStack_2c0,(int)pvVar5 + 0x110);
        stub::STUB_00065468(auStack_2c0,(int)pvVar5 + 0x120);
        stub::STUB_00065468((int)pvVar5 + 0x110,(int)pvVar5 + 0x120);
        stub::STUB_00065468(auStack_2c0,(int)pvVar5 + 0x140);
      }
    }
    goto LAB_0019d8bc;
  }
  if (6 < bVar2) {
    if (bVar2 < 8) {
      mobyutil::OrganicDeltAngSpeed
                (uVar34,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
                 (double)(mobyutil::g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      mobyfunc::GetBonePosition(lVar13,4,auStack_1f0);
      dVar31 = (double)mobyupdate_helpers::M1045_00199888(lVar13,auStack_1f0);
      if (moby->updateId == '\t') {
        FUN_005e7e98((int)pvVar5 + 0x140,&g_heroPosition);
        dVar37 = 0.6000000238418579;
        *(float *)((int)pvVar5 + 0x148) = *(float *)((int)pvVar5 + 0x148) + 0.6;
        if (dVar33 <= (double)*(float *)((int)pvVar5 + 0x16c)) {
          if ((*(char *)((int)pvVar5 + 0x1c4) != '\0') ||
             ((iVar14 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x160), iVar14 != 0 &&
              (dVar31 < dVar37)))) {
            *(undefined1 *)((int)pvVar5 + 0x1c4) = 1;
            if (g_heroState != UNK_78) {
              FUN_005e7e98((int)pvVar5 + 0x110,&g_heroPosition);
              FUN_005e7e98((int)pvVar5 + 0x120,&g_heroPosition);
              fVar3 = (moby->pos).z;
              if (fVar3 - g_heroPosition.z < 0.0) {
                fVar3 = g_heroPosition.z;
              }
              *(float *)((int)pvVar5 + 0x128) = fVar3 + 2.0;
              hero::TransitionMovement(0x78,1);
              *(undefined4 *)((int)pvVar5 + 0x164) = 0;
              *(undefined2 *)((int)pvVar5 + 0x19e) = 0;
              *(undefined4 *)((int)pvVar5 + 0x1ac) = 0x41a00000;
            }
            iVar14 = (int)pvVar5 + 0x110;
            FUN_005e81f0(auStack_1e0,(int)pvVar5 + 0x120,iVar14);
            FUN_005e822c((double)(DAT_0071f408 * 0.1),auStack_1e0,auStack_1e0);
            FUN_005e7f54(iVar14,iVar14,auStack_1e0);
            FUN_005e7e98(&DAT_0096ba10,iVar14);
            FUN_005e7e98(&g_heroPosition,iVar14);
            dVar37 = 25.132741928100586;
            dVar31 = (double)fastfunc::FastWrapRot(DAT_0096ba28,mobyutil::g_FrameTime * 25.132742);
            DAT_0096ba28 = (float)dVar31;
            dVar31 = (double)fastfunc::FastWrapRot
                                       ((float)dVar31,
                                        (float)((double)mobyutil::g_FrameTime * dVar37));
            g_heroRotation.z = (float)dVar31;
            iVar16 = *(int *)((int)pvVar5 + 0x164) * 8;
            *(float *)((int)pvVar5 + 0x16c) = (float)dVar33;
            iVar14 = *(int *)(&DAT_00740328 + iVar16);
            if (iVar14 == -1) {
              *(undefined4 *)((int)pvVar5 + 0x164) = 0;
              uVar20 = idol::GetAnimDuration(800);
              *(undefined2 *)((int)pvVar5 + 0x196) = uVar20;
              uVar15 = idol::GetAnimDuration(0xf0);
              *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
              mobyupdate_helpers::M1045_00199398(lVar13);
              if (g_heroState == UNK_78) {
                hero::TransitionMovement(0,1);
              }
              *(undefined1 *)((int)pvVar5 + 0x1c7) = 0;
              moby->state = '\x01';
            }
            else {
              sVar25 = *(short *)((int)pvVar5 + 0x19e);
              iVar16 = *(int *)(&DAT_0074032c + iVar16);
              if (sVar25 == 0) {
                uVar30 = (&currentAmmoArray.field0_0x0)[iVar14];
                sVar25 = (short)((int)uVar30 >> 3) + (ushort)((int)uVar30 < 0 && (uVar30 & 7) != 0);
                *(short *)((int)pvVar5 + 0x19e) = sVar25;
                if (sVar25 < iVar16) {
                  *(short *)((int)pvVar5 + 0x19e) = (short)iVar16;
                }
                dVar31 = (double)mobyutil::MB_randRangeFloat
                                           (*(float *)((int)pvVar5 + 0x1ac) + 20.0,
                                            *(float *)((int)pvVar5 + 0x1ac) + 100.0);
                *(float *)((int)pvVar5 + 0x1ac) = (float)dVar31;
                sVar25 = *(short *)((int)pvVar5 + 0x19e);
              }
              lVar27 = (longlong)sVar25;
              uVar30 = (&currentAmmoArray.field0_0x0)[iVar14];
              if ((int)uVar30 < (int)sVar25) {
                lVar27 = (longlong)(int)uVar30;
                *(undefined2 *)((int)pvVar5 + 0x19e) = 0;
                *(int *)((int)pvVar5 + 0x164) = *(int *)((int)pvVar5 + 0x164) + 1;
                uVar30 = (&currentAmmoArray.field0_0x0)[iVar14];
              }
              iVar16 = uVar30 - (int)(lVar27 << 3);
              lVar27 = lVar27 + (-(longlong)iVar16 >> 0x3f & ((int)lVar27 + iVar16) - lVar27);
              iVar16 = (int)lVar27;
              if (0 < iVar16) {
                if (*(int *)((int)pvVar5 + 0x18c) == -1) {
                  mobyutil::MB_randSphere
                            ((double)(mobyutil::g_FrameTime * 4.0),
                             (double)(mobyutil::g_FrameTime * 10.0),auStack_1d0);
                  if (local_1c8 < mobyutil::g_FrameTime * 2.0) {
                    dVar31 = (double)mobyutil::MB_randRangeFloat
                                               (mobyutil::g_FrameTime * 3.0,
                                                mobyutil::g_FrameTime * 6.0);
                    local_1c8 = (float)dVar31;
                  }
                  FUN_005e7f98(0x3fe6666660000000,auStack_1c0,auStack_1d0);
                  FUN_005e7f54(auStack_1c0,auStack_1c0,&g_heroPosition);
                }
                else {
                  local_110[0] = 0;
                  local_110[1] = 0;
                  pSVar8 = Splines[*(int *)((int)pvVar5 + 0x18c)];
                  local_110[0] = path::PathFindClosestPnt
                                           ((float)dVar35,(Vec4 *)&g_heroPosition,pSVar8);
                  dVar31 = 5.0;
                  dVar37 = 12.0;
                  dVar33 = 10.0;
                  do {
                    do {
                      *(float *)((int)pvVar5 + 0x1ac) =
                           (float)((double)*(float *)((int)pvVar5 + 0x1ac) + dVar33);
                      mobyutil::MB_PathMoveDist(pSVar8,auStack_1b0,local_110,local_110 + 1);
                      dVar36 = (double)FUN_005e8588(&g_heroPosition,auStack_1b0);
                      dVar35 = (double)FUN_005e8588(lVar28,auStack_1b0);
                    } while (dVar36 < dVar31);
                  } while (dVar35 < dVar37);
                  mobyupdate_helpers::M1045_00199288(0x3fe0000000000000,auStack_1b0);
                  FUN_005e81f0(auStack_1c0,auStack_1b0,&g_heroPosition);
                  dVar33 = 0.699999988079071;
                  FUN_005e7f98(0x3fe6666660000000,auStack_1c0,auStack_1c0);
                  FUN_005e7e98(auStack_1d0,auStack_1c0);
                  local_1c8 = 0.0;
                  dVar31 = 15.0;
                  FUN_005e7f98((double)(mobyutil::g_FrameTime * 15.0),auStack_1d0,auStack_1d0);
                  FUN_005e7f54(auStack_1c0,auStack_1c0,&g_heroPosition);
                  dVar31 = (double)mobyutil::MB_computeLobVelocity
                                             ((double)(float)((double)mobyutil::g_FrameTime * dVar31
                                                             ),(double)(DAT_0071f418 * -9.8),
                                              auStack_1c0,auStack_1b0);
                  local_1c8 = (float)dVar31;
                  dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar33,2.0);
                  *(float *)((int)pvVar5 + 0x1ac) =
                       (float)((double)*(float *)((int)pvVar5 + 0x1ac) + dVar31);
                }
                iVar19 = FUN_002ea758(auStack_1c0,iVar14,lVar27,0);
                if (iVar19 != 0) {
                  FUN_005e7e98((ulonglong)*(uint *)(iVar19 + 0x78) + 0x10,auStack_1d0);
                  (&currentAmmoArray.field0_0x0)[iVar14] =
                       (&currentAmmoArray.field0_0x0)[iVar14] - iVar16;
                  uVar15 = idol::GetAnimDuration(0);
                  *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
                }
              }
            }
          }
        }
        else {
          dVar31 = (double)mobyutil::g_FrameTime;
          *(undefined4 *)((int)pvVar5 + 0x160) = 0;
          *(float *)((int)pvVar5 + 0x16c) =
               (float)(dVar31 * 15.0 + (double)*(float *)((int)pvVar5 + 0x16c));
        }
        if (!bVar12) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 0;
          uVar20 = idol::GetAnimDuration(0xf);
          *(undefined2 *)((int)pvVar5 + 0x196) = uVar20;
          mobyupdate_helpers::M1045_00199398(lVar13);
          if (g_heroState == UNK_78) {
            hero::TransitionMovement(0,1);
          }
          uVar15 = idol::GetAnimDuration(0x46);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
          *(undefined1 *)((int)pvVar5 + 0x1c7) = 0;
          moby->state = '\x01';
        }
        if (uVar29 != 0) {
          uVar20 = idol::GetAnimDuration(0x1e);
          *(undefined2 *)((int)pvVar5 + 0x196) = uVar20;
          if (moby->animationId != '\x06') {
            mobyutil::MB_SetAnimation(lVar13,6,0,10);
          }
          mobyupdate_helpers::M1045_00199398(lVar13);
          if (g_heroState == UNK_78) {
            hero::TransitionMovement(0,1);
          }
          *(undefined1 *)((int)pvVar5 + 0x1c7) = 0;
          moby->state = '\x02';
        }
      }
    }
    else {
      mobyutil::OrganicDeltAngSpeed
                (uVar34,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
                 (double)(mobyutil::g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      iVar14 = *(int *)((int)pvVar5 + 0x164);
      if (iVar14 == 5) {
        moby->unk58 = 1.0;
        *(undefined4 *)((int)pvVar5 + 0x164) = 0;
        *(undefined4 *)((int)pvVar5 + 0x160) = 0;
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar13,0,0,10);
        }
        moby->state = '\x01';
      }
      else if (iVar14 == 4) {
        iVar14 = (int)pvVar5 + 0x110;
        FUN_005e81f0(auStack_170,(int)pvVar5 + 0x120,iVar14);
        FUN_005e7f98((double)DAT_0071f408,auStack_170,auStack_170);
        FUN_005e7f54(iVar14,iVar14,auStack_170);
        if ((*(int *)((int)pvVar5 + 0x164) != 0) &&
           (iVar14 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x160), iVar14 != 0)) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 5;
        }
        RegisterFuncForMoby(&PTR_M1045_001989d0_007085d8,moby);
      }
      else if (iVar14 == 3) {
        dVar31 = (double)FUN_005e8588(lVar28,auStack_130);
        fVar3 = *(float *)((int)pvVar5 + 0x16c) + DAT_0071f408;
        *(float *)((int)pvVar5 + 0x16c) = fVar3;
        if (dVar31 <= (double)fVar3) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 4;
        }
        iVar14 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x160);
        if (iVar14 != 0) {
          uVar15 = idol::GetAnimDuration(0x14);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
        }
        RegisterFuncForMoby(&PTR_M1045_001989d0_007085d8,moby);
      }
      else if (iVar14 == 2) {
        iVar14 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x160);
        if (iVar14 != 0) {
          uVar15 = idol::GetAnimDuration(10);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
          uVar34 = 0x41286a0000000000;
          uVar32 = 0x4014000000000000;
          partupd::SpawnPart_29(0x41286a0000000000,0x4014000000000000,lVar13,0);
          partupd::SpawnPart_29(uVar34,uVar32,lVar13,1);
        }
        dVar31 = (double)mobyfunc::BlendAnimFrame(moby);
        if (31.0 <= dVar31) {
          *(undefined4 *)((int)pvVar5 + 0x16c) = 0;
          *(undefined4 *)((int)pvVar5 + 0x164) = 3;
          *(undefined4 *)((int)pvVar5 + 0x11c) = 0;
        }
      }
      else if (iVar14 == 1) {
        if ((moby->updateId == '\x12') &&
           (dVar31 = (double)mobyfunc::BlendAnimFrame(moby), 6.5 <= dVar31)) {
          mobyfunc::GetBonePosition(lVar13,0,auStack_190);
          mobyfunc::GetBonePosition(lVar13,1,auStack_180);
          FUN_005e7f54(auStack_1a0,auStack_190,auStack_180);
          FUN_005e822c(0x3fe0000000000000,auStack_1a0,auStack_1a0);
          FUN_005e7e98((int)pvVar5 + 0x110,auStack_1a0);
          iVar14 = (int)pvVar5 + 0x130;
          FUN_005e81f0(iVar14,(int)pvVar5 + 0x150,(int)pvVar5 + 0x110);
          FUN_005e7f98((double)DAT_0071f408,iVar14,iVar14);
          *(undefined4 *)((int)pvVar5 + 0x164) = 2;
        }
      }
      else if (iVar14 == 0) {
        if (moby->animationId != '\x12') {
          mobyutil::MB_SetAnimation(lVar13,0x12,0,10);
        }
        *(undefined4 *)((int)pvVar5 + 0x160) = 0;
        *(undefined4 *)((int)pvVar5 + 0x164) = 1;
      }
    }
    goto LAB_0019d8bc;
  }
  uVar26 = ZEXT48(&DAT_0019adfc);
  dVar33 = 2.0;
  uVar32 = mobyupdate_helpers::M1045_00198cac(lVar13,pvVar5,auStack_108);
  if (iVar16 == 0) {
    dVar33 = 6.0;
    FUN_005e7e98(&VStack_220,&local_160);
  }
  else {
    uVar26 = (ulonglong)(*(int *)((int)pvVar5 + 0x188) * 4);
    FUN_005e7e98(&VStack_220,
                 Splines[*(int *)((int)pvVar5 + 0x188)]->points + *(int *)((int)pvVar5 + 0x1a8));
  }
  dVar37 = (double)FUN_005e8588(lVar28,&VStack_220);
  if (dVar33 < dVar37) {
    fVar9 = DAT_0071f408 * 0.06;
    fVar10 = DAT_0071f408 * 0.3 - DAT_0071f408 * 0.06;
    fVar3 = (float)(dVar37 - dVar33);
    if (50.0 - (float)(dVar37 - dVar33) < 0.0) {
      fVar3 = 50.0;
    }
    fVar3 = fVar3 * 0.02 * fVar3 * 0.02 * fVar10 + DAT_0071f408 * 0.06;
    *(float *)((int)pvVar5 + 0x1bc) = fVar3;
    *(float *)((int)pvVar5 + 0x94) = fVar3;
    moby->unk58 = (float)((double)(-(fVar9 - *(float *)((int)pvVar5 + 0x80)) / fVar10) + dVar31) *
                  0.5;
  }
  dVar36 = 0.20000000298023224;
  iVar19 = mobyutil::MB_SplineFindRouteNode
                     (0.2,auStack_108,uVar32,(longlong)*(int *)((int)pvVar5 + 0x188),uVar26,position
                      ,&VStack_220,auStack_240);
  if (iVar19 == 0) {
    iVar19 = path::PathFindClosestPnt
                       ((float)dVar35,&VStack_220,Splines[*(int *)((int)pvVar5 + 0x188)]);
    lVar27 = ZEXT48(Splines[*(int *)((int)pvVar5 + 0x188)]) + (longlong)iVar19 * 0x10;
    iVar19 = mobyutil::MB_SplineFindRouteNode
                       ((float)dVar36,auStack_108,uVar32,(longlong)*(int *)((int)pvVar5 + 0x188),
                        lVar27,position,(int)lVar27 + 0x10,auStack_240);
    if (iVar19 == 0) {
      iVar19 = path::PathFindClosestPnt
                         ((float)dVar35,position,Splines[*(int *)((int)pvVar5 + 0x188)]);
      FUN_005e7e98(auStack_240,Splines[*(int *)((int)pvVar5 + 0x188)]->points + iVar19);
    }
  }
  if (dVar37 <= dVar33) {
    mobyutil::OrganicDeltAngSpeed
              (uVar34,(double)(DAT_0071f418 * 2.0943952),(double)(DAT_0071f418 * 0.6981317),
               (double)(mobyutil::g_FrameTime * 2.0943952),lVar13,&DAT_00720000,(int)pvVar5 + 0x168)
    ;
LAB_0019c298:
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(lVar13,0,0,0x14);
    }
    if (iVar16 != 0) {
      *(undefined4 *)((int)pvVar5 + 0x1a8) = 0xffffffff;
      moby->state = '\x01';
      goto LAB_0019d8bc;
    }
  }
  else {
    iVar19 = mobyutil::MB_UpdateNavMoveTurning
                       (lVar13,(int)pvVar5 + 0x70,auStack_240,(int)pvVar5 + 0x100);
    if (iVar19 == 2) {
      libc::printf("Correcting!\n");
      iVar18 = path::PathFindClosestPnt
                         ((float)dVar35,position,Splines[*(int *)((int)pvVar5 + 0x188)]);
      FUN_005e81f0(auStack_210,Splines[*(int *)((int)pvVar5 + 0x188)]->points + iVar18,lVar28);
      FUN_005e8e80((double)*(float *)((int)pvVar5 + 0x94),auStack_210,auStack_210);
      FUN_005e7f54(lVar28,lVar28,auStack_210);
    }
    if (iVar19 == 4) goto LAB_0019c298;
    bVar1 = moby->animationId != '\x05';
    if (bVar1) {
      if (bVar1) {
        mobyutil::MB_SetAnimation(lVar13,5,0,10);
      }
      moby->unk58 = 0.5;
    }
  }
  if (moby->updateId == '\x05') {
    dVar33 = 8.0;
    iVar19 = mobyutil::MB_MayaFrameTrigger(8.0,moby);
    if (iVar19 != 0) {
      mobyfunc::GetBonePosition(lVar13,6,auStack_230);
      mobyupdate_helpers::Spawn_Moby1046
                (dVar36,0x4010000000000000,0x3fe0000000000000,
                 (double)(float)((double)mobyutil::g_FrameTime * dVar33),dVar31,lVar13,auStack_230);
    }
    iVar19 = mobyutil::MB_MayaFrameTrigger(24.0,moby);
    if (iVar19 != 0) {
      mobyfunc::GetBonePosition(lVar13,5,auStack_230);
      mobyupdate_helpers::Spawn_Moby1046
                (dVar36,0x4010000000000000,0x3fe0000000000000,
                 (double)(float)((double)mobyutil::g_FrameTime * dVar33),dVar31,lVar13,auStack_230);
    }
  }
  iVar19 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x160);
  if (iVar19 != 0) {
    if (bVar11) {
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
      *(undefined4 *)((int)pvVar5 + 0x160) = 0;
      moby->unk58 = 1.0;
      if (moby->animationId != '\b') {
        mobyutil::MB_SetAnimation(lVar13,8,0,10);
      }
      moby->state = '\x04';
    }
    if (uVar30 != 0) {
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
      if (moby->animationId != '\a') {
        mobyutil::MB_SetAnimation(lVar13,7,0,10);
      }
      moby->state = '\x03';
      moby->unk58 = 0.42;
    }
    if (bVar12) {
      moby->unk58 = 1.0;
      if (moby->animationId != '\t') {
        mobyutil::MB_SetAnimation(lVar13,9,0,10);
      }
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
      *(undefined4 *)((int)pvVar5 + 0x16c) = 0;
      *(undefined1 *)((int)pvVar5 + 0x1c4) = 0;
      moby->state = '\a';
    }
    if (uVar29 != 0) {
      moby->unk58 = 1.0;
      if (moby->animationId != '\x06') {
        mobyutil::MB_SetAnimation(lVar13,6,0,10);
      }
      moby->state = '\x02';
    }
  }
  if (iVar14 == 0) {
    moby->unk58 = 1.0;
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(lVar13,0,0,10);
    }
    moby->state = '\x01';
  }
  if ((iVar16 == 0) && (dVar37 < 20.0)) {
    mobyupdate_helpers::M1045_00196d68(lVar13,pvVar5,&local_160);
  }
LAB_0019d8bc:
  FUN_005e81f0((int)pvVar5 + 0x100,lVar28,auStack_2e0);
  return;
}



//==== 0019d958  ns=mobyupdate_helpers  size=0x450
// sig: undefined M1046_0019d958(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0; 00502ffc stub::VU1_addGSregister

void mobyupdate_helpers::M1046_0019d958(void)

{
  float fVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar10;
  undefined4 *puVar14;
  longlong lVar13;
  uint uVar15;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar17;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar7 - 0x150);
  *puVar3 = uVar7;
  puVar3[0x2c] = in_LR;
  puVar3[0x26] = in_f28;
  puVar3[0x27] = in_f29;
  puVar3[0x28] = in_f30;
  puVar3[0x29] = in_f31;
  puVar3[0x23] = unaff_r29;
  puVar3[0x25] = unaff_r31;
  puVar3[0x24] = unaff_r30;
  puVar3[0x22] = unaff_r28;
  puVar3[0x21] = unaff_r27;
  uVar8 = draw::GetEffectTex(0x15);
  puVar3[0x1d] = uVar8;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar3[0x1e] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar3[0x1c] = uVar8;
  uVar8 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar3[0x1f] = uVar8;
  fVar1 = DAT_00e5ff60;
  DAT_00e5ff60 = DAT_00e5ff60 + 0.001;
  dVar22 = 7.0;
  if (7.0 < DAT_00e5ff60) {
    DAT_00e5ff60 = DAT_00e5ff60 - 7.0;
  }
  dVar21 = 0.30000001192092896;
  dVar20 = (double)(fVar1 + 0.3);
  uVar9 = idol_draw::Blend(1,5,1,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar9);
  uVar9 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  vuchain::SetGSReg(0x21,uVar9);
  uVar8 = 1;
  do {
    dVar19 = (double)DAT_00e5ff64;
    DAT_00e5ff64 = (float)(dVar19 + (double)DAT_00740390);
    if (dVar22 < (double)DAT_00e5ff64) {
      DAT_00e5ff64 = (float)((double)DAT_00e5ff64 - dVar22);
    }
    iVar16 = 0;
    iVar17 = 0;
    do {
      iVar16 = iVar16 + 1;
      iVar5 = (int)uVar8;
      iVar4 = iVar5 * 0x140;
      puVar11 = (undefined4 *)((int)&DAT_00e61340 + iVar4 + iVar17);
      *(undefined4 *)(puVar3 + 0xe) = *puVar11;
      *(undefined4 *)((int)puVar3 + 0x74) = puVar11[1];
      *(undefined4 *)(puVar3 + 0xf) = puVar11[2];
      *(undefined4 *)((int)puVar3 + 0x7c) = puVar11[3];
      puVar12 = &DAT_00e61340 + (iVar16 % 0x14) * 4 + iVar5 * 0x50;
      puVar14 = (undefined4 *)(iVar17 + 0xe61200 + iVar4);
      puVar11 = (undefined4 *)((iVar16 % 0x14) * 0x10 + 0xe61200 + iVar4);
      *(undefined4 *)(puVar3 + 0x10) = *puVar12;
      *(undefined4 *)((int)puVar3 + 0x84) = puVar12[1];
      iVar4 = (int)((uVar8 & 0xffffffff) << 1);
      *(undefined4 *)(puVar3 + 0x11) = puVar12[2];
      *(undefined4 *)((int)puVar3 + 0x8c) = puVar12[3];
      *(undefined4 *)(puVar3 + 0x12) = *puVar14;
      *(undefined4 *)((int)puVar3 + 0x94) = puVar14[1];
      *(undefined4 *)(puVar3 + 0x13) = puVar14[2];
      *(undefined4 *)((int)puVar3 + 0x9c) = puVar14[3];
      *(undefined4 *)(puVar3 + 0x14) = *puVar11;
      *(undefined4 *)((int)puVar3 + 0xa4) = puVar11[1];
      sVar2 = *(short *)((int)&DAT_00e61328 + iVar4);
      *(undefined4 *)(puVar3 + 0x15) = puVar11[2];
      *(undefined4 *)((int)puVar3 + 0xac) = puVar11[3];
      lVar18 = 2;
      lVar10 = uVar7 - 0x150;
      do {
        lVar13 = (longlong)sVar2;
        lVar13 = lVar13 + (lVar13 >> 0x3f & -lVar13);
        sVar2 = *(short *)(iVar4 + 0xe61326);
        uVar15 = (uint)((lVar13 + (0x40 - lVar13 >> 0x3f & 0x40U - lVar13) & 0xffffffff) << 0x18) |
                 0x404040;
        *(uint *)((int)lVar10 + 0xb0) = uVar15;
        *(uint *)((int)lVar10 + 0xb4) = uVar15;
        lVar10 = lVar10 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (iVar5 == 1) {
        *(undefined4 *)((int)puVar3 + 0xbc) = 0x20404040;
        *(undefined4 *)(puVar3 + 0x17) = 0x20404040;
      }
      else if (iVar5 == 9) {
        *(undefined4 *)((int)puVar3 + 0xb4) = 0x404040;
        *(undefined4 *)(puVar3 + 0x16) = 0x404040;
      }
      *(float *)(puVar3 + 0x18) = (float)dVar20;
      *(float *)((int)puVar3 + 0xc4) = (float)dVar19;
      *(float *)(puVar3 + 0x19) = (float)dVar20;
      *(float *)((int)puVar3 + 0xd4) = (float)dVar19;
      fVar1 = (float)(dVar19 + 0.05000000074505806);
      dVar19 = (double)fVar1;
      *(float *)(puVar3 + 0x1a) = (float)(dVar20 - dVar21);
      *(float *)(puVar3 + 0x1b) = (float)(dVar20 - dVar21);
      uVar6 = EffectTexHeaders;
      *(float *)((int)puVar3 + 0xcc) = fVar1;
      *(float *)((int)puVar3 + 0xdc) = fVar1;
      draw::FastDrawQuad(uVar7 - 0xe0,0,0,uVar6,9);
      iVar17 = iVar17 + 0x10;
    } while (iVar16 < 0x14);
    uVar8 = uVar8 + 1;
    dVar20 = (double)(float)(dVar20 + dVar21);
  } while ((int)uVar8 < 10);
  uVar9 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  vuchain::SetGSReg(0x21,uVar9);
  uVar9 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar9);
  return;
}



//==== 0019dda8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1046_0019dda8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1046_0019dda8(void)

{
  DAT_0074052c = 0x10000;
  return;
}



//==== 0019ddd0  ns=mobyupdate_helpers  size=0x19c
// sig: undefined Spawn_Moby1046(void)
// callers(2): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0015d12c sound::PlayMobySound

MobyInstance *
mobyupdate_helpers::Spawn_Moby1046
          (double param_1,double param_2,double param_3,double param_4,double param_5,float param_6,
          f32 *param_7)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  MobyInstance *pMoby;
  float in_r9;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pMoby = mobyfunc::CreateMoby(0x416);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pfVar2 = (float *)pMoby->pVar;
    (pMoby->pos).x = *param_7;
    (pMoby->pos).y = param_7[1];
    (pMoby->pos).z = param_7[2];
    (pMoby->pos).w = param_7[3];
    pfVar2[5] = param_6;
    *pfVar2 = (float)param_1;
    pfVar2[1] = (float)param_2;
    pfVar2[4] = (float)param_3;
    pfVar2[3] = (float)param_4;
    pfVar2[2] = (float)param_1;
    pfVar2[6] = in_r9;
    pfVar2[7] = (float)param_5;
    fVar1 = (pMoby->pos).x;
    pMoby->modeBits = pMoby->modeBits | DRAW_TRANSPARENT_WEIRD;
    fVar3 = (pMoby->pos).y - GameCamera.posY;
    fVar1 = fVar1 - GameCamera.posX;
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    GameCamera.offset0.amp = -(SQRT(fVar1 * fVar1 + fVar3 * fVar3) * 0.01 - 0.3);
    auVar4 = loadVectorLeftIndexed(8,0x19ddc0);
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    GameCamera.offset0.total =
         storeVectorElementWordIndexed
                   (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x168,0x9513c0);
    mobyfunc::UpdateMobyTransform(pMoby);
    sound::PlayMobySound(0,0,pMoby);
  }
  return pMoby;
}



//==== 0019e010  ns=mobyupdate_helpers  size=0x824
// sig: undefined M1046_0019e010(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 005026dc fastfunc::FastFrac; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 0019df78: '?fff?' (raw)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mobyupdate_helpers::M1046_0019e010(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar19;
  undefined8 uVar18;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar20;
  ulonglong unaff_r29;
  ulonglong uVar21;
  ulonglong unaff_r30;
  uint uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double extraout_f1;
  double dVar23;
  ulonglong in_f26;
  double dVar24;
  double dVar25;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x310;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[100] = in_LR;
  puVar10[0x5c] = in_f26;
  puVar10[0x5d] = in_f27;
  puVar10[0x5e] = in_f28;
  puVar10[0x5f] = in_f29;
  puVar10[0x60] = in_f30;
  puVar10[0x61] = in_f31;
  puVar10[0x5b] = unaff_r31;
  puVar10[0x59] = unaff_r29;
  puVar10[0x56] = unaff_r26;
  uVar21 = 0x80;
  puVar10[0x58] = unaff_r28;
  iVar11 = (int)param_1;
  bVar3 = *(byte *)(iVar11 + 0x23);
  uVar6 = *(uint *)(iVar11 + 0x78);
  uVar20 = (ulonglong)uVar6;
  puVar10[0x57] = unaff_r27;
  uVar7 = *(undefined4 *)(uVar6 + 0x18);
  puVar10[0x5a] = unaff_r30;
  puVar10[0x55] = unaff_r25;
  puVar10[0x54] = unaff_r24;
  uVar14 = draw::GetEffectTex(uVar7);
  uVar15 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  uVar16 = FUN_00502f08(0,1,0,0,0,0);
  uVar17 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar10[0x1d] = uVar14;
  puVar10[0x1e] = uVar15;
  uVar22 = 0;
  puVar10[0x1c] = uVar16;
  puVar10[0x1f] = uVar17;
  dVar28 = 0.0;
  auVar30 = loadVectorLeftIndexed(4,0x19df70);
  auVar33 = ZEXT416(0);
  auVar51 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar33 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  dVar26 = 1.0;
  *(undefined1 (*) [16])(puVar10 + 0x38) = auVar51;
  *(undefined1 (*) [16])(puVar10 + 0x36) =
       auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  dVar29 = dVar28;
  do {
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    uVar19 = (bVar3 + 1) * 0x330000 & 0x3f000000 | (uint)(uVar21 << 8) | (uint)(uVar21 << 0x10) |
             0x80;
    auVar30 = loadVectorLeftIndexed(8,uVar20);
    *(uint *)((int)puVar10 + 0xbc) = uVar19;
    *(uint *)(puVar10 + 0x17) = uVar19;
    *(uint *)((int)puVar10 + 0xb4) = uVar19;
    *(uint *)(puVar10 + 0x16) = uVar19;
    auVar33 = loadVectorRightIndexed(0x18,uVar20);
    auVar30 = auVar30 | auVar33;
    auVar33 = loadVectorLeftIndexed(8,0x19df70);
    dVar23 = (double)*(float *)(uVar6 + 8);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = vectorMultiplyAddFloatingPoint(auVar30,auVar51,auVar34);
    auVar53 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar33,auVar30);
    auVar30 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar30);
    auVar36 = loadVectorLeftIndexed(0x10,uVar20);
    auVar37 = loadVectorRightIndexed(0x20,uVar20);
    dVar27 = (double)*(float *)(uVar6 + 0x10);
    auVar33 = loadVectorLeftIndexed(0xc,0x19df70);
    auVar36 = auVar36 | auVar37;
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar37 = *(undefined1 (*) [16])(puVar10 + 0x36);
    dVar24 = -(double)(float)(dVar29 * 0.5 - dVar26);
    auVar33 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar51,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar37);
    auVar30 = vectorConditionalSelect(auVar53,auVar34,auVar30);
    dVar25 = -(double)(float)(dVar29 * 0.8999999761581421 - dVar23);
    if (dVar23 - 0.8999999761581421 < 0.0) {
      dVar25 = (double)(float)(dVar23 * dVar29);
    }
    uVar18 = fastfunc::FastIntToDouble(worldUpdateTime);
    dVar23 = (double)fastfunc::FastFrac((double)(float)(extraout_f1 /
                                                       (double)(float)(dVar29 * 40.0 + 40.0)),uVar18
                                        ,uVar13 - 0x180);
    uVar19 = uVar22 & 1;
    uVar22 = uVar22 + 1;
    puVar10[0x3a] = (longlong)(int)(((uint)((LZCOUNT(-uVar19) << 0x3a) >> 0x3f) & 0xfffffffe) + 1);
    *(float *)(puVar10 + 0x18) = (float)(dVar23 * (double)(longlong)puVar10[0x3a]);
    *(float *)(puVar10 + 0x1a) = (float)(dVar23 * (double)(longlong)puVar10[0x3a]);
    dVar23 = (double)fastfunc::FastIntToDouble
                               (((longlong)(int)uVar22 + -5 >> 0x3f & (longlong)(int)uVar22 - 5U) +
                                5);
    fVar2 = (float)((double)*(float *)(puVar10 + 0x18) + dVar23);
    auVar50 = loadVectorLeftIndexed(0x10,param_1);
    auVar41 = vectorSubtractFloatingPoint(auVar50,auVar30);
    *(float *)(puVar10 + 0x19) = fVar2;
    *(float *)(puVar10 + 0x1b) = fVar2;
    *(float *)((int)puVar10 + 0xc4) = (float)dVar28;
    *(float *)((int)puVar10 + 0xcc) = (float)dVar28;
    *(undefined4 *)((int)puVar10 + 0xd4) = 0x3f800000;
    *(undefined4 *)((int)puVar10 + 0xdc) = 0x3f800000;
    auVar34 = loadVectorLeftIndexed(0x14,0x19df70);
    auVar53 = loadVectorLeftIndexed(0x18,0x19df70);
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = loadVectorLeftIndexed(0x18,param_1);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar33,auVar36,auVar38);
    auVar52 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar51,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                         auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60);
    auVar33 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = loadVectorLeftIndexed(0x14,param_1);
    auVar34 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar53 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar52,auVar50);
    uVar7 = storeVectorElementWordIndexed
                      (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar10 + 0x11) = uVar7;
    uVar7 = storeVectorElementWordIndexed
                      (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0xa8,lVar1);
    *(undefined4 *)(puVar10 + 0x15) = uVar7;
    auVar33 = _DAT_0019dfc0;
    auVar34 = _DAT_0019dfa0;
    auVar46 = vectorPermute(auVar53,auVar36,_DAT_0019dfb0);
    auVar53 = vectorPermute(auVar39,*(undefined1 (*) [16])(puVar10 + 0x10),_DAT_0019dfb0);
    auVar44 = vectorPermute(*(undefined1 (*) [16])(puVar10 + 0xe),auVar39,_DAT_0019df90);
    auVar41 = vectorPermute(auVar41,auVar36,_DAT_0019dfb0);
    auVar39 = vectorPermute(auVar38,*(undefined1 (*) [16])(puVar10 + 0x14),_DAT_0019dfb0);
    auVar53 = vectorPermute(auVar46,auVar53,_DAT_0019dfc0);
    auVar46 = vectorPermute(*(undefined1 (*) [16])(puVar10 + 0x12),auVar38,_DAT_0019df90);
    *(float *)(puVar10 + 0x34) = fVar2;
    auVar39 = vectorPermute(auVar41,auVar39,auVar33);
    *(undefined1 (*) [16])(puVar10 + 0x20) = auVar44;
    fVar4 = *(float *)(iVar11 + 0x10);
    *(undefined1 (*) [16])(puVar10 + 0x22) = auVar53;
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    *(undefined1 (*) [16])(puVar10 + 0x24) = auVar46;
    *(undefined1 (*) [16])(puVar10 + 0x26) = auVar39;
    uVar7 = *(undefined4 *)(iVar11 + 0x14);
    *(float *)((int)puVar10 + 0x1a4) = fVar2;
    auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    *(float *)(puVar10 + 0x35) = fVar2;
    *(float *)((int)puVar10 + 0x1ac) = fVar2;
    auVar52 = vectorMultiplyAddFloatingPoint(auVar30,auVar52,auVar33);
    dVar23 = (double)*(float *)(iVar11 + 0x18);
    auVar33 = vectorPermute(*(undefined1 (*) [16])(puVar10 + 0x34),
                            *(undefined1 (*) [16])(puVar10 + 0x38),_DAT_0019dfd0);
    auVar37 = vectorPermute(*(undefined1 (*) [16])(puVar10 + 0x34),auVar37,_DAT_0019dfd0);
    fVar5 = -(float)(dVar25 * -(double)(float)(dVar29 * 0.029999999329447746 - 0.9599999785423279) -
                    (double)fVar4);
    fVar2 = (float)(dVar24 * dVar27 + dVar23);
    auVar33 = vectorPermute(auVar33,*(undefined1 (*) [16])(puVar10 + 0x18),auVar34);
    auVar34 = vectorPermute(auVar37,*(undefined1 (*) [16])(puVar10 + 0x1a),auVar34);
    *(undefined4 *)((int)puVar10 + 0x14c) = *(undefined4 *)((int)puVar10 + 0xbc);
    *(undefined4 *)(puVar10 + 0x29) = *(undefined4 *)(puVar10 + 0x17);
    *(undefined4 *)((int)puVar10 + 0x144) = *(undefined4 *)((int)puVar10 + 0xb4);
    *(undefined4 *)(puVar10 + 0x28) = *(undefined4 *)(puVar10 + 0x16);
    *(undefined1 (*) [16])(puVar10 + 0x2a) = auVar33;
    *(undefined1 (*) [16])(puVar10 + 0x2c) = auVar34;
    *(undefined4 *)((int)puVar10 + 0x17c) = *(undefined4 *)((int)puVar10 + 0xec);
    *(undefined4 *)(puVar10 + 0x2f) = *(undefined4 *)(puVar10 + 0x1d);
    *(undefined4 *)((int)puVar10 + 0x174) = *(undefined4 *)((int)puVar10 + 0xe4);
    *(undefined4 *)(puVar10 + 0x2e) = *(undefined4 *)(puVar10 + 0x1c);
    *(undefined4 *)((int)puVar10 + 0x18c) = *(undefined4 *)((int)puVar10 + 0xfc);
    *(undefined4 *)(puVar10 + 0x31) = *(undefined4 *)(puVar10 + 0x1f);
    *(undefined4 *)((int)puVar10 + 0x184) = *(undefined4 *)((int)puVar10 + 0xf4);
    *(undefined4 *)(puVar10 + 0x30) = *(undefined4 *)(puVar10 + 0x1e);
    auVar33 = loadVectorLeftIndexed(0x70,0x19df70);
    fVar4 = (float)((double)fVar4 - dVar25);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = vectorSubtractFloatingPoint
                        (auVar38,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    uVar8 = storeVectorElementWordIndexed(auVar33,0x118,lVar1);
    *(undefined4 *)(puVar10 + 0x23) = uVar8;
    uVar8 = storeVectorElementWordIndexed(auVar33,0x108,lVar1);
    *(undefined4 *)(puVar10 + 0x21) = uVar8;
    auVar33 = loadVectorLeftIndexed(0x74,0x19df70);
    dVar27 = -2.8274335861206055;
    dVar24 = 3.455751895904541;
    auVar34 = loadVectorLeftIndexed(0x7c,0x19df70);
    auVar53 = loadVectorLeftIndexed(0x80,0x19df70);
    auVar39 = loadVectorLeftIndexed(0x84,0x19df70);
    auVar44 = loadVectorLeftIndexed(0x88,0x19df70);
    auVar46 = loadVectorLeftIndexed(0x8c,0x19df70);
    auVar41 = loadVectorLeftIndexed(0x90,0x19df70);
    auVar38 = loadVectorLeftIndexed(0x94,0x19df70);
    auVar37 = loadVectorLeftIndexed(0x98,0x19df70);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar54 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar53 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar46 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    dVar25 = 0.3141592741012573;
    auVar33 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    uVar8 = uVar7;
    do {
      uVar12 = EffectTexHeaders;
      auVar31 = vectorAddFloatingPoint(auVar54,auVar34);
      auVar37 = ZEXT416(0xffffffff);
      auVar42 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar32 = vectorSubtractFloatingPoint(auVar53,auVar54);
      auVar37 = ZEXT416(0xffffffff);
      auVar43 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar35 = vectorSubtractFloatingPoint(auVar39,auVar54);
      auVar37 = ZEXT416(0xffffffff);
      auVar47 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar48 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar36 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorSubtractFloatingPoint(auVar53,auVar31);
      auVar40 = vectorSubtractFloatingPoint(auVar39,auVar31);
      auVar36 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar54);
      auVar36 = vectorConditionalSelect(auVar32,auVar54,auVar36);
      auVar32 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar50 = vectorCompareGreaterThanFloatingPoint(auVar36,auVar35);
      auVar50 = vectorConditionalSelect(auVar35,auVar36,auVar50);
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar35 = vectorCompareGreaterThanFloatingPoint(auVar37,auVar31);
      auVar37 = vectorConditionalSelect(auVar37,auVar31,auVar35);
      auVar42 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = ZEXT416(0xffffffff);
      auVar31 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar36 = vectorCompareGreaterThanFloatingPoint(auVar37,auVar40);
      auVar37 = vectorConditionalSelect(auVar40,auVar37,auVar36);
      auVar35 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar36 = ZEXT416(0xffffffff);
      auVar40 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar32);
      auVar36 = ZEXT416(0xffffffff);
      auVar32 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar36 = ZEXT416(0xffffffff);
      auVar43 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar50,auVar50,auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar31,auVar37,auVar35);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar32,auVar50,auVar42);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar31,auVar36,auVar40);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar36,auVar44,auVar37);
      auVar35 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar47 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar32,auVar42,auVar45);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar42,auVar44,auVar50);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar31,auVar40,auVar43);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar37);
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar32,auVar45,auVar47);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar45,auVar46,auVar50);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar42,auVar35);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar42,auVar41,auVar37);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar43,auVar40);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar43,auVar41,auVar50);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar31,auVar38,auVar36);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar32,auVar38,auVar37);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar36,auVar52,auVar49);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar36,auVar30,auVar49);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar50,auVar52,auVar48);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar50,auVar30,auVar48);
      auVar36 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar50 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0xa4,lVar1);
      *(undefined4 *)((int)puVar10 + 0xa4) = uVar9;
      uVar9 = storeVectorElementWordIndexed
                        (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x84,lVar1);
      *(undefined4 *)((int)puVar10 + 0x84) = uVar9;
      uVar9 = storeVectorElementWordIndexed
                        (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xa0,lVar1);
      *(undefined4 *)(puVar10 + 0x14) = uVar9;
      uVar9 = storeVectorElementWordIndexed
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x80,lVar1);
      *(undefined4 *)(puVar10 + 0x10) = uVar9;
      *(undefined4 *)((int)puVar10 + 0x9c) = *(undefined4 *)((int)puVar10 + 0xac);
      *(float *)(puVar10 + 0x13) = (float)dVar23;
      *(undefined4 *)((int)puVar10 + 0x94) = uVar8;
      *(float *)(puVar10 + 0x12) = fVar4;
      *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)((int)puVar10 + 0x8c);
      *(float *)(puVar10 + 0xf) = fVar2;
      *(undefined4 *)((int)puVar10 + 0x74) = uVar7;
      *(float *)(puVar10 + 0xe) = fVar5;
      draw::FastDrawQuad(uVar13 - 0x2a0,0,1,uVar12,9);
      *(undefined4 *)(puVar10 + 0x20) = *(undefined4 *)(puVar10 + 0x22);
      *(undefined4 *)((int)puVar10 + 0x104) = *(undefined4 *)((int)puVar10 + 0x114);
      *(undefined4 *)(puVar10 + 0x21) = *(undefined4 *)(puVar10 + 0x23);
      *(undefined4 *)((int)puVar10 + 0x10c) = *(undefined4 *)((int)puVar10 + 0x11c);
      *(undefined4 *)(puVar10 + 0x24) = *(undefined4 *)(puVar10 + 0x26);
      *(undefined4 *)((int)puVar10 + 0x124) = *(undefined4 *)((int)puVar10 + 0x134);
      *(undefined4 *)(puVar10 + 0x25) = *(undefined4 *)(puVar10 + 0x27);
      *(undefined4 *)((int)puVar10 + 300) = *(undefined4 *)((int)puVar10 + 0x13c);
      *(undefined4 *)(puVar10 + 0x26) = *(undefined4 *)(puVar10 + 0x14);
      *(undefined4 *)((int)puVar10 + 0x134) = *(undefined4 *)((int)puVar10 + 0xa4);
      *(undefined4 *)(puVar10 + 0x22) = *(undefined4 *)(puVar10 + 0x10);
      uVar7 = EffectTexHeaders;
      *(undefined4 *)((int)puVar10 + 0x114) = *(undefined4 *)((int)puVar10 + 0x84);
      draw::FastDrawQuad(uVar13 - 0x210,0,1,uVar7,9);
      dVar27 = (double)(float)(dVar27 + dVar25);
      fVar5 = *(float *)(puVar10 + 0x10);
      uVar7 = *(undefined4 *)((int)puVar10 + 0x84);
      fVar2 = *(float *)(puVar10 + 0x11);
      auVar54 = vectorAddFloatingPoint(auVar54,auVar33);
      fVar4 = *(float *)(puVar10 + 0x14);
      auVar36 = loadVectorLeftIndexed(0x14,param_1);
      uVar8 = *(undefined4 *)((int)puVar10 + 0xa4);
      dVar23 = (double)*(float *)(puVar10 + 0x15);
      auVar50 = loadVectorLeftIndexed(0x10,param_1);
    } while (dVar27 < dVar24);
    uVar21 = uVar21 - 0xb & 0xff;
    auVar33 = loadVectorLeftIndexed(0x9c,0x19df70);
    dVar29 = (double)(float)(dVar29 + 0.10000000149011612);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar51 = vectorAddFloatingPoint
                        (auVar51,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
  } while (dVar29 < dVar26);
  return;
}



//==== 0019e848  ns=mobyupdate_helpers  size=0x1b8
// sig: undefined M1046_0019e848(void)
// callers(1): 0019ea18 mobyupdate_unsorted::UpdateMoby_1046
// callees(1): 00105c08 mobyutil::CollDamageMobyDirect

void mobyupdate_helpers::M1046_0019e848(MobyInstance *param_1,MobyInstance *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_30;
  float local_2c;
  undefined4 local_28;
  f32 local_24;
  float local_20;
  float local_1c;
  float local_18;
  f32 local_14;
  
  fVar1 = (param_2->pos).z;
  fVar2 = (param_1->pos).z;
  if (fVar2 < *(float *)(param_3 + 0x10) * 0.3 + fVar1) {
    fVar3 = (param_2->pos).y;
    fVar4 = (param_1->pos).y;
    fVar5 = (param_2->pos).x;
    fVar7 = fVar3 - fVar4;
    fVar6 = (param_1->pos).x;
    fVar8 = fVar5 - fVar6;
    if (ABS(SQRT(fVar8 * fVar8 + fVar7 * fVar7) - *(float *)(param_3 + 8)) < 0.3) {
      fVar6 = fVar6 - fVar5;
      fVar2 = fVar2 - fVar1;
      local_24 = (param_1->pos).w;
      fVar4 = fVar4 - fVar3;
      local_2c = 0.0;
      fVar1 = fVar2 * fVar2 + fVar6 * fVar6 + fVar4 * fVar4;
      fVar5 = SQRT(fVar1);
      fVar3 = (*(float *)(param_3 + 8) - 0.05) / fVar5;
      local_20 = local_2c;
      if (0.0 - fVar5 < 0.0) {
        local_20 = fVar6 * fVar3;
      }
      local_1c = local_2c;
      if (0.0 - fVar5 < 0.0) {
        local_1c = fVar4 * fVar3;
      }
      local_18 = local_2c;
      if (0.0 - fVar5 < 0.0) {
        local_18 = fVar2 * fVar3;
      }
      if (fVar5 - 0.0 < 0.0) {
        local_20 = fVar6 * fVar3;
      }
      if (fVar5 - 0.0 < 0.0) {
        local_1c = fVar4 * fVar3;
      }
      if (fVar5 - 0.0 < 0.0) {
        local_18 = fVar2 * fVar3;
      }
      local_30 = local_2c;
      if (fVar5 != 0.0) {
        local_2c = 1.0 / SQRT(fVar1);
        local_2c = -(fVar1 * local_2c * local_2c - 1.0) * local_2c * 0.5 + local_2c;
        local_2c = -(fVar1 * local_2c * local_2c - 1.0) * local_2c * 0.5 + local_2c;
        local_2c = -(fVar1 * local_2c * local_2c - 1.0) * local_2c * 0.5 + local_2c;
        local_30 = fVar6 * local_2c;
        local_2c = fVar4 * local_2c;
      }
      local_28 = 0x3f800000;
      local_14 = local_24;
      mobyutil::CollDamageMobyDirect
                (*(float *)(param_3 + 0x1c),param_1,param_2,0x10001,param_3,&local_20,&local_30);
    }
  }
  return;
}



//==== 0019ea18  ns=mobyupdate_unsorted  size=0x170
// sig: undefined UpdateMoby_1046(MobyInstance * moby)
// callers(0): 
// callees(4): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 0019e848 mobyupdate_helpers::M1046_0019e848; 00502758 fastfunc::FastDoubleToInt

/* Moby 1046 */

void mobyupdate_unsorted::UpdateMoby_1046(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  s8 sVar4;
  double dVar5;
  
  pfVar2 = (float *)moby->pVar;
  fVar1 = pfVar2[2];
  pfVar2[2] = fVar1 + pfVar2[3];
  moby->scale = fVar1 + pfVar2[3];
  dVar5 = (double)((pfVar2[2] - *pfVar2) / (pfVar2[1] - *pfVar2));
  if (0.20000000298023224 <= dVar5) {
    sVar4 = -0x80;
    if (0.800000011920929 < dVar5) {
      sVar4 = fastfunc::FastDoubleToInt((double)((float)(1.0 - dVar5) * 5.0 * 127.0));
    }
  }
  else {
    sVar4 = fastfunc::FastDoubleToInt((double)((float)(dVar5 * 5.0) * 127.0));
  }
  moby->alpha = sVar4;
  if (dVar5 < 1.0) {
    RegisterFuncForMoby(&PTR_M1046_0019e010_007086b8,moby);
    mobyupdate_helpers::M1046_0019e848(g_heroMobyPtr,moby,pfVar2);
    for (iVar3 = MobyUpdateChainStart; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x28)) {
      mobyupdate_helpers::M1046_0019e848(iVar3,moby,pfVar2);
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0019eb88  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1047_0019eb88(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1047_0019eb88(void)

{
  DAT_0074059c = 0x10000;
  return;
}



//==== 0019ebd8  ns=mobyupdate_unsorted  size=0x5e4
// sig: undefined UpdateMoby_1047(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0015d204 sound::sound_MobyPlay_oClass; 001d5858 FUN_001d5858; 002dbdc0 FUN_002dbdc0; 00425540 FUN_00425540; 00502b08 fastfunc::FastVecAddSelf

/* Moby 1047 */

void mobyupdate_unsorted::UpdateMoby_1047(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 auStack_d0 [16];
  
  lVar8 = (longlong)(int)moby;
  uVar4 = moby->uid;
  if (((&DAT_00a545c4)[(short)uVar4] == '\0') &&
     ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar4 >> 5) << 2)) &
      1 << (uVar4 & 0x1f)) == 0)) {
    iVar9 = mobyutil::MB_damage(lVar8,0x40000,0);
    if (iVar9 == 0) {
      return;
    }
    dVar18 = 0.0;
    uVar19 = 0x4010000000000000;
    dVar20 = 2.0;
    uVar21 = 0x40f86a0000000000;
    dVar22 = 3.0;
    uVar23 = 0x402e000000000000;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar8,local_100,lVar8 + 0x10,0xffffffffffffffff,1,5,3,4);
    sound::sound_MobyPlay_oClass(0,0,moby,0x99);
    dVar24 = -3.0;
    iVar9 = 0;
    dVar25 = 5.0;
    dVar26 = 10.0;
    dVar27 = 0.5;
    dVar28 = 1.0;
    do {
      dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar22);
      fVar6 = (float)dVar11;
      dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar22);
      fVar1 = (float)((double)(moby->transform).v2.x * dVar11 +
                     (double)((moby->transform).v0.x * -1.0 + (moby->transform).v1.x * fVar6));
      fVar2 = (float)((double)(moby->transform).v2.y * dVar11 +
                     (double)((moby->transform).v0.y * -1.0 + (moby->transform).v1.y * fVar6));
      fVar3 = (float)((double)(moby->transform).v2.z * dVar11 +
                     (double)((moby->transform).v0.z * -1.0 + (moby->transform).v1.z * fVar6));
      fVar7 = (float)((double)(moby->transform).v2.w * dVar11 +
                     (double)((moby->transform).v0.w * -1.0 + (moby->transform).v1.w * fVar6)) + 0.0
      ;
      dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
      dVar17 = (double)fVar7;
      dVar14 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
      fVar6 = (float)((double)(float)(dVar11 * (double)mobyutil::g_FrameTime) / dVar14);
      dVar11 = dVar18;
      if (dVar18 - dVar14 < 0.0) {
        dVar11 = (double)(fVar3 * fVar6);
      }
      dVar15 = dVar18;
      if (dVar18 - dVar14 < 0.0) {
        dVar15 = (double)(fVar2 * fVar6);
      }
      dVar16 = dVar18;
      if (dVar18 - dVar14 < 0.0) {
        dVar16 = (double)(fVar1 * fVar6);
      }
      if (dVar14 - dVar18 < 0.0) {
        dVar11 = (double)(fVar3 * fVar6);
      }
      if (dVar14 - dVar18 < 0.0) {
        dVar15 = (double)(fVar2 * fVar6);
      }
      if (dVar14 - dVar18 < 0.0) {
        dVar16 = (double)(fVar1 * fVar6);
      }
      fastfunc::FastVecAddSelf(auStack_d0,local_e0,lVar8 + 0x10);
      iVar10 = mobyutil::MB_randInt(1);
      uVar12 = mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
      mobyutil::MB_randRange(0x3c,0x78);
      uVar13 = mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar22);
      mobyutil::MB_randInt(4);
      FUN_00425540(uVar12,uVar13,dVar28,dVar22,CONCAT44(fVar1,fVar2),CONCAT44(fVar3,fVar7),
                   CONCAT44((float)dVar16,(float)dVar15),CONCAT44((float)dVar11,(float)dVar17),
                   ((LZCOUNT(-iVar10) << 0x3a) >> 0x3f) + 0x70f);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x1e);
    mobyutil::MB_genericExplosion
              (dVar18,dVar18,uVar19,dVar20,uVar21,dVar22,uVar23,lVar8,local_100,local_f0);
    FUN_001d5858(lVar8);
    FUN_002dbdc0(lVar8);
    uVar4 = moby->uid;
    iVar10 = (int)((longlong)((int)(short)uVar4 >> 5) << 2);
    iVar9 = (int)((longlong)((int)(short)uVar4 >> 5) << 2);
    uVar5 = *(uint *)(&DAT_00a54dd0 + iVar9);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar10) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar10) | 1 << (uVar4 & 0x1f);
    *(uint *)(&DAT_00a54dd0 + iVar9) = uVar5 | 1 << (uVar4 & 0x1f);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  FUN_001d5858(lVar8);
  FUN_002dbdc0(lVar8);
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0019f1bc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1048_0019f1bc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1048_0019f1bc(void)

{
  DAT_0074060c = 0x10000;
  return;
}



//==== 0019f1e8  ns=mobyupdate_helpers  size=0x708
// sig: undefined M1048_0019f1e8(void)
// callers(1): 001a02d8 mobyupdate_unsorted::UpdateMoby_1048
// callees(3): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

double mobyupdate_helpers::M1048_0019f1e8(int param_1)

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
  double dVar32;
  ulonglong in_f26;
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
    dVar30 = 0.0;
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
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar12 + 0xd4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar9 + fVar3);
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
    dVar30 = 0.0;
    dVar35 = (double)(DAT_00740658 * -0.017453292);
    fVar15 = DAT_00740658 * 0.017453292;
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
    dVar32 = dVar30;
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
        dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar14 + 0xb4)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar10 + fVar6);
    }
    fVar5 = fVar5 - fVar4;
    fVar9 = fVar9 - fVar3;
    fVar2 = *(float *)(iVar12 + 0x18) - fVar2;
    puVar26 = (ushort *)(&mobyutil::g_MobyGroups)[bVar1];
    dVar33 = (double)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar5 * fVar5);
    dVar34 = (double)fVar15;
    if (puVar26 != (ushort *)0x0) {
      do {
        uVar17 = *puVar26 & 0x7fff;
        if ((MobyInstance[uVar17].state == '\b') ||
           (fVar2 = MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14),
           fVar3 = MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10),
           fVar9 = MobyInstance[uVar17].pos.z - *(float *)(iVar12 + 0x18), dVar29 = dVar34,
           (double)SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2) < dVar33)) {
          fVar2 = MobyInstance[uVar17].pos.x - *(float *)(iVar12 + 0x10);
          fVar3 = MobyInstance[uVar17].pos.y - *(float *)(iVar12 + 0x14);
          dVar28 = ABS((double)fVar2);
          dVar31 = ABS((double)fVar3);
          *(float *)(puVar13 + 0xe) = fVar2;
          *(float *)((int)puVar13 + 0x74) = fVar3;
          *(float *)(puVar13 + 0xf) = (float)(dVar28 - dVar31);
          uVar20 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)(puVar13 + 0xe));
          if ((double)*(float *)(puVar13 + 0xf) - dVar30 < 0.0) {
            dVar29 = dVar31;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar31 = ABS((double)*(float *)((int)puVar13 + 0x74));
          if ((double)*(float *)(puVar13 + 0xf) - dVar30 < 0.0) {
            dVar31 = dVar28;
          }
          fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          dVar28 = dVar30;
          if (dVar30 < dVar29) {
            lVar21 = uVar19 - 0x140;
            lVar23 = uVar19 - 0xbc;
            lVar25 = uVar19 - 0xac;
            lVar27 = 2;
            fVar9 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
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
              lVar21 = lVar21 + 8;
              lVar23 = lVar23 + 8;
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
            dVar29 = dVar30;
            do {
              iVar14 = (int)lVar21;
              lVar21 = lVar21 + 0x10;
              iVar16 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x94)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar28 = (double)((float)(dVar29 + dVar36) * fVar2 + fVar3);
          }
          dVar28 = (double)fastfunc::FastDiffRots(dVar28,dVar32);
          if (((dVar28 <= dVar30) || (dVar29 = dVar28, dVar34 <= dVar28)) &&
             (dVar29 = dVar34, dVar35 < dVar28 && dVar28 < dVar30)) {
            dVar35 = dVar28;
          }
        }
        uVar11 = *puVar26;
        puVar26 = puVar26 + 1;
        dVar34 = dVar29;
      } while (-1 < (short)uVar11);
      dVar36 = (double)fastfunc::FastSubRots((float)dVar29,(float)dVar35);
      dVar36 = (double)fastfunc::FastWrapRot((float)dVar35,(float)(dVar36 * 0.5));
      dVar30 = (double)fastfunc::FastWrapRot((float)dVar36,(float)dVar32);
    }
  }
  return dVar30;
}



//==== 0019f8f0  ns=mobyupdate_helpers  size=0x6c
// sig: undefined M1048_0019f8f0(void)
// callers(1): 001a02d8 mobyupdate_unsorted::UpdateMoby_1048
// callees(0): 

void mobyupdate_helpers::M1048_0019f8f0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)] != 0) {
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



//==== 0019f9b0  ns=mobyupdate_helpers  size=0x8b4
// sig: undefined M1048_0019f9b0(void)
// callers(1): 001a02d8 mobyupdate_unsorted::UpdateMoby_1048
// callees(13): 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 00105870 mobyutil::DamageSphereAtPos; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1048_0019f9b0(MobyInstance *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  void *pvVar6;
  uint uVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar19;
  longlong lVar17;
  longlong lVar18;
  float *pfVar23;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar18 = uVar12 - 0xf0;
  puVar9 = (ulonglong *)lVar18;
  *puVar9 = uVar12;
  puVar9[0x20] = in_LR;
  puVar9[0x1d] = in_f31;
  puVar9[0x1b] = unaff_r30;
  puVar9[0x1c] = unaff_r31;
  pvVar6 = param_1->pVar;
  uVar25 = ZEXT48(pvVar6);
  iVar14 = *(int *)((int)pvVar6 + 0x38);
  puVar9[0x1a] = unaff_r29;
  if (iVar14 != 0) {
    dVar27 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar13 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x1ac) = uVar13;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar25 + 0x1ac);
  dVar27 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x84) = 0;
  iVar14 = mobyutil::MB_damage(param_1,0x330000,0);
  if (((iVar14 != 0) && (*(int *)(iVar14 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar14 + 0x20) + 0xa6) == 0x418)) {
    iVar14 = 0;
  }
  iVar15 = mobyutil::MB_HandleDamage
                     (param_1,iVar14,uVar25 + 0x20,0,puVar9 + 0x10,(int)puVar9 + 0x84,0,4);
  if ((*(int *)(puVar9 + 0x10) != 1) && (param_1->state != '\x03' && param_1->state != '\x11')) {
    *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x84)
    ;
    bVar1 = param_1->group;
    if ((bVar1 != 0xff) && ((&mobyutil::g_MobyGroups)[bVar1] != 0)) {
      puVar19 = (ushort *)(&mobyutil::g_MobyGroups)[bVar1];
      do {
        if (MobyInstance[*puVar19 & 0x7fff].state == '\x01') {
          MobyInstance[*puVar19 & 0x7fff].state = '\x02';
        }
        uVar5 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (-1 < (short)uVar5);
    }
    if (*(int *)((int)pvVar6 + 0x20) < 1) {
LAB_0019fd7c:
      param_1->state = '\x11';
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      fVar4 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar6 + 0x88) = mobyutil::g_FrameTime * 8.0;
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
      *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41680000;
      *(float *)((int)pvVar6 + 0x8c) = fVar4 * 5.0;
      uVar16 = *(uint *)(iVar14 + 0x10);
      uVar7 = *(uint *)(iVar14 + 0x14);
      dVar29 = ABS((double)*(float *)(iVar14 + 0x10));
      dVar30 = ABS((double)*(float *)(iVar14 + 0x14));
      *(float *)(puVar9 + 0x11) = (float)(dVar29 - dVar30);
      uVar20 = (ulonglong)(uVar16 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 | (ulonglong)(uVar7 >> 0x1d) & 4;
      uVar22 = uVar20 << 2;
      dVar28 = dVar29;
      if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
        dVar28 = dVar30;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar22);
      if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
        dVar30 = dVar29;
      }
      fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar29 = dVar27;
      if (dVar27 < dVar28) {
        lVar17 = uVar12 - 0xe0;
        lVar24 = uVar12 - 0x50;
        lVar21 = uVar12 - 0x60;
        lVar26 = 2;
        fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
        fVar10 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0x9c) = fVar3;
        *(float *)((int)puVar9 + 0x94) = fVar3;
        *(float *)(puVar9 + 0x13) = fVar3;
        *(float *)(puVar9 + 0x12) = fVar3;
        fVar3 = fVar10 * fVar10;
        *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar10;
        *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar3;
        *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3 * fVar10;
        do {
          *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x80) * fVar3 * fVar3;
          iVar14 = (int)lVar21;
          lVar21 = lVar21 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar24 = uVar12 - 0x60;
        uVar22 = ZEXT48(&DAT_007358e0);
        lVar17 = lVar18;
        lVar21 = lVar24;
        do {
          pfVar23 = (float *)uVar22;
          fVar3 = pfVar23[1];
          uVar22 = uVar22 + 8;
          *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x90) * *pfVar23;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar17 = 2;
        dVar30 = dVar27;
        do {
          iVar14 = (int)lVar18;
          iVar15 = (int)lVar24;
          lVar18 = lVar18 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar14 + 0x90)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar29 = (double)((float)(dVar30 + 0.7853981852531433) * fVar4 + fVar2);
      }
      mobyutil::MB_StartKick(dVar29,param_1,uVar25 + 0x70,uVar22,10,1,0);
      *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    else if (*(int *)((int)pvVar6 + 0x1cc) == 0) {
      if (iVar15 < 3) {
        if ((-1 < iVar15) && (0 < iVar15)) goto LAB_0019fd7c;
      }
      else if (iVar15 < 0xb) {
        param_1->state = '\x0e';
        fVar4 = mobyutil::g_FrameTime * 2.0;
        *(float *)((int)pvVar6 + 0x8c) = mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41080000;
        *(float *)((int)pvVar6 + 0x88) = fVar4;
        uVar16 = *(uint *)(iVar14 + 0x10);
        uVar7 = *(uint *)(iVar14 + 0x14);
        dVar29 = ABS((double)*(float *)(iVar14 + 0x10));
        dVar30 = ABS((double)*(float *)(iVar14 + 0x14));
        *(float *)((int)puVar9 + 0x8c) = (float)(dVar29 - dVar30);
        uVar20 = (ulonglong)(uVar16 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1e) & 2 |
                 (ulonglong)(uVar7 >> 0x1d) & 4;
        uVar22 = uVar20 << 2;
        dVar28 = dVar29;
        if ((double)*(float *)((int)puVar9 + 0x8c) - dVar27 < 0.0) {
          dVar28 = dVar30;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar22);
        fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if ((double)*(float *)((int)puVar9 + 0x8c) - dVar27 < 0.0) {
          dVar30 = dVar29;
        }
        dVar29 = dVar27;
        if (dVar27 < dVar28) {
          lVar17 = uVar12 - 0xe0;
          lVar21 = uVar12 - 0x40;
          lVar24 = uVar12 - 0x30;
          lVar26 = 2;
          fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
          fVar10 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xbc) = fVar3;
          *(float *)((int)puVar9 + 0xb4) = fVar3;
          *(float *)(puVar9 + 0x17) = fVar3;
          *(float *)(puVar9 + 0x16) = fVar3;
          fVar3 = fVar10 * fVar10;
          *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar10;
          *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar3;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3 * fVar10;
          do {
            *(float *)((int)lVar17 + 0xb0) = *(float *)((int)lVar17 + 0xa0) * fVar3 * fVar3;
            iVar14 = (int)lVar21;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar24 = uVar12 - 0x40;
          uVar22 = ZEXT48(&DAT_007358e0);
          lVar17 = lVar18;
          lVar21 = lVar24;
          do {
            pfVar23 = (float *)uVar22;
            fVar3 = pfVar23[1];
            uVar22 = uVar22 + 8;
            *(float *)((int)lVar17 + 0xb0) = *(float *)((int)lVar17 + 0xb0) * *pfVar23;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
            lVar21 = lVar21 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar17 = 2;
          dVar30 = dVar27;
          do {
            iVar14 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar15 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar14 + 0xb0)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar29 = (double)((float)(dVar30 + 0.7853981852531433) * fVar2 + fVar4);
        }
        mobyutil::MB_StartKick(dVar29,param_1,uVar25 + 0x70,uVar22,9,1,0);
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      }
    }
    else {
      *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar25 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar25 + 0x60);
  bVar1 = param_1->state;
  if (bVar1 < 10) {
    if (bVar1 < 8) goto LAB_001a0050;
  }
  else if ((bVar1 < 0xc) || (0xd < bVar1)) goto LAB_001a0050;
  if (worldUpdateTime +
      (((int)worldUpdateTime >> 2) + (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0))
      * -4 == ((int)param_1 >> 8 & 3U)) {
    puVar9[0xe] = 0;
    mobyutil::DamageSphereAtPos
              (0x3fe6666660000000,0x3fecccccc0000000,0x3ff0000000000000,param_1,&param_1->pos,
               &DAT_0019f95c,0x10000);
  }
LAB_001a0050:
  dVar28 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar6 + 0x1c8),
                              DAT_00740660 * 0.017453292 * mobyutil::g_FrameTime);
  uVar11 = DAT_00740668;
  uVar13 = DAT_00740664;
  dVar30 = (double)(float)(3.141592502593994 - dVar28);
  if (dVar28 - (double)(float)(3.141592502593994 - dVar28) < 0.0) {
    dVar30 = dVar28;
  }
  dVar29 = (double)(float)(-3.141592502593994 - dVar28);
  if ((double)(float)(-3.141592502593994 - dVar28) - dVar30 < 0.0) {
    dVar29 = dVar30;
  }
  dVar30 = (double)(float)(dVar29 * dVar29);
  dVar32 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar29));
  dVar31 = (double)(float)(dVar30 * dVar32);
  *(float *)((int)pvVar6 + 0x1c8) = (float)dVar28;
  uVar16 = fastfunc::FastLerpColor
                     ((double)(((float)(dVar30 * dVar31) * 2.601887e-06 +
                                (float)(dVar31 * -0.0001980741071747616 +
                                       (double)(float)(dVar32 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar30 * 
                                                  dVar29) * -0.16666656732559204 + dVar29))) + 1.0)
                              * 0.5),uVar13,uVar11);
  param_1->field60_0x90 = uVar16;
  if (*(int *)((int)pvVar6 + 0x1ac) == 0) {
    if (param_1->state == '\x01') {
      if ((param_1 == DAT_00969f20) || (param_1 == DAT_00969f1c)) {
        dVar27 = 6.0;
      }
    }
    else {
      dVar27 = (double)DAT_00740650;
    }
  }
  else {
    dVar27 = (double)(DAT_00740650 + 6.0);
  }
  *(float *)((int)pvVar6 + 0x1a0) = (float)dVar27;
  pSVar8 = Splines[*(int *)((int)pvVar6 + 0x1b0)];
  iVar14 = mobyutil::MB_getTargetInArea
                     (dVar27,param_1,uVar25 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if ((iVar14 != 2) &&
     ((fVar4 = *(float *)((int)pvVar6 + 0x174) - *(float *)((int)pvVar6 + 0x124),
      fVar2 = *(float *)((int)pvVar6 + 0x170) - *(float *)((int)pvVar6 + 0x120),
      *(float *)((int)pvVar6 + 0x1a0) < SQRT(fVar2 * fVar2 + fVar4 * fVar4) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
    *(undefined4 *)((int)pvVar6 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar6 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
  }
  return;
}



