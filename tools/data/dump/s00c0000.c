//==== 000c8274  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_HUD(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_HUD(void)

{
  DAT_0072390c = 0x10000;
  return;
}



//==== 000c8288  ns=hud  size=0x48
// sig: int Hud_FindIconIndex(int iconId)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hud::Hud_FindIconIndex(int iconId)

{
  int iVar1;
  
  iVar1 = 0;
  while ((uint)IconTableEntry[iVar1].iconId != iconId && IconTableEntry[iVar1].iconId != 0xffff) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



//==== 000c82d0  ns=hud  size=0x6c
// sig: undefined HudEntry_SetIcon(void)
// callers(0): 
// callees(0): 

void hud::HudEntry_SetIcon(uint *param_1,uint param_2)

{
  ushort uVar1;
  IconTableEntries *pIVar2;
  int iVar3;
  IconTableEntries *pIVar4;
  ulonglong uVar5;
  
  pIVar2 = IconTableEntry;
  uVar5 = 0;
  pIVar4 = IconTableEntry;
  while (pIVar4->iconId != param_2 && pIVar4->iconId != 0xffff) {
    pIVar4 = pIVar4 + 1;
    uVar5 = uVar5 + 1;
  }
  iVar3 = (int)((uVar5 & 0x1fffffff) << 3);
  uVar1 = *(ushort *)((int)&IconTableEntry->iconId + iVar3);
  *(short *)(param_1 + 0x10) = (short)uVar5;
  *param_1 = (uint)uVar1;
  *(undefined1 *)((int)param_1 + 0x42) = *(undefined1 *)((int)&pIVar2->baseIdx + iVar3);
  param_1[0x11] = (uint)*(ushort *)((int)&pIVar2->variantsCnt + iVar3);
  return;
}



//==== 000c833c  ns=hud  size=0x108
// sig: undefined HudEntry_Reset(void)
// callers(4): 000c8444 hud::RegisterHUDCallback; 000c88c0 hud::Hud_ResetAllEntries; 000d56d8 hud::UpdateAllGameplayHUD; 000d5b38 hud::Hud_ResetAllEntriesHidden
// callees(0): 

void hud::HudEntry_Reset(uint *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  IconTableEntries *pIVar3;
  IconTableEntries *pIVar4;
  int iVar5;
  ulonglong uVar6;
  
  pIVar3 = IconTableEntry;
  uVar6 = 0;
  puVar2 = (undefined4 *)param_1[0xc];
  pIVar4 = IconTableEntry;
  while ((uint)pIVar4->iconId != param_1[8] && pIVar4->iconId != 0xffff) {
    pIVar4 = pIVar4 + 1;
    uVar6 = uVar6 + 1;
  }
  iVar5 = (int)((uVar6 & 0x1fffffff) << 3);
  uVar1 = *(ushort *)((int)&IconTableEntry->iconId + iVar5);
  *(short *)(param_1 + 0x10) = (short)uVar6;
  *param_1 = (uint)uVar1;
  *(undefined1 *)((int)param_1 + 0x42) = *(undefined1 *)((int)&pIVar3->baseIdx + iVar5);
  uVar1 = *(ushort *)((int)&pIVar3->variantsCnt + iVar5);
  param_1[1] = param_1[9];
  param_1[0x11] = (uint)uVar1;
  param_1[4] = (uint)puVar2;
  param_1[5] = param_1[0xd];
  param_1[6] = param_1[0xe];
  param_1[3] = param_1[0xb];
  param_1[2] = param_1[10];
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)*puVar2)(param_1);
  }
  param_1[0x1a] = 0;
  return;
}



//==== 000c8444  ns=hud  size=0x134
// sig: int RegisterHUDCallback(uint param_1, int param_2, void * fn1, void * fn2, void * hudFn, int * varChanged, int varCount)
// callers(37): 00080910 hero::MetalDetectorUpdate_Unused; 000954c8 hero::HeroUpdate; 000a2750 hero::HandleUnderwaterSwimming; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 000c8578 hud::RegisterHeroHealthHUDCallbacks; 000c8658 hud::Hud_InitBanks; 000c88c0 hud::Hud_ResetAllEntries; 000c8964 hud::Hud_UnregisterById; 000cd4b8 hud::UpdateQuickSelect; 000cf070 hud::ClankCommandHud_Update; 000d56d8 hud::UpdateAllGameplayHUD; 000d5b38 hud::Hud_ResetAllEntriesHidden; 0011ae14 mobyutil::MB_HandleGameplayHud; 0013b838 pause::UpdatePause; 00166fb0 update::UpdateGameplay; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016cc50 vendor::PurchaseHandler; 0016da88 vendor::Vendor_PreUpdate; 00186c78 mobyupdate_helpers::M1012_00186c78; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 0023be70 mobyupdate_unsorted::UpdateMoby_1284; 00240678 mobyupdate_helpers::M16_00240678
// callees(1): 000c833c hud::HudEntry_Reset

int hud::RegisterHUDCallback
              (uint param_1,int param_2,void *fn1,void *fn2,void *hudFn,int *varChanged,int varCount
              )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  HudElement *pHVar4;
  int iVar5;
  
  uVar2 = param_1 & 0xf;
  uVar3 = param_1 & 0xfff0;
  if ((g_gameMode == GAME_MODE_VENDOR && uVar2 != 2) && (uVar2 != 0)) {
    iVar5 = 0;
  }
  else {
    if (((HudEntries[uVar2].regPValue != varChanged) ||
        (((HudEntries[uVar2].regMaxValue != varCount || (HudEntries[uVar2].regIconId != param_2)) ||
         (HudEntries[uVar2].regValue != uVar3)))) ||
       (((HudEntries[uVar2].regInitCb != fn1 || (HudEntries[uVar2].regUpdateCb != fn2)) ||
        (HudEntries[uVar2].regDrawCb != hudFn)))) {
      HudEntries[uVar2].regPValue = varChanged;
      HudEntries[uVar2].regMaxValue = varCount;
      HudEntries[uVar2].regIconId = param_2;
      HudEntries[uVar2].regValue = uVar3;
      HudEntries[uVar2].regInitCb = fn1;
      HudEntries[uVar2].regUpdateCb = fn2;
      HudEntries[uVar2].regDrawCb = hudFn;
      uVar1 = HudEntries[uVar2].value;
      iVar5 = DAT_00a1bfc0 + 1;
      *(int *)&HudEntries[uVar2].field_0x64 = DAT_00a1bfc0;
      DAT_00a1bfc0 = iVar5;
      HudEntries[uVar2].showTimer = 0;
      pHVar4 = HudEntries + uVar2;
      pHVar4->animA = '\0';
      pHVar4->animB = '\0';
      *(undefined2 *)&pHVar4->field_0x72 = 0;
      HudEntries[uVar2].locked = 1;
      if ((uVar3 & uVar1 & 0x20) != 0) {
        HudEntry_Reset(HudEntries + uVar2);
      }
    }
    iVar5 = *(int *)&HudEntries[uVar2].field_0x64;
  }
  return iVar5;
}



//==== 000c8578  ns=hud  size=0x4c
// sig: undefined RegisterHeroHealthHUDCallbacks(void)
// callers(4): 0007f530 hero::TakeDamage; 000be228 hero::HeroMovement; 0013b838 pause::UpdatePause; 00166fb0 update::UpdateGameplay
// callees(1): 000c8444 hud::RegisterHUDCallback

int hud::RegisterHeroHealthHUDCallbacks(void)

{
  int iVar1;
  
  iVar1 = RegisterHUDCallback(1,0x7535,&PTR_HealthHud_Init_007057f0,&PTR_HealthHud_Update_007057f8,
                              &PTR_Draw_NanotechUI_00705800,&g_heroHealth,8);
  return iVar1;
}



//==== 000c85c4  ns=hud  size=0x2c
// sig: undefined HudScratch_Reset(void)
// callers(1): 00012048 boot::PrepareFrontbin
// callees(0): 

void hud::HudScratch_Reset(void)

{
  DAT_00a1bfd0 = DAT_00a108e4;
  DAT_00a1bfd4 = DAT_00a108e4 + 0x64000;
  return;
}



//==== 000c85f0  ns=hud  size=0x68
// sig: int HudScratch_Alloc(int size)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hud::HudScratch_Alloc(int size)

{
  int iVar1;
  
  if (DAT_00a1bfd0 == 0) {
    DAT_00a1bfd4 = DAT_00a108e4 + 0x64000;
    DAT_00a1bfd0 = DAT_00a108e4;
  }
  if (DAT_00a1bfd4 - DAT_00a1bfd0 < size) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_00a1bfd0;
    DAT_00a1bfd0 = DAT_00a1bfd0 + (size + 0xfU & 0xfffffff0);
  }
  return iVar1;
}



//==== 000c8658  ns=hud  size=0x1b8
// sig: undefined Hud_InitBanks(void)
// callers(2): 00012048 boot::PrepareFrontbin; 000e0e60 main::startLevel
// callees(2): 000c8444 hud::RegisterHUDCallback; 00500250 fastfunc::FastMemSetZero

void hud::Hud_InitBanks(void)

{
  astruct *paVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
                    /* CORRESPONDING FUNCTION IN PS2 : 0x1fee88 */
  lVar3 = 0;
  DAT_00a1bfc0 = 0;
  DAT_00a1bfc4 = 0;
  do {
    iVar2 = (int)(lVar3 << 7) + (int)(lVar3 << 4);
    *(undefined4 *)(&HudEntries[0].field_0x64 + iVar2) = 0xffffffff;
    *(undefined4 *)((int)&HudEntries[0].regIconId + iVar2) = 0x10000;
    RegisterHUDCallback((uint)lVar3,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,1);
    iVar4 = (uint)lVar3 + 1;
    *(undefined4 *)((int)&HudEntries[0].showTimer + iVar2) = 0;
    *(undefined4 *)((int)&HudEntries[0].value + iVar2) = 0;
    lVar3 = (longlong)iVar4;
    *(undefined4 *)((int)&HudEntries[0].regValue + iVar2) = 0;
    *(undefined4 *)((int)&HudEntries[0].id + iVar2) = 0xfffffffa;
  } while (iVar4 < 0xd);
  paVar1 = DAT_00a1bfd0;
  if (HudBankMain == (astruct *)0x0) {
    if (DAT_00a1bfd0 == (astruct *)0x0) {
      DAT_00a1bfd4 = &DAT_00a108e4[0x307c].field_0x4;
      DAT_00a1bfd0 = DAT_00a108e4;
    }
    HudBankMain = (astruct *)0x0;
    paVar1 = DAT_00a1bfd0;
    if (0x27ff < (int)DAT_00a1bfd4 - (int)DAT_00a1bfd0) {
      paVar1 = (astruct *)&DAT_00a1bfd0[0x136].field_0xa;
      HudBankMain = DAT_00a1bfd0;
    }
    DAT_00a1bfd0 = paVar1;
    if (DAT_00a1bfd0 == (astruct *)0x0) {
      DAT_00a1bfd4 = &DAT_00a108e4[0x307c].field_0x4;
      DAT_00a1bfd0 = DAT_00a108e4;
    }
    DAT_00a1bff8 = (astruct *)0x0;
    paVar1 = DAT_00a1bfd0;
    if (0x13ff < (int)DAT_00a1bfd4 - (int)DAT_00a1bfd0) {
      paVar1 = (astruct *)&DAT_00a1bfd0[0x9b].field_0x5;
      DAT_00a1bff8 = DAT_00a1bfd0;
    }
  }
  DAT_00a1bfd0 = paVar1;
  DAT_00a1bff4 = &HudBankMain[0x136].field_0xa;
  DAT_00a1bff0 = HudBankMain;
  fastfunc::FastMemSetZero(HudBankMain,0x2800);
  HudBankMain->field32_0x20 = 0xff;
  return;
}



//==== 000c8810  ns=stub  size=0x4
// sig: undefined STUB_000c8810(void)
// callers(1): 0013b108 update::OpenPauseMenu
// callees(0): 

void stub::STUB_000c8810(void)

{
  return;
}



//==== 000c8814  ns=stub  size=0x4
// sig: undefined STUB_000c8814(void)
// callers(0): 
// callees(0): 

void stub::STUB_000c8814(void)

{
  return;
}



//==== 000c8818  ns=stub  size=0x4
// sig: undefined STUB_000c8818(void)
// callers(1): 0013b108 update::OpenPauseMenu
// callees(0): 

void stub::STUB_000c8818(void)

{
  return;
}



//==== 000c881c  ns=stub  size=0x4
// sig: undefined STUB_000c881c(void)
// callers(0): 
// callees(0): 

void stub::STUB_000c881c(void)

{
  return;
}



//==== 000c8820  ns=hud  size=0xa0
// sig: void Hud_SwapMobyBank(int bank)
// callers(2): 0013b108 update::OpenPauseMenu; 0013b838 pause::UpdatePause
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hud::Hud_SwapMobyBank(int bank)

{
  astruct *paVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = MobyInstanceEnd;
  pMVar3 = MobyInstancePermEnd;
  uVar2 = DAT_00a1bff8;
  paVar1 = HudBankMain;
  if ((bank & 0xffU) != (uint)DAT_00a1bffc) {
    DAT_00a1bffc = (byte)((ulonglong)(LZCOUNT((uint)DAT_00a1bffc) << 0x20) >> 0x25);
    HudBankMain = (astruct *)MobyInstance;
    MobyInstance = (MobyInstance *)paVar1;
    MobyInstancePermEnd = DAT_00a1bff0;
    DAT_00a1bff0 = pMVar3;
    MobyInstanceEnd = DAT_00a1bff4;
    DAT_00a1bff4 = pMVar4;
    DAT_00a1bff8 = DAT_00a390b0;
    DAT_00a390b0 = uVar2;
  }
  return;
}



//==== 000c88c0  ns=hud  size=0xa4
// sig: undefined Hud_ResetAllEntries(void)
// callers(0): 
// callees(2): 000c833c hud::HudEntry_Reset; 000c8444 hud::RegisterHUDCallback

void hud::Hud_ResetAllEntries(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    RegisterHUDCallback(uVar1,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,1);
    HudEntries[uVar1].showTimer = 0;
    HudEntries[uVar1].id = -6;
    HudEntry_Reset(HudEntries + uVar1);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0xd);
  return;
}



//==== 000c8964  ns=hud  size=0x90
// sig: int Hud_UnregisterById(int id)
// callers(4): 0011b0b0 mobyutil::MB_ClearHelpMessage; 002c7328 mobyupdate_unsorted::UpdateMoby_185; 004d31b0 FUN_004d31b0; 004d3870 FUN_004d3870
// callees(1): 000c8444 hud::RegisterHUDCallback

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hud::Hud_UnregisterById(int id)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = 0;
  do {
    uVar2 = (uint)lVar1;
    if (*(int *)(&HudEntries[0].field_0x64 + (int)(lVar1 << 7) + (int)(lVar1 << 4)) == id) break;
    uVar2 = uVar2 + 1;
    lVar1 = (longlong)(int)uVar2;
  } while ((int)uVar2 < 0xd);
  if ((int)uVar2 < 0xd) {
    RegisterHUDCallback(uVar2,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,0);
  }
  return (int)((int)uVar2 < 0xd);
}



//==== 000c89f4  ns=hud  size=0xd0
// sig: undefined Hud_SetEntryIconById(void)
// callers(0): 
// callees(0): 

HudElement * hud::Hud_SetEntryIconById(int param_1,uint param_2)

{
  ushort uVar1;
  IconTableEntries *pIVar2;
  int iVar3;
  HudElement *pHVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar8;
  
  pIVar2 = IconTableEntry;
  iVar5 = 0;
  iVar3 = 0;
  piVar6 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar6 == param_1) break;
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 0x24;
  } while (iVar5 < 0xd);
  if (iVar5 < 0xd) {
    pHVar4 = HudEntries + iVar5;
    uVar7 = 0;
    while( true ) {
      uVar8 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar3);
      if (uVar8 == param_2 || uVar8 == 0xffff) break;
      iVar3 = iVar3 + 8;
      uVar7 = uVar7 + 1;
    }
    iVar3 = (int)((uVar7 & 0x1fffffff) << 3);
    uVar1 = *(ushort *)((int)&IconTableEntry->iconId + iVar3);
    HudEntries[iVar5].iconIdx = (short)uVar7;
    pHVar4->iconId = (uint)uVar1;
    HudEntries[iVar5].iconBaseIdx = *(char *)((int)&pIVar2->baseIdx + iVar3);
    HudEntries[iVar5].iconVariantsCnt = (uint)*(ushort *)((int)&pIVar2->variantsCnt + iVar3);
    HudEntries[iVar5].regIconId = HudEntries[iVar5].iconId;
  }
  else {
    pHVar4 = (HudElement *)0x0;
  }
  return pHVar4;
}



//==== 000c8ac4  ns=hud  size=0x64
// sig: undefined Hud_RestoreEntryCallbackById(void)
// callers(0): 
// callees(0): 

void hud::Hud_RestoreEntryCallbackById(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 0;
  piVar2 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar2 == param_1) {
      iVar1 = (int)(lVar3 << 7) + (int)(lVar3 << 4);
      *(undefined4 *)((int)&HudEntries[0].showTimer + iVar1) = 0;
      *(undefined4 *)((int)&HudEntries[0].displayedValue + iVar1) =
           *(undefined4 *)((int)&HudEntries[0].targetValue + iVar1);
      *(undefined4 *)((int)&HudEntries[0].targetValue + iVar1) =
           *(undefined4 *)((int)&HudEntries[0].maxValue + iVar1);
      return;
    }
    lVar3 = lVar3 + 1;
    piVar2 = piVar2 + 0x24;
  } while ((int)lVar3 < 0xd);
  return;
}



