//==== 00340168  ns=mobyupdate_helpers  size=0x14
// sig: undefined M317_00340168(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M317_00340168(void)

{
  DAT_008120c4 = 0x10000;
  return;
}



//==== 00340190  ns=mobyupdate_helpers  size=0x3f4
// sig: undefined M317_Gaspar_SubmitOcean(void)
// callers(0): 
// callees(11): 00066598 draw::RebuildSharedWaveTables; 00071170 stub::STUB_00071170; 00074780 draw::FastDrawStripFog; 00077048 draw::DrawsFlowingLava; 00174f80 vuchain::SetGSReg; 0017e4c8 water::PopZoneFog; 0017e558 water::SubmitZone; 004d5fe4 idol_draw::DrawDepth; 004fe098 idol::AllocateMemAlign; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd

void mobyupdate_helpers::M317_Gaspar_SubmitOcean(void)

{
  uint uVar1;
  uint uVar2;
  RsxCmd *pRVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  RenderingStep *pRVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  
  uVar1 = worldUpdateTime / 0x14;
  draw::DrawsFlowingLava
            ((double)((float)(longlong)worldUpdateTime * 0.05 - (float)(longlong)(int)uVar1),
             &DAT_008324c0,0x6c,(uVar1 & 0xf) + 0x2c,(uVar1 + 1 & 0xf) + 0x2c);
  dVar20 = (double)water::SubmitZone(&OCEAN_GASPAR);
  OceanFogNearDist = ViewContext.fogNearDist;
  OceanFogFarDist = ViewContext.fogFarDist;
  OceanFogNearIntensity = ViewContext.fogNearIntensity;
  OceanFogFarIntensity = ViewContext.fogFarIntensity;
  OceanFogR = ViewContext.fogR;
  OceanFogG = ViewContext.fogG;
  OceanFogB = ViewContext.fogB;
  if (LevelFogMode != 1) {
    ViewContext.fogNearDist = OCEAN_GASPAR.fogNearDist;
    ViewContext.fogFarDist = OCEAN_GASPAR.fogFarDist;
    ViewContext.fogNearIntensity = OCEAN_GASPAR.fogNearIntensity;
    ViewContext.fogFarIntensity = OCEAN_GASPAR.fogFarIntensity;
    ViewContext.fogR = (int)OCEAN_GASPAR.fogR;
    ViewContext.fogG = (int)OCEAN_GASPAR.fogG;
    ViewContext.fogB = (int)OCEAN_GASPAR.fogB;
    draw::RebuildSharedWaveTables();
  }
  uVar8 = idol_draw::PackCmd(0,1,2,1,OCEAN_GASPAR.depth);
  vuchain::SetGSReg(3,uVar8);
  stub::STUB_00071170();
  lVar19 = 0x80;
  iVar9 = 0;
  do {
    puVar14 = DAT_00902ec8;
    *(undefined4 *)((int)DAT_00902ec8 + iVar9) = 0x8e7c75ff;
    *(undefined4 *)((int)puVar14 + iVar9 + 4) = 0x8e7c75ff;
    lVar19 = lVar19 + -1;
    iVar9 = iVar9 + 8;
  } while (lVar19 != 0);
  iVar9 = 0;
  iVar18 = 0;
  do {
    iVar10 = fastfunc::FastCheckBsphereInView(0x4070000000000000,&DAT_00835800 + iVar18);
    if (iVar10 != -1) {
      iVar10 = *(int *)((int)&DAT_0083581c + iVar18);
      lVar17 = (longlong)iVar10;
      pfVar5 = *(float **)((int)&PTR_DAT_00835814 + iVar18);
      lVar19 = lVar17;
      pfVar6 = (float *)(DAT_00902ec8 + 0x400);
      iVar11 = iVar10;
      while (0 < iVar11) {
        lVar19 = lVar19 + -1;
        *pfVar6 = *pfVar5 * 0.5;
        pfVar6[1] = pfVar5[1] * 0.5;
        pfVar5 = pfVar5 + 2;
        pfVar6 = pfVar6 + 2;
        iVar11 = (int)lVar19;
      }
      puVar12 = (undefined4 *)
                idol::AllocateMemAlign(FrameHeap,(int)(lVar17 << 5) - (int)(lVar17 << 2),0x10);
      puVar15 = *(undefined4 **)((int)&PTR_DAT_00835810 + iVar18);
      puVar13 = DAT_00902ec8 + 0x400;
      lVar19 = lVar17;
      puVar14 = DAT_00902ec8;
      puVar16 = puVar12;
      if (iVar10 != 0) {
        do {
          lVar19 = lVar19 + -1;
          *puVar16 = *puVar15;
          uVar2 = *puVar14;
          puVar16[1] = puVar15[1];
          puVar4 = puVar15 + 2;
          puVar15 = puVar15 + 3;
          puVar16[2] = *puVar4;
          puVar16[3] = *puVar13;
          uVar1 = puVar13[1];
          puVar16[5] = (float)dVar20;
          puVar13 = puVar13 + 2;
          puVar16[4] = uVar1;
          puVar16[6] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 7;
        } while (0 < (int)lVar19);
      }
      pRVar7 = ForwardPass;
      pRVar3 = ForwardPass->command;
      *pRVar3 = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      pRVar7->command = pRVar3 + 2;
      pRVar3[1] = 0;
      idol_draw::DrawDepth(ForwardPass,0);
      pRVar7 = DepthPass;
      pRVar3 = DepthPass->command;
      *pRVar3 = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      pRVar7->command = pRVar3 + 2;
      pRVar3[1] = 0;
      idol_draw::DrawDepth(DepthPass,0);
      draw::FastDrawStripFog(lVar17,puVar12,0);
      draw::FastDrawStripFog(lVar17,puVar12,2);
    }
    iVar9 = iVar9 + 1;
    iVar18 = iVar18 + 0x20;
  } while (iVar9 < 10);
  water::PopZoneFog(&OCEAN_GASPAR);
  return;
}



//==== 00340588  ns=mobyupdate_unsorted  size=0x88
// sig: undefined UpdateMoby_317_GasparOcean(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d760 draw::RegisterOceanUpdate; 0017e31c water::OceanPlane_SetDepth

/* Moby 317 */

void mobyupdate_unsorted::UpdateMoby_317_GasparOcean(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    water::OceanPlane_SetDepth(1.0,&OCEAN_GASPAR,ZEXT48(&DAT_00340584),0x80);
  }
  else if (moby->state < 2) {
    draw::RegisterOceanUpdate(&PTR_M317_Gaspar_SubmitOcean_0070c240,moby);
  }
  return;
}



//==== 00340610  ns=mobyupdate_helpers  size=0x14
// sig: undefined M318_00340610(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M318_00340610(void)

{
  DAT_0083bc0c = 0x10000;
  return;
}



//==== 00340640  ns=mobyupdate_helpers  size=0x1d4
// sig: undefined M318_00340640(void)
// callers(1): 00340968 mobyupdate_unsorted::UpdateMoby_318
// callees(2): 000f31a8 mobyfunc::UpdateMobyTransform; 00500b64 fastfunc::FastEulerToMtx

void mobyupdate_helpers::M318_00340640(int param_1)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar7 = 0;
  dVar13 = 0.01745329238474369;
  dVar14 = 2.4000000953674316;
  dVar15 = 1.2000000476837158;
  dVar16 = 0.0;
  dVar17 = -1.0471975803375244;
  dVar18 = 0.3490658402442932;
  iVar8 = iVar5;
  do {
    iVar6 = *(int *)(iVar8 + 0x14);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(float *)(*(int *)(iVar8 + 0x14) + 0x18) =
         *(float *)(*(int *)(iVar8 + 0x14) + 0x18) + DAT_0083bc40;
    *(float *)(*(int *)(iVar8 + 0x14) + 0x44) = (float)((double)DAT_0083bc48 * dVar13);
    dVar12 = (double)(float)((double)*(float *)(iVar5 + 0x20) * dVar14 - dVar15);
    fastfunc::FastEulerToMtx
              ((ulonglong)*(uint *)(iVar8 + 0x14) + 0xc0,(ulonglong)*(uint *)(iVar8 + 0x14) + 0x40);
    iVar6 = *(int *)(iVar8 + 0x14);
    fVar2 = *(float *)(iVar6 + 0xc4);
    fVar3 = *(float *)(iVar6 + 0xc0);
    fVar4 = *(float *)(iVar6 + 200);
    dVar11 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = (float)(dVar12 / dVar11);
    dVar12 = dVar16;
    if (dVar16 - dVar11 < 0.0) {
      dVar12 = (double)(fVar4 * fVar1);
    }
    dVar9 = dVar16;
    if (dVar16 - dVar11 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    dVar10 = dVar16;
    if (dVar16 - dVar11 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    if (dVar11 - dVar16 < 0.0) {
      dVar12 = (double)(fVar4 * fVar1);
    }
    if (dVar11 - dVar16 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    if (dVar11 - dVar16 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar12);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar9);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
    *(float *)(*(int *)(iVar8 + 0x14) + 0x44) =
         (float)((double)*(float *)(iVar5 + 0x24) * dVar17 - dVar18);
    fastfunc::FastEulerToMtx
              ((ulonglong)*(uint *)(iVar8 + 0x14) + 0xc0,(ulonglong)*(uint *)(iVar8 + 0x14) + 0x40);
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar8 + 0x14));
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar7 < 3);
  return;
}



//==== 00340814  ns=mobyupdate_helpers  size=0x70
// sig: undefined M318_00340814(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M318_00340814(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  do {
    iVar1 = *(int *)(iVar2 + 0x14);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x34) = *(ushort *)(iVar1 + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)(iVar2 + 0x14) + 0x31) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x94) =
           *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x14) + 0x24) + 0x10);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 3);
  return;
}



//==== 00340884  ns=mobyupdate_helpers  size=0xc0
// sig: undefined M318_00340884(void)
// callers(1): 00340968 mobyupdate_unsorted::UpdateMoby_318
// callees(1): 0011aeec mobyutil::MB_ShowPersistentMessage

void mobyupdate_helpers::M318_00340884(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x10);
  if (iVar1 == 4) {
    mobyutil::MB_ShowPersistentMessage(0xb,0x2b0c);
  }
  else if (iVar1 == 3) {
    mobyutil::MB_ShowPersistentMessage(0xb,0x2b0b);
  }
  else if (iVar1 == 2) {
    mobyutil::MB_ShowPersistentMessage(0xb,0x2b0c);
  }
  else if (iVar1 == 1) {
    mobyutil::MB_ShowPersistentMessage(0xb,0x2b0c);
  }
  else if (iVar1 == 0) {
    mobyutil::MB_ShowPersistentMessage(0xb,0x2b0d);
  }
  else {
    mobyutil::MB_ShowPersistentMessage(0xb,0);
  }
  return;
}



//==== 00340968  ns=mobyupdate_unsorted  size=0x830
// sig: undefined UpdateMoby_318(MobyInstance * moby)
// callers(0): 
// callees(13): 0006d720 RegisterFuncForMoby; 00085a10 hero::Hero_GetSpecialStateKind; 000a0c38 hero::Hero_Warp; 000aa368 hero::Hero_WalkToPos; 000efa28 mobyfunc::CreateMoby; 00105870 mobyutil::DamageSphereAtPos; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0011ccc8 music::music_SetTransition; 0015d12c sound::PlayMobySound; 00340640 mobyupdate_helpers::M318_00340640; 00340884 mobyupdate_helpers::M318_00340884; 00502578 fastfunc::FastWrapRot

/* Moby 318 */

void mobyupdate_unsorted::UpdateMoby_318(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  f32 local_60;
  f32 local_5c;
  float local_58;
  f32 local_54;
  longlong local_50;
  
  lVar5 = (longlong)(int)moby;
  uVar1 = moby->state;
  piVar11 = (int *)moby->pVar;
  if (uVar1 == '\x04') {
    if ((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
             ((int)g_heroPosition.z >> 0x1f)) < 0x430a0000) {
      MiscLevelFlags.field85_0x55 = 1;
    }
    uVar3 = piVar11[0xf] >> 0x1f;
    dVar14 = 1.9500000476837158;
    if ((int)((uVar3 >> 1 ^ piVar11[0xf]) - uVar3) < 0x3ff9999a) {
      RegisterFuncForMoby(&PTR_M319_003411d0_0070c278,moby);
      fVar15 = mobyutil::Delt((float)dVar14,mobyutil::g_FrameTime * 4.0,(float *)(piVar11 + 0xf));
      dVar14 = (double)fVar15;
    }
    else {
      dVar14 = 0.0;
      if (piVar11[9] < 1) {
        if (piVar11[8] < 1) {
          moby->state = '\x01';
        }
        else {
          fVar15 = mobyutil::OrganicDelt
                             (0.0,DAT_0083bc50 * DAT_0071f418,DAT_0083bc54 * DAT_0071f418,
                              DAT_0083bc58 * mobyutil::g_FrameTime,(float *)(piVar11 + 8),0x840000,
                              (float *)(piVar11 + 0xb));
          dVar14 = (double)fVar15;
        }
      }
      else {
        fVar15 = mobyutil::OrganicDelt
                           (0.0,DAT_0083bc50 * DAT_0071f418,DAT_0083bc54 * DAT_0071f418,
                            DAT_0083bc58 * mobyutil::g_FrameTime,(float *)(piVar11 + 9),0x720000,
                            (float *)(piVar11 + 10));
        dVar14 = (double)fVar15;
      }
    }
    mobyupdate_helpers::M318_00340640(dVar14,lVar5);
  }
  else if (uVar1 == '\x03') {
    dVar14 = 0.0;
    if (piVar11[0xf] == 0) {
      pMVar6 = MobyInstance + *piVar11;
      if ((piVar11[1] != -1) && (g_LevelFlags[Level][piVar11[3]] == -1)) {
        pMVar6 = MobyInstance + piVar11[1];
      }
      local_60 = (pMVar6->pos).x;
      pvVar2 = pMVar6->pVar;
      local_5c = (pMVar6->pos).y;
      local_54 = (pMVar6->pos).w;
      local_58 = (pMVar6->pos).z + 0.2;
      hero::Hero_Warp(&local_60,&(pMVar6->rotation).x,0,1);
      hero::g_heroInvisible = 1;
      if ((piVar11[0xc] != -1) && (piVar11[0xd] != -1)) {
        music::music_SetTransition(piVar11[0xc],piVar11[0xd]);
      }
      iVar7 = 0;
      pvVar9 = pMVar6->pVar;
      pMVar6->enabled = '\x01';
      pMVar6->modeBits =
           pMVar6->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      pMVar6->collision = pMVar6->pClass->collision;
      do {
        iVar8 = *(int *)((int)pvVar9 + 0x14);
        if (iVar8 != 0) {
          *(ushort *)(iVar8 + 0x34) = *(ushort *)(iVar8 + 0x34) & 0xfffe;
          *(undefined1 *)(*(int *)((int)pvVar9 + 0x14) + 0x31) = 1;
          *(undefined4 *)(*(int *)((int)pvVar9 + 0x14) + 0x94) =
               *(undefined4 *)(*(int *)(*(int *)((int)pvVar9 + 0x14) + 0x24) + 0x10);
        }
        iVar7 = iVar7 + 1;
        pvVar9 = (void *)((int)pvVar9 + 4);
      } while (iVar7 < 3);
      pMVar6->state = '\x04';
      *(undefined4 *)((int)pvVar2 + 0x20) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0x24) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0x28) = 0;
      *(undefined4 *)((int)pvVar2 + 0x2c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x3c) = 0;
      sound::PlayMobySound(1,0,pMVar6);
      moby->state = '\x01';
      piVar11[8] = 0;
      piVar11[9] = 0;
      piVar11[10] = 0;
      piVar11[0xb] = 0;
      piVar11[0xf] = 0x3ff9999a;
      mobyupdate_helpers::M318_00340640(lVar5);
    }
    else {
      RegisterFuncForMoby(&PTR_M319_003411d0_0070c278,moby);
      mobyutil::Delt((float)dVar14,mobyutil::g_FrameTime * 4.0,(float *)(piVar11 + 0xf));
    }
  }
  else if (uVar1 == '\x02') {
    iVar7 = hero::Hero_GetSpecialStateKind();
    uVar3 = piVar11[8] >> 0x1f;
    iVar8 = (uVar3 >> 1 ^ piVar11[8]) - uVar3;
    dVar14 = 1.0;
    if (iVar8 < 0x3f800000) {
      fVar15 = mobyutil::OrganicDelt
                         (1.0,DAT_0083bc50 * DAT_0071f418,DAT_0083bc54 * DAT_0071f418,
                          DAT_0083bc58 * mobyutil::g_FrameTime,(float *)(piVar11 + 8),0x720000,
                          (float *)(piVar11 + 10));
      dVar14 = (double)fVar15;
    }
    else {
      uVar3 = piVar11[9] >> 0x1f;
      if ((int)((uVar3 >> 1 ^ piVar11[9]) - uVar3) < 0x3f800000) {
        fVar15 = mobyutil::OrganicDelt
                           (1.0,DAT_0083bc50 * DAT_0071f418,DAT_0083bc54 * DAT_0071f418,
                            DAT_0083bc58 * mobyutil::g_FrameTime,(float *)(piVar11 + 9),0x720000,
                            (float *)(piVar11 + 0xb));
        dVar14 = (double)fVar15;
      }
      else if ((mobyutil::g_HelpMsgOwner != 0xb) || (iVar8 < 0x3e800001)) {
        if (iVar7 == 2) {
          piVar11[0xf] = 0x3ff9999a;
          moby->state = '\x03';
        }
        else if (iVar7 == 0) {
          moby->state = '\x04';
        }
      }
    }
    mobyupdate_helpers::M318_00340640(dVar14,lVar5);
  }
  else if (uVar1 == '\x01') {
    if (*piVar11 != -1) {
      if ((((moby->modeBits & DISABLED) != NONE) && (-1 < piVar11[2])) &&
         (g_LevelFlags[Level][piVar11[2]] == -1)) {
        iVar7 = 0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        moby->enabled = '\x01';
        moby->collision = moby->pClass->collision;
        piVar10 = piVar11;
        do {
          iVar8 = piVar10[5];
          if (iVar8 != 0) {
            *(ushort *)(iVar8 + 0x34) = *(ushort *)(iVar8 + 0x34) & 0xfffe;
            *(undefined1 *)(piVar10[5] + 0x31) = 1;
            *(undefined4 *)(piVar10[5] + 0x94) = *(undefined4 *)(*(int *)(piVar10[5] + 0x24) + 0x10)
            ;
          }
          iVar7 = iVar7 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar7 < 3);
      }
      if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
         ((mobyupdate_helpers::M318_00340884(lVar5), (g_buttonsPressedThisFrame & TRIANGLE) != 0 &&
          (mobyutil::g_HelpMsgOwner == 0xb)))) {
        lVar12 = 0;
        sound::PlayMobySound(0,0,moby);
        moby->state = '\x02';
        piVar11[10] = 0;
        piVar11[0xb] = 0;
        hero::Hero_WalkToPos((moby->rotation).z,(float *)(lVar5 + 0x10),lVar12,0);
        mobyutil::DamageSphereAtPos
                  (0x3ff8000000000000,0x4034000000000000,0x3ff0000000000000,lVar5,lVar5 + 0x10,
                   &DAT_00340944,0x10000);
      }
    }
  }
  else if (uVar1 == '\0') {
    iVar7 = 0;
    moby->state = '\x01';
    dVar14 = 2.094395160675049;
    piVar10 = piVar11;
    do {
      pMVar6 = mobyfunc::CreateMoby(GOLD_WEAPON_CASE|VENDOR);
      piVar10[5] = (int)pMVar6;
      pMVar6->drawDistance = 0x40;
      local_50 = (longlong)iVar7;
      *(undefined1 *)(piVar10[5] + 0x31) = 1;
      *(undefined8 *)(piVar10[5] + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
      *(MobyModeBit *)(piVar10[5] + 0x34) = moby->modeBits;
      iVar8 = piVar10[5];
      *(f32 *)(iVar8 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar8 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar8 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar8 + 0x1c) = (moby->pos).w;
      iVar8 = piVar10[5];
      *(f32 *)(iVar8 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar8 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar8 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar8 + 0x4c) = (moby->rotation).w;
      dVar13 = (double)fastfunc::FastWrapRot
                                 (*(float *)(piVar10[5] + 0x48),(float)((double)local_50 * dVar14));
      piVar4 = piVar10 + 5;
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
      *(float *)(*piVar4 + 0x48) = (float)dVar13;
    } while (iVar7 < 3);
    if ((-1 < piVar11[2]) && (g_LevelFlags[Level][piVar11[2]] != -1)) {
      lVar12 = 3;
      moby->enabled = '\0';
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | DISABLED;
      do {
        *(ushort *)(piVar11[5] + 0x34) = *(ushort *)(piVar11[5] + 0x34) | 1;
        *(undefined1 *)(piVar11[5] + 0x31) = 0;
        piVar10 = piVar11 + 5;
        piVar11 = piVar11 + 1;
        *(undefined4 *)(*piVar10 + 0x94) = 0;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    mobyupdate_helpers::M318_00340640(lVar5);
  }
  return;
}



//==== 003411d0  ns=mobyupdate_helpers  size=0x38c
// sig: undefined M319_003411d0(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M319_003411d0(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar25;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar1 = uVar15 - 0x1a0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar15;
  puVar6[0x36] = in_LR;
  puVar6[0x2f] = in_f27;
  puVar6[0x30] = in_f28;
  puVar6[0x31] = in_f29;
  puVar6[0x32] = in_f30;
  puVar6[0x33] = in_f31;
  puVar6[0x2d] = unaff_r30;
  puVar6[0x2e] = unaff_r31;
  puVar6[0x2c] = unaff_r29;
  puVar6[0x2b] = unaff_r28;
  iVar5 = *(int *)(param_1 + 0x78);
  fastfunc::FastMtxCopyNoTranslate(uVar15 - 0x130,param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar6 + 0x15) = uVar3;
  uVar3 = DAT_0083bc68;
  *(undefined4 *)((int)puVar6 + 0xac) = uVar2;
  uVar16 = draw::GetEffectTex(uVar3);
  puVar6[0x25] = uVar16;
  uVar16 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar16;
  uVar16 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar16;
  uVar16 = idol_draw::PackCmd(DAT_010c1080,DAT_0083bc60,DAT_010c1084,DAT_0083bc64,0x80);
  puVar6[0x27] = uVar16;
  puVar19 = &DAT_0083bc70;
  puVar17 = &DAT_0083bc74;
  lVar23 = 4;
  lVar20 = lVar1;
  lVar21 = lVar1;
  do {
    uVar2 = *puVar17;
    *(undefined4 *)((int)lVar21 + 0x100) = *puVar19;
    uVar3 = DAT_0083bc6c;
    puVar19 = puVar19 + 2;
    puVar17 = puVar17 + 2;
    *(undefined4 *)((int)lVar21 + 0x104) = uVar2;
    *(undefined4 *)((int)lVar20 + 0xf0) = uVar3;
    lVar21 = lVar21 + 8;
    lVar20 = lVar20 + 4;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  dVar25 = 0.10000000149011612;
  uVar22 = (int)*(uint *)(iVar5 + 0x3c) >> 0x1f;
  iVar18 = (uVar22 >> 1 ^ *(uint *)(iVar5 + 0x3c)) - uVar22;
  if (iVar18 < 0x3f933333) {
    dVar25 = 1.0;
    dVar24 = (double)((1.15 - *(float *)(iVar5 + 0x3c)) * 2.0);
    if ((dVar24 <= 1.0) && (dVar25 = dVar24, dVar24 < 0.0)) {
      dVar25 = 0.0;
    }
    dVar25 = (double)(float)(dVar25 + 0.10000000149011612);
    hero::g_heroInvisible = (byte)((ulonglong)((longlong)iVar18 + -0x3f266666) >> 0x3f);
  }
  iVar18 = 0;
  do {
    uVar22 = 0;
    lVar20 = lVar1;
    do {
      puVar6[0x28] = (longlong)
                     (int)(((int)uVar22 >> 1) + (uint)((int)uVar22 < 0 && (uVar22 & 1) != 0) +
                          iVar18);
      fVar4 = (float)(longlong)puVar6[0x28] * 0.19634938 - 3.14159;
      fVar8 = fVar4 + 1.5707963;
      fVar9 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar9 = fVar4;
      }
      fVar11 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar11 = fVar8;
      }
      fVar10 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar4 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar11 < 0.0) {
        fVar4 = fVar11;
      }
      fVar8 = fVar10 * fVar10;
      fVar9 = fVar4 * fVar4;
      fVar13 = fVar8 * fVar8 * fVar10;
      fVar11 = fVar9 * fVar9 * fVar4;
      fVar14 = fVar8 * fVar13;
      fVar12 = fVar9 * fVar11;
      iVar7 = (int)lVar20;
      *(float *)(iVar7 + 0xb0) =
           (fVar9 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar9 * fVar4 * -0.16666657 + fVar4) *
           *(float *)(iVar5 + 0x3c);
      fVar4 = *(float *)(iVar5 + 0x3c);
      *(undefined4 *)(iVar7 + 0xb8) = 0;
      *(float *)(iVar7 + 0xb4) =
           (fVar8 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar8 * fVar10 * -0.16666657 + fVar10) *
           fVar4;
      if ((uVar22 & 1) == 0) {
        fVar4 = (float)((double)DAT_0083bc90 - dVar25);
        fVar8 = 0.0;
      }
      else {
        fVar4 = 0.0;
        fVar8 = (float)((double)DAT_0083bc90 + dVar25);
      }
      uVar22 = uVar22 + 1;
      *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
      *(float *)(iVar7 + 0xb8) = fVar8 + fVar4;
      lVar20 = lVar20 + 0x10;
    } while ((int)uVar22 < 4);
    draw::FastDrawQuad(uVar15 - 0xf0,uVar15 - 0x130,0,EffectTexHeaders,9);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 0x20);
  return;
}



//==== 0034155c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M319_0034155c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M319_0034155c(void)

{
  DAT_0083bce8 = 0x10000;
  return;
}



//==== 00341570  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_319(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 319 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_319(MobyInstance *moby)

{
  return moby;
}



//==== 00341590  ns=Global  size=0x1e8
// sig: undefined FUN_00341590(void)
// callers(5): 001f6900 mobyupdate_unsorted::UpdateMoby_1198; 0023d4d8 mobyupdate_unsorted::UpdateMoby_{1285_1286_1287_1288}; 00243a70 mobyupdate_unsorted::UpdateMoby_a_lot_9; 00244840 mobyupdate_unsorted::UpdateMoby_1309; 00325a50 mobyupdate_unsorted::UpdateMoby_{276_1298_1299}
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange

MobyInstance *
FUN_00341590(double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,short param_8)

{
  undefined4 *puVar1;
  MobyInstance *pMVar3;
  undefined8 uVar2;
  int iVar4;
  double dVar5;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  pMVar3 = mobyfunc::CreateMoby(param_8 + 0x140);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    puVar1[6] = param_2;
    pMVar3->updateDistance = '\x7f';
    pMVar3->drawDistance = 0x7f;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    pMVar3->enabled = '\x01';
    pMVar3->color = (int)((ulonglong)uVar2 >> 0x20);
    pMVar3->light = (int)uVar2;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).x = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).y = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).z = (float)dVar5;
    fStack00000044 = (f32)param_4;
    fStack0000004c = (f32)param_5;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    uStack00000054 = (undefined4)param_6;
    uStack0000005c = (undefined4)param_7;
    fStack00000040 = (f32)((ulonglong)param_4 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    uStack00000050 = (undefined4)((ulonglong)param_6 >> 0x20);
    uStack00000058 = (undefined4)((ulonglong)param_7 >> 0x20);
    *puVar1 = uStack00000050;
    puVar1[1] = uStack00000054;
    puVar1[2] = uStack00000058;
    puVar1[3] = uStack0000005c;
    pMVar3->scale = (float)((double)pMVar3->pClass->gScale * param_1);
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -9.075712,mobyutil::g_FrameTime * 9.075712);
    puVar1[4] = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -6.2831855,mobyutil::g_FrameTime * 6.2831855)
    ;
    puVar1[5] = (float)dVar5;
    iVar4 = mobyutil::MB_randRange(0x5a,0x6e);
    puVar1[7] = (int)(animationSpeed * ((float)(longlong)iVar4 + 0.5));
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 003417c8  ns=mobyupdate_unsorted  size=0x5b8
// sig: undefined UpdateMoby_{320_321}(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00128248 partupd::SpawnPart_27; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot

/* Moby 320
   Moby 321 */

void mobyupdate_unsorted::UpdateMoby__320_321_(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar7;
  undefined8 uVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 local_a0 [16];
  undefined1 local_90 [32];
  
  lVar5 = (longlong)(int)moby;
  pfVar4 = (float *)moby->pVar;
  fVar1 = (moby->pos).x + *pfVar4;
  (moby->pos).x = fVar1;
  fVar2 = (moby->pos).y + pfVar4[1];
  (moby->pos).y = fVar2;
  fVar3 = (moby->pos).z + pfVar4[2];
  (moby->pos).z = fVar3;
  if (2.0 <= fVar1) {
    if ((((fVar1 <= 1021.0) && (2.0 <= fVar2)) && (fVar2 <= 1021.0)) &&
       (((2.0 <= fVar3 && (fVar3 <= 1021.0)) &&
        (SQRT((fVar1 - GameCamera.posX) * (fVar1 - GameCamera.posX) +
              (fVar2 - GameCamera.posY) * (fVar2 - GameCamera.posY)) <= 64.0)))) {
      dVar8 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar4[4]);
      (moby->rotation).z = (float)dVar8;
      dVar8 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar4[5]);
      (moby->rotation).y = (float)dVar8;
      pfVar4[2] = -(DAT_0071f418 * 12.74 - pfVar4[2]);
      iVar7 = fastfunc::FastDecTimerS32(pfVar4 + 7);
      if (iVar7 != 0) {
        iVar7 = 0;
        dVar8 = -1.0;
        dVar11 = 1.0;
        dVar12 = 3.0;
        dVar13 = 6.0;
        dVar14 = 10.5;
        dVar15 = 15.5;
        uVar16 = 0x40f86a0000000000;
        do {
          mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar11);
          mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar11);
          mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar11);
          mobyutil::MB_randRangeFloat
                    ((float)((double)mobyutil::g_FrameTime * dVar12),
                     (float)((double)mobyutil::g_FrameTime * dVar13));
          uVar6 = mobyutil::MB_randRange
                            ((int)((double)animationSpeed * dVar14),
                             (int)((double)animationSpeed * dVar15));
          partupd::SpawnPart_27(uVar16,lVar5 + 0x10,local_90,0x7f2f4f6f,uVar6);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar7 = collproc::CollLine(local_a0,lVar5 + 0x10,2,lVar5,0);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = collproc::CollHotspot();
      if (iVar7 == 1) {
        *pfVar4 = *pfVar4 * 0.4;
        pfVar4[1] = pfVar4[1] * 0.4;
        pfVar4[2] = pfVar4[2] * 0.4;
        pfVar4[4] = pfVar4[4] * 0.25;
        pfVar4[5] = pfVar4[5] * 0.25;
        return;
      }
      moby->scale = moby->scale * 0.8;
      fastfunc::FastVecNormalize(pfVar4,pfVar4,0xa10980);
      dVar8 = (double)mobyutil::MB_randRangeFloat(0.3,0.1);
      fVar1 = (float)((double)pfVar4[1] * dVar8);
      fVar2 = (float)((double)*pfVar4 * dVar8);
      fVar3 = (float)((double)pfVar4[2] * dVar8);
      *pfVar4 = fVar2;
      pfVar4[1] = fVar1;
      pfVar4[2] = fVar3;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < mobyutil::g_FrameTime * 5.0) {
        pfVar4[7] = 0.0;
      }
      dVar15 = 0.0;
      dVar8 = (double)mobyutil::MB_randRangeFloat(0.0,-pfVar4[4]);
      pfVar4[4] = (float)dVar8;
      dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar15,-pfVar4[5]);
      pfVar4[5] = (float)dVar8;
      dVar12 = (double)CollOutput.ip.x;
      dVar13 = (double)CollOutput.ip.y;
      dVar14 = (double)CollOutput.ip.z;
      dVar11 = (double)SQRT(CollOutput.normal.z * CollOutput.normal.z +
                            CollOutput.normal.x * CollOutput.normal.x +
                            CollOutput.normal.y * CollOutput.normal.y);
      fVar1 = (float)(0.05000000074505806 / dVar11);
      dVar8 = dVar15;
      if (dVar15 - dVar11 < 0.0) {
        dVar8 = (double)(CollOutput.normal.x * fVar1);
      }
      dVar9 = dVar15;
      if (dVar15 - dVar11 < 0.0) {
        dVar9 = (double)(CollOutput.normal.y * fVar1);
      }
      dVar10 = dVar15;
      if (dVar15 - dVar11 < 0.0) {
        dVar10 = (double)(CollOutput.normal.z * fVar1);
      }
      if (dVar11 - dVar15 < 0.0) {
        dVar8 = (double)(CollOutput.normal.x * fVar1);
      }
      if (dVar11 - dVar15 < 0.0) {
        dVar9 = (double)(CollOutput.normal.y * fVar1);
      }
      if (dVar11 - dVar15 < 0.0) {
        dVar10 = (double)(CollOutput.normal.z * fVar1);
      }
      CollOutput.normal.x = (float)dVar8;
      CollOutput.normal.y = (float)dVar9;
      CollOutput.normal.z = (float)dVar10;
      (moby->pos).w = CollOutput.ip.w;
      (moby->pos).x = (float)(dVar12 + dVar8);
      (moby->pos).y = (float)(dVar13 + dVar9);
      (moby->pos).z = (float)(dVar14 + dVar10);
      return;
    }
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 00341da8  ns=mobyupdate_unsorted  size=0x2e0
// sig: undefined UpdateMoby_322(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 0015d12c sound::PlayMobySound; 0033f5c0 FUN_0033f5c0

/* Moby 322 */

void mobyupdate_unsorted::UpdateMoby_322(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar2 = mobyutil::MB_damage(moby,0x40000,0);
  if (iVar2 != 0) {
    sound::PlayMobySound(0,0,moby);
    dVar3 = 0.0;
    iVar2 = 0;
    dVar4 = -1.0;
    dVar5 = 1.0;
    dVar6 = 8.0;
    fVar1 = 12.0;
    do {
      dVar7 = (double)fVar1;
      mobyutil::MB_randRangeFloat((float)dVar4,(float)dVar5);
      mobyutil::MB_randRangeFloat((float)dVar4,(float)dVar5);
      mobyutil::MB_randRangeFloat((float)dVar3,(float)dVar5);
      fVar1 = (float)dVar7;
      mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
      FUN_0033f5c0(moby);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x28);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00342088  ns=Global  size=0xe8
// sig: undefined FUN_00342088(void)
// callers(1): 001f9680 mobyupdate_unsorted::UpdateMoby_1201
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_00342088(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar4 = mobyfunc::CreateMoby(ROCKET_0100|SUCKCANNON_0044);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = *(char *)(param_1 + 0x30);
    bVar1 = *(byte *)(param_1 + 0x30);
    pMVar4->enabled = '\x01';
    pMVar4->drawDistance = (ushort)bVar1;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar4->pos).y = fStack00000044;
    fVar2 = *(f32 *)(param_1 + 0x40);
    (pMVar4->pos).w = fStack0000004c;
    fVar3 = *(f32 *)(param_1 + 0x44);
    (pMVar4->rotation).x = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).y = fVar3;
    fVar3 = *(f32 *)(param_1 + 0x4c);
    (pMVar4->rotation).z = fVar2;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).w = fVar3;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar4->pos).x = fStack00000040;
    (pMVar4->pos).z = fStack00000048;
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 00342170  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_324(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 324 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_324(MobyInstance *moby)

{
  return moby;
}



//==== 003421a8  ns=mobyupdate_unsorted  size=0x510
// sig: undefined UpdateMoby_325(MobyInstance * moby)
// callers(0): 
// callees(11): 00059e20 collproc::CollSphere; 0006d7e0 draw::RegisterPostDraw; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010e030 mobyutil::MB_genericExplosion; 001268f8 partupd::SpawnPart_21; 00126f50 partupd::SpawnPart_23; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 325 */

void mobyupdate_unsorted::UpdateMoby_325(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  f32 fVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  lVar9 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  iVar10 = mobyutil::MB_randInt(2);
  if (iVar10 != 0) {
    draw::RegisterPostDraw(&PTR_M327_00342950_0070c2c8,moby);
  }
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  fVar8 = DAT_0071f408;
  fVar7 = DAT_0071f408 * DAT_0083bd28;
  fVar1 = pfVar2[2];
  if (fVar7 < ABS(*pfVar2)) {
    *pfVar2 = *pfVar2 * ((DAT_0083bd24 - 1.0) * DAT_0071f408 + 1.0);
  }
  if (fVar7 < ABS(pfVar2[1])) {
    pfVar2[1] = pfVar2[1] * ((DAT_0083bd24 - 1.0) * fVar8 + 1.0);
  }
  uVar17 = 0;
  if (0 < (int)pfVar2[2]) {
    fVar1 = fVar1 * ((DAT_0083bd24 - 1.0) * fVar8 + 1.0);
  }
  pfVar2[2] = -(DAT_0071f40c * DAT_0083bd20 - fVar1);
  dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar2[4]);
  (moby->rotation).x = (float)dVar13;
  dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar2[5]);
  (moby->rotation).y = (float)dVar13;
  dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar2[6]);
  fVar3 = (moby->pos).x;
  (moby->rotation).z = (float)dVar13;
  uVar4 = (int)fVar3 >> 0x1f;
  iVar10 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4;
  if ((((0x3fffffff < iVar10) && (iVar10 < 0x447f4001)) &&
      (fVar3 = (moby->pos).y, uVar4 = (int)fVar3 >> 0x1f,
      iVar10 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4, iVar10 < 0x447f4001 && 0x3fffffff < iVar10)) &&
     ((fVar3 = (moby->pos).z, uVar4 = (int)fVar3 >> 0x1f,
      iVar10 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4, 0x3fffffff < iVar10 && (iVar10 < 0x447f4001)))) {
    iVar10 = fastfunc::FastDecTimerS32(pfVar2 + 8);
    if (iVar10 == 0) {
      lVar12 = lVar9 + 0x10;
      iVar10 = collproc::CollSphere(0x3fe0000000000000,lVar12,&DAT_00342178,0,pfVar2[9]);
      if (iVar10 == 0) {
        dVar13 = (double)animationSpeed;
        uVar17 = 0x40ed4c0000000000;
        mobyutil::MB_randRange
                  ((int)(dVar13 * 20.5),dVar13,0x40ed4c0000000000,(int)(dVar13 * 10.5),
                   (int)(dVar13 * 20.5));
        partupd::SpawnPart_21(uVar17,lVar12,&DAT_00a15d30,0x4f007fff,0x1fffffff);
        dVar13 = 40000.0;
        iVar10 = 0;
        dVar15 = 100000.0;
        uVar17 = 0x3f999999a0000000;
        uVar16 = 0x3ff0000000000000;
        auVar20 = loadVectorLeftIndexed(0x2c,0x342178);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        do {
          mobyutil::MB_randInt(6);
          mobyutil::MB_randInt(2);
          uVar14 = mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar15);
          mobyutil::MB_randRange(0x30,0xff);
          uVar14 = partupd::SpawnPart_23(uVar17,uVar16,uVar16,uVar14,lVar12);
          iVar11 = (int)uVar14;
          if (iVar11 != 0) {
            auVar18 = ZEXT416(0xffffffff);
            auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
            auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
            *(undefined1 *)(iVar11 + 3) = 0x44;
            auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar20,auVar18);
            auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
            auVar19 = vectorSplatHalfWord(auVar18,1);
            auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xff;
            uVar6 = storeVectorElementHalfWordIndexed(auVar19,10,uVar14);
            *(undefined2 *)(iVar11 + 10) = uVar6;
            *(undefined4 *)(iVar11 + 0x24) = 2;
            *(undefined1 *)(iVar11 + 0x2a) = 0x60;
            uVar5 = storeVectorElementByteIndexed
                              (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                               auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38
                               | auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 |
                               auVar18 << 0x58 | auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70
                               | auVar18 << 0x78,0x2b,uVar14);
            *(undefined1 *)(iVar11 + 0x2b) = uVar5;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 2);
        return;
      }
    }
    uVar16 = 0x3ff0000000000000;
    mobyutil::MB_genericExplosion
              (uVar17,uVar17,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,
               0x3ff0000000000000,0x402e000000000000,lVar9,pfVar2,lVar9 + 0x10,1,5,5,2,4);
    collproc::CollSphere(uVar16,lVar9 + 0x10,&hero::g_heroMtx,0,g_heroMobyPtr);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 003426d8  ns=Global  size=0x264
// sig: undefined FUN_003426d8(void)
// callers(2): 002ef340 mobyupdate_unsorted::UpdateMoby_211; 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 001113e0 mobyutil::MB_RotateQuatAxisAngle

MobyInstance * FUN_003426d8(float param_1,float *param_2)

{
  float fVar1;
  f32 fVar2;
  float *outQuat;
  undefined4 uVar3;
  MobyInstance *pMVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float local_40;
  float local_3c;
  float local_38;
  f32 local_34;
  
  pMVar4 = mobyfunc::CreateMoby(ROCKET_0100|FIGHTER_JET_0045);
  if (pMVar4 != (MobyInstance *)0x0) {
    outQuat = (float *)pMVar4->pVar;
    outQuat[9] = param_1;
    local_40 = *param_2;
    (pMVar4->pos).x = local_40;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    fVar2 = *(f32 *)((int)param_1 + 0x48);
    pMVar4->updateDistance = -1;
    (pMVar4->rotation).z = fVar2;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    local_3c = g_heroPosition.y;
    local_40 = local_40 - g_heroPosition.x;
    pMVar4->drawDistance = 0xff;
    local_3c = (pMVar4->pos).y - local_3c;
    local_34 = (pMVar4->pos).w;
    dVar8 = 0.0;
    local_38 = 0.0;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (DAT_0071f408 * DAT_0083bd10,DAT_0071f408 * DAT_0083bd14);
    dVar9 = (double)SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c);
    fVar1 = (float)(dVar5 / dVar9);
    dVar5 = dVar8;
    if (dVar8 - dVar9 < 0.0) {
      dVar5 = (double)(local_40 * fVar1);
    }
    dVar7 = dVar8;
    if (dVar8 - dVar9 < 0.0) {
      dVar7 = (double)(local_3c * fVar1);
    }
    dVar6 = dVar8;
    if (dVar8 - dVar9 < 0.0) {
      dVar6 = (double)(local_38 * fVar1);
    }
    if (dVar9 - dVar8 < 0.0) {
      dVar5 = (double)(local_40 * fVar1);
    }
    if (dVar9 - dVar8 < 0.0) {
      dVar7 = (double)(local_3c * fVar1);
    }
    if (dVar9 - dVar8 < 0.0) {
      dVar6 = (double)(local_38 * fVar1);
    }
    local_40 = (float)dVar5;
    local_3c = (float)dVar7;
    local_38 = (float)dVar6;
    dVar5 = (double)mobyutil::MB_randRangeSigned(0x3fd6571840000000,0x3ff0c15240000000);
    mobyutil::MB_RotateQuatAxisAngle((float)dVar5,outQuat,&local_40);
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (DAT_0071f408 * DAT_0083bd18,DAT_0071f408 * DAT_0083bd1c);
    outQuat[2] = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRangeSigned(dVar8,0x3f81df46a0000000);
    outQuat[4] = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRangeSigned(0x3faaceea00000000,0x3fc1df46a0000000);
    outQuat[5] = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRangeSigned(dVar8,0x3f91df46a0000000);
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    outQuat[6] = (float)dVar5;
    auVar12 = loadVectorLeftIndexed(0x1c,0x3426b8);
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x20,
                       ZEXT48(outQuat));
    *(undefined4 *)((uint)(outQuat + 8) & 0xfffffffc) = uVar3;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 00342950  ns=mobyupdate_helpers  size=0x3d4
// sig: undefined M327_00342950(void)
// callers(0): 
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mobyupdate_helpers::M327_00342950(int param_1)

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
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  float local_130 [16];
  float local_f0 [38];
  
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  fVar5 = *(float *)(param_1 + 0xc4) * DAT_0083bd2c + *(float *)(param_1 + 0xe4) * DAT_0083bd30 +
          *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0xc0) * DAT_0083bd2c + *(float *)(param_1 + 0xe0) * DAT_0083bd30 +
          *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 200) * DAT_0083bd2c + *(float *)(param_1 + 0xe8) * DAT_0083bd30 +
          *(float *)(param_1 + 0x18);
  fVar13 = 0.0;
  fVar11 = GameCamera.posY - fVar5;
  fVar3 = GameCamera.posX - fVar6;
  fVar12 = GameCamera.posZ - fVar7;
  fVar1 = *(float *)(param_1 + 0xcc);
  fVar2 = fVar12 * fVar12 + fVar3 * fVar3 + fVar11 * fVar11;
  fVar9 = fVar13;
  fVar8 = fVar13;
  fVar10 = fVar13;
  if (SQRT(fVar2) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar2);
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar9 = fVar3 * fVar10;
    fVar8 = fVar11 * fVar10;
    fVar10 = fVar12 * fVar10;
  }
  fVar15 = DAT_00969f78 * fVar9 - hero::g_heroGravityDir * fVar10;
  fVar3 = DAT_00969f74 * fVar10 - DAT_00969f78 * fVar8;
  fVar4 = hero::g_heroGravityDir * fVar8 - DAT_00969f74 * fVar9;
  pfVar18 = local_f0;
  lVar19 = 4;
  pfVar17 = local_130;
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar15 * fVar15);
  fVar12 = (float)GameCamera.field8_0x14c * 0.4;
  fVar16 = -1.0 / fVar2;
  fVar11 = fVar13;
  if (0.0 - fVar2 < 0.0) {
    fVar11 = fVar3 * fVar16;
  }
  fVar14 = fVar13;
  if (0.0 - fVar2 < 0.0) {
    fVar14 = fVar15 * fVar16;
  }
  if (0.0 - fVar2 < 0.0) {
    fVar13 = fVar4 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar11 = fVar3 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar14 = fVar15 * fVar16;
  }
  if (fVar2 - 0.0 < 0.0) {
    fVar13 = fVar4 * fVar16;
  }
  do {
    fVar2 = *pfVar17;
    fVar3 = pfVar17[1];
    fVar15 = fVar2 * 0.4;
    fVar4 = pfVar17[3];
    fVar16 = pfVar17[2] * 0.4;
    pfVar17 = pfVar17 + 4;
    pfVar18[3] = fVar4 * fVar1 + fVar2 * fVar12;
    *pfVar18 = fVar4 * fVar6 +
               (fVar8 * fVar13 - fVar10 * fVar14) * fVar16 + fVar15 * fVar9 + fVar3 * fVar11 * 0.4;
    pfVar18[1] = fVar4 * fVar5 +
                 (fVar10 * fVar11 - fVar9 * fVar13) * fVar16 + fVar15 * fVar8 + fVar3 * fVar14 * 0.4
    ;
    pfVar18[2] = fVar4 * fVar7 +
                 (fVar9 * fVar14 - fVar8 * fVar11) * fVar16 + fVar15 * fVar10 + fVar3 * fVar13 * 0.4
    ;
    pfVar18 = pfVar18 + 4;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  draw::FastDrawQuad(local_f0,0,0,EffectTexHeaders,9);
  return;
}



//==== 00342d24  ns=mobyupdate_helpers  size=0x14
// sig: undefined M327_00342d24(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M327_00342d24(void)

{
  DAT_0083bd80 = 0x10000;
  return;
}



//==== 00342d38  ns=Global  size=0x8
// sig: undefined FUN_00342d38(void)
// callers(5): 0032f988 mobyupdate_unsorted::UpdateMoby_291; 00344328 mobyupdate_unsorted::UpdateMoby_329; 00349b38 mobyupdate_unsorted::UpdateMoby_{335_337_338}; 00362968 mobyupdate_unsorted::UpdateMoby_402; 00366628 mobyupdate_unsorted::UpdateMoby_410
// callees(0): 

double FUN_00342d38(int param_1)

{
  return (double)*(float *)(param_1 + 8);
}



//==== 00342d40  ns=Global  size=0x4
// sig: undefined FUN_00342d40(void)
// callers(1): 0032f988 mobyupdate_unsorted::UpdateMoby_291
// callees(0): 

void FUN_00342d40(void)

{
  return;
}



//==== 00342d44  ns=mobyupdate_helpers  size=0x2c
// sig: undefined M327_Batalia_SubmitOcean(void)
// callers(0): 
// callees(1): 0017e558 water::SubmitZone

void mobyupdate_helpers::M327_Batalia_SubmitOcean(void)

{
  water::SubmitZone(&OCEAN_BATALIA);
  return;
}



//==== 00342db8  ns=mobyupdate_unsorted  size=0x410
// sig: undefined UpdateMoby_327_BataliaOcean(MobyInstance * moby)
// callers(0): 
// callees(13): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 0012ab08 partupd::SpawnPart_35; 0012e8c8 partupd::SpawnPart_46; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0017e368 water::OceanPlane_SetDefaultDepth; 00456478 FUN_00456478; 00502758 fastfunc::FastDoubleToInt

/* Moby 327 */

void mobyupdate_unsorted::UpdateMoby_327_BataliaOcean(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
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
  double dVar25;
  double dVar26;
  Vec4 local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  
  if (DAT_010c50e0 == 0) {
    DAT_010c50e0 = 1;
    water::OceanPlane_SetDefaultDepth(0x3fe5555560000000,&OCEAN_BATALIA);
  }
  RegisterFuncForMoby(&PTR_M327_Batalia_SubmitOcean_0070c2e8,moby);
  if (Level == Batalia) {
    if (((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
              ((int)g_heroPosition.z >> 0x1f)) <
         (int)(((uint)((int)OCEAN_BATALIA.z >> 0x1f) >> 1 ^ (uint)OCEAN_BATALIA.z) -
              ((int)OCEAN_BATALIA.z >> 0x1f))) &&
       (OCEAN_BATALIA.z <= g_heroPosition.z - DAT_00969de8)) {
      iVar2 = sound::IsMobyPlayingSound(g_heroMobyPtr,(int)DAT_0096bf92);
      if (iVar2 != 0) {
        sound::sound_Kill((int)DAT_0096bf92);
        DAT_0096bf92 = -1;
      }
      local_c0.x = g_heroPosition.x;
      local_c0.y = g_heroPosition.y;
      local_c0.w = g_heroPosition.w;
      local_c0.z = OCEAN_BATALIA.z;
      dVar17 = 3.0;
      iVar2 = FUN_00456478(0x4008000000000000,&local_c0);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x23) = 0x70;
      }
      dVar18 = 0.0;
      iVar2 = 0;
      dVar19 = 1.570796251296997;
      dVar20 = 3.141592502593994;
      dVar21 = -3.141592502593994;
      dVar22 = -0.16666656732559204;
      dVar23 = 0.008333025500178337;
      dVar24 = -0.0001980741071747616;
      dVar25 = 2.601886990305502e-06;
      dVar26 = 6.5;
      do {
        dVar7 = (double)mobyutil::MB_randRot();
        dVar8 = (double)mobyutil::MB_randRangeFloat
                                  ((float)dVar18,(float)((double)mobyutil::g_FrameTime * dVar17));
        dVar11 = (double)(float)(dVar7 + dVar19);
        dVar9 = (double)(float)(dVar20 - dVar7);
        if (dVar7 - (double)(float)(dVar20 - dVar7) < 0.0) {
          dVar9 = dVar7;
        }
        dVar13 = (double)(float)(dVar20 - dVar11);
        if (dVar11 - (double)(float)(dVar20 - dVar11) < 0.0) {
          dVar13 = dVar11;
        }
        dVar12 = (double)(float)(dVar21 - dVar7);
        if ((double)(float)(dVar21 - dVar7) - dVar9 < 0.0) {
          dVar12 = dVar9;
        }
        dVar9 = (double)(float)(dVar21 - dVar11);
        if ((double)(float)(dVar21 - dVar11) - dVar13 < 0.0) {
          dVar9 = dVar13;
        }
        dVar7 = (double)(float)(dVar12 * dVar12);
        dVar11 = (double)(float)(dVar9 * dVar9);
        dVar15 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar12));
        dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar9));
        dVar14 = (double)(float)(dVar7 * dVar15);
        dVar16 = (double)(float)(dVar11 * dVar13);
        local_ac = (float)((double)(float)((double)(float)(dVar7 * dVar14) * dVar25 +
                                          (double)(float)(dVar14 * dVar24 +
                                                         (double)(float)(dVar15 * dVar23 +
                                                                        (double)(float)((double)(
                                                  float)(dVar7 * dVar12) * dVar22 + dVar12)))) *
                          dVar8);
        local_b0 = (float)((double)(float)((double)(float)(dVar11 * dVar16) * dVar25 +
                                          (double)(float)(dVar16 * dVar24 +
                                                         (double)(float)(dVar13 * dVar23 +
                                                                        (double)(float)((double)(
                                                  float)(dVar11 * dVar9) * dVar22 + dVar9)))) *
                          dVar8);
        dVar9 = (double)mobyutil::MB_randRangeFloat
                                  ((float)((double)mobyutil::g_FrameTime * dVar17),
                                   (float)((double)mobyutil::g_FrameTime * dVar26));
        local_a8 = (float)dVar9;
        uVar3 = mobyutil::MB_randRange(0x5a,0x78);
        uVar4 = mobyutil::MB_randInt(2);
        partupd::SpawnPart_35(&local_c0,&local_b0,uVar4,uVar3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
      dVar17 = 1.0;
      iVar2 = 0;
      dVar18 = 0.05000000074505806;
      dVar19 = 0.699999988079071;
      dVar20 = 30.0;
      dVar21 = 60.0;
      do {
        mobyutil::MB_randSphere(dVar17,dVar17,&local_a0);
        local_a0 = local_a0 + local_c0.x;
        local_9c = local_9c + local_c0.y;
        local_98 = (float)((double)OCEAN_BATALIA.z + dVar18);
        uVar10 = mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar17);
        fVar1 = -2.0;
        if (iVar2 == 0) {
          fVar1 = 2.0;
        }
        iVar5 = partupd::SpawnPart_46(uVar10,(double)fVar1,&local_a0,&DAT_00a15d30);
        if (iVar5 != 0) {
          dVar22 = (double)mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar21);
          uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
          *(undefined2 *)(iVar5 + 10) = uVar6;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
    }
  }
  return;
}



//==== 003431c8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M328_003431c8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M328_003431c8(void)

{
  DAT_0083facc = 0x10000;
  return;
}



//==== 003431e0  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M328_003431e0(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M328_003431e0(int param_1)

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
          DAT_00a1bfa0 = DAT_0083fb00;
          DAT_00a1bfa4 = DAT_0083fb00;
          DAT_00a1bfa8 = DAT_0083fb00;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}



//==== 00343330  ns=mobyupdate_unsorted  size=0xe04
// sig: undefined UpdateMoby_328(MobyInstance * moby)
// callers(0): 
// callees(22): 000e8aa4 memcard::memcard_Save; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 00106308 mobyutil::MB_SetZBoundsFromPos; 00112a38 mobyutil::MB_ToastMessage; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 328 */

void mobyupdate_unsorted::UpdateMoby_328(MobyInstance *moby)

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
  bool bVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar18;
  undefined4 uVar19;
  MobyInstance *pMVar20;
  longlong lVar16;
  longlong lVar17;
  short sVar23;
  float *pfVar22;
  longlong lVar21;
  longlong lVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  undefined4 *puVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  double in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x160;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar14;
  puVar9[0x2e] = in_LR;
  puVar9[0x27] = in_f27;
  puVar9[0x28] = in_f28;
  puVar9[0x29] = in_f29;
  puVar9[0x2a] = (ulonglong)in_f30;
  puVar9[0x2b] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  gVar13 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar26 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  puVar9[0x20] = unaff_r25;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar18 = 0;
    puVar25 = &DAT_0095cd50;
    sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar25[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar25[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_0083fb00;
          DAT_00a1bfa4 = DAT_0083fb00;
          DAT_00a1bfa8 = DAT_0083fb00;
          sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar18 = iVar18 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar18 < sVar23);
    }
  }
  if (g_KeyLevelFlags._1132_4_ == 0) {
    if (moby->animationId != '\x01') {
      mobyutil::MB_SetAnimation(moby,1,0,2);
    }
  }
  else if (moby->animationId != '\0') {
    mobyutil::MB_SetAnimation(moby,0,0,2);
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
    FUN_004d3720(moby,uVar26 + 0x20);
    *(undefined4 *)((int)pvVar8 + 0x2c) = 0x3fd9999a;
    mobyutil::MB_SetZBoundsFromPos(moby);
    if (UnlockableItems.hydroPack != '\0') {
      *(undefined2 *)((int)pvVar8 + 0x56) = 0xffff;
    }
  }
  else if (bVar1 < 2) {
    if ((UnlockableItems.hydroPack == '\0') &&
       (iVar18 = FUN_004d3870(moby,uVar26 + 0x20), iVar18 != 0)) {
      mobyutil::MB_SetPointAheadOfMoby(0x400428f5c0000000,moby);
      moby->state = '\x02';
      moby->unk58 = 0.0;
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->unk58 = 1.0;
    mobyfunc::SetLevelFlag(moby->levelFlagIdx);
    iVar18 = *(int *)((int)pvVar8 + 0x160);
    if (iVar18 != -1) {
      respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar18].pos,(Vec4 *)&Cuboids[iVar18].rot);
    }
    moby->state = '\x01';
    if (*(short *)((int)pvVar8 + 0x24) == 2) {
      mobyutil::MB_UnlockItem(4,0);
      mobyutil::MB_ToastMessage(0x2ee6,0xffffffffffffffff);
      iVar18 = *(int *)((int)pvVar8 + 0x160);
      if (iVar18 != -1) {
        respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar18].pos,(Vec4 *)&Cuboids[iVar18].rot);
      }
      memcard::memcard_Save(0,-1);
    }
  }
  bVar12 = false;
  dVar35 = 0.019999999552965164;
  dVar28 = in_f30;
  dVar33 = in_f30;
  if (moby->animationId != '\0') goto LAB_00343a30;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  bVar12 = true;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_00343904:
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
    uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar10 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x150;
      lVar24 = uVar14 - 0x7c;
      lVar21 = uVar14 - 0x8c;
      lVar27 = 2;
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
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar5 * fVar5;
        iVar18 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0x8c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar11 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar28 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar28) goto LAB_00343904;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar26 + 0x184);
    }
    else {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x1c,0x3432d8);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x184,uVar26
                         );
      *(undefined4 *)((int)pvVar8 + 0x184U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = fastfunc::FastDecTimerS32(uVar26 + 0x188);
  if (iVar18 != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x188) = uVar19;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)fastfunc::FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar8 + 0x170));
    *(float *)((int)pvVar8 + 0x170) = *(float *)((int)pvVar8 + 0x170) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x174) = *(float *)((int)pvVar8 + 0x174) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x178) = *(float *)((int)pvVar8 + 0x178) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x184) == 0) {
    dVar33 = (double)*(float *)((int)pvVar8 + 0x170);
    dVar28 = (double)*(float *)((int)pvVar8 + 0x174);
    in_f30 = (double)*(float *)((int)pvVar8 + 0x178);
  }
  else {
    dVar33 = (double)hero::g_heroCGPos;
    dVar28 = (double)DAT_00969db4;
    in_f30 = (double)DAT_00969db8;
    dVar35 = 0.03999999910593033;
  }
LAB_00343a30:
  if (g_KeyLevelFlags._1132_4_ == 0) {
    iVar18 = *(int *)((int)pvVar8 + 0x164);
    if (iVar18 == 0) {
      pMVar20 = mobyfunc::CreateMoby(0x4c1);
      *(MobyInstance **)((int)pvVar8 + 0x164) = pMVar20;
      if (pMVar20 != (MobyInstance *)0x0) {
        pMVar20->drawDistance = moby->drawDistance;
        *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 1;
        iVar18 = *(int *)((int)pvVar8 + 0x164);
        *(f32 *)(iVar18 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar18 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar18 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar18 + 0x1c) = (moby->pos).w;
        iVar18 = *(int *)((int)pvVar8 + 0x164);
        *(f32 *)(iVar18 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar18 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar18 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar18 + 0x4c) = (moby->rotation).w;
        mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar8 + 0x164));
        *(undefined2 *)(*(int *)((int)pvVar8 + 0x164) + 0x34) = 0;
        mobyutil::MB_SetAnimation(*(undefined4 *)((int)pvVar8 + 0x164),1,0,2);
      }
    }
    else if (g_gameMode == GAME_MODE_SCENE) {
      *(ushort *)(iVar18 + 0x34) = *(ushort *)(iVar18 + 0x34) | 1;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 0;
    }
    else {
      *(ushort *)(iVar18 + 0x34) = *(ushort *)(iVar18 + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 1;
    }
    if (*(int *)((int)pvVar8 + 0x168) == 0) {
      pMVar20 = mobyfunc::CreateMoby(EDWINAS_WELDING_SHIELD);
      *(MobyInstance **)((int)pvVar8 + 0x168) = pMVar20;
      if (pMVar20 != (MobyInstance *)0x0) {
        pMVar20->drawDistance = moby->drawDistance;
        *(undefined1 *)(*(int *)((int)pvVar8 + 0x168) + 0x31) = 1;
        iVar18 = *(int *)((int)pvVar8 + 0x168);
        *(f32 *)(iVar18 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar18 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar18 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar18 + 0x1c) = (moby->pos).w;
        iVar18 = *(int *)((int)pvVar8 + 0x168);
        *(f32 *)(iVar18 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar18 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar18 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar18 + 0x4c) = (moby->rotation).w;
        mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar8 + 0x168));
      }
    }
    else if (g_gameMode == GAME_MODE_SCENE) {
      *(ushort *)(*(int *)((int)pvVar8 + 0x164) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar8 + 0x164) + 0x34) | 1;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 0;
      *(ushort *)(*(int *)((int)pvVar8 + 0x168) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar8 + 0x168) + 0x34) | 1;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x168) + 0x31) = 0;
    }
    else {
      *(ushort *)(*(int *)((int)pvVar8 + 0x164) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar8 + 0x164) + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x164) + 0x31) = 1;
      *(ushort *)(*(int *)((int)pvVar8 + 0x168) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar8 + 0x168) + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x168) + 0x31) = 1;
    }
  }
  else {
    if (*(MobyInstance **)((int)pvVar8 + 0x168) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar8 + 0x168));
      *(undefined4 *)((int)pvVar8 + 0x168) = 0;
    }
    if (*(MobyInstance **)((int)pvVar8 + 0x164) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar8 + 0x164));
      *(undefined4 *)((int)pvVar8 + 0x164) = 0;
    }
  }
  if (bVar12) {
    fVar2 = (float)(dVar33 - (double)(moby->pos).x);
    dVar34 = (double)fVar2;
    fVar3 = (float)(dVar28 - (double)(moby->pos).y);
    dVar32 = (double)fVar3;
    *(float *)((int)puVar9 + 0x7c) = fVar2;
    *(float *)(puVar9 + 0x10) = fVar3;
    dVar31 = (double)(float)(in_f30 - (double)((moby->pos).z + 1.0));
    *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar34) - ABS(dVar32));
    dVar33 = 0.0;
    uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    dVar28 = ABS((double)*(float *)((int)puVar9 + 0x7c));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      dVar28 = ABS(dVar32);
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    dVar30 = ABS((double)*(float *)(puVar9 + 0x10));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      dVar30 = ABS(dVar34);
    }
    fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    dVar29 = dVar33;
    if (0.0 < dVar28) {
      lVar16 = uVar14 - 0x150;
      lVar24 = uVar14 - 0x9c;
      lVar21 = uVar14 - 0xac;
      lVar27 = 2;
      fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
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
        *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xa4) * fVar5 * fVar5;
        iVar18 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xac;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      dVar28 = dVar33;
      do {
        iVar18 = (int)lVar16;
        iVar11 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0xb4)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
    }
    dVar30 = (double)fastfunc::FastDiffRots(dVar29,(double)(moby->rotation).z);
    *(float *)((int)puVar9 + 0x74) = (float)dVar31;
    fVar2 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
    dVar32 = ABS((double)fVar2);
    *(float *)(puVar9 + 0xe) = fVar2;
    *(float *)(puVar9 + 0xf) = (float)(dVar32 - ABS(dVar31));
    uVar15 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
    dVar28 = ABS((double)*(float *)(puVar9 + 0xe));
    if ((double)*(float *)(puVar9 + 0xf) - dVar33 < 0.0) {
      dVar28 = ABS(dVar31);
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    dVar31 = ABS((double)*(float *)((int)puVar9 + 0x74));
    if ((double)*(float *)(puVar9 + 0xf) - dVar33 < 0.0) {
      dVar31 = dVar32;
    }
    fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (dVar33 < dVar28) {
      lVar16 = uVar14 - 0x150;
      lVar21 = uVar14 - 0xcc;
      lVar24 = uVar14 - 0xbc;
      lVar27 = 2;
      fVar5 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
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
        *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x84) * fVar5 * fVar5;
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xcc;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar11 = (int)lVar24;
        lVar17 = lVar17 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar18 + 0x94)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar3);
    }
    dVar33 = -dVar33;
    dVar28 = 1.5707963705062866;
    if ((dVar30 <= 1.5707963705062866) && (dVar28 = dVar30, dVar30 < -1.5707963705062866)) {
      dVar28 = -1.5707963705062866;
    }
    dVar31 = 0.5235987901687622;
    if ((dVar33 <= 0.5235987901687622) && (dVar31 = dVar33, dVar33 < -0.5235987901687622)) {
      dVar31 = -0.5235987901687622;
    }
    *(float *)((int)pvVar8 + 0xc4) = (float)dVar31;
    *(float *)((int)pvVar8 + 200) = (float)(dVar28 * 0.5);
    *(float *)((int)pvVar8 + 0x148) = (float)(dVar28 * 0.5);
  }
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xd0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar26 + 0x60,1);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * dVar28),moby,uVar26 + 0xe0,0);
  return;
}



//==== 00344134  ns=mobyupdate_helpers  size=0x14
// sig: undefined M329_00344134(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M329_00344134(void)

{
  DAT_0083fb50 = 0x10000;
  return;
}



//==== 00344150  ns=Global  size=0x130
// sig: undefined FUN_00344150(void)
// callers(1): 00357a40 mobyupdate_unsorted::UpdateMoby_377
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance *
FUN_00344150(double param_1,undefined4 param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5,
            undefined4 param_6,undefined2 param_7)

{
  f32 fVar1;
  float fVar2;
  void *pvVar3;
  MobyClass *pMVar4;
  MobyInstance *pMVar5;
  
  pMVar5 = mobyfunc::CreateMoby(0x149);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = -1;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    pMVar5->setByGroup = '\0';
    pvVar3 = pMVar5->pVar;
    (pMVar5->pos).x = *param_3;
    (pMVar5->pos).y = param_3[1];
    (pMVar5->pos).z = param_3[2];
    fVar1 = param_3[3];
    pMVar5->drawDistance = 0xff;
    (pMVar5->pos).w = fVar1;
    *(undefined4 *)((int)pvVar3 + 0x40) = *param_4;
    *(undefined4 *)((int)pvVar3 + 0x44) = param_4[1];
    *(undefined4 *)((int)pvVar3 + 0x48) = param_4[2];
    *(undefined4 *)((int)pvVar3 + 0x4c) = param_4[3];
    (pMVar5->rotation).z = (float)param_1;
    pMVar4 = pMVar5->pClass;
    *(undefined4 *)((int)pvVar3 + 0x58) = param_2;
    fVar2 = pMVar4->gScale;
    *(undefined4 *)((int)pvVar3 + 0x5c) = param_6;
    *(undefined2 *)((int)pvVar3 + 0x56) = param_7;
    pMVar5->scale = fVar2 * 0.1;
    mobyfunc::UpdateMobyTransform(pMVar5);
    mobyutil::MB_CopyHeroLights(pMVar5);
  }
  return pMVar5;
}



//==== 00344328  ns=mobyupdate_unsorted  size=0x13e4
// sig: undefined UpdateMoby_329(MobyInstance * moby)
// callers(0): 
// callees(22): 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010d7a0 mobyutil::MB_PathFollowToPos; 0010dc70 mobyutil::MB_CheckCollPill; 0010e030 mobyutil::MB_genericExplosion; 0012bd28 partupd::SpawnPart_38; 001367d0 path::PathFindClosestPnt; 00342d38 FUN_00342d38; 003487b8 FUN_003487b8; 005000b4 fastfunc::FastDecTimerU8; 005001fc fastfunc::FastMemSet; 00500608 fastfunc::FastVecNormalize; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005cd098 libc::printf
// strings: 00656424: 'error, GunpVar was NULL!\n' | 00656444: 'error, Boss was NULL!\n' | 0065645c: 'error, BosspVar was NULL!\n' | 0065647c: 'error, path was NULL!\n'

/* Moby 329 */

void mobyupdate_unsorted::UpdateMoby_329(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float *pfVar9;
  float fVar10;
  int *piVar11;
  Spline *spline;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar25;
  longlong lVar23;
  longlong lVar24;
  short sVar27;
  int iVar26;
  ulonglong uVar28;
  float *pfVar30;
  longlong lVar29;
  longlong lVar31;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar32;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar33;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  undefined8 uVar38;
  ulonglong in_f21;
  double dVar39;
  ulonglong in_f22;
  double dVar40;
  ulonglong in_f23;
  double dVar41;
  double dVar42;
  ulonglong in_f24;
  double dVar43;
  double dVar44;
  ulonglong in_f25;
  double dVar45;
  double dVar46;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar47;
  ulonglong in_f28;
  double dVar48;
  ulonglong in_f29;
  double dVar49;
  double dVar50;
  ulonglong in_f30;
  double dVar51;
  double dVar52;
  ulonglong in_f31;
  double dVar53;
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar24 = uVar21 - 0x240;
  puVar14 = (ulonglong *)lVar24;
  *puVar14 = uVar21;
  puVar14[0x4a] = in_LR;
  puVar14[0x3a] = in_f18;
  puVar14[0x3b] = in_f19;
  puVar14[0x3c] = in_f20;
  puVar14[0x3d] = in_f21;
  puVar14[0x3e] = in_f22;
  puVar14[0x3f] = in_f23;
  puVar14[0x40] = in_f24;
  puVar14[0x41] = in_f25;
  puVar14[0x42] = in_f26;
  puVar14[0x43] = in_f27;
  puVar14[0x44] = in_f28;
  puVar14[0x45] = in_f29;
  puVar14[0x46] = in_f30;
  puVar14[0x47] = in_f31;
  puVar14[0x39] = unaff_r31;
  puVar14[0x38] = unaff_r30;
  puVar14[0x37] = unaff_r29;
  puVar14[0x36] = unaff_r28;
  puVar14[0x35] = unaff_r27;
  puVar14[0x34] = unaff_r26;
  puVar14[0x33] = unaff_r25;
  if (moby != (MobyInstance *)0x0) {
    pfVar9 = (float *)moby->pVar;
    uVar33 = ZEXT48(pfVar9);
    if (pfVar9 != (float *)0x0) {
      fVar10 = pfVar9[0x16];
      if (((fVar10 == 0.0) ||
          (*(char *)((int)fVar10 + 0x20) == -3 || *(char *)((int)fVar10 + 0x20) == -2)) ||
         (*(short *)((int)fVar10 + 0xa6) != 0x179)) {
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar22,uVar33 + 0x40,0,1,0xffffffffffffffff,10,3,0x10);
        mobyfunc::DeleteMoby(moby);
      }
      else {
        piVar11 = *(int **)((int)fVar10 + 0x78);
        if (piVar11 == (int *)0x0) {
          libc::printf("error, GunpVar was NULL!\n");
          mobyfunc::DeleteMoby(moby);
        }
        else {
          iVar26 = *piVar11;
          if (iVar26 == 0) {
            libc::printf("error, Boss was NULL!\n");
            mobyfunc::DeleteMoby(moby);
          }
          else {
            iVar32 = *(int *)(iVar26 + 0x78);
            if (iVar32 == 0) {
              libc::printf("error, BosspVar was NULL!\n");
              mobyfunc::DeleteMoby(moby);
            }
            else {
              spline = Splines[(int)pfVar9[0x17]];
              if (spline == (Spline *)0x0) {
                libc::printf("error, path was NULL!\n");
                mobyfunc::DeleteMoby(moby);
              }
              else {
                dVar49 = -0.949999988079071;
                dVar47 = 1.0;
                bVar1 = DAT_0083be04 == 0;
                moby->scale = (moby->pClass->gScale - moby->scale) * (DAT_0071f408 * -0.95 + 1.0) +
                              moby->scale;
                dVar51 = 0.3499999940395355;
                if (bVar1) {
                  dVar35 = (double)(moby->pos).z;
                }
                else {
                  dVar35 = (double)FUN_00342d38(lVar22 + 0x10);
                }
                dVar51 = (double)(float)(dVar35 + dVar51);
                if (moby->state != '\x05') {
                  iVar25 = mobyutil::MB_damage(lVar22,0x30000,0);
                  mobyutil::MB_HandleDamage(moby,iVar25,uVar33,0,puVar14 + 0x26,0,0,4);
                  if (iVar25 != 0) {
                    uVar12 = (int)*pfVar9 >> 0x1f;
                    uVar13 = (int)*(uint *)(iVar25 + 0x2c) >> 0x1f;
                    if ((int)((uVar13 >> 1 ^ *(uint *)(iVar25 + 0x2c)) - uVar13) <
                        (int)((uVar12 >> 1 ^ (uint)*pfVar9) - uVar12)) {
                      *pfVar9 = *pfVar9 - *(float *)(iVar25 + 0x2c);
                      fVar10 = *(float *)(iVar25 + 0x14);
                      fVar4 = *(float *)(iVar25 + 0x10);
                      fVar5 = *(float *)(iVar25 + 0x18);
                      fVar6 = 0.0;
                      fVar17 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar10 * fVar10);
                      fVar7 = (*(float *)(iVar25 + 0x2c) * 0.125) / fVar17;
                      fVar16 = fVar6;
                      if (0.0 - fVar17 < 0.0) {
                        fVar16 = fVar5 * fVar7;
                      }
                      fVar15 = fVar6;
                      if (0.0 - fVar17 < 0.0) {
                        fVar15 = fVar10 * fVar7;
                      }
                      if (0.0 - fVar17 < 0.0) {
                        fVar6 = fVar4 * fVar7;
                      }
                      if (fVar17 - 0.0 < 0.0) {
                        fVar16 = fVar5 * fVar7;
                      }
                      if (fVar17 - 0.0 < 0.0) {
                        fVar15 = fVar10 * fVar7;
                      }
                      if (fVar17 - 0.0 < 0.0) {
                        fVar6 = fVar4 * fVar7;
                      }
                      pfVar9[0x12] = pfVar9[0x12] + fVar16;
                      pfVar9[0x11] = pfVar9[0x11] + fVar15;
                      pfVar9[0x10] = pfVar9[0x10] + fVar6;
                    }
                    else {
                      *pfVar9 = 0.0;
                      moby->state = '\x05';
                      *(undefined2 *)(pfVar9 + 0x15) = 0xb4;
                    }
                    moby->damage = -1;
                  }
                }
                fVar5 = g_heroPosition.w;
                fVar4 = g_heroPosition.z;
                fVar10 = g_heroPosition.y;
                bVar2 = moby->state;
                if (bVar2 < 2) {
                  if (-1 < (int)(uint)bVar2) {
                    if (bVar2 == 0) {
                      moby->state = '\x01';
                      *pfVar9 = 5.0;
                      *(undefined2 *)(pfVar9 + 1) = 5;
                      *(undefined1 *)(pfVar9 + 2) = 0;
                      iVar26 = path::PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,spline);
                      *(short *)(pfVar9 + 0x18) = (short)iVar26;
                      fastfunc::FastMemSet
                                (iVar32 + *(short *)((int)pfVar9 + 0x56) * 0x40 + 0x50,0,0x40);
                      mobyfunc::AttachManipulator
                                (moby,3,iVar32 + (int)((longlong)*(short *)((int)pfVar9 + 0x56) << 6
                                                      ) + 0x50);
                    }
                    else if (g_heroState == TURRET_PLANE_UI) {
                      moby->state = '\x02';
                    }
                  }
                }
                else if (bVar2 < 5) {
                  if (bVar2 < 4) {
                    fVar7 = g_heroPosition.x - *(float *)(iVar26 + 0x10);
                    *(float *)(puVar14 + 0x18) = fVar7;
                    fVar10 = fVar10 - *(float *)(iVar26 + 0x14);
                    *(float *)((int)puVar14 + 0xc4) = fVar10;
                    fVar6 = *(float *)(iVar26 + 0x18);
                    *(float *)((int)puVar14 + 0xcc) = fVar5;
                    fVar4 = fVar4 - fVar6;
                    *(float *)(puVar14 + 0x19) = fVar4;
                    fVar10 = fVar10 * 0.3;
                    fVar7 = fVar7 * 0.3;
                    fVar4 = fVar4 * 0.3;
                    *(float *)(puVar14 + 0x18) = fVar7;
                    *(float *)((int)puVar14 + 0xc4) = fVar10;
                    *(float *)(puVar14 + 0x19) = fVar4;
                    dVar43 = (double)(moby->pos).x;
                    dVar35 = (double)(moby->pos).y;
                    dVar41 = (double)(moby->pos).z;
                    dVar40 = (double)(moby->pos).w;
                    fVar5 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar10 * fVar10);
                    if (fVar5 < 2.0) {
                      fVar17 = 2.0 / fVar5;
                      fVar15 = 0.0;
                      fVar16 = fVar7 * fVar17;
                      fVar6 = fVar10 * fVar17;
                      fVar17 = fVar4 * fVar17;
                      fVar7 = fVar15;
                      if (0.0 - fVar5 < 0.0) {
                        fVar7 = fVar16;
                      }
                      fVar10 = fVar15;
                      if (0.0 - fVar5 < 0.0) {
                        fVar10 = fVar6;
                      }
                      if (0.0 - fVar5 < 0.0) {
                        fVar15 = fVar17;
                      }
                      if (fVar5 - 0.0 < 0.0) {
                        fVar7 = fVar16;
                      }
                      if (fVar5 - 0.0 < 0.0) {
                        fVar10 = fVar6;
                      }
                      fVar4 = fVar15;
                      if (fVar5 - 0.0 < 0.0) {
                        fVar4 = fVar17;
                      }
                      *(float *)(puVar14 + 0x18) = fVar7;
                      *(float *)((int)puVar14 + 0xc4) = fVar10;
                      *(float *)(puVar14 + 0x19) = fVar4;
                    }
                    *(float *)(puVar14 + 0x18) = fVar7 + *(float *)(iVar26 + 0x10);
                    *(float *)((int)puVar14 + 0xc4) = fVar10 + *(float *)(iVar26 + 0x14);
                    *(float *)(puVar14 + 0x19) = fVar4 + *(float *)(iVar26 + 0x18);
                    dVar45 = 0.0;
                    mobyutil::MB_PathFollowToPos
                              (0x408f380000000000,0x4014000000000000,0,spline,uVar21 - 0x180,
                               uVar21 - 0x170,uVar21 - 0x108,uVar21 - 0x10c);
                    *(short *)(pfVar9 + 0x18) = (short)*(undefined4 *)(puVar14 + 0x27);
                    fVar10 = (moby->pos).y;
                    fVar16 = *(float *)((int)puVar14 + 0xd4) - fVar10;
                    fVar4 = (moby->pos).x;
                    fVar15 = *(float *)(puVar14 + 0x1a) - fVar4;
                    fVar5 = (moby->pos).z;
                    fVar17 = *(float *)(puVar14 + 0x1b) - fVar5;
                    *(undefined4 *)((int)puVar14 + 0xcc) = *(undefined4 *)((int)puVar14 + 0xdc);
                    *(float *)(puVar14 + 0x18) = fVar15;
                    *(float *)((int)puVar14 + 0xc4) = fVar16;
                    *(float *)(puVar14 + 0x19) = fVar17;
                    fVar6 = DAT_0071f408 * 0.5;
                    fVar7 = SQRT(fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16);
                    fVar18 = fVar6 / fVar7;
                    if (fVar6 - fVar7 < 0.0) {
                      fVar16 = fVar16 * fVar18;
                    }
                    if (fVar6 - fVar7 < 0.0) {
                      fVar15 = fVar15 * fVar18;
                    }
                    if (fVar6 - fVar7 < 0.0) {
                      fVar17 = fVar17 * fVar18;
                    }
                    fVar16 = fVar16 + fVar10;
                    fVar15 = fVar15 + fVar4;
                    fVar10 = (float)((double)fVar16 - dVar35);
                    fVar4 = (float)((double)fVar15 - dVar43);
                    *(float *)((int)puVar14 + 0xc4) = fVar16;
                    *(float *)(puVar14 + 0x18) = fVar15;
                    *(float *)(puVar14 + 0x19) = fVar17 + fVar5;
                    pfVar9[0x11] = fVar10;
                    pfVar9[0x10] = fVar4;
                    *(float *)(puVar14 + 0x29) = fVar4;
                    *(float *)((int)puVar14 + 0x14c) = fVar10;
                    (moby->pos).z = (float)dVar41;
                    (moby->pos).x = (float)dVar43;
                    (moby->pos).y = (float)dVar35;
                    *(float *)(puVar14 + 0x2a) = (float)(ABS((double)fVar4) - ABS((double)fVar10));
                    uVar12 = *(uint *)(puVar14 + 0x29);
                    fVar5 = *(float *)(puVar14 + 0x29);
                    (moby->pos).w = (float)dVar40;
                    fVar6 = (moby->rotation).z;
                    dVar40 = 0.7853981852531433;
                    uVar28 = (ulonglong)(uVar12 >> 0x1c) & 8 |
                             (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1e) & 2 |
                             (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1d) & 4;
                    dVar35 = ABS((double)fVar5);
                    if ((double)*(float *)(puVar14 + 0x2a) - dVar45 < 0.0) {
                      dVar35 = ABS((double)fVar10);
                    }
                    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
                    dVar41 = ABS((double)*(float *)((int)puVar14 + 0x14c));
                    if ((double)*(float *)(puVar14 + 0x2a) - dVar45 < 0.0) {
                      dVar41 = ABS((double)fVar4);
                    }
                    fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
                    dVar43 = dVar45;
                    if (dVar45 < dVar35) {
                      lVar23 = uVar21 - 0x230;
                      lVar29 = uVar21 - 0xcc;
                      lVar31 = uVar21 - 0xbc;
                      lVar34 = 2;
                      fVar5 = (float)(dVar41 - dVar35) / (float)(dVar41 + dVar35);
                      fVar7 = fVar5 * fVar5;
                      *(float *)(puVar14 + 0x30) = fVar5;
                      *(float *)(puVar14 + 0x2f) = fVar5;
                      *(float *)((int)puVar14 + 0x17c) = fVar5;
                      *(float *)((int)puVar14 + 0x174) = fVar5;
                      fVar5 = fVar7 * fVar7;
                      *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar7;
                      *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar5;
                      *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar5 * fVar7;
                      do {
                        *(float *)((int)lVar23 + 0x174) =
                             *(float *)((int)lVar23 + 0x164) * fVar5 * fVar5;
                        iVar26 = (int)lVar29;
                        lVar23 = lVar23 + 8;
                        lVar29 = lVar29 + 8;
                        *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar5 * fVar5;
                        lVar31 = lVar31 + 8;
                        lVar34 = lVar34 + -1;
                      } while (lVar34 != 0);
                      lVar34 = 4;
                      lVar31 = uVar21 - 0xcc;
                      pfVar30 = (float *)&DAT_007358e0;
                      lVar23 = lVar24;
                      lVar29 = lVar31;
                      do {
                        fVar5 = *pfVar30;
                        fVar7 = pfVar30[1];
                        pfVar30 = pfVar30 + 2;
                        *(float *)((int)lVar23 + 0x174) = *(float *)((int)lVar23 + 0x174) * fVar5;
                        lVar23 = lVar23 + 8;
                        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
                        lVar29 = lVar29 + 8;
                        lVar34 = lVar34 + -1;
                      } while (lVar34 != 0);
                      lVar29 = 2;
                      lVar23 = lVar24;
                      dVar35 = dVar45;
                      do {
                        iVar26 = (int)lVar23;
                        lVar23 = lVar23 + 0x10;
                        iVar25 = (int)lVar31;
                        lVar31 = lVar31 + 0x10;
                        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar26 + 0x174)) +
                                          *(float *)(iVar25 + 4) + *(float *)(iVar25 + 8) +
                                         *(float *)(iVar25 + 0xc));
                        lVar29 = lVar29 + -1;
                      } while (lVar29 != 0);
                      dVar43 = (double)((float)(dVar35 + 0.7853981852531433) * fVar10 + fVar4);
                    }
                    dVar35 = (double)fastfunc::FastDiffRots(dVar43,(double)fVar6);
                    fVar10 = (float)(dVar35 * (double)(float)((double)DAT_0071f408 * dVar49 + dVar47
                                                             ));
                    dVar41 = (double)fVar10;
                    dVar35 = (double)fastfunc::FastWrapRot((moby->rotation).z,fVar10);
                    (moby->rotation).z = (float)dVar35;
                    (moby->rotation).x = (float)(dVar41 * 4.0);
                    mobyfunc::GetBonePosition(lVar22,3,uVar21 - 0x160);
                    fVar10 = g_heroPosition.x - (moby->pos).x;
                    fVar4 = g_heroPosition.y - (moby->pos).y;
                    dVar41 = ABS((double)fVar10);
                    dVar43 = ABS((double)fVar4);
                    *(float *)((int)puVar14 + 0x13c) = fVar10;
                    *(float *)(puVar14 + 0x28) = fVar4;
                    fVar10 = (moby->rotation).z;
                    *(float *)((int)puVar14 + 0x144) = (float)(dVar41 - dVar43);
                    uVar28 = (ulonglong)(*(uint *)((int)puVar14 + 0x13c) >> 0x1c) & 8 |
                             (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1e) & 2 |
                             (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1d) & 4;
                    dVar35 = ABS((double)*(float *)((int)puVar14 + 0x13c));
                    if ((double)*(float *)((int)puVar14 + 0x144) - dVar45 < 0.0) {
                      dVar35 = dVar43;
                    }
                    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
                    fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
                    dVar43 = ABS((double)*(float *)(puVar14 + 0x28));
                    if ((double)*(float *)((int)puVar14 + 0x144) - dVar45 < 0.0) {
                      dVar43 = dVar41;
                    }
                    dVar41 = dVar45;
                    if (dVar45 < dVar35) {
                      lVar23 = uVar21 - 0x230;
                      lVar29 = uVar21 - 0xec;
                      lVar31 = uVar21 - 0xdc;
                      lVar34 = 2;
                      fVar6 = (float)(dVar43 - dVar35) / (float)(dVar43 + dVar35);
                      fVar7 = fVar6 * fVar6;
                      *(float *)(puVar14 + 0x2c) = fVar6;
                      *(float *)(puVar14 + 0x2b) = fVar6;
                      *(float *)((int)puVar14 + 0x15c) = fVar6;
                      *(float *)((int)puVar14 + 0x154) = fVar6;
                      fVar6 = fVar7 * fVar7;
                      *(float *)(puVar14 + 0x2b) = *(float *)(puVar14 + 0x2b) * fVar7;
                      *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar6;
                      *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar6 * fVar7;
                      do {
                        *(float *)((int)lVar23 + 0x154) =
                             *(float *)((int)lVar23 + 0x144) * fVar6 * fVar6;
                        iVar26 = (int)lVar29;
                        lVar23 = lVar23 + 8;
                        lVar29 = lVar29 + 8;
                        *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
                        lVar31 = lVar31 + 8;
                        lVar34 = lVar34 + -1;
                      } while (lVar34 != 0);
                      lVar34 = 4;
                      lVar31 = uVar21 - 0xec;
                      pfVar30 = (float *)&DAT_007358e0;
                      lVar23 = lVar24;
                      lVar29 = lVar31;
                      do {
                        fVar6 = *pfVar30;
                        fVar7 = pfVar30[1];
                        pfVar30 = pfVar30 + 2;
                        *(float *)((int)lVar23 + 0x154) = *(float *)((int)lVar23 + 0x154) * fVar6;
                        lVar23 = lVar23 + 8;
                        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
                        lVar29 = lVar29 + 8;
                        lVar34 = lVar34 + -1;
                      } while (lVar34 != 0);
                      lVar23 = 2;
                      dVar35 = dVar45;
                      do {
                        iVar26 = (int)lVar24;
                        lVar24 = lVar24 + 0x10;
                        iVar25 = (int)lVar31;
                        lVar31 = lVar31 + 0x10;
                        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar26 + 0x154)) +
                                          *(float *)(iVar25 + 4) + *(float *)(iVar25 + 8) +
                                         *(float *)(iVar25 + 0xc));
                        lVar23 = lVar23 + -1;
                      } while (lVar23 != 0);
                      dVar41 = (double)((float)(dVar35 + dVar40) * fVar5 + fVar4);
                    }
                    uVar38 = fastfunc::FastDiffRots(dVar41,(double)fVar10);
                    dVar35 = (double)fastfunc::FastDiffRots(uVar38,(double)pfVar9[0x1a]);
                    dVar49 = (double)fastfunc::FastWrapRot
                                               (pfVar9[0x1a],
                                                (float)(dVar35 * (double)(float)((double)
                                                  DAT_0071f408 * dVar49 + dVar47)));
                    pfVar9[0x1a] = (float)dVar49;
                    fastfunc::FastQuaternionToEuler
                              (iVar32 + *(short *)((int)pfVar9 + 0x56) * 0x40 + 0x60,2);
                    fastfunc::FastDecTimerU8(uVar33 + 99);
                    iVar26 = 0;
                    bVar1 = true;
                    iVar32 = 0;
                    do {
                      if (((iVar26 != *(short *)((int)pfVar9 + 0x56)) &&
                          (iVar25 = *(int *)(*(int *)((int)pfVar9[0x16] + 0x78) + iVar32 + 0x10),
                          iVar25 != 0)) &&
                         ((iVar25 = *(int *)(iVar25 + 0x78), iVar25 != 0 &&
                          (*(char *)(iVar25 + 99) != '\0')))) {
                        bVar1 = false;
                        break;
                      }
                      iVar26 = iVar26 + 1;
                      iVar32 = iVar32 + 4;
                    } while (iVar26 < 4);
                    iVar26 = fastfunc::FastDecTimerU8(uVar33 + 0x51);
                    if (((iVar26 != 0) && (bVar1)) &&
                       ((uVar38 = 0x3fc99999a0000000, dVar35 < 0.20000000298023224 &&
                        (moby->enabled != '\0')))) {
                      dVar35 = (double)(mobyutil::g_FrameTime * 30.0);
                      dVar49 = (double)fastfunc::FastWrapRot(pfVar9[0x1a],(moby->rotation).z);
                      mobyutil::MB_SphericalToVector
                                ((float)dVar35,(float)dVar49,(float)dVar45,(float *)(puVar14 + 0x1e)
                                );
                      *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) + pfVar9[0x10];
                      *(float *)((int)puVar14 + 0xf4) =
                           *(float *)((int)puVar14 + 0xf4) + pfVar9[0x11];
                      *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) + pfVar9[0x12];
                      mobyfunc::GetBonePosition(lVar22,5,uVar21 - 0x140);
                      fVar10 = *(float *)(puVar14 + 0x20) + *(float *)(puVar14 + 0x1e);
                      fVar4 = *(float *)((int)puVar14 + 0x104) + *(float *)((int)puVar14 + 0xf4);
                      fVar5 = *(float *)(puVar14 + 0x21) + *(float *)(puVar14 + 0x1f);
                      *(float *)(puVar14 + 0x20) = fVar10;
                      *(float *)((int)puVar14 + 0x104) = fVar4;
                      *(float *)(puVar14 + 0x21) = fVar5;
                      *(float *)(puVar14 + 8) = fVar10;
                      *(float *)(puVar14 + 9) = fVar5;
                      *(float *)(puVar14 + 10) = *(float *)(puVar14 + 0x1e);
                      *(float *)(puVar14 + 0xb) = *(float *)(puVar14 + 0x1f);
                      *(float *)((int)puVar14 + 0x44) = fVar4;
                      *(undefined4 *)((int)puVar14 + 0x4c) = *(undefined4 *)((int)puVar14 + 0x10c);
                      *(float *)((int)puVar14 + 0x54) = *(float *)((int)puVar14 + 0xf4);
                      *(undefined4 *)((int)puVar14 + 0x5c) = *(undefined4 *)((int)puVar14 + 0xfc);
                      puVar14[0xe] = 0;
                      FUN_003487b8(0x3fd0000000000000,0xbff0000000000000,0x3fb99999a0000000,uVar38,
                                   lVar22);
                      cVar3 = *(char *)(pfVar9 + 0x14);
                      *(char *)(pfVar9 + 0x14) = cVar3 + '\x01';
                      if ((char)(cVar3 + '\x01') == '\x03') {
                        *(undefined1 *)((int)pfVar9 + 0x51) = 0xf0;
                        *(undefined1 *)(pfVar9 + 0x14) = 0;
                      }
                      else {
                        *(undefined1 *)((int)pfVar9 + 0x51) = 0x18;
                      }
                      *(undefined1 *)((int)pfVar9 + 99) = 0x19;
                    }
                  }
                }
                else if (bVar2 < 6) {
                  puVar14[0x12] = 0xffffffffffffffff;
                  puVar14[0x14] = 1;
                  puVar14[0x15] = 1;
                  puVar14[0x16] = 0xffffffffffffffff;
                  puVar14[0x17] = 0;
                  mobyutil::MB_genericExplosion
                            (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,dVar47,
                             0x402e000000000000,lVar22,uVar33 + 0x40,0,1,0xffffffffffffffff,10,3,
                             0x10);
                  *(short *)((int)piVar11 + 0xe) = *(short *)((int)piVar11 + 0xe) + -1;
                  *(undefined4 *)
                   ((int)piVar11 + (int)((longlong)*(short *)((int)pfVar9 + 0x56) << 2) + 0x10) = 0;
                  sVar27 = *(short *)((int)pfVar9 + 0x56);
                  iVar26 = iVar32 + (int)((longlong)sVar27 << 6);
                  if (*(char *)(iVar26 + 0x51) != '\0') {
                    mobyfunc::DetachManipulator(moby,iVar26 + 0x50);
                    sVar27 = *(short *)((int)pfVar9 + 0x56);
                  }
                  fastfunc::FastMemSet(iVar32 + sVar27 * 0x40 + 0x50,0,0x40);
                  mobyfunc::DeleteMoby(moby);
                  return;
                }
                fVar10 = pfVar9[0x11];
                fVar4 = pfVar9[0x10];
                dVar49 = 0.550000011920929;
                dVar35 = (double)((moby->pos).z + pfVar9[0x12]);
                fVar5 = SQRT(fVar4 * fVar4 + fVar10 * fVar10);
                if (DAT_0071f408 * 0.55 < fVar5) {
                  fVar5 = (DAT_0071f408 * 0.55) / fVar5;
                  pfVar9[0x10] = fVar4 * fVar5;
                  pfVar9[0x11] = fVar10 * fVar5;
                }
                iVar26 = mobyutil::MB_CheckCollPill(moby,4,0,0);
                if (dVar35 < dVar51) {
                  if (moby->state == '\x02') {
                    moby->state = '\x03';
                  }
                  pfVar9[0x12] = (float)(dVar51 - dVar35) * 0.2 + pfVar9[0x12];
                  dVar50 = 1.570796251296997;
                  fVar10 = (moby->rotation).z;
                  dVar48 = 3.141592502593994;
                  fVar5 = fVar10 + 1.5707963;
                  dVar45 = -3.141592502593994;
                  dVar43 = -0.16666656732559204;
                  dVar41 = 0.008333025500178337;
                  dVar40 = -0.0001980741071747616;
                  dVar51 = 2.601886990305502e-06;
                  dVar35 = 1.5707963705062866;
                  fVar4 = 3.1415925 - fVar10;
                  if (fVar10 - (3.1415925 - fVar10) < 0.0) {
                    fVar4 = fVar10;
                  }
                  fVar6 = 3.1415925 - fVar5;
                  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
                    fVar6 = fVar5;
                  }
                  fVar7 = -3.1415925 - fVar10;
                  if ((-3.1415925 - fVar10) - fVar4 < 0.0) {
                    fVar7 = fVar4;
                  }
                  fVar4 = -3.1415925 - fVar5;
                  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
                    fVar4 = fVar6;
                  }
                  fVar16 = fVar7 * fVar7;
                  fVar18 = fVar4 * fVar4;
                  fVar5 = fVar16 * fVar16 * fVar7;
                  fVar17 = fVar18 * fVar18 * fVar4;
                  fVar6 = fVar16 * fVar5;
                  fVar15 = fVar18 * fVar17;
                  dVar52 = (double)(fVar16 * fVar6 * 2.601887e-06 +
                                   fVar6 * -0.0001980741 +
                                   fVar5 * 0.0083330255 + fVar16 * fVar7 * -0.16666657 + fVar7);
                  dVar53 = (double)(fVar18 * fVar15 * 2.601887e-06 +
                                   fVar15 * -0.0001980741 +
                                   fVar17 * 0.0083330255 + fVar18 * fVar4 * -0.16666657 + fVar4);
                  dVar36 = (double)fastfunc::FastWrapRot(fVar10,1.5707964);
                  dVar36 = (double)(float)(dVar36 + dVar50);
                  dVar50 = (double)(float)(dVar48 - dVar36);
                  if (dVar36 - (double)(float)(dVar48 - dVar36) < 0.0) {
                    dVar50 = dVar36;
                  }
                  dVar39 = (double)(float)(dVar45 - dVar36);
                  if ((double)(float)(dVar45 - dVar36) - dVar50 < 0.0) {
                    dVar39 = dVar50;
                  }
                  dVar50 = (double)(float)(dVar39 * dVar39);
                  dVar37 = (double)(float)(dVar50 * (double)(float)(dVar50 * dVar39));
                  dVar36 = (double)(float)(dVar50 * dVar37);
                  dVar36 = (double)(float)((double)(float)(dVar50 * dVar36) * dVar51 +
                                          (double)(float)(dVar36 * dVar40 +
                                                         (double)(float)(dVar37 * dVar41 +
                                                                        (double)(float)((double)(
                                                  float)(dVar50 * dVar39) * dVar43 + dVar39))));
                  dVar50 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar35);
                  iVar32 = 0;
                  dVar35 = (double)(float)(dVar48 - dVar50);
                  if (dVar50 - (double)(float)(dVar48 - dVar50) < 0.0) {
                    dVar35 = dVar50;
                  }
                  *(float *)(puVar14 + 0x24) = pfVar9[0x10] * 0.8;
                  dVar48 = (double)(float)(dVar45 - dVar50);
                  if ((double)(float)(dVar45 - dVar50) - dVar35 < 0.0) {
                    dVar48 = dVar35;
                  }
                  *(float *)((int)puVar14 + 0x124) = pfVar9[0x11] * 0.8;
                  dVar35 = (double)(float)(dVar48 * dVar48);
                  *(float *)(puVar14 + 0x25) = pfVar9[0x12] * 0.8;
                  *(float *)((int)puVar14 + 300) = pfVar9[0x13];
                  dVar46 = -0.5;
                  dVar50 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar48));
                  dVar44 = 0.5;
                  dVar45 = (double)(float)(dVar35 * dVar50);
                  dVar42 = 0.0010000000474974513;
                  dVar37 = 0.029999999329447746;
                  dVar39 = 0.0;
                  uVar38 = 0x3f747ae140000000;
                  dVar51 = (double)(float)((double)(float)(dVar35 * dVar45) * dVar51 +
                                          (double)(float)(dVar45 * dVar40 +
                                                         (double)(float)(dVar50 * dVar41 +
                                                                        (double)(float)((double)(
                                                  float)(dVar35 * dVar48) * dVar43 + dVar48))));
                  do {
                    dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar46,(float)dVar44);
                    dVar45 = (double)(float)(dVar35 * dVar36);
                    fVar10 = (moby->pos).x;
                    dVar41 = (double)(float)(dVar35 * dVar51);
                    fVar4 = (moby->pos).y;
                    fVar8 = (moby->pos).w;
                    *(f32 *)(puVar14 + 0x23) = (moby->pos).z;
                    *(f32 *)((int)puVar14 + 0x11c) = fVar8;
                    *(float *)(puVar14 + 0x22) = (float)((double)fVar10 + dVar45);
                    *(float *)((int)puVar14 + 0x114) = (float)((double)fVar4 + dVar41);
                    dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar42,(float)dVar37);
                    dVar40 = (double)SQRT((float)(dVar45 * dVar45 + (double)(float)(dVar41 * dVar41)
                                                 ));
                    dVar43 = (double)(float)(dVar41 * (double)(float)(dVar35 / dVar40));
                    dVar41 = (double)(float)(dVar45 * (double)(float)(dVar35 / dVar40));
                    dVar35 = dVar39;
                    if (dVar39 - dVar40 < 0.0) {
                      dVar35 = dVar43;
                    }
                    dVar45 = dVar39;
                    if (dVar39 - dVar40 < 0.0) {
                      dVar45 = dVar41;
                    }
                    if (dVar40 - dVar39 < 0.0) {
                      dVar35 = dVar43;
                    }
                    if (dVar40 - dVar39 < 0.0) {
                      dVar45 = dVar41;
                    }
                    *(float *)((int)puVar14 + 0x124) =
                         (float)((double)*(float *)((int)puVar14 + 0x124) + dVar35);
                    *(float *)(puVar14 + 0x24) =
                         (float)((double)*(float *)(puVar14 + 0x24) + dVar45);
                    dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar47);
                    *(float *)(puVar14 + 0x22) =
                         (float)(dVar35 * dVar53 + (double)*(float *)(puVar14 + 0x22));
                    *(float *)((int)puVar14 + 0x114) =
                         (float)(dVar35 * dVar52 + (double)*(float *)((int)puVar14 + 0x114));
                    partupd::SpawnPart_38(dVar44,uVar38,uVar21 - 0x130,uVar21 - 0x120);
                    iVar32 = iVar32 + 1;
                  } while (iVar32 < 3);
                  *(float *)(puVar14 + 0x24) = (float)((double)pfVar9[0x10] * dVar44);
                  *(float *)((int)puVar14 + 0x124) = (float)((double)pfVar9[0x11] * dVar44);
                  *(float *)(puVar14 + 0x25) = (float)((double)pfVar9[0x12] * dVar44);
                  *(float *)((int)puVar14 + 300) = pfVar9[0x13];
                  dVar47 = (double)mobyutil::MB_randRangeFloat(-0.03,(float)dVar39);
                  *(float *)(puVar14 + 0x24) =
                       (float)(dVar47 * dVar53 + (double)*(float *)(puVar14 + 0x24));
                  *(float *)((int)puVar14 + 0x124) =
                       (float)(dVar47 * dVar52 + (double)*(float *)((int)puVar14 + 0x124));
                  dVar47 = (double)mobyutil::MB_randRangeFloat(-0.15,0.15);
                  fVar10 = (moby->pos).x;
                  fVar4 = (moby->pos).y;
                  fVar8 = (moby->pos).w;
                  *(f32 *)(puVar14 + 0x23) = (moby->pos).z;
                  *(f32 *)((int)puVar14 + 0x11c) = fVar8;
                  *(float *)(puVar14 + 0x22) = (float)(dVar47 * dVar36 + (double)fVar10);
                  *(float *)((int)puVar14 + 0x114) = (float)(dVar47 * dVar51 + (double)fVar4);
                  partupd::SpawnPart_38(dVar44,0x3f7cac0840000000,uVar21 - 0x130,uVar21 - 0x120);
                }
                fVar5 = CollOutput.push.z;
                fVar4 = CollOutput.push.y;
                fVar10 = CollOutput.push.x;
                if (iVar26 != 0) {
                  fVar7 = CollOutput.push.y - (moby->pos).y;
                  fVar15 = CollOutput.push.x - (moby->pos).x;
                  fVar18 = CollOutput.push.z - (moby->pos).z;
                  fVar16 = 0.0;
                  (moby->pos).w = CollOutput.push.w;
                  fVar6 = SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar7 * fVar7);
                  fVar20 = 0.015 / fVar6;
                  fVar17 = fVar16;
                  if (0.0 - fVar6 < 0.0) {
                    fVar17 = fVar18 * fVar20;
                  }
                  fVar19 = fVar16;
                  if (0.0 - fVar6 < 0.0) {
                    fVar19 = fVar7 * fVar20;
                  }
                  if (0.0 - fVar6 < 0.0) {
                    fVar16 = fVar15 * fVar20;
                  }
                  if (fVar6 - 0.0 < 0.0) {
                    fVar17 = fVar18 * fVar20;
                  }
                  if (fVar6 - 0.0 < 0.0) {
                    fVar19 = fVar7 * fVar20;
                  }
                  if (fVar6 - 0.0 < 0.0) {
                    fVar16 = fVar15 * fVar20;
                  }
                  (moby->pos).z = fVar5 + fVar17;
                  (moby->pos).y = fVar4 + fVar19;
                  (moby->pos).x = fVar10 + fVar16;
                  fastfunc::FastVecNormalize(uVar33 + 0x40,uVar33 + 0x40,0xa10980);
                  pfVar9[0x10] = pfVar9[0x10] * 0.25;
                  pfVar9[0x11] = pfVar9[0x11] * 0.25;
                  pfVar9[0x12] = pfVar9[0x12] * 0.25;
                }
                fVar10 = pfVar9[0x11] * 0.99;
                fVar4 = pfVar9[0x10] * 0.99;
                pfVar9[0x11] = fVar10;
                pfVar9[0x10] = fVar4;
                pfVar9[0x12] = pfVar9[0x12] * 0.99 - 0.00272222;
                fVar5 = SQRT(fVar4 * fVar4 + fVar10 * fVar10);
                if ((float)((double)DAT_0071f408 * dVar49) < fVar5) {
                  fVar5 = (float)((double)DAT_0071f408 * dVar49) / fVar5;
                  fVar4 = fVar4 * fVar5;
                  pfVar9[0x10] = fVar4;
                  pfVar9[0x11] = fVar10 * fVar5;
                }
                fVar4 = (moby->pos).x + fVar4;
                (moby->pos).x = fVar4;
                fVar10 = (moby->pos).y + pfVar9[0x11];
                (moby->pos).y = fVar10;
                (moby->pos).z = (moby->pos).z + pfVar9[0x12];
                if (fVar4 < 2.0) {
                  (moby->pos).x = 2.0;
                  fVar4 = 2.0;
                }
                if (510.0 < fVar4) {
                  (moby->pos).x = 510.0;
                }
                if (fVar10 < 2.0) {
                  (moby->pos).y = 2.0;
                  fVar10 = 2.0;
                }
                if (510.0 < fVar10) {
                  (moby->pos).y = 510.0;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



//==== 0034570c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M331_0034570c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M331_0034570c(void)

{
  DAT_0083fbc0 = 0x10000;
  return;
}



//==== 00345720  ns=mobyupdate_unsorted  size=0x28
// sig: undefined UpdateMoby_331(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 331 */

void mobyupdate_unsorted::UpdateMoby_331(MobyInstance *moby)

{
  if (moby < MobyInstancePermEnd) {
    moby->unk58 = 0.0;
    moby->modeBits = moby->modeBits | UNK_40;
  }
  return;
}



//==== 00345798  ns=mobyupdate_helpers  size=0x568
// sig: undefined M333_00345798(void)
// callers(1): 00345d08 mobyupdate_helpers::M333_00345d08
// callees(8): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 001268f8 partupd::SpawnPart_21; 00126f50 partupd::SpawnPart_23; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M333_00345798
               (double param_1,double param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_d0 [16];
  undefined1 local_c0 [32];
  
  dVar8 = 1.0;
  uVar9 = 0;
  dVar10 = 0.009999999776482582;
  if (0 < param_8) {
    iVar6 = 0;
    uVar11 = 0x3f747ae140000000;
    dVar12 = 0.10000000149011612;
    dVar14 = (double)(float)(param_1 * 210000.0 +
                            (double)((float)(param_2 - param_1) / (float)(longlong)param_8));
    dVar13 = 1.0199999809265137;
    do {
      fastfunc::FastIntToDouble(iVar6);
      mobyutil::MB_randRangeSigned(uVar9,uVar11);
      mobyutil::MB_randRangeSigned(uVar9,uVar11);
      mobyutil::MB_randRangeFloat((float)((double)DAT_0083fd94 * dVar12),DAT_0083fd94);
      uVar2 = mobyutil::MB_randRange(0x30,0x70);
      mobyutil::MB_randRange(0x30,0x7f);
      uVar7 = mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar13);
      mobyutil::MB_randRange(0xfffffffffffffffe,2);
      iVar4 = partupd::SpawnPart_23((double)DAT_0083fd9c,dVar8,uVar7,dVar14,local_d0);
      if (iVar4 != 0) {
        iVar5 = mobyutil::MB_randInt(2);
        if (iVar5 != 0) {
          *(undefined1 *)(iVar4 + 3) = 0x44;
          uVar3 = mobyutil::MB_randRange(0x60,0xe0);
          *(uint *)(iVar4 + 4) =
               (uint)((uVar2 & 0xffffffff) << 0x18) |
               (uint)((uVar3 & 0xffffffff) << 0x10) | (uint)((uVar3 & 0xffffffff) << 8) |
               (uint)uVar3;
        }
        uVar1 = DAT_010c5104;
        *(undefined4 *)(iVar4 + 0x24) = 2;
        *(short *)(iVar4 + 10) = (short)uVar1;
        *(char *)(iVar4 + 0x2a) = (char)uVar2;
        *(char *)(iVar4 + 0x2b) = (char)DAT_010c5104;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_8);
  }
  mobyutil::MB_randRot();
  mobyutil::MB_randRot();
  dVar13 = 0.029999999329447746;
  mobyutil::MB_randRangeFloat((float)dVar10,0.03);
  dVar12 = 10.5;
  uVar9 = 0x40c3880000000000;
  dVar8 = 20.5;
  mobyutil::MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
  partupd::SpawnPart_21(uVar9,param_4,local_c0,0x4f007fff,0x1fffffff);
  mobyutil::MB_randRot();
  mobyutil::MB_randRot();
  mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar13);
  uVar9 = 0x40d3880000000000;
  mobyutil::MB_randRange
            ((int)((double)animationSpeed * dVar12),(int)((double)animationSpeed * dVar8));
  partupd::SpawnPart_21(uVar9,param_5,local_c0,0x4f007fff,0x1fffffff);
  return;
}



//==== 00345d08  ns=mobyupdate_helpers  size=0x198
// sig: undefined M333_00345d08(void)
// callers(2): 00345ea0 mobyupdate_helpers::M333_00345ea0; 00346610 mobyupdate_unsorted::UpdateMoby_333
// callees(1): 00345798 mobyupdate_helpers::M333_00345798

void mobyupdate_helpers::M333_00345d08
               (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [64];
  
  iVar1 = (int)(param_3 << 4);
  M333_00345798((double)(*(float *)(&DAT_0083fc1c + (int)(param_2 << 4)) * DAT_0083fd90),
                (double)(*(float *)(&DAT_0083fc1c + iVar1) * DAT_0083fd90),param_1,local_50,local_40
                ,param_4,iVar1 + 0x83fc10,param_4);
  return;
}



//==== 00345ea0  ns=mobyupdate_helpers  size=0x1ac
// sig: undefined M333_00345ea0(void)
// callers(0): 
// callees(1): 00345d08 mobyupdate_helpers::M333_00345d08

void mobyupdate_helpers::M333_00345ea0(undefined8 param_1)

{
  M333_00345d08(param_1,0,1,DAT_0083fda4);
  M333_00345d08(param_1,2,3,DAT_0083fda8);
  M333_00345d08(param_1,4,5,DAT_0083fdac);
  M333_00345d08(param_1,5,6,DAT_0083fdb0);
  M333_00345d08(param_1,6,7,DAT_0083fdb4);
  M333_00345d08(param_1,8,9,DAT_0083fdac);
  M333_00345d08(param_1,9,10,DAT_0083fdb0);
  M333_00345d08(param_1,10,0xb,DAT_0083fdb4);
  M333_00345d08(param_1,0xc,0xd,DAT_0083fdb8);
  M333_00345d08(param_1,0xe,0xf,DAT_0083fdb8);
  M333_00345d08(param_1,0x10,0x11,DAT_0083fdbc);
  M333_00345d08(param_1,0x14,0x15,DAT_0083fdbc);
  M333_00345d08(param_1,0x12,0x13,DAT_0083fdc0);
  M333_00345d08(param_1,0x16,0x17,DAT_0083fdc0);
  return;
}



//==== 00346060  ns=mobyupdate_helpers  size=0x518
// sig: undefined M333_00346060(void)
// callers(1): 00346610 mobyupdate_unsorted::UpdateMoby_333
// callees(1): 005026a0 fastfunc::FastSubRots

MobyInstance * mobyupdate_helpers::M333_00346060(int param_1)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar19;
  ulonglong unaff_r29;
  MobyInstance *pMVar20;
  ulonglong unaff_r30;
  ushort *puVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar27;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x110;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar13;
  puVar9[0x24] = in_LR;
  puVar9[0x1f] = in_f29;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1e] = unaff_r31;
  puVar9[0x1a] = unaff_r27;
  bVar2 = *(byte *)(param_1 + 0x21);
  puVar9[0x1d] = unaff_r30;
  puVar21 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
  puVar9[0x1c] = unaff_r29;
  puVar9[0x1b] = unaff_r28;
  puVar9[0x19] = unaff_r26;
  if (puVar21 == (ushort *)0x0) {
    pMVar19 = (MobyInstance *)0x0;
  }
  else {
    dVar27 = 0.0;
    pMVar19 = (MobyInstance *)0x0;
    fVar3 = *(float *)(param_1 + 0x10);
    pMVar20 = MobyInstance + (*puVar21 & 0x7fff);
    fVar4 = *(float *)(param_1 + 0x14);
    dVar28 = dVar27;
    dVar29 = dVar27;
    while( true ) {
      if ((pMVar20->oClass != BLARG_BOMBTHROWER) && (pMVar20->setByGroup == '\0')) {
        fVar8 = (pMVar20->pos).x - fVar3;
        fVar5 = (pMVar20->pos).y - fVar4;
        dVar24 = ABS((double)fVar8);
        dVar25 = ABS((double)fVar5);
        *(float *)((int)puVar9 + 0x7c) = fVar8;
        *(float *)(puVar9 + 0x10) = fVar5;
        *(float *)((int)puVar9 + 0x84) = (float)(dVar24 - dVar25);
        uVar16 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x7c));
        if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar25 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
          dVar25 = dVar24;
        }
        fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        dVar24 = dVar27;
        if (dVar27 < dVar23) {
          lVar14 = uVar13 - 0x100;
          lVar15 = uVar13 - 0x68;
          lVar17 = uVar13 - 0x58;
          lVar22 = 2;
          fVar6 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar9 + 0xb4) = fVar6;
          *(float *)((int)puVar9 + 0xac) = fVar6;
          *(float *)(puVar9 + 0x16) = fVar6;
          *(float *)(puVar9 + 0x15) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar7;
          *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar6;
          *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar6 * fVar6;
            iVar10 = (int)lVar15;
            lVar14 = lVar14 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar17 = uVar13 - 0x68;
          pfVar18 = (float *)&DAT_007358e0;
          lVar22 = 4;
          lVar14 = lVar1;
          lVar15 = lVar17;
          do {
            fVar6 = *pfVar18;
            fVar7 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar6;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar7;
            lVar15 = lVar15 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar15 = 2;
          lVar14 = lVar1;
          dVar23 = dVar27;
          do {
            iVar10 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            iVar11 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xa8)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar24 = (double)((float)(dVar23 + 0.7853981852531433) * fVar8 + fVar5);
        }
        fVar4 = g_heroPosition.y - fVar4;
        dVar26 = ABS((double)(g_heroPosition.x - fVar3));
        dVar25 = ABS((double)fVar4);
        *(float *)(puVar9 + 0xe) = g_heroPosition.x - fVar3;
        *(float *)((int)puVar9 + 0x74) = fVar4;
        *(float *)(puVar9 + 0xf) = (float)(dVar26 - dVar25);
        uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar9 + 0xe));
        if ((double)*(float *)(puVar9 + 0xf) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar9 + 0x74));
        if ((double)*(float *)(puVar9 + 0xf) - dVar27 < 0.0) {
          dVar25 = dVar26;
        }
        fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        dVar26 = dVar27;
        if (dVar27 < dVar23) {
          lVar14 = uVar13 - 0x100;
          lVar17 = uVar13 - 0x78;
          lVar15 = uVar13 - 0x88;
          lVar22 = 2;
          fVar8 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar5 = fVar8 * fVar8;
          *(float *)((int)puVar9 + 0x94) = fVar8;
          *(float *)((int)puVar9 + 0x8c) = fVar8;
          *(float *)(puVar9 + 0x12) = fVar8;
          *(float *)(puVar9 + 0x11) = fVar8;
          fVar8 = fVar5 * fVar5;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar5;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar8;
          *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar8 * fVar5;
          do {
            *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x78) * fVar8 * fVar8;
            iVar10 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar17 = uVar13 - 0x88;
          pfVar18 = (float *)&DAT_007358e0;
          lVar14 = lVar1;
          lVar15 = lVar17;
          do {
            fVar8 = *pfVar18;
            fVar5 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x88) * fVar8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
            lVar15 = lVar15 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar15 = 2;
          lVar14 = lVar1;
          dVar23 = dVar27;
          do {
            iVar10 = (int)lVar14;
            iVar11 = (int)lVar17;
            lVar14 = lVar14 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0x88)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar26 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar23 = (double)fastfunc::FastSubRots((float)dVar24,(float)dVar26);
        fVar4 = *(float *)(param_1 + 0x14);
        fVar3 = *(float *)(param_1 + 0x10);
        fVar5 = fVar4 - (pMVar20->pos).y;
        fVar8 = fVar3 - (pMVar20->pos).x;
        fVar6 = *(float *)(param_1 + 0x18) - (pMVar20->pos).z;
        dVar24 = (double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5);
        if (1.5707963705062866 <= dVar23) {
          if (((16.0 <= dVar24) && ((dVar24 < dVar29 || (dVar29 < 16.0)))) ||
             ((16.0 > dVar24 && (dVar29 < dVar24)))) {
            dVar28 = dVar23;
            dVar29 = dVar24;
            pMVar19 = pMVar20;
          }
        }
        else if (dVar28 < dVar23) {
          dVar28 = dVar23;
          dVar29 = dVar24;
          pMVar19 = pMVar20;
        }
      }
      if ((short)*puVar21 < -1) break;
      puVar12 = puVar21 + 1;
      puVar21 = puVar21 + 1;
      pMVar20 = MobyInstance + (*puVar12 & 0x7fff);
    }
  }
  return pMVar19;
}



//==== 00346610  ns=mobyupdate_unsorted  size=0x20d4
// sig: undefined UpdateMoby_333(MobyInstance * moby)
// callers(0): 
// callees(28): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00108180 mobyutil::MB_computeLobVelocity; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00110488 mobyutil::ClampVec3Magnitude; 001118d8 mobyutil::MB_getTarget; 00119a18 mobyfunc::DoManipulator; 00315198 FUN_00315198; 00345d08 mobyupdate_helpers::M333_00345d08; 00346060 mobyupdate_helpers::M333_00346060; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338; 005e8548 FUN_005e8548

/* Moby 333 */

void mobyupdate_unsorted::UpdateMoby_333(MobyInstance *moby)

{
  byte bVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  f32 fVar9;
  short sVar10;
  void *pvVar11;
  MobyInstance *pMVar12;
  uint uVar13;
  undefined2 uVar14;
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  MobyInstance *pMVar21;
  longlong lVar22;
  MobyModeBit MVar29;
  s8 sVar30;
  undefined4 uVar25;
  undefined1 uVar31;
  int iVar26;
  longlong lVar23;
  longlong lVar24;
  int iVar27;
  uint uVar28;
  longlong lVar32;
  ulonglong uVar33;
  float *pfVar36;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar37;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar38;
  double dVar39;
  ulonglong uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  ulonglong in_f31;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  lVar22 = (longlong)(int)moby;
  uVar40 = ZEXT48(&stack0x00000000);
  lVar24 = uVar40 - 0x290;
  puVar15 = (ulonglong *)lVar24;
  *puVar15 = uVar40;
  puVar15[0x54] = in_LR;
  puVar15[0x4f] = in_f29;
  puVar15[0x50] = in_f30;
  puVar15[0x51] = in_f31;
  puVar15[0x4e] = unaff_r31;
  dVar45 = 0.0;
  *(undefined4 *)((int)puVar15 + 0x104) = 0;
  puVar15[0x4d] = unaff_r30;
  iVar26 = DAT_0083fda0;
  dVar44 = 3.0;
  pvVar11 = moby->pVar;
  uVar37 = ZEXT48(pvVar11);
  puVar15[0x4c] = unaff_r29;
  puVar15[0x4b] = unaff_r28;
  puVar15[0x4a] = unaff_r27;
  mobyfunc::DoManipulator
            (0x4008000000000000,moby,(longlong)iVar26,(Manipulator *)((int)pvVar11 + 0x160));
  if ((moby->enabled != '\0') &&
     (dVar39 = (double)FUN_005e8548(lVar22 + 0x10,0x951500), dVar39 < 29.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar22);
    moby->shadow = '\x17';
  }
  if (moby->state == '\x03') {
    MVar29 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  }
  else {
    MVar29 = moby->modeBits | DRAW_SHADOW;
  }
  moby->modeBits = MVar29;
  if (moby->state == 'd') {
    dVar44 = (double)fastfunc::FastIntToDouble(DAT_010c5108);
    puVar15[0x48] = (longlong)(DAT_010c5108 - *(short *)((int)pvVar11 + 0x130));
    sVar10 = *(short *)((int)pvVar11 + 0x132);
    uVar40 = puVar15[0x48];
    puVar15[0x48] = (longlong)(int)sVar10;
    uVar37 = puVar15[0x48];
    puVar15[0x48] = (longlong)-(int)sVar10;
    sVar30 = fastfunc::FastDoubleToInt
                       ((double)((float)(longlong)puVar15[0x48] *
                                 (float)((double)(longlong)uVar40 / dVar44) +
                                (float)(longlong)uVar37));
    moby->alpha = sVar30;
    mobyupdate_helpers::M333_00345d08(lVar22,0,1,DAT_0083fda4);
    mobyupdate_helpers::M333_00345d08(lVar22,2,3,DAT_0083fda8);
    mobyupdate_helpers::M333_00345d08(lVar22,4,5,DAT_0083fdac);
    mobyupdate_helpers::M333_00345d08(lVar22,5,6,DAT_0083fdb0);
    mobyupdate_helpers::M333_00345d08(lVar22,6,7,DAT_0083fdb4);
    mobyupdate_helpers::M333_00345d08(lVar22,8,9,DAT_0083fdac);
    mobyupdate_helpers::M333_00345d08(lVar22,9,10,DAT_0083fdb0);
    mobyupdate_helpers::M333_00345d08(lVar22,10,0xb,DAT_0083fdb4);
    mobyupdate_helpers::M333_00345d08(lVar22,0xc,0xd,DAT_0083fdb8);
    mobyupdate_helpers::M333_00345d08(lVar22,0xe,0xf,DAT_0083fdb8);
    mobyupdate_helpers::M333_00345d08(lVar22,0x10,0x11,DAT_0083fdbc);
    mobyupdate_helpers::M333_00345d08(lVar22,0x14,0x15,DAT_0083fdbc);
    mobyupdate_helpers::M333_00345d08(lVar22,0x12,0x13,DAT_0083fdc0);
    mobyupdate_helpers::M333_00345d08(lVar22,0x16,0x17,DAT_0083fdc0);
    return;
  }
  uVar25 = mobyutil::MB_damage(lVar22,0x330000,0);
  mobyutil::MB_HandleDamage(moby,uVar25,uVar37 + 0x20,0,puVar15 + 0x20,(int)puVar15 + 0x104,0,4);
  if ((*(int *)(puVar15 + 0x20) != 1) && (moby->state != 'c')) {
    uVar28 = *(uint *)((int)puVar15 + 0x104);
    uVar13 = (int)uVar28 >> 0x1f;
    fVar4 = *(float *)((int)pvVar11 + 0x20) - *(float *)((int)puVar15 + 0x104);
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    *(float *)((int)pvVar11 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar45) {
      fVar4 = DAT_0071f418 * 30.0;
      *(undefined4 *)((int)pvVar11 + 0x84) = 0x3a03126f;
      *(float *)((int)pvVar11 + 0x80) = fVar4;
      fVar4 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar11 + 0x88) = DAT_0083fbfc * mobyutil::g_FrameTime;
      fVar5 = DAT_0083fc00;
      *(undefined1 *)((int)pvVar11 + 0xad) = 0;
      *(undefined4 *)((int)pvVar11 + 0x94) = 9;
      *(float *)((int)pvVar11 + 0x8c) = fVar5 * fVar4;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      dVar43 = ABS((double)fVar4);
      dVar46 = ABS((double)fVar5);
      *(float *)((int)puVar15 + 0x154) = fVar4;
      *(float *)(puVar15 + 0x2b) = fVar5;
      *(float *)((int)puVar15 + 0x15c) = (float)(dVar43 - dVar46);
      uVar33 = (ulonglong)(*(uint *)((int)puVar15 + 0x154) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x15c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar15 + 0x2b) >> 0x1d) & 4;
      uVar34 = uVar33 << 2 | 0x735900;
      dVar39 = ABS((double)*(float *)((int)puVar15 + 0x154));
      if ((double)*(float *)((int)puVar15 + 0x15c) - dVar45 < 0.0) {
        dVar39 = dVar46;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar33 << 2));
      fVar4 = *(float *)((int)uVar34 + 4);
      dVar46 = ABS((double)*(float *)(puVar15 + 0x2b));
      if ((double)*(float *)((int)puVar15 + 0x15c) - dVar45 < 0.0) {
        dVar46 = dVar43;
      }
      dVar43 = dVar45;
      if (dVar45 < dVar39) {
        lVar23 = uVar40 - 0x280;
        lVar32 = uVar40 - 0x70;
        lVar35 = uVar40 - 0x60;
        lVar38 = 2;
        fVar6 = (float)(dVar46 - dVar39) / (float)(dVar46 + dVar39);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar15 + 0x22c) = fVar6;
        *(float *)((int)puVar15 + 0x224) = fVar6;
        *(float *)(puVar15 + 0x45) = fVar6;
        *(float *)(puVar15 + 0x44) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar15 + 0x224) = *(float *)((int)puVar15 + 0x224) * fVar7;
        *(float *)(puVar15 + 0x45) = *(float *)(puVar15 + 0x45) * fVar6;
        *(float *)((int)puVar15 + 0x22c) = *(float *)((int)puVar15 + 0x22c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar23 + 0x220) = *(float *)((int)lVar23 + 0x210) * fVar6 * fVar6;
          iVar26 = (int)lVar32;
          lVar23 = lVar23 + 8;
          lVar32 = lVar32 + 8;
          *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
          lVar35 = lVar35 + 8;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        lVar38 = 4;
        lVar35 = uVar40 - 0x70;
        uVar34 = ZEXT48(&DAT_007358e0);
        lVar23 = lVar24;
        lVar32 = lVar35;
        do {
          pfVar36 = (float *)uVar34;
          fVar6 = pfVar36[1];
          uVar34 = uVar34 + 8;
          *(float *)((int)lVar23 + 0x220) = *(float *)((int)lVar23 + 0x220) * *pfVar36;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar6;
          lVar32 = lVar32 + 8;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        lVar32 = 2;
        lVar23 = lVar24;
        dVar39 = dVar45;
        do {
          iVar26 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar27 = (int)lVar35;
          lVar35 = lVar35 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar26 + 0x220)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        dVar43 = (double)((float)(dVar39 + 0.7853981852531433) * fVar5 + fVar4);
      }
      mobyutil::MB_StartKick(dVar43,lVar22,uVar37 + 0x70,uVar34,9,1,0);
      *(undefined4 *)((int)pvVar11 + 0xc0) = 0x40c00000;
      *(undefined4 *)((int)pvVar11 + 0xc4) = 0x41200000;
      mobyutil::MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
      *(undefined1 *)((int)pvVar11 + 0x67) = 0xfa;
      moby->state = 'c';
      iVar26 = *(int *)((int)pvVar11 + 0x120);
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(undefined1 *)(iVar26 + 0xbc) = 0;
    }
    else if ((int)((uVar13 >> 1 ^ uVar28) - uVar13) < 0x3f800000) {
      *(undefined1 *)((int)pvVar11 + 0x67) = 100;
    }
    else {
      fVar4 = DAT_0071f418 * 30.0;
      *(undefined4 *)((int)pvVar11 + 0x84) = 0x3a03126f;
      *(float *)((int)pvVar11 + 0x80) = fVar4;
      fVar4 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar11 + 0x88) = mobyutil::g_FrameTime * 5.0;
      *(undefined1 *)((int)pvVar11 + 0xad) = 0;
      *(undefined4 *)((int)pvVar11 + 0x94) = 9;
      *(float *)((int)pvVar11 + 0x8c) = fVar4 * 7.0;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      mobyutil::MB_StartKick(lVar22,uVar37 + 0x70);
      *(undefined4 *)((int)pvVar11 + 0xc0) = 0x40c00000;
      *(undefined4 *)((int)pvVar11 + 0xc4) = 0x41200000;
      *(undefined1 *)((int)pvVar11 + 0x67) = 0x78;
      moby->state = 'Z';
    }
    mobyutil::MB_UpdateLightsTransition(lVar22,uVar37 + 0x60);
  }
  moby->damage = -1;
  uVar25 = mobyutil::MB_getTarget(0x4030000000000000,lVar22,0xff,uVar40 - 0x1e0);
  *(undefined4 *)((int)puVar15 + 0xf4) = uVar25;
  pMVar21 = g_heroMobyPtr;
  fVar4 = (moby->pos).x;
  bVar1 = moby->state;
  MVar29 = moby->modeBits;
  fVar5 = (moby->pos).y;
  bVar2 = moby->field43_0x70;
  fVar6 = (moby->rotation).z;
  uVar3 = moby->animationId;
  pMVar12 = *(MobyInstance **)(puVar15 + 0x1e);
  if (*(MobyInstance **)(puVar15 + 0x1e) == (MobyInstance *)0x0) {
    *(MobyInstance **)(puVar15 + 0x1e) = g_heroMobyPtr;
    pMVar12 = pMVar21;
  }
  if (5 < bVar1) {
    if (bVar1 < 0x5e) {
      if (bVar1 < 0x5a) {
        if ((bVar1 < 7) &&
           (mobyutil::MB_UpdateNavMoveTurning
                      (lVar22,uVar37 + 0xd0,(ulonglong)*(uint *)((int)pvVar11 + 0x120) + 0x10,
                       uVar37 + 0x40), (moby->field43_0x70 & 2U) != 0)) {
          uVar25 = *(undefined4 *)((int)pvVar11 + 0x120);
          puVar15[0x48] = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation(uVar25,1,0,*(undefined4 *)((int)puVar15 + 0x244));
          iVar26 = *(int *)((int)pvVar11 + 0x120);
          fVar4 = *(float *)(iVar26 + 0x10);
          (moby->pos).x = fVar4;
          fVar5 = *(float *)(iVar26 + 0x14);
          (moby->pos).y = fVar5;
          fVar6 = *(float *)(iVar26 + 0x18);
          (moby->pos).z = fVar6;
          (moby->pos).w = *(f32 *)(iVar26 + 0x1c);
          uVar3 = moby->animationId;
          (moby->pos).z = fVar6 - 0.1;
          if (uVar3 != '\x01') {
            mobyutil::MB_SetAnimation(lVar22,1,0,10);
            fVar4 = (moby->pos).x;
            fVar5 = (moby->pos).y;
          }
          moby->state = '\x03';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          fVar4 = (pMVar12->pos).x - fVar4;
          fVar5 = (pMVar12->pos).y - fVar5;
          dVar39 = ABS((double)fVar4);
          dVar43 = ABS((double)fVar5);
          *(float *)((int)puVar15 + 0x13c) = fVar4;
          *(float *)(puVar15 + 0x28) = fVar5;
          *(float *)((int)puVar15 + 0x144) = (float)(dVar39 - dVar43);
          uVar34 = (ulonglong)(*(uint *)((int)puVar15 + 0x13c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x144) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x28) >> 0x1d) & 4;
          dVar44 = ABS((double)*(float *)((int)puVar15 + 0x13c));
          if ((double)*(float *)((int)puVar15 + 0x144) - dVar45 < 0.0) {
            dVar44 = dVar43;
          }
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
          dVar43 = ABS((double)*(float *)(puVar15 + 0x28));
          if ((double)*(float *)((int)puVar15 + 0x144) - dVar45 < 0.0) {
            dVar43 = dVar39;
          }
          fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          if (dVar45 < dVar44) {
            lVar23 = uVar40 - 0x280;
            lVar32 = uVar40 - 0xb0;
            lVar35 = uVar40 - 0xa0;
            lVar38 = 2;
            fVar6 = (float)(dVar43 - dVar44) / (float)(dVar43 + dVar44);
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0x1ec) = fVar6;
            *(float *)((int)puVar15 + 0x1e4) = fVar6;
            *(float *)(puVar15 + 0x3d) = fVar6;
            *(float *)(puVar15 + 0x3c) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)((int)puVar15 + 0x1e4) = *(float *)((int)puVar15 + 0x1e4) * fVar7;
            *(float *)(puVar15 + 0x3d) = *(float *)(puVar15 + 0x3d) * fVar6;
            *(float *)((int)puVar15 + 0x1ec) = *(float *)((int)puVar15 + 0x1ec) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar23 + 0x1e0) = *(float *)((int)lVar23 + 0x1d0) * fVar6 * fVar6;
              iVar26 = (int)lVar32;
              lVar23 = lVar23 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
              lVar35 = lVar35 + 8;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
            lVar38 = 4;
            lVar35 = uVar40 - 0xb0;
            pfVar36 = (float *)&DAT_007358e0;
            lVar23 = lVar24;
            lVar32 = lVar35;
            do {
              fVar6 = *pfVar36;
              fVar7 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar23 + 0x1e0) = *(float *)((int)lVar23 + 0x1e0) * fVar6;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
              lVar32 = lVar32 + 8;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
            lVar23 = 2;
            do {
              iVar26 = (int)lVar24;
              iVar27 = (int)lVar35;
              lVar24 = lVar24 + 0x10;
              lVar35 = lVar35 + 0x10;
              dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar26 + 0x1e0)) +
                                *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                               *(float *)(iVar27 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar4 + fVar5);
          }
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          (moby->rotation).z = (float)dVar45;
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x40,0x346578);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar25 = storeVectorElementWordIndexed
                             (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x128,
                              uVar37);
          *(undefined4 *)((int)pvVar11 + 0x128U & 0xfffffffc) = uVar25;
          moby->collision = (ushort *)0x0;
        }
      }
      else if (bVar1 == 0x5b) {
        if ((bVar2 & 2) != 0) {
          if (uVar3 != '\a') {
            mobyutil::MB_SetAnimation(lVar22,7,0,3);
          }
          moby->state = ']';
        }
      }
      else {
        uVar28 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x70));
        if ((uVar28 & 0x40) != 0) {
          iVar26 = *(int *)((int)pvVar11 + 0x120);
          iVar27 = mobyupdate_helpers::M333_00346060(lVar22);
          if (iVar27 == 0) {
            *(int *)((int)pvVar11 + 0x120) = iVar26;
          }
          else {
            *(int *)((int)pvVar11 + 0x120) = iVar27;
            *(undefined1 *)(iVar26 + 0xbc) = 0;
            *(undefined1 *)(*(int *)((int)pvVar11 + 0x120) + 0xbc) = 1;
          }
          if (moby->animationId != '\x04') {
            mobyutil::MB_SetAnimation(lVar22,4,0,10);
          }
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          moby->state = '\x01';
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar25 = storeVectorElementWordIndexed
                             (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,
                              uVar37);
          *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
        }
        fVar9 = (moby->pos).z;
        uVar28 = (int)fVar9 >> 0x1f;
        if ((int)((uVar28 >> 1 ^ (uint)fVar9) - uVar28) < 0x40a00000) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
    }
    else if ((bVar1 == 99) &&
            (uVar28 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x70)),
            (uVar28 & 0x40) != 0)) {
      moby->state = 'd';
      moby->unk58 = 0.0;
      moby->collision = (ushort *)0x0;
      iVar26 = DAT_010c5108;
      *(undefined2 *)((int)pvVar11 + 0x132) = 0x28;
      uVar25 = DAT_0083fda4;
      *(short *)((int)pvVar11 + 0x130) = (short)iVar26;
      mobyupdate_helpers::M333_00345d08(lVar22,0,1,uVar25);
      mobyupdate_helpers::M333_00345d08(lVar22,2,3,DAT_0083fda8);
      mobyupdate_helpers::M333_00345d08(lVar22,4,5,DAT_0083fdac);
      mobyupdate_helpers::M333_00345d08(lVar22,5,6,DAT_0083fdb0);
      mobyupdate_helpers::M333_00345d08(lVar22,6,7,DAT_0083fdb4);
      mobyupdate_helpers::M333_00345d08(lVar22,8,9,DAT_0083fdac);
      mobyupdate_helpers::M333_00345d08(lVar22,9,10,DAT_0083fdb0);
      mobyupdate_helpers::M333_00345d08(lVar22,10,0xb,DAT_0083fdb4);
      mobyupdate_helpers::M333_00345d08(lVar22,0xc,0xd,DAT_0083fdb8);
      mobyupdate_helpers::M333_00345d08(lVar22,0xe,0xf,DAT_0083fdb8);
      mobyupdate_helpers::M333_00345d08(lVar22,0x10,0x11,DAT_0083fdbc);
      mobyupdate_helpers::M333_00345d08(lVar22,0x14,0x15,DAT_0083fdbc);
      mobyupdate_helpers::M333_00345d08(lVar22,0x12,0x13,DAT_0083fdc0);
      mobyupdate_helpers::M333_00345d08(lVar22,0x16,0x17,DAT_0083fdc0);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_0034869c;
  }
  if (bVar1 == 5) {
    fVar4 = (pMVar12->pos).x - fVar4;
    fVar5 = (pMVar12->pos).y - fVar5;
    dVar43 = ABS((double)fVar4);
    dVar46 = ABS((double)fVar5);
    *(float *)((int)puVar15 + 0x10c) = fVar4;
    *(float *)(puVar15 + 0x22) = fVar5;
    *(float *)((int)puVar15 + 0x114) = (float)(dVar43 - dVar46);
    uVar34 = (ulonglong)(*(uint *)((int)puVar15 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x22) >> 0x1d) & 4;
    dVar39 = ABS((double)*(float *)((int)puVar15 + 0x10c));
    if ((double)*(float *)((int)puVar15 + 0x114) - dVar45 < 0.0) {
      dVar39 = dVar46;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
    dVar46 = ABS((double)*(float *)(puVar15 + 0x22));
    if ((double)*(float *)((int)puVar15 + 0x114) - dVar45 < 0.0) {
      dVar46 = dVar43;
    }
    fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
    dVar43 = dVar45;
    if (dVar45 < dVar39) {
      lVar23 = uVar40 - 0x280;
      lVar35 = uVar40 - 0x120;
      lVar32 = uVar40 - 0x130;
      lVar38 = 2;
      fVar6 = (float)(dVar46 - dVar39) / (float)(dVar46 + dVar39);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar15 + 0x16c) = fVar6;
      *(float *)((int)puVar15 + 0x164) = fVar6;
      *(float *)(puVar15 + 0x2d) = fVar6;
      *(float *)(puVar15 + 0x2c) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar15 + 0x164) = *(float *)((int)puVar15 + 0x164) * fVar7;
      *(float *)(puVar15 + 0x2d) = *(float *)(puVar15 + 0x2d) * fVar6;
      *(float *)((int)puVar15 + 0x16c) = *(float *)((int)puVar15 + 0x16c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar23 + 0x160) = *(float *)((int)lVar23 + 0x150) * fVar6 * fVar6;
        iVar26 = (int)lVar32;
        lVar32 = lVar32 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
        lVar35 = lVar35 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar38 = 4;
      lVar35 = uVar40 - 0x130;
      pfVar36 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar32 = lVar35;
      do {
        fVar6 = *pfVar36;
        fVar7 = pfVar36[1];
        pfVar36 = pfVar36 + 2;
        *(float *)((int)lVar23 + 0x160) = *(float *)((int)lVar23 + 0x160) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar7;
        lVar32 = lVar32 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar23 = 2;
      dVar39 = dVar45;
      do {
        iVar26 = (int)lVar24;
        iVar27 = (int)lVar35;
        lVar24 = lVar24 + 0x10;
        lVar35 = lVar35 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar26 + 0x160)) +
                          *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar43 = (double)((float)(dVar39 + 0.7853981852531433) * fVar4 + fVar5);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar43,0x3f947ae140000000,0x3fd3333340000000,0x3fc99999a0000000,lVar22,&DAT_00346578,
               uVar37 + 300);
    uVar3 = moby->animationId;
    if (moby->updateId == uVar3) {
      dVar39 = (double)mobyfunc::BlendAnimFrame(moby);
      uVar3 = moby->animationId;
      if (dVar39 == 19.0) {
        fVar5 = (pMVar12->pos).x - (moby->pos).x;
        fVar4 = (moby->pos).y;
        *(float *)(puVar15 + 0x14) = fVar5;
        fVar4 = (pMVar12->pos).y - fVar4;
        fVar6 = DAT_0083fbf4 * animationSpeed;
        *(float *)((int)puVar15 + 0xa4) = fVar4;
        fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        dVar43 = (double)DAT_010c5100;
        *(float *)(puVar15 + 0x15) = (pMVar12->pos).z - (moby->pos).z;
        fVar9 = (pMVar12->pos).w;
        *(undefined4 *)(puVar15 + 0x15) = 0;
        *(f32 *)((int)puVar15 + 0xac) = fVar9;
        dVar39 = 10.0;
        dVar46 = (double)(fVar4 / fVar6);
        dVar43 = (double)(fVar4 - (float)(dVar43 * dVar46 + 2.0));
        if ((dVar43 <= 10.0) && (dVar39 = dVar43, dVar43 < dVar44)) {
          dVar39 = dVar44;
        }
        mobyutil::ClampVec3Magnitude(dVar39,(Vec4 *)(uVar40 - 0x1f0));
        lVar24 = uVar40 - 0x210;
        fVar4 = (moby->pos).y;
        fVar5 = (moby->pos).z;
        *(float *)(puVar15 + 0x14) = *(float *)(puVar15 + 0x14) + (moby->pos).x;
        *(float *)((int)puVar15 + 0xa4) = *(float *)((int)puVar15 + 0xa4) + fVar4;
        *(float *)(puVar15 + 0x15) = *(float *)(puVar15 + 0x15) + fVar5;
        mobyfunc::GetBonePosition(lVar22,9,lVar24);
        fVar4 = (pMVar12->pos).x - *(float *)(puVar15 + 0x10);
        *(float *)(puVar15 + 0x12) = fVar4;
        fVar5 = (pMVar12->pos).y - *(float *)((int)puVar15 + 0x84);
        *(float *)((int)puVar15 + 0x94) = fVar5;
        fVar6 = DAT_0071f418;
        dVar42 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
        *(float *)(puVar15 + 0x13) = (pMVar12->pos).z - *(float *)(puVar15 + 0x11);
        *(f32 *)((int)puVar15 + 0x9c) = (pMVar12->pos).w;
        dVar39 = (double)(fVar4 * (float)(dVar46 / dVar42));
        dVar43 = (double)(fVar5 * (float)(dVar46 / dVar42));
        dVar44 = dVar45;
        if (dVar45 - dVar42 < 0.0) {
          dVar44 = dVar39;
        }
        dVar41 = dVar45;
        if (dVar45 - dVar42 < 0.0) {
          dVar41 = dVar43;
        }
        if (dVar42 - dVar45 < 0.0) {
          dVar44 = dVar39;
        }
        if (dVar42 - dVar45 < 0.0) {
          dVar41 = dVar43;
        }
        *(float *)(puVar15 + 0x12) = (float)dVar44;
        *(float *)((int)puVar15 + 0x94) = (float)dVar41;
        dVar44 = (double)mobyutil::MB_computeLobVelocity
                                   (dVar46,(double)(fVar6 * -15.0),lVar24,uVar40 - 0x1f0,
                                    &DAT_00346578,&DAT_00720000,uVar40 - 0x188);
        *(float *)(puVar15 + 0x13) = (float)dVar44;
        iVar26 = FUN_00315198(lVar22,lVar24,uVar40 - 0x200);
        *(int *)((int)pvVar11 + 0x124) = iVar26;
        if (iVar26 != 0) {
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x28,0x346578);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          uVar28 = *(uint *)(iVar26 + 0x78);
          uVar40 = (ulonglong)uVar28;
          auVar47 = ZEXT416(0xffffffff);
          auVar51 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar47 = vectorMultiplyAddFloatingPoint(auVar50,auVar49,auVar48);
          auVar48 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar25 = storeVectorElementWordIndexed
                             (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x20,
                              uVar40);
          *(undefined4 *)(uVar28 + 0x20 & 0xfffffffc) = uVar25;
          auVar47 = loadVectorLeftIndexed(0x90,0x346578);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar48 = vectorMultiplyAddFloatingPoint
                              (auVar50,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
          auVar47 = vectorSplatHalfWord(auVar47,1);
          uVar14 = storeVectorElementHalfWordIndexed(auVar47,0xc,uVar40);
          *(undefined2 *)(uVar28 + 0xc) = uVar14;
          uVar14 = storeVectorElementHalfWordIndexed(auVar47,0xe,uVar40);
          *(undefined2 *)(uVar28 + 0xe) = uVar14;
          *(undefined1 *)(*(int *)((int)pvVar11 + 0x124) + 0x20) = 1;
          *(byte *)(*(int *)((int)pvVar11 + 0x124) + 0xbc) =
               *(byte *)(*(int *)((int)pvVar11 + 0x124) + 0xbc) | 3;
          auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = vectorMultiplyAddFloatingPoint(auVar47,auVar49,auVar50);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar25 = storeVectorElementWordIndexed
                             (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x128,
                              uVar37);
          *(undefined4 *)((int)pvVar11 + 0x128U & 0xfffffffc) = uVar25;
        }
        goto LAB_0034869c;
      }
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x01';
      if (uVar3 != '\x04') {
        mobyutil::MB_SetAnimation(lVar22,4,0,3);
      }
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar25 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,uVar37
                         );
      *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
    }
    goto LAB_0034869c;
  }
  if (bVar1 == 4) {
    fVar7 = fVar6 + 1.5707963;
    fVar8 = 3.1415925 - fVar6;
    if (fVar6 - (3.1415925 - fVar6) < 0.0) {
      fVar8 = fVar6;
    }
    fVar16 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar16 = fVar7;
    }
    fVar17 = -3.1415925 - fVar6;
    if ((-3.1415925 - fVar6) - fVar8 < 0.0) {
      fVar17 = fVar8;
    }
    fVar6 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar16 < 0.0) {
      fVar6 = fVar16;
    }
    fVar7 = fVar17 * fVar17;
    fVar8 = fVar6 * fVar6;
    fVar19 = fVar7 * fVar7 * fVar17;
    iVar26 = *(int *)((int)pvVar11 + 0x120);
    *(undefined4 *)(puVar15 + 0xf) = 0;
    fVar16 = fVar8 * fVar8 * fVar6;
    fVar20 = fVar7 * fVar19;
    fVar18 = fVar8 * fVar16;
    fVar7 = (fVar7 * fVar20 * 2.601887e-06 +
            fVar20 * -0.0001980741 + fVar19 * 0.0083330255 + fVar7 * fVar17 * -0.16666657 + fVar17)
            * 2.0;
    fVar6 = (fVar8 * fVar18 * 2.601887e-06 +
            fVar18 * -0.0001980741 + fVar16 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6) *
            2.0;
    *(float *)((int)puVar15 + 0x74) = fVar7;
    *(float *)(puVar15 + 0xe) = fVar6;
    fVar6 = fVar6 + *(float *)(iVar26 + 0x10);
    *(float *)(puVar15 + 0xe) = fVar6;
    fVar6 = fVar4 - fVar6;
    fVar7 = fVar7 + *(float *)(iVar26 + 0x14);
    fVar8 = fVar5 - fVar7;
    *(float *)((int)puVar15 + 0x74) = fVar7;
    *(undefined4 *)(puVar15 + 0xf) = *(undefined4 *)(iVar26 + 0x18);
    if (0.2 < SQRT(fVar6 * fVar6 + fVar8 * fVar8)) {
      mobyutil::MB_UpdateNavMoveTurning(lVar22,uVar37 + 0xd0,uVar40 - 0x220,uVar37 + 0x40);
      bVar2 = moby->field43_0x70;
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
    }
    if ((bVar2 & 2) != 0) {
      fVar7 = fVar5 - (pMVar12->pos).y;
      fVar6 = fVar4 - (pMVar12->pos).x;
      if (6.0 <= SQRT(fVar6 * fVar6 + fVar7 * fVar7)) {
        fVar5 = fVar5 - GameCamera.posY;
        dVar39 = ABS((double)(fVar4 - GameCamera.posX));
        dVar43 = ABS((double)fVar5);
        *(float *)(puVar15 + 0x23) = fVar4 - GameCamera.posX;
        *(float *)((int)puVar15 + 0x11c) = fVar5;
        fVar4 = GameCamera.rot.radius;
        *(float *)(puVar15 + 0x24) = (float)(dVar39 - dVar43);
        uVar34 = (ulonglong)(*(uint *)(puVar15 + 0x23) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x24) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x11c) >> 0x1d) & 4;
        dVar44 = ABS((double)*(float *)(puVar15 + 0x23));
        if ((double)*(float *)(puVar15 + 0x24) - dVar45 < 0.0) {
          dVar44 = dVar43;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar43 = ABS((double)*(float *)((int)puVar15 + 0x11c));
        if ((double)*(float *)(puVar15 + 0x24) - dVar45 < 0.0) {
          dVar43 = dVar39;
        }
        if (dVar45 < dVar44) {
          lVar23 = uVar40 - 0x280;
          lVar35 = uVar40 - 0x100;
          lVar32 = uVar40 - 0x110;
          lVar38 = 2;
          fVar7 = (float)(dVar43 - dVar44) / (float)(dVar43 + dVar44);
          fVar8 = fVar7 * fVar7;
          *(float *)((int)puVar15 + 0x18c) = fVar7;
          *(float *)((int)puVar15 + 0x184) = fVar7;
          *(float *)(puVar15 + 0x31) = fVar7;
          *(float *)(puVar15 + 0x30) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)((int)puVar15 + 0x184) = *(float *)((int)puVar15 + 0x184) * fVar8;
          *(float *)(puVar15 + 0x31) = *(float *)(puVar15 + 0x31) * fVar7;
          *(float *)((int)puVar15 + 0x18c) = *(float *)((int)puVar15 + 0x18c) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar23 + 0x180) = *(float *)((int)lVar23 + 0x170) * fVar7 * fVar7;
            iVar26 = (int)lVar32;
            lVar32 = lVar32 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar40 - 0x110;
          pfVar36 = (float *)&DAT_007358e0;
          lVar23 = lVar24;
          lVar32 = lVar35;
          do {
            fVar7 = *pfVar36;
            fVar8 = pfVar36[1];
            pfVar36 = pfVar36 + 2;
            *(float *)((int)lVar23 + 0x180) = *(float *)((int)lVar23 + 0x180) * fVar7;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar8;
            lVar32 = lVar32 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar23 = 2;
          do {
            iVar26 = (int)lVar24;
            iVar27 = (int)lVar35;
            lVar24 = lVar24 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar26 + 0x180)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar6 + fVar5);
        }
        dVar44 = (double)fastfunc::FastSubRots(fVar4,(float)dVar45);
        if (dVar44 <= 0.5585053563117981) {
          if (moby->animationId != '\x03') {
            puVar15[0x48] = (longlong)(int)(animationSpeed * 6.5);
            mobyutil::MB_SetAnimation(lVar22,3,0,*(undefined4 *)((int)puVar15 + 0x244));
          }
          moby->state = '\x05';
          goto LAB_0034869c;
        }
      }
      iVar26 = *(int *)((int)pvVar11 + 0x120);
      iVar27 = mobyupdate_helpers::M333_00346060(lVar22);
      *(int *)((int)pvVar11 + 0x120) = iVar27;
      if (iVar27 == 0) {
        *(int *)((int)pvVar11 + 0x120) = iVar26;
      }
      *(undefined1 *)(iVar26 + 0xbc) = 0;
      *(undefined1 *)(*(int *)((int)pvVar11 + 0x120) + 0xbc) = 1;
      if (moby->animationId != '\x04') {
        puVar15[0x48] = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(lVar22,4,0,*(undefined4 *)((int)puVar15 + 0x244));
      }
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      moby->state = '\x01';
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar25 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,uVar37
                         );
      *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
    }
    goto LAB_0034869c;
  }
  if (bVar1 != 3) {
    if (bVar1 == 1) {
      mobyutil::MB_UpdateNavMoveTurning
                (lVar22,uVar37 + 0xd0,(ulonglong)*(uint *)((int)pvVar11 + 0x120) + 0x10,
                 uVar37 + 0x40);
      iVar26 = *(int *)((int)pvVar11 + 0x120);
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar7 = fVar4 - *(float *)(iVar26 + 0x14);
      fVar8 = fVar5 - *(float *)(iVar26 + 0x10);
      fVar6 = (moby->pos).z - *(float *)(iVar26 + 0x18);
      if ((double)SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7) < dVar44) {
        fVar4 = *(float *)(iVar26 + 0x14) - fVar4;
        fVar5 = *(float *)(iVar26 + 0x10) - fVar5;
        dVar43 = ABS((double)fVar4);
        dVar39 = ABS((double)fVar5);
        *(float *)(puVar15 + 0x29) = fVar5;
        *(float *)((int)puVar15 + 0x14c) = fVar4;
        fVar4 = (moby->rotation).z;
        *(float *)(puVar15 + 0x2a) = (float)(dVar39 - dVar43);
        uVar34 = (ulonglong)(*(uint *)(puVar15 + 0x29) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x2a) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x14c) >> 0x1d) & 4;
        dVar44 = ABS((double)*(float *)(puVar15 + 0x29));
        if ((double)*(float *)(puVar15 + 0x2a) - dVar45 < 0.0) {
          dVar44 = dVar43;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar43 = ABS((double)*(float *)((int)puVar15 + 0x14c));
        if ((double)*(float *)(puVar15 + 0x2a) - dVar45 < 0.0) {
          dVar43 = dVar39;
        }
        if (dVar45 < dVar44) {
          lVar23 = uVar40 - 0x280;
          lVar35 = uVar40 - 0x80;
          lVar32 = uVar40 - 0x90;
          lVar38 = 2;
          fVar7 = (float)(dVar43 - dVar44) / (float)(dVar43 + dVar44);
          fVar8 = fVar7 * fVar7;
          *(float *)((int)puVar15 + 0x20c) = fVar7;
          *(float *)((int)puVar15 + 0x204) = fVar7;
          *(float *)(puVar15 + 0x41) = fVar7;
          *(float *)(puVar15 + 0x40) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)((int)puVar15 + 0x204) = *(float *)((int)puVar15 + 0x204) * fVar8;
          *(float *)(puVar15 + 0x41) = *(float *)(puVar15 + 0x41) * fVar7;
          *(float *)((int)puVar15 + 0x20c) = *(float *)((int)puVar15 + 0x20c) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar23 + 0x200) = *(float *)((int)lVar23 + 0x1f0) * fVar7 * fVar7;
            iVar26 = (int)lVar32;
            lVar32 = lVar32 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar40 - 0x90;
          pfVar36 = (float *)&DAT_007358e0;
          lVar23 = lVar24;
          lVar32 = lVar35;
          do {
            fVar7 = *pfVar36;
            fVar8 = pfVar36[1];
            pfVar36 = pfVar36 + 2;
            *(float *)((int)lVar23 + 0x200) = *(float *)((int)lVar23 + 0x200) * fVar7;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar8;
            lVar32 = lVar32 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar23 = 2;
          do {
            iVar26 = (int)lVar24;
            iVar27 = (int)lVar35;
            lVar24 = lVar24 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar26 + 0x200)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar6 + fVar5);
        }
        dVar44 = (double)fastfunc::FastSubRots(fVar4,(float)dVar45);
        if (dVar44 < 0.2617993950843811) {
          fVar4 = (moby->pos).y - (pMVar12->pos).y;
          fVar5 = (moby->pos).x - (pMVar12->pos).x;
          if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) <= 6.0) {
            auVar47 = ZEXT416(0xffffffff);
            auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
            auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
            auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
            auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            iVar26 = *(int *)((int)pvVar11 + 0x120);
            auVar47 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                         auVar47 << 0x60,auVar48);
            auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
            auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar25 = storeVectorElementWordIndexed
                               (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,
                                uVar37);
            *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
            iVar27 = mobyupdate_helpers::M333_00346060(lVar22);
            *(int *)((int)pvVar11 + 0x120) = iVar27;
            if (iVar27 == 0) {
              *(int *)((int)pvVar11 + 0x120) = iVar26;
            }
            *(undefined1 *)(iVar26 + 0xbc) = 0;
            *(undefined1 *)(*(int *)((int)pvVar11 + 0x120) + 0xbc) = 1;
          }
          else {
            if (moby->animationId != '\x05') {
              mobyutil::MB_SetAnimation(lVar22,5,0,10);
            }
            moby->state = '\x06';
          }
          goto LAB_0034869c;
        }
      }
      iVar26 = fastfunc::FastDecTimerS32(uVar37 + 0x134);
      if (iVar26 != 0) {
        iVar26 = *(int *)((int)pvVar11 + 0x120);
        iVar27 = mobyupdate_helpers::M333_00346060(lVar22);
        *(int *)((int)pvVar11 + 0x120) = iVar27;
        if (iVar27 == 0) {
          *(int *)((int)pvVar11 + 0x120) = iVar26;
        }
        auVar47 = ZEXT416(0xffffffff);
        auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        *(undefined1 *)(iVar26 + 0xbc) = 0;
        auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
        *(undefined1 *)(*(int *)((int)pvVar11 + 0x120) + 0xbc) = 1;
        auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
        auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar47 = vectorMultiplyAddFloatingPoint
                            (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                             auVar48);
        auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
        auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar25 = storeVectorElementWordIndexed
                           (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,
                            uVar37);
        *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
      }
    }
    else if (bVar1 == 0) {
      moby->modeBits = MVar29 | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar11 + 0x29) = 1;
      *(undefined4 *)((int)pvVar11 + 0x20) = 0x40000000;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar11 + 0xd0));
      *(undefined4 *)((int)pvVar11 + 0x114) = 0x3e800000;
      *(undefined4 *)((int)pvVar11 + 0x10c) = 0x3cf5c28f;
      *(undefined4 *)((int)pvVar11 + 0x110) = 0x3e99999a;
      fVar5 = DAT_0083fbf0;
      fVar4 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar11 + 0xdc) = 0x40000000;
      *(undefined4 *)((int)pvVar11 + 0xd8) = 0x40000000;
      *(float *)((int)pvVar11 + 0xf4) = fVar5 * fVar4;
      uVar31 = fastfunc::FastDoubleToInt(0x4031000000000000);
      *(undefined1 *)((int)pvVar11 + 0x58) = uVar31;
      uVar31 = fastfunc::FastDoubleToInt(0x4024ccccc0000000);
      *(undefined1 *)((int)pvVar11 + 0x5a) = uVar31;
      *(undefined4 *)((int)pvVar11 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar11 + 0x48) = 0;
      *(undefined4 *)((int)pvVar11 + 0x44) = 0;
      *(undefined4 *)((int)pvVar11 + 0x40) = 0;
      iVar26 = mobyupdate_helpers::M333_00346060(lVar22);
      *(int *)((int)pvVar11 + 0x120) = iVar26;
      *(undefined1 *)(iVar26 + 0xbc) = 1;
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar49 = loadVectorLeftIndexed(0x28,0x346578);
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar47 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar25 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x128,uVar37
                         );
      *(undefined4 *)((int)pvVar11 + 0x128U & 0xfffffffc) = uVar25;
      if (moby->animationId != '\x04') {
        mobyutil::MB_SetAnimation(lVar22,4,0,0);
      }
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      moby->state = '\x01';
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar47 = loadVectorLeftIndexed(0x2c,0x346578);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar25 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x134,uVar37
                         );
      *(undefined4 *)((int)pvVar11 + 0x134U & 0xfffffffc) = uVar25;
    }
    goto LAB_0034869c;
  }
  fVar6 = (pMVar12->pos).x;
  fVar7 = (pMVar12->pos).y;
  fVar8 = fVar6 - fVar4;
  fVar16 = fVar7 - fVar5;
  fVar5 = fVar5 - fVar7;
  fVar4 = fVar4 - fVar6;
  dVar43 = ABS((double)fVar8);
  dVar39 = ABS((double)fVar16);
  *(float *)(puVar15 + 0x26) = fVar8;
  *(float *)((int)puVar15 + 0x134) = fVar16;
  *(float *)(puVar15 + 0x27) = (float)(dVar43 - dVar39);
  uVar33 = (ulonglong)(*(uint *)(puVar15 + 0x26) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x27) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x134) >> 0x1d) & 4;
  dVar46 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  uVar34 = uVar33 << 2;
  dVar44 = ABS((double)*(float *)(puVar15 + 0x26));
  if ((double)*(float *)(puVar15 + 0x27) - dVar45 < 0.0) {
    dVar44 = dVar39;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar34);
  dVar39 = ABS((double)*(float *)((int)puVar15 + 0x134));
  if ((double)*(float *)(puVar15 + 0x27) - dVar45 < 0.0) {
    dVar39 = dVar43;
  }
  fVar5 = *(float *)(((uint)(uVar33 << 2) | 0x735900) + 4);
  dVar43 = dVar45;
  if (dVar45 < dVar44) {
    lVar23 = uVar40 - 0x280;
    lVar35 = uVar40 - 0xc0;
    lVar32 = uVar40 - 0xd0;
    lVar38 = 2;
    fVar6 = (float)(dVar39 - dVar44) / (float)(dVar39 + dVar44);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar15 + 0x1cc) = fVar6;
    *(float *)((int)puVar15 + 0x1c4) = fVar6;
    *(float *)(puVar15 + 0x39) = fVar6;
    *(float *)(puVar15 + 0x38) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar15 + 0x1c4) = *(float *)((int)puVar15 + 0x1c4) * fVar7;
    *(float *)(puVar15 + 0x39) = *(float *)(puVar15 + 0x39) * fVar6;
    *(float *)((int)puVar15 + 0x1cc) = *(float *)((int)puVar15 + 0x1cc) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar23 + 0x1c0) = *(float *)((int)lVar23 + 0x1b0) * fVar6 * fVar6;
      iVar26 = (int)lVar32;
      lVar32 = lVar32 + 8;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
      lVar35 = lVar35 + 8;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
    lVar38 = 4;
    lVar35 = uVar40 - 0xd0;
    uVar34 = ZEXT48(&DAT_007358e0);
    lVar23 = lVar24;
    lVar32 = lVar35;
    do {
      pfVar36 = (float *)uVar34;
      fVar6 = pfVar36[1];
      uVar34 = uVar34 + 8;
      *(float *)((int)lVar23 + 0x1c0) = *(float *)((int)lVar23 + 0x1c0) * *pfVar36;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar6;
      lVar32 = lVar32 + 8;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
    lVar32 = 2;
    lVar23 = lVar24;
    dVar44 = dVar45;
    do {
      iVar26 = (int)lVar23;
      iVar27 = (int)lVar35;
      lVar23 = lVar23 + 0x10;
      lVar35 = lVar35 + 0x10;
      dVar44 = (double)((float)(dVar44 + (double)*(float *)(iVar26 + 0x1c0)) +
                        *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc));
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    dVar43 = (double)((float)(dVar44 + 0.7853981852531433) * fVar4 + fVar5);
  }
  mobyutil::OrganicDeltAngSpeed
            (dVar43,0x3f947ae140000000,0x3fd3333340000000,0x3fc99999a0000000,lVar22,uVar34,
             uVar37 + 300);
  if (((20.0 <= dVar46) || (dVar46 <= 8.0)) ||
     (iVar26 = fastfunc::FastDecTimerS32(uVar37 + 0x128), iVar26 == 0)) {
LAB_00347990:
    if ((*(int *)((int)pvVar11 + 0x38) == 0) || (dVar46 <= 0.5)) goto LAB_0034869c;
  }
  else {
    fVar4 = (moby->pos).x - GameCamera.posX;
    fVar5 = (moby->pos).y - GameCamera.posY;
    dVar39 = ABS((double)fVar4);
    dVar43 = ABS((double)fVar5);
    *(float *)((int)puVar15 + 0x124) = fVar4;
    *(float *)(puVar15 + 0x25) = fVar5;
    fVar4 = GameCamera.rot.radius;
    *(float *)((int)puVar15 + 300) = (float)(dVar39 - dVar43);
    uVar34 = (ulonglong)(*(uint *)((int)puVar15 + 0x124) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 300) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x25) >> 0x1d) & 4;
    dVar44 = ABS((double)*(float *)((int)puVar15 + 0x124));
    if ((double)*(float *)((int)puVar15 + 300) - dVar45 < 0.0) {
      dVar44 = dVar43;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
    dVar43 = ABS((double)*(float *)(puVar15 + 0x25));
    if ((double)*(float *)((int)puVar15 + 300) - dVar45 < 0.0) {
      dVar43 = dVar39;
    }
    fVar6 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
    if (dVar45 < dVar44) {
      lVar23 = uVar40 - 0x280;
      lVar35 = uVar40 - 0xe0;
      lVar32 = uVar40 - 0xf0;
      lVar38 = 2;
      fVar7 = (float)(dVar43 - dVar44) / (float)(dVar43 + dVar44);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar15 + 0x1ac) = fVar7;
      *(float *)((int)puVar15 + 0x1a4) = fVar7;
      *(float *)(puVar15 + 0x35) = fVar7;
      *(float *)(puVar15 + 0x34) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar15 + 0x1a4) = *(float *)((int)puVar15 + 0x1a4) * fVar8;
      *(float *)(puVar15 + 0x35) = *(float *)(puVar15 + 0x35) * fVar7;
      *(float *)((int)puVar15 + 0x1ac) = *(float *)((int)puVar15 + 0x1ac) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar23 + 0x1a0) = *(float *)((int)lVar23 + 400) * fVar7 * fVar7;
        iVar26 = (int)lVar32;
        lVar32 = lVar32 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
        lVar35 = lVar35 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar38 = 4;
      lVar35 = uVar40 - 0xf0;
      pfVar36 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar32 = lVar35;
      do {
        fVar7 = *pfVar36;
        fVar8 = pfVar36[1];
        pfVar36 = pfVar36 + 2;
        *(float *)((int)lVar23 + 0x1a0) = *(float *)((int)lVar23 + 0x1a0) * fVar7;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar8;
        lVar32 = lVar32 + 8;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      lVar23 = 2;
      do {
        iVar26 = (int)lVar24;
        iVar27 = (int)lVar35;
        lVar24 = lVar24 + 0x10;
        lVar35 = lVar35 + 0x10;
        dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar26 + 0x1a0)) +
                          *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar6);
    }
    dVar44 = (double)fastfunc::FastSubRots(fVar4,(float)dVar45);
    if (0.5585053563117981 <= dVar44) goto LAB_00347990;
  }
  uVar25 = *(undefined4 *)((int)pvVar11 + 0x120);
  puVar15[0x48] = (longlong)(int)(animationSpeed * 6.5);
  mobyutil::MB_SetAnimation(uVar25,1,0,*(undefined4 *)((int)puVar15 + 0x244));
  if (moby->animationId != '\x02') {
    puVar15[0x48] = (longlong)(int)(animationSpeed * 7.5);
    mobyutil::MB_SetAnimation(lVar22,2,0,*(undefined4 *)((int)puVar15 + 0x244));
  }
  moby->state = '\x04';
  moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
  moby->collision = moby->pClass->collision;
LAB_0034869c:
  mobyutil::MB_ColorDyingMoby(lVar22,uVar37 + 0x60);
  *(undefined4 *)((int)pvVar11 + 0x38) = 0;
  return;
}



//==== 003486f0  ns=mobyupdate_helpers  size=0xac
// sig: undefined M334_003486f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M334_003486f0(void)

{
  undefined8 in_r0;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x3486e4);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar3 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = ZEXT416(0xffffffff);
  auVar5 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = vectorConvertFromSignedFixedPointWord(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010c5100 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5100,
                            0x10c0000);
  auVar1 = loadVectorLeftIndexed(4,0x3486e4);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_0083fe10 = 0x10000;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar2 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010c5104 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5104,
                            0x10c0000);
  auVar1 = loadVectorLeftIndexed(8,0x3486e4);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010c5108 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5108,
                            0x10c0000);
  return;
}



//==== 003487b8  ns=Global  size=0x5d8
// sig: undefined FUN_003487b8(void)
// callers(4): 0032f988 mobyupdate_unsorted::UpdateMoby_291; 00344328 mobyupdate_unsorted::UpdateMoby_329; 00356628 mobyupdate_unsorted::UpdateMoby_375; 0041fb90 mobyupdate_unsorted::UpdateMoby_691
// callees(7): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 00127ea8 partupd::SpawnPart_26; 00502758 fastfunc::FastDoubleToInt

MobyInstance *
FUN_003487b8(double param_1,double param_2,double param_3,double param_4,float param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,ulonglong param_9,
            ulonglong param_10,float param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  MobyInstance *pMVar11;
  longlong lVar9;
  longlong lVar10;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
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
  ulonglong in_f21;
  double dVar21;
  ulonglong in_f22;
  double dVar22;
  ulonglong in_f23;
  double dVar23;
  ulonglong in_f24;
  double dVar24;
  ulonglong in_f25;
  double dVar25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  float in_stack_00000074;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar10 = uVar8 - 0x160;
  puVar5 = (ulonglong *)lVar10;
  *puVar5 = uVar8;
  puVar5[0x2e] = in_LR;
  puVar5[0x21] = in_f21;
  puVar5[0x22] = in_f22;
  puVar5[0x23] = in_f23;
  puVar5[0x24] = in_f24;
  puVar5[0x25] = in_f25;
  puVar5[0x26] = in_f26;
  puVar5[0x27] = in_f27;
  puVar5[0x28] = in_f28;
  puVar5[0x29] = in_f29;
  puVar5[0x2a] = in_f30;
  puVar5[0x2b] = in_f31;
  puVar5[0x20] = unaff_r31;
  puVar5[0x1a] = unaff_r25;
  puVar5[0x1e] = unaff_r29;
  puVar5[0x1d] = unaff_r28;
  puVar5[0x1f] = unaff_r30;
  puVar5[0x1c] = unaff_r27;
  puVar5[0x1b] = unaff_r26;
  _fStack00000040 = param_7;
  _fStack00000048 = param_8;
  pMVar11 = mobyfunc::CreateMoby(0x14e);
  dVar24 = (double)fStack00000040;
  dVar23 = (double)fStack00000048;
  dVar22 = (double)fStack00000044;
  dVar21 = (double)fStack0000004c;
  if (pMVar11 != (MobyInstance *)0x0) {
    pfVar4 = (float *)pMVar11->pVar;
    pfVar4[6] = param_5;
    pMVar11->updateDistance = -1;
    pMVar11->drawDistance = 0x7f;
    pMVar11->enabled = '\x01';
    mobyfunc::SetColorOfMoby(pMVar11,0x80,0xc4,0xff);
    dVar26 = 0.0;
    fStack00000054 = (float)param_9;
    fStack00000050 = (float)(param_9 >> 0x20);
    fStack00000058 = (float)(param_10 >> 0x20);
    dVar25 = (double)fStack00000058;
    (pMVar11->rotation).x = 0.0;
    dVar18 = ABS(dVar25);
    fStack0000005c = (float)param_10;
    dVar27 = (double)(fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054);
    dVar20 = ABS((double)(float)SQRT(dVar27));
    *(float *)((int)puVar5 + 0x74) = (float)SQRT(dVar27);
    *(float *)(puVar5 + 0xf) = (float)(dVar20 - dVar18);
    uVar16 = (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 | param_10 >> 0x3d & 4;
    fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    dVar19 = ABS((double)*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      dVar19 = dVar18;
    }
    fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      dVar18 = dVar20;
    }
    dVar20 = dVar26;
    if (0.0 < dVar19) {
      lVar9 = uVar8 - 0x150;
      lVar13 = uVar8 - 0xc4;
      lVar14 = uVar8 - 0xb4;
      lVar17 = 2;
      fVar2 = (float)(dVar18 - dVar19) / (float)(dVar18 + dVar19);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x15) = fVar2;
      *(float *)(puVar5 + 0x14) = fVar2;
      *(float *)((int)puVar5 + 0xa4) = fVar2;
      *(float *)((int)puVar5 + 0x9c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar5 + 0x14) = *(float *)(puVar5 + 0x14) * fVar3;
      *(float *)((int)puVar5 + 0xa4) = *(float *)((int)puVar5 + 0xa4) * fVar2;
      *(float *)(puVar5 + 0x15) = *(float *)(puVar5 + 0x15) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar9 + 0x9c) = *(float *)((int)lVar9 + 0x8c) * fVar2 * fVar2;
        iVar6 = (int)lVar13;
        lVar9 = lVar9 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar14 = uVar8 - 0xc4;
      pfVar15 = (float *)&DAT_007358e0;
      lVar9 = lVar10;
      lVar13 = lVar14;
      do {
        fVar2 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar9 + 0x9c) = *(float *)((int)lVar9 + 0x9c) * fVar2;
        lVar9 = lVar9 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = 2;
      lVar9 = lVar10;
      dVar18 = dVar26;
      do {
        iVar6 = (int)lVar9;
        lVar9 = lVar9 + 0x10;
        iVar7 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar6 + 0x9c)) + *(float *)(iVar7 + 4)
                          + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar20 = (double)((float)(dVar18 + 0.7853981852531433) * fVar12 + fVar1);
    }
    fVar2 = ABS(fStack00000050);
    fVar1 = ABS(fStack00000054);
    (pMVar11->rotation).y = (float)-dVar20;
    *(float *)(puVar5 + 0xe) = fVar2 - fVar1;
    uVar16 = param_9 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1e) & 2 | (param_9 << 0x20) >> 0x3d & 4;
    fVar12 = fVar2;
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar12 = fVar1;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    dVar18 = dVar26;
    if (0.0 < fVar12) {
      lVar9 = uVar8 - 0x150;
      lVar14 = uVar8 - 0xd4;
      lVar13 = uVar8 - 0xe4;
      lVar17 = 2;
      fVar12 = (fVar1 - fVar12) / (fVar1 + fVar12);
      fVar1 = fVar12 * fVar12;
      *(float *)(puVar5 + 0x11) = fVar12;
      *(float *)(puVar5 + 0x10) = fVar12;
      *(float *)((int)puVar5 + 0x84) = fVar12;
      *(float *)((int)puVar5 + 0x7c) = fVar12;
      fVar12 = fVar1 * fVar1;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar1;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar12;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar12 * fVar1;
      do {
        *(float *)((int)lVar9 + 0x7c) = *(float *)((int)lVar9 + 0x6c) * fVar12 * fVar12;
        iVar6 = (int)lVar13;
        lVar13 = lVar13 + 8;
        lVar9 = lVar9 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar6 + 4) * fVar12 * fVar12;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar14 = uVar8 - 0xe4;
      pfVar15 = (float *)&DAT_007358e0;
      lVar9 = lVar10;
      lVar13 = lVar14;
      do {
        fVar12 = *pfVar15;
        fVar1 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar9 + 0x7c) = *(float *)((int)lVar9 + 0x7c) * fVar12;
        lVar9 = lVar9 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar1;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar9 = 2;
      do {
        iVar6 = (int)lVar10;
        iVar7 = (int)lVar14;
        lVar10 = lVar10 + 0x10;
        lVar14 = lVar14 + 0x10;
        dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar7 + 4)
                          + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      dVar18 = (double)((float)(dVar18 + 0.7853981852531433) * fVar3 + fVar2);
    }
    (pMVar11->rotation).z = (float)dVar18;
    (pMVar11->pos).x = (float)dVar24;
    (pMVar11->pos).y = (float)dVar22;
    (pMVar11->pos).z = (float)dVar23;
    (pMVar11->pos).w = (float)dVar21;
    *pfVar4 = fStack00000050;
    pfVar4[1] = fStack00000054;
    pfVar4[2] = fStack00000058;
    pfVar4[3] = fStack0000005c;
    dVar21 = (double)mobyutil::MB_randRangeFloat
                               (mobyutil::g_FrameTime * -1.5707964,mobyutil::g_FrameTime * 1.5707964
                               );
    pfVar4[4] = (float)dVar21;
    pfVar4[0xb] = (float)param_1;
    pfVar4[0xd] = (float)param_4;
    pfVar4[0xc] = (float)param_3;
    pfVar4[5] = 0.0;
    pfVar4[10] = in_stack_00000074;
    pfVar4[9] = param_11;
    pMVar11->alpha = ' ';
    fVar12 = 0.0;
    if (param_2 != -1.0) {
      fVar12 = (float)fastfunc::FastDoubleToInt
                                ((double)(float)(param_2 /
                                                (double)SQRT((float)(dVar25 * dVar25 + dVar27))));
    }
    pfVar4[7] = fVar12;
    pMVar11->scale = 0.0;
    partupd::SpawnPart_26(dVar26,pMVar11);
    partupd::SpawnPart_26(dVar26,pMVar11);
    puVar5[0x18] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(pMVar11,1,0,*(undefined4 *)((int)puVar5 + 0xc4));
    pMVar11->modeBits = DRAW_TRANSPARENT_WEIRD;
    mobyfunc::UpdateMobyTransform(pMVar11);
  }
  return pMVar11;
}



//==== 00348da0  ns=mobyupdate_helpers  size=0x5f8
// sig: undefined M334_00348da0(void)
// callers(1): 003493d0 mobyupdate_unsorted::UpdateMoby_334
// callees(2): 00057820 collproc::CollLine; 005026a0 fastfunc::FastSubRots

int mobyupdate_helpers::M334_00348da0
              (double param_1,double param_2,double param_3,float *param_4,int param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  short sVar14;
  longlong lVar12;
  int iVar13;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  uint in_r8;
  ulonglong unaff_r25;
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
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar25;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  double dVar28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x160;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar11;
  puVar8[0x2e] = in_LR;
  puVar8[0x23] = in_f23;
  puVar8[0x24] = in_f24;
  puVar8[0x25] = in_f25;
  puVar8[0x26] = in_f26;
  puVar8[0x27] = in_f27;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x1f] = unaff_r28;
  iVar19 = 0;
  puVar8[0x22] = unaff_r31;
  puVar8[0x1c] = unaff_r25;
  puVar8[0x21] = unaff_r30;
  puVar8[0x1e] = unaff_r27;
  dVar27 = 1000000000.0;
  puVar8[0x20] = unaff_r29;
  iVar7 = MobyUpdateChainStart;
  puVar8[0x1d] = unaff_r26;
  dVar28 = dVar27;
  do {
    if (iVar7 == 0) {
      return iVar19;
    }
    sVar14 = 0;
    if (*(int *)(iVar7 + 0x24) != 0) {
      sVar14 = *(short *)(*(int *)(iVar7 + 0x24) + 0x46);
    }
    if ((in_r8 & 1) == 0) {
      if (sVar14 < 9) {
        if ((4 < sVar14) && (sVar14 < 8)) goto LAB_00348ea4;
      }
      else if (sVar14 < 0xf) {
        if (sVar14 < 10) {
LAB_00348ea4:
          fVar2 = param_4[1];
          fVar5 = fVar2 - *(float *)(iVar7 + 0x14);
          fVar3 = *(float *)(iVar7 + 0x10);
          fVar4 = *param_4 - fVar3;
          dVar26 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
          if (dVar26 < param_3) {
            fVar5 = fVar3 - *param_4;
            *(float *)(puVar8 + 0xe) = fVar3;
            fVar2 = *(float *)(iVar7 + 0x14) - fVar2;
            *(float *)((int)puVar8 + 0x74) = *(float *)(iVar7 + 0x14);
            fVar3 = *(float *)(iVar7 + 0x18);
            *(float *)(puVar8 + 0xf) = fVar3;
            fVar6 = ABS(fVar5);
            *(undefined4 *)((int)puVar8 + 0x7c) = *(undefined4 *)(iVar7 + 0x1c);
            *(float *)((int)puVar8 + 0x8c) = fVar5;
            fVar4 = ABS(fVar2);
            *(float *)(puVar8 + 0x12) = fVar2;
            fVar2 = *(float *)(param_5 + 8);
            *(float *)(puVar8 + 0xf) = fVar3 + 0.4;
            *(float *)((int)puVar8 + 0x94) = fVar6 - fVar4;
            dVar24 = 0.0;
            dVar25 = 0.7853981852531433;
            uVar17 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
            fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
            fVar5 = ABS(*(float *)((int)puVar8 + 0x8c));
            if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
              fVar5 = fVar4;
            }
            fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
            fVar10 = ABS(*(float *)(puVar8 + 0x12));
            if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
              fVar10 = fVar6;
            }
            dVar21 = dVar24;
            if (0.0 < fVar5) {
              lVar12 = uVar11 - 0x150;
              lVar18 = uVar11 - 0x98;
              lVar15 = uVar11 - 0xa8;
              lVar20 = 2;
              fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
              fVar6 = fVar5 * fVar5;
              *(float *)((int)puVar8 + 0xc4) = fVar5;
              *(float *)((int)puVar8 + 0xbc) = fVar5;
              *(float *)(puVar8 + 0x18) = fVar5;
              *(float *)(puVar8 + 0x17) = fVar5;
              fVar5 = fVar6 * fVar6;
              *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar6;
              *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar5;
              *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar5 * fVar6;
              do {
                *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar5 * fVar5;
                iVar13 = (int)lVar15;
                lVar15 = lVar15 + 8;
                lVar12 = lVar12 + 8;
                *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
                lVar18 = lVar18 + 8;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              lVar20 = 4;
              lVar18 = uVar11 - 0xa8;
              pfVar16 = (float *)&DAT_007358e0;
              lVar12 = lVar1;
              lVar15 = lVar18;
              do {
                fVar5 = *pfVar16;
                fVar6 = pfVar16[1];
                pfVar16 = pfVar16 + 2;
                *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar5;
                lVar12 = lVar12 + 8;
                *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                lVar15 = lVar15 + 8;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              lVar15 = 2;
              lVar12 = lVar1;
              do {
                iVar13 = (int)lVar12;
                iVar9 = (int)lVar18;
                lVar12 = lVar12 + 0x10;
                lVar18 = lVar18 + 0x10;
                dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar13 + 0xb8)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
              dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar4);
            }
            dVar21 = (double)fastfunc::FastSubRots(fVar2,(float)dVar21);
            dVar21 = (double)(float)(dVar21 * dVar21);
            fVar2 = *(float *)(param_5 + 4);
            if (dVar21 < (double)(float)(param_1 * param_1)) {
              fVar3 = param_4[2];
              *(float *)(puVar8 + 0x10) = (float)dVar26;
              dVar22 = ABS((double)(*(float *)(puVar8 + 0xf) - fVar3));
              *(float *)((int)puVar8 + 0x84) = *(float *)(puVar8 + 0xf) - fVar3;
              *(float *)(puVar8 + 0x11) = (float)(ABS(dVar26) - dVar22);
              uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
              dVar23 = ABS((double)*(float *)(puVar8 + 0x10));
              if ((double)*(float *)(puVar8 + 0x11) - dVar24 < 0.0) {
                dVar23 = dVar22;
              }
              fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
              dVar22 = ABS((double)*(float *)((int)puVar8 + 0x84));
              if ((double)*(float *)(puVar8 + 0x11) - dVar24 < 0.0) {
                dVar22 = ABS(dVar26);
              }
              fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
              if (dVar24 < dVar23) {
                lVar12 = uVar11 - 0x150;
                lVar15 = uVar11 - 200;
                lVar18 = uVar11 - 0xb8;
                lVar20 = 2;
                fVar4 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
                fVar6 = fVar4 * fVar4;
                *(float *)((int)puVar8 + 0xa4) = fVar4;
                *(float *)((int)puVar8 + 0x9c) = fVar4;
                *(float *)(puVar8 + 0x14) = fVar4;
                *(float *)(puVar8 + 0x13) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar6;
                *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar4;
                *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar4 * fVar4;
                  iVar13 = (int)lVar15;
                  lVar12 = lVar12 + 8;
                  lVar15 = lVar15 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar4 * fVar4;
                  lVar18 = lVar18 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                lVar20 = 4;
                lVar18 = uVar11 - 200;
                pfVar16 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar15 = lVar18;
                do {
                  fVar4 = *pfVar16;
                  fVar6 = pfVar16[1];
                  pfVar16 = pfVar16 + 2;
                  *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar4;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                  lVar15 = lVar15 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                lVar15 = 2;
                lVar12 = lVar1;
                do {
                  iVar13 = (int)lVar12;
                  iVar9 = (int)lVar18;
                  lVar12 = lVar12 + 0x10;
                  lVar18 = lVar18 + 0x10;
                  dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                                    *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                   *(float *)(iVar9 + 0xc));
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
                dVar24 = (double)((float)(dVar24 + dVar25) * fVar3 + fVar5);
              }
              dVar26 = (double)fastfunc::FastSubRots(fVar2,(float)dVar24);
              dVar26 = (double)(float)(dVar26 * dVar26);
              if (((dVar26 < (double)(float)(param_2 * param_2)) &&
                  (iVar13 = collproc::CollLine(param_4,uVar11 - 0xf0,0,iVar7,0), iVar13 == 0)) &&
                 ((fVar2 = param_4[1] - *(float *)((int)puVar8 + 0x74),
                  dVar26 = (double)((float)(dVar21 * dVar26) *
                                   SQRT(SQRT((param_4[2] - *(float *)(puVar8 + 0xf)) *
                                             (param_4[2] - *(float *)(puVar8 + 0xf)) +
                                             (*param_4 - *(float *)(puVar8 + 0xe)) *
                                             (*param_4 - *(float *)(puVar8 + 0xe)) + fVar2 * fVar2))
                                   ), dVar26 < dVar28 &&
                  ((iVar13 = collproc::CollLine(param_4,uVar11 - 0xf0,0,iVar7,0), iVar13 == 0 ||
                   (dVar28 == dVar27)))))) {
                dVar28 = dVar26;
                iVar19 = iVar7;
              }
            }
          }
        }
      }
      else if (sVar14 < 0x10) goto LAB_00348ea4;
    }
    else if (((sVar14 == 0xd) || (sVar14 == 3)) || (sVar14 == 1)) goto LAB_00348ea4;
    iVar7 = *(int *)(iVar7 + 0x28);
  } while( true );
}



//==== 003493d0  ns=mobyupdate_unsorted  size=0x714
// sig: undefined UpdateMoby_334(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe484 mobyutil::MB_randRange; 00128248 partupd::SpawnPart_27; 00348da0 mobyupdate_helpers::M334_00348da0; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize

/* Moby 334 */

void mobyupdate_unsorted::UpdateMoby_334(MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  MobyInstance *moby_00;
  int iVar10;
  undefined8 uVar9;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0 [4];
  undefined1 local_c0 [64];
  
  lVar8 = (longlong)(int)moby;
  pfVar3 = (float *)moby->pVar;
  fVar4 = (moby->pos).x + *pfVar3;
  (moby->pos).x = fVar4;
  fVar2 = (moby->pos).y + pfVar3[1];
  (moby->pos).y = fVar2;
  fVar5 = (moby->pos).z + pfVar3[2];
  (moby->pos).z = fVar5;
  dVar17 = 0.0;
  if (((fVar2 < 0.0 || fVar4 < 0.0) || (fVar5 < 0.0)) ||
     (64.0 < SQRT((fVar4 - GameCamera.posX) * (fVar4 - GameCamera.posX) +
                  (fVar2 - GameCamera.posY) * (fVar2 - GameCamera.posY)))) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    dVar16 = 1.0;
    if ((((uint)pfVar3[9] & 0x80) == 0) &&
       (moby_00 = (MobyInstance *)
                  mobyupdate_helpers::M334_00348da0
                            (0x3fe921fb60000000,0x3ff921fb60000000,0x4044000000000000,lVar8 + 0x10,
                             lVar8 + 0x40), moby_00 != (MobyInstance *)0x0)) {
      dVar14 = (double)(moby_00->pos).z;
      iVar10 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
      if (iVar10 != 0) {
        dVar14 = (double)(float)(dVar14 + (double)*(float *)(iVar10 + 0x10));
      }
      fVar2 = (moby->pos).y - (moby_00->pos).y;
      fVar4 = (moby->pos).x - (moby_00->pos).x;
      dVar11 = (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2);
      if (dVar17 < dVar11) {
        pfVar3[2] = (float)((double)(float)(dVar14 - (double)(moby->pos).z) / dVar11);
      }
    }
    fVar4 = pfVar3[9];
    if (((uint)fVar4 & 8) != 0) {
      iVar10 = collproc::CollLine(local_100,local_f0,0,lVar8,0);
      if (iVar10 == 0) {
        fVar4 = (moby->pos).z - pfVar3[0xd];
      }
      else {
        fVar2 = (moby->pos).z;
        fVar5 = fVar2 + pfVar3[0xc];
        fVar7 = CollOutput.ip.z + pfVar3[0xb];
        fVar6 = pfVar3[0xb];
        if (fVar5 - fVar7 < 0.0) {
          fVar6 = pfVar3[0xc];
        }
        fVar4 = CollOutput.ip.z;
        if (fVar5 - fVar7 < 0.0) {
          fVar4 = fVar2;
        }
        fVar4 = fVar4 + fVar6;
      }
      (moby->pos).z = fVar4;
      fVar4 = pfVar3[9];
    }
    if (((uint)fVar4 & 0x20) != 0) {
      fVar4 = (moby->pos).z;
      fVar2 = *(float *)((int)pfVar3[6] + 0x18) + pfVar3[0xb];
      if (fVar4 <= fVar2) {
        if (fVar4 < fVar2) {
          if ((fVar4 + pfVar3[0xc]) - fVar2 < 0.0) {
            fVar2 = fVar4 + pfVar3[0xc];
          }
          (moby->pos).z = fVar2;
        }
      }
      else {
        if (fVar2 - (fVar4 - pfVar3[0xd]) < 0.0) {
          fVar2 = fVar4 - pfVar3[0xd];
        }
        (moby->pos).z = fVar2;
      }
    }
    iVar10 = fastfunc::FastDecTimerS32(pfVar3 + 7);
    if (iVar10 == 0) {
      iVar10 = collproc::CollLine(local_110,lVar8 + 0x10,0,pfVar3[6],local_c0);
      if (iVar10 != 0) {
        fVar4 = pfVar3[9];
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        if (((((uint)fVar4 & 0x10) != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
           ((CollOutput.pMoby == g_heroMobyPtr &&
            ((pfVar3[6] != 0.0 &&
             (cVar1 = *(char *)((int)pfVar3[6] + 0x20), cVar1 != -3 && cVar1 != -2)))))) {
          *(undefined1 *)pfVar3[10] = 1;
        }
        iVar10 = 0;
        dVar15 = -1.0;
        dVar13 = 3.0;
        dVar11 = 6.0;
        dVar14 = 10.5;
        dVar17 = 15.5;
        uVar12 = 0x40dd4c0000000000;
        do {
          mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar16);
          mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar16);
          mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar16);
          fastfunc::FastVecNormalize(local_d0,pfVar3,0xa10980);
          mobyutil::MB_randRangeFloat
                    ((float)((double)mobyutil::g_FrameTime * dVar13),
                     (float)((double)mobyutil::g_FrameTime * dVar11));
          uVar9 = mobyutil::MB_randRange
                            ((int)((double)animationSpeed * dVar14),
                             (int)((double)animationSpeed * dVar17));
          partupd::SpawnPart_27(uVar12,lVar8 + 0x10,local_e0,0x7f2f4f6f,uVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 5);
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00349ae4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M338_00349ae4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M338_00349ae4(void)

{
  DAT_0083fefc = 0x10000;
  return;
}



//==== 00349b38  ns=mobyupdate_unsorted  size=0x6f0
// sig: undefined UpdateMoby_{335_337_338}(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000f20f0 mobyutil::MB_BSphereGap; 0010de78 mobyutil::MB_WrapRot; 00342d38 FUN_00342d38; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf
// strings: 006564ac: 'ammo was:%d is now:%d\n' | 006564c4: 'boost count was:%d is now:%d\n' | 006564e4: 'HP was:%f ' | 006564f4: ' is now:%f\n' | 00656504: 'Unknown type of item moby: %d\n'

/* Moby 335
   Moby 337
   Moby 338 */

void mobyupdate_unsorted::UpdateMoby__335_337_338_(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  MOBY_OCLASSES MVar3;
  short sVar4;
  void *pvVar5;
  MobyClass *pMVar6;
  float fVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
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
  float fVar22;
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar5 = moby->pVar;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    iVar9 = fastfunc::FastDecTimerS32((int)pvVar5 + 0x40);
    if (iVar9 != 0) {
      moby->state = '\x04';
      (moby->pos).x = *(f32 *)((int)pvVar5 + 0x20);
      pMVar6 = moby->pClass;
      (moby->pos).y = *(f32 *)((int)pvVar5 + 0x24);
      (moby->pos).z = *(f32 *)((int)pvVar5 + 0x28);
      (moby->pos).w = *(f32 *)((int)pvVar5 + 0x2c);
      moby->collision = pMVar6->collision;
    }
    goto LAB_0034a01c;
  }
  if (uVar1 == '\x04') {
    fVar22 = moby->pClass->gScale;
    fVar7 = DAT_0071f408 * 0.08 * (fVar22 - moby->scale) + moby->scale;
    moby->scale = fVar7;
    if (fVar22 - fVar7 < 0.002) {
      moby->scale = fVar22;
      moby->state = '\x01';
    }
    goto LAB_0034a01c;
  }
  if (uVar1 == '\x03') {
    iVar9 = fastfunc::FastDecTimerS32((int)pvVar5 + 4);
    if (iVar9 != 0) {
      moby->state = '\x01';
      moby->collision = moby->pClass->collision;
    }
    goto LAB_0034a01c;
  }
  if (uVar1 == '\x02') {
    fVar22 = moby->scale * (DAT_0071f408 * -0.089999974 + 1.0);
    moby->scale = fVar22;
    if (fVar22 < 0.0015) {
      if (*(int *)((int)pvVar5 + 0x3c) == 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      *(int *)((int)pvVar5 + 0x40) = *(int *)((int)pvVar5 + 0x3c);
      (moby->pos).x = 2.0;
      (moby->pos).y = 2.0;
      (moby->pos).z = 2.0;
      moby->collision = (ushort *)0x0;
      moby->state = '\x05';
    }
    goto LAB_0034a01c;
  }
  if (uVar1 != '\x01') {
    if (uVar1 == '\0') {
      fVar2 = (moby->pos).x;
      moby->state = '\x01';
      *(f32 *)((int)pvVar5 + 0x20) = fVar2;
      *(f32 *)((int)pvVar5 + 0x24) = (moby->pos).y;
      *(f32 *)((int)pvVar5 + 0x28) = (moby->pos).z;
      *(f32 *)((int)pvVar5 + 0x10) = (moby->rotation).x;
      *(f32 *)((int)pvVar5 + 0x14) = (moby->rotation).y;
      *(f32 *)((int)pvVar5 + 0x18) = (moby->rotation).z;
      *(undefined4 *)((int)pvVar5 + 4) = 0;
      if (*(int *)((int)pvVar5 + 0x44) < 1) {
        *(float *)((int)pvVar5 + 0x44) = (moby->scale * 2.3) / moby->pClass->gScale;
      }
      if (*(int *)((int)pvVar5 + 0x48) < 1) {
        *(float *)((int)pvVar5 + 0x48) = (moby->scale * 0.06) / moby->pClass->gScale;
      }
    }
    goto LAB_0034a01c;
  }
  if (DAT_0096b2d0 == 0) goto LAB_0034a01c;
  dVar11 = (double)mobyutil::MB_BSphereGap((longlong)(int)moby,DAT_0096b2d0);
  uVar8 = (ulonglong)DAT_0096b2da;
  if (((0.0 < dVar11) ||
      (fVar7 = (moby->pos).y - *(float *)(DAT_0096b2d0 + 0x14),
      fVar22 = (moby->pos).x - *(float *)(DAT_0096b2d0 + 0x10),
      *(float *)((int)pvVar5 + 0x44) <= SQRT(fVar22 * fVar22 + fVar7 * fVar7))) ||
     (*(float *)((int)pvVar5 + 0x48) <= ABS(*(float *)(DAT_0096b2d0 + 0x18) - (moby->pos).z)))
  goto LAB_0034a01c;
  MVar3 = moby->oClass;
  if ((short)MVar3 < 0x151) {
    if (MVar3 == 0x14f) {
      sVar4 = *(short *)((int)pvVar5 + 2);
      lVar10 = (ulonglong)DAT_0096b2d6 +
               (longlong)sVar4 +
               ((LZCOUNT(-1 - sVar4) << 0x3a) >> 0x3f & (ulonglong)DAT_0096b2d8 - (longlong)sVar4);
      lVar10 = lVar10 + ((longlong)((ulonglong)DAT_0096b2d7 - (longlong)(int)lVar10) >> 0x3f &
                        (ulonglong)DAT_0096b2d7 - lVar10);
      libc::printf("ammo was:%d is now:%d\n",(ulonglong)DAT_0096b2d6,lVar10);
      DAT_0096b2d6 = (byte)lVar10;
    }
    else {
LAB_00349e8c:
      libc::printf("Unknown type of item moby: %d\n",MVar3);
    }
  }
  else if ((short)MVar3 < 0x152) {
    libc::printf("HP was:%f ",(double)DAT_0096b2dc);
    if (*(short *)((int)pvVar5 + 2) == -1) {
      dVar11 = (double)DAT_0096b2e4;
    }
    else {
      dVar11 = (double)fastfunc::FastIntToDouble();
    }
    DAT_0096b2dc = (float)((double)DAT_0096b2dc + dVar11);
    dVar11 = (double)DAT_0096b2dc;
    if ((double)DAT_0096b2e0 < (double)DAT_0096b2dc) {
      DAT_0096b2dc = DAT_0096b2e0;
      dVar11 = (double)DAT_0096b2e0;
    }
    libc::printf(" is now:%f\n",dVar11);
  }
  else {
    if (0x152 < (short)MVar3) goto LAB_00349e8c;
    sVar4 = *(short *)((int)pvVar5 + 2);
    lVar10 = (ulonglong)DAT_0096b2d9 +
             (longlong)sVar4 +
             ((LZCOUNT(-1 - sVar4) << 0x3a) >> 0x3f & (ulonglong)DAT_0096b2db - (longlong)sVar4);
    lVar10 = lVar10 + ((longlong)(uVar8 - (longlong)(int)lVar10) >> 0x3f & uVar8 - lVar10);
    libc::printf("boost count was:%d is now:%d\n",uVar8,lVar10);
    DAT_0096b2da = (byte)lVar10;
  }
  moby->state = '\x02';
  fVar22 = DAT_0071f408 * 0.20000005;
  moby->collision = (ushort *)0x0;
  moby->scale = moby->scale * (fVar22 + 1.0);
LAB_0034a01c:
  if (moby->state != '\x05') {
    if (((*(byte *)((int)pvVar5 + 1) & 1) == 0) || (DAT_0083be04 == 0)) {
      dVar11 = (double)*(float *)((int)pvVar5 + 0x28);
    }
    else {
      dVar11 = (double)FUN_00342d38((longlong)(int)moby + 0x10);
    }
    if (*(int *)((int)pvVar5 + 8) != 0) {
      dVar12 = (double)fastfunc::FastIntToDouble(worldUpdateTime);
      fVar22 = mobyutil::MB_WrapRot
                         ((float)((double)(*(float *)((int)pvVar5 + 8) * DAT_0071f408) * dVar12));
      dVar12 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar5 + 0x18),fVar22);
      (moby->rotation).z = (float)dVar12;
    }
    dVar18 = -0.0001980741071747616;
    dVar19 = 2.601886990305502e-06;
    dVar17 = 0.008333025500178337;
    dVar12 = -0.16666656732559204;
    dVar20 = 3.141592502593994;
    dVar21 = -3.141592502593994;
    if (*(int *)((int)pvVar5 + 0xc) != 0) {
      dVar13 = (double)fastfunc::FastIntToDouble(worldUpdateTime);
      fVar22 = mobyutil::MB_WrapRot
                         ((float)((double)(*(float *)((int)pvVar5 + 0xc) * DAT_0071f408) * dVar13));
      dVar15 = (double)fVar22;
      dVar13 = (double)(float)(dVar20 - dVar15);
      if (dVar15 - (double)(float)(dVar20 - dVar15) < 0.0) {
        dVar13 = dVar15;
      }
      dVar14 = (double)(float)(dVar21 - dVar15);
      if ((double)(float)(dVar21 - dVar15) - dVar13 < 0.0) {
        dVar14 = dVar13;
      }
      dVar13 = (double)(float)(dVar14 * dVar14);
      dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
      dVar15 = (double)(float)(dVar13 * dVar16);
      (moby->pos).z =
           (float)((double)*(float *)((int)pvVar5 + 0x30) *
                   (double)(float)((double)(float)(dVar13 * dVar15) * dVar19 +
                                  (double)(float)(dVar15 * dVar18 +
                                                 (double)(float)(dVar16 * dVar17 +
                                                                (double)(float)((double)(float)(
                                                  dVar13 * dVar14) * dVar12 + dVar14)))) + dVar11);
    }
    if (*(int *)((int)pvVar5 + 0x34) != 0) {
      dVar11 = (double)fastfunc::FastIntToDouble(worldUpdateTime);
      fVar22 = mobyutil::MB_WrapRot
                         ((float)((double)(*(float *)((int)pvVar5 + 0x34) * DAT_0071f408) * dVar11))
      ;
      dVar13 = (double)fVar22;
      dVar11 = (double)(float)(dVar20 - dVar13);
      if (dVar13 - (double)(float)(dVar20 - dVar13) < 0.0) {
        dVar11 = dVar13;
      }
      dVar20 = (double)(float)(dVar21 - dVar13);
      if ((double)(float)(dVar21 - dVar13) - dVar11 < 0.0) {
        dVar20 = dVar11;
      }
      dVar11 = (double)(float)(dVar20 * dVar20);
      dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar20));
      dVar21 = (double)(float)(dVar11 * dVar13);
      dVar11 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar5 + 0x14),
                                  *(float *)((int)pvVar5 + 0x38) *
                                  (float)((double)(float)(dVar11 * dVar21) * dVar19 +
                                         (double)(float)(dVar21 * dVar18 +
                                                        (double)(float)(dVar13 * dVar17 +
                                                                       (double)(float)((double)(
                                                  float)(dVar11 * dVar20) * dVar12 + dVar20)))));
      (moby->rotation).y = (float)dVar11;
    }
  }
  return;
}



//==== 0034a228  ns=mobyupdate_helpers  size=0x14
// sig: undefined M339_0034a228(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M339_0034a228(void)

{
  DAT_0083ff6c = 0x10000;
  return;
}



//==== 0034a250  ns=mobyupdate_unsorted  size=0x348
// sig: undefined UpdateMoby_339(MobyInstance * moby)
// callers(0): 
// callees(3): 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00500060 fastfunc::FastDecTimerS8

/* WARNING: Removing unreachable block (ram,0x0034a584) */
/* Moby 339 */

void mobyupdate_unsorted::UpdateMoby_339(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar7;
  int iVar6;
  ulonglong uVar5;
  
  lVar4 = (longlong)(int)moby;
  fVar2 = (moby->pos).y - g_heroPosition.y;
  bVar1 = moby->state;
  fVar3 = (moby->pos).x - g_heroPosition.x;
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (bVar1 == 0) {
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(lVar4,0,0,0);
    }
    moby->state = '\x01';
    cVar7 = mobyutil::MB_randInt((int)(animationSpeed * 180.5));
    moby->setByGroup = cVar7;
    return;
  }
  if (bVar1 < 2) {
    if (((moby->updateId == '\0') && (fVar2 < 9.0)) && ((byte)moby->setByGroup < 2)) {
      moby->setByGroup = '\x02';
    }
    if ((fVar2 < 12.0) && (moby->updateId == moby->animationId && moby->animationId != '\0')) {
      moby->setByGroup = '\0';
    }
    iVar6 = fastfunc::FastDecTimerS8(lVar4 + 0xbc);
    if (iVar6 != 0) {
      bVar1 = moby->updateId;
      if (bVar1 == 0) {
        uVar5 = mobyutil::MB_randInt(0x100);
        if ((uVar5 & 1) == 0) {
          if (moby->animationId != '\x05') {
            mobyutil::MB_SetAnimation(lVar4,5,0,0);
          }
        }
        else if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(lVar4,3,0,0);
        }
      }
      else if (bVar1 < 2) {
        if (moby->animationId != '\x04') {
          mobyutil::MB_SetAnimation(lVar4,4,0,0);
        }
      }
      else if ((bVar1 < 3) && (moby->animationId != '\x06')) {
        mobyutil::MB_SetAnimation(lVar4,6,0,0);
      }
      moby->state = '\x02';
      return;
    }
    return;
  }
  if (2 < bVar1) {
    return;
  }
  if ((moby->field43_0x70 & 2U) == 0) {
    return;
  }
  bVar1 = moby->updateId;
  if (bVar1 < 4) {
    if ((2 < bVar1) && (moby->animationId != '\x01')) {
      mobyutil::MB_SetAnimation(lVar4,1,0,0);
    }
  }
  else {
    if (bVar1 < 6) {
      if (4 < bVar1) {
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar4,2,0,0);
        }
        goto LAB_0034a548;
      }
    }
    else if (6 < bVar1) goto LAB_0034a548;
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(lVar4,0,0,0);
    }
  }
LAB_0034a548:
  moby->state = '\x01';
  cVar7 = mobyutil::MB_randInt((int)(animationSpeed * 180.5));
  moby->setByGroup = cVar7;
  return;
}



//==== 0034a598  ns=mobyupdate_helpers  size=0x14
// sig: undefined M340_0034a598(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M340_0034a598(void)

{
  DAT_0083ffdc = 0x10000;
  return;
}



//==== 0034a5d0  ns=mobyupdate_helpers  size=0x2f0
// sig: undefined M340_0034a5d0(void)
// callers(1): 0034b2e8 mobyupdate_unsorted::UpdateMoby_340
// callees(8): 00109af0 mobyutil::Delt; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0015d710 sound::sound_SetVol; 0015d734 sound::sound_SetPitch; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

int mobyupdate_helpers::M340_0034a5d0(MobyInstance *param_1)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pvVar2 = param_1->pVar;
  if (param_1->state == '\t') {
    iVar3 = *(int *)((int)pvVar2 + 0x238);
    if (((iVar3 != -1) && (sound::g_SoundChannels[iVar3].pMoby == param_1)) &&
       (sound::g_SoundChannels[iVar3].state != '\0')) {
      sound::sound_Kill(iVar3);
    }
    iVar3 = -1;
    *(undefined4 *)((int)pvVar2 + 0x238) = 0xffffffff;
  }
  else {
    iVar3 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar2 + 0x238));
    if ((iVar3 == 0) && (param_1->animationId < 8)) {
      iVar3 = sound::PlayMobySound(0,4,param_1);
      *(int *)((int)pvVar2 + 0x238) = iVar3;
      dVar5 = (double)fastfunc::FastIntToDouble(0x400);
      *(float *)((int)pvVar2 + 0x230) = (float)dVar5;
      *(undefined4 *)((int)pvVar2 + 0x234) = 0;
    }
    bVar1 = param_1->animationId;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        dVar5 = (double)fastfunc::FastIntToDouble(0x400);
        dVar7 = 0.0;
        dVar5 = (double)(float)(dVar5 * 0.6000000238418579);
      }
      else {
        dVar5 = (double)fastfunc::FastIntToDouble(0x400);
        dVar7 = 3.0;
      }
    }
    else if (bVar1 < 5) {
      if (bVar1 < 3) {
        dVar5 = (double)fastfunc::FastIntToDouble(0x400);
        dVar7 = -2.0;
      }
      else {
        dVar5 = (double)fastfunc::FastIntToDouble(0x400);
        dVar7 = 4.0;
      }
    }
    else {
      if (7 < bVar1) {
        iVar3 = *(int *)((int)pvVar2 + 0x238);
        if (((iVar3 != -1) && (sound::g_SoundChannels[iVar3].pMoby == param_1)) &&
           (sound::g_SoundChannels[iVar3].state != '\0')) {
          sound::sound_Kill(iVar3);
        }
        *(undefined4 *)((int)pvVar2 + 0x238) = 0xffffffff;
        return -1;
      }
      dVar5 = (double)fastfunc::FastIntToDouble(0x400);
      dVar7 = 0.0;
      dVar5 = (double)(float)(dVar5 * 0.800000011920929);
    }
    dVar6 = (double)fastfunc::FastIntToDouble(0x400);
    mobyutil::Delt((float)dVar5,(float)(dVar6 * (double)mobyutil::g_FrameTime) * 2.0,
                   (float *)((int)pvVar2 + 0x230));
    mobyutil::Delt((float)dVar7,mobyutil::g_FrameTime * 8.0,(float *)((int)pvVar2 + 0x234));
    iVar3 = *(int *)((int)pvVar2 + 0x238);
    iVar4 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar2 + 0x230));
    sound::sound_SetVol(iVar3,iVar4);
    iVar3 = *(int *)((int)pvVar2 + 0x238);
    iVar4 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar2 + 0x234));
    iVar3 = sound::sound_SetPitch(iVar3,iVar4);
  }
  return iVar3;
}



//==== 0034a8d8  ns=mobyupdate_helpers  size=0x15c
// sig: undefined M340_0034a8d8(void)
// callers(1): 0034b2e8 mobyupdate_unsorted::UpdateMoby_340
// callees(5): 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010e030 mobyutil::MB_genericExplosion; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

int mobyupdate_helpers::M340_0034a8d8(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined1 local_30 [16];
  
  pvVar1 = param_1->pVar;
  uVar3 = 0;
  iVar2 = *(int *)((int)pvVar1 + 0x238);
  if (((iVar2 != -1) && (sound::g_SoundChannels[iVar2].pMoby == param_1)) &&
     (sound::g_SoundChannels[iVar2].state != '\0')) {
    sound::sound_Kill(iVar2);
  }
  *(undefined4 *)((int)pvVar1 + 0x238) = 0xffffffff;
  mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  mobyfunc::GetBonePosition(param_1,5,auStack_40);
  mobyutil::MB_genericExplosion
            (uVar3,uVar3,0x4000000000000000,0x3ff0000000000000,0x40f86a0000000000,0x3ff0000000000000
             ,0x402e000000000000,param_1,local_30,auStack_40,1,0,10,3,4);
  iVar2 = sound::PlayMobySound(1,0,param_1);
  return iVar2;
}



//==== 0034aa40  ns=mobyupdate_helpers  size=0x130
// sig: undefined M340_0034aa40(void)
// callers(1): 0034b2e8 mobyupdate_unsorted::UpdateMoby_340
// callees(1): 001118d8 mobyutil::MB_getTarget

undefined8 mobyupdate_helpers::M340_0034aa40(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float local_60;
  float local_5c;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar2 + 0x38) == 0) &&
     (puVar6 = (undefined4 *)(uint)*(ushort *)(iVar2 + 0x136), *(ushort *)(iVar2 + 0x136) == 0)) {
    fVar1 = *(float *)(iVar2 + 0x140);
  }
  else {
    puVar6 = &DAT_0034aa34;
    fVar1 = *(float *)(iVar2 + 0x140) * 2.0;
  }
  mobyutil::MB_getTarget((double)fVar1,param_1,puVar6,&local_60);
  fVar1 = *(float *)(param_1 + 0x14) - local_5c;
  fVar4 = *(float *)(param_1 + 0x10) - local_60;
  iVar2 = MobyUpdateChainStart;
  do {
    if (iVar2 == 0) {
      return 1;
    }
    if ((iVar2 != param_1) && (*(short *)(iVar2 + 0xa6) == 0x154)) {
      fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar2 + 0x14);
      fVar5 = *(float *)(param_1 + 0x10) - *(float *)(iVar2 + 0x10);
      if ((SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 3.0) ||
         (fVar3 = *(float *)(iVar2 + 0x14) - local_5c, fVar5 = *(float *)(iVar2 + 0x10) - local_60,
         SQRT(fVar5 * fVar5 + fVar3 * fVar3) < SQRT(fVar4 * fVar4 + fVar1 * fVar1))) {
        return 0;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x28);
  } while( true );
}



//==== 0034ab98  ns=mobyupdate_helpers  size=0x690
// sig: undefined M340_0034ab98(void)
// callers(1): 0034b2e8 mobyupdate_unsorted::UpdateMoby_340
// callees(1): 001118d8 mobyutil::MB_getTarget

double mobyupdate_helpers::M340_0034ab98(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar17;
  longlong lVar16;
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
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x150;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2c] = in_LR;
  puVar9[0x27] = in_f29;
  puVar9[0x28] = in_f30;
  puVar9[0x29] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  puVar9[0x24] = unaff_r29;
  iVar8 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar8 + 0x38) == 0) &&
     (puVar17 = (undefined4 *)(uint)*(ushort *)(iVar8 + 0x136), *(ushort *)(iVar8 + 0x136) == 0)) {
    fVar2 = *(float *)(iVar8 + 0x140);
  }
  else {
    puVar17 = &DAT_0034ab70;
    fVar2 = *(float *)(iVar8 + 0x140) * 2.0;
  }
  mobyutil::MB_getTarget((double)fVar2,param_1,puVar17,uVar13 - 0xe0);
  iVar8 = MobyUpdateChainStart;
  fVar2 = *(float *)((int)puVar9 + 0x74);
  fVar7 = *(float *)(param_1 + 0x14) - fVar2;
  fVar3 = *(float *)(puVar9 + 0xe);
  fVar5 = *(float *)(param_1 + 0x10) - fVar3;
  dVar25 = 0.0;
  fVar4 = *(float *)(puVar9 + 0xf);
  bVar12 = true;
  fVar7 = SQRT(fVar5 * fVar5 + fVar7 * fVar7);
  if (MobyUpdateChainStart != 0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    dVar22 = (double)DAT_0084000c;
    dVar24 = dVar25;
    dVar26 = dVar25;
    dVar27 = dVar25;
    dVar28 = dVar25;
    do {
      if ((iVar8 != param_1) && (*(short *)(iVar8 + 0xa6) == *(short *)(param_1 + 0xa6))) {
        fVar5 = *(float *)(iVar8 + 0x14);
        fVar6 = *(float *)(iVar8 + 0x10);
        fVar1 = fVar5 - *(float *)(param_1 + 0x14);
        fVar10 = fVar6 - *(float *)(param_1 + 0x10);
        if (SQRT(fVar10 * fVar10 + fVar1 * fVar1) < 3.0) {
          fVar6 = (float)(dVar22 * (double)(*(float *)(param_1 + 0x10) - fVar6) + dVar26);
          dVar26 = (double)fVar6;
          fVar5 = (float)(dVar22 * (double)(*(float *)(param_1 + 0x14) - fVar5) + dVar27);
          dVar27 = (double)fVar5;
          fVar1 = (float)(dVar22 * (double)(*(float *)(param_1 + 0x18) - *(float *)(iVar8 + 0x18)) +
                         dVar28);
          dVar28 = (double)fVar1;
          *param_2 = fVar6;
          param_2[1] = fVar5;
          param_2[2] = fVar1;
          dVar22 = (double)DAT_0084000c;
          fVar6 = *(float *)(iVar8 + 0x10);
          fVar5 = *(float *)(iVar8 + 0x14);
          dVar24 = (double)(float)(dVar22 + dVar24);
        }
        if (SQRT((fVar6 - fVar3) * (fVar6 - fVar3) + (fVar5 - fVar2) * (fVar5 - fVar2)) < fVar7) {
          bVar12 = false;
        }
      }
      iVar8 = *(int *)(iVar8 + 0x28);
    } while (iVar8 != 0);
    if (!bVar12) {
      fVar5 = *(float *)(param_1 + 0x14) - fVar2;
      fVar6 = *(float *)(param_1 + 0x10) - fVar3;
      fVar4 = *(float *)(param_1 + 0x18) - fVar4;
      dVar22 = dVar25;
      if (5.5 - fVar7 < 0.0) {
        dVar22 = -5.0;
      }
      if (fVar7 - 4.5 < 0.0) {
        dVar22 = 5.0;
      }
      param_2[3] = 0.0;
      fVar1 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar7 = 1.0 / (float)(dVar24 + 10.0);
      fVar10 = (float)(dVar22 * 10.0) / fVar1;
      dVar24 = dVar25;
      if (0.0 - fVar1 < 0.0) {
        dVar24 = (double)(fVar10 * fVar4);
      }
      dVar22 = dVar25;
      if (0.0 - fVar1 < 0.0) {
        dVar22 = (double)(fVar10 * fVar5);
      }
      dVar23 = dVar25;
      if (0.0 - fVar1 < 0.0) {
        dVar23 = (double)(fVar10 * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar24 = (double)(fVar10 * fVar4);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar22 = (double)(fVar10 * fVar5);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar23 = (double)(fVar10 * fVar6);
      }
      fVar4 = (float)(dVar28 + dVar24) * fVar7;
      fVar5 = (float)(dVar27 + dVar22) * fVar7;
      fVar7 = (float)(dVar26 + dVar23) * fVar7;
      param_2[2] = fVar4;
      param_2[1] = fVar5;
      *param_2 = fVar7;
      fVar7 = fVar7 + *(float *)(param_1 + 0x10);
      *param_2 = fVar7;
      fVar5 = fVar5 + *(float *)(param_1 + 0x14);
      param_2[1] = fVar5;
      fVar4 = fVar4 + *(float *)(param_1 + 0x18);
      goto LAB_0034ae5c;
    }
  }
  *param_2 = fVar3;
  param_2[1] = fVar2;
  param_2[3] = *(float *)((int)puVar9 + 0x7c);
  fVar5 = fVar2;
  fVar7 = fVar3;
LAB_0034ae5c:
  param_2[2] = fVar4;
  fVar4 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14) - fVar5;
  if (1.0 <= SQRT((fVar4 - fVar7) * (fVar4 - fVar7) + fVar6 * fVar6)) {
    fVar5 = fVar5 - *(float *)(param_1 + 0x14);
    fVar6 = ABS(fVar7 - fVar4);
    fVar3 = ABS(fVar5);
    *(float *)(puVar9 + 0x18) = fVar7 - fVar4;
    *(float *)((int)puVar9 + 0xc4) = fVar5;
    *(float *)(puVar9 + 0x19) = fVar6 - fVar3;
    uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x18));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar4 = ABS(*(float *)((int)puVar9 + 0xc4));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar7 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar20 = uVar13 - 0x68;
      lVar16 = uVar13 - 0x78;
      lVar21 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0xe4) = fVar2;
      *(float *)((int)puVar9 + 0xdc) = fVar2;
      *(float *)(puVar9 + 0x1c) = fVar2;
      *(float *)(puVar9 + 0x1b) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar4;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar2;
      *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar20 = uVar13 - 0x78;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar20;
      do {
        fVar2 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar8 + 0xd8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar7);
    }
  }
  else {
    *param_2 = fVar4;
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    fVar3 = fVar3 - *(float *)(param_1 + 0x10);
    fVar2 = fVar2 - *(float *)(param_1 + 0x14);
    fVar7 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)((int)puVar9 + 0xcc) = fVar3;
    *(float *)(puVar9 + 0x1a) = fVar2;
    *(float *)((int)puVar9 + 0xd4) = fVar7 - fVar4;
    uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0xcc));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar4 = ABS(*(float *)(puVar9 + 0x1a));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar7 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar16 = uVar13 - 0x58;
      lVar20 = uVar13 - 0x48;
      lVar21 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0x104) = fVar2;
      *(float *)((int)puVar9 + 0xfc) = fVar2;
      *(float *)(puVar9 + 0x20) = fVar2;
      *(float *)(puVar9 + 0x1f) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xfc) = *(float *)((int)puVar9 + 0xfc) * fVar4;
      *(float *)(puVar9 + 0x20) = *(float *)(puVar9 + 0x20) * fVar2;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xe8) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar20 = uVar13 - 0x58;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar20;
      do {
        fVar2 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xf8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar8 + 0xf8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar7);
    }
  }
  return dVar25;
}



//==== 0034b2e8  ns=mobyupdate_unsorted  size=0x2434
// sig: undefined UpdateMoby_340(MobyInstance * moby)
// callers(0): 
// callees(48): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 000ffcd0 mobyutil::CollMovingSphere; 00100f8c mobyutil::MB_InitDefaultParams; 00104e44 mobyutil::PointInsideComplexPoly; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 001136c8 mobyutil::DoMeander; 00119a18 mobyfunc::DoManipulator; 00126dd8 partupd::SpawnPart_22; 0015cdb0 sound::sound_Kill; 0034a5d0 mobyupdate_helpers::M340_0034a5d0; 0034a8d8 mobyupdate_helpers::M340_0034a8d8; 0034aa40 mobyupdate_helpers::M340_0034aa40; 0034ab98 mobyupdate_helpers::M340_0034ab98; 0048c188 FUN_0048c188; 004fffb4 fastfunc::FastDecTimerS16; 005000b4 fastfunc::FastDecTimerU8; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502648 fastfunc::FastAddRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e7d64 FUN_005e7d64; 005e7e18 idol::GetAnimDuration; 005e7e98 FUN_005e7e98

/* Moby 340 */

void mobyupdate_unsorted::UpdateMoby_340(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  MobyInstance *pMVar10;
  MobyInstance *pMVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  bool bVar14;
  Cuboid *pCVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined2 uVar22;
  int iVar19;
  int iVar20;
  undefined1 uVar24;
  short sVar23;
  byte bVar25;
  uint uVar21;
  ulonglong unaff_r19;
  longlong lVar26;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar27;
  ulonglong unaff_r26;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong uVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar27 = uVar16 - 0x2a0;
  puVar13 = (ulonglong *)lVar27;
  *puVar13 = uVar16;
  puVar13[0x56] = in_LR;
  puVar13[0x4f] = in_f27;
  puVar13[0x50] = in_f28;
  puVar13[0x51] = in_f29;
  puVar13[0x52] = in_f30;
  puVar13[0x53] = in_f31;
  puVar13[0x4d] = unaff_r30;
  puVar13[0x4e] = unaff_r31;
  pvVar9 = moby->pVar;
  uVar30 = ZEXT48(pvVar9);
  puVar13[0x4c] = unaff_r29;
  dVar35 = (double)(moby->rotation).z;
  puVar13[0x47] = unaff_r24;
  bVar14 = false;
  iVar19 = *(int *)((int)pvVar9 + 0x38);
  puVar13[0x4b] = unaff_r28;
  puVar13[0x4a] = unaff_r27;
  puVar13[0x49] = unaff_r26;
  puVar13[0x48] = unaff_r25;
  puVar13[0x46] = unaff_r23;
  puVar13[0x45] = unaff_r22;
  puVar13[0x44] = unaff_r21;
  puVar13[0x43] = unaff_r20;
  puVar13[0x42] = unaff_r19;
  if ((iVar19 != 0) || (*(short *)((int)pvVar9 + 0x136) != 0)) {
    bVar14 = true;
  }
  mobyfunc::DoManipulator(0x4007333340000000,moby,7,(Manipulator *)((int)pvVar9 + 0x270));
  if ((moby->enabled != '\0') &&
     (dVar31 = (double)FUN_005e8548(lVar17 + 0x10,0x951500), dVar31 < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar17);
    moby->shadow = '\x15';
  }
  if (bVar14) {
    fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
  }
  else {
    fVar2 = *(float *)((int)pvVar9 + 0x140);
  }
  mobyutil::MB_getTarget((double)fVar2,lVar17);
  pMVar10 = *(MobyInstance **)(puVar13 + 0x38);
  dVar31 = (double)mobyfunc::BlendAnimFrame(moby);
  lVar28 = lVar17 + 0x10;
  dVar32 = (double)FUN_005e8588(lVar28,uVar16 - 0x120);
  FUN_005e7e98(uVar16 - 0x230,lVar28);
  FUN_005e7e98(uVar16 - 0x220,lVar28);
  moby->updateDistance = ' ';
  mobyupdate_helpers::M340_0034a5d0(lVar17);
  if (((moby->state == '\x01') || (moby->state == '\x03')) &&
     ((DAT_00969f20 == moby || (dVar33 = (double)FUN_005e8548(lVar28,&g_heroPosition), dVar33 < 1.5)
      ))) {
    uVar18 = idol::GetAnimDuration(10);
    mobyutil::MB_SetAnimation(lVar17,7,0,uVar18);
    uVar22 = idol::GetAnimDuration(0x3c);
    *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
    moby->state = '\a';
  }
  fastfunc::FastDecTimerU8(uVar30 + 0x14d);
  if ((moby->state != '\b') && (moby->state != '\0')) {
    dVar33 = 0.0;
    *(undefined4 *)((int)puVar13 + 0x1d4) = 0;
    iVar19 = mobyutil::MB_damage(lVar17,0x210000,0);
    iVar20 = mobyutil::MB_HandleDamage
                       (moby,iVar19,uVar30 + 0x20,0,puVar13 + 0x3a,(int)puVar13 + 0x1d4,0,4);
    if ((iVar19 != 0) && ((moby->state != '\0' && (*(char *)((int)pvVar9 + 0x14d) == '\0')))) {
      pMVar11 = *(MobyInstance **)(iVar19 + 0x20);
      if (pMVar11 == (MobyInstance *)0x0) {
        dVar34 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                      (double)((moby->pos).y - g_heroPosition.y));
      }
      else if (pMVar11 == g_currentWeaponMoby) {
        dVar34 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                      (double)((moby->pos).y - g_heroPosition.y));
      }
      else {
        dVar34 = (double)FUN_005e8338((double)((moby->pos).x - (pMVar11->pos).x),
                                      (double)((moby->pos).y - (pMVar11->pos).y));
      }
      *(undefined4 *)((int)pvVar9 + 0xd0) = 0x3c03126f;
      *(undefined4 *)((int)pvVar9 + 0xd4) = 0x3a03126f;
      fVar2 = mobyutil::g_FrameTime;
      *(undefined1 *)((int)pvVar9 + 0xfd) = 0;
      *(undefined4 *)((int)pvVar9 + 0xe4) = 9;
      *(float *)((int)pvVar9 + 0xd8) = fVar2 * 4.0;
      sVar8 = *(short *)(*(int *)(iVar19 + 0x20) + 0xa6);
      if ((sVar8 == 0xb0) || (sVar8 == 0xb1)) {
        *(undefined4 *)(iVar19 + 0x2c) = 0x3f800000;
        *(undefined4 *)((int)puVar13 + 0x1d4) = 0x3f800000;
      }
      fVar2 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar13 + 0x1d4);
      *(float *)((int)pvVar9 + 0x20) = fVar2;
      if ((double)fVar2 <= dVar33) {
        iVar20 = 1;
      }
      uVar22 = idol::GetAnimDuration(0xf0);
      *(undefined2 *)((int)pvVar9 + 0x136) = uVar22;
      if (iVar20 < 3) {
        if ((-1 < iVar20) && (0 < iVar20)) {
          mobyupdate_helpers::M340_0034a8d8(lVar17);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else if ((iVar20 < 0xb) && (iVar20 < 7)) {
        uVar18 = idol::GetAnimDuration(5);
        mobyutil::MB_SetAnimation(lVar17,8,0,uVar18);
        sVar8 = *(short *)(*(int *)(iVar19 + 0x20) + 0xa6);
        if ((sVar8 == 0x131) || (sVar8 == 0xb0)) {
          fVar2 = (10.0 / (animationSpeed * 15.0)) * 0.5;
        }
        else {
          fVar2 = 10.0 / (animationSpeed * 15.0);
        }
        *(float *)((int)pvVar9 + 0x13c) = fVar2;
        moby->state = '\x06';
        dVar33 = (double)fastfunc::FastWrapRot(3.1415927,(float)dVar34);
        (moby->rotation).z = (float)dVar33;
        *(undefined1 *)((int)pvVar9 + 0xb7) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar17,uVar30 + 0xb0);
        uVar24 = idol::GetAnimDuration(0x14);
        *(undefined1 *)((int)pvVar9 + 0x14d) = uVar24;
        *(undefined1 *)((int)pvVar9 + 0xb7) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar17,uVar30 + 0xb0);
        uVar24 = idol::GetAnimDuration(0x14);
        *(undefined1 *)((int)pvVar9 + 0x14d) = uVar24;
      }
    }
  }
  moby->damage = -1;
  if (*(int *)((int)pvVar9 + 0x38) != 0) {
    uVar22 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)((int)pvVar9 + 0x136) = uVar22;
  }
  *(undefined4 *)((int)pvVar9 + 0x38) = 0;
  fastfunc::FastDecTimerS16(uVar30 + 0x136);
  if ((((moby->state == '\a') && (moby->updateId == '\a')) && (15.0 < dVar31)) && (dVar31 < 44.0)) {
    iVar19 = 0;
    dVar33 = 10.0;
    uVar18 = 0x3fe0000000000000;
    do {
      *(undefined4 *)(puVar13 + 0x3b) = 1;
      *(undefined4 *)((int)puVar13 + 0x1dc) = 2;
      *(undefined4 *)(puVar13 + 0x3c) = 3;
      *(undefined4 *)((int)puVar13 + 0x1e4) = 4;
      mobyfunc::GetBonePosition(lVar17,*(undefined4 *)((int)lVar27 + 0x1d8),uVar16 - 0x210);
      *(MobyInstance **)(puVar13 + 0x2c) = moby;
      lVar26 = uVar16 - 0x150;
      *(undefined4 *)((int)puVar13 + 0x16c) = 0x3f800000;
      *(undefined4 *)((int)puVar13 + 0x164) = 0x10001;
      FUN_005e81f0(lVar26,&g_heroPosition,lVar28);
      FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar33),lVar26,lVar26);
      *(undefined4 *)(puVar13 + 0x2e) = 1;
      collproc::CollMobySphere(uVar18,uVar16 - 0x210);
      if (CollOutput.pMoby == pMVar10) {
        sVar8 = *(short *)((int)pvVar9 + 0x146);
        sVar23 = idol::GetAnimDuration(0x3c);
        if (sVar8 < sVar23) {
          uVar22 = *(undefined2 *)((int)pvVar9 + 0x146);
        }
        else {
          uVar22 = idol::GetAnimDuration(0x3c);
        }
        *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
      }
      iVar19 = iVar19 + 1;
      lVar27 = lVar27 + 4;
    } while (iVar19 < 4);
  }
  if ((moby->state != '\0') && (*(char *)((int)pvVar9 + 0x2e) != '\x01')) {
    iVar19 = *(int *)((int)pvVar9 + 0x238);
    if ((iVar19 != -1) &&
       ((sound::g_SoundChannels[iVar19].pMoby == moby &&
        (sound::g_SoundChannels[iVar19].state != '\0')))) {
      sound::sound_Kill(iVar19);
    }
    *(undefined4 *)((int)pvVar9 + 0x238) = 0xffffffff;
    mobyfunc::DeleteMoby(moby);
    return;
  }
  fastfunc::FastDecTimerS16(uVar30 + 0x146);
  bVar25 = moby->state;
  if (4 < bVar25) {
    if (bVar25 < 8) {
      if (bVar25 < 6) {
        pSVar12 = Splines[*(int *)((int)pvVar9 + 0x150)];
        if (bVar14) {
          fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
        }
        else {
          fVar2 = *(float *)((int)pvVar9 + 0x140);
        }
        if ((dVar32 < (double)fVar2) &&
           (((bVar14 || (*(int *)((int)pvVar9 + 0x138) == -1)) ||
            (iVar19 = mobyutil::PointInsideComplexPoly
                                ((Vec4 *)(puVar13 + 0x30),
                                 (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                                 Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)))) {
          if ((*(ushort *)((int)pvVar9 + 0x14e) & 1) == 0) {
            *(ushort *)((int)pvVar9 + 0x14e) = *(ushort *)((int)pvVar9 + 0x14e) | 1;
            puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar17,6,0,*(undefined4 *)((int)puVar13 + 0x1fc));
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = loadVectorLeftIndexed(0x4c,0x34b228);
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar36 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
            *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
          }
          FUN_005e8338((double)(*(float *)(puVar13 + 0x30) - (moby->pos).x),
                       (double)(*(float *)((int)puVar13 + 0x184) - (moby->pos).y));
          dVar35 = 2.0;
          if (((2.0 <= dVar32) || (*(short *)((int)pvVar9 + 0x146) != 0)) ||
             (iVar19 = mobyupdate_helpers::M340_0034aa40(lVar17), iVar19 == 0)) {
            if (bVar14) {
              fVar2 = (float)((double)*(float *)((int)pvVar9 + 0x140) * dVar35);
            }
            else {
              fVar2 = *(float *)((int)pvVar9 + 0x140);
            }
            if ((dVar32 < (double)fVar2) && (*(short *)((int)pvVar9 + 0x146) == 0)) {
              puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar13 + 0x1fc));
              *(undefined1 *)((int)pvVar9 + 0x14c) = 0;
              moby->state = '\x03';
            }
          }
          else {
            puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar17,7,0,*(undefined4 *)((int)puVar13 + 0x1fc));
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar38 = loadVectorLeftIndexed(0x4c,0x34b228);
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
            *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
            moby->state = '\a';
            *(undefined4 *)((int)pvVar9 + 0x130) = 0;
          }
        }
        pCVar15 = Cuboids;
        sVar8 = *(short *)((int)pvVar9 + 0x15a);
        if (sVar8 < 1) {
          if (-1 < sVar8) {
            sVar8 = *(short *)((int)pvVar9 + 0x158);
            iVar19 = (int)((longlong)sVar8 << 7);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)((int)&(Cuboids->pos).x + iVar19);
            *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)&(pCVar15->pos).y + iVar19);
            *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)((int)&(pCVar15->pos).z + iVar19);
            *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)&(pCVar15->pos).w + iVar19);
            mobyutil::OrganicDeltAngSpeed
                      ((double)*(float *)((int)&(pCVar15->rot).z + (int)((longlong)sVar8 << 7)),
                       (double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
                       (double)(mobyutil::g_FrameTime * 3.1415927),lVar17,&DAT_00720000,
                       uVar30 + 0x130);
            if (moby->animationId != '\x01') {
              puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar13 + 0x1fc));
            }
            dVar35 = (double)FUN_005e8588(lVar28,uVar16 - 0x220);
            if ((dVar35 < 1.0) &&
               (dVar35 = (double)fastfunc::FastSubRots
                                           ((moby->rotation).z,
                                            *(float *)((int)&(Cuboids->rot).z +
                                                      (int)((longlong)
                                                            *(short *)((int)pvVar9 + 0x158) << 7))),
               dVar35 < 0.1745329201221466)) {
              *(undefined2 *)((int)pvVar9 + 0x15a) = 1;
            }
          }
        }
        else if (sVar8 < 2) {
          iVar19 = (int)((longlong)*(short *)((int)pvVar9 + 0x158) << 7);
          uVar1 = moby->animationId;
          *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)((int)&(Cuboids->pos).x + iVar19);
          *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)&(pCVar15->pos).y + iVar19);
          *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)((int)&(pCVar15->pos).z + iVar19);
          *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)&(pCVar15->pos).w + iVar19);
          if (uVar1 == '\a') {
            if ((moby->field43_0x70 & 2U) != 0) {
              puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar17,0,0,*(undefined4 *)((int)puVar13 + 0x1fc));
              *(undefined4 *)((int)pvVar9 + 0x130) = 0;
              *(undefined2 *)((int)pvVar9 + 0x15a) = 2;
            }
          }
          else {
            puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar17,7,0,*(undefined4 *)((int)puVar13 + 0x1fc));
          }
        }
        else if (sVar8 < 3) {
          iVar20 = (int)((longlong)*(short *)((int)pvVar9 + 0x158) << 7);
          iVar19 = *(int *)((int)pvVar9 + 0x154);
          *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)((int)&(Cuboids->pos).x + iVar20);
          *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)&(pCVar15->pos).y + iVar20);
          *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)((int)&(pCVar15->pos).z + iVar20);
          fVar2 = (moby->pos).x;
          *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)&(pCVar15->pos).w + iVar20);
          uVar18 = FUN_005e8338((double)(pSVar12->points[iVar19].x - fVar2),
                                (double)(pSVar12->points[iVar19].y - (moby->pos).y));
          mobyutil::OrganicDeltAngSpeed
                    (uVar18,(double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
                     (double)(mobyutil::g_FrameTime * 3.1415927),lVar17,&DAT_00720000,uVar30 + 0x130
                    );
          dVar32 = (double)(moby->rotation).z;
          dVar35 = (double)FUN_005e8338((double)(pSVar12->points[*(int *)((int)pvVar9 + 0x154)].x -
                                                (moby->pos).x),
                                        (double)(pSVar12->points[*(int *)((int)pvVar9 + 0x154)].y -
                                                (moby->pos).y));
          dVar35 = (double)fastfunc::FastSubRots((float)dVar32,(float)dVar35);
          if (dVar35 < 0.1745329201221466) {
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            moby->state = '\x04';
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = loadVectorLeftIndexed(0x58,0x34b228);
            auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
            *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
          }
        }
      }
      else if (bVar25 < 7) {
        if (((moby->updateId == '\b') &&
            (dVar35 = (double)mobyfunc::BlendAnimFrame(moby), 30.0 < dVar35)) ||
           ((moby->field43_0x70 & 2U) != 0)) {
          puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar17,0,0,*(undefined4 *)((int)puVar13 + 0x1fc));
          moby->state = '\x01';
          *(undefined2 *)((int)pvVar9 + 0x146) = 0;
        }
      }
      else {
        if (bVar14) {
          fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
        }
        else {
          fVar2 = *(float *)((int)pvVar9 + 0x140);
        }
        uVar18 = mobyupdate_helpers::M340_0034ab98((double)fVar2,lVar17,uVar16 - 0x220);
        if ((*(short *)((int)pvVar9 + 0x146) == 0) &&
           ((44.0 < dVar31 || ((moby->field43_0x70 & 2U) != 0)))) {
          puVar13[0x3f] = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar17,0,0,*(undefined4 *)((int)puVar13 + 0x1fc));
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar38 = loadVectorLeftIndexed(0x60,0x34b228);
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = vectorSplatHalfWord(auVar36,1);
          uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
          *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
          moby->state = '\x01';
          *(ushort *)((int)pvVar9 + 0x14e) = *(ushort *)((int)pvVar9 + 0x14e) | 2;
        }
        mobyutil::OrganicDeltAngSpeed
                  (uVar18,(double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
                   (double)(mobyutil::g_FrameTime * 3.1415927),lVar17,&DAT_00720000,uVar30 + 0x130);
      }
    }
    else if (bVar25 < 9) {
      if ((moby->field43_0x70 & 2U) != 0) {
        mobyupdate_helpers::M340_0034a8d8(lVar17);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else if ((bVar25 < 10) && (iVar19 = FUN_0048c188(lVar17,uVar30 + 0xc0), iVar19 != 0)) {
      moby->state = '\0';
      *(undefined2 *)((int)pvVar9 + 0x1e8) = 0;
    }
    goto LAB_0034ccb4;
  }
  if (bVar25 < 2) {
    if (bVar25 == 0) {
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x3f800000;
      *(undefined2 *)((int)pvVar9 + 0x24) = 1;
      *(undefined1 *)((int)pvVar9 + 0x28) = 0;
      *(undefined4 *)((int)pvVar9 + 0x30) = 0x3f400000;
      *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
      *(undefined1 *)((int)pvVar9 + 0x29) = 0;
      *(undefined1 *)((int)pvVar9 + 0x58) = 8;
      *(undefined1 *)((int)pvVar9 + 0x5a) = 6;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar9 + 0x60));
      *(undefined4 *)((int)pvVar9 + 100) = 0x3f800000;
      *(undefined4 *)((int)pvVar9 + 0x68) = 0x3e800000;
      *(undefined4 *)((int)pvVar9 + 0x6c) = 0x3e19999a;
      *(undefined4 *)((int)pvVar9 + 0x60) = 0x200;
      fVar2 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar9 + 0x98) = 4;
      *(float *)((int)pvVar9 + 0x84) = fVar2 * 3.0;
      FUN_005e7e98(uVar30 + 0x240,lVar28);
      *(undefined4 *)((int)pvVar9 + 0x25c) = 0x40000000;
      fVar2 = mobyutil::g_FrameTime * 2.9670596;
      *(float *)((int)pvVar9 + 0x254) = mobyutil::g_FrameTime * 2.0;
      *(float *)((int)pvVar9 + 600) = fVar2;
      FUN_005e7e98(uVar30 + 0x120,lVar28);
      uVar22 = idol::GetAnimDuration(0x3c);
      *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
      *(undefined2 *)((int)pvVar9 + 0x136) = 0;
      *(undefined2 *)((int)pvVar9 + 0x144) = 0;
      *(undefined ***)((int)pvVar9 + 0x1f0) = &PTR_DAT_00840000;
      moby->state = ((byte)((LZCOUNT(-1 - *(int *)((int)pvVar9 + 0x150)) << 0x3a) >> 0x3f) & 0xfd) +
                    4;
    }
    else {
      FUN_005e7e98(uVar16 - 0x200,lVar28);
      mobyutil::DoMeander(0x3fd6666660000000,0x3fd0000000000000,lVar17,uVar30 + 0x240);
      if ((*(int *)((int)pvVar9 + 0x138) != -1) &&
         (iVar19 = mobyutil::PointInsideComplexPoly
                             ((Vec4 *)lVar28,(Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                              Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 == 0)) {
        FUN_005e7e98(lVar28,uVar16 - 0x200);
      }
      if ((moby->updateId != '\0') && ((moby->field43_0x70 & 2U) != 0)) {
        uVar18 = idol::GetAnimDuration(5);
        mobyutil::MB_SetAnimation(lVar17,0,0,uVar18);
      }
      if (bVar14) {
        fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
      }
      else {
        fVar2 = *(float *)((int)pvVar9 + 0x140);
      }
      if ((dVar32 < (double)fVar2) &&
         (((bVar14 || (*(int *)((int)pvVar9 + 0x138) == -1)) ||
          (iVar19 = mobyutil::PointInsideComplexPoly
                              ((Vec4 *)(puVar13 + 0x30),
                               (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                               Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)))) {
        if ((*(ushort *)((int)pvVar9 + 0x14e) & 1) == 0) {
          *(ushort *)((int)pvVar9 + 0x14e) = *(ushort *)((int)pvVar9 + 0x14e) | 1;
          uVar18 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar17,6,0,uVar18);
          uVar22 = idol::GetAnimDuration(0x3c);
          *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
        }
        FUN_005e8338((double)(*(float *)(puVar13 + 0x30) - (moby->pos).x),
                     (double)(*(float *)((int)puVar13 + 0x184) - (moby->pos).y));
        dVar35 = 2.0;
        if (((2.0 <= dVar32) || (*(short *)((int)pvVar9 + 0x146) != 0)) ||
           (iVar19 = mobyupdate_helpers::M340_0034aa40(lVar17), iVar19 == 0)) {
          if (bVar14) {
            fVar2 = (float)((double)*(float *)((int)pvVar9 + 0x140) * dVar35);
          }
          else {
            fVar2 = *(float *)((int)pvVar9 + 0x140);
          }
          if ((dVar32 < (double)fVar2) && (*(short *)((int)pvVar9 + 0x146) == 0)) {
            uVar18 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar17,1,0,uVar18);
            *(undefined1 *)((int)pvVar9 + 0x14c) = 0;
            moby->state = '\x03';
          }
        }
        else {
          uVar18 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar17,7,0,uVar18);
          uVar22 = idol::GetAnimDuration(0x3c);
          *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
          moby->state = '\a';
        }
      }
    }
    goto LAB_0034ccb4;
  }
  if (bVar25 < 3) {
    if (moby->animationId == '\x05') {
      if ((moby->field43_0x70 & 2U) != 0) {
        uVar18 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar17,0,0,uVar18);
        moby->state = '\x01';
      }
    }
    else {
      uVar18 = idol::GetAnimDuration(5);
      mobyutil::MB_SetAnimation(lVar17,5,0,uVar18);
      *(float *)((int)pvVar9 + 0x78) = mobyutil::g_FrameTime * -7.668;
    }
    goto LAB_0034ccb4;
  }
  if (bVar25 < 4) {
    if (!bVar14) {
      fVar2 = *(float *)((int)pvVar9 + 0x140);
    }
    else {
      fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
    }
    if (((double)fVar2 <= dVar32) ||
       (((!bVar14 && (*(int *)((int)pvVar9 + 0x138) != -1)) &&
        (iVar19 = mobyutil::PointInsideComplexPoly
                            ((Vec4 *)(puVar13 + 0x30),
                             (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                             Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 == 0)))) {
      if (!bVar14) {
        FUN_005e7e98(uVar16 - 0x220,uVar30 + 0x120);
        dVar32 = (double)FUN_005e8588(lVar28,uVar30 + 0x120);
        if (dVar32 < 1.0) {
          puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar17,0,0,*(undefined4 *)((int)puVar13 + 0x1fc));
          moby->state = '\x01';
        }
      }
    }
    else {
      if (bVar14) {
        fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
      }
      else {
        fVar2 = *(float *)((int)pvVar9 + 0x140);
      }
      dVar35 = (double)mobyupdate_helpers::M340_0034ab98((double)fVar2,lVar17,uVar16 - 0x220);
      if (((dVar32 < 2.0) && (*(short *)((int)pvVar9 + 0x146) == 0)) &&
         (iVar19 = mobyupdate_helpers::M340_0034aa40(lVar17), iVar19 != 0)) {
        uVar18 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar17,7,0,uVar18);
        uVar22 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
        moby->state = '\a';
      }
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar35,(double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
               (double)(mobyutil::g_FrameTime * 3.1415927),lVar17,&DAT_00720000,uVar30 + 0x130);
    goto LAB_0034ccb4;
  }
  pSVar12 = Splines[*(int *)((int)pvVar9 + 0x150)];
  if (!bVar14) {
    fVar2 = *(float *)((int)pvVar9 + 0x140);
  }
  else {
    fVar2 = *(float *)((int)pvVar9 + 0x140) * 2.0;
  }
  if ((dVar32 < (double)fVar2) &&
     (((bVar14 || (*(int *)((int)pvVar9 + 0x138) == -1)) ||
      (iVar19 = mobyutil::PointInsideComplexPoly
                          ((Vec4 *)(puVar13 + 0x30),
                           (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                           Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)))) {
    if ((*(ushort *)((int)pvVar9 + 0x14e) & 1) == 0) {
      *(ushort *)((int)pvVar9 + 0x14e) = *(ushort *)((int)pvVar9 + 0x14e) | 1;
      puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar17,6,0,*(undefined4 *)((int)puVar13 + 0x1fc));
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x4c,0x34b228);
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
      *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
    }
    FUN_005e8338((double)(*(float *)(puVar13 + 0x30) - (moby->pos).x),
                 (double)(*(float *)((int)puVar13 + 0x184) - (moby->pos).y));
    dVar35 = 2.0;
    if (((2.0 <= dVar32) || (*(short *)((int)pvVar9 + 0x146) != 0)) ||
       (iVar19 = mobyupdate_helpers::M340_0034aa40(lVar17), iVar19 == 0)) {
      if (bVar14) {
        fVar2 = (float)((double)*(float *)((int)pvVar9 + 0x140) * dVar35);
      }
      else {
        fVar2 = *(float *)((int)pvVar9 + 0x140);
      }
      if ((dVar32 < (double)fVar2) && (*(short *)((int)pvVar9 + 0x146) == 0)) {
        puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar13 + 0x1fc));
        *(undefined1 *)((int)pvVar9 + 0x14c) = 0;
        moby->state = '\x03';
      }
    }
    else {
      puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar17,7,0,*(undefined4 *)((int)puVar13 + 0x1fc));
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0x4c,0x34b228);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x146,uVar30);
      *(undefined2 *)((int)pvVar9 + 0x146) = uVar22;
      moby->state = '\a';
    }
  }
  dVar35 = (double)FUN_005e8588(pSVar12->points + *(int *)((int)pvVar9 + 0x154),lVar28);
  if (dVar35 < 1.0) {
LAB_0034c3a0:
    iVar19 = *(int *)((int)pvVar9 + 0x154) + 1;
    *(int *)((int)pvVar9 + 0x154) = iVar19;
    if (iVar19 == pSVar12->cnt) {
      *(undefined4 *)((int)pvVar9 + 0x154) = 0;
    }
  }
  else {
    dVar32 = (double)(moby->rotation).z;
    dVar35 = (double)FUN_005e8338((double)(pSVar12->points[*(int *)((int)pvVar9 + 0x154)].x -
                                          (moby->pos).x),
                                  (double)(pSVar12->points[*(int *)((int)pvVar9 + 0x154)].y -
                                          (moby->pos).y));
    dVar35 = (double)fastfunc::FastSubRots((float)dVar32,(float)dVar35);
    if (2.356194496154785 < dVar35) goto LAB_0034c3a0;
  }
  iVar19 = 0;
  uVar29 = uVar30;
  do {
    if (((*(short *)((int)pvVar9 + 0x146) == 0) &&
        (iVar20 = *(int *)((int)uVar29 + 0x160), iVar20 != -1)) &&
       (iVar20 = mobyutil::MB_IsPntInCuboid((Vec4 *)lVar28,(longlong)iVar20), iVar20 != 0)) {
      *(short *)((int)pvVar9 + 0x158) = (short)*(undefined4 *)((int)pvVar9 + iVar19 * 4 + 0x160);
      moby->state = '\x05';
      *(undefined2 *)((int)pvVar9 + 0x15a) = 0;
      break;
    }
    iVar19 = iVar19 + 1;
    uVar29 = uVar29 + 4;
  } while (iVar19 < 4);
  iVar19 = *(int *)((int)pvVar9 + 0x154);
  fVar2 = (moby->pos).x;
  *(float *)(puVar13 + 0x10) = pSVar12->points[iVar19].x;
  *(float *)((int)puVar13 + 0x84) = pSVar12->points[iVar19].y;
  *(float *)(puVar13 + 0x11) = pSVar12->points[iVar19].z;
  fVar7 = (moby->pos).y;
  *(float *)((int)puVar13 + 0x8c) = pSVar12->points[iVar19].w;
  uVar18 = FUN_005e8338((double)(pSVar12->points[iVar19].x - fVar2),
                        (double)(pSVar12->points[iVar19].y - fVar7));
  mobyutil::OrganicDeltAngSpeed
            (uVar18,(double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
             (double)(mobyutil::g_FrameTime * 3.1415927),lVar17,&DAT_0034b228,uVar30 + 0x130);
LAB_0034ccb4:
  dVar35 = 0.0;
  if (0 < *(int *)((int)pvVar9 + 0x13c)) {
    dVar33 = 3.1415927410125732;
    dVar32 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
    dVar32 = (double)mathfunc::cosf((float)dVar32);
    fVar2 = (moby->rotation).z;
    *(float *)(puVar13 + 0x16) = (float)(dVar32 * (double)*(float *)((int)pvVar9 + 0x13c));
    fastfunc::FastWrapRot(fVar2,(float)dVar33);
    dVar32 = (double)FUN_005e8128();
    fVar2 = *(float *)((int)pvVar9 + 0x13c);
    lVar27 = uVar16 - 0x1f0;
    *(undefined4 *)(puVar13 + 0x17) = 0;
    *(float *)((int)puVar13 + 0xb4) = (float)(dVar32 * (double)fVar2);
    FUN_005e7f54(lVar27,lVar27,lVar28);
    *(float *)((int)pvVar9 + 0x13c) =
         *(float *)((int)pvVar9 + 0x13c) + -10.0 / (animationSpeed * 15.0 * animationSpeed * 15.0);
    mobyutil::CollMovingSphere
              (0x3fd0000000000000,0x3fe23d70a0000000,0x3fe0000000000000,0x3fe0c15240000000,lVar17,
               lVar28,lVar27);
  }
  uVar1 = moby->state;
  if (uVar1 != '\t') {
    if (uVar1 == '\x04') {
      if (moby->animationId != '\x01') {
        puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar13 + 0x1fc));
      }
      dVar35 = (double)mathfunc::cosf((moby->rotation).z);
      dVar32 = 2.0;
      fVar2 = (moby->rotation).z;
      *(float *)(puVar13 + 0x18) = (float)((double)(mobyutil::g_FrameTime * 2.0) * dVar35);
      dVar35 = (double)FUN_005e8128((double)fVar2);
      dVar31 = (double)mobyutil::g_FrameTime;
      lVar27 = uVar16 - 0x1e0;
      *(undefined4 *)(puVar13 + 0x19) = 0;
      *(float *)((int)puVar13 + 0xc4) = (float)((double)(float)(dVar31 * dVar32) * dVar35);
      FUN_005e7f54(lVar27,lVar27,lVar28);
      fVar3 = (moby->pos).y;
      *(f32 *)(puVar13 + 0x1a) = (moby->pos).x;
      fVar4 = (moby->pos).z;
      *(f32 *)((int)puVar13 + 0xd4) = fVar3;
      fVar3 = (moby->pos).w;
      *(f32 *)(puVar13 + 0x1b) = fVar4;
      *(f32 *)((int)puVar13 + 0xdc) = fVar3;
      mobyutil::CollMovingSphere
                (0x3fd0000000000000,0x3fe23d70a0000000,0x3fe0000000000000,0x3fe0c15240000000,lVar17,
                 uVar16 - 0x1d0,lVar27);
      if ((*(int *)((int)pvVar9 + 0x138) == -1) ||
         (iVar19 = mobyutil::PointInsideComplexPoly
                             ((Vec4 *)(puVar13 + 0x1a),
                              (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                              Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)) {
        fVar3 = *(f32 *)((int)puVar13 + 0xd4);
        (moby->pos).x = *(f32 *)(puVar13 + 0x1a);
        fVar4 = *(f32 *)(puVar13 + 0x1b);
        (moby->pos).y = fVar3;
        fVar3 = *(f32 *)((int)puVar13 + 0xdc);
        (moby->pos).z = fVar4;
        (moby->pos).w = fVar3;
      }
    }
    else if (uVar1 == '\x03') {
      uVar18 = FUN_005e8338((double)(*(float *)(puVar13 + 0x10) - (moby->pos).x),
                            (double)(*(float *)((int)puVar13 + 0x84) - (moby->pos).y));
      uVar21 = (uint)moby->animationId;
      dVar31 = (double)FUN_005e8588(lVar28,uVar16 - 0x220);
      dVar32 = 3.0;
      if (dVar31 < (double)(mobyutil::g_FrameTime * 3.0 * 2.0)) {
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        uVar21 = 0;
        fVar5 = (moby->pos).z;
        fVar6 = (moby->pos).w;
        *(f32 *)(puVar13 + 0x1c) = fVar3;
        *(f32 *)((int)puVar13 + 0xe4) = fVar4;
        *(f32 *)(puVar13 + 0x1d) = fVar5;
        *(f32 *)((int)puVar13 + 0xec) = fVar6;
      }
      else {
        dVar33 = (double)fastfunc::FastDiffRots(uVar18,(double)(moby->rotation).z);
        dVar34 = (double)fastfunc::FastWrapRot((float)dVar33,0.3926991);
        dVar31 = dVar34;
        if (dVar34 - dVar35 < 0.0) {
          dVar31 = (double)(float)(dVar34 + 6.2831854820251465);
        }
        dVar35 = (double)fastfunc::FastIntToDouble
                                   (dVar34,(double)(float)(dVar34 + 6.2831854820251465),
                                    *(undefined1 *)((int)pvVar9 + 0x14c));
        dVar34 = 1.5707963705062866;
        dVar35 = (double)fastfunc::FastAddRots((float)(dVar35 * 1.5707963705062866));
        dVar35 = (double)fastfunc::FastAddRots((float)dVar35);
        dVar35 = (double)fastfunc::FastSubRots((float)dVar35,(float)dVar33);
        bVar25 = *(byte *)((int)pvVar9 + 0x14c);
        if (1.7453292608261108 < dVar35) {
          bVar25 = fastfunc::FastDoubleToInt
                             ((double)((float)(dVar31 * 1.9989999532699585) * 0.31830987));
          *(byte *)((int)pvVar9 + 0x14c) = bVar25;
          *(undefined4 *)((int)puVar13 + 500) = 3;
          *(undefined4 *)(puVar13 + 0x3e) = 2;
          *(undefined4 *)((int)puVar13 + 0x1ec) = 4;
          *(undefined4 *)(puVar13 + 0x3d) = 1;
          uVar21 = *(uint *)((int)puVar13 + (uint)bVar25 * 4 + 0x1e8);
        }
        dVar35 = (double)fastfunc::FastIntToDouble(bVar25);
        dVar35 = (double)fastfunc::FastAddRots((float)(dVar35 * dVar34));
        dVar31 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar35);
        dVar31 = (double)mathfunc::cosf((float)dVar31);
        fVar2 = (moby->rotation).z;
        *(float *)(puVar13 + 0x1c) =
             (float)((double)(float)((double)mobyutil::g_FrameTime * dVar32) * dVar31);
        fastfunc::FastWrapRot(fVar2,(float)dVar35);
        dVar35 = (double)FUN_005e8128();
        dVar31 = (double)mobyutil::g_FrameTime;
        *(undefined4 *)(puVar13 + 0x1d) = 0;
        *(float *)((int)puVar13 + 0xe4) = (float)((double)(float)(dVar31 * dVar32) * dVar35);
        FUN_005e7f54(uVar16 - 0x1c0,uVar16 - 0x1c0,lVar28);
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar5 = (moby->pos).z;
        fVar6 = (moby->pos).w;
      }
      *(f32 *)(puVar13 + 0x1e) = fVar3;
      *(f32 *)((int)puVar13 + 0xf4) = fVar4;
      *(f32 *)(puVar13 + 0x1f) = fVar5;
      *(f32 *)((int)puVar13 + 0xfc) = fVar6;
      iVar19 = mobyutil::CollMovingSphere
                         (0x3fd0000000000000,0x3fe23d70a0000000,0x3fe0000000000000,
                          0x3fe0c15240000000,lVar17,uVar16 - 0x1b0,uVar16 - 0x1c0);
      if ((*(int *)((int)pvVar9 + 0x138) == -1) ||
         (iVar20 = mobyutil::PointInsideComplexPoly
                             ((Vec4 *)(puVar13 + 0x1e),
                              (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                              Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar20 != 0)) {
        fVar3 = *(f32 *)((int)puVar13 + 0xf4);
        (moby->pos).x = *(f32 *)(puVar13 + 0x1e);
        fVar4 = *(f32 *)(puVar13 + 0x1f);
        (moby->pos).y = fVar3;
        fVar3 = *(f32 *)((int)puVar13 + 0xfc);
        (moby->pos).z = fVar4;
        (moby->pos).w = fVar3;
        if (iVar19 == 0) {
          uVar21 = 0;
        }
      }
      else {
        uVar21 = 0;
      }
      iVar19 = fastfunc::FastDecTimerS16(uVar30 + 0x144);
      if ((iVar19 != 0) && (uVar21 != moby->animationId)) {
        puVar13[0x3f] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar17,uVar21,0,*(undefined4 *)((int)puVar13 + 0x1fc));
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar38 = loadVectorLeftIndexed(0x8c,0x34b228);
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar36 = vectorSplatHalfWord(auVar36,1);
        uVar22 = storeVectorElementHalfWordIndexed(auVar36,0x144,uVar30);
        *(undefined2 *)((int)pvVar9 + 0x144) = uVar22;
      }
    }
    else if ((uVar1 == '\x05') || (((uVar1 == '\a' && (moby->updateId == '\a')) && (15.0 < dVar31)))
            ) {
      dVar35 = (double)FUN_005e8588(lVar28,uVar16 - 0x220);
      dVar31 = 2.0;
      if ((double)(mobyutil::g_FrameTime * 2.0) < dVar35) {
        dVar35 = (double)FUN_005e8338((double)(*(float *)(puVar13 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)((int)puVar13 + 0x84) - (moby->pos).y));
        dVar35 = (double)mathfunc::cosf((float)dVar35);
        fVar2 = (moby->pos).x;
        fVar7 = (moby->pos).y;
        *(float *)(puVar13 + 0x20) =
             (float)((double)(float)((double)mobyutil::g_FrameTime * dVar31) * dVar35);
        FUN_005e8338((double)(*(float *)(puVar13 + 0x10) - fVar2),
                     (double)(*(float *)((int)puVar13 + 0x84) - fVar7));
        dVar35 = (double)FUN_005e8128();
        dVar32 = (double)mobyutil::g_FrameTime;
        *(undefined4 *)(puVar13 + 0x21) = 0;
        lVar27 = uVar16 - 0x1a0;
        *(float *)((int)puVar13 + 0x104) = (float)((double)(float)(dVar32 * dVar31) * dVar35);
        FUN_005e7f54(lVar27,lVar27,lVar28);
        fVar3 = (moby->pos).y;
        *(f32 *)(puVar13 + 0x22) = (moby->pos).x;
        fVar4 = (moby->pos).z;
        *(f32 *)((int)puVar13 + 0x114) = fVar3;
        fVar3 = (moby->pos).w;
        *(f32 *)(puVar13 + 0x23) = fVar4;
        *(f32 *)((int)puVar13 + 0x11c) = fVar3;
        mobyutil::CollMovingSphere
                  (0x3fd0000000000000,0x3ff4000000000000,0x3fe0000000000000,0x3fe0c15240000000,
                   lVar17,uVar16 - 400,lVar27);
        if ((*(int *)((int)pvVar9 + 0x138) == -1) ||
           (iVar19 = mobyutil::PointInsideComplexPoly
                               ((Vec4 *)(puVar13 + 0x22),
                                (Vec4 *)Splines[*(int *)((int)pvVar9 + 0x138)]->points,
                                Splines[*(int *)((int)pvVar9 + 0x138)]->cnt), iVar19 != 0)) {
          fVar3 = *(f32 *)((int)puVar13 + 0x114);
          (moby->pos).x = *(f32 *)(puVar13 + 0x22);
          fVar4 = *(f32 *)(puVar13 + 0x23);
          (moby->pos).y = fVar3;
          fVar3 = *(f32 *)((int)puVar13 + 0x11c);
          (moby->pos).z = fVar4;
          (moby->pos).w = fVar3;
        }
      }
    }
    else if ((uVar1 != '\x06') && (uVar1 != '\b')) {
      fVar3 = (moby->pos).y;
      *(f32 *)(puVar13 + 0x24) = (moby->pos).x;
      fVar4 = (moby->pos).z;
      *(f32 *)((int)puVar13 + 0x124) = fVar3;
      fVar3 = (moby->pos).w;
      *(f32 *)(puVar13 + 0x25) = fVar4;
      *(f32 *)((int)puVar13 + 300) = fVar3;
      mobyutil::CollMovingSphere
                (0x3fd0000000000000,0x3fe23d70a0000000,0x3fe0000000000000,0x3fe0c15240000000,lVar17,
                 lVar28,uVar16 - 0x180);
    }
    fVar2 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar9 + 0x78);
    *(float *)((int)pvVar9 + 0x78) = fVar2;
    dVar31 = 2.0;
    (moby->pos).z = (moby->pos).z - (fVar2 - 2.0);
    dVar32 = 0.5;
    dVar35 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar28,0);
    fVar2 = (float)((double)(moby->pos).z - dVar31);
    dVar31 = (double)fVar2;
    (moby->pos).z = fVar2;
    if (dVar31 < dVar35) {
      (moby->pos).z = (float)dVar35;
      *(undefined4 *)((int)pvVar9 + 0x78) = 0;
      dVar31 = (double)(moby->pos).z;
    }
    if ((double)(*(float *)((int)pvVar9 + 0x128) - 5.0) <= dVar31) {
      dVar35 = (double)FUN_005e8588(lVar28,0x951500);
      if (dVar35 < 20.0) {
        *(undefined4 *)(puVar13 + 0x26) = 0;
        *(undefined4 *)((int)puVar13 + 0x134) = 0;
        *(undefined4 *)(puVar13 + 0x27) = 0;
        *(undefined4 *)((int)puVar13 + 0x13c) = 0;
        dVar34 = 1.0;
        dVar33 = -1.0;
        dVar35 = (double)mobyutil::MB_randRangeFloat(1.0,-1.0);
        dVar31 = 0.10000000149011612;
        *(float *)(puVar13 + 0x26) = (float)((double)(mobyutil::g_FrameTime * 0.1) * dVar35);
        dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar33);
        *(float *)((int)puVar13 + 0x134) =
             (float)((double)(float)((double)mobyutil::g_FrameTime * dVar31) * dVar35);
        dVar35 = (double)mobyutil::MB_randRangeFloat(0.8,1.2);
        *(float *)(puVar13 + 0x27) = (float)((double)(mobyutil::g_FrameTime * -2.5) * dVar35);
        uVar21 = mobyutil::MB_randInt(100);
        mobyfunc::GetBonePosition(lVar17,0,uVar16 - 0x160);
        FUN_005e7d64(uVar16 - 0x170,uVar16 - 0x170,lVar17 + 0xc0);
        uVar18 = mobyutil::MB_randRangeFloat(75000.0,100000.0);
        if ((uVar21 & 1) == 0) {
          iVar19 = mobyutil::MB_randRange(0x14,0x1e);
        }
        else {
          iVar19 = mobyutil::MB_randRange(10,0xf);
        }
        puVar13[0x3f] = (longlong)iVar19;
        puVar13[0x3f] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar13[0x3f] + dVar32));
        partupd::SpawnPart_22
                  (uVar18,uVar16 - 0x160,uVar16 - 0x170,
                   ((LZCOUNT(-(uVar21 & 1)) << 0x3a) >> 0x3f & 0x707000U) + 0x400f0f7f,0x272727);
      }
      mobyutil::MB_ColorDyingMoby(lVar17,uVar30 + 0xb0);
    }
    else {
      mobyupdate_helpers::M340_0034a8d8(lVar17);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0034d71c  ns=mobyupdate_helpers  size=0x58
// sig: undefined M341_0034d71c(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M341_0034d71c(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}



//==== 0034d774  ns=mobyupdate_helpers  size=0x58
// sig: undefined M341_0034d774(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M341_0034d774(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}



//==== 0034d7cc  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M341_0034d7cc(void)
// callers(0): 
// callees(3): 0015d12c sound::PlayMobySound; 00486828 FUN_00486828; 0048acb8 mobyupdate_helpers::M849_0048acb8

undefined8
mobyupdate_helpers::M341_0034d7cc
          (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = FUN_00486828();
  uVar2 = M849_0048acb8(param_1,param_2,param_3,param_4);
  sVar1 = *(short *)(iVar3 + 0x68);
  if ((int)uVar2 == 0) {
    if (param_2->state == '\t') {
      param_2->state = '\x01';
    }
  }
  else {
    param_2->state = '\t';
  }
  if (sVar1 == 6) {
    sound::PlayMobySound(1,0,param_2);
  }
  return uVar2;
}



//==== 0034d894  ns=mobyupdate_helpers  size=0x38
// sig: undefined M341_0034d894(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M341_0034d894(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}



//==== 0034d8cc  ns=mobyupdate_helpers  size=0x40
// sig: undefined M341_0034d8cc(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M341_0034d8cc(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x180;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 0034d90c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M341_0034d90c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M341_0034d90c(void)

{
  DAT_00840064 = 0x10000;
  return;
}



//==== 0034d950  ns=mobyupdate_helpers  size=0x1f4
// sig: undefined M341_0034d950(void)
// callers(1): 0034db44 mobyupdate_unsorted::UpdateMoby_341
// callees(3): 00109af0 mobyutil::Delt; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

double mobyupdate_helpers::M341_0034d950(int param_1)

{
  int iVar1;
  undefined1 uVar4;
  undefined8 uVar2;
  undefined4 uVar3;
  double dVar5;
  double dVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  float fVar9;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (g_standingOnMoby == param_1) {
    fVar9 = mobyutil::Delt(1.0,mobyutil::g_FrameTime * 2.0,(float *)(iVar1 + 0x1c));
    uVar4 = 0;
    if ((g_currentWeaponMoby != (MobyInstance *)0x0) && (g_CurrentWeapon == 0x16)) {
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0xbc) = uVar4;
  }
  else {
    fVar9 = mobyutil::Delt(0.0,mobyutil::g_FrameTime,(float *)(iVar1 + 0x1c));
  }
  dVar7 = (double)fVar9;
  uVar3 = DAT_00840088;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    dVar5 = (double)fastfunc::FastWrapRot
                              (*(float *)(iVar1 + 0x18),mobyutil::g_FrameTime * 6.2831855);
    *(float *)(iVar1 + 0x18) = (float)dVar5;
    dVar7 = (double)(float)(3.141592502593994 - dVar5);
    if (dVar5 - (double)(float)(3.141592502593994 - dVar5) < 0.0) {
      dVar7 = dVar5;
    }
    dVar6 = (double)(float)(-3.141592502593994 - dVar5);
    if ((double)(float)(-3.141592502593994 - dVar5) - dVar7 < 0.0) {
      dVar6 = dVar7;
    }
    dVar7 = (double)(float)(dVar6 * dVar6);
    dVar5 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar6));
    dVar8 = (double)(float)(dVar7 * dVar5);
    fVar9 = (float)(dVar7 * dVar8) * 2.601887e-06 +
            (float)(dVar8 * -0.0001980741071747616 +
                   (double)(float)(dVar5 * 0.008333025500178337 +
                                  (double)(float)((double)(float)(dVar7 * dVar6) *
                                                  -0.16666656732559204 + dVar6)));
    if (*(char *)(param_1 + 0xbc) == '\x01') {
      uVar2 = fastfunc::FastLerpColor((double)((fVar9 + 1.0) * 0.5),DAT_0084008c,DAT_00840090);
    }
    else {
      uVar2 = fastfunc::FastLerpColor((double)((fVar9 + 1.0) * 0.5),DAT_00840094,DAT_00840098);
    }
    uVar3 = fastfunc::FastLerpColor((double)*(float *)(iVar1 + 0x1c),DAT_00840088,uVar2);
    dVar7 = extraout_f1;
  }
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  return dVar7;
}



//==== 0034db44  ns=mobyupdate_unsorted  size=0x1a4
// sig: undefined UpdateMoby_341(MobyInstance * moby)
// callers(0): 
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 0034d950 mobyupdate_helpers::M341_0034d950

/* Moby 341 */

void mobyupdate_unsorted::UpdateMoby_341(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  bVar1 = moby->animationId;
  if ((g_standingOnMoby == moby) && (hero::g_heroStateType == 0x13)) {
    bVar3 = true;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
                    /* WARNING: Load size is inaccurate */
      iVar2 = *moby->pVar;
      if ((-1 < iVar2) && (!bVar3 && (MobyInstance[iVar2].setByGroup & 1U) != 0)) {
        mobyutil::MB_SetAnimation(moby,1,0,0);
      }
    }
    else if (((moby->field43_0x70 & 2U) != 0) && (bVar1 != 2)) {
      mobyutil::MB_SetAnimation(moby,2,0,0);
    }
  }
  else if (bVar1 < 3) {
                    /* WARNING: Load size is inaccurate */
    iVar2 = *moby->pVar;
    if (((-1 < iVar2) && (!bVar3 && (MobyInstance[iVar2].setByGroup & 2U) != 0)) && (bVar1 != 3)) {
      mobyutil::MB_SetAnimation(moby,3,0,0);
    }
  }
  else if (((bVar1 < 4) && ((moby->field43_0x70 & 2U) != 0)) && (bVar1 != 0)) {
    mobyutil::MB_SetAnimation(moby,0,0,0);
  }
  mobyupdate_helpers::M341_0034d950(moby);
  return;
}



//==== 0034dce8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M342_0034dce8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M342_0034dce8(void)

{
  DAT_008400e8 = 0x10000;
  return;
}



//==== 0034dd10  ns=mobyupdate_helpers  size=0x4fc
// sig: undefined M342_0034dd10(void)
// callers(1): 0034ec58 mobyupdate_unsorted::UpdateMoby_342
// callees(1): 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M342_0034dd10(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined4 uVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x120;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar14;
  puVar11[0x26] = in_LR;
  puVar11[0x1e] = in_f26;
  puVar11[0x1f] = in_f27;
  puVar11[0x20] = in_f28;
  puVar11[0x21] = in_f29;
  puVar11[0x22] = in_f30;
  puVar11[0x23] = in_f31;
  puVar11[0x1d] = unaff_r31;
  puVar11[0x1b] = unaff_r29;
  uVar20 = 0;
  uVar15 = 0;
  puVar11[0x1c] = unaff_r30;
  dVar30 = 0.0;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar11[0x1a] = unaff_r28;
  iVar9 = *(int *)(iVar8 + 0x130);
  *(undefined4 *)(iVar8 + 0x130) = 0;
  dVar29 = dVar30;
  dVar31 = dVar30;
  do {
    if ((int)uVar15 != iVar9) {
      fVar4 = *(float *)(param_1 + 0x10);
      iVar12 = *(int *)(iVar8 + 0x140) + (int)((uVar15 & 0xffffffff) << 4);
      fVar5 = *(float *)(param_1 + 0x14);
      dVar28 = (double)*(float *)(iVar12 + 0x10);
      dVar27 = (double)*(float *)(iVar12 + 0x14);
      fVar2 = (float)(dVar28 - (double)fVar4);
      fVar3 = (float)(dVar27 - (double)fVar5);
      dVar26 = (double)*(float *)(iVar12 + 0x18);
      dVar23 = ABS((double)fVar2);
      dVar24 = ABS((double)fVar3);
      *(float *)((int)puVar11 + 0x7c) = fVar2;
      *(float *)(puVar11 + 0x10) = fVar3;
      *(float *)((int)puVar11 + 0x84) = (float)(dVar23 - dVar24);
      uVar15 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)((int)puVar11 + 0x7c));
      if ((double)*(float *)((int)puVar11 + 0x84) - dVar30 < 0.0) {
        dVar22 = dVar24;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar24 = ABS((double)*(float *)(puVar11 + 0x10));
      if ((double)*(float *)((int)puVar11 + 0x84) - dVar30 < 0.0) {
        dVar24 = dVar23;
      }
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar23 = dVar30;
      if (dVar30 < dVar22) {
        lVar17 = uVar14 - 0x110;
        lVar18 = uVar14 - 0x68;
        lVar16 = uVar14 - 0x78;
        lVar21 = 2;
        fVar6 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0xb4) = fVar6;
        *(float *)((int)puVar11 + 0xac) = fVar6;
        *(float *)(puVar11 + 0x16) = fVar6;
        *(float *)(puVar11 + 0x15) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar7;
        *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar6;
        *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0x98) * fVar6 * fVar6;
          iVar12 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x78;
        pfVar19 = (float *)&DAT_007358e0;
        lVar17 = lVar1;
        lVar16 = lVar18;
        do {
          fVar6 = *pfVar19;
          fVar7 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0xa8) * fVar6;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar17 = lVar1;
        dVar22 = dVar30;
        do {
          iVar12 = (int)lVar17;
          iVar13 = (int)lVar18;
          lVar17 = lVar17 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0xa8)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar23 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
      }
      fVar2 = (float)((double)*(float *)(*(int *)(iVar8 + 0x1d8) + 0x10) - (double)fVar4);
      fVar3 = (float)((double)*(float *)(*(int *)(iVar8 + 0x1d8) + 0x14) - (double)fVar5);
      dVar25 = ABS((double)fVar2);
      dVar24 = ABS((double)fVar3);
      *(float *)(puVar11 + 0xe) = fVar2;
      *(float *)((int)puVar11 + 0x74) = fVar3;
      *(float *)(puVar11 + 0xf) = (float)(dVar25 - dVar24);
      uVar15 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)(puVar11 + 0xe));
      if ((double)*(float *)(puVar11 + 0xf) - dVar30 < 0.0) {
        dVar22 = dVar24;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar24 = ABS((double)*(float *)((int)puVar11 + 0x74));
      if ((double)*(float *)(puVar11 + 0xf) - dVar30 < 0.0) {
        dVar24 = dVar25;
      }
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar25 = dVar30;
      if (dVar30 < dVar22) {
        lVar17 = uVar14 - 0x110;
        lVar18 = uVar14 - 0x88;
        lVar16 = uVar14 - 0x98;
        lVar21 = 2;
        fVar4 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x94) = fVar4;
        *(float *)((int)puVar11 + 0x8c) = fVar4;
        *(float *)(puVar11 + 0x12) = fVar4;
        *(float *)(puVar11 + 0x11) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 0x8c) = *(float *)((int)puVar11 + 0x8c) * fVar5;
        *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) * fVar4;
        *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x78) * fVar4 * fVar4;
          iVar12 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x98;
        pfVar19 = (float *)&DAT_007358e0;
        lVar17 = lVar1;
        lVar16 = lVar18;
        do {
          fVar4 = *pfVar19;
          fVar5 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x88) * fVar4;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar17 = lVar1;
        dVar22 = dVar30;
        do {
          iVar12 = (int)lVar17;
          iVar13 = (int)lVar18;
          lVar17 = lVar17 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0x88)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar22 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar25);
      iVar12 = *(int *)(iVar8 + 0x1d8);
      fVar2 = (float)((double)*(float *)(iVar12 + 0x14) - dVar27);
      fVar3 = (float)((double)*(float *)(iVar12 + 0x10) - dVar28);
      fVar4 = (float)((double)*(float *)(iVar12 + 0x18) - dVar26);
      dVar23 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      if (1.5707963705062866 <= dVar22) {
        if (((16.0 <= dVar23) && ((dVar23 < dVar31 || (dVar31 < 16.0)))) ||
           ((16.0 > dVar23 && (dVar31 < dVar23)))) {
          uVar20 = *(undefined4 *)(iVar8 + 0x130);
          dVar29 = dVar22;
          dVar31 = dVar23;
        }
      }
      else if (dVar29 < dVar22) {
        uVar20 = *(undefined4 *)(iVar8 + 0x130);
        dVar29 = dVar22;
        dVar31 = dVar23;
      }
    }
    uVar10 = **(uint **)(iVar8 + 0x140);
    lVar17 = (ulonglong)*(uint *)(iVar8 + 0x130) + (ulonglong)uVar10 +
             (longlong)*(char *)(iVar8 + 0x134);
    uVar15 = lVar17 - (longlong)((int)lVar17 / (int)uVar10) * (longlong)(int)uVar10;
    *(int *)(iVar8 + 0x130) = (int)uVar15;
  } while ((int)uVar15 != 0);
  *(undefined4 *)(iVar8 + 0x130) = uVar20;
  return;
}



//==== 0034e230  ns=mobyupdate_helpers  size=0x9a0
// sig: undefined M342_0034e230(void)
// callers(1): 0034ec58 mobyupdate_unsorted::UpdateMoby_342
// callees(16): 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c1e8 mobyutil::MB_MtxToEuler; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform

void mobyupdate_helpers::M342_0034e230(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x240;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar14;
  puVar11[0x4a] = in_LR;
  puVar11[0x46] = in_f30;
  puVar11[0x47] = in_f31;
  puVar11[0x45] = unaff_r31;
  puVar11[0x44] = unaff_r30;
  pfVar5 = (float *)param_1->pVar;
  uVar23 = ZEXT48(pfVar5);
  dVar28 = 0.0;
  puVar11[0x43] = unaff_r29;
  puVar11[0x42] = unaff_r28;
  puVar11[0x41] = unaff_r27;
  puVar11[0x40] = unaff_r26;
  *(undefined4 *)((int)puVar11 + 0x1a4) = 0;
  iVar15 = mobyutil::MB_damage(param_1,0x330000,0);
  mobyutil::MB_HandleDamage(param_1,iVar15,uVar23,0,puVar11 + 0x34,(int)puVar11 + 0x1a4,0,4);
  if ((*(int *)(puVar11 + 0x34) != 1) && (param_1->state != '\x10' && param_1->state != 'c')) {
    uVar6 = *(uint *)((int)puVar11 + 0x1a4);
    uVar8 = (int)uVar6 >> 0x1f;
    fVar7 = *pfVar5 - *(float *)((int)puVar11 + 0x1a4);
    *pfVar5 = fVar7;
    if (*(char *)(pfVar5 + 0x75) == '\0') {
      if ((double)fVar7 <= dVar28) {
        pfVar5[0x18] = 0.008;
        pfVar5[0x19] = 0.0005;
        fVar7 = mobyutil::g_FrameTime;
        pfVar5[0x1a] = DAT_00840118 * mobyutil::g_FrameTime;
        fVar2 = DAT_0084011c;
        *(undefined1 *)((int)pfVar5 + 0x8d) = 0;
        pfVar5[0x1d] = 1.26117e-44;
        pfVar5[0x1b] = fVar2 * fVar7;
        fVar7 = (param_1->pos).x - g_heroPosition.x;
        fVar2 = (param_1->pos).y - g_heroPosition.y;
        dVar25 = ABS((double)fVar7);
        dVar27 = ABS((double)fVar2);
        *(float *)(puVar11 + 0x35) = fVar7;
        *(float *)((int)puVar11 + 0x1ac) = fVar2;
        *(float *)(puVar11 + 0x36) = (float)(dVar25 - dVar27);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x36) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1d) & 4;
        uVar18 = uVar21 << 2 | 0x735900;
        dVar26 = ABS((double)*(float *)(puVar11 + 0x35));
        if ((double)*(float *)(puVar11 + 0x36) - dVar28 < 0.0) {
          dVar26 = dVar27;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar11 + 0x1ac));
        if ((double)*(float *)(puVar11 + 0x36) - dVar28 < 0.0) {
          dVar27 = dVar25;
        }
        fVar2 = *(float *)((int)uVar18 + 4);
        if (dVar28 < dVar26) {
          lVar16 = uVar14 - 0x230;
          lVar19 = uVar14 - 0x80;
          lVar22 = uVar14 - 0x70;
          lVar24 = 2;
          fVar3 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
          fVar12 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0x1cc) = fVar3;
          *(float *)((int)puVar11 + 0x1c4) = fVar3;
          *(float *)(puVar11 + 0x39) = fVar3;
          *(float *)(puVar11 + 0x38) = fVar3;
          fVar3 = fVar12 * fVar12;
          *(float *)((int)puVar11 + 0x1c4) = *(float *)((int)puVar11 + 0x1c4) * fVar12;
          *(float *)(puVar11 + 0x39) = *(float *)(puVar11 + 0x39) * fVar3;
          *(float *)((int)puVar11 + 0x1cc) = *(float *)((int)puVar11 + 0x1cc) * fVar3 * fVar12;
          do {
            *(float *)((int)lVar16 + 0x1c0) = *(float *)((int)lVar16 + 0x1b0) * fVar3 * fVar3;
            iVar15 = (int)lVar19;
            lVar16 = lVar16 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar22 = uVar14 - 0x80;
          uVar18 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar19 = lVar22;
          do {
            pfVar20 = (float *)uVar18;
            fVar3 = pfVar20[1];
            uVar18 = uVar18 + 8;
            *(float *)((int)lVar16 + 0x1c0) = *(float *)((int)lVar16 + 0x1c0) * *pfVar20;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar16 = 2;
          do {
            iVar15 = (int)lVar17;
            iVar13 = (int)lVar22;
            lVar17 = lVar17 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar15 + 0x1c0)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
        }
        mobyutil::MB_StartKick(dVar28,param_1,uVar23 + 0x50,uVar18,0x10,1,0);
        fVar7 = pfVar5[0x73];
        pfVar5[0x28] = 8.0;
        pfVar5[0x29] = 15.0;
        if (fVar7 != 0.0) {
          *(undefined1 *)((int)fVar7 + 0x20) = 1;
          uVar6 = *(uint *)((int)fVar7 + 0x78);
          *(ushort *)((int)pfVar5[0x73] + 0x34) = *(ushort *)((int)pfVar5[0x73] + 0x34) & 0xfeff;
          fastfunc::FastMtxCopyNoTranslate(uVar14 - 0x1c0,(ulonglong)(uint)pfVar5[0x73] + 0xc0);
          mobyutil::MB_MtxToEuler((int)(uVar14 - 0x1c0),(MobyInstance *)((int)pfVar5[0x73] + 0x40));
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = loadVectorLeftIndexed(0x10,0x34e20c);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = vectorMultiplyAddFloatingPoint
                              (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                               ,auVar30);
          auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0,
                              (ulonglong)uVar6);
          *(undefined4 *)(uVar6 & 0xfffffffc) = uVar10;
          *(undefined4 *)(uVar6 + 4) = 1;
          *(undefined4 *)(uVar6 + 0x3c) = 0;
          *(undefined4 *)(uVar6 + 0x34) = 0;
          *(undefined4 *)(uVar6 + 0x30) = 0;
          fVar7 = mobyutil::g_FrameTime;
          *(undefined4 *)(uVar6 + 0x2c) = 0;
          *(undefined4 *)(uVar6 + 0x28) = 0;
          *(undefined4 *)(uVar6 + 0x24) = 0;
          *(undefined4 *)(uVar6 + 0x20) = 0;
          *(float *)(uVar6 + 0x38) = fVar7 * 2.0;
          dVar25 = -2.094395160675049;
          dVar26 = 2.094395160675049;
          dVar28 = (double)mobyutil::MB_randRangeFloat(fVar7 * -2.0943952,fVar7 * 2.0943952);
          *(float *)(uVar6 + 0x20) = (float)dVar28;
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)mobyutil::g_FrameTime * dVar25),
                                      (float)((double)mobyutil::g_FrameTime * dVar26));
          *(float *)(uVar6 + 0x24) = (float)dVar28;
          dVar28 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)mobyutil::g_FrameTime * dVar25),
                                      (float)((double)mobyutil::g_FrameTime * dVar26));
          *(float *)(uVar6 + 0x28) = (float)dVar28;
          *(MobyInstance **)(uVar6 + 8) = param_1;
          *(undefined4 *)(uVar6 + 0xc) = 0x100;
        }
        if ((MobyInstance *)pfVar5[0x74] != (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby((MobyInstance *)pfVar5[0x74]);
          pfVar5[0x74] = 0.0;
        }
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)((int)pfVar5 + 0x47) = 0xfa;
        param_1->state = 'c';
        if (param_1->animationId != '\x10') {
          mobyutil::MB_SetAnimation(param_1,0x10,0,6);
        }
      }
      else if ((int)((uVar8 >> 1 ^ uVar6) - uVar8) < 0x3f800000) {
        *(undefined1 *)((int)pfVar5 + 0x47) = 100;
      }
      else {
        *(undefined1 *)((int)pfVar5 + 0x47) = 0x78;
        sVar4 = *(short *)(*(int *)(iVar15 + 0x20) + 0xa6);
        if ((sVar4 == 0xb0) || (sVar4 == 0xb1)) {
          auVar29 = loadVectorLeftIndexed(4,0x34e20c);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        }
        else {
          auVar29 = loadVectorLeftIndexed(8,0x34e20c);
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        }
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar29,
                             auVar31);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = vectorSplatHalfWord(auVar29,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar29,6,uVar23);
        *(undefined2 *)((int)pfVar5 + 6) = uVar9;
        uVar1 = param_1->state;
        if ((uVar1 != '\x01' && uVar1 != '\x02') && (uVar1 != '\t')) {
          fVar7 = DAT_00840140 * DAT_0071f418;
          pfVar5[0x19] = 0.0005;
          pfVar5[0x18] = fVar7;
          fVar7 = mobyutil::g_FrameTime;
          pfVar5[0x1a] = DAT_00840120 * mobyutil::g_FrameTime;
          fVar2 = DAT_00840124;
          *(undefined1 *)((int)pfVar5 + 0x8d) = 0;
          pfVar5[0x1d] = 1.26117e-44;
          pfVar5[0x1b] = fVar2 * fVar7;
          fVar7 = (param_1->pos).x - g_heroPosition.x;
          fVar2 = (param_1->pos).y - g_heroPosition.y;
          dVar25 = ABS((double)fVar7);
          dVar27 = ABS((double)fVar2);
          *(float *)((int)puVar11 + 0x1b4) = fVar7;
          *(float *)(puVar11 + 0x37) = fVar2;
          *(float *)((int)puVar11 + 0x1bc) = (float)(dVar25 - dVar27);
          uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 0x1b4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x1bc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar11 + 0x37) >> 0x1d) & 4;
          uVar18 = uVar21 << 2 | 0x735900;
          dVar26 = ABS((double)*(float *)((int)puVar11 + 0x1b4));
          if ((double)*(float *)((int)puVar11 + 0x1bc) - dVar28 < 0.0) {
            dVar26 = dVar27;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
          dVar27 = ABS((double)*(float *)(puVar11 + 0x37));
          if ((double)*(float *)((int)puVar11 + 0x1bc) - dVar28 < 0.0) {
            dVar27 = dVar25;
          }
          fVar2 = *(float *)((int)uVar18 + 4);
          if (dVar28 < dVar26) {
            lVar16 = uVar14 - 0x230;
            lVar19 = uVar14 - 0x60;
            lVar22 = uVar14 - 0x50;
            lVar24 = 2;
            fVar3 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
            fVar12 = fVar3 * fVar3;
            *(float *)((int)puVar11 + 0x1ec) = fVar3;
            *(float *)((int)puVar11 + 0x1e4) = fVar3;
            *(float *)(puVar11 + 0x3d) = fVar3;
            *(float *)(puVar11 + 0x3c) = fVar3;
            fVar3 = fVar12 * fVar12;
            *(float *)((int)puVar11 + 0x1e4) = *(float *)((int)puVar11 + 0x1e4) * fVar12;
            *(float *)(puVar11 + 0x3d) = *(float *)(puVar11 + 0x3d) * fVar3;
            *(float *)((int)puVar11 + 0x1ec) = *(float *)((int)puVar11 + 0x1ec) * fVar3 * fVar12;
            do {
              *(float *)((int)lVar16 + 0x1e0) = *(float *)((int)lVar16 + 0x1d0) * fVar3 * fVar3;
              iVar15 = (int)lVar19;
              lVar16 = lVar16 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar14 - 0x60;
            uVar18 = ZEXT48(&DAT_007358e0);
            lVar16 = lVar17;
            lVar19 = lVar22;
            do {
              pfVar20 = (float *)uVar18;
              fVar3 = pfVar20[1];
              uVar18 = uVar18 + 8;
              *(float *)((int)lVar16 + 0x1e0) = *(float *)((int)lVar16 + 0x1e0) * *pfVar20;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar16 = 2;
            do {
              iVar15 = (int)lVar17;
              iVar13 = (int)lVar22;
              lVar17 = lVar17 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar15 + 0x1e0)) +
                                *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                               *(float *)(iVar13 + 0xc));
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
          }
          mobyutil::MB_StartKick(dVar28,param_1,uVar23 + 0x50,uVar18,8,1,0);
          pfVar5[0x28] = 5.0;
          pfVar5[0x29] = 10.0;
          param_1->state = '\r';
        }
      }
    }
    else {
      param_1->state = '\x10';
      if (param_1->animationId != '\x0e') {
        mobyutil::MB_SetAnimation(param_1,0xe,0,6);
      }
      mobyutil::MB_SetAnimation(pfVar5[0x74],2,0,0);
      pfVar5[0xb] = 0.0;
      pfVar5[10] = 0.0;
      pfVar5[9] = 0.0;
      pfVar5[8] = 0.0;
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar23 + 0x40);
  }
  param_1->damage = -1;
  fVar7 = pfVar5[0x76];
  if (fVar7 == 0.0) {
    mobyutil::MB_getTarget(0x402c000000000000,param_1,&DAT_0034e20c,uVar14 - 0xf0);
    pfVar5[0x76] = *(float *)(puVar11 + 0x32);
  }
  else if ((0x7f < *(byte *)((int)fVar7 + 0x20)) ||
          ((sVar4 = *(short *)((int)fVar7 + 0xa6), sVar4 != 0xcb && sVar4 != 0x10e && (sVar4 != 0)))
          ) {
    mobyutil::MB_getTarget(0x402c000000000000,param_1,&DAT_0034e20c,uVar14 - 0x140);
    pfVar5[0x76] = *(float *)(puVar11 + 0x28);
    if ((param_1->state == '\a') || (param_1->state == '\b')) {
      param_1->state = '\x12';
    }
  }
  if ((pfVar5[0x73] != 0.0) && (param_1->state != 'c')) {
    mobyfunc::GetBonePosition(param_1,4,uVar14 - 0x1d0);
    mobyfunc::GetBoneTransformations(param_1,4,uVar14 - 0x180);
    fastfunc::FastApplyTransform((Vec4 *)((int)pfVar5[0x73] + 0xc0),(Vec4 *)(uVar14 - 0x180));
    fVar7 = pfVar5[0x73];
    *(undefined4 *)((int)fVar7 + 0x10) = *(undefined4 *)(puVar11 + 0xe);
    *(undefined4 *)((int)fVar7 + 0x14) = *(undefined4 *)((int)puVar11 + 0x74);
    *(undefined4 *)((int)fVar7 + 0x18) = *(undefined4 *)(puVar11 + 0xf);
    *(undefined4 *)((int)fVar7 + 0x1c) = *(undefined4 *)((int)puVar11 + 0x7c);
    mobyfunc::UpdateMobyTransform((MobyInstance *)pfVar5[0x73]);
  }
  mobyutil::MB_ColorDyingMoby(param_1,uVar23 + 0x40);
  return;
}



//==== 0034ec58  ns=mobyupdate_unsorted  size=0x1d2c
// sig: undefined UpdateMoby_342(MobyInstance * moby)
// callers(0): 
// callees(30): 0002ed9c stub::STUB_0002ed9c; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00109af0 mobyutil::Delt; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 00110808 mobyutil::MB_FindMobyByVarId; 001118d8 mobyutil::MB_getTarget; 0015d12c sound::PlayMobySound; 00299400 FUN_00299400; 0034dd10 mobyupdate_helpers::M342_0034dd10; 0034e230 mobyupdate_helpers::M342_0034e230; 003bbc08 FUN_003bbc08; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338; 005e84c0 FUN_005e84c0

/* Moby 342 */

void mobyupdate_unsorted::UpdateMoby_342(MobyInstance *moby)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  u8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  int *piVar11;
  f32 fVar12;
  Spline *pSVar13;
  Spline *pSVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  MobyInstance *pMVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  MobyInstance *pMVar24;
  int iVar25;
  ulonglong uVar26;
  byte in_cr6;
  undefined8 in_LR;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 local_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 auStack_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [80];
  MobyInstance *local_100;
  undefined1 auStack_f0 [64];
  MobyInstance *local_b0;
  undefined1 auStack_a0 [64];
  MobyInstance *local_60;
  
  lVar18 = (longlong)(int)moby;
  puVar10 = (undefined4 *)moby->pVar;
  uVar26 = ZEXT48(puVar10);
  mobyupdate_helpers::M342_0034e230();
  bVar4 = moby->state;
  if (bVar4 < 0xb) {
    if (bVar4 < 4) {
      if (bVar4 == 0) {
        *(undefined1 *)((int)puVar10 + 9) = 0;
        uVar23 = g_heroMobyPtr->light;
        moby->color = g_heroMobyPtr->color;
        moby->light = uVar23;
        mobyutil::MB_InitDefaultParams((float *)(puVar10 + 0x2c));
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        puVar10[0x3d] = 0x3e800000;
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        puVar10[0x3b] = 0x3cf5c28f;
        puVar10[0x3c] = 0x3e99999a;
        fVar8 = DAT_0084010c;
        fVar7 = mobyutil::g_FrameTime;
        puVar10[0xb] = 0;
        puVar10[0x2f] = 0x40000000;
        puVar10[0x2e] = 0x40000000;
        *puVar10 = 0x40400000;
        *(undefined1 *)(puVar10 + 2) = 2;
        puVar10[10] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[0x35] = fVar8 * fVar7;
        auVar33 = loadVectorLeftIndexed(in_LR,0x34ebd0);
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        cVar5 = *(char *)(puVar10 + 0x75);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar22 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1b0,
                            uVar26);
        *(undefined4 *)((uint)(puVar10 + 0x6c) & 0xfffffffc) = uVar22;
        puVar10[0x71] = 0;
        if (cVar5 == '\0') {
          iVar21 = puVar10[0x51];
          pSVar13 = Splines[puVar10[0x45]];
          puVar10[0x44] = pSVar13;
          (moby->pos).x = pSVar13->points[0].x;
          (moby->pos).y = pSVar13->points[0].y;
          pSVar14 = Splines[iVar21];
          (moby->pos).z = pSVar13->points[0].z;
          fVar7 = pSVar13->points[0].w;
          puVar10[0x40] = 1;
          (moby->pos).w = fVar7;
          puVar10[0x50] = pSVar14;
          puVar10[0x4c] = 1;
          moby->drawDistance = 0;
          moby->state = '\x01';
          return;
        }
        pMVar19 = mobyfunc::CreateMoby(BLARG_GUN_0158);
        puVar10[0x73] = pMVar19;
        pMVar19->drawDistance = 0x40;
        *(undefined1 *)(puVar10[0x73] + 0x30) = 0x40;
        *(undefined1 *)(puVar10[0x73] + 0x31) = 1;
        *(ushort *)(puVar10[0x73] + 0x34) = *(ushort *)(puVar10[0x73] + 0x34) | 0x100;
        mobyfunc::GetBonePosition(lVar18,4,&local_230);
        iVar21 = puVar10[0x73];
        *(undefined4 *)(iVar21 + 0x10) = local_230;
        *(undefined4 *)(iVar21 + 0x14) = local_22c;
        *(undefined4 *)(iVar21 + 0x18) = local_228;
        *(undefined4 *)(iVar21 + 0x1c) = local_224;
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        pMVar19 = mobyfunc::CreateMoby(0x159);
        puVar10[0x74] = pMVar19;
        (pMVar19->pos).x = (moby->pos).x;
        (pMVar19->pos).y = (moby->pos).y;
        (pMVar19->pos).z = (moby->pos).z;
        (pMVar19->pos).w = (moby->pos).w;
        iVar21 = puVar10[0x74];
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        *(undefined2 *)(puVar10[0x74] + 0x32) = 0x40;
        *(undefined1 *)(puVar10[0x74] + 0x30) = 0xff;
        *(undefined1 *)(puVar10[0x74] + 0x31) = 1;
        mobyutil::MB_SetAnimation(puVar10[0x74],3,0,0);
        moby->state = '\x0e';
        if (moby->animationId == '\f') {
          return;
        }
        mobyutil::MB_SetAnimation(lVar18,0xc,0,0);
        return;
      }
      if (bVar4 < 2) {
        piVar11 = (int *)puVar10[0x44];
        iVar21 = *piVar11 + -1;
        if ((float)puVar10[0x79] <=
            SQRT((g_heroPosition.z - (float)piVar11[iVar21 * 4 + 6]) *
                 (g_heroPosition.z - (float)piVar11[iVar21 * 4 + 6]) +
                 (g_heroPosition.x - (float)piVar11[iVar21 * 4 + 4]) *
                 (g_heroPosition.x - (float)piVar11[iVar21 * 4 + 4]) +
                 (g_heroPosition.y - (float)piVar11[iVar21 * 4 + 5]) *
                 (g_heroPosition.y - (float)piVar11[iVar21 * 4 + 5]))) {
          return;
        }
        moby->drawDistance = 0x40;
        moby->state = '\x02';
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(lVar18,3,0,0);
        }
        pMVar19 = mobyfunc::CreateMoby(0x159);
        puVar10[0x74] = pMVar19;
        (pMVar19->pos).x = (moby->pos).x;
        (pMVar19->pos).y = (moby->pos).y;
        (pMVar19->pos).z = (moby->pos).z;
        (pMVar19->pos).w = (moby->pos).w;
        *(float *)(puVar10[0x74] + 0x18) = *(float *)(puVar10[0x74] + 0x18) + 2.0;
        *(undefined2 *)(puVar10[0x74] + 0x32) = 0x40;
        *(undefined1 *)(puVar10[0x74] + 0x30) = 0xff;
        *(undefined1 *)(puVar10[0x74] + 0x31) = 1;
        mobyutil::MB_SetAnimation(puVar10[0x74],1,0,0);
        pMVar19 = mobyfunc::CreateMoby(BLARG_GUN_0158);
        puVar10[0x73] = pMVar19;
        pMVar19->drawDistance = 0x40;
        *(undefined1 *)(puVar10[0x73] + 0x30) = 0xff;
        *(undefined1 *)(puVar10[0x73] + 0x31) = 1;
        *(ushort *)(puVar10[0x73] + 0x34) = *(ushort *)(puVar10[0x73] + 0x34) | 0x100;
        mobyfunc::GetBonePosition(lVar18,4,&local_220);
        iVar21 = puVar10[0x73];
        *(undefined4 *)(iVar21 + 0x10) = local_220;
        *(undefined4 *)(iVar21 + 0x14) = local_21c;
        *(undefined4 *)(iVar21 + 0x18) = local_218;
        *(undefined4 *)(iVar21 + 0x1c) = local_214;
        return;
      }
      if (bVar4 < 3) {
        piVar11 = (int *)puVar10[0x44];
        iVar21 = *piVar11;
        iVar25 = puVar10[0x40] + iVar21 + (int)*(char *)(puVar10 + 0x41);
        iVar25 = iVar25 - (iVar25 / iVar21) * iVar21;
        uVar28 = FUN_005e8338((double)((float)piVar11[iVar25 * 4 + 4] - (moby->pos).x),
                              (double)((float)piVar11[iVar25 * 4 + 5] - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar28,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar18,
                   &DAT_0034ebd0,uVar26 + 0x1b4);
        iVar21 = puVar10[0x74];
        iVar20 = puVar10[0x44] + iVar25 * 0x10;
        dVar30 = (double)*(float *)(iVar20 + 0x10);
        dVar32 = (double)*(float *)(iVar20 + 0x14);
        dVar31 = (double)*(float *)(iVar20 + 0x18);
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = puVar10[0x74];
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        if (iVar25 == *(int *)puVar10[0x44] + -1) {
          dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18 + 0x10,0);
          dVar29 = -(double)(DAT_00840110 * mobyutil::g_FrameTime - (moby->pos).z);
          if (dVar29 <= dVar27) {
            uVar6 = moby->animationId;
            (moby->pos).z = (float)dVar27;
            moby->state = '\t';
            if (uVar6 != '\x04') {
              mobyutil::MB_SetAnimation(lVar18,4,0,3);
            }
            mobyutil::MB_SetAnimation(puVar10[0x74],2,0,0);
          }
          else {
            (moby->pos).z = (float)dVar29;
          }
          iVar21 = puVar10[0x74];
          *(float *)(iVar21 + 0x2c) =
               -(*(float *)(*(int *)(iVar21 + 0x24) + 0x24) * 0.033333335 -
                *(float *)(iVar21 + 0x2c));
          if (*(int *)(puVar10[0x74] + 0x2c) < 0) {
            *(undefined4 *)(puVar10[0x74] + 0x2c) = 0;
          }
        }
        else {
          dVar27 = dVar30 - (double)(moby->pos).x;
          dVar29 = dVar32 - (double)(moby->pos).y;
          dVar2 = dVar31 - (double)(moby->pos).z;
          FUN_005e7f98((double)(DAT_00840110 * mobyutil::g_FrameTime),local_210,local_210);
          (moby->pos).x = (moby->pos).x + (float)dVar27;
          (moby->pos).y = (moby->pos).y + (float)dVar29;
          (moby->pos).z = (moby->pos).z + (float)dVar2;
        }
        fVar7 = (float)((double)(moby->pos).y - dVar32);
        fVar8 = (float)((double)(moby->pos).x - dVar30);
        fVar3 = (float)((double)(moby->pos).z - dVar31);
        if (0.5 <= SQRT(fVar3 * fVar3 + fVar8 * fVar8 + fVar7 * fVar7)) {
          return;
        }
        if (iVar25 == *(int *)puVar10[0x44] + -1) {
          return;
        }
        puVar10[0x40] = iVar25;
        return;
      }
      mobyutil::MB_getTarget((double)(float)puVar10[0x7a],lVar18);
      pMVar19 = g_heroMobyPtr;
      pMVar24 = (MobyInstance *)puVar10[0x76];
      if (local_100 != (MobyInstance *)0x0) {
        fVar7 = (moby->pos).y;
        fVar3 = fVar7 - (local_100->pos).y;
        fVar8 = (moby->pos).x;
        fVar7 = fVar7 - g_heroPosition.y;
        fVar9 = fVar8 - (local_100->pos).x;
        fVar8 = fVar8 - g_heroPosition.x;
        if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
          puVar10[0x76] = g_heroMobyPtr;
          pMVar24 = pMVar19;
        }
        else {
          puVar10[0x76] = local_100;
          pMVar24 = local_100;
        }
      }
      dVar31 = (double)(moby->rotation).z;
      uVar28 = FUN_005e8338((double)((pMVar24->pos).x - (moby->pos).x),
                            (double)((pMVar24->pos).y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar28,0x3f847ae140000000,0x3fd3333340000000,0x3fd3333340000000,lVar18);
      dVar31 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar31);
      dVar32 = 0.0872664600610733;
      if (dVar31 <= (double)(mobyutil::g_FrameTime * 0.08726646)) {
        if ((moby->animationId != '\0') && ((moby->field43_0x70 & 2U) != 0)) {
          mobyutil::MB_SetAnimation(lVar18,0,0,(int)(animationSpeed * 6.5));
        }
      }
      else {
        bVar1 = moby->animationId != '\x13';
        if ((bVar1) && (bVar1)) {
          mobyutil::MB_SetAnimation(lVar18,0x13,0,(int)(animationSpeed * 6.5));
        }
      }
      iVar21 = mobyutil::MB_FindMobyByVarId(lVar18);
      if (iVar21 != 0) {
        mobyupdate_helpers::M342_0034dd10(lVar18);
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar18,2,0,6);
        }
        moby->state = '\f';
        return;
      }
      iVar21 = puVar10[0x76];
      fVar7 = (moby->pos).y;
      fVar8 = (moby->pos).x;
      fVar3 = fVar7 - *(float *)(iVar21 + 0x14);
      fVar9 = fVar8 - *(float *)(iVar21 + 0x10);
      if ((float)puVar10[0x7a] <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
        return;
      }
      if (4.0 <= ABS(*(float *)(iVar21 + 0x18) - (moby->pos).z)) {
        return;
      }
      dVar31 = (double)FUN_005e8338((double)(*(float *)(iVar21 + 0x10) - fVar8),
                                    (double)(*(float *)(iVar21 + 0x14) - fVar7));
      dVar31 = (double)fastfunc::FastSubRots((float)dVar31,(moby->rotation).z);
      if (dVar32 <= dVar31) {
        return;
      }
      if ((moby->enabled == '\0') && ((MobyInstance *)puVar10[0x76] == g_heroMobyPtr)) {
        return;
      }
      puVar10[0x72] = 0xc0800000;
      uVar26 = mobyutil::MB_randInt(0xff);
      dVar31 = -0.0872664600610733;
      if ((uVar26 & 1) != 0) {
        dVar31 = dVar32;
      }
      puVar10[0x6f] = (float)dVar31;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      uVar22 = fastfunc::FastDoubleToInt((double)(DAT_00840128 * animationSpeed));
      puVar10[0x6c] = uVar22;
      *(undefined1 *)((int)puVar10 + 0x1d5) = 0;
      if (puVar10[0x77] != 0) {
        sound::PlayMobySound(puVar10[0x77],0,moby);
        puVar10[0x77] = 0;
        if (moby->animationId != '\x15') {
          mobyutil::MB_SetAnimation(lVar18,0x15,0,4);
        }
        moby->state = '\x13';
        return;
      }
      if (moby->animationId != '\x0f') {
        mobyutil::MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 4.5));
      }
      moby->state = '\n';
      return;
    }
    if (7 < bVar4) {
      if (bVar4 < 9) {
        stub::STUB_0002ed9c();
        dVar31 = (double)FUN_005e8338((double)(*(float *)(puVar10[0x76] + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(puVar10[0x76] + 0x14) - (moby->pos).y));
        dVar31 = (double)fastfunc::FastWrapRot((float)dVar31,(float)puVar10[0x6f]);
        mobyutil::OrganicDeltAngSpeed
                  (dVar31,0x3f60624de0000000,0x3faeb851e0000000,0x3f6cac0840000000,lVar18);
        dVar31 = (double)fastfunc::FastSubRots((float)dVar31,(moby->rotation).z);
        if (dVar31 < 0.0872664600610733) {
          puVar10[0x6f] = -(float)puVar10[0x6f];
        }
        mobyutil::Delt(-0.95,mobyutil::g_FrameTime * 2.0,(float *)(puVar10 + 0x72));
        dVar31 = (double)mobyfunc::BlendAnimFrame(moby);
        if (dVar31 <= 1.0) {
          mobyfunc::GetBonePosition(puVar10[0x73],0,auStack_200);
          dVar32 = 0.0;
          dVar31 = (double)fastfunc::FastWrapRot((moby->rotation).z,0.0);
          mathfunc::cosf((float)dVar31);
          fastfunc::FastWrapRot((moby->rotation).z,(float)dVar32);
          FUN_005e8128();
          FUN_005e7f98((double)(DAT_00840114 * mobyutil::g_FrameTime),auStack_1f0,local_1e0);
          FUN_003bbc08(0x3fd0000000000000,auStack_1f0,auStack_200,lVar18,
                       (int)(animationSpeed * 180.5));
          *(char *)((int)puVar10 + 0x1d5) = *(char *)((int)puVar10 + 0x1d5) + '\x01';
        }
        pMVar19 = (MobyInstance *)puVar10[0x76];
        fVar7 = (moby->pos).y - (pMVar19->pos).y;
        fVar8 = (moby->pos).x - (pMVar19->pos).x;
        pMVar24 = (MobyInstance *)&DAT_0034ebd0;
        if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) < 8.0) {
          auVar33 = ZEXT416(0xffffffff);
          auVar37 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          auVar33 = loadVectorLeftIndexed(0x54,0x34ebd0);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar34 = loadVectorLeftIndexed(0x128,0x840000);
          auVar35 = loadVectorLeftIndexed(0x1b0,uVar26);
          auVar33 = vectorSubtractFloatingPoint
                              (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar36 = loadVectorRightIndexed(0x1c0,uVar26);
          auVar34 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar35 | auVar36,0);
          auVar34 = vectorMultiplyAddFloatingPoint(auVar37,auVar33,auVar34);
          auVar33 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                     auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
          pMVar24 = (MobyInstance *)0xfffff410;
          if ((((bool)(in_cr6 >> 1 & 1)) &&
              (pMVar24 = (MobyInstance *)puVar10[0x78],
              (MobyInstance *)puVar10[0x78] == (MobyInstance *)0x0)) &&
             (pMVar24 = g_heroMobyPtr, pMVar19 == g_heroMobyPtr)) {
            if (moby->animationId != '\x02') {
              mobyutil::MB_SetAnimation(lVar18,2,0,6,0x128,0x1b0);
            }
            mobyupdate_helpers::M342_0034dd10(lVar18);
            auVar33 = ZEXT416(0xffffffff);
            auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = loadVectorLeftIndexed(0x48,0x34ebd0);
            auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar33 = vectorMultiplyAddFloatingPoint
                                (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 |
                                         auVar33 << 0x60,auVar34);
            auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
            auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar22 = storeVectorElementWordIndexed
                               (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1b0,
                                uVar26);
            *(undefined4 *)((uint)(puVar10 + 0x6c) & 0xfffffffc) = uVar22;
            moby->state = '\f';
            return;
          }
        }
        iVar21 = fastfunc::FastDecTimerS32(uVar26 + 0x1b0,pMVar24);
        if (iVar21 != 0) {
          if (puVar10[0x78] != 0) {
            if (moby->animationId != '\x0f') {
              mobyutil::MB_SetAnimation(lVar18,0xf,0,6);
            }
            moby->state = '\n';
            return;
          }
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimation(lVar18,2,0,6);
          }
          mobyupdate_helpers::M342_0034dd10(lVar18);
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x48,0x34ebd0);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorMultiplyAddFloatingPoint
                              (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                               ,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar22 = storeVectorElementWordIndexed
                             (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1b0,
                              uVar26);
          *(undefined4 *)((uint)(puVar10 + 0x6c) & 0xfffffffc) = uVar22;
          moby->state = '\f';
          return;
        }
        if (hero::g_heroStateType != 7) {
          return;
        }
        if ((MobyInstance *)puVar10[0x76] != g_heroMobyPtr) {
          return;
        }
        if (moby->animationId != '\x12') {
          mobyutil::MB_SetAnimation(lVar18,0x12,0,6);
        }
        moby->state = '\x12';
        return;
      }
      if (bVar4 < 10) {
        iVar21 = puVar10[0x74];
        if (iVar21 != 0) {
          *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
          iVar21 = puVar10[0x74];
          *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
          *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
          *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
          *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
          if ((((MobyInstance *)puVar10[0x74])->field43_0x70 & 2U) != 0) {
            mobyfunc::DeleteMoby((MobyInstance *)puVar10[0x74]);
            puVar10[0x74] = 0;
          }
        }
        if ((moby->field43_0x70 & 2U) == 0) {
          return;
        }
        mobyupdate_helpers::M342_0034dd10(lVar18);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar18,0,0,6);
        }
        moby->state = '\x03';
        puVar10[0x74] = 0;
        return;
      }
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = '\b';
      if (moby->animationId == '\x06') {
        return;
      }
      mobyutil::MB_SetAnimation(lVar18,6,7,(int)(animationSpeed * 10.5));
      return;
    }
    if (bVar4 < 5) {
      return;
    }
    if (6 < bVar4) {
      stub::STUB_0002ed9c();
      uVar28 = FUN_005e8338((double)(*(float *)(puVar10[0x76] + 0x10) - (moby->pos).x),
                            (double)(*(float *)(puVar10[0x76] + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar28,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar18);
      mobyutil::Delt(-0.75,mobyutil::g_FrameTime * 2.0,(float *)(puVar10 + 0x72));
      dVar31 = (double)mobyfunc::BlendAnimFrame(moby);
      if (dVar31 <= 1.0) {
        mobyfunc::GetBonePosition(puVar10[0x73],0,auStack_1d0);
        mathfunc::cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        uVar28 = 0;
        FUN_005e7f98((double)(DAT_00840114 * mobyutil::g_FrameTime),auStack_1c0,local_1b0);
        iVar21 = FUN_00299400(uVar28,auStack_1c0,auStack_1d0);
        *(undefined1 *)(iVar21 + 0x20) = 1;
      }
      iVar21 = fastfunc::FastDecTimerS32(uVar26 + 0x1b0);
      if (iVar21 == 0) {
        return;
      }
      moby->state = '\x03';
      if (moby->animationId == '\0') {
        return;
      }
      mobyutil::MB_SetAnimation(lVar18,0,0,6);
      return;
    }
LAB_0034fee0:
    iVar21 = mobyutil::MB_UpdateNavMoveTurning
                       (lVar18,uVar26 + 0xb0,puVar10[0x50] + puVar10[0x4c] * 0x10 + 0x10,
                        uVar26 + 0x20);
    if (iVar21 != 4) {
      return;
    }
    uVar6 = moby->state;
    if (uVar6 == '\f') {
      moby->state = '\x03';
      if (moby->animationId == '\0') {
        return;
      }
      mobyutil::MB_SetAnimation(lVar18,0,0,6);
      return;
    }
    if (uVar6 == '\v') {
      mobyutil::MB_getTarget(0x402c000000000000,lVar18,&DAT_0034ebd0,auStack_a0);
      fVar7 = (moby->pos).y;
      fVar8 = (moby->pos).x;
      fVar3 = fVar7 - (local_60->pos).y;
      fVar9 = fVar8 - (local_60->pos).x;
      fVar7 = fVar7 - g_heroPosition.y;
      fVar8 = fVar8 - g_heroPosition.x;
      if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
        local_60 = g_heroMobyPtr;
      }
      puVar10[0x76] = local_60;
      moby->state = '\n';
      if (moby->animationId == '\x0f') {
        return;
      }
      mobyutil::MB_SetAnimation(lVar18,0xf,0,6);
      return;
    }
    if (uVar6 == '\x06') {
      auVar33 = ZEXT416(0xffffffff);
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      moby->state = '\a';
      auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x68,0x34ebd0);
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar33 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                           auVar34);
      auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar22 = storeVectorElementWordIndexed
                         (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1b0,uVar26
                         );
      *(undefined4 *)((uint)(puVar10 + 0x6c) & 0xfffffffc) = uVar22;
      if (moby->animationId == '\x06') {
        return;
      }
      mobyutil::MB_SetAnimation(lVar18,6,7,4);
      return;
    }
    if (uVar6 != '\x05') {
      return;
    }
    mobyutil::MB_getTarget(0x402c000000000000,lVar18,&DAT_0034ebd0,auStack_f0);
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).x;
    fVar3 = fVar7 - (local_b0->pos).y;
    fVar7 = fVar7 - g_heroPosition.y;
    fVar9 = fVar8 - (local_b0->pos).x;
    fVar8 = fVar8 - g_heroPosition.x;
    if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
      local_b0 = g_heroMobyPtr;
    }
    puVar10[0x76] = local_b0;
    fVar7 = (moby->pos).y;
    fVar8 = (local_b0->pos).y;
    fVar3 = (moby->pos).x;
    fVar16 = fVar7 - fVar8;
    fVar9 = (local_b0->pos).x;
    fVar17 = fVar3 - fVar9;
    if (SQRT(fVar17 * fVar17 + fVar16 * fVar16) < 4.0) {
      dVar32 = (double)(moby->rotation).z;
      dVar31 = (double)FUN_005e8338((double)(fVar9 - fVar3),(double)(fVar8 - fVar7));
      dVar31 = (double)fastfunc::FastSubRots((float)dVar32,(float)dVar31);
      if (1.5707963705062866 < dVar31) {
        mobyupdate_helpers::M342_0034dd10(lVar18);
        return;
      }
    }
    uVar22 = fastfunc::FastDoubleToInt((double)(DAT_00840128 * animationSpeed));
    puVar10[0x6c] = uVar22;
    *(undefined1 *)((int)puVar10 + 0x1d5) = 0;
    if (moby->animationId != '\x15') {
      mobyutil::MB_SetAnimation(lVar18,0x15,0,4);
    }
    moby->state = '\x13';
    return;
  }
  if (0x10 < bVar4) {
    if (0x13 < bVar4) {
      if (bVar4 != 99) {
        return;
      }
      uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)(puVar10 + 0x14));
      if ((uVar23 & 0x40) != 0) {
        if ((MobyInstance *)puVar10[0x74] != (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby((MobyInstance *)puVar10[0x74]);
        }
        mobyutil::MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,0
                   ,lVar18,uVar26 + 0x20,local_150,&DAT_0034ebd0,0,5,2,4);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      fVar12 = (moby->pos).z;
      uVar15 = (int)fVar12 >> 0x1f;
      if ((0x409fffff < (int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15)) && ((uVar23 & 0x20) == 0)) {
        return;
      }
      if ((MobyInstance *)puVar10[0x74] != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby((MobyInstance *)puVar10[0x74]);
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (bVar4 < 0x12) {
      return;
    }
    if (0x12 < bVar4) {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      if (moby->animationId != '\x06') {
        mobyutil::MB_SetAnimation(lVar18,6,7,4);
      }
      moby->state = '\b';
      return;
    }
    if ((moby->field43_0x70 & 2U) == 0) {
      return;
    }
    moby->state = '\x03';
    if (moby->animationId == '\0') {
      return;
    }
    mobyutil::MB_SetAnimation(lVar18,0,0,6);
    return;
  }
  if (bVar4 < 0xe) {
    if (0xc < bVar4) {
      uVar23 = mobyutil::MB_UpdateKick(moby,(KickVars *)(puVar10 + 0x14));
      if ((uVar23 & 0x40) != 0) {
        if (puVar10[0x78] != 0) {
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar18,0,0,(int)(animationSpeed * 6.5));
          }
          moby->state = '\x03';
          return;
        }
        mobyupdate_helpers::M342_0034dd10(lVar18);
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar18,2,0,(int)(animationSpeed * 6.5));
        }
        moby->state = '\f';
        return;
      }
      fVar12 = (moby->pos).z;
      uVar15 = (int)fVar12 >> 0x1f;
      if ((0x409fffff < (int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15)) && ((uVar23 & 0x20) == 0)) {
        return;
      }
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar18,uVar26 + 0x20,local_160,&DAT_0034ebd0,1,5,2,4);
      if ((MobyInstance *)puVar10[0x73] != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby((MobyInstance *)puVar10[0x73]);
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_0034fee0;
  }
  if (bVar4 < 0xf) {
    iVar21 = puVar10[0x76];
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).x;
    fVar3 = fVar7 - *(float *)(iVar21 + 0x14);
    fVar9 = fVar8 - *(float *)(iVar21 + 0x10);
    if (14.0 <= SQRT(fVar9 * fVar9 + fVar3 * fVar3)) {
      return;
    }
    if (4.0 <= ABS(*(float *)(iVar21 + 0x18) - (moby->pos).z)) {
      return;
    }
    dVar32 = (double)(moby->rotation).z;
    dVar31 = (double)FUN_005e8338((double)(*(float *)(iVar21 + 0x10) - fVar8),
                                  (double)(*(float *)(iVar21 + 0x14) - fVar7));
    dVar31 = (double)fastfunc::FastSubRots((float)dVar32,(float)dVar31);
    if (1.0471975803375244 <= dVar31) {
      return;
    }
    moby->state = '\x0f';
    if (moby->animationId != '\r') {
      mobyutil::MB_SetAnimation(lVar18,0xd,0,6);
    }
    iVar21 = puVar10[0x76];
    puVar10[0x68] = *(undefined4 *)(iVar21 + 0x10);
    puVar10[0x69] = *(undefined4 *)(iVar21 + 0x14);
    puVar10[0x6a] = *(undefined4 *)(iVar21 + 0x18);
    puVar10[0x6b] = *(undefined4 *)(iVar21 + 0x1c);
    return;
  }
  if (0xf < bVar4) {
    (moby->pos).x = (moby->pos).x + (float)puVar10[8];
    (moby->pos).y = (moby->pos).y + (float)puVar10[9];
    (moby->pos).z = (moby->pos).z + (float)puVar10[10];
    mobyutil::Delt(mobyutil::g_FrameTime * -10.0,DAT_0071f418 * 10.8,(float *)(puVar10 + 10));
    iVar21 = puVar10[0x74];
    if (iVar21 != 0) {
      *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
      iVar21 = puVar10[0x74];
      *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
      if ((((MobyInstance *)puVar10[0x74])->field43_0x70 & 2U) != 0) {
        mobyfunc::DeleteMoby((MobyInstance *)puVar10[0x74]);
        puVar10[0x74] = 0;
      }
    }
    fVar12 = (moby->pos).z;
    uVar23 = (int)fVar12 >> 0x1f;
    if (0x411fffff < (int)((uVar23 >> 1 ^ (uint)fVar12) - uVar23)) {
      return;
    }
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar18,uVar26 + 0x20,local_170,&DAT_0034ebd0,1,5,2,4);
    mobyfunc::DeleteMoby((MobyInstance *)puVar10[0x73]);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  iVar21 = puVar10[0x76];
  fVar7 = (moby->pos).y;
  fVar8 = (moby->pos).x;
  fVar3 = fVar7 - *(float *)(iVar21 + 0x14);
  fVar9 = fVar8 - *(float *)(iVar21 + 0x10);
  if ((SQRT(fVar9 * fVar9 + fVar3 * fVar3) <= 14.0) &&
     (ABS(*(float *)(iVar21 + 0x18) - (moby->pos).z) <= 4.0)) {
    dVar32 = (double)(moby->rotation).z;
    dVar31 = (double)FUN_005e8338((double)(*(float *)(iVar21 + 0x10) - fVar8),
                                  (double)(*(float *)(iVar21 + 0x14) - fVar7));
    dVar31 = (double)fastfunc::FastSubRots((float)dVar32,(float)dVar31);
    if (dVar31 <= 1.0471975803375244) goto LAB_00350390;
  }
  moby->state = '\x0e';
  if (moby->animationId != '\f') {
    mobyutil::MB_SetAnimation(lVar18,0xc,0,6);
  }
LAB_00350390:
  dVar31 = (double)mobyfunc::BlendAnimFrame(moby);
  if (dVar31 <= 1.0) {
    mobyfunc::GetBonePosition(puVar10[0x73],0,local_190);
    iVar21 = puVar10[0x76];
    puVar10[0x68] = *(undefined4 *)(iVar21 + 0x10);
    puVar10[0x69] = *(undefined4 *)(iVar21 + 0x14);
    puVar10[0x6a] = *(undefined4 *)(iVar21 + 0x18);
    puVar10[0x6b] = *(undefined4 *)(iVar21 + 0x1c);
    uVar28 = 0x3fd0000000000000;
    FUN_005e84c0((double)(DAT_00840114 * mobyutil::g_FrameTime),auStack_180,local_1a0);
    FUN_003bbc08(uVar28,auStack_180,local_190,lVar18,(int)(animationSpeed * 180.5));
  }
  return;
}



