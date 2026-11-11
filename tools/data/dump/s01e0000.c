//==== 001e0448  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1149_001e0448(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1149_001e0448(void)

{
  DAT_00764d10 = 0x10000;
  return;
}



//==== 001e0460  ns=mobyupdate_unsorted  size=0x144
// sig: undefined UpdateMoby_1149(MobyInstance * moby)
// callers(0): 
// callees(2): 00110b70 mobyutil::MB_IsPntInCuboid; 00167e60 update::mode_sceneInit

/* Moby 1149 */

void mobyupdate_unsorted::UpdateMoby_1149(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = moby->uid;
  piVar2 = (int *)moby->pVar;
  if (((&DAT_00a545c4)[(short)uVar1] == '\0') &&
     ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar1 >> 5) << 2)) &
      1 << (uVar1 & 0x1f)) == 0)) {
    iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if ((iVar5 != 0) && (piVar2[1] != -1)) {
      uVar1 = moby->uid;
      iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      iVar5 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      uVar3 = *(uint *)(&DAT_00a54dd0 + iVar5);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar4) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar4) | 1 << (uVar1 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar5) = uVar3 | 1 << (uVar1 & 0x1f);
      update::mode_sceneInit(piVar2[1]);
    }
  }
  return;
}



//==== 001e05a4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1151_001e05a4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1151_001e05a4(void)

{
  DAT_00764d80 = 0x10000;
  return;
}



//==== 001e05b8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1151_001e05b8(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1151_001e05b8(int param_1)

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



//==== 001e0638  ns=mobyupdate_unsorted  size=0xa90
// sig: undefined UpdateMoby_{1150_1151}(MobyInstance * moby)
// callers(0): 
// callees(9): 000b72b0 hero::TransitionMovement; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1150
   Moby 1151 */

void mobyupdate_unsorted::UpdateMoby__1150_1151_(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  ushort uVar8;
  void *pvVar9;
  Spline *pSVar10;
  uint uVar11;
  undefined2 uVar12;
  Vec4 *pVVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  bool bVar17;
  MobyInstance *pMVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  Vec4 local_60;
  
  pvVar9 = moby->pVar;
  uVar21 = ZEXT48(pvVar9);
  bVar17 = false;
  if (*(int *)((int)pvVar9 + 0xb4) == -1) {
    return;
  }
  pSVar10 = Splines[*(int *)((int)pvVar9 + 0xb4)];
  if ((((*(int *)((int)pvVar9 + 0xc0) == -1) ||
       (iVar19 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xc0)),
       iVar19 != 0)) || (uVar8 = moby->uid, (&DAT_00a545c4)[(short)uVar8] != '\0')) ||
     ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar8 >> 5) << 2)) &
      1 << (uVar8 & 0x1f)) != 0)) {
    if (*(int *)((int)pvVar9 + 0xc0) != -1) {
      uVar8 = moby->uid;
      iVar16 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      iVar19 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      uVar11 = *(uint *)(&DAT_00a54dd0 + iVar19);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar16) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar16) | 1 << (uVar8 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar19) = uVar11 | 1 << (uVar8 & 0x1f);
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0xffffffff;
    }
    bVar17 = true;
  }
  dVar27 = (double)(moby->pos).x;
  dVar26 = (double)(moby->pos).y;
  dVar25 = (double)(moby->pos).z;
  fastfunc::FastDecTimerS16(uVar21 + 0xba);
  if (moby->state == '\0') {
    uVar11 = *(uint *)((int)pvVar9 + 0xa0);
    uVar2 = 0;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0;
    *(undefined2 *)((int)pvVar9 + 0x24) = 0;
    *(undefined1 *)((int)pvVar9 + 0x28) = 4;
    *(undefined2 *)((int)pvVar9 + 0x3e) = 5;
    moby->setByGroup = (char)uVar11;
    if ((uVar11 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    lVar20 = 0;
    *(undefined4 *)((int)pvVar9 + 0xa4) = uVar2;
    iVar19 = fastfunc::FastDoubleToInt();
    if (iVar19 != 0) {
      lVar20 = (ulonglong)(uint)pSVar10->cnt - 1;
    }
    iVar19 = (int)(lVar20 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar10->points[0].x + iVar19);
    (moby->pos).y = *(f32 *)((int)&pSVar10->points[0].y + iVar19);
    (moby->pos).z = *(f32 *)((int)&pSVar10->points[0].z + iVar19);
    (moby->pos).w = *(f32 *)((int)&pSVar10->points[0].w + iVar19);
    *(undefined2 *)((int)pvVar9 + 0xba) = 0;
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar9 + 0xbc) = 0;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 == 0) {
    if ((bVar17) &&
       ((((*(short *)((int)pvVar9 + 0xb8) != 0 &&
          (((pMVar18 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar18 == moby)) ||
        (pVVar13 = pSVar10->points + pSVar10->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar10->points[0].y, fVar4 = g_heroPosition.y - pVVar13->y,
        fVar5 = g_heroPosition.x - pVVar13->x, fVar6 = g_heroPosition.x - pSVar10->points[0].x,
        fVar14 = g_heroPosition.z - pVVar13->z, fVar15 = g_heroPosition.z - pSVar10->points[0].z,
        SQRT(fVar15 * fVar15 + fVar6 * fVar6 + fVar3 * fVar3) <
        SQRT(fVar14 * fVar14 + fVar5 * fVar5 + fVar4 * fVar4))))) {
      if (((*(int *)((int)pvVar9 + 200) == 0) &&
          (((pMVar18 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar18 == moby)) {
        hero::TransitionMovement(0x72,1);
      }
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
      *(float *)((int)pvVar9 + 0xac) = -1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 2) {
    if ((bVar17) &&
       (((*(short *)((int)pvVar9 + 0xb8) != 0 &&
         ((((pMVar18 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar18 == moby)))) ||
        (pVVar13 = pSVar10->points + pSVar10->cnt + -1,
        fVar3 = g_heroPosition.y - pSVar10->points[0].y, fVar4 = g_heroPosition.y - pVVar13->y,
        fVar5 = g_heroPosition.x - pSVar10->points[0].x, fVar6 = g_heroPosition.x - pVVar13->x,
        fVar14 = g_heroPosition.z - pSVar10->points[0].z, fVar15 = g_heroPosition.z - pVVar13->z,
        SQRT(fVar15 * fVar15 + fVar6 * fVar6 + fVar4 * fVar4) <
        SQRT(fVar14 * fVar14 + fVar5 * fVar5 + fVar3 * fVar3))))) {
      if ((*(int *)((int)pvVar9 + 200) == 0) &&
         ((((pMVar18 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
           (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar18 == moby)))) {
        hero::TransitionMovement(0x72,1);
      }
      sound::PlayMobySound(1,0,moby);
      moby->setByGroup = '\x02';
      fVar3 = animationSpeed;
      *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
      *(float *)((int)pvVar9 + 0xac) = 1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
    }
  }
  else if (bVar1 < 3) {
    if (*(short *)((int)pvVar9 + 0xba) == 0) {
      dVar24 = 0.0;
      if ((((-1 < *(int *)((int)pvVar9 + 0xbc)) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
          (fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3))) ||
         (fVar3 - g_heroPosition.z <= 1.0)) {
        iVar19 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar9 + 0xc4));
        if (iVar19 == 0) {
          iVar19 = sound::PlayMobySound(0,4,moby);
          *(int *)((int)pvVar9 + 0xc4) = iVar19;
        }
        dVar23 = (double)*(float *)((int)pvVar9 + 0xac);
        fVar3 = (float)(dVar23 * (double)mobyutil::g_FrameTime +
                       (double)*(float *)((int)pvVar9 + 0xa8));
        dVar22 = (double)fVar3;
        *(float *)((int)pvVar9 + 0xa8) = fVar3;
        if (ABS(dVar23) < ABS(dVar22)) {
          *(float *)((int)pvVar9 + 0xa8) = *(float *)((int)pvVar9 + 0xac);
          dVar22 = dVar23;
        }
        fVar3 = (float)((double)*(float *)((int)pvVar9 + 0xa4) + dVar22);
        *(float *)((int)pvVar9 + 0xa4) = fVar3;
        if (0.5 < ABS(fVar3 - 0.5)) {
          if (((*(int *)((int)pvVar9 + 200) == 0) &&
              (((pMVar18 = DAT_0096a1d8, hero::g_heroStateType == 3 || (g_heroState == EDGE_JUMP))
               || (pMVar18 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar18 == moby)) {
            hero::TransitionMovement(0,1);
            dVar23 = (double)*(float *)((int)pvVar9 + 0xac);
          }
          if (dVar23 <= dVar24) {
            moby->setByGroup = '\x01';
          }
          else {
            moby->setByGroup = '\0';
            dVar24 = 1.0;
          }
          *(float *)((int)pvVar9 + 0xa4) = (float)dVar24;
          sound::PlayMobySound(2,0,moby);
          auVar28 = ZEXT416(0xffffffff);
          auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
          auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar28 = loadVectorLeftIndexed(0x20,0x1e0610);
          auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar19 = *(int *)((int)pvVar9 + 0xc4);
          auVar28 = vectorMultiplyAddFloatingPoint
                              (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60
                               ,auVar29);
          auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
          auVar28 = vectorSplatHalfWord(auVar28,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar28,0xba,uVar21);
          *(undefined2 *)((int)pvVar9 + 0xba) = uVar12;
          if (((iVar19 != -1) && (sound::g_SoundChannels[iVar19].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar19].state != '\0')) {
            sound::sound_Kill(iVar19);
          }
          *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
        }
        dVar24 = (double)fastfunc::FastIntToDouble(pSVar10->cnt + -1);
        lVar20 = fastfunc::FastDoubleToInt
                           ((double)(float)(dVar24 * (double)*(float *)((int)pvVar9 + 0xa4)));
        dVar24 = (double)fastfunc::FastIntToDouble();
        dVar22 = (double)fastfunc::FastIntToDouble(pSVar10->cnt + -1);
        fVar3 = (float)(dVar22 * (double)*(float *)((int)pvVar9 + 0xa4) - dVar24);
        iVar19 = (int)(lVar20 << 4);
        if ((int)lVar20 == pSVar10->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar19);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar19);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar19);
          fVar7 = *(f32 *)((int)&pSVar10->points[0].w + iVar19);
        }
        else {
          fVar4 = *(float *)((int)&pSVar10->points[0].x + iVar19);
          fVar5 = *(float *)((int)&pSVar10->points[0].y + iVar19);
          fVar6 = *(float *)((int)&pSVar10->points[0].z + iVar19);
          fVar7 = *(f32 *)((int)&pSVar10->points[1].w + iVar19);
          fVar4 = fVar3 * (*(float *)((int)&pSVar10->points[1].x + iVar19) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar10->points[1].y + iVar19) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar10->points[1].z + iVar19) - fVar6) + fVar6;
        }
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar7;
        *(float *)((int)pvVar9 + 0xbc) = (float)((double)fVar6 - dVar25);
        goto LAB_001e0fb4;
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(0x18,0x1e0610);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                           auVar29);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = vectorSplatHalfWord(auVar28,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar28,0xba,uVar21);
      *(undefined2 *)((int)pvVar9 + 0xba) = uVar12;
    }
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    iVar19 = *(int *)((int)pvVar9 + 0xc4);
    if (((iVar19 != -1) && (sound::g_SoundChannels[iVar19].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar19].state != '\0')) {
      sound::sound_Kill(iVar19);
    }
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
  }
LAB_001e0fb4:
  local_60.x = (float)((double)(moby->pos).x - dVar27);
  local_60.y = (float)((double)(moby->pos).y - dVar26);
  local_60.w = (moby->pos).w;
  local_60.z = (float)((double)(moby->pos).z - dVar25);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x60),&local_60,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  pMVar18 = DAT_0096a1d8;
  if (((((hero::g_heroStateType != 3) && (g_heroState != EDGE_JUMP)) &&
       (pMVar18 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar18 != moby)) &&
     ((fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3) && (*(short *)((int)pvVar9 + 0xba) == 0)))) {
    *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
  }
  return;
}



//==== 001e10c8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1156_001e10c8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1156_001e10c8(void)

{
  DAT_00764df0 = 0x10000;
  return;
}



//==== 001e1120  ns=mobyupdate_helpers  size=0x9bc
// sig: undefined M1156_001e1120(void)
// callers(1): 001e1b00 mobyupdate_unsorted::UpdateMoby_1156
// callees(4): 000f31a8 mobyfunc::UpdateMobyTransform; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1156_001e1120(int param_1)

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
  undefined4 uVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
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
  
  lVar20 = 0;
  lVar19 = 0;
  puVar18 = &DAT_00ef2730;
  dVar41 = 0.5235987901687622;
  dVar40 = 1.0;
  dVar35 = 30.0;
  dVar39 = 0.01745329238474369;
  dVar38 = 1.5707963705062866;
  dVar37 = 0.0;
  dVar36 = 14.0;
  do {
    dVar24 = (double)DAT_00ef2788;
    dVar25 = (double)DAT_00764e20;
    uVar23 = *puVar18;
    *(undefined4 *)(uVar23 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(uVar23 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(uVar23 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(uVar23 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    dVar25 = (double)(float)((double)(longlong)((int)lVar20 % 3) * dVar41 -
                            (double)(float)((double)(float)(dVar25 * (double)(float)(dVar40 - dVar24
                                                                                    ) + dVar35) *
                                           dVar39));
    dVar42 = (double)(longlong)(int)(((uint)(lVar20 + -3 >> 0x3f) & 0xfffffffe) + 1);
    dVar24 = (double)fastfunc::FastWrapRot(*(float *)(*puVar18 + 0x48),(float)(dVar42 * dVar38));
    *(float *)(*puVar18 + 0x48) = (float)dVar24;
    *(float *)(*puVar18 + 0x44) = (float)((double)DAT_00764e24 * dVar39);
    *(float *)(*puVar18 + 0x40) = (float)dVar25;
    fastfunc::FastEulerToMtx((ulonglong)*puVar18 + 0xc0,(ulonglong)*puVar18 + 0x40);
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xc0);
    fVar4 = *(float *)(param_1 + 200);
    fVar5 = *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(param_1 + 0x18);
    dVar34 = (double)DAT_00764e14;
    dVar30 = (double)DAT_00764e1c;
    fVar8 = *(float *)(param_1 + 0xd0);
    fVar9 = *(float *)(param_1 + 0xd4);
    fVar10 = *(float *)(param_1 + 0xd8);
    uVar23 = *puVar18;
    fVar11 = *(float *)(uVar23 + 0xe4);
    fVar12 = *(float *)(uVar23 + 0xe0);
    fVar13 = *(float *)(uVar23 + 0xe8);
    dVar25 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar27 = (double)SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
    fVar1 = (float)(dVar36 / dVar25);
    dVar24 = dVar37;
    if (dVar37 - dVar25 < 0.0) {
      dVar24 = (double)(fVar4 * fVar1);
    }
    dVar32 = dVar37;
    if (dVar37 - dVar25 < 0.0) {
      dVar32 = (double)(fVar2 * fVar1);
    }
    dVar43 = dVar37;
    if (dVar37 - dVar25 < 0.0) {
      dVar43 = (double)(fVar3 * fVar1);
    }
    if (dVar25 - dVar37 < 0.0) {
      dVar24 = (double)(fVar4 * fVar1);
    }
    if (dVar25 - dVar37 < 0.0) {
      dVar32 = (double)(fVar2 * fVar1);
    }
    if (dVar25 - dVar37 < 0.0) {
      dVar43 = (double)(fVar3 * fVar1);
    }
    if (dVar27 == dVar37) {
      uVar14 = *(undefined4 *)(uVar23 + 0xec);
      dVar25 = dVar37;
      dVar27 = dVar37;
      dVar28 = dVar37;
    }
    else {
      fVar1 = (float)((double)DAT_00764e18 / dVar27);
      dVar27 = (double)(fVar11 * fVar1);
      dVar25 = (double)(fVar12 * fVar1);
      uVar14 = *(undefined4 *)(uVar23 + 0xec);
      dVar28 = (double)(fVar13 * fVar1);
    }
    *(undefined4 *)(uVar23 + 0x1c) = uVar14;
    dVar31 = (double)SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar1 = (float)((double)(float)(dVar42 * dVar30) / dVar31);
    dVar30 = dVar37;
    if (dVar37 - dVar31 < 0.0) {
      dVar30 = (double)(fVar10 * fVar1);
    }
    dVar42 = dVar37;
    if (dVar37 - dVar31 < 0.0) {
      dVar42 = (double)(fVar9 * fVar1);
    }
    dVar33 = dVar37;
    if (dVar37 - dVar31 < 0.0) {
      dVar33 = (double)(fVar8 * fVar1);
    }
    if (dVar31 - dVar37 < 0.0) {
      dVar30 = (double)(fVar10 * fVar1);
    }
    if (dVar31 - dVar37 < 0.0) {
      dVar42 = (double)(fVar9 * fVar1);
    }
    if (dVar31 - dVar37 < 0.0) {
      dVar33 = (double)(fVar8 * fVar1);
    }
    *(float *)(uVar23 + 0x18) = (float)(dVar34 + dVar24) + fVar7 + (float)(dVar28 + dVar30);
    *(float *)(uVar23 + 0x14) = (float)(dVar32 + (double)fVar6) + (float)(dVar27 + dVar42);
    *(float *)(uVar23 + 0x10) = (float)(dVar43 + (double)fVar5) + (float)(dVar25 + dVar33);
    mobyfunc::UpdateMobyTransform((MobyInstance *)*puVar18);
    lVar20 = lVar20 + 1;
    puVar18 = puVar18 + 1;
  } while ((int)lVar20 < 6);
  puVar16 = &DAT_00ef2758;
  uVar21 = 0;
  dVar25 = 15.0;
  dVar24 = 0.2617993950843811;
  dVar35 = 1.3962633609771729;
  puVar18 = puVar16;
  do {
    uVar22 = (uint)uVar21;
    dVar27 = (double)DAT_00ef2788;
    dVar30 = (double)DAT_00764e20;
    uVar23 = *puVar18;
    *(undefined4 *)(uVar23 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(uVar23 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(uVar23 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(uVar23 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    iVar15 = ((uint)((LZCOUNT(-(uVar22 & 1)) << 0x3a) >> 0x3f) & 2) - 1;
    dVar30 = (double)(float)((double)(longlong)
                                     (int)(uVar22 + (((int)uVar22 >> 1) +
                                                    (uint)((int)uVar22 < 0 && (uVar21 & 1) != 0)) *
                                                    -2) * dVar41 -
                            (double)(float)((double)(float)(dVar30 * (double)(float)(dVar40 - dVar27
                                                                                    ) + dVar25) *
                                           dVar39));
    dVar43 = (double)(longlong)(int)(((uint)((longlong)(uVar21 - 2) >> 0x3f) & 0xfffffffe) + 1);
    dVar27 = (double)fastfunc::FastWrapRot(*(float *)(*puVar18 + 0x48),(float)(dVar43 * dVar38));
    *(float *)(*puVar18 + 0x48) = (float)dVar27;
    *(float *)(*puVar18 + 0x44) = (float)((double)DAT_00764e24 * dVar39);
    *(float *)(*puVar18 + 0x40) = (float)dVar30;
    fastfunc::FastEulerToMtx((ulonglong)*puVar18 + 0xc0,(ulonglong)*puVar18 + 0x40);
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xc0);
    fVar4 = *(float *)(param_1 + 200);
    fVar5 = *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_1 + 0x14);
    dVar42 = (double)DAT_00764e14;
    fVar7 = *(float *)(param_1 + 0x18);
    dVar30 = (double)DAT_00764e1c;
    fVar8 = *(float *)(param_1 + 0xd0);
    fVar9 = *(float *)(param_1 + 0xd4);
    uVar23 = *puVar18;
    fVar10 = *(float *)(uVar23 + 0xe4);
    fVar11 = *(float *)(uVar23 + 0xe0);
    fVar12 = *(float *)(uVar23 + 0xe8);
    dVar34 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar32 = (double)SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
    fVar1 = (float)(dVar36 / dVar34);
    dVar27 = dVar37;
    if (dVar37 - dVar34 < 0.0) {
      dVar27 = (double)(fVar4 * fVar1);
    }
    dVar28 = dVar37;
    if (dVar37 - dVar34 < 0.0) {
      dVar28 = (double)(fVar2 * fVar1);
    }
    dVar31 = dVar37;
    if (dVar37 - dVar34 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    if (dVar34 - dVar37 < 0.0) {
      dVar27 = (double)(fVar4 * fVar1);
    }
    if (dVar34 - dVar37 < 0.0) {
      dVar28 = (double)(fVar2 * fVar1);
    }
    if (dVar34 - dVar37 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    fVar1 = *(float *)(param_1 + 0xd8);
    if (dVar32 == dVar37) {
      uVar14 = *(undefined4 *)(uVar23 + 0xec);
      dVar34 = dVar37;
      dVar32 = dVar37;
      dVar33 = dVar37;
    }
    else {
      fVar2 = (float)((double)DAT_00764e18 / dVar32);
      uVar14 = *(undefined4 *)(uVar23 + 0xec);
      dVar33 = (double)(fVar11 * fVar2);
      dVar34 = (double)(fVar10 * fVar2);
      dVar32 = (double)(fVar12 * fVar2);
    }
    *(undefined4 *)(uVar23 + 0x1c) = uVar14;
    dVar29 = (double)SQRT(fVar1 * fVar1 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar2 = (float)((double)(float)(dVar43 * dVar30) / dVar29);
    dVar30 = dVar37;
    if (dVar37 - dVar29 < 0.0) {
      dVar30 = (double)(fVar1 * fVar2);
    }
    dVar43 = dVar37;
    if (dVar37 - dVar29 < 0.0) {
      dVar43 = (double)(fVar9 * fVar2);
    }
    dVar26 = dVar37;
    if (dVar37 - dVar29 < 0.0) {
      dVar26 = (double)(fVar8 * fVar2);
    }
    if (dVar29 - dVar37 < 0.0) {
      dVar30 = (double)(fVar1 * fVar2);
    }
    if (dVar29 - dVar37 < 0.0) {
      dVar43 = (double)(fVar9 * fVar2);
    }
    if (dVar29 - dVar37 < 0.0) {
      dVar26 = (double)(fVar8 * fVar2);
    }
    *(float *)(uVar23 + 0x18) = (float)(dVar42 + dVar27) + fVar7 + (float)(dVar32 + dVar30);
    *(float *)(uVar23 + 0x14) = (float)(dVar28 + (double)fVar6) + (float)(dVar34 + dVar43);
    *(float *)(uVar23 + 0x10) = (float)(dVar31 + (double)fVar5) + (float)(dVar33 + dVar26);
    dVar27 = (double)fastfunc::FastDiffRots
                               ((double)(float)((double)(longlong)iVar15 * dVar24),dVar35);
    fVar1 = DAT_00ef2790;
    if (iVar15 == -1) {
      fVar1 = DAT_00ef278c;
    }
    dVar27 = (double)fastfunc::FastWrapRot((float)(dVar27 * (double)fVar1),(float)dVar35);
    dVar27 = (double)fastfunc::FastWrapRot(*(float *)(*puVar18 + 0x40),(float)dVar27);
    *(float *)(*puVar18 + 0x40) = (float)dVar27;
    mobyfunc::UpdateMobyTransform((MobyInstance *)*puVar18);
    uVar21 = uVar21 + 1;
    puVar18 = puVar18 + 1;
  } while ((int)uVar21 < 4);
  uVar23 = 0;
  piVar17 = &DAT_00ef2768;
  dVar35 = -0.01745329238474369;
  do {
    uVar22 = *puVar16;
    fVar3 = *(float *)(uVar22 + 0xe4);
    fVar4 = *(float *)(uVar22 + 0xe0);
    fVar5 = *(float *)(uVar22 + 0xd4);
    fVar6 = *(float *)(uVar22 + 0xe8);
    fVar7 = *(float *)(uVar22 + 0xd0);
    fVar8 = *(float *)(uVar22 + 0xd8);
    dVar39 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
    dVar41 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5);
    iVar15 = *piVar17;
    fVar1 = (float)((double)DAT_00764e28 / dVar39);
    fVar2 = (float)((double)DAT_00764e2c / dVar41);
    dVar38 = dVar37;
    if (dVar37 - dVar39 < 0.0) {
      dVar38 = (double)(fVar4 * fVar1);
    }
    dVar24 = dVar37;
    if (dVar37 - dVar39 < 0.0) {
      dVar24 = (double)(fVar3 * fVar1);
    }
    dVar25 = dVar37;
    if (dVar37 - dVar39 < 0.0) {
      dVar25 = (double)(fVar6 * fVar1);
    }
    if (dVar39 - dVar37 < 0.0) {
      dVar38 = (double)(fVar4 * fVar1);
    }
    if (dVar39 - dVar37 < 0.0) {
      dVar25 = (double)(fVar6 * fVar1);
    }
    if (dVar39 - dVar37 < 0.0) {
      dVar24 = (double)(fVar3 * fVar1);
    }
    dVar39 = dVar37;
    if (dVar37 - dVar41 < 0.0) {
      dVar39 = (double)(fVar7 * fVar2);
    }
    dVar27 = dVar37;
    if (dVar37 - dVar41 < 0.0) {
      dVar27 = (double)(fVar8 * fVar2);
    }
    dVar30 = dVar37;
    if (dVar37 - dVar41 < 0.0) {
      dVar30 = (double)(fVar5 * fVar2);
    }
    if (dVar41 - dVar37 < 0.0) {
      dVar39 = (double)(fVar7 * fVar2);
    }
    if (dVar41 - dVar37 < 0.0) {
      dVar27 = (double)(fVar8 * fVar2);
    }
    if (dVar41 - dVar37 < 0.0) {
      dVar30 = (double)(fVar5 * fVar2);
    }
    *(float *)(iVar15 + 0x10) = *(float *)(uVar22 + 0x10) + (float)(dVar38 + dVar39);
    *(float *)(iVar15 + 0x14) = *(float *)(uVar22 + 0x14) + (float)(dVar24 + dVar30);
    *(float *)(iVar15 + 0x18) = *(float *)(uVar22 + 0x18) + (float)(dVar25 + dVar27);
    *(undefined4 *)(iVar15 + 0x1c) = *(undefined4 *)(uVar22 + 0x1c);
    uVar22 = *puVar16;
    iVar15 = *piVar17;
    *(undefined4 *)(iVar15 + 0x40) = *(undefined4 *)(uVar22 + 0x40);
    *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(uVar22 + 0x44);
    *(undefined4 *)(iVar15 + 0x48) = *(undefined4 *)(uVar22 + 0x48);
    *(undefined4 *)(iVar15 + 0x4c) = *(undefined4 *)(uVar22 + 0x4c);
    fVar1 = DAT_00ef2798;
    if ((uVar23 & 1) != 0) {
      fVar1 = DAT_00ef2794;
    }
    dVar38 = (double)fastfunc::FastWrapRot
                               (*(float *)(*piVar17 + 0x44),
                                (float)((double)DAT_00764e30 * dVar35) * fVar1);
    *(float *)(*piVar17 + 0x44) = (float)dVar38;
    mobyfunc::UpdateMobyTransform((MobyInstance *)*piVar17);
    uVar23 = uVar23 + 1;
    puVar16 = puVar16 + 1;
    piVar17 = piVar17 + 1;
  } while ((int)uVar23 < 4);
  piVar17 = &DAT_00ef2748;
  dVar41 = 7.5;
  dVar39 = 3.75;
  dVar38 = 13.25;
  dVar35 = 20.0;
  do {
    fVar3 = DAT_00764e34;
    fVar1 = *(float *)(param_1 + 0xc4);
    fVar2 = *(float *)(param_1 + 0xc0);
    dVar25 = (double)SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                          fVar2 * fVar2 + fVar1 * fVar1);
    dVar24 = (double)(float)((double)(float)(dVar40 - (double)DAT_00ef279c) * dVar38 +
                            (double)(float)((double)(longlong)(int)((uint)lVar19 & 1) * dVar41 +
                                           dVar39));
    if (dVar35 - dVar24 < 0.0) {
      dVar24 = dVar35;
    }
    if (dVar25 == dVar37) {
      uVar14 = *(undefined4 *)(param_1 + 0xcc);
      dVar24 = dVar37;
      dVar25 = dVar37;
    }
    else {
      fVar4 = (float)((double)(float)(dVar24 * (double)(longlong)
                                                       (int)(((uint)(lVar19 + -2 >> 0x3f) &
                                                             0xfffffffe) + 1) + dVar36) / dVar25);
      dVar24 = (double)(fVar2 * fVar4);
      uVar14 = *(undefined4 *)(param_1 + 0xcc);
      dVar25 = (double)(fVar1 * fVar4);
    }
    iVar15 = *piVar17;
    *(float *)(iVar15 + 0x10) = (float)(dVar24 + (double)*(float *)(param_1 + 0x10));
    *(float *)(iVar15 + 0x14) = (float)(dVar25 + (double)*(float *)(param_1 + 0x14));
    fVar1 = *(float *)(param_1 + 0x18);
    *(undefined4 *)(iVar15 + 0x1c) = uVar14;
    *(float *)(iVar15 + 0x18) = fVar3 + fVar1;
    iVar15 = *piVar17;
    *(undefined4 *)(iVar15 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar15 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar15 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    mobyfunc::UpdateMobyTransform((MobyInstance *)*piVar17);
    lVar19 = lVar19 + 1;
    piVar17 = piVar17 + 1;
  } while ((int)lVar19 < 4);
  return;
}



//==== 001e1b00  ns=mobyupdate_unsorted  size=0xeb4
// sig: undefined UpdateMoby_1156(MobyInstance * moby)
// callers(0): 
// callees(12): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000a0c38 hero::Hero_Warp; 000efa28 mobyfunc::CreateMoby; 000ffb70 mobyutil::GetGroundZ; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0015d12c sound::PlayMobySound; 001e1120 mobyupdate_helpers::M1156_001e1120; 001eebe4 mobyupdate_helpers::M1180_001eebe4
// strings: 001e1af4: '?fff@' (raw)

/* Moby 1156 */

ulonglong mobyupdate_unsorted::UpdateMoby_1156(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  Cuboid *pCVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  MobyInstance *pMVar15;
  longlong lVar14;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong unaff_r26;
  int *piVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  float fVar26;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar22 = uVar12 - 0x120;
  puVar9 = (ulonglong *)lVar22;
  *puVar9 = uVar12;
  puVar9[0x26] = in_LR;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x21] = unaff_r31;
  puVar9[0x20] = unaff_r30;
  bVar1 = moby->state;
  uVar13 = (ulonglong)bVar1;
  piVar20 = (int *)moby->pVar;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  puVar9[0x1d] = unaff_r27;
  puVar9[0x1c] = unaff_r26;
  if (bVar1 == 4) {
    mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,(float *)(piVar20 + 3));
    uVar13 = (ulonglong)(uint)piVar20[3];
    boot::SceneScreenFade = (float)piVar20[3];
    if (piVar20[3] == 0) {
      uVar13 = 5;
      moby->state = '\x05';
    }
  }
  else if (bVar1 == 3) {
    dVar23 = 1.0;
    if ((int)(((uint)((int)DAT_00ef2788 >> 0x1f) >> 1 ^ (uint)DAT_00ef2788) -
             ((int)DAT_00ef2788 >> 0x1f)) < 0x3f800000) {
      mobyutil::OrganicDelt
                (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime,&DAT_00ef2788,0x720000,
                 (float *)&DAT_00ef27a4);
    }
    dVar24 = (double)DAT_00ef2788;
    dVar25 = 0.8999999761581421;
    if ((0.8999999761581421 < dVar24) && (DAT_00ef278c == 0.0)) {
      sound::PlayMobySound(1,0,moby);
      dVar24 = (double)DAT_00ef2788;
    }
    if ((dVar25 < dVar24) &&
       ((int)(((uint)((int)DAT_00ef278c >> 0x1f) >> 1 ^ (uint)DAT_00ef278c) -
             ((int)DAT_00ef278c >> 0x1f)) < 0x3f800000)) {
      mobyutil::OrganicDelt
                ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,mobyutil::g_FrameTime * 2.0,
                 &DAT_00ef278c,0x720000,(float *)&DAT_00ef27a8);
    }
    dVar24 = (double)DAT_00ef278c;
    dVar25 = 0.5;
    if ((0x3f000000 <
         (int)(((uint)((int)DAT_00ef278c >> 0x1f) >> 1 ^ (uint)DAT_00ef278c) -
              ((int)DAT_00ef278c >> 0x1f))) && (DAT_00ef2790 == 0)) {
      sound::PlayMobySound(1,0,moby);
      dVar24 = (double)DAT_00ef278c;
    }
    if ((dVar25 < dVar24) &&
       ((int)(((uint)((int)DAT_00ef2790 >> 0x1f) >> 1 ^ DAT_00ef2790) - ((int)DAT_00ef2790 >> 0x1f))
        < 0x3f800000)) {
      mobyutil::OrganicDelt
                ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,mobyutil::g_FrameTime * 2.0,
                 (float *)&DAT_00ef2790,0x720000,(float *)&DAT_00ef27ac);
      dVar24 = (double)DAT_00ef278c;
    }
    if ((dVar23 <= dVar24) &&
       ((int)(((uint)((int)DAT_00ef2794 >> 0x1f) >> 1 ^ DAT_00ef2794) - ((int)DAT_00ef2794 >> 0x1f))
        < 0x3f800000)) {
      fVar26 = mobyutil::OrganicDelt
                         ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,
                          mobyutil::g_FrameTime * 2.0,(float *)&DAT_00ef2794,0x720000,
                          (float *)&DAT_00ef27b0);
      dVar24 = (double)fVar26;
    }
    if ((0x3f7fffff <
         (int)(((uint)((int)DAT_00ef2790 >> 0x1f) >> 1 ^ DAT_00ef2790) - ((int)DAT_00ef2790 >> 0x1f)
              )) &&
       ((int)(((uint)((int)DAT_00ef2798 >> 0x1f) >> 1 ^ DAT_00ef2798) - ((int)DAT_00ef2798 >> 0x1f))
        < 0x3f800000)) {
      fVar26 = mobyutil::OrganicDelt
                         ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,
                          mobyutil::g_FrameTime * 2.0,(float *)&DAT_00ef2798,0x720000,
                          (float *)&DAT_00ef27b4);
      dVar24 = (double)fVar26;
    }
    if ((0x3f666666 <
         (int)(((uint)((int)DAT_00ef2798 >> 0x1f) >> 1 ^ DAT_00ef2798) - ((int)DAT_00ef2798 >> 0x1f)
              )) &&
       ((int)(((uint)((int)DAT_00ef279c >> 0x1f) >> 1 ^ DAT_00ef279c) - ((int)DAT_00ef279c >> 0x1f))
        < 0x3f800000)) {
      fVar26 = mobyutil::OrganicDelt
                         ((float)dVar23,DAT_0071f418 * 2.0,DAT_0071f418 * 4.0,
                          mobyutil::g_FrameTime * 2.0,(float *)&DAT_00ef279c,0x720000,
                          (float *)&DAT_00ef27b8);
      dVar24 = (double)fVar26;
    }
    mobyupdate_helpers::M1156_001e1120(dVar24,moby);
    if ((MiscLevelFlags.field86_0x56 != 0) && (g_buttonsPressedThisFrame != 0)) {
      moby->setByGroup = '\x01';
    }
    if (((int)(((uint)((int)DAT_00ef279c >> 0x1f) >> 1 ^ DAT_00ef279c) - ((int)DAT_00ef279c >> 0x1f)
              ) < 0x3f800000) && (moby->setByGroup == '\0')) {
      mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,(float *)(piVar20 + 3));
    }
    else {
      mobyutil::Delt((float)dVar23,mobyutil::g_FrameTime * 4.0,(float *)(piVar20 + 3));
    }
    boot::SceneScreenFade = (float)piVar20[3];
    mobyutil::OrganicDelt
              ((float)dVar23,DAT_0071f418 * 0.2,DAT_0071f418 * 0.2,mobyutil::g_FrameTime * 0.2,
               &DAT_00ef27a0,0x720000,(float *)&DAT_00ef27bc);
    fVar11 = DAT_00ef27a0;
    pCVar10 = Cuboids;
    iVar16 = piVar20[1];
    iVar7 = piVar20[2];
    fVar26 = Cuboids[iVar16].pos.x;
    fVar2 = Cuboids[iVar7].pos.y;
    fVar6 = Cuboids[iVar16].pos.y;
    fVar3 = Cuboids[iVar7].pos.z;
    fVar4 = Cuboids[iVar16].pos.z;
    fVar5 = Cuboids[iVar7].pos.w;
    *(float *)(puVar9 + 0x12) = DAT_00ef27a0 * (Cuboids[iVar7].pos.x - fVar26) + fVar26;
    *(float *)((int)puVar9 + 0x94) = fVar11 * (fVar2 - fVar6) + pCVar10[iVar16].pos.y;
    fVar26 = pCVar10[iVar16].pos.z;
    *(float *)((int)puVar9 + 0x9c) = fVar5;
    *(float *)(puVar9 + 0x13) = fVar11 * (fVar3 - fVar4) + fVar26;
    fVar26 = pCVar10[iVar16].rot.x;
    fVar2 = pCVar10[iVar7].rot.y;
    fVar6 = pCVar10[iVar16].rot.y;
    fVar3 = pCVar10[iVar7].rot.z;
    fVar4 = pCVar10[iVar16].rot.z;
    fVar5 = pCVar10[iVar7].rot.w;
    *(float *)(puVar9 + 0x14) = fVar11 * (pCVar10[iVar7].rot.x - fVar26) + fVar26;
    *(float *)((int)puVar9 + 0xa4) = fVar11 * (fVar2 - fVar6) + pCVar10[iVar16].rot.y;
    fVar26 = pCVar10[iVar16].rot.z;
    *(float *)((int)puVar9 + 0xac) = fVar5;
    *(float *)(puVar9 + 0x15) = fVar11 * (fVar3 - fVar4) + fVar26;
    camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar9 + 0x12));
    camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar9 + 0x14));
    uVar8 = piVar20[3] >> 0x1f;
    uVar13 = (ulonglong)(uVar8 >> 1 ^ piVar20[3]) - (longlong)(int)uVar8;
    if (0x3f7fffff < (int)uVar13) {
      DAT_00ef2788 = 1.0;
      DAT_00ef2798 = 0x3f800000;
      DAT_00ef279c = 0x3f800000;
      DAT_00ef278c = 1.0;
      DAT_00ef2790 = 0x3f800000;
      DAT_00ef2794 = 0x3f800000;
      mobyupdate_helpers::M1156_001e1120(moby);
      moby->state = '\x04';
      camera::camera5::Camera_DeactivateMobyDrivenCam(3);
      hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,1);
      uVar13 = 1;
      MiscLevelFlags.field86_0x56 = 1;
    }
  }
  else if (bVar1 == 2) {
    mobyutil::Delt(1.0,mobyutil::g_FrameTime * 4.0,(float *)(piVar20 + 3));
    boot::SceneScreenFade = (float)piVar20[3];
    uVar8 = piVar20[3] >> 0x1f;
    uVar13 = (ulonglong)(uVar8 >> 1 ^ piVar20[3]) - (longlong)(int)uVar8;
    if (0x3f7fffff < (int)uVar13) {
      moby->state = '\x03';
      pMVar15 = MobyInstance;
      iVar16 = *piVar20;
      *(f32 *)(puVar9 + 0xe) = MobyInstance[iVar16].pos.x;
      *(f32 *)((int)puVar9 + 0x74) = pMVar15[iVar16].pos.y;
      fVar26 = pMVar15[iVar16].pos.z;
      *(float *)(puVar9 + 0xf) = fVar26;
      *(f32 *)((int)puVar9 + 0x7c) = pMVar15[iVar16].pos.w;
      *(float *)(puVar9 + 0xf) = fVar26 + 5.0;
      dVar23 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar12 - 0xb0,0);
      fVar26 = (moby->pos).y;
      fVar6 = (moby->pos).x - *(float *)(puVar9 + 0xe);
      *(float *)(puVar9 + 0xf) = (float)dVar23;
      fVar26 = fVar26 - *(float *)((int)puVar9 + 0x74);
      fVar2 = 0.0;
      fVar3 = ABS(fVar6);
      fVar4 = ABS(fVar26);
      *(float *)(puVar9 + 0x16) = fVar6;
      *(float *)((int)puVar9 + 0xb4) = fVar26;
      *(float *)(puVar9 + 0x17) = fVar3 - fVar4;
      *(undefined4 *)((int)puVar9 + 0x8c) = 0;
      *(undefined4 *)((int)puVar9 + 0x84) = 0;
      *(undefined4 *)(puVar9 + 0x10) = 0;
      uVar13 = (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1d) & 4;
      fVar26 = ABS(*(float *)(puVar9 + 0x16));
      if (*(float *)(puVar9 + 0x17) - 0.0 < 0.0) {
        fVar26 = fVar4;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar4 = ABS(*(float *)((int)puVar9 + 0xb4));
      if (*(float *)(puVar9 + 0x17) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      if (0.0 < fVar26) {
        lVar14 = uVar12 - 0x110;
        lVar17 = uVar12 - 100;
        lVar19 = uVar12 - 0x54;
        lVar21 = 2;
        fVar26 = (fVar4 - fVar26) / (fVar4 + fVar26);
        fVar4 = fVar26 * fVar26;
        *(float *)(puVar9 + 0x19) = fVar26;
        *(float *)(puVar9 + 0x18) = fVar26;
        *(float *)((int)puVar9 + 0xc4) = fVar26;
        *(float *)((int)puVar9 + 0xbc) = fVar26;
        fVar26 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4;
        *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar26;
        *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar26 * fVar4;
        do {
          *(float *)((int)lVar14 + 0xbc) = *(float *)((int)lVar14 + 0xac) * fVar26 * fVar26;
          iVar16 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar16 + 4) * fVar26 * fVar26;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar12 - 100;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar22;
        lVar17 = lVar19;
        do {
          fVar26 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xbc) = *(float *)((int)lVar14 + 0xbc) * fVar26;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar14 = 2;
        do {
          iVar16 = (int)lVar22;
          iVar7 = (int)lVar19;
          lVar22 = lVar22 + 0x10;
          lVar19 = lVar19 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar16 + 0xbc) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8)
                  + *(float *)(iVar7 + 0xc);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
      }
      *(float *)(puVar9 + 0x11) = fVar2;
      hero::Hero_Warp((float *)(puVar9 + 0xe),(float *)(puVar9 + 0x10),0x72,1);
      camera::SetCameraPosition(&Cuboids[piVar20[1]].pos,&Cuboids[piVar20[2]].rot,1,0,0);
      piVar20 = &DAT_00ef2730;
      lVar22 = 6;
      do {
        *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) & 0xfffe;
        *(undefined1 *)(*piVar20 + 0x31) = 1;
        iVar16 = *piVar20;
        piVar20 = piVar20 + 1;
        *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(*(int *)(iVar16 + 0x24) + 0x10);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      piVar20 = &DAT_00ef2758;
      lVar22 = 4;
      do {
        *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) & 0xfffe;
        *(undefined1 *)(*piVar20 + 0x31) = 1;
        iVar16 = *piVar20;
        piVar20 = piVar20 + 1;
        *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(*(int *)(iVar16 + 0x24) + 0x10);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      piVar20 = &DAT_00ef2768;
      do {
        *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) & 0xfffe;
        *(undefined1 *)(*piVar20 + 0x31) = 1;
        iVar16 = *piVar20;
        piVar20 = piVar20 + 1;
        *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(*(int *)(iVar16 + 0x24) + 0x10);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      piVar20 = &DAT_00ef2748;
      do {
        *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) & 0xfffe;
        *(undefined1 *)(*piVar20 + 0x31) = 1;
        iVar16 = *piVar20;
        piVar20 = piVar20 + 1;
        *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(*(int *)(iVar16 + 0x24) + 0x10);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      iVar16 = sound::PlayMobySound(0,0,moby);
      uVar13 = (ulonglong)iVar16;
    }
  }
  else if (bVar1 == 1) {
    if ((*piVar20 != -1) &&
       (uVar13 = mobyupdate_helpers::M1180_001eebe4(MobyInstance + *piVar20), (int)uVar13 != 0)) {
      uVar13 = 2;
      moby->state = '\x02';
    }
  }
  else if (bVar1 == 0) {
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | DISABLED;
    DAT_00ef2788 = 0.0;
    DAT_00ef278c = 0.0;
    DAT_00ef2790 = 0;
    DAT_00ef2794 = 0;
    DAT_00ef2798 = 0;
    DAT_00ef279c = 0;
    iVar16 = 0;
    DAT_00ef27a0 = 0.0;
    piVar20 = &DAT_00ef2730;
    moby->setByGroup = '\0';
    do {
      pMVar15 = mobyfunc::CreateMoby(0x480);
      *piVar20 = (int)pMVar15;
      iVar16 = iVar16 + 1;
      pMVar15->drawDistance = 0x40;
      *(undefined1 *)(*piVar20 + 0x31) = 1;
      *(undefined8 *)(*piVar20 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 1;
      *(undefined1 *)(*piVar20 + 0x31) = 0;
      iVar7 = *piVar20;
      piVar20 = piVar20 + 1;
      *(undefined4 *)(iVar7 + 0x94) = 0;
    } while (iVar16 < 6);
    iVar16 = 0;
    piVar20 = &DAT_00ef2758;
    do {
      pMVar15 = mobyfunc::CreateMoby(0x481);
      *piVar20 = (int)pMVar15;
      iVar16 = iVar16 + 1;
      pMVar15->drawDistance = 0x40;
      *(undefined1 *)(*piVar20 + 0x31) = 1;
      *(undefined8 *)(*piVar20 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 1;
      *(undefined1 *)(*piVar20 + 0x31) = 0;
      iVar7 = *piVar20;
      piVar20 = piVar20 + 1;
      *(undefined4 *)(iVar7 + 0x94) = 0;
    } while (iVar16 < 4);
    iVar16 = 0;
    piVar20 = &DAT_00ef2768;
    do {
      pMVar15 = mobyfunc::CreateMoby(0x482);
      *piVar20 = (int)pMVar15;
      iVar16 = iVar16 + 1;
      pMVar15->drawDistance = 0x40;
      *(undefined1 *)(*piVar20 + 0x31) = 1;
      *(undefined8 *)(*piVar20 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 1;
      *(undefined1 *)(*piVar20 + 0x31) = 0;
      iVar7 = *piVar20;
      piVar20 = piVar20 + 1;
      *(undefined4 *)(iVar7 + 0x94) = 0;
    } while (iVar16 < 4);
    iVar16 = 0;
    piVar20 = &DAT_00ef2748;
    do {
      pMVar15 = mobyfunc::CreateMoby(0x483);
      *piVar20 = (int)pMVar15;
      pMVar15->drawDistance = 0x40;
      iVar16 = iVar16 + 1;
      *(undefined1 *)(*piVar20 + 0x31) = 1;
      *(undefined8 *)(*piVar20 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar7 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar7 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar7 + 0x1c) = (moby->pos).w;
      iVar7 = *piVar20;
      *(f32 *)(iVar7 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar7 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar7 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar7 + 0x4c) = (moby->rotation).w;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 0x20;
      iVar7 = *(int *)(*piVar20 + 0x78);
      *(int *)(iVar7 + 8) = iVar7 + 0x20;
      *(uint *)(iVar7 + 0x5c) = *(uint *)(iVar7 + 0x5c) | 1;
      *(ushort *)(*piVar20 + 0x34) = *(ushort *)(*piVar20 + 0x34) | 1;
      *(undefined1 *)(*piVar20 + 0x31) = 0;
      iVar7 = *piVar20;
      piVar20 = piVar20 + 1;
      *(undefined4 *)(iVar7 + 0x94) = 0;
    } while (iVar16 < 4);
    uVar13 = mobyupdate_helpers::M1156_001e1120(moby);
    moby->state = '\x01';
  }
  return uVar13;
}



//==== 001e29b4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1157_001e29b4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1157_001e29b4(void)

{
  DAT_00764e84 = 0x10000;
  return;
}



//==== 001e29f8  ns=mobyupdate_helpers  size=0x488
// sig: undefined M1157_001e29f8(void)
// callers(1): 001e2e88 mobyupdate_unsorted::UpdateMoby_1157
// callees(4): 000f31a8 mobyfunc::UpdateMobyTransform; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1157_001e29f8(int param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
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
  double dVar36;
  double dVar37;
  float local_e0;
  
  fVar3 = *(float *)(param_1 + 0xc4);
  fVar4 = *(float *)(param_1 + 0xd4);
  fVar5 = *(float *)(param_1 + 0xc0);
  fVar6 = *(float *)(param_1 + 0xd0);
  fVar7 = *(float *)(param_1 + 200);
  fVar8 = *(float *)(param_1 + 0xd8);
  fVar10 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
  dVar36 = 0.0;
  dVar31 = -90.0;
  fVar11 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar4 * fVar4);
  puVar14 = *(uint **)(param_1 + 0x78);
  fVar12 = DAT_00764ea8 / fVar10;
  dVar30 = -(double)((float)puVar14[0x1b] * 180.0 - 90.0);
  fVar13 = DAT_00764eac / fVar11;
  local_e0 = -(((float)puVar14[0x1b] - 0.5) * 180.0 - 90.0);
  dVar26 = dVar36;
  if (0.0 - fVar10 < 0.0) {
    dVar26 = (double)(fVar3 * fVar12);
  }
  dVar18 = dVar36;
  if (0.0 - fVar10 < 0.0) {
    dVar18 = (double)(fVar5 * fVar12);
  }
  dVar25 = dVar36;
  if (0.0 - fVar10 < 0.0) {
    dVar25 = (double)(fVar7 * fVar12);
  }
  if (fVar10 - 0.0 < 0.0) {
    dVar26 = (double)(fVar3 * fVar12);
  }
  if (fVar10 - 0.0 < 0.0) {
    dVar18 = (double)(fVar5 * fVar12);
  }
  if (fVar10 - 0.0 < 0.0) {
    dVar25 = (double)(fVar7 * fVar12);
  }
  dVar21 = dVar36;
  if (0.0 - fVar11 < 0.0) {
    dVar21 = (double)(fVar8 * fVar13);
  }
  dVar23 = dVar36;
  if (0.0 - fVar11 < 0.0) {
    dVar23 = (double)(fVar4 * fVar13);
  }
  dVar24 = dVar36;
  if (0.0 - fVar11 < 0.0) {
    dVar24 = (double)(fVar6 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar21 = (double)(fVar8 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar23 = (double)(fVar4 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar24 = (double)(fVar6 * fVar13);
  }
  if (local_e0 <= 90.0) {
    if (local_e0 < 0.0) {
      local_e0 = 0.0;
    }
  }
  else {
    local_e0 = 90.0;
  }
  uVar17 = 0;
  do {
    iVar16 = 0;
    dVar27 = 2.5;
    dVar28 = 0.2617993950843811;
    dVar32 = 1.5707963705062866;
    dVar33 = 0.01745329238474369;
    dVar34 = -0.7853981852531433;
    dVar29 = 3.1415927410125732;
    dVar35 = 0.7853981852531433;
    puVar15 = puVar14;
    do {
      dVar20 = (double)local_e0;
      if ((1 >= (int)uVar17) && (dVar20 = dVar30, dVar30 - dVar31 < 0.0)) {
        dVar20 = dVar31;
      }
      if (1 < (int)uVar17) {
        uVar9 = *puVar15;
        *(float *)(uVar9 + 0x10) = (float)((double)*(float *)(param_1 + 0x10) - dVar18);
        *(float *)(uVar9 + 0x14) = (float)((double)*(float *)(param_1 + 0x14) - dVar26);
        *(float *)(uVar9 + 0x18) = (float)((double)*(float *)(param_1 + 0x18) - dVar25);
        *(undefined4 *)(uVar9 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      }
      else {
        uVar9 = *puVar15;
        *(float *)(uVar9 + 0x10) = (float)((double)*(float *)(param_1 + 0x10) + dVar18);
        *(float *)(uVar9 + 0x14) = (float)((double)*(float *)(param_1 + 0x14) + dVar26);
        *(float *)(uVar9 + 0x18) = (float)((double)*(float *)(param_1 + 0x18) + dVar25);
        *(undefined4 *)(uVar9 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      }
      dVar37 = (double)(float)((double)(float)((double)(longlong)iVar16 - dVar27) * dVar28);
      if ((uVar17 & 1) == 0) {
        dVar19 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),(float)dVar29);
        *(float *)(*puVar15 + 0x48) = (float)dVar19;
        dVar20 = (double)fastfunc::FastDiffRots(dVar37,(double)(float)(dVar20 * dVar33));
        if (dVar35 < dVar20) {
          dVar20 = (double)(float)(dVar20 - dVar32);
        }
      }
      else {
        dVar19 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),(float)dVar36);
        *(float *)(*puVar15 + 0x48) = (float)dVar19;
        dVar20 = (double)fastfunc::FastWrapRot((float)dVar37,(float)(dVar20 * dVar33));
        if (dVar20 < dVar34) {
          dVar20 = (double)(float)(dVar20 + dVar32);
        }
      }
      dVar37 = dVar35;
      if ((dVar20 <= dVar35) && (dVar37 = dVar20, dVar20 < dVar34)) {
        dVar37 = dVar34;
      }
      dVar20 = (double)fastfunc::FastWrapRot(*(float *)(*puVar15 + 0x48),(float)dVar37);
      *(float *)(*puVar15 + 0x48) = (float)dVar20;
      fastfunc::FastEulerToMtx((ulonglong)*puVar15 + 0xc0,(ulonglong)*puVar15 + 0x40);
      uVar9 = *puVar15;
      fVar4 = *(float *)(uVar9 + 0xd4);
      fVar5 = *(float *)(uVar9 + 0xd0);
      fVar6 = *(float *)(uVar9 + 0xd8);
      dVar37 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      fVar3 = (float)(-(double)DAT_00764eb0 / dVar37);
      dVar20 = dVar36;
      if (dVar36 - dVar37 < 0.0) {
        dVar20 = (double)(fVar6 * fVar3);
      }
      dVar19 = dVar36;
      if (dVar36 - dVar37 < 0.0) {
        dVar19 = (double)(fVar4 * fVar3);
      }
      dVar22 = dVar36;
      if (dVar36 - dVar37 < 0.0) {
        dVar22 = (double)(fVar5 * fVar3);
      }
      if (dVar37 - dVar36 < 0.0) {
        dVar20 = (double)(fVar6 * fVar3);
      }
      if (dVar37 - dVar36 < 0.0) {
        dVar19 = (double)(fVar4 * fVar3);
      }
      if (dVar37 - dVar36 < 0.0) {
        dVar22 = (double)(fVar5 * fVar3);
      }
      dVar1 = dVar20 - dVar21;
      dVar2 = dVar19 - dVar23;
      dVar37 = dVar22 - dVar24;
      if ((uVar17 & 1) != 0) {
        dVar37 = dVar22 + dVar24;
        dVar2 = dVar19 + dVar23;
        dVar1 = dVar20 + dVar21;
      }
      *(float *)(uVar9 + 0x10) = *(float *)(uVar9 + 0x10) + (float)dVar37;
      *(float *)(uVar9 + 0x14) = *(float *)(uVar9 + 0x14) + (float)dVar2;
      *(float *)(uVar9 + 0x18) = *(float *)(uVar9 + 0x18) + (float)dVar1;
      mobyfunc::UpdateMobyTransform((MobyInstance *)*puVar15);
      iVar16 = iVar16 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar16 < 6);
    uVar17 = uVar17 + 1;
    puVar14 = puVar14 + 6;
  } while ((int)uVar17 < 4);
  return;
}



//==== 001e2e88  ns=mobyupdate_unsorted  size=0x604
// sig: undefined UpdateMoby_1157(MobyInstance * moby)
// callers(0): 
// callees(12): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000a0c38 hero::Hero_Warp; 000efa28 mobyfunc::CreateMoby; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0015d12c sound::PlayMobySound; 001e29f8 mobyupdate_helpers::M1157_001e29f8; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 1157 */

void mobyupdate_unsorted::UpdateMoby_1157(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  double dVar11;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  
  uVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  if (uVar1 != '\x05') {
    if (uVar1 == '\x04') {
      dVar11 = 1.0;
      iVar7 = piVar3[0x1e];
      mobyutil::Delt(1.0,(float)(1.0 / (double)(longlong)(animationSpeed * 20.5)),
                     (float *)(piVar3 + 0x1e));
      uVar5 = piVar3[0x1e];
      boot::SceneScreenFade = (float)(dVar11 - ABS((double)(float)piVar3[0x1e]));
      if ((iVar7 < 0) && (-1 < (int)uVar5)) {
        hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,1);
        camera::camera5::Camera_DeactivateMobyDrivenCam(3);
      }
      else if (0x3f7fffff < (int)(((uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5) - ((int)uVar5 >> 0x1f)))
      {
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      piVar3[0x1d] = piVar3[0x1b];
      mobyutil::OrganicDelt
                (1.0,DAT_00764eb8 * DAT_0071f418,DAT_00764ebc * DAT_0071f418,
                 DAT_00764ec0 * mobyutil::g_FrameTime,(float *)(piVar3 + 0x1b),0x720000,
                 (float *)(piVar3 + 0x1c));
      iVar7 = piVar3[0x19];
      iVar8 = piVar3[0x1a];
      fVar2 = (float)piVar3[0x1b];
      local_70 = Cuboids[iVar7].pos.x;
      local_64 = Cuboids[iVar8].pos.w;
      local_70 = fVar2 * (Cuboids[iVar8].pos.x - local_70) + local_70;
      local_6c = fVar2 * (Cuboids[iVar8].pos.y - Cuboids[iVar7].pos.y) + Cuboids[iVar7].pos.y;
      local_68 = fVar2 * (Cuboids[iVar8].pos.z - Cuboids[iVar7].pos.z) + Cuboids[iVar7].pos.z;
      local_54 = 0;
      local_58 = 0.0;
      local_5c = 0.0;
      local_60 = 0.0;
      dVar11 = (double)fastfunc::FastDiffRots
                                 ((double)Cuboids[iVar8].rot.x,(double)Cuboids[iVar7].rot.x);
      local_60 = (float)(dVar11 * (double)(float)piVar3[0x1b]);
      dVar11 = (double)fastfunc::FastWrapRot(Cuboids[piVar3[0x19]].rot.x,local_60);
      local_60 = (float)dVar11;
      dVar11 = (double)fastfunc::FastDiffRots
                                 ((double)Cuboids[piVar3[0x1a]].rot.y,
                                  (double)Cuboids[piVar3[0x19]].rot.y);
      local_5c = (float)(dVar11 * (double)(float)piVar3[0x1b]);
      dVar11 = (double)fastfunc::FastWrapRot(Cuboids[piVar3[0x19]].rot.y,local_5c);
      local_5c = (float)dVar11;
      dVar11 = (double)fastfunc::FastDiffRots
                                 ((double)Cuboids[piVar3[0x1a]].rot.z,
                                  (double)Cuboids[piVar3[0x19]].rot.z);
      local_58 = (float)(dVar11 * (double)(float)piVar3[0x1b]);
      dVar11 = (double)fastfunc::FastWrapRot(Cuboids[piVar3[0x19]].rot.z,local_58);
      local_58 = (float)dVar11;
      camera::camera5::Camera_SetMobyDrivenTargetPos(&local_70);
      camera::camera5::Camera_SetMobyDrivenTargetRot(&local_60);
      uVar5 = piVar3[0x1b] >> 0x1f;
      if (0x3f7fffff < (int)((uVar5 >> 1 ^ piVar3[0x1b]) - uVar5)) {
        moby->state = '\x04';
        piVar3[0x1e] = -0x40800000;
      }
    }
    else if (uVar1 == '\x02') {
      dVar11 = 1.0;
      iVar7 = piVar3[0x1e];
      mobyutil::Delt(1.0,(float)(1.0 / (double)(longlong)(animationSpeed * 20.5)),
                     (float *)(piVar3 + 0x1e));
      uVar5 = piVar3[0x1e];
      boot::SceneScreenFade = (float)(dVar11 - ABS((double)(float)piVar3[0x1e]));
      if ((iVar7 < 0) && (-1 < (int)uVar5)) {
        hero::Hero_Warp(&MobyInstance[piVar3[0x18]].pos.x,&MobyInstance[piVar3[0x18]].rotation.x,
                        0x72,1);
        camera::SetCameraPosition(&Cuboids[piVar3[0x19]].pos,&Cuboids[piVar3[0x19]].rot,1,0,0);
      }
      else if (0x3f7fffff < (int)(((uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5) - ((int)uVar5 >> 0x1f)))
      {
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      if (MobyInstance[piVar3[0x18]].setByGroup == '\x01') {
        moby->state = '\x02';
        piVar3[0x1e] = -0x40800000;
        DAT_00ef27c4 = 0;
        sound::PlayMobySound(0,0,moby);
      }
      else if (MobyInstance[piVar3[0x18]].setByGroup == '\x02') {
        piVar3[0x1b] = 0x3f800000;
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\0') {
      iVar7 = 0;
      piVar10 = piVar3;
      do {
        iVar8 = 0;
        piVar9 = piVar10;
        do {
          pMVar6 = mobyfunc::CreateMoby(0x4b7);
          *piVar9 = (int)pMVar6;
          iVar8 = iVar8 + 1;
          pMVar6->drawDistance = 0x40;
          *(undefined1 *)(*piVar9 + 0x31) = 1;
          *(undefined8 *)(*piVar9 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
          *(MobyModeBit *)(*piVar9 + 0x34) = moby->modeBits;
          iVar4 = *piVar9;
          *(f32 *)(iVar4 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar4 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar4 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar4 + 0x1c) = (moby->pos).w;
          iVar4 = *piVar9;
          piVar9 = piVar9 + 1;
          *(f32 *)(iVar4 + 0x40) = (moby->rotation).x;
          *(f32 *)(iVar4 + 0x44) = (moby->rotation).y;
          *(f32 *)(iVar4 + 0x48) = (moby->rotation).z;
          *(f32 *)(iVar4 + 0x4c) = (moby->rotation).w;
        } while (iVar8 < 6);
        iVar7 = iVar7 + 1;
        piVar10 = piVar10 + 6;
      } while (iVar7 < 4);
      piVar3[0x1b] = 0;
      moby->state = '\x01';
    }
  }
  mobyupdate_helpers::M1157_001e29f8(moby);
  return;
}



//==== 001e348c  ns=Global  size=0x14
// sig: undefined FUN_001e348c(void)
// callers(2): 001dd210 mobyupdate_helpers::M1140_001dd210; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243
// callees(0): 

ulonglong FUN_001e348c(int param_1)

{
  return (ulonglong)(LZCOUNT(*(byte *)(param_1 + 0x20) - 5) << 0x20) >> 0x25;
}



//==== 001e34a0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1158_001e34a0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1158_001e34a0(void)

{
  DAT_00764f10 = 0x10000;
  return;
}



//==== 001e34b8  ns=mobyupdate_helpers  size=0x78
// sig: undefined M1158_001e34b8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1158_001e34b8(int param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar2 = MobyInstance;
  do {
    iVar3 = (int)(((ulonglong)*puVar4 & 0x7fff) << 8);
    *(undefined4 *)((int)&(pMVar2->pos).z + iVar3) = *(undefined4 *)(param_1 + 0x18);
    pMVar2 = MobyInstance;
    *(undefined4 *)
     (&DAT_00ef2948 + *(int *)(*(int *)((int)&MobyInstance->pVar + iVar3) + 4) * 0x11a0) =
         *(undefined4 *)(param_1 + 0x18);
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}



//==== 001e3538  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M1158_001e3538(void)
// callers(1): 001e3720 mobyupdate_unsorted::UpdateMoby_1158
// callees(0): 

void mobyupdate_helpers::M1158_001e3538(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00ef2940;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00ef2944;
  (&DAT_00ef294c)[iVar5] = 0xff;
  (&DAT_00ef294e)[iVar5] = 0xff;
  (&DAT_00ef294d)[iVar5] = 0xff;
  (&DAT_00ef294f)[iVar5] = 0xff;
  (&DAT_00ef2950)[iVar5] = 0xff;
  (&DAT_00ef2951)[iVar5] = 0xff;
  (&DAT_00ef2952)[iVar5] = 0xff;
  (&DAT_00ef2953)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00ef2940)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00ef2944)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_00ef2950)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_00ef2952)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_00ef2951)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_00ef2953)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_00ef294d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_00ef294f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_00ef294c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_00ef294e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x14);
  return;
}



//==== 001e3720  ns=mobyupdate_unsorted  size=0x9b8
// sig: undefined UpdateMoby_1158(MobyInstance * moby)
// callers(0): 
// callees(13): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001042ec mobyutil::MB_SetStateByGroup; 00109c30 mobyutil::OrganicDelt; 001129d0 mobyutil::MB_ScaledVecWrapper; 0017b230 water::WaterTile_InitAll; 0017b4b0 water::WaterTile_CalcGridBSphere; 0017b780 water::WaterWave_ScaleTable; 0017b8b8 water::WaterTile_UpdateWaves; 0017bd90 water::WaterTile_PutDrop; 001e3538 mobyupdate_helpers::M1158_001e3538; 005cd098 libc::printf
// strings: 00654860: "I'm really sorry, but you can't have more than 128 water tiles in this level"

/* Moby 1158 */

void mobyupdate_unsorted::UpdateMoby_1158(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  ushort uVar7;
  float *speed;
  MobyInstance *pMVar8;
  uint uVar9;
  ulonglong *puVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  undefined2 *puVar19;
  ulonglong uVar17;
  longlong lVar18;
  ushort *puVar20;
  int iVar21;
  undefined2 uVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  float fVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  double in_f5;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  double dVar32;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0xe0;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar16;
  puVar10[0x1e] = in_LR;
  puVar10[0x1a] = in_f30;
  puVar10[0x1b] = in_f31;
  puVar10[0x19] = unaff_r31;
  puVar10[0x18] = unaff_r30;
  speed = (float *)moby->pVar;
  uVar9 = (int)GameCamera.posZ >> 0x1f;
  uVar11 = uVar9 >> 1 ^ (uint)GameCamera.posZ;
  puVar10[0x17] = unaff_r29;
  puVar10[0x16] = unaff_r28;
  puVar10[0x15] = unaff_r27;
  puVar10[0x14] = unaff_r26;
  if ((int)(uVar11 - uVar9) < 0x43340001) {
    DAT_0073a960 = 0;
    DAT_0073a961 = 0x28;
    DAT_0073a963 = 0x40;
    DAT_0073a962 = 0x30;
    WaterFog.g = '(';
    WaterFog.r = '\0';
    WaterFog.b = '0';
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      speed[1] = u_WaterTileCnt;
      u_WaterTileCnt = (float)((int)u_WaterTileCnt + 1);
      if (0x7f < (int)u_WaterTileCnt) {
        libc::printf(
                    "I\'m really sorry, but you can\'t have more than 128 water tiles in this level"
                    );
      }
      moby->updateDistance = -1;
      moby->modeBits = moby->modeBits | DISABLED;
      fVar26 = speed[1];
      moby->scale = moby->pClass->gScale * 2.0;
      if (fVar26 == 0.0) {
        puVar19 = &DAT_00ef295e;
        lVar27 = 5;
        do {
          *puVar19 = 0;
          puVar19[0x8d0] = 0;
          puVar19[0x11a0] = 0;
          puVar19[0x1a70] = 0;
          puVar19 = puVar19 + 0x2340;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        water::WaterTile_InitAll((WaterTile *)&DAT_00ef2940,0x14);
        water::WaterWave_ScaleTable(1.0);
        fVar6 = DirectionalLights[0].direction1.x;
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
        *(float *)(puVar10 + 0xe) = fVar3 - fVar4;
        fVar26 = 0.0;
        uVar17 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar9 & 4;
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar12 = fVar3;
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar12 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar12) {
          lVar27 = uVar16 - 0xd0;
          lVar23 = uVar16 - 0x6c;
          lVar25 = uVar16 - 0x5c;
          lVar28 = 2;
          fVar3 = (fVar4 - fVar12) / (fVar4 + fVar12);
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
            *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 100) * fVar3 * fVar3;
            iVar21 = (int)lVar23;
            lVar27 = lVar27 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar3 * fVar3;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar25 = uVar16 - 0x6c;
          pfVar24 = (float *)&DAT_007358e0;
          lVar27 = lVar18;
          lVar23 = lVar25;
          do {
            fVar3 = *pfVar24;
            fVar4 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 0x74) * fVar3;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar27 = 2;
          do {
            iVar21 = (int)lVar18;
            iVar15 = (int)lVar25;
            lVar18 = lVar18 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar26 = fVar26 + *(float *)(iVar21 + 0x74) + *(float *)(iVar15 + 4) +
                     *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar26 = (fVar26 + 0.7853982) * fVar6 + fVar2;
        }
        fVar6 = fVar26 + 1.5707963;
        fVar3 = 3.1415925 - fVar26;
        if (fVar26 - (3.1415925 - fVar26) < 0.0) {
          fVar3 = fVar26;
        }
        fVar4 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar4 = fVar6;
        }
        fVar12 = -3.1415925 - fVar26;
        if ((-3.1415925 - fVar26) - fVar3 < 0.0) {
          fVar12 = fVar3;
        }
        fVar26 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
          fVar26 = fVar4;
        }
        fVar6 = fVar12 * fVar12;
        fVar3 = fVar26 * fVar26;
        fVar13 = fVar6 * fVar6 * fVar12;
        fVar4 = fVar3 * fVar3 * fVar26;
        fVar14 = fVar6 * fVar13;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex0 = 0x38;
        WaterTileConsts.tex1 = 0x39;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.alpha0 = 0x1c;
        WaterTileConsts.alpha1 = 0x40;
        WaterTileConsts.lightDir.y =
             (fVar6 * fVar14 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar6 * fVar12 * -0.16666657 + fVar12)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar26 * -0.16666657 + fVar26) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00ef2940;
        WaterTileBoxes = (WaterTileBox *)&DAT_00ef2800;
        WaterTileCnt = 0x14;
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x47000000;
        fVar26 = speed[1];
        WaterFogNearIntensity = 0x437f0000;
        WaterFogFarIntensity = 0x42400000;
      }
      fVar6 = speed[1];
      (&DAT_00ef2940)[(int)fVar26 * 0x468] = (moby->pos).x;
      (&DAT_00ef2944)[(int)fVar6 * 0x468] = (moby->pos).y;
      fVar5 = (moby->pos).z;
      *(undefined4 *)(&DAT_00ef2954 + (int)fVar6 * 0x11a0) = 0x38;
      *(undefined4 *)(&DAT_00ef2958 + (int)speed[1] * 0x11a0) = 0x39;
      (&DAT_00ef295c)[(int)speed[1] * 0x11a0] = 0x1c;
      (&DAT_00ef295d)[(int)speed[1] * 0x11a0] = 0x44;
      *(f32 *)(&DAT_00ef2948 + (int)fVar6 * 0x11a0) = fVar5;
      fVar26 = speed[1];
      (&DAT_00ef295e)[(int)fVar26 * 0x8d0] = 0xffff;
      water::WaterTile_CalcGridBSphere
                ((WaterTile *)(&DAT_00ef2940 + (int)fVar26 * 0x468),
                 (BSphere *)(&DAT_00ef2800 + (int)fVar26 * 0x10));
      moby->state = '\x01';
    }
    else {
      u_WaterTileCnt = 0.0;
      mobyupdate_helpers::M1158_001e3538(speed[1]);
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    if ((moby->setByGroup & 8U) != 0) {
      speed[2] = 1.4013e-45;
      mobyutil::MB_SetStateByGroup(moby->group,3);
    }
    moby->setByGroup = '\x02';
    if (speed[2] != 0.0) {
      mobyutil::OrganicDelt
                (137.0,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,speed);
      puVar20 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
      pMVar8 = MobyInstance;
      do {
        iVar21 = (int)(((ulonglong)*puVar20 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar8->pos).z + iVar21) = (moby->pos).z;
        pMVar8 = MobyInstance;
        *(f32 *)(&DAT_00ef2948 + *(int *)(*(int *)((int)&MobyInstance->pVar + iVar21) + 4) * 0x11a0)
             = (moby->pos).z;
        uVar7 = *puVar20;
        puVar20 = puVar20 + 1;
      } while (-1 < (short)uVar7);
    }
    iVar21 = mobyutil::MB_randInt(200);
    if (iVar21 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_00ef2940)[(int)speed[1] * 0x468] + dVar32);
      dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar31);
      water::WaterTile_PutDrop
                ((float)dVar29,
                 (float)((double)(float)(&DAT_00ef2944)[(int)speed[1] * 0x468] + dVar32),1.0,-0.03,
                 (WaterTile *)(&DAT_00ef2940 + (int)speed[1] * 0x468),1,(float)in_f5);
    }
  }
  else if (bVar1 < 4) {
    if ((moby->setByGroup & 4U) != 0) {
      speed[2] = 1.4013e-45;
      mobyutil::MB_SetStateByGroup(moby->group,2);
    }
    moby->setByGroup = '\x01';
    if (speed[2] != 0.0) {
      mobyutil::OrganicDelt
                (132.36,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,speed);
      puVar20 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
      pMVar8 = MobyInstance;
      do {
        iVar21 = (int)(((ulonglong)*puVar20 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar8->pos).z + iVar21) = (moby->pos).z;
        pMVar8 = MobyInstance;
        *(f32 *)(&DAT_00ef2948 + *(int *)(*(int *)((int)&MobyInstance->pVar + iVar21) + 4) * 0x11a0)
             = (moby->pos).z;
        uVar7 = *puVar20;
        puVar20 = puVar20 + 1;
      } while (-1 < (short)uVar7);
    }
    iVar21 = mobyutil::MB_randInt(200);
    if (iVar21 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_00ef2940)[(int)speed[1] * 0x468] + dVar32);
      dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar31);
      water::WaterTile_PutDrop
                ((float)dVar29,
                 (float)((double)(float)(&DAT_00ef2944)[(int)speed[1] * 0x468] + dVar32),1.0,-0.03,
                 (WaterTile *)(&DAT_00ef2940 + (int)speed[1] * 0x468),1,(float)in_f5);
    }
  }
  if (-1 < (int)speed[1]) {
    dVar31 = 0.0;
    dVar32 = dVar31;
    iVar21 = mobyutil::MB_ScaledVecWrapper(0x4050000000000000,moby);
    if (iVar21 != -1) {
      dVar32 = 1.0;
    }
    uVar22 = 0xffff;
    if (dVar32 == dVar31) {
      uVar22 = 0;
    }
    fVar26 = speed[1];
    (&DAT_00ef295e)[(int)speed[1] * 0x8d0] = uVar22;
    if (fVar26 == 0.0) {
      water::WaterTile_UpdateWaves((WaterTile *)&DAT_00ef2940,0x14);
      RegisterFuncForMoby(&PTR_M1159_001e40d8_00709050,moby);
    }
  }
  return;
}



//==== 001e40d8  ns=mobyupdate_helpers  size=0x30
// sig: undefined M1159_001e40d8(void)
// callers(0): 
// callees(1): 0017cfdc water::WaterTile_DrawAll

void mobyupdate_helpers::M1159_001e40d8(void)

{
  water::WaterTile_DrawAll(&DAT_00ef2940,0x14);
  return;
}



//==== 001e4108  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1159_001e4108(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1159_001e4108(void)

{
  DAT_00764f80 = 0x10000;
  return;
}



//==== 001e4130  ns=mobyupdate_unsorted  size=0x2a8
// sig: undefined UpdateMoby_1159(MobyInstance * moby)
// callers(0): 
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00109c30 mobyutil::OrganicDelt; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot

/* Moby 1159 */

void mobyupdate_unsorted::UpdateMoby_1159(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *val;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  MobyInstance *pMVar12;
  double dVar13;
  
  bVar1 = moby->state;
  val = (float *)moby->pVar;
  if (bVar1 == 0) {
    (moby->pos).z = val[3] * 1.9 + (moby->pos).z;
    pMVar12 = mobyfunc::CreateMoby(0x487);
    pMVar12->drawDistance = 0x40;
    pMVar12->enabled = '\x01';
    uVar11 = moby->light;
    pMVar12->color = moby->color;
    pMVar12->light = uVar11;
    pMVar12->modeBits = moby->modeBits;
    (pMVar12->pos).x = (moby->pos).x;
    (pMVar12->pos).y = (moby->pos).y;
    (pMVar12->pos).z = (moby->pos).z;
    (pMVar12->pos).w = (moby->pos).w;
    fVar2 = (moby->rotation).x;
    (pMVar12->rotation).x = fVar2;
    (pMVar12->rotation).y = (moby->rotation).y;
    (pMVar12->rotation).z = (moby->rotation).z;
    (pMVar12->rotation).w = (moby->rotation).w;
    dVar13 = (double)fastfunc::FastWrapRot(fVar2,3.1415927);
    (pMVar12->rotation).x = (float)dVar13;
    mobyfunc::UpdateMobyTransform(pMVar12);
    pvVar6 = pMVar12->pVar;
    *(float *)((int)pvVar6 + 8) = val[2];
    *(float *)((int)pvVar6 + 0x10) = val[4];
    *(float *)((int)pvVar6 + 0x14) = val[5];
    fVar2 = moby->pClass->gScale;
    moby->scale = fVar2 * val[3];
    fVar3 = val[3];
    pMVar12->state = '\x01';
    pMVar12->scale = fVar2 * fVar3;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    fVar2 = val[2];
    if (((MobyInstance[(int)fVar2].oClass == TRESSPASSER_PAD) &&
        (MobyInstance[(int)fVar2].state == '\x04')) ||
       ((MobyInstance[(int)fVar2].oClass == BUTTON_033E &&
        (MobyInstance[(int)fVar2].setByGroup != '\0')))) {
      moby->state = '\x02';
      (&MiscLevelFlags.field87_0x57)[(int)val[5]] = 1;
      sound::PlayMobySound(0,0,moby);
    }
  }
  else if (bVar1 < 3) {
    mobyutil::OrganicDelt
              (val[4],DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 2.0,val,0x720000,val + 1);
    fVar2 = (moby->transform).v1.y;
    fVar3 = (moby->transform).v1.x;
    fVar4 = (moby->transform).v1.z;
    fVar5 = 0.0;
    fVar10 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar7 = -val[1] / fVar10;
    fVar9 = fVar5;
    if (0.0 - fVar10 < 0.0) {
      fVar9 = fVar4 * fVar7;
    }
    fVar8 = fVar5;
    if (0.0 - fVar10 < 0.0) {
      fVar8 = fVar2 * fVar7;
    }
    if (0.0 - fVar10 < 0.0) {
      fVar5 = fVar3 * fVar7;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar9 = fVar4 * fVar7;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar8 = fVar2 * fVar7;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar5 = fVar3 * fVar7;
    }
    (moby->pos).z = (moby->pos).z + fVar9;
    (moby->pos).y = (moby->pos).y + fVar8;
    (moby->pos).x = (moby->pos).x + fVar5;
  }
  return;
}



//==== 001e43d8  ns=mobyupd::update1160  size=0x14
// sig: undefined M1160_001e43d8(void)
// callers(0): 
// callees(0): 

void mobyupd::update1160::M1160_001e43d8(void)

{
  DAT_00764ff0 = 0x10000;
  return;
}



//==== 001e43f0  ns=mobyupd::update1160  size=0x218
// sig: undefined M1160_DrawShape(void)
// callers(1): 001e6130 mobyupd::update1160::M1160_Hud_Draw
// callees(3): 00502e70 FUN_00502e70; 00502fec FUN_00502fec; 0050300c FUN_0050300c

void mobyupd::update1160::M1160_DrawShape
               (short *param_1,int param_2,int param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar7;
  undefined1 uVar8;
  undefined8 uVar6;
  uint uVar9;
  short *psVar10;
  
  uVar9 = param_2 + 1;
  iVar7 = ((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0) + 3;
  *(char *)DAT_00e5aa58 = (char)iVar7;
  *(undefined1 *)((int)DAT_00e5aa58 + 1) = 0;
  *(undefined1 *)((int)DAT_00e5aa58 + 2) = 0;
  uVar8 = FUN_0050300c(iVar7,0);
  *(undefined1 *)((int)DAT_00e5aa58 + 3) = uVar8;
  uVar4 = uRam00736518;
  uVar3 = DAT_00736510._4_4_;
  uVar2 = DAT_00736510._0_4_;
  puVar1 = (undefined4 *)((uint)((int)DAT_00e5aa58 + 0x10) & 0xfffffff0);
  DAT_00e5aa58 = (undefined2 *)((int)DAT_00e5aa58 + 0x10);
  puVar1[3] = uRam0073651c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *DAT_00e5aa58 = 0x8001;
  puVar5 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 8;
  uVar6 = FUN_00502e70(0x11,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar5 + 8) = uVar6;
  *(undefined8 *)(puVar5 + 0xc) = param_6;
  uVar4 = uRam00736528;
  uVar3 = DAT_00736520._4_4_;
  uVar2 = DAT_00736520._0_4_;
  puVar1 = (undefined4 *)((uint)(DAT_00e5aa58 + 8) & 0xfffffff0);
  DAT_00e5aa58 = DAT_00e5aa58 + 8;
  puVar1[3] = uRam0073652c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *DAT_00e5aa58 = (short)param_2 + -0x8000;
  psVar10 = DAT_00e5aa58 + 8;
  DAT_00e5aa58 = psVar10;
  if (0 < param_2) {
    iVar7 = 0;
    do {
      uVar6 = FUN_00502fec((*param_1 + param_3) * 0x10 + SCREEN_PROJECTION_MAP_X + -8,
                           (param_1[1] + param_4) * 0x10 + SCREEN_PROJECTION_MAP_Y + -8,param_5);
      iVar7 = iVar7 + 1;
      *(undefined8 *)psVar10 = uVar6;
      param_1 = param_1 + 2;
      psVar10 = psVar10 + 4;
    } while (iVar7 < param_2);
  }
  DAT_00e5aa58 = DAT_00e5aa58 + (((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0)) * 8
  ;
  return;
}



//==== 001e4610  ns=mobyupd::update1160  size=0x25c
// sig: undefined M1160_DrawShapeScaled(void)
// callers(1): 001e6130 mobyupd::update1160::M1160_Hud_Draw
// callees(5): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502e70 FUN_00502e70; 00502fec FUN_00502fec; 0050300c FUN_0050300c

void mobyupd::update1160::M1160_DrawShapeScaled
               (double param_1,double param_2,double param_3,undefined2 *param_4,int param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar7;
  undefined1 uVar10;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  uint uVar11;
  short *psVar12;
  double dVar13;
  double dVar14;
  
  uVar11 = param_5 + 1;
  iVar7 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) + 3;
  *(char *)DAT_00e5aa58 = (char)iVar7;
  *(undefined1 *)((int)DAT_00e5aa58 + 1) = 0;
  *(undefined1 *)((int)DAT_00e5aa58 + 2) = 0;
  uVar10 = FUN_0050300c(iVar7,0);
  *(undefined1 *)((int)DAT_00e5aa58 + 3) = uVar10;
  uVar4 = uRam00736518;
  uVar3 = DAT_00736510._4_4_;
  uVar2 = DAT_00736510._0_4_;
  puVar1 = (undefined4 *)((uint)((int)DAT_00e5aa58 + 0x10) & 0xfffffff0);
  DAT_00e5aa58 = (undefined2 *)((int)DAT_00e5aa58 + 0x10);
  puVar1[3] = uRam0073651c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *DAT_00e5aa58 = 0x8001;
  puVar5 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 8;
  uVar6 = FUN_00502e70(0x11,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar5 + 8) = uVar6;
  *(undefined8 *)(puVar5 + 0xc) = param_9;
  uVar4 = uRam00736528;
  uVar3 = DAT_00736520._4_4_;
  uVar2 = DAT_00736520._0_4_;
  puVar1 = (undefined4 *)((uint)(DAT_00e5aa58 + 8) & 0xfffffff0);
  DAT_00e5aa58 = DAT_00e5aa58 + 8;
  puVar1[3] = uRam0073652c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *DAT_00e5aa58 = (short)param_5 + -0x8000;
  psVar12 = DAT_00e5aa58 + 8;
  DAT_00e5aa58 = psVar12;
  if (0 < param_5) {
    iVar7 = 0;
    dVar14 = 16.0;
    do {
      dVar13 = (double)fastfunc::FastIntToDouble(*param_4);
      iVar8 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(float)(dVar13 * param_3 + param_1) * dVar14));
      iVar8 = iVar8 + SCREEN_PROJECTION_MAP_X;
      dVar13 = (double)fastfunc::FastIntToDouble(param_4[1]);
      iVar9 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(float)(dVar13 * param_3 + param_2) * dVar14));
      uVar6 = FUN_00502fec(iVar8 + -8,iVar9 + SCREEN_PROJECTION_MAP_Y + -8,param_8);
      iVar7 = iVar7 + 1;
      *(undefined8 *)psVar12 = uVar6;
      param_4 = param_4 + 2;
      psVar12 = psVar12 + 4;
    } while (iVar7 < param_5);
  }
  DAT_00e5aa58 = DAT_00e5aa58 +
                 (((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0)) * 8;
  return;
}



//==== 001e4870  ns=mobyupd::update1160  size=0x2b4
// sig: undefined M1160_DrawShapeRotated(void)
// callers(3): 001e4c20 mobyupd::update1160::M1160_001e4c20; 001e5158 mobyupd::update1160::M1160_ScanTargets; 001e6130 mobyupd::update1160::M1160_Hud_Draw
// callees(6): 00500ca4 fastfunc::FastEulerToMtx1; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502e70 FUN_00502e70; 00502fec FUN_00502fec; 0050300c FUN_0050300c

void mobyupd::update1160::M1160_DrawShapeRotated
               (double param_1,double param_2,double param_3,undefined2 *param_4,int param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar7;
  undefined1 uVar10;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  uint uVar11;
  short *psVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_c0 [16];
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  
  uVar11 = param_5 + 1;
  iVar7 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) + 3;
  *(char *)DAT_00e5aa58 = (char)iVar7;
  *(undefined1 *)((int)DAT_00e5aa58 + 1) = 0;
  *(undefined1 *)((int)DAT_00e5aa58 + 2) = 0;
  uVar10 = FUN_0050300c(iVar7,0);
  *(undefined1 *)((int)DAT_00e5aa58 + 3) = uVar10;
  uVar4 = uRam00736518;
  uVar3 = DAT_00736510._4_4_;
  uVar2 = DAT_00736510._0_4_;
  puVar1 = (undefined4 *)((uint)((int)DAT_00e5aa58 + 0x10) & 0xfffffff0);
  DAT_00e5aa58 = (undefined2 *)((int)DAT_00e5aa58 + 0x10);
  puVar1[3] = uRam0073651c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *DAT_00e5aa58 = 0x8001;
  puVar5 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 8;
  uVar6 = FUN_00502e70(0x11,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar5 + 8) = uVar6;
  *(undefined8 *)(puVar5 + 0xc) = param_9;
  uVar4 = uRam00736528;
  uVar3 = DAT_00736520._4_4_;
  uVar2 = DAT_00736520._0_4_;
  puVar1 = (undefined4 *)((uint)(DAT_00e5aa58 + 8) & 0xfffffff0);
  DAT_00e5aa58 = DAT_00e5aa58 + 8;
  puVar1[3] = uRam0073652c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *DAT_00e5aa58 = (short)param_5 + -0x8000;
  psVar12 = DAT_00e5aa58 + 8;
  DAT_00e5aa58 = psVar12;
  fastfunc::FastEulerToMtx1(&local_b0,local_c0);
  if (0 < param_5) {
    iVar7 = 0;
    dVar16 = 16.0;
    do {
      dVar13 = (double)fastfunc::FastIntToDouble(*param_4);
      dVar14 = (double)fastfunc::FastIntToDouble(param_4[1]);
      dVar15 = (double)(float)((double)local_b0 * dVar13 +
                              (double)(float)((double)local_a0 * dVar14));
      dVar13 = (double)(float)((double)local_ac * dVar13 +
                              (double)(float)((double)local_9c * dVar14));
      iVar8 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(float)(dVar15 * param_3 + param_1) * dVar16),
                         dVar15,(double)local_b0,(double)local_9c,(double)local_ac);
      iVar8 = iVar8 + SCREEN_PROJECTION_MAP_X;
      iVar9 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(float)(dVar13 * param_3 + param_2) * dVar16));
      uVar6 = FUN_00502fec(iVar8 + -8,iVar9 + SCREEN_PROJECTION_MAP_Y + -8,param_8);
      iVar7 = iVar7 + 1;
      *(undefined8 *)psVar12 = uVar6;
      param_4 = param_4 + 2;
      psVar12 = psVar12 + 4;
    } while (iVar7 < param_5);
  }
  DAT_00e5aa58 = DAT_00e5aa58 +
                 (((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0)) * 8;
  return;
}



//==== 001e4b28  ns=mobyupd::update1160  size=0xe0
// sig: undefined M1160_WorldToScreen(void)
// callers(0): 
// callees(2): 00065490 draw::ScreenPosFromWorldSpace; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1160::M1160_WorldToScreen
               (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  float local_50;
  float local_4c;
  
  draw::ScreenPosFromWorldSpace(&local_50,param_1);
  dVar3 = 0.0625;
  uVar1 = fastfunc::FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  iVar2 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar3));
  *param_3 = iVar2 + param_4;
  return;
}



//==== 001e4c20  ns=mobyupd::update1160  size=0x284
// sig: undefined M1160_001e4c20(void)
// callers(0): 
// callees(5): 001e4870 mobyupd::update1160::M1160_DrawShapeRotated; 00500ca4 fastfunc::FastEulerToMtx1; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1160::M1160_001e4c20
               (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,ulonglong param_7)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_70;
  float local_6c;
  float local_68;
  
  dVar8 = (double)*(float *)(param_2 + 8);
  uVar2 = (int)*(uint *)(param_2 + 4) >> 0x1f;
  iVar6 = (uVar2 >> 1 ^ *(uint *)(param_2 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar6) || (iVar6 < -0x3fc90fdb)) {
    dVar8 = -dVar8;
  }
  fastfunc::FastDiffRots(0x3ff921fb60000000,dVar8);
  fastfunc::FastEulerToMtx1(&local_a0,auStack_b0);
  fVar3 = *(float *)(param_4 + 0x14) - param_3[1];
  fVar4 = *(float *)(param_4 + 0x10) - *param_3;
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar8 = (double)((local_6c * fVar1 + local_9c * fVar4 + local_8c * fVar3) * 0.14285715);
  fVar5 = (local_70 * fVar1 + local_a0 * fVar4 + local_90 * fVar3) * 0.14285715;
  fVar1 = (local_68 * fVar1 + local_98 * fVar4 + local_88 * fVar3) * 0.14285715;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar8 * dVar8));
  iVar6 = fastfunc::FastDoubleToInt();
  iVar7 = fastfunc::FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)fastfunc::FastIntToDouble(param_7 >> 0x18 & 0xff);
      fastfunc::FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    dVar8 = (double)fastfunc::FastDiffRots
                              ((double)*(float *)(param_4 + 0x48),(double)*(float *)(param_2 + 8));
    M1160_DrawShapeRotated
              ((double)(longlong)(iVar6 + 0x1b0),
               (double)(longlong)(iVar7 + draw::g_ScreenHeight + -0x50),param_1,-dVar8,param_5,
               param_6);
  }
  return;
}



//==== 001e4eb8  ns=mobyupd::update1160  size=0x288
// sig: undefined M1160_001e4eb8(void)
// callers(1): 001e5158 mobyupd::update1160::M1160_ScanTargets
// callees(6): 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 00500ca4 fastfunc::FastEulerToMtx1; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1160::M1160_001e4eb8
               (int param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_90 [16];
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_50;
  float local_4c;
  float local_48;
  
  dVar9 = (double)*(float *)(param_1 + 8);
  uVar2 = (int)*(uint *)(param_1 + 4) >> 0x1f;
  iVar8 = (uVar2 >> 1 ^ *(uint *)(param_1 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar8) || (iVar8 < -0x3fc90fdb)) {
    dVar9 = -dVar9;
  }
  fastfunc::FastDiffRots(0x3ff921fb60000000,dVar9);
  fastfunc::FastEulerToMtx1(&local_80,auStack_90);
  fVar3 = *(float *)(param_3 + 0x14) - param_2[1];
  fVar4 = *(float *)(param_3 + 0x10) - *param_2;
  fVar1 = *(float *)(param_3 + 0x1c);
  dVar9 = (double)((local_4c * fVar1 + local_7c * fVar4 + local_6c * fVar3) * 0.14285715);
  fVar5 = (local_50 * fVar1 + local_80 * fVar4 + local_70 * fVar3) * 0.14285715;
  fVar1 = (local_48 * fVar1 + local_78 * fVar4 + local_68 * fVar3) * 0.14285715;
  dVar10 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar9 * dVar9));
  iVar7 = fastfunc::FastDoubleToInt();
  iVar8 = fastfunc::FastDoubleToInt(-dVar9);
  if (dVar10 < 46.0) {
    if (38.0 < dVar10) {
      dVar10 = (double)(float)(46.0 - dVar10);
      dVar9 = (double)fastfunc::FastIntToDouble(param_5 >> 0x18 & 0xff);
      fastfunc::FastDoubleToInt((double)((float)(dVar9 * dVar10) * 0.125));
    }
    iVar6 = (int)(param_4 << 4);
    iVar8 = iVar8 + draw::g_ScreenHeight;
    draw::GetEffectTex(*(undefined2 *)(iVar6 + 0x765a5c));
    draw::Sprite_DrawShapeWrapper
              ((iVar7 - *(short *)(iVar6 + 0x765a68)) + 0x1b0,
               (iVar8 - *(short *)(iVar6 + 0x765a6a)) + -0x50,*(undefined2 *)(iVar6 + 0x765a62),
               *(undefined2 *)(iVar6 + 0x765a64),*(undefined2 *)(iVar6 + 0x765a5e),
               *(undefined2 *)(iVar6 + 0x765a60),*(undefined2 *)(iVar6 + 0x765a62),
               *(undefined2 *)(iVar6 + 0x765a64));
  }
  return;
}



//==== 001e5158  ns=mobyupd::update1160  size=0xd90
// sig: undefined M1160_ScanTargets(void)
// callers(1): 001e5ef0 mobyupd::update1160::M1160_UpdateTargetLock
// callees(10): 00065490 draw::ScreenPosFromWorldSpace; 00070834 draw::FontPrintSmallCenter; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 0010de78 mobyutil::MB_WrapRot; 001e4870 mobyupd::update1160::M1160_DrawShapeRotated; 001e4eb8 mobyupd::update1160::M1160_001e4eb8; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005c8510 libc::strlen; 005cd2a8 libc::snprintf
// strings: 006548c8: '%d' | 006548d0: '%03.2f'

MobyInstance *
mobyupd::update1160::M1160_ScanTargets
          (int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  MOBY_OCLASSES MVar1;
  MobyInstance *pMVar2;
  MobyInstance *moby;
  float fVar3;
  float fVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t sVar12;
  MobyInstance *in_r10;
  MobyInstance *pMVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  float fVar24;
  MobyInstance *in_stack_00000074;
  undefined1 local_1a0 [16];
  float local_190;
  float local_18c;
  float local_180;
  float local_17c;
  float local_170;
  float local_16c;
  float local_160;
  float local_15c;
  float local_150;
  float local_14c;
  float local_140;
  float local_13c;
  float local_130;
  float local_12c;
  char acStack_120 [88];
  
  moby = MobyUpdateChainStart;
  pMVar13 = (MobyInstance *)0x0;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  iVar14 = 0x7fffffff;
  if (moby != (MobyInstance *)0x0) {
    dVar23 = 0.0625;
    uVar22 = 0x3ff0000000000000;
    dVar21 = 0.05000000074505806;
    uVar20 = 0x3ff4ccccc0000000;
    pMVar13 = (MobyInstance *)0x0;
    do {
      if (((((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE) && (moby->enabled != '\0')) &&
          (moby->pClass != (MobyClass *)0x0)) && ((short)moby->pClass->mode_bits == 5)) {
        draw::ScreenPosFromWorldSpace(&local_130,&moby->pos);
        iVar7 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(local_130 -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                          dVar23));
        iVar8 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(local_12c -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                          dVar23));
        iVar15 = iVar7 - *(int *)(param_2 + 0xe0);
        iVar16 = iVar8 - *(int *)(param_2 + 0xe4);
        iVar15 = iVar15 * ((iVar15 >> 0x1f & 0xfffffffeU) + 1);
        iVar16 = iVar16 * ((iVar16 >> 0x1f & 0xfffffffeU) + 1);
        draw::ScreenPosFromWorldSpace(&local_140,local_1a0);
        iVar9 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(local_140 -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                          dVar23));
        iVar10 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(local_13c -
                                                    (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                           dVar23));
        dVar17 = (double)fastfunc::FastIntToDouble
                                   ((iVar9 - iVar7) * (iVar9 - iVar7) +
                                    (iVar10 - iVar8) * (iVar10 - iVar8));
        iVar7 = fastfunc::FastDoubleToInt((double)(float)SQRT(dVar17));
        if ((iVar15 < iVar7 + 0x1c) && (iVar16 < iVar7 + 0x1c)) {
          if (in_r10 == (MobyInstance *)0x0) {
            if ((moby != in_stack_00000074) &&
               (iVar7 = iVar15 * iVar15 + iVar16 * iVar16, iVar7 < iVar14)) {
              pMVar13 = moby;
              iVar14 = iVar7;
            }
          }
          else if (moby == in_r10) {
            pMVar13 = moby;
            iVar14 = 0;
          }
        }
      }
      MVar1 = moby->oClass;
      if (MVar1 == JET_FIGHTER_HEALTH_CRATE_04C4) {
        M1160_001e4eb8(param_4,param_3,moby,2,0x70808080);
      }
      else if (MVar1 == AMMOCRATE_04C2) {
        M1160_001e4eb8(param_4,param_3,moby,2,0x70808080);
      }
      else if (MVar1 == 0x4bf) {
        if (1 < moby->state) {
          draw::ScreenPosFromWorldSpace(&local_190,&moby->pos);
          if (moby->enabled != '\0') {
            dVar19 = (double)(float)((double)(local_190 - (float)(longlong)SCREEN_PROJECTION_MAP_X)
                                    * dVar23);
            dVar18 = (double)(float)((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                    * dVar23);
            dVar17 = (double)fastfunc::FastIntToDouble
                                       ((double)(local_18c -
                                                (float)(longlong)SCREEN_PROJECTION_MAP_Y),
                                        worldUpdateTime);
            fVar24 = mobyutil::MB_WrapRot((float)(dVar17 * dVar21));
            M1160_DrawShapeRotated(dVar19,dVar18,uVar22,-(double)fVar24,&DAT_00765934,0x1e);
            draw::ScreenPosFromWorldSpace(&local_170,&moby->pos);
            uVar6 = fastfunc::FastDoubleToInt
                              ((double)(float)((double)(local_170 -
                                                       (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                              dVar23));
            iVar7 = fastfunc::FastDoubleToInt
                              ((double)(float)((double)(local_16c -
                                                       (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                              dVar23));
            iVar8 = iVar7 + 10;
            draw::FontPrintSmallCenter(uVar6,iVar8,0x802020ff,&DAT_006548d8,3);
            pfVar11 = (float *)mobyutil::MB_GetPvarsIfMobyHasThem(moby);
            if (pfVar11 != (float *)0x0) {
              iVar8 = iVar7 + 0x18;
              uVar5 = fastfunc::FastDoubleToInt((double)*pfVar11);
              libc::snprintf(acStack_120,"%d",uVar5);
              sVar12 = libc::strlen(acStack_120);
              draw::FontPrintSmallCenter(uVar6,iVar8,0x806060ff,acStack_120,sVar12);
            }
            pMVar2 = *(MobyInstance **)(param_2 + 0x70);
            if (moby == pMVar2) {
              fVar24 = *(float *)(param_1 + 0x14) - (pMVar2->pos).y;
              fVar3 = *(float *)(param_1 + 0x10) - (pMVar2->pos).x;
              fVar4 = *(float *)(param_1 + 0x18) - (pMVar2->pos).z;
              libc::snprintf(acStack_120,"%03.2f",
                             (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar24 * fVar24));
              sVar12 = libc::strlen(acStack_120);
              draw::FontPrintSmallCenter(uVar6,iVar8 + 0xe,0x80ffffff,acStack_120,sVar12);
            }
          }
          M1160_001e4eb8(param_4,param_3,moby,1,0x70808080);
        }
      }
      else if (MVar1 == 0x4be) {
        draw::ScreenPosFromWorldSpace(&local_190,&moby->pos);
        if (moby->enabled != '\0') {
          dVar19 = (double)(float)((double)(local_190 - (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                  dVar23);
          dVar18 = (double)(float)((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                  dVar23);
          dVar17 = (double)fastfunc::FastIntToDouble
                                     ((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      ,worldUpdateTime);
          fVar24 = mobyutil::MB_WrapRot((float)(dVar17 * dVar21));
          M1160_DrawShapeRotated(dVar19,dVar18,uVar22,-(double)fVar24,&DAT_00765934,0x1e);
          draw::ScreenPosFromWorldSpace(&local_160,&moby->pos);
          uVar6 = fastfunc::FastDoubleToInt
                            ((double)(float)((double)(local_160 -
                                                     (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                            dVar23));
          iVar7 = fastfunc::FastDoubleToInt
                            ((double)(float)((double)(local_15c -
                                                     (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                            dVar23));
          iVar8 = iVar7 + 10;
          draw::FontPrintSmallCenter(uVar6,iVar8,0x802020ff,&DAT_006548d8,3);
          pfVar11 = (float *)mobyutil::MB_GetPvarsIfMobyHasThem(moby);
          if (pfVar11 != (float *)0x0) {
            iVar8 = iVar7 + 0x18;
            uVar5 = fastfunc::FastDoubleToInt((double)*pfVar11);
            libc::snprintf(acStack_120,"%d",uVar5);
            sVar12 = libc::strlen(acStack_120);
            draw::FontPrintSmallCenter(uVar6,iVar8,0x806060ff,acStack_120,sVar12);
          }
          pMVar2 = *(MobyInstance **)(param_2 + 0x70);
          if (moby == pMVar2) {
            fVar24 = *(float *)(param_1 + 0x14) - (pMVar2->pos).y;
            fVar3 = *(float *)(param_1 + 0x10) - (pMVar2->pos).x;
            fVar4 = *(float *)(param_1 + 0x18) - (pMVar2->pos).z;
            libc::snprintf(acStack_120,"%03.2f",
                           (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar24 * fVar24));
            sVar12 = libc::strlen(acStack_120);
            draw::FontPrintSmallCenter(uVar6,iVar8 + 0xe,0x80ffffff,acStack_120,sVar12);
          }
        }
        M1160_001e4eb8(param_4,param_3,moby,1,0x70808080);
      }
      else if (MVar1 == 0x3eb) {
        draw::ScreenPosFromWorldSpace(&local_190,&moby->pos);
        if (moby->enabled != '\0') {
          dVar19 = (double)(float)((double)(local_190 - (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                  dVar23);
          dVar18 = (double)(float)((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                  dVar23);
          dVar17 = (double)fastfunc::FastIntToDouble
                                     ((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      ,worldUpdateTime);
          fVar24 = mobyutil::MB_WrapRot((float)(dVar17 * dVar21));
          M1160_DrawShapeRotated(dVar19,dVar18,uVar22,(double)fVar24,&DAT_00765934,0x1e);
          dVar19 = (double)(float)((double)(local_190 - (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                  dVar23);
          dVar18 = (double)(float)((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                  dVar23);
          dVar17 = (double)fastfunc::FastIntToDouble
                                     ((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      ,worldUpdateTime);
          fVar24 = mobyutil::MB_WrapRot((float)(dVar17 * dVar21));
          M1160_DrawShapeRotated(dVar19,dVar18,uVar20,-(double)fVar24,&DAT_00765934,0x1e);
          draw::ScreenPosFromWorldSpace(&local_150,&moby->pos);
          uVar6 = fastfunc::FastDoubleToInt
                            ((double)(float)((double)(local_150 -
                                                     (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                            dVar23));
          iVar7 = fastfunc::FastDoubleToInt
                            ((double)(float)((double)(local_14c -
                                                     (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                            dVar23));
          iVar8 = iVar7 + 10;
          draw::FontPrintSmallCenter(uVar6,iVar8,0x80ffffff,&DAT_006548c0,3);
          pfVar11 = (float *)mobyutil::MB_GetPvarsIfMobyHasThem(moby);
          if (pfVar11 != (float *)0x0) {
            iVar8 = iVar7 + 0x18;
            uVar5 = fastfunc::FastDoubleToInt((double)*pfVar11);
            libc::snprintf(acStack_120,"%d",uVar5);
            sVar12 = libc::strlen(acStack_120);
            draw::FontPrintSmallCenter(uVar6,iVar8,0x80ffffff,acStack_120,sVar12);
          }
          pMVar2 = *(MobyInstance **)(param_2 + 0x70);
          if (moby == pMVar2) {
            fVar24 = *(float *)(param_1 + 0x14) - (pMVar2->pos).y;
            fVar3 = *(float *)(param_1 + 0x10) - (pMVar2->pos).x;
            fVar4 = *(float *)(param_1 + 0x18) - (pMVar2->pos).z;
            libc::snprintf(acStack_120,"%03.2f",
                           (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar24 * fVar24));
            sVar12 = libc::strlen(acStack_120);
            draw::FontPrintSmallCenter(uVar6,iVar8 + 0xe,0x80ffffff,acStack_120,sVar12);
          }
        }
        M1160_001e4eb8(param_4,param_3,moby,0,0x70808080);
        *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0xe8) + 1;
      }
      else if (((moby->pClass != (MobyClass *)0x0) && ((short)moby->pClass->mode_bits == 5)) &&
              (M1160_001e4eb8(param_4,param_3,moby,1,0x70808080),
              moby == *(MobyInstance **)(param_2 + 0x70))) {
        draw::ScreenPosFromWorldSpace(&local_180,&moby->pos);
        uVar6 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(local_180 -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                          dVar23));
        iVar8 = fastfunc::FastDoubleToInt
                          ((double)(float)((double)(local_17c -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                          dVar23));
        iVar7 = *(int *)(param_2 + 0x70);
        fVar24 = *(float *)(param_1 + 0x14) - *(float *)(iVar7 + 0x14);
        fVar3 = *(float *)(param_1 + 0x10) - *(float *)(iVar7 + 0x10);
        fVar4 = *(float *)(param_1 + 0x18) - *(float *)(iVar7 + 0x18);
        libc::snprintf(acStack_120,"%03.2f",
                       (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar24 * fVar24));
        sVar12 = libc::strlen(acStack_120);
        draw::FontPrintSmallCenter(uVar6,iVar8 + 10,0x80ffffff,acStack_120,sVar12);
      }
      moby = (MobyInstance *)moby->pChain;
    } while (moby != (MobyInstance *)0x0);
  }
  return pMVar13;
}



//==== 001e5ef0  ns=mobyupd::update1160  size=0x204
// sig: undefined M1160_UpdateTargetLock(void)
// callers(1): 001e6130 mobyupd::update1160::M1160_Hud_Draw
// callees(2): 001e5158 mobyupd::update1160::M1160_ScanTargets; 004fff60 fastfunc::FastDecTimerS32

void mobyupd::update1160::M1160_UpdateTargetLock(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [16];
  
  iVar2 = fastfunc::FastDecTimerS32(param_2 + 0x74);
  if (((((iVar2 != 0) || (iVar2 = *(int *)(param_2 + 0x70), iVar2 == 0)) ||
       (*(char *)(iVar2 + 0x20) == -3 || *(char *)(iVar2 + 0x20) == -2)) ||
      ((*(char *)(iVar2 + 0x31) == '\0' || ((pad_Repeat & 0x2000) != 0)))) || (DAT_0096b2d6 == '\0')
     ) {
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0;
  }
  iVar3 = M1160_ScanTargets(0x3fc921fb60000000,0x3fc921fb60000000,0x406fe00000000000,param_1,param_2
                            ,0x951500,local_30);
  iVar2 = *(int *)(param_2 + 0x70);
  if (((iVar3 != iVar2) && (500 < *(int *)(param_2 + 0x74))) || (DAT_0096b2d6 == '\0')) {
    iVar2 = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
  }
  if ((iVar3 != 0) &&
     (((iVar2 == 0 || ((*(short *)(iVar2 + 0xa6) != 0x3eb && (*(short *)(iVar3 + 0xa6) == 0x3eb))))
      && (DAT_0096b2d6 != '\0')))) {
    *(int *)(param_2 + 0x70) = iVar3;
    uVar1 = DAT_007651a8;
    *(undefined4 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(param_2 + 0x74) = uVar1;
    iVar2 = iVar3;
  }
  if (((iVar2 != 0) && (*(int *)(param_2 + 0x68) == 0)) &&
     ((iVar2 == 0 || ((*(char *)(iVar2 + 0x20) == -2 || (*(char *)(iVar2 + 0x20) == -3)))))) {
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0;
  }
  return;
}



//==== 001e6130  ns=mobyupd::update1160  size=0x814
// sig: undefined M1160_Hud_Draw(MobyInstance * param_1)
// callers(0): 
// callees(17): 00065490 draw::ScreenPosFromWorldSpace; 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 0006fc54 draw::FontPrintSmallLeft; 00070834 draw::FontPrintSmallCenter; 0010de78 mobyutil::MB_WrapRot; 001e43f0 mobyupd::update1160::M1160_DrawShape; 001e4610 mobyupd::update1160::M1160_DrawShapeScaled; 001e4870 mobyupd::update1160::M1160_DrawShapeRotated; 001e5ef0 mobyupd::update1160::M1160_UpdateTargetLock; 004d82b8 idol_draw::BindFragmentProgram; 004dd6f0 idol_draw::Gfx_SubmitHudDrawCommands; 004de9c4 FUN_004de9c4; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005c8510 libc::strlen; 005cd2a8 libc::snprintf
// strings: 006548dc: 'OBJECTIVES REMAINING: %d' | 006548fc: 'ALTITUDE: %03.0f' | 00654914: 'ROLL: %03.0f' | 00654924: 'HEADING: %03.0f' | 00654934: 'WARNING! SHIP NEEDS REPAIR' | 00654954: 'minHealth'

void mobyupd::update1160::M1160_Hud_Draw(MobyInstance *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float local_c0;
  float local_bc;
  undefined1 local_b0 [8];
  char acStack_a8 [64];
  void *PVARS;
  
  PVARS = param_1->pVar;
  draw::GetEffectTex(0x3e);
  draw::Sprite_DrawShapeWrapper(0x180,draw::g_ScreenHeight + -0x80,0x60,0x60,0,0,0x60,0x60);
  M1160_UpdateTargetLock(param_1,PVARS);
  if (*(uint *)((int)PVARS + 0x70) != 0) {
    draw::ScreenPosFromWorldSpace(&local_c0,(ulonglong)*(uint *)((int)PVARS + 0x70) + 0x10);
    dVar13 = 0.0625;
    uVar2 = fastfunc::FastDoubleToInt
                      ((double)((local_c0 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
    uVar3 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(local_bc - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      * dVar13));
    if (*(int *)((int)PVARS + 0x74) < 0x1f5) {
      lVar7 = ((LZCOUNT(-(*(int *)((int)PVARS + 0x74) / (int)(animationSpeed * 20.5) & 1U)) << 0x3a)
               >> 0x3f & 0xff00U) + 0x600000ff;
      M1160_DrawShape(&DAT_00765934,0x1e,uVar2,uVar3,&DAT_00fffff3,lVar7);
      M1160_DrawShape(&DAT_00765874,0x1e,uVar2,uVar3,&DAT_00fffff3,lVar7);
      M1160_DrawShape(&DAT_007659ac,0x1a,uVar2,uVar3,&DAT_00fffff3,lVar7);
      *(undefined4 *)((int)PVARS + 0xec) = *(undefined4 *)((int)PVARS + 0x70);
    }
    else {
      uVar8 = fastfunc::FastIntToDouble(uVar2);
      uVar9 = fastfunc::FastIntToDouble(uVar3);
      uVar10 = 0x3ff0000000000000;
      dVar13 = (double)fastfunc::FastIntToDouble(0x3ff0000000000000,worldUpdateTime);
      dVar12 = 0.03333333507180214;
      fVar15 = mobyutil::MB_WrapRot((float)(dVar13 * 0.03333333507180214));
      M1160_DrawShapeRotated(uVar8,uVar9,uVar10,(double)fVar15,&DAT_00765934,0x1e);
      dVar13 = (double)fastfunc::FastIntToDouble(DAT_007651b0);
      dVar11 = (double)fastfunc::FastIntToDouble(*(int *)((int)PVARS + 0x74) + -500);
      dVar14 = (double)(float)((double)(float)(dVar11 * 5.0) / dVar13);
      uVar2 = fastfunc::FastIntToDouble((double)(float)(dVar11 * 5.0),uVar2);
      uVar3 = fastfunc::FastIntToDouble(uVar3);
      dVar13 = (double)fastfunc::FastIntToDouble(worldUpdateTime);
      fVar15 = mobyutil::MB_WrapRot((float)(dVar13 * dVar12));
      M1160_DrawShapeRotated(uVar2,uVar3,dVar14,(double)fVar15,&DAT_00765874,0x1e);
      *(undefined4 *)((int)PVARS + 0xec) = 0;
    }
  }
  iVar6 = 0x40;
  iVar5 = 0;
  if (DAT_0096b2d7 != 0) {
    uVar2 = 0x4038000000000000;
    uVar3 = 0x3fe0000000000000;
    do {
      if (iVar5 < (int)(uint)DAT_0096b2d6) {
        M1160_DrawShapeScaled(uVar2,(double)(longlong)iVar6,uVar3,&DAT_00765700,0x19);
      }
      else {
        M1160_DrawShapeScaled(uVar2,(double)(longlong)iVar6,uVar3,&DAT_00765700,0x19);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x12;
    } while (iVar5 < (int)(uint)DAT_0096b2d7);
  }
  M1160_DrawShape(&DAT_00765784,0x1e,*(undefined4 *)((int)PVARS + 0xe0),
                  *(undefined4 *)((int)PVARS + 0xe4),&DAT_00fffff3,0xff20ff20);
  libc::snprintf(acStack_a8,"OBJECTIVES REMAINING: %d",*(undefined4 *)((int)PVARS + 0xe8));
  sVar4 = libc::strlen(acStack_a8);
  draw::FontPrintSmallLeft(0x10,0x159,0x80008000,acStack_a8,sVar4);
  libc::snprintf(acStack_a8,"ALTITUDE: %03.0f",(double)((param_1->pos).z - 100.0));
  sVar4 = libc::strlen(acStack_a8);
  draw::FontPrintSmallLeft(0x10,0x168,0x80008000,acStack_a8,sVar4);
  dVar11 = 180.0;
  dVar13 = 0.31830987334251404;
  libc::snprintf(acStack_a8,"ROLL: %03.0f",(double)((param_1->rotation).x * 180.0 * 0.31830987));
  sVar4 = libc::strlen(acStack_a8);
  draw::FontPrintSmallLeft(0x10,0x177,0x80008000,acStack_a8,sVar4);
  libc::snprintf(acStack_a8,"HEADING: %03.0f",
                 (double)(float)((double)(float)((double)(param_1->rotation).z * dVar11) * dVar13));
  sVar4 = libc::strlen(acStack_a8);
  draw::FontPrintSmallLeft(0x10,0x186,0x80008000,acStack_a8,sVar4);
  if (DAT_0096b2dc < DAT_0096b2e0 * 0.1) {
    if ((worldUpdateTime / 0x5a & 1U) != 0) {
      draw::FontPrintSmallCenter(0x100,0x186,0x80000080,"WARNING! SHIP NEEDS REPAIR",0x1a);
    }
  }
  fVar15 = (DAT_0096b2dc - *(float *)((int)PVARS + 0xf0)) * 0.2;
  if (1.0 - ABS(fVar15) < 0.0) {
    fVar15 = fVar15 / ABS(fVar15);
  }
  fVar15 = *(float *)((int)PVARS + 0xf0) + fVar15;
  *(float *)((int)PVARS + 0xf0) = fVar15;
  iVar5 = fastfunc::FastDoubleToInt((double)((fVar15 * 251.0) / DAT_0096b2e0));
  uVar1 = g_viewMtxPtr;
  iVar5 = iVar5 + 2;
  iVar5 = iVar5 + ((uint)(0xfd - (longlong)iVar5 >> 0x3f) & 0xfdU - iVar5);
  idol_draw::BindFragmentProgram(g_viewMtxPtr,HUD_Pass,0xd);
  uVar2 = FUN_004de9c4(uVar1,0xd,"minHealth");
  idol_draw::Gfx_SubmitHudDrawCommands(uVar1,HUD_Pass,0xd,uVar2,local_b0,1);
  draw::GetEffectTex(0x3c);
  draw::Sprite_DrawShapeWrapper(0x170,draw::g_ScreenHeight + -0x90,0x80,0x80,0,0,0x80,0x80);
  idol_draw::BindFragmentProgram(uVar1,HUD_Pass,0xc);
  draw::GetEffectTex(0x3d);
  draw::Sprite_DrawShapeWrapper(0x170,draw::g_ScreenHeight + -0x90,0x80,0x80,0,0,0x80,0x80);
  *(uint *)((int)PVARS + 0xf4) = iVar5 + ((uint)((longlong)iVar5 + -2 >> 0x3f) & 2U - iVar5);
  return;
}



//==== 001e6958  ns=mobyupd::update1160  size=0x23c
// sig: undefined M1160_FireGun(void)
// callers(0): 
// callees(3): 000f1114 mobyfunc::GetBonePosition; 00184670 mobyupdate_helpers::M1009_00184670; 004fff60 fastfunc::FastDecTimerS32

void mobyupd::update1160::M1160_FireGun(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_60 [16];
  undefined1 auStack_50 [24];
  
  iVar2 = fastfunc::FastDecTimerS32(param_2 + 100);
  if ((iVar2 != 0) && ((pad_DownButtons & 0x84) != 0)) {
    mobyfunc::GetBonePosition(param_1,*(byte *)(param_2 + 0x31) & 1,auStack_50);
    mobyupdate_helpers::M1009_00184670
              (0x4069000000000000,0xbff0000000000000,param_1,local_60,auStack_50);
    uVar1 = DAT_007650b0;
    *(byte *)(param_2 + 0x31) = *(byte *)(param_2 + 0x31) ^ 1;
    *(undefined4 *)(param_2 + 100) = uVar1;
  }
  return;
}



//==== 001e6ba8  ns=mobyupd::update1160  size=0x244
// sig: undefined M1160_UpdateGunsAndAimPos(void)
// callers(1): 001e70a8 mobyupd::update1160::M1160_UpdateFlight
// callees(6): 00065490 draw::ScreenPosFromWorldSpace; 000f1114 mobyfunc::GetBonePosition; 000fe610 mobyutil::MB_SphericalToVector; 00184670 mobyupdate_helpers::M1009_00184670; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1160::M1160_UpdateGunsAndAimPos
               (double param_1,double param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined1 auStack_60 [16];
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  longlong local_30;
  
  mobyutil::MB_SphericalToVector
            (DAT_007650ac * DAT_007650e0,(float)param_1,(float)param_2,&local_70);
  local_70 = local_70 + *param_4;
  local_6c = local_6c + param_4[1];
  local_68 = local_68 + param_4[2];
  iVar5 = fastfunc::FastDecTimerS32(param_4 + 0x19);
  if ((iVar5 != 0) && ((pad_DownButtons & 0x84) != 0)) {
    mobyfunc::GetBonePosition(param_3,*(byte *)((int)param_4 + 0x31) & 1,auStack_60);
    mobyupdate_helpers::M1009_00184670
              (0x4069000000000000,0xbff0000000000000,param_3,&local_70,auStack_60);
    param_4[0x19] = DAT_007650b0;
    *(byte *)((int)param_4 + 0x31) = *(byte *)((int)param_4 + 0x31) ^ 1;
  }
  fVar4 = 0.0;
  local_44 = local_64;
  fVar3 = SQRT(local_68 * local_68 + local_70 * local_70 + local_6c * local_6c);
  fVar2 = 23.0 / fVar3;
  fVar1 = local_70 * fVar2;
  fVar6 = local_6c * fVar2;
  fVar2 = local_68 * fVar2;
  local_70 = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_70 = fVar1;
  }
  local_6c = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_6c = fVar6;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_70 = fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_6c = fVar6;
  }
  local_68 = fVar4;
  if (fVar3 - 0.0 < 0.0) {
    local_68 = fVar2;
  }
  local_50 = local_70 + *(float *)(param_3 + 0x10);
  local_4c = local_6c + *(float *)(param_3 + 0x14);
  local_48 = local_68 + *(float *)(param_3 + 0x18);
  draw::ScreenPosFromWorldSpace(&local_40,&local_50);
  local_30 = (longlong)SCREEN_PROJECTION_MAP_X;
  dVar7 = 0.0625;
  fVar6 = (float)fastfunc::FastDoubleToInt((double)((local_40 - (float)local_30) * 0.0625));
  param_4[0x38] = fVar6;
  local_30 = (longlong)SCREEN_PROJECTION_MAP_Y;
  fVar6 = (float)fastfunc::FastDoubleToInt
                           ((double)(float)((double)(local_3c - (float)local_30) * dVar7));
  param_4[0x39] = fVar6;
  return;
}



//==== 001e6df8  ns=mobyupd::update1160  size=0x1ac
// sig: undefined M1160_UpdateMissiles(void)
// callers(1): 001e70a8 mobyupd::update1160::M1160_UpdateFlight
// callees(3): 000f1114 mobyfunc::GetBonePosition; 00192330 mobyupdate_helpers::Spawn_Moby1034; 004fff60 fastfunc::FastDecTimerS32

void mobyupd::update1160::M1160_UpdateMissiles(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 local_50 [32];
  
  iVar1 = fastfunc::FastDecTimerS32(param_2 + 0x68);
  if (((iVar1 != 0) && ((pad_DownButtons & 0x28) != 0)) && (DAT_0096b2d6 != 0)) {
    mobyfunc::GetBonePosition(param_1,DAT_0096b2d6 & 1,local_50);
    iVar1 = mobyupdate_helpers::Spawn_Moby1034
                      ((double)(DAT_007650b4 * DAT_007650e0),param_1,local_50,
                       *(undefined4 *)(param_2 + 0xec),param_1 + 0x40,&DAT_001e6dec,
                       (int)(animationSpeed * 300.5));
    if (iVar1 != 0) {
      DAT_0096b2d6 = DAT_0096b2d6 - 1;
      *(undefined4 *)(param_2 + 0x68) = DAT_007650b8;
    }
  }
  return;
}



//==== 001e6fb8  ns=mobyupd::update1160  size=0x98
// sig: undefined M1160_BlendByDist(void)
// callers(0): 
// callees(0): 

double mobyupd::update1160::M1160_BlendByDist(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = *(float *)(param_3 + 0x14) - DAT_00765a94;
  fVar2 = *(float *)(param_3 + 0x10) - DAT_00765a90;
  fVar3 = *(float *)(param_3 + 0x18) - DAT_00765a98;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (220.0 < fVar1) {
    dVar4 = (double)((fVar1 - 220.0) * 0.0055555557);
    if (dVar4 - 0.0 < 0.0) {
      dVar4 = 0.0;
    }
    if (1.0 - dVar4 < 0.0) {
      dVar4 = 1.0;
    }
    param_1 = (double)(float)((double)(float)(1.0 - dVar4) * param_1 +
                             (double)(float)(dVar4 * param_2));
  }
  return param_1;
}



//==== 001e70a8  ns=mobyupd::update1160  size=0xf2c
// sig: undefined M1160_UpdateFlight(MobyInstance * moby, undefined4 param_2)
// callers(1): 001e8018 mobyupd::update1160::UpdateMoby_1160_JetFighterUnused
// callees(16): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00059e20 collproc::CollSphere; 000668d0 draw::UpdateViewContext; 0006d720 RegisterFuncForMoby; 000fe610 mobyutil::MB_SphericalToVector; 00106150 mobyutil::MB_RegisterLameShadow; 00109b40 mobyutil::AccelDelt; 0010a050 mobyutil::AccelDeltAng; 0010e030 mobyutil::MB_genericExplosion; 001e6ba8 mobyupd::update1160::M1160_UpdateGunsAndAimPos; 001e6df8 mobyupd::update1160::M1160_UpdateMissiles; 00500608 fastfunc::FastVecNormalize; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots
// strings: 00765080: '@&ff=' (raw)

void mobyupd::update1160::M1160_UpdateFlight(MobyInstance *moby,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyModeBit MVar13;
  MOBY_OCLASSES MVar14;
  ulonglong *puVar15;
  int iVar16;
  CONTROLLER_INPUT CVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar24;
  longlong lVar22;
  longlong lVar23;
  longlong lVar25;
  ulonglong uVar26;
  float *pfVar28;
  longlong lVar27;
  longlong lVar29;
  byte bVar30;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  double dVar39;
  ulonglong in_f30;
  undefined8 uVar40;
  ulonglong in_f31;
  double dVar41;
  float fVar42;
  
  lVar25 = (longlong)param_2;
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar23 = uVar20 - 0x210;
  puVar15 = (ulonglong *)lVar23;
  *puVar15 = uVar20;
  puVar15[0x44] = in_LR;
  puVar15[0x3c] = in_f26;
  puVar15[0x3d] = in_f27;
  puVar15[0x3e] = in_f28;
  puVar15[0x3f] = in_f29;
  puVar15[0x40] = in_f30;
  puVar15[0x41] = in_f31;
  puVar15[0x3a] = unaff_r30;
  puVar15[0x3b] = unaff_r31;
  puVar15[0x39] = unaff_r29;
  dVar41 = 0.0;
  *(undefined4 *)(puVar15 + 0x18) = 0;
  *(undefined4 *)((int)puVar15 + 0xc4) = 0;
  *(undefined4 *)(puVar15 + 0x19) = 0;
  *(undefined4 *)((int)puVar15 + 0xcc) = 0;
  fVar3 = DAT_007650e0;
  uVar40 = 0x4020000000000000;
  fVar1 = mobyutil::g_FrameTime * 8.0;
  iVar24 = *(int *)(param_2 + 0x44) + 1;
  MVar13 = moby->modeBits;
  *(int *)(param_2 + 0x44) = iVar24;
  uVar19 = pad_Repeat;
  moby->modeBits =
       MVar13 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                 DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                 TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  uVar18 = pad_DownButtons;
  CVar17 = g_downButtons;
  fVar2 = ANALOG_STICKS.z;
  fVar42 = *(float *)(param_2 + 0x38);
  dVar35 = (double)ANALOG_STICKS.w;
  dVar38 = (double)*(float *)(param_2 + 0xd8);
  puVar15[0x38] = unaff_r28;
  puVar15[0x37] = unaff_r27;
  puVar15[0x36] = unaff_r26;
  puVar15[0x35] = unaff_r25;
  puVar15[0x34] = unaff_r24;
  *(float *)(puVar15 + 0x19) = fVar1 * fVar3;
  if (((uVar19 & 0x8000) != 0) &&
     (bVar30 = *(char *)(param_2 + 0x30) + 1, *(byte *)(param_2 + 0x30) = bVar30, 1 < bVar30)) {
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  if (DAT_00765040 < iVar24) {
    if ((uVar18 & 0x40) == 0) {
      if (DAT_00765044 * DAT_007650e0 - DAT_0076503c * DAT_007650e0 <= fVar42) {
        fVar1 = DAT_00765044 * DAT_007650e0;
        if (fVar1 < fVar42) {
          fVar1 = (DAT_00765044 * DAT_007650e0 - fVar42) * DAT_00765050 + fVar42;
        }
      }
      else {
        fVar1 = DAT_0076503c * DAT_007650e0 + fVar42;
      }
      *(float *)(param_2 + 0x38) = fVar1;
    }
    else {
      fVar1 = DAT_0076504c * DAT_007650e0 + fVar42;
      *(float *)(param_2 + 0x38) = fVar1;
      fVar42 = DAT_00765048 * DAT_007650e0;
      if (fVar42 < fVar1) {
        *(float *)(param_2 + 0x38) = fVar42;
        fVar1 = fVar42;
      }
    }
  }
  else {
    fVar1 = DAT_00765038 * DAT_007650e0 + fVar42;
    *(float *)(param_2 + 0x38) = fVar1;
  }
  if (DAT_00765054 < iVar24) {
    fVar1 = DAT_007650f4;
    fVar42 = DAT_00765104;
    if ((CVar17 & L3) != 0) {
      fVar2 = DAT_00765070 * (fVar2 / DAT_00765068);
      dVar35 = (double)(DAT_0076506c * (float)(dVar35 / (double)DAT_00765064));
      fVar1 = DAT_007650f8;
      fVar42 = DAT_00765108;
    }
    dVar38 = (double)fVar42;
    mobyutil::AccelDelt(fVar2,DAT_007650ec,DAT_007650f0,fVar1,(float *)(param_2 + 0x4c),0x760000,
                        (float *)(param_2 + 0x7c));
    mobyutil::AccelDelt((float)dVar35,DAT_007650fc,DAT_00765100,(float)dVar38,
                        (float *)(param_2 + 0x50),0x760000,(float *)(param_2 + 0x80));
    mobyutil::AccelDeltAng
              ((double)(*(float *)(param_2 + 0x4c) * DAT_007650cc),(double)DAT_0076510c,
               (double)DAT_00765110,(double)DAT_00765114,lVar25 + 0xd0,0x760000,lVar25 + 0x84);
    dVar38 = (double)fastfunc::FastDiffRots
                               ((double)*(float *)(param_2 + 0xd4),
                                (double)(*(float *)(param_2 + 0x50) * DAT_00765064));
    *(float *)(param_2 + 0xd4) = (float)dVar38;
    dVar38 = (double)fastfunc::FastDiffRots
                               ((double)*(float *)(param_2 + 0xd8),
                                (double)(*(float *)(param_2 + 0x4c) * DAT_00765068));
    fVar1 = *(float *)(param_2 + 0x38);
    *(float *)(param_2 + 0xd8) = (float)dVar38;
  }
  mobyutil::MB_SphericalToVector
            (fVar1,(float)dVar38,-*(float *)(param_2 + 0xd4),(float *)(puVar15 + 0x1a));
  fVar42 = *(float *)((int)puVar15 + 0xd4);
  fVar2 = *(float *)(puVar15 + 0x1a);
  fVar1 = *(float *)(puVar15 + 0x1b);
  fVar3 = *(float *)(param_2 + 0x38);
  fVar4 = *(float *)(param_2 + 0x50);
  fVar5 = *(float *)(param_2 + 0x4c);
  fVar6 = (moby->pos).x;
  fVar7 = (moby->pos).y;
  fVar8 = (moby->pos).z;
  bVar30 = *(byte *)(param_2 + 0x30);
  fVar10 = fVar1 * fVar1 + fVar2 * fVar2 + fVar42 * fVar42;
  if ((double)SQRT(fVar10) == dVar41) {
    uVar9 = *(undefined4 *)((int)puVar15 + 0xdc);
    dVar38 = dVar41;
    dVar35 = dVar41;
    dVar36 = dVar41;
  }
  else {
    fVar11 = 1.0 / SQRT(fVar10);
    fVar11 = -(fVar10 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    uVar9 = *(undefined4 *)((int)puVar15 + 0xdc);
    fVar11 = -(fVar10 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    fVar11 = -(fVar10 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    dVar38 = (double)(fVar2 * fVar11);
    dVar36 = (double)(fVar42 * fVar11);
    dVar35 = (double)(fVar1 * fVar11);
  }
  *(float *)(param_2 + 0x10) = (float)dVar38;
  *(float *)(param_2 + 0x14) = (float)dVar36;
  *(float *)(param_2 + 0x18) = (float)dVar35;
  *(undefined4 *)(param_2 + 0x1c) = uVar9;
  (moby->pos).x = fVar6 + fVar2;
  (moby->pos).y = fVar7 + fVar42;
  (moby->pos).z = fVar8 + fVar1;
  dVar38 = (double)(fVar3 - DAT_00765044);
  fVar42 = DAT_00765048 - DAT_00765044;
  *(undefined4 *)((int)puVar15 + 0x10c) = 0;
  *(undefined4 *)((int)puVar15 + 0x114) = 0;
  *(undefined4 *)((int)puVar15 + 0x11c) = 0;
  if (dVar38 - dVar41 < 0.0) {
    dVar38 = dVar41;
  }
  fVar42 = (float)(dVar38 / (double)fVar42);
  dVar39 = (double)fVar42;
  *(float *)(param_2 + 0xb4) = fVar42;
  fVar6 = DAT_00765154;
  fVar2 = DAT_00765080 * DAT_007650dc;
  fVar42 = fVar5 * DAT_007650d0 * DAT_007650dc;
  fVar1 = (fVar4 * DAT_0076517c + DAT_00765078) * DAT_007650dc;
  fVar3 = -(float)((double)DAT_00765180 * dVar39 - -(double)(fVar4 * DAT_00765178 - DAT_00765074)) *
          DAT_007650dc;
  *(float *)(puVar15 + 0x22) = DAT_0076507c * DAT_007650dc;
  *(float *)((int)puVar15 + 0x104) = fVar42;
  *(float *)(puVar15 + 0x21) = fVar1;
  *(float *)(puVar15 + 0x23) = fVar2;
  *(float *)(puVar15 + 0x20) = fVar3;
  mobyutil::AccelDelt(*(float *)(puVar15 + (uint)bVar30 * 2 + 0x20),fVar6,DAT_00765158,DAT_0076515c,
                      (float *)(param_2 + 0xa4),0x760000,(float *)(param_2 + 0xb8));
  mobyutil::AccelDelt(*(float *)((int)puVar15 + (uint)*(byte *)(param_2 + 0x30) * 0x10 + 0x104),
                      DAT_00765160,DAT_00765164,DAT_00765168,(float *)(param_2 + 0xa8),0x760000,
                      (float *)(param_2 + 0xbc));
  fVar42 = mobyutil::AccelDelt(*(float *)(puVar15 + (uint)*(byte *)(param_2 + 0x30) * 2 + 0x21),
                               DAT_0076516c,DAT_00765170,DAT_00765174,(float *)(param_2 + 0xac),
                               0x760000,(float *)(param_2 + 0xc0));
  dVar36 = (double)*(float *)(param_2 + 0xa4);
  dVar35 = (double)*(float *)(param_2 + 0xa8);
  dVar38 = (double)*(float *)(param_2 + 0xac);
  fastfunc::FastEulerToMtx((double)fVar42,uVar20 - 0xf0,lVar25 + 0xd0);
  fVar42 = *(float *)(puVar15 + 0x26);
  fVar2 = *(float *)((int)puVar15 + 0x134);
  fVar1 = *(float *)(puVar15 + 0x27);
  fVar3 = *(float *)(puVar15 + 0x24);
  fVar4 = *(float *)((int)puVar15 + 0x124);
  fVar5 = *(float *)(puVar15 + 0x25);
  fVar6 = *(float *)(puVar15 + 0x28);
  fVar7 = *(float *)((int)puVar15 + 0x144);
  fVar8 = *(float *)(puVar15 + 0x29);
  *(float *)(param_2 + 0xc4) =
       (ANALOG_STICKS.x * 1.5707964 - *(float *)(param_2 + 0xc4)) * DAT_007650bc +
       *(float *)(param_2 + 0xc4);
  *(float *)(param_2 + 200) =
       (ANALOG_STICKS.y * 1.5707964 - *(float *)(param_2 + 200)) * DAT_007650c0 +
       *(float *)(param_2 + 200);
  fVar10 = (moby->pos).x;
  fVar11 = (moby->pos).y;
  fVar12 = (moby->pos).z;
  *(f32 *)((int)puVar15 + 0xfc) = (moby->pos).w;
  *(float *)(puVar15 + 0x1e) =
       fVar10 + (float)((double)fVar6 * dVar38 +
                       (double)(float)((double)fVar3 * dVar36 +
                                      (double)(float)((double)fVar42 * dVar35)));
  *(float *)((int)puVar15 + 0xf4) =
       fVar11 + (float)((double)fVar7 * dVar38 +
                       (double)(float)((double)fVar4 * dVar36 +
                                      (double)(float)((double)fVar2 * dVar35)));
  *(float *)(puVar15 + 0x1f) =
       fVar12 + (float)((double)fVar8 * dVar38 +
                       (double)(float)((double)fVar5 * dVar36 +
                                      (double)(float)((double)fVar1 * dVar35)));
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar15 + 0x1e));
  uVar32 = fastfunc::FastWrapRot
                     (*(float *)(param_2 + 0xd0) * DAT_00765088,
                      *(float *)(param_2 + 0x4c) * DAT_00765084);
  uVar33 = fastfunc::FastWrapRot(*(float *)(param_2 + 0xd4),DAT_0076508c);
  uVar33 = fastfunc::FastDiffRots(uVar33,(double)(*(float *)(param_2 + 0x50) * DAT_00765064));
  dVar38 = (double)*(float *)(param_2 + 0xd8);
  mobyutil::AccelDeltAng
            (uVar32,(double)DAT_00765130,(double)DAT_00765134,(double)DAT_00765138,lVar25 + 0x20,
             0x760000,lVar25 + 0x8c);
  mobyutil::AccelDeltAng
            (uVar33,(double)DAT_0076513c,(double)DAT_00765140,(double)DAT_00765144,lVar25 + 0x24,
             0x760000,lVar25 + 0x90);
  mobyutil::AccelDeltAng
            (dVar38,(double)DAT_00765148,(double)DAT_0076514c,(double)DAT_00765150,lVar25 + 0x28,
             0x760000,lVar25 + 0x94);
  fVar42 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0xc4);
  *(undefined4 *)(puVar15 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
  dVar38 = (double)fastfunc::FastDiffRots((double)fVar42,(double)fVar2);
  fVar42 = *(float *)(param_2 + 0x24);
  *(float *)(puVar15 + 0x1d) = (float)dVar38;
  dVar38 = (double)fastfunc::FastDiffRots((double)fVar42,(double)*(float *)(param_2 + 200));
  *(float *)((int)puVar15 + 0xe4) = (float)dVar38;
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar15 + 0x1c));
  mobyutil::AccelDelt((float)((double)(float)((double)DAT_00765188 - (double)DAT_00765184) * dVar39
                             + (double)DAT_00765184),DAT_0076518c,DAT_00765190,DAT_00765194,
                      (float *)(param_2 + 0x9c),0x760000,(float *)(param_2 + 0xb0));
  fVar42 = *(float *)(param_2 + 0x9c) * 0.5;
  fVar1 = fVar42 + 1.5707963;
  fVar2 = 3.1415925 - fVar42;
  if (fVar42 - (3.1415925 - fVar42) < 0.0) {
    fVar2 = fVar42;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar4 = -3.1415925 - fVar42;
  if ((-3.1415925 - fVar42) - fVar2 < 0.0) {
    fVar4 = fVar2;
  }
  fVar2 = fVar4 * fVar4;
  fVar42 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar42 = fVar3;
  }
  fVar1 = fVar42 * fVar42;
  fVar3 = fVar2 * fVar2 * fVar4;
  fVar5 = fVar2 * fVar3;
  fVar6 = fVar1 * fVar1 * fVar42;
  fVar7 = fVar1 * fVar6;
  ViewContext.xratio =
       (fVar2 * fVar5 * 2.601887e-06 +
       fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) /
       (fVar1 * fVar7 * 2.601887e-06 +
       fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar1 * fVar42 * -0.16666657 + fVar42);
  draw::UpdateViewContext();
  dVar38 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_2 + 0xd0),*(float *)(param_2 + 0x4c) * DAT_007651a0);
  (moby->rotation).x = (float)dVar38;
  dVar38 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_2 + 0xd4),
                              -(*(float *)(param_2 + 0x50) * DAT_007651a4));
  (moby->rotation).y = (float)dVar38;
  dVar38 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_2 + 0xd8),
                              -(*(float *)(param_2 + 0x4c) * DAT_00f08a00));
  (moby->rotation).z = (float)dVar38;
  dVar38 = 2.0;
  iVar24 = collproc::CollSphere(0x4000000000000000,lVar21 + 0x10);
  if (iVar24 != 0) {
    if (CollOutput.pMoby != (MobyInstance *)0x0) {
      MVar14 = (CollOutput.pMoby)->oClass;
      if (((MVar14 == 0x192 || MVar14 == RATCHET) || (MVar14 == AMMOCRATE_04C2)) ||
         (MVar14 == 0x4c3)) goto LAB_001e7ef4;
    }
    (moby->pos).x = CollOutput.push.x;
    (moby->pos).y = CollOutput.push.y;
    (moby->pos).z = CollOutput.push.z;
    (moby->pos).w = CollOutput.push.w;
    fastfunc::FastVecNormalize(uVar20 - 0x140,uVar20 - 0x140,0xa10980);
    dVar39 = ABS((double)*(float *)(puVar15 + 0x1a));
    dVar35 = ABS((double)*(float *)((int)puVar15 + 0xd4));
    dVar37 = (double)*(float *)(param_2 + 0xd8);
    *(float *)(puVar15 + 0x2b) = (float)(dVar39 - dVar35);
    dVar34 = 0.7853981852531433;
    uVar26 = (ulonglong)(*(uint *)(puVar15 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x2b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xd4) >> 0x1d) & 4;
    dVar36 = dVar39;
    if ((double)*(float *)(puVar15 + 0x2b) - dVar41 < 0.0) {
      dVar36 = dVar35;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar42 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if ((double)*(float *)(puVar15 + 0x2b) - dVar41 < 0.0) {
      dVar35 = dVar39;
    }
    dVar39 = dVar41;
    if (dVar41 < dVar36) {
      lVar22 = uVar20 - 0x200;
      lVar27 = uVar20 - 0x94;
      lVar29 = uVar20 - 0x84;
      lVar31 = 2;
      fVar1 = (float)(dVar35 - dVar36) / (float)(dVar35 + dVar36);
      fVar3 = fVar1 * fVar1;
      *(float *)(puVar15 + 0x31) = fVar1;
      *(float *)(puVar15 + 0x30) = fVar1;
      *(float *)((int)puVar15 + 0x184) = fVar1;
      *(float *)((int)puVar15 + 0x17c) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)(puVar15 + 0x30) = *(float *)(puVar15 + 0x30) * fVar3;
      *(float *)((int)puVar15 + 0x184) = *(float *)((int)puVar15 + 0x184) * fVar1;
      *(float *)(puVar15 + 0x31) = *(float *)(puVar15 + 0x31) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar22 + 0x17c) = *(float *)((int)lVar22 + 0x16c) * fVar1 * fVar1;
        iVar24 = (int)lVar27;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar20 - 0x94;
      pfVar28 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar27 = lVar29;
      do {
        fVar1 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar22 + 0x17c) = *(float *)((int)lVar22 + 0x17c) * fVar1;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar3;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar27 = 2;
      lVar22 = lVar23;
      dVar35 = dVar41;
      do {
        iVar24 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar16 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar24 + 0x17c)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      dVar39 = (double)((float)(dVar35 + 0.7853981852531433) * fVar2 + fVar42);
    }
    dVar35 = (double)fastfunc::FastDiffRots(dVar39,dVar37);
    dVar35 = (double)fastfunc::FastWrapRot((float)dVar37,(float)(dVar35 * (double)DAT_00765058));
    fVar42 = *(float *)((int)puVar15 + 0xd4);
    fVar2 = *(float *)(puVar15 + 0x1a);
    *(float *)(param_2 + 0xd8) = (float)dVar35;
    dVar37 = (double)*(float *)(param_2 + 0xd4);
    dVar35 = ABS((double)*(float *)(puVar15 + 0x1b));
    fVar42 = SQRT(fVar2 * fVar2 + fVar42 * fVar42);
    dVar39 = ABS((double)fVar42);
    *(float *)(puVar15 + 0x2a) = fVar42;
    *(float *)((int)puVar15 + 0x154) = (float)(dVar39 - dVar35);
    uVar26 = (ulonglong)(*(uint *)(puVar15 + 0x2a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x154) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x1b) >> 0x1d) & 4;
    fVar42 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    dVar36 = ABS((double)*(float *)(puVar15 + 0x2a));
    if ((double)*(float *)((int)puVar15 + 0x154) - dVar41 < 0.0) {
      dVar36 = dVar35;
    }
    if ((double)*(float *)((int)puVar15 + 0x154) - dVar41 < 0.0) {
      dVar35 = dVar39;
    }
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    dVar39 = dVar41;
    if (dVar41 < dVar36) {
      lVar22 = uVar20 - 0x200;
      lVar29 = uVar20 - 0xa4;
      lVar27 = uVar20 - 0xb4;
      lVar31 = 2;
      fVar1 = (float)(dVar35 - dVar36) / (float)(dVar35 + dVar36);
      fVar3 = fVar1 * fVar1;
      *(float *)(puVar15 + 0x2d) = fVar1;
      *(float *)(puVar15 + 0x2c) = fVar1;
      *(float *)((int)puVar15 + 0x164) = fVar1;
      *(float *)((int)puVar15 + 0x15c) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)(puVar15 + 0x2c) = *(float *)(puVar15 + 0x2c) * fVar3;
      *(float *)((int)puVar15 + 0x164) = *(float *)((int)puVar15 + 0x164) * fVar1;
      *(float *)(puVar15 + 0x2d) = *(float *)(puVar15 + 0x2d) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar22 + 0x15c) = *(float *)((int)lVar22 + 0x14c) * fVar1 * fVar1;
        iVar24 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar20 - 0xb4;
      pfVar28 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar27 = lVar29;
      do {
        fVar1 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar22 + 0x15c) = *(float *)((int)lVar22 + 0x15c) * fVar1;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar3;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar22 = 2;
      dVar35 = dVar41;
      do {
        iVar24 = (int)lVar23;
        iVar16 = (int)lVar29;
        lVar23 = lVar23 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar24 + 0x15c)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar39 = (double)((float)(dVar35 + dVar34) * fVar42 + fVar2);
    }
    dVar35 = (double)fastfunc::FastDiffRots(-dVar39,dVar37);
    dVar35 = (double)fastfunc::FastWrapRot((float)dVar37,(float)(dVar35 * (double)DAT_0076505c));
    *(float *)(param_2 + 0xd4) = (float)dVar35;
    *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) * DAT_0076509c;
    if (*(int *)(param_2 + 0xcc) == 0) {
      DAT_0096b2dc = DAT_0096b2dc - DAT_007650a0;
      if ((double)DAT_0096b2dc < dVar41) {
        fastfunc::FastVecNormalize(uVar20 - 0x150,uVar20 - 0x140,0xa10980);
        fVar2 = *(float *)((int)puVar15 + 0xc4);
        fVar1 = *(float *)(puVar15 + 0x18);
        fVar3 = *(float *)(puVar15 + 0x19);
        dVar35 = (double)mobyutil::g_FrameTime;
        puVar15[0x12] = 0xffffffffffffffff;
        puVar15[0x14] = 1;
        puVar15[0x15] = 1;
        puVar15[0x16] = 0xffffffffffffffff;
        puVar15[0x17] = 0;
        dVar36 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
        fVar42 = (float)((double)(float)(dVar35 * dVar38) / dVar36);
        dVar38 = dVar41;
        if (dVar41 - dVar36 < 0.0) {
          dVar38 = (double)(fVar1 * fVar42);
        }
        dVar35 = dVar41;
        if (dVar41 - dVar36 < 0.0) {
          dVar35 = (double)(fVar2 * fVar42);
        }
        dVar39 = dVar41;
        if (dVar41 - dVar36 < 0.0) {
          dVar39 = (double)(fVar3 * fVar42);
        }
        if (dVar36 - dVar41 < 0.0) {
          dVar38 = (double)(fVar1 * fVar42);
        }
        if (dVar36 - dVar41 < 0.0) {
          dVar35 = (double)(fVar2 * fVar42);
        }
        if (dVar36 - dVar41 < 0.0) {
          dVar39 = (double)(fVar3 * fVar42);
        }
        *(float *)(puVar15 + 0x18) = (float)dVar38;
        *(float *)((int)puVar15 + 0xc4) = (float)dVar35;
        *(float *)(puVar15 + 0x19) = (float)dVar39;
        mobyutil::MB_genericExplosion
                  (uVar40,0x4059000000000000,0x4030000000000000,uVar40,0x4022000000000000,
                   0x3ff0000000000000,0x4049000000000000,lVar21,uVar20 - 0x150,0,&DAT_001e7050,1,
                   0x1e,10,0x18);
        moby->state = '\a';
      }
      *(undefined4 *)(param_2 + 0xcc) = DAT_0076519c;
    }
  }
LAB_001e7ef4:
  RegisterFuncForMoby(&PTR_M1160_Hud_Draw_007090b0,moby);
  M1160_UpdateMissiles(lVar21,lVar25);
  uVar40 = fastfunc::FastWrapRot
                     (*(float *)(param_2 + 0x28),-(*(float *)(param_2 + 0x4c) * 0.14285715));
  dVar38 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_2 + 0x24),
                              *(float *)(param_2 + 0x50) * -0.14285715 - 0.1);
  M1160_UpdateGunsAndAimPos(uVar40,-dVar38,lVar21,lVar25);
  mobyutil::MB_RegisterLameShadow(DAT_007650dc * DAT_00765094,moby);
  return;
}



//==== 001e8018  ns=mobyupd::update1160  size=0xf9c
// sig: undefined UpdateMoby_1160_JetFighterUnused(MobyInstance * moby)
// callers(0): 
// callees(22): 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000f20f0 mobyutil::MB_BSphereGap; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fe610 mobyutil::MB_SphericalToVector; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 001e70a8 mobyupd::update1160::M1160_UpdateFlight; 002b9870 FUN_002b9870; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt; 005c5ad0 libc::memcpy

/* Moby 1160 */

void mobyupd::update1160::UpdateMoby_1160_JetFighterUnused(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *out;
  f32 fVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar16;
  longlong lVar15;
  MobyInstance *pMVar17;
  char cVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  double dVar30;
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
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x270;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x50] = in_LR;
  puVar11[0x4a] = in_f28;
  puVar11[0x4b] = in_f29;
  puVar11[0x4c] = in_f30;
  puVar11[0x4d] = in_f31;
  puVar11[0x49] = unaff_r31;
  puVar11[0x48] = unaff_r30;
  puVar11[0x47] = unaff_r29;
  puVar11[0x46] = unaff_r28;
  puVar11[0x45] = unaff_r27;
  puVar11[0x44] = unaff_r26;
  if (moby != (MobyInstance *)0x0) {
    out = (float *)moby->pVar;
    fastfunc::FastDecTimerS32(out + 0x33);
    uVar1 = moby->state;
    if ((((uVar1 != '\a') && (uVar1 != '\x01')) && (uVar1 != '\x02')) &&
       ((iVar16 = mobyutil::MB_damage(lVar14,0x30001,0), iVar16 != 0 && (moby->state == '\x04')))) {
      uVar10 = (int)*(uint *)(iVar16 + 0x2c) >> 0x1f;
      if ((int)((uVar10 >> 1 ^ *(uint *)(iVar16 + 0x2c)) - uVar10) <
          (int)(((uint)((int)DAT_0096b2dc >> 0x1f) >> 1 ^ (uint)DAT_0096b2dc) -
               ((int)DAT_0096b2dc >> 0x1f))) {
        DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar16 + 0x2c);
        if ((*(uint *)(iVar16 + 0x30) & 1) != 0) {
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          GameCamera.offset0.amp = 1.0;
          auVar32 = loadVectorLeftIndexed(in_LR,0x1e7fd4);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                               ,auVar33);
          lVar23 = uVar13 - 0x1b0;
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x168,
                          0x9513c0);
          dVar31 = (double)(*(float *)(iVar16 + 0x2c) * DAT_007650c8);
          mobyutil::MB_SphericalToVector(out[0xe],out[0x36],-out[0x35],(float *)lVar23);
          (moby->pos).x = (moby->pos).x + *(float *)(iVar16 + 0x10);
          (moby->pos).y = (moby->pos).y + *(float *)(iVar16 + 0x14);
          (moby->pos).z = (moby->pos).z + *(float *)(iVar16 + 0x18);
          fastfunc::FastVecNormalize(lVar23,lVar23,iVar16 + 0x10);
          fVar3 = ABS(*(float *)(puVar11 + 0x18));
          dVar29 = (double)out[0x36];
          fVar7 = ABS(*(float *)((int)puVar11 + 0xc4));
          *(float *)(puVar11 + 0x36) = fVar3 - fVar7;
          dVar28 = 0.0;
          uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x36) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1d) & 4;
          fVar4 = fVar3;
          if (*(float *)(puVar11 + 0x36) - 0.0 < 0.0) {
            fVar4 = fVar7;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          if (*(float *)(puVar11 + 0x36) - 0.0 < 0.0) {
            fVar7 = fVar3;
          }
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          dVar25 = dVar28;
          if (0.0 < fVar4) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0x6c;
            lVar20 = uVar13 - 0x7c;
            lVar24 = 2;
            fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
            fVar7 = fVar4 * fVar4;
            *(float *)(puVar11 + 0x40) = fVar4;
            *(float *)(puVar11 + 0x3f) = fVar4;
            *(float *)((int)puVar11 + 0x1fc) = fVar4;
            *(float *)((int)puVar11 + 500) = fVar4;
            fVar4 = fVar7 * fVar7;
            *(float *)(puVar11 + 0x3f) = *(float *)(puVar11 + 0x3f) * fVar7;
            *(float *)((int)puVar11 + 0x1fc) = *(float *)((int)puVar11 + 0x1fc) * fVar4;
            *(float *)(puVar11 + 0x40) = *(float *)(puVar11 + 0x40) * fVar4 * fVar7;
            do {
              *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 0x1e4) * fVar4 * fVar4;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0x7c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar4 = *pfVar21;
              fVar7 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 500) * fVar4;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar23 = lVar15;
            do {
              iVar16 = (int)lVar23;
              iVar12 = (int)lVar22;
              lVar23 = lVar23 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 500)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar6 + fVar3);
          }
          dVar25 = (double)fastfunc::FastDiffRots(dVar25,dVar29);
          dVar29 = (double)fastfunc::FastWrapRot
                                     ((float)dVar29,
                                      (float)((double)(float)(dVar25 * (double)DAT_00765058) *
                                             dVar31));
          out[0x36] = (float)dVar29;
          dVar30 = (double)out[0x35];
          dVar29 = ABS((double)*(float *)(puVar11 + 0x19));
          fVar4 = SQRT(*(float *)(puVar11 + 0x18) * *(float *)(puVar11 + 0x18) +
                       *(float *)((int)puVar11 + 0xc4) * *(float *)((int)puVar11 + 0xc4));
          dVar27 = ABS((double)fVar4);
          *(float *)(puVar11 + 0x35) = fVar4;
          *(float *)((int)puVar11 + 0x1ac) = (float)(dVar27 - dVar29);
          uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1d) & 4;
          dVar25 = ABS((double)*(float *)(puVar11 + 0x35));
          if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar28 < 0.0) {
            dVar25 = dVar29;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar28 < 0.0) {
            dVar29 = dVar27;
          }
          if (dVar28 < dVar25) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0x8c;
            lVar20 = uVar13 - 0x9c;
            lVar24 = 2;
            fVar3 = (float)(dVar29 - dVar25) / (float)(dVar29 + dVar25);
            fVar6 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x3c) = fVar3;
            *(float *)(puVar11 + 0x3b) = fVar3;
            *(float *)((int)puVar11 + 0x1dc) = fVar3;
            *(float *)((int)puVar11 + 0x1d4) = fVar3;
            fVar3 = fVar6 * fVar6;
            *(float *)(puVar11 + 0x3b) = *(float *)(puVar11 + 0x3b) * fVar6;
            *(float *)((int)puVar11 + 0x1dc) = *(float *)((int)puVar11 + 0x1dc) * fVar3;
            *(float *)(puVar11 + 0x3c) = *(float *)(puVar11 + 0x3c) * fVar3 * fVar6;
            do {
              *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1c4) * fVar3 * fVar3;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0x9c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar3 = *pfVar21;
              fVar6 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1d4) * fVar3;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar23 = lVar15;
            do {
              iVar16 = (int)lVar23;
              iVar12 = (int)lVar22;
              lVar23 = lVar23 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x1d4)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar4);
          }
          dVar28 = (double)fastfunc::FastDiffRots(dVar28,dVar30);
          dVar28 = (double)fastfunc::FastWrapRot
                                     ((float)dVar30,
                                      (float)((double)(float)(dVar28 * (double)DAT_0076505c) *
                                             dVar31));
          out[0x35] = (float)dVar28;
        }
      }
      else {
        mobyutil::MB_SphericalToVector(out[0xe],out[0x36],-out[0x35],(float *)(uVar13 - 0x1a0));
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        GameCamera.offset0.amp = 0.2;
        auVar32 = loadVectorLeftIndexed(0x10,0x1e7fd4);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x168,0x9513c0
                       );
        uVar26 = 0;
        DAT_0096b2dc = 0.0;
        moby->state = '\a';
        out[0xd] = 2.52234e-43;
        g_heroPosition.z = g_heroPosition.z + 0.2;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        hero::TransitionMovement(0,1);
        DAT_0096b2d0 = (MobyInstance *)0x0;
        DAT_0096b2d4 = ~RATCHET;
        puVar11[0x12] = 0xffffffffffffffff;
        puVar11[0x14] = 1;
        puVar11[0x15] = 1;
        puVar11[0x16] = 0xffffffffffffffff;
        puVar11[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (uVar26,uVar26,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar14,uVar13 - 0x1a0,0,0xffffffffffffffff,
                   1,10,3,0x10);
      }
    }
    moby->damage = -1;
    if (DAT_0096b2d0 == moby) {
      auVar32 = ZEXT416(0xffffffff);
      auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x50c4,0x760000);
      auVar34 = vectorReciprocalEstimateFloatingPoint(auVar33);
      auVar32 = loadVectorLeftIndexed(0x18,0x1e7fd4);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar32 = ZEXT416(0xffffffff);
      auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar41 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar36);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar37 = loadVectorLeftIndexed(0x15fc,0x969ce0);
      auVar36 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x28,0x1e7fd4);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar40,auVar38);
      auVar38 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar33 = vectorMultiplyAddFloatingPoint(auVar34,auVar33,auVar36);
      auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar39);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar38);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      DAT_0096b2e8 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x1608
                                ,0x969ce0);
    }
    uVar1 = moby->state;
    if (uVar1 == '\a') {
      hero::g_heroInvisible = 0;
      g_heroMobyPtr->collisionMesh = (float *)0x0;
      hero::TransitionMovement(0,1);
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      mobyfunc::DeleteMoby(moby);
    }
    else {
      if (uVar1 != '\x06') {
        if (uVar1 == '\x05') {
          iVar16 = fastfunc::FastDecTimerS32(out + 0xd);
          if (iVar16 != 0) {
            moby->state = '\x01';
          }
        }
        else if (uVar1 == '\x04') {
          M1160_UpdateFlight(moby,out);
        }
        else if (uVar1 == '\x03') {
          dVar31 = (double)((moby->pos).y - g_heroPosition.y);
          dVar25 = (double)((moby->pos).x - g_heroPosition.x);
          dVar29 = (double)((moby->pos).z - g_heroPosition.z);
          dVar28 = (double)fastfunc::FastDiffRots((double)out[0x36],(double)g_heroRotation.z);
          if ((SQRT((float)(dVar29 * dVar29 +
                           (double)(float)(dVar25 * dVar25 + (double)(float)(dVar31 * dVar31)))) <
               DAT_00765030) && (dVar28 < (double)DAT_00765034)) {
            mobyutil::MB_SphericalToVector(DAT_00765024,out[0x36],-out[0x35],out);
            moby->state = '\x04';
            moby->scale = moby->pClass->gScale * DAT_007650dc;
            hero::g_heroInvisible = 1;
          }
          dVar27 = (double)DAT_00765028;
          g_heroPosition.x = (float)(dVar27 * dVar25 + (double)g_heroPosition.x);
          g_heroPosition.y = (float)(dVar27 * dVar31 + (double)g_heroPosition.y);
          g_heroPosition.z = (float)(dVar27 * dVar29 + (double)g_heroPosition.z);
          dVar28 = (double)fastfunc::FastWrapRot
                                     (g_heroRotation.z,(float)((double)DAT_0076502c * dVar28));
          g_heroRotation.z = (float)dVar28;
        }
        else if (uVar1 == '\x02') {
          hero::TransitionMovement(0x32,1);
          camera::SetCameraPosition(0x951500,0x951510,0,0,0);
          out[0xf] = 0.0;
          out[0x10] = 0.0;
          fVar4 = DAT_00765024;
          out[0x11] = 0.0;
          out[0xe] = fVar4;
          out[0x13] = 0.0;
          out[0x14] = 0.0;
          out[0x1a] = 0.0;
          out[0x19] = 0.0;
          out[0x31] = 0.0;
          out[0x32] = 0.0;
          moby->updateDistance = -1;
          pMVar17 = g_heroMobyPtr;
          moby->drawDistance = 0xff;
          pMVar17->collisionMesh = (float *)0xffffffff;
          moby->state = '\x03';
          g_heroPosition.x = DAT_00765028 * ((moby->pos).x - g_heroPosition.x) + g_heroPosition.x;
          g_heroPosition.y = DAT_00765028 * ((moby->pos).y - g_heroPosition.y) + g_heroPosition.y;
          g_heroPosition.z = DAT_00765028 * ((moby->pos).z - g_heroPosition.z) + g_heroPosition.z;
          dVar28 = (double)fastfunc::FastDiffRots((double)out[0x36],(double)g_heroRotation.z);
          dVar28 = (double)fastfunc::FastWrapRot
                                     (g_heroRotation.z,(float)((double)DAT_0076502c * dVar28));
          g_heroRotation.z = (float)dVar28;
        }
        else if (uVar1 == '\x01') {
          dVar28 = (double)mobyutil::MB_BSphereGap(lVar14,g_heroMobyPtr);
          if (dVar28 < (double)DAT_00765020) {
            moby->state = '\x02';
            DAT_0096b2d4 = moby->oClass;
            DAT_0096b2ee = 1;
            DAT_0096b2d6 = SUB41(out[0x1b],0);
            DAT_0096b2d7 = (undefined1)DAT_007650a8;
            DAT_0096b2dc = out[0x12];
            DAT_0096b2d0 = moby;
            DAT_0096b2d8 = DAT_0096b2d7;
            out[0x3c] = 0.0;
            out[0x3d] = 3.57331e-43;
            DAT_0096b2e4 = 0x42c80000;
            DAT_0096b2e0 = DAT_007650c4;
            DAT_0096b2d9 = 3;
            DAT_0096b2da = 3;
            DAT_0096b2db = 3;
            DAT_0096b2ef = 0;
          }
        }
        else if (uVar1 == '\0') {
          out[0x12] = DAT_00765098;
          moby->state = '\x01';
          fVar4 = DAT_007650a4;
          *(undefined1 *)(out + 0xc) = 0;
          out[0x1b] = fVar4;
          moby->scale = moby->pClass->gScale;
          out[8] = out[0x34];
          out[9] = out[0x35];
          fVar7 = ViewContext.xratio;
          fVar3 = ABS(ViewContext.xratio);
          *(undefined4 *)(puVar11 + 0x34) = 0x3f800000;
          *(float *)((int)puVar11 + 0x1a4) = 1.0 - fVar3;
          fVar4 = 0.0;
          uVar19 = (ulonglong)(*(uint *)((int)puVar11 + 0x1a4) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar7 >> 0x1d) & 4;
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar6 = ABS(*(float *)(puVar11 + 0x34));
          if (*(float *)((int)puVar11 + 0x1a4) - 0.0 < 0.0) {
            fVar6 = fVar3;
          }
          if (*(float *)((int)puVar11 + 0x1a4) - 0.0 < 0.0) {
            fVar3 = 1.0;
          }
          fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if (0.0 < fVar6) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0xac;
            lVar20 = uVar13 - 0xbc;
            lVar24 = 2;
            fVar3 = (fVar3 - fVar6) / (fVar3 + fVar6);
            fVar6 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x38) = fVar3;
            *(float *)(puVar11 + 0x37) = fVar3;
            *(float *)((int)puVar11 + 0x1bc) = fVar3;
            *(float *)((int)puVar11 + 0x1b4) = fVar3;
            fVar3 = fVar6 * fVar6;
            *(float *)(puVar11 + 0x37) = *(float *)(puVar11 + 0x37) * fVar6;
            *(float *)((int)puVar11 + 0x1bc) = *(float *)((int)puVar11 + 0x1bc) * fVar3;
            *(float *)(puVar11 + 0x38) = *(float *)(puVar11 + 0x38) * fVar3 * fVar6;
            do {
              *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1a4) * fVar3 * fVar3;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0xbc;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar3 = *pfVar21;
              fVar6 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1b4) * fVar3;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar23 = 2;
            do {
              iVar16 = (int)lVar15;
              lVar15 = lVar15 + 0x10;
              iVar12 = (int)lVar22;
              lVar22 = lVar22 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar16 + 0x1b4) + *(float *)(iVar12 + 4) +
                      *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar7 + fVar5;
          }
          out[0x2c] = 0.0;
          out[0x26] = fVar4 * 2.0;
          out[0x27] = fVar4 * 2.0;
          out[0x34] = (moby->rotation).x;
          out[0x35] = (moby->rotation).y;
          out[0x36] = (moby->rotation).z;
          out[0x37] = (moby->rotation).w;
          DAT_007651b4 = (void *)(DAT_0095ddd4 + (uint)DAT_0095da9a * 0x10);
          if (DAT_00f08e04 == '\0') {
            libc::memcpy(&DAT_00f08a04,DAT_007651b4,0x400);
          }
          DAT_00f08e04 = '\x01';
        }
      }
      fVar8 = (moby->pos).x;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar7 = 15.0;
      fVar4 = (moby->pos).x;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x41700000) {
        (moby->pos).x = 15.0;
        fVar4 = fVar7;
      }
      fVar3 = 1008.0;
      if (1008.0 < fVar4) {
        (moby->pos).x = 1008.0;
        fVar4 = fVar3;
      }
      fVar8 = (moby->pos).y;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar6 = (moby->pos).y;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x41700000) {
        (moby->pos).y = 15.0;
        fVar6 = fVar7;
      }
      if (1008.0 < fVar6) {
        (moby->pos).y = 1008.0;
        fVar6 = fVar3;
      }
      fVar8 = (moby->pos).z;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar5 = (moby->pos).z;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x41700000) {
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
        g_heroRotation.x = out[0x34];
        g_heroRotation.y = out[0x35];
        g_heroRotation.z = out[0x36];
        g_heroRotation.w = out[0x37];
        g_heroPosition.x = fVar4;
        g_heroPosition.y = fVar6;
        g_heroPosition.z = fVar5;
      }
      if ((2 < bVar2) && (bVar2 < 5)) {
        pMVar17 = (MobyInstance *)out[0x15];
        if (pMVar17 == (MobyInstance *)0x0) {
          pMVar17 = (MobyInstance *)FUN_002b9870(lVar14);
          out[0x15] = (float)pMVar17;
        }
        if (pMVar17 != (MobyInstance *)0x0) {
          pvVar9 = pMVar17->pVar;
          (pMVar17->rotation).z = DAT_0071f408 * -1.5707964;
          fVar4 = *(float *)((int)pvVar9 + 0xc);
          fVar7 = (out[0x2d] * DAT_00765198 + 10.0) * DAT_007650dc;
          if (fVar4 <= fVar7) {
            if (fVar4 < fVar7) {
              *(float *)((int)pvVar9 + 0xc) = DAT_0071f408 * 0.35 + fVar4;
            }
          }
          else {
            *(float *)((int)pvVar9 + 0xc) = -(DAT_0071f408 * 0.35 - fVar4);
          }
          cVar18 = fastfunc::FastDoubleToInt((double)(out[0x2d] * 80.0));
          pMVar17->alpha = cVar18 + 'P';
          fastfunc::FastEulerToMtx1(uVar13 - 0x150,&pMVar17->rotation);
          fastfunc::FastMtxCopyNoTranslate(uVar13 - 0x110,lVar14 + 0xc0);
          fastfunc::FastVecMtx4Mul(uVar13 - 400,uVar13 - 0x110,uVar13 - 0x150);
          fastfunc::FastApplyTransform(&(pMVar17->transform).v0,(Vec4 *)(uVar13 - 400));
          mobyfunc::GetBonePosition(lVar14,2,&pMVar17->pos);
          mobyfunc::PostUpdateMobyLockTransform(pMVar17);
        }
      }
    }
  }
  return;
}



//==== 001e8fb4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1167_001e8fb4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1167_001e8fb4(void)

{
  DAT_00765aec = 0x10000;
  return;
}



//==== 001e8fd0  ns=mobyupdate_helpers  size=0x198
// sig: undefined M1167_001e8fd0(void)
// callers(1): 001e91a0 mobyupdate_unsorted::UpdateMoby_1167
// callees(5): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M1167_001e8fd0(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  dVar7 = 0.0;
  local_1c = 0.0;
  iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
     ((MVar1 = *(MOBY_OCLASSES *)(*(int *)(iVar5 + 0x20) + 0xa6), MVar1 == param_1->oClass ||
      (MVar1 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar5 = 0;
  }
  iVar5 = mobyutil::MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 == 1) || (param_1->state == '\x04')) goto LAB_001e9134;
  MVar2 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
  *(float *)((int)pvVar3 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar7) {
LAB_001e90f0:
    param_1->state = '\x04';
    param_1->modeBits =
         MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xf0;
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_001e90f0;
  }
  else if (iVar5 < 0xb) {
    if (iVar5 < 9) {
      *(undefined1 *)((int)pvVar3 + 0x67) = 200;
    }
    else {
      *(undefined1 *)((int)pvVar3 + 0x67) = 100;
    }
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
LAB_001e9134:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}



//==== 001e91a0  ns=mobyupdate_unsorted  size=0x814
// sig: undefined UpdateMoby_1167(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fc620 mobyutil::MB_randInt; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 001e8fd0 mobyupdate_helpers::M1167_001e8fd0; 0049fba0 FUN_0049fba0; 00502578 fastfunc::FastWrapRot; 005cd098 libc::printf
// strings: 00654960: 'Turret with no aiming cuboid. UID: %d\n'

/* Moby 1167 */

void mobyupdate_unsorted::UpdateMoby_1167(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  MobyInstance *pMVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
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
  ulonglong in_f31;
  double dVar31;
  float fVar32;
  
  lVar12 = (longlong)(int)moby;
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x130;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar11;
  puVar9[0x28] = in_LR;
  puVar9[0x25] = in_f31;
  puVar9[0x24] = unaff_r31;
  puVar9[0x23] = unaff_r30;
  puVar9[0x22] = unaff_r29;
  pvVar8 = moby->pVar;
  mobyupdate_helpers::M1167_001e8fd0();
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar12,(int)pvVar8 + 0x40,lVar12 + 0x10,1,0xffffffffffffffff,5,2,4
              );
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar2 != '\x03') {
    if (uVar2 == '\x02') {
      fVar32 = mobyutil::Delt(*(float *)((int)pvVar8 + 0x84),mobyutil::g_FrameTime * 4.0,
                              &(moby->pos).z);
      if (fVar32 != 0.0) {
        return;
      }
      moby->state = '\x03';
      return;
    }
    if (uVar2 == '\x01') {
      (moby->pos).z = *(float *)((int)pvVar8 + 0x84) + DAT_00765b10;
      if (DAT_00f08e08 == 0) {
        return;
      }
      moby->state = '\x02';
      return;
    }
    if (uVar2 != '\0') {
      return;
    }
    if (*(int *)((int)pvVar8 + 0x74) == -1) {
      libc::printf("Turret with no aiming cuboid. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    *(f32 *)((int)pvVar8 + 0x84) = (moby->pos).z;
    moby->state = ((byte)((LZCOUNT(-*(int *)((int)pvVar8 + 0x70)) << 0x3a) >> 0x3f) & 0xfe) + 3;
    return;
  }
  dVar31 = 0.01745329238474369;
  dVar22 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar8 + 0x78),
                              DAT_00765b14 * 0.017453292 * mobyutil::g_FrameTime);
  *(float *)((int)pvVar8 + 0x78) = (float)dVar22;
  dVar31 = (double)fastfunc::FastWrapRot
                             ((float)dVar22,(float)((double)*(float *)((int)pvVar8 + 0x80) * dVar31)
                             );
  dVar22 = (double)(float)(3.141592502593994 - dVar31);
  if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
    dVar22 = dVar31;
  }
  dVar26 = (double)(float)(-3.141592502593994 - dVar31);
  if ((double)(float)(-3.141592502593994 - dVar31) - dVar22 < 0.0) {
    dVar26 = dVar22;
  }
  iVar15 = *(int *)((int)pvVar8 + 0x74);
  dVar22 = (double)(float)(dVar26 * dVar26);
  dVar31 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar26));
  dVar30 = (double)(float)(dVar22 * dVar31);
  fVar32 = (float)(dVar22 * dVar30) * 2.601887e-06 +
           (float)(dVar30 * -0.0001980741071747616 +
                  (double)(float)(dVar31 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar22 * dVar26) *
                                                 -0.16666656732559204 + dVar26)));
  fVar7 = (Cuboids[iVar15].matrix.v1.x * fVar32 + Cuboids[iVar15].pos.x) - (moby->pos).x;
  fVar32 = (Cuboids[iVar15].matrix.v1.y * fVar32 + Cuboids[iVar15].pos.y) - (moby->pos).y;
  fVar3 = ABS(fVar7);
  fVar4 = ABS(fVar32);
  *(float *)(puVar9 + 0x1c) = fVar7;
  *(float *)((int)puVar9 + 0xe4) = fVar32;
  *(float *)(puVar9 + 0x1d) = fVar3 - fVar4;
  dVar22 = 0.0;
  uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x1d) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1d) & 4;
  fVar32 = ABS(*(float *)(puVar9 + 0x1c));
  if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
    fVar32 = fVar4;
  }
  fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar4 = ABS(*(float *)((int)puVar9 + 0xe4));
  if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  dVar31 = dVar22;
  if (0.0 < fVar32) {
    lVar13 = uVar11 - 0x120;
    lVar17 = uVar11 - 0x44;
    lVar20 = uVar11 - 0x34;
    lVar21 = 2;
    fVar32 = (fVar4 - fVar32) / (fVar4 + fVar32);
    fVar4 = fVar32 * fVar32;
    *(float *)(puVar9 + 0x1f) = fVar32;
    *(float *)(puVar9 + 0x1e) = fVar32;
    *(float *)((int)puVar9 + 0xf4) = fVar32;
    *(float *)((int)puVar9 + 0xec) = fVar32;
    fVar32 = fVar4 * fVar4;
    *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar4;
    *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar32;
    *(float *)(puVar9 + 0x1f) = *(float *)(puVar9 + 0x1f) * fVar32 * fVar4;
    do {
      *(float *)((int)lVar13 + 0xec) = *(float *)((int)lVar13 + 0xdc) * fVar32 * fVar32;
      iVar15 = (int)lVar17;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar32 * fVar32;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar20 = uVar11 - 0x44;
    pfVar18 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar17 = lVar20;
    do {
      fVar32 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar13 + 0xec) = *(float *)((int)lVar13 + 0xec) * fVar32;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar13 = 2;
    do {
      iVar15 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar10 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar15 + 0xec)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar7 + fVar3);
  }
  iVar10 = worldUpdateTime;
  iVar15 = (worldUpdateTime / DAT_00765b2c) * DAT_00765b2c;
  (moby->rotation).z = (float)dVar31;
  if (iVar10 != iVar15) {
    return;
  }
  iVar15 = mobyutil::MB_randInt(3);
  if (iVar15 < 1) {
    if (-1 < iVar15) {
      fVar32 = (moby->transform).v2.y;
      fVar7 = (moby->transform).v2.x;
      fVar4 = (moby->transform).v2.z;
      dVar31 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar32 * fVar32);
      if (dVar31 == dVar22) {
        fVar5 = (moby->transform).v2.w;
        dVar23 = dVar22;
        dVar24 = dVar22;
        dVar25 = dVar22;
      }
      else {
        fVar3 = (float)((double)DAT_00765b20 / dVar31);
        fVar5 = (moby->transform).v2.w;
        dVar25 = (double)(fVar7 * fVar3);
        dVar24 = (double)(fVar32 * fVar3);
        dVar23 = (double)(fVar4 * fVar3);
      }
      *(float *)(puVar9 + 0x18) = (float)dVar25;
      *(float *)((int)puVar9 + 0xc4) = (float)dVar24;
      *(float *)((int)puVar9 + 0xcc) = fVar5;
      *(float *)(puVar9 + 0x19) = (float)dVar23;
      goto LAB_001e97ec;
    }
  }
  else if (iVar15 < 2) {
    fVar32 = (moby->transform).v2.y;
    fVar7 = (moby->transform).v2.x;
    fVar4 = (moby->transform).v2.z;
    dVar31 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar32 * fVar32);
    if (dVar31 == dVar22) {
      fVar5 = (moby->transform).v2.w;
      dVar31 = dVar22;
      dVar26 = dVar22;
      dVar30 = dVar22;
    }
    else {
      fVar3 = (float)((double)DAT_00765b24 / dVar31);
      fVar5 = (moby->transform).v2.w;
      dVar31 = (double)(fVar7 * fVar3);
      dVar26 = (double)(fVar32 * fVar3);
      dVar30 = (double)(fVar4 * fVar3);
    }
    fVar7 = (moby->transform).v1.y;
    fVar4 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    dVar29 = (double)DAT_00765b1c;
    *(float *)((int)puVar9 + 0xc4) = (float)dVar26;
    *(float *)(puVar9 + 0x19) = (float)dVar30;
    *(float *)((int)puVar9 + 0xcc) = fVar5;
    *(float *)(puVar9 + 0x18) = (float)dVar31;
    dVar23 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7);
    fVar32 = (float)(dVar29 / dVar23);
    dVar29 = dVar22;
    if (dVar22 - dVar23 < 0.0) {
      dVar29 = (double)(fVar3 * fVar32);
    }
    dVar28 = dVar22;
    if (dVar22 - dVar23 < 0.0) {
      dVar28 = (double)(fVar7 * fVar32);
    }
    dVar27 = dVar22;
    if (dVar22 - dVar23 < 0.0) {
      dVar27 = (double)(fVar4 * fVar32);
    }
    if (dVar23 - dVar22 < 0.0) {
      dVar29 = (double)(fVar3 * fVar32);
    }
    if (dVar23 - dVar22 < 0.0) {
      dVar28 = (double)(fVar7 * fVar32);
    }
    if (dVar23 - dVar22 < 0.0) {
      dVar27 = (double)(fVar4 * fVar32);
    }
    dVar23 = (double)(float)(dVar30 + dVar29);
    dVar24 = (double)(float)(dVar26 + dVar28);
    dVar25 = (double)(float)(dVar31 + dVar27);
    *(float *)(puVar9 + 0x19) = (float)(dVar30 + dVar29);
    *(float *)((int)puVar9 + 0xc4) = (float)(dVar26 + dVar28);
    *(float *)(puVar9 + 0x18) = (float)(dVar31 + dVar27);
    goto LAB_001e97ec;
  }
  fVar32 = (moby->transform).v2.y;
  fVar7 = (moby->transform).v2.x;
  fVar4 = (moby->transform).v2.z;
  dVar31 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar32 * fVar32);
  if (dVar31 == dVar22) {
    fVar5 = (moby->transform).v2.w;
    dVar31 = dVar22;
    dVar26 = dVar22;
    dVar30 = dVar22;
  }
  else {
    fVar3 = (float)((double)DAT_00765b24 / dVar31);
    fVar5 = (moby->transform).v2.w;
    dVar31 = (double)(fVar7 * fVar3);
    dVar26 = (double)(fVar32 * fVar3);
    dVar30 = (double)(fVar4 * fVar3);
  }
  fVar7 = (moby->transform).v1.y;
  fVar4 = (moby->transform).v1.x;
  fVar3 = (moby->transform).v1.z;
  dVar29 = (double)DAT_00765b1c;
  *(float *)((int)puVar9 + 0xc4) = (float)dVar26;
  *(float *)(puVar9 + 0x19) = (float)dVar30;
  *(float *)((int)puVar9 + 0xcc) = fVar5;
  *(float *)(puVar9 + 0x18) = (float)dVar31;
  dVar23 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7);
  fVar32 = (float)(-dVar29 / dVar23);
  dVar29 = dVar22;
  if (dVar22 - dVar23 < 0.0) {
    dVar29 = (double)(fVar3 * fVar32);
  }
  dVar28 = dVar22;
  if (dVar22 - dVar23 < 0.0) {
    dVar28 = (double)(fVar7 * fVar32);
  }
  dVar27 = dVar22;
  if (dVar22 - dVar23 < 0.0) {
    dVar27 = (double)(fVar4 * fVar32);
  }
  if (dVar23 - dVar22 < 0.0) {
    dVar29 = (double)(fVar3 * fVar32);
  }
  if (dVar23 - dVar22 < 0.0) {
    dVar28 = (double)(fVar7 * fVar32);
  }
  if (dVar23 - dVar22 < 0.0) {
    dVar27 = (double)(fVar4 * fVar32);
  }
  dVar23 = (double)(float)(dVar30 + dVar29);
  dVar24 = (double)(float)(dVar26 + dVar28);
  dVar25 = (double)(float)(dVar31 + dVar27);
  *(float *)(puVar9 + 0x19) = (float)(dVar30 + dVar29);
  *(float *)((int)puVar9 + 0xc4) = (float)(dVar26 + dVar28);
  *(float *)(puVar9 + 0x18) = (float)(dVar31 + dVar27);
LAB_001e97ec:
  fVar5 = DAT_00765b28;
  fVar3 = mobyutil::g_FrameTime;
  fVar32 = (moby->transform).v0.y;
  fVar7 = (moby->transform).v0.x;
  fVar4 = (moby->transform).v0.z;
  dVar31 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar32 * fVar32);
  if (dVar31 == dVar22) {
    fVar6 = (moby->transform).v0.w;
    dVar31 = dVar22;
    dVar26 = dVar22;
    dVar30 = dVar22;
  }
  else {
    fVar1 = (float)((double)DAT_00765b18 / dVar31);
    fVar6 = (moby->transform).v0.w;
    dVar30 = (double)(fVar7 * fVar1);
    dVar26 = (double)(fVar32 * fVar1);
    dVar31 = (double)(fVar4 * fVar1);
  }
  fVar32 = (moby->pos).x;
  fVar7 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  *(float *)(puVar9 + 0x1a) = (float)dVar30;
  *(float *)((int)puVar9 + 0xd4) = (float)dVar26;
  *(float *)(puVar9 + 0x1b) = (float)dVar31;
  *(float *)((int)puVar9 + 0xdc) = fVar6;
  dVar28 = (double)SQRT((float)(dVar31 * dVar31 +
                               (double)(float)(dVar30 * dVar30 + (double)(float)(dVar26 * dVar26))))
  ;
  *(float *)(puVar9 + 0x18) = (float)(dVar25 + dVar30) + fVar32;
  *(float *)((int)puVar9 + 0xc4) = (float)(dVar24 + dVar26) + fVar7;
  *(float *)(puVar9 + 0x19) = (float)(dVar23 + dVar31) + fVar4;
  dVar23 = (double)(float)((double)(fVar5 * fVar3) / dVar28);
  dVar29 = dVar22;
  if (dVar22 - dVar28 < 0.0) {
    dVar29 = (double)(float)(dVar30 * dVar23);
  }
  dVar27 = dVar22;
  if (dVar22 - dVar28 < 0.0) {
    dVar27 = (double)(float)(dVar26 * dVar23);
  }
  dVar24 = dVar22;
  if (dVar22 - dVar28 < 0.0) {
    dVar24 = (double)(float)(dVar31 * dVar23);
  }
  if (dVar28 - dVar22 < 0.0) {
    dVar29 = (double)(float)(dVar30 * dVar23);
  }
  if (dVar28 - dVar22 < 0.0) {
    dVar27 = (double)(float)(dVar26 * dVar23);
  }
  if (dVar28 - dVar22 < 0.0) {
    dVar24 = (double)(float)(dVar31 * dVar23);
  }
  *(float *)(puVar9 + 0x1a) = (float)dVar29;
  *(float *)((int)puVar9 + 0xd4) = (float)dVar27;
  *(float *)(puVar9 + 0x1b) = (float)dVar24;
  pMVar16 = (MobyInstance *)FUN_0049fba0(uVar11 - 0x70,uVar11 - 0x60,lVar12,1);
  mobyfunc::SetColorOfMoby(pMVar16,0xe0,0xe0,0xe0);
  return;
}



//==== 001e99b4  ns=mobyupdate_helpers  size=0x60
// sig: undefined M1168_001e99b4(void)
// callers(1): 001e9be8 mobyupdate_unsorted::UpdateMoby_1168
// callees(0): 

void mobyupdate_helpers::M1168_001e99b4(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
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



//==== 001e9a20  ns=mobyupdate_helpers  size=0x190
// sig: undefined M1168_001e9a20(void)
// callers(1): 001e9be8 mobyupdate_unsorted::UpdateMoby_1168
// callees(5): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M1168_001e9a20(MobyInstance *param_1)

{
  MobyModeBit MVar1;
  void *pvVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar2 = param_1->pVar;
  uVar6 = ZEXT48(pvVar2);
  param_1->scale = param_1->pClass->gScale * DAT_00765b30;
  dVar7 = 0.0;
  local_1c = 0.0;
  uVar4 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar5 = mobyutil::MB_HandleDamage(param_1,uVar4,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 != 1) && (param_1->state != '\x04')) {
    MVar1 = param_1->modeBits;
    fVar3 = *(float *)((int)pvVar2 + 0x20) - local_1c;
    *(float *)((int)pvVar2 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar7) {
      iVar5 = 1;
    }
    if (param_1->state == '\x01') {
      param_1->state = '\x02';
    }
    if (iVar5 < 3) {
      if ((-1 < iVar5) && (0 < iVar5)) {
        param_1->state = '\x04';
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)((int)pvVar2 + 0x67) = 0xf0;
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar5 < 0xb) {
      if (iVar5 < 9) {
        *(undefined1 *)((int)pvVar2 + 0x67) = 200;
      }
      else {
        *(undefined1 *)((int)pvVar2 + 0x67) = 100;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}



//==== 001e9be8  ns=mobyupdate_unsorted  size=0x780
// sig: undefined UpdateMoby_1168(MobyInstance * moby)
// callers(0): 
// callees(11): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fcc68 mobyutil::MB_randRot; 00109c30 mobyutil::OrganicDelt; 0010e030 mobyutil::MB_genericExplosion; 001e99b4 mobyupdate_helpers::M1168_001e99b4; 001e9a20 mobyupdate_helpers::M1168_001e9a20; 00502578 fastfunc::FastWrapRot; 005cd098 libc::printf
// strings: 00654990: 'AlarmBot with no path. UID: %d\n' | 006549b0: 'AlarmBot with a path that has no points. UID: %d\n'

/* Moby 1168 */

void mobyupdate_unsorted::UpdateMoby_1168(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  u8 uVar7;
  float fVar8;
  f32 fVar9;
  void *pvVar10;
  Spline *pSVar11;
  Vec4 *pVVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
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
  float local_90 [4];
  
  lVar13 = (longlong)(int)moby;
  pvVar10 = moby->pVar;
  mobyupdate_helpers::M1168_001e9a20();
  uVar7 = moby->state;
  if (uVar7 == '\x04') {
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar13,(int)pvVar10 + 0x40,lVar13 + 0x10,1,0xffffffffffffffff,5,2,
               4);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar7 != '\x03') {
    if (uVar7 == '\x02') {
      if (*(int *)((int)pvVar10 + 0x78) != -1) {
        mobyupdate_helpers::M1168_001e99b4(*(int *)((int)pvVar10 + 0x78));
      }
      moby->state = '\x03';
    }
    else if (uVar7 == '\x01') {
      dVar31 = 0.0;
      local_90[0] = 0.0;
      pSVar11 = Splines[*(int *)((int)pvVar10 + 0x70)];
      pVVar12 = pSVar11->points + (pSVar11->cnt - 1);
      fVar8 = pSVar11->points[0].y - pVVar12->y;
      fVar2 = pSVar11->points[0].x - pVVar12->x;
      fVar3 = pSVar11->points[0].z - pVVar12->z;
      dVar32 = 3.0;
      bVar1 = 3.0 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar8 * fVar8);
      iVar14 = *(int *)((int)pvVar10 + 0x7c);
      iVar15 = (int)((-(longlong)*(int *)((int)pvVar10 + 0xa4) >> 0x3f &
                     (ulonglong)(uint)pSVar11->cnt - 1) << 4);
      dVar18 = (double)*(float *)((int)pvVar10 + 0x84);
      dVar20 = (double)*(float *)((int)pvVar10 + 0x80);
      dVar16 = (double)*(float *)((int)pvVar10 + 0x88);
      fVar8 = (float)((double)pSVar11->points[iVar14].y - dVar18);
      fVar2 = (float)((double)pSVar11->points[iVar14].x - dVar20);
      fVar3 = (float)((double)*(float *)((int)&pSVar11->points[0].y + iVar15) - dVar18);
      fVar4 = (float)((double)*(float *)((int)&pSVar11->points[0].x + iVar15) - dVar20);
      fVar5 = (float)((double)pSVar11->points[iVar14].z - dVar16);
      fVar6 = (float)((double)*(float *)((int)&pSVar11->points[0].z + iVar15) - dVar16);
      dVar28 = (double)SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar8 * fVar8);
      if (bVar1) {
        mobyutil::OrganicDelt
                  (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3),DAT_00765b34 * DAT_0071f418,
                   DAT_00765b34 * DAT_0071f418,*(float *)((int)pvVar10 + 0x74),local_90,0x760000,
                   (float *)((int)pvVar10 + 0xa0));
        iVar14 = *(int *)((int)pvVar10 + 0x7c);
        fVar8 = *(float *)((int)pvVar10 + 0xa0);
        dVar20 = (double)*(float *)((int)pvVar10 + 0x80);
        dVar18 = (double)*(float *)((int)pvVar10 + 0x84);
        dVar16 = (double)*(float *)((int)pvVar10 + 0x88);
      }
      else {
        fVar8 = *(float *)((int)pvVar10 + 0x74);
        *(float *)((int)pvVar10 + 0xa0) = fVar8;
      }
      fVar3 = (float)((double)pSVar11->points[iVar14].y - dVar18);
      fVar4 = (float)((double)pSVar11->points[iVar14].x - dVar20);
      fVar5 = (float)((double)pSVar11->points[iVar14].z - dVar16);
      dVar23 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = (float)((double)fVar8 / dVar23);
      dVar29 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar29 = (double)(fVar2 * fVar5);
      }
      dVar17 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar17 = (double)(fVar2 * fVar3);
      }
      dVar19 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar19 = (double)(fVar2 * fVar4);
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar29 = (double)(fVar2 * fVar5);
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar17 = (double)(fVar2 * fVar3);
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar19 = (double)(fVar2 * fVar4);
      }
      *(float *)((int)pvVar10 + 0x88) = (float)(dVar16 + dVar29);
      *(float *)((int)pvVar10 + 0x84) = (float)(dVar18 + dVar17);
      *(float *)((int)pvVar10 + 0x80) = (float)(dVar20 + dVar19);
      if (dVar28 < (double)fVar8) {
        iVar15 = *(int *)((int)pvVar10 + 0xa4);
        if ((iVar15 < 1) || (iVar14 != pSVar11->cnt + -1)) {
          if (iVar15 < 0 && iVar14 == 0) {
            iVar15 = 1;
            *(undefined4 *)((int)pvVar10 + 0xa4) = 1;
          }
        }
        else if (bVar1) {
          iVar15 = -1;
          *(undefined4 *)((int)pvVar10 + 0xa4) = 0xffffffff;
        }
        else {
          iVar14 = 0;
        }
        *(int *)((int)pvVar10 + 0x7c) = iVar14 + iVar15;
      }
      fVar8 = *(float *)((int)pvVar10 + 0x90);
      dVar23 = 3.141592502593994;
      dVar29 = -3.141592502593994;
      dVar31 = -0.16666656732559204;
      dVar28 = 0.008333025500178337;
      dVar20 = -0.0001980741071747616;
      dVar18 = 0.01745329238474369;
      dVar16 = 2.601886990305502e-06;
      fVar2 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar2 = fVar8;
      }
      fVar3 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      dVar27 = (double)DAT_00765b48;
      fVar5 = fVar3 * fVar3;
      fVar2 = fVar5 * fVar5 * fVar3;
      fVar4 = fVar5 * fVar2;
      dVar26 = (double)(fVar5 * fVar4 * 2.601887e-06 +
                       fVar4 * -0.0001980741 +
                       fVar2 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3);
      dVar17 = (double)fastfunc::FastWrapRot
                                 (fVar8,DAT_00765b3c * 0.017453292 * mobyutil::g_FrameTime);
      fVar8 = mobyutil::g_FrameTime;
      dVar19 = (double)*(float *)((int)pvVar10 + 0x94);
      dVar22 = (double)DAT_00765b40;
      dVar25 = (double)DAT_00765b4c;
      *(float *)((int)pvVar10 + 0x90) = (float)dVar17;
      dVar17 = (double)(float)(dVar23 - dVar19);
      if (dVar19 - (double)(float)(dVar23 - dVar19) < 0.0) {
        dVar17 = dVar19;
      }
      dVar24 = (double)(float)(dVar29 - dVar19);
      if ((double)(float)(dVar29 - dVar19) - dVar17 < 0.0) {
        dVar24 = dVar17;
      }
      dVar19 = (double)(float)(dVar24 * dVar24);
      dVar21 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar24));
      dVar17 = (double)(float)(dVar19 * dVar21);
      dVar24 = (double)(float)((double)(float)(dVar19 * dVar17) * dVar16 +
                              (double)(float)(dVar17 * dVar20 +
                                             (double)(float)(dVar21 * dVar28 +
                                                            (double)(float)((double)(float)(dVar19 *
                                                                                           dVar24) *
                                                                            dVar31 + dVar24))));
      dVar19 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar10 + 0x94),(float)(dVar22 * dVar18) * fVar8);
      fVar8 = mobyutil::g_FrameTime;
      dVar22 = (double)*(float *)((int)pvVar10 + 0x98);
      dVar17 = (double)(float)(dVar23 - dVar22);
      if (dVar22 - (double)(float)(dVar23 - dVar22) < 0.0) {
        dVar17 = dVar22;
      }
      dVar21 = (double)(float)(dVar29 - dVar22);
      if ((double)(float)(dVar29 - dVar22) - dVar17 < 0.0) {
        dVar21 = dVar17;
      }
      dVar29 = (double)(float)(dVar21 * dVar21);
      dVar22 = (double)DAT_00765b44;
      dVar30 = (double)DAT_00765b50;
      *(float *)((int)pvVar10 + 0x94) = (float)dVar19;
      dVar19 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar21));
      dVar17 = (double)(float)(dVar29 * dVar19);
      dVar20 = (double)(float)((double)(float)(dVar29 * dVar17) * dVar16 +
                              (double)(float)(dVar17 * dVar20 +
                                             (double)(float)(dVar19 * dVar28 +
                                                            (double)(float)((double)(float)(dVar29 *
                                                                                           dVar21) *
                                                                            dVar31 + dVar21))));
      dVar16 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar10 + 0x98),(float)(dVar22 * dVar18) * fVar8);
      *(float *)((int)pvVar10 + 0x98) = (float)dVar16;
      (moby->pos).x = (float)(dVar26 * dVar27 + (double)*(float *)((int)pvVar10 + 0x80));
      (moby->pos).y = (float)(dVar24 * dVar25 + (double)*(float *)((int)pvVar10 + 0x84));
      fVar8 = *(float *)((int)pvVar10 + 0x88);
      (moby->pos).w = (float)dVar23;
      (moby->pos).z = (float)(dVar20 * dVar30 + dVar32) + fVar8;
      iVar14 = collproc::CollLine(lVar13 + 0x10,(int)pvVar10 + 0x80,0,lVar13,0);
      if (iVar14 == 0) {
        iVar14 = collproc::CollMobySphere
                           (0x3ff0000000000000,(int)pvVar10 + 0x80,&DAT_001e9bb0,0,0,0);
        if (iVar14 != 0) {
          if (CollOutput.pMoby == g_heroMobyPtr) {
            moby->state = '\x02';
          }
          else if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
                  (((CollOutput.pMoby)->oClass == DECOY ||
                   ((CollOutput.pMoby)->oClass == MORPH_O_RAY_CHICKEN)))) {
            moby->state = '\x02';
          }
        }
      }
      else if (CollOutput.pMoby == g_heroMobyPtr) {
        moby->state = '\x02';
      }
      else if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
              (((CollOutput.pMoby)->oClass == DECOY ||
               ((CollOutput.pMoby)->oClass == MORPH_O_RAY_CHICKEN)))) {
        moby->state = '\x02';
      }
      RegisterFuncForMoby(&PTR_M1169_001ea390_00709118,moby);
    }
    else if (uVar7 == '\0') {
      if (*(int *)((int)pvVar10 + 0x70) == -1) {
        libc::printf("AlarmBot with no path. UID: %d\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
      }
      else {
        pSVar11 = Splines[*(int *)((int)pvVar10 + 0x70)];
        if (pSVar11->cnt == 0) {
          libc::printf("AlarmBot with a path that has no points. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
        }
        else {
          fVar8 = pSVar11->points[0].x;
          (moby->pos).x = fVar8;
          (moby->pos).y = pSVar11->points[0].y;
          (moby->pos).z = pSVar11->points[0].z;
          (moby->pos).w = pSVar11->points[0].w;
          *(float *)((int)pvVar10 + 0x80) = fVar8;
          *(undefined2 *)((int)pvVar10 + 0x24) = 4;
          *(undefined4 *)((int)pvVar10 + 0xa4) = 1;
          *(undefined4 *)((int)pvVar10 + 0x7c) = 1;
          *(f32 *)((int)pvVar10 + 0x84) = (moby->pos).y;
          *(f32 *)((int)pvVar10 + 0x88) = (moby->pos).z;
          fVar9 = (moby->pos).w;
          *(undefined4 *)((int)pvVar10 + 0x20) = 0x40800000;
          *(f32 *)((int)pvVar10 + 0x8c) = fVar9;
          *(undefined1 *)((int)pvVar10 + 0x28) = 2;
          dVar16 = (double)mobyutil::MB_randRot();
          *(float *)((int)pvVar10 + 0x90) = (float)dVar16;
          dVar16 = (double)mobyutil::MB_randRot();
          *(float *)((int)pvVar10 + 0x94) = (float)dVar16;
          dVar16 = (double)mobyutil::MB_randRot();
          *(float *)((int)pvVar10 + 0x98) = (float)dVar16;
          moby->state = '\x01';
        }
      }
    }
  }
  return;
}



//==== 001ea390  ns=mobyupdate_helpers  size=0x50c
// sig: undefined M1169_001ea390(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1169_001ea390(int param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
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
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x1d0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar11;
  puVar6[0x3c] = in_LR;
  puVar6[0x31] = in_f23;
  puVar6[0x32] = in_f24;
  puVar6[0x33] = in_f25;
  puVar6[0x34] = in_f26;
  puVar6[0x35] = in_f27;
  puVar6[0x36] = in_f28;
  puVar6[0x37] = in_f29;
  puVar6[0x38] = in_f30;
  puVar6[0x39] = in_f31;
  puVar6[0x30] = unaff_r31;
  puVar6[0x2f] = unaff_r30;
  iVar5 = *(int *)(param_1 + 0x78);
  puVar6[0x2e] = unaff_r29;
  puVar6[0x2d] = unaff_r28;
  puVar6[0x2c] = unaff_r27;
  puVar6[0x2b] = unaff_r26;
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00f08e10,DAT_00765b90,DAT_00f08e14,DAT_00765b94,DAT_00765b98);
  puVar6[0x27] = uVar12;
  uVar12 = draw::GetEffectTex(0x15);
  puVar6[0x25] = uVar12;
  fastfunc::FastMtx4Identity((float *)(puVar6 + 0xe));
  lVar17 = uVar11 - 0xd0;
  lVar18 = uVar11 - 0xcc;
  puVar15 = &DAT_00765b60;
  puVar16 = &DAT_00765b64;
  lVar20 = 2;
  lVar13 = lVar1;
  do {
    uVar3 = *puVar16;
    *(undefined4 *)((int)lVar13 + 0x100) = *puVar15;
    uVar4 = puVar15[2];
    *(undefined4 *)((int)lVar13 + 0x104) = uVar3;
    uVar3 = puVar16[2];
    puVar15 = puVar15 + 4;
    *(undefined4 *)((int)lVar17 + 8) = uVar4;
    puVar16 = puVar16 + 4;
    *(undefined4 *)((int)lVar18 + 8) = uVar3;
    lVar17 = lVar17 + 0x10;
    lVar18 = lVar18 + 0x10;
    lVar13 = lVar13 + 0x10;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  iVar19 = 0;
  do {
    uVar12 = (ulonglong)iVar19;
    iVar19 = iVar19 + 1;
    puVar6[0x28] = uVar12;
    uVar12 = puVar6[0x28];
    puVar6[0x28] = (longlong)iVar19;
    dVar35 = 1.570796251296997;
    dVar34 = 3.141592502593994;
    dVar33 = -3.141592502593994;
    dVar32 = -0.16666656732559204;
    dVar31 = 0.008333025500178337;
    dVar30 = -0.0001980741071747616;
    dVar29 = 2.601886990305502e-06;
    lVar20 = uVar11 - 0x120;
    uVar14 = 0;
    dVar37 = (double)((float)(longlong)uVar12 * 11.25 * 0.017453292 - 3.1415927);
    dVar36 = (double)((float)(longlong)puVar6[0x28] * 11.25 * 0.017453292 - 3.1415927);
    lVar13 = lVar1;
    lVar17 = lVar1;
    lVar18 = lVar20;
    do {
      puVar15 = (undefined4 *)lVar18;
      iVar7 = (int)lVar17;
      if (uVar14 == (((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0)) * 2) {
        *(undefined4 *)((int)lVar13 + 0xf0) = DAT_00765b84;
        dVar22 = dVar36;
        if (uVar14 == 0) {
          dVar22 = dVar37;
        }
        fVar2 = (float)(dVar22 + 1.570796251296997);
        *puVar15 = *(undefined4 *)(iVar5 + 0x80);
        dVar24 = (double)(float)(3.141592502593994 - dVar22);
        if (dVar22 - (double)(float)(3.141592502593994 - dVar22) < 0.0) {
          dVar24 = dVar22;
        }
        fVar8 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar8 = fVar2;
        }
        dVar23 = (double)(float)(-3.141592502593994 - dVar22);
        if ((double)(float)(-3.141592502593994 - dVar22) - dVar24 < 0.0) {
          dVar23 = dVar24;
        }
        puVar15[1] = *(undefined4 *)(iVar5 + 0x84);
        puVar15[2] = *(undefined4 *)(iVar5 + 0x88);
        fVar9 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar8 < 0.0) {
          fVar9 = fVar8;
        }
        dVar22 = (double)(float)(dVar23 * dVar23);
        puVar15[3] = *(undefined4 *)(iVar5 + 0x8c);
        fVar10 = fVar9 * fVar9;
        dVar25 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar23));
        fVar2 = fVar10 * fVar10 * fVar9;
        dVar24 = (double)(float)(dVar22 * dVar25);
        fVar8 = fVar10 * fVar2;
        fVar2 = (fVar10 * fVar8 * 2.601887e-06 +
                fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9)
                * DAT_00765b9c;
        *(float *)(iVar7 + 0xb4) =
             ((float)(dVar22 * dVar24) * 2.601887e-06 +
             (float)(dVar24 * -0.0001980741071747616 +
                    (double)(float)(dVar25 * 0.008333025500178337 +
                                   (double)(float)((double)(float)(dVar22 * dVar23) *
                                                   -0.16666656732559204 + dVar23)))) * DAT_00765b9c
             + *(float *)(iVar7 + 0xb4);
        *(float *)(iVar7 + 0xb0) = fVar2 + *(float *)(iVar7 + 0xb0);
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((int)lVar13 + 0xf0) = DAT_00765b80;
        *puVar15 = uVar3;
        puVar15[1] = *(undefined4 *)(param_1 + 0x14);
        puVar15[2] = *(undefined4 *)(param_1 + 0x18);
        puVar15[3] = *(undefined4 *)(param_1 + 0x1c);
      }
      uVar14 = uVar14 + 1;
      lVar18 = lVar18 + 0x10;
      *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
      lVar13 = lVar13 + 4;
      lVar17 = lVar17 + 0x10;
    } while ((int)uVar14 < 4);
    draw::FastDrawQuad(uVar11 - 0x120,0,0,EffectTexHeaders,9);
    uVar3 = EffectTexHeaders;
    uVar14 = 0;
    lVar13 = lVar1;
    lVar17 = lVar1;
    do {
      puVar15 = (undefined4 *)lVar20;
      iVar7 = (int)lVar17;
      if (uVar14 == (((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0)) * 2) {
        *(undefined4 *)((int)lVar13 + 0xf0) = DAT_00765b8c;
        dVar22 = dVar36;
        if (uVar14 == 0) {
          dVar22 = dVar37;
        }
        dVar23 = (double)(float)(dVar22 + dVar35);
        *puVar15 = *(undefined4 *)(iVar5 + 0x80);
        dVar24 = (double)(float)(dVar34 - dVar22);
        if (dVar22 - (double)(float)(dVar34 - dVar22) < 0.0) {
          dVar24 = dVar22;
        }
        dVar25 = (double)(float)(dVar34 - dVar23);
        if (dVar23 - (double)(float)(dVar34 - dVar23) < 0.0) {
          dVar25 = dVar23;
        }
        dVar21 = (double)(float)(dVar33 - dVar22);
        if ((double)(float)(dVar33 - dVar22) - dVar24 < 0.0) {
          dVar21 = dVar24;
        }
        puVar15[1] = *(undefined4 *)(iVar5 + 0x84);
        puVar15[2] = *(undefined4 *)(iVar5 + 0x88);
        dVar22 = (double)(float)(dVar33 - dVar23);
        if ((double)(float)(dVar33 - dVar23) - dVar25 < 0.0) {
          dVar22 = dVar25;
        }
        dVar24 = (double)(float)(dVar21 * dVar21);
        puVar15[3] = *(undefined4 *)(iVar5 + 0x8c);
        dVar23 = (double)(float)(dVar22 * dVar22);
        dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar21));
        dVar25 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar22));
        dVar26 = (double)(float)(dVar24 * dVar27);
        dVar28 = (double)(float)(dVar23 * dVar25);
        fVar2 = (float)((double)(float)(dVar23 * dVar28) * dVar29 +
                       (double)(float)(dVar28 * dVar30 +
                                      (double)(float)(dVar25 * dVar31 +
                                                     (double)(float)((double)(float)(dVar23 * dVar22
                                                                                    ) * dVar32 +
                                                                    dVar22)))) * DAT_00765b9c;
        *(float *)(iVar7 + 0xb4) =
             (float)((double)(float)(dVar24 * dVar26) * dVar29 +
                    (double)(float)(dVar26 * dVar30 +
                                   (double)(float)(dVar27 * dVar31 +
                                                  (double)(float)((double)(float)(dVar24 * dVar21) *
                                                                  dVar32 + dVar21)))) * DAT_00765b9c
             + *(float *)(iVar7 + 0xb4);
        *(float *)(iVar7 + 0xb0) = fVar2 + *(float *)(iVar7 + 0xb0);
      }
      else {
        *(undefined4 *)((int)lVar13 + 0xf0) = DAT_00765b88;
        *puVar15 = *(undefined4 *)(iVar5 + 0x80);
        puVar15[1] = *(undefined4 *)(iVar5 + 0x84);
        puVar15[2] = *(undefined4 *)(iVar5 + 0x88);
        puVar15[3] = *(undefined4 *)(iVar5 + 0x8c);
      }
      uVar14 = uVar14 + 1;
      lVar20 = lVar20 + 0x10;
      *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
      lVar13 = lVar13 + 4;
      lVar17 = lVar17 + 0x10;
    } while ((int)uVar14 < 4);
    draw::FastDrawQuad(uVar11 - 0x120,0,0,uVar3,9);
  } while (iVar19 < 0x20);
  return;
}



//==== 001ea89c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1169_001ea89c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1169_001ea89c(void)

{
  DAT_00765bec = 0x10000;
  return;
}



//==== 001ea8b8  ns=mobyupdate_helpers  size=0x9c
// sig: undefined M1169_001ea8b8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1169_001ea8b8(longlong param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined4 uVar3;
  MobyInstance *pMVar4;
  undefined8 in_r0;
  ushort *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pMVar4 = MobyInstance;
  if ((int)param_1 != -1) {
    puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
    if (puVar5 != (ushort *)0x0) {
      auVar6 = ZEXT416(0xffffffff);
      auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
      auVar6 = loadVectorLeftIndexed(in_r0,0x1ea8b0);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
      auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
      do {
        pvVar2 = pMVar4[*puVar5 & 0x7fff].pVar;
        if (pMVar4[*puVar5 & 0x7fff].oClass == 0x491) {
          uVar3 = storeVectorElementWordIndexed
                            (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,400,
                             ZEXT48(pvVar2));
          *(undefined4 *)((int)pvVar2 + 400U & 0xfffffffc) = uVar3;
        }
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}



//==== 001ea988  ns=mobyupdate_helpers  size=0x314
// sig: undefined M1169_001ea988(void)
// callers(1): 001eb4f8 mobyupdate_unsorted::UpdateMoby_1169
// callees(2): 00101058 mobyutil::MB_UpdateNavMove; 0010a2e0 mobyutil::OrganicDeltAng

void mobyupdate_helpers::M1169_001ea988(MobyInstance *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0xe0;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar13;
  puVar7[0x1e] = in_LR;
  puVar7[0x1b] = unaff_r31;
  fVar1 = *param_2 - (param_1->pos).x;
  fVar3 = param_2[1] - (param_1->pos).y;
  fVar4 = ABS(fVar1);
  fVar2 = ABS(fVar3);
  *(float *)(puVar7 + 0x12) = fVar1;
  puVar7[0x1a] = unaff_r30;
  *(float *)((int)puVar7 + 0x94) = fVar3;
  pvVar6 = param_1->pVar;
  *(float *)(puVar7 + 0x13) = fVar4 - fVar2;
  fVar1 = 0.0;
  uVar14 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)((int)puVar7 + 0x94));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar8 = fVar4;
  }
  puVar7[0x19] = unaff_r29;
  if (0.0 < fVar3) {
    lVar18 = uVar13 - 0xd0;
    lVar16 = uVar13 - 0x34;
    lVar17 = uVar13 - 0x44;
    lVar20 = 2;
    fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
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
      *(float *)((int)lVar18 + 0x9c) = *(float *)((int)lVar18 + 0x8c) * fVar3 * fVar3;
      iVar9 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar13 - 0x44;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar18;
    lVar17 = lVar15;
    do {
      fVar3 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x9c) = *(float *)((int)lVar17 + 0x9c) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    do {
      iVar9 = (int)lVar15;
      iVar10 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
  }
  mobyutil::OrganicDeltAng
            (fVar1,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 6.2831855,&(param_1->rotation).z,0x720000,
             (float *)((int)pvVar6 + 0x188));
  fVar1 = (param_1->rotation).z;
  fVar3 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar2 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar2 = fVar3;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
    fVar1 = fVar2;
  }
  fVar3 = fVar5 * fVar5;
  fVar4 = fVar1 * fVar1;
  fVar11 = fVar3 * fVar3 * fVar5;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  fVar2 = fVar4 * fVar4 * fVar1;
  fVar12 = fVar3 * fVar11;
  fVar8 = fVar4 * fVar2;
  *(float *)((int)puVar7 + 0x74) =
       (fVar3 * fVar12 * 2.601887e-06 +
       fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5) * 2.0;
  *(float *)(puVar7 + 0xe) =
       (fVar4 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) * 2.0;
  mobyutil::MB_UpdateNavMove
            (0x3ff0000000000000,param_1,(MobyInstance *)((int)pvVar6 + 0xc0),puVar7 + 0xe,
             puVar7 + 0x10);
  return;
}



//==== 001eaca0  ns=mobyupdate_helpers  size=0xb0
// sig: undefined M1169_001eaca0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1169_001eaca0(longlong param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined4 uVar3;
  MobyInstance *pMVar4;
  undefined8 in_r0;
  ushort *puVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  pMVar4 = MobyInstance;
  if ((int)param_1 != -1) {
    auVar7 = loadVectorLeftIndexed(in_r0,0x1eac9c);
    puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    do {
      pvVar2 = pMVar4[*puVar5 & 0x7fff].pVar;
      uVar6 = ZEXT48(pvVar2);
      if (pMVar4[*puVar5 & 0x7fff].oClass == 0x491) {
        auVar9 = loadVectorLeftIndexed(0x1a4,uVar6);
        auVar11 = loadVectorRightIndexed(0x1b4,uVar6);
        auVar10 = ZEXT416(0xffffffff);
        auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar9 | auVar11,0);
        auVar9 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar10 = vectorAddFloatingPoint
                            (auVar10,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
        auVar10 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar9);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x194,uVar6
                          );
        *(undefined4 *)((int)pvVar2 + 0x194U & 0xfffffffc) = uVar3;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 001ead68  ns=mobyupdate_helpers  size=0x734
// sig: undefined M1169_001ead68(void)
// callers(1): 001eb4f8 mobyupdate_unsorted::UpdateMoby_1169
// callees(10): 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1169_001ead68(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  Spline *pSVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
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
  ulonglong in_f31;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar19 = uVar14 - 0xe0;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar14;
  puVar12[0x1e] = in_LR;
  puVar12[0x1b] = in_f31;
  puVar12[0x1a] = unaff_r31;
  uVar1 = param_1->state;
  puVar12[0x19] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar25 = ZEXT48(pvVar7);
  puVar12[0x18] = unaff_r29;
  if (uVar1 == '\0') {
    return;
  }
  if (*(int *)((int)pvVar7 + 400) != 0) {
    *(int *)((int)pvVar7 + 400) = *(int *)((int)pvVar7 + 400) + -1;
  }
  if (*(int *)((int)pvVar7 + 0x1a0) != 0) {
    *(int *)((int)pvVar7 + 0x1a0) = *(int *)((int)pvVar7 + 0x1a0) + -1;
  }
  if (*(int *)((int)pvVar7 + 0x194) != 0) {
    *(int *)((int)pvVar7 + 0x194) = *(int *)((int)pvVar7 + 0x194) + -1;
  }
  iVar16 = *(int *)((int)pvVar7 + 0x38);
  param_1->scale = param_1->pClass->gScale * DAT_00765c18;
  if (iVar16 != 0) {
    dVar27 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar7 + 0x184) = uVar15;
    *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar25 + 0x184);
  dVar27 = 0.0;
  *(undefined4 *)((int)puVar12 + 0x74) = 0;
  iVar16 = mobyutil::MB_damage(param_1,0x330000,0);
  if (((iVar16 != 0) && (*(int *)(iVar16 + 0x20) != 0)) &&
     ((MVar5 = *(MOBY_OCLASSES *)(*(int *)(iVar16 + 0x20) + 0xa6), MVar5 == param_1->oClass ||
      (MVar5 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar16 = 0;
  }
  iVar17 = mobyutil::MB_HandleDamage
                     (param_1,iVar16,uVar25 + 0x20,0,puVar12 + 0xe,(int)puVar12 + 0x74,0,4);
  if ((*(int *)(puVar12 + 0xe) == 1) || (param_1->state == '\n')) goto LAB_001eb390;
  MVar6 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar12 + 0x74);
  *(float *)((int)pvVar7 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar27) {
LAB_001eb164:
    param_1->state = '\n';
    fVar2 = mobyutil::g_FrameTime;
    fVar4 = DAT_00765c28 * mobyutil::g_FrameTime;
    param_1->modeBits =
         MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(float *)((int)pvVar7 + 0x78) = fVar4;
    fVar4 = DAT_00765c24;
    *(undefined4 *)((int)pvVar7 + 0xb0) = 0x40200000;
    *(undefined4 *)((int)pvVar7 + 0xb4) = 0x40a00000;
    *(float *)((int)pvVar7 + 0x7c) = fVar4 * fVar2;
    uVar8 = *(uint *)(iVar16 + 0x10);
    uVar9 = *(uint *)(iVar16 + 0x14);
    dVar29 = ABS((double)*(float *)(iVar16 + 0x10));
    dVar28 = ABS((double)*(float *)(iVar16 + 0x14));
    *(float *)(puVar12 + 0xf) = (float)(dVar29 - dVar28);
    uVar20 = (ulonglong)(uVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
    uVar22 = uVar20 << 2;
    dVar30 = dVar29;
    if ((double)*(float *)(puVar12 + 0xf) - dVar27 < 0.0) {
      dVar30 = dVar28;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar22);
    if ((double)*(float *)(puVar12 + 0xf) - dVar27 < 0.0) {
      dVar28 = dVar29;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar30) {
      lVar18 = uVar14 - 0xd0;
      lVar24 = uVar14 - 0x50;
      lVar21 = uVar14 - 0x60;
      lVar26 = 2;
      fVar3 = (float)(dVar28 - dVar30) / (float)(dVar28 + dVar30);
      fVar13 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x8c) = fVar3;
      *(float *)((int)puVar12 + 0x84) = fVar3;
      *(float *)(puVar12 + 0x11) = fVar3;
      *(float *)(puVar12 + 0x10) = fVar3;
      fVar3 = fVar13 * fVar13;
      *(float *)((int)puVar12 + 0x84) = *(float *)((int)puVar12 + 0x84) * fVar13;
      *(float *)(puVar12 + 0x11) = *(float *)(puVar12 + 0x11) * fVar3;
      *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar3 * fVar13;
      do {
        *(float *)((int)lVar18 + 0x80) = *(float *)((int)lVar18 + 0x70) * fVar3 * fVar3;
        iVar16 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar14 - 0x60;
      uVar22 = ZEXT48(&DAT_007358e0);
      lVar18 = lVar19;
      lVar21 = lVar24;
      do {
        pfVar23 = (float *)uVar22;
        fVar3 = pfVar23[1];
        uVar22 = uVar22 + 8;
        *(float *)((int)lVar18 + 0x80) = *(float *)((int)lVar18 + 0x80) * *pfVar23;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar18 = 2;
      do {
        iVar16 = (int)lVar19;
        iVar17 = (int)lVar24;
        lVar19 = lVar19 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0x80)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar2);
    }
    mobyutil::MB_StartKick(dVar27,param_1,uVar25 + 0x60,uVar22,6,1,0);
    *(undefined1 *)((int)pvVar7 + 0x117) = 0xfa;
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar17 < 3) {
    if ((-1 < iVar17) && (0 < iVar17)) goto LAB_001eb164;
  }
  else if (iVar17 < 0xb) {
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    param_1->state = '\t';
    fVar2 = mobyutil::g_FrameTime;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0xc,0x1ead50);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    fVar4 = DAT_00765c20 * mobyutil::g_FrameTime;
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    auVar31 = vectorSplatHalfWord(auVar31,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar31,0x26,uVar25);
    *(undefined2 *)((int)pvVar7 + 0x26) = uVar11;
    *(float *)((int)pvVar7 + 0x78) = fVar4;
    fVar4 = DAT_00765c1c;
    *(undefined4 *)((int)pvVar7 + 0xb0) = 0x41700000;
    *(undefined4 *)((int)pvVar7 + 0xb4) = 0x41e80000;
    *(float *)((int)pvVar7 + 0x7c) = fVar4 * fVar2;
    uVar8 = *(uint *)(iVar16 + 0x10);
    uVar9 = *(uint *)(iVar16 + 0x14);
    dVar29 = ABS((double)*(float *)(iVar16 + 0x10));
    dVar28 = ABS((double)*(float *)(iVar16 + 0x14));
    *(float *)((int)puVar12 + 0x7c) = (float)(dVar29 - dVar28);
    uVar20 = (ulonglong)(uVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1e) & 2 |
             (ulonglong)(uVar9 >> 0x1d) & 4;
    uVar22 = uVar20 << 2;
    dVar30 = dVar29;
    if ((double)*(float *)((int)puVar12 + 0x7c) - dVar27 < 0.0) {
      dVar30 = dVar28;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar22);
    if ((double)*(float *)((int)puVar12 + 0x7c) - dVar27 < 0.0) {
      dVar28 = dVar29;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar30) {
      lVar18 = uVar14 - 0xd0;
      lVar21 = uVar14 - 0x40;
      lVar24 = uVar14 - 0x30;
      lVar26 = 2;
      fVar3 = (float)(dVar28 - dVar30) / (float)(dVar28 + dVar30);
      fVar13 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0xac) = fVar3;
      *(float *)((int)puVar12 + 0xa4) = fVar3;
      *(float *)(puVar12 + 0x15) = fVar3;
      *(float *)(puVar12 + 0x14) = fVar3;
      fVar3 = fVar13 * fVar13;
      *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar13;
      *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar3;
      *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar3 * fVar13;
      do {
        *(float *)((int)lVar18 + 0xa0) = *(float *)((int)lVar18 + 0x90) * fVar3 * fVar3;
        iVar16 = (int)lVar21;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar14 - 0x40;
      uVar22 = ZEXT48(&DAT_007358e0);
      lVar18 = lVar19;
      lVar21 = lVar24;
      do {
        pfVar23 = (float *)uVar22;
        fVar3 = pfVar23[1];
        uVar22 = uVar22 + 8;
        *(float *)((int)lVar18 + 0xa0) = *(float *)((int)lVar18 + 0xa0) * *pfVar23;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar18 = 2;
      do {
        iVar16 = (int)lVar19;
        iVar17 = (int)lVar24;
        lVar19 = lVar19 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0xa0)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar2);
    }
    mobyutil::MB_StartKick(dVar27,param_1,uVar25 + 0x60,uVar22,5,1,0);
    *(undefined1 *)((int)pvVar7 + 0x117) = 0xfa;
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar25 + 0x110);
LAB_001eb390:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar25 + 0x110);
  fVar4 = DAT_00765c3c;
  if (*(int *)((int)pvVar7 + 0x184) != 0) {
    fVar4 = DAT_00765c3c + 6.0;
  }
  *(float *)((int)pvVar7 + 0x180) = fVar4;
  pSVar10 = Splines[*(int *)((int)pvVar7 + 0x178)];
  iVar16 = mobyutil::MB_getTargetInArea
                     (param_1,uVar25 + 0x120,pSVar10,0,0,pSVar10->points,pSVar10->cnt);
  if ((iVar16 != 2) &&
     (fVar4 = (param_1->pos).y - *(float *)((int)pvVar7 + 0x124),
     fVar2 = (param_1->pos).x - *(float *)((int)pvVar7 + 0x120),
     *(float *)((int)pvVar7 + 0x180) < SQRT(fVar2 * fVar2 + fVar4 * fVar4))) {
    *(undefined4 *)((int)pvVar7 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar7 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 001eb4f8  ns=mobyupdate_unsorted  size=0x13b4
// sig: undefined UpdateMoby_1169(MobyInstance * moby)
// callers(0): 
// callees(16): 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00100f8c mobyutil::MB_InitDefaultParams; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00113fa0 mobyutil::MB_LineCrossesSpline; 001ea988 mobyupdate_helpers::M1169_001ea988; 001ead68 mobyupdate_helpers::M1169_001ead68; 0049fba0 FUN_0049fba0; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 006549ec: 'Footsoldier with no introPath. UID: %d\n' | 00654a14: 'FootSoldier with a intro path that has no points. UID: %d\n' | 00654a54: 'Footsoldier with no boundPath. UID: %d\n' | 00654a7c: 'FootSoldier with a bound path that has no points. UID: %d\n' | 00654abc: 'FootSoldier with no hole in ground. UID: %d\n'

/* Moby 1169 */

void mobyupdate_unsorted::UpdateMoby_1169(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  void *pvVar12;
  f32 fVar13;
  void *pvVar14;
  Spline *pSVar15;
  uint uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  Cuboid *pCVar25;
  longlong lVar26;
  int iVar31;
  undefined4 uVar32;
  ushort *puVar33;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar34;
  MobyInstance *pMVar35;
  uint uVar36;
  longlong lVar37;
  float *pfVar38;
  longlong lVar39;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar40;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar41;
  double dVar42;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
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
  float fVar55;
  
  lVar26 = (longlong)(int)moby;
  uVar27 = ZEXT48(&stack0x00000000);
  lVar30 = uVar27 - 0x140;
  puVar17 = (ulonglong *)lVar30;
  *puVar17 = uVar27;
  puVar17[0x2a] = in_LR;
  puVar17[0x24] = in_f28;
  puVar17[0x25] = in_f29;
  puVar17[0x26] = in_f30;
  puVar17[0x27] = in_f31;
  puVar17[0x23] = unaff_r31;
  puVar17[0x22] = unaff_r30;
  puVar17[0x21] = unaff_r29;
  puVar17[0x20] = unaff_r28;
  puVar17[0x1f] = unaff_r27;
  pvVar12 = moby->pVar;
  uVar40 = ZEXT48(pvVar12);
  mobyupdate_helpers::M1169_001ead68();
  pMVar35 = MobyInstance;
  bVar1 = moby->state;
  iVar31 = *(int *)((int)pvVar12 + 0x160);
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(int *)((int)pvVar12 + 0x174) == -1) {
          libc::printf("Footsoldier with no introPath. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
        }
        else if (Splines[*(int *)((int)pvVar12 + 0x174)]->cnt == 0) {
          libc::printf("FootSoldier with a intro path that has no points. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
        }
        else if (*(int *)((int)pvVar12 + 0x178) == -1) {
          libc::printf("Footsoldier with no boundPath. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
        }
        else if (Splines[*(int *)((int)pvVar12 + 0x178)]->cnt == 0) {
          libc::printf("FootSoldier with a bound path that has no points. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
        }
        else if (*(int *)((int)pvVar12 + 0x170) == -1) {
          libc::printf("FootSoldier with no hole in ground. UID: %d\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
        }
        else {
          iVar31 = mobyutil::MB_randInt(2);
          if (iVar31 != 0) {
            moby->modeBits = moby->modeBits | MIRROR;
          }
          *(undefined4 *)((int)pvVar12 + 0x20) = 0x40000000;
          *(undefined2 *)((int)pvVar12 + 0x24) = 2;
          *(undefined1 *)((int)pvVar12 + 0x28) = 1;
          mobyutil::MB_InitDefaultParams((float *)((int)pvVar12 + 0xc0));
          *(undefined4 *)((int)pvVar12 + 200) = 0x40000000;
          *(undefined4 *)((int)pvVar12 + 0xcc) = 0x3f000000;
          uVar32 = fastfunc::FastDoubleToInt((double)(DAT_00765c18 * 307.2));
          *(undefined4 *)((int)pvVar12 + 0xc0) = uVar32;
          pCVar25 = Cuboids;
          iVar31 = *(int *)((int)pvVar12 + 0x170);
          *(float *)((int)pvVar12 + 0xc4) = DAT_00765c18 * 0.3;
          *(float *)((int)pvVar12 + 0xe4) = DAT_00765c2c * mobyutil::g_FrameTime;
          (moby->pos).x = pCVar25[iVar31].pos.x;
          (moby->pos).y = pCVar25[iVar31].pos.y;
          fVar55 = pCVar25[iVar31].pos.z;
          (moby->pos).z = fVar55;
          (moby->pos).w = pCVar25[iVar31].pos.w;
          fVar3 = DAT_00765c40;
          moby->state = '\x01';
          (moby->pos).z = fVar55 - fVar3;
        }
      }
      else if ((*(int *)((int)pvVar12 + 0x164) != 2) && (*(int *)((int)pvVar12 + 400) == 0)) {
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar44 = loadVectorLeftIndexed(0x5c38,0x760000);
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar45);
        if (((byte)moby->group != 0xffffffff) &&
           (puVar33 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group],
           puVar33 != (ushort *)0x0)) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(8,0x1eb49c);
          auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar43 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60
                               ,auVar46);
          auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
          auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
          do {
            if (pMVar35[*puVar33 & 0x7fff].oClass == 0x491) {
              uVar32 = storeVectorElementWordIndexed
                                 (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,400,
                                  ZEXT48(pMVar35[*puVar33 & 0x7fff].pVar));
              *(undefined4 *)((int)pMVar35[*puVar33 & 0x7fff].pVar + 400U & 0xfffffffc) = uVar32;
            }
            uVar11 = *puVar33;
            puVar33 = puVar33 + 1;
          } while (-1 < (short)uVar11);
        }
        moby->state = '\x02';
        auVar43 = ZEXT416(0xffffffff);
        auVar53 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        pSVar15 = Splines[*(int *)((int)pvVar12 + 0x174)];
        uVar27 = ZEXT48(pSVar15);
        auVar43 = loadVectorLeftIndexed(0x10,lVar26);
        auVar45 = loadVectorLeftIndexed(0x10,uVar27);
        auVar45 = vectorSubtractFloatingPoint(auVar45,auVar43);
        auVar46 = vectorReciprocalEstimateFloatingPoint(auVar44);
        auVar43 = ZEXT416(0xffffffff);
        auVar51 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x40,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x40U & 0xfffffffc) = uVar32;
        auVar43 = loadVectorLeftIndexed(0x14,uVar27);
        auVar48 = loadVectorLeftIndexed(0x14,lVar26);
        auVar47 = vectorSubtractFloatingPoint(auVar43,auVar48);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar48 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x44,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x44U & 0xfffffffc) = uVar32;
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        *(float *)((int)pvVar12 + 0x48) = pSVar15->points[0].z - (moby->pos).z;
        *(float *)((int)pvVar12 + 0x4c) = pSVar15->points[0].w;
        auVar43 = loadVectorLeftIndexed(0xc,0x1eb49c);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar50 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar46,auVar44,auVar50);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar46,auVar43,auVar48);
        auVar53 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar51 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar52 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar46,auVar44,auVar50);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar46,auVar43,auVar49);
        auVar43 = ZEXT416(0xffffffff);
        auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = ZEXT416(0xffffffff);
        auVar54 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar44,auVar50);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar44,auVar44,auVar43);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar50,auVar51);
        auVar51 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar45,auVar48,auVar53);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar47,auVar48,auVar52);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x40,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x40U & 0xfffffffc) = uVar32;
        uVar32 = storeVectorElementWordIndexed
                           (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x44,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x44U & 0xfffffffc) = uVar32;
        *(undefined4 *)((int)pvVar12 + 0x48) = 0;
        auVar43 = loadVectorLeftIndexed(0x5c30,0x760000);
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff418,0x720000);
        auVar47 = loadVectorLeftIndexed(0x18,lVar26);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar51);
        auVar44 = loadVectorLeftIndexed(0x18,uVar27);
        auVar45 = loadVectorLeftIndexed(0x10,0x1eb49c);
        auVar47 = vectorSubtractFloatingPoint(auVar47,auVar44);
        auVar44 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = loadVectorLeftIndexed(0x14,0x1eb49c);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar46,auVar43,auVar49);
        auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar47);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar43 ^ (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 |
                                               auVar45 << 0x60),auVar51);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x48,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x48U & 0xfffffffc) = uVar32;
      }
    }
    else if (bVar1 < 3) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar12 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar12 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar12 + 0x48);
      fVar55 = -(DAT_00765c30 * DAT_0071f418 - *(float *)((int)pvVar12 + 0x48));
      *(float *)((int)pvVar12 + 0x48) = fVar55;
      if ((fVar55 < 0.0) &&
         (fVar13 = (moby->pos).z, uVar36 = (int)fVar13 >> 0x1f,
         fVar3 = Splines[*(int *)((int)pvVar12 + 0x174)]->points[0].z,
         fVar55 = Splines[*(int *)((int)pvVar12 + 0x174)]->points[0].z, uVar16 = (int)fVar3 >> 0x1f,
         (int)((uVar36 >> 1 ^ (uint)fVar13) - uVar36) < (int)((uVar16 >> 1 ^ (uint)fVar3) - uVar16))
         ) {
        *(undefined4 *)((int)pvVar12 + 0x19c) = 0;
        (moby->pos).z = fVar55;
        moby->state = '\x03';
        if (moby->animationId != '\x04') {
          puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar26,4,0,*(undefined4 *)((int)puVar17 + 0xec));
        }
      }
    }
    else if (bVar1 < 4) {
      pSVar15 = Splines[*(int *)((int)pvVar12 + 0x174)];
      mobyupdate_helpers::M1169_001ea988(lVar26,pSVar15->points + *(int *)((int)pvVar12 + 0x19c));
      iVar31 = *(int *)((int)pvVar12 + 0x19c);
      fVar55 = (moby->pos).y - pSVar15->points[iVar31].y;
      fVar3 = (moby->pos).x - pSVar15->points[iVar31].x;
      if (((SQRT(fVar3 * fVar3 + fVar55 * fVar55) < 0.25) &&
          (*(int *)((int)pvVar12 + 0x19c) = iVar31 + 1, iVar31 + 1 == pSVar15->cnt)) &&
         (moby->state = '\x04', moby->animationId != '\x02')) {
        puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar26,2,0,*(undefined4 *)((int)puVar17 + 0xec));
      }
    }
    else {
      fVar55 = *(float *)(iVar31 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar31 + 0x14) - (moby->pos).y;
      fVar4 = ABS(fVar55);
      fVar10 = ABS(fVar3);
      *(float *)((int)puVar17 + 0x9c) = fVar55;
      *(float *)(puVar17 + 0x14) = fVar3;
      *(float *)((int)puVar17 + 0xa4) = fVar4 - fVar10;
      dVar42 = 0.0;
      uVar28 = (ulonglong)(*(uint *)((int)puVar17 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x14) >> 0x1d) & 4;
      fVar55 = ABS(*(float *)((int)puVar17 + 0x9c));
      if (*(float *)((int)puVar17 + 0xa4) - 0.0 < 0.0) {
        fVar55 = fVar10;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar3 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)(puVar17 + 0x14));
      if (*(float *)((int)puVar17 + 0xa4) - 0.0 < 0.0) {
        fVar9 = fVar4;
      }
      if (0.0 < fVar55) {
        lVar29 = uVar27 - 0x130;
        lVar39 = uVar27 - 0x68;
        lVar37 = uVar27 - 0x78;
        lVar41 = 2;
        fVar55 = (fVar9 - fVar55) / (fVar9 + fVar55);
        fVar4 = fVar55 * fVar55;
        *(float *)((int)puVar17 + 0xd4) = fVar55;
        *(float *)((int)puVar17 + 0xcc) = fVar55;
        *(float *)(puVar17 + 0x1a) = fVar55;
        *(float *)(puVar17 + 0x19) = fVar55;
        fVar55 = fVar4 * fVar4;
        *(float *)((int)puVar17 + 0xcc) = *(float *)((int)puVar17 + 0xcc) * fVar4;
        *(float *)(puVar17 + 0x1a) = *(float *)(puVar17 + 0x1a) * fVar55;
        *(float *)((int)puVar17 + 0xd4) = *(float *)((int)puVar17 + 0xd4) * fVar55 * fVar4;
        do {
          *(float *)((int)lVar29 + 200) = *(float *)((int)lVar29 + 0xb8) * fVar55 * fVar55;
          iVar34 = (int)lVar37;
          lVar37 = lVar37 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar39 + 4) = *(float *)(iVar34 + 4) * fVar55 * fVar55;
          lVar39 = lVar39 + 8;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
        lVar41 = 4;
        lVar39 = uVar27 - 0x78;
        pfVar38 = (float *)&DAT_007358e0;
        lVar29 = lVar30;
        lVar37 = lVar39;
        do {
          fVar55 = *pfVar38;
          fVar4 = pfVar38[1];
          pfVar38 = pfVar38 + 2;
          *(float *)((int)lVar29 + 200) = *(float *)((int)lVar29 + 200) * fVar55;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar37 + 4) = *(float *)((int)lVar37 + 4) * fVar4;
          lVar37 = lVar37 + 8;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
        lVar29 = 2;
        do {
          iVar34 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          iVar18 = (int)lVar39;
          lVar39 = lVar39 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar34 + 200)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar10 + fVar3);
      }
      dVar42 = (double)fastfunc::FastDiffRots(dVar42,0x3fd0c15240000000);
      fVar55 = mobyutil::OrganicDeltAng
                         ((float)dVar42,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar12 + 0x188));
      if (*(int *)((int)pvVar12 + 0x164) == 2) {
        moby->state = '\a';
        if (moby->animationId != '\x04') {
          puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar26,4,0,*(undefined4 *)((int)puVar17 + 0xec));
        }
      }
      else if (((*(int *)((int)pvVar12 + 0x194) == 0) &&
               (iVar34 = mobyutil::MB_randInt((double)fVar55,4), iVar34 == 0)) &&
              ((dVar42 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar42),
               dVar42 < 0.01745329238474369 &&
               (iVar31 = mobyutil::MB_LineCrossesSpline
                                   (*(undefined4 *)((int)pvVar12 + 0x178),lVar26 + 0x10,
                                    iVar31 + 0x10), pMVar35 = MobyInstance, iVar31 == 0)))) {
        if ((byte)moby->group != 0xffffffff) {
          puVar33 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
          auVar43 = loadVectorLeftIndexed(0x38,0x1eb49c);
          auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          do {
            pvVar14 = pMVar35[*puVar33 & 0x7fff].pVar;
            uVar27 = ZEXT48(pvVar14);
            if (pMVar35[*puVar33 & 0x7fff].oClass == 0x491) {
              auVar46 = loadVectorLeftIndexed(0x1a4,uVar27);
              auVar48 = loadVectorRightIndexed(0x1b4,uVar27);
              auVar45 = ZEXT416(0xffffffff);
              auVar47 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
              auVar45 = vectorConvertFromSignedFixedPointWord(auVar46 | auVar48,0);
              auVar46 = vectorShiftLeftIntegerWord(auVar47,auVar47);
              auVar45 = vectorAddFloatingPoint
                                  (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 |
                                           auVar43 << 0x60);
              auVar45 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar46);
              auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
              auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar32 = storeVectorElementWordIndexed
                                 (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                                  0x194,uVar27);
              *(undefined4 *)((int)pvVar14 + 0x194U & 0xfffffffc) = uVar32;
            }
            uVar11 = *puVar33;
            puVar33 = puVar33 + 1;
          } while (-1 < (short)uVar11);
        }
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        moby->state = '\x05';
        auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = loadVectorLeftIndexed(0x3c,0x1eb49c);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                             auVar44);
        auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x1a0,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x1a0U & 0xfffffffc) = uVar32;
      }
    }
  }
  else if (bVar1 == 10) {
    uVar36 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x60));
    if ((uVar36 & 0x160) != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar1 == 9) {
    uVar36 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x60));
    if ((uVar36 & 0x40) == 0) {
      if ((uVar36 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x02') {
        puVar17[0x1d] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar26,2,0,*(undefined4 *)((int)puVar17 + 0xec));
      }
    }
  }
  else if (bVar1 == 8) {
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar12 + 0x40);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar12 + 0x44);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar12 + 0x48);
    fVar3 = -(DAT_00765c30 * DAT_0071f418 - *(float *)((int)pvVar12 + 0x48));
    *(float *)((int)pvVar12 + 0x48) = fVar3;
    pCVar25 = Cuboids;
    fVar55 = 0.0;
    uVar2 = moby->animationId;
    if (fVar3 < 0.0) {
      iVar31 = *(int *)((int)pvVar12 + 0x170);
      fVar3 = Cuboids[iVar31].pos.z;
      if ((moby->pos).z < fVar3 - DAT_00765c40) {
        fVar10 = Cuboids[iVar31].pos.x;
        (moby->pos).x = fVar10;
        fVar4 = pCVar25[iVar31].pos.y;
        (moby->pos).z = fVar3;
        (moby->pos).y = fVar4;
        (moby->pos).w = pCVar25[iVar31].pos.w;
        pSVar15 = Splines[*(int *)((int)pvVar12 + 0x174)];
        (moby->pos).z = fVar3 - DAT_00765c40;
        fVar10 = pSVar15->points[0].x - fVar10;
        fVar4 = pSVar15->points[0].y - fVar4;
        fVar9 = ABS(fVar10);
        fVar5 = ABS(fVar4);
        *(float *)(puVar17 + 0x12) = fVar10;
        *(float *)((int)puVar17 + 0x94) = fVar4;
        *(float *)(puVar17 + 0x13) = fVar9 - fVar5;
        uVar40 = (ulonglong)(*(uint *)(puVar17 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x94) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)(puVar17 + 0x12));
        if (*(float *)(puVar17 + 0x13) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar40 << 2));
        fVar4 = ABS(*(float *)((int)puVar17 + 0x94));
        if (*(float *)(puVar17 + 0x13) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar9 = *(float *)(((uint)(uVar40 << 2) | 0x735900) + 4);
        if (0.0 < fVar3) {
          lVar29 = uVar27 - 0x130;
          lVar39 = uVar27 - 0x88;
          lVar37 = uVar27 - 0x98;
          lVar41 = 2;
          fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar17 + 0xb4) = fVar3;
          *(float *)((int)puVar17 + 0xac) = fVar3;
          *(float *)(puVar17 + 0x16) = fVar3;
          *(float *)(puVar17 + 0x15) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar17 + 0xac) = *(float *)((int)puVar17 + 0xac) * fVar4;
          *(float *)(puVar17 + 0x16) = *(float *)(puVar17 + 0x16) * fVar3;
          *(float *)((int)puVar17 + 0xb4) = *(float *)((int)puVar17 + 0xb4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar29 + 0xa8) = *(float *)((int)lVar29 + 0x98) * fVar3 * fVar3;
            iVar31 = (int)lVar37;
            lVar37 = lVar37 + 8;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar39 + 4) = *(float *)(iVar31 + 4) * fVar3 * fVar3;
            lVar39 = lVar39 + 8;
            lVar41 = lVar41 + -1;
          } while (lVar41 != 0);
          lVar41 = 4;
          lVar39 = uVar27 - 0x98;
          pfVar38 = (float *)&DAT_007358e0;
          lVar29 = lVar30;
          lVar37 = lVar39;
          do {
            fVar3 = *pfVar38;
            fVar4 = pfVar38[1];
            pfVar38 = pfVar38 + 2;
            *(float *)((int)lVar29 + 0xa8) = *(float *)((int)lVar29 + 0xa8) * fVar3;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar37 + 4) = *(float *)((int)lVar37 + 4) * fVar4;
            lVar37 = lVar37 + 8;
            lVar41 = lVar41 + -1;
          } while (lVar41 != 0);
          lVar29 = 2;
          do {
            iVar31 = (int)lVar30;
            lVar30 = lVar30 + 0x10;
            iVar34 = (int)lVar39;
            lVar39 = lVar39 + 0x10;
            fVar55 = fVar55 + *(float *)(iVar31 + 0xa8) + *(float *)(iVar34 + 4) +
                     *(float *)(iVar34 + 8) + *(float *)(iVar34 + 0xc);
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          fVar55 = (fVar55 + 0.7853982) * fVar10 + fVar9;
        }
        (moby->rotation).z = fVar55;
        moby->state = '\x01';
        if (uVar2 != '\0') {
          puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar26,0,0,*(undefined4 *)((int)puVar17 + 0xec));
        }
      }
    }
  }
  else if (bVar1 == 7) {
    pSVar15 = Splines[*(int *)((int)pvVar12 + 0x174)];
    fVar55 = (moby->pos).y - pSVar15->points[0].y;
    fVar3 = (moby->pos).x - pSVar15->points[0].x;
    if (SQRT(fVar3 * fVar3 + fVar55 * fVar55) <= 0.25) {
      if (*(int *)((int)pvVar12 + 400) == 0) {
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar44 = loadVectorLeftIndexed(0x5c38,0x760000);
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar45);
        if (((byte)moby->group != 0xffffffff) &&
           (puVar33 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group],
           puVar33 != (ushort *)0x0)) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(8,0x1eb49c);
          auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar43 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60
                               ,auVar46);
          auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
          auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
          do {
            if (pMVar35[*puVar33 & 0x7fff].oClass == 0x491) {
              uVar32 = storeVectorElementWordIndexed
                                 (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,400,
                                  ZEXT48(pMVar35[*puVar33 & 0x7fff].pVar));
              *(undefined4 *)((int)pMVar35[*puVar33 & 0x7fff].pVar + 400U & 0xfffffffc) = uVar32;
            }
            uVar11 = *puVar33;
            puVar33 = puVar33 + 1;
          } while (-1 < (short)uVar11);
        }
        auVar51 = vectorReciprocalEstimateFloatingPoint(auVar44);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar45 = loadVectorLeftIndexed(0x10,lVar26);
        uVar27 = ZEXT48(Cuboids + *(int *)((int)pvVar12 + 0x170));
        auVar49 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = ZEXT416(0xffffffff);
        auVar50 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = loadVectorLeftIndexed(0x30,uVar27);
        auVar45 = vectorSubtractFloatingPoint(auVar43,auVar45);
        auVar46 = loadVectorLeftIndexed(0x34,uVar27);
        auVar43 = loadVectorLeftIndexed(0x38,uVar27);
        fVar55 = Cuboids[*(int *)((int)pvVar12 + 0x170)].pos.w;
        auVar48 = loadVectorLeftIndexed(0x5c40,0x760000);
        moby->state = '\b';
        auVar47 = vectorSubtractFloatingPoint(auVar43,auVar48);
        auVar43 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x40,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x40U & 0xfffffffc) = uVar32;
        auVar48 = loadVectorLeftIndexed(0x14,lVar26);
        *(float *)((int)pvVar12 + 0x4c) = fVar55;
        auVar43 = loadVectorLeftIndexed(0xc,0x1eb49c);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar53 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar48 = vectorSubtractFloatingPoint(auVar46,auVar48);
        auVar50 = vectorShiftLeftIntegerWord(auVar50,auVar50);
        auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar44,auVar53);
        auVar43 = ZEXT416(0xffffffff);
        auVar54 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar46 = vectorMultiplyAddFloatingPoint(auVar51,auVar46,auVar49);
        auVar43 = ZEXT416(0xffffffff);
        auVar51 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar52 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar46,auVar44,auVar53);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar46,auVar43,auVar50);
        auVar50 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar53 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar44,auVar53);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar44,auVar44,auVar43);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar51,auVar53,auVar49);
        auVar43 = ZEXT416(0xffffffff);
        auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = ZEXT416(0xffffffff);
        auVar53 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar45,auVar51,auVar52);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar48,auVar51,auVar50);
        auVar50 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x40,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x40U & 0xfffffffc) = uVar32;
        uVar32 = storeVectorElementWordIndexed
                           (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x44,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x44U & 0xfffffffc) = uVar32;
        *(undefined4 *)((int)pvVar12 + 0x48) = 0;
        auVar43 = loadVectorLeftIndexed(0x5c30,0x760000);
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff418,0x720000);
        auVar48 = loadVectorLeftIndexed(0x18,lVar26);
        auVar45 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar49);
        auVar48 = vectorSubtractFloatingPoint(auVar48,auVar47);
        auVar43 = loadVectorLeftIndexed(0x10,0x1eb49c);
        auVar47 = loadVectorLeftIndexed(0x14,0x1eb49c);
        auVar44 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar43 = ZEXT416(0xffffffff);
        auVar49 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar45,auVar50);
        auVar46 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar45,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar48);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar44 ^ (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 |
                                               auVar43 << 0x60),auVar46);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x48,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x48U & 0xfffffffc) = uVar32;
      }
      else if (moby->animationId != '\0') {
        puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar26,0,0,*(undefined4 *)((int)puVar17 + 0xec));
      }
    }
    else {
      mobyupdate_helpers::M1169_001ea988(lVar26,pSVar15->points);
      if (*(int *)((int)pvVar12 + 0x164) != 2) {
        *(int32_t *)((int)pvVar12 + 0x19c) = Splines[*(int *)((int)pvVar12 + 0x174)]->cnt + -1;
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 == 5) {
    if (*(int *)((int)pvVar12 + 0x1a0) == 0) {
      moby->state = '\x04';
    }
    else {
      dVar42 = (double)fastfunc::FastWrapRot
                                 ((moby->rotation).z,(30.0 / (animationSpeed * 90.0)) * 0.017453292)
      ;
      (moby->rotation).z = (float)dVar42;
      fVar9 = DAT_00765c10;
      fVar4 = mobyutil::g_FrameTime;
      fVar55 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar10 = (moby->pos).z;
      if (worldUpdateTime ==
          (((int)worldUpdateTime >> 2) +
          (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * 4) {
        fVar5 = (moby->transform).v0.y;
        fVar6 = (moby->transform).v0.x;
        fVar7 = (moby->transform).v0.z;
        fVar23 = 0.0;
        fVar22 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        if (fVar22 == 0.0) {
          fVar8 = (moby->transform).v0.w;
          fVar21 = fVar23;
          fVar19 = fVar23;
          fVar20 = fVar23;
        }
        else {
          fVar20 = 0.75 / fVar22;
          fVar8 = (moby->transform).v0.w;
          fVar21 = fVar6 * fVar20;
          fVar19 = fVar5 * fVar20;
          fVar20 = fVar7 * fVar20;
        }
        fVar24 = DAT_00765c10 * mobyutil::g_FrameTime;
        *(float *)((int)puVar17 + 0x7c) = fVar8;
        *(float *)(puVar17 + 0xe) = fVar21 + fVar55;
        fVar24 = fVar24 / fVar22;
        *(float *)((int)puVar17 + 0x74) = fVar19 + fVar3;
        *(float *)((int)puVar17 + 0x8c) = fVar8;
        *(float *)(puVar17 + 0xf) = fVar20 + fVar10 + 1.15;
        fVar10 = fVar23;
        if (0.0 - fVar22 < 0.0) {
          fVar10 = fVar6 * fVar24;
        }
        fVar8 = fVar23;
        if (0.0 - fVar22 < 0.0) {
          fVar8 = fVar5 * fVar24;
        }
        if (0.0 - fVar22 < 0.0) {
          fVar23 = fVar7 * fVar24;
        }
        if (fVar22 - 0.0 < 0.0) {
          fVar10 = fVar6 * fVar24;
        }
        if (fVar22 - 0.0 < 0.0) {
          fVar8 = fVar5 * fVar24;
        }
        if (fVar22 - 0.0 < 0.0) {
          fVar23 = fVar7 * fVar24;
        }
        *(float *)(puVar17 + 0x10) = fVar10;
        *(float *)((int)puVar17 + 0x84) = fVar8;
        *(float *)(puVar17 + 0x11) = fVar23;
        fVar3 = *(float *)(iVar31 + 0x14) - fVar3;
        fVar55 = *(float *)(iVar31 + 0x10) - fVar55;
        fVar55 = fVar9 * fVar4 *
                 ((hero::g_heroCollTop - 0.8) / SQRT(fVar55 * fVar55 + fVar3 * fVar3));
        *(float *)(puVar17 + 0x11) = fVar55;
        fVar4 = fVar4 * 2.0;
        if (fVar4 < fVar55) {
          *(float *)(puVar17 + 0x11) = fVar4;
        }
        pMVar35 = (MobyInstance *)FUN_0049fba0(uVar27 - 0xd0,uVar27 - 0xc0,lVar26,1);
        mobyfunc::SetColorOfMoby(pMVar35,0xff,0xe0,0xe0);
      }
    }
  }
  return;
}



//==== 001ec8ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1170_001ec8ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1170_001ec8ac(void)

{
  DAT_00765c90 = 0x10000;
  return;
}



//==== 001ec8c8  ns=mobyupdate_helpers  size=0x210
// sig: undefined M1170_001ec8c8(void)
// callers(1): 001ecb08 mobyupdate_unsorted::UpdateMoby_1170
// callees(6): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M1170_001ec8c8(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  if (param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00765cb4;
  dVar7 = 0.0;
  local_1c = 0.0;
  iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
     ((MVar1 = *(MOBY_OCLASSES *)(*(int *)(iVar5 + 0x20) + 0xa6), MVar1 == param_1->oClass ||
      (MVar1 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar5 = 0;
  }
  iVar5 = mobyutil::MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 == 1) || (param_1->state == '\x06')) goto LAB_001eca40;
  MVar2 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
  *(float *)((int)pvVar3 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar7) {
LAB_001ec9fc:
    param_1->state = '\x06';
    param_1->modeBits =
         MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_001ec9fc;
  }
  else if (iVar5 < 0xb) {
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
LAB_001eca40:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  mobyutil::MB_getTargetInArea
            (0x406fe00000000000,param_1,uVar6 + 0x70,&DAT_001ec8c0,0,0,
             Splines[*(int *)((int)pvVar3 + 0xc4)]->points,
             Splines[*(int *)((int)pvVar3 + 0xc4)]->cnt);
  if (*(int *)((int)pvVar3 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar3 + 0xb0) = g_heroMobyPtr;
  }
  return;
}



//==== 001ecb08  ns=mobyupdate_unsorted  size=0x6c8
// sig: undefined UpdateMoby_1170(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 0010e030 mobyutil::MB_genericExplosion; 00110488 mobyutil::ClampVec3Magnitude; 001ec8c8 mobyupdate_helpers::M1170_001ec8c8; 001f29e8 FUN_001f29e8; 004fff60 fastfunc::FastDecTimerS32; 005cd098 libc::printf
// strings: 00654af4: 'Hovertank with no introPath. UID: %d\n' | 00654b1c: 'Hovertank with a intro path that has no points. UID: %d\n' | 00654b5c: 'Hovertank with no boundPath. UID: %d\n' | 00654b84: 'Hovertank with a bound path that has no points. UID: %d\n' | 00654bc4: 'Hovertank with no bombPath. UID: %d\n' | 00654bec: 'Hovertank with a bomb path that has no points. UID: %d\n'

/* Moby 1170 */

void mobyupdate_unsorted::UpdateMoby_1170(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  Spline *pSVar3;
  undefined4 uVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  Vec4 local_70;
  float local_60;
  float local_5c;
  float local_58;
  f32 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  Vec4 local_40;
  longlong local_30;
  
  lVar6 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  uVar8 = ZEXT48(pvVar2);
  mobyupdate_helpers::M1170_001ec8c8();
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar6,uVar8 + 0x40,lVar6 + 0x10,1,0xffffffffffffffff,5,2,4);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == '\x05') {
    pSVar3 = Splines[*(int *)((int)pvVar2 + 0xc0)];
    local_40.x = pSVar3->points[0].x - (moby->pos).x;
    local_40.y = pSVar3->points[0].y - (moby->pos).y;
    local_40.z = pSVar3->points[0].z - (moby->pos).z;
    local_40.w = pSVar3->points[0].w;
    mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 20.0),&local_40);
    (moby->pos).x = (moby->pos).x + local_40.x;
    (moby->pos).y = (moby->pos).y + local_40.y;
    (moby->pos).z = (moby->pos).z + local_40.z;
    if (0.01 <= SQRT(local_40.z * local_40.z + local_40.x * local_40.x + local_40.y * local_40.y)) {
      if (*(int *)((int)pvVar2 + 0xb4) != 2) {
        moby->state = '\x02';
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x04') {
    iVar7 = fastfunc::FastDecTimerS32(uVar8 + 0xcc);
    if (iVar7 != 0) {
      local_60 = (moby->pos).x;
      local_5c = (moby->pos).y;
      iVar7 = *(int *)((int)pvVar2 + 0xd0);
      local_58 = (moby->pos).z;
      pSVar3 = Splines[*(int *)((int)pvVar2 + 200)];
      local_54 = (moby->pos).w;
      fVar5 = DAT_00765cb8 * animationSpeed;
      local_44 = pSVar3->points[iVar7].w;
      local_48 = 0;
      local_50 = (pSVar3->points[iVar7].x - local_60) * (1.0 / fVar5);
      local_4c = (pSVar3->points[iVar7].y - local_5c) * (1.0 / fVar5);
      *(float *)((int)pvVar2 + 0x48) =
           -(fVar5 * fVar5 * DAT_00765cbc * DAT_0071f418 * -0.5 +
            (local_58 - Splines[*(int *)((int)pvVar2 + 200)]->points[iVar7].z)) / fVar5;
      local_30 = (longlong)(int)(animationSpeed * 120.5);
      FUN_001f29e8(lVar6,&local_60,&local_50,&DAT_001ecad8,(int)(animationSpeed * 120.5));
      iVar7 = *(int *)((int)pvVar2 + 0xd0) + 1;
      *(int *)((int)pvVar2 + 0xd0) = iVar7;
      if (iVar7 < Splines[*(int *)((int)pvVar2 + 200)]->cnt) {
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = loadVectorLeftIndexed(0x18,0x1ecad8);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar10);
        auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0xcc,uVar8);
        *(undefined4 *)((int)pvVar2 + 0xccU & 0xfffffffc) = uVar4;
      }
      else {
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        moby->state = '\x03';
        auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = loadVectorLeftIndexed(0x14,0x1ecad8);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar10);
        auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0xcc,uVar8);
        *(undefined4 *)((int)pvVar2 + 0xccU & 0xfffffffc) = uVar4;
      }
    }
  }
  else if (uVar1 == '\x03') {
    if (*(int *)((int)pvVar2 + 0xb4) == 2) {
      moby->state = '\x05';
    }
    else {
      iVar7 = fastfunc::FastDecTimerS32(uVar8 + 0xcc);
      if (iVar7 != 0) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar2 + 0xd0) = 0;
      }
    }
  }
  else if (uVar1 == '\x02') {
    pSVar3 = Splines[*(int *)((int)pvVar2 + 0xc0)];
    local_70.x = pSVar3->points[1].x - (moby->pos).x;
    local_70.y = pSVar3->points[1].y - (moby->pos).y;
    local_70.z = pSVar3->points[1].z - (moby->pos).z;
    local_70.w = pSVar3->points[1].w;
    mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 20.0),&local_70);
    (moby->pos).x = (moby->pos).x + local_70.x;
    (moby->pos).y = (moby->pos).y + local_70.y;
    (moby->pos).z = (moby->pos).z + local_70.z;
    if (0.01 <= SQRT(local_70.z * local_70.z + local_70.x * local_70.x + local_70.y * local_70.y)) {
      if (*(int *)((int)pvVar2 + 0xb4) == 2) {
        moby->state = '\x05';
      }
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    if (*(int *)((int)pvVar2 + 0xb4) != 2) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar2 + 0xc0) == -1) {
      libc::printf("Hovertank with no introPath. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
    }
    else if (Splines[*(int *)((int)pvVar2 + 0xc0)]->cnt == 0) {
      libc::printf("Hovertank with a intro path that has no points. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
    }
    else if (*(int *)((int)pvVar2 + 0xc4) == -1) {
      libc::printf("Hovertank with no boundPath. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
    }
    else if (Splines[*(int *)((int)pvVar2 + 0xc4)]->cnt == 0) {
      libc::printf("Hovertank with a bound path that has no points. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
    }
    else if (*(int *)((int)pvVar2 + 200) == -1) {
      libc::printf("Hovertank with no bombPath. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
    }
    else if (Splines[*(int *)((int)pvVar2 + 200)]->cnt == 0) {
      libc::printf("Hovertank with a bomb path that has no points. UID: %d\n",moby->uid);
      mobyfunc::DeleteMoby(moby);
    }
    else {
      *(undefined4 *)((int)pvVar2 + 0x20) = 0x40e00000;
      *(undefined2 *)((int)pvVar2 + 0x24) = 7;
      *(undefined1 *)((int)pvVar2 + 0x28) = 3;
      moby->state = '\x01';
      moby->updateDistance = -0x80;
      pSVar3 = Splines[*(int *)((int)pvVar2 + 0xc0)];
      (moby->pos).x = pSVar3->points[0].x;
      (moby->pos).y = pSVar3->points[0].y;
      (moby->pos).z = pSVar3->points[0].z;
      (moby->pos).w = pSVar3->points[0].w;
    }
  }
  return;
}



//==== 001ed1d0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1172_001ed1d0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1172_001ed1d0(void)

{
  DAT_00765d0c = 0x10000;
  return;
}



//==== 001ed1f0  ns=mobyupdate_helpers  size=0x23c
// sig: undefined M1172_001ed1f0(void)
// callers(1): 001ed448 mobyupdate_unsorted::UpdateMoby_1172
// callees(6): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 005cd098 libc::printf
// strings: 00654c2c: 'Moby class %d Damage Received: %f\n'

void mobyupdate_helpers::M1172_001ed1f0(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  MOBY_OCLASSES MVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined8 in_LR;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int local_30 [4];
  
  if (param_1->state != '\x03') {
    iVar7 = mobyutil::MB_damage(param_1,0x330000,0);
    if (iVar7 != 0) {
      libc::printf("Moby class %d Damage Received: %f\n",param_1->oClass,
                   (double)*(float *)(iVar7 + 0x2c));
    }
    iVar8 = mobyutil::MB_HandleDamage(param_1,iVar7,param_3,0,local_30,0,0,4);
    pfVar9 = (float *)param_3;
    if ((0 < iVar8) && (iVar8 < 3)) {
      *pfVar9 = 0.0;
    }
    if (1 < local_30[0]) {
      uVar3 = (int)*pfVar9 >> 0x1f;
      uVar4 = (int)*(uint *)(iVar7 + 0x2c) >> 0x1f;
      iVar8 = (int)param_2;
      if ((int)((uVar4 >> 1 ^ *(uint *)(iVar7 + 0x2c)) - uVar4) <
          (int)((uVar3 >> 1 ^ (uint)*pfVar9) - uVar3)) {
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        *pfVar9 = *pfVar9 - *(float *)(iVar7 + 0x2c);
        *(undefined1 *)(iVar8 + 0x67) = 0xfa;
        auVar10 = loadVectorLeftIndexed(in_LR,0x1ed1e8);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = vectorSplatHalfWord(auVar10,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x26,param_2);
        *(undefined2 *)(iVar8 + 0x26) = uVar5;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
      }
      else {
        MVar1 = param_1->modeBits;
        *pfVar9 = 0.0;
        iVar7 = *(int *)(iVar8 + 0x70);
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (iVar7 != -1) {
          pMVar6 = MobyInstance + iVar7;
          if ((pMVar6 != (MobyInstance *)0x0) && (pMVar6->state != 0xfd && pMVar6->state != 0xfe)) {
            MVar2 = pMVar6->oClass;
            if ((MVar2 == AIRSHIP_PART_049D || MVar2 == REFUELING_STATION) ||
               (MVar2 == AIRSHIP_PART_04A0)) {
              pMVar6->setByGroup = '\x01';
            }
          }
        }
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar8 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        param_1->state = '\x03';
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 001ed448  ns=mobyupdate_unsorted  size=0x33c
// sig: undefined UpdateMoby_1172(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 0010e030 mobyutil::MB_genericExplosion; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 001ed1f0 mobyupdate_helpers::M1172_001ed1f0; 004fffb4 fastfunc::FastDecTimerS16

/* Moby 1172 */

void mobyupdate_unsorted::UpdateMoby_1172(MobyInstance *moby)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  void *pvVar3;
  undefined2 uVar4;
  MobyInstance *pMVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 local_20 [16];
  
  pvVar3 = moby->pVar;
  uVar7 = ZEXT48(pvVar3);
  mobyupdate_helpers::M1172_001ed1f0(moby,uVar7,uVar7 + 0x20);
  bVar1 = moby->state;
  if (1 < bVar1) {
    if (bVar1 < 3) {
      iVar6 = fastfunc::FastDecTimerS16(uVar7 + 0x74);
      if (iVar6 == 0) {
        return;
      }
      if ((((*(int *)((int)pvVar3 + 0x70) != -1) &&
           (pMVar5 = MobyInstance + *(int *)((int)pvVar3 + 0x70), pMVar5 != (MobyInstance *)0x0)) &&
          (pMVar5->state != 0xfd && pMVar5->state != 0xfe)) &&
         ((MVar2 = pMVar5->oClass, MVar2 == AIRSHIP_PART_049D || MVar2 == REFUELING_STATION ||
          (MVar2 == AIRSHIP_PART_04A0)))) {
        pMVar5->updateDistance = -1;
        pMVar5->setByGroup = '\x01';
      }
      moby->state = '\x03';
      return;
    }
    if (3 < bVar1) {
      return;
    }
    mobyutil::MB_genericExplosion
              (0,0,0x4024000000000000,0x401c000000000000,0x4034000000000000,0x4000000000000000,
               0x4044000000000000,moby,local_20,0,0,1,0x14,9,0x20);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (bVar1 == 0) {
    if ((*(short *)((int)pvVar3 + 0x76) != -1) &&
       ((&MiscLevelFlags.field57_0x39)[*(short *)((int)pvVar3 + 0x76)] != 0)) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    *(undefined4 *)((int)pvVar3 + 0x7c) = 0xffffffff;
    moby->state = '\x01';
    return;
  }
  if (((worldUpdateTime ^ (int)moby >> 8) & 7) == 0) {
    iVar6 = *(int *)((int)pvVar3 + 0x7c);
    if (iVar6 != -1) {
      iVar6 = sound::IsMobyPlayingSound(moby,iVar6);
      if (iVar6 != 0) goto LAB_001ed550;
      iVar6 = *(int *)((int)pvVar3 + 0x7c);
    }
    if (iVar6 == -1) {
      iVar6 = sound::PlayMobySound(1,4,moby);
      *(int *)((int)pvVar3 + 0x7c) = iVar6;
    }
  }
LAB_001ed550:
  if (moby->setByGroup == '\x01') {
    iVar6 = *(int *)((int)pvVar3 + 0x78);
    if ((iVar6 != -1) && (MobyInstance[iVar6].state == '\x01')) {
      MobyInstance[iVar6].setByGroup = '\x01';
    }
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = loadVectorLeftIndexed(in_LR,0x1ed42c);
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    iVar6 = *(int *)((int)pvVar3 + 0x7c);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x74,uVar7);
    *(undefined2 *)((int)pvVar3 + 0x74) = uVar4;
    if (((iVar6 != -1) && (sound::g_SoundChannels[iVar6].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar6].state != '\0')) {
      sound::sound_Kill(iVar6);
    }
    *(undefined4 *)((int)pvVar3 + 0x7c) = 0xffffffff;
    moby->updateDistance = -1;
    moby->state = '\x02';
  }
  return;
}



//==== 001ed784  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1174_001ed784(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1174_001ed784(void)

{
  DAT_00765d7c = 0x10000;
  return;
}



//==== 001ed7a8  ns=mobyupdate_unsorted  size=0x830
// sig: undefined UpdateMoby_1174(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 00112900 mobyutil::MB_GetOrientation; 0012d0e8 partupd::SpawnPart_41; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00654c50: 'Flying do-hickey with no path. UID: %d' | 00654c78: 'Flying do-hickey with a path that has no points. UID: %d \n'

/* Moby 1174 */

void mobyupdate_unsorted::UpdateMoby_1174(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  int iVar18;
  longlong lVar16;
  int iVar19;
  longlong lVar17;
  Spline *pSVar20;
  longlong lVar21;
  float *pfVar23;
  longlong lVar22;
  longlong in_r7;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
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
  double dVar31;
  ulonglong uVar32;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x140;
  puVar13 = (ulonglong *)lVar17;
  *puVar13 = uVar15;
  puVar13[0x2a] = in_LR;
  puVar13[0x26] = in_f30;
  puVar13[0x27] = in_f31;
  fVar2 = (moby->pos).x;
  puVar13[0x25] = unaff_r31;
  fVar3 = (moby->pos).y;
  puVar13[0x24] = unaff_r30;
  fVar4 = (moby->pos).z;
  pvVar11 = moby->pVar;
  fVar8 = -fVar3;
  fVar5 = (moby->rotation).x;
  fVar9 = -fVar4;
  *(f32 *)((int)puVar13 + 0x7c) = (moby->pos).w;
  fVar7 = -fVar2;
  fVar6 = (moby->rotation).y;
  *(f32 *)(puVar13 + 0x10) = fVar5;
  fVar5 = (moby->rotation).z;
  *(f32 *)((int)puVar13 + 0x84) = fVar6;
  fVar6 = (moby->rotation).w;
  bVar1 = moby->state;
  *(f32 *)(puVar13 + 0x11) = fVar5;
  *(f32 *)((int)puVar13 + 0x8c) = fVar6;
  *(float *)(puVar13 + 0xe) = fVar7;
  *(float *)((int)puVar13 + 0x74) = fVar8;
  puVar13[0x23] = unaff_r29;
  puVar13[0x22] = unaff_r28;
  puVar13[0x21] = unaff_r27;
  puVar13[0x20] = unaff_r26;
  *(float *)(puVar13 + 0xf) = fVar9;
  if (bVar1 == 0) {
    if (*(int *)((int)pvVar11 + 0x60) == -1) {
      libc::printf("Flying do-hickey with no path. UID: %d",moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (Splines[*(int *)((int)pvVar11 + 0x60)]->cnt == 0) {
      libc::printf("Flying do-hickey with a path that has no points. UID: %d \n",moby->uid);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    pSVar12 = Splines[*(int *)((int)pvVar11 + 0x60)];
    fVar2 = pSVar12->points[0].y - pSVar12->points[1].y;
    fVar3 = pSVar12->points[0].x - pSVar12->points[1].x;
    fVar4 = pSVar12->points[0].z - pSVar12->points[1].z;
    fVar2 = *(float *)((int)pvVar11 + 0x68) +
            (DAT_00765da4 * mobyutil::g_FrameTime) /
            SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar33 = (double)fVar2;
    *(float *)((int)pvVar11 + 0x68) = fVar2;
    puVar13[0x1d] = (longlong)(pSVar12->cnt + -1);
    if ((double)(longlong)puVar13[0x1d] < dVar33) {
      iVar18 = fastfunc::FastDoubleToInt(dVar33);
      puVar13[0x1d] = (longlong)iVar18;
      dVar25 = dVar33 - (double)(longlong)puVar13[0x1d];
      dVar33 = (double)(float)dVar25;
      *(float *)((int)pvVar11 + 0x68) = (float)dVar25;
    }
    lVar16 = fastfunc::FastDoubleToInt(dVar33);
    puVar13[0x1d] = (longlong)(int)lVar16;
    iVar18 = (int)(lVar16 << 4);
    fVar2 = *(float *)((int)pvVar11 + 0x68);
    iVar19 = (int)lVar16 + 2;
    fVar3 = *(float *)((int)&pSVar12->points[1].x + iVar18);
    fVar4 = *(float *)((int)&pSVar12->points[0].x + iVar18);
    fVar7 = *(float *)((int)&pSVar12->points[1].y + iVar18);
    fVar8 = *(float *)((int)&pSVar12->points[0].y + iVar18);
    fVar9 = *(float *)((int)&pSVar12->points[1].z + iVar18);
    fVar10 = *(float *)((int)&pSVar12->points[0].z + iVar18);
    uVar32 = puVar13[0x1d];
    (moby->pos).w = *(f32 *)((int)&pSVar12->points[1].w + iVar18);
    fVar2 = fVar2 - (float)(longlong)uVar32;
    fVar4 = fVar2 * (fVar3 - fVar4) + fVar4;
    fVar8 = fVar2 * (fVar7 - fVar8) + fVar8;
    fVar10 = fVar2 * (fVar9 - fVar10) + fVar10;
    (moby->pos).x = fVar4;
    (moby->pos).y = fVar8;
    (moby->pos).z = fVar10;
    iVar19 = iVar19 - (iVar19 / pSVar12->cnt) * pSVar12->cnt;
    fVar7 = fVar2 * (*(float *)((int)pSVar12 + (iVar19 * 4 + 5) * 4) - fVar7) + fVar7;
    fVar3 = fVar2 * (*(float *)((int)pSVar12 + (iVar19 * 4 + 4) * 4) - fVar3) + fVar3;
    fVar8 = fVar8 - fVar7;
    fVar4 = fVar4 - fVar3;
    fVar5 = (moby->rotation).z;
    fVar4 = SQRT(fVar4 * fVar4 + fVar8 * fVar8);
    fVar10 = (fVar2 * (*(float *)((int)pSVar12 + (iVar19 * 4 + 6) * 4) - fVar9) + fVar9) - fVar10;
    fVar8 = ABS(fVar10);
    *(float *)(puVar13 + 0x14) = fVar10;
    fVar9 = ABS(fVar4);
    *(float *)((int)puVar13 + 0x9c) = fVar4;
    *(float *)((int)puVar13 + 0xa4) = fVar9 - fVar8;
    dVar33 = 0.0;
    uVar32 = (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar13 + 0x9c));
    if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
      fVar2 = fVar8;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
    fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)(puVar13 + 0x14));
    if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
      fVar10 = fVar9;
    }
    dVar25 = dVar33;
    if (0.0 < fVar2) {
      lVar16 = uVar15 - 0x130;
      in_r7 = 2;
      lVar21 = uVar15 - 0x78;
      lVar22 = uVar15 - 0x68;
      lVar24 = 2;
      fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
      fVar9 = fVar2 * fVar2;
      *(float *)((int)puVar13 + 0xd4) = fVar2;
      *(float *)((int)puVar13 + 0xcc) = fVar2;
      *(float *)(puVar13 + 0x1a) = fVar2;
      *(float *)(puVar13 + 0x19) = fVar2;
      fVar2 = fVar9 * fVar9;
      *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar9;
      *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar2;
      *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar2 * fVar9;
      do {
        *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar2 * fVar2;
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar2 * fVar2;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar15 - 0x78;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar22;
      do {
        fVar2 = *pfVar23;
        fVar9 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar2;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar9;
        lVar21 = lVar21 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar19 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar18 + 200)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar4);
    }
    (moby->rotation).y = (float)-dVar25;
    *(f32 *)((int)pvVar11 + 0x6c) = fVar5;
    fVar3 = fVar3 - (moby->pos).x;
    fVar7 = fVar7 - (moby->pos).y;
    fVar8 = ABS(fVar3);
    fVar4 = ABS(fVar7);
    *(float *)(puVar13 + 0x12) = fVar3;
    *(float *)((int)puVar13 + 0x94) = fVar7;
    *(float *)(puVar13 + 0x13) = fVar8 - fVar4;
    uVar32 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar13 + 0x12));
    if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
    fVar4 = ABS(*(float *)((int)puVar13 + 0x94));
    if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
    dVar25 = dVar33;
    if (0.0 < fVar2) {
      lVar16 = uVar15 - 0x130;
      lVar21 = uVar15 - 0x98;
      lVar22 = uVar15 - 0x88;
      lVar24 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar13 + 0xb4) = fVar2;
      *(float *)((int)puVar13 + 0xac) = fVar2;
      *(float *)(puVar13 + 0x16) = fVar2;
      *(float *)(puVar13 + 0x15) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar4;
      *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar2;
      *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar2 * fVar2;
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar2 * fVar2;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar22 = 4;
      in_r7 = uVar15 - 0x98;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = in_r7;
      do {
        fVar2 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar2;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar19 = (int)in_r7;
        in_r7 = in_r7 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar18 + 0xa8)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar7);
    }
    (moby->rotation).z = (float)dVar25;
    dVar25 = (double)fastfunc::FastDiffRots((double)*(float *)((int)pvVar11 + 0x6c),dVar25);
    *(float *)((int)pvVar11 + 0x6c) = (float)dVar25;
    if ((DAT_00f08e1c != 0) && (iVar18 = 0, 0 < pSVar12->cnt)) {
      dVar25 = 0.13330000638961792;
      pSVar20 = pSVar12;
      do {
        pSVar20 = (Spline *)pSVar20->points;
        partupd::SpawnPart_41((float)dVar25,pSVar20,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
        iVar18 = iVar18 + 1;
      } while (iVar18 < pSVar12->cnt);
    }
    pMVar14 = MobyInstance;
    fVar2 = (moby->transform).v2.y;
    fVar3 = (moby->transform).v2.x;
    fVar4 = (moby->transform).v2.z;
    dVar25 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar25 == dVar33) {
      fVar5 = (moby->transform).v2.w;
      dVar25 = dVar33;
      dVar26 = dVar33;
      dVar27 = dVar33;
    }
    else {
      fVar7 = (float)((double)DAT_00765da0 / dVar25);
      dVar26 = (double)(fVar2 * fVar7);
      dVar25 = (double)(fVar3 * fVar7);
      fVar5 = (moby->transform).v2.w;
      dVar27 = (double)(fVar4 * fVar7);
    }
    fVar3 = (moby->transform).v0.y;
    fVar4 = (moby->transform).v0.x;
    fVar7 = (moby->transform).v0.z;
    iVar18 = *(int *)((int)pvVar11 + 100);
    dVar30 = (double)SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar3 * fVar3);
    fVar2 = (float)((double)DAT_00f08e18 / dVar30);
    dVar29 = dVar33;
    if (dVar33 - dVar30 < 0.0) {
      dVar29 = (double)(fVar4 * fVar2);
    }
    dVar28 = dVar33;
    if (dVar33 - dVar30 < 0.0) {
      dVar28 = (double)(fVar3 * fVar2);
    }
    dVar31 = dVar33;
    if (dVar33 - dVar30 < 0.0) {
      dVar31 = (double)(fVar7 * fVar2);
    }
    if (dVar30 - dVar33 < 0.0) {
      dVar29 = (double)(fVar4 * fVar2);
    }
    if (dVar30 - dVar33 < 0.0) {
      dVar28 = (double)(fVar3 * fVar2);
    }
    if (dVar30 - dVar33 < 0.0) {
      dVar31 = (double)(fVar7 * fVar2);
    }
    MobyInstance[iVar18].pos.x = (float)(dVar25 + dVar29) + (moby->pos).x;
    pMVar14[iVar18].pos.y = (float)(dVar26 + dVar28) + (moby->pos).y;
    fVar2 = (moby->pos).z;
    pMVar14[iVar18].pos.w = fVar5;
    pMVar14[iVar18].pos.z = (float)(dVar27 + dVar31) + fVar2;
    fVar7 = *(float *)(puVar13 + 0xe);
    fVar2 = (moby->pos).x;
    fVar8 = *(float *)((int)puVar13 + 0x74);
    fVar3 = (moby->pos).y;
    fVar9 = *(float *)(puVar13 + 0xf);
    fVar4 = (moby->pos).z;
  }
  *(float *)(puVar13 + 0xe) = fVar7 + fVar2;
  *(float *)((int)puVar13 + 0x74) = fVar8 + fVar3;
  *(float *)(puVar13 + 0xf) = fVar9 + fVar4;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar11 + 0x20),(Vec4 *)(puVar13 + 0xe),uVar15 - 0xc0,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 001ee008  ns=mobyupdate_helpers  size=0x38c
// sig: undefined M1178_001ee008(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1178_001ee008
               (double param_1,longlong param_2,longlong param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  
  dVar17 = (double)DAT_00765da8;
  fVar1 = 3.14159;
  piVar8 = *(int **)((int)Splines + (int)(param_2 << 2));
  iVar6 = *piVar8;
  fVar2 = (float)((double)(float)(param_1 + 1.0) / dVar17) * 3.14159;
  fVar5 = fVar1;
  if ((fVar2 <= 3.14159) && (fVar5 = fVar2, fVar2 < -3.14159)) {
    fVar5 = -3.14159;
  }
  fVar5 = fVar5 + 1.5707963;
  fVar2 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar2 = fVar5;
  }
  fVar12 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar2 < 0.0) {
    fVar12 = fVar2;
  }
  fVar5 = fVar12 * fVar12;
  fVar2 = (float)(param_1 / dVar17) * 3.14159;
  fVar11 = fVar5 * fVar5 * fVar12;
  fVar3 = fVar5 * fVar11;
  fVar12 = (fVar5 * fVar3 * 2.601887e-06 +
            fVar3 * -0.0001980741 + fVar11 * 0.0083330255 + fVar5 * fVar12 * -0.16666657 + fVar12 +
           1.0) * 0.5;
  fVar5 = fVar1;
  if ((fVar2 <= 3.14159) && (fVar5 = fVar2, fVar2 < -3.14159)) {
    fVar5 = -3.14159;
  }
  fVar5 = fVar5 + 1.5707963;
  fVar2 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar2 = fVar5;
  }
  fVar11 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar2 < 0.0) {
    fVar11 = fVar2;
  }
  fVar4 = fVar11 * fVar11;
  fVar3 = fVar4 * fVar4 * fVar11;
  fVar2 = (float)((double)(float)(1.0 - param_1) / dVar17) * 3.14159;
  fVar5 = fVar4 * fVar3;
  fVar11 = (fVar4 * fVar5 * 2.601887e-06 +
            fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar11 * -0.16666657 + fVar11 +
           1.0) * 0.5;
  fVar5 = fVar1;
  if ((fVar2 <= 3.14159) && (fVar5 = fVar2, fVar2 < -3.14159)) {
    fVar5 = -3.14159;
  }
  fVar5 = fVar5 + 1.5707963;
  fVar2 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar2 = fVar5;
  }
  fVar3 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar5 = fVar3 * fVar3;
  fVar4 = fVar5 * fVar5 * fVar3;
  fVar2 = (float)((double)(float)(2.0 - param_1) / dVar17) * 3.14159;
  fVar9 = fVar5 * fVar4;
  fVar5 = (fVar5 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3 + 1.0)
          * 0.5;
  if ((fVar2 <= 3.14159) && (fVar1 = fVar2, fVar2 < -3.14159)) {
    fVar1 = -3.14159;
  }
  fVar1 = fVar1 + 1.5707963;
  iVar15 = (int)param_3;
  iVar16 = iVar15 + iVar6 + -1;
  iVar16 = iVar16 - (iVar16 / iVar6) * iVar6;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  iVar6 = (int)(param_3 << 4);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar9 = fVar4 * fVar4 * fVar3;
  fVar10 = fVar4 * fVar9;
  fVar1 = (float)piVar8[iVar16 * 4 + 4];
  iVar7 = *piVar8;
  *param_5 = fVar1 * fVar12;
  fVar2 = (float)piVar8[iVar16 * 4 + 5];
  fVar9 = (fVar4 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3 + 1.0
          ) * 0.5;
  param_5[1] = fVar2 * fVar12;
  fVar3 = (float)piVar8[iVar16 * 4 + 6];
  param_5[2] = fVar3 * fVar12;
  fVar14 = 1.0 / (fVar12 + fVar11 + fVar5 + fVar9);
  fVar4 = (float)piVar8[iVar16 * 4 + 7];
  iVar16 = (iVar15 + 1) - ((iVar15 + 1) / iVar7) * iVar7;
  param_5[3] = fVar4;
  fVar13 = *(float *)((int)piVar8 + iVar6 + 0x10) * fVar11 + fVar1 * fVar12;
  fVar10 = *(float *)((int)piVar8 + iVar6 + 0x14) * fVar11 + fVar2 * fVar12;
  fVar12 = *(float *)((int)piVar8 + iVar6 + 0x18) * fVar11 + fVar3 * fVar12;
  *param_5 = fVar13;
  param_5[1] = fVar10;
  iVar6 = (iVar15 + 2) - ((iVar15 + 2) / iVar7) * iVar7;
  param_5[2] = fVar12;
  fVar13 = (float)piVar8[iVar16 * 4 + 4] * fVar5 + fVar13;
  fVar10 = (float)piVar8[iVar16 * 4 + 5] * fVar5 + fVar10;
  fVar12 = (float)piVar8[iVar16 * 4 + 6] * fVar5 + fVar12;
  *param_5 = fVar13;
  param_5[1] = fVar10;
  param_5[2] = fVar12;
  fVar1 = (float)piVar8[iVar6 * 4 + 4];
  fVar2 = (float)piVar8[iVar6 * 4 + 5];
  fVar5 = (float)piVar8[iVar6 * 4 + 6];
  param_5[3] = fVar4;
  *param_5 = (fVar1 * fVar9 + fVar13) * fVar14;
  param_5[1] = (fVar2 * fVar9 + fVar10) * fVar14;
  param_5[2] = (fVar5 * fVar9 + fVar12) * fVar14;
  return;
}



//==== 001ee3a8  ns=mobyupdate_unsorted  size=0x2e8
// sig: undefined UpdateMoby_1178(MobyInstance * moby)
// callers(0): 
// callees(4): 000b72b0 hero::TransitionMovement; 00112900 mobyutil::MB_GetOrientation; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot

/* Moby 1178 */

void mobyupdate_unsorted::UpdateMoby_1178(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  void *pvVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vec4 local_c0;
  f32 local_b0;
  float local_ac;
  f32 local_a8;
  f32 local_a4;
  float local_a0;
  float local_90;
  float local_80;
  float local_70;
  
  local_c0.x = -(moby->pos).x;
  local_c0.y = -(moby->pos).y;
  local_c0.z = -(moby->pos).z;
  pvVar3 = moby->pVar;
  local_c0.w = (moby->pos).w;
  local_b0 = (moby->rotation).x;
  local_ac = (moby->rotation).y;
  local_a8 = (moby->rotation).z;
  local_a4 = (moby->rotation).w;
  *(undefined4 *)((int)pvVar3 + 0x5c) = 1;
  dVar11 = 0.01745329238474369;
  bVar1 = g_standingOnMoby == moby;
  fVar2 = DAT_00765dc4 * 0.017453292 * DAT_0071f418 * DAT_00765db4 * *(float *)((int)pvVar3 + 0x60)
          + DAT_00765dc0 * 0.017453292 * DAT_0071f418 * DAT_00765db0 * local_ac +
            *(float *)((int)pvVar3 + 0x60);
  *(float *)((int)pvVar3 + 0x60) = fVar2;
  if ((bVar1) && (g_framesNotGrounded == 0)) {
    dVar10 = (double)g_heroPosition.y;
    dVar9 = (double)g_heroPosition.x;
    dVar8 = (double)(moby->pos).y;
    dVar7 = (double)(moby->pos).x;
    dVar6 = (double)g_heroPosition.z;
    dVar5 = (double)(moby->pos).z;
    dVar4 = (double)g_heroPosition.w;
    fastfunc::FastNormalizeRMtx4(ZEXT48(&stack0x00000000) - 0xa0,(longlong)(int)moby + 0xc0);
    fVar2 = (float)((double)DAT_00765dbc * dVar11) * DAT_0071f418 *
            DAT_00765dac *
            (float)((double)local_70 * dVar4 +
                   (double)(local_80 * (float)(dVar6 - dVar5) +
                           local_a0 * (float)(dVar9 - dVar7) + local_90 * (float)(dVar10 - dVar8)));
    if ((*(float *)((int)pvVar3 + 0x60) * fVar2 < 0.0) && ((moby->rotation).y * fVar2 < 0.0)) {
      fVar2 = fVar2 * 2.0;
    }
    if (0.0 <= fVar2) {
      fVar2 = (float)((double)DAT_00765db8 * dVar11) * DAT_0071f418 + fVar2;
    }
    else {
      fVar2 = -((float)((double)DAT_00765db8 * dVar11) * DAT_0071f418 - fVar2);
    }
    fVar2 = *(float *)((int)pvVar3 + 0x60) + fVar2;
    *(float *)((int)pvVar3 + 0x60) = fVar2;
    if (((float)((double)DAT_00765dc8 * dVar11) < ABS((moby->rotation).y)) &&
       ((hero::g_heroStateType == 0 || (hero::g_heroStateType == 1)))) {
      hero::TransitionMovement(6,1);
      fVar2 = *(float *)((int)pvVar3 + 0x60);
    }
  }
  dVar11 = (double)fastfunc::FastWrapRot((moby->rotation).y,fVar2);
  local_c0.x = local_c0.x + (moby->pos).x;
  local_c0.y = local_c0.y + (moby->pos).y;
  fVar2 = (moby->pos).z;
  (moby->rotation).y = (float)dVar11;
  local_c0.z = local_c0.z + fVar2;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar3 + 0x20),&local_c0,ZEXT48(&stack0x00000000) - 0xb0,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 001ee690  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1179_001ee690(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1179_001ee690(void)

{
  DAT_00765e18 = 0x10000;
  return;
}



//==== 001ee6c0  ns=mobyupdate_unsorted  size=0x524
// sig: undefined UpdateMoby_1179(MobyInstance * moby)
// callers(0): 
// callees(2): 0007b310 help::Help_QueueMessage; 0015d12c sound::PlayMobySound
// strings: 00a1000c: 'None'

/* Moby 1179 */

char * mobyupdate_unsorted::UpdateMoby_1179(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  ushort uVar4;
  float fVar5;
  short sVar6;
  char *pcVar7;
  
  pcVar7 = (char *)moby->pVar;
  if (moby->state == 0) {
    CHAR_ARRAY_00a1000c[0x360] = '\0';
    CHAR_ARRAY_00a1000c[0x361] = '\0';
    CHAR_ARRAY_00a1000c[0x362] = '\0';
    CHAR_ARRAY_00a1000c[0x363] = '\0';
    fVar3 = (moby->pos).z;
    *(ushort *)(pcVar7 + 0x3e) = *(ushort *)(pcVar7 + 0x3e) | 8;
    if (((Level == Pokitaru) && (moby->levelFlagIdx != -1)) &&
       ((uVar4 = moby->uid, (&DAT_00a545c4)[(short)uVar4] != '\0' ||
        ((*(uint *)((int)((longlong)((int)(short)uVar4 >> 5) << 2) + 0xa0d81c) & 1 << (uVar4 & 0x1f)
         ) != 0)))) {
      moby->state = '\x02';
      (moby->pos).z = fVar3 - 1.5;
      pcVar7 = (char *)sound::PlayMobySound(0,0,moby);
    }
    else {
      moby->state = '\x01';
      pcVar7 = (char *)0x1;
    }
  }
  else if (moby->state < 2) {
    if ((((g_standingOnMoby == moby) && (UnlockableItems.thrusterPack != '\0')) &&
        (g_framesNotGrounded == 0)) && (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
      if (Level == Pokitaru) {
        bVar2 = moby->levelFlagIdx;
        if (bVar2 != 0xff) {
          uVar4 = moby->uid;
          (&DAT_00a53964)[(short)uVar4] = bVar2 + 2;
          if ((bVar2 == 0xff) ||
             (((&DAT_00a202c0)[bVar2] != -1 && (g_LevelFlags[0xb][bVar2] == -1)))) {
            (&DAT_00a545c4)[(short)uVar4] = bVar2 + 2;
          }
        }
      }
      fVar3 = (moby->pos).z;
      moby->state = '\x02';
      (moby->pos).z = fVar3 - 1.5;
      sound::PlayMobySound(0,0,moby);
    }
    pcVar7 = (char *)(uint)(byte)moby->levelFlagIdx;
    if (((moby->levelFlagIdx != 0xff) &&
        (fVar3 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
        pcVar7 = (char *)&DAT_001ee6a8, SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 4.0)) &&
       ((hero::g_heroStateType == (char *)0x0 ||
        (pcVar7 = hero::g_heroStateType, hero::g_heroStateType == (char *)0x1)))) {
      if (UnlockableItems.thrusterPack == '\0') {
        iVar1 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        pcVar7 = CHAR_ARRAY_00a1000c;
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar1 + (uint)(ushort)CHAR_ARRAY_00a1000c._906_2_ * -600)) ||
           ((uint)(ushort)CHAR_ARRAY_00a1000c._906_2_ * 600 == 0)) {
          pcVar7 = (char *)help::Help_QueueMessage(STR_WITH_THE_THRUSTER_PACK_YOU_0x2B01,0x71);
        }
        else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._906_2_ < iVar1 / 600) {
          sVar6 = (short)(iVar1 >> 0x1f);
          CHAR_ARRAY_00a1000c._906_2_ =
               ((short)(iVar1 / 600) + sVar6) - ((short)((short)(iVar1 / 0x2580000) + sVar6) >> 0xf)
          ;
        }
      }
      else {
        pcVar7 = CHAR_ARRAY_00a1000c;
        if (CHAR_ARRAY_00a1000c._864_2_ == 0) {
          CHAR_ARRAY_00a1000c[0x360] = '\0';
          CHAR_ARRAY_00a1000c[0x361] = '\x01';
          iVar1 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._866_2_ < iVar1 / 600) {
            sVar6 = (short)(iVar1 >> 0x1f);
            CHAR_ARRAY_00a1000c._866_2_ =
                 ((short)(iVar1 / 600) + sVar6) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar6) >> 0xf);
          }
          CHAR_ARRAY_00a1000c._868_4_ =
               CHAR_ARRAY_00a1000c._868_4_ | 1 << (Level & 0x3f) | 0x80000000;
        }
        else {
          iVar1 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
               (int)(iVar1 + (uint)(ushort)CHAR_ARRAY_00a1000c._866_2_ * -600)) ||
             ((uint)(ushort)CHAR_ARRAY_00a1000c._866_2_ * 600 == 0)) {
            pcVar7 = (char *)help::Help_QueueMessage(STR_YOULL_NEED_TO_USE_0x2B02,0x6c);
          }
          else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._866_2_ < iVar1 / 600) {
            sVar6 = (short)(iVar1 >> 0x1f);
            CHAR_ARRAY_00a1000c._866_2_ =
                 ((short)(iVar1 / 600) + sVar6) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar6) >> 0xf);
          }
        }
      }
    }
  }
  return pcVar7;
}



//==== 001eebe4  ns=mobyupdate_helpers  size=0x28
// sig: undefined M1180_001eebe4(void)
// callers(3): 001e1b00 mobyupdate_unsorted::UpdateMoby_1156; 001eec70 mobyupdate_unsorted::UpdateMoby_1180; 00404d18 mobyupdate_unsorted::UpdateMoby_655
// callees(0): 

undefined8 mobyupdate_helpers::M1180_001eebe4(int param_1)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_1 + 0xa6) == 0x49b) && (*(char *)(param_1 + 0x20) == '\x02')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 001eec10  ns=Global  size=0x3c
// sig: undefined FUN_001eec10(void)
// callers(1): 00404d18 mobyupdate_unsorted::UpdateMoby_655
// callees(0): 

void FUN_001eec10(int param_1)

{
  if ((*(short *)(param_1 + 0xa6) == 0x49b) && (*(char *)(param_1 + 0x20) == '\x02')) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 1.5;
  }
  return;
}



//==== 001eec4c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1180_001eec4c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1180_001eec4c(void)

{
  DAT_00765e88 = 0x10000;
  return;
}



//==== 001eec70  ns=mobyupdate_unsorted  size=0x174
// sig: undefined UpdateMoby_1180(MobyInstance * moby)
// callers(0): 
// callees(4): 0010a2e0 mobyutil::OrganicDeltAng; 0015d12c sound::PlayMobySound; 001eebe4 mobyupdate_helpers::M1180_001eebe4; 00502578 fastfunc::FastWrapRot

/* Moby 1180 */

void mobyupdate_unsorted::UpdateMoby_1180(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    fVar2 = (moby->rotation).z;
    moby->state = '\x01';
    piVar3[2] = (int)fVar2;
  }
  else if (bVar1 < 2) {
    iVar4 = mobyupdate_helpers::M1180_001eebe4(MobyInstance + *piVar3);
    if (iVar4 != 0) {
      if (worldUpdateTime < 0xb) {
        moby->state = '\x03';
        dVar5 = (double)fastfunc::FastWrapRot((float)piVar3[2],1.0471976);
        (moby->rotation).z = (float)dVar5;
      }
      else {
        MiscLevelFlags.field91_0x5b = 1;
        moby->state = '\x02';
        sound::PlayMobySound(0,0,moby);
      }
    }
  }
  else if (bVar1 < 3) {
    dVar5 = (double)fastfunc::FastWrapRot((float)piVar3[2],1.0471976);
    fVar6 = mobyutil::OrganicDeltAng
                      ((float)dVar5,DAT_0071f418 * 0.34906584,DAT_0071f418 * 0.34906584,
                       mobyutil::g_FrameTime * 0.7853982,&(moby->rotation).z,0x720000,
                       (float *)(piVar3 + 1));
    if (fVar6 == 0.0) {
      moby->state = '\x03';
    }
  }
  return;
}



//==== 001eede4  ns=Global  size=0x24
// sig: undefined FUN_001eede4(void)
// callers(1): 00222fe0 mobyupdate_unsorted::UpdateMoby_1243
// callees(0): 

void FUN_001eede4(int param_1)

{
  if ((*(short *)(param_1 + 0xa6) == 0x49c) && (*(char *)(param_1 + 0x20) == '\x01')) {
    *(undefined1 *)(param_1 + 0x20) = 2;
  }
  return;
}



//==== 001eee08  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1181_001eee08(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1181_001eee08(void)

{
  DAT_00765ef8 = 0x10000;
  return;
}



//==== 001eee28  ns=mobyupdate_helpers  size=0x25c
// sig: undefined M1181_001eee28(void)
// callers(0): 
// callees(4): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 005cd098 libc::printf
// strings: 00654cd4: 'Moby class %d Damage Received: %f\n'

void mobyupdate_helpers::M1181_001eee28(MobyInstance *param_1,undefined8 param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  MOBY_OCLASSES MVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined8 in_LR;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int local_30 [4];
  
  if (param_1->state != '\x03') {
    iVar7 = mobyutil::MB_damage(param_1,0x330000,0);
    if (iVar7 != 0) {
      libc::printf("Moby class %d Damage Received: %f\n",param_1->oClass,
                   (double)*(float *)(iVar7 + 0x2c));
    }
    iVar8 = mobyutil::MB_HandleDamage(param_1,iVar7,param_3,0,local_30,0,0,4);
    pfVar9 = (float *)param_3;
    if ((0 < iVar8) && (iVar8 < 3)) {
      *pfVar9 = 0.0;
    }
    if (1 < local_30[0]) {
      uVar3 = (int)*pfVar9 >> 0x1f;
      uVar4 = (int)*(uint *)(iVar7 + 0x2c) >> 0x1f;
      iVar8 = (int)param_2;
      if ((int)((uVar4 >> 1 ^ *(uint *)(iVar7 + 0x2c)) - uVar4) <
          (int)((uVar3 >> 1 ^ (uint)*pfVar9) - uVar3)) {
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        *pfVar9 = *pfVar9 - *(float *)(iVar7 + 0x2c);
        auVar10 = loadVectorLeftIndexed(in_LR,0x1eee20);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = vectorSplatHalfWord(auVar10,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x26,param_2);
        *(undefined2 *)(iVar8 + 0x26) = uVar5;
      }
      else {
        MVar1 = param_1->modeBits;
        *pfVar9 = 0.0;
        iVar7 = *(int *)(iVar8 + 0x60);
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (iVar7 != -1) {
          pMVar6 = MobyInstance + iVar7;
          if ((pMVar6 != (MobyInstance *)0x0) && (pMVar6->state != 0xfd && pMVar6->state != 0xfe)) {
            MVar2 = pMVar6->oClass;
            if ((MVar2 == AIRSHIP_PART_049D || MVar2 == REFUELING_STATION) ||
               (MVar2 == AIRSHIP_PART_04A0)) {
              pMVar6->setByGroup = '\x01';
            }
          }
        }
        if (*(int *)(iVar8 + 100) != -1) {
          pMVar6 = MobyInstance + iVar7;
          if ((pMVar6 != (MobyInstance *)0x0) && (pMVar6->state != 0xfd && pMVar6->state != 0xfe)) {
            MVar2 = pMVar6->oClass;
            if ((MVar2 == AIRSHIP_PART_049D || MVar2 == REFUELING_STATION) ||
               (MVar2 == AIRSHIP_PART_04A0)) {
              pMVar6->setByGroup = '\x01';
            }
          }
        }
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        param_1->state = '\x03';
      }
    }
    param_1->damage = -1;
  }
  return;
}



//==== 001ef090  ns=mobyupdate_helpers  size=0x1a8
// sig: undefined M1181_001ef090(void)
// callers(1): 001ef268 mobyupdate_unsorted::UpdateMoby_1181
// callees(1): 000f1114 mobyfunc::GetBonePosition
// strings: 001ef084: 'Nnk(?' (raw)

int mobyupdate_helpers::M1181_001ef090
              (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float local_60;
  float local_5c;
  float local_58;
  
  iVar6 = 0;
  dVar8 = 1000000000.0;
  if (MobyUpdateChainStart != 0) {
    fStack00000044 = (float)param_3;
    dVar10 = (double)fStack00000044;
    fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
    dVar9 = (double)fStack00000040;
    fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
    dVar11 = (double)fStack00000048;
    iVar5 = MobyUpdateChainStart;
    _fStack00000040 = param_3;
    _fStack00000048 = param_4;
    do {
      if ((iVar5 != param_1) && (*(char *)(iVar5 + 0x20) != -3 && *(char *)(iVar5 + 0x20) != -2)) {
        sVar4 = *(short *)(iVar5 + 0xa6);
        if ((sVar4 == 0x494 || sVar4 == 0x49d) || (sVar4 == 0x4a0)) {
          if ((int)param_5 == -1) {
            fVar1 = *(float *)(iVar5 + 0x10);
            fVar2 = *(float *)(iVar5 + 0x14);
            fVar3 = *(float *)(iVar5 + 0x18);
          }
          else {
            mobyfunc::GetBonePosition(iVar5,param_5,&local_60);
            fVar2 = local_5c;
            fVar1 = local_60;
            fVar3 = local_58;
          }
          dVar7 = (double)SQRT((float)(dVar11 - (double)fVar3) * (float)(dVar11 - (double)fVar3) +
                               (float)(dVar9 - (double)fVar1) * (float)(dVar9 - (double)fVar1) +
                               (float)(dVar10 - (double)fVar2) * (float)(dVar10 - (double)fVar2));
          if (dVar7 < dVar8) {
            dVar8 = dVar7;
            iVar6 = iVar5;
          }
        }
      }
      iVar5 = *(int *)(iVar5 + 0x28);
    } while (iVar5 != 0);
    if (iVar6 != 0) {
      if (dVar8 < 0.5) {
        return iVar6;
      }
      if ((*(short *)(iVar6 + 0xa6) == 0x4a0) && (dVar8 < 10.0)) {
        return iVar6;
      }
    }
  }
  return 0;
}



//==== 001ef268  ns=mobyupdate_unsorted  size=0x13f0
// sig: undefined UpdateMoby_1181(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 0010e030 mobyutil::MB_genericExplosion; 001ef090 mobyupdate_helpers::M1181_001ef090; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf
// strings: 00654cf8: ' could not link next on moby type 1181 #%d\n' | 00654d28: ' could not link prev on moby type 1181 #%d\n'

/* Moby 1181 */

void mobyupdate_unsorted::UpdateMoby_1181(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  short sVar9;
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  uint uVar21;
  MobyInstance *pMVar22;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar23;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x240;
  puVar13 = (ulonglong *)lVar19;
  *puVar13 = uVar17;
  puVar13[0x4a] = in_LR;
  puVar13[0x44] = in_f28;
  puVar13[0x45] = in_f29;
  puVar13[0x46] = in_f30;
  puVar13[0x47] = in_f31;
  puVar13[0x43] = unaff_r31;
  puVar13[0x42] = unaff_r30;
  bVar2 = moby->state;
  pvVar11 = moby->pVar;
  puVar13[0x41] = unaff_r29;
  puVar13[0x40] = unaff_r28;
  if (bVar2 < 2) {
    if (-1 < (int)(uint)bVar2) {
      if (bVar2 == 0) {
        if ((*(char *)((int)pvVar11 + 0x69) == -1) ||
           ((&MiscLevelFlags.field57_0x39)[*(char *)((int)pvVar11 + 0x69)] == 0)) {
          if (*(int *)((int)pvVar11 + 0x60) == -1) {
            mobyfunc::GetBonePosition(moby,0,uVar17 - 0x180);
            *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(puVar13 + 0x18);
            *(undefined4 *)(puVar13 + 9) = *(undefined4 *)(puVar13 + 0x19);
            *(undefined4 *)((int)puVar13 + 0x44) = *(undefined4 *)((int)puVar13 + 0xc4);
            *(undefined4 *)((int)puVar13 + 0x4c) = *(undefined4 *)((int)puVar13 + 0xcc);
            iVar20 = mobyupdate_helpers::M1181_001ef090(moby);
            if (iVar20 == 0) {
              libc::printf(" could not link next on moby type 1181 #%d\n",moby->uid);
            }
            else {
              uVar21 = iVar20 - (int)MobyInstance;
              *(uint *)((int)pvVar11 + 0x60) =
                   ((int)uVar21 >> 8) + (uint)((int)uVar21 < 0 && (uVar21 & 0xff) != 0);
            }
          }
          if (*(int *)((int)pvVar11 + 100) == -1) {
            fVar3 = (moby->pos).z;
            *(f32 *)(puVar13 + 8) = (moby->pos).x;
            *(f32 *)(puVar13 + 9) = fVar3;
            fVar3 = (moby->pos).w;
            *(f32 *)((int)puVar13 + 0x44) = (moby->pos).y;
            *(f32 *)((int)puVar13 + 0x4c) = fVar3;
            iVar20 = mobyupdate_helpers::M1181_001ef090(moby);
            if (iVar20 == 0) {
              libc::printf(" could not link prev on moby type 1181 #%d\n",moby->uid);
            }
            else {
              uVar21 = iVar20 - (int)MobyInstance;
              *(uint *)((int)pvVar11 + 100) =
                   ((int)uVar21 >> 8) + (uint)((int)uVar21 < 0 && (uVar21 & 0xff) != 0);
            }
          }
          moby->state = '\x01';
        }
        else {
          mobyfunc::DeleteMoby(moby);
        }
      }
      else if (((moby->enabled != '\0') &&
               (fVar5 = (moby->pos).y - GameCamera.posY, fVar7 = (moby->pos).x - GameCamera.posX,
               fVar4 = (moby->pos).z - GameCamera.posZ,
               SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar5 * fVar5) <= 32.0)) ||
              (uVar8 = moby->uid,
              worldUpdateTime +
              (((int)worldUpdateTime >> 3) +
              (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * -8 ==
              (int)(short)uVar8 +
              (((int)(short)uVar8 >> 3) + (uint)((short)uVar8 < 0 && (uVar8 & 7) != 0)) * -8)) {
        pMVar27 = (MobyInstance *)0x0;
        pMVar22 = (MobyInstance *)0x0;
        if ((*(int *)((int)pvVar11 + 0x60) != -1) &&
           (((pMVar27 = MobyInstance + *(int *)((int)pvVar11 + 0x60), pMVar27 == (MobyInstance *)0x0
             || (pMVar27->state == 0xfe)) || (pMVar27->state == 0xfd)))) {
          pMVar27 = (MobyInstance *)0x0;
        }
        if (*(int *)((int)pvVar11 + 100) != -1) {
          pMVar22 = MobyInstance + *(int *)((int)pvVar11 + 100);
          if (((pMVar22 == (MobyInstance *)0x0) || (pMVar22->state == 0xfe)) ||
             (pMVar22->state == 0xfd)) {
            pMVar22 = (MobyInstance *)0x0;
            *(undefined1 *)((int)pvVar11 + 0x68) = 0;
          }
          else if (*(char *)((int)pMVar22->pVar + 0x68) == '\0') {
            *(undefined1 *)((int)pvVar11 + 0x68) = 0;
          }
        }
        if (((*(char *)((int)pvVar11 + 0x68) != '\0') ||
            (pMVar22 == (MobyInstance *)0x0 || pMVar27 == (MobyInstance *)0x0)) ||
           (bVar1 = pMVar22->oClass != AIRSHIP_PART_049D, bVar1)) {
          *(undefined1 *)((int)pvVar11 + 0x68) = 1;
        }
        else if ((bVar1) || (*(char *)((int)pMVar22->pVar + 0x68) == '\0')) {
          dVar29 = (double)(moby->pos).y;
          fVar5 = (float)((double)(pMVar27->pos).y - dVar29);
          dVar35 = (double)(moby->pos).x;
          fVar4 = (moby->pos).z;
          fVar7 = (float)((double)(pMVar27->pos).x - dVar35);
          fVar6 = (pMVar27->pos).z - fVar4;
          fVar15 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
          dVar30 = 0.0;
          fVar16 = ((fVar15 - 1.3) * 0.7) / fVar15;
          dVar36 = dVar30;
          if (0.0 - fVar15 < 0.0) {
            dVar36 = (double)(fVar6 * fVar16);
          }
          dVar34 = dVar30;
          if (0.0 - fVar15 < 0.0) {
            dVar34 = (double)(fVar5 * fVar16);
          }
          dVar37 = dVar30;
          if (0.0 - fVar15 < 0.0) {
            dVar37 = (double)(fVar7 * fVar16);
          }
          if (fVar15 - 0.0 < 0.0) {
            dVar36 = (double)(fVar6 * fVar16);
          }
          if (fVar15 - 0.0 < 0.0) {
            dVar34 = (double)(fVar5 * fVar16);
          }
          if (fVar15 - 0.0 < 0.0) {
            dVar37 = (double)(fVar7 * fVar16);
          }
          if ((!bVar1) && (pMVar22->state != 0xfd && pMVar22->state != 0xfe)) {
            fVar5 = (float)((double)(pMVar22->pos).y - dVar29);
            fVar7 = (float)((double)(pMVar22->pos).x - dVar35);
            fVar6 = (pMVar22->pos).z - fVar4;
            fVar15 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
            fVar16 = ((fVar15 - 1.3) * 0.7) / fVar15;
            dVar31 = dVar30;
            if (0.0 - fVar15 < 0.0) {
              dVar31 = (double)(fVar6 * fVar16);
            }
            dVar32 = dVar30;
            if (0.0 - fVar15 < 0.0) {
              dVar32 = (double)(fVar5 * fVar16);
            }
            dVar33 = dVar30;
            if (0.0 - fVar15 < 0.0) {
              dVar33 = (double)(fVar7 * fVar16);
            }
            if (fVar15 - 0.0 < 0.0) {
              dVar31 = (double)(fVar6 * fVar16);
            }
            if (fVar15 - 0.0 < 0.0) {
              dVar32 = (double)(fVar5 * fVar16);
            }
            if (fVar15 - 0.0 < 0.0) {
              dVar33 = (double)(fVar7 * fVar16);
            }
            dVar36 = (double)(float)(dVar36 + dVar31);
            dVar34 = (double)(float)(dVar34 + dVar32);
            dVar37 = (double)(float)(dVar37 + dVar33);
          }
          dVar31 = (double)DAT_0071f418;
          (moby->pos).x = (float)(dVar35 + dVar37);
          (moby->pos).y = (float)(dVar29 + dVar34);
          fVar4 = fVar4 + -(float)(dVar31 * 9.800000190734863 - dVar36);
          (moby->pos).z = fVar4;
          fVar7 = (float)(dVar29 + dVar34) - (pMVar27->pos).y;
          fVar5 = (float)(dVar35 + dVar37) - (pMVar27->pos).x;
          dVar36 = (double)(moby->rotation).y;
          fVar4 = (pMVar27->pos).z - fVar4;
          fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7);
          *(float *)(puVar13 + 0x21) = fVar4;
          fVar4 = ABS(fVar4);
          fVar7 = ABS(fVar5);
          *(float *)((int)puVar13 + 0x104) = fVar5;
          *(float *)((int)puVar13 + 0x10c) = fVar7 - fVar4;
          uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x104) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x10c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0x21) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)((int)puVar13 + 0x104));
          if (*(float *)((int)puVar13 + 0x10c) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)(puVar13 + 0x21));
          if (*(float *)((int)puVar13 + 0x10c) - 0.0 < 0.0) {
            fVar15 = fVar7;
          }
          dVar35 = dVar30;
          if (0.0 < fVar5) {
            lVar18 = uVar17 - 0x230;
            lVar24 = uVar17 - 0xb8;
            lVar26 = uVar17 - 0xa8;
            lVar28 = 2;
            fVar5 = (fVar15 - fVar5) / (fVar15 + fVar5);
            fVar7 = fVar5 * fVar5;
            *(float *)((int)puVar13 + 0x194) = fVar5;
            *(float *)((int)puVar13 + 0x18c) = fVar5;
            *(float *)(puVar13 + 0x32) = fVar5;
            *(float *)(puVar13 + 0x31) = fVar5;
            fVar5 = fVar7 * fVar7;
            *(float *)((int)puVar13 + 0x18c) = *(float *)((int)puVar13 + 0x18c) * fVar7;
            *(float *)(puVar13 + 0x32) = *(float *)(puVar13 + 0x32) * fVar5;
            *(float *)((int)puVar13 + 0x194) = *(float *)((int)puVar13 + 0x194) * fVar5 * fVar7;
            do {
              *(float *)((int)lVar18 + 0x188) = *(float *)((int)lVar18 + 0x178) * fVar5 * fVar5;
              iVar20 = (int)lVar24;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0xb8;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar24 = lVar26;
            do {
              fVar5 = *pfVar25;
              fVar7 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0x188) = *(float *)((int)lVar18 + 0x188) * fVar5;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar18 = lVar19;
            do {
              iVar20 = (int)lVar18;
              lVar18 = lVar18 + 0x10;
              iVar14 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0x188)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar4);
          }
          dVar35 = (double)fastfunc::FastDiffRots(-dVar35,dVar36);
          dVar37 = 0.10000000149011612;
          dVar36 = (double)fastfunc::FastWrapRot
                                     ((float)dVar36,(float)(dVar35 * 0.10000000149011612));
          (moby->rotation).y = (float)dVar36;
          fVar5 = (pMVar27->pos).x - (moby->pos).x;
          fVar7 = (pMVar27->pos).y - (moby->pos).y;
          dVar35 = ABS((double)fVar5);
          dVar29 = ABS((double)fVar7);
          *(float *)(puVar13 + 0x1f) = fVar5;
          *(float *)((int)puVar13 + 0xfc) = fVar7;
          dVar34 = (double)(moby->rotation).z;
          *(float *)(puVar13 + 0x20) = (float)(dVar35 - dVar29);
          uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1d) & 4;
          dVar36 = ABS((double)*(float *)(puVar13 + 0x1f));
          if ((double)*(float *)(puVar13 + 0x20) - dVar30 < 0.0) {
            dVar36 = dVar29;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar29 = ABS((double)*(float *)((int)puVar13 + 0xfc));
          if ((double)*(float *)(puVar13 + 0x20) - dVar30 < 0.0) {
            dVar29 = dVar35;
          }
          if (dVar30 < dVar36) {
            lVar18 = uVar17 - 0x230;
            lVar26 = uVar17 - 200;
            lVar24 = uVar17 - 0xd8;
            lVar28 = 2;
            fVar4 = (float)(dVar29 - dVar36) / (float)(dVar29 + dVar36);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x174) = fVar4;
            *(float *)((int)puVar13 + 0x16c) = fVar4;
            *(float *)(puVar13 + 0x2e) = fVar4;
            *(float *)(puVar13 + 0x2d) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar13 + 0x16c) = *(float *)((int)puVar13 + 0x16c) * fVar6;
            *(float *)(puVar13 + 0x2e) = *(float *)(puVar13 + 0x2e) * fVar4;
            *(float *)((int)puVar13 + 0x174) = *(float *)((int)puVar13 + 0x174) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar18 + 0x168) = *(float *)((int)lVar18 + 0x158) * fVar4 * fVar4;
              iVar20 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0xd8;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar24 = lVar26;
            do {
              fVar4 = *pfVar25;
              fVar6 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0x168) = *(float *)((int)lVar18 + 0x168) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar18 = 2;
            do {
              iVar20 = (int)lVar19;
              iVar14 = (int)lVar26;
              lVar19 = lVar19 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0x168)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar5);
          }
          dVar36 = (double)fastfunc::FastDiffRots(dVar30,dVar34);
          dVar36 = (double)fastfunc::FastWrapRot((float)dVar34,(float)(dVar36 * dVar37));
          (moby->rotation).z = (float)dVar36;
        }
        else {
          fVar5 = (moby->pos).y - (pMVar27->pos).y;
          fVar7 = (moby->pos).x - (pMVar27->pos).x;
          dVar36 = (double)(moby->rotation).y;
          fVar4 = (pMVar27->pos).z - (moby->pos).z;
          fVar5 = SQRT(fVar7 * fVar7 + fVar5 * fVar5);
          *(float *)(puVar13 + 0x24) = fVar4;
          fVar4 = ABS(fVar4);
          fVar7 = ABS(fVar5);
          *(float *)((int)puVar13 + 0x11c) = fVar5;
          *(float *)((int)puVar13 + 0x124) = fVar7 - fVar4;
          dVar35 = 0.0;
          uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x11c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x124) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0x24) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)((int)puVar13 + 0x11c));
          if (*(float *)((int)puVar13 + 0x124) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)(puVar13 + 0x24));
          if (*(float *)((int)puVar13 + 0x124) - 0.0 < 0.0) {
            fVar15 = fVar7;
          }
          dVar29 = dVar35;
          if (0.0 < fVar5) {
            lVar18 = uVar17 - 0x230;
            lVar24 = uVar17 - 0x78;
            lVar26 = uVar17 - 0x68;
            lVar28 = 2;
            fVar5 = (fVar15 - fVar5) / (fVar15 + fVar5);
            fVar7 = fVar5 * fVar5;
            *(float *)((int)puVar13 + 0x1d4) = fVar5;
            *(float *)((int)puVar13 + 0x1cc) = fVar5;
            *(float *)(puVar13 + 0x3a) = fVar5;
            *(float *)(puVar13 + 0x39) = fVar5;
            fVar5 = fVar7 * fVar7;
            *(float *)((int)puVar13 + 0x1cc) = *(float *)((int)puVar13 + 0x1cc) * fVar7;
            *(float *)(puVar13 + 0x3a) = *(float *)(puVar13 + 0x3a) * fVar5;
            *(float *)((int)puVar13 + 0x1d4) = *(float *)((int)puVar13 + 0x1d4) * fVar5 * fVar7;
            do {
              *(float *)((int)lVar18 + 0x1c8) = *(float *)((int)lVar18 + 0x1b8) * fVar5 * fVar5;
              iVar20 = (int)lVar24;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0x78;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar24 = lVar26;
            do {
              fVar5 = *pfVar25;
              fVar7 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0x1c8) = *(float *)((int)lVar18 + 0x1c8) * fVar5;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar18 = lVar19;
            do {
              iVar20 = (int)lVar18;
              lVar18 = lVar18 + 0x10;
              iVar14 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x1c8)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar4);
          }
          dVar29 = (double)fastfunc::FastDiffRots(-dVar29,dVar36);
          dVar37 = 0.10000000149011612;
          dVar36 = (double)fastfunc::FastWrapRot
                                     ((float)dVar36,(float)(dVar29 * 0.10000000149011612));
          (moby->rotation).y = (float)dVar36;
          fVar5 = (pMVar27->pos).x - (moby->pos).x;
          fVar7 = (pMVar27->pos).y - (moby->pos).y;
          dVar29 = ABS((double)fVar5);
          dVar30 = ABS((double)fVar7);
          *(float *)(puVar13 + 0x22) = fVar5;
          *(float *)((int)puVar13 + 0x114) = fVar7;
          dVar34 = (double)(moby->rotation).z;
          *(float *)(puVar13 + 0x23) = (float)(dVar29 - dVar30);
          uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x22) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x23) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x114) >> 0x1d) & 4;
          dVar36 = ABS((double)*(float *)(puVar13 + 0x22));
          if ((double)*(float *)(puVar13 + 0x23) - dVar35 < 0.0) {
            dVar36 = dVar30;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          dVar30 = ABS((double)*(float *)((int)puVar13 + 0x114));
          if ((double)*(float *)(puVar13 + 0x23) - dVar35 < 0.0) {
            dVar30 = dVar29;
          }
          if (dVar35 < dVar36) {
            lVar18 = uVar17 - 0x230;
            lVar26 = uVar17 - 0x88;
            lVar24 = uVar17 - 0x98;
            lVar28 = 2;
            fVar4 = (float)(dVar30 - dVar36) / (float)(dVar30 + dVar36);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x1b4) = fVar4;
            *(float *)((int)puVar13 + 0x1ac) = fVar4;
            *(float *)(puVar13 + 0x36) = fVar4;
            *(float *)(puVar13 + 0x35) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar13 + 0x1ac) = *(float *)((int)puVar13 + 0x1ac) * fVar6;
            *(float *)(puVar13 + 0x36) = *(float *)(puVar13 + 0x36) * fVar4;
            *(float *)((int)puVar13 + 0x1b4) = *(float *)((int)puVar13 + 0x1b4) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar18 + 0x1a8) = *(float *)((int)lVar18 + 0x198) * fVar4 * fVar4;
              iVar20 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar17 - 0x98;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar24 = lVar26;
            do {
              fVar4 = *pfVar25;
              fVar6 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0x1a8) = *(float *)((int)lVar18 + 0x1a8) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar18 = 2;
            do {
              iVar20 = (int)lVar19;
              iVar14 = (int)lVar26;
              lVar19 = lVar19 + 0x10;
              lVar26 = lVar26 + 0x10;
              dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0x1a8)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar7 + fVar5);
          }
          dVar36 = (double)fastfunc::FastDiffRots(dVar35,dVar34);
          dVar36 = (double)fastfunc::FastWrapRot((float)dVar34,(float)(dVar36 * dVar37));
          (moby->rotation).z = (float)dVar36;
        }
        if (moby->setByGroup == '\x01') {
          iVar20 = *(int *)((int)pvVar11 + 0x6c);
          if ((iVar20 != -1) && (MobyInstance[iVar20].state == '\x01')) {
            MobyInstance[iVar20].setByGroup = '\x01';
          }
          auVar38 = ZEXT416(0xffffffff);
          auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
          auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
          auVar38 = loadVectorLeftIndexed(0x1c,0x1ef238);
          auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar38 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60
                               ,auVar39);
          auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar38 = vectorSplatHalfWord(auVar38,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar38,0x6a,ZEXT48(pvVar11));
          *(undefined2 *)((int)pvVar11 + 0x6a) = uVar12;
          moby->updateDistance = -1;
          moby->state = '\x02';
        }
      }
    }
  }
  else if (bVar2 < 3) {
    moby->updateDistance = -1;
    if ((((*(int *)((int)pvVar11 + 0x60) != -1) &&
         (pMVar27 = MobyInstance + *(int *)((int)pvVar11 + 0x60), pMVar27 != (MobyInstance *)0x0))
        && (pMVar27->state != 0xfe)) && (pMVar27->state != 0xfd)) {
      fVar5 = (pMVar27->pos).y - (moby->pos).y;
      fVar7 = (pMVar27->pos).x - (moby->pos).x;
      fVar4 = (pMVar27->pos).z - (moby->pos).z;
      dVar35 = 0.0;
      sVar9 = *(short *)((int)pvVar11 + 0x6a);
      fVar6 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar5 * fVar5);
      puVar13[0x3d] = (longlong)(int)(animationSpeed * 10.5);
      fVar15 = (fVar6 - 1.3) / fVar6;
      dVar36 = dVar35;
      if (0.0 - fVar6 < 0.0) {
        dVar36 = (double)(fVar4 * fVar15);
      }
      dVar29 = dVar35;
      if (0.0 - fVar6 < 0.0) {
        dVar29 = (double)(fVar5 * fVar15);
      }
      dVar30 = dVar35;
      if (0.0 - fVar6 < 0.0) {
        dVar30 = (double)(fVar7 * fVar15);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar36 = (double)(fVar4 * fVar15);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar29 = (double)(fVar5 * fVar15);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar30 = (double)(fVar7 * fVar15);
      }
      dVar34 = (double)fastfunc::FastIntToDouble((*(int *)((int)puVar13 + 0x1ec) - (int)sVar9) + 3);
      fVar4 = DAT_0071f418 * 9.8;
      fVar5 = (float)((double)(moby->pos).x + dVar30);
      fVar7 = (float)((double)(moby->pos).y + dVar29);
      (moby->pos).x = fVar5;
      (moby->pos).y = fVar7;
      fVar4 = (moby->pos).z + -(float)((double)(fVar4 * 2.0) * dVar34 - dVar36);
      (moby->pos).z = fVar4;
      fVar7 = fVar7 - (pMVar27->pos).y;
      fVar5 = fVar5 - (pMVar27->pos).x;
      dVar34 = (double)(moby->rotation).y;
      fVar4 = (pMVar27->pos).z - fVar4;
      fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7);
      *(float *)(puVar13 + 0x1e) = fVar4;
      dVar30 = ABS((double)fVar4);
      dVar29 = ABS((double)fVar5);
      *(float *)((int)puVar13 + 0xec) = fVar5;
      *(float *)((int)puVar13 + 0xf4) = (float)(dVar29 - dVar30);
      uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0xec) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1d) & 4;
      dVar36 = ABS((double)*(float *)((int)puVar13 + 0xec));
      if ((double)*(float *)((int)puVar13 + 0xf4) - dVar35 < 0.0) {
        dVar36 = dVar30;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      dVar30 = ABS((double)*(float *)(puVar13 + 0x1e));
      if ((double)*(float *)((int)puVar13 + 0xf4) - dVar35 < 0.0) {
        dVar30 = dVar29;
      }
      fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar29 = dVar35;
      if (dVar35 < dVar36) {
        lVar18 = uVar17 - 0x230;
        lVar26 = uVar17 - 0xe8;
        lVar24 = uVar17 - 0xf8;
        lVar28 = 2;
        fVar4 = (float)(dVar30 - dVar36) / (float)(dVar30 + dVar36);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 0x154) = fVar4;
        *(float *)((int)puVar13 + 0x14c) = fVar4;
        *(float *)(puVar13 + 0x2a) = fVar4;
        *(float *)(puVar13 + 0x29) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x14c) = *(float *)((int)puVar13 + 0x14c) * fVar6;
        *(float *)(puVar13 + 0x2a) = *(float *)(puVar13 + 0x2a) * fVar4;
        *(float *)((int)puVar13 + 0x154) = *(float *)((int)puVar13 + 0x154) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x148) = *(float *)((int)lVar18 + 0x138) * fVar4 * fVar4;
          iVar20 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar17 - 0xf8;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x148) = *(float *)((int)lVar18 + 0x148) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar18 = lVar19;
        dVar36 = dVar35;
        do {
          iVar20 = (int)lVar18;
          iVar14 = (int)lVar26;
          lVar18 = lVar18 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar20 + 0x148)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar29 = (double)((float)(dVar36 + 0.7853981852531433) * fVar5 + fVar7);
      }
      dVar36 = (double)fastfunc::FastDiffRots(-dVar29,dVar34);
      dVar37 = 0.5;
      dVar36 = (double)fastfunc::FastWrapRot((float)dVar34,(float)(dVar36 * 0.5));
      (moby->rotation).y = (float)dVar36;
      fVar5 = (pMVar27->pos).x - (moby->pos).x;
      fVar7 = (pMVar27->pos).y - (moby->pos).y;
      dVar29 = ABS((double)fVar5);
      dVar30 = ABS((double)fVar7);
      *(float *)(puVar13 + 0x1c) = fVar5;
      *(float *)((int)puVar13 + 0xe4) = fVar7;
      dVar34 = (double)(moby->rotation).z;
      *(float *)(puVar13 + 0x1d) = (float)(dVar29 - dVar30);
      uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xe4) >> 0x1d) & 4;
      dVar36 = ABS((double)*(float *)(puVar13 + 0x1c));
      if ((double)*(float *)(puVar13 + 0x1d) - dVar35 < 0.0) {
        dVar36 = dVar30;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar30 = ABS((double)*(float *)((int)puVar13 + 0xe4));
      if ((double)*(float *)(puVar13 + 0x1d) - dVar35 < 0.0) {
        dVar30 = dVar29;
      }
      if (dVar35 < dVar36) {
        lVar18 = uVar17 - 0x230;
        lVar26 = uVar17 - 0x108;
        lVar24 = uVar17 - 0x118;
        lVar28 = 2;
        fVar4 = (float)(dVar30 - dVar36) / (float)(dVar30 + dVar36);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 0x134) = fVar4;
        *(float *)((int)puVar13 + 300) = fVar4;
        *(float *)(puVar13 + 0x26) = fVar4;
        *(float *)(puVar13 + 0x25) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar6;
        *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar4;
        *(float *)((int)puVar13 + 0x134) = *(float *)((int)puVar13 + 0x134) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x128) = *(float *)((int)lVar18 + 0x118) * fVar4 * fVar4;
          iVar20 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar17 - 0x118;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar6 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x128) = *(float *)((int)lVar18 + 0x128) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar20 = (int)lVar19;
          iVar14 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0x128)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar7 + fVar5);
      }
      dVar36 = (double)fastfunc::FastDiffRots(dVar35,dVar34);
      dVar36 = (double)fastfunc::FastWrapRot((float)dVar34,(float)(dVar36 * dVar37));
      (moby->rotation).z = (float)dVar36;
    }
    iVar20 = fastfunc::FastDecTimerS16(ZEXT48(pvVar11) + 0x6a);
    if (iVar20 != 0) {
      if (((*(int *)((int)pvVar11 + 0x60) != -1) &&
          (pMVar27 = MobyInstance + *(int *)((int)pvVar11 + 0x60), pMVar27 != (MobyInstance *)0x0))
         && ((pMVar27->state != 0xfd && pMVar27->state != 0xfe &&
             ((MVar10 = pMVar27->oClass, MVar10 == AIRSHIP_PART_049D || MVar10 == REFUELING_STATION
              || (MVar10 == AIRSHIP_PART_04A0)))))) {
        pMVar27->updateDistance = -1;
        pMVar27->setByGroup = '\x01';
      }
      if ((((*(int *)((int)pvVar11 + 100) != -1) &&
           (pMVar27 = MobyInstance + *(int *)((int)pvVar11 + 100), pMVar27 != (MobyInstance *)0x0))
          && (pMVar27->state != 0xfd && pMVar27->state != 0xfe)) &&
         ((MVar10 = pMVar27->oClass, MVar10 == AIRSHIP_PART_049D || MVar10 == REFUELING_STATION ||
          (MVar10 == AIRSHIP_PART_04A0)))) {
        pMVar27->updateDistance = -1;
        pMVar27->setByGroup = '\x01';
      }
      moby->state = '\x03';
    }
  }
  else if (bVar2 < 4) {
    fVar5 = GameCamera.posX - (moby->pos).x;
    fVar7 = GameCamera.posY - (moby->pos).y;
    fVar4 = GameCamera.posZ - (moby->pos).z;
    *(char (*) [4])((int)puVar13 + 0xdc) = GameCamera.field8_0x14c;
    *(float *)(puVar13 + 0x1a) = fVar5;
    *(float *)((int)puVar13 + 0xd4) = fVar7;
    *(float *)(puVar13 + 0x1b) = fVar4;
    puVar13[0x12] = 0;
    puVar13[0x14] = 0;
    puVar13[0x15] = 1;
    puVar13[0x16] = 0xffffffffffffffff;
    puVar13[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4024000000000000,0x3ff0000000000000,
               0x4024000000000000,moby,uVar17 - 0x170,0,0,1,10,5,8);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