//==== 000c8b28  ns=hud  size=0x60
// sig: void Hud_SetEntryValueById(int id, int value)
// callers(21): 00079b18 freeze::UpdateFreeze; 000836ac hero::Hero_RevertToRatchet; 000a7968 hero::Hero_UpdateHoverboardRace; 0016b038 vendor::Vendor_EndWeaponCutscene; 0016cc50 vendor::PurchaseHandler; 0016da88 vendor::Vendor_PreUpdate; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a5360 mobyupdate_helpers::M1051_001a5360; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 0023be70 mobyupdate_unsorted::UpdateMoby_1284; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002737b8 mobyupdate_helpers::M1422_002737b8; 00275240 mobyupdate_helpers::M1422_00275240; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 0035d338 mobyupdate_helpers::M388_0035d338; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 0036cab0 mobyupdate_unsorted::UpdateMoby_426; 0041dad8 mobyupdate_unsorted::UpdateMoby_69; 0044e618 mobyupdate_helpers::M757_0044e618; 0045cb60 mobyupdate_helpers::M788_0045cb60
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hud::Hud_SetEntryValueById(int id,int value)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = 0;
  piVar3 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar3 == id) break;
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 0x24;
  } while ((int)lVar2 < 0xd);
  if ((int)lVar2 < 0xd) {
    iVar1 = (int)(lVar2 << 7) + (int)(lVar2 << 4);
    *(int *)((int)&HudEntries[0].regValue + iVar1) = value;
    if (*(int *)((int)&HudEntries[0].locked + iVar1) == 0) {
      *(int *)((int)&HudEntries[0].value + iVar1) = value;
    }
  }
  return;
}



//==== 000c8b88  ns=hud  size=0x70
// sig: int HudEntry_ApplyAlignment(int entry, int * x, int * y)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hud::HudEntry_ApplyAlignment(int entry,int *x,int *y)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(entry + 0x60);
  iVar2 = *(int *)(entry + 0x58);
  if (((uVar3 & 1) == 0) && ((uVar3 & 2) == 0)) {
    *y = *y - (*(int *)(entry + 0x5c) >> 1);
    uVar3 = *(uint *)(entry + 0x60);
  }
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 8) == 0) {
      iVar2 = iVar2 >> 1;
      iVar1 = *x;
    }
    else {
      iVar1 = *x;
    }
    *x = iVar1 - iVar2;
  }
  return 0;
}



//==== 000c8c08  ns=hud  size=0x208
// sig: undefined HudEntry_GetSlideOffset(void)
// callers(9): 000c9824 hud::HudEntry_DrawLargeNumber; 000c9b48 hud::Draw_LargeNumberHud; 000c9c34 hud::???_Unused_HudEntry_GetSlideField58; 000caa88 hud::DrawOxygenMeter; 000cb620 hud::Draw_Moby185Meter; 000ccfa8 hud::Draw_Moby849Meter; 000d1b8c hud::UnusedIconHud_Draw; 000d1df4 hud::Draw_MobyMeterHud; 000d44e4 hud::Draw_GiantClankHealthHUD
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void hud::HudEntry_GetSlideOffset
               (int param_1,int *param_2,int *param_3,longlong param_4,longlong param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar5 = 0;
  lVar6 = (param_4 - param_5) +
          ((LZCOUNT(-*(int *)(param_1 + 0x7c)) << 0x3a) >> 0x3f &
          (param_5 + param_4) - (param_4 - param_5));
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar4 = 0;
  lVar6 = lVar6 + ((longlong)(int)lVar6 >> 0x3f & -lVar6);
  iVar3 = (int)(lVar6 + (0x17 - (longlong)(int)lVar6 >> 0x3f & 0x17U - lVar6)) * 4;
  if (*(int *)(param_1 + 0x7c) == 0) {
    fVar1 = *(float *)(&DAT_007242c0 + iVar3);
  }
  else {
    fVar1 = *(float *)(&DAT_00724260 + iVar3);
  }
  dVar9 = (double)fVar1;
  dVar10 = 0.5;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      dVar7 = 20.0;
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) != 0) {
          dVar8 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(param_1 + 0x58));
          iVar5 = fastfunc::FastDoubleToInt
                            ((double)(float)(dVar9 * (double)(float)(dVar8 + dVar7) + dVar10));
        }
      }
      else {
        dVar8 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(param_1 + 0x58));
        iVar5 = fastfunc::FastDoubleToInt
                          ((double)(float)(dVar9 * (double)(float)(dVar8 + dVar7) + dVar10));
        iVar5 = -iVar5;
      }
    }
    else {
      dVar7 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(param_1 + 0x5c));
      iVar4 = fastfunc::FastDoubleToInt
                        ((double)(float)(dVar9 * (double)(float)(dVar7 + 52.0) + dVar10));
    }
  }
  else {
    dVar7 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(param_1 + 0x5c));
    iVar4 = fastfunc::FastDoubleToInt
                      ((double)(float)(dVar9 * (double)(float)(dVar7 + 52.0) + dVar10));
    iVar4 = -iVar4;
  }
  *param_2 = *param_2 + iVar5;
  *param_3 = *param_3 + iVar4;
  return;
}



//==== 000c8e10  ns=hud  size=0x124
// sig: void HudEntry_CalcNumberSize(int entry)
// callers(11): 000c8f40 hud::HudEntry_InitCounter; 000c8fc0 hud::HudEntry_InitCounter32; 000c9d28 hud::OxygenHud_Init; 000cb228 hud::Moby185Hud_Init; 000cbaf8 hud::PromptHud_Init; 000cce10 hud::Moby849Hud_Init; 000d02a0 hud::HealthHud_Init; 000d0e80 hud::AmmoHud_Init; 000d0f00 hud::BoltHud_Init; 000d17d8 hud::UnusedIconHud_Init; 000d1ff0 hud::TrickHud_Init
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hud::HudEntry_CalcNumberSize(int entry)

{
  int *piVar1;
  int iVar3;
  longlong lVar2;
  int iVar4;
  
  piVar1 = *(int **)(entry + 0xc);
  iVar4 = *(int *)(entry + 8);
  if ((piVar1 == (int *)0x0) || (((uint)piVar1 & 3) != 0)) {
    iVar3 = 99999;
  }
  else {
    iVar3 = *piVar1;
    iVar3 = iVar3 + ((uint)((longlong)iVar4 - (longlong)iVar3 >> 0x3f) & iVar4 - iVar3);
  }
  *(int *)(entry + 0x78) = iVar3;
  *(int *)(entry + 0x74) = iVar3;
  lVar2 = 0;
  for (; 9 < iVar4; iVar4 = iVar4 / 10) {
    lVar2 = lVar2 + 1;
  }
  if (((*(uint *)(entry + 0x60) & 3) == 0) && ((*(uint *)(entry + 0x60) & 0xc) != 0)) {
    iVar4 = *(int *)(entry + 0x58);
    iVar3 = (int)lVar2 * 0xc + *(int *)(entry + 0x5c) + 0xc;
    iVar4 = iVar4 + ((uint)((longlong)iVar4 + -0xe >> 0x3f) & 0xeU - iVar4);
  }
  else {
    iVar3 = *(int *)(entry + 0x5c);
    iVar4 = (int)(lVar2 << 4) + (int)lVar2 * -2 + *(int *)(entry + 0x58) + 0xe;
    iVar3 = iVar3 + ((uint)((longlong)iVar3 + -0xc >> 0x3f) & 0xcU - iVar3);
  }
  *(int *)(entry + 0x5c) = iVar3;
  *(int *)(entry + 0x58) = iVar4;
  return;
}



//==== 000c8f40  ns=hud  size=0x74
// sig: undefined HudEntry_InitCounter(void)
// callers(0): 
// callees(1): 000c8e10 hud::HudEntry_CalcNumberSize

void hud::HudEntry_InitCounter(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xc8f34);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xc8f34);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2._0_4_ + auVar3._0_4_)) & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  return;
}



//==== 000c8fc0  ns=hud  size=0x80
// sig: undefined HudEntry_InitCounter32(void)
// callers(0): 
// callees(1): 000c8e10 hud::HudEntry_CalcNumberSize

void hud::HudEntry_InitCounter32(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xc8fb4);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xc8fb4);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2._0_4_ + auVar3._0_4_)) & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x20;
  *(undefined4 *)(entry + 0x5c) = 0x20;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  return;
}



//==== 000c9040  ns=hud  size=0x60
// sig: undefined Hud_SetEntryPosById(void)
// callers(0): 
// callees(0): 

void hud::Hud_SetEntryPosById
               (int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
               undefined2 param_5)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 0;
  piVar2 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar2 == param_1) break;
    lVar3 = lVar3 + 1;
    piVar2 = piVar2 + 0x24;
  } while ((int)lVar3 < 0xd);
  if ((int)lVar3 < 0xd) {
    iVar1 = (int)(lVar3 << 7) + (int)(lVar3 << 4);
    *(undefined4 *)((int)&HudEntries[0].width + iVar1) = param_2;
    *(undefined4 *)((int)&HudEntries[0].height + iVar1) = param_3;
    *(undefined2 *)((int)&HudEntries[0].offsX + iVar1) = param_4;
    *(undefined2 *)((int)&HudEntries[0].offsY + iVar1) = param_5;
  }
  return;
}



//==== 000c90a0  ns=hud  size=0x90
// sig: int Hud_ShowEntryById(int id, int time)
// callers(7): 000be228 hero::HeroMovement; 0011ae14 mobyutil::MB_HandleGameplayHud; 0013b838 pause::UpdatePause; 00166fb0 update::UpdateGameplay; 00186c78 mobyupdate_helpers::M1012_00186c78; 00371520 mobyupdate_unsorted::UpdateMoby_429; 004d3870 FUN_004d3870
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hud::Hud_ShowEntryById(int id,int time)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar3 == id) break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x24;
  } while (iVar2 < 0xd);
  if ((iVar2 < 0xd) && (HudEntries[iVar2].locked == 0)) {
    iVar1 = 0;
    HudEntries[iVar2].showTimer =
         time + ((uint)((longlong)time - (longlong)HudEntries[iVar2].showTimer >> 0x3f) &
                HudEntries[iVar2].showTimer - time);
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



//==== 000c9138  ns=hud  size=0x23c
// sig: undefined HudIcon_GetAnimFrame(void)
// callers(4): 000c9390 hud::HudEntry_UpdateCounter; 000c96b0 hud::HudEntry_UpdateCounterSlide; 000d0360 hud::HealthHud_Update; 000d1898 hud::UnusedIconHud_Update
// callees(1): 000fc620 mobyutil::MB_randInt

uint hud::HudIcon_GetAnimFrame(short *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  
  uVar5 = 0;
  psVar6 = (short *)((int)&IconTableEntry->iconId + (int)((longlong)*param_1 << 3));
  if (*psVar6 != -1) {
    bVar1 = *(byte *)(param_1 + 1);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar5 = (uint)(ushort)psVar6[2];
      }
      else {
        iVar4 = (worldUpdateTime - *(int *)(param_1 + 6)) / (int)(uint)*(byte *)((int)psVar6 + 7);
        uVar5 = (uint)(ushort)psVar6[2] +
                (iVar4 - (iVar4 / (int)(uint)(ushort)psVar6[1]) * (uint)(ushort)psVar6[1]);
      }
    }
    else if (bVar1 < 3) {
      uVar2 = psVar6[1];
      iVar4 = (worldUpdateTime - *(int *)(param_1 + 6)) / (int)(uint)*(byte *)((int)psVar6 + 7);
      iVar3 = iVar4 / (int)((uint)uVar2 * 2 + -2);
      iVar4 = iVar4 - (iVar3 * (uint)uVar2 * 2 + iVar3 * -2);
      iVar3 = ((uint)uVar2 * 2 - iVar4) + -2;
      uVar5 = iVar3 + ((uint)((longlong)((longlong)iVar4 - (ulonglong)uVar2) >> 0x3f) &
                      iVar4 - iVar3) + (uint)(ushort)psVar6[2];
    }
    else if (bVar1 < 4) {
      if (*(int *)(param_1 + 6) < worldUpdateTime) {
        iVar4 = (worldUpdateTime - *(int *)(param_1 + 6)) / (int)(uint)*(byte *)((int)psVar6 + 7);
        iVar3 = (uint)(ushort)psVar6[1] * 2;
        if (iVar4 < iVar3 + -2) {
          iVar3 = (iVar3 - iVar4) + -2;
          uVar5 = iVar3 + ((uint)((longlong)((longlong)iVar4 - (ulonglong)(ushort)psVar6[1]) >> 0x3f
                                 ) & iVar4 - iVar3) + (uint)(ushort)psVar6[2];
        }
        else {
          uVar5 = (uint)(ushort)psVar6[2];
          iVar4 = mobyutil::MB_randInt((int)(animationSpeed * 30.5));
          *(uint *)(param_1 + 6) =
               (uint)(ushort)psVar6[1] * 2 + (int)(animationSpeed * 10.5) + iVar4;
        }
      }
      else {
        uVar5 = *(uint *)(param_1 + 2);
      }
    }
  }
  *(uint *)(param_1 + 2) = uVar5;
  return uVar5;
}



//==== 000c9390  ns=hud  size=0x310
// sig: undefined HudEntry_UpdateCounter(void)
// callers(3): 000c9fb0 hud::OxygenHud_Update; 000cbb78 hud::PromptHud_Update; 000cce90 hud::Moby849Hud_Update
// callees(3): 000c9138 hud::HudIcon_GetAnimFrame; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void hud::HudEntry_UpdateCounter(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  char cVar8;
  uint uVar7;
  int iVar10;
  longlong lVar9;
  undefined8 in_LR;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  iVar4 = (int)param_1;
  iVar10 = *(int *)(iVar4 + 0x78);
  iVar1 = *(int *)(iVar4 + 0x6c);
  iVar2 = *(int *)(iVar4 + 0x74);
  if (*(int **)(iVar4 + 0xc) != (int *)0x0) {
    iVar10 = **(int **)(iVar4 + 0xc);
    iVar10 = iVar10 + (iVar10 >> 0x1f & -iVar10);
    iVar10 = iVar10 + ((uint)((longlong)*(int *)(iVar4 + 8) - (longlong)iVar10 >> 0x3f) &
                      *(int *)(iVar4 + 8) - iVar10);
    *(int *)(iVar4 + 0x78) = iVar10;
  }
  if (iVar2 != iVar10) {
    auVar12 = ZEXT416(0xffffffff);
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar12 = loadVectorLeftIndexed(in_LR,0xc9374);
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                         auVar13);
    auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar4 + 0x7cU & 0xfffffffc) = uVar3;
    if (0x17 < iVar1) {
      lVar9 = (longlong)(iVar2 - iVar10);
      lVar9 = lVar9 + (lVar9 >> 0x3f & lVar9 * -2);
      iVar10 = (int)lVar9;
      if (iVar10 != 0) {
        dVar11 = (double)fastfunc::FastIntToDouble(lVar9);
        lVar9 = fastfunc::FastDoubleToInt
                          ((double)(SQRT((float)(dVar11 * 0.03999999910593033)) * 5.0));
        iVar1 = *(int *)(iVar4 + 0x74);
        iVar10 = iVar10 * (int)(animationSpeed * 2.5);
        if ((int)lVar9 < iVar10 / (int)(animationSpeed * 10.5)) {
          lVar9 = (longlong)(iVar10 / (int)(animationSpeed * 10.5));
        }
        lVar6 = lVar9 + ((longlong)(int)lVar9 + -1 >> 0x3f & 1U - lVar9);
        lVar9 = (ulonglong)*(byte *)(iVar4 + 0x73) +
                lVar6 + (0x79 - (longlong)(int)lVar9 >> 0x3f & 0x79U - lVar6);
        cVar8 = (char)lVar9;
        *(char *)(iVar4 + 0x73) = cVar8;
        uVar7 = (uint)lVar9 & 0xff;
        if ((int)(animationSpeed * 2.5) < (int)uVar7) {
          iVar10 = (int)uVar7 / (int)(animationSpeed * 2.5);
          fVar5 = animationSpeed * 2.5;
          *(uint *)(iVar4 + 0x74) =
               iVar1 + iVar10 +
               ((uint)((longlong)*(int *)(iVar4 + 0x78) - (longlong)iVar1 >> 0x3f) &
               (iVar1 - iVar10) - (iVar1 + iVar10));
          *(char *)(iVar4 + 0x73) = cVar8 - (char)iVar10 * (char)(int)fVar5;
        }
      }
    }
  }
  if (*(int *)(iVar4 + 0x7c) < (int)(animationSpeed * 5.5)) {
    cVar8 = *(char *)(iVar4 + 0x71);
    if ((cVar8 != '\0') || (*(char *)(iVar4 + 0x70) != '\0')) {
      *(undefined4 *)(iVar4 + 0x6c) = 1;
    }
    if (cVar8 == '\0') {
      if (*(char *)(iVar4 + 0x70) != '\0') {
        *(char *)(iVar4 + 0x70) = *(char *)(iVar4 + 0x70) + -1;
      }
    }
    else {
      *(char *)(iVar4 + 0x71) = cVar8 + -1;
    }
  }
  else if ((int)(uint)*(byte *)(iVar4 + 0x70) < (int)(animationSpeed * 8.5)) {
    *(byte *)(iVar4 + 0x70) = *(byte *)(iVar4 + 0x70) + 1;
  }
  else if ((int)(uint)*(byte *)(iVar4 + 0x71) < (int)(animationSpeed * 8.5)) {
    *(byte *)(iVar4 + 0x71) = *(byte *)(iVar4 + 0x71) + 1;
  }
  HudIcon_GetAnimFrame(param_1 + 0x40);
  return;
}



//==== 000c96b0  ns=hud  size=0x170
// sig: undefined HudEntry_UpdateCounterSlide(void)
// callers(1): 000cb4b0 hud::Moby185Hud_Update
// callees(1): 000c9138 hud::HudIcon_GetAnimFrame

