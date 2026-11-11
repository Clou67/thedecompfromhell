//==== 000a00f0  ns=hero  size=0x9f0
// sig: undefined Hero_AttackMotion(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(5): 0009b380 hero::Hero_GetIdealThrustFromPad; 0009ba88 hero::Hero_Turn3D; 0009c658 hero::Hero_KneeBumpMotion; 0009cdd0 hero::Hero_UpdateExternalThrust; 0010a050 mobyutil::AccelDeltAng

void hero::Hero_AttackMotion(void)

{
  float fVar1;
  float fVar2;
  ulonglong *puVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulonglong in_f17;
  double dVar20;
  ulonglong in_f18;
  double dVar21;
  ulonglong in_f19;
  double dVar22;
  ulonglong in_f20;
  double dVar23;
  ulonglong in_f21;
  double dVar24;
  ulonglong in_f22;
  double dVar25;
  ulonglong in_f23;
  double dVar26;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar10 = uVar8 - 0x140;
  puVar3 = (ulonglong *)lVar10;
  *puVar3 = uVar8;
  puVar3[0x2a] = in_LR;
  puVar3[0x19] = in_f17;
  puVar3[0x1a] = in_f18;
  puVar3[0x1b] = in_f19;
  puVar3[0x1c] = in_f20;
  puVar3[0x1d] = in_f21;
  puVar3[0x1e] = in_f22;
  puVar3[0x1f] = in_f23;
  puVar3[0x20] = in_f24;
  puVar3[0x21] = in_f25;
  puVar3[0x22] = in_f26;
  puVar3[0x23] = in_f27;
  puVar3[0x24] = in_f28;
  puVar3[0x25] = in_f29;
  puVar3[0x26] = in_f30;
  puVar3[0x27] = in_f31;
  puVar3[0x16] = unaff_r29;
  puVar3[0x18] = unaff_r31;
  dVar25 = 1.0;
  puVar3[0x17] = unaff_r30;
  Hero_GetIdealThrustFromPad(0x3ff0000000000000,0xa0000,0);
  dVar33 = 0.20000000298023224;
  if (g_heroGravityMode == '\0') {
    dVar23 = (double)mobyutil::AccelDeltAng
                               ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.02),
                                (double)(DAT_0071f40c * 0.2),
                                (double)(mobyutil::g_FrameTime * 3.6651914),0x969d78);
    DAT_00969e68 = (float)dVar23;
  }
  else {
    Hero_Turn3D(DAT_0071f40c * 0.02,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 3.6651914);
  }
  if (g_heroState == WRENCH_ATTACK) {
    if ((double)g_heroPadMagnitude < dVar33) {
      g_heroIdealRotZ = g_heroRotation.z;
    }
    g_heroIdealSpeed = 0.4;
  }
  else if (g_heroState == CROUCH_WRENCH_THROW) {
    g_heroIdealSpeed = 0.0;
  }
  dVar33 = (double)g_heroIdealRotZ;
  dVar23 = 1.570796251296997;
  dVar34 = 3.141592502593994;
  fVar1 = (float)(dVar33 + 1.570796251296997);
  fVar2 = fVar1;
  if (3.1415925 - fVar1 <= fVar1) {
    fVar2 = 3.1415925 - fVar1;
  }
  dVar32 = -3.141592502593994;
  if (fVar2 <= -3.1415925 - fVar1) {
    fVar2 = -3.1415925 - fVar1;
  }
  fVar5 = fVar2 * fVar2;
  dVar22 = -0.16666656732559204;
  dVar20 = 0.008333025500178337;
  dVar26 = -0.0001980741071747616;
  dVar24 = 2.601886990305502e-06;
  dVar21 = 5.900000095367432;
  fVar1 = fVar5 * fVar5 * fVar2;
  fVar4 = fVar5 * fVar1;
  dVar30 = (double)((fVar2 + fVar5 * fVar2 * -0.16666657 + fVar1 * 0.0083330255 +
                     fVar4 * -0.0001980741 + fVar5 * fVar4 * 2.601887e-06) * g_heroIdealSpeed *
                   mobyutil::g_FrameTime * 5.9);
  dVar13 = dVar33;
  if ((double)(float)(3.141592502593994 - dVar33) <= dVar33) {
    dVar13 = (double)(float)(3.141592502593994 - dVar33);
  }
  if (dVar13 <= (double)(float)(-3.141592502593994 - dVar33)) {
    dVar13 = (double)(float)(-3.141592502593994 - dVar33);
  }
  dVar33 = (double)(float)(dVar13 * dVar13);
  dVar27 = 0.0;
  dVar17 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar13));
  dVar18 = (double)(float)(dVar33 * dVar17);
  dVar28 = (double)(((float)(dVar13 + (double)(float)((double)(float)(dVar33 * dVar13) *
                                                     -0.16666656732559204)) +
                     (float)(dVar17 * 0.008333025500178337) +
                     (float)(dVar18 * -0.0001980741071747616) +
                    (float)(dVar33 * dVar18) * 2.601887e-06) * g_heroIdealSpeed *
                   mobyutil::g_FrameTime * 5.9);
  dVar33 = dVar13;
  dVar17 = dVar13;
  dVar18 = dVar27;
  dVar29 = dVar28;
  dVar31 = dVar30;
  if (0.0 < DAT_0096a610) {
    Hero_UpdateExternalThrust(0.7,0.0);
    dVar33 = (double)DAT_0096a604;
    dVar17 = (double)DAT_0096a608;
    dVar13 = (double)DAT_0096a600;
    DAT_0096a60c = (float)dVar27;
    dVar29 = (double)(float)(dVar29 + dVar33);
    DAT_0096a608 = (float)dVar27;
    dVar31 = (double)(float)(dVar31 + dVar13);
    DAT_0096a604 = (float)dVar27;
    dVar18 = (double)(float)(dVar18 + dVar17);
    DAT_0096a600 = (float)dVar27;
  }
  iVar11 = g_heroStateTimer;
  dVar14 = (double)g_heroVelocity;
  dVar15 = (double)DAT_00969dc4;
  dVar16 = -(double)((float)(dVar14 * dVar31) + (float)(dVar15 * dVar29));
  if (dVar27 < dVar16) {
    dVar16 = (double)((float)(dVar16 / (double)SQRT((float)(dVar31 * dVar31) +
                                                    (float)(dVar29 * dVar29))) /
                     SQRT((float)(dVar14 * dVar14) + (float)(dVar15 * dVar15)));
  }
  if (dVar25 < dVar16) {
    dVar16 = dVar25;
  }
  if (dVar16 < dVar27) {
    dVar16 = dVar27;
  }
  fVar1 = DAT_0071f418 * 2.45 * g_heroIdealSpeed + (float)((double)(DAT_0071f418 * 2.0) * dVar16);
  if (DAT_00964b14 != 0) {
    fVar1 = DAT_0071f418 * 1.1;
  }
  dVar25 = (double)fVar1;
  if (((g_heroState == WRENCH_ATTACK) &&
      (puVar3[0x13] = (longlong)(int)(animationSpeed * 15.5), iVar11 < *(int *)((int)puVar3 + 0x9c))
      ) && (DAT_00969e40 < mobyutil::g_FrameTime * 3.0)) {
    dVar25 = (double)(DAT_0071f418 * 11.0);
  }
  fVar1 = g_heroGroundNormal;
  if ((float)((double)mobyutil::g_FrameTime * dVar21) < DAT_00969e40) {
    dVar25 = (double)(DAT_0071f418 * 13.0);
  }
  if (dVar27 < (double)DAT_0096a610) {
    dVar16 = (double)SQRT((float)(dVar30 * dVar30) + (float)(dVar28 * dVar28) +
                          (float)(dVar27 * dVar27));
    dVar30 = -(double)((float)(dVar30 * dVar13) + (float)(dVar28 * dVar33) +
                      (float)(dVar27 * dVar17));
    if (dVar27 < dVar16) {
      dVar30 = (double)(float)(dVar30 / dVar16);
    }
    dVar17 = (double)(DAT_0071f418 * 3.0);
    dVar33 = (double)SQRT((float)(dVar13 * dVar13) + (float)(dVar33 * dVar33));
    dVar33 = (double)(float)(dVar17 * (double)(float)((double)(float)(dVar33 - dVar30) / dVar33));
    if ((g_heroPadMagnitude < 0.3) && (dVar33 < dVar17)) {
      dVar33 = dVar17;
    }
    if (dVar25 < dVar33) {
      dVar25 = dVar33;
    }
  }
  dVar16 = (double)(float)(dVar31 - (double)DAT_00969e10);
  dVar17 = (double)(float)(dVar29 - (double)DAT_00969e14);
  dVar28 = (double)SQRT((float)((double)((float)(dVar16 * dVar16) + (float)(dVar17 * dVar17)) +
                               dVar27));
  dVar33 = dVar17;
  dVar13 = dVar27;
  dVar30 = dVar16;
  if ((dVar25 < dVar28) && (dVar33 = dVar27, dVar30 = dVar27, dVar28 != dVar27)) {
    dVar25 = (double)(float)(dVar25 / dVar28);
    dVar33 = (double)(float)(dVar25 * dVar17);
    dVar13 = (double)(float)(dVar25 * dVar27);
    dVar30 = (double)(float)(dVar25 * dVar16);
  }
  g_heroVelocity = (float)((double)DAT_00969e10 + dVar30);
  DAT_00969dc4 = (float)((double)DAT_00969e14 + dVar33);
  DAT_00969dc8 = (float)((double)DAT_00969e18 + dVar13);
  DAT_00969dcc = DAT_00969e1c;
  dVar25 = 0.0872664600610733;
  if (0.08726646 < g_heroGroundSlope) {
    dVar30 = ABS((double)g_heroGroundNormal);
    uVar7 = (uint)DAT_00969f54 >> 0x1d;
    dVar13 = ABS((double)DAT_00969f54);
    *(float *)(puVar3 + 0xe) = (float)(dVar30 - dVar13);
    iVar11 = (int)(((ulonglong)((uint)fVar1 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar3 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar7 & 4) << 2);
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
    fVar1 = *(float *)(&DAT_00735904 + iVar11);
    dVar33 = dVar30;
    if (dVar27 <= (double)*(float *)(puVar3 + 0xe)) {
      dVar33 = dVar13;
      dVar13 = dVar30;
    }
    dVar30 = dVar27;
    if (dVar27 < dVar13) {
      iVar11 = 4;
      fVar4 = (float)(dVar33 - dVar13) / (float)(dVar33 + dVar13);
      lVar9 = lVar10;
      do {
        iVar11 = iVar11 + -1;
        *(float *)((int)lVar9 + 0x74) = fVar4;
        lVar9 = lVar9 + 4;
      } while (iVar11 != 0);
      fVar4 = fVar4 * fVar4;
      lVar9 = uVar8 - 0x130;
      iVar11 = 4;
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar3 + 0xf) = *(float *)(puVar3 + 0xf) * fVar4;
      *(float *)((int)puVar3 + 0x7c) = *(float *)((int)puVar3 + 0x7c) * fVar5;
      *(float *)(puVar3 + 0x10) = *(float *)(puVar3 + 0x10) * fVar5 * fVar4;
      do {
        iVar11 = iVar11 + -1;
        *(float *)((int)lVar9 + 0x74) = *(float *)((int)lVar9 + 100) * fVar5 * fVar5;
        lVar9 = lVar9 + 4;
      } while (iVar11 != 0);
      iVar11 = 0;
      iVar12 = 8;
      lVar9 = lVar10;
      do {
        pfVar6 = (float *)((int)&DAT_007358e0 + iVar11);
        iVar12 = iVar12 + -1;
        iVar11 = iVar11 + 4;
        *(float *)((int)lVar9 + 0x74) = *(float *)((int)lVar9 + 0x74) * *pfVar6;
        lVar9 = lVar9 + 4;
      } while (iVar12 != 0);
      iVar11 = 8;
      dVar33 = dVar27;
      do {
        iVar11 = iVar11 + -1;
        iVar12 = (int)lVar10;
        lVar10 = lVar10 + 4;
        dVar33 = (double)(float)(dVar33 + (double)*(float *)(iVar12 + 0x74));
      } while (iVar11 != 0);
      dVar30 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar1);
    }
    dVar17 = (double)(float)(dVar30 + dVar23);
    fVar1 = mobyutil::g_FrameTime * 8.0 * g_heroGroundSlope * 1.2732395;
    dVar13 = (double)(DAT_0071f418 * 8.5 * g_heroGroundSlope * 1.2732395);
    dVar33 = dVar17;
    if ((double)(float)(dVar34 - dVar17) <= dVar17) {
      dVar33 = (double)(float)(dVar34 - dVar17);
    }
    if (dVar33 <= (double)(float)(dVar32 - dVar17)) {
      dVar33 = (double)(float)(dVar32 - dVar17);
    }
    dVar28 = (double)(float)(dVar33 * dVar33);
    dVar16 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar33));
    dVar14 = (double)(float)(dVar28 * dVar16);
    dVar17 = dVar30;
    if ((double)(float)(dVar34 - dVar30) <= dVar30) {
      dVar17 = (double)(float)(dVar34 - dVar30);
    }
    if (dVar17 <= (double)(float)(dVar32 - dVar30)) {
      dVar17 = (double)(float)(dVar32 - dVar30);
    }
    dVar30 = (double)(float)(dVar17 * dVar17);
    dVar15 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar17));
    dVar19 = (double)(float)(dVar30 * dVar15);
    dVar28 = (double)(((float)(dVar33 + (double)(float)((double)(float)(dVar28 * dVar33) * dVar22))
                       + (float)(dVar16 * dVar20) + (float)(dVar14 * dVar26) +
                      (float)((double)(float)(dVar28 * dVar14) * dVar24)) * fVar1 - g_heroVelocity);
    dVar16 = (double)(((float)(dVar17 + (double)(float)((double)(float)(dVar30 * dVar17) * dVar22))
                       + (float)(dVar15 * dVar20) + (float)(dVar19 * dVar26) +
                      (float)((double)(float)(dVar30 * dVar19) * dVar24)) * fVar1 - DAT_00969dc4);
    dVar14 = (double)SQRT((float)((double)((float)(dVar28 * dVar28) + (float)(dVar16 * dVar16)) +
                                 dVar27));
    dVar33 = dVar28;
    dVar30 = dVar16;
    dVar17 = dVar27;
    if ((dVar13 < dVar14) && (dVar33 = dVar27, dVar30 = dVar27, dVar14 != dVar27)) {
      dVar13 = (double)(float)(dVar13 / dVar14);
      dVar33 = (double)(float)(dVar13 * dVar28);
      dVar30 = (double)(float)(dVar13 * dVar16);
      dVar17 = (double)(float)(dVar13 * dVar27);
    }
    g_heroVelocity = (float)((double)g_heroVelocity + dVar33);
    DAT_00969dc4 = (float)((double)DAT_00969dc4 + dVar30);
    DAT_00969dc8 = (float)((double)DAT_00969dc8 + dVar17);
  }
  dVar33 = (double)SQRT((float)(dVar31 * dVar31) + (float)(dVar29 * dVar29) +
                        (float)(dVar18 * dVar18));
  DAT_0096a090 = (float)((double)g_heroVelocity * dVar31) + (float)((double)DAT_00969dc4 * dVar29) +
                 (float)(dVar27 * dVar18);
  if (dVar27 < dVar33) {
    DAT_0096a090 = DAT_0096a090 /
                   (float)((double)(float)((double)mobyutil::g_FrameTime * dVar21) * dVar33);
  }
  Hero_KneeBumpMotion(0);
  if ((DAT_0096a094 < 0.017453292) && (dVar25 < (double)DAT_00969fc4)) {
    dVar33 = (double)(float)((double)DAT_00969fc4 + dVar23);
    dVar25 = dVar33;
    if ((double)(float)(dVar34 - dVar33) <= dVar33) {
      dVar25 = (double)(float)(dVar34 - dVar33);
    }
    if (dVar25 <= (double)(float)(dVar32 - dVar33)) {
      dVar25 = (double)(float)(dVar32 - dVar33);
    }
    dVar33 = (double)(float)(dVar25 * dVar25);
    dVar23 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar25));
    dVar34 = (double)(float)(dVar33 * dVar23);
    fVar1 = (float)(dVar25 + (double)(float)((double)(float)(dVar33 * dVar25) * dVar22)) +
            (float)(dVar23 * dVar20) + (float)(dVar34 * dVar26) +
            (float)((double)(float)(dVar33 * dVar34) * dVar24);
    g_heroVelocity = g_heroVelocity * fVar1;
    DAT_00969dc4 = DAT_00969dc4 * fVar1;
    DAT_00969dc8 = DAT_00969dc8 * fVar1;
  }
  DAT_0096a094 = DAT_00969fc4;
  if (ABS(g_heroPosition.z - g_heroGroundZ) < 0.15) {
    g_heroPosition.z = g_heroGroundZ;
  }
  return;
}



//==== 000a0ae0  ns=hero  size=0x70
// sig: void Hero_PlayLoopSound(int slot, MobyInstance * moby, int sound)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(1): 0015d12c sound::PlayMobySound

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_PlayLoopSound(int slot,MobyInstance *moby,int sound)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)((longlong)slot << 2);
  if (*(int *)((int)&g_heroLoopSounds + iVar1) == -1) {
    iVar2 = ::sound::PlayMobySound(sound,4,moby);
    *(int *)((int)&g_heroLoopSounds + iVar1) = iVar2;
  }
  *(MobyInstance **)((int)&g_heroLoopSoundMobys + iVar1) = moby;
  return;
}



//==== 000a0b50  ns=hero  size=0x4c
// sig: void Hero_QueueSound(short sound, short timer, short flags)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_QueueSound(short sound,short timer,short flags)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&g_heroQueuedSounds)[iVar1 * 4] == 0) {
      (&g_heroQueuedSounds)[iVar1 * 4] = 1;
      (&DAT_0096bebe)[iVar1 * 4] = flags;
      *(short *)(&DAT_0096bebc + iVar1 * 8) = timer;
      (&DAT_0096beba)[iVar1 * 4] = sound;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}



//==== 000a0b9c  ns=hero  size=0x90
// sig: void Hero_SnapAnim(int seq, int frame)
// callers(0): 
// callees(1): 000ef74c mobyfunc::UpdateMobyFrameData

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_SnapAnim(int seq,int frame)

{
  MobyClass *pMVar1;
  char *pcVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = g_heroMobyPtr;
  pMVar1 = g_heroMobyPtr->pClass;
  g_heroMobyPtr->previousAnimationFrame = (char)frame;
  pMVar3->animationFrame = (char)(frame + 1U);
  pcVar2 = &pMVar1->type + (int)((longlong)seq << 2);
  if ((int)(*(byte *)(*(int *)pcVar2 + 0x10) - 1) < (int)(frame + 1U & 0xff)) {
    pMVar3->animationFrame = *(char *)(*(int *)pcVar2 + 0x10) + -1;
  }
  pMVar3->updateId = (u8)seq;
  pMVar3->animationId = (u8)seq;
  pMVar3->animationBlend = 0.0;
  mobyfunc::UpdateMobyFrameData(pMVar3);
  return;
}



//==== 000a0c38  ns=hero  size=0x2e0
// sig: void Hero_Warp(float * pos, float * rot, longlong unused, int flags)
// callers(58): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00041210 camera::camera20::InitCamera_20; 00079b18 freeze::UpdateFreeze; 000a7968 hero::Hero_UpdateHoverboardRace; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 00161788 space::UpdateSpace; 00167a30 update::mode_sceneUnInit; 0016b038 vendor::Vendor_EndWeaponCutscene; 0016ba38 vendor::Vendor_RestoreHero; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 001a43a8 mobyupdate_helpers::M1051_001a43a8; 001a48d0 mobyupdate_helpers::M1051_001a48d0; 001a4df8 mobyupdate_helpers::M1051_001a4df8; 001a5360 mobyupdate_helpers::M1051_001a5360; 001ac298 mobyupdate_unsorted::UpdateMoby_1061; 001b9d68 mobyupdate_unsorted::UpdateMoby_1083; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 001daee8 mobyupdate_unsorted::UpdateMoby_1135
// callees(12): 0005393c camera::Camera_resetToFollow; 0007e5e8 hero::Hero_GetGroundInfo; 0007f45c hero::Hero_GetIdleAnim; 0007fa30 hero::Hero_ResetTweakers; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 000ef74c mobyfunc::UpdateMobyFrameData; 000f1c78 mobyfunc::MB_SetLightsFromEnvSample; 001154c8 mobyutil::DeleteMotionBlur; 0011dfc8 pad::InitPadRing; 00500b64 fastfunc::FastEulerToMtx; 00500ca4 fastfunc::FastEulerToMtx1

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_Warp(float *pos,float *rot,longlong unused,int flags)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  MobyInstance *pMVar4;
  int seq;
  byte bVar5;
  double dVar6;
  
  pMVar4 = g_heroMobyPtr;
  g_heroPosition.x = *pos;
  g_heroPosition.y = pos[1];
  g_heroPosition.z = pos[2];
  g_heroPosition.w = pos[3];
  (g_heroMobyPtr->pos).x = *pos;
  (pMVar4->pos).y = pos[1];
  (pMVar4->pos).z = pos[2];
  (pMVar4->pos).w = pos[3];
  g_heroRotation.x = *rot;
  g_heroRotation.y = rot[1];
  g_heroRotation.z = rot[2];
  g_heroRotation.w = rot[3];
  fastfunc::FastEulerToMtx1(&g_heroMtx,&g_heroRotation);
  fastfunc::FastEulerToMtx(&g_heroMobyPtr->transform,&g_heroRotation);
  dVar6 = 0.0;
  g_heroIdealSpeed = 0;
  g_storedNeutralSpeed = 0;
  mobyutil::DeleteMotionBlur(&DAT_0096b350);
  DAT_0096a040 = 0;
  DAT_00969ddc = (float)dVar6;
  DAT_0096a044 = DAT_0096a044 & 0xfffffffc;
  g_framesNotGrounded = 1;
  DAT_00969dd8 = (float)dVar6;
  DAT_00969dd4 = (float)dVar6;
  DAT_00969dd0 = (float)dVar6;
  DAT_00969dcc = (float)dVar6;
  DAT_00969dc8 = (float)dVar6;
  DAT_00969dc4 = (float)dVar6;
  g_heroVelocity = (float)dVar6;
  DAT_00969dec = (float)dVar6;
  DAT_00969de8 = (float)dVar6;
  DAT_00969de4 = (float)dVar6;
  DAT_00969de0 = (float)dVar6;
  DAT_00969dfc = (float)dVar6;
  DAT_00969df8 = (float)dVar6;
  DAT_00969df4 = (float)dVar6;
  DAT_00969df0 = (float)dVar6;
  DAT_00969e0c = (float)dVar6;
  DAT_00969e08 = (float)dVar6;
  DAT_00969e04 = (float)dVar6;
  DAT_00969e00 = (float)dVar6;
  DAT_00969e3c = (float)dVar6;
  DAT_00969e38 = (float)dVar6;
  DAT_00969e34 = (float)dVar6;
  g_heroExternalMomentum = (float)dVar6;
  DAT_00969d8c = (float)dVar6;
  DAT_00969d88 = (float)dVar6;
  DAT_00969d84 = (float)dVar6;
  DAT_00969d80 = (float)dVar6;
  DAT_00969e64 = (float)dVar6;
  DAT_0096bfaa = 0;
  DAT_0096bfbe = 0;
  pad::InitPadRing();
  if (DAT_0096bd88 != '\0') {
    if (DAT_0096a9e8 == 0) {
      if ((g_heroState == STANDING) && (g_heroMobyPtr->animationId == DAT_0096bf74)) {
        seq = Hero_GetIdleAnim(0);
        Hero_TransAnim(-2.0,seq,0);
      }
    }
    else {
      DAT_0096a9f4 = 1;
    }
    DAT_0096bd88 = '\0';
    DAT_0096bd8a = 0;
  }
  Hero_ResetTweakers();
  if ((int)unused != -1) {
    TransitionMovement((int)unused,1);
  }
  pMVar4 = g_heroMobyPtr;
  bVar1 = g_heroMobyPtr->animationId;
  pcVar2 = &g_heroMobyPtr->animationFrame;
  pcVar3 = &g_heroMobyPtr->pClass->type + (uint)bVar1 * 4;
  g_heroMobyPtr->previousAnimationFrame = *pcVar2;
  bVar5 = *pcVar2 + 1;
  pMVar4->animationFrame = bVar5;
  if ((int)(*(byte *)(*(int *)pcVar3 + 0x10) - 1) < (int)(uint)bVar5) {
    pMVar4->animationFrame = *(char *)(*(int *)pcVar3 + 0x10) + -1;
  }
  pMVar4->updateId = bVar1;
  pMVar4->animationId = bVar1;
  pMVar4->animationBlend = (float)dVar6;
  mobyfunc::UpdateMobyFrameData(pMVar4);
  GameCamera.camUnderWater = (uint)LZCOUNT(g_heroStateType + -0x11) >> 5;
  Hero_GetGroundInfo();
  if (flags != 0) {
    camera::Camera_resetToFollow();
  }
  mobyfunc::MB_SetLightsFromEnvSample(g_heroMobyPtr);
  return;
}



//==== 000a0f40  ns=hero  size=0x2a4
// sig: undefined Hero_EdgeStop(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(7): 00057820 collproc::CollLine; 0007dff0 hero::Hero_Slope; 000817ec hero::Hero_SetRelativeZ; 000886d0 hero::Hero_AddRelativeZ; 00089038 hero::Hero_ScaleRelativeXY; 00089480 hero::Hero_RelativeXYComponent; 0009cf98 hero::Hero_ForwardThrust

void hero::Hero_EdgeStop(double param_1,double param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  
  fVar4 = Hero_RelativeXYComponent(&g_heroVelocity);
  dVar3 = 0.0;
  if (((fVar4 != 0.0) &&
      ((((g_heroPadMagnitude <= 0.5 || (g_heroStateType == 6)) || (DAT_00969ed4 != 0)) ||
       (DAT_0096afc7 != '\0')))) && (g_framesNotGrounded == 0)) {
    if (g_heroState == WALLOPER_SOMETHING) {
      param_1 = 2.0;
    }
    local_50 = (float)((double)g_heroVelocity * param_1);
    local_4c = (float)((double)DAT_00969dc4 * param_1);
    local_48 = (float)((double)DAT_00969dc8 * param_1);
    local_44 = DAT_00969dcc;
    if ((0.0 < param_2) && (fVar4 = Hero_RelativeXYComponent(&local_50), (double)fVar4 < param_2)) {
      Hero_ScaleRelativeXY((float)dVar3,&local_50,&local_50);
      Hero_ForwardThrust((float)param_2,&local_50,&local_50);
    }
    Hero_SetRelativeZ((float)dVar3,&local_50,&local_50);
    local_50 = local_50 + g_heroPosition.x;
    local_4c = local_4c + g_heroPosition.y;
    local_48 = local_48 + g_heroPosition.z;
    local_34 = local_44;
    local_40 = local_50;
    local_3c = local_4c;
    local_38 = local_48;
    Hero_AddRelativeZ(0.3,&local_50,&local_50);
    fVar4 = -0.2;
    if (g_heroState == WALLOPER_SOMETHING) {
      fVar4 = -0.35;
    }
    if (g_heroType == '\x02') {
      fVar4 = -0.7;
    }
    Hero_AddRelativeZ(fVar4,&local_40,&local_40);
    dVar2 = 1.0;
    iVar1 = collproc::CollLine(&local_50,&local_40,4,g_heroMobyPtr,0);
    if (((iVar1 != 0) && (0 < CollOutput.poly)) &&
       (fVar4 = Hero_Slope(&CollOutput.normal.x), fVar4 <= 0.87266463)) {
      dVar2 = dVar3;
    }
    if (dVar2 != dVar3) {
      DAT_00969de0 = (float)dVar3;
      DAT_00969de4 = (float)dVar3;
      DAT_00969de8 = (float)dVar3;
      DAT_00969df0 = (float)dVar3;
      DAT_00969df4 = (float)dVar3;
      DAT_00969df8 = (float)dVar3;
      g_heroVelocity = (float)dVar3;
      DAT_00969dc4 = (float)dVar3;
      DAT_00969dc8 = (float)dVar3;
      g_heroExternalMomentum = (float)dVar3;
      DAT_00969e34 = (float)dVar3;
      DAT_00969e38 = (float)dVar3;
      g_storedNeutralSpeed = (float)dVar3;
    }
  }
  return;
}



//==== 000a11e8  ns=hero  size=0x144
// sig: undefined ???_Hero_ApplyHitGravityToMobyList(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(3): 0007cf28 hero::Hero_AddGravity; 0015d12c sound::PlayMobySound; 0042b390 mobyupdate_helpers::M711_0042b390

MobyInstance * hero::____Hero_ApplyHitGravityToMobyList(MobyInstance *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float local_40 [6];
  
  if (param_2 != 0) {
    if (DAT_0096a744 == 0) {
      param_1 = (MobyInstance *)sound::PlayMobySound(1,0,param_1);
      DAT_0096a744 = 1;
    }
    iVar2 = 0;
    if (0 < param_2) {
      iVar3 = 0;
      do {
        sVar1 = 0;
        param_1 = (MobyInstance *)&DAT_00a14a00;
        if ((*(int *)((int)&DAT_00a14a00 + iVar3) != 0) &&
           (*(int *)(*(int *)((int)&DAT_00a14a00 + iVar3) + 0x24) != 0)) {
          sVar1 = *(short *)(*(int *)(*(int *)((int)&DAT_00a14a00 + iVar3) + 0x24) + 0x46);
        }
        if (sVar1 == 9 || sVar1 == 5) {
          Hero_AddGravity(-0.5,local_40,local_40);
          param_1 = (MobyInstance *)mobyupdate_helpers::M711_0042b390(local_40,4);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < param_2);
    }
  }
  return param_1;
}



//==== 000a1378  ns=hero  size=0x2f4
// sig: undefined Hero_SpawnLavaDeathParts(void)
// callers(2): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe610 mobyutil::MB_SphericalToVector; 00121740 partupd::SpawnPart_4; 00502758 fastfunc::FastDoubleToInt

void hero::Hero_SpawnLavaDeathParts(void)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_80 [16];
  float afStack_70 [4];
  longlong local_60;
  
  iVar4 = 0;
  fVar1 = animationSpeed * 40.5;
  local_60 = (longlong)(int)fVar1;
  do {
    dVar5 = (double)mobyutil::MB_randRangeFloat(4200.0,7350.0);
    dVar7 = 0.0010000000474974513;
    uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar5 * 0.0010000000474974513));
    dVar5 = (double)mobyutil::MB_randRangeFloat(21000.0,31500.002);
    uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar5 * dVar7));
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * 0.15,mobyutil::g_FrameTime * 0.7);
    dVar7 = (double)mobyutil::MB_randRot();
    dVar6 = (double)mobyutil::MB_randRangeFloat(0.34906584,1.3962634);
    mobyutil::MB_randRangeFloat(0.05,g_heroCollRadius + 0.2);
    mobyutil::MB_SphericalToVector((float)dVar5,(float)dVar7,(float)dVar6,afStack_70);
    partupd::SpawnPart_4(local_80,afStack_70,0x7000c0f0,0x70f0,(int)fVar1,uVar2,uVar3,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  return;
}



//==== 000a1698  ns=hero  size=0x6c4
// sig: undefined Hero_ThrowWrench(void)
// callers(2): 000a30e0 hero::???_Hero_UpdateWeaponInput; 000aaec0 hero::HandleHeroMovement
// callees(12): 00084180 hero::Hero_GetHeroRelativeVector; 0009cf98 hero::Hero_ForwardThrust; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 0010c1e8 mobyutil::MB_MtxToEuler; 0011539c mobyutil::CreateMotionBlur; 001153c8 mobyutil::AddMotionBlurElem; 0015d12c sound::PlayMobySound; 00500b64 fastfunc::FastEulerToMtx; 00500f6c fastfunc::FastMtxCopyNoTranslate; 005014d4 fastfunc::FastVecMtx4MultBatch3; 00502578 fastfunc::FastWrapRot

void hero::Hero_ThrowWrench(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  MobyInstance *pMoby;
  MobyInstance *pMVar11;
  PlayerState PVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x1d0;
  puVar6 = (ulonglong *)lVar15;
  *puVar6 = uVar13;
  puVar6[0x3c] = in_LR;
  puVar6[0x39] = in_f31;
  puVar6[0x35] = unaff_r28;
  puVar6[0x38] = unaff_r31;
  bVar9 = false;
  puVar6[0x34] = unaff_r27;
  PVar12 = g_heroState;
  puVar6[0x37] = unaff_r30;
  puVar6[0x36] = unaff_r29;
  iVar18 = g_heroStateTimer;
  if (((PVar12 == FIRST_PERSON_VIEW) || (PVar12 == WEAPON_FIRST_PERSON_VIEW)) &&
     (puVar6[0x31] = (longlong)(int)(animationSpeed * 20.5), *(int *)((int)puVar6 + 0x18c) < iVar18)
     ) {
    bVar9 = true;
  }
  if (bVar9) {
    bVar10 = false;
    if (((g_currentWeaponMoby != (MobyInstance *)0x0) &&
        ((uint)LZCOUNT(g_currentWeaponMoby->oClass - 0x47) >> 5 != 0)) &&
       (pvVar5 = g_currentWeaponMoby->pVar, *(short *)((int)pvVar5 + 0x7e) != 0)) {
      bVar10 = true;
      dVar25 = 0.0;
      Hero_GetHeroRelativeVector(0.5,0.0,0.5,(float *)(puVar6 + 0xe));
      fVar2 = *(float *)((int)pvVar5 + 0x50) - *(float *)(puVar6 + 0xe);
      dVar20 = (double)fVar2;
      fVar3 = *(float *)((int)pvVar5 + 0x54) - *(float *)((int)puVar6 + 0x74);
      dVar21 = (double)fVar3;
      fVar1 = *(float *)((int)pvVar5 + 0x58);
      dVar22 = ABS(dVar20);
      dVar23 = ABS(dVar21);
      *(float *)((int)puVar6 + 0x13c) = fVar2;
      *(float *)(puVar6 + 0x28) = fVar3;
      fVar2 = *(float *)(puVar6 + 0xf);
      *(float *)((int)puVar6 + 0x144) = (float)(dVar22 - dVar23);
      iVar18 = (int)(((ulonglong)(*(uint *)((int)puVar6 + 0x13c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar6 + 0x144) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar6 + 0x28) >> 0x1d) & 4) << 2);
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar18);
      fVar3 = *(float *)(&DAT_00735904 + iVar18);
      if (dVar25 <= (double)*(float *)((int)puVar6 + 0x144)) {
        dVar22 = ABS((double)*(float *)(puVar6 + 0x28));
        dVar23 = ABS((double)*(float *)((int)puVar6 + 0x13c));
      }
      dVar24 = dVar25;
      if (dVar25 < dVar23) {
        iVar18 = 4;
        fVar7 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
        lVar14 = lVar15;
        do {
          iVar18 = iVar18 + -1;
          *(float *)((int)lVar14 + 0x168) = fVar7;
          lVar14 = lVar14 + 4;
        } while (iVar18 != 0);
        fVar7 = fVar7 * fVar7;
        lVar14 = uVar13 - 0x1c0;
        iVar18 = 4;
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar6 + 0x16c) = *(float *)((int)puVar6 + 0x16c) * fVar7;
        *(float *)(puVar6 + 0x2e) = *(float *)(puVar6 + 0x2e) * fVar8;
        *(float *)((int)puVar6 + 0x174) = *(float *)((int)puVar6 + 0x174) * fVar8 * fVar7;
        do {
          iVar18 = iVar18 + -1;
          *(float *)((int)lVar14 + 0x168) = *(float *)((int)lVar14 + 0x158) * fVar8 * fVar8;
          lVar14 = lVar14 + 4;
        } while (iVar18 != 0);
        iVar18 = 0;
        iVar19 = 8;
        lVar14 = lVar15;
        do {
          iVar19 = iVar19 + -1;
          pfVar17 = (float *)((int)&DAT_007358e0 + iVar18);
          iVar18 = iVar18 + 4;
          *(float *)((int)lVar14 + 0x168) = *(float *)((int)lVar14 + 0x168) * *pfVar17;
          lVar14 = lVar14 + 4;
        } while (iVar19 != 0);
        iVar18 = 8;
        lVar14 = lVar15;
        dVar22 = dVar25;
        do {
          iVar18 = iVar18 + -1;
          iVar19 = (int)lVar14;
          lVar14 = lVar14 + 4;
          dVar22 = (double)(float)(dVar22 + (double)*(float *)(iVar19 + 0x168));
        } while (iVar18 != 0);
        dVar24 = (double)((float)(dVar22 + 0.7853981852531433) * fVar4 + fVar3);
      }
      DAT_0096a754 = (float)dVar24;
      fVar3 = SQRT((float)(dVar20 * dVar20) + (float)(dVar21 * dVar21));
      fVar1 = fVar1 - fVar2;
      dVar21 = ABS((double)fVar1);
      *(float *)((int)puVar6 + 0x134) = fVar1;
      dVar20 = ABS((double)fVar3);
      *(float *)(puVar6 + 0x26) = fVar3;
      *(float *)(puVar6 + 0x27) = (float)(dVar20 - dVar21);
      iVar18 = (int)(((ulonglong)(*(uint *)(puVar6 + 0x26) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar6 + 0x27) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar6 + 0x134) >> 0x1d) & 4) << 2);
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar18);
      fVar1 = *(float *)(&DAT_00735904 + iVar18);
      if (dVar25 <= (double)*(float *)(puVar6 + 0x27)) {
        dVar20 = ABS((double)*(float *)((int)puVar6 + 0x134));
        dVar21 = ABS((double)*(float *)(puVar6 + 0x26));
      }
      if (dVar25 < dVar21) {
        iVar18 = 4;
        fVar3 = (float)(dVar20 - dVar21) / (float)(dVar20 + dVar21);
        lVar14 = lVar15;
        do {
          iVar18 = iVar18 + -1;
          *(float *)((int)lVar14 + 0x148) = fVar3;
          lVar14 = lVar14 + 4;
        } while (iVar18 != 0);
        fVar3 = fVar3 * fVar3;
        lVar14 = uVar13 - 0x1c0;
        iVar18 = 4;
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar6 + 0x14c) = *(float *)((int)puVar6 + 0x14c) * fVar3;
        *(float *)(puVar6 + 0x2a) = *(float *)(puVar6 + 0x2a) * fVar4;
        *(float *)((int)puVar6 + 0x154) = *(float *)((int)puVar6 + 0x154) * fVar4 * fVar3;
        do {
          iVar18 = iVar18 + -1;
          *(float *)((int)lVar14 + 0x148) = *(float *)((int)lVar14 + 0x138) * fVar4 * fVar4;
          lVar14 = lVar14 + 4;
        } while (iVar18 != 0);
        iVar18 = 0;
        iVar19 = 8;
        lVar14 = lVar15;
        do {
          pfVar17 = (float *)((int)&DAT_007358e0 + iVar18);
          iVar19 = iVar19 + -1;
          iVar18 = iVar18 + 4;
          *(float *)((int)lVar14 + 0x148) = *(float *)((int)lVar14 + 0x148) * *pfVar17;
          lVar14 = lVar14 + 4;
        } while (iVar19 != 0);
        iVar18 = 8;
        do {
          iVar18 = iVar18 + -1;
          iVar19 = (int)lVar15;
          lVar15 = lVar15 + 4;
          dVar25 = (double)(float)(dVar25 + (double)*(float *)(iVar19 + 0x148));
        } while (iVar18 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar1);
      }
      DAT_0096a758 = (float)dVar25;
    }
    if (!bVar10) {
      DAT_0096a754 = GameCamera.rot.radius;
      dVar20 = (double)fastfunc::FastWrapRot(-GameCamera.rot.elevation,0.12217305);
      DAT_0096a758 = (float)dVar20;
    }
  }
  pMVar11 = g_currentWeaponMoby;
  pMoby = g_ratchetMoby;
  if (g_currentWeaponMoby == (MobyInstance *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)LZCOUNT(g_currentWeaponMoby->oClass - 0x47) >> 5;
  }
  if (uVar16 != 0) {
    DAT_0096ad8a = 1;
    if (bVar9) {
      if (g_heroType == '\x03') {
        if (g_ratchetMoby != (MobyInstance *)0x0) {
          (g_ratchetMoby->pos).x = g_heroPosition.x;
          (pMoby->pos).y = g_heroPosition.y;
          (pMoby->pos).z = g_heroPosition.z;
          (pMoby->pos).w = g_heroPosition.w;
          sound::PlayMobySound(0x1b,0,pMoby);
        }
      }
      else {
        sound::PlayMobySound(0x1b,0,g_heroMobyPtr);
      }
    }
    pMVar11->state = '\n';
    pvVar5 = pMVar11->pVar;
    if (((DAT_00969f28 < 1.2) && (0.6632251 < DAT_00969f30)) && (DAT_00969f34 == '\0')) {
      *(undefined2 *)((int)pvVar5 + 0x76) = 1;
    }
    pfVar17 = (float *)((int)pvVar5 + 0x40);
    dVar20 = 0.0;
    *(undefined4 *)((int)pvVar5 + 0x4c) = 0;
    *(undefined4 *)((int)pvVar5 + 0x48) = 0;
    *(undefined4 *)((int)pvVar5 + 0x44) = 0;
    *(undefined4 *)((int)pvVar5 + 0x40) = 0;
    if (bVar9) {
      mobyutil::MB_SphericalToVector(1.0,DAT_0096a754,DAT_0096a758,pfVar17);
    }
    else {
      Hero_ForwardThrust(1.0,pfVar17,pfVar17);
    }
    *(float *)((int)puVar6 + 0x8c) = (float)dVar20;
    *(float *)(puVar6 + 0x11) = (float)dVar20;
    *(float *)((int)puVar6 + 0x84) = (float)dVar20;
    *(float *)(puVar6 + 0x10) = (float)dVar20;
    fastfunc::FastEulerToMtx(uVar13 - 0x140,uVar13 - 0x150);
    fVar1 = GameCamera.rot.elevation;
    if (bVar9) {
      *(float *)(puVar6 + 0x10) = GameCamera.rot.azimuth;
      fVar2 = GameCamera.rot.radius;
      *(float *)((int)puVar6 + 0x84) = fVar1;
      *(float *)(puVar6 + 0x11) = fVar2;
      fastfunc::FastEulerToMtx(uVar13 - 0x110,uVar13 - 0x150);
      fastfunc::FastVecMtx4MultBatch3(uVar13 - 0x140,uVar13 - 0x110,uVar13 - 0x140);
    }
    else {
      fastfunc::FastVecMtx4MultBatch3(uVar13 - 0x140,ZEXT48(g_heroMobyPtr) + 0xc0,uVar13 - 0x140);
    }
    fastfunc::FastMtxCopyNoTranslate(uVar13 - 0xe0,uVar13 - 0x140);
    mobyutil::MB_MtxToEuler((int)(uVar13 - 0xe0),(MobyInstance *)&pMVar11->rotation);
    fVar1 = mobyutil::g_FrameTime;
    *(float *)((int)pvVar5 + 100) = (float)dVar20;
    *(float *)((int)pvVar5 + 0x60) = fVar1 * 23.0;
    mobyutil::CreateMotionBlur(pMVar11,&DAT_0096b490);
    mobyutil::AddMotionBlurElem(&DAT_0096b490,0x30,3);
    mobyutil::AddMotionBlurElem(&DAT_0096b490,0x17,5);
    puVar6[0x31] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(pMVar11,6,0,*(undefined4 *)((int)puVar6 + 0x18c));
  }
  return;
}



//==== 000a1d70  ns=hero  size=0xec
// sig: int Hero_GetSnapJumpDir(void)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(3): 0009b380 hero::Hero_GetIdealThrustFromPad; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_GetSnapJumpDir(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  Hero_GetIdealThrustFromPad(0x3ff0000000000000,0xa0000,0);
  dVar2 = (double)fastfunc::FastDiffRots((double)g_heroIdealRotZ,(double)g_heroRotation.z);
  iVar1 = 2;
  dVar3 = (double)fastfunc::FastSubRots((float)dVar2,3.1415927);
  dVar4 = 0.7853981852531433;
  if (0.7853981852531433 <= dVar3) {
    dVar3 = (double)fastfunc::FastSubRots((float)dVar2,-1.5707964);
    if (dVar4 <= dVar3) {
      dVar2 = (double)fastfunc::FastSubRots((float)dVar2,1.5707964);
      if (dVar2 < dVar4) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 3;
  }
  return iVar1;
}



//==== 000a1e78  ns=hero  size=0x150
// sig: int Hero_GetSnapJumpSnapWindow(void)
// callers(3): 000a4950 hero::Hero_JumpOrSnapJumpCheck; 000a56d8 hero::Hero_CrouchJumpTransitions; 000be228 hero::HeroMovement
// callees(3): 0009b380 hero::Hero_GetIdealThrustFromPad; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_GetSnapJumpSnapWindow(void)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = 12.5;
  iVar1 = (int)(animationSpeed * 12.5);
  Hero_GetIdealThrustFromPad(0x3ff0000000000000,&DAT_00720000,0);
  dVar3 = (double)fastfunc::FastDiffRots((double)g_heroIdealRotZ,(double)g_heroRotation.z);
  iVar2 = 2;
  dVar4 = (double)fastfunc::FastSubRots((float)dVar3,3.1415927);
  dVar6 = 0.7853981852531433;
  if (0.7853981852531433 <= dVar4) {
    dVar4 = (double)fastfunc::FastSubRots((float)dVar3,-1.5707964);
    if (dVar6 <= dVar4) {
      dVar3 = (double)fastfunc::FastSubRots((float)dVar3,1.5707964);
      if (dVar3 < dVar6) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 3;
  }
  if (iVar2 == 2) {
    iVar1 = 0;
  }
  else if (iVar2 == 3) {
    iVar1 = (int)((double)animationSpeed * dVar5);
  }
  return iVar1;
}



//==== 000a1ff0  ns=hero  size=0x280
// sig: undefined Hero_FindSwingshotTarget(void)
// callers(1): 000a30e0 hero::???_Hero_UpdateWeaponInput
// callees(3): 00057820 collproc::CollLine; 000993d8 hero::Hero_ComputeTargetScore; 00110b70 mobyutil::MB_IsPntInCuboid

void hero::Hero_FindSwingshotTarget(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  int local_40;
  
  iVar7 = 0;
  g_HeroNearSwingshot = 0;
  dVar11 = 100000000.0;
  if (MobyUpdateChainStart != 0) {
    iVar7 = 0;
    iVar2 = MobyUpdateChainStart;
    do {
      if ((((*(short *)(iVar2 + 0xa6) == 0x323) && (piVar1 = *(int **)(iVar2 + 0x78), *piVar1 != 0))
          && ((*(ushort *)(iVar2 + 0x34) & 1) == 0)) &&
         ((fVar3 = g_heroPosition.z - *(float *)(iVar2 + 0x18), fVar3 <= 3.0 &&
          (((float)piVar1[8] == 0.0 ||
           (fVar4 = g_heroPosition.x - *(float *)(iVar2 + 0x10),
           fVar5 = g_heroPosition.y - *(float *)(iVar2 + 0x14),
           SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) <= (float)piVar1[8])))))) {
        uVar8 = 0x3fe921fb60000000;
        uVar9 = uVar8;
        if (g_heroState == DISENGAGE_YELLOW_SWINGSHOT) {
          uVar9 = 0x3ff38c3540000000;
          uVar8 = 0x3ff226c3c0000000;
        }
        if ((g_heroState == FIRST_PERSON_VIEW) || (g_heroState == WEAPON_FIRST_PERSON_VIEW)) {
          uVar9 = 0x3fb6571840000000;
          uVar8 = uVar9;
        }
        dVar10 = 16.0;
        if ((double)(float)piVar1[8] != 0.0) {
          dVar10 = (double)(float)piVar1[8];
        }
        dVar10 = (double)Hero_ComputeTargetScore((double)g_heroRotation.z,dVar10,uVar9,uVar8,iVar2);
        if (local_40 == 0) {
          if (*(char *)(iVar2 + 0x31) == '\0') {
            dVar10 = (double)(float)(dVar10 + 10.0);
          }
          if (((piVar1[7] < 0) ||
              (iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[7]), iVar6 == 0))
             && (dVar10 < dVar11)) {
            dVar11 = dVar10;
            iVar7 = iVar2;
          }
        }
      }
      iVar2 = *(int *)(iVar2 + 0x28);
    } while (iVar2 != 0);
  }
  DAT_0096a670 = iVar7;
  if (iVar7 != 0) {
    iVar7 = collproc::CollLine(local_60,local_50,2,0,0);
    if (iVar7 == 0) {
      g_HeroNearSwingshot = 1;
      DAT_0096a678 = (float)dVar11;
    }
  }
  return;
}



//==== 000a2298  ns=hero  size=0x2c8
// sig: undefined Hero_FindPullTarget(void)
// callers(1): 000a30e0 hero::???_Hero_UpdateWeaponInput
// callees(3): 00057820 collproc::CollLine; 000993d8 hero::Hero_ComputeTargetScore; 00110b70 mobyutil::MB_IsPntInCuboid

undefined4 hero::Hero_FindPullTarget(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  int local_40;
  
  if (g_heroStateType != 0xd) {
    iVar7 = 0;
    DAT_0096a648 = 0;
    dVar11 = 100000000.0;
    if (MobyUpdateChainStart != 0) {
      iVar7 = 0;
      iVar2 = MobyUpdateChainStart;
      do {
        if ((((*(short *)(iVar2 + 0xa6) == 0x2f6) && ((*(ushort *)(iVar2 + 0x34) & 1) == 0)) &&
            (piVar1 = *(int **)(iVar2 + 0x78), *piVar1 == 0)) &&
           (((float)piVar1[8] == 0.0 ||
            (fVar3 = g_heroPosition.x - *(float *)(iVar2 + 0x10),
            fVar4 = g_heroPosition.y - *(float *)(iVar2 + 0x14),
            fVar5 = g_heroPosition.z - *(float *)(iVar2 + 0x18),
            SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) <= (float)piVar1[8])))) {
          uVar9 = 0xbff0000000000000;
          if ((g_heroState == FIRST_PERSON_VIEW) ||
             (uVar10 = 0x3fe0c15240000000, g_heroState == WEAPON_FIRST_PERSON_VIEW)) {
            uVar9 = 0x3fb6571840000000;
            uVar10 = uVar9;
          }
          fVar3 = g_heroRotation.z;
          if (g_heroStateType == 0xf) {
            fVar3 = DAT_0096a25c;
          }
          dVar8 = 30.0;
          if ((double)(float)piVar1[8] != 0.0) {
            dVar8 = (double)(float)piVar1[8];
          }
          dVar8 = (double)Hero_ComputeTargetScore((double)fVar3,dVar8,uVar10,uVar9,iVar2);
          if ((local_40 == 0) &&
             (fVar3 = g_heroPosition.x - *(float *)(iVar2 + 0x10),
             fVar4 = g_heroPosition.y - *(float *)(iVar2 + 0x14),
             4.0 <= SQRT(fVar3 * fVar3 + fVar4 * fVar4))) {
            if (*(char *)(iVar2 + 0x31) == '\0') {
              dVar8 = (double)(float)(dVar8 + 10.0);
            }
            if (((piVar1[7] < 0) ||
                (iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[7]), iVar6 == 0
                )) && (dVar8 < dVar11)) {
              dVar11 = dVar8;
              iVar7 = iVar2;
            }
          }
        }
        iVar2 = *(int *)(iVar2 + 0x28);
      } while (iVar2 != 0);
    }
    if (iVar7 != 0) {
      DAT_0096a658 = *(undefined4 *)(*(int *)(iVar7 + 0x78) + 8);
      DAT_0096a660 = *(undefined4 *)(*(int *)(iVar7 + 0x78) + 4);
      DAT_0096a664 = (float)dVar11;
      DAT_0096a644 = iVar7;
      iVar7 = collproc::CollLine(local_60,local_50,2,0,0);
      if (iVar7 == 0) {
        DAT_0096a648 = 1;
      }
    }
  }
  return DAT_0096a648;
}



//==== 000a2560  ns=hero  size=0x94
// sig: undefined Hero_TransitionToDefault(void)
// callers(9): 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 00286ae0 mobyupdate_unsorted::UpdateMoby_1470; 0028a138 mobyupdate_unsorted::UpdateMoby_1474; 00358ad0 mobyupdate_unsorted::UpdateMoby_38; 003ddfd0 mobyupdate_unsorted::UpdateMoby_615; 004382a8 mobyupdate_unsorted::UpdateMoby_737
// callees(1): 000b72b0 hero::TransitionMovement

uint hero::Hero_TransitionToDefault(void)

{
  uint uVar1;
  
  uVar1 = (uint)g_heroType;
  if (g_heroType < 2) {
    if (g_heroType == 0) {
      uVar1 = TransitionMovement(0,1);
    }
    else {
      uVar1 = TransitionMovement(0x43,1);
    }
  }
  else if (g_heroType < 3) {
    uVar1 = TransitionMovement(0x5a,1);
  }
  else if (g_heroType < 4) {
    uVar1 = TransitionMovement(0x53,1);
  }
  return uVar1;
}



//==== 000a2600  ns=hero  size=0x138
// sig: int Hero_IdleCycleFiringTransition(void)
// callers(1): 000be228 hero::HeroMovement
// callees(3): 0007f45c hero::Hero_GetIdleAnim; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_IdleCycleFiringTransition(void)

{
  int iVar1;
  
  if (((((g_heroState != WALKING) && (g_heroState != STOPPING)) && (g_heroState != STANDING)) ||
      ((DAT_0096bd88 == '\0' || ((int)(animationSpeed * 6.5) <= DAT_00969e9c)))) ||
     ((0.7 <= g_heroPadMagnitude || (DAT_0096bd8b != '\0')))) {
    iVar1 = 0;
  }
  else {
    if (DAT_0096bd88 != '\0') {
      if (((DAT_0096a9e8 == 0) && (g_heroState == STANDING)) &&
         (g_heroMobyPtr->animationId == DAT_0096bf74)) {
        iVar1 = Hero_GetIdleAnim(0);
        Hero_TransAnim(-2.0,iVar1,0);
      }
      DAT_0096bd88 = '\0';
      DAT_0096bd8a = 0;
    }
    DAT_0096a9f4 = 2;
    TransitionMovement(0x23,1);
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000a2750  ns=hero  size=0x28c
// sig: undefined HandleUnderwaterSwimming(void)
// callers(1): 000be228 hero::HeroMovement
// callees(3): 00057820 collproc::CollLine; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback

undefined8 hero::HandleUnderwaterSwimming(void)

{
  int iVar1;
  undefined1 local_40 [16];
  undefined1 local_30 [32];
  
  if (g_heroStateType == 0x11) {
    if (UnlockableItems.o2Mask == '\0') {
      iVar1 = 10000 / ((int)(animationSpeed * 60.5) * 0xf);
      hud::RegisterHUDCallback
                (4,0x753f,&PTR_OxygenHud_Init_007056f8,&PTR_OxygenHud_Update_00705700,
                 &PTR_DrawOxygenMeter_00705730,&g_Oxygen,10000);
    }
    else {
      iVar1 = 0;
    }
    iVar1 = g_Oxygen - iVar1;
    g_Oxygen = 0;
    if (-1 < iVar1) {
      g_Oxygen = iVar1;
    }
    if ((g_Oxygen == 0) &&
       (((g_heroPosition.z <= g_heroWaterZ - 2.0 || (-0.87266463 <= g_heroRotation.y)) ||
        (DAT_00969de8 <= mobyutil::g_FrameTime)))) {
      TransitionMovement(0x6a,1);
      return 1;
    }
    if (g_heroWaterZ + 0.4 < g_heroPosition.z) {
      GameCamera.camUnderWater = 0;
      TransitionMovement(6,1);
      return 1;
    }
  }
  else if ((g_heroState != DEATH_DROWNING) && (g_heroState != UNDERWATER_DAMAGE)) {
    g_Oxygen = 10000;
  }
  if ((g_heroStateType == 0x12) &&
     (iVar1 = collproc::CollLine(local_40,local_30,2,g_heroMobyPtr,0), iVar1 != 0)) {
    if ((UnlockableItems.hydroPack == '\0') || ((g_downButtons & (R1|R2)) == 0)) {
      TransitionMovement(0x33,1);
    }
    else {
      TransitionMovement(0x35,1);
    }
    return 1;
  }
  return 0;
}



//==== 000a2a08  ns=hero  size=0x3fc
// sig: int Hero_SwimSurfTransition(void)
// callers(1): 000be228 hero::HeroMovement
// callees(5): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 0007e3c8 hero::Hero_GetGroundCollTestVecs; 000b72b0 hero::TransitionMovement; 0015d12c sound::PlayMobySound

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_SwimSurfTransition(void)

{
  float fVar1;
  MobyInstance *pMoby;
  int iVar2;
  uint uVar3;
  longlong in_r6;
  int iVar4;
  float afStack_50 [4];
  float afStack_40 [6];
  
  if ((g_heroStateType != 0x16) && (g_heroStateType != 0x15)) {
    if ((g_heroState != HOVERBOARD_WALL_BONK) &&
       ((g_heroState != HOVERBOARD_DYING && (g_heroState != HOVERBOARD_WATER_DYING)))) {
      if (g_heroState == DEATH_DROWNING) {
        return 0;
      }
      iVar2 = 0;
      iVar4 = 0;
      if (DAT_0096afc4 != '\0') {
        if (g_heroStateType == 0x11) {
          if (((DAT_0096bd68 != 1) && (0.0 < DAT_00969de8)) &&
             (g_heroWaterZ - 0.4 < g_heroPosition.z)) {
            iVar4 = 1;
          }
        }
        else if ((g_heroStateType != 0x12) && (g_heroStateType != 3)) {
          fVar1 = 0.2;
          if (0.2 < ABS(DAT_00969dc8) + 0.07) {
            fVar1 = ABS(DAT_00969dc8) + 0.07;
          }
          iVar4 = iVar2;
          if ((ABS(g_heroWaterZ - (g_heroPosition.z + 0.45)) < fVar1) &&
             ((((g_heroStateType != 4 || (DAT_0096a0fe != 0)) && (0.8 < DAT_0096bf84)) &&
              (DAT_00969de8 < 0.0)))) {
            iVar4 = 1;
          }
          if ((g_heroPosition.z < g_heroWaterZ - 0.8) &&
             ((g_heroStateType != 4 || (DAT_0096a0fe != 0)))) {
            iVar4 = 1;
          }
        }
      }
      if (((g_heroState == WATER_JUMP) && (DAT_0096a0fe != 0)) &&
         (g_heroPosition.z < g_heroWaterZ - 0.7)) {
        iVar4 = 1;
      }
      if (((g_heroStateType != 0x11) && (g_heroStateType != 0x12)) &&
         (((g_heroStateType != 7 && ((g_heroStateType != 0x14 && (g_heroState != WATER_JUMP)))) &&
          (worldUpdateTime ==
           (((int)worldUpdateTime >> 4) +
           (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 0xf) != 0)) * 0x10)))) {
        fVar1 = 4.0;
        if (worldUpdateTime ==
            (int)((longlong)((int)worldUpdateTime >> 6) +
                 (ulonglong)((int)worldUpdateTime < 0 && (worldUpdateTime & 0x3f) != 0)) * 0x40) {
          fVar1 = 16.0;
        }
        Hero_GetGroundCollTestVecs
                  (fVar1,1.3,afStack_50,afStack_40,(longlong)((int)worldUpdateTime >> 6),in_r6,0);
        iVar2 = collproc::CollLine(afStack_50,afStack_40,2,g_heroMobyPtr,0);
        if (iVar2 != 0) {
          uVar3 = collproc::CollHotspot();
          g_heroGroundType = (undefined2)uVar3;
          if (((uVar3 & 0xffff) == 0) &&
             (iVar2 = collproc::CollLine(afStack_50,afStack_40,2,g_heroMobyPtr,0), iVar2 == 0)) {
            TransitionMovement(0x34,1);
            return 1;
          }
        }
      }
      if (iVar4 == 0) {
        return 0;
      }
      TransitionMovement(0x37,1);
      pMoby = g_ratchetMoby;
      if (g_heroType == '\x03') {
        if (g_ratchetMoby == (MobyInstance *)0x0) {
          return iVar4;
        }
        (g_ratchetMoby->pos).x = g_heroPosition.x;
        (pMoby->pos).y = g_heroPosition.y;
        (pMoby->pos).z = g_heroPosition.z;
        (pMoby->pos).w = g_heroPosition.w;
        sound::PlayMobySound(3,0,pMoby);
        return iVar4;
      }
      sound::PlayMobySound(3,0,g_heroMobyPtr);
      return iVar4;
    }
  }
  return 0;
}



//==== 000a2e38  ns=hero  size=0x248
// sig: undefined Hero_SurfBob(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(2): 00109af0 mobyutil::Delt; 00109b40 mobyutil::AccelDelt

void hero::Hero_SurfBob(void)

{
  float target;
  double dVar1;
  
  if (((((int)(animationSpeed * 10.5) < g_heroStateTimer) || (DAT_0096a370 < 0.0)) ||
      (DAT_0096bd74 == 0x11)) || (DAT_0096bd80 == 0x11)) {
    if (g_heroState == WATER_SWIMMING) {
      dVar1 = 0.0;
      mobyutil::AccelDelt(0.0,DAT_0071f40c * 0.03,DAT_0071f40c * 0.3,mobyutil::g_FrameTime * 1.5,
                          &DAT_0096a370,0xa2e04,(float *)&DAT_0096a5dc);
      DAT_0096a374 = (float)dVar1;
    }
    else {
      DAT_0096a374 = DAT_0096a374 -
                     (DAT_0071f40c * 0.005 * DAT_0096a370 + DAT_0071f408 * 0.045 * DAT_0096a374);
      if ((ABS(DAT_0096a370) < 0.001) && (DAT_0096a374 < 0.0001)) {
        DAT_0096a374 = 0.0;
      }
    }
  }
  DAT_0096a370 = DAT_0096a370 + DAT_0096a374;
  if (g_heroState == WATER_SWIMMING) {
    if (0.0 < DAT_0096a370) {
      if (0.0 < DAT_0096a374) {
        DAT_0096a374 = 0.0;
      }
      mobyutil::Delt(0.0,mobyutil::g_FrameTime * 0.7,&DAT_0096a370);
    }
  }
  if (g_heroState != DEATH_ICE) {
    target = g_heroWaterZ;
    if (g_heroStateType == 0x16) {
      target = DAT_0096a580;
    }
    mobyutil::AccelDelt(target,DAT_0071f40c * 0.027,DAT_0071f40c * 0.3,0.0,&DAT_0096a37c,0xa2e04,
                        (float *)&DAT_0096a380);
  }
  g_heroPosition.z = DAT_0096a37c + -0.12 + DAT_0096a370;
  return;
}



//==== 000a30e0  ns=hero  size=0x1870
// sig: undefined ???_Hero_UpdateWeaponInput(void)
// callers(1): 000be228 hero::HeroMovement
// callees(17): 0007b310 help::Help_QueueMessage; 00085a54 hero::Hero_CanSwitchGadget; 00099ea8 hero::Hero_PlayFiringAnim; 000a1698 hero::Hero_ThrowWrench; 000a1ff0 hero::Hero_FindSwingshotTarget; 000a2298 hero::Hero_FindPullTarget; 000b72b0 hero::TransitionMovement; 000eb520 mobyattack::Spawn_Moby1475_KaleboRocket; 000f1114 mobyfunc::GetBonePosition; 0011dfe0 pad::PadRingBitsOn; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 0016a8f0 vendor::Spawn_Moby11_Vendor; 004fff60 fastfunc::FastDecTimerS32; 005000b4 fastfunc::FastDecTimerU8; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 000a30bc: '?333Bp' (raw) | 00a1000c: 'None'

bool hero::____Hero_UpdateWeaponInput(void)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  char cVar8;
  undefined1 auVar9 [16];
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  MobyInstance *pMVar16;
  CONTROLLER_INPUT bits;
  PlayerState PVar17;
  undefined2 uVar18;
  ulonglong uVar19;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar20;
  longlong lVar21;
  short sVar26;
  int iVar25;
  int iVar27;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  MobyInstance *pMVar28;
  ulonglong unaff_r26;
  int iVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar30;
  ulonglong unaff_r29;
  ulonglong uVar31;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f27;
  double dVar36;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar1 = uVar19 - 0x1a0;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar19;
  puVar10[0x36] = in_LR;
  puVar10[0x2f] = in_f27;
  puVar10[0x30] = in_f28;
  puVar10[0x31] = in_f29;
  puVar10[0x32] = in_f30;
  puVar10[0x33] = in_f31;
  puVar10[0x23] = unaff_r20;
  puVar10[0x25] = unaff_r22;
  cVar8 = DAT_0096bd8c;
  puVar10[0x2e] = unaff_r31;
  puVar10[0x2d] = unaff_r30;
  puVar10[0x2c] = unaff_r29;
  puVar10[0x2b] = unaff_r28;
  puVar10[0x2a] = unaff_r27;
  puVar10[0x29] = unaff_r26;
  puVar10[0x28] = unaff_r25;
  puVar10[0x27] = unaff_r24;
  puVar10[0x26] = unaff_r23;
  puVar10[0x24] = unaff_r21;
  puVar10[0x22] = unaff_r19;
  iVar23 = DAT_0096ad90;
  bits = DAT_0096ad80;
  iVar15 = g_heroStateTimer;
  if (((cVar8 != '\0') && (g_CurrentWeapon != 0x24)) &&
     ((g_CurrentWeapon != 8 || (g_onMagnerail != 1)))) {
    return false;
  }
  if (g_heroType != '\0') {
    return false;
  }
  if (g_currentWeaponMoby == (MobyInstance *)0x0) {
    return false;
  }
  if (DAT_0096ad94 != 2) {
    return false;
  }
  if (g_CurrentWeapon < 0x12) {
    if (g_CurrentWeapon != 0x11) {
      if (g_CurrentWeapon == 0xf) {
        if ((((g_heroStateType == 0) || (g_heroStateType == 1)) ||
            ((((g_heroStateType == 0xc || ((g_heroStateType == 2 || (g_heroStateType == 4)))) ||
              (g_heroStateType == 5)) ||
             ((g_heroStateType == 0xf || (g_heroState == WEAPON_FIRST_PERSON_VIEW)))))) &&
           (g_currentWeaponMoby != (MobyInstance *)0x0)) {
          pvVar6 = g_currentWeaponMoby->pVar;
          if ((((g_downButtons & DAT_0096ad80) != 0) &&
              (puVar10[0x20] = (longlong)(int)(animationSpeed * 5.5),
              *(int *)((int)puVar10 + 0x104) < iVar23)) || ((g_buttonsPressedThisFrame & bits) != 0)
             ) {
            if ((&DAT_00737d3e)[g_CurrentWeapon * 0xc] == 0) {
              uVar24 = 1;
            }
            else {
              uVar24 = (&currentAmmoArray.field0_0x0)[g_CurrentWeapon];
            }
            if (uVar24 != 0) {
              if (DAT_0096bd88 == '\0') {
                Hero_PlayFiringAnim();
              }
              goto LAB_000a46e0;
            }
          }
          if ((g_downButtons & bits) != 0) {
            if ((&DAT_00737d3e)[g_CurrentWeapon * 0xc] == 0) {
              uVar24 = 1;
            }
            else {
              uVar24 = (&currentAmmoArray.field0_0x0)[g_CurrentWeapon];
            }
            if ((uVar24 == 0) &&
               (iVar23 = sound::IsMobyPlayingSound(g_currentWeaponMoby,*(int *)((int)pvVar6 + 0xc)),
               iVar23 == 0)) {
              iVar23 = sound::PlayMobySound(0,0,g_currentWeaponMoby);
              *(int *)((int)pvVar6 + 0xc) = iVar23;
            }
          }
        }
        goto LAB_000a46e0;
      }
      if (g_CurrentWeapon == 0xd) goto LAB_000a46e0;
      if (g_CurrentWeapon == 0xc) {
        Hero_FindSwingshotTarget();
        Hero_FindPullTarget();
        bVar2 = g_framesNotGrounded != 0;
        puVar10[0x20] = (longlong)(int)(animationSpeed * 5.5);
        iVar23 = *(int *)((int)puVar10 + 0x104);
        if (bVar2) {
          puVar10[0x20] = (longlong)(int)(animationSpeed * 8.5);
          iVar23 = *(int *)((int)puVar10 + 0x104);
        }
        if ((((g_heroStateType == 0) || (g_heroStateType == 1)) ||
            ((g_heroStateType == 4 ||
             ((((g_heroStateType == 2 || (g_heroStateType == 0xf)) || (g_heroStateType == 5)) ||
              (g_heroState == WEAPON_FIRST_PERSON_VIEW)))))) &&
           ((iVar22 = pad::PadRingBitsOn(bits,iVar23,(int *)0x0), iVar23 = DAT_0096ad90, iVar22 != 0
            || (((g_downButtons & bits) != 0 &&
                (puVar10[0x20] = (longlong)(int)(animationSpeed * 15.5),
                *(int *)((int)puVar10 + 0x104) < iVar23)))))) {
          if ((g_HeroNearSwingshot != 0) && (DAT_0096a648 != 0)) {
            if (DAT_0096a664 <= DAT_0096a678) {
              g_HeroNearSwingshot = 0;
            }
            else {
              DAT_0096a648 = 0;
            }
          }
          if (((g_HeroNearSwingshot == 0) || (g_SwingshotReleasedTimer != 0)) ||
             (g_heroState == SWINGING_YELLOW_SWINGSHOT)) {
            if ((DAT_0096a648 != 0) && (g_SwingshotReleasedTimer == 0)) {
              TransitionMovement(0x24,1);
            }
          }
          else {
            TransitionMovement(0x2c,1);
          }
        }
        goto LAB_000a46e0;
      }
      if (g_CurrentWeapon == 0xb) goto LAB_000a46e0;
      if (g_CurrentWeapon != 10) {
        if (g_CurrentWeapon == 8) {
          if (((g_heroStateType == 0) || (g_heroStateType == 1)) ||
             ((g_heroStateType == 4 && (g_DustHoverState != 0)))) {
            if (DAT_0096afca == '\0') {
              puVar10[0x20] = (longlong)(int)(animationSpeed * 7.5);
              iVar22 = pad::PadRingBitsOn(bits,*(int *)((int)puVar10 + 0x104),
                                          (int *)(puVar10 + 0x10));
              iVar23 = g_heroStateTimer;
              if ((((iVar22 != 0) && (g_currentWeaponMoby != (MobyInstance *)0x0)) &&
                  ((uint)LZCOUNT(g_currentWeaponMoby->oClass - 0x47) >> 5 != 0)) &&
                 (g_currentWeaponMoby->state == '\0')) {
                if (((g_downButtons & (R1|R2)) == 0) &&
                   (((g_heroState != FIRST_PERSON_VIEW && (g_heroState != WEAPON_FIRST_PERSON_VIEW))
                    || (puVar10[0x20] = (longlong)(int)(animationSpeed * 20.5),
                       iVar23 <= *(int *)((int)puVar10 + 0x104))))) {
                  if (g_onMagnerail == 1) {
                    TransitionMovement(0x70,1);
                  }
                  else {
                    TransitionMovement(0x13,1);
                  }
                }
                else {
                  iVar23 = g_heroStateTimer;
                  if (((g_heroState == FIRST_PERSON_VIEW) ||
                      (g_heroState == WEAPON_FIRST_PERSON_VIEW)) &&
                     (puVar10[0x20] = (longlong)(int)(animationSpeed * 20.5),
                     *(int *)((int)puVar10 + 0x104) < iVar23)) {
                    Hero_ThrowWrench();
                  }
                  else {
                    TransitionMovement(0x15,1);
                  }
                }
              }
            }
          }
          else if ((((((g_heroState != GLIDING) && (g_heroState != MOVEMENT_JUMP)) &&
                     (g_heroState != FALLING)) &&
                    ((g_heroState != NEUTRAL_JUMP &&
                     ((g_heroState != DOUBLE_JUMP || (g_heroAnimFrame <= 32.0)))))) &&
                   (((g_heroState != FLIP_JUMP || ((DAT_0096a130 == 3 || (g_heroAnimFrame <= 18.0)))
                     ) && ((((g_heroState != FLIP_JUMP ||
                             ((DAT_0096a130 != 3 || (g_heroAnimFrame <= 20.0)))) &&
                            (g_heroState != DISENGAGE_YELLOW_SWINGSHOT)) &&
                           (g_heroState != WALL_JUMP)))))) ||
                  (puVar10[0x20] = (longlong)(int)(animationSpeed * 10.5), PVar17 = g_heroState,
                  iVar15 <= *(int *)((int)puVar10 + 0x104))) {
            iVar23 = g_heroStateTimer;
            if (g_heroStateType == 6) {
              iVar22 = DAT_0096a740 * 0x2c;
              if ((((g_heroState == CROUCH_WRENCH_THROW) &&
                   (puVar10[0x20] = (longlong)(int)(animationSpeed * 30.5),
                   *(int *)((int)puVar10 + 0x104) < iVar23)) && (DAT_0096a77c == 0)) &&
                 ((puVar10[0x20] = (longlong)*(int *)(iVar22 + 0x72318c),
                  (float)(longlong)puVar10[0x20] <= g_heroAnimFrame &&
                  ((g_downButtons & (R1|R2)) != 0)))) {
                puVar10[0x20] = (longlong)(int)(animationSpeed * 15.5);
                iVar23 = pad::PadRingBitsOn(bits,*(int *)((int)puVar10 + 0x104),(int *)0x0);
                if (iVar23 != 0) {
                  TransitionMovement(0x15,1);
                  goto LAB_000a46e0;
                }
              }
              if ((DAT_0096a77c == 0) &&
                 (puVar10[0x20] = (longlong)*(int *)(iVar22 + 0x72318c),
                 (float)(longlong)puVar10[0x20] <= g_heroAnimFrame)) {
                iVar23 = fastfunc::FastDoubleToInt();
                iVar23 = (iVar23 - *(int *)(iVar22 + 0x723188)) * 2;
                if (iVar23 < 1) {
                  iVar23 = 1;
                }
                puVar10[0x20] = (longlong)(int)(animationSpeed * 15.5);
                if (*(int *)((int)puVar10 + 0x104) < iVar23) {
                  puVar10[0x20] = (longlong)(int)(animationSpeed * 15.5);
                  iVar23 = *(int *)((int)puVar10 + 0x104);
                }
                if ((DAT_0096afca == '\0') &&
                   (iVar23 = pad::PadRingBitsOn(bits,iVar23,(int *)0x0), iVar23 != 0)) {
                  if ((g_downButtons & (R1|R2)) == 0) {
                    if (g_onMagnerail == 1) {
                      TransitionMovement(0x70,1);
                    }
                    else {
                      TransitionMovement(0x13,1);
                    }
                  }
                  else {
                    TransitionMovement(0x15,1);
                  }
                }
              }
            }
          }
          else {
            bVar2 = g_heroState == FLIP_JUMP;
            puVar10[0x20] = (longlong)(int)(animationSpeed * 10.5);
            iVar23 = *(int *)((int)puVar10 + 0x104);
            if ((bVar2) || (PVar17 == DOUBLE_JUMP)) {
              puVar10[0x20] = (longlong)(int)(animationSpeed * 18.5);
              iVar23 = *(int *)((int)puVar10 + 0x104);
            }
            iVar23 = pad::PadRingBitsOn(bits,iVar23,(int *)0x0);
            if (iVar23 != 0) {
              if ((((DAT_0096a0fe == 0) && (0.1 < g_heroGroundDist)) ||
                  ((DAT_0096a0fe != 0 && (0.57 < g_heroGroundDist)))) ||
                 ((g_heroState == FALLING && (0.57 < g_heroGroundDist)))) {
                if (DAT_0096a2dc == 0) {
                  TransitionMovement(0x14,1);
                }
              }
              else if (DAT_0096afca == '\0') {
                TransitionMovement(0x13,1);
              }
            }
          }
        }
        goto LAB_000a46e0;
      }
    }
  }
  else {
    if (0x19 < g_CurrentWeapon) {
      if (g_CurrentWeapon < 0x21) {
        if (0x1e < g_CurrentWeapon) {
          if (g_CurrentWeapon < 0x20) {
            iVar23 = Hero_CanSwitchGadget();
            if (iVar23 != 0) {
              puVar10[0x20] = (longlong)(int)(animationSpeed * 7.5);
              iVar23 = pad::PadRingBitsOn(bits,*(int *)((int)puVar10 + 0x104),(int *)0x0);
              pMVar16 = g_ratchetMoby;
              if ((((iVar23 != 0) && (g_equippedItem == HOLOGUISE)) &&
                  (g_currentWeaponMoby->oClass == HOLOGUISE_01E3)) && (DAT_0096bfbe == 0)) {
                if (g_heroType == '\x03') {
                  if (g_ratchetMoby != (MobyInstance *)0x0) {
                    (g_ratchetMoby->pos).x = g_heroPosition.x;
                    (pMVar16->pos).y = g_heroPosition.y;
                    (pMVar16->pos).z = g_heroPosition.z;
                    (pMVar16->pos).w = g_heroPosition.w;
                    sound::PlayMobySound(0x18,0,pMVar16);
                  }
                }
                else {
                  sound::PlayMobySound(0x18,0,g_heroMobyPtr);
                }
                DAT_0096bfbe = 0x12;
                DAT_0096bfbc = 1;
              }
            }
          }
          else if (((g_heroStateType == 0) || (g_heroStateType == 1)) ||
                  ((g_heroStateType == 2 || ((g_heroStateType == 4 || (g_heroStateType == 5)))))) {
            puVar10[0x20] = (longlong)(int)(animationSpeed * 8.5);
            iVar23 = pad::PadRingBitsOn(bits,*(int *)((int)puVar10 + 0x104),(int *)0x0);
            if (iVar23 != 0) {
              vendor::Spawn_Moby11_Vendor(0);
            }
          }
        }
      }
      else if (g_CurrentWeapon == 0x24) {
        if (((DAT_0096a5ae != '\0') && (CHAR_ARRAY_00a1000c._1048_2_ == 0)) &&
           (CHAR_ARRAY_00a0feec._216_2_ == 0)) {
          sVar26 = DAT_0096a5aa + 1;
          DAT_0096a5aa = sVar26;
          puVar10[0x20] = (longlong)(int)(animationSpeed * 20.5);
          puVar10[0x20] = (longlong)*(int *)((int)puVar10 + 0x104);
          puVar10[0x20] = (longlong)(int)((float)(longlong)puVar10[0x20] * 60.0);
          if (*(int *)((int)puVar10 + 0x104) < (int)sVar26) {
            help::Help_QueueMessage(STR_TO_FIRE_A_ROCKET_0x3E81,0x83);
          }
        }
        pMVar16 = g_currentWeaponMoby;
        uVar31 = ZEXT48(g_currentWeaponMoby);
        if (g_currentWeaponMoby != (MobyInstance *)0x0) {
          iVar23 = fastfunc::FastDecTimerU8(&DAT_0096a5af);
          if ((iVar23 == 2) && (DAT_0096a5ae != '\0')) {
            DAT_0096a5ae = DAT_0096a5ae + -1;
          }
          if ((DAT_0096a5ae != '\0') && (DAT_0096a5af == '\0')) {
            dVar39 = 7.5;
            puVar10[0x20] = (longlong)(int)(animationSpeed * 7.5);
            iVar23 = pad::PadRingBitsOn(bits,*(int *)((int)puVar10 + 0x104),(int *)0x0);
            if (iVar23 != 0) {
              pMVar30 = (MobyInstance *)0x0;
              if (g_heroBoardMoby != 0) {
                iVar29 = 0;
                dVar38 = 9999999.0;
                iVar23 = *(int *)(g_heroBoardMoby + 0x78);
                iVar22 = 0;
                do {
                  fVar4 = g_heroRotation.z;
                  piVar14 = (int *)(iVar23 + 0x2c + iVar22);
                  if (*piVar14 != -1) {
                    pMVar28 = MobyInstance + *piVar14;
                    fVar3 = (pMVar28->pos).x - g_heroPosition.x;
                    fVar5 = (pMVar28->pos).y - g_heroPosition.y;
                    fVar12 = ABS(fVar3);
                    fVar11 = ABS(fVar5);
                    *(float *)(puVar10 + 0x13) = fVar3;
                    *(float *)((int)puVar10 + 0x9c) = fVar5;
                    *(float *)(puVar10 + 0x14) = fVar12 - fVar11;
                    dVar37 = 0.0;
                    uVar20 = (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1c) & 8 |
                             (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1e) & 2 |
                             (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1d) & 4;
                    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
                    fVar3 = *(float *)((uint)(uVar20 << 2) | 0x735904);
                    if (0.0 <= *(float *)(puVar10 + 0x14)) {
                      fVar12 = ABS(*(float *)((int)puVar10 + 0x9c));
                      fVar11 = ABS(*(float *)(puVar10 + 0x13));
                    }
                    dVar36 = 0.7853981852531433;
                    dVar32 = dVar37;
                    if (0.0 < fVar11) {
                      iVar25 = 4;
                      fVar11 = (fVar12 - fVar11) / (fVar12 + fVar11);
                      lVar21 = lVar1;
                      do {
                        iVar25 = iVar25 + -1;
                        *(float *)((int)lVar21 + 0xc4) = fVar11;
                        lVar21 = lVar21 + 4;
                      } while (iVar25 != 0);
                      fVar11 = fVar11 * fVar11;
                      lVar21 = uVar19 - 400;
                      iVar25 = 4;
                      fVar12 = fVar11 * fVar11;
                      *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar11;
                      *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar12;
                      *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar12 * fVar11;
                      do {
                        iVar25 = iVar25 + -1;
                        *(float *)((int)lVar21 + 0xc4) =
                             *(float *)((int)lVar21 + 0xb4) * fVar12 * fVar12;
                        lVar21 = lVar21 + 4;
                      } while (iVar25 != 0);
                      iVar25 = 0;
                      iVar27 = 8;
                      lVar21 = lVar1;
                      do {
                        iVar27 = iVar27 + -1;
                        pfVar13 = (float *)((int)&DAT_007358e0 + iVar25);
                        iVar25 = iVar25 + 4;
                        *(float *)((int)lVar21 + 0xc4) = *(float *)((int)lVar21 + 0xc4) * *pfVar13;
                        lVar21 = lVar21 + 4;
                      } while (iVar27 != 0);
                      iVar25 = 8;
                      lVar21 = lVar1;
                      do {
                        iVar25 = iVar25 + -1;
                        iVar27 = (int)lVar21;
                        lVar21 = lVar21 + 4;
                        dVar32 = (double)(float)(dVar32 + (double)*(float *)(iVar27 + 0xc4));
                      } while (iVar25 != 0);
                      dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar5 + fVar3);
                    }
                    dVar32 = (double)fastfunc::FastSubRots(fVar4,(float)dVar32);
                    if (dVar32 <= dVar36) {
                      fVar4 = g_heroPosition.x - (pMVar28->pos).x;
                      fVar3 = g_heroPosition.y - (pMVar28->pos).y;
                      fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
                      fVar3 = (pMVar28->pos).z - g_heroPosition.z;
                      dVar34 = ABS((double)fVar3);
                      *(float *)(puVar10 + 0x12) = fVar3;
                      dVar33 = ABS((double)fVar4);
                      *(float *)((int)puVar10 + 0x8c) = fVar4;
                      *(float *)((int)puVar10 + 0x94) = (float)(dVar33 - dVar34);
                      uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
                               (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
                               (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
                      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
                      fVar4 = *(float *)((uint)(uVar20 << 2) | 0x735904);
                      if (dVar37 <= (double)*(float *)((int)puVar10 + 0x94)) {
                        dVar33 = ABS((double)*(float *)(puVar10 + 0x12));
                        dVar34 = ABS((double)*(float *)((int)puVar10 + 0x8c));
                      }
                      dVar35 = dVar37;
                      if (dVar37 < dVar34) {
                        iVar25 = 4;
                        fVar5 = (float)(dVar33 - dVar34) / (float)(dVar33 + dVar34);
                        lVar21 = lVar1;
                        do {
                          iVar25 = iVar25 + -1;
                          *(float *)((int)lVar21 + 0xa4) = fVar5;
                          lVar21 = lVar21 + 4;
                        } while (iVar25 != 0);
                        fVar5 = fVar5 * fVar5;
                        lVar21 = uVar19 - 400;
                        iVar25 = 4;
                        fVar11 = fVar5 * fVar5;
                        *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar5;
                        *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar11;
                        *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar11 * fVar5;
                        do {
                          iVar25 = iVar25 + -1;
                          *(float *)((int)lVar21 + 0xa4) =
                               *(float *)((int)lVar21 + 0x94) * fVar11 * fVar11;
                          lVar21 = lVar21 + 4;
                        } while (iVar25 != 0);
                        iVar25 = 0;
                        iVar27 = 8;
                        lVar21 = lVar1;
                        do {
                          iVar27 = iVar27 + -1;
                          pfVar13 = (float *)((int)&DAT_007358e0 + iVar25);
                          iVar25 = iVar25 + 4;
                          *(float *)((int)lVar21 + 0xa4) = *(float *)((int)lVar21 + 0xa4) * *pfVar13
                          ;
                          lVar21 = lVar21 + 4;
                        } while (iVar27 != 0);
                        iVar25 = 8;
                        lVar21 = lVar1;
                        dVar33 = dVar37;
                        do {
                          iVar25 = iVar25 + -1;
                          iVar27 = (int)lVar21;
                          lVar21 = lVar21 + 4;
                          dVar33 = (double)(float)(dVar33 + (double)*(float *)(iVar27 + 0xa4));
                        } while (iVar25 != 0);
                        dVar35 = (double)((float)(dVar33 + dVar36) * fVar3 + fVar4);
                      }
                      dVar37 = (double)fastfunc::FastSubRots((float)dVar35,(float)dVar37);
                      if (dVar37 <= dVar36) {
                        fVar4 = (pMVar28->pos).x - g_heroPosition.x;
                        fVar3 = (pMVar28->pos).y - g_heroPosition.y;
                        dVar36 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
                        dVar37 = (double)((float)(dVar36 + (double)((float)(dVar32 * dVar36) * 2.0))
                                         + (float)(dVar36 * dVar37) * 2.0);
                        if (dVar37 < dVar38 || pMVar30 == (MobyInstance *)0x0) {
                          dVar38 = dVar37;
                          pMVar30 = pMVar28;
                        }
                      }
                    }
                  }
                  iVar29 = iVar29 + 1;
                  iVar22 = iVar22 + 4;
                } while (iVar29 < 5);
              }
              puVar10[0x20] = (longlong)(int)((double)animationSpeed * dVar39);
              uVar7 = *(undefined4 *)((int)puVar10 + 0x104);
              *(undefined4 *)(puVar10 + 0x1e) = uVar7;
              *(undefined4 *)((int)puVar10 + 0xf4) = uVar7;
              *(undefined4 *)(puVar10 + 0x1f) = uVar7;
              *(undefined4 *)((int)puVar10 + 0xfc) = uVar7;
              auVar9 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xff;
              cVar8 = storeVectorElementByteIndexed
                                (auVar9 | auVar9 << 8 | auVar9 << 0x10 | auVar9 << 0x18 |
                                 auVar9 << 0x20 | auVar9 << 0x28 | auVar9 << 0x30 | auVar9 << 0x38 |
                                 auVar9 << 0x40 | auVar9 << 0x48 | auVar9 << 0x50 | auVar9 << 0x58 |
                                 auVar9 << 0x60 | auVar9 << 0x68 | auVar9 << 0x70 | auVar9 << 0x78,
                                 0xbc,uVar31);
              pMVar16->setByGroup = cVar8;
              fVar4 = animationSpeed;
              puVar10[0x20] = (longlong)(int)(animationSpeed * 50.5);
              uVar7 = *(undefined4 *)((int)puVar10 + 0x104);
              *(undefined4 *)(puVar10 + 0x1e) = uVar7;
              *(undefined4 *)((int)puVar10 + 0xf4) = uVar7;
              *(undefined4 *)(puVar10 + 0x1f) = uVar7;
              *(undefined4 *)((int)puVar10 + 0xfc) = uVar7;
              auVar9 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                       (undefined1  [16])0xff;
              DAT_0096a5af = storeVectorElementByteIndexed
                                       (auVar9 | auVar9 << 8 | auVar9 << 0x10 | auVar9 << 0x18 |
                                        auVar9 << 0x20 | auVar9 << 0x28 | auVar9 << 0x30 |
                                        auVar9 << 0x38 | auVar9 << 0x40 | auVar9 << 0x48 |
                                        auVar9 << 0x50 | auVar9 << 0x58 | auVar9 << 0x60 |
                                        auVar9 << 0x68 | auVar9 << 0x70 | auVar9 << 0x78,0x8cf,
                                        0x969ce0);
              if (CHAR_ARRAY_00a0feec._216_2_ != -1) {
                CHAR_ARRAY_00a0feec._216_2_ = CHAR_ARRAY_00a0feec._216_2_ + 1;
              }
              puVar10[0x20] = (longlong)update::g_GameFrameCount;
              uVar18 = CHAR_ARRAY_00a0feec._218_2_;
              puVar10[0x20] = (longlong)(int)(fVar4 * ((float)(longlong)puVar10[0x20] + 0.5));
              if ((int)(uint)(ushort)uVar18 < *(int *)((int)puVar10 + 0x104) / 600) {
                puVar10[0x20] = (longlong)update::g_GameFrameCount;
                puVar10[0x20] =
                     (longlong)(int)(animationSpeed * ((float)(longlong)puVar10[0x20] + 0.5));
                iVar23 = *(int *)((int)puVar10 + 0x104);
                sVar26 = (short)(iVar23 >> 0x1f);
                CHAR_ARRAY_00a0feec._218_2_ =
                     ((short)(iVar23 / 600) + sVar26) -
                     ((short)((short)(iVar23 / 0x2580000) + sVar26) >> 0xf);
              }
              CHAR_ARRAY_00a0feec._220_4_ =
                   CHAR_ARRAY_00a0feec._220_4_ | 1 << (Level & 0x3f) | 0x80000000;
              sound::PlayMobySound(0,0,pMVar16);
              mobyfunc::GetBonePosition(uVar31,0,uVar19 - 0x130);
              mobyattack::Spawn_Moby1475_KaleboRocket
                        ((double)g_heroRotation.z,(double)g_heroRotation.y,uVar31,uVar19 - 0x130,
                         pMVar30);
            }
          }
        }
      }
      goto LAB_000a46e0;
    }
    if (g_CurrentWeapon < 0x15) {
      if (g_CurrentWeapon < 0x13) {
        if ((((g_heroStateType == 0) || (g_heroStateType == 1)) ||
            ((g_heroStateType == 4 && (g_DustHoverState != 0)))) &&
           (g_heroState != FIRST_PERSON_VIEW)) {
          puVar10[0x20] = (longlong)(int)(animationSpeed * 10.5);
          iVar22 = *(int *)((int)puVar10 + 0x104);
          if (iVar23 < *(int *)((int)puVar10 + 0x104)) {
            iVar22 = iVar23;
          }
          iVar23 = pad::PadRingBitsOn(bits,iVar22,(int *)(puVar10 + 0x11));
          if (((iVar23 != 0) && (g_currentWeaponMoby != (MobyInstance *)0x0)) &&
             (TransitionMovement(0x20,1), g_currentWeaponMoby != (MobyInstance *)0x0)) {
            sound::PlayMobySound(0,0,g_currentWeaponMoby);
          }
        }
        goto LAB_000a46e0;
      }
      if (g_CurrentWeapon < 0x14) goto LAB_000a46e0;
    }
    else {
      if (g_CurrentWeapon < 0x16) {
        if ((g_currentWeaponMoby != (MobyInstance *)0x0) &&
           ((g_buttonsPressedThisFrame & DAT_0096ad80) != 0)) {
          Hero_PlayFiringAnim();
        }
        goto LAB_000a46e0;
      }
      if (g_CurrentWeapon < 0x18) goto LAB_000a46e0;
    }
  }
  if (((g_heroStateType != 0) || (g_heroState == WEAPON_FIRST_PERSON_VIEW)) &&
     (g_heroStateType != 1)) {
    if ((((g_heroStateType != 0xc) && (g_heroStateType != 5)) &&
        ((g_heroStateType != 0xf && ((g_heroStateType != 4 || (DAT_0096a18c == 0)))))) &&
       ((g_heroState != THROWING_ITEM || (g_heroAnimFrame <= 25.0)))) goto LAB_000a46e0;
  }
  if (DAT_0096bd88 == '\0') {
    puVar10[0x20] = (longlong)(int)(animationSpeed * 7.5);
    iVar22 = *(int *)((int)puVar10 + 0x104);
    if (iVar23 < *(int *)((int)puVar10 + 0x104)) {
      iVar22 = iVar23;
    }
    iVar22 = pad::PadRingBitsOn(bits,iVar22,(int *)((int)puVar10 + 0x84));
    if ((iVar22 != 0) ||
       ((((g_downButtons & CIRCLE) != 0 &&
         (puVar10[0x20] = (longlong)(int)(animationSpeed * 8.5),
         *(int *)((int)puVar10 + 0x104) < iVar23)) &&
        (puVar10[0x20] = (longlong)(int)(animationSpeed * 17.5),
        iVar23 < *(int *)((int)puVar10 + 0x104))))) {
      if ((&DAT_00737d3e)[g_CurrentWeapon * 0xc] == 0) {
        uVar24 = 1;
      }
      else {
        uVar24 = (&currentAmmoArray.field0_0x0)[g_CurrentWeapon];
      }
      if (uVar24 == 0) {
        if (g_currentWeaponMoby != (MobyInstance *)0x0) {
          sound::PlayMobySound(0,0,g_currentWeaponMoby);
        }
      }
      else if (((g_heroStateType == 0xc) || (g_heroStateType == 0)) ||
              ((g_heroState == STOPPING || ((g_heroStateType == 1 && (g_heroPadMagnitude < 0.7))))))
      {
        TransitionMovement(0x23,1);
      }
      else {
        Hero_PlayFiringAnim();
      }
    }
  }
LAB_000a46e0:
  if (g_heroStateTimer == iVar15) {
    iVar23 = -1;
    if (DAT_0096ae84 == 2) {
      iVar23 = DAT_0096ae88;
    }
    if ((((iVar23 == 3) && (g_heroState != THRUSTER_PACK_HOVER)) &&
        ((g_onMagnerail == 0 || (UnlockableItems.magneboots == '\0')))) && (g_hasClank == 0)) {
      fastfunc::FastDecTimerS32(&DAT_00a1a840);
      if (DAT_00a1a840 != 0) {
        if ((((g_heroStateType == 0) || (g_heroStateType == 1)) ||
            ((g_heroStateType == 0xc ||
             (((g_heroStateType == 2 || (g_heroStateType == 4)) && (g_framesGroundedCnt != 0))))))
           && (((g_downButtons & R1) != 0 && ((g_buttonsPressedThisFrame & R1) != 0)))) {
          TransitionMovement(0x81,1);
        }
      }
      if (((g_buttonsPressedThisFrame & R1) != 0) && (g_heroState != THRUSTER_PACK_HOVER)) {
        puVar10[0x20] = (longlong)(int)(animationSpeed * 30.5);
        uVar7 = *(undefined4 *)((int)puVar10 + 0x104);
        *(undefined4 *)(puVar10 + 0x1e) = uVar7;
        *(undefined4 *)((int)puVar10 + 0xf4) = uVar7;
        *(undefined4 *)(puVar10 + 0x1f) = uVar7;
        *(undefined4 *)((int)puVar10 + 0xfc) = uVar7;
        auVar9 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        DAT_00a1a840 = storeVectorElementWordIndexed
                                 (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,
                                  0xa1a840);
      }
    }
    else if ((((g_heroState != WRENCH_ATTACK) && (g_heroState != THRUSTER_PACK_HOVER)) &&
             (g_heroState != CROUCH_WRENCH_THROW)) && (g_heroState != TAKING_DAMAGE)) {
      DAT_0096bfaa = 0;
    }
  }
  return g_heroStateTimer < iVar15;
}



//==== 000a4950  ns=hero  size=0xe4
// sig: int Hero_JumpOrSnapJumpCheck(int lookback, int noJump)
// callers(1): 000be228 hero::HeroMovement
// callees(4): 000a1e78 hero::Hero_GetSnapJumpSnapWindow; 000b72b0 hero::TransitionMovement; 0011dfe0 pad::PadRingBitsOn; 0011e0a4 pad::PadRingCoincidentBitsOn

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_JumpOrSnapJumpCheck(int lookback,int noJump)

{
  int iVar1;
  int aiStack_20 [4];
  
  iVar1 = pad::PadRingBitsOn(0x40,lookback,aiStack_20);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = Hero_GetSnapJumpSnapWindow();
    if ((((g_downButtons & (R1|R2)) == 0) || (iVar1 < 1)) ||
       (iVar1 = pad::PadRingCoincidentBitsOn(0x40,0x1f000,lookback + iVar1,iVar1), iVar1 == 0)) {
      if (noJump == 0) {
        TransitionMovement(7,1);
        iVar1 = 1;
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      TransitionMovement(0xb,1);
      iVar1 = 1;
    }
  }
  return iVar1;
}



//==== 000a4a60  ns=hero  size=0x3bc
// sig: undefined Hero_UpdateWalkAnim(void)
// callers(1): 000be228 hero::HeroMovement
// callees(1): 00085300 hero::Hero_TransAnim

void hero::Hero_UpdateWalkAnim(void)

{
  bool bVar1;
  float fVar2;
  MobyClass *pMVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = DAT_0096bd68;
  if (g_heroType == '\x03') {
    g_heroAnimSpeed = DAT_00969e40 * 54.0;
    if (g_heroAnimSpeed < 0.7) {
      g_heroAnimSpeed = 0.7;
    }
  }
  else if (g_heroType == '\x01') {
    g_heroAnimSpeed = DAT_00969e40 * 90.0;
    if (g_heroAnimSpeed < 0.5) {
      g_heroAnimSpeed = 0.5;
    }
  }
  else {
    if (((int)(animationSpeed * 4.5) < DAT_00969e80) && (DAT_0096a09c == 0)) {
      iVar4 = DAT_0096bd68 * 0x10;
      bVar1 = g_storedNeutralSpeed < *(float *)(&DAT_00723308 + iVar4) * mobyutil::g_FrameTime;
      if (((bVar1) ||
          (*(float *)(&DAT_0072330c + iVar4) * mobyutil::g_FrameTime < g_storedNeutralSpeed)) &&
         ((int)(animationSpeed * 4.5) < DAT_00969e80)) {
        if (bVar1) {
          fVar2 = *(float *)(&DAT_00723308 + iVar4);
          while (g_storedNeutralSpeed < fVar2 * mobyutil::g_FrameTime) {
            DAT_0096bd68 = DAT_0096bd68 - 1;
            fVar2 = *(float *)(&DAT_00723308 + DAT_0096bd68 * 0x10);
          }
        }
        else {
          fVar2 = *(float *)(&DAT_0072330c + iVar4);
          while (fVar2 * mobyutil::g_FrameTime < g_storedNeutralSpeed) {
            DAT_0096bd68 = DAT_0096bd68 + 1;
            fVar2 = *(float *)(&DAT_0072330c + DAT_0096bd68 * 0x10);
          }
        }
        uVar6 = 0;
        if (-1 < (int)DAT_0096bd68) {
          uVar6 = DAT_0096bd68;
        }
        DAT_0096bd68 = 1;
        if ((int)uVar6 < 2) {
          DAT_0096bd68 = uVar6;
        }
        if (uVar7 != DAT_0096bd68) {
          pMVar3 = g_heroMobyPtr->pClass;
          iVar4 = (int)(((ulonglong)DAT_0096bd68 & 0x3fffffff) << 2);
          iVar5 = ((uint)(byte)g_heroMobyPtr->animationFrame *
                  (uint)*(byte *)(*(int *)(&pMVar3[1].pakcet_cnt_0 + iVar4) + 0x10)) /
                  (uint)*(byte *)(*(int *)(&pMVar3[1].pakcet_cnt_0 + uVar7 * 4) + 0x10) +
                  *(int *)(iVar4 + 0x723328 + uVar7 * 8);
          uVar7 = (uint)*(byte *)(*(int *)(&pMVar3[1].pakcet_cnt_0 + iVar4) + 0x10);
          Hero_TransAnim((float)(longlong)(int)(animationSpeed * 8.5),DAT_0096bd68 + 3,
                         iVar5 - (iVar5 / (int)uVar7) * uVar7);
        }
      }
    }
    if ((int)DAT_0096bd68 < 1) {
      if (-1 < (int)DAT_0096bd68) {
        g_heroAnimSpeed = g_storedNeutralSpeed * 157.0;
        if (g_heroAnimSpeed < 0.6) {
          g_heroAnimSpeed = 0.6;
        }
        if (4.0 < g_heroAnimSpeed) {
          g_heroAnimSpeed = 4.0;
        }
      }
    }
    else if ((int)DAT_0096bd68 < 2) {
      g_heroAnimSpeed = g_storedNeutralSpeed * 14.0;
      if (g_heroAnimSpeed < 0.6) {
        g_heroAnimSpeed = 0.6;
      }
      if (2.2 < g_heroAnimSpeed) {
        g_heroAnimSpeed = 2.2;
      }
    }
  }
  return;
}



//==== 000a4e1c  ns=hero  size=0x80
// sig: undefined ???_Hero_CleanupAttachedMobys(void)
// callers(1): 000be228 hero::HeroMovement
// callees(1): 000efb38 mobyfunc::DeleteMoby

void hero::____Hero_CleanupAttachedMobys(void)

{
  if (DAT_0096b2f4 != (MobyInstance *)0x0) {
    mobyfunc::DeleteMoby(DAT_0096b2f4);
    DAT_0096b2f4 = (MobyInstance *)0x0;
  }
  if (DAT_0096ae60 != 0) {
    *(ushort *)(DAT_0096ae60 + 0x34) = *(ushort *)(DAT_0096ae60 + 0x34) & 0xffbe;
  }
  if (DAT_0096ae64 != 0) {
    *(ushort *)(DAT_0096ae64 + 0x34) = *(ushort *)(DAT_0096ae64 + 0x34) & 0xffbe;
  }
  return;
}



//==== 000a4eb8  ns=hero  size=0x3dc
// sig: int Hero_GetSpecialIdle(int * idle)
// callers(1): 000be228 hero::HeroMovement
// callees(2): 00057820 collproc::CollLine; 000fcbe8 mobyutil::MB_randRangeFloat

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_GetSpecialIdle(int *idle)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  short sVar7;
  MobyInstance *pMVar8;
  ulonglong uVar9;
  uint uVar11;
  int iVar12;
  longlong lVar10;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar13;
  int iVar14;
  ulonglong unaff_r27;
  int iVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar16;
  double dVar17;
  ulonglong in_f30;
  double dVar18;
  ulonglong in_f31;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0x140;
  puVar2 = (ulonglong *)lVar10;
  *puVar2 = uVar9;
  puVar2[0x2a] = in_LR;
  puVar2[0x26] = in_f30;
  puVar2[0x27] = in_f31;
  puVar2[0x1f] = unaff_r25;
  puVar2[0x24] = unaff_r30;
  puVar2[0x25] = unaff_r31;
  sVar7 = DAT_00969ec8;
  puVar2[0x23] = unaff_r29;
  puVar2[0x22] = unaff_r28;
  puVar2[0x21] = unaff_r27;
  puVar2[0x20] = unaff_r26;
  puVar2[0x1e] = unaff_r24;
  if (sVar7 == 0) {
    if (g_heroHealth == 1) {
      *idle = 4;
      if (DAT_00720ff0 == 0) {
        if ((DAT_0096a778 & 2) == 0) {
          uVar11 = 0;
        }
        else {
          dVar16 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
          uVar11 = (uint)(dVar16 < 0.33000001311302185);
        }
      }
      else {
        uVar11 = 0;
      }
    }
    else {
      iVar15 = 0;
      lVar13 = 0;
      iVar14 = 0;
      do {
        uVar4 = DAT_00969db4;
        uVar3 = g_heroCGPos;
        if ((*(int *)((int)&DAT_00720e30 + iVar14) == 0) &&
           (*(float *)((int)&DAT_00720e28 + iVar14) != 0.0)) {
          iVar12 = -1;
          if (DAT_0096ad94 == 2) {
            iVar12 = g_CurrentWeapon;
          }
          if ((((*(int *)((int)&DAT_00720e20 + iVar14) == -1) ||
               (*(int *)((int)&DAT_00720e20 + iVar14) == iVar12)) &&
              ((*(int *)((int)&DAT_00720e14 + iVar14) == 0 || (DAT_00a3563d != 0xffffffff)))) &&
             ((*(int *)((int)&DAT_00720e14 + iVar14) == 0 || (g_standingOnMoby == 0)))) {
            if (iVar15 == 3) {
              if (Level == Hoven) {
                iVar12 = -1;
                if (DAT_0096ad94 == 2) {
                  iVar12 = g_CurrentWeapon;
                }
                if (iVar12 != 0x17) goto LAB_000a5050;
              }
            }
            else {
LAB_000a5050:
              if (iVar15 == 3) {
                *(undefined4 *)(puVar2 + 0x10) = g_heroCGPos;
                fVar5 = DAT_00969db8;
                *(undefined4 *)((int)puVar2 + 0x84) = uVar4;
                uVar6 = DAT_00969dbc;
                *(float *)(puVar2 + 0x11) = fVar5;
                *(undefined4 *)((int)puVar2 + 0x8c) = uVar6;
                *(undefined4 *)(puVar2 + 0xe) = uVar3;
                *(undefined4 *)((int)puVar2 + 0x74) = uVar4;
                *(undefined4 *)((int)puVar2 + 0x7c) = uVar6;
                pMVar8 = g_heroMobyPtr;
                *(float *)(puVar2 + 0xf) = fVar5 + 8.0;
                iVar12 = collproc::CollLine(uVar9 - 0xc0,uVar9 - 0xd0,2,pMVar8,0);
                if (iVar12 != 0) goto LAB_000a5110;
              }
              iVar12 = g_heroStateTimer;
              if ((iVar15 != 4) ||
                 (((DAT_0096bd74 == 1 &&
                   (puVar2[0x1c] = (longlong)(int)(animationSpeed * 50.5),
                   iVar12 <= *(int *)((int)puVar2 + 0xe4))) && (g_heroHealth < 2)))) {
                lVar1 = lVar13 << 2;
                lVar13 = lVar13 + 1;
                *(int *)((int)puVar2 + (int)lVar1 + 0x90) = iVar15;
              }
            }
          }
        }
LAB_000a5110:
        iVar15 = iVar15 + 1;
        iVar14 = iVar14 + 0x70;
      } while (iVar15 < 5);
      iVar14 = (int)lVar13;
      if (iVar14 != 0) {
        iVar15 = 0;
        dVar16 = 0.0;
        if (0 < iVar14) {
          do {
            iVar12 = (int)lVar10;
            iVar15 = iVar15 + 1;
            lVar10 = lVar10 + 4;
            puVar2[0x1c] = (longlong)
                           (int)(animationSpeed *
                                 (float)(&DAT_00720e28)[*(int *)(iVar12 + 0x90) * 0x1c] * 60.0);
            puVar2[0x1c] = (longlong)*(int *)((int)puVar2 + 0xe4);
            dVar16 = (double)(float)(dVar16 + (double)(1.0 / (float)(longlong)puVar2[0x1c]));
          } while (iVar15 < iVar14);
        }
        dVar18 = 1.0;
        dVar17 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
        if (dVar17 < dVar16) {
          iVar15 = 0;
          if (0 < iVar14) {
            do {
              iVar12 = *(int *)((int)puVar2 + iVar15 * 4 + 0x90);
              *idle = iVar12;
              puVar2[0x1c] = (longlong)
                             (int)(animationSpeed * (float)(&DAT_00720e28)[iVar12 * 0x1c] * 60.0);
              puVar2[0x1c] = (longlong)*(int *)((int)puVar2 + 0xe4);
              dVar16 = (double)(float)(dVar16 - (double)(float)(dVar18 / (double)(longlong)
                                                                                 puVar2[0x1c]));
              if (dVar16 < dVar17) {
                return 1;
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar14);
          }
          return 1;
        }
      }
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}



//==== 000a5294  ns=hero  size=0x48
// sig: void Hero_SetNextAnimFrame(int seq, int frame)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_SetNextAnimFrame(int seq,int frame)

{
  if ((-1 < seq) &&
     (frame < (int)(uint)*(byte *)(*(int *)(&g_heroMobyPtr->pClass->type +
                                           (uint)g_heroMobyPtr->animationId * 4) + 0x10))) {
    DAT_0096a790 = seq;
    DAT_0096a794 = frame;
  }
  return;
}



//==== 000a5310  ns=hero  size=0x3a8
// sig: undefined Hero_JumpLandTransitions(void)
// callers(1): 000be228 hero::HeroMovement
// callees(5): 0007f45c hero::Hero_GetIdleAnim; 00085300 hero::Hero_TransAnim; 0009b380 hero::Hero_GetIdealThrustFromPad; 000b72b0 hero::TransitionMovement; 00110488 mobyutil::ClampVec3Magnitude

void hero::Hero_JumpLandTransitions(void)

{
  float fVar1;
  int iVar2;
  
  g_HeroRequestedCamType = 0;
  if ((DAT_0096afc2 != '\0') && (mobyutil::g_FrameTime * 0.5 < DAT_00969e44)) {
    TransitionMovement(0x2f,1);
    return;
  }
  Hero_GetIdealThrustFromPad(0x3ff0000000000000,&DAT_000a52dc,0);
  if ((g_downButtons & (R1|R2)) == 0) {
    if ((g_heroPadMagnitude <= 0.3) || (DAT_00969ea4 != 0)) {
      if (((mobyutil::g_FrameTime * 3.0 < DAT_00969e48) &&
          ((int)(animationSpeed * 3.5) < g_DustHoverState)) ||
         (g_heroState == THRUSTER_PACK_FORWARD_JUMP)) {
        iVar2 = TransitionMovement(3,0);
        if (iVar2 != 0) {
          Hero_TransAnim(-1.0,5,0);
          mobyutil::ClampVec3Magnitude
                    ((double)(mobyutil::g_FrameTime * 5.0),(Vec4 *)&g_heroExternalMomentum);
        }
      }
      else if ((((int)(animationSpeed * 12.5) < g_DustHoverState) || ((DAT_0096a778 & 2) != 0)) &&
              (iVar2 = TransitionMovement(0,0), iVar2 != 0)) {
        iVar2 = Hero_GetIdleAnim(0);
        if (iVar2 == 0x54) {
          iVar2 = Hero_GetIdleAnim(0);
          Hero_TransAnim((float)(longlong)(int)(animationSpeed * 15.5),iVar2,0);
        }
        else if ((DAT_0096a778 & 2) != 0) {
          iVar2 = Hero_GetIdleAnim(0);
          Hero_TransAnim(-2.0,iVar2,0);
        }
      }
    }
    else if ((DAT_0096afc2 == '\0') && (DAT_0096bd89 == '\0')) {
      iVar2 = TransitionMovement(2,0);
      if (iVar2 != 0) {
        DAT_0096bd68 = 1;
        fVar1 = animationSpeed * 8.5;
        if ((int)(animationSpeed * 5.5) < g_DustHoverState) {
          fVar1 = animationSpeed * 14.5;
        }
        Hero_TransAnim((float)(longlong)(int)fVar1,4,DAT_0072333c);
        DAT_0096a09c = 1;
      }
    }
    else {
      TransitionMovement(2,1);
    }
  }
  else {
    TransitionMovement(4,0);
    Hero_TransAnim(-2.0,0xd,2);
    if (0x12 < *(byte *)(*(int *)(&g_heroMobyPtr->pClass->type +
                                 (uint)g_heroMobyPtr->animationId * 4) + 0x10)) {
      DAT_0096a790 = 3;
      DAT_0096a794 = 0x12;
    }
  }
  return;
}



//==== 000a56d8  ns=hero  size=0x348
// sig: int Hero_CrouchJumpTransitions(void)
// callers(1): 000be228 hero::HeroMovement
// callees(4): 000a1e78 hero::Hero_GetSnapJumpSnapWindow; 000b72b0 hero::TransitionMovement; 0011dfe0 pad::PadRingBitsOn; 0011e0a4 pad::PadRingCoincidentBitsOn
// strings: 000a56cc: '?333?fff`' (raw) | 000a56d0: '?fff`'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_CrouchJumpTransitions(void)

{
  int iVar1;
  
  if (g_heroState == DOUBLE_JUMP) {
    iVar1 = 0;
  }
  else {
    iVar1 = Hero_GetSnapJumpSnapWindow();
    if ((((g_downButtons & (R1|R2)) == 0) || (iVar1 < 1)) ||
       (iVar1 = pad::PadRingCoincidentBitsOn(0x40,0x1f000,(int)(animationSpeed * 5.5) + iVar1,iVar1)
       , iVar1 == 0)) {
      if (((int)(animationSpeed * 6.5) < g_heroStateTimer) &&
         (iVar1 = pad::PadRingBitsOn(0x40,(int)(animationSpeed * 9.5),(int *)0x0), iVar1 != 0)) {
        iVar1 = -1;
        if (DAT_0096ae84 == 2) {
          iVar1 = DAT_0096ae88;
        }
        if ((((iVar1 != 2) || (UnlockableItems.heliPack == '\0')) ||
            ((g_hasClank != 0 ||
             (((DAT_00969f28 <= 2.5 && (0.7853982 <= DAT_00969f30)) || (g_heroPadMagnitude <= 0.7)))
             ))) || (DAT_00969e48 <= mobyutil::g_FrameTime * (float)0x3f666666)) {
          iVar1 = -1;
          if (DAT_0096ae84 == 2) {
            iVar1 = DAT_0096ae88;
          }
          if (((iVar1 != 3) || (g_hasClank != 0)) ||
             (((g_heroPadMagnitude <= 0.7 || ((DAT_00969f28 <= 2.5 && (DAT_00969f34 == '\0')))) ||
              (DAT_00969e48 <= mobyutil::g_FrameTime * (float)0x3f666666)))) {
            iVar1 = -1;
            if (DAT_0096ae84 == 2) {
              iVar1 = DAT_0096ae88;
            }
            if ((iVar1 == 3) && (g_hasClank == 0)) {
              TransitionMovement(0xd,1);
            }
            else {
              iVar1 = -1;
              if (DAT_0096ae84 == 2) {
                iVar1 = DAT_0096ae88;
              }
              if (((iVar1 == 2) && (g_hasClank == 0)) && (UnlockableItems.heliPack != '\0')) {
                TransitionMovement(0xf,1);
              }
              else {
                TransitionMovement(7,1);
              }
            }
          }
          else if (DAT_00969e98 == 0) {
            TransitionMovement(0x10,1);
          }
        }
        else {
          TransitionMovement(10,1);
        }
        iVar1 = 1;
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      TransitionMovement(0xb,1);
      iVar1 = 1;
    }
  }
  return iVar1;
}



//==== 000a5a20  ns=hero  size=0x20
// sig: undefined ???_Hero_GetAnimId_55or7f(void)
// callers(0): 
// callees(0): 

undefined8 hero::____Hero_GetAnimId_55or7f(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x55;
  if (DAT_0096a5ae != '\0') {
    uVar1 = 0x7f;
  }
  return uVar1;
}



//==== 000a5a58  ns=hero  size=0x5cc
// sig: float Hero_PredictLand(float frame_max, float grav, float groundZ)
// callers(3): 000a6048 hero::Hero_HandleHoverboardTricks; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement
// callees(5): 00057820 collproc::CollLine; 0007dff0 hero::Hero_Slope; 00084830 hero::Hero_RelativeZComponent; 000fcb40 mobyutil::MB_SolveQuad; 0010c110 mobyutil::???_MB_ClampVecToPlanes

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_PredictLand(float frame_max,float grav,float groundZ)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  float local_60;
  float local_58;
  float local_50;
  
  dVar5 = (double)groundZ;
  dVar3 = (double)grav;
  dVar2 = (double)frame_max;
  if (g_heroGravityMode == 0) {
    dVar4 = 0.0;
    if (dVar5 < 0.0) {
      mobyutil::____MB_ClampVecToPlanes
                (CONCAT44(g_heroPosition.x,g_heroPosition.y),
                 CONCAT44(g_heroPosition.z,g_heroPosition.w),local_a0);
      iVar1 = collproc::CollLine(local_90,local_a0,DAT_00a1a858 << 8 | 0x24,0,0);
      if ((iVar1 != 0) && (fVar7 = Hero_Slope(&CollOutput.normal.x), fVar7 <= 0.87266463)) {
        dVar5 = (double)CollOutput.ip.z;
      }
    }
    if (((dVar4 < dVar5) &&
        (iVar1 = mobyutil::MB_SolveQuad
                           ((double)(float)(dVar3 * -0.5),
                            (double)(float)((double)DAT_00969dc8 - (double)(float)(dVar3 * -0.5)),
                            (double)(float)((double)g_heroPosition.z - dVar5)), 0 < iVar1)) &&
       (dVar3 = (double)local_60, dVar4 < dVar3)) goto LAB_000a5ff4;
  }
  else if (g_heroGravityMode < 2) {
    dVar5 = 0.0;
    mobyutil::____MB_ClampVecToPlanes
              (CONCAT44(g_heroPosition.x,g_heroPosition.y),
               CONCAT44(g_heroPosition.z,g_heroPosition.w),local_80);
    iVar1 = collproc::CollLine(&g_heroPosition,local_80,DAT_00a1a858 << 8 | 0x24,0,0);
    if (iVar1 != 0) {
      dVar6 = (double)(float)(dVar3 * -0.5);
      fVar7 = Hero_RelativeZComponent((float *)&g_heroVelocity);
      dVar4 = (double)(float)((double)fVar7 - dVar6);
      fVar7 = Hero_RelativeZComponent(&g_heroPosition.x);
      dVar3 = (double)fVar7;
      fVar7 = Hero_RelativeZComponent(&CollOutput.ip.x);
      iVar1 = mobyutil::MB_SolveQuad(dVar6,dVar4,(double)(float)(dVar3 - (double)fVar7));
      if ((0 < iVar1) && (dVar3 = (double)local_58, dVar5 < dVar3)) goto LAB_000a5ff4;
    }
  }
  else if (g_heroGravityMode < 3) {
    dVar5 = 0.0;
    mobyutil::____MB_ClampVecToPlanes
              (CONCAT44(g_heroPosition.x,g_heroPosition.y),
               CONCAT44(g_heroPosition.z,g_heroPosition.w),local_70);
    iVar1 = collproc::CollLine(&g_heroPosition,local_70,DAT_00a1a858 << 8 | 0x24,0,0);
    if (iVar1 != 0) {
      dVar6 = (double)(float)(dVar3 * -0.5);
      fVar7 = Hero_RelativeZComponent((float *)&g_heroVelocity);
      dVar4 = (double)(float)((double)fVar7 - dVar6);
      fVar7 = Hero_RelativeZComponent(&g_heroPosition.x);
      dVar3 = (double)fVar7;
      fVar7 = Hero_RelativeZComponent(&CollOutput.ip.x);
      iVar1 = mobyutil::MB_SolveQuad(dVar6,dVar4,(double)(float)(dVar3 - (double)fVar7));
      if ((0 < iVar1) && (dVar3 = (double)local_50, dVar5 < dVar3)) goto LAB_000a5ff4;
    }
  }
  dVar3 = dVar2;
LAB_000a5ff4:
  return (float)dVar3;
}



//==== 000a6048  ns=hero  size=0x434
// sig: undefined Hero_HandleHoverboardTricks(void)
// callers(1): 000be228 hero::HeroMovement
// callees(3): 00085300 hero::Hero_TransAnim; 000a5a58 hero::Hero_PredictLand; 00502758 fastfunc::FastDoubleToInt

void hero::Hero_HandleHoverboardTricks(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = Hero_PredictLand(60.0,DAT_0096a540,-1.0);
  DAT_0096a568 = fastfunc::FastDoubleToInt((double)fVar3);
  if ((DAT_0096a56d != '\0') && ((g_downButtons & (R1|L1|R2|L2)) != 0)) {
    DAT_0096a56f = 0;
    if ((g_downButtons & R1) == 0) {
      if ((g_downButtons & L2) == 0) {
        if ((g_downButtons & R2) != 0) {
          DAT_0096a56f = 3;
        }
      }
      else {
        DAT_0096a56f = 2;
      }
    }
    else {
      DAT_0096a56f = 1;
    }
    if ((uint)g_heroMobyPtr->animationId == DAT_0096a56f + 0x69) {
      if ((float)(longlong)DAT_0096a790 - 2.0 < g_heroAnimFrame) {
        DAT_0096a3d8 = DAT_0096a3d8 + 1;
        (&DAT_0096a3c0)[DAT_0096a56f] = 1;
      }
    }
    else {
      Hero_TransAnim((float)(longlong)(int)(animationSpeed * 5.5),DAT_0096a56f + 0x69,2);
      iVar2 = *(int *)((uint)DAT_0096a56f * 8 + 0x720c8c);
      iVar1 = *(int *)((uint)DAT_0096a56f * 8 + 0x720c88);
      if ((-1 < iVar1) &&
         (iVar2 < (int)(uint)*(byte *)(*(int *)(&g_heroMobyPtr->pClass->type +
                                               (uint)g_heroMobyPtr->animationId * 4) + 0x10))) {
        DAT_0096a790 = iVar1;
        DAT_0096a794 = iVar2;
      }
    }
  }
  if (((((g_framesNotGrounded == 0) || ((g_downButtons & (R1|L1|R2|L2)) == 0)) &&
       (0x68 < g_heroMobyPtr->animationId)) &&
      ((g_heroMobyPtr->animationId < 0x6d && (DAT_0096a77c == 0)))) &&
     ((DAT_0096a790 < (int)(uint)(byte)g_heroMobyPtr->animationFrame &&
      ((int)(uint)(byte)g_heroMobyPtr->animationFrame < DAT_0096a794)))) {
    iVar2 = (int)DAT_0096a568;
    if ((int)(animationSpeed * 30.5) < (int)DAT_0096a568) {
      iVar2 = 0x55;
      if (DAT_0096a5ae != '\0') {
        iVar2 = 0x7f;
      }
      Hero_TransAnim((float)(longlong)(int)(animationSpeed * 17.5),iVar2,9);
    }
    else {
      if ((int)DAT_0096a568 < (int)(animationSpeed * 10.5)) {
        iVar2 = (int)(animationSpeed * 10.5);
      }
      iVar1 = 0x55;
      if (DAT_0096a5ae != '\0') {
        iVar1 = 0x7f;
      }
      Hero_TransAnim((float)(longlong)iVar2,iVar1,0xd);
    }
  }
  if ((DAT_0096a59c != 0) &&
     (((g_heroMobyPtr->animationId == 'R' || (g_heroMobyPtr->animationId == '}')) ||
      ((g_heroMobyPtr->animationId == 'h' || (g_heroMobyPtr->animationId == '~')))))) {
    iVar2 = 0x55;
    if (DAT_0096a5ae != '\0') {
      iVar2 = 0x7f;
    }
    Hero_TransAnim((float)(longlong)(int)(animationSpeed * 10.5),iVar2,0xb);
  }
  if (((DAT_0096a778 & 2) != 0) && (DAT_00969fec != 0)) {
    iVar2 = 0x55;
    if (DAT_0096a5ae != '\0') {
      iVar2 = 0x7f;
    }
    Hero_TransAnim((float)(longlong)(int)(animationSpeed * 7.5),iVar2,9);
  }
  return;
}



//==== 000a64d0  ns=hero  size=0x938
// sig: undefined Hero_HoverboardBoostPads(void)
// callers(1): 000be228 hero::HeroMovement
// callees(9): 00085b30 hero::Hero_HandleGadgetSwitching; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0015d12c sound::PlayMobySound; 00500060 fastfunc::FastDecTimerS8; 00500af8 fastfunc::FastMtx4Identity; 005010c0 fastfunc::FastNormalizeRMtx4; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void hero::Hero_HoverboardBoostPads(void)

{
  void *pvVar1;
  char cVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  MobyInstance *local_90;
  MobyInstance *local_8c;
  MobyInstance *local_88 [2];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  longlong local_70;
  
  if (g_heroBoardMoby != (MobyInstance *)0x0) {
    pvVar1 = g_heroBoardMoby->pVar;
    if (*(int *)((int)pvVar1 + 0x44) != -1) {
      mobyutil::MB_GetFirstMobyInGroup(&local_90,*(int *)((int)pvVar1 + 0x44),'\0','\0');
      while (local_90 != (MobyInstance *)0x0) {
        if ((local_90->oClass == HOVERBOARD_RING) &&
           (iVar9 = fastfunc::FastDecTimerS8(&local_90->setByGroup), iVar9 != 0)) {
          dVar15 = (double)((local_90->pos).x - g_heroCGPos);
          dVar14 = (double)((local_90->pos).y - DAT_00969db4);
          dVar13 = (double)(local_90->pos).w;
          dVar12 = (double)((local_90->pos).z - DAT_00969db8);
          fastfunc::FastMtx4Identity(&local_110);
          fastfunc::FastNormalizeRMtx4(&local_110,&local_90->transform);
          if ((ABS((float)((double)local_110 * dVar15) + (float)((double)local_100 * dVar14) +
                   (float)((double)local_f0 * dVar12) + (float)((double)local_e0 * dVar13)) < 0.5)
             && ((ABS((float)((double)local_10c * dVar15) + (float)((double)local_fc * dVar14) +
                      (float)((double)local_ec * dVar12) + (float)((double)local_dc * dVar13)) < 2.9
                 && (ABS((float)((double)local_108 * dVar15) + (float)((double)local_f8 * dVar14) +
                         (float)((double)local_e8 * dVar12) + (float)((double)local_d8 * dVar13)) <
                     2.9)))) {
                    /* WARNING: Load size is inaccurate */
            DAT_0096a5a4 = DAT_0096a5a4 + *local_90->pVar;
            local_80 = (int)(animationSpeed * 60.5);
            local_70 = (longlong)local_80;
            auVar3 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                     (undefined1  [16])0xff;
            cVar2 = storeVectorElementByteIndexed
                              (auVar3 | auVar3 << 8 | auVar3 << 0x10 | auVar3 << 0x18 |
                               auVar3 << 0x20 | auVar3 << 0x28 | auVar3 << 0x30 | auVar3 << 0x38 |
                               auVar3 << 0x40 | auVar3 << 0x48 | auVar3 << 0x50 | auVar3 << 0x58 |
                               auVar3 << 0x60 | auVar3 << 0x68 | auVar3 << 0x70 | auVar3 << 0x78,
                               0xbc,ZEXT48(local_90));
            local_90->setByGroup = cVar2;
            local_7c = local_80;
            local_78 = local_80;
            local_74 = local_80;
            if (g_heroBoardMoby != (MobyInstance *)0x0) {
              sound::PlayMobySound(1,0,g_heroBoardMoby);
            }
          }
        }
        mobyutil::MB_GetNextMobyInGroup(&local_90,local_90,'\0','\0');
      }
    }
    iVar9 = (int)(animationSpeed * 50.5);
    local_70 = (longlong)iVar9;
    dVar12 = (double)fastfunc::FastIntToDouble(iVar9);
    local_70 = (longlong)(worldUpdateTime - (worldUpdateTime / iVar9) * iVar9);
    fVar4 = (float)((double)local_70 / dVar12) * 2.0 * 3.1415927 + -3.1415927;
    fVar5 = fVar4;
    if (3.1415925 - fVar4 <= fVar4) {
      fVar5 = 3.1415925 - fVar4;
    }
    if (fVar5 <= -3.1415925 - fVar4) {
      fVar5 = -3.1415925 - fVar4;
    }
    fVar4 = fVar5 * fVar5;
    fVar6 = fVar4 * fVar4 * fVar5;
    fVar7 = fVar4 * fVar6;
    dVar12 = (double)(fVar5 + fVar4 * fVar5 * -0.16666657 + fVar6 * 0.0083330255 +
                      fVar7 * -0.0001980741 + fVar4 * fVar7 * 2.601887e-06);
    iVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * 48.0));
    lVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * 64.0));
    iVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * 24.0));
    lVar8 = lVar8 + 0xd0;
    if (0xff < (int)lVar8) {
      lVar8 = 0xff;
    }
    if ((*(int *)((int)pvVar1 + 0x48) != -1) && (DAT_0096a59c == 0)) {
      mobyutil::MB_GetFirstMobyInGroup(&local_8c,*(int *)((int)pvVar1 + 0x48),'\0','\0');
      while (local_8c != (MobyInstance *)0x0) {
        if (local_8c->oClass == HOVERBOARD_BOOST_PAD) {
          local_8c->modeBits = local_8c->modeBits | HAS_GLOW;
          local_8c->field60_0x90 =
               (uint)(lVar8 << 8) | iVar9 + 0x68U | (iVar10 + 0x3c) * 0x10000 | 0x80000000;
          iVar11 = fastfunc::FastDecTimerS8(&local_8c->setByGroup);
          if (iVar11 != 0) {
            dVar15 = (double)((local_8c->pos).x - g_heroPosition.x);
            dVar14 = (double)((local_8c->pos).y - g_heroPosition.y);
            dVar13 = (double)(local_8c->pos).w;
            dVar12 = (double)((local_8c->pos).z - g_heroPosition.z);
            fastfunc::FastMtx4Identity(&local_d0);
            fastfunc::FastNormalizeRMtx4(&local_d0,&local_8c->transform);
            if (((ABS((float)((double)local_d0 * dVar15) + (float)((double)local_c0 * dVar14) +
                      (float)((double)local_b0 * dVar12) + (float)((double)local_a0 * dVar13)) < 2.8
                 ) && (ABS((float)((double)local_cc * dVar15) + (float)((double)local_bc * dVar14) +
                           (float)((double)local_ac * dVar12) + (float)((double)local_9c * dVar13))
                       < 1.25)) &&
               (ABS((float)((double)local_c8 * dVar15) + (float)((double)local_b8 * dVar14) +
                    (float)((double)local_a8 * dVar12) + (float)((double)local_98 * dVar13)) < 1.5))
            {
                    /* WARNING: Load size is inaccurate */
              DAT_0096a5a4 = DAT_0096a5a4 + *local_8c->pVar;
              local_80 = (int)(animationSpeed * 60.5);
              local_70 = (longlong)local_80;
              auVar3 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xffffffff;
              auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                       (undefined1  [16])0xff;
              cVar2 = storeVectorElementByteIndexed
                                (auVar3 | auVar3 << 8 | auVar3 << 0x10 | auVar3 << 0x18 |
                                 auVar3 << 0x20 | auVar3 << 0x28 | auVar3 << 0x30 | auVar3 << 0x38 |
                                 auVar3 << 0x40 | auVar3 << 0x48 | auVar3 << 0x50 | auVar3 << 0x58 |
                                 auVar3 << 0x60 | auVar3 << 0x68 | auVar3 << 0x70 | auVar3 << 0x78,
                                 0xbc,ZEXT48(local_8c));
              local_8c->setByGroup = cVar2;
              local_7c = local_80;
              local_78 = local_80;
              local_74 = local_80;
              if (g_heroBoardMoby != (MobyInstance *)0x0) {
                sound::PlayMobySound(1,0,g_heroBoardMoby);
              }
            }
          }
        }
        mobyutil::MB_GetNextMobyInGroup(&local_8c,local_8c,'\0','\0');
      }
    }
    if (*(int *)((int)pvVar1 + 0x4c) != -1) {
      mobyutil::MB_GetFirstMobyInGroup(local_88,*(int *)((int)pvVar1 + 0x4c),'\0','\0');
      while (local_88[0] != (MobyInstance *)0x0) {
        if (((local_88[0]->oClass == ROCKET_01D6) &&
            (iVar9 = fastfunc::FastDecTimerS8(&local_88[0]->setByGroup), iVar9 != 0)) &&
           (fVar4 = g_heroCGPos - (local_88[0]->pos).x, fVar5 = DAT_00969db4 - (local_88[0]->pos).y,
           fVar6 = DAT_00969db8 - (local_88[0]->pos).z,
           SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6) < 1.5)) {
          local_80 = (int)(animationSpeed * 300.5);
          local_70 = (longlong)local_80;
          auVar3 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
                   (undefined1  [16])0xff;
          cVar2 = storeVectorElementByteIndexed
                            (auVar3 | auVar3 << 8 | auVar3 << 0x10 | auVar3 << 0x18 | auVar3 << 0x20
                             | auVar3 << 0x28 | auVar3 << 0x30 | auVar3 << 0x38 | auVar3 << 0x40 |
                             auVar3 << 0x48 | auVar3 << 0x50 | auVar3 << 0x58 | auVar3 << 0x60 |
                             auVar3 << 0x68 | auVar3 << 0x70 | auVar3 << 0x78,0xbc,
                             ZEXT48(local_88[0]));
          local_88[0]->setByGroup = cVar2;
          local_7c = local_80;
          local_78 = local_80;
          local_74 = local_80;
          if (g_CurrentWeapon != 0x24) {
            DAT_0096bd98 = 0x24;
            DAT_0096bd8c = 0;
            Hero_HandleGadgetSwitching(0);
            DAT_0096bd8c = 1;
          }
          DAT_0096a5ae = DAT_0096a5ae + 1;
          if (3 < DAT_0096a5ae) {
            DAT_0096a5ae = 3;
          }
          DAT_0096bd98 = 0x24;
          currentAmmoArray.field36_0x24 = currentAmmoArray.field36_0x24 + 1;
        }
        mobyutil::MB_GetNextMobyInGroup(local_88,local_88[0],'\0','\0');
      }
    }
  }
  return;
}



//==== 000a6e20  ns=hero  size=0x364
// sig: undefined Hero_UpdateHoverboardRaceStats(void)
// callers(1): 000be228 hero::HeroMovement
// callees(1): 00502758 fastfunc::FastDoubleToInt
// strings: 00a0feec: 'None' | 000a6e0c: '@T;g' (raw)

void hero::Hero_UpdateHoverboardRaceStats(void)

{
  float fVar1;
  float *pfVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float local_30 [6];
  longlong local_18;
  
  if (MiscLevelFlags.Zoomerator) {
    puVar7 = &g_heroMtx;
    if ((g_RaceScore != 0) && (MiscLevelFlags.Zoomerator)) {
      if (CHAR_ARRAY_00a0feec._240_2_ != -1) {
        CHAR_ARRAY_00a0feec._240_2_ = CHAR_ARRAY_00a0feec._240_2_ + 1;
      }
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._242_2_ <
          (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)) / 600) {
        iVar4 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        sVar3 = (short)(iVar4 >> 0x1f);
        CHAR_ARRAY_00a0feec._242_2_ =
             ((short)(iVar4 / 600) + sVar3) - ((short)((short)(iVar4 / 0x2580000) + sVar3) >> 0xf);
      }
      CHAR_ARRAY_00a0feec._244_4_ = CHAR_ARRAY_00a0feec._244_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    iVar4 = 0;
    iVar6 = 0;
    puVar5 = puVar7;
    do {
      pfVar2 = (float *)((int)&DAT_0096a3b0 + iVar6);
      fVar1 = *pfVar2;
      if (3.3161256 < ABS(fVar1)) {
        if (fVar1 <= 0.0) {
          puVar5[0x1c0] = puVar5[0x1c0] + 1;
          *pfVar2 = fVar1 + 6.2831855;
        }
        else {
          puVar5[0x1c0] = puVar5[0x1c0] + 1;
          *pfVar2 = fVar1 - 6.2831855;
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 4;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 3);
    iVar4 = 0;
    DAT_0096a3ec = 0;
    puVar5 = puVar7;
    do {
      if (DAT_0096a3ec < (int)puVar5[0x1c0]) {
        DAT_0096a3ec = puVar5[0x1c0];
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 3);
    iVar4 = 0;
    DAT_0096a3f0 = 0;
    iVar6 = 100;
    if (0 < DAT_0096a3ec) {
      do {
        iVar4 = iVar4 + 1;
        DAT_0096a3f0 = DAT_0096a3f0 + iVar6;
        iVar6 = iVar6 + 0x32;
      } while (iVar4 < DAT_0096a3ec);
    }
    iVar4 = 0;
    DAT_0096a3d0 = 0;
    do {
      if (puVar7[0x1b8] != 0) {
        DAT_0096a3d0 = DAT_0096a3d0 + 1;
      }
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar4 < 4);
    local_30[0] = 1.0;
    local_30[1] = 1.0;
    local_30[2] = 1.5;
    local_30[3] = 2.25;
    local_30[4] = 4.0;
    DAT_0096a3d4 = local_30[DAT_0096a3d0];
    local_18 = (longlong)((DAT_0096a3d8 * 100) / (int)(animationSpeed * 60.0));
    iVar4 = fastfunc::FastDoubleToInt((double)local_18);
    DAT_0096a3dc = iVar4 + DAT_0096a3d0 * 0x19;
    local_18 = (longlong)DAT_0096a3dc;
    DAT_0096a3dc = fastfunc::FastDoubleToInt((double)((float)local_18 * DAT_0096a3d4));
    DAT_0096a3f4 = DAT_0096a3f0 + DAT_0096a3dc;
  }
  return;
}



//==== 000a71a0  ns=hero  size=0x780
// sig: void Hero_GetHoverboardRespawn(float * pos, float * rot)
// callers(3): 000a7968 hero::Hero_UpdateHoverboardRace; 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement
// callees(2): 000ffb70 mobyutil::GetGroundZ; 005026a0 fastfunc::FastSubRots

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_GetHoverboardRespawn(float *pos,float *rot)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Spline *pSVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong unaff_r22;
  float *pfVar17;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar21;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar22;
  ulonglong in_f31;
  double dVar23;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x160;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x2e] = in_LR;
  puVar6[0x2b] = in_f31;
  puVar6[0x22] = unaff_r23;
  puVar6[0x25] = unaff_r26;
  puVar6[0x2a] = unaff_r31;
  puVar6[0x29] = unaff_r30;
  puVar6[0x28] = unaff_r29;
  iVar13 = g_heroBoardMoby;
  puVar6[0x27] = unaff_r28;
  puVar6[0x26] = unaff_r27;
  puVar6[0x24] = unaff_r25;
  puVar6[0x23] = unaff_r24;
  puVar6[0x21] = unaff_r22;
  if (iVar13 == 0) {
    *pos = g_heroPosition.x;
    pos[1] = g_heroPosition.y;
    pos[2] = g_heroPosition.z;
    pos[3] = g_heroPosition.w;
    *rot = g_heroRotation.x;
    rot[1] = g_heroRotation.y;
    rot[2] = g_heroRotation.z;
    rot[3] = g_heroRotation.w;
  }
  else {
    iVar18 = 0;
    dVar23 = 9999999.0;
    lVar19 = 0;
    lVar21 = 0;
    pSVar5 = Splines[*(int *)(*(int *)(iVar13 + 0x78) + 0x24)];
    if (0 < pSVar5->cnt) {
      iVar13 = 0;
      do {
        pfVar20 = (float *)((int)&pSVar5->points[0].y + iVar13);
        pfVar17 = (float *)((int)&pSVar5->points[0].x + iVar13);
        fVar2 = *pfVar20 - g_heroPosition.y;
        fVar1 = *pfVar17 - g_heroPosition.x;
        fVar3 = ABS(fVar2);
        fVar7 = ABS(fVar1);
        *(float *)((int)puVar6 + 0x9c) = fVar2;
        *(float *)(puVar6 + 0x13) = fVar1;
        *(float *)(puVar6 + 0x14) = fVar7 - fVar3;
        fVar1 = 0.0;
        uVar14 = (ulonglong)(*(uint *)(puVar6 + 0x13) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar6 + 0x14) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar6 + 0x9c) >> 0x1d) & 4;
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
        fVar2 = *(float *)((uint)(uVar14 << 2) | 0x735904);
        if (0.0 <= *(float *)(puVar6 + 0x14)) {
          fVar7 = ABS(*(float *)((int)puVar6 + 0x9c));
          fVar3 = ABS(*(float *)(puVar6 + 0x13));
        }
        fVar8 = fVar1;
        if (0.0 < fVar3) {
          iVar15 = 4;
          fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
          lVar11 = lVar12;
          do {
            iVar15 = iVar15 + -1;
            *(float *)((int)lVar11 + 0xe4) = fVar3;
            lVar11 = lVar11 + 4;
          } while (iVar15 != 0);
          fVar3 = fVar3 * fVar3;
          lVar11 = uVar10 - 0x150;
          iVar15 = 4;
          fVar7 = fVar3 * fVar3;
          *(float *)(puVar6 + 0x1d) = *(float *)(puVar6 + 0x1d) * fVar3;
          *(float *)((int)puVar6 + 0xec) = *(float *)((int)puVar6 + 0xec) * fVar7;
          *(float *)(puVar6 + 0x1e) = *(float *)(puVar6 + 0x1e) * fVar7 * fVar3;
          do {
            iVar15 = iVar15 + -1;
            *(float *)((int)lVar11 + 0xe4) = *(float *)((int)lVar11 + 0xd4) * fVar7 * fVar7;
            lVar11 = lVar11 + 4;
          } while (iVar15 != 0);
          iVar15 = 0;
          iVar16 = 8;
          lVar11 = lVar12;
          do {
            pfVar9 = (float *)((int)&DAT_007358e0 + iVar15);
            iVar16 = iVar16 + -1;
            iVar15 = iVar15 + 4;
            *(float *)((int)lVar11 + 0xe4) = *(float *)((int)lVar11 + 0xe4) * *pfVar9;
            lVar11 = lVar11 + 4;
          } while (iVar16 != 0);
          iVar15 = 8;
          lVar11 = lVar12;
          fVar3 = fVar1;
          do {
            iVar15 = iVar15 + -1;
            iVar16 = (int)lVar11;
            lVar11 = lVar11 + 4;
            fVar3 = fVar3 + *(float *)(iVar16 + 0xe4);
          } while (iVar15 != 0);
          fVar8 = (fVar3 + 0.7853982) * fVar4 + fVar2;
        }
        iVar15 = pSVar5->cnt;
        iVar16 = (int)lVar19 + iVar15 + 2;
        iVar16 = iVar16 - (iVar16 / iVar15) * iVar15;
        fVar2 = *(float *)((int)pSVar5 + (iVar16 * 4 + 4) * 4) - *pfVar17;
        fVar4 = *(float *)((int)pSVar5 + (iVar16 * 4 + 5) * 4) - *pfVar20;
        fVar7 = ABS(fVar2);
        fVar3 = ABS(fVar4);
        *(float *)((int)puVar6 + 0x8c) = fVar2;
        *(float *)(puVar6 + 0x12) = fVar4;
        *(float *)((int)puVar6 + 0x94) = fVar7 - fVar3;
        uVar14 = (ulonglong)(*(uint *)((int)puVar6 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar6 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar6 + 0x12) >> 0x1d) & 4;
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
        fVar2 = *(float *)((uint)(uVar14 << 2) | 0x735904);
        if (0.0 <= *(float *)((int)puVar6 + 0x94)) {
          fVar7 = ABS(*(float *)(puVar6 + 0x12));
          fVar3 = ABS(*(float *)((int)puVar6 + 0x8c));
        }
        if (0.0 < fVar3) {
          iVar15 = 4;
          fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
          lVar11 = lVar12;
          do {
            iVar15 = iVar15 + -1;
            *(float *)((int)lVar11 + 0xc4) = fVar3;
            lVar11 = lVar11 + 4;
          } while (iVar15 != 0);
          fVar3 = fVar3 * fVar3;
          lVar11 = uVar10 - 0x150;
          iVar15 = 4;
          fVar7 = fVar3 * fVar3;
          *(float *)(puVar6 + 0x19) = *(float *)(puVar6 + 0x19) * fVar3;
          *(float *)((int)puVar6 + 0xcc) = *(float *)((int)puVar6 + 0xcc) * fVar7;
          *(float *)(puVar6 + 0x1a) = *(float *)(puVar6 + 0x1a) * fVar7 * fVar3;
          do {
            iVar15 = iVar15 + -1;
            *(float *)((int)lVar11 + 0xc4) = *(float *)((int)lVar11 + 0xb4) * fVar7 * fVar7;
            lVar11 = lVar11 + 4;
          } while (iVar15 != 0);
          iVar15 = 0;
          iVar16 = 8;
          lVar11 = lVar12;
          do {
            iVar16 = iVar16 + -1;
            pfVar20 = (float *)((int)&DAT_007358e0 + iVar15);
            iVar15 = iVar15 + 4;
            *(float *)((int)lVar11 + 0xc4) = *(float *)((int)lVar11 + 0xc4) * *pfVar20;
            lVar11 = lVar11 + 4;
          } while (iVar16 != 0);
          iVar15 = 8;
          lVar11 = lVar12;
          do {
            iVar15 = iVar15 + -1;
            iVar16 = (int)lVar11;
            lVar11 = lVar11 + 4;
            fVar1 = fVar1 + *(float *)(iVar16 + 0xc4);
          } while (iVar15 != 0);
          fVar1 = (fVar1 + 0.7853982) * fVar4 + fVar2;
        }
        dVar22 = (double)fastfunc::FastSubRots(fVar8,fVar1);
        if (1.5707963705062866 < dVar22) {
          if ((Level == Kalebo) && (DAT_0096a594 != 0)) {
            pfVar20 = (float *)(DAT_0096a594 + 0x18 + (int)((longlong)DAT_0096a578 << 4));
            pfVar9 = (float *)(DAT_0096a594 + 0x18 + (int)((longlong)DAT_0096a5a8 << 4));
            if (*pfVar20 <= *pfVar9) {
              fVar1 = *pfVar9 - *(float *)((int)&pSVar5->points[0].z + iVar13);
            }
            else {
              fVar1 = *pfVar20 - *(float *)((int)&pSVar5->points[0].z + iVar13);
            }
            if (4.0 < ABS(fVar1)) goto LAB_000a76c0;
          }
          dVar22 = (double)SQRT((g_heroPosition.x - *pfVar17) * (g_heroPosition.x - *pfVar17) +
                                (g_heroPosition.y - pfVar17[1]) * (g_heroPosition.y - pfVar17[1]));
          if (dVar22 < dVar23) {
            lVar21 = lVar19;
            dVar23 = dVar22;
          }
        }
LAB_000a76c0:
        lVar19 = lVar19 + 2;
        iVar13 = iVar13 + 0x20;
      } while ((int)lVar19 < pSVar5->cnt);
    }
    iVar13 = (int)(lVar21 << 4);
    pfVar20 = (float *)((int)&pSVar5->points[0].x + iVar13);
    fVar1 = *pfVar20;
    *pos = fVar1;
    fVar2 = pfVar20[1];
    pos[1] = fVar2;
    fVar4 = pfVar20[2];
    pos[2] = fVar4;
    fVar3 = pfVar20[3];
    pos[3] = fVar3;
    *(float *)(puVar6 + 0xe) = fVar1;
    *(float *)((int)puVar6 + 0x74) = fVar2;
    *(float *)((int)puVar6 + 0x7c) = fVar3;
    *(float *)(puVar6 + 0xf) = fVar4 + 2.0;
    dVar23 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar10 - 0xf0,0);
    pos[2] = (float)dVar23;
    fVar1 = 0.0;
    rot[3] = 0.0;
    rot[2] = 0.0;
    rot[1] = 0.0;
    *rot = 0.0;
    fVar2 = *(float *)((int)&pSVar5->points[1].x + iVar13) - *pfVar20;
    fVar4 = *(float *)((int)&pSVar5->points[1].y + iVar13) -
            *(float *)((int)&pSVar5->points[0].y + iVar13);
    fVar7 = ABS(fVar2);
    *(float *)(puVar6 + 0x10) = fVar2;
    fVar3 = ABS(fVar4);
    *(float *)((int)puVar6 + 0x84) = fVar4;
    *(float *)(puVar6 + 0x11) = fVar7 - fVar3;
    iVar13 = (int)(((ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar6 + 0x11) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1d) & 4) << 2);
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar13);
    fVar2 = *(float *)(&DAT_00735904 + iVar13);
    if (0.0 <= *(float *)(puVar6 + 0x11)) {
      fVar7 = ABS(*(float *)((int)puVar6 + 0x84));
      fVar3 = ABS(*(float *)(puVar6 + 0x10));
    }
    if (0.0 < fVar3) {
      iVar13 = 4;
      fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
      lVar21 = lVar12;
      do {
        iVar13 = iVar13 + -1;
        *(float *)((int)lVar21 + 0xa4) = fVar3;
        lVar21 = lVar21 + 4;
      } while (iVar13 != 0);
      fVar3 = fVar3 * fVar3;
      lVar21 = uVar10 - 0x150;
      iVar13 = 4;
      fVar7 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar3;
      *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar7;
      *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar7 * fVar3;
      do {
        iVar13 = iVar13 + -1;
        *(float *)((int)lVar21 + 0xa4) = *(float *)((int)lVar21 + 0x94) * fVar7 * fVar7;
        lVar21 = lVar21 + 4;
      } while (iVar13 != 0);
      iVar13 = 8;
      lVar21 = lVar12;
      do {
        pfVar20 = (float *)((int)&DAT_007358e0 + iVar18);
        iVar13 = iVar13 + -1;
        iVar18 = iVar18 + 4;
        *(float *)((int)lVar21 + 0xa4) = *(float *)((int)lVar21 + 0xa4) * *pfVar20;
        lVar21 = lVar21 + 4;
      } while (iVar13 != 0);
      iVar13 = 8;
      do {
        iVar13 = iVar13 + -1;
        iVar18 = (int)lVar12;
        lVar12 = lVar12 + 4;
        fVar1 = fVar1 + *(float *)(iVar18 + 0xa4);
      } while (iVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar4 + fVar2;
    }
    rot[2] = fVar1;
  }
  return;
}



//==== 000a7968  ns=hero  size=0x12f4
// sig: undefined Hero_UpdateHoverboardRace(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(8): 00078178 freeze::DisplayPrompt; 000a0c38 hero::Hero_Warp; 000a71a0 hero::Hero_GetHoverboardRespawn; 000c8b28 hud::Hud_SetEntryValueById; 000d5bf8 hud::Hud_DecHideCounter; 0011b728 mobyutil::MB_UnlockSkillPoint; 001367d0 path::PathFindClosestPnt; 005026a0 fastfunc::FastSubRots

void hero::Hero_UpdateHoverboardRace(void)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  Spline *pSVar8;
  undefined1 auVar9 [16];
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  short sVar17;
  byte bVar18;
  ulonglong uVar19;
  int iVar21;
  longlong lVar20;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  undefined4 *puVar27;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  undefined4 *puVar28;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar29;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  float afStack_1b0 [4];
  float afStack_1a0 [104];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar1 = uVar19 - 0x220;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar19;
  puVar10[0x46] = in_LR;
  puVar10[0x41] = in_f29;
  puVar10[0x42] = in_f30;
  puVar10[0x43] = in_f31;
  puVar10[0x39] = unaff_r24;
  puVar28 = &g_heroMtx;
  puVar10[0x40] = unaff_r31;
  iVar5 = g_heroBoardMoby;
  g_RaceTime = g_RaceTime + 1;
  bVar2 = g_heroBoardMoby != 0;
  puVar10[0x3f] = unaff_r30;
  puVar10[0x3e] = unaff_r29;
  puVar10[0x3d] = unaff_r28;
  puVar10[0x3c] = unaff_r27;
  puVar10[0x3b] = unaff_r26;
  puVar10[0x3a] = unaff_r25;
  puVar10[0x38] = unaff_r23;
  puVar10[0x37] = unaff_r22;
  puVar10[0x36] = unaff_r21;
  puVar10[0x35] = unaff_r20;
  puVar10[0x34] = unaff_r19;
  puVar10[0x33] = unaff_r18;
  if (bVar2) {
    iVar5 = *(int *)(iVar5 + 0x78);
    if (*(int *)(iVar5 + 0x20) != -1) {
      pSVar8 = Splines[*(int *)(iVar5 + 0x20)];
      if (Level == Kalebo) {
        if ((SQRT((g_heroPosition.x - 163.0) * (g_heroPosition.x - 163.0) +
                  (g_heroPosition.y - 119.0) * (g_heroPosition.y - 119.0) +
                  (g_heroPosition.z - 80.0) * (g_heroPosition.z - 80.0)) < 11.0) &&
           ((0x46 < DAT_0096a578 || (DAT_0096a578 < 3)))) {
          if (2 < DAT_0096a578) {
            DAT_0096a57a = DAT_0096a57a + 1;
          }
          DAT_0096a578 = 0xd;
        }
        if ((SQRT((g_heroPosition.x - 223.0) * (g_heroPosition.x - 223.0) +
                  (g_heroPosition.y - 281.0) * (g_heroPosition.y - 281.0) +
                  (g_heroPosition.z - 93.0) * (g_heroPosition.z - 93.0)) < 7.0) &&
           (DAT_0096a578 < 0x3b)) {
          DAT_0096a578 = 0x3b;
        }
      }
      uVar6 = pSVar8->cnt;
      lVar29 = (longlong)DAT_0096a578 + (ulonglong)uVar6 + 1;
      lVar29 = lVar29 - (longlong)((int)lVar29 / (int)uVar6) * (longlong)(int)uVar6;
      iVar24 = (int)lVar29;
      iVar21 = (int)((longlong)DAT_0096a578 << 4);
      pfVar15 = (float *)((int)&pSVar8->points[0].y + iVar21);
      pfVar14 = (float *)((int)&pSVar8->points[0].x + iVar21);
      fVar3 = pSVar8->points[iVar24].x - *pfVar14;
      fVar4 = pSVar8->points[iVar24].y - *pfVar15;
      fVar12 = ABS(fVar3);
      fVar11 = ABS(fVar4);
      DAT_0096a594 = pSVar8;
      *(float *)(puVar10 + 0x18) = fVar3;
      *(float *)((int)puVar10 + 0xc4) = fVar4;
      *(float *)(puVar10 + 0x19) = fVar12 - fVar11;
      dVar36 = 0.0;
      iVar21 = (int)(((ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar10 + 0x19) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1d) & 4) << 2);
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar21);
      fVar3 = *(float *)(&DAT_00735904 + iVar21);
      if (0.0 <= *(float *)(puVar10 + 0x19)) {
        fVar12 = ABS(*(float *)((int)puVar10 + 0xc4));
        fVar11 = ABS(*(float *)(puVar10 + 0x18));
      }
      dVar34 = 0.7853981852531433;
      dVar30 = dVar36;
      if (0.0 < fVar11) {
        iVar21 = 4;
        fVar11 = (fVar12 - fVar11) / (fVar12 + fVar11);
        lVar20 = lVar1;
        do {
          iVar21 = iVar21 + -1;
          *(float *)((int)lVar20 + 0x14c) = fVar11;
          lVar20 = lVar20 + 4;
        } while (iVar21 != 0);
        fVar11 = fVar11 * fVar11;
        lVar20 = uVar19 - 0x210;
        iVar21 = 4;
        fVar12 = fVar11 * fVar11;
        *(float *)(puVar10 + 0x2a) = *(float *)(puVar10 + 0x2a) * fVar11;
        *(float *)((int)puVar10 + 0x154) = *(float *)((int)puVar10 + 0x154) * fVar12;
        *(float *)(puVar10 + 0x2b) = *(float *)(puVar10 + 0x2b) * fVar12 * fVar11;
        do {
          iVar21 = iVar21 + -1;
          *(float *)((int)lVar20 + 0x14c) = *(float *)((int)lVar20 + 0x13c) * fVar12 * fVar12;
          lVar20 = lVar20 + 4;
        } while (iVar21 != 0);
        iVar21 = 0;
        iVar23 = 8;
        lVar20 = lVar1;
        do {
          iVar23 = iVar23 + -1;
          pfVar13 = (float *)((int)&DAT_007358e0 + iVar21);
          iVar21 = iVar21 + 4;
          *(float *)((int)lVar20 + 0x14c) = *(float *)((int)lVar20 + 0x14c) * *pfVar13;
          lVar20 = lVar20 + 4;
        } while (iVar23 != 0);
        iVar21 = 8;
        lVar20 = lVar1;
        do {
          iVar21 = iVar21 + -1;
          iVar23 = (int)lVar20;
          lVar20 = lVar20 + 4;
          dVar30 = (double)(float)(dVar30 + (double)*(float *)(iVar23 + 0x14c));
        } while (iVar21 != 0);
        dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar4 + fVar3);
      }
      fVar3 = g_heroPosition.x - *pfVar14;
      fVar4 = g_heroPosition.y - *pfVar15;
      fVar12 = ABS(fVar3);
      *(float *)((int)puVar10 + 0xb4) = fVar3;
      fVar11 = ABS(fVar4);
      *(float *)(puVar10 + 0x17) = fVar4;
      *(float *)((int)puVar10 + 0xbc) = fVar12 - fVar11;
      iVar21 = (int)(((ulonglong)(*(uint *)((int)puVar10 + 0xb4) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar10 + 0xbc) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar10 + 0x17) >> 0x1d) & 4) << 2);
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar21);
      fVar3 = *(float *)(&DAT_00735904 + iVar21);
      if (0.0 <= *(float *)((int)puVar10 + 0xbc)) {
        fVar12 = ABS(*(float *)(puVar10 + 0x17));
        fVar11 = ABS(*(float *)((int)puVar10 + 0xb4));
      }
      dVar35 = dVar36;
      if (0.0 < fVar11) {
        iVar21 = 4;
        fVar11 = (fVar12 - fVar11) / (fVar12 + fVar11);
        lVar20 = lVar1;
        do {
          iVar21 = iVar21 + -1;
          *(float *)((int)lVar20 + 300) = fVar11;
          lVar20 = lVar20 + 4;
        } while (iVar21 != 0);
        fVar11 = fVar11 * fVar11;
        lVar20 = uVar19 - 0x210;
        iVar21 = 4;
        fVar12 = fVar11 * fVar11;
        *(float *)(puVar10 + 0x26) = *(float *)(puVar10 + 0x26) * fVar11;
        *(float *)((int)puVar10 + 0x134) = *(float *)((int)puVar10 + 0x134) * fVar12;
        *(float *)(puVar10 + 0x27) = *(float *)(puVar10 + 0x27) * fVar12 * fVar11;
        do {
          iVar21 = iVar21 + -1;
          *(float *)((int)lVar20 + 300) = *(float *)((int)lVar20 + 0x11c) * fVar12 * fVar12;
          lVar20 = lVar20 + 4;
        } while (iVar21 != 0);
        iVar21 = 0;
        iVar23 = 8;
        lVar20 = lVar1;
        do {
          iVar23 = iVar23 + -1;
          pfVar14 = (float *)((int)&DAT_007358e0 + iVar21);
          iVar21 = iVar21 + 4;
          *(float *)((int)lVar20 + 300) = *(float *)((int)lVar20 + 300) * *pfVar14;
          lVar20 = lVar20 + 4;
        } while (iVar23 != 0);
        iVar21 = 8;
        lVar20 = lVar1;
        do {
          iVar21 = iVar21 + -1;
          iVar23 = (int)lVar20;
          lVar20 = lVar20 + 4;
          dVar35 = (double)(float)(dVar35 + (double)*(float *)(iVar23 + 300));
        } while (iVar21 != 0);
        dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar4 + fVar3);
      }
      dVar30 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar35);
      bVar18 = DAT_0096a58e;
      dVar35 = 1.5707963705062866;
      if ((dVar30 < 1.5707963705062866) && (DAT_0096a578 = (short)lVar29, iVar24 == 0)) {
        DAT_0096a57a = DAT_0096a57a + 1;
      }
      bVar2 = false;
      if ((Level == Kalebo) &&
         (g_heroPosition.z <
          *(float *)((int)&pSVar8->points[0].z + (int)((longlong)DAT_0096a578 << 4)) - 2.0)) {
        bVar2 = true;
        puVar10[0x30] = (longlong)(int)(animationSpeed * 70.5);
        if ((int)(uint)bVar18 < *(int *)((int)puVar10 + 0x184)) {
          puVar10[0x30] = (longlong)(int)(animationSpeed * 70.5);
          uVar7 = *(undefined4 *)((int)puVar10 + 0x184);
          *(undefined4 *)(puVar10 + 0x2e) = uVar7;
          *(undefined4 *)((int)puVar10 + 0x174) = uVar7;
          *(undefined4 *)(puVar10 + 0x2f) = uVar7;
          *(undefined4 *)((int)puVar10 + 0x17c) = uVar7;
          auVar9 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                   (undefined1  [16])0xff;
          DAT_0096a58e = storeVectorElementByteIndexed
                                   (auVar9 | auVar9 << 8 | auVar9 << 0x10 | auVar9 << 0x18 |
                                    auVar9 << 0x20 | auVar9 << 0x28 | auVar9 << 0x30 |
                                    auVar9 << 0x38 | auVar9 << 0x40 | auVar9 << 0x48 |
                                    auVar9 << 0x50 | auVar9 << 0x58 | auVar9 << 0x60 |
                                    auVar9 << 0x68 | auVar9 << 0x70 | auVar9 << 0x78,0x8ae,0x969ce0)
          ;
        }
      }
      iVar21 = pSVar8->cnt;
      iVar23 = DAT_0096a5a8 + iVar21 + 1;
      iVar24 = (int)((longlong)DAT_0096a5a8 << 4);
      iVar21 = (iVar23 - (iVar23 / iVar21) * iVar21) * 0x10;
      fVar3 = *(float *)((int)pSVar8 + iVar21 + 0x10) -
              *(float *)((int)&pSVar8->points[0].x + iVar24);
      fVar4 = *(float *)((int)pSVar8 + iVar21 + 0x14) -
              *(float *)((int)&pSVar8->points[0].y + iVar24);
      dVar30 = ABS((double)fVar3);
      *(float *)(puVar10 + 0x15) = fVar3;
      dVar32 = ABS((double)fVar4);
      *(float *)((int)puVar10 + 0xac) = fVar4;
      *(float *)(puVar10 + 0x16) = (float)(dVar30 - dVar32);
      iVar21 = (int)(((ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1d) & 4) << 2);
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar21);
      fVar3 = *(float *)(&DAT_00735904 + iVar21);
      if (dVar36 <= (double)*(float *)(puVar10 + 0x16)) {
        dVar30 = ABS((double)*(float *)((int)puVar10 + 0xac));
        dVar32 = ABS((double)*(float *)(puVar10 + 0x15));
      }
      dVar31 = dVar36;
      if (dVar36 < dVar32) {
        iVar21 = 4;
        fVar11 = (float)(dVar30 - dVar32) / (float)(dVar30 + dVar32);
        lVar29 = lVar1;
        do {
          iVar21 = iVar21 + -1;
          *(float *)((int)lVar29 + 0x10c) = fVar11;
          lVar29 = lVar29 + 4;
        } while (iVar21 != 0);
        fVar11 = fVar11 * fVar11;
        lVar29 = uVar19 - 0x210;
        iVar21 = 4;
        fVar12 = fVar11 * fVar11;
        *(float *)(puVar10 + 0x22) = *(float *)(puVar10 + 0x22) * fVar11;
        *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar12;
        *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar12 * fVar11;
        do {
          iVar21 = iVar21 + -1;
          *(float *)((int)lVar29 + 0x10c) = *(float *)((int)lVar29 + 0xfc) * fVar12 * fVar12;
          lVar29 = lVar29 + 4;
        } while (iVar21 != 0);
        iVar21 = 0;
        iVar24 = 8;
        lVar29 = lVar1;
        do {
          pfVar14 = (float *)((int)&DAT_007358e0 + iVar21);
          iVar24 = iVar24 + -1;
          iVar21 = iVar21 + 4;
          *(float *)((int)lVar29 + 0x10c) = *(float *)((int)lVar29 + 0x10c) * *pfVar14;
          lVar29 = lVar29 + 4;
        } while (iVar24 != 0);
        iVar21 = 8;
        lVar29 = lVar1;
        dVar30 = dVar36;
        do {
          iVar21 = iVar21 + -1;
          iVar24 = (int)lVar29;
          lVar29 = lVar29 + 4;
          dVar30 = (double)(float)(dVar30 + (double)*(float *)(iVar24 + 0x10c));
        } while (iVar21 != 0);
        dVar31 = (double)((float)(dVar30 + dVar34) * fVar4 + fVar3);
      }
      if ((bVar2) ||
         ((dVar30 = (double)fastfunc::FastSubRots(g_heroRotation.z,(float)dVar31), dVar35 < dVar30
          && (DAT_0096a56d == '\0')))) {
        DAT_0096a58e = DAT_0096a58e + 1;
        uVar6 = (uint)DAT_0096a58e;
        puVar10[0x30] = (longlong)(int)(animationSpeed * 180.5);
        if (*(int *)((int)puVar10 + 0x184) < (int)uVar6) {
          if (DAT_00a1a848 == 0) {
            DAT_00a1a848 = 1;
            DAT_00a1a84c = 0;
            DAT_00720bbc = DAT_0071f408 * 0.08;
          }
          DAT_0096a58f = '\x01';
          if (DAT_00a1a84c == 1) {
            DAT_0096a58f = '\0';
            Hero_GetHoverboardRespawn(afStack_1b0,afStack_1a0);
            DAT_0096a554 = *(undefined4 *)(puVar10 + 0x11);
            DAT_0096a58e = 0;
            Hero_Warp(afStack_1b0,afStack_1a0,0x6b,1);
            if ((DAT_0096a594 != (Spline *)0x0) &&
               (iVar21 = path::PathFindClosestPnt
                                   ((float)dVar36,(Vec4 *)&g_heroPosition,DAT_0096a594),
               iVar21 < DAT_0096a578)) {
              DAT_0096a578 = (short)iVar21;
            }
          }
        }
      }
      else if (DAT_0096a58f == '\0') {
        DAT_0096a58e = 0;
      }
      iVar21 = 0;
      if (0 < *(int *)(iVar5 + 0x40)) {
        iVar23 = 0;
        iVar24 = 0;
        puVar27 = puVar28;
        do {
          uVar6 = pSVar8->cnt;
          lVar29 = (longlong)*(short *)(puVar27 + 0x1ec) + (ulonglong)uVar6 + 1;
          iVar25 = (int)((longlong)*(short *)(puVar27 + 0x1ec) << 4);
          lVar29 = lVar29 - (longlong)((int)lVar29 / (int)uVar6) * (longlong)(int)uVar6;
          pfVar14 = (float *)((int)&pSVar8->points[0].x + iVar25);
          iVar16 = (int)lVar29;
          pfVar15 = (float *)((int)&pSVar8->points[0].y + iVar25);
          fVar3 = pSVar8->points[iVar16].x - *pfVar14;
          fVar4 = pSVar8->points[iVar16].y - *pfVar15;
          dVar30 = ABS((double)fVar3);
          *(float *)((int)puVar10 + 0x9c) = fVar3;
          dVar32 = ABS((double)fVar4);
          *(float *)(puVar10 + 0x14) = fVar4;
          *(float *)((int)puVar10 + 0xa4) = (float)(dVar30 - dVar32);
          uVar22 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar3 = *(float *)((uint)(uVar22 << 2) | 0x735904);
          if (dVar36 <= (double)*(float *)((int)puVar10 + 0xa4)) {
            dVar30 = ABS((double)*(float *)(puVar10 + 0x14));
            dVar32 = ABS((double)*(float *)((int)puVar10 + 0x9c));
          }
          dVar31 = dVar36;
          if (dVar36 < dVar32) {
            iVar25 = 4;
            fVar11 = (float)(dVar30 - dVar32) / (float)(dVar30 + dVar32);
            lVar20 = lVar1;
            do {
              iVar25 = iVar25 + -1;
              *(float *)((int)lVar20 + 0xec) = fVar11;
              lVar20 = lVar20 + 4;
            } while (iVar25 != 0);
            fVar11 = fVar11 * fVar11;
            lVar20 = uVar19 - 0x210;
            iVar25 = 4;
            fVar12 = fVar11 * fVar11;
            *(float *)(puVar10 + 0x1e) = *(float *)(puVar10 + 0x1e) * fVar11;
            *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar12;
            *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar12 * fVar11;
            do {
              iVar25 = iVar25 + -1;
              *(float *)((int)lVar20 + 0xec) = *(float *)((int)lVar20 + 0xdc) * fVar12 * fVar12;
              lVar20 = lVar20 + 4;
            } while (iVar25 != 0);
            iVar25 = 0;
            iVar26 = 8;
            lVar20 = lVar1;
            do {
              pfVar13 = (float *)((int)&DAT_007358e0 + iVar25);
              iVar26 = iVar26 + -1;
              iVar25 = iVar25 + 4;
              *(float *)((int)lVar20 + 0xec) = *(float *)((int)lVar20 + 0xec) * *pfVar13;
              lVar20 = lVar20 + 4;
            } while (iVar26 != 0);
            iVar25 = 8;
            lVar20 = lVar1;
            dVar30 = dVar36;
            do {
              iVar25 = iVar25 + -1;
              iVar26 = (int)lVar20;
              lVar20 = lVar20 + 4;
              dVar30 = (double)(float)(dVar30 + (double)*(float *)(iVar26 + 0xec));
            } while (iVar25 != 0);
            dVar31 = (double)((float)(dVar30 + dVar34) * fVar4 + fVar3);
          }
          fVar3 = MobyInstance[*(int *)(iVar5 + 0x2c + iVar23)].pos.x - *pfVar14;
          fVar4 = MobyInstance[*(int *)(iVar5 + 0x2c + iVar23)].pos.y - *pfVar15;
          dVar30 = ABS((double)fVar3);
          dVar32 = ABS((double)fVar4);
          *(float *)(puVar10 + 0x12) = fVar3;
          *(float *)((int)puVar10 + 0x94) = fVar4;
          *(float *)(puVar10 + 0x13) = (float)(dVar30 - dVar32);
          uVar22 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar3 = *(float *)((uint)(uVar22 << 2) | 0x735904);
          if (dVar36 <= (double)*(float *)(puVar10 + 0x13)) {
            dVar30 = ABS((double)*(float *)((int)puVar10 + 0x94));
            dVar32 = ABS((double)*(float *)(puVar10 + 0x12));
          }
          dVar33 = dVar36;
          if (dVar36 < dVar32) {
            iVar25 = 4;
            fVar11 = (float)(dVar30 - dVar32) / (float)(dVar30 + dVar32);
            lVar20 = lVar1;
            do {
              iVar25 = iVar25 + -1;
              *(float *)((int)lVar20 + 0xcc) = fVar11;
              lVar20 = lVar20 + 4;
            } while (iVar25 != 0);
            fVar11 = fVar11 * fVar11;
            lVar20 = uVar19 - 0x210;
            iVar25 = 4;
            fVar12 = fVar11 * fVar11;
            *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar11;
            *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar12;
            *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar12 * fVar11;
            do {
              iVar25 = iVar25 + -1;
              *(float *)((int)lVar20 + 0xcc) = *(float *)((int)lVar20 + 0xbc) * fVar12 * fVar12;
              lVar20 = lVar20 + 4;
            } while (iVar25 != 0);
            iVar25 = 0;
            iVar26 = 8;
            lVar20 = lVar1;
            do {
              iVar26 = iVar26 + -1;
              pfVar14 = (float *)((int)&DAT_007358e0 + iVar25);
              iVar25 = iVar25 + 4;
              *(float *)((int)lVar20 + 0xcc) = *(float *)((int)lVar20 + 0xcc) * *pfVar14;
              lVar20 = lVar20 + 4;
            } while (iVar26 != 0);
            iVar25 = 8;
            lVar20 = lVar1;
            dVar30 = dVar36;
            do {
              iVar25 = iVar25 + -1;
              iVar26 = (int)lVar20;
              lVar20 = lVar20 + 4;
              dVar30 = (double)(float)(dVar30 + (double)*(float *)(iVar26 + 0xcc));
            } while (iVar25 != 0);
            dVar33 = (double)((float)(dVar30 + dVar34) * fVar4 + fVar3);
          }
          dVar30 = (double)fastfunc::FastSubRots((float)dVar31,(float)dVar33);
          if ((dVar30 < dVar35) && (*(short *)(puVar27 + 0x1ec) = (short)lVar29, iVar16 == 0)) {
            *(short *)((int)&DAT_0096a480 + iVar24) = *(short *)(puVar27 + 0x1e8) + 1;
          }
          iVar21 = iVar21 + 1;
          iVar23 = iVar23 + 4;
          iVar24 = iVar24 + 2;
          puVar27 = (undefined4 *)((int)puVar27 + 2);
        } while (iVar21 < *(int *)(iVar5 + 0x40));
      }
      iVar21 = 0;
      DAT_0096a5a0 = 1;
      if (0 < *(int *)(iVar5 + 0x40)) {
        iVar24 = 0;
        puVar27 = puVar28;
        do {
          if ((DAT_0096a57a < *(short *)(puVar27 + 0x1e8)) ||
             ((*(short *)((int)&DAT_0096a480 + iVar24) == DAT_0096a57a &&
              (DAT_0096a578 <= *(short *)(puVar27 + 0x1ec))))) {
            DAT_0096a5a0 = DAT_0096a5a0 + 1;
          }
          iVar21 = iVar21 + 1;
          puVar27 = (undefined4 *)((int)puVar27 + 2);
          iVar24 = iVar24 + 2;
        } while (iVar21 < *(int *)(iVar5 + 0x40));
      }
      iVar21 = 0;
      if (0 < *(int *)(iVar5 + 0x40)) {
        iVar24 = 0;
        do {
          sVar17 = DAT_0096a57a;
          *(undefined2 *)(puVar28 + 0x1f0) = 1;
          if ((*(short *)(puVar28 + 0x1e8) < sVar17) ||
             ((*(short *)((int)&DAT_0096a480 + iVar24) == sVar17 &&
              (*(short *)(puVar28 + 0x1ec) < DAT_0096a578)))) {
            *(short *)((int)&DAT_0096a4a0 + iVar24) = *(short *)((int)&DAT_0096a4a0 + iVar24) + 1;
          }
          iVar23 = 0;
          if (0 < *(int *)(iVar5 + 0x40)) {
            iVar25 = 0;
            do {
              if (((short)(&DAT_0096a480)[iVar21] < *(short *)((int)&DAT_0096a480 + iVar25)) ||
                 (((&DAT_0096a480)[iVar21] == *(short *)((int)&DAT_0096a480 + iVar25) &&
                  ((short)(&DAT_0096a490)[iVar21] < *(short *)((int)&DAT_0096a490 + iVar25))))) {
                (&DAT_0096a4a0)[iVar21] = (&DAT_0096a4a0)[iVar21] + 1;
              }
              iVar23 = iVar23 + 1;
              iVar25 = iVar25 + 2;
            } while (iVar23 < *(int *)(iVar5 + 0x40));
          }
          iVar21 = iVar21 + 1;
          iVar24 = iVar24 + 2;
          puVar28 = (undefined4 *)((int)puVar28 + 2);
        } while (iVar21 < *(int *)(iVar5 + 0x40));
      }
      if (2 < DAT_0096a57a) {
        if (MiscLevelFlags.Zoomerator != false) {
          DAT_00a1a864 = 1;
        }
        if (Level == Rilgar) {
          DAT_00a10548 = DAT_00a10548 + 1;
        }
        else if (Level == Kalebo) {
          DAT_00a1054c = DAT_00a1054c + 1;
        }
        if (Level == Rilgar) {
          if (g_IsPal == 0) {
            puVar10[0x30] = (longlong)(int)(animationSpeed * 5700.5);
            iVar21 = *(int *)((int)puVar10 + 0x184);
          }
          else {
            puVar10[0x30] = (longlong)(int)(animationSpeed * 5760.5);
            iVar21 = *(int *)((int)puVar10 + 0x184);
          }
          if (g_RaceTime <= iVar21) {
            mobyutil::MB_UnlockSkillPoint(9);
          }
          iVar21 = *(int *)(iVar5 + 0x28);
          if (iVar21 != -1) {
            if ((MiscLevelFlags.Zoomerator == false) && (DAT_0096a5a0 == 1)) {
              MobyInstance[iVar21].setByGroup = '\x01';
            }
            else {
              DAT_0096a570 = MobyInstance + iVar21;
              freeze::DisplayPrompt(0,0,0);
            }
            if (g_BoltsRewardedFromRacePB == 0) {
              g_boltCount = g_boltCount + 1000;
              g_BoltsRewardedFromRacePB = g_RaceTime;
              g_totalBoltsCollected = g_totalBoltsCollected + 1000;
            }
            else if (g_RaceTime < g_BoltsRewardedFromRacePB) {
              g_BoltsRewardedFromRacePB = g_RaceTime;
              g_boltCount = g_boltCount + 1000;
              g_totalBoltsCollected = g_totalBoltsCollected + 1000;
            }
            if (DAT_00a0cd10 < g_RaceScore) {
              g_boltCount = g_boltCount + 1000;
              DAT_00a0cd10 = g_RaceScore;
              g_totalBoltsCollected = g_totalBoltsCollected + 1000;
            }
            MobyInstance[*(int *)(iVar5 + 0x28)].updateDistance = -1;
            if (DAT_0096a560 != -1) {
              hud::Hud_SetEntryValueById(DAT_0096a560,0);
              DAT_0096a560 = -1;
            }
            hud::Hud_DecHideCounter();
          }
        }
        else if ((Level == Kalebo) && (iVar21 = *(int *)(iVar5 + 0x28), iVar21 != -1)) {
          if ((UnlockableItems.hologuise == '\0') && (DAT_0096a5a0 == 1)) {
            MobyInstance[iVar21].setByGroup = '\x01';
          }
          else {
            DAT_0096a570 = MobyInstance + iVar21;
            freeze::DisplayPrompt(0,0,0);
          }
          if (DAT_00a0cd08 == 0) {
            g_boltCount = g_boltCount + 1000;
            DAT_00a0cd08 = g_RaceTime;
            g_totalBoltsCollected = g_totalBoltsCollected + 1000;
          }
          else if (g_RaceTime < DAT_00a0cd08) {
            DAT_00a0cd08 = g_RaceTime;
            g_boltCount = g_boltCount + 1000;
            g_totalBoltsCollected = g_totalBoltsCollected + 1000;
          }
          if (DAT_00a0cd14 < g_RaceScore) {
            g_boltCount = g_boltCount + 1000;
            DAT_00a0cd14 = g_RaceScore;
            g_totalBoltsCollected = g_totalBoltsCollected + 1000;
          }
          MobyInstance[*(int *)(iVar5 + 0x28)].updateDistance = -1;
          if (DAT_0096a560 != -1) {
            hud::Hud_SetEntryValueById(DAT_0096a560,0);
            DAT_0096a560 = -1;
          }
          hud::Hud_DecHideCounter();
        }
      }
    }
  }
  return;
}



//==== 000a8ca0  ns=hero  size=0x424
// sig: undefined ???_Hero_ProbeCollAlongVelocity(void)
// callers(1): 000be228 hero::HeroMovement
// callees(2): 00057820 collproc::CollLine; 005026a0 fastfunc::FastSubRots

undefined8 hero::____Hero_ProbeCollAlongVelocity(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar18;
  longlong lVar17;
  longlong lVar19;
  int iVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar21;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0xf0;
  puVar4 = (ulonglong *)lVar17;
  *puVar4 = uVar14;
  puVar4[0x20] = in_LR;
  puVar4[0x1b] = in_f29;
  puVar4[0x1c] = in_f30;
  puVar4[0x1d] = in_f31;
  puVar4[0x1a] = unaff_r31;
  fVar1 = g_heroCollRadius;
  puVar4[0x17] = (longlong)(int)(animationSpeed * 20.5);
  puVar4[0x17] = (longlong)*(int *)((int)puVar4 + 0xbc);
  fVar2 = DAT_00969de0;
  if (fVar1 / (float)(longlong)puVar4[0x17] <= DAT_00969e44) {
    fVar5 = ABS(DAT_00969de0);
    fVar7 = ABS(DAT_00969de4);
    uVar9 = (uint)DAT_00969de4 >> 0x1d;
    *(float *)(puVar4 + 0x12) = fVar5 - fVar7;
    fVar1 = 0.0;
    iVar16 = (int)(((ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar4 + 0x12) >> 0x1e) & 2 | (ulonglong)uVar9 & 4) << 2);
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar16);
    fVar2 = *(float *)(&DAT_00735904 + iVar16);
    fVar6 = fVar5;
    if (0.0 <= *(float *)(puVar4 + 0x12)) {
      fVar6 = fVar7;
      fVar7 = fVar5;
    }
    if (0.0 < fVar7) {
      iVar18 = 4;
      iVar16 = 4;
      fVar5 = (fVar6 - fVar7) / (fVar6 + fVar7);
      lVar19 = lVar17;
      do {
        iVar18 = iVar18 + -1;
        *(float *)((int)lVar19 + 0x94) = fVar5;
        lVar19 = lVar19 + 4;
      } while (iVar18 != 0);
      fVar5 = fVar5 * fVar5;
      lVar19 = uVar14 - 0xe0;
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar4 + 0x13) = *(float *)(puVar4 + 0x13) * fVar5;
      *(float *)((int)puVar4 + 0x9c) = *(float *)((int)puVar4 + 0x9c) * fVar6;
      *(float *)(puVar4 + 0x14) = *(float *)(puVar4 + 0x14) * fVar6 * fVar5;
      do {
        iVar16 = iVar16 + -1;
        *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x84) * fVar6 * fVar6;
        lVar19 = lVar19 + 4;
      } while (iVar16 != 0);
      iVar18 = 8;
      iVar20 = 0;
      iVar16 = 8;
      lVar19 = lVar17;
      do {
        iVar18 = iVar18 + -1;
        pfVar8 = (float *)((int)&DAT_007358e0 + iVar20);
        iVar20 = iVar20 + 4;
        *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x94) * *pfVar8;
        lVar19 = lVar19 + 4;
      } while (iVar18 != 0);
      do {
        iVar16 = iVar16 + -1;
        iVar18 = (int)lVar17;
        lVar17 = lVar17 + 4;
        fVar1 = fVar1 + *(float *)(iVar18 + 0x94);
      } while (iVar16 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar2;
    }
    dVar21 = (double)fastfunc::FastSubRots(fVar1,g_heroRotation.z);
    fVar1 = g_heroPosition.y;
    fVar2 = g_heroPosition.x;
    if (dVar21 <= 0.5235987901687622) {
      *(float *)(puVar4 + 0xe) = g_heroPosition.x;
      fVar6 = g_heroPosition.z;
      *(float *)((int)puVar4 + 0x74) = fVar1;
      fVar7 = g_heroPosition.w;
      *(float *)(puVar4 + 0xf) = fVar6;
      *(float *)((int)puVar4 + 0x7c) = fVar7;
      fVar12 = g_heroRotation.z;
      fVar3 = g_heroRotation.z + 1.5707963;
      fVar5 = fVar3;
      if (3.1415925 - fVar3 <= fVar3) {
        fVar5 = 3.1415925 - fVar3;
      }
      if (fVar5 <= -3.1415925 - fVar3) {
        fVar5 = -3.1415925 - fVar3;
      }
      fVar11 = fVar5 * fVar5;
      fVar3 = fVar11 * fVar11 * fVar5;
      fVar10 = fVar11 * fVar3;
      fVar2 = fVar2 + (fVar5 + fVar11 * fVar5 * -0.16666657 + fVar3 * 0.0083330255 +
                       fVar10 * -0.0001980741 + fVar11 * fVar10 * 2.601887e-06) * g_heroCollRadius *
                      0.75;
      fVar3 = 3.1415925 - g_heroRotation.z;
      *(float *)(puVar4 + 0xe) = fVar2;
      fVar10 = g_heroCollRadius;
      fVar5 = fVar12;
      if (fVar3 <= fVar12) {
        fVar5 = fVar3;
      }
      if (fVar5 <= -3.1415925 - fVar12) {
        fVar5 = -3.1415925 - fVar12;
      }
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar4 + 0x10) = fVar2;
      *(float *)((int)puVar4 + 0x8c) = fVar7;
      pMVar13 = g_heroMobyPtr;
      fVar2 = fVar3 * fVar3 * fVar5;
      fVar7 = fVar3 * fVar2;
      fVar1 = fVar1 + (fVar5 + fVar3 * fVar5 * -0.16666657 + fVar2 * 0.0083330255 +
                       fVar7 * -0.0001980741 + fVar3 * fVar7 * 2.601887e-06) * fVar10 * 0.75;
      *(float *)((int)puVar4 + 0x74) = fVar1;
      *(float *)((int)puVar4 + 0x84) = fVar1;
      *(float *)(puVar4 + 0xf) = fVar6 + 0.47;
      *(float *)(puVar4 + 0x11) = fVar6 - 1.0;
      iVar16 = collproc::CollLine(uVar14 - 0x80,uVar14 - 0x70,2,pMVar13,0);
      if (((iVar16 == 0) || (0.37 <= CollOutput.ip.z - g_heroPosition.z)) ||
         (CollOutput.ip.z - g_heroPosition.z <= -1.0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 0;
    }
  }
  else {
    uVar15 = 0;
  }
  return uVar15;
}



//==== 000a90c4  ns=hero  size=0x4c
// sig: undefined ???_Hero_GetAnimId_52_68_7d_7e(void)
// callers(1): 000be228 hero::HeroMovement
// callees(0): 

undefined8 hero::____Hero_GetAnimId_52_68_7d_7e(void)

{
  undefined8 uVar1;
  
  if (DAT_0096a564 == 0) {
    uVar1 = 0x52;
    if (DAT_0096a5ae != '\0') {
      uVar1 = 0x7d;
    }
  }
  else {
    uVar1 = 0x68;
    if (DAT_0096a5ae != '\0') {
      uVar1 = 0x7e;
    }
  }
  return uVar1;
}



//==== 000a9158  ns=hero  size=0xc0c
// sig: undefined Hero_GrindMotion(void)
// callers(1): 000be228 hero::HeroMovement
// callees(9): 00057820 collproc::CollLine; 00084180 hero::Hero_GetHeroRelativeVector; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 0010cd94 mobyutil::MB_PathStepIndex; 0011b728 mobyutil::MB_UnlockSkillPoint; 001367d0 path::PathFindClosestPnt; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

undefined8 hero::Hero_GrindMotion(void)

{
  float fVar1;
  float fVar2;
  ulonglong *puVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong uVar7;
  int iVar11;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar12;
  float *pfVar13;
  uint uVar14;
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
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar20;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar9 = uVar7 - 0x150;
  puVar3 = (ulonglong *)lVar9;
  *puVar3 = uVar7;
  puVar3[0x2c] = in_LR;
  puVar3[0x28] = in_f30;
  puVar3[0x29] = in_f31;
  puVar3[0x26] = unaff_r30;
  fVar2 = DAT_00969e44;
  fVar1 = mobyutil::g_FrameTime * 12.0;
  puVar3[0x27] = unaff_r31;
  puVar3[0x25] = unaff_r29;
  puVar3[0x24] = unaff_r28;
  puVar3[0x23] = unaff_r27;
  if (fVar1 < fVar2) {
    dVar20 = 0.0;
    Hero_GetHeroRelativeVector(0.0,0.0,0.75,(float *)(puVar3 + 0xe));
    dVar17 = (double)g_heroVelocity;
    dVar19 = (double)DAT_00969dc4;
    fVar1 = DAT_00969dc8 * DAT_00969dc8;
    *(float *)(puVar3 + 0x10) = *(float *)(puVar3 + 0xe);
    *(float *)((int)puVar3 + 0x84) = *(float *)((int)puVar3 + 0x74);
    *(float *)(puVar3 + 0x11) = *(float *)(puVar3 + 0xf);
    dVar18 = (double)SQRT((float)(dVar17 * dVar17) + (float)(dVar19 * dVar19) + fVar1);
    *(undefined4 *)((int)puVar3 + 0x8c) = *(undefined4 *)((int)puVar3 + 0x7c);
    dVar15 = dVar20;
    dVar16 = dVar20;
    if (dVar18 != dVar20) {
      dVar16 = (double)(float)(0.550000011920929 / dVar18);
      dVar15 = (double)(float)(dVar16 * dVar17);
      dVar16 = (double)(float)(dVar16 * dVar19);
    }
    *(undefined4 *)((int)puVar3 + 0x8c) = *(undefined4 *)((int)puVar3 + 0x7c);
    *(float *)(puVar3 + 0x11) = (float)((double)*(float *)(puVar3 + 0xf) + dVar20);
    *(float *)(puVar3 + 0x10) = *(float *)(puVar3 + 0xe) + (float)(dVar15 + dVar17);
    *(float *)((int)puVar3 + 0x84) = *(float *)((int)puVar3 + 0x74) + (float)(dVar16 + dVar19);
    iVar11 = collproc::CollLine(uVar7 - 0xe0,uVar7 - 0xd0,2,0,0);
    fVar1 = CollOutput.normal.z;
    if (((iVar11 != 0) && (CollOutput.pMoby == (MobyInstance *)0x0)) && (CollOutput.poly != 0)) {
      dVar17 = ABS((double)CollOutput.normal.z);
      fVar2 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                   CollOutput.normal.y * CollOutput.normal.y);
      dVar16 = ABS((double)fVar2);
      *(float *)(puVar3 + 0x13) = fVar2;
      *(float *)((int)puVar3 + 0x9c) = (float)(dVar17 - dVar16);
      iVar11 = (int)(((ulonglong)((uint)fVar1 >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar3 + 0x9c) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar3 + 0x13) >> 0x1d) & 4) << 2);
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
      fVar1 = *(float *)(&DAT_00735904 + iVar11);
      dVar15 = dVar17;
      if (dVar20 <= (double)*(float *)((int)puVar3 + 0x9c)) {
        dVar15 = ABS((double)*(float *)(puVar3 + 0x13));
        dVar16 = dVar17;
      }
      dVar18 = 0.7853981852531433;
      dVar17 = dVar20;
      if (dVar20 < dVar16) {
        iVar11 = 4;
        fVar4 = (float)(dVar15 - dVar16) / (float)(dVar15 + dVar16);
        lVar8 = lVar9;
        do {
          iVar11 = iVar11 + -1;
          *(float *)((int)lVar8 + 0xe0) = fVar4;
          lVar8 = lVar8 + 4;
        } while (iVar11 != 0);
        fVar4 = fVar4 * fVar4;
        lVar8 = uVar7 - 0x140;
        iVar11 = 4;
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar3 + 0xe4) = *(float *)((int)puVar3 + 0xe4) * fVar4;
        *(float *)(puVar3 + 0x1d) = *(float *)(puVar3 + 0x1d) * fVar5;
        *(float *)((int)puVar3 + 0xec) = *(float *)((int)puVar3 + 0xec) * fVar5 * fVar4;
        do {
          iVar11 = iVar11 + -1;
          *(float *)((int)lVar8 + 0xe0) = *(float *)((int)lVar8 + 0xd0) * fVar5 * fVar5;
          lVar8 = lVar8 + 4;
        } while (iVar11 != 0);
        iVar11 = 0;
        iVar12 = 8;
        lVar8 = lVar9;
        do {
          iVar12 = iVar12 + -1;
          pfVar13 = (float *)((int)&DAT_007358e0 + iVar11);
          iVar11 = iVar11 + 4;
          *(float *)((int)lVar8 + 0xe0) = *(float *)((int)lVar8 + 0xe0) * *pfVar13;
          lVar8 = lVar8 + 4;
        } while (iVar12 != 0);
        iVar11 = 8;
        lVar8 = lVar9;
        dVar15 = dVar20;
        do {
          iVar11 = iVar11 + -1;
          iVar12 = (int)lVar8;
          lVar8 = lVar8 + 4;
          dVar15 = (double)(float)(dVar15 + (double)*(float *)(iVar12 + 0xe0));
        } while (iVar11 != 0);
        dVar17 = (double)((float)(dVar15 + 0.7853981852531433) * fVar2 + fVar1);
      }
      fVar1 = CollOutput.normal.x;
      if (1.2217304706573486 < dVar17) {
        dVar17 = ABS((double)CollOutput.normal.x);
        dVar16 = ABS((double)CollOutput.normal.y);
        uVar14 = (uint)CollOutput.normal.y >> 0x1d;
        *(float *)((int)puVar3 + 0x94) = (float)(dVar17 - dVar16);
        iVar11 = (int)(((ulonglong)((uint)fVar1 >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar3 + 0x94) >> 0x1e) & 2 |
                       (ulonglong)uVar14 & 4) << 2);
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
        fVar1 = *(float *)(&DAT_00735904 + iVar11);
        dVar15 = dVar17;
        if (dVar20 <= (double)*(float *)((int)puVar3 + 0x94)) {
          dVar15 = dVar16;
          dVar16 = dVar17;
        }
        dVar17 = dVar20;
        if (dVar20 < dVar16) {
          iVar11 = 4;
          fVar4 = (float)(dVar15 - dVar16) / (float)(dVar15 + dVar16);
          lVar8 = lVar9;
          do {
            iVar11 = iVar11 + -1;
            *(float *)((int)lVar8 + 0xc0) = fVar4;
            lVar8 = lVar8 + 4;
          } while (iVar11 != 0);
          fVar4 = fVar4 * fVar4;
          lVar8 = uVar7 - 0x140;
          iVar11 = 4;
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar3 + 0xc4) = *(float *)((int)puVar3 + 0xc4) * fVar4;
          *(float *)(puVar3 + 0x19) = *(float *)(puVar3 + 0x19) * fVar5;
          *(float *)((int)puVar3 + 0xcc) = *(float *)((int)puVar3 + 0xcc) * fVar5 * fVar4;
          do {
            iVar11 = iVar11 + -1;
            *(float *)((int)lVar8 + 0xc0) = *(float *)((int)lVar8 + 0xb0) * fVar5 * fVar5;
            lVar8 = lVar8 + 4;
          } while (iVar11 != 0);
          iVar11 = 0;
          iVar12 = 8;
          lVar8 = lVar9;
          do {
            pfVar13 = (float *)((int)&DAT_007358e0 + iVar11);
            iVar12 = iVar12 + -1;
            iVar11 = iVar11 + 4;
            *(float *)((int)lVar8 + 0xc0) = *(float *)((int)lVar8 + 0xc0) * *pfVar13;
            lVar8 = lVar8 + 4;
          } while (iVar12 != 0);
          iVar11 = 8;
          lVar8 = lVar9;
          dVar15 = dVar20;
          do {
            iVar11 = iVar11 + -1;
            iVar12 = (int)lVar8;
            lVar8 = lVar8 + 4;
            dVar15 = (double)(float)(dVar15 + (double)*(float *)(iVar12 + 0xc0));
          } while (iVar11 != 0);
          dVar17 = (double)((float)(dVar15 + 0.7853981852531433) * fVar2 + fVar1);
        }
        dVar15 = (double)fastfunc::FastWrapRot((float)dVar17,3.1415927);
        fVar1 = g_heroVelocity;
        dVar17 = ABS((double)g_heroVelocity);
        DAT_0096a584 = (float)dVar15;
        dVar16 = ABS((double)DAT_00969dc4);
        uVar14 = (uint)DAT_00969dc4 >> 0x1d;
        *(float *)(puVar3 + 0x12) = (float)(dVar17 - dVar16);
        iVar11 = (int)(((ulonglong)((uint)fVar1 >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar3 + 0x12) >> 0x1e) & 2 | (ulonglong)uVar14 & 4) <<
                      2);
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
        fVar1 = *(float *)(&DAT_00735904 + iVar11);
        dVar15 = dVar17;
        if (dVar20 <= (double)*(float *)(puVar3 + 0x12)) {
          dVar15 = dVar16;
          dVar16 = dVar17;
        }
        if (dVar20 < dVar16) {
          iVar11 = 4;
          fVar4 = (float)(dVar15 - dVar16) / (float)(dVar15 + dVar16);
          lVar8 = lVar9;
          do {
            iVar11 = iVar11 + -1;
            *(float *)((int)lVar8 + 0xa0) = fVar4;
            lVar8 = lVar8 + 4;
          } while (iVar11 != 0);
          fVar4 = fVar4 * fVar4;
          lVar8 = uVar7 - 0x140;
          iVar11 = 4;
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar3 + 0xa4) = *(float *)((int)puVar3 + 0xa4) * fVar4;
          *(float *)(puVar3 + 0x15) = *(float *)(puVar3 + 0x15) * fVar5;
          *(float *)((int)puVar3 + 0xac) = *(float *)((int)puVar3 + 0xac) * fVar5 * fVar4;
          do {
            iVar11 = iVar11 + -1;
            *(float *)((int)lVar8 + 0xa0) = *(float *)((int)lVar8 + 0x90) * fVar5 * fVar5;
            lVar8 = lVar8 + 4;
          } while (iVar11 != 0);
          iVar11 = 0;
          iVar12 = 8;
          lVar8 = lVar9;
          do {
            iVar12 = iVar12 + -1;
            pfVar13 = (float *)((int)&DAT_007358e0 + iVar11);
            iVar11 = iVar11 + 4;
            *(float *)((int)lVar8 + 0xa0) = *(float *)((int)lVar8 + 0xa0) * *pfVar13;
            lVar8 = lVar8 + 4;
          } while (iVar12 != 0);
          iVar11 = 8;
          do {
            iVar11 = iVar11 + -1;
            iVar12 = (int)lVar9;
            lVar9 = lVar9 + 4;
            dVar20 = (double)(float)(dVar20 + (double)*(float *)(iVar12 + 0xa0));
          } while (iVar11 != 0);
          dVar20 = (double)((float)(dVar20 + dVar18) * fVar2 + fVar1);
        }
        dVar15 = (double)fastfunc::FastSubRots((float)dVar20,DAT_0096a584);
        if (dVar15 < dVar18) {
          if (g_heroGroundDist < 1.0) {
            TransitionMovement(0x6f,1);
            return 1;
          }
          TransitionMovement(0x6d,1);
          return 1;
        }
      }
    }
  }
  if ((DAT_00969f37 == '\0') ||
     (SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4) * 0.25 <=
      SQRT(DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4))) {
    if ((Level != Rilgar) || (61.4 <= g_heroPosition.z)) {
      if ((Level != Kalebo) || (76.0 <= g_heroPosition.z)) {
        if ((Level != Kalebo) || ((DAT_0096afca == '\0' || (0.1 <= g_heroGroundDist)))) {
          if ((DAT_00969fec == 0) && (DAT_0096a594 != (Spline *)0x0)) {
            iVar11 = path::PathFindClosestPnt(0.0,(Vec4 *)&g_heroPosition,DAT_0096a594);
            iVar12 = mobyutil::MB_PathStepIndex(&DAT_0096a594->cnt,iVar11,-1,1);
            DAT_0096a5a8 = (undefined2)iVar11;
            if (Level == Rilgar) {
              iVar11 = (int)((longlong)iVar11 << 4);
              pfVar13 = (float *)((int)&DAT_0096a594->points[0].z + iVar11);
              pfVar6 = (float *)((int)&DAT_0096a594->points[0].z + (int)((longlong)iVar12 << 4));
              if (*pfVar6 <= *pfVar13) {
                fVar1 = *pfVar6;
              }
              else {
                fVar1 = *pfVar13;
              }
              pfVar13 = (float *)((int)&DAT_0096a594->points[0].x + iVar11);
              fVar2 = g_heroPosition.x - *pfVar13;
              fVar4 = g_heroPosition.y - pfVar13[1];
              if ((0.5 < fVar1 - g_heroPosition.z) && (4.0 < SQRT(fVar2 * fVar2 + fVar4 * fVar4))) {
                TransitionMovement(0x6d,1);
                return 1;
              }
            }
          }
          if (((((DAT_00969fec == 0) && (DAT_0096a59c != 0)) && (DAT_0096a57c == 0)) &&
              ((g_heroMobyPtr->animationId == 'U' || (g_heroMobyPtr->animationId == '\x7f')))) &&
             ((byte)g_heroMobyPtr->animationFrame < 0xd)) {
            iVar11 = 0x55;
            if (DAT_0096a5ae != '\0') {
              iVar11 = 0x7f;
            }
            puVar3[0x20] = (longlong)(int)(animationSpeed * 7.5);
            puVar3[0x20] = (longlong)*(int *)((int)puVar3 + 0x104);
            Hero_TransAnim((float)(longlong)puVar3[0x20],iVar11,0xe);
          }
          uVar14 = (uint)LZCOUNT((uint)DAT_00969fec) >> 5;
          if ((DAT_00969f37 != '\0') && (ABS(DAT_00969ef8 - g_heroGroundZ) < 0.05)) {
            uVar14 = 1;
          }
          if (((uVar14 != 0) && (DAT_0096a57c != 0)) && (DAT_00969dc8 < 0.0)) {
            if ((1.0471976 < ABS(g_heroRotation.y)) || (1.0471976 < ABS(g_heroRotation.x))) {
              TransitionMovement(0x6d,1);
              return 1;
            }
            dVar15 = (double)fastfunc::FastSubRots(g_heroRotation.z,DAT_0096a554);
            if (1.3962633609771729 < dVar15) {
              TransitionMovement(0x6d,1);
              return 1;
            }
            if (((0x68 < g_heroMobyPtr->animationId) && (g_heroMobyPtr->animationId < 0x6d)) &&
               (puVar3[0x20] = (longlong)*(int *)(&DAT_00720ca8 + (uint)DAT_0096a56f * 4),
               g_heroAnimFrame < (float)(longlong)puVar3[0x20])) {
              TransitionMovement(0x6d,1);
              return 1;
            }
            if (MiscLevelFlags.Zoomerator != false) {
              if (((Level == Rilgar) && (DAT_0096a3d0 == 4)) && (3 < DAT_0096a3ec)) {
                mobyutil::MB_UnlockSkillPoint(7);
              }
              DAT_0096a3f4 = 0;
            }
            if (g_heroState == HOVEDBOARD_JUMP) {
              TransitionMovement(0x6b,0);
              if ((g_heroMobyPtr->animationId != 'U') && (g_heroMobyPtr->animationId != '\x7f')) {
                iVar11 = 0x55;
                if (DAT_0096a5ae != '\0') {
                  iVar11 = 0x7f;
                }
                puVar3[0x20] = (longlong)(int)(animationSpeed * 7.5);
                puVar3[0x20] = (longlong)*(int *)((int)puVar3 + 0x104);
                Hero_TransAnim((float)(longlong)puVar3[0x20],iVar11,0xe);
              }
              return 1;
            }
            if ((g_heroMobyPtr->animationId != 'U') && (g_heroMobyPtr->animationId != '\x7f')) {
              iVar11 = 0x55;
              if (DAT_0096a5ae != '\0') {
                iVar11 = 0x7f;
              }
              puVar3[0x20] = (longlong)(int)(animationSpeed * 7.5);
              puVar3[0x20] = (longlong)*(int *)((int)puVar3 + 0x104);
              Hero_TransAnim((float)(longlong)puVar3[0x20],iVar11,0xe);
            }
          }
          uVar10 = 0;
        }
        else {
          TransitionMovement(0x6d,1);
          uVar10 = 1;
        }
      }
      else {
        DAT_0096a580 = 0x42980000;
        TransitionMovement(0x6e,1);
        uVar10 = 1;
      }
    }
    else {
      DAT_0096a580 = 0x4275999a;
      TransitionMovement(0x6e,1);
      uVar10 = 1;
    }
  }
  else {
    TransitionMovement(0x6d,1);
    uVar10 = 1;
  }
  return uVar10;
}



//==== 000a9d70  ns=hero  size=0x188
// sig: undefined Hero_UpdateWeaponReadyAnim(void)
// callers(3): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement
// callees(3): 0007f45c hero::Hero_GetIdleAnim; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement

undefined8 hero::Hero_UpdateWeaponReadyAnim(void)

{
  int iVar1;
  int iVar2;
  
  if (((DAT_0096bd88 != '\0') && (DAT_0096bd8a != '\0')) && (DAT_0096bfa8 == 0)) {
    iVar1 = -1;
    if (DAT_0096ad94 == 2) {
      iVar1 = g_CurrentWeapon;
    }
    if (iVar1 == DAT_0096bf78) {
      iVar1 = (&DAT_00721024)[iVar1 * 0x13];
      iVar2 = TransitionMovement(0,0);
      if (iVar2 != 0) {
        Hero_TransAnim((float)(longlong)(int)(animationSpeed * 11.5),iVar1,0);
        if (DAT_0096a9e8 != 0) {
          DAT_0096a9f4 = 1;
        }
        DAT_0096bf74 = iVar1;
        return 1;
      }
    }
    else if (DAT_0096bd88 != '\0') {
      if (DAT_0096a9e8 == 0) {
        if ((g_heroState == STANDING) && (g_heroMobyPtr->animationId == DAT_0096bf74)) {
          iVar1 = Hero_GetIdleAnim(0);
          Hero_TransAnim(-2.0,iVar1,0);
        }
      }
      else {
        DAT_0096a9f4 = 1;
      }
      DAT_0096bd88 = '\0';
      DAT_0096bd8a = '\0';
    }
  }
  return 0;
}



//==== 000a9f00  ns=hero  size=0xfc
// sig: undefined Hero_PlayBackpackIdle(void)
// callers(1): 000be228 hero::HeroMovement
// callees(2): 00084f5c hero::Hero_GetBackpackAnim; 000fddc0 mobyutil::MB_SetAnimation

void hero::Hero_PlayBackpackIdle(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  int local_40;
  int local_3c;
  longlong local_38;
  
  iVar2 = DAT_0096ae64;
  iVar1 = DAT_0096ae60;
  if ((DAT_0096ae64 != 0 && DAT_0096ae60 != 0) && (*(char *)(DAT_0096ae60 + 0x53) == '\x01')) {
    iVar3 = Hero_GetBackpackAnim(0,&local_40,&local_3c);
    if (iVar3 != 0) {
      dVar4 = 7.5;
      local_38 = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(iVar1,local_40,0,(int)(animationSpeed * 7.5));
      local_38 = (longlong)(int)((double)animationSpeed * dVar4);
      mobyutil::MB_SetAnimation(iVar2,local_3c,0,(int)((double)animationSpeed * dVar4));
    }
  }
  return;
}



//==== 000aa000  ns=hero  size=0xf0
// sig: undefined ???_Hero_SetTimer_96a798(void)
// callers(2): 000be228 hero::HeroMovement; 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(0): 

void hero::____Hero_SetTimer_96a798(void)

{
  undefined1 auVar1 [16];
  
  auVar1 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
           (undefined1  [16])0xffffffff;
  DAT_0096a798 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0xab8,0x969ce0
                           );
  return;
}



//==== 000aa0f0  ns=hero  size=0x30
// sig: undefined ???_Unused_Hero_ClearBlock_96af80(void)
// callers(0): 
// callees(1): 00500250 fastfunc::FastMemSetZero

void hero::____Unused_Hero_ClearBlock_96af80(void)

{
  fastfunc::FastMemSetZero(&DAT_0096af80,0x10);
  return;
}



//==== 000aa128  ns=hero  size=0x130
// sig: float Hero_GetJumpPeak(float grav, float * pos, float * vel, longlong unused, int * frames)
// callers(1): 000be228 hero::HeroMovement
// callees(3): 00084830 hero::Hero_RelativeZComponent; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_GetJumpPeak(float grav,float *pos,float *vel,longlong unused,int *frames)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar2 = (double)grav;
  if (g_heroGravityMode == 0) {
    iVar1 = fastfunc::FastDoubleToInt((double)(float)((double)vel[2] / dVar2));
    dVar4 = (double)pos[2];
    dVar3 = (double)fastfunc::FastIntToDouble();
    dVar4 = (double)(float)(dVar4 + (double)(float)((double)vel[2] * dVar3));
    dVar3 = (double)fastfunc::FastIntToDouble(iVar1 * iVar1 + iVar1 >> 1);
    fVar5 = (float)(dVar4 - (double)(float)(dVar3 * dVar2));
    if (frames != (int *)0x0) {
      *frames = iVar1;
    }
  }
  else if (g_heroGravityMode < 3) {
    fVar5 = Hero_RelativeZComponent(vel);
    iVar1 = fastfunc::FastDoubleToInt((double)(float)((double)fVar5 / dVar2));
    if (frames != (int *)0x0) {
      *frames = iVar1;
    }
    fVar5 = pos[2] + vel[2] * 0.5;
  }
  else {
    fVar5 = 0.0;
  }
  return fVar5;
}



//==== 000aa258  ns=hero  size=0x90
// sig: int hero_ConsumeAmmo(int weapon, int amount)
// callers(11): 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002a4420 mobyupdate_unsorted::UpdateMoby_163; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002b2590 mobyupdate_unsorted::UpdateMoby_176; 002b6630 mobyupdate_unsorted::UpdateMoby_177; 002d2780 mobyupdate_unsorted::UpdateMoby_190; 002db020 mobyupdate_unsorted::UpdateMoby_192; 002fd398 mobyupdate_unsorted::UpdateMoby_229; 003892e8 mobyupdate_unsorted::UpdateMoby_454; 0039ac10 mobyupdate_helpers::M479_0039ac10; 003b7c48 mobyupdate_unsorted::UpdateMoby_562
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::hero_ConsumeAmmo(int weapon,int amount)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = (ulonglong)weapon;
  if (weapon == -1) {
    uVar3 = (ulonglong)g_CurrentWeapon;
  }
  if (*(short *)((int)&DAT_00737d3e + (int)(uVar3 << 3) * 3) == 0) {
    iVar4 = 1;
  }
  else {
    iVar2 = (int)(uVar3 << 2);
    if (*(int *)((int)&currentAmmoArray.field0_0x0 + iVar2) < amount) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
      iVar1 = *(int *)(&DAT_00a0f644 + iVar2);
      *(int *)((int)&currentAmmoArray.field0_0x0 + iVar2) =
           *(int *)((int)&currentAmmoArray.field0_0x0 + iVar2) - amount;
      *(int *)(&DAT_00a0f644 + iVar2) = iVar1 + amount;
    }
  }
  return iVar4;
}



//==== 000aa2e8  ns=hero  size=0x80
// sig: int hero_GiveAmmo(int weapon, int amount)
// callers(3): 0016cc50 vendor::PurchaseHandler; 002ea970 mobyupdate_unsorted::UpdateMoby_a_lot_5; 002eb450 mobyupdate_helpers::M1449_CollectAmmo
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::hero_GiveAmmo(int weapon,int amount)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)((longlong)weapon << 3) * 3;
  iVar1 = (int)((longlong)weapon << 2);
  *(int *)((int)&currentAmmoArray.field0_0x0 + iVar1) =
       *(int *)((int)&currentAmmoArray.field0_0x0 + iVar1) + amount;
  if (*(short *)((int)&DAT_00737d3e + iVar2) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)&currentAmmoArray.field0_0x0 + iVar1) -
            (uint)*(ushort *)((int)&DAT_00737d3e + iVar2);
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    else {
      *(uint *)((int)&currentAmmoArray.field0_0x0 + iVar1) =
           (uint)*(ushort *)((int)&DAT_00737d3e + iVar2);
    }
  }
  return iVar3;
}



//==== 000aa368  ns=hero  size=0x70
// sig: void Hero_WalkToPos(float rotZ, float * pos, longlong unused, int flags)
// callers(6): 00186e60 mobyupdate_unsorted::UpdateMoby_1012; 001daee8 mobyupdate_unsorted::UpdateMoby_1135; 002902e8 mobyupdate_unsorted::UpdateMoby_1513; 00340968 mobyupdate_unsorted::UpdateMoby_318; 0042fc90 mobyupdate_unsorted::UpdateMoby_713; 0046e420 mobyupdate_unsorted::UpdateMoby_816
// callees(1): 000b72b0 hero::TransitionMovement

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_WalkToPos(float rotZ,float *pos,longlong unused,int flags)

{
  DAT_0096b320 = *pos;
  DAT_0096b324 = pos[1];
  DAT_0096b328 = pos[2];
  DAT_0096b32c = rotZ;
  DAT_0096b330 = flags;
  if (((g_heroState != ANIM_TARGET_WALK) && (g_heroState != UNK_66)) &&
     (g_heroState != TELEPORTER_USE)) {
    TransitionMovement(0x65,1);
  }
  return;
}



//==== 000aa3e0  ns=hero  size=0x68
// sig: undefined ???_Hero_TransitionByFallSpeed(void)
// callers(1): 0042fc90 mobyupdate_unsorted::UpdateMoby_713
// callees(1): 000b72b0 hero::TransitionMovement

int hero::____Hero_TransitionByFallSpeed(void)

{
  int iVar1;
  
  if (mobyutil::g_FrameTime * 2.7 <= DAT_00969e40) {
    iVar1 = TransitionMovement(3,1);
  }
  else {
    iVar1 = TransitionMovement(0,1);
  }
  return iVar1;
}



//==== 000aa448  ns=hero  size=0x168
// sig: undefined Hero_UpdateGadgetsInScene(void)
// callers(1): 000aa5e0 hero::Hero_UpdateInScene
// callees(3): 00090548 hero::???_Hero_UpdateManipulatorSpin; 000914e0 hero::Hero_UpdateGadgetMobys; 000f1364 mobyfunc::GetMobyJointsWorldMtx

void hero::Hero_UpdateGadgetsInScene(ulonglong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_30 [40];
  
  if ((g_gameMode == GAME_MODE_SCENE) || (g_gameMode == GAME_MODE_SPACE)) {
    iVar3 = 0;
    puVar2 = &DAT_0095cd50;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        iVar1 = puVar2[0x5e];
        if ((*(short *)(iVar1 + 0xa6) == 0x509) || (*(short *)(iVar1 + 0xa6) == 0x50a)) {
          *(ushort *)(iVar1 + 0x34) = *(ushort *)(iVar1 + 0x34) | 0x800;
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < boot::g_SpaceSceneMobyCnt._0_2_);
    }
    if ((int)param_1 == 0) {
      param_1 = ZEXT48(g_heroMobyPtr);
    }
    mobyfunc::GetMobyJointsWorldMtx(param_1,9,local_30,&DAT_0096a7a0);
    Hero_UpdateGadgetMobys();
    ____Hero_UpdateManipulatorSpin();
    if (DAT_0096aeb0 != 0) {
      *(ushort *)(DAT_0096aeb0 + 0x34) = *(ushort *)(DAT_0096aeb0 + 0x34) & 0xfffe;
    }
    if (DAT_0096aeb4 != 0) {
      *(ushort *)(DAT_0096aeb4 + 0x34) = *(ushort *)(DAT_0096aeb4 + 0x34) & 0xfffe;
    }
    if (DAT_0096af00 != 0) {
      *(ushort *)(DAT_0096af00 + 0x34) = *(ushort *)(DAT_0096af00 + 0x34) & 0xfffe;
    }
  }
  return;
}



//==== 000aa5e0  ns=hero  size=0x2e8
// sig: undefined Hero_UpdateInScene(void)
// callers(5): 00011020 boot::FrontEnd_Update; 0014f1f0 pause::SpawnHeroInMenu?; 00161788 space::UpdateSpace; 00168768 update::UpdateScene; 0016da88 vendor::Vendor_PreUpdate
// callees(4): 000aa448 hero::Hero_UpdateGadgetsInScene; 000f0ea8 mobyfunc::AttachManipulator; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

void hero::Hero_UpdateInScene(MobyInstance *param_1)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  
  dVar12 = (double)FLOAT_0071fb50;
  if ((g_gameMode == GAME_MODE_SPACE) && (1.3300000429153442 < dVar12)) {
    dVar12 = 1.3300000429153442;
  }
  if (DAT_00a1be81 == '\0') {
    mobyfunc::AttachManipulator(param_1,4,&DAT_00a1be80);
    DAT_00a1bea0 = (float)dVar12;
    DAT_00a1bea4 = (float)dVar12;
    DAT_00a1bea8 = (float)dVar12;
  }
  if ((((Level == Aridia) || (Level == Gaspar)) || (Level == Pokitaru)) || (Level == Gemlik)) {
    iVar11 = 0;
    puVar7 = &DAT_0095cd50;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        iVar2 = puVar7[0x5e];
        if (iVar2 != 0) {
          sVar1 = *(short *)(iVar2 + 0xa6);
          if (((sVar1 == 0x1b1) || (sVar1 == 0x50a)) || (sVar1 == 0x509)) {
            *(float *)(iVar2 + 0x2c) =
                 (float)((double)*(float *)(*(int *)(iVar2 + 0x24) + 0x24) * dVar12);
          }
        }
        iVar11 = iVar11 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar11 < boot::g_SpaceSceneMobyCnt._0_2_);
    }
  }
  dVar12 = (double)fastfunc::FastWrapRot(DAT_0096b308,mobyutil::g_FrameTime * 2.0943952);
  uVar10 = 0xffffffff806e8c6e;
  uVar9 = 0xffffffff805a3232;
  DAT_0096b308 = (float)dVar12;
  if (((Level == Veldin && update::g_SceneId == 0) &&
      ((int)(animationSpeed * 835.5) <= boot::g_SpaceSceneFrame)) &&
     (boot::g_SpaceSceneFrame <= (int)(animationSpeed * 1080.5))) {
    dVar12 = (double)fastfunc::FastWrapRot((float)dVar12,mobyutil::g_FrameTime * 5.934119);
    DAT_0096b308 = (float)dVar12;
    uVar10 = 0xffffffff806eaafa;
    uVar9 = 0xffffffff80326e5a;
  }
  fVar3 = DAT_0096b308;
  if (3.1415925 - DAT_0096b308 <= DAT_0096b308) {
    fVar3 = 3.1415925 - DAT_0096b308;
  }
  if (fVar3 <= -3.1415925 - DAT_0096b308) {
    fVar3 = -3.1415925 - DAT_0096b308;
  }
  fVar4 = fVar3 * fVar3;
  fVar5 = fVar4 * fVar4 * fVar3;
  fVar6 = fVar4 * fVar5;
  uVar8 = fastfunc::FastLerpColor
                    ((double)((fVar3 + fVar4 * fVar3 * -0.16666657 + fVar5 * 0.0083330255 +
                               fVar6 * -0.0001980741 + fVar4 * fVar6 * 2.601887e-06) * 0.5 + 0.5),
                     uVar10,uVar9);
  param_1->field60_0x90 = uVar8;
  Hero_UpdateGadgetsInScene(param_1);
  return;
}



//==== 000aa8c8  ns=hero  size=0xf4
// sig: undefined ???_Hero_SnapMobyToBonePose(void)
// callers(1): 00161788 space::UpdateSpace
// callees(4): 00091090 hero::Hero_BuildPoseFromJoints; 000f1038 mobyfunc::GetBoneTransformations; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 00500fa8 fastfunc::FastApplyTransform

void hero::____Hero_SnapMobyToBonePose(undefined8 param_1,MobyInstance *param_2)

{
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  mobyfunc::GetBoneTransformations(param_1,4,aVStack_60);
  (param_2->pos).x = local_30;
  (param_2->pos).y = local_2c;
  (param_2->pos).z = local_28;
  (param_2->pos).w = local_24;
  fastfunc::FastApplyTransform(&(param_2->transform).v0,aVStack_60);
  mobyfunc::PostUpdateMobyLockTransform(param_2);
  if (param_2->oClass == SONIC_SUMMONER) {
    Hero_BuildPoseFromJoints(&DAT_00721b44,&DAT_00a1ba80,param_2->pClass,6,param_1);
  }
  else {
    Hero_BuildPoseFromJoints(&DAT_00721b88,&DAT_00a1ba80,param_2->pClass,0,param_1);
  }
  param_2->pPreviousAnimationData = &DAT_00a1ba80;
  param_2->pCurrentAnimationData = &DAT_00a1ba80;
  param_2->animationBlend = 0.0;
  param_2->previousAnimationFrame = '\0';
  param_2->animationFrame = '\0';
  param_2->updateId = '\0';
  param_2->animationId = '\0';
  return;
}



//==== 000aa9c8  ns=hero  size=0x134
// sig: undefined SetPositionAfterMovie(void)
// callers(1): 00161788 space::UpdateSpace
// callees(2): 000b72b0 hero::TransitionMovement; 000ffb70 mobyutil::GetGroundZ

ulonglong hero::SetPositionAfterMovie(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  int iVar5;
  double extraout_f1;
  undefined1 local_20 [16];
  
  fVar3 = DAT_00969cec;
  fVar1 = g_heroMtx * -0.75 + g_heroPosition.x;
  fVar2 = DAT_00969ce4 * -0.75 + g_heroPosition.y;
  uVar4 = mobyutil::GetGroundZ(local_20,0);
  if (ABS((float)((double)g_heroPosition.z - extraout_f1)) <= 0.3) {
    DAT_0096b320 = g_heroPosition.x;
    uVar4 = (ulonglong)g_heroState;
    DAT_0096b324 = g_heroPosition.y;
    DAT_0096b32c = g_heroRotation.z;
    DAT_0096b330 = 1;
    DAT_0096b328 = g_heroPosition.z;
    if (((g_heroState != ANIM_TARGET_WALK) && (g_heroState != UNK_66)) &&
       (g_heroState != TELEPORTER_USE)) {
      iVar5 = TransitionMovement(0x65,1);
      uVar4 = (ulonglong)iVar5;
    }
    g_heroPosition.w = fVar3;
    g_heroPosition.x = fVar1;
    g_heroPosition.y = fVar2;
    g_heroPosition.z = (float)extraout_f1;
  }
  return uVar4;
}



//==== 000aaec0  ns=hero  size=0xc210
// sig: undefined HandleHeroMovement(void)
// callers(1): 0008b778 hero::Hero_UpdateMovement
// callees(124): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 0007cf28 hero::Hero_AddGravity; 0007dde0 hero::Hero_GetHeroRelativePolarVector; 0007f41c hero::Hero_HandGadgetID; 0007f45c hero::Hero_GetIdleAnim; 000816ec hero::Hero_PlaySound; 000817ec hero::Hero_SetRelativeZ; 000821a8 hero::Hero_SetClankBankTwistSway; 000824b0 hero::Hero_CheckLedgeGrab; 00084180 hero::Hero_GetHeroRelativeVector; 00084830 hero::Hero_RelativeZComponent; 00085300 hero::Hero_TransAnim; 00086df8 hero::Hero_Turn3D_XYZ; 000886d0 hero::Hero_AddRelativeZ; 00088f00 hero::Hero_ForwardComponent; 00089038 hero::Hero_ScaleRelativeXY; 00089308 hero::Hero_CancelGravity; 00096228 hero::Hero_GetPadFly; 00096348 hero::Hero_ScaleAnim; 000964f4 hero::Hero_GetAnimScaledVal; 000965bc hero::Hero_RotateAroundPoint; 00096830 hero::Hero_RotateAroundCG; 00096890 hero::Hero_SpawnWaterRings; 000969c0 hero::Hero_SpawnWaterWake; 00096d88 hero::Hero_SpawnWaterDrops; 00097080 hero::Hero_SpawnWaterBubbles; 00097370 hero::Hero_SpawnWaterSplash; 00097700 hero::Hero_SpawnLavaAssParticles; 00098878 hero::Hero_CheckLedgeAhead; 0009b380 hero::Hero_GetIdealThrustFromPad; 0009b8c8 hero::Hero_GetIdealThrustForWalk; 0009b9ec hero::Hero_RotateByEuler; 0009ba88 hero::Hero_Turn3D; 0009bdf8 hero::Hero_GunTurnWalk; 0009bf10 hero::Hero_TurnWalk; 0009c0d0 hero::Hero_ThrustToMotionFwd; 0009c1b0 hero::Hero_ThrustToMotion; 0009c360 hero::Hero_WallSloopMotion; 0009c658 hero::Hero_KneeBumpMotion
// strings: 000aaafc: '?333' (raw) | 00a0feec: 'None'

void hero::HandleHeroMovement(undefined8 param_1,MobyInstance *param_2,undefined4 *param_3)

{
  u8 uVar1;
  float fVar2;
  bool bVar3;
  MobyInstance *pMVar4;
  MobyInstance *pMVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar10;
  char cVar18;
  short sVar16;
  short sVar17;
  undefined4 uVar11;
  float *out;
  ulonglong uVar8;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar9;
  int iVar15;
  bool bVar19;
  undefined4 *puVar20;
  Vec4 *unused;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar25;
  longlong lVar24;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double extraout_f1_04;
  double dVar26;
  double extraout_f1_05;
  double extraout_f1_06;
  double extraout_f1_07;
  double in_f5;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  float local_880;
  float local_87c;
  float local_838;
  float afStack_830 [4];
  float afStack_820 [2];
  float local_818;
  float local_810;
  float local_80c;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined4 local_7f8;
  undefined4 local_7f4;
  float local_7f0;
  float local_7ec;
  float afStack_7d0 [10];
  float local_7a8;
  float local_790;
  float local_78c;
  float local_788;
  float local_740;
  float local_73c;
  float local_738;
  float local_730;
  float local_72c;
  float local_718;
  float local_710;
  float local_70c;
  undefined4 local_708;
  float local_6c0;
  float local_6bc;
  undefined4 local_6b8;
  float local_6b0;
  float local_6ac;
  float local_6a8;
  float local_698;
  float local_690;
  float local_68c;
  float local_688;
  float local_670;
  float local_66c;
  float local_668;
  float local_660;
  float local_65c;
  undefined4 local_658;
  float local_650;
  float local_64c;
  float local_648;
  float local_640;
  float local_63c;
  float local_630;
  float local_62c;
  float local_628;
  float local_620;
  float local_61c;
  float local_618;
  float local_600;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  float local_5d0;
  float local_5cc;
  float local_5c0;
  float local_5bc;
  float local_5b0;
  float local_5ac;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_590;
  float local_58c;
  float local_588;
  float local_568;
  float local_560;
  float local_55c;
  float local_558;
  float local_550;
  float local_54c;
  undefined4 local_548;
  float local_528;
  float local_520;
  float local_51c;
  undefined4 local_518;
  float local_508;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float local_4c0;
  float local_4bc;
  float local_4b8;
  float local_460;
  float local_45c;
  float local_458;
  float local_420;
  float local_41c;
  float afStack_400 [4];
  float local_3f0;
  float local_3ec;
  float local_360;
  float local_35c;
  float local_358;
  float local_330;
  float local_32c;
  float local_328;
  float local_308;
  float local_2f0;
  float local_2ec;
  float local_2d8;
  undefined4 local_284;
  undefined1 local_278;
  undefined1 local_277;
  undefined2 local_276;
  undefined4 local_254;
  undefined1 local_248;
  undefined1 local_247;
  MOBY_OCLASSES local_246;
  float local_1f8;
  undefined4 local_1f4;
  undefined1 local_1e8;
  undefined1 local_1e7;
  MOBY_OCLASSES local_1e6;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  int local_e8;
  undefined4 local_e4;
  float local_e0;
  int local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c8;
  
  iVar15 = DAT_0096bd78;
  iVar6 = DAT_0096bd68;
  pMVar5 = g_heroMobyPtr;
  pMVar4 = g_heroBoardMoby;
  iVar10 = g_heroStateTimer;
  uVar8 = ZEXT48(&stack0x00000000);
  uVar1 = g_heroMobyPtr->animationId;
  if ((int)g_heroState < 0x4a) {
    if (0x27 < (int)g_heroState) {
      if ((int)g_heroState < 0x3d) {
        if ((int)g_heroState < 0x31) {
          if (0x2d < (int)g_heroState) {
            if (0x2e < (int)g_heroState) {
              if ((int)g_heroState < 0x30) {
                Hero_AttackMotion();
                DAT_00721c74 = 0x3d23d70a;
                DAT_00721d24 = 0.04;
                DAT_00721dd4 = 0.04;
                DAT_00721c78 = 0x3e4ccccd;
                DAT_00721d28 = 0.2;
                DAT_00721dd8 = 0.2;
                DAT_00721e88 = 0.2;
                DAT_00721e84 = 0.02;
                if (pMVar5->animationId == '7') {
                  fVar36 = 1.4;
                  if ((DAT_00969e68 <= 1.4) && (fVar36 = DAT_00969e68, DAT_00969e68 < -1.4)) {
                    fVar36 = -1.4;
                  }
                  DAT_00721c30 = fVar36 * -0.14;
                  DAT_00721ce8 = fVar36 * 0.3;
                  DAT_00721d90 = fVar36 * -0.22;
                  DAT_00721e48 = fVar36 * 0.4;
                  DAT_00721e44 = ABS(fVar36) * -0.09;
                  DAT_00721e40 = ABS(fVar36) * 0.08;
                }
                else if (pMVar5->animationId == 'm') {
                  uVar7 = FUN_005e8338((double)DAT_00969de0,(double)(float)DAT_00969de4);
                  dVar28 = (double)fastfunc::FastDiffRots(uVar7,(double)g_heroRotation.z);
                  dVar30 = (double)fastfunc::FastWrapRot((float)dVar28,3.1415927);
                  dVar28 = (double)((DAT_00969e44 / (mobyutil::g_FrameTime * 3.0)) * 0.34906584);
                  if (0.4363323152065277 < dVar28) {
                    dVar28 = 0.4363323152065277;
                  }
                  dVar34 = (double)mathfunc::cosf((float)dVar30);
                  dVar34 = (double)(float)(dVar34 * dVar28);
                  dVar30 = (double)FUN_005e8128(dVar30);
                  DAT_00721ce4 = (float)dVar34;
                  DAT_00721ce0 = -(float)(dVar30 * dVar28);
                }
                if (g_framesNotGrounded == 0) {
                  DAT_00969dc8 = 0.0;
                  Hero_AddGravity(DAT_0071f418 * 150.0,&g_heroVelocity,&g_heroVelocity);
                }
                else {
                  Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,&DAT_00969de0);
                }
              }
              else {
                if (DAT_0096afc2 == '\0') {
                  Hero_UpdateExternalThrust(0.5,mobyutil::g_FrameTime * 2.0);
                }
                else {
                  Hero_UpdateExternalThrust(0.7,0.0);
                }
                uVar7 = Hero_EdgeStop(0x400d9999a0000000,0);
                Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar7,0);
                dVar28 = 12.600000381469727;
                if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                  fVar36 = mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 12.6,&g_storedNeutralSpeed
                                         );
                }
                else {
                  fVar36 = mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 12.6,&g_storedNeutralSpeed
                                         );
                }
                FUN_005e7e70((double)fVar36,&g_heroVelocity);
                Hero_ApplyTaper((float)((double)DAT_0071f418 * dVar28));
                if (g_framesNotGrounded == 0) {
                  Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
                }
                else {
                  Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,&DAT_00969de0);
                  Hero_WallSloopMotion();
                }
                if (((g_heroMobyPtr->field43_0x70 & 2U) != 0) && (g_heroMobyPtr->updateId == '6')) {
                  iVar10 = Hero_GetIdleAnim(0);
                  iVar15 = idol::GetAnimDuration(5);
                  local_c8 = (ulonglong)iVar15;
                  Hero_TransAnim((float)(longlong)local_c8,iVar10,0);
                }
              }
              goto LAB_000b703c;
            }
            goto LAB_000aeb2c;
          }
          if (0x2b < (int)g_heroState) {
            if ((int)g_heroState < 0x2d) {
              if (((DAT_0096a778 & 2) != 0) && (g_heroMobyPtr->animationId == '4')) {
                iVar10 = idol::GetAnimDuration(0xc);
                local_c8 = (ulonglong)iVar10;
                Hero_TransAnim((float)(longlong)local_c8,0x35,10);
                g_heroAnimSpeed = 0.3;
              }
              dVar28 = (double)DAT_00969dc8;
              if (((DAT_0096a674 != 0) && (*(int *)(DAT_0096a674 + 0x78) != 0)) &&
                 (*(int *)(*(int *)(DAT_0096a674 + 0x78) + 0x34) != 0)) {
                dVar34 = (double)*(float *)(DAT_0096a674 + 0x48);
                dVar30 = (double)fastfunc::FastSubRots
                                           (*(float *)(DAT_0096a674 + 0x48),g_heroRotation.z);
                if (90.0 < dVar30) {
                  dVar34 = (double)fastfunc::FastWrapRot((float)dVar34,3.1415927);
                }
                mobyutil::AccelDeltAng
                          (dVar34,(double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),0,
                           &DAT_0096a68c,&DAT_00720000,&DAT_0096a698);
              }
              g_heroIdealRotZ = DAT_0096a68c;
              dVar30 = 0.30000001192092896;
              if (g_heroGravityMode == '\0') {
                dVar34 = (double)mobyutil::AccelDeltAng
                                           ((double)DAT_0096a68c,(double)(DAT_0071f40c * 0.02),
                                            (double)(DAT_0071f40c * 0.3),
                                            (double)(mobyutil::g_FrameTime * 4.712389),0x969d78);
                DAT_00969e68 = (float)dVar34;
              }
              else {
                Hero_Turn3D(DAT_0071f40c * 0.02,DAT_0071f40c * 0.3,mobyutil::g_FrameTime * 4.712389)
                ;
              }
              lVar24 = uVar8 - 0x740;
              FUN_005e81f0(lVar24,DAT_0096a674 + 0x10,&g_heroPosition);
              uVar7 = 0x3ff0000000000000;
              FUN_005e7f98(0x3ff0000000000000,lVar24,lVar24);
              if (local_738 < 0.23) {
                local_738 = 0.23;
              }
              FUN_005e7e70(uVar8 - 0x720);
              local_718 = g_heroRotation.z;
              fastfunc::FastEulerToMtx1(uVar8 - 400,uVar8 - 0x720);
              fastfunc::FastNormalizeRMtx4(uVar8 - 0x150,uVar8 - 400 & 0xffffffff);
              FUN_005e825c(uVar8 - 0x740,uVar8 - 0x740,uVar8 - 0x150);
              dVar34 = (double)FUN_005e8338((double)SQRT(local_740 * local_740 +
                                                         local_738 * local_738),(double)local_73c);
              local_730 = (float)-dVar34;
              dVar34 = (double)FUN_005e8338((double)local_738,(double)local_740);
              local_72c = (float)dVar34;
              dVar29 = 0.03999999910593033;
              dVar32 = 0.20000000298023224;
              dVar34 = 9.599310874938965;
              mobyutil::AccelDeltAng
                        ((double)local_72c,(double)(DAT_0071f40c * 0.04),
                         (double)(DAT_0071f40c * 0.2),(double)(mobyutil::g_FrameTime * 9.599311),
                         0x969d74);
              mobyutil::AccelDeltAng
                        ((double)local_730,(double)(float)((double)DAT_0071f40c * dVar29),
                         (double)(float)((double)DAT_0071f40c * dVar32),
                         (double)(float)((double)mobyutil::g_FrameTime * dVar34),&g_heroRotation);
              iVar10 = g_heroStateTimer;
              bVar19 = g_heroPosition.z < *(float *)(DAT_0096a674 + 0x18);
              if (((bVar19 && DAT_0096a67c != 0) &&
                  (uVar33 = idol::GetAnimDuration(0x28), (int)uVar33 < iVar10)) &&
                 (0.25 < g_heroPadMagnitude)) {
                Hero_GetIdealThrustFromPad(uVar7,uVar33,0);
                dVar34 = (double)(mobyutil::g_FrameTime * 0.21 * g_heroPadMagnitude);
                if ((double)(mobyutil::g_FrameTime * 5.0) < dVar34) {
                  dVar34 = (double)(mobyutil::g_FrameTime * 5.0);
                }
                dVar32 = (double)mathfunc::cosf(g_heroIdealRotZ);
                local_710 = (float)(dVar32 * dVar34);
                dVar32 = (double)FUN_005e8128((double)g_heroIdealRotZ);
                local_70c = (float)(dVar32 * dVar34);
                local_708 = 0;
                FUN_005e7f54(&g_heroVelocity,&g_heroVelocity,uVar8 - 0x710);
              }
              if (DAT_0096a67c != 0) {
                dVar34 = (double)FUN_005e8588(&g_heroPosition,DAT_0096a674 + 0x10);
                if (((dVar34 < (double)(DAT_0096a680 * 1.57)) || (1.5 < g_heroGroundDist)) &&
                   ((Hero_AddGravity(DAT_0071f418 * 40.0,&g_heroVelocity,&DAT_00969de0),
                    DAT_0096a69e != 0 &&
                    (fVar36 = Hero_RelativeZComponent(&g_heroVelocity), 0.0 < fVar36)))) {
                  FUN_005e81f0(uVar8 - 0x700,&g_heroPosition,DAT_0096a674 + 0x10);
                  Hero_AddGravity(DAT_0071f418 * 57.0,&g_heroVelocity,&g_heroVelocity);
                }
                dVar34 = (double)FUN_005e8030(&g_heroVelocity);
                lVar24 = uVar8 - 0x6f0;
                dVar34 = (double)(float)((double)(mobyutil::g_FrameTime * 0.015) * dVar34);
                FUN_005e822c(0xbff0000000000000,(double)(mobyutil::g_FrameTime * 0.015),lVar24,
                             &g_heroVelocity);
                FUN_005e7f98(dVar34,lVar24,lVar24);
                FUN_005e7f54(&g_heroVelocity,&g_heroVelocity,lVar24);
              }
              if ((DAT_0096a674 != 0) && (*(int *)(DAT_0096a674 + 0x78) != 0)) {
                iVar10 = *(int *)(DAT_0096a674 + 0x78);
                dVar34 = (double)FUN_005e8030(&g_heroVelocity);
                local_f8 = (float)dVar34;
                if (*(float *)(iVar10 + 0xc) < local_f8) {
                  mobyutil::Delt(*(float *)(iVar10 + 0xc),DAT_0071f418 * 15.0,&local_f8);
                  FUN_005e7f98((double)local_f8,&g_heroVelocity,&g_heroVelocity);
                }
              }
              dVar34 = (double)fastfunc::FastWrapRot(g_heroRotation.z,-1.5707964);
              dVar32 = (double)mathfunc::cosf((float)dVar34);
              dVar29 = 0.15000000596046448;
              local_6c0 = (float)(dVar32 * 0.15000000596046448);
              dVar34 = (double)FUN_005e8128(dVar34);
              local_6bc = (float)(dVar34 * dVar29);
              lVar21 = uVar8 - 0x6c0;
              dVar32 = 0.0;
              local_6b8 = 0;
              FUN_005e7f54(lVar21,lVar21,&g_heroPosition);
              lVar24 = uVar8 - 0x6e0;
              FUN_005e7f54(lVar24,lVar21,&g_heroVelocity);
              lVar22 = uVar8 - 0x6d0;
              FUN_005e81f0(lVar22,lVar24,DAT_0096a674 + 0x10);
              FUN_005e7f98((double)DAT_0096a684,lVar22,lVar22);
              FUN_005e7f54(lVar24,DAT_0096a674 + 0x10,lVar22);
              FUN_005e81f0(&g_heroVelocity,lVar24,lVar21);
              dVar34 = (double)DAT_0096a684;
              unused = (Vec4 *)lVar24;
              mobyutil::AccelDelt(DAT_0096a680,DAT_0096a6a4,DAT_0096a6a8,DAT_0096a6ac,&DAT_0096a684,
                                  (int)unused,(float *)&DAT_0096a688);
              dVar29 = (double)(float)((double)DAT_0096a684 - dVar34);
              dVar34 = (double)FUN_005e8030((double)DAT_0096a684,lVar22);
              if ((double)DAT_0096a684 < dVar34) {
                lVar24 = uVar8 - 0x6d0;
                FUN_005e7f98(dVar29,lVar24,lVar24);
                unused = &g_heroPosition;
                FUN_005e7f54(&g_heroPosition,&g_heroPosition,lVar24);
              }
              if (bVar19 && DAT_0096a69e != 0) {
                dVar29 = (double)(mobyutil::g_FrameTime * 14.0);
                dVar34 = (double)FUN_005e7ebc(&g_heroVelocity);
                local_f4 = (float)dVar34;
                if ((double)local_f4 < dVar29) {
                  mobyutil::AccelDelt((float)dVar29,
                                      (float)((double)DAT_0071f40c * 0.04699999839067459),
                                      (float)((double)DAT_0071f40c * dVar30),(float)dVar32,&local_f4
                                      ,(int)unused,&DAT_0096a694);
                  dVar30 = (double)mathfunc::cosf(DAT_0096a68c);
                  local_6b0 = (float)(dVar30 * (double)DAT_0096a694);
                  dVar30 = (double)FUN_005e8128((double)DAT_0096a68c);
                  local_6a8 = (float)dVar32;
                  local_6ac = (float)(dVar30 * (double)DAT_0096a694);
                  FUN_005e7f54(&g_heroVelocity,&g_heroVelocity,uVar8 - 0x6b0);
                }
              }
              if (((DAT_0096a67c != 0) && (g_framesNotGrounded != 0)) &&
                 (((dVar28 < dVar32 && (dVar32 < (double)DAT_00969dc8)) || (DAT_0096a69c != 0)))) {
                DAT_0096a69e = 0;
                dVar28 = (double)(SQRT(DAT_0096a680 / DAT_0096a690) * 3.1415927);
                if (DAT_0096a69c == 0) {
                  uVar25 = 0;
                  fVar36 = Hero_ForwardComponent(DAT_00969de4);
                  if (dVar32 < (double)fVar36) {
                    uVar25 = 1;
                  }
                }
                else {
                  uVar25 = (uint)LZCOUNT(DAT_0096a69c - 1) >> 5;
                }
                if (uVar25 == 0) {
                  if (pMVar5->animationId == '5') {
                    if (g_heroMobyPtr->updateId == g_heroMobyPtr->animationId) {
                      Hero_ScaleAnim(12.0,(float)dVar28,0.5,-1.0);
                      DAT_0096a69c = 0;
                    }
                  }
                  else {
                    iVar10 = idol::GetAnimDuration(9);
                    local_c8 = (ulonglong)iVar10;
                    Hero_TransAnim((float)(longlong)local_c8,0x35,0x15);
                    DAT_0096a69c = 2;
                  }
                }
                else if (pMVar5->animationId == '5') {
                  if (g_heroMobyPtr->updateId == g_heroMobyPtr->animationId) {
                    Hero_ScaleAnim(42.0,(float)dVar28,0.5,-1.0);
                    DAT_0096a69c = 0;
                  }
                }
                else {
                  iVar10 = idol::GetAnimDuration(0x11);
                  local_c8 = (ulonglong)iVar10;
                  Hero_TransAnim((float)(longlong)local_c8,0x35,6);
                  DAT_0096a69c = 1;
                }
              }
              goto LAB_000b703c;
            }
            goto LAB_000b3bd8;
          }
LAB_000b2028:
          if (((g_heroState == GRINDRAIL_JUMP) || (g_heroState == GRINDRAIL_SWITCH)) ||
             (g_heroState == GRINDRAIL_DAMAGE)) {
            if (((g_heroLoopSounds != -1) &&
                (sound::g_SoundChannels[g_heroLoopSounds].pMoby == g_heroMobyPtr)) &&
               (sound::g_SoundChannels[g_heroLoopSounds].state != '\0')) {
              sound::sound_Kill(g_heroLoopSounds);
            }
            g_heroLoopSounds = -1;
          }
          else {
            Hero_PlayLoopSound(0,g_heroMobyPtr,0);
          }
          if ((g_heroState == GRINDRAIL_USE) || (g_heroState == GRINDRAIL_WRENCH_ATTACK)) {
            FUN_005e7e98(uVar8 - 0x610,&g_heroPosition);
            dVar32 = 0.0;
            dVar30 = (double)DAT_0096a25c;
            dVar28 = (double)mobyutil::MB_randRangeSigned(0,0x3fe0c15240000000);
            dVar28 = (double)fastfunc::FastWrapRot((float)dVar30,(float)dVar28);
            dVar30 = (double)mobyutil::MB_randRangeFloat
                                       (mobyutil::g_FrameTime * 4.0,mobyutil::g_FrameTime * 7.0);
            dVar34 = (double)mathfunc::cosf((float)dVar28);
            local_600 = (float)(dVar34 * dVar30);
            dVar28 = (double)FUN_005e8128(dVar28);
            local_5fc = (float)(dVar28 * dVar30);
            local_5f8 = (float)dVar32;
            dVar28 = (double)mobyutil::MB_randRangeFloat
                                       (mobyutil::g_FrameTime * 3.0,mobyutil::g_FrameTime * 5.0);
            local_5f8 = (float)dVar28;
            local_5f4 = DAT_0071f418 * -30.0;
            partupd::SpawnPart_25(uVar8 - 0x610,uVar8 - 0x600,0);
          }
          uVar25 = (uint)LZCOUNT(*(undefined4 *)(&DAT_00721018 + g_CurrentWeapon * 0x4c)) >> 5 ^ 1;
          if (g_CurrentWeapon == 0xc) {
            uVar25 = 0;
          }
          bVar19 = false;
          if ((uVar25 != 0) && (DAT_0096bd8a != '\0')) {
            bVar19 = true;
          }
          mobyfunc::GetBonePosition(g_heroMobyPtr,9,&DAT_0096a1f0);
          mobyfunc::GetBonePosition(g_heroMobyPtr,0xe,&DAT_0096a200);
          mobyfunc::GetBonePosition(g_heroMobyPtr,0,&DAT_0096a210);
          if ((DAT_0096a288 == 2) || (DAT_0096a288 == 3)) {
            DAT_0096a288 = -1;
          }
          uVar7 = 0x408f380000000000;
          dVar28 = 2.0;
          puVar20 = &DAT_0096a1e0;
          uVar33 = 0x4004000000000000;
          mobyutil::MB_PathFollowToPos
                    (0x408f380000000000,0x4000000000000000,0x4004000000000000,DAT_0096a240,
                     &g_heroPosition,&DAT_0096a1e0,&DAT_0096a244,&DAT_0096a248);
          if (DAT_0096a270 != 0) {
            mobyutil::MB_PathFollowToPos
                      (uVar7,dVar28,uVar33,DAT_0096a274,&g_heroPosition,&DAT_0096a220,&DAT_0096a278,
                       &DAT_0096a27c);
          }
          iVar10 = DAT_00969e7c;
          bVar3 = false;
          if ((((0.87 < g_heroGroundDist) && (g_heroState != GRINDRAIL_JUMP)) &&
              (g_heroState != GRINDRAIL_DAMAGE)) &&
             ((DAT_0096a270 == 0 && (iVar15 = idol::GetAnimDuration(0x1e), iVar15 < iVar10)))) {
            bVar3 = true;
          }
          if (DAT_0096a250 != 0 || bVar3) {
            FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
            if ((g_heroState == GRINDRAIL_JUMP) || (g_heroState == GRINDRAIL_SWITCH)) {
              Hero_JumpThrustGrav();
            }
            else {
              DAT_00969dc8 = DAT_00969dc8 - DAT_0071f418 * 24.0;
            }
            DAT_0096a250 = DAT_0096a250 + 1;
          }
          else {
            fVar36 = DAT_0096a254 * (float)(longlong)DAT_0096a258;
            if (g_heroState == GRINDRAIL_DAMAGE) {
              fVar36 = DAT_0096a2ac * (float)(longlong)DAT_0096a258;
            }
            local_c8 = (ulonglong)DAT_0096a258;
            dVar30 = (double)fVar36;
            lVar24 = uVar8 - 0x5f0;
            mobyutil::MB_PathMoveDist(dVar30,DAT_0096a240,lVar24,&DAT_0096a244,&DAT_0096a248);
            if (DAT_0096a270 != 0) {
              mobyutil::MB_PathMoveDist
                        (dVar30,DAT_0096a274,uVar8 - 0x5e0,&DAT_0096a278,&DAT_0096a27c);
            }
            iVar10 = DAT_00969e7c;
            iVar15 = idol::GetAnimDuration(0x5a);
            if (iVar15 < iVar10) {
              dVar30 = (double)(float)((double)animationSpeed * 30.0);
              dVar34 = (double)(float)(dVar30 * (double)DAT_00969e40);
              FUN_005e7e98(dVar30,(double)animationSpeed,(double)DAT_00969e40,uVar8 - 0x5d0,
                           &g_heroPosition);
              local_e8 = DAT_0096a244;
              local_e4 = DAT_0096a248;
              iVar10 = mobyutil::MB_PathMoveDist
                                 (dVar34,DAT_0096a240,uVar8 - 0x5d0,uVar8 - 0xe8,uVar8 - 0xe4);
              FUN_005e7e98(uVar8 - 0x5c0,&g_heroPosition);
              local_e8 = DAT_0096a244;
              local_e4 = DAT_0096a248;
              iVar15 = mobyutil::MB_PathMoveDist
                                 ((double)(float)(dVar34 + 0.10000000149011612),DAT_0096a240,
                                  uVar8 - 0x5c0,uVar8 - 0xe8,uVar8 - 0xe4);
              if ((iVar10 == 0 && iVar15 == 0) || (DAT_0096a264 != 0)) {
                dVar30 = (double)DAT_0096a25c;
                uVar7 = FUN_005e8338((double)(local_5c0 - local_5d0),(double)(local_5bc - local_5cc)
                                    );
                dVar30 = (double)fastfunc::FastDiffRots(dVar30,uVar7);
                DAT_00721c34 = (float)(dVar30 * 0.3700000047683716);
                if (0.7853982 < (float)(dVar30 * 0.3700000047683716)) {
                  DAT_00721c34 = 0.7853982;
                }
                if (DAT_00721c34 < -0.7853982) {
                  DAT_00721c34 = -0.7853982;
                }
                DAT_00721c74 = 0x3cf5c28f;
                DAT_00721c78 = 0x3e4ccccd;
                if (DAT_0096a26c != 0) {
                  DAT_00721c34 = -DAT_00721c34;
                }
              }
            }
            if (((g_heroState != GRINDRAIL_JUMP) && (g_heroState != GRINDRAIL_DAMAGE)) &&
               (g_heroState != GRINDRAIL_SWITCH)) {
              uVar7 = FUN_005e7ebc(&DAT_00969de0);
              dVar30 = (double)FUN_005e8338(uVar7,(double)DAT_00969de8);
              DAT_00721c30 = (float)dVar30;
            }
            if (uVar25 != 0) {
              dVar30 = 0.30000001192092896;
              DAT_00721e84 = DAT_0071f40c * 0.017;
              DAT_00721e88 = DAT_0071f40c * 0.3;
              DAT_00721d28 = DAT_0071f40c * 0.3;
              DAT_00721dd8 = DAT_0071f40c * 0.3;
              DAT_00721d24 = DAT_0071f40c * 0.027;
              DAT_00721dd4 = DAT_0071f40c * 0.027;
              if (DAT_0096a2b8 == 0) {
                if (g_heroMobyPtr->animationId == '1') {
                  dVar30 = (double)fastfunc::FastWrapRot(-0.82030475,DAT_0096a2b0);
                  DAT_00721e48 = (float)dVar30;
                  dVar32 = 0.5882352590560913;
                  dVar34 = 0.7330383062362671;
                  dVar30 = (double)fastfunc::FastWrapRot(0.7330383,DAT_0096a2b0 * 0.58823526);
                  DAT_00721ce8 = (float)dVar30;
                  dVar30 = (double)fastfunc::FastWrapRot
                                             ((float)dVar34,(float)((double)DAT_0096a2b0 * dVar32));
                  DAT_00721d98 = (float)dVar30;
                }
                else if (g_heroMobyPtr->animationId == 'K') {
                  dVar30 = (double)fastfunc::FastWrapRot(0.13962634,DAT_0096a2b0);
                  DAT_00721e48 = (float)dVar30;
                  dVar32 = 0.5;
                  dVar34 = -0.06981316953897476;
                  dVar30 = (double)fastfunc::FastWrapRot(-0.06981317,DAT_0096a2b0 * 0.5);
                  DAT_00721ce8 = (float)dVar30;
                  dVar30 = (double)fastfunc::FastWrapRot
                                             ((float)dVar34,(float)((double)DAT_0096a2b0 * dVar32));
                  DAT_00721d98 = (float)dVar30;
                }
                else if (g_heroMobyPtr->animationId == 'J') {
                  dVar30 = (double)fastfunc::FastWrapRot(-0.82030475,DAT_0096a2b0);
                  DAT_00721e48 = (float)dVar30;
                  dVar32 = 0.5882352590560913;
                  dVar34 = 0.7330383062362671;
                  dVar30 = (double)fastfunc::FastWrapRot(0.7330383,DAT_0096a2b0 * 0.58823526);
                  DAT_00721ce8 = (float)dVar30;
                  dVar30 = (double)fastfunc::FastWrapRot
                                             ((float)dVar34,(float)((double)DAT_0096a2b0 * dVar32));
                  DAT_00721d98 = (float)dVar30;
                }
              }
              else {
                lVar22 = uVar8 - 0x5b0;
                FUN_005e81f0(lVar22,DAT_0096a2b8 + 0x10,&g_heroPosition);
                FUN_005e7d64(lVar22,lVar22,&g_heroGravityMtx);
                uVar7 = FUN_005e8338((double)local_5b0,(double)local_5ac);
                if (g_heroMobyPtr->updateId == '1') {
                  dVar34 = (double)fastfunc::FastDiffRots(uVar7,0x3ff921fb60000000);
                  DAT_00721e48 = (float)(dVar34 * dVar30);
                  DAT_00721d98 = (float)(dVar34 * 0.20000000298023224);
                }
                else {
                  dVar34 = (double)fastfunc::FastDiffRots(uVar7,0xbff921fb60000000);
                  DAT_00721e48 = (float)(dVar34 * dVar30);
                  DAT_00721d98 = (float)(dVar34 * 0.5);
                }
              }
            }
            iVar10 = mobyutil::MB_PathStepIndex(DAT_0096a240,DAT_0096a244,DAT_0096a258,DAT_0096a264)
            ;
            lVar22 = uVar8 - 0x5a0;
            FUN_005e81f0(lVar22,DAT_0096a240 + iVar10 * 4 + 4,lVar24);
            dVar30 = (double)FUN_005e8030(lVar22);
            if (0.0010000000474974513 <= dVar30) {
              dVar30 = (double)FUN_005e8338((double)local_5a0,(double)local_59c);
              DAT_0096a25c = (float)dVar30;
              uVar7 = FUN_005e7ebc(lVar22);
              dVar30 = (double)FUN_005e8338(uVar7,(double)local_598);
              DAT_0096a260 = (float)dVar30;
            }
            else if (DAT_0096a244 == iVar10) {
              DAT_0096a250 = idol::GetAnimDuration(1);
              goto LAB_000b703c;
            }
            dVar30 = (double)fastfunc::FastWrapRot(DAT_0096a25c,DAT_0096a268);
            g_heroIdealRotZ = (float)dVar30;
            dVar30 = 0.014999999664723873;
            dVar34 = 6.2831854820251465;
            if (g_heroGravityMode == '\0') {
              dVar32 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.015),
                                          (double)(DAT_0071f40c * 0.15),
                                          (double)(mobyutil::g_FrameTime * 6.2831855),0x969d78);
              DAT_00969e68 = (float)dVar32;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.015,DAT_0071f40c * 0.15,mobyutil::g_FrameTime * 6.2831855
                         );
            }
            if ((((g_heroState == GRINDRAIL_JUMP) || (g_heroState == GRINDRAIL_SWITCH)) &&
                (g_DustHoverState == 0)) || (g_heroState == GRINDRAIL_DAMAGE)) {
              if (DAT_0096a2a4 != 0) {
                dVar28 = (double)FUN_005e8338((double)(DAT_0096a230 - g_heroPosition.x),
                                              (double)(DAT_0096a234 - g_heroPosition.y));
                dVar30 = (double)fastfunc::FastSubRots(g_heroRotation.z,(float)dVar28);
                if (dVar30 < 1.5707963705062866) {
                  g_heroIdealRotZ = (float)dVar28;
                  if (g_heroGravityMode == '\0') {
                    dVar28 = (double)mobyutil::AccelDeltAng
                                               ((double)g_heroIdealRotZ,
                                                (double)(DAT_0071f40c * 0.04),
                                                (double)(DAT_0071f40c * 0.2),
                                                (double)(float)((double)mobyutil::g_FrameTime *
                                                               dVar34),0x969d78);
                    DAT_00969e68 = (float)dVar28;
                  }
                  else {
                    Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.2,
                                (float)((double)mobyutil::g_FrameTime * dVar34));
                  }
                }
              }
              iVar10 = DAT_0096a284;
              if ((DAT_0096a270 == 0) || (iVar15 = idol::GetAnimDuration(0x30), iVar15 < iVar10)) {
                FUN_005e81f0(uVar8 - 0x560,lVar24,&DAT_0096a1e0);
                lVar24 = uVar8 - 0x550;
                g_heroVelocity = local_560;
                g_heroPosition.z = g_heroPosition.z + local_558;
                DAT_00969dc4 = local_55c;
                FUN_005e81f0(lVar24,&DAT_0096a1e0,&g_heroPosition);
                local_548 = 0;
                dVar28 = (double)FUN_005e8030(lVar24);
                if ((double)mobyutil::g_FrameTime < dVar28) {
                  FUN_005e7f98((double)mobyutil::g_FrameTime,lVar24,lVar24);
                }
                g_heroPosition.x = g_heroPosition.x + local_550;
                g_heroPosition.y = g_heroPosition.y + local_54c;
              }
              else {
                lVar23 = uVar8 - 0x590;
                lVar21 = uVar8 - 0x5e0;
                FUN_005e81f0(lVar23,lVar24,lVar21);
                DAT_0096a284 = DAT_0096a284 + 1;
                local_c8 = (ulonglong)DAT_0096a284;
                dVar28 = (double)(longlong)local_c8;
                iVar10 = idol::GetAnimDuration((double)(longlong)local_c8,0x30);
                local_c8 = (ulonglong)iVar10;
                FUN_005e822c((double)(float)(dVar28 / (double)(longlong)local_c8),lVar23,lVar23);
                local_c8 = (ulonglong)(DAT_0096a284 + -1);
                dVar28 = (double)(longlong)local_c8;
                iVar10 = idol::GetAnimDuration((double)(longlong)local_c8,0x30);
                local_c8 = (ulonglong)iVar10;
                lVar22 = uVar8 - 0x570;
                dVar28 = (double)(float)(dVar28 / (double)(longlong)local_c8);
                FUN_005e81f0((double)(longlong)local_c8,lVar22,lVar24,lVar21);
                FUN_005e822c(dVar28,lVar22,lVar22);
                g_heroPosition.z = g_heroPosition.z + (local_588 - local_568);
                FUN_005e7f54(uVar8 - 0x580,lVar21,lVar23);
                FUN_005e81f0(lVar23,uVar8 - 0x580,&g_heroPosition);
                g_heroVelocity = local_590;
                DAT_00969dc4 = local_58c;
                FUN_005e81f0(lVar23,lVar24,&DAT_0096a1e0);
                iVar10 = DAT_0096a284;
                g_heroPosition.z = g_heroPosition.z + local_588;
                if (((g_heroPosition.z < DAT_0096a1e8) &&
                    (iVar15 = idol::GetAnimDuration(0x30), iVar10 <= iVar15)) &&
                   (g_heroPosition.z < DAT_0096a1e8)) {
                  g_heroPosition.z = DAT_0096a1e8;
                }
              }
              if (g_heroState == GRINDRAIL_DAMAGE) {
                DAT_00969dc8 = DAT_00969dc8 - DAT_0071f418 * 23.0;
              }
              else {
                Hero_JumpThrustGrav();
              }
            }
            else {
              uVar7 = 0;
              DAT_0096a270 = 0;
              dVar34 = 12.0;
              dVar32 = (double)(mobyutil::g_FrameTime * 12.0);
              if (!bVar19 && 0.5 < g_heroPadMagnitude) {
                Hero_GetIdealThrustFromPad(0x3ff0000000000000,0,0);
                dVar29 = (double)fastfunc::FastSubRots(g_heroIdealRotZ,GameCamera.rot.radius);
                dVar31 = 1.5707963705062866;
                dVar26 = (double)fastfunc::FastSubRots((float)dVar29,1.5707964);
                dVar35 = 1.2217304706573486;
                if ((dVar26 < 1.2217304706573486) ||
                   (uVar7 = fastfunc::FastSubRots((float)dVar29,-1.5707964), extraout_f1_05 < dVar35
                   )) {
                  dVar29 = (double)fastfunc::FastDiffRots
                                             ((double)g_heroIdealRotZ,(double)GameCamera.rot.radius)
                  ;
                  uVar7 = fastfunc::FastSubRots((float)dVar29,(float)dVar31);
                  DAT_0096a288 = 3;
                  if (extraout_f1_06 < 0.7853981852531433) {
                    DAT_0096a288 = 2;
                  }
                }
              }
              dVar26 = 0.0;
              dVar29 = dVar26;
              if (0.2 < g_heroPadMagnitude && bVar19) {
                Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar7,0);
                dVar31 = (double)fastfunc::FastDiffRots
                                           ((double)g_heroIdealRotZ,(double)DAT_0096a25c);
                dVar29 = 0.7853981852531433;
                if ((dVar31 <= 0.7853981852531433) &&
                   (dVar29 = dVar31, dVar31 < -0.7853981852531433)) {
                  dVar29 = -0.7853981852531433;
                }
              }
              dVar31 = 0.30000001192092896;
              mobyutil::AccelDeltAng
                        (dVar29,(double)(float)((double)DAT_0071f40c * dVar30),
                         (double)(float)((double)DAT_0071f40c * 0.30000001192092896),dVar26,
                         &DAT_0096a2b0);
              mobyutil::Delt((float)dVar32,DAT_0071f418 * 15.0,&DAT_0096a290);
              lVar22 = uVar8 - 0x530;
              local_dc = DAT_0096a244;
              local_d8 = DAT_0096a248;
              FUN_005e7e98(lVar22,&g_heroPosition);
              mobyutil::MB_PathMoveDist(dVar31,DAT_0096a240,lVar22,uVar8 - 0xdc,uVar8 - 0xd8);
              uVar7 = FUN_005e8588(&DAT_0096a1e0,lVar22);
              dVar30 = (double)FUN_005e8338(uVar7,(double)(local_528 - DAT_0096a1e8));
              if (dVar30 <= dVar26) {
                fVar36 = (float)(dVar30 * -2.8647890090942383) * mobyutil::g_FrameTime * 8.0;
                if (((-0.19198621809482574 <= dVar30) || (DAT_0096a288 == 2)) || (DAT_0096a288 == 3)
                   ) {
                  if ((-0.12217304855585098 < dVar30) && (DAT_0096a288 == 1)) {
                    DAT_0096a288 = -1;
                  }
                }
                else {
                  DAT_0096a288 = 1;
                }
              }
              else {
                fVar36 = (float)(dVar30 * 1.909859299659729) * mobyutil::g_FrameTime * -2.5;
                if (((dVar30 <= 0.2617993950843811) || (DAT_0096a288 == 2)) || (DAT_0096a288 == 3))
                {
                  if ((dVar30 < 0.13962633907794952) && (DAT_0096a288 == 0)) {
                    DAT_0096a288 = -1;
                  }
                }
                else {
                  DAT_0096a288 = 0;
                }
              }
              if (fVar36 <= DAT_0096a28c) {
                mobyutil::Delt(fVar36,(float)((double)DAT_0071f418 * dVar28),&DAT_0096a28c);
              }
              else {
                mobyutil::Delt(fVar36,DAT_0071f418 * 8.0,&DAT_0096a28c);
              }
              if ((float)((double)mobyutil::g_FrameTime * dVar34) < DAT_0096a28c) {
                DAT_0096a28c = (float)((double)mobyutil::g_FrameTime * dVar34);
              }
              if (DAT_0096a28c < mobyutil::g_FrameTime * -2.5) {
                DAT_0096a28c = mobyutil::g_FrameTime * -2.5;
              }
              DAT_0096a254 = DAT_0096a290 + DAT_0096a28c;
              if ((double)DAT_0096a254 < dVar26) {
                DAT_0096a254 = (float)dVar26;
              }
              FUN_005e81f0(&g_heroVelocity,lVar24,&DAT_0096a1e0);
              lVar24 = uVar8 - 0x540;
              FUN_005e81f0(lVar24,&DAT_0096a1e0,&g_heroPosition);
              dVar30 = (double)(mobyutil::g_FrameTime * 7.0);
              dVar28 = (double)FUN_005e8030(lVar24);
              local_e0 = (float)-dVar28;
              fVar36 = mobyutil::AccelDelt((float)dVar26,
                                           (float)((double)DAT_0071f40c * 0.029999999329447746),
                                           (float)((double)DAT_0071f40c * dVar31),(float)dVar30,
                                           &local_e0,(int)puVar20,&DAT_0096a2bc);
              dVar28 = (double)FUN_005e8030((double)fVar36,lVar24);
              if (dVar28 < (double)DAT_0096a2bc) {
                DAT_0096a2bc = (float)dVar28;
              }
              if ((double)DAT_0096a2bc < dVar28) {
                FUN_005e7f98((double)DAT_0096a2bc,lVar24,lVar24);
              }
              FUN_005e7f54(&g_heroPosition,&g_heroPosition,lVar24);
              if (((g_heroPosition.z < DAT_0096a1e8) && (g_heroGroundDist < 1.0)) &&
                 (g_heroPosition.z < DAT_0096a1e8)) {
                g_heroPosition.z = DAT_0096a1e8;
              }
            }
            iVar10 = g_heroStateTimer;
            if ((g_heroState == GRINDRAIL_WRENCH_ATTACK) &&
               (iVar15 = idol::GetAnimDuration(0x14), iVar10 < iVar15)) {
              dVar30 = (double)DAT_0096a25c;
              dVar28 = (double)mobyutil::MB_randRangeSigned(0x3fd6571840000000,0x3fe38c3540000000);
              dVar28 = (double)fastfunc::FastWrapRot((float)dVar30,(float)dVar28);
              dVar30 = (double)mathfunc::cosf((float)dVar28);
              local_520 = (float)dVar30;
              dVar28 = (double)FUN_005e8128(dVar28);
              local_51c = (float)dVar28;
              local_518 = 0;
              uVar7 = 0x3ff0000000000000;
              mobyutil::SetCollDamIn(0x3ff0000000000000,uVar8 - 0x230,g_heroMobyPtr,0x10000);
              FUN_005e7e98(uVar8 - 0x510,&g_heroPosition);
              local_508 = local_508 + 0.6;
              collproc::CollMobySphere(uVar7,uVar8 - 0x510);
            }
          }
          goto LAB_000b703c;
        }
        if ((int)g_heroState < 0x36) {
          if ((int)g_heroState < 0x32) {
            if (Level == Quartu) {
              Hero_PlayLoopSound(2,g_heroMobyPtr,0x1d);
            }
            else {
              Hero_PlayLoopSound(2,g_heroMobyPtr,6);
            }
            if (Level != Quartu) {
              Hero_SpawnWaterBubbles(4,2);
              dVar34 = -0.25;
              dVar30 = 0.25;
              dVar28 = (double)mobyutil::MB_randRangeFloat(-0.25,0.25);
              local_630 = (float)((double)g_heroPosition.x + dVar28);
              dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar30);
              local_62c = (float)((double)g_heroPosition.y + dVar28);
              dVar28 = (double)mobyutil::MB_randRangeFloat(-0.1,0.4);
              local_628 = (float)((double)g_heroPosition.z + dVar28);
              FUN_005e822c(0x3fecccccc0000000,uVar8 - 0x620,&DAT_00969de0);
              dVar34 = -0.699999988079071;
              dVar30 = 0.699999988079071;
              dVar28 = (double)mobyutil::MB_randRangeFloat
                                         (mobyutil::g_FrameTime * -0.7,mobyutil::g_FrameTime * 0.7);
              local_620 = (float)((double)local_620 + dVar28);
              dVar28 = (double)mobyutil::MB_randRangeFloat
                                         ((float)((double)mobyutil::g_FrameTime * dVar34),
                                          (float)((double)mobyutil::g_FrameTime * dVar30));
              local_61c = (float)((double)local_61c + dVar28);
              dVar28 = (double)mobyutil::MB_randRangeFloat
                                         (mobyutil::g_FrameTime,mobyutil::g_FrameTime * 2.0);
              local_618 = (float)((double)local_618 + dVar28);
              mobyutil::MB_randRangeFloat(37800.0,75600.0);
              partupd::SpawnPart_47(uVar8 - 0x630,uVar8 - 0x620);
            }
            dVar28 = (double)FUN_005e8030(&DAT_00969dd0);
            dVar30 = 0.5;
            if (dVar28 <= (double)(mobyutil::g_FrameTime * 0.5)) {
              dVar34 = (double)g_heroRotation.z;
            }
            else {
              dVar34 = (double)FUN_005e8338((double)DAT_00969dd0,(double)DAT_00969dd4);
            }
            g_heroIdealRotZ = (float)dVar34;
            dVar34 = 0.20000000298023224;
            dVar32 = (double)g_heroRotation.z;
            fVar36 = DAT_0071f40c * (float)(dVar28 * 0.125);
            if (g_heroGravityMode == '\0') {
              dVar28 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)fVar36,
                                          (double)(DAT_0071f40c * 0.2),
                                          (double)(mobyutil::g_FrameTime * 4.1887903),0x969d78);
              DAT_00969e68 = (float)dVar28;
            }
            else {
              Hero_Turn3D(fVar36,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 4.1887903);
            }
            dVar28 = (double)fastfunc::FastSubRots(g_heroRotation.z,(float)dVar32);
            FUN_005e7e70(&g_heroVelocity);
            Hero_ApplyTaper(DAT_0071f418 * 5.0);
            DAT_00969dc8 = DAT_00969de8 - DAT_0071f418 * 50.0;
            if (DAT_0071f418 * -40.0 < DAT_00969dc8) {
              DAT_00969dc8 = DAT_0071f418 * -40.0;
            }
            if ((double)(mobyutil::g_FrameTime * 1.3962634) < dVar28) {
              dVar28 = (double)(mobyutil::g_FrameTime * 1.3962634);
            }
            dVar28 = (double)(float)(dVar28 * 9.0);
            mobyutil::AccelDeltAng
                      ((double)(float)(dVar28 * dVar30),0x3f7cac0840000000,0x3fc5c28f60000000,
                       (double)(mobyutil::g_FrameTime * 1.2217305),&g_heroRotation);
            iVar10 = g_heroStateTimer;
            iVar15 = idol::GetAnimDuration(100);
            if (iVar15 < iVar10) {
              mobyutil::AccelDeltAng
                        (-(double)DAT_0096a6b4,(double)(DAT_0071f40c * 0.035),
                         (double)(DAT_0071f40c * 0.3),(double)(mobyutil::g_FrameTime * 1.9198622),
                         0x969d74);
            }
            DAT_00721d24 = 0.009;
            DAT_00721d28 = 0.22;
            DAT_00721dd8 = (float)dVar34;
            DAT_00721dd4 = 0.04;
            DAT_00721e88 = (float)dVar34;
            DAT_00721e84 = 0.02;
            DAT_00721ce8 = (float)(dVar28 * 2.0999999046325684);
            DAT_00721ce0 = (float)(dVar28 * 3.5);
          }
          else if (0x32 < (int)g_heroState) {
            if (g_heroState == HYDRO_PACK_MOVING) {
              Hero_PlayLoopSound(5,g_heroMobyPtr,0x13);
            }
            else {
              if (((DAT_0096bf0c != -1) &&
                  (sound::g_SoundChannels[DAT_0096bf0c].pMoby == g_heroMobyPtr)) &&
                 (sound::g_SoundChannels[DAT_0096bf0c].state != '\0')) {
                sound::sound_Kill(DAT_0096bf0c);
              }
              DAT_0096bf0c = -1;
            }
            if (DAT_0096a5ea != 0) {
              fastfunc::FastDecTimerS16(&DAT_0096a5ea);
              sVar16 = (short)DAT_0096a5ea >> 2;
              if (8 < sVar16) {
                sVar16 = 8;
              }
              Hero_SpawnWaterBubbles(sVar16,0);
            }
            if ((((g_heroState == UNDERWATER_MOVING) && (DAT_0096a77c == 0)) &&
                (0.0 < g_heroAnimFrame)) && (g_heroAnimFrame < 10.0)) {
              Hero_SpawnWaterBubbles(4,1);
            }
            iVar10 = g_heroStateTimer;
            if (((g_heroState == UNDERWATER_STANDING) && (DAT_0096bd70 == 0x35)) &&
               (iVar15 = idol::GetAnimDuration(0xf), iVar10 < iVar15)) {
              iVar10 = idol::GetAnimDuration(0x14);
              iVar10 = iVar10 - g_heroStateTimer;
              Hero_SpawnWaterBubbles
                        (((iVar10 / 3 + (iVar10 >> 0x1f)) - (iVar10 / 3 + (iVar10 >> 0x1f) >> 0x1f))
                         + 1,1);
            }
            if (DAT_0096bd68 == 1) {
              if (g_heroStateTimer == 1) {
                Hero_SpawnWaterSplash(3,0x10,0);
                if (WaterTiles != (WaterTile *)0x0) {
                  water::WaterTile_PutDrop
                            (g_heroPosition.x,g_heroPosition.y,0.4,-0.3,WaterTiles,WaterTileCnt,
                             (float)in_f5);
                }
                DAT_0096a5ea = idol::GetAnimDuration(0x46);
              }
              iVar15 = DAT_0096a5c0 + 1;
              DAT_0096a5c0 = iVar15;
              iVar10 = idol::GetAnimDuration(0x28);
              if (iVar10 < iVar15) {
                DAT_0096bd68 = 0;
              }
            }
            dVar28 = 0.0;
            fVar36 = DAT_00964a68;
            if (DAT_00964a68 < DAT_00964a6c) {
              fVar36 = DAT_00964a6c;
            }
            dVar34 = 1.2217304706573486;
            dVar26 = 0.20000000298023224;
            dVar32 = (double)(DAT_0071f40c * 0.015);
            dVar29 = (double)(DAT_0071f40c * 0.2);
            dVar30 = (double)((mobyutil::g_FrameTime * 1.2217305 - mobyutil::g_FrameTime * 0.6981317
                              ) * fVar36);
            dVar31 = (double)(float)((double)(mobyutil::g_FrameTime * 0.6981317) + dVar30);
            if ((((g_downButtons & SQUARE) == 0) || ((g_downButtons & CROSS) != 0)) &&
               (DAT_0096bd68 != 1)) {
              if ((g_downButtons & CROSS) == 0) {
                DAT_0096a5e0 = 0;
                DAT_0096a5e2 = 0;
                dVar35 = dVar28;
              }
              else {
                dVar35 = 1.0;
                dVar30 = (double)(DAT_00964a68 * 1.5);
                if (1.0 < (double)(DAT_00964a68 * 1.5)) {
                  dVar30 = dVar35;
                }
                if (dVar30 < 0.20000000298023224) {
                  dVar30 = dVar26;
                }
                if (DAT_00964b1c != 0x79) {
                  DAT_0096a5e0 = DAT_0096a5e0 + 1;
                  DAT_0096a5e2 = 0;
                  local_c8 = (ulonglong)(int)DAT_0096a5e0;
                  dVar27 = 0.5;
                  dVar30 = (double)(float)((double)(longlong)local_c8 * 0.5);
                  iVar10 = idol::GetAnimDuration(0x14);
                  dVar30 = (double)(float)((double)(float)(dVar30 / (double)(longlong)iVar10) +
                                          dVar27);
                  if (dVar35 < dVar30) {
                    dVar30 = dVar35;
                  }
                }
                local_c8 = (ulonglong)g_Oxygen;
                if ((float)(longlong)local_c8 < 1500.0) {
                  dVar30 = dVar35;
                }
                dVar35 = (double)(float)(dVar30 * -1.3613568544387817);
              }
            }
            else {
              dVar35 = 1.0;
              dVar30 = (double)(DAT_00964a6c * 1.5);
              if (1.0 < (double)(DAT_00964a6c * 1.5)) {
                dVar30 = dVar35;
              }
              if (dVar30 < 0.20000000298023224) {
                dVar30 = dVar26;
              }
              if (DAT_00964b1c != 0x79) {
                DAT_0096a5e2 = DAT_0096a5e2 + 1;
                DAT_0096a5e0 = 0;
                local_c8 = (ulonglong)(int)DAT_0096a5e2;
                dVar27 = 0.5;
                dVar30 = (double)(float)((double)(longlong)local_c8 * 0.5);
                iVar10 = idol::GetAnimDuration(0x14);
                local_c8 = (ulonglong)iVar10;
                dVar30 = (double)(float)((double)(float)(dVar30 / (double)(longlong)local_c8) +
                                        dVar27);
                if (dVar35 < dVar30) {
                  dVar30 = dVar35;
                }
              }
              if ((DAT_0096bd68 == 1) && (dVar30 < 0.3499999940395355)) {
                dVar30 = 0.3499999940395355;
              }
              dVar35 = (double)(float)(dVar30 * 1.3613568544387817);
            }
            if ((g_downButtons & CROSS) == 0) {
              DAT_0096a5ee = 0;
              DAT_0096a5ec = 0;
            }
            else {
              dVar30 = (double)DAT_00964a68;
              DAT_0096a5ee = DAT_0096a5ee + 1;
              if (dVar30 <= 0.75) {
                DAT_0096a5ec = 0;
              }
              else {
                sVar16 = DAT_0096a5ec + 1;
                DAT_0096a5ec = sVar16;
                sVar17 = idol::GetAnimDuration(0x5a);
                if ((sVar17 < sVar16) && (CHAR_ARRAY_00a0feec._88_2_ != -1)) {
                  CHAR_ARRAY_00a0feec._88_2_ = CHAR_ARRAY_00a0feec._88_2_ + 1;
                }
                iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
                dVar30 = extraout_f1;
                if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._90_2_ < iVar10 / 600) {
                  iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
                  sVar16 = (short)(iVar10 >> 0x1f);
                  CHAR_ARRAY_00a0feec._90_2_ =
                       ((short)(iVar10 / 600) + sVar16) -
                       ((short)((short)(iVar10 / 0x2580000) + sVar16) >> 0xf);
                  dVar30 = extraout_f1_00;
                }
                CHAR_ARRAY_00a0feec._92_4_ =
                     CHAR_ARRAY_00a0feec._92_4_ | 1 << (Level & 0x3f) | 0x80000000;
              }
            }
            if ((g_buttonsPressedThisFrame & CROSS) != 0) {
              iVar15 = worldUpdateTime - DAT_0096a5f4;
              iVar10 = idol::GetAnimDuration(dVar30,0x46);
              if (iVar15 < iVar10) {
                DAT_0096a5f0 = DAT_0096a5f0 + 1;
              }
              DAT_0096a5f4 = worldUpdateTime;
              dVar30 = extraout_f1_01;
            }
            sVar16 = DAT_0096a5ee;
            sVar17 = idol::GetAnimDuration(dVar30,0x46);
            if (sVar17 < sVar16) {
              DAT_0096a5f0 = 0;
            }
            if ((g_downButtons & SQUARE) != 0) {
              DAT_0096a5f0 = 0;
            }
            if (g_heroState == UNDERWATER_STANDING) {
              dVar35 = dVar28;
            }
            dVar30 = (double)g_heroRotation.y;
            mobyutil::AccelDeltAng(dVar35,dVar32,dVar29,dVar31,0x969d74);
            uVar7 = fastfunc::FastDiffRots((double)g_heroRotation.y,dVar30);
            dVar32 = 1.0;
            dVar30 = extraout_f1_02;
            Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar7,0);
            uVar7 = 0x3f7cac0840000000;
            if (g_heroGravityMode == '\0') {
              dVar29 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.007),
                                          (double)(DAT_0071f40c * 0.08),
                                          (double)(mobyutil::g_FrameTime * 5.2359877),0x969d78);
              DAT_00969e68 = (float)dVar29;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.007,DAT_0071f40c * 0.08,mobyutil::g_FrameTime * 5.2359877
                         );
            }
            DAT_0096a5cc = DAT_00969e64;
            fastfunc::FastDecTimerS32(&DAT_0096a5d4);
            if (DAT_0096bd68 == 1) {
              g_heroIdealSpeed = mobyutil::g_FrameTime * 6.0;
            }
            else if (g_heroState == HYDRO_PACK_MOVING) {
              if ((g_downButtons & (R1|R2)) == 0) {
                g_heroIdealSpeed = mobyutil::g_FrameTime * 7.0 * 0.4;
              }
              else {
                g_heroIdealSpeed = mobyutil::g_FrameTime * 7.0;
              }
            }
            else {
              g_heroIdealSpeed = mobyutil::g_FrameTime * 3.0;
            }
            dVar29 = (double)g_heroPadMagnitude;
            if ((((g_downButtons & (SQUARE|CROSS)) != 0) || (DAT_0096bd68 == 1)) &&
               (dVar29 < dVar32)) {
              dVar29 = dVar32;
            }
            if (0.15 < g_heroPadMagnitude) {
              if (g_heroState == HYDRO_PACK_MOVING) {
                if (dVar29 < 0.4000000059604645) {
                  dVar29 = 0.4000000059604645;
                }
              }
              else if (dVar29 < 0.3499999940395355) {
                dVar29 = 0.3499999940395355;
              }
            }
            if ((g_heroState != HYDRO_PACK_MOVING) || ((g_downButtons & (R1|R2)) == 0)) {
              g_heroIdealSpeed = (float)((double)g_heroIdealSpeed * dVar29);
            }
            iVar10 = fastfunc::FastDecTimerS32(&DAT_0096a5d0);
            if (iVar10 != 0) {
              lVar21 = uVar8 - 0x920;
              mobyfunc::GetBonePosition(g_heroMobyPtr,4,lVar21);
              lVar22 = uVar8 - 0x900;
              FUN_005e7d64(lVar22,lVar22,&g_heroMobyPtr->transform);
              FUN_005e7f54(lVar21,lVar21,lVar22);
              lVar24 = uVar8 - 0x910;
              FUN_005e7e98(lVar24,&DAT_00969de0);
              FUN_005e7f98((double)(mobyutil::g_FrameTime * 1.5),lVar22,lVar22);
              FUN_005e7f54(lVar24,lVar24,lVar22);
              partupd::SpawnPart_34
                        (0x40d89c0000000000,0xbff0000000000000,(Vec4 *)lVar21,(int)lVar24);
              iVar10 = mobyutil::MB_randInt(100);
              local_c8 = (ulonglong)iVar10;
              if (40.0 <= (float)(longlong)local_c8) {
                uVar14 = idol::GetAnimDuration(0x28);
                uVar11 = idol::GetAnimDuration(0x5a);
                DAT_0096a5d0 = mobyutil::MB_randRange(uVar14,uVar11);
              }
              else {
                uVar14 = idol::GetAnimDuration(4);
                uVar11 = idol::GetAnimDuration(0xb);
                DAT_0096a5d0 = mobyutil::MB_randRange(uVar14,uVar11);
              }
            }
            if (((g_heroState == HYDRO_PACK_MOVING) &&
                (iVar15 = fastfunc::FastDecTimerS16(&DAT_0096a5d8), iVar10 = DAT_0096ae60,
                iVar15 != 0)) && ((DAT_0096ae60 != 0 && (*(short *)(DAT_0096ae60 + 0xa6) == 0x261)))
               ) {
              uVar25 = 0;
              do {
                lVar22 = uVar8 - 0x8f0;
                mobyfunc::GetBonePosition
                          (iVar10,uVar25 + (((int)uVar25 >> 1) +
                                           (uint)((int)uVar25 < 0 && (uVar25 & 1) != 0)) * -2,lVar22
                          );
                lVar24 = uVar8 - 0x8d0;
                FUN_005e7d64(lVar24,lVar24,&g_heroMobyPtr->transform);
                FUN_005e7f54(lVar22,lVar22,lVar24);
                dVar32 = 0.029999999329447746;
                mobyutil::MB_randRangeFloat((float)dVar28,0.03);
                mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar32);
                mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar32);
                FUN_005e7e98(uVar8 - 0x8e0,&DAT_00969de0);
                out = (float *)(uVar8 - 0x8e0);
                mobyutil::MB_AddVectorSphere(out,out);
                dVar32 = (double)(mobyutil::g_FrameTime * 7.0 - g_storedNeutralSpeed);
                dVar29 = (double)(float)(dVar32 / (double)(mobyutil::g_FrameTime * 7.0));
                iVar15 = idol::GetAnimDuration((double)(mobyutil::g_FrameTime * 7.0),dVar32,5);
                local_c8 = (ulonglong)iVar15;
                DAT_0096a5d8 = fastfunc::FastDoubleToInt
                                         ((double)(float)(dVar29 * (double)(longlong)local_c8));
                uVar33 = mobyutil::MB_randRangeFloat(6300.0,9450.0);
                partupd::SpawnPart_34(uVar33,0xbff0000000000000,(Vec4 *)lVar22,out);
                uVar25 = uVar25 + 1;
              } while ((int)uVar25 < 4);
            }
            if (g_heroState == HYDRO_PACK_MOVING) {
              if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 8.0,&g_storedNeutralSpeed);
              }
              else {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 13.0,&g_storedNeutralSpeed);
              }
            }
            else if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
              mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 4.0,&g_storedNeutralSpeed);
            }
            else {
              mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 7.0,&g_storedNeutralSpeed);
            }
            dVar32 = (double)fastfunc::FastWrapRot(-g_heroRotation.y,(float)dVar28);
            if (g_heroState == HYDRO_PACK_MOVING) {
              mobyutil::MB_SphericalToVector
                        (g_storedNeutralSpeed,g_heroRotation.z,(float)dVar32,&g_heroVelocity);
            }
            else if (g_heroState == UNDERWATER_MOVING) {
              fVar36 = Hero_GetAnimScaledVal((float *)&DAT_00723534,0x1e);
              iVar10 = g_heroStateTimer;
              dVar28 = (double)(g_storedNeutralSpeed * fVar36 * 5.0);
              if (((DAT_0096bd70 == 0x35) && (iVar15 = idol::GetAnimDuration(0xf), iVar10 < iVar15))
                 && (dVar28 < (double)(mobyutil::g_FrameTime * 4.5))) {
                dVar28 = (double)(mobyutil::g_FrameTime * 4.5);
              }
              mobyutil::MB_SphericalToVector
                        ((float)dVar28,g_heroRotation.z,(float)dVar32,&g_heroVelocity);
            }
            else if (g_heroState == UNDERWATER_STANDING) {
              dVar29 = (double)FUN_005e8030(&g_heroExternalMomentum);
              local_110 = (float)dVar29;
              if (DAT_0096bd70 == 0x35) {
                mobyutil::Delt((float)dVar28,DAT_0071f418 * 8.0,&local_110);
              }
              else {
                mobyutil::Delt((float)dVar28,DAT_0071f418 * 4.0,&local_110);
              }
              FUN_005e7f98((double)local_110,&g_heroExternalMomentum,&g_heroExternalMomentum);
              FUN_005e7e98(&g_heroVelocity,&g_heroExternalMomentum);
            }
            Hero_KneeBumpMotion(0);
            dVar28 = (double)mathfunc::cosf((float)dVar32);
            dVar28 = (double)((float)((double)DAT_0096a5cc * dVar28) * -7.0);
            mobyutil::AccelDeltAng
                      (dVar28,uVar7,0x3fc5c28f60000000,
                       (double)(float)((double)mobyutil::g_FrameTime * dVar34),&g_heroRotation);
            DAT_00721d24 = 0.009;
            DAT_00721d28 = 0.22;
            DAT_00721dd8 = (float)dVar26;
            DAT_00721dd4 = 0.04;
            DAT_00721e88 = (float)dVar26;
            DAT_00721e84 = 0.02;
            DAT_00721ce8 = (float)(dVar28 * 1.5);
            DAT_00721ce0 = (float)(dVar28 * 1.399999976158142);
            DAT_00721ce4 = (float)(dVar30 * 47.0);
            if (DAT_00721ce4 <= 0.87266463) {
              if (DAT_00721ce4 < -0.87266463) {
                DAT_00721ce4 = -0.87266463;
              }
            }
            else {
              DAT_00721ce4 = 0.87266463;
            }
            DAT_00721f38 = 0x3e6147ae;
            DAT_00721fe8 = 0x3e6147ae;
            DAT_00721f34 = 0x3cf5c28f;
            DAT_00721fe4 = 0x3cf5c28f;
            DAT_00721ef4 = (float)(dVar30 * 40.0);
            DAT_00721ef8 = (float)(dVar28 * 1.100000023841858);
            DAT_00721fa4 = DAT_00721ef4;
            DAT_00721fa8 = DAT_00721ef8;
          }
          goto LAB_000b703c;
        }
        if ((int)g_heroState < 0x3b) {
          if ((int)g_heroState < 0x38) {
            if (g_heroState == UNK_37) {
              Hero_SpawnWaterRings(0xf,0x1e);
            }
            if (mobyutil::g_FrameTime * 1.5 < DAT_00969e44) {
              Hero_SpawnWaterDrops(4,0xc);
            }
            if ((g_heroState == WATER_SWIMMING) && (mobyutil::g_FrameTime < DAT_00969e44)) {
              Hero_SpawnWaterWake(0,1);
            }
            uVar8 = (ulonglong)DAT_0096a5ea;
            if (DAT_0096a5ea != 0) {
              DAT_0096a5ea = DAT_0096a5ea - 1;
              sVar16 = (short)DAT_0096a5ea >> 3;
              if (6 < sVar16) {
                sVar16 = 6;
              }
              uVar8 = Hero_SpawnWaterBubbles(sVar16,0);
            }
            g_heroAnimSpeed = 0.6;
            dVar28 = 3.0;
            Hero_GetIdealThrustFromPad((double)(mobyutil::g_FrameTime * 3.0),uVar8,0);
            if ((DAT_00964b14 == 0) &&
               (g_heroIdealSpeed < (float)((double)mobyutil::g_FrameTime * dVar28) * 0.5)) {
              g_heroIdealSpeed = (float)((double)mobyutil::g_FrameTime * dVar28) * 0.5;
            }
            if (g_heroGravityMode == '\0') {
              dVar30 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.007),
                                          (double)(DAT_0071f40c * 0.08),
                                          (double)(mobyutil::g_FrameTime * 5.2359877),0x969d78);
              DAT_00969e68 = (float)dVar30;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.007,DAT_0071f40c * 0.08,mobyutil::g_FrameTime * 5.2359877
                         );
            }
            fastfunc::FastDecTimerS32(&DAT_0096a378);
            if (g_heroState == WATER_SWIMMING) {
              if ((DAT_00964b14 != 0) && (DAT_0096a378 != 0)) {
                g_heroIdealSpeed = (float)((double)mobyutil::g_FrameTime * dVar28);
              }
              if (0.7853982 < ABS(DAT_00969e68)) {
                g_heroIdealSpeed = 0.0;
              }
              if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 5.0,&g_storedNeutralSpeed);
              }
              else {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 4.0,&g_storedNeutralSpeed);
              }
              fVar36 = Hero_GetAnimScaledVal((float *)&DAT_00723534,0x1e);
              dVar30 = (double)(g_storedNeutralSpeed * fVar36 * 5.5);
              dVar28 = (double)mathfunc::cosf(g_heroRotation.z);
              g_heroVelocity = (float)(dVar28 * dVar30);
              dVar28 = (double)FUN_005e8128((double)g_heroRotation.z);
              DAT_00969dc4 = (float)(dVar28 * dVar30);
              DAT_00969dc8 = 0.0;
            }
            else {
              g_storedNeutralSpeed = 0.0;
              FUN_005e7e70(&g_heroVelocity);
            }
            if ((((g_heroState == WATER_SWIMMING) && (DAT_0096a77c == 0)) && (0.0 < g_heroAnimFrame)
                ) && (g_heroAnimFrame < 10.0)) {
              Hero_SpawnWaterBubbles(4,1);
            }
            Hero_ApplyTaper(DAT_0071f418 * 4.2);
            Hero_KneeBumpMotion(0);
            Hero_SurfBob();
          }
          else if ((g_standingOnMoby != 0) && (*(short *)(g_standingOnMoby + 0xa6) == 0x155)) {
            lVar24 = uVar8 - 0x7c0;
            FUN_005e7e70(lVar24);
            FUN_005e7f54(lVar24,lVar24,g_standingOnMoby + 0x10);
            FUN_005e81f0(&g_heroVelocity,lVar24,&g_heroPosition);
            mobyutil::ClampVec3Magnitude
                      ((double)(mobyutil::g_FrameTime * 2.0),(Vec4 *)&g_heroVelocity);
            dVar28 = (double)fastfunc::FastDiffRots
                                       ((double)*(float *)(g_standingOnMoby + 0x48),
                                        (double)g_heroRotation.z);
            if (dVar28 <= (double)(mobyutil::g_FrameTime * 9.424778)) {
              if (dVar28 < (double)(mobyutil::g_FrameTime * -9.424778)) {
                dVar28 = (double)(mobyutil::g_FrameTime * -9.424778);
              }
            }
            else {
              dVar28 = (double)(mobyutil::g_FrameTime * 9.424778);
            }
            dVar28 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar28);
            g_heroRotation.z = (float)dVar28;
          }
          goto LAB_000b703c;
        }
        if ((int)g_heroState < 0x3c) goto LAB_000b703c;
      }
      else {
        if ((int)g_heroState < 0x43) {
          if ((int)g_heroState < 0x40) {
            if (0x3d < (int)g_heroState) {
              if ((int)g_heroState < 0x3f) {
                uVar7 = 0x3ff0000000000000;
                FUN_005e7f98(0x3ff0000000000000,uVar8 - 0x890,&DAT_00969de0);
                dVar28 = (double)FUN_005e81c0(&g_heroGravityDir,uVar8 - 0x890);
                FUN_005e81c0(&g_heroGroundNormal,&DAT_0096a450);
                FUN_005e7f98(uVar8 - 0x870,&g_heroGroundNormal);
                FUN_005e81f0(&DAT_0096a450,&DAT_0096a450,uVar8 - 0x870);
                FUN_005e7f98(uVar7,&DAT_0096a450,&DAT_0096a450);
                if (g_framesNotGrounded == 0) {
                  if (DAT_0096a56e != '\0') {
                    DAT_0096a566 = idol::GetAnimDuration(0xf);
                    FUN_005e7e98(&DAT_0096a430,&DAT_00969de0);
                  }
                  DAT_0096a56e = '\0';
                }
                if (g_framesNotGrounded == 0) {
                  FUN_005e7e98(&DAT_0096a440,&g_heroPosition);
                  g_heroIdealSpeed = DAT_0096a53c + DAT_0096a548;
                  if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                    fVar36 = mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 10.0,
                                            &g_storedNeutralSpeed);
                  }
                  else {
                    fVar36 = mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 10.0,
                                            &g_storedNeutralSpeed);
                  }
                  Hero_ThrustToMotionFwd((double)fVar36);
                }
                else if (DAT_0096a56e == '\0') {
                  Hero_ThrustToMotion(99999.0);
                }
                else {
                  FUN_005e7e98(&g_heroVelocity,&DAT_00969de0);
                  lVar24 = uVar8 - 0x860;
                  FUN_005e81f0(lVar24,&DAT_0096a440,&g_heroPosition);
                  Hero_CancelGravity((float *)lVar24,(float *)lVar24);
                  dVar34 = (double)(mobyutil::g_FrameTime * 0.4);
                  dVar30 = (double)FUN_005e8030(lVar24);
                  if (dVar34 < dVar30) {
                    lVar24 = uVar8 - 0x860;
                    FUN_005e7f98(dVar34,lVar24,lVar24);
                    FUN_005e7f54(&g_heroPosition,&g_heroPosition,lVar24);
                  }
                }
                if (((g_framesNotGrounded != 0) && (DAT_0096a56a == 0)) &&
                   (dVar30 = (double)FUN_005e81c0(&g_heroGravityDir,&DAT_00969de0), dVar30 < 0.0)) {
                  if ((dVar28 < -0.800000011920929) || ((-0.5 > dVar28 && (DAT_0096a56c != '\0'))))
                  {
                    DAT_0096a56e = '\x01';
                    FUN_005e7e98(&g_heroVelocity,&g_heroGravityDir);
                    FUN_005e822c(-(double)DAT_0096a53c,&g_heroVelocity,&g_heroVelocity);
                    dVar30 = (double)(mobyutil::g_FrameTime * 1.5);
                    if (DAT_0096a56c != '\0') {
                      dVar30 = (double)(float)(dVar30 + (double)(mobyutil::g_FrameTime * 3.0));
                    }
                    FUN_005e7f98(-dVar30,uVar8 - 0x850,&g_heroGravityDir);
                    FUN_005e7f54(&g_heroVelocity,&g_heroVelocity,uVar8 - 0x850);
                    FUN_005e7e98(&DAT_00969de0,&g_heroVelocity);
                  }
                  DAT_0096a56c = '\0';
                  dVar30 = (double)FUN_005e81c0(&g_heroGravityDir,&DAT_00969de0);
                  DAT_0096a534 = (float)-dVar30;
                }
                DAT_0096a56a = g_framesNotGrounded;
                if (g_framesNotGrounded == 0) {
                  DAT_00721c74 = 0x3c03126f;
                  DAT_00721c78 = 0x3dcccccd;
                  DAT_00721c30 = DAT_00969e64 * -12.0;
                  if (DAT_00721c30 <= 0.55850536) {
                    if (DAT_00721c30 < -0.55850536) {
                      DAT_00721c30 = -0.55850536;
                    }
                  }
                  else {
                    DAT_00721c30 = 0.55850536;
                  }
                }
                if ((g_framesNotGrounded != 0) && (DAT_0096a56e == '\0')) {
                  DAT_00721c74 = 0x3c75c28f;
                  DAT_00721c78 = 0x3da3d70a;
                  FUN_005e825c(uVar8 - 0x840,&DAT_00969de0,&g_heroGravityMtx);
                  uVar33 = FUN_005e7ebc(uVar8 - 0x840);
                  dVar30 = (double)FUN_005e8338(uVar33,(double)local_838);
                  DAT_00721c34 = (float)-dVar30;
                  if (0.61086524 < DAT_00721c34) {
                    DAT_00721c34 = 0.61086524;
                  }
                  if (DAT_00721c34 < -0.61086524) {
                    DAT_00721c34 = -0.61086524;
                  }
                }
                if (g_framesNotGrounded == 0) {
                  FUN_005e7e98(&DAT_0096a420,&g_heroGroundNormal);
                }
                if (g_framesNotGrounded == 0) {
                  iVar10 = idol::GetAnimDuration(9);
                  iVar10 = pad::PadRingBitsOn(0x40,iVar10,(int *)0x0);
                  if (iVar10 != 0) {
                    if (dVar28 >= -0.800000011920929 && -0.5 <= dVar28) {
                      dVar28 = (double)FUN_005e81c0(&g_heroGravityDir,&DAT_00969de0);
                      DAT_0096a534 = mobyutil::g_FrameTime * 5.0;
                      if (0.0 < -dVar28) {
                        DAT_0096a534 = (float)((double)DAT_0096a534 + -dVar28);
                      }
                      Hero_CancelGravity(&g_heroVelocity,&g_heroVelocity);
                      Hero_AddRelativeZ(DAT_0096a534,&g_heroVelocity,&g_heroVelocity);
                      g_framesNotGrounded = 1;
                    }
                    else {
                      DAT_0096a56c = '\x01';
                    }
                  }
                }
                Hero_GetPadFly(DAT_0071f40c * 0.1,&local_880,(float *)&DAT_0096a5b0);
                if (DAT_0096a56e == '\0') {
                  iVar10 = fastfunc::FastDecTimerS16(&DAT_0096a566);
                  if (iVar10 == 0) {
                    FUN_005e7e98(&DAT_00969e50,&DAT_0096a430);
                    if (g_heroGravityMode == '\0') {
                      dVar28 = (double)mobyutil::AccelDeltAng
                                                 ((double)g_heroIdealRotZ,
                                                  (double)(DAT_0071f40c * 0.04),
                                                  (double)(DAT_0071f40c * 0.3),
                                                  (double)(mobyutil::g_FrameTime * 6.981317),
                                                  0x969d78,0,&DAT_00969e64);
                      DAT_00969e68 = (float)dVar28;
                    }
                    else {
                      Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.3,
                                  mobyutil::g_FrameTime * 6.981317);
                    }
                  }
                  else {
                    dVar28 = 0.20000000298023224;
                    if (g_heroPadMagnitude <= 0.2) {
                      DAT_00969e64 = 0.0;
                    }
                    else {
                      dVar30 = (double)(mobyutil::g_FrameTime * 1.3962634 * g_heroPadMagnitude);
                      uVar33 = FUN_005e8338(-(double)local_87c,-(double)local_880);
                      g_heroIdealRotZ = (float)extraout_f1_03;
                      Hero_GetIdealThrustFromPad(uVar7,uVar33,0);
                      fVar36 = (float)((double)DAT_0071f40c * dVar28);
                      fVar2 = (float)((double)DAT_0071f40c * 0.004000000189989805);
                      if (g_heroGravityMode == '\0') {
                        dVar28 = (double)mobyutil::AccelDeltAng
                                                   ((double)g_heroIdealRotZ,(double)fVar2,
                                                    (double)fVar36,dVar30,0x969d78);
                        DAT_00969e68 = (float)dVar28;
                      }
                      else {
                        Hero_Turn3D(fVar2,fVar36,(float)dVar30);
                      }
                    }
                  }
                }
                else {
                  Hero_RotateByEuler(0,0,(double)(mobyutil::g_FrameTime * 6.2831855 * local_880));
                }
                sVar16 = g_framesNotGrounded;
                if (g_framesNotGrounded == 0) {
                  dVar30 = (double)(mobyutil::g_FrameTime * 20.0);
                  dVar28 = (double)FUN_005e81c0(&DAT_00969de0,&g_heroGravityDir);
                  dVar28 = -dVar28;
                  if ((double)(mobyutil::g_FrameTime * 0.5) < ABS(dVar28)) {
                    if (dVar28 < 0.0) {
                      DAT_0096a53c = DAT_0096a53c + (float)(dVar28 * 0.0005000000237487257);
                    }
                    if (mobyutil::g_FrameTime * 27.0 < DAT_0096a53c) {
                      DAT_0096a53c = mobyutil::g_FrameTime * 27.0;
                    }
                    if (DAT_0096a53c < mobyutil::g_FrameTime * 11.0) {
                      DAT_0096a53c = mobyutil::g_FrameTime * 11.0;
                    }
                  }
                  fVar36 = (float)(dVar30 - (double)DAT_0096a53c);
                  if (DAT_0071f418 * 9.0 < fVar36) {
                    fVar36 = DAT_0071f418 * 9.0;
                  }
                  if (fVar36 < DAT_0071f418 * -0.7) {
                    fVar36 = DAT_0071f418 * -0.7;
                  }
                  DAT_0096a53c = DAT_0096a53c + fVar36;
                }
                else {
                  sVar17 = idol::GetAnimDuration(8);
                  if (((sVar17 < sVar16) && (DAT_0096a56e != '\0')) &&
                     (0.0 < DAT_00969e40 - DAT_0096a53c)) {
                    DAT_0096a53c = DAT_0096a53c + (DAT_00969e40 - DAT_0096a53c);
                  }
                }
                if (g_framesNotGrounded == 0) {
                  Hero_AddGravity(DAT_0071f418 * 20.0,&g_heroVelocity,&g_heroVelocity);
                }
                else {
                  Hero_CancelGravity(&g_heroVelocity,&g_heroVelocity);
                  DAT_0096a534 = DAT_0096a534 - DAT_0096a540;
                  Hero_AddGravity(-DAT_0096a534,&g_heroVelocity,&g_heroVelocity);
                }
              }
              else {
                Hero_GetIdealThrustForWalk();
                dVar30 = 1.0;
                FUN_005e825c(uVar8 - 0x640,&DAT_00969e50,&g_heroGravityMtx);
                dVar28 = (double)FUN_005e8338((double)local_640,(double)local_63c);
                if (ABS(dVar28) <= 1.2217304706573486) {
                  dVar28 = (double)((float)(1.2217304706573486 - ABS(dVar28)) * 2.0);
                  if (dVar30 < dVar28) {
                    dVar28 = dVar30;
                  }
                  g_heroIdealSpeed = (float)((double)g_heroIdealSpeed * dVar28);
                }
                else {
                  g_heroIdealSpeed = 0.0;
                }
                fVar36 = DAT_0071f40c * 0.025 * (g_heroPadMagnitude + 0.35);
                fVar2 = mobyutil::g_FrameTime * 5.2359877 * (g_heroPadMagnitude + 0.35);
                if (g_heroGravityMode == '\0') {
                  dVar28 = (double)mobyutil::AccelDeltAng
                                             ((double)g_heroIdealRotZ,(double)fVar36,
                                              (double)(DAT_0071f40c * 0.3),(double)fVar2,0x969d78,
                                              &DAT_00720000,&DAT_00969e64);
                  DAT_00969e68 = (float)dVar28;
                }
                else {
                  Hero_Turn3D(fVar36,DAT_0071f40c * 0.3,fVar2);
                }
                if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                  mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 8.5,&g_storedNeutralSpeed);
                }
                else {
                  mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 7.5,&g_storedNeutralSpeed);
                }
                Hero_ThrustToMotion(99999.0);
                if (g_standingOnMoby != 0) {
                  FUN_005e7e98(&g_heroPosition,&g_heroGroundPoint);
                  g_framesNotGrounded = 0;
                  g_heroGroundDist = 0.0;
                }
                if (g_framesNotGrounded == 0) {
                  Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
                }
                else {
                  Hero_AddGravity(DAT_0071f418 * 24.0,&g_heroVelocity,(float *)&DAT_00969df0);
                }
              }
              goto LAB_000b703c;
            }
            goto LAB_000ab3bc;
          }
          if ((int)g_heroState < 0x41) {
            FUN_005e7e70(&g_heroVelocity);
            goto LAB_000b703c;
          }
          if ((int)g_heroState < 0x42) goto LAB_000b703c;
          goto LAB_000b2028;
        }
        if (g_heroState != CLANK_JUMP) {
          if (g_heroState != CLANK_DYING) {
            if (g_heroState == CLANK_DAMAGE) {
              dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
              if (g_framesNotGrounded == 0) {
                fVar36 = DAT_0071f408 * -0.07999998;
              }
              else {
                fVar36 = DAT_0071f408 * -0.00999999;
              }
              FUN_005e7ed8((double)(float)(dVar28 * (double)(fVar36 + 1.0)),&g_heroVelocity,
                           &g_heroVelocity);
              DAT_00969dc8 = 0.0;
              if (g_framesNotGrounded == 0) {
                Hero_AddGravity(0.004,&g_heroVelocity,&g_heroVelocity);
              }
              else {
                Hero_AddGravity(DAT_0071f418 * 24.0,&g_heroVelocity,(float *)&DAT_00969df0);
              }
              goto LAB_000b703c;
            }
            if (g_heroState == CLANK_FALLING) {
              Hero_GetIdealThrustFromPad((double)(mobyutil::g_FrameTime * 3.0),0x45,0);
              if (DAT_00969ea4 == 0) {
                Hero_JumpTurnTrans();
              }
              Hero_AddGravity(DAT_0071f418 * 12.0,&g_heroVelocity,&g_heroVelocity);
              if (DAT_00969dc8 < mobyutil::g_FrameTime * -10.0) {
                DAT_00969dc8 = mobyutil::g_FrameTime * -10.0;
              }
              goto LAB_000b703c;
            }
            if (g_heroState == CLANK_WALKING) goto LAB_000b57b0;
            if (g_heroState != CLANK_STANDING) goto LAB_000b703c;
          }
          dVar28 = 0.0;
          uVar7 = Hero_EdgeStop(0x400d9999a0000000,0);
          Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar7,0);
          g_heroIdealSpeed = (float)dVar28;
          if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
            fVar36 = mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 12.6,&g_storedNeutralSpeed);
          }
          else {
            fVar36 = mobyutil::Delt(g_heroIdealSpeed,(float)dVar28,&g_storedNeutralSpeed);
          }
          FUN_005e7e70((double)fVar36,&g_heroVelocity);
          Hero_KneeBumpMotion(0);
          if (g_framesNotGrounded == 0) {
            Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
          }
          else {
            Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
            Hero_WallSloopMotion();
          }
          goto LAB_000b703c;
        }
      }
      goto LAB_000b4328;
    }
    if ((int)g_heroState < 0x17) {
      if (6 < (int)g_heroState) {
        if (0x12 < (int)g_heroState) {
          if ((int)g_heroState < 0x15) {
            if ((int)g_heroState < 0x14) {
              if (DAT_0096afc2 == '\0') {
                if ((DAT_0096a77c != 0) ||
                   (local_c8 = (ulonglong)*(int *)(&DAT_0072319c + DAT_0096a740 * 0x2c),
                   g_heroAnimFrame < (float)(longlong)local_c8)) {
                  DAT_0096ad88 = 2;
                }
                dVar28 = 0.0;
                g_heroIdealSpeed = 0.0;
                iVar15 = DAT_0096a740 * 0x2c;
                if ((DAT_0096a734 != 0) && (iVar12 = idol::GetAnimDuration(4), iVar10 < iVar12)) {
                  dVar34 = (double)FUN_005e8588(DAT_0096a734 + 0x10,&g_heroPosition);
                  dVar30 = (double)(float)(dVar34 - 0.5);
                  if ((double)(float)(dVar34 - 0.5) < dVar28) {
                    dVar30 = dVar28;
                  }
                  if (*(int *)(&DAT_00723180 + iVar15) == 0) {
                    dVar34 = 0.75;
                    fVar36 = 0.8;
                    fVar2 = 4.0;
                  }
                  else if (*(int *)(&DAT_00723180 + iVar15) == 1) {
                    dVar34 = 0.6000000238418579;
                    fVar36 = 1.7;
                    fVar2 = 4.0;
                  }
                  else {
                    dVar34 = 1.2999999523162842;
                    fVar36 = 1.7;
                    fVar2 = 1.9;
                  }
                  if (ABS((float)(dVar30 - dVar34)) < fVar36 + 3.0) {
                    fVar36 = (float)(dVar30 - dVar34) * 1.1111112;
                    if (fVar2 < fVar36) {
                      fVar36 = fVar2;
                    }
                    if (1.0 < fVar36) {
                      DAT_0096a74c = fVar36;
                    }
                  }
                }
                iVar10 = *(int *)(&DAT_00723180 + iVar15);
                if (iVar10 < 1) {
                  if ((-1 < iVar10) && (g_heroAnimFrame < 18.0)) {
                    g_heroIdealSpeed = mobyutil::g_FrameTime * 4.4 * DAT_0096a74c;
                  }
                }
                else if (iVar10 < 2) {
                  if ((DAT_0096a77c != 0) || (g_heroAnimFrame < 9.0)) {
                    if (g_heroAnimFrame <= 8.0) {
                      if (g_heroAnimFrame <= 7.0) {
                        g_heroIdealSpeed = mobyutil::g_FrameTime * 5.7 * DAT_0096a74c;
                      }
                      else {
                        g_heroIdealSpeed = mobyutil::g_FrameTime * 4.5 * DAT_0096a74c;
                      }
                    }
                    else {
                      g_heroIdealSpeed = mobyutil::g_FrameTime * 3.0 * DAT_0096a74c;
                    }
                  }
                }
                else if ((iVar10 < 3) && ((DAT_0096a77c != 0 || (g_heroAnimFrame < 12.0)))) {
                  g_heroIdealSpeed = mobyutil::g_FrameTime * 3.7 * DAT_0096a74c;
                }
                dVar34 = 1.0;
                dVar30 = 0.20000000298023224;
                mobyutil::Delt(1.0,0.2,&g_heroAnimSpeed);
                if ((DAT_0096a738 == 0) && (DAT_0096a734 == 0)) {
                  bVar19 = true;
                  if (((*(int *)(&DAT_00723180 + iVar15) == 1) && (DAT_0096a77c == 0)) &&
                     (7.0 < g_heroAnimFrame)) {
                    bVar19 = false;
                  }
                  if (bVar19) {
                    Hero_SetAttackRot(0x4014000000000000,0x3fe921fb60000000,0x3fe921fb60000000);
                  }
                }
                else {
                  if ((*(int *)(&DAT_00723180 + iVar15) == 1) &&
                     (dVar32 = (double)fastfunc::FastDiffRots
                                                 ((double)DAT_0096a73c,(double)g_heroRotation.z),
                     dVar28 < dVar32)) {
                    dVar32 = (double)fastfunc::FastSubRots(DAT_0096a73c,g_heroRotation.z);
                    g_heroAnimSpeed = (float)(dVar34 / (double)(float)(dVar32 + dVar34));
                  }
                  g_heroIdealRotZ = DAT_0096a73c;
                  fVar36 = (float)((double)DAT_0071f40c * dVar30);
                  fVar2 = (float)((double)DAT_0071f40c * 0.05000000074505806);
                  if (g_heroGravityMode == '\0') {
                    dVar30 = (double)mobyutil::AccelDeltAng
                                               ((double)DAT_0096a73c,(double)fVar2,(double)fVar36,
                                                (double)(mobyutil::g_FrameTime * 15.009831),0x969d78
                                                ,&DAT_00720000,&DAT_00969e64);
                    DAT_00969e68 = (float)dVar30;
                  }
                  else {
                    Hero_Turn3D(fVar2,fVar36,mobyutil::g_FrameTime * 15.009831);
                  }
                }
                if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                  mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 28.0,&g_storedNeutralSpeed);
                }
                else {
                  mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 37.0,&g_storedNeutralSpeed);
                }
                if (DAT_0096a738 == 0) {
                  Hero_ThrustToMotion(99999.0);
                }
                else {
                  Hero_ThrustToMotion(DAT_0096a73c);
                }
                if (g_framesNotGrounded == 0) {
                  Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
                }
                else {
                  Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
                }
                Hero_EdgeStop(0x400d9999a0000000,dVar28);
              }
              else {
                Hero_AttackMotion();
              }
            }
            else {
              if ((DAT_0096a77c != 0) ||
                 (local_c8 = (ulonglong)*(int *)(&DAT_00723194 + DAT_0096a740 * 0x2c),
                 g_heroAnimFrame < (float)(longlong)local_c8)) {
                DAT_0096ad88 = 2;
              }
              dVar28 = 0.0;
              g_heroIdealSpeed = 0.0;
              if (DAT_0096afc2 == '\0') {
                if (DAT_0096a734 == 0) {
                  if (0.0 <= g_storedNeutralSpeed) {
                    mobyutil::Delt(0.0,DAT_0071f418 * 15.0,&g_storedNeutralSpeed);
                  }
                  else {
                    mobyutil::Delt(0.0,DAT_0071f418 * 15.0,&g_storedNeutralSpeed);
                  }
                  Hero_ScaleRelativeXY(g_storedNeutralSpeed,&g_heroVelocity,&g_heroVelocity);
                }
                else {
                  dVar30 = (double)FUN_005e8588(&g_heroPosition,DAT_0096a734 + 0x10);
                  if ((2.0 < dVar30) && (dVar30 < 5.0)) {
                    g_heroIdealSpeed = mobyutil::g_FrameTime * 4.5;
                  }
                  if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                    mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 25.0,&g_storedNeutralSpeed);
                  }
                  else {
                    mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 25.0,&g_storedNeutralSpeed);
                  }
                  dVar30 = (double)mathfunc::cosf(g_heroRotation.z);
                  g_heroVelocity = (float)(dVar30 * (double)g_storedNeutralSpeed);
                  dVar30 = (double)FUN_005e8128((double)g_heroRotation.z);
                  DAT_00969dc4 = (float)(dVar30 * (double)g_storedNeutralSpeed);
                }
              }
              else if (DAT_0096a734 == 0) {
                if (0.0 <= g_storedNeutralSpeed) {
                  mobyutil::Delt(0.0,DAT_0071f418 * 2.0,&g_storedNeutralSpeed);
                }
                else {
                  mobyutil::Delt(0.0,DAT_0071f418 * 2.0,&g_storedNeutralSpeed);
                }
                Hero_ScaleRelativeXY(g_storedNeutralSpeed,&g_heroVelocity,&g_heroVelocity);
              }
              else {
                dVar30 = (double)FUN_005e8588(&g_heroPosition,DAT_0096a734 + 0x10);
                if ((2.0 < dVar30) && (dVar30 < 5.0)) {
                  g_heroIdealSpeed = mobyutil::g_FrameTime * 4.5;
                }
                if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                  mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 4.0,&g_storedNeutralSpeed);
                }
                else {
                  mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 4.0,&g_storedNeutralSpeed);
                }
                dVar30 = (double)mathfunc::cosf(g_heroRotation.z);
                g_heroVelocity = (float)(dVar30 * (double)g_storedNeutralSpeed);
                dVar30 = (double)FUN_005e8128((double)g_heroRotation.z);
                DAT_00969dc4 = (float)(dVar30 * (double)g_storedNeutralSpeed);
              }
              if ((DAT_0096a738 == 0) && (DAT_0096a734 == 0)) {
                if (g_heroAnimFrame < 25.0) {
                  Hero_SetAttackRot(0x4020000000000000,0x3ff0c15240000000,0x3ff0c15240000000);
                }
              }
              else {
                g_heroIdealRotZ = DAT_0096a73c;
                if (g_heroGravityMode == '\0') {
                  dVar30 = (double)mobyutil::AccelDeltAng
                                             ((double)DAT_0096a73c,(double)(DAT_0071f40c * 0.05),
                                              (double)(DAT_0071f40c * 0.2),
                                              (double)(mobyutil::g_FrameTime * 15.009831),0x969d78,
                                              &DAT_00720000,&DAT_00969e64);
                  DAT_00969e68 = (float)dVar30;
                }
                else {
                  Hero_Turn3D(DAT_0071f40c * 0.05,DAT_0071f40c * 0.2,
                              mobyutil::g_FrameTime * 15.009831);
                }
              }
              iVar10 = idol::GetAnimDuration(9);
              dVar30 = (double)(mobyutil::g_FrameTime * 7.7);
              if (g_heroGroundDist <= 2.25) {
                if (1.8 < g_heroGroundDist) {
                  dVar30 = (double)(float)(dVar30 * 0.699999988079071);
                }
              }
              else {
                dVar30 = (double)(float)(dVar30 * 0.5);
              }
              dVar34 = (double)(DAT_0071f418 * 150.0);
              iVar15 = idol::GetAnimDuration(0xe);
              if ((((DAT_0096a77c == 0) && (23.5 < g_heroAnimFrame)) &&
                  ((double)DAT_00969de8 < dVar28)) && (g_framesNotGrounded != 0)) {
                lVar24 = uVar8 - 0x680;
                FUN_005e7e98(lVar24,&g_heroPosition);
                Hero_AddGravity(0.5,(float *)lVar24,(float *)lVar24);
                dVar32 = (double)mathfunc::cosf(g_heroRotation.z);
                dVar29 = 2.0;
                local_670 = (float)(dVar32 * 2.0);
                dVar32 = (double)FUN_005e8128((double)g_heroRotation.z);
                local_66c = (float)(dVar32 * dVar29);
                local_668 = (float)dVar28;
                mobyutil::SetCollDamIn(dVar29,uVar8 - 0x290,g_heroMobyPtr,0x10000);
                local_278 = 0;
                local_277 = 1;
                local_276 = 0x47;
                local_284 = 0x45afdf66;
                collproc::CollMobySphere
                          (0x3fd99999a0000000,lVar24,1,0x10,g_heroMobyPtr,uVar8 - 0x290);
              }
              if (g_heroStateTimer < iVar10) {
                local_ec = Hero_RelativeZComponent(&g_heroVelocity);
                mobyutil::Delt((float)dVar30,(float)dVar34,&local_ec);
                Hero_SetRelativeZ(local_ec,&g_heroVelocity,&g_heroVelocity);
              }
              else if (iVar15 < g_heroStateTimer) {
                Hero_AddGravity(DAT_0071f418 * 130.0,&g_heroVelocity,&g_heroVelocity);
                fVar36 = Hero_RelativeZComponent(&g_heroVelocity);
                if ((double)fVar36 < dVar28) {
                  DAT_0096a750 = 0x3f800000;
                }
                fVar36 = Hero_RelativeZComponent(&g_heroVelocity);
                if (fVar36 < mobyutil::g_FrameTime * -37.0) {
                  Hero_SetRelativeZ(mobyutil::g_FrameTime * -37.0,&g_heroVelocity,&g_heroVelocity);
                }
              }
            }
          }
          else if ((int)g_heroState < 0x16) {
            dVar28 = 0.0;
            g_heroIdealSpeed = 0.0;
            if ((DAT_0096a77c != 0) ||
               (local_c8 = (ulonglong)*(int *)(&DAT_00723194 + DAT_0096a740 * 0x2c),
               g_heroAnimFrame < (float)(longlong)local_c8)) {
              DAT_0096ad88 = 2;
            }
            bVar19 = false;
            if ((DAT_0096bd70 == 1) && (iVar10 = idol::GetAnimDuration(0x14), iVar10 < iVar15)) {
              bVar19 = true;
            }
            if (!bVar19) {
              if ((DAT_0096a738 == 0) && (DAT_0096a734 == 0)) {
                bVar19 = true;
                if ((DAT_0096a77c == 0) && (6.0 < g_heroAnimFrame)) {
                  bVar19 = false;
                }
                if ((bVar19) && (g_heroGravityMode == '\0')) {
                  Hero_SetAttackRot(0x402c000000000000,0x3fe0c15240000000,0x3fe921fb60000000);
                }
              }
              else {
                if (g_onMagnerail == 0) {
                  iVar10 = fastfunc::FastDiffRots((double)DAT_0096a73c,(double)g_heroRotation.z);
                  dVar30 = extraout_f1_04;
                  fVar36 = mobyutil::SubRots(DAT_0096a73c,g_heroRotation.z,iVar10);
                  bVar19 = fVar36 <= 4.363323;
                  if (dVar28 < dVar30) {
                    g_heroAnimSpeed = 1.0 / (fVar36 + 1.0);
                  }
                }
                else {
                  bVar19 = false;
                }
                g_heroIdealRotZ = DAT_0096a73c;
                if (bVar19) {
                  if (g_heroGravityMode == '\0') {
                    dVar28 = (double)mobyutil::AccelDeltAng
                                               ((double)DAT_0096a73c,(double)(DAT_0071f40c * 0.05),
                                                (double)(DAT_0071f40c * 0.2),
                                                (double)(mobyutil::g_FrameTime * 15.009831),0x969d78
                                                ,&DAT_00720000,&DAT_00969e64);
                    DAT_00969e68 = (float)dVar28;
                  }
                  else {
                    Hero_Turn3D(DAT_0071f40c * 0.05,DAT_0071f40c * 0.2,
                                mobyutil::g_FrameTime * 15.009831);
                  }
                }
                else if (g_heroGravityMode == '\0') {
                  dVar28 = (double)mobyutil::AccelDeltAng
                                             ((double)DAT_0096a73c,(double)(DAT_0071f40c * 0.05),
                                              (double)(DAT_0071f40c * 0.2),
                                              (double)(mobyutil::g_FrameTime * 15.009831),0x969d78,
                                              &DAT_00720000,&DAT_00969e64);
                  DAT_00969e68 = (float)dVar28;
                }
                else {
                  Hero_Turn3D(DAT_0071f40c * 0.05,DAT_0071f40c * 0.2,
                              mobyutil::g_FrameTime * 15.009831);
                }
              }
            }
            if (DAT_0096a77c == 0) {
              bVar19 = false;
              if ((33.0 < g_heroAnimFrame) && (g_heroAnimFrame - 33.0 <= DAT_0096a78c)) {
                bVar19 = true;
              }
              if (bVar19) {
                if ((DAT_0096afc2 != '\0') && (DAT_00969e40 < mobyutil::g_FrameTime * 2.0)) {
                  dVar32 = (double)g_heroVelocity;
                  dVar28 = (double)mathfunc::cosf(g_heroRotation.z);
                  dVar34 = 1.2999999523162842;
                  dVar30 = (double)DAT_00969dc4;
                  g_heroVelocity =
                       (float)(dVar32 + (double)(float)((double)(mobyutil::g_FrameTime * 1.3) *
                                                       dVar28));
                  dVar28 = (double)FUN_005e8128((double)g_heroRotation.z);
                  DAT_00969dc4 = (float)(dVar30 + (double)(float)((double)(float)((double)mobyutil::
                                                                                                                                                                                    
                                                  g_FrameTime * dVar34) * dVar28));
                  FUN_005e7e98(&DAT_00969e10,&g_heroVelocity);
                }
                Hero_ThrowWrench();
              }
            }
            if (DAT_0096afc2 == '\0') {
              if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 28.0,&g_storedNeutralSpeed);
              }
              else {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 37.0,&g_storedNeutralSpeed);
              }
              Hero_ThrustToMotion(99999.0);
              if (g_framesNotGrounded == 0) {
                Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
              }
              else {
                Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
              }
            }
            else {
              bVar19 = false;
              if ((84.0 < g_heroAnimFrame) && (g_heroAnimFrame - 84.0 <= DAT_0096a78c)) {
                bVar19 = true;
              }
              if (bVar19) {
                dVar28 = (double)fastfunc::FastWrapRot(g_heroRotation.z,3.1415927);
                fVar36 = 2.5;
                if ((g_downButtons & (R1|R2)) != 0) {
                  fVar36 = 3.0;
                }
                dVar29 = (double)(mobyutil::g_FrameTime * fVar36);
                dVar32 = (double)g_heroVelocity;
                dVar30 = (double)mathfunc::cosf((float)dVar28);
                dVar34 = (double)DAT_00969dc4;
                g_heroVelocity = (float)(dVar32 + (double)(float)(dVar30 * dVar29));
                dVar28 = (double)FUN_005e8128(dVar28);
                DAT_00969dc4 = (float)(dVar34 + (double)(float)(dVar28 * dVar29));
                FUN_005e7e98(&DAT_00969e10,&g_heroVelocity);
              }
              Hero_AttackMotion();
            }
          }
          else {
            dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
            iVar10 = g_heroStateTimer;
            dVar30 = (double)(DAT_0071f418 * 4.0);
            if ((g_framesNotGrounded == 0) && (iVar15 = idol::GetAnimDuration(10), iVar15 < iVar10))
            {
              dVar30 = (double)(DAT_0071f418 * 10.0);
            }
            dVar34 = (double)(float)(dVar28 - dVar30);
            if ((double)(float)(dVar28 - dVar30) < 0.0) {
              dVar34 = 0.0;
            }
            if (DAT_0096afc7 != '\0') {
              Hero_EdgeStop(0x400d9999a0000000,0);
            }
            FUN_005e84c0(dVar34,&g_heroVelocity,&g_heroVelocity);
            Hero_AddGravity(0.004,&g_heroVelocity,&g_heroVelocity);
          }
          goto LAB_000b703c;
        }
        if (g_heroState == FALLING) {
          iVar10 = Hero_HandGadgetID(3);
          if (iVar10 == 2) {
            if (((DAT_0096bf08 != -1) &&
                (sound::g_SoundChannels[DAT_0096bf08].pMoby == g_heroMobyPtr)) &&
               (sound::g_SoundChannels[DAT_0096bf08].state != '\0')) {
              sound::sound_Kill(DAT_0096bf08);
            }
            DAT_0096bf08 = -1;
            Hero_PlayLoopSound(3,g_heroMobyPtr,2);
          }
          else {
            if (((DAT_0096bf04 != -1) &&
                (sound::g_SoundChannels[DAT_0096bf04].pMoby == g_heroMobyPtr)) &&
               (sound::g_SoundChannels[DAT_0096bf04].state != '\0')) {
              sound::sound_Kill(DAT_0096bf04);
            }
            DAT_0096bf04 = -1;
            Hero_PlayLoopSound(4,g_heroMobyPtr,0x12);
          }
          fVar36 = 3.0;
          if (DAT_0096ae88 == 3) {
            fVar36 = 5.0;
          }
          dVar28 = (double)(mobyutil::g_FrameTime * fVar36);
          Hero_GetIdealThrustFromPad(dVar28,DAT_0096ae88,0);
          if (g_heroGravityMode == '\0') {
            dVar30 = (double)mobyutil::AccelDeltAng
                                       ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.025),
                                        (double)(DAT_0071f40c * 0.3),
                                        (double)(mobyutil::g_FrameTime * 12.566371),0x969d78);
            DAT_00969e68 = (float)dVar30;
          }
          else {
            Hero_Turn3D(DAT_0071f40c * 0.025,DAT_0071f40c * 0.3,mobyutil::g_FrameTime * 12.566371);
          }
          if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
            mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 7.0,&g_storedNeutralSpeed);
          }
          else {
            mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 15.0,&g_storedNeutralSpeed);
          }
          Hero_ThrustToMotion(99999.0);
          Hero_SetBankTwistSway();
          Hero_CancelGravity(&g_heroVelocity,&g_heroVelocity);
          Hero_AddGravity((float)(dVar28 * 0.7200000286102295),&g_heroVelocity,&g_heroVelocity);
          dVar28 = (double)g_heroPosition.z;
          if (dVar28 < (double)DAT_0096a0f0) {
            fVar36 = mobyutil::Delt(g_heroPosition.z,mobyutil::g_FrameTime * 4.0,&DAT_0096a0f0);
            dVar28 = (double)fVar36;
          }
          Hero_CheckLedgeAhead(dVar28);
          goto LAB_000b703c;
        }
        goto LAB_000b4328;
      }
      if (4 < (int)g_heroState) {
        if ((int)g_heroState < 6) goto LAB_000b703c;
LAB_000b3bd8:
        if (g_heroState == DISENGAGE_YELLOW_SWINGSHOT) {
          uVar33 = 0;
          uVar7 = uVar33;
          if (4.0 < g_heroGroundDist) {
            uVar7 = 0x3fdbecde60000000;
          }
          FUN_005e7e98(uVar8 - 0x440,&g_heroRotation);
          dVar34 = 0.019999999552965164;
          dVar30 = 0.30000001192092896;
          dVar28 = 2.6179938316345215;
          mobyutil::AccelDeltAng
                    (uVar7,(double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),
                     (double)(mobyutil::g_FrameTime * 2.6179938),uVar8 - 0x43c);
          mobyutil::AccelDeltAng
                    (uVar33,(double)(float)((double)DAT_0071f40c * dVar34),
                     (double)(float)((double)DAT_0071f40c * dVar30),
                     (double)(float)((double)mobyutil::g_FrameTime * dVar28),uVar8 - 0x440);
          Hero_RotateAroundCG((double)DAT_00969d80,(double)DAT_00969d84,uVar33);
          if (1.0 < g_heroGroundDist) {
            DAT_0096bd68 = 1;
          }
        }
        Hero_GetIdealThrustForWalk();
        if (DAT_00969ea4 == 0) {
          Hero_JumpTurnTrans();
        }
        Hero_SetBankTwistSway();
        Hero_UpdateExternalThrust(0.7,0.0);
        Hero_AddGravity(DAT_0096a620,&g_heroVelocity,&g_heroVelocity);
        fVar36 = Hero_RelativeZComponent(&g_heroVelocity);
        if (fVar36 < mobyutil::g_FrameTime * -50.0) {
          Hero_SetRelativeZ(mobyutil::g_FrameTime * -50.0,&g_heroVelocity,&g_heroVelocity);
        }
        goto LAB_000b703c;
      }
      if ((int)g_heroState < 2) {
        if ((int)g_heroState < 0) goto LAB_000b703c;
      }
      else if ((int)g_heroState < 3) goto LAB_000b1630;
    }
    else {
      if (0x20 < (int)g_heroState) {
        if (g_heroState == UNK_27) goto LAB_000b703c;
        if (g_heroState == UNK_26) {
          fVar36 = mobyutil::Delt(DAT_0096a660,mobyutil::g_FrameTime * 10.0,&DAT_0096a65c);
          FUN_005e7e98((double)fVar36,&g_heroVelocity,&DAT_00969de0);
          FUN_005e822c(0x3fecccccc0000000,&g_heroVelocity,&g_heroVelocity);
          lVar22 = uVar8 - 0x780;
          DAT_00969dc8 = DAT_00969dc8 - DAT_0071f418 * 15.0;
          FUN_005e7e98(lVar22,DAT_0096a644 + 0x10);
          dVar28 = (double)FUN_005e8548(&g_heroPosition,lVar22);
          DAT_0096a650 = (float)dVar28;
          FUN_005e7f54(uVar8 - 0x770,&g_heroPosition,&g_heroVelocity);
          lVar24 = uVar8 - 0x750;
          FUN_005e81f0(lVar24,uVar8 - 0x770,lVar22);
          FUN_005e7f98((double)DAT_0096a65c,lVar24,lVar24);
          FUN_005e7f54(uVar8 - 0x760,lVar22,lVar24);
          FUN_005e81f0(&g_heroVelocity,uVar8 - 0x760,&g_heroPosition);
          goto LAB_000b703c;
        }
        if (g_heroState == PULLING_GREEN_SWINGSHOT) {
          lVar24 = uVar8 - 0x7b0;
          FUN_005e7e98(lVar24,DAT_0096a644 + 0x10);
          dVar28 = (double)FUN_005e8548(&g_heroPosition,lVar24);
          DAT_0096a650 = (float)dVar28;
          iVar10 = idol::GetAnimDuration(0x3c);
          local_c8 = (ulonglong)iVar10;
          DAT_0096a64c = (float)(longlong)local_c8;
          dVar28 = 0.0;
          if (0.0 < DAT_0096a640) {
            DAT_0096a64c = DAT_0096a650 / DAT_00969e40;
          }
          if (DAT_0096bd68 == 0) {
            mobyutil::Delt(mobyutil::g_FrameTime * 27.0,DAT_0071f418 * 80.0,&DAT_0096a640);
            dVar30 = (double)FUN_005e8338((double)(*(float *)(DAT_0096a644 + 0x10) - (pMVar5->pos).x
                                                  ),
                                          (double)(*(float *)(DAT_0096a644 + 0x14) - (pMVar5->pos).y
                                                  ));
            g_heroIdealRotZ = (float)dVar30;
            if (g_heroGravityMode == '\0') {
              param_3 = &DAT_00969e64;
              dVar30 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.03),
                                          (double)(DAT_0071f40c * 0.15),
                                          (double)(mobyutil::g_FrameTime * 7.330383),0x969d78);
              DAT_00969e68 = (float)dVar30;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.03,DAT_0071f40c * 0.15,mobyutil::g_FrameTime * 7.330383);
            }
          }
          else if (DAT_0096bd68 == 1) {
            mobyutil::Delt(0.0,DAT_0071f418 * 42.0,&DAT_0096a640);
          }
          iVar10 = mobyutil::MB_SolveQuad
                             ((double)(DAT_0071f418 * -42.0 * 0.5),(double)DAT_0096a640,
                              -(double)(DAT_0096a650 - 1.9));
          if ((0 < iVar10) && (dVar28 < (double)local_100)) {
            DAT_0096a64c = local_100;
            DAT_0096bd68 = 1;
          }
          dVar30 = (double)DAT_0096a64c;
          iVar10 = idol::GetAnimDuration(0x14);
          local_c8 = (ulonglong)iVar10;
          if (dVar30 < (double)(longlong)local_c8) {
            DAT_0096a654 = 1;
          }
          if (DAT_0096a654 == 0) {
            uVar7 = FUN_005e8588(&g_heroPosition,lVar24);
            dVar30 = (double)FUN_005e8338(uVar7,(double)(local_7a8 - g_heroPosition.z));
            dVar30 = (double)fastfunc::FastWrapRot((float)-dVar30,1.5707964);
            mobyutil::DeltAng((float)dVar30,mobyutil::g_FrameTime * 6.4577184,&g_heroRotation.y,
                              0x720000,(int)param_3,0);
          }
          else {
            mobyutil::DeltAng((float)dVar28,mobyutil::g_FrameTime * 3.8397243,&g_heroRotation.y,
                              0x720000,(int)param_3,0);
          }
          dVar32 = -1.5707963705062866;
          dVar30 = (double)fastfunc::FastWrapRot(g_heroRotation.z,-1.5707964);
          dVar30 = (double)mathfunc::cosf((float)dVar30);
          dVar34 = -0.5699999928474426;
          local_790 = (float)(dVar30 * -0.5699999928474426);
          fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar32);
          dVar30 = (double)FUN_005e8128();
          local_78c = (float)(dVar30 * dVar34);
          lVar24 = uVar8 - 0x790;
          local_788 = (float)dVar28;
          FUN_005e7f54(lVar24,lVar24,&g_heroPosition);
          FUN_005e81f0(uVar8 - 0x7a0,DAT_0096a644 + 0x10,lVar24);
          FUN_005e7f98((double)DAT_0096a640,&g_heroVelocity,uVar8 - 0x7a0);
          dVar28 = (double)DAT_0096a64c;
          iVar10 = idol::GetAnimDuration(0x1e);
          local_c8 = (ulonglong)iVar10;
          if (dVar28 < (double)(longlong)local_c8) {
            iVar10 = idol::GetAnimDuration(0x1e);
            DAT_00969dc8 = DAT_00969dc8 -
                           DAT_0071f418 * 29.0 * ((float)(longlong)iVar10 - DAT_0096a64c);
          }
          goto LAB_000b703c;
        }
        if (g_heroState != THROWING_GREEN_SWINGSHOT) {
          if (g_heroState == THROWING_ITEM) {
            g_heroIdealSpeed = 0.0;
            if (DAT_0096a738 == 0) {
              Hero_SetAttackRot(0x4026000000000000,0x3febecde60000000,0xbff0000000000000);
            }
            else {
              g_heroIdealRotZ = DAT_0096a73c;
              if (g_heroGravityMode == '\0') {
                dVar28 = (double)mobyutil::AccelDeltAng
                                           ((double)DAT_0096a73c,(double)(DAT_0071f40c * 0.04),
                                            (double)(DAT_0071f40c * 0.2),
                                            (double)(mobyutil::g_FrameTime * 15.009831),0x969d78,
                                            &DAT_00720000,&DAT_00969e64);
                DAT_00969e68 = (float)dVar28;
              }
              else {
                Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 15.009831
                           );
              }
            }
            if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
              mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 35.0,&g_storedNeutralSpeed);
            }
            else {
              mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 30.0,&g_storedNeutralSpeed);
            }
            Hero_ThrustToMotion(99999.0);
            if (g_framesNotGrounded == 0) {
              DAT_00969dc8 = DAT_00969dc8 - DAT_0071f418 * 54.0;
            }
            else {
              DAT_00969dc8 = DAT_00969de8 - DAT_0071f418 * 25.0;
              Hero_WallSloopMotion();
            }
            goto LAB_000b703c;
          }
          if (g_heroState == THRUSTER_PACK_BONK_JUMP) {
            dVar28 = 0.0;
            g_heroIdealSpeed = 0.0;
            if (0.0 <= g_storedNeutralSpeed) {
              mobyutil::Delt(0.0,DAT_0071f418 * 30.0,&g_storedNeutralSpeed);
            }
            else {
              mobyutil::Delt(0.0,DAT_0071f418 * 30.0,&g_storedNeutralSpeed);
            }
            Hero_ScaleRelativeXY(g_storedNeutralSpeed,&g_heroVelocity,&g_heroVelocity);
            iVar10 = idol::GetAnimDuration(0xc);
            dVar30 = (double)(DAT_0071f418 * 70.0);
            dVar34 = (double)(mobyutil::g_FrameTime * 5.7);
            iVar15 = idol::GetAnimDuration(0x21);
            if (g_heroStateTimer < iVar10) {
              local_f0 = Hero_RelativeZComponent(&g_heroVelocity);
              mobyutil::Delt((float)dVar34,(float)dVar30,&local_f0);
              Hero_SetRelativeZ(local_f0,&g_heroVelocity,&g_heroVelocity);
            }
            else if (iVar15 < g_heroStateTimer) {
              Hero_AddGravity(DAT_0096a190,&g_heroVelocity,&g_heroVelocity);
              fVar36 = Hero_RelativeZComponent(&g_heroVelocity);
              if ((double)fVar36 < dVar28) {
                DAT_0096a198 = 1.0;
              }
            }
            if (((double)DAT_0096a198 != dVar28) && (g_framesNotGrounded != 0)) {
              FUN_005e7e98(uVar8 - 0x6a0,&g_heroPosition);
              local_698 = local_698 - 0.5;
              dVar30 = (double)mathfunc::cosf(g_heroRotation.z);
              local_690 = (float)dVar30;
              dVar30 = (double)FUN_005e8128((double)g_heroRotation.z);
              local_68c = (float)dVar30;
              local_688 = (float)dVar28;
              mobyutil::SetCollDamIn(0x3ff0000000000000,uVar8 - 0x2c0,g_heroMobyPtr,0x30000);
              collproc::CollMobySphere(0x3fe99999a0000000,uVar8 - 0x6a0);
            }
            if (((double)DAT_0096a198 != dVar28) && (g_framesNotGrounded == 0)) {
              if (DAT_0096a1a4 == 0) {
                GameCamera.offset0.amp = 0.2;
                GameCamera.offset0.total = idol::GetAnimDuration(0x28);
              }
              DAT_0096a1a4 = DAT_0096a1a4 + 1;
            }
            goto LAB_000b703c;
          }
          if (g_heroState != UNK_BONK) goto LAB_000b703c;
          goto LAB_000b0c58;
        }
LAB_000aeb2c:
        dVar28 = 0.0;
        Hero_EdgeStop(0x400d9999a0000000,0);
        g_heroIdealSpeed = (float)dVar28;
        dVar28 = 12.600000381469727;
        if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
          fVar36 = mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 12.6,&g_storedNeutralSpeed);
        }
        else {
          fVar36 = mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 12.6,&g_storedNeutralSpeed);
        }
        FUN_005e7e70((double)fVar36,&g_heroVelocity);
        Hero_ApplyTaper((float)((double)DAT_0071f418 * dVar28));
        if (g_framesNotGrounded == 0) {
          Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
        }
        else {
          Hero_AddGravity(DAT_0071f418 * 24.0,&g_heroVelocity,(float *)&DAT_00969df0);
          Hero_WallSloopMotion();
        }
        if (DAT_0096a644 != 0) {
          dVar28 = (double)FUN_005e8338((double)(*(float *)(DAT_0096a644 + 0x10) - (pMVar5->pos).x),
                                        (double)(*(float *)(DAT_0096a644 + 0x14) - (pMVar5->pos).y))
          ;
          g_heroIdealRotZ = (float)dVar28;
          if (g_heroGravityMode == '\0') {
            dVar28 = (double)mobyutil::AccelDeltAng
                                       ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.02),
                                        (double)(DAT_0071f40c * 0.15),
                                        (double)(mobyutil::g_FrameTime * 6.2831855),0x969d78,
                                        &DAT_00720000,&DAT_00969e64);
            DAT_00969e68 = (float)dVar28;
          }
          else {
            Hero_Turn3D(DAT_0071f40c * 0.02,DAT_0071f40c * 0.15,mobyutil::g_FrameTime * 6.2831855);
          }
        }
        goto LAB_000b703c;
      }
      if ((int)g_heroState < 0x1c) {
        if (0x17 < (int)g_heroState) {
          if ((int)g_heroState < 0x1a) {
            dVar28 = (double)fastfunc::FastWrapRot(DAT_0096a1c4,3.1415927);
            g_heroIdealRotZ = (float)dVar28;
            if (g_heroGravityMode == '\0') {
              param_3 = &DAT_00969e64;
              dVar28 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.04),
                                          (double)(DAT_0071f40c * 0.2),
                                          (double)(mobyutil::g_FrameTime * 6.2831855),0x969d78);
              DAT_00969e68 = (float)dVar28;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 6.2831855);
            }
            fVar36 = mobyutil::DeltAng(0.0,mobyutil::g_FrameTime * 4.712389,&g_heroRotation.y,
                                       (int)param_2,(int)param_3,0);
            FUN_005e81f0((double)fVar36,&g_heroVelocity,&DAT_0096a1b0,&g_heroPosition);
            mobyutil::ClampVec3Magnitude
                      ((double)(mobyutil::g_FrameTime * 4.0),(Vec4 *)&g_heroVelocity);
            mobyutil::Delt(g_heroPosition.z,mobyutil::g_FrameTime * 3.0,(float *)&DAT_0096a1d0);
          }
          else {
            dVar28 = 0.0;
            lVar24 = uVar8 - 0x480;
            g_heroVelocity = 0.0;
            DAT_00969dc4 = 0.0;
            DAT_00969dc8 = 0.0;
            FUN_005e7e98(lVar24,&g_heroPosition);
            if (g_heroState == EDGE_HANG_MOVE_LEFT) {
              dVar32 = 1.5707963705062866;
              dVar30 = (double)fastfunc::FastWrapRot(g_heroRotation.z,1.5707964);
              dVar30 = (double)mathfunc::cosf((float)dVar30);
              dVar34 = 0.30000001192092896;
              local_460 = (float)(dVar30 * 0.30000001192092896);
              fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar32);
              dVar30 = (double)FUN_005e8128();
              dVar30 = dVar30 * dVar34;
            }
            else {
              dVar32 = -1.5707963705062866;
              dVar30 = (double)fastfunc::FastWrapRot(g_heroRotation.z,-1.5707964);
              dVar30 = (double)mathfunc::cosf((float)dVar30);
              dVar34 = 0.30000001192092896;
              local_460 = (float)(dVar30 * 0.30000001192092896);
              fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar32);
              dVar30 = (double)FUN_005e8128();
              dVar30 = dVar30 * dVar34;
            }
            local_458 = (float)dVar28;
            local_45c = (float)dVar30;
            FUN_005e7f54(uVar8 - 0x470,lVar24,uVar8 - 0x460);
            Hero_CheckLedgeGrab();
            if (DAT_0096a1c8 != 0) {
              FUN_005e7e98(uVar8 - 0x4a0,&DAT_0096a1b0);
              dVar30 = 3.1415927410125732;
              dVar28 = (double)fastfunc::FastWrapRot(DAT_0096a1c4,3.1415927);
              FUN_005e7e98(&g_heroPosition,uVar8 - 0x470);
              Hero_CheckLedgeGrab();
              FUN_005e7e98(&g_heroPosition,lVar24);
              if (DAT_0096a1c8 != 0) {
                FUN_005e7e98(uVar8 - 0x490,&DAT_0096a1b0);
                dVar30 = (double)fastfunc::FastWrapRot(DAT_0096a1c4,(float)dVar30);
                dVar34 = (double)fastfunc::FastSubRots((float)dVar28,(float)dVar30);
                if (dVar34 <= 0.5235987901687622) {
                  dVar30 = (double)fastfunc::FastDiffRots(dVar28,dVar30);
                  dVar34 = 0.5;
                  dVar28 = (double)fastfunc::FastWrapRot((float)(dVar30 * 0.5),(float)dVar28);
                  lVar24 = uVar8 - 0x450;
                  FUN_005e7f54(lVar24,uVar8 - 0x4a0,uVar8 - 0x490);
                  FUN_005e822c(dVar34,lVar24,lVar24);
                  g_heroIdealRotZ = (float)dVar28;
                  if (g_heroGravityMode == '\0') {
                    dVar28 = (double)mobyutil::AccelDeltAng
                                               ((double)g_heroIdealRotZ,
                                                (double)(DAT_0071f40c * 0.04),
                                                (double)(DAT_0071f40c * 0.2),
                                                (double)(mobyutil::g_FrameTime * 6.2831855),0x969d78
                                                ,&DAT_00720000,&DAT_00969e64);
                    DAT_00969e68 = (float)dVar28;
                  }
                  else {
                    Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.2,
                                mobyutil::g_FrameTime * 6.2831855);
                  }
                  local_d0 = DAT_00969e44;
                  fVar36 = mobyutil::Delt(g_heroIdealSpeed * mobyutil::g_FrameTime,
                                          DAT_0071f418 * 5.0,&local_d0);
                  FUN_005e81f0((double)fVar36,&g_heroVelocity,uVar8 - 0x450,&g_heroPosition);
                  lVar24 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
                  FUN_005e84c0((double)(float)((double)*(float *)(&DAT_00737994 + (int)(lVar24 << 2)
                                                                 ) * dVar34),&g_heroVelocity,
                               &g_heroVelocity);
                }
              }
            }
          }
          goto LAB_000b703c;
        }
      }
      else {
        if ((int)g_heroState < 0x1d) goto LAB_000b4328;
        if (0x1f < (int)g_heroState) {
          if ((DAT_0096a738 == 0) && (DAT_0096a734 == 0)) {
            iVar15 = idol::GetAnimDuration(4);
            if (iVar10 < iVar15) {
              Hero_SetAttackRot(0x4026000000000000,0x3febecde60000000,0xbff0000000000000);
            }
          }
          else {
            g_heroIdealRotZ = DAT_0096a73c;
            if (g_heroGravityMode == '\0') {
              dVar28 = (double)mobyutil::AccelDeltAng
                                         ((double)DAT_0096a73c,(double)(DAT_0071f40c * 0.05),
                                          (double)(DAT_0071f40c * 0.2),
                                          (double)(mobyutil::g_FrameTime * 15.009831),0x969d78,
                                          &DAT_00720000,&DAT_00969e64);
              DAT_00969e68 = (float)dVar28;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.05,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 15.009831);
            }
          }
          iVar15 = idol::GetAnimDuration(10);
          dVar28 = 0.0;
          g_heroIdealSpeed = 0.0;
          iVar12 = idol::GetAnimDuration(8);
          iVar10 = g_heroStateTimer;
          iVar12 = iVar15 + iVar12;
          if ((iVar15 < g_heroStateTimer) && (g_heroStateTimer < iVar12)) {
            g_heroIdealSpeed = mobyutil::g_FrameTime * 18.0;
          }
          iVar13 = idol::GetAnimDuration(8);
          if (iVar10 == iVar13) {
            mobyutil::CreateMotionBlur(g_heroMobyPtr,&DAT_0096b350);
            mobyutil::AddMotionBlurElem(&DAT_0096b350,0x30,2);
            mobyutil::AddMotionBlurElem(&DAT_0096b350,0x17,4);
            mobyutil::AddMotionBlurElem(&DAT_0096b350,0xc,6);
          }
          uVar7 = 0;
          if (iVar12 < g_heroStateTimer) {
            uVar7 = 5;
          }
          mobyutil::UpdateMotionBlur(&DAT_0096b350,uVar7);
          iVar10 = g_heroStateTimer;
          if (DAT_0096afc2 == '\0') {
            if (iVar15 < g_heroStateTimer) {
              if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 90.0,&g_storedNeutralSpeed);
              }
              else {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 190.0,&g_storedNeutralSpeed);
              }
            }
            if (DAT_0096a738 == 0) {
              Hero_ThrustToMotion(99999.0);
            }
            else {
              Hero_ThrustToMotion(DAT_0096a73c);
            }
          }
          else {
            if (((iVar15 < g_heroStateTimer) &&
                (iVar13 = idol::GetAnimDuration(7), iVar10 < iVar15 + iVar13)) &&
               (DAT_00969e48 < mobyutil::g_FrameTime * 8.5)) {
              dVar29 = (double)g_heroVelocity;
              dVar30 = (double)mathfunc::cosf(g_heroRotation.z);
              dVar32 = 1.2000000476837158;
              dVar34 = (double)DAT_00969dc4;
              g_heroVelocity =
                   (float)(dVar29 + (double)(float)((double)(mobyutil::g_FrameTime * 1.2) * dVar30))
              ;
              dVar30 = (double)FUN_005e8128((double)g_heroRotation.z);
              DAT_00969dc4 = (float)(dVar34 + (double)(float)((double)(float)((double)mobyutil::
                                                                                      g_FrameTime *
                                                                             dVar32) * dVar30));
              FUN_005e7e98(&DAT_00969e10,&g_heroVelocity);
            }
            Hero_AttackMotion();
          }
          iVar10 = g_heroStateTimer;
          if (((g_heroState == WALLOPER_SOMETHING) && (iVar15 < g_heroStateTimer)) &&
             ((iVar15 = idol::GetAnimDuration(4), pMVar4 = g_currentWeaponMoby,
              iVar10 < iVar12 + iVar15 && (g_currentWeaponMoby != (MobyInstance *)0x0)))) {
            dVar30 = (double)mathfunc::cosf(g_heroRotation.z);
            dVar34 = 2.0;
            local_660 = (float)(dVar30 * 2.0);
            dVar30 = (double)FUN_005e8128((double)g_heroRotation.z);
            local_65c = (float)(dVar30 * dVar34);
            local_658 = 0x3fa66666;
            mobyutil::SetCollDamIn(0x4008000000000000,uVar8 - 0x260,g_heroMobyPtr,0x30000);
            local_248 = 0;
            local_247 = 3;
            local_254 = 0x45afdf66;
            local_246 = pMVar4->oClass;
            dVar34 = (double)g_heroRotation.z;
            dVar30 = (double)mathfunc::cosf(g_heroRotation.z);
            dVar32 = 0.800000011920929;
            local_650 = (float)(dVar30 * 0.800000011920929);
            dVar30 = (double)FUN_005e8128(dVar34);
            local_64c = (float)(dVar30 * dVar32);
            lVar24 = uVar8 - 0x650;
            dVar29 = 0.550000011920929;
            local_648 = (float)dVar28 + 0.55;
            FUN_005e7f54(lVar24,lVar24,&g_heroPosition);
            uVar14 = collproc::CollMobySphere(dVar32,lVar24);
            ____Hero_ApplyHitGravityToMobyList(pMVar4,uVar14);
            dVar30 = (double)fastfunc::FastWrapRot(g_heroRotation.z,-0.87266463);
            dVar34 = (double)mathfunc::cosf((float)dVar30);
            local_650 = (float)(dVar34 * dVar32);
            dVar30 = (double)FUN_005e8128(dVar30);
            local_64c = (float)(dVar30 * dVar32);
            local_648 = (float)((double)(float)dVar28 + dVar29);
            FUN_005e7f54(lVar24,lVar24,&g_heroPosition);
            uVar14 = collproc::CollMobySphere(dVar32,lVar24);
            ____Hero_ApplyHitGravityToMobyList(pMVar4,uVar14);
            dVar30 = (double)fastfunc::FastWrapRot(g_heroRotation.z,0.87266463);
            dVar34 = (double)mathfunc::cosf((float)dVar30);
            local_650 = (float)(dVar34 * dVar32);
            dVar30 = (double)FUN_005e8128(dVar30);
            local_64c = (float)(dVar30 * dVar32);
            local_648 = (float)((double)(float)dVar28 + dVar29);
            FUN_005e7f54(lVar24,lVar24,&g_heroPosition);
            uVar14 = collproc::CollMobySphere(dVar32,lVar24);
            ____Hero_ApplyHitGravityToMobyList(pMVar4,uVar14);
          }
          iVar10 = g_heroStateTimer;
          iVar15 = idol::GetAnimDuration(10);
          if (iVar15 < iVar10) {
            Hero_EdgeStop(0x400d9999a0000000,dVar28);
          }
          Hero_KneeBumpMotion(1);
          if (g_framesNotGrounded == 0) {
            Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
          }
          else {
            Hero_AddGravity(DAT_0071f418 * 24.0,&g_heroVelocity,(float *)&DAT_00969df0);
            Hero_WallSloopMotion();
          }
          goto LAB_000b703c;
        }
      }
    }
  }
  else {
    if ((int)g_heroState < 0x67) {
      if ((int)g_heroState < 0x55) {
        if (0x4f < (int)g_heroState) {
          if ((int)g_heroState < 0x52) {
            if (0x50 < (int)g_heroState) {
              dVar28 = 0.0;
              g_heroIdealSpeed = 0.0;
              iVar15 = DAT_0096a740 * 0x2c;
              iVar10 = *(int *)(&DAT_00723180 + iVar15);
              if (iVar10 < 1) {
                if ((-1 < iVar10) && (g_heroAnimFrame < 5.5)) {
                  g_heroIdealSpeed = mobyutil::g_FrameTime * 3.5;
                }
              }
              else if ((iVar10 < 2) && (g_heroAnimFrame < 5.5)) {
                g_heroIdealSpeed = mobyutil::g_FrameTime * 3.5;
              }
              if (((DAT_0096a77c == 0) &&
                  (local_c8 = (ulonglong)*(int *)(iVar15 + 0x723198),
                  (float)(longlong)local_c8 <= g_heroAnimFrame)) &&
                 (local_c8 = (ulonglong)*(int *)(&DAT_0072319c + iVar15),
                 g_heroAnimFrame <= (float)(longlong)local_c8)) {
                iVar10 = 2;
                if (*(int *)(&DAT_00723180 + iVar15) == 1) {
                  iVar10 = 0;
                }
                mobyfunc::GetBonePosition(g_heroMobyPtr,iVar10,uVar8 - 0x3c0);
                mobyfunc::GetBonePosition(g_heroMobyPtr,iVar10 + 1,uVar8 - 0x3b0);
                lVar24 = uVar8 - 0x3d0;
                FUN_005e7f54(lVar24,uVar8 - 0x3c0,uVar8 - 0x3b0);
                FUN_005e822c(0x3fe0000000000000,lVar24,lVar24);
                mobyutil::DamageSphereAtPos
                          (0x3fd0000000000000,0x3ff0000000000000,0x3ff0000000000000,g_heroMobyPtr,
                           lVar24);
              }
              dVar30 = 1.0;
              dVar34 = 0.20000000298023224;
              mobyutil::Delt(1.0,0.2,&g_heroAnimSpeed);
              if ((DAT_0096a738 == 0) && (DAT_0096a734 == 0)) {
                bVar19 = true;
                if (((*(int *)(&DAT_00723180 + iVar15) == 1) && (DAT_0096a77c == 0)) &&
                   (7.0 < g_heroAnimFrame)) {
                  bVar19 = false;
                }
                if (bVar19) {
                  Hero_SetAttackRot(0x4014000000000000,0x3fe921fb60000000,0x3fe921fb60000000);
                }
              }
              else {
                if ((*(int *)(&DAT_00723180 + iVar15) == 1) &&
                   (dVar32 = (double)fastfunc::FastDiffRots
                                               ((double)DAT_0096a73c,(double)g_heroRotation.z),
                   dVar28 < dVar32)) {
                  dVar32 = (double)fastfunc::FastSubRots(DAT_0096a73c,g_heroRotation.z);
                  g_heroAnimSpeed = (float)(dVar30 / (double)(float)(dVar32 + dVar30));
                }
                g_heroIdealRotZ = DAT_0096a73c;
                fVar36 = (float)((double)DAT_0071f40c * dVar34);
                fVar2 = (float)((double)DAT_0071f40c * 0.05000000074505806);
                if (g_heroGravityMode == '\0') {
                  dVar30 = (double)mobyutil::AccelDeltAng
                                             ((double)DAT_0096a73c,(double)fVar2,(double)fVar36,
                                              (double)(mobyutil::g_FrameTime * 15.009831),0x969d78,
                                              &DAT_00720000,&DAT_00969e64);
                  DAT_00969e68 = (float)dVar30;
                }
                else {
                  Hero_Turn3D(fVar2,fVar36,mobyutil::g_FrameTime * 15.009831);
                }
              }
              if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 28.0,&g_storedNeutralSpeed);
              }
              else {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 37.0,&g_storedNeutralSpeed);
              }
              if (DAT_0096a738 == 0) {
                Hero_ThrustToMotion(99999.0);
              }
              else {
                Hero_ThrustToMotion(DAT_0096a73c);
              }
              if (g_framesNotGrounded == 0) {
                DAT_00969dc8 = DAT_00969dc8 - DAT_0071f418 * 54.0;
              }
              else {
                DAT_00969dc8 = DAT_00969de8 - DAT_0071f418 * 25.0;
                Hero_WallSloopMotion();
              }
              Hero_EdgeStop(0x400d9999a0000000,dVar28);
              goto LAB_000b703c;
            }
LAB_000b57b0:
            dVar28 = (double)fastfunc::FastSubRots(g_heroRotation.z,g_heroIdealRotZ);
            dVar30 = (double)(mobyutil::g_FrameTime * 3.0);
            Hero_GetIdealThrustFromPad(dVar30,&DAT_00720000,0);
            fVar36 = g_heroPadMagnitude + 0.35;
            dVar28 = (double)(1.0 - (float)(dVar28 * 0.30000001192092896));
            if (dVar28 < 0.0) {
              dVar28 = 0.0;
            }
            if ((float)(dVar30 * 0.5) <= DAT_00969e40) {
              fVar2 = DAT_0071f40c * 0.008 * fVar36;
              fVar36 = mobyutil::g_FrameTime * 9.948377 * fVar36;
              if (g_heroGravityMode == '\0') {
                dVar30 = (double)mobyutil::AccelDeltAng
                                           ((double)g_heroIdealRotZ,(double)fVar2,
                                            (double)(DAT_0071f40c * 0.15),(double)fVar36,0x969d78,
                                            &DAT_00720000,&DAT_00969e64);
                DAT_00969e68 = (float)dVar30;
              }
              else {
                Hero_Turn3D(fVar2,DAT_0071f40c * 0.15,fVar36);
              }
            }
            else {
              fVar2 = DAT_0071f40c * 0.035 * fVar36;
              fVar36 = mobyutil::g_FrameTime * 9.599311 * fVar36;
              if (g_heroGravityMode == '\0') {
                dVar30 = (double)mobyutil::AccelDeltAng
                                           ((double)g_heroIdealRotZ,(double)fVar2,
                                            (double)(DAT_0071f40c * 0.15),(double)fVar36,0x969d78,
                                            &DAT_00720000,&DAT_00969e64);
                DAT_00969e68 = (float)dVar30;
              }
              else {
                Hero_Turn3D(fVar2,DAT_0071f40c * 0.15,fVar36);
              }
            }
            if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
              mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 8.5,&g_storedNeutralSpeed);
            }
            else {
              mobyutil::Delt(g_heroIdealSpeed,(float)((double)(DAT_0071f418 * 7.5) * dVar28),
                             &g_storedNeutralSpeed);
            }
            if ((DAT_0096a098 == 0) || (g_onMagnerail != 0)) {
              Hero_ThrustToMotion(99999.0);
            }
            else {
              Hero_ThrustToMotion(g_heroIdealRotZ);
            }
            Hero_KneeBumpMotion(1);
            if (g_framesNotGrounded == 0) {
              Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
            }
            else {
              Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
              Hero_WallSloopMotion();
            }
            goto LAB_000b703c;
          }
          if ((int)g_heroState < 0x53) {
            g_heroIdealRotZ = DAT_00969fcc;
            g_heroIdealSpeed = mobyutil::g_FrameTime * 5.5;
            Hero_JumpTranslation(DAT_0071f418 * 25.0);
            Hero_AddGravity(DAT_0071f418 * 18.0,&g_heroVelocity,(float *)&DAT_00969e00);
            goto LAB_000b703c;
          }
          if (0x53 < (int)g_heroState) {
            uVar7 = fastfunc::FastSubRots(g_heroRotation.z,g_heroIdealRotZ);
            dVar30 = 1.5;
            dVar28 = extraout_f1_07;
            Hero_GetIdealThrustFromPad((double)(mobyutil::g_FrameTime * 1.5),uVar7,0);
            if (g_heroIdealSpeed < (float)((double)mobyutil::g_FrameTime * dVar30) * 0.55) {
              g_heroIdealSpeed = (float)((double)mobyutil::g_FrameTime * dVar30) * 0.55;
            }
            dVar28 = (double)(1.0 - (float)(dVar28 * 0.30000001192092896));
            if (dVar28 < 0.0) {
              dVar28 = 0.0;
            }
            fVar36 = DAT_0071f40c * 0.035 * (g_heroPadMagnitude + 0.35);
            fVar2 = mobyutil::g_FrameTime * 2.268928 * (g_heroPadMagnitude + 0.35);
            if (g_heroGravityMode == '\0') {
              dVar30 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)fVar36,
                                          (double)(DAT_0071f40c * 0.1),(double)fVar2,0x969d78);
              DAT_00969e68 = (float)dVar30;
            }
            else {
              Hero_Turn3D(fVar36,DAT_0071f40c * 0.1,fVar2);
            }
            if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
              mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 8.5,&g_storedNeutralSpeed);
            }
            else {
              mobyutil::Delt(g_heroIdealSpeed,(float)((double)(DAT_0071f418 * 7.5) * dVar28),
                             &g_storedNeutralSpeed);
            }
            if ((DAT_0096a098 == 0) || (g_onMagnerail != 0)) {
              Hero_ThrustToMotion(99999.0);
            }
            else {
              Hero_ThrustToMotion(g_heroIdealRotZ);
            }
            Hero_KneeBumpMotion(1);
            if (g_framesNotGrounded == 0) {
              Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
            }
            else {
              Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
              Hero_WallSloopMotion();
            }
            goto LAB_000b703c;
          }
LAB_000b6bfc:
          dVar28 = 0.0;
          uVar7 = Hero_EdgeStop(0x400d9999a0000000,0);
          Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar7,0);
          g_heroIdealSpeed = (float)dVar28;
          dVar30 = 12.600000381469727;
          if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
            fVar36 = mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 12.6,&g_storedNeutralSpeed);
          }
          else {
            fVar36 = mobyutil::Delt(g_heroIdealSpeed,(float)dVar28,&g_storedNeutralSpeed);
          }
          FUN_005e7e70((double)fVar36,&g_heroVelocity);
          Hero_ApplyTaper((float)((double)DAT_0071f418 * dVar30));
          Hero_KneeBumpMotion(0);
          if (g_framesNotGrounded == 0) {
            Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
          }
          else {
            Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
            Hero_WallSloopMotion();
          }
          goto LAB_000b703c;
        }
        if (0x4c < (int)g_heroState) {
          if ((int)g_heroState < 0x4f) {
            lVar24 = uVar8 - 0x380;
            g_heroAnimSpeed = 1.3;
            dVar28 = 0.0;
            g_heroVelocity = 0.0;
            DAT_00969dc4 = 0.0;
            DAT_00969dc8 = 0.0;
            FUN_005e7e98(lVar24,&g_heroPosition);
            if (g_heroState == CLANK_EDGE_MOVE_LEFT) {
              dVar32 = 1.5707963705062866;
              dVar30 = (double)fastfunc::FastWrapRot(g_heroRotation.z,1.5707964);
              dVar30 = (double)mathfunc::cosf((float)dVar30);
              dVar34 = 0.30000001192092896;
              local_360 = (float)(dVar30 * 0.30000001192092896);
              fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar32);
              dVar30 = (double)FUN_005e8128();
              dVar30 = dVar30 * dVar34;
            }
            else {
              dVar32 = -1.5707963705062866;
              dVar30 = (double)fastfunc::FastWrapRot(g_heroRotation.z,-1.5707964);
              dVar30 = (double)mathfunc::cosf((float)dVar30);
              dVar34 = 0.30000001192092896;
              local_360 = (float)(dVar30 * 0.30000001192092896);
              fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar32);
              dVar30 = (double)FUN_005e8128();
              dVar30 = dVar30 * dVar34;
            }
            local_358 = (float)dVar28;
            local_35c = (float)dVar30;
            FUN_005e7f54(uVar8 - 0x370,lVar24,uVar8 - 0x360);
            Hero_CheckLedgeGrab();
            if (DAT_0096a1c8 != 0) {
              FUN_005e7e98(uVar8 - 0x3a0,&DAT_0096a1b0);
              dVar30 = 3.1415927410125732;
              dVar28 = (double)fastfunc::FastWrapRot(DAT_0096a1c4,3.1415927);
              FUN_005e7e98(&g_heroPosition,uVar8 - 0x370);
              Hero_CheckLedgeGrab();
              FUN_005e7e98(&g_heroPosition,lVar24);
              if (DAT_0096a1c8 != 0) {
                FUN_005e7e98(uVar8 - 0x390,&DAT_0096a1b0);
                dVar30 = (double)fastfunc::FastWrapRot(DAT_0096a1c4,(float)dVar30);
                dVar34 = (double)fastfunc::FastSubRots((float)dVar28,(float)dVar30);
                if (dVar34 <= 0.5235987901687622) {
                  dVar30 = (double)fastfunc::FastDiffRots(dVar28,dVar30);
                  dVar34 = 0.5;
                  dVar28 = (double)fastfunc::FastWrapRot((float)(dVar30 * 0.5),(float)dVar28);
                  lVar24 = uVar8 - 0x350;
                  FUN_005e7f54(lVar24,uVar8 - 0x3a0,uVar8 - 0x390);
                  FUN_005e822c(dVar34,lVar24,lVar24);
                  g_heroIdealRotZ = (float)dVar28;
                  if (g_heroGravityMode == '\0') {
                    dVar28 = (double)mobyutil::AccelDeltAng
                                               ((double)g_heroIdealRotZ,
                                                (double)(DAT_0071f40c * 0.04),
                                                (double)(DAT_0071f40c * 0.2),
                                                (double)(mobyutil::g_FrameTime * 6.2831855),0x969d78
                                                ,&DAT_00720000,&DAT_00969e64);
                    DAT_00969e68 = (float)dVar28;
                  }
                  else {
                    Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.2,
                                mobyutil::g_FrameTime * 6.2831855);
                  }
                  local_cc = DAT_00969e44;
                  fVar36 = mobyutil::Delt(g_heroIdealSpeed * mobyutil::g_FrameTime,
                                          DAT_0071f418 * 5.0,&local_cc);
                  FUN_005e81f0((double)fVar36,&g_heroVelocity,uVar8 - 0x350,&g_heroPosition);
                  lVar24 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
                  FUN_005e7f98((double)(float)((double)*(float *)(&DAT_007379d0 + (int)(lVar24 << 2)
                                                                 ) * dVar34),&g_heroVelocity,
                               &g_heroVelocity);
                }
              }
            }
          }
          else {
            dVar28 = (double)(mobyutil::g_FrameTime * 2.0);
            Hero_GetIdealThrustFromPad(dVar28,g_heroState,0);
            if (g_heroGravityMode == '\0') {
              dVar30 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.04),
                                          (double)(DAT_0071f40c * 0.2),
                                          (double)(mobyutil::g_FrameTime * 8.726646),0x969d78);
              DAT_00969e68 = (float)dVar30;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 8.726646);
            }
            if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
              mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 7.0,&g_storedNeutralSpeed);
            }
            else {
              mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 15.0,&g_storedNeutralSpeed);
            }
            Hero_ThrustToMotion(99999.0);
            Hero_CancelGravity(&g_heroVelocity,&g_heroVelocity);
            Hero_AddGravity((float)(dVar28 * 0.7200000286102295),&g_heroVelocity,&g_heroVelocity);
          }
          goto LAB_000b703c;
        }
        if ((int)g_heroState < 0x4c) {
          dVar28 = (double)fastfunc::FastWrapRot(DAT_0096a1c4,3.1415927);
          g_heroIdealRotZ = (float)dVar28;
          if (g_heroGravityMode == '\0') {
            dVar28 = (double)mobyutil::AccelDeltAng
                                       ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.02),
                                        (double)(DAT_0071f40c * 0.2),
                                        (double)(mobyutil::g_FrameTime * 4.712389),0x969d78);
            DAT_00969e68 = (float)dVar28;
          }
          else {
            Hero_Turn3D(DAT_0071f40c * 0.02,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 4.712389);
          }
          FUN_005e81f0(&g_heroVelocity,&DAT_0096a1b0,&g_heroPosition);
          mobyutil::ClampVec3Magnitude
                    ((double)(mobyutil::g_FrameTime * 1.7),(Vec4 *)&g_heroVelocity);
          mobyutil::Delt(g_heroPosition.z,mobyutil::g_FrameTime * 3.0,(float *)&DAT_0096a1d0);
          goto LAB_000b703c;
        }
      }
      else {
        if ((int)g_heroState < 0x5d) {
          if (g_heroState == GIANT_CLANK_FALLING) {
            Hero_GetIdealThrustFromPad((double)(mobyutil::g_FrameTime * 6.0),0x5c,0);
            FUN_005e7e98(uVar8 - 0x2e0,&g_heroPosition);
            local_2d8 = local_2d8 - 1.0;
            mobyutil::DamageSphereAtPos
                      (0x400c000000000000,0x4044000000000000,g_heroMobyPtr,uVar8 - 0x2e0);
            if (DAT_00969ea4 == 0) {
              Hero_JumpTurnTrans();
            }
            Hero_AddGravity(DAT_0071f418 * 12.0,&g_heroVelocity,&g_heroVelocity);
            if (DAT_00969dc8 < mobyutil::g_FrameTime * -10.0) {
              DAT_00969dc8 = mobyutil::g_FrameTime * -10.0;
            }
            goto LAB_000b703c;
          }
          if (g_heroState != GIANT_CLANK_WALKING) {
            if (g_heroState != GIANT_CLANK_STANDING) {
              if (g_heroState != HOLOGUISE_WAVE) {
                if (g_heroState == UNK_58) {
                  g_heroIdealRotZ = DAT_00969fcc;
                  g_heroIdealSpeed = mobyutil::g_FrameTime * 5.5;
                  Hero_JumpTranslation(DAT_0071f418 * 25.0);
                  Hero_AddGravity(DAT_0071f418 * 18.0,&g_heroVelocity,(float *)&DAT_00969e00);
                  goto LAB_000b703c;
                }
                if (g_heroState != HOLOGUISE_DYING) {
                  if (g_heroState == UNK_56) {
                    dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
                    if (g_framesNotGrounded == 0) {
                      fVar36 = DAT_0071f408 * -0.07999998;
                    }
                    else {
                      fVar36 = DAT_0071f408 * -0.00999999;
                    }
                    FUN_005e7ed8((double)(float)(dVar28 * (double)(fVar36 + 1.0)),&g_heroVelocity,
                                 &g_heroVelocity);
                    DAT_00969dc8 = 0.0;
                    if (g_framesNotGrounded == 0) {
                      Hero_AddGravity(0.004,&g_heroVelocity,&g_heroVelocity);
                    }
                    else {
                      Hero_AddGravity(DAT_0071f418 * 24.0,&g_heroVelocity,(float *)&DAT_00969df0);
                    }
                  }
                  else if (g_heroState == UNK_55) {
                    Hero_GetIdealThrustFromPad((double)(mobyutil::g_FrameTime * 1.5),0x55,0);
                    if (DAT_00969ea4 == 0) {
                      Hero_JumpTurnTrans();
                    }
                    Hero_AddGravity(DAT_0071f418 * 21.0,&g_heroVelocity,&g_heroVelocity);
                    if (DAT_00969dc8 < mobyutil::g_FrameTime * -15.0) {
                      DAT_00969dc8 = mobyutil::g_FrameTime * -15.0;
                    }
                  }
                  goto LAB_000b703c;
                }
              }
              goto LAB_000b6bfc;
            }
            goto LAB_000b5dac;
          }
          dVar28 = (double)fastfunc::FastSubRots(g_heroRotation.z,g_heroIdealRotZ);
          iVar10 = 0;
          do {
            local_c8 = (ulonglong)iVar10;
            dVar30 = (double)fastfunc::FastWrapRot(-0.7853982,(float)(longlong)local_c8 * 0.7853982)
            ;
            Hero_GetHeroRelativePolarVector(1.8,(float)dVar30,1.4,(float *)(uVar8 - 0x2d0));
            dVar30 = 1.0;
            mobyutil::DamageSphereAtPos
                      (0x40059999a0000000,0x4044000000000000,0x3ff0000000000000,g_heroMobyPtr,
                       uVar8 - 0x2d0);
            iVar10 = iVar10 + 1;
          } while (iVar10 < 3);
          bVar19 = false;
          if ((30.0 < g_heroAnimFrame) && (g_heroAnimFrame - 30.0 <= DAT_0096a78c)) {
            bVar19 = true;
          }
          if (bVar19) {
LAB_000b68e8:
            GameCamera.offset0.amp = 0.1;
            GameCamera.offset0.total = idol::GetAnimDuration(0x14);
          }
          else {
            bVar19 = false;
            if ((0.0 < g_heroAnimFrame) && (g_heroAnimFrame <= DAT_0096a78c)) {
              bVar19 = true;
            }
            if (bVar19) goto LAB_000b68e8;
          }
          Hero_GetIdealThrustFromPad((double)(mobyutil::g_FrameTime * 6.0),&DAT_00720000,0);
          dVar34 = 0.30000001192092896;
          dVar28 = (double)(float)(dVar30 - (double)(float)(dVar28 * 0.30000001192092896));
          if (dVar28 < 0.0) {
            dVar28 = 0.0;
          }
          fVar36 = DAT_0071f40c * 0.021 * (g_heroPadMagnitude + 0.35);
          fVar2 = mobyutil::g_FrameTime * 2.268928 * (g_heroPadMagnitude + 0.35);
          if (g_heroGravityMode == '\0') {
            dVar30 = (double)mobyutil::AccelDeltAng
                                       ((double)g_heroIdealRotZ,(double)fVar36,
                                        (double)(DAT_0071f40c * 0.3),(double)fVar2,0x969d78);
            DAT_00969e68 = (float)dVar30;
          }
          else {
            Hero_Turn3D(fVar36,DAT_0071f40c * 0.3,fVar2);
          }
          if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
            mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 8.5,&g_storedNeutralSpeed);
          }
          else {
            mobyutil::Delt(g_heroIdealSpeed,(float)((double)(DAT_0071f418 * 7.5) * dVar28),
                           &g_storedNeutralSpeed);
          }
          fVar36 = 1.7;
          if ((DAT_00969e68 <= 1.7) && (fVar36 = DAT_00969e68, DAT_00969e68 < -1.7)) {
            fVar36 = -1.7;
          }
          dVar28 = (double)DAT_0071f40c;
          DAT_00723068 = (float)(dVar28 * dVar34);
          DAT_00723064 = (float)(dVar28 * 0.009999999776482582);
          DAT_00722f08 = (float)(dVar28 * dVar34);
          DAT_00722fb8 = (float)(dVar28 * dVar34);
          DAT_00722f04 = (float)(dVar28 * 0.014999999664723873);
          DAT_00722fb4 = (float)(dVar28 * 0.019999999552965164);
          DAT_00722ec0 = fVar36 * -0.14;
          DAT_00722ec8 = fVar36 * 0.25;
          DAT_00722f78 = fVar36 * 0.57;
          if ((DAT_0096a098 == 0) || (g_onMagnerail != 0)) {
            Hero_ThrustToMotion(99999.0);
          }
          else {
            Hero_ThrustToMotion(g_heroIdealRotZ);
          }
          Hero_KneeBumpMotion(1);
          if (g_framesNotGrounded == 0) {
            Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
          }
          else {
            Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
            Hero_WallSloopMotion();
          }
          goto LAB_000b703c;
        }
        if (0x60 < (int)g_heroState) {
          if (0x62 < (int)g_heroState) {
            if ((int)g_heroState < 0x65) {
              FUN_005e7e70(&g_heroVelocity);
            }
            else if ((int)g_heroState < 0x66) {
              FUN_005e81f0(uVar8 - 0x3f0,&DAT_0096b320,&g_heroPosition);
              dVar28 = (double)FUN_005e8338((double)local_3f0,(double)local_3ec);
              g_heroIdealRotZ = (float)dVar28;
              dVar28 = (double)FUN_005e7ebc(uVar8 - 0x3f0);
              if (dVar28 <= 0.20000000298023224) {
                g_heroIdealRotZ = DAT_0096b32c;
                g_heroPadMagnitude = 0.5;
                g_heroIdealSpeed = 0.0;
              }
              else {
                g_heroPadMagnitude = 1.0;
                dVar30 = (double)FUN_005e8338((double)local_3f0,(double)local_3ec);
                g_heroIdealRotZ = (float)dVar30;
                fVar36 = DAT_00723320;
                if ((float)dVar28 < DAT_00723314) {
                  fVar36 = DAT_00723310;
                }
                g_heroIdealSpeed = fVar36 * mobyutil::g_FrameTime;
                if (g_heroType == '\x03') {
                  g_heroIdealSpeed = mobyutil::g_FrameTime * 1.5;
                }
                else if (g_heroType == '\x01') {
                  g_heroIdealSpeed = mobyutil::g_FrameTime * 0.9;
                }
              }
              if (g_heroType == '\x03') {
                if (g_heroGravityMode == '\0') {
                  dVar28 = (double)mobyutil::AccelDeltAng
                                             ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.03),
                                              (double)(DAT_0071f40c * 0.3),
                                              (double)(mobyutil::g_FrameTime * 5.5850534),0x969d78,
                                              &DAT_00720000,&DAT_00969e64);
                  DAT_00969e68 = (float)dVar28;
                }
                else {
                  Hero_Turn3D(DAT_0071f40c * 0.03,DAT_0071f40c * 0.3,
                              mobyutil::g_FrameTime * 5.5850534);
                }
              }
              else if (g_heroType == '\x01') {
                if (g_heroGravityMode == '\0') {
                  dVar28 = (double)mobyutil::AccelDeltAng
                                             ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.03),
                                              (double)(DAT_0071f40c * 0.3),
                                              (double)(mobyutil::g_FrameTime * 7.8539815),0x969d78,
                                              &DAT_00720000,&DAT_00969e64);
                  DAT_00969e68 = (float)dVar28;
                }
                else {
                  Hero_Turn3D(DAT_0071f40c * 0.03,DAT_0071f40c * 0.3,
                              mobyutil::g_FrameTime * 7.8539815);
                }
              }
              else if (g_heroType == '\0') {
                if (DAT_0096bd68 == 1) {
                  if (g_heroGravityMode == '\0') {
                    dVar28 = (double)mobyutil::AccelDeltAng
                                               ((double)g_heroIdealRotZ,
                                                (double)(DAT_0071f40c * 0.016),
                                                (double)(DAT_0071f40c * 0.15),
                                                (double)(mobyutil::g_FrameTime * 9.948377),0x969d78,
                                                &DAT_00720000,&DAT_00969e64);
                    DAT_00969e68 = (float)dVar28;
                  }
                  else {
                    Hero_Turn3D(DAT_0071f40c * 0.016,DAT_0071f40c * 0.15,
                                mobyutil::g_FrameTime * 9.948377);
                  }
                }
                else {
                  Hero_TurnWalk();
                }
              }
              if (g_heroType == '\0') {
                Hero_SetBankTwistSway();
              }
              if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 8.5,&g_storedNeutralSpeed);
              }
              else {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 7.5,&g_storedNeutralSpeed);
              }
              Hero_ThrustToMotion(99999.0);
              if (g_heroType == '\0') {
                Hero_KneeBumpMotion(1);
              }
              if (g_framesNotGrounded == 0) {
                Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
              }
              else {
                Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,&DAT_00969de0);
                Hero_WallSloopMotion();
              }
            }
            else {
              FUN_005e81f0(uVar8 - 0x3e0,&DAT_0096b320,&g_heroPosition);
              dVar28 = (double)FUN_005e81c0(uVar8 - 0x3e0,&g_heroExternalMomentum);
              if (dVar28 < 0.0) {
                FUN_005e7e70(&g_heroExternalMomentum);
              }
              FUN_005e7e70(&g_heroVelocity);
              Hero_ApplyTaper(DAT_0071f418 * 12.0);
              Hero_KneeBumpMotion(0);
              if (g_framesNotGrounded == 0) {
                Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
              }
              else {
                Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,&DAT_00969de0);
                Hero_WallSloopMotion();
              }
            }
            goto LAB_000b703c;
          }
          if ((int)g_heroState < 0x62) {
            g_heroIdealSpeed = 0.0;
            dVar28 = 12.600000381469727;
            if (0.0 <= g_storedNeutralSpeed) {
              fVar36 = mobyutil::Delt(0.0,DAT_0071f418 * 12.6,&g_storedNeutralSpeed);
            }
            else {
              fVar36 = mobyutil::Delt(0.0,0.0,&g_storedNeutralSpeed);
            }
            FUN_005e7e70((double)fVar36,&g_heroVelocity);
            Hero_ApplyTaper((float)((double)DAT_0071f418 * dVar28));
            if (((DAT_0096a77c != 0) || (g_heroAnimFrame <= 22.0)) || (55.0 <= g_heroAnimFrame)) {
              if ((DAT_0096a77c == 0) && (g_heroAnimFrame <= 22.0)) {
                FUN_005e7f98(0x4008000000000000,uVar8 - 0x310,&g_heroMtx);
                local_308 = local_308 + 5.0;
                fastfunc::FastVecAddSelf(uVar8 - 0x300,uVar8 - 0x310,&pMVar5->pos);
                mobyattack::Spawn_Moby1523_GC_Blueball(pMVar5);
                g_heroAnimSpeed = 0.5;
              }
            }
            else {
              g_heroAnimSpeed = 1.0;
            }
            if (g_framesNotGrounded == 0) {
              Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
            }
            else {
              Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
              Hero_WallSloopMotion();
            }
            goto LAB_000b703c;
          }
LAB_000b5dac:
          dVar30 = 0.0;
          uVar7 = Hero_EdgeStop(0x400d9999a0000000,0);
          Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar7,0);
          g_heroIdealSpeed = (float)dVar30;
          dVar28 = 12.600000381469727;
          if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
            fVar36 = mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 12.6,&g_storedNeutralSpeed);
          }
          else {
            fVar36 = mobyutil::Delt(g_heroIdealSpeed,(float)dVar30,&g_storedNeutralSpeed);
          }
          FUN_005e7e70((double)fVar36,&g_heroVelocity);
          Hero_ApplyTaper((float)((double)DAT_0071f418 * dVar28));
          Hero_KneeBumpMotion(0);
          if (g_framesNotGrounded == 0) {
            Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
          }
          else {
            Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
            Hero_WallSloopMotion();
          }
          goto LAB_000b703c;
        }
        if (0x5e < (int)g_heroState) {
          if ((int)g_heroState < 0x60) {
            uVar7 = 0;
            g_heroIdealSpeed = 0.0;
            dVar28 = 12.600000381469727;
            if (0.0 <= g_storedNeutralSpeed) {
              mobyutil::Delt(0.0,DAT_0071f418 * 12.6,&g_storedNeutralSpeed);
            }
            else {
              mobyutil::Delt(0.0,0.0,&g_storedNeutralSpeed);
            }
            Hero_GetIdealThrustFromPad(0x3ff0000000000000);
            if (g_heroGravityMode == '\0') {
              dVar30 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.01),
                                          (double)(DAT_0071f40c * 0.2),
                                          (double)(mobyutil::g_FrameTime * 1.2217305),0x969d78,
                                          &DAT_00720000,&DAT_00969e64);
              DAT_00969e68 = (float)dVar30;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.01,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 1.2217305);
            }
            FUN_005e7e70(&g_heroVelocity);
            Hero_ApplyTaper((float)((double)DAT_0071f418 * dVar28));
            bVar19 = false;
            if ((4.0 < g_heroAnimFrame) && (g_heroAnimFrame - 4.0 <= DAT_0096a78c)) {
              bVar19 = true;
            }
            if (bVar19) {
              iVar10 = 0;
              do {
                mobyfunc::GetBonePosition(g_heroMobyPtr,iVar10 + 3,uVar8 - 0x2f0);
                dVar32 = (double)local_2f0;
                dVar28 = (double)mathfunc::cosf(g_heroRotation.z);
                dVar34 = 1.399999976158142;
                dVar30 = (double)local_2ec;
                local_2f0 = (float)(dVar32 + (double)(float)(dVar28 * 1.399999976158142));
                dVar28 = (double)FUN_005e8128((double)g_heroRotation.z);
                local_2ec = (float)(dVar30 + (double)(float)(dVar28 * dVar34));
                mobyattack::Spawn_Moby256_Rocket
                          ((double)g_heroRotation.z,uVar7,0x3fe0000000000000,
                           (double)g_heroRotation.z,uVar7,g_heroMobyPtr,uVar8 - 0x2f0);
                iVar10 = iVar10 + 1;
              } while (iVar10 < 2);
            }
            if (g_framesNotGrounded == 0) {
              Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
            }
            else {
              Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
              Hero_WallSloopMotion();
            }
          }
          else {
            dVar28 = 1.0;
            Hero_GetIdealThrustFromPad(0x3ff0000000000000,g_heroState,0);
            if (g_heroGravityMode == '\0') {
              dVar30 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.02),
                                          (double)(DAT_0071f40c * 0.2),
                                          (double)(mobyutil::g_FrameTime * 1.9198622),0x969d78,
                                          &DAT_00720000,&DAT_00969e64);
              DAT_00969e68 = (float)dVar30;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.02,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 1.9198622);
            }
            dVar30 = 0.0;
            g_heroIdealSpeed = 0.0;
            FUN_005e7e70(&g_heroVelocity);
            Hero_ApplyTaper(DAT_0071f418 * 12.6);
            if (DAT_0096a77c == 0) {
              dVar34 = (double)mathfunc::cosf(g_heroRotation.z);
              local_330 = (float)dVar34;
              dVar34 = (double)FUN_005e8128((double)g_heroRotation.z);
              local_32c = (float)dVar34;
              local_328 = (float)dVar30;
              mobyutil::SetCollDamIn(0x4010000000000000,uVar8 - 0x200,g_heroMobyPtr,0xb0000);
              local_1f8 = (float)dVar28;
              local_1e8 = 7;
              local_1e7 = 1;
              local_1f4 = 0x45afdf66;
              local_1e6 = g_heroMobyPtr->oClass;
              if (DAT_0096a740 < 1) {
                if (((-1 < DAT_0096a740) && (7.0 < g_heroAnimFrame)) && (g_heroAnimFrame < 14.0)) {
                  mobyfunc::GetBonePosition(g_heroMobyPtr,3,uVar8 - 0x340);
                  collproc::CollMobySphere(0x4000000000000000,uVar8 - 0x340);
                }
              }
              else if (DAT_0096a740 < 2) {
                if ((7.0 < g_heroAnimFrame) && (g_heroAnimFrame < 14.0)) {
                  mobyfunc::GetBonePosition(g_heroMobyPtr,4,uVar8 - 0x340);
                  collproc::CollMobySphere(0x4000000000000000,uVar8 - 0x340);
                }
              }
              else if (((DAT_0096a740 < 3) && (14.0 < g_heroAnimFrame)) && (g_heroAnimFrame < 21.0))
              {
                lVar24 = uVar8 - 0x340;
                mobyfunc::GetBonePosition(g_heroMobyPtr,3,lVar24);
                uVar7 = 0x4000000000000000;
                collproc::CollMobySphere
                          (0x4000000000000000,lVar24,g_heroMobyPtr,0x10,g_heroMobyPtr,uVar8 - 0x200)
                ;
                mobyfunc::GetBonePosition(g_heroMobyPtr,4,lVar24);
                collproc::CollMobySphere(uVar7,lVar24);
              }
              iVar10 = 0;
              do {
                local_c8 = (ulonglong)iVar10;
                dVar34 = (double)fastfunc::FastWrapRot
                                           (-0.7853982,(float)(longlong)local_c8 * 0.7853982);
                Hero_GetHeroRelativePolarVector(1.8,(float)dVar34,1.4,(float *)(uVar8 - 800));
                mobyutil::DamageSphereAtPos
                          (0x40019999a0000000,0x4044000000000000,dVar28,g_heroMobyPtr,uVar8 - 800);
                iVar10 = iVar10 + 1;
              } while (iVar10 < 3);
            }
            if (DAT_0096a740 < 2) {
              if (-1 < DAT_0096a740) {
                if (((DAT_0096a77c == 0) && (7.0 <= g_heroAnimFrame)) && (g_heroAnimFrame < 15.0)) {
                  g_heroIdealSpeed = mobyutil::g_FrameTime * 21.0;
                }
                if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                  mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 140.0,&g_storedNeutralSpeed);
                }
                else {
                  mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 180.0,&g_storedNeutralSpeed);
                }
                Hero_ThrustToMotion(99999.0);
              }
            }
            else if (DAT_0096a740 < 3) {
              if (((DAT_0096a77c == 0) && (11.0 <= g_heroAnimFrame)) && (g_heroAnimFrame < 20.0)) {
                g_heroIdealSpeed = mobyutil::g_FrameTime * 30.0;
              }
              if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 120.0,&g_storedNeutralSpeed);
              }
              else {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 150.0,&g_storedNeutralSpeed);
              }
              Hero_ThrustToMotion(99999.0);
            }
            Hero_KneeBumpMotion(1);
            if (g_framesNotGrounded == 0) {
              Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
            }
            else {
              Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
            }
            Hero_EdgeStop(0x400d9999a0000000,dVar30);
          }
          goto LAB_000b703c;
        }
        if ((int)g_heroState < 0x5e) {
          dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
          if (g_framesNotGrounded == 0) {
            fVar36 = DAT_0071f408 * -0.07999998;
          }
          else {
            fVar36 = DAT_0071f408 * -0.00999999;
          }
          FUN_005e7ed8((double)(float)(dVar28 * (double)(fVar36 + 1.0)),&g_heroVelocity,
                       &g_heroVelocity);
          DAT_00969dc8 = 0.0;
          if (g_framesNotGrounded == 0) {
            Hero_AddGravity(0.004,&g_heroVelocity,&g_heroVelocity);
          }
          else {
            Hero_AddGravity(DAT_0071f418 * 24.0,&g_heroVelocity,(float *)&DAT_00969df0);
          }
          goto LAB_000b703c;
        }
      }
LAB_000b4328:
      if (((g_heroState == EDGE_JUMP) && (g_hasClank == 0)) && (DAT_0096ae88 == 3)) {
        bVar19 = false;
        if ((10.0 < g_heroAnimFrame) && (g_heroAnimFrame - 10.0 <= DAT_0096a78c)) {
          bVar19 = true;
        }
        if (bVar19) {
          Hero_PlaySound(4,0);
        }
      }
      if ((DAT_0096a188 == 0) || (DAT_0096afc2 == '\0')) {
        uVar9 = (ulonglong)g_DustHoverState;
        if (g_DustHoverState != 0) {
          uVar9 = Hero_GetIdealThrustFromPad((double)(mobyutil::g_FrameTime * 5.7),&DAT_00720000,0);
        }
        Hero_GetIdealThrustFromPad((double)DAT_0096a104,uVar9,0);
      }
      else {
        g_heroIdealSpeed = g_storedNeutralSpeed;
      }
      iVar10 = g_heroStateTimer;
      if (g_heroState == WATER_JUMP) {
        iVar15 = idol::GetAnimDuration(0x14);
        if ((iVar10 == iVar15) && (Hero_SpawnWaterSplash(3,0x10,1), WaterTiles != (WaterTile *)0x0))
        {
          water::WaterTile_PutDrop
                    (g_heroPosition.x,g_heroPosition.y,0.4,0.35,WaterTiles,WaterTileCnt,(float)in_f5
                    );
        }
        if ((4.0 <= g_heroAnimFrame) && (g_heroAnimFrame <= 7.0)) {
          Hero_SpawnWaterBubbles(7,0);
        }
      }
      if (g_heroStateTimer == DAT_0096a100) {
        FUN_005e7e98(&DAT_0096a0e0,&g_heroPosition);
      }
      if ((g_DustHoverState == 0) &&
         ((((((DAT_0096a100 <= g_heroStateTimer || (g_heroState == FLIP_JUMP)) ||
             (g_heroState == THRUSTER_PACK_FORWARD_JUMP)) ||
            ((g_heroState == UNK_C || (g_heroState == WALL_JUMP)))) || (g_heroState == EDGE_JUMP))
          || (g_heroState == CLANK_EDGE_JUMP)))) {
        Hero_JumpTurnTrans();
        if (g_heroState == WATER_JUMP) {
          dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
          if ((double)(mobyutil::g_FrameTime * 3.7) < dVar28) {
            dVar28 = (double)(mobyutil::g_FrameTime * 3.7);
          }
          FUN_005e84c0(dVar28,&g_heroVelocity,&g_heroVelocity);
        }
      }
      else if (DAT_0096a188 == 0) {
        dVar28 = 0.20000000298023224;
        if (g_heroGravityMode == '\0') {
          dVar30 = (double)mobyutil::AccelDeltAng
                                     ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.015),
                                      (double)(DAT_0071f40c * 0.2),
                                      (double)(mobyutil::g_FrameTime * 15.009831),0x969d78,
                                      &DAT_00720000,&DAT_00969e64);
          DAT_00969e68 = (float)dVar30;
        }
        else {
          Hero_Turn3D(DAT_0071f40c * 0.015,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 15.009831);
        }
        dVar30 = (double)g_storedNeutralSpeed;
        if (1 < (int)g_DustHoverState) {
          g_storedNeutralSpeed = g_storedNeutralSpeed * 0.4;
        }
        Hero_ThrustToMotion(99999.0);
        g_storedNeutralSpeed = (float)dVar30;
        if (g_DustHoverState != 1) {
          if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
            mobyutil::Delt(g_heroIdealSpeed,DAT_0096a164,&g_storedNeutralSpeed);
          }
          else {
            mobyutil::Delt(g_heroIdealSpeed,DAT_0096a160,&g_storedNeutralSpeed);
          }
        }
        if (g_onMagnerail != 0) {
          g_storedNeutralSpeed = 0.0;
        }
        if (((g_DustHoverState != 0) && (DAT_00964b14 != 0)) && (DAT_00969fea != 0)) {
          g_storedNeutralSpeed = 0.0;
        }
        if (g_DustHoverState != 0) {
          Hero_ApplyTaper(DAT_0096a164);
        }
        dVar30 = 0.5;
        Hero_UpdateExternalThrust(0.5,mobyutil::g_FrameTime * 2.0);
        iVar10 = g_heroStateTimer;
        if ((g_heroState == MOVEMENT_JUMP) &&
           (iVar15 = idol::GetAnimDuration(4), iVar10 < DAT_0096a100 + iVar15)) {
          local_c8 = (ulonglong)g_heroStateTimer;
          Hero_ForwardThrust(DAT_0071f418 * 16.0 * (float)(longlong)local_c8,&g_heroVelocity,
                             &g_heroVelocity);
        }
        iVar10 = g_heroStateTimer;
        if ((g_heroState == HELI_PACK_FWD_JUMP) &&
           (iVar15 = idol::GetAnimDuration(0x22), iVar10 < iVar15)) {
          local_c8 = (ulonglong)g_heroStateTimer;
          Hero_ForwardThrust(DAT_0071f418 * 53.0 * (float)(longlong)local_c8,&g_heroVelocity,
                             &g_heroVelocity);
        }
        iVar10 = g_heroStateTimer;
        iVar15 = idol::GetAnimDuration(10);
        if ((iVar10 < iVar15) && (dVar28 < (double)g_heroPadMagnitude)) {
          lVar24 = uVar8 - 0x430;
          FUN_005e7e98(lVar24,&g_heroPosition);
          Hero_AddRelativeZ((float)dVar30,(float *)lVar24,(float *)lVar24);
          FUN_005e7e98(uVar8 - 0x420,lVar24);
          dVar32 = (double)local_420;
          dVar28 = (double)mathfunc::cosf(g_heroRotation.z);
          dVar34 = 0.8500000238418579;
          dVar30 = (double)local_41c;
          local_420 = (float)(dVar32 + (double)(float)(dVar28 * 0.8500000238418579));
          dVar28 = (double)FUN_005e8128((double)g_heroRotation.z);
          local_41c = (float)(dVar30 + (double)(float)(dVar28 * dVar34));
          iVar10 = collproc::CollLine(lVar24,uVar8 - 0x420,4,g_heroMobyPtr,0);
          if (iVar10 != 0) {
            DAT_0096a184 = 1;
          }
        }
      }
      else {
        Hero_AttackMotion();
        iVar10 = g_heroStateTimer;
        if (((g_heroState == HELI_PACK_FWD_JUMP) &&
            (iVar15 = idol::GetAnimDuration(10), iVar10 < iVar15)) &&
           (DAT_00969e48 < mobyutil::g_FrameTime * 7.0)) {
          dVar32 = (double)g_heroVelocity;
          dVar28 = (double)mathfunc::cosf(g_heroRotation.z);
          dVar34 = 0.699999988079071;
          dVar30 = (double)DAT_00969dc4;
          g_heroVelocity =
               (float)(dVar32 + (double)(float)((double)(mobyutil::g_FrameTime * 0.7) * dVar28));
          dVar28 = (double)FUN_005e8128((double)g_heroRotation.z);
          DAT_00969dc4 = (float)(dVar30 + (double)(float)((double)(float)((double)mobyutil::
                                                                                  g_FrameTime *
                                                                         dVar34) * dVar28));
          FUN_005e7e98(&DAT_00969e10,&g_heroVelocity);
        }
      }
      if ((DAT_0096a0f0 < g_heroGroundZ) &&
         (DAT_0096a0f0 = DAT_0096a0f0 + mobyutil::g_FrameTime * 6.0, g_heroGroundZ < DAT_0096a0f0))
      {
        DAT_0096a0f0 = g_heroGroundZ;
      }
      if (g_heroPosition.z < DAT_0096a0f0) {
        DAT_0096a0f0 = g_heroPosition.z;
      }
      if ((((DAT_0096a100 < g_heroStateTimer) &&
           (fVar36 = Hero_RelativeZComponent(&g_heroVelocity), fVar36 < 0.001)) &&
          ((DAT_0096a0fc == 0 || (DAT_0096a0b4 < g_heroStateTimer)))) &&
         (DAT_0096a0fe = 1, DAT_0096a0d8 != 0.0)) {
        DAT_0096a180 = DAT_0096a0d8;
      }
      if (g_heroType == '\0') {
        Hero_SetBankTwistSway();
      }
      if (g_heroType == '\x01') {
        Hero_SetClankBankTwistSway();
      }
      iVar10 = g_heroStateTimer;
      if ((g_heroState == THRUSTER_PACK_FORWARD_JUMP) || (g_heroState == THRUSTER_PACK_HIGH_JUMP)) {
        uVar7 = 0;
        iVar15 = idol::GetAnimDuration(0xc);
        if (iVar15 < iVar10) {
          uVar7 = 2;
        }
        mobyutil::UpdateMotionBlur(&DAT_0096b350,uVar7);
      }
      iVar10 = g_heroStateTimer;
      if (((g_heroState == THRUSTER_PACK_FORWARD_JUMP) &&
          (iVar15 = idol::GetAnimDuration(8), iVar15 < iVar10)) && (g_heroAnimFrame < 28.0)) {
        Hero_GetHeroRelativeVector(0.8,0.0,0.3,(float *)(uVar8 - 0x410));
        uVar9 = ZEXT48(g_heroMobyPtr);
        iVar10 = collproc::CollMobySphere(0x3fecccccc0000000,uVar8 - 0x410);
        if (iVar10 != 0) {
          FUN_005e822c(0x401c000000000000,uVar8 - 0x400,&DAT_00969de0);
          iVar15 = 0;
          if (0 < iVar10) {
            iVar12 = 0;
            do {
              bVar19 = mobyutil::MB_isCrate(*(undefined4 *)((int)&DAT_00a14a00 + iVar12));
              if (bVar19) {
                mobyutil::CollDamageMobyDirect
                          (1.0,*(MobyInstance **)((int)&DAT_00a14a00 + iVar12),g_heroMobyPtr,0x10000
                           ,(int)uVar9,&g_heroPosition.x,afStack_400);
              }
              iVar15 = iVar15 + 1;
              iVar12 = iVar12 + 4;
            } while (iVar15 < iVar10);
          }
        }
      }
      if (((g_heroState == TAKING_DAMAGE_LAVA) && (DAT_0096a0fe == 0)) &&
         (mobyutil::g_FrameTime * 1.5 < DAT_00969dc8)) {
        Hero_SpawnLavaAssParticles();
      }
      Hero_JumpThrustGrav();
      Hero_CheckLedgeAhead();
      goto LAB_000b703c;
    }
    if ((int)g_heroState < 0x77) {
      if ((int)g_heroState < 0x6e) {
        if (0x69 < (int)g_heroState) {
          if (0x6a < (int)g_heroState) {
            if ((int)g_heroState < 0x6d) {
              dVar28 = 5.0;
              if ((g_heroPosition.x < 5.0) || (g_heroPosition.y < 5.0)) {
                Hero_GetHoverboardRespawn(afStack_830,afStack_820);
                DAT_0096a554 = local_818;
                Hero_Warp(afStack_830,afStack_820,0x6b,1);
              }
              if (DAT_0096a59c == 0) {
                if (0.3 < DAT_0096a598 - g_heroGroundZ) {
                  DAT_0096a59c = 1;
                }
              }
              else if ((DAT_00969fec == 0) && (DAT_0096a57c == 0)) {
                DAT_0096a59c = 0;
              }
              bVar19 = false;
              DAT_0096a598 = g_heroGroundZ;
              if ((DAT_0096a564 != 0) && (DAT_0096a548 != mobyutil::g_FrameTime * 11.0)) {
                bVar19 = true;
              }
              if ((bVar19) && (DAT_0096b48c == 0)) {
                mobyutil::CreateMotionBlur(g_heroMobyPtr,&DAT_0096b350);
                mobyutil::AddMotionBlurElem(&DAT_0096b350,0x28,1);
                mobyutil::AddMotionBlurElem(&DAT_0096b350,0x14,2);
                mobyutil::AddMotionBlurElem(&DAT_0096b350,10,3);
              }
              uVar7 = 0;
              if ((DAT_0096a564 == 0) || (DAT_0096a548 == mobyutil::g_FrameTime * 11.0)) {
                uVar7 = 1;
              }
              mobyutil::UpdateMotionBlur(&DAT_0096b350,uVar7);
              if (g_heroBoardMoby != (MobyInstance *)0x0) {
                if (DAT_0096a564 == 0) {
                  if (((DAT_0096bf14 != -1) &&
                      (sound::g_SoundChannels[DAT_0096bf14].pMoby == g_heroBoardMoby)) &&
                     (sound::g_SoundChannels[DAT_0096bf14].state != '\0')) {
                    sound::sound_Kill(DAT_0096bf14);
                  }
                  DAT_0096bf14 = -1;
                }
                else {
                  Hero_PlayLoopSound(7,g_heroBoardMoby,2);
                }
                if (DAT_0096a59c == 0) {
                  Hero_PlayLoopSound(6,g_heroBoardMoby,0);
                }
                else {
                  if (((DAT_0096bf10 != -1) &&
                      (sound::g_SoundChannels[DAT_0096bf10].pMoby == g_heroBoardMoby)) &&
                     (sound::g_SoundChannels[DAT_0096bf10].state != '\0')) {
                    sound::sound_Kill(DAT_0096bf10);
                  }
                  DAT_0096bf10 = -1;
                }
              }
              DAT_0096a56d = '\0';
              if ((DAT_0096a57c != 0) && ((g_downButtons & (R1|L1|R2|L2)) != 0)) {
                DAT_0096a56d = '\x01';
              }
              if (((((g_downButtons & SQUARE) == 0) && (DAT_0096a5ac == 0)) || (DAT_0096a544 == 0))
                 && (DAT_0096a5a4 == 0)) {
                DAT_0096a564 = 0;
                mobyutil::AccelDelt(1.2217305,DAT_0071f40c * 0.007,DAT_0071f40c * 0.3,
                                    mobyutil::g_FrameTime * 0.5235988,(float *)&DAT_0096a55c,
                                    0x720000,(float *)&DAT_0096a538);
                fVar36 = mobyutil::Delt(0.0,DAT_0071f418 * 10.0,&DAT_0096a548);
                dVar30 = (double)fVar36;
              }
              else {
                fastfunc::FastDecTimerS16(&DAT_0096a5ac);
                if (DAT_0096a564 == 0) {
                  DAT_0096a5ac = idol::GetAnimDuration(0x14);
                }
                DAT_0096a564 = 1;
                mobyutil::AccelDelt(1.2217305,DAT_0071f40c * 0.01,DAT_0071f40c * 0.3,
                                    mobyutil::g_FrameTime * 0.6981317,(float *)&DAT_0096a55c,1,
                                    (float *)&DAT_0096a538);
                fVar36 = mobyutil::Delt(mobyutil::g_FrameTime * 11.0,DAT_0071f418 * 20.0,
                                        &DAT_0096a548);
                if (DAT_0096a5a4 == 0) {
                  dVar30 = (double)fastfunc::FastDecTimerS32((double)fVar36,&DAT_0096a544);
                }
                else {
                  dVar30 = (double)fastfunc::FastDecTimerS32((double)fVar36,&DAT_0096a5a4);
                }
                if (g_heroBoardMoby != (MobyInstance *)0x0) {
                  g_heroBoardMoby->setByGroup = '\x01';
                }
              }
              if (g_framesNotGrounded == 0) {
                uVar7 = 0x3ff0000000000000;
                if (g_heroGroundDist < 1.0) {
                  FUN_005e7f98(0x3ff0000000000000,&DAT_0096a470,&DAT_00969de0);
                  FUN_005e7e98(&DAT_0096a460,&g_heroGroundNormal);
                  FUN_005e7f98(uVar7,&DAT_0096a460,&DAT_0096a460);
                }
                Hero_Turn3D_XYZ((double)(DAT_0071f418 * 52.35988),
                                (double)(DAT_0071f418 * 0.0034906585),0,&DAT_0096a460,uVar8 - 0x1d0)
                ;
              }
              else if (DAT_0096a56d == '\0') {
                FUN_005e7e70(dVar30,&DAT_0096a460);
                DAT_0096a468 = 0x3f800000;
                Hero_Turn3D_XYZ((double)(DAT_0071f418 * 43.633232),(double)(DAT_0071f40c * 0.2),0,
                                &DAT_0096a460,uVar8 - 0x1d0);
              }
              if (DAT_00969f37 == '\0') {
                mobyutil::Delt(mobyutil::g_FrameTime * 15.0,DAT_0071f418 * 17.0,&DAT_0096a53c);
              }
              else {
                mobyutil::Delt(0.0,(float)((double)DAT_0071f418 * dVar28),&DAT_0096a53c);
              }
              g_heroIdealSpeed = DAT_0096a53c + DAT_0096a548;
              if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 36.0,&g_storedNeutralSpeed);
              }
              else {
                mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 36.0,&g_storedNeutralSpeed);
              }
              if (g_framesNotGrounded == 0) {
                DAT_0096a554 = g_heroRotation.z;
                DAT_0096a558 = 0;
                Hero_ThrustToMotion(99999.0);
              }
              else {
                Hero_ThrustToMotion(DAT_0096a554);
                if (((DAT_0096a56d == '\0') && (ABS(g_heroRotation.y) < 0.6981317)) &&
                   (ABS(g_heroRotation.x) < 0.6981317)) {
                  mobyutil::AccelDeltAng
                            ((double)DAT_0096a554,(double)(DAT_0071f40c * 0.04),
                             (double)(DAT_0071f40c * 0.3),(double)(mobyutil::g_FrameTime * 6.981317)
                             ,0x969d78,&DAT_00720000,&DAT_0096a558);
                }
              }
              if ((DAT_00969fec == 0) || (DAT_0096a56d == '\0')) {
                Hero_GetPadFly(DAT_0071f40c * 0.17,&local_810,(float *)&DAT_0096a400);
                dVar30 = (double)GameCamera.rot.radius;
                dVar28 = (double)FUN_005e8338(-(double)local_80c,(double)local_810);
                dVar28 = (double)fastfunc::FastWrapRot((float)dVar30,(float)dVar28);
                g_heroIdealRotZ = (float)dVar28;
                if (0.2 < g_heroPadMagnitude) {
                  fVar2 = 2.9670596;
                  fVar36 = 0.005;
                  if (DAT_00969fec != 0) {
                    fVar2 = 1.7453293;
                    fVar36 = 0.0037;
                  }
                  fVar2 = mobyutil::g_FrameTime * fVar2 * g_heroPadMagnitude;
                  dVar34 = (double)(DAT_0071f40c * fVar36);
                  dVar30 = (double)(DAT_0071f40c * 0.3);
                  dVar28 = (double)fVar2;
                  local_108 = DAT_00969e64;
                  if (g_heroGravityMode == '\0') {
                    dVar32 = (double)mobyutil::AccelDeltAng
                                               ((double)g_heroIdealRotZ,dVar34,dVar30,dVar28,
                                                0x969d78);
                    DAT_00969e68 = (float)dVar32;
                  }
                  else {
                    Hero_Turn3D(DAT_0071f40c * fVar36,DAT_0071f40c * 0.3,fVar2);
                  }
                  if (g_framesNotGrounded != 0) {
                    mobyutil::AccelDeltAng
                              ((double)g_heroIdealRotZ,dVar34,dVar30,dVar28,&DAT_0096a554);
                  }
                }
              }
              else {
                DAT_0096a558 = 0;
                DAT_00969e64 = 0.0;
                FUN_005e7e70(&DAT_0096a400);
              }
              dVar28 = 0.20000000298023224;
              fVar36 = DAT_00969e64;
              if (g_heroPadMagnitude < 0.2) {
                fVar36 = 0.0;
              }
              DAT_00721e88 = 0.2;
              DAT_00721e84 = 0.02;
              DAT_00721e48 = fVar36 * 37.0;
              DAT_00721e44 = fVar36 * -22.0;
              dVar30 = 0.0;
              if (0.0 < fVar36) {
                DAT_00721e40 = DAT_00721e44;
              }
              DAT_00721c74 = 0x3c03126f;
              DAT_00721c78 = 0x3dcccccd;
              DAT_00721c30 = DAT_00721c30 + fVar36 * -11.0;
              if (DAT_00721c30 <= 0.6632251) {
                if (DAT_00721c30 < -0.6632251) {
                  DAT_00721c30 = -0.6632251;
                }
              }
              else {
                DAT_00721c30 = 0.6632251;
              }
              DAT_00721d24 = 0.012;
              DAT_00721d28 = 0.22;
              DAT_00721ce4 = fVar36 * 25.0;
              DAT_00721ce0 = fVar36 * -10.0;
              if ((g_framesNotGrounded != 0) && (DAT_0096a56d != '\0')) {
                DAT_00969e64 = 0.0;
                FUN_005e7e98(uVar8 - 0x800,(ulonglong)DAT_0096a56f * 0x10 + 0x720cc0);
                Hero_GetPadFly((float)((double)DAT_0071f40c * dVar28),&local_7f0,
                               (float *)&DAT_0096a3a0);
                dVar28 = -(double)(mobyutil::g_FrameTime * 12.217304 * local_7f0);
                dVar34 = -(double)(mobyutil::g_FrameTime * 12.217304 * local_7ec);
                DAT_0096a3b0 = (float)((double)DAT_0096a3b0 + dVar28);
                DAT_0096a3b4 = (float)((double)DAT_0096a3b4 + dVar34);
                Hero_RotateAroundPoint
                          (dVar28,dVar34,dVar30,CONCAT44(local_800,local_7fc),
                           CONCAT44(local_7f8,local_7f4));
              }
              Hero_UpdateHoverboardRace();
              sVar16 = g_framesNotGrounded;
              fVar36 = DAT_00969de8;
              if (DAT_00969f37 != '\0') {
                fVar36 = DAT_00969e08;
              }
              DAT_00969dc8 = fVar36 - DAT_0096a540;
              if (g_framesNotGrounded == 0) {
                if (dVar30 <= (double)DAT_00969de8) {
                  if (DAT_00969dc8 < DAT_0096a540 * -1.5) {
                    DAT_00969dc8 = DAT_0096a540 * -1.5;
                  }
                }
                else if (DAT_00969dc8 < DAT_00969de8) {
                  DAT_00969dc8 = DAT_00969de8;
                }
              }
              if (((DAT_0096a57c == 0) && (sVar17 = idol::GetAnimDuration(5), sVar16 < sVar17)) &&
                 (g_heroGroundDist < 0.5)) {
                DAT_00969dc8 = DAT_00969dc8 - DAT_0071f418 * 20.0;
              }
              if (g_heroPosition.z < g_heroGroundZ) {
                g_heroPosition.z = g_heroGroundZ;
              }
              lVar24 = uVar8 - 0x7e0;
              FUN_005e822c(0x4008000000000000,lVar24,&DAT_00969de0);
              FUN_005e7f54(lVar24,lVar24,&g_heroCGPos);
              uVar9 = ZEXT48(g_heroMobyPtr);
              iVar10 = collproc::CollMobySphere(0x3fe6666660000000,lVar24);
              if (iVar10 != 0) {
                FUN_005e822c(0x401c000000000000,uVar8 - 2000,&DAT_00969de0);
                iVar15 = 0;
                if (0 < iVar10) {
                  do {
                    bVar19 = mobyutil::MB_isCrate((&DAT_00a14a00)[iVar15]);
                    if ((bVar19) || (*(short *)((&DAT_00a14a00)[iVar15] + 0xa6) == 0x85)) {
                      mobyutil::CollDamageMobyDirect
                                (1.0,(MobyInstance *)(&DAT_00a14a00)[iVar15],g_heroMobyPtr,0x10000,
                                 (int)uVar9,&g_heroPosition.x,afStack_7d0);
                    }
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < iVar10);
                }
              }
            }
            else {
              if (g_heroBoardMoby != (MobyInstance *)0x0) {
                g_heroBoardMoby->setByGroup = '\x02';
              }
              dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
              local_104 = (float)dVar28;
              dVar28 = 0.0;
              mobyutil::Delt(0.0,DAT_0071f418 * 15.0,&local_104);
              FUN_005e84c0((double)local_104,&g_heroVelocity,&g_heroVelocity);
              puVar20 = &DAT_00969e00;
              dVar30 = (double)(DAT_0071f418 * 27.0);
              Hero_AddGravity(DAT_0071f418 * 27.0,&g_heroVelocity,(float *)&DAT_00969e00);
              dVar34 = -1.0;
              fVar36 = Hero_PredictLand(60.0,(float)dVar30,-1.0);
              iVar10 = fastfunc::FastDoubleToInt((double)fVar36);
              if ((iVar10 == 0) || (dVar30 = 1.0, 16.0 - g_heroAnimFrame <= 1.0)) {
                g_heroAnimSpeed = 1.0;
              }
              else {
                local_c8 = (ulonglong)iVar10;
                dVar32 = 0.5;
                Hero_ScaleAnim(16.0,(float)(longlong)local_c8,0.5,(float)dVar34);
                if (1.2 < g_heroAnimSpeed) {
                  g_heroAnimSpeed = 1.2;
                }
                if (g_heroAnimSpeed < 0.33) {
                  g_heroAnimSpeed = 0.33;
                }
                if (((double)g_heroGroundDist < dVar32) && ((double)g_heroAnimSpeed < dVar30)) {
                  g_heroAnimSpeed = (float)dVar30;
                }
              }
              dVar30 = 6.108652114868164;
              mobyutil::DeltAng((float)dVar28,mobyutil::g_FrameTime * 6.108652,&g_heroRotation.y,
                                (int)puVar20,(int)param_3,0);
              mobyutil::DeltAng((float)dVar28,(float)((double)mobyutil::g_FrameTime * dVar30),
                                &g_heroRotation.x,(int)puVar20,(int)param_3,0);
            }
            goto LAB_000b703c;
          }
LAB_000acc38:
          dVar28 = (double)FUN_005e8030(&g_heroExternalMomentum);
          local_10c = (float)dVar28;
          dVar28 = 0.0;
          mobyutil::Delt(0.0,DAT_0071f418 * 4.0,&local_10c);
          FUN_005e7f98((double)local_10c,&g_heroExternalMomentum,&g_heroExternalMomentum);
          FUN_005e7e98(&g_heroVelocity,&g_heroExternalMomentum);
          iVar10 = fastfunc::FastDecTimerS32(&DAT_0096a5d0);
          if (iVar10 == 2) {
            lVar21 = uVar8 - 0x8c0;
            mobyfunc::GetBonePosition(g_heroMobyPtr,4,lVar21);
            lVar22 = uVar8 - 0x8a0;
            FUN_005e7d64(lVar22,lVar22,&g_heroMobyPtr->transform);
            FUN_005e7f54(lVar21,lVar21,lVar22);
            lVar24 = uVar8 - 0x8b0;
            FUN_005e7e98(lVar24,&DAT_00969de0);
            FUN_005e7f98((double)(mobyutil::g_FrameTime * 1.5),lVar22,lVar22);
            FUN_005e7f54(lVar24,lVar24,lVar22);
            partupd::SpawnPart_34(0x40d89c0000000000,0xbff0000000000000,(Vec4 *)lVar21,(int)lVar24);
            iVar10 = g_heroStateTimer;
            iVar12 = idol::GetAnimDuration(0x28);
            iVar15 = g_heroStateTimer;
            if (iVar10 < iVar12) {
              uVar14 = idol::GetAnimDuration(2);
              uVar11 = idol::GetAnimDuration(5);
              iVar10 = mobyutil::MB_randRange(uVar14,uVar11);
              DAT_0096a5d0 = iVar10 + g_heroStateTimer / 5;
            }
            else {
              iVar10 = idol::GetAnimDuration(0x46);
              if (iVar10 < iVar15) {
                uVar14 = idol::GetAnimDuration(10);
                uVar11 = idol::GetAnimDuration(0x14);
                DAT_0096a5d0 = mobyutil::MB_randRange(uVar14,uVar11);
              }
            }
          }
          if (dVar28 < (double)DAT_0096a5dc) {
            DAT_0096a5dc = (float)dVar28;
          }
          mobyutil::Delt(mobyutil::g_FrameTime * -1.5,DAT_0071f418 * 1.5,&DAT_0096a5dc);
          DAT_00969dc8 = DAT_0096a5dc;
          goto LAB_000b703c;
        }
        if ((int)g_heroState < 0x68) {
          FUN_005e7e70(&g_heroVelocity);
          goto LAB_000b703c;
        }
        if ((int)g_heroState < 0x69) {
          FUN_005e7e70(&g_heroVelocity);
          if (DAT_00969fd4 - g_heroPosition.z <= (float)(longlong)(DAT_0096b340 + 1) * 0.5) {
            DAT_00969dc8 = -mobyutil::g_FrameTime;
          }
          else {
            DAT_00969dc8 = mobyutil::g_FrameTime * -0.25;
          }
          goto LAB_000b703c;
        }
        goto LAB_000b4328;
      }
      if (0x72 < (int)g_heroState) {
        if (0x74 < (int)g_heroState) {
          if ((int)g_heroState < 0x76) {
            Hero_SpawnWaterRings(0xf,0x1e);
            DAT_00969dc8 = 0.0;
            dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
            FUN_005e7ed8((double)(float)(dVar28 * (double)(DAT_0071f408 * -0.07999998 + 1.0)),
                         &g_heroVelocity,&g_heroVelocity);
            Hero_KneeBumpMotion(0);
            Hero_SurfBob();
          }
          else {
            iVar10 = 10 - g_heroStateTimer / 3;
            if (8 < iVar10) {
              iVar10 = 8;
            }
            Hero_SpawnWaterBubbles(iVar10,0);
            DAT_00969dc8 = 0.0;
            dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
            FUN_005e7ed8((double)(float)(dVar28 * (double)(DAT_0071f408 * -0.07999998 + 1.0)),
                         &g_heroVelocity,&g_heroVelocity);
            Hero_KneeBumpMotion(0);
          }
          goto LAB_000b703c;
        }
        if (0x73 < (int)g_heroState) {
          lVar24 = uVar8 - 0x500;
          dVar30 = 0.30000001192092896;
          dVar28 = 0.0;
          Hero_GetHeroRelativeVector(0.3,0.0,1.34,(float *)lVar24);
          if ((g_heroMobyPtr->animationId == 'f') &&
             (Hero_PlayLoopSound(0,g_heroMobyPtr,0), (worldUpdateTime & 1) != 0)) {
            FUN_005e7e98(uVar8 - 0x4f0,lVar24);
            FUN_005e822c(0x3fd99999a0000000,uVar8 - 0x4e0,&DAT_00969de0);
            dVar32 = (double)DAT_0096a2f0;
            dVar34 = (double)mobyutil::MB_randRangeSigned(dVar28,0x3fe0c15240000000);
            dVar34 = (double)fastfunc::FastWrapRot((float)dVar32,(float)dVar34);
            dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar28,mobyutil::g_FrameTime * 4.0);
            dVar31 = (double)local_4e0;
            dVar29 = (double)mathfunc::cosf((float)dVar34);
            dVar26 = (double)local_4dc;
            local_4e0 = (float)(dVar31 + (double)(float)(dVar29 * dVar32));
            dVar34 = (double)FUN_005e8128(dVar34);
            local_4dc = (float)(dVar26 + (double)(float)(dVar34 * dVar32));
            dVar34 = (double)mobyutil::MB_randRangeFloat
                                       (mobyutil::g_FrameTime * 3.0,mobyutil::g_FrameTime * 5.0);
            local_4d8 = (float)dVar34;
            local_4d4 = DAT_0071f418 * -35.0;
            partupd::SpawnPart_25(uVar8 - 0x4f0,uVar8 - 0x4e0,0);
          }
          puVar20 = &DAT_0096a2c0;
          mobyutil::MB_PathFollowToPos
                    (0x408f380000000000,0x4020000000000000,0x4004000000000000,DAT_0096a2d0,lVar24,
                     &DAT_0096a2c0,&DAT_0096a2d4,&DAT_0096a2d8);
          if (DAT_0096a2e0 == 0) {
            lVar21 = uVar8 - 0x4d0;
            mobyutil::MB_PathMoveDist
                      ((double)DAT_0096a2e4,DAT_0096a2d0,lVar21,&DAT_0096a2d4,&DAT_0096a2d8);
            iVar10 = mobyutil::MB_PathStepIndex(DAT_0096a2d0,DAT_0096a2d4,1,DAT_0096a2ec);
            lVar22 = uVar8 - 0x4c0;
            FUN_005e81f0(lVar22,DAT_0096a2d0 + iVar10 * 4 + 4,lVar21);
            dVar34 = (double)FUN_005e8030(lVar22);
            if (0.0010000000474974513 <= dVar34) {
              dVar34 = (double)FUN_005e8338((double)local_4c0,(double)local_4bc);
              DAT_0096a2f0 = (float)dVar34;
              uVar7 = FUN_005e7ebc(lVar22);
              dVar34 = (double)FUN_005e8338(uVar7,(double)local_4b8);
              DAT_0096a2f4 = (float)dVar34;
            }
            else if (DAT_0096a2d4 == iVar10) {
              DAT_0096a2e0 = idol::GetAnimDuration(1);
              goto LAB_000b703c;
            }
            g_heroIdealRotZ = DAT_0096a2f0;
            if (g_heroGravityMode == '\0') {
              dVar34 = (double)mobyutil::AccelDeltAng
                                         ((double)DAT_0096a2f0,(double)(DAT_0071f40c * 0.018),
                                          (double)(DAT_0071f40c * 0.2),
                                          (double)(mobyutil::g_FrameTime * 6.4577184),0x969d78);
              DAT_00969e68 = (float)dVar34;
            }
            else {
              Hero_Turn3D(DAT_0071f40c * 0.018,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 6.4577184)
              ;
            }
            fVar36 = mobyutil::Delt(mobyutil::g_FrameTime * 14.0,DAT_0071f418 * 9.0,&DAT_0096a2e4);
            FUN_005e81f0((double)fVar36,&g_heroVelocity,lVar21,&DAT_0096a2c0);
            lVar22 = uVar8 - 0x4b0;
            FUN_005e81f0(lVar22,&DAT_0096a2c0,lVar24);
            dVar34 = (double)FUN_005e8030(lVar22);
            local_d4 = (float)-dVar34;
            fVar36 = mobyutil::AccelDelt((float)dVar28,
                                         (float)((double)DAT_0071f40c * 0.05000000074505806),
                                         (float)((double)DAT_0071f40c * dVar30),
                                         mobyutil::g_FrameTime * 10.0,&local_d4,(int)puVar20,
                                         &DAT_0096a2f8);
            dVar28 = (double)FUN_005e8030((double)fVar36,lVar22);
            if (dVar28 < (double)DAT_0096a2f8) {
              DAT_0096a2f8 = (float)dVar28;
            }
            if ((double)DAT_0096a2f8 < dVar28) {
              FUN_005e7f98((double)DAT_0096a2f8,lVar22,lVar22);
            }
            FUN_005e7f54(&g_heroPosition,&g_heroPosition,lVar22);
          }
          else {
            FUN_005e7e98(&g_heroVelocity,&DAT_00969df0);
            DAT_0096a2e0 = DAT_0096a2e0 + 1;
            DAT_00969dc8 = DAT_00969dc8 - DAT_0071f418 * 24.0;
          }
          goto LAB_000b703c;
        }
LAB_000b1630:
        bVar19 = false;
        if ((DAT_0096afc4 != '\0') && (DAT_0096bf84 < 0.25)) {
          bVar19 = true;
        }
        if (DAT_0096bd89 != '\0' || bVar19) {
          if (mobyutil::g_FrameTime < DAT_00969e44) {
            Hero_SpawnWaterWake(0,2);
          }
          if (mobyutil::g_FrameTime * 0.5 < DAT_00969e44) {
            Hero_SpawnWaterDrops(2,4);
          }
          Hero_SpawnWaterBubbles(5,2);
        }
        if ((DAT_00969e44 < mobyutil::g_FrameTime * 0.3) && (0.85 < g_heroPadMagnitude)) {
          DAT_0096a098 = 1;
        }
        if (((ABS(DAT_00969e68) < 0.05235988) || (DAT_0096bd88 != '\0')) || (DAT_0096bd68 == 1)) {
          DAT_0096a098 = 0;
        }
        if ((DAT_0096a09e != 0) && ((ABS(DAT_00969e68) < 0.06981317 || (DAT_0096bd88 != '\0')))) {
          DAT_0096a09e = 0;
        }
        Hero_GetIdealThrustForWalk();
        dVar28 = 0.0;
        if (0.0 < DAT_0096a610) {
          dVar30 = 0.699999988079071;
          Hero_UpdateExternalThrust(0.7,0.0);
          fVar36 = Hero_ForwardComponent(DAT_0096a604);
          g_heroIdealSpeed = g_heroIdealSpeed + fVar36;
          if (g_heroIdealSpeed < (float)((double)mobyutil::g_FrameTime * dVar30)) {
            g_heroIdealSpeed = (float)((double)mobyutil::g_FrameTime * dVar30);
          }
          FUN_005e7e70(&DAT_0096a600);
        }
        dVar34 = 1.0;
        dVar30 = dVar34;
        if ((DAT_0096bd68 == 1) && (DAT_0096a09e == 0)) {
          if (g_heroGravityMode == '\0') {
            dVar28 = (double)mobyutil::AccelDeltAng
                                       ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.008),
                                        (double)(DAT_0071f40c * 0.15),
                                        (double)(mobyutil::g_FrameTime * 9.948377),0x969d78);
            DAT_00969e68 = (float)dVar28;
          }
          else {
            Hero_Turn3D(DAT_0071f40c * 0.008,DAT_0071f40c * 0.15,mobyutil::g_FrameTime * 9.948377);
          }
        }
        else {
          if (DAT_0096bd88 == '\0') {
            if ((g_heroPadMagnitude < 0.8) && (0.5235988 < DAT_00969e68)) {
              dVar30 = dVar28;
            }
          }
          else {
            dVar30 = (double)(1.0 - DAT_00969e68 * 0.55);
            if (dVar30 < dVar28) {
              dVar30 = dVar28;
            }
          }
          if (g_heroPadMagnitude <= DAT_00723314) {
            fVar36 = DAT_0071f40c * 0.005 * (g_heroPadMagnitude + 0.35);
            fVar2 = mobyutil::g_FrameTime * 4.712389 * (g_heroPadMagnitude + 0.35);
            if (g_heroGravityMode == '\0') {
              dVar28 = (double)mobyutil::AccelDeltAng
                                         ((double)g_heroIdealRotZ,(double)fVar36,
                                          (double)(DAT_0071f40c * 0.1),(double)fVar2,0x969d78);
              DAT_00969e68 = (float)dVar28;
            }
            else {
              Hero_Turn3D(fVar36,DAT_0071f40c * 0.1,fVar2);
            }
          }
          else {
            Hero_TurnWalk();
          }
        }
        Hero_SetBankTwistSway();
        Hero_SetBackpackSway();
        fVar36 = 8.5;
        if (DAT_0096a09e != 0) {
          dVar28 = (double)(2.6179938 - DAT_00969e68);
          if (dVar34 < (double)(2.6179938 - DAT_00969e68)) {
            dVar28 = dVar34;
          }
          if (dVar28 < 0.20000000298023224) {
            dVar28 = 0.20000000298023224;
          }
          g_heroIdealSpeed = (float)((double)g_heroIdealSpeed * dVar28);
          fVar36 = 17.0;
        }
        if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
          mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * fVar36,&g_storedNeutralSpeed);
        }
        else {
          mobyutil::Delt(g_heroIdealSpeed,(float)((double)(DAT_0071f418 * 7.5) * dVar30),
                         &g_storedNeutralSpeed);
        }
        if ((DAT_0096a098 == 0) || (g_onMagnerail != 0)) {
          Hero_ThrustToMotion(99999.0);
        }
        else {
          Hero_ThrustToMotion(g_heroIdealRotZ);
        }
        Hero_KneeBumpMotion(1);
        if (DAT_00969ed4 != 0) {
          Hero_EdgeStop(0x4014000000000000,0x3fc99999a0000000);
        }
        if (g_framesNotGrounded == 0) {
          Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
        }
        else {
          Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
          Hero_WallSloopMotion();
        }
        goto LAB_000b703c;
      }
      if ((int)g_heroState < 0x6f) {
        if (g_heroBoardMoby != (MobyInstance *)0x0) {
          g_heroBoardMoby->setByGroup = '\x02';
          param_2 = pMVar4;
        }
        FUN_005e7e70(&g_heroVelocity);
        Hero_ApplyTaper(DAT_0071f418 * 4.5);
        Hero_SurfBob();
        dVar30 = 6.108652114868164;
        dVar28 = 0.0;
        mobyutil::DeltAng(0.0,mobyutil::g_FrameTime * 6.108652,&g_heroRotation.y,(int)param_2,
                          (int)param_3,0);
        mobyutil::DeltAng((float)dVar28,(float)((double)mobyutil::g_FrameTime * dVar30),
                          &g_heroRotation.x,(int)param_2,(int)param_3,0);
        goto LAB_000b703c;
      }
      if ((int)g_heroState < 0x70) {
        FUN_005e7e70(&g_heroVelocity);
        dVar30 = 6.108652114868164;
        dVar28 = 0.0;
        mobyutil::DeltAng(0.0,mobyutil::g_FrameTime * 6.108652,&g_heroRotation.y,(int)param_2,
                          (int)param_3,0);
        mobyutil::DeltAng((float)dVar28,(float)((double)mobyutil::g_FrameTime * dVar30),
                          &g_heroRotation.x,(int)param_2,(int)param_3,0);
        mobyutil::DeltAng(DAT_0096a584,mobyutil::g_FrameTime * 8.726646,&g_heroRotation.z,
                          (int)param_2,(int)param_3,0);
        goto LAB_000b703c;
      }
    }
    else {
      if ((int)g_heroState < 0x7d) {
        if ((int)g_heroState < 0x7a) {
          if ((int)g_heroState < 0x78) {
            DAT_0096bd8c = 1;
            dVar28 = 8.726646423339844;
            mobyutil::Delt(DAT_0096a630,DAT_0071f418 * 8.726646,&DAT_0096a628);
            mobyutil::Delt(DAT_0096a634,(float)((double)DAT_0071f418 * dVar28),&DAT_0096a62c);
            Hero_RotateAroundCG((double)DAT_0096a628,(double)DAT_0096a62c,0);
            dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
            FUN_005e7ed8((double)(float)(dVar28 * (double)(DAT_0071f408 * -0.100000024 + 1.0)),
                         &g_heroVelocity,&g_heroVelocity);
            Hero_AddGravity(DAT_0096a620,&g_heroVelocity,&g_heroVelocity);
            fVar36 = Hero_RelativeZComponent(&g_heroVelocity);
            if (fVar36 < mobyutil::g_FrameTime * -50.0) {
              Hero_SetRelativeZ(mobyutil::g_FrameTime * -50.0,&g_heroVelocity,&g_heroVelocity);
            }
          }
          else if (0x78 < (int)g_heroState) {
            g_heroIdealRotZ = DAT_00969fcc;
            g_heroIdealSpeed = mobyutil::g_FrameTime * 5.5;
            Hero_JumpTranslation(DAT_0071f418 * 25.0);
            Hero_AddGravity(DAT_0071f418 * 18.0,&g_heroVelocity,(float *)&DAT_00969e00);
          }
          goto LAB_000b703c;
        }
        if (0x7a < (int)g_heroState) {
          if ((int)g_heroState < 0x7c) {
            FUN_005e7e70(&g_heroVelocity);
            DAT_00969dc8 = -mobyutil::g_FrameTime;
          }
          else {
            Hero_SpawnLavaDeathParts();
            FUN_005e7e70(&g_heroVelocity);
            DAT_00969dc8 = -mobyutil::g_FrameTime;
          }
          goto LAB_000b703c;
        }
LAB_000b0c58:
        dVar30 = 0.0;
        mobyutil::Delt(0.0,DAT_0071f418 * 24.0,&g_storedNeutralSpeed);
        dVar28 = (double)mathfunc::cosf(DAT_0096a748);
        g_heroVelocity = (float)(dVar28 * (double)g_storedNeutralSpeed);
        dVar28 = (double)FUN_005e8128((double)DAT_0096a748);
        DAT_00969dc4 = (float)(dVar28 * (double)g_storedNeutralSpeed);
        if (dVar30 < (double)g_heroGroundDist) {
          dVar30 = (double)(DAT_00969df8 - DAT_0071f418 * 25.0);
        }
        DAT_00969dc8 = (float)dVar30;
        dVar28 = (double)fastfunc::FastWrapRot(DAT_0096a748,3.1415927);
        g_heroIdealRotZ = (float)dVar28;
        if (g_heroGravityMode == '\0') {
          dVar28 = (double)mobyutil::AccelDeltAng
                                     ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.05),
                                      (double)(DAT_0071f40c * 0.2),
                                      (double)(mobyutil::g_FrameTime * 15.009831),0x969d78,
                                      &DAT_00720000,&DAT_00969e64);
          DAT_00969e68 = (float)dVar28;
        }
        else {
          Hero_Turn3D(DAT_0071f40c * 0.05,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 15.009831);
        }
        goto LAB_000b703c;
      }
      if (g_heroState == DEATH_WATER_LASER) goto LAB_000acc38;
      if (g_heroState == THRUSTER_PACK_HOVER) {
        Hero_PlayLoopSound(4,g_heroMobyPtr,0x12);
        bVar19 = g_heroGroundDist <= 0.7;
        dVar30 = (double)(mobyutil::g_FrameTime * 4.0);
        dVar28 = (double)(mobyutil::g_FrameTime * 5.75);
        if (!bVar19) {
          dVar28 = dVar30;
        }
        Hero_GetIdealThrustFromPad((double)(float)((double)g_heroPadMagnitude * dVar28));
        dVar28 = 0.20000000298023224;
        if ((0.2 < g_heroPadMagnitude) && ((g_downButtons & (R2|L2)) == 0)) {
          fVar36 = mobyutil::g_FrameTime * 5.934119 * g_heroPadMagnitude;
          if (g_heroGravityMode == '\0') {
            dVar34 = (double)mobyutil::AccelDeltAng
                                       ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.027),
                                        (double)(DAT_0071f40c * 0.3),(double)fVar36,0x969d78);
            DAT_00969e68 = (float)dVar34;
          }
          else {
            Hero_Turn3D(DAT_0071f40c * 0.027,DAT_0071f40c * 0.3,fVar36);
          }
        }
        if ((g_downButtons & (R2|L2)) != 0) {
          dVar34 = (double)g_heroIdealRotZ;
          g_heroIdealRotZ = GameCamera.rot.radius;
          if (g_heroGravityMode == '\0') {
            dVar32 = (double)mobyutil::AccelDeltAng
                                       ((double)GameCamera.rot.radius,(double)(DAT_0071f40c * 0.017)
                                        ,(double)(DAT_0071f40c * 0.3),
                                        (double)(mobyutil::g_FrameTime * 4.712389),0x969d78,
                                        &DAT_00720000,&DAT_00969e64);
            DAT_00969e68 = (float)dVar32;
          }
          else {
            Hero_Turn3D(DAT_0071f40c * 0.017,DAT_0071f40c * 0.3,mobyutil::g_FrameTime * 4.712389);
          }
          g_heroIdealRotZ = (float)dVar34;
        }
        fVar36 = 7.0;
        if ((double)g_heroPadMagnitude < dVar28) {
          fVar36 = 3.5;
        }
        fVar36 = DAT_0071f418 * fVar36;
        if ((DAT_0096afc2 != '\0') &&
           (fVar36 = DAT_0071f418 * 3.7, (double)g_heroPadMagnitude < dVar28)) {
          fVar36 = DAT_0071f418 * 1.2;
        }
        Hero_JumpTranslation(fVar36);
        Hero_SetBankTwistSway();
        Hero_KneeBumpMotion(1);
        if (bVar19) {
          mobyutil::AccelDelt(g_heroGroundZ + 0.17,DAT_0071f40c * 0.02,DAT_0071f40c * 0.35,
                              mobyutil::g_FrameTime * 2.5,&g_heroPosition.z,0x720000,&DAT_00969fe4);
        }
        else {
          Hero_CancelGravity(&g_heroVelocity,&g_heroVelocity);
          Hero_AddGravity((float)(dVar30 * 0.7200000286102295),&g_heroVelocity,&g_heroVelocity);
          DAT_00969fe4 = DAT_00969dc8;
        }
        goto LAB_000b703c;
      }
      if (g_heroState != DEATH_LASER) {
        if (g_heroState == DEATH_ICE) {
          if ((DAT_0096a384 == (MobyInstance *)0x0) &&
             (DAT_0096a384 = mobyfunc::CreateMoby(ICE_CUBE), DAT_0096a384 != (MobyInstance *)0x0)) {
            FUN_005e7e98(&DAT_0096a384->pos,&g_heroPosition);
            FUN_005e7e98(&DAT_0096a384->rotation,&g_heroRotation);
            DAT_0096a384->drawDistance = 0x40;
            DAT_0096a384->enabled = '\x01';
            DAT_0096a384->updateDistance = '\0';
            DAT_0096a384->alpha = '\0';
            DAT_0096a384->modeBits = DAT_0096a384->modeBits | DISABLE_Z_WRITE;
            mobyfunc::UpdateMobyTransform(DAT_0096a384);
            sound::PlayMobySound(0,0,DAT_0096a384);
          }
          if (DAT_0096a384 != (MobyInstance *)0x0) {
            cVar18 = fastfunc::FastDoubleToInt((double)(DAT_0071f408 * 5.0));
            DAT_0096a384->alpha = DAT_0096a384->alpha + cVar18;
            if (0x80 < (byte)DAT_0096a384->alpha) {
              DAT_0096a384->alpha = -0x80;
            }
            FUN_005e7e98(&DAT_0096a384->pos,&g_heroMobyPtr->pos);
            FUN_005e7e98(&DAT_0096a384->rotation,&g_heroMobyPtr->rotation);
            mobyfunc::UpdateMobyTransform(DAT_0096a384);
          }
          DAT_00969dc8 = 0.0;
          dVar28 = (double)FUN_005e7ebc(&g_heroVelocity);
          FUN_005e7ed8((double)(float)(dVar28 * (double)(DAT_0071f408 * -0.07999998 + 1.0)),
                       &g_heroVelocity,&g_heroVelocity);
          Hero_SurfBob();
        }
        else if (g_heroState == UNK_7D) {
          FUN_005e7e70(&g_heroVelocity);
          DAT_00969dc8 = mobyutil::g_FrameTime * -0.35;
        }
        goto LAB_000b703c;
      }
    }
  }
LAB_000ab3bc:
  if (DAT_0096bd89 != '\0') {
    Hero_SpawnWaterRings(0xf,0x1e);
  }
  if (DAT_0096afc2 == '\0') {
    Hero_UpdateExternalThrust(0.5,mobyutil::g_FrameTime * 2.0);
  }
  else {
    Hero_UpdateExternalThrust(0.7,0.0);
  }
  dVar30 = 0.0;
  uVar7 = Hero_EdgeStop(0x400d9999a0000000,0);
  dVar28 = 1.0;
  Hero_GetIdealThrustFromPad(0x3ff0000000000000,uVar7,0);
  if (((g_heroState == FIRST_PERSON_VIEW) || (g_heroState == WEAPON_FIRST_PERSON_VIEW)) &&
     (g_heroInvisible != '\0')) {
    FUN_005e7d64(&DAT_00969e50,uVar8 - 0x930,0x951710);
    g_heroIdealRotZ = GameCamera.rot.radius;
    if (g_heroGravityMode == '\0') {
      dVar34 = (double)mobyutil::AccelDeltAng
                                 ((double)GameCamera.rot.radius,(double)DAT_0071f40c,dVar30,
                                  (double)(mobyutil::g_FrameTime * 174.53293),0x969d78,&DAT_00720000
                                  ,&DAT_00969e64);
      DAT_00969e68 = (float)dVar34;
    }
    else {
      Hero_Turn3D(DAT_0071f40c,(float)dVar30,mobyutil::g_FrameTime * 174.53293);
    }
    if ((0 < DAT_00a1a850) && (iVar10 = fastfunc::FastDecTimerS32(&DAT_00a1a850), iVar10 != 0)) {
      if (CHAR_ARRAY_00a0feec._144_2_ != -1) {
        CHAR_ARRAY_00a0feec._144_2_ = CHAR_ARRAY_00a0feec._144_2_ + 1;
      }
      iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._146_2_ < iVar10 / 600) {
        iVar10 = idol::GetAnimDuration(update::g_GameFrameCount);
        sVar16 = (short)(iVar10 >> 0x1f);
        CHAR_ARRAY_00a0feec._146_2_ =
             ((short)(iVar10 / 600) + sVar16) -
             ((short)((short)(iVar10 / 0x2580000) + sVar16) >> 0xf);
      }
      DAT_00a1a850 = -1;
      DAT_00a1a854 = DAT_00a1a854 + 1;
      CHAR_ARRAY_00a0feec._148_4_ = CHAR_ARRAY_00a0feec._148_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
  }
  if ((g_heroState != STOPPING) || (iVar10 = Hero_UpdateWeaponReadyAnim(), iVar10 == 0)) {
    if (((g_heroState == CROUCHING) || (g_heroState == UNK_17)) &&
       (((0.2 < g_heroPadMagnitude || (g_heroMobyPtr->animationId == '\x0e')) ||
        (g_heroMobyPtr->animationId == '\x0f')))) {
      if (g_heroState == CROUCHING) {
        if (g_heroGravityMode == '\0') {
          dVar34 = (double)mobyutil::AccelDeltAng
                                     ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.002),
                                      (double)(DAT_0071f40c * 0.07),
                                      (double)(mobyutil::g_FrameTime * 6.981317),0x969d78,
                                      &DAT_00720000,&DAT_00969e64);
          DAT_00969e68 = (float)dVar34;
        }
        else {
          Hero_Turn3D(DAT_0071f40c * 0.002,DAT_0071f40c * 0.07,mobyutil::g_FrameTime * 6.981317);
        }
      }
      else if (g_heroState == UNK_17) {
        Hero_GunTurnWalk();
      }
      if (ABS(DAT_00969e64) <= mobyutil::g_FrameTime * 0.34906584) {
        if ((double)DAT_00969e64 == dVar30) {
          uVar25 = 0xd;
          if (g_heroState == UNK_17) {
            uVar25 = Hero_GetIdleAnim(0);
          }
          if (g_heroMobyPtr->animationId != uVar25) {
            iVar10 = idol::GetAnimDuration(7);
            local_c8 = (ulonglong)iVar10;
            Hero_TransAnim((float)(longlong)local_c8,uVar25,0);
          }
        }
      }
      else {
        uVar25 = ((double)DAT_00969e64 < dVar30) + 0xe;
        if (g_heroMobyPtr->animationId != uVar25) {
          iVar10 = idol::GetAnimDuration(5);
          local_c8 = (ulonglong)iVar10;
          Hero_TransAnim((float)(longlong)local_c8,uVar25,0);
        }
        g_heroAnimSpeed = ABS(DAT_00969e64) / (mobyutil::g_FrameTime * 3.3161256);
        if (g_heroAnimSpeed < 0.55) {
          g_heroAnimSpeed = 0.55;
        }
        if (2.5 < g_heroAnimSpeed) {
          g_heroAnimSpeed = 2.5;
        }
      }
    }
    g_heroIdealSpeed = (float)dVar30;
    if (g_heroState == STOPPING) {
      dVar34 = (double)(float)((double)DAT_00969e4c + dVar28);
      if (dVar28 < (double)(float)((double)DAT_00969e4c + dVar28)) {
        dVar34 = dVar28;
      }
      DAT_0096bf70 = (float)((double)(DAT_0071f418 * 12.0) * dVar34);
      dVar34 = (double)DAT_0096bf70;
      if ((g_heroMobyPtr->updateId == g_heroMobyPtr->animationId) &&
         (g_heroMobyPtr->animationId != '\x14')) {
        dVar32 = (double)(DAT_00969e44 / DAT_0096bf70);
        iVar10 = idol::GetAnimDuration(5);
        if ((dVar32 <= (double)(longlong)iVar10) ||
           (local_c8 = (ulonglong)(byte)g_heroMobyPtr->animationFrame, 5.5 <= (float)local_c8)) {
          local_c8 = (ulonglong)(byte)g_heroMobyPtr->animationFrame;
          if (6.5 < (float)local_c8) {
            g_heroAnimSpeed = (float)dVar28;
          }
        }
        else {
          Hero_ScaleAnim(13.0,(float)dVar32,0.5,-1.0);
          if (1.1 < g_heroAnimSpeed) {
            g_heroAnimSpeed = 1.1;
          }
        }
      }
    }
    else if (g_heroState == CROUCHING) {
      if (DAT_0096afc2 == '\0') {
        fVar36 = 6.48;
      }
      else {
        fVar36 = 1.7;
      }
      dVar34 = (double)(DAT_0071f418 * fVar36);
    }
    else {
      dVar34 = (double)(DAT_0071f418 * 12.6);
    }
    if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
      fVar36 = mobyutil::Delt(g_heroIdealSpeed,(float)dVar34,&g_storedNeutralSpeed);
    }
    else {
      fVar36 = mobyutil::Delt(g_heroIdealSpeed,(float)dVar30,&g_storedNeutralSpeed);
    }
    FUN_005e7e70((double)fVar36,&g_heroVelocity);
    Hero_ApplyTaper((float)dVar34);
    if ((DAT_0096afc7 == '\0') || (UnlockableItems.magneboots == '\0')) {
      Hero_KneeBumpMotion(0);
      if (g_framesNotGrounded == 0) {
        Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
      }
      else {
        Hero_AddGravity(DAT_0071f418 * 25.0,&g_heroVelocity,(float *)&DAT_00969e00);
        Hero_WallSloopMotion();
      }
    }
    else if (g_heroGroundDist <= 0.2) {
      Hero_AddGravity(DAT_0071f418 * 54.0,&g_heroVelocity,&g_heroVelocity);
      if (g_standingOnMoby != 0) {
        FUN_005e7e98(&g_heroPosition,&g_heroGroundPoint);
        g_heroGroundDist = (float)dVar30;
        g_framesNotGrounded = 0;
      }
    }
    else {
      Hero_AddGravity(DAT_0071f418 * 24.0,&g_heroVelocity,(float *)&DAT_00969df0);
    }
    if (DAT_0096bfd4 != 0) {
      Hero_SpawnLavaDeathParts();
    }
  }
LAB_000b703c:
  if (iVar6 != DAT_0096bd68) {
    DAT_00969e80 = 0;
  }
  if (uVar1 != pMVar5->animationId) {
    DAT_00969e84 = 0;
  }
  return;
}



