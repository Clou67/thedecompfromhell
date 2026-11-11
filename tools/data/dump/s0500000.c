//==== 0050000c  ns=fastfunc  size=0x54
// sig: undefined FastDecTimerU16(void)
// callers(0): 
// callees(0): 

undefined8 fastfunc::FastDecTimerU16(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = (longlong)(1 - (ulonglong)uVar1) >> 0x3f & (ulonglong)uVar1 - 1;
    *param_1 = (ushort)uVar3;
    if ((uVar3 & 0xffff) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== 00500060  ns=fastfunc  size=0x54
// sig: undefined FastDecTimerS8(void)
// callers(16): 000a64d0 hero::Hero_HoverboardBoostPads; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 0023d4d8 mobyupdate_unsorted::UpdateMoby_{1285_1286_1287_1288}; 002746a8 mobyupdate_helpers::M1422_002746a8; 0029e140 mobyupdate_helpers::M157_0029e140; 00325a50 mobyupdate_unsorted::UpdateMoby_{276_1298_1299}; 00338f90 mobyupdate_helpers::M303_00338f90; 0034a250 mobyupdate_unsorted::UpdateMoby_339; 00371330 mobyupdate_unsorted::UpdateMoby_428; 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate; 003ab940 mobyupdate_unsorted::UpdateMoby_520; 004076b8 mobyupdate_unsorted::UpdateMoby_656; 0040a168 mobyupdate_helpers::M668_0040a168; 0040f5f8 mobyupdate_unsorted::UpdateMoby_675; 00437430 mobyupdate_unsorted::UpdateMoby_732; 00456fe0 mobyupdate_unsorted::UpdateMoby_776
// callees(0): 

undefined8 fastfunc::FastDecTimerS8(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = (longlong)(1 - (ulonglong)bVar1) >> 0x3f & (ulonglong)bVar1 - 1;
    *param_1 = (byte)uVar3;
    if ((uVar3 & 0xff) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== 005000b4  ns=fastfunc  size=0x54
// sig: undefined FastDecTimerU8(void)
// callers(20): 00018238 mobyupdate_helpers::M1274_00018238; 000a30e0 hero::???_Hero_UpdateWeaponInput; 00123768 partupd::UpdatePart_11; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 0023b710 mobyupdate_helpers::M1284_0023b710; 002cf460 mobyupdate_unsorted::UpdateMoby_1886; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 00344328 mobyupdate_unsorted::UpdateMoby_329; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0035f670 mobyupdate_helpers::M388_0035f670; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 00382358 mobyupdate_unsorted::UpdateMoby_440; 003a7360 mobyupdate_unsorted::UpdateMoby_500_Crate; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003fdc80 mobyupdate_unsorted::UpdateMoby_639; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 00447b40 mobyupdate_helpers::M795_00447b40; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(0): 

undefined8 fastfunc::FastDecTimerU8(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = (longlong)(1 - (ulonglong)bVar1) >> 0x3f & (ulonglong)bVar1 - 1;
    *param_1 = (byte)uVar3;
    if ((uVar3 & 0xff) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== 00500108  ns=fastfunc  size=0x70
// sig: undefined FastDecTimerF32(void)
// callers(4): 0020f330 mobyupdate_helpers::M1226_0020f330; 0026af90 mobyupdate_unsorted::UpdateMoby_1400; 0037cfe0 mobyupdate_helpers::M44_0037cfe0; 003f7518 mobyupdate_helpers::M1382_003f7518
// callees(0): 

undefined8 fastfunc::FastDecTimerF32(float *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = (int)*param_1 >> 0x1f;
  iVar3 = (uVar1 >> 1 ^ (uint)*param_1) - uVar1;
  if ((int)(((uint)((int)DAT_0071f424 >> 0x1f) >> 1 ^ (uint)DAT_0071f424) -
           ((int)DAT_0071f424 >> 0x1f)) < iVar3) {
    *param_1 = *param_1 - DAT_0071f424;
    uVar2 = 0;
  }
  else {
    *param_1 = 0.0;
    if (iVar3 < 0x3f800000) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = 0xfffffffffffffffe;
    }
  }
  return uVar2;
}



//==== 00500178  ns=fastfunc  size=0x80
// sig: undefined FastLog2(void)
// callers(7): 0004f064 loaders::GsTex_Register; 0004fb50 bloaders::LoadPifAsPSMT8H; 000db2ec loaders::ParsePif; 000db92c loaders::ParseEffectTexs; 000dba38 loaders::ParseSky; 000dc7fc loaders::SetUpVisGif; 000e0a2c loaders::QueuePifLoad
// callees(0): 

uint fastfunc::FastLog2(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = 0xffff - (ulonglong)param_1 >> 0x3f;
  param_1 = param_1 >> (int)(uVar1 << 4);
  uVar4 = (uint)((0xff - (ulonglong)param_1 >> 0x3f) << 3);
  param_1 = param_1 >> uVar4;
  uVar2 = 0xf - (ulonglong)param_1 >> 0x3f;
  param_1 = param_1 >> (int)(uVar2 << 2);
  uVar3 = 3 - (ulonglong)param_1 >> 0x3f;
  return (uint)(uVar3 << 1) | (uint)(uVar2 << 2) | (uint)(uVar1 << 4) | uVar4 |
         (param_1 >> (int)(uVar3 << 1)) >> 1;
}



//==== 005001f8  ns=fastfunc  size=0x4
// sig: undefined FastSitAndSpin_STUB(void)
// callers(0): 
// callees(0): 

void fastfunc::FastSitAndSpin_STUB(void)

{
  return;
}



//==== 005001fc  ns=fastfunc  size=0x28
// sig: undefined FastMemSet(undefined8 addr, undefined8 val, undefined4 size)
// callers(48): 00010c70 boot::FrontEnd_Draw; 00011648 boot::LoadGameplay; 00011b74 boot::Load_Front_End; 00013dac boot::ResetLevelGlobals; 0004f064 loaders::GsTex_Register; 0004fb50 bloaders::LoadPifAsPSMT8H; 00067b90 draw::BuildOcclVisibility; 000680e8 draw::UpdateOcclusion; 000684a4 draw::UpdateOcclusion; 00074dc0 draw::ImpactSprite_Update; 0007f018 hero::Hero_ResetHero; 000921c0 hero::EquipItem; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 000d8be8 initonce::InitOnce; 000db2ec loaders::ParsePif; 000dcf58 loaders::NAVG_LoadFile; 000df408 loaders::LoadAllMobys; 000e4c0c map::Map_SaveRevealMask; 000e4c88 map::Map_DecompressMapImage; 000ef810 mobyfunc::InitMobyInstance; 000efa28 mobyfunc::CreateMoby; 000f0900 mobyfunc::MB_FreeAnimLayer; 000f0f1c mobyfunc::DetachManipulator; 000fc238 mobyfunc::UpdateMobysDebug
// callees(1): 005d0140 libc::memset

void fastfunc::FastMemSet(undefined8 addr,undefined8 val,undefined4 size)

{
  libc::memset(addr,val,size);
  return;
}



//==== 00500224  ns=fastfunc  size=0x2c
// sig: undefined FastMemSetZero16(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void fastfunc::FastMemSetZero16(undefined8 param_1,undefined4 param_2)

{
  libc::memset(param_1,0,param_2);
  return;
}



//==== 00500250  ns=fastfunc  size=0x2c
// sig: undefined FastMemSetZero(void)
// callers(19): 00011648 boot::LoadGameplay; 0002b898 draw::???_Draw_SetupFogTable; 00067b90 draw::BuildOcclVisibility; 00083ac8 hero::Hero_HandleGroundType; 000aa0f0 hero::???_Unused_Hero_ClearBlock_96af80; 000c8658 hud::Hud_InitBanks; 000da308 lights::CreatePointLight3; 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000dcf58 loaders::NAVG_LoadFile; 000e0e60 main::startLevel; 000f0994 mobyfunc::MB_InitAnimLayerBuffer; 00163aa0 space::SpaceTransition_LoadWad; 001744f0 vendor::Vendor_PostUpdate; 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 0025cd18 FUN_0025cd18; 0032adf8 mobyupdate_unsorted::UpdateMoby_280; 00382358 mobyupdate_unsorted::UpdateMoby_440; 004bf890 mobyupdate_unsorted::UpdateMoby_933
// callees(1): 005d0140 libc::memset

void fastfunc::FastMemSetZero(undefined8 param_1,undefined4 param_2)

{
  libc::memset(param_1,0,param_2);
  return;
}



//==== 0050027c  ns=fastfunc  size=0x28
// sig: undefined FastMemCopy32(undefined4 dest, undefined4 src, undefined4 size)
// callers(20): 00011530 boot::LoadLanguageHelpMsgs; 00011648 boot::LoadGameplay; 00011b74 boot::Load_Front_End; 00062590 debug::UpdateDebugCamera; 000668d0 draw::UpdateViewContext; 0007d6d0 hero::Hero_MapToMoby; 00081e38 hero::Hero_MapToMobyNonRatchet; 000dce40 loaders::LoadHelp; 000dcf58 loaders::NAVG_LoadFile; 000df408 loaders::LoadAllMobys; 000e6cd8 memcard::memcard_RestoreData; 000e784c memcard::memcard_PrepData; 000f0994 mobyfunc::MB_InitAnimLayerBuffer; 0013e634 pause::PrepareChallengeModeSave; 0014c370 pause::ShowScreenAfterDrekDefeat; 00151e70 respawn::SetSpawnPoint; 001520c8 respawn::RestoreMobyVarList; 001521d0 respawn::RestoreCheckpoint; 001523d8 respawn::SaveCheckpointMobyVar; 002f1c10 mobyupdate_helpers::M217_002f1c10
// callees(1): 005c5ad0 libc::memcpy

void * fastfunc::FastMemCopy32(void *dest,void *src,size_t size)

{
  void *pvVar1;
  
  pvVar1 = libc::memcpy(dest,src,size);
  return pvVar1;
}



//==== 005002a4  ns=fastfunc  size=0x28
// sig: undefined FastMemCopy(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

void * fastfunc::FastMemCopy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = libc::memcpy(param_1,param_2,param_3);
  return pvVar1;
}



//==== 005002cc  ns=fastfunc  size=0x28
// sig: undefined FastMemCopy(undefined4 dest, undefined4 src, undefined4 size)
// callers(19): 0004ff90 camera::BackupCurrentCam; 0005048c camera::Camera_switchToNewCam; 0005393c camera::Camera_resetToFollow; 00067b90 draw::BuildOcclVisibility; 000dc210 loaders::LoadSpaceshipModel; 000dcf58 loaders::NAVG_LoadFile; 000e0230 loaders::ParseNpcChunk; 000e210c map::Map_MoveCacheSlot; 000e2190 map::Map_GetFreeCacheSlotCompact; 000e4c88 map::Map_DecompressMapImage; 0015f6d0 space::???_Space_TransitionDrawPass; 0015fe00 space::ChooseLoadingScreen; 00163aa0 space::SpaceTransition_LoadWad; 00166adc draw::???_Unused_CopyBuffers_e58810; 00166b70 draw::DrawTies; 00174dd0 vuchain::VU1_addDataDirect; 0024d50c FUN_0024d50c; 00288958 FUN_00288958; 004122c8 mobyupdate_helpers::M685_004122c8
// callees(1): 005c5ad0 libc::memcpy

void * fastfunc::FastMemCopy(void *dest,void *src,size_t size)

{
  void *pvVar1;
  
  pvVar1 = libc::memcpy(dest,src,size);
  return pvVar1;
}



//==== 005002f4  ns=fastfunc  size=0x40
// sig: undefined FastMemCopyReverse16(void)
// callers(1): 000dcf58 loaders::NAVG_LoadFile
// callees(0): 

void fastfunc::FastMemCopyReverse16(undefined2 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_3 = param_3 + -2;
      puVar2 = param_2 + 1;
      param_2 = param_2 + 2;
      *param_1 = CONCAT11(*puVar2,uVar1);
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}



//==== 00500334  ns=fastfunc  size=0x54
// sig: undefined FastMemCopyReverse32(void)
// callers(1): 000dcf58 loaders::NAVG_LoadFile
// callees(0): 

void fastfunc::FastMemCopyReverse32(uint *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  
  if (param_3 != 0) {
    do {
      pbVar2 = param_2 + 3;
      param_3 = param_3 + -4;
      pbVar3 = param_2 + 2;
      uVar1 = *param_2;
      puVar4 = param_2 + 1;
      param_2 = param_2 + 4;
      *param_1 = (uint)*pbVar3 << 0x10 | (uint)*pbVar2 << 0x18 | (uint)CONCAT11(*puVar4,uVar1);
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}



//==== 00500388  ns=fastfunc  size=0x3c
// sig: undefined FastMemCopy16(void)
// callers(0): 
// callees(0): 

void fastfunc::FastMemCopy16(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar5 = param_2 + param_3;
  uVar4 = param_1 + param_3;
  iVar3 = 0;
  if (-1 < param_3) {
    do {
      iVar3 = iVar3 + 0x10;
      puVar1 = (undefined4 *)(uVar5 & 0xfffffff0);
      uVar8 = puVar1[2];
      uVar7 = puVar1[1];
      uVar6 = *puVar1;
      puVar2 = (undefined4 *)(uVar4 & 0xfffffff0);
      puVar2[3] = puVar1[3];
      puVar2[2] = uVar8;
      puVar2[1] = uVar7;
      *puVar2 = uVar6;
      uVar5 = uVar5 - 0x10;
      uVar4 = uVar4 - 0x10;
    } while (iVar3 <= param_3);
  }
  return;
}



//==== 005003c4  ns=fastfunc  size=0x4c
// sig: undefined FastMemOr16(void)
// callers(1): 00067b90 draw::BuildOcclVisibility
// callees(0): 

void fastfunc::FastMemOr16(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (0 < param_4) {
    do {
      uVar1 = *param_2;
      param_4 = param_4 + -4;
      uVar2 = *param_3;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      *param_1 = uVar1 | uVar2;
      param_1 = param_1 + 1;
    } while (0 < param_4);
  }
  return;
}



//==== 00500410  ns=fastfunc  size=0x48
// sig: undefined FastMemCmp(void)
// callers(0): 
// callees(0): 

undefined8 fastfunc::FastMemCmp(int *param_1,int *param_2,int param_3)

{
  if (0 < param_3) {
    do {
      if (*param_1 != *param_2) {
        return 0;
      }
      param_3 = param_3 + -4;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (0 < param_3);
  }
  return 1;
}



//==== 00500458  ns=stub  size=0x4
// sig: undefined STUB_00500458(void)
// callers(1): 0017ea4c water::SetFogVars
// callees(0): 

void stub::STUB_00500458(void)

{
  return;
}



//==== 0050045c  ns=stub  size=0x4
// sig: undefined STUB_0050045c(void)
// callers(1): 00166b70 draw::DrawTies
// callees(0): 

void stub::STUB_0050045c(void)

{
  return;
}



//==== 00500460  ns=fastfunc  size=0xe0
// sig: undefined FastUpdateClipFlags(void)
// callers(1): 0017cb20 water::WaterTile_CullAndDrawCell
// callees(0): 

ulonglong fastfunc::FastUpdateClipFlags(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar1 = (int)*param_1 >> 0x1f;
  uVar6 = ((ulonglong)DAT_00902ec0 & 0x3ffffff) << 6;
  uVar2 = (int)param_1[1] >> 0x1f;
  iVar4 = (uVar1 >> 1 ^ *param_1) - uVar1;
  DAT_00902ec0 = (uint)uVar6;
  uVar1 = (int)param_1[2] >> 0x1f;
  iVar5 = (uVar1 >> 1 ^ param_1[2]) - uVar1;
  iVar3 = (uVar2 >> 1 ^ param_1[1]) - uVar2;
  if (0x3f800000 < iVar4) {
    uVar6 = uVar6 | 1;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (iVar4 < -0x3f800000) {
    uVar6 = uVar6 | 2;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (0x3f800000 < iVar3) {
    uVar6 = uVar6 | 4;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (iVar3 < -0x3f800000) {
    uVar6 = uVar6 | 8;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (0x3f800000 < iVar5) {
    uVar6 = uVar6 | 0x10;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (iVar5 < -0x3f800000) {
    uVar6 = uVar6 | 0x20;
    DAT_00902ec0 = (uint)uVar6;
  }
  return uVar6 & 0x3f;
}



//==== 00500540  ns=stub  size=0x4
// sig: undefined STUB_00500540(void)
// callers(0): 
// callees(0): 

void stub::STUB_00500540(void)

{
  return;
}



//==== 00500544  ns=stub  size=0x8
// sig: undefined STUB_00500544(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00500544(void)

{
  return 0;
}



//==== 0050054c  ns=stub  size=0x8
// sig: undefined STUB_0050054c(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_0050054c(void)

{
  return 0;
}



//==== 00500554  ns=fastfunc  size=0x34
// sig: undefined FastAbsF(void)
// callers(0): 
// callees(0): 

void fastfunc::FastAbsF(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = ABS(*param_2);
  param_1[1] = ABS(fVar1);
  param_1[2] = ABS(fVar2);
  param_1[3] = ABS(fVar3);
  return;
}



//==== 00500588  ns=fastfunc  size=0x70
// sig: undefined FastVecClamp(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVecClamp(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = ABS(*param_2);
  fVar4 = ABS(param_2[1]);
  fVar6 = ABS(param_2[2]);
  fVar2 = fVar1;
  if (*param_1 - fVar1 < 0.0) {
    fVar2 = *param_1;
  }
  fVar5 = fVar4;
  if (param_1[1] - fVar4 < 0.0) {
    fVar5 = param_1[1];
  }
  fVar7 = fVar6;
  if (param_1[2] - fVar6 < 0.0) {
    fVar7 = param_1[2];
  }
  fVar3 = -fVar1;
  if (-fVar1 - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = -fVar4;
  if (-fVar4 - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = -fVar6;
  if (-fVar6 - fVar7 < 0.0) {
    fVar2 = fVar7;
  }
  *param_1 = fVar3;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  return;
}



//==== 00500608  ns=fastfunc  size=0x110
// sig: undefined FastVecNormalize(void)
// callers(67): 0001b540 mobyupdate_unsorted::UpdateMoby_184; 000ea1f8 mesh::NormalsToEnvUV; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 001292f0 partupd::UpdatePart_30; 0012c638 partupd::UpdatePart_40; 00184c30 mobyupdate_unsorted::UpdateMoby_1009; 00188368 mobyupdate_unsorted::UpdateMoby_1017; 001e70a8 mobyupd::update1160::M1160_UpdateFlight; 001e8018 mobyupd::update1160::UpdateMoby_1160_JetFighterUnused; 001f1fc0 mobyupdate_unsorted::UpdateMoby_1193; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00216c60 mobyupdate_unsorted::UpdateMoby_1233; 0021a5a0 mobyupdate_unsorted::UpdateMoby_1238; 0021ff90 mobyupd::update1242::M1242_0021ff90; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 00229518 mobyupdate_unsorted::UpdateMoby_1257; 0022a010 mobyupdate_unsorted::UpdateMoby_1258; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 0024eda0 mobyupdate_unsorted::UpdateMoby_a_lot_19; 00262730 mobyupd::update1379::M1379_UpdateFlight; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 0028cf20 mobyupdate_unsorted::UpdateMoby_a_lot_21; 0028d1f8 mobyupdate_unsorted::UpdateMoby_a_lot_8; 0028dfa8 mobyupdate_unsorted::UpdateMoby_1510; 00291568 mobyupdate_unsorted::UpdateMoby_1516
// callees(0): 

void fastfunc::FastVecNormalize(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = 0.0;
  fVar5 = *param_2;
  fVar8 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar7 = fVar4;
  fVar6 = fVar4;
  if (SQRT(fVar8) != 0.0) {
    fVar7 = 1.0 / SQRT(fVar8);
    fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar4 = fVar2 * fVar7;
    fVar6 = fVar1 * fVar7;
    fVar7 = fVar3 * fVar7;
  }
  fVar1 = fVar7 * param_2[2] + fVar4 * fVar5 + fVar6 * param_2[1];
  if (fVar1 <= 0.0) {
    fVar2 = param_2[1];
    fVar1 = fVar1 * 2.0;
    fVar3 = param_2[2];
    param_1[3] = param_2[3];
    *param_1 = -(fVar1 * fVar4 - fVar5);
    param_1[1] = -(fVar1 * fVar6 - fVar2);
    param_1[2] = -(fVar1 * fVar7 - fVar3);
  }
  else {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}



//==== 00500720  ns=fastfunc  size=0x98
// sig: undefined FastVecFromPackedBits(void)
// callers(1): 001135f0 mobyutil::MB_decompressVector
// callees(0): 

void fastfunc::FastVecFromPackedBits(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar4 = ZEXT416(0xfffffff0);
  auVar6 = ZEXT416(0xfffffff8);
  auVar3 = loadVectorLeftIndexed(in_r0,0x500718);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8._0_4_ = param_2;
  auVar8._4_4_ = param_2;
  auVar8._8_4_ = param_2;
  auVar8._12_4_ = param_2;
  auVar3 = vectorShiftRightWord(auVar8,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60);
  auVar5 = vectorRotateLeftIntegerWord
                     (auVar8,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
  auVar7 = vectorRotateLeftIntegerWord
                     (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
  auVar4 = vectorConvertFromUnsignedFixedPointWord(auVar3,0);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = (uint)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,param_1);
  *(undefined4 *)(uVar2 & 0xfffffffc) = uVar1;
  auVar4 = loadVectorLeftIndexed(4,0x500718);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar6 = vectorLogicalAnd(auVar5,auVar4);
  auVar3 = vectorLogicalAnd(auVar7,auVar4);
  auVar4 = vectorLogicalAnd(auVar8,auVar4);
  auVar6 = vectorConvertFromUnsignedFixedPointWord(auVar6,0);
  auVar8 = vectorConvertFromUnsignedFixedPointWord(auVar3,0);
  auVar3 = vectorConvertFromUnsignedFixedPointWord(auVar4,0);
  auVar4 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,4,param_1);
  *(undefined4 *)(uVar2 + 4 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,8,param_1);
  *(undefined4 *)(uVar2 + 8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar3,0xc,param_1);
  *(undefined4 *)(uVar2 + 0xc & 0xfffffffc) = uVar1;
  return;
}



//==== 005007d8  ns=fastfunc  size=0x7c
// sig: undefined FastVecToPackedChars(Vec4 * param_1)
// callers(1): 001134c8 mobyutil::MB_compressVector
// callees(0): 

uint fastfunc::FastVecToPackedChars(Vec4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_c;
  
  uStack_c = (uint)(longlong)(param_1->x + 0.5);
  uVar1 = uStack_c << 0x18;
  uStack_c = (uint)(longlong)(param_1->y + 0.5);
  uVar2 = uStack_c;
  uStack_c = (uint)(longlong)(param_1->z + 0.5);
  uVar3 = uStack_c;
  uStack_c = (uint)(longlong)(param_1->w + 0.5);
  return uStack_c & 0xff | (uVar3 & 0xff) << 8 | (uVar2 & 0xff) << 0x10 | uVar1;
}



//==== 00500854  ns=fastfunc  size=0x7c
// sig: undefined FastVecFromPackedShorts(Vec4 * param_1, undefined8 param_2)
// callers(0): 
// callees(0): 

void fastfunc::FastVecFromPackedShorts(Vec4 *param_1,ulonglong param_2)

{
  param_1->x = (float)(param_2 >> 0x30);
  param_1->y = (float)(param_2 >> 0x20 & 0xffff);
  param_1->z = (float)(param_2 >> 0x10 & 0xffff);
  param_1->w = (float)(param_2 & 0xffff);
  return;
}



//==== 005008d0  ns=fastfunc  size=0x80
// sig: undefined FastVecFromSignedShort(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVecFromSignedShort(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x40;
  *(ulonglong *)lVar1 = ZEXT48(&stack0x00000000);
  ((ulonglong *)lVar1)[6] = param_2;
  auVar4 = ZEXT416(0xfffffff0);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar5 = loadVectorLeftIndexed(0x30,lVar1);
  auVar6 = loadVectorLeftIndexed(0x32,lVar1);
  auVar5 = vectorShiftRightAlgebraicWord(auVar5,auVar4);
  auVar7 = loadVectorLeftIndexed(0x34,lVar1);
  auVar6 = vectorShiftRightAlgebraicWord(auVar6,auVar4);
  auVar8 = loadVectorLeftIndexed(0x36,lVar1);
  auVar7 = vectorShiftRightAlgebraicWord(auVar7,auVar4);
  auVar5 = vectorConvertFromSignedFixedPointWord(auVar5,0);
  auVar4 = vectorShiftRightAlgebraicWord(auVar8,auVar4);
  auVar6 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar7,0);
  auVar7 = vectorConvertFromSignedFixedPointWord(auVar4,0);
  auVar4 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar3 = (uint)param_1;
  uVar2 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,param_1);
  *(undefined4 *)(uVar3 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,param_1);
  *(undefined4 *)(uVar3 + 4 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed
                    (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,8,param_1);
  *(undefined4 *)(uVar3 + 8 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed
                    (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0xc,param_1);
  *(undefined4 *)(uVar3 + 0xc & 0xfffffffc) = uVar2;
  return;
}



//==== 00500950  ns=fastfunc  size=0x6c
// sig: undefined FastVecMultAndPack(undefined8 param_1, Vec4 * param_2)
// callers(1): 00091090 hero::Hero_BuildPoseFromJoints
// callees(0): 

ulonglong fastfunc::FastVecMultAndPack(double param_1,Vec4 *param_2)

{
  return (ulonglong)(uint)(int)((double)param_2->w * param_1) & 0xffff |
         ((ulonglong)(uint)(int)((double)param_2->z * param_1) & 0xffff) << 0x10 |
         ((ulonglong)(uint)(int)((double)param_2->y * param_1) & 0xffff) << 0x20 |
         (ulonglong)(uint)(int)((double)param_2->x * param_1) << 0x30;
}



//==== 005009c8  ns=fastfunc  size=0x7c
// sig: undefined FastVecFromPackedChar(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVecFromPackedChar(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5 = ZEXT416(0xfffffff6);
  auVar3 = loadVectorLeftIndexed(in_r0,0x5009bc);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3._0_4_ = param_2;
  auVar3._4_4_ = param_2;
  auVar3._8_4_ = param_2;
  auVar3._12_4_ = param_2;
  auVar5 = vectorRotateLeftIntegerWord
                     (auVar3,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60);
  auVar6 = vectorLogicalAnd(auVar3,auVar4);
  auVar5 = vectorLogicalAnd(auVar5,auVar4);
  auVar4 = vectorConvertFromUnsignedFixedPointWord(auVar6,0);
  auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar5,0);
  uVar2 = (uint)param_1;
  uVar1 = storeVectorElementWordIndexed(auVar4,0,param_1);
  *(undefined4 *)(uVar2 & 0xfffffffc) = uVar1;
  auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,param_1);
  *(undefined4 *)(uVar2 + 4 & 0xfffffffc) = uVar1;
  auVar5 = loadVectorLeftIndexed(4,0x5009bc);
  auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = vectorShiftRightWord(auVar3,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60);
  auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar5,0);
  auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,8,param_1);
  *(undefined4 *)(uVar2 + 8 & 0xfffffffc) = uVar1;
  return;
}



//==== 00500a44  ns=fastfunc  size=0x44
// sig: undefined FastFindChar(void)
// callers(0): 
// callees(0): 

int fastfunc::FastFindChar(char param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*param_2 == -1) {
      return -1;
    }
    if (*param_2 == param_1) break;
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  }
  return iVar1;
}



//==== 00500a88  ns=fastfunc  size=0x30
// sig: undefined FastSumChars(void)
// callers(1): 0015be68 sound::sound_Update
// callees(0): 

int fastfunc::FastSumChars(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      bVar1 = *param_1;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + (uint)bVar1;
    } while (0 < param_2);
  }
  return iVar2;
}



//==== 00500ab8  ns=stub  size=0x8
// sig: undefined STUB_00500ab8(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00500ab8(void)

{
  return 0;
}



//==== 00500ac0  ns=stub  size=0x8
// sig: undefined STUB_00500ac0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00500ac0(void)

{
  return 0;
}



//==== 00500ac8  ns=stub  size=0x4
// sig: undefined STUB_00500ac8(void)
// callers(0): 
// callees(0): 

void stub::STUB_00500ac8(void)

{
  return;
}



//==== 00500acc  ns=fastfunc  size=0x2c
// sig: undefined FastMtx3Identity(void)
// callers(0): 
// callees(0): 

void fastfunc::FastMtx3Identity(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((uint)param_1 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *param_1 = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[10] = 0x3f800000;
  return;
}



//==== 00500af8  ns=fastfunc  size=0x38
// sig: undefined FastMtx4Identity(float * param_1)
// callers(55): 000613a0 debug::DebugCamera; 00065490 draw::ScreenPosFromWorldSpace; 0008b778 hero::Hero_UpdateMovement; 000a64d0 hero::Hero_HoverboardBoostPads; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00110e18 mobyutil::MB_MtxFromDir; 00113288 mobyutil::???_MB_BuildScaledRotMtx; 00153c60 skyfunc::SkyLevelNone; 00153e00 skyfunc::SkyLevel_00; 00154208 skyfunc::SkyLevel_01; 001545b8 skyfunc::SkyLevel_02; 00154e28 skyfunc::SkyLevel_03; 00155198 skyfunc::SkyLevel_04; 001554a0 skyfunc::SkyLevel_05; 00155788 skyfunc::SkyLevel_06; 00156148 skyfunc::SkyLevel_07; 00156550 skyfunc::SkyLevel_08; 00156840 skyfunc::SkyLevel_09; 00156bd8 skyfunc::SkyLevel_10; 00157030 skyfunc::SkyLevel_11; 001573d0 skyfunc::SkyLevel_12; 0015774c skyfunc::SkyLevel_13; 00157a30 skyfunc::SkyLevel_14; 00157d98 skyfunc::SkyLevel_15; 001580b8 skyfunc::SkyLevel_16
// callees(0): 

void fastfunc::FastMtx4Identity(float *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((uint)param_1 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  param_1[0xf] = 1.0;
  param_1[10] = 1.0;
  param_1[5] = 1.0;
  *param_1 = 1.0;
  return;
}



//==== 00500b30  ns=fastfunc  size=0x34
// sig: undefined FastMtxScaleIdentity(void)
// callers(6): 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 001942f4 mobyupdate_helpers::M1038_001942f4; 001ae5f0 mobyupdate_helpers::M1068_001ae5f0; 001d5cc0 mobyupdate_unsorted::UpdateMoby_1123; 001d64b0 mobyupdate_helpers::M1124_001d64b0; 0050c020 FUN_0050c020
// callees(0): 

void fastfunc::FastMtxScaleIdentity(double param_1,float *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((uint)param_2 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  param_2[0xf] = (float)param_1;
  param_2[10] = (float)param_1;
  param_2[5] = (float)param_1;
  *param_2 = (float)param_1;
  return;
}



//==== 00500b64  ns=fastfunc  size=0x140
// sig: undefined FastEulerToMtx(void)
// callers(61): 0003ace0 camera::camera14::InitCamera_14; 0008e170 hero::Hero_UpdateFiringAnimLayer; 000a0c38 hero::Hero_Warp; 000a1698 hero::Hero_ThrowWrench; 00116d1c mobyutil::MB_StoreChildOffsets; 0011a560 mobyutil::MB_SpawnDebrisMoby; 00150e88 pause::MenuHero_MobyUpdateF; 001521d0 respawn::RestoreCheckpoint; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene; 0016da88 vendor::Vendor_PreUpdate; 00188968 mobyupdate_unsorted::UpdateMoby_1021; 0018cd58 mobyupdate_helpers::M1302_0018cd58; 001a5360 mobyupdate_helpers::M1051_001a5360; 001bc8c8 mobyupdate_helpers::M1099_001bc8c8; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001daac8 mobyupdate_helpers::M1135_001daac8; 001dd210 mobyupdate_helpers::M1140_001dd210; 001e1120 mobyupdate_helpers::M1156_001e1120; 001e29f8 mobyupdate_helpers::M1157_001e29f8; 001e70a8 mobyupd::update1160::M1160_UpdateFlight; 0021ff90 mobyupd::update1242::M1242_0021ff90; 002403a8 FUN_002403a8; 002409e0 mobyupdate_helpers::M16_002409e0; 00240f38 mobyupdate_helpers::M16_00240f38
// callees(1): 005dd914 mathfunc::SinCos

void fastfunc::FastEulerToMtx(float *param_1,float *param_2)

{
  undefined8 uVar1;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = mathfunc::SinCos((double)*param_2,param_1,0);
  dVar7 = extraout_f1;
  uVar1 = mathfunc::SinCos((double)*param_2,uVar1,1);
  dVar6 = extraout_f1_00;
  uVar1 = mathfunc::SinCos((double)param_2[1],uVar1,0);
  dVar5 = extraout_f1_01;
  uVar1 = mathfunc::SinCos((double)param_2[1],uVar1,1);
  dVar4 = extraout_f1_02;
  uVar1 = mathfunc::SinCos((double)param_2[2],uVar1,0);
  dVar3 = extraout_f1_03;
  dVar2 = (double)mathfunc::SinCos((double)param_2[2],uVar1,1);
  *param_1 = (float)(dVar4 * dVar2);
  param_1[1] = (float)(dVar4 * dVar3);
  param_1[2] = (float)-dVar5;
  param_1[6] = (float)(dVar4 * dVar7);
  param_1[10] = (float)(dVar6 * dVar4);
  param_1[4] = (float)(dVar7 * (double)(float)(dVar2 * dVar5) - (double)(float)(dVar6 * dVar3));
  param_1[5] = (float)(dVar7 * (double)(float)(dVar5 * dVar3) + (double)(float)(dVar6 * dVar2));
  param_1[8] = (float)(dVar6 * (double)(float)(dVar2 * dVar5) + (double)(float)(dVar7 * dVar3));
  param_1[9] = (float)(dVar6 * (double)(float)(dVar5 * dVar3) - (double)(float)(dVar2 * dVar7));
  return;
}



//==== 00500ca4  ns=fastfunc  size=0x164
// sig: undefined FastEulerToMtx1(void)
// callers(115): 000200b0 mobyupdate_helpers::M458_SpawnRocket; 00034cf8 camera::camera1::Cam1_InitPosRot; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00048438 camera::camera5::InitCamera_5; 00048510 camera::camera5::UpdateMobyDrivenCam; 00048a20 camera::camera6::???_Cam6_ClampAndBuildMtx; 00048b00 camera::camera6::Cam6_SetTarget; 00048c78 camera::camera6::Cam6_ResetParams; 00048df8 camera::camera6::Cam6_Update; 000613a0 debug::DebugCamera; 00062590 debug::UpdateDebugCamera; 0007d200 hero::Hero_PosEffects; 0007d9b8 hero::Hero_GetHeroRelativeGroundAngs; 00084830 hero::Hero_RelativeZComponent; 000886d0 hero::Hero_AddRelativeZ; 00089480 hero::Hero_RelativeXYComponent; 0008af28 hero::???_Hero_UpdateGroundProbe; 0008b778 hero::Hero_UpdateMovement; 0008c3d0 hero::HeroUpdateNonRatchet; 000965bc hero::Hero_RotateAroundPoint; 0009aab0 hero::Hero_RelativeZAngle; 0009b9ec hero::Hero_RotateByEuler; 0009ba88 hero::Hero_Turn3D; 0009c1b0 hero::Hero_ThrustToMotion; 0009cf98 hero::Hero_ForwardThrust
// callees(1): 005dd914 mathfunc::SinCos

void fastfunc::FastEulerToMtx1(float *param_1,float *param_2)

{
  undefined8 uVar1;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = mathfunc::SinCos((double)*param_2,param_1,0);
  dVar7 = extraout_f1;
  uVar1 = mathfunc::SinCos((double)*param_2,uVar1,1);
  dVar6 = extraout_f1_00;
  uVar1 = mathfunc::SinCos((double)param_2[1],uVar1,0);
  dVar5 = extraout_f1_01;
  uVar1 = mathfunc::SinCos((double)param_2[1],uVar1,1);
  dVar4 = extraout_f1_02;
  uVar1 = mathfunc::SinCos((double)param_2[2],uVar1,0);
  dVar3 = extraout_f1_03;
  dVar2 = (double)mathfunc::SinCos((double)param_2[2],uVar1,1);
  param_1[3] = 0.0;
  *param_1 = (float)(dVar4 * dVar2);
  param_1[1] = (float)(dVar4 * dVar3);
  param_1[2] = (float)-dVar5;
  param_1[7] = 0.0;
  param_1[6] = (float)(dVar4 * dVar7);
  param_1[10] = (float)(dVar6 * dVar4);
  param_1[4] = (float)(dVar7 * (double)(float)(dVar2 * dVar5) - (double)(float)(dVar6 * dVar3));
  param_1[5] = (float)(dVar7 * (double)(float)(dVar5 * dVar3) + (double)(float)(dVar6 * dVar2));
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[8] = (float)(dVar6 * (double)(float)(dVar2 * dVar5) + (double)(float)(dVar7 * dVar3));
  param_1[0xd] = 0.0;
  param_1[9] = (float)(dVar6 * (double)(float)(dVar5 * dVar3) - (double)(float)(dVar2 * dVar7));
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return;
}



//==== 00500e08  ns=fastfunc  size=0x164
// sig: undefined FastEulerToMtx2(undefined4 outMtx, undefined4 eulerAngles)
// callers(19): 00086df8 hero::Hero_Turn3D_XYZ; 0010c1e8 mobyutil::MB_MtxToEuler; 00110e18 mobyutil::MB_MtxFromDir; 00153e00 skyfunc::SkyLevel_00; 00154208 skyfunc::SkyLevel_01; 00154e28 skyfunc::SkyLevel_03; 00155198 skyfunc::SkyLevel_04; 001554a0 skyfunc::SkyLevel_05; 00156148 skyfunc::SkyLevel_07; 00156550 skyfunc::SkyLevel_08; 00156840 skyfunc::SkyLevel_09; 00156bd8 skyfunc::SkyLevel_10; 00157030 skyfunc::SkyLevel_11; 001573d0 skyfunc::SkyLevel_12; 00157a30 skyfunc::SkyLevel_14; 001580b8 skyfunc::SkyLevel_16; 00158c70 skyfunc::SkyLevel_18; 00159118 skyfunc::SkyLevel_19; 00159e88 space::Space_DrawSkyShell
// callees(1): 005dd914 mathfunc::SinCos

void fastfunc::FastEulerToMtx2(float *outMtx,float *eulerAngles)

{
  undefined8 uVar1;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = mathfunc::SinCos((double)*eulerAngles,outMtx,0);
  dVar7 = extraout_f1;
  uVar1 = mathfunc::SinCos((double)*eulerAngles,uVar1,1);
  dVar6 = extraout_f1_00;
  uVar1 = mathfunc::SinCos((double)eulerAngles[1],uVar1,0);
  dVar5 = extraout_f1_01;
  uVar1 = mathfunc::SinCos((double)eulerAngles[1],uVar1,1);
  dVar4 = extraout_f1_02;
  uVar1 = mathfunc::SinCos((double)eulerAngles[2],uVar1,0);
  dVar3 = extraout_f1_03;
  dVar2 = (double)mathfunc::SinCos((double)eulerAngles[2],uVar1,1);
  outMtx[3] = 0.0;
  *outMtx = (float)(dVar4 * dVar2);
  outMtx[1] = (float)(dVar4 * dVar3);
  outMtx[2] = (float)-dVar5;
  outMtx[7] = 0.0;
  outMtx[6] = (float)(dVar4 * dVar7);
  outMtx[10] = (float)(dVar6 * dVar4);
  outMtx[4] = (float)(dVar7 * (double)(float)(dVar2 * dVar5) - (double)(float)(dVar6 * dVar3));
  outMtx[5] = (float)(dVar7 * (double)(float)(dVar5 * dVar3) + (double)(float)(dVar6 * dVar2));
  outMtx[0xb] = 0.0;
  outMtx[0xc] = 0.0;
  outMtx[8] = (float)(dVar6 * (double)(float)(dVar2 * dVar5) + (double)(float)(dVar7 * dVar3));
  outMtx[0xd] = 0.0;
  outMtx[9] = (float)(dVar6 * (double)(float)(dVar5 * dVar3) - (double)(float)(dVar2 * dVar7));
  outMtx[0xe] = 0.0;
  outMtx[0xf] = 1.0;
  return;
}



//==== 00500f6c  ns=fastfunc  size=0x3c
// sig: undefined FastMtxCopyNoTranslate(void)
// callers(29): 00053550 camera::UpdateCamera; 000613a0 debug::DebugCamera; 0008af28 hero::???_Hero_UpdateGroundProbe; 000a1698 hero::Hero_ThrowWrench; 000f1038 mobyfunc::GetBoneTransformations; 000f1364 mobyfunc::GetMobyJointsWorldMtx; 0010bf98 mobyutil::MB_TransformToQuat; 00112678 mobyutil::MB_PlatformGetDelta; 00128438 partupd::SpawnPart_28; 001db948 mobyupdate_helpers::M1138_001db948; 001e8018 mobyupd::update1160::UpdateMoby_1160_JetFighterUnused; 00252318 mobyupdate_helpers::M1346_00252318; 0025e1a8 mobyupd::update1379::M1379_0025e1a8; 00269d18 mobyupdate_helpers::M1394_00269d18; 002aeb68 mobyupdate_helpers::M172_002aeb68; 002c11e8 mobyupdate_helpers::M1827_002c11e8; 0032f620 mobyupdate_helpers::M291_0032f620; 003411d0 mobyupdate_helpers::M319_003411d0; 0034e230 mobyupdate_helpers::M342_0034e230; 00359ad0 mobyupdate_helpers::M386_00359ad0; 0036cab0 mobyupdate_unsorted::UpdateMoby_426; 00402750 mobyupdate_helpers::M654_00402750; 0040ac50 mobyupdate_unsorted::UpdateMoby_669; 0045aa28 mobyupdate_helpers::M786_0045aa28; 00481ca8 mobyupdate_helpers::M841_00481ca8
// callees(0): 

void fastfunc::FastMtxCopyNoTranslate(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar1 = (undefined4 *)(param_2 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_2 + 0x10 & 0xfffffff0);
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  uVar7 = puVar2[1];
  uVar6 = *puVar2;
  puVar2 = (undefined4 *)(param_2 + 0x20 & 0xfffffff0);
  uVar13 = puVar2[3];
  uVar12 = puVar2[2];
  uVar11 = puVar2[1];
  uVar10 = *puVar2;
  puVar2 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  puVar1[1] = uVar11;
  *puVar1 = uVar10;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}



//==== 00500fa8  ns=fastfunc  size=0x24
// sig: undefined FastApplyTransform(Vec4 * p1, Vec4 * p2)
// callers(57): 0002ffe8 camera0::SetCam0DefaultPosRot; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00048438 camera::camera5::InitCamera_5; 00048510 camera::camera5::UpdateMobyDrivenCam; 00048a20 camera::camera6::???_Cam6_ClampAndBuildMtx; 00048b00 camera::camera6::Cam6_SetTarget; 00048c78 camera::camera6::Cam6_ResetParams; 00048df8 camera::camera6::Cam6_Update; 00051af8 camera::Camera_BlendCamsPosQuat; 000613a0 debug::DebugCamera; 00080ee0 hero::Hero_AttachRatchetToHeroBone; 0008af28 hero::???_Hero_UpdateGroundProbe; 0008c3d0 hero::HeroUpdateNonRatchet; 00090a00 hero::Hero_PushGadgetMtxHistory; 000914e0 hero::Hero_UpdateGadgetMobys; 000aa8c8 hero::???_Hero_SnapMobyToBonePose; 0010bf98 mobyutil::MB_TransformToQuat; 00110e18 mobyutil::MB_MtxFromDir; 00117f38 mobyutil::MB_AttachMobyToJoint; 00150660 pause::MenuHero_MobyUpdateA; 0015087c pause::MenuHero_MobyUpdateB; 001509b8 pause::MenuHero_MobyUpdateC; 00150bf4 pause::MenuHero_MobyUpdateD; 00150d78 pause::MenuHero_MobyUpdateE; 00150e88 pause::MenuHero_MobyUpdateF
// callees(0): 

void fastfunc::FastApplyTransform(Vec4 *p1,Vec4 *p2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar1 = (undefined4 *)((uint)p2 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)((uint)(p2 + 1) & 0xfffffff0);
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  uVar7 = puVar2[1];
  uVar6 = *puVar2;
  puVar2 = (undefined4 *)((uint)(p2 + 2) & 0xfffffff0);
  uVar13 = puVar2[3];
  uVar12 = puVar2[2];
  uVar11 = puVar2[1];
  uVar10 = *puVar2;
  puVar2 = (undefined4 *)((uint)p1 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)((uint)(p1 + 1) & 0xfffffff0);
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  puVar1 = (undefined4 *)((uint)(p1 + 2) & 0xfffffff0);
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  puVar1[1] = uVar11;
  *puVar1 = uVar10;
  return;
}



//==== 00500fcc  ns=fastfunc  size=0x58
// sig: undefined FastMtx3Transpose(void)
// callers(3): 00501ee8 fastfunc::FastQuaternionVecTransformInverse; 00501f50 fastfunc::FastQuaternionVecTransform; 00502030 fastfunc::FastQuaternionSlerp
// callees(0): 

void fastfunc::FastMtx3Transpose(double param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = param_3[4];
  uVar2 = param_3[8];
  uVar3 = param_3[1];
  uVar4 = param_3[5];
  uVar5 = param_3[9];
  uVar6 = param_3[2];
  uVar7 = param_3[6];
  uVar8 = param_3[10];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = (float)param_1;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  param_2[7] = (float)param_1;
  param_2[8] = uVar6;
  param_2[9] = uVar7;
  param_2[10] = uVar8;
  param_2[0xb] = (float)param_1;
  return;
}



//==== 00501024  ns=fastfunc  size=0x9c
// sig: undefined FastMtx4Transpose(void)
// callers(0): 
// callees(0): 

void fastfunc::FastMtx4Transpose(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar1 = param_2[4];
  uVar2 = param_2[8];
  uVar3 = param_2[0xc];
  uVar4 = param_2[1];
  uVar5 = param_2[5];
  uVar6 = param_2[9];
  uVar7 = param_2[0xd];
  uVar8 = param_2[2];
  uVar9 = param_2[6];
  uVar10 = param_2[10];
  uVar11 = param_2[0xe];
  uVar12 = param_2[3];
  uVar13 = param_2[7];
  uVar14 = param_2[0xb];
  uVar15 = param_2[0xf];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar13;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar15;
  return;
}



//==== 005010c0  ns=fastfunc  size=0x70
// sig: undefined FastNormalizeRMtx4(void)
// callers(55): 0007d9b8 hero::Hero_GetHeroRelativeGroundAngs; 00089480 hero::Hero_RelativeXYComponent; 0008b778 hero::Hero_UpdateMovement; 000a64d0 hero::Hero_HoverboardBoostPads; 000aaec0 hero::HandleHeroMovement; 000f06f0 mobyfunc::MB_SetCollPrimFromWorld; 0010a83c mobyutil::???_MB_GetNormalizedMtxElem; 00110e18 mobyutil::MB_MtxFromDir; 001120d4 mobyutil::MB_TransformBetweenFrames; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00112900 mobyutil::MB_GetOrientation; 00116d1c mobyutil::MB_StoreChildOffsets; 001349f0 partupd::SpawnPart_74; 0015be68 sound::sound_Update; 00187a68 mobyupdate_helpers::M1282_00187a68; 001b3e18 mobyupdate_unsorted::UpdateMoby_1070; 001b5860 mobyupdate_unsorted::UpdateMoby_1075; 001bddf0 mobyupdate_unsorted::UpdateMoby_1100; 001ee3a8 mobyupdate_unsorted::UpdateMoby_1178; 001fff88 mobyupdate_unsorted::UpdateMoby_1209; 0020e108 mobyupdate_helpers::M1225_0020e108; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 0025df48 mobyupdate_unsorted::UpdateMoby_1378; 0025fbd0 mobyupd::update1379::M1379_ScanTargets; 002708f0 mobyupdate_unsorted::UpdateMoby_1410
// callees(0): 

void fastfunc::FastNormalizeRMtx4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = param_2[4];
  uVar2 = param_2[8];
  uVar3 = param_2[1];
  uVar4 = param_2[5];
  uVar5 = param_2[9];
  uVar6 = param_2[2];
  uVar7 = param_2[6];
  uVar8 = param_2[10];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = 0;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  return;
}



//==== 00501130  ns=fastfunc  size=0x58
// sig: undefined FastMtx4ToMtx4Scale(void)
// callers(0): 
// callees(0): 

void fastfunc::FastMtx4ToMtx4Scale(double param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = param_3[4];
  uVar2 = param_3[8];
  uVar3 = param_3[1];
  uVar4 = param_3[5];
  uVar5 = param_3[9];
  uVar6 = param_3[2];
  uVar7 = param_3[6];
  uVar8 = param_3[10];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = (float)param_1;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  param_2[7] = (float)param_1;
  param_2[8] = uVar6;
  param_2[9] = uVar7;
  param_2[10] = uVar8;
  param_2[0xb] = (float)param_1;
  return;
}



//==== 00501188  ns=fastfunc  size=0xc4
// sig: undefined FastMtxScale(void)
// callers(3): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00113288 mobyutil::???_MB_BuildScaledRotMtx; 00293c48 mobyupdate_unsorted::UpdateMoby_153
// callees(0): 

void fastfunc::FastMtxScale(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = (float)((double)*param_3 * param_1);
  param_2[1] = (float)((double)fVar1 * param_1);
  param_2[2] = (float)((double)fVar2 * param_1);
  param_2[3] = (float)((double)fVar3 * param_1);
  fVar1 = param_3[5];
  fVar2 = param_3[6];
  fVar3 = param_3[7];
  param_2[4] = (float)((double)param_3[4] * param_1);
  param_2[5] = (float)((double)fVar1 * param_1);
  param_2[6] = (float)((double)fVar2 * param_1);
  param_2[7] = (float)((double)fVar3 * param_1);
  fVar1 = param_3[9];
  fVar2 = param_3[10];
  fVar3 = param_3[0xb];
  param_2[8] = (float)((double)param_3[8] * param_1);
  param_2[9] = (float)((double)fVar1 * param_1);
  param_2[10] = (float)((double)fVar2 * param_1);
  param_2[0xb] = (float)((double)fVar3 * param_1);
  fVar1 = param_3[0xd];
  fVar2 = param_3[0xe];
  fVar3 = param_3[0xf];
  param_2[0xc] = (float)((double)param_3[0xc] * param_1);
  param_2[0xd] = (float)((double)fVar1 * param_1);
  param_2[0xe] = (float)((double)fVar2 * param_1);
  param_2[0xf] = (float)((double)fVar3 * param_1);
  return;
}



//==== 0050124c  ns=fastfunc  size=0x64
// sig: undefined FastVecMtx3Mult(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVecMtx3Mult(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_3[1];
  fVar2 = param_2[5];
  fVar3 = *param_3;
  fVar4 = param_2[6];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_3[2];
  fVar8 = param_2[9];
  fVar9 = param_2[10];
  *param_1 = param_2[8] * fVar7 + *param_2 * fVar3 + param_2[4] * fVar1;
  param_1[1] = fVar8 * fVar7 + fVar5 * fVar3 + fVar2 * fVar1;
  param_1[2] = fVar9 * fVar7 + fVar6 * fVar3 + fVar4 * fVar1;
  return;
}



//==== 005012b0  ns=fastfunc  size=0x80
// sig: undefined FastVecMtx4Mult(void)
// callers(6): 005014d4 fastfunc::FastVecMtx4MultBatch3; 00501568 fastfunc::FastVecMtx4MultBatch3InPlace; 00501e8c fastfunc::FastQuaternionVecTransform; 00501ee8 fastfunc::FastQuaternionVecTransformInverse; 00501f50 fastfunc::FastQuaternionVecTransform; 00502030 fastfunc::FastQuaternionSlerp
// callees(0): 

void fastfunc::FastVecMtx4Mult(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_3[1];
  fVar2 = param_2[5];
  fVar3 = *param_3;
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_3[2];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *param_1 = param_2[8] * fVar9 + *param_2 * fVar3 + param_2[4] * fVar1;
  param_1[1] = fVar10 * fVar9 + fVar6 * fVar3 + fVar2 * fVar1;
  param_1[2] = fVar11 * fVar9 + fVar7 * fVar3 + fVar4 * fVar1;
  param_1[3] = fVar12 * fVar9 + fVar8 * fVar3 + fVar5 * fVar1;
  return;
}



//==== 00501330  ns=fastfunc  size=0x7c
// sig: undefined FastVecMtx3MultTranslate(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVecMtx3MultTranslate(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_3[1];
  fVar2 = param_2[5];
  fVar3 = *param_3;
  fVar4 = param_2[6];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_3[2];
  fVar8 = param_2[9];
  fVar9 = param_2[10];
  fVar10 = param_2[0xd];
  fVar11 = param_2[0xe];
  *param_1 = param_2[8] * fVar7 + *param_2 * fVar3 + param_2[4] * fVar1 + param_2[0xc];
  param_1[1] = fVar8 * fVar7 + fVar5 * fVar3 + fVar2 * fVar1 + fVar10;
  param_1[2] = fVar9 * fVar7 + fVar6 * fVar3 + fVar4 * fVar1 + fVar11;
  return;
}



//==== 005013ac  ns=fastfunc  size=0x84
// sig: undefined FastVec3MtxMultTranslateW(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVec3MtxMultTranslateW(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_2[4];
  fVar2 = param_3[1];
  fVar3 = param_2[5];
  fVar4 = *param_2;
  fVar5 = *param_3;
  fVar6 = param_2[6];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[8];
  fVar10 = param_3[2];
  fVar11 = param_2[9];
  fVar12 = param_2[10];
  fVar13 = param_2[0xc];
  fVar14 = param_2[0xd];
  fVar15 = param_2[0xe];
  param_1[3] = 1.0;
  *param_1 = fVar9 * fVar10 + fVar4 * fVar5 + fVar1 * fVar2 + fVar13;
  param_1[1] = fVar11 * fVar10 + fVar7 * fVar5 + fVar3 * fVar2 + fVar14;
  param_1[2] = fVar12 * fVar10 + fVar8 * fVar5 + fVar6 * fVar2 + fVar15;
  return;
}



//==== 00501430  ns=fastfunc  size=0xa4
// sig: undefined FastVecMtx4MultSingle(void)
// callers(1): 0050162c fastfunc::FastVecMtx4Mul
// callees(0): 

void fastfunc::FastVecMtx4MultSingle(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_3[1];
  fVar2 = param_2[5];
  fVar3 = *param_3;
  fVar4 = param_2[6];
  fVar5 = param_2[1];
  fVar6 = param_2[7];
  fVar7 = param_2[2];
  fVar8 = param_3[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_3[3];
  fVar13 = param_2[0xb];
  fVar14 = param_2[0xd];
  fVar15 = param_2[0xe];
  fVar16 = param_2[0xf];
  *param_1 = param_2[0xc] * fVar12 + param_2[8] * fVar8 + *param_2 * fVar3 + param_2[4] * fVar1;
  param_1[1] = fVar14 * fVar12 + fVar10 * fVar8 + fVar5 * fVar3 + fVar2 * fVar1;
  param_1[2] = fVar15 * fVar12 + fVar11 * fVar8 + fVar7 * fVar3 + fVar4 * fVar1;
  param_1[3] = fVar16 * fVar12 + fVar13 * fVar8 + fVar9 * fVar3 + fVar6 * fVar1;
  return;
}



//==== 005014d4  ns=fastfunc  size=0x94
// sig: undefined FastVecMtx4MultBatch3(void)
// callers(9): 000a1698 hero::Hero_ThrowWrench; 00150e88 pause::MenuHero_MobyUpdateF; 002409e0 mobyupdate_helpers::M16_002409e0; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 0028d1f8 mobyupdate_unsorted::UpdateMoby_a_lot_8; 002b2590 mobyupdate_unsorted::UpdateMoby_176; 003e82b0 mobyupdate_helpers::M625_003e82b0; 003ec168 mobyupdate_helpers::M629_003ec168; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}
// callees(1): 005012b0 fastfunc::FastVecMtx4Mult

void fastfunc::FastVecMtx4MultBatch3(uint param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FastVecMtx4Mult(&uStack_50);
  FastVecMtx4Mult(&uStack_40,param_2,param_3 + 0x10);
  FastVecMtx4Mult(&uStack_30,param_2,param_3 + 0x20);
  puVar1 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar1[3] = uStack_44;
  puVar1[2] = uStack_48;
  puVar1[1] = uStack_4c;
  *puVar1 = uStack_50;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = uStack_34;
  puVar1[2] = uStack_38;
  puVar1[1] = uStack_3c;
  *puVar1 = uStack_40;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = uStack_24;
  puVar1[2] = uStack_28;
  puVar1[1] = uStack_2c;
  *puVar1 = uStack_30;
  return;
}



//==== 00501568  ns=fastfunc  size=0xc4
// sig: undefined FastVecMtx4MultBatch3InPlace(void)
// callers(0): 
// callees(1): 005012b0 fastfunc::FastVecMtx4Mult

void fastfunc::FastVecMtx4MultBatch3InPlace(uint param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  dVar4 = (double)*(float *)(param_1 + 0xc);
  dVar3 = (double)*(float *)(param_1 + 0x1c);
  dVar2 = (double)*(float *)(param_1 + 0x2c);
  FastVecMtx4Mult(&uStack_60);
  FastVecMtx4Mult(&uStack_50,param_2,param_3 + 0x10);
  FastVecMtx4Mult(&uStack_40,param_2,param_3 + 0x20);
  *(float *)(param_1 + 0xc) = (float)dVar4;
  *(float *)(param_1 + 0x1c) = (float)dVar3;
  *(float *)(param_1 + 0x2c) = (float)dVar2;
  puVar1 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar1[3] = uStack_54;
  puVar1[2] = uStack_58;
  puVar1[1] = uStack_5c;
  *puVar1 = uStack_60;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = uStack_44;
  puVar1[2] = uStack_48;
  puVar1[1] = uStack_4c;
  *puVar1 = uStack_50;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = uStack_34;
  puVar1[2] = uStack_38;
  puVar1[1] = uStack_3c;
  *puVar1 = uStack_40;
  return;
}



//==== 0050162c  ns=fastfunc  size=0xb4
// sig: undefined FastVecMtx4Mul(void)
// callers(50): 000613a0 debug::DebugCamera; 00065490 draw::ScreenPosFromWorldSpace; 00066088 draw::ComposeCameraMatrix; 00086df8 hero::Hero_Turn3D_XYZ; 0008af28 hero::???_Hero_UpdateGroundProbe; 0008c3d0 hero::HeroUpdateNonRatchet; 000965bc hero::Hero_RotateAroundPoint; 0009b9ec hero::Hero_RotateByEuler; 0009ba88 hero::Hero_Turn3D; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 000f1038 mobyfunc::GetBoneTransformations; 000f1364 mobyfunc::GetMobyJointsWorldMtx; 000f34e8 mobyfunc::MB_TransformJointBatch; 0010c1e8 mobyutil::MB_MtxToEuler; 00110e18 mobyutil::MB_MtxFromDir; 001122e0 mobyutil::MB_PlatformLocalToWorld; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00112678 mobyutil::MB_PlatformGetDelta; 00112900 mobyutil::MB_GetOrientation; 00113288 mobyutil::???_MB_BuildScaledRotMtx; 0011530c mobyutil::MB_RotateMoby; 00116d1c mobyutil::MB_StoreChildOffsets; 00116eb8 mobyutil::MB_UpdateChildMobys; 00117038 mobyutil::MB_RotateAboutPivot; 001933d8 mobyupdate_unsorted::UpdateMoby_1035
// callees(1): 00501430 fastfunc::FastVecMtx4MultSingle

void fastfunc::FastVecMtx4Mul(uint param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FastVecMtx4MultSingle(&uStack_60);
  FastVecMtx4MultSingle(&uStack_50,param_2,param_3 + 0x10);
  FastVecMtx4MultSingle(&uStack_40,param_2,param_3 + 0x20);
  FastVecMtx4MultSingle(&uStack_30,param_2,param_3 + 0x30);
  puVar1 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar1[3] = uStack_54;
  puVar1[2] = uStack_58;
  puVar1[1] = uStack_5c;
  *puVar1 = uStack_60;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = uStack_44;
  puVar1[2] = uStack_48;
  puVar1[1] = uStack_4c;
  *puVar1 = uStack_50;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = uStack_34;
  puVar1[2] = uStack_38;
  puVar1[1] = uStack_3c;
  *puVar1 = uStack_40;
  puVar1 = (undefined4 *)(param_1 + 0x30 & 0xfffffff0);
  puVar1[3] = uStack_24;
  puVar1[2] = uStack_28;
  puVar1[1] = uStack_2c;
  *puVar1 = uStack_30;
  return;
}



//==== 005016e0  ns=fastfunc  size=0xe4
// sig: undefined FastVecAdd(void)
// callers(3): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00113288 mobyutil::???_MB_BuildScaledRotMtx; 00293c48 mobyupdate_unsorted::UpdateMoby_153
// callees(0): 

void fastfunc::FastVecAdd(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  *param_1 = *param_2 + *param_3;
  fVar6 = param_2[4];
  fVar7 = param_3[4];
  param_1[1] = fVar1 + fVar2;
  fVar1 = param_2[5];
  param_1[2] = fVar3 + fVar4;
  fVar2 = param_3[5];
  fVar3 = param_2[6];
  fVar4 = param_3[6];
  param_1[3] = fVar5;
  param_1[4] = fVar6 + fVar7;
  fVar5 = param_2[8];
  fVar6 = param_3[8];
  param_1[5] = fVar1 + fVar2;
  fVar1 = param_2[9];
  fVar2 = param_3[9];
  param_1[6] = fVar3 + fVar4;
  fVar3 = param_2[10];
  fVar4 = param_3[10];
  param_1[7] = param_2[7];
  param_1[8] = fVar5 + fVar6;
  fVar5 = param_2[0xc];
  fVar6 = param_3[0xc];
  param_1[9] = fVar1 + fVar2;
  fVar1 = param_2[0xd];
  param_1[10] = fVar3 + fVar4;
  fVar2 = param_3[0xd];
  fVar3 = param_2[0xe];
  fVar4 = param_3[0xe];
  param_1[0xb] = param_2[0xb];
  fVar7 = param_2[0xf];
  param_1[0xc] = fVar5 + fVar6;
  param_1[0xf] = fVar7;
  param_1[0xd] = fVar1 + fVar2;
  param_1[0xe] = fVar3 + fVar4;
  return;
}



//==== 005017c4  ns=fastfunc  size=0x74
// sig: undefined FastQuaternionMult(void)
// callers(18): 00102168 mobyutil::MB_UpdateLegAnimState; 00106078 mobyutil::MB_EulerToQuat; 00111324 mobyutil::MB_QuatRotate; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001115c8 mobyutil::MB_QuatBetweenVecs; 001167c8 mobyutil::MB_UpdateManipulatorRot; 001766d8 walk::Walk_UpdateLegRotations; 002839d8 mobyupdate_helpers::M1454_002839d8; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 0030d0a0 mobyupdate_unsorted::UpdateMoby_241; 0031b438 mobyupdate_helpers::M253_0031b438; 00326c98 mobyupdate_helpers::M28_00326c98; 003920c0 mobyupdate_helpers::M46_003920c0; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 00422828 mobyupdate_helpers::M694_00422828; 00437ec0 mobyupdate_unsorted::UpdateMoby_{735_736}; 00473ab0 mobyupdate_helpers::M820_00473ab0; 0048c188 FUN_0048c188
// callees(0): 

void fastfunc::FastQuaternionMult(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_3;
  fVar2 = *param_2;
  fVar3 = param_3[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_3[2];
  fVar8 = param_3[1];
  *param_1 = -(fVar5 * fVar8 - (fVar4 * fVar7 + fVar6 * fVar1 + fVar2 * fVar3));
  param_1[1] = -(fVar2 * fVar7 - (fVar5 * fVar1 + fVar6 * fVar8 + fVar4 * fVar3));
  param_1[2] = -(fVar4 * fVar1 - (fVar2 * fVar8 + fVar6 * fVar7 + fVar5 * fVar3));
  param_1[3] = -(fVar5 * fVar7 - -(fVar4 * fVar8 - (fVar6 * fVar3 - fVar2 * fVar1)));
  return;
}



//==== 00501848  ns=fastfunc  size=0x110
// sig: undefined FastSlerp(void)
// callers(11): 00051af8 camera::Camera_BlendCamsPosQuat; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 002edb38 mobyupdate_helpers::M211_002edb38; 003d2c48 mobyupdate_unsorted::UpdateMoby_585; 00421f08 mobyupdate_helpers::M694_00421f08; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 00437ec0 mobyupdate_unsorted::UpdateMoby_{735_736}; 00473158 mobyupdate_helpers::M820_00473158; 00473d20 mobyupdate_helpers::M820_00473d20; 00479b78 mobyupdate_helpers::M827_00479b78; 0048c188 FUN_0048c188
// callees(0): 

void fastfunc::FastSlerp(double param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar5 = (float)(1.0 - param_1);
  fVar1 = (float)((double)param_4[1] * param_1);
  fVar2 = (float)((double)*param_4 * param_1);
  fVar3 = (float)((double)param_4[2] * param_1);
  fVar4 = (float)((double)param_4[3] * param_1);
  fVar6 = param_3[1] * fVar5;
  fVar7 = *param_3 * fVar5;
  fVar8 = param_3[2] * fVar5;
  fVar5 = param_3[3] * fVar5;
  fVar9 = fVar5 * fVar4 + fVar8 * fVar3 + fVar7 * fVar2 + fVar6 * fVar1;
  fVar10 = fVar6 + fVar1;
  if (fVar9 - 0.0 < 0.0) {
    fVar10 = fVar6 - fVar1;
  }
  fVar1 = fVar7 + fVar2;
  if (fVar9 - 0.0 < 0.0) {
    fVar1 = fVar7 - fVar2;
  }
  fVar2 = fVar8 + fVar3;
  if (fVar9 - 0.0 < 0.0) {
    fVar2 = fVar8 - fVar3;
  }
  fVar3 = fVar5 + fVar4;
  if (fVar9 - 0.0 < 0.0) {
    fVar3 = fVar5 - fVar4;
  }
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 + fVar10 * fVar10;
  fVar5 = 1.0 / SQRT(fVar4);
  fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
  fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
  fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
  *param_2 = fVar5 * fVar1;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar5 * fVar2;
  param_2[3] = fVar5 * fVar3;
  return;
}



//==== 00501980  ns=fastfunc  size=0x124
// sig: undefined FastQuaternionToEuler(void)
// callers(47): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00090548 hero::???_Hero_UpdateManipulatorSpin; 00102060 mobyutil::MB_Reset2LegData; 00102168 mobyutil::MB_UpdateLegAnimState; 00106078 mobyutil::MB_EulerToQuat; 001091b0 mobyutil::MB_SetAnimAndReset2Leg; 00115bd8 mobyutil::MB_TurnHeads; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00176618 walk::Walk_ApplyLegQuatToEuler; 001766d8 walk::Walk_UpdateLegRotations; 00195e08 mobyupdate_unsorted::UpdateMoby_1041; 001b5398 mobyupdate_helpers::M1075_001b5398; 001bd450 mobyupdate_unsorted::UpdateMoby_11; 001df4e0 mobyupdate_unsorted::UpdateMoby_1143; 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 002839d8 mobyupdate_helpers::M1454_002839d8; 002af360 mobyupdate_unsorted::UpdateMoby_172; 002b3778 mobyupdate_helpers::M1766_002b3778; 002edb38 mobyupdate_helpers::M211_002edb38; 002f1710 mobyupdate_helpers::M1412_002f1710; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 002f9f70 mobyupdate_helpers::M228_002f9f70; 002fa6f0 mobyupdate_unsorted::UpdateMoby_227; 00301d00 mobyupdate_unsorted::UpdateMoby_233; 0030d0a0 mobyupdate_unsorted::UpdateMoby_241
// callees(0): 

void fastfunc::FastQuaternionToEuler(double param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  fVar1 = (float)(param_1 + 1.570796251296997);
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar6 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar6 = param_1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  dVar5 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar6 < 0.0) {
    dVar5 = dVar6;
  }
  dVar7 = (double)(float)(dVar5 * dVar5);
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar8 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar5));
  dVar6 = (double)(float)(dVar7 * dVar8);
  fVar1 = (fVar1 * fVar4 * 2.601887e-06 +
          fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 2.0;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  fVar2 = -((float)(dVar7 * dVar6) * 2.601887e-06 +
           (float)(dVar6 * -0.0001980741071747616 +
                  (double)(float)(dVar8 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar7 * dVar5) *
                                                 -0.16666656732559204 + dVar5)))) /
          SQRT(ABS(fVar1) + 2.0);
  fVar3 = SQRT(ABS(fVar1) + 2.0) * 0.5;
  fVar4 = fVar2;
  if (fVar1 - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  *param_2 = fVar4;
  param_2[3] = fVar3;
  if (param_3 < 1) {
    if (-1 < param_3) {
      return;
    }
  }
  else if (param_3 < 2) {
    param_2[1] = fVar4;
    *param_2 = 0.0;
    return;
  }
  param_2[2] = fVar4;
  *param_2 = 0.0;
  return;
}



//==== 00501ab0  ns=fastfunc  size=0x144
// sig: undefined FastQuaternionToMtx4(void)
// callers(12): 00051d40 camera::Camera_BlendCamsPolQuat; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 00421f08 mobyupdate_helpers::M694_00421f08; 00437ec0 mobyupdate_unsorted::UpdateMoby_{735_736}; 00473158 mobyupdate_helpers::M820_00473158; 00479b78 mobyupdate_helpers::M827_00479b78; 00501e18 fastfunc::FastQuaternionToMtx4Identity; 00501e8c fastfunc::FastQuaternionVecTransform; 00501ee8 fastfunc::FastQuaternionVecTransformInverse; 00501f50 fastfunc::FastQuaternionVecTransform; 00502030 fastfunc::FastQuaternionSlerp; 00502238 fastfunc::FastVecMtx4MultBatch4VMX
// callees(0): 

void fastfunc::FastQuaternionToMtx4(float *param_1,float *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((uint)param_2 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *param_2 = 1.0;
  param_2[5] = 1.0;
  param_2[10] = 1.0;
  *param_2 = -((param_1[1] * param_1[1] + param_1[2] * param_1[2]) * 2.0 - 1.0);
  param_2[4] = (*param_1 * param_1[1] + param_1[3] * param_1[2]) * 2.0;
  param_2[8] = (*param_1 * param_1[2] - param_1[3] * param_1[1]) * 2.0;
  param_2[1] = (*param_1 * param_1[1] - param_1[3] * param_1[2]) * 2.0;
  param_2[5] = -((*param_1 * *param_1 + param_1[2] * param_1[2]) * 2.0 - 1.0);
  param_2[9] = (param_1[1] * param_1[2] + param_1[3] * *param_1) * 2.0;
  param_2[2] = (*param_1 * param_1[2] + param_1[3] * param_1[1]) * 2.0;
  param_2[6] = (param_1[1] * param_1[2] - param_1[3] * *param_1) * 2.0;
  param_2[10] = -((*param_1 * *param_1 + param_1[1] * param_1[1]) * 2.0 - 1.0);
  return;
}



//==== 00501bf8  ns=fastfunc  size=0x220
// sig: undefined FastVecFromSignedShort(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVecFromSignedShort(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar4 = loadVectorLeftIndexed(in_r0,param_1);
  auVar5 = ZEXT416(0xfffffff0);
  auVar3 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = ZEXT416(0xffffffff);
  auVar8 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = ZEXT416(0xffffffff);
  auVar15 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = loadVectorRightIndexed(0x10,param_1);
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar8 = loadVectorLeftIndexed(2,param_1);
  auVar6 = loadVectorRightIndexed(0x12,param_1);
  auVar5 = vectorShiftRightAlgebraicWord(auVar4 | auVar5,auVar3);
  auVar7 = loadVectorLeftIndexed(in_r0,0x501bf4);
  auVar10 = loadVectorLeftIndexed(4,param_1);
  auVar4 = vectorConvertFromSignedFixedPointWord(auVar5,0);
  auVar5 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = vectorShiftRightAlgebraicWord(auVar8 | auVar6,auVar3);
  auVar6 = loadVectorRightIndexed(0x14,param_1);
  auVar12 = loadVectorLeftIndexed(6,param_1);
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar5,0);
  auVar5 = ZEXT416(0xffffffff);
  auVar11 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar13 = loadVectorRightIndexed(0x16,param_1);
  auVar5 = vectorShiftRightAlgebraicWord(auVar10 | auVar6,auVar3);
  auVar10 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar7,auVar9);
  auVar6 = vectorConvertFromSignedFixedPointWord(auVar5,0);
  auVar11 = loadVectorLeftIndexed(8,param_1);
  auVar14 = loadVectorRightIndexed(0x18,param_1);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar7,auVar10);
  auVar9 = vectorShiftRightAlgebraicWord(auVar12 | auVar13,auVar3);
  auVar12 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar5 = ZEXT416(3);
  auVar13 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = vectorShiftRightWord(auVar11 | auVar14,auVar3);
  auVar11 = loadVectorLeftIndexed(10,param_1);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
  auVar14 = loadVectorRightIndexed(0x1a,param_1);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar6,auVar7,auVar12);
  auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar13);
  auVar5 = ZEXT416(0xffffffff);
  auVar12 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  uVar2 = (uint)param_2;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,param_2);
  *(undefined4 *)(uVar2 & 0xfffffffc) = uVar1;
  auVar5 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar4 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar8 = vectorShiftRightWord(auVar11 | auVar14,auVar3);
  auVar11 = loadVectorLeftIndexed(0xc,param_1);
  auVar14 = loadVectorRightIndexed(0x1c,param_1);
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,param_2);
  *(undefined4 *)(uVar2 + 4 & 0xfffffffc) = uVar1;
  auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar13);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar10,auVar7,auVar4);
  auVar5 = ZEXT416(0xffffffff);
  auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar4 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
  auVar9 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar5 = ZEXT416(0xffffffff);
  auVar12 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = vectorShiftRightWord(auVar11 | auVar14,auVar3);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar7,auVar9);
  auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,8,param_2);
  *(undefined4 *)(uVar2 + 8 & 0xfffffffc) = uVar1;
  auVar9 = vectorShiftLeftIntegerWord(auVar5,auVar13);
  auVar4 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = ZEXT416(0xffffffff);
  auVar12 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar13 = loadVectorLeftIndexed(0x10,param_1);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar7,auVar11);
  auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0xc,param_2);
  *(undefined4 *)(uVar2 + 0xc & 0xfffffffc) = uVar1;
  auVar10 = loadVectorRightIndexed(0x20,param_1);
  auVar5 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar6 = loadVectorLeftIndexed(0x12,param_1);
  auVar11 = loadVectorRightIndexed(0x22,param_1);
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x10,param_2);
  *(undefined4 *)(uVar2 + 0x10 & 0xfffffffc) = uVar1;
  auVar5 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar4);
  auVar8 = vectorShiftRightAlgebraicWord(auVar13 | auVar10,auVar3);
  auVar10 = loadVectorLeftIndexed(0x14,param_1);
  auVar12 = loadVectorRightIndexed(0x24,param_1);
  auVar4 = vectorShiftRightAlgebraicWord(auVar6 | auVar11,auVar3);
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x14,param_2);
  *(undefined4 *)(uVar2 + 0x14 & 0xfffffffc) = uVar1;
  auVar9 = vectorConvertFromSignedFixedPointWord(auVar8,0);
  auVar11 = loadVectorLeftIndexed(0x16,param_1);
  auVar13 = loadVectorRightIndexed(0x26,param_1);
  auVar6 = vectorConvertFromSignedFixedPointWord(auVar4,0);
  auVar8 = vectorShiftRightAlgebraicWord(auVar10 | auVar12,auVar3);
  auVar5 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = vectorShiftRightAlgebraicWord(auVar11 | auVar13,auVar3);
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
  auVar3 = vectorConvertFromSignedFixedPointWord(auVar4,0);
  auVar4 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x18,param_2);
  *(undefined4 *)(uVar2 + 0x18 & 0xfffffffc) = uVar1;
  *(undefined4 *)(uVar2 + 0x1c) = 0;
  auVar5 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x20,param_2);
  *(undefined4 *)(uVar2 + 0x20 & 0xfffffffc) = uVar1;
  auVar4 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x24,param_2);
  *(undefined4 *)(uVar2 + 0x24 & 0xfffffffc) = uVar1;
  auVar5 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x28,param_2);
  *(undefined4 *)(uVar2 + 0x28 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x2c,param_2);
  *(undefined4 *)(uVar2 + 0x2c & 0xfffffffc) = uVar1;
  return;
}



//==== 00501e18  ns=fastfunc  size=0x74
// sig: undefined FastQuaternionToMtx4Identity(void)
// callers(7): 00051af8 camera::Camera_BlendCamsPosQuat; 0028d1f8 mobyupdate_unsorted::UpdateMoby_a_lot_8; 00421f08 mobyupdate_helpers::M694_00421f08; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 00473158 mobyupdate_helpers::M820_00473158; 00473d20 mobyupdate_helpers::M820_00473d20; 0048c188 FUN_0048c188
// callees(1): 00501ab0 fastfunc::FastQuaternionToMtx4

void fastfunc::FastQuaternionToMtx4Identity(undefined8 param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FastQuaternionToMtx4(param_1,&uStack_40);
  puVar1 = (undefined4 *)(param_2 & 0xfffffff0);
  puVar1[3] = uStack_34;
  puVar1[2] = uStack_38;
  puVar1[1] = uStack_3c;
  *puVar1 = uStack_40;
  puVar1 = (undefined4 *)(param_2 + 0x10 & 0xfffffff0);
  puVar1[3] = uStack_24;
  puVar1[2] = uStack_28;
  puVar1[1] = uStack_2c;
  *puVar1 = uStack_30;
  puVar1 = (undefined4 *)(param_2 + 0x20 & 0xfffffff0);
  puVar1[3] = uStack_14;
  puVar1[2] = uStack_18;
  puVar1[1] = uStack_1c;
  *puVar1 = uStack_20;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  return;
}



//==== 00501e8c  ns=fastfunc  size=0x5c
// sig: undefined FastQuaternionVecTransform(void)
// callers(0): 
// callees(2): 005012b0 fastfunc::FastVecMtx4Mult; 00501ab0 fastfunc::FastQuaternionToMtx4

void fastfunc::FastQuaternionVecTransform(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [56];
  
  FastQuaternionToMtx4(param_3,auStack_50);
  FastVecMtx4Mult(param_1,auStack_50,param_2);
  return;
}



//==== 00501ee8  ns=fastfunc  size=0x68
// sig: undefined FastQuaternionVecTransformInverse(void)
// callers(0): 
// callees(3): 00500fcc fastfunc::FastMtx3Transpose; 005012b0 fastfunc::FastVecMtx4Mult; 00501ab0 fastfunc::FastQuaternionToMtx4

void fastfunc::FastQuaternionVecTransformInverse
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [56];
  
  FastQuaternionToMtx4(param_3,auStack_50);
  FastMtx3Transpose(auStack_50,auStack_50);
  FastVecMtx4Mult(param_1,auStack_50,param_2);
  return;
}



//==== 00501f50  ns=fastfunc  size=0xb8
// sig: undefined FastQuaternionVecTransform(void)
// callers(0): 
// callees(3): 00500fcc fastfunc::FastMtx3Transpose; 005012b0 fastfunc::FastVecMtx4Mult; 00501ab0 fastfunc::FastQuaternionToMtx4

void fastfunc::FastQuaternionVecTransform
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_70 [56];
  
  FastQuaternionToMtx4(param_7,auStack_70);
  FastMtx3Transpose(auStack_70,auStack_70);
  FastVecMtx4Mult(param_1,auStack_70,param_4);
  FastVecMtx4Mult(param_2,auStack_70,param_5);
  FastVecMtx4Mult(param_3,auStack_70,param_6);
  return;
}



//==== 00502030  ns=fastfunc  size=0x1d8
// sig: undefined FastQuaternionSlerp(void)
// callers(0): 
// callees(3): 00500fcc fastfunc::FastMtx3Transpose; 005012b0 fastfunc::FastVecMtx4Mult; 00501ab0 fastfunc::FastQuaternionToMtx4

void fastfunc::FastQuaternionSlerp
               (double param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  undefined1 local_60 [16];
  undefined1 auStack_50 [56];
  
  if (9.999999747378752e-06 <= ABS(param_1)) {
    if (0.0001 <= SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1])) {
      FastQuaternionToMtx4(local_60,auStack_50);
      FastMtx3Transpose(auStack_50,auStack_50);
      FastVecMtx4Mult(param_2,auStack_50,param_3);
    }
    else {
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      param_2[3] = param_3[3];
    }
  }
  else {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return;
}



//==== 00502238  ns=fastfunc  size=0x184
// sig: undefined FastVecMtx4MultBatch4VMX(void)
// callers(1): 000f34e8 mobyfunc::MB_TransformJointBatch
// callees(1): 00501ab0 fastfunc::FastQuaternionToMtx4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fastfunc::FastVecMtx4MultBatch4VMX
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FastQuaternionToMtx4(param_1,auStack_50);
  auVar1 = _DAT_00502210;
  auVar11 = ZEXT416(0xffffffff);
  auVar4 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar9 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar7 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar2 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = auStack_50 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  auVar6 = loadVectorLeftIndexed(in_LR,param_2);
  auVar4 = auStack_50 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar6,auVar5);
  auVar5 = auStack_50 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar11 = ZEXT416(0xffffffff);
  auVar10 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar7 = auStack_40 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar6,auVar9);
  auVar2 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar8 = vectorMultiplyAddFloatingPoint
                     (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6,auVar8);
  auVar4 = auStack_40 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = auStack_40 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar6 = vectorShiftLeftIntegerWord(auVar10,auVar10);
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar13 = loadVectorLeftIndexed(4,param_2);
  auVar11 = ZEXT416(0xffffffff);
  auVar15 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar10 = vectorMultiplyAddFloatingPoint
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar13,auVar6);
  auVar11 = ZEXT416(0xffffffff);
  auVar17 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar6 = vectorMultiplyAddFloatingPoint
                     (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar13,auVar12);
  auVar4 = auStack_30 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar14 = loadVectorLeftIndexed(in_LR,param_3);
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar13,auVar2);
  auVar5 = auStack_30 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = loadVectorLeftIndexed(4,param_3);
  auVar13 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar12 = loadVectorLeftIndexed(8,param_3);
  auVar11 = ZEXT416(0xffffffff);
  auVar15 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar16 = loadVectorLeftIndexed(8,param_2);
  auVar11 = auStack_30 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar16,auVar13);
  auVar5 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar16,auVar5);
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar16,auVar15);
  auVar4 = vectorPermute(auVar3,auVar8,_DAT_00502220);
  auVar11 = vectorPermute(auVar9,auStack_50,_DAT_00502220);
  auVar3 = vectorPermute(auVar10,auVar6,_DAT_00502220);
  auVar2 = vectorPermute(auVar2,auStack_40,_DAT_00502220);
  auVar9 = loadVectorLeftIndexed(0x20,0x502210);
  auVar4 = vectorPermute(auVar4,auVar11,_DAT_00502210);
  auVar11 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorPermute(auVar3,auVar2,_DAT_00502210);
  auVar3 = vectorPermute(auVar13,auVar5,_DAT_00502220);
  auVar5 = vectorPermute(auVar15,auStack_30,_DAT_00502220);
  auVar7 = vectorPermute(auVar14,auVar7,_DAT_00502220);
  auVar11 = vectorPermute(auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                          _DAT_00502220);
  *(undefined1 (*) [16])(param_4 & 0xfffffff0) = auVar4;
  *(undefined1 (*) [16])(param_4 + 0x10 & 0xfffffff0) = auVar2;
  auVar4 = vectorPermute(auVar3,auVar5,auVar1);
  auVar11 = vectorPermute(auVar7,auVar11,auVar1);
  *(undefined1 (*) [16])(param_4 + 0x20 & 0xfffffff0) = auVar4;
  *(undefined1 (*) [16])(param_4 + 0x30 & 0xfffffff0) = auVar11;
  return;
}



//==== 005023bc  ns=fastfunc  size=0x34
// sig: undefined FastVecScale(void)
// callers(7): 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 000f3fe0 mobyfunc::MB_BlendJointFrames; 000f5b80 mobyfunc::MB_DrawEntries; 000fa940 mobyfunc::InterpolateAnimation; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00300950 mobyupdate_helpers::M233_00300950
// callees(0): 

void fastfunc::FastVecScale(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = (float)((double)*param_3 * param_1);
  param_2[1] = (float)((double)fVar1 * param_1);
  param_2[2] = (float)((double)fVar2 * param_1);
  param_2[3] = (float)((double)fVar3 * param_1);
  return;
}



//==== 005023f0  ns=fastfunc  size=0x44
// sig: undefined FastVecAdd(void)
// callers(30): 000f3618 mobyfunc::ProcessManipulators; 000f3b30 mobyfunc::ProcessAnimLayers; 000f3fe0 mobyfunc::MB_BlendJointFrames; 000f5b80 mobyfunc::MB_DrawEntries; 00106840 mobyutil::MB_HandleDamage; 001150f8 mobyutil::MB_PathPosAtDist; 0011ffb0 partupd::SpawnPart_0; 00129b00 partupd::SpawnPart_31; 00129cb0 partupd::UpdatePart_31; 00200fd0 FUN_00200fd0; 0020c118 mobyupdate_helpers::M1221_0020c118; 0020c5c0 mobyupdate_helpers::M1222_0020c5c0; 00212cc0 mobyupdate_unsorted::UpdateMoby_123; 00213920 mobyupdate_helpers::M1230_00213920; 0025b328 mobyupdate_unsorted::UpdateMoby_a_lot_12; 0027a488 mobyupdate_unsorted::UpdateMoby_1424; 0027ba70 mobyupdate_unsorted::UpdateMoby_1430; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002b8748 mobyupdate_helpers::M1772_002b8748; 002b90b8 mobyupdate_unsorted::UpdateMoby_1772; 002e4af8 mobyupdate_unsorted::UpdateMoby_{196_197_1958}; 0040b6b0 mobyupdate_unsorted::UpdateMoby_67; 00424e98 mobyupdate_unsorted::UpdateMoby_695; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(0): 

void fastfunc::FastVecAdd(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  fVar6 = param_3[3];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  param_1[3] = fVar5 + fVar6;
  return;
}



//==== 00502438  ns=fastfunc  size=0x134
// sig: undefined FastVecMtx4MultLerp(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVecMtx4MultLerp(double param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar2 = param_4[1];
  fVar1 = (float)(1.0 - param_1);
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar5 = param_3[1];
  fVar6 = param_3[4];
  fVar7 = param_3[2];
  fVar8 = param_3[5];
  fVar9 = param_3[3];
  fVar10 = param_3[6];
  fVar11 = param_3[7];
  fVar12 = param_3[8];
  fVar13 = param_3[9];
  fVar14 = param_3[10];
  fVar15 = param_3[0xb];
  fVar16 = param_4[4];
  fVar17 = param_4[5];
  fVar18 = param_4[6];
  fVar19 = param_4[7];
  fVar20 = param_4[8];
  fVar21 = param_4[9];
  fVar22 = param_4[10];
  fVar23 = param_4[0xb];
  *param_2 = *param_3 * fVar1 + (float)((double)*param_4 * param_1);
  param_2[1] = fVar5 * fVar1 + (float)((double)fVar2 * param_1);
  param_2[2] = fVar7 * fVar1 + (float)((double)fVar3 * param_1);
  param_2[3] = fVar9 * fVar1 + (float)((double)fVar4 * param_1);
  param_2[4] = (float)((double)fVar16 * param_1 + (double)(fVar6 * fVar1));
  param_2[5] = (float)((double)fVar17 * param_1 + (double)(fVar8 * fVar1));
  param_2[6] = (float)((double)fVar18 * param_1 + (double)(fVar10 * fVar1));
  param_2[7] = (float)((double)fVar19 * param_1 + (double)(fVar11 * fVar1));
  param_2[8] = (float)((double)fVar20 * param_1 + (double)(fVar12 * fVar1));
  param_2[9] = (float)((double)fVar21 * param_1 + (double)(fVar13 * fVar1));
  param_2[10] = (float)((double)fVar22 * param_1 + (double)(fVar14 * fVar1));
  param_2[0xb] = (float)((double)fVar23 * param_1 + (double)(fVar15 * fVar1));
  return;
}



//==== 00502578  ns=fastfunc  size=0x58
// sig: undefined FastWrapRot(float param_1, float param_2)
// callers(580): 00014fd0 mobyupdate_unsorted::Moby1267_UpdateCamera; 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00016940 mobyupdate_unsorted::Moby1267_DrawHud; 00017b78 mobyupdate_helpers::M1274_00017b78; 00018238 mobyupdate_helpers::M1274_00018238; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0001e958 mobyupdate_unsorted::UpdateMoby_{336_415}; 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 00020a80 mobyupdate_unsorted::UpdateMoby_458; 0002f530 camera0::???_Cam0_UpdateTargetSpecial; 00033068 camera0::UpdateUserCam_0; 00037d68 camera::camera11::Cam11_00037d68; 000395c0 camera::camera13::Cam13_000395c0; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00042b48 camera::camera21::UpdateCamera_21; 00046c58 camera::camera4::UpdateCamera_4; 00048a20 camera::camera6::???_Cam6_ClampAndBuildMtx; 00048b00 camera::camera6::Cam6_SetTarget; 00048c78 camera::camera6::Cam6_ResetParams; 00048df8 camera::camera6::Cam6_Update; 00049058 camera::camera6::???_Cam6_SetupFromMoby; 0004e058 camera::camera9::Cam9_UpdateRot; 0004ff28 camera::Cam_CopyRotWrapped; 00050288 camera::Cam_InterpAngles
// callees(0): 

double fastfunc::FastWrapRot(float param_1,float param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(param_1 + param_2);
  dVar2 = (double)(float)(dVar1 - 6.2831854820251465);
  if (dVar1 - 3.1415927410125732 < 0.0) {
    dVar2 = dVar1;
  }
  if (dVar1 < -3.1415927410125732) {
    dVar2 = (double)(float)(dVar2 + 6.2831854820251465);
  }
  return dVar2;
}



//==== 005025e0  ns=fastfunc  size=0x58
// sig: undefined FastDiffRots(void)
// callers(252): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00018238 mobyupdate_helpers::M1274_00018238; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0001bbd8 mobyupdate_helpers::M326_0001bbd8; 0001c618 mobyupdate_helpers::M326_0001c618; 0001e958 mobyupdate_unsorted::UpdateMoby_{336_415}; 0002f0a0 camera0::AzmLookAtDir; 00033068 camera0::UpdateUserCam_0; 000337a0 camera0::UpdateCamRotation_0; 000343f8 camera0::UpdateCamPosition_0; 00037d68 camera::camera11::Cam11_00037d68; 00046c58 camera::camera4::UpdateCamera_4; 00048510 camera::camera5::UpdateMobyDrivenCam; 0004e058 camera::camera9::Cam9_UpdateRot; 00050288 camera::Cam_InterpAngles; 00051d40 camera::Camera_BlendCamsPolQuat; 00053fe8 camera::???_Camera_CalcPolarToTarget; 000613a0 debug::DebugCamera; 000627d0 debug::UpdateDebugSelections; 00074dc0 draw::ImpactSprite_Update; 00081048 hero::Hero_UpdateShadow; 000895f0 hero::Hero_MoveWithPlatform; 000930e8 hero::Hero_UpdateLookAtTarget; 00094470 hero::???_Hero_UpdateTiltWobbleFx; 000969c0 hero::Hero_SpawnWaterWake
// callees(0): 

double fastfunc::FastDiffRots(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(float)(param_1 - param_2);
  dVar2 = (double)(float)(dVar1 - 6.2831854820251465);
  if (dVar1 - 3.1415927410125732 < 0.0) {
    dVar2 = dVar1;
  }
  if (dVar1 < -3.1415927410125732) {
    dVar2 = (double)(float)(dVar2 + 6.2831854820251465);
  }
  return dVar2;
}



//==== 00502648  ns=fastfunc  size=0x4c
// sig: undefined FastAddRots(float param_1)
// callers(37): 00016940 mobyupdate_unsorted::Moby1267_DrawHud; 000528e8 camera::HandleCameraShake; 00054670 camera::Camera_CreateReticule; 000cd4b8 hud::UpdateQuickSelect; 00149f88 pause::SlotConfig_Draw; 00150e88 pause::MenuHero_MobyUpdateF; 00200608 mobyupdate_helpers::M1209_00200608; 00212cc0 mobyupdate_unsorted::UpdateMoby_123; 0026e3e0 mobyupdate_helpers::M1405_0026e3e0; 0026e9a0 mobyupdate_helpers::M1406_0026e9a0; 0026eed0 mobyupdate_helpers::M1407_0026eed0; 0026f400 mobyupdate_helpers::M1408_0026f400; 0026f9c0 mobyupdate_helpers::M1409_0026f9c0; 0027ac98 mobyupdate_helpers::M1426_0027ac98; 0029d610 mobyupdate_helpers::M1565_0029d610; 0029db20 mobyupdate_helpers::M1567_0029db20; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002c11e8 mobyupdate_helpers::M1827_002c11e8; 002d0c98 mobyupdate_unsorted::UpdateMoby_189; 002e68e0 mobyupdate_helpers::M1900_002e68e0; 002eb6d8 mobyupdate_helpers::M1449_002eb6d8; 002fdab8 mobyupdate_helpers::M230_002fdab8; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 00371f28 mobyupdate_unsorted::UpdateMoby_430; 003806d0 mobyupdate_helpers::M440_003806d0
// callees(0): 

void fastfunc::FastAddRots(float param_1)

{
  if (3.1415927 < param_1) {
    do {
      param_1 = param_1 - 6.2831855;
    } while (3.1415927 < param_1);
  }
  for (; param_1 < -3.1415927; param_1 = param_1 + 6.2831855) {
  }
  return;
}



//==== 005026a0  ns=fastfunc  size=0x38
// sig: undefined FastSubRots(float param_1, float param_2)
// callers(218): 00015120 mobyupdate_unsorted::Moby1267_UpdateTargetLock; 00018238 mobyupdate_helpers::M1274_00018238; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0002f530 camera0::???_Cam0_UpdateTargetSpecial; 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003e488 camera::camera18::???_Cam18_ModifyFollowRot; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00043fc0 camera::camera22::???_Cam22_ModifyFollowRot; 00049058 camera::camera6::???_Cam6_SetupFromMoby; 00049618 camera::camera6::???_Cam6_RotMath; 000824b0 hero::Hero_CheckLedgeGrab; 000930e8 hero::Hero_UpdateLookAtTarget; 00097bd0 hero::Hero_UpdateLedge; 00098878 hero::Hero_CheckLedgeAhead; 000993d8 hero::Hero_ComputeTargetScore; 0009de38 hero::Hero_JumpTurnTrans; 000a1d70 hero::Hero_GetSnapJumpDir; 000a1e78 hero::Hero_GetSnapJumpSnapWindow; 000a30e0 hero::???_Hero_UpdateWeaponInput; 000a71a0 hero::Hero_GetHoverboardRespawn; 000a7968 hero::Hero_UpdateHoverboardRace; 000a8ca0 hero::???_Hero_ProbeCollAlongVelocity; 000a9158 hero::Hero_GrindMotion; 000aaec0 hero::HandleHeroMovement
// callees(0): 

double fastfunc::FastSubRots(float param_1,float param_2)

{
  double dVar1;
  
  dVar1 = ABS((double)(param_1 - param_2));
  if (3.1415927410125732 <= dVar1) {
    dVar1 = (double)(float)(6.2831854820251465 - dVar1);
  }
  return dVar1;
}



//==== 005026d8  ns=stub  size=0x4
// sig: undefined STUB_005026d8(void)
// callers(0): 
// callees(0): 

void stub::STUB_005026d8(void)

{
  return;
}



//==== 005026dc  ns=fastfunc  size=0x40
// sig: undefined FastFrac(void)
// callers(9): 000964f4 hero::Hero_GetAnimScaledVal; 0010de78 mobyutil::MB_WrapRot; 00138810 path::PosRing_CollLineSampled; 00197c88 mobyupdate_helpers::M1045_00197c88; 00198d88 mobyupdate_helpers::M1045_00198d88; 0019e010 mobyupdate_helpers::M1046_0019e010; 001c0d58 mobyupdate_helpers::M1106_001c0d58; 001c1e18 mobyupdate_helpers::M1106_001c1e18; 0040c3f0 mobyupdate_helpers::M671_0040c3f0
// callees(0): 

double fastfunc::FastFrac(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_4_ = (float)param_1;
  auVar2._4_4_ = (float)param_1;
  auVar2._8_4_ = (float)param_1;
  auVar2._12_4_ = (float)param_1;
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = vectorConvertFromSignedFixedPointWord(auVar2,0);
  uVar1 = storeVectorElementWordIndexed(auVar2,0,param_3);
  *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar1;
  return (double)(float)(param_1 - (double)(longlong)param_1);
}



//==== 0050271c  ns=fastfunc  size=0x14
// sig: undefined FastMod(void)
// callers(0): 
// callees(0): 

double fastfunc::FastMod(double param_1)

{
  return (double)(float)(param_1 - (double)(longlong)param_1);
}



//==== 00502730  ns=fastfunc  size=0x20
// sig: undefined FastIntToDouble(undefined4 arg)
// callers(432): 00011020 boot::FrontEnd_Update; 00016940 mobyupdate_unsorted::Moby1267_DrawHud; 00018238 mobyupdate_helpers::M1274_00018238; 000199f0 mobyupdate_helpers::M1274_000199f0; 0001e958 mobyupdate_unsorted::UpdateMoby_{336_415}; 0002c578 camera0::HandleSpecialTargetActivation; 0002d638 camera0::HandleSpecialTargetUpVec; 0002e3a0 camera0::UpdateCamTarget_0; 0002f530 camera0::???_Cam0_UpdateTargetSpecial; 00032100 camera0::UpdateCamCollisions_0; 000337a0 camera0::UpdateCamRotation_0; 00039fc0 camera::camera13::InitCamera_13; 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 0003fde8 camera::camera19::InitCamera_19; 00041210 camera::camera20::InitCamera_20; 00044598 camera::camera22::Cam22_ModifyFollowCam; 00046c58 camera::camera4::UpdateCamera_4; 00048510 camera::camera5::UpdateMobyDrivenCam; 000514c0 camera::Camera_InitBlender; 000528e8 camera::HandleCameraShake; 000543c8 camera::Camera_CollSphereBump; 00054a10 camera::Camera_DrawReticule; 00055378 camera::TargetCrosshairDraw
// callees(0): 

double fastfunc::FastIntToDouble(int arg)

{
  return (double)(longlong)arg;
}



//==== 00502758  ns=fastfunc  size=0x3c
// sig: undefined FastDoubleToInt(undefined8 double)
// callers(664): 00010c70 boot::FrontEnd_Draw; 00016940 mobyupdate_unsorted::Moby1267_DrawHud; 00018238 mobyupdate_helpers::M1274_00018238; 000199f0 mobyupdate_helpers::M1274_000199f0; 000200b0 mobyupdate_helpers::M458_SpawnRocket; 00020a80 mobyupdate_unsorted::UpdateMoby_458; 0002b898 draw::???_Draw_SetupFogTable; 00031b78 camera0::UpdateSegmentColl_0; 00039fc0 camera::camera13::InitCamera_13; 00040440 camera::camera19::UpdateCamera_19; 000451f0 camera::camera3::Cam3_InitSplinePos; 00045728 camera::camera3::UpdateCamera_3; 0005048c camera::Camera_switchToNewCam; 00053398 camera::Camera_UpdateFog; 000543c8 camera::Camera_CollSphereBump; 00054a10 camera::Camera_DrawReticule; 000558f8 camera::CamCollGrid_FindPrimAtPnt; 00067b90 draw::BuildOcclVisibility; 0006bb78 draw::DefaultDraw; 0006cea0 draw::DrawFancyTextWithBox; 0006d590 draw::DrawSomeOverlay; 000784e8 freeze::DrawDialogText; 000802a0 hero::Hero_UpdateGlowAndBlink; 00085300 hero::Hero_TransAnim; 0008bc30 hero::Hero_UpdateAnim
// callees(0): 

int fastfunc::FastDoubleToInt(double double)

{
  double dVar1;
  
  dVar1 = double + 9.999999747378752e-05;
  if (double - 0.0 < 0.0) {
    dVar1 = double - 9.999999747378752e-05;
  }
  return (int)dVar1;
}



//==== 00502794  ns=stub  size=0x4
// sig: undefined STUB_00502794(void)
// callers(0): 
// callees(0): 

void stub::STUB_00502794(void)

{
  return;
}



//==== 00502798  ns=fastfunc  size=0x24
// sig: undefined FastFMod(void)
// callers(11): 0026e3e0 mobyupdate_helpers::M1405_0026e3e0; 0026e9a0 mobyupdate_helpers::M1406_0026e9a0; 0026eed0 mobyupdate_helpers::M1407_0026eed0; 0026f400 mobyupdate_helpers::M1408_0026f400; 0026f9c0 mobyupdate_helpers::M1409_0026f9c0; 0027ac98 mobyupdate_helpers::M1426_0027ac98; 0029d610 mobyupdate_helpers::M1565_0029d610; 0029db20 mobyupdate_helpers::M1567_0029db20; 003e2030 mobyupdate_unsorted::UpdateMoby_617; 0040b310 mobyupdate_helpers::M669_0040b310; 004687d8 mobyupdate_helpers::M807_004687d8
// callees(1): 005dc9a4 mathfunc::fmod

void fastfunc::FastFMod(void)

{
  mathfunc::fmod();
  return;
}



//==== 005027bc  ns=fastfunc  size=0x94
// sig: undefined FastLerpColor(void)
// callers(156): 00016940 mobyupdate_unsorted::Moby1267_DrawHud; 00077c88 draw::DrawColorGradientStrip; 000784e8 freeze::DrawDialogText; 0008c3d0 hero::HeroUpdateNonRatchet; 0008f538 hero::Hero_UpdateGadgetGlows; 00090548 hero::???_Hero_UpdateManipulatorSpin; 000aa5e0 hero::Hero_UpdateInScene; 000ce170 hud::Draw_QuickSelectHud; 000cf6f0 hud::Draw_ClankCommandHud; 000d1110 hud::Draw_BoltCountUI; 000d27f8 hud::Draw_HoverboardTrickHud; 000d3610 hud::Draw_MobyHealthBarHud; 000d3e20 hud::Draw_MetalDetectorHud; 000d4838 hud::Draw_AmmoCounter; 000d4ef0 hud::Draw_MobyCounterHud; 00106738 mobyutil::TweenColor; 00120918 partupd::UpdatePart_2; 00122ae8 partupd::UpdatePart_8; 00123768 partupd::UpdatePart_11; 00123ec8 partupd::SpawnPart_12; 00124308 partupd::UpdatePart_12; 0012eec8 partupd::UpdatePart_48; 0012f800 partupd::UpdatePart_52; 00130a78 partupd::UpdatePart_58; 00131308 partupd::UpdatePart_60
// callees(0): 

undefined4 fastfunc::FastLerpColor(double param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar3 - 0x50);
  *puVar2 = uVar3;
  *(float *)(puVar2 + 8) = (float)param_1;
  *(float *)((int)puVar2 + 0x44) = (float)param_1;
  lVar4 = 0;
  *(float *)(puVar2 + 9) = (float)param_1;
  *(float *)((int)puVar2 + 0x4c) = (float)param_1;
  *(undefined4 *)(puVar2 + 6) = param_2;
  *(undefined4 *)((int)puVar2 + 0x34) = param_3;
  auVar7 = ZEXT416(0xfffffff8);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar8 = *(undefined1 (*) [16])(puVar2 + 8);
  do {
    auVar9 = loadVectorLeftIndexed(lVar4,uVar3 - 0x20);
    auVar10 = loadVectorLeftIndexed(lVar4,uVar3 - 0x1c);
    auVar9 = vectorShiftRightWord(auVar9,auVar7);
    auVar10 = vectorShiftRightWord(auVar10,auVar7);
    uVar6 = lVar4 + (uVar3 - 0x50);
    iVar5 = (int)lVar4 + 1;
    auVar11 = vectorConvertFromUnsignedFixedPointWord(auVar9,0);
    auVar9 = vectorSubtractUnsignedWordModulo(auVar10,auVar9);
    lVar4 = (longlong)iVar5;
    auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar8,auVar11);
    auVar9 = vectorConvertToUnsignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xff;
    uVar1 = storeVectorElementByteIndexed
                      (auVar9 | auVar9 << 8 | auVar9 << 0x10 | auVar9 << 0x18 | auVar9 << 0x20 |
                       auVar9 << 0x28 | auVar9 << 0x30 | auVar9 << 0x38 | auVar9 << 0x40 |
                       auVar9 << 0x48 | auVar9 << 0x50 | auVar9 << 0x58 | auVar9 << 0x60 |
                       auVar9 << 0x68 | auVar9 << 0x70 | auVar9 << 0x78,0x38,uVar6 & 0xffffffff);
    *(undefined1 *)((int)uVar6 + 0x38) = uVar1;
  } while (iVar5 < 4);
  return *(undefined4 *)(puVar2 + 7);
}



//==== 00502850  ns=Global  size=0x94
// sig: undefined FUN_00502850(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00502850(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_10 [4];
  byte local_c [4];
  undefined4 local_8 [2];
  
  iVar2 = 0;
  do {
    iVar1 = (int)((longlong)(int)(uint)local_10[iVar2] * (longlong)(int)(uint)local_c[iVar2]);
    iVar3 = iVar2 + 1;
    *(char *)((int)local_8 + iVar2) =
         (char)((int)(iVar1 + ((uint)(0x7fff - (longlong)(int)(uint)local_10[iVar2] *
                                               (longlong)(int)(uint)local_c[iVar2] >> 0x3f) &
                              0x7fffU - iVar1)) >> 7);
    iVar2 = iVar3;
  } while (iVar3 < 4);
  return local_8[0];
}



//==== 00502910  ns=fastfunc  size=0x88
// sig: undefined FastCheckBsphereInView(void)
// callers(53): 00077048 draw::DrawsFlowingLava; 000774b8 draw::???_Draw_ScrollingTexStrips; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001129d0 mobyutil::MB_ScaledVecWrapper; 0017d4b8 water::WaterSheet_DrawAll; 0017e700 water::OceanSpecialPass; 0017ec40 water::IcePass; 001ae060 mobyupdate_unsorted::UpdateMoby_1067; 001dbf60 mobyupdate_unsorted::UpdateMoby_1139; 0020dd00 mobyupdate_unsorted::UpdateMoby_1224; 0022aff8 mobyupdate_unsorted::UpdateMoby_1259; 002476e8 mobyupdate_unsorted::UpdateMoby_1319; 0028a9f0 mobyupdate_unsorted::UpdateMoby_1479; 0028bac0 mobyupdate_helpers::M1479_0028bac0; 0028f7d0 mobyupdate_unsorted::UpdateMoby_1512; 00290158 FUN_00290158; 00296468 mobyupdate_helpers::M1544_00296468; 002967f0 mobyupdate_helpers::M1544_002967f0; 00296c20 mobyupdate_helpers::M1544_00296c20; 002a7ac0 mobyupdate_unsorted::UpdateMoby_1649; 002a9010 mobyupdate_unsorted::UpdateMoby_a_lot_0; 002c3118 mobyupdate_unsorted::UpdateMoby_1843; 002d5780 mobyupdate_unsorted::UpdateMoby_1903; 002da688 mobyupdate_unsorted::UpdateMoby_1919
// callees(1): 004ff328 fastfunc::FastCheckBsphere

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fastfunc::FastCheckBsphereInView(undefined8 param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined8 in_LR;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_10 [16];
  
  auVar3 = loadVectorLeftIndexed(in_LR,param_2);
  auVar4 = loadVectorLeftIndexed(4,param_2);
  auVar5 = loadVectorLeftIndexed(8,param_2);
  auVar3 = vectorPermute(auVar3,auVar4,_DAT_005028f0);
  auVar4 = vectorPermute(auVar5,auStack_10,_DAT_005028f0);
  vectorPermute(auVar3,auVar4,_DAT_00502900);
  iVar2 = FastCheckBsphere((double)*(float *)((int)param_2 + 0xc),param_1,
                           (ulonglong)DAT_00902e9c + 800);
  if (iVar2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 005029c0  ns=Global  size=0x88
// sig: undefined FUN_005029c0(void)
// callers(0): 
// callees(1): 004ff328 fastfunc::FastCheckBsphere

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_005029c0(undefined8 param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined8 in_LR;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_10 [16];
  
  auVar3 = loadVectorLeftIndexed(in_LR,param_2);
  auVar4 = loadVectorLeftIndexed(4,param_2);
  auVar5 = loadVectorLeftIndexed(8,param_2);
  auVar3 = vectorPermute(auVar3,auVar4,_DAT_005029a0);
  auVar4 = vectorPermute(auVar5,auStack_10,_DAT_005029a0);
  vectorPermute(auVar3,auVar4,_DAT_005029b0);
  iVar2 = fastfunc::FastCheckBsphere
                    ((double)*(float *)((int)param_2 + 0xc),param_1,(ulonglong)DAT_00902e9c + 800);
  if (iVar2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 00502a48  ns=Global  size=0x8
// sig: undefined FUN_00502a48(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502a48(void)

{
  return 0;
}



//==== 00502a50  ns=Global  size=0x8
// sig: undefined FUN_00502a50(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502a50(void)

{
  return 0;
}



//==== 00502a58  ns=Global  size=0x4
// sig: undefined FUN_00502a58(void)
// callers(0): 
// callees(0): 

void FUN_00502a58(void)

{
  return;
}



//==== 00502a5c  ns=Global  size=0x8
// sig: undefined FUN_00502a5c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502a5c(void)

{
  return 0xffffffffffffffff;
}



//==== 00502a64  ns=fastfunc  size=0x44
// sig: undefined FastVecSub(void)
// callers(35): 000f959c mobyfunc::FindMobysCloseToUpdate; 001150f8 mobyutil::MB_PathPosAtDist; 00118e38 mobyutil::MB_SpawnGridParticles; 00129b00 partupd::SpawnPart_31; 00129cb0 partupd::UpdatePart_31; 00187a68 mobyupdate_helpers::M1282_00187a68; 001fbc78 mobyupdate_helpers::M1202_001fbc78; 00201da8 mobyupdate_helpers::M121_00201da8; 00212cc0 mobyupdate_unsorted::UpdateMoby_123; 00213920 mobyupdate_helpers::M1230_00213920; 00229518 mobyupdate_unsorted::UpdateMoby_1257; 0026af90 mobyupdate_unsorted::UpdateMoby_1400; 0027ba70 mobyupdate_unsorted::UpdateMoby_1430; 0028bf80 mobyupdate_unsorted::UpdateMoby_{148_255}; 002959f8 mobyupdate_unsorted::UpdateMoby_154; 002a4070 mobyupdate_unsorted::UpdateMoby_1629; 002b8748 mobyupdate_helpers::M1772_002b8748; 00300950 mobyupdate_helpers::M233_00300950; 00301d00 mobyupdate_unsorted::UpdateMoby_233; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003a82b8 mobyupdate_unsorted::UpdateMoby_a_lot_10; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 00407f28 mobyupdate_unsorted::UpdateMoby_660; 0040ac50 mobyupdate_unsorted::UpdateMoby_669; 00415f18 mobyupdate_helpers::M688_00415f18
// callees(0): 

void fastfunc::FastVecSub(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  fVar6 = param_3[3];
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  param_1[3] = fVar5 - fVar6;
  return;
}



//==== 00502aa8  ns=Global  size=0x60
// sig: undefined FUN_00502aa8(void)
// callers(0): 
// callees(0): 

longlong FUN_00502aa8(float *param_1,float *param_2,float *param_3)

{
  return 1 - ((ulonglong)
              (longlong)
              ((param_1[2] - param_2[2]) * param_3[2] +
              (*param_1 - *param_2) * *param_3 + (param_1[1] - param_2[1]) * param_3[1]) >> 0x1f & 1
             );
}



//==== 00502b08  ns=fastfunc  size=0x64
// sig: undefined FastVecAddSelf(void)
// callers(41): 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 000aaec0 hero::HandleHeroMovement; 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 001162a0 mobyutil::???_MB_SpawnRingPartFx; 0012e5b8 partupd::UpdatePart_44; 0012f5a0 partupd::UpdatePart_51; 0018d608 mobyupdate_unsorted::UpdateMoby_{1024_1302}; 0019ebd8 mobyupdate_unsorted::UpdateMoby_1047; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 0020c490 mobyupdate_unsorted::UpdateMoby_1221; 0020c8e8 mobyupdate_unsorted::UpdateMoby_1222; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00212cc0 mobyupdate_unsorted::UpdateMoby_123; 00213920 mobyupdate_helpers::M1230_00213920; 00229518 mobyupdate_unsorted::UpdateMoby_1257; 0023eb98 mobyupdate_unsorted::UpdateMoby_1292; 00242c28 mobyupdate_unsorted::UpdateMoby_{351_1301}; 00252710 mobyupdate_unsorted::UpdateMoby_1346; 0027ba70 mobyupdate_unsorted::UpdateMoby_1430; 0028bf80 mobyupdate_unsorted::UpdateMoby_{148_255}; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002959f8 mobyupdate_unsorted::UpdateMoby_154; 002f8c70 mobyupdate_unsorted::UpdateMoby_221
// callees(0): 

void fastfunc::FastVecAddSelf(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_2[1] + fVar1;
  param_2[2] = param_2[2] + fVar2;
  param_2[3] = param_2[3] + fVar3;
  *param_1 = *param_2;
  fVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = fVar1;
  param_1[3] = param_2[3];
  return;
}



//==== 00502b6c  ns=fastfunc  size=0x64
// sig: undefined FastVecSubSelf(void)
// callers(2): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00293c48 mobyupdate_unsorted::UpdateMoby_153
// callees(0): 

void fastfunc::FastVecSubSelf(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = *param_2 - *param_3;
  param_2[1] = param_2[1] - fVar1;
  param_2[2] = param_2[2] - fVar2;
  param_2[3] = param_2[3] - fVar3;
  *param_1 = *param_2;
  fVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = fVar1;
  param_1[3] = param_2[3];
  return;
}



//==== 00502bd0  ns=fastfunc  size=0x54
// sig: undefined FastVecScaleSelf(void)
// callers(2): 0012e5b8 partupd::UpdatePart_44; 0012f5a0 partupd::UpdatePart_51
// callees(0): 

void fastfunc::FastVecScaleSelf(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  *param_3 = (float)((double)*param_3 * param_1);
  param_3[1] = (float)((double)param_3[1] * param_1);
  param_3[2] = (float)((double)param_3[2] * param_1);
  param_3[3] = (float)((double)param_3[3] * param_1);
  fVar1 = param_3[1];
  *param_2 = *param_3;
  fVar2 = param_3[2];
  param_2[1] = fVar1;
  fVar1 = param_3[3];
  param_2[2] = fVar2;
  param_2[3] = fVar1;
  return;
}



//==== 00502c24  ns=fastfunc  size=0x44
// sig: undefined FastVecMul(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVecMul(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  fVar6 = param_3[3];
  *param_1 = *param_2 * *param_3;
  param_1[1] = fVar1 * fVar2;
  param_1[2] = fVar3 * fVar4;
  param_1[3] = fVar5 * fVar6;
  return;
}



//==== 00502c68  ns=fastfunc  size=0x64
// sig: undefined FastVecMulSelf(void)
// callers(0): 
// callees(0): 

void fastfunc::FastVecMulSelf(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = *param_2 * *param_3;
  param_2[1] = param_2[1] * fVar1;
  param_2[2] = param_2[2] * fVar2;
  param_2[3] = param_2[3] * fVar3;
  *param_1 = *param_2;
  fVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = fVar1;
  param_1[3] = param_2[3];
  return;
}



//==== 00502cd0  ns=Global  size=0x54
// sig: undefined FUN_00502cd0(void)
// callers(1): 0001401c boot::boot
// callees(0): 

void FUN_00502cd0(void)

{
  DAT_009271f8 = &DAT_0159b374;
  DAT_00927200 = &DAT_0159b37c;
  DAT_00927204 = &DAT_0159b380;
  DAT_009271fc = &DAT_0159b378;
  DAT_0159b35c = &DAT_0159b384;
  return;
}



//==== 00502d24  ns=Global  size=0x5c
// sig: undefined FUN_00502d24(void)
// callers(1): 00502d80 FUN_00502d80
// callees(0): 

void FUN_00502d24(uint param_1,int *param_2)

{
  param_1 = param_1 & 3;
  if (param_1 == 0) {
    *param_2 = *param_2 + 0x100;
  }
  else if (param_1 < 2) {
    *param_2 = *param_2 + 0x10;
  }
  else if (param_1 < 3) {
    *param_2 = *param_2 + 1;
  }
  return;
}



//==== 00502d80  ns=Global  size=0x4c
// sig: undefined FUN_00502d80(void)
// callers(1): 000e0e60 main::startLevel
// callees(1): 00502d24 FUN_00502d24

void FUN_00502d80(void)

{
  FUN_00502d24(DAT_0159b378,&DAT_0159b374);
  FUN_00502d24(DAT_0159b380,&DAT_0159b37c);
  return;
}



//==== 00502dcc  ns=Global  size=0x8
// sig: undefined FUN_00502dcc(void)
// callers(7): 000627d0 debug::UpdateDebugSelections; 000db7a4 loaders::LoadPifFile; 000e0038 loaders::LoadNpcMobys; 0011d088 music::music_LoadFromHostWad; 0011d1f0 music::LoadMusic; 0011da54 music::music_LoadFromHostWad_v2; 0042664c mobyupdate_helpers::M1807_0042664c
// callees(0): 

undefined8 FUN_00502dcc(void)

{
  return 0;
}



//==== 00502dd4  ns=stub  size=0x8
// sig: undefined STUB_00502dd4(void)
// callers(5): 000627d0 debug::UpdateDebugSelections; 000db7a4 loaders::LoadPifFile; 0011d088 music::music_LoadFromHostWad; 0011d1f0 music::LoadMusic; 0011da54 music::music_LoadFromHostWad_v2
// callees(0): 

undefined8 stub::STUB_00502dd4(void)

{
  return 0;
}



//==== 00502ddc  ns=stub  size=0x4
// sig: undefined STUB_00502ddc(void)
// callers(7): 000627d0 debug::UpdateDebugSelections; 000db7a4 loaders::LoadPifFile; 000e0038 loaders::LoadNpcMobys; 0011d088 music::music_LoadFromHostWad; 0011d1f0 music::LoadMusic; 0011da54 music::music_LoadFromHostWad_v2; 0042664c mobyupdate_helpers::M1807_0042664c
// callees(0): 

void stub::STUB_00502ddc(void)

{
  return;
}



//==== 00502de0  ns=stub  size=0x8
// sig: undefined STUB_00502de0_RET_0(void)
// callers(5): 000627d0 debug::UpdateDebugSelections; 000db7a4 loaders::LoadPifFile; 0011d088 music::music_LoadFromHostWad; 0011d1f0 music::LoadMusic; 0011da54 music::music_LoadFromHostWad_v2
// callees(0): 

undefined8 stub::STUB_00502de0_RET_0(void)

{
  return 0;
}



//==== 00502de8  ns=stub  size=0x4
// sig: undefined STUB_00502de8(void)
// callers(2): 000627d0 debug::UpdateDebugSelections; 0042664c mobyupdate_helpers::M1807_0042664c
// callees(0): 

void stub::STUB_00502de8(void)

{
  return;
}



//==== 00502dec  ns=Global  size=0x4
// sig: undefined FUN_00502dec(void)
// callers(0): 
// callees(0): 

void FUN_00502dec(void)

{
  return;
}



//==== 00502df0  ns=Global  size=0x4
// sig: undefined FUN_00502df0(void)
// callers(0): 
// callees(0): 

void FUN_00502df0(void)

{
  return;
}



//==== 00502df4  ns=Global  size=0x4
// sig: undefined FUN_00502df4(void)
// callers(0): 
// callees(0): 

void FUN_00502df4(void)

{
  return;
}



//==== 00502df8  ns=Global  size=0x4
// sig: undefined FUN_00502df8(void)
// callers(1): 001693c8 update::mode_movieUnInit
// callees(0): 

void FUN_00502df8(void)

{
  return;
}



//==== 00502dfc  ns=Global  size=0x4
// sig: undefined FUN_00502dfc(void)
// callers(1): 001693c8 update::mode_movieUnInit
// callees(0): 

void FUN_00502dfc(void)

{
  return;
}



//==== 00502e00  ns=Global  size=0x8
// sig: undefined FUN_00502e00(void)
// callers(1): 0007a350 draw::InitGsRegPresets_7a350
// callees(0): 

undefined8 FUN_00502e00(void)

{
  return 0;
}



//==== 00502e08  ns=Global  size=0x8
// sig: undefined FUN_00502e08(void)
// callers(1): 0007a350 draw::InitGsRegPresets_7a350
// callees(0): 

undefined8 FUN_00502e08(void)

{
  return 0;
}



//==== 00502e10  ns=Global  size=0x8
// sig: undefined FUN_00502e10(void)
// callers(1): 0007a350 draw::InitGsRegPresets_7a350
// callees(0): 

undefined8 FUN_00502e10(void)

{
  return 0;
}



//==== 00502e18  ns=Global  size=0x8
// sig: undefined FUN_00502e18(void)
// callers(1): 0007a350 draw::InitGsRegPresets_7a350
// callees(0): 

undefined8 FUN_00502e18(void)

{
  return 0;
}



//==== 00502e20  ns=Global  size=0x8
// sig: undefined FUN_00502e20(void)
// callers(1): 0007a350 draw::InitGsRegPresets_7a350
// callees(0): 

undefined8 FUN_00502e20(void)

{
  return 0;
}



//==== 00502e28  ns=Global  size=0x8
// sig: undefined FUN_00502e28(void)
// callers(1): 0007a350 draw::InitGsRegPresets_7a350
// callees(0): 

undefined8 FUN_00502e28(void)

{
  return 0;
}



//==== 00502e30  ns=Global  size=0x8
// sig: undefined FUN_00502e30(void)
// callers(1): 0007a350 draw::InitGsRegPresets_7a350
// callees(0): 

undefined8 FUN_00502e30(void)

{
  return 0;
}



//==== 00502e38  ns=Global  size=0x8
// sig: undefined FUN_00502e38(void)
// callers(1): 0007a350 draw::InitGsRegPresets_7a350
// callees(0): 

undefined8 FUN_00502e38(void)

{
  return 0;
}



//==== 00502e40  ns=Global  size=0x8
// sig: undefined FUN_00502e40(void)
// callers(1): 0007a350 draw::InitGsRegPresets_7a350
// callees(0): 

undefined8 FUN_00502e40(void)

{
  return 0;
}



//==== 00502e48  ns=Global  size=0x8
// sig: undefined FUN_00502e48(void)
// callers(1): 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 FUN_00502e48(void)

{
  return 0;
}



//==== 00502e50  ns=Global  size=0x8
// sig: undefined FUN_00502e50(void)
// callers(12): 0007a350 draw::InitGsRegPresets_7a350; 00153194 draw::InitGsRegPresets_153194; 0029bde8 mobyupdate_helpers::M1564_0029bde8; 0029c6c8 mobyupdate_helpers::M1564_0029c6c8; 0029cc78 mobyupdate_helpers::M1564_0029cc78; 002a94c8 mobyupdate_helpers::M1671_002a94c8; 0032aa00 mobyupdate_helpers::M280_0032aa00; 003da478 mobyupdate_helpers::M611_003da478; 0044fea8 mobyupdate_helpers::M761_0044fea8; 00464590 mobyupdate_helpers::M800_00464590; 00465380 mobyupdate_helpers::M800_00465380; 004687d8 mobyupdate_helpers::M807_004687d8
// callees(0): 

undefined8 FUN_00502e50(void)

{
  return 0;
}



//==== 00502e58  ns=Global  size=0x8
// sig: undefined FUN_00502e58(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502e58(void)

{
  return 0;
}



//==== 00502e60  ns=Global  size=0x8
// sig: undefined FUN_00502e60(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502e60(void)

{
  return 0;
}



//==== 00502e68  ns=Global  size=0x8
// sig: undefined FUN_00502e68(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502e68(void)

{
  return 0;
}



//==== 00502e70  ns=Global  size=0x8
// sig: undefined FUN_00502e70(void)
// callers(9): 0004f840 loaders::GsTex_Bind; 000768e8 draw::???_Draw_EffectStrip_M401; 0007a350 draw::InitGsRegPresets_7a350; 00152880 draw::???_DrawScreenEffect_BuildPacketB; 00152b44 draw::???_DrawScreenEffect_BuildBlendPacket; 001658d8 draw::InitGsRegPresets_1658d8; 001e43f0 mobyupd::update1160::M1160_DrawShape; 001e4610 mobyupd::update1160::M1160_DrawShapeScaled; 001e4870 mobyupd::update1160::M1160_DrawShapeRotated
// callees(0): 

undefined8 FUN_00502e70(void)

{
  return 0;
}



//==== 00502e78  ns=Global  size=0x8
// sig: undefined FUN_00502e78(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502e78(void)

{
  return 0;
}



//==== 00502e80  ns=Global  size=0x8
// sig: undefined FUN_00502e80(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502e80(void)

{
  return 0;
}



//==== 00502e88  ns=Global  size=0x8
// sig: undefined FUN_00502e88(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502e88(void)

{
  return 0;
}



//==== 00502e90  ns=Global  size=0x8
// sig: undefined FUN_00502e90(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502e90(void)

{
  return 0;
}



//==== 00502e98  ns=Global  size=0x8
// sig: undefined FUN_00502e98(void)
// callers(5): 001658d8 draw::InitGsRegPresets_1658d8; 00174d34 vuchain::VU1_addDataRefToLoc; 00174dd0 vuchain::VU1_addDataDirect; 00174ea0 vuchain::VU1_skipData; 0017ee14 water::Water_StaticInitGsPackets
// callees(0): 

undefined8 FUN_00502e98(void)

{
  return 0;
}



//==== 00502ea0  ns=Global  size=0x8
// sig: undefined FUN_00502ea0(void)
// callers(10): 0004f2f4 loaders::GsTex_BuildUploadPacket; 0004faf4 loaders::GsTex_StaticInit; 000768e8 draw::???_Draw_EffectStrip_M401; 000777d0 draw::???_Draw_InitGsRegPresets_777d0; 0007a350 draw::InitGsRegPresets_7a350; 00152880 draw::???_DrawScreenEffect_BuildPacketB; 00152b44 draw::???_DrawScreenEffect_BuildBlendPacket; 00153194 draw::InitGsRegPresets_153194; 001658d8 draw::InitGsRegPresets_1658d8; 0017ee14 water::Water_StaticInitGsPackets
// callees(0): 

undefined8 FUN_00502ea0(void)

{
  return 0;
}



//==== 00502ea8  ns=idol_draw  size=0x30
// sig: undefined PackCmd(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 depth)
// callers(227): 00012ec8 boot::GameStart; 00016940 mobyupdate_unsorted::Moby1267_DrawHud; 00069a50 draw::FontPrint_unk3; 0006b890 draw::DrawScreenInsertEffect; 0006bb78 draw::DefaultDraw; 0006c8d0 draw::FontPrint; 0006d830 draw::DrawLameShadows; 00071180 draw::SetScreenResolution; 00072128 draw::InitScreenEffects; 00074fa0 draw::ImpactSprite_Draw; 000768e8 draw::???_Draw_EffectStrip_M401; 00077048 draw::DrawsFlowingLava; 000774b8 draw::???_Draw_ScrollingTexStrips; 000777d0 draw::???_Draw_InitGsRegPresets_777d0; 0007a350 draw::InitGsRegPresets_7a350; 000d9668 initsky::DrawSceneShipEffect; 000ec2d8 mobyattack::Spawn_Moby1523_Blueball2; 000ec418 mobyattack::Spawn_Moby1523_GC_Blueball; 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 000f1850 mobyfunc::DrawMobyDepth; 000f1a78 mobyfunc::DrawMobys; 00119028 mobyutil::MB_DrawGlowFX; 0013c5e8 pause::DrawTVTextures; 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu
// callees(0): 

ulonglong idol_draw::PackCmd(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4
                            ,longlong depth)

{
  return depth << 0x20 | param_1 | (param_2 & 0x3fffffff) << 2 | (param_3 & 0xfffffff) << 4 |
         (param_4 & 0x3ffffff) << 6;
}



//==== 00502ed8  ns=Global  size=0x30
// sig: undefined FUN_00502ed8(void)
// callers(0): 
// callees(0): 

ulonglong FUN_00502ed8(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5)

{
  return param_5 << 0x20 | param_1 | (param_2 & 0x3fffffff) << 2 | (param_3 & 0xfffffff) << 4 |
         (param_4 & 0x3ffffff) << 6;
}



//==== 00502f08  ns=Global  size=0x54
// sig: undefined FUN_00502f08(void)
// callers(174): 0006d830 draw::DrawLameShadows; 00071f70 draw::???_Draw_FogBlendPass; 000768e8 draw::???_Draw_EffectStrip_M401; 000777d0 draw::???_Draw_InitGsRegPresets_777d0; 0007a350 draw::InitGsRegPresets_7a350; 000d9668 initsky::DrawSceneShipEffect; 000dc7fc loaders::SetUpVisGif; 00119028 mobyutil::MB_DrawGlowFX; 0013c5e8 pause::DrawTVTextures; 00149b50 pause::MapPage_DrawOverlay; 00153194 draw::InitGsRegPresets_153194; 0015ebd0 space::Space_DrawShipEngineGlow; 0015ef98 space::Space_DrawTransitionOverlay; 0015f6d0 space::???_Space_TransitionDrawPass; 001607c0 space::Space_DrawShipEffects; 00164760 space::PlaySpacePlate; 001658d8 draw::InitGsRegPresets_1658d8; 001717a8 vendor::Vendor_DrawFlickerText; 00172c40 vendor::Vendor_HudUpdate; 00173690 vendor::Vendor_DrawMobyHighlight; 00173f78 vendor::Vendor_DrawScrollingOverlay; 0017ee14 water::Water_StaticInitGsPackets; 0018150c mobyupdate_helpers::M1000_0018150c; 0018cd58 mobyupdate_helpers::M1302_0018cd58; 001942f4 mobyupdate_helpers::M1038_001942f4
// callees(0): 

ulonglong FUN_00502f08(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,ulonglong param_6)

{
  return param_1 & 3 | (param_2 & 3) << 2 | (param_3 & 0x3ff) << 4 | (param_4 & 0x3ff) << 0xe |
         (param_5 & 0x3ff) << 0x18 | (param_6 & 0x3ff) << 0x22;
}



//==== 00502f5c  ns=Global  size=0x8
// sig: undefined FUN_00502f5c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502f5c(void)

{
  return 0;
}



//==== 00502f64  ns=Global  size=0x8
// sig: undefined FUN_00502f64(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502f64(void)

{
  return 0;
}



//==== 00502f6c  ns=stub  size=0x8
// sig: undefined STUB_00502f6c(void)
// callers(4): 0004f544 loaders::GsTex_Upload; 0004fb50 bloaders::LoadPifAsPSMT8H; 000db2ec loaders::ParsePif; 000dc7fc loaders::SetUpVisGif
// callees(0): 

undefined8 stub::STUB_00502f6c(void)

{
  return 0;
}



//==== 00502f74  ns=stub  size=0x8
// sig: undefined FUN_00502f74_RET_0(void)
// callers(6): 000768e8 draw::???_Draw_EffectStrip_M401; 000e2e10 map::DrawMapFrame; 000e64fc map::Map_InitColors; 00152880 draw::???_DrawScreenEffect_BuildPacketB; 00164760 space::PlaySpacePlate; 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 stub::FUN_00502f74_RET_0(void)

{
  return 0;
}



//==== 00502f7c  ns=idol_draw  size=0x1c
// sig: undefined Blend(void)
// callers(51): 00013970 stub::Transition_DrawSky; 00069a50 draw::FontPrint_unk3; 0006c8d0 draw::FontPrint; 00071f70 draw::???_Draw_FogBlendPass; 000768e8 draw::???_Draw_EffectStrip_M401; 000777d0 draw::???_Draw_InitGsRegPresets_777d0; 0007a350 draw::InitGsRegPresets_7a350; 000d93c0 initsky::InitSky; 000e0e60 main::startLevel; 000e2e10 map::DrawMapFrame; 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 001402c8 pause::MenuText_Draw; 00141c90 pause::DrawPauseStrings; 00144638 pause::DrawSkillPointsFrame; 00146708 pause::PlanetInfo_Draw; 00149b50 pause::MapPage_DrawOverlay; 0014a86c pause::ConfirmDialog_Draw; 0014ad88 pause::DrawCameraSettingsFrame; 0014b9a8 pause::MessageBox_Draw; 00152b44 draw::???_DrawScreenEffect_BuildBlendPacket; 00152df8 draw::DrawScreenEffect_152df8; 00159e88 space::Space_DrawSkyShell; 0015a670 skyfunc::SkyDrawShellGouraud; 0015f6d0 space::???_Space_TransitionDrawPass
// callees(0): 

uint idol_draw::Blend(uint param_1,int param_2,int param_3)

{
  return param_1 | param_2 << 1 | param_3 << 4;
}



//==== 00502f98  ns=Global  size=0x1c
// sig: undefined FUN_00502f98(void)
// callers(32): 00071180 draw::SetScreenResolution; 000777d0 draw::???_Draw_InitGsRegPresets_777d0; 0007a350 draw::InitGsRegPresets_7a350; 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 00144ec0 pause::MenuButton_Draw; 00147334 pause::ItemInfo_DrawCost; 00147630 pause::MapPage_Draw; 001476f0 pause::MapMenu_DrawOptions; 00147bb0 pause::ExitSelectPrompt_Draw; 00147cf8 pause::DrawMissionsFrame; 0014d1f0 pause::SecretMenu_Draw; 00152880 draw::???_DrawScreenEffect_BuildPacketB; 00153194 draw::InitGsRegPresets_153194; 0015f6d0 space::???_Space_TransitionDrawPass; 0015fcb0 space::Space_DrawLoadingBanner; 0016114c space::TransitionDraw_Space; 0017ee14 water::Water_StaticInitGsPackets; 0024ea90 mobyupdate_helpers::M1338_0024ea90; 00289ee0 mobyupdate_helpers::M1474_00289ee0; 0029bde8 mobyupdate_helpers::M1564_0029bde8; 0029c6c8 mobyupdate_helpers::M1564_0029c6c8; 0029cc78 mobyupdate_helpers::M1564_0029cc78; 0032aa00 mobyupdate_helpers::M280_0032aa00; 0035b698 mobyupdate_helpers::M388_0035b698
// callees(0): 

uint FUN_00502f98(uint param_1,int param_2,int param_3)

{
  return param_1 | param_2 << 1 | param_3 << 4;
}



//==== 00502fb4  ns=Global  size=0x8
// sig: undefined FUN_00502fb4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502fb4(void)

{
  return 0;
}



//==== 00502fbc  ns=stub  size=0x8
// sig: undefined STUB_00502fbc_RET_0(void)
// callers(9): 0004f544 loaders::GsTex_Upload; 0004fb50 bloaders::LoadPifAsPSMT8H; 000db2ec loaders::ParsePif; 000dc7fc loaders::SetUpVisGif; 000e0a2c loaders::QueuePifLoad; 000e0b9c loaders::QueuePifLoad; 000e0ce4 loaders::QueuePifLoad; 00153194 draw::InitGsRegPresets_153194; 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 stub::STUB_00502fbc_RET_0(void)

{
  return 0;
}



//==== 00502fc4  ns=Global  size=0x8
// sig: undefined FUN_00502fc4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502fc4(void)

{
  return 0;
}



//==== 00502fcc  ns=Global  size=0x8
// sig: undefined FUN_00502fcc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502fcc(void)

{
  return 0;
}



//==== 00502fd4  ns=stub  size=0x8
// sig: undefined STUB_00502fd4_RET_0(void)
// callers(171): 0004f544 loaders::GsTex_Upload; 0004fb50 bloaders::LoadPifAsPSMT8H; 0006d830 draw::DrawLameShadows; 00071f70 draw::???_Draw_FogBlendPass; 000768e8 draw::???_Draw_EffectStrip_M401; 000777d0 draw::???_Draw_InitGsRegPresets_777d0; 0007a350 draw::InitGsRegPresets_7a350; 000d9668 initsky::DrawSceneShipEffect; 000db2ec loaders::ParsePif; 000dc7fc loaders::SetUpVisGif; 00119028 mobyutil::MB_DrawGlowFX; 00153194 draw::InitGsRegPresets_153194; 0015ebd0 space::Space_DrawShipEngineGlow; 0015ef98 space::Space_DrawTransitionOverlay; 0015f6d0 space::???_Space_TransitionDrawPass; 001607c0 space::Space_DrawShipEffects; 001658d8 draw::InitGsRegPresets_1658d8; 00173690 vendor::Vendor_DrawMobyHighlight; 00173f78 vendor::Vendor_DrawScrollingOverlay; 0017ee14 water::Water_StaticInitGsPackets; 0018150c mobyupdate_helpers::M1000_0018150c; 0018cd58 mobyupdate_helpers::M1302_0018cd58; 001942f4 mobyupdate_helpers::M1038_001942f4; 00196fc8 mobyupdate_helpers::M1045_00196fc8; 00197938 mobyupdate_helpers::M1045_00197938
// callees(0): 

undefined8 stub::STUB_00502fd4_RET_0(void)

{
  return 0;
}



//==== 00502fdc  ns=Global  size=0x8
// sig: undefined FUN_00502fdc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502fdc(void)

{
  return 0;
}



//==== 00502fe4  ns=Global  size=0x8
// sig: undefined FUN_00502fe4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502fe4(void)

{
  return 0;
}



//==== 00502fec  ns=Global  size=0x8
// sig: undefined FUN_00502fec(void)
// callers(9): 0004f840 loaders::GsTex_Bind; 000768e8 draw::???_Draw_EffectStrip_M401; 0007a350 draw::InitGsRegPresets_7a350; 00152880 draw::???_DrawScreenEffect_BuildPacketB; 00152b44 draw::???_DrawScreenEffect_BuildBlendPacket; 001658d8 draw::InitGsRegPresets_1658d8; 001e43f0 mobyupd::update1160::M1160_DrawShape; 001e4610 mobyupd::update1160::M1160_DrawShapeScaled; 001e4870 mobyupd::update1160::M1160_DrawShapeRotated
// callees(0): 

undefined8 FUN_00502fec(void)

{
  return 0;
}



//==== 00502ff4  ns=Global  size=0x8
// sig: undefined FUN_00502ff4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00502ff4(void)

{
  return 0;
}



//==== 00502ffc  ns=stub  size=0x8
// sig: undefined VU1_addGSregister(void)
// callers(11): 00013970 stub::Transition_DrawSky; 0006b890 draw::DrawScreenInsertEffect; 000768e8 draw::???_Draw_EffectStrip_M401; 0007a350 draw::InitGsRegPresets_7a350; 000d93c0 initsky::InitSky; 00159e88 space::Space_DrawSkyShell; 0015a670 skyfunc::SkyDrawShellGouraud; 00197c88 mobyupdate_helpers::M1045_00197c88; 0019d958 mobyupdate_helpers::M1046_0019d958; 001c0d58 mobyupdate_helpers::M1106_001c0d58; 001c90b0 mobyupdate_helpers::M1107_001c90b0
// callees(0): 

undefined8 stub::VU1_addGSregister(void)

{
  return 0;
}



//==== 00503004  ns=Global  size=0x8
// sig: undefined FUN_00503004(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503004(void)

{
  return 0;
}



//==== 0050300c  ns=Global  size=0x8
// sig: undefined FUN_0050300c(void)
// callers(14): 0004f2f4 loaders::GsTex_BuildUploadPacket; 0004f840 loaders::GsTex_Bind; 00076580 draw::DrawWater; 000768e8 draw::???_Draw_EffectStrip_M401; 001527c0 draw::???_DrawScreenEffect_WriteGifTag; 00152880 draw::???_DrawScreenEffect_BuildPacketB; 00152b44 draw::???_DrawScreenEffect_BuildBlendPacket; 00152df8 draw::DrawScreenEffect_152df8; 0015a33c skyfunc::SkyDrawShellTextured; 0015a670 skyfunc::SkyDrawShellGouraud; 001658d8 draw::InitGsRegPresets_1658d8; 001e43f0 mobyupd::update1160::M1160_DrawShape; 001e4610 mobyupd::update1160::M1160_DrawShapeScaled; 001e4870 mobyupd::update1160::M1160_DrawShapeRotated
// callees(0): 

undefined8 FUN_0050300c(void)

{
  return 0;
}



//==== 00503014  ns=Global  size=0x8
// sig: undefined FUN_00503014(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503014(void)

{
  return 0;
}



//==== 0050301c  ns=Global  size=0x8
// sig: undefined FUN_0050301c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050301c(void)

{
  return 0;
}



//==== 00503024  ns=Global  size=0x8
// sig: undefined FUN_00503024(void)
// callers(1): 00076580 draw::DrawWater
// callees(0): 

undefined8 FUN_00503024(void)

{
  return 0;
}



//==== 0050302c  ns=Global  size=0x8
// sig: undefined FUN_0050302c(void)
// callers(1): 00071f70 draw::???_Draw_FogBlendPass
// callees(0): 

undefined8 FUN_0050302c(void)

{
  return 0;
}



//==== 00503034  ns=Global  size=0x8
// sig: undefined FUN_00503034(void)
// callers(1): 000768e8 draw::???_Draw_EffectStrip_M401
// callees(0): 

undefined8 FUN_00503034(void)

{
  return 0;
}



//==== 0050303c  ns=Global  size=0x8
// sig: undefined FUN_0050303c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050303c(void)

{
  return 0;
}



//==== 00503044  ns=Global  size=0x8
// sig: undefined FUN_00503044(void)
// callers(1): 0004f2f4 loaders::GsTex_BuildUploadPacket
// callees(0): 

undefined8 FUN_00503044(void)

{
  return 0;
}



//==== 0050304c  ns=Global  size=0x8
// sig: undefined FUN_0050304c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050304c(void)

{
  return 0;
}



//==== 00503054  ns=Global  size=0x4
// sig: undefined FUN_00503054(void)
// callers(0): 
// callees(0): 

void FUN_00503054(void)

{
  return;
}



//==== 00503058  ns=Global  size=0x8
// sig: undefined FUN_00503058(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503058(void)

{
  return 0;
}



//==== 00503060  ns=stub  size=0x8
// sig: undefined FUN_00503060_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::FUN_00503060_RET_0(void)

{
  return 0;
}



//==== 00503068  ns=stub  size=0x4
// sig: undefined FUN_00503068(void)
// callers(0): 
// callees(0): 

void stub::FUN_00503068(void)

{
  return;
}



//==== 0050306c  ns=stub  size=0x4
// sig: undefined sceGsExecLoadImage(void)
// callers(4): 0004fb50 bloaders::LoadPifAsPSMT8H; 000d8be8 initonce::InitOnce; 000db2ec loaders::ParsePif; 000dc210 loaders::LoadSpaceshipModel
// callees(0): 

void stub::sceGsExecLoadImage(void)

{
  return;
}



//==== 00503070  ns=stub  size=0x4
// sig: undefined STUB_00503070(void)
// callers(2): 000656b8 draw::ResetFrameBufferForCutscene; 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_00503070(void)

{
  return;
}



//==== 00503074  ns=stub  size=0x4
// sig: undefined sceGsSyncPath(void)
// callers(6): 0004fb50 bloaders::LoadPifAsPSMT8H; 000d8be8 initonce::InitOnce; 000db2ec loaders::ParsePif; 000dc210 loaders::LoadSpaceshipModel; 001643e0 space::PlaySpaceMovie; 001693c8 update::mode_movieUnInit
// callees(0): 

void stub::sceGsSyncPath(void)

{
  return;
}



//==== 00503078  ns=stub  size=0x4
// sig: undefined STUB_00503078(void)
// callers(17): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 0004fe38 sound::UnloadSoundBanks; 000e0038 loaders::LoadNpcMobys; 000e0e60 main::startLevel; 0013b108 update::OpenPauseMenu; 0013d428 pause::FrontEnd_InitMenu; 0015e430 space::PlaySpaceCutscene; 00161788 space::UpdateSpace; 00163aa0 space::SpaceTransition_LoadWad; 001643e0 space::PlaySpaceMovie; 00164760 space::PlaySpacePlate; 00164c58 space::DoSpaceTransition; 00167e60 update::mode_sceneInit; 001693c8 update::mode_movieUnInit; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene
// callees(0): 

void stub::STUB_00503078(void)

{
  return;
}



//==== 0050307c  ns=stub  size=0x4
// sig: undefined STUB_0050307c(void)
// callers(4): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000656b8 draw::ResetFrameBufferForCutscene; 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_0050307c(void)

{
  return;
}



//==== 00503080  ns=stub  size=0x4
// sig: undefined STUB_00503080(void)
// callers(4): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000656b8 draw::ResetFrameBufferForCutscene; 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_00503080(void)

{
  return;
}



//==== 00503084  ns=stub  size=0x4
// sig: undefined sceGsSetDefLoadImage(void)
// callers(4): 0004fb50 bloaders::LoadPifAsPSMT8H; 000d8be8 initonce::InitOnce; 000db2ec loaders::ParsePif; 000dc210 loaders::LoadSpaceshipModel
// callees(0): 

void stub::sceGsSetDefLoadImage(void)

{
  return;
}



//==== 00503088  ns=stub  size=0x4
// sig: undefined FUN_00503088(void)
// callers(0): 
// callees(0): 

void stub::FUN_00503088(void)

{
  return;
}



//==== 0050308c  ns=stub  size=0x4
// sig: undefined FUN_0050308c(void)
// callers(0): 
// callees(0): 

void stub::FUN_0050308c(void)

{
  return;
}



//==== 00503090  ns=stub  size=0x4
// sig: undefined FUN_00503090(void)
// callers(0): 
// callees(0): 

void stub::FUN_00503090(void)

{
  return;
}



//==== 00503094  ns=Global  size=0x8
// sig: undefined FUN_00503094(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503094(void)

{
  return 0;
}



//==== 0050309c  ns=Global  size=0x8
// sig: undefined FUN_0050309c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050309c(void)

{
  return 0;
}



//==== 005030a4  ns=Global  size=0x8
// sig: undefined FUN_005030a4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005030a4(void)

{
  return 2;
}



//==== 005030ac  ns=Global  size=0x8
// sig: undefined FUN_005030ac(void)
// callers(1): 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 FUN_005030ac(void)

{
  return 0;
}



//==== 005030b4  ns=Global  size=0x8
// sig: undefined FUN_005030b4(void)
// callers(1): 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 FUN_005030b4(void)

{
  return 0;
}



//==== 005030bc  ns=Global  size=0x8
// sig: undefined FUN_005030bc(void)
// callers(1): 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 FUN_005030bc(void)

{
  return 0;
}



//==== 005030c4  ns=Global  size=0x8
// sig: undefined FUN_005030c4(void)
// callers(1): 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 FUN_005030c4(void)

{
  return 0;
}



//==== 005030cc  ns=Global  size=0x8
// sig: undefined FUN_005030cc(void)
// callers(1): 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 FUN_005030cc(void)

{
  return 0;
}



//==== 005030d4  ns=Global  size=0x8
// sig: undefined FUN_005030d4(void)
// callers(1): 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 FUN_005030d4(void)

{
  return 0;
}



//==== 005030dc  ns=Global  size=0x8
// sig: undefined FUN_005030dc(void)
// callers(2): 001658d8 draw::InitGsRegPresets_1658d8; 0017ee14 water::Water_StaticInitGsPackets
// callees(0): 

undefined8 FUN_005030dc(void)

{
  return 0;
}



//==== 005030e4  ns=Global  size=0x8
// sig: undefined FUN_005030e4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005030e4(void)

{
  return 0;
}



//==== 005030ec  ns=Global  size=0x8
// sig: undefined FUN_005030ec(void)
// callers(2): 001658d8 draw::InitGsRegPresets_1658d8; 0017ee14 water::Water_StaticInitGsPackets
// callees(0): 

undefined8 FUN_005030ec(void)

{
  return 0;
}



//==== 005030f4  ns=Global  size=0x8
// sig: undefined FUN_005030f4(void)
// callers(1): 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 FUN_005030f4(void)

{
  return 0;
}



//==== 005030fc  ns=Global  size=0x8
// sig: undefined FUN_005030fc(void)
// callers(1): 001658d8 draw::InitGsRegPresets_1658d8
// callees(0): 

undefined8 FUN_005030fc(void)

{
  return 0;
}



//==== 00503104  ns=Global  size=0x8
// sig: undefined FUN_00503104(void)
// callers(4): 001658d8 draw::InitGsRegPresets_1658d8; 00174d34 vuchain::VU1_addDataRefToLoc; 00174dd0 vuchain::VU1_addDataDirect; 00174ea0 vuchain::VU1_skipData
// callees(0): 

undefined8 FUN_00503104(void)

{
  return 0;
}



//==== 0050310c  ns=Global  size=0x8
// sig: undefined FUN_0050310c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050310c(void)

{
  return 0;
}



//==== 00503114  ns=stub  size=0x4
// sig: undefined STUB_00503114(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_00503114(void)

{
  return;
}



//==== 00503118  ns=stub  size=0x4
// sig: undefined STUB_00503118(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_00503118(void)

{
  return;
}



//==== 0050311c  ns=stub  size=0x4
// sig: undefined FUN_0050311c(void)
// callers(0): 
// callees(0): 

void stub::FUN_0050311c(void)

{
  return;
}



//==== 00503120  ns=stub  size=0x8
// sig: undefined FUN_00503120(void)
// callers(0): 
// callees(0): 

undefined8 stub::FUN_00503120(void)

{
  return 0;
}



//==== 00503128  ns=stub  size=0x8
// sig: undefined FUN_00503128_RET_0(void)
// callers(5): 000def78 loaders::LoadLevelFiles; 00163aa0 space::SpaceTransition_LoadWad; 001645cc space::LoadSpacePlate; 00164c58 space::DoSpaceTransition; 0016974c update::UpdateCinematic
// callees(0): 

undefined8 stub::FUN_00503128_RET_0(void)

{
  return 0;
}



//==== 00503130  ns=stub  size=0x8
// sig: undefined FUN_00503130_RET_3(void)
// callers(0): 
// callees(0): 

undefined8 stub::FUN_00503130_RET_3(void)

{
  return 3;
}



//==== 00503138  ns=stub  size=0x8
// sig: undefined FUN_00503138_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::FUN_00503138_RET_0(void)

{
  return 0;
}



//==== 00503140  ns=stub  size=0x4
// sig: undefined FUN_00503140(void)
// callers(0): 
// callees(0): 

void stub::FUN_00503140(void)

{
  return;
}



//==== 00503144  ns=stub  size=0x8
// sig: undefined FUN_00503144(void)
// callers(0): 
// callees(0): 

undefined8 stub::FUN_00503144(void)

{
  return 0;
}



//==== 0050314c  ns=Global  size=0x10
// sig: undefined FUN_0050314c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050314c(undefined4 *param_1)

{
  *param_1 = 1;
  return 0;
}



//==== 0050315c  ns=stub  size=0x8
// sig: undefined FUN_0050315c_RET_0(void)
// callers(1): 000d88fc initonce::???_Unused_InitOnce_RunSysCallWait
// callees(0): 

undefined8 stub::FUN_0050315c_RET_0(void)

{
  return 0;
}



//==== 00503164  ns=Global  size=0x8
// sig: undefined FUN_00503164(void)
// callers(1): 000d88fc initonce::???_Unused_InitOnce_RunSysCallWait
// callees(0): 

undefined8 FUN_00503164(void)

{
  return 0;
}



//==== 0050316c  ns=Global  size=0x8
// sig: undefined FUN_0050316c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050316c(void)

{
  return 1;
}



//==== 00503174  ns=Global  size=0x4
// sig: undefined FUN_00503174(void)
// callers(0): 
// callees(0): 

void FUN_00503174(void)

{
  return;
}



//==== 00503178  ns=Global  size=0x4
// sig: undefined FUN_00503178(void)
// callers(0): 
// callees(0): 

void FUN_00503178(void)

{
  return;
}



//==== 0050317c  ns=Global  size=0x4
// sig: undefined FUN_0050317c(void)
// callers(0): 
// callees(0): 

void FUN_0050317c(void)

{
  return;
}



//==== 00503180  ns=Global  size=0x8
// sig: undefined FUN_00503180(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503180(void)

{
  return 1;
}



//==== 00503188  ns=Global  size=0x4
// sig: undefined FUN_00503188(void)
// callers(0): 
// callees(0): 

void FUN_00503188(void)

{
  return;
}



//==== 0050318c  ns=Global  size=0x8
// sig: undefined FUN_0050318c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050318c(void)

{
  return 0;
}



//==== 00503194  ns=Global  size=0x8
// sig: undefined FUN_00503194(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503194(void)

{
  return 0;
}



//==== 0050319c  ns=Global  size=0x8
// sig: undefined FUN_0050319c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050319c(void)

{
  return 0;
}



//==== 005031a4  ns=stub  size=0x4
// sig: undefined STUB_005031a4(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_005031a4(void)

{
  return;
}



//==== 005031a8  ns=Global  size=0x8
// sig: undefined FUN_005031a8(void)
// callers(1): 000d88fc initonce::???_Unused_InitOnce_RunSysCallWait
// callees(0): 

undefined8 FUN_005031a8(void)

{
  return 0;
}



//==== 005031b0  ns=Global  size=0x8
// sig: undefined FUN_005031b0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005031b0(void)

{
  return 0;
}



//==== 005031b8  ns=stub  size=0x4
// sig: undefined STUB_005031b8(void)
// callers(0): 
// callees(0): 

void stub::STUB_005031b8(void)

{
  return;
}



//==== 005031bc  ns=Global  size=0x38
// sig: undefined FUN_005031bc(void)
// callers(3): 000d88fc initonce::???_Unused_InitOnce_RunSysCallWait; 00165614 map::AllocIndexedBuffer; 0016570c map::WriteIndexedBuffer
// callees(1): 005c5ad0 libc::memcpy

undefined8 FUN_005031bc(undefined4 *param_1)

{
  libc::memcpy((void *)param_1[1],(void *)*param_1,param_1[2]);
  return 0;
}



//==== 005031f4  ns=Global  size=0x4
// sig: undefined FUN_005031f4(void)
// callers(0): 
// callees(0): 

void FUN_005031f4(void)

{
  return;
}



//==== 005031f8  ns=stub  size=0x4
// sig: undefined STUB_005031f8(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_005031f8(void)

{
  return;
}



//==== 005031fc  ns=stub  size=0x4
// sig: undefined STUB_005031fc(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_005031fc(void)

{
  return;
}



//==== 00503200  ns=Global  size=0x4
// sig: undefined FUN_00503200(void)
// callers(0): 
// callees(0): 

void FUN_00503200(void)

{
  return;
}



//==== 00503204  ns=stub  size=0x4
// sig: undefined STUB_00503204(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_00503204(void)

{
  return;
}



//==== 00503208  ns=stub  size=0x4
// sig: undefined STUB_00503208(void)
// callers(3): 000d8be8 initonce::InitOnce; 001643e0 space::PlaySpaceMovie; 001693c8 update::mode_movieUnInit
// callees(0): 

void stub::STUB_00503208(void)

{
  return;
}



//==== 0050320c  ns=Global  size=0x8
// sig: undefined FUN_0050320c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050320c(void)

{
  return 0;
}



//==== 00503214  ns=Global  size=0x4
// sig: undefined FUN_00503214(void)
// callers(1): 000d88fc initonce::???_Unused_InitOnce_RunSysCallWait
// callees(0): 

void FUN_00503214(void)

{
  return;
}



//==== 00503218  ns=stub  size=0x4
// sig: undefined STUB_00503218(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_00503218(void)

{
  return;
}



//==== 0050321c  ns=stub  size=0x4
// sig: undefined STUB_0050321c(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

void stub::STUB_0050321c(void)

{
  return;
}



//==== 00503220  ns=Global  size=0x8
// sig: undefined FUN_00503220(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503220(void)

{
  return 0;
}



//==== 00503228  ns=Global  size=0x8
// sig: undefined FUN_00503228(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503228(void)

{
  return 0;
}



//==== 00503230  ns=Global  size=0x8
// sig: undefined FUN_00503230(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503230(void)

{
  return 0;
}



//==== 00503238  ns=Global  size=0x8
// sig: undefined FUN_00503238(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503238(void)

{
  return 0;
}



//==== 00503240  ns=Global  size=0x4
// sig: undefined FUN_00503240(void)
// callers(0): 
// callees(0): 

void FUN_00503240(void)

{
  return;
}



//==== 00503244  ns=stub  size=0x4
// sig: undefined FlushCache(void)
// callers(24): 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 0001401c boot::boot; 0004fb50 bloaders::LoadPifAsPSMT8H; 0004fe38 sound::UnloadSoundBanks; 00065670 draw::ResetFrameBufferInfo; 000656b8 draw::ResetFrameBufferForCutscene; 00085300 hero::Hero_TransAnim; 000d8be8 initonce::InitOnce; 000db2ec loaders::ParsePif; 000dc210 loaders::LoadSpaceshipModel; 000dcf58 loaders::NAVG_LoadFile; 000f0994 mobyfunc::MB_InitAnimLayerBuffer; 00163aa0 space::SpaceTransition_LoadWad; 00164c58 space::DoSpaceTransition; 00166b70 draw::DrawTies; 00168d34 update::StartMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie; 001693c8 update::mode_movieUnInit; 0016974c update::UpdateCinematic
// callees(0): 

void stub::FlushCache(void)

{
  return;
}



//==== 00503248  ns=stub  size=0x4
// sig: undefined FUN_00503248(void)
// callers(0): 
// callees(0): 

void stub::FUN_00503248(void)

{
  return;
}



//==== 0050324c  ns=Global  size=0x4
// sig: undefined FUN_0050324c(void)
// callers(0): 
// callees(0): 

void FUN_0050324c(void)

{
  return;
}



//==== 00503250  ns=Global  size=0x8
// sig: undefined FUN_00503250(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503250(void)

{
  return 0;
}



//==== 00503258  ns=Global  size=0x8
// sig: undefined FUN_00503258(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503258(void)

{
  return 0;
}



//==== 00503260  ns=Global  size=0x8
// sig: undefined FUN_00503260(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503260(void)

{
  return 0;
}



//==== 00503268  ns=Global  size=0x4
// sig: undefined FUN_00503268(void)
// callers(0): 
// callees(0): 

void FUN_00503268(void)

{
  return;
}



//==== 0050326c  ns=Global  size=0x4
// sig: undefined FUN_0050326c(void)
// callers(0): 
// callees(0): 

void FUN_0050326c(void)

{
  return;
}



//==== 00503270  ns=Global  size=0x4
// sig: undefined FUN_00503270(void)
// callers(0): 
// callees(0): 

void FUN_00503270(void)

{
  return;
}



//==== 00503274  ns=Global  size=0x8
// sig: undefined FUN_00503274(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503274(void)

{
  return 0;
}



//==== 0050327c  ns=Global  size=0x4
// sig: undefined FUN_0050327c(void)
// callers(0): 
// callees(0): 

void FUN_0050327c(void)

{
  return;
}



//==== 00503280  ns=Global  size=0x4
// sig: undefined FUN_00503280(void)
// callers(0): 
// callees(0): 

void FUN_00503280(void)

{
  return;
}



//==== 00503284  ns=Global  size=0x8
// sig: undefined FUN_00503284(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503284(void)

{
  return 0;
}



//==== 0050328c  ns=Global  size=0x4
// sig: undefined FUN_0050328c(void)
// callers(0): 
// callees(0): 

void FUN_0050328c(void)

{
  return;
}



//==== 00503290  ns=Global  size=0x8
// sig: undefined FUN_00503290(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503290(void)

{
  return 0;
}



//==== 00503298  ns=Global  size=0x4
// sig: undefined FUN_00503298(void)
// callers(0): 
// callees(0): 

void FUN_00503298(void)

{
  return;
}



//==== 0050329c  ns=Global  size=0x8
// sig: undefined FUN_0050329c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050329c(void)

{
  return 0;
}



//==== 005032a4  ns=Global  size=0x4
// sig: undefined FUN_005032a4(void)
// callers(0): 
// callees(0): 

void FUN_005032a4(void)

{
  return;
}



//==== 005032a8  ns=Global  size=0x8
// sig: undefined FUN_005032a8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032a8(void)

{
  return 0;
}



//==== 005032b0  ns=Global  size=0x8
// sig: undefined FUN_005032b0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032b0(void)

{
  return 0;
}



//==== 005032b8  ns=Global  size=0x4
// sig: undefined FUN_005032b8(void)
// callers(0): 
// callees(0): 

void FUN_005032b8(void)

{
  return;
}



//==== 005032bc  ns=Global  size=0x8
// sig: undefined FUN_005032bc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032bc(void)

{
  return 0;
}



//==== 005032c4  ns=Global  size=0x8
// sig: undefined FUN_005032c4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032c4(void)

{
  return 0;
}



//==== 005032cc  ns=Global  size=0x8
// sig: undefined FUN_005032cc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032cc(void)

{
  return 0;
}



//==== 005032d4  ns=Global  size=0x8
// sig: undefined FUN_005032d4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032d4(void)

{
  return 0;
}



//==== 005032dc  ns=Global  size=0x8
// sig: undefined FUN_005032dc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032dc(void)

{
  return 0;
}



//==== 005032e4  ns=Global  size=0x8
// sig: undefined FUN_005032e4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032e4(void)

{
  return 0;
}



//==== 005032ec  ns=Global  size=0x8
// sig: undefined FUN_005032ec(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032ec(void)

{
  return 0;
}



//==== 005032f4  ns=Global  size=0x8
// sig: undefined FUN_005032f4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032f4(void)

{
  return 0;
}



//==== 005032fc  ns=Global  size=0x8
// sig: undefined FUN_005032fc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005032fc(void)

{
  return 0;
}



//==== 00503304  ns=Global  size=0x8
// sig: undefined FUN_00503304(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503304(void)

{
  return 0;
}



//==== 0050330c  ns=Global  size=0x8
// sig: undefined FUN_0050330c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050330c(void)

{
  return 0;
}



//==== 00503314  ns=Global  size=0x8
// sig: undefined FUN_00503314(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503314(void)

{
  return 0;
}



//==== 0050331c  ns=Global  size=0x4
// sig: undefined FUN_0050331c(void)
// callers(0): 
// callees(0): 

void FUN_0050331c(void)

{
  return;
}



//==== 00503320  ns=Global  size=0x4
// sig: undefined FUN_00503320(void)
// callers(0): 
// callees(0): 

void FUN_00503320(void)

{
  return;
}



//==== 00503324  ns=Global  size=0x4
// sig: undefined FUN_00503324(void)
// callers(0): 
// callees(0): 

void FUN_00503324(void)

{
  return;
}



//==== 00503328  ns=Global  size=0x4
// sig: undefined FUN_00503328(void)
// callers(0): 
// callees(0): 

void FUN_00503328(void)

{
  return;
}



//==== 0050332c  ns=Global  size=0x4
// sig: undefined FUN_0050332c(void)
// callers(0): 
// callees(0): 

void FUN_0050332c(void)

{
  return;
}



//==== 00503330  ns=Global  size=0x24
// sig: undefined FUN_00503330(void)
// callers(0): 
// callees(1): 0800008d syscall::syscall_sys_timer_usleep

void FUN_00503330(void)

{
  syscall::syscall_sys_timer_usleep();
  return;
}



//==== 00503354  ns=Global  size=0x8
// sig: undefined FUN_00503354(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503354(void)

{
  return 0;
}



//==== 0050335c  ns=Global  size=0x8
// sig: undefined FUN_0050335c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050335c(void)

{
  return 0;
}



//==== 00503364  ns=Global  size=0x8
// sig: undefined FUN_00503364(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503364(void)

{
  return 0;
}



//==== 0050336c  ns=Global  size=0x4
// sig: undefined FUN_0050336c(void)
// callers(0): 
// callees(0): 

void FUN_0050336c(void)

{
  return;
}



//==== 00503370  ns=Global  size=0x8
// sig: undefined FUN_00503370(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503370(void)

{
  return 0;
}



//==== 00503378  ns=Global  size=0x4
// sig: undefined FUN_00503378(void)
// callers(0): 
// callees(0): 

void FUN_00503378(void)

{
  return;
}



//==== 0050337c  ns=Global  size=0x8
// sig: undefined FUN_0050337c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0050337c(void)

{
  return 0;
}



//==== 00503384  ns=Global  size=0x4
// sig: undefined FUN_00503384(void)
// callers(0): 
// callees(0): 

void FUN_00503384(void)

{
  return;
}



//==== 00503388  ns=Global  size=0x8
// sig: undefined FUN_00503388(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00503388(void)

{
  return 0;
}



//==== 00503390  ns=Global  size=0x28
// sig: undefined FUN_00503390(void)
// callers(0): 
// callees(1): 00650684 sys::sys_time_get_system_time

undefined4 FUN_00503390(void)

{
  undefined4 uVar1;
  
  uVar1 = sys::sys_time_get_system_time();
  return uVar1;
}



//==== 005033b8  ns=Global  size=0x8
// sig: undefined FUN_005033b8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005033b8(void)

{
  return 0;
}



//==== 005033c0  ns=Global  size=0x8
// sig: undefined FUN_005033c0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005033c0(void)

{
  return 0;
}



//==== 005033c8  ns=Global  size=0x8
// sig: undefined FUN_005033c8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005033c8(void)

{
  return 0;
}



//==== 005033d0  ns=Global  size=0x4
// sig: undefined FUN_005033d0(void)
// callers(0): 
// callees(0): 

void FUN_005033d0(void)

{
  return;
}



//==== 005033d4  ns=Global  size=0x8
// sig: undefined FUN_005033d4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005033d4(void)

{
  return 0;
}



//==== 005033dc  ns=Global  size=0x8
// sig: undefined FUN_005033dc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005033dc(void)

{
  return 0;
}



//==== 005033e4  ns=Global  size=0x4
// sig: undefined FUN_005033e4(void)
// callers(0): 
// callees(0): 

void FUN_005033e4(void)

{
  return;
}



//==== 005033e8  ns=Global  size=0x8
// sig: undefined FUN_005033e8(void)
// callers(0): 
// callees(0): 

void FUN_005033e8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



//==== 005033f0  ns=Global  size=0x8
// sig: undefined FUN_005033f0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005033f0(void)

{
  return 0;
}



//==== 005033f8  ns=Global  size=0x4
// sig: undefined FUN_005033f8(void)
// callers(0): 
// callees(0): 

void FUN_005033f8(void)

{
  return;
}



//==== 005033fc  ns=Global  size=0x8
// sig: undefined FUN_005033fc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005033fc(void)

{
  return 0;
}



//==== 00503404  ns=Global  size=0x30
// sig: undefined FUN_00503404(void)
// callers(1): 000def78 loaders::LoadLevelFiles
// callees(1): 005cd098 libc::printf
// strings: 0065f69c: 'm_LoadLevelFileS %s\n'

undefined8 FUN_00503404(void)

{
  libc::printf("m_LoadLevelFileS %s\n");
  return 0;
}



//==== 00503434  ns=Global  size=0x30
// sig: undefined FUN_00503434(void)
// callers(1): 00148908 pause::UpdateOptionsMenus
// callees(1): 005cd098 libc::printf
// strings: 0065f6b4: 'm_LoadLevelFile %s\n'

undefined8 FUN_00503434(void)

{
  libc::printf("m_LoadLevelFile %s\n");
  return 0;
}



//==== 00503464  ns=Global  size=0x30
// sig: undefined FUN_00503464(void)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 0065f6c8: 'm_LoadLevelFileB %s\n'

undefined8 FUN_00503464(void)

{
  libc::printf("m_LoadLevelFileB %s\n");
  return 0;
}



//==== 00503494  ns=idol  size=0x30
// sig: undefined8 m_LoadGameFileS(uint arg1, char * str)
// callers(3): 000def78 loaders::LoadLevelFiles; 00163aa0 space::SpaceTransition_LoadWad; 001645cc space::LoadSpacePlate
// callees(1): 005cd098 libc::printf
// strings: 0065f6e0: 'm_LoadGameFileS %s\n'

undefined8 idol::m_LoadGameFileS(uint arg1,char *str)

{
  libc::printf("m_LoadGameFileS %s\n",str);
  return 0;
}



//==== 005034c4  ns=idol  size=0x30
// sig: undefined8 PRINT_m_LoadGameFile(uint arg2, char * arg1)
// callers(8): 00011b74 boot::Load_Front_End; 000e0528 loaders::LoadWeaponCutscene; 000e06b0 loaders::LoadSpaceScene; 00142e38 pause::MapPage_Update; 00148908 pause::UpdateOptionsMenus; 001516c0 pause::M1957_Update_GirlwadOnGameComplete; 001698a0 update::mode_creditsInit; 00169b88 update::UpdateCredits
// callees(1): 005cd098 libc::printf
// strings: 0065f6f4: 'm_LoadGameFile %s\n'

undefined8 idol::PRINT_m_LoadGameFile(uint arg2,char *arg1)

{
  libc::printf("m_LoadGameFile %s\n",arg1);
  return 0;
}



//==== 005034f4  ns=idol  size=0x30
// sig: undefined m_LoadGameFileB(void)
// callers(1): 0004fdc0 bloaders::LoadDebugFont
// callees(1): 005cd098 libc::printf
// strings: 0065f708: 'm_LoadGameFileB %s\n'

undefined8 idol::m_LoadGameFileB(void)

{
  libc::printf("m_LoadGameFileB %s\n");
  return 0;
}



//==== 00503524  ns=Global  size=0x30
// sig: undefined FUN_00503524(void)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 0065f71c: 'm_LoadSceneFile %s\n'

undefined8 FUN_00503524(void)

{
  libc::printf("m_LoadSceneFile %s\n");
  return 0;
}



//==== 00503554  ns=Global  size=0x94
// sig: undefined FUN_00503554(void)
// callers(4): 004f03dc FUN_004f03dc; 004f77a0 FUN_004f77a0; 004f7eb8 FUN_004f7eb8; 004f8eb0 FUN_004f8eb0
// callees(1): 005c8510 libc::strlen

uint FUN_00503554(byte *param_1)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  
  sVar2 = libc::strlen((char *)param_1);
  if ((param_1 == (byte *)0x0) || (sVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    for (iVar4 = 0; bVar1 = *param_1, iVar4 < (int)sVar2 && bVar1 != 0; iVar4 = iVar4 + 1) {
      param_1 = param_1 + 1;
      uVar3 = uVar3 * 0x1000193 ^ (uint)bVar1;
    }
  }
  return uVar3;
}



//==== 005035e8  ns=Global  size=0x68
// sig: undefined FUN_005035e8(void)
// callers(0): 
// callees(0): 

uint FUN_005035e8(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    for (iVar3 = 0; bVar1 = *param_1, iVar3 < param_2 && bVar1 != 0; iVar3 = iVar3 + 1) {
      param_1 = param_1 + 1;
      uVar2 = uVar2 * 0x1000193 ^ (uint)bVar1;
    }
  }
  return uVar2;
}



//==== 00503650  ns=Global  size=0xa0
// sig: undefined FUN_00503650(void)
// callers(0): 
// callees(1): 005c8510 libc::strlen

undefined8 FUN_00503650(char *param_1,char *param_2)

{
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar1;
  uint uVar4;
  
  sVar2 = libc::strlen(param_2);
  sVar3 = libc::strlen(param_1);
  if (sVar3 < sVar2) {
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
    if (sVar2 != 0) {
      do {
        if (param_1[uVar4] != param_2[uVar4]) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < sVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}



//==== 005036f0  ns=Global  size=0xb0
// sig: undefined FUN_005036f0(void)
// callers(0): 
// callees(1): 005c8510 libc::strlen

undefined8 FUN_005036f0(char *param_1,char *param_2)

{
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar1;
  uint uVar4;
  
  sVar2 = libc::strlen(param_2);
  sVar3 = libc::strlen(param_1);
  if (sVar3 < sVar2) {
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
    if (sVar2 != 0) {
      do {
        if (param_1[(sVar3 - sVar2) + uVar4] != param_2[uVar4]) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < sVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}



//==== 005037a0  ns=Global  size=0x70
// sig: undefined FUN_005037a0(void)
// callers(0): 
// callees(1): 005c8510 libc::strlen

char * FUN_005037a0(char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar2 = libc::strlen(param_1);
  do {
    sVar1 = sVar2;
    sVar2 = sVar1 - 1;
    if ((int)sVar2 < 0) {
      return (char *)0x0;
    }
  } while (param_1[sVar2] != '.');
  return param_1 + sVar1;
}



//==== 00503810  ns=Global  size=0xb4
// sig: undefined FUN_00503810(void)
// callers(0): 
// callees(2): 005c8510 libc::strlen; 005cc8d8 libc::strcpy

char * FUN_00503810(char *param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  sVar1 = libc::strlen(param_1);
  for (iVar2 = sVar1 - 1; (iVar4 = sVar1 - 1, -1 < iVar2 && (iVar4 = iVar2, param_1[iVar2] != '.'));
      iVar2 = iVar2 + -1) {
  }
  if (*param_3 != '.') {
    libc::strcpy(param_1 + iVar4,".");
    iVar4 = iVar4 + 1;
  }
  pcVar3 = libc::strcpy(param_1 + iVar4,param_3);
  return pcVar3;
}



//==== 005038c4  ns=Global  size=0x1c
// sig: undefined FUN_005038c4(void)
// callers(0): 
// callees(0): 

void FUN_005038c4(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}



//==== 005038e0  ns=Global  size=0x70
// sig: undefined FUN_005038e0(void)
// callers(7): 000e7ac8 memcard::memcard_InitSaveMsg; 000e7c94 memcard::memcard_GetSaveMsgString; 000e7d48 memcard::memcard_ConvertSaveMsgString; 000e8268 memcard::memcard_ConstructSaveString; 000e87f8 memcard::memcard_SetSaveDialogStrings; 000e8888 memcard::memcard_PerformOperation; 000e8ca0 memcard::memcard_RestoreSaveGame
// callees(1): 005e38b0 FUN_005e38b0

int FUN_005038e0(void)

{
  int iVar1;
  
  if (DAT_00902ec4 == 0) {
    iVar1 = FUN_005e38b0(0x1c);
    DAT_00902ec4 = 0;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined1 *)(iVar1 + 0x14) = 0;
      DAT_00902ec4 = iVar1;
    }
  }
  return DAT_00902ec4;
}



//==== 00503950  ns=Global  size=0x1c
// sig: undefined FUN_00503950(void)
// callers(0): 
// callees(0): 

void FUN_00503950(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}



//==== 0050396c  ns=Global  size=0xd0
// sig: undefined FUN_0050396c(void)
// callers(1): 00503a3c FUN_00503a3c
// callees(3): 00503e00 fios::LoadAssetFromFile; 005c5ad0 libc::memcpy; 005cd2a8 libc::snprintf

void FUN_0050396c(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char acStack_90 [128];
  
  libc::snprintf(acStack_90,param_2,*(undefined4 *)(param_1 + 0xc));
  iVar3 = fios::LoadAssetFromFile(acStack_90,*(undefined4 *)(param_1 + 0x10),0x2800);
  if (iVar3 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = *puVar1;
    iVar3 = puVar1[1];
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 2;
    libc::memcpy(puVar1 + 2,puVar1 + 2,(iVar3 + 3U & 0xfffffffc) - 8);
    iVar3 = *(int *)(param_1 + 8);
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x18);
      iVar2 = iVar4 + -8;
      do {
        iVar3 = iVar3 + -1;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + iVar2;
        iVar4 = iVar4 + 0xc;
      } while (0 < iVar3);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}



//==== 00503a3c  ns=Global  size=0x84
// sig: undefined FUN_00503a3c(void)
// callers(1): 000e7ac8 memcard::memcard_InitSaveMsg
// callees(2): 0050396c FUN_0050396c; 0064f504 cell::cellSysutilCheckCallback

void FUN_00503a3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  cell::cellSysutilCheckCallback();
  if (*(char *)(param_1 + 5) == '\0') {
    param_1[4] = param_2;
    param_1[3] = param_3;
    *param_1 = param_4;
    FUN_0050396c(param_1,param_5);
  }
  return;
}



//==== 00503ac0  ns=Global  size=0x50
// sig: undefined FUN_00503ac0(void)
// callers(0): 
// callees(0): 

int FUN_00503ac0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      if (param_2 == *(int *)(*(int *)(param_1 + 0x18) + iVar1 * 0xc)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return -1;
}



//==== 00503b10  ns=Global  size=0xc0
// sig: undefined FUN_00503b10(void)
// callers(1): 00503bd0 FUN_00503bd0
// callees(0): 

undefined8 FUN_00503b10(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)*param_1)();
  iVar2 = *(int *)((int)boot::g_pHWSystem + 0xc0);
  if (5999 < param_2) {
    if (iVar2 == 1) {
      return 2;
    }
    if (iVar2 == 0) {
      return 1;
    }
    if (iVar2 == 3) {
      return 0;
    }
  }
  iVar2 = (int)uVar1;
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      return 1;
    }
  }
  else if (iVar2 < 6) {
    return uVar1;
  }
  return 0;
}



//==== 00503bd0  ns=Global  size=0xa0
// sig: undefined FUN_00503bd0(void)
// callers(5): 000e7ac8 memcard::memcard_InitSaveMsg; 000e7c94 memcard::memcard_GetSaveMsgString; 000e87f8 memcard::memcard_SetSaveDialogStrings; 000e8888 memcard::memcard_PerformOperation; 000e8ca0 memcard::memcard_RestoreSaveGame
// callees(1): 00503b10 FUN_00503b10

int FUN_00503bd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00503b10();
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar3 = *(int **)(param_1 + 0x18);
    do {
      if (param_2 + iVar1 == *piVar3) {
        if (iVar2 < 0) {
          return 0;
        }
        return (*(int **)(param_1 + 0x18))[iVar2 * 3 + 2];
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}



//==== 00503c70  ns=Global  size=0x5c
// sig: undefined FUN_00503c70(void)
// callers(0): 
// callees(0): 

int FUN_00503c70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 0x18);
    do {
      if (param_2 == *piVar1) {
        return (*(int **)(param_1 + 0x18))[iVar2 * 3 + 1];
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return -1;
}



//==== 00503ccc  ns=Global  size=0x12c
// sig: undefined FUN_00503ccc(void)
// callers(2): 000e7d48 memcard::memcard_ConvertSaveMsgString; 000e8268 memcard::memcard_ConstructSaveString
// callees(2): 004ffc9c print_tty2; 0064fe64 cell::L10nConvertStr
// strings: 0065f73c: 'Failed to convert string into UTF8! Illegal conversion\n' | 0065f774: 'Failed to convert string into UTF8! Destination buffer overrun!!!!\n' | 0065f7bc: "Failed to convert string into UTF8! CellSDK can't figure its shit out!\n"

undefined8
FUN_00503ccc(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  
  iVar1 = (**(code **)*param_1)();
  iVar1 = cell::L10nConvertStr
                    (((LZCOUNT(6 - iVar1) << 0x3a) >> 0x3f & 0xfffffffffffffffcU) + 5,param_2,
                     local_30,0,param_4,local_2c);
  if (iVar1 == 0) {
    *param_6 = param_5;
  }
  else {
    if (iVar1 == 1) {
      print_tty2("Failed to convert string into UTF8! Illegal conversion\n");
    }
    else if (iVar1 == 2) {
      print_tty2("Failed to convert string into UTF8! Destination buffer overrun!!!!\n");
    }
    else if (iVar1 == 3) {
      print_tty2("Failed to convert string into UTF8! CellSDK can\'t figure its shit out!\n");
    }
    param_4 = 0;
  }
  return param_4;
}



//==== 00503df8  ns=Global  size=0x4
// sig: undefined FUN_00503df8(void)
// callers(0): 
// callees(0): 

void FUN_00503df8(void)

{
  return;
}



//==== 00503dfc  ns=Global  size=0x4
// sig: undefined FUN_00503dfc(void)
// callers(0): 
// callees(0): 

void FUN_00503dfc(void)

{
  return;
}



//==== 00503e00  ns=fios  size=0x18c
// sig: undefined LoadAssetFromFile(void)
// callers(25): 00011530 boot::LoadLanguageHelpMsgs; 00011b74 boot::Load_Front_End; 00012ccc boot::LoadAndShowSplash; 00012ec8 boot::GameStart; 00013760 boot::LoadAndShowSplashVram; 000dce40 loaders::LoadHelp; 000dcf58 loaders::NAVG_LoadFile; 000def78 loaders::LoadLevelFiles; 000df408 loaders::LoadAllMobys; 000e0528 loaders::LoadWeaponCutscene; 000e06b0 loaders::LoadSpaceScene; 000e1b28 map::Map_LoadPlanetMap; 0013a9e8 pause::LoadHudSequences; 0013ebb0 pause::LoadMenuRatchetModel; 00142e38 pause::MapPage_Update; 001480f4 pause::ImageWidget_Update; 00148908 pause::UpdateOptionsMenus; 001496a4 pause::HelpControls_Update; 00163aa0 space::SpaceTransition_LoadWad; 001645cc space::LoadSpacePlate; 001698a0 update::mode_creditsInit; 00169b88 update::UpdateCredits; 001744f0 vendor::Vendor_PostUpdate; 0050396c FUN_0050396c; 00508198 fios::load_engine_vram_pair
// callees(7): 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup; 00521794 fios::read_setup; 00521b58 fios::filehandle_close_setup; 0052521c fios::read_req_setup; 0064f504 cell::cellSysutilCheckCallback

longlong fios::LoadAssetFromFile(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong local_30;
  int local_28 [2];
  
  cell::cellSysutilCheckCallback();
  uVar1 = get_default_fs();
  uVar2 = stat_setup(uVar1,0,param_1,1,local_28);
  op_wait_result(uVar2,0);
  if (local_28[0] == 0) {
    do {
      cell::cellSysutilCheckCallback(local_28[0]);
      local_28[0] = 100;
      syscall();
    } while( true );
  }
  uVar2 = read_setup(uVar1,0,param_1,&local_30,3);
  op_wait_result(uVar2,0);
  if ((param_3 != -1) && (param_3 < local_30)) {
    do {
      cell::cellSysutilCheckCallback(local_28[0]);
      local_28[0] = 100;
      syscall();
    } while( true );
  }
  uVar2 = read_req_setup(uVar1,0,local_28[0],param_2,local_30,0xffffffffffffffff);
  uVar2 = op_wait_result(uVar2,0);
  if ((int)uVar2 != 0) {
    do {
      cell::cellSysutilCheckCallback(uVar2);
      uVar2 = 100;
      syscall();
    } while( true );
  }
  uVar1 = filehandle_close_setup(uVar1,0,local_28[0]);
  uVar1 = op_wait_result(uVar1,0);
  if ((int)uVar1 != 0) {
    do {
      cell::cellSysutilCheckCallback(uVar1);
      uVar1 = 100;
      syscall();
    } while( true );
  }
  return local_30;
}



//==== 00503f8c  ns=Global  size=0x168
// sig: undefined FUN_00503f8c(void)
// callers(1): 000e0118 loaders::PreLoadNpcChunk
// callees(5): 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup; 0052521c fios::read_req_setup; 0064f504 cell::cellSysutilCheckCallback

void FUN_00503f8c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_80 [40];
  undefined1 local_58 [40];
  int local_30 [4];
  
  cell::cellSysutilCheckCallback();
  uVar1 = fios::get_default_fs();
  uVar2 = fios::stat_setup(uVar1,local_80,param_1,1,local_30);
  fios::op_wait_result(uVar2,0);
  if (local_30[0] == 0) {
    do {
      cell::cellSysutilCheckCallback(local_30[0]);
      local_30[0] = 100;
      syscall();
    } while( true );
  }
  if (param_3 < *(longlong *)(local_30[0] + 0x48) && param_3 != -1) {
    do {
      cell::cellSysutilCheckCallback(local_30[0]);
      local_30[0] = 100;
      syscall();
    } while( true );
  }
  uVar1 = fios::read_req_setup
                    (uVar1,local_58,local_30[0],param_2,*(longlong *)(local_30[0] + 0x48),
                     0xffffffffffffffff);
  if ((int)uVar1 == 0) {
    do {
      cell::cellSysutilCheckCallback(uVar1);
      uVar1 = 100;
      syscall();
    } while( true );
  }
  return;
}



//==== 005040f4  ns=Global  size=0x84
// sig: undefined FUN_005040f4(void)
// callers(2): 000e0118 loaders::PreLoadNpcChunk; 000e0230 loaders::ParseNpcChunk
// callees(4): 0051be64 fios::op_wait; 0051c030 fios::op_wait_result; 0051fd24 FUN_0051fd24; 00521b58 fios::filehandle_close_setup

void FUN_005040f4(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_20 [16];
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  fios::op_wait(1,local_20,0);
  uVar2 = fios::filehandle_close_setup(uVar1,0,*(undefined4 *)(param_1 + 0x24));
  fios::op_wait_result(uVar2,0);
  if (param_1 != 0) {
    FUN_0051fd24(*(undefined4 *)(param_1 + 0x9c),param_1);
  }
  return;
}



//==== 00504178  ns=fios  size=0xa0
// sig: undefined GetFileSize(void)
// callers(5): 000e0118 loaders::PreLoadNpcChunk; 000e1b28 map::Map_LoadPlanetMap; 0011bb00 music::InitLevelMusicFileSizes; 0011be84 music::music_StartSpeech_Help; 0011c1e8 music::music_StartSpeech
// callees(4): 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup; 00521b58 fios::filehandle_close_setup

undefined8 fios::GetFileSize(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_20 [4];
  
  uVar1 = get_default_fs();
  uVar2 = stat_setup(uVar1,0,param_1,1,local_20);
  op_wait_result(uVar2,0);
  if (local_20[0] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(local_20[0] + 0x48);
    uVar1 = filehandle_close_setup(uVar1,0,local_20[0]);
    op_wait_result(uVar1,0);
  }
  return uVar2;
}



//==== 00504218  ns=Global  size=0x154
// sig: undefined FUN_00504218(void)
// callers(0): 
// callees(5): 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup; 00521b58 fios::filehandle_close_setup; 00525524 FUN_00525524

void FUN_00504218(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined1 local_3c [20];
  
  uVar1 = fios::get_default_fs();
  uVar2 = fios::stat_setup(uVar1,0,param_1,10,&local_40);
  fios::op_wait_result(uVar2,0);
  uVar2 = FUN_00525524(uVar1,0,local_40,local_3c,0x12,0xffffffffffffffff);
  fios::op_wait_result(uVar2,0);
  uVar2 = FUN_00525524(uVar1,0,local_40,param_2,
                       ((longlong)param_4 * (longlong)param_3 & 0x3fffffffU) << 2,0xffffffffffffffff
                      );
  fios::op_wait_result(uVar2,0);
  uVar1 = fios::filehandle_close_setup(uVar1,0,local_40);
  fios::op_wait_result(uVar1,0);
  return;
}



//==== 0050436c  ns=Global  size=0x8
// sig: undefined FUN_0050436c(void)
// callers(9): 0001401c boot::boot; 000d89d0 initonce::InitMemSlots; 000d8be8 initonce::InitOnce; 004d4dd0 FUN_004d4dd0; 004d71c0 FUN_004d71c0; 004d8148 FUN_004d8148; 004e3d74 FUN_004e3d74; 004e40d8 FUN_004e40d8; 004e4d3c FUN_004e4d3c
// callees(0): 

longlong FUN_0050436c(longlong param_1)

{
  return param_1 + 0x58;
}



//==== 00504374  ns=Global  size=0x3c
// sig: undefined FUN_00504374(void)
// callers(1): 004d7464 FUN_004d7464
// callees(1): 004fe39c FUN_004fe39c
// strings: 0065f804: 'Video Memory'

void FUN_00504374(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_004fe39c(param_1 + 0x7c,param_2,param_3,"Video Memory",2,0);
  return;
}



//==== 005043b0  ns=Global  size=0x74
// sig: undefined FUN_005043b0(void)
// callers(1): 0001401c boot::boot
// callees(3): 004fe098 idol::AllocateMemAlign; 004fe39c FUN_004fe39c; 004fe5ec FUN_004fe5ec
// strings: 0065f814: 'Scratch Memory'

void FUN_005043b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = idol::AllocateMemAlign(param_1 + 0x58,0x4000,0x10);
  FUN_004fe39c(param_1 + 0xa0,uVar1,0x4000,"Scratch Memory",2,0);
  DAT_00902ec8 = FUN_004fe5ec(param_1 + 0xa0);
  return;
}



//==== 00504424  ns=idol  size=0x44
// sig: undefined InitGameGraphics(void)
// callers(1): 0001401c boot::boot
// callees(0): 

void idol::InitGameGraphics(int param_1)

{
  (*(code *)**(undefined4 **)(**(int **)(param_1 + 0xc4) + 8))
            (*(int **)(param_1 + 0xc4),param_1 + 0x58);
  return;
}



//==== 00504468  ns=Global  size=0x248
// sig: undefined FUN_00504468(void)
// callers(1): 0001401c boot::boot
// callees(17): 004eaddc FUN_004eaddc; 004fe5f4 FUN_004fe5f4; 004fe6ec FUN_004fe6ec; 004ff6d0 print_tty; 0050e4c4 FUN_0050e4c4; 0050e4f8 FUN_0050e4f8; 0050e52c FUN_0050e52c; 0050e574 FUN_0050e574; 0050e594 FUN_0050e594; 0050e5f4 FUN_0050e5f4; 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup; 00521794 fios::read_setup; 00521b58 fios::filehandle_close_setup; 0052521c fios::read_req_setup; 0064f504 cell::cellSysutilCheckCallback
// strings: 0065f824: 'Common/UI/DialogMessages.chl' | 0065f844: 'LoadDialogMessages() error\n'

void FUN_00504468(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_40;
  int local_38;
  undefined1 auStack_34 [20];
  
  param_1 = param_1 + 0x58;
  FUN_004eaddc(param_1);
  uVar1 = FUN_004fe5f4(param_1,0x80);
  cell::cellSysutilCheckCallback();
  uVar2 = fios::get_default_fs();
  uVar3 = fios::stat_setup(uVar2,0,"Common/UI/DialogMessages.chl",1,&local_38);
  fios::op_wait_result(uVar3,0);
  if (local_38 == 0) {
    do {
      cell::cellSysutilCheckCallback(local_38);
      local_38 = 100;
      syscall();
    } while( true );
  }
  uVar3 = fios::read_setup(uVar2,0,"Common/UI/DialogMessages.chl",&local_40,3);
  fios::op_wait_result(uVar3,0);
  uVar3 = fios::read_req_setup(uVar2,0,local_38,uVar1,local_40,0xffffffffffffffff);
  uVar3 = fios::op_wait_result(uVar3,0);
  if ((int)uVar3 == 0) {
    uVar2 = fios::filehandle_close_setup(uVar2,0,local_38);
    uVar2 = fios::op_wait_result(uVar2,0);
    if ((int)uVar2 == 0) {
      FUN_004fe6ec(param_1,(int)local_40);
      FUN_0050e574(auStack_34);
      uVar1 = FUN_0050e594(auStack_34,uVar1);
      iVar4 = (int)uVar1;
      while ((iVar4 != 0 && (iVar4 = FUN_0050e4f8(uVar1), iVar4 != 0))) {
        iVar4 = FUN_0050e52c(uVar1);
        if (iVar4 == 0x2a) {
          uVar1 = FUN_0050e4c4(uVar1);
          (*(code *)**(undefined4 **)(*DAT_01111640 + 0x18))(DAT_01111640,uVar1);
        }
        else {
          print_tty("LoadDialogMessages() error\n");
        }
        uVar1 = FUN_0050e5f4(auStack_34);
        iVar4 = (int)uVar1;
      }
      return;
    }
    do {
      cell::cellSysutilCheckCallback(uVar2);
      uVar2 = 100;
      syscall();
    } while( true );
  }
  do {
    cell::cellSysutilCheckCallback(uVar3);
    uVar3 = 100;
    syscall();
  } while( true );
}



//==== 005046b0  ns=idol  size=0xbc
// sig: undefined GameAuthenticate(void)
// callers(1): 00012048 boot::PrepareFrontbin
// callees(4): 004ff6d0 print_tty; 00504d90 FUN_00504d90; 005cc8d8 libc::strcpy; 00650524 sys::sys_ppu_thread_create
// strings: 0065f860: 'GameAuthenticate' | 0065f878: 'ERROR authentication thread create failed\n'

void idol::GameAuthenticate(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined1 auStack_20 [8];
  
  iVar1 = FUN_00504d90(boot::g_pHWSystem);
  if (iVar1 == 0) {
    libc::strcpy((char *)(param_1 + 5),param_2);
    libc::strcpy((char *)(param_1 + 0x45),param_3);
    iVar1 = sys::sys_ppu_thread_create
                      (auStack_20,&PTR_FUN_00711e30,0,0x3e9,0x4000,0,"GameAuthenticate");
    if (iVar1 != 0) {
      print_tty("ERROR authentication thread create failed\n");
    }
  }
  return;
}



//==== 0050476c  ns=Global  size=0x188
// sig: undefined FUN_0050476c(void)
// callers(0): 
// callees(10): 00504d90 FUN_00504d90; 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup; 00521794 fios::read_setup; 00521b58 fios::filehandle_close_setup; 0052521c fios::read_req_setup; 005ccb28 FUN_005ccb28; 0064f724 cell::cellGameContentErrorDialog; 00650744 sys::sys_ppu_thread_exit

void FUN_0050476c(void)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_80;
  undefined1 local_78 [40];
  int local_50 [2];
  undefined1 auStack_48 [40];
  
  uVar5 = ZEXT48(boot::g_pGame);
  iVar3 = FUN_00504d90(boot::g_pHWSystem);
  if (iVar3 != 0) {
    return;
  }
  lVar4 = uVar5 + 5;
  uVar1 = fios::get_default_fs();
  uVar2 = fios::stat_setup(uVar1,local_78,lVar4,0x101,local_50);
  fios::op_wait_result(uVar2,0);
  if (local_50[0] != 0) {
    uVar2 = fios::read_setup(uVar1,0,lVar4,&local_80,3);
    fios::op_wait_result(uVar2,0);
    uVar2 = fios::read_req_setup(uVar1,0,local_50[0],auStack_48,local_80,0xffffffffffffffff);
    fios::op_wait_result(uVar2,0);
    uVar1 = fios::filehandle_close_setup(uVar1,0,local_50[0]);
    fios::op_wait_result(uVar1,0);
    iVar3 = FUN_005ccb28(uVar5 + 0x45,auStack_48,0x10);
    if (iVar3 == 0) goto LAB_005048c8;
  }
  cell::cellGameContentErrorDialog(0x65,0,0);
LAB_005048c8:
  sys::sys_ppu_thread_exit(0);
  return;
}



//==== 005048f4  ns=Global  size=0x4
// sig: undefined FUN_005048f4(void)
// callers(0): 
// callees(0): 

void FUN_005048f4(void)

{
  return;
}



//==== 005048f8  ns=Global  size=0x44
// sig: undefined FUN_005048f8(void)
// callers(0): 
// callees(0): 

void FUN_005048f8(void)

{
  (*(code *)**(undefined4 **)(*DAT_00902ebc + 8))();
  return;
}



//==== 0050493c  ns=Global  size=0x4c
// sig: undefined FUN_0050493c(void)
// callers(0): 
// callees(0): 

void FUN_0050493c(undefined8 param_1,int param_2)

{
  (*(code *)**(undefined4 **)(*DAT_00902ebc + 8))(DAT_00902ebc,param_2 * 1000);
  return;
}



//==== 00504988  ns=Global  size=0x278
// sig: undefined FUN_00504988(void)
// callers(1): 0001401c boot::boot
// callees(5): 004ffc9c print_tty2; 005c8510 libc::strlen; 005c8700 FUN_005c8700; 005cc784 FUN_005cc784; 005ccb28 FUN_005ccb28
// strings: 0065f8a4: '\n\nApp Name %s\n' | 0065f8b4: '/app_home' | 0065f8c4: 'Activating SKU %s\n' | 0065f8dc: 'NPUA' (raw) | 0065f8e4: 'BCUS' (raw) | 0065f8ec: 'NPEA' (raw) | 0065f8f4: 'BCES' (raw) | 0065f8fc: 'NPHA' (raw) | 0065f904: 'NPJA' (raw) | 0065f90c: 'Registered SKU %d  Region is %d\n\n' | 0065f934: '/dev_bdvd'

void FUN_00504988(int param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 0xc) = (int)param_2;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  print_tty2("\n\nApp Name %s\n",param_2);
  sVar2 = libc::strlen("/app_home");
  iVar3 = FUN_005ccb28(param_2,"/app_home",sVar2);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (param_3 != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar5 = 0;
    iVar3 = param_1;
    do {
      iVar4 = FUN_005c8700(param_2,*(undefined4 *)(iVar3 + 0x18));
      if (iVar4 != 0) {
        iVar3 = param_1 + (int)(lVar5 << 4) + (int)(lVar5 << 2);
        print_tty2("Activating SKU %s\n",(ulonglong)*(uint *)(iVar3 + 0x20));
        uVar1 = *(undefined4 *)(iVar3 + 0x18);
        *(int *)(param_1 + 0xbc) = (int)lVar5;
        iVar4 = FUN_005cc784(uVar1,&DAT_0065f8dc);
        if ((iVar4 == 0) ||
           (iVar4 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f8e4), iVar4 == 0)) {
          *(undefined4 *)(param_1 + 0xc0) = 0;
        }
        else {
          iVar4 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f8ec);
          if ((iVar4 == 0) ||
             (iVar4 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f8f4), iVar4 == 0)) {
            *(undefined4 *)(param_1 + 0xc0) = 1;
          }
          else {
            iVar4 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f8fc);
            if (iVar4 == 0) {
              *(undefined4 *)(param_1 + 0xc0) = 2;
            }
            else {
              iVar3 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f904);
              if (iVar3 == 0) {
                *(undefined4 *)(param_1 + 0xc0) = 3;
              }
            }
          }
        }
        break;
      }
      lVar5 = lVar5 + 1;
      iVar3 = iVar3 + 0x14;
    } while ((int)lVar5 < *(int *)(param_1 + 0xb8));
  }
  print_tty2("Registered SKU %d  Region is %d\n\n",*(undefined4 *)(param_1 + 0xbc),
             *(undefined4 *)(param_1 + 0xc0));
  sVar2 = libc::strlen("/dev_bdvd");
  iVar3 = FUN_005ccb28(param_2,"/dev_bdvd",sVar2);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x24) = 1;
  }
  return;
}



//==== 00504c00  ns=idol  size=0x38
// sig: void CheckLicense(int * unk1, undefined4 unk_ptr, char * gameId, char * gameIdExt, bool isDisc, undefined4 param_6)
// callers(1): 0001401c boot::boot
// callees(0): 

void idol::CheckLicense(int *unk1,int unk_ptr,char *gameId,char *gameIdExt,bool isDisc,int param_6)

{
  int iVar1;
  
  iVar1 = unk1[0x2e];
  unk1[0x2e] = iVar1 + 1;
  unk1[iVar1 * 5 + 6] = unk_ptr;
  unk1[iVar1 * 5 + 7] = (int)gameId;
  unk1[iVar1 * 5 + 8] = (int)gameIdExt;
  *(bool *)(unk1 + iVar1 * 5 + 9) = isDisc;
  unk1[iVar1 * 5 + 10] = param_6;
  return;
}



//==== 00504c38  ns=Global  size=0x20
// sig: undefined FUN_00504c38(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00504c38(int param_1)

{
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x18);
}



//==== 00504c58  ns=Global  size=0x20
// sig: undefined FUN_00504c58(void)
// callers(3): 004e7f9c FUN_004e7f9c; 004ee958 FUN_004ee958; 004eebfc FUN_004eebfc
// callees(0): 

undefined4 FUN_00504c58(int param_1)

{
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x1c);
}



//==== 00504c78  ns=Global  size=0x20
// sig: undefined FUN_00504c78(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00504c78(int param_1)

{
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x20);
}



//==== 00504c98  ns=Global  size=0x48
// sig: undefined FUN_00504c98(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00504c98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + *(int *)(param_1 + 0xbc) * 0x14;
  iVar1 = *(int *)(iVar3 + 0x28);
  if (iVar1 < 0) {
    uVar2 = *(undefined4 *)(iVar3 + 0x1c);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + iVar1 * 0x14 + 0x1c);
  }
  return uVar2;
}



//==== 00504ce0  ns=Global  size=0x48
// sig: undefined FUN_00504ce0(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00504ce0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + *(int *)(param_1 + 0xbc) * 0x14;
  iVar1 = *(int *)(iVar3 + 0x28);
  if (iVar1 < 0) {
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + iVar1 * 0x14 + 0x20);
  }
  return uVar2;
}



//==== 00504d28  ns=Global  size=0x20
// sig: undefined FUN_00504d28(void)
// callers(0): 
// callees(0): 

int FUN_00504d28(int param_1)

{
  return param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x18;
}



//==== 00504d48  ns=Global  size=0x48
// sig: undefined FUN_00504d48(void)
// callers(1): 004ee818 FUN_004ee818
// callees(0): 

int FUN_00504d48(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x28);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + iVar1 * 0x14 + 0x18;
  }
  return iVar1;
}



//==== 00504d90  ns=Global  size=0x20
// sig: undefined FUN_00504d90(void)
// callers(6): 00012ec8 boot::GameStart; 000e8268 memcard::memcard_ConstructSaveString; 004ee958 FUN_004ee958; 004eebfc FUN_004eebfc; 005046b0 idol::GameAuthenticate; 0050476c FUN_0050476c
// callees(0): 

undefined1 FUN_00504d90(int param_1)

{
  return *(undefined1 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x24);
}



//==== 00504db0  ns=Global  size=0x14
// sig: undefined FUN_00504db0(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(0): 

ulonglong FUN_00504db0(int param_1,int param_2)

{
  return (ulonglong)(LZCOUNT(*(int *)(param_1 + 0xc0) - param_2) << 0x20) >> 0x25;
}



//==== 00504dc8  ns=Global  size=0x58
// sig: undefined FUN_00504dc8(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void FUN_00504dc8(int param_1)

{
  longlong lVar1;
  
  libc::memset(param_1,0,0xc0);
  lVar1 = 0xb;
  do {
    *(undefined1 *)(param_1 + 0x4c0) = 0;
    *(undefined1 *)(param_1 + 0x4ff) = 0;
    param_1 = param_1 + 0x40;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



//==== 00504e20  ns=Global  size=0x58
// sig: undefined FUN_00504e20(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void FUN_00504e20(int param_1)

{
  longlong lVar1;
  
  libc::memset(param_1,0,0xc0);
  lVar1 = 0xb;
  do {
    *(undefined1 *)(param_1 + 0x4c0) = 0;
    *(undefined1 *)(param_1 + 0x4ff) = 0;
    param_1 = param_1 + 0x40;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



//==== 00504e78  ns=Global  size=0x150
// sig: undefined FUN_00504e78(void)
// callers(4): 00505044 FUN_00505044; 005050b4 FUN_005050b4; 005051d8 FUN_005051d8; 005053a8 FUN_005053a8
// callees(1): 004ffc9c print_tty2
// strings: 0065f940: '*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-Error, unrecognized escape command %i *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n'

byte * FUN_00504e78(undefined8 param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar3 = 0;
  pbVar2 = (byte *)(param_2 + 5);
  *param_3 = *(undefined1 *)(param_2 + 3);
  param_3[1] = *(char *)(param_2 + 1) + -2;
  param_3[2] = *(char *)(param_2 + 4) + -2;
  if (0 < (int)(*(byte *)(param_2 + 1) - 2)) {
    do {
      iVar4 = 0;
      pbVar5 = pbVar2;
      do {
        if (*pbVar2 == 0xfd) {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
          pbVar2 = pbVar5;
          if (bVar1 == 2) {
            param_3[iVar4 + 4] = 0xfd;
          }
          else if ((bVar1 < 0x40) || (0x60 < bVar1)) {
            param_3[iVar4 + 4] = 0;
            print_tty2(
                      "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-Error, unrecognized escape command %i *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n"
                      );
          }
          else {
            param_3[iVar4 + 4] = bVar1 - 0x40;
          }
        }
        else {
          param_3[iVar4 + 4] = *pbVar2;
        }
        iVar4 = iVar4 + 1;
        pbVar2 = pbVar2 + 1;
        pbVar5 = pbVar5 + 1;
      } while (iVar4 < 4);
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 4;
    } while (iVar3 < (int)(*(byte *)(param_2 + 1) - 2));
  }
  return pbVar2;
}



//==== 00504fc8  ns=Global  size=0x14
// sig: undefined FUN_00504fc8(void)
// callers(0): 
// callees(0): 

ulonglong FUN_00504fc8(undefined8 param_1,byte *param_2)

{
  return (ulonglong)(LZCOUNT(*param_2 - 1) << 0x20) >> 0x25;
}



//==== 00504fdc  ns=Global  size=0x68
// sig: undefined FUN_00504fdc(void)
// callers(0): 
// callees(1): 005c8510 libc::strlen

undefined8 FUN_00504fdc(undefined8 param_1,char *param_2)

{
  size_t sVar2;
  undefined8 uVar1;
  
  if (*param_2 == '\x01') {
    sVar2 = libc::strlen(param_2);
    if ((sVar2 < 5) || (sVar2 < (byte)param_2[2])) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 00505044  ns=Global  size=0x70
// sig: undefined FUN_00505044(void)
// callers(0): 
// callees(1): 00504e78 FUN_00504e78

undefined8 FUN_00505044(undefined8 param_1,char *param_2,char param_3)

{
  undefined8 uVar1;
  char local_20 [24];
  
  if ((*param_2 == '\x01') && (FUN_00504e78(param_1,param_2,local_20), local_20[0] == param_3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 005050b4  ns=Global  size=0x60
// sig: undefined FUN_005050b4(void)
// callers(0): 
// callees(1): 00504e78 FUN_00504e78

undefined8 FUN_005050b4(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  char local_20 [32];
  
  if ((*param_2 == '\x01') && (FUN_00504e78(param_1,param_2,local_20), local_20[0] == '\x04')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 00505114  ns=Global  size=0xc4
// sig: undefined FUN_00505114(void)
// callers(0): 
// callees(3): 005c5ad0 libc::memcpy; 005cc44c FUN_005cc44c; 005cc8d8 libc::strcpy

longlong FUN_00505114(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5)

{
  int iVar1;
  size_t __n;
  int iVar2;
  longlong lVar3;
  
  __n = param_4 - (int)(char *)param_2;
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = (int)param_1;
  libc::strcpy((char *)(iVar2 + 0xc0),(char *)param_2);
  lVar3 = param_1 + 0x2c0;
  libc::memcpy((void *)lVar3,(char *)(iVar2 + 0xc0),__n);
  libc::strcpy((char *)(iVar2 + __n + 0x2c0),(char *)(iVar2 + iVar1 * 0x40 + 0x4c0));
  FUN_005cc44c(lVar3,(param_1 + (param_5 - param_2) & 0xffffffffU) + 0xc0);
  return lVar3;
}



//==== 005051d8  ns=Global  size=0x15c
// sig: undefined FUN_005051d8(void)
// callers(2): 004eaf98 FUN_004eaf98; 004eb358 FUN_004eb358
// callees(4): 00504e78 FUN_00504e78; 005c5ad0 libc::memcpy; 005cc44c FUN_005cc44c; 005cc8d8 libc::strcpy

char * FUN_005051d8(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *__dest;
  undefined1 auStack_50 [2];
  byte local_4e;
  int local_4c;
  
  iVar2 = 0;
  __dest = (char *)(param_1 + 0x2c0);
  do {
    if (param_2 == (char *)0x0) {
      return (char *)0x0;
    }
    while( true ) {
      if (param_2[iVar2] == '\0') {
        return param_2;
      }
      pcVar3 = param_2 + iVar2;
      if (*pcVar3 != '\x01') break;
      iVar1 = FUN_00504e78(param_1,pcVar3,auStack_50);
      if ((local_4e & 0x20) == 0) {
        iVar2 = iVar2 + (iVar1 - (int)pcVar3);
      }
      else {
        libc::strcpy((char *)(param_1 + 0xc0),param_2);
        libc::memcpy(__dest,(char *)(param_1 + 0xc0),(int)pcVar3 - (int)param_2);
        libc::strcpy((char *)(param_1 + ((int)pcVar3 - (int)param_2) + 0x2c0),
                     (char *)(param_1 + local_4c * 0x40 + 0x4c0));
        FUN_005cc44c(__dest,param_1 + (iVar1 - (int)param_2) + 0xc0);
        iVar2 = iVar2 + 1;
        param_2 = __dest;
        if (__dest == (char *)0x0) {
          return (char *)0x0;
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



//==== 00505338  ns=Global  size=0x6c
// sig: undefined FUN_00505338(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00505338(int param_1,byte *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((*param_2 < 0x30) && (piVar1 = *(int **)(param_1 + (uint)*param_2 * 4), piVar1 != (int *)0x0))
  {
    uVar2 = (*(code *)**(undefined4 **)(*piVar1 + 8))(piVar1);
    return uVar2;
  }
  return 0;
}



//==== 005053a8  ns=Global  size=0xa4
// sig: undefined FUN_005053a8(void)
// callers(0): 
// callees(1): 00504e78 FUN_00504e78

undefined8 FUN_005053a8(int param_1,undefined8 param_2,float *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  byte local_30 [24];
  
  uVar2 = FUN_00504e78(param_1,param_2,local_30);
  if (local_30[0] < 0x30) {
    piVar1 = *(int **)(param_1 + (uint)local_30[0] * 4);
    if (piVar1 != (int *)0x0) {
      dVar3 = (double)(*(code *)**(undefined4 **)(*piVar1 + 8))(piVar1,local_30);
      goto LAB_00505428;
    }
  }
  dVar3 = 0.0;
LAB_00505428:
  *param_3 = (float)dVar3;
  return uVar2;
}



//==== 0050544c  ns=Global  size=0x58
// sig: undefined FUN_0050544c(void)
// callers(1): 004ec160 idol::Pad_PS_Update
// callees(1): 005cccec libc::strcpy

void FUN_0050544c(int param_1,uint param_2,undefined8 param_3)

{
  if (param_2 < 0xb) {
    libc::strcpy(param_1 + param_2 * 0x40 + 0x4c0,param_3,0x3f);
  }
  return;
}



//==== 005054a4  ns=Global  size=0xdc
// sig: undefined FUN_005054a4(void)
// callers(0): 
// callees(1): 005c6094 FUN_005c6094

void FUN_005054a4(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0xb) {
    iVar4 = param_1 + param_2 * 0x40 + 0x4c0;
    iVar2 = 0x3f;
    do {
      iVar3 = iVar2;
      iVar1 = param_3 / 10;
      *(char *)(iVar4 + iVar3) = (char)param_3 + (char)(param_3 / 10) * -10 + '0';
      param_3 = iVar1;
      iVar2 = iVar3 + -1;
    } while (0 < iVar3 + -1 && iVar1 != 0);
    if (iVar3 != 0) {
      FUN_005c6094(iVar4,iVar4 + iVar3,0x40 - iVar3);
    }
    *(undefined1 *)(iVar4 + (0x40 - iVar3)) = 0;
  }
  return;
}



//==== 00505580  ns=Global  size=0x68
// sig: undefined FUN_00505580(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void FUN_00505580(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  libc::memset(&DAT_0159b38c,0,0xc0);
  puVar2 = &DAT_0159b84c;
  puVar1 = &DAT_0159b88b;
  lVar3 = 0xb;
  do {
    *puVar2 = 0;
    *puVar1 = 0;
    puVar2 = puVar2 + 0x40;
    puVar1 = puVar1 + 0x40;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



//==== 005055e8  ns=Global  size=0x74
// sig: undefined FUN_005055e8(void)
// callers(1): 004ec160 idol::Pad_PS_Update
// callees(0): 

void FUN_005055e8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_2[0x2c] = 0;
  lVar2 = 4;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x34] = 1;
  param_2[0x35] = 1;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x36] = 0;
  puVar1 = param_2;
  do {
    *puVar1 = 0;
    puVar1[0x10] = 0;
    puVar1[1] = 0;
    puVar1[0x11] = 0;
    puVar1[2] = 0;
    puVar1[0x12] = 0;
    puVar1[3] = 0;
    puVar1[0x13] = 0;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined1 *)(param_2 + 0x158) = 0;
  return;
}



//==== 0050565c  ns=Global  size=0x144
// sig: undefined FUN_0050565c(void)
// callers(1): 0001401c boot::boot
// callees(5): 005cd098 libc::printf; 005cd2a8 libc::snprintf; 0064f5a4 cell::cellAudioOutConfigure; 0064f684 cell::cellAudioOutGetSoundAvailability; 0064fdc4 cell::cellAudioInit
// strings: 0065f9a8: 'Dolby Digital' | 0065f9b8: 'Linear PCM' | 0065f9c8: 'cellAudioOutConfigure failed with error 0x%x\n' | 0065f9f8: 'cellAudioInit failed with error 0x%x\n'

void FUN_0050565c(undefined4 param_1)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  byte local_40 [16];
  char acStack_30 [24];
  
  iVar2 = cell::cellAudioOutGetSoundAvailability(0,0,4,0);
  iVar3 = cell::cellAudioOutGetSoundAvailability(0,1,4,0);
  if (iVar2 < iVar3) {
    local_40[0] = (byte)iVar3;
    libc::snprintf(acStack_30,"Dolby Digital");
  }
  else {
    local_40[0] = (byte)iVar2;
    libc::snprintf(acStack_30,"Linear PCM");
  }
  DAT_0159bb10 = (uint)local_40[0];
  iVar2 = cell::cellAudioOutConfigure(0,local_40,0,0);
  if (iVar2 != 0) {
    iVar2 = libc::printf("cellAudioOutConfigure failed with error 0x%x\n",iVar2);
  }
  uVar1 = cell::cellAudioInit(iVar2);
  if ((int)uVar1 != 0) {
    libc::printf("cellAudioInit failed with error 0x%x\n",uVar1);
  }
  DAT_0159bb0c = param_1;
  return;
}



//==== 005057a0  ns=Global  size=0x24
// sig: undefined FUN_005057a0(void)
// callers(1): 00013a20 boot::GameShutDown
// callees(1): 0060c448 FUN_0060c448

void FUN_005057a0(void)

{
  FUN_0060c448();
  return;
}



//==== 005057c4  ns=Global  size=0x10
// sig: undefined FUN_005057c4(void)
// callers(1): 0001401c boot::boot
// callees(0): 

undefined4 FUN_005057c4(void)

{
  return DAT_0159bb10;
}



//==== 005057d4  ns=Global  size=0x34
// sig: undefined FUN_005057d4(void)
// callers(0): 
// callees(1): 004fe30c FUN_004fe30c

void FUN_005057d4(undefined4 param_1)

{
  FUN_004fe30c(param_1,DAT_0159bb0c,0x10);
  return;
}



//==== 00505808  ns=Global  size=0x4
// sig: undefined FUN_00505808(void)
// callers(0): 
// callees(0): 

void FUN_00505808(void)

{
  return;
}



//==== 00505810  ns=Global  size=0x90
// sig: undefined FUN_00505810(void)
// callers(1): 0015bc00 sound::sound_Init
// callees(2): 0060c518 FUN_0060c518; 0060ca38 FUN_0060ca38

void FUN_00505810(void)

{
  undefined1 local_80 [120];
  
  FUN_0060ca38(local_80);
  FUN_0060c518(local_80);
  return;
}



//==== 005058a0  ns=Global  size=0xb4
// sig: undefined FUN_005058a0(void)
// callers(0): 
// callees(1): 006343bc FUN_006343bc

void FUN_005058a0(void)

{
  undefined1 local_30 [48];
  
  FUN_006343bc(local_30);
  return;
}



//==== 00505954  ns=Global  size=0x178
// sig: undefined FUN_00505954(void)
// callers(1): 0011ba58 music::music_Init
// callees(4): 004ffc9c print_tty2; 00632180 FUN_00632180; 006343bc FUN_006343bc; 006367dc FUN_006367dc
// strings: 0065fac8: 'Scream Initialization called already!'

undefined8 FUN_00505954(undefined4 param_1)

{
  undefined1 local_70 [40];
  undefined1 local_48 [56];
  
  FUN_00632180(local_70);
  if (DAT_0159c320 == '\0') {
    DAT_0159c328 = FUN_006367dc(param_1,0x40000,local_70);
    DAT_0159c320 = '\x01';
  }
  if (DAT_0159c328 == -5) {
    print_tty2("Scream Initialization called already!");
  }
  FUN_006343bc(local_48);
  return 1;
}



//==== 00505acc  ns=Global  size=0x24
// sig: undefined FUN_00505acc(void)
// callers(0): 
// callees(1): 00636718 FUN_00636718

void FUN_00505acc(void)

{
  FUN_00636718();
  return;
}



//==== 00505af0  ns=Global  size=0x8
// sig: undefined FUN_00505af0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00505af0(void)

{
  return 0;
}



//==== 00505af8  ns=Global  size=0x4
// sig: undefined FUN_00505af8(void)
// callers(1): 0015be68 sound::sound_Update
// callees(0): 

void FUN_00505af8(void)

{
  return;
}



//==== 00505afc  ns=Global  size=0x8
// sig: undefined FUN_00505afc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00505afc(void)

{
  return 0;
}



//==== 00505b04  ns=Global  size=0x8
// sig: undefined FUN_00505b04(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00505b04(void)

{
  return 0;
}



//==== 00505b0c  ns=Global  size=0x24
// sig: undefined FUN_00505b0c(void)
// callers(0): 
// callees(1): 0060ae8c 989snd::snd_BankLoadFromMemEx

void FUN_00505b0c(void)

{
  989snd::snd_BankLoadFromMemEx();
  return;
}



//==== 00505b30  ns=Global  size=0x7c
// sig: undefined FUN_00505b30(void)
// callers(3): 00012ec8 boot::GameStart; 000def78 loaders::LoadLevelFiles; 00163aa0 space::SpaceTransition_LoadWad
// callees(1): 0060ae8c 989snd::snd_BankLoadFromMemEx

void FUN_00505b30(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = 989snd::snd_BankLoadFromMemEx();
  (*(code *)*param_2)(lVar1 + ((LZCOUNT(-(int)lVar1) << 0x3a) >> 0x3f & -lVar1 - 1U),param_3);
  return;
}



//==== 00505bac  ns=Global  size=0xc0
// sig: undefined FUN_00505bac(void)
// callers(0): 
// callees(3): 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 0060af74 989snd::snd_BankLoadEx

void FUN_00505bac(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_70 [72];
  
  uVar1 = FUN_004ef34c();
  FUN_004ef4d0(uVar1,param_1,auStack_70);
  lVar2 = 989snd::snd_BankLoadEx(auStack_70,param_2);
  (*(code *)*param_3)(lVar2 + ((LZCOUNT(-(int)lVar2) << 0x3a) >> 0x3f & -lVar2 - 1U),param_4);
  return;
}



//==== 00505c6c  ns=Global  size=0x8c
// sig: undefined FUN_00505c6c(void)
// callers(1): 0015ccd4 sound::sound_LoadLevelWadDebug
// callees(3): 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 0060af74 989snd::snd_BankLoadEx

longlong FUN_00505c6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_60 [72];
  
  uVar1 = FUN_004ef34c();
  FUN_004ef4d0(uVar1,param_1,auStack_60);
  lVar2 = 989snd::snd_BankLoadEx(auStack_60,param_2);
  return lVar2 + ((LZCOUNT(-(int)lVar2) << 0x3a) >> 0x3f & -lVar2 - 1U);
}



//==== 00505cf8  ns=Global  size=0x4
// sig: undefined FUN_00505cf8(void)
// callers(0): 
// callees(0): 

void FUN_00505cf8(void)

{
  return;
}



//==== 00505cfc  ns=Global  size=0x24
// sig: undefined FUN_00505cfc(void)
// callers(3): 0011c830 music::music_PlayPreseekedSpeech; 0011cec8 music::music_UpdateStream; 0011d1f0 music::LoadMusic
// callees(1): 00609ad0 FUN_00609ad0

void FUN_00505cfc(void)

{
  FUN_00609ad0();
  return;
}



//==== 00505d20  ns=stub  size=0x8
// sig: undefined STUB_00505d20(void)
// callers(19): 00012048 boot::PrepareFrontbin; 0004fe38 sound::UnloadSoundBanks; 00079b18 freeze::UpdateFreeze; 000def78 loaders::LoadLevelFiles; 000e0e60 main::startLevel; 0011ba58 music::music_Init; 0011cd1c music::music_Stop; 0011dbcc music::LoadMusic2; 0013abcc pause::BeginMenu; 0013b838 pause::UpdatePause; 0015be68 sound::sound_Update; 0015d8b4 sound::sound_StopAllSounds; 0015fe00 space::ChooseLoadingScreen; 00163aa0 space::SpaceTransition_LoadWad; 00164c58 space::DoSpaceTransition; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016b038 vendor::Vendor_EndWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene; 0016ba38 vendor::Vendor_RestoreHero
// callees(0): 

undefined8 stub::STUB_00505d20(void)

{
  return 0;
}



//==== 00505d30  ns=Global  size=0x48
// sig: undefined FUN_00505d30(void)
// callers(1): 0015be68 sound::sound_Update
// callees(1): 006051ac FUN_006051ac

void FUN_00505d30(int param_1)

{
  FUN_006051ac((double)((float)(longlong)param_1 * 0.44704));
  return;
}



//==== 00505d78  ns=Global  size=0x6c
// sig: undefined FUN_00505d78(void)
// callers(0): 
// callees(1): 0063511c FUN_0063511c

void FUN_00505d78(undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_20 [4];
  
  FUN_0063511c(param_1,local_20);
  if (param_2 != (undefined4 *)0x0) {
    (*(code *)*param_2)(local_20[0],param_3);
  }
  return;
}



//==== 00505e08  ns=Global  size=0x90
// sig: undefined FUN_00505e08(void)
// callers(1): 0011cec8 music::music_UpdateStream
// callees(1): 006356dc FUN_006356dc

void FUN_00505e08(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 local_30 [24];
  
  FUN_006356dc(param_1,local_30,0);
  (*(code *)*param_2)(0,param_3);
  return;
}



//==== 00505e98  ns=Global  size=0x80
// sig: undefined FUN_00505e98(void)
// callers(1): 0011cec8 music::music_UpdateStream
// callees(1): 00635204 FUN_00635204

void FUN_00505e98(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  FUN_00635204(param_1,local_20,local_1c,local_18,local_14);
  (*(code *)*param_2)(0,param_3);
  return;
}



//==== 00505f18  ns=Global  size=0x24
// sig: undefined FUN_00505f18(void)
// callers(1): 0011cec8 music::music_UpdateStream
// callees(1): 00609a5c FUN_00609a5c

void FUN_00505f18(void)

{
  FUN_00609a5c();
  return;
}



//==== 00505f3c  ns=stub  size=0x4
// sig: undefined STUB_00505f3c(void)
// callers(0): 
// callees(0): 

void stub::STUB_00505f3c(void)

{
  return;
}



//==== 00505f40  ns=stub  size=0x4
// sig: undefined STUB_00505f40(void)
// callers(0): 
// callees(0): 

void stub::STUB_00505f40(void)

{
  return;
}



//==== 00505f44  ns=stub  size=0x4
// sig: undefined STUB_00505f44(void)
// callers(1): 0015bc00 sound::sound_Init
// callees(0): 

void stub::STUB_00505f44(void)

{
  return;
}



//==== 00505f48  ns=stub  size=0x4
// sig: undefined STUB_00505f48(void)
// callers(6): 00012ec8 boot::GameStart; 0004fe38 sound::UnloadSoundBanks; 000def78 loaders::LoadLevelFiles; 0015ccd4 sound::sound_LoadLevelWadDebug; 00163aa0 space::SpaceTransition_LoadWad; 00164c58 space::DoSpaceTransition
// callees(0): 

void stub::STUB_00505f48(void)

{
  return;
}



//==== 00505f4c  ns=stub  size=0x4
// sig: undefined STUB_00505f4c(void)
// callers(8): 00012048 boot::PrepareFrontbin; 0004fe38 sound::UnloadSoundBanks; 000e0e60 main::startLevel; 0011dbcc music::LoadMusic2; 0015be68 sound::sound_Update; 0015d8b4 sound::sound_StopAllSounds; 0015fe00 space::ChooseLoadingScreen; 00164c58 space::DoSpaceTransition
// callees(0): 

void stub::STUB_00505f4c(void)

{
  return;
}



//==== 00505f50  ns=stub  size=0x4
// sig: undefined STUB_00505f50(void)
// callers(5): 00012048 boot::PrepareFrontbin; 000e0e60 main::startLevel; 0011dbcc music::LoadMusic2; 0015be68 sound::sound_Update; 0015fe00 space::ChooseLoadingScreen
// callees(0): 

void stub::STUB_00505f50(void)

{
  return;
}



//==== 00505f58  ns=sound  size=0x48
// sig: undefined sound_SetMasterVolume(int which, int vol)
// callers(2): 0015bc00 sound::sound_Init; 0015be68 sound::sound_Update
// callees(1): 0060b6b4 989snd::snd_SetMasterVolume

void sound::sound_SetMasterVolume(int which,int vol)

{
  989snd::snd_SetMasterVolume((double)((float)(longlong)vol * 0.0009765625),which);
  return;
}



//==== 00505fa8  ns=Global  size=0x98
// sig: undefined FUN_00505fa8(void)
// callers(0): 
// callees(1): 0060b594 989snd::snd_SetMasterVolumeDucker

void FUN_00505fa8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong in_LR;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar4 = ZEXT48(&stack0x00000000);
  lVar1 = uVar4 - 0x90;
  puVar3 = (ulonglong *)lVar1;
  *puVar3 = uVar4;
  puVar3[0x14] = in_LR;
  auVar6 = ZEXT416(0xffffffff);
  auVar5 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar10 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = loadVectorLeftIndexed(8,param_2);
  auVar7 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  uVar2 = ((undefined4 *)param_2)[1];
  *(undefined4 *)(puVar3 + 0xe) = *(undefined4 *)param_2;
  *(undefined4 *)((int)puVar3 + 0x74) = uVar2;
  auVar6 = loadVectorLeftIndexed(0xc,param_2);
  auVar9 = loadVectorLeftIndexed(in_LR,0x505fa0);
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar6 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar9,auVar5);
  auVar5 = vectorShiftLeftIntegerWord(auVar10,auVar10);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar8,auVar9,auVar5);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  uVar2 = storeVectorElementWordIndexed
                    (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x78,lVar1);
  *(undefined4 *)(puVar3 + 0xf) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar5,0x7c,lVar1);
  *(undefined4 *)((int)puVar3 + 0x7c) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar5,0x80,lVar1);
  *(undefined4 *)(puVar3 + 0x10) = uVar2;
  989snd::snd_SetMasterVolumeDucker(param_1,uVar4 - 0x20);
  return;
}



//==== 00506040  ns=stub  size=0x4
// sig: undefined STUB_00506040(void)
// callers(1): 0015bc00 sound::sound_Init
// callees(0): 

void stub::STUB_00506040(void)

{
  return;
}



//==== 00506044  ns=stub  size=0x4
// sig: undefined STUB_00506044(void)
// callers(0): 
// callees(0): 

void stub::STUB_00506044(void)

{
  return;
}



//==== 00506048  ns=Global  size=0x2c
// sig: undefined FUN_00506048(void)
// callers(1): 0015bc00 sound::sound_Init
// callees(1): 0060c118 FUN_0060c118

void FUN_00506048(void)

{
  FUN_0060c118(2,0);
  return;
}



//==== 00506074  ns=stub  size=0x4
// sig: undefined STUB_00506074(void)
// callers(2): 0015be68 sound::sound_Update; 00164c58 space::DoSpaceTransition
// callees(0): 

void stub::STUB_00506074(void)

{
  return;
}



//==== 00506090  ns=Global  size=0x204
// sig: undefined FUN_00506090(void)
// callers(4): 00506294 FUN_00506294; 005062f4 FUN_005062f4; 005063b0 FUN_005063b0; 00506444 FUN_00506444
// callees(1): 005d0140 libc::memset

void FUN_00506090(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  byte in_cr6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar4._0_4_ = param_5;
  auVar4._4_4_ = param_5;
  auVar4._8_4_ = param_5;
  auVar4._12_4_ = param_5;
  uVar2 = 0x70;
  auVar6._0_4_ = param_6;
  auVar6._4_4_ = param_6;
  auVar6._8_4_ = param_6;
  auVar6._12_4_ = param_6;
  libc::memset(param_1,0,0xdc);
  puVar3 = (undefined4 *)param_1;
  *puVar3 = 0xdc;
  if ((param_2 & 4) != 0) {
    puVar3[1] = puVar3[1] | 4;
  }
  if ((param_2 & 8) != 0) {
    puVar3[1] = puVar3[1] | 8;
  }
  if ((param_2 & 1) != 0) {
    puVar3[1] = puVar3[1] | 1;
  }
  if ((param_2 & 2) != 0) {
    puVar3[1] = puVar3[1] | 2;
  }
  auVar7 = vectorConvertFromSignedFixedPointWord(auVar4,0);
  puVar3[7] = param_4;
  auVar4 = ZEXT416(0xffffffff);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  puVar3[5] = (int)param_3 + ((uint)((longlong)param_3 >> 0x3f) & 0x168);
  auVar4 = loadVectorLeftIndexed(uVar2,0x506078);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar7,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
  uVar1 = storeVectorElementWordIndexed(auVar5,0x20,param_1);
  *(undefined4 *)((uint)(puVar3 + 8) & 0xfffffffc) = uVar1;
  auVar4 = loadVectorLeftIndexed(4,0x506078);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  vectorCompareGreaterThanFloatingPoint(auVar5,auVar4);
  if (!(bool)(in_cr6 >> 1 & 1)) {
    puVar3[8] = 0x3f800000;
    auVar5 = auVar4;
  }
  auVar4 = loadVectorLeftIndexed(8,0x506078);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar5,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    puVar3[8] = 0xbf800000;
  }
  auVar5 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar4 = ZEXT416(0xffffffff);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar6 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  auVar4 = loadVectorLeftIndexed(0xc,0x506078);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar6);
  uVar1 = storeVectorElementWordIndexed(auVar6,0x10,param_1);
  *(undefined4 *)((uint)(puVar3 + 4) & 0xfffffffc) = uVar1;
  auVar4 = loadVectorLeftIndexed(0x10,0x506078);
  auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  vectorCompareGreaterThanFloatingPoint(auVar6,auVar4);
  if (!(bool)(in_cr6 >> 1 & 1)) {
    puVar3[4] = 0x40000000;
    auVar6 = auVar4;
  }
  auVar4 = ZEXT416(0);
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    puVar3[4] = 0;
  }
  return;
}



//==== 00506294  ns=Global  size=0x60
// sig: undefined FUN_00506294(void)
// callers(0): 
// callees(2): 00506090 FUN_00506090; 00607dcc FUN_00607dcc

void FUN_00506294(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_f0 [224];
  
  FUN_00506090(auStack_f0,param_2,param_4,param_5,param_6,param_3);
  FUN_00607dcc(param_1,auStack_f0);
  return;
}



//==== 005062f4  ns=Global  size=0xbc
// sig: undefined FUN_005062f4(void)
// callers(2): 0015be68 sound::sound_Update; 0015fe00 space::ChooseLoadingScreen
// callees(2): 00506090 FUN_00506090; 00609814 FUN_00609814

void FUN_005062f4(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_110 [232];
  
  FUN_00506090(auStack_110,0,param_4,param_5,param_6,param_3);
  uVar1 = FUN_00609814(param_1,param_2,auStack_110,0xffffffffffffffff);
  if (param_7 != (undefined4 *)0x0) {
    (*(code *)*param_7)(uVar1,param_8);
  }
  return;
}



//==== 005063b0  ns=Global  size=0x94
// sig: undefined FUN_005063b0(void)
// callers(2): 0011d1f0 music::LoadMusic; 0015be68 sound::sound_Update
// callees(2): 00506090 FUN_00506090; 00607dcc FUN_00607dcc

void FUN_005063b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_100 [224];
  
  FUN_00506090(auStack_100,param_2,param_4,param_5,param_6,param_3);
  uVar1 = FUN_00607dcc(param_1,auStack_100);
  (*(code *)*param_7)(uVar1,param_8);
  return;
}



//==== 00506444  ns=Global  size=0x194
// sig: undefined FUN_00506444(void)
// callers(13): 0011bb9c music::music_StartSpeech_Helpgirl; 0011bc90 music::music_StartSpeech_Qwark; 0011bd90 music::music_StartSpeech_Space; 0011be84 music::music_StartSpeech_Help; 0011c004 music::music_StartSpeech_Bindata; 0011c0fc music::music_StartSpeech_Vendor; 0011c1e8 music::music_StartSpeech; 0011c890 music::music_PreseekTrack; 0011c984 music::music_StartTrack; 0011ca78 music::music_StartTrackBody; 0011cbb4 music::music_Transition; 0011d1f0 music::LoadMusic; 0011dd04 music::music_PreseekCB
// callees(4): 00506090 FUN_00506090; 005d0140 libc::memset; 006362a4 FUN_006362a4; 006363e4 FUN_006363e4

void FUN_00506444(void)

{
  undefined8 uVar1;
  undefined2 in_r7;
  undefined8 in_r8;
  undefined8 in_r10;
  undefined4 in_stack_00000074;
  undefined4 *in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined1 local_220 [32];
  undefined1 local_200 [212];
  undefined1 auStack_12c [220];
  
  libc::memset(local_200,0,0x1b0);
  FUN_00506090(auStack_12c,in_stack_00000074,in_r8,0,0,in_r7);
  if ((int)in_r10 == 0) {
    uVar1 = FUN_006363e4(local_220,local_200,0xffffffffffffffff);
    (*(code *)*in_stack_0000007c)(uVar1,in_stack_00000084);
  }
  else {
    uVar1 = FUN_006362a4(in_r10,7,local_220,local_200);
    (*(code *)*in_stack_0000007c)(uVar1,in_stack_00000084);
  }
  return;
}



//==== 005065d8  ns=Global  size=0x4
// sig: undefined FUN_005065d8(void)
// callers(0): 
// callees(0): 

void FUN_005065d8(void)

{
  return;
}



//==== 005065dc  ns=Global  size=0x58
// sig: undefined FUN_005065dc(void)
// callers(2): 0011cec8 music::music_UpdateStream; 0015be68 sound::sound_Update
// callees(1): 00604da4 FUN_00604da4

void FUN_005065dc(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00604da4();
  (*(code *)*param_2)(uVar1,param_3);
  return;
}



//==== 00506634  ns=Global  size=0x4
// sig: undefined FUN_00506634(void)
// callers(0): 
// callees(0): 

void FUN_00506634(void)

{
  return;
}



//==== 00506638  ns=Global  size=0x28
// sig: undefined FUN_00506638(void)
// callers(2): 0011cec8 music::music_UpdateStream; 0015be68 sound::sound_Update
// callees(1): 006084f4 FUN_006084f4

void FUN_00506638(undefined8 param_1)

{
  FUN_006084f4(param_1,1);
  return;
}



//==== 00506660  ns=Global  size=0x4
// sig: undefined FUN_00506660(void)
// callers(1): 0011d9e0 music::music_StopLoad
// callees(0): 

void FUN_00506660(void)

{
  return;
}



//==== 00506664  ns=Global  size=0x48
// sig: undefined FUN_00506664(void)
// callers(4): 0004fe38 sound::UnloadSoundBanks; 0011ba2c music::music_LoadCoreBank; 0011ba58 music::music_Init; 00164c58 space::DoSpaceTransition
// callees(0): 

void FUN_00506664(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (*(code *)*param_1)(5);
  }
  return;
}



//==== 005066ac  ns=Global  size=0x8
// sig: undefined FUN_005066ac(void)
// callers(1): 0011dc14 music::music_CdCB
// callees(0): 

undefined8 FUN_005066ac(void)

{
  return 4;
}



//==== 005066b4  ns=Global  size=0x8
// sig: undefined FUN_005066b4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005066b4(void)

{
  return 0;
}



//==== 005066bc  ns=stub  size=0x8
// sig: undefined STUB_005066bc_RET_0(void)
// callers(5): 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 0011d1f0 music::LoadMusic; 00164c58 space::DoSpaceTransition; 0016974c update::UpdateCinematic
// callees(0): 

undefined8 stub::STUB_005066bc_RET_0(void)

{
  return 0;
}



//==== 005066c4  ns=Global  size=0x4
// sig: undefined FUN_005066c4(void)
// callers(1): 0011cd1c music::music_Stop
// callees(0): 

void FUN_005066c4(void)

{
  return;
}



//==== 005066c8  ns=Global  size=0x8
// sig: undefined FUN_005066c8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005066c8(void)

{
  return 0;
}



//==== 005066d0  ns=Global  size=0x8
// sig: undefined FUN_005066d0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005066d0(void)

{
  return 0;
}



//==== 005066d8  ns=Global  size=0x8
// sig: undefined FUN_005066d8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005066d8(void)

{
  return 0;
}



//==== 005066e0  ns=Global  size=0x24
// sig: undefined FUN_005066e0(void)
// callers(1): 00013a20 boot::GameShutDown
// callees(1): 0060c448 FUN_0060c448

void FUN_005066e0(void)

{
  FUN_0060c448();
  return;
}



//==== 00506704  ns=Global  size=0xa4
// sig: undefined FUN_00506704(void)
// callers(0): 
// callees(3): 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup

undefined8 FUN_00506704(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_40 [40];
  undefined4 local_18 [2];
  
  uVar1 = fios::get_default_fs();
  uVar1 = fios::stat_setup(uVar1,local_40,param_1,1,local_18);
  iVar2 = fios::op_wait_result(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = 0;
    *param_2 = local_18[0];
  }
  else {
    uVar1 = 0xfffffffffffffffe;
  }
  return uVar1;
}



//==== 005067a8  ns=Global  size=0xac
// sig: undefined FUN_005067a8(void)
// callers(0): 
// callees(2): 0051cc4c fios::get_default_fs; 0051cf28 FUN_0051cf28

undefined8 FUN_005067a8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_20 [8];
  
  uVar3 = 1;
  if (param_3 < 1) {
    if (-1 < param_3) {
      uVar3 = 0;
    }
  }
  else if (param_3 == 2) {
    uVar3 = 2;
  }
  uVar1 = fios::get_default_fs();
  iVar2 = FUN_0051cf28(uVar1,0,param_1,param_2,uVar3,local_20);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffffffffffd;
  }
  return uVar3;
}



//==== 00506854  ns=Global  size=0xd4
// sig: undefined FUN_00506854(void)
// callers(0): 
// callees(3): 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 0052521c fios::read_req_setup

undefined8
FUN_00506854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_50 [48];
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar1 = fios::get_default_fs();
  uVar1 = fios::read_req_setup(uVar1,local_50,param_1,param_2,param_3,0xffffffffffffffff);
  iVar2 = fios::op_wait_result(uVar1,0);
  if (iVar2 == 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (int)param_3;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffffffffffc;
  }
  return uVar1;
}



//==== 00506928  ns=Global  size=0x88
// sig: undefined FUN_00506928(void)
// callers(0): 
// callees(3): 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 00521b58 fios::filehandle_close_setup

undefined8 FUN_00506928(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_30 [40];
  
  uVar1 = fios::get_default_fs();
  uVar1 = fios::filehandle_close_setup(uVar1,local_30,param_1);
  iVar2 = fios::op_wait_result(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffffffffffb;
  }
  return uVar1;
}



//==== 005069b0  ns=Global  size=0x88
// sig: undefined FUN_005069b0(void)
// callers(0): 
// callees(0): 

longlong FUN_005069b0(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  do {
    do {
      lVar1 = TBLr;
    } while ((int)lVar1 == 0);
  } while ((int)lVar1 == 0);
  dVar2 = ((double)((ulonglong)(param_1 * 1000000) >> 0x20) * 4294967296.0 +
          (double)(param_1 * 1000000 & 0xffffffff)) * DAT_015af420;
  dVar4 = dVar2 - 9.223372036854776e+18;
  dVar3 = dVar4 - 9.223372036854776e+18;
  if (dVar4 < 0.0) {
    dVar3 = dVar2;
  }
  return lVar1 + (longlong)dVar3;
}



//==== 00506a38  ns=Global  size=0x38
// sig: undefined FUN_00506a38(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00506a38(char param_1)

{
  undefined8 uVar1;
  
  if (param_1 < -3) {
    if (param_1 < -7) {
      if (param_1 < -8) goto LAB_00506a68;
    }
    else if (param_1 < -6) goto LAB_00506a68;
    uVar1 = 0x7f;
  }
  else {
LAB_00506a68:
    uVar1 = 0;
  }
  return uVar1;
}



//==== 00506a70  ns=Global  size=0x17c
// sig: undefined FUN_00506a70(void)
// callers(0): 
// callees(2): 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup

undefined8 FUN_00506a70(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong in_r8;
  undefined1 local_60 [40];
  int local_38 [8];
  
  do {
    do {
      uVar1 = TBLr;
    } while ((int)uVar1 == 0);
  } while ((int)uVar1 == 0);
  uVar1 = fios::get_default_fs();
  iVar2 = fios::stat_setup(uVar1,local_60,param_1,1,local_38);
  if ((local_38[0] == 0) || (iVar2 == 0)) {
    uVar1 = 0xfffffffffffffffe;
  }
  else {
    uVar1 = 0;
    *(int *)(&DAT_0159bb1c + (int)(in_r8 << 6)) = iVar2;
    *param_2 = local_38[0];
  }
  return uVar1;
}



//==== 00506c10  ns=Global  size=0x110
// sig: undefined FUN_00506c10(void)
// callers(0): 
// callees(3): 0051b750 FUN_0051b750; 0051be64 fios::op_wait; 0051fd24 FUN_0051fd24

undefined8 FUN_00506c10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined1 local_40 [32];
  
  iVar2 = (int)(param_3 << 6);
  iVar1 = *(int *)(&DAT_0159bb1c + iVar2);
  dVar6 = DAT_015af420 * 3000000.0 - 9.223372036854776e+18;
  dVar5 = dVar6 - 9.223372036854776e+18;
  if (dVar6 < 0.0) {
    dVar5 = DAT_015af420 * 3000000.0;
  }
  uVar3 = FUN_0051b750((longlong)dVar5);
  iVar4 = fios::op_wait(1,local_40,uVar3);
  if (iVar4 < -0x7ffef8fb) {
    if (-0x7ffef8fd < iVar4) {
      return 0;
    }
  }
  else if (iVar4 == 0) {
    *(undefined4 *)(&DAT_0159bb1c + iVar2) = 0;
    if (iVar1 != 0) {
      FUN_0051fd24(*(undefined4 *)(iVar1 + 0x9c),iVar1);
    }
    return 1;
  }
  return 0xfffffffffffffffe;
}



//==== 00506d20  ns=Global  size=0x19c
// sig: undefined FUN_00506d20(void)
// callers(0): 
// callees(2): 0051cc4c fios::get_default_fs; 0052521c fios::read_req_setup

undefined8 FUN_00506d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong in_r10;
  int in_stack_00000074;
  undefined1 local_70 [64];
  
  do {
    do {
      uVar1 = TBLr;
    } while ((int)uVar1 == 0);
  } while ((int)uVar1 == 0);
  uVar1 = fios::get_default_fs();
  iVar2 = fios::read_req_setup(uVar1,local_70,param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    uVar1 = 0xfffffffffffffffc;
  }
  else {
    uVar1 = 0;
    *(int *)(&DAT_0159bb1c + (int)(in_r10 << 6) + in_stack_00000074 * 4) = iVar2;
  }
  return uVar1;
}



//==== 00506ebc  ns=Global  size=0x88
// sig: undefined FUN_00506ebc(void)
// callers(0): 
// callees(3): 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 00521b58 fios::filehandle_close_setup

undefined8 FUN_00506ebc(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_30 [40];
  
  uVar1 = fios::get_default_fs();
  uVar1 = fios::filehandle_close_setup(uVar1,local_30,param_1);
  iVar2 = fios::op_wait_result(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffffffffffb;
  }
  return uVar1;
}



//==== 00506f68  ns=Global  size=0x11c
// sig: undefined FUN_00506f68(void)
// callers(0): 
// callees(3): 0051b750 FUN_0051b750; 0051be64 fios::op_wait; 0051fd24 FUN_0051fd24

undefined8 FUN_00506f68(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined1 local_40 [32];
  
  iVar2 = (int)(param_3 << 6);
  iVar3 = (int)(param_4 << 2);
  dVar7 = DAT_015af420 * 3000000.0 - 9.223372036854776e+18;
  iVar1 = *(int *)(&DAT_0159bb1c + iVar2 + iVar3);
  dVar6 = dVar7 - 9.223372036854776e+18;
  if (dVar7 < 0.0) {
    dVar6 = DAT_015af420 * 3000000.0;
  }
  uVar4 = FUN_0051b750((longlong)dVar6);
  iVar5 = fios::op_wait(1,local_40,uVar4);
  if (iVar5 < -0x7ffef8fb) {
    if (-0x7ffef8fd < iVar5) {
      return 0;
    }
  }
  else if (iVar5 == 0) {
    *(undefined4 *)(&DAT_0159bb1c + iVar2 + iVar3) = 0;
    if (iVar1 != 0) {
      FUN_0051fd24(*(undefined4 *)(iVar1 + 0x9c),iVar1);
    }
    return 1;
  }
  return 0xfffffffffffffffe;
}



//==== 00507084  ns=Global  size=0x8
// sig: undefined FUN_00507084(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00507084(void)

{
  return 0;
}



//==== 0050708c  ns=Global  size=0xa0
// sig: undefined FUN_0050708c(void)
// callers(0): 
// callees(1): 0051fd24 FUN_0051fd24

undefined8 FUN_0050708c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = (int)(param_3 << 6);
  iVar3 = 0;
  piVar4 = (int *)(&DAT_0159bb1c + iVar2);
  do {
    if (iVar2 != -0x159bb1c) {
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        FUN_0051fd24(*(undefined4 *)(iVar1 + 0x9c),iVar1);
      }
      *piVar4 = 0;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x10);
  return 0;
}



//==== 0050712c  ns=Global  size=0x14
// sig: undefined FUN_0050712c(void)
// callers(0): 
// callees(0): 

void FUN_0050712c(void)

{
  DAT_0159bb18 = PTR_DAT_008fa624;
  return;
}



//==== 00507148  ns=Global  size=0x318
// sig: undefined FUN_00507148(void)
// callers(1): 00508198 fios::load_engine_vram_pair
// callees(2): 004fe098 idol::AllocateMemAlign; 005c5ad0 libc::memcpy

void * FUN_00507148(undefined4 *param_1)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  void *pvVar28;
  uint uVar29;
  uint uVar30;
  float *pfVar31;
  
  iVar18 = param_1[5];
  uVar19 = *(uint *)(iVar18 + 0x38);
  param_1[0x1213] = uVar19;
  if (uVar19 == 0) {
    pvVar28 = (void *)0x0;
    param_1[0x1212] = 0;
  }
  else {
    uVar29 = 0;
    pfVar31 = (float *)(iVar18 + *(int *)(iVar18 + 0x34));
    uVar30 = 0xffffffff;
    param_1[0x1212] = pfVar31;
    if (uVar19 != 0) {
      do {
        bVar1 = *(byte *)((int)param_1 + (int)pfVar31[0x14] + 0x2448);
        *(byte *)(pfVar31 + 0x17) = bVar1;
        pfVar20 = (float *)param_1[bVar1 + 0x1112];
        if (bVar1 != uVar30) {
          pfVar20[8] = (float)pfVar31;
          *(undefined2 *)(pfVar20 + 9) = 0;
          uVar30 = (uint)bVar1;
        }
        fVar2 = pfVar31[1];
        fVar3 = pfVar31[5];
        fVar4 = *pfVar31;
        fVar5 = pfVar31[4];
        fVar6 = pfVar31[9];
        fVar7 = pfVar31[2];
        fVar8 = pfVar31[6];
        fVar9 = pfVar31[8];
        fVar10 = pfVar31[10];
        fVar11 = pfVar20[1];
        fVar12 = *pfVar20;
        fVar13 = pfVar20[2];
        fVar21 = fVar7 * fVar7 + fVar4 * fVar4 + fVar2 * fVar2;
        fVar22 = fVar8 * fVar8 + fVar5 * fVar5 + fVar3 * fVar3;
        fVar23 = fVar10 * fVar10 + fVar9 * fVar9 + fVar6 * fVar6;
        fVar14 = pfVar20[3];
        pfVar31[0x1b] = (float)pfVar20;
        fVar26 = 1.0 / SQRT(fVar21);
        fVar25 = 1.0 / SQRT(fVar22);
        fVar15 = pfVar31[0xc];
        fVar16 = pfVar31[0xd];
        fVar27 = 1.0 / SQRT(fVar23);
        fVar17 = pfVar31[0xe];
        uVar29 = uVar29 + 1;
        fVar26 = -(fVar21 * fVar26 * fVar26 - 1.0) * fVar26 * 0.5 + fVar26;
        fVar25 = -(fVar22 * fVar25 * fVar25 - 1.0) * fVar25 * 0.5 + fVar25;
        fVar27 = -(fVar23 * fVar27 * fVar27 - 1.0) * fVar27 * 0.5 + fVar27;
        *(short *)(pfVar20 + 9) = *(short *)(pfVar20 + 9) + 1;
        fVar24 = SQRT(fVar21);
        if (SQRT(fVar21) - SQRT(fVar22) < 0.0) {
          fVar24 = SQRT(fVar22);
        }
        pfVar31[0x10] = fVar9 * fVar13 + fVar4 * fVar12 + fVar5 * fVar11 + fVar15;
        pfVar31[0x11] = fVar6 * fVar13 + fVar2 * fVar12 + fVar3 * fVar11 + fVar16;
        pfVar31[0x12] = fVar10 * fVar13 + fVar7 * fVar12 + fVar8 * fVar11 + fVar17;
        fVar26 = -(fVar21 * fVar26 * fVar26 - 1.0) * fVar26 * 0.5 + fVar26;
        fVar25 = -(fVar22 * fVar25 * fVar25 - 1.0) * fVar25 * 0.5 + fVar25;
        fVar27 = -(fVar23 * fVar27 * fVar27 - 1.0) * fVar27 * 0.5 + fVar27;
        if (fVar24 - SQRT(fVar23) < 0.0) {
          fVar24 = SQRT(fVar23);
        }
        pfVar31[0x13] = fVar14 * fVar24;
        pfVar31[3] = -(fVar21 * fVar26 * fVar26 - 1.0) * fVar26 * 0.5 + fVar26;
        pfVar31[7] = -(fVar22 * fVar25 * fVar25 - 1.0) * fVar25 * 0.5 + fVar25;
        pfVar31[0xb] = -(fVar23 * fVar27 * fVar27 - 1.0) * fVar27 * 0.5 + fVar27;
        pfVar31 = pfVar31 + 0x1c;
      } while (uVar29 < uVar19);
    }
    pvVar28 = (void *)idol::AllocateMemAlign(*param_1,uVar19 * 0x70,0x10);
    param_1[0x121c] = pvVar28;
    pvVar28 = libc::memcpy(pvVar28,(void *)param_1[0x1212],uVar19 * 0x70);
  }
  return pvVar28;
}



//==== 00507460  ns=Global  size=0x188
// sig: undefined FUN_00507460(void)
// callers(1): 00508198 fios::load_engine_vram_pair
// callees(2): 005d0140 libc::memset; 0064f2a4 cell::cellGcmAddressToOffset

void FUN_00507460(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  libc::memset(param_1 + 0x2448,0,0x2000);
  libc::memset(param_1 + 0x4448,0,0x400);
  iVar7 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(iVar7 + 0x30);
  *(int *)(param_1 + 0x2444) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x2440) = 0;
  }
  else {
    uVar8 = 0;
    *(int *)(param_1 + 0x2440) = iVar7 + *(int *)(iVar7 + 0x2c);
    if (iVar6 != 0) {
      iVar6 = 0;
      iVar7 = param_1;
      do {
        iVar3 = *(int *)(param_1 + 0x2440) + iVar6;
        iVar2 = *(int *)(param_1 + 0x14);
        uVar1 = *(ushort *)(iVar3 + 0x30);
        *(int *)(iVar7 + 0x4448) = iVar3;
        *(char *)((uint)uVar1 + param_1 + 0x2448) = (char)uVar8;
        *(short *)(iVar3 + 0x32) = (short)uVar8;
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + iVar2;
        cell::cellGcmAddressToOffset(*(int *)(iVar3 + 0x10) + iVar2,iVar3 + 0x10);
        cell::cellGcmAddressToOffset(*(int *)(iVar3 + 0x14) + *(int *)(param_1 + 0x14),iVar3 + 0x14)
        ;
        cell::cellGcmAddressToOffset(*(int *)(iVar3 + 0x18) + *(int *)(param_1 + 0x14),iVar3 + 0x18)
        ;
        piVar5 = *(int **)(iVar3 + 0x1c);
        uVar4 = (uint)*(ushort *)(iVar3 + 0x28);
        if (*(ushort *)(iVar3 + 0x28) != 0) {
          iVar2 = *(int *)(param_1 + 0x1c);
          do {
            uVar4 = uVar4 - 1;
            *piVar5 = *piVar5 * 0x24 + iVar2;
            piVar5 = piVar5 + 4;
          } while (0 < (int)uVar4);
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 4;
        iVar6 = iVar6 + 0x40;
      } while (uVar8 < *(uint *)(param_1 + 0x2444));
    }
  }
  return;
}



//==== 005075f0  ns=Global  size=0x36c
// sig: undefined FUN_005075f0(void)
// callers(1): 00508198 fios::load_engine_vram_pair
// callees(3): 004fe098 idol::AllocateMemAlign; 005c5ad0 libc::memcpy; 0064f2a4 cell::cellGcmAddressToOffset

void * FUN_005075f0(undefined4 *param_1)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  short sVar15;
  uint uVar16;
  float *pfVar17;
  size_t __n;
  float fVar18;
  int iVar19;
  void *pvVar20;
  ulonglong uVar21;
  float *pfVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  iVar19 = param_1[5];
  uVar16 = *(uint *)(iVar19 + 0x28);
  uVar21 = (ulonglong)uVar16;
  param_1[0x90f] = uVar16;
  if (uVar16 == 0) {
    pvVar20 = (void *)0x0;
    param_1[0x90e] = 0;
  }
  else {
    uVar25 = 0;
    iVar19 = iVar19 + *(int *)(iVar19 + 0x24);
    uVar24 = 0xffffffff;
    param_1[0x90e] = iVar19;
    if (uVar16 != 0) {
      iVar23 = 0;
      dVar33 = 0.5;
      dVar34 = 1.0;
      do {
        pfVar22 = (float *)(iVar19 + iVar23);
        bVar1 = *(byte *)((int)param_1 + (int)pfVar22[0x14] + 0x38);
        *(byte *)(pfVar22 + 0x17) = bVar1;
        pfVar17 = (float *)param_1[bVar1 + 0x80e];
        if (bVar1 != uVar24) {
          pfVar17[8] = (float)pfVar22;
          *(undefined2 *)(pfVar17 + 9) = 0;
          uVar24 = (uint)bVar1;
        }
        fVar2 = pfVar22[1];
        fVar3 = pfVar22[5];
        fVar4 = *pfVar22;
        fVar5 = pfVar22[4];
        fVar6 = pfVar22[9];
        fVar7 = pfVar22[2];
        fVar8 = pfVar22[6];
        fVar9 = pfVar22[8];
        fVar10 = pfVar22[10];
        fVar11 = pfVar17[1];
        fVar12 = *pfVar17;
        fVar13 = pfVar17[2];
        dVar27 = (double)(fVar7 * fVar7 + fVar4 * fVar4 + fVar2 * fVar2);
        dVar28 = (double)(fVar8 * fVar8 + fVar5 * fVar5 + fVar3 * fVar3);
        dVar30 = (double)(fVar10 * fVar10 + fVar9 * fVar9 + fVar6 * fVar6);
        fVar14 = pfVar17[3];
        dVar26 = 1.0 / SQRT(dVar27);
        dVar32 = 1.0 / SQRT(dVar28);
        dVar31 = 1.0 / SQRT(dVar30);
        sVar15 = *(short *)(pfVar17 + 9);
        dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar26) * dVar26 - dVar34
                                                 ) * (double)(float)(dVar26 * dVar33) + dVar26);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar32) * dVar32 - dVar34
                                                 ) * (double)(float)(dVar32 * dVar33) + dVar32);
        dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar34
                                                 ) * (double)(float)(dVar31 * dVar33) + dVar31);
        fVar18 = (float)SQRT(dVar27);
        if ((float)SQRT(dVar27) - (float)SQRT(dVar28) < 0.0) {
          fVar18 = (float)SQRT(dVar28);
        }
        pfVar22[0x10] = fVar9 * fVar13 + fVar4 * fVar12 + fVar5 * fVar11 + pfVar22[0xc];
        pfVar22[0x11] = fVar6 * fVar13 + fVar2 * fVar12 + fVar3 * fVar11 + pfVar22[0xd];
        pfVar22[0x12] = fVar10 * fVar13 + fVar7 * fVar12 + fVar8 * fVar11 + pfVar22[0xe];
        dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar29) * dVar29 - dVar34
                                                 ) * (double)(float)(dVar29 * dVar33) + dVar29);
        dVar32 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar26) * dVar26 - dVar34
                                                 ) * (double)(float)(dVar26 * dVar33) + dVar26);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar31) * dVar31 - dVar34
                                                 ) * (double)(float)(dVar31 * dVar33) + dVar31);
        if (fVar18 - (float)SQRT(dVar30) < 0.0) {
          fVar18 = (float)SQRT(dVar30);
        }
        pfVar22[0x13] = fVar14 * fVar18;
        fVar2 = pfVar22[0x18];
        iVar19 = param_1[5];
        pfVar22[0x1b] = (float)pfVar17;
        pfVar22[3] = (float)(-(double)(float)((double)(float)(dVar27 * dVar29) * dVar29 - dVar34) *
                             (double)(float)(dVar29 * dVar33) + dVar29);
        pfVar22[7] = (float)(-(double)(float)((double)(float)(dVar28 * dVar32) * dVar32 - dVar34) *
                             (double)(float)(dVar32 * dVar33) + dVar32);
        *(short *)(pfVar17 + 9) = sVar15 + 1;
        pfVar22[0xb] = (float)(-(double)(float)((double)(float)(dVar30 * dVar26) * dVar26 - dVar34)
                               * (double)(float)(dVar26 * dVar33) + dVar26);
        cell::cellGcmAddressToOffset((int)fVar2 + iVar19,pfVar22 + 0x18);
        uVar25 = uVar25 + 1;
        uVar21 = (ulonglong)(uint)param_1[0x90f];
        iVar23 = iVar23 + 0x70;
        iVar19 = param_1[0x90e];
      } while ((uVar25 & 0xffffffff) < uVar21);
    }
    __n = (int)(uVar21 << 7) - (int)(uVar21 << 4);
    pvVar20 = (void *)idol::AllocateMemAlign(*param_1,__n,0x10);
    param_1[0x121b] = pvVar20;
    pvVar20 = libc::memcpy(pvVar20,(void *)param_1[0x90e],__n);
  }
  return pvVar20;
}



//==== 0050795c  ns=Global  size=0x210
// sig: undefined FUN_0050795c(void)
// callers(1): 00508198 fios::load_engine_vram_pair
// callees(2): 005d0140 libc::memset; 0064f2a4 cell::cellGcmAddressToOffset

void FUN_0050795c(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  libc::memset(param_1 + 0x38,0,0x2000);
  libc::memset(param_1 + 0x2038,0,0x400);
  iVar8 = *(int *)(param_1 + 0x14);
  iVar7 = *(int *)(iVar8 + 0x20);
  *(int *)(param_1 + 0x34) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar9 = 0;
    *(int *)(param_1 + 0x30) = iVar8 + *(int *)(iVar8 + 0x1c);
    if (iVar7 != 0) {
      iVar7 = 0;
      iVar8 = param_1;
      do {
        iVar6 = *(int *)(param_1 + 0x30) + iVar7;
        iVar3 = *(int *)(param_1 + 0x14);
        uVar2 = *(ushort *)(iVar6 + 0x30);
        *(int *)(iVar8 + 0x2038) = iVar6;
        *(char *)(param_1 + (uint)uVar2 + 0x38) = (char)uVar9;
        *(short *)(iVar6 + 0x32) = (short)uVar9;
        *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + iVar3;
        cell::cellGcmAddressToOffset(*(int *)(iVar6 + 0x10) + iVar3,iVar6 + 0x10);
        cell::cellGcmAddressToOffset(*(int *)(iVar6 + 0x14) + *(int *)(param_1 + 0x14),iVar6 + 0x14)
        ;
        cell::cellGcmAddressToOffset(*(int *)(iVar6 + 0x18) + *(int *)(param_1 + 0x14),iVar6 + 0x18)
        ;
        piVar5 = *(int **)(iVar6 + 0x1c);
        uVar2 = *(ushort *)(iVar6 + 0x28);
        uVar4 = 0;
        if (uVar2 != 0) {
          iVar3 = *(int *)(param_1 + 0x1c);
          do {
            *piVar5 = iVar3 + *piVar5 * 0x24;
            if (piVar5[1] != -1) {
              piVar5[1] = iVar3 + piVar5[1] * 0x24;
            }
            cVar1 = *(char *)((int)piVar5 + 0x15);
            if (cVar1 == '\0') {
              *(undefined1 *)((int)piVar5 + 0x15) = 0;
              *(undefined1 *)(piVar5 + 5) = 0;
            }
            else if (cVar1 == '\x01') {
              *(undefined1 *)((int)piVar5 + 0x15) = 0;
            }
            else if (cVar1 == '\x02') {
              *(undefined1 *)((int)piVar5 + 0x15) = 2;
            }
            else if (cVar1 == '\x03') {
              if (*(char *)(iVar6 + 0x34) == '\0') {
                return;
              }
              *(undefined1 *)((int)piVar5 + 0x15) = 1;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 6;
          } while (uVar4 < uVar2);
        }
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 0x40;
        iVar8 = iVar8 + 4;
      } while (uVar9 < *(uint *)(param_1 + 0x34));
    }
  }
  return;
}



//==== 00507b6c  ns=Global  size=0x28c
// sig: undefined FUN_00507b6c(void)
// callers(1): 00508198 fios::load_engine_vram_pair
// callees(3): 004fe5f4 FUN_004fe5f4; 004fe6ec FUN_004fe6ec; 0064f2a4 cell::cellGcmAddressToOffset

void FUN_00507b6c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  iVar3 = param_1[5];
  if (*(int *)(iVar3 + 0x3c) == 0) {
    param_1[10] = 0;
  }
  else {
    piVar6 = (int *)(iVar3 + *(int *)(iVar3 + 0x3c));
    param_1[10] = piVar6;
    uVar10 = 0;
    iVar8 = 0;
    *piVar6 = iVar3 + *piVar6;
    iVar3 = 0;
    puVar9 = param_1;
    do {
      if (*(int *)((int)piVar6 + iVar3 + 0x38) != 0) {
        cell::cellGcmAddressToOffset
                  (*(int *)((int)piVar6 + iVar3 + 0x38) + param_1[5],(int)piVar6 + iVar3 + 0x38);
        piVar6 = (int *)param_1[10];
      }
      iVar7 = *(int *)((int)piVar6 + iVar3 + 0x18);
      if (iVar7 != 0) {
        cell::cellGcmAddressToOffset(iVar7 + param_1[5],(int)piVar6 + iVar3 + 0x18);
        iVar7 = puVar9[0x1217];
        if (iVar7 == 0) {
          uVar2 = FUN_004fe5f4(*param_1,0x10);
          uVar1 = *param_1;
          puVar9[0x1217] = uVar2;
          FUN_004fe6ec(uVar1,0x40000);
          iVar7 = puVar9[0x1217];
        }
        cell::cellGcmAddressToOffset(iVar7,param_1[10] + iVar3 + 0x48);
        piVar6 = (int *)param_1[10];
      }
      if (*(int *)((int)piVar6 + iVar3 + 8) != 0) {
        cell::cellGcmAddressToOffset
                  (*(int *)((int)piVar6 + iVar3 + 8) + param_1[5],(int)piVar6 + iVar3 + 8);
        piVar6 = (int *)param_1[10];
      }
      iVar7 = *(int *)((int)piVar6 + iVar3 + 0x28);
      if (iVar7 != 0) {
        cell::cellGcmAddressToOffset(iVar7 + param_1[5],(int)piVar6 + iVar3 + 0x28);
        piVar6 = (int *)param_1[10];
      }
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar10 < 4);
    uVar10 = 0;
    iVar3 = 0;
    if (*(short *)((int)piVar6 + 6) != 0) {
      do {
        iVar4 = *piVar6 + iVar8;
        iVar7 = *(int *)(iVar4 + 0x14);
        piVar5 = (int *)(*(int *)(iVar4 + 0x10) + param_1[5]);
        iVar3 = iVar3 + iVar7;
        *(int **)(iVar4 + 0x10) = piVar5;
        if (iVar7 != 0) {
          do {
            iVar7 = iVar7 + -1;
            *piVar5 = param_1[7] + *piVar5 * 0x24;
            piVar5 = piVar5 + 4;
          } while (0 < iVar7);
        }
        uVar10 = uVar10 + 1;
        iVar8 = iVar8 + 0x30;
      } while (uVar10 < *(ushort *)((int)piVar6 + 6));
    }
    param_1[0xb] = iVar3;
  }
  return;
}



//==== 00507df8  ns=Global  size=0x168
// sig: undefined FUN_00507df8(void)
// callers(1): 00508198 fios::load_engine_vram_pair
// callees(2): 004fe098 idol::AllocateMemAlign; 0064f2a4 cell::cellGcmAddressToOffset

void FUN_00507df8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  
  iVar1 = param_1[5];
  if (*(int *)(iVar1 + 0x10) != 0) {
    iVar5 = iVar1 + *(int *)(iVar1 + 0x10);
    param_1[0x1214] = iVar5;
    cell::cellGcmAddressToOffset(*(int *)(iVar5 + 0x14) + iVar1,iVar5 + 0x14);
    cell::cellGcmAddressToOffset
              (*(int *)(param_1[0x1214] + 0x18) + param_1[5],param_1[0x1214] + 0x18);
    iVar1 = param_1[0x1214];
    uVar6 = 0;
    if (*(short *)(iVar1 + 6) != 0) {
      iVar5 = param_1[5];
      iVar2 = param_1[7];
      iVar7 = iVar1;
      do {
        uVar9 = 0;
        piVar8 = (int *)(*(int *)(iVar7 + 0x1c) + iVar5);
        *(int **)(iVar7 + 0x1c) = piVar8;
        piVar10 = piVar8;
        if ((short)*piVar8 != 0) {
          do {
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 + 1;
            iVar3 = *piVar8;
            *piVar10 = *piVar10 * 0x24 + iVar2;
          } while (uVar9 < (ushort)iVar3);
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar6 < *(ushort *)(iVar1 + 6));
    }
    uVar4 = idol::AllocateMemAlign
                      (*param_1,(((longlong)(0x200 - (ulonglong)*(ushort *)(iVar1 + 8)) >> 0x3f &
                                 (ulonglong)*(ushort *)(iVar1 + 8) - 0x200) + 0x200 & 0x7ffffff) <<
                                5,0x20);
    iVar1 = param_1[0x1214];
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    *(undefined2 *)(iVar1 + 8) = 0;
  }
  return;
}



//==== 00507f68  ns=fios  size=0x1d4
// sig: undefined read_file_sync(void)
// callers(1): 00508198 fios::load_engine_vram_pair
// callees(7): 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup; 00521794 fios::read_setup; 00521b58 fios::filehandle_close_setup; 0052521c fios::read_req_setup; 0064f504 cell::cellSysutilCheckCallback

undefined8 fios::read_file_sync(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_60;
  undefined1 local_58 [40];
  int local_30 [4];
  
  cell::cellSysutilCheckCallback();
  uVar2 = get_default_fs();
  uVar3 = stat_setup(uVar2,0,param_2,1,local_30);
  op_wait_result(uVar3,0);
  if (local_30[0] == 0) {
    do {
      cell::cellSysutilCheckCallback(local_30[0]);
      local_30[0] = 100;
      syscall();
    } while( true );
  }
  uVar3 = read_setup(uVar2,0,param_2,&local_60,3);
  op_wait_result(uVar3,0);
  uVar1 = (int)local_60 + 0x1ffffU & 0xfffe0000;
  if (0 < (int)uVar1) {
    iVar4 = 0;
    do {
      uVar3 = read_req_setup(uVar2,local_58,local_30[0],param_1,0x20000,0xffffffffffffffff);
      uVar3 = op_wait_result(uVar3,0);
      if (((int)uVar3 != 0) && ((int)uVar3 != -0x7ffef8f7)) {
        do {
          cell::cellSysutilCheckCallback(uVar3);
          uVar3 = 100;
          syscall();
        } while( true );
      }
      syscall();
      iVar4 = iVar4 + 0x20000;
      param_1 = param_1 + 0x20000;
    } while (iVar4 < (int)uVar1);
  }
  uVar2 = filehandle_close_setup(uVar2,0,local_30[0]);
  uVar2 = op_wait_result(uVar2,0);
  if ((int)uVar2 != 0) {
    do {
      cell::cellSysutilCheckCallback(uVar2);
      uVar2 = 100;
      syscall();
    } while( true );
  }
  return local_60;
}



//==== 0050813c  ns=Global  size=0x5c
// sig: undefined FUN_0050813c(void)
// callers(0): 
// callees(2): 004fe61c FUN_004fe61c; 005d0140 libc::memset

void FUN_0050813c(undefined4 *param_1)

{
  FUN_004fe61c(*param_1,param_1[2]);
  FUN_004fe61c(param_1[1],param_1[3]);
  libc::memset(param_1 + 4,0,0x4864);
  return;
}



//==== 00508198  ns=fios  size=0x264
// sig: undefined load_engine_vram_pair(void)
// callers(2): 00011b74 boot::Load_Front_End; 005083fc FUN_005083fc
// callees(14): 004fe098 idol::AllocateMemAlign; 004fe5f4 FUN_004fe5f4; 004fe61c FUN_004fe61c; 004fe6ec FUN_004fe6ec; 004ffc9c print_tty2; 00503e00 fios::LoadAssetFromFile; 00507148 FUN_00507148; 00507460 FUN_00507460; 005075f0 FUN_005075f0; 0050795c FUN_0050795c; 00507b6c FUN_00507b6c; 00507df8 FUN_00507df8; 00507f68 fios::read_file_sync; 005d0140 libc::memset
// strings: 0065faf0: 'Loading file %s\n' | 0065fb08: 'Common/Textures/randomNormals.ps3' | 0065fb30: 'Common/Textures/randomNormalsVram.ps3'

void fios::load_engine_vram_pair(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  
  iVar3 = g_viewMtxPtr;
  FUN_004fe61c(*param_1,param_1[2]);
  FUN_004fe61c(param_1[1],param_1[3]);
  libc::memset(param_1 + 4,0,0x4864);
  print_tty2("Loading file %s\n",param_2);
  iVar5 = FUN_004fe5f4(*param_1,0x80);
  uVar6 = read_file_sync(iVar5,param_2);
  FUN_004fe6ec(*param_1,uVar6);
  print_tty2("Loading file %s\n",param_3);
  uVar4 = FUN_004fe5f4(param_1[1],0x80);
  uVar6 = read_file_sync(uVar4,param_3);
  FUN_004fe6ec(param_1[1],uVar6);
  iVar1 = *(int *)(iVar3 + 0x4ac);
  uVar8 = 0;
  param_1[5] = iVar5;
  piVar7 = (int *)(*(int *)(iVar5 + 0x54) + iVar5);
  param_1[7] = piVar7;
  if (*(int *)(iVar5 + 0x58) != 0) {
    iVar10 = 0;
    piVar9 = piVar7;
    do {
      uVar8 = uVar8 + 1;
      piVar2 = (int *)((int)piVar7 + iVar10);
      iVar10 = iVar10 + 0x24;
      *piVar9 = *piVar2 + ((int)uVar4 - iVar1);
      piVar9 = piVar9 + 9;
    } while (uVar8 < *(uint *)(iVar5 + 0x58));
  }
  uVar4 = idol::AllocateMemAlign(*param_1,0x24,0x10);
  param_1[8] = (int)uVar4;
  LoadAssetFromFile("Common/Textures/randomNormals.ps3",uVar4,0xffffffffffffffff);
  uVar4 = FUN_004fe5f4(param_1[1],0x80);
  uVar6 = LoadAssetFromFile("Common/Textures/randomNormalsVram.ps3",uVar4,0xffffffffffffffff);
  FUN_004fe6ec(param_1[1],uVar6);
  piVar7 = (int *)param_1[8];
  *piVar7 = (int)uVar4 - *(int *)(iVar3 + 0x4ac);
  *(int **)(DAT_00902e9c + 0x228c) = piVar7;
  iVar1 = param_1[5];
  param_1[6] = *(int *)(iVar1 + 100) + iVar5;
  param_1[9] = *(int *)(iVar1 + 0x5c) + iVar5;
  param_1[0x1215] = *(int *)(iVar1 + 0x68) + iVar5;
  param_1[0x1216] = *(int *)(iVar1 + 0x70) + iVar5;
  FUN_00507df8(param_1);
  FUN_00507b6c(param_1);
  FUN_0050795c(param_1);
  FUN_005075f0(param_1);
  FUN_00507460(param_1);
  FUN_00507148(param_1);
  return;
}



//==== 005083fc  ns=Global  size=0xbc
// sig: undefined FUN_005083fc(void)
// callers(0): 
// callees(5): 004fe5ec FUN_004fe5ec; 00508198 fios::load_engine_vram_pair; 005cc8d8 libc::strcpy; 006505c4 sys::sys_ppu_thread_get_id; 00650744 sys::sys_ppu_thread_exit

void FUN_005083fc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 local_230;
  char acStack_228 [256];
  char acStack_128 [264];
  
  puVar1 = (undefined4 *)FUN_004fe5ec(*param_1);
  libc::strcpy(acStack_228,(char *)*puVar1);
  libc::strcpy(acStack_128,(char *)puVar1[1]);
  puVar1 = (undefined4 *)puVar1[2];
  fios::load_engine_vram_pair(param_1,acStack_228,acStack_128);
  (*(code *)*puVar1)();
  sys::sys_ppu_thread_get_id(&local_230);
  sys::sys_ppu_thread_exit(local_230);
  return;
}



//==== 005084b8  ns=Global  size=0x4
// sig: undefined FUN_005084b8(void)
// callers(1): 0007b0f4 SECTION_HEADER_HELP
// callees(0): 

void FUN_005084b8(void)

{
  return;
}



//==== 005084bc  ns=Global  size=0x4
// sig: undefined FUN_005084bc(void)
// callers(0): 
// callees(0): 

void FUN_005084bc(void)

{
  return;
}



//==== 005084c0  ns=Global  size=0x5c
// sig: undefined FUN_005084c0(void)
// callers(1): 0007b0c4 help::???_FreeTexBase
// callees(2): 004fe61c FUN_004fe61c; 005d0140 libc::memset

void FUN_005084c0(undefined4 *param_1)

{
  FUN_004fe61c(*param_1,param_1[2]);
  FUN_004fe61c(param_1[1],param_1[3]);
  libc::memset(param_1 + 4,0,0x4864);
  return;
}



//==== 0050851c  ns=Global  size=0x5c
// sig: undefined FUN_0050851c(void)
// callers(0): 
// callees(2): 004fe61c FUN_004fe61c; 005d0140 libc::memset

void FUN_0050851c(undefined4 *param_1)

{
  FUN_004fe61c(*param_1,param_1[2]);
  FUN_004fe61c(param_1[1],param_1[3]);
  libc::memset(param_1 + 4,0,0x4864);
  return;
}



//==== 00508578  ns=Global  size=0x54
// sig: undefined FUN_00508578(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(1): 004fe5ec FUN_004fe5ec

void FUN_00508578(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = (int)param_2;
  param_1[1] = param_3;
  uVar1 = FUN_004fe5ec(param_2);
  param_1[2] = uVar1;
  uVar1 = FUN_004fe5ec(param_1[1]);
  param_1[3] = uVar1;
  return;
}



//==== 005085cc  ns=fios  size=0xd8
// sig: undefined LoadAssetAsync(void)
// callers(1): 000def78 loaders::LoadLevelFiles
// callees(4): 004fe5ec FUN_004fe5ec; 005c8510 libc::strlen; 005cc8d8 libc::strcpy; 00650524 sys::sys_ppu_thread_create
// strings: 0065fb58: 'LoadAssetAsync'

void fios::LoadAssetAsync(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  char *__dest;
  undefined4 *puVar1;
  size_t sVar2;
  undefined1 auStack_30 [8];
  
  puVar1 = (undefined4 *)FUN_004fe5ec(*param_1);
  puVar1[1] = 0;
  *puVar1 = puVar1 + 3;
  puVar1[2] = param_4;
  libc::strcpy((char *)(puVar1 + 3),param_2);
  sVar2 = libc::strlen(param_2);
  __dest = (char *)((int)puVar1 + sVar2 + 0xd);
  puVar1[1] = __dest;
  libc::strcpy(__dest,param_3);
  sys::sys_ppu_thread_create(auStack_30,&PTR_FUN_007121c0,param_1,1000,0x100000,0,"LoadAssetAsync");
  return;
}



//==== 005086b0  ns=Global  size=0x14
// sig: undefined FUN_005086b0(void)
// callers(0): 
// callees(0): 

void FUN_005086b0(void)

{
  DAT_00903000 = DAT_00903000 + 1;
  return;
}



//==== 00508738  ns=Global  size=0x448
// sig: undefined FUN_00508738(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(1): 004fe098 idol::AllocateMemAlign

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00508738(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint uVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  char cVar14;
  longlong lVar15;
  uint *puVar16;
  float *pfVar17;
  undefined4 uVar18;
  int iVar19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar20;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  uint uVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar22;
  ulonglong unaff_r30;
  longlong lVar23;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar29;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar36;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auVar37 [16];
  undefined4 uVar41;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xf0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = ZEXT48(&stack0x00000000);
  puVar4[0x20] = in_LR;
  puVar4[0x1c] = unaff_r30;
  puVar4[0x16] = unaff_r24;
  puVar4[0x14] = unaff_r22;
  uVar2 = *(uint *)(param_1 + 0x484c);
  puVar4[0x1d] = unaff_r31;
  puVar4[0x15] = unaff_r23;
  iVar13 = g_viewMtxPtr;
  uVar18 = FrameHeap;
  uVar20 = (ulonglong)*(uint *)(param_1 + 0x4848);
  puVar4[0x1b] = unaff_r29;
  puVar4[0x1a] = unaff_r28;
  puVar4[0x19] = unaff_r27;
  puVar4[0x18] = unaff_r26;
  puVar4[0x17] = unaff_r25;
  puVar4[0x13] = unaff_r21;
  puVar4[0x12] = unaff_r20;
  lVar15 = idol::AllocateMemAlign(uVar18,uVar2 * 0x50,0x10);
  puVar16 = (uint *)idol::AllocateMemAlign(FrameHeap,uVar2 << 2,0x10);
  param_2[1] = (int)lVar15;
  *param_2 = puVar16;
  cVar14 = DAT_0159c360;
  param_2[2] = 0;
  auVar51 = *(undefined1 (*) [16])(iVar13 + 0x20U & 0xfffffff0);
  if ((cVar14 == '\0') && (uVar2 != 0)) {
    uVar21 = 0;
    lVar22 = uVar20 + 0x20;
    lVar23 = lVar15 + 0x20;
    do {
      if ((((int)DAT_00903000 < 0) || (uVar21 == DAT_00903000)) &&
         (uVar5 = (uint)uVar20, (*(byte *)(uVar5 + 0x5f) & 1) == 0)) {
        iVar19 = 0;
        pfVar17 = (float *)&DAT_00a245a8;
        do {
          if (pfVar17[1] * *(float *)(uVar5 + 0x44) +
              pfVar17[2] * *(float *)(uVar5 + 0x48) +
              *pfVar17 * *(float *)(uVar5 + 0x40) + pfVar17[3] + *(float *)(uVar5 + 0x4c) < 0.0)
          goto LAB_00508b24;
          iVar19 = iVar19 + 1;
          pfVar17 = pfVar17 + 4;
        } while (iVar19 < 5);
        fVar6 = *(float *)(uVar5 + 0x54) + 8.0 + *(float *)(uVar5 + 0x4c);
        fVar10 = *(float *)(uVar5 + 0x40) - DAT_00a24608;
        fVar11 = *(float *)(uVar5 + 0x44) - DAT_00a2460c;
        fVar12 = *(float *)(uVar5 + 0x48) - DAT_00a24610;
        if (fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11 <= fVar6 * fVar6) {
          puVar7 = (undefined4 *)(uVar5 & 0xfffffff0);
          uVar28 = puVar7[2];
          uVar27 = puVar7[1];
          uVar18 = *puVar7;
          uVar3 = *(uint *)(uVar5 + 0x6c);
          puVar8 = (undefined4 *)(uVar5 + 0x10 & 0xfffffff0);
          uVar35 = puVar8[3];
          uVar34 = puVar8[2];
          uVar33 = puVar8[1];
          uVar29 = *puVar8;
          puVar8 = (undefined4 *)((uint)lVar22 & 0xfffffff0);
          uVar40 = puVar8[3];
          uVar39 = puVar8[2];
          uVar38 = puVar8[1];
          uVar36 = *puVar8;
          puVar8 = (undefined4 *)(uVar5 + 0x30 & 0xfffffff0);
          uVar46 = puVar8[3];
          uVar45 = puVar8[2];
          uVar44 = puVar8[1];
          uVar41 = *puVar8;
          uVar9 = (uint)lVar15;
          puVar8 = (undefined4 *)(uVar9 & 0xfffffff0);
          puVar8[3] = puVar7[3];
          puVar8[2] = uVar28;
          puVar8[1] = uVar27;
          *puVar8 = uVar18;
          puVar7 = (undefined4 *)(uVar9 + 0x10 & 0xfffffff0);
          puVar7[3] = uVar35;
          puVar7[2] = uVar34;
          puVar7[1] = uVar33;
          *puVar7 = uVar29;
          puVar7 = (undefined4 *)((uint)lVar23 & 0xfffffff0);
          puVar7[3] = uVar40;
          puVar7[2] = uVar39;
          puVar7[1] = uVar38;
          *puVar7 = uVar36;
          puVar7 = (undefined4 *)(uVar9 + 0x30 & 0xfffffff0);
          puVar7[3] = uVar46;
          puVar7[2] = uVar45;
          puVar7[1] = uVar44;
          *puVar7 = uVar41;
          *(undefined2 *)(uVar9 + 0x4e) = *(undefined2 *)(uVar5 + 0x68);
          *(undefined2 *)(uVar9 + 0x4c) = *(undefined2 *)(uVar5 + 0x6a);
          uVar18 = idol::AllocateMemAlign(FrameHeap,(ulonglong)*(ushort *)(uVar3 + 0x26) << 2,0x40);
          *(undefined4 *)(uVar9 + 0x44) = uVar18;
          *(undefined4 *)(uVar9 + 0x48) = *(undefined4 *)(uVar5 + 0x60);
          *(int *)(uVar9 + 0x40) = *(int *)(iVar13 + 0x4a8) + *(int *)(uVar3 + 0x10);
          auVar24 = loadVectorLeftIndexed(0x30,uVar20);
          auVar30 = loadVectorRightIndexed(0x40,uVar20);
          auVar37 = loadVectorLeftIndexed(0x34,uVar20);
          auVar42 = loadVectorRightIndexed(0x44,uVar20);
          auVar31 = loadVectorLeftIndexed(0x38,uVar20);
          auVar47 = loadVectorRightIndexed(0x48,uVar20);
          auVar43 = loadVectorLeftIndexed(0x54,uVar20);
          auVar48 = loadVectorRightIndexed(100,uVar20);
          auVar26 = (auVar31 | auVar47) >> 0x60 & (undefined1  [16])0xffffffff;
          auVar25 = (auVar37 | auVar42) >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = (auVar24 | auVar30) >> 0x60 & (undefined1  [16])0xffffffff;
          auVar49 = loadVectorLeftIndexed(0x26,(ulonglong)uVar3);
          auVar50 = *(undefined1 (*) [16])(puVar4 + 0xe);
          uVar18 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x78,
                              lVar1);
          *(undefined4 *)(puVar4 + 0xf) = uVar18;
          uVar18 = storeVectorElementWordIndexed
                             (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x74,
                              lVar1);
          *(undefined4 *)((int)puVar4 + 0x74) = uVar18;
          uVar18 = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x70,
                              lVar1);
          *(undefined4 *)(puVar4 + 0xe) = uVar18;
          auVar25 = vectorPermute(auVar24 | auVar30,auVar37 | auVar42,_DAT_005086e0);
          auVar32 = vectorPermute(auVar31 | auVar47,auVar50,_DAT_005086e0);
          auVar26 = ZEXT416(0);
          auVar37 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = vectorPermute(auVar25,auVar32,_DAT_005086f0);
          auVar26 = vectorSubtractFloatingPoint(auVar26,auVar51);
          auVar25 = loadVectorLeftIndexed(0x50,0x5086d0);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar26,auVar26,auVar37);
          auVar30 = vectorPermute(auVar26,auVar26,_DAT_00508700);
          auVar24 = vectorPermute(auVar26,auVar26,_DAT_00508710);
          auVar26 = loadVectorLeftIndexed(0x54,0x5086d0);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar31 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar32 = (auVar43 | auVar48) >> 0x60 & (undefined1  [16])0xffffffff;
          auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar30,auVar42);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar24,auVar24,auVar26);
          auVar26 = ZEXT416(0xfffffff0);
          auVar24 = vectorShiftRightWord
                              (auVar49,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60
                              );
          auVar26 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar42);
          auVar47 = vectorCompareEqualToFloatingPoint(auVar42,auVar37);
          auVar49 = vectorMultiplyAddFloatingPoint(auVar26,auVar42,auVar37);
          auVar50 = vectorCompareEqualToFloatingPoint(auVar26,auVar37);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60
                               ,auVar37);
          auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar49,auVar31);
          auVar26 = loadVectorLeftIndexed(0x58,0x5086d0);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = vectorMultiplyAddFloatingPoint(auVar37,auVar30,auVar49);
          auVar26 = vectorConditionalSelect(auVar26,auVar42,auVar47 | auVar50);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          vectorCompareGreaterThanFloatingPoint
                    (auVar26,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
          if (!(bool)(in_cr6 >> 1 & 1)) {
            auVar37 = vectorSubtractFloatingPoint(auVar26,auVar43 | auVar48);
            auVar26 = ZEXT416(0);
            auVar32 = loadVectorLeftIndexed(0x5c,0x5086d0);
            auVar30 = loadVectorLeftIndexed(0x60,0x5086d0);
            auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar37 = vectorNegativeMultiplySubtractFloatingPoint
                                (auVar37,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60,auVar31);
            auVar32 = ZEXT416(0xffffffff);
            auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar42 = vectorShiftLeftIntegerWord(auVar32,auVar32);
            auVar26 = vectorCompareGreaterThanFloatingPoint
                                (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                                 auVar37);
            auVar26 = vectorLogicalAndWithComplement(auVar37,auVar26);
            auVar32 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar31);
            auVar26 = vectorConditionalSelect(auVar26,auVar31,auVar32);
            auVar26 = vectorMultiplyAddFloatingPoint
                                (auVar26,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60,auVar42);
            auVar26 = vectorConvertToUnsignedFixedPointWordSaturate(auVar26,0);
            auVar25 = vectorLogicalAnd(auVar26,auVar25);
          }
          auVar26 = ZEXT416(0xfffffff0);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = vectorRotateLeftIntegerWord
                              (auVar24,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60
                              );
          lVar23 = lVar23 + 0x50;
          auVar26 = loadVectorLeftIndexed(100,0x5086d0);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar26 = vectorConditionalSelect
                              (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar32
                               ,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar18 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x3c,
                              lVar15);
          *(undefined4 *)(uVar9 + 0x3c & 0xfffffffc) = uVar18;
          *puVar16 = uVar5;
          lVar15 = lVar15 + 0x50;
          puVar16 = puVar16 + 1;
          param_2[2] = param_2[2] + 1;
        }
      }
LAB_00508b24:
      uVar21 = uVar21 + 1;
      lVar22 = lVar22 + 0x70;
      uVar20 = uVar20 + 0x70;
    } while (uVar21 < uVar2);
  }
  return;
}



//==== 00508c10  ns=shrubfunc  size=0x1138
// sig: undefined DrawShrub(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(11): 004d5fe4 idol_draw::DrawDepth; 004d676c FUN_004d676c; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004eda68 idol_draw::Insert_WaitCmd_Marker; 00502a64 fastfunc::FastVecSub; 00502ea8 idol_draw::PackCmd; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass; 005e8b5c FUN_005e8b5c; 0060436c FUN_0060436c
// strings: 0065fb68: 'Shrub'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shrubfunc::DrawShrub(int param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  RsxCmd *pRVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  RenderingStep *pRVar12;
  RenderingStep *pRVar13;
  char cVar14;
  undefined8 uVar15;
  longlong lVar16;
  RsxCmd *pRVar17;
  RsxCmd *pRVar19;
  ulonglong uVar18;
  RsxCmd RVar20;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  int iVar21;
  ulonglong unaff_r16;
  int iVar22;
  ulonglong unaff_r17;
  int iVar23;
  ulonglong unaff_r18;
  uint uVar24;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  RenderingStep *pRVar25;
  ulonglong unaff_r27;
  RenderingStep *pRVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar27;
  ulonglong unaff_r30;
  ulonglong uVar28;
  uint uVar29;
  ulonglong unaff_r31;
  undefined4 *puVar30;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
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
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x210;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar18;
  puVar7[0x44] = in_LR;
  puVar7[0x41] = unaff_r31;
  cVar14 = DAT_0159c361;
  puVar7[0x2d] = param_2;
  puVar7[0x40] = unaff_r30;
  puVar7[0x3f] = unaff_r29;
  puVar7[0x3e] = unaff_r28;
  puVar7[0x3d] = unaff_r27;
  puVar7[0x3c] = unaff_r26;
  puVar7[0x3b] = unaff_r25;
  puVar7[0x3a] = unaff_r24;
  puVar7[0x39] = unaff_r23;
  puVar7[0x38] = unaff_r22;
  puVar7[0x37] = unaff_r21;
  puVar7[0x36] = unaff_r20;
  puVar7[0x35] = unaff_r19;
  puVar7[0x34] = unaff_r18;
  puVar7[0x33] = unaff_r17;
  puVar7[0x32] = unaff_r16;
  puVar7[0x31] = unaff_r15;
  puVar7[0x30] = unaff_r14;
  if ((cVar14 == '\0') && (uVar27 = puVar7[0x2d], *(int *)((int)uVar27 + 8) != 0)) {
    idol_draw::RsxCmd_DebugStr_Marker(M_Pass,"Shrub");
    idol_draw::RsxCmd_DebugStr_Marker(M_Depth,"Shrub");
    idol_draw::RsxCmd_DebugStr_Marker(DL_Pass,"Shrub");
    idol_draw::RsxCmd_DebugStr_Marker(DL_DepthPass,"Shrub");
    pRVar12 = M_Depth;
    puVar7[0x2b] = (ulonglong)g_viewMtxPtr;
    idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,pRVar12,2);
    pRVar12 = M_Pass;
    uVar15 = idol_draw::PackCmd(0,1,0,1,0x80);
    idol_draw::DrawDepth(pRVar12,uVar15);
    pRVar12 = DL_Pass;
    uVar15 = idol_draw::PackCmd(0,1,0,1,0x80);
    idol_draw::DrawDepth(pRVar12,uVar15);
    pRVar12 = M_Depth;
    *M_Depth->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar12->command[1] = 0x206;
    pRVar12->command[2] = 0xbe;
    pRVar12->command = pRVar12->command + 3;
    pRVar12 = M_Depth;
    *M_Depth->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 1;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    *M_Pass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar12->command[1] = 0x206;
    pRVar12->command[2] = 1;
    pRVar12->command = pRVar12->command + 3;
    pRVar12 = M_Pass;
    lVar31 = 2;
    *M_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 1;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar12->command[1] = 0x206;
    pRVar12->command[2] = 1;
    pRVar12->command = pRVar12->command + 3;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 1;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar12->command[1] = 0x206;
    pRVar12->command[2] = 1;
    pRVar12->command = pRVar12->command + 3;
    pRVar12 = DL_Pass;
    *DL_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 1;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    pRVar17 = (RsxCmd *)(*(int *)(param_1 + 0x18) + 0x10);
    *M_Pass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar19 = pRVar12->command;
    puVar7[0x2a] = 4;
    puVar7[0x29] = 2;
    pRVar19[1] = 0x14;
    pRVar19 = pRVar12->command + 2;
    pRVar12->command = pRVar19;
    do {
      *pRVar19 = *pRVar17;
      pRVar19 = pRVar12->command;
      pRVar12->command = pRVar19 + 1;
      pRVar8 = pRVar17 + 1;
      pRVar17 = pRVar17 + 2;
      pRVar19[1] = *pRVar8;
      pRVar19 = pRVar12->command + 1;
      pRVar12->command = pRVar19;
      pRVar13 = DL_Pass;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    uVar28 = puVar7[0x29];
    pRVar17 = (RsxCmd *)(*(int *)(param_1 + 0x18) + 0x10);
    *DL_Pass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar13->command[1] = 0x14;
    pRVar19 = pRVar13->command + 2;
    pRVar13->command = pRVar19;
    uVar32 = uVar28;
    do {
      *pRVar19 = *pRVar17;
      pRVar19 = pRVar13->command;
      pRVar13->command = pRVar19 + 1;
      pRVar8 = pRVar17 + 1;
      pRVar17 = pRVar17 + 2;
      pRVar19[1] = *pRVar8;
      pRVar19 = pRVar13->command + 1;
      pRVar13->command = pRVar19;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
    uVar32 = puVar7[0x2b];
    idol_draw::BindVertexProgram(uVar32,M_Pass,8);
    idol_draw::BindFragmentProgram(uVar32,M_Pass,6);
    idol_draw::BindVertexProgram(uVar32,DL_Pass,8);
    idol_draw::BindFragmentProgram(uVar32,DL_Pass,6);
    puVar7[0x2c] = (ulonglong)*(uint *)((int)uVar27 + 8);
    *(undefined4 *)(puVar7 + 0x28) = 0xffffffff;
    *(undefined4 *)((int)puVar7 + 0x144) = 0xffffffff;
    pRVar12 = M_Pass;
    *M_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = 0x1832;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    *M_Pass->command = 0x41744;
    pRVar12->command[1] = 0x822;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = 0x1832;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = 0x41744;
    pRVar12->command[1] = 0x822;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = 0x1832;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = 0x41744;
    pRVar12->command[1] = 0x822;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = 0x1832;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = 0x41744;
    pRVar12->command[1] = 0x822;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    if (DAT_0159c362 == '\0') {
      *M_Pass->command = 0x4174c;
      pRVar12->command[1] = 0x444;
      pRVar12->command = pRVar12->command + 2;
      pRVar12 = M_Depth;
      *M_Depth->command = 0x4174c;
      pRVar12->command[1] = 0x444;
      pRVar12->command = pRVar12->command + 2;
      pRVar12 = DL_Pass;
      *DL_Pass->command = 0x4174c;
      pRVar12->command[1] = 0x444;
      pRVar12->command = pRVar12->command + 2;
      pRVar12 = DL_DepthPass;
      *DL_DepthPass->command = 0x4174c;
      pRVar12->command[1] = 0x444;
      pRVar12->command = pRVar12->command + 2;
    }
    else {
      *M_Pass->command = 0x4174c;
      RVar20 = (RsxCmd)uVar28;
      pRVar12->command[1] = RVar20;
      pRVar12->command = pRVar12->command + 2;
      pRVar12 = M_Depth;
      *M_Depth->command = 0x4174c;
      pRVar12->command[1] = RVar20;
      pRVar12->command = pRVar12->command + 2;
    }
    uVar27 = 0;
    if ((int)puVar7[0x2c] != 0) {
      iVar22 = 0;
      iVar21 = 0;
      do {
        auVar34 = ZEXT416(0xfffffff8);
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        uVar24 = ((int *)puVar7[0x2d])[1] + iVar21;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        bVar2 = *(byte *)(uVar24 + 0x3f);
        puVar7[0x2e] = (ulonglong)bVar2;
        pRVar13 = DL_Pass;
        pRVar12 = DL_DepthPass;
        auVar35 = loadVectorLeftIndexed(0x3f,(ulonglong)uVar24);
        auVar34 = vectorShiftRightWord
                            (auVar35,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
        lVar31 = 0;
        uVar29 = *(uint *)(*(int *)puVar7[0x2d] + iVar22);
        uVar32 = (ulonglong)uVar29;
        auVar35 = vectorConvertFromUnsignedFixedPointWord(auVar34,0);
        iVar3 = *(int *)(uVar29 + 0x6c);
        auVar34 = loadVectorLeftIndexed(in_LR,0x508b80);
        auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar36);
        iVar23 = 0xbe;
        pRVar26 = M_Pass;
        pRVar25 = M_Depth;
        if (bVar2 != 0xff) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(4,0x508b80);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          lVar31 = 1;
          auVar34 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
          puVar7[0x2e] = (longlong)(int)((float)(longlong)puVar7[0x2e] * 0.003921569 * 190.0);
          iVar4 = *(int *)((int)puVar7 + 0x174);
          iVar23 = 0xbe;
          pRVar26 = pRVar13;
          pRVar25 = pRVar12;
          if (iVar4 != 0xbe) {
            auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            *pRVar12->command = NV4097_SET_ALPHA_FUNC_x2;
            lVar31 = 1;
            pRVar12->command[1] = 0x206;
            uVar6 = storeVectorElementWordIndexed
                              (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,8,
                               ZEXT48(pRVar12->command));
            *(undefined4 *)((uint)(pRVar12->command + 2) & 0xfffffffc) = uVar6;
            pRVar12->command = pRVar12->command + 3;
            iVar23 = iVar4;
          }
        }
        uVar9 = (uint)(lVar31 << 2) | (uint)puVar7;
        if (*(int *)(uVar29 + 0x50) != *(int *)(uVar9 + 0x140)) {
          RVar20 = *(RsxCmd *)(iVar3 + 0x10);
          *pRVar26->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar26->command[1] = RVar20 | 0x80000000;
          pRVar19 = pRVar26->command;
          pRVar26->command = pRVar19 + 2;
          RVar20 = *(RsxCmd *)(iVar3 + 0x14);
          pRVar19[2] = 0x41684;
          pRVar26->command[1] = RVar20 | 0x80000000;
          pRVar19 = pRVar26->command;
          pRVar26->command = pRVar19 + 2;
          RVar20 = *(RsxCmd *)(iVar3 + 0x18);
          pRVar19[2] = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar26->command[1] = RVar20;
          pRVar26->command[2] = 0x11;
          pRVar26->command = pRVar26->command + 3;
          RVar20 = *(RsxCmd *)(iVar3 + 0x10);
          *pRVar25->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar25->command[1] = RVar20 | 0x80000000;
          pRVar19 = pRVar25->command;
          pRVar25->command = pRVar19 + 2;
          RVar20 = *(RsxCmd *)(iVar3 + 0x14);
          pRVar19[2] = 0x41684;
          pRVar25->command[1] = RVar20 | 0x80000000;
          pRVar19 = pRVar25->command;
          pRVar25->command = pRVar19 + 2;
          RVar20 = *(RsxCmd *)(iVar3 + 0x18);
          pRVar19[2] = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar25->command[1] = RVar20;
          pRVar25->command[2] = 0x11;
          pRVar25->command = pRVar25->command + 3;
          *(undefined4 *)(uVar9 + 0x140) = *(undefined4 *)(uVar29 + 0x50);
        }
        auVar34 = *(undefined1 (*) [16])(uVar29 & 0xfffffff0);
        auVar36 = *(undefined1 (*) [16])(uVar29 + 0x10 & 0xfffffff0);
        auVar35 = *(undefined1 (*) [16])(uVar29 + 0x20 & 0xfffffff0);
        auVar37 = *(undefined1 (*) [16])(uVar29 + 0x30 & 0xfffffff0);
        if ((*(ushort *)(iVar3 + 0x2a) & 6) != 0) {
          *(undefined1 (*) [16])(puVar7 + 0x16) = auVar37;
          *(undefined1 (*) [16])(puVar7 + 0x14) = auVar35;
          *(undefined1 (*) [16])(puVar7 + 0x12) = auVar36;
          *(undefined1 (*) [16])(puVar7 + 0x10) = auVar34;
          fastfunc::FastVecSub(uVar18 - 0x1a0,uVar32 + 0x40,&DAT_0159c340);
          auVar11 = _DAT_00508bf0;
          auVar10 = _DAT_00508be0;
          auVar41 = _DAT_00508bd0;
          auVar34 = ZEXT416(0xffffffff);
          auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
          auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar35 = loadVectorLeftIndexed(0x74,lVar1);
          auVar36 = loadVectorLeftIndexed(0x70,lVar1);
          auVar34 = vectorMultiplyAddFloatingPoint(auVar35,auVar35,auVar34);
          auVar44 = loadVectorLeftIndexed(0x78,lVar1);
          auVar35 = loadVectorLeftIndexed(0x14,0x902fe0);
          auVar37 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar46 = loadVectorLeftIndexed(0x18,0x902fe0);
          auVar34 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar34);
          auVar42 = loadVectorLeftIndexed(0x10,0x902fe0);
          auVar39 = loadVectorLeftIndexed(puVar7[0x2a],0x902fe0);
          auVar40 = loadVectorLeftIndexed(8,0x902fe0);
          auVar43 = loadVectorLeftIndexed(0x2fe0,0x900000);
          auVar45 = vectorMultiplyAddFloatingPoint(auVar44,auVar44,auVar34);
          auVar34 = *(undefined1 (*) [16])(puVar7 + 0x10);
          auVar47 = loadVectorLeftIndexed(0xc,0x902fe0);
          auVar35 = *(undefined1 (*) [16])(puVar7 + 0x14);
          auVar36 = *(undefined1 (*) [16])(puVar7 + 0x12);
          auVar44 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                     auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60);
          auVar37 = *(undefined1 (*) [16])(puVar7 + 0x16);
          if ((bool)(in_cr6 >> 1 & 1)) {
            auVar34 = ZEXT416(0xfffffff8);
            auVar37 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar48 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            uVar28 = (ulonglong)DAT_0159c330 + uVar32 * 0x43;
            auVar34 = ZEXT416(0xffffffff);
            auVar49 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar50 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = loadVectorLeftIndexed(0x902ee0,uVar28 & 0xff);
            auVar36 = loadVectorLeftIndexed(0x902ee0,(uVar28 << 0x20) >> 0x21 & 0xff);
            auVar34 = vectorShiftRightAlgebraicWord(auVar34,auVar37);
            auVar44 = vectorShiftRightAlgebraicWord(auVar36,auVar37);
            auVar36 = vectorConvertFromSignedFixedPointWord(auVar34,0);
            auVar44 = vectorConvertFromSignedFixedPointWord(auVar44,0);
            auVar34 = loadVectorLeftIndexed(8,0x508b80);
            auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar38 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            lVar31 = ((ulonglong)DAT_0159c330 & 0x7fffffff) * 2 + uVar32 * 0x7b;
            auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar48);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar35);
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            lVar31 = lVar31 + ((LZCOUNT(-(*(ushort *)(iVar3 + 0x2a) & 4)) << 0x3a) >> 0x3f &
                              ((ulonglong)DAT_0159c330 + uVar32 * 0x7b) - lVar31);
            auVar44 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = loadVectorLeftIndexed(0xc,0x508b80);
            auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar35,auVar44);
            auVar44 = vectorSubtractFloatingPoint(auVar34,auVar42);
            auVar48 = loadVectorLeftIndexed(0x902ee0,lVar31 + 0x40U & 0xff);
            auVar35 = loadVectorLeftIndexed(0x902ee0,(ulonglong)(lVar31 << 0x20) >> 0x21 & 0xff);
            auVar48 = vectorShiftRightAlgebraicWord(auVar48,auVar37);
            auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar46,auVar34);
            auVar35 = vectorShiftRightAlgebraicWord(auVar35,auVar37);
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar48 = vectorConvertFromSignedFixedPointWord(auVar48,0);
            auVar37 = vectorConvertFromSignedFixedPointWord(auVar35,0);
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar42,auVar44);
            auVar34 = ZEXT416(0xffffffff);
            auVar42 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar44 = vectorShiftLeftIntegerWord(auVar49,auVar49);
            auVar49 = vectorShiftLeftIntegerWord(auVar50,auVar50);
            auVar34 = ZEXT416(0xffffffff);
            auVar50 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar45 = vectorShiftLeftIntegerWord(auVar42,auVar42);
            auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar38,auVar35);
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar38,auVar49);
            auVar42 = vectorShiftLeftIntegerWord(auVar50,auVar50);
            auVar44 = vectorMultiplyAddFloatingPoint(auVar40,auVar36,auVar44);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar47,auVar36,auVar45);
            auVar40 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = ZEXT416(0xffffffff);
            auVar36 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar45 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar47 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar42);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar43,auVar40);
            auVar34 = ZEXT416(0xffffffff);
            auVar40 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar42 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = loadVectorLeftIndexed(0x10,0x508b80);
            auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar44 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar36 = vectorMultiplyAddFloatingPoint(auVar48,auVar39,auVar36);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar37,auVar39,auVar35);
            auVar35 = vectorShiftLeftIntegerWord(auVar40,auVar40);
            auVar37 = vectorShiftLeftIntegerWord(auVar42,auVar42);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar46,auVar45);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar46,auVar47);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar44,auVar35);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar44,auVar37);
            *(undefined4 *)((int)puVar7 + 0x11c) = 0;
            *(undefined4 *)(puVar7 + 0x23) = 0;
            *(undefined4 *)((int)puVar7 + 0x114) = 0x3f800000;
            *(undefined4 *)(puVar7 + 0x22) = 0;
            *(undefined4 *)((int)puVar7 + 0x13c) = 0x3f800000;
            *(undefined4 *)(puVar7 + 0x27) = 0;
            *(undefined4 *)((int)puVar7 + 0x134) = 0;
            *(undefined4 *)(puVar7 + 0x26) = 0;
            *(undefined4 *)((int)puVar7 + 0x10c) = 0;
            *(undefined4 *)(puVar7 + 0x21) = 0;
            *(undefined4 *)((int)puVar7 + 0x104) = 0;
            *(undefined4 *)(puVar7 + 0x20) = 0x3f800000;
            auVar34 = vectorPermute(auVar35,auVar34,auVar10);
            auVar34 = vectorPermute(auVar34,auVar41,auVar11);
            *(undefined1 (*) [16])(puVar7 + 0x24) = auVar34;
            FUN_0060436c(uVar18 - 0x150,uVar18 - 400,uVar18 - 0x110);
            auVar34 = *(undefined1 (*) [16])(puVar7 + 0x18);
            auVar36 = *(undefined1 (*) [16])(puVar7 + 0x1a);
            auVar35 = *(undefined1 (*) [16])(puVar7 + 0x1c);
            auVar37 = *(undefined1 (*) [16])(puVar7 + 0x1e);
          }
        }
        auVar44 = vectorMergeHighWord(auVar34,auVar35);
        auVar41 = vectorMergeHighWord(auVar36,auVar37);
        auVar34 = vectorMergeLowWord(auVar34,auVar35);
        auVar35 = vectorMergeLowWord(auVar36,auVar37);
        auVar36 = vectorMergeHighWord(auVar44,auVar41);
        auVar37 = vectorMergeLowWord(auVar44,auVar41);
        auVar44 = vectorMergeHighWord(auVar34,auVar35);
        auVar34 = vectorMergeLowWord(auVar34,auVar35);
        *(undefined1 (*) [16])(puVar7 + 0x10) = auVar36;
        lVar33 = 8;
        *(undefined1 (*) [16])(puVar7 + 0x12) = auVar37;
        *(undefined1 (*) [16])(puVar7 + 0x14) = auVar44;
        uVar32 = puVar7[0x2a];
        auVar34 = vectorLogicalAnd(auVar34,_DAT_00508c00);
        lVar16 = uVar18 - 400;
        *(undefined1 (*) [16])(puVar7 + 0x16) = auVar34;
        *pRVar26->command = 0x441efc;
        pRVar26->command[1] = (RsxCmd)uVar32;
        pRVar19 = pRVar26->command + 2;
        pRVar26->command = pRVar19;
        lVar31 = lVar16;
        do {
          pRVar17 = (RsxCmd *)lVar31;
          *pRVar19 = *pRVar17;
          pRVar19 = pRVar26->command;
          pRVar26->command = pRVar19 + 1;
          lVar31 = lVar31 + 8;
          pRVar19[1] = pRVar17[1];
          pRVar17 = pRVar26->command;
          pRVar19 = pRVar17 + 1;
          pRVar26->command = pRVar19;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        if (DAT_0159c362 == '\0') {
          iVar4 = *(int *)(uVar24 + 0x44);
          iVar5 = *(int *)((int)puVar7[0x2b] + 0x4a8);
          pRVar17[1] = 0x4168c;
          pRVar26->command[1] = iVar4 - iVar5 | 0x80000000;
          pRVar19 = pRVar26->command;
        }
        else {
          uVar9 = *(uint *)(uVar29 + 0x60);
          pRVar17[1] = 0x4194c;
          pRVar26->command[1] = uVar9 << 0x18 | uVar9 >> 8;
          pRVar19 = pRVar26->command;
        }
        lVar31 = 8;
        pRVar26->command = pRVar19 + 2;
        uVar32 = puVar7[0x2a];
        *pRVar25->command = 0x441efc;
        pRVar25->command[1] = (RsxCmd)uVar32;
        pRVar19 = pRVar25->command + 2;
        pRVar25->command = pRVar19;
        do {
          pRVar17 = (RsxCmd *)lVar16;
          *pRVar19 = *pRVar17;
          pRVar19 = pRVar25->command;
          pRVar25->command = pRVar19 + 1;
          lVar16 = lVar16 + 8;
          pRVar19[1] = pRVar17[1];
          pRVar17 = pRVar25->command;
          pRVar19 = pRVar17 + 1;
          pRVar25->command = pRVar19;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        if (DAT_0159c362 == '\0') {
          iVar4 = *(int *)(uVar24 + 0x44);
          iVar5 = *(int *)((int)puVar7[0x2b] + 0x4a8);
          pRVar17[1] = 0x4168c;
          pRVar25->command[1] = iVar4 - iVar5 | 0x80000000;
          pRVar19 = pRVar25->command;
        }
        else {
          uVar29 = *(uint *)(uVar29 + 0x60);
          pRVar17[1] = 0x4194c;
          pRVar25->command[1] = uVar29 << 0x18 | uVar29 >> 8;
          pRVar19 = pRVar25->command;
        }
        pRVar19 = pRVar19 + 2;
        uVar29 = 0;
        pRVar25->command = pRVar19;
        puVar30 = *(undefined4 **)(iVar3 + 0x1c);
        if (*(short *)(iVar3 + 0x28) != 0) {
          do {
            FUN_004d676c(pRVar26,0,*puVar30,(ulonglong)*(byte *)(puVar30 + 3) & 3,
                         ((ulonglong)*(byte *)(puVar30 + 3) << 0x20) >> 0x22 & 3);
            *pRVar26->command = 0x400c1714;
            pRVar26->command[1] = 0;
            pRVar26->command[2] = 0;
            pRVar26->command[3] = 0;
            pRVar26->command[4] = NV4097_SET_BEGIN_END_x1;
            pRVar26->command[5] = 5;
            pRVar26->command = pRVar26->command + 6;
            FUN_005e8b5c(pRVar26,puVar30[1],puVar30[2]);
            *pRVar26->command = NV4097_SET_BEGIN_END_x1;
            pRVar26->command[1] = 0;
            pRVar26->command = pRVar26->command + 2;
            FUN_004d676c(pRVar25,0,*puVar30,(ulonglong)*(byte *)(puVar30 + 3) & 3,
                         ((ulonglong)*(byte *)(puVar30 + 3) << 0x20) >> 0x22 & 3);
            *pRVar25->command = 0x400c1714;
            pRVar25->command[1] = 0;
            pRVar25->command[2] = 0;
            pRVar25->command[3] = 0;
            pRVar25->command[4] = NV4097_SET_BEGIN_END_x1;
            pRVar25->command[5] = 5;
            pRVar25->command = pRVar25->command + 6;
            FUN_005e8b5c(pRVar25,puVar30[1],puVar30[2]);
            uVar29 = uVar29 + 1;
            puVar30 = puVar30 + 4;
            *pRVar25->command = NV4097_SET_BEGIN_END_x1;
            pRVar25->command[1] = 0;
            pRVar19 = pRVar25->command + 2;
            pRVar25->command = pRVar19;
          } while (uVar29 < *(ushort *)(iVar3 + 0x28));
        }
        if (pRVar25 == DL_DepthPass && iVar23 != 0xbe) {
          *pRVar19 = NV4097_SET_ALPHA_FUNC_x2;
          pRVar25->command[1] = 0x206;
          pRVar25->command[2] = 0xbe;
          pRVar25->command = pRVar25->command + 3;
        }
        uVar27 = uVar27 + 1;
        iVar22 = iVar22 + 4;
        iVar21 = iVar21 + 0x50;
      } while ((uVar27 & 0xffffffff) < (puVar7[0x2c] & 0xffffffff));
    }
    pRVar12 = M_Pass;
    uVar18 = puVar7[0x29];
    *M_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    RVar20 = (RsxCmd)uVar18;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    *M_Pass->command = 0x41744;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    *M_Pass->command = 0x4174c;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = 0x41744;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = 0x41748;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = 0x4174c;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = 0x41744;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = 0x4174c;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = 0x41744;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = 0x41748;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = 0x4174c;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    idol_draw::RsxCmd_WritePass(M_Pass);
    idol_draw::RsxCmd_WritePass(M_Depth);
    idol_draw::RsxCmd_WritePass(DL_Pass);
    idol_draw::RsxCmd_WritePass(DL_DepthPass);
  }
  return;
}



//==== 00509d60  ns=Global  size=0x78c
// sig: undefined FUN_00509d60(void)
// callers(1): 0050a4ec FUN_0050a4ec
// callees(5): 004d6bb0 FUN_004d6bb0; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 0065fb70: 'Sky'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00509d60(int param_1)

{
  ushort *puVar1;
  RsxCmd *pRVar2;
  ushort *puVar3;
  RsxCmd RVar4;
  RenderingStep *pRVar5;
  RenderingStep *pRVar6;
  int iVar7;
  ulonglong uVar8;
  RsxCmd RVar9;
  ulonglong uVar10;
  RsxCmd *pRVar11;
  RsxCmd *pRVar14;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  RsxCmd local_e0 [16];
  RsxCmd local_a0 [16];
  
  idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"Sky");
  iVar7 = g_viewMtxPtr;
  idol_draw::BindVertexProgram(g_viewMtxPtr,ForwardPass,3);
  idol_draw::BindFragmentProgram(iVar7,ForwardPass,10);
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar5->command[1] = 0xf0;
  pRVar11 = pRVar5->command;
  pRVar5->command = pRVar11 + 2;
  pRVar11[2] = NV4097_NO_OPERATION_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar5->command[1] = 0x1832;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar5->command[1] = 0x1822;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41748;
  auVar24 = ZEXT416(0);
  auVar35 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  pRVar5->command[1] = 0x1844;
  RVar9 = *(RsxCmd *)(param_1 + 0x14);
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar5->command[1] = RVar9 | 0x80000000;
  iVar20 = *(int *)(param_1 + 0x14);
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41684;
  pRVar5->command[1] = iVar20 + 0xc | 0x80000000;
  iVar20 = *(int *)(param_1 + 0x14);
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41688;
  pRVar5->command[1] = iVar20 + 0x14 | 0x80000000;
  RVar9 = *(RsxCmd *)(param_1 + 0x18);
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
  lVar21 = 8;
  pRVar5->command[1] = RVar9;
  pRVar5->command[2] = 0x11;
  auVar23 = *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0);
  auVar25 = *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0);
  auVar27 = *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0);
  auVar24 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar26 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  pRVar5->command = pRVar5->command + 3;
  pRVar5 = ForwardPass;
  auVar29 = *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0);
  auVar36 = *(undefined1 (*) [16])(iVar7 + 0x60U & 0xfffffff0);
  auVar28 = vectorLogicalAnd(auVar27,_DAT_00509d50);
  auVar27 = auVar23 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar35
                      );
  auVar37 = *(undefined1 (*) [16])(iVar7 + 0x70U & 0xfffffff0);
  auVar24 = auVar23 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar35
                      );
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar35
                      );
  auVar26 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar27 = auVar29 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar23 = auVar23 & (undefined1  [16])0xffffffff;
  auVar32 = auVar25 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar30 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar40 = *(undefined1 (*) [16])(iVar7 + 0x80U & 0xfffffff0);
  auVar34 = auVar28 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar41 = *(undefined1 (*) [16])(iVar7 + 0x90U & 0xfffffff0);
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar35
                      );
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar35
                      );
  auVar26 = auVar25 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar35
                      );
  auVar25 = auVar25 & (undefined1  [16])0xffffffff;
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar35
                      );
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar31
                      );
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar35
                      );
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar33
                      );
  auVar24 = auVar29 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar38
                      );
  auVar29 = auVar29 & (undefined1  [16])0xffffffff;
  auVar26 = auVar28 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar28 = auVar28 & (undefined1  [16])0xffffffff;
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar22
                      );
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar27
                      );
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar25 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar36
                      );
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar32
                      );
  auVar24 = vectorAddFloatingPoint(auVar34,auVar23);
  auVar23 = vectorAddFloatingPoint(auVar22,auVar30);
  auVar26 = vectorAddFloatingPoint(auVar31,auVar27);
  auVar27 = vectorAddFloatingPoint(auVar25,auVar32);
  auVar32 = vectorMergeHighWord(auVar24,auVar23);
  auVar24 = vectorMergeLowWord(auVar24,auVar23);
  auVar23 = vectorMergeHighWord(auVar26,auVar27);
  auVar26 = vectorMergeLowWord(auVar26,auVar27);
  vectorMergeHighWord(auVar32,auVar23);
  vectorMergeLowWord(auVar32,auVar23);
  vectorMergeHighWord(auVar24,auVar26);
  vectorMergeLowWord(auVar24,auVar26);
  pRVar11 = local_e0;
  *ForwardPass->command = 0x441efc;
  pRVar5->command[1] = 0;
  pRVar14 = pRVar5->command + 2;
  pRVar5->command = pRVar14;
  do {
    *pRVar14 = *pRVar11;
    pRVar14 = pRVar5->command;
    pRVar5->command = pRVar14 + 1;
    pRVar2 = pRVar11 + 1;
    pRVar11 = pRVar11 + 2;
    pRVar14[1] = *pRVar2;
    pRVar14 = pRVar5->command + 1;
    pRVar5->command = pRVar14;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  iVar20 = 10;
  if (*(short *)(param_1 + 6) != 0) {
    uVar19 = 0;
    iVar17 = param_1;
    do {
      puVar1 = *(ushort **)(iVar17 + 0x1c);
      if ((*puVar1 & 1) == 0) {
        if (iVar20 != 9) {
          idol_draw::BindFragmentProgram(iVar7,ForwardPass,9);
          iVar20 = 9;
        }
      }
      else if (iVar20 != 10) {
        idol_draw::BindFragmentProgram(iVar7,ForwardPass,10);
        iVar20 = 10;
      }
      if (puVar1[1] != 0) {
        uVar18 = 0;
        puVar3 = puVar1;
        do {
          FUN_004d6bb0(ForwardPass,0,*(undefined4 *)(puVar3 + 8));
          pRVar5 = ForwardPass;
          *ForwardPass->command = 0x400c1714;
          pRVar5->command[1] = 0;
          pRVar5->command[2] = 0;
          pRVar5->command[3] = 0;
          pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
          pRVar5->command[5] = 5;
          pRVar5->command = pRVar5->command + 6;
          pRVar5 = ForwardPass;
          RVar9 = *(RsxCmd *)(puVar3 + 10);
          uVar8 = (ulonglong)RVar9;
          lVar21 = 0x100 - ((ulonglong)RVar9 & 0xff);
          uVar12 = (ulonglong)*(uint *)(puVar3 + 0xc) - lVar21;
          uVar16 = lVar21 + (uVar12 & (longlong)((int)uVar12 >> 0x1f));
          uVar10 = *(uint *)(puVar3 + 0xc) - uVar16;
          pRVar11 = ForwardPass->command;
          uVar10 = uVar10 & ~(longlong)((int)uVar10 >> 0x1f);
          uVar12 = (uVar10 << 0x20) >> 0x28;
          uVar13 = uVar10 - (uVar10 & 0xffffff00);
          iVar15 = (int)uVar13;
          ForwardPass->command = pRVar11 + 1;
          *pRVar11 = (((uint)uVar10 >> 8) + ((uint)LZCOUNT(iVar15) >> 5 ^ 1) +
                     ((uint)LZCOUNT((int)uVar16) >> 5 ^ 1)) * 0x40000 | 0x40001824;
          if ((int)uVar16 != 0) {
            pRVar11 = pRVar5->command;
            uVar8 = uVar16 + uVar8;
            pRVar5->command = pRVar11 + 1;
            *pRVar11 = RVar9 | (int)((uVar16 & 0xffffffff) << 0x18) - 0x1000000;
          }
          RVar9 = (RsxCmd)uVar8;
          if ((uint)uVar10 >> 8 != 0) {
            do {
              pRVar11 = pRVar5->command;
              RVar4 = (RsxCmd)uVar8;
              uVar12 = uVar12 - 1;
              uVar8 = uVar8 + 0x100;
              RVar9 = (RsxCmd)uVar8;
              pRVar5->command = pRVar11 + 1;
              *pRVar11 = RVar4 | 0xff000000;
            } while (0 < (int)uVar12);
          }
          if (iVar15 != 0) {
            pRVar11 = pRVar5->command;
            pRVar5->command = pRVar11 + 1;
            *pRVar11 = RVar9 | (int)((uVar13 & 0xffffffff) << 0x18) - 0x1000000;
          }
          pRVar5 = ForwardPass;
          uVar18 = uVar18 + 1;
          *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
          pRVar5->command[1] = 0;
          pRVar5->command = pRVar5->command + 2;
          puVar3 = puVar3 + 8;
        } while (uVar18 < puVar1[1]);
      }
      uVar19 = uVar19 + 1;
      iVar17 = iVar17 + 4;
    } while (uVar19 < *(ushort *)(param_1 + 6));
  }
  pRVar5 = ForwardPass;
  auVar24 = *(undefined1 (*) [16])(iVar7 + 0xe0U & 0xfffffff0);
  auVar26 = *(undefined1 (*) [16])(iVar7 + 0x100U & 0xfffffff0);
  auVar27 = *(undefined1 (*) [16])(iVar7 + 0xf0U & 0xfffffff0);
  auVar23 = vectorMergeHighWord(auVar24,auVar26);
  auVar32 = *(undefined1 (*) [16])(iVar7 + 0x110U & 0xfffffff0);
  auVar24 = vectorMergeLowWord(auVar24,auVar26);
  auVar26 = vectorMergeHighWord(auVar27,auVar32);
  auVar27 = vectorMergeLowWord(auVar27,auVar32);
  pRVar14 = local_a0;
  lVar21 = 8;
  vectorMergeHighWord(auVar23,auVar26);
  vectorMergeLowWord(auVar23,auVar26);
  vectorMergeHighWord(auVar24,auVar27);
  vectorMergeLowWord(auVar24,auVar27);
  *ForwardPass->command = 0x441efc;
  pRVar5->command[1] = 0;
  pRVar11 = pRVar5->command + 2;
  pRVar5->command = pRVar11;
  do {
    *pRVar11 = *pRVar14;
    pRVar11 = pRVar5->command;
    pRVar5->command = pRVar11 + 1;
    pRVar2 = pRVar14 + 1;
    pRVar14 = pRVar14 + 2;
    pRVar11[1] = *pRVar2;
    pRVar11 = pRVar5->command + 1;
    pRVar5->command = pRVar11;
    pRVar6 = ForwardPass;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar6->command[1] = 2;
  pRVar6->command = pRVar6->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar5->command[1] = 2;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41748;
  pRVar5->command[1] = 2;
  pRVar5->command = pRVar5->command + 2;
  idol_draw::RsxCmd_WritePass(ForwardPass);
  return;
}



//==== 0050a4ec  ns=Global  size=0x2c
// sig: undefined FUN_0050a4ec(void)
// callers(0): 
// callees(1): 00509d60 FUN_00509d60

void FUN_0050a4ec(int param_1)

{
  if (*(int *)(param_1 + 0x4850) != 0) {
    FUN_00509d60();
  }
  return;
}



//==== 0050a538  ns=idol_draw  size=0x82c
// sig: undefined DrawSkyShell(SKY * sky, undefined8 id, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// callers(24): 00153bb8 skyfunc::SkyDrawShell; 00153c60 skyfunc::SkyLevelNone; 00153e00 skyfunc::SkyLevel_00; 00154208 skyfunc::SkyLevel_01; 001545b8 skyfunc::SkyLevel_02; 00154e28 skyfunc::SkyLevel_03; 00155198 skyfunc::SkyLevel_04; 001554a0 skyfunc::SkyLevel_05; 00155788 skyfunc::SkyLevel_06; 00156148 skyfunc::SkyLevel_07; 00156550 skyfunc::SkyLevel_08; 00156840 skyfunc::SkyLevel_09; 00156bd8 skyfunc::SkyLevel_10; 00157030 skyfunc::SkyLevel_11; 001573d0 skyfunc::SkyLevel_12; 0015774c skyfunc::SkyLevel_13; 00157a30 skyfunc::SkyLevel_14; 00157d98 skyfunc::SkyLevel_15; 001580b8 skyfunc::SkyLevel_16; 00158460 skyfunc::SkyLevel_17; 00158c70 skyfunc::SkyLevel_18; 00159118 skyfunc::SkyLevel_19; 001595d0 skyfunc::SkyLevelGeneric; 00159e88 space::Space_DrawSkyShell
// callees(3): 004d6bb0 FUN_004d6bb0; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void idol_draw::DrawSkyShell
               (SKY *sky,longlong id,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  ushort *puVar2;
  ushort *puVar3;
  RsxCmd RVar4;
  RenderingStep *pRVar5;
  RenderingStep *pRVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  RsxCmd *pRVar11;
  ulonglong uVar10;
  RsxCmd RVar12;
  ulonglong uVar13;
  RsxCmd *pRVar16;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  iVar7 = g_viewMtxPtr;
  uVar8 = ZEXT48(&stack0x00000000);
  auVar23 = ZEXT416(0);
  auVar39 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar48 = loadVectorLeftIndexed(0x40,uVar8);
  auVar23 = loadVectorLeftIndexed(0x48,uVar8);
  auVar47 = loadVectorLeftIndexed(0x44,uVar8);
  auVar25 = loadVectorLeftIndexed(0x58,uVar8);
  auVar46 = loadVectorLeftIndexed(0x50,uVar8);
  auVar28 = loadVectorLeftIndexed(0x68,uVar8);
  auVar45 = loadVectorLeftIndexed(0x60,uVar8);
  auVar43 = loadVectorLeftIndexed(0x54,uVar8);
  auVar41 = loadVectorLeftIndexed(100,uVar8);
  auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar44 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar23 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar42 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar23 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar40 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  BindVertexProgram(g_viewMtxPtr,ForwardPass,3);
  BindFragmentProgram(iVar7,ForwardPass,10);
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar5->command[1] = 0x1832;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar5->command[1] = 0x1822;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41748;
  pRVar5->command[1] = 0x1844;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  pvVar1 = sky->vtx_data;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar5->command[1] = (uint)pvVar1 | 0x80000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  pvVar1 = sky->vtx_data;
  *ForwardPass->command = 0x41684;
  pRVar5->command[1] = (int)pvVar1 + 0xc | 0x80000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  pvVar1 = sky->vtx_data;
  *ForwardPass->command = 0x41688;
  pRVar5->command[1] = (int)pvVar1 + 0x14 | 0x80000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  pvVar1 = sky->idx_data;
  *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
  pRVar5->command[1] = (RsxCmd)pvVar1;
  pRVar5->command[2] = 0x11;
  pRVar5->command = pRVar5->command + 3;
  pRVar5 = ForwardPass;
  auVar24 = *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0);
  auVar26 = *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0);
  auVar23 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0);
  auVar25 = auVar24 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar34 = *(undefined1 (*) [16])(iVar7 + 0x60U & 0xfffffff0);
  auVar35 = *(undefined1 (*) [16])(iVar7 + 0x70U & 0xfffffff0);
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar31 = vectorLogicalAnd(*(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0),_DAT_0050a520);
  auVar23 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar25 = auVar26 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar28 = auVar24 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar24 = auVar24 & (undefined1  [16])0xffffffff;
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar23 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar25 = auVar32 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar21 = *(undefined1 (*) [16])(iVar7 + 0x80U & 0xfffffff0);
  auVar22 = *(undefined1 (*) [16])(iVar7 + 0x90U & 0xfffffff0);
  auVar27 = auVar26 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar26 = auVar26 & (undefined1  [16])0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar29
                      );
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar30
                      );
  auVar37 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar23 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = auVar31 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar35 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar39
                      );
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar33
                      );
  auVar23 = auVar32 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar36
                      );
  auVar32 = auVar32 & (undefined1  [16])0xffffffff;
  auVar25 = auVar31 >> 0x20 & (undefined1  [16])0xffffffff;
  auVar31 = auVar31 & (undefined1  [16])0xffffffff;
  auVar26 = vectorAddFloatingPoint(auVar29,auVar24);
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar37
                      );
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar38
                      );
  auVar23 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar30
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar35
                      );
  auVar25 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = vectorAddFloatingPoint(auVar34,auVar27);
  auVar24 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar27 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar31 = vectorAddFloatingPoint(auVar29,auVar33);
  auVar25 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar39
                      );
  auVar27 = vectorAddFloatingPoint(auVar21,auVar22);
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar39
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar39
                      );
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar39,auVar39);
  auVar28 = vectorMultiplyAddFloatingPoint(auVar32,auVar39,auVar39);
  auVar23 = loadVectorLeftIndexed(0x10,0x50a520);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar31,auVar42,auVar30);
  auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = vectorMultiplyAddFloatingPoint(auVar31,auVar44,auVar29);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar27,auVar39,auVar24);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar27,auVar39,auVar22);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar31,auVar40,auVar33);
  auVar26 = vectorMultiplyAddFloatingPoint(auVar27,auVar39,auVar21);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar31,auVar39,auVar25);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar27,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar28
                      );
  lVar20 = 8;
  auVar24 = vectorAddFloatingPoint(auVar30,auVar24);
  auVar28 = vectorAddFloatingPoint(auVar32,auVar22);
  auVar27 = vectorAddFloatingPoint(auVar29,auVar26);
  auVar23 = vectorAddFloatingPoint(auVar25,auVar23);
  auVar25 = vectorMergeHighWord(auVar28,auVar27);
  auVar28 = vectorMergeLowWord(auVar28,auVar27);
  auVar27 = vectorMergeHighWord(auVar24,auVar23);
  auVar23 = vectorMergeLowWord(auVar24,auVar23);
  vectorMergeHighWord(auVar25,auVar27);
  vectorMergeLowWord(auVar25,auVar27);
  vectorMergeHighWord(auVar28,auVar23);
  vectorMergeLowWord(auVar28,auVar23);
  lVar9 = uVar8 - 0x160;
  *ForwardPass->command = 0x441efc;
  pRVar5->command[1] = 0;
  pRVar16 = pRVar5->command + 2;
  pRVar5->command = pRVar16;
  do {
    pRVar11 = (RsxCmd *)lVar9;
    *pRVar16 = *pRVar11;
    pRVar16 = pRVar5->command;
    pRVar5->command = pRVar16 + 1;
    lVar9 = lVar9 + 8;
    pRVar16[1] = pRVar11[1];
    pRVar16 = pRVar5->command + 1;
    pRVar5->command = pRVar16;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  puVar2 = *(ushort **)((int)sky->shells + (int)(id << 2));
  if ((*puVar2 & 1) == 0) {
    BindFragmentProgram(iVar7,ForwardPass,9);
  }
  if (puVar2[1] != 0) {
    uVar19 = 0;
    puVar3 = puVar2;
    do {
      FUN_004d6bb0(ForwardPass,0,*(undefined4 *)(puVar3 + 8));
      pRVar5 = ForwardPass;
      *ForwardPass->command = 0x400c1714;
      pRVar5->command[1] = 0;
      pRVar5->command[2] = 0;
      pRVar5->command[3] = 0;
      pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
      pRVar5->command[5] = 5;
      pRVar5->command = pRVar5->command + 6;
      pRVar5 = ForwardPass;
      RVar12 = *(RsxCmd *)(puVar3 + 10);
      uVar10 = (ulonglong)RVar12;
      lVar9 = 0x100 - ((ulonglong)RVar12 & 0xff);
      uVar14 = (ulonglong)*(uint *)(puVar3 + 0xc) - lVar9;
      uVar18 = lVar9 + (uVar14 & (longlong)((int)uVar14 >> 0x1f));
      uVar13 = *(uint *)(puVar3 + 0xc) - uVar18;
      pRVar16 = ForwardPass->command;
      uVar13 = uVar13 & ~(longlong)((int)uVar13 >> 0x1f);
      uVar15 = uVar13 - (uVar13 & 0xffffff00);
      uVar14 = (uVar13 << 0x20) >> 0x28;
      iVar17 = (int)uVar15;
      ForwardPass->command = pRVar16 + 1;
      *pRVar16 = (((uint)uVar13 >> 8) + ((uint)LZCOUNT(iVar17) >> 5 ^ 1) +
                 ((uint)LZCOUNT((int)uVar18) >> 5 ^ 1)) * 0x40000 | 0x40001824;
      if ((int)uVar18 != 0) {
        pRVar16 = pRVar5->command;
        uVar10 = uVar18 + uVar10;
        pRVar5->command = pRVar16 + 1;
        *pRVar16 = RVar12 | (int)((uVar18 & 0xffffffff) << 0x18) - 0x1000000;
      }
      RVar12 = (RsxCmd)uVar10;
      if ((uint)uVar13 >> 8 != 0) {
        do {
          pRVar16 = pRVar5->command;
          RVar4 = (RsxCmd)uVar10;
          uVar14 = uVar14 - 1;
          uVar10 = uVar10 + 0x100;
          RVar12 = (RsxCmd)uVar10;
          pRVar5->command = pRVar16 + 1;
          *pRVar16 = RVar4 | 0xff000000;
        } while (0 < (int)uVar14);
      }
      if (iVar17 != 0) {
        pRVar16 = pRVar5->command;
        pRVar5->command = pRVar16 + 1;
        *pRVar16 = RVar12 | (int)((uVar15 & 0xffffffff) << 0x18) - 0x1000000;
      }
      pRVar5 = ForwardPass;
      uVar19 = uVar19 + 1;
      *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
      pRVar5->command[1] = 0;
      pRVar5->command = pRVar5->command + 2;
      puVar3 = puVar3 + 8;
    } while (uVar19 < puVar2[1]);
  }
  pRVar5 = ForwardPass;
  auVar23 = *(undefined1 (*) [16])(iVar7 + 0xe0U & 0xfffffff0);
  auVar25 = *(undefined1 (*) [16])(iVar7 + 0x100U & 0xfffffff0);
  auVar28 = *(undefined1 (*) [16])(iVar7 + 0xf0U & 0xfffffff0);
  auVar24 = vectorMergeHighWord(auVar23,auVar25);
  auVar27 = *(undefined1 (*) [16])(iVar7 + 0x110U & 0xfffffff0);
  auVar23 = vectorMergeLowWord(auVar23,auVar25);
  auVar25 = vectorMergeHighWord(auVar28,auVar27);
  auVar28 = vectorMergeLowWord(auVar28,auVar27);
  lVar9 = uVar8 - 0x120;
  lVar20 = 8;
  vectorMergeHighWord(auVar24,auVar25);
  vectorMergeLowWord(auVar24,auVar25);
  vectorMergeHighWord(auVar23,auVar28);
  vectorMergeLowWord(auVar23,auVar28);
  *ForwardPass->command = 0x441efc;
  pRVar5->command[1] = 0;
  pRVar16 = pRVar5->command + 2;
  pRVar5->command = pRVar16;
  do {
    pRVar11 = (RsxCmd *)lVar9;
    *pRVar16 = *pRVar11;
    pRVar16 = pRVar5->command;
    pRVar5->command = pRVar16 + 1;
    lVar9 = lVar9 + 8;
    pRVar16[1] = pRVar11[1];
    pRVar16 = pRVar5->command + 1;
    pRVar5->command = pRVar16;
    pRVar6 = ForwardPass;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar6->command[1] = 2;
  pRVar6->command = pRVar6->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar5->command[1] = 2;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41748;
  pRVar5->command[1] = 2;
  pRVar5->command = pRVar5->command + 2;
  return;
}



//==== 0050ad78  ns=Global  size=0x314
// sig: undefined FUN_0050ad78(void)
// callers(1): 0050b08c FUN_0050b08c
// callees(1): 004fe098 idol::AllocateMemAlign

void FUN_0050ad78(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  float *pfVar18;
  float fVar19;
  
  iVar4 = g_viewMtxPtr;
  piVar6 = (int *)idol::AllocateMemAlign
                            (FrameHeap,(ulonglong)*(ushort *)((int)param_1 + 6) << 4,0x10);
  piVar7 = (int *)idol::AllocateMemAlign(FrameHeap,param_2 << 5,0x10);
  cVar5 = DAT_0159c364;
  iVar9 = 0;
  pfVar8 = (float *)*param_1;
  iVar10 = 0;
  uVar1 = *(ushort *)((int)param_1 + 6);
  iVar11 = 0;
  param_3[1] = (int)piVar6;
  *param_3 = 0;
  param_3[3] = (int)piVar7;
  param_3[2] = 0;
  if (cVar5 == '\0') {
    uVar13 = 0;
    uVar12 = 0xffffffff;
    if (uVar1 != 0) {
      do {
        iVar14 = 0;
        pfVar18 = (float *)&DAT_00a245a8;
        do {
          if (pfVar18[1] * pfVar8[1] + pfVar18[2] * pfVar8[2] + *pfVar18 * *pfVar8 + pfVar18[3] +
              ABS(pfVar8[3]) < 0.0) goto LAB_0050b04c;
          iVar14 = iVar14 + 1;
          pfVar18 = pfVar18 + 4;
        } while (iVar14 < 6);
        if ((PTR_DAT_00902e98._0_1_ == '\0') ||
           (uVar15 = (uint)LZCOUNT(*(ushort *)((int)pfVar8 + 0x1e) & 0xff &
                                   (uint)*(byte *)(*(int *)(iVar4 + 0x41c) +
                                                  (uint)(*(ushort *)((int)pfVar8 + 0x1e) >> 8))) >>
                     5, uVar3 = (uint)LZCOUNT(uVar15) >> 5,
           uVar3 + ((uint)((LZCOUNT(-(uint)DAT_01593350) << 0x3a) >> 0x3f) & uVar15 - uVar3) == 0))
        {
          uVar2 = *(ushort *)((int)pfVar8 + 0x22);
          if (uVar2 != uVar12) {
            iVar11 = *(int *)(iVar4 + 0x4a8);
            iVar9 = iVar11 + param_1[uVar2 + 6];
            iVar10 = iVar11 + param_1[uVar2 + 2];
            iVar11 = iVar11 + param_1[uVar2 + 0x12];
            uVar12 = (uint)uVar2;
          }
          piVar6[1] = iVar9 + (uint)*(ushort *)(pfVar8 + 6) * 4;
          fVar19 = 0.0;
          *piVar6 = iVar10 + (uint)*(ushort *)(pfVar8 + 6) * 0x20 +
                             (uint)*(ushort *)(pfVar8 + 6) * -4;
          piVar6[2] = iVar11 + (uint)*(ushort *)(pfVar8 + 6) * 4;
          *(undefined2 *)((int)piVar6 + 0xe) = *(undefined2 *)(pfVar8 + 7);
          *(undefined2 *)(piVar6 + 3) = *(undefined2 *)((int)pfVar8 + 0x1a);
          piVar6 = piVar6 + 4;
          *param_3 = *param_3 + 1;
          piVar16 = (int *)pfVar8[4];
          piVar17 = piVar7;
          if (pfVar8[5] != 0.0) {
            do {
              if (piVar16[2] != 0) {
                iVar14 = *piVar16;
                *(char *)(piVar7 + 1) = (char)uVar12;
                *piVar7 = iVar14;
                *(undefined1 *)((int)piVar7 + 5) = *(undefined1 *)(piVar16 + 3);
                piVar7[2] = piVar16[1];
                *(short *)(piVar7 + 3) = (short)piVar16[2];
                if (*(char *)(*piVar16 + 0x20) != -1) {
                  *(char *)(piVar7 + 1) = (char)uVar12;
                }
                piVar7 = piVar17 + 4;
                param_3[2] = param_3[2] + 1;
                piVar17 = piVar7;
              }
              fVar19 = (float)((int)fVar19 + 1);
              piVar16 = piVar16 + 4;
            } while ((uint)fVar19 < (uint)pfVar8[5]);
          }
        }
LAB_0050b04c:
        uVar13 = uVar13 + 1;
        pfVar8 = pfVar8 + 0xc;
      } while (uVar13 < uVar1);
    }
  }
  return;
}



//==== 0050b08c  ns=Global  size=0x30
// sig: undefined FUN_0050b08c(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(1): 0050ad78 FUN_0050ad78

void FUN_0050b08c(int param_1,undefined8 param_2)

{
  FUN_0050ad78(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_2);
  return;
}



//==== 0050b0bc  ns=tfragfunc  size=0xe7c
// sig: undefined DrawTfrag(void)
// callers(1): 0050bf38 tfragfunc::DrawTfrag
// callees(6): 004d676c FUN_004d676c; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004eda68 idol_draw::Insert_WaitCmd_Marker; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 0065fb74: 'TFrag'

void tfragfunc::DrawTfrag(int param_1,RsxCmd *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  RsxCmd RVar7;
  uint uVar8;
  uint uVar9;
  RsxCmd *pRVar10;
  RsxCmd *pRVar11;
  RsxCmd *pRVar12;
  int iVar13;
  bool bVar14;
  RsxCmd RVar15;
  RenderingStep *pRVar16;
  int iVar17;
  char cVar18;
  RsxCmd *pRVar20;
  RsxCmd *pRVar21;
  RsxCmd RVar22;
  ulonglong uVar19;
  RsxCmd RVar23;
  uint uVar25;
  ulonglong uVar24;
  uint uVar27;
  ulonglong uVar26;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  RsxCmd local_d0 [18];
  
  iVar17 = g_viewMtxPtr;
  if (DAT_0159c365 == '\0') {
    idol_draw::RsxCmd_DebugStr_Marker(DepthPass,"TFrag");
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"TFrag");
    pRVar16 = DepthPass;
    auVar32 = *(undefined1 (*) [16])(iVar17 + 0xa0U & 0xfffffff0);
    auVar33 = *(undefined1 (*) [16])(iVar17 + 0xd0U & 0xfffffff0);
    auVar34 = *(undefined1 (*) [16])(iVar17 + 0xc0U & 0xfffffff0);
    auVar35 = *(undefined1 (*) [16])(iVar17 + 0xb0U & 0xfffffff0);
    auVar36 = vectorMergeHighWord(auVar32,auVar34);
    auVar37 = vectorMergeHighWord(auVar35,auVar33);
    auVar32 = vectorMergeLowWord(auVar32,auVar34);
    auVar33 = vectorMergeLowWord(auVar35,auVar33);
    vectorMergeHighWord(auVar36,auVar37);
    vectorMergeLowWord(auVar36,auVar37);
    vectorMergeHighWord(auVar32,auVar33);
    vectorMergeLowWord(auVar32,auVar33);
    pRVar21 = local_d0;
    lVar31 = 8;
    *DepthPass->command = 0x441efc;
    pRVar16->command[1] = 0xc;
    pRVar20 = pRVar16->command + 2;
    pRVar16->command = pRVar20;
    do {
      *pRVar20 = *pRVar21;
      pRVar20 = pRVar16->command;
      pRVar16->command = pRVar20 + 1;
      pRVar10 = pRVar21 + 1;
      pRVar21 = pRVar21 + 2;
      pRVar20[1] = *pRVar10;
      pRVar20 = pRVar16->command + 1;
      pRVar16->command = pRVar20;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    if (*param_3 != 0) {
      idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,DepthPass,0);
    }
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41a4c;
    pRVar16->command[1] = 0x80000000;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41a48;
    pRVar16->command[1] = 0x40030404;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41a54;
    pRVar16->command[1] = (RsxCmd)&DAT_01012000;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    bVar1 = *(byte *)(iVar17 + 0x21ba);
    RVar22 = *(RsxCmd *)(iVar17 + 0x21c0);
    bVar2 = *(byte *)(iVar17 + 0x21ad);
    bVar3 = *(byte *)(iVar17 + 0x21ac);
    bVar4 = *(byte *)(iVar17 + 0x21af);
    bVar5 = *(byte *)(iVar17 + 0x21ae);
    RVar15 = *(RsxCmd *)(iVar17 + 0x21b4);
    RVar23 = *(RsxCmd *)(iVar17 + 0x21b0);
    RVar7 = *(RsxCmd *)(iVar17 + 0x21bc);
    uVar6 = *(ushort *)(iVar17 + 0x21b8);
    *ForwardPass->command = 0x81a40;
    pRVar16->command[1] = RVar22;
    pRVar16->command[2] =
         (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 |
         (uint)bVar4 << 2 | (uint)bVar5 << 4;
    pRVar21 = pRVar16->command;
    pRVar16->command = pRVar21 + 3;
    pRVar21[3] = 0x41a58;
    pRVar16->command[1] = RVar15;
    pRVar21 = pRVar16->command;
    pRVar16->command = pRVar21 + 2;
    pRVar21[2] = (RsxCmd)&DAT_00041848;
    pRVar16->command[1] = RVar7 | (uint)uVar6 << 0x14;
    pRVar21 = pRVar16->command;
    pRVar16->command = pRVar21 + 2;
    pRVar21[2] = 0x41a50;
    pRVar16->command[1] = RVar23;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41a5c;
    pRVar16->command[1] = 0;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar16->command[1] = 0x206;
    pRVar16->command[2] = 0xff;
    pRVar16->command = pRVar16->command + 3;
    pRVar16 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar16->command[1] = 1;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar16->command[1] = 0x206;
    pRVar16->command[2] = 1;
    pRVar16->command = pRVar16->command + 3;
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar16->command[1] = 1;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    lVar31 = 2;
    *ForwardPass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar16->command[1] = 0x14;
    pRVar21 = pRVar16->command + 2;
    pRVar16->command = pRVar21;
    do {
      *pRVar21 = *param_2;
      pRVar21 = pRVar16->command;
      pRVar16->command = pRVar21 + 1;
      pRVar20 = param_2 + 1;
      param_2 = param_2 + 2;
      pRVar21[1] = *pRVar20;
      pRVar21 = pRVar16->command + 1;
      pRVar16->command = pRVar21;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    idol_draw::BindVertexProgram(iVar17,ForwardPass,4);
    idol_draw::BindFragmentProgram(iVar17,ForwardPass,6);
    pRVar16 = ForwardPass;
    uVar8 = param_3[2];
    piVar30 = (int *)param_3[3];
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar16->command[1] = 0x1c32;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41744;
    pRVar16->command[1] = 0x822;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    uVar29 = 0xffffffff;
    *ForwardPass->command = 0x4174c;
    pRVar16->command[1] = 0x444;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar16->command[1] = 0x1c32;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    iVar17 = 0;
    cVar18 = '\0';
    pRVar21 = (RsxCmd *)0x0;
    pRVar20 = (RsxCmd *)0x0;
    *DepthPass->command = 0x41744;
    bVar14 = false;
    uVar28 = 0;
    pRVar16->command[1] = 0x822;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = 0x4174c;
    pRVar16->command[1] = 0x444;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar16->command[1] = 0;
    pRVar16->command = pRVar16->command + 2;
    if (uVar8 != 0) {
      do {
        pRVar16 = ForwardPass;
        if (*(byte *)(piVar30 + 1) != uVar29) {
          if (pRVar20 != (RsxCmd *)0x0) {
            *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
            pRVar16->command[1] = 0;
            pRVar16->command = pRVar16->command + 2;
            pRVar16 = DepthPass;
            if (!bVar14) {
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar16->command[1] = 0;
              pRVar16->command = pRVar16->command + 2;
            }
            pRVar21 = (RsxCmd *)0x0;
            pRVar20 = (RsxCmd *)0x0;
          }
          pRVar16 = ForwardPass;
          uVar29 = (uint)*(byte *)(piVar30 + 1);
          iVar13 = (int)(((ulonglong)CONCAT14(*(byte *)(piVar30 + 1),uVar29) & 0x3fffffff) << 2);
          pRVar10 = (RsxCmd *)(iVar13 + param_1 + 8);
          pRVar11 = (RsxCmd *)(iVar13 + param_1 + 0x28);
          RVar22 = *pRVar10;
          *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar12 = (RsxCmd *)(iVar13 + param_1 + 0x38);
          pRVar16->command[1] = RVar22 | 0x80000000;
          pRVar16->command = pRVar16->command + 2;
          pRVar16 = ForwardPass;
          RVar22 = *pRVar11;
          *ForwardPass->command = 0x41684;
          pRVar16->command[1] = RVar22 | 0x80000000;
          pRVar16->command = pRVar16->command + 2;
          pRVar16 = ForwardPass;
          RVar22 = *pRVar12;
          *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar16->command[1] = RVar22;
          pRVar16->command[2] = 0x11;
          pRVar16->command = pRVar16->command + 3;
          pRVar16 = DepthPass;
          RVar22 = *pRVar10;
          *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar16->command[1] = RVar22 | 0x80000000;
          pRVar16->command = pRVar16->command + 2;
          pRVar16 = DepthPass;
          RVar22 = *pRVar11;
          *DepthPass->command = 0x41684;
          pRVar16->command[1] = RVar22 | 0x80000000;
          pRVar16->command = pRVar16->command + 2;
          pRVar16 = DepthPass;
          RVar22 = *pRVar12;
          *DepthPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar16->command[1] = RVar22;
          pRVar16->command[2] = 0x11;
          pRVar16->command = pRVar16->command + 3;
          pRVar16 = DepthPass;
          if (DAT_0159c366 == '\0') {
            pRVar10 = (RsxCmd *)(iVar13 + param_1 + 0x48);
            RVar22 = *pRVar10;
            *DepthPass->command = 0x4168c;
            pRVar16->command[1] = RVar22 | 0x80000000;
            pRVar16->command = pRVar16->command + 2;
            pRVar16 = ForwardPass;
            RVar22 = *pRVar10;
            *ForwardPass->command = 0x4168c;
            pRVar16->command[1] = RVar22 | 0x80000000;
            pRVar16->command = pRVar16->command + 2;
          }
          else {
            pRVar10 = (RsxCmd *)(iVar13 + param_1 + 0x18);
            RVar22 = *pRVar10;
            *DepthPass->command = 0x4168c;
            pRVar16->command[1] = RVar22 | 0x80000000;
            pRVar16->command = pRVar16->command + 2;
            pRVar16 = ForwardPass;
            RVar22 = *pRVar10;
            *ForwardPass->command = 0x4168c;
            pRVar16->command[1] = RVar22 | 0x80000000;
            pRVar16->command = pRVar16->command + 2;
          }
        }
        pRVar16 = ForwardPass;
        if ((*piVar30 != iVar17) || (*(char *)((int)piVar30 + 5) != cVar18)) {
          if (pRVar20 != (RsxCmd *)0x0) {
            *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
            pRVar16->command[1] = 0;
            pRVar16->command = pRVar16->command + 2;
            pRVar16 = DepthPass;
            if (!bVar14) {
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar16->command[1] = 0;
              pRVar16->command = pRVar16->command + 2;
            }
            pRVar21 = (RsxCmd *)0x0;
            pRVar20 = (RsxCmd *)0x0;
          }
          pRVar16 = ForwardPass;
          if (*(char *)(*piVar30 + 0x20) == -1) {
            if (!bVar14) {
              *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
              pRVar16->command[1] = 1;
              pRVar16->command = pRVar16->command + 2;
            }
            bVar14 = true;
          }
          else {
            if (bVar14) {
              *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
              pRVar16->command[1] = 0;
              pRVar16->command = pRVar16->command + 2;
            }
            bVar14 = false;
          }
          FUN_004d676c(ForwardPass,0,*piVar30,(ulonglong)*(byte *)((int)piVar30 + 5) & 3,
                       ((ulonglong)*(byte *)((int)piVar30 + 5) << 0x20) >> 0x22 & 3);
          if (!bVar14) {
            FUN_004d676c(DepthPass,0,*piVar30,(ulonglong)*(byte *)((int)piVar30 + 5) & 3,
                         ((ulonglong)*(byte *)((int)piVar30 + 5) << 0x20) >> 0x22 & 3);
          }
          iVar17 = *piVar30;
          cVar18 = *(char *)((int)piVar30 + 5);
        }
        pRVar16 = ForwardPass;
        if (pRVar20 == (RsxCmd *)0x0) {
          RVar22 = piVar30[2];
          uVar6 = *(ushort *)(piVar30 + 3);
          uVar25 = (uint)uVar6;
          uVar27 = 0;
          *ForwardPass->command = 0x400c1714;
          uVar9 = uVar25 + 0xff >> 8;
          pRVar16->command[1] = 0;
          pRVar16->command[2] = 0;
          pRVar16->command[3] = 0;
          pRVar16->command[4] = NV4097_SET_BEGIN_END_x1;
          pRVar16->command[5] = 5;
          pRVar10 = pRVar16->command;
          pRVar20 = pRVar10 + 6;
          pRVar16->command = pRVar10 + 7;
          pRVar10[6] = (uVar25 + 0xff) * 0x400 & 0xfffc0000 | 0x40001824;
          if (uVar9 != 0) {
            do {
              if (uVar25 < 0x101) {
                pRVar10 = pRVar16->command;
                RVar23 = RVar22 | (uint)uVar6 * 0x1000000 - 0x1000000;
                RVar22 = uVar25 + RVar22;
                pRVar16->command = pRVar10 + 1;
                *pRVar10 = RVar23;
              }
              else {
                pRVar10 = pRVar16->command;
                RVar23 = RVar22 | 0xff000000;
                RVar22 = RVar22 + 0x100;
                uVar25 = uVar25 - 0x100;
                pRVar16->command = pRVar10 + 1;
                *pRVar10 = RVar23;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < uVar9);
          }
          pRVar16 = DepthPass;
          if (!bVar14) {
            RVar22 = piVar30[2];
            uVar6 = *(ushort *)(piVar30 + 3);
            uVar25 = (uint)uVar6;
            uVar27 = 0;
            *DepthPass->command = 0x400c1714;
            uVar9 = uVar25 + 0xff >> 8;
            pRVar16->command[1] = 0;
            pRVar16->command[2] = 0;
            pRVar16->command[3] = 0;
            pRVar16->command[4] = NV4097_SET_BEGIN_END_x1;
            pRVar16->command[5] = 5;
            pRVar10 = pRVar16->command;
            pRVar21 = pRVar10 + 6;
            pRVar16->command = pRVar10 + 7;
            pRVar10[6] = (uVar25 + 0xff) * 0x400 & 0xfffc0000 | 0x40001824;
            if (uVar9 != 0) {
              do {
                if (uVar25 < 0x101) {
                  pRVar10 = pRVar16->command;
                  RVar23 = RVar22 | (uint)uVar6 * 0x1000000 - 0x1000000;
                  RVar22 = uVar25 + RVar22;
                  pRVar16->command = pRVar10 + 1;
                  *pRVar10 = RVar23;
                }
                else {
                  pRVar10 = pRVar16->command;
                  RVar23 = RVar22 | 0xff000000;
                  RVar22 = RVar22 + 0x100;
                  uVar25 = uVar25 - 0x100;
                  pRVar16->command = pRVar10 + 1;
                  *pRVar10 = RVar23;
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 < uVar9);
            }
          }
        }
        else {
          uVar6 = *(ushort *)(piVar30 + 3);
          uVar24 = (ulonglong)uVar6;
          uVar26 = 0;
          lVar31 = uVar24 + 0xff;
          uVar19 = (ulonglong)(uint)piVar30[2];
          uVar9 = (uint)lVar31;
          *pRVar20 = *pRVar20 & 0xe003ffff | ((uVar9 >> 8) + (*pRVar20 >> 0x12 & 0x7ff)) * 0x40000;
          if (uVar9 >> 8 != 0) {
            do {
              RVar22 = (RsxCmd)uVar19;
              if ((uVar24 & 0xffffffff) < 0x101) {
                pRVar10 = pRVar16->command;
                uVar19 = uVar24 + uVar19;
                pRVar16->command = pRVar10 + 1;
                *pRVar10 = RVar22 | (uint)uVar6 * 0x1000000 - 0x1000000;
              }
              else {
                pRVar10 = pRVar16->command;
                uVar19 = uVar19 + 0x100;
                uVar24 = uVar24 - 0x100;
                pRVar16->command = pRVar10 + 1;
                *pRVar10 = RVar22 | 0xff000000;
              }
              uVar26 = uVar26 + 1;
            } while ((uVar26 & 0xffffffff) < (ulonglong)(lVar31 << 0x20) >> 0x28);
          }
          pRVar16 = DepthPass;
          if (!bVar14) {
            uVar6 = *(ushort *)(piVar30 + 3);
            uVar24 = (ulonglong)uVar6;
            uVar26 = 0;
            lVar31 = uVar24 + 0xff;
            uVar9 = (uint)lVar31;
            uVar19 = (ulonglong)(uint)piVar30[2];
            *pRVar21 = *pRVar21 & 0xe003ffff | ((uVar9 >> 8) + (*pRVar21 >> 0x12 & 0x7ff)) * 0x40000
            ;
            if (uVar9 >> 8 != 0) {
              do {
                RVar22 = (RsxCmd)uVar19;
                if ((uVar24 & 0xffffffff) < 0x101) {
                  pRVar10 = pRVar16->command;
                  uVar19 = uVar24 + uVar19;
                  pRVar16->command = pRVar10 + 1;
                  *pRVar10 = RVar22 | (uint)uVar6 * 0x1000000 - 0x1000000;
                }
                else {
                  pRVar10 = pRVar16->command;
                  uVar19 = uVar19 + 0x100;
                  uVar24 = uVar24 - 0x100;
                  pRVar16->command = pRVar10 + 1;
                  *pRVar10 = RVar22 | 0xff000000;
                }
                uVar26 = uVar26 + 1;
              } while ((uVar26 & 0xffffffff) < (ulonglong)(lVar31 << 0x20) >> 0x28);
            }
          }
        }
        pRVar16 = ForwardPass;
        uVar28 = uVar28 + 1;
        piVar30 = piVar30 + 4;
      } while (uVar28 < uVar8);
      if (pRVar20 != (RsxCmd *)0x0) {
        *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
        pRVar16->command[1] = 0;
        pRVar16->command = pRVar16->command + 2;
        pRVar16 = DepthPass;
        *DepthPass->command = NV4097_SET_BEGIN_END_x1;
        pRVar16->command[1] = 0;
        pRVar16->command = pRVar16->command + 2;
      }
    }
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41744;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    idol_draw::RsxCmd_WritePass(ForwardPass);
    pRVar16 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = 0x41748;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = 0x4174c;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    idol_draw::RsxCmd_WritePass(DepthPass);
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar16->command[1] = 0;
    pRVar16->command = pRVar16->command + 2;
  }
  return;
}



//==== 0050bf38  ns=tfragfunc  size=0x30
// sig: undefined DrawTfrag(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(1): 0050b0bc tfragfunc::DrawTfrag

void tfragfunc::DrawTfrag(int param_1,undefined8 param_2)

{
  DrawTfrag(*(undefined4 *)(param_1 + 0x28),(ulonglong)*(uint *)(param_1 + 0x18) + 0x10,param_2);
  return;
}



//==== 0050bf68  ns=Global  size=0x6c
// sig: undefined FUN_0050bf68(void)
// callers(0): 
// callees(0): 

int FUN_0050bf68(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if (*(char *)(*param_1 + 0x20) == -1) {
    uVar1 = *param_2;
    if (*(char *)(uVar1 + 0x20) != -1) {
      return -1;
    }
  }
  else {
    uVar1 = *param_2;
    if (*(char *)(uVar1 + 0x20) == -1) {
      return 1;
    }
  }
  return (*param_1 & 0xffffff) - (uVar1 & 0xffffff);
}



//==== 0050bfd4  ns=Global  size=0x3c
// sig: undefined FUN_0050bfd4(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(1): 005c8308 FUN_005c8308

void FUN_0050bfd4(int param_1)

{
  FUN_005c8308(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),0x10,&PTR_FUN_00712268);
  return;
}



//==== 0050c020  ns=Global  size=0x590
// sig: undefined FUN_0050c020(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(4): 004fe098 idol::AllocateMemAlign; 00500b30 fastfunc::FastMtxScaleIdentity; 0050162c fastfunc::FastVecMtx4Mul; 00502a64 fastfunc::FastVecSub

void FUN_0050c020(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  char cVar10;
  ulonglong uVar11;
  uint uVar13;
  uint *puVar14;
  float *pfVar15;
  uint uVar16;
  longlong lVar12;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar20;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar22;
  ulonglong unaff_r30;
  longlong lVar23;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar26 [16];
  undefined4 uVar29;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar35;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar36 [16];
  undefined4 uVar40;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x180;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar11;
  puVar4[0x32] = in_LR;
  puVar4[0x26] = unaff_r22;
  puVar4[0x2e] = unaff_r30;
  puVar4[0x27] = unaff_r23;
  uVar2 = *(uint *)(param_1 + 0x243c);
  puVar4[0x2f] = unaff_r31;
  uVar20 = (ulonglong)*(uint *)(param_1 + 0x2438);
  puVar4[0x28] = unaff_r24;
  iVar9 = g_viewMtxPtr;
  uVar25 = FrameHeap;
  puVar4[0x2d] = unaff_r29;
  puVar4[0x2c] = unaff_r28;
  puVar4[0x2b] = unaff_r27;
  puVar4[0x2a] = unaff_r26;
  puVar4[0x29] = unaff_r25;
  puVar4[0x25] = unaff_r21;
  puVar4[0x24] = unaff_r20;
  uVar13 = idol::AllocateMemAlign(uVar25,uVar2 * 0x50,0x10);
  puVar14 = (uint *)idol::AllocateMemAlign(FrameHeap,uVar2 << 2,0x10);
  param_2[1] = uVar13;
  cVar10 = DAT_0159c368;
  *param_2 = puVar14;
  param_2[2] = 0;
  if ((cVar10 == '\0') && (uVar2 != 0)) {
    lVar22 = uVar20 * 0x43;
    lVar23 = uVar20 * 0x7b;
    uVar21 = 0;
    do {
      uVar5 = (uint)uVar20;
      iVar3 = *(int *)(uVar5 + 0x6c);
      if (((*(byte *)(uVar5 + 0x5e) & 4) == 0) && ((*(ushort *)(iVar3 + 0x2a) & 1) == 0)) {
        iVar18 = 0;
        pfVar15 = (float *)&DAT_00a245a8;
        do {
          if (pfVar15[1] * *(float *)(uVar5 + 0x44) +
              pfVar15[2] * *(float *)(uVar5 + 0x48) +
              *pfVar15 * *(float *)(uVar5 + 0x40) + pfVar15[3] + ABS(*(float *)(uVar5 + 0x4c)) < 0.0
             ) goto LAB_0050c548;
          iVar18 = iVar18 + 1;
          pfVar15 = pfVar15 + 4;
        } while (iVar18 < 6);
        if ((PTR_DAT_00902e98._0_1_ == '\0') ||
           (uVar16 = (uint)LZCOUNT(*(uint *)(uVar5 + 0x58) & 0xff &
                                   (uint)*(byte *)(*(int *)(iVar9 + 0x41c) +
                                                  (*(uint *)(uVar5 + 0x58) >> 8 & 0xff))) >> 5,
           uVar6 = (uint)LZCOUNT(uVar16) >> 5,
           uVar6 + ((uint)((LZCOUNT(-(uint)DAT_01593350) << 0x3a) >> 0x3f) & uVar16 - uVar6) == 0))
        {
          puVar7 = (undefined4 *)(uVar5 & 0xfffffff0);
          uVar28 = puVar7[2];
          uVar27 = puVar7[1];
          uVar25 = *puVar7;
          puVar8 = (undefined4 *)(uVar5 + 0x10 & 0xfffffff0);
          uVar34 = puVar8[3];
          uVar33 = puVar8[2];
          uVar32 = puVar8[1];
          uVar29 = *puVar8;
          puVar8 = (undefined4 *)(uVar5 + 0x20 & 0xfffffff0);
          uVar39 = puVar8[3];
          uVar38 = puVar8[2];
          uVar37 = puVar8[1];
          uVar35 = *puVar8;
          puVar8 = (undefined4 *)(uVar5 + 0x30 & 0xfffffff0);
          uVar45 = puVar8[3];
          uVar44 = puVar8[2];
          uVar43 = puVar8[1];
          uVar40 = *puVar8;
          *(undefined4 *)((int)puVar4 + 0x8c) = puVar7[3];
          *(undefined4 *)(puVar4 + 0x11) = uVar28;
          *(undefined4 *)((int)puVar4 + 0x84) = uVar27;
          *(undefined4 *)(puVar4 + 0x10) = uVar25;
          *(undefined4 *)((int)puVar4 + 0x9c) = uVar34;
          *(undefined4 *)(puVar4 + 0x13) = uVar33;
          *(undefined4 *)((int)puVar4 + 0x94) = uVar32;
          *(undefined4 *)(puVar4 + 0x12) = uVar29;
          *(undefined4 *)((int)puVar4 + 0xac) = uVar39;
          *(undefined4 *)(puVar4 + 0x15) = uVar38;
          *(undefined4 *)((int)puVar4 + 0xa4) = uVar37;
          *(undefined4 *)(puVar4 + 0x14) = uVar35;
          *(undefined4 *)((int)puVar4 + 0xbc) = uVar45;
          *(undefined4 *)(puVar4 + 0x17) = uVar44;
          *(undefined4 *)((int)puVar4 + 0xb4) = uVar43;
          *(undefined4 *)(puVar4 + 0x16) = uVar40;
          if ((*(ushort *)(iVar3 + 0x2a) & 6) != 0) {
            fastfunc::FastVecSub(uVar11 - 0x110,uVar20 + 0x40,&DAT_0159c340);
            auVar26 = ZEXT416(0xffffffff);
            auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
            auVar26 = vectorShiftLeftIntegerWord(auVar26,auVar26);
            auVar30 = loadVectorLeftIndexed(0x74,lVar1);
            auVar36 = loadVectorLeftIndexed(0x70,lVar1);
            auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar30,auVar26);
            auVar41 = loadVectorLeftIndexed(0x78,lVar1);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar26);
            auVar26 = loadVectorLeftIndexed(0x14,0x902fe0);
            auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar31 = loadVectorLeftIndexed(0x18,0x902fe0);
            auVar46 = loadVectorLeftIndexed(0x10,0x902fe0);
            auVar48 = loadVectorLeftIndexed(4,0x902fe0);
            auVar47 = loadVectorLeftIndexed(8,0x902fe0);
            auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar41,auVar30);
            auVar42 = loadVectorLeftIndexed(0x2fe0,0x900000);
            auVar36 = loadVectorLeftIndexed(0xc,0x902fe0);
            auVar30 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                       auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              auVar26 = ZEXT416(0xfffffff8);
              auVar49 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = ZEXT416(0xffffffff);
              auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = ZEXT416(0xffffffff);
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              uVar19 = (ulonglong)DAT_0159c330 + lVar22;
              auVar53 = vectorShiftLeftIntegerWord(auVar30,auVar30);
              auVar30 = vectorShiftLeftIntegerWord(auVar26,auVar26);
              auVar26 = ZEXT416(0xffffffff);
              auVar24 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = loadVectorLeftIndexed(0x902ee0,uVar19 & 0xff);
              auVar50 = loadVectorLeftIndexed(0x902ee0,(uVar19 << 0x20) >> 0x21 & 0xff);
              auVar26 = vectorShiftRightAlgebraicWord(auVar26,auVar49);
              auVar51 = vectorShiftRightAlgebraicWord(auVar50,auVar49);
              auVar50 = vectorConvertFromSignedFixedPointWord(auVar26,0);
              auVar51 = vectorConvertFromSignedFixedPointWord(auVar51,0);
              auVar26 = loadVectorLeftIndexed(4,0x50c010);
              auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar52 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              lVar12 = ((ulonglong)DAT_0159c330 & 0x7fffffff) * 2 + lVar23;
              auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
              auVar50 = vectorMultiplyAddFloatingPoint(auVar50,auVar52,auVar53);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar51,auVar52,auVar30);
              auVar26 = ZEXT416(0xffffffff);
              auVar51 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              lVar12 = lVar12 + ((LZCOUNT(-(*(ushort *)(iVar3 + 0x2a) & 0xe)) << 0x3a) >> 0x3f &
                                ((ulonglong)DAT_0159c330 + lVar23) - lVar12);
              auVar26 = loadVectorLeftIndexed(8,0x50c010);
              auVar51 = vectorShiftLeftIntegerWord(auVar51,auVar51);
              auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar54 = vectorSubtractFloatingPoint(auVar26,auVar46);
              auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar31,auVar26);
              auVar26 = loadVectorLeftIndexed(0x902ee0,lVar12 + 0x40U & 0xff);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar50,auVar30,auVar51);
              auVar50 = vectorShiftRightAlgebraicWord(auVar26,auVar49);
              auVar41 = loadVectorLeftIndexed(0x902ee0,(ulonglong)(lVar12 << 0x20) >> 0x21 & 0xff);
              auVar26 = ZEXT416(0xffffffff);
              auVar51 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar41 = vectorShiftRightAlgebraicWord(auVar41,auVar49);
              auVar49 = vectorConvertFromSignedFixedPointWord(auVar50,0);
              auVar26 = ZEXT416(0xffffffff);
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar50 = vectorConvertFromSignedFixedPointWord(auVar41,0);
              auVar53 = vectorShiftLeftIntegerWord(auVar26,auVar26);
              auVar46 = vectorMultiplyAddFloatingPoint(auVar30,auVar46,auVar54);
              auVar26 = ZEXT416(0xffffffff);
              auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar41 = vectorShiftLeftIntegerWord(auVar51,auVar51);
              auVar26 = ZEXT416(0xffffffff);
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar49 = vectorMultiplyAddFloatingPoint(auVar49,auVar52,auVar24);
              auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
              auVar54 = vectorShiftLeftIntegerWord(auVar26,auVar26);
              auVar24 = vectorMultiplyAddFloatingPoint(auVar50,auVar52,auVar41);
              auVar26 = ZEXT416(0xffffffff);
              auVar50 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = ZEXT416(0xffffffff);
              auVar51 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar41 = vectorMultiplyAddFloatingPoint(auVar47,auVar46,auVar53);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar36,auVar46,auVar30);
              auVar46 = vectorShiftLeftIntegerWord(auVar50,auVar50);
              auVar26 = ZEXT416(0xffffffff);
              auVar36 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = ZEXT416(0xffffffff);
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar47 = vectorShiftLeftIntegerWord(auVar36,auVar36);
              auVar36 = vectorMultiplyAddFloatingPoint(auVar41,auVar42,auVar54);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar42,auVar46);
              auVar41 = vectorShiftLeftIntegerWord(auVar26,auVar26);
              auVar26 = ZEXT416(0xffffffff);
              auVar46 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = loadVectorLeftIndexed(0xc,0x50c010);
              auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar42 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar36 = vectorMultiplyAddFloatingPoint(auVar49,auVar48,auVar36);
              auVar26 = vectorMultiplyAddFloatingPoint(auVar24,auVar48,auVar30);
              auVar46 = vectorShiftLeftIntegerWord(auVar46,auVar46);
              auVar48 = vectorShiftLeftIntegerWord(auVar51,auVar51);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar36,auVar31,auVar47);
              auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar31,auVar41);
              auVar36 = vectorMultiplyAddFloatingPoint(auVar30,auVar42,auVar46);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar26,auVar42,auVar48);
              fastfunc::FastMtxScaleIdentity(0x3ff0000000000000,uVar11 - 0xc0);
              auVar26 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar25 = storeVectorElementWordIndexed
                                 (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xe0
                                  ,lVar1);
              *(undefined4 *)(puVar4 + 0x1c) = uVar25;
              uVar25 = storeVectorElementWordIndexed
                                 (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xe4
                                  ,lVar1);
              *(undefined4 *)((int)puVar4 + 0xe4) = uVar25;
              *(undefined4 *)(puVar4 + 0x1d) = 0x3f800000;
              fastfunc::FastVecMtx4Mul(uVar11 - 0x100,uVar20,uVar11 - 0xc0);
            }
          }
          uVar28 = *(undefined4 *)(puVar4 + 0x11);
          uVar27 = *(undefined4 *)((int)puVar4 + 0x84);
          uVar25 = *(undefined4 *)(puVar4 + 0x10);
          uVar34 = *(undefined4 *)((int)puVar4 + 0x9c);
          uVar33 = *(undefined4 *)(puVar4 + 0x13);
          uVar32 = *(undefined4 *)((int)puVar4 + 0x94);
          uVar29 = *(undefined4 *)(puVar4 + 0x12);
          uVar39 = *(undefined4 *)((int)puVar4 + 0xac);
          uVar38 = *(undefined4 *)(puVar4 + 0x15);
          uVar37 = *(undefined4 *)((int)puVar4 + 0xa4);
          uVar35 = *(undefined4 *)(puVar4 + 0x14);
          uVar45 = *(undefined4 *)((int)puVar4 + 0xbc);
          uVar44 = *(undefined4 *)(puVar4 + 0x17);
          uVar43 = *(undefined4 *)((int)puVar4 + 0xb4);
          uVar40 = *(undefined4 *)(puVar4 + 0x16);
          puVar7 = (undefined4 *)(uVar13 & 0xfffffff0);
          puVar7[3] = *(undefined4 *)((int)puVar4 + 0x8c);
          puVar7[2] = uVar28;
          puVar7[1] = uVar27;
          *puVar7 = uVar25;
          puVar7 = (undefined4 *)(uVar13 + 0x10 & 0xfffffff0);
          puVar7[3] = uVar34;
          puVar7[2] = uVar33;
          puVar7[1] = uVar32;
          *puVar7 = uVar29;
          puVar7 = (undefined4 *)(uVar13 + 0x20 & 0xfffffff0);
          puVar7[3] = uVar39;
          puVar7[2] = uVar38;
          puVar7[1] = uVar37;
          *puVar7 = uVar35;
          puVar7 = (undefined4 *)(uVar13 + 0x30 & 0xfffffff0);
          puVar7[3] = uVar45;
          puVar7[2] = uVar44;
          puVar7[1] = uVar43;
          *puVar7 = uVar40;
          *(undefined2 *)(uVar13 + 0x4e) = *(undefined2 *)(uVar5 + 0x68);
          *(undefined2 *)(uVar13 + 0x4c) = *(undefined2 *)(uVar5 + 0x6a);
          *(uint *)(uVar13 + 0x3c) = (uint)*(ushort *)(iVar3 + 0x26);
          iVar17 = idol::AllocateMemAlign(FrameHeap,(ulonglong)*(ushort *)(iVar3 + 0x26) << 2,0x10);
          *(int *)(uVar13 + 0x48) = iVar17;
          iVar18 = *(int *)(iVar9 + 0x4a8);
          *(int *)(uVar5 + 100) = iVar17 - iVar18;
          *(int *)(uVar13 + 0x44) = iVar18 + *(int *)(uVar5 + 0x60);
          *(int *)(uVar13 + 0x40) = *(int *)(iVar9 + 0x4a8) + *(int *)(iVar3 + 0x10);
          *puVar14 = uVar5;
          uVar13 = uVar13 + 0x50;
          puVar14 = puVar14 + 1;
          param_2[2] = param_2[2] + 1;
        }
      }
LAB_0050c548:
      uVar21 = uVar21 + 1;
      lVar22 = lVar22 + 0x1d50;
      lVar23 = lVar23 + 0x35d0;
      uVar20 = uVar20 + 0x70;
    } while (uVar21 < uVar2);
  }
  return;
}



//==== 0050c5e0  ns=tiefunc  size=0xc24
// sig: undefined DrawTie(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(6): 004d676c FUN_004d676c; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004eda68 idol_draw::Insert_WaitCmd_Marker; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 0065fb7c: 'Tie'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tiefunc::DrawTie(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  RsxCmd *pRVar3;
  RsxCmd RVar4;
  bool bVar5;
  RenderingStep *pRVar6;
  RenderingStep *pRVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  RsxCmd RVar11;
  RsxCmd *pRVar13;
  uint uVar14;
  RsxCmd *pRVar15;
  ulonglong uVar12;
  ulonglong uVar16;
  RsxCmd *pRVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 in_LR;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  RsxCmd local_f0 [24];
  
  if ((param_2[2] != 0) && (DAT_0159c369 == '\0')) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"Tie");
    idol_draw::RsxCmd_DebugStr_Marker(DepthPass,"Tie");
    idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,DepthPass,1);
    uVar8 = g_viewMtxPtr;
    pRVar7 = ForwardPass;
    pRVar15 = (RsxCmd *)(*(int *)(param_1 + 0x18) + 0x10);
    lVar25 = 2;
    *ForwardPass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar7->command[1] = 0x14;
    pRVar13 = pRVar7->command + 2;
    pRVar7->command = pRVar13;
    do {
      *pRVar13 = *pRVar15;
      pRVar13 = pRVar7->command;
      pRVar7->command = pRVar13 + 1;
      pRVar17 = pRVar15 + 1;
      pRVar15 = pRVar15 + 2;
      pRVar13[1] = *pRVar17;
      pRVar13 = pRVar7->command + 1;
      pRVar7->command = pRVar13;
      pRVar6 = DepthPass;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    *DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar6->command[1] = 0x206;
    pRVar6->command[2] = 0xff;
    pRVar6->command = pRVar6->command + 3;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar7->command[1] = 1;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar7->command[1] = 0x206;
    pRVar7->command[2] = 1;
    pRVar7->command = pRVar7->command + 3;
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar7->command[1] = 1;
    pRVar7->command = pRVar7->command + 2;
    idol_draw::BindVertexProgram(uVar8,ForwardPass,5);
    idol_draw::BindFragmentProgram(uVar8,ForwardPass,6);
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 0x1832;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    uVar19 = 0;
    iVar18 = -1;
    *ForwardPass->command = 0x41744;
    pRVar7->command[1] = 0x822;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar7->command[1] = 0x444;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 0x1832;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar7->command[1] = 0x822;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x4174c;
    pRVar7->command[1] = 0x444;
    pRVar7->command = pRVar7->command + 2;
    uVar1 = param_2[2];
    if (uVar1 != 0) {
      iVar21 = 0;
      iVar20 = 0;
      do {
        pRVar7 = ForwardPass;
        uVar14 = param_2[1] + iVar20;
        iVar24 = *(int *)(*param_2 + iVar21);
        iVar2 = *(int *)(iVar24 + 0x6c);
        if (*(int *)(iVar24 + 0x50) != iVar18) {
          RVar11 = *(RsxCmd *)(iVar2 + 0x10);
          *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = ForwardPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x14);
          *ForwardPass->command = 0x41684;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = ForwardPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x18);
          *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar7->command[1] = RVar11;
          pRVar7->command[2] = 0x11;
          pRVar7->command = pRVar7->command + 3;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x10);
          *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x14);
          *DepthPass->command = 0x41684;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x18);
          *DepthPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar7->command[1] = RVar11;
          pRVar7->command[2] = 0x11;
          pRVar7->command = pRVar7->command + 3;
          iVar18 = *(int *)(iVar24 + 0x50);
        }
        pRVar7 = ForwardPass;
        auVar26 = *(undefined1 (*) [16])(uVar14 + 0x10 & 0xfffffff0);
        auVar27 = loadVectorLeftIndexed(in_LR,0x50c5b0);
        auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = *(undefined1 (*) [16])(uVar14 + 0x20 & 0xfffffff0);
        auVar30 = vectorMergeHighWord(*(undefined1 (*) [16])(uVar14 & 0xfffffff0),auVar29);
        auVar28 = vectorPermute(*(undefined1 (*) [16])(uVar14 + 0x30 & 0xfffffff0),
                                auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                                _DAT_0050c5c0);
        auVar27 = vectorMergeLowWord(*(undefined1 (*) [16])(uVar14 & 0xfffffff0),auVar29);
        auVar29 = vectorMergeHighWord(auVar26,auVar28);
        auVar26 = vectorMergeLowWord(auVar26,auVar28);
        lVar25 = 8;
        vectorMergeHighWord(auVar30,auVar29);
        vectorMergeLowWord(auVar30,auVar29);
        vectorMergeHighWord(auVar27,auVar26);
        auVar27 = vectorMergeLowWord(auVar27,auVar26);
        vectorLogicalAnd(auVar27,_DAT_0050c5d0);
        pRVar13 = local_f0;
        *ForwardPass->command = 0x441efc;
        pRVar7->command[1] = 4;
        pRVar17 = pRVar7->command + 2;
        pRVar7->command = pRVar17;
        pRVar15 = pRVar13;
        do {
          *pRVar17 = *pRVar15;
          pRVar17 = pRVar7->command;
          pRVar7->command = pRVar17 + 1;
          pRVar3 = pRVar15 + 1;
          pRVar15 = pRVar15 + 2;
          pRVar17[1] = *pRVar3;
          pRVar17 = pRVar7->command + 1;
          pRVar7->command = pRVar17;
          pRVar6 = DepthPass;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 8;
        *DepthPass->command = 0x441efc;
        pRVar6->command[1] = 4;
        pRVar15 = pRVar6->command + 2;
        pRVar6->command = pRVar15;
        do {
          *pRVar15 = *pRVar13;
          pRVar15 = pRVar6->command;
          pRVar6->command = pRVar15 + 1;
          pRVar17 = pRVar13 + 1;
          pRVar13 = pRVar13 + 2;
          pRVar15[1] = *pRVar17;
          pRVar15 = pRVar6->command + 1;
          pRVar6->command = pRVar15;
          pRVar7 = ForwardPass;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        if (DAT_0159c36a == '\0') {
          RVar11 = *(RsxCmd *)(iVar24 + 100);
          *ForwardPass->command = 0x4168c;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar24 + 100);
          *DepthPass->command = 0x4168c;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
        }
        else {
          RVar11 = *(RsxCmd *)(iVar24 + 0x60);
          *ForwardPass->command = 0x4168c;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar24 + 0x60);
          *DepthPass->command = 0x4168c;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
        }
        pRVar7 = ForwardPass;
        uVar14 = 0;
        bVar5 = false;
        *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
        pRVar7->command[1] = 0;
        pRVar7->command = pRVar7->command + 2;
        piVar22 = *(int **)(iVar2 + 0x1c);
        if (*(short *)(iVar2 + 0x28) != 0) {
          do {
            pRVar7 = ForwardPass;
            iVar24 = *piVar22;
            if (*(char *)(iVar24 + 0x20) == -1) {
              if (!bVar5) {
                *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
                pRVar7->command[1] = 1;
                pRVar7->command = pRVar7->command + 2;
              }
              bVar5 = true;
            }
            else {
              if (bVar5) {
                *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
                pRVar7->command[1] = 0;
                pRVar7->command = pRVar7->command + 2;
                iVar24 = *piVar22;
              }
              FUN_004d676c(DepthPass,0,iVar24,(ulonglong)*(byte *)((int)piVar22 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)piVar22 + 0x17) << 0x20) >> 0x22 & 3);
              pRVar7 = DepthPass;
              *DepthPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = DepthPass;
              RVar11 = piVar22[2];
              uVar10 = (ulonglong)RVar11;
              lVar25 = 0x100 - ((ulonglong)RVar11 & 0xff);
              uVar12 = (ulonglong)(uint)piVar22[3] - lVar25;
              pRVar15 = DepthPass->command;
              uVar16 = lVar25 + (uVar12 & (longlong)((int)uVar12 >> 0x1f));
              uVar9 = (uint)piVar22[3] - uVar16;
              uVar9 = uVar9 & ~(longlong)((int)uVar9 >> 0x1f);
              uVar23 = uVar9 - (uVar9 & 0xffffff00);
              uVar12 = (uVar9 << 0x20) >> 0x28;
              iVar24 = (int)uVar23;
              DepthPass->command = pRVar15 + 1;
              *pRVar15 = (((uint)uVar9 >> 8) + ((uint)LZCOUNT(iVar24) >> 5 ^ 1) +
                         ((uint)LZCOUNT((int)uVar16) >> 5 ^ 1)) * 0x40000 | 0x40001824;
              if ((int)uVar16 != 0) {
                pRVar15 = pRVar7->command;
                uVar10 = uVar16 + uVar10;
                pRVar7->command = pRVar15 + 1;
                *pRVar15 = RVar11 | (int)((uVar16 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar11 = (RsxCmd)uVar10;
              if ((uint)uVar9 >> 8 != 0) {
                do {
                  pRVar15 = pRVar7->command;
                  RVar4 = (RsxCmd)uVar10;
                  uVar12 = uVar12 - 1;
                  uVar10 = uVar10 + 0x100;
                  RVar11 = (RsxCmd)uVar10;
                  pRVar7->command = pRVar15 + 1;
                  *pRVar15 = RVar4 | 0xff000000;
                } while (0 < (int)uVar12);
              }
              if (iVar24 != 0) {
                pRVar15 = pRVar7->command;
                pRVar7->command = pRVar15 + 1;
                *pRVar15 = RVar11 | (int)((uVar23 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = DepthPass;
              bVar5 = false;
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
            }
            FUN_004d676c(ForwardPass,0,*piVar22,(ulonglong)*(byte *)((int)piVar22 + 0x17) & 3,
                         ((ulonglong)*(byte *)((int)piVar22 + 0x17) << 0x20) >> 0x22 & 3);
            pRVar7 = ForwardPass;
            *ForwardPass->command = 0x400c1714;
            pRVar7->command[1] = 0;
            pRVar7->command[2] = 0;
            pRVar7->command[3] = 0;
            pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
            pRVar7->command[5] = 5;
            pRVar7->command = pRVar7->command + 6;
            pRVar7 = ForwardPass;
            RVar11 = piVar22[2];
            uVar10 = (ulonglong)RVar11;
            lVar25 = 0x100 - ((ulonglong)RVar11 & 0xff);
            uVar12 = (ulonglong)(uint)piVar22[3] - lVar25;
            pRVar15 = ForwardPass->command;
            uVar16 = lVar25 + (uVar12 & (longlong)((int)uVar12 >> 0x1f));
            uVar9 = (uint)piVar22[3] - uVar16;
            uVar9 = uVar9 & ~(longlong)((int)uVar9 >> 0x1f);
            uVar23 = uVar9 - (uVar9 & 0xffffff00);
            uVar12 = (uVar9 << 0x20) >> 0x28;
            iVar24 = (int)uVar23;
            ForwardPass->command = pRVar15 + 1;
            *pRVar15 = (((uint)uVar9 >> 8) + ((uint)LZCOUNT(iVar24) >> 5 ^ 1) +
                       ((uint)LZCOUNT((int)uVar16) >> 5 ^ 1)) * 0x40000 | 0x40001824;
            if ((int)uVar16 != 0) {
              pRVar15 = pRVar7->command;
              uVar10 = uVar16 + uVar10;
              pRVar7->command = pRVar15 + 1;
              *pRVar15 = RVar11 | (int)((uVar16 & 0xffffffff) << 0x18) - 0x1000000;
            }
            RVar11 = (RsxCmd)uVar10;
            if ((uint)uVar9 >> 8 != 0) {
              do {
                pRVar15 = pRVar7->command;
                RVar4 = (RsxCmd)uVar10;
                uVar12 = uVar12 - 1;
                uVar10 = uVar10 + 0x100;
                RVar11 = (RsxCmd)uVar10;
                pRVar7->command = pRVar15 + 1;
                *pRVar15 = RVar4 | 0xff000000;
              } while (0 < (int)uVar12);
            }
            if (iVar24 != 0) {
              pRVar15 = pRVar7->command;
              pRVar7->command = pRVar15 + 1;
              *pRVar15 = RVar11 | (int)((uVar23 & 0xffffffff) << 0x18) - 0x1000000;
            }
            pRVar7 = ForwardPass;
            uVar14 = uVar14 + 1;
            piVar22 = piVar22 + 6;
            *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
            pRVar7->command[1] = 0;
            pRVar7->command = pRVar7->command + 2;
          } while (uVar14 < *(ushort *)(iVar2 + 0x28));
        }
        uVar19 = uVar19 + 1;
        iVar21 = iVar21 + 4;
        iVar20 = iVar20 + 0x50;
      } while (uVar19 < uVar1);
    }
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x41744;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    idol_draw::RsxCmd_WritePass(ForwardPass);
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41748;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    idol_draw::RsxCmd_WritePass(DepthPass);
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar7->command[1] = 0;
    pRVar7->command = pRVar7->command + 2;
  }
  return;
}



//==== 0050d240  ns=Global  size=0x114c
// sig: undefined FUN_0050d240(void)
// callers(0): 
// callees(7): 004d676c FUN_004d676c; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004eda68 idol_draw::Insert_WaitCmd_Marker; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass; 0060444c FUN_0060444c
// strings: 0065fb7c: 'Tie'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050d240(int param_1,int *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  RsxCmd *pRVar5;
  RsxCmd RVar6;
  RenderingStep *pRVar7;
  RenderingStep *pRVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  RsxCmd RVar12;
  ulonglong uVar11;
  int iVar13;
  RsxCmd *pRVar14;
  RsxCmd *pRVar15;
  RsxCmd *pRVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  RsxCmd RVar21;
  byte bVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  undefined4 *puVar26;
  undefined8 in_LR;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  RsxCmd local_120 [32];
  uint local_a0;
  int local_98;
  
  if ((param_2[2] != 0) && (DAT_0159c369 == '\0')) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"Tie");
    idol_draw::RsxCmd_DebugStr_Marker(DepthPass,"Tie");
    uVar9 = g_viewMtxPtr;
    idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,DepthPass,1);
    pRVar7 = DepthPass;
    lVar27 = 2;
    *DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar7->command[1] = 0x206;
    pRVar7->command[2] = 0xff;
    pRVar7->command = pRVar7->command + 3;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar7->command[1] = 1;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    pRVar16 = (RsxCmd *)(*(int *)(param_1 + 0x18) + 0x10);
    *ForwardPass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar7->command[1] = 0x14;
    pRVar14 = pRVar7->command + 2;
    pRVar7->command = pRVar14;
    do {
      *pRVar14 = *pRVar16;
      pRVar14 = pRVar7->command;
      pRVar7->command = pRVar14 + 1;
      pRVar15 = pRVar16 + 1;
      pRVar16 = pRVar16 + 2;
      pRVar14[1] = *pRVar15;
      pRVar14 = pRVar7->command + 1;
      pRVar7->command = pRVar14;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    idol_draw::BindVertexProgram(uVar9,ForwardPass,6);
    idol_draw::BindFragmentProgram(uVar9,ForwardPass,6);
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_TRANSFORM_BRANCH_BITS_x1;
    pRVar7->command[1] = 0;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    bVar20 = 0;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    bVar22 = 0;
    pRVar7->command[1] = 0x1832;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    RVar21 = 0;
    *ForwardPass->command = 0x41744;
    pRVar7->command[1] = 0x822;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar7->command[1] = 0x444;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 0x1832;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar7->command[1] = 0x822;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x4174c;
    bVar2 = 0;
    pRVar7->command[1] = 0x444;
    pRVar7->command = pRVar7->command + 2;
    uVar3 = param_2[2];
    FUN_0060444c(param_3);
    local_a0 = 0;
    local_98 = -1;
    if (uVar3 != 0) {
      iVar17 = 0;
      iVar13 = 0;
      do {
        pRVar7 = ForwardPass;
        uVar23 = param_2[1] + iVar13;
        iVar25 = *(int *)(*param_2 + iVar17);
        iVar4 = *(int *)(iVar25 + 0x6c);
        if (*(int *)(iVar25 + 0x50) != local_98) {
          RVar12 = *(RsxCmd *)(iVar4 + 0x10);
          *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = ForwardPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x14);
          *ForwardPass->command = 0x41684;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = ForwardPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x18);
          *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar7->command[1] = RVar12;
          pRVar7->command[2] = 0x11;
          pRVar7->command = pRVar7->command + 3;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x10);
          *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x14);
          *DepthPass->command = 0x41684;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x18);
          *DepthPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar7->command[1] = RVar12;
          pRVar7->command[2] = 0x11;
          pRVar7->command = pRVar7->command + 3;
          pRVar7 = ForwardPass;
          bVar1 = *(byte *)(iVar4 + 0x34);
          local_98 = *(int *)(iVar25 + 0x50);
          if (bVar1 != bVar2) {
            *ForwardPass->command = 0x41744;
            RVar12 = (RsxCmd)((((LZCOUNT(-(uint)bVar1) << 0x3a) >> 0x3f & 0xfffffffffffffff8U) +
                               0x10 & 0xffffffff) << 8) | 0x22;
            pRVar7->command[1] = RVar12;
            pRVar7->command = pRVar7->command + 2;
            pRVar7 = DepthPass;
            *DepthPass->command = 0x41744;
            pRVar7->command[1] = RVar12;
            pRVar7->command = pRVar7->command + 2;
            bVar2 = *(byte *)(iVar4 + 0x34);
          }
        }
        pRVar7 = ForwardPass;
        auVar28 = *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0);
        auVar29 = loadVectorLeftIndexed(in_LR,0x50d210);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = *(undefined1 (*) [16])(uVar23 + 0x20 & 0xfffffff0);
        auVar32 = vectorMergeHighWord(*(undefined1 (*) [16])(uVar23 & 0xfffffff0),auVar31);
        auVar30 = vectorPermute(*(undefined1 (*) [16])(uVar23 + 0x30 & 0xfffffff0),
                                auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                                _DAT_0050d220);
        auVar29 = vectorMergeLowWord(*(undefined1 (*) [16])(uVar23 & 0xfffffff0),auVar31);
        auVar31 = vectorMergeHighWord(auVar28,auVar30);
        auVar28 = vectorMergeLowWord(auVar28,auVar30);
        lVar27 = 8;
        vectorMergeHighWord(auVar32,auVar31);
        vectorMergeLowWord(auVar32,auVar31);
        vectorMergeHighWord(auVar29,auVar28);
        auVar29 = vectorMergeLowWord(auVar29,auVar28);
        pRVar14 = local_120;
        vectorLogicalAnd(auVar29,_DAT_0050d230);
        *ForwardPass->command = 0x441efc;
        pRVar7->command[1] = 4;
        pRVar15 = pRVar7->command + 2;
        pRVar7->command = pRVar15;
        pRVar16 = pRVar14;
        do {
          *pRVar15 = *pRVar16;
          pRVar15 = pRVar7->command;
          pRVar7->command = pRVar15 + 1;
          pRVar5 = pRVar16 + 1;
          pRVar16 = pRVar16 + 2;
          pRVar15[1] = *pRVar5;
          pRVar15 = pRVar7->command + 1;
          pRVar7->command = pRVar15;
          pRVar8 = DepthPass;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 8;
        *DepthPass->command = 0x441efc;
        pRVar8->command[1] = 4;
        pRVar16 = pRVar8->command + 2;
        pRVar8->command = pRVar16;
        do {
          *pRVar16 = *pRVar14;
          pRVar16 = pRVar8->command;
          pRVar8->command = pRVar16 + 1;
          pRVar15 = pRVar14 + 1;
          pRVar14 = pRVar14 + 2;
          pRVar16[1] = *pRVar15;
          pRVar16 = pRVar8->command + 1;
          pRVar8->command = pRVar16;
          pRVar7 = ForwardPass;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        if (DAT_0159c36a == '\0') {
          RVar12 = *(RsxCmd *)(iVar25 + 100);
          *ForwardPass->command = 0x4168c;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar25 + 100);
          *DepthPass->command = 0x4168c;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
        }
        else {
          RVar12 = *(RsxCmd *)(iVar25 + 0x60);
          *ForwardPass->command = 0x4168c;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar25 + 0x60);
          *DepthPass->command = 0x4168c;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
        }
        puVar26 = *(undefined4 **)(iVar4 + 0x1c);
        uVar23 = 0;
        if (*(short *)(iVar4 + 0x28) != 0) {
          do {
            if (*(byte *)(puVar26 + 5) != bVar20) {
              FUN_0060444c((ulonglong)*(byte *)(puVar26 + 5) * 0x40 + param_3 & 0xffffffff);
              bVar20 = *(byte *)(puVar26 + 5);
            }
            if (*(byte *)((int)puVar26 + 0x16) != bVar22) {
              idol_draw::BindFragmentProgram
                        (uVar9,ForwardPass,
                         *(undefined4 *)(&DAT_00903004 + (uint)*(byte *)((int)puVar26 + 0x16) * 8));
              pRVar7 = ForwardPass;
              iVar25 = *(int *)(&DAT_00903008 + (uint)*(byte *)((int)puVar26 + 0x16) * 8);
              if (iVar25 < 1) {
                if (-1 < iVar25) {
                  *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
                  pRVar7->command[1] = 0x3020302;
                  pRVar7->command[2] = 0x3030303;
                  pRVar7->command = pRVar7->command + 3;
                }
              }
              else if (iVar25 < 2) {
                *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
                pRVar7->command[1] = 0x10001;
                pRVar7->command[2] = 0;
                pRVar7->command = pRVar7->command + 3;
              }
              else if (iVar25 < 3) {
                *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
                pRVar7->command[1] = 0x3020302;
                pRVar7->command[2] = 0x10001;
                pRVar7->command = pRVar7->command + 3;
              }
              bVar22 = *(byte *)((int)puVar26 + 0x16);
            }
            pRVar7 = ForwardPass;
            bVar1 = *(byte *)((int)puVar26 + 0x15);
            if (bVar1 != RVar21) {
              *ForwardPass->command = NV4097_SET_TRANSFORM_BRANCH_BITS_x1;
              pRVar7->command[1] = (uint)bVar1;
              pRVar7->command = pRVar7->command + 2;
              RVar21 = (RsxCmd)*(byte *)((int)puVar26 + 0x15);
            }
            if (puVar26[1] == -1) {
              FUN_004d676c(ForwardPass,0,*puVar26,(ulonglong)*(byte *)((int)puVar26 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x22 & 3);
              pRVar7 = ForwardPass;
              *ForwardPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = ForwardPass;
              RVar12 = puVar26[2];
              uVar11 = (ulonglong)RVar12;
              lVar27 = 0x100 - ((ulonglong)RVar12 & 0xff);
              uVar18 = (ulonglong)(uint)puVar26[3] - lVar27;
              uVar10 = lVar27 + (uVar18 & (longlong)((int)uVar18 >> 0x1f));
              uVar19 = (uint)puVar26[3] - uVar10;
              uVar19 = uVar19 & ~(longlong)((int)uVar19 >> 0x1f);
              pRVar16 = ForwardPass->command;
              uVar18 = (uVar19 << 0x20) >> 0x28;
              uVar24 = uVar19 - (uVar19 & 0xffffff00);
              iVar25 = (int)uVar24;
              ForwardPass->command = pRVar16 + 1;
              *pRVar16 = (((uint)uVar19 >> 8) + ((uint)LZCOUNT(iVar25) >> 5 ^ 1) +
                         ((uint)LZCOUNT((int)uVar10) >> 5 ^ 1)) * 0x40000 | 0x40001824;
              if ((int)uVar10 != 0) {
                pRVar16 = pRVar7->command;
                uVar11 = uVar10 + uVar11;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar12 = (RsxCmd)uVar11;
              if ((uint)uVar19 >> 8 != 0) {
                do {
                  pRVar16 = pRVar7->command;
                  RVar6 = (RsxCmd)uVar11;
                  uVar18 = uVar18 - 1;
                  uVar11 = uVar11 + 0x100;
                  RVar12 = (RsxCmd)uVar11;
                  pRVar7->command = pRVar16 + 1;
                  *pRVar16 = RVar6 | 0xff000000;
                } while (0 < (int)uVar18);
              }
              if (iVar25 != 0) {
                pRVar16 = pRVar7->command;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar24 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = ForwardPass;
              *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
              FUN_004d676c(DepthPass,0,*puVar26,(ulonglong)*(byte *)((int)puVar26 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x22 & 3);
              pRVar7 = DepthPass;
              *DepthPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = DepthPass;
              RVar12 = puVar26[2];
              uVar11 = (ulonglong)RVar12;
              lVar27 = 0x100 - ((ulonglong)RVar12 & 0xff);
              uVar18 = (ulonglong)(uint)puVar26[3] - lVar27;
              uVar10 = lVar27 + (uVar18 & (longlong)((int)uVar18 >> 0x1f));
              uVar19 = (uint)puVar26[3] - uVar10;
              pRVar16 = DepthPass->command;
              uVar19 = uVar19 & ~(longlong)((int)uVar19 >> 0x1f);
              uVar24 = uVar19 - (uVar19 & 0xffffff00);
              uVar18 = (uVar19 << 0x20) >> 0x28;
              iVar25 = (int)uVar24;
              DepthPass->command = pRVar16 + 1;
              *pRVar16 = (((uint)uVar19 >> 8) + ((uint)LZCOUNT(iVar25) >> 5 ^ 1) +
                         ((uint)LZCOUNT((int)uVar10) >> 5 ^ 1)) * 0x40000 | 0x40001824;
              if ((int)uVar10 != 0) {
                pRVar16 = pRVar7->command;
                uVar11 = uVar10 + uVar11;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar12 = (RsxCmd)uVar11;
              if ((uint)uVar19 >> 8 != 0) {
                do {
                  pRVar16 = pRVar7->command;
                  RVar6 = (RsxCmd)uVar11;
                  uVar18 = uVar18 - 1;
                  uVar11 = uVar11 + 0x100;
                  RVar12 = (RsxCmd)uVar11;
                  pRVar7->command = pRVar16 + 1;
                  *pRVar16 = RVar6 | 0xff000000;
                } while (0 < (int)uVar18);
              }
              if (iVar25 != 0) {
                pRVar16 = pRVar7->command;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar24 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = DepthPass;
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
            }
            else {
              FUN_004d676c(ForwardPass,0,*puVar26,(ulonglong)*(byte *)((int)puVar26 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x22 & 3);
              FUN_004d676c(ForwardPass,1,puVar26[1],
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x24 & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x26);
              pRVar7 = ForwardPass;
              *ForwardPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = ForwardPass;
              RVar12 = puVar26[2];
              uVar11 = (ulonglong)RVar12;
              lVar27 = 0x100 - ((ulonglong)RVar12 & 0xff);
              uVar18 = (ulonglong)(uint)puVar26[3] - lVar27;
              uVar10 = lVar27 + (uVar18 & (longlong)((int)uVar18 >> 0x1f));
              uVar19 = (uint)puVar26[3] - uVar10;
              pRVar16 = ForwardPass->command;
              uVar19 = uVar19 & ~(longlong)((int)uVar19 >> 0x1f);
              uVar24 = uVar19 - (uVar19 & 0xffffff00);
              uVar18 = (uVar19 << 0x20) >> 0x28;
              iVar25 = (int)uVar24;
              ForwardPass->command = pRVar16 + 1;
              *pRVar16 = (((uint)uVar19 >> 8) + ((uint)LZCOUNT(iVar25) >> 5 ^ 1) +
                         ((uint)LZCOUNT((int)uVar10) >> 5 ^ 1)) * 0x40000 | 0x40001824;
              if ((int)uVar10 != 0) {
                pRVar16 = pRVar7->command;
                uVar11 = uVar10 + uVar11;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar12 = (RsxCmd)uVar11;
              if ((uint)uVar19 >> 8 != 0) {
                do {
                  pRVar16 = pRVar7->command;
                  RVar6 = (RsxCmd)uVar11;
                  uVar18 = uVar18 - 1;
                  uVar11 = uVar11 + 0x100;
                  RVar12 = (RsxCmd)uVar11;
                  pRVar7->command = pRVar16 + 1;
                  *pRVar16 = RVar6 | 0xff000000;
                } while (0 < (int)uVar18);
              }
              if (iVar25 != 0) {
                pRVar16 = pRVar7->command;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar24 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = ForwardPass;
              *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
              FUN_004d676c(DepthPass,0,*puVar26,(ulonglong)*(byte *)((int)puVar26 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x22 & 3);
              FUN_004d676c(DepthPass,1,puVar26[1],
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x24 & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x26);
              pRVar7 = DepthPass;
              *DepthPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = DepthPass;
              RVar12 = puVar26[2];
              uVar11 = (ulonglong)RVar12;
              lVar27 = 0x100 - ((ulonglong)RVar12 & 0xff);
              uVar18 = (ulonglong)(uint)puVar26[3] - lVar27;
              uVar10 = lVar27 + (uVar18 & (longlong)((int)uVar18 >> 0x1f));
              uVar19 = (uint)puVar26[3] - uVar10;
              uVar19 = uVar19 & ~(longlong)((int)uVar19 >> 0x1f);
              pRVar16 = DepthPass->command;
              uVar18 = (uVar19 << 0x20) >> 0x28;
              uVar24 = uVar19 - (uVar19 & 0xffffff00);
              iVar25 = (int)uVar24;
              DepthPass->command = pRVar16 + 1;
              *pRVar16 = (((uint)uVar19 >> 8) + ((uint)LZCOUNT(iVar25) >> 5 ^ 1) +
                         ((uint)LZCOUNT((int)uVar10) >> 5 ^ 1)) * 0x40000 | 0x40001824;
              if ((int)uVar10 != 0) {
                pRVar16 = pRVar7->command;
                uVar11 = uVar10 + uVar11;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar12 = (RsxCmd)uVar11;
              if ((uint)uVar19 >> 8 != 0) {
                do {
                  pRVar16 = pRVar7->command;
                  RVar6 = (RsxCmd)uVar11;
                  uVar18 = uVar18 - 1;
                  uVar11 = uVar11 + 0x100;
                  RVar12 = (RsxCmd)uVar11;
                  pRVar7->command = pRVar16 + 1;
                  *pRVar16 = RVar6 | 0xff000000;
                } while (0 < (int)uVar18);
              }
              if (iVar25 != 0) {
                pRVar16 = pRVar7->command;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar24 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = DepthPass;
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
            }
            uVar23 = uVar23 + 1;
            puVar26 = puVar26 + 6;
          } while (uVar23 < *(ushort *)(iVar4 + 0x28));
        }
        local_a0 = local_a0 + 1;
        iVar13 = iVar13 + 0x50;
        iVar17 = iVar17 + 4;
      } while (local_a0 < uVar3);
    }
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x41744;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    pRVar7->command[1] = 0x3020302;
    pRVar7->command[2] = 0x3030303;
    pRVar7->command = pRVar7->command + 3;
    idol_draw::RsxCmd_WritePass(ForwardPass);
    idol_draw::RsxCmd_WritePass(DepthPass);
  }
  return;
}



//==== 0050e390  ns=Global  size=0x3c
// sig: undefined FUN_0050e390(void)
// callers(0): 
// callees(0): 

void FUN_0050e390(undefined1 *param_1)

{
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



//==== 0050e3cc  ns=Global  size=0x3c
// sig: undefined FUN_0050e3cc(void)
// callers(0): 
// callees(0): 

void FUN_0050e3cc(undefined1 *param_1)

{
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



//==== 0050e408  ns=Global  size=0x3c
// sig: undefined FUN_0050e408(void)
// callers(0): 
// callees(0): 

void FUN_0050e408(undefined1 *param_1)

{
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



//==== 0050e444  ns=Global  size=0x40
// sig: undefined FUN_0050e444(void)
// callers(0): 
// callees(0): 

void FUN_0050e444(undefined1 *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *(undefined2 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



//==== 0050e484  ns=Global  size=0x40
// sig: undefined FUN_0050e484(void)
// callers(0): 
// callees(0): 

void FUN_0050e484(undefined1 *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *(undefined2 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



//==== 0050e4c4  ns=Global  size=0x18
// sig: undefined FUN_0050e4c4(void)
// callers(1): 00504468 FUN_00504468
// callees(0): 

int FUN_0050e4c4(int param_1)

{
  return param_1 + *(short *)(param_1 + 6) + 0x10;
}



//==== 0050e4dc  ns=Global  size=0x1c
// sig: undefined FUN_0050e4dc(void)
// callers(0): 
// callees(0): 

int FUN_0050e4dc(int param_1)

{
  return (*(int *)(param_1 + 8) - (int)*(short *)(param_1 + 6)) + -0x10;
}



//==== 0050e4f8  ns=Global  size=0x34
// sig: undefined FUN_0050e4f8(void)
// callers(1): 00504468 FUN_00504468
// callees(0): 

undefined8 FUN_0050e4f8(char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((*param_1 == 'I') && (param_1[1] == 'D')) && (param_1[2] == 'M')) {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 0050e52c  ns=Global  size=0xc
// sig: undefined FUN_0050e52c(void)
// callers(1): 00504468 FUN_00504468
// callees(0): 

undefined2 FUN_0050e52c(int param_1)

{
  return *(undefined2 *)(param_1 + 4);
}



//==== 0050e538  ns=Global  size=0x30
// sig: undefined FUN_0050e538(void)
// callers(3): 0050e594 FUN_0050e594; 0050e5f4 FUN_0050e5f4; 0050e6d8 FUN_0050e6d8
// callees(0): 

ulonglong FUN_0050e538(int param_1,int param_2)

{
  return (LZCOUNT(param_2 - *(short *)(param_1 + 4)) << 0x3a) >> 0x3f & 1;
}



//==== 0050e568  ns=Global  size=0xc
// sig: undefined FUN_0050e568(void)
// callers(3): 0050e5f4 FUN_0050e5f4; 0050e664 FUN_0050e664; 0050e6d8 FUN_0050e6d8
// callees(0): 

undefined4 FUN_0050e568(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



//==== 0050e574  ns=Global  size=0xc
// sig: undefined FUN_0050e574(void)
// callers(1): 00504468 FUN_00504468
// callees(0): 

void FUN_0050e574(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



//==== 0050e580  ns=Global  size=0xc
// sig: undefined FUN_0050e580(void)
// callers(0): 
// callees(0): 

void FUN_0050e580(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



//==== 0050e58c  ns=Global  size=0x8
// sig: undefined FUN_0050e58c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0050e58c(undefined4 *param_1)

{
  return *param_1;
}



//==== 0050e594  ns=Global  size=0x60
// sig: undefined FUN_0050e594(void)
// callers(1): 00504468 FUN_00504468
// callees(1): 0050e538 FUN_0050e538

undefined8 FUN_0050e594(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0050e538(param_2,0);
  if (iVar1 == 0) {
    *param_1 = (int)param_2;
  }
  else {
    param_2 = 0;
    *param_1 = 0;
  }
  return param_2;
}



//==== 0050e5f4  ns=Global  size=0x70
// sig: undefined FUN_0050e5f4(void)
// callers(1): 00504468 FUN_00504468
// callees(2): 0050e538 FUN_0050e538; 0050e568 FUN_0050e568

int FUN_0050e5f4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = FUN_0050e568(iVar2);
  iVar2 = iVar2 + iVar1;
  *param_1 = iVar2;
  iVar1 = FUN_0050e538(iVar2,0);
  iVar2 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 0;
    *param_1 = 0;
  }
  return iVar2;
}



//==== 0050e664  ns=Global  size=0x74
// sig: undefined FUN_0050e664(void)
// callers(0): 
// callees(1): 0050e568 FUN_0050e568

int FUN_0050e664(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = param_1[1];
  if (param_1[1] != *param_1) {
    do {
      iVar3 = iVar1;
      iVar2 = FUN_0050e568();
      iVar1 = iVar3 + iVar2;
    } while (iVar3 + iVar2 != *param_1);
    if (iVar3 != 0) {
      *param_1 = iVar3;
    }
  }
  return iVar3;
}



//==== 0050e6d8  ns=Global  size=0xbc
// sig: undefined FUN_0050e6d8(void)
// callers(0): 
// callees(2): 0050e538 FUN_0050e538; 0050e568 FUN_0050e568

undefined4 FUN_0050e6d8(undefined4 *param_1,ulonglong param_2)

{
  int iVar2;
  longlong lVar1;
  undefined4 uVar3;
  
  iVar2 = FUN_0050e538(param_2,0);
  if (iVar2 == 0) {
    iVar2 = (int)param_2;
    param_1[1] = iVar2;
    while (iVar2 != 0) {
      *param_1 = (int)param_2;
      lVar1 = FUN_0050e568(param_2);
      param_2 = param_2 + lVar1 & 0xffffffff;
      iVar2 = FUN_0050e538(param_2,0);
      param_2 = (LZCOUNT(-iVar2) << 0x3a) >> 0x3f & param_2;
      iVar2 = (int)param_2;
    }
    uVar3 = *param_1;
  }
  else {
    uVar3 = 0;
    *param_1 = 0;
  }
  return uVar3;
}



//==== 0050e794  ns=Global  size=0x10
// sig: undefined FUN_0050e794(void)
// callers(1): 004d7464 FUN_004d7464
// callees(0): 

undefined4 FUN_0050e794(void)

{
  return *(undefined4 *)(*(int *)PTR_DAT_0071a904 + 8);
}



//==== 0050e7a4  ns=Global  size=0xc
// sig: undefined FUN_0050e7a4(void)
// callers(0): 
// callees(0): 

void FUN_0050e7a4(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071a908 + 0xc) = param_1;
  return;
}



//==== 0050e7b0  ns=Global  size=0x28
// sig: undefined FUN_0050e7b0(void)
// callers(0): 
// callees(0): 

void FUN_0050e7b0(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0071a908;
  puVar1 = PTR_DAT_0071a904;
  *(int *)PTR_DAT_0071a908 = param_1;
  *(undefined **)puVar1 = puVar2;
  *(uint *)(puVar2 + 4) = (param_2 & 0xfffffffc) + param_1 + -4;
  *(int *)(puVar2 + 8) = param_1;
  return;
}



//==== 0050e7d8  ns=Global  size=0x20
// sig: undefined FUN_0050e7d8(void)
// callers(0): 
// callees(0): 

void FUN_0050e7d8(int *param_1,int param_2,uint param_3,int param_4)

{
  param_1[3] = param_4;
  *param_1 = param_2;
  param_1[2] = param_2;
  param_1[1] = (param_3 & 0xfffffffc) + param_2 + -4;
  return;
}



//==== 0050e7f8  ns=Global  size=0xe4
// sig: undefined FUN_0050e7f8(void)
// callers(0): 
// callees(1): 0064f404 cell::_cellGcmSetFlipCommandWithWaitLabel

undefined4 FUN_0050e7f8(int param_1,uint param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (7 < param_2) {
    return 0x802100ff;
  }
  if ((*(uint *)(param_1 + 4) < *(int *)(param_1 + 8) + 0x5cU) &&
     (iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,0x17), iVar1 != 0)) {
    return 0x802100ff;
  }
  cell::_cellGcmSetFlipCommandWithWaitLabel(param_1,param_2 & 0xff,param_3,param_4);
  return 0;
}



//==== 0050e8dc  ns=idol  size=0xbc
// sig: undefined GcmFlipCommand_Thunk(void)
// callers(1): 004ddba8 idol_draw::BuildAndFlipFrame
// callees(1): 0064f284 cell::_cellGcmSetFlipCommand

undefined4 idol::GcmFlipCommand_Thunk(int param_1,uint param_2)

{
  int iVar1;
  
  if (7 < param_2) {
    return 0x802100ff;
  }
  if ((*(uint *)(param_1 + 4) < *(int *)(param_1 + 8) + 0x4cU) &&
     (iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,0x13), iVar1 != 0)) {
    return 0x802100ff;
  }
  cell::_cellGcmSetFlipCommand(param_1,param_2 & 0xff);
  return 0;
}



//==== 0050e998  ns=Global  size=0x160
// sig: undefined FUN_0050e998(void)
// callers(0): 
// callees(0): 

void FUN_0050e998(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  uVar8 = 0;
  lVar7 = 0;
  pcVar2 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = (int)pcVar2 - (int)param_2;
    uVar8 = ((ulonglong)(uVar6 + 3) << 0x20) >> 0x22;
    lVar7 = uVar8 << 2;
  }
  puVar3 = *(uint **)(param_1 + 8);
  if ((ulonglong)*(uint *)(param_1 + 4) < (lVar7 + ZEXT48(puVar3) + 8 & 0xffffffff)) {
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,uVar8 + 2);
    if (iVar1 != 0) {
      return;
    }
    puVar3 = *(uint **)(param_1 + 8);
  }
  *puVar3 = ((int)uVar8 + 1) * 0x40000 | 0x40000100;
  puVar3[1] = 0x68750001;
  if ((uVar6 & 3) != 0) {
    *(undefined4 *)((int)puVar3 + (int)lVar7 + 4) = 0;
  }
  if (uVar6 != 0) {
    uVar4 = 0;
    do {
      uVar5 = uVar4 + 4;
      *(undefined4 *)((int)puVar3 + uVar4 + 8) = *(undefined4 *)(param_2 + uVar4);
      uVar4 = uVar5;
    } while (uVar5 < uVar6);
  }
  *(int *)(param_1 + 8) = (int)puVar3 + (int)lVar7 + 8;
  return;
}



//==== 0050eaf8  ns=idol_draw  size=0x164
// sig: undefined RsxCmd_DebugStr_Marker(void)
// callers(19): 0006b638 draw::ExecutePostDraws; 0006b7a8 draw::ExecutePostPreDraws; 0006ba90 draw::ExecutePreDraws; 0006bb78 draw::DefaultDraw; 000d93c0 initsky::InitSky; 0013de20 pause::FrontEnd_DrawMenu; 0014b5f4 pause::DrawGalacticMapFrame; 0017dd20 water::OceanPass; 0017e700 water::OceanSpecialPass; 0017ec40 water::IcePass; 004d93ac idol_draw::Render_SetupPasses; 004dafe8 idol_draw::Gfx_DrawSurface; 004db930 idol_draw::Gfx_DrawStereoSurface; 004eda68 idol_draw::Insert_WaitCmd_Marker; 00508c10 shrubfunc::DrawShrub; 00509d60 FUN_00509d60; 0050b0bc tfragfunc::DrawTfrag; 0050c5e0 tiefunc::DrawTie; 0050d240 FUN_0050d240
// callees(0): 

void idol_draw::RsxCmd_DebugStr_Marker(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  uVar8 = 0;
  lVar7 = 0;
  pcVar2 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = (int)pcVar2 - (int)param_2;
    uVar8 = ((ulonglong)(uVar6 + 3) << 0x20) >> 0x22;
    lVar7 = uVar8 << 2;
  }
  puVar3 = *(uint **)(param_1 + 8);
  if ((ulonglong)*(uint *)(param_1 + 4) < (lVar7 + ZEXT48(puVar3) + 8 & 0xffffffff)) {
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,uVar8 + 2);
    if (iVar1 != 0) {
      return;
    }
    puVar3 = *(uint **)(param_1 + 8);
  }
  *puVar3 = ((int)uVar8 + 1) * 0x40000 | 0x40000100;
  puVar3[1] = 0x68750002;
  if ((uVar6 & 3) != 0) {
    *(undefined4 *)((int)puVar3 + (int)lVar7 + 4) = 0;
  }
  if (uVar6 != 0) {
    uVar4 = 0;
    do {
      uVar5 = uVar4 + 4;
      *(undefined4 *)((int)puVar3 + uVar4 + 8) = *(undefined4 *)(param_2 + uVar4);
      uVar4 = uVar5;
    } while (uVar5 < uVar6);
  }
  *(int *)(param_1 + 8) = (int)puVar3 + (int)lVar7 + 8;
  return;
}



//==== 0050ec5c  ns=idol_draw  size=0x90
// sig: undefined RsxCmd_WritePass(RenderingStep * STEP)
// callers(21): 0006b638 draw::ExecutePostDraws; 0006b7a8 draw::ExecutePostPreDraws; 0006ba90 draw::ExecutePreDraws; 0006bb78 draw::DefaultDraw; 000d93c0 initsky::InitSky; 000f1974 mobyfunc::DrawMobyList; 000f1a78 mobyfunc::DrawMobys; 0013de20 pause::FrontEnd_DrawMenu; 0014b5f4 pause::DrawGalacticMapFrame; 0017dd20 water::OceanPass; 0017e700 water::OceanSpecialPass; 0017ec40 water::IcePass; 004dafe8 idol_draw::Gfx_DrawSurface; 004db930 idol_draw::Gfx_DrawStereoSurface; 004ddba8 idol_draw::BuildAndFlipFrame; 004eda68 idol_draw::Insert_WaitCmd_Marker; 00508c10 shrubfunc::DrawShrub; 00509d60 FUN_00509d60; 0050b0bc tfragfunc::DrawTfrag; 0050c5e0 tiefunc::DrawTie; 0050d240 FUN_0050d240
// callees(0): 

void idol_draw::RsxCmd_WritePass(RenderingStep *STEP)

{
  int iVar1;
  RsxCmd *pRVar2;
  
  pRVar2 = STEP->command;
  if ((RsxCmd *)STEP->commandLen < pRVar2 + 2) {
    iVar1 = (**(code **)STEP->callback)(STEP,2);
    if (iVar1 != 0) {
      return;
    }
    pRVar2 = STEP->command;
  }
  pRVar2[1] = 0x68750003;
  STEP->command = pRVar2 + 2;
  *pRVar2 = 0x40040100;
  return;
}



//==== 0050ecec  ns=Global  size=0xd0
// sig: undefined FUN_0050ecec(void)
// callers(0): 
// callees(0): 

void FUN_0050ecec(int param_1,char *param_2)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0x40040100;
  uVar7 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pcVar3 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    uVar7 = (int)pcVar3 - (int)param_2;
    uVar4 = uVar7 & 3;
    uVar5 = ((ulonglong)(uVar7 + 3) << 0x20) >> 0x22;
    uVar6 = ((uVar7 + 3 >> 2) + 1) * 0x40000 | 0x40000100;
  }
  puVar1 = *(uint **)(param_1 + 8);
  puVar1[1] = 0x68750001;
  *puVar1 = uVar6;
  iVar2 = (int)(uVar5 << 2);
  if (uVar4 != 0) {
    *(undefined4 *)((int)puVar1 + iVar2 + 4) = 0;
  }
  if (uVar7 != 0) {
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 4;
      *(undefined4 *)((int)puVar1 + uVar4 + 8) = *(undefined4 *)(param_2 + uVar4);
      uVar4 = uVar6;
    } while (uVar6 < uVar7);
  }
  *(int *)(param_1 + 8) = (int)puVar1 + iVar2 + 8;
  return;
}



//==== 0050edbc  ns=Global  size=0xd0
// sig: undefined FUN_0050edbc(void)
// callers(0): 
// callees(0): 

void FUN_0050edbc(int param_1,char *param_2)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0x40040100;
  uVar7 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pcVar3 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    uVar7 = (int)pcVar3 - (int)param_2;
    uVar4 = uVar7 & 3;
    uVar5 = ((ulonglong)(uVar7 + 3) << 0x20) >> 0x22;
    uVar6 = ((uVar7 + 3 >> 2) + 1) * 0x40000 | 0x40000100;
  }
  puVar1 = *(uint **)(param_1 + 8);
  puVar1[1] = 0x68750002;
  *puVar1 = uVar6;
  iVar2 = (int)(uVar5 << 2);
  if (uVar4 != 0) {
    *(undefined4 *)((int)puVar1 + iVar2 + 4) = 0;
  }
  if (uVar7 != 0) {
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 4;
      *(undefined4 *)((int)puVar1 + uVar4 + 8) = *(undefined4 *)(param_2 + uVar4);
      uVar4 = uVar6;
    } while (uVar6 < uVar7);
  }
  *(int *)(param_1 + 8) = (int)puVar1 + iVar2 + 8;
  return;
}



//==== 0050ee8c  ns=Global  size=0x2c
// sig: undefined FUN_0050ee8c(void)
// callers(0): 
// callees(0): 

void FUN_0050ee8c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar1[1] = 0x68750003;
  *(undefined4 **)(param_1 + 8) = puVar1 + 2;
  *puVar1 = 0x40040100;
  return;
}



//==== 0050eeb8  ns=Global  size=0x40
// sig: undefined FUN_0050eeb8(void)
// callers(0): 
// callees(0): 

void FUN_0050eeb8(int param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = (uint)(pcVar1 + (3 - (int)param_2)) & 0xfffffffc;
  }
  *(uint *)(param_1 + 8) = uVar2 + *(int *)(param_1 + 8) + 8;
  return;
}



//==== 0050eef8  ns=Global  size=0x40
// sig: undefined FUN_0050eef8(void)
// callers(0): 
// callees(0): 

void FUN_0050eef8(int param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = (uint)(pcVar1 + (3 - (int)param_2)) & 0xfffffffc;
  }
  *(uint *)(param_1 + 8) = uVar2 + *(int *)(param_1 + 8) + 8;
  return;
}



//==== 0050ef38  ns=Global  size=0x10
// sig: undefined FUN_0050ef38(void)
// callers(0): 
// callees(0): 

void FUN_0050ef38(int param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}



//==== 0050ef48  ns=Global  size=0x3c
// sig: undefined FUN_0050ef48(void)
// callers(0): 
// callees(0): 

ulonglong FUN_0050ef48(longlong param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  pcVar1 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = (ZEXT48(pcVar1 + (3 - (int)param_2)) << 0x20) >> 0x22;
  }
  return param_1 + 2 + uVar2 & 0xffffffff;
}



//==== 0050ef84  ns=Global  size=0x3c
// sig: undefined FUN_0050ef84(void)
// callers(0): 
// callees(0): 

ulonglong FUN_0050ef84(longlong param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  pcVar1 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = (ZEXT48(pcVar1 + (3 - (int)param_2)) << 0x20) >> 0x22;
  }
  return param_1 + 2 + uVar2 & 0xffffffff;
}



//==== 0050efc0  ns=Global  size=0xc
// sig: undefined FUN_0050efc0(void)
// callers(0): 
// callees(0): 

int FUN_0050efc0(int param_1)

{
  return param_1 + 2;
}



//==== 0050efcc  ns=Global  size=0x40
// sig: undefined FUN_0050efcc(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0050efcc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))();
  return uVar1;
}



//==== 0050f00c  ns=Global  size=0x28
// sig: undefined FUN_0050f00c(void)
// callers(0): 
// callees(1): 0064f2c4 cell::_cellGcmFunc15

void FUN_0050f00c(void)

{
  cell::_cellGcmFunc15(PTR_DAT_0071a90c);
  return;
}



//==== 0050f034  ns=Global  size=0x40
// sig: undefined FUN_0050f034(void)
// callers(1): 004d7464 FUN_004d7464
// callees(1): 0064f264 cell::_cellGcmInitBody

undefined4 FUN_0050f034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = cell::_cellGcmInitBody(PTR_DAT_0071a90c,param_1,param_2,param_3);
  return uVar1;
}



//==== 0050f074  ns=Global  size=0xbc
// sig: undefined FUN_0050f074(void)
// callers(1): 004ddba8 idol_draw::BuildAndFlipFrame
// callees(0): 

void FUN_0050f074(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (*(undefined4 **)(param_1 + 4) < puVar2 + 4) {
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,4);
    if (iVar1 != 0) {
      return;
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
  }
  puVar2[1] = (param_2 & 0xff) << 4;
  *puVar2 = 0x40064;
  *(undefined4 **)(param_1 + 8) = puVar2 + 4;
  puVar2[3] = param_3;
  puVar2[2] = 0x4006c;
  return;
}



//==== 0050f130  ns=Global  size=0x174
// sig: undefined FUN_0050f130(void)
// callers(1): 004e31c8 FUN_004e31c8
// callees(0): 

undefined4 FUN_0050f130(int param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  *param_3 = param_1;
  if (1 < *(byte *)(param_1 + 10)) {
    return 0xffffffff;
  }
  param_3[1] = param_1 + 0x20;
  uVar5 = *(byte *)(param_1 + 0xb) & 1;
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    iVar4 = *param_3;
    puVar6 = (ushort *)0x0;
    param_3[4] = uVar5;
    param_3[2] = uVar5;
    param_3[3] = uVar5;
    bVar1 = *(byte *)(iVar4 + 0xb);
  }
  else {
    iVar4 = *param_3;
    puVar6 = (ushort *)(param_1 + 0x20 + (uint)*(ushort *)(param_1 + 8));
    param_3[3] = (int)(puVar6 + 2);
    uVar2 = puVar6[1];
    param_3[2] = (uint)uVar2;
    param_3[4] = param_1 + ((int)(puVar6 + 2) + ((uint)uVar2 * 2 - param_1) + 0xf & 0xfffffff0);
    bVar1 = *(byte *)(iVar4 + 0xb);
  }
  if ((bVar1 & 2) == 0) {
    uVar5 = bVar1 & 2;
    param_3[9] = uVar5;
    param_3[5] = uVar5;
    param_3[6] = uVar5;
    param_3[8] = uVar5;
    bVar1 = *(byte *)(iVar4 + 0xb);
    puVar6 = (ushort *)0x0;
  }
  else {
    if (puVar6 == (ushort *)0x0) {
      puVar6 = (ushort *)((uint)*(ushort *)(param_1 + 8) + param_3[1]);
    }
    else {
      puVar6 = (ushort *)((uint)*puVar6 + (int)puVar6);
    }
    puVar7 = puVar6 + 3;
    param_3[6] = (int)puVar7;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    param_3[5] = (uint)uVar2;
    param_3[8] = (int)(puVar7 + (uint)uVar2 * 4);
    param_3[9] = (int)(puVar7 + (uint)uVar2 * 4 + uVar3);
    bVar1 = *(byte *)(iVar4 + 0xb);
  }
  if ((bVar1 & 4) != 0) {
    param_3[0xb] = (int)puVar6 + *puVar6 + 4;
    return 0;
  }
  param_3[0xb] = bVar1 & 4;
  return 0;
}



//==== 0050f2a4  ns=Global  size=0xc
// sig: undefined FUN_0050f2a4(void)
// callers(0): 
// callees(0): 

undefined1 FUN_0050f2a4(int *param_1)

{
  return *(undefined1 *)(*param_1 + 10);
}



//==== 0050f2b0  ns=Global  size=0x50
// sig: undefined FUN_0050f2b0(void)
// callers(1): 004d83ec idol_draw::BindVertexProgram
// callees(0): 

undefined4 FUN_0050f2b0(int *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  uVar2 = 0xffffffff;
  if (*(char *)(iVar1 + 10) == '\0') {
    uVar2 = 0;
    *param_2 = *(undefined2 *)(iVar1 + 0x18);
    param_2[2] = *(undefined2 *)(iVar1 + 0xc);
    param_2[1] = (short)(((ulonglong)*(ushort *)(iVar1 + 8) << 0x20) >> 0x24);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)(iVar1 + 0xe);
  }
  return uVar2;
}



//==== 0050f300  ns=Global  size=0x5c
// sig: undefined FUN_0050f300(void)
// callers(1): 004e31c8 FUN_004e31c8
// callees(0): 

undefined4 FUN_0050f300(int *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *param_1;
  uVar4 = 0xffffffff;
  if (*(char *)(iVar2 + 10) == '\x01') {
    uVar4 = 0;
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined2 *)(param_2 + 8) = *(undefined2 *)(iVar2 + 0x10);
    uVar1 = *(undefined2 *)(iVar2 + 0x12);
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined2 *)(param_2 + 10) = uVar1;
    uVar3 = *(undefined4 *)(iVar2 + 0x18);
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(iVar2 + 0x14);
    *(undefined4 *)(param_2 + 0x10) = uVar3;
    *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(iVar2 + 0x1c);
  }
  return uVar4;
}



//==== 0050f35c  ns=Global  size=0x28
// sig: undefined FUN_0050f35c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0050f35c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(*param_1 + 10) == '\0') {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(*param_1 + 0x10);
  }
  return uVar1;
}



//==== 0050f384  ns=Global  size=0x28
// sig: undefined FUN_0050f384(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0050f384(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(*param_1 + 10) == '\0') {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(*param_1 + 0x14);
  }
  return uVar1;
}



//==== 0050f3ac  ns=Global  size=0xc
// sig: undefined FUN_0050f3ac(void)
// callers(1): 004e31c8 FUN_004e31c8
// callees(0): 

undefined2 FUN_0050f3ac(int *param_1)

{
  return *(undefined2 *)(*param_1 + 8);
}



//==== 0050f3b8  ns=Global  size=0x8
// sig: undefined FUN_0050f3b8(void)
// callers(2): 004d83ec idol_draw::BindVertexProgram; 004e31c8 FUN_004e31c8
// callees(0): 

undefined4 FUN_0050f3b8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



//==== 0050f3c0  ns=Global  size=0x8
// sig: undefined FUN_0050f3c0(void)
// callers(1): 004d83ec idol_draw::BindVertexProgram
// callees(0): 

undefined4 FUN_0050f3c0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



//==== 0050f3c8  ns=Global  size=0x54
// sig: undefined FUN_0050f3c8(void)
// callers(1): 004d83ec idol_draw::BindVertexProgram
// callees(0): 

void FUN_0050f3c8(int *param_1,uint param_2,undefined2 *param_3,int *param_4)

{
  int iVar1;
  
  if (*(char *)(*param_1 + 10) == '\0') {
    if (param_2 < (uint)param_1[2]) {
      iVar1 = param_1[3];
      *param_4 = param_1[4] + param_2 * 0x10;
      *param_3 = *(undefined2 *)(param_2 * 2 + iVar1);
      return;
    }
  }
  *param_3 = 0xffff;
  return;
}



//==== 0050f41c  ns=Global  size=0x18
// sig: undefined FUN_0050f41c(void)
// callers(0): 
// callees(0): 

undefined2 FUN_0050f41c(int param_1,int param_2)

{
  return *(undefined2 *)(param_2 * 8 + *(int *)(param_1 + 0x18) + 6);
}



//==== 0050f434  ns=Global  size=0x8
// sig: undefined FUN_0050f434(void)
// callers(2): 004de9c4 FUN_004de9c4; 004e1b80 FUN_004e1b80
// callees(0): 

undefined4 FUN_0050f434(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



//==== 0050f43c  ns=Global  size=0xc4
// sig: undefined FUN_0050f43c(void)
// callers(0): 
// callees(0): 

void FUN_0050f43c(int *param_1,int param_2,short *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(char *)(*param_1 + 10) != '\0') {
    *param_3 = -1;
    return;
  }
  sVar1 = *(short *)(param_2 * 8 + param_1[6] + 6);
  *param_3 = sVar1;
  if (sVar1 == -1) {
    return;
  }
  if (param_4 == (int *)0x0) {
    return;
  }
  if (0 < param_1[2]) {
    iVar2 = 0;
    if (*(short *)param_1[3] != sVar1) {
      uVar3 = (ulonglong)(uint)param_1[2];
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) goto LAB_0050f4e0;
      } while (((short *)param_1[3])[iVar2] != sVar1);
      iVar2 = iVar2 * 0x10;
    }
    *param_4 = iVar2 + param_1[4];
    return;
  }
LAB_0050f4e0:
  *param_4 = 0;
  return;
}



//==== 0050f500  ns=Global  size=0x124
// sig: undefined FUN_0050f500(void)
// callers(1): 004dd6f0 idol_draw::Gfx_SubmitHudDrawCommands
// callees(0): 

void FUN_0050f500(int *param_1,int param_2,undefined2 *param_3,uint *param_4)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if ((*(char *)(*param_1 + 10) == '\x01') &&
     (sVar1 = *(short *)(param_2 * 8 + param_1[6] + 6), (ushort)(sVar1 - 0x400U) < 0xfbff)) {
    iVar8 = param_1[8];
    uVar2 = *(ushort *)((uint)(ushort)(sVar1 - 0x3ff) * 2 + iVar8);
    uVar7 = (uint)uVar2;
    if (param_3 != (undefined2 *)0x0) {
      uVar3 = *param_4;
      if (uVar3 < uVar7) {
        uVar9 = (ulonglong)uVar3;
        if (0 < (int)uVar3) {
          do {
            *param_3 = 0xffff;
            uVar9 = uVar9 - 1;
            param_3 = param_3 + 1;
          } while (uVar9 != 0);
        }
      }
      else {
        if (uVar2 != 0) {
          lVar5 = (ulonglong)(ushort)(sVar1 - 0x3fe) << 1;
          uVar9 = (ulonglong)uVar2;
          puVar6 = param_3;
          do {
            iVar4 = (int)lVar5;
            lVar5 = lVar5 + 2;
            *puVar6 = *(undefined2 *)(iVar4 + iVar8);
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar9 != 0);
        }
        if ((int)(uint)uVar2 < (int)uVar3) {
          iVar8 = uVar3 - uVar7;
          param_3 = param_3 + uVar7;
          if ((int)uVar3 < (int)(uVar2 + 1)) {
            iVar8 = 1;
          }
          do {
            *param_3 = 0xffff;
            iVar8 = iVar8 + -1;
            param_3 = param_3 + 1;
          } while (iVar8 != 0);
        }
      }
    }
    *param_4 = (uint)uVar2;
    return;
  }
  *param_4 = 0;
  return;
}



//==== 0050f624  ns=Global  size=0x5c
// sig: undefined FUN_0050f624(void)
// callers(0): 
// callees(0): 

void FUN_0050f624(int *param_1,int param_2,undefined2 *param_3)

{
  ulonglong uVar1;
  
  if (*(char *)(*param_1 + 10) == '\x01') {
    uVar1 = (ulonglong)*(ushort *)(param_2 * 8 + param_1[6] + 6) - 0x400 & 0xffff;
    if (uVar1 < 0xfbff) {
      *param_3 = *(undefined2 *)((int)(uVar1 << 1) + param_1[8]);
      return;
    }
  }
  *param_3 = 0xffff;
  return;
}



//==== 0050f680  ns=Global  size=0x64
// sig: undefined FUN_0050f680(void)
// callers(0): 
// callees(0): 

int FUN_0050f680(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = -1;
  if (*(byte *)(param_1 + 10) < 2) {
    bVar2 = *(byte *)(param_1 + 0xb);
    iVar1 = *(ushort *)(param_1 + 8) + 0x20;
    if (bVar2 != 0) {
      do {
        bVar2 = bVar2 - 1 & bVar2;
        iVar1 = iVar1 + (uint)*(ushort *)(param_1 + iVar1);
      } while (bVar2 != 0);
      return iVar1;
    }
  }
  return iVar1;
}



//==== 0050f6e4  ns=Global  size=0x258
// sig: undefined FUN_0050f6e4(void)
// callers(3): 004de9c4 FUN_004de9c4; 004e1b80 FUN_004e1b80; 0050f93c FUN_0050f93c
// callees(4): 005c8510 libc::strlen; 005cc8d8 libc::strcpy; 005cccec libc::strcpy; 005cd2a8 libc::snprintf
// strings: 00666440: '[%s]' (raw)

char * FUN_0050f6e4(int param_1,int param_2,char *param_3,uint *param_4)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  bool bVar6;
  int *piVar8;
  longlong lVar7;
  size_t sVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar12;
  uint uVar13;
  ulonglong unaff_r31;
  char *__src;
  ulonglong in_LR;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x1b0;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = uVar11;
  puVar5[0x38] = in_LR;
  puVar5[0x33] = unaff_r29;
  *(undefined1 *)((int)puVar5 + 0x16f) = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  piVar8 = (int *)(param_2 * 8 + *(int *)(param_1 + 0x18));
  puVar5[0x35] = unaff_r31;
  puVar5[0x32] = unaff_r28;
  puVar5[0x2f] = unaff_r25;
  puVar5[0x30] = unaff_r26;
  iVar4 = *piVar8;
  puVar5[0x31] = unaff_r27;
  pcVar10 = (char *)(iVar3 + iVar4);
  puVar5[0x34] = unaff_r30;
  sVar9 = libc::strlen(pcVar10);
  if ((byte)(*pcVar10 - 0x30U) < 10) {
    uVar12 = (lVar1 - (int)sVar9) + 0x16d;
    uVar11 = uVar12 & 0xffffffff;
    pcVar10 = (char *)libc::snprintf((char *)uVar12,PTR_DAT_0071a910,pcVar10);
    bVar6 = true;
  }
  else {
    uVar12 = (uVar11 - 0x41) - (longlong)(int)sVar9;
    uVar11 = uVar12 & 0xffffffff;
    pcVar10 = libc::strcpy((char *)uVar12,pcVar10);
    bVar6 = false;
  }
  do {
    __src = (char *)uVar11;
    uVar2 = *(ushort *)(piVar8 + 1);
    bVar6 = !bVar6;
    while( true ) {
      if (uVar2 == 0xffff) {
        uVar11 = (lVar1 - uVar12) + 0x170;
        uVar13 = (uint)uVar11;
        if (param_3 != (char *)0x0) {
          if ((uVar11 & 0xffffffff) <= (ulonglong)*param_4) {
            pcVar10 = libc::strcpy(param_3,__src);
            *param_4 = uVar13;
            return pcVar10;
          }
          if (*param_4 != 0) {
            *param_3 = '\0';
          }
        }
        *param_4 = uVar13;
        return pcVar10;
      }
      if (bVar6) {
        uVar12 = uVar12 - 1;
        *(undefined1 *)uVar12 = 0x2e;
        uVar2 = *(ushort *)(piVar8 + 1);
      }
      piVar8 = (int *)((uint)uVar2 * 8 + *(int *)(param_1 + 0x18));
      pcVar10 = (char *)(*(int *)(param_1 + 0x24) + *piVar8);
      sVar9 = libc::strlen(pcVar10);
      lVar7 = uVar12 - 1;
      uVar11 = lVar7 - (int)sVar9;
      if (9 < (byte)(*pcVar10 - 0x30U)) break;
      uVar12 = uVar11 - 1;
      __src = (char *)uVar12;
      *(undefined1 *)lVar7 = 0x5d;
      pcVar10 = (char *)libc::strcpy(uVar11 & 0xffffffff,pcVar10,sVar9);
      *__src = '[';
      uVar2 = *(ushort *)(piVar8 + 1);
      bVar6 = false;
    }
    uVar12 = uVar12 - (longlong)(int)sVar9;
    uVar11 = uVar12 & 0xffffffff;
    pcVar10 = (char *)libc::strcpy(uVar11,pcVar10,sVar9);
    bVar6 = false;
  } while( true );
}



//==== 0050f93c  ns=Global  size=0x230
// sig: undefined FUN_0050f93c(void)
// callers(0): 
// callees(4): 0050f6e4 FUN_0050f6e4; 005c8510 libc::strlen; 005cc784 FUN_005cc784; 005ccb28 FUN_005ccb28

ulonglong FUN_0050f93c(int param_1,ulonglong param_2)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_180 [8];
  undefined1 auStack_178 [272];
  
  sVar3 = libc::strlen((char *)param_2);
  uVar8 = param_2 + (longlong)(int)sVar3;
  if ((((param_2 & 0xffffffff) < (uVar8 & 0xffffffff)) && (*(char *)uVar8 != '[')) &&
     (*(char *)uVar8 != '.')) {
    uVar9 = uVar8 - param_2 & 0xffffffff;
    uVar6 = uVar8;
    if ((uVar8 - 1 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar9 = 1;
    }
    do {
      uVar6 = uVar6 - 1;
      uVar9 = uVar9 - 1;
      if ((uVar9 == 0) || (*(char *)uVar6 == '[')) break;
    } while (*(char *)uVar6 != '.');
    lVar7 = uVar8 - uVar6;
    uVar8 = uVar6;
  }
  else {
    lVar7 = 0;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (0 < iVar5) {
    uVar9 = 0;
    do {
      while( true ) {
        bVar1 = *(byte *)uVar8;
        uVar6 = 1;
        if (bVar1 != 0x5b) {
          uVar6 = ((ulonglong)bVar1 ^ 0x2e) - 1 >> 0x3f;
        }
        iVar4 = FUN_005ccb28(*(int *)(param_1 + 0x24) +
                             *(int *)((int)((uVar9 & 0xffffffff) << 3) + *(int *)(param_1 + 0x18)),
                             uVar8 + uVar6 & 0xffffffff,
                             (lVar7 - uVar6) - (ulonglong)(bVar1 == 0x5b) & 0xffffffff);
        iVar2 = (int)uVar9;
        if (iVar4 != 0) break;
        FUN_0050f6e4(param_1,uVar9 & 0xffffffff,auStack_178,local_180);
        iVar5 = FUN_005cc784(auStack_178,param_2 & 0xffffffff);
        if (iVar5 == 0) {
          return uVar9 & 0xffffffff;
        }
        iVar5 = *(int *)(param_1 + 0x14);
        uVar9 = uVar9 + 1;
        if (iVar5 <= iVar2 + 1) {
          return 0xffffffff;
        }
      }
      uVar9 = uVar9 + 1;
    } while (iVar2 + 1 < iVar5);
  }
  return 0xffffffff;
}



//==== 0050fb6c  ns=Global  size=0x8
// sig: undefined FUN_0050fb6c(void)
// callers(2): 00510638 FUN_00510638; 005e78e4 FUN_005e78e4
// callees(0): 

undefined8 FUN_0050fb6c(void)

{
  return 0xc00;
}



//==== 0050fb74  ns=Global  size=0x3c
// sig: undefined FUN_0050fb74(void)
// callers(2): 005e7770 FUN_005e7770; 005e7820 FUN_005e7820
// callees(2): 005cef58 FUN_005cef58; 00650144 cell::cellSpursLFQueueDetachLv2EventQueue

void FUN_0050fb74(void)

{
  int iVar1;
  undefined4 uStack_44;
  
  iVar1 = cell::cellSpursLFQueueDetachLv2EventQueue();
  if (iVar1 != 0) {
    FUN_005cef58(*(undefined4 *)(uStack_44 + -0x7a14),0);
  }
  return;
}



//==== 0050fbb0  ns=Global  size=0x4c
// sig: undefined FUN_0050fbb0(void)
// callers(2): 005104d4 FUN_005104d4; 005e7908 FUN_005e7908
// callees(1): 005cef58 FUN_005cef58
// strings: 00666478: 'edgelzma_inflate_queue.cpp:155 (maxNumQueueEntries > 0)'

int FUN_0050fbb0(int param_1)

{
  if (param_1 == 0) {
    FUN_005cef58(PTR_s_edgelzma_inflate_queue_cpp_155___0071a918,0);
  }
  return param_1 * 0x20 + 0x80;
}



//==== 0050fbfc  ns=Global  size=0x420
// sig: undefined FUN_0050fbfc(void)
// callers(1): 0051001c FUN_0051001c
// callees(5): 005c756c FUN_005c756c; 005cd098 libc::printf; 005cef58 FUN_005cef58; 00650164 cell::_cellSpursLFQueuePushBody; 00650644 sys::sys_process_is_stack

undefined4
FUN_0050fbfc(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,undefined4 param_6
            ,ushort param_7,int param_8)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort in_stack_00000076;
  int *in_stack_0000007c;
  int in_stack_00000094;
  int iStack_f4;
  undefined1 local_b0 [40];
  
  uVar1 = (uint)param_7;
  uVar2 = (ulonglong)param_4;
  uVar5 = uVar1 + param_8 + (uint)in_stack_00000076;
  iVar3 = sys::sys_process_is_stack(uVar2);
  if (iVar3 != 0) {
    FUN_005c756c(*(undefined4 *)(iStack_f4 + -0x7a0c));
    iVar3 = sys::sys_process_is_stack(uVar2);
    if (iVar3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x7a08),0);
    }
  }
  iVar3 = sys::sys_process_is_stack(param_6);
  if (iVar3 != 0) {
    FUN_005c756c(*(undefined4 *)(iStack_f4 + -0x7a04));
    iVar3 = sys::sys_process_is_stack(param_6);
    if (iVar3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x7a00),0);
    }
  }
  if (uVar5 < uVar1 + in_stack_00000076) {
    libc::printf(*(char **)(iStack_f4 + -0x79fc),uVar1,(uint)in_stack_00000076,(ulonglong)uVar5);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79f8),0);
  }
  if (0x10000 < param_5) {
    libc::printf(*(char **)(iStack_f4 + -0x79f4),(ulonglong)param_5,0x10000);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79f0),0);
  }
  if (0x10000 < uVar5) {
    libc::printf(*(char **)(iStack_f4 + -0x79ec),(ulonglong)uVar5,0x10000);
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79e8),0);
  }
  if ((in_stack_0000007c != (int *)0x0) && (*in_stack_0000007c == 0)) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79e4),0);
  }
  if (uVar5 < param_5) {
    libc::printf(*(char **)(iStack_f4 + -0x79e0),uVar2,(ulonglong)param_5,(ulonglong)uVar5);
  }
  if (((uint)in_stack_0000007c & 3) != 0) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79dc),0);
  }
  if (in_stack_00000094 == 0) {
    if (param_2 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79d0),0);
    }
    if (param_3 != 0) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79cc),0);
    }
  }
  else if (in_stack_00000094 == 1) {
    if (param_3 != 5) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79d8),0);
    }
    if (0x10000 < ((ulonglong)*(byte *)(param_2 + 2) << 8 |
                  (ulonglong)*(byte *)(param_2 + 4) << 0x18 |
                  (ulonglong)*(byte *)(param_2 + 3) << 0x10 | (ulonglong)*(byte *)(param_2 + 1))) {
      FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79d4),0);
    }
  }
  else {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79c8),0);
  }
  sync(1);
  iVar3 = cell::_cellSpursLFQueuePushBody(param_1,local_b0,0);
  uVar4 = 0;
  if ((iVar3 != -0x7fbef6ff) && (uVar4 = 1, iVar3 != 0)) {
    FUN_005cef58(*(undefined4 *)(iStack_f4 + -0x79c4),0);
    uVar4 = 1;
  }
  return uVar4;
}