void hud::HudEntry_UpdateCounterSlide(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 in_LR;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  iVar5 = (int)param_1;
  iVar8 = *(int *)(iVar5 + 0x78);
  iVar3 = *(int *)(iVar5 + 0x6c);
  bVar1 = *(byte *)(iVar5 + 0x70);
  uVar7 = (uint)bVar1;
  bVar2 = *(byte *)(iVar5 + 0x71);
  uVar6 = (uint)bVar2;
  if (*(int **)(iVar5 + 0xc) != (int *)0x0) {
    iVar8 = **(int **)(iVar5 + 0xc);
    iVar8 = iVar8 + (iVar8 >> 0x1f & -iVar8);
    iVar8 = iVar8 + ((uint)((longlong)*(int *)(iVar5 + 8) - (longlong)iVar8 >> 0x3f) &
                    *(int *)(iVar5 + 8) - iVar8);
    *(int *)(iVar5 + 0x78) = iVar8;
  }
  if (*(int *)(iVar5 + 0x74) != iVar8) {
    auVar10 = ZEXT416(0xffffffff);
    auVar9 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar10 = loadVectorLeftIndexed(in_LR,0xc96a0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar9);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar5 + 0x7cU & 0xfffffffc) = uVar4;
    if (0x17 < iVar3) {
      *(int *)(iVar5 + 0x74) = iVar8;
    }
  }
  if (*(int *)(iVar5 + 0x7c) < (int)(animationSpeed * 5.5)) {
    if ((uVar6 != 0) || (uVar7 != 0)) {
      *(undefined4 *)(iVar5 + 0x6c) = 1;
    }
    if (uVar6 == 0) {
      if (uVar7 != 0) {
        *(byte *)(iVar5 + 0x70) = bVar1 - 1;
      }
    }
    else {
      *(byte *)(iVar5 + 0x71) = bVar2 - 1;
    }
  }
  else if ((int)uVar7 < (int)(animationSpeed * 8.5)) {
    *(byte *)(iVar5 + 0x70) = bVar1 + 1;
  }
  else if ((int)uVar6 < (int)(animationSpeed * 8.5)) {
    *(byte *)(iVar5 + 0x71) = bVar2 + 1;
  }
  HudIcon_GetAnimFrame(param_1 + 0x40);
  return;
}



//==== 000c9820  ns=stub  size=0x4
// sig: undefined STUB_000c9820(void)
// callers(0): 
// callees(0): 

void stub::STUB_000c9820(void)

{
  return;
}



//==== 000c9824  ns=hud  size=0x324
// sig: undefined HudEntry_DrawLargeNumber(void)
// callers(1): 000c9b48 hud::Draw_LargeNumberHud
// callees(2): 0006fcfc draw::FontPrintLarge; 000c8c08 hud::HudEntry_GetSlideOffset

int hud::HudEntry_DrawLargeNumber
              (int param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [16];
  
  iVar12 = 0;
  if (((*(uint *)(param_1 + 0x60) & 3) == 0) && ((*(uint *)(param_1 + 0x60) & 0xc) != 0)) {
    iVar9 = 0;
    iVar8 = 0xc;
    iVar11 = 0;
    iVar10 = *(int *)(param_1 + 0x58) + -0xe >> 1;
  }
  else {
    iVar8 = 0;
    iVar11 = *(int *)(param_1 + 0x5c) + -0xc >> 1;
    iVar9 = 0xe;
    iVar10 = 0;
  }
  lVar6 = 0;
  if (9 < param_2) {
    lVar6 = 0;
    do {
      lVar6 = (longlong)((int)lVar6 + 1);
      param_2 = param_2 / 10;
    } while (9 < param_2);
  }
  lVar1 = lVar6 << 4;
  iVar5 = (int)lVar6;
  if (-1 < iVar5) {
    do {
      iVar7 = (int)lVar6;
      iVar2 = iVar7 * iVar8 + param_4;
      iVar3 = iVar7 * iVar9 + param_3 + iVar12;
      HudEntry_GetSlideOffset(param_1,local_a0,local_9c,param_5,lVar6);
      draw::FontPrintLarge
                (iVar3 + iVar10 + -1,iVar2 + iVar11 + 1,0xc0000000,local_98,0xffffffffffffffff);
      draw::FontPrintLarge(iVar3 + iVar10,iVar2 + iVar11,0xc0008080,local_98,0xffffffffffffffff);
      if (((iVar5 - iVar7 == 5) && (5 < iVar5)) || ((iVar5 - iVar7 == 2 && (2 < iVar5)))) {
        puVar4 = &DAT_006520d0;
        if ((g_Language == 3) || (g_Language == 5)) {
          puVar4 = &DAT_006520d8;
        }
        draw::FontPrintLarge
                  (iVar3 + iVar10 + -5,iVar2 + iVar11 + 1,0xc0000000,puVar4,0xffffffffffffffff);
        draw::FontPrintLarge
                  (iVar3 + iVar10 + -4,iVar2 + iVar11,0xc0008080,puVar4,0xffffffffffffffff);
        iVar12 = iVar12 + -4;
      }
      lVar6 = (longlong)(iVar7 + -1);
    } while (-1 < iVar7 + -1);
  }
  return (int)lVar1 + iVar5 * -2 + 0xe;
}



//==== 000c9b48  ns=hud  size=0xec
// sig: undefined Draw_LargeNumberHud(void)
// callers(0): 
// callees(2): 000c8c08 hud::HudEntry_GetSlideOffset; 000c9824 hud::HudEntry_DrawLargeNumber

undefined4 hud::Draw_LargeNumberHud(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  
  iVar4 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x54);
  uVar1 = *(uint *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x58);
  if (((uVar1 & 1) == 0) && ((uVar1 & 2) == 0)) {
    iVar3 = iVar3 - (*(int *)(param_1 + 0x5c) >> 1);
  }
  if ((uVar1 & 4) == 0) {
    iVar4 = iVar4 - (iVar2 + ((uint)((LZCOUNT(-(uVar1 & 8)) << 0x3a) >> 0x3f) & (iVar2 >> 1) - iVar2
                             ));
  }
  HudEntry_DrawLargeNumber
            (param_1,*(undefined4 *)(param_1 + 0x74),iVar4,iVar3,*(undefined4 *)(param_1 + 0x6c));
  HudEntry_GetSlideOffset(param_1,local_10,local_c,*(undefined4 *)(param_1 + 0x6c),0);
  return *(undefined4 *)(param_1 + 0x58);
}



//==== 000c9c34  ns=hud  size=0xc8
// sig: undefined ???_Unused_HudEntry_GetSlideField58(void)
// callers(0): 
// callees(1): 000c8c08 hud::HudEntry_GetSlideOffset

undefined4 hud::____Unused_HudEntry_GetSlideField58(int param_1)

{
  undefined1 local_10 [4];
  undefined1 local_c [4];
  
  HudEntry_GetSlideOffset(param_1,local_10,local_c,*(undefined4 *)(param_1 + 0x6c),0);
  return *(undefined4 *)(param_1 + 0x58);
}



//==== 000c9d28  ns=hud  size=0x280
// sig: undefined OxygenHud_Init(void)
// callers(0): 
// callees(2): 000c8e10 hud::HudEntry_CalcNumberSize; 000fcbe8 mobyutil::MB_randRangeFloat

void hud::OxygenHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar18 = ZEXT416(0xffffffff);
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
  iVar2 = 0;
  auVar18 = loadVectorLeftIndexed(in_LR,0xc9cfc);
  auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,auVar19
                      );
  auVar19 = loadVectorLeftIndexed(4,0xc9cfc);
  auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
  auVar18 = ZEXT416((uint)(auVar18._0_4_ + auVar19._0_4_)) & (undefined1  [16])0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  dVar10 = 2.0;
  dVar11 = 232.0;
  dVar12 = 116.0;
  dVar13 = 17.0;
  pfVar3 = (float *)&DAT_00a1c1a0;
  dVar14 = -0.4000000059604645;
  dVar15 = 0.4000000059604645;
  dVar16 = -0.6000000238418579;
  pfVar5 = (float *)&DAT_00a1c1a8;
  dVar17 = 0.6000000238418579;
  pfVar4 = (float *)&DAT_00a1c1a4;
  pfVar6 = (float *)&DAT_00a1c1ac;
  do {
    if (iVar2 < 10) {
      dVar7 = (double)DAT_00724320;
    }
    else if (iVar2 < 0x14) {
      dVar7 = (double)DAT_00724324;
    }
    else {
      dVar7 = (double)DAT_00724328;
    }
    dVar8 = (double)(-(float)(dVar7 * dVar10 - dVar11) / (float)(longlong)DAT_0072432c);
    dVar9 = (double)(float)((double)(longlong)(iVar2 - (iVar2 / DAT_0072432c) * DAT_0072432c) *
                            dVar8 + (double)(float)(dVar7 - dVar12));
    dVar8 = (double)(float)(dVar9 + dVar8);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)(dVar7 - dVar13),(float)(dVar13 - dVar7));
    *pfVar3 = (float)dVar7;
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar8);
    *pfVar4 = (float)dVar7;
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)dVar7;
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
    *pfVar6 = (float)dVar7;
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)((double)*pfVar5 + dVar7);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
    *pfVar6 = (float)((double)*pfVar6 + dVar7);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)((double)*pfVar5 + dVar7);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 4;
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + 4;
    *pfVar6 = (float)((double)*pfVar6 + dVar7);
    pfVar6 = pfVar6 + 4;
  } while (iVar2 < 100);
  return;
}



//==== 000c9fb0  ns=hud  size=0x144
// sig: undefined OxygenHud_Update(void)
// callers(0): 
// callees(1): 000c9390 hud::HudEntry_UpdateCounter

void hud::OxygenHud_Update(void)

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
  int iVar10;
  float *pfVar11;
  
  HudEntry_UpdateCounter();
  fVar9 = DAT_00724328;
  fVar8 = DAT_00724324;
  fVar7 = DAT_00724320;
  iVar10 = DAT_0159c330 +
           (((int)DAT_0159c330 >> 1) + (uint)((int)DAT_0159c330 < 0 && (DAT_0159c330 & 1) != 0)) *
           -2;
  pfVar11 = (float *)(&DAT_00a1c1a0 + iVar10 * 4);
  for (; iVar10 < 100; iVar10 = iVar10 + 2) {
    fVar3 = fVar7;
    if ((9 < iVar10) && (fVar3 = fVar9, iVar10 < 0x1e)) {
      fVar3 = fVar8;
    }
    fVar1 = pfVar11[2];
    fVar4 = fVar3 - 17.0;
    fVar2 = pfVar11[3];
    fVar3 = fVar3 - 116.0;
    fVar5 = *pfVar11 + fVar1;
    fVar6 = pfVar11[1] + fVar2;
    *pfVar11 = fVar5;
    pfVar11[1] = fVar6;
    if (fVar5 < fVar4) {
      fVar1 = -fVar1;
      *pfVar11 = fVar4;
      pfVar11[2] = fVar1;
      fVar5 = fVar4;
    }
    if (-fVar4 < fVar5) {
      *pfVar11 = -fVar4;
      pfVar11[2] = -fVar1;
    }
    if (fVar6 < fVar3) {
      fVar2 = -fVar2;
      pfVar11[1] = fVar3;
      pfVar11[3] = fVar2;
      fVar6 = fVar3;
    }
    if (-fVar3 < fVar6) {
      pfVar11[1] = -fVar3;
      pfVar11[3] = -fVar2;
    }
    pfVar11 = pfVar11 + 8;
  }
  return;
}



//==== 000ca0f4  ns=hud  size=0x2c8
// sig: undefined Hud_DrawTexQuad_v2(void)
// callers(6): 000ca3bc hud::Hud_DrawTexQuad_v2_Fixed; 000caa88 hud::DrawOxygenMeter; 000cb620 hud::Draw_Moby185Meter; 0013c5e8 pause::DrawTVTextures; 0013fd08 pause::IconList_Draw; 00144ec0 pause::MenuButton_Draw
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexQuad_v2
               (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               int param_6)

{
  uint uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  
  iVar4 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  uVar1 = *(uint *)(iVar4 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = param_6 << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar2 = param_4 + param_2 & 0xffff;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 000ca3bc  ns=hud  size=0x28
// sig: undefined Hud_DrawTexQuad_v2_Fixed(void)
// callers(1): 000e2e10 map::DrawMapFrame
// callees(1): 000ca0f4 hud::Hud_DrawTexQuad_v2

void hud::Hud_DrawTexQuad_v2_Fixed(undefined8 param_1,int param_2,int param_3)

{
  Hud_DrawTexQuad_v2(param_1,param_2 >> 4,param_3 >> 4);
  return;
}



//==== 000ca3e4  ns=hud  size=0x80
// sig: undefined GetIconFrameTex(void)
// callers(17): 000e0e60 main::startLevel; 000e2e10 map::DrawMapFrame; 0013c5e8 pause::DrawTVTextures; 0013fd08 pause::IconList_Draw; 00144084 pause::DrawSoundOptionsFrame; 00144638 pause::DrawSkillPointsFrame; 00144ec0 pause::MenuButton_Draw; 00147cf8 pause::DrawMissionsFrame; 00149f88 pause::SlotConfig_Draw; 0014ad88 pause::DrawCameraSettingsFrame; 0014bf78 pause::MenuIconText_Draw; 0014d49c pause::DrawUnusedCompletedGameFrame; 0014d63c pause::Draw_GameCompletedFrame; 0014ec5c pause::DrawSaveLoadFrame; 0016f9a8 vendor::DrawVendorHintFrame; 0017007c vendor::DrawWeaponIcons; 004d27b0 idol_draw::DrawGalacticMapFrame
// callees(0): 

int hud::GetIconFrameTex(uint param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  IconTableEntries *pIVar3;
  
                    /* The UiTexCategory categories can be inspected closer in replanetizer via it's
                       UI textures tab in the textureframe */
  uVar1 = 0;
  pIVar3 = IconTableEntry;
  while (pIVar3->iconId != param_1 && pIVar3->iconId != 0xffff) {
    pIVar3 = pIVar3 + 1;
    uVar1 = uVar1 + 1;
  }
  iVar2 = (int)((uVar1 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar2) == -1) ||
     ((int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar2) <= param_2)) {
    param_2 = 0;
  }
  else {
    param_2 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar2) + param_2;
  }
  return param_2;
}



//==== 000ca464  ns=hud  size=0x2c8
// sig: undefined Hud_DrawTexQuad_v3(void)
// callers(3): 000caa88 hud::DrawOxygenMeter; 000cb620 hud::Draw_Moby185Meter; 000ccfa8 hud::Draw_Moby849Meter
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexQuad_v3
               (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               int param_6)

{
  uint uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  
  iVar4 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  uVar1 = *(uint *)(iVar4 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = param_6 << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar2 = param_4 + param_2 & 0xffff;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 000ca72c  ns=hud  size=0x324
// sig: undefined DrawFlatOverlay(void)
// callers(20): 000caa88 hud::DrawOxygenMeter; 000ccf78 hud::DrawFlatOverlay_Fixed; 000ccfa8 hud::Draw_Moby849Meter; 000d1df4 hud::Draw_MobyMeterHud; 000d3610 hud::Draw_MobyHealthBarHud; 000e2e10 map::DrawMapFrame; 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 0013fd08 pause::IconList_Draw; 00144084 pause::DrawSoundOptionsFrame; 00144638 pause::DrawSkillPointsFrame; 00144ec0 pause::MenuButton_Draw; 00146b14 pause::GoldBoltWidget_Update; 00147cf8 pause::DrawMissionsFrame; 00149f88 pause::SlotConfig_Draw; 0014ad88 pause::DrawCameraSettingsFrame; 0014d63c pause::Draw_GameCompletedFrame; 0014ec5c pause::DrawSaveLoadFrame; 00170490 vendor::DrawWeaponStrings; 004d27b0 idol_draw::DrawGalacticMapFrame
// callees(3): 000685c4 draw::GetEffectTex; 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::DrawFlatOverlay
               (RsxCmd param_1,ulonglong param_2,RsxCmd param_3,ulonglong param_4,ulonglong param_5,
               int param_6)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = EffectTexHeaders;
  iVar5 = draw::GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4 + iVar5 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] =
       (RsxCmd)((param_5 >> 8 & 0xff) << 8) |
       (RsxCmd)((param_5 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((param_5 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)param_5 & 0xff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  if (param_6 == 0) {
    RVar1 = param_1 - 1 & 0xffff;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_2 - 1 & 0xffffffff) << 0x10) | RVar1;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    RVar2 = param_3 - 1 & 0xffff;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_4 - 1 & 0xffffffff) << 0x10) | RVar1;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_4 - 1 & 0xffffffff) << 0x10) | RVar2;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_2 - 1 & 0xffffffff) << 0x10) | RVar2;
    pRVar3->command = pRVar3->command + 2;
  }
  else {
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_4 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_4 & 0xffffffff) << 0x10) | param_3 & 0xffff;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | param_3 & 0xffff;
    pRVar3->command = pRVar3->command + 2;
  }
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 000caa88  ns=hud  size=0x778
// sig: undefined DrawOxygenMeter(void)
// callers(0): 
// callees(5): 000816ec hero::Hero_PlaySound; 000c8c08 hud::HudEntry_GetSlideOffset; 000ca0f4 hud::Hud_DrawTexQuad_v2; 000ca464 hud::Hud_DrawTexQuad_v3; 000ca72c hud::DrawFlatOverlay
// strings: 0072433c: '?fff' (raw)

uint hud::DrawOxygenMeter(uint *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar6;
  ulonglong uVar5;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  IconTableEntries *pIVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  int iVar16;
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
  int local_a0;
  uint local_9c [5];
  
  uVar4 = DAT_00724330;
  iVar16 = 0;
  iVar6 = 0;
  local_9c[0] = param_1[0x15];
  uVar11 = param_1[0x18];
  bVar1 = *(byte *)(g_viewMtxPtr + 0x11);
  if (*(int *)(g_viewMtxPtr + 0xc) == 0) {
    iVar6 = -0x50;
    if (bVar1 == 5) {
      iVar6 = -0x3c;
    }
  }
  else if (bVar1 == 5) {
    iVar6 = 0x14;
  }
  local_a0 = param_1[0x14] +
             iVar6 + ((uint)((LZCOUNT(0x81 - (uint)bVar1) << 0x3a) >> 0x3f) & 0x14U - iVar6);
  param_1[0x16] = DAT_00724330;
  uVar9 = DAT_00724334;
  param_1[0x17] = DAT_00724334;
  if (((uVar11 & 1) == 0) && ((uVar11 & 2) == 0)) {
    local_9c[0] = local_9c[0] - ((int)uVar9 >> 1);
  }
  if ((uVar11 & 4) == 0) {
    local_a0 = local_a0 -
               (uVar4 + ((uint)((LZCOUNT(-(uVar11 & 8)) << 0x3a) >> 0x3f) &
                        ((int)uVar4 >> 1) - uVar4));
  }
  HudEntry_GetSlideOffset(param_1,&local_a0,local_9c,param_1[0x1b],0);
  uVar4 = DAT_00724330 * 0xd0;
  uVar9 = DAT_00724334 * 0xea0;
  uVar12 = DAT_00724330 * 0x260;
  uVar11 = DAT_00724334 * 0xa0;
  iVar6 = (local_a0 + *(short *)(param_1 + 0x12)) * 0x10 +
          ((int)uVar4 >> 6) + (uint)((int)uVar4 < 0 && (uVar4 & 0x3f) != 0);
  iVar7 = (local_9c[0] + (int)*(short *)((int)param_1 + 0x4a)) * 0x10 +
          ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
  DrawFlatOverlay(iVar6,iVar7,
                  iVar6 + ((int)uVar12 >> 6) + (uint)((int)uVar12 < 0 && (uVar12 & 0x3f) != 0),
                  iVar7 + ((int)uVar9 >> 8) + (uint)((int)uVar9 < 0 && (uVar9 & 0xff) != 0),
                  0x80684c2f,1);
  uVar11 = 0;
  if ((int)(param_1[0x1d] * 3) < 0x2711) {
    iVar6 = (int)((float)(longlong)(animationSpeed * 1.5) * 60.0);
    uVar11 = (uint)((ulonglong)
                    ((longlong)((DAT_0159c330 + -1) - ((DAT_0159c330 + -1) / iVar6) * iVar6) -
                    (longlong)(int)(animationSpeed * 0.75 * 60.0)) >> 0x3f);
  }
  uVar15 = 0;
  if ((int)(param_1[0x1d] * 3) < 0x2711) {
    iVar6 = (int)((float)(longlong)(animationSpeed * 1.5) * 60.0);
    uVar15 = (ulonglong)
             ((longlong)(DAT_0159c330 - (DAT_0159c330 / iVar6) * iVar6) -
             (longlong)(int)(animationSpeed * 0.75 * 60.0)) >> 0x3f;
  }
  if (uVar11 == 0 && (uint)uVar15 == 1) {
    hero::Hero_PlaySound(0xb,0);
  }
  uVar5 = 0;
  iVar6 = 0;
  while( true ) {
    uVar11 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar6);
    if (uVar11 == *param_1 || uVar11 == 0xffff) break;
    iVar6 = iVar6 + 8;
    uVar5 = uVar5 + 1;
  }
  iVar6 = (int)((uVar5 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar6) == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if ((uint)uVar15 < (uint)*(ushort *)((int)&IconTableEntry->unknown + iVar6)) {
      lVar8 = *(ushort *)((int)&IconTableEntry->variantsCnt + iVar6) + uVar15;
    }
  }
  Hud_DrawTexQuad_v3(lVar8,local_a0 + *(short *)(param_1 + 0x12),
                     local_9c[0] + (int)*(short *)((int)param_1 + 0x4a),DAT_00724330,DAT_00724334,
                     0x80);
  dVar27 = 16.0;
  uVar15 = 0;
  fVar2 = (float)(longlong)(int)DAT_00724330 * DAT_00724338 * 0.5;
  fVar3 = (float)(longlong)(int)DAT_00724334 * DAT_0072433c * 0.5;
  dVar30 = (double)(fVar2 * 0.05882353 * 16.0);
  dVar22 = (double)(fVar3 * 0.00862069 * 16.0);
  dVar31 = (double)(((1.0 - DAT_00724338) * 0.5 * (float)(longlong)(int)DAT_00724330 +
                    fVar2 + (float)(longlong)(local_a0 + *(short *)(param_1 + 0x12))) * 16.0);
  dVar29 = (double)(((1.0 - DAT_0072433c) * 0.5 * (float)(longlong)(int)DAT_00724334 +
                    fVar3 + (float)(longlong)
                                   (int)(local_9c[0] + (int)*(short *)((int)param_1 + 0x4a))) * 16.0
                   );
  dVar28 = -(double)((float)(longlong)(int)(10000 - param_1[0x1d]) * 0.0001 * 2.0 * 116.0 - 116.0);
  pIVar10 = IconTableEntry;
  while ((uint)pIVar10->iconId != *param_1 && pIVar10->iconId != 0xffff) {
    pIVar10 = pIVar10 + 1;
    uVar15 = uVar15 + 1;
  }
  iVar6 = (int)((uVar15 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar6) == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (2 < *(ushort *)((int)&IconTableEntry->unknown + iVar6)) {
      lVar8 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar6) + 2;
    }
  }
  dVar18 = (double)DAT_00724328;
  iVar6 = 0;
  dVar25 = (double)DAT_00724320;
  dVar17 = (double)DAT_00724324;
  pfVar14 = (float *)&DAT_00a1c1a4;
  pfVar13 = (float *)&DAT_00a1c1a0;
  dVar21 = 32.0;
  dVar20 = 0.0625;
  dVar23 = (double)(float)(dVar18 - dVar17);
  dVar24 = (double)(float)(dVar17 - dVar25);
  dVar19 = dVar18;
  dVar26 = dVar25;
  do {
    if (iVar6 == 0) {
      dVar31 = -(double)(float)(dVar26 * dVar27 - dVar31);
      dVar29 = -(double)(float)(dVar26 * dVar27 - dVar29);
      dVar28 = (double)(float)(dVar25 + dVar28);
      iVar16 = (int)(dVar25 * dVar21);
    }
    else if (iVar6 == 10) {
      dVar31 = -(double)(float)(dVar24 * dVar27 - dVar31);
      dVar29 = -(double)(float)(dVar24 * dVar27 - dVar29);
      iVar16 = (int)(dVar17 * dVar21);
      dVar28 = (double)(float)(dVar28 + (double)(float)(dVar17 - dVar25));
    }
    else if (iVar6 == 0x1e) {
      dVar31 = -(double)(float)(dVar23 * dVar27 - dVar31);
      dVar29 = -(double)(float)(dVar23 * dVar27 - dVar29);
      dVar28 = (double)(float)(dVar28 + (double)(float)(dVar18 - dVar17));
      iVar16 = (int)(dVar19 * dVar21);
      dVar18 = dVar19;
    }
    if ((double)*pfVar14 <= dVar28) {
      Hud_DrawTexQuad_v2(lVar8,(int)((double)*pfVar13 * dVar30 + dVar31) >> 4,
                         (int)(dVar29 + -(double)(float)((double)pfVar13[1] * dVar22)) >> 4,
                         (int)((double)(longlong)iVar16 * dVar20),
                         (int)((double)(longlong)iVar16 * dVar20),0x80);
      dVar18 = (double)DAT_00724328;
      dVar25 = (double)DAT_00724320;
      dVar17 = (double)DAT_00724324;
      dVar19 = dVar18;
    }
    iVar6 = iVar6 + 1;
    pfVar14 = pfVar14 + 4;
    pfVar13 = pfVar13 + 4;
  } while (iVar6 < 100);
  return param_1[0x16];
}



//==== 000cb228  ns=hud  size=0x280
// sig: undefined Moby185Hud_Init(void)
// callers(0): 
// callees(2): 000c8e10 hud::HudEntry_CalcNumberSize; 000fcbe8 mobyutil::MB_randRangeFloat

void hud::Moby185Hud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar18 = ZEXT416(0xffffffff);
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
  iVar2 = 0;
  auVar18 = loadVectorLeftIndexed(in_LR,0xcb200);
  auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,auVar19
                      );
  auVar19 = loadVectorLeftIndexed(4,0xcb200);
  auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
  auVar18 = ZEXT416((uint)(auVar18._0_4_ + auVar19._0_4_)) & (undefined1  [16])0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  dVar10 = 2.0;
  dVar11 = 232.0;
  dVar12 = 116.0;
  dVar13 = 17.0;
  pfVar3 = (float *)&DAT_00a1c1a0;
  dVar14 = -0.4000000059604645;
  dVar15 = 0.4000000059604645;
  dVar16 = -0.6000000238418579;
  pfVar5 = (float *)&DAT_00a1c1a8;
  dVar17 = 0.6000000238418579;
  pfVar4 = (float *)&DAT_00a1c1a4;
  pfVar6 = (float *)&DAT_00a1c1ac;
  do {
    if (iVar2 < 10) {
      dVar7 = (double)DAT_00724320;
    }
    else if (iVar2 < 0x14) {
      dVar7 = (double)DAT_00724324;
    }
    else {
      dVar7 = (double)DAT_00724328;
    }
    dVar8 = (double)(-(float)(dVar7 * dVar10 - dVar11) / (float)(longlong)DAT_0072432c);
    dVar9 = (double)(float)((double)(longlong)(iVar2 - (iVar2 / DAT_0072432c) * DAT_0072432c) *
                            dVar8 + (double)(float)(dVar7 - dVar12));
    dVar8 = (double)(float)(dVar9 + dVar8);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)(dVar7 - dVar13),(float)(dVar13 - dVar7));
    *pfVar3 = (float)dVar7;
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar8);
    *pfVar4 = (float)dVar7;
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)dVar7;
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
    *pfVar6 = (float)dVar7;
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)((double)*pfVar5 + dVar7);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
    *pfVar6 = (float)((double)*pfVar6 + dVar7);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)((double)*pfVar5 + dVar7);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 4;
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + 4;
    *pfVar6 = (float)((double)*pfVar6 + dVar7);
    pfVar6 = pfVar6 + 4;
  } while (iVar2 < 100);
  return;
}



//==== 000cb4b0  ns=hud  size=0x144
// sig: undefined Moby185Hud_Update(void)
// callers(0): 
// callees(1): 000c96b0 hud::HudEntry_UpdateCounterSlide

void hud::Moby185Hud_Update(void)

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
  int iVar10;
  float *pfVar11;
  
  HudEntry_UpdateCounterSlide();
  fVar9 = DAT_00724328;
  fVar8 = DAT_00724324;
  fVar7 = DAT_00724320;
  iVar10 = DAT_0159c330 +
           (((int)DAT_0159c330 >> 1) + (uint)((int)DAT_0159c330 < 0 && (DAT_0159c330 & 1) != 0)) *
           -2;
  pfVar11 = (float *)(&DAT_00a1c1a0 + iVar10 * 4);
  for (; iVar10 < 100; iVar10 = iVar10 + 2) {
    fVar3 = fVar7;
    if ((9 < iVar10) && (fVar3 = fVar9, iVar10 < 0x1e)) {
      fVar3 = fVar8;
    }
    fVar1 = pfVar11[2];
    fVar4 = fVar3 - 17.0;
    fVar2 = pfVar11[3];
    fVar3 = fVar3 - 116.0;
    fVar5 = *pfVar11 + fVar1;
    fVar6 = pfVar11[1] + fVar2;
    *pfVar11 = fVar5;
    pfVar11[1] = fVar6;
    if (fVar5 < fVar4) {
      fVar1 = -fVar1;
      *pfVar11 = fVar4;
      pfVar11[2] = fVar1;
      fVar5 = fVar4;
    }
    if (-fVar4 < fVar5) {
      *pfVar11 = -fVar4;
      pfVar11[2] = -fVar1;
    }
    if (fVar6 < fVar3) {
      fVar2 = -fVar2;
      pfVar11[1] = fVar3;
      pfVar11[3] = fVar2;
      fVar6 = fVar3;
    }
    if (-fVar3 < fVar6) {
      pfVar11[1] = -fVar3;
      pfVar11[3] = -fVar2;
    }
    pfVar11 = pfVar11 + 8;
  }
  return;
}



//==== 000cb620  ns=hud  size=0x4cc
// sig: undefined Draw_Moby185Meter(void)
// callers(0): 
// callees(3): 000c8c08 hud::HudEntry_GetSlideOffset; 000ca0f4 hud::Hud_DrawTexQuad_v2; 000ca464 hud::Hud_DrawTexQuad_v3
// strings: 0072433c: '?fff' (raw)

uint hud::Draw_Moby185Meter(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 uVar9;
  IconTableEntries *pIVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
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
  int local_90;
  uint local_8c [5];
  
  uVar5 = DAT_00724330;
  iVar13 = 0;
  local_90 = 0;
  local_8c[0] = param_1[0x15];
  uVar2 = param_1[0x18];
  bVar1 = *(char *)(g_viewMtxPtr + 0x11) == '\x05';
  if (*(int *)(g_viewMtxPtr + 0xc) == 0) {
    local_90 = -0x50;
    if (bVar1) {
      local_90 = -0x3c;
    }
  }
  else if (bVar1) {
    local_90 = 0x14;
  }
  local_90 = param_1[0x14] + local_90;
  param_1[0x16] = DAT_00724330;
  uVar6 = DAT_00724334;
  param_1[0x17] = DAT_00724334;
  if (((uVar2 & 1) == 0) && ((uVar2 & 2) == 0)) {
    local_8c[0] = local_8c[0] - ((int)uVar6 >> 1);
  }
  if ((uVar2 & 4) == 0) {
    local_90 = local_90 -
               (uVar5 + ((uint)((LZCOUNT(-(uVar2 & 8)) << 0x3a) >> 0x3f) & ((int)uVar5 >> 1) - uVar5
                        ));
  }
  HudEntry_GetSlideOffset(param_1,&local_90,local_8c,param_1[0x1b],0);
  uVar7 = 0;
  pIVar10 = IconTableEntry;
  while ((uint)pIVar10->iconId != *param_1 && pIVar10->iconId != 0xffff) {
    pIVar10 = pIVar10 + 1;
    uVar7 = uVar7 + 1;
  }
  iVar8 = (int)((uVar7 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar8) != 0) {
      uVar9 = *(undefined2 *)((int)&IconTableEntry->variantsCnt + iVar8);
    }
  }
  Hud_DrawTexQuad_v3(uVar9,local_90 + *(short *)(param_1 + 0x12),
                     local_8c[0] + (int)*(short *)((int)param_1 + 0x4a),DAT_00724330,DAT_00724334,
                     0x80);
  dVar20 = 16.0;
  fVar3 = (float)(longlong)(int)DAT_00724330 * DAT_00724338 * 0.5;
  fVar4 = (float)(longlong)(int)DAT_00724334 * DAT_0072433c * 0.5;
  dVar23 = (double)(fVar3 * 0.05882353 * 16.0);
  dVar17 = (double)(fVar4 * 0.00862069 * 16.0);
  uVar7 = 0;
  dVar24 = (double)(((1.0 - DAT_00724338) * 0.5 * (float)(longlong)(int)DAT_00724330 +
                    fVar3 + (float)(longlong)(local_90 + *(short *)(param_1 + 0x12))) * 16.0);
  dVar22 = (double)(((1.0 - DAT_0072433c) * 0.5 * (float)(longlong)(int)DAT_00724334 +
                    fVar4 + (float)(longlong)
                                   (int)(local_8c[0] + (int)*(short *)((int)param_1 + 0x4a))) * 16.0
                   );
  dVar21 = -(double)((float)(longlong)(int)(10000 - param_1[0x1d]) * 0.0001 * 2.0 * 116.0 - 116.0);
  pIVar10 = IconTableEntry;
  while ((uint)pIVar10->iconId != *param_1 && pIVar10->iconId != 0xffff) {
    pIVar10 = pIVar10 + 1;
    uVar7 = uVar7 + 1;
  }
  iVar8 = (int)((uVar7 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar8)) {
      lVar14 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar8) + 1;
    }
  }
  iVar8 = 0;
  dVar18 = (double)DAT_00724320;
  pfVar12 = (float *)&DAT_00a1c1a4;
  dVar16 = 32.0;
  pfVar11 = (float *)&DAT_00a1c1a0;
  dVar15 = 0.0625;
  dVar19 = dVar18;
  do {
    if (iVar13 == 0) {
      dVar24 = -(double)(float)(dVar19 * dVar20 - dVar24);
      dVar22 = -(double)(float)(dVar19 * dVar20 - dVar22);
      dVar21 = (double)(float)(dVar18 + dVar21);
      iVar8 = (int)(dVar18 * dVar16);
    }
    if ((double)*pfVar12 <= dVar21) {
      Hud_DrawTexQuad_v2(lVar14,(int)((double)*pfVar11 * dVar23 + dVar24) >> 4,
                         (int)(dVar22 + -(double)(float)((double)pfVar11[1] * dVar17)) >> 4,
                         (int)((double)(longlong)iVar8 * dVar15),
                         (int)((double)(longlong)iVar8 * dVar15),0x80);
      dVar18 = (double)DAT_00724320;
    }
    iVar13 = iVar13 + 1;
    pfVar12 = pfVar12 + 4;
    pfVar11 = pfVar11 + 4;
  } while (iVar13 < 100);
  return param_1[0x16];
}



//==== 000cbaf8  ns=hud  size=0x80
// sig: undefined PromptHud_Init(void)
// callers(0): 
// callees(1): 000c8e10 hud::HudEntry_CalcNumberSize

void hud::PromptHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xcbaec);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xcbaec);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2._0_4_ + auVar3._0_4_)) & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x20;
  *(undefined4 *)(entry + 0x5c) = 0x20;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  return;
}



//==== 000cbb78  ns=hud  size=0x20
// sig: undefined PromptHud_Update(void)
// callers(0): 
// callees(1): 000c9390 hud::HudEntry_UpdateCounter

void hud::PromptHud_Update(void)

{
  HudEntry_UpdateCounter();
  return;
}



//==== 000cbb98  ns=hud  size=0x2c8
// sig: undefined Hud_DrawTexQuad(void)
// callers(9): 000cc148 hud::Hud_DrawTextBox; 000cc450 hud::Draw_PromptMsg; 000d05e0 hud::Draw_NanotechUI; 000d1110 hud::Draw_BoltCountUI; 000d3610 hud::Draw_MobyHealthBarHud; 000d3e20 hud::Draw_MetalDetectorHud; 000d4838 hud::Draw_AmmoCounter; 000d4ef0 hud::Draw_MobyCounterHud; 0013fd08 pause::IconList_Draw
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexQuad
               (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               int param_6)

{
  uint uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  
  iVar4 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  uVar1 = *(uint *)(iVar4 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = param_6 << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  RVar2 = param_4 + param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 000cbe60  ns=hud  size=0x290
// sig: undefined Hud_DrawTexHeaderQuad(void)
// callers(15): 000cc0f0 hud::DrawSprite; 000cc148 hud::Hud_DrawTextBox; 000cc450 hud::Draw_PromptMsg; 000cdeb8 hud::HudEntry_DrawIcon; 000ce170 hud::Draw_QuickSelectHud; 000cf6f0 hud::Draw_ClankCommandHud; 000d05e0 hud::Draw_NanotechUI; 000d1110 hud::Draw_BoltCountUI; 000d27f8 hud::Draw_HoverboardTrickHud; 000d3610 hud::Draw_MobyHealthBarHud; 000d3e20 hud::Draw_MetalDetectorHud; 000d44e4 hud::Draw_GiantClankHealthHUD; 000d4838 hud::Draw_AmmoCounter; 000d4ef0 hud::Draw_MobyCounterHud; 000d6148 hud::Draw_RaceLapPlaceHud
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexHeaderQuad
               (int param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               ulonglong param_6)

{
  uint uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_1);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  uVar1 = *(uint *)(param_1 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = (RsxCmd)((param_6 & 0xffffffff) << 0x18) | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  RVar2 = param_4 + param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 000cc0f0  ns=hud  size=0x58
// sig: undefined DrawSprite(void)
// callers(10): 000e0e60 main::startLevel; 0013fd08 pause::IconList_Draw; 00144638 pause::DrawSkillPointsFrame; 00147cf8 pause::DrawMissionsFrame; 00149f88 pause::SlotConfig_Draw; 0014d49c pause::DrawUnusedCompletedGameFrame; 0014d63c pause::Draw_GameCompletedFrame; 0014ec5c pause::DrawSaveLoadFrame; 0017007c vendor::DrawWeaponIcons; 004d27b0 idol_draw::DrawGalacticMapFrame
// callees(1): 000cbe60 hud::Hud_DrawTexHeaderQuad

void hud::DrawSprite(longlong param_1)

{
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24);
  return;
}



//==== 000cc148  ns=hud  size=0x200
// sig: undefined Hud_DrawTextBox(void)
// callers(7): 0006cea0 draw::DrawFancyTextWithBox; 000cc348 hud::Hud_DrawTextBoxCentered; 000cc450 hud::Draw_PromptMsg; 000d27f8 hud::Draw_HoverboardTrickHud; 000d5c20 hud::DrawGameplayHud; 000d6148 hud::Draw_RaceLapPlaceHud; 000d6710 hud::Draw_RaceTimeScoreHud
// callees(2): 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad

void hud::Hud_DrawTextBox
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  IconTableEntries *pIVar4;
  longlong lVar5;
  
  uVar2 = 0;
  lVar5 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7580 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar2 = uVar2 + 1;
  }
  iVar1 = (int)((uVar2 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar1) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar1) != 0) {
      uVar2 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar1);
    }
  }
  uVar3 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7580 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar3 = uVar3 + 1;
  }
  iVar1 = (int)((uVar3 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar1) != -1) &&
     (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar1))) {
    lVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar1) + 1;
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar5 << 2)) * 0x24,param_1,
             param_2,0x20,param_4,param_5);
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar2 << 2)) * 0x24,
             (int)param_1 + 0x20,param_2,param_3 + -0x40,param_4,param_5);
  Hud_DrawTexQuad(lVar5,param_3 + (int)param_1 + -0x20,param_2,0x20,param_4,param_5);
  return;
}



//==== 000cc348  ns=hud  size=0xd8
// sig: undefined Hud_DrawTextBoxCentered(void)
// callers(0): 
// callees(2): 00070998 draw::FontPrintLargeCenter; 000cc148 hud::Hud_DrawTextBox

void hud::Hud_DrawTextBoxCentered
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)((int)param_3 >> 0x18);
  iVar1 = draw::FontPrintLargeCenter
                    ((int)param_1 + 1,(int)param_2 + 1,param_3 & 0xff000000,param_4,
                     0xffffffffffffffff);
  Hud_DrawTextBox(iVar1 + -0x20,(int)param_2 + -8,((int)param_1 - (iVar1 + -0x20)) * 2,0x20,
                  lVar2 + (0x50 - lVar2 >> 0x3f & 0x50U - lVar2));
  draw::FontPrintLargeCenter(param_1,param_2,param_3,param_4,0xffffffffffffffff);
  return;
}



//==== 000cc450  ns=hud  size=0x950
// sig: undefined Draw_PromptMsg(void)
// callers(0): 
// callees(11): 0006cde8 draw::FontLen; 00070514 draw::FontPrintMediumCenter; 00070998 draw::FontPrintLargeCenter; 00070b00 draw::FontPrintCenterScaledMedium; 0007b740 help::help_msg_string_by_index; 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cc148 hud::Hud_DrawTextBox; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005cd2a8 libc::snprintf
// strings: 006520dc: '%s: %d:%02d:%02d' | 006520f4: '%s: %d'

undefined4 hud::Draw_PromptMsg(int param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar8;
  ulonglong uVar13;
  IconTableEntries *pIVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  char acStack_a0 [64];
  
                    /* Used for drawing UI such as "Open gadgetron Vendor" or "Enter ship" etc. */
  iVar20 = DAT_00724340 + ((uint)((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) & 8) + 10;
  dVar21 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x70));
  fVar1 = (float)(dVar21 / (double)(animationSpeed * 8.0));
  if (fVar1 - 0.0 < 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 - fVar1 < 0.0) {
    fVar1 = 1.0;
  }
  uVar7 = fastfunc::FastDoubleToInt((double)(fVar1 * 128.0));
  uVar3 = (uint)((uVar7 & 0xffffffff) << 0x18);
  uVar9 = uVar3 | 0x40f040;
  lVar18 = 0;
  for (iVar19 = 0;
      (cVar2 = (&DAT_00a1c020)[iVar19], cVar2 != '\x01' && (iVar19 < 0x80 && cVar2 != '\0'));
      iVar19 = iVar19 + 1) {
  }
  if (cVar2 == '\x01') {
    (&DAT_00a1c020)[iVar19] = 0;
    iVar10 = draw::FontLen(&DAT_00a1c020,-1);
    lVar17 = (longlong)(0xe0 - (iVar10 >> 1));
    iVar11 = draw::FontLen((char *)(iVar19 + 0xa1c021),-1);
    lVar15 = (longlong)(0xe0 - (iVar11 >> 1));
    lVar16 = (longlong)iVar11 + (lVar17 - lVar15 >> 0x3f & (longlong)iVar10 - (longlong)iVar11);
    lVar15 = lVar15 + (lVar17 - lVar15 >> 0x3f & lVar17 - lVar15);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar10 = (int)((uVar13 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar10) != 0) {
        uVar13 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10);
      }
    }
    iVar10 = (int)lVar15;
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar13 << 2)) * 0x24,
               iVar10 + 0x20,iVar20,lVar16,0x36,uVar7);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
        lVar17 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar17 << 2)) * 0x24,lVar15,
               iVar20,0x20,0x36,uVar7);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar11) != -1) &&
       (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11))) {
      lVar18 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
    }
    Hud_DrawTexQuad(lVar18,iVar10 + (int)lVar16 + 0x20,iVar20,0x20,0x36,uVar7);
    draw::FontPrintMediumCenter(0x100,iVar20 + 8,uVar9,&DAT_00a1c020,0xffffffffffffffff);
    draw::FontPrintMediumCenter
              (0x100,iVar20 + 0x1b,uVar9,(char *)(iVar19 + 0xa1c021),0xffffffffffffffff);
  }
  else {
    iVar19 = draw::FontLen(&DAT_00a1c020,-1);
    iVar10 = -(iVar19 >> 1) + 0xe0;
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
        lVar15 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar15 << 2)) * 0x24,iVar10,
               iVar20,0x20,0x20,uVar7);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar11) != 0) {
        uVar13 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11);
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar13 << 2)) * 0x24,
               -(iVar19 >> 1) + 0x100,iVar20,iVar19,0x20,uVar7);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar11) != -1) &&
       (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11))) {
      lVar18 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
    }
    Hud_DrawTexQuad(lVar18,iVar10 + iVar19 + 0x20,iVar20,0x20,0x20,uVar7);
    if ((Level == Hoven) && (g_JapaneseMode != false)) {
      draw::FontPrintCenterScaledMedium
                (0x3feb333340000000,0x100,iVar20 + 8,uVar9,&DAT_00a1c020,0xffffffffffffffff);
    }
    else {
      draw::FontPrintMediumCenter(0x100,iVar20 + 8,uVar9,&DAT_00a1c020,0xffffffffffffffff);
    }
  }
  if ((Level == Rilgar) || (Level == Kalebo)) {
    fVar1 = 115.7;
    fVar4 = 287.0;
    fVar5 = 119.5;
    if (Level == Rilgar) {
      fVar1 = 294.5;
      fVar4 = 225.4;
      fVar5 = 100.0;
    }
    if (SQRT((g_heroPosition.z - fVar5) * (g_heroPosition.z - fVar5) +
             (g_heroPosition.x - fVar1) * (g_heroPosition.x - fVar1) +
             (g_heroPosition.y - fVar4) * (g_heroPosition.y - fVar4)) < 5.0) {
      DAT_00a15c88 = iVar20 + 100;
      uVar6 = (uint)LZCOUNT(Level - Kalebo) >> 3 & 4;
      iVar19 = *(int *)((int)&g_BoltsRewardedFromRacePB + uVar6);
      iVar10 = *(int *)((int)&DAT_00a0cd10 + uVar6);
      if (iVar19 != 0) {
        uVar6 = (uint)((LZCOUNT(-g_IsPal) << 0x3a) >> 0x3f) & 600;
        iVar12 = uVar6 + 3000;
        iVar11 = iVar19 / iVar12;
        iVar19 = iVar19 - iVar11 * iVar12;
        uVar6 = (uVar6 + 0xbb9) * 0x111 >> 0xe;
        iVar12 = iVar19 / (int)uVar6;
        uVar8 = help::help_msg_string_by_index(STR_BEST_TIME);
        libc::snprintf(acStack_a0,"%s: %d:%02d:%02d",uVar8,iVar11,iVar12,
                       (int)((iVar19 - iVar12 * uVar6) * 100) / (int)uVar6);
        lVar18 = (longlong)((int)uVar9 >> 0x18);
        lVar18 = lVar18 + (0x50 - lVar18 >> 0x3f & 0x50U - lVar18);
        iVar19 = draw::FontPrintLargeCenter(0x101,iVar20 + 0x29,uVar3,acStack_a0,0xffffffffffffffff)
        ;
        Hud_DrawTextBox((longlong)(iVar19 + -0x20),iVar20 + 0x20,
                        (int)(0x100 - (longlong)(iVar19 + -0x20)) * 2,0x20,lVar18);
        draw::FontPrintLargeCenter(0x100,iVar20 + 0x28,uVar9,acStack_a0,0xffffffffffffffff);
        if (iVar10 != 0) {
          uVar8 = help::help_msg_string_by_index(STR_BEST_SCORE);
          libc::snprintf(acStack_a0,"%s: %d",uVar8,iVar10);
          iVar19 = draw::FontPrintLargeCenter
                             (0x101,iVar20 + 0x49,uVar3,acStack_a0,0xffffffffffffffff);
          Hud_DrawTextBox((longlong)(iVar19 + -0x20),iVar20 + 0x40,
                          (int)(0x100 - (longlong)(iVar19 + -0x20)) * 2,0x20,lVar18);
          draw::FontPrintLargeCenter(0x100,iVar20 + 0x48,uVar9,acStack_a0,0xffffffffffffffff);
        }
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x58);
}



//==== 000ccda0  ns=hud  size=0x64
// sig: undefined GetHelpLen(void)
// callers(3): 0011aeec mobyutil::MB_ShowPersistentMessage; 0011afac mobyutil::MB_RequestHelpMessage; 004d31b0 FUN_004d31b0
// callees(2): 005c8510 libc::strlen; 005cc8d8 libc::strcpy
// strings: 006520fc: '(Message too long)'

char * hud::GetHelpLen(char *param_1)

{
  size_t length;
  char *pcVar1;
  
  length = libc::strlen(param_1);
  if (length < 0x50) {
    libc::strcpy(&DAT_00a1c020,"(Message too long)");
  }
  pcVar1 = libc::strcpy(&DAT_00a1c020,param_1);
  return pcVar1;
}



//==== 000cce10  ns=hud  size=0x74
// sig: undefined Moby849Hud_Init(void)
// callers(0): 
// callees(1): 000c8e10 hud::HudEntry_CalcNumberSize

void hud::Moby849Hud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xcce04);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xcce04);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2._0_4_ + auVar3._0_4_)) & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  return;
}



//==== 000cce90  ns=hud  size=0xe8
// sig: undefined Moby849Hud_Update(void)
// callers(0): 
// callees(1): 000c9390 hud::HudEntry_UpdateCounter

void hud::Moby849Hud_Update(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  HudEntry_UpdateCounter();
  *(uint *)((int)param_1 + 8) =
       ((uint)((longlong)-(ulonglong)g_goldWeaponsArray.suckCannon >> 0x3f) & 5) + 5;
  auVar2 = loadVectorLeftIndexed(in_LR,0xcce84);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  if ((g_CurrentWeapon == 9) && (g_heroType == '\0')) {
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(4,0xcce84);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = vectorMultiplyAddFloatingPoint
                       (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3._0_4_ = auVar4._0_4_ + auVar2._0_4_;
    auVar3._8_8_ = auVar2._8_8_;
    auVar3._4_4_ = auVar4._4_4_ + auVar2._4_4_;
    auVar2._0_8_ = 0;
    auVar2._8_8_ = auVar3._0_8_;
    auVar2 = auVar2 << 0x40;
  }
  else {
    auVar3 = loadVectorLeftIndexed(0x7c,param_1);
    auVar4 = vectorCompareGreaterThanSignedWord(auVar3,auVar2);
    auVar2 = vectorConditionalSelect(auVar3,auVar2,auVar4);
  }
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)((int)param_1 + 0x7cU & 0xfffffffc) = uVar1;
  return;
}



//==== 000ccf78  ns=hud  size=0x30
// sig: undefined DrawFlatOverlay_Fixed(void)
// callers(1): 000e2e10 map::DrawMapFrame
// callees(1): 000ca72c hud::DrawFlatOverlay

void hud::DrawFlatOverlay_Fixed(int param_1,int param_2,int param_3,int param_4)

{
  DrawFlatOverlay(param_1 >> 4,param_2 >> 4,param_3 >> 4,param_4 >> 4);
  return;
}



//==== 000ccfa8  ns=hud  size=0x3e8
// sig: undefined Draw_Moby849Meter(void)
// callers(0): 
// callees(3): 000c8c08 hud::HudEntry_GetSlideOffset; 000ca464 hud::Hud_DrawTexQuad_v3; 000ca72c hud::DrawFlatOverlay

uint hud::Draw_Moby849Meter(uint *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar6;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  int local_40;
  uint local_3c;
  
  uVar3 = DAT_00724330;
  uVar12 = 0;
  iVar9 = 0;
  local_3c = param_1[0x15];
  uVar11 = param_1[0x18];
  bVar2 = *(byte *)(g_viewMtxPtr + 0x11);
  if (*(int *)(g_viewMtxPtr + 0xc) == 0) {
    iVar9 = -0x50;
    if (bVar2 == 5) {
      iVar9 = -0x3c;
    }
  }
  else if (bVar2 == 5) {
    iVar9 = 0x14;
  }
  local_40 = param_1[0x14] +
             iVar9 + ((uint)((LZCOUNT(0x81 - (uint)bVar2) << 0x3a) >> 0x3f) & 0x14U - iVar9);
  param_1[0x16] = DAT_00724330;
  uVar4 = DAT_00724334;
  param_1[0x17] = DAT_00724334;
  if (((uVar11 & 1) == 0) && ((uVar11 & 2) == 0)) {
    local_3c = local_3c - ((int)uVar4 >> 1);
  }
  if ((uVar11 & 4) == 0) {
    local_40 = local_40 -
               (uVar3 + ((uint)((LZCOUNT(-(uVar11 & 8)) << 0x3a) >> 0x3f) &
                        ((int)uVar3 >> 1) - uVar3));
  }
  HudEntry_GetSlideOffset(param_1,&local_40,&local_3c,param_1[0x1b],0);
  uVar3 = DAT_00724330 * 0xd0;
  uVar4 = DAT_00724330 * 0x260;
  uVar10 = DAT_00724334 * 0xea0;
  uVar11 = DAT_00724334 * 0xa0;
  iVar7 = (local_40 + *(short *)(param_1 + 0x12)) * 0x10 +
          ((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0);
  iVar8 = (local_3c + (int)*(short *)((int)param_1 + 0x4a)) * 0x10 +
          ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
  iVar9 = iVar7 + ((int)uVar4 >> 6) + (uint)((int)uVar4 < 0 && (uVar4 & 0x3f) != 0);
  DrawFlatOverlay(iVar7,iVar8,iVar9,
                  iVar8 + ((int)uVar10 >> 8) + (uint)((int)uVar10 < 0 && (uVar10 & 0xff) != 0),
                  0x80000000,1);
  uVar11 = DAT_00724334 * 0xf40;
  iVar9 = iVar9 >> 4;
  iVar8 = (local_3c + (int)*(short *)((int)param_1 + 0x4a)) * 0x10 +
          ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
  DrawFlatOverlay(iVar7 >> 4,iVar8 >> 4,iVar9,
                  iVar8 - (int)(param_1[0x1d] * DAT_00724334 * 0xea0) / (int)(param_1[2] << 8) >> 4,
                  0x80829e00,1);
  iVar8 = 1;
  if (1 < (int)param_1[0x1d]) {
    do {
      uVar11 = DAT_00724334 * 0xf40;
      iVar1 = (int)(DAT_00724334 * iVar8 * 0xea0) / (int)(param_1[2] << 8);
      iVar5 = ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
      DrawFlatOverlay(iVar7 >> 4,
                      (((int)((ulonglong)local_3c + (longlong)*(short *)((int)param_1 + 0x4a)) *
                        0x10 + iVar5) - iVar1) + -0x10 >> 4,iVar9,
                      (int)(((local_3c * 0x10 +
                              (int)(((longlong)*(short *)((int)param_1 + 0x4a) & 0xffffffffU) << 4)
                             + iVar5) - iVar1) + 0x10) >> 4,0x80000000,1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)param_1[0x1d]);
  }
  uVar6 = 0;
  iVar9 = 0;
  while (uVar11 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar9),
        uVar11 != *param_1 && uVar11 != 0xffff) {
    iVar9 = iVar9 + 8;
    uVar6 = uVar6 + 1;
  }
  iVar9 = (int)((uVar6 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar9) != -1) &&
     (*(short *)((int)&IconTableEntry->unknown + iVar9) != 0)) {
    uVar12 = *(undefined2 *)((int)&IconTableEntry->variantsCnt + iVar9);
  }
  Hud_DrawTexQuad_v3(uVar12,local_40 + *(short *)(param_1 + 0x12),
                     local_3c + (int)*(short *)((int)param_1 + 0x4a),DAT_00724330,DAT_00724334,0x80)
  ;
  return param_1[0x16];
}



//==== 000cd398  ns=hud  size=0xec
// sig: undefined QuickSelectHud_Init(void)
// callers(0): 
// callees(0): 

void hud::QuickSelectHud_Init(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 in_r0;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar2 = DAT_00723930;
  auVar8 = ZEXT416(0xffffffff);
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  DAT_00a1c080 = 8;
  iVar3 = (int)param_1;
  *(undefined2 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x58) = uVar2;
  uVar2 = DAT_00723934;
  *(undefined2 *)(iVar3 + 0x4a) = 0;
  *(undefined4 *)(iVar3 + 0x5c) = uVar2;
  *(undefined4 *)(iVar3 + 0x74) = 0xfffffffe;
  auVar8 = loadVectorLeftIndexed(in_r0,0xcd390);
  auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = vectorMultiplyAddFloatingPoint
                     (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
  DAT_00a1c190 = &PTR_DAT_00723b08;
  lVar7 = 8;
  puVar6 = UINT_ARRAY_0096c1dc;
  puVar5 = &DAT_00723980;
  puVar4 = &DAT_00723998;
  auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x78,param_1);
  *(undefined4 *)(iVar3 + 0x78U & 0xfffffffc) = uVar2;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  DAT_00a1c084 = 0;
  do {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 7;
    *puVar5 = (uint)*(ushort *)(&DAT_00721038 + uVar1 * 0x4c);
    puVar5 = puVar5 + 7;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



//==== 000cd4b8  ns=hud  size=0xa00
// sig: undefined UpdateQuickSelect(void)
// callers(0): 
// callees(7): 000c8444 hud::RegisterHUDCallback; 004fffb4 fastfunc::FastDecTimerS16; 005025e0 fastfunc::FastDiffRots; 00502648 fastfunc::FastAddRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 00a0feec: 'None'

void hud::UpdateQuickSelect(undefined8 param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  short sVar11;
  undefined2 uVar12;
  int iVar13;
  undefined *puVar14;
  byte bVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar20;
  uint uVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar23;
  uint uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f25;
  undefined8 uVar28;
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
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar20 = uVar22 - 0x120;
  puVar8 = (ulonglong *)lVar20;
  *puVar8 = uVar22;
  puVar8[0x26] = in_LR;
  puVar8[0x1d] = in_f25;
  puVar8[0x1e] = in_f26;
  puVar8[0x1f] = in_f27;
  puVar8[0x20] = in_f28;
  puVar8[0x21] = in_f29;
  puVar8[0x22] = in_f30;
  puVar8[0x23] = in_f31;
  auVar34 = ZEXT416(0xffffffff);
  auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  puVar8[0x1c] = unaff_r31;
  auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  puVar8[0x18] = unaff_r27;
  auVar34 = loadVectorLeftIndexed(in_LR,0xcd484);
  auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar35
                      );
  auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
  auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
  iVar9 = (int)param_1;
  uVar7 = storeVectorElementWordIndexed
                    (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x7c,param_1);
  *(undefined4 *)(iVar9 + 0x7cU & 0xfffffffc) = uVar7;
  puVar8[0x1b] = unaff_r30;
  puVar8[0x1a] = unaff_r29;
  puVar8[0x19] = unaff_r28;
  puVar8[0x17] = unaff_r26;
  puVar8[0x16] = unaff_r25;
  *(undefined4 *)(iVar9 + 0x6c) = 0x18;
  iVar13 = fastfunc::FastDecTimerS16(&DAT_0096bfb2);
  if (iVar13 != 0) {
    DAT_0096560c = 2;
    DAT_00965b70 = 2;
    DAT_009660d4 = 2;
    DAT_00966638 = 2;
  }
  dVar29 = 0.0;
  fVar10 = SQRT(DAT_00964a88 * DAT_00964a88 + DAT_00964a8c * DAT_00964a8c);
  fVar5 = DAT_00964a88 / fVar10;
  fVar3 = DAT_00964a8c;
  if (0.0 - fVar10 < 0.0) {
    fVar3 = DAT_00964a8c / fVar10;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar3 = DAT_00964a8c / fVar10;
  }
  fVar2 = DAT_00964a88;
  if (0.0 - fVar10 < 0.0) {
    fVar2 = fVar5;
  }
  *(float *)((int)puVar8 + 0x74) = fVar3;
  if (fVar10 - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  *(float *)(puVar8 + 0xe) = fVar2;
  *(float *)(puVar8 + 0xf) = ABS(fVar2) - ABS(fVar3);
  dVar33 = 0.7853981852531433;
  uVar18 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar4 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar4 = ABS(fVar3);
  }
  fVar3 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar3 = ABS(fVar2);
  }
  fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar27 = dVar29;
  if (0.0 < fVar4) {
    lVar23 = uVar22 - 0x110;
    lVar16 = uVar22 - 0xa4;
    lVar19 = uVar22 - 0x94;
    lVar25 = 2;
    fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar8 + 0x11) = fVar3;
    *(float *)(puVar8 + 0x10) = fVar3;
    *(float *)((int)puVar8 + 0x84) = fVar3;
    *(float *)((int)puVar8 + 0x7c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar4;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar3;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar23 + 0x7c) = *(float *)((int)lVar23 + 0x6c) * fVar3 * fVar3;
      iVar13 = (int)lVar16;
      lVar23 = lVar23 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar19 = uVar22 - 0xa4;
    pfVar17 = (float *)&DAT_007358e0;
    lVar23 = lVar20;
    lVar16 = lVar19;
    do {
      fVar3 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar23 + 0x7c) = *(float *)((int)lVar23 + 0x7c) * fVar3;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
      lVar16 = lVar16 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar23 = 2;
    do {
      iVar13 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      iVar6 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar13 + 0x7c)) + *(float *)(iVar6 + 4)
                        + *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0xc));
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
  }
  puVar14 = *(undefined **)(iVar9 + 0x78);
  bVar1 = puVar14 != (undefined *)0x0;
  if ((int)puVar14 >> 0x18 == 0) {
    if (((pad_pressedButton & 0xf000) == 0) && (0.5 <= fVar10)) {
      puVar14 = puVar14 + -1;
      *(undefined **)(iVar9 + 0x78) = puVar14;
      if (bVar1) goto LAB_000cd7cc;
    }
    puVar14 = &DAT_010000ff;
    *(undefined4 *)(iVar9 + 0x74) = 0xffffffff;
    *(undefined **)(iVar9 + 0x78) = &DAT_010000ff;
  }
LAB_000cd7cc:
  iVar13 = DAT_00a1c080;
  lVar23 = 0;
  uVar21 = *(uint *)(iVar9 + 0x74);
  uVar22 = (ulonglong)uVar21;
  lVar20 = 0;
  if (((int)puVar14 >> 0x18 != 1) || ((DAT_00964b00 & 0x10) == 0)) goto LAB_000cdbc8;
  if (fVar10 <= 0.9) {
    if ((DAT_00964b18 == 0) && ((pad_pressedButton & 0xf000) != 0)) {
      if ((pad_pressedButton & 0x1000) != 0) {
        if (uVar21 == 0xffffffff) {
          uVar22 = (ulonglong)DAT_00723ae0;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + uVar21 * 0x1c + 0x10);
        }
      }
      if ((pad_pressedButton & 0x4000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723ae4;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x14);
        }
      }
      if ((pad_pressedButton & 0x8000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723ad8;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 8);
        }
      }
      iVar13 = (int)uVar22;
      if (((pad_pressedButton & 0x2000) != 0) && (iVar13 = DAT_00723adc, (int)uVar22 != -1)) {
        iVar13 = *(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                          ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0xc);
      }
      *(int *)(iVar9 + 0x74) = iVar13;
    }
  }
  else {
    puVar8[0x14] = (longlong)DAT_00a1c080;
    dVar30 = 3.1415927410125732;
    uVar28 = 0x3ff921fb60000000;
    dVar32 = (double)((float)(dVar27 + 3.1415927410125732) + 3.1415927 + 1.5707964 +
                     (float)(3.1415927410125732 / (double)(longlong)puVar8[0x14]));
    dVar31 = (double)(float)(dVar32 * (double)(float)((double)(longlong)puVar8[0x14] *
                                                     0.15915493667125702));
    dVar26 = (double)fastfunc::FastIntToDouble(iVar13);
    puVar8[0x14] = (longlong)(int)uVar21;
    dVar26 = (double)(float)((double)(float)((double)((float)(longlong)puVar8[0x14] * 6.2831855) /
                                            dVar26) - dVar30);
    if (uVar21 != 0xffffffff) {
      dVar27 = (double)fastfunc::FastDiffRots(dVar27,uVar28);
      dVar27 = (double)fastfunc::FastSubRots((float)dVar26,(float)dVar27);
      if (dVar27 <= 0.5890486240386963) goto LAB_000cdb48;
    }
    iVar13 = DAT_00a1c080;
    puVar8[0x14] = (longlong)(int)dVar31;
    uVar24 = *(int *)((int)puVar8 + 0xa4) - (*(int *)((int)puVar8 + 0xa4) / iVar13) * iVar13;
    if ((uVar24 & 1) == 0) {
      iVar13 = fastfunc::FastDoubleToInt(dVar31);
      puVar8[0x14] = (longlong)iVar13;
      if ((float)(dVar31 - (double)(longlong)puVar8[0x14]) <= 1.0 - DAT_00724348) {
        if ((float)(dVar31 - (double)(longlong)puVar8[0x14]) < DAT_00724348) {
          uVar24 = uVar24 - 1;
        }
      }
      else {
        uVar24 = uVar24 + 1;
      }
      uVar24 = (DAT_00a1c080 + uVar24) -
               ((int)(DAT_00a1c080 + uVar24) / DAT_00a1c080) * DAT_00a1c080;
    }
    puVar8[0x14] = (longlong)(int)uVar24;
    *(uint *)(iVar9 + 0x74) = uVar24;
    dVar33 = (double)fastfunc::FastAddRots
                               ((float)(dVar32 - (double)(float)((double)(longlong)puVar8[0x14] *
                                                                 dVar33 + 0.39269909262657166)));
    lVar23 = -1;
    DAT_00a1c7e0 = (float)dVar33;
    if (dVar29 < dVar33) {
      lVar23 = 1;
    }
  }
LAB_000cdb48:
  uVar22 = (ulonglong)*(uint *)(iVar9 + 0x74);
  iVar13 = *(int *)(DAT_00a1c190 + DAT_00a1c084 * 4);
  if (*(int *)(iVar13 + *(uint *)(iVar9 + 0x74) * 0x1c) == 0 && (int)lVar23 != 0) {
    uVar18 = (uVar22 + lVar23) -
             (longlong)((int)(uVar22 + lVar23) / DAT_00a1c080) * (longlong)DAT_00a1c080;
    iVar6 = (int)uVar18;
    if (*(int *)(iVar13 + iVar6 * 0x1c) != 0) {
      *(int *)(iVar9 + 0x74) = iVar6;
      uVar22 = uVar18;
    }
  }
LAB_000cdbc8:
  if ((uint)uVar22 == uVar21) {
    if ((int)(uint)*(byte *)(iVar9 + 0x71) < DAT_00724344) {
      *(byte *)(iVar9 + 0x71) = *(byte *)(iVar9 + 0x71) + 1;
    }
  }
  else {
    *(undefined1 *)(iVar9 + 0x71) = 0;
  }
  if ((DAT_00964b00 & 0x10) == 0) {
    if (-1 < (int)(uint)uVar22) {
      iVar13 = *(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                        ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x18);
      if (iVar13 != 0) {
        if ((g_CurrentWeapon != iVar13) && (CHAR_ARRAY_00a0feec._160_2_ != -1)) {
          CHAR_ARRAY_00a0feec._160_2_ = CHAR_ARRAY_00a0feec._160_2_ + 1;
        }
        puVar8[0x14] = (longlong)update::g_GameFrameCount;
        uVar12 = CHAR_ARRAY_00a0feec._162_2_;
        puVar8[0x14] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar8[0x14] + 0.5));
        iVar6 = *(int *)((int)puVar8 + 0xa4);
        if ((int)(uint)(ushort)uVar12 < iVar6 / 600) {
          sVar11 = (short)(iVar6 >> 0x1f);
          CHAR_ARRAY_00a0feec._162_2_ =
               ((short)(iVar6 / 600) + sVar11) -
               ((short)((short)(iVar6 / 0x2580000) + sVar11) >> 0xf);
        }
        CHAR_ARRAY_00a0feec._164_4_ = CHAR_ARRAY_00a0feec._164_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
        iVar6 = iVar13;
        if (iVar13 == 0x18) {
          DAT_0096bcd5 = 1;
          iVar6 = DAT_0096bd98;
        }
        DAT_0096bd98 = iVar6;
        if ((&DAT_00737d38)[iVar13 * 0xc] != 0) {
          uVar21 = (&currentAmmoArray.field0_0x0)[iVar13];
          (&currentAmmoArray.field0_0x0)[iVar13] =
               uVar21 + ((uint)((longlong)
                                ((ulonglong)(ushort)(&DAT_00737d3e)[iVar13 * 0xc] -
                                (longlong)(int)uVar21) >> 0x3f) &
                        (ushort)(&DAT_00737d3e)[iVar13 * 0xc] - uVar21);
        }
      }
    }
    bVar15 = *(byte *)(iVar9 + 0x70);
    if (bVar15 != 0) {
      bVar15 = bVar15 - 1;
      *(byte *)(iVar9 + 0x70) = bVar15;
    }
  }
  else {
    bVar15 = *(byte *)(iVar9 + 0x70);
    if ((int)(uint)bVar15 < DAT_00724344) {
      bVar15 = bVar15 + 1;
      *(byte *)(iVar9 + 0x70) = bVar15;
    }
  }
  if (bVar15 == 0) {
    DAT_00a1c090 = *(undefined4 *)(iVar9 + 0x74);
    DAT_00a1c08c = *(undefined4 *)(iVar9 + 0x78);
    do {
      uVar21 = (uint)lVar20;
      if (*(int *)(&HudEntries[0].field_0x64 + (int)(lVar20 << 7) + (int)(lVar20 << 4)) ==
          *(int *)(iVar9 + 100)) break;
      uVar21 = uVar21 + 1;
      lVar20 = (longlong)(int)uVar21;
    } while ((int)uVar21 < 0xd);
    if ((int)uVar21 < 0xd) {
      RegisterHUDCallback(uVar21,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,0);
    }
    *(undefined4 *)(iVar9 + 0x6c) = 0xfffffffa;
    DAT_00a1c088 = DAT_0159c330;
  }
  return;
}



//==== 000cdeb8  ns=hud  size=0x270
// sig: undefined HudEntry_DrawIcon(void)
// callers(8): 000ce170 hud::Draw_QuickSelectHud; 000cf6f0 hud::Draw_ClankCommandHud; 000d05e0 hud::Draw_NanotechUI; 000d1110 hud::Draw_BoltCountUI; 000d1b8c hud::UnusedIconHud_Draw; 000d3e20 hud::Draw_MetalDetectorHud; 000d4838 hud::Draw_AmmoCounter; 000d4ef0 hud::Draw_MobyCounterHud
// callees(1): 000cbe60 hud::Hud_DrawTexHeaderQuad

void hud::HudEntry_DrawIcon
               (int param_1,longlong param_2,int param_3,int param_4,uint param_5,undefined8 param_6
               )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (-1 < (int)param_2) {
    uVar2 = param_5 & 2;
    param_3 = param_3 + *(short *)(param_1 + 0x48);
    iVar6 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_2 << 2)) * 0x24;
    param_4 = param_4 + *(short *)(param_1 + 0x4a);
    uVar1 = *(uint *)(iVar6 + 0x18);
    uVar10 = (ulonglong)(uVar1 >> 2) & 0x3fff;
    lVar12 = (longlong)(param_4 - (int)uVar10);
    uVar3 = uVar1 >> 0x12;
    lVar12 = lVar12 + ((LZCOUNT(-(param_5 & 1)) << 0x3a) >> 0x3f & param_4 - lVar12);
    lVar11 = (longlong)(int)(param_3 - uVar3);
    lVar11 = lVar11 + ((LZCOUNT(-(param_5 & 1)) << 0x3a) >> 0x3f & param_3 - lVar11);
    lVar7 = (longlong)(int)((int)lVar12 + (uVar1 >> 3 & 0x1fff));
    lVar9 = (longlong)(int)((int)lVar11 + (uVar1 >> 0x13));
    param_5 = param_5 & 4;
    lVar7 = lVar7 + ((LZCOUNT(-uVar2) << 0x3a) >> 0x3f & lVar12 - lVar7);
    lVar9 = lVar9 + ((LZCOUNT(-uVar2) << 0x3a) >> 0x3f & lVar11 - lVar9);
    lVar12 = (longlong)((int)lVar7 - (int)uVar10);
    uVar10 = uVar10 + ((LZCOUNT(-uVar2) << 0x3a) >> 0x3f &
                      ((ulonglong)(uVar1 >> 1) & 0x7fff) - uVar10);
    uVar4 = uVar10 & 0x7fffffff;
    uVar8 = (ulonglong)uVar3 +
            ((LZCOUNT(-uVar2) << 0x3a) >> 0x3f & (ulonglong)(uVar1 >> 0x11) - (ulonglong)uVar3);
    uVar5 = uVar8 & 0x7fffffff;
    lVar11 = (longlong)(int)((int)lVar9 - uVar3);
    Hud_DrawTexHeaderQuad
              (iVar6,lVar11 + ((LZCOUNT(-param_5) << 0x3a) >> 0x3f & lVar9 - lVar11),
               lVar12 + ((LZCOUNT(-param_5) << 0x3a) >> 0x3f & lVar7 - lVar12),
               uVar5 * 2 + ((LZCOUNT(-param_5) << 0x3a) >> 0x3f & uVar8 + uVar5 * -2),
               uVar4 * 2 + ((LZCOUNT(-param_5) << 0x3a) >> 0x3f & uVar10 + uVar4 * -2),param_6);
  }
  return;
}



//==== 000ce170  ns=hud  size=0xe4c
// sig: undefined Draw_QuickSelectHud(void)
// callers(0): 
// callees(10): 00070514 draw::FontPrintMediumCenter; 0007b740 help::help_msg_string_by_index; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cdeb8 hud::HudEntry_DrawIcon; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005c8510 libc::strlen; 005cd2a8 libc::snprintf
// strings: 00652110: '%d/%d'

undefined4 hud::Draw_QuickSelectHud(int param_1)

{
  short sVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar11;
  int iVar12;
  undefined8 uVar10;
  char *__s;
  size_t sVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  IconTableEntries *pIVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  char *pcVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
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
  char acStack_120 [80];
  longlong local_d0;
  
  dVar28 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x70));
  dVar29 = (double)fastfunc::FastIntToDouble(DAT_00724344);
  dVar43 = (double)(float)(dVar28 / dVar29);
  dVar28 = 1.0;
  dVar29 = dVar28;
  if ((dVar43 <= 1.0) && (dVar29 = dVar43, dVar43 < 0.0)) {
    dVar29 = 0.0;
  }
  dVar43 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
  dVar30 = (double)fastfunc::FastIntToDouble(DAT_00724344);
  dVar43 = (double)(float)(dVar43 / dVar30);
  if ((dVar43 <= dVar28) && (dVar28 = dVar43, dVar43 < 0.0)) {
    dVar28 = 0.0;
  }
  dVar43 = (double)fastfunc::FastIntToDouble
                             (worldUpdateTime - (worldUpdateTime / DAT_0072436c) * DAT_0072436c);
  dVar30 = (double)fastfunc::FastIntToDouble(DAT_0072436c);
  dVar42 = 3.141592502593994;
  dVar41 = -3.141592502593994;
  dVar40 = -0.16666656732559204;
  dVar39 = 0.008333025500178337;
  dVar38 = -0.0001980741071747616;
  dVar37 = 2.601886990305502e-06;
  dVar36 = (double)(float)(dVar29 * 128.0);
  fVar3 = (float)(dVar43 / dVar30) * 6.28318 - 3.14159;
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar6 = fVar5 * fVar5;
  fVar3 = fVar6 * fVar6 * fVar5;
  fVar4 = fVar6 * fVar3;
  dVar30 = (double)(fVar6 * fVar4);
  dVar43 = (double)(fVar4 * -0.0001980741 +
                   fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
  dVar35 = (double)(float)(dVar30 * 2.601886990305502e-06 + dVar43);
  uVar7 = fastfunc::FastDoubleToInt(dVar36,dVar43,dVar30);
  uVar8 = fastfunc::FastDoubleToInt
                    ((double)(float)(dVar36 * (double)(float)(dVar35 * 0.125 + 0.875)));
  iVar11 = *(int *)(param_1 + 0x50);
  uVar18 = *(uint *)(param_1 + 0x60);
  iVar26 = *(int *)(param_1 + 0x54);
  if (((uVar18 & 1) == 0) && ((uVar18 & 2) == 0)) {
    iVar26 = iVar26 - (*(int *)(param_1 + 0x5c) >> 1);
  }
  iVar12 = iVar11 - *(int *)(param_1 + 0x58);
  uVar9 = 0;
  iVar27 = 0;
  lVar19 = (longlong)iVar11 +
           ((LZCOUNT(-(uVar18 & 4)) << 0x3a) >> 0x3f &
           (longlong)
           (int)(iVar12 + ((uint)((LZCOUNT(-(uVar18 & 8)) << 0x3a) >> 0x3f) &
                          (iVar11 - (*(int *)(param_1 + 0x58) >> 1)) - iVar12)) - (longlong)iVar11);
  lVar24 = (longlong)
           (int)(((int)DAT_00723930 >> 1) + (uint)((int)DAT_00723930 < 0 && (DAT_00723930 & 1) != 0)
                );
  lVar22 = (longlong)
           (int)(((int)DAT_00723934 >> 1) + (uint)((int)DAT_00723934 < 0 && (DAT_00723934 & 1) != 0)
                );
  for (iVar11 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar11),
      sVar1 != -0x16cc && sVar1 != -1; iVar11 = iVar11 + 8) {
    uVar9 = uVar9 + 1;
  }
  iVar11 = (int)((uVar9 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar11) != 0) {
      uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11);
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,lVar19,
             iVar26,lVar24,lVar22,uVar7);
  uVar9 = 0;
  for (pIVar17 = IconTableEntry; pIVar17->iconId != 0xe934 && pIVar17->iconId != 0xffff;
      pIVar17 = pIVar17 + 1) {
    uVar9 = uVar9 + 1;
  }
  iVar11 = (int)((uVar9 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar11) != 0) {
      uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11);
    }
  }
  iVar11 = (int)lVar19;
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,
             DAT_00723930 + iVar11,DAT_00723934 + iVar26,-lVar24,-lVar22,uVar7);
  uVar9 = 0;
  for (pIVar17 = IconTableEntry; pIVar17->iconId != 0xe934 && pIVar17->iconId != 0xffff;
      pIVar17 = pIVar17 + 1) {
    uVar9 = uVar9 + 1;
  }
  iVar12 = (int)((uVar9 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar12) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar12) != 0) {
      uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar12);
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,
             DAT_00723930 + iVar11,iVar26,-lVar24,lVar22,uVar7);
  uVar9 = 0;
  for (pIVar17 = IconTableEntry; pIVar17->iconId != 0xe934 && pIVar17->iconId != 0xffff;
      pIVar17 = pIVar17 + 1) {
    uVar9 = uVar9 + 1;
  }
  iVar12 = (int)((uVar9 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar12) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar12) != 0) {
      uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar12);
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,lVar19,
             DAT_00723934 + iVar26,lVar24,-lVar22,uVar7);
  iVar12 = 0;
  if (0 < DAT_00a1c080) {
    iVar14 = 0;
    do {
      local_d0 = (longlong)DAT_00a1c080;
      dVar30 = (double)fastfunc::FastWrapRot
                                 (((float)(longlong)iVar12 * 2.0 * 3.1415927) / (float)local_d0 -
                                  3.1415927,1.5707964);
      dVar36 = (double)(float)(dVar30 + 1.570796251296997);
      dVar43 = (double)(float)(dVar42 - dVar30);
      if (dVar30 - (double)(float)(dVar42 - dVar30) < 0.0) {
        dVar43 = dVar30;
      }
      dVar35 = (double)(float)(dVar42 - dVar36);
      if (dVar36 - (double)(float)(dVar42 - dVar36) < 0.0) {
        dVar35 = dVar36;
      }
      dVar31 = (double)(float)(dVar41 - dVar30);
      if ((double)(float)(dVar41 - dVar30) - dVar43 < 0.0) {
        dVar31 = dVar43;
      }
      dVar30 = (double)(float)(dVar31 * dVar31);
      dVar43 = (double)(float)(dVar41 - dVar36);
      if ((double)(float)(dVar41 - dVar36) - dVar35 < 0.0) {
        dVar43 = dVar35;
      }
      dVar36 = (double)(float)(dVar43 * dVar43);
      dVar35 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar31));
      dVar33 = (double)(float)(dVar30 * dVar35);
      dVar34 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar43));
      iVar25 = *(int *)(param_1 + 0x74);
      dVar32 = (double)(float)(dVar36 * dVar34);
      iVar20 = (int)(DAT_0072434c *
                    (float)((double)(float)(dVar30 * dVar33) * dVar37 +
                           (double)(float)(dVar33 * dVar38 +
                                          (double)(float)(dVar35 * dVar39 +
                                                         (double)(float)((double)(float)(dVar30 * 
                                                  dVar31) * dVar40 + dVar31)))));
      local_d0 = (longlong)iVar20;
      iVar23 = DAT_00723938 + iVar11 +
               (int)(DAT_0072434c *
                     (float)((double)(float)(dVar36 * dVar32) * dVar37 +
                            (double)(float)(dVar32 * dVar38 +
                                           (double)(float)(dVar34 * dVar39 +
                                                          (double)(float)((double)(float)(dVar36 * 
                                                  dVar43) * dVar40 + dVar43)))) * DAT_0072437c);
      iVar20 = DAT_0072393c + iVar26 + iVar20;
      if ((iVar25 == iVar12) && (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar14) != 0))
      {
        uVar9 = 0;
        for (pIVar17 = IconTableEntry; pIVar17->iconId != 0xe99c && pIVar17->iconId != 0xffff;
            pIVar17 = pIVar17 + 1) {
          uVar9 = uVar9 + 1;
        }
        iVar25 = (int)((uVar9 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar25) == -1) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if (*(short *)((int)&IconTableEntry->unknown + iVar25) != 0) {
            uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar25);
          }
        }
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,
                   iVar23 + -0x13,iVar20 + -0x13,0x26,0x26,uVar8);
        iVar25 = *(int *)(param_1 + 0x74);
      }
      if (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar14) != 0) {
        uVar10 = uVar7;
        if (iVar12 != iVar25) {
          local_d0 = (longlong)(int)uVar7;
          uVar10 = fastfunc::FastDoubleToInt((double)((float)local_d0 * DAT_00724378));
        }
        iVar25 = *(int *)(DAT_00a1c084 * 4 + DAT_00a1c190);
        uVar9 = 0;
        iVar15 = 0;
        lVar19 = ((LZCOUNT(-(uint)(&g_goldWeaponsArray.field0_0x0)[*(int *)(iVar25 + iVar14 + 0x18)]
                          ) << 0x3a) >> 0x3f & 0xfffffffffffffffcU) + 4;
        while (uVar18 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar15),
              uVar18 != *(uint *)(iVar25 + iVar14) && uVar18 != 0xffff) {
          iVar15 = iVar15 + 8;
          uVar9 = uVar9 + 1;
        }
        iVar25 = (int)((uVar9 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar25) == -1) {
          lVar22 = 0;
        }
        else {
          lVar22 = 0;
          if ((int)lVar19 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar25)) {
            lVar22 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar25) + lVar19;
          }
        }
        HudEntry_DrawIcon(param_1,lVar22,iVar23,iVar20,1,uVar10);
      }
      iVar12 = iVar12 + 1;
      iVar14 = iVar14 + 0x1c;
    } while (iVar12 < DAT_00a1c080);
  }
  iVar12 = *(int *)(param_1 + 0x74);
  if ((-1 < iVar12) && (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar12 * 0x1c) != 0)) {
    dVar28 = (double)(float)(dVar29 * dVar28);
    uVar7 = fastfunc::FastLerpColor(dVar28,DAT_00a1c7e4,DAT_00724358);
    uVar18 = UINT_ARRAY_0096c1dc[iVar12];
    if ((&DAT_00737d38)[uVar18 * 0xc] != 0) {
      uVar2 = (&currentAmmoArray.field0_0x0)[uVar18];
      libc::snprintf(acStack_120,"%d/%d",uVar2,(ulonglong)(ushort)(&DAT_00737d3e)[uVar18 * 0xc]);
      if (uVar2 == 0) {
        uVar8 = fastfunc::FastLerpColor(dVar28,DAT_0072435c,DAT_00724360);
      }
      else {
        uVar8 = fastfunc::FastLerpColor(dVar28,DAT_00724364,DAT_00724368);
      }
      draw::FontPrintMediumCenter
                (DAT_00723938 + iVar11 + 1,DAT_0072393c + iVar26 + 0xd,uVar7,acStack_120,
                 0xffffffffffffffff);
      draw::FontPrintMediumCenter
                (DAT_00723938 + iVar11,DAT_0072393c + iVar26 + 0xc,uVar8,acStack_120,
                 0xffffffffffffffff);
    }
    uVar8 = fastfunc::FastLerpColor(dVar28,PTR_DAT_00724350,DAT_00724354);
    iVar25 = 0;
    iVar14 = *(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar12 * 0x1c + 0x18);
    iVar20 = iVar14 * 0x4c;
    if ((&g_goldWeaponsArray.field0_0x0)[iVar14] == '\0') {
      __s = (char *)help::help_msg_string_by_index((int)*(short *)((int)&DAT_00721044 + iVar20 + 2))
      ;
    }
    else {
      __s = (char *)help::help_msg_string_by_index((int)*(short *)(&DAT_00721048 + iVar20));
    }
    if ((__s != (char *)0x0) && (sVar13 = libc::strlen(__s), sVar13 != 0)) {
      sVar13 = libc::strlen(__s);
      iVar14 = 0;
      pcVar16 = __s;
      if (0 < (int)sVar13) {
        do {
          if (pcVar16[1] == '-') {
            iVar25 = iVar14 + 2;
            pcVar16 = pcVar16 + 2;
            if (iVar25 != 0) goto LAB_000cedd8;
            break;
          }
          iVar14 = iVar14 + 1;
          pcVar16 = pcVar16 + 1;
        } while (iVar14 < (int)sVar13);
      }
      pcVar16 = __s;
      pcVar21 = __s;
      if (0 < (int)sVar13) {
        do {
          pcVar16 = pcVar21 + 1;
          if (*pcVar16 == ' ') {
            iVar25 = iVar27 + 1;
            pcVar16 = pcVar21 + 2;
            break;
          }
          iVar27 = iVar27 + 1;
          pcVar21 = pcVar16;
        } while (iVar27 < (int)sVar13);
      }
LAB_000cedd8:
      iVar27 = DAT_00724370;
      if (((&DAT_00737d38)[UINT_ARRAY_0096c1dc[iVar12] * 0xc] == 0) &&
         (iVar27 = DAT_00a1c7e8, iVar25 != 0)) {
        iVar27 = DAT_00724374;
      }
      iVar27 = iVar27 + DAT_0072393c + iVar26;
      if (iVar25 == 0) {
        draw::FontPrintMediumCenter
                  (DAT_00723938 + iVar11 + 1,iVar27 + 1,uVar7,__s,0xffffffffffffffff);
        draw::FontPrintMediumCenter(DAT_00723938 + iVar11,iVar27,uVar8,__s,0xffffffffffffffff);
      }
      else {
        draw::FontPrintMediumCenter(DAT_00723938 + iVar11 + 1,iVar27 + 1,uVar7,__s,iVar25);
        draw::FontPrintMediumCenter(DAT_00723938 + iVar11,iVar27,uVar8,__s,iVar25);
        draw::FontPrintMediumCenter
                  (DAT_00723938 + iVar11 + 1,iVar27 + 0x11,uVar7,pcVar16,0xffffffffffffffff);
        draw::FontPrintMediumCenter
                  (DAT_00723938 + iVar11,iVar27 + 0x10,uVar8,pcVar16,0xffffffffffffffff);
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x58);
}



//==== 000cefc0  ns=hud  size=0x8c
// sig: undefined ClankCommandHud_Init(void)
// callers(0): 
// callees(0): 

void hud::ClankCommandHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  DAT_00a1c080 = 4;
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x58) = DAT_00723930;
  uVar1 = DAT_00723934;
  *(undefined4 *)(iVar2 + 0x74) = 0xfffffffe;
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  auVar3 = loadVectorLeftIndexed(in_r0,0xcefbc);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  DAT_00a1c190 = &PTR_DAT_00723b0c;
  *(undefined2 *)(iVar2 + 0x48) = 0;
  *(undefined2 *)(iVar2 + 0x4a) = 0;
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x78,param_1);
  *(undefined4 *)(iVar2 + 0x78U & 0xfffffffc) = uVar1;
  DAT_00a1c084 = 0;
  return;
}



//==== 000cf070  ns=hud  size=0x638
// sig: undefined ClankCommandHud_Update(void)
// callers(0): 
// callees(1): 000c8444 hud::RegisterHUDCallback

void hud::ClankCommandHud_Update(undefined8 param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  undefined *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float *pfVar23;
  ulonglong uVar22;
  longlong lVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar17 = uVar22 - 0xc0;
  puVar8 = (ulonglong *)lVar17;
  *puVar8 = uVar22;
  puVar8[0x1a] = in_LR;
  auVar26 = ZEXT416(0xffffffff);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  puVar8[0x17] = unaff_r31;
  auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  auVar26 = loadVectorLeftIndexed(in_LR,0xcf04c);
  auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar26 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar27
                      );
  iVar9 = (int)param_1;
  *(undefined4 *)(iVar9 + 0x6c) = 0x18;
  auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
  auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar7 = storeVectorElementWordIndexed
                    (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x7c,param_1);
  *(undefined4 *)(iVar9 + 0x7cU & 0xfffffffc) = uVar7;
  DAT_0096560c = 2;
  DAT_00965b70 = 2;
  DAT_009660d4 = 2;
  DAT_00966638 = 2;
  fVar2 = 0.0;
  lVar13 = 0;
  fVar10 = SQRT(DAT_00964a88 * DAT_00964a88 + DAT_00964a8c * DAT_00964a8c);
  fVar6 = DAT_00964a88 / fVar10;
  fVar4 = DAT_00964a8c;
  if (0.0 - fVar10 < 0.0) {
    fVar4 = DAT_00964a8c / fVar10;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar4 = DAT_00964a8c / fVar10;
  }
  fVar3 = DAT_00964a88;
  if (0.0 - fVar10 < 0.0) {
    fVar3 = fVar6;
  }
  *(float *)((int)puVar8 + 0x74) = fVar4;
  if (fVar10 - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  *(float *)(puVar8 + 0xe) = fVar3;
  *(float *)(puVar8 + 0xf) = ABS(fVar3) - ABS(fVar4);
  uVar20 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar5 = ABS(fVar4);
  }
  fVar4 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar4 = ABS(fVar3);
  }
  fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (0.0 < fVar5) {
    lVar16 = uVar22 - 0xb0;
    lVar21 = uVar22 - 0x44;
    lVar24 = uVar22 - 0x34;
    lVar25 = 2;
    fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x11) = fVar4;
    *(float *)(puVar8 + 0x10) = fVar4;
    *(float *)((int)puVar8 + 0x84) = fVar4;
    *(float *)((int)puVar8 + 0x7c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar4;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar4 * fVar4;
      iVar11 = (int)lVar21;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar11 + 4) * fVar4 * fVar4;
      lVar24 = lVar24 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar24 = uVar22 - 0x44;
    pfVar23 = (float *)&DAT_007358e0;
    lVar25 = 4;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar4 = *pfVar23;
      fVar5 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar4;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
      lVar21 = lVar21 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar16 = 2;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar12 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      fVar2 = fVar2 + *(float *)(iVar11 + 0x7c) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
              *(float *)(iVar12 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
  }
  puVar18 = *(undefined **)(iVar9 + 0x78);
  bVar1 = puVar18 != (undefined *)0x0;
  if (((int)puVar18 >> 0x18 == 0) && (DAT_00a1bfe4 != 0)) {
    if (((pad_pressedButton & 0xf000) == 0) && (0.5 <= fVar10)) {
      puVar18 = puVar18 + -1;
      *(undefined **)(iVar9 + 0x78) = puVar18;
      if (bVar1) goto LAB_000cf338;
    }
    puVar18 = &DAT_010000ff;
    *(undefined4 *)(iVar9 + 0x74) = 0xffffffff;
    *(undefined **)(iVar9 + 0x78) = &DAT_010000ff;
  }
LAB_000cf338:
  iVar11 = DAT_00a1c080;
  uVar14 = *(uint *)(iVar9 + 0x74);
  uVar22 = (ulonglong)uVar14;
  if ((int)puVar18 >> 0x18 == 1) {
    if (0.9 < fVar10) {
      puVar8[0x14] = (longlong)DAT_00a1c080;
      puVar8[0x14] = (longlong)
                     (int)((fVar2 + 3.1415927 + 3.1415927 + 1.5707964 +
                           3.1415927 / (float)(longlong)puVar8[0x14]) *
                          (float)(longlong)puVar8[0x14] * 0.15915494);
      uVar22 = (ulonglong)*(uint *)((int)puVar8 + 0xa4) -
               (longlong)((int)*(uint *)((int)puVar8 + 0xa4) / iVar11) * (longlong)iVar11;
      *(int *)(iVar9 + 0x74) = (int)uVar22;
    }
    if ((pad_pressedButton & 0xf000) != 0) {
      if ((pad_pressedButton & 0x1000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723afc;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x10);
        }
      }
      if ((pad_pressedButton & 0x4000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723b00;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x14);
        }
      }
      if ((pad_pressedButton & 0x8000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723af4;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 8);
        }
      }
      if ((pad_pressedButton & 0x2000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723af8;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0xc);
        }
      }
      *(int *)(iVar9 + 0x74) = (int)uVar22;
    }
  }
  uVar19 = (uint)uVar22;
  if (uVar19 == uVar14) {
    if ((int)(uint)*(byte *)(iVar9 + 0x71) < DAT_00724344) {
      *(byte *)(iVar9 + 0x71) = *(byte *)(iVar9 + 0x71) + 1;
    }
  }
  else {
    *(undefined1 *)(iVar9 + 0x71) = 0;
  }
  if ((DAT_00964b00 & 0x10) == 0) {
    DAT_0096bfa0 = 0;
    if (uVar19 != 0xffffffff) {
      DAT_0096bfa0 = *(undefined4 *)
                      (*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                       ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x18);
    }
    bVar15 = *(byte *)(iVar9 + 0x70);
    if (bVar15 != 0) {
      bVar15 = bVar15 - 1;
      *(byte *)(iVar9 + 0x70) = bVar15;
    }
  }
  else {
    bVar15 = *(byte *)(iVar9 + 0x70);
    if ((int)(uint)bVar15 < DAT_00724344) {
      bVar15 = bVar15 + 1;
      *(byte *)(iVar9 + 0x70) = bVar15;
    }
  }
  if (bVar15 == 0) {
    DAT_00a1c08c = *(undefined4 *)(iVar9 + 0x78);
    do {
      uVar14 = (uint)lVar13;
      if (*(int *)(&HudEntries[0].field_0x64 + (int)(lVar13 << 7) + (int)(lVar13 << 4)) ==
          *(int *)(iVar9 + 100)) break;
      uVar14 = uVar14 + 1;
      lVar13 = (longlong)(int)uVar14;
    } while ((int)uVar14 < 0xd);
    DAT_00a1c090 = uVar19;
    if ((int)uVar14 < 0xd) {
      RegisterHUDCallback(uVar14,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,0);
    }
    *(undefined4 *)(iVar9 + 0x6c) = 0xfffffffa;
    DAT_00a1c088 = DAT_0159c330;
  }
  return;
}



//==== 000cf6f0  ns=hud  size=0xba4
// sig: undefined Draw_ClankCommandHud(void)
// callers(0): 
// callees(9): 00070514 draw::FontPrintMediumCenter; 0007b740 help::help_msg_string_by_index; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cdeb8 hud::HudEntry_DrawIcon; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005c8510 libc::strlen
// strings: 000cf7c0: 'HC/q`' (raw)

undefined4 hud::Draw_ClankCommandHud(int param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar11;
  longlong lVar9;
  int iVar12;
  int iVar13;
  undefined8 uVar10;
  size_t sVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  IconTableEntries *pIVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
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
  StringId local_e0 [4];
  longlong local_d0;
  
  dVar26 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x70));
  dVar27 = (double)fastfunc::FastIntToDouble(DAT_00724344);
  dVar41 = (double)(float)(dVar26 / dVar27);
  dVar26 = 1.0;
  dVar27 = dVar26;
  if ((dVar41 <= 1.0) && (dVar27 = dVar41, dVar41 < 0.0)) {
    dVar27 = 0.0;
  }
  dVar41 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
  dVar28 = (double)fastfunc::FastIntToDouble(DAT_00724344);
  dVar41 = (double)(float)(dVar41 / dVar28);
  if ((dVar41 <= dVar26) && (dVar26 = dVar41, dVar41 < 0.0)) {
    dVar26 = 0.0;
  }
  dVar41 = (double)fastfunc::FastIntToDouble
                             (worldUpdateTime - (worldUpdateTime / DAT_0072436c) * DAT_0072436c);
  dVar28 = (double)fastfunc::FastIntToDouble(DAT_0072436c);
  dVar40 = 3.141592502593994;
  dVar39 = -3.141592502593994;
  dVar38 = -0.16666656732559204;
  dVar37 = 0.008333025500178337;
  dVar36 = -0.0001980741071747616;
  dVar35 = 2.601886990305502e-06;
  dVar34 = (double)(float)(dVar27 * 128.0);
  fVar2 = (float)(dVar41 / dVar28) * 6.28318 - 3.14159;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = fVar4 * fVar4;
  fVar2 = fVar5 * fVar5 * fVar4;
  fVar3 = fVar5 * fVar2;
  dVar28 = (double)(fVar5 * fVar3);
  dVar41 = (double)(fVar3 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4);
  dVar33 = (double)(float)(dVar28 * 2.601886990305502e-06 + dVar41);
  uVar6 = fastfunc::FastDoubleToInt(dVar34,dVar41,dVar28);
  uVar7 = fastfunc::FastDoubleToInt
                    ((double)(float)(dVar34 * (double)(float)(dVar33 * 0.125 + 0.875)));
  iVar11 = *(int *)(param_1 + 0x50);
  uVar17 = *(uint *)(param_1 + 0x60);
  iVar25 = *(int *)(param_1 + 0x54);
  if (((uVar17 & 1) == 0) && ((uVar17 & 2) == 0)) {
    iVar25 = iVar25 - (*(int *)(param_1 + 0x5c) >> 1);
  }
  iVar12 = iVar11 - *(int *)(param_1 + 0x58);
  uVar8 = 0;
  lVar19 = (longlong)iVar11 +
           ((LZCOUNT(-(uVar17 & 4)) << 0x3a) >> 0x3f &
           (longlong)
           (int)(iVar12 + ((uint)((LZCOUNT(-(uVar17 & 8)) << 0x3a) >> 0x3f) &
                          (iVar11 - (*(int *)(param_1 + 0x58) >> 1)) - iVar12)) - (longlong)iVar11);
  lVar24 = (longlong)
           (int)(((int)DAT_00723930 >> 1) + (uint)((int)DAT_00723930 < 0 && (DAT_00723930 & 1) != 0)
                );
  lVar22 = (longlong)
           (int)(((int)DAT_00723934 >> 1) + (uint)((int)DAT_00723934 < 0 && (DAT_00723934 & 1) != 0)
                );
  for (iVar11 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar11),
      sVar1 != -0x16cc && sVar1 != -1; iVar11 = iVar11 + 8) {
    uVar8 = uVar8 + 1;
  }
  iVar11 = (int)((uVar8 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
      lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,lVar19,
             iVar25,lVar24,lVar22,uVar6);
  uVar8 = 0;
  for (pIVar18 = IconTableEntry; pIVar18->iconId != 0xe934 && pIVar18->iconId != 0xffff;
      pIVar18 = pIVar18 + 1) {
    uVar8 = uVar8 + 1;
  }
  iVar11 = (int)((uVar8 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
      lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
    }
  }
  iVar11 = (int)lVar19;
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,
             DAT_00723930 + iVar11,DAT_00723934 + iVar25,-lVar24,-lVar22,uVar6);
  uVar8 = 0;
  for (pIVar18 = IconTableEntry; pIVar18->iconId != 0xe934 && pIVar18->iconId != 0xffff;
      pIVar18 = pIVar18 + 1) {
    uVar8 = uVar8 + 1;
  }
  iVar12 = (int)((uVar8 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar12) == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar12)) {
      lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar12) + 1;
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,
             DAT_00723930 + iVar11,iVar25,-lVar24,lVar22,uVar6);
  uVar8 = 0;
  for (pIVar18 = IconTableEntry; pIVar18->iconId != 0xe934 && pIVar18->iconId != 0xffff;
      pIVar18 = pIVar18 + 1) {
    uVar8 = uVar8 + 1;
  }
  iVar12 = (int)((uVar8 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar12) == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar12)) {
      lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar12) + 1;
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,lVar19,
             DAT_00723934 + iVar25,lVar24,-lVar22,uVar6);
  iVar12 = 0;
  if (0 < DAT_00a1c080) {
    iVar20 = 0;
    do {
      local_d0 = (longlong)DAT_00a1c080;
      dVar28 = (double)fastfunc::FastWrapRot
                                 (((float)(longlong)iVar12 * 2.0 * 3.1415927) / (float)local_d0 -
                                  3.1415927,1.5707964);
      dVar34 = (double)(float)(dVar28 + 1.570796251296997);
      dVar41 = (double)(float)(dVar40 - dVar28);
      if (dVar28 - (double)(float)(dVar40 - dVar28) < 0.0) {
        dVar41 = dVar28;
      }
      dVar33 = (double)(float)(dVar40 - dVar34);
      if (dVar34 - (double)(float)(dVar40 - dVar34) < 0.0) {
        dVar33 = dVar34;
      }
      dVar29 = (double)(float)(dVar39 - dVar28);
      if ((double)(float)(dVar39 - dVar28) - dVar41 < 0.0) {
        dVar29 = dVar41;
      }
      dVar28 = (double)(float)(dVar29 * dVar29);
      dVar41 = (double)(float)(dVar39 - dVar34);
      if ((double)(float)(dVar39 - dVar34) - dVar33 < 0.0) {
        dVar41 = dVar33;
      }
      dVar34 = (double)(float)(dVar41 * dVar41);
      dVar33 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar29));
      dVar31 = (double)(float)(dVar28 * dVar33);
      dVar32 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar41));
      iVar13 = *(int *)(param_1 + 0x74);
      dVar30 = (double)(float)(dVar34 * dVar32);
      iVar21 = (int)(DAT_0072434c *
                    (float)((double)(float)(dVar28 * dVar31) * dVar35 +
                           (double)(float)(dVar31 * dVar36 +
                                          (double)(float)(dVar33 * dVar37 +
                                                         (double)(float)((double)(float)(dVar28 * 
                                                  dVar29) * dVar38 + dVar29)))));
      local_d0 = (longlong)iVar21;
      iVar23 = DAT_00723938 + iVar11 +
               (int)(DAT_0072434c *
                     (float)((double)(float)(dVar34 * dVar30) * dVar35 +
                            (double)(float)(dVar30 * dVar36 +
                                           (double)(float)(dVar32 * dVar37 +
                                                          (double)(float)((double)(float)(dVar34 * 
                                                  dVar41) * dVar38 + dVar41)))) * DAT_0072437c);
      iVar21 = DAT_0072393c + iVar25 + iVar21;
      if ((iVar13 == iVar12) && (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar20) != 0))
      {
        uVar8 = 0;
        for (pIVar18 = IconTableEntry; pIVar18->iconId != 0xe99c && pIVar18->iconId != 0xffff;
            pIVar18 = pIVar18 + 1) {
          uVar8 = uVar8 + 1;
        }
        iVar13 = (int)((uVar8 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar13) == -1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if (*(short *)((int)&IconTableEntry->unknown + iVar13) != 0) {
            uVar8 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar13);
          }
        }
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar8 << 2)) * 0x24,
                   iVar23 + -0x13,iVar21 + -0x13,0x26,0x26,uVar7);
        iVar13 = *(int *)(param_1 + 0x74);
      }
      if (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar20) != 0) {
        uVar10 = uVar6;
        if (iVar12 != iVar13) {
          local_d0 = (longlong)(int)uVar6;
          uVar10 = fastfunc::FastDoubleToInt((double)((float)local_d0 * DAT_00724378));
        }
        if (DAT_00a1bfe4 == 0) {
          uVar8 = 0;
          iVar16 = 0;
          iVar13 = *(int *)(DAT_00a1c084 * 4 + DAT_00a1c190);
          iVar15 = *(int *)(iVar13 + iVar20 + 4) + 4;
          while (uVar17 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar16),
                uVar17 != *(uint *)(iVar13 + iVar20) && uVar17 != 0xffff) {
            iVar16 = iVar16 + 8;
            uVar8 = uVar8 + 1;
          }
          iVar13 = (int)((uVar8 & 0x1fffffff) << 3);
          if (*(short *)((int)&IconTableEntry->iconId + iVar13) == -1) {
            iVar16 = 0;
          }
          else {
            iVar16 = 0;
            if (iVar15 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar13)) {
              iVar16 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar13) + iVar15;
            }
          }
          HudEntry_DrawIcon(param_1,iVar16,iVar23,iVar21,1,uVar6);
        }
        else {
          iVar15 = *(int *)(DAT_00a1c084 * 4 + DAT_00a1c190);
          uVar8 = 0;
          iVar16 = 0;
          iVar13 = *(int *)(iVar15 + iVar20 + 4);
          while (uVar17 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar16),
                uVar17 != *(uint *)(iVar15 + iVar20) && uVar17 != 0xffff) {
            iVar16 = iVar16 + 8;
            uVar8 = uVar8 + 1;
          }
          iVar15 = (int)((uVar8 & 0x1fffffff) << 3);
          if (*(short *)((int)&IconTableEntry->iconId + iVar15) == -1) {
            iVar16 = 0;
          }
          else {
            iVar16 = 0;
            if (iVar13 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar15)) {
              iVar16 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar15) + iVar13;
            }
          }
          HudEntry_DrawIcon(param_1,iVar16,iVar23,iVar21,1,uVar10);
        }
      }
      iVar12 = iVar12 + 1;
      iVar20 = iVar20 + 0x1c;
    } while (iVar12 < DAT_00a1c080);
  }
  iVar12 = *(int *)(param_1 + 0x74);
  if (((-1 < iVar12) && (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar12 * 0x1c) != 0))
     && (-1 < iVar12)) {
    local_e0[0] = STR_WAIT;
    local_e0[3] = 0x521e;
    local_e0[2] = 0x521f;
    local_e0[1] = 0x521d;
    uVar6 = help::help_msg_string_by_index(local_e0[iVar12]);
    if (((char *)uVar6 != (char *)0x0) && (sVar14 = libc::strlen((char *)uVar6), sVar14 != 0)) {
      dVar26 = (double)(float)(dVar27 * dVar26);
      uVar7 = fastfunc::FastLerpColor(dVar26,PTR_DAT_00724384,DAT_00724388);
      uVar10 = fastfunc::FastLerpColor(dVar26,0,0xffffffff80000000);
      iVar25 = DAT_0072438c + iVar25 + DAT_0072393c;
      draw::FontPrintMediumCenter
                (DAT_00723938 + iVar11 + -1,iVar25 + -1,uVar10,uVar6,0xffffffffffffffff);
      draw::FontPrintMediumCenter(DAT_00723938 + iVar11,iVar25,uVar7,uVar6,0xffffffffffffffff);
    }
  }
  return *(undefined4 *)(param_1 + 0x58);
}



